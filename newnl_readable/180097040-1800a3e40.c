/* ===== 180097040 sscanf_s ===== */

int __cdecl sscanf_s(char *_Src,char *_Format,...)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x97040  143  sscanf_s */
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar1 = (ulonglong *)FUN_180013650();
  iVar2 = FUN_18050fa44(*puVar1 | 1,_Src,0xffffffffffffffff,_Format,0,&local_res18);
  return iVar2;
}



/* ===== 1800970a0 FUN_1800970a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800970a0(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_80 = param_1;
  local_58 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_C__neverlose_scripts_ui_1806e6e60._8_4_;
  uVar3 = s_C__neverlose_scripts_ui_1806e6e60._4_4_;
  local_48 = 0x16;
  local_40 = 0x1f;
  uVar2 = CONCAT22(s_C__neverlose_scripts_ui_1806e6e60._14_2_,
                   s_C__neverlose_scripts_ui_1806e6e60._12_2_);
  *(undefined4 *)local_58 = s_C__neverlose_scripts_ui_1806e6e60._0_4_;
  *(undefined4 *)(local_58 + 4) = uVar3;
  *(undefined4 *)(local_58 + 8) = uVar4;
  *(undefined4 *)(local_58 + 0xc) = uVar2;
  *(ulonglong *)(local_58 + 0xe) =
       CONCAT62(s_C__neverlose_scripts_ui_1806e6e60._16_6_,
                s_C__neverlose_scripts_ui_1806e6e60._14_2_);
  local_58[0x16] = '\0';
  puVar5 = (ulonglong *)FUN_1800134a0(&local_58,&DAT_1806e067c,1);
  local_78 = *puVar5;
  uStack_70 = puVar5[1];
  local_68 = puVar5[2];
  uStack_60 = puVar5[3];
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  uVar6 = FUN_1800667a0(local_38,&local_78,param_2);
  puVar7 = (undefined4 *)FUN_1800134a0(uVar6,&DAT_1806e6e54,4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)param_1 = *puVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = puVar7[5];
  uVar3 = puVar7[6];
  uVar4 = puVar7[7];
  *(undefined4 *)(param_1 + 2) = puVar7[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0xf;
  *(undefined1 *)puVar7 = 0;
  FUN_18000f890(local_38);
  if (0xf < uStack_60) {
    uVar10 = uStack_60 + 1;
    uVar11 = local_78;
    if (0xfff < uVar10) {
      uVar11 = *(ulonglong *)(local_78 - 8);
      if (0x1f < (local_78 - uVar11) - 8) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_18009727e;
      }
      uVar10 = uStack_60 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar11,uVar10);
  }
  local_68 = 0;
  uStack_60 = 0xf;
  local_78 = local_78 & 0xffffffffffffff00;
  if (0xf < local_40) {
    uVar11 = local_40 + 1;
    pcVar9 = local_58;
    if (0xfff < uVar11) {
      pcVar9 = *(char **)(local_58 + -8);
      if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar9)) {
LAB_18009727e:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar8 = (undefined8 *)(*pcVar1)();
        return puVar8;
      }
      uVar11 = local_40 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar9,uVar11);
  }
  return param_1;
}



/* ===== 180097290 FUN_180097290 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180097290(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  local_b0 = param_1;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    puVar2 = (ulonglong *)FUN_180073a70(local_48,param_2 + 8,&DAT_1806e08bc);
    uVar6 = 1;
  }
  else {
    uVar3 = FUN_180073a70(local_68,param_2 + 0x28,&DAT_1806e08bc);
    local_b8 = 2;
    uVar3 = FUN_1800667a0(local_88,uVar3,param_2 + 8);
    local_b8 = 6;
    puVar2 = (ulonglong *)FUN_1800134a0(uVar3,&DAT_1806e08bc,1);
    local_a8 = *puVar2;
    uStack_a0 = puVar2[1];
    local_98 = puVar2[2];
    uStack_90 = puVar2[3];
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    *(undefined1 *)puVar2 = 0;
    uVar6 = 0x2e;
    puVar2 = &local_a8;
  }
  local_b8 = uVar6;
  FUN_1800667a0(param_1,puVar2,param_2 + 0x48);
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    if (0xf < uStack_90) {
      uVar5 = uStack_90 + 1;
      uVar4 = local_a8;
      if (0xfff < uVar5) {
        uVar4 = *(ulonglong *)(local_a8 - 8);
        if (0x1f < (local_a8 - uVar4) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        uVar5 = uStack_90 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar4,uVar5);
    }
    local_98 = 0;
    uStack_90 = 0xf;
    local_a8 = local_a8 & 0xffffffffffffff00;
  }
  if ((uVar6 & 4) != 0) {
    uVar6 = uVar6 & 0xfffffffb;
    FUN_18000f890(local_88);
  }
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    FUN_18000f890(local_68);
  }
  if ((uVar6 & 1) != 0) {
    FUN_18000f890(local_48);
  }
  return param_1;
}



/* ===== 180097440 FUN_180097440 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180097440(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  size_t sVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  char *_Str;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  double local_e8;
  undefined1 local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  undefined8 ****local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  char local_88 [64];
  ulonglong local_48;
  
  puVar12 = auStack_108;
  puVar13 = auStack_108;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  uVar9 = 0;
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
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_b8 = param_1;
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    _Str = "0";
    if (*(char *)(param_2 + 0x68) != '\0') {
      _Str = "1";
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar6 = strlen(_Str);
    FUN_1800133a0(param_1,_Str,sVar6);
    puVar13 = auStack_108;
    break;
  case 1:
  case 3:
  case 9:
  case 10:
    FUN_18003a390(param_1,*(undefined4 *)(param_2 + 0x6c));
    puVar13 = auStack_108;
    break;
  case 2:
    snprintf(local_88,0x40,&DAT_1806e0008,(double)*(float *)(param_2 + 0x70));
    puVar13 = auStack_108;
    goto LAB_180097532;
  case 4:
    lStack_a0 = 0;
    uVar9 = 0;
    local_98 = 0;
    uStack_90 = 0xf;
    local_a8 = (undefined8 ****)0x0;
    local_b8 = (longlong *)0x0;
    if (*(longlong *)(param_2 + 0xa8) - *(longlong *)(param_2 + 0xa0) >> 5 != 0) {
      uVar10 = 0xf;
      do {
        ppppuVar7 = local_a8;
        if ((*(longlong *)(param_2 + 0xb8) == 0) ||
           (local_c8 = 0x31, *(char *)((longlong)local_b8 + *(longlong *)(param_2 + 0xb8)) == '\0'))
        {
          local_c8 = 0x30;
        }
        if (uVar9 < uVar10) {
          local_98 = uVar9 + 1;
          ppppuVar7 = &local_a8;
          if (0xf < uVar10) {
            ppppuVar7 = local_a8;
          }
          *(undefined1 *)((longlong)ppppuVar7 + uVar9) = local_c8;
          *(undefined1 *)((longlong)ppppuVar7 + uVar9 + 1) = 0;
          uVar9 = local_98;
          uVar11 = uStack_90;
        }
        else {
          if (uVar9 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          local_c0 = uVar9 + 1;
          uVar11 = local_c0 | 0xf;
          if (uVar11 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (uVar10 >> 1) < uVar10) {
              uVar11 = 0x7fffffffffffffff;
            }
            else {
              uVar1 = (uVar10 >> 1) + uVar10;
              if (uVar11 < uVar1) {
                uVar11 = uVar1;
              }
            }
          }
          else {
            uVar11 = 0x7fffffffffffffff;
          }
          ppppuVar8 = (undefined8 ****)FUN_18000fb70(uVar11 + 1);
          local_98 = local_c0;
          uStack_90 = uVar11;
          if (uVar10 < 0x10) {
            FUN_180540530(ppppuVar8,&local_a8,uVar9);
            *(undefined1 *)((longlong)ppppuVar8 + uVar9) = local_c8;
            *(undefined1 *)((longlong)ppppuVar8 + uVar9 + 1) = 0;
          }
          else {
            FUN_180540530(ppppuVar8,ppppuVar7,uVar9);
            *(undefined1 *)((longlong)ppppuVar8 + uVar9) = local_c8;
            *(undefined1 *)((longlong)ppppuVar8 + uVar9 + 1) = 0;
            if (uVar10 + 1 < 0x1000) {
              thunk_FUN_1803d64e0(ppppuVar7);
            }
            else {
              if (0x1f < (ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar7[-1]))) {
                pcVar5 = (code *)swi(0x29);
                (*pcVar5)(5);
                puVar12 = auStack_100;
                goto switchD_1800974a7_caseD_5;
              }
              thunk_FUN_1803d64e0(ppppuVar7[-1],uVar10 + 0x28);
            }
          }
          uVar9 = local_c0;
          local_a8 = ppppuVar8;
        }
        local_b8 = (longlong *)((longlong)local_b8 + 1);
        uVar10 = uVar11;
      } while (local_b8 <
               (longlong *)(*(longlong *)(param_2 + 0xa8) - *(longlong *)(param_2 + 0xa0) >> 5));
    }
    *param_1 = (longlong)local_a8;
    param_1[1] = lStack_a0;
    param_1[2] = local_98;
    param_1[3] = uStack_90;
    break;
  case 5:
switchD_1800974a7_caseD_5:
    fVar2 = *(float *)(param_2 + 200);
    fVar3 = *(float *)(param_2 + 0xc4);
    fVar4 = *(float *)(param_2 + 0xc0);
    *(double *)(puVar12 + 0x30) = (double)*(float *)(param_2 + 0xcc);
    *(double *)(puVar12 + 0x28) = (double)fVar2;
    *(double *)(puVar12 + 0x20) = (double)fVar3;
    *(undefined8 *)(puVar12 + -8) = 0x1800977a8;
    snprintf(local_88,0x40,"%.6g %.6g %.6g %.6g",(double)fVar4);
    puVar13 = puVar12;
    goto LAB_180097532;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    puVar13 = auStack_108;
    break;
  case 7:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar6 = strlen((char *)(param_2 + 0xd1));
    FUN_1800133a0(param_1,param_2 + 0xd1,sVar6);
    puVar13 = auStack_108;
    break;
  case 0xe:
    local_e8 = (double)*(float *)(param_2 + 0x24c);
    snprintf(local_88,0x40,"%.6g %.6g",(double)*(float *)(param_2 + 0x248));
    puVar13 = auStack_108;
LAB_180097532:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = uVar9;
    param_1[3] = uVar9;
    *(undefined8 *)(puVar13 + -8) = 0x180097549;
    sVar6 = strlen(local_88);
    *(undefined8 *)(puVar13 + -8) = 0x180097558;
    FUN_1800133a0(param_1,local_88,sVar6);
  }
  *(undefined8 *)(puVar13 + -8) = 0x1800977fc;
  return param_1;
}



/* ===== 180097860 FUN_180097860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180097860(longlong param_1,char *param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auStackY_58 [32];
  float local_28;
  float local_24;
  undefined1 local_20 [8];
  undefined1 auStack_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStackY_58;
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      pcVar4 = param_2;
    }
    else {
      pcVar4 = *(char **)param_2;
    }
    if (*(longlong *)(param_2 + 0x10) == 1) {
      *(bool *)(param_1 + 0x68) = *pcVar4 == '1';
      return;
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
    return;
  case 1:
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    iVar2 = FUN_1805145e4(param_2);
    iVar5 = (int)*(float *)(param_1 + 0x74);
    *(int *)(param_1 + 0x6c) = iVar2;
    if (iVar2 < iVar5) {
      *(int *)(param_1 + 0x6c) = iVar5;
      iVar2 = iVar5;
    }
    if ((int)*(float *)(param_1 + 0x78) < iVar2) {
      *(int *)(param_1 + 0x6c) = (int)*(float *)(param_1 + 0x78);
      return;
    }
    break;
  case 2:
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    dVar1 = (double)FUN_18051502c(param_2);
    fVar7 = (float)dVar1;
    if ((*(float *)(param_1 + 0x74) <= fVar7) && (fVar7 <= *(float *)(param_1 + 0x78))) {
      *(float *)(param_1 + 0x70) = fVar7;
      return;
    }
    break;
  case 3:
  case 10:
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    iVar2 = FUN_1805145e4(param_2);
    if ((-1 < iVar2) &&
       (iVar2 < (int)(*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 5))) {
      *(int *)(param_1 + 0x6c) = iVar2;
      return;
    }
    break;
  case 4:
    uVar6 = 0;
    if (*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 5 != 0) {
      while (uVar6 < *(ulonglong *)(param_2 + 0x10)) {
        if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
          pcVar4 = param_2;
        }
        else {
          pcVar4 = *(char **)param_2;
        }
        *(bool *)(uVar6 + *(longlong *)(param_1 + 0xb8)) = pcVar4[uVar6] == '1';
        uVar6 = uVar6 + 1;
        if ((ulonglong)(*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 5) <= uVar6
           ) {
          return;
        }
      }
    }
    break;
  case 5:
    local_20 = (undefined1  [8])0x0;
    auStack_18 = (undefined1  [8])0x0;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    iVar2 = sscanf_s(param_2,"%f %f %f %f",(double *)local_20,(double *)(local_20 + 4),
                     (double *)auStack_18,(double *)(auStack_18 + 4));
    if (iVar2 == 4) {
      *(undefined1 (*) [8])(param_1 + 0xc0) = local_20;
      *(undefined1 (*) [8])(param_1 + 200) = auStack_18;
      return;
    }
    break;
  case 7:
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    snprintf(param_1 + 0xd1,0x100,&DAT_1806d3198,param_2);
    break;
  case 9:
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    uVar3 = FUN_1805145e4(param_2);
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
    return;
  case 0xe:
    local_28 = -1.0;
    local_24 = -1.0;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    iVar2 = sscanf_s(param_2,"%f %f",(double *)&local_28,(double *)&local_24);
    if (((iVar2 == 2) && (0.0 <= local_28)) && (0.0 <= local_24)) {
      *(float *)(param_1 + 0x248) = local_28;
      *(float *)(param_1 + 0x24c) = local_24;
      return;
    }
  }
  return;
}



/* ===== 180097bc0 FUN_180097bc0 ===== */

undefined8 * FUN_180097bc0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  size_t sVar3;
  size_t _Size;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x38);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar5 != puVar1) {
    uVar2 = param_2[3];
    sVar3 = param_2[2];
    do {
      if (uVar2 < 0x10) {
        _Buf2 = param_2;
      }
      else {
        _Buf2 = (undefined8 *)*param_2;
      }
      _Size = puVar5[2];
      if ((ulonglong)puVar5[3] < 0x10) {
        _Buf1 = puVar5;
      }
      else {
        _Buf1 = (undefined8 *)*puVar5;
      }
      if (_Size == sVar3) {
        if (_Size == 0) {
          return puVar5;
        }
        iVar4 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar4 == 0) {
          return puVar5;
        }
      }
      puVar5 = puVar5 + 10;
    } while (puVar5 != puVar1);
  }
  return (undefined8 *)0x0;
}



/* ===== 180097c40 FUN_180097c40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180097c40(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [48];
  undefined1 local_68;
  undefined8 local_67;
  undefined4 local_5f;
  undefined2 local_5b;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_98;
  lVar2 = FUN_180097bc0();
  if (lVar2 == 0) {
    FUN_180024b50(&local_68,param_2);
    uStack_30 = _UNK_1808ad418;
    local_38 = _DAT_1808ad410;
    uStack_40 = 0;
    local_48 = 0;
    local_28 = 0;
    local_20 = 0x3f800000;
    puVar1 = *(undefined1 **)(param_1 + 0x40);
    if (puVar1 == *(undefined1 **)(param_1 + 0x48)) {
      FUN_1800999f0(param_1 + 0x38,puVar1,&local_68);
    }
    else {
      *puVar1 = local_68;
      *(undefined8 *)(puVar1 + 1) = local_67;
      *(undefined4 *)(puVar1 + 9) = local_5f;
      *(undefined2 *)(puVar1 + 0xd) = local_5b;
      puVar1[0xf] = local_59;
      *(undefined8 *)(puVar1 + 0x10) = local_58;
      *(undefined8 *)(puVar1 + 0x18) = uStack_50;
      local_58 = local_38;
      uStack_50 = uStack_30;
      local_68 = 0;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined8 *)(puVar1 + 0x28) = 0;
      *(undefined8 *)(puVar1 + 0x30) = 0;
      *(undefined8 *)(puVar1 + 0x38) = 0xf;
      local_48 = 0;
      *(undefined8 *)(puVar1 + 0x40) = 0;
      *(undefined4 *)(puVar1 + 0x48) = 0x3f800000;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
    }
    FUN_18000f890(&local_48);
    FUN_18000f890(&local_68);
    lVar2 = *(longlong *)(param_1 + 0x40) + -0x50;
  }
  return lVar2;
}



/* ===== 180097d90 FUN_180097d90 ===== */

bool FUN_180097d90(longlong param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  
  if (*(char *)((longlong)param_2 + 0x1d1) != '\0') {
    if (param_2[0x75] < 0) {
switchD_180097e1a_caseD_5:
      return true;
    }
    for (piVar5 = *(int **)(param_1 + 0x68); piVar5 != *(int **)(param_1 + 0x70);
        piVar5 = piVar5 + 0x96) {
      if (*piVar5 == param_2[0x75]) {
        if (piVar5 == param_2) {
          return false;
        }
        cVar2 = FUN_180097d90(param_1,piVar5);
        if (cVar2 == '\0') {
          return false;
        }
        if (10 < (uint)piVar5[1]) {
          return true;
        }
        iVar1 = param_2[0x76];
        switch(piVar5[1]) {
        case 0:
          return (bool)(char)piVar5[0x1a];
        default:
          if (iVar1 < 0) {
            return piVar5[0x1b] != 0;
          }
          return piVar5[0x1b] == iVar1;
        case 2:
          if ((float)piVar5[0x1c] == 0.0) {
            return false;
          }
          return true;
        case 4:
          uVar4 = *(longlong *)(piVar5 + 0x2a) - *(longlong *)(piVar5 + 0x28) >> 5;
          if (iVar1 < 0) {
            if (uVar4 == 0) {
              return false;
            }
            uVar3 = 0;
            do {
              if (*(char *)(uVar3 + *(longlong *)(piVar5 + 0x2e)) != '\0') {
                return true;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < uVar4);
            return false;
          }
          if ((int)uVar4 <= iVar1) {
            return false;
          }
          if (*(char *)((longlong)iVar1 + *(longlong *)(piVar5 + 0x2e)) == '\0') {
            return false;
          }
          return true;
        case 5:
        case 6:
        case 8:
          goto switchD_180097e1a_caseD_5;
        case 7:
          return *(char *)((longlong)piVar5 + 0xd1) != '\0';
        case 9:
          return piVar5[0x1b] != 0;
        }
      }
    }
  }
  return false;
}



/* ===== 180097f30 FUN_180097f30 ===== */

undefined8 FUN_180097f30(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *local_res10;
  undefined *local_res18;
  
  local_res18 = &DAT_1809e8e50;
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
  FUN_180098180(param_1);
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x110);
  puVar3[0x19] = 0x3f800000;
  *(undefined2 *)((longlong)puVar3 + 0x10d) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x10f) = 0;
  uVar5 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0xf;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0xf;
  *(undefined1 *)(puVar3 + 0x14) = 0;
  puVar3[0x18] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0xf;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x20] = 0;
  *(undefined4 *)(puVar3 + 0x21) = 1;
  *(undefined1 *)((longlong)puVar3 + 0x10c) = 0;
  local_res10 = puVar3;
  if (puVar3 != param_1) {
    if ((ulonglong)param_1[3] < 0x10) {
      puVar4 = param_1;
    }
    else {
      puVar4 = (undefined8 *)*param_1;
    }
    uVar5 = FUN_180029840(puVar3,puVar4,param_1[2]);
  }
  if (DAT_180cd0278 == DAT_180cd0280) {
    FUN_1800997f0(uVar5,DAT_180cd0278,&local_res10);
    puVar3 = local_res10;
  }
  else {
    *DAT_180cd0278 = puVar3;
    DAT_180cd0278 = DAT_180cd0278 + 1;
    puVar3 = (undefined8 *)0x0;
  }
  uVar1 = DAT_180cd0278[-1];
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1800993d0(puVar3 + 0x1e);
    FUN_18000f890(puVar3 + 0x1a);
    FUN_18000f890(puVar3 + 0x14);
    FUN_18000f890(puVar3 + 0x10);
    FUN_180099490(puVar3 + 0xd);
    FUN_180028940(puVar3 + 10);
    FUN_180099540(puVar3 + 7);
    FUN_1800288b0(puVar3 + 4);
    FUN_18000f890(puVar3);
    thunk_FUN_1803d64e0(puVar3,0x110);
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return uVar1;
}



/* ===== 180098180 FUN_180098180 ===== */

void FUN_180098180(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  iVar5 = FUN_1804e4d70(&DAT_1809e8e50);
  plVar7 = DAT_180cd0278;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd0270 != DAT_180cd0278) {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    plVar6 = DAT_180cd0270;
    do {
      _Buf1 = (undefined8 *)*plVar6;
      if (uVar1 < 0x10) {
        _Buf2 = param_1;
      }
      else {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      plVar8 = plVar6 + 1;
      if ((_Size == sVar2) && ((_Size == 0 || (iVar5 = memcmp(_Buf1,_Buf2,_Size), iVar5 == 0)))) {
        if (plVar8 != plVar7) {
          do {
            lVar3 = *plVar8;
            *plVar8 = 0;
            lVar4 = *plVar6;
            *plVar6 = lVar3;
            if (lVar4 != 0) {
              FUN_1800993d0(lVar4 + 0xf0);
              FUN_18000f890(lVar4 + 0xd0);
              FUN_18000f890(lVar4 + 0xa0);
              FUN_18000f890(lVar4 + 0x80);
              FUN_180099490(lVar4 + 0x68);
              FUN_180028940(lVar4 + 0x50);
              FUN_180099540(lVar4 + 0x38);
              FUN_1800288b0(lVar4 + 0x20);
              FUN_18000f890(lVar4);
              thunk_FUN_1803d64e0(lVar4,0x110);
            }
            plVar6 = plVar6 + 1;
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar7);
          plVar7 = DAT_180cd0278;
        }
        FUN_180099040(plVar7 + -1);
        DAT_180cd0278 = DAT_180cd0278 + -1;
        break;
      }
      plVar6 = plVar8;
    } while (plVar8 != plVar7);
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180098330 FUN_180098330 ===== */

undefined8 * FUN_180098330(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  longlong *plVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar5;
  longlong *plVar6;
  
  iVar4 = FUN_1804e4d70(&DAT_1809e8e50);
  plVar3 = DAT_180cd0278;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd0270 != DAT_180cd0278) {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    plVar6 = DAT_180cd0270;
    do {
      puVar5 = (undefined8 *)*plVar6;
      if (uVar1 < 0x10) {
        _Buf2 = param_1;
      }
      else {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = puVar5[2];
      if ((ulonglong)puVar5[3] < 0x10) {
        _Buf1 = puVar5;
      }
      else {
        _Buf1 = (undefined8 *)*puVar5;
      }
      if (_Size == sVar2) {
        if (_Size == 0) goto LAB_1800983d3;
        iVar4 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar4 == 0) goto LAB_1800983d3;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
  }
  puVar5 = (undefined8 *)0x0;
LAB_1800983d3:
  FUN_1804e4e90(&DAT_1809e8e50);
  return puVar5;
}



/* ===== 180098430 FUN_180098430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180098430(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *****pppppuVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *puVar14;
  undefined8 *****unaff_RBX;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 *****unaff_RSI;
  undefined8 *****unaff_RDI;
  longlong lVar20;
  uint unaff_R12D;
  longlong lVar21;
  longlong unaff_R15;
  undefined8 uStack_370;
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [40];
  ulonglong local_338;
  undefined8 *puStack_330;
  longlong local_328 [23];
  undefined **local_270 [13];
  longlong local_208 [34];
  undefined8 *****local_f8;
  undefined8 uStack_f0;
  undefined8 *****local_e8;
  ulonglong local_e0;
  undefined8 *****local_d8;
  undefined **ppuStack_d0;
  undefined8 *****local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 *****local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_368;
  lVar21 = 0;
  local_d8 = (undefined8 *****)((ulonglong)local_d8 & 0xffffffff00000000);
  ppuStack_d0 = &PTR_vftable_18091a158;
  local_b8 = "C:\\neverlose\\scripts\\ui";
  uStack_b0 = 0x16;
  uVar5 = FUN_1804e5000();
  FUN_180013d60(local_78,uVar5,&local_b8);
  FUN_180016bc0(local_78,&local_d8);
  FUN_1800289e0(local_78);
  local_338 = 0;
  puStack_330 = (undefined8 *)0x0;
  local_328[0] = 0;
  uVar7 = FUN_1800970a0(local_78,param_1);
  FUN_180067670(local_208,uVar7,1);
  FUN_18000f890(local_78);
  uStack_f0 = 0;
  local_e8 = (undefined8 *****)0x0;
  local_e0 = 0xf;
  local_f8 = (undefined8 *****)0x0;
  bVar4 = FUN_18006d510((longlong)local_208 + (longlong)*(int *)(local_208[0] + 4),10);
  pppppuVar13 = (undefined8 *****)(ulonglong)bVar4;
  plVar8 = (longlong *)FUN_180075fd0(local_208,&local_f8);
  puVar18 = auStack_368;
  puVar17 = auStack_368;
  puVar19 = auStack_368;
  bVar4 = *(byte *)((longlong)*(int *)(*plVar8 + 4) + 0x10 + (longlong)plVar8);
  while ((bVar4 & 6) == 0) {
    unaff_RSI = &local_f8;
    if (0xf < local_e0) {
      unaff_RSI = local_f8;
    }
    if (local_e8 != (undefined8 *****)0x0) {
      unaff_RBX = (undefined8 *****)((longlong)local_e8 + (longlong)unaff_RSI);
      unaff_RDI = (undefined8 *****)thunk_FUN_1804e6c50(unaff_RSI,unaff_RBX,9);
      if ((unaff_RDI != unaff_RBX) &&
         (unaff_RDI = (undefined8 *****)((longlong)unaff_RDI - (longlong)unaff_RSI),
         unaff_RDI != (undefined8 *****)0xffffffffffffffff)) {
        pppppuVar13 = (undefined8 *****)((longlong)unaff_RDI + 1);
        local_b8 = (char *)0x0;
        uStack_b0 = 0;
        local_a8 = 0;
        pppppuStack_a0 = (undefined8 *****)0x0;
        if (local_e8 < pppppuVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        lVar20 = -1;
        if ((longlong)local_e8 - (longlong)pppppuVar13 != -1) {
          lVar20 = (longlong)local_e8 - (longlong)pppppuVar13;
        }
        pppppuVar12 = &local_f8;
        if (0xf < local_e0) {
          pppppuVar12 = local_f8;
        }
        FUN_1800133a0(&local_b8,(longlong)pppppuVar12 + (longlong)pppppuVar13,lVar20);
        local_d8 = (undefined8 *****)0x0;
        ppuStack_d0 = (undefined **)0x0;
        local_c8 = (undefined8 *****)0x0;
        uStack_c0 = 0;
        if (local_e8 < unaff_RDI) {
          unaff_RDI = local_e8;
        }
        pppppuVar12 = &local_f8;
        if (0xf < local_e0) {
          pppppuVar12 = local_f8;
        }
        pppppuVar13 = unaff_RDI;
        FUN_1800133a0(&local_d8,pppppuVar12);
        if (puStack_330 == (undefined8 *)local_328[0]) {
          pppppuVar13 = &local_d8;
          FUN_180099600(&local_338,puStack_330,pppppuVar13,&local_b8);
          uVar16 = uStack_c0;
          unaff_RBX = pppppuStack_a0;
        }
        else {
          *puStack_330 = local_d8;
          puStack_330[1] = ppuStack_d0;
          puStack_330[2] = local_c8;
          puStack_330[3] = uStack_c0;
          local_d8 = (undefined8 *****)((ulonglong)local_d8 & 0xffffffffffffff00);
          *(undefined4 *)(puStack_330 + 4) = (undefined4)local_b8;
          *(undefined4 *)((longlong)puStack_330 + 0x24) = local_b8._4_4_;
          *(undefined4 *)(puStack_330 + 5) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)puStack_330 + 0x2c) = uStack_b0._4_4_;
          puStack_330[6] = local_a8;
          puStack_330[7] = pppppuStack_a0;
          local_b8 = (char *)((ulonglong)local_b8 & 0xffffffffffffff00);
          puStack_330 = puStack_330 + 8;
          uVar16 = 0xf;
          unaff_RBX = (undefined8 *****)0xf;
        }
        if (0xf < uVar16) {
          pppppuVar12 = (undefined8 *****)(uVar16 + 1);
          pppppuVar9 = local_d8;
          if (pppppuVar12 < (undefined8 *****)0x1000) {
LAB_180098723:
            thunk_FUN_1803d64e0(pppppuVar9,pppppuVar12);
            goto LAB_180098729;
          }
          pppppuVar9 = (undefined8 *****)local_d8[-1];
          if ((ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppuVar9)) < 0x20) {
            pppppuVar12 = (undefined8 *****)(uVar16 + 0x28);
            goto LAB_180098723;
          }
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar17 = auStack_360;
LAB_18009889e:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar18 = puVar17 + 8;
          goto LAB_1800988a5;
        }
LAB_180098729:
        if ((undefined8 *****)0xf < unaff_RBX) {
          pppppuVar12 = (undefined8 *****)((longlong)unaff_RBX + 1);
          pcVar10 = local_b8;
          if ((undefined8 *****)0xfff < pppppuVar12) {
            pcVar10 = *(char **)(local_b8 + -8);
            if ((char *)0x1f < local_b8 + (-8 - (longlong)pcVar10)) goto LAB_18009889e;
            pppppuVar12 = unaff_RBX + 5;
          }
          thunk_FUN_1803d64e0(pcVar10,pppppuVar12);
        }
      }
    }
    bVar4 = FUN_18006d510((longlong)local_208 + (longlong)*(int *)(local_208[0] + 4),10);
    pppppuVar13 = (undefined8 *****)(ulonglong)bVar4;
    plVar8 = (longlong *)FUN_180075fd0(local_208,&local_f8);
    bVar4 = *(byte *)((longlong)(plVar8 + 2) + (longlong)*(int *)(*plVar8 + 4));
  }
  if (0xf < local_e0) {
    pppppuVar12 = (undefined8 *****)(local_e0 + 1);
    pppppuVar9 = local_f8;
    if ((undefined8 *****)0xfff < pppppuVar12) {
      pppppuVar9 = (undefined8 *****)local_f8[-1];
      if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pppppuVar9))) {
LAB_1800988a5:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar19 = puVar18 + 8;
        goto LAB_1800988ac;
      }
      pppppuVar12 = (undefined8 *****)(local_e0 + 0x28);
    }
    thunk_FUN_1803d64e0(pppppuVar9,pppppuVar12);
  }
  local_e8 = (undefined8 *****)0x0;
  local_e0 = 0xf;
  local_f8 = (undefined8 *****)((ulonglong)local_f8 & 0xffffffffffffff00);
  FUN_18005e2f0(local_208);
  lVar21 = *(longlong *)(param_1 + 0x68);
  unaff_R15 = *(longlong *)(param_1 + 0x70);
  if (lVar21 != unaff_R15) {
    unaff_R12D = 0x3940;
    puVar19 = auStack_368;
    do {
      if ((0xd < *(uint *)(lVar21 + 4)) || ((unaff_R12D >> (*(uint *)(lVar21 + 4) & 0x1f) & 1) == 0)
         ) {
        *(undefined8 *)(puVar19 + -8) = 0x180098842;
        FUN_180097290(&local_d8,lVar21);
        *(undefined8 *)(puVar19 + -8) = 0x180098852;
        FUN_180097440(local_98,lVar21);
        unaff_RSI = (undefined8 *****)0x0;
        unaff_RDI = *(undefined8 ******)(puVar19 + 0x38);
        pppppuVar9 = *(undefined8 ******)(puVar19 + 0x30);
        if (pppppuVar9 == unaff_RDI) {
LAB_180098913:
          if (unaff_RDI == *(undefined8 ******)(puVar19 + 0x40)) {
            *(undefined8 *)(puVar19 + -8) = 0x180098953;
            FUN_180076ac0(puVar19 + 0x30,unaff_RDI,&local_d8,local_98);
          }
          else {
            *(undefined8 *)(puVar19 + -8) = 0x180098930;
            FUN_1800782c0(unaff_RDI,&local_d8,local_98);
            *(longlong *)(puVar19 + 0x38) = *(longlong *)(puVar19 + 0x38) + 0x40;
          }
        }
        else {
          do {
            pppppuVar12 = &local_d8;
            if (0xf < uStack_c0) {
              pppppuVar12 = local_d8;
            }
            pppppuVar13 = (undefined8 *****)pppppuVar9[2];
            unaff_RBX = pppppuVar9;
            if (pppppuVar9[3] < (undefined8 ****)0x10) {
LAB_1800988ac:
              pppppuVar9 = unaff_RBX;
            }
            else {
              unaff_RBX = (undefined8 *****)*pppppuVar9;
            }
            if (pppppuVar13 == local_c8) {
              if (pppppuVar13 != (undefined8 *****)0x0) {
                *(undefined8 *)(puVar19 + -8) = 0x1800988c2;
                iVar6 = memcmp(unaff_RBX,pppppuVar12,(size_t)pppppuVar13);
                if (iVar6 != 0) goto LAB_1800988fc;
              }
              if ((undefined8 ******)(pppppuVar9 + 4) != local_98) {
                pppppuVar13 = local_98;
                if (0xf < local_80) {
                  pppppuVar13 = local_98[0];
                }
                *(undefined8 *)(puVar19 + -8) = 0x1800988f9;
                FUN_180029840(pppppuVar9 + 4,pppppuVar13,local_88);
              }
              unaff_RSI = (undefined8 *****)0x1;
            }
LAB_1800988fc:
            pppppuVar9 = pppppuVar9 + 8;
          } while (pppppuVar9 != unaff_RDI);
          if ((char)unaff_RSI == '\0') {
            unaff_RDI = *(undefined8 ******)(puVar19 + 0x38);
            goto LAB_180098913;
          }
        }
        *(undefined8 *)(puVar19 + -8) = 0x180098960;
        FUN_18000f890(local_98);
        *(undefined8 *)(puVar19 + -8) = 0x18009896d;
        FUN_18000f890(&local_d8);
      }
      lVar21 = lVar21 + 600;
    } while (lVar21 != unaff_R15);
  }
  *(undefined8 *)(puVar19 + -8) = 0x18009898c;
  uVar7 = FUN_1800970a0(local_78,param_1);
  *(undefined8 *)(puVar19 + -8) = 0x1800989a0;
  FUN_180067620(puVar19 + 0x50,uVar7,0x10);
  *(undefined8 *)(puVar19 + -8) = 0x1800989ad;
  FUN_18000f890(local_78);
  puVar1 = *(undefined8 **)(puVar19 + 0x38);
  for (puVar15 = *(undefined8 **)(puVar19 + 0x30); puVar15 != puVar1; puVar15 = puVar15 + 8) {
    if ((ulonglong)puVar15[3] < 0x10) {
      puVar14 = puVar15;
    }
    else {
      puVar14 = (undefined8 *)*puVar15;
    }
    plVar8 = puVar15 + 4;
    uVar7 = puVar15[2];
    *(undefined8 *)(puVar19 + -8) = 0x1800989e1;
    uVar7 = FUN_180099140(puVar19 + 0x50,puVar14,uVar7);
    *(undefined8 *)(puVar19 + -8) = 0x1800989eb;
    uVar7 = FUN_180098db0(uVar7,9);
    if (0xf < (ulonglong)puVar15[7]) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar2 = puVar15[6];
    *(undefined8 *)(puVar19 + -8) = 0x180098a04;
    uVar7 = FUN_180099140(uVar7,plVar8,uVar2);
    *(undefined8 *)(puVar19 + -8) = 0x180098a0e;
    FUN_180098db0(uVar7,10);
  }
  *(undefined ***)(puVar19 + (longlong)*(int *)(*(longlong *)(puVar19 + 0x50) + 4) + 0x50) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(puVar19 + (longlong)*(int *)(*(longlong *)(puVar19 + 0x50) + 4) + 0x4c) =
       *(int *)(*(longlong *)(puVar19 + 0x50) + 4) + -0xa8;
  *(undefined8 *)(puVar19 + -8) = 0x180098a49;
  FUN_1800681f0(puVar19 + 0x58);
  *(undefined ***)(puVar19 + (longlong)*(int *)(*(longlong *)(puVar19 + 0x50) + 4) + 0x50) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)(puVar19 + (longlong)*(int *)(*(longlong *)(puVar19 + 0x50) + 4) + 0x4c) =
       *(int *)(*(longlong *)(puVar19 + 0x50) + 4) + -0x10;
  local_270[0] = std::ios_base::vftable;
  *(undefined8 *)(puVar19 + -8) = 0x180098a82;
  FUN_1804eaa10(local_270);
  uVar16 = *(ulonglong *)(puVar19 + 0x30);
  if (uVar16 != 0) {
    uVar11 = *(ulonglong *)(puVar19 + 0x38);
    if (uVar16 != uVar11) {
      do {
        *(undefined8 *)(puVar19 + -8) = 0x180098aa0;
        FUN_18000f890(uVar16 + 0x20);
        *(undefined8 *)(puVar19 + -8) = 0x180098aa8;
        FUN_18000f890(uVar16);
        uVar16 = uVar16 + 0x40;
      } while (uVar16 != uVar11);
      uVar16 = *(ulonglong *)(puVar19 + 0x30);
    }
    uVar11 = uVar16;
    if (0xfff < (*(longlong *)(puVar19 + 0x40) - uVar16 & 0xffffffffffffffc0)) {
      uVar11 = *(ulonglong *)(uVar16 - 8);
      uVar16 = (uVar16 - uVar11) - 8;
      if (0x1f < uVar16) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar19 = puVar19 + 8;
        uVar11 = uVar16;
      }
    }
    *(undefined8 *)(puVar19 + -8) = 0x180098af1;
    thunk_FUN_1803d64e0(uVar11);
  }
  *(undefined8 *)(puVar19 + -8) = 0x180098b00;
  return;
}



/* ===== 180098b20 FUN_180098b20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180098b20(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****_Buf1;
  ulonglong uVar10;
  ulonglong _Size;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_1e8 [64];
  longlong local_1a8 [2];
  byte abStack_198 [256];
  undefined8 ****local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 ****local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  if ((0xd < *(uint *)(param_2 + 4)) || ((0x3940U >> (*(uint *)(param_2 + 4) & 0x1f) & 1) == 0)) {
    uVar6 = FUN_1800970a0(&local_78,param_1);
    FUN_180067670(local_1a8,uVar6,1);
    FUN_18000f890(&local_78);
    if ((abStack_198[*(int *)(local_1a8[0] + 4)] & 6) == 0) {
      FUN_180097290(local_58,param_2);
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0xf;
      local_98 = (undefined8 ****)0x0;
      uVar4 = FUN_18006d510((longlong)local_1a8 + (longlong)*(int *)(local_1a8[0] + 4),10);
      plVar7 = (longlong *)FUN_180075fd0(local_1a8,&local_98,uVar4);
      bVar1 = *(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7);
      while ((bVar1 & 6) == 0) {
        ppppuVar9 = &local_98;
        if (0xf < local_80) {
          ppppuVar9 = local_98;
        }
        uVar8 = FUN_180066e00(ppppuVar9,local_88,0,9);
        uVar3 = local_48;
        uVar2 = local_88;
        if (uVar8 != 0xffffffffffffffff) {
          ppppuVar9 = local_58;
          if (0xf < local_40) {
            ppppuVar9 = local_58[0];
          }
          uVar10 = uVar8;
          if (local_88 < uVar8) {
            uVar10 = local_88;
          }
          _Buf1 = &local_98;
          if (0xf < local_80) {
            _Buf1 = local_98;
          }
          _Size = uVar10;
          if (local_48 < uVar10) {
            _Size = local_48;
          }
          iVar5 = memcmp(_Buf1,ppppuVar9,_Size);
          if ((((iVar5 == 0) && (uVar3 <= uVar10)) && (uVar10 <= uVar3)) && (uVar8 == uVar3)) {
            uVar8 = uVar8 + 1;
            local_78 = 0;
            uStack_70 = 0;
            local_68 = 0;
            uStack_60 = 0;
            if (uVar2 < uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_18002a1a0();
            }
            lVar12 = uVar2 - uVar8;
            lVar11 = -1;
            if (lVar12 != -1) {
              lVar11 = lVar12;
            }
            ppppuVar9 = &local_98;
            if (0xf < local_80) {
              ppppuVar9 = local_98;
            }
            FUN_1800133a0(&local_78,(longlong)ppppuVar9 + uVar8,lVar11);
            FUN_180097860(param_2,&local_78);
            if (0xf < uStack_60) {
              FUN_18000fad0(&local_78,local_78);
            }
            break;
          }
        }
        FUN_18006d510((longlong)local_1a8 + (longlong)*(int *)(local_1a8[0] + 4),10);
        plVar7 = (longlong *)FUN_180075fd0(local_1a8,&local_98);
        bVar1 = *(byte *)((longlong)plVar7 + (longlong)*(int *)(*plVar7 + 4) + 0x10);
      }
      if (0xf < local_80) {
        FUN_18000fb30(&local_98,local_98,local_80 + 1);
      }
      local_88 = 0;
      local_80 = 0xf;
      local_98 = (undefined8 ****)((ulonglong)local_98 & 0xffffffffffffff00);
      FUN_18000f890(local_58);
    }
    FUN_18005e2f0(local_1a8);
  }
  return;
}



/* ===== 180098db0 FUN_180098db0 ===== */

longlong * FUN_180098db0(longlong *param_1,byte param_2)

{
  byte bVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  uVar12 = (uint)param_2;
  uVar9 = 0;
  FUN_180069000(&local_78,param_1);
  if (local_70 != '\0') {
    lVar8 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
    lVar11 = 0;
    if (1 < lVar8) {
      lVar11 = lVar8 + -1;
    }
    if ((*(uint *)((longlong)*(int *)(*param_1 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      while( true ) {
        if (uVar9 != 0) goto LAB_180098edf;
        if (lVar11 < 1) break;
        plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        uVar5 = (uint)bVar1;
        if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
          uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar1);
        }
        else {
          *piVar3 = *piVar3 + -1;
          pbVar4 = *(byte **)plVar2[8];
          *(byte **)plVar2[8] = pbVar4 + 1;
          *pbVar4 = bVar1;
        }
        lVar11 = lVar11 + -1;
        uVar9 = 4;
        if (uVar5 != 0xffffffff) {
          uVar9 = 0;
        }
      }
    }
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
      uVar12 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    }
    else {
      *piVar3 = *piVar3 + -1;
      pbVar4 = *(byte **)plVar2[8];
      *(byte **)plVar2[8] = pbVar4 + 1;
      *pbVar4 = param_2;
    }
    bVar13 = uVar12 == 0xffffffff;
    while( true ) {
      uVar9 = 4;
      if (!bVar13) {
        uVar9 = 0;
      }
LAB_180098edf:
      if ((uVar9 != 0) || (lVar11 < 1)) break;
      plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
      bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
      if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
        iVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar1);
        lVar11 = lVar11 + -1;
        bVar13 = iVar6 == -1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        pbVar4 = *(byte **)plVar2[8];
        *(byte **)plVar2[8] = pbVar4 + 1;
        *pbVar4 = bVar1;
        lVar11 = lVar11 + -1;
        bVar13 = bVar1 == 0xffffffff;
      }
    }
  }
  *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  lVar8 = (longlong)*(int *)(*param_1 + 4);
  uVar12 = *(uint *)(lVar8 + 0x10 + (longlong)param_1);
  uVar5 = 4;
  if (*(longlong *)(lVar8 + 0x48 + (longlong)param_1) != 0) {
    uVar5 = 0;
  }
  *(uint *)(lVar8 + 0x10 + (longlong)param_1) = uVar5 | uVar9 | uVar12 & 0x17;
  uVar12 = (uVar5 | uVar9 | uVar12) & *(uint *)(lVar8 + 0x14 + (longlong)param_1);
  if ((uVar12 & 0x17) == 0) {
    iVar6 = thunk_FUN_1804ef6a0();
    if (iVar6 == 0) {
      FUN_18006bf40(local_78);
    }
    plVar2 = *(longlong **)((longlong)*(int *)(*local_78 + 4) + 0x48 + (longlong)local_78);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    return param_1;
  }
  if ((uVar12 & 4) == 0) {
    pcVar10 = "ios_base::failbit set";
    if ((uVar12 & 2) == 0) {
      pcVar10 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar10 = "ios_base::badbit set";
  }
  uVar7 = FUN_18004d7f0(local_68,1);
  FUN_18004e280(local_58,pcVar10,uVar7);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_58,&DAT_180915ec0);
}



/* ===== 180099040 FUN_180099040 ===== */

void FUN_180099040(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_1800993d0(lVar1 + 0xf0);
  FUN_18000f890(lVar1 + 0xd0);
  FUN_18000f890(lVar1 + 0xa0);
  FUN_18000f890(lVar1 + 0x80);
  FUN_180099490(lVar1 + 0x68);
  FUN_180028940(lVar1 + 0x50);
  FUN_180099540(lVar1 + 0x38);
  FUN_1800288b0(lVar1 + 0x20);
  FUN_18000f890(lVar1);
  thunk_FUN_1803d64e0(lVar1,0x110);
  return;
}



/* ===== 1800990d0 FUN_1800990d0 ===== */

uint FUN_1800990d0(undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong _Size;
  
  uVar1 = param_4[2];
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (undefined8 *)*param_4;
  }
  if ((ulonglong)param_1[2] < param_3) {
    param_3 = param_1[2];
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = param_3;
  if (uVar1 < param_3) {
    _Size = uVar1;
  }
  uVar2 = memcmp(param_1,param_4,_Size);
  if (uVar2 == 0) {
    if (param_3 < uVar1) {
      return 0xffffffff;
    }
    uVar2 = (uint)(uVar1 < param_3);
  }
  return uVar2;
}



/* ===== 180099140 FUN_180099140 ===== */

longlong * FUN_180099140(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  uVar12 = 0;
  uVar7 = *(ulonglong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if (((longlong)uVar7 < 1) || (uVar7 <= param_3)) {
    lVar9 = 0;
  }
  else {
    lVar9 = uVar7 - param_3;
  }
  FUN_180069000(&local_78,param_1);
  if (local_70 == '\0') {
    uVar12 = 4;
  }
  else {
    if ((*(uint *)((longlong)*(int *)(*param_1 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        uVar5 = (uint)bVar1;
        if ((*(longlong *)plVar4[8] == 0) || (piVar2 = (int *)plVar4[0xb], *piVar2 < 1)) {
          uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,bVar1);
        }
        else {
          *piVar2 = *piVar2 + -1;
          pbVar3 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar3 + 1;
          *pbVar3 = bVar1;
        }
        if (uVar5 == 0xffffffff) {
          uVar12 = 4;
          goto LAB_180099233;
        }
      }
    }
    plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    uVar7 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2,param_3);
    if (uVar7 == param_3) {
LAB_180099233:
      do {
        if (lVar9 == 0) goto LAB_1800992ab;
        plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        uVar5 = (uint)bVar1;
        if ((*(longlong *)plVar4[8] == 0) || (piVar2 = (int *)plVar4[0xb], *piVar2 < 1)) {
          uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,bVar1);
        }
        else {
          *piVar2 = *piVar2 + -1;
          pbVar3 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar3 + 1;
          *pbVar3 = bVar1;
        }
        if (uVar5 == 0xffffffff) {
          uVar12 = 4;
          goto LAB_1800992ab;
        }
        lVar9 = lVar9 + -1;
      } while( true );
    }
    uVar12 = 4;
LAB_1800992ab:
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  lVar9 = (longlong)*(int *)(*param_1 + 4);
  uVar5 = *(uint *)(lVar9 + 0x10 + (longlong)param_1);
  uVar11 = 4;
  if (*(longlong *)(lVar9 + 0x48 + (longlong)param_1) != 0) {
    uVar11 = 0;
  }
  *(uint *)(lVar9 + 0x10 + (longlong)param_1) = uVar11 | uVar12 | uVar5 & 0x17;
  uVar12 = (uVar11 | uVar12 | uVar5) & *(uint *)(lVar9 + 0x14 + (longlong)param_1);
  if ((uVar12 & 0x17) != 0) {
    if ((uVar12 & 4) == 0) {
      pcVar10 = "ios_base::failbit set";
      if ((uVar12 & 2) == 0) {
        pcVar10 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar10 = "ios_base::badbit set";
    }
    uVar8 = FUN_18004d7f0(local_68,1);
    FUN_18004e280(local_58,pcVar10,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(local_58,&DAT_180915ec0);
  }
  iVar6 = thunk_FUN_1804ef6a0();
  if (iVar6 == 0) {
    FUN_18006bf40(local_78);
  }
  plVar4 = *(longlong **)((longlong)*(int *)(*local_78 + 4) + 0x48 + (longlong)local_78);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  return param_1;
}



/* ===== 1800993d0 FUN_1800993d0 ===== */

void FUN_1800993d0(longlong *param_1)

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
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18009946d;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18009946d:
  *(undefined8 *)(puVar5 + -8) = 0x180099475;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180099490 FUN_180099490 ===== */

void FUN_180099490(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 600) {
    FUN_180054030(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18009951d;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18009951d:
  *(undefined8 *)(puVar5 + -8) = 0x180099525;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180099540 FUN_180099540 ===== */

void FUN_180099540(longlong *param_1)

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
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) << 4)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1800995d4;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1800995d4:
  *(undefined8 *)(puVar5 + -8) = 0x1800995dc;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180099600 FUN_180099600 ===== */

undefined8 *
FUN_180099600(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar9 = *param_1;
  if (param_1[1] - lVar9 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar7 = param_1[2] - lVar9 >> 6;
  uVar12 = (param_1[1] - lVar9 >> 6) + 1;
  uVar15 = 0x3ffffffffffffff;
  if (uVar7 <= 0x3ffffffffffffff - (uVar7 >> 1)) {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar15 = uVar12;
    if (uVar12 <= uVar7) {
      uVar15 = uVar7;
    }
    if (0x3ffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar6 = (undefined8 *)FUN_18000fb70();
  puVar14 = (undefined8 *)((param_2 - lVar9 & 0xffffffffffffffc0U) + (longlong)puVar6);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  uVar5 = param_3[1];
  *puVar14 = *param_3;
  puVar14[1] = uVar5;
  uVar5 = param_3[3];
  puVar14[2] = param_3[2];
  puVar14[3] = uVar5;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[7] = 0;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(puVar14 + 4) = *param_4;
  *(undefined4 *)((longlong)puVar14 + 0x24) = uVar2;
  *(undefined4 *)(puVar14 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar4;
  uVar2 = param_4[5];
  uVar3 = param_4[6];
  uVar4 = param_4[7];
  *(undefined4 *)(puVar14 + 6) = param_4[4];
  *(undefined4 *)((longlong)puVar14 + 0x34) = uVar2;
  *(undefined4 *)(puVar14 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x3c) = uVar4;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0xf;
  *(undefined1 *)param_4 = 0;
  lVar9 = param_1[1];
  lVar8 = *param_1;
  puVar13 = puVar6;
  if (param_2 != lVar9) {
    FUN_18006c260(*param_1,param_2,puVar6,param_1);
    lVar9 = param_1[1];
    puVar13 = puVar14 + 8;
    lVar8 = param_2;
  }
  FUN_18006c260(lVar8,lVar9,puVar13,param_1);
  puVar10 = auStack_48;
  puVar11 = auStack_48;
  lVar9 = *param_1;
  if (lVar9 == 0) goto LAB_1800997a7;
  lVar8 = param_1[1];
  for (; lVar9 != lVar8; lVar9 = lVar9 + 0x40) {
    FUN_18000f890(lVar9 + 0x20);
    FUN_18000f890(lVar9);
  }
  lVar9 = *param_1;
  if ((param_1[2] - lVar9 & 0xffffffffffffffc0U) < 0x1000) {
LAB_18009979f:
    lVar8 = lVar9;
    puVar11 = puVar10;
  }
  else {
    lVar8 = *(longlong *)(lVar9 + -8);
    if (0x1f < (lVar9 - lVar8) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar9 = (*pcVar1)(5);
      puVar10 = auStack_40;
      goto LAB_18009979f;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x1800997a7;
  thunk_FUN_1803d64e0(lVar8);
LAB_1800997a7:
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar12 * 8);
  param_1[2] = (longlong)(puVar6 + uVar15 * 8);
  return puVar14;
}



/* ===== 1800997f0 FUN_1800997f0 ===== */

undefined8 * FUN_1800997f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar9 = DAT_180cd0270;
  if ((longlong)DAT_180cd0278 - (longlong)DAT_180cd0270 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar10 = 0x1fffffffffffffff;
  uVar8 = (longlong)DAT_180cd0280 - (longlong)DAT_180cd0270 >> 3;
  uVar1 = ((longlong)DAT_180cd0278 - (longlong)DAT_180cd0270 >> 3) + 1;
  if (uVar8 <= 0x1fffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar10 * 8);
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  uVar2 = *param_3;
  *param_3 = 0;
  puVar13 = (undefined8 *)
            (((longlong)param_2 - (longlong)puVar9 & 0xfffffffffffffff8U) + (longlong)puVar7);
  *puVar13 = uVar2;
  puVar5 = DAT_180cd0278;
  puVar9 = puVar7;
  puVar4 = DAT_180cd0270;
  if (param_2 == DAT_180cd0278) {
    for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      uVar2 = *puVar4;
      *puVar4 = 0;
      *puVar9 = uVar2;
      puVar9 = puVar9 + 1;
    }
  }
  else {
    while( true ) {
      puVar6 = puVar13;
      DAT_180cd0278 = puVar5;
      if (puVar4 == param_2) break;
      uVar2 = *puVar4;
      *puVar4 = 0;
      *puVar9 = uVar2;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = DAT_180cd0278;
    }
    for (; param_2 != puVar5; param_2 = param_2 + 1) {
      uVar2 = *param_2;
      *param_2 = 0;
      puVar6[1] = uVar2;
      puVar6 = puVar6 + 1;
    }
  }
  puVar4 = DAT_180cd0278;
  puVar9 = DAT_180cd0270;
  if (DAT_180cd0270 == (undefined8 *)0x0) goto LAB_1800999a0;
  for (; puVar9 != puVar4; puVar9 = puVar9 + 1) {
    FUN_180099040(puVar9);
  }
  puVar9 = DAT_180cd0270;
  if ((ulonglong)(((longlong)DAT_180cd0280 - (longlong)DAT_180cd0270 >> 3) * 8) < 0x1000) {
LAB_180099995:
    puVar12 = puVar11;
  }
  else {
    puVar9 = (undefined8 *)DAT_180cd0270[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180cd0270 + (-8 - (longlong)puVar9))) {
      puVar9 = (undefined8 *)&DAT_00000005;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar11 = auStack_30;
      goto LAB_180099995;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1800999a0;
  thunk_FUN_1803d64e0(puVar9);
LAB_1800999a0:
  DAT_180cd0270 = puVar7;
  DAT_180cd0278 = puVar7 + uVar1;
  DAT_180cd0280 = puVar7 + uVar10;
  return puVar13;
}



/* ===== 1800999f0 FUN_1800999f0 ===== */

undefined8 * FUN_1800999f0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar10 = *param_1;
  uVar14 = 0x333333333333333;
  lVar7 = (param_1[1] - lVar10 >> 4) * -0x3333333333333333;
  if (lVar7 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar7 + 1;
  uVar9 = (param_1[2] - lVar10 >> 4) * -0x3333333333333333;
  if (uVar9 <= 0x333333333333333 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0x333333333333333 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar14 * 0x50);
  puVar15 = puVar8 + ((param_2 - lVar10) / 0x50) * 10;
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  puVar15[3] = 0;
  uVar6 = param_3[1];
  *puVar15 = *param_3;
  puVar15[1] = uVar6;
  uVar6 = param_3[3];
  puVar15[2] = param_3[2];
  puVar15[3] = uVar6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar15[4] = 0;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar4 = *(undefined4 *)(param_3 + 5);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar15 + 0x24) = uVar3;
  *(undefined4 *)(puVar15 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar4 = *(undefined4 *)(param_3 + 7);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar15 + 0x34) = uVar3;
  *(undefined4 *)(puVar15 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar5;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  puVar15[8] = param_3[8];
  *(undefined4 *)(puVar15 + 9) = *(undefined4 *)(param_3 + 9);
  lVar10 = param_1[1];
  lVar7 = *param_1;
  puVar13 = puVar8;
  if (param_2 != lVar10) {
    FUN_180099c40(*param_1,param_2,puVar8);
    lVar10 = param_1[1];
    puVar13 = puVar15 + 10;
    lVar7 = param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_180099c40(lVar7,lVar10,puVar13);
  lVar10 = *param_1;
  if (lVar10 == 0) goto LAB_180099bf0;
  lVar7 = param_1[1];
  for (; lVar10 != lVar7; lVar10 = lVar10 + 0x50) {
    FUN_18000f890(lVar10 + 0x20);
    FUN_18000f890(lVar10);
  }
  lVar10 = *param_1;
  lVar7 = lVar10;
  if ((ulonglong)((param_1[2] - lVar10 >> 4) << 4) < 0x1000) {
LAB_180099be5:
    puVar12 = puVar11;
  }
  else {
    lVar7 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar7) - 8U) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_40;
      goto LAB_180099be5;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180099bf0;
  thunk_FUN_1803d64e0(lVar7);
LAB_180099bf0:
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 10);
  param_1[2] = (longlong)(puVar8 + uVar14 * 10);
  return puVar15;
}



/* ===== 180099c40 FUN_180099c40 ===== */

undefined8 * FUN_180099c40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
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
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    param_1[7] = 0xf;
    param_3[8] = param_1[8];
    *(undefined4 *)(param_3 + 9) = *(undefined4 *)(param_1 + 9);
    param_3 = param_3 + 10;
  }
  return param_3;
}



/* ===== 180099cd0 FUN_180099cd0 ===== */

undefined8 * FUN_180099cd0(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  
  if ((ulonglong)param_1[3] < 8) {
    puVar4 = param_1;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
  }
  psVar3 = (short *)((longlong)puVar4 + param_1[2] * 2);
  psVar2 = psVar3;
  for (psVar1 = (short *)FUN_180013e50(puVar4); psVar1 != psVar2; psVar1 = psVar1 + 1) {
    if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) goto LAB_180099d20;
  }
LAB_180099d3f:
  psVar1 = (short *)thunk_FUN_1804e6d50(psVar3);
  if ((psVar3 != psVar1) && (psVar2 = psVar1 + -1, psVar3 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar3 != psVar1 + -2) || (psVar1[-2] != 0x2e)) {
LAB_180099d73:
        psVar1 = psVar2;
      }
    }
    else {
      for (psVar2 = psVar1 + -2; psVar3 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_180099d73;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180024d40(param_2,psVar3,(longlong)psVar1 - (longlong)psVar3 >> 1);
  return param_2;
LAB_180099d20:
  psVar2 = psVar3 + -1;
  if (psVar3[-1] == 0x5c) goto LAB_180099d3f;
  if ((psVar3[-1] == 0x2f) || (psVar3 = psVar2, psVar1 == psVar2)) goto LAB_180099d3f;
  goto LAB_180099d20;
}



/* ===== 180099dd0 FUN_180099dd0 ===== */

undefined8 * FUN_180099dd0(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  
  if ((ulonglong)param_1[3] < 8) {
    puVar4 = param_1;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
  }
  psVar3 = (short *)((longlong)puVar4 + param_1[2] * 2);
  psVar2 = psVar3;
  for (psVar1 = (short *)FUN_180013e50(puVar4); psVar1 != psVar2; psVar1 = psVar1 + 1) {
    if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) goto LAB_180099e20;
  }
LAB_180099e3f:
  psVar1 = (short *)thunk_FUN_1804e6d50(psVar3);
  if ((psVar3 != psVar1) && (psVar2 = psVar1 + -1, psVar3 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar3 != psVar1 + -2) || (psVar1[-2] != 0x2e)) goto LAB_180099e92;
    }
    else {
      for (psVar2 = psVar1 + -2; psVar3 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_180099e92;
      }
    }
  }
  psVar2 = psVar1;
LAB_180099e92:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_180024d40(param_2,psVar2,(longlong)psVar1 - (longlong)psVar2 >> 1);
  return param_2;
LAB_180099e20:
  psVar2 = psVar3 + -1;
  if (psVar3[-1] == 0x5c) goto LAB_180099e3f;
  if ((psVar3[-1] == 0x2f) || (psVar3 = psVar2, psVar1 == psVar2)) goto LAB_180099e3f;
  goto LAB_180099e20;
}



/* ===== 180099ed0 FUN_180099ed0 ===== */

undefined8 * FUN_180099ed0(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar5;
  
  puVar3 = DAT_180cd0290;
  if (DAT_180cd0288 != DAT_180cd0290) {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    puVar5 = DAT_180cd0288;
    do {
      if (uVar1 < 0x10) {
        _Buf2 = param_1;
      }
      else {
        _Buf2 = (undefined8 *)*param_1;
      }
      _Size = puVar5[2];
      if ((ulonglong)puVar5[3] < 0x10) {
        _Buf1 = puVar5;
      }
      else {
        _Buf1 = (undefined8 *)*puVar5;
      }
      if (_Size == sVar2) {
        if (_Size == 0) {
          return puVar5;
        }
        iVar4 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar4 == 0) {
          return puVar5;
        }
      }
      puVar5 = puVar5 + 0x1c;
    } while (puVar5 != puVar3);
  }
  return (undefined8 *)0x0;
}



/* ===== 180099f60 FUN_180099f60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018009a303) */
/* WARNING: Removing unreachable block (ram,0x00018009a317) */
/* WARNING: Removing unreachable block (ram,0x00018009a992) */
/* WARNING: Removing unreachable block (ram,0x00018009a32c) */
/* WARNING: Removing unreachable block (ram,0x00018009a333) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_180099f60(void)

{
  size_t _Size;
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  size_t sVar10;
  ulonglong ******ppppppuVar11;
  longlong *plVar12;
  undefined8 *_Buf1;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *_Buf2;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [24];
  uint local_2c8;
  ulonglong ******local_2c0;
  undefined1 local_2b8;
  undefined8 *local_2b0;
  undefined8 *puStack_2a8;
  undefined8 *local_2a0;
  ulonglong local_298;
  undefined **ppuStack_290;
  longlong *local_288;
  longlong *local_280;
  ulonglong local_278;
  ulonglong *apuStack_270 [4];
  undefined8 uStack_250;
  uint local_248 [2];
  undefined4 uStack_240;
  undefined4 uStack_23c;
  ulonglong local_238;
  ulonglong uStack_230;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong local_210;
  ulonglong local_208;
  undefined *local_1f8;
  undefined8 local_1f0;
  ulonglong ******local_1e8;
  ulonglong local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong ******local_1b8;
  undefined8 uStack_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulonglong *****local_178;
  ulonglong *****pppppuStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  uint local_158;
  undefined4 uStack_154;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong ******local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  ulonglong ******local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  ulonglong local_f8;
  char local_f0;
  ulonglong *****local_e8;
  ulonglong *****pppppuStack_e0;
  ulonglong *****local_d8;
  ulonglong *****local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2e8;
  local_2c8 = 0;
  local_298 = local_298 & 0xffffffff00000000;
  ppuStack_290 = &PTR_vftable_18091a158;
  local_288 = (longlong *)0x1806e6ec8;
  local_280 = (longlong *)&DAT_00000013;
  uVar3 = FUN_1804e5000();
  FUN_180013d60(&local_198,uVar3,&local_288);
  uVar20 = 0x600;
  local_2c8 = 0x600;
  piVar5 = (int *)FUN_180016ab0(&local_2c0,&local_198,&local_298);
  iVar4 = *piVar5;
  FUN_1800289e0(&local_198);
  if (iVar4 != 3) {
    local_288 = (longlong *)0x1806e6ec8;
    local_280 = (longlong *)&DAT_00000013;
    uVar3 = FUN_1804e5000();
    FUN_180013d60(&local_198,uVar3,&local_288);
    uVar20 = 0x18600;
    local_2c8 = 0x18600;
    FUN_180016bc0(&local_198,&local_298);
    FUN_1800289e0(&local_198);
  }
  local_2b0 = (undefined8 *)0x0;
  puStack_2a8 = (undefined8 *)0x0;
  local_2a0 = (undefined8 *)0x0;
  local_278 = 0;
  apuStack_270[0] = (ulonglong *)0x0;
  apuStack_270[1] = (ulonglong *)0x0;
  apuStack_270[3] = (ulonglong *)0x1806e6ec8;
  uStack_250 = 0x13;
  uVar3 = FUN_1804e5000();
  FUN_180013d60(&local_198,uVar3,apuStack_270 + 3);
  uVar20 = uVar20 | 0x1800;
  local_2c8 = uVar20;
  FUN_18004e860(local_248,&local_198,&local_298);
  FUN_1800289e0(&local_198);
  if (CONCAT44(uStack_23c,uStack_240) != 0) {
    LOCK();
    piVar5 = (int *)(CONCAT44(uStack_23c,uStack_240) + 8);
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_298 = (ulonglong)local_248[0];
  FUN_18004eae0(&local_220,&local_298);
  if (CONCAT44(uStack_23c,uStack_240) != 0) {
    LOCK();
    piVar5 = (int *)(CONCAT44(uStack_23c,uStack_240) + 8);
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_18004ebc0(&local_288,apuStack_270 + 3);
  if (local_220 != local_288) {
    do {
      plVar14 = local_220;
      FUN_180015fc0(local_220,&local_298,3);
      uVar21 = uVar20;
      if ((int)local_298 == 2) {
        local_1f8 = &DAT_1806e188c;
        local_1f0 = 4;
        uVar3 = FUN_1804e5000();
        FUN_180013d60(&local_1b8,uVar3,&local_1f8);
        plVar24 = plVar14 + 4;
        local_2c8 = uVar20 | 0xc;
        uVar6 = FUN_180099dd0(plVar24,&local_198);
        local_1e8 = (ulonglong ******)&local_1b8;
        if (7 < local_1a0) {
          local_1e8 = local_1b8;
        }
        local_1e0 = local_1a8;
        iVar4 = FUN_180014140(uVar6,&local_1e8);
        FUN_1800289e0(&local_198);
        FUN_1800289e0(&local_1b8);
        uVar21 = uVar20 | 0xc;
        if (iVar4 == 0) {
          uStack_130 = 0;
          local_128 = 0;
          local_120 = 0xf;
          local_138 = (ulonglong ******)0x0;
          local_118 = 0;
          uStack_108 = 0;
          local_100 = 0;
          local_f8 = 0xf;
          local_110 = (ulonglong ******)0x0;
          local_f0 = 0;
          pppppuStack_e0 = (ulonglong *****)0x0;
          local_d8 = (ulonglong *****)0x0;
          local_d0 = (ulonglong *****)0xf;
          local_e8 = (ulonglong *****)0x0;
          uStack_c0 = 0;
          local_b8 = 0;
          local_b0 = 0xf;
          local_c8 = 0;
          local_a8 = 0;
          local_a4 = 0;
          local_a2 = 0;
          uStack_98 = 0;
          local_90 = 0;
          local_88 = 0xf;
          local_a0 = 0;
          uStack_78 = 0;
          local_70 = 0;
          local_68 = 0xf;
          local_80 = 0;
          local_60 = 0;
          puVar7 = (undefined8 *)FUN_180099cd0(plVar24,&local_198);
          if ((ulonglong)puVar7[3] < 8) {
            local_1d8 = puVar7;
          }
          else {
            local_1d8 = (undefined8 *)*puVar7;
          }
          local_1d0 = puVar7[2];
          FUN_180024c20(&local_1b8,&local_1d8);
          uVar22 = local_1a8;
          local_2c8 = uVar20 | 0x18c;
          local_2c0 = local_1b8;
          local_138 = local_1b8;
          uStack_130 = uStack_1b0;
          local_128 = local_1a8;
          local_208 = local_1a0;
          local_120 = local_1a0;
          local_1a8 = 0;
          local_1a0 = 0xf;
          local_1b8 = (ulonglong ******)((ulonglong)local_1b8 & 0xffffffffffffff00);
          FUN_18000f890(&local_1b8);
          FUN_1800289e0(&local_198);
          if ((*(uint *)((longlong)plVar14 + 0x1c) >> 3 & 1) == 0) {
            if ((*(uint *)((longlong)plVar14 + 0x1c) >> 1 & 1) == 0) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = (undefined4)plVar14[2];
            }
            plVar12 = plVar24;
            if (7 < (ulonglong)plVar14[7]) {
              plVar12 = (longlong *)*plVar24;
            }
            iVar4 = FUN_1804e5830(plVar12,&local_198,9,uVar3);
            local_118 = -1;
            if (iVar4 == 0) {
              local_118 = lStack_190;
            }
          }
          else {
            local_118 = plVar14[1];
          }
          if ((*(uint *)((longlong)plVar14 + 0x1c) >> 5 & 1) == 0) {
            if ((*(uint *)((longlong)plVar14 + 0x1c) >> 1 & 1) == 0) {
              uVar3 = 0xffffffff;
            }
            else {
              uVar3 = (undefined4)plVar14[2];
            }
            if ((ulonglong)plVar14[7] < 8) {
              plVar12 = plVar24;
            }
            else {
              plVar12 = (longlong *)*plVar24;
            }
            iVar4 = FUN_1804e5830(plVar12,&local_198,0x21,uVar3);
            lVar15 = -0x8000000000000000;
            if (iVar4 == 0) {
              lVar15 = local_198;
            }
          }
          else {
            lVar15 = *plVar14;
          }
          lVar8 = _Xtime_get_ticks();
          lVar9 = _Xtime_get_ticks();
          lVar8 = lVar8 + (lVar15 - (lVar9 + 0x19db1ded53e8000));
          lVar8 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar8),8) + lVar8;
          local_210 = (lVar8 >> 0x17) - (lVar8 >> 0x3f);
          local_178 = (ulonglong *****)0x0;
          pppppuStack_170 = (ulonglong *****)0x0;
          local_168 = 0;
          uStack_160 = 0;
          local_158 = 0;
          iVar4 = thunk_FUN_1805121e4(&local_178,&local_210);
          if (iVar4 == 0) {
            local_198 = 0;
            lStack_190 = 0;
            local_188 = 0;
            uStack_180 = 0;
            FUN_180512a44(&local_198,0x20,&DAT_1806e6f00,&local_178);
            local_1b8 = (ulonglong ******)0x0;
            uStack_1b0 = 0;
            local_1a8 = 0;
            local_1a0 = 0;
            sVar10 = strlen((char *)&local_198);
            FUN_1800133a0(&local_1b8,&local_198,sVar10);
            local_100 = local_1a8;
            local_f8 = local_1a0;
          }
          else {
            uStack_1b0 = 0;
            local_1b8 = (ulonglong ******)0x0;
            local_100 = 0;
            local_f8 = 0xf;
          }
          local_2c8 = uVar20 | 0x19c;
          local_110 = local_1b8;
          uStack_108 = uStack_1b0;
          local_f0 = FUN_180071c50(&local_138);
          if (local_f0 == '\0') {
            ppppppuVar11 = (ulonglong ******)FUN_180071cd0(&local_198,&local_138);
            local_2c8 = uVar20 | 0x19e;
            if (&local_e8 != ppppppuVar11) goto LAB_18009a5a7;
          }
          else {
            uStack_1b0 = 0;
            local_1a8 = 0;
            local_1a0 = 0xf;
            local_1b8 = (ulonglong ******)0x0;
            ppppppuVar11 = (ulonglong ******)&local_1b8;
            local_2c8 = uVar20 | 0x19d;
LAB_18009a5a7:
            local_e8 = *ppppppuVar11;
            pppppuStack_e0 = ppppppuVar11[1];
            local_d8 = ppppppuVar11[2];
            local_d0 = ppppppuVar11[3];
            ppppppuVar11[2] = (ulonglong *****)0x0;
            ppppppuVar11[3] = (ulonglong *****)0xf;
            *(undefined1 *)ppppppuVar11 = 0;
          }
          uVar21 = local_2c8;
          if ((local_2c8 & 2) != 0) {
            uVar21 = local_2c8 & 0xfffffffd;
            local_2c8 = uVar21;
            FUN_18000f890(&local_198);
          }
          if ((uVar21 & 1) != 0) {
            uVar21 = uVar21 & 0xfffffffe;
            local_2c8 = uVar21;
            FUN_18000f890(&local_1b8);
          }
          local_178 = (ulonglong *****)0x0;
          pppppuStack_170 = (ulonglong *****)0x0;
          local_168 = 0;
          uStack_160 = 0;
          ppppppuVar11 = (ulonglong ******)&local_138;
          if (0xf < local_208) {
            ppppppuVar11 = local_2c0;
          }
          if (0x7fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_180011990();
          }
          if (uVar22 < 0x10) {
            local_168 = uVar22;
            uStack_160 = 0xf;
            local_178 = *ppppppuVar11;
            pppppuStack_170 = ppppppuVar11[1];
          }
          else {
            uVar16 = uVar22 | 0xf;
            if (uVar16 < 0x8000000000000000) {
              if (uVar16 < 0x16) {
                uVar16 = 0x16;
              }
            }
            else {
              uVar16 = 0x7fffffffffffffff;
            }
            local_178 = (ulonglong *****)FUN_18000fb70(uVar16 + 1);
            local_168 = uVar22;
            uStack_160 = uVar16;
            FUN_180540530(local_178,ppppppuVar11,uVar22 + 1);
          }
          if (7 < (ulonglong)plVar14[7]) {
            plVar24 = (longlong *)*plVar24;
          }
          local_1c0 = plVar14[6];
          local_1c8 = (longlong)plVar24;
          FUN_180024c20(&local_158,&local_1c8);
          uVar21 = uVar21 | 0x60;
          local_2c8 = uVar21;
          if (apuStack_270[0] == apuStack_270[1]) {
            FUN_180029340(&local_278,apuStack_270[0],&local_178);
          }
          else {
            *apuStack_270[0] = 0;
            apuStack_270[0][1] = 0;
            apuStack_270[0][2] = 0;
            apuStack_270[0][3] = 0;
            *apuStack_270[0] = (ulonglong)local_178;
            apuStack_270[0][1] = (ulonglong)pppppuStack_170;
            apuStack_270[0][2] = local_168;
            apuStack_270[0][3] = uStack_160;
            local_168 = 0;
            uStack_160 = 0xf;
            local_178 = (ulonglong *****)((ulonglong)local_178 & 0xffffffffffffff00);
            apuStack_270[0][4] = 0;
            apuStack_270[0][5] = 0;
            apuStack_270[0][6] = 0;
            apuStack_270[0][7] = 0;
            apuStack_270[0][4] = CONCAT44(uStack_154,local_158);
            apuStack_270[0][5] = local_150;
            apuStack_270[0][6] = local_148;
            apuStack_270[0][7] = local_140;
            local_148 = 0;
            local_140 = 0xf;
            local_158 = local_158 & 0xffffff00;
            apuStack_270[0] = apuStack_270[0] + 8;
          }
          FUN_18000f890(&local_158);
          FUN_18000f890(&local_178);
          if (puStack_2a8 == local_2a0) {
            FUN_18009bd30(&local_2b0,puStack_2a8,&local_138);
          }
          else {
            FUN_18009bff0(puStack_2a8,&local_138);
            puStack_2a8 = puStack_2a8 + 0x1c;
          }
          FUN_18000f890(&local_80);
          FUN_18000f890(&local_a0);
          FUN_18000f890(&local_c8);
          FUN_18000f890(&local_e8);
          FUN_18000f890(&local_110);
          FUN_18000f890(&local_138);
        }
      }
      uVar20 = uVar21;
      FUN_18004e9d0(&local_220);
    } while (local_220 != local_288);
  }
  plVar14 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_280 + 1;
    lVar15 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar5 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_218 + 1;
    lVar15 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar5 = (int *)((longlong)local_218 + 0xc);
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_218 + 8))(local_218);
      }
    }
  }
  plVar14 = (longlong *)CONCAT44(uStack_23c,uStack_240);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar24 = plVar14 + 1;
    lVar15 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar5 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  uVar3 = FUN_1800a00e0(&local_238,&local_278);
  uVar22 = 0;
  if (((longlong)puStack_2a8 - (longlong)local_2b0 >> 5) * 0x6db6db6db6db6db7 != 0) {
    do {
      if ((ulonglong)(((longlong)(uStack_230 - local_238) >> 4) * 0x6db6db6db6db6db7) <= uVar22)
      break;
      puVar7 = (undefined8 *)(uVar22 * 0x70 + local_238);
      puVar23 = local_2b0 + uVar22 * 0x1c;
      if (puVar23 + 0xe != puVar7) {
        if ((ulonglong)puVar7[3] < 0x10) {
          puVar13 = puVar7;
        }
        else {
          puVar13 = (undefined8 *)*puVar7;
        }
        uVar3 = FUN_180029840(uVar3,puVar13,puVar7[2]);
      }
      *(undefined4 *)(puVar23 + 0x12) = *(undefined4 *)(puVar7 + 4);
      *(undefined1 *)((longlong)puVar23 + 0x94) = *(undefined1 *)((longlong)puVar7 + 0x24);
      *(undefined1 *)((longlong)puVar23 + 0x95) = *(undefined1 *)((longlong)puVar7 + 0x25);
      *(undefined1 *)((longlong)puVar23 + 0x96) = *(undefined1 *)((longlong)puVar7 + 0x26);
      if (puVar23 != puVar7 + -0xe) {
        plVar14 = puVar7 + 5;
        if (0xf < (ulonglong)puVar7[8]) {
          plVar14 = (longlong *)*plVar14;
        }
        FUN_180029840(puVar23 + 0x13,plVar14,puVar7[7]);
        plVar14 = puVar7 + 9;
        if (0xf < (ulonglong)puVar7[0xc]) {
          plVar14 = (longlong *)*plVar14;
        }
        uVar3 = FUN_180029840(puVar23 + 0x17,plVar14,puVar7[0xb]);
      }
      *(undefined4 *)(puVar23 + 0x1b) = *(undefined4 *)(puVar7 + 0xd);
      uVar22 = uVar22 + 1;
    } while (uVar22 < (ulonglong)
                      (((longlong)puStack_2a8 - (longlong)local_2b0 >> 5) * 0x6db6db6db6db6db7));
  }
  puVar17 = auStack_2e8;
  puVar18 = auStack_2e8;
  FUN_18009b3c0(local_2b0,puStack_2a8,
                ((longlong)puStack_2a8 - (longlong)local_2b0 >> 5) * 0x6db6db6db6db6db7,local_2b8);
  puVar2 = DAT_180cd0290;
  puVar7 = DAT_180cd0288;
  puVar23 = local_2b0;
  puVar13 = puStack_2a8;
  while( true ) {
    local_2b0 = puVar23;
    puStack_2a8 = puVar13;
    if (puVar7 == puVar2) break;
    if (*(char *)(puVar7 + 9) != '\0') {
      if (puVar23 != puVar13) {
        uVar22 = puVar7[3];
        sVar10 = puVar7[2];
        do {
          if (uVar22 < 0x10) {
            _Buf2 = puVar7;
          }
          else {
            _Buf2 = (undefined8 *)*puVar7;
          }
          _Size = puVar23[2];
          if ((ulonglong)puVar23[3] < 0x10) {
            _Buf1 = puVar23;
          }
          else {
            _Buf1 = (undefined8 *)*puVar23;
          }
          if ((_Size == sVar10) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))
             ) goto LAB_18009aaff;
          puVar23 = puVar23 + 0x1c;
        } while (puVar23 != puVar13);
      }
      FUN_180071af0(puVar7);
      uVar6 = FUN_180073a70(&local_198,puVar7,": file removed, unloaded");
      FUN_18009afb0(uVar6);
      FUN_18000f890(&local_198);
    }
LAB_18009aaff:
    puVar7 = puVar7 + 0x1c;
    puVar23 = local_2b0;
    puVar13 = puStack_2a8;
  }
  puVar19 = auStack_2e8;
  if (DAT_180cd0288 == (undefined8 *)0x0) goto LAB_18009ab89;
  FUN_18009bf70(DAT_180cd0288,DAT_180cd0290);
  puVar7 = DAT_180cd0288;
  if ((ulonglong)((DAT_180cd0298 - (longlong)DAT_180cd0288 >> 5) * 0x20) < 0x1000) {
LAB_18009ab7e:
    puVar18 = puVar17;
  }
  else {
    puVar7 = (undefined8 *)DAT_180cd0288[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180cd0288 + (-8 - (longlong)puVar7))) {
      puVar7 = (undefined8 *)&DAT_00000005;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar17 = auStack_2e0;
      goto LAB_18009ab7e;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x18009ab89;
  thunk_FUN_1803d64e0(puVar7);
  puVar19 = puVar18;
LAB_18009ab89:
  DAT_180cd0288 = *(undefined8 **)(puVar19 + 0x38);
  DAT_180cd0290 = *(undefined8 **)(puVar19 + 0x40);
  DAT_180cd0298 = *(longlong *)(puVar19 + 0x48);
  *(undefined8 *)(puVar19 + 0x38) = 0;
  *(undefined8 *)(puVar19 + 0x40) = 0;
  *(undefined8 *)(puVar19 + 0x48) = 0;
  uVar22 = local_238;
  if (local_238 != 0) {
    for (; uVar22 != uStack_230; uVar22 = uVar22 + 0x70) {
      *(undefined8 *)(puVar19 + -8) = 0x18009abd0;
      FUN_18000f890(uVar22 + 0x48);
      *(undefined8 *)(puVar19 + -8) = 0x18009abd9;
      FUN_18000f890(uVar22 + 0x28);
      *(undefined8 *)(puVar19 + -8) = 0x18009abe1;
      FUN_18000f890(uVar22);
    }
    uVar22 = local_238;
    if (0xfff < (ulonglong)(((longlong)(local_228 - local_238) >> 4) * 0x10)) {
      uVar22 = *(ulonglong *)(local_238 - 8);
      uVar16 = (local_238 - uVar22) - 8;
      if (0x1f < uVar16) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar19 = puVar19 + 8;
        uVar22 = uVar16;
      }
    }
    *(undefined8 *)(puVar19 + -8) = 0x18009ac30;
    thunk_FUN_1803d64e0(uVar22);
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
  }
  uVar22 = *(ulonglong *)(puVar19 + 0x70);
  if (uVar22 != 0) {
    uVar16 = *(ulonglong *)(puVar19 + 0x78);
    if (uVar22 != uVar16) {
      do {
        *(undefined8 *)(puVar19 + -8) = 0x18009ac59;
        FUN_18000f890(uVar22 + 0x20);
        *(undefined8 *)(puVar19 + -8) = 0x18009ac61;
        FUN_18000f890(uVar22);
        uVar22 = uVar22 + 0x40;
      } while (uVar22 != uVar16);
      uVar22 = *(ulonglong *)(puVar19 + 0x70);
    }
    uVar16 = uVar22;
    if (0xfff < ((longlong)apuStack_270[1] - uVar22 & 0xffffffffffffffc0)) {
      uVar16 = *(ulonglong *)(uVar22 - 8);
      uVar22 = (uVar22 - uVar16) - 8;
      if (0x1f < uVar22) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar19 = puVar19 + 8;
        uVar16 = uVar22;
      }
    }
    *(undefined8 *)(puVar19 + -8) = 0x18009aca9;
    thunk_FUN_1803d64e0(uVar16);
    *(undefined8 *)(puVar19 + 0x70) = 0;
    *(undefined8 *)(puVar19 + 0x78) = 0;
    apuStack_270[1] = (ulonglong *)0x0;
  }
  *(undefined8 *)(puVar19 + -8) = 0x18009acc0;
  FUN_18009b7d0(puVar19 + 0x38);
  *(undefined8 *)(puVar19 + -8) = 0x18009accf;
  return;
}



/* ===== 18009acf0 FUN_18009acf0 ===== */

void FUN_18009acf0(longlong param_1)

{
  FUN_18000f890(param_1 + 0xb8);
  FUN_18000f890(param_1 + 0x98);
  FUN_18000f890(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x50);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18009ad50 FUN_18009ad50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18009ad50(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_180099ed0();
  if (lVar6 == 0) {
    uVar7 = FUN_180073a70(&local_50,param_1,": no such script");
    FUN_18009afb0(uVar7);
    uVar8 = FUN_18000f890(&local_50);
    return uVar8 & 0xffffffffffffff00;
  }
  local_50 = (char *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_C__neverlose_scripts_1806e6ec8._12_4_;
  uVar3 = s_C__neverlose_scripts_1806e6ec8._8_4_;
  uVar2 = s_C__neverlose_scripts_1806e6ec8._4_4_;
  local_40 = 0x13;
  local_38 = 0x1f;
  *(undefined4 *)local_50 = s_C__neverlose_scripts_1806e6ec8._0_4_;
  *(undefined4 *)(local_50 + 4) = uVar2;
  *(undefined4 *)(local_50 + 8) = uVar3;
  *(undefined4 *)(local_50 + 0xc) = uVar4;
  *(uint *)(local_50 + 0xf) =
       CONCAT31(s_C__neverlose_scripts_1806e6ec8._16_3_,s_C__neverlose_scripts_1806e6ec8[0xf]);
  local_50[0x13] = '\0';
  puVar9 = (ulonglong *)FUN_1800134a0(&local_50,&DAT_1806e067c,1);
  local_70 = *puVar9;
  uStack_68 = puVar9[1];
  local_60 = puVar9[2];
  uStack_58 = puVar9[3];
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  *(undefined1 *)puVar9 = 0;
  uVar7 = FUN_1800667a0(local_30,&local_70,param_1);
  puVar9 = (ulonglong *)FUN_1800134a0(uVar7,&DAT_1806e188c,4);
  local_90 = *puVar9;
  uStack_88 = puVar9[1];
  local_80 = puVar9[2];
  uStack_78 = puVar9[3];
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  *(undefined1 *)puVar9 = 0;
  bVar5 = FUN_180070b90(param_1,&local_90);
  if (0xf < uStack_78) {
    uVar11 = uStack_78 + 1;
    uVar8 = local_90;
    if (uVar11 < 0x1000) {
LAB_18009aed0:
      thunk_FUN_1803d64e0(uVar8,uVar11);
      goto LAB_18009aed5;
    }
    uVar8 = *(ulonglong *)(local_90 - 8);
    if ((local_90 - uVar8) - 8 < 0x20) {
      uVar11 = uStack_78 + 0x28;
      goto LAB_18009aed0;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_18009afa1:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_18009afa8:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
LAB_18009aed5:
  local_80 = 0;
  uStack_78 = 0xf;
  local_90 = local_90 & 0xffffffffffffff00;
  FUN_18000f890(local_30);
  if (0xf < uStack_58) {
    uVar11 = uStack_58 + 1;
    uVar8 = local_70;
    if (0xfff < uVar11) {
      uVar8 = *(ulonglong *)(local_70 - 8);
      if (0x1f < (local_70 - uVar8) - 8) goto LAB_18009afa1;
      uVar11 = uStack_58 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar8,uVar11);
  }
  local_60 = 0;
  uStack_58 = 0xf;
  local_70 = local_70 & 0xffffffffffffff00;
  if (0xf < local_38) {
    uVar8 = local_38 + 1;
    pcVar10 = local_50;
    if (0xfff < uVar8) {
      pcVar10 = *(char **)(local_50 + -8);
      if ((char *)0x1f < local_50 + (-8 - (longlong)pcVar10)) goto LAB_18009afa8;
      uVar8 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pcVar10,uVar8);
  }
  FUN_180099f60();
  return (ulonglong)bVar5;
}



/* ===== 18009afb0 FUN_18009afb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18009afb0(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  size_t sVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  uint local_d8;
  uint local_d0;
  undefined *local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  _SYSTEMTIME local_a0;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_c8 = &DAT_1809e8ea0;
  iVar8 = FUN_1804e4d70(&DAT_1809e8ea0);
  puVar18 = auStack_f8;
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8eec == 0x7fffffff) goto LAB_18009b27a;
  local_a0.wYear = 0;
  local_a0.wMonth = 0;
  local_a0.wDayOfWeek = 0;
  local_a0.wDay = 0;
  local_a0.wHour = 0;
  local_a0.wMinute = 0;
  local_a0.wSecond = 0;
  local_a0.wMilliseconds = 0;
  GetLocalTime(&local_a0);
  local_30 = 0;
  uStack_28 = 0;
  local_d0 = (uint)local_a0.wSecond;
  local_d8 = (uint)local_a0.wMinute;
  snprintf(&local_30,0x10,"%02d:%02d:%02d",(ulonglong)local_a0.wHour);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  sVar9 = strlen((char *)&local_30);
  FUN_1800133a0(&local_90,&local_30,sVar9);
  uVar10 = FUN_180066ab0(local_50,&DAT_1806e05f8,&local_90);
  puVar11 = (ulonglong *)FUN_1800134a0(uVar10,&DAT_1806e05f4,2);
  local_c0 = *puVar11;
  uStack_b8 = puVar11[1];
  local_b0 = puVar11[2];
  uStack_a8 = puVar11[3];
  puVar11[2] = 0;
  puVar11[3] = 0xf;
  *(undefined1 *)puVar11 = 0;
  puVar12 = (undefined4 *)FUN_1800667a0(local_70,&local_c0,param_1);
  puVar7 = DAT_180cd02a8;
  if (DAT_180cd02a8 == DAT_180cd02b0) {
    FUN_18009bb20(&DAT_180cd02a0,DAT_180cd02a8,puVar12);
  }
  else {
    *DAT_180cd02a8 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    uVar2 = puVar12[1];
    uVar3 = puVar12[2];
    uVar4 = puVar12[3];
    *(undefined4 *)puVar7 = *puVar12;
    *(undefined4 *)((longlong)puVar7 + 4) = uVar2;
    *(undefined4 *)(puVar7 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0xc) = uVar4;
    uVar10 = *(undefined8 *)(puVar12 + 6);
    puVar7[2] = *(undefined8 *)(puVar12 + 4);
    puVar7[3] = uVar10;
    *(undefined8 *)(puVar12 + 4) = 0;
    *(undefined8 *)(puVar12 + 6) = 0xf;
    *(undefined1 *)puVar12 = 0;
    DAT_180cd02a8 = DAT_180cd02a8 + 4;
  }
  FUN_18000f890(local_70);
  if (0xf < uStack_a8) {
    uVar14 = uStack_a8 + 1;
    uVar15 = local_c0;
    if (uVar14 < 0x1000) {
LAB_18009b171:
      thunk_FUN_1803d64e0(uVar15,uVar14);
      goto LAB_18009b176;
    }
    uVar15 = *(ulonglong *)(local_c0 - 8);
    if ((local_c0 - uVar15) - 8 < 0x20) {
      uVar14 = uStack_a8 + 0x28;
      goto LAB_18009b171;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar17 = auStack_f0;
LAB_18009b273:
    pcVar1 = (code *)swi(0x29);
    DAT_1809e8eec = (*pcVar1)(5);
    puVar18 = puVar17 + 8;
LAB_18009b27a:
    DAT_1809e8eec = DAT_1809e8eec + -1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar18 + -8) = &UNK_18009b28c;
    FUN_1804e4a90(6);
  }
LAB_18009b176:
  local_b0 = 0;
  uStack_a8 = 0xf;
  local_c0 = local_c0 & 0xffffffffffffff00;
  FUN_18000f890(local_50);
  puVar17 = auStack_f8;
  if (local_78 < 0x10) goto LAB_18009b1cb;
  uVar15 = local_78 + 1;
  lVar13 = local_90;
  if (0xfff < uVar15) {
    lVar13 = *(longlong *)(local_90 + -8);
    if (0x1f < (local_90 - lVar13) - 8U) goto LAB_18009b273;
    uVar15 = local_78 + 0x28;
  }
  thunk_FUN_1803d64e0(lVar13,uVar15);
LAB_18009b1cb:
  puVar7 = DAT_180cd02a8;
  uVar15 = (longlong)DAT_180cd02a8 - (longlong)DAT_180cd02a0 >> 5;
  if ((0x80 < uVar15) && (uVar15 = uVar15 - 0x80, (uVar15 & 0x7ffffffffffffff) != 0)) {
    puVar16 = DAT_180cd02a0;
    puVar6 = DAT_180cd02a8;
    for (puVar19 = DAT_180cd02a0 + uVar15 * 4; puVar5 = puVar16, DAT_180cd02a8 = puVar6,
        puVar19 != puVar7; puVar19 = puVar19 + 4) {
      FUN_18002ba60(puVar16,puVar19);
      puVar16 = puVar16 + 4;
      puVar6 = DAT_180cd02a8;
    }
    for (; puVar5 != puVar6; puVar5 = puVar5 + 4) {
      FUN_18000f890(puVar5);
    }
    DAT_180cd02a8 = puVar16;
  }
  FUN_1804e4e90(&DAT_1809e8ea0);
  return;
}



/* ===== 18009b2a0 FUN_18009b2a0 ===== */

void FUN_18009b2a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_18009bb20();
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[3] = uVar2;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  return;
}



/* ===== 18009b300 FUN_18009b300 ===== */

void FUN_18009b300(longlong *param_1)

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
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) * 0x10)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18009b399;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18009b399:
  *(undefined8 *)(puVar5 + -8) = 0x18009b3a1;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18009b3c0 FUN_18009b3c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18009b3c0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b8 [40];
  undefined1 local_90 [32];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_168;
  lVar2 = param_2 - param_1;
  while( true ) {
    if (lVar2 < 0x1ce0) {
      FUN_18009b860(param_1,param_2);
      return;
    }
    lVar2 = (param_2 - param_1) / 0xe0;
    lVar3 = lVar2 >> 1;
    if (param_3 < 1) break;
    lVar2 = lVar3 * 0xe0 + param_1;
    FUN_18009c420(param_1,lVar2,param_2 + -0xe0,param_4);
    FUN_18009c650(&local_138,param_1,lVar2,param_2);
    lVar2 = local_130;
    lVar3 = local_138;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_138 - param_1 >> 5) * 0x6db6db6db6db6db7 <
        (param_2 - local_130 >> 5) * 0x6db6db6db6db6db7) {
      FUN_18009b3c0(param_1,local_138,param_3,param_4);
      param_1 = lVar2;
      lVar3 = param_2;
    }
    else {
      FUN_18009b3c0(local_130,param_2,param_3,param_4);
    }
    lVar2 = lVar3 - param_1;
    param_2 = lVar3;
  }
  if (lVar3 < 1) {
    lVar3 = 0x70;
    lVar4 = param_1;
  }
  else {
    lVar4 = lVar3 * 0xe0;
    do {
      puVar1 = (undefined8 *)(param_1 + -0xe0 + lVar4);
      local_128 = *puVar1;
      uStack_120 = puVar1[1];
      lVar3 = lVar3 + -1;
      puVar1 = (undefined8 *)(param_1 + -0xd0 + lVar4);
      local_118 = *puVar1;
      uStack_110 = puVar1[1];
      *(undefined1 *)(param_1 + -0xe0 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0xd0 + lVar4) = 0;
      *(undefined8 *)(param_1 + -200 + lVar4) = 0xf;
      local_108 = *(undefined8 *)(param_1 + -0xc0 + lVar4);
      local_e8 = *(undefined8 *)(lVar4 + -0xa0 + param_1);
      local_100 = *(undefined8 *)(param_1 + -0xb8 + lVar4);
      puVar1 = (undefined8 *)(lVar4 + -0xb0 + param_1);
      uStack_f8 = *puVar1;
      uStack_f0 = puVar1[1];
      *(undefined1 *)(param_1 + -0xb8 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0xa8 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0xa0 + lVar4) = 0xf;
      local_e0 = *(undefined1 *)(param_1 + -0x98 + lVar4);
      local_c0 = *(undefined8 *)(lVar4 + -0x78 + param_1);
      puVar1 = (undefined8 *)(lVar4 + -0x88 + param_1);
      uStack_d0 = *puVar1;
      uStack_c8 = *(undefined4 *)(puVar1 + 1);
      uStack_c4 = *(undefined4 *)((longlong)puVar1 + 0xc);
      local_d8 = *(undefined8 *)(param_1 + -0x90 + lVar4);
      *(undefined1 *)(param_1 + -0x90 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x80 + lVar4) = 0;
      *(undefined8 *)(param_1 + -0x78 + lVar4) = 0xf;
      FUN_18009c0b0(local_b8,lVar4 + -0x70 + param_1);
      local_148 = param_4;
      FUN_18009c170(param_1,lVar3,lVar2,&local_128);
      FUN_18000f890(local_70);
      FUN_18000f890(local_90);
      FUN_18000f890(local_b8);
      FUN_18000f890(&local_d8);
      FUN_18000f890(&local_100);
      FUN_18000f890(&local_128);
      lVar4 = lVar4 + -0xe0;
    } while (0 < lVar3);
    lVar3 = param_1;
    lVar4 = 0x70;
  }
  if (lVar2 < 2) {
    return;
  }
  do {
    if (1 < (param_2 - param_1 >> 5) * 0x6db6db6db6db6db7) {
      lVar2 = param_2 + -0xe0;
      FUN_18009bff0(&local_128,lVar2);
      FUN_18002ba60(lVar2,param_1);
      *(undefined8 *)(param_2 + -0xc0) = *(undefined8 *)(param_1 + 0x20);
      FUN_18002ba60(param_2 + -0xb8,param_1 + 0x28);
      *(undefined1 *)(param_2 + -0x98) = *(undefined1 *)(param_1 + 0x48);
      FUN_18002ba60(param_2 + -0x90,param_1 + 0x50);
      FUN_180071a90(param_2 + -0x70,lVar4 + lVar3);
      local_148 = param_4;
      FUN_18009c170(param_1,0,(lVar2 - param_1 >> 5) * 0x6db6db6db6db6db7,&local_128);
      FUN_18000f890(local_70);
      FUN_18000f890(local_90);
      FUN_18000f890(local_b8);
      FUN_18000f890(&local_d8);
      FUN_18000f890(&local_100);
      FUN_18000f890(&local_128);
    }
    param_2 = param_2 + -0xe0;
  } while (0x1bf < param_2 - param_1);
  return;
}



/* ===== 18009b7d0 FUN_18009b7d0 ===== */

void FUN_18009b7d0(ulonglong *param_1)

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
  FUN_18009bf70(*param_1,param_1[1]);
  puVar5 = auStack_28;
  uVar4 = *param_1;
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 5) * 0x20;
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
  *(undefined8 *)(puVar5 + -8) = 0x18009b842;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18009b860 FUN_18009b860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18009b860(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined1 local_f0 [32];
  undefined1 local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [40];
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_148;
  if (param_1 != param_2) {
    lVar3 = param_1 + 0xe0;
    local_128 = param_2;
    if (lVar3 != param_2) {
      do {
        FUN_18009bff0(local_118,lVar3);
        cVar1 = FUN_180023470(local_118,param_1);
        if (cVar1 < '\0') {
          lVar2 = lVar3;
          lVar5 = lVar3 + 0xe0;
          if (lVar3 != param_1) {
            do {
              lVar4 = lVar2 + -0xe0;
              FUN_18002ba60(lVar5 + -0xe0,lVar4);
              *(undefined8 *)(lVar5 + -0xc0) = *(undefined8 *)(lVar2 + -0xc0);
              FUN_18002ba60(lVar5 + -0xb8,lVar2 + -0xb8);
              *(undefined1 *)(lVar5 + -0x98) = *(undefined1 *)(lVar2 + -0x98);
              FUN_18002ba60(lVar5 + -0x90,lVar2 + -0x90);
              FUN_180071a90(lVar5 + -0x70,lVar2 + -0x70);
              lVar2 = lVar4;
              lVar5 = lVar5 + -0xe0;
            } while (lVar4 != param_1);
            param_2 = local_128;
          }
          FUN_18002ba60(param_1,local_118);
          *(undefined8 *)(param_1 + 0x20) = local_f8;
          FUN_18002ba60(param_1 + 0x28,local_f0);
          *(undefined1 *)(param_1 + 0x48) = local_d0;
          lVar2 = param_1;
        }
        else {
          cVar1 = FUN_180023470(local_118,lVar3 + -0xe0);
          lVar5 = lVar3 + -0xe0;
          lVar2 = lVar3;
          while (lVar4 = lVar5, cVar1 < '\0') {
            FUN_18002ba60(lVar2,lVar4);
            *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar4 + 0x20);
            FUN_18002ba60(lVar2 + 0x28,lVar4 + 0x28);
            *(undefined1 *)(lVar2 + 0x48) = *(undefined1 *)(lVar4 + 0x48);
            FUN_18002ba60(lVar2 + 0x50,lVar4 + 0x50);
            FUN_180071a90(lVar2 + 0x70,lVar4 + 0x70);
            cVar1 = FUN_180023470(local_118,lVar4 + -0xe0);
            lVar5 = lVar4 + -0xe0;
            lVar2 = lVar4;
          }
          FUN_18002ba60(lVar2,local_118);
          *(undefined8 *)(lVar2 + 0x20) = local_f8;
          FUN_18002ba60(lVar2 + 0x28,local_f0);
          *(undefined1 *)(lVar2 + 0x48) = local_d0;
        }
        FUN_18002ba60(lVar2 + 0x50,local_c8);
        FUN_180071a90(lVar2 + 0x70,local_a8);
        FUN_18000f890(local_60);
        FUN_18000f890(local_80);
        FUN_18000f890(local_a8);
        FUN_18000f890(local_c8);
        FUN_18000f890(local_f0);
        FUN_18000f890(local_118);
        lVar3 = lVar3 + 0xe0;
      } while (lVar3 != param_2);
    }
  }
  return param_2;
}



/* ===== 18009bb20 FUN_18009bb20 ===== */

undefined8 * FUN_18009bb20(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  lVar3 = *param_1;
  if (param_1[1] - lVar3 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar11 = param_1[2] - lVar3 >> 5;
  uVar13 = 0x7ffffffffffffff;
  uVar1 = (param_1[1] - lVar3 >> 5) + 1;
  if (uVar11 <= 0x7ffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar13 = uVar1;
    if (uVar1 <= uVar11) {
      uVar13 = uVar11;
    }
    if (0x7ffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar9 = (undefined8 *)FUN_18000fb70(uVar13 << 5);
  uVar11 = (longlong)param_2 - lVar3 & 0xffffffffffffffe0;
  *(undefined8 *)(uVar11 + (longlong)puVar9) = 0;
  ((undefined8 *)(uVar11 + (longlong)puVar9))[1] = 0;
  *(undefined8 *)(uVar11 + 0x10 + (longlong)puVar9) = 0;
  puVar2 = (undefined8 *)(uVar11 + (longlong)puVar9);
  puVar2[3] = 0;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)puVar2 = *param_3;
  *(undefined4 *)((longlong)puVar2 + 4) = uVar5;
  *(undefined4 *)(puVar2 + 1) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar7;
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(puVar2 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar5;
  *(undefined4 *)(puVar2 + 3) = uVar6;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar7;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar4 = (undefined4 *)param_1[1];
  puVar10 = (undefined4 *)*param_1;
  puVar8 = puVar9;
  if (param_2 == puVar4) {
    for (; puVar10 != puVar4; puVar10 = puVar10 + 8) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *(undefined4 *)puVar8 = *puVar10;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar5;
      *(undefined4 *)(puVar8 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar7;
      uVar5 = puVar10[5];
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      *(undefined4 *)(puVar8 + 2) = puVar10[4];
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar5;
      *(undefined4 *)(puVar8 + 3) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      puVar8 = puVar8 + 4;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 8) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *(undefined4 *)puVar8 = *puVar10;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar5;
      *(undefined4 *)(puVar8 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar7;
      uVar5 = puVar10[5];
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      *(undefined4 *)(puVar8 + 2) = puVar10[4];
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar5;
      *(undefined4 *)(puVar8 + 3) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar7;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      *(undefined1 *)puVar10 = 0;
      puVar8 = puVar8 + 4;
    }
    puVar4 = (undefined4 *)param_1[1];
    puVar8 = puVar2;
    for (; param_2 != puVar4; param_2 = param_2 + 8) {
      puVar12 = puVar8 + 4;
      *puVar12 = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined4 *)puVar12 = *param_2;
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar5;
      *(undefined4 *)(puVar8 + 5) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar7;
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      *(undefined4 *)(puVar8 + 6) = param_2[4];
      *(undefined4 *)((longlong)puVar8 + 0x34) = uVar5;
      *(undefined4 *)(puVar8 + 7) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar8 = puVar12;
    }
  }
  FUN_18002b950(param_1,puVar9,uVar1,uVar13);
  return puVar2;
}



/* ===== 18009bd30 FUN_18009bd30 ===== */

longlong FUN_18009bd30(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar10 = *param_1;
  uVar6 = 0x124924924924924;
  lVar3 = (param_1[1] - lVar10 >> 5) * 0x6db6db6db6db6db7;
  if (lVar3 == 0x124924924924924) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar3 + 1;
  uVar5 = (param_1[2] - lVar10 >> 5) * 0x6db6db6db6db6db7;
  if (uVar5 <= 0x124924924924924 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x124924924924924 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar6 * 0xe0);
  lVar11 = ((param_2 - lVar10) / 0xe0) * 0xe0 + lVar4;
  FUN_18009bff0(lVar11,param_3);
  puVar7 = auStack_48;
  puVar8 = auStack_48;
  lVar3 = param_1[1];
  lVar9 = *param_1;
  lVar10 = lVar4;
  if (param_2 == lVar3) {
    for (; lVar9 != lVar3; lVar9 = lVar9 + 0xe0) {
      FUN_18009bff0(lVar10,lVar9);
      lVar10 = lVar10 + 0xe0;
    }
  }
  else {
    for (; lVar9 != param_2; lVar9 = lVar9 + 0xe0) {
      FUN_18009bff0(lVar10,lVar9);
      lVar10 = lVar10 + 0xe0;
    }
    FUN_18009bf70(lVar10,lVar10);
    lVar3 = param_1[1];
    lVar10 = lVar11 + 0xe0;
    if (param_2 != lVar3) {
      do {
        FUN_18009bff0(lVar10,param_2);
        lVar10 = lVar10 + 0xe0;
        param_2 = param_2 + 0xe0;
      } while (param_2 != lVar3);
    }
  }
  FUN_18009bf70(lVar10,lVar10);
  if (*param_1 == 0) goto LAB_18009bf1f;
  FUN_18009bf70(*param_1,param_1[1]);
  lVar10 = *param_1;
  lVar3 = lVar10;
  if ((ulonglong)((param_1[2] - lVar10 >> 5) * 0x20) < 0x1000) {
LAB_18009bf14:
    puVar8 = puVar7;
  }
  else {
    lVar3 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar7 = auStack_40;
      goto LAB_18009bf14;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x18009bf1f;
  thunk_FUN_1803d64e0(lVar3);
LAB_18009bf1f:
  *param_1 = lVar4;
  param_1[1] = uVar1 * 0xe0 + lVar4;
  param_1[2] = uVar6 * 0xe0 + lVar4;
  return lVar11;
}



/* ===== 18009bf70 FUN_18009bf70 ===== */

void FUN_18009bf70(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    do {
      FUN_18000f890(param_1 + 0xb8);
      FUN_18000f890(param_1 + 0x98);
      FUN_18000f890(param_1 + 0x70);
      FUN_18000f890(param_1 + 0x50);
      FUN_18000f890(param_1 + 0x28);
      FUN_18000f890(param_1);
      param_1 = param_1 + 0xe0;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 18009bff0 FUN_18009bff0 ===== */

undefined8 * FUN_18009bff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  param_1[4] = param_2[4];
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[7] = 0;
  param_2[8] = 0xf;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0xb);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0xd);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0xf;
  FUN_18009c0b0(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



/* ===== 18009c0b0 FUN_18009c0b0 ===== */

undefined8 * FUN_18009c0b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[7] = 0;
  param_2[8] = 0xf;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  *(undefined1 *)(param_2 + 9) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0xf;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  return param_1;
}



/* ===== 18009c170 FUN_18009c170 ===== */

void FUN_18009c170(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res20;
  
  lVar2 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  if (param_2 < lVar2) {
    do {
      cVar1 = FUN_180023470(param_1 + 0x1c0 + lVar4 * 0x1c0,param_1 + 0xe0 + lVar4 * 0x1c0);
      lVar5 = lVar4 * 0xe0;
      lVar4 = ((longlong)cVar1 >> 0x3f) + 2 + lVar4 * 2;
      lVar7 = lVar4 * 0xe0;
      lVar3 = lVar5 + param_1;
      lVar6 = lVar7 + param_1;
      FUN_18002ba60(lVar3,lVar6);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
      FUN_18002ba60(param_1 + 0x28 + lVar5,param_1 + 0x28 + lVar7);
      *(undefined1 *)(lVar3 + 0x48) = *(undefined1 *)(lVar6 + 0x48);
      FUN_18002ba60(param_1 + 0x50 + lVar5,param_1 + 0x50 + lVar7);
      FUN_180071a90(param_1 + 0x70 + lVar5,param_1 + 0x70 + lVar7);
    } while (lVar4 < lVar2);
  }
  if ((lVar4 == lVar2) && ((param_3 & 1) == 0)) {
    lVar2 = param_3 * 0xe0;
    lVar4 = lVar4 * 0xe0 + param_1;
    FUN_18002ba60(lVar4,param_1 + -0xe0 + lVar2);
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar2 + -0xc0 + param_1);
    FUN_18002ba60(lVar4 + 0x28,param_1 + -0xb8 + lVar2);
    *(undefined1 *)(lVar4 + 0x48) = *(undefined1 *)(lVar2 + -0x98 + param_1);
    FUN_18002ba60(lVar4 + 0x50,param_1 + -0x90 + lVar2);
    FUN_180071a90(lVar4 + 0x70,param_1 + -0x70 + lVar2);
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    local_res20 = param_1 + 0x28;
    lVar3 = lVar4 + -1 >> 1;
    lVar6 = lVar3 * 0xe0;
    lVar2 = lVar6 + param_1;
    cVar1 = FUN_180023470(lVar2,param_4);
    if (-1 < cVar1) break;
    lVar4 = lVar4 * 0xe0;
    lVar5 = lVar4 + param_1;
    FUN_18002ba60(lVar5,lVar2);
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    FUN_18002ba60(lVar4 + local_res20,lVar6 + local_res20);
    *(undefined1 *)(lVar5 + 0x48) = *(undefined1 *)(lVar2 + 0x48);
    FUN_18002ba60(param_1 + 0x50 + lVar4,param_1 + 0x50 + lVar6);
    FUN_180071a90(param_1 + 0x70 + lVar4,param_1 + 0x70 + lVar6);
    lVar4 = lVar3;
  }
  param_1 = param_1 + lVar4 * 0xe0;
  FUN_18002ba60(param_1,param_4);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 0x20);
  FUN_18002ba60(param_1 + 0x28,param_4 + 0x28);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_4 + 0x48);
  FUN_18002ba60(param_1 + 0x50,param_4 + 0x50);
  FUN_180071a90(param_1 + 0x70,param_4 + 0x70);
  return;
}



/* ===== 18009c420 FUN_18009c420 ===== */

void FUN_18009c420(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (param_3 - param_1 >> 5) * 0x6db6db6db6db6db7;
  if (lVar3 < 0x29) {
    cVar2 = FUN_180023470(param_2,param_1);
    if (cVar2 < '\0') {
      FUN_18009c850(param_2,param_1);
    }
    cVar2 = FUN_180023470(param_3,param_2);
    if (cVar2 < '\0') {
      FUN_18009c850(param_3,param_2);
      cVar2 = FUN_180023470(param_2,param_1);
      if (cVar2 < '\0') {
        FUN_18009c850(param_2,param_1);
        return;
      }
    }
  }
  else {
    lVar4 = lVar3 + 1 >> 3;
    lVar3 = lVar4 * 0x1c0 + param_1;
    lVar1 = lVar4 * 0xe0 + param_1;
    cVar2 = FUN_180023470(lVar1,param_1);
    if (cVar2 < '\0') {
      FUN_18009c850(lVar1,param_1);
    }
    cVar2 = FUN_180023470(lVar3,lVar1);
    if (cVar2 < '\0') {
      FUN_18009c850(lVar3,lVar1);
      cVar2 = FUN_180023470(lVar1,param_1);
      if (cVar2 < '\0') {
        FUN_18009c850(lVar1,param_1);
      }
    }
    lVar3 = lVar4 * 0xe0 + param_2;
    lVar5 = param_2 + lVar4 * -0xe0;
    cVar2 = FUN_180023470(param_2,lVar5);
    if (cVar2 < '\0') {
      FUN_18009c850(param_2,lVar5);
    }
    cVar2 = FUN_180023470(lVar3,param_2);
    if (cVar2 < '\0') {
      FUN_18009c850(lVar3,param_2);
      cVar2 = FUN_180023470(param_2,lVar5);
      if (cVar2 < '\0') {
        FUN_18009c850(param_2,lVar5);
      }
    }
    lVar5 = param_3 + lVar4 * -0xe0;
    lVar3 = param_3 + lVar4 * -0x1c0;
    cVar2 = FUN_180023470(lVar5,lVar3);
    if (cVar2 < '\0') {
      FUN_18009c850(lVar5,lVar3);
    }
    cVar2 = FUN_180023470(param_3,lVar5);
    if (cVar2 < '\0') {
      FUN_18009c850(param_3,lVar5);
      cVar2 = FUN_180023470(lVar5,lVar3);
      if (cVar2 < '\0') {
        FUN_18009c850(lVar5,lVar3);
      }
    }
    cVar2 = FUN_180023470(param_2,lVar1);
    if (cVar2 < '\0') {
      FUN_18009c850(param_2,lVar1);
    }
    cVar2 = FUN_180023470(lVar5,param_2);
    if (cVar2 < '\0') {
      FUN_18009c850(lVar5,param_2);
      cVar2 = FUN_180023470(param_2,lVar1);
      if (cVar2 < '\0') {
        FUN_18009c850(param_2,lVar1);
      }
    }
  }
  return;
}



/* ===== 18009c650 FUN_18009c650 ===== */

void FUN_18009c650(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = param_3;
  while (uVar5 = uVar1, param_2 < uVar5) {
    uVar1 = uVar5 - 0xe0;
    cVar2 = FUN_180023470(uVar1,uVar5);
    if ((cVar2 < '\0') || (cVar2 = FUN_180023470(uVar5,uVar1), cVar2 < '\0')) break;
  }
  do {
    param_3 = param_3 + 0xe0;
    uVar1 = param_3;
    uVar3 = uVar5;
    if (param_4 <= param_3) break;
    cVar2 = FUN_180023470(param_3,uVar5);
    if ((cVar2 < '\0') || (cVar2 = FUN_180023470(uVar5,param_3), cVar2 < '\0')) break;
  } while( true );
joined_r0x00018009c6e5:
  if (param_4 <= uVar1) {
joined_r0x00018009c734:
    while (uVar6 = uVar5, param_2 < uVar6) {
      uVar5 = uVar6 - 0xe0;
      cVar2 = FUN_180023470(uVar5,uVar3);
      if (-1 < cVar2) {
        cVar2 = FUN_180023470(uVar3,uVar5);
        if (cVar2 < '\0') break;
        if (uVar6 != uVar3) {
          FUN_18009c850(uVar3 - 0xe0,uVar5);
        }
        uVar3 = uVar3 - 0xe0;
      }
    }
    if ((uVar6 == param_2) && (uVar1 == param_4)) {
      *param_1 = uVar3;
      param_1[1] = param_3;
      return;
    }
    if (uVar6 == param_2) {
      if (param_3 != uVar1) {
        FUN_18009c850(uVar3,param_3);
      }
      param_3 = param_3 + 0xe0;
      uVar4 = uVar3 + 0xe0;
      uVar5 = uVar6;
      uVar6 = uVar1;
    }
    else {
      uVar5 = uVar6 - 0xe0;
      if (uVar1 == param_4) {
        uVar4 = uVar3 - 0xe0;
        if (uVar3 != uVar6) {
          FUN_18009c850(uVar5,uVar4);
        }
        param_3 = param_3 - 0xe0;
        FUN_18009c850(uVar4,param_3);
        uVar3 = uVar4;
        goto joined_r0x00018009c6e5;
      }
      uVar4 = uVar3;
      uVar6 = uVar5;
      uVar3 = uVar1;
    }
    FUN_18009c850(uVar3,uVar6);
    uVar1 = uVar1 + 0xe0;
    uVar3 = uVar4;
    goto joined_r0x00018009c6e5;
  }
  cVar2 = FUN_180023470(uVar3,uVar1);
  if (-1 < cVar2) {
    cVar2 = FUN_180023470(uVar1,uVar3);
    if (cVar2 < '\0') goto joined_r0x00018009c734;
    if (param_3 != uVar1) {
      FUN_18009c850(param_3,uVar1);
    }
    param_3 = param_3 + 0xe0;
  }
  uVar1 = uVar1 + 0xe0;
  goto joined_r0x00018009c6e5;
}



/* ===== 18009c850 FUN_18009c850 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18009c850(longlong param_1,longlong param_2)

{
  undefined1 auStack_138 [48];
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [40];
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_138;
  FUN_18009bff0(local_108,param_1);
  FUN_18002ba60(param_1,param_2);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_18002ba60(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  FUN_18002ba60(param_1 + 0x50,param_2 + 0x50);
  FUN_180071a90(param_1 + 0x70,param_2 + 0x70);
  FUN_18002ba60(param_2,local_108);
  *(undefined8 *)(param_2 + 0x20) = local_e8;
  FUN_18002ba60(param_2 + 0x28,local_e0);
  *(undefined1 *)(param_2 + 0x48) = local_c0;
  FUN_18002ba60(param_2 + 0x50,local_b8);
  FUN_180071a90(param_2 + 0x70,local_98);
  FUN_18000f890(local_50);
  FUN_18000f890(local_70);
  FUN_18000f890(local_98);
  FUN_18000f890(local_b8);
  FUN_18000f890(local_e0);
  FUN_18000f890(local_108);
  return;
}



/* ===== 18009c9a0 _vsprintf_s_l ===== */

int __cdecl
_vsprintf_s_l(char *_DstBuf,size_t _DstSize,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x9c9a0  103  _vsprintf_s_l */
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501c10(*puVar2,_DstBuf,_DstSize,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 18009c9f0 sprintf_s ===== */

int __cdecl sprintf_s(char *_DstBuf,size_t _SizeInBytes,char *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 in_R9;
  undefined8 local_res20;
  
                    /* 0x9c9f0  141  sprintf_s */
  local_res20 = in_R9;
  puVar2 = (undefined8 *)FUN_180013640();
  iVar1 = FUN_180501c10(*puVar2,_DstBuf,_SizeInBytes,_Format,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 18009ca50 FUN_18009ca50 ===== */

longlong FUN_18009ca50(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbVar4;
  char local_108 [256];
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(byte **)param_1;
  }
  if (lVar3 == 0) {
    return -1;
  }
  if (0xf < lVar3 + 4U) {
    lVar3 = thunk_FUN_1804e6210(param_1,lVar3,&DAT_1806e6f60,4);
    return lVar3;
  }
  FUN_180540170(local_108,0,0x100);
  pbVar4 = &DAT_1806e6f60;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    local_108[bVar1] = '\x01';
    pbVar2 = param_1;
  } while (pbVar4 != &DAT_1806e6f64);
  while( true ) {
    if (param_1 + lVar3 <= pbVar2) {
      return -1;
    }
    if (local_108[*pbVar2] == '\0') break;
    pbVar2 = pbVar2 + 1;
  }
  return (longlong)pbVar2 - (longlong)param_1;
}



/* ===== 18009cb50 FUN_18009cb50 ===== */

longlong FUN_18009cb50(undefined8 *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte *pbVar8;
  char local_108 [256];
  
  lVar5 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (lVar5 == 0) {
    return -1;
  }
  lVar1 = lVar5 + -1;
  lVar7 = -1;
  uVar4 = 4;
  if (lVar1 != -1) {
    lVar7 = lVar1;
    uVar4 = lVar5 + 4;
  }
  if (0xf < uVar4) {
    lVar7 = 0;
    if (lVar1 != -1) {
      lVar7 = lVar5;
    }
    lVar5 = FUN_1804e98d0(param_1,lVar7,&DAT_1806e6f60,4);
    return lVar5;
  }
  FUN_180540170(local_108,0,0x100);
  pbVar8 = &DAT_1806e6f60;
  do {
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    local_108[bVar2] = '\x01';
  } while (pbVar8 != &DAT_1806e6f64);
  puVar6 = (undefined8 *)((longlong)param_1 + lVar7);
  cVar3 = local_108[*(byte *)((longlong)param_1 + lVar7)];
  while( true ) {
    if (cVar3 == '\0') {
      return (longlong)puVar6 - (longlong)param_1;
    }
    if (puVar6 == param_1) break;
    pbVar8 = (byte *)((longlong)puVar6 + -1);
    puVar6 = (undefined8 *)((longlong)puVar6 + -1);
    cVar3 = local_108[*pbVar8];
  }
  return -1;
}



/* ===== 18009cc60 FUN_18009cc60 ===== */

ulonglong FUN_18009cc60(char *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t _Size;
  ulonglong uVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = 0;
  if (2 < uVar1) {
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    pcVar4 = param_1;
    if (0xf < uVar2) {
      pcVar4 = *(char **)param_1;
    }
    if (*pcVar4 == -0x11) {
      pcVar4 = param_1;
      if (0xf < uVar2) {
        pcVar4 = *(char **)param_1;
      }
      if (pcVar4[1] == -0x45) {
        if (uVar2 < 0x10) {
          pcVar4 = param_1;
        }
        else {
          pcVar4 = *(char **)param_1;
        }
        if (pcVar4[2] == -0x41) {
          uVar6 = 3;
        }
      }
    }
  }
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  _Size = 2;
  if (uVar1 - uVar6 < 2) {
    _Size = uVar1 - uVar6;
  }
  pcVar4 = param_1;
  if (0xf < uVar2) {
    pcVar4 = *(char **)param_1;
  }
  iVar3 = memcmp(pcVar4 + uVar6,&DAT_1806e6f68,_Size);
  if ((iVar3 != 0) || (_Size < 2)) {
    return uVar6;
  }
  if (uVar2 < 0x10) {
    pcVar4 = param_1;
  }
  else {
    pcVar4 = *(char **)param_1;
  }
  if (uVar6 < uVar1) {
    pcVar5 = (char *)thunk_FUN_1804e6c50(pcVar4 + uVar6,pcVar4 + uVar1,10);
    if ((pcVar5 != pcVar4 + uVar1) && ((longlong)pcVar5 - (longlong)pcVar4 != -1)) {
      return ((longlong)pcVar5 - (longlong)pcVar4) + 1;
    }
  }
  return *(ulonglong *)(param_1 + 0x10);
}



/* ===== 18009cd60 FUN_18009cd60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18009cd60(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte ******ppppppbVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined8 ******ppppppuVar10;
  char *pcVar11;
  byte ******ppppppbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  char *pcVar20;
  byte ******ppppppbVar21;
  byte *pbVar22;
  byte ******ppppppbVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [24];
  ulonglong uStack_238;
  undefined1 local_230 [16];
  ulonglong local_220;
  undefined8 uStack_218;
  longlong local_210;
  char local_208 [256];
  undefined1 (*local_108) [16];
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  byte ******local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  byte ******local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_258;
  puVar19 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar19 = (undefined8 *)*param_1;
  }
  puVar17 = auStack_258;
  if (param_1[2] == 0) goto LAB_18009d516;
  lVar8 = param_1[2] + (longlong)puVar19;
  local_210 = param_2;
  lVar4 = thunk_FUN_1804e6c50(puVar19,lVar8,0x40);
  puVar17 = auStack_258;
  if (lVar4 == lVar8) goto LAB_18009d516;
  puVar17 = auStack_258;
  if (lVar4 - (longlong)puVar19 == -1) goto LAB_18009d516;
  uVar14 = (lVar4 - (longlong)puVar19) + 1;
  local_e8 = (byte ******)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  if ((ulonglong)param_1[2] < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  lVar4 = param_1[2] - uVar14;
  lVar8 = -1;
  if (lVar4 != -1) {
    lVar8 = lVar4;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  FUN_1800133a0(&local_e8,(longlong)param_1 + uVar14,lVar8);
  uVar6 = local_d0;
  uVar14 = local_d8;
  ppppppbVar21 = local_e8;
  puVar17 = auStack_258;
  ppppppbVar12 = (byte ******)&local_e8;
  if (0xf < local_d0) {
    ppppppbVar12 = local_e8;
  }
  if (local_d8 != 0) {
    if (local_d8 + 3 < 0x10) {
      ppppppbVar23 = (byte ******)((longlong)ppppppbVar12 + local_d8);
      FUN_180540170(local_208,0,0x100);
      pbVar22 = &DAT_1806e6f84;
      do {
        local_208[*pbVar22] = '\x01';
        pbVar22 = pbVar22 + 1;
        ppppppbVar2 = ppppppbVar12;
      } while (pbVar22 != &DAT_1806e6f87);
      for (; puVar17 = auStack_258, ppppppbVar2 < ppppppbVar23;
          ppppppbVar2 = (byte ******)((longlong)ppppppbVar2 + 1)) {
        if (local_208[*(byte *)ppppppbVar2] != '\0') {
          uVar5 = (longlong)ppppppbVar2 - (longlong)ppppppbVar12;
          goto LAB_18009cefa;
        }
      }
    }
    else {
      uVar5 = thunk_FUN_1804e6380(ppppppbVar12,local_d8,&DAT_1806e6f84,3);
      uVar6 = local_d0;
      uVar14 = local_d8;
      ppppppbVar21 = local_e8;
LAB_18009cefa:
      puVar17 = auStack_258;
      if (uVar5 != 0xffffffffffffffff) {
        local_c8 = (byte ******)0x0;
        uStack_c0 = 0;
        local_b8 = (char *)0x0;
        local_b0 = 0;
        uVar13 = uVar5;
        if (uVar14 < uVar5) {
          uVar13 = uVar14;
        }
        ppppppbVar12 = (byte ******)&local_e8;
        if (0xf < uVar6) {
          ppppppbVar12 = ppppppbVar21;
        }
        FUN_1800133a0(&local_c8,ppppppbVar12,uVar13);
        puVar16 = auStack_258;
        puVar18 = auStack_258;
        puVar15 = auStack_258;
        ppppppbVar21 = (byte ******)&local_c8;
        if (0xf < local_b0) {
          ppppppbVar21 = local_c8;
        }
        ppppppbVar23 = (byte ******)((longlong)ppppppbVar21 + (longlong)local_b8);
        ppppppbVar12 = local_c8;
        pcVar20 = local_b8;
        uVar14 = local_b0;
        while( true ) {
          local_c8 = ppppppbVar12;
          local_b8 = pcVar20;
          local_b0 = uVar14;
          if (ppppppbVar21 == ppppppbVar23) break;
          iVar3 = tolower((uint)*(byte *)ppppppbVar21);
          *(byte *)ppppppbVar21 = (byte)iVar3;
          ppppppbVar21 = (byte ******)((longlong)ppppppbVar21 + 1);
          ppppppbVar12 = local_c8;
          pcVar20 = local_b8;
          uVar14 = local_b0;
        }
        uVar5 = uVar5 + 1;
        local_68 = (undefined8 ******)0x0;
        uStack_60 = 0;
        pauVar9 = (undefined1 (*) [16])0x0;
        local_58 = 0;
        local_50 = 0;
        if (local_d8 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        lVar8 = -1;
        if (local_d8 - uVar5 != -1) {
          lVar8 = local_d8 - uVar5;
        }
        ppppppbVar21 = (byte ******)&local_e8;
        if (0xf < local_d0) {
          ppppppbVar21 = local_e8;
        }
        FUN_1800133a0(&local_68,(byte *)((longlong)ppppppbVar21 + uVar5),lVar8);
        uVar6 = FUN_18009ca50(&local_68);
        if (uVar6 == 0xffffffffffffffff) {
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0xf;
          local_108 = (undefined1 (*) [16])0x0;
        }
        else {
          lVar8 = FUN_18009cb50(&local_68);
          local_108 = (undefined1 (*) [16])0x0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          if (local_58 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          uVar5 = (lVar8 - uVar6) + 1;
          if (local_58 - uVar6 < uVar5) {
            uVar5 = local_58 - uVar6;
          }
          ppppppuVar10 = &local_68;
          if (0xf < local_50) {
            ppppppuVar10 = local_68;
          }
          FUN_1800133a0(&local_108,(longlong)ppppppuVar10 + uVar6,uVar5);
        }
        FUN_18000f890(&local_68);
        uVar6 = uStack_f0;
        puVar17 = auStack_258;
        if (local_f8 != 0) {
          pauVar7 = (undefined1 (*) [16])&local_108;
          if (0xf < uStack_f0) {
            pauVar7 = local_108;
          }
          if ((*pauVar7)[0] == ':') {
            local_88 = (undefined8 ******)0x0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_18002a1a0();
            }
            lVar8 = -1;
            if (local_f8 - 1 != -1) {
              lVar8 = local_f8 - 1;
            }
            pauVar7 = (undefined1 (*) [16])&local_108;
            if (0xf < uStack_f0) {
              pauVar7 = local_108;
            }
            FUN_1800133a0(&local_88,*pauVar7 + 1,lVar8);
            uVar5 = FUN_18009ca50(&local_88);
            if (uVar5 == 0xffffffffffffffff) {
              uStack_a0 = 0;
              local_98 = 0;
              uStack_90 = 0xf;
              local_a8 = (undefined1 (*) [16])0x0;
            }
            else {
              lVar8 = FUN_18009cb50(&local_88);
              local_a8 = (undefined1 (*) [16])0x0;
              uStack_a0 = 0;
              local_98 = 0;
              uStack_90 = 0;
              if (local_78 < uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_18002a1a0();
              }
              uVar13 = (lVar8 - uVar5) + 1;
              if (local_78 - uVar5 < uVar13) {
                uVar13 = local_78 - uVar5;
              }
              ppppppuVar10 = &local_88;
              if (0xf < local_70) {
                ppppppuVar10 = local_88;
              }
              FUN_1800133a0(&local_a8,(longlong)ppppppuVar10 + uVar5,uVar13);
            }
            if (uStack_f0 < 0x10) {
LAB_18009d1ea:
              local_108 = local_a8;
              uStack_100 = uStack_a0;
              local_f8 = local_98;
              uStack_f0 = uStack_90;
              if (local_70 < 0x10) goto LAB_18009d249;
              uVar5 = local_70 + 1;
              ppppppuVar10 = local_88;
              if (uVar5 < 0x1000) {
LAB_18009d23c:
                thunk_FUN_1803d64e0(ppppppuVar10,uVar5);
                goto LAB_18009d249;
              }
              ppppppuVar10 = (undefined8 ******)local_88[-1];
              if ((ulonglong)((longlong)local_88 + (-8 - (longlong)ppppppuVar10)) < 0x20) {
                uVar5 = local_70 + 0x28;
                goto LAB_18009d23c;
              }
LAB_18009d43c:
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar17 = puVar16 + 8;
              goto LAB_18009d443;
            }
            uVar13 = uStack_f0 + 1;
            pauVar7 = local_108;
            if (uVar13 < 0x1000) {
LAB_18009d1e5:
              thunk_FUN_1803d64e0(pauVar7,uVar13);
              goto LAB_18009d1ea;
            }
            pauVar7 = *(undefined1 (**) [16])(local_108[-1] + 8);
            if ((ulonglong)((longlong)local_108 + (-8 - (longlong)pauVar7)) < 0x20) {
              uVar13 = uStack_f0 + 0x28;
              goto LAB_18009d1e5;
            }
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar15 = auStack_250;
LAB_18009d323:
            uVar13 = uVar5 | 0xf;
            if ((uVar13 <= uVar6) && (uVar6 = uVar13, uVar13 < 0x16)) {
              uVar6 = 0x16;
            }
            *(undefined8 *)(puVar15 + -8) = 0x18009d347;
            pcVar20 = (char *)FUN_18000fb70(uVar6 + 1);
            *(char **)(puVar15 + 0x28) = pcVar20;
            *(ulonglong *)(puVar15 + 0x38) = uVar5;
            *(ulonglong *)(puVar15 + 0x40) = uVar6;
            *(undefined8 *)(puVar15 + -8) = 0x18009d368;
            FUN_180540530(pcVar20,pauVar9,uVar5 + 1);
            uVar24 = *(undefined4 *)(puVar15 + 0x28);
            uVar25 = *(undefined4 *)(puVar15 + 0x2c);
            uStack_a0._0_4_ = *(undefined4 *)(puVar15 + 0x30);
            uStack_a0._4_4_ = *(undefined4 *)(puVar15 + 0x34);
            puVar16 = puVar15;
LAB_18009d36d:
            if (uVar6 < 0x10) {
              pcVar20 = puVar16 + 0x28;
            }
            pcVar11 = pcVar20;
            if (pcVar20 != pcVar20 + uVar5) {
              do {
                if (((*pcVar11 - 9U & 0xfa) == 0) && (*pcVar11 != '\x0e')) {
                  *pcVar11 = ' ';
                }
                pcVar11 = pcVar11 + 1;
              } while (pcVar11 != pcVar20 + uVar5);
              uVar24 = *(undefined4 *)(puVar16 + 0x28);
              uVar25 = *(undefined4 *)(puVar16 + 0x2c);
              uStack_a0._0_4_ = *(undefined4 *)(puVar16 + 0x30);
              uStack_a0._4_4_ = *(undefined4 *)(puVar16 + 0x34);
            }
            local_a8 = (undefined1 (*) [16])CONCAT44(uVar25,uVar24);
            local_98 = *(ulonglong *)(puVar16 + 0x38);
            uStack_90 = *(ulonglong *)(puVar16 + 0x40);
            *(undefined8 *)(puVar16 + 0x38) = 0;
            *(undefined8 *)(puVar16 + 0x40) = 0xf;
            puVar16[0x28] = 0;
            *(undefined8 *)(puVar16 + -8) = 0x18009d3e5;
            FUN_18000f890(puVar16 + 0x28);
            lVar8 = *(longlong *)(puVar16 + 0x48);
            *(undefined8 *)(puVar16 + -8) = 0x18009d3f9;
            FUN_18002ba60(lVar8,&local_a8);
            if (0xf < uStack_90) {
              uVar5 = uStack_90 + 1;
              pauVar9 = local_a8;
              if (0xfff < uVar5) {
                pauVar9 = *(undefined1 (**) [16])(local_a8[-1] + 8);
                if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)pauVar9)))
                goto LAB_18009d43c;
                uVar5 = uStack_90 + 0x28;
              }
              *(undefined8 *)(puVar16 + -8) = 0x18009d436;
              thunk_FUN_1803d64e0(pauVar9,uVar5);
            }
            puVar17 = puVar16;
LAB_18009d4b8:
            *(undefined1 *)(lVar8 + 0x24) = 1;
            uVar6 = uStack_f0;
          }
          else {
LAB_18009d249:
            uVar6 = uStack_f0;
            uVar5 = local_f8;
            puVar17 = auStack_258;
            if (local_f8 == 0) goto LAB_18009d4bc;
            ppppppbVar21 = (byte ******)&local_c8;
            if (0xf < uVar14) {
              ppppppbVar21 = ppppppbVar12;
            }
            if (pcVar20 == (char *)0x6) {
              iVar3 = memcmp(ppppppbVar21,"author",6);
              if (iVar3 != 0) goto LAB_18009d27a;
LAB_18009d2aa:
              if (0x40 < uVar5) {
                local_f8 = 0x40;
                pauVar9 = (undefined1 (*) [16])&local_108;
                if (0xf < uVar6) {
                  pauVar9 = local_108;
                }
                pauVar9[4][0] = 0;
                uVar5 = local_f8;
                uVar6 = uStack_f0;
              }
              local_230._8_8_ = 0;
              pauVar9 = (undefined1 (*) [16])&local_108;
              if (0xf < uVar6) {
                pauVar9 = local_108;
              }
              uVar6 = 0x7fffffffffffffff;
              if (0x7fffffffffffffff < uVar5) goto LAB_18009d547;
              if (0xf < uVar5) goto LAB_18009d323;
              local_220 = uVar5;
              uVar6 = 0xf;
              uStack_218 = 0xf;
              local_230 = *pauVar9;
              uVar24 = local_230._0_4_;
              uVar25 = local_230._4_4_;
              uStack_a0._0_4_ = local_230._8_4_;
              uStack_a0._4_4_ = local_230._12_4_;
              pcVar20 = local_230._0_8_;
              puVar16 = auStack_258;
              goto LAB_18009d36d;
            }
LAB_18009d27a:
            ppppppbVar21 = (byte ******)&local_c8;
            if (0xf < uVar14) {
              ppppppbVar21 = ppppppbVar12;
            }
            puVar17 = auStack_258;
            if (pcVar20 == &DAT_00000005) {
              iVar3 = memcmp(ppppppbVar21,"owner",5);
              puVar17 = auStack_258;
              if (iVar3 == 0) goto LAB_18009d2aa;
            }
LAB_18009d443:
            ppppppbVar21 = (byte ******)&local_c8;
            if (0xf < uVar14) {
              ppppppbVar21 = ppppppbVar12;
            }
            if (pcVar20 == (char *)0x3) {
              *(undefined8 *)(puVar17 + -8) = 0x18009d467;
              iVar3 = memcmp(ppppppbVar21,&DAT_1806e4d48,3);
              if (iVar3 == 0) {
                *(undefined8 *)(puVar17 + 0x20) = 0;
                pauVar9 = (undefined1 (*) [16])&local_108;
                if (0xf < uVar6) {
                  pauVar9 = local_108;
                }
                *(undefined8 *)(puVar17 + -8) = 0x18009d48d;
                iVar3 = FUN_180515504(pauVar9,puVar17 + 0x20,10);
                pauVar9 = (undefined1 (*) [16])&local_108;
                if (0xf < uStack_f0) {
                  pauVar9 = local_108;
                }
                uVar6 = uStack_f0;
                if ((*(undefined1 (**) [16])(puVar17 + 0x20) != pauVar9) &&
                   (iVar3 - 1U < 0x7ffffffe)) {
                  lVar8 = *(longlong *)(puVar17 + 0x48);
                  *(int *)(lVar8 + 0x20) = iVar3;
                  goto LAB_18009d4b8;
                }
              }
            }
          }
        }
LAB_18009d4bc:
        if (0xf < uVar6) {
          uVar14 = uVar6 + 1;
          pauVar9 = local_108;
          if (0xfff < uVar14) {
            pauVar9 = *(undefined1 (**) [16])(local_108[-1] + 8);
            if (0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)pauVar9))) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar18 = puVar17 + 8;
LAB_18009d547:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar18 + -8) = 0x18009d54c;
              FUN_180011990();
            }
            uVar14 = uVar6 + 0x28;
          }
          *(undefined8 *)(puVar17 + -8) = 0x18009d4f0;
          thunk_FUN_1803d64e0(pauVar9,uVar14);
        }
        local_f8 = 0;
        uStack_f0 = 0xf;
        local_108 = (undefined1 (*) [16])((ulonglong)local_108 & 0xffffffffffffff00);
        *(undefined8 *)(puVar17 + -8) = 0x18009d50c;
        FUN_18000f890(&local_c8);
      }
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x18009d516;
  FUN_18000f890(&local_e8);
LAB_18009d516:
  *(undefined8 *)(puVar17 + -8) = 0x18009d525;
  return;
}



/* ===== 18009d570 FUN_18009d570 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18009d570(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char cVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  char local_cc;
  undefined8 ****local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 ****local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_128;
  uStack_e8 = 0;
  lVar13 = 0;
  local_e0 = 0;
  local_d8 = 0xf;
  local_f0 = 0;
  local_d0 = 0;
  cVar12 = '\0';
  local_cc = '\0';
  local_108 = param_1;
  local_f8 = param_1;
  uVar3 = FUN_18009cc60(param_2);
  puVar10 = auStack_128;
  puVar11 = auStack_128;
  bVar2 = false;
  uVar15 = 0;
  uVar14 = param_2[2];
  if (uVar3 < uVar14) {
    for (; puVar10 = auStack_128, uVar15 < 0x28; uVar15 = uVar15 + 1) {
      puVar9 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar9 = (undefined8 *)*param_2;
      }
      if (uVar3 < uVar14) {
        lVar7 = thunk_FUN_1804e6c50((longlong)puVar9 + uVar3,uVar14 + (longlong)puVar9,10);
        lVar13 = -1;
        if (lVar7 != uVar14 + (longlong)puVar9) {
          lVar13 = lVar7 - (longlong)puVar9;
        }
      }
      else {
        lVar13 = -1;
      }
      uVar14 = lVar13 - uVar3;
      if (lVar13 == -1) {
        uVar14 = 0xffffffffffffffff;
      }
      local_88 = (undefined8 ****)0x0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      if ((ulonglong)param_2[2] < uVar3) goto LAB_18009dd95;
      uVar4 = param_2[2] - uVar3;
      if (uVar4 < uVar14) {
        uVar14 = uVar4;
      }
      if ((ulonglong)param_2[3] < 0x10) {
        puVar9 = param_2;
      }
      else {
        puVar9 = (undefined8 *)*param_2;
      }
      FUN_1800133a0(&local_88,(longlong)puVar9 + uVar3,uVar14);
      uVar3 = FUN_18009ca50(&local_88);
      if (uVar3 == 0xffffffffffffffff) {
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0xf;
        local_a8 = (undefined8 ****)0x0;
      }
      else {
        lVar7 = FUN_18009cb50(&local_88);
        local_a8 = (undefined8 ****)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        if (local_78 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18002a1a0();
        }
        uVar14 = (lVar7 - uVar3) + 1;
        if (local_78 - uVar3 < uVar14) {
          uVar14 = local_78 - uVar3;
        }
        ppppuVar6 = &local_88;
        if (0xf < uStack_70) {
          ppppuVar6 = local_88;
        }
        FUN_1800133a0(&local_a8,(longlong)ppppuVar6 + uVar3,uVar14);
      }
      if (0xf < uStack_70) {
        uVar3 = uStack_70 + 1;
        ppppuVar6 = local_88;
        if (uVar3 < 0x1000) {
LAB_18009d753:
          thunk_FUN_1803d64e0(ppppuVar6,uVar3);
          goto LAB_18009d760;
        }
        ppppuVar6 = (undefined8 ****)local_88[-1];
        puVar10 = auStack_128;
        if ((ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar6)) < 0x20) {
          uVar3 = uStack_70 + 0x28;
          goto LAB_18009d753;
        }
LAB_18009dd80:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar10 = puVar10 + 8;
LAB_18009dd87:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar10 = puVar10 + 8;
        goto LAB_18009dd8e;
      }
LAB_18009d760:
      if (lVar13 == -1) {
        uVar3 = param_2[2];
      }
      else {
        uVar3 = lVar13 + 1;
      }
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0xf;
      local_c8 = (undefined8 ****)0x0;
      if (bVar2) {
        ppppuVar6 = &local_a8;
        if (0xf < local_90) {
          ppppuVar6 = local_a8;
        }
        FUN_180029840(&local_c8,ppppuVar6,local_98);
LAB_18009d926:
        ppppuVar6 = &local_c8;
        if (0xf < uStack_b0) {
          ppppuVar6 = local_c8;
        }
        if (((local_b8 < 2) ||
            (lVar13 = local_b8 + (longlong)ppppuVar6,
            lVar7 = thunk_FUN_1804e92d0(ppppuVar6,lVar13,&DAT_1806e6f98,2), lVar7 == lVar13)) ||
           (uVar14 = lVar7 - (longlong)ppppuVar6, uVar14 == 0xffffffffffffffff)) {
          ppppuVar6 = &local_c8;
          if (0xf < uStack_b0) {
            ppppuVar6 = local_c8;
          }
          if (((2 < local_b8) &&
              (lVar13 = local_b8 + (longlong)ppppuVar6,
              lVar7 = thunk_FUN_1804e92d0(ppppuVar6,lVar13,&DAT_1806e6fa8,3), lVar7 != lVar13)) &&
             (uVar14 = lVar7 - (longlong)ppppuVar6, uVar14 != 0xffffffffffffffff))
          goto LAB_18009d9c8;
        }
        else {
LAB_18009d9c8:
          if (local_b8 < uVar14) {
            FUN_180028a50(&local_c8,uVar14 - local_b8,0);
            bVar2 = false;
          }
          else {
            ppppuVar6 = &local_c8;
            if (0xf < uStack_b0) {
              ppppuVar6 = local_c8;
            }
            local_b8 = uVar14;
            *(undefined1 *)((longlong)ppppuVar6 + uVar14) = 0;
            bVar2 = false;
          }
        }
LAB_18009db01:
        FUN_18009cd60(&local_c8,&local_f0);
        if (0xf < uStack_b0) {
          uVar14 = uStack_b0 + 1;
          ppppuVar6 = local_c8;
          if (0xfff < uVar14) {
            ppppuVar6 = (undefined8 ****)local_c8[-1];
            puVar10 = auStack_128;
            if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar6)))
            goto LAB_18009dd80;
            uVar14 = uStack_b0 + 0x28;
          }
          thunk_FUN_1803d64e0(ppppuVar6,uVar14);
        }
        local_c8 = (undefined8 ****)((ulonglong)local_c8 & 0xffffffffffffff00);
      }
      else {
        if (local_98 != 0) {
          ppppuVar6 = &local_a8;
          if (0xf < local_90) {
            ppppuVar6 = local_a8;
          }
          if (((3 < local_98) &&
              (ppppuVar5 = (undefined8 ****)
                           thunk_FUN_1804e6890(ppppuVar6,(undefined8 ****)((longlong)ppppuVar6 + 4),
                                               &DAT_1806e6f90,4),
              ppppuVar5 != (undefined8 ****)((longlong)ppppuVar6 + 4))) && (ppppuVar5 == ppppuVar6))
          {
LAB_18009d857:
            ppppuVar6 = &local_a8;
            if (0xf < local_90) {
              ppppuVar6 = local_a8;
            }
            uVar14 = (ulonglong)(*(char *)((longlong)ppppuVar6 + 3) != '[') + 4;
            local_88 = (undefined8 ****)0x0;
            uStack_80 = 0;
            local_78 = 0;
            uStack_70 = 0;
            if (local_98 < uVar14) {
LAB_18009dd9b:
              uStack_70 = 0;
              local_78 = 0;
              uStack_80 = 0;
              local_88 = (undefined8 ****)0x0;
                    /* WARNING: Subroutine does not return */
              FUN_18002a1a0();
            }
            lVar13 = -1;
            if (local_98 - uVar14 != -1) {
              lVar13 = local_98 - uVar14;
            }
            ppppuVar6 = &local_a8;
            if (0xf < local_90) {
              ppppuVar6 = local_a8;
            }
            FUN_1800133a0(&local_88,(longlong)ppppuVar6 + uVar14,lVar13);
            if (0xf < uStack_b0) {
              uVar14 = uStack_b0 + 1;
              ppppuVar6 = local_c8;
              if (0xfff < uVar14) {
                ppppuVar6 = (undefined8 ****)local_c8[-1];
                if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar6)))
                goto LAB_18009dbab;
                uVar14 = uStack_b0 + 0x28;
              }
              thunk_FUN_1803d64e0(ppppuVar6,uVar14);
            }
            bVar2 = true;
            local_c8 = local_88;
            uStack_c0 = uStack_80;
            local_b8 = local_78;
            uStack_b0 = uStack_70;
            local_78 = 0;
            uStack_70 = 0xf;
            local_88 = (undefined8 ****)((ulonglong)local_88 & 0xffffffffffffff00);
            FUN_18000f890(&local_88);
            goto LAB_18009d926;
          }
          ppppuVar6 = &local_a8;
          if (0xf < local_90) {
            ppppuVar6 = local_a8;
          }
          if (((4 < local_98) &&
              (ppppuVar5 = (undefined8 ****)
                           thunk_FUN_1804e6890(ppppuVar6,(undefined8 ****)((longlong)ppppuVar6 + 5),
                                               "--[=[",5),
              ppppuVar5 != (undefined8 ****)((longlong)ppppuVar6 + 5))) && (ppppuVar5 == ppppuVar6))
          goto LAB_18009d857;
          ppppuVar6 = &local_a8;
          if (0xf < local_90) {
            ppppuVar6 = local_a8;
          }
          puVar10 = auStack_128;
          if (((1 < local_98) &&
              (ppppuVar5 = (undefined8 ****)
                           thunk_FUN_1804e6890(ppppuVar6,(undefined8 ****)((longlong)ppppuVar6 + 2),
                                               &DAT_1806e6f9c,2), puVar10 = auStack_128,
              ppppuVar5 != (undefined8 ****)((longlong)ppppuVar6 + 2))) &&
             (puVar10 = auStack_128, ppppuVar5 == ppppuVar6)) {
            local_88 = (undefined8 ****)0x0;
            uStack_80 = 0;
            local_78 = 0;
            uStack_70 = 0;
            if (local_98 < 2) goto LAB_18009dd9b;
            lVar13 = -1;
            if (local_98 - 2 != -1) {
              lVar13 = local_98 - 2;
            }
            ppppuVar6 = &local_a8;
            if (0xf < local_90) {
              ppppuVar6 = local_a8;
            }
            FUN_1800133a0(&local_88,(longlong)ppppuVar6 + 2,lVar13);
            if (0xf < uStack_b0) {
              uVar14 = uStack_b0 + 1;
              ppppuVar6 = local_c8;
              if (uVar14 < 0x1000) {
LAB_18009dad3:
                thunk_FUN_1803d64e0(ppppuVar6,uVar14);
                goto LAB_18009dad8;
              }
              ppppuVar6 = (undefined8 ****)local_c8[-1];
              if ((ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar6)) < 0x20) {
                uVar14 = uStack_b0 + 0x28;
                goto LAB_18009dad3;
              }
LAB_18009dbab:
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar10 = auStack_120;
              goto LAB_18009dbb6;
            }
LAB_18009dad8:
            local_c8 = local_88;
            uStack_c0 = uStack_80;
            local_b8 = local_78;
            uStack_b0 = uStack_70;
            local_78 = 0;
            uStack_70 = 0xf;
            local_88 = (undefined8 ****)((ulonglong)local_88 & 0xffffffffffffff00);
            FUN_18000f890(&local_88);
            goto LAB_18009db01;
          }
LAB_18009dbb6:
          if (0xf < uStack_b0) {
            uVar3 = uStack_b0 + 1;
            ppppuVar6 = local_c8;
            if (0xfff < uVar3) {
              ppppuVar6 = (undefined8 ****)local_c8[-1];
              if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar6)))
              goto LAB_18009dd80;
              uVar3 = uStack_b0 + 0x28;
            }
            *(undefined8 *)(puVar10 + -8) = 0x18009dbf1;
            thunk_FUN_1803d64e0(ppppuVar6,uVar3);
          }
          local_b8 = 0;
          uStack_b0 = 0xf;
          local_c8 = (undefined8 ****)((ulonglong)local_c8 & 0xffffffffffffff00);
          if (0xf < local_90) {
            uVar3 = local_90 + 1;
            ppppuVar6 = local_a8;
            if (0xfff < uVar3) {
              ppppuVar6 = (undefined8 ****)local_a8[-1];
              if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar6)) < 0x20) {
                uVar3 = local_90 + 0x28;
                goto LAB_18009dc38;
              }
              goto LAB_18009dd87;
            }
LAB_18009dc38:
            *(undefined8 *)(puVar10 + -8) = 0x18009dc3d;
            thunk_FUN_1803d64e0(ppppuVar6,uVar3);
          }
          break;
        }
        local_c8 = (undefined8 ****)0x0;
      }
      uStack_b0 = 0xf;
      local_b8 = 0;
      if (0xf < local_90) {
        uStack_b0 = 0xf;
        local_b8 = 0;
        uVar14 = local_90 + 1;
        ppppuVar6 = local_a8;
        if (0xfff < uVar14) {
          ppppuVar6 = (undefined8 ****)local_a8[-1];
          puVar10 = auStack_128;
          if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar6)))
          goto LAB_18009dd87;
          uVar14 = local_90 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar6,uVar14);
      }
      uVar14 = param_2[2];
      puVar10 = auStack_128;
      if (uVar14 <= uVar3) break;
    }
    cVar12 = local_cc;
    lVar13 = *(longlong *)(puVar10 + 0x48);
    if ((local_cc != '\0') && (lVar13 == 0)) {
      *(undefined8 *)(puVar10 + -8) = 0x18009dc64;
      uVar8 = FUN_18003a390(local_68,local_d0);
      *(undefined8 *)(puVar10 + -8) = 0x18009dc78;
      puVar9 = (undefined8 *)FUN_180066ab0(&local_88,&DAT_1806e6fa0,uVar8);
      if ((undefined8 *)(puVar10 + 0x38) != puVar9) {
        if (0xf < local_d8) {
          uVar3 = local_d8 + 1;
          lVar13 = *(longlong *)(puVar10 + 0x38);
          lVar7 = lVar13;
          if (0xfff < uVar3) {
            lVar7 = *(longlong *)(lVar13 + -8);
            if (0x1f < (lVar13 - lVar7) - 8U) {
LAB_18009dd8e:
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar11 = puVar10 + 8;
LAB_18009dd95:
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar11 + -8) = 0x18009dd9a;
              FUN_18002a1a0();
            }
            uVar3 = local_d8 + 0x28;
          }
          *(undefined8 *)(puVar10 + -8) = 0x18009dcc1;
          thunk_FUN_1803d64e0(lVar7,uVar3);
        }
        *(undefined8 *)(puVar10 + 0x38) = *puVar9;
        *(undefined8 *)(puVar10 + 0x40) = puVar9[1];
        lVar13 = puVar9[2];
        local_d8 = puVar9[3];
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined1 *)puVar9 = 0;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18009dcfa;
      FUN_18000f890(&local_88);
      *(undefined8 *)(puVar10 + -8) = 0x18009dd04;
      FUN_18000f890(local_68);
    }
  }
  puVar9 = *(undefined8 **)(puVar10 + 0x30);
  *puVar9 = 0;
  puVar9[1] = 0;
  *puVar9 = *(undefined8 *)(puVar10 + 0x38);
  puVar9[1] = *(undefined8 *)(puVar10 + 0x40);
  puVar9[2] = lVar13;
  puVar9[3] = local_d8;
  *(undefined8 *)(puVar10 + 0x48) = 0;
  local_d8 = 0xf;
  puVar10[0x38] = 0;
  *(undefined4 *)(puVar9 + 4) = local_d0;
  *(char *)((longlong)puVar9 + 0x24) = cVar12;
  *(undefined8 *)(puVar10 + -8) = 0x18009dd56;
  FUN_18000f890(puVar10 + 0x38);
  *(undefined8 *)(puVar10 + -8) = 0x18009dd65;
  return puVar9;
}



/* ===== 18009ddb0 FUN_18009ddb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18009ddb0(void)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uStack_390;
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [24];
  code *local_368;
  undefined4 local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  undefined8 *local_338;
  uint local_330;
  longlong local_318 [2];
  byte abStack_308 [256];
  undefined8 ****local_208;
  undefined8 uStack_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong local_140;
  undefined1 local_138 [16];
  longlong local_128;
  undefined8 ****local_118 [2];
  undefined8 local_108;
  ulonglong local_100;
  undefined8 ****local_f8 [3];
  ulonglong local_e0;
  undefined8 ****local_d8 [2];
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 ****local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 ****local_98 [3];
  ulonglong local_80;
  undefined8 local_78 [4];
  ulonglong local_58;
  
  puVar12 = auStack_388;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_388;
  local_358 = 0;
  if (DAT_180ca1c3d == '\0') {
    DAT_180ca1c3d = '\x01';
    FUN_1800695d0(local_318,"C:\\neverlose\\lua_owners.txt",0x20);
    puVar12 = auStack_388;
    if ((abStack_308[*(int *)(local_318[0] + 4)] & 6) == 0) {
      uStack_200 = 0;
      local_1f8 = 0;
      local_1f0 = 0xf;
      local_208 = (undefined8 ****)0x0;
      uVar3 = FUN_18006d510((longlong)local_318 + (longlong)*(int *)(local_318[0] + 4),10);
      plVar5 = (longlong *)FUN_180075fd0(local_318,&local_208,uVar3);
      puVar12 = auStack_388;
      puVar13 = auStack_388;
      bVar1 = *(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5);
      while ((bVar1 & 6) == 0) {
        if (local_1f8 != 0) {
          ppppuVar6 = &local_208;
          if (0xf < local_1f0) {
            ppppuVar6 = local_208;
          }
          uVar9 = local_1f8 - 1;
          if (*(char *)((longlong)ppppuVar6 + uVar9) == '\r') {
            ppppuVar6 = &local_208;
            if (0xf < local_1f0) {
              ppppuVar6 = local_208;
            }
            local_1f8 = uVar9;
            *(undefined1 *)((longlong)ppppuVar6 + uVar9) = 0;
          }
        }
        local_368 = thunk_FUN_18000f890;
        FUN_1804ecfb0(local_138,0x20,7,FUN_18000f4c0);
        uVar18 = 0;
        uVar9 = 0;
        do {
          lVar7 = -1;
          ppppuVar6 = &local_208;
          if (0xf < local_1f0) {
            ppppuVar6 = local_208;
          }
          if (uVar9 < local_1f8) {
            lVar10 = local_1f8 + (longlong)ppppuVar6;
            lVar7 = thunk_FUN_1804e6c50((longlong)ppppuVar6 + uVar9,lVar10,9);
            if (lVar7 == lVar10) {
              lVar7 = -1;
            }
            else {
              lVar7 = lVar7 - (longlong)ppppuVar6;
            }
          }
          uVar16 = lVar7 - uVar9;
          if (lVar7 == -1) {
            uVar16 = 0xffffffffffffffff;
          }
          local_158 = 0;
          uStack_150 = 0;
          local_148 = 0;
          local_140 = 0;
          if (local_1f8 < uVar9) goto LAB_18009e468;
          if (local_1f8 - uVar9 < uVar16) {
            uVar16 = local_1f8 - uVar9;
          }
          ppppuVar6 = &local_208;
          if (0xf < local_1f0) {
            ppppuVar6 = local_208;
          }
          FUN_1800133a0(&local_158,(longlong)ppppuVar6 + uVar9,uVar16);
          FUN_18002ba60(local_138 + uVar18 * 0x20,&local_158);
          if (0xf < local_140) {
            uVar9 = local_140 + 1;
            lVar10 = local_158;
            if (0xfff < uVar9) {
              lVar10 = *(longlong *)(local_158 + -8);
              if (0x1f < (local_158 - lVar10) - 8U) {
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                puVar12 = auStack_380;
                goto LAB_18009e3de;
              }
              uVar9 = local_140 + 0x28;
            }
            thunk_FUN_1803d64e0(lVar10,uVar9);
          }
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
        } while ((lVar7 != -1) && (uVar9 = lVar7 + 1, (int)uVar17 < 7));
        if ((4 < (int)uVar17) && (local_128 != 0)) {
          cVar4 = *(char *)((longlong)DAT_180ca0d68[1] + 0x19);
          puVar11 = (undefined8 *)DAT_180ca0d68[1];
          puVar8 = DAT_180ca0d68;
          while (puVar15 = puVar11, cVar4 == '\0') {
            cVar4 = FUN_180023470(puVar15 + 4,local_138);
            if (cVar4 < '\0') {
              puVar11 = (undefined8 *)puVar15[2];
              puVar15 = puVar8;
            }
            else {
              puVar11 = (undefined8 *)*puVar15;
            }
            cVar4 = *(char *)((longlong)puVar11 + 0x19);
            puVar8 = puVar15;
          }
          if ((*(char *)((longlong)puVar8 + 0x19) != '\0') ||
             (cVar4 = FUN_180023470(local_138,puVar8 + 4), cVar4 < '\0')) {
            uStack_1e0 = 0;
            local_1d8 = 0;
            local_1d0 = 0xf;
            local_1e8 = 0;
            local_1c8 = 0;
            uStack_1b8 = 0;
            local_1b0 = 0;
            local_1a8 = 0xf;
            local_1c0 = 0;
            uStack_198 = 0;
            local_190 = 0;
            local_188 = 0xf;
            local_1a0 = 0;
            local_180 = 0;
            uStack_170 = 0;
            local_168 = 0;
            local_160 = 0xf;
            local_178 = 0;
            ppppuVar6 = local_118;
            if (0xf < local_100) {
              ppppuVar6 = local_118[0];
            }
            FUN_180029840(&local_1e8,ppppuVar6,local_108);
            ppppuVar6 = local_f8;
            if (0xf < local_e0) {
              ppppuVar6 = local_f8[0];
            }
            local_1c8 = FUN_1805145e4(ppppuVar6);
            ppppuVar6 = local_d8;
            if (0xf < local_c0) {
              ppppuVar6 = local_d8[0];
            }
            FUN_180029840(&local_1a0,ppppuVar6,local_c8);
            ppppuVar6 = local_b8;
            if (0xf < local_a0) {
              ppppuVar6 = local_b8[0];
            }
            FUN_180029840(&local_1c0,ppppuVar6,local_a8);
            if ((int)uVar17 < 7) {
              puVar11 = &local_1c0;
              local_180 = local_1c8;
            }
            else {
              ppppuVar6 = local_98;
              if (0xf < local_80) {
                ppppuVar6 = local_98[0];
              }
              local_180 = FUN_1805145e4(ppppuVar6);
              puVar11 = local_78;
            }
            puVar8 = puVar11 + 2;
            if (0xf < (ulonglong)puVar11[3]) {
              puVar11 = (undefined8 *)*puVar11;
            }
            FUN_180029840(&local_178,puVar11,*puVar8);
            puVar15 = DAT_180ca0d68;
            puVar11 = (undefined8 *)DAT_180ca0d68[1];
            puVar8 = puVar11;
            puVar14 = DAT_180ca0d68;
            if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
              do {
                puVar11 = puVar8;
                cVar4 = FUN_180023470(puVar11 + 4,local_138);
                if (-1 < cVar4) {
                  puVar8 = (undefined8 *)*puVar11;
                  puVar14 = puVar11;
                }
                else {
                  puVar8 = (undefined8 *)puVar11[2];
                }
                uVar17 = (uint)(-1 < cVar4);
              } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
            }
            else {
              uVar17 = 0;
            }
            if ((*(char *)((longlong)puVar14 + 0x19) != '\0') ||
               (cVar4 = FUN_180023470(local_138,puVar14 + 4), cVar4 < '\0')) {
              if (DAT_180ca0d70 == 0x13b13b13b13b13b) {
                    /* WARNING: Subroutine does not return */
                FUN_18006dab0();
              }
              local_350 = &DAT_180ca0d68;
              local_348 = (undefined8 *)0x0;
              puVar8 = (undefined8 *)FUN_1804ecaa0(0xd0);
              local_348 = puVar8;
              FUN_180024b50(puVar8 + 4,local_138);
              FUN_18009f510(puVar8 + 8,&local_1e8);
              *puVar8 = puVar15;
              puVar8[1] = puVar15;
              puVar8[2] = puVar15;
              *(undefined2 *)(puVar8 + 3) = 0;
              local_348 = (undefined8 *)0x0;
              local_338 = puVar11;
              local_330 = uVar17;
              FUN_1800774d0(&DAT_180ca0d68,&local_338,puVar8);
            }
            FUN_18000f890(&local_178);
            FUN_18000f890(&local_1a0);
            FUN_18000f890(&local_1c0);
            FUN_18000f890(&local_1e8);
          }
        }
        FUN_1804eced0(local_138,0x20,7,thunk_FUN_18000f890);
        uVar3 = FUN_18006d510((longlong)local_318 + (longlong)*(int *)(local_318[0] + 4),10);
        plVar5 = (longlong *)FUN_180075fd0(local_318,&local_208,uVar3);
        bVar1 = *(byte *)((longlong)plVar5 + (longlong)*(int *)(*plVar5 + 4) + 0x10);
      }
LAB_18009e3de:
      if (0xf < local_1f0) {
        uVar9 = local_1f0 + 1;
        ppppuVar6 = local_208;
        if (0xfff < uVar9) {
          ppppuVar6 = (undefined8 ****)local_208[-1];
          if (0x1f < (ulonglong)((longlong)local_208 + (-8 - (longlong)ppppuVar6))) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar13 = puVar12 + 8;
LAB_18009e468:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar13 + -8) = 0x18009e46d;
            FUN_18002a1a0();
          }
          uVar9 = local_1f0 + 0x28;
        }
        *(undefined8 *)(puVar12 + -8) = 0x18009e41b;
        thunk_FUN_1803d64e0(ppppuVar6,uVar9);
      }
      local_1f8 = 0;
      local_1f0 = 0xf;
      local_208 = (undefined8 ****)((ulonglong)local_208 & 0xffffffffffffff00);
    }
    *(undefined8 *)(puVar12 + -8) = 0x18009e43e;
    FUN_18005e2f0(puVar12 + 0x70);
  }
  *(undefined8 *)(puVar12 + -8) = 0x18009e44d;
  return;
}



/* ===== 18009e480 FUN_18009e480 ===== */

void FUN_18009e480(longlong param_1)

{
  FUN_18000f890(param_1 + 0x70);
  FUN_18000f890(param_1 + 0x48);
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18009e4c0 FUN_18009e4c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18009e4c0(void)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined8 ****ppppuVar12;
  LPCSTR ***lpExistingFileName;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *unaff_RBX;
  undefined1 *puVar16;
  undefined1 *puVar17;
  longlong *unaff_RDI;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [40];
  char *local_298;
  undefined8 local_290;
  longlong local_288 [2];
  byte abStack_278 [152];
  undefined **local_1e0 [13];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined8 ****local_f8;
  undefined **ppuStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 ****local_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 ****local_98;
  longlong lStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 ****local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  LPCSTR ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  puVar17 = auStack_2c8;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  if (DAT_180ca1c3e == '\0') goto LAB_18009ec51;
  local_f8 = (undefined8 ****)((ulonglong)local_f8 & 0xffffffff00000000);
  ppuStack_f0 = &PTR_vftable_18091a158;
  local_298 = "C:\\neverlose";
  local_290 = 0xb;
  uVar5 = FUN_1804e5000();
  FUN_180013d60(&local_d8,uVar5,&local_298);
  FUN_180016bc0(&local_d8,&local_f8);
  FUN_1800289e0(&local_d8);
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_C__neverlose_lua_owners_txt_1806e6f28._4_4_;
  local_a8 = 0x1a;
  local_a0 = 0x1f;
  uVar5 = CONCAT22(s_C__neverlose_lua_owners_txt_1806e6f28._10_2_,
                   s_C__neverlose_lua_owners_txt_1806e6f28._8_2_);
  uVar3 = CONCAT22(s_C__neverlose_lua_owners_txt_1806e6f28._14_2_,
                   s_C__neverlose_lua_owners_txt_1806e6f28._12_2_);
  *(undefined4 *)local_b8 = s_C__neverlose_lua_owners_txt_1806e6f28._0_4_;
  *(undefined4 *)(local_b8 + 4) = uVar4;
  *(undefined4 *)(local_b8 + 8) = uVar5;
  *(undefined4 *)(local_b8 + 0xc) = uVar3;
  uVar4 = s_C__neverlose_lua_owners_txt_1806e6f28._22_4_;
  uVar3 = s_C__neverlose_lua_owners_txt_1806e6f28._18_4_;
  uVar5 = CONCAT22(s_C__neverlose_lua_owners_txt_1806e6f28._16_2_,
                   s_C__neverlose_lua_owners_txt_1806e6f28._14_2_);
  *(uint *)(local_b8 + 10) =
       CONCAT22(s_C__neverlose_lua_owners_txt_1806e6f28._12_2_,
                s_C__neverlose_lua_owners_txt_1806e6f28._10_2_);
  *(undefined4 *)(local_b8 + 0xe) = uVar5;
  *(undefined4 *)(local_b8 + 0x12) = uVar3;
  *(undefined4 *)(local_b8 + 0x16) = uVar4;
  local_b8[0x1a] = '\0';
  puVar7 = (undefined8 *)FUN_1800134a0(&local_b8,&DAT_1806e6fbc,4);
  local_58 = (LPCSTR ***)*puVar7;
  uStack_50 = puVar7[1];
  local_48 = puVar7[2];
  uStack_40 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  *(undefined1 *)puVar7 = 0;
  if (0xf < local_a0) {
    plVar14 = (longlong *)(local_a0 + 1);
    pcVar10 = local_b8;
    if ((longlong *)0xfff < plVar14) {
      pcVar10 = *(char **)(local_b8 + -8);
      if ((char *)0x1f < local_b8 + (-8 - (longlong)pcVar10)) {
        pcVar2 = (code *)swi(0x29);
        plVar8 = (longlong *)(*pcVar2)(5);
        puVar16 = auStack_2c0;
        goto LAB_18009e6d1;
      }
      plVar14 = (longlong *)(local_a0 + 0x28);
    }
    thunk_FUN_1803d64e0(pcVar10,plVar14);
  }
  local_a8 = 0;
  local_a0 = 0xf;
  local_b8 = (char *)((ulonglong)local_b8 & 0xffffffffffffff00);
  FUN_180067620(local_288,&local_58,0x30);
  puVar17 = auStack_2c8;
  puVar16 = auStack_2c8;
  lVar13 = local_288[0];
  if ((abStack_278[*(int *)(local_288[0] + 4)] & 6) == 0) {
    unaff_RBX = (longlong *)*DAT_180ca0d68;
    puVar17 = auStack_2c8;
    if (*(char *)((longlong)unaff_RBX + 0x19) == '\0') {
      do {
        unaff_RDI = unaff_RBX + 8;
        *(undefined8 *)(puVar16 + -8) = 0x18009e6b5;
        plVar8 = (longlong *)FUN_180024b50(local_178,unaff_RBX + 0x16);
        plVar14 = plVar8;
        if ((ulonglong)plVar8[3] < 0x10) {
LAB_18009e6d1:
          plVar11 = plVar14;
        }
        else {
          plVar11 = (longlong *)*plVar8;
        }
        plVar8 = (longlong *)((longlong)plVar11 + plVar8[2]);
        for (; plVar11 != plVar8; plVar11 = (longlong *)((longlong)plVar11 + 1)) {
          if ((((char)*plVar11 - 9U & 0xfa) == 0) && ((char)*plVar11 != '\x0e')) {
            *(undefined1 *)plVar11 = 0x20;
          }
        }
        local_d8 = (undefined8 ****)*plVar14;
        lStack_d0 = plVar14[1];
        local_c8 = plVar14[2];
        uStack_c0 = plVar14[3];
        plVar14[2] = 0;
        plVar14[3] = 0xf;
        *(undefined1 *)plVar14 = 0;
        *(undefined8 *)(puVar16 + -8) = 0x18009e754;
        FUN_18000f890(plVar14);
        *(undefined8 *)(puVar16 + -8) = 0x18009e762;
        plVar14 = (longlong *)FUN_180024b50(local_158,unaff_RBX + 0xd);
        if ((ulonglong)plVar14[3] < 0x10) {
          plVar8 = plVar14;
        }
        else {
          plVar8 = (longlong *)*plVar14;
        }
        plVar11 = (longlong *)((longlong)plVar8 + plVar14[2]);
        for (; plVar8 != plVar11; plVar8 = (longlong *)((longlong)plVar8 + 1)) {
          if ((((char)*plVar8 - 9U & 0xfa) == 0) && ((char)*plVar8 != '\x0e')) {
            *(undefined1 *)plVar8 = 0x20;
          }
        }
        local_78 = (undefined8 ****)*plVar14;
        lStack_70 = plVar14[1];
        local_68 = plVar14[2];
        uStack_60 = plVar14[3];
        plVar14[2] = 0;
        plVar14[3] = 0xf;
        *(undefined1 *)plVar14 = 0;
        *(undefined8 *)(puVar16 + -8) = 0x18009e7f4;
        FUN_18000f890(plVar14);
        *(undefined8 *)(puVar16 + -8) = 0x18009e808;
        plVar14 = (longlong *)FUN_180024b50(local_138,unaff_RBX + 0x11);
        if ((ulonglong)plVar14[3] < 0x10) {
          plVar8 = plVar14;
        }
        else {
          plVar8 = (longlong *)*plVar14;
        }
        plVar11 = (longlong *)((longlong)plVar8 + plVar14[2]);
        for (; plVar8 != plVar11; plVar8 = (longlong *)((longlong)plVar8 + 1)) {
          if ((((char)*plVar8 - 9U & 0xfa) == 0) && ((char)*plVar8 != '\x0e')) {
            *(undefined1 *)plVar8 = 0x20;
          }
        }
        local_98 = (undefined8 ****)*plVar14;
        lStack_90 = plVar14[1];
        local_88 = plVar14[2];
        uStack_80 = plVar14[3];
        plVar14[2] = 0;
        plVar14[3] = 0xf;
        *(undefined1 *)plVar14 = 0;
        *(undefined8 *)(puVar16 + -8) = 0x18009e894;
        FUN_18000f890(plVar14);
        *(undefined8 *)(puVar16 + -8) = 0x18009e8a5;
        plVar14 = (longlong *)FUN_180024b50(local_118,unaff_RBX + 4);
        if ((ulonglong)plVar14[3] < 0x10) {
          plVar8 = plVar14;
        }
        else {
          plVar8 = (longlong *)*plVar14;
        }
        plVar11 = (longlong *)((longlong)plVar8 + plVar14[2]);
        for (; plVar8 != plVar11; plVar8 = (longlong *)((longlong)plVar8 + 1)) {
          if ((((char)*plVar8 - 9U & 0xfa) == 0) && ((char)*plVar8 != '\x0e')) {
            *(undefined1 *)plVar8 = 0x20;
          }
        }
        local_f8 = (undefined8 ****)*plVar14;
        ppuStack_f0 = (undefined **)plVar14[1];
        local_e8 = plVar14[2];
        uStack_e0 = plVar14[3];
        plVar14[2] = 0;
        plVar14[3] = 0xf;
        *(undefined1 *)plVar14 = 0;
        *(undefined8 *)(puVar16 + -8) = 0x18009e934;
        FUN_18000f890(plVar14);
        ppppuVar12 = &local_f8;
        if (0xf < uStack_e0) {
          ppppuVar12 = local_f8;
        }
        *(undefined8 *)(puVar16 + -8) = 0x18009e95d;
        uVar9 = FUN_180099140(puVar16 + 0x40,ppppuVar12,local_e8);
        *(undefined8 *)(puVar16 + -8) = 0x18009e967;
        uVar9 = FUN_180098db0(uVar9,9);
        if (0xf < (ulonglong)unaff_RBX[0xb]) {
          unaff_RDI = (longlong *)*unaff_RDI;
        }
        lVar13 = unaff_RBX[10];
        *(undefined8 *)(puVar16 + -8) = 0x18009e980;
        uVar9 = FUN_180099140(uVar9,unaff_RDI,lVar13);
        *(undefined8 *)(puVar16 + -8) = 0x18009e98a;
        uVar9 = FUN_180098db0(uVar9,9);
        lVar13 = unaff_RBX[0xc];
        *(undefined8 *)(puVar16 + -8) = 0x18009e995;
        uVar9 = FUN_1800a0f50(uVar9,(int)lVar13);
        *(undefined8 *)(puVar16 + -8) = 0x18009e99f;
        uVar9 = FUN_180098db0(uVar9,9);
        ppppuVar12 = &local_98;
        if (0xf < uStack_80) {
          ppppuVar12 = local_98;
        }
        *(undefined8 *)(puVar16 + -8) = 0x18009e9c5;
        uVar9 = FUN_180099140(uVar9,ppppuVar12,local_88);
        *(undefined8 *)(puVar16 + -8) = 0x18009e9cf;
        uVar9 = FUN_180098db0(uVar9,9);
        ppppuVar12 = &local_78;
        if (0xf < uStack_60) {
          ppppuVar12 = local_78;
        }
        *(undefined8 *)(puVar16 + -8) = 0x18009e9f5;
        uVar9 = FUN_180099140(uVar9,ppppuVar12,local_68);
        *(undefined8 *)(puVar16 + -8) = 0x18009e9ff;
        uVar9 = FUN_180098db0(uVar9,9);
        lVar13 = unaff_RBX[0x15];
        *(undefined8 *)(puVar16 + -8) = 0x18009ea0d;
        uVar9 = FUN_1800a0f50(uVar9,(int)lVar13);
        *(undefined8 *)(puVar16 + -8) = 0x18009ea17;
        uVar9 = FUN_180098db0(uVar9,9);
        ppppuVar12 = &local_d8;
        if (0xf < uStack_c0) {
          ppppuVar12 = local_d8;
        }
        *(undefined8 *)(puVar16 + -8) = 0x18009ea3d;
        uVar9 = FUN_180099140(uVar9,ppppuVar12,local_c8);
        *(undefined8 *)(puVar16 + -8) = 0x18009ea4c;
        FUN_1800a0af0(uVar9,&DAT_1806e6e50);
        if (0xf < uStack_e0) {
          uVar15 = uStack_e0 + 1;
          ppppuVar12 = local_f8;
          if (0xfff < uVar15) {
            ppppuVar12 = (undefined8 ****)local_f8[-1];
            if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppuVar12))) {
              lVar13 = 5;
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)();
              puVar17 = puVar16 + 8;
              goto LAB_18009ebde;
            }
            uVar15 = uStack_e0 + 0x28;
          }
          *(undefined8 *)(puVar16 + -8) = 0x18009ea8e;
          thunk_FUN_1803d64e0(ppppuVar12,uVar15);
        }
        local_e8 = 0;
        uStack_e0 = 0xf;
        local_f8 = (undefined8 ****)((ulonglong)local_f8 & 0xffffffffffffff00);
        *(undefined8 *)(puVar16 + -8) = 0x18009eab3;
        FUN_18000f890(&local_98);
        *(undefined8 *)(puVar16 + -8) = 0x18009eac0;
        FUN_18000f890(&local_78);
        *(undefined8 *)(puVar16 + -8) = 0x18009eacd;
        FUN_18000f890(&local_d8);
        plVar14 = (longlong *)unaff_RBX[2];
        if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar14 + 0x19);
          unaff_RBX = plVar14;
          while (cVar1 == '\0') {
            unaff_RBX = (longlong *)*unaff_RBX;
            cVar1 = *(char *)(*unaff_RBX + 0x19);
          }
        }
        else {
          cVar1 = *(char *)(unaff_RBX[1] + 0x19);
          plVar8 = (longlong *)unaff_RBX[1];
          plVar14 = unaff_RBX;
          while ((unaff_RBX = plVar8, cVar1 == '\0' && (plVar14 == (longlong *)unaff_RBX[2]))) {
            cVar1 = *(char *)(unaff_RBX[1] + 0x19);
            plVar8 = (longlong *)unaff_RBX[1];
            plVar14 = unaff_RBX;
          }
        }
      } while (*(char *)((longlong)unaff_RBX + 0x19) == '\0');
      lVar13 = *(longlong *)(puVar16 + 0x40);
      puVar17 = puVar16;
    }
    if ((puVar17[(longlong)*(int *)(lVar13 + 4) + 0x50] & 6) != 0) goto LAB_18009ebde;
    *(undefined ***)(puVar17 + (longlong)*(int *)(lVar13 + 4) + 0x40) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x40) + 4) + 0x3c) =
         *(int *)(*(longlong *)(puVar17 + 0x40) + 4) + -0xa8;
    *(undefined8 *)(puVar17 + -8) = 0x18009eb67;
    FUN_1800681f0(puVar17 + 0x48);
    *(undefined ***)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x40) + 4) + 0x40) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x40) + 4) + 0x3c) =
         *(int *)(*(longlong *)(puVar17 + 0x40) + 4) + -0x10;
    local_1e0[0] = std::ios_base::vftable;
    *(undefined8 *)(puVar17 + -8) = 0x18009eba0;
    FUN_1804eaa10(local_1e0);
    lpExistingFileName = (LPCSTR ***)&local_58;
    if (0xf < uStack_40) {
      lpExistingFileName = local_58;
    }
    *(undefined8 *)(puVar17 + -8) = 0x18009ebca;
    BVar6 = MoveFileExA((LPCSTR)lpExistingFileName,"C:\\neverlose\\lua_owners.txt",9);
    if (BVar6 != 0) {
      DAT_180ca1c3e = '\0';
    }
  }
  else {
LAB_18009ebde:
    *(undefined ***)(puVar17 + (longlong)*(int *)(lVar13 + 4) + 0x40) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x40) + 4) + 0x3c) =
         *(int *)(*(longlong *)(puVar17 + 0x40) + 4) + -0xa8;
    *(undefined8 *)(puVar17 + -8) = 0x18009ec0b;
    FUN_1800681f0(puVar17 + 0x48);
    *(undefined ***)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x40) + 4) + 0x40) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x40) + 4) + 0x3c) =
         *(int *)(*(longlong *)(puVar17 + 0x40) + 4) + -0x10;
    local_1e0[0] = std::ios_base::vftable;
    *(undefined8 *)(puVar17 + -8) = 0x18009ec44;
    FUN_1804eaa10(local_1e0);
  }
  *(undefined8 *)(puVar17 + -8) = 0x18009ec51;
  FUN_18000f890(&local_58);
LAB_18009ec51:
  *(undefined8 *)(puVar17 + -8) = 0x18009ec60;
  return;
}



/* ===== 18009ec70 FUN_18009ec70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ***** FUN_18009ec70(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 *****pppppuVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *****pppppuVar6;
  size_t sVar7;
  undefined8 *****pppppuVar8;
  byte *****pppppbVar9;
  ulonglong uVar10;
  undefined8 *****pppppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte *****pppppbVar15;
  longlong lVar16;
  undefined8 ****ppppuVar17;
  undefined8 uStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [56];
  longlong local_238 [2];
  byte abStack_228 [56];
  longlong alStack_1f0 [25];
  undefined8 *****local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  byte *****local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8 [9];
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [8];
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_278;
  local_108 = param_2;
  FUN_180066c10(&local_128);
  pppppuVar8 = &local_128;
  if (7 < local_110) {
    pppppuVar8 = local_128;
  }
  iVar4 = FUN_1804e5830(pppppuVar8,local_c8,0x21,0xffffffff);
  if (iVar4 == 0) {
    FUN_1800289e0(&local_128);
    FUN_180066c10(&local_128,param_2);
    pppppuVar8 = &local_128;
    if (7 < local_110) {
      pppppuVar8 = local_128;
    }
    iVar4 = FUN_1804e5830(pppppuVar8,local_78,9,0xffffffff);
    lVar16 = -1;
    if (iVar4 == 0) {
      lVar16 = local_70;
    }
    FUN_1800289e0();
    if (iVar4 != 0) {
      lVar16 = 0;
    }
    ppppuVar17 = (undefined8 ****)(lVar16 << 0x28 ^ local_c8[0]);
  }
  else {
    FUN_1800289e0(&local_128);
    ppppuVar17 = (undefined8 ****)0x0;
  }
  pppppuVar2 = DAT_180ca0d58;
  puVar13 = auStack_278;
  puVar12 = auStack_278;
  pppppuVar8 = (undefined8 *****)DAT_180ca0d58[1];
  pppppuVar11 = pppppuVar8;
  pppppuVar6 = DAT_180ca0d58;
  if (*(char *)((longlong)pppppuVar8 + 0x19) == '\0') {
    do {
      pppppuVar8 = pppppuVar11;
      cVar3 = FUN_180023470(pppppuVar8 + 4,param_1);
      if (-1 < cVar3) {
        pppppuVar11 = (undefined8 *****)*pppppuVar8;
        pppppuVar6 = pppppuVar8;
      }
      else {
        pppppuVar11 = (undefined8 *****)pppppuVar8[2];
      }
      uVar14 = (uint)(-1 < cVar3);
    } while (*(char *)((longlong)pppppuVar11 + 0x19) == '\0');
  }
  else {
    uVar14 = 0;
  }
  if ((*(char *)((longlong)pppppuVar6 + 0x19) != '\0') ||
     (cVar3 = FUN_180023470(param_1,pppppuVar6 + 4), cVar3 < '\0')) {
    if (DAT_180ca0d60 == 0x1c71c71c71c71c7) goto LAB_18009f1b2;
    local_128 = &DAT_180ca0d58;
    uStack_120 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)FUN_1804ecaa0(0x90);
    uStack_120 = puVar5;
    FUN_180024b50(puVar5 + 4,param_1);
    *(undefined2 *)((longlong)puVar5 + 0x8d) = 0;
    *(undefined1 *)((longlong)puVar5 + 0x8f) = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0xf;
    *(undefined1 *)(puVar5 + 9) = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0xf;
    *(undefined1 *)(puVar5 + 0xd) = 0;
    *(undefined4 *)(puVar5 + 0x11) = 0;
    *(undefined1 *)((longlong)puVar5 + 0x8c) = 0;
    *puVar5 = pppppuVar2;
    puVar5[1] = pppppuVar2;
    puVar5[2] = pppppuVar2;
    *(undefined2 *)(puVar5 + 3) = 0;
    uStack_120 = (undefined8 *)CONCAT44(uStack_120._4_4_,uVar14);
    local_128 = pppppuVar8;
    pppppuVar6 = (undefined8 *****)FUN_1800774d0(&DAT_180ca0d58,&local_128,puVar5);
  }
  if ((ppppuVar17 != (undefined8 ****)0x0) && (pppppuVar6[8] == ppppuVar17)) goto LAB_18009f17d;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xf;
  local_e8 = (byte *****)0x0;
  local_c8[0] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[4] = 0xf;
  local_c8[1] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[8] = 0xf;
  local_c8[5] = 0;
  local_80 = 0;
  local_7c = 0;
  pppppuVar6[8] = (undefined8 ****)0x0;
  FUN_18002ba60(pppppuVar6 + 9,local_c8 + 1);
  FUN_18002ba60(pppppuVar6 + 0xd,local_c8 + 5);
  *(undefined4 *)(pppppuVar6 + 0x11) = local_80;
  *(undefined1 *)((longlong)pppppuVar6 + 0x8c) = local_7c;
  FUN_18000f890(local_c8 + 5);
  FUN_18000f890(local_c8 + 1);
  FUN_180067670(local_238,local_108,0x20);
  if ((abStack_228[*(int *)(local_238[0] + 4)] & 6) != 0) {
    FUN_18005e2f0(local_238);
LAB_18009f140:
    if (local_d0 < 0x10) goto LAB_18009f17d;
    uVar10 = local_d0 + 1;
    pppppbVar15 = local_e8;
    if (0xfff < uVar10) {
      pppppbVar15 = (byte *****)local_e8[-1];
      if ((byte *)0x1f < (byte *)((longlong)local_e8 + (-8 - (longlong)pppppbVar15)))
      goto LAB_18009f1ab;
      uVar10 = local_d0 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppbVar15,uVar10);
LAB_18009f17d:
    return pppppuVar6 + 8;
  }
  local_128 = *(undefined8 ******)((longlong)alStack_1f0 + (longlong)*(int *)(local_238[0] + 4));
  local_108 = 0;
  uStack_100 = CONCAT26(uStack_120._6_2_,CONCAT42(uStack_120._2_4_,1));
  uStack_120._0_2_ = (ushort)(local_128 == (undefined8 *****)0x0);
  FUN_180066c70(&local_e8,&local_128,&local_108);
  FUN_18005e2f0(local_238);
  pppppuVar6[8] = ppppuVar17;
  uVar10 = 0xcbf29ce484222325;
  pppppbVar15 = (byte *****)&local_e8;
  if (0xf < local_d0) {
    pppppbVar15 = local_e8;
  }
  pppppbVar9 = (byte *****)((longlong)pppppbVar15 + local_d8);
  for (; pppppbVar15 != pppppbVar9; pppppbVar15 = (byte *****)((longlong)pppppbVar15 + 1)) {
    uVar10 = (uVar10 ^ *(byte *)pppppbVar15) * 0x100000001b3;
  }
  local_128 = (undefined8 *****)0x0;
  uStack_120 = (undefined8 *)0x0;
  local_118 = 0;
  snprintf(&local_128,0x18,"%016llx",uVar10);
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  sVar7 = strlen((char *)&local_128);
  FUN_1800133a0(&local_108,&local_128,sVar7);
  FUN_18002ba60(pppppuVar6 + 9,&local_108);
  if (local_f0 < 0x10) {
LAB_18009f0fe:
    lVar16 = FUN_18009d570(local_c8,&local_e8);
    FUN_18002ba60(pppppuVar6 + 0xd,lVar16);
    *(undefined4 *)(pppppuVar6 + 0x11) = *(undefined4 *)(lVar16 + 0x20);
    *(undefined1 *)((longlong)pppppuVar6 + 0x8c) = *(undefined1 *)(lVar16 + 0x24);
    FUN_18000f890(local_c8);
    goto LAB_18009f140;
  }
  uVar10 = local_f0 + 1;
  lVar16 = local_108;
  if (uVar10 < 0x1000) {
LAB_18009f0f9:
    thunk_FUN_1803d64e0(lVar16,uVar10);
    goto LAB_18009f0fe;
  }
  lVar16 = *(longlong *)(local_108 + -8);
  if ((local_108 - lVar16) - 8U < 0x20) {
    uVar10 = local_f0 + 0x28;
    goto LAB_18009f0f9;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar12 = auStack_270;
LAB_18009f1ab:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar13 = puVar12 + 8;
LAB_18009f1b2:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar13 + -8) = &UNK_18009f1b7;
  FUN_18006dab0();
}



/* ===== 18009f1c0 FUN_18009f1c0 ===== */

void FUN_18009f1c0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x28);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 18009f1e0 FUN_18009f1e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18009f1e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  size_t sVar1;
  size_t _Size;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *_Buf2;
  longlong *plVar8;
  undefined4 uVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  plVar2 = DAT_180ca0d68;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  cVar3 = *(char *)(DAT_180ca0d68[1] + 0x19);
  plVar7 = (longlong *)DAT_180ca0d68[1];
  plVar6 = DAT_180ca0d68;
  while (plVar8 = plVar7, cVar3 == '\0') {
    cVar3 = FUN_180023470(plVar8 + 4,param_1);
    if (cVar3 < '\0') {
      plVar7 = (longlong *)plVar8[2];
      plVar8 = plVar6;
    }
    else {
      plVar7 = (longlong *)*plVar8;
    }
    cVar3 = *(char *)((longlong)plVar7 + 0x19);
    plVar6 = plVar8;
  }
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
      (cVar3 = FUN_180023470(param_1,plVar6 + 4), -1 < cVar3)) && (plVar6 != plVar2)) {
    plVar6 = plVar6 + 8;
  }
  else {
    if ((param_3 != 0) && (sVar1 = param_2[2], sVar1 != 0)) {
      plVar6 = (longlong *)*plVar2;
      while (plVar6 != plVar2) {
        if ((ulonglong)param_2[3] < 0x10) {
          _Buf2 = param_2;
        }
        else {
          _Buf2 = (undefined8 *)*param_2;
        }
        _Size = plVar6[10];
        plVar7 = plVar6 + 8;
        if (0xf < (ulonglong)plVar6[0xb]) {
          plVar7 = (longlong *)plVar6[8];
        }
        if (((_Size == sVar1) && ((_Size == 0 || (iVar4 = memcmp(plVar7,_Buf2,_Size), iVar4 == 0))))
           && (lVar5 = FUN_1800814a0(param_3,plVar6 + 4), lVar5 == 0)) {
          local_d8 = plVar6[8];
          lStack_d0 = plVar6[9];
          local_c8 = plVar6[10];
          local_c0 = plVar6[0xb];
          plVar6[10] = 0;
          plVar6[0xb] = 0xf;
          *(undefined1 *)(plVar6 + 8) = 0;
          local_b8 = (undefined4)plVar6[0xc];
          local_b0 = plVar6[0xd];
          lStack_a8 = plVar6[0xe];
          local_a0 = plVar6[0xf];
          local_98 = plVar6[0x10];
          plVar6[0xf] = 0;
          plVar6[0x10] = 0xf;
          *(undefined1 *)(plVar6 + 0xd) = 0;
          local_90 = plVar6[0x11];
          lStack_88 = plVar6[0x12];
          local_80 = plVar6[0x13];
          local_78 = plVar6[0x14];
          plVar6[0x13] = 0;
          plVar6[0x14] = 0xf;
          *(undefined1 *)(plVar6 + 0x11) = 0;
          local_70 = (undefined4)plVar6[0x15];
          local_68 = plVar6[0x16];
          lStack_60 = plVar6[0x17];
          local_58 = plVar6[0x18];
          local_50 = plVar6[0x19];
          plVar6[0x18] = 0;
          plVar6[0x19] = 0xf;
          *(undefined1 *)(plVar6 + 0x16) = 0;
          lVar5 = FUN_180077e30(&DAT_180ca0d68,plVar6);
          FUN_18000f890(lVar5 + 0xb0);
          FUN_18000f890(lVar5 + 0x88);
          FUN_18000f890(lVar5 + 0x68);
          FUN_18000f890(lVar5 + 0x40);
          FUN_18000f890(lVar5 + 0x20);
          uVar9 = thunk_FUN_1803d64e0(lVar5,0xd0);
          DAT_180ca1c3e = 1;
          plVar6 = (longlong *)FUN_1800a0d80(uVar9,local_e8,param_1,&local_d8);
          lVar5 = *plVar6;
          FUN_18000f890(&local_68);
          FUN_18000f890(&local_90);
          FUN_18000f890(&local_b0);
          FUN_18000f890(&local_d8);
          return (longlong *)(lVar5 + 0x40);
        }
        plVar7 = (longlong *)plVar6[2];
        if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
          cVar3 = *(char *)(*plVar7 + 0x19);
          plVar6 = plVar7;
          while (cVar3 == '\0') {
            plVar6 = (longlong *)*plVar6;
            cVar3 = *(char *)(*plVar6 + 0x19);
          }
        }
        else {
          cVar3 = *(char *)(plVar6[1] + 0x19);
          plVar8 = (longlong *)plVar6[1];
          plVar7 = plVar6;
          while ((plVar6 = plVar8, cVar3 == '\0' && (plVar7 == (longlong *)plVar6[2]))) {
            cVar3 = *(char *)(plVar6[1] + 0x19);
            plVar8 = (longlong *)plVar6[1];
            plVar7 = plVar6;
          }
        }
      }
    }
    plVar6 = (longlong *)0x0;
  }
  return plVar6;
}



/* ===== 18009f510 FUN_18009f510 ===== */

undefined8 * FUN_18009f510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[7] = 0;
  param_2[8] = 0xf;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  *(undefined1 *)(param_2 + 9) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0xf;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  *(undefined1 *)(param_2 + 0xe) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0xf;
  return param_1;
}



/* ===== 18009f5f0 FUN_18009f5f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18009f5f0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined4 uStack_9f;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined2 local_84;
  undefined1 local_82;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uStack_a7 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9b = 0;
  uStack_99 = 0;
  local_98 = _DAT_1808ad410;
  uStack_90 = _UNK_1808ad418;
  local_a8 = 0;
  local_88 = 0;
  local_84 = 0;
  local_82 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_60 = 0;
  local_40 = 0;
  plVar1 = (longlong *)(param_2 + 0x28);
  local_b0 = param_1;
  if ((longlong *)&local_a8 != plVar1) {
    if (*(ulonglong *)(param_2 + 0x40) < 0x10) {
      plVar4 = plVar1;
    }
    else {
      plVar4 = (longlong *)*plVar1;
    }
    FUN_180029840(&local_a8,plVar4,*(undefined8 *)(param_2 + 0x38));
  }
  local_88 = *(int *)(param_2 + 0x20);
  local_84 = CONCAT11(param_3,1);
  if (local_88 == 0) {
    uVar3 = FUN_1801c8250();
    local_82 = FUN_180023400(plVar1,uVar3);
  }
  else {
    local_82 = local_88 == 1;
  }
  puVar5 = (ulonglong *)(param_2 + 0x48);
  if (&local_80 != puVar5) {
    if (0xf < *(ulonglong *)(param_2 + 0x60)) {
      puVar5 = (ulonglong *)*puVar5;
    }
    FUN_180029840(&local_80,puVar5,*(undefined8 *)(param_2 + 0x58));
  }
  puVar5 = (ulonglong *)(param_2 + 0x70);
  if (&local_60 != puVar5) {
    if (0xf < *(ulonglong *)(param_2 + 0x88)) {
      puVar5 = (ulonglong *)*puVar5;
    }
    FUN_180029840(&local_60,puVar5,*(undefined8 *)(param_2 + 0x80));
  }
  uVar2 = _UNK_1808ad418;
  uVar3 = _DAT_1808ad410;
  local_40 = *(undefined4 *)(param_2 + 0x68);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)param_1 = local_a8;
  *(ulonglong *)((longlong)param_1 + 1) = CONCAT17(uStack_a0,uStack_a7);
  *(undefined4 *)((longlong)param_1 + 9) = uStack_9f;
  *(undefined2 *)((longlong)param_1 + 0xd) = uStack_9b;
  *(undefined1 *)((longlong)param_1 + 0xf) = uStack_99;
  param_1[2] = local_98;
  param_1[3] = uStack_90;
  local_a8 = 0;
  *(int *)(param_1 + 4) = local_88;
  *(undefined1 *)((longlong)param_1 + 0x24) = (undefined1)local_84;
  *(undefined1 *)((longlong)param_1 + 0x25) = local_84._1_1_;
  *(undefined1 *)((longlong)param_1 + 0x26) = local_82;
  param_1[5] = local_80;
  param_1[6] = uStack_78;
  param_1[7] = local_70;
  param_1[8] = local_68;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = local_80 & 0xffffffffffffff00;
  param_1[9] = local_60;
  param_1[10] = uStack_58;
  param_1[0xb] = local_50;
  param_1[0xc] = local_48;
  local_50 = 0;
  local_48 = 0xf;
  local_60 = local_60 & 0xffffffffffffff00;
  *(undefined4 *)(param_1 + 0xd) = local_40;
  local_98 = uVar3;
  uStack_90 = uVar2;
  FUN_18000f890(&local_60);
  FUN_18000f890(&local_80);
  FUN_18000f890(&local_a8);
  return param_1;
}



/* ===== 18009f850 FUN_18009f850 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18009f850(LPCSTR param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  char ****ppppcVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  size_t sVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 ****ppppuVar15;
  LPCSTR ***ppppCVar16;
  char ****ppppcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [36];
  int iStack_2bc;
  longlong local_2b8;
  undefined1 local_2b0 [8];
  byte abStack_2a8 [56];
  ulonglong auStack_270 [12];
  undefined **local_210 [13];
  undefined1 local_1a8 [32];
  char ****local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  undefined8 ****local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong uStack_130;
  LPCSTR ***local_128 [3];
  ulonglong local_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_2e8;
  uVar19 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_188 = (char ****)0x0;
  FUN_180067670(&local_2b8,param_1,0x20);
  if ((abStack_2a8[*(int *)(local_2b8 + 4)] & 6) != 0) {
    FUN_18005e2f0(&local_2b8);
    puVar24 = auStack_2e8;
    uVar14 = 0;
    goto LAB_18009ff85;
  }
  local_168 = *(ulonglong *)((longlong)auStack_270 + (longlong)*(int *)(local_2b8 + 4));
  local_148 = (undefined8 ****)0x0;
  uStack_140 = CONCAT26(uStack_160._6_2_,CONCAT42(uStack_160._2_4_,1));
  uStack_160._0_2_ = (ushort)(local_168 == 0);
  FUN_180066c70(&local_188,&local_168,&local_148);
  FUN_18005e2f0(&local_2b8);
  uVar25 = local_170;
  uVar18 = local_178;
  ppppcVar17 = local_188;
  if (2 < local_178) {
    ppppcVar5 = (char ****)&local_188;
    if (0xf < local_170) {
      ppppcVar5 = local_188;
    }
    if (*(char *)ppppcVar5 == -0x11) {
      ppppcVar5 = (char ****)&local_188;
      if (0xf < local_170) {
        ppppcVar5 = local_188;
      }
      if (*(char *)((longlong)ppppcVar5 + 1) == -0x45) {
        ppppcVar5 = (char ****)&local_188;
        if (0xf < local_170) {
          ppppcVar5 = local_188;
        }
        if (*(char *)((longlong)ppppcVar5 + 2) == -0x41) {
          uVar19 = 3;
        }
      }
    }
  }
  sVar11 = 2;
  if (local_178 - uVar19 < 2) {
    sVar11 = local_178 - uVar19;
  }
  ppppcVar5 = (char ****)&local_188;
  if (0xf < local_170) {
    ppppcVar5 = local_188;
  }
  iVar3 = memcmp((char *)((longlong)ppppcVar5 + uVar19),&DAT_1806e6f68,sVar11);
  if ((iVar3 == 0) && (1 < sVar11)) {
    ppppcVar5 = (char ****)&local_188;
    if (0xf < uVar25) {
      ppppcVar5 = ppppcVar17;
    }
    if (uVar19 < uVar18) {
      pcVar6 = (char *)thunk_FUN_1804e6c50((char *)((longlong)ppppcVar5 + uVar19),
                                           (char *)((longlong)ppppcVar5 + uVar18),10);
      ppppcVar17 = local_188;
      uVar25 = local_170;
      if ((pcVar6 != (char *)((longlong)ppppcVar5 + uVar18)) &&
         ((longlong)pcVar6 - (longlong)ppppcVar5 != -1)) {
        uVar18 = local_178;
        uVar19 = ((longlong)pcVar6 - (longlong)ppppcVar5) + 1;
        goto LAB_18009fa32;
      }
      uVar18 = local_178;
    }
    uVar19 = uVar18;
  }
LAB_18009fa32:
  ppppcVar5 = (char ****)&local_188;
  if (0xf < uVar25) {
    ppppcVar5 = ppppcVar17;
  }
  if ((uVar18 < 2) ||
     (pcVar6 = (char *)thunk_FUN_1804e92d0(ppppcVar5,(char *)((longlong)ppppcVar5 + uVar18),
                                           &DAT_1806e6e50,2),
     pcVar6 == (char *)((longlong)ppppcVar5 + uVar18))) {
    lVar7 = -1;
  }
  else {
    lVar7 = (longlong)pcVar6 - (longlong)ppppcVar5;
  }
  pcVar6 = "\n";
  if (lVar7 != -1) {
    pcVar6 = "\r\n";
  }
  uVar14 = FUN_18003a390(local_68,*(undefined4 *)(param_2 + 0x20));
  puVar8 = (ulonglong *)FUN_180024b50(local_1a8,param_2 + 0x28);
  if (puVar8[3] < 0x10) {
    puVar9 = puVar8;
  }
  else {
    puVar9 = (ulonglong *)*puVar8;
  }
  puVar26 = (ulonglong *)((longlong)puVar9 + puVar8[2]);
  for (; puVar9 != puVar26; puVar9 = (ulonglong *)((longlong)puVar9 + 1)) {
    if ((((char)*puVar9 - 9U & 0xfa) == 0) && ((char)*puVar9 != '\x0e')) {
      *(char *)puVar9 = ' ';
    }
  }
  local_e8 = *puVar8;
  uStack_e0 = puVar8[1];
  local_d8 = puVar8[2];
  uStack_d0 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  *(char *)puVar8 = '\0';
  FUN_18000f890(puVar8);
  uVar10 = FUN_180066ab0(local_88,"-- @author ",&local_e8);
  sVar11 = strlen(pcVar6);
  puVar8 = (ulonglong *)FUN_1800134a0(uVar10,pcVar6,sVar11);
  local_108 = *puVar8;
  uStack_100 = puVar8[1];
  local_f8 = puVar8[2];
  uStack_f0 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  *(undefined1 *)puVar8 = 0;
  puVar12 = (undefined4 *)FUN_1800134a0(&local_108,"-- @uid ",8);
  local_c8 = *puVar12;
  uStack_c4 = puVar12[1];
  uStack_c0 = puVar12[2];
  uStack_bc = puVar12[3];
  local_b8 = *(undefined8 *)(puVar12 + 4);
  uStack_b0 = *(ulonglong *)(puVar12 + 6);
  *(undefined8 *)(puVar12 + 4) = 0;
  *(undefined8 *)(puVar12 + 6) = 0xf;
  *(undefined1 *)puVar12 = 0;
  uVar14 = FUN_180066820(local_a8,&local_c8,uVar14);
  sVar11 = strlen(pcVar6);
  puVar8 = (ulonglong *)FUN_1800134a0(uVar14,pcVar6,sVar11);
  local_168 = *puVar8;
  uStack_160 = puVar8[1];
  local_158 = puVar8[2];
  uStack_150 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 0xf;
  *(undefined1 *)puVar8 = 0;
  sVar11 = strlen(pcVar6);
  plVar13 = (longlong *)FUN_1800134a0(&local_168,pcVar6,sVar11);
  local_148 = (undefined8 ****)*plVar13;
  uStack_140 = plVar13[1];
  local_138 = plVar13[2];
  uStack_130 = plVar13[3];
  plVar13[2] = 0;
  plVar13[3] = 0xf;
  *(undefined1 *)plVar13 = 0;
  ppppuVar15 = &local_148;
  if (0xf < uStack_130) {
    ppppuVar15 = local_148;
  }
  FUN_18006b5b0(&local_188,uVar19,ppppuVar15,local_138);
  if (uStack_130 < 0x10) {
LAB_18009fcff:
    puVar20 = auStack_2e8;
    if (0xf < uStack_150) {
      uVar18 = uStack_150 + 1;
      uVar19 = local_168;
      if (0xfff < uVar18) {
        uVar19 = *(ulonglong *)(local_168 - 8);
        if (0x1f < (local_168 - uVar19) - 8) goto LAB_18009fff4;
        uVar18 = uStack_150 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar19,uVar18);
    }
    local_158 = 0;
    uStack_150 = 0xf;
    local_168 = local_168 & 0xffffffffffffff00;
    FUN_18000f890(local_a8);
    puVar21 = auStack_2e8;
    if (0xf < uStack_b0) {
      uVar19 = uStack_b0 + 1;
      lVar2 = CONCAT44(uStack_c4,local_c8);
      lVar7 = lVar2;
      if (0xfff < uVar19) {
        lVar7 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar7) - 8U) goto LAB_18009fffb;
        uVar19 = uStack_b0 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar7,uVar19);
    }
    puVar22 = auStack_2e8;
    if (0xf < uStack_f0) {
      uVar18 = uStack_f0 + 1;
      uVar19 = local_108;
      if (0xfff < uVar18) {
        uVar19 = *(ulonglong *)(local_108 - 8);
        if (0x1f < (local_108 - uVar19) - 8) goto LAB_1800a0002;
        uVar18 = uStack_f0 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar19,uVar18);
    }
    local_f8 = 0;
    uStack_f0 = 0xf;
    local_108 = local_108 & 0xffffffffffffff00;
    FUN_18000f890(local_88);
    puVar23 = auStack_2e8;
    if (0xf < uStack_d0) {
      uVar18 = uStack_d0 + 1;
      uVar19 = local_e8;
      if (0xfff < uVar18) {
        uVar19 = *(ulonglong *)(local_e8 - 8);
        if (0x1f < (local_e8 - uVar19) - 8) goto LAB_1800a0009;
        uVar18 = uStack_d0 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar19,uVar18);
    }
    local_d8 = 0;
    uStack_d0 = 0xf;
    local_e8 = local_e8 & 0xffffffffffffff00;
    FUN_18000f890(local_68);
    FUN_180073a70(local_128,param_1,".owner");
    FUN_180067620(&local_2b8,local_128,0x30);
    if ((abStack_2a8[*(int *)(local_2b8 + 4)] & 6) == 0) {
      ppppcVar17 = (char ****)&local_188;
      if (0xf < local_170) {
        ppppcVar17 = local_188;
      }
      FUN_1800682a0(&local_2b8,ppppcVar17,local_178);
      puVar24 = auStack_2e8;
      lVar7 = local_2b8;
      if ((abStack_2a8[*(int *)(local_2b8 + 4)] & 6) == 0) goto LAB_1800a0010;
      FUN_1800a0eb0(&local_2b8);
      ppppCVar16 = (LPCSTR ***)local_128;
      if (0xf < local_110) {
        ppppCVar16 = local_128[0];
      }
      DeleteFileA((LPCSTR)ppppCVar16);
    }
    *(undefined ***)(auStack_2e0 + (longlong)*(int *)(local_2b8 + 4) + 0x28) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)(auStack_2e0 + (longlong)*(int *)(local_2b8 + 4) + 0x24) =
         *(int *)(local_2b8 + 4) + -0xa8;
    FUN_1800681f0(local_2b0);
    *(undefined ***)(auStack_2e0 + (longlong)*(int *)(local_2b8 + 4) + 0x28) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)(auStack_2e0 + (longlong)*(int *)(local_2b8 + 4) + 0x24) =
         *(int *)(local_2b8 + 4) + -0x10;
    local_210[0] = std::ios_base::vftable;
    FUN_1804eaa10(local_210);
    puVar24 = auStack_2e8;
LAB_18009ff76:
    uVar14 = 0;
  }
  else {
    uVar19 = uStack_130 + 1;
    ppppuVar15 = local_148;
    if (uVar19 < 0x1000) {
LAB_18009fcf9:
      thunk_FUN_1803d64e0(ppppuVar15,uVar19);
      goto LAB_18009fcff;
    }
    ppppuVar15 = (undefined8 ****)local_148[-1];
    if ((ulonglong)((longlong)local_148 + (-8 - (longlong)ppppuVar15)) < 0x20) {
      uVar19 = uStack_130 + 0x28;
      goto LAB_18009fcf9;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar20 = auStack_2e0;
LAB_18009fff4:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar21 = puVar20 + 8;
LAB_18009fffb:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar22 = puVar21 + 8;
LAB_1800a0002:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar23 = puVar22 + 8;
LAB_1800a0009:
    lVar7 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
    puVar24 = puVar23 + 8;
LAB_1800a0010:
    *(undefined ***)(puVar24 + (longlong)*(int *)(lVar7 + 4) + 0x30) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)(puVar24 + (longlong)*(int *)(*(longlong *)(puVar24 + 0x30) + 4) + 0x2c) =
         *(int *)(*(longlong *)(puVar24 + 0x30) + 4) + -0xa8;
    *(undefined8 *)(puVar24 + -8) = 0x1800a003d;
    FUN_1800681f0(puVar24 + 0x38);
    *(undefined ***)(puVar24 + (longlong)*(int *)(*(longlong *)(puVar24 + 0x30) + 4) + 0x30) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    *(int *)(puVar24 + (longlong)*(int *)(*(longlong *)(puVar24 + 0x30) + 4) + 0x2c) =
         *(int *)(*(longlong *)(puVar24 + 0x30) + 4) + -0x10;
    local_210[0] = std::ios_base::vftable;
    *(undefined8 *)(puVar24 + -8) = 0x1800a0076;
    FUN_1804eaa10(local_210);
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(LPCSTR *)param_1;
    }
    ppppCVar16 = (LPCSTR ***)local_128;
    if (0xf < local_110) {
      ppppCVar16 = local_128[0];
    }
    *(undefined8 *)(puVar24 + -8) = 0x1800a00a8;
    BVar4 = MoveFileExA((LPCSTR)ppppCVar16,param_1,9);
    if (BVar4 == 0) {
      ppppCVar16 = (LPCSTR ***)local_128;
      if (0xf < local_110) {
        ppppCVar16 = local_128[0];
      }
      *(undefined8 *)(puVar24 + -8) = 0x1800a00d0;
      DeleteFileA((LPCSTR)ppppCVar16);
      goto LAB_18009ff76;
    }
    uVar14 = 1;
  }
  *(undefined8 *)(puVar24 + -8) = 0x18009ff84;
  FUN_18000f890(local_128);
LAB_18009ff85:
  if (0xf < local_170) {
    uVar19 = local_170 + 1;
    ppppcVar17 = local_188;
    if (0xfff < uVar19) {
      ppppcVar17 = (char ****)local_188[-1];
      if ((char *)0x1f < (char *)((longlong)local_188 + (-8 - (longlong)ppppcVar17))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar14 = (*pcVar1)();
        return uVar14;
      }
      uVar19 = local_170 + 0x28;
    }
    *(undefined8 *)(puVar24 + -8) = 0x18009ffc0;
    thunk_FUN_1803d64e0(ppppcVar17,uVar19);
  }
  *(undefined8 *)(puVar24 + -8) = 0x18009ffd2;
  return uVar14;
}



/* ===== 1800a00e0 FUN_1800a00e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800a00e0(longlong *param_1,longlong *param_2)

{
  size_t sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char *_Str;
  size_t sVar7;
  longlong *_Buf1;
  undefined8 ****ppppuVar8;
  longlong *_Buf2;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_160 [2];
  longlong local_150 [2];
  longlong *local_140;
  undefined8 *local_138;
  undefined8 ****local_128;
  undefined8 uStack_120;
  size_t local_118;
  ulonglong local_110;
  int local_108;
  undefined2 local_104;
  bool local_102;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [40];
  undefined1 local_90 [32];
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_188;
  local_168 = 0;
  local_138 = &DAT_1809e8ef0;
  local_140 = param_1;
  iVar2 = FUN_1804e4d70(&DAT_1809e8ef0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8f3c == 0x7fffffff) {
    DAT_1809e8f3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_18009ddb0();
  FUN_180081560(local_160);
  lVar12 = param_2[1];
  for (lVar9 = *param_2; lVar9 != lVar12; lVar9 = lVar9 + 0x40) {
    FUN_180081270(local_160,local_150,lVar9);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_168 = 1;
  uVar10 = param_2[1] - *param_2 >> 6;
  if (uVar10 != 0) {
    if (0x249249249249249 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar3 = FUN_18000fb70(uVar10 * 0x70);
    lVar12 = param_1[1];
    lVar9 = *param_1;
    lVar4 = lVar3;
    if (lVar9 != lVar12) {
      do {
        FUN_18009c0b0(lVar3);
        lVar3 = lVar3 + 0x70;
        lVar9 = lVar9 + 0x70;
      } while (lVar9 != lVar12);
    }
    FUN_1800a32f0(param_1,lVar4,0,uVar10);
  }
  lVar12 = *param_2;
  lVar9 = param_2[1];
  local_150[0] = lVar9;
  if (lVar12 != lVar9) {
    do {
      lVar4 = FUN_18009ec70(lVar12,lVar12 + 0x20);
      plVar11 = (longlong *)(lVar4 + 8);
      plVar5 = (longlong *)FUN_18009f1e0(lVar12,plVar11,local_160);
      if (plVar5 == (longlong *)0x0) {
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0xf;
        local_128 = (undefined8 ****)0x0;
        local_108 = 0;
        local_104 = 0;
        local_102 = false;
        uStack_f8 = 0;
        local_f0 = 0;
        local_e8 = 0xf;
        local_100 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_c8 = 0xf;
        local_e0 = 0;
        local_c0 = 0;
        if (*(char *)(lVar4 + 0x4c) != '\0') {
          ppppuVar8 = (undefined8 ****)(lVar4 + 0x28);
          if (&local_128 != (undefined8 *****)ppppuVar8) {
            if (0xf < *(ulonglong *)(lVar4 + 0x40)) {
              ppppuVar8 = (undefined8 ****)*ppppuVar8;
            }
            FUN_180029840(&local_128,ppppuVar8,*(undefined8 *)(lVar4 + 0x38));
          }
          uVar10 = local_110;
          sVar1 = local_118;
          local_108 = *(int *)(lVar4 + 0x48);
          local_104 = CONCAT11(1,(undefined1)local_104);
          if (local_108 == 0) {
            _Str = (char *)FUN_1801c8250();
            sVar7 = strlen(_Str);
            ppppuVar8 = &local_128;
            if (0xf < uVar10) {
              ppppuVar8 = local_128;
            }
            if (sVar1 == sVar7) {
              if (sVar1 == 0) {
                local_102 = true;
              }
              else {
                iVar2 = memcmp(ppppuVar8,_Str,sVar1);
                local_102 = iVar2 == 0;
              }
            }
            else {
              local_102 = false;
            }
          }
          else {
            local_102 = local_108 == 1;
          }
        }
        FUN_1800a1250(param_1,&local_128);
        FUN_18000f890(&local_e0);
        FUN_18000f890(&local_100);
        FUN_18000f890(&local_128);
      }
      else {
        sVar1 = *(size_t *)(lVar4 + 0x18);
        if (sVar1 != 0) {
          uVar10 = *(ulonglong *)(lVar4 + 0x20);
          _Buf2 = plVar11;
          if (0xf < uVar10) {
            _Buf2 = (longlong *)*plVar11;
          }
          sVar7 = plVar5[2];
          if ((ulonglong)plVar5[3] < 0x10) {
            _Buf1 = plVar5;
          }
          else {
            _Buf1 = (longlong *)*plVar5;
          }
          if ((sVar7 != sVar1) || ((sVar7 != 0 && (iVar2 = memcmp(_Buf1,_Buf2,sVar7), iVar2 != 0))))
          {
            if (plVar5 != plVar11) {
              if (0xf < uVar10) {
                plVar11 = (longlong *)*plVar11;
              }
              FUN_180029840(plVar5,plVar11,sVar1);
            }
            DAT_180ca1c3e = 1;
          }
          lVar9 = local_150[0];
        }
        uVar6 = FUN_18009f5f0(local_b8,plVar5,*(undefined1 *)(lVar4 + 0x4c));
        FUN_1800a1250(param_1,uVar6);
        FUN_18000f890(local_70);
        FUN_18000f890(local_90);
        FUN_18000f890(local_b8);
      }
      lVar12 = lVar12 + 0x40;
    } while (lVar12 != lVar9);
  }
  FUN_18009e4c0();
  FUN_1800819d0(local_160,local_160,*(undefined8 *)(local_160[0] + 8));
  thunk_FUN_1803d64e0(local_160[0],0x40);
  FUN_1804e4e90(&DAT_1809e8ef0);
  return param_1;
}



/* ===== 1800a04a0 FUN_1800a04a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1800a04a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  size_t sVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 ***pppuVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  char cVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [24];
  undefined8 *local_1c8 [3];
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 ***local_180 [2];
  longlong local_170;
  ulonglong local_168;
  undefined8 ***local_160 [2];
  size_t local_150;
  ulonglong local_148;
  int local_140;
  char local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  int local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80 [32];
  char local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  cVar20 = '\0';
  local_1b0 = &DAT_1809e8ef0;
  local_1c8[0] = param_1;
  iVar6 = FUN_1804e4d70(&DAT_1809e8ef0);
  puVar19 = auStack_1e8;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8f3c == 0x7fffffff) goto LAB_1800a0ace;
  FUN_18009ddb0();
  puVar7 = (undefined8 *)FUN_18009ec70(param_2,param_3);
  uStack_188 = *puVar7;
  FUN_180024b50(local_180,puVar7 + 1);
  FUN_180024b50(local_160,puVar7 + 5);
  local_140 = *(int *)(puVar7 + 9);
  local_13c = *(char *)((longlong)puVar7 + 0x4c);
  if (local_170 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined2 *)((longlong)param_1 + 0x24) = 0;
    *(undefined1 *)((longlong)param_1 + 0x26) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0xf;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0xf;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN_18000f890(local_160);
    FUN_18000f890(local_180);
    puVar18 = auStack_1e8;
    goto LAB_1800a0a9c;
  }
  puVar7 = (undefined8 *)FUN_18009f1e0(param_2,local_180,0);
  if (puVar7 == (undefined8 *)0x0) {
    uStack_130 = 0;
    local_128 = 0;
    local_120 = 0xf;
    local_138 = 0;
    local_118 = 0;
    uStack_108 = 0;
    local_100 = 0;
    local_f8 = 0xf;
    local_110 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_d8 = (undefined8 *)0xf;
    local_f0 = 0;
    local_d0 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8 = 0;
    if (local_13c == '\0') {
      pcVar8 = (char *)FUN_1801c8250();
      sVar9 = strlen(pcVar8);
      FUN_180029840(&local_110,pcVar8,sVar9);
      local_118 = 1;
    }
    else {
      pppuVar14 = local_160;
      if (0xf < local_148) {
        pppuVar14 = local_160[0];
      }
      FUN_180029840(&local_110,pppuVar14,local_150);
      local_118 = local_140;
    }
    local_1c8[0] = (undefined8 *)FUN_180512a60(0);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    iVar6 = thunk_FUN_1805121e4(&local_a8,local_1c8);
    if (iVar6 == 0) {
      local_60[0] = '\0';
      local_60[1] = '\0';
      local_60[2] = '\0';
      local_60[3] = '\0';
      local_60[4] = '\0';
      local_60[5] = '\0';
      local_60[6] = '\0';
      local_60[7] = '\0';
      local_60[8] = '\0';
      local_60[9] = '\0';
      local_60[10] = '\0';
      local_60[0xb] = '\0';
      local_60[0xc] = '\0';
      local_60[0xd] = '\0';
      local_60[0xe] = '\0';
      local_60[0xf] = '\0';
      FUN_180512a44(local_60,0x10,"%Y-%m-%d",&local_a8);
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      local_190 = (undefined8 *)0x0;
      sVar9 = strlen(local_60);
      FUN_1800133a0(&local_1a8,local_60,sVar9);
      uVar12 = local_198;
      puVar7 = local_190;
    }
    else {
      uStack_1a0 = 0;
      local_1a8 = 0;
      uVar12 = 0;
      puVar7 = (undefined8 *)0xf;
    }
    if (local_d8 < &DAT_00000010) {
LAB_1800a0762:
      local_f0 = local_1a8;
      uStack_e8 = uStack_1a0;
      local_e0 = uVar12;
      local_d8 = puVar7;
      pcVar8 = (char *)FUN_1801c8250();
      sVar9 = strlen(pcVar8);
      FUN_180029840(&local_c8,pcVar8,sVar9);
      local_d0 = 1;
      pppuVar14 = local_180;
      if (0xf < local_168) {
        pppuVar14 = local_180[0];
      }
      uVar22 = FUN_180029840(&local_138,pppuVar14,local_170);
      plVar10 = (longlong *)FUN_1800a0d80(uVar22,local_60,param_2,&local_138);
      puVar7 = (undefined8 *)(*plVar10 + 0x40);
      DAT_180ca1c3e = 1;
      FUN_18000f890(&local_c8);
      FUN_18000f890(&local_f0);
      FUN_18000f890(&local_110);
      FUN_18000f890(&local_138);
      goto LAB_1800a0805;
    }
    puVar16 = (undefined8 *)((longlong)local_d8 + 1);
    lVar11 = local_f0;
    if (puVar16 < (undefined8 *)0x1000) {
LAB_1800a075d:
      thunk_FUN_1803d64e0(lVar11,puVar16);
      goto LAB_1800a0762;
    }
    lVar11 = *(longlong *)(local_f0 + -8);
    if ((local_f0 - lVar11) - 8U < 0x20) {
      puVar16 = local_d8 + 5;
      goto LAB_1800a075d;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar18 = auStack_1e0;
LAB_1800a0862:
    if (param_4 != 0) {
      *(undefined8 *)(puVar18 + 0x40) = 0;
      *(undefined8 *)(puVar18 + 0x48) = 0;
      *(undefined8 *)(puVar18 + 0x50) = 0;
      *(undefined8 *)(puVar18 + 0x58) = 0;
      *(undefined8 *)(puVar18 + -8) = 0x1800a088a;
      pcVar8 = (char *)FUN_18000fb70(0x20);
      uVar4 = s_C__neverlose_lua_owners_txt_1806e6f28._4_4_;
      *(char **)(puVar18 + 0x40) = pcVar8;
      *(undefined8 *)(puVar18 + 0x50) = 0x1a;
      *(undefined8 *)(puVar18 + 0x58) = 0x1f;
      uVar22 = CONCAT22(s_C__neverlose_lua_owners_txt_1806e6f28._10_2_,
                        s_C__neverlose_lua_owners_txt_1806e6f28._8_2_);
      uVar3 = CONCAT22(s_C__neverlose_lua_owners_txt_1806e6f28._14_2_,
                       s_C__neverlose_lua_owners_txt_1806e6f28._12_2_);
      *(undefined4 *)pcVar8 = s_C__neverlose_lua_owners_txt_1806e6f28._0_4_;
      *(undefined4 *)(pcVar8 + 4) = uVar4;
      *(undefined4 *)(pcVar8 + 8) = uVar22;
      *(undefined4 *)(pcVar8 + 0xc) = uVar3;
      uVar4 = s_C__neverlose_lua_owners_txt_1806e6f28._22_4_;
      uVar3 = s_C__neverlose_lua_owners_txt_1806e6f28._18_4_;
      uVar22 = CONCAT22(s_C__neverlose_lua_owners_txt_1806e6f28._16_2_,
                        s_C__neverlose_lua_owners_txt_1806e6f28._14_2_);
      *(uint *)(pcVar8 + 10) =
           CONCAT22(s_C__neverlose_lua_owners_txt_1806e6f28._12_2_,
                    s_C__neverlose_lua_owners_txt_1806e6f28._10_2_);
      *(undefined4 *)(pcVar8 + 0xe) = uVar22;
      *(undefined4 *)(pcVar8 + 0x12) = uVar3;
      *(undefined4 *)(pcVar8 + 0x16) = uVar4;
      pcVar8[0x1a] = '\0';
      *(undefined8 *)(puVar18 + -8) = 0x1800a08cf;
      uVar12 = FUN_180066ab0(local_80,"cannot write the owner into the file, kept in ",
                             puVar18 + 0x40);
      *(undefined8 *)(puVar18 + -8) = 0x1800a08da;
      FUN_18002ba60(param_4,uVar12);
      *(undefined8 *)(puVar18 + -8) = 0x1800a08e3;
      FUN_18000f890(local_80);
      uVar1 = *(ulonglong *)(puVar18 + 0x58);
      if (0xf < uVar1) {
        uVar17 = uVar1 + 1;
        lVar11 = *(longlong *)(puVar18 + 0x40);
        lVar15 = lVar11;
        if (0xfff < uVar17) {
          lVar15 = *(longlong *)(lVar11 + -8);
          if (0x1f < (lVar11 - lVar15) - 8U) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar18 = puVar18 + 8;
            goto LAB_1800a092d;
          }
          uVar17 = uVar1 + 0x28;
        }
        *(undefined8 *)(puVar18 + -8) = 0x1800a0921;
        thunk_FUN_1803d64e0(lVar15,uVar17);
      }
    }
  }
  else {
LAB_1800a0805:
    cVar20 = local_13c;
    puVar18 = auStack_1e8;
    if (local_13c == '\0') {
      cVar5 = FUN_18009f850(param_3,puVar7);
      puVar18 = auStack_1e8;
      if (cVar5 == '\0') goto LAB_1800a0862;
      cVar20 = '\x01';
      lVar11 = FUN_18009ec70(param_2,param_3);
      puVar16 = (undefined8 *)(lVar11 + 8);
      if (puVar7 != puVar16) {
        if (0xf < *(ulonglong *)(lVar11 + 0x20)) {
          puVar16 = (undefined8 *)*puVar16;
        }
        FUN_180029840(puVar7,puVar16,*(undefined8 *)(lVar11 + 0x18));
      }
      puVar18 = auStack_1e8;
      DAT_180ca1c3e = 1;
    }
    else {
LAB_1800a092d:
      if ((local_140 == 0) || (*(int *)(puVar7 + 4) == 0)) {
        puVar16 = puVar7 + 5;
        if (0xf < (ulonglong)puVar7[8]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        pppuVar14 = local_160;
        if (0xf < local_148) {
          pppuVar14 = local_160[0];
        }
        if (local_150 == puVar7[7]) {
          if (local_150 == 0) {
            bVar21 = true;
          }
          else {
            *(undefined8 *)(puVar18 + -8) = 0x1800a0977;
            iVar6 = memcmp(pppuVar14,puVar16,local_150);
            bVar21 = iVar6 == 0;
          }
        }
        else {
          bVar21 = false;
        }
      }
      else {
        bVar21 = local_140 == *(int *)(puVar7 + 4);
      }
      if ((!bVar21) && (param_4 != 0)) {
        *(undefined8 *)(puVar18 + -8) = 0x1800a09a1;
        uVar12 = FUN_180066a20(&local_a8,"the file says @author ",local_160);
        *(undefined8 *)(puVar18 + -8) = 0x1800a09b7;
        puVar13 = (undefined4 *)FUN_1800134a0(uVar12,", the owner stays ",0x12);
        *(undefined8 *)(puVar18 + 0x40) = 0;
        *(undefined8 *)(puVar18 + 0x48) = 0;
        *(undefined8 *)(puVar18 + 0x50) = 0;
        *(undefined8 *)(puVar18 + 0x58) = 0;
        uVar22 = puVar13[1];
        uVar3 = puVar13[2];
        uVar4 = puVar13[3];
        *(undefined4 *)(puVar18 + 0x40) = *puVar13;
        *(undefined4 *)(puVar18 + 0x44) = uVar22;
        *(undefined4 *)(puVar18 + 0x48) = uVar3;
        *(undefined4 *)(puVar18 + 0x4c) = uVar4;
        uVar22 = puVar13[5];
        uVar3 = puVar13[6];
        uVar4 = puVar13[7];
        *(undefined4 *)(puVar18 + 0x50) = puVar13[4];
        *(undefined4 *)(puVar18 + 0x54) = uVar22;
        *(undefined4 *)(puVar18 + 0x58) = uVar3;
        *(undefined4 *)(puVar18 + 0x5c) = uVar4;
        *(undefined8 *)(puVar13 + 4) = 0;
        *(undefined8 *)(puVar13 + 6) = 0xf;
        *(undefined1 *)puVar13 = 0;
        *(undefined8 *)(puVar18 + -8) = 0x1800a09fe;
        uVar12 = FUN_1800667a0(local_80,puVar18 + 0x40,puVar7 + 5);
        *(undefined8 *)(puVar18 + -8) = 0x1800a0a09;
        FUN_18002ba60(param_4,uVar12);
        *(undefined8 *)(puVar18 + -8) = 0x1800a0a12;
        FUN_18000f890(local_80);
        uVar1 = *(ulonglong *)(puVar18 + 0x58);
        if (0xf < uVar1) {
          uVar17 = uVar1 + 1;
          lVar11 = *(longlong *)(puVar18 + 0x40);
          lVar15 = lVar11;
          if (0xfff < uVar17) {
            lVar15 = *(longlong *)(lVar11 + -8);
            if (0x1f < (lVar11 - lVar15) - 8U) {
              pcVar2 = (code *)swi(0x29);
              DAT_1809e8f3c = (*pcVar2)(5);
              puVar19 = puVar18 + 8;
LAB_1800a0ace:
              DAT_1809e8f3c = DAT_1809e8f3c + -1;
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar19 + -8) = &UNK_1800a0ae0;
              FUN_1804e4a90(6);
            }
            uVar17 = uVar1 + 0x28;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1800a0a50;
          thunk_FUN_1803d64e0(lVar15,uVar17);
        }
        *(undefined8 *)(puVar18 + 0x50) = 0;
        *(undefined8 *)(puVar18 + 0x58) = 0xf;
        puVar18[0x40] = 0;
        *(undefined8 *)(puVar18 + -8) = 0x1800a0a6c;
        FUN_18000f890(&local_a8);
      }
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800a0a71;
  FUN_18009e4c0();
  *(undefined8 *)(puVar18 + -8) = 0x1800a0a80;
  FUN_18009f5f0(param_1,puVar7,cVar20);
  *(undefined8 *)(puVar18 + -8) = 0x1800a0a8a;
  FUN_18000f890(local_160);
  *(undefined8 *)(puVar18 + -8) = 0x1800a0a94;
  FUN_18000f890(puVar18 + 0x68);
LAB_1800a0a9c:
  *(undefined8 *)(puVar18 + -8) = 0x1800a0aa1;
  FUN_1804e4e90(&DAT_1809e8ef0);
  *(undefined8 *)(puVar18 + -8) = 0x1800a0ab3;
  return param_1;
}



/* ===== 1800a0af0 FUN_1800a0af0 ===== */

longlong * FUN_1800a0af0(longlong *param_1,char *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  char *pcVar13;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  uVar11 = 0;
  sVar7 = strlen(param_2);
  lVar12 = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if ((lVar12 < 1) || (lVar12 <= (longlong)sVar7)) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar12 - sVar7;
  }
  FUN_180069000(&local_78,param_1);
  if (local_70 == '\0') {
    uVar11 = 4;
  }
  else {
    if ((*(uint *)((longlong)*(int *)(*param_1 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; 0 < lVar12; lVar12 = lVar12 + -1) {
        plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        uVar5 = (uint)bVar1;
        if ((*(longlong *)plVar4[8] == 0) || (piVar2 = (int *)plVar4[0xb], *piVar2 < 1)) {
          uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,bVar1);
        }
        else {
          *piVar2 = *piVar2 + -1;
          pbVar3 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar3 + 1;
          *pbVar3 = bVar1;
        }
        if (uVar5 == 0xffffffff) {
          uVar11 = 4;
          goto LAB_1800a0c91;
        }
      }
    }
    plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    sVar8 = (**(code **)(*plVar4 + 0x48))(plVar4,param_2,sVar7);
    if (sVar8 == sVar7) {
      for (; 0 < lVar12; lVar12 = lVar12 + -1) {
        plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        uVar5 = (uint)bVar1;
        if ((*(longlong *)plVar4[8] == 0) || (piVar2 = (int *)plVar4[0xb], *piVar2 < 1)) {
          uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,bVar1);
        }
        else {
          *piVar2 = *piVar2 + -1;
          pbVar3 = *(byte **)plVar4[8];
          *(byte **)plVar4[8] = pbVar3 + 1;
          *pbVar3 = bVar1;
        }
        if (uVar5 == 0xffffffff) {
          uVar11 = 4;
          break;
        }
      }
    }
    else {
      uVar11 = 4;
    }
LAB_1800a0c91:
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  lVar12 = (longlong)*(int *)(*param_1 + 4);
  uVar5 = *(uint *)(lVar12 + 0x10 + (longlong)param_1);
  uVar10 = 4;
  if (*(longlong *)(lVar12 + 0x48 + (longlong)param_1) != 0) {
    uVar10 = 0;
  }
  *(uint *)(lVar12 + 0x10 + (longlong)param_1) = uVar10 | uVar11 | uVar5 & 0x17;
  uVar11 = (uVar10 | uVar11 | uVar5) & *(uint *)(lVar12 + 0x14 + (longlong)param_1);
  if ((uVar11 & 0x17) != 0) {
    if ((uVar11 & 4) == 0) {
      pcVar13 = "ios_base::failbit set";
      if ((uVar11 & 2) == 0) {
        pcVar13 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar13 = "ios_base::badbit set";
    }
    uVar9 = FUN_18004d7f0(local_68,1);
    FUN_18004e280(local_58,pcVar13,uVar9);
                    /* WARNING: Subroutine does not return */
    FUN_1804ef5f0(local_58,&DAT_180915ec0);
  }
  iVar6 = thunk_FUN_1804ef6a0();
  if (iVar6 == 0) {
    FUN_18006bf40(local_78);
  }
  plVar4 = *(longlong **)((longlong)*(int *)(*local_78 + 4) + 0x48 + (longlong)local_78);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  return param_1;
}



/* ===== 1800a0d80 FUN_1800a0d80 ===== */

undefined8 *
FUN_1800a0d80(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *local_68;
  undefined8 *local_60;
  
  puVar1 = DAT_180ca0d68;
  puVar7 = (undefined8 *)DAT_180ca0d68[1];
  puVar4 = puVar7;
  puVar5 = DAT_180ca0d68;
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    do {
      puVar7 = puVar4;
      cVar2 = FUN_180023470(puVar7 + 4,param_3);
      if (-1 < cVar2) {
        puVar4 = (undefined8 *)*puVar7;
        puVar5 = puVar7;
      }
      else {
        puVar4 = (undefined8 *)puVar7[2];
      }
      uVar6 = (uint)(-1 < cVar2);
    } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
  }
  else {
    uVar6 = 0;
  }
  if ((*(char *)((longlong)puVar5 + 0x19) == '\0') &&
     (cVar2 = FUN_180023470(param_3,puVar5 + 4), -1 < cVar2)) {
    uVar3 = 0;
  }
  else {
    if (DAT_180ca0d70 == 0x13b13b13b13b13b) {
                    /* WARNING: Subroutine does not return */
      FUN_18006dab0();
    }
    local_68 = &DAT_180ca0d68;
    local_60 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)FUN_1804ecaa0(0xd0);
    local_60 = puVar4;
    FUN_180024b50(puVar4 + 4,param_3);
    FUN_18009f510(puVar4 + 8,param_4);
    *puVar4 = puVar1;
    puVar4[1] = puVar1;
    puVar4[2] = puVar1;
    *(undefined2 *)(puVar4 + 3) = 0;
    local_60 = (undefined8 *)CONCAT44(local_60._4_4_,uVar6);
    local_68 = puVar7;
    puVar5 = (undefined8 *)FUN_1800774d0(&DAT_180ca0d68,&local_68,puVar4);
    uVar3 = 1;
  }
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}



/* ===== 1800a0eb0 FUN_1800a0eb0 ===== */

void FUN_1800a0eb0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  lVar2 = FUN_1800699a0();
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    uVar1 = 4;
    if (*(longlong *)(lVar2 + 0x48 + (longlong)param_1) != 0) {
      uVar1 = 0;
    }
    uVar1 = uVar1 | *(uint *)(lVar2 + 0x10 + (longlong)param_1) & 0x15 | 2;
    *(uint *)(lVar2 + 0x10 + (longlong)param_1) = uVar1;
    uVar1 = uVar1 & *(uint *)(lVar2 + 0x14 + (longlong)param_1);
    if (uVar1 != 0) {
      if ((uVar1 & 4) == 0) {
        pcVar4 = "ios_base::failbit set";
        if ((uVar1 & 2) == 0) {
          pcVar4 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar4 = "ios_base::badbit set";
      }
      uVar3 = FUN_18004d7f0(local_48,1);
      FUN_18004e280(local_38,pcVar4,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_1804ef5f0(local_38,&DAT_180915ec0);
    }
  }
  return;
}



/* ===== 1800a0f50 FUN_1800a0f50 ===== */

longlong * FUN_1800a0f50(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong lVar11;
  longlong *local_res20;
  undefined4 uVar12;
  undefined1 local_104 [12];
  undefined1 local_f8;
  undefined4 local_f7;
  undefined2 local_f3;
  undefined1 local_f1;
  longlong *local_f0;
  undefined1 local_e8;
  undefined4 uStack_e7;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  char local_e0;
  char local_d8 [16];
  undefined1 local_c8 [40];
  undefined1 local_a0 [104];
  
  uVar8 = 0;
  FUN_180069000(&local_e8,param_1);
  if (local_e0 != '\0') {
    plVar2 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x40 + (longlong)param_1) + 8);
    local_f0 = plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    FUN_1804ea500(local_104,0);
    plVar9 = DAT_1811142f8;
    if (DAT_181116308 == 0) {
      FUN_1804ea500(&local_res20);
      if (DAT_181116308 == 0) {
        DAT_180c9ede0 = DAT_180c9ede0 + 1;
        DAT_181116308 = (longlong)DAT_180c9ede0;
      }
      FUN_1804ea5a0(&local_res20);
    }
    plVar4 = (longlong *)FUN_18004dd50(&local_f8,DAT_181116308);
    if (plVar4 == (longlong *)0x0) {
      if (plVar9 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_1804ecaa0(0x10);
        if (plVar2 == (longlong *)0x0) {
          plVar9 = (longlong *)&DAT_18058b643;
        }
        else {
          plVar9 = (longlong *)plVar2[5];
          if (plVar9 == (longlong *)0x0) {
            plVar9 = plVar2 + 6;
          }
        }
        local_res20 = plVar4;
        FUN_18004dbc0(local_a0,plVar9);
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)
                  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
                  vftable;
        FUN_18004dc40(local_a0);
        local_res20 = plVar4;
        FUN_1804ea710(plVar4);
        (**(code **)(*plVar4 + 8))(plVar4);
        DAT_1811142f8 = plVar4;
      }
      else {
        plVar4 = plVar9;
      }
    }
    FUN_1804ea5a0(local_104);
    uVar12 = 0;
    puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    lVar11 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    local_f8 = 0;
    local_f7 = uStack_e7;
    local_f3 = uStack_e3;
    local_f1 = uStack_e1;
    local_f0 = *(longlong **)(lVar11 + 0x48);
    (**(code **)(*plVar4 + 0x48))
              (plVar4,local_d8,&local_f8,lVar11,*(undefined1 *)(lVar11 + 0x58),param_2,uVar12);
    uVar8 = 0;
    if (local_d8[0] != '\0') {
      uVar8 = 4;
    }
  }
  lVar11 = (longlong)*(int *)(*param_1 + 4);
  uVar1 = *(uint *)(lVar11 + 0x10 + (longlong)param_1);
  uVar7 = 4;
  if (*(longlong *)(lVar11 + 0x48 + (longlong)param_1) != 0) {
    uVar7 = 0;
  }
  *(uint *)(lVar11 + 0x10 + (longlong)param_1) = uVar7 | uVar8 | uVar1 & 0x17;
  uVar8 = (uVar7 | uVar8 | uVar1) & *(uint *)(lVar11 + 0x14 + (longlong)param_1);
  if ((uVar8 & 0x17) == 0) {
    iVar3 = thunk_FUN_1804ef6a0();
    if (iVar3 == 0) {
      FUN_18006bf40(CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT41(uStack_e7,local_e8))));
    }
    plVar2 = (longlong *)CONCAT17(uStack_e1,CONCAT25(uStack_e3,CONCAT41(uStack_e7,local_e8)));
    plVar2 = *(longlong **)((longlong)*(int *)(*plVar2 + 4) + 0x48 + (longlong)plVar2);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    return param_1;
  }
  if ((uVar8 & 4) == 0) {
    pcVar10 = "ios_base::failbit set";
    if ((uVar8 & 2) == 0) {
      pcVar10 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar10 = "ios_base::badbit set";
  }
  uVar6 = FUN_18004d7f0(local_d8,1);
  FUN_18004e280(local_c8,pcVar10,uVar6);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_c8,&DAT_180915ec0);
}



/* ===== 1800a1250 FUN_1800a1250 ===== */

longlong FUN_1800a1250(longlong *param_1,undefined8 param_2)

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
  
  lVar4 = param_1[1];
  if (lVar4 != param_1[2]) {
    FUN_18009c0b0(lVar4);
    lVar4 = param_1[1];
    param_1[1] = lVar4 + 0x70;
    return lVar4;
  }
  uVar5 = 0x249249249249249;
  lVar8 = (lVar4 - *param_1) / 0x70;
  if (lVar8 == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar7 = (param_1[2] - *param_1 >> 4) * 0x6db6db6db6db6db7;
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
  lVar2 = FUN_18000fb70(uVar5 * 0x70);
  lVar6 = lVar8 * 0x70 + lVar2;
  FUN_18009c0b0(lVar6,param_2);
  lVar8 = param_1[1];
  lVar3 = *param_1;
  lVar9 = lVar2;
  if (lVar4 == lVar8) {
    if (lVar3 != lVar8) {
      do {
        FUN_18009c0b0(lVar2);
        lVar2 = lVar2 + 0x70;
        lVar3 = lVar3 + 0x70;
      } while (lVar3 != lVar8);
    }
  }
  else {
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x70) {
      FUN_18009c0b0(lVar2);
      lVar2 = lVar2 + 0x70;
    }
    lVar8 = param_1[1];
    lVar3 = lVar6;
    if (lVar4 != lVar8) {
      do {
        lVar3 = lVar3 + 0x70;
        FUN_18009c0b0(lVar3,lVar4);
        lVar4 = lVar4 + 0x70;
      } while (lVar4 != lVar8);
    }
  }
  FUN_1800a32f0(param_1,lVar9,uVar1,uVar5);
  return lVar6;
}



/* ===== 1800a13d0 FUN_1800a13d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1800a13d0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined1 param_5,void *param_6)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  char *local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_b8;
  iVar1 = sprintf_s(local_68,0x40,"%p",param_6);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  if (iVar1 < 0) {
    *param_2 = local_78;
    param_2[1] = uStack_74;
    param_2[2] = uStack_70;
    param_2[3] = uStack_6c;
  }
  else {
    local_88 = (longlong)iVar1;
    local_90 = local_68;
    local_98 = param_5;
    FUN_1800a2c70(param_1,param_2,&local_78,param_4);
  }
  return param_2;
}



/* ===== 1800a1490 FUN_1800a1490 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1800a1490(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char ****ppppcVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char ****local_b0;
  longlong local_a8;
  undefined1 local_a0;
  int local_98 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char ****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  char local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (char ****)0x0;
  uVar9 = *(uint *)(param_4 + 0x18) & 0x3000;
  if (uVar9 == 0x3000) {
    iVar6 = 0xd;
    uVar10 = 0xffffffffffffffff;
  }
  else {
    uVar10 = *(ulonglong *)(param_4 + 0x20);
    if ((longlong)uVar10 < 1) {
      if (uVar10 == 0) {
        if (uVar9 == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = 6;
      }
    }
    else {
      iVar6 = (int)uVar10;
    }
  }
  lVar11 = (longlong)iVar6;
  uVar13 = (uint)((ulonglong)param_6 >> 0x20);
  bVar12 = (uVar13 >> 0x14 & 0x7ff) != 0x7ff;
  if (((uVar9 == 0x2000) && (bVar12)) &&
     (uVar9 = (uint)param_6 & _DAT_1808adea0, uVar13 = uVar13 & _UNK_1808adea4,
     _DAT_1808aca10 <= (double)CONCAT44(uVar13,uVar9) &&
     (double)CONCAT44(uVar13,uVar9) != _DAT_1808aca10)) {
    local_98[0] = 0;
    FUN_180515a40((uint)param_6,local_98);
    iVar6 = -local_98[0];
    if (-local_98[0] < 0) {
      iVar6 = local_98[0];
    }
    lVar11 = lVar11 + (iVar6 * 0x7597) / 100000;
  }
  uVar1 = lVar11 + 0x32;
  if (local_68 < uVar1) {
    FUN_180028a50(&local_78,uVar1 - local_68,0);
  }
  else {
    ppppcVar7 = (char ****)&local_78;
    if (0xf < local_60) {
      ppppcVar7 = local_78;
    }
    local_68 = uVar1;
    *(char *)((longlong)ppppcVar7 + uVar1) = '\0';
  }
  uVar9 = *(uint *)(param_4 + 0x18);
  if (!bVar12) {
    uVar9 = *(uint *)(param_4 + 0x18) & 0xffffffef;
  }
  FUN_1800a3200(param_1,local_58,0x4c,uVar9);
  ppppcVar7 = (char ****)&local_78;
  if (0xf < local_60) {
    ppppcVar7 = local_78;
  }
  local_b8 = param_6;
  iVar6 = sprintf_s((char *)ppppcVar7,local_68,local_58,uVar10 & 0xffffffff);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  if (iVar6 < 0) {
    *param_2 = *param_3;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
  }
  else {
    local_b0 = (char ****)&local_78;
    if (0xf < local_60) {
      local_b0 = local_78;
    }
    local_a8 = (longlong)iVar6;
    local_b8 = CONCAT71(local_b8._1_7_,param_5);
    local_a0 = bVar12;
    local_88 = *param_3;
    uStack_84 = uVar3;
    uStack_80 = uVar4;
    uStack_7c = uVar5;
    FUN_1800a2350(param_1,param_2,&local_88,param_4);
  }
  if (0xf < local_60) {
    uVar10 = local_60 + 1;
    ppppcVar7 = local_78;
    if (0xfff < uVar10) {
      ppppcVar7 = (char ****)local_78[-1];
      if ((char *)0x1f < (char *)((longlong)local_78 + (-8 - (longlong)ppppcVar7))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        puVar8 = (undefined4 *)(*pcVar2)();
        return puVar8;
      }
      uVar10 = local_60 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar7,uVar10);
  }
  return param_2;
}



/* ===== 1800a16f0 FUN_1800a16f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1800a16f0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  char ****ppppcVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char ****local_b0;
  longlong local_a8;
  undefined1 local_a0;
  int local_98 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char ****local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  char local_58;
  undefined1 local_57 [2];
  undefined2 local_55;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_78 = (char ****)0x0;
  uVar10 = *(uint *)(param_4 + 0x18) & 0x3000;
  if (uVar10 == 0x3000) {
    iVar7 = 0xd;
    uVar12 = 0xffffffffffffffff;
  }
  else {
    uVar12 = *(ulonglong *)(param_4 + 0x20);
    if ((longlong)uVar12 < 1) {
      if (uVar12 == 0) {
        if (uVar10 == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = 0;
        }
      }
      else {
        iVar7 = 6;
      }
    }
    else {
      iVar7 = (int)uVar12;
    }
  }
  lVar13 = (longlong)iVar7;
  uVar16 = (uint)((ulonglong)param_6 >> 0x20);
  bVar15 = (uVar16 >> 0x14 & 0x7ff) != 0x7ff;
  if (((uVar10 == 0x2000) && (bVar15)) &&
     (uVar10 = (uint)param_6 & _DAT_1808adea0, uVar16 = uVar16 & _UNK_1808adea4,
     _DAT_1808aca10 <= (double)CONCAT44(uVar16,uVar10) &&
     (double)CONCAT44(uVar16,uVar10) != _DAT_1808aca10)) {
    local_98[0] = 0;
    FUN_180515a40((uint)param_6,local_98);
    iVar7 = -local_98[0];
    if (-local_98[0] < 0) {
      iVar7 = local_98[0];
    }
    lVar13 = lVar13 + (iVar7 * 0x7597) / 100000;
  }
  uVar1 = lVar13 + 0x32;
  if (local_68 < uVar1) {
    FUN_180028a50(&local_78,uVar1 - local_68,0);
  }
  else {
    ppppcVar8 = (char ****)&local_78;
    if (0xf < local_60) {
      ppppcVar8 = local_78;
    }
    local_68 = uVar1;
    *(char *)((longlong)ppppcVar8 + uVar1) = '\0';
  }
  uVar10 = *(uint *)(param_4 + 0x18);
  if (!bVar15) {
    uVar10 = *(uint *)(param_4 + 0x18) & 0xffffffef;
  }
  local_58 = '%';
  puVar11 = (undefined2 *)local_57;
  if ((uVar10 & 0x20) != 0) {
    local_57[0] = 0x2b;
    puVar11 = (undefined2 *)(local_57 + 1);
  }
  if ((uVar10 & 0x10) != 0) {
    *(undefined1 *)puVar11 = 0x23;
    puVar11 = (undefined2 *)(local_57 + 1);
    if ((uVar10 & 0x20) != 0) {
      puVar11 = &local_55;
    }
  }
  *puVar11 = 0x2a2e;
  uVar16 = uVar10 & 0x3000;
  if ((uVar10 & 4) == 0) {
    if (uVar16 == 0x2000) {
      uVar6 = 0x66;
      goto LAB_1800a18e9;
    }
    if (uVar16 == 0x3000) {
      uVar6 = 0x61;
      goto LAB_1800a18e9;
    }
    uVar6 = 0x67;
    uVar14 = 0x65;
  }
  else {
    if (uVar16 == 0x2000) {
      uVar6 = 0x46;
      goto LAB_1800a18e9;
    }
    if (uVar16 == 0x3000) {
      uVar6 = 0x41;
      goto LAB_1800a18e9;
    }
    uVar6 = 0x47;
    uVar14 = 0x45;
  }
  if (uVar16 == 0x1000) {
    uVar6 = uVar14;
  }
LAB_1800a18e9:
  *(undefined1 *)(puVar11 + 1) = uVar6;
  *(undefined1 *)((longlong)puVar11 + 3) = 0;
  ppppcVar8 = (char ****)&local_78;
  if (0xf < local_60) {
    ppppcVar8 = local_78;
  }
  local_b8 = param_6;
  iVar7 = sprintf_s((char *)ppppcVar8,local_68,&local_58,uVar12 & 0xffffffff);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  if (iVar7 < 0) {
    *param_2 = *param_3;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
  }
  else {
    local_b0 = (char ****)&local_78;
    if (0xf < local_60) {
      local_b0 = local_78;
    }
    local_a8 = (longlong)iVar7;
    local_b8 = CONCAT71(local_b8._1_7_,param_5);
    local_a0 = bVar15;
    local_88 = *param_3;
    uStack_84 = uVar3;
    uStack_80 = uVar4;
    uStack_7c = uVar5;
    FUN_1800a2350(param_1,param_2,&local_88,param_4);
  }
  if (0xf < local_60) {
    uVar12 = local_60 + 1;
    ppppcVar8 = local_78;
    if (0xfff < uVar12) {
      ppppcVar8 = (char ****)local_78[-1];
      if ((char *)0x1f < (char *)((longlong)local_78 + (-8 - (longlong)ppppcVar8))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        puVar9 = (undefined4 *)(*pcVar2)();
        return puVar9;
      }
      uVar12 = local_60 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar8,uVar12);
  }
  return param_2;
}



/* ===== 1800a19e0 FUN_1800a19e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1800a19e0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78;
  undefined1 local_77 [2];
  undefined2 local_75;
  undefined1 local_73 [11];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_4 + 0x18);
  local_78 = '%';
  puVar4 = (undefined2 *)local_77;
  if ((uVar1 & 0x20) != 0) {
    local_77[0] = 0x2b;
    puVar4 = (undefined2 *)(local_77 + 1);
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar4 = 0x23;
    puVar4 = (undefined2 *)(local_77 + 1);
    if ((uVar1 & 0x20) != 0) {
      puVar4 = &local_75;
    }
  }
  *puVar4 = 0x3649;
  *(undefined1 *)(puVar4 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 0x75;
  }
  *(byte *)((longlong)puVar4 + 3) = bVar2;
  *(undefined1 *)(puVar4 + 2) = 0;
  iVar3 = sprintf_s(local_68,0x40,&local_78,param_6);
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  if (iVar3 < 0) {
    *param_2 = local_88;
    param_2[1] = uStack_84;
    param_2[2] = uStack_80;
    param_2[3] = uStack_7c;
  }
  else {
    local_98 = (longlong)iVar3;
    local_a0 = local_68;
    local_a8 = param_5;
    FUN_1800a2c70(param_1,param_2,&local_88,param_4);
  }
  return param_2;
}



/* ===== 1800a1b10 FUN_1800a1b10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1800a1b10(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78;
  undefined1 local_77 [2];
  undefined2 local_75;
  undefined1 local_73 [11];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_4 + 0x18);
  local_78 = '%';
  puVar4 = (undefined2 *)local_77;
  if ((uVar1 & 0x20) != 0) {
    local_77[0] = 0x2b;
    puVar4 = (undefined2 *)(local_77 + 1);
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar4 = 0x23;
    puVar4 = (undefined2 *)(local_77 + 1);
    if ((uVar1 & 0x20) != 0) {
      puVar4 = &local_75;
    }
  }
  *puVar4 = 0x3649;
  *(undefined1 *)(puVar4 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 100;
  }
  *(byte *)((longlong)puVar4 + 3) = bVar2;
  *(undefined1 *)(puVar4 + 2) = 0;
  iVar3 = sprintf_s(local_68,0x40,&local_78,param_6);
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  if (iVar3 < 0) {
    *param_2 = local_88;
    param_2[1] = uStack_84;
    param_2[2] = uStack_80;
    param_2[3] = uStack_7c;
  }
  else {
    local_98 = (longlong)iVar3;
    local_a0 = local_68;
    local_a8 = param_5;
    FUN_1800a2c70(param_1,param_2,&local_88,param_4);
  }
  return param_2;
}



/* ===== 1800a1c40 FUN_1800a1c40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1800a1c40(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78 [16];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_4 + 0x18);
  local_78[0] = '%';
  pcVar4 = local_78 + 1;
  if ((uVar1 & 0x20) != 0) {
    local_78[1] = 0x2b;
    pcVar4 = local_78 + 2;
  }
  if ((uVar1 & 8) != 0) {
    *pcVar4 = '#';
    pcVar4 = local_78 + 2;
    if ((uVar1 & 0x20) != 0) {
      pcVar4 = local_78 + 3;
    }
  }
  *pcVar4 = 'l';
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 0x75;
  }
  pcVar4[1] = bVar2;
  pcVar4[2] = '\0';
  iVar3 = sprintf_s(local_68,0x40,local_78,(ulonglong)param_6);
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  if (iVar3 < 0) {
    *param_2 = local_88;
    param_2[1] = uStack_84;
    param_2[2] = uStack_80;
    param_2[3] = uStack_7c;
  }
  else {
    local_98 = (longlong)iVar3;
    local_a0 = local_68;
    local_a8 = param_5;
    FUN_1800a2c70(param_1,param_2,&local_88,param_4);
  }
  return param_2;
}



/* ===== 1800a1d60 FUN_1800a1d60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1800a1d60(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined1 param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  char *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char local_78 [16];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_4 + 0x18);
  local_78[0] = '%';
  pcVar4 = local_78 + 1;
  if ((uVar1 & 0x20) != 0) {
    local_78[1] = 0x2b;
    pcVar4 = local_78 + 2;
  }
  if ((uVar1 & 8) != 0) {
    *pcVar4 = '#';
    pcVar4 = local_78 + 2;
    if ((uVar1 & 0x20) != 0) {
      pcVar4 = local_78 + 3;
    }
  }
  *pcVar4 = 'l';
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 100;
  }
  pcVar4[1] = bVar2;
  pcVar4[2] = '\0';
  iVar3 = sprintf_s(local_68,0x40,local_78,(ulonglong)param_6);
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  if (iVar3 < 0) {
    *param_2 = local_88;
    param_2[1] = uStack_84;
    param_2[2] = uStack_80;
    param_2[3] = uStack_7c;
  }
  else {
    local_98 = (longlong)iVar3;
    local_a0 = local_68;
    local_a8 = param_5;
    FUN_1800a2c70(param_1,param_2,&local_88,param_4);
  }
  return param_2;
}



/* ===== 1800a1e80 FUN_1800a1e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_1800a1e80(longlong *param_1,undefined1 *param_2,undefined8 *param_3,longlong param_4,
             byte param_5,byte param_6)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte *pbVar5;
  code *pcVar6;
  byte *****pppppbVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  byte ****ppppbVar12;
  undefined1 uVar13;
  byte *****pppppbVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  byte local_e8;
  uint local_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  undefined1 *local_c0;
  byte *****local_b8;
  longlong *plStack_b0;
  ulonglong local_a8;
  byte ****ppppbStack_a0;
  byte *****local_98;
  longlong *plStack_90;
  ulonglong local_88;
  byte ****ppppbStack_80;
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_d8 = 0;
  local_d0 = param_3;
  local_c8 = param_4;
  local_c0 = param_2;
  if ((*(uint *)(param_4 + 0x18) & 0x4000) == 0) {
    local_b8 = (byte *****)*param_3;
    plStack_b0 = (longlong *)param_3[1];
    local_e0 = (uint)param_6;
    local_e8 = param_5;
    (**(code **)(*param_1 + 0x48))(*(undefined4 *)param_3,param_2,&local_b8);
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
    plStack_b0 = plVar3;
    (**(code **)(*plVar3 + 8))(plVar3);
    local_d8 = 1;
    plVar9 = (longlong *)FUN_1800a2960(&local_b8);
    local_d8 = 0;
    puVar10 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,1);
    }
    plStack_90 = (longlong *)0x0;
    local_88 = 0;
    ppppbStack_80 = (byte ****)0xf;
    local_98 = (byte *****)0x0;
    if (param_6 == 0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_b8);
      local_d8 = 4;
    }
    else {
      (**(code **)(*plVar9 + 0x38))();
      local_d8 = 2;
    }
    ppppbVar12 = ppppbStack_a0;
    uVar17 = local_a8;
    pppppbVar7 = local_b8;
    local_98 = local_b8;
    plStack_90 = plStack_b0;
    local_88 = local_a8;
    ppppbStack_80 = ppppbStack_a0;
    local_a8 = 0;
    ppppbStack_a0 = (byte ****)0xf;
    local_b8 = (byte *****)((ulonglong)local_b8 & 0xffffffffffffff00);
    FUN_18000f890(&local_b8);
    uVar4 = *(ulonglong *)(param_4 + 0x28);
    if (((longlong)uVar4 < 1) || (uVar4 <= uVar17)) {
      lVar15 = 0;
    }
    else {
      lVar15 = uVar4 - uVar17;
    }
    uVar16 = (uint)param_5;
    if ((*(uint *)(param_4 + 0x18) & 0x1c0) != 0x40) {
      uVar13 = *(undefined1 *)param_3;
      plVar3 = (longlong *)param_3[1];
      for (; lVar15 != 0; lVar15 = lVar15 + -1) {
        if (plVar3 == (longlong *)0x0) {
LAB_1800a2037:
          uVar13 = 1;
        }
        else {
          if (*(longlong *)plVar3[8] == 0) {
LAB_1800a2026:
            uVar8 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar16);
          }
          else {
            iVar2 = *(int *)plVar3[0xb];
            if (iVar2 < 1) goto LAB_1800a2026;
            *(int *)plVar3[0xb] = iVar2 + -1;
            pbVar5 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar5 + 1;
            *pbVar5 = param_5;
            uVar8 = uVar16;
          }
          if (uVar8 == 0xffffffff) goto LAB_1800a2037;
        }
      }
      *(undefined1 *)param_3 = uVar13;
      lVar15 = 0;
    }
    pppppbVar14 = (byte *****)&local_98;
    if ((byte ****)0xf < ppppbVar12) {
      pppppbVar14 = pppppbVar7;
    }
    uVar13 = *(undefined1 *)param_3;
    plVar3 = (longlong *)local_d0[1];
    local_b8 = (byte *****)ppppbVar12;
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_1800a20c0:
        uVar13 = 1;
      }
      else {
        bVar1 = *(byte *)pppppbVar14;
        uVar8 = (uint)bVar1;
        if (*(longlong *)plVar3[8] == 0) {
LAB_1800a20af:
          uVar8 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar1);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_1800a20af;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar5 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar5 + 1;
          *pbVar5 = bVar1;
        }
        if (uVar8 == 0xffffffff) goto LAB_1800a20c0;
      }
      pppppbVar14 = (byte *****)((longlong)pppppbVar14 + 1);
    }
    *(undefined8 *)(local_c8 + 0x28) = 0;
    param_2 = local_c0;
    for (; local_c0 = param_2, lVar15 != 0; lVar15 = lVar15 + -1) {
      if (plVar3 == (longlong *)0x0) {
LAB_1800a2124:
        uVar13 = 1;
      }
      else {
        if (*(longlong *)plVar3[8] == 0) {
LAB_1800a2113:
          uVar8 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar16);
        }
        else {
          iVar2 = *(int *)plVar3[0xb];
          if (iVar2 < 1) goto LAB_1800a2113;
          *(int *)plVar3[0xb] = iVar2 + -1;
          pbVar5 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar5 + 1;
          *pbVar5 = param_5;
          uVar8 = uVar16;
        }
        if (uVar8 == 0xffffffff) goto LAB_1800a2124;
      }
      param_2 = local_c0;
    }
    *param_2 = uVar13;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)((longlong)local_d0 + 1);
    *(undefined2 *)(param_2 + 5) = *(undefined2 *)((longlong)local_d0 + 5);
    param_2[7] = *(undefined1 *)((longlong)local_d0 + 7);
    *(longlong **)(param_2 + 8) = plVar3;
    if ((byte ****)0xf < local_b8) {
      ppppbVar12 = (byte ****)((longlong)local_b8 + 1);
      pppppbVar14 = pppppbVar7;
      if ((byte ****)0xfff < ppppbVar12) {
        pppppbVar14 = (byte *****)pppppbVar7[-1];
        if ((byte *)0x1f < (byte *)((longlong)pppppbVar7 + (-8 - (longlong)pppppbVar14))) {
          pcVar6 = (code *)swi(0x29);
          (*pcVar6)(5);
          pcVar6 = (code *)swi(3);
          puVar11 = (undefined1 *)(*pcVar6)();
          return puVar11;
        }
        ppppbVar12 = (byte ****)(local_b8 + 5);
      }
      thunk_FUN_1803d64e0(pppppbVar14,ppppbVar12);
    }
  }
  return param_2;
}



/* ===== 1800a21d0 FUN_1800a21d0 ===== */

undefined8 * FUN_1800a21d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x10);
  }
  return param_1;
}



/* ===== 1800a2200 FUN_1800a2200 ===== */

void FUN_1800a2200(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800a2200(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18000f890(param_3 + 0xd);
    FUN_18000f890(param_3 + 9);
    FUN_18000f890(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0x90);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 1800a22a0 FUN_1800a22a0 ===== */

void FUN_1800a22a0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800a22a0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18000f890(param_3 + 0x16);
    FUN_18000f890(param_3 + 0x11);
    FUN_18000f890(param_3 + 0xd);
    FUN_18000f890(param_3 + 8);
    FUN_18000f890(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0xd0);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 1800a2350 FUN_1800a2350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_1800a2350(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             byte param_5,char *param_6,ulonglong param_7,char param_8)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  char *******pppppppcVar14;
  byte *******pppppppbVar15;
  byte *pbVar16;
  undefined *puVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_e8 [32];
  undefined2 local_c8 [2];
  undefined4 local_c4;
  ulonglong local_c0;
  undefined1 *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  byte *******local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  char *******local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar19 = (uint)param_5;
  local_c4 = 0;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    local_c0 = 0;
    uVar13 = 2;
    lVar12 = 1;
  }
  else {
    local_c0 = 1;
    uVar13 = 3;
    lVar12 = 2;
  }
  if ((*(uint *)(param_4 + 0x18) & 0x3000) == 0x3000) {
    puVar17 = &DAT_1806e7044;
    if (((uVar13 <= param_7) && (param_6[local_c0] == '0')) &&
       ((param_6[lVar12] + 0xa8U & 0xdf) == 0)) {
      local_c0 = uVar13;
    }
  }
  else {
    puVar17 = &DAT_1806e7048;
  }
  local_b8 = param_3;
  local_b0 = param_4;
  local_a0 = param_2;
  local_a8 = FUN_180515100(param_6,puVar17);
  local_c8[0] = 0x2e;
  puVar10 = (undefined8 *)FUN_1805154d0();
  local_c8[0] = CONCAT11(local_c8[0]._1_1_,*(undefined1 *)*puVar10);
  uVar13 = FUN_180515100(param_6,local_c8);
  plVar2 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_90 = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2);
  local_c4 = 1;
  plVar11 = (longlong *)FUN_1800666c0(local_98);
  local_c4 = 0;
  if ((plVar2 != (longlong *)0x0) &&
     (puVar10 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)(puVar10,1);
  }
  FUN_1800969e0(local_88,param_7,0);
  pppppppbVar15 = (byte *******)local_88;
  if (0xf < local_70) {
    pppppppbVar15 = local_88[0];
  }
  (**(code **)(*plVar11 + 0x38))(plVar11,param_6,param_6 + param_7,pppppppbVar15);
  plVar2 = *(longlong **)(*(longlong *)(local_b0 + 0x40) + 8);
  local_90 = plVar2;
  (**(code **)(*plVar2 + 8))(plVar2);
  local_c4 = 2;
  plVar11 = (longlong *)FUN_1800a2960(local_98);
  local_c4 = 0;
  if ((plVar2 != (longlong *)0x0) &&
     (puVar10 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)(puVar10,1);
  }
  (**(code **)(*plVar11 + 0x28))(plVar11,local_68);
  local_c4 = 4;
  uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11);
  if (uVar13 != param_7) {
    bVar8 = (**(code **)(*plVar11 + 0x18))(plVar11);
    pppppppbVar15 = (byte *******)local_88;
    if (0xf < local_70) {
      pppppppbVar15 = local_88[0];
    }
    *(byte *)((longlong)pppppppbVar15 + uVar13) = bVar8;
  }
  uVar6 = local_c0;
  if (param_8 != '\0') {
    if (uVar13 == param_7) {
      uVar13 = local_a8;
    }
    pppppppcVar14 = (char *******)local_68;
    if (0xf < local_50) {
      pppppppcVar14 = local_68[0];
    }
    cVar1 = *(char *)pppppppcVar14;
    while (((cVar1 != '\x7f' && (cVar1 = *(char *)pppppppcVar14, '\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < uVar13 - uVar6))) {
      uVar13 = uVar13 - (longlong)cVar1;
      FUN_1800a3480(local_88,uVar13,1,uVar7);
      if ('\0' < *(char *)((longlong)pppppppcVar14 + 1)) {
        pppppppcVar14 = (char *******)((longlong)pppppppcVar14 + 1);
      }
      cVar1 = *(char *)pppppppcVar14;
    }
  }
  uVar13 = *(ulonglong *)(local_b0 + 0x28);
  if (((longlong)uVar13 < 1) || (uVar13 <= local_78)) {
    lVar12 = 0;
  }
  else {
    lVar12 = uVar13 - local_78;
  }
  uVar9 = *(uint *)(local_b0 + 0x18) & 0x1c0;
  if (uVar9 == 0x40) {
    pppppppbVar15 = (byte *******)local_88;
    if (0xf < local_70) {
      pppppppbVar15 = local_88[0];
    }
    uVar7 = *local_b8;
    plVar2 = *(longlong **)(local_b8 + 8);
    for (uVar13 = local_c0; uVar13 != 0; uVar13 = uVar13 - 1) {
      if (plVar2 == (longlong *)0x0) {
LAB_1800a2819:
        uVar7 = 1;
      }
      else {
        bVar8 = *(byte *)pppppppbVar15;
        uVar9 = (uint)bVar8;
        if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
          uVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar8);
        }
        else {
          *piVar3 = *piVar3 + -1;
          pbVar16 = *(byte **)plVar2[8];
          *(byte **)plVar2[8] = pbVar16 + 1;
          *pbVar16 = bVar8;
        }
        if (uVar9 == 0xffffffff) goto LAB_1800a2819;
      }
      pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + 1);
    }
  }
  else {
    uVar7 = *local_b8;
    plVar2 = *(longlong **)(local_b8 + 8);
    if (uVar9 == 0x100) {
      pppppppbVar15 = (byte *******)local_88;
      uVar13 = local_c0;
      if (0xf < local_70) {
        pppppppbVar15 = local_88[0];
      }
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        if (plVar2 == (longlong *)0x0) {
LAB_1800a273c:
          uVar7 = 1;
        }
        else {
          bVar8 = *(byte *)pppppppbVar15;
          uVar9 = (uint)bVar8;
          if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
            uVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar8);
          }
          else {
            *piVar3 = *piVar3 + -1;
            pbVar16 = *(byte **)plVar2[8];
            *(byte **)plVar2[8] = pbVar16 + 1;
            *pbVar16 = bVar8;
          }
          if (uVar9 == 0xffffffff) goto LAB_1800a273c;
        }
        pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + 1);
      }
      for (; lVar12 != 0; lVar12 = lVar12 + -1) {
        if (plVar2 == (longlong *)0x0) {
LAB_1800a2795:
          uVar7 = 1;
        }
        else {
          if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
            uVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar19);
          }
          else {
            *piVar3 = *piVar3 + -1;
            pbVar16 = *(byte **)plVar2[8];
            *(byte **)plVar2[8] = pbVar16 + 1;
            *pbVar16 = param_5;
            uVar9 = (uint)param_5;
          }
          if (uVar9 == 0xffffffff) goto LAB_1800a2795;
        }
      }
      lVar12 = 0;
    }
    else {
      for (; lVar12 != 0; lVar12 = lVar12 + -1) {
        if (plVar2 == (longlong *)0x0) {
LAB_1800a2655:
          uVar7 = 1;
        }
        else {
          if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
            uVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar19);
          }
          else {
            *piVar3 = *piVar3 + -1;
            pbVar16 = *(byte **)plVar2[8];
            *(byte **)plVar2[8] = pbVar16 + 1;
            *pbVar16 = param_5;
            uVar9 = (uint)param_5;
          }
          if (uVar9 == 0xffffffff) goto LAB_1800a2655;
        }
      }
      lVar12 = 0;
      pppppppbVar15 = (byte *******)local_88;
      uVar13 = local_c0;
      if (0xf < local_70) {
        pppppppbVar15 = local_88[0];
      }
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        if (plVar2 == (longlong *)0x0) {
LAB_1800a26c7:
          uVar7 = 1;
        }
        else {
          bVar8 = *(byte *)pppppppbVar15;
          uVar9 = (uint)bVar8;
          if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
            uVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar8);
          }
          else {
            *piVar3 = *piVar3 + -1;
            pbVar16 = *(byte **)plVar2[8];
            *(byte **)plVar2[8] = pbVar16 + 1;
            *pbVar16 = bVar8;
          }
          if (uVar9 == 0xffffffff) goto LAB_1800a26c7;
        }
        pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + 1);
      }
    }
  }
  pppppppbVar15 = (byte *******)local_88;
  if (0xf < local_70) {
    pppppppbVar15 = local_88[0];
  }
  pbVar16 = (byte *)((longlong)pppppppbVar15 + local_c0);
  plVar2 = *(longlong **)(local_b8 + 8);
  for (lVar18 = local_78 - local_c0; lVar18 != 0; lVar18 = lVar18 + -1) {
    if (plVar2 == (longlong *)0x0) {
LAB_1800a2891:
      uVar7 = 1;
    }
    else {
      bVar8 = *pbVar16;
      uVar9 = (uint)bVar8;
      if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
        uVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar8);
      }
      else {
        *piVar3 = *piVar3 + -1;
        pbVar4 = *(byte **)plVar2[8];
        *(byte **)plVar2[8] = pbVar4 + 1;
        *pbVar4 = bVar8;
      }
      if (uVar9 == 0xffffffff) goto LAB_1800a2891;
    }
    pbVar16 = pbVar16 + 1;
  }
  *(undefined8 *)(local_b0 + 0x28) = 0;
  puVar5 = local_a0;
  do {
    local_a0 = puVar5;
    if (lVar12 == 0) {
      *puVar5 = uVar7;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(local_b8 + 1);
      *(undefined2 *)(puVar5 + 5) = *(undefined2 *)(local_b8 + 5);
      puVar5[7] = local_b8[7];
      *(longlong **)(puVar5 + 8) = plVar2;
      FUN_18000f890(local_68);
      FUN_18000f890(local_88);
      return puVar5;
    }
    if (plVar2 == (longlong *)0x0) {
LAB_1800a28f5:
      uVar7 = 1;
    }
    else {
      if ((*(longlong *)plVar2[8] == 0) || (piVar3 = (int *)plVar2[0xb], *piVar3 < 1)) {
        uVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar19);
      }
      else {
        *piVar3 = *piVar3 + -1;
        pbVar16 = *(byte **)plVar2[8];
        *(byte **)plVar2[8] = pbVar16 + 1;
        *pbVar16 = param_5;
        uVar9 = uVar19;
      }
      if (uVar9 == 0xffffffff) goto LAB_1800a28f5;
    }
    lVar12 = lVar12 + -1;
    puVar5 = local_a0;
  } while( true );
}



/* ===== 1800a2960 FUN_1800a2960 ===== */

longlong * FUN_1800a2960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  longlong *local_res10;
  undefined1 local_res18 [8];
  longlong *local_res20;
  longlong *plVar6;
  undefined1 local_b0 [48];
  undefined1 local_80 [104];
  
  local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
  FUN_1804ea500(local_res18,0);
  plVar6 = DAT_1811142f0;
  if (DAT_181116310 == 0) {
    FUN_1804ea500(&local_res10);
    if (DAT_181116310 == 0) {
      DAT_180c9ede0 = DAT_180c9ede0 + 1;
      DAT_181116310 = (longlong)DAT_180c9ede0;
    }
    FUN_1804ea5a0(&local_res10);
  }
  plVar2 = (longlong *)FUN_18004dd50(param_1,DAT_181116310);
  if (plVar2 == (longlong *)0x0) {
    if (plVar6 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_1804ecaa0(0x30);
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 == 0) {
        puVar3 = &DAT_18058b643;
      }
      else {
        puVar3 = *(undefined1 **)(lVar1 + 0x28);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)(lVar1 + 0x30);
        }
      }
      local_res20 = plVar2;
      FUN_18004dbc0(local_80,puVar3);
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,1);
      *(undefined4 *)(plVar2 + 1) = 0;
      *plVar2 = (longlong)std::numpunct<char>::vftable;
      FUN_1805154d0();
      FUN_1804eb070(local_b0);
      plVar2[2] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      plVar6 = plVar2;
      puVar3 = (undefined1 *)_calloc_base(1);
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4c90();
      }
      *puVar3 = DAT_18058b643;
      plVar2[2] = (longlong)puVar3;
      pcVar4 = (char *)_calloc_base(6,1,param_3,param_4,plVar6);
      if (pcVar4 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4c90();
      }
      *(undefined4 *)pcVar4 = s_false_1806d2b40._0_4_;
      *(undefined2 *)(pcVar4 + 4) = s_false_1806d2b40._4_2_;
      plVar2[4] = (longlong)pcVar4;
      puVar5 = (undefined4 *)_calloc_base(5,1,param_3,param_4,plVar6);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4c90();
      }
      *puVar5 = DAT_1806dfa60;
      *(undefined1 *)(puVar5 + 1) = DAT_1806dfa64;
      plVar2[5] = (longlong)puVar5;
      *(undefined2 *)(plVar2 + 3) = 0x2c2e;
      FUN_18004dc40(local_80);
      local_res10 = plVar2;
      FUN_1804ea710(plVar2);
      (**(code **)(*plVar2 + 8))(plVar2);
      DAT_1811142f0 = plVar2;
    }
    else {
      plVar2 = plVar6;
    }
  }
  FUN_1804ea5a0(local_res18);
  return plVar2;
}



/* ===== 1800a2b60 FUN_1800a2b60 ===== */

undefined8 * FUN_1800a2b60(longlong param_1,undefined8 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)(param_1 + 0x28);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar1 = strlen(_Str);
  FUN_1800133a0(param_2,_Str,sVar1);
  return param_2;
}



/* ===== 1800a2bb0 FUN_1800a2bb0 ===== */

undefined8 * FUN_1800a2bb0(longlong param_1,undefined8 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)(param_1 + 0x20);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar1 = strlen(_Str);
  FUN_1800133a0(param_2,_Str,sVar1);
  return param_2;
}



/* ===== 1800a2c00 FUN_1800a2c00 ===== */

undefined8 * FUN_1800a2c00(longlong param_1,undefined8 *param_2)

{
  char *_Str;
  size_t sVar1;
  
  _Str = *(char **)(param_1 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar1 = strlen(_Str);
  FUN_1800133a0(param_2,_Str,sVar1);
  return param_2;
}



/* ===== 1800a2c50 FUN_1800a2c50 ===== */

undefined1 FUN_1800a2c50(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* ===== 1800a2c60 FUN_1800a2c60 ===== */

undefined1 FUN_1800a2c60(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* ===== 1800a2c70 FUN_1800a2c70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_1800a2c70(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
             byte param_5,char *param_6,ulonglong param_7)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  int *piVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  char ******ppppppcVar14;
  byte ******ppppppbVar15;
  byte *pbVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined1 *local_90;
  byte ******local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  char ******local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uVar19 = (uint)param_5;
  local_b8 = 0;
  if ((param_7 == 0) || ((*param_6 - 0x2bU & 0xfd) != 0)) {
    uVar18 = 0;
    uVar13 = 2;
    lVar12 = 1;
  }
  else {
    uVar13 = 3;
    lVar12 = 2;
    uVar18 = 1;
  }
  if (((((*(uint *)(param_4 + 0x18) & 0xe00) == 0x800) && (uVar13 <= param_7)) &&
      (param_6[uVar18] == '0')) && ((param_6[lVar12] + 0xa8U & 0xdf) == 0)) {
    uVar18 = uVar13;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_4 + 0x40) + 8);
  local_b0 = param_3;
  local_a0 = plVar3;
  local_98 = param_4;
  local_90 = param_2;
  (**(code **)(*plVar3 + 8))(plVar3);
  local_b8 = 1;
  plVar10 = (longlong *)FUN_1800666c0(&local_a8);
  local_b8 = 0;
  if ((plVar3 != (longlong *)0x0) &&
     (puVar11 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)(puVar11,1);
  }
  FUN_1800969e0(local_88,param_7,0);
  ppppppbVar15 = (byte ******)local_88;
  if (0xf < local_70) {
    ppppppbVar15 = local_88[0];
  }
  (**(code **)(*plVar10 + 0x38))(plVar10,param_6,param_6 + param_7,ppppppbVar15);
  lVar12 = local_98;
  plVar3 = *(longlong **)(*(longlong *)(local_98 + 0x40) + 8);
  local_a0 = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
  local_b8 = 2;
  plVar10 = (longlong *)FUN_1800a2960(&local_a8);
  local_b8 = 0;
  if ((plVar3 != (longlong *)0x0) &&
     (puVar11 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)(puVar11,1);
  }
  (**(code **)(*plVar10 + 0x28))(plVar10,local_68);
  local_b8 = 4;
  ppppppcVar14 = (char ******)local_68;
  if (0xf < local_50) {
    ppppppcVar14 = local_68[0];
  }
  if ((byte)(*(char *)ppppppcVar14 - 1U) < 0x7e) {
    uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10);
    cVar1 = *(char *)ppppppcVar14;
    while (((cVar1 != '\x7f' && (cVar1 = *(char *)ppppppcVar14, '\0' < cVar1)) &&
           ((ulonglong)(longlong)cVar1 < param_7 - uVar18))) {
      param_7 = param_7 - (longlong)cVar1;
      FUN_1800a3480(local_88,param_7,1,uVar8);
      if ('\0' < *(char *)((longlong)ppppppcVar14 + 1)) {
        ppppppcVar14 = (char ******)((longlong)ppppppcVar14 + 1);
      }
      cVar1 = *(char *)ppppppcVar14;
    }
  }
  uVar13 = *(ulonglong *)(lVar12 + 0x28);
  if (((longlong)uVar13 < 1) || (uVar13 <= local_78)) {
    lVar17 = 0;
  }
  else {
    lVar17 = uVar13 - local_78;
  }
  uVar9 = *(uint *)(lVar12 + 0x18) & 0x1c0;
  local_a8 = local_78;
  if (uVar9 == 0x40) {
    ppppppbVar15 = (byte ******)local_88;
    if (0xf < local_70) {
      ppppppbVar15 = local_88[0];
    }
    uVar8 = *local_b0;
    plVar3 = *(longlong **)(local_b0 + 8);
    for (uVar13 = uVar18; uVar13 != 0; uVar13 = uVar13 - 1) {
      if (plVar3 == (longlong *)0x0) {
LAB_1800a30ad:
        uVar8 = 1;
      }
      else {
        bVar2 = *(byte *)ppppppbVar15;
        uVar9 = (uint)bVar2;
        if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
          uVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar2);
        }
        else {
          *piVar4 = *piVar4 + -1;
          pbVar16 = *(byte **)plVar3[8];
          *(byte **)plVar3[8] = pbVar16 + 1;
          *pbVar16 = bVar2;
        }
        if (uVar9 == 0xffffffff) goto LAB_1800a30ad;
      }
      ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1);
    }
  }
  else {
    uVar8 = *local_b0;
    plVar3 = *(longlong **)(local_b0 + 8);
    if (uVar9 == 0x100) {
      ppppppbVar15 = (byte ******)local_88;
      uVar13 = uVar18;
      if (0xf < local_70) {
        ppppppbVar15 = local_88[0];
      }
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        if (plVar3 == (longlong *)0x0) {
LAB_1800a2fd9:
          uVar8 = 1;
        }
        else {
          bVar2 = *(byte *)ppppppbVar15;
          uVar9 = (uint)bVar2;
          if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
            uVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar2);
          }
          else {
            *piVar4 = *piVar4 + -1;
            pbVar16 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar16 + 1;
            *pbVar16 = bVar2;
          }
          if (uVar9 == 0xffffffff) goto LAB_1800a2fd9;
        }
        ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1);
      }
      for (; lVar17 != 0; lVar17 = lVar17 + -1) {
        if (plVar3 == (longlong *)0x0) {
LAB_1800a3035:
          uVar8 = 1;
        }
        else {
          if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
            uVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
          }
          else {
            *piVar4 = *piVar4 + -1;
            pbVar16 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar16 + 1;
            *pbVar16 = param_5;
            uVar9 = uVar19;
          }
          if (uVar9 == 0xffffffff) goto LAB_1800a3035;
        }
      }
      lVar17 = 0;
    }
    else {
      for (; lVar17 != 0; lVar17 = lVar17 + -1) {
        if (plVar3 == (longlong *)0x0) {
LAB_1800a2ef5:
          uVar8 = 1;
        }
        else {
          if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
            uVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
          }
          else {
            *piVar4 = *piVar4 + -1;
            pbVar16 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar16 + 1;
            *pbVar16 = param_5;
            uVar9 = uVar19;
          }
          if (uVar9 == 0xffffffff) goto LAB_1800a2ef5;
        }
      }
      lVar17 = 0;
      ppppppbVar15 = (byte ******)local_88;
      uVar13 = uVar18;
      if (0xf < local_70) {
        ppppppbVar15 = local_88[0];
      }
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        if (plVar3 == (longlong *)0x0) {
LAB_1800a2f67:
          uVar8 = 1;
        }
        else {
          bVar2 = *(byte *)ppppppbVar15;
          uVar9 = (uint)bVar2;
          if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
            uVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar2);
          }
          else {
            *piVar4 = *piVar4 + -1;
            pbVar16 = *(byte **)plVar3[8];
            *(byte **)plVar3[8] = pbVar16 + 1;
            *pbVar16 = bVar2;
          }
          if (uVar9 == 0xffffffff) goto LAB_1800a2f67;
        }
        ppppppbVar15 = (byte ******)((longlong)ppppppbVar15 + 1);
      }
    }
  }
  puVar7 = local_b0;
  ppppppbVar15 = (byte ******)local_88;
  if (0xf < local_70) {
    ppppppbVar15 = local_88[0];
  }
  pbVar16 = (byte *)((longlong)ppppppbVar15 + uVar18);
  plVar3 = *(longlong **)(local_b0 + 8);
  for (local_a8 = local_a8 - uVar18; local_a8 != 0; local_a8 = local_a8 - 1) {
    if (plVar3 == (longlong *)0x0) {
LAB_1800a312d:
      uVar8 = 1;
    }
    else {
      bVar2 = *pbVar16;
      uVar9 = (uint)bVar2;
      if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
        uVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,bVar2);
      }
      else {
        *piVar4 = *piVar4 + -1;
        pbVar5 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar5 + 1;
        *pbVar5 = bVar2;
      }
      if (uVar9 == 0xffffffff) goto LAB_1800a312d;
    }
    pbVar16 = pbVar16 + 1;
  }
  *(undefined8 *)(local_98 + 0x28) = 0;
  local_a8 = 0;
  puVar6 = local_90;
  do {
    local_90 = puVar6;
    if (lVar17 == 0) {
      *puVar6 = uVar8;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
      *(undefined2 *)(puVar6 + 5) = *(undefined2 *)(puVar7 + 5);
      puVar6[7] = puVar7[7];
      *(longlong **)(puVar6 + 8) = plVar3;
      FUN_18000f890(local_68);
      FUN_18000f890(local_88);
      return puVar6;
    }
    if (plVar3 == (longlong *)0x0) {
LAB_1800a3195:
      uVar8 = 1;
    }
    else {
      if ((*(longlong *)plVar3[8] == 0) || (piVar4 = (int *)plVar3[0xb], *piVar4 < 1)) {
        uVar9 = (**(code **)(*plVar3 + 0x18))(plVar3,param_5);
      }
      else {
        *piVar4 = *piVar4 + -1;
        pbVar16 = *(byte **)plVar3[8];
        *(byte **)plVar3[8] = pbVar16 + 1;
        *pbVar16 = param_5;
        uVar9 = uVar19;
      }
      if (uVar9 == 0xffffffff) goto LAB_1800a3195;
    }
    lVar17 = lVar17 + -1;
    puVar6 = local_90;
  } while( true );
}



/* ===== 1800a3200 FUN_1800a3200 ===== */

undefined1 * FUN_1800a3200(undefined8 param_1,undefined1 *param_2,char param_3,uint param_4)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  
  *param_2 = 0x25;
  puVar2 = (undefined2 *)(param_2 + 1);
  if ((param_4 & 0x20) != 0) {
    *(undefined1 *)puVar2 = 0x2b;
    puVar2 = (undefined2 *)(param_2 + 2);
  }
  if ((param_4 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((longlong)puVar2 + 1);
  }
  *puVar2 = 0x2a2e;
  if (param_3 == '\0') {
    lVar6 = 2;
    lVar4 = 3;
  }
  else {
    *(char *)(puVar2 + 1) = param_3;
    lVar6 = 3;
    lVar4 = 4;
  }
  uVar3 = param_4 & 0x3000;
  if ((param_4 & 4) == 0) {
    if (uVar3 == 0x2000) {
      *(undefined1 *)(lVar6 + (longlong)puVar2) = 0x66;
      *(undefined1 *)(lVar4 + (longlong)puVar2) = 0;
      return param_2;
    }
    if (uVar3 == 0x3000) {
      *(undefined1 *)(lVar6 + (longlong)puVar2) = 0x61;
      *(undefined1 *)(lVar4 + (longlong)puVar2) = 0;
      return param_2;
    }
    uVar1 = 0x67;
    uVar5 = 0x65;
  }
  else {
    if (uVar3 == 0x2000) {
      *(undefined1 *)(lVar6 + (longlong)puVar2) = 0x46;
      *(undefined1 *)(lVar4 + (longlong)puVar2) = 0;
      return param_2;
    }
    if (uVar3 == 0x3000) {
      *(undefined1 *)(lVar6 + (longlong)puVar2) = 0x41;
      *(undefined1 *)(lVar4 + (longlong)puVar2) = 0;
      return param_2;
    }
    uVar1 = 0x47;
    uVar5 = 0x45;
  }
  if (uVar3 == 0x1000) {
    uVar1 = uVar5;
  }
  *(undefined1 *)(lVar6 + (longlong)puVar2) = uVar1;
  *(undefined1 *)(lVar4 + (longlong)puVar2) = 0;
  return param_2;
}



/* ===== 1800a32f0 FUN_1800a32f0 ===== */

void FUN_1800a32f0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  if (lVar3 == 0) goto LAB_1800a33aa;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
    FUN_18000f890(lVar3 + 0x48);
    FUN_18000f890(lVar3 + 0x28);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 4) * 0x10) < 0x1000) {
LAB_1800a339f:
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_1800a339f;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1800a33aa;
  thunk_FUN_1803d64e0(lVar2);
LAB_1800a33aa:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x70 + param_2;
  param_1[2] = param_4 * 0x70 + param_2;
  return;
}



/* ===== 1800a3420 FUN_1800a3420 ===== */

undefined8 * FUN_1800a3420(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::numpunct<char>::vftable;
  thunk_FUN_1805277b0(param_1[2]);
  thunk_FUN_1805277b0(param_1[4]);
  thunk_FUN_1805277b0(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x30);
  }
  return param_1;
}



/* ===== 1800a3480 FUN_1800a3480 ===== */

ulonglong * FUN_1800a3480(ulonglong *param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar4 = param_1[2];
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  uVar5 = param_1[3];
  if (param_3 <= uVar5 - uVar4) {
    param_1[2] = uVar4 + param_3;
    if (uVar5 < 0x10) {
      puVar7 = param_1;
    }
    else {
      puVar7 = (ulonglong *)*param_1;
    }
    lVar2 = (longlong)puVar7 + param_2;
    FUN_180540530(lVar2 + param_3,lVar2,(uVar4 - param_2) + 1);
    FUN_180540170(lVar2,(int)param_4,param_3);
    return param_1;
  }
  if (0x7fffffffffffffff - uVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar8 = uVar4 + param_3 | 0xf;
  uVar9 = 0x7fffffffffffffff;
  if (((uVar8 < 0x8000000000000000) && (uVar5 <= 0x7fffffffffffffff - (uVar5 >> 1))) &&
     (uVar3 = (uVar5 >> 1) + uVar5, uVar9 = uVar8, uVar8 < uVar3)) {
    uVar9 = uVar3;
  }
  uVar8 = FUN_18000fb70(uVar9 + 1);
  param_1[2] = uVar4 + param_3;
  param_1[3] = uVar9;
  lVar2 = uVar8 + param_2;
  if (uVar5 < 0x10) {
    FUN_180540530(uVar8,param_1,param_2);
    FUN_180540170(lVar2,(int)param_4,param_3);
    FUN_180540530(param_3 + lVar2,(longlong)param_1 + param_2,(uVar4 - param_2) + 1);
  }
  else {
    uVar9 = *param_1;
    FUN_180540530(uVar8,uVar9,param_2);
    FUN_180540170(lVar2,(int)param_4,param_3);
    FUN_180540530(param_3 + lVar2,uVar9 + param_2,(uVar4 - param_2) + 1);
    puVar10 = auStack_48;
    if (0xfff < uVar5 + 1) {
      plVar1 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar1) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar5 + 0x28);
        goto LAB_1800a3609;
      }
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar10 = auStack_40;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800a35e1;
    thunk_FUN_1803d64e0(uVar9);
  }
LAB_1800a3609:
  *param_1 = uVar8;
  return param_1;
}



/* ===== 1800a3640 FUN_1800a3640 ===== */

void FUN_1800a3640(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    thunk_FUN_1805277b0(*(undefined8 *)(lVar1 + 0x10));
    thunk_FUN_1805277b0(*(undefined8 *)(lVar1 + 0x20));
    thunk_FUN_1805277b0(*(undefined8 *)(lVar1 + 0x28));
  }
  return;
}



/* ===== 1800a3670 FUN_1800a3670 ===== */

longlong FUN_1800a3670(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  
  iVar1 = FUN_18047edb0();
  if (iVar1 != 0) {
    dVar3 = (double)FUN_18047fd30();
    lVar2 = 0;
    if ((DAT_1808acbe8 <= dVar3) && (dVar3 = dVar3 - DAT_1808acbe8, dVar3 < DAT_1808acbe8)) {
      lVar2 = -0x8000000000000000;
    }
    return (longlong)dVar3 + lVar2;
  }
  iVar1 = FUN_18047fe10(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_18047fe10(param_1,param_2);
    if (iVar1 != 1) {
      iVar1 = FUN_18047ee00(param_1,param_2);
      if (iVar1 == 0) {
        FUN_18047eb70(param_1,0xffffd8ee,&DAT_1806e1914);
        iVar1 = FUN_18047fe10(param_1,0xffffffff);
        if (iVar1 == 5) {
          FUN_18047eb70(param_1,0xffffffff,&DAT_1806e7064);
          FUN_18047f880(param_1,0xfffffffe);
          iVar1 = FUN_18047fe10(param_1,0xffffffff);
          if (iVar1 == 6) {
            FUN_18047f530(param_1,"uintptr_t");
            FUN_18047f610(param_1,param_2);
            iVar1 = FUN_18047f190(param_1,2,1,0);
            if (iVar1 == 0) {
              FUN_18047eb70(param_1,0xffffd8ee,"tonumber");
              FUN_18047ed50(param_1,0xfffffffe);
              iVar1 = FUN_18047f190(param_1,1,1,0);
              if (iVar1 == 0) {
                iVar1 = FUN_18047edb0(param_1,0xffffffff);
                if (iVar1 == 0) {
                  lVar2 = 0;
                }
                else {
                  dVar3 = (double)FUN_18047fd30(param_1,0xffffffff);
                  lVar2 = 0;
                  if ((DAT_1808acbe8 <= dVar3) &&
                     (dVar3 = dVar3 - DAT_1808acbe8, dVar3 < DAT_1808acbe8)) {
                    lVar2 = -0x8000000000000000;
                  }
                  lVar2 = (longlong)dVar3 + lVar2;
                }
                FUN_18047fb50(param_1,0xfffffffe);
                return lVar2;
              }
            }
          }
        }
        FUN_18047fb50(param_1,0xfffffffe);
      }
    }
  }
  return 0;
}



/* ===== 1800a3860 FUN_1800a3860 ===== */

longlong * FUN_1800a3860(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  puVar3 = (ulonglong *)FUN_18047e2c0(param_1,1,"wl.hook");
  if ((ulonglong)((DAT_180cd02c0 - DAT_180cd02b8 >> 3) * -0x3333333333333333) <= *puVar3) {
    return (longlong *)0x0;
  }
  plVar1 = (longlong *)(DAT_180cd02b8 + *puVar3 * 0x28);
  lVar2 = *plVar1;
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  plVar5 = (longlong *)0x0;
  if (lVar2 == *(longlong *)(lVar4 + 0x148)) {
    plVar5 = plVar1;
  }
  return plVar5;
}



/* ===== 1800a3920 FUN_1800a3920 ===== */

undefined8 FUN_1800a3920(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1800a3860();
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x20) == '\0')) {
    return 0;
  }
  uVar1 = *(ulonglong *)(lVar2 + 0x18);
  if ((longlong)uVar1 < 0) {
    FUN_18047f4f0(param_1,(double)uVar1);
    return 1;
  }
  FUN_18047f4f0(param_1,(double)(longlong)uVar1);
  return 1;
}



/* ===== 1800a3990 FUN_1800a3990 ===== */

undefined8 FUN_1800a3990(undefined8 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1800a3860();
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = *(ulonglong *)(lVar2 + 8);
  if ((longlong)uVar1 < 0) {
    FUN_18047f4f0(param_1,(double)uVar1);
    return 1;
  }
  FUN_18047f4f0(param_1,(double)(longlong)uVar1);
  return 1;
}



/* ===== 1800a3a00 FUN_1800a3a00 ===== */

undefined8 FUN_1800a3a00(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1800a3860();
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x20) == '\0')) {
    FUN_18047f270(param_1,0);
    return 1;
  }
  FUN_18047f270(param_1,1);
  return 1;
}



/* ===== 1800a3a50 FUN_1800a3a50 ===== */

undefined8 FUN_1800a3a50(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_1800a3860();
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x20) == '\0')) {
    FUN_18047f270(param_1,0);
    return 1;
  }
  *(undefined1 *)(lVar1 + 0x20) = 0;
  uVar2 = FUN_180429140(*(undefined8 *)(lVar1 + 8));
  FUN_18047f270(param_1,(uVar2 & 0xfffffffb) == 0);
  return 1;
}



/* ===== 1800a3ab0 FUN_1800a3ab0 ===== */

undefined8 FUN_1800a3ab0(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  LPCVOID lpAddress;
  LPCVOID lpAddress_00;
  SIZE_T SVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  SIZE_T local_res10;
  undefined1 local_48 [16];
  undefined8 local_38;
  SIZE_T SStack_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar4 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  if (*(char *)(lVar4 + 0x4b) == '\0') {
    uVar5 = FUN_180484c10(param_1,
                          "hooks.add needs \"allow insecure\" (lua page) and the script loaded again"
                         );
    return uVar5;
  }
  lpAddress = (LPCVOID)FUN_1800a3670(param_1,1);
  lpAddress_00 = (LPCVOID)FUN_1800a3670(param_1,2);
  if (lpAddress == (LPCVOID)0x0) {
    uVar5 = FUN_180484c10(param_1,"hooks.add: bad target");
  }
  else if (lpAddress_00 == (LPCVOID)0x0) {
    uVar5 = FUN_180484c10(param_1,
                          "hooks.add: bad callback, pass an ffi.cast\'ed function or its address");
  }
  else {
    local_48._0_8_ = (PVOID)0x0;
    local_48._8_8_ = (PVOID)0x0;
    local_38._0_4_ = 0;
    local_38._4_4_ = 0;
    SStack_30 = 0;
    local_28 = 0;
    uStack_20._0_4_ = 0;
    uStack_20._4_4_ = 0;
    SVar6 = VirtualQuery(lpAddress,(PMEMORY_BASIC_INFORMATION)local_48,0x30);
    if (((SVar6 == 0) || ((DWORD)local_28 != 0x1000)) || ((local_28 & 0xf000000000) == 0)) {
      uVar5 = FUN_180484c10(param_1,"hooks.add: target %p is not executable code",lpAddress);
    }
    else {
      local_48._0_8_ = (PVOID)0x0;
      local_48._8_8_ = (PVOID)0x0;
      local_38._0_4_ = 0;
      local_38._4_4_ = 0;
      SStack_30 = 0;
      local_28 = 0;
      uStack_20._0_4_ = 0;
      uStack_20._4_4_ = 0;
      SVar6 = VirtualQuery(lpAddress_00,(PMEMORY_BASIC_INFORMATION)local_48,0x30);
      if (((SVar6 == 0) || ((DWORD)local_28 != 0x1000)) ||
         (plVar8 = DAT_180cd02b8, (local_28 & 0xf000000000) == 0)) {
        uVar5 = FUN_180484c10(param_1,
                              "hooks.add: callback %p is not executable, keep the ffi callback in a variable"
                              ,lpAddress_00);
      }
      else {
        for (; plVar8 != DAT_180cd02c0; plVar8 = plVar8 + 5) {
          if (((char)plVar8[4] != '\0') && ((LPCVOID)plVar8[1] == lpAddress)) {
            uVar5 = FUN_180484c10(param_1,"hooks.add: %p is already hooked",lpAddress);
            return uVar5;
          }
        }
        iVar3 = 0;
        plVar8 = DAT_180cd02b8;
        if (DAT_180cd02b8 != DAT_180cd02c0) {
          do {
            iVar2 = iVar3;
            if (((char)plVar8[4] != '\0') &&
               (iVar2 = iVar3 + 1, *plVar8 != *(longlong *)(lVar4 + 0x148))) {
              iVar2 = iVar3;
            }
            iVar3 = iVar2;
            plVar8 = plVar8 + 5;
          } while (plVar8 != DAT_180cd02c0);
          if (0x3f < iVar3) {
            uVar5 = FUN_180484c10(param_1,"hooks.add: too many hooks (%d)",0x40);
            return uVar5;
          }
        }
        local_res10 = 0;
        iVar3 = FUN_180428df0(lpAddress,lpAddress_00,&local_res10);
        if (iVar3 == 0) {
          iVar3 = FUN_1804293b0(lpAddress,1);
          plVar8 = DAT_180cd02c0;
          if (iVar3 == 0) {
            local_48._0_8_ = *(longlong *)(lVar4 + 0x148);
            SStack_30 = local_res10;
            uVar9 = ((longlong)DAT_180cd02c0 - (longlong)DAT_180cd02b8 >> 3) * -0x3333333333333333;
            uVar10 = 0;
            local_28 = CONCAT71(local_28._1_7_,1);
            local_48._8_8_ = lpAddress;
            local_38 = lpAddress_00;
            if (uVar9 != 0) {
              do {
                plVar1 = DAT_180cd02b8 + uVar10 * 5;
                if ((char)DAT_180cd02b8[uVar10 * 5 + 4] == '\0') {
                  *plVar1 = local_48._0_8_;
                  plVar1[1] = (longlong)lpAddress;
                  plVar1[2] = (longlong)lpAddress_00;
                  plVar1[3] = local_res10;
                  plVar1[4] = local_28;
                  goto LAB_1800a3dd1;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar9);
            }
            uVar10 = uVar9;
            if (DAT_180cd02c0 == DAT_180cd02c8) {
              FUN_1800a4030(extraout_XMM0_Da,DAT_180cd02c0,local_48);
            }
            else {
              *DAT_180cd02c0 = local_48._0_8_;
              plVar8[1] = (longlong)lpAddress;
              plVar8[2] = (longlong)lpAddress_00;
              plVar8[3] = local_res10;
              plVar8[4] = local_28;
              DAT_180cd02c0 = DAT_180cd02c0 + 5;
            }
LAB_1800a3dd1:
            puVar7 = (ulonglong *)FUN_18047efb0(param_1,8);
            *puVar7 = uVar10;
            FUN_18047eb70(param_1,0xffffd8f0,"wl.hook");
            FUN_18047f990(param_1,0xfffffffe);
            uVar5 = 1;
          }
          else {
            FUN_180429140(lpAddress);
            uVar5 = FUN_180429510(iVar3);
            uVar5 = FUN_180484c10(param_1,"hooks.add: %s",uVar5);
          }
        }
        else {
          uVar5 = FUN_180429510(iVar3);
          uVar5 = FUN_180484c10(param_1,"hooks.add: %s",uVar5);
        }
      }
    }
  }
  return uVar5;
}



/* ===== 1800a3e40 FUN_1800a3e40 ===== */

undefined8 FUN_1800a3e40(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  bool bVar4;
  
  lVar1 = FUN_1800a3670(param_1,1);
  plVar3 = DAT_180cd02b8;
  if (lVar1 != 0) {
    for (; plVar3 != DAT_180cd02c0; plVar3 = plVar3 + 5) {
      if (((char)plVar3[4] != '\0') && (plVar3[1] == lVar1)) goto LAB_1800a3e8d;
    }
    plVar3 = (longlong *)0x0;
LAB_1800a3e8d:
    if (plVar3 != (longlong *)0x0) {
      FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
      lVar1 = FUN_18047fd90(param_1,0xffffffff);
      FUN_18047fb50(param_1,0xfffffffe);
      if (*plVar3 == *(longlong *)(lVar1 + 0x148)) {
        if ((char)plVar3[4] == '\0') {
          bVar4 = true;
        }
        else {
          *(undefined1 *)(plVar3 + 4) = 0;
          uVar2 = FUN_180429140(plVar3[1]);
          bVar4 = (uVar2 & 0xfffffffb) == 0;
        }
        goto LAB_1800a3f04;
      }
    }
  }
  bVar4 = false;
LAB_1800a3f04:
  FUN_18047f270(param_1,bVar4);
  return 1;
}



