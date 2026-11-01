/* ===== 18050a9d0 FUN_18050a9d0 ===== */

undefined8 FUN_18050a9d0(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  ushort *puVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (**(byte **)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 0;
  }
  iVar4 = isspace((uint)**(byte **)(param_1 + 8));
  pbVar2 = *(byte **)(param_1 + 8);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    iVar4 = isspace((uint)*pbVar2);
    while (iVar4 != 0) {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      iVar4 = isspace((uint)**(byte **)(param_1 + 8));
    }
    return 1;
  }
  if ((*pbVar2 != 0x25) || (pbVar1 = pbVar2 + 1, *pbVar1 == 0x25)) {
    *(undefined4 *)(param_1 + 0x14) = 3;
    *(byte *)(param_1 + 0x18) = *pbVar2;
    *(byte **)(param_1 + 8) = pbVar2 + (ulonglong)(*pbVar2 == 0x25) + 1;
    puVar5 = __pctype_func();
    if (-1 < (short)puVar5[*(byte *)(param_1 + 0x18)]) {
      return 1;
    }
    cVar3 = **(char **)(param_1 + 8);
    if (cVar3 == '\0') {
      *(undefined8 *)(param_1 + 0x10) = 0x2a;
      *(undefined2 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      return 0;
    }
    *(char *)(param_1 + 0x19) = cVar3;
    *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + 1;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  *(byte **)(param_1 + 8) = pbVar1;
  if (*pbVar1 == 0x2a) {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    *(byte **)(param_1 + 8) = pbVar2 + 2;
  }
  cVar3 = FUN_18050ebc8(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_18050eeb8(param_1);
  cVar3 = **(char **)(param_1 + 8);
  if (cVar3 == 'w') {
    *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + 1;
  }
  else if ((cVar3 + 0xbdU & 0xef) != 0) goto LAB_18050aace;
  *(undefined1 *)(param_1 + 0x2c) = 1;
LAB_18050aace:
  cVar3 = FUN_18050e834(param_1);
  if (cVar3 != '\0') {
    if ((&DAT_180577850)
        [(longlong)*(int *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 0xc] != '\0') {
      return 1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0x16;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return 0;
}



/* ===== 18050ab98 FUN_18050ab98 ===== */

ulonglong FUN_18050ab98(byte *param_1)

{
  wint_t *pwVar1;
  short sVar2;
  int iVar3;
  wint_t *in_RAX;
  undefined4 extraout_var;
  longlong lVar4;
  wint_t *pwVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) goto LAB_18050abda;
  in_RAX = *(wint_t **)(param_1 + 8);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (*in_RAX == 0) {
    param_1[0x14] = 1;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    goto LAB_18050abda;
  }
  iVar3 = iswctype(*in_RAX,8);
  pwVar5 = *(wint_t **)(param_1 + 8);
  if (iVar3 != 0) {
    param_1[0x14] = 2;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    while( true ) {
      iVar3 = iswctype(*pwVar5,8);
      in_RAX = (wint_t *)CONCAT44(extraout_var,iVar3);
      if (iVar3 == 0) break;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
      pwVar5 = *(wint_t **)(param_1 + 8);
    }
    goto LAB_18050ac21;
  }
  if ((*pwVar5 != 0x25) || (pwVar1 = pwVar5 + 1, *pwVar1 == 0x25)) {
    param_1[0x14] = 3;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(wint_t *)(param_1 + 0x18) = *pwVar5;
    lVar4 = 4;
    if (*pwVar5 != 0x25) {
      lVar4 = 2;
    }
    in_RAX = (wint_t *)(lVar4 + (longlong)pwVar5);
    *(wint_t **)(param_1 + 8) = in_RAX;
    goto LAB_18050ac21;
  }
  param_1[0x14] = 4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(wint_t **)(param_1 + 8) = pwVar1;
  if (*pwVar1 == 0x2a) {
    param_1[0x1c] = 1;
    *(wint_t **)(param_1 + 8) = pwVar5 + 2;
  }
  in_RAX = (wint_t *)FUN_18050ec68(param_1);
  if ((char)in_RAX == '\0') goto LAB_18050abda;
  FUN_18050efc8(param_1);
  sVar2 = **(short **)(param_1 + 8);
  if (sVar2 == 0x77) {
    *(short **)(param_1 + 8) = *(short **)(param_1 + 8) + 1;
LAB_18050aca5:
    param_1[0x2c] = 1;
  }
  else if (((sVar2 - 0x43U & 0xffef) != 0) &&
          ((*(int *)(param_1 + 0x28) == 0xb || ((*param_1 >> 1 & 1) != 0)))) goto LAB_18050aca5;
  in_RAX = (wint_t *)FUN_18050ea00(param_1);
  if ((char)in_RAX != '\0') {
    in_RAX = (wint_t *)&DAT_180577850;
    if ((&DAT_180577850)
        [(longlong)*(int *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 0xc] != '\0') {
LAB_18050ac21:
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    param_1[0x10] = 0x16;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
LAB_18050abda:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



/* ===== 18050ad28 FUN_18050ad28 ===== */

undefined8 FUN_18050ad28(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                   L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
  }
  return *param_1;
}



/* ===== 18050ad64 FUN_18050ad64 ===== */

undefined8 FUN_18050ad64(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
                    /* WARNING: Subroutine does not return */
    _invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                   L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
  }
  return *param_1;
}



/* ===== 18050ada0 FUN_18050ada0 ===== */

undefined8
FUN_18050ada0(ulonglong param_1,int param_2,longlong param_3,char param_4,undefined8 *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  
  lVar2 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = (int)param_3;
  if (param_1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)lVar2 + 1;
  }
  cVar10 = *(char *)(param_5 + 1);
  iVar7 = ((-(uint)(cVar10 != '\0') & 0x1d) + 0x18) - iVar7;
  iVar11 = param_2 - iVar7;
  iVar12 = (-(uint)(cVar10 != '\0') & 0x380) + 0x7f;
  if (iVar12 < iVar11) goto LAB_18050b07a;
  bVar5 = (byte)param_3;
  if (iVar11 < (int)((-(uint)(cVar10 != '\0') & 0xfffffc80) - 0x7e)) {
    iVar13 = param_2 + -1 + iVar12;
    iVar11 = -iVar12;
    if (iVar13 < 0) {
      if ((uint)-iVar13 < 0x40) {
        bVar6 = (byte)-iVar13;
        uVar9 = 1L << (bVar6 - 1 & 0x3f);
        uVar14 = uVar9 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar9 - 1) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((uVar14 != 0) || (bVar4)) {
          iVar12 = fegetround();
          if (iVar12 == 0) {
            if ((uVar14 == 0) || ((!bVar4 && ((1L << (bVar6 & 0x3f) & param_1) == 0))))
            goto LAB_18050af06;
            bVar5 = 1;
          }
          else if (iVar12 != 0x100) {
            if (iVar12 != 0x200) goto LAB_18050af06;
            bVar5 = bVar5 ^ 1;
          }
        }
        else {
LAB_18050af06:
          bVar5 = 0;
        }
        param_1 = (param_1 >> (bVar6 & 0x3f)) + (ulonglong)bVar5;
      }
      else {
        param_1 = 0;
      }
      cVar10 = *(char *)(param_5 + 1);
      if (param_1 == 0) {
        if (cVar10 == '\0') {
          *(int *)*param_5 = iVar3 << 0x1f;
        }
        else {
          *(longlong *)*param_5 = param_3 << 0x3f;
        }
        return 2;
      }
      if ((-(ulonglong)(cVar10 != '\0') & 0xfffffff800000) + 0x7fffff < param_1) {
        iVar11 = ((param_2 - iVar13) - iVar7) + -1;
      }
      goto LAB_18050b0b8;
    }
    iVar7 = iVar13;
  }
  else {
    if (iVar7 < 0) {
      if ((uint)-iVar7 < 0x40) {
        bVar6 = (byte)-iVar7;
        uVar9 = 1L << (bVar6 - 1 & 0x3f);
        uVar14 = uVar9 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar9 - 1) != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((uVar14 != 0) || (bVar4)) {
          iVar7 = fegetround();
          if (iVar7 == 0) {
            if ((uVar14 == 0) || ((!bVar4 && ((1L << (bVar6 & 0x3f) & param_1) == 0))))
            goto LAB_18050b027;
            bVar5 = 1;
          }
          else if (iVar7 != 0x100) {
            if (iVar7 != 0x200) goto LAB_18050b027;
            bVar5 = bVar5 ^ 1;
          }
        }
        else {
LAB_18050b027:
          bVar5 = 0;
        }
        param_1 = (param_1 >> (bVar6 & 0x3f)) + (ulonglong)bVar5;
      }
      else {
        param_1 = 0;
      }
      cVar10 = *(char *)(param_5 + 1);
      if ((-(ulonglong)(cVar10 != '\0') & 0x1fffffff000000) + 0xffffff < param_1) {
        param_1 = param_1 >> 1;
        iVar11 = iVar11 + 1;
        if ((int)((-(uint)(cVar10 != '\0') & 0x380) + 0x7f) < iVar11) {
LAB_18050b07a:
          if (cVar10 == '\0') {
            *(uint *)*param_5 = iVar3 << 0x1f | 0x7f800000;
          }
          else {
            *(ulonglong *)*param_5 = param_3 << 0x3f | 0x7ff0000000000000;
          }
          return 3;
        }
      }
      goto LAB_18050b0b8;
    }
    if (iVar7 < 1) goto LAB_18050b0b8;
  }
  param_1 = param_1 << ((byte)iVar7 & 0x3f);
LAB_18050b0b8:
  puVar1 = (ulonglong *)*param_5;
  param_1 = (-(ulonglong)(cVar10 != '\0') & 0xfffffff800000) + 0x7fffff & param_1;
  if (cVar10 == '\0') {
    uVar8 = iVar3 << 0x1f | (uint)*puVar1 & 0x7fffffff;
    uVar8 = ((iVar11 + 0x7f) * 0x800000 ^ uVar8) & 0x7f800000 ^ uVar8;
    *(uint *)puVar1 = (uVar8 ^ (uint)param_1) & 0x7fffff ^ uVar8;
  }
  else {
    uVar9 = (longlong)(iVar11 + 0x3ff) << 0x34;
    *puVar1 = (param_3 << 0x3f ^ uVar9) & 0x8000000000000000 ^ uVar9 | param_1;
  }
  return 0;
}



/* ===== 18050b158 FUN_18050b158 ===== */

void FUN_18050b158(uint *param_1,uint param_2,undefined8 param_3,byte param_4,longlong param_5)

{
  sbyte sVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  iVar6 = (-(uint)(*(char *)(param_5 + 8) != '\0') & 0x1d) + 0x17;
  if (param_2 < 0x41) {
    if (*param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulonglong)param_1[1];
      if (1 < *param_1) {
        uVar9 = param_1[2];
      }
    }
    param_4 = param_4 ^ 1;
    lVar5 = ((ulonglong)uVar9 << 0x20) + uVar4;
  }
  else {
    uVar8 = param_2 >> 5;
    uVar7 = uVar8 - 2;
    uVar9 = param_1[(ulonglong)uVar7 + 1];
    param_2 = param_2 & 0x1f;
    uVar4 = 0;
    if (param_2 == 0) {
      iVar6 = iVar6 + uVar7 * 0x20;
      lVar5 = CONCAT44(param_1[(ulonglong)(uVar8 - 1) + 1],uVar9);
      param_4 = param_4 ^ 1;
      uVar9 = 0;
      if (uVar7 != 0) {
        do {
          uVar4 = 0;
          if (param_1[(ulonglong)uVar9 + 1] == 0) {
            uVar4 = (ulonglong)param_4;
          }
          uVar9 = uVar9 + 1;
          param_4 = (byte)uVar4;
        } while (uVar9 != uVar7);
      }
    }
    else {
      sVar1 = (sbyte)param_2;
      iVar6 = uVar7 * 0x20 + param_2 + iVar6;
      uVar3 = (1 << sVar1) - 1;
      lVar5 = ((ulonglong)param_1[(ulonglong)(uVar8 - 1) + 1] << (-sVar1 + 0x20U & 0x3f)) +
              ((ulonglong)(param_1[(ulonglong)uVar8 + 1] & uVar3) << (-sVar1 + 0x40U & 0x3f)) +
              (ulonglong)((~uVar3 & uVar9) >> sVar1);
      if ((param_4 != 0) || (param_4 = 1, (uVar3 & uVar9) != 0)) {
        param_4 = 0;
      }
      uVar9 = 0;
      if (uVar7 != 0) {
        do {
          uVar4 = (ulonglong)uVar9;
          bVar2 = 0;
          if (param_1[uVar4 + 1] == 0) {
            bVar2 = param_4;
          }
          param_4 = bVar2;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar7);
      }
    }
    param_3 = CONCAT71((int7)(uVar4 >> 8),(char)param_3);
  }
  FUN_18050ada0(lVar5,iVar6,param_3,param_4);
  return;
}



/* ===== 18050b2b8 FUN_18050b2b8 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18050b2b8(uint *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  sbyte sVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  rsize_t rVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_d78 [32];
  undefined8 *local_d58;
  uint local_d48;
  uint local_d44;
  uint local_d40;
  uint local_d3c;
  uint *local_d38;
  uint local_d30;
  uint *local_d28;
  undefined8 *local_d20;
  uint *local_d18;
  uint *local_d10;
  uint *local_d08;
  undefined4 local_cf8;
  uint local_cf4 [115];
  undefined4 local_b28;
  undefined1 local_b24 [460];
  uint local_958;
  uint local_954 [115];
  uint local_788;
  uint local_784 [115];
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  undefined8 local_3e4;
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d78;
  local_d44 = *param_1;
  uVar26 = param_1[1];
  local_d30 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  local_788 = 0;
  puVar23 = param_1 + 2;
  uVar17 = 0;
  if ((int)local_d44 < 0) {
    local_d44 = 0;
  }
  uVar27 = 0;
  uVar25 = 0;
  uVar20 = local_d44;
  if (uVar26 <= local_d44) {
    uVar20 = uVar26;
  }
  local_d44 = local_d44 - uVar20;
  local_d08 = (uint *)((longlong)param_1 + (ulonglong)uVar20 + 8);
  local_d10 = (uint *)((longlong)param_1 + (ulonglong)uVar26 + 8);
  local_d48 = (int)local_d10 - (int)local_d08;
  local_d28 = param_1;
  local_d20 = param_2;
  if (puVar23 != local_d08) {
    do {
      uVar26 = (uint)uVar27;
      if (uVar25 == 9) {
        if (uVar17 != 0) {
          uVar19 = 0;
          uVar11 = 0;
          do {
            uVar20 = (int)uVar11 + 1;
            uVar10 = (ulonglong)local_784[uVar11] * 1000000000 + uVar19;
            local_784[uVar11] = (uint)uVar10;
            uVar19 = uVar10 >> 0x20;
            uVar11 = (ulonglong)uVar20;
          } while (uVar20 != uVar17);
          uVar17 = (uint)(uVar10 >> 0x20);
          if (uVar17 == 0) {
            uVar17 = local_788;
          }
          else if (local_788 < 0x73) {
            local_784[local_788] = uVar17;
            local_788 = local_788 + 1;
            uVar17 = local_788;
          }
          else {
            local_788 = 0;
            uVar17 = 0;
          }
        }
        if (uVar26 != 0) {
          uVar11 = 0;
          uVar20 = 0;
          if (uVar17 != 0) {
            do {
              uVar17 = (int)uVar11 + 1;
              uVar19 = local_784[uVar11] + uVar27;
              local_784[uVar11] = (uint)uVar19;
              uVar27 = uVar19 >> 0x20;
              uVar26 = (uint)(uVar19 >> 0x20);
              uVar11 = (ulonglong)uVar17;
            } while (uVar17 != local_788);
            uVar17 = local_788;
            uVar20 = local_788;
            if (uVar26 == 0) goto LAB_18050b463;
          }
          if (uVar20 < 0x73) {
            local_784[uVar20] = uVar26;
            uVar17 = local_788 + 1;
            local_788 = uVar17;
          }
          else {
            uVar17 = 0;
            local_788 = 0;
          }
        }
LAB_18050b463:
        uVar26 = 0;
        uVar25 = 0;
      }
      uVar20 = *puVar23;
      uVar25 = uVar25 + 1;
      puVar23 = (uint *)((longlong)puVar23 + 1);
      uVar26 = (uint)(byte)uVar20 + uVar26 * 10;
      uVar27 = (ulonglong)uVar26;
    } while (puVar23 != local_d08);
    if (uVar25 != 0) {
      for (uVar20 = uVar25 / 10; uVar20 != 0; uVar20 = uVar20 - local_d40) {
        local_d40 = uVar20;
        if (0x26 < uVar20) {
          local_d40 = 0x26;
        }
        uVar14 = local_d40 - 1;
        bVar8 = (&DAT_180577622)[(ulonglong)uVar14 * 4];
        bVar1 = (&DAT_180577623)[(ulonglong)uVar14 * 4];
        local_218 = (uint)bVar1 + (uint)bVar8;
        local_d3c = uVar20;
        FUN_180540170(local_214,0,(ulonglong)bVar8 * 4);
        FUN_180540530(local_214 + bVar8,
                      &DAT_180576d10 +
                      (ulonglong)*(ushort *)(&DAT_180577620 + (ulonglong)uVar14 * 4) * 4,
                      (ulonglong)bVar1 << 2);
        uVar14 = local_784[0];
        if (local_218 < 2) {
          uVar11 = (ulonglong)local_214[0];
          if (local_214[0] == 0) {
LAB_18050b534:
            local_788 = 0;
            uVar17 = 0;
            local_d3c = uVar20;
          }
          else {
            local_d3c = uVar20;
            if (local_214[0] != 1) {
              if (uVar17 != 0) {
                uVar10 = 0;
                uVar19 = 0;
                do {
                  uVar15 = (int)uVar19 + 1;
                  uVar12 = local_784[uVar19] * uVar11 + uVar10;
                  local_784[uVar19] = (uint)uVar12;
                  uVar10 = uVar12 >> 0x20;
                  uVar14 = (uint)(uVar12 >> 0x20);
                  uVar19 = (ulonglong)uVar15;
                } while (uVar15 != uVar17);
                goto LAB_18050b587;
              }
            }
          }
LAB_18050b852:
          bVar28 = true;
          uVar20 = local_d3c;
        }
        else {
          if (1 < uVar17) {
            local_d18 = local_784;
            local_d38 = local_214;
            if (uVar17 <= local_218) {
              uVar20 = uVar17;
            }
            else {
              local_d38 = local_784;
              uVar20 = local_218;
              local_d18 = local_214;
            }
            local_5b8 = 0;
            uVar11 = 0;
            uVar14 = local_218;
            if (uVar17 > local_218) {
              uVar14 = uVar17;
            }
            local_788 = 0;
            if (uVar20 != 0) {
              do {
                uVar15 = (uint)uVar11;
                uVar17 = local_d18[uVar11];
                if (uVar17 == 0) {
                  if (uVar15 == local_788) {
                    local_788 = uVar15 + 1;
                    local_5b4[uVar11] = 0;
                    local_5b8 = local_788;
                  }
                }
                else {
                  uVar19 = 0;
                  if (uVar14 != 0) {
                    do {
                      uVar18 = (uint)uVar11;
                      uVar10 = uVar11;
                      if (uVar18 == 0x73) break;
                      if (uVar18 == local_788) {
                        local_5b4[uVar11] = 0;
                        local_5b8 = uVar18 + 1;
                      }
                      uVar10 = (ulonglong)(uVar18 + 1);
                      uVar19 = (ulonglong)local_d38[-uVar15 + uVar18] * (ulonglong)uVar17 + uVar19 +
                               (ulonglong)local_5b4[uVar11];
                      local_5b4[uVar11] = (uint)uVar19;
                      uVar19 = uVar19 >> 0x20;
                      uVar11 = uVar10;
                      local_788 = local_5b8;
                    } while (-uVar15 + uVar18 + 1 != uVar14);
                    uVar17 = (uint)uVar19;
                    uVar11 = uVar10;
                    while (uVar17 != 0) {
                      uVar18 = (uint)uVar11;
                      if (uVar18 == 0x73) goto LAB_18050b924;
                      if (uVar18 == local_788) {
                        local_5b4[uVar11] = 0;
                        local_5b8 = uVar18 + 1;
                      }
                      uVar17 = local_5b4[uVar11];
                      local_5b4[uVar11] = (uint)(uVar17 + uVar19);
                      uVar17 = (uint)(uVar17 + uVar19 >> 0x20);
                      uVar19 = (ulonglong)uVar17;
                      uVar11 = (ulonglong)(uVar18 + 1);
                      local_788 = local_5b8;
                    }
                  }
                  if ((int)uVar11 == 0x73) goto LAB_18050b924;
                }
                uVar11 = (ulonglong)(uVar15 + 1);
              } while (uVar15 + 1 != uVar20);
            }
            if ((ulonglong)local_788 != 0) {
              if ((ulonglong)local_788 * 4 < 0x1cd) {
                FUN_180540530();
              }
              else {
                FUN_180540170(local_784,0,0x1cc);
                puVar5 = (undefined4 *)FUN_18051bfb0();
                *puVar5 = 0x22;
                FUN_180527740();
              }
            }
            uVar17 = local_788;
            goto LAB_18050b852;
          }
          uVar11 = (ulonglong)local_784[0];
          local_788 = local_218;
          if ((ulonglong)local_218 != 0) {
            if ((ulonglong)local_218 * 4 < 0x1cd) {
              FUN_180540530();
            }
            else {
              FUN_180540170(local_784,0,0x1cc);
              puVar5 = (undefined4 *)FUN_18051bfb0();
              *puVar5 = 0x22;
              FUN_180527740();
            }
          }
          if (uVar14 == 0) goto LAB_18050b534;
          uVar17 = local_788;
          local_d3c = uVar20;
          if ((uVar14 == 1) || (local_788 == 0)) goto LAB_18050b852;
          uVar10 = 0;
          uVar19 = 0;
          do {
            uVar17 = (int)uVar19 + 1;
            uVar12 = local_784[uVar19] * uVar11 + uVar10;
            local_784[uVar19] = (uint)uVar12;
            uVar10 = uVar12 >> 0x20;
            uVar14 = (uint)(uVar12 >> 0x20);
            uVar19 = (ulonglong)uVar17;
          } while (uVar17 != local_788);
LAB_18050b587:
          uVar17 = 0;
          if (uVar14 == 0) {
            uVar17 = local_788;
            local_d3c = uVar20;
            goto LAB_18050b852;
          }
          if (local_788 < 0x73) {
            local_784[local_788] = uVar14;
            local_788 = local_788 + 1;
            uVar17 = local_788;
            local_d3c = uVar20;
            goto LAB_18050b852;
          }
          local_788 = 0;
          bVar28 = false;
        }
        if (!bVar28) goto LAB_18050b924;
      }
      if (uVar25 % 10 != 0) {
        uVar20 = *(uint *)(&DAT_1805776b8 + (ulonglong)(uVar25 % 10 - 1) * 4);
        if (uVar20 == 0) {
LAB_18050b924:
          local_788 = 0;
          uVar17 = 0;
        }
        else if ((uVar20 != 1) && (uVar17 != 0)) {
          uVar19 = 0;
          uVar11 = 0;
          do {
            uVar25 = (int)uVar11 + 1;
            uVar10 = (ulonglong)local_784[uVar11] * (ulonglong)uVar20 + uVar19;
            local_784[uVar11] = (uint)uVar10;
            uVar19 = uVar10 >> 0x20;
            uVar11 = (ulonglong)uVar25;
          } while (uVar25 != uVar17);
          uVar17 = (uint)(uVar10 >> 0x20);
          if (uVar17 == 0) {
            uVar17 = local_788;
          }
          else {
            if (0x72 < local_788) goto LAB_18050b924;
            local_784[local_788] = uVar17;
            local_788 = local_788 + 1;
            uVar17 = local_788;
          }
        }
      }
      if (uVar26 != 0) {
        uVar11 = 0;
        uVar20 = 0;
        if (uVar17 != 0) {
          do {
            uVar17 = (int)uVar11 + 1;
            uVar26 = local_784[uVar11];
            local_784[uVar11] = (uint)(uVar26 + uVar27);
            uVar26 = (uint)(uVar26 + uVar27 >> 0x20);
            uVar27 = (ulonglong)uVar26;
            uVar11 = (ulonglong)uVar17;
          } while (uVar17 != local_788);
          uVar17 = local_788;
          uVar20 = local_788;
          if (uVar26 == 0) goto LAB_18050b9b0;
        }
        if (uVar20 < 0x73) {
          local_784[uVar20] = uVar26;
          uVar17 = local_788 + 1;
          local_788 = uVar17;
        }
        else {
          uVar17 = 0;
          local_788 = 0;
        }
      }
    }
  }
LAB_18050b9b0:
  if (local_d44 == 0) {
LAB_18050bee1:
    if (uVar17 == 0) goto LAB_18050bee6;
    local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
    iVar9 = 0x1f;
    bVar28 = local_784[uVar17 - 1] == 0;
    if (!bVar28) {
      for (; local_784[uVar17 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (bVar28) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + 1;
    }
    local_d3c = (uVar17 - 1) * 0x20 + iVar9;
  }
  else {
    for (uVar26 = local_d44 / 10; uVar26 != 0; uVar26 = uVar26 - uVar20) {
      uVar20 = uVar26;
      if (0x26 < uVar26) {
        uVar20 = 0x26;
      }
      uVar25 = uVar20 - 1;
      bVar8 = (&DAT_180577622)[(ulonglong)uVar25 * 4];
      bVar1 = (&DAT_180577623)[(ulonglong)uVar25 * 4];
      local_218 = (uint)bVar1 + (uint)bVar8;
      local_d40 = uVar20;
      local_d3c = uVar26;
      FUN_180540170(local_214,0,(ulonglong)bVar8 * 4);
      FUN_180540530(local_214 + bVar8,
                    &DAT_180576d10 +
                    (ulonglong)*(ushort *)(&DAT_180577620 + (ulonglong)uVar25 * 4) * 4,
                    (ulonglong)bVar1 << 2);
      uVar25 = local_784[0];
      if (local_218 < 2) {
        uVar27 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
LAB_18050ba73:
          local_788 = 0;
          uVar17 = 0;
          local_d3c = uVar26;
          goto LAB_18050bd80;
        }
        local_d3c = uVar26;
        if (local_214[0] == 1) goto LAB_18050bd80;
        if (uVar17 == 0) goto LAB_18050bd80;
        uVar19 = 0;
        uVar11 = 0;
        do {
          uVar14 = (int)uVar11 + 1;
          uVar10 = local_784[uVar11] * uVar27 + uVar19;
          local_784[uVar11] = (uint)uVar10;
          uVar19 = uVar10 >> 0x20;
          uVar25 = (uint)(uVar10 >> 0x20);
          uVar11 = (ulonglong)uVar14;
        } while (uVar14 != uVar17);
LAB_18050bac6:
        uVar17 = 0;
        if (uVar25 == 0) {
          uVar17 = local_788;
          local_d3c = uVar26;
          goto LAB_18050bd80;
        }
        if (local_788 < 0x73) {
          local_784[local_788] = uVar25;
          local_788 = local_788 + 1;
          uVar17 = local_788;
          local_d3c = uVar26;
          goto LAB_18050bd80;
        }
        local_788 = 0;
        bVar28 = false;
      }
      else {
        if (uVar17 < 2) {
          uVar27 = (ulonglong)local_784[0];
          local_788 = local_218;
          if ((ulonglong)local_218 != 0) {
            if ((ulonglong)local_218 * 4 < 0x1cd) {
              FUN_180540530();
            }
            else {
              FUN_180540170(local_784,0,0x1cc);
              puVar5 = (undefined4 *)FUN_18051bfb0();
              *puVar5 = 0x22;
              FUN_180527740();
            }
          }
          if (uVar25 == 0) goto LAB_18050ba73;
          uVar17 = local_788;
          local_d3c = uVar26;
          if (uVar25 != 1) {
            if (local_788 != 0) {
              uVar19 = 0;
              uVar11 = 0;
              do {
                uVar17 = (int)uVar11 + 1;
                uVar10 = local_784[uVar11] * uVar27 + uVar19;
                local_784[uVar11] = (uint)uVar10;
                uVar19 = uVar10 >> 0x20;
                uVar25 = (uint)(uVar10 >> 0x20);
                uVar11 = (ulonglong)uVar17;
              } while (uVar17 != local_788);
              goto LAB_18050bac6;
            }
          }
        }
        else {
          puVar23 = local_784;
          puVar13 = local_214;
          if (uVar17 <= local_218) {
            uVar26 = uVar17;
          }
          else {
            puVar13 = local_784;
            uVar26 = local_218;
            puVar23 = local_214;
          }
          local_5b8 = 0;
          uVar27 = 0;
          uVar20 = local_218;
          if (uVar17 > local_218) {
            uVar20 = uVar17;
          }
          local_788 = 0;
          if (uVar26 != 0) {
            do {
              uVar25 = (uint)uVar27;
              uVar17 = puVar23[uVar27];
              if (uVar17 == 0) {
                if (uVar25 == local_788) {
                  local_788 = uVar25 + 1;
                  local_5b4[uVar27] = 0;
                  local_5b8 = local_788;
                }
              }
              else {
                uVar11 = 0;
                uVar14 = uVar25;
                if (uVar20 != 0) {
                  do {
                    uVar14 = (uint)uVar27;
                    uVar19 = uVar27;
                    if (uVar14 == 0x73) break;
                    if (uVar14 == local_788) {
                      local_5b4[uVar27] = 0;
                      local_5b8 = uVar14 + 1;
                    }
                    uVar19 = (ulonglong)(uVar14 + 1);
                    uVar11 = (ulonglong)puVar13[-uVar25 + uVar14] * (ulonglong)uVar17 + uVar11 +
                             (ulonglong)local_5b4[uVar27];
                    local_5b4[uVar27] = (uint)uVar11;
                    uVar11 = uVar11 >> 0x20;
                    uVar27 = uVar19;
                    local_788 = local_5b8;
                  } while (-uVar25 + uVar14 + 1 != uVar20);
                  uVar14 = (uint)uVar19;
                  uVar17 = (uint)uVar11;
                  while (uVar17 != 0) {
                    uVar14 = (uint)uVar19;
                    if (uVar14 == 0x73) goto LAB_18050be5a;
                    if (uVar14 == local_788) {
                      local_5b4[uVar19] = 0;
                      local_5b8 = uVar14 + 1;
                    }
                    uVar17 = local_5b4[uVar19];
                    uVar14 = uVar14 + 1;
                    local_5b4[uVar19] = (uint)(uVar11 + uVar17);
                    uVar17 = (uint)(uVar11 + uVar17 >> 0x20);
                    uVar11 = (ulonglong)uVar17;
                    uVar19 = (ulonglong)uVar14;
                    local_788 = local_5b8;
                  }
                }
                if (uVar14 == 0x73) goto LAB_18050be5a;
              }
              uVar27 = (ulonglong)(uVar25 + 1);
            } while (uVar25 + 1 != uVar26);
          }
          if ((ulonglong)local_788 != 0) {
            if ((ulonglong)local_788 * 4 < 0x1cd) {
              FUN_180540530();
            }
            else {
              FUN_180540170(local_784,0,0x1cc);
              puVar5 = (undefined4 *)FUN_18051bfb0();
              *puVar5 = 0x22;
              FUN_180527740();
            }
          }
          uVar17 = local_788;
          uVar20 = local_d40;
        }
LAB_18050bd80:
        bVar28 = true;
        uVar26 = local_d3c;
      }
      if (!bVar28) goto LAB_18050be5a;
    }
    if (local_d44 % 10 == 0) goto LAB_18050bee1;
    uVar26 = *(uint *)(&DAT_1805776b8 + (ulonglong)(local_d44 % 10 - 1) * 4);
    if (uVar26 == 0) {
      local_788 = 0;
      uVar17 = 0;
      goto LAB_18050bee1;
    }
    if (uVar26 == 1) goto LAB_18050bee1;
    if (uVar17 != 0) {
      uVar11 = 0;
      uVar27 = 0;
      do {
        uVar20 = (int)uVar27 + 1;
        uVar19 = (ulonglong)local_784[uVar27] * (ulonglong)uVar26 + uVar11;
        local_784[uVar27] = (uint)uVar19;
        uVar11 = uVar19 >> 0x20;
        uVar27 = (ulonglong)uVar20;
      } while (uVar20 != uVar17);
      uVar26 = (uint)(uVar19 >> 0x20);
      if (uVar26 == 0) {
        uVar17 = local_788;
      }
      else {
        if (0x72 < local_788) {
LAB_18050be5a:
          puVar6 = (ulonglong *)*local_d20;
          if (*(char *)(local_d20 + 1) == '\0') {
            *(uint *)puVar6 =
                 (-(uint)((char)local_d28[0xc2] != '\0') & 0x80000000) + 0x7f800000 |
                 (uint)*puVar6 & 0x7f800000;
          }
          else {
            *puVar6 = (-(ulonglong)((char)local_d28[0xc2] != '\0') & 0x8000000000000000) +
                      0x7ff0000000000000 | *puVar6 & 0x7ff0000000000000;
          }
          return 3;
        }
        local_784[local_788] = uVar26;
        local_788 = local_788 + 1;
        uVar17 = local_788;
      }
      goto LAB_18050bee1;
    }
LAB_18050bee6:
    local_d3c = 0;
  }
  puVar23 = local_d10;
  if ((local_d3c < local_d30) && (uVar26 = 0, local_d48 != 0)) {
    uVar25 = 0;
    uVar27 = 0;
    local_958 = 0;
    puVar13 = local_d08;
    uVar20 = uVar26;
    if (local_d08 != local_d10) {
      do {
        uVar14 = (uint)uVar27;
        if (uVar20 == 9) {
          if (uVar25 != 0) {
            uVar19 = 0;
            uVar11 = 0;
            do {
              uVar20 = (int)uVar11 + 1;
              uVar10 = (ulonglong)local_954[uVar11] * 1000000000 + uVar19;
              local_954[uVar11] = (uint)uVar10;
              uVar19 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar20;
            } while (uVar20 != uVar25);
            uVar20 = (uint)(uVar10 >> 0x20);
            if (uVar20 != 0) {
              if (local_958 < 0x73) {
                local_954[local_958] = uVar20;
                local_958 = local_958 + 1;
                uVar25 = local_958;
                goto LAB_18050bfea;
              }
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
            }
            uVar25 = local_958;
          }
LAB_18050bfea:
          if (uVar14 != 0) {
            uVar20 = uVar26;
            uVar15 = 0;
            if (uVar25 != 0) {
              do {
                uVar25 = uVar20 + 1;
                uVar11 = local_954[uVar20] + uVar27;
                local_954[uVar20] = (uint)uVar11;
                uVar27 = uVar11 >> 0x20;
                uVar14 = (uint)(uVar11 >> 0x20);
                uVar20 = uVar25;
              } while (uVar25 != local_958);
              uVar15 = local_958;
              uVar25 = local_958;
              if (uVar14 == 0) goto LAB_18050c081;
            }
            if (uVar15 < 0x73) {
              local_954[uVar15] = uVar14;
              local_958 = local_958 + 1;
              uVar25 = local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
              uVar25 = local_958;
            }
          }
LAB_18050c081:
          uVar14 = 0;
          uVar20 = uVar26;
        }
        uVar15 = *puVar13;
        uVar20 = uVar20 + 1;
        puVar13 = (uint *)((longlong)puVar13 + 1);
        uVar14 = (uint)(byte)uVar15 + uVar14 * 10;
        uVar27 = (ulonglong)uVar14;
      } while (puVar13 != puVar23);
      if (uVar20 != 0) {
        for (local_d40 = uVar20 / 10; local_d40 != 0; local_d40 = local_d40 - (int)local_d38) {
          uVar26 = local_d40;
          if (0x26 < local_d40) {
            uVar26 = 0x26;
          }
          local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar26);
          uVar11 = (ulonglong)(uVar26 - 1);
          bVar8 = (&DAT_180577622)[uVar11 * 4];
          bVar1 = (&DAT_180577623)[uVar11 * 4];
          local_218 = (uint)bVar1 + (uint)bVar8;
          FUN_180540170(local_214,0,(ulonglong)bVar8 * 4);
          FUN_180540530(local_214 + bVar8,
                        &DAT_180576d10 + (ulonglong)*(ushort *)(&DAT_180577620 + uVar11 * 4) * 4,
                        (ulonglong)bVar1 << 2);
          uVar26 = local_954[0];
          if (local_218 < 2) {
            uVar11 = (ulonglong)local_214[0];
            if (local_214[0] == 0) goto LAB_18050c157;
            if ((local_214[0] == 1) || (uVar25 == 0)) goto LAB_18050c437;
            uVar10 = 0;
            uVar19 = 0;
            do {
              uVar26 = (int)uVar19 + 1;
              uVar12 = local_954[uVar19] * uVar11 + uVar10;
              local_954[uVar19] = (uint)uVar12;
              uVar10 = uVar12 >> 0x20;
              uVar15 = (uint)(uVar12 >> 0x20);
              uVar19 = (ulonglong)uVar26;
            } while (uVar26 != uVar25);
LAB_18050c1b7:
            if (uVar15 == 0) goto LAB_18050c430;
            if (local_958 < 0x73) {
              local_954[local_958] = uVar15;
              local_958 = local_958 + 1;
              uVar25 = local_958;
              goto LAB_18050c437;
            }
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            bVar28 = false;
            uVar25 = local_958;
          }
          else {
            puVar23 = local_214;
            if (uVar25 < 2) {
              local_958 = local_218;
              memcpy_s(local_954,0x1cc,puVar23,(ulonglong)local_218 << 2);
              if (uVar26 != 0) {
                uVar25 = local_958;
                if ((uVar26 != 1) && (local_958 != 0)) {
                  uVar19 = 0;
                  uVar11 = 0;
                  do {
                    uVar25 = (int)uVar11 + 1;
                    uVar10 = (ulonglong)local_954[uVar11] * (ulonglong)uVar26 + uVar19;
                    local_954[uVar11] = (uint)uVar10;
                    uVar19 = uVar10 >> 0x20;
                    uVar15 = (uint)(uVar10 >> 0x20);
                    uVar11 = (ulonglong)uVar25;
                  } while (uVar25 != local_958);
                  goto LAB_18050c1b7;
                }
                goto LAB_18050c437;
              }
LAB_18050c157:
              local_218 = 0;
              puVar23 = local_214;
              local_958 = 0;
              rVar22 = 0;
            }
            else {
              if (uVar25 <= local_218) {
                local_d18 = local_954;
                local_d44 = uVar25;
              }
              else {
                puVar23 = local_954;
                local_d18 = local_214;
                local_d44 = local_218;
              }
              uVar11 = 0;
              local_958 = 0;
              uVar26 = local_218;
              if (uVar25 > local_218) {
                uVar26 = uVar25;
              }
              local_5b8 = 0;
              if (local_d44 != 0) {
                do {
                  uVar15 = (uint)uVar11;
                  uVar25 = local_d18[uVar11];
                  if (uVar25 == 0) {
                    if (uVar15 == local_958) {
                      local_958 = uVar15 + 1;
                      local_5b4[uVar11] = 0;
                      local_5b8 = local_958;
                    }
                  }
                  else {
                    uVar19 = 0;
                    if (uVar26 == 0) {
                      uVar25 = uVar15;
                    }
                    else {
                      do {
                        uVar18 = (uint)uVar11;
                        uVar10 = uVar11;
                        if (uVar18 == 0x73) break;
                        if (uVar18 == local_958) {
                          local_5b4[uVar11] = 0;
                          local_5b8 = uVar18 + 1;
                        }
                        uVar10 = (ulonglong)(uVar18 + 1);
                        uVar19 = (ulonglong)puVar23[-uVar15 + uVar18] * (ulonglong)uVar25 +
                                 (ulonglong)local_5b4[uVar11] + uVar19;
                        local_5b4[uVar11] = (uint)uVar19;
                        uVar19 = uVar19 >> 0x20;
                        uVar11 = uVar10;
                        local_958 = local_5b8;
                      } while (-uVar15 + uVar18 + 1 != uVar26);
                      uVar25 = (uint)uVar10;
                      uVar18 = (uint)uVar19;
                      while (uVar18 != 0) {
                        uVar25 = (uint)uVar10;
                        if (uVar25 == 0x73) goto LAB_18050c4fa;
                        if (uVar25 == local_958) {
                          local_5b4[uVar10] = 0;
                          local_5b8 = uVar25 + 1;
                        }
                        uVar18 = local_5b4[uVar10];
                        uVar25 = uVar25 + 1;
                        local_5b4[uVar10] = (uint)(uVar18 + uVar19);
                        uVar18 = (uint)(uVar18 + uVar19 >> 0x20);
                        uVar19 = (ulonglong)uVar18;
                        uVar10 = (ulonglong)uVar25;
                        local_958 = local_5b8;
                      }
                    }
                    if (uVar25 == 0x73) {
LAB_18050c4fa:
                      local_b28 = 0;
                      local_958 = 0;
                      memcpy_s(local_954,0x1cc,local_b24,0);
                      goto LAB_18050c521;
                    }
                  }
                  uVar11 = (ulonglong)(uVar15 + 1);
                } while (uVar15 + 1 != local_d44);
              }
              puVar23 = local_5b4;
              rVar22 = (ulonglong)local_958 << 2;
            }
            memcpy_s(local_954,0x1cc,puVar23,rVar22);
LAB_18050c430:
            uVar25 = local_958;
LAB_18050c437:
            bVar28 = true;
          }
          if (!bVar28) goto LAB_18050c521;
        }
        if (uVar20 % 10 != 0) {
          uVar26 = *(uint *)(&DAT_1805776b8 + (ulonglong)(uVar20 % 10 - 1) * 4);
          if (uVar26 == 0) {
LAB_18050c521:
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
LAB_18050c542:
            uVar25 = local_958;
          }
          else if ((uVar26 != 1) && (uVar25 != 0)) {
            uVar19 = 0;
            uVar11 = 0;
            do {
              uVar20 = (int)uVar11 + 1;
              uVar10 = (ulonglong)local_954[uVar11] * (ulonglong)uVar26 + uVar19;
              local_954[uVar11] = (uint)uVar10;
              uVar19 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar20;
            } while (uVar20 != uVar25);
            uVar26 = (uint)(uVar10 >> 0x20);
            if (uVar26 == 0) goto LAB_18050c542;
            if (0x72 < local_958) goto LAB_18050c521;
            local_954[local_958] = uVar26;
            local_958 = local_958 + 1;
            uVar25 = local_958;
          }
        }
        if (uVar14 != 0) {
          uVar11 = 0;
          uVar26 = 0;
          if (uVar25 != 0) {
            do {
              uVar20 = (int)uVar11 + 1;
              uVar26 = local_954[uVar11];
              local_954[uVar11] = (uint)(uVar26 + uVar27);
              uVar14 = (uint)(uVar26 + uVar27 >> 0x20);
              uVar27 = (ulonglong)uVar14;
              uVar11 = (ulonglong)uVar20;
            } while (uVar20 != local_958);
            uVar26 = local_958;
            uVar25 = local_958;
            if (uVar14 == 0) goto LAB_18050c5de;
          }
          if (uVar26 < 0x73) {
            local_954[uVar26] = uVar14;
            local_958 = local_958 + 1;
            uVar25 = local_958;
          }
          else {
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar25 = local_958;
          }
        }
      }
    }
LAB_18050c5de:
    if ((int)*local_d28 < 0) {
      local_d48 = local_d48 - *local_d28;
    }
    uVar26 = 1;
    local_3e4 = 1;
    local_3e8 = 1;
    uVar20 = local_d48 / 10;
    if (uVar20 != 0) {
      do {
        uVar14 = uVar20;
        if (0x26 < uVar20) {
          uVar14 = 0x26;
        }
        local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar14);
        uVar27 = (ulonglong)(uVar14 - 1);
        bVar8 = (&DAT_180577622)[uVar27 * 4];
        bVar1 = (&DAT_180577623)[uVar27 * 4];
        local_218 = (uint)bVar1 + (uint)bVar8;
        FUN_180540170(local_214,0,(ulonglong)bVar8 * 4);
        FUN_180540530(local_214 + bVar8,
                      &DAT_180576d10 + (ulonglong)*(ushort *)(&DAT_180577620 + uVar27 * 4) * 4,
                      (ulonglong)bVar1 << 2);
        if (local_218 < 2) {
          uVar27 = (ulonglong)local_214[0];
          if (local_214[0] == 0) {
            local_cf8 = 0;
            local_3e8 = 0;
            memcpy_s(&local_3e4,0x1cc,local_cf4,0);
LAB_18050c6db:
            uVar26 = local_3e8;
LAB_18050c6e2:
            bVar28 = true;
          }
          else {
            if ((local_214[0] == 1) || (uVar26 == 0)) goto LAB_18050c6e2;
            uVar19 = 0;
            uVar11 = 0;
            do {
              uVar14 = (int)uVar11 + 1;
              uVar10 = local_5b4[uVar11 + 0x74] * uVar27 + uVar19;
              local_5b4[uVar11 + 0x74] = (uint)uVar10;
              uVar19 = uVar10 >> 0x20;
              uVar11 = (ulonglong)uVar14;
            } while (uVar14 != uVar26);
            uVar26 = (uint)(uVar10 >> 0x20);
            if (uVar26 == 0) goto LAB_18050c6db;
            if (local_3e8 < 0x73) {
              local_5b4[(ulonglong)local_3e8 + 0x74] = uVar26;
              uVar26 = local_3e8 + 1;
              local_3e8 = uVar26;
              goto LAB_18050c6e2;
            }
            local_cf8 = 0;
            local_3e8 = 0;
            memcpy_s(&local_3e4,0x1cc,local_cf4,0);
            bVar28 = false;
            uVar26 = local_3e8;
          }
        }
        else {
          puVar23 = local_214;
          if (uVar26 < 2) {
            uVar26 = (uint)local_3e4;
            uVar27 = local_3e4 & 0xffffffff;
            local_3e8 = local_218;
            memcpy_s(&local_3e4,0x1cc,puVar23,(ulonglong)local_218 << 2);
            if (uVar26 == 0) {
              local_cf8 = 0;
              puVar23 = local_cf4;
              local_3e8 = 0;
              rVar22 = 0;
              goto LAB_18050ca02;
            }
            if ((uVar26 != 1) && (local_3e8 != 0)) {
              uVar19 = 0;
              uVar11 = 0;
              do {
                uVar26 = (int)uVar11 + 1;
                uVar10 = local_5b4[uVar11 + 0x74] * uVar27 + uVar19;
                local_5b4[uVar11 + 0x74] = (uint)uVar10;
                uVar19 = uVar10 >> 0x20;
                uVar11 = (ulonglong)uVar26;
              } while (uVar26 != local_3e8);
              uVar26 = (uint)(uVar10 >> 0x20);
              if (uVar26 != 0) {
                if (0x72 < local_3e8) {
                  local_cf8 = 0;
                  local_3e8 = 0;
                  memcpy_s(&local_3e4,0x1cc,local_cf4,0);
                  bVar28 = false;
                  uVar26 = local_3e8;
                  goto LAB_18050ca1a;
                }
                local_5b4[(ulonglong)local_3e8 + 0x74] = uVar26;
                local_3e8 = local_3e8 + 1;
              }
            }
          }
          else {
            if (local_218 < uVar26) {
              puVar23 = (uint *)&local_3e4;
              local_d40 = local_218;
              local_d18 = local_214;
            }
            else {
              local_d40 = uVar26;
              local_d18 = (uint *)&local_3e4;
            }
            uVar27 = 0;
            uVar14 = 0;
            uVar15 = local_218;
            if (local_218 < uVar26) {
              uVar15 = uVar26;
            }
            local_5b8 = 0;
            if (local_d40 != 0) {
              do {
                uVar18 = (uint)uVar27;
                uVar26 = local_d18[uVar27];
                if (uVar26 == 0) {
                  if (uVar18 == uVar14) {
                    uVar14 = uVar18 + 1;
                    local_5b4[uVar27] = 0;
                    local_5b8 = uVar14;
                  }
                }
                else {
                  uVar11 = 0;
                  if (uVar15 == 0) {
                    uVar26 = uVar18;
                  }
                  else {
                    do {
                      uVar21 = (uint)uVar27;
                      uVar19 = uVar27;
                      if (uVar21 == 0x73) break;
                      if (uVar21 == uVar14) {
                        local_5b4[uVar27] = 0;
                        local_5b8 = uVar21 + 1;
                      }
                      uVar19 = (ulonglong)(uVar21 + 1);
                      uVar11 = (ulonglong)puVar23[-uVar18 + uVar21] * (ulonglong)uVar26 + uVar11 +
                               (ulonglong)local_5b4[uVar27];
                      local_5b4[uVar27] = (uint)uVar11;
                      uVar11 = uVar11 >> 0x20;
                      uVar27 = uVar19;
                      uVar14 = local_5b8;
                    } while (-uVar18 + uVar21 + 1 != uVar15);
                    uVar26 = (uint)uVar19;
                    uVar21 = (uint)uVar11;
                    while (uVar21 != 0) {
                      uVar26 = (uint)uVar19;
                      if (uVar26 == 0x73) goto LAB_18050ca95;
                      if (uVar26 == uVar14) {
                        local_5b4[uVar19] = 0;
                        local_5b8 = uVar26 + 1;
                      }
                      uVar14 = local_5b4[uVar19];
                      uVar26 = uVar26 + 1;
                      local_5b4[uVar19] = (uint)(uVar14 + uVar11);
                      uVar21 = (uint)(uVar14 + uVar11 >> 0x20);
                      uVar11 = (ulonglong)uVar21;
                      uVar19 = (ulonglong)uVar26;
                      uVar14 = local_5b8;
                    }
                  }
                  if (uVar26 == 0x73) {
LAB_18050ca95:
                    local_b28 = 0;
                    local_3e8 = 0;
                    memcpy_s(&local_3e4,0x1cc,local_b24,0);
                    goto LAB_18050cb3b;
                  }
                }
                uVar27 = (ulonglong)(uVar18 + 1);
              } while (uVar18 + 1 != local_d40);
            }
            puVar23 = local_5b4;
            rVar22 = (ulonglong)uVar14 << 2;
            local_3e8 = uVar14;
LAB_18050ca02:
            memcpy_s(&local_3e4,0x1cc,puVar23,rVar22);
          }
          bVar28 = true;
          uVar26 = local_3e8;
        }
LAB_18050ca1a:
        if (!bVar28) goto LAB_18050cb3b;
        uVar20 = uVar20 - (int)local_d38;
      } while (uVar20 != 0);
    }
    uVar20 = 0;
    if (local_d48 % 10 != 0) {
      uVar14 = *(uint *)(&DAT_1805776b8 + (ulonglong)(local_d48 % 10 - 1) * 4);
      if (uVar14 == 0) {
        local_cf8 = 0;
        local_3e8 = 0;
        memcpy_s(&local_3e4,0x1cc,local_cf4,0);
LAB_18050ca7e:
        uVar26 = local_3e8;
      }
      else if ((uVar14 != 1) && (uVar26 != 0)) {
        uVar11 = 0;
        uVar27 = 0;
        do {
          uVar15 = (int)uVar27 + 1;
          uVar19 = (ulonglong)local_5b4[uVar27 + 0x74] * (ulonglong)uVar14 + uVar11;
          local_5b4[uVar27 + 0x74] = (uint)uVar19;
          uVar11 = uVar19 >> 0x20;
          uVar27 = (ulonglong)uVar15;
        } while (uVar15 != uVar26);
        uVar26 = (uint)(uVar19 >> 0x20);
        if (uVar26 == 0) goto LAB_18050ca7e;
        if (0x72 < local_3e8) {
LAB_18050cb3b:
          local_cf8 = 0;
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          uVar26 = local_d28[0xc2];
          if (*(char *)(local_d20 + 1) == '\0') {
            puVar23 = (uint *)FUN_18050ad64();
            *puVar23 = -(uint)((char)uVar26 != '\0') & 0x80000000;
          }
          else {
            puVar6 = (ulonglong *)FUN_18050ad28();
            *puVar6 = -(ulonglong)((char)uVar26 != '\0') & 0x8000000000000000;
          }
          return 2;
        }
        local_5b4[(ulonglong)local_3e8 + 0x74] = uVar26;
        uVar26 = local_3e8 + 1;
        local_3e8 = uVar26;
      }
    }
    if (uVar25 == 0) {
      uVar14 = 0;
    }
    else {
      local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
      iVar9 = 0x1f;
      bVar28 = local_954[uVar25 - 1] == 0;
      if (!bVar28) {
        for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar28) {
        uVar14 = uVar20;
      }
      else {
        uVar14 = iVar9 + 1;
      }
      uVar14 = (uVar25 - 1) * 0x20 + uVar14;
    }
    if (uVar26 != 0) {
      local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
      iVar9 = 0x1f;
      bVar28 = local_5b4[(ulonglong)(uVar26 - 1) + 0x74] == 0;
      if (!bVar28) {
        for (; local_5b4[(ulonglong)(uVar26 - 1) + 0x74] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (!bVar28) {
        uVar20 = iVar9 + 1;
      }
      uVar20 = (uVar26 - 1) * 0x20 + uVar20;
    }
    uVar20 = -(uint)(uVar14 < uVar20) & uVar20 - uVar14;
    local_d44 = uVar20;
    if (uVar20 != 0) {
      local_d48 = 0;
      uVar14 = uVar20 & 0x1f;
      uVar18 = uVar20 >> 5;
      local_d38 = (uint *)CONCAT44(local_d38._4_4_,0x20 - uVar14);
      bVar8 = (byte)(0x20 - uVar14);
      uVar15 = (int)(1L << (bVar8 & 0x3f)) - 1;
      local_d40 = ~uVar15;
      iVar9 = 0x1f;
      bVar28 = local_954[uVar25 - 1] == 0;
      if (!bVar28) {
        for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar28) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + 1;
      }
      if ((uVar18 + uVar25 < 0x74) &&
         (local_d48 = (0x20U - iVar9 < uVar14) + uVar18 + uVar25, local_d48 < 0x74)) {
        uVar21 = local_d48 - 1;
        if (uVar21 != uVar18 - 1) {
          while( true ) {
            uVar24 = uVar21 - uVar18;
            if (uVar24 < uVar25) {
              uVar4 = local_954[uVar24];
            }
            else {
              uVar4 = 0;
            }
            if (uVar24 - 1 < uVar25) {
              uVar25 = local_954[uVar24 - 1];
            }
            else {
              uVar25 = 0;
            }
            local_954[uVar21] =
                 (uVar25 & local_d40) >> (bVar8 & 0x1f) | (uVar4 & uVar15) << (sbyte)uVar14;
            uVar21 = uVar21 - 1;
            if (uVar21 == uVar18 - 1) break;
            uVar25 = local_958;
          }
        }
        uVar25 = 0;
        if (uVar18 != 0) {
          do {
            uVar27 = (ulonglong)uVar25;
            uVar25 = uVar25 + 1;
            local_954[uVar27] = 0;
          } while (uVar25 != uVar18);
        }
        local_958 = local_d48;
        uVar25 = local_d48;
      }
      else {
        local_cf8 = 0;
        local_958 = 0;
        memcpy_s(local_954,0x1cc,local_cf4,0);
        uVar25 = local_958;
      }
    }
    uVar14 = local_d3c;
    local_d30 = local_d30 - local_d3c;
    uVar15 = local_d30;
    if (local_d3c != 0) {
      if (local_d30 < uVar20) {
        bVar28 = true;
        goto LAB_18050cf6c;
      }
      uVar15 = local_d30 - uVar20;
    }
    if (uVar26 < uVar25) {
LAB_18050cd8a:
      bVar28 = false;
    }
    else {
      uVar18 = uVar25;
      if (uVar25 < uVar26) {
        bVar28 = true;
      }
      else {
        do {
          uVar18 = uVar18 - 1;
          if (uVar18 == 0xffffffff) goto LAB_18050cd8a;
        } while (local_954[uVar18] == local_5b4[(ulonglong)uVar18 + 0x74]);
        bVar28 = local_954[uVar18] <= local_5b4[(ulonglong)uVar18 + 0x74];
      }
    }
    if (bVar28) {
      uVar20 = uVar20 + 1;
    }
    uVar21 = uVar15 >> 5;
    sVar3 = (sbyte)(uVar15 & 0x1f);
    bVar8 = 0x20 - sVar3;
    uVar18 = (int)(1L << (bVar8 & 0x3f)) - 1;
    uVar26 = ~uVar18;
    local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar26);
    iVar9 = 0x1f;
    bVar28 = local_954[uVar25 - 1] == 0;
    if (!bVar28) {
      for (; local_954[uVar25 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (bVar28) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + 1;
    }
    local_d44 = uVar20;
    if ((uVar21 + uVar25 < 0x74) &&
       (uVar15 = (0x20U - iVar9 < (uVar15 & 0x1f)) + uVar21 + uVar25, uVar15 < 0x74)) {
      uVar24 = uVar15 - 1;
      if (uVar24 != uVar21 - 1) {
        while( true ) {
          uVar4 = uVar24 - uVar21;
          if (uVar4 < uVar25) {
            uVar16 = local_954[uVar4];
          }
          else {
            uVar16 = 0;
          }
          if (uVar4 - 1 < uVar25) {
            uVar25 = local_954[uVar4 - 1];
          }
          else {
            uVar25 = 0;
          }
          local_954[uVar24] = (uVar25 & uVar26) >> (bVar8 & 0x1f) | (uVar16 & uVar18) << sVar3;
          uVar24 = uVar24 - 1;
          if (uVar24 == uVar21 - 1) break;
          uVar25 = local_958;
        }
      }
      uVar26 = 0;
      if (uVar21 != 0) {
        do {
          uVar27 = (ulonglong)uVar26;
          uVar26 = uVar26 + 1;
          local_954[uVar27] = 0;
        } while (uVar26 != uVar21);
      }
      local_958 = uVar15;
    }
    else {
      local_cf8 = 0;
      local_958 = 0;
      memcpy_s(local_954,0x1cc,local_cf4,0);
    }
    uVar27 = FUN_18050d070(&local_958,&local_3e8);
    bVar28 = local_958 == 0;
    lVar2 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar27 == 0) {
      uVar26 = 0;
    }
    else {
      uVar26 = (int)lVar2 + 1;
    }
    if (local_d30 < uVar26) {
      bVar8 = (char)uVar26 - (byte)local_d30;
      if ((!bVar28) || (bVar28 = true, (uVar27 & (1L << (bVar8 & 0x3f)) - 1U) != 0)) {
        bVar28 = false;
      }
      uVar27 = uVar27 >> (bVar8 & 0x3f);
    }
    local_d58 = local_d20;
    uVar26 = 0;
    if (uVar17 != 0) {
      uVar26 = local_784[0];
    }
    uVar11 = 0;
    if (1 < uVar17) {
      uVar11 = (ulonglong)local_784[1];
    }
    uVar17 = ~uVar20;
    if (uVar14 != 0) {
      uVar17 = uVar14 - 2;
    }
    uVar7 = FUN_18050ada0(uVar27 + ((uVar11 << 0x20) + (ulonglong)uVar26 << ((byte)local_d30 & 0x3f)
                                   ),uVar17,(char)local_d28[0xc2],bVar28);
  }
  else {
    bVar28 = local_d48 != 0;
LAB_18050cf6c:
    local_d58 = local_d20;
    uVar7 = FUN_18050b158(&local_788,local_d3c,(char)local_d28[0xc2],bVar28);
  }
  return uVar7;
}



/* ===== 18050cfb8 __crt_strtox::convert_hexadecimal_string_to_floating_type_common ===== */

/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(struct
   __crt_strtox::floating_point_string const & __ptr64,class __crt_strtox::floating_point_value
   const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::convert_hexadecimal_string_to_floating_type_common
          (floating_point_string *param_1,floating_point_value *param_2)

{
  floating_point_string fVar1;
  SLD_STATUS SVar2;
  ulonglong uVar3;
  floating_point_string *pfVar4;
  bool bVar5;
  int iVar6;
  floating_point_string *pfVar7;
  
  uVar3 = 0;
  pfVar4 = param_1 + 8;
  pfVar7 = param_1 + (ulonglong)*(uint *)(param_1 + 4) + 8;
  iVar6 = (-(uint)(param_2[8] != (floating_point_value)0x0) & 0x1d) + 0x17 + *(int *)param_1;
  if (pfVar4 != pfVar7) {
    do {
      if ((-(ulonglong)(param_2[8] != (floating_point_value)0x0) & 0x1fffffff000000) + 0xffffff <
          uVar3) break;
      fVar1 = *pfVar4;
      iVar6 = iVar6 + -4;
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 * 0x10 + (ulonglong)(byte)fVar1;
    } while (pfVar4 != pfVar7);
  }
  bVar5 = true;
  while ((pfVar4 != pfVar7 && (bVar5 != false))) {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    bVar5 = fVar1 == (floating_point_string)0x0;
  }
  SVar2 = FUN_18050ada0(uVar3,iVar6,CONCAT71((int7)((ulonglong)pfVar4 >> 8),param_1[0x308]),bVar5,
                        param_2);
  return SVar2;
}



/* ===== 18050d070 FUN_18050d070 ===== */

ulonglong FUN_18050d070(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte local_res8;
  uint local_res18;
  undefined8 local_238;
  ulonglong local_228;
  undefined1 local_214 [468];
  
  if ((*param_1 == 0) || (uVar4 = *param_2, uVar4 == 0)) {
    return 0;
  }
  uVar14 = *param_1 - 1;
  uVar15 = (ulonglong)uVar14;
  uVar13 = uVar4 - 1;
  if (uVar13 == 0) {
    uVar4 = param_2[1];
    if (uVar4 == 1) {
      uVar4 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      return (ulonglong)uVar4;
    }
    if (uVar14 == 0) {
      uVar13 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      uVar14 = uVar13 % uVar4;
      param_1[1] = uVar14;
      *param_1 = (uint)(uVar14 != 0);
      return (ulonglong)uVar13 / (ulonglong)uVar4;
    }
    uVar9 = 0;
    uVar16 = 0;
    uVar13 = 0;
    while (uVar14 != 0xffffffff) {
      lVar6 = uVar15 + 1;
      uVar14 = (int)uVar15 - 1;
      uVar15 = (ulonglong)uVar14;
      uVar2 = (ulonglong)param_1[lVar6] | uVar16 << 0x20;
      uVar16 = uVar2 % (ulonglong)uVar4;
      uVar13 = (uint)uVar16;
      uVar9 = (uVar9 << 0x20) + (uVar2 / uVar4 & 0xffffffff);
    }
    *param_1 = 0;
    memcpy_s(param_1 + 1,0x1cc,local_214,0);
    param_1[1] = uVar13;
    param_1[2] = 0;
    *param_1 = 1;
    return uVar9;
  }
  if (uVar14 < uVar13) {
    return 0;
  }
  lVar6 = (longlong)(int)uVar14;
  iVar10 = uVar14 - uVar13;
  lVar8 = (longlong)iVar10;
  if (lVar8 <= lVar6) {
    puVar5 = param_1 + lVar6 + 1;
    uVar12 = uVar14;
    do {
      if (*(uint *)((longlong)param_2 + (lVar8 * -4 - (longlong)param_1) + (longlong)puVar5) !=
          *puVar5) {
        if (param_1[(longlong)(int)uVar12 + 1] <= param_2[(longlong)(int)(uVar12 - iVar10) + 1])
        goto LAB_18050d1fb;
        break;
      }
      uVar12 = uVar12 - 1;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + -1;
    } while (lVar8 <= lVar6);
  }
  iVar10 = iVar10 + 1;
LAB_18050d1fb:
  if (iVar10 == 0) {
    return 0;
  }
  uVar13 = param_2[(ulonglong)uVar13 + 1];
  local_res18 = param_2[(ulonglong)(uVar4 - 2) + 1];
  iVar7 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (uVar13 == 0) {
    iVar7 = 0x20;
    local_res8 = 0;
  }
  else {
    iVar7 = 0x1f - iVar7;
    local_res8 = 0x20 - (char)iVar7;
    if (iVar7 == 0) goto LAB_18050d292;
  }
  uVar12 = local_res18 >> (local_res8 & 0x1f);
  local_res18 = local_res18 << ((byte)iVar7 & 0x1f);
  uVar13 = uVar12 | uVar13 << ((byte)iVar7 & 0x1f);
  if (2 < uVar4) {
    local_res18 = local_res18 | param_2[(ulonglong)(uVar4 - 3) + 1] >> (local_res8 & 0x1f);
  }
LAB_18050d292:
  iVar10 = iVar10 + -1;
  local_228 = 0;
  uVar9 = 0;
  if (-1 < iVar10) {
    uVar16 = (ulonglong)uVar13;
    uVar13 = iVar10 + uVar4;
    do {
      if ((uint)uVar15 < uVar13) {
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[(ulonglong)uVar13 + 1];
      }
      uVar12 = param_1[(ulonglong)(uVar13 - 2) + 1];
      uVar9 = (ulonglong)uVar12;
      local_238 = CONCAT44(uVar14,param_1[(ulonglong)(uVar13 - 1) + 1]);
      if (iVar7 != 0) {
        local_238 = (ulonglong)(uVar12 >> (local_res8 & 0x3f)) | local_238 << ((byte)iVar7 & 0x3f);
        uVar12 = uVar12 << ((byte)iVar7 & 0x1f);
        uVar9 = (ulonglong)uVar12;
        if (2 < uVar13) {
          uVar9 = (ulonglong)(uVar12 | param_1[(ulonglong)(uVar13 - 3) + 1] >> (local_res8 & 0x1f));
        }
      }
      uVar2 = local_238 / uVar16;
      local_238 = local_238 % uVar16;
      if (0xffffffff < uVar2) {
        lVar6 = uVar2 - 0xffffffff;
        uVar2 = 0xffffffff;
        local_238 = local_238 + lVar6 * uVar16;
      }
      if (local_238 < 0x100000000) {
        uVar3 = local_res18 * uVar2;
        do {
          if (uVar3 <= (local_238 << 0x20 | uVar9)) break;
          uVar2 = uVar2 - 1;
          uVar3 = uVar3 - local_res18;
          local_238 = local_238 + uVar16;
        } while (local_238 < 0x100000000);
      }
      if (uVar2 != 0) {
        uVar15 = 0;
        uVar12 = 0;
        if (uVar4 != 0) {
          puVar5 = param_2;
          do {
            puVar5 = puVar5 + 1;
            uVar15 = uVar15 + *puVar5 * uVar2;
            uVar1 = uVar12 + iVar10;
            uVar9 = uVar15 >> 0x20;
            uVar11 = (uint)uVar15;
            uVar15 = uVar9 + 1;
            if (uVar11 <= param_1[(ulonglong)uVar1 + 1]) {
              uVar15 = uVar9;
            }
            uVar12 = uVar12 + 1;
            param_1[(ulonglong)uVar1 + 1] = param_1[(ulonglong)uVar1 + 1] - uVar11;
          } while (uVar12 < uVar4);
        }
        if (uVar14 < uVar15) {
          uVar14 = 0;
          if (uVar4 != 0) {
            uVar15 = 0;
            puVar5 = param_2;
            do {
              puVar5 = puVar5 + 1;
              uVar12 = uVar14 + iVar10;
              uVar14 = uVar14 + 1;
              uVar15 = uVar15 + param_1[(ulonglong)uVar12 + 1] + (ulonglong)*puVar5;
              param_1[(ulonglong)uVar12 + 1] = (uint)uVar15;
              uVar15 = uVar15 >> 0x20;
            } while (uVar14 < uVar4);
          }
          uVar2 = uVar2 - 1;
        }
        uVar15 = (ulonglong)(uVar13 - 1);
      }
      uVar14 = (uint)uVar15;
      uVar13 = uVar13 - 1;
      uVar9 = (local_228 << 0x20) + (uVar2 & 0xffffffff);
      iVar10 = iVar10 + -1;
      local_228 = uVar9;
    } while (-1 < iVar10);
  }
  uVar14 = uVar14 + 1;
  uVar4 = uVar14;
  if (uVar14 < *param_1) {
    do {
      uVar15 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_1[uVar15 + 1] = 0;
    } while (uVar4 < *param_1);
  }
  *param_1 = uVar14;
  while ((uVar14 != 0 && (uVar14 = uVar14 - 1, param_1[(ulonglong)uVar14 + 1] == 0))) {
    *param_1 = uVar14;
  }
  return uVar9;
}



/* ===== 18050d4fc FUN_18050d4fc ===== */

char FUN_18050d4fc(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 < 6) {
    if (iVar2 != 5) {
      if ((iVar2 == 0) || (iVar2 == 1)) {
LAB_18050d55e:
        return (*(char *)(param_1 + 0x2c) != '\0') + '\x01';
      }
      if ((iVar2 != 2) && (iVar2 = iVar2 + -3, iVar2 != 0)) goto LAB_18050d556;
    }
LAB_18050d51c:
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < 6) {
      if (iVar2 != 5) {
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            return '\x01';
          }
          if (iVar2 == 2) {
            return '\x02';
          }
          iVar2 = iVar2 + -3;
          goto LAB_18050d537;
        }
        goto LAB_18050d586;
      }
    }
    else if ((iVar2 != 6) && (iVar2 != 7)) {
      iVar2 = iVar2 + -9;
LAB_18050d537:
      if (iVar2 == 0) goto LAB_18050d586;
      if (iVar2 != 1) {
        return '\0';
      }
    }
    cVar1 = '\b';
  }
  else {
    if (iVar2 == 6) goto LAB_18050d51c;
    if (iVar2 != 7) {
      iVar2 = iVar2 + -8;
      if (iVar2 == 0) goto LAB_18050d55e;
LAB_18050d556:
      if (iVar2 != 1) {
        return '\0';
      }
      goto LAB_18050d51c;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        return '\b';
      }
      if (iVar2 == 8) {
        return '\b';
      }
      return '\0';
    }
LAB_18050d586:
    cVar1 = '\x04';
  }
  return cVar1;
}



/* ===== 18050d5b0 FUN_18050d5b0 ===== */

ulonglong FUN_18050d5b0(byte *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  
  if (*(_iobuf **)(param_1 + 8) != (_iobuf *)0x0) {
    bVar2 = __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required
                      (*(_iobuf **)(param_1 + 8));
    if (!bVar2) {
      return 0xffffffffffffffff;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      do {
        cVar3 = FUN_18050a9d0(param_1 + 0x18);
        if (cVar3 == '\0') break;
        cVar3 = FUN_18050e330(param_1);
      } while (cVar3 != '\0');
      uVar1 = *(uint *)(param_1 + 0x80);
      uVar7 = (ulonglong)uVar1;
      if ((*(longlong *)(param_1 + 0x80) == 0) && (*(int *)(param_1 + 0x2c) != 1)) {
        iVar4 = _fgetc_nolock(*(undefined8 *)(param_1 + 8));
        uVar7 = 0xffffffffffffffff;
        if (iVar4 != -1) {
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          FUN_180511948(iVar4,*(undefined8 *)(param_1 + 8));
          uVar7 = (ulonglong)uVar1;
        }
      }
      if (((*param_1 & 1) != 0) && (iVar4 = *(int *)(param_1 + 0x28), iVar4 != 0)) {
        piVar6 = (int *)FUN_18051bfb0();
        *piVar6 = iVar4;
        FUN_180527740();
      }
      return uVar7 & 0xffffffff;
    }
  }
  puVar5 = (undefined4 *)FUN_18051bfb0();
  *puVar5 = 0x16;
  FUN_180527740();
  return 0xffffffffffffffff;
}



/* ===== 18050d678 FUN_18050d678 ===== */

undefined4 FUN_18050d678(byte *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if ((*(ulonglong *)(param_1 + 0x18) == 0) ||
     (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x18))) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    uVar7 = 0xffffffff;
  }
  else {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      puVar3 = (undefined4 *)FUN_18051bfb0();
      uVar7 = 0xffffffff;
      *puVar3 = 0x16;
    }
    else {
      do {
        cVar2 = FUN_18050a9d0(param_1 + 0x20);
        if (cVar2 == '\0') break;
        cVar2 = FUN_18050e3dc(param_1);
      } while (cVar2 != '\0');
      uVar7 = *(undefined4 *)(param_1 + 0x88);
      if ((*(longlong *)(param_1 + 0x88) == 0) && (*(int *)(param_1 + 0x34) != 1)) {
        pbVar5 = *(byte **)(param_1 + 0x18);
        if (pbVar5 == *(byte **)(param_1 + 0x10)) {
          uVar6 = 0xffffffff;
          uVar7 = 0xffffffff;
        }
        else {
          uVar6 = (uint)*pbVar5;
          pbVar5 = pbVar5 + 1;
          *(byte **)(param_1 + 0x18) = pbVar5;
        }
        if ((pbVar5 != *(byte **)(param_1 + 8)) &&
           ((pbVar5 != *(byte **)(param_1 + 0x10) || (uVar6 != 0xffffffff)))) {
          *(byte **)(param_1 + 0x18) = pbVar5 + -1;
        }
      }
      if (((*param_1 & 1) == 0) || (iVar1 = *(int *)(param_1 + 0x30), iVar1 == 0)) {
        return uVar7;
      }
      piVar4 = (int *)FUN_18051bfb0();
      *piVar4 = iVar1;
    }
    FUN_180527740();
  }
  return uVar7;
}



/* ===== 18050d76c FUN_18050d76c ===== */

undefined4 FUN_18050d76c(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    puVar5 = (undefined4 *)FUN_18051bfb0();
    uVar7 = 0xffffffff;
    *puVar5 = 0x16;
  }
  else {
    do {
      cVar3 = FUN_18050ab98(param_1 + 0x18);
      if (cVar3 == '\0') break;
      cVar3 = FUN_18050e494(param_1);
    } while (cVar3 != '\0');
    uVar1 = *(undefined4 *)(param_1 + 0x68);
    uVar7 = uVar1;
    if ((*(longlong *)(param_1 + 0x68) == 0) && (*(int *)(param_1 + 0x2c) != 1)) {
      sVar4 = thunk_FUN_18052a138(*(undefined8 *)(param_1 + 8));
      uVar7 = 0xffffffff;
      if (sVar4 != -1) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        FUN_18052a454(sVar4,*(undefined8 *)(param_1 + 8));
        uVar7 = uVar1;
      }
    }
    if ((*param_1 & 1) == 0) {
      return uVar7;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == 0) {
      return uVar7;
    }
    piVar6 = (int *)FUN_18051bfb0();
    *piVar6 = iVar2;
  }
  FUN_180527740();
  return uVar7;
}



/* ===== 18050d828 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process ===== */

/* Library Function - Single Match
    public: int __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process(void) __ptr64
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process(input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  
  if ((*(ulonglong *)(this + 0x18) == 0) ||
     (*(ulonglong *)(this + 0x10) < *(ulonglong *)(this + 0x18))) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x16;
    FUN_180527740();
    return -1;
  }
  if (*(longlong *)(this + 0x28) == 0) {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    iVar8 = -1;
    *puVar4 = 0x16;
    goto LAB_18050d900;
  }
  do {
    cVar3 = FUN_18050ab98(this + 0x20);
    if (cVar3 == '\0') break;
    bVar2 = process_state(this);
  } while (bVar2);
  iVar8 = *(int *)(this + 0x70);
  if ((*(longlong *)(this + 0x70) == 0) && (*(int *)(this + 0x34) != 1)) {
    psVar6 = *(short **)(this + 0x18);
    if (psVar6 == *(short **)(this + 0x10)) {
      sVar7 = -1;
LAB_18050d8d1:
      iVar8 = -1;
    }
    else {
      sVar7 = *psVar6;
      psVar6 = psVar6 + 1;
      *(short **)(this + 0x18) = psVar6;
      if (sVar7 == -1) goto LAB_18050d8d1;
    }
    if ((psVar6 != *(short **)(this + 8)) && ((psVar6 != *(short **)(this + 0x10) || (sVar7 != -1)))
       ) {
      *(short **)(this + 0x18) = psVar6 + -1;
    }
  }
  if (((byte)*this & 1) == 0) {
    return iVar8;
  }
  iVar1 = *(int *)(this + 0x30);
  if (iVar1 == 0) {
    return iVar8;
  }
  piVar5 = (int *)FUN_18051bfb0();
  *piVar5 = iVar1;
LAB_18050d900:
  FUN_180527740();
  return iVar8;
}



/* ===== 18050d914 __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::process_conversion_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_conversion_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::
process_conversion_specifier
          (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *this)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x48);
  if (iVar1 < 6) {
    if (iVar1 != 5) {
      if (iVar1 == 0) {
        lVar4 = FUN_18050d4fc(this + 0x18);
        if (lVar4 != 1) {
          if (lVar4 != 2) {
            return false;
          }
          uVar6 = 0;
          goto LAB_18050d98e;
        }
        uVar6 = 0;
        goto LAB_18050d99d;
      }
      if (iVar1 == 1) {
        bVar3 = process_string_specifier(this,1);
        return bVar3;
      }
      if (iVar1 == 2) {
        uVar5 = 0;
      }
      else {
        if (iVar1 != 3) {
          if (iVar1 != 4) {
            return false;
          }
          uVar5 = 8;
          goto LAB_18050da1b;
        }
        uVar5 = 10;
      }
      bVar3 = true;
      goto LAB_18050da1e;
    }
    uVar5 = 10;
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 == 7) {
        bVar3 = process_floating_point_specifier(this);
        return bVar3;
      }
      if (iVar1 != 8) {
        if (iVar1 != 9) {
          return false;
        }
        if (this[0x32] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0)
        {
          uVar2 = FUN_18050f754(this,*(undefined8 *)(this + 0x10));
          return (bool)uVar2;
        }
        return true;
      }
      lVar4 = FUN_18050d4fc(this + 0x18);
      if (lVar4 != 1) {
        if (lVar4 != 2) {
          return false;
        }
        uVar6 = 8;
LAB_18050d98e:
        uVar2 = FUN_180509d50(this,uVar6,0);
        return (bool)uVar2;
      }
      uVar6 = 8;
LAB_18050d99d:
      uVar2 = FUN_180509648(this,uVar6,0);
      return (bool)uVar2;
    }
    uVar5 = 0x10;
  }
LAB_18050da1b:
  bVar3 = false;
LAB_18050da1e:
  bVar3 = process_integer_specifier(this,uVar5,bVar3);
  return bVar3;
}



/* ===== 18050da30 __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_conversion_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_conversion_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_conversion_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 6) {
    if (iVar1 != 5) {
      if (iVar1 == 0) {
        lVar4 = FUN_18050d4fc(this + 0x20);
        if (lVar4 != 1) {
          if (lVar4 != 2) {
            return false;
          }
          uVar6 = 0;
          goto LAB_18050daaa;
        }
        uVar6 = 0;
        goto LAB_18050dab9;
      }
      if (iVar1 == 1) {
        bVar3 = process_string_specifier(this,1);
        return bVar3;
      }
      if (iVar1 == 2) {
        uVar5 = 0;
      }
      else {
        if (iVar1 != 3) {
          if (iVar1 != 4) {
            return false;
          }
          uVar5 = 8;
          goto LAB_18050db3b;
        }
        uVar5 = 10;
      }
      bVar3 = true;
      goto LAB_18050db3e;
    }
    uVar5 = 10;
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 == 7) {
        bVar3 = process_floating_point_specifier(this);
        return bVar3;
      }
      if (iVar1 != 8) {
        if (iVar1 != 9) {
          return false;
        }
        if (this[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
        {
          uVar2 = FUN_18050f7c8(this,*(longlong *)(this + 0x18) - *(longlong *)(this + 8));
          return (bool)uVar2;
        }
        return true;
      }
      lVar4 = FUN_18050d4fc(this + 0x20);
      if (lVar4 != 1) {
        if (lVar4 != 2) {
          return false;
        }
        uVar6 = 8;
LAB_18050daaa:
        uVar2 = FUN_180509f1c(this,uVar6,0);
        return (bool)uVar2;
      }
      uVar6 = 8;
LAB_18050dab9:
      uVar2 = FUN_1805097d8(this,uVar6,0);
      return (bool)uVar2;
    }
    uVar5 = 0x10;
  }
LAB_18050db3b:
  bVar3 = false;
LAB_18050db3e:
  bVar3 = process_integer_specifier(this,uVar5,bVar3);
  return bVar3;
}



/* ===== 18050db50 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::process_conversion_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::stream_input_adapter<wchar_t> >::process_conversion_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
process_conversion_specifier
          (input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_> *this)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x48);
  if (iVar1 < 6) {
    if (iVar1 != 5) {
      if (iVar1 == 0) {
        lVar4 = FUN_18050d4fc(this + 0x18);
        if (lVar4 != 1) {
          if (lVar4 != 2) {
            return false;
          }
          uVar6 = 0;
          goto LAB_18050dbca;
        }
        uVar6 = 0;
        goto LAB_18050dbd9;
      }
      if (iVar1 == 1) {
        bVar3 = process_string_specifier(this,1);
        return bVar3;
      }
      if (iVar1 == 2) {
        uVar5 = 0;
      }
      else {
        if (iVar1 != 3) {
          if (iVar1 != 4) {
            return false;
          }
          uVar5 = 8;
          goto LAB_18050dc57;
        }
        uVar5 = 10;
      }
      bVar3 = true;
      goto LAB_18050dc5a;
    }
    uVar5 = 10;
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 == 7) {
        bVar3 = process_floating_point_specifier(this);
        return bVar3;
      }
      if (iVar1 != 8) {
        if (iVar1 != 9) {
          return false;
        }
        if (this[0x34] ==
            (input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>)0x0) {
          uVar2 = FUN_18050f844(this,*(undefined8 *)(this + 0x10));
          return (bool)uVar2;
        }
        return true;
      }
      lVar4 = FUN_18050d4fc(this + 0x18);
      if (lVar4 != 1) {
        if (lVar4 != 2) {
          return false;
        }
        uVar6 = 8;
LAB_18050dbca:
        uVar2 = FUN_18050a0fc(this,uVar6,0);
        return (bool)uVar2;
      }
      uVar6 = 8;
LAB_18050dbd9:
      uVar2 = FUN_18050997c(this,uVar6,0);
      return (bool)uVar2;
    }
    uVar5 = 0x10;
  }
LAB_18050dc57:
  bVar3 = false;
LAB_18050dc5a:
  bVar3 = process_integer_specifier(this,uVar5,bVar3);
  return bVar3;
}



/* ===== 18050dc6c __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_conversion_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process_conversion_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_conversion_specifier
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(this + 0x50);
  if (iVar1 < 6) {
    if (iVar1 != 5) {
      if (iVar1 == 0) {
        lVar4 = FUN_18050d4fc(this + 0x20);
        if (lVar4 != 1) {
          if (lVar4 != 2) {
            return false;
          }
          uVar6 = 0;
          goto LAB_18050dce6;
        }
        uVar6 = 0;
        goto LAB_18050dcf5;
      }
      if (iVar1 == 1) {
        bVar3 = process_string_specifier(this,1);
        return bVar3;
      }
      if (iVar1 == 2) {
        uVar5 = 0;
      }
      else {
        if (iVar1 != 3) {
          if (iVar1 != 4) {
            return false;
          }
          uVar5 = 8;
          goto LAB_18050dd7a;
        }
        uVar5 = 10;
      }
      bVar3 = true;
      goto LAB_18050dd7d;
    }
    uVar5 = 10;
  }
  else {
    if (iVar1 != 6) {
      if (iVar1 == 7) {
        bVar3 = process_floating_point_specifier(this);
        return bVar3;
      }
      if (iVar1 != 8) {
        if (iVar1 != 9) {
          return false;
        }
        if (this[0x3c] ==
            (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) {
          uVar2 = FUN_18050f8b8(this,*(longlong *)(this + 0x18) - *(longlong *)(this + 8) >> 1);
          return (bool)uVar2;
        }
        return true;
      }
      lVar4 = FUN_18050d4fc(this + 0x20);
      if (lVar4 != 1) {
        if (lVar4 != 2) {
          return false;
        }
        uVar6 = 8;
LAB_18050dce6:
        uVar2 = FUN_18050a2b8(this,uVar6,0);
        return (bool)uVar2;
      }
      uVar6 = 8;
LAB_18050dcf5:
      uVar2 = FUN_180509b74(this,uVar6,0);
      return (bool)uVar2;
    }
    uVar5 = 0x10;
  }
LAB_18050dd7a:
  bVar3 = false;
LAB_18050dd7d:
  bVar3 = process_integer_specifier(this,uVar5,bVar3);
  return bVar3;
}



/* ===== 18050dd90 __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::process_floating_point_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_floating_point_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::
process_floating_point_specifier
          (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *this)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = skip_whitespace<__crt_stdio_input::stream_input_adapter,char>
                    ((stream_input_adapter<char> *)(this + 8),
                     *(__crt_locale_pointers **)(this + 0x70));
  if (iVar2 != -1) {
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    FUN_180511948(iVar2,*(undefined8 *)(this + 8));
  }
  lVar3 = FUN_18050d4fc(this + 0x18);
  if (lVar3 == 4) {
    uVar1 = FUN_18050913c(this);
  }
  else if (lVar3 == 8) {
    uVar1 = FUN_1805093b4(this);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}



/* ===== 18050ddf4 __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_floating_point_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_floating_point_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_18050a514(this + 8,*(undefined8 *)(this + 0x78));
  lVar3 = *(longlong *)(this + 0x18);
  if ((lVar3 != *(longlong *)(this + 8)) && ((lVar3 != *(longlong *)(this + 0x10) || (iVar2 != -1)))
     ) {
    *(longlong *)(this + 0x18) = lVar3 + -1;
  }
  lVar3 = FUN_18050d4fc(this + 0x20);
  if (lVar3 == 4) {
    uVar1 = FUN_1805091d8(this);
  }
  else if (lVar3 == 8) {
    uVar1 = FUN_180509458(this);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}



/* ===== 18050de64 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::process_floating_point_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::stream_input_adapter<wchar_t> >::process_floating_point_specifier(void)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
process_floating_point_specifier
          (input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_> *this)

{
  ushort uVar1;
  undefined1 extraout_AL;
  undefined1 uVar2;
  undefined1 extraout_AH;
  undefined6 extraout_var;
  
  uVar1 = skip_whitespace<__crt_stdio_input::stream_input_adapter,wchar_t>
                    ((stream_input_adapter<wchar_t> *)(this + 8),
                     *(__crt_locale_pointers **)(this + 0x58));
  if (uVar1 != 0xffff) {
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    FUN_18052a454(uVar1,*(undefined8 *)(this + 8));
  }
  FUN_18050d4fc(this + 0x18);
  if (CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) == 4) {
    uVar2 = FUN_18050927c(this);
  }
  else if (CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) == 8) {
    uVar2 = FUN_180509500(this);
  }
  else {
    uVar2 = false;
  }
  return (bool)uVar2;
}



/* ===== 18050ded0 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_floating_point_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process_floating_point_specifier(void)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_floating_point_specifier
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this)

{
  undefined1 uVar1;
  short sVar2;
  longlong lVar3;
  
  sVar2 = FUN_18050a568(this + 8,*(undefined8 *)(this + 0x60));
  lVar3 = *(longlong *)(this + 0x18);
  if ((lVar3 != *(longlong *)(this + 8)) && ((lVar3 != *(longlong *)(this + 0x10) || (sVar2 != -1)))
     ) {
    *(longlong *)(this + 0x18) = lVar3 + -2;
  }
  lVar3 = FUN_18050d4fc(this + 0x20);
  if (lVar3 == 4) {
    uVar1 = FUN_180509318(this);
  }
  else if (lVar3 == 8) {
    uVar1 = FUN_1805095a4(this);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}



/* ===== 18050df48 __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::process_integer_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_integer_specifier(unsigned int,bool)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::
process_integer_specifier
          (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *this,uint param_1,
          bool param_2)

{
  stream_input_adapter<char> *psVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  char local_res8 [8];
  stream_input_adapter<char> *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  psVar1 = (stream_input_adapter<char> *)(this + 8);
  iVar3 = skip_whitespace<__crt_stdio_input::stream_input_adapter,char>
                    (psVar1,*(__crt_locale_pointers **)(this + 0x70));
  if (iVar3 != -1) {
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    FUN_180511948(iVar3,*(undefined8 *)psVar1);
  }
  local_20 = *(undefined8 *)(this + 0x38);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  local_28 = psVar1;
  uVar4 = FUN_180507714(*(undefined8 *)(this + 0x70),&local_28,param_1,param_2);
  if (local_res8[0] == '\0') {
    uVar2 = 0;
  }
  else if (this[0x32] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0)
  {
    uVar2 = FUN_18050f754(this,uVar4);
  }
  else {
    uVar2 = 1;
  }
  return (bool)uVar2;
}



/* ===== 18050dff4 __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_integer_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_integer_specifier(unsigned int,bool)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_integer_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,uint param_1,
          bool param_2)

{
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  char local_res8 [8];
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  piVar1 = this + 8;
  iVar4 = FUN_18050a514(piVar1,*(undefined8 *)(this + 0x78));
  lVar2 = *(longlong *)(this + 0x18);
  if ((lVar2 != *(longlong *)piVar1) && ((lVar2 != *(longlong *)(this + 0x10) || (iVar4 != -1)))) {
    *(longlong *)(this + 0x18) = lVar2 + -1;
  }
  local_20 = *(undefined8 *)(this + 0x40);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  local_28 = piVar1;
  uVar5 = FUN_180508634(*(undefined8 *)(this + 0x78),&local_28,param_1,param_2);
  if (local_res8[0] == '\0') {
    uVar3 = 0;
  }
  else if (this[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0)
  {
    uVar3 = FUN_18050f7c8(this,uVar5);
  }
  else {
    uVar3 = 1;
  }
  return (bool)uVar3;
}



/* ===== 18050e0ac __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::process_integer_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::stream_input_adapter<wchar_t> >::process_integer_specifier(unsigned int,bool)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
process_integer_specifier
          (input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_> *this,
          uint param_1,bool param_2)

{
  stream_input_adapter<wchar_t> *psVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  char local_res8 [8];
  stream_input_adapter<wchar_t> *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  psVar1 = (stream_input_adapter<wchar_t> *)(this + 8);
  uVar3 = skip_whitespace<__crt_stdio_input::stream_input_adapter,wchar_t>
                    (psVar1,*(__crt_locale_pointers **)(this + 0x58));
  if (uVar3 != 0xffff) {
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    FUN_18052a454(uVar3,*(undefined8 *)psVar1);
  }
  local_20 = *(undefined8 *)(this + 0x38);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  local_28 = psVar1;
  uVar4 = FUN_180508100(*(undefined8 *)(this + 0x58),&local_28,param_1,param_2);
  if (local_res8[0] == '\0') {
    uVar2 = 0;
  }
  else if (this[0x34] ==
           (input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>)0x0) {
    uVar2 = FUN_18050f844(this,uVar4);
  }
  else {
    uVar2 = 1;
  }
  return (bool)uVar2;
}



/* ===== 18050e160 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_integer_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process_integer_specifier(unsigned int,bool)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_integer_specifier
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
          uint param_1,bool param_2)

{
  input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  short sVar4;
  undefined8 uVar5;
  char local_res8 [8];
  input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *local_28;
  undefined8 local_20;
  undefined8 local_18;
  char *local_10;
  
  piVar1 = this + 8;
  sVar4 = FUN_18050a568(piVar1,*(undefined8 *)(this + 0x60));
  lVar2 = *(longlong *)(this + 0x18);
  if ((lVar2 != *(longlong *)piVar1) && ((lVar2 != *(longlong *)(this + 0x10) || (sVar4 != -1)))) {
    *(longlong *)(this + 0x18) = lVar2 + -2;
  }
  local_20 = *(undefined8 *)(this + 0x40);
  local_10 = local_res8;
  local_18 = 0;
  local_res8[0] = '\x01';
  local_28 = piVar1;
  uVar5 = FUN_18050903c(*(undefined8 *)(this + 0x60),&local_28,param_1,param_2);
  if (local_res8[0] == '\0') {
    uVar3 = 0;
  }
  else if (this[0x3c] ==
           (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) {
    uVar3 = FUN_18050f8b8(this,uVar5);
  }
  else {
    uVar3 = 1;
  }
  return (bool)uVar3;
}



/* ===== 18050e220 FUN_18050e220 ===== */

undefined8 FUN_18050e220(longlong param_1,byte param_2)

{
  longlong *plVar1;
  uint uVar2;
  ushort *puVar3;
  
  puVar3 = __pctype_func();
  if ((short)puVar3[param_2] < 0) {
    uVar2 = _fgetc_nolock(*(undefined8 *)(param_1 + 8));
    plVar1 = (longlong *)(param_1 + 0x10);
    if (uVar2 != 0xffffffff) {
      *plVar1 = *plVar1 + 1;
    }
    if (uVar2 != *(byte *)(param_1 + 0x31)) {
      if (uVar2 != 0xffffffff) {
        *plVar1 = *plVar1 + -1;
        FUN_180511948(uVar2,*(undefined8 *)(param_1 + 8));
      }
      if ((char)param_2 != -1) {
        *plVar1 = *plVar1 + -1;
        FUN_180511948((int)(char)param_2,*(undefined8 *)(param_1 + 8));
      }
      return 0;
    }
  }
  return 1;
}



/* ===== 18050e2a8 FUN_18050e2a8 ===== */

undefined8 FUN_18050e2a8(longlong param_1,byte param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  uint uVar3;
  byte *pbVar4;
  
  puVar2 = __pctype_func();
  if (-1 < (short)puVar2[param_2]) {
    return 1;
  }
  pbVar4 = *(byte **)(param_1 + 0x18);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar4 == pbVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0x18) = pbVar4;
  }
  if (uVar3 == *(byte *)(param_1 + 0x39)) {
    return 1;
  }
  if (pbVar4 == *(byte **)(param_1 + 8)) {
LAB_18050e300:
    if (pbVar4 == *(byte **)(param_1 + 8)) {
      return 0;
    }
    if (pbVar4 != pbVar1) goto LAB_18050e314;
  }
  else if ((pbVar4 != pbVar1) || (uVar3 != 0xffffffff)) {
    pbVar4 = pbVar4 + -1;
    *(byte **)(param_1 + 0x18) = pbVar4;
    goto LAB_18050e300;
  }
  if (param_2 == 0xff) {
    return 0;
  }
LAB_18050e314:
  *(byte **)(param_1 + 0x18) = pbVar4 + -1;
  return 0;
}



/* ===== 18050e330 FUN_18050e330 ===== */

bool FUN_18050e330(input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 == 2) {
    iVar4 = __crt_stdio_input::skip_whitespace<__crt_stdio_input::stream_input_adapter,char>
                      ((stream_input_adapter<char> *)(param_1 + 8),
                       *(__crt_locale_pointers **)(param_1 + 0x70));
    if (iVar4 != -1) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      FUN_180511948(iVar4,*(undefined8 *)(param_1 + 8));
    }
    bVar1 = true;
  }
  else {
    if (iVar4 == 3) {
      uVar3 = _fgetc_nolock(*(undefined8 *)(param_1 + 8));
      if (uVar3 != 0xffffffff) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        if (uVar3 == (byte)param_1[0x30]) {
          uVar2 = FUN_18050e220(param_1,(char)uVar3);
          return (bool)uVar2;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        FUN_180511948(uVar3,*(undefined8 *)(param_1 + 8));
      }
    }
    else if (iVar4 == 4) {
      bVar1 = __crt_stdio_input::
              input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::
              process_conversion_specifier(param_1);
      if (((bVar1) && (*(int *)(param_1 + 0x48) != 9)) &&
         (param_1[0x32] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0
         )) {
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 1;
      }
      return bVar1;
    }
    bVar1 = false;
  }
  return bVar1;
}



/* ===== 18050e3dc FUN_18050e3dc ===== */

bool FUN_18050e3dc(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *param_1)

{
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> iVar1;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *piVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 == 2) {
    iVar6 = FUN_18050a514(param_1 + 8,*(undefined8 *)(param_1 + 0x78));
    lVar3 = *(longlong *)(param_1 + 0x18);
    if ((lVar3 != *(longlong *)(param_1 + 8)) &&
       ((lVar3 != *(longlong *)(param_1 + 0x10) || (iVar6 != -1)))) {
      *(longlong *)(param_1 + 0x18) = lVar3 + -1;
    }
    bVar4 = true;
  }
  else {
    if (iVar6 == 3) {
      piVar2 = *(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> **)
                (param_1 + 0x18);
      if (piVar2 != *(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> **)
                     (param_1 + 0x10)) {
        iVar1 = *piVar2;
        *(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> **)(param_1 + 0x18) =
             piVar2 + 1;
        if (iVar1 == param_1[0x38]) {
          uVar5 = FUN_18050e2a8(param_1);
          return (bool)uVar5;
        }
        if (piVar2 + 1 !=
            *(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> **)(param_1 + 8))
        {
          *(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> **)(param_1 + 0x18)
               = piVar2;
        }
      }
    }
    else if (iVar6 == 4) {
      bVar4 = __crt_stdio_input::
              input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
              process_conversion_specifier(param_1);
      if (((bVar4) && (*(int *)(param_1 + 0x50) != 9)) &&
         (param_1[0x3a] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0
         )) {
        *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 1;
      }
      return bVar4;
    }
    bVar4 = false;
  }
  return bVar4;
}



/* ===== 18050e494 FUN_18050e494 ===== */

ulonglong FUN_18050e494(input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>
                        *param_1)

{
  int iVar1;
  bool bVar2;
  ushort uVar3;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined7 uVar5;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 2) {
    uVar3 = __crt_stdio_input::skip_whitespace<__crt_stdio_input::stream_input_adapter,wchar_t>
                      ((stream_input_adapter<wchar_t> *)(param_1 + 8),
                       *(__crt_locale_pointers **)(param_1 + 0x58));
    if (uVar3 != 0xffff) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
      FUN_18052a454(uVar3,*(undefined8 *)(param_1 + 8));
    }
    uVar4 = 1;
  }
  else {
    if (iVar1 == 3) {
      in_RAX = thunk_FUN_18052a138(*(undefined8 *)(param_1 + 8));
      if ((short)in_RAX != -1) {
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        if ((short)in_RAX == *(short *)(param_1 + 0x30)) {
          return 1;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        in_RAX = FUN_18052a454(in_RAX & 0xffff,*(undefined8 *)(param_1 + 8));
      }
    }
    else if (iVar1 == 4) {
      bVar2 = __crt_stdio_input::
              input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
              process_conversion_specifier(param_1);
      uVar5 = extraout_var;
      if (((bVar2) && (*(int *)(param_1 + 0x48) != 9)) &&
         (param_1[0x34] ==
          (input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>)0x0)) {
        uVar5 = 0;
        *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 1;
      }
      return CONCAT71(uVar5,bVar2);
    }
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  return uVar4;
}



/* ===== 18050e550 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_state ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process_state(void) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_state(input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  bool bVar4;
  short sVar5;
  
  iVar1 = *(int *)(this + 0x34);
  if (iVar1 == 2) {
    sVar5 = FUN_18050a568(this + 8,*(undefined8 *)(this + 0x60));
    lVar3 = *(longlong *)(this + 0x18);
    if ((lVar3 != *(longlong *)(this + 8)) &&
       ((lVar3 != *(longlong *)(this + 0x10) || (sVar5 != -1)))) {
      *(longlong *)(this + 0x18) = lVar3 + -2;
    }
LAB_18050e600:
    bVar4 = true;
  }
  else {
    if (iVar1 == 3) {
      psVar2 = *(short **)(this + 0x18);
      if (psVar2 != *(short **)(this + 0x10)) {
        sVar5 = *psVar2;
        *(short **)(this + 0x18) = psVar2 + 1;
        if (sVar5 != -1) {
          if (sVar5 == *(short *)(this + 0x38)) goto LAB_18050e600;
          if (psVar2 + 1 != *(short **)(this + 8)) {
            *(short **)(this + 0x18) = psVar2;
          }
        }
      }
    }
    else if (iVar1 == 4) {
      bVar4 = process_conversion_specifier(this);
      if (((bVar4) && (*(int *)(this + 0x50) != 9)) &&
         (this[0x3c] ==
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0)) {
        *(longlong *)(this + 0x70) = *(longlong *)(this + 0x70) + 1;
      }
      return bVar4;
    }
    bVar4 = false;
  }
  return bVar4;
}



/* ===== 18050e610 __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::process_string_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::
process_string_specifier
          (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *this,
          conversion_mode param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 1) {
    iVar2 = skip_whitespace<__crt_stdio_input::stream_input_adapter,char>
                      ((stream_input_adapter<char> *)(this + 8),
                       *(__crt_locale_pointers **)(this + 0x70));
    if (iVar2 != -1) {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
      FUN_180511948(iVar2,*(undefined8 *)(this + 8));
    }
  }
  lVar3 = FUN_18050d4fc(this + 0x18);
  if (lVar3 == 1) {
    uVar1 = FUN_180509648(this,param_1,0);
  }
  else if (lVar3 == 2) {
    uVar1 = FUN_180509d50(this,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}



/* ===== 18050e690 __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_string_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
process_string_specifier
          (input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
          conversion_mode param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 1) {
    iVar2 = FUN_18050a514(this + 8,*(undefined8 *)(this + 0x78));
    lVar3 = *(longlong *)(this + 0x18);
    if ((lVar3 != *(longlong *)(this + 8)) &&
       ((lVar3 != *(longlong *)(this + 0x10) || (iVar2 != -1)))) {
      *(longlong *)(this + 0x18) = lVar3 + -1;
    }
  }
  lVar3 = FUN_18050d4fc(this + 0x20);
  if (lVar3 == 1) {
    uVar1 = FUN_1805097d8(this,param_1,0);
  }
  else if (lVar3 == 2) {
    uVar1 = FUN_180509f1c(this,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}



/* ===== 18050e71c __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::process_string_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::stream_input_adapter<wchar_t> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
process_string_specifier
          (input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_> *this,
          conversion_mode param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  longlong lVar3;
  
  if (param_1 == 1) {
    uVar2 = skip_whitespace<__crt_stdio_input::stream_input_adapter,wchar_t>
                      ((stream_input_adapter<wchar_t> *)(this + 8),
                       *(__crt_locale_pointers **)(this + 0x58));
    if (uVar2 != 0xffff) {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
      FUN_18052a454(uVar2,*(undefined8 *)(this + 8));
    }
  }
  lVar3 = FUN_18050d4fc(this + 0x18);
  if (lVar3 == 1) {
    uVar1 = FUN_18050997c(this,param_1,0);
  }
  else if (lVar3 == 2) {
    uVar1 = FUN_18050a0fc(this,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}



/* ===== 18050e7a4 __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_string_specifier ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode) __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_string_specifier
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
          conversion_mode param_1)

{
  undefined1 uVar1;
  short sVar2;
  longlong lVar3;
  
  if (param_1 == 1) {
    sVar2 = FUN_18050a568(this + 8,*(undefined8 *)(this + 0x60));
    lVar3 = *(longlong *)(this + 0x18);
    if ((lVar3 != *(longlong *)(this + 8)) &&
       ((lVar3 != *(longlong *)(this + 0x10) || (sVar2 != -1)))) {
      *(longlong *)(this + 0x18) = lVar3 + -2;
    }
  }
  lVar3 = FUN_18050d4fc(this + 0x20);
  if (lVar3 == 1) {
    uVar1 = FUN_180509b74(this,param_1,0);
  }
  else if (lVar3 == 2) {
    uVar1 = FUN_18050a2b8(this,param_1,0);
  }
  else {
    uVar1 = 0;
  }
  return (bool)uVar1;
}



/* ===== 18050e834 FUN_18050e834 ===== */

undefined8 FUN_18050e834(longlong param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  pbVar3 = *(byte **)(param_1 + 8);
  bVar1 = *pbVar3;
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    else if (bVar1 < 0x4a) {
      if (bVar1 == 0x49) {
LAB_18050e96e:
        *(undefined4 *)(param_1 + 0x30) = 2;
      }
      else {
        if (bVar1 != 0x41) {
          if (bVar1 == 0x43) {
LAB_18050e8ad:
            pbVar4 = (byte *)0x0;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              *(undefined8 *)(param_1 + 0x20) = 1;
            }
            iVar2 = *(int *)(param_1 + 0x28);
            if (iVar2 == 2) {
              *(undefined1 *)(param_1 + 0x2c) = 0;
            }
            else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
              *(undefined1 *)(param_1 + 0x2c) = 1;
            }
            *(undefined4 *)(param_1 + 0x30) = 0;
            *(byte **)(param_1 + 8) = pbVar3 + 1;
            goto LAB_18050e9fa;
          }
          if (((bVar1 != 0x45) && (bVar1 != 0x46)) && (bVar1 != 0x47)) goto LAB_18050e991;
        }
LAB_18050e87c:
        *(undefined4 *)(param_1 + 0x30) = 7;
      }
    }
    else {
      if (bVar1 != 0x53) {
        if (bVar1 == 0x58) goto LAB_18050e9eb;
        if (bVar1 == 0x5b) {
          iVar2 = *(int *)(param_1 + 0x28);
          if (iVar2 == 2) {
            *(undefined1 *)(param_1 + 0x2c) = 0;
          }
          else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
            *(undefined1 *)(param_1 + 0x2c) = 1;
          }
          *(undefined4 *)(param_1 + 0x30) = 8;
          *(byte **)(param_1 + 8) = pbVar3 + 1;
          uVar5 = FUN_18050f0f0(param_1);
          return uVar5;
        }
        if (bVar1 != 0x61) {
          if (bVar1 != 99) goto LAB_18050e991;
          goto LAB_18050e8ad;
        }
        goto LAB_18050e87c;
      }
LAB_18050e9b9:
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  else if (bVar1 < 0x70) {
    if (bVar1 == 0x6f) {
      *(undefined4 *)(param_1 + 0x30) = 4;
    }
    else {
      if (((bVar1 == 0x65) || (bVar1 == 0x66)) || (bVar1 == 0x67)) goto LAB_18050e87c;
      if (bVar1 == 0x69) goto LAB_18050e96e;
      if (bVar1 != 0x6e) {
LAB_18050e991:
        *(undefined8 *)(param_1 + 0x10) = 0x16;
        *(undefined2 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x1a) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 9;
    }
  }
  else {
    if (bVar1 == 0x70) {
      *(undefined4 *)(param_1 + 0x28) = 10;
    }
    else {
      if (bVar1 == 0x73) goto LAB_18050e9b9;
      if (bVar1 == 0x75) {
        *(undefined4 *)(param_1 + 0x30) = 5;
        goto LAB_18050e9f2;
      }
      if (bVar1 != 0x78) goto LAB_18050e991;
    }
LAB_18050e9eb:
    *(undefined4 *)(param_1 + 0x30) = 6;
  }
LAB_18050e9f2:
  pbVar4 = pbVar3 + 1;
  *(byte **)(param_1 + 8) = pbVar4;
LAB_18050e9fa:
  return CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
}



/* ===== 18050ea00 FUN_18050ea00 ===== */

undefined8 FUN_18050ea00(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined8 uVar5;
  
  puVar3 = *(ushort **)(param_1 + 8);
  uVar1 = *puVar3;
  if (uVar1 < 0x65) {
    if (uVar1 == 100) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    else if (uVar1 < 0x4a) {
      if (uVar1 == 0x49) {
LAB_18050eb3a:
        *(undefined4 *)(param_1 + 0x30) = 2;
      }
      else {
        if (uVar1 != 0x41) {
          if (uVar1 == 0x43) {
LAB_18050ea79:
            puVar4 = (ushort *)0x0;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              *(undefined8 *)(param_1 + 0x20) = 1;
            }
            iVar2 = *(int *)(param_1 + 0x28);
            if (iVar2 == 2) {
              *(undefined1 *)(param_1 + 0x2c) = 0;
            }
            else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
              *(undefined1 *)(param_1 + 0x2c) = 1;
            }
            *(undefined4 *)(param_1 + 0x30) = 0;
            *(ushort **)(param_1 + 8) = puVar3 + 1;
            goto LAB_18050ebc5;
          }
          if (((uVar1 != 0x45) && (uVar1 != 0x46)) && (uVar1 != 0x47)) goto LAB_18050eb5d;
        }
LAB_18050ea48:
        *(undefined4 *)(param_1 + 0x30) = 7;
      }
    }
    else {
      if (uVar1 != 0x53) {
        if (uVar1 == 0x58) goto LAB_18050ebb6;
        if (uVar1 == 0x5b) {
          iVar2 = *(int *)(param_1 + 0x28);
          if (iVar2 == 2) {
            *(undefined1 *)(param_1 + 0x2c) = 0;
          }
          else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
            *(undefined1 *)(param_1 + 0x2c) = 1;
          }
          *(undefined4 *)(param_1 + 0x30) = 8;
          *(ushort **)(param_1 + 8) = puVar3 + 1;
          uVar5 = FUN_18050f288(param_1);
          return uVar5;
        }
        if (uVar1 != 0x61) {
          if (uVar1 != 99) goto LAB_18050eb5d;
          goto LAB_18050ea79;
        }
        goto LAB_18050ea48;
      }
LAB_18050eb84:
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      else if (((iVar2 - 3U & 0xfffffffa) == 0) && (iVar2 != 7)) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  else if (uVar1 < 0x70) {
    if (uVar1 == 0x6f) {
      *(undefined4 *)(param_1 + 0x30) = 4;
    }
    else {
      if (((uVar1 == 0x65) || (uVar1 == 0x66)) || (uVar1 == 0x67)) goto LAB_18050ea48;
      if (uVar1 == 0x69) goto LAB_18050eb3a;
      if (uVar1 != 0x6e) {
LAB_18050eb5d:
        *(undefined8 *)(param_1 + 0x10) = 0x16;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x1c) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x30) = 9;
    }
  }
  else {
    if (uVar1 == 0x70) {
      *(undefined4 *)(param_1 + 0x28) = 10;
    }
    else {
      if (uVar1 == 0x73) goto LAB_18050eb84;
      if (uVar1 == 0x75) {
        *(undefined4 *)(param_1 + 0x30) = 5;
        goto LAB_18050ebbd;
      }
      if (uVar1 != 0x78) goto LAB_18050eb5d;
    }
LAB_18050ebb6:
    *(undefined4 *)(param_1 + 0x30) = 6;
  }
LAB_18050ebbd:
  puVar4 = puVar3 + 1;
  *(ushort **)(param_1 + 8) = puVar4;
LAB_18050ebc5:
  return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
}



/* ===== 18050ebc8 FUN_18050ebc8 ===== */

undefined8 FUN_18050ebc8(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_res8 [4];
  
  pcVar1 = *(char **)(param_1 + 8);
  if ((byte)(*pcVar1 - 0x30U) < 10) {
    uVar2 = (int)*pcVar1 - 0x30;
  }
  else if ((byte)(*pcVar1 + 0x9fU) < 0x1a) {
    uVar2 = (int)*pcVar1 - 0x57;
  }
  else {
    if (0x19 < (byte)(*pcVar1 + 0xbfU)) {
      return 1;
    }
    uVar2 = (int)*pcVar1 - 0x37;
  }
  if (uVar2 < 10) {
    local_res8[0] = 0;
    lVar3 = FUN_180515720(pcVar1,local_res8,10);
    if ((lVar3 == 0) || (local_res8[0] == *(longlong *)(param_1 + 8))) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined2 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0x16;
      return 0;
    }
    *(longlong *)(param_1 + 0x20) = lVar3;
    *(longlong *)(param_1 + 8) = local_res8[0];
  }
  return 1;
}



/* ===== 18050ec68 FUN_18050ec68 ===== */

undefined8 FUN_18050ec68(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res8;
  
  puVar2 = *(ushort **)(param_1 + 8);
  iVar5 = 0x30;
  if (*puVar2 < 0x30) goto LAB_18050ee34;
  if (*puVar2 < 0x3a) {
LAB_18050ee29:
    uVar3 = (uint)*puVar2 - iVar5;
    if (uVar3 != 0xffffffff) goto LAB_18050ee53;
  }
  else {
    iVar5 = 0xff10;
    if (*puVar2 < 0xff10) {
      iVar5 = 0x660;
      if ((0x65f < *puVar2) &&
         ((*puVar2 < 0x66a ||
          ((iVar5 = 0x6f0, 0x6ef < *puVar2 &&
           ((*puVar2 < 0x6fa ||
            ((iVar5 = 0x966, 0x965 < *puVar2 &&
             ((*puVar2 < 0x970 ||
              ((iVar5 = 0x9e6, 0x9e5 < *puVar2 &&
               ((*puVar2 < 0x9f0 ||
                ((iVar5 = 0xa66, 0xa65 < *puVar2 &&
                 ((*puVar2 < 0xa70 ||
                  ((iVar5 = 0xae6, 0xae5 < *puVar2 &&
                   ((*puVar2 < 0xaf0 ||
                    ((iVar5 = 0xb66, 0xb65 < *puVar2 &&
                     ((*puVar2 < 0xb70 ||
                      ((iVar5 = 0xc66, 0xc65 < *puVar2 &&
                       ((*puVar2 < 0xc70 ||
                        ((iVar5 = 0xce6, 0xce5 < *puVar2 &&
                         ((*puVar2 < 0xcf0 ||
                          ((iVar5 = 0xd66, 0xd65 < *puVar2 &&
                           ((*puVar2 < 0xd70 ||
                            ((iVar5 = 0xe50, 0xe4f < *puVar2 &&
                             ((*puVar2 < 0xe5a ||
                              ((iVar5 = 0xed0, 0xecf < *puVar2 &&
                               ((*puVar2 < 0xeda ||
                                ((iVar5 = 0xf20, 0xf1f < *puVar2 &&
                                 ((*puVar2 < 0xf2a ||
                                  ((iVar5 = 0x1040, 0x103f < *puVar2 &&
                                   ((*puVar2 < 0x104a ||
                                    ((iVar5 = 0x17e0, 0x17df < *puVar2 &&
                                     ((*puVar2 < 0x17ea ||
                                      (iVar5 = 0x1810, (ushort)(*puVar2 + 0xe7f0) < 10))))))))))))))
                               )))))))))))))))))))))))))))))))))))))))))))))) goto LAB_18050ee29;
    }
    else if (*puVar2 < 0xff1a) goto LAB_18050ee29;
  }
LAB_18050ee34:
  uVar1 = *puVar2;
  uVar3 = (uint)uVar1;
  if ((0x19 < uVar1 - 0x41) && (0x19 < uVar1 - 0x61)) {
    return 1;
  }
  if (uVar1 - 0x61 < 0x1a) {
    uVar3 = uVar1 - 0x20;
  }
  uVar3 = uVar3 - 0x37;
LAB_18050ee53:
  if (uVar3 < 10) {
    local_res8 = 0;
    lVar4 = FUN_180515888(puVar2,&local_res8,10);
    if ((lVar4 == 0) || (local_res8 == *(longlong *)(param_1 + 8))) {
      *(undefined8 *)(param_1 + 0x10) = 0x16;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      return 0;
    }
    *(longlong *)(param_1 + 0x20) = lVar4;
    *(longlong *)(param_1 + 8) = local_res8;
  }
  return 1;
}



/* ===== 18050eeb8 FUN_18050eeb8 ===== */

void FUN_18050eeb8(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 8);
  cVar1 = *pcVar4;
  if (cVar1 == 'I') {
    cVar1 = pcVar4[1];
    if ((cVar1 == '3') && (pcVar4[2] == '2')) {
      pcVar4 = pcVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 9;
      goto LAB_18050efc0;
    }
    if (cVar1 == '6') {
      if (pcVar4[2] != '4') {
        return;
      }
      pcVar4 = pcVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 10;
      goto LAB_18050efc0;
    }
    if (0x20 < (byte)(cVar1 + 0xa8U)) {
      return;
    }
    if ((0x120821001U >> ((ulonglong)(byte)(cVar1 + 0xa8U) & 0x3f) & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 10;
  }
  else if (cVar1 == 'L') {
    *(undefined4 *)(param_1 + 0x28) = 8;
  }
  else if (cVar1 == 'T') {
    *(undefined4 *)(param_1 + 0x28) = 0xb;
  }
  else {
    if (cVar1 == 'h') {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar3;
      if (cVar1 == 'h') {
        pcVar3 = pcVar4 + 2;
      }
      *(char **)(param_1 + 8) = pcVar3;
      iVar2 = (cVar1 != 'h') + 1;
LAB_18050ef58:
      *(int *)(param_1 + 0x28) = iVar2;
      return;
    }
    if (cVar1 == 'j') {
      *(undefined4 *)(param_1 + 0x28) = 5;
    }
    else {
      if (cVar1 == 'l') {
        pcVar3 = pcVar4 + 1;
        cVar1 = *pcVar3;
        if (cVar1 == 'l') {
          pcVar3 = pcVar4 + 2;
        }
        *(char **)(param_1 + 8) = pcVar3;
        iVar2 = 4 - (uint)(cVar1 != 'l');
        goto LAB_18050ef58;
      }
      if (cVar1 == 't') {
        *(undefined4 *)(param_1 + 0x28) = 7;
      }
      else {
        if (cVar1 != 'z') {
          return;
        }
        *(undefined4 *)(param_1 + 0x28) = 6;
      }
    }
  }
  pcVar4 = pcVar4 + 1;
LAB_18050efc0:
  *(char **)(param_1 + 8) = pcVar4;
  return;
}



/* ===== 18050efc8 FUN_18050efc8 ===== */

void FUN_18050efc8(longlong param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  
  psVar4 = *(short **)(param_1 + 8);
  if (*psVar4 == 0x49) {
    sVar1 = psVar4[1];
    if ((sVar1 == 0x33) && (psVar4[2] == 0x32)) {
      psVar4 = psVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 9;
      goto LAB_18050f0ea;
    }
    if (sVar1 == 0x36) {
      if (psVar4[2] != 0x34) {
        return;
      }
      psVar4 = psVar4 + 3;
      *(undefined4 *)(param_1 + 0x28) = 10;
      goto LAB_18050f0ea;
    }
    if (0x20 < (ushort)(sVar1 - 0x58U)) {
      return;
    }
    if ((0x120821001U >> ((ulonglong)(ushort)(sVar1 - 0x58U) & 0x3f) & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 10;
  }
  else if (*psVar4 == 0x4c) {
    *(undefined4 *)(param_1 + 0x28) = 8;
  }
  else if (*psVar4 == 0x54) {
    *(undefined4 *)(param_1 + 0x28) = 0xb;
  }
  else {
    if (*psVar4 == 0x68) {
      psVar3 = psVar4 + 1;
      sVar1 = *psVar3;
      if (sVar1 == 0x68) {
        psVar3 = psVar4 + 2;
      }
      *(short **)(param_1 + 8) = psVar3;
      iVar2 = (sVar1 != 0x68) + 1;
LAB_18050f077:
      *(int *)(param_1 + 0x28) = iVar2;
      return;
    }
    if (*psVar4 == 0x6a) {
      *(undefined4 *)(param_1 + 0x28) = 5;
    }
    else {
      if (*psVar4 == 0x6c) {
        psVar3 = psVar4 + 1;
        sVar1 = *psVar3;
        if (sVar1 == 0x6c) {
          psVar3 = psVar4 + 2;
        }
        *(short **)(param_1 + 8) = psVar3;
        iVar2 = 4 - (uint)(sVar1 != 0x6c);
        goto LAB_18050f077;
      }
      if (*psVar4 == 0x74) {
        *(undefined4 *)(param_1 + 0x28) = 7;
      }
      else {
        if (*psVar4 != 0x7a) {
          return;
        }
        *(undefined4 *)(param_1 + 0x28) = 6;
      }
    }
  }
  psVar4 = psVar4 + 1;
LAB_18050f0ea:
  *(short **)(param_1 + 8) = psVar4;
  return;
}



/* ===== 18050f0f0 FUN_18050f0f0 ===== */

ulonglong FUN_18050f0f0(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  
  pbVar6 = (byte *)(param_1 + 0x34);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0xc;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6[4] = 0;
    pbVar6[5] = 0;
    pbVar6[6] = 0;
    pbVar6[7] = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    pbVar2 = *(byte **)(param_1 + 8);
    bVar1 = *pbVar2;
    bVar3 = bVar1;
    if (bVar1 == 0x5e) {
      pbVar2 = pbVar2 + 1;
      *(byte **)(param_1 + 8) = pbVar2;
      bVar3 = *pbVar2;
    }
    if (bVar3 == 0x5d) {
      pbVar2 = pbVar2 + 1;
      *(byte **)(param_1 + 8) = pbVar2;
      *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) | 0x20;
    }
    pbVar5 = (byte *)0x0;
    register0x00000020 = (BADSPACEBASE *)pbVar2;
    if (*pbVar2 != 0x5d) {
      bVar3 = *pbVar2;
      do {
        if (bVar3 == 0) break;
        if ((((bVar3 == 0x2d) && ((byte *)((longlong)register0x00000020 + -1) != pbVar5)) &&
            ((byte *)register0x00000020 != pbVar2)) &&
           (*(byte *)((longlong)register0x00000020 + 1) != 0x5d)) {
          bVar3 = *(byte *)((longlong)register0x00000020 + -1);
          pbVar5 = (byte *)((longlong)register0x00000020 + 1);
          bVar4 = bVar3;
          bVar7 = *(byte *)((longlong)register0x00000020 + 1);
          if (bVar3 <= *(byte *)((longlong)register0x00000020 + 1)) {
            bVar4 = *(byte *)((longlong)register0x00000020 + 1);
            bVar7 = bVar3;
          }
          for (; bVar7 != (byte)(bVar4 + 1); bVar7 = bVar7 + 1) {
            *(byte *)((ulonglong)(bVar7 >> 3) + 0x34 + param_1) =
                 *(byte *)((ulonglong)(bVar7 >> 3) + 0x34 + param_1) | (byte)(1 << (bVar7 & 7));
          }
        }
        else {
          *(byte *)((ulonglong)(bVar3 >> 3) + 0x34 + param_1) =
               *(byte *)((ulonglong)(bVar3 >> 3) + 0x34 + param_1) | (byte)(1 << (bVar3 & 7));
        }
        register0x00000020 = (BADSPACEBASE *)(*(longlong *)(param_1 + 8) + 1);
        *(BADSPACEBASE **)(param_1 + 8) = register0x00000020;
        bVar3 = *(byte *)register0x00000020;
      } while (bVar3 != 0x5d);
    }
    if (*(byte *)register0x00000020 != 0) {
      if (bVar1 == 0x5e) {
        for (; pbVar6 != (byte *)(param_1 + 0x54); pbVar6 = pbVar6 + 1) {
          *pbVar6 = ~*pbVar6;
        }
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
      return CONCAT71((int7)((ulonglong)register0x00000020 >> 8),1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0x16;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return (ulonglong)register0x00000020 & 0xffffffffffffff00;
}



/* ===== 18050f288 FUN_18050f288 ===== */

undefined8 FUN_18050f288(longlong param_1)

{
  longlong *plVar1;
  ushort *puVar2;
  byte *pbVar3;
  short sVar4;
  ushort uVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  short sVar9;
  byte *pbVar10;
  ushort uVar11;
  ushort *puVar12;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*plVar1 == 0) {
    lVar6 = _calloc_base(0x2000,1);
    FUN_1805277b0(*plVar1);
    *plVar1 = lVar6;
    FUN_1805277b0(0);
  }
  if (*plVar1 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0xc;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_180540170(*plVar1,0,0x2000);
    psVar7 = *(short **)(param_1 + 8);
    sVar4 = *psVar7;
    sVar9 = sVar4;
    if (sVar4 == 0x5e) {
      psVar7 = psVar7 + 1;
      *(short **)(param_1 + 8) = psVar7;
      sVar9 = *psVar7;
    }
    if (sVar9 == 0x5d) {
      *(short **)(param_1 + 8) = psVar7 + 1;
      FUN_18050f49c(plVar1,0x5d);
    }
    psVar7 = *(short **)(param_1 + 8);
    puVar12 = (ushort *)0x0;
    sVar9 = *psVar7;
    psVar8 = psVar7;
    if (sVar9 != 0x5d) {
      do {
        if (sVar9 == 0) break;
        if ((((sVar9 == 0x2d) && (puVar2 = (ushort *)(psVar8 + -1), puVar2 != puVar12)) &&
            (psVar8 != psVar7)) && (uVar5 = psVar8[1], uVar5 != 0x5d)) {
          puVar12 = (ushort *)(psVar8 + 1);
          uVar11 = *puVar2;
          if (*puVar2 <= uVar5) {
            uVar11 = uVar5;
          }
          if (*puVar2 <= uVar5) {
            uVar5 = *puVar2;
          }
          for (; uVar5 != (ushort)(uVar11 + 1); uVar5 = uVar5 + 1) {
            FUN_18050f49c(plVar1,uVar5);
          }
        }
        else {
          FUN_18050f49c(plVar1,sVar9);
        }
        psVar8 = (short *)(*(longlong *)(param_1 + 8) + 2);
        *(short **)(param_1 + 8) = psVar8;
        sVar9 = *psVar8;
      } while (sVar9 != 0x5d);
    }
    if (*psVar8 != 0) {
      if (sVar4 == 0x5e) {
        if (*plVar1 == 0) {
          lVar6 = _calloc_base(0x2000,1);
          FUN_1805277b0(*plVar1);
          *plVar1 = lVar6;
          FUN_1805277b0(0);
        }
        pbVar10 = (byte *)*plVar1;
        pbVar3 = pbVar10 + 0x2000;
        for (; pbVar10 != pbVar3; pbVar10 = pbVar10 + 1) {
          *pbVar10 = ~*pbVar10;
        }
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 2;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0x16;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 0;
}



/* ===== 18050f49c FUN_18050f49c ===== */

void FUN_18050f49c(longlong *param_1,ushort param_2)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = _calloc_base(0x2000,1);
    FUN_1805277b0(*param_1);
    *param_1 = lVar1;
    FUN_1805277b0(0);
  }
  *(byte *)((ulonglong)(param_2 >> 3) + *param_1) =
       *(byte *)((ulonglong)(param_2 >> 3) + *param_1) | (byte)(1 << (param_2 & 7));
  return;
}



/* ===== 18050f508 FUN_18050f508 ===== */

undefined8 FUN_18050f508(longlong *param_1,ushort param_2)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = _calloc_base(0x2000,1);
    FUN_1805277b0(*param_1);
    *param_1 = lVar1;
    FUN_1805277b0(0);
  }
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),
                  (*(byte *)((ulonglong)(param_2 >> 3) + *param_1) &
                  (byte)(1 << ((byte)param_2 & 7))) != 0);
}



/* ===== 18050f57c __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::write_character ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::write_character(wchar_t __unaligned * __ptr64
   const,unsigned __int64,wchar_t __unaligned * __ptr64 & __ptr64,unsigned __int64 & __ptr64,char)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::
write_character(input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *this,
               wchar_t *param_1,__uint64 param_2,wchar_t **param_3,__uint64 *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  undefined2 local_res8 [4];
  undefined1 uStack0000000000000031;
  
  cVar1 = param_5;
  uStack0000000000000031 = 0;
  puVar3 = __pctype_func();
  if ((short)puVar3[(byte)cVar1] < 0) {
    iVar2 = _fgetc_nolock(*(undefined8 *)(this + 8));
    if (iVar2 != -1) {
      *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + 1;
    }
    uStack0000000000000031 = (undefined1)iVar2;
  }
  local_res8[0] = 0x3f;
  FUN_180528b08(local_res8,&param_5,(longlong)*(int *)(**(longlong **)(this + 0x70) + 8));
  **param_3 = (short)cVar1;
  *param_3 = *param_3 + 1;
  *param_4 = *param_4 - 1;
  return true;
}



/* ===== 18050f610 __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::write_character ===== */

/* Library Function - Single Match
    private: bool __cdecl __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::write_character(wchar_t __unaligned * __ptr64
   const,unsigned __int64,wchar_t __unaligned * __ptr64 & __ptr64,unsigned __int64 & __ptr64,char)
   __ptr64
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
write_character(input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *this,
               wchar_t *param_1,__uint64 param_2,wchar_t **param_3,__uint64 *param_4,char param_5)

{
  undefined1 *puVar1;
  char cVar2;
  ushort *puVar3;
  undefined2 local_res8 [4];
  undefined1 uStack0000000000000031;
  
  cVar2 = param_5;
  uStack0000000000000031 = 0;
  puVar3 = __pctype_func();
  if ((short)puVar3[(byte)cVar2] < 0) {
    puVar1 = *(undefined1 **)(this + 0x18);
    if (puVar1 == *(undefined1 **)(this + 0x10)) {
      uStack0000000000000031 = 0xff;
    }
    else {
      uStack0000000000000031 = *puVar1;
      *(undefined1 **)(this + 0x18) = puVar1 + 1;
    }
  }
  local_res8[0] = 0x3f;
  FUN_180528b08(local_res8,&param_5,(longlong)*(int *)(**(longlong **)(this + 0x78) + 8));
  **param_3 = (short)cVar2;
  *param_3 = *param_3 + 1;
  *param_4 = *param_4 - 1;
  return true;
}



/* ===== 18050f6a8 FUN_18050f6a8 ===== */

undefined8
FUN_18050f6a8(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong *param_4,
             longlong *param_5)

{
  int iVar1;
  int local_res18 [4];
  
  local_res18[0] = 0;
  if (param_3 == -1) {
    iVar1 = FUN_1805288f0();
    if (iVar1 == 0) {
      *param_4 = *param_4 + (longlong)local_res18[0];
      *param_5 = *param_5 - (longlong)local_res18[0];
    }
    else if ((iVar1 == 0x16) || (iVar1 == 0x22)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  else {
    iVar1 = FUN_1805288f0(local_res18,*param_4,*param_5);
    if (iVar1 == 0x22) {
      *param_2 = 0;
      return 0;
    }
    if (0 < local_res18[0]) {
      *param_4 = *param_4 + (longlong)local_res18[0];
      *param_5 = *param_5 - (longlong)local_res18[0];
    }
  }
  return 1;
}



/* ===== 18050f754 FUN_18050f754 ===== */

ulonglong FUN_18050f754(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  *(longlong **)(param_1 + 0x78) = plVar1 + 1;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    uVar4 = FUN_180527740();
LAB_18050f785:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    lVar5 = FUN_18050d4fc(param_1 + 0x18);
    if (lVar5 == 1) {
      *(char *)puVar2 = (char)param_2;
      uVar4 = 0;
    }
    else if (lVar5 == 2) {
      *(short *)puVar2 = (short)param_2;
      uVar4 = 0;
    }
    else {
      uVar4 = lVar5 - 4;
      if (uVar4 == 0) {
        *(int *)puVar2 = (int)param_2;
      }
      else {
        if (uVar4 != 4) goto LAB_18050f785;
        *puVar2 = param_2;
      }
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}



/* ===== 18050f7c8 FUN_18050f7c8 ===== */

ulonglong FUN_18050f7c8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  *(longlong **)(param_1 + 0x80) = plVar1 + 1;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    uVar4 = FUN_180527740();
LAB_18050f7ff:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    lVar5 = FUN_18050d4fc(param_1 + 0x20);
    if (lVar5 == 1) {
      *(char *)puVar2 = (char)param_2;
      uVar4 = 0;
    }
    else if (lVar5 == 2) {
      *(short *)puVar2 = (short)param_2;
      uVar4 = 0;
    }
    else {
      uVar4 = lVar5 - 4;
      if (uVar4 == 0) {
        *(int *)puVar2 = (int)param_2;
      }
      else {
        if (uVar4 != 4) goto LAB_18050f7ff;
        *puVar2 = param_2;
      }
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}



/* ===== 18050f844 FUN_18050f844 ===== */

ulonglong FUN_18050f844(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  *(longlong **)(param_1 + 0x60) = plVar1 + 1;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    uVar4 = FUN_180527740();
LAB_18050f875:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    lVar5 = FUN_18050d4fc(param_1 + 0x18);
    if (lVar5 == 1) {
      *(char *)puVar2 = (char)param_2;
      uVar4 = 0;
    }
    else if (lVar5 == 2) {
      *(short *)puVar2 = (short)param_2;
      uVar4 = 0;
    }
    else {
      uVar4 = lVar5 - 4;
      if (uVar4 == 0) {
        *(int *)puVar2 = (int)param_2;
      }
      else {
        if (uVar4 != 4) goto LAB_18050f875;
        *puVar2 = param_2;
      }
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}



/* ===== 18050f8b8 FUN_18050f8b8 ===== */

ulonglong FUN_18050f8b8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  *(longlong **)(param_1 + 0x68) = plVar1 + 1;
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    uVar4 = FUN_180527740();
LAB_18050f8e9:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    lVar5 = FUN_18050d4fc(param_1 + 0x20);
    if (lVar5 == 1) {
      *(char *)puVar2 = (char)param_2;
      uVar4 = 0;
    }
    else if (lVar5 == 2) {
      *(short *)puVar2 = (short)param_2;
      uVar4 = 0;
    }
    else {
      uVar4 = lVar5 - 4;
      if (uVar4 == 0) {
        *(int *)puVar2 = (int)param_2;
      }
      else {
        if (uVar4 != 4) goto LAB_18050f8e9;
        *puVar2 = param_2;
      }
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}



/* ===== 18050f92c FID_conflict:__stdio_common_vfwscanf ===== */

/* Library Function - Multiple Matches With Different Base Names
    __stdio_common_vfscanf
    __stdio_common_vfwscanf
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
FID_conflict___stdio_common_vfwscanf
          (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong *local_28;
  undefined8 *local_20;
  longlong *local_18;
  undefined8 *local_10;
  
  local_48 = param_5;
  local_res8 = param_4;
  local_res10 = param_2;
  local_res18 = param_1;
  local_res20 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    uVar2 = 0xffffffff;
  }
  else {
    local_30 = &local_res8;
    local_28 = &local_res10;
    local_20 = &local_res18;
    local_18 = &local_res20;
    local_10 = &local_48;
    local_40 = param_2;
    local_38 = param_2;
    uVar2 = operator()<>(&param_5,&local_38,&local_30,&local_40);
  }
  return uVar2;
}



/* ===== 18050f9b8 FID_conflict:__stdio_common_vfwscanf ===== */

/* Library Function - Multiple Matches With Different Base Names
    __stdio_common_vfscanf
    __stdio_common_vfwscanf
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
FID_conflict___stdio_common_vfwscanf
          (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong *local_28;
  undefined8 *local_20;
  longlong *local_18;
  undefined8 *local_10;
  
  local_48 = param_5;
  local_res8 = param_4;
  local_res10 = param_2;
  local_res18 = param_1;
  local_res20 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    uVar2 = 0xffffffff;
  }
  else {
    local_30 = &local_res8;
    local_28 = &local_res10;
    local_20 = &local_res18;
    local_18 = &local_res20;
    local_10 = &local_48;
    local_40 = param_2;
    local_38 = param_2;
    uVar2 = operator()<>(&param_5,&local_38,&local_30,&local_40);
  }
  return uVar2;
}



/* ===== 18050fa44 FUN_18050fa44 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18050fa44(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
             __crt_locale_pointers *param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  char local_c8;
  undefined8 local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_118;
  if ((param_2 == 0) || (param_4 == 0)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    uVar3 = 0xffffffff;
  }
  else {
    lVar2 = FUN_180512ae0(param_2,param_3);
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_e0,param_5);
    local_88 = 0;
    lStack_f0 = lVar2 + param_2;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_30 = 0;
    local_40 = local_d8;
    local_64 = 0;
    uStack_5c = 0;
    local_54 = 0;
    uStack_4c = 0;
    local_7e = 0;
    local_6c = 0;
    local_38 = param_6;
    local_f8 = param_2;
    local_e8 = param_2;
    local_b8 = param_1;
    local_b0 = param_2;
    lStack_a8 = lStack_f0;
    local_a0 = param_2;
    local_98 = param_1;
    local_90 = param_4;
    uVar3 = FUN_18050d678(&local_b8);
    if (local_c8 != '\0') {
      *(uint *)(local_e0 + 0x3a8) = *(uint *)(local_e0 + 0x3a8) & 0xfffffffd;
    }
  }
  return uVar3;
}



/* ===== 18050fb68 FUN_18050fb68 ===== */

int FUN_18050fb68(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                 __crt_locale_pointers *param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_38;
  undefined1 local_30 [16];
  char local_20;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    iVar1 = -1;
  }
  else {
    lVar3 = FUN_180512dc0(param_2,param_3);
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_38,param_5);
    lStack_a8 = param_2 + lVar3 * 2;
    local_58 = local_30;
    local_50 = param_6;
    local_88 = 0;
    local_60 = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_48 = 0;
    local_b8 = param_1;
    local_b0 = param_2;
    local_a0 = param_2;
    local_98 = param_1;
    local_90 = param_4;
    iVar1 = __crt_stdio_input::
            input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process
                      ((input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *
                       )&local_b8);
    FUN_1805277b0(local_60);
    if (local_20 != '\0') {
      *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
    }
  }
  return iVar1;
}



/* ===== 18050fc80 FUN_18050fc80 ===== */

uint FUN_18050fc80(int param_1,uint param_2,_locale_t param_3)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 == (_locale_t)0x0) {
    puVar1 = __pctype_func();
    if (param_1 + 1U < 0x101) {
      uVar2 = puVar1[param_1] & param_2;
    }
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = *(ushort *)(*(longlong *)param_3->locinfo + (longlong)param_1 * 2) & param_2;
  }
  else if ((int)param_3->locinfo->lc_collate_cp < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = _isctype_l(param_1,param_2,param_3);
  }
  return uVar2;
}



/* ===== 18050fcf8 memcpy_s ===== */

/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  errno_t *peVar1;
  errno_t eVar2;
  
  if (_MaxCount == 0) {
LAB_18050fd15:
    eVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_18050fd1e:
      peVar1 = (errno_t *)FUN_18051bfb0();
      eVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_180540530(_Dst,_Src,_MaxCount);
        goto LAB_18050fd15;
      }
      FUN_180540170(_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_18050fd1e;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      peVar1 = (errno_t *)FUN_18051bfb0();
      eVar2 = 0x22;
    }
    *peVar1 = eVar2;
    FUN_180527740();
  }
  return eVar2;
}



/* ===== 18050fd80 FUN_18050fd80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_18050fd80(undefined4 param_1)

{
  short sVar1;
  float fVar2;
  
  sVar1 = FUN_1805266e0();
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      fVar2 = (float)FUN_180519080(param_1);
      if ((_DAT_180577a18 <= fVar2) && (fVar2 <= DAT_1808acd00)) {
        return (longlong)fVar2;
      }
    }
    FUN_180526a50(1);
  }
  return 0;
}



/* ===== 18050fde8 FUN_18050fde8 ===== */

uint FUN_18050fde8(uint param_1,FILE *param_2,longlong param_3)

{
  char **ppcVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined1 *local_18;
  
  local_18 = auStack_48;
  local_20 = param_3;
  if (param_2 == (FILE *)0x0) {
    *(undefined1 *)(param_3 + 0x30) = 1;
    *(undefined4 *)(param_3 + 0x2c) = 0x16;
    local_28 = 0;
    local_18 = auStack_48;
    FUN_180527688(0,0,0,0);
    return 0xffffffff;
  }
  FUN_1805110a4(param_2);
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVar3 = _fileno(param_2);
    if (uVar3 + 2 < 2) {
      puVar5 = &DAT_1809198d0;
    }
    else {
      puVar5 = (undefined *)
               ((&DAT_180c9f990)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
    }
    puVar4 = &DAT_1809198d0;
    if (puVar5[0x39] == '\0') {
      if (1 < uVar3 + 2) {
        puVar4 = (undefined *)
                 ((&DAT_180c9f990)[(longlong)(int)uVar3 >> 6] + (ulonglong)(uVar3 & 0x3f) * 0x48);
      }
      if ((puVar4[0x3d] & 1) == 0) goto LAB_18050fed1;
    }
    bVar2 = false;
  }
  else {
LAB_18050fed1:
    bVar2 = true;
  }
  if (bVar2) {
    ppcVar1 = &param_2->_base;
    *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
    if (*(int *)ppcVar1 < 0) {
      param_1 = FUN_18052a830(param_1,param_2,param_3);
    }
    else {
      *param_2->_ptr = (char)param_1;
      param_2->_ptr = param_2->_ptr + 1;
      param_1 = param_1 & 0xff;
    }
    FUN_1805110b0(param_2);
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    *(undefined4 *)(param_3 + 0x2c) = 0x16;
    local_28 = 0;
    FUN_180527688(0,0,0,0);
    FUN_18053e7f0(local_18,0x18050ff11);
    param_1 = 0xffffffff;
  }
  return param_1;
}



/* ===== 18050ff4c FUN_18050ff4c ===== */

ulonglong FUN_18050ff4c(byte param_1,FILE *param_2,longlong param_3)

{
  char **ppcVar1;
  uint *puVar2;
  char cVar3;
  
  ppcVar1 = &param_2->_base;
  *(int *)ppcVar1 = *(int *)ppcVar1 + -1;
  if (-1 < *(int *)ppcVar1) {
    *param_2->_ptr = param_1;
    param_2->_ptr = param_2->_ptr + 1;
    return (ulonglong)param_1;
  }
  _fileno(param_2);
  if (((ulonglong)param_2->_base & 0x600000000) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if (((ulonglong)param_2->_base & 0x100000000) != 0) {
        cVar3 = FUN_18052a7a8(param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (cVar3 == '\0') goto LAB_18052a862;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar2 = (uint *)((longlong)&param_2->_base + 4);
        *puVar2 = *puVar2 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 2;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if ((((ulonglong)param_2->_base & 0x4c000000000) == 0) &&
         (cVar3 = FUN_18052928c(param_2), cVar3 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      cVar3 = FUN_18052a5b4(param_1,param_2,param_3);
      if (cVar3 != '\0') {
        return (ulonglong)param_1;
      }
      goto LAB_18052a862;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined1 *)(param_3 + 0x30) = 1;
LAB_18052a862:
  LOCK();
  puVar2 = (uint *)((longlong)&param_2->_base + 4);
  *puVar2 = *puVar2 | 0x10;
  UNLOCK();
  return 0xffffffff;
}



/* ===== 18050ff64 _fputchar ===== */

/* Library Function - Single Match
    _fputchar
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _fputchar(int _Ch)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = __acrt_iob_func(1);
  iVar2 = FUN_18050ff88(_Ch,uVar1);
  return iVar2;
}



/* ===== 18050ff88 FUN_18050ff88 ===== */

undefined4 FUN_18050ff88(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
    param_1 = PTR_PTR_1809198b8._0_4_;
  }
  uVar1 = FUN_18050fde8(param_1,param_2,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 180510020 _fputchar ===== */

int __cdecl _fputchar(int _Ch)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = __acrt_iob_func(1);
  iVar2 = FUN_18050ff88(_Ch,uVar1);
  return iVar2;
}



/* ===== 180510028 FUN_180510028 ===== */

void FUN_180510028(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_1805110a4(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_1805102d4(*(undefined8 *)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_1805110b0(*param_4);
  return;
}



/* ===== 1805100c4 FUN_1805100c4 ===== */

void FUN_1805100c4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  undefined4 *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res20 = param_4;
  __acrt_lock(*param_2);
  plVar1 = DAT_180c9f550 + DAT_180c9f548;
  for (plVar3 = DAT_180c9f550; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_180510028(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  __acrt_unlock(*param_4);
  return;
}



/* ===== 1805101a8 FUN_1805101a8 ===== */

undefined4
FUN_1805101a8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  FUN_1805110a4(*param_2);
  uVar1 = FUN_1805102d4(*(undefined8 *)*param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1805101e8 common_flush_all ===== */

/* Library Function - Single Match
    int __cdecl common_flush_all(bool)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl common_flush_all(bool param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  char *local_18;
  int *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28 = 8;
  local_24 = 8;
  local_res8[0] = param_1;
  FUN_1805100c4(local_res10,&local_24,&local_20,&local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}



/* ===== 180510248 FUN_180510248 ===== */

undefined8 FUN_180510248(FILE *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((longlong)&param_1->_base + 4);
  if ((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) {
    iVar5 = *(int *)&param_1->_ptr - param_1->_cnt;
    *(undefined4 *)&param_1->_base = 0;
    pcVar3 = *(char **)&param_1->_cnt;
    param_1->_ptr = pcVar3;
    if (0 < iVar5) {
      iVar4 = _fileno(param_1);
      iVar4 = FUN_18052b3ac(iVar4,pcVar3,iVar5,param_2);
      if (iVar5 != iVar4) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) != 0) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}



/* ===== 1805102d4 FUN_1805102d4 ===== */

int FUN_1805102d4(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  FILE *in_RCX;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
    param_1 = PTR_PTR_1809198b8._0_4_;
  }
  if (in_RCX == (FILE *)0x0) {
    iVar1 = common_flush_all(false);
    goto LAB_180510359;
  }
  iVar1 = FUN_180510248(param_1,local_48);
  if (iVar1 == 0) {
    if ((*(uint *)((longlong)&in_RCX->_base + 4) >> 0xb & 1) != 0) {
      iVar1 = _fileno(in_RCX);
      iVar1 = _commit(iVar1);
      if (iVar1 != 0) goto LAB_180510334;
    }
    iVar1 = 0;
  }
  else {
LAB_180510334:
    iVar1 = -1;
  }
LAB_180510359:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return iVar1;
}



/* ===== 1805103a8 common_flush_all ===== */

int __cdecl common_flush_all(bool param_1)

{
  int iVar1;
  
  iVar1 = common_flush_all(true);
  return iVar1;
}



/* ===== 1805103b0 fflush ===== */

/* Library Function - Single Match
    fflush
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fflush(FILE *_File)

{
  uint uVar1;
  int iVar2;
  undefined1 local_res8 [8];
  FILE *local_res10;
  FILE *local_res18;
  FILE **local_res20;
  FILE *local_18 [3];
  
  local_res10 = _File;
  if (_File == (FILE *)0x0) {
    iVar2 = common_flush_all(false);
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4);
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      local_res20 = &local_res10;
      local_res18 = _File;
      local_18[0] = _File;
      iVar2 = FUN_1805101a8(local_res8,local_18,&local_res20,&local_res18);
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== 180510418 FUN_180510418 ===== */

undefined4 FUN_180510418(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_2);
  }
  else {
    if ((*(uint *)(param_1 + 0x14) >> 0xc & 1) == 0) {
      FUN_1805110a4();
      uVar1 = FUN_180510494(param_1,param_2);
      FUN_1805110b0(param_1);
      return uVar1;
    }
    __acrt_stdio_free_stream();
  }
  return 0xffffffff;
}



/* ===== 180510494 FUN_180510494 ===== */

undefined4 FUN_180510494(FILE *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_2);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) {
      uVar1 = FUN_180510248();
      __acrt_stdio_free_buffer_nolock(param_1);
      iVar2 = _fileno(param_1);
      iVar2 = FUN_18052b874(iVar2,param_2);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_1805277b0();
        param_1->_tmpfname = (char *)0x0;
      }
    }
    __acrt_stdio_free_stream(param_1);
  }
  return uVar1;
}



/* ===== 18051053c FUN_18051053c ===== */

undefined4 FUN_18051053c(undefined4 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
    param_1 = PTR_PTR_1809198b8._0_4_;
  }
  uVar1 = FUN_180510418(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 1805105d4 FUN_1805105d4 ===== */

uint FUN_1805105d4(uint param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined2 local_res18;
  undefined1 local_res1a;
  longlong local_28;
  longlong *local_20 [2];
  char local_10;
  
  uVar4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    if (param_1 < 0x100) {
      uVar4 = (uint)*(byte *)(local_20[0][0x22] + ((ulonglong)param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      local_resa = 0;
      if (((int)local_20[0][1] < 2) ||
         (-1 < *(short *)(*local_20[0] + (ulonglong)((int)param_1 >> 8 & 0xff) * 2))) {
        puVar2 = (undefined4 *)FUN_18051bfb0();
        uVar3 = 1;
        *puVar2 = 0x2a;
        local_res9 = 0;
        local_res8 = (char)param_1;
      }
      else {
        uVar3 = 2;
        local_res8 = (char)(param_1 >> 8);
        local_res9 = (char)param_1;
      }
      local_res18 = 0;
      local_res1a = 0;
      iVar1 = __acrt_LCMapStringA(local_20,local_20[0][0x27],0x100,&local_res8,uVar3,&local_res18,3,
                                  *(undefined4 *)((longlong)local_20[0] + 0xc),1);
      if (iVar1 != 0) {
        param_1 = (uint)(byte)local_res18;
        if (iVar1 != 1) {
          param_1 = (uint)CONCAT11((byte)local_res18,local_res18._1_1_);
        }
      }
      uVar4 = param_1;
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar4;
}



/* ===== 180510708 FUN_180510708 ===== */

uint FUN_180510708(uint param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined2 local_res18;
  undefined1 local_res1a;
  longlong local_28;
  longlong *local_20 [2];
  char local_10;
  
  uVar4 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    if (param_1 < 0x100) {
      uVar4 = (uint)*(byte *)(local_20[0][0x23] + ((ulonglong)param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      local_resa = 0;
      if (((int)local_20[0][1] < 2) ||
         (-1 < *(short *)(*local_20[0] + (ulonglong)((int)param_1 >> 8 & 0xff) * 2))) {
        puVar2 = (undefined4 *)FUN_18051bfb0();
        uVar3 = 1;
        *puVar2 = 0x2a;
        local_res9 = 0;
        local_res8 = (char)param_1;
      }
      else {
        uVar3 = 2;
        local_res8 = (char)(param_1 >> 8);
        local_res9 = (char)param_1;
      }
      local_res18 = 0;
      local_res1a = 0;
      iVar1 = __acrt_LCMapStringA(local_20,local_20[0][0x27],0x200,&local_res8,uVar3,&local_res18,3,
                                  *(undefined4 *)((longlong)local_20[0] + 0xc),1);
      if (iVar1 != 0) {
        param_1 = (uint)(byte)local_res18;
        if (iVar1 != 1) {
          param_1 = (uint)CONCAT11((byte)local_res18,local_res18._1_1_);
        }
      }
      uVar4 = param_1;
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar4;
}



/* ===== 18051083c tolower ===== */

/* Library Function - Single Match
    tolower
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl tolower(int _C)

{
  uint uVar1;
  undefined4 in_register_0000000c;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_register_0000000c,_C);
  if (DAT_180c9f7dc == 0) {
    if (_C - 0x41U < 0x1a) {
      uVar2 = (ulonglong)(_C + 0x20);
    }
  }
  else {
    uVar1 = FUN_1805105d4(uVar2,0);
    uVar2 = (ulonglong)uVar1;
  }
  return (int)uVar2;
}



/* ===== 180510868 toupper ===== */

/* Library Function - Single Match
    toupper
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl toupper(int _C)

{
  uint uVar1;
  undefined4 in_register_0000000c;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(in_register_0000000c,_C);
  if (DAT_180c9f7dc == 0) {
    if (_C - 0x61U < 0x1a) {
      uVar2 = (ulonglong)(_C - 0x20);
    }
  }
  else {
    uVar1 = FUN_180510708(uVar2,0);
    uVar2 = (ulonglong)uVar1;
  }
  return (int)uVar2;
}



/* ===== 1805108a0 isalnum ===== */

/* Library Function - Single Match
    isalnum
   
   Library: Visual Studio 2019 Release */

int __cdecl isalnum(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180c9f7dc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_180919760 + (longlong)_C * 2) & 0x107;
    }
  }
  else {
    lVar2 = FUN_180529860();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 0x107;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,0x107,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}



/* ===== 180510950 isalpha ===== */

/* Library Function - Single Match
    isalpha
   
   Library: Visual Studio 2019 Release */

int __cdecl isalpha(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180c9f7dc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_180919760 + (longlong)_C * 2) & 0x103;
    }
  }
  else {
    lVar2 = FUN_180529860();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 0x103;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,0x103,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}



/* ===== 180510a00 isdigit ===== */

/* Library Function - Single Match
    isdigit
   
   Library: Visual Studio 2019 Release */

int __cdecl isdigit(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180c9f7dc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_180919760 + (longlong)_C * 2) & 4;
    }
  }
  else {
    lVar2 = FUN_180529860();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 4;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,4,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}



/* ===== 180510ab0 islower ===== */

/* Library Function - Single Match
    islower
   
   Library: Visual Studio 2019 Release */

int __cdecl islower(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180c9f7dc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_180919760 + (longlong)_C * 2) & 2;
    }
  }
  else {
    lVar2 = FUN_180529860();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 2;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,2,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}



/* ===== 180510b60 isspace ===== */

/* Library Function - Single Match
    isspace
   
   Library: Visual Studio 2019 Release */

int __cdecl isspace(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180c9f7dc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_180919760 + (longlong)_C * 2) & 8;
    }
  }
  else {
    lVar2 = FUN_180529860();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 8;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,8,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}



/* ===== 180510c10 isupper ===== */

/* Library Function - Single Match
    isupper
   
   Library: Visual Studio 2019 Release */

int __cdecl isupper(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180c9f7dc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_180919760 + (longlong)_C * 2) & 1;
    }
  }
  else {
    lVar2 = FUN_180529860();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 1;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,1,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}



/* ===== 180510cc0 isxdigit ===== */

/* Library Function - Single Match
    isxdigit
   
   Library: Visual Studio 2019 Release */

int __cdecl isxdigit(int _C)

{
  int iVar1;
  longlong lVar2;
  longlong *local_res10 [3];
  
  if (DAT_180c9f7dc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_180919760 + (longlong)_C * 2) & 0x80;
    }
  }
  else {
    lVar2 = FUN_180529860();
    local_res10[0] = *(longlong **)(lVar2 + 0x90);
    __acrt_update_locale_info(lVar2,local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 0x80;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,0x80,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}



/* ===== 180510d6c _fgetc_nolock ===== */

/* Library Function - Single Match
    _fgetc_nolock
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _fgetc_nolock(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_18052c1b4();
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}



/* ===== 180510db0 _fgetc_nolock ===== */

ulonglong _fgetc_nolock(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = (int *)(param_1 + 2);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar3 = FUN_18052c1b4();
      return uVar3;
    }
    uVar3 = (ulonglong)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  return uVar3;
}



/* ===== 180510db8 FUN_180510db8 ===== */

undefined4 FUN_180510db8(FILE *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  
  local_18 = auStack_38;
  if (param_1 == (FILE *)0x0) {
    local_18 = auStack_38;
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x16;
    FUN_180527740();
    return 0xffffffff;
  }
  FUN_1805110a4();
  bVar1 = true;
  if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
    uVar2 = _fileno(param_1);
    if (uVar2 + 2 < 2) {
      puVar6 = &DAT_1809198d0;
    }
    else {
      puVar6 = (undefined *)
               ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
    }
    puVar5 = &DAT_1809198d0;
    if (puVar6[0x39] == '\0') {
      if (1 < uVar2 + 2) {
        puVar5 = (undefined *)
                 ((&DAT_180c9f990)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if ((puVar5[0x3d] & 1) == 0) goto LAB_180510e84;
    }
    bVar1 = false;
  }
LAB_180510e84:
  if (bVar1) {
    uVar3 = _fgetc_nolock(param_1);
    FUN_1805110b0(param_1);
  }
  else {
    puVar4 = (undefined4 *)FUN_18051bfb0();
    *puVar4 = 0x16;
    FUN_180527740();
    FUN_18053e7f0(local_18,0x180510eaa);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* ===== 180510ecc FUN_180510ecc ===== */

undefined8 FUN_180510ecc(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  
  lVar1 = 0;
  lVar4 = 3;
  if (DAT_180c9f548 == 0) {
    DAT_180c9f548 = 0x200;
  }
  else if (DAT_180c9f548 < 3) {
    DAT_180c9f548 = 3;
  }
  DAT_180c9f550 = _calloc_base((longlong)DAT_180c9f548,8);
  FUN_1805277b0(0);
  if (DAT_180c9f550 == 0) {
    DAT_180c9f548 = 3;
    DAT_180c9f550 = _calloc_base(3,8);
    FUN_1805277b0(0);
    if (DAT_180c9f550 == 0) {
      return 0xffffffff;
    }
  }
  lVar2 = 0;
  puVar3 = &DAT_180919578;
  puVar5 = &DAT_180919560;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + 0x30),4000,0);
    *(undefined **)(lVar1 + DAT_180c9f550) = puVar5;
    if (*(longlong *)((&DAT_180c9f990)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar5 = puVar5 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 0;
}



/* ===== 180510fec __acrt_iob_func ===== */

/* Library Function - Single Match
    __acrt_iob_func
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined * __acrt_iob_func(ulonglong param_1)

{
  return &DAT_180919560 + (param_1 & 0xffffffff) * 0x58;
}



/* ===== 180511000 __acrt_uninitialize_stdio ===== */

/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_18052cff8();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 *)(lVar1 + DAT_180c9f550));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + DAT_180c9f550) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_1805277b0(DAT_180c9f550);
  DAT_180c9f550 = 0;
  return;
}



/* ===== 18051105c _get_stream_buffer_pointers ===== */

/* Library Function - Single Match
    _get_stream_buffer_pointers
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
_get_stream_buffer_pointers(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    uVar2 = 0x16;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      *param_2 = param_1 + 8;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = param_1;
    }
    if (param_4 != (longlong *)0x0) {
      *param_4 = param_1 + 0x10;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 1805110a4 FUN_1805110a4 ===== */

void FUN_1805110a4(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001805110a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



/* ===== 1805110b0 FUN_1805110b0 ===== */

void FUN_1805110b0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001805110b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



/* ===== 1805110bc operator()<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_2831f20263db5b546e098b45503eb778>,class <lambda_5856287d7ecd2be6c9197bb4007c3f6e> &
   __ptr64,class <lambda_0838d7e100fbcbd261b69cfea6abb102> >(class
   <lambda_2831f20263db5b546e098b45503eb778> && __ptr64,class
   <lambda_5856287d7ecd2be6c9197bb4007c3f6e> & __ptr64,class
   <lambda_0838d7e100fbcbd261b69cfea6abb102> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_5d4c3fee44080f75d5d9762853974fe0>,class <lambda_532e024f4337e6fc7ad266c2bef9f4ed> &
   __ptr64,class <lambda_c87bdc10097eb2402edb8ba9bdf0697b> >(class
   <lambda_5d4c3fee44080f75d5d9762853974fe0> && __ptr64,class
   <lambda_532e024f4337e6fc7ad266c2bef9f4ed> & __ptr64,class
   <lambda_c87bdc10097eb2402edb8ba9bdf0697b> && __ptr64) __ptr64
    public: unsigned __int64 __cdecl __crt_seh_guarded_call<unsigned __int64>::operator()<class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5>,class <lambda_96f4279ff90247a4c5c5d9824f56f8c1> &
   __ptr64,class <lambda_4606be27f17b5e5579e09050fab91818> >(class
   <lambda_bdbcead8b570fa3d5ec6d9679862a6e5> && __ptr64,class
   <lambda_96f4279ff90247a4c5c5d9824f56f8c1> & __ptr64,class
   <lambda_4606be27f17b5e5579e09050fab91818> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_1805110a4(*param_2);
  uVar1 = FUN_1805110fc(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1805110fc FUN_1805110fc ===== */

undefined8 FUN_1805110fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined8 *)*param_1;
  uVar3 = FUN_1805292d8(uVar2);
  uVar4 = FUN_180511218(*(undefined8 *)param_1[2],*(undefined8 *)param_1[3],
                        *(undefined8 *)param_1[4],*(undefined8 *)*param_1,param_1[1]);
  FUN_1805293a0(uVar3,uVar2,uVar1);
  return uVar4;
}



/* ===== 18051117c FUN_18051117c ===== */

undefined8
FUN_18051117c(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
             )

{
  undefined8 uVar1;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_48 [8];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 *local_20;
  longlong *local_18;
  longlong *local_10;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    if (param_4 != 0) {
      local_30 = &local_res20;
      local_28 = param_5;
      local_20 = &local_res8;
      local_18 = &local_res10;
      local_10 = &local_res18;
      local_40 = param_4;
      local_38 = param_4;
      uVar1 = operator()<>(local_48,&local_38,&local_30,&local_40);
      return uVar1;
    }
    *(undefined1 *)(param_5 + 0x30) = 1;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_5);
  }
  return 0;
}



/* ===== 180511218 FUN_180511218 ===== */

ulonglong FUN_180511218(char *param_1,ulonglong param_2,ulonglong param_3,FILE *param_4,
                       longlong param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((param_4 != (FILE *)0x0) &&
       ((param_1 != (char *)0x0 && (param_3 <= 0xffffffffffffffff / param_2)))) {
      if (((ulonglong)param_4->_base & 0x4c000000000) == 0) {
        uVar8 = 0x1000;
      }
      else {
        uVar8 = param_4->_charbuf;
      }
      uVar6 = param_2 * param_3;
      do {
        if (uVar6 == 0) {
          return param_3;
        }
        if ((((ulonglong)param_4->_base & 0xc000000000) == 0) || (*(int *)&param_4->_base == 0)) {
          if (uVar8 <= uVar6) {
            if ((((ulonglong)param_4->_base & 0xc000000000) != 0) &&
               (iVar2 = FUN_180510248(param_4), iVar2 != 0)) goto LAB_1805113cf;
            uVar4 = uVar6;
            if (uVar8 != 0) {
              uVar4 = uVar6 - uVar6 % (ulonglong)uVar8;
            }
            uVar7 = 0xfffffffe;
            if (uVar4 < 0xfffffffe) {
              uVar7 = (uint)uVar4;
            }
            iVar2 = _fileno(param_4);
            uVar3 = FUN_18052b3ac(iVar2,param_1,uVar7,param_5);
            if (uVar3 != 0xffffffff) {
              uVar5 = uVar3;
              if (uVar7 < uVar3) {
                uVar5 = uVar7;
              }
              uVar4 = (ulonglong)uVar5;
              uVar6 = uVar6 - uVar4;
              if (uVar7 <= uVar3) goto LAB_180511416;
            }
LAB_1805113ca:
            LOCK();
            puVar1 = (uint *)((longlong)&param_4->_base + 4);
            *puVar1 = *puVar1 | 0x10;
            UNLOCK();
LAB_1805113cf:
            return (param_2 * param_3 - uVar6) / param_2;
          }
          iVar2 = FUN_18052a830((int)*param_1,param_4,param_5);
          if (iVar2 == -1) goto LAB_1805113cf;
          uVar8 = param_4->_charbuf;
          uVar6 = uVar6 - 1;
          if ((int)uVar8 < 1) {
            uVar8 = 1;
            uVar4 = 1;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          if (*(int *)&param_4->_base < 0) goto LAB_1805113ca;
          if (((ulonglong)param_4->_base & 0x100000000) != 0) goto LAB_1805113cf;
          uVar4 = uVar6;
          if ((ulonglong)(longlong)*(int *)&param_4->_base <= uVar6) {
            uVar4 = (longlong)*(int *)&param_4->_base;
          }
          FUN_180540530(param_4->_ptr,param_1,uVar4);
          *(int *)&param_4->_base = *(int *)&param_4->_base - (int)uVar4;
          uVar6 = uVar6 - uVar4;
          param_4->_ptr = param_4->_ptr + uVar4;
        }
LAB_180511416:
        param_1 = param_1 + uVar4;
      } while( true );
    }
    *(undefined1 *)(param_5 + 0x30) = 1;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_5);
  }
  return 0;
}



