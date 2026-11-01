/* ===== 180394820 FUN_180394820 ===== */

char * FUN_180394820(char *param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = 1;
  bVar5 = (*param_1 - 0x2bU & 0xfd) == 0;
  if (bVar5) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
  }
  uVar3 = (uint)bVar5;
  cVar2 = *param_1;
  while ((cVar2 != '\0' && ((byte)(*param_1 - 0x30U) < 10))) {
    if ((int)uVar3 < 0x3f) {
      lVar1 = (longlong)(int)uVar3;
      uVar3 = uVar3 + 1;
      param_2[lVar1] = *param_1;
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  }
  cVar2 = *param_1;
  if (cVar2 == '.') {
    if ((int)uVar3 < 0x3f) {
      lVar1 = (longlong)(int)uVar3;
      uVar3 = uVar3 + 1;
      param_2[lVar1] = '.';
    }
    param_1 = param_1 + 1;
    if (*param_1 == '\0') goto LAB_180394942;
    while (cVar2 = *param_1, (byte)(cVar2 - 0x30U) < 10) {
      if ((int)uVar3 < 0x3f) {
        lVar1 = (longlong)(int)uVar3;
        uVar3 = uVar3 + 1;
        param_2[lVar1] = cVar2;
      }
      param_1 = param_1 + 1;
      if (*param_1 == '\0') {
        param_2[(int)uVar3] = '\0';
        return param_1;
      }
    }
  }
  if ((((cVar2 + 0xbbU & 0xdf) == 0) && (param_1[1] != 'm')) && (param_1[1] != 'x')) {
    if ((int)uVar3 < 0x3f) {
      lVar1 = (longlong)(int)uVar3;
      uVar3 = uVar3 + 1;
      param_2[lVar1] = cVar2;
    }
    cVar2 = param_1[1];
    if ((cVar2 - 0x2bU & 0xfd) == 0) {
      if ((int)uVar3 < 0x3f) {
        lVar4 = (longlong)(int)uVar3;
        uVar3 = uVar3 + 1;
        param_2[lVar4] = cVar2;
      }
      cVar2 = param_1[2];
      lVar4 = 2;
    }
    param_1 = param_1 + lVar4;
    while ((cVar2 != '\0' && ((byte)(*param_1 - 0x30U) < 10))) {
      if ((int)uVar3 < 0x3f) {
        lVar4 = (longlong)(int)uVar3;
        uVar3 = uVar3 + 1;
        param_2[lVar4] = *param_1;
      }
      param_1 = param_1 + 1;
      cVar2 = *param_1;
    }
  }
LAB_180394942:
  param_2[(int)uVar3] = '\0';
  return param_1;
}



/* ===== 180394950 FUN_180394950 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_180394950(char *param_1)

{
  char cVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auStackY_68 [32];
  undefined2 local_38;
  undefined1 local_36;
  float local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStackY_68;
  iVar3 = sscanf(param_1,"rgb(%u, %u, %u)",&local_20,&local_1c,local_18);
  if (iVar3 != 3) {
    param_1 = param_1 + 4;
    local_38 = 0x2c2c;
    uVar6 = 0;
    local_36 = 0x29;
LAB_1803949b0:
    cVar1 = *param_1;
    while ((cVar1 != '\0' && (lVar4 = FUN_1804ef420(&DAT_18089ece0,(int)*param_1), lVar4 != 0))) {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    if (*param_1 == '+') {
      param_1 = param_1 + 1;
    }
    if (*param_1 != '\0') {
      dVar2 = (double)FUN_1803946b0(param_1);
      cVar1 = *param_1;
      local_30[uVar6] = (float)dVar2;
      while (cVar1 != '\0') {
        if (9 < (byte)(*param_1 - 0x30U)) {
          if (*param_1 == '.') {
            cVar1 = param_1[1];
            param_1 = param_1 + 1;
            if ((byte)(cVar1 - 0x30U) < 10) goto joined_r0x000180394a3d;
            goto LAB_180394af7;
          }
          break;
        }
        param_1 = param_1 + 1;
        cVar1 = *param_1;
      }
      goto LAB_180394a51;
    }
    goto LAB_180394af7;
  }
LAB_180394b10:
  if (0xff < local_20) {
    local_20 = 0xff;
  }
  if (0xff < local_1c) {
    local_1c = 0xff;
  }
  uVar5 = 0xff;
  if (local_18[0] < 0x100) {
    uVar5 = local_18[0];
  }
  return (uVar5 << 8 | local_1c) << 8 | local_20;
joined_r0x000180394a3d:
  while ((cVar1 != '\0' && ((byte)(*param_1 - 0x30U) < 10))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
LAB_180394a51:
  if (*param_1 != '%') goto LAB_180394af7;
  param_1 = param_1 + 1;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (lVar4 = FUN_1804ef420(&DAT_18089ece0,(int)*param_1), lVar4 != 0))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (*param_1 != *(char *)((longlong)&local_38 + uVar6)) goto LAB_180394af7;
  param_1 = param_1 + 1;
  uVar5 = (int)uVar6 + 1;
  uVar6 = (ulonglong)uVar5;
  if (2 < (int)uVar5) goto code_r0x000180394aa3;
  goto LAB_1803949b0;
code_r0x000180394aa3:
  if (uVar5 == 3) {
    fVar7 = (float)FUN_180519080(local_30[0] * _DAT_1808ac5fc);
    local_20 = (uint)(longlong)fVar7;
    fVar7 = (float)FUN_180519080(local_30[1] * _DAT_1808ac5fc);
    local_1c = (uint)(longlong)fVar7;
    fVar7 = (float)FUN_180519080(local_30[2] * _DAT_1808ac5fc);
    local_18[0] = (uint)(longlong)fVar7;
  }
  else {
LAB_180394af7:
    local_1c = 0x80;
    local_18[0] = 0x80;
    local_20 = 0x80;
  }
  goto LAB_180394b10;
}



/* ===== 180394b60 FUN_180394b60 ===== */

ulonglong FUN_180394b60(char *param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  ulonglong uVar4;
  uint uVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  
  cVar1 = *param_1;
  while (cVar1 == ' ') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  sVar3 = strlen(param_1);
  if (sVar3 != 0) {
    if (*param_1 == '#') {
      local_res18[0] = 0;
      local_res8[0] = 0;
      local_res10[0] = 0;
      iVar2 = sscanf(param_1,"#%2x%2x%2x",local_res18,local_res8,local_res10);
      if (iVar2 == 3) {
        return (ulonglong)((local_res10[0] << 8 | local_res8[0]) << 8 | local_res18[0]);
      }
      iVar2 = sscanf(param_1,"#%1x%1x%1x",local_res18,local_res8,local_res10);
      if (iVar2 == 3) {
        return (ulonglong)
               (local_res8[0] * 0x1100 | local_res10[0] * 0x110000 | local_res18[0] * 0x11);
      }
      return 0x808080;
    }
    if ((((3 < sVar3) && (*param_1 == 'r')) && (param_1[1] == 'g')) &&
       ((param_1[2] == 'b' && (param_1[3] == '(')))) {
      uVar4 = FUN_180394950(param_1);
      return uVar4;
    }
  }
  uVar4 = 0;
  do {
    iVar2 = strcmp((&PTR_DAT_180960f80)[uVar4 * 2],param_1);
    if (iVar2 == 0) {
      uVar5 = (&DAT_180960f88)[uVar4 * 4];
      goto LAB_180394cbb;
    }
    uVar5 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar5;
  } while ((int)uVar5 < 0x93);
  uVar5 = 0x808080;
LAB_180394cbb:
  return (ulonglong)uVar5;
}



/* ===== 180394ce0 FUN_180394ce0 ===== */

undefined8 FUN_180394ce0(char *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *param_1;
  if (cVar1 == 'p') {
    cVar1 = param_1[1];
    if (cVar1 == 'x') {
      return 1;
    }
    if (cVar1 == 't') {
      return 2;
    }
    uVar2 = 0;
    if (cVar1 == 'c') {
      uVar2 = 3;
    }
    return uVar2;
  }
  if (cVar1 == 'm') {
    uVar2 = 0;
    if (param_1[1] == 'm') {
      uVar2 = 4;
    }
    return uVar2;
  }
  if (cVar1 == 'c') {
    uVar2 = 0;
    if (param_1[1] == 'm') {
      uVar2 = 5;
    }
    return uVar2;
  }
  if (cVar1 == 'i') {
    uVar2 = 0;
    if (param_1[1] == 'n') {
      uVar2 = 6;
    }
    return uVar2;
  }
  if (cVar1 == '%') {
    return 7;
  }
  if (cVar1 != 'e') {
    return 0;
  }
  if (param_1[1] == 'm') {
    return 8;
  }
  uVar2 = 0;
  if (param_1[1] == 'x') {
    uVar2 = 9;
  }
  return uVar2;
}



/* ===== 180394d80 FUN_180394d80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180394d80(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_88 [36];
  undefined4 uStack_64;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  uVar1 = FUN_180394820(param_1,local_58);
  uStack_64 = FUN_180394ce0(uVar1);
  dVar2 = (double)FUN_1803946b0(local_58);
  return CONCAT44(uStack_64,(float)dVar2);
}



/* ===== 180394de0 FUN_180394de0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180394de0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined4 uStack_84;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_180394820(param_2,local_78);
  uVar1 = FUN_180394ce0(uVar2);
  dVar3 = (double)FUN_1803946b0(local_78);
  local_88 = (float)dVar3;
  uStack_84 = uVar1;
  FUN_180393980(param_1,CONCAT44(uVar1,local_88),param_3,param_4);
  return;
}



/* ===== 180394e80 FUN_180394e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180394e80(char *param_1,longlong param_2,int param_3,int *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  double dVar4;
  undefined1 auStack_a8 [48];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  *param_4 = 0;
  cVar1 = *param_1;
  pcVar2 = param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    if (*pcVar2 == '(') break;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  cVar1 = *pcVar2;
  pcVar3 = pcVar2;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    if (*pcVar3 == ')') break;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  while( true ) {
    while( true ) {
      if (pcVar3 <= pcVar2) {
        return (int)pcVar3 - (int)param_1;
      }
      cVar1 = *pcVar2;
      if ((((cVar1 - 0x2bU & 0xfc) == 0) && (cVar1 != ',')) || ((byte)(cVar1 - 0x30U) < 10)) break;
      pcVar2 = pcVar2 + 1;
    }
    if (param_3 <= *param_4) break;
    pcVar2 = (char *)FUN_180394820(pcVar2,local_78);
    dVar4 = (double)FUN_1803946b0(local_78);
    *(float *)(param_2 + (longlong)*param_4 * 4) = (float)dVar4;
    *param_4 = *param_4 + 1;
  }
  return 0;
}



/* ===== 180394f90 FUN_180394f90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180394f90(float *param_1,char *param_2)

{
  char cVar1;
  double dVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_e8 [32];
  float local_c8 [4];
  undefined1 local_b8 [64];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_e8;
  iVar5 = 0;
  cVar1 = *param_2;
  pcVar4 = param_2;
  while (cVar1 != '\0') {
    if (*pcVar4 == '(') {
      cVar1 = *pcVar4;
      local_c8[0] = SUB84(pcVar4,0);
      local_c8[1] = (float)((ulonglong)pcVar4 >> 0x20);
      pcVar7 = pcVar4;
      goto joined_r0x0001803950fd;
    }
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
LAB_180394ff1:
  iVar6 = 1;
  goto LAB_180394ff6;
joined_r0x0001803950fd:
  if (cVar1 == '\0') goto LAB_180394ff1;
  if (*pcVar7 == ')') {
    if (pcVar4 < pcVar7) goto LAB_180395140;
    goto LAB_180395195;
  }
  pcVar7 = pcVar7 + 1;
  cVar1 = *pcVar7;
  goto joined_r0x0001803950fd;
LAB_180395140:
  do {
    cVar1 = *pcVar4;
    if ((((cVar1 - 0x2bU & 0xfc) == 0) && (cVar1 != ',')) || ((byte)(cVar1 - 0x30U) < 10)) {
      if (2 < iVar5) {
        iVar6 = 0;
        goto LAB_1803951ba;
      }
      pcVar4 = (char *)FUN_180394820(pcVar4,local_b8);
      dVar2 = (double)FUN_1803946b0(local_b8);
      lVar3 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      local_c8[lVar3] = (float)dVar2;
    }
    else {
      pcVar4 = pcVar4 + 1;
    }
  } while (pcVar4 < pcVar7);
LAB_180395195:
  iVar6 = (int)pcVar7 - (int)param_2;
  if (iVar5 == 1) {
    local_c8[1] = 0.0;
    local_c8[2] = 0.0;
  }
  else if (1 < iVar5) {
LAB_1803951ba:
    fVar16 = (float)((uint)local_c8[2] ^ DAT_1808adec0) + 0.0;
    fVar15 = (float)((uint)local_c8[1] ^ DAT_1808adec0) + 0.0;
    goto LAB_180395002;
  }
LAB_180394ff6:
  fVar16 = 0.0;
  fVar15 = 0.0;
LAB_180395002:
  fVar13 = (local_c8[0] / DAT_1808acb58) * DAT_1808ac680;
  fVar8 = (float)FUN_180517200(fVar13);
  fVar9 = (float)FUN_180517790(fVar13);
  fVar10 = (float)((uint)fVar9 ^ DAT_1808adec0);
  fVar12 = fVar8 * 0.0 + fVar10;
  fVar14 = fVar8 + fVar10 * 0.0;
  fVar11 = fVar9 + fVar8 * 0.0;
  fVar13 = fVar9 * 0.0 + fVar8;
  fVar10 = fVar15 * fVar8 + fVar10 * fVar16 + 0.0;
  fVar15 = fVar15 * fVar9 + fVar16 * fVar8 + 0.0;
  if (1 < iVar5) {
    fVar16 = fVar12 * 0.0;
    fVar9 = fVar15 * 0.0;
    fVar15 = fVar10 * 0.0 + fVar15 + local_c8[2];
    fVar12 = fVar13 * 0.0 + fVar12;
    fVar8 = fVar14 * 0.0;
    fVar10 = fVar9 + fVar10 + local_c8[1];
    fVar14 = fVar11 * 0.0 + fVar14;
    fVar13 = fVar16 + fVar13;
    fVar11 = fVar8 + fVar11;
  }
  *param_1 = fVar14;
  param_1[1] = fVar11;
  param_1[2] = fVar12;
  param_1[3] = fVar13;
  param_1[4] = fVar10;
  param_1[5] = fVar15;
  return iVar6;
}



/* ===== 180395260 FUN_180395260 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180395260(undefined8 *param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_f8 [32];
  int local_d8 [2];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_f8;
  *param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  uVar8 = _UNK_1808adaf8;
  uVar7 = _DAT_1808adaf0;
  uVar6 = _UNK_1808ad31c;
  uVar5 = _UNK_1808ad318;
  uVar4 = _UNK_1808ad314;
  uVar3 = _DAT_1808ad310;
  fVar2 = DAT_1808acb58;
  fVar1 = DAT_1808ac680;
  if (*param_2 != '\0') {
    uVar11 = (undefined4)local_c0;
    uVar12 = (undefined4)((ulonglong)local_c0 >> 0x20);
    do {
      iVar9 = strncmp(param_2,"matrix",6);
      if (iVar9 == 0) {
        local_d8[0] = 0;
        iVar9 = FUN_180394e80(param_2,&local_a0,6,local_d8);
        if (local_d8[0] == 6) {
          local_d0 = local_a0;
          uStack_cc = uStack_9c;
          uStack_c8 = uStack_98;
          uStack_c4 = uStack_94;
          local_c0 = local_90;
          uVar11 = (int)local_90;
          uVar12 = (int)((ulonglong)local_90 >> 0x20);
        }
LAB_18039550e:
        if (iVar9 == 0) goto LAB_180395541;
        local_90 = CONCAT44(uVar12,uVar11);
        local_a0 = local_d0;
        uStack_9c = uStack_cc;
        uStack_98 = uStack_c8;
        uStack_94 = uStack_c4;
        FUN_180392ba0(&local_a0,param_1);
        lVar10 = (longlong)iVar9;
        *param_1 = CONCAT44(uStack_9c,local_a0);
        param_1[1] = CONCAT44(uStack_94,uStack_98);
        param_1[2] = local_90;
      }
      else {
        iVar9 = strncmp(param_2,"translate",9);
        if (iVar9 == 0) {
          local_d8[0] = 0;
          iVar9 = FUN_180394e80(param_2,&local_b0,2,local_d8);
          if (local_d8[0] == 1) {
            local_ac = 0;
          }
          local_c0 = CONCAT44(local_ac,local_b0);
          local_d0 = (undefined4)uVar7;
          uStack_cc = (undefined4)((ulonglong)uVar7 >> 0x20);
          uStack_c8 = (undefined4)uVar8;
          uStack_c4 = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar11 = local_b0;
          uVar12 = local_ac;
          goto LAB_18039550e;
        }
        iVar9 = strncmp(param_2,"scale",5);
        if (iVar9 == 0) {
          local_d8[0] = 0;
          iVar9 = FUN_180394e80(param_2,&local_a8,2,local_d8);
          if (local_d8[0] == 1) {
            local_a4 = local_a8;
          }
          local_d0 = local_a8;
          uStack_cc = 0;
          uStack_c8 = 0;
          uStack_c4 = local_a4;
LAB_18039549e:
          local_c0 = 0;
          uVar11 = 0;
          uVar12 = 0;
          goto LAB_18039550e;
        }
        iVar9 = strncmp(param_2,"rotate",6);
        if (iVar9 == 0) {
          iVar9 = FUN_180394f90(&local_d0,param_2);
          uVar11 = (int)local_c0;
          uVar12 = (int)((ulonglong)local_c0 >> 0x20);
          goto LAB_18039550e;
        }
        iVar9 = strncmp(param_2,"skewX",5);
        if (iVar9 == 0) {
          local_d8[0] = 0;
          iVar9 = FUN_180394e80(param_2,&local_b8,1,local_d8);
          local_d0 = 0x3f800000;
          uStack_cc = 0;
          uStack_c8 = FUN_18053f920((local_b8 / fVar2) * fVar1);
          uStack_c4 = 0x3f800000;
          goto LAB_18039549e;
        }
        iVar9 = strncmp(param_2,"skewY",5);
        if (iVar9 == 0) {
          local_d8[0] = 0;
          iVar9 = FUN_180394e80(param_2,&local_b4,1,local_d8);
          local_d0 = 0x3f800000;
          uStack_cc = FUN_18053f920((local_b4 / fVar2) * fVar1);
          uStack_c8 = uVar3;
          uStack_c4 = uVar4;
          local_c0 = CONCAT44(uVar6,uVar5);
          uVar11 = uVar5;
          uVar12 = uVar6;
          goto LAB_18039550e;
        }
LAB_180395541:
        lVar10 = 1;
      }
      param_2 = param_2 + lVar10;
    } while (*param_2 != '\0');
  }
  return;
}



/* ===== 1803955b0 FUN_1803955b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1803955b0(longlong param_1,char *param_2,longlong param_3)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  char local_c8 [64];
  ulonglong local_88;
  
  uVar3 = _DAT_1808ade90;
  fVar2 = DAT_1808ac540;
  local_88 = DAT_180919500 ^ (ulonglong)auStack_e8;
  if (*param_2 == 'n') {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    fVar10 = 0.0;
    if (*param_2 != '\0') {
LAB_180395642:
      iVar6 = 0;
      local_c8[0] = '\0';
      cVar1 = *param_2;
      while (cVar1 != '\0') {
        lVar4 = FUN_1804ef420(&DAT_18089ece0);
        if ((lVar4 == 0) && (*param_2 != ',')) {
          if (*param_2 != '\0') goto LAB_180395680;
          break;
        }
        param_2 = param_2 + 1;
        cVar1 = *param_2;
      }
      goto LAB_1803956b2;
    }
LAB_180395798:
    iVar6 = 0;
    if (3 < iVar7) {
      do {
        lVar4 = (longlong)iVar6;
        iVar6 = iVar6 + 4;
        fVar10 = fVar10 + *(float *)(param_3 + lVar4 * 4) + *(float *)(param_3 + 4 + lVar4 * 4) +
                 *(float *)(param_3 + 8 + lVar4 * 4) + *(float *)(param_3 + 0xc + lVar4 * 4);
      } while (iVar6 < iVar7 + -3);
    }
    for (; iVar6 < iVar7; iVar6 = iVar6 + 1) {
      fVar10 = fVar10 + *(float *)(param_3 + (longlong)iVar6 * 4);
    }
    if (fVar10 <= DAT_1808abf8c) {
      iVar7 = 0;
    }
  }
  return iVar7;
  while( true ) {
    if (iVar6 < 0x3f) {
      lVar4 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      local_c8[lVar4] = *param_2;
    }
    param_2 = param_2 + 1;
    if (*param_2 == '\0') break;
LAB_180395680:
    lVar4 = FUN_1804ef420(&DAT_18089ece0);
    if ((lVar4 != 0) || (*param_2 == ',')) break;
  }
LAB_1803956b2:
  local_c8[iVar6] = '\0';
  if (local_c8[0] == '\0') goto LAB_180395798;
  if (iVar7 < 8) {
    fVar11 = *(float *)(param_1 + 0x9c48);
    fVar8 = *(float *)(param_1 + 0x9c4c);
    uVar5 = FUN_180394d80(local_c8);
    fVar11 = fVar8 * fVar8 + fVar11 * fVar11;
    if (fVar11 < 0.0) {
      fVar11 = (float)FUN_18051af10(fVar11);
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    if (fVar2 < 0.0) {
      fVar8 = (float)FUN_18051af10(fVar2);
    }
    else {
      fVar8 = SQRT(fVar2);
    }
    uVar9 = FUN_180393980(param_1,uVar5,0,fVar11 / fVar8);
    lVar4 = (longlong)iVar7;
    iVar7 = iVar7 + 1;
    *(uint *)(param_3 + lVar4 * 4) = uVar9 & uVar3;
  }
  if (*param_2 == '\0') goto LAB_180395798;
  goto LAB_180395642;
}



/* ===== 180395820 FUN_180395820 ===== */

undefined8 FUN_180395820(longlong param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  pcVar9 = (char *)((longlong)*(int *)(param_1 + 0x9c00) * 0x138 + param_1);
  if (pcVar9 == (char *)0x0) {
    return 0;
  }
  lVar10 = 0;
  while (lVar8 = lVar10 + 1, param_2[lVar10] == "style"[lVar10]) {
    lVar10 = lVar8;
    if (lVar8 == 6) {
      FUN_180396310(param_1,param_3);
      return 1;
    }
  }
  lVar10 = 0;
  while (lVar8 = lVar10 + 1, param_2[lVar10] == "display"[lVar10]) {
    lVar10 = lVar8;
    if (lVar8 == 8) {
      lVar10 = 0;
      do {
        lVar8 = lVar10 + 1;
        if (param_3[lVar10] != (&DAT_1806dfd84)[lVar10]) {
          return 1;
        }
        lVar10 = lVar8;
      } while (lVar8 != 5);
      pcVar9[0x136] = '\0';
      return 1;
    }
  }
  lVar10 = 0;
  while (lVar8 = lVar10 + 1, param_2[lVar10] == (&DAT_18089f5e8)[lVar10]) {
    lVar10 = lVar8;
    if (lVar8 == 5) goto code_r0x000180395909;
  }
  lVar10 = 0;
  while (lVar8 = lVar10 + 1, param_2[lVar10] == "opacity"[lVar10]) {
    lVar10 = lVar8;
    if (lVar8 == 8) {
      dVar2 = (double)FUN_1803946b0(param_3);
      fVar14 = 0.0;
      if (0.0 <= (float)dVar2) {
        fVar14 = (float)dVar2;
      }
      fVar13 = DAT_1808ac34c;
      if (fVar14 <= DAT_1808ac34c) {
        fVar13 = fVar14;
      }
      *(float *)(pcVar9 + 0x60) = fVar13;
      return 1;
    }
  }
  iVar4 = strcmp(param_2,"fill-opacity");
  if (iVar4 == 0) {
    dVar2 = (double)FUN_1803946b0(param_3);
    fVar14 = 0.0;
    if (0.0 <= (float)dVar2) {
      fVar14 = (float)dVar2;
    }
    fVar13 = DAT_1808ac34c;
    if (fVar14 <= DAT_1808ac34c) {
      fVar13 = fVar14;
    }
    *(float *)(pcVar9 + 100) = fVar13;
    return 1;
  }
  lVar10 = 0;
  while (lVar8 = lVar10 + 1, param_2[lVar10] == "stroke"[lVar10]) {
    lVar10 = lVar8;
    if (lVar8 == 7) goto code_r0x000180395a7a;
  }
  iVar4 = strcmp(param_2,"stroke-width");
  if (iVar4 == 0) {
    fVar14 = *(float *)(param_1 + 0x9c4c) * *(float *)(param_1 + 0x9c4c) +
             *(float *)(param_1 + 0x9c48) * *(float *)(param_1 + 0x9c48);
    if (fVar14 < 0.0) {
      fVar14 = (float)FUN_18051af10(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    if (DAT_1808ac540 < 0.0) {
      fVar13 = (float)FUN_18051af10(DAT_1808ac540);
    }
    else {
      fVar13 = SQRT(DAT_1808ac540);
    }
    uVar5 = FUN_180394de0(param_1,param_3,0,fVar14 / fVar13);
    *(undefined4 *)(pcVar9 + 0xec) = uVar5;
    return 1;
  }
  iVar4 = strcmp(param_2,"stroke-dasharray");
  if (iVar4 == 0) {
    uVar5 = FUN_1803955b0(param_1,param_3,pcVar9 + 0xf4);
    *(undefined4 *)(pcVar9 + 0x114) = uVar5;
    return 1;
  }
  iVar4 = strcmp(param_2,"stroke-dashoffset");
  if (iVar4 == 0) {
    fVar14 = *(float *)(param_1 + 0x9c4c) * *(float *)(param_1 + 0x9c4c) +
             *(float *)(param_1 + 0x9c48) * *(float *)(param_1 + 0x9c48);
    if (fVar14 < 0.0) {
      fVar14 = (float)FUN_18051af10(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    if (DAT_1808ac540 < 0.0) {
      fVar13 = (float)FUN_18051af10(DAT_1808ac540);
    }
    else {
      fVar13 = SQRT(DAT_1808ac540);
    }
    uVar5 = FUN_180394de0(param_1,param_3,0,fVar14 / fVar13);
    *(undefined4 *)(pcVar9 + 0xf0) = uVar5;
    return 1;
  }
  iVar4 = strcmp(param_2,"stroke-opacity");
  if (iVar4 == 0) {
    dVar2 = (double)FUN_1803946b0(param_3);
    fVar14 = 0.0;
    if (0.0 <= (float)dVar2) {
      fVar14 = (float)dVar2;
    }
    fVar13 = DAT_1808ac34c;
    if (fVar14 <= DAT_1808ac34c) {
      fVar13 = fVar14;
    }
    *(float *)(pcVar9 + 0x68) = fVar13;
    return 1;
  }
  iVar4 = strcmp(param_2,"stroke-linecap");
  if (iVar4 == 0) {
    lVar10 = 0;
    while (lVar8 = lVar10 + 1, param_3[lVar10] == (&DAT_18089f4c4)[lVar10]) {
      lVar10 = lVar8;
      if (lVar8 == 5) {
        pcVar9[0x119] = '\0';
        return 1;
      }
    }
    lVar10 = 0;
    while (lVar8 = lVar10 + 1, param_3[lVar10] == "round"[lVar10]) {
      lVar10 = lVar8;
      if (lVar8 == 6) {
        pcVar9[0x119] = '\x01';
        return 1;
      }
    }
    lVar10 = 0;
    do {
      lVar8 = lVar10;
      bVar12 = param_3[lVar8] == "square"[lVar8];
      if (!bVar12) goto LAB_180395d87;
      lVar10 = lVar8 + 1;
    } while (lVar8 + 1 != 7);
    bVar12 = param_3[lVar8] == "square"[lVar8];
LAB_180395d87:
    cVar3 = '\0';
    if (bVar12) {
      cVar3 = '\x02';
    }
    pcVar9[0x119] = cVar3;
    return 1;
  }
  iVar4 = strcmp(param_2,"stroke-linejoin");
  if (iVar4 == 0) {
    lVar10 = 0;
    while (lVar8 = lVar10 + 1, param_3[lVar10] == "miter"[lVar10]) {
      lVar10 = lVar8;
      if (lVar8 == 6) {
        pcVar9[0x118] = '\0';
        return 1;
      }
    }
    lVar10 = 0;
    while (lVar8 = lVar10 + 1, param_3[lVar10] == "round"[lVar10]) {
      lVar10 = lVar8;
      if (lVar8 == 6) {
        pcVar9[0x118] = '\x01';
        return 1;
      }
    }
    lVar10 = 0;
    do {
      lVar8 = lVar10;
      bVar12 = param_3[lVar8] == "bevel"[lVar8];
      if (!bVar12) goto LAB_180395e46;
      lVar10 = lVar8 + 1;
    } while (lVar8 + 1 != 6);
    bVar12 = param_3[lVar8] == "bevel"[lVar8];
LAB_180395e46:
    cVar3 = '\0';
    if (bVar12) {
      cVar3 = '\x02';
    }
    pcVar9[0x118] = cVar3;
    return 1;
  }
  iVar4 = strcmp(param_2,"stroke-miterlimit");
  if (iVar4 == 0) {
    dVar2 = (double)FUN_1803946b0(param_3);
    fVar14 = 0.0;
    if (0.0 <= (float)dVar2) {
      fVar14 = (float)dVar2;
    }
    *(float *)(pcVar9 + 0x11c) = fVar14;
    return 1;
  }
  iVar4 = strcmp(param_2,"fill-rule");
  if (iVar4 == 0) {
    lVar10 = 0;
    while (lVar8 = lVar10 + 1, param_3[lVar10] == "nonzero"[lVar10]) {
      lVar10 = lVar8;
      if (lVar8 == 8) {
        pcVar9[0x120] = '\0';
        return 1;
      }
    }
    lVar10 = 0;
    do {
      lVar8 = lVar10;
      bVar12 = param_3[lVar8] == "evenodd"[lVar8];
      if (!bVar12) goto LAB_180395f07;
      lVar10 = lVar8 + 1;
    } while (lVar8 + 1 != 8);
    bVar12 = param_3[lVar8] == "evenodd"[lVar8];
LAB_180395f07:
    pcVar9[0x120] = bVar12;
    return 1;
  }
  iVar4 = strcmp(param_2,"font-size");
  if (iVar4 == 0) {
    fVar14 = *(float *)(param_1 + 0x9c4c) * *(float *)(param_1 + 0x9c4c) +
             *(float *)(param_1 + 0x9c48) * *(float *)(param_1 + 0x9c48);
    if (fVar14 < 0.0) {
      fVar14 = (float)FUN_18051af10(fVar14);
    }
    else {
      fVar14 = SQRT(fVar14);
    }
    if (DAT_1808ac540 < 0.0) {
      fVar13 = (float)FUN_18051af10(DAT_1808ac540);
    }
    else {
      fVar13 = SQRT(DAT_1808ac540);
    }
    uVar5 = FUN_180394de0(param_1,param_3,0,fVar14 / fVar13);
    *(undefined4 *)(pcVar9 + 0x124) = uVar5;
    return 1;
  }
  iVar4 = strcmp(param_2,"transform");
  if (iVar4 == 0) {
    FUN_180395260(&local_40,param_3);
    pcVar9 = pcVar9 + 0x40;
    local_58 = local_40;
    uStack_54 = uStack_3c;
    uStack_50 = uStack_38;
    uStack_4c = uStack_34;
    local_48 = local_30;
    FUN_180392ba0(&local_58);
    *(ulonglong *)pcVar9 = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(pcVar9 + 8) = CONCAT44(uStack_4c,uStack_50);
    *(undefined8 *)(pcVar9 + 0x10) = local_48;
    return 1;
  }
  iVar4 = strcmp(param_2,"stop-color");
  if (iVar4 == 0) {
    uVar5 = FUN_180394b60(param_3);
    *(undefined4 *)(pcVar9 + 0x128) = uVar5;
    return 1;
  }
  iVar4 = strcmp(param_2,"stop-opacity");
  if (iVar4 == 0) {
    dVar2 = (double)FUN_1803946b0(param_3);
    fVar14 = 0.0;
    if (0.0 <= (float)dVar2) {
      fVar14 = (float)dVar2;
    }
    fVar13 = DAT_1808ac34c;
    if (fVar14 <= DAT_1808ac34c) {
      fVar13 = fVar14;
    }
    *(float *)(pcVar9 + 300) = fVar13;
    return 1;
  }
  lVar10 = 0;
  while (lVar8 = lVar10 + 1, param_2[lVar10] == "offset"[lVar10]) {
    lVar10 = lVar8;
    if (lVar8 == 7) {
      uVar5 = FUN_180394de0(param_1,param_3,0,DAT_1808ac34c);
      *(undefined4 *)(pcVar9 + 0x130) = uVar5;
      return 1;
    }
  }
  iVar4 = strcmp(param_2,"paint-order");
  if (iVar4 != 0) {
    if (((*param_2 == 'i') && (param_2[1] == 'd')) && (param_2[2] == '\0')) {
      strncpy(pcVar9,param_3,0x3f);
      pcVar9[0x3f] = '\0';
      return 1;
    }
    lVar10 = 0;
    do {
      lVar8 = lVar10 + 1;
      if (param_2[lVar10] != "class"[lVar10]) {
        return 0;
      }
      lVar10 = lVar8;
    } while (lVar8 != 6);
    cVar3 = *param_3;
    do {
      if (cVar3 == '\0') {
        return 1;
      }
      lVar10 = FUN_1804ef420(&DAT_18089ece0,(int)*param_3);
      if (lVar10 == 0) {
        pcVar9 = param_3;
        if (*param_3 == '\0') {
          return 1;
        }
        do {
          lVar10 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar9);
          if (lVar10 != 0) break;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar9 != '\0');
        for (puVar1 = *(undefined8 **)(param_1 + 0x9c28); puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)puVar1[2]) {
          pcVar11 = (char *)*puVar1;
          iVar4 = strncmp(pcVar11,param_3,(longlong)pcVar9 - (longlong)param_3 & 0xffffffff);
          if ((iVar4 == 0) && (pcVar11[(longlong)pcVar9 - (longlong)param_3] == '\0')) {
            FUN_180396310(param_1,puVar1[1]);
          }
        }
      }
      else {
        pcVar9 = param_3 + 1;
      }
      cVar3 = *pcVar9;
      param_3 = pcVar9;
    } while( true );
  }
  lVar10 = 0;
  do {
    lVar8 = lVar10 + 1;
    if (param_3[lVar10] != "normal"[lVar10]) {
      iVar4 = strcmp(param_3,"fill stroke markers");
      if (iVar4 != 0) {
        iVar4 = strcmp(param_3,"fill markers stroke");
        if (iVar4 == 0) {
          pcVar9[0x137] = '$';
          return 1;
        }
        iVar4 = strcmp(param_3,"markers fill stroke");
        if (iVar4 == 0) {
          pcVar9[0x137] = '!';
          return 1;
        }
        iVar4 = strcmp(param_3,"markers stroke fill");
        if (iVar4 == 0) {
          pcVar9[0x137] = '\t';
          return 1;
        }
        iVar4 = strcmp(param_3,"stroke fill markers");
        if (iVar4 == 0) {
          pcVar9[0x137] = '\x12';
          return 1;
        }
        iVar4 = strcmp(param_3,"stroke markers fill");
        cVar3 = '\x18';
        if (iVar4 == 0) {
          cVar3 = '\x06';
        }
        pcVar9[0x137] = cVar3;
        return 1;
      }
      break;
    }
    lVar10 = lVar8;
  } while (lVar8 != 7);
  pcVar9[0x137] = '\x18';
  return 1;
code_r0x000180395909:
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if (param_3[lVar8] != (&DAT_1806dfd84)[lVar8]) goto LAB_18039593d;
    lVar10 = lVar8 + 1;
  } while (lVar8 + 1 != 5);
  if (param_3[lVar8] == (&DAT_1806dfd84)[lVar8]) {
    pcVar9[0x134] = '\0';
    return 1;
  }
LAB_18039593d:
  lVar10 = 4;
  iVar4 = strncmp(param_3,"url(",4);
  if (iVar4 != 0) {
    pcVar9[0x134] = '\x01';
    uVar5 = FUN_180394b60(param_3);
    *(undefined4 *)(pcVar9 + 0x58) = uVar5;
    return 1;
  }
  pcVar9[0x134] = '\x02';
  uVar7 = 0;
  if (param_3[4] != '\0') {
    lVar10 = (ulonglong)(param_3[4] == '#') + 4;
  }
  param_3 = param_3 + lVar10;
  do {
    cVar3 = *param_3;
    if ((cVar3 == '\0') || (cVar3 == ')')) break;
    pcVar9[uVar7 + 0x6c] = cVar3;
    param_3 = param_3 + 1;
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while ((int)uVar6 < 0x3f);
  pcVar9[(longlong)(int)uVar7 + 0x6c] = '\0';
  return 1;
code_r0x000180395a7a:
  lVar10 = 0;
  do {
    lVar8 = lVar10;
    if (param_3[lVar8] != (&DAT_1806dfd84)[lVar8]) goto LAB_180395aad;
    lVar10 = lVar8 + 1;
  } while (lVar8 + 1 != 5);
  if (param_3[lVar8] == (&DAT_1806dfd84)[lVar8]) {
    pcVar9[0x135] = '\0';
    return 1;
  }
LAB_180395aad:
  iVar4 = strncmp(param_3,"url(",4);
  if (iVar4 != 0) {
    pcVar9[0x135] = '\x01';
    uVar5 = FUN_180394b60(param_3);
    *(undefined4 *)(pcVar9 + 0x5c) = uVar5;
    return 1;
  }
  pcVar11 = param_3 + 4;
  pcVar9[0x135] = '\x02';
  uVar7 = 0;
  if (*pcVar11 != '\0') {
    pcVar11 = param_3 + (ulonglong)(*pcVar11 == '#') + 4;
  }
  do {
    cVar3 = *pcVar11;
    if ((cVar3 == '\0') || (cVar3 == ')')) break;
    pcVar9[uVar7 + 0xac] = cVar3;
    pcVar11 = pcVar11 + 1;
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while ((int)uVar6 < 0x3f);
  pcVar9[(longlong)(int)uVar7 + 0xac] = '\0';
  return 1;
}



/* ===== 180396310 FUN_180396310 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180396310(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auStack_458 [32];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_458;
  if (*param_2 == '\0') {
    return;
  }
  if (*param_2 == '\0') goto LAB_18039637c;
LAB_180396360:
  do {
    lVar3 = FUN_1804ef420(&DAT_18089ece0,(int)*param_2);
    if (lVar3 != 0) {
      param_2 = param_2 + 1;
      if (*param_2 != '\0') goto LAB_180396360;
    }
LAB_18039637c:
    cVar1 = *param_2;
    pcVar4 = param_2;
    while ((pcVar5 = pcVar4, cVar1 != '\0' && (*pcVar4 != ';'))) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    while ((param_2 < pcVar5 &&
           ((*pcVar5 == ';' || (lVar3 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar5), lVar3 != 0)))))
    {
      pcVar5 = pcVar5 + -1;
    }
    pcVar5 = pcVar5 + 1;
    for (pcVar7 = param_2; (pcVar2 = pcVar7, pcVar7 < pcVar5 && (*pcVar7 != ':'));
        pcVar7 = pcVar7 + 1) {
    }
    while ((param_2 < pcVar2 &&
           ((*pcVar2 == ':' || (lVar3 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar2), lVar3 != 0)))))
    {
      pcVar2 = pcVar2 + -1;
    }
    uVar6 = ((int)pcVar2 - (int)param_2) + 1;
    if ((int)uVar6 < 0x200) {
      lVar3 = (longlong)(int)uVar6;
      if (uVar6 != 0) goto LAB_180396424;
    }
    else {
      uVar6 = 0x1ff;
      lVar3 = 0x1ff;
LAB_180396424:
      FUN_180540530(local_238,param_2,lVar3);
      if (0x1ff < uVar6) goto LAB_180396515;
    }
    local_238[lVar3] = 0;
    while ((pcVar7 < pcVar5 &&
           ((*pcVar7 == ':' || (lVar3 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar7), lVar3 != 0)))))
    {
      pcVar7 = pcVar7 + 1;
    }
    uVar6 = (int)pcVar5 - (int)pcVar7;
    if ((int)uVar6 < 0x200) {
      lVar3 = (longlong)(int)uVar6;
      if (uVar6 != 0) goto LAB_18039648f;
    }
    else {
      uVar6 = 0x1ff;
      lVar3 = 0x1ff;
LAB_18039648f:
      FUN_180540530(local_438,pcVar7,lVar3);
      if (0x1ff < uVar6) {
LAB_180396515:
                    /* WARNING: Subroutine does not return */
        FUN_1804ed0f0();
      }
    }
    local_438[lVar3] = 0;
    FUN_180395820(param_1,local_238,local_438);
    if (*pcVar4 == '\0') {
      return;
    }
    param_2 = pcVar4 + 1;
    if (*param_2 == '\0') {
      return;
    }
  } while( true );
}



/* ===== 180396520 FUN_180396520 ===== */

void FUN_180396520(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  lVar2 = *param_2;
  do {
    if (lVar2 == 0) {
      return;
    }
    lVar2 = 0;
    do {
      lVar3 = lVar2;
      cVar1 = *(char *)(param_2[iVar4] + lVar3);
      bVar5 = cVar1 == "style"[lVar3];
      if (!bVar5) goto LAB_180396578;
      lVar2 = lVar3 + 1;
    } while (lVar3 + 1 != 6);
    bVar5 = cVar1 == "style"[lVar3];
LAB_180396578:
    if (bVar5) {
      FUN_180396310(param_1,param_2[(longlong)iVar4 + 1]);
    }
    else {
      FUN_180395820(param_1,param_2[iVar4]);
    }
    iVar4 = iVar4 + 2;
    lVar2 = param_2[iVar4];
  } while( true );
}



/* ===== 1803965c0 FUN_1803965c0 ===== */

undefined8 FUN_1803965c0(undefined1 param_1)

{
  switch(param_1) {
  case 0x41:
  case 0x61:
    return 7;
  default:
    return 0xffffffff;
  case 0x43:
  case 99:
    return 6;
  case 0x48:
  case 0x56:
  case 0x68:
  case 0x76:
    return 1;
  case 0x4c:
  case 0x4d:
  case 0x54:
  case 0x6c:
  case 0x6d:
  case 0x74:
    return 2;
  case 0x51:
  case 0x53:
  case 0x71:
  case 0x73:
    return 4;
  case 0x5a:
  case 0x7a:
    return 0;
  }
}



/* ===== 180396670 FUN_180396670 ===== */

float FUN_180396670(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 * param_1 + param_2 * param_2;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18051af10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar1 = param_3 * param_3 + param_4 * param_4;
  if (fVar1 < 0.0) {
    fVar1 = (float)FUN_18051af10();
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  fVar1 = (param_1 * param_3 + param_2 * param_4) / (fVar2 * fVar1);
  fVar2 = DAT_1808acda0;
  if (DAT_1808acda0 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = DAT_1808ac34c;
  if (fVar2 <= DAT_1808ac34c) {
    fVar1 = fVar2;
  }
  fVar2 = DAT_1808acda0;
  if (param_2 * param_3 <= param_1 * param_4) {
    fVar2 = DAT_1808ac34c;
  }
  fVar1 = (float)FUN_18053eb30(fVar1);
  return fVar1 * fVar2;
}



/* ===== 180396790 FUN_180396790 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180396790(longlong param_1,float *param_2,float *param_3,uint *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar10;
  undefined8 uVar8;
  uint uVar11;
  undefined8 uVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_res20;
  
  fVar20 = (float)(*param_4 & _DAT_1808ade90);
  local_res20 = (float)(param_4[1] & _DAT_1808ade90);
  bVar1 = DAT_1808ac180 < (double)(float)(param_4[3] & _DAT_1808ade90);
  fVar33 = (float)param_4[5];
  fVar34 = (float)param_4[6];
  bVar2 = DAT_1808ac180 < (double)(float)(param_4[4] & _DAT_1808ade90);
  if (param_5 != 0) {
    fVar33 = fVar33 + *param_2;
    fVar34 = fVar34 + *param_3;
  }
  fVar23 = *param_2 - fVar33;
  fVar25 = *param_3 - fVar34;
  fVar12 = fVar25 * fVar25 + fVar23 * fVar23;
  if (fVar12 < 0.0) {
    fVar12 = (float)FUN_18051af10(fVar12);
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  if (((fVar12 < DAT_1808abf8c) || (fVar20 < DAT_1808abf8c)) || (local_res20 < DAT_1808abf8c)) {
    FUN_1803937f0(param_1,fVar33,fVar34);
    *param_2 = fVar33;
    *param_3 = fVar34;
  }
  else {
    fVar17 = ((float)param_4[2] / DAT_1808acb58) * DAT_1808ac680;
    fVar12 = (float)FUN_180517790(fVar17);
    fVar17 = (float)FUN_180517200(fVar17);
    fVar30 = fVar12 * fVar25 * DAT_1808ac1f4 + fVar17 * fVar23 * DAT_1808ac1f4;
    fVar25 = fVar17 * fVar25 * DAT_1808ac1f4 - fVar12 * fVar23 * DAT_1808ac1f4;
    fVar23 = (fVar30 * fVar30) / (fVar20 * fVar20) + (fVar25 * fVar25) / (local_res20 * local_res20)
    ;
    if (DAT_1808ac34c < fVar23) {
      if (fVar23 < 0.0) {
        fVar23 = (float)FUN_18051af10(fVar23);
      }
      else {
        fVar23 = SQRT(fVar23);
      }
      local_res20 = fVar23 * local_res20;
      fVar20 = fVar23 * fVar20;
    }
    fVar13 = fVar20 * fVar20 * fVar25 * fVar25;
    fVar23 = fVar30 * fVar30 * local_res20 * local_res20;
    fVar15 = fVar23 + fVar13;
    if (fVar15 <= 0.0) {
      fVar13 = 0.0;
    }
    else {
      fVar23 = (local_res20 * local_res20 * fVar20 * fVar20 - fVar13) - fVar23;
      fVar13 = 0.0;
      if (0.0 <= fVar23) {
        fVar13 = fVar23;
      }
      fVar13 = fVar13 / fVar15;
      if (fVar13 < 0.0) {
        fVar13 = (float)FUN_18051af10(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
    }
    if (bVar1 == bVar2) {
      fVar13 = (float)((uint)fVar13 ^ DAT_1808adec0);
    }
    fVar15 = (fVar13 * fVar20 * fVar25) / local_res20;
    fVar32 = ((float)((uint)local_res20 ^ DAT_1808adec0) * fVar13 * fVar30) / fVar20;
    fVar23 = (fVar30 - fVar15) / fVar20;
    fVar13 = (float)FUN_180396670(DAT_1808ac34c,0,fVar23);
    fVar30 = (float)FUN_180396670(fVar23,(fVar25 - fVar32) / local_res20,
                                  ((float)((uint)fVar30 ^ DAT_1808adec0) - fVar15) / fVar20);
    uVar27 = _DAT_1808ade90;
    fVar25 = DAT_1808ac34c;
    fVar23 = DAT_1808ac1f4;
    if (bVar2) {
      if (fVar30 < 0.0) {
        fVar30 = fVar30 + DAT_1808ac7d0;
      }
    }
    else if (0.0 < fVar30) {
      fVar30 = fVar30 - DAT_1808ac7d0;
    }
    iVar5 = (int)((float)((uint)fVar30 & _DAT_1808ade90) / DAT_1808ac440 + DAT_1808ac34c);
    fVar21 = (fVar30 / (float)iVar5) * DAT_1808ac1f4;
    if ((DAT_1808abfbc <= fVar21) || (fVar21 <= _DAT_1808acd20)) {
      fVar6 = (float)FUN_180517200(fVar21);
      fVar21 = (float)FUN_180517790(fVar21);
      fVar21 = (fVar25 - fVar6) / fVar21;
    }
    else {
      fVar21 = fVar21 * DAT_1808ac1f4;
    }
    fVar25 = (float)((uint)(fVar21 * DAT_1808ac3fc) & uVar27);
    if (fVar30 < 0.0) {
      fVar25 = (float)((uint)fVar25 ^ DAT_1808adec0);
    }
    if (iVar5 < 0) {
      *param_2 = fVar33;
    }
    else {
      iVar4 = 0;
      fVar21 = *param_2;
      uVar27 = 0;
      fVar7 = (float)((uint)fVar12 ^ DAT_1808adec0);
      fVar6 = *param_3;
      fVar22 = 0.0;
      fVar26 = 0.0;
      fVar28 = 0.0;
      uVar29 = 0;
      fVar35 = 0.0;
      do {
        fVar18 = ((float)iVar4 / (float)iVar5) * fVar30 + fVar13;
        uVar8 = FUN_180517200(fVar18);
        uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar9 = FUN_180517790(fVar18);
        uVar11 = (uint)((ulonglong)uVar9 >> 0x20);
        fVar14 = (float)uVar8 * fVar20;
        fVar19 = (float)uVar9 * local_res20;
        fVar31 = (float)uVar8 * local_res20 * fVar25;
        fVar16 = (float)((uint)(float)uVar9 ^ DAT_1808adec0) * fVar20 * fVar25;
        fVar18 = fVar16 * fVar17 + fVar31 * fVar7;
        fVar24 = fVar14 * fVar17 + fVar19 * fVar7 +
                 (((fVar21 + fVar33) * fVar23 + fVar15 * fVar17) - fVar32 * fVar12);
        fVar16 = fVar31 * fVar17 + fVar16 * fVar12;
        fVar14 = fVar19 * fVar17 + fVar14 * fVar12 +
                 (fVar6 + fVar34) * fVar23 + fVar15 * fVar12 + fVar32 * fVar17;
        uVar3 = uVar11 ^ _UNK_1808adec4;
        if ((0 < iVar4) && (0 < *(int *)(param_1 + 0x9c10))) {
          FUN_180393740(param_1,CONCAT44(uVar27,fVar26 + fVar22),CONCAT44(uVar29,fVar28 + fVar35));
          FUN_180393740(param_1,CONCAT44(uVar10,fVar24 - fVar18),CONCAT44(uVar11,fVar14 - fVar16));
          FUN_180393740(param_1,CONCAT44(uVar10,fVar24),CONCAT44(uVar11,fVar14));
          uVar3 = 0;
        }
        uVar27 = uVar3;
        iVar4 = iVar4 + 1;
        fVar22 = fVar24;
        fVar26 = fVar18;
        fVar28 = fVar16;
        uVar29 = uVar10;
        fVar35 = fVar14;
      } while (iVar4 <= iVar5);
      *param_2 = fVar33;
    }
    *param_3 = fVar34;
  }
  return;
}



/* ===== 180396e60 FUN_180396e60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180396e60(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_188 [32];
  uint local_168;
  float local_158 [2];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  char local_128;
  char local_127;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_188;
  pcVar8 = (char *)0x0;
  iVar11 = 0;
  if (*param_2 != 0) {
    do {
      pbVar3 = (byte *)param_2[iVar11];
      uVar7 = *pbVar3 - 100;
      if (uVar7 == 0) {
        uVar7 = (uint)pbVar3[1];
      }
      if (uVar7 == 0) {
        pcVar8 = (char *)param_2[(longlong)iVar11 + 1];
      }
      else {
        local_150 = pbVar3;
        local_148 = (char *)param_2[(longlong)iVar11 + 1];
        iVar9 = 0;
        local_140 = 0;
        uStack_138 = 0;
        while (pbVar3 != (byte *)0x0) {
          lVar6 = 0;
          do {
            lVar5 = lVar6;
            cVar10 = *(char *)(*(longlong *)(local_158 + (longlong)iVar9 * 2 + 2) + lVar5);
            bVar12 = cVar10 == "style"[lVar5];
            if (!bVar12) goto LAB_180396f3a;
            lVar6 = lVar5 + 1;
          } while (lVar5 + 1 != 6);
          bVar12 = cVar10 == "style"[lVar5];
LAB_180396f3a:
          if (bVar12) {
            FUN_180396310(param_1,(&local_148)[iVar9]);
          }
          else {
            FUN_180395820(param_1,*(longlong *)(local_158 + (longlong)iVar9 * 2 + 2));
          }
          iVar9 = iVar9 + 2;
          pbVar3 = *(byte **)(local_158 + (longlong)iVar9 * 2 + 2);
        }
      }
      iVar11 = iVar11 + 2;
    } while (param_2[iVar11] != 0);
    if (pcVar8 != (char *)0x0) {
      cVar10 = '\0';
      bVar12 = false;
      iVar9 = 0;
      fVar17 = 0.0;
      *(undefined4 *)(param_1 + 0x9c10) = 0;
      fVar15 = 0.0;
      fVar21 = 0.0;
      local_158[1] = 0.0;
      iVar11 = 0;
      local_158[0] = 0.0;
      fVar20 = 0.0;
      if (*pcVar8 != '\0') {
        fVar19 = DAT_1808ac23c;
        fVar22 = (float)local_150;
        fVar23 = local_150._4_4_;
        fVar24 = local_148._4_4_;
        fVar25 = (float)local_148;
        do {
          if (((cVar10 + 0xbfU & 0xdf) == 0) && (iVar9 - 3U < 2)) {
            local_128 = '\0';
            cVar1 = *pcVar8;
            while (cVar1 != '\0') {
              lVar6 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar8);
              if ((lVar6 == 0) && (cVar1 = *pcVar8, cVar1 != ',')) {
                if ((cVar1 != '\0') && ((byte)(cVar1 - 0x30U) < 2)) {
                  local_128 = cVar1;
                  pcVar8 = pcVar8 + 1;
                  local_127 = '\0';
                }
                break;
              }
              pcVar8 = pcVar8 + 1;
              cVar1 = *pcVar8;
            }
            if (local_128 == '\0') goto LAB_1803970a4;
          }
          else {
LAB_1803970a4:
            local_128 = '\0';
            cVar1 = *pcVar8;
            while (cVar1 != '\0') {
              lVar6 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar8);
              if ((lVar6 == 0) && (cVar1 = *pcVar8, cVar1 != ',')) {
                if (cVar1 != '\0') {
                  if ((((cVar1 - 0x2bU & 0xfc) == 0) && (cVar1 != ',')) ||
                     ((byte)(cVar1 - 0x30U) < 10)) {
                    pcVar8 = (char *)FUN_180394820(pcVar8,&local_128);
                  }
                  else {
                    local_128 = cVar1;
                    pcVar8 = pcVar8 + 1;
                    local_127 = '\0';
                  }
                }
                break;
              }
              pcVar8 = pcVar8 + 1;
              cVar1 = *pcVar8;
            }
            if (local_128 == '\0') break;
          }
          cVar1 = local_128;
          if (cVar10 == '\0') {
LAB_1803975b5:
            if ((local_128 + 0xb3U & 0xdf) == 0) {
              if (0 < *(int *)(param_1 + 0x9c10)) {
                FUN_1803944a0(param_1,0);
              }
              *(undefined4 *)(param_1 + 0x9c10) = 0;
              iVar9 = 0;
LAB_1803975ed:
              cVar10 = cVar1;
              if ((cVar1 + 0xa6U & 0xdf) == 0) {
                if (0 < *(int *)(param_1 + 0x9c10)) {
                  fVar15 = **(float **)(param_1 + 0x9c08);
                  fVar17 = (*(float **)(param_1 + 0x9c08))[1];
                  local_158[0] = fVar15;
                  local_158[1] = fVar17;
                  FUN_1803944a0(param_1,1);
                  fVar20 = fVar15;
                  fVar21 = fVar17;
                }
                *(undefined4 *)(param_1 + 0x9c10) = 0;
                FUN_180393740(param_1,fVar15,fVar17);
                iVar9 = 0;
              }
            }
            else {
              if (bVar12) goto LAB_1803975ed;
              cVar10 = '\0';
            }
            iVar11 = FUN_1803965c0(cVar10);
            if (iVar11 == -1) {
              cVar10 = '\0';
              iVar11 = 0;
            }
            goto LAB_18039765e;
          }
          cVar2 = local_127;
          if ((local_128 - 0x2bU & 0xfd) != 0) {
            cVar2 = local_128;
          }
          if ((9 < (byte)(cVar2 - 0x30U)) && (cVar2 != '.')) goto LAB_1803975b5;
          if (iVar9 < 10) {
            dVar4 = (double)FUN_1803946b0(&local_128);
            lVar6 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            local_158[lVar6 + 2] = (float)dVar4;
            fVar22 = (float)local_150;
            fVar23 = local_150._4_4_;
            fVar24 = local_148._4_4_;
            fVar25 = (float)local_148;
          }
          if (iVar9 < iVar11) goto LAB_18039765e;
          switch(cVar10) {
          case 'A':
          case 'a':
            local_168 = (uint)(cVar10 == 'a');
            FUN_180396790(param_1,local_158,local_158 + 1,&local_150);
            iVar9 = 0;
            fVar15 = local_158[0];
            fVar17 = local_158[1];
            fVar20 = local_158[0];
            fVar21 = local_158[1];
            fVar22 = (float)local_150;
            fVar23 = local_150._4_4_;
            fVar24 = local_148._4_4_;
            fVar25 = (float)local_148;
            break;
          default:
            if (1 < iVar9) {
              fVar15 = local_158[iVar9];
              fVar17 = local_158[(longlong)iVar9 + 1];
              fVar20 = fVar15;
              fVar21 = fVar17;
              local_158[0] = fVar15;
              local_158[1] = fVar17;
            }
            iVar9 = 0;
            break;
          case 'C':
          case 'c':
            if (cVar10 == 'c') {
              fVar13 = fVar23 + fVar17;
              fVar14 = fVar22 + fVar15;
              fVar16 = (float)local_140 + fVar15;
              fVar18 = local_140._4_4_ + fVar17;
              fVar20 = fVar25 + fVar15;
              fVar21 = fVar24 + fVar17;
            }
            else {
              fVar13 = fVar23;
              fVar14 = fVar22;
              fVar16 = (float)local_140;
              fVar18 = local_140._4_4_;
              fVar20 = fVar25;
              fVar21 = fVar24;
            }
            if (0 < *(int *)(param_1 + 0x9c10)) {
              FUN_180393740(param_1,fVar14,fVar13);
              fVar13 = fVar20;
              fVar14 = fVar21;
              goto LAB_180397370;
            }
            goto LAB_180397386;
          case 'H':
          case 'h':
            if (cVar10 == 'h') {
              fVar15 = fVar22 + fVar15;
            }
            else {
              fVar15 = fVar22;
            }
            local_158[0] = fVar15;
            FUN_1803937f0(param_1,fVar15,fVar17);
            iVar9 = 0;
            fVar20 = fVar15;
            fVar21 = fVar17;
            break;
          case 'L':
          case 'l':
            if (cVar10 == 'l') {
              fVar15 = fVar22 + fVar15;
              fVar17 = fVar23 + fVar17;
            }
            else {
              fVar15 = fVar22;
              fVar17 = fVar23;
            }
            local_158[0] = fVar15;
            goto LAB_18039728c;
          case 'M':
          case 'm':
            if (cVar10 == 'm') {
              fVar15 = fVar22 + fVar15;
              fVar17 = fVar23 + fVar17;
            }
            else {
              fVar15 = fVar22;
              fVar17 = fVar23;
            }
            local_158[0] = fVar15;
            local_158[1] = fVar17;
            if (*(int *)(param_1 + 0x9c10) < 1) {
              FUN_180393740(param_1,fVar15,fVar17);
            }
            else {
              *(float *)(*(longlong *)(param_1 + 0x9c08) + -8 +
                        (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = fVar15;
              *(float *)(*(longlong *)(param_1 + 0x9c08) + -4 +
                        (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = fVar17;
            }
            bVar12 = cVar10 == 'm';
            cVar10 = 'L';
            if (bVar12) {
              cVar10 = 'l';
            }
            iVar11 = FUN_1803965c0(cVar10);
            bVar12 = true;
            iVar9 = 0;
            fVar20 = fVar15;
            fVar21 = fVar17;
            break;
          case 'Q':
          case 'q':
            fVar16 = fVar25;
            fVar18 = fVar24;
            fVar13 = fVar22;
            fVar14 = fVar23;
            if (cVar10 == 'q') {
              fVar13 = fVar22 + fVar15;
              fVar14 = fVar23 + fVar17;
              fVar16 = fVar25 + fVar15;
              fVar18 = fVar24 + fVar17;
            }
            iVar9 = *(int *)(param_1 + 0x9c10);
            goto joined_r0x0001803974fd;
          case 'S':
          case 's':
            fVar16 = fVar25;
            fVar18 = fVar24;
            fVar13 = fVar22;
            fVar14 = fVar23;
            if (cVar10 == 's') {
              fVar13 = fVar22 + fVar15;
              fVar14 = fVar23 + fVar17;
              fVar16 = fVar25 + fVar15;
              fVar18 = fVar24 + fVar17;
            }
            if (0 < *(int *)(param_1 + 0x9c10)) {
              FUN_180393740(param_1,(fVar15 + fVar15) - fVar20,(fVar17 + fVar17) - fVar21);
              FUN_180393740(param_1,fVar13,fVar14);
              FUN_180393740(param_1,fVar16,fVar18);
            }
            iVar9 = 0;
            fVar15 = fVar16;
            fVar17 = fVar18;
            fVar19 = DAT_1808ac23c;
            fVar20 = fVar13;
            fVar21 = fVar14;
            local_158[0] = fVar16;
            local_158[1] = fVar18;
            break;
          case 'T':
          case 't':
            fVar16 = fVar22;
            fVar18 = fVar23;
            if (cVar10 == 't') {
              fVar16 = fVar22 + fVar15;
              fVar18 = fVar23 + fVar17;
            }
            fVar13 = (fVar15 + fVar15) - fVar20;
            fVar14 = (fVar17 + fVar17) - fVar21;
            iVar9 = *(int *)(param_1 + 0x9c10);
joined_r0x0001803974fd:
            fVar20 = fVar13;
            fVar21 = fVar14;
            if (0 < iVar9) {
              FUN_180393740(param_1,(fVar13 - fVar15) * fVar19 + fVar15,
                            (fVar14 - fVar17) * fVar19 + fVar17);
              fVar21 = (fVar14 - fVar18) * fVar19 + fVar18;
              fVar20 = (fVar13 - fVar16) * fVar19 + fVar16;
LAB_180397370:
              FUN_180393740(param_1,fVar20,fVar21);
              FUN_180393740(param_1,fVar16,fVar18);
              fVar20 = fVar13;
              fVar21 = fVar14;
            }
LAB_180397386:
            iVar9 = 0;
            fVar15 = fVar16;
            fVar17 = fVar18;
            local_158[0] = fVar16;
            local_158[1] = fVar18;
            break;
          case 'V':
          case 'v':
            if (cVar10 == 'v') {
              fVar17 = fVar22 + fVar17;
            }
            else {
              fVar17 = fVar22;
            }
LAB_18039728c:
            local_158[1] = fVar17;
            FUN_1803937f0(param_1,fVar15,fVar17);
            iVar9 = 0;
            fVar20 = fVar15;
            fVar21 = fVar17;
          }
LAB_18039765e:
        } while (*pcVar8 != '\0');
      }
      if (*(int *)(param_1 + 0x9c10) != 0) {
        FUN_1803944a0(param_1,0);
      }
    }
  }
  FUN_1803940b0(param_1);
  return;
}



/* ===== 180397770 FUN_180397770 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180397770(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res10;
  float local_res18;
  
  uVar2 = _DAT_1808ade90;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  iVar7 = 0;
  local_res10 = 0.0;
  local_res18 = 0.0;
  fVar8 = DAT_1808acda0;
  fVar9 = DAT_1808acda0;
  if (*param_2 == 0) {
LAB_1803979fb:
    if (0.0 < fVar9) {
      fVar8 = fVar9;
    }
  }
  else {
    do {
      iVar3 = FUN_180395820(param_1,param_2[iVar7],param_2[(longlong)iVar7 + 1]);
      if (iVar3 == 0) {
        uVar6 = *(byte *)param_2[iVar7] - 0x78;
        if (uVar6 == 0) {
          uVar6 = (uint)((byte *)param_2[iVar7])[1];
        }
        if (uVar6 == 0) {
          fVar10 = (float)FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],
                                        *(undefined4 *)(param_1 + 40000),
                                        *(undefined4 *)(param_1 + 0x9c48));
        }
        uVar6 = *(byte *)param_2[iVar7] - 0x79;
        if (uVar6 == 0) {
          uVar6 = (uint)((byte *)param_2[iVar7])[1];
        }
        if (uVar6 == 0) {
          fVar11 = (float)FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],
                                        *(undefined4 *)(param_1 + 0x9c44),
                                        *(undefined4 *)(param_1 + 0x9c4c));
        }
        lVar5 = 0;
        do {
          lVar4 = lVar5 + 1;
          if (*(char *)(param_2[iVar7] + lVar5) != "width"[lVar5]) goto LAB_180397900;
          lVar5 = lVar4;
        } while (lVar4 != 6);
        fVar14 = (float)FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],0,
                                      *(undefined4 *)(param_1 + 0x9c48));
LAB_180397900:
        lVar5 = 0;
        do {
          lVar4 = lVar5 + 1;
          if (*(char *)(param_2[iVar7] + lVar5) != "height"[lVar5]) goto LAB_180397940;
          lVar5 = lVar4;
        } while (lVar4 != 7);
        fVar13 = (float)FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],0,
                                      *(undefined4 *)(param_1 + 0x9c4c));
LAB_180397940:
        pcVar1 = (char *)param_2[iVar7];
        if (((*pcVar1 == 'r') && (pcVar1[1] == 'x')) && (pcVar1[2] == '\0')) {
          uVar6 = FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],0,
                                *(undefined4 *)(param_1 + 0x9c48));
          fVar8 = (float)(uVar6 & uVar2);
        }
        pcVar1 = (char *)param_2[iVar7];
        if (((*pcVar1 == 'r') && (pcVar1[1] == 'y')) && (pcVar1[2] == '\0')) {
          uVar6 = FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],0,
                                *(undefined4 *)(param_1 + 0x9c4c));
          fVar9 = (float)(uVar6 & uVar2);
        }
      }
      iVar7 = iVar7 + 2;
    } while (param_2[iVar7] != 0);
    local_res10 = fVar10;
    local_res18 = fVar11;
    if (fVar8 < 0.0) goto LAB_1803979fb;
  }
  fVar10 = DAT_1808ac1f4;
  if ((fVar9 < 0.0) && (0.0 < fVar8)) {
    fVar9 = fVar8;
  }
  fVar11 = 0.0;
  if (0.0 <= fVar8) {
    fVar11 = fVar8;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
  if (fVar14 == 0.0) {
    return;
  }
  if (fVar13 == 0.0) {
    return;
  }
  fVar9 = fVar14 * DAT_1808ac1f4;
  *(undefined4 *)(param_1 + 0x9c10) = 0;
  if (fVar11 <= fVar9) {
    fVar9 = fVar11;
  }
  if (DAT_1808abf94 <= fVar9) {
    fVar11 = fVar13 * fVar10;
    if (fVar8 <= fVar13 * fVar10) {
      fVar11 = fVar8;
    }
    if (DAT_1808abfa0 <= fVar11) {
      fVar12 = fVar9 + local_res10;
      FUN_180393740(param_1,fVar12,local_res18);
      fVar14 = fVar14 + local_res10;
      FUN_1803937f0(param_1,fVar14 - fVar9,local_res18);
      fVar8 = fVar9 * DAT_1808ac1d0;
      fVar10 = fVar11 * DAT_1808ac1d0;
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar14 - fVar8,local_res18);
        FUN_180393740(param_1,fVar14,fVar10 + local_res18);
        FUN_180393740(param_1,fVar14,fVar11 + local_res18);
      }
      fVar13 = fVar13 + local_res18;
      FUN_1803937f0(param_1,fVar14,fVar13 - fVar11);
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar14,fVar13 - fVar10);
        FUN_180393740(param_1,fVar14 - fVar8,fVar13);
        FUN_180393740(param_1,fVar14 - fVar9,fVar13);
      }
      FUN_1803937f0(param_1,fVar12,fVar13);
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar8 + local_res10,fVar13);
        FUN_180393740(param_1,local_res10,fVar13 - fVar10);
        FUN_180393740(param_1,local_res10,fVar13 - fVar11);
      }
      FUN_1803937f0(param_1,local_res10,fVar11 + local_res18);
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,local_res10,fVar10 + local_res18);
        FUN_180393740(param_1,fVar8 + local_res10,local_res18);
        FUN_180393740(param_1,fVar12,local_res18);
      }
      goto LAB_180397ca7;
    }
  }
  FUN_180393740(param_1,local_res10,local_res18);
  FUN_1803937f0(param_1,fVar14 + local_res10,local_res18);
  FUN_1803937f0(param_1,fVar14 + local_res10,fVar13 + local_res18);
  FUN_1803937f0(param_1,local_res10,fVar13 + local_res18);
LAB_180397ca7:
  FUN_1803944a0(param_1,1);
  FUN_1803940b0(param_1);
  return;
}



/* ===== 180397d00 FUN_180397d00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180397d00(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = _DAT_1808ade90;
  fVar8 = DAT_1808ac540;
  iVar5 = 0;
  fVar12 = 0.0;
  fVar11 = 0.0;
  fVar10 = 0.0;
  if (*param_2 != 0) {
    do {
      iVar3 = FUN_180395820(param_1,param_2[iVar5],param_2[(longlong)iVar5 + 1]);
      if (iVar3 == 0) {
        pbVar1 = (byte *)param_2[iVar5];
        uVar4 = *pbVar1 - 99;
        if ((uVar4 == 0) && (uVar4 = pbVar1[1] - 0x78, uVar4 == 0)) {
          uVar4 = (uint)pbVar1[2];
        }
        if (uVar4 == 0) {
          fVar12 = (float)FUN_180394de0(param_1,param_2[(longlong)iVar5 + 1],
                                        *(undefined4 *)(param_1 + 40000),
                                        *(undefined4 *)(param_1 + 0x9c48));
        }
        pbVar1 = (byte *)param_2[iVar5];
        uVar4 = *pbVar1 - 99;
        if ((uVar4 == 0) && (uVar4 = pbVar1[1] - 0x79, uVar4 == 0)) {
          uVar4 = (uint)pbVar1[2];
        }
        if (uVar4 == 0) {
          fVar11 = (float)FUN_180394de0(param_1,param_2[(longlong)iVar5 + 1],
                                        *(undefined4 *)(param_1 + 0x9c44),
                                        *(undefined4 *)(param_1 + 0x9c4c));
        }
        if ((*(char *)param_2[iVar5] == 'r') && (((char *)param_2[iVar5])[1] == '\0')) {
          fVar10 = *(float *)(param_1 + 0x9c4c) * *(float *)(param_1 + 0x9c4c) +
                   *(float *)(param_1 + 0x9c48) * *(float *)(param_1 + 0x9c48);
          if (fVar10 < 0.0) {
            fVar10 = (float)FUN_18051af10(fVar10);
          }
          else {
            fVar10 = SQRT(fVar10);
          }
          if (fVar8 < 0.0) {
            fVar6 = (float)FUN_18051af10(fVar8);
          }
          else {
            fVar6 = SQRT(fVar8);
          }
          uVar4 = FUN_180394de0(param_1,param_2[(longlong)iVar5 + 1],0,fVar10 / fVar6);
          fVar10 = (float)(uVar4 & uVar2);
        }
      }
      iVar5 = iVar5 + 2;
    } while (param_2[iVar5] != 0);
    if (0.0 < fVar10) {
      *(undefined4 *)(param_1 + 0x9c10) = 0;
      fVar9 = fVar10 + fVar12;
      FUN_180393740(param_1,fVar9,fVar11);
      fVar8 = DAT_1808ac210;
      fVar6 = fVar10 + fVar11;
      if (0 < *(int *)(param_1 + 0x9c10)) {
        fVar7 = fVar10 * DAT_1808ac210;
        FUN_180393740(param_1,fVar9,fVar7 + fVar11);
        FUN_180393740(param_1,fVar7 + fVar12,fVar6);
        FUN_180393740(param_1,fVar12,fVar6);
      }
      fVar8 = fVar10 * fVar8;
      fVar7 = fVar12 - fVar10;
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar12 - fVar8,fVar6);
        FUN_180393740(param_1,fVar7,fVar8 + fVar11);
        FUN_180393740(param_1,fVar7,fVar11);
      }
      fVar10 = fVar11 - fVar10;
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar7,fVar11 - fVar8);
        FUN_180393740(param_1,fVar12 - fVar8,fVar10);
        FUN_180393740(param_1,fVar12,fVar10);
      }
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar8 + fVar12,fVar10);
        FUN_180393740(param_1,fVar9,fVar11 - fVar8);
        FUN_180393740(param_1,fVar9,fVar11);
      }
      FUN_1803944a0(param_1,1);
      FUN_1803940b0(param_1);
    }
  }
  return;
}



/* ===== 1803980b0 FUN_1803980b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803980b0(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar4 = _DAT_1808ade90;
  iVar7 = 0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar9 = 0.0;
  fVar13 = 0.0;
  if (*param_2 != 0) {
    do {
      iVar5 = FUN_180395820(param_1,param_2[iVar7],param_2[(longlong)iVar7 + 1]);
      if (iVar5 == 0) {
        pbVar1 = (byte *)param_2[iVar7];
        uVar6 = *pbVar1 - 99;
        if ((uVar6 == 0) && (uVar6 = pbVar1[1] - 0x78, uVar6 == 0)) {
          uVar6 = (uint)pbVar1[2];
        }
        if (uVar6 == 0) {
          fVar15 = (float)FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],
                                        *(undefined4 *)(param_1 + 40000),
                                        *(undefined4 *)(param_1 + 0x9c48));
        }
        pbVar1 = (byte *)param_2[iVar7];
        uVar6 = *pbVar1 - 99;
        if ((uVar6 == 0) && (uVar6 = pbVar1[1] - 0x79, uVar6 == 0)) {
          uVar6 = (uint)pbVar1[2];
        }
        if (uVar6 == 0) {
          fVar14 = (float)FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],
                                        *(undefined4 *)(param_1 + 0x9c44),
                                        *(undefined4 *)(param_1 + 0x9c4c));
        }
        pcVar2 = (char *)param_2[iVar7];
        if (((*pcVar2 == 'r') && (pcVar2[1] == 'x')) && (pcVar2[2] == '\0')) {
          uVar6 = FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],0,
                                *(undefined4 *)(param_1 + 0x9c48));
          fVar9 = (float)(uVar6 & uVar4);
        }
        pcVar2 = (char *)param_2[iVar7];
        if (((*pcVar2 == 'r') && (pcVar2[1] == 'y')) && (pcVar2[2] == '\0')) {
          uVar6 = FUN_180394de0(param_1,param_2[(longlong)iVar7 + 1],0,
                                *(undefined4 *)(param_1 + 0x9c4c));
          fVar13 = (float)(uVar6 & uVar4);
        }
      }
      iVar7 = iVar7 + 2;
    } while (param_2[iVar7] != 0);
    if ((0.0 < fVar9) && (0.0 < fVar13)) {
      fVar11 = fVar9 + fVar15;
      *(undefined4 *)(param_1 + 0x9c10) = 0;
      FUN_180393740(param_1,fVar11,fVar14);
      fVar3 = DAT_1808ac210;
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar11,fVar13 * DAT_1808ac210 + fVar14);
        FUN_180393740(param_1,fVar9 * fVar3 + fVar15,fVar13 + fVar14);
        FUN_180393740(param_1,fVar15,fVar13 + fVar14);
      }
      fVar12 = fVar15 - fVar9;
      fVar10 = fVar15 - fVar9 * fVar3;
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar10,fVar13 + fVar14);
        FUN_180393740(param_1,fVar12,fVar13 * fVar3 + fVar14);
        FUN_180393740(param_1,fVar12,fVar14);
      }
      fVar8 = fVar14 - fVar13 * fVar3;
      fVar13 = fVar14 - fVar13;
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar12,fVar8);
        FUN_180393740(param_1,fVar10,fVar13);
        FUN_180393740(param_1,fVar15,fVar13);
      }
      if (0 < *(int *)(param_1 + 0x9c10)) {
        FUN_180393740(param_1,fVar9 * fVar3 + fVar15,fVar13);
        FUN_180393740(param_1,fVar11,fVar8);
        FUN_180393740(param_1,fVar11,fVar14);
      }
      FUN_1803944a0(param_1,1);
      FUN_1803940b0(param_1);
    }
  }
  return;
}



/* ===== 180398450 FUN_180398450 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180398450(longlong param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_b8 [32];
  float local_98 [4];
  char local_88;
  undefined1 local_87;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_b8;
  iVar6 = 0;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x9c10) = 0;
  lVar3 = *param_2;
  do {
    if (lVar3 == 0) {
      FUN_1803944a0(param_1,param_3);
      FUN_1803940b0(param_1);
      return;
    }
    iVar2 = FUN_180395820(param_1,param_2[iVar7],param_2[(longlong)iVar7 + 1]);
    if (iVar2 == 0) {
      lVar3 = 0;
      do {
        lVar4 = lVar3 + 1;
        if (*(char *)(param_2[iVar7] + lVar3) != "points"[lVar3]) goto LAB_1803985e4;
        lVar3 = lVar4;
      } while (lVar4 != 7);
      pcVar5 = (char *)param_2[(longlong)iVar7 + 1];
      iVar2 = 0;
      cVar1 = *pcVar5;
      while (cVar1 != '\0') {
        local_88 = '\0';
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
          lVar3 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar5);
          if ((lVar3 == 0) && (cVar1 = *pcVar5, cVar1 != ',')) {
            if (cVar1 != '\0') {
              if ((((cVar1 - 0x2bU & 0xfc) == 0) && (cVar1 != ',')) || ((byte)(cVar1 - 0x30U) < 10))
              {
                pcVar5 = (char *)FUN_180394820(pcVar5,&local_88);
              }
              else {
                pcVar5 = pcVar5 + 1;
                local_87 = 0;
                local_88 = cVar1;
              }
            }
            break;
          }
          pcVar5 = pcVar5 + 1;
          cVar1 = *pcVar5;
        }
        dVar8 = (double)FUN_1803946b0(&local_88);
        lVar3 = (longlong)iVar2;
        iVar2 = iVar2 + 1;
        local_98[lVar3] = (float)dVar8;
        if (1 < iVar2) {
          if (iVar6 == 0) {
            if (*(int *)(param_1 + 0x9c10) < 1) {
              FUN_180393740(param_1);
            }
            else {
              *(float *)(*(longlong *)(param_1 + 0x9c08) + -8 +
                        (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = local_98[0];
              *(float *)(*(longlong *)(param_1 + 0x9c08) + -4 +
                        (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = local_98[1];
            }
          }
          else {
            FUN_1803937f0(param_1);
          }
          iVar2 = 0;
          iVar6 = iVar6 + 1;
        }
        cVar1 = *pcVar5;
      }
    }
LAB_1803985e4:
    iVar7 = iVar7 + 2;
    lVar3 = param_2[iVar7];
  } while( true );
}



/* ===== 180398640 FUN_180398640 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180398640(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  iVar8 = 0;
  lVar6 = *param_2;
joined_r0x00018039866d:
  if (lVar6 == 0) {
    return;
  }
  iVar4 = FUN_180395820(param_1,param_2[iVar8],param_2[(longlong)iVar8 + 1]);
  if (iVar4 == 0) {
    pcVar5 = (char *)param_2[iVar8];
    lVar6 = 0;
    do {
      lVar7 = lVar6 + 1;
      if (pcVar5[lVar6] != "width"[lVar6]) {
        lVar6 = 0;
        goto LAB_180398710;
      }
      lVar6 = lVar7;
    } while (lVar7 != 6);
    uVar9 = FUN_180394de0(param_1,param_2[(longlong)iVar8 + 1],0,0);
    **(undefined4 **)(param_1 + 0x9c20) = uVar9;
  }
  goto LAB_180398a04;
  while (lVar6 = lVar7, lVar7 != 7) {
LAB_180398710:
    lVar7 = lVar6 + 1;
    if (pcVar5[lVar6] != "height"[lVar6]) {
      lVar6 = 0;
      goto LAB_180398750;
    }
  }
  uVar9 = FUN_180394de0(param_1,param_2[(longlong)iVar8 + 1],0,0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x9c20) + 4) = uVar9;
  goto LAB_180398a04;
  while (lVar6 = lVar7, lVar7 != 8) {
LAB_180398750:
    lVar7 = lVar6 + 1;
    if (pcVar5[lVar6] != (&DAT_18089f6a8)[lVar6]) {
      iVar4 = strcmp(pcVar5,"preserveAspectRatio");
      if (iVar4 == 0) {
        lVar6 = FUN_1804ef120(param_2[(longlong)iVar8 + 1],&DAT_1806dfd84);
        if (lVar6 == 0) {
          lVar6 = FUN_1804ef120(param_2[(longlong)iVar8 + 1],&DAT_18089f694);
          if (lVar6 == 0) {
            lVar6 = FUN_1804ef120(param_2[(longlong)iVar8 + 1],&DAT_18089f69c);
            if (lVar6 == 0) {
              lVar6 = FUN_1804ef120(param_2[(longlong)iVar8 + 1],&DAT_18089f728);
              if (lVar6 != 0) {
                *(undefined4 *)(param_1 + 0x9c50) = 2;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x9c50) = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x9c50) = 0;
          }
          lVar6 = FUN_1804ef120(param_2[(longlong)iVar8 + 1],&DAT_18089f730);
          if (lVar6 == 0) {
            lVar6 = FUN_1804ef120(param_2[(longlong)iVar8 + 1],&DAT_18089f718);
            if (lVar6 == 0) {
              lVar6 = FUN_1804ef120(param_2[(longlong)iVar8 + 1],&DAT_18089f720);
              if (lVar6 != 0) {
                *(undefined4 *)(param_1 + 0x9c54) = 2;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x9c54) = 1;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x9c54) = 0;
          }
          *(undefined4 *)(param_1 + 0x9c58) = 1;
          lVar6 = FUN_1804ef120(param_2[(longlong)iVar8 + 1],"slice");
          if (lVar6 != 0) {
            *(undefined4 *)(param_1 + 0x9c58) = 2;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x9c58) = 0;
        }
      }
      goto LAB_180398a04;
    }
  }
  pcVar5 = (char *)FUN_180394820(param_2[(longlong)iVar8 + 1],local_88);
  dVar2 = (double)FUN_1803946b0(local_88);
  *(float *)(param_1 + 40000) = (float)dVar2;
  if (*pcVar5 == '\0') {
    return;
  }
  do {
    lVar6 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar5);
    if (((lVar6 == 0) && (cVar3 = *pcVar5, cVar3 != '%')) && (cVar3 != ',')) break;
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar3 = '\0';
  } while (*pcVar1 != '\0');
  if (cVar3 == '\0') {
    return;
  }
  pcVar5 = (char *)FUN_180394820(pcVar5,local_88);
  dVar2 = (double)FUN_1803946b0(local_88);
  *(float *)(param_1 + 0x9c44) = (float)dVar2;
  cVar3 = *pcVar5;
  while( true ) {
    if (cVar3 == '\0') {
      return;
    }
    lVar6 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar5);
    if (((lVar6 == 0) && (cVar3 = *pcVar5, cVar3 != '%')) && (cVar3 != ',')) break;
    pcVar5 = pcVar5 + 1;
    cVar3 = *pcVar5;
  }
  if (cVar3 == '\0') {
    return;
  }
  pcVar5 = (char *)FUN_180394820(pcVar5,local_88);
  dVar2 = (double)FUN_1803946b0(local_88);
  *(float *)(param_1 + 0x9c48) = (float)dVar2;
  cVar3 = *pcVar5;
  while( true ) {
    if (cVar3 == '\0') {
      return;
    }
    lVar6 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar5);
    if (((lVar6 == 0) && (cVar3 = *pcVar5, cVar3 != '%')) && (cVar3 != ',')) break;
    pcVar5 = pcVar5 + 1;
    cVar3 = *pcVar5;
  }
  if (cVar3 == '\0') {
    return;
  }
  FUN_180394820(pcVar5,local_88);
  dVar2 = (double)FUN_1803946b0(local_88);
  *(float *)(param_1 + 0x9c4c) = (float)dVar2;
LAB_180398a04:
  iVar8 = iVar8 + 2;
  lVar6 = param_2[iVar8];
  goto joined_r0x00018039866d;
}



/* ===== 180398a50 FUN_180398a50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180398a50(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  byte *pbVar2;
  char *_Str1;
  int iVar3;
  undefined4 uVar4;
  char *_Dest;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  _Dest = (char *)_malloc_base(0xe0);
  if (_Dest == (char *)0x0) {
    return;
  }
  FUN_180540170(_Dest,0,0xe0);
  _Dest[0xad] = '\x01';
  _Dest[0x80] = param_3;
  if (param_3 == '\x02') {
    _Dest[0x84] = '\0';
    _Dest[0x85] = '\0';
    _Dest[0x86] = '\0';
    _Dest[0x87] = '\0';
    _Dest[0x88] = '\a';
    _Dest[0x89] = '\0';
    _Dest[0x8a] = '\0';
    _Dest[0x8b] = '\0';
    _Dest[0x8c] = '\0';
    _Dest[0x8d] = '\0';
    _Dest[0x8e] = '\0';
    _Dest[0x8f] = '\0';
    _Dest[0x94] = '\0';
    _Dest[0x95] = '\0';
    _Dest[0x96] = -0x38;
    _Dest[0x97] = 'B';
    _Dest[0x98] = '\a';
    _Dest[0x99] = '\0';
    _Dest[0x9a] = '\0';
    _Dest[0x9b] = '\0';
    _Dest[0x9c] = '\0';
    _Dest[0x9d] = '\0';
    _Dest[0x9e] = '\0';
    _Dest[0x9f] = '\0';
    _Dest[0xa0] = '\a';
    _Dest[0xa1] = '\0';
    _Dest[0xa2] = '\0';
    _Dest[0xa3] = '\0';
  }
  else {
    if (param_3 != '\x03') goto LAB_180398b2b;
    _Dest[0x84] = '\0';
    _Dest[0x85] = '\0';
    _Dest[0x86] = 'H';
    _Dest[0x87] = 'B';
    _Dest[0x88] = '\a';
    _Dest[0x89] = '\0';
    _Dest[0x8a] = '\0';
    _Dest[0x8b] = '\0';
    _Dest[0x8c] = '\0';
    _Dest[0x8d] = '\0';
    _Dest[0x8e] = 'H';
    _Dest[0x8f] = 'B';
    _Dest[0x94] = '\0';
    _Dest[0x95] = '\0';
    _Dest[0x96] = 'H';
    _Dest[0x97] = 'B';
    _Dest[0x98] = '\a';
    _Dest[0x99] = '\0';
    _Dest[0x9a] = '\0';
    _Dest[0x9b] = '\0';
  }
  _Dest[0x90] = '\a';
  _Dest[0x91] = '\0';
  _Dest[0x92] = '\0';
  _Dest[0x93] = '\0';
LAB_180398b2b:
  lVar1 = *param_2;
  _Dest[0xb0] = '\0';
  _Dest[0xb1] = '\0';
  _Dest[0xb2] = -0x80;
  _Dest[0xb3] = '?';
  _Dest[0xb4] = '\0';
  _Dest[0xb5] = '\0';
  _Dest[0xb6] = '\0';
  _Dest[0xb7] = '\0';
  _Dest[0xb8] = '\0';
  _Dest[0xb9] = '\0';
  _Dest[0xba] = '\0';
  _Dest[0xbb] = '\0';
  _Dest[0xbc] = '\0';
  _Dest[0xbd] = '\0';
  _Dest[0xbe] = -0x80;
  _Dest[0xbf] = '?';
  _Dest[0xc0] = '\0';
  _Dest[0xc1] = '\0';
  _Dest[0xc2] = '\0';
  _Dest[0xc3] = '\0';
  _Dest[0xc4] = '\0';
  _Dest[0xc5] = '\0';
  _Dest[0xc6] = '\0';
  _Dest[199] = '\0';
  if (lVar1 == 0) {
LAB_180398f1b:
    *(undefined8 *)(_Dest + 0xd8) = *(undefined8 *)(param_1 + 0x9c30);
    *(char **)(param_1 + 0x9c30) = _Dest;
    return;
  }
  iVar9 = 0;
LAB_180398b80:
  pbVar2 = (byte *)param_2[iVar9];
  uVar8 = *pbVar2 - 0x69;
  if ((uVar8 == 0) && (uVar8 = pbVar2[1] - 100, uVar8 == 0)) {
    uVar8 = (uint)pbVar2[2];
  }
  if (uVar8 == 0) {
    strncpy(_Dest,(char *)param_2[(longlong)iVar9 + 1],0x3f);
    _Dest[0x3f] = '\0';
  }
  else {
    iVar3 = FUN_180395820(param_1,pbVar2,(char *)param_2[(longlong)iVar9 + 1]);
    if (iVar3 == 0) {
      _Str1 = (char *)param_2[iVar9];
      iVar3 = strcmp(_Str1,"gradientUnits");
      if (iVar3 == 0) {
        iVar3 = strcmp((char *)param_2[(longlong)iVar9 + 1],"objectBoundingBox");
        _Dest[0xad] = iVar3 == 0;
      }
      else {
        iVar3 = strcmp(_Str1,"gradientTransform");
        if (iVar3 == 0) {
          FUN_180395260(_Dest + 0xb0,param_2[(longlong)iVar9 + 1]);
        }
        else if (*_Str1 == 'c') {
          if ((_Str1[1] == 'x') && (_Str1[2] == '\0')) {
LAB_180398cf1:
            uVar5 = FUN_180394820(param_2[(longlong)iVar9 + 1],local_88);
            uVar4 = FUN_180394ce0(uVar5);
            dVar10 = (double)FUN_1803946b0(local_88);
            *(undefined4 *)(_Dest + 0x88) = uVar4;
            *(float *)(_Dest + 0x84) = (float)dVar10;
          }
          else {
            if ((*_Str1 != 'c') || ((_Str1[1] != 'y' || (_Str1[2] != '\0')))) goto LAB_180398c6e;
LAB_180398d3f:
            uVar5 = FUN_180394820(param_2[(longlong)iVar9 + 1],local_88);
            uVar4 = FUN_180394ce0(uVar5);
            dVar10 = (double)FUN_1803946b0(local_88);
            *(undefined4 *)(_Dest + 0x90) = uVar4;
            *(float *)(_Dest + 0x8c) = (float)dVar10;
          }
        }
        else {
LAB_180398c6e:
          if ((*_Str1 == 'r') && (_Str1[1] == '\0')) {
LAB_180398d8d:
            uVar5 = FUN_180394820(param_2[(longlong)iVar9 + 1],local_88);
            uVar4 = FUN_180394ce0(uVar5);
            dVar10 = (double)FUN_1803946b0(local_88);
            *(undefined4 *)(_Dest + 0x98) = uVar4;
            *(float *)(_Dest + 0x94) = (float)dVar10;
          }
          else {
            if (*_Str1 == 'f') {
              if ((_Str1[1] != 'x') || (_Str1[2] != '\0')) {
                if ((*_Str1 == 'f') && ((_Str1[1] == 'y' && (_Str1[2] == '\0')))) {
                  uVar5 = FUN_180394820(param_2[(longlong)iVar9 + 1],local_88);
                  uVar4 = FUN_180394ce0(uVar5);
                  dVar10 = (double)FUN_1803946b0(local_88);
                  *(undefined4 *)(_Dest + 0xa8) = uVar4;
                  *(float *)(_Dest + 0xa4) = (float)dVar10;
                  goto LAB_180398eeb;
                }
                goto LAB_180398ce0;
              }
            }
            else {
LAB_180398ce0:
              if (((*_Str1 == 'x') && (_Str1[1] == '1')) && (_Str1[2] == '\0')) goto LAB_180398cf1;
              if (((*_Str1 == 'y') && (_Str1[1] == '1')) && (_Str1[2] == '\0')) goto LAB_180398d3f;
              if (((*_Str1 == 'x') && (_Str1[1] == '2')) && (_Str1[2] == '\0')) goto LAB_180398d8d;
              if (((*_Str1 != 'y') || (_Str1[1] != '2')) || (_Str1[2] != '\0')) {
                iVar3 = strcmp(_Str1,"spreadMethod");
                if (iVar3 == 0) {
                  lVar1 = param_2[(longlong)iVar9 + 1];
                  lVar7 = 0;
                  do {
                    lVar6 = lVar7 + 1;
                    if (*(char *)(lVar1 + lVar7) != (&DAT_18089f778)[lVar7]) {
                      lVar7 = 0;
                      goto LAB_180398e70;
                    }
                    lVar7 = lVar6;
                  } while (lVar6 != 4);
                  _Dest[0xac] = '\0';
                }
                else {
                  iVar3 = strcmp(_Str1,"xlink:href");
                  if (iVar3 == 0) {
                    strncpy(_Dest + 0x40,(char *)(param_2[(longlong)iVar9 + 1] + 1),0x3e);
                    _Dest[0x7e] = '\0';
                  }
                }
                goto LAB_180398eeb;
              }
            }
            uVar5 = FUN_180394820(param_2[(longlong)iVar9 + 1],local_88);
            uVar4 = FUN_180394ce0(uVar5);
            dVar10 = (double)FUN_1803946b0(local_88);
            *(undefined4 *)(_Dest + 0xa0) = uVar4;
            *(float *)(_Dest + 0x9c) = (float)dVar10;
          }
        }
      }
    }
  }
  goto LAB_180398eeb;
  while (lVar7 = lVar6, lVar6 != 8) {
LAB_180398e70:
    lVar6 = lVar7 + 1;
    if (*(char *)(lVar1 + lVar7) != "reflect"[lVar7]) {
      lVar7 = 0;
      goto LAB_180398ea0;
    }
  }
  _Dest[0xac] = '\x01';
  goto LAB_180398eeb;
  while (lVar7 = lVar6, lVar6 != 7) {
LAB_180398ea0:
    lVar6 = lVar7 + 1;
    if (*(char *)(lVar1 + lVar7) != "repeat"[lVar7]) goto LAB_180398eeb;
  }
  _Dest[0xac] = '\x02';
LAB_180398eeb:
  iVar9 = iVar9 + 2;
  if (param_2[iVar9] == 0) goto LAB_180398f1b;
  goto LAB_180398b80;
}



/* ===== 180398f50 FUN_180398f50 ===== */

void FUN_180398f50(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar4 = 0;
  lVar5 = (longlong)*(int *)(param_1 + 0x9c00) * 0x138;
  *(undefined8 *)(param_1 + 300 + lVar5) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128 + lVar5) = 0;
  lVar2 = *param_2;
  while (lVar2 != 0) {
    FUN_180395820(param_1,param_2[iVar4],param_2[(longlong)iVar4 + 1]);
    iVar4 = iVar4 + 2;
    lVar2 = param_2[iVar4];
  }
  lVar2 = *(longlong *)(param_1 + 0x9c30);
  if (lVar2 == 0) {
    return;
  }
  iVar4 = *(int *)(lVar2 + 200);
  *(int *)(lVar2 + 200) = iVar4 + 1;
  lVar3 = _realloc_base(*(undefined8 *)(lVar2 + 0xd0),(longlong)iVar4 * 8 + 8);
  *(longlong *)(lVar2 + 0xd0) = lVar3;
  if (lVar3 == 0) {
    return;
  }
  iVar4 = *(int *)(lVar2 + 200) + -1;
  if (0 < iVar4) {
    uVar7 = 0;
    do {
      iVar6 = (int)uVar7;
      if (*(float *)(param_1 + 0x130 + lVar5) < *(float *)(lVar3 + 4 + uVar7 * 8))
      goto LAB_180399030;
      uVar7 = (ulonglong)(iVar6 + 1U);
    } while ((int)(iVar6 + 1U) < iVar4);
  }
LAB_18039904e:
  uVar1 = *(uint *)(param_1 + 0x128 + lVar5);
  lVar2 = *(longlong *)(lVar2 + 0xd0);
  lVar3 = (longlong)iVar4;
  *(uint *)(lVar2 + lVar3 * 8) = uVar1;
  *(uint *)(lVar2 + lVar3 * 8) =
       (int)(longlong)(*(float *)(param_1 + 300 + lVar5) * DAT_1808acb94) << 0x18 | uVar1;
  *(undefined4 *)(lVar2 + 4 + lVar3 * 8) = *(undefined4 *)(param_1 + 0x130 + lVar5);
  return;
LAB_180399030:
  do {
    lVar3 = (longlong)iVar4;
    iVar4 = iVar4 + -1;
    *(undefined8 *)(*(longlong *)(lVar2 + 0xd0) + lVar3 * 8) =
         *(undefined8 *)(*(longlong *)(lVar2 + 0xd0) + -8 + lVar3 * 8);
  } while (iVar6 < iVar4);
  iVar4 = iVar6;
  goto LAB_18039904e;
}



/* ===== 1803990a0 FUN_1803990a0 ===== */

void FUN_1803990a0(longlong param_1,char *param_2,longlong *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (*(char *)(param_1 + 0x9c61) != '\0') {
    iVar3 = strcmp(param_2,"linearGradient");
    if (iVar3 == 0) {
LAB_180399540:
      FUN_180398a50(param_1,param_3,2);
      return;
    }
    iVar3 = strcmp(param_2,"radialGradient");
    if (iVar3 != 0) {
      lVar7 = 0;
      lVar8 = 0;
      while (lVar6 = lVar8 + 1, param_2[lVar8] == (&DAT_18089f7c0)[lVar8]) {
        lVar8 = lVar6;
        if (lVar6 == 5) {
          FUN_180398f50(param_1,param_3);
          return;
        }
      }
      do {
        lVar8 = lVar7 + 1;
        if (param_2[lVar7] != "style"[lVar7]) {
          return;
        }
        lVar7 = lVar8;
      } while (lVar8 != 6);
      *(undefined1 *)(param_1 + 0x9c62) = 1;
      return;
    }
LAB_18039956a:
    FUN_180398a50(param_1,param_3,3);
    return;
  }
  if ((*param_2 == 'g') && (param_2[1] == '\0')) {
    FUN_1803938c0();
    FUN_180396520(param_1,param_3);
    return;
  }
  lVar7 = 0;
  lVar8 = 0;
  do {
    lVar6 = lVar8 + 1;
    if (param_2[lVar8] != (&DAT_1806e506c)[lVar8]) {
      lVar8 = 0;
      goto LAB_1803991d2;
    }
    lVar8 = lVar6;
  } while (lVar6 != 5);
  if (*(char *)(param_1 + 0x9c60) != '\0') {
    return;
  }
  FUN_1803938c0(param_1);
  FUN_180396e60(param_1,param_3);
  goto LAB_18039950d;
  while (lVar8 = lVar6, lVar6 != 5) {
LAB_1803991d2:
    lVar6 = lVar8 + 1;
    if (param_2[lVar8] != (&DAT_1806e0d04)[lVar8]) {
      lVar8 = 0;
      goto LAB_180399210;
    }
  }
  FUN_1803938c0(param_1);
  FUN_180397770(param_1,param_3);
  goto LAB_18039950d;
  while (lVar8 = lVar6, lVar6 != 7) {
LAB_180399210:
    lVar6 = lVar8 + 1;
    if (param_2[lVar8] != "circle"[lVar8]) {
      lVar8 = 0;
      goto LAB_180399250;
    }
  }
  FUN_1803938c0(param_1);
  FUN_180397d00(param_1,param_3);
  goto LAB_18039950d;
  while (lVar8 = lVar6, lVar6 != 8) {
LAB_180399250:
    lVar6 = lVar8 + 1;
    if (param_2[lVar8] != "ellipse"[lVar8]) {
      lVar8 = 0;
      while (lVar6 = lVar8 + 1, param_2[lVar8] == (&DAT_1806e0d1c)[lVar8]) {
        lVar8 = lVar6;
        if (lVar6 == 5) {
          FUN_1803938c0(param_1);
          uVar10 = 0;
          uVar11 = 0;
          uVar12 = 0;
          uVar13 = 0;
          iVar3 = 0;
          lVar8 = *param_3;
          while (lVar8 != 0) {
            iVar4 = FUN_180395820(param_1,param_3[iVar3],param_3[(longlong)iVar3 + 1]);
            if (iVar4 == 0) {
              pbVar1 = (byte *)param_3[iVar3];
              uVar5 = *pbVar1 - 0x78;
              if ((uVar5 == 0) && (uVar5 = pbVar1[1] - 0x31, uVar5 == 0)) {
                uVar5 = (uint)pbVar1[2];
              }
              if (uVar5 == 0) {
                uVar10 = FUN_180394de0(param_1,param_3[(longlong)iVar3 + 1],
                                       *(undefined4 *)(param_1 + 40000),
                                       *(undefined4 *)(param_1 + 0x9c48));
              }
              pbVar1 = (byte *)param_3[iVar3];
              uVar5 = *pbVar1 - 0x79;
              if ((uVar5 == 0) && (uVar5 = pbVar1[1] - 0x31, uVar5 == 0)) {
                uVar5 = (uint)pbVar1[2];
              }
              if (uVar5 == 0) {
                uVar11 = FUN_180394de0(param_1,param_3[(longlong)iVar3 + 1],
                                       *(undefined4 *)(param_1 + 0x9c44),
                                       *(undefined4 *)(param_1 + 0x9c4c));
              }
              pcVar2 = (char *)param_3[iVar3];
              if (((*pcVar2 == 'x') && (pcVar2[1] == '2')) && (pcVar2[2] == '\0')) {
                uVar12 = FUN_180394de0(param_1,param_3[(longlong)iVar3 + 1],
                                       *(undefined4 *)(param_1 + 40000),
                                       *(undefined4 *)(param_1 + 0x9c48));
              }
              pcVar2 = (char *)param_3[iVar3];
              if (((*pcVar2 == 'y') && (pcVar2[1] == '2')) && (pcVar2[2] == '\0')) {
                uVar13 = FUN_180394de0(param_1,param_3[(longlong)iVar3 + 1],
                                       *(undefined4 *)(param_1 + 0x9c44),
                                       *(undefined4 *)(param_1 + 0x9c4c));
              }
            }
            iVar3 = iVar3 + 2;
            lVar8 = param_3[iVar3];
          }
          *(undefined4 *)(param_1 + 0x9c10) = 0;
          FUN_180393740(param_1,uVar10,uVar11);
          FUN_1803937f0(param_1,uVar12,uVar13);
          FUN_1803944a0(param_1,0);
          FUN_1803940b0(param_1);
          if (*(int *)(param_1 + 0x9c00) < 1) {
            return;
          }
          *(int *)(param_1 + 0x9c00) = *(int *)(param_1 + 0x9c00) + -1;
          return;
        }
      }
      iVar3 = strcmp(param_2,"polyline");
      if (iVar3 == 0) {
        FUN_1803938c0(param_1);
        uVar9 = 0;
      }
      else {
        lVar8 = 0;
        do {
          lVar6 = lVar8 + 1;
          if (param_2[lVar8] != "polygon"[lVar8]) {
            iVar3 = strcmp(param_2,"linearGradient");
            if (iVar3 == 0) goto LAB_180399540;
            iVar3 = strcmp(param_2,"radialGradient");
            if (iVar3 != 0) {
              lVar8 = 0;
              while (lVar6 = lVar8 + 1, param_2[lVar8] == (&DAT_18089f7c0)[lVar8]) {
                lVar8 = lVar6;
                if (lVar6 == 5) {
                  FUN_180398f50(param_1,param_3);
                  return;
                }
              }
              lVar8 = 0;
              while (lVar6 = lVar8 + 1, param_2[lVar8] == (&DAT_18089f790)[lVar8]) {
                lVar8 = lVar6;
                if (lVar6 == 5) {
                  *(undefined1 *)(param_1 + 0x9c61) = 1;
                  return;
                }
              }
              lVar8 = 0;
              while (lVar6 = lVar8 + 1, param_2[lVar8] == (&DAT_18089f77c)[lVar8]) {
                lVar8 = lVar6;
                if (lVar6 == 4) {
                  FUN_180398640(param_1,param_3);
                  return;
                }
              }
              do {
                lVar8 = lVar7 + 1;
                if (param_2[lVar7] != "style"[lVar7]) {
                  return;
                }
                lVar7 = lVar8;
              } while (lVar8 != 6);
              *(undefined1 *)(param_1 + 0x9c62) = 1;
              return;
            }
            goto LAB_18039956a;
          }
          lVar8 = lVar6;
        } while (lVar6 != 8);
        FUN_1803938c0(param_1);
        uVar9 = 1;
      }
      FUN_180398450(param_1,param_3,uVar9);
      goto LAB_18039950d;
    }
  }
  FUN_1803938c0(param_1);
  FUN_1803980b0(param_1,param_3);
LAB_18039950d:
  if (*(int *)(param_1 + 0x9c00) < 1) {
    return;
  }
  *(int *)(param_1 + 0x9c00) = *(int *)(param_1 + 0x9c00) + -1;
  return;
}



/* ===== 180399650 FUN_180399650 ===== */

void FUN_180399650(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*param_2 == 'g') && (param_2[1] == '\0')) {
    if (0 < *(int *)(param_1 + 0x9c00)) {
      *(int *)(param_1 + 0x9c00) = *(int *)(param_1 + 0x9c00) + -1;
      return;
    }
  }
  else {
    lVar2 = 0;
    while (lVar1 = lVar2 + 1, param_2[lVar2] == (&DAT_1806e506c)[lVar2]) {
      lVar2 = lVar1;
      if (lVar1 == 5) {
        *(undefined1 *)(param_1 + 0x9c60) = 0;
        return;
      }
    }
    lVar2 = 0;
    while (lVar1 = lVar2 + 1, param_2[lVar2] == (&DAT_18089f790)[lVar2]) {
      lVar2 = lVar1;
      if (lVar1 == 5) {
        *(undefined1 *)(param_1 + 0x9c61) = 0;
        return;
      }
    }
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      if (param_2[lVar2] != "style"[lVar2]) {
        return;
      }
      lVar2 = lVar1;
    } while (lVar1 != 6);
    *(undefined1 *)(param_1 + 0x9c62) = 0;
  }
  return;
}



/* ===== 180399700 FUN_180399700 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180399700(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong alStack_148 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_178;
  if (*(char *)(param_1 + 0x9c62) != '\0') {
    cVar2 = *param_2;
    local_158 = param_1;
    while (cVar2 != '\0') {
      uVar7 = 0;
      cVar2 = *param_2;
      uVar10 = uVar7;
      while( true ) {
        iVar9 = (int)uVar10;
        if (cVar2 == '\0') goto LAB_18039986e;
        if ((*param_2 == '{') || (*param_2 == '\0')) break;
        do {
          lVar3 = FUN_1804ef420(&DAT_18089ece0,(int)*param_2);
          if ((lVar3 == 0) && (cVar2 = *param_2, cVar2 != ',')) break;
          pcVar5 = param_2 + 1;
          param_2 = param_2 + 1;
          cVar2 = '\0';
        } while (*pcVar5 != '\0');
        if ((cVar2 == '\0') || (pcVar5 = param_2, cVar2 == '{')) break;
        do {
          lVar3 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar5);
          if (((lVar3 != 0) || (*pcVar5 == ',')) || (*pcVar5 == '{')) break;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        if (((*param_2 == '.') && (iVar9 < 0x20)) &&
           (plVar4 = (longlong *)_malloc_base(0x18), plVar4 != (longlong *)0x0)) {
          lVar6 = (longlong)pcVar5 - (longlong)(param_2 + 1);
          lVar3 = _malloc_base(lVar6 + 1);
          if (lVar3 == 0) {
            *plVar4 = 0;
            thunk_FUN_1805277b0(plVar4);
          }
          else {
            FUN_180540530(lVar3,param_2 + 1,lVar6);
            *(undefined1 *)(lVar3 + lVar6) = 0;
            uVar10 = (ulonglong)(iVar9 + 1);
            *plVar4 = lVar3;
            plVar4[1] = 0;
            plVar4[2] = 0;
            alStack_148[iVar9] = (longlong)plVar4;
          }
        }
        cVar2 = *pcVar5;
        param_2 = pcVar5;
      }
      if (*param_2 == '\0') {
LAB_18039986e:
        if (iVar9 < 1) {
          return;
        }
        do {
          puVar1 = (undefined8 *)alStack_148[uVar7];
          thunk_FUN_1805277b0(*puVar1);
          thunk_FUN_1805277b0(puVar1);
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
        } while ((int)uVar8 < iVar9);
        return;
      }
      param_2 = param_2 + 1;
      cVar2 = *param_2;
      pcVar5 = param_2;
      while ((cVar2 != '\0' && (*pcVar5 != '}'))) {
        pcVar5 = pcVar5 + 1;
        cVar2 = *pcVar5;
      }
      if (0 < iVar9) {
        do {
          lVar3 = _malloc_base(((longlong)pcVar5 - (longlong)param_2) + 1);
          puVar1 = (undefined8 *)alStack_148[(int)uVar7];
          if (lVar3 == 0) {
            puVar1[1] = 0;
            thunk_FUN_1805277b0(*puVar1);
            thunk_FUN_1805277b0(puVar1);
          }
          else {
            FUN_180540530(lVar3,param_2,(longlong)pcVar5 - (longlong)param_2);
            pcVar5[lVar3 - (longlong)param_2] = '\0';
            puVar1[1] = lVar3;
            puVar1[2] = *(undefined8 *)(local_158 + 0x9c28);
            *(undefined8 **)(local_158 + 0x9c28) = puVar1;
          }
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
        } while ((int)uVar8 < iVar9);
      }
      if (*pcVar5 == '\0') {
        return;
      }
      param_2 = pcVar5 + 1;
      cVar2 = *param_2;
    }
  }
  return;
}



/* ===== 1803999b0 FUN_1803999b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803999b0(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_res10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  
  pfVar10 = *(float **)(param_1 + 0x9c20);
  fVar13 = 0.0;
  lVar9 = *(longlong *)(pfVar10 + 2);
  if (lVar9 == 0) {
    fVar16 = 0.0;
    fVar19 = 0.0;
    fVar14 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar11 = *(float *)(lVar9 + 0x98);
    fVar14 = *(float *)(lVar9 + 0x9c);
    fVar19 = *(float *)(lVar9 + 0xa0);
    fVar16 = *(float *)(lVar9 + 0xa4);
    for (lVar9 = *(longlong *)(lVar9 + 0x148); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x148)) {
      if (*(float *)(lVar9 + 0x98) <= fVar11) {
        fVar11 = *(float *)(lVar9 + 0x98);
      }
      if (*(float *)(lVar9 + 0x9c) <= fVar14) {
        fVar14 = *(float *)(lVar9 + 0x9c);
      }
      if (fVar19 <= *(float *)(lVar9 + 0xa0)) {
        fVar19 = *(float *)(lVar9 + 0xa0);
      }
      if (fVar16 <= *(float *)(lVar9 + 0xa4)) {
        fVar16 = *(float *)(lVar9 + 0xa4);
      }
    }
  }
  fVar17 = *(float *)(param_1 + 0x9c48);
  if (fVar17 == 0.0) {
    fVar17 = *pfVar10;
    if (fVar17 <= 0.0) {
      *(float *)(param_1 + 40000) = fVar11;
      fVar17 = fVar19 - fVar11;
    }
    *(float *)(param_1 + 0x9c48) = fVar17;
  }
  fVar11 = *(float *)(param_1 + 0x9c4c);
  if (fVar11 == 0.0) {
    fVar11 = pfVar10[1];
    if (fVar11 <= 0.0) {
      *(float *)(param_1 + 0x9c44) = fVar14;
      fVar11 = fVar16 - fVar14;
    }
    *(float *)(param_1 + 0x9c4c) = fVar11;
  }
  if (*pfVar10 == 0.0) {
    *pfVar10 = fVar17;
    fVar11 = *(float *)(param_1 + 0x9c4c);
  }
  if (*(float *)(*(longlong *)(param_1 + 0x9c20) + 4) == 0.0) {
    *(float *)(*(longlong *)(param_1 + 0x9c20) + 4) = fVar11;
    fVar11 = *(float *)(param_1 + 0x9c4c);
  }
  fVar14 = *(float *)(param_1 + 0x9c48);
  pfVar10 = *(float **)(param_1 + 0x9c20);
  fVar16 = (float)(*(uint *)(param_1 + 40000) ^ DAT_1808adec0);
  fVar19 = (float)(*(uint *)(param_1 + 0x9c44) ^ DAT_1808adec0);
  if (fVar14 <= 0.0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = *pfVar10 / fVar14;
  }
  if (fVar11 <= 0.0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = pfVar10[1] / fVar11;
  }
  fVar15 = DAT_1808ac34c;
  uVar5 = FUN_180394ce0(&DAT_1806f1f5c);
  local_res10 = CONCAT44(uVar5,0x3f800000);
  fVar12 = (float)FUN_180393980(param_1,local_res10);
  uVar4 = _UNK_1808adaf8;
  uVar3 = _DAT_1808adaf0;
  if (*(int *)(param_1 + 0x9c58) == 1) {
    if (fVar18 <= fVar17) {
      fVar17 = fVar18;
    }
  }
  else {
    if (*(int *)(param_1 + 0x9c58) != 2) goto LAB_180399c13;
    if (fVar17 <= fVar18) {
      fVar17 = fVar18;
    }
  }
  if (*(int *)(param_1 + 0x9c50) == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = *pfVar10 - fVar14 * fVar17;
    if (*(int *)(param_1 + 0x9c50) != 2) {
      fVar14 = fVar14 * DAT_1808ac1f4;
    }
  }
  fVar16 = fVar14 / fVar17 + fVar16;
  if ((*(int *)(param_1 + 0x9c54) != 0) &&
     (fVar13 = pfVar10[1] - fVar11 * fVar17, *(int *)(param_1 + 0x9c54) != 2)) {
    fVar13 = fVar13 * DAT_1808ac1f4;
  }
  fVar19 = fVar13 / fVar17 + fVar19;
  fVar18 = fVar17;
LAB_180399c13:
  fVar18 = fVar18 * (fVar15 / fVar12);
  fVar17 = fVar17 * (fVar15 / fVar12);
  fVar13 = (fVar18 + fVar17) * DAT_1808ac1f4;
  for (lVar9 = *(longlong *)(pfVar10 + 2); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x148)) {
    plVar1 = *(longlong **)(lVar9 + 0x140);
    *(float *)(lVar9 + 0x98) = (fVar16 + *(float *)(lVar9 + 0x98)) * fVar17;
    *(float *)(lVar9 + 0x9c) = (fVar19 + *(float *)(lVar9 + 0x9c)) * fVar18;
    *(float *)(lVar9 + 0xa0) = (fVar16 + *(float *)(lVar9 + 0xa0)) * fVar17;
    *(float *)(lVar9 + 0xa4) = (fVar19 + *(float *)(lVar9 + 0xa4)) * fVar18;
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
      *(float *)(plVar1 + 2) = (fVar16 + *(float *)(plVar1 + 2)) * fVar17;
      *(float *)((longlong)plVar1 + 0x14) = (fVar19 + *(float *)((longlong)plVar1 + 0x14)) * fVar18;
      *(float *)(plVar1 + 3) = (fVar16 + *(float *)(plVar1 + 3)) * fVar17;
      *(float *)((longlong)plVar1 + 0x1c) = (fVar19 + *(float *)((longlong)plVar1 + 0x1c)) * fVar18;
      if (0 < (int)plVar1[1]) {
        lVar6 = *plVar1;
        iVar8 = 0;
        do {
          lVar7 = (longlong)(iVar8 * 2);
          iVar8 = iVar8 + 1;
          *(float *)(lVar6 + lVar7 * 4) = (fVar16 + *(float *)(lVar6 + lVar7 * 4)) * fVar17;
          *(float *)(lVar6 + 4 + lVar7 * 4) = (fVar19 + *(float *)(lVar6 + 4 + lVar7 * 4)) * fVar18;
        } while (iVar8 < (int)plVar1[1]);
      }
    }
    if ((byte)(*(char *)(lVar9 + 0x40) - 2U) < 2) {
      local_88 = CONCAT44(fVar19,fVar16);
      local_98 = uVar3;
      uStack_90 = uVar4;
      uVar5 = FUN_180392ba0(*(undefined8 *)(lVar9 + 0x48),&local_98);
      local_98 = CONCAT44(local_98._4_4_,fVar17);
      uStack_90 = CONCAT44(fVar18,(undefined4)uStack_90);
      local_88 = 0;
      FUN_180392ba0(uVar5,&local_98);
      puVar2 = *(undefined4 **)(lVar9 + 0x48);
      local_80 = *puVar2;
      uStack_7c = puVar2[1];
      uStack_78 = puVar2[2];
      uStack_74 = puVar2[3];
      local_70 = *(undefined8 *)(puVar2 + 4);
      FUN_180392ca0(puVar2,&local_80);
    }
    if ((byte)(*(char *)(lVar9 + 0x50) - 2U) < 2) {
      local_88 = CONCAT44(fVar19,fVar16);
      local_98 = uVar3;
      uStack_90 = uVar4;
      uVar5 = FUN_180392ba0(*(undefined8 *)(lVar9 + 0x58),&local_98);
      local_98 = CONCAT44(local_98._4_4_,fVar17);
      uStack_90 = CONCAT44(fVar18,(undefined4)uStack_90);
      local_88 = 0;
      FUN_180392ba0(uVar5,&local_98);
      puVar2 = *(undefined4 **)(lVar9 + 0x58);
      local_80 = *puVar2;
      uStack_7c = puVar2[1];
      uStack_78 = puVar2[2];
      uStack_74 = puVar2[3];
      local_70 = *(undefined8 *)(puVar2 + 4);
      FUN_180392ca0(puVar2,&local_80);
    }
    iVar8 = 0;
    *(float *)(lVar9 + 100) = fVar13 * *(float *)(lVar9 + 100);
    *(float *)(lVar9 + 0x68) = fVar13 * *(float *)(lVar9 + 0x68);
    if ('\0' < *(char *)(lVar9 + 0x8c)) {
      do {
        lVar6 = (longlong)iVar8;
        iVar8 = iVar8 + 1;
        *(float *)(lVar9 + 0x6c + lVar6 * 4) = fVar13 * *(float *)(lVar9 + 0x6c + lVar6 * 4);
      } while (iVar8 < *(char *)(lVar9 + 0x8c));
    }
  }
  return;
}



/* ===== 180399ee0 FUN_180399ee0 ===== */

undefined8 FUN_180399ee0(char *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  puVar7 = (undefined8 *)_malloc_base(0x9c68);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_180540170(puVar7,0,0x9c68);
    puVar8 = (undefined8 *)_malloc_base(0x10);
    puVar7[0x1384] = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar7[8] = 0x3f800000;
      *(undefined8 *)((longlong)puVar7 + 0x4c) = 0x3f800000;
      iVar6 = 2;
      *(undefined4 *)(puVar7 + 9) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x54) = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      *(undefined4 *)((longlong)puVar7 + 0x5c) = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0x3f800000;
      *(undefined4 *)((longlong)puVar7 + 100) = 0x3f800000;
      *(undefined4 *)(puVar7 + 0xd) = 0x3f800000;
      *(undefined4 *)((longlong)puVar7 + 300) = 0x3f800000;
      *(undefined4 *)((longlong)puVar7 + 0xec) = 0x3f800000;
      *(undefined2 *)(puVar7 + 0x23) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x11c) = 0x40800000;
      *(undefined1 *)(puVar7 + 0x24) = 0;
      *(undefined1 *)((longlong)puVar7 + 0x134) = 1;
      *(undefined2 *)((longlong)puVar7 + 0x136) = 0x1801;
      *(undefined4 *)((longlong)puVar7 + 0x9c5c) = param_3;
      cVar1 = *param_1;
      pcVar11 = param_1;
      do {
        if (cVar1 == '\0') {
          for (lVar9 = *(longlong *)(puVar7[0x1384] + 8); lVar9 != 0;
              lVar9 = *(longlong *)(lVar9 + 0x148)) {
            pcVar11 = (char *)(lVar9 + 0x40);
            if (*(char *)(lVar9 + 0x40) == -1) {
              if (*(char *)(lVar9 + 0xa8) != '\0') {
                FUN_180392ca0(local_48,lVar9 + 0x128);
                FUN_180393df0(local_68,lVar9,local_48);
                uVar10 = FUN_180393aa0(puVar7,lVar9 + 0xa8,local_68,lVar9 + 0x128,pcVar11);
                *(undefined8 *)(lVar9 + 0x48) = uVar10;
              }
              if (*pcVar11 == -1) {
                *pcVar11 = '\0';
              }
            }
            pcVar11 = (char *)(lVar9 + 0x50);
            if (*(char *)(lVar9 + 0x50) == -1) {
              if (*(char *)(lVar9 + 0xe8) != '\0') {
                FUN_180392ca0(local_48,lVar9 + 0x128);
                FUN_180393df0(local_58,lVar9,local_48);
                uVar10 = FUN_180393aa0(puVar7,lVar9 + 0xe8,local_58,lVar9 + 0x128,pcVar11);
                *(undefined8 *)(lVar9 + 0x58) = uVar10;
              }
              if (*pcVar11 == -1) {
                *pcVar11 = '\0';
              }
            }
          }
          FUN_1803999b0(puVar7);
          uVar10 = puVar7[0x1384];
          puVar7[0x1384] = 0;
          puVar8 = (undefined8 *)puVar7[0x1385];
          while (puVar8 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)puVar8[2];
            thunk_FUN_1805277b0(*puVar8);
            thunk_FUN_1805277b0(puVar8[1]);
            thunk_FUN_1805277b0(puVar8);
            puVar8 = puVar2;
          }
          plVar5 = (longlong *)puVar7[0x1383];
          while (plVar5 != (longlong *)0x0) {
            plVar3 = (longlong *)plVar5[4];
            if (*plVar5 != 0) {
              thunk_FUN_1805277b0();
            }
            thunk_FUN_1805277b0(plVar5);
            plVar5 = plVar3;
          }
          lVar9 = puVar7[0x1386];
          while (lVar9 != 0) {
            lVar4 = *(longlong *)(lVar9 + 0xd8);
            thunk_FUN_1805277b0(*(undefined8 *)(lVar9 + 0xd0));
            thunk_FUN_1805277b0(lVar9);
            lVar9 = lVar4;
          }
          FUN_18039a280(puVar7[0x1384]);
          thunk_FUN_1805277b0(puVar7[0x1381]);
          thunk_FUN_1805277b0(puVar7);
          return uVar10;
        }
        if (*param_1 == '<') {
          if (iVar6 == 2) {
            *param_1 = '\0';
            if (*pcVar11 == '\0') {
LAB_18039a055:
              iVar6 = 1;
            }
            else {
              do {
                lVar9 = FUN_1804ef420(&DAT_18089ece0,(int)*pcVar11);
                if (lVar9 == 0) {
                  if (*pcVar11 != '\0') {
                    FUN_180399700(puVar7,pcVar11);
                  }
                  goto LAB_18039a055;
                }
                pcVar11 = pcVar11 + 1;
              } while (*pcVar11 != '\0');
              iVar6 = 1;
            }
LAB_18039a079:
            pcVar11 = param_1 + 1;
          }
        }
        else if ((*param_1 == '>') && (iVar6 == 1)) {
          *param_1 = '\0';
          FUN_180392920(pcVar11);
          iVar6 = 2;
          goto LAB_18039a079;
        }
        param_1 = param_1 + 1;
        cVar1 = *param_1;
      } while( true );
    }
    thunk_FUN_1805277b0(puVar7);
  }
  return 0;
}



/* ===== 18039a280 FUN_18039a280 ===== */

void FUN_18039a280(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    while (lVar4 != 0) {
      lVar1 = *(longlong *)(lVar4 + 0x148);
      plVar3 = *(longlong **)(lVar4 + 0x140);
      while (plVar3 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar3[4];
        if (*plVar3 != 0) {
          thunk_FUN_1805277b0();
        }
        thunk_FUN_1805277b0(plVar3);
        plVar3 = plVar2;
      }
      if ((byte)(*(char *)(lVar4 + 0x40) - 2U) < 2) {
        thunk_FUN_1805277b0(*(undefined8 *)(lVar4 + 0x48));
      }
      if ((byte)(*(char *)(lVar4 + 0x50) - 2U) < 2) {
        thunk_FUN_1805277b0(*(undefined8 *)(lVar4 + 0x58));
      }
      thunk_FUN_1805277b0(lVar4);
      lVar4 = lVar1;
    }
    thunk_FUN_1805277b0(param_1);
  }
  return;
}



/* ===== 18039a350 FUN_18039a350 ===== */

void FUN_18039a350(longlong param_1,float param_2,float param_3,byte param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar5 = (longlong)iVar2 * 0x20;
    fVar7 = param_3 - *(float *)(lVar5 + -0x1c + lVar3);
    fVar6 = param_2 - *(float *)(lVar5 + -0x20 + lVar3);
    if (fVar7 * fVar7 + fVar6 * fVar6 < *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc)) {
      pbVar1 = (byte *)(lVar5 + -4 + lVar3);
      *pbVar1 = *pbVar1 | param_4;
      return;
    }
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 < iVar2 + 1) {
    if (iVar4 < 1) {
      iVar4 = 0x40;
    }
    else {
      iVar4 = iVar4 * 2;
    }
    *(int *)(param_1 + 0x2c) = iVar4;
    lVar3 = _realloc_base(*(undefined8 *)(param_1 + 0x20),(longlong)iVar4 << 5);
    *(longlong *)(param_1 + 0x20) = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar5 = (longlong)*(int *)(param_1 + 0x28) * 0x20;
  *(float *)(lVar5 + lVar3) = param_2;
  *(float *)(lVar5 + 4 + lVar3) = param_3;
  *(byte *)(lVar5 + 0x1c + lVar3) = param_4;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}



/* ===== 18039a430 FUN_18039a430 ===== */

void FUN_18039a430(longlong param_1,undefined4 param_2,float param_3,undefined4 param_4,
                  float param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_3 != param_5) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 < *(int *)(param_1 + 0x18) + 1) {
      if (iVar2 < 1) {
        iVar2 = 0x40;
      }
      else {
        iVar2 = iVar2 * 2;
      }
      *(int *)(param_1 + 0x1c) = iVar2;
      lVar1 = _realloc_base(*(undefined8 *)(param_1 + 0x10),(longlong)iVar2 << 5);
      *(longlong *)(param_1 + 0x10) = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x20;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if (param_5 <= param_3) {
      *(undefined4 *)(lVar3 + lVar1) = param_4;
      *(float *)(lVar3 + 4 + lVar1) = param_5;
      *(undefined4 *)(lVar3 + 8 + lVar1) = param_2;
      *(float *)(lVar3 + 0xc + lVar1) = param_3;
      *(undefined4 *)(lVar3 + 0x10 + lVar1) = 0xffffffff;
    }
    else {
      *(undefined4 *)(lVar3 + lVar1) = param_2;
      *(float *)(lVar3 + 4 + lVar1) = param_3;
      *(undefined4 *)(lVar3 + 8 + lVar1) = param_4;
      *(float *)(lVar3 + 0xc + lVar1) = param_5;
      *(undefined4 *)(lVar3 + 0x10 + lVar1) = 1;
    }
  }
  return;
}



/* ===== 18039a520 FUN_18039a520 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18039a520(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,int param_10,
                  undefined4 param_11)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res10;
  float local_res18;
  
  uVar2 = _DAT_1808ade90;
  fVar1 = DAT_1808ac1f4;
  if (param_10 < 0xb) {
    local_res10 = param_2;
    local_res18 = param_3;
    do {
      fVar4 = param_8 - local_res10;
      fVar5 = param_9 - local_res18;
      fVar3 = (float)((uint)((param_4 - param_8) * fVar5 - (param_5 - param_9) * fVar4) & uVar2) +
              (float)((uint)((param_6 - param_8) * fVar5 - (param_7 - param_9) * fVar4) & uVar2);
      if (fVar3 * fVar3 < (fVar5 * fVar5 + fVar4 * fVar4) * *(float *)(param_1 + 8)) {
        FUN_18039a350(param_1,param_8,param_9,param_11);
        return;
      }
      param_10 = param_10 + 1;
      fVar6 = (local_res18 + param_5) * fVar1;
      fVar5 = (param_5 + param_7) * fVar1;
      fVar8 = (param_4 + param_6) * fVar1;
      param_7 = (param_7 + param_9) * fVar1;
      param_6 = (param_6 + param_8) * fVar1;
      fVar4 = (local_res10 + param_4) * fVar1;
      fVar3 = (fVar5 + fVar6) * fVar1;
      param_5 = (param_7 + fVar5) * fVar1;
      fVar5 = (fVar8 + fVar4) * fVar1;
      param_4 = (param_6 + fVar8) * fVar1;
      fVar8 = (param_5 + fVar3) * fVar1;
      fVar7 = (param_4 + fVar5) * fVar1;
      FUN_18039a520(param_1,local_res10,local_res18,fVar4,fVar6,fVar5,fVar3,fVar7,fVar8,param_10,0);
      local_res10 = fVar7;
      local_res18 = fVar8;
    } while (param_10 < 0xb);
  }
  return;
}



/* ===== 18039a7d0 FUN_18039a7d0 ===== */

void FUN_18039a7d0(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  plVar1 = *(longlong **)(param_2 + 0x140);
  do {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    fVar9 = ((float *)*plVar1)[1];
    fVar10 = *(float *)*plVar1;
    iVar5 = 0;
    if (*(int *)(param_1 + 0x2c) < 1) {
      *(undefined4 *)(param_1 + 0x2c) = 0x40;
      lVar2 = _realloc_base(*(undefined8 *)(param_1 + 0x20),0x800);
      *(longlong *)(param_1 + 0x20) = lVar2;
      if (lVar2 != 0) {
        iVar5 = *(int *)(param_1 + 0x28);
        goto LAB_18039a848;
      }
    }
    else {
LAB_18039a848:
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar4 = (longlong)iVar5 * 0x20;
      *(undefined1 *)(lVar2 + 0x1c + lVar4) = 0;
      *(float *)(lVar2 + lVar4) = fVar10 * param_3;
      *(float *)(lVar2 + 4 + lVar4) = fVar9 * param_3;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    iVar5 = 0;
    if (0 < (int)plVar1[1] + -1) {
      do {
        lVar4 = (longlong)(iVar5 * 2);
        lVar2 = *plVar1;
        FUN_18039a520(param_1,param_3 * *(float *)(lVar2 + lVar4 * 4),
                      param_3 * *(float *)(lVar2 + 4 + lVar4 * 4),
                      param_3 * *(float *)(lVar2 + 8 + lVar4 * 4),
                      param_3 * *(float *)(lVar2 + 0xc + lVar4 * 4),
                      param_3 * *(float *)(lVar2 + 0x10 + lVar4 * 4),
                      param_3 * *(float *)(lVar2 + 0x14 + lVar4 * 4),
                      param_3 * *(float *)(lVar2 + 0x18 + lVar4 * 4),
                      param_3 * *(float *)(lVar2 + 0x1c + lVar4 * 4),0,0);
        iVar5 = iVar5 + 3;
      } while (iVar5 < (int)plVar1[1] + -1);
    }
    iVar5 = *(int *)(param_1 + 0x28);
    fVar9 = param_3 * ((float *)*plVar1)[1];
    fVar10 = param_3 * *(float *)*plVar1;
    if ((iVar5 < 1) ||
       (fVar8 = fVar9 - *(float *)(*(longlong *)(param_1 + 0x20) + -0x1c + (longlong)iVar5 * 0x20),
       fVar7 = fVar10 - *(float *)(*(longlong *)(param_1 + 0x20) + -0x20 + (longlong)iVar5 * 0x20),
       *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) <= fVar8 * fVar8 + fVar7 * fVar7)) {
      iVar3 = *(int *)(param_1 + 0x2c);
      if (iVar3 < iVar5 + 1) {
        if (iVar3 < 1) {
          iVar3 = 0x40;
        }
        else {
          iVar3 = iVar3 * 2;
        }
        *(int *)(param_1 + 0x2c) = iVar3;
        lVar2 = _realloc_base(*(undefined8 *)(param_1 + 0x20),(longlong)iVar3 << 5);
        *(longlong *)(param_1 + 0x20) = lVar2;
        if (lVar2 == 0) goto LAB_18039a9c2;
      }
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x20;
      *(float *)(lVar2 + lVar4) = fVar10;
      *(float *)(lVar2 + 4 + lVar4) = fVar9;
      *(undefined1 *)(lVar2 + 0x1c + lVar4) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
LAB_18039a9c2:
    iVar3 = 0;
    iVar5 = *(int *)(param_1 + 0x28) + -1;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        iVar6 = iVar3;
        lVar2 = *(longlong *)(param_1 + 0x20);
        FUN_18039a430(param_1,*(undefined4 *)(lVar2 + (longlong)iVar5 * 0x20),
                      *(undefined4 *)(lVar2 + 4 + (longlong)iVar5 * 0x20),
                      *(undefined4 *)(lVar2 + (longlong)iVar6 * 0x20),
                      *(undefined4 *)(lVar2 + 4 + (longlong)iVar6 * 0x20));
        iVar3 = iVar6 + 1;
        iVar5 = iVar6;
      } while (iVar6 + 1 < *(int *)(param_1 + 0x28));
    }
    plVar1 = (longlong *)plVar1[4];
  } while( true );
}



/* ===== 18039aa50 FUN_18039aa50 ===== */

void FUN_18039aa50(undefined8 param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *param_4;
  fVar8 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  iVar3 = 0;
  fVar13 = 0.0;
  fVar6 = (float)((uint)param_5 ^ DAT_1808adec0);
  param_7 = param_7 * DAT_1808ac1f4;
  fVar2 = param_4[1];
  if (0 < param_8) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    do {
      fVar4 = (float)FUN_180517200();
      fVar4 = fVar4 * param_7;
      fVar5 = (float)FUN_180517790();
      fVar5 = fVar5 * param_7;
      fVar7 = (fVar2 - fVar4 * fVar6) - fVar5 * param_6;
      fVar4 = (fVar1 - fVar4 * param_6) - fVar5 * param_5;
      if (iVar3 == 0) {
        fVar8 = fVar4;
        fVar11 = fVar7;
      }
      else {
        FUN_18039a430(param_1,fVar9,fVar10,fVar4,fVar7);
        if (iVar3 == param_8 + -1) {
          fVar12 = fVar4;
          fVar13 = fVar7;
        }
      }
      iVar3 = iVar3 + 1;
      fVar9 = fVar4;
      fVar10 = fVar7;
    } while (iVar3 < param_8);
  }
  if (param_9 != 0) {
    FUN_18039a430(param_1,*param_2,param_2[1],fVar8,fVar11);
    FUN_18039a430(param_1,fVar12,fVar13,*param_3,param_3[1]);
  }
  *param_2 = fVar8;
  param_2[1] = fVar11;
  *param_3 = fVar12;
  param_3[1] = fVar13;
  return;
}



/* ===== 18039ace0 FUN_18039ace0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18039ace0(longlong param_1,float *param_2,int param_3,int param_4,int param_5,int param_6,
                  float param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_res18;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  
  fVar15 = DAT_1808ac1f4;
  fVar14 = param_7 * DAT_1808ac1f4;
  fVar7 = (float)FUN_18053eb30(fVar14 / (fVar14 + *(float *)(param_1 + 8)));
  fVar7 = (float)FUN_18053ef70(DAT_1808ac680 / (fVar7 + fVar7));
  uVar4 = (uint)fVar7;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e4 = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  if ((int)uVar4 < 2) {
    uVar4 = 2;
  }
  local_res18 = param_3 + -1;
  local_108 = 0;
  uStack_100 = 0;
  if (param_4 == 0) {
    pfVar2 = param_2 + 8;
  }
  else {
    pfVar2 = param_2;
    param_2 = param_2 + (longlong)local_res18 * 8;
    local_res18 = param_3;
  }
  fVar7 = *param_2;
  fVar12 = param_2[1];
  fVar13 = *pfVar2 - fVar7;
  fVar16 = pfVar2[1] - fVar12;
  fVar11 = fVar16 * fVar16 + fVar13 * fVar13;
  if (fVar11 < 0.0) {
    fVar11 = (float)FUN_18051af10();
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  uVar3 = DAT_1808adec0;
  if (param_4 == 0) {
    local_e8 = 0.0;
    local_dc = 0.0;
    local_e0 = 0.0;
    if (DAT_1808abf8c < fVar11) {
      fVar16 = (DAT_1808ac34c / fVar11) * fVar16;
      fVar13 = (DAT_1808ac34c / fVar11) * fVar13;
    }
    if (param_6 != 0) {
      if (param_6 != 2) {
        if (param_6 == 1) {
          FUN_18039aa50(param_1,&local_128,&local_108,param_2,fVar13,fVar16,param_7,uVar4,0);
        }
        fVar15 = (float)local_128;
        fVar11 = local_128._4_4_;
        fVar13 = local_108._4_4_;
        fVar7 = (float)local_108;
        goto LAB_18039b088;
      }
      fVar12 = fVar12 - fVar16 * fVar14;
      fVar7 = fVar7 - fVar13 * fVar14;
    }
    fVar15 = fVar7 - fVar16 * fVar14;
    fVar13 = (float)((uint)fVar13 ^ DAT_1808adec0) * fVar14;
    fVar7 = fVar7 + fVar16 * fVar14;
    fVar11 = fVar12 - fVar13;
    fVar13 = fVar13 + fVar12;
    FUN_18039a430(param_1);
    local_128 = CONCAT44(fVar11,fVar15);
    local_108 = CONCAT44(fVar13,fVar7);
  }
  else {
    if (DAT_1808abf8c < fVar11) {
      fVar16 = (DAT_1808ac34c / fVar11) * fVar16;
      fVar13 = (DAT_1808ac34c / fVar11) * fVar13;
    }
    fVar12 = fVar11 * fVar16 * fVar15 + fVar12;
    fVar7 = fVar11 * fVar13 * fVar15 + fVar7;
    local_e0 = (float)((uint)fVar13 ^ DAT_1808adec0) * fVar14;
    local_e8 = fVar12 - local_e0;
    local_e0 = local_e0 + fVar12;
    local_e4 = fVar7 - fVar16 * fVar14;
    local_dc = fVar16 * fVar14 + fVar7;
    local_128 = CONCAT44(local_e8,local_e4);
    local_108 = CONCAT44(local_e0,local_dc);
    fVar15 = local_e4;
    fVar11 = local_e8;
    fVar13 = local_e0;
    fVar7 = local_dc;
  }
LAB_18039b088:
  for (uVar6 = (uint)(param_4 == 0); pfVar1 = pfVar2, (int)uVar6 < local_res18; uVar6 = uVar6 + 1) {
    fVar12 = pfVar1[7];
    if (((uint)fVar12 & 1) == 0) {
      fVar15 = *pfVar1 - fVar14 * pfVar1[5];
      fVar7 = *pfVar1 + fVar14 * pfVar1[5];
      fVar11 = pfVar1[1] - fVar14 * pfVar1[6];
      fVar13 = pfVar1[1] + fVar14 * pfVar1[6];
      FUN_18039a430(param_1);
      FUN_18039a430(param_1);
      local_128 = CONCAT44(fVar11,fVar15);
      local_108 = CONCAT44(fVar13,fVar7);
    }
    else if (param_5 == 1) {
      fVar12 = (float)FUN_180516b00();
      uVar8 = FUN_180516b00();
      fVar12 = (float)uVar8 - fVar12;
      if (fVar12 < DAT_1808ac680) {
        fVar12 = fVar12 + DAT_1808ac7d0;
      }
      if (DAT_1808ac680 < fVar12) {
        fVar12 = fVar12 + _DAT_1808ace04;
      }
      auVar9._0_4_ = (float)((uint)fVar12 & _DAT_1808ade90);
      auVar9._4_4_ = (uint)((ulonglong)uVar8 >> 0x20) & _UNK_1808ade94;
      auVar9._8_4_ = (uint)extraout_XMM0_Qb & _UNK_1808ade98;
      auVar9._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_1808ade9c;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = (auVar9._0_4_ / DAT_1808ac680) * (float)(int)uVar4;
      fVar12 = (float)FUN_18053ef70(auVar10._0_8_);
      uVar3 = (uint)fVar12;
      if ((int)uVar3 < 2) {
        uVar3 = 2;
      }
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      iVar5 = 0;
      if (uVar3 != 0) {
        do {
          fVar7 = (float)FUN_180517200();
          fVar12 = (float)FUN_180517790();
          fVar15 = *pfVar1 - fVar7 * fVar14;
          fVar11 = pfVar1[1] - fVar12 * fVar14;
          fVar7 = *pfVar1 + fVar7 * fVar14;
          fVar13 = pfVar1[1] + fVar12 * fVar14;
          FUN_18039a430(param_1);
          FUN_18039a430(param_1);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar3);
      }
      local_128 = CONCAT44(fVar11,fVar15);
      local_108 = CONCAT44(fVar13,fVar7);
    }
    else if ((param_5 == 2) || (((uint)fVar12 & 2) != 0)) {
      fVar15 = *pfVar1 - fVar14 * pfVar1[3];
      fVar13 = (float)((uint)pfVar1[2] ^ uVar3) * fVar14;
      fVar7 = *pfVar1 + fVar14 * pfVar1[3];
      fVar11 = pfVar1[1] - fVar13;
      fVar13 = pfVar1[1] + fVar13;
      FUN_18039a430(param_1);
      FUN_18039a430(param_1);
      FUN_18039a430(param_1);
      FUN_18039a430(param_1);
      local_108 = CONCAT44(fVar13,fVar7);
      local_128 = CONCAT44(fVar11,fVar15);
    }
    else {
      fVar7 = pfVar1[3];
      fVar13 = (float)((uint)pfVar1[2] ^ uVar3) * fVar14;
      if (((uint)fVar12 & 4) == 0) {
        fVar15 = *pfVar1 - fVar14 * fVar7;
        fVar11 = pfVar1[1] - fVar13;
        FUN_18039a430(param_1);
        FUN_18039a430(param_1);
        fVar7 = fVar14 * pfVar1[5] + *pfVar1;
        fVar13 = fVar14 * pfVar1[6] + pfVar1[1];
      }
      else {
        fVar15 = *pfVar1 - fVar14 * pfVar1[5];
        fVar11 = pfVar1[1] - fVar14 * pfVar1[6];
        FUN_18039a430(param_1);
        fVar7 = fVar14 * fVar7 + *pfVar1;
        fVar13 = fVar13 + pfVar1[1];
        FUN_18039a430(param_1);
      }
      FUN_18039a430(param_1);
      local_128 = CONCAT44(fVar11,fVar15);
      local_108 = CONCAT44(fVar13,fVar7);
    }
    pfVar2 = pfVar1 + 8;
    param_2 = pfVar1;
    uVar3 = DAT_1808adec0;
  }
  if (param_4 == 0) {
    fVar14 = *pfVar1 - *param_2;
    fVar15 = pfVar1[1] - param_2[1];
    fVar7 = fVar15 * fVar15 + fVar14 * fVar14;
    if (fVar7 < 0.0) {
      fVar7 = (float)FUN_18051af10();
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    if (DAT_1808abf8c < fVar7) {
      fVar15 = (DAT_1808ac34c / fVar7) * fVar15;
      fVar14 = (DAT_1808ac34c / fVar7) * fVar14;
    }
    if (param_6 == 0) {
      FUN_18039a430(param_1);
      FUN_18039a430(param_1);
      FUN_18039a430(param_1);
    }
    else if (param_6 == 2) {
      FUN_18039a430(param_1);
      FUN_18039a430(param_1);
      FUN_18039a430(param_1);
    }
    else if (param_6 == 1) {
      FUN_18039aa50(param_1,&local_108,&local_128,pfVar1,(uint)fVar14 ^ uVar3,(uint)fVar15 ^ uVar3,
                    param_7,uVar4,1);
    }
  }
  else {
    FUN_18039a430(param_1);
    FUN_18039a430(param_1);
  }
  return;
}



/* ===== 18039b8d0 FUN_18039b8d0 ===== */

void FUN_18039b8d0(longlong param_1,float param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar4 = DAT_1808ac34c;
  fVar3 = DAT_1808abf8c;
  iVar11 = 0;
  pfVar12 = *(float **)(param_1 + 0x20);
  pfVar10 = pfVar12 + (longlong)(*(int *)(param_1 + 0x28) + -1) * 8;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      fVar17 = *pfVar12 - *pfVar10;
      pfVar10[2] = fVar17;
      fVar18 = pfVar12[1] - pfVar10[1];
      pfVar10[3] = fVar18;
      fVar13 = fVar18 * fVar18 + fVar17 * fVar17;
      if (fVar13 < 0.0) {
        fVar13 = (float)FUN_18051af10(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
      if (fVar3 < fVar13) {
        pfVar10[2] = fVar17 * (fVar4 / fVar13);
        pfVar10[3] = fVar18 * (fVar4 / fVar13);
      }
      pfVar10[4] = fVar13;
      uVar5 = DAT_1808adec0;
      fVar17 = DAT_1808acc14;
      fVar13 = DAT_1808ac1f4;
      iVar11 = iVar11 + 1;
      iVar2 = *(int *)(param_1 + 0x28);
      pfVar10 = pfVar12;
      pfVar12 = pfVar12 + 8;
    } while (iVar11 < iVar2);
    iVar11 = 0;
    lVar9 = (longlong)(iVar2 + -1) * 0x20 + *(longlong *)(param_1 + 0x20);
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (0 < iVar2) {
      do {
        lVar7 = lVar6;
        fVar16 = (*(float *)(lVar7 + 0xc) + *(float *)(lVar9 + 0xc)) * fVar13;
        fVar15 = ((float)((uint)*(float *)(lVar7 + 8) ^ uVar5) +
                 (float)(*(uint *)(lVar9 + 8) ^ uVar5)) * fVar13;
        *(float *)(lVar7 + 0x14) = fVar16;
        *(float *)(lVar7 + 0x18) = fVar15;
        fVar18 = fVar15 * fVar15 + fVar16 * fVar16;
        if (fVar3 < fVar18) {
          fVar14 = fVar17;
          if (fVar4 / fVar18 <= fVar17) {
            fVar14 = fVar4 / fVar18;
          }
          *(float *)(lVar7 + 0x14) = fVar16 * fVar14;
          *(float *)(lVar7 + 0x18) = fVar15 * fVar14;
        }
        *(byte *)(lVar7 + 0x1c) = *(byte *)(lVar7 + 0x1c) & 1;
        bVar1 = *(byte *)(lVar7 + 0x1c);
        bVar8 = bVar1;
        if (0.0 < *(float *)(lVar7 + 8) * *(float *)(lVar9 + 0xc) -
                  *(float *)(lVar7 + 0xc) * *(float *)(lVar9 + 8)) {
          bVar8 = bVar1 | 4;
          *(byte *)(lVar7 + 0x1c) = bVar8;
        }
        if ((bVar1 != 0) && ((fVar18 * param_2 * param_2 < fVar4 || (param_3 - 1U < 2)))) {
          *(byte *)(lVar7 + 0x1c) = bVar8 | 2;
        }
        iVar11 = iVar11 + 1;
        lVar6 = lVar7 + 0x20;
        lVar9 = lVar7;
      } while (iVar11 < *(int *)(param_1 + 0x28));
    }
  }
  return;
}



/* ===== 18039bb30 FUN_18039bb30 ===== */

void FUN_18039bb30(longlong param_1,longlong param_2,float param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined2 uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 local_res18;
  longlong *local_e8;
  
  local_e8 = *(longlong **)(param_2 + 0x140);
  iVar15 = (int)*(char *)(param_2 + 0x8d);
  iVar13 = (int)*(char *)(param_2 + 0x8e);
  fVar30 = param_3 * *(float *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  if (local_e8 != (longlong *)0x0) {
    do {
      *(undefined4 *)(param_1 + 0x28) = 0;
      FUN_18039a350(param_1,param_3 * *(float *)*local_e8,param_3 * ((float *)*local_e8)[1],1);
      iVar16 = 0;
      if (0 < (int)local_e8[1] + -1) {
        do {
          lVar11 = (longlong)(iVar16 * 2);
          lVar20 = *local_e8;
          FUN_18039a520(param_1,param_3 * *(float *)(lVar20 + lVar11 * 4),
                        param_3 * *(float *)(lVar20 + 4 + lVar11 * 4),
                        param_3 * *(float *)(lVar20 + 8 + lVar11 * 4),
                        param_3 * *(float *)(lVar20 + 0xc + lVar11 * 4),
                        param_3 * *(float *)(lVar20 + 0x10 + lVar11 * 4),
                        param_3 * *(float *)(lVar20 + 0x14 + lVar11 * 4),
                        param_3 * *(float *)(lVar20 + 0x18 + lVar11 * 4),
                        param_3 * *(float *)(lVar20 + 0x1c + lVar11 * 4),0,1);
          iVar16 = iVar16 + 3;
        } while (iVar16 < (int)local_e8[1] + -1);
      }
      iVar16 = *(int *)(param_1 + 0x28);
      if (1 < iVar16) {
        pfVar10 = *(float **)(param_1 + 0x20);
        iVar18 = iVar16 + -1;
        if (*(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) <=
            (pfVar10[1] - pfVar10[(longlong)iVar18 * 8 + 1]) *
            (pfVar10[1] - pfVar10[(longlong)iVar18 * 8 + 1]) +
            (*pfVar10 - pfVar10[(longlong)iVar18 * 8]) * (*pfVar10 - pfVar10[(longlong)iVar18 * 8]))
        {
          iVar17 = (int)*(char *)((longlong)local_e8 + 0xc);
        }
        else {
          *(int *)(param_1 + 0x28) = iVar18;
          iVar17 = 1;
          iVar16 = iVar18;
        }
        if (*(char *)(param_2 + 0x8c) < '\x01') {
          FUN_18039b8d0(param_1,uVar2,iVar15);
          FUN_18039ace0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
                        iVar17,iVar15,iVar13,fVar30);
        }
        else {
          bVar9 = true;
          lVar20 = 0;
          if (iVar17 != 0) {
            iVar18 = *(int *)(param_1 + 0x2c);
            uVar5 = *(undefined8 *)pfVar10;
            uVar6 = *(undefined8 *)(pfVar10 + 2);
            uVar7 = *(undefined8 *)(pfVar10 + 4);
            uVar8 = *(undefined8 *)(pfVar10 + 6);
            if (iVar18 < iVar16 + 1) {
              iVar16 = iVar18 * 2;
              if (iVar18 < 1) {
                iVar16 = 0x40;
              }
              *(int *)(param_1 + 0x2c) = iVar16;
              pfVar10 = (float *)_realloc_base(pfVar10,(longlong)iVar16 << 5);
              *(float **)(param_1 + 0x20) = pfVar10;
              if (pfVar10 == (float *)0x0) goto LAB_18039bdb0;
              iVar16 = *(int *)(param_1 + 0x28);
            }
            *(undefined8 *)(pfVar10 + (longlong)iVar16 * 8) = uVar5;
            *(undefined8 *)(pfVar10 + (longlong)iVar16 * 8 + 2) = uVar6;
            *(undefined8 *)(pfVar10 + (longlong)iVar16 * 8 + 4) = uVar7;
            *(undefined8 *)(pfVar10 + (longlong)iVar16 * 8 + 4 + 2) = uVar8;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
LAB_18039bdb0:
          iVar16 = *(int *)(param_1 + 0x28);
          lVar11 = *(longlong *)(param_1 + 0x30);
          if (*(int *)(param_1 + 0x3c) < iVar16) {
            *(int *)(param_1 + 0x3c) = iVar16;
            lVar11 = _realloc_base(lVar11,(longlong)iVar16 << 5);
            *(longlong *)(param_1 + 0x30) = lVar11;
            if (lVar11 != 0) {
              iVar16 = *(int *)(param_1 + 0x28);
              goto LAB_18039bddb;
            }
          }
          else {
LAB_18039bddb:
            FUN_180540530(lVar11,*(undefined8 *)(param_1 + 0x20),(longlong)iVar16 << 5);
            *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
          }
          pfVar10 = *(float **)(param_1 + 0x30);
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar19 = *(undefined2 *)((longlong)pfVar10 + 0x1d);
          local_res18 = *(undefined1 *)((longlong)pfVar10 + 0x1f);
          fVar23 = *pfVar10;
          fVar26 = pfVar10[1];
          fVar32 = pfVar10[2];
          fVar33 = pfVar10[3];
          fVar34 = pfVar10[4];
          fVar35 = pfVar10[5];
          fVar14 = pfVar10[6];
          uVar3 = *(undefined1 *)(pfVar10 + 7);
          iVar16 = 0;
          if (*(int *)(param_1 + 0x2c) < 1) {
            *(undefined4 *)(param_1 + 0x2c) = 0x40;
            lVar11 = _realloc_base(*(undefined8 *)(param_1 + 0x20),0x800);
            *(longlong *)(param_1 + 0x20) = lVar11;
            if (lVar11 != 0) {
              iVar16 = *(int *)(param_1 + 0x28);
              goto LAB_18039be52;
            }
          }
          else {
LAB_18039be52:
            lVar11 = *(longlong *)(param_1 + 0x20);
            lVar12 = (longlong)iVar16 * 0x20;
            *(float *)(lVar12 + lVar11) = fVar23;
            *(float *)(lVar12 + 4 + lVar11) = fVar26;
            pfVar10 = (float *)(lVar12 + 8 + lVar11);
            *pfVar10 = fVar32;
            pfVar10[1] = fVar33;
            pfVar10[2] = fVar34;
            pfVar10[3] = fVar35;
            *(float *)(lVar12 + 0x18 + lVar11) = fVar14;
            *(undefined1 *)(lVar12 + 0x1c + lVar11) = uVar3;
            *(undefined2 *)(lVar12 + 0x1d + lVar11) = uVar19;
            *(undefined1 *)(lVar12 + 0x1f + lVar11) = local_res18;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
          bVar4 = *(byte *)(param_2 + 0x8c);
          iVar18 = (int)(char)bVar4;
          iVar16 = 0;
          fVar27 = 0.0;
          if ('\x03' < (char)bVar4) {
            do {
              lVar11 = (longlong)iVar16;
              iVar16 = iVar16 + 4;
              fVar27 = fVar27 + *(float *)(param_2 + 0x6c + lVar11 * 4) +
                       *(float *)(param_2 + 0x70 + lVar11 * 4) +
                       *(float *)(param_2 + 0x74 + lVar11 * 4) +
                       *(float *)(param_2 + 0x78 + lVar11 * 4);
            } while (iVar16 < iVar18 + -3);
          }
          for (; iVar16 < iVar18; iVar16 = iVar16 + 1) {
            fVar27 = fVar27 + *(float *)(param_2 + 0x6c + (longlong)iVar16 * 4);
          }
          if ((bVar4 & 1) != 0) {
            fVar27 = fVar27 + fVar27;
          }
          fVar21 = (float)FUN_180519fe0(*(undefined4 *)(param_2 + 0x68),fVar27);
          if (fVar21 < 0.0) {
            fVar21 = fVar21 + fVar27;
          }
          if (*(float *)(param_2 + 0x6c) <= fVar21 && fVar21 != *(float *)(param_2 + 0x6c)) {
            do {
              fVar21 = fVar21 - *(float *)(param_2 + 0x6c + (longlong)(int)lVar20 * 4);
              lVar20 = (longlong)(((int)lVar20 + 1) % iVar18);
              pfVar10 = (float *)(param_2 + 0x6c + lVar20 * 4);
            } while (*pfVar10 <= fVar21 && fVar21 != *pfVar10);
          }
          iVar16 = 1;
          fVar27 = (*(float *)(param_2 + 0x6c + (longlong)(int)lVar20 * 4) - fVar21) * param_3;
          if (1 < *(int *)(param_1 + 0x38)) {
            fVar21 = 0.0;
            do {
              lVar11 = *(longlong *)(param_1 + 0x30);
              lVar12 = (longlong)iVar16 * 0x20;
              fVar22 = *(float *)(lVar12 + lVar11);
              fVar28 = *(float *)(lVar12 + 4 + lVar11);
              fVar29 = fVar22 - fVar23;
              fVar31 = fVar28 - fVar26;
              fVar24 = fVar31 * fVar31 + fVar29 * fVar29;
              if (fVar24 < 0.0) {
                fVar24 = (float)FUN_18051af10(fVar24);
              }
              else {
                fVar24 = SQRT(fVar24);
              }
              fVar25 = fVar24 + fVar21;
              if (fVar25 <= fVar27) {
                fVar14 = *(float *)(lVar12 + 0x18 + lVar11);
                pfVar10 = (float *)(lVar12 + 8 + lVar11);
                fVar32 = *pfVar10;
                fVar33 = pfVar10[1];
                fVar34 = pfVar10[2];
                fVar35 = pfVar10[3];
                uVar3 = *(undefined1 *)(lVar12 + 0x1c + lVar11);
                uVar19 = *(undefined2 *)(lVar12 + 0x1d + lVar11);
                local_res18 = *(undefined1 *)(lVar12 + 0x1f + lVar11);
                iVar18 = *(int *)(param_1 + 0x2c);
                if (iVar18 < *(int *)(param_1 + 0x28) + 1) {
                  if (iVar18 < 1) {
                    iVar18 = 0x40;
                  }
                  else {
                    iVar18 = iVar18 * 2;
                  }
                  *(int *)(param_1 + 0x2c) = iVar18;
                  lVar11 = _realloc_base(*(undefined8 *)(param_1 + 0x20),(longlong)iVar18 << 5);
                  *(longlong *)(param_1 + 0x20) = lVar11;
                  if (lVar11 != 0) goto LAB_18039c1ee;
                }
                else {
LAB_18039c1ee:
                  lVar11 = *(longlong *)(param_1 + 0x20);
                  lVar12 = (longlong)*(int *)(param_1 + 0x28) * 0x20;
                  *(float *)(lVar12 + lVar11) = fVar22;
                  *(float *)(lVar12 + 4 + lVar11) = fVar28;
                  pfVar10 = (float *)(lVar12 + 8 + lVar11);
                  *pfVar10 = fVar32;
                  pfVar10[1] = fVar33;
                  pfVar10[2] = fVar34;
                  pfVar10[3] = fVar35;
                  *(float *)(lVar12 + 0x18 + lVar11) = fVar14;
                  *(undefined1 *)(lVar12 + 0x1c + lVar11) = uVar3;
                  *(undefined2 *)(lVar12 + 0x1d + lVar11) = uVar19;
                  *(undefined1 *)(lVar12 + 0x1f + lVar11) = local_res18;
                  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                }
                iVar16 = iVar16 + 1;
              }
              else {
                iVar18 = *(int *)(param_1 + 0x28);
                fVar24 = (fVar27 - fVar21) / fVar24;
                fVar28 = fVar24 * fVar31 + fVar26;
                fVar22 = fVar24 * fVar29 + fVar23;
                if (iVar18 < 1) {
LAB_18039c03c:
                  iVar17 = *(int *)(param_1 + 0x2c);
                  if (iVar17 < iVar18 + 1) {
                    if (iVar17 < 1) {
                      iVar17 = 0x40;
                    }
                    else {
                      iVar17 = iVar17 * 2;
                    }
                    *(int *)(param_1 + 0x2c) = iVar17;
                    lVar11 = _realloc_base(*(undefined8 *)(param_1 + 0x20),(longlong)iVar17 << 5);
                    *(longlong *)(param_1 + 0x20) = lVar11;
                    if (lVar11 == 0) goto LAB_18039c092;
                    iVar18 = *(int *)(param_1 + 0x28);
                  }
                  lVar11 = *(longlong *)(param_1 + 0x20);
                  lVar12 = (longlong)iVar18 * 0x20;
                  *(float *)(lVar11 + lVar12) = fVar22;
                  *(float *)(lVar11 + 4 + lVar12) = fVar28;
                  *(undefined1 *)(lVar11 + 0x1c + lVar12) = 1;
                  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
                }
                else {
                  lVar11 = *(longlong *)(param_1 + 0x20);
                  lVar12 = (longlong)iVar18 * 0x20;
                  fVar26 = fVar28 - *(float *)(lVar11 + -0x1c + lVar12);
                  fVar23 = fVar22 - *(float *)(lVar11 + -0x20 + lVar12);
                  if (*(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) <=
                      fVar26 * fVar26 + fVar23 * fVar23) goto LAB_18039c03c;
                  pbVar1 = (byte *)(lVar11 + -4 + lVar12);
                  *pbVar1 = *pbVar1 | 1;
                }
LAB_18039c092:
                if ((1 < *(int *)(param_1 + 0x28)) && (bVar9)) {
                  FUN_18039b8d0(param_1,uVar2,iVar15);
                  FUN_18039ace0(param_1,*(undefined8 *)(param_1 + 0x20),
                                *(undefined4 *)(param_1 + 0x28),0,iVar15,iVar13,fVar30);
                }
                bVar9 = !bVar9;
                fVar25 = 0.0;
                lVar20 = (longlong)(((int)lVar20 + 1) % (int)*(char *)(param_2 + 0x8c));
                fVar27 = param_3 * *(float *)(param_2 + 0x6c + lVar20 * 4);
                *(undefined4 *)(param_1 + 0x28) = 0;
                if (*(int *)(param_1 + 0x2c) < 1) {
                  *(undefined4 *)(param_1 + 0x2c) = 0x40;
                  lVar11 = _realloc_base(*(undefined8 *)(param_1 + 0x20),0x800);
                  *(longlong *)(param_1 + 0x20) = lVar11;
                  if (lVar11 == 0) goto LAB_18039c235;
                }
                lVar11 = *(longlong *)(param_1 + 0x20);
                lVar12 = (longlong)*(int *)(param_1 + 0x28) * 0x20;
                *(float *)(lVar12 + lVar11) = fVar22;
                *(float *)(lVar12 + 4 + lVar11) = fVar28;
                pfVar10 = (float *)(lVar12 + 8 + lVar11);
                *pfVar10 = fVar32;
                pfVar10[1] = fVar33;
                pfVar10[2] = fVar34;
                pfVar10[3] = fVar35;
                *(float *)(lVar12 + 0x18 + lVar11) = fVar14;
                *(undefined1 *)(lVar12 + 0x1c + lVar11) = 1;
                *(undefined2 *)(lVar12 + 0x1d + lVar11) = uVar19;
                *(undefined1 *)(lVar12 + 0x1f + lVar11) = local_res18;
                *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
              }
LAB_18039c235:
              fVar21 = fVar25;
              fVar23 = fVar22;
              fVar26 = fVar28;
            } while (iVar16 < *(int *)(param_1 + 0x38));
          }
          if ((1 < *(int *)(param_1 + 0x28)) && (bVar9)) {
            FUN_18039b8d0(param_1,uVar2,iVar15);
            FUN_18039ace0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0,
                          iVar15,iVar13,fVar30);
          }
        }
      }
      local_e8 = (longlong *)local_e8[4];
    } while (local_e8 != (longlong *)0x0);
  }
  return;
}



/* ===== 18039c390 FUN_18039c390 ===== */

int * FUN_18039c390(longlong param_1,float *param_2,float param_3)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  int *piVar4;
  float fVar5;
  uint uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  piVar4 = *(int **)(param_1 + 0x40);
  if (piVar4 != (int *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(piVar4 + 4);
    goto LAB_18039c3c4;
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
LAB_18039c477:
    lVar3 = _malloc_base(0x410);
    if (lVar3 != 0) {
      FUN_180540170(lVar3,0,0x410);
      if (lVar1 == 0) {
        *(longlong *)(param_1 + 0x48) = lVar3;
      }
      else {
        *(longlong *)(lVar1 + 0x408) = lVar3;
      }
    }
LAB_18039c4ab:
    *(longlong *)(param_1 + 0x50) = lVar3;
  }
  else {
    lVar3 = lVar1;
    if (0x400 < *(int *)(lVar1 + 0x400) + 0x18) {
      lVar3 = *(longlong *)(lVar1 + 0x408);
      if (lVar3 == 0) goto LAB_18039c477;
      goto LAB_18039c4ab;
    }
  }
  piVar4 = (int *)(*(int *)(lVar3 + 0x400) + lVar3);
  *(int *)(lVar3 + 0x400) = *(int *)(lVar3 + 0x400) + 0x18;
  if (piVar4 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_18039c3c4:
  fVar9 = DAT_1808acc44;
  dVar2 = DAT_1808ac4a8;
  fVar8 = (param_2[2] - *param_2) / (param_2[3] - param_2[1]);
  if (0.0 <= fVar8) {
    dVar7 = (double)(fVar8 * DAT_1808acc44);
    if (fVar8 * DAT_1808acc44 < 0.0) {
      fVar5 = (float)FUN_18053ef70((float)(dVar7 - DAT_1808ac4a8));
    }
    else {
      fVar5 = (float)FUN_18053f0d0((float)(dVar7 + DAT_1808ac4a8));
    }
  }
  else {
    fVar5 = (float)((uint)fVar8 ^ DAT_1808adec0) * DAT_1808acc44;
    dVar7 = (double)fVar5;
    if (fVar5 < 0.0) {
      uVar6 = FUN_18053ef70((float)(dVar7 - DAT_1808ac4a8));
      fVar5 = (float)(uVar6 ^ DAT_1808adec0);
    }
    else {
      uVar6 = FUN_18053f0d0((float)(dVar7 + DAT_1808ac4a8));
      fVar5 = (float)(uVar6 ^ DAT_1808adec0);
    }
  }
  piVar4[1] = (int)fVar5;
  fVar9 = ((param_3 - param_2[1]) * fVar8 + *param_2) * fVar9;
  dVar7 = (double)fVar9;
  if (fVar9 < 0.0) {
    fVar9 = (float)FUN_18053ef70((float)(dVar7 - dVar2));
  }
  else {
    fVar9 = (float)FUN_18053f0d0((float)(dVar7 + dVar2));
  }
  *piVar4 = (int)fVar9;
  piVar4[2] = (int)param_2[3];
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[3] = (int)param_2[4];
  return piVar4;
}



/* ===== 18039c5b0 FUN_18039c5b0 ===== */

void FUN_18039c5b0(longlong param_1,int param_2,uint param_3,uint param_4,undefined8 param_5,
                  int *param_6,int *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  int iVar34;
  uint uVar35;
  longlong lVar36;
  int iVar37;
  
  iVar34 = (int)param_3 >> 10;
  iVar37 = (int)param_4 >> 10;
  if (iVar34 < *param_6) {
    *param_6 = iVar34;
  }
  if (*param_7 < iVar37) {
    *param_7 = iVar37;
  }
  if ((iVar34 < param_2) && (-1 < iVar37)) {
    if (iVar34 == iVar37) {
      *(char *)(iVar34 + param_1) =
           *(char *)(iVar34 + param_1) + (char)((int)((param_4 - param_3) * 0x33) >> 10);
      return;
    }
    if (iVar34 < 0) {
      iVar34 = -1;
    }
    else {
      *(char *)(iVar34 + param_1) =
           *(char *)(iVar34 + param_1) + (char)((int)((0x400 - (param_3 & 0x3ff)) * 0x33) >> 10);
    }
    if (iVar37 < param_2) {
      *(char *)(iVar37 + param_1) =
           *(char *)(iVar37 + param_1) + (char)((param_4 & 0x3ff) * 0x33 >> 10);
      param_2 = iVar37;
    }
    cVar33 = UNK_1808ad8cf;
    cVar32 = UNK_1808ad8ce;
    cVar31 = UNK_1808ad8cd;
    cVar30 = UNK_1808ad8cc;
    cVar29 = UNK_1808ad8cb;
    cVar28 = UNK_1808ad8ca;
    cVar27 = UNK_1808ad8c9;
    cVar26 = UNK_1808ad8c8;
    cVar25 = UNK_1808ad8c7;
    cVar24 = UNK_1808ad8c6;
    cVar23 = UNK_1808ad8c5;
    cVar22 = UNK_1808ad8c4;
    cVar21 = UNK_1808ad8c3;
    cVar20 = UNK_1808ad8c2;
    cVar19 = UNK_1808ad8c1;
    cVar18 = DAT_1808ad8c0;
    iVar34 = iVar34 + 1;
    if (iVar34 < param_2) {
      if (0x3f < (uint)(param_2 - iVar34)) {
        uVar35 = param_2 - iVar34 & 0x8000003f;
        if ((int)uVar35 < 0) {
          uVar35 = (uVar35 - 1 | 0xffffffc0) + 1;
        }
        do {
          lVar36 = (longlong)iVar34;
          iVar34 = iVar34 + 0x40;
          pcVar1 = (char *)(param_1 + lVar36);
          cVar3 = pcVar1[1];
          cVar4 = pcVar1[2];
          cVar5 = pcVar1[3];
          cVar6 = pcVar1[4];
          cVar7 = pcVar1[5];
          cVar8 = pcVar1[6];
          cVar9 = pcVar1[7];
          cVar10 = pcVar1[8];
          cVar11 = pcVar1[9];
          cVar12 = pcVar1[10];
          cVar13 = pcVar1[0xb];
          cVar14 = pcVar1[0xc];
          cVar15 = pcVar1[0xd];
          cVar16 = pcVar1[0xe];
          cVar17 = pcVar1[0xf];
          pcVar2 = (char *)(param_1 + lVar36);
          *pcVar2 = cVar18 + *pcVar1;
          pcVar2[1] = cVar19 + cVar3;
          pcVar2[2] = cVar20 + cVar4;
          pcVar2[3] = cVar21 + cVar5;
          pcVar2[4] = cVar22 + cVar6;
          pcVar2[5] = cVar23 + cVar7;
          pcVar2[6] = cVar24 + cVar8;
          pcVar2[7] = cVar25 + cVar9;
          pcVar2[8] = cVar26 + cVar10;
          pcVar2[9] = cVar27 + cVar11;
          pcVar2[10] = cVar28 + cVar12;
          pcVar2[0xb] = cVar29 + cVar13;
          pcVar2[0xc] = cVar30 + cVar14;
          pcVar2[0xd] = cVar31 + cVar15;
          pcVar2[0xe] = cVar32 + cVar16;
          pcVar2[0xf] = cVar33 + cVar17;
          pcVar1 = (char *)(param_1 + 0x10 + lVar36);
          cVar3 = pcVar1[1];
          cVar4 = pcVar1[2];
          cVar5 = pcVar1[3];
          cVar6 = pcVar1[4];
          cVar7 = pcVar1[5];
          cVar8 = pcVar1[6];
          cVar9 = pcVar1[7];
          cVar10 = pcVar1[8];
          cVar11 = pcVar1[9];
          cVar12 = pcVar1[10];
          cVar13 = pcVar1[0xb];
          cVar14 = pcVar1[0xc];
          cVar15 = pcVar1[0xd];
          cVar16 = pcVar1[0xe];
          cVar17 = pcVar1[0xf];
          pcVar2 = (char *)(param_1 + 0x10 + lVar36);
          *pcVar2 = cVar18 + *pcVar1;
          pcVar2[1] = cVar19 + cVar3;
          pcVar2[2] = cVar20 + cVar4;
          pcVar2[3] = cVar21 + cVar5;
          pcVar2[4] = cVar22 + cVar6;
          pcVar2[5] = cVar23 + cVar7;
          pcVar2[6] = cVar24 + cVar8;
          pcVar2[7] = cVar25 + cVar9;
          pcVar2[8] = cVar26 + cVar10;
          pcVar2[9] = cVar27 + cVar11;
          pcVar2[10] = cVar28 + cVar12;
          pcVar2[0xb] = cVar29 + cVar13;
          pcVar2[0xc] = cVar30 + cVar14;
          pcVar2[0xd] = cVar31 + cVar15;
          pcVar2[0xe] = cVar32 + cVar16;
          pcVar2[0xf] = cVar33 + cVar17;
          pcVar1 = (char *)(param_1 + 0x20 + lVar36);
          cVar3 = pcVar1[1];
          cVar4 = pcVar1[2];
          cVar5 = pcVar1[3];
          cVar6 = pcVar1[4];
          cVar7 = pcVar1[5];
          cVar8 = pcVar1[6];
          cVar9 = pcVar1[7];
          cVar10 = pcVar1[8];
          cVar11 = pcVar1[9];
          cVar12 = pcVar1[10];
          cVar13 = pcVar1[0xb];
          cVar14 = pcVar1[0xc];
          cVar15 = pcVar1[0xd];
          cVar16 = pcVar1[0xe];
          cVar17 = pcVar1[0xf];
          pcVar2 = (char *)(param_1 + 0x20 + lVar36);
          *pcVar2 = cVar18 + *pcVar1;
          pcVar2[1] = cVar19 + cVar3;
          pcVar2[2] = cVar20 + cVar4;
          pcVar2[3] = cVar21 + cVar5;
          pcVar2[4] = cVar22 + cVar6;
          pcVar2[5] = cVar23 + cVar7;
          pcVar2[6] = cVar24 + cVar8;
          pcVar2[7] = cVar25 + cVar9;
          pcVar2[8] = cVar26 + cVar10;
          pcVar2[9] = cVar27 + cVar11;
          pcVar2[10] = cVar28 + cVar12;
          pcVar2[0xb] = cVar29 + cVar13;
          pcVar2[0xc] = cVar30 + cVar14;
          pcVar2[0xd] = cVar31 + cVar15;
          pcVar2[0xe] = cVar32 + cVar16;
          pcVar2[0xf] = cVar33 + cVar17;
          pcVar1 = (char *)(param_1 + 0x30 + lVar36);
          cVar3 = pcVar1[1];
          cVar4 = pcVar1[2];
          cVar5 = pcVar1[3];
          cVar6 = pcVar1[4];
          cVar7 = pcVar1[5];
          cVar8 = pcVar1[6];
          cVar9 = pcVar1[7];
          cVar10 = pcVar1[8];
          cVar11 = pcVar1[9];
          cVar12 = pcVar1[10];
          cVar13 = pcVar1[0xb];
          cVar14 = pcVar1[0xc];
          cVar15 = pcVar1[0xd];
          cVar16 = pcVar1[0xe];
          cVar17 = pcVar1[0xf];
          pcVar2 = (char *)(param_1 + 0x30 + lVar36);
          *pcVar2 = cVar18 + *pcVar1;
          pcVar2[1] = cVar19 + cVar3;
          pcVar2[2] = cVar20 + cVar4;
          pcVar2[3] = cVar21 + cVar5;
          pcVar2[4] = cVar22 + cVar6;
          pcVar2[5] = cVar23 + cVar7;
          pcVar2[6] = cVar24 + cVar8;
          pcVar2[7] = cVar25 + cVar9;
          pcVar2[8] = cVar26 + cVar10;
          pcVar2[9] = cVar27 + cVar11;
          pcVar2[10] = cVar28 + cVar12;
          pcVar2[0xb] = cVar29 + cVar13;
          pcVar2[0xc] = cVar30 + cVar14;
          pcVar2[0xd] = cVar31 + cVar15;
          pcVar2[0xe] = cVar32 + cVar16;
          pcVar2[0xf] = cVar33 + cVar17;
        } while (iVar34 < (int)(param_2 - uVar35));
        if (param_2 <= iVar34) {
          return;
        }
      }
      do {
        lVar36 = (longlong)iVar34;
        iVar34 = iVar34 + 1;
        *(char *)(param_1 + lVar36) = *(char *)(param_1 + lVar36) + '3';
      } while (iVar34 < param_2);
    }
  }
  return;
}



/* ===== 18039c720 FUN_18039c720 ===== */

void FUN_18039c720(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,float param_6,
                  float param_7,float param_8,char *param_9)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = DAT_1808acb94;
  cVar1 = *param_9;
  if (cVar1 == '\x01') {
    uVar3 = *(uint *)(param_9 + 0x1c);
    if (0 < param_2) {
      do {
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        uVar6 = (uint)bVar2 * (uVar3 >> 0x18) * 0x101 + 0x101;
        uVar7 = uVar6 >> 0x10;
        iVar5 = 0xff - uVar7;
        *param_1 = (char)(uVar7 * (uVar3 & 0xff) * 0x101 + 0x101 >> 0x10) +
                   (char)((uint)*param_1 * iVar5 * 0x101 + 0x101 >> 0x10);
        param_1[1] = (char)((uint)param_1[1] * iVar5 * 0x101 + 0x101 >> 0x10) +
                     (char)(uVar7 * (uVar3 >> 8 & 0xff) * 0x101 + 0x101 >> 0x10);
        param_1[2] = (char)((uint)param_1[2] * iVar5 * 0x101 + 0x101 >> 0x10) +
                     (char)(uVar7 * (uVar3 >> 0x10 & 0xff) * 0x101 + 0x101 >> 0x10);
        param_1[3] = (char)((uint)param_1[3] * iVar5 * 0x101 + 0x101 >> 0x10) +
                     (char)(uVar6 >> 0x10);
        param_2 = param_2 + -1;
        param_1 = param_1 + 4;
      } while (param_2 != 0);
    }
    return;
  }
  if (cVar1 == '\x02') {
    fVar11 = DAT_1808ac34c / param_8;
    fVar10 = ((float)param_4 - param_6) / param_8;
    if (0 < param_2) {
      do {
        fVar8 = ((((float)param_5 - param_7) / param_8) * *(float *)(param_9 + 0x10) +
                 fVar10 * *(float *)(param_9 + 8) + *(float *)(param_9 + 0x18)) * fVar4;
        if (NAN(fVar8)) {
          fVar9 = 0.0;
        }
        else if (0.0 <= fVar8) {
          fVar9 = fVar4;
          if (fVar8 <= fVar4) {
            fVar9 = fVar8;
          }
        }
        else {
          fVar9 = 0.0;
        }
        fVar10 = fVar10 + fVar11;
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        uVar3 = *(uint *)(param_9 + (longlong)(int)fVar9 * 4 + 0x1c);
        uVar6 = (uVar3 >> 0x18) * (uint)bVar2 * 0x101 + 0x101;
        uVar7 = uVar6 >> 0x10;
        iVar5 = 0xff - uVar7;
        *param_1 = (char)((uVar3 & 0xff) * uVar7 * 0x101 + 0x101 >> 0x10) +
                   (char)((uint)*param_1 * iVar5 * 0x101 + 0x101 >> 0x10);
        param_1[1] = (char)((uVar3 >> 8 & 0xff) * uVar7 * 0x101 + 0x101 >> 0x10) +
                     (char)((uint)param_1[1] * iVar5 * 0x101 + 0x101 >> 0x10);
        param_1[2] = (char)((uVar3 >> 0x10 & 0xff) * uVar7 * 0x101 + 0x101 >> 0x10) +
                     (char)((uint)param_1[2] * iVar5 * 0x101 + 0x101 >> 0x10);
        param_1[3] = (char)((uint)param_1[3] * iVar5 * 0x101 + 0x101 >> 0x10) +
                     (char)(uVar6 >> 0x10);
        param_1 = param_1 + 4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return;
    }
  }
  else if (cVar1 == '\x03') {
    fVar11 = DAT_1808ac34c / param_8;
    fVar10 = ((float)param_5 - param_7) / param_8;
    param_8 = ((float)param_4 - param_6) / param_8;
    if (0 < param_2) {
      do {
        fVar8 = fVar10 * *(float *)(param_9 + 0xc) + param_8 * *(float *)(param_9 + 4) +
                *(float *)(param_9 + 0x14);
        fVar9 = fVar10 * *(float *)(param_9 + 0x10) + param_8 * *(float *)(param_9 + 8) +
                *(float *)(param_9 + 0x18);
        fVar8 = fVar9 * fVar9 + fVar8 * fVar8;
        if (fVar8 < 0.0) {
          fVar8 = (float)FUN_18051af10(fVar8);
        }
        else {
          fVar8 = SQRT(fVar8);
        }
        fVar8 = fVar8 * fVar4;
        if (NAN(fVar8)) {
          fVar9 = 0.0;
        }
        else if (0.0 <= fVar8) {
          fVar9 = fVar4;
          if (fVar8 <= fVar4) {
            fVar9 = fVar8;
          }
        }
        else {
          fVar9 = 0.0;
        }
        param_8 = param_8 + fVar11;
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        uVar3 = *(uint *)(param_9 + (longlong)(int)fVar9 * 4 + 0x1c);
        uVar6 = (uVar3 >> 0x18) * (uint)bVar2 * 0x101 + 0x101;
        uVar7 = uVar6 >> 0x10;
        iVar5 = 0xff - uVar7;
        *param_1 = (char)((uVar3 & 0xff) * uVar7 * 0x101 + 0x101 >> 0x10) +
                   (char)((uint)*param_1 * iVar5 * 0x101 + 0x101 >> 0x10);
        param_1[1] = (char)((uVar3 >> 8 & 0xff) * uVar7 * 0x101 + 0x101 >> 0x10) +
                     (char)((uint)param_1[1] * iVar5 * 0x101 + 0x101 >> 0x10);
        param_1[2] = (char)((uVar3 >> 0x10 & 0xff) * uVar7 * 0x101 + 0x101 >> 0x10) +
                     (char)((uint)param_1[2] * iVar5 * 0x101 + 0x101 >> 0x10);
        param_1[3] = (char)((uint)param_1[3] * iVar5 * 0x101 + 0x101 >> 0x10) +
                     (char)(uVar6 >> 0x10);
        param_1 = param_1 + 4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}



/* ===== 18039cc60 FUN_18039cc60 ===== */

void FUN_18039cc60(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int **ppiVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int *local_80 [11];
  
  fVar5 = DAT_1808ac1f4;
  piVar9 = (int *)0x0;
  iVar15 = 0;
  local_80[0] = (int *)0x0;
  local_94 = 0;
  if (0 < *(int *)(param_1 + 0x74)) {
    do {
      FUN_180540170(*(undefined8 *)(param_1 + 0x58),0,(longlong)*(int *)(param_1 + 0x70));
      iVar1 = *(int *)(param_1 + 0x70);
      local_90 = local_94 * 5;
      local_98 = 0;
      local_8c = 5;
      do {
        ppiVar11 = local_80;
        fVar16 = (float)local_90 + fVar5;
        if (piVar9 != (int *)0x0) {
          do {
            piVar9 = *ppiVar11;
            if (fVar16 < (float)piVar9[2]) {
              *piVar9 = *piVar9 + piVar9[1];
              ppiVar11 = (int **)(*ppiVar11 + 4);
            }
            else {
              *ppiVar11 = *(int **)(piVar9 + 4);
              *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(param_1 + 0x40);
              *(int **)(param_1 + 0x40) = piVar9;
            }
          } while (*ppiVar11 != (int *)0x0);
          piVar9 = local_80[0];
        }
        do {
          bVar4 = false;
          ppiVar11 = local_80;
          if (piVar9 == (int *)0x0) break;
          do {
            piVar9 = *ppiVar11;
            piVar7 = *(int **)(piVar9 + 4);
            if (piVar7 == (int *)0x0) break;
            if (*piVar7 < *piVar9) {
              bVar4 = true;
              *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(piVar7 + 4);
              *(int **)(piVar7 + 4) = piVar9;
              *ppiVar11 = piVar7;
              piVar9 = piVar7;
            }
            ppiVar11 = (int **)(piVar9 + 4);
          } while (*(longlong *)(piVar9 + 4) != 0);
          piVar9 = local_80[0];
        } while (bVar4);
        if (iVar15 < *(int *)(param_1 + 0x18)) {
          do {
            lVar12 = *(longlong *)(param_1 + 0x10) + (longlong)iVar15 * 0x20;
            if (fVar16 < *(float *)(lVar12 + 4)) break;
            if (fVar16 < *(float *)(lVar12 + 0xc)) {
              piVar7 = (int *)FUN_18039c390(param_1,lVar12,fVar16);
              if (piVar7 == (int *)0x0) break;
              if (piVar9 == (int *)0x0) {
                local_80[0] = piVar7;
                piVar9 = piVar7;
              }
              else if (*piVar7 < *piVar9) {
                *(int **)(piVar7 + 4) = piVar9;
                local_80[0] = piVar7;
                piVar9 = piVar7;
              }
              else {
                piVar10 = piVar9;
                if (*(longlong *)(piVar9 + 4) == 0) {
                  piVar8 = (int *)0x0;
                }
                else {
                  do {
                    piVar8 = *(int **)(piVar10 + 4);
                    if (*piVar7 <= *piVar8) goto LAB_18039ce39;
                    piVar10 = piVar8;
                  } while (*(longlong *)(piVar8 + 4) != 0);
                  piVar8 = (int *)0x0;
                }
LAB_18039ce39:
                *(int **)(piVar7 + 4) = piVar8;
                *(int **)(piVar10 + 4) = piVar7;
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < *(int *)(param_1 + 0x18));
        }
        if (piVar9 != (int *)0x0) {
          iVar6 = 0;
          uVar2 = *(undefined4 *)(param_1 + 0x70);
          uVar14 = 0;
          uVar3 = *(undefined8 *)(param_1 + 0x58);
          piVar7 = piVar9;
          if (param_6 == '\0') {
            for (; piVar7 != (int *)0x0; piVar7 = *(int **)(piVar7 + 4)) {
              if (uVar14 == 0) {
                iVar6 = *piVar7;
                uVar14 = piVar7[3];
              }
              else {
                uVar14 = uVar14 + piVar7[3];
                if (uVar14 == 0) {
                  FUN_18039c5b0(uVar3,uVar2,iVar6);
                }
              }
            }
          }
          else if (param_6 == '\x01') {
            for (; piVar7 != (int *)0x0; piVar7 = *(int **)(piVar7 + 4)) {
              iVar13 = *piVar7;
              if (uVar14 != 0) {
                FUN_18039c5b0(uVar3,uVar2,iVar6);
                iVar13 = iVar6;
              }
              uVar14 = (uint)(uVar14 == 0);
              iVar6 = iVar13;
            }
          }
        }
        local_90 = local_90 + 1;
        local_8c = local_8c + -1;
      } while (local_8c != 0);
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      iVar6 = *(int *)(param_1 + 0x70) + -1;
      if (iVar6 < 0) {
        local_98 = iVar6;
      }
      if (iVar1 <= local_98) {
        FUN_18039c720((longlong)(local_94 * *(int *)(param_1 + 0x78)) + (longlong)(iVar1 * 4) +
                      *(longlong *)(param_1 + 0x68),(local_98 - iVar1) + 1,
                      (longlong)iVar1 + *(longlong *)(param_1 + 0x58),iVar1,local_94,param_2,param_3
                      ,param_4,param_5);
      }
      local_94 = local_94 + 1;
    } while (local_94 < *(int *)(param_1 + 0x74));
  }
  return;
}



/* ===== 18039d010 FUN_18039d010 ===== */

void FUN_18039d010(longlong param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (0 < param_3) {
    lVar3 = (longlong)param_4;
    iVar2 = 0;
    do {
      pbVar6 = (byte *)(iVar2 * param_4 + param_1);
      if (0 < param_2) {
        iVar8 = param_2;
        do {
          if (pbVar6[3] != 0) {
            uVar4 = (uint)pbVar6[3];
            *pbVar6 = (byte)(((uint)*pbVar6 * 0xff) / uVar4);
            pbVar6[1] = (byte)(((uint)pbVar6[1] * 0xff) / uVar4);
            pbVar6[2] = (byte)(((uint)pbVar6[2] * 0xff) / uVar4);
          }
          pbVar6 = pbVar6 + 4;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
    iVar2 = 0;
    do {
      if (0 < param_2) {
        puVar1 = (undefined1 *)(iVar2 * param_4 + param_1);
        iVar8 = 0;
        do {
          if (puVar1[3] == '\0') {
            uVar5 = 0;
            uVar7 = 0;
            uVar9 = 0;
            uVar4 = 0;
            if ((0 < iVar8 + -1) && (puVar1[-1] != '\0')) {
              uVar5 = (uint)(byte)puVar1[-4];
              uVar4 = 1;
              uVar7 = (ulonglong)(byte)puVar1[-3];
              uVar9 = (ulonglong)(byte)puVar1[-2];
            }
            if ((iVar8 + 1 < param_2) && (puVar1[7] != '\0')) {
              uVar5 = uVar5 + (byte)puVar1[4];
              uVar7 = (ulonglong)((int)uVar7 + (uint)(byte)puVar1[5]);
              uVar9 = (ulonglong)((int)uVar9 + (uint)(byte)puVar1[6]);
              uVar4 = uVar4 + 1;
            }
            if ((0 < iVar2 + -1) && (puVar1[3 - param_4] != '\0')) {
              uVar5 = uVar5 + (byte)puVar1[-lVar3];
              uVar7 = (ulonglong)((int)uVar7 + (uint)(byte)puVar1[1 - param_4]);
              uVar9 = (ulonglong)((int)uVar9 + (uint)(byte)puVar1[2 - param_4]);
              uVar4 = uVar4 + 1;
            }
            if ((iVar2 + 1 < param_3) && (puVar1[lVar3 + 3] != '\0')) {
              uVar5 = uVar5 + (byte)puVar1[lVar3];
              uVar7 = (ulonglong)((int)uVar7 + (uint)(byte)puVar1[lVar3 + 1]);
              uVar9 = (ulonglong)((int)uVar9 + (uint)(byte)puVar1[lVar3 + 2]);
              uVar4 = uVar4 + 1;
            }
            if (uVar4 != 0) {
              *puVar1 = (char)(uVar5 / uVar4);
              puVar1[1] = (char)(uVar7 / uVar4);
              puVar1[2] = (char)(uVar9 / uVar4);
            }
          }
          puVar1 = puVar1 + 4;
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}



/* ===== 18039d1f0 FUN_18039d1f0 ===== */

void FUN_18039d1f0(char *param_1,char *param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_res10;
  
  *param_1 = *param_2;
  if (*param_2 == '\x01') {
    uVar1 = *(uint *)(param_2 + 8);
    fVar21 = 0.0;
    if ((0.0 <= param_3) && (fVar21 = DAT_1808ac34c, param_3 <= DAT_1808ac34c)) {
      fVar21 = param_3;
    }
    *(uint *)(param_1 + 0x1c) =
         ((((int)(fVar21 * DAT_1808acb98) * (uVar1 >> 0x18) >> 8 & 0xff) << 8 | uVar1 >> 0x10 & 0xff
          ) << 8 | uVar1 >> 8 & 0xff) << 8 | uVar1 & 0xff;
    return;
  }
  puVar3 = *(undefined8 **)(param_2 + 8);
  param_1[1] = *(char *)(puVar3 + 3);
  uVar4 = puVar3[1];
  *(undefined8 *)(param_1 + 4) = *puVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(undefined8 *)(param_1 + 0x14) = puVar3[2];
  fVar6 = DAT_1808acb98;
  fVar5 = DAT_1808acb94;
  fVar21 = DAT_1808ac34c;
  iVar14 = *(int *)((longlong)puVar3 + 0x24);
  if (iVar14 == 0) {
    param_1 = param_1 + 0x1c;
    lVar10 = 8;
    do {
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
      param_1[0x68] = '\0';
      param_1[0x69] = '\0';
      param_1[0x6a] = '\0';
      param_1[0x6b] = '\0';
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
      param_1 = param_1 + 0x80;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    return;
  }
  uVar1 = *(uint *)(puVar3 + 5);
  if (iVar14 == 1) {
    fVar21 = 0.0;
    if ((0.0 <= param_3) && (fVar21 = DAT_1808ac34c, param_3 <= DAT_1808ac34c)) {
      fVar21 = param_3;
    }
    fVar21 = fVar21 * DAT_1808acb98;
    puVar15 = (uint *)(param_1 + 0x1c);
    for (lVar10 = 0x100; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar15 = uVar1 & 0xff |
                 ((((int)fVar21 * (uVar1 >> 0x18) >> 8 & 0xff) << 8 | uVar1 >> 0x10 & 0xff) << 8 |
                 uVar1 >> 8 & 0xff) << 8;
      puVar15 = puVar15 + 1;
    }
  }
  else {
    uVar18 = 0;
    fVar25 = 0.0;
    if (NAN(param_3)) {
      fVar22 = 0.0;
    }
    else if (0.0 <= param_3) {
      fVar22 = DAT_1808ac34c;
      if (param_3 <= DAT_1808ac34c) {
        fVar22 = param_3;
      }
    }
    else {
      fVar22 = 0.0;
    }
    fVar23 = *(float *)((longlong)puVar3 + 0x2c);
    fVar22 = fVar22 * DAT_1808acb98;
    if (NAN(fVar23)) {
      fVar27 = 0.0;
    }
    else if (0.0 <= fVar23) {
      fVar27 = DAT_1808ac34c;
      if (fVar23 <= DAT_1808ac34c) {
        fVar27 = fVar23;
      }
    }
    else {
      fVar27 = 0.0;
    }
    fVar23 = *(float *)((longlong)puVar3 + (longlong)iVar14 * 8 + 0x24);
    fVar26 = fVar27;
    if (((!NAN(fVar23)) && (fVar27 <= fVar23)) && (fVar26 = DAT_1808ac34c, fVar23 <= DAT_1808ac34c))
    {
      fVar26 = fVar23;
    }
    iVar14 = (int)(fVar26 * DAT_1808acb94);
    if (0 < (int)(fVar27 * DAT_1808acb94)) {
      puVar15 = (uint *)(param_1 + 0x1c);
      for (lVar10 = (longlong)(int)(fVar27 * DAT_1808acb94); lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar15 = ((((int)fVar22 * (uVar1 >> 0x18) >> 8 & 0xff) << 8 | uVar1 >> 0x10 & 0xff) << 8 |
                   uVar1 >> 8 & 0xff) << 8 | uVar1 & 0xff;
        puVar15 = puVar15 + 1;
      }
    }
    local_res10 = 0;
    if (0 < *(int *)((longlong)puVar3 + 0x24) + -1) {
      fVar22 = fVar21;
      if (param_3 <= fVar21) {
        fVar22 = param_3;
      }
      do {
        lVar10 = (longlong)local_res10;
        uVar1 = *(uint *)(puVar3 + lVar10 + 6);
        if (NAN(param_3)) {
          fVar23 = 0.0;
        }
        else if (0.0 <= param_3) {
          fVar23 = fVar22;
        }
        else {
          fVar23 = 0.0;
        }
        fVar27 = *(float *)((longlong)puVar3 + lVar10 * 8 + 0x2c);
        uVar17 = (int)(fVar23 * fVar6) * (uVar1 >> 0x18) >> 8 & 0xff;
        uVar8 = uVar1 >> 0x10 & 0xff;
        uVar9 = uVar1 >> 8 & 0xff;
        uVar18 = ((uVar17 << 8 | uVar8) << 8 | uVar9) << 8 | uVar1 & 0xff;
        fVar26 = fVar25;
        if (((!(NAN(fVar27) || NAN(fVar27))) && (0.0 <= fVar27)) &&
           (fVar26 = fVar21, fVar27 <= fVar21)) {
          fVar26 = fVar27;
        }
        fVar27 = *(float *)((longlong)puVar3 + lVar10 * 8 + 0x34);
        if (NAN(fVar27)) {
          fVar24 = 0.0;
        }
        else if (0.0 <= fVar27) {
          fVar24 = fVar21;
          if (fVar27 <= fVar21) {
            fVar24 = fVar27;
          }
        }
        else {
          fVar24 = 0.0;
        }
        iVar14 = (int)(fVar24 * fVar5);
        iVar13 = (int)(fVar26 * fVar5);
        iVar19 = iVar14 - iVar13;
        if (0 < iVar19) {
          uVar2 = *(uint *)(puVar3 + lVar10 + 5);
          iVar20 = 0;
          fVar27 = fVar25;
          do {
            if (NAN(fVar27)) {
              fVar26 = 0.0;
            }
            else if (0.0 <= fVar27) {
              fVar26 = fVar21;
              if (fVar27 <= fVar21) {
                fVar26 = fVar27;
              }
            }
            else {
              fVar26 = 0.0;
            }
            fVar27 = fVar27 + fVar21 / (float)iVar19;
            iVar12 = (int)(fVar26 * fVar6);
            iVar16 = 0x100 - iVar12;
            iVar7 = iVar20 + iVar13;
            iVar20 = iVar20 + 1;
            *(uint *)(param_1 + (longlong)iVar7 * 4 + 0x1c) =
                 ((uVar8 * iVar12 + (uVar2 >> 0x10 & 0xff) * iVar16 >> 8 & 0xff |
                  (uVar17 * iVar12 + ((int)(fVar23 * fVar6) * (uVar2 >> 0x18) >> 8 & 0xff) * iVar16
                   >> 8 & 0xff) << 8) << 8 |
                 uVar9 * iVar12 + (uVar2 >> 8 & 0xff) * iVar16 >> 8 & 0xff) << 8 |
                 (uVar1 & 0xff) * iVar12 + (uVar2 & 0xff) * iVar16 >> 8 & 0xff;
          } while (iVar20 < iVar19);
        }
        local_res10 = local_res10 + 1;
      } while (local_res10 < *(int *)((longlong)puVar3 + 0x24) + -1);
    }
    if (iVar14 < 0x100) {
      puVar15 = (uint *)(param_1 + ((longlong)iVar14 + 7) * 4);
      for (uVar11 = (ulonglong)(0x100 - iVar14); uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar15 = uVar18;
        puVar15 = puVar15 + 1;
      }
    }
  }
  return;
}



/* ===== 18039d7c0 FUN_18039d7c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18039d7c0(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                  longlong param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_4f8 [32];
  undefined1 *local_4d8;
  undefined1 local_4d0;
  int local_4c8;
  int local_4c4;
  undefined1 local_4b8 [1056];
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_4f8;
  local_4c4 = param_7;
  local_4c8 = param_9;
  *(longlong *)(param_1 + 0x68) = param_6;
  *(int *)(param_1 + 0x70) = param_7;
  *(int *)(param_1 + 0x74) = param_8;
  *(int *)(param_1 + 0x78) = param_9;
  if (*(int *)(param_1 + 0x60) < param_7) {
    *(int *)(param_1 + 0x60) = param_7;
    lVar5 = _realloc_base(*(undefined8 *)(param_1 + 0x58));
    *(longlong *)(param_1 + 0x58) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  iVar8 = local_4c8;
  iVar9 = 0;
  if (0 < param_8) {
    do {
      FUN_180540170(iVar8 * iVar9 + param_6,0,(longlong)(param_7 * 4));
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_8);
    param_7 = local_4c4;
  }
  fVar3 = DAT_1808ac750;
  fVar2 = DAT_1808ac000;
  lVar5 = *(longlong *)(param_2 + 8);
  do {
    if (lVar5 == 0) {
      FUN_18039d010(param_6,param_7,param_8,local_4c8);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      return;
    }
    iVar8 = 0;
    if ((*(byte *)(lVar5 + 0x96) & 1) != 0) {
      do {
        bVar4 = *(byte *)(lVar5 + 0x95) >> ((char)iVar8 * '\x02' & 0x1fU) & 3;
        if (bVar4 == 0) {
          if (*(char *)(lVar5 + 0x40) != '\0') {
            for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0;
                lVar1 = *(longlong *)(lVar1 + 0x408)) {
              *(undefined4 *)(lVar1 + 0x400) = 0;
            }
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
            FUN_18039a7d0(param_1,lVar5,param_5);
            iVar9 = *(int *)(param_1 + 0x18);
            iVar7 = 0;
            if (0 < iVar9) {
              do {
                lVar1 = *(longlong *)(param_1 + 0x10);
                lVar6 = (longlong)iVar7 * 0x20;
                iVar7 = iVar7 + 1;
                *(float *)(lVar1 + lVar6) = param_3 + *(float *)(lVar1 + lVar6);
                *(float *)(lVar1 + 4 + lVar6) = (param_4 + *(float *)(lVar1 + 4 + lVar6)) * fVar3;
                *(float *)(lVar1 + 8 + lVar6) = param_3 + *(float *)(lVar1 + 8 + lVar6);
                *(float *)(lVar1 + 0xc + lVar6) =
                     (param_4 + *(float *)(lVar1 + 0xc + lVar6)) * fVar3;
                iVar9 = *(int *)(param_1 + 0x18);
              } while (iVar7 < iVar9);
            }
            if (iVar9 != 0) {
              FUN_180519150(*(undefined8 *)(param_1 + 0x10),(longlong)iVar9,0x20,&LAB_18039c370);
            }
            FUN_18039d1f0(local_4b8,lVar5 + 0x40,*(undefined4 *)(lVar5 + 0x60));
            local_4d0 = *(undefined1 *)(lVar5 + 0x94);
            goto LAB_18039db0d;
          }
        }
        else if (((bVar4 == 2) && (*(char *)(lVar5 + 0x50) != '\0')) &&
                (fVar2 < param_5 * *(float *)(lVar5 + 100))) {
          for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0;
              lVar1 = *(longlong *)(lVar1 + 0x408)) {
            *(undefined4 *)(lVar1 + 0x400) = 0;
          }
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
          FUN_18039bb30(param_1,lVar5,param_5);
          iVar9 = *(int *)(param_1 + 0x18);
          iVar7 = 0;
          if (0 < iVar9) {
            do {
              lVar1 = *(longlong *)(param_1 + 0x10);
              lVar6 = (longlong)iVar7 * 0x20;
              iVar7 = iVar7 + 1;
              *(float *)(lVar1 + lVar6) = param_3 + *(float *)(lVar1 + lVar6);
              *(float *)(lVar1 + 4 + lVar6) = (param_4 + *(float *)(lVar1 + 4 + lVar6)) * fVar3;
              *(float *)(lVar1 + 8 + lVar6) = param_3 + *(float *)(lVar1 + 8 + lVar6);
              *(float *)(lVar1 + 0xc + lVar6) = (param_4 + *(float *)(lVar1 + 0xc + lVar6)) * fVar3;
              iVar9 = *(int *)(param_1 + 0x18);
            } while (iVar7 < iVar9);
          }
          if (iVar9 != 0) {
            FUN_180519150(*(undefined8 *)(param_1 + 0x10),(longlong)iVar9,0x20,&LAB_18039c370);
          }
          FUN_18039d1f0(local_4b8,lVar5 + 0x50,*(undefined4 *)(lVar5 + 0x60));
          local_4d0 = 0;
LAB_18039db0d:
          local_4d8 = local_4b8;
          FUN_18039cc60(param_1,param_3,param_4,param_5);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
    }
    lVar5 = *(longlong *)(lVar5 + 0x148);
  } while( true );
}



/* ===== 18039dbe0 FUN_18039dbe0 ===== */

longlong * FUN_18039dbe0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  lVar3 = *param_2;
  uVar7 = param_2[1] - lVar3;
  if (((uVar7 < 0x10) || (*(short *)(lVar3 + 4) != 0xc)) ||
     (uVar2 = *(uint *)(lVar3 + 0xc), 0x3f < uVar2 - 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  if (uVar2 != 0) {
    uVar4 = 0;
    while (uVar5 = (ulonglong)uVar4, uVar5 * 0xc + 0x1c <= uVar7) {
      if (*(int *)(lVar3 + 0x10 + uVar5 * 0xc) == 0x41544144) {
        uVar2 = *(uint *)(lVar3 + 0x18 + uVar5 * 0xc);
        lVar1 = (ulonglong)*(uint *)(lVar3 + 0x14 + uVar5 * 0xc) + uVar5 * 0xc;
        if (lVar1 + 0x14 + (ulonglong)uVar2 <= uVar7) {
          lVar1 = lVar1 + lVar3;
          uVar7 = 0;
          if (4 < uVar2) {
            do {
              iVar6 = (int)uVar7;
              if (*(int *)(uVar7 + 0x14 + lVar1) == 0x6776733c) {
                for (uVar4 = uVar2; iVar6 + 6U < uVar4; uVar4 = uVar4 - 1) {
                  uVar5 = (ulonglong)uVar4;
                  if ((*(int *)(uVar5 + 0xe + lVar1) == 0x76732f3c) &&
                     (*(short *)(uVar5 + 0x12 + lVar1) == 0x3e67)) {
                    *param_1 = 0;
                    param_1[1] = 0;
                    param_1[2] = 0;
                    uVar5 = uVar5 - uVar7;
                    if (uVar5 == 0) {
                      return param_1;
                    }
                    if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
                      FUN_1800118d0();
                    }
                    lVar3 = FUN_18000fb70(uVar5);
                    *param_1 = lVar3;
                    param_1[1] = lVar3;
                    param_1[2] = uVar5 + lVar3;
                    FUN_180540530(lVar3,uVar7 + lVar1 + 0x14,uVar5);
                    param_1[1] = uVar5 + lVar3;
                    return param_1;
                  }
                }
              }
              uVar7 = (ulonglong)(iVar6 + 1);
            } while (iVar6 + 5U < uVar2);
          }
        }
        break;
      }
      uVar4 = uVar4 + 1;
      if (uVar2 <= uVar4) break;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



/* ===== 18039dd60 FUN_18039dd60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18039dd60(undefined8 *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  plVar1 = DAT_1811079e0;
  local_20 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (DAT_1811079e0 != (longlong *)0x0) {
    local_78 = *param_1;
    local_70 = param_2 * 4;
    local_3c = 1;
    local_2c = 0;
    local_48 = 1;
    local_44 = 1;
    local_40 = 0x1c;
    local_34 = 1;
    local_30 = 8;
    local_6c = 0;
    local_88 = (longlong *)0x0;
    local_50 = param_2;
    local_4c = param_3;
    iVar2 = (**(code **)(*DAT_1811079e0 + 0x28))(DAT_1811079e0,&local_50,&local_78,&local_88);
    if ((-1 < iVar2) && (local_88 != (longlong *)0x0)) {
      local_68 = local_40;
      local_64 = 4;
      local_58 = 0;
      local_5c = 1;
      local_80 = 0;
      iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,local_88,&local_68,&local_80);
      (**(code **)(*local_88 + 0x10))();
      if (iVar2 < 0) {
        return 0;
      }
      return local_80;
    }
  }
  return 0;
}



/* ===== 18039de60 FUN_18039de60 ===== */

void FUN_18039de60(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*DAT_180ca1a00;
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar2 = DAT_180ca1a00;
  while (DAT_180ca1a00 = plVar2, cVar1 == '\0') {
    if ((longlong *)plVar4[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar4[9] + 0x10))();
    }
    plVar2 = (longlong *)plVar4[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      while (cVar1 == '\0') {
        plVar4 = (longlong *)*plVar4;
        cVar1 = *(char *)(*plVar4 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar3 = (longlong *)plVar4[1];
      plVar2 = plVar4;
      while ((plVar4 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar4[2]))) {
        cVar1 = *(char *)(plVar4[1] + 0x19);
        plVar3 = (longlong *)plVar4[1];
        plVar2 = plVar4;
      }
    }
    plVar2 = DAT_180ca1a00;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  FUN_1803a0170(&DAT_180ca1a00,&DAT_180ca1a00,plVar2[1]);
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
  plVar2[2] = (longlong)plVar2;
  DAT_180ca1a08 = 0;
  return;
}



/* ===== 18039df30 FUN_18039df30 ===== */

longlong * FUN_18039df30(longlong *param_1,longlong *param_2,int param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  float fVar10;
  uint local_res8 [2];
  longlong *local_res10;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  float local_c8;
  longlong local_c0;
  uint local_b8;
  int local_b0;
  int local_a8;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  
  puVar9 = auStack_e8;
  local_res10 = param_2;
  if ((*param_2 == param_2[1]) || (param_3 < 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto LAB_18039e20b;
  }
  if (*(char *)(param_2[1] + -1) != '\0') {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_180349b00(param_2,local_res8);
  }
  pfVar6 = (float *)FUN_180399ee0(*param_2);
  puVar9 = auStack_e8;
  if (pfVar6 != (float *)0x0) {
    puVar9 = auStack_e8;
    if ((0.0 < *pfVar6) && (puVar9 = auStack_e8, 0.0 < pfVar6[1])) {
      puVar7 = (undefined8 *)_malloc_base(0x80);
      puVar9 = auStack_e8;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = 0;
        *(undefined4 *)(puVar7 + 1) = 0x3e800000;
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0x3c23d70a;
        fVar2 = pfVar6[1];
        fVar10 = (float)param_3 / fVar2;
        fVar3 = *pfVar6;
        uVar5 = (uint)(fVar10 * fVar3 + DAT_1808ac1f4);
        local_res8[0] = 1;
        if (1 < (int)uVar5) {
          local_res8[0] = uVar5;
        }
        uVar1 = (longlong)(int)local_res8[0] * (longlong)param_3 * 4;
        local_98 = 0;
        lStack_90 = 0;
        local_88 = 0;
        if (uVar1 == 0) {
          lVar8 = 0;
        }
        else {
          if (0x7fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_1800118d0();
          }
          lVar8 = FUN_18000fb70(uVar1);
          local_98 = lVar8;
          local_88 = uVar1 + lVar8;
          FUN_180540170(lVar8,0,uVar1);
          lStack_90 = uVar1 + lVar8;
        }
        local_a8 = local_res8[0] * 4;
        local_c8 = fVar10;
        local_c0 = lVar8;
        local_b8 = local_res8[0];
        local_b0 = param_3;
        FUN_18039d7c0(puVar7,pfVar6,0,0);
        lVar8 = puVar7[9];
        while (lVar8 != 0) {
          lVar8 = *(longlong *)(lVar8 + 0x408);
          thunk_FUN_1805277b0();
        }
        if (puVar7[2] != 0) {
          thunk_FUN_1805277b0();
        }
        if (puVar7[4] != 0) {
          thunk_FUN_1805277b0();
        }
        if (puVar7[6] != 0) {
          thunk_FUN_1805277b0();
        }
        if (puVar7[0xb] != 0) {
          thunk_FUN_1805277b0();
        }
        thunk_FUN_1805277b0(puVar7);
        FUN_18039a280(pfVar6);
        uVar5 = local_res8[0];
        lVar8 = FUN_18039dd60(&local_98,local_res8[0],param_3);
        if (lVar8 == 0) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        else {
          *param_1 = lVar8;
          *(uint *)(param_1 + 1) = uVar5;
          *(int *)((longlong)param_1 + 0xc) = param_3;
          *(float *)(param_1 + 2) = fVar3;
          *(float *)((longlong)param_1 + 0x14) = fVar2;
        }
        puVar9 = auStack_e8;
        if (local_98 == 0) goto LAB_18039e20b;
        if ((ulonglong)(local_88 - local_98) < 0x1000) {
          thunk_FUN_1803d64e0(local_98);
          puVar9 = auStack_e8;
          goto LAB_18039e20b;
        }
        if ((local_98 - *(longlong *)(local_98 + -8)) - 8U < 0x20) {
          thunk_FUN_1803d64e0(*(longlong *)(local_98 + -8),(local_88 - local_98) + 0x27);
          puVar9 = auStack_e8;
          goto LAB_18039e20b;
        }
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar9 = auStack_e0;
      }
    }
    *(undefined8 *)(puVar9 + -8) = 0x18039e1ef;
    FUN_18039a280(pfVar6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_18039e20b:
  *(undefined8 *)(puVar9 + -8) = 0x18039e213;
  FUN_180081c30(param_2);
  return param_1;
}



/* ===== 18039e250 FUN_18039e250 ===== */

undefined8 * FUN_18039e250(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong local_58 [3];
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  cVar5 = FUN_180390640(&DAT_180ca1a40,param_2,local_58,0xffffffff);
  if (cVar5 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar6 = FUN_18039dbe0(local_40,local_58);
    puVar7 = (undefined4 *)FUN_18039df30(local_28,uVar6,param_3);
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    *(undefined4 *)param_1 = *puVar7;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    param_1[2] = *(undefined8 *)(puVar7 + 4);
  }
  puVar9 = auStack_78;
  puVar10 = auStack_78;
  if (local_58[0] == 0) {
    return param_1;
  }
  lVar8 = local_58[0];
  if (0xfff < (ulonglong)(local_58[2] - local_58[0])) {
    lVar8 = *(longlong *)(local_58[0] + -8);
    if ((local_58[0] - lVar8) - 8U < 0x20) goto LAB_18039e308;
    pcVar1 = (code *)swi(0x29);
    lVar8 = (*pcVar1)(5);
    puVar9 = auStack_70;
  }
  puVar10 = puVar9;
LAB_18039e308:
  *(undefined8 *)(puVar10 + -8) = 0x18039e30d;
  thunk_FUN_1803d64e0(lVar8);
  return param_1;
}



/* ===== 18039e330 FUN_18039e330 ===== */

byte FUN_18039e330(undefined8 param_1,undefined4 param_2,int param_3,int param_4,longlong *param_5)

{
  HRESULT HVar1;
  HRESULT HVar2;
  int iVar3;
  byte extraout_var;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong **pplVar8;
  undefined4 uVar9;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50 [2];
  
  HVar1 = CoInitializeEx((LPVOID)0x0,0);
  local_78 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_50[0] = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  bVar4 = 0;
  local_70 = (longlong *)0x0;
  HVar2 = CoCreateInstance((IID *)&DAT_180571d70,(LPUNKNOWN)0x0,1,(IID *)&DAT_1806f1fd0,&local_78);
  if (-1 < HVar2) {
    iVar3 = (**(code **)(*local_78 + 0x70))(local_78,&local_60);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*local_60 + 0x80))(local_60,param_1,param_2);
      if (-1 < iVar3) {
        pplVar8 = local_50;
        iVar3 = (**(code **)(*local_78 + 0x20))(local_78,local_60,0,0,pplVar8);
        uVar9 = (undefined4)((ulonglong)pplVar8 >> 0x20);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*local_50[0] + 0x68))(local_50[0],0,&local_58);
          if (-1 < iVar3) {
            iVar3 = (**(code **)(*local_78 + 0x58))(local_78,&local_68);
            if (-1 < iVar3) {
              iVar3 = (**(code **)(*local_68 + 0x40))
                                (local_68,local_58,param_3,param_4,CONCAT44(uVar9,3));
              if (-1 < iVar3) {
                iVar3 = (**(code **)(*local_78 + 0x50))(local_78,&local_70);
                if (-1 < iVar3) {
                  iVar3 = (**(code **)(*local_70 + 0x40))(local_70,local_68,&DAT_180571d80,0,0,0,0);
                  if (-1 < iVar3) {
                    lVar5 = *param_5;
                    uVar6 = (longlong)param_3 * (longlong)param_4 * 4;
                    if ((ulonglong)(param_5[2] - lVar5) < uVar6) {
                      FUN_1800950c0(param_5,uVar6);
                      lVar5 = *param_5;
                    }
                    else {
                      uVar7 = param_5[1] - lVar5;
                      if (uVar7 < uVar6) {
                        FUN_180540170(lVar5,0,uVar7);
                        lVar5 = param_5[1];
                        uVar6 = uVar6 - uVar7;
                      }
                    }
                    FUN_180540170(lVar5,0,uVar6);
                    param_5[1] = lVar5 + uVar6;
                    (**(code **)(*local_70 + 0x38))
                              (local_70,0,param_3 * 4,(int)(lVar5 + uVar6) - (int)*param_5,*param_5)
                    ;
                    bVar4 = extraout_var >> 7 ^ 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
    local_70 = (longlong *)0x0;
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
    local_68 = (longlong *)0x0;
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
    local_58 = (longlong *)0x0;
  }
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
    local_50[0] = (longlong *)0x0;
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
    local_60 = (longlong *)0x0;
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
    local_78 = (longlong *)0x0;
  }
  if (-1 < HVar1) {
    CoUninitialize();
  }
  return bVar4;
}



/* ===== 18039e5c0 FUN_18039e5c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18039e5c0(char *param_1)

{
  char cVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 *****pppppuVar4;
  ulonglong uVar5;
  int iVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *****pppppuVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 *****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  local_58 = (undefined8 *****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  sVar7 = strlen(param_1);
  FUN_1800133a0(&local_58,param_1,sVar7);
  uVar5 = local_40;
  uVar12 = local_48;
  pppppuVar4 = local_58;
  puVar13 = DAT_180ca1a20;
  puVar14 = auStack_78;
  cVar1 = *(char *)((longlong)DAT_180ca1a20[1] + 0x19);
  puVar11 = (undefined8 *)DAT_180ca1a20[1];
  puVar15 = DAT_180ca1a20;
  while (cVar1 == '\0') {
    uVar2 = puVar11[6];
    puVar9 = puVar11 + 4;
    pppppuVar10 = &local_58;
    if (0xf < uVar5) {
      pppppuVar10 = pppppuVar4;
    }
    if (0xf < (ulonglong)puVar11[7]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    uVar16 = uVar2;
    if (uVar12 < uVar2) {
      uVar16 = uVar12;
    }
    iVar6 = memcmp(puVar9,pppppuVar10,uVar16);
    if (iVar6 == 0) {
      if (uVar2 < uVar12) goto LAB_18039e6f9;
LAB_18039e6a4:
      puVar9 = (undefined8 *)*puVar11;
      puVar15 = puVar11;
    }
    else {
      if (-1 < iVar6) goto LAB_18039e6a4;
LAB_18039e6f9:
      puVar9 = (undefined8 *)puVar11[2];
    }
    puVar11 = puVar9;
    cVar1 = *(char *)((longlong)puVar9 + 0x19);
  }
  if (*(char *)((longlong)puVar15 + 0x19) == '\0') {
    puVar11 = puVar15 + 4;
    uVar2 = puVar15[6];
    if (0xf < (ulonglong)puVar15[7]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    pppppuVar10 = &local_58;
    if (0xf < uVar5) {
      pppppuVar10 = pppppuVar4;
    }
    uVar16 = uVar12;
    if (uVar2 < uVar12) {
      uVar16 = uVar2;
    }
    iVar6 = memcmp(pppppuVar10,puVar11,uVar16);
    if (iVar6 == 0) {
      if (uVar12 < uVar2) goto LAB_18039e704;
    }
    else if (iVar6 < 0) goto LAB_18039e704;
  }
  else {
LAB_18039e704:
    puVar15 = puVar13;
  }
  if (uVar5 < 0x10) {
LAB_18039e74b:
    if (puVar15 == puVar13) {
      uVar8 = 0;
      puVar14 = auStack_78;
      goto LAB_18039e75f;
    }
  }
  else {
    uVar12 = uVar5 + 1;
    pppppuVar10 = pppppuVar4;
    if (uVar12 < 0x1000) {
LAB_18039e73c:
      thunk_FUN_1803d64e0(pppppuVar10,uVar12);
      puVar13 = DAT_180ca1a20;
      goto LAB_18039e74b;
    }
    pppppuVar10 = (undefined8 *****)pppppuVar4[-1];
    if ((ulonglong)((longlong)pppppuVar4 + (-8 - (longlong)pppppuVar10)) < 0x20) {
      uVar12 = uVar5 + 0x28;
      goto LAB_18039e73c;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar14 = auStack_70;
  }
  uVar8 = puVar15[8];
LAB_18039e75f:
  *(undefined8 *)(puVar14 + -8) = 0x18039e77e;
  return uVar8;
}



/* ===== 18039e790 FUN_18039e790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_18039e790(void)

{
  char *_Str;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  size_t _Size;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined8 local_118;
  uint local_108;
  uint local_104;
  char **local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  uint local_e0;
  undefined4 local_dc;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  undefined1 local_c0 [32];
  char local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_104 = 0;
  FUN_180390a90(local_c0);
  puVar13 = auStack_138;
  if (local_a0 == '\0') {
    PTR_s_not_initialized_1809f9d38 = s_csgo_directory_not_found_18089f9d8;
    uVar12 = 0;
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_180024d40(&local_98,L"pak01_dir.vpk",0xd);
    uVar14 = 0x18;
    uVar6 = FUN_180014f50(&local_78,local_c0,&local_98);
    cVar4 = FUN_18038fa80(&DAT_180ca1a40,uVar6);
    FUN_1800289e0(&local_78);
    FUN_1800289e0(&local_98);
    puVar10 = DAT_180ca1a30;
    puVar13 = auStack_138;
    if (cVar4 == '\0') {
      PTR_s_not_initialized_1809f9d38 = &DAT_1806d2ba0;
      if (DAT_180ca1ae8 != (undefined *)0x0) {
        PTR_s_not_initialized_1809f9d38 = DAT_180ca1ae8;
      }
      uVar12 = 0;
    }
    else {
      FUN_1803a01f0(&DAT_180ca1a30,&DAT_180ca1a30,DAT_180ca1a30[1]);
      puVar13 = auStack_138;
      puVar10[1] = puVar10;
      *puVar10 = puVar10;
      puVar10[2] = puVar10;
      DAT_180ca1a38 = 0;
      local_d8 = "vsvg_c";
      local_d0 = &DAT_18089fa70;
      local_100 = &local_d8;
      do {
        _Str = *local_100;
        _Size = strlen(_Str);
        puVar9 = DAT_180ca1ab0;
        local_78 = (undefined8 *)0x0;
        uStack_70 = (undefined8 *)0x0;
        local_68 = (undefined8 *)0x0;
        local_108 = uVar14 | 4;
        puVar10 = (undefined8 *)*DAT_180ca1ab0;
        local_104 = local_108;
        puVar7 = uStack_70;
        while( true ) {
          uVar14 = local_108;
          puVar2 = local_78;
          uStack_70 = puVar7;
          if (puVar10 == puVar9) break;
          if (_Size == 0) {
LAB_18039e958:
            if ((ulonglong)puVar10[5] < 0x10) {
              puVar7 = puVar10 + 2;
            }
            else {
              puVar7 = (undefined8 *)puVar10[2];
            }
            local_118 = 9;
            lVar8 = FUN_180068d80(puVar7,puVar10[4],0,"equipment");
            if (lVar8 != -1) {
              if (uStack_70 == local_68) {
                FUN_180028f00(&local_78,uStack_70);
              }
              else {
                FUN_180024b50(uStack_70,puVar10 + 2);
                uStack_70 = uStack_70 + 4;
              }
            }
          }
          else {
            uVar17 = puVar10[4];
            if (_Size + 1 < uVar17) {
              uVar15 = uVar17 - _Size;
              if (uVar17 < uVar15) goto LAB_18039ec79;
              puVar7 = puVar10 + 2;
              uVar17 = puVar10[5];
              if (0xf < uVar17) {
                puVar7 = (undefined8 *)puVar10[2];
              }
              iVar5 = memcmp((void *)((longlong)puVar7 + uVar15),_Str,_Size);
              if (iVar5 == 0) {
                puVar7 = puVar10 + 2;
                if (0xf < uVar17) {
                  puVar7 = (undefined8 *)puVar10[2];
                }
                if (*(char *)((longlong)puVar7 + (uVar15 - 1)) == '.') goto LAB_18039e958;
              }
            }
          }
          puVar10 = (undefined8 *)*puVar10;
          puVar7 = uStack_70;
        }
        for (; local_108 = uVar14, puVar2 != puVar7; puVar2 = puVar2 + 4) {
          puVar10 = puVar2;
          if (0xf < (ulonglong)puVar2[3]) {
            puVar10 = (undefined8 *)*puVar2;
          }
          lVar8 = FUN_1800ba730(puVar10,puVar2[2]);
          puVar10 = puVar2;
          if (0xf < (ulonglong)puVar2[3]) {
            puVar10 = (undefined8 *)*puVar2;
          }
          FUN_1800ba730(puVar10,puVar2[2]);
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          if ((ulonglong)puVar2[2] < lVar8 + 1U) {
LAB_18039ec79:
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          puVar10 = puVar2;
          if (0xf < (ulonglong)puVar2[3]) {
            puVar10 = (undefined8 *)*puVar2;
          }
          FUN_1800133a0(&local_98,(longlong)puVar10 + lVar8 + 1U);
          puVar3 = DAT_180ca1a30;
          local_108 = uVar14 | 3;
          puVar10 = (undefined8 *)DAT_180ca1a30[1];
          puVar9 = puVar10;
          puVar16 = DAT_180ca1a30;
          local_104 = local_108;
          if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
            do {
              puVar10 = puVar9;
              cVar4 = FUN_180023470(puVar10 + 4,&local_98);
              if (-1 < cVar4) {
                puVar9 = (undefined8 *)*puVar10;
                puVar16 = puVar10;
              }
              else {
                puVar9 = (undefined8 *)puVar10[2];
              }
              uVar14 = (uint)(-1 < cVar4);
            } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
          }
          else {
            uVar14 = 0;
          }
          if ((*(char *)((longlong)puVar16 + 0x19) == '\0') &&
             (cVar4 = FUN_180023470(&local_98,puVar16 + 4), -1 < cVar4)) {
            uVar17 = uStack_80;
          }
          else {
            if (DAT_180ca1a38 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
              FUN_18006dab0();
            }
            local_f8 = &DAT_180ca1a30;
            local_f0 = (undefined8 *)0x0;
            puVar9 = (undefined8 *)FUN_1804ecaa0(0x60);
            local_c8 = (char *)(puVar9 + 4);
            *(undefined4 *)local_c8 = (undefined4)local_98;
            *(undefined4 *)((longlong)puVar9 + 0x24) = local_98._4_4_;
            *(undefined4 *)(puVar9 + 5) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_90._4_4_;
            *(undefined4 *)(puVar9 + 6) = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar9 + 0x34) = local_88._4_4_;
            *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_80._4_4_;
            local_88 = 0;
            uVar17 = 0xf;
            uStack_80 = 0xf;
            local_98 = local_98 & 0xffffffffffffff00;
            local_f0 = puVar9;
            FUN_180024b50(puVar9 + 8,puVar2);
            *puVar9 = puVar3;
            puVar9[1] = puVar3;
            puVar9[2] = puVar3;
            *(undefined2 *)(puVar9 + 3) = 0;
            local_f0 = (undefined8 *)0x0;
            local_dc = uStack_70._4_4_;
            local_e8 = puVar10;
            local_e0 = uVar14;
            FUN_1800774d0(&DAT_180ca1a30,&local_e8);
          }
          if (0xf < uVar17) {
            uVar15 = uVar17 + 1;
            uVar11 = local_98;
            if (0xfff < uVar15) {
              uVar11 = *(ulonglong *)(local_98 - 8);
              if (0x1f < (local_98 - uVar11) - 8) {
                pcVar1 = (code *)swi(0x29);
                (*pcVar1)(5);
                puVar13 = auStack_130;
                goto LAB_18039ec1e;
              }
              uVar15 = uVar17 + 0x28;
            }
            thunk_FUN_1803d64e0(uVar11,uVar15);
          }
          uVar14 = local_108;
        }
        uVar14 = uVar14 & 0xfffffffb;
        FUN_1800288b0(&local_78);
        local_100 = local_100 + 1;
      } while (local_100 != &local_c8);
LAB_18039ec1e:
      if (DAT_180ca1a38 == 0) {
        PTR_s_not_initialized_1809f9d38 = s_no_equipment_icons_in_vpk_18089fa78;
        uVar12 = 0;
      }
      else {
        PTR_s_not_initialized_1809f9d38 = (undefined *)0x0;
        uVar12 = 1;
      }
    }
  }
  if (local_a0 != '\0') {
    *(undefined8 *)(puVar13 + -8) = 0x18039ec56;
    FUN_1800289e0(local_c0);
  }
  *(undefined8 *)(puVar13 + -8) = 0x18039ec65;
  return uVar12;
}



/* ===== 18039ec90 FUN_18039ec90 ===== */

void FUN_18039ec90(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_18039de60();
  plVar5 = (longlong *)*DAT_180ca1a10;
  cVar1 = *(char *)((longlong)plVar5 + 0x19);
  plVar2 = DAT_180ca1a10;
  while (DAT_180ca1a10 = plVar2, cVar1 == '\0') {
    if ((longlong *)plVar5[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar5[9] + 0x10))();
    }
    plVar2 = (longlong *)plVar5[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar5 = plVar2;
      while (cVar1 == '\0') {
        plVar5 = (longlong *)*plVar5;
        cVar1 = *(char *)(*plVar5 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar4 = (longlong *)plVar5[1];
      plVar2 = plVar5;
      while ((plVar5 = plVar4, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar2 = plVar5;
      }
    }
    plVar2 = DAT_180ca1a10;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  FUN_1803a0170(&DAT_180ca1a10,&DAT_180ca1a10,plVar2[1]);
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
  plVar2[2] = (longlong)plVar2;
  lVar3 = DAT_180ca1a30;
  DAT_180ca1a18 = 0;
  FUN_1803a01f0(&DAT_180ca1a30,&DAT_180ca1a30,*(undefined8 *)(DAT_180ca1a30 + 8));
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 0x10) = lVar3;
  DAT_180ca1a38 = 0;
  return;
}



/* ===== 18039ed80 FUN_18039ed80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18039ed80(undefined8 *param_1,undefined8 param_2,char *param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  bool bVar10;
  size_t sVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_e8;
  if ((param_3 == (char *)0x0) || (param_4 < 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  FUN_180024b50(local_80);
  plVar8 = DAT_180ca1a10;
  plVar13 = (longlong *)DAT_180ca1a10[1];
  cVar3 = *(char *)((longlong)plVar13 + 0x19);
  plVar14 = DAT_180ca1a10;
  local_60 = param_4;
  while (cVar3 == '\0') {
    if ((int)plVar13[8] == param_4) {
      bVar9 = FUN_180023470(plVar13 + 4,local_80);
      bVar10 = (bool)(bVar9 >> 7);
    }
    else {
      bVar10 = (int)plVar13[8] < param_4;
    }
    if (bVar10 == false) {
      plVar14 = plVar13;
    }
    else {
      plVar13 = plVar13 + 2;
    }
    plVar13 = (longlong *)*plVar13;
    cVar3 = *(char *)((longlong)plVar13 + 0x19);
  }
  if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
    if (param_4 == (int)plVar14[8]) {
      bVar9 = FUN_180023470(local_80,plVar14 + 4);
      bVar10 = (bool)(bVar9 >> 7);
    }
    else {
      bVar10 = param_4 < (int)plVar14[8];
    }
    if (bVar10 == false) goto LAB_18039ee50;
  }
  plVar14 = plVar8;
LAB_18039ee50:
  if (plVar14 == plVar8) {
    sVar11 = strlen(param_3);
    local_c8 = 0;
    lStack_c0 = 0;
    local_b8 = 0;
    if (sVar11 != 0) {
      if (0x7fffffffffffffff < sVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      local_c8 = FUN_18000fb70(sVar11);
      lVar1 = local_c8 + sVar11;
      local_b8 = lVar1;
      FUN_180540530(local_c8,param_3,sVar11);
      lStack_c0 = lVar1;
    }
    puVar12 = (undefined8 *)FUN_18039df30(local_98,&local_c8,param_4);
    uVar6 = *puVar12;
    uVar7 = puVar12[1];
    uVar2 = puVar12[2];
    local_b0 = uVar6;
    uStack_a8 = uVar7;
    local_a0 = uVar2;
    FUN_18039fb70(&DAT_180ca1a10,&local_c8,local_80,&local_b0);
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1[2] = uVar2;
    FUN_18000f890(local_80);
  }
  else {
    uVar4 = *(undefined4 *)((longlong)plVar14 + 0x4c);
    lVar1 = plVar14[10];
    uVar5 = *(undefined4 *)((longlong)plVar14 + 0x54);
    *(int *)param_1 = (int)plVar14[9];
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(int *)(param_1 + 1) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    param_1[2] = plVar14[0xb];
    FUN_18000f890(local_80);
  }
  return param_1;
}



/* ===== 18039ef70 FUN_18039ef70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_18039ef70(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5,
             int param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar15;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong *local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90 [5];
  undefined1 local_68 [32];
  int local_48;
  ulonglong local_40;
  
  puVar12 = auStack_d8;
  local_40 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if ((((param_3 == 0) || (param_4 == 0)) || (param_5 < 1)) || (param_6 < 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto LAB_18039f14d;
  }
  local_90[3] = param_3;
  FUN_180024b50(local_68);
  puVar5 = DAT_180ca1a10;
  puVar12 = auStack_d8;
  puVar10 = auStack_d8;
  puVar11 = auStack_d8;
  cVar8 = *(char *)((longlong)DAT_180ca1a10[1] + 0x19);
  puVar13 = (undefined8 *)DAT_180ca1a10[1];
  local_48 = param_6;
  puVar4 = DAT_180ca1a10;
  while (puVar14 = puVar13, cVar8 == '\0') {
    if (*(int *)(puVar14 + 8) == param_6) {
      bVar6 = FUN_180023470(puVar14 + 4,local_68);
      bVar7 = (bool)(bVar6 >> 7);
    }
    else {
      bVar7 = *(int *)(puVar14 + 8) < param_6;
    }
    if (bVar7 == false) {
      puVar13 = (undefined8 *)*puVar14;
    }
    else {
      puVar13 = (undefined8 *)puVar14[2];
      puVar14 = puVar4;
    }
    cVar8 = *(char *)((longlong)puVar13 + 0x19);
    puVar4 = puVar14;
  }
  if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
    if (param_6 == *(int *)(puVar4 + 8)) {
      bVar6 = FUN_180023470(local_68,puVar4 + 4);
      bVar7 = (bool)(bVar6 >> 7);
    }
    else {
      bVar7 = param_6 < *(int *)(puVar4 + 8);
    }
    if ((bVar7 == false) && (puVar4 != puVar5)) {
      uVar15 = *(undefined4 *)((longlong)puVar4 + 0x4c);
      uVar2 = *(undefined4 *)(puVar4 + 10);
      uVar3 = *(undefined4 *)((longlong)puVar4 + 0x54);
      *(undefined4 *)param_1 = *(undefined4 *)(puVar4 + 9);
      *(undefined4 *)((longlong)param_1 + 4) = uVar15;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      param_1[2] = puVar4[0xb];
      FUN_18000f890(local_68);
      goto LAB_18039f14d;
    }
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_b8 = local_90;
  cVar8 = FUN_18039e330(local_90[3],param_4,param_5,param_6);
  uVar15 = extraout_XMM0_Da;
  if ((cVar8 == '\0') ||
     (lVar9 = FUN_18039dd60(local_90,param_5,param_6), uVar15 = extraout_XMM0_Da_00, lVar9 == 0)) {
    param_5 = 0;
    lVar9 = 0;
    param_6 = 0;
  }
  else {
    local_a0 = CONCAT44(param_6,param_5);
    local_a8 = lVar9;
  }
  FUN_18039fe90(uVar15,local_90 + 3,local_68,&local_a8);
  *param_1 = lVar9;
  *(int *)(param_1 + 1) = param_5;
  *(int *)((longlong)param_1 + 0xc) = param_6;
  param_1[2] = 0;
  puVar12 = auStack_d8;
  if (local_90[0] != 0) {
    lVar9 = local_90[0];
    if ((ulonglong)(local_90[2] - local_90[0]) < 0x1000) {
LAB_18039f12c:
      puVar11 = puVar10;
    }
    else {
      lVar9 = *(longlong *)(local_90[0] + -8);
      if (0x1f < (local_90[0] - lVar9) - 8U) {
        pcVar1 = (code *)swi(0x29);
        lVar9 = (*pcVar1)(5);
        puVar10 = auStack_d0;
        goto LAB_18039f12c;
      }
    }
    *(undefined8 *)(puVar11 + -8) = 0x18039f134;
    thunk_FUN_1803d64e0(lVar9);
    puVar12 = puVar11;
  }
  *(undefined8 *)(puVar12 + -8) = 0x18039f13e;
  FUN_18000f890(local_68);
LAB_18039f14d:
  *(undefined8 *)(puVar12 + -8) = 0x18039f15c;
  return param_1;
}



/* ===== 18039f180 FUN_18039f180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_18039f180(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  int local_58;
  ulonglong local_50;
  
  puVar14 = auStack_d8;
  local_50 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (((param_3 == 0) || (param_4 < 1)) || (param_5 < 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto LAB_18039f393;
  }
  FUN_180024b50(local_78);
  puVar8 = DAT_180ca1a10;
  puVar14 = auStack_d8;
  puVar12 = auStack_d8;
  puVar13 = auStack_d8;
  cVar2 = *(char *)((longlong)DAT_180ca1a10[1] + 0x19);
  puVar15 = (undefined8 *)DAT_180ca1a10[1];
  local_58 = param_5;
  puVar7 = DAT_180ca1a10;
  while (puVar16 = puVar15, cVar2 == '\0') {
    if (*(int *)(puVar16 + 8) == param_5) {
      bVar9 = FUN_180023470(puVar16 + 4,local_78);
      bVar10 = (bool)(bVar9 >> 7);
    }
    else {
      bVar10 = *(int *)(puVar16 + 8) < param_5;
    }
    if (bVar10 == false) {
      puVar15 = (undefined8 *)*puVar16;
    }
    else {
      puVar15 = (undefined8 *)puVar16[2];
      puVar16 = puVar7;
    }
    cVar2 = *(char *)((longlong)puVar15 + 0x19);
    puVar7 = puVar16;
  }
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    if (param_5 == *(int *)(puVar7 + 8)) {
      bVar9 = FUN_180023470(local_78,puVar7 + 4);
      bVar10 = (bool)(bVar9 >> 7);
    }
    else {
      bVar10 = param_5 < *(int *)(puVar7 + 8);
    }
    if ((bVar10 == false) && (puVar7 != puVar8)) {
      uVar4 = *(undefined4 *)((longlong)puVar7 + 0x4c);
      uVar5 = *(undefined4 *)(puVar7 + 10);
      uVar6 = *(undefined4 *)((longlong)puVar7 + 0x54);
      *(undefined4 *)param_1 = *(undefined4 *)(puVar7 + 9);
      *(undefined4 *)((longlong)param_1 + 4) = uVar4;
      *(undefined4 *)(param_1 + 1) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
      param_1[2] = puVar7[0xb];
      FUN_18000f890(local_78);
      goto LAB_18039f393;
    }
  }
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uVar1 = (longlong)param_5 * (longlong)param_4 * 4;
  local_a0 = 0;
  lStack_98 = 0;
  local_90 = 0;
  if (uVar1 != 0) {
    if (0x7fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    local_a0 = FUN_18000fb70(uVar1);
    lVar11 = local_a0 + uVar1;
    local_90 = lVar11;
    FUN_180540530(local_a0,param_3,uVar1);
    lStack_98 = lVar11;
  }
  lVar11 = FUN_18039dd60(&local_a0,param_4,param_5);
  if (lVar11 == 0) {
    param_5 = 0;
    lVar11 = 0;
    param_4 = 0;
  }
  else {
    local_b0 = CONCAT44(param_5,param_4);
    local_b8 = lVar11;
  }
  FUN_18039fe90(extraout_XMM0_Da,local_88,local_78,&local_b8);
  *param_1 = lVar11;
  *(int *)(param_1 + 1) = param_4;
  *(int *)((longlong)param_1 + 0xc) = param_5;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  puVar14 = auStack_d8;
  if (local_a0 != 0) {
    lVar11 = local_a0;
    if ((ulonglong)(local_90 - local_a0) < 0x1000) {
LAB_18039f372:
      puVar13 = puVar12;
    }
    else {
      lVar11 = *(longlong *)(local_a0 + -8);
      if (0x1f < (local_a0 - lVar11) - 8U) {
        pcVar3 = (code *)swi(0x29);
        lVar11 = (*pcVar3)(5);
        puVar12 = auStack_d0;
        goto LAB_18039f372;
      }
    }
    *(undefined8 *)(puVar13 + -8) = 0x18039f37a;
    thunk_FUN_1803d64e0(lVar11);
    puVar14 = puVar13;
  }
  *(undefined8 *)(puVar14 + -8) = 0x18039f384;
  FUN_18000f890(local_78);
LAB_18039f393:
  *(undefined8 *)(puVar14 + -8) = 0x18039f3a2;
  return param_1;
}



/* ===== 18039f3d0 FUN_18039f3d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18039f3d0(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_2 + 0x10) == 0) || (param_3 < 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  uVar13 = FUN_180024b50(local_78);
  plVar6 = DAT_180ca1a00;
  plVar11 = (longlong *)DAT_180ca1a00[1];
  cVar9 = *(char *)((longlong)plVar11 + 0x19);
  plVar12 = DAT_180ca1a00;
  local_58 = param_3;
  while (cVar9 == '\0') {
    if ((int)plVar11[8] == param_3) {
      bVar7 = FUN_180023470(plVar11 + 4,local_78);
      bVar8 = (bool)(bVar7 >> 7);
      uVar13 = extraout_XMM0_Da;
    }
    else {
      bVar8 = (int)plVar11[8] < param_3;
    }
    if (bVar8 == false) {
      plVar12 = plVar11;
    }
    else {
      plVar11 = plVar11 + 2;
    }
    plVar11 = (longlong *)*plVar11;
    cVar9 = *(char *)((longlong)plVar11 + 0x19);
  }
  if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
    if (param_3 == (int)plVar12[8]) {
      bVar7 = FUN_180023470(local_78,plVar12 + 4);
      bVar8 = (bool)(bVar7 >> 7);
      uVar13 = extraout_XMM0_Da_00;
    }
    else {
      bVar8 = param_3 < (int)plVar12[8];
    }
    if (bVar8 == false) goto LAB_18039f4a0;
  }
  plVar12 = plVar6;
LAB_18039f4a0:
  if (plVar12 == plVar6) {
    if (0xff < DAT_180ca1a08) {
      uVar13 = FUN_18039de60();
    }
    plVar6 = DAT_180ca1a30;
    plVar11 = (longlong *)DAT_180ca1a30[1];
    cVar9 = *(char *)((longlong)plVar11 + 0x19);
    plVar12 = DAT_180ca1a30;
    while (cVar9 == '\0') {
      cVar9 = FUN_180023470(plVar11 + 4,param_2);
      if (cVar9 < '\0') {
        plVar11 = plVar11 + 2;
      }
      else {
        plVar12 = plVar11;
      }
      plVar11 = (longlong *)*plVar11;
      uVar13 = extraout_XMM0_Da_01;
      cVar9 = *(char *)((longlong)plVar11 + 0x19);
    }
    if ((*(char *)((longlong)plVar12 + 0x19) != '\0') ||
       (cVar9 = FUN_180023470(param_2,plVar12 + 4), uVar13 = extraout_XMM0_Da_02, cVar9 < '\0')) {
      plVar12 = plVar6;
    }
    if (plVar12 == plVar6) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      FUN_1803a0000(uVar13,local_90,local_78,&local_a8);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_18000f890(local_78);
    }
    else {
      puVar10 = (undefined8 *)FUN_18039e250(local_90,plVar12 + 8,param_3);
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      uVar1 = puVar10[2];
      local_a8 = uVar3;
      uStack_a0 = uVar4;
      local_98 = uVar1;
      FUN_18039fb70(&DAT_180ca1a00,local_90,local_78,&local_a8);
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar1;
      FUN_18000f890(local_78);
    }
  }
  else {
    uVar13 = *(undefined4 *)((longlong)plVar12 + 0x4c);
    lVar5 = plVar12[10];
    uVar2 = *(undefined4 *)((longlong)plVar12 + 0x54);
    *(int *)param_1 = (int)plVar12[9];
    *(undefined4 *)((longlong)param_1 + 4) = uVar13;
    *(int *)(param_1 + 1) = (int)lVar5;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    param_1[2] = plVar12[0xb];
    FUN_18000f890(local_78);
  }
  return param_1;
}



/* ===== 18039f610 FUN_18039f610 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18039f610(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  bool bVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_2 + 0x10) == 0) || (param_3 < 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return param_1;
  }
  FUN_180024b50(local_78);
  plVar8 = DAT_180ca1a00;
  plVar12 = (longlong *)DAT_180ca1a00[1];
  cVar2 = *(char *)((longlong)plVar12 + 0x19);
  plVar13 = DAT_180ca1a00;
  local_58 = param_3;
  while (cVar2 == '\0') {
    if ((int)plVar12[8] == param_3) {
      bVar9 = FUN_180023470(plVar12 + 4,local_78);
      bVar10 = (bool)(bVar9 >> 7);
    }
    else {
      bVar10 = (int)plVar12[8] < param_3;
    }
    if (bVar10 == false) {
      plVar13 = plVar12;
    }
    else {
      plVar12 = plVar12 + 2;
    }
    plVar12 = (longlong *)*plVar12;
    cVar2 = *(char *)((longlong)plVar12 + 0x19);
  }
  if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
    if (param_3 == (int)plVar13[8]) {
      bVar9 = FUN_180023470(local_78,plVar13 + 4);
      bVar10 = (bool)(bVar9 >> 7);
    }
    else {
      bVar10 = param_3 < (int)plVar13[8];
    }
    if (bVar10 == false) goto LAB_18039f6e0;
  }
  plVar13 = plVar8;
LAB_18039f6e0:
  if (plVar13 == plVar8) {
    if (0xff < DAT_180ca1a08) {
      FUN_18039de60();
    }
    puVar11 = (undefined8 *)FUN_18039e250(local_90,param_2,param_3);
    uVar5 = *puVar11;
    uVar6 = puVar11[1];
    uVar1 = puVar11[2];
    local_a8 = uVar5;
    uStack_a0 = uVar6;
    local_98 = uVar1;
    FUN_18039fb70(&DAT_180ca1a00,local_90,local_78,&local_a8);
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[2] = uVar1;
    FUN_18000f890(local_78);
  }
  else {
    uVar3 = *(undefined4 *)((longlong)plVar13 + 0x4c);
    lVar7 = plVar13[10];
    uVar4 = *(undefined4 *)((longlong)plVar13 + 0x54);
    *(int *)param_1 = (int)plVar13[9];
    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
    *(int *)(param_1 + 1) = (int)lVar7;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    param_1[2] = plVar13[0xb];
    FUN_18000f890(local_78);
  }
  return param_1;
}



/* ===== 18039f7b0 FUN_18039f7b0 ===== */

undefined8 *
FUN_18039f7b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar10 = DAT_180ca1a38;
  if (DAT_180ca1a38 != 0) {
    if (0x7ffffffffffffff < DAT_180ca1a38) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0(param_1,param_2,param_3,param_4,1);
    }
    puVar12 = (undefined8 *)FUN_18000fb70(DAT_180ca1a38 << 5);
    puVar3 = (undefined4 *)param_1[1];
    puVar1 = puVar12;
    for (puVar13 = (undefined4 *)*param_1; puVar13 != puVar3; puVar13 = puVar13 + 8) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar6 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      *(undefined4 *)puVar1 = *puVar13;
      *(undefined4 *)((longlong)puVar1 + 4) = uVar6;
      *(undefined4 *)(puVar1 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uVar8;
      uVar9 = *(undefined8 *)(puVar13 + 6);
      puVar1[2] = *(undefined8 *)(puVar13 + 4);
      puVar1[3] = uVar9;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      puVar1 = puVar1 + 4;
    }
    FUN_18002b950(param_1,puVar12,0,uVar10);
  }
  plVar14 = (longlong *)*DAT_180ca1a30;
  cVar2 = *(char *)((longlong)plVar14 + 0x19);
  while (cVar2 == '\0') {
    lVar4 = param_1[1];
    if (lVar4 == param_1[2]) {
      FUN_180028f00(param_1,lVar4);
    }
    else {
      FUN_180024b50(lVar4,plVar14 + 4);
      param_1[1] = param_1[1] + 0x20;
    }
    plVar5 = (longlong *)plVar14[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar5 + 0x19);
      plVar14 = plVar5;
      while (cVar2 == '\0') {
        plVar14 = (longlong *)*plVar14;
        cVar2 = *(char *)(*plVar14 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar14[1] + 0x19);
      plVar11 = (longlong *)plVar14[1];
      plVar5 = plVar14;
      while ((plVar14 = plVar11, cVar2 == '\0' && (plVar5 == (longlong *)plVar14[2]))) {
        cVar2 = *(char *)(plVar14[1] + 0x19);
        plVar11 = (longlong *)plVar14[1];
        plVar5 = plVar14;
      }
    }
    cVar2 = *(char *)((longlong)plVar14 + 0x19);
  }
  return param_1;
}



/* ===== 18039f910 FUN_18039f910 ===== */

undefined8 * FUN_18039f910(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(param_2);
  FUN_1800133a0(param_1,param_2,sVar1);
  param_1[4] = param_3;
  return param_1;
}



/* ===== 18039f970 FUN_18039f970 ===== */

undefined8 * FUN_18039f970(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(0,"C_SmokeGrenade",0xe);
  param_1[4] = "smokegrenade";
  return param_1;
}



/* ===== 18039f9b0 FUN_18039f9b0 ===== */

undefined8 * FUN_18039f9b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(0,"C_MolotovGrenade",0x10);
  param_1[4] = "molotov";
  return param_1;
}



/* ===== 18039f9f0 FUN_18039f9f0 ===== */

undefined8 * FUN_18039f9f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(0,"C_IncendiaryGrenade",0x13);
  param_1[4] = "incgrenade";
  return param_1;
}



/* ===== 18039fa30 FUN_18039fa30 ===== */

undefined8 * FUN_18039fa30(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(0,"C_DecoyGrenade",0xe);
  param_1[4] = &DAT_1806de628;
  return param_1;
}



/* ===== 18039fa70 FUN_18039fa70 ===== */

undefined8 * FUN_18039fa70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(0,"C_Knife",7);
  param_1[4] = "knife";
  return param_1;
}



/* ===== 18039fab0 FUN_18039fab0 ===== */

undefined8 * FUN_18039fab0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(0,"C_CSGO_Item_Knife",0x11);
  param_1[4] = "knife";
  return param_1;
}



/* ===== 18039faf0 FUN_18039faf0 ===== */

undefined8 * FUN_18039faf0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(0,&DAT_1806d4100,4);
  param_1[4] = &DAT_1806de63c;
  return param_1;
}



/* ===== 18039fb30 FUN_18039fb30 ===== */

undefined8 * FUN_18039fb30(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1800133a0(0,"C_Item_Healthshot",0x11);
  param_1[4] = "healthshot";
  return param_1;
}



/* ===== 18039fb70 FUN_18039fb70 ===== */

undefined8 *
FUN_18039fb70(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *local_58;
  longlong *local_50;
  
  plVar9 = (longlong *)*param_1;
  plVar11 = (longlong *)plVar9[1];
  uVar10 = 0;
  plVar8 = plVar9;
  if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
    iVar1 = *(int *)(param_3 + 0x20);
    plVar9 = plVar11;
    do {
      plVar11 = plVar9;
      if ((int)plVar11[8] == iVar1) {
        bVar5 = FUN_180023470(plVar11 + 4,param_3);
        bVar6 = (bool)(bVar5 >> 7);
      }
      else {
        bVar6 = (int)plVar11[8] < iVar1;
      }
      if (bVar6 == false) {
        plVar9 = (longlong *)*plVar11;
        plVar8 = plVar11;
      }
      else {
        plVar9 = (longlong *)plVar11[2];
      }
      uVar10 = (uint)(bVar6 == false);
    } while (*(char *)((longlong)plVar9 + 0x19) == '\0');
    plVar9 = (longlong *)*param_1;
  }
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    if (*(int *)(param_3 + 0x20) == (int)plVar8[8]) {
      bVar5 = FUN_180023470(param_3,plVar8 + 4);
      bVar6 = (bool)(bVar5 >> 7);
    }
    else {
      bVar6 = *(int *)(param_3 + 0x20) < (int)plVar8[8];
    }
    uVar7 = 0;
    if (bVar6 == false) goto LAB_18039fcaf;
  }
  if (param_1[1] == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18006dab0();
  }
  local_50 = (longlong *)0x0;
  local_58 = param_1;
  plVar8 = (longlong *)FUN_1804ecaa0(0x60);
  local_50 = plVar8;
  FUN_180024b50(plVar8 + 4,param_3);
  *(undefined4 *)(plVar8 + 8) = *(undefined4 *)(param_3 + 0x20);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(plVar8 + 9) = *param_4;
  *(undefined4 *)((longlong)plVar8 + 0x4c) = uVar2;
  *(undefined4 *)(plVar8 + 10) = uVar3;
  *(undefined4 *)((longlong)plVar8 + 0x54) = uVar4;
  plVar8[0xb] = *(longlong *)(param_4 + 4);
  *plVar8 = (longlong)plVar9;
  plVar8[1] = (longlong)plVar9;
  plVar8[2] = (longlong)plVar9;
  *(undefined2 *)(plVar8 + 3) = 0;
  local_50 = (longlong *)CONCAT44(local_50._4_4_,uVar10);
  local_58 = plVar11;
  plVar8 = (longlong *)FUN_1800774d0(param_1,&local_58,plVar8);
  uVar7 = 1;
LAB_18039fcaf:
  *param_2 = plVar8;
  *(undefined1 *)(param_2 + 1) = uVar7;
  return param_2;
}



/* ===== 18039fce0 FUN_18039fce0 ===== */

void FUN_18039fce0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1803a0280(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_18000f890(plVar3 + 4);
    thunk_FUN_1803d64e0(plVar3,0x48);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1803d64e0(*param_1,0x48);
  return;
}



/* ===== 18039fd50 FUN_18039fd50 ===== */

undefined8 * FUN_18039fd50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  
  DAT_180ca1a20 = 0;
  DAT_180ca1a28 = 0;
  DAT_180ca1a20 = FUN_1804ecaa0(0x48);
  *(longlong *)DAT_180ca1a20 = DAT_180ca1a20;
  *(longlong *)(DAT_180ca1a20 + 8) = DAT_180ca1a20;
  *(longlong *)(DAT_180ca1a20 + 0x10) = DAT_180ca1a20;
  *(undefined2 *)(DAT_180ca1a20 + 0x18) = 0x101;
  lVar7 = *param_2;
  lVar1 = param_2[1];
  do {
    if (lVar7 == lVar1) {
      return &DAT_180ca1a20;
    }
    puVar5 = (undefined8 *)FUN_1803a0300();
    lVar4 = DAT_180ca1a20;
    uVar2 = *puVar5;
    uVar3 = puVar5[1];
    if (*(char *)(puVar5 + 2) == '\0') {
      if (DAT_180ca1a28 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
        FUN_18006dab0();
      }
      plVar6 = (longlong *)FUN_1804ecaa0(0x48);
      FUN_180024b50(plVar6 + 4,lVar7);
      plVar6[8] = *(longlong *)(lVar7 + 0x20);
      *plVar6 = lVar4;
      plVar6[1] = lVar4;
      plVar6[2] = lVar4;
      *(undefined2 *)(plVar6 + 3) = 0;
      local_78 = uVar2;
      uStack_70 = uVar3;
      FUN_1800774d0(&DAT_180ca1a20,&local_78,plVar6);
    }
    lVar7 = lVar7 + 0x28;
  } while( true );
}



/* ===== 18039fe90 FUN_18039fe90 ===== */

undefined8 *
FUN_18039fe90(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *local_68;
  undefined8 *local_60;
  
  puVar5 = DAT_180ca1a10;
  puVar12 = (undefined8 *)DAT_180ca1a10[1];
  uVar11 = 0;
  puVar8 = DAT_180ca1a10;
  if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
    iVar1 = *(int *)(param_3 + 0x20);
    puVar10 = puVar12;
    do {
      puVar12 = puVar10;
      if (*(int *)(puVar12 + 8) == iVar1) {
        bVar6 = FUN_180023470(puVar12 + 4,param_3);
        bVar7 = (bool)(bVar6 >> 7);
      }
      else {
        bVar7 = *(int *)(puVar12 + 8) < iVar1;
      }
      if (bVar7 == false) {
        puVar10 = (undefined8 *)*puVar12;
        puVar8 = puVar12;
      }
      else {
        puVar10 = (undefined8 *)puVar12[2];
      }
      uVar11 = (uint)(bVar7 == false);
    } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
  }
  if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
    if (*(int *)(param_3 + 0x20) == *(int *)(puVar8 + 8)) {
      bVar6 = FUN_180023470(param_3,puVar8 + 4);
      bVar7 = (bool)(bVar6 >> 7);
    }
    else {
      bVar7 = *(int *)(param_3 + 0x20) < *(int *)(puVar8 + 8);
    }
    if (bVar7 == false) {
      *param_2 = puVar8;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  if (DAT_180ca1a18 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18006dab0();
  }
  local_68 = &DAT_180ca1a10;
  local_60 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)FUN_1804ecaa0(0x60);
  local_60 = puVar8;
  FUN_180024b50(puVar8 + 4,param_3);
  *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(param_3 + 0x20);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(puVar8 + 9) = *param_4;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar2;
  *(undefined4 *)(puVar8 + 10) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x54) = uVar4;
  puVar8[0xb] = *(undefined8 *)(param_4 + 4);
  *puVar8 = puVar5;
  puVar8[1] = puVar5;
  puVar8[2] = puVar5;
  *(undefined2 *)(puVar8 + 3) = 0;
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,uVar11);
  local_68 = puVar12;
  uVar9 = FUN_1800774d0(&DAT_180ca1a10,&local_68,puVar8);
  *param_2 = uVar9;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1803a0000 FUN_1803a0000 ===== */

undefined8 *
FUN_1803a0000(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *local_68;
  undefined8 *local_60;
  
  puVar5 = DAT_180ca1a00;
  puVar12 = (undefined8 *)DAT_180ca1a00[1];
  uVar11 = 0;
  puVar8 = DAT_180ca1a00;
  if (*(char *)((longlong)puVar12 + 0x19) == '\0') {
    iVar1 = *(int *)(param_3 + 0x20);
    puVar10 = puVar12;
    do {
      puVar12 = puVar10;
      if (*(int *)(puVar12 + 8) == iVar1) {
        bVar6 = FUN_180023470(puVar12 + 4,param_3);
        bVar7 = (bool)(bVar6 >> 7);
      }
      else {
        bVar7 = *(int *)(puVar12 + 8) < iVar1;
      }
      if (bVar7 == false) {
        puVar10 = (undefined8 *)*puVar12;
        puVar8 = puVar12;
      }
      else {
        puVar10 = (undefined8 *)puVar12[2];
      }
      uVar11 = (uint)(bVar7 == false);
    } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
  }
  if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
    if (*(int *)(param_3 + 0x20) == *(int *)(puVar8 + 8)) {
      bVar6 = FUN_180023470(param_3,puVar8 + 4);
      bVar7 = (bool)(bVar6 >> 7);
    }
    else {
      bVar7 = *(int *)(param_3 + 0x20) < *(int *)(puVar8 + 8);
    }
    if (bVar7 == false) {
      *param_2 = puVar8;
      *(undefined1 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  if (DAT_180ca1a08 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18006dab0();
  }
  local_68 = &DAT_180ca1a00;
  local_60 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)FUN_1804ecaa0(0x60);
  local_60 = puVar8;
  FUN_180024b50(puVar8 + 4,param_3);
  *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(param_3 + 0x20);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(puVar8 + 9) = *param_4;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar2;
  *(undefined4 *)(puVar8 + 10) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x54) = uVar4;
  puVar8[0xb] = *(undefined8 *)(param_4 + 4);
  *puVar8 = puVar5;
  puVar8[1] = puVar5;
  puVar8[2] = puVar5;
  *(undefined2 *)(puVar8 + 3) = 0;
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,uVar11);
  local_68 = puVar12;
  uVar9 = FUN_1800774d0(&DAT_180ca1a00,&local_68,puVar8);
  *param_2 = uVar9;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1803a0170 FUN_1803a0170 ===== */

void FUN_1803a0170(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1803a0170(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18000f890(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0x60);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 1803a01f0 FUN_1803a01f0 ===== */

void FUN_1803a01f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1803a01f0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18000f890(param_3 + 8);
    FUN_18000f890(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0x60);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 1803a0280 FUN_1803a0280 ===== */

void FUN_1803a0280(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1803a0280(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18000f890(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0x48);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 1803a0300 FUN_1803a0300 ===== */

longlong * FUN_1803a0300(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  undefined4 local_4c;
  
  plVar6 = DAT_180ca1a20;
  if (*(char *)((longlong)param_3 + 0x19) == '\0') {
    cVar1 = FUN_180023470(param_4,param_3 + 4);
    if (param_3 == (longlong *)*plVar6) {
      if (cVar1 < '\0') {
        *param_2 = (longlong)param_3;
        *(undefined4 *)(param_2 + 1) = 1;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      goto LAB_1803a04be;
    }
    if (cVar1 < '\0') {
      plVar5 = (longlong *)*param_3;
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        while (cVar1 == '\0') {
          plVar5 = (longlong *)plVar5[2];
          cVar1 = *(char *)(plVar5[2] + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(param_3[1] + 0x19);
        plVar4 = (longlong *)param_3[1];
        plVar3 = param_3;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)*plVar5))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
        if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
          plVar5 = plVar3;
        }
      }
      cVar1 = FUN_180023470(plVar5 + 4,param_4);
      if (cVar1 < '\0') {
        cVar1 = *(char *)(plVar5[2] + 0x19);
        *(undefined1 *)(param_2 + 2) = 0;
        if (cVar1 == '\0') {
          *param_2 = (longlong)param_3;
          *(undefined4 *)(param_2 + 1) = 1;
          return param_2;
        }
        *param_2 = (longlong)plVar5;
        *(undefined4 *)(param_2 + 1) = 0;
        return param_2;
      }
      goto LAB_1803a04be;
    }
    cVar1 = FUN_180023470(param_3 + 4,param_4);
    if (-1 < cVar1) {
      *param_2 = (longlong)param_3;
      *(undefined1 *)(param_2 + 2) = 1;
      goto LAB_1803a0599;
    }
    plVar5 = (longlong *)param_3[2];
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    if (cVar1 == '\0') {
      cVar2 = *(char *)(*plVar5 + 0x19);
      while (cVar2 == '\0') {
        plVar5 = (longlong *)*plVar5;
        cVar2 = *(char *)(*plVar5 + 0x19);
      }
    }
    else {
      plVar5 = (longlong *)param_3[1];
      plVar3 = param_3;
      plVar4 = plVar5;
      if (*(char *)((longlong)plVar5 + 0x19) != '\0') goto LAB_1803a0558;
      do {
        plVar5 = plVar4;
        if (plVar3 != (longlong *)plVar4[2]) break;
        plVar5 = (longlong *)plVar4[1];
        plVar3 = plVar4;
        plVar4 = plVar5;
      } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)plVar5 + 0x19) != '\0') ||
       (cVar2 = FUN_180023470(param_4,plVar5 + 4), cVar2 < '\0')) {
LAB_1803a0558:
      *(undefined1 *)(param_2 + 2) = 0;
      if (cVar1 == '\0') {
        *param_2 = (longlong)plVar5;
        *(undefined4 *)(param_2 + 1) = 1;
        return param_2;
      }
      *param_2 = (longlong)param_3;
      *(undefined4 *)(param_2 + 1) = 0;
      return param_2;
    }
  }
  else if ((*(char *)(DAT_180ca1a20[1] + 0x19) != '\0') ||
          (cVar1 = FUN_180023470(DAT_180ca1a20[2] + 0x20,param_4), cVar1 < '\0')) {
    *param_2 = plVar6[2];
    *(undefined1 *)(param_2 + 2) = 0;
LAB_1803a0599:
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1803a04be:
  plVar5 = (longlong *)plVar6[1];
  plVar3 = plVar5;
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    do {
      plVar5 = plVar3;
      cVar1 = FUN_180023470(plVar5 + 4,param_4);
      if (-1 < cVar1) {
        plVar4 = plVar5;
        plVar6 = plVar5;
      }
      else {
        plVar4 = plVar5 + 2;
      }
      uVar7 = (uint)(-1 < cVar1);
      plVar3 = (longlong *)*plVar4;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  else {
    uVar7 = 0;
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
     (cVar1 = FUN_180023470(param_4,plVar6 + 4), -1 < cVar1)) {
    *param_2 = (longlong)plVar6;
    *(undefined4 *)(param_2 + 1) = 2;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_2;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  *param_2 = (longlong)plVar5;
  *(uint *)(param_2 + 1) = uVar7;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



/* ===== 1803a05b0 FUN_1803a05b0 ===== */

ulonglong FUN_1803a05b0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((param_1 - 0x10000U < 0x7ffffffeffff) && (param_2 != 0)) {
    uVar1 = 0;
    while ((uVar1 + 1 < 0x80 && (*(char *)(uVar1 + param_1) != '\0'))) {
      *(char *)(uVar1 + param_2) = *(char *)(uVar1 + param_1);
      uVar1 = uVar1 + 1;
    }
    *(undefined1 *)(uVar1 + param_2) = 0;
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  else {
    uVar1 = param_1 - 0x10000U & 0xffffffffffffff00;
  }
  return uVar1;
}



/* ===== 1803a0620 FUN_1803a0620 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1803a0620(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if ((*param_1 == 0) || (DAT_180ca0a08 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
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
    local_98[0x20] = '\0';
    local_98[0x21] = '\0';
    local_98[0x22] = '\0';
    local_98[0x23] = '\0';
    local_98[0x24] = '\0';
    local_98[0x25] = '\0';
    local_98[0x26] = '\0';
    local_98[0x27] = '\0';
    local_98[0x28] = '\0';
    local_98[0x29] = '\0';
    local_98[0x2a] = '\0';
    local_98[0x2b] = '\0';
    local_98[0x2c] = '\0';
    local_98[0x2d] = '\0';
    local_98[0x2e] = '\0';
    local_98[0x2f] = '\0';
    local_98[0x30] = '\0';
    local_98[0x31] = '\0';
    local_98[0x32] = '\0';
    local_98[0x33] = '\0';
    local_98[0x34] = '\0';
    local_98[0x35] = '\0';
    local_98[0x36] = '\0';
    local_98[0x37] = '\0';
    local_98[0x38] = '\0';
    local_98[0x39] = '\0';
    local_98[0x3a] = '\0';
    local_98[0x3b] = '\0';
    local_98[0x3c] = '\0';
    local_98[0x3d] = '\0';
    local_98[0x3e] = '\0';
    local_98[0x3f] = '\0';
    local_98[0x40] = '\0';
    local_98[0x41] = '\0';
    local_98[0x42] = '\0';
    local_98[0x43] = '\0';
    local_98[0x44] = '\0';
    local_98[0x45] = '\0';
    local_98[0x46] = '\0';
    local_98[0x47] = '\0';
    local_98[0x48] = '\0';
    local_98[0x49] = '\0';
    local_98[0x4a] = '\0';
    local_98[0x4b] = '\0';
    local_98[0x4c] = '\0';
    local_98[0x4d] = '\0';
    local_98[0x4e] = '\0';
    local_98[0x4f] = '\0';
    local_98[0x50] = '\0';
    local_98[0x51] = '\0';
    local_98[0x52] = '\0';
    local_98[0x53] = '\0';
    local_98[0x54] = '\0';
    local_98[0x55] = '\0';
    local_98[0x56] = '\0';
    local_98[0x57] = '\0';
    local_98[0x58] = '\0';
    local_98[0x59] = '\0';
    local_98[0x5a] = '\0';
    local_98[0x5b] = '\0';
    local_98[0x5c] = '\0';
    local_98[0x5d] = '\0';
    local_98[0x5e] = '\0';
    local_98[0x5f] = '\0';
    local_98[0x60] = '\0';
    local_98[0x61] = '\0';
    local_98[0x62] = '\0';
    local_98[99] = '\0';
    local_98[100] = '\0';
    local_98[0x65] = '\0';
    local_98[0x66] = '\0';
    local_98[0x67] = '\0';
    local_98[0x68] = '\0';
    local_98[0x69] = '\0';
    local_98[0x6a] = '\0';
    local_98[0x6b] = '\0';
    local_98[0x6c] = '\0';
    local_98[0x6d] = '\0';
    local_98[0x6e] = '\0';
    local_98[0x6f] = '\0';
    local_98[0x70] = '\0';
    local_98[0x71] = '\0';
    local_98[0x72] = '\0';
    local_98[0x73] = '\0';
    local_98[0x74] = '\0';
    local_98[0x75] = '\0';
    local_98[0x76] = '\0';
    local_98[0x77] = '\0';
    local_98[0x78] = '\0';
    local_98[0x79] = '\0';
    local_98[0x7a] = '\0';
    local_98[0x7b] = '\0';
    local_98[0x7c] = '\0';
    local_98[0x7d] = '\0';
    local_98[0x7e] = '\0';
    local_98[0x7f] = '\0';
    local_a0 = param_2;
    uVar2 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca0a08);
    cVar1 = FUN_1803a05b0(uVar2,local_98);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if (cVar1 != '\0') {
      param_2[3] = 0;
      sVar3 = strlen(local_98);
      FUN_1800133a0(param_2,local_98,sVar3);
      return param_2;
    }
  }
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_2;
}



/* ===== 1803a0710 FUN_1803a0710 ===== */

longlong FUN_1803a0710(longlong *param_1)

{
  longlong lVar1;
  
  if ((((*param_1 == 0) || (lVar1 = FUN_18000f3a0((ulonglong)DAT_180961968 + *param_1), lVar1 == 0))
      || (lVar1 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar1), lVar1 == 0)) ||
     ((lVar1 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar1), lVar1 == 0 ||
      (lVar1 = FUN_18000f3a0((ulonglong)DAT_180961974 + lVar1), 0x7ffffffefffe < lVar1 - 0x10000U)))
     ) {
    return 0;
  }
  return lVar1;
}



/* ===== 1803a0780 FUN_1803a0780 ===== */

undefined8 * FUN_1803a0780(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  if ((*param_1 != 0) && (DAT_180ca09f8 != 0)) {
    lVar2 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca09f8);
    if ((lVar2 != 0) && (DAT_180ca0950 != 0)) {
      puVar3 = (undefined8 *)FUN_1800111b0(local_18,lVar2 + (ulonglong)DAT_180ca0950);
      uVar1 = *(undefined4 *)(puVar3 + 1);
      *param_2 = *puVar3;
      *(undefined4 *)(param_2 + 1) = uVar1;
      return param_2;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



/* ===== 1803a07f0 FUN_1803a07f0 ===== */

undefined8 FUN_1803a07f0(longlong *param_1,int param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_38 [24];
  
  if ((((-1 < param_2) && (*param_1 != 0)) && (DAT_180ca09f8 != 0)) &&
     (((lVar4 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca09f8), uVar2 = DAT_180ca0964,
       lVar4 != 0 && (DAT_180ca0964 != 0)) &&
      ((DAT_180ca0968 != 0 &&
       (lVar5 = FUN_18000f3a0(lVar4 + (ulonglong)DAT_180ca0968 + (ulonglong)DAT_180ca0964),
       lVar5 != 0)))))) {
    if (((DAT_180ca096c != 0) &&
        (iVar3 = FUN_180011200(lVar4 + (ulonglong)DAT_180ca096c + (ulonglong)uVar2), 0 < iVar3)) &&
       (iVar3 <= param_2)) {
      return 0;
    }
    puVar6 = (undefined8 *)FUN_1800111b0(local_38,(longlong)param_2 * 0x20 + lVar5);
    fVar1 = *(float *)(puVar6 + 1);
    *(undefined8 *)param_3 = *puVar6;
    param_3[2] = fVar1;
    if (((*param_3 != 0.0) || (param_3[1] != 0.0)) || (param_3[2] != 0.0)) {
      return 1;
    }
  }
  return 0;
}



/* ===== 1803a08e0 FUN_1803a08e0 ===== */

undefined8 FUN_1803a08e0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [32];
  
  if (((*param_1 != 0) && (DAT_180ca0a0c != 0)) && (DAT_180ca0a10 != 0)) {
    lVar2 = FUN_18000f3a0(*param_1 + (ulonglong)DAT_180ca0a0c);
    if (lVar2 != 0) {
      uVar1 = FUN_180011200((ulonglong)DAT_180ca0a10 + lVar2);
      puVar3 = (undefined8 *)FUN_1803a0940(local_res8,uVar1);
      return *puVar3;
    }
  }
  return 0;
}



/* ===== 1803a0940 FUN_1803a0940 ===== */

longlong * FUN_1803a0940(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((uint)param_2 - 1 < 0xfffffffe) {
    lVar1 = FUN_18000f3a0(DAT_1809619d0);
    if (lVar1 != 0) {
      lVar1 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                            lVar1 + (ulonglong)(((uint)(param_2 >> 9) & 0x3f) * DAT_180961944));
      if (lVar1 - 0x10000U < 0xfffffffffffeffff) {
        lVar2 = FUN_18000f3a0((ulonglong)(((uint)param_2 & 0x1ff) * DAT_180961948) + lVar1);
        lVar1 = 0;
        if (lVar2 - 0x10000U < 0xfffffffffffeffff) {
          lVar1 = lVar2;
        }
        *param_1 = lVar1;
        return param_1;
      }
    }
  }
  *param_1 = 0;
  return param_1;
}



/* ===== 1803a09f0 FUN_1803a09f0 ===== */

undefined8 * FUN_1803a09f0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong local_res18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_18000f3a0(DAT_1809619d0);
  if (lVar1 != 0) {
    iVar4 = 0;
    do {
      lVar2 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                            (ulonglong)(uint)(iVar4 * DAT_180961944) + lVar1);
      if (lVar2 - 0x10000U < 0xfffffffffffeffff) {
        iVar3 = 0;
        do {
          local_res18[0] = FUN_18000f3a0((ulonglong)(uint)(iVar3 * DAT_180961948) + lVar2);
          if (local_res18[0] - 0x10000U < 0xfffffffffffeffff) {
            FUN_1800cd6b0(param_1,local_res18);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x200);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40);
  }
  return param_1;
}



/* ===== 1803a0ac0 FUN_1803a0ac0 ===== */

longlong * FUN_1803a0ac0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (-1 < (int)(uint)param_2) {
    lVar1 = FUN_18000f3a0(DAT_1809619d0);
    if (lVar1 != 0) {
      lVar1 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                            lVar1 + (ulonglong)(((uint)(param_2 >> 9) & 0x7fffff) * DAT_180961944));
      if (lVar1 - 0x10000U < 0xfffffffffffeffff) {
        lVar2 = FUN_18000f3a0((ulonglong)(((uint)param_2 & 0x1ff) * DAT_180961948) + lVar1);
        lVar1 = 0;
        if (lVar2 - 0x10000U < 0xfffffffffffeffff) {
          lVar1 = lVar2;
        }
        *param_1 = lVar1;
        return param_1;
      }
    }
  }
  *param_1 = 0;
  return param_1;
}



/* ===== 1803a0b60 FUN_1803a0b60 ===== */

longlong * FUN_1803a0b60(longlong *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = DAT_180961948;
  iVar1 = DAT_180961944;
  uVar6 = (ulonglong)DAT_180ca0a04;
  if (DAT_180ca0a04 != 0) {
    uVar5 = 1;
    uVar7 = (ulonglong)DAT_180961940;
    do {
      lVar4 = FUN_18000f3a0(DAT_1809619d0);
      if ((((lVar4 != 0) &&
           (lVar4 = FUN_18000f3a0((ulonglong)((uVar5 >> 9) * iVar1) + lVar4 + uVar7),
           lVar4 - 0x10000U < 0xfffffffffffeffff)) &&
          (lVar4 = FUN_18000f3a0((ulonglong)((uVar5 & 0x1ff) * iVar2) + lVar4),
          lVar4 - 0x10000U < 0xfffffffffffeffff)) &&
         (cVar3 = FUN_180011220(lVar4 + uVar6), cVar3 != '\0')) {
        *param_1 = lVar4;
        return param_1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x41);
  }
  if (DAT_1809619d8 == 0) {
    *param_1 = 0;
  }
  else {
    lVar4 = FUN_18000f3a0();
    *param_1 = lVar4;
  }
  return param_1;
}



/* ===== 1803a0c50 FUN_1803a0c50 ===== */

longlong FUN_1803a0c50(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char *_Str1;
  longlong lVar5;
  longlong local_res8;
  
  _Str1 = (char *)0x0;
  if (*param_1 == 0) {
    lVar5 = 0;
  }
  else {
    if (DAT_180ca09fc == 0) {
      lVar5 = 0;
    }
    else {
      uVar1 = FUN_180011200((ulonglong)DAT_180ca09fc + *param_1);
      plVar3 = (longlong *)FUN_1803a0940(&local_res8,uVar1);
      lVar5 = *plVar3;
    }
    if ((*param_1 != 0) && (DAT_180ca0a00 != 0)) {
      uVar1 = FUN_180011200(*param_1 + (ulonglong)DAT_180ca0a00);
      FUN_1803a0940(&local_res8,uVar1);
      if ((local_res8 != 0) &&
         ((((lVar4 = FUN_18000f3a0((ulonglong)DAT_180961968 + local_res8), lVar4 != 0 &&
            (lVar4 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar4), lVar4 != 0)) &&
           (lVar4 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar4), lVar4 != 0)) &&
          (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar4),
          (char *)0x7ffffffefffe < _Str1 + -0x10000)))) {
        _Str1 = (char *)0x0;
      }
      if ((((local_res8 != 0) && (local_res8 != lVar5)) &&
          ((_Str1 != (char *)0x0 &&
           ((iVar2 = strcmp(_Str1,"C_CSPlayerPawn"), iVar2 == 0 && (local_res8 != 0)))))) &&
         (DAT_180ca09f0 != 0)) {
        iVar2 = FUN_180011200(local_res8 + (ulonglong)DAT_180ca09f0);
        if (iVar2 - 1U < 1000) {
          lVar5 = local_res8;
        }
        return lVar5;
      }
    }
  }
  return lVar5;
}



/* ===== 1803a0db0 FUN_1803a0db0 ===== */

longlong * FUN_1803a0db0(longlong *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 local_res10 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_48 = 1;
  plVar3 = (longlong *)FUN_18000fb70(0x400);
  FUN_180540530(plVar3,*param_1,param_1[1] - *param_1);
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_1803a0e3e:
    *param_1 = (longlong)plVar3;
    param_1[1] = (longlong)plVar3;
    param_1[2] = (longlong)(plVar3 + 0x80);
    FUN_1803a1250(&local_30);
    puVar8 = auStack_68;
    puVar9 = auStack_68;
    plVar3 = local_30;
    if (local_30 != local_28) {
      do {
        if ((*plVar3 != 0) && (DAT_180ca09fc != 0)) {
          uVar2 = FUN_180011200((ulonglong)DAT_180ca09fc + *plVar3);
          plVar5 = (longlong *)FUN_1803a0940(local_res10,uVar2);
          lVar4 = *plVar5;
          if ((lVar4 != 0) &&
             ((DAT_180ca09f8 != 0 &&
              (lVar6 = FUN_18000f3a0(lVar4 + (ulonglong)DAT_180ca09f8), lVar6 != 0)))) {
            local_40 = *plVar3;
            local_38 = lVar4;
            FUN_18025d4d0(param_1,&local_40);
          }
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != local_28);
    }
    if (local_30 == (longlong *)0x0) {
      return param_1;
    }
    plVar5 = local_30;
    if (0xfff < (ulonglong)((local_20 - (longlong)local_30 >> 3) * 8)) {
      plVar5 = (longlong *)local_30[-1];
      plVar3 = (longlong *)((longlong)local_30 + (-8 - (longlong)plVar5));
      if (plVar3 <= &DAT_0000001f) goto LAB_1803a0f21;
      goto LAB_1803a0f17;
    }
  }
  else {
    uVar7 = param_1[2] - lVar4 & 0xfffffffffffffff0;
    if (uVar7 < 0x1000) {
LAB_1803a0e36:
      thunk_FUN_1803d64e0(lVar4,uVar7);
      goto LAB_1803a0e3e;
    }
    if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
      uVar7 = uVar7 + 0x27;
      lVar4 = *(longlong *)(lVar4 + -8);
      goto LAB_1803a0e36;
    }
LAB_1803a0f17:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_60;
    plVar5 = plVar3;
  }
  puVar9 = puVar8;
LAB_1803a0f21:
  *(undefined8 *)(puVar9 + -8) = 0x1803a0f26;
  thunk_FUN_1803d64e0(plVar5);
  return param_1;
}



/* ===== 1803a0f40 FUN_1803a0f40 ===== */

void FUN_1803a0f40(void)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 local_res8 [4];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined1 local_28 [40];
  
  FUN_1803a0b60(local_res8);
  DAT_181108a00 = local_res8[0];
  DAT_1811089f8 = FUN_1803a0c50(local_res8);
  DAT_180cd1304 = 1;
  FUN_1803a0db0(local_28);
  iVar3 = FUN_1804e4d70(&DAT_1809f9d40);
  puVar5 = auStack_48;
  puVar6 = auStack_48;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9d8c == 0x7fffffff) {
    DAT_1809f9d8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar7 = auStack_48;
  if (DAT_181108a10 == 0) goto LAB_1803a0feb;
  lVar4 = DAT_181108a10;
  if ((DAT_181108a20 - DAT_181108a10 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1803a0fe3:
    puVar6 = puVar5;
  }
  else {
    lVar4 = *(longlong *)(DAT_181108a10 + -8);
    if (0x1f < (DAT_181108a10 - lVar4) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar5 = auStack_40;
      goto LAB_1803a0fe3;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x1803a0feb;
  thunk_FUN_1803d64e0(lVar4);
  puVar7 = puVar6;
LAB_1803a0feb:
  DAT_181108a10 = *(longlong *)(puVar7 + 0x20);
  DAT_181108a18 = *(undefined8 *)(puVar7 + 0x28);
  DAT_181108a20 = *(longlong *)(puVar7 + 0x30);
  *(undefined8 *)(puVar7 + 0x20) = 0;
  *(undefined8 *)(puVar7 + 0x28) = 0;
  *(undefined8 *)(puVar7 + 0x30) = 0;
  DAT_180cd127f = 1;
  *(undefined8 *)(puVar7 + -8) = 0x1803a102a;
  FUN_1804e4e90(&DAT_1809f9d40);
  lVar4 = *(longlong *)(puVar7 + 0x20);
  if (lVar4 != 0) {
    if (0xfff < (*(longlong *)(puVar7 + 0x30) - lVar4 & 0xfffffffffffffff0U)) {
      lVar1 = *(longlong *)(lVar4 + -8);
      if ((lVar4 - lVar1) - 8U < 0x20) {
        *(undefined8 *)(puVar7 + -8) = 0x1803a1064;
        thunk_FUN_1803d64e0(lVar1,(*(longlong *)(puVar7 + 0x30) - lVar4 & 0xfffffffffffffff0U) +
                                  0x27);
        return;
      }
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar7 = puVar7 + 8;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1803a1078;
    thunk_FUN_1803d64e0(lVar4);
  }
  return;
}



/* ===== 1803a10a0 FUN_1803a10a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1803a10a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  char *_Str1;
  undefined4 extraout_var;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  UVar4 = GetTickCount64();
  iVar2 = DAT_180961948;
  iVar1 = DAT_180961944;
  if (UVar4 - _DAT_181108a08 < 500) {
    return (ulonglong)DAT_180cd127e;
  }
  uVar6 = 0;
  uVar7 = (ulonglong)DAT_180961968;
  uVar8 = (ulonglong)DAT_18096196c;
  uVar9 = (ulonglong)DAT_180961970;
  uVar10 = (ulonglong)DAT_180961940;
  uVar11 = (ulonglong)DAT_180961974;
  DAT_180cd127e = 0;
  _DAT_181108a08 = UVar4;
  do {
    lVar5 = FUN_18000f3a0(DAT_1809619d0);
    _Str1 = (char *)0x0;
    if (((lVar5 != 0) &&
        (_Str1 = (char *)FUN_18000f3a0((ulonglong)((uVar6 >> 9) * iVar1) + lVar5 + uVar10),
        _Str1 + -0x10000 < (char *)0xfffffffffffeffff)) &&
       (_Str1 = (char *)FUN_18000f3a0(_Str1 + (uVar6 & 0x1ff) * iVar2),
       _Str1 + -0x10000 < (char *)0xfffffffffffeffff)) {
      lVar5 = FUN_18000f3a0(_Str1 + uVar7);
      _Str1 = (char *)0x0;
      if (lVar5 != 0) {
        lVar5 = FUN_18000f3a0(lVar5 + uVar8);
        _Str1 = (char *)0x0;
        if (lVar5 != 0) {
          lVar5 = FUN_18000f3a0(lVar5 + uVar9);
          _Str1 = (char *)0x0;
          if ((lVar5 != 0) &&
             (_Str1 = (char *)FUN_18000f3a0(lVar5 + uVar11),
             _Str1 + -0x10000 < (char *)0x7ffffffeffff)) {
            iVar3 = strcmp(_Str1,"C_CSGameRulesProxy");
            _Str1 = (char *)CONCAT44(extraout_var,iVar3);
            if (iVar3 == 0) {
              DAT_180cd127e = 1;
              return CONCAT71((int7)((ulonglong)_Str1 >> 8),1);
            }
          }
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x400);
  return (ulonglong)_Str1 & 0xffffffffffffff00;
}



/* ===== 1803a1250 FUN_1803a1250 ===== */

ulonglong * FUN_1803a1250(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined4 local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = 1;
  local_18 = 1;
  uVar2 = FUN_18000fb70(0x200);
  FUN_180540530(uVar2,*param_1,param_1[1] - *param_1);
  puVar8 = auStack_38;
  uVar6 = *param_1;
  puVar9 = auStack_38;
  if (uVar6 != 0) {
    uVar5 = ((longlong)(param_1[2] - uVar6) >> 3) * 8;
    uVar3 = uVar6;
    if (0xfff < uVar5) {
      uVar3 = *(ulonglong *)(uVar6 - 8);
      uVar6 = (uVar6 - uVar3) - 8;
      if (uVar6 < 0x20) {
        uVar5 = uVar5 + 0x27;
        puVar8 = auStack_38;
      }
      else {
        uVar5 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar8 = auStack_30;
        uVar3 = uVar6;
      }
    }
    *(undefined8 *)(puVar8 + -8) = 0x1803a12f0;
    thunk_FUN_1803d64e0(uVar3,uVar5);
    puVar9 = puVar8;
  }
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[2] = uVar2 + 0x200;
  do {
    *(undefined8 *)(puVar9 + -8) = 0x1803a130e;
    lVar4 = FUN_18000f3a0(DAT_1809619d0);
    if (lVar4 != 0) {
      *(undefined8 *)(puVar9 + -8) = 0x1803a1330;
      lVar4 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                            lVar4 + (ulonglong)((uVar7 >> 9) * DAT_180961944));
      if (lVar4 - 0x10000U < 0xfffffffffffeffff) {
        *(undefined8 *)(puVar9 + -8) = 0x1803a1357;
        lVar4 = FUN_18000f3a0((ulonglong)((uVar7 & 0x1ff) * DAT_180961948) + lVar4);
        if (lVar4 - 0x10000U < 0xfffffffffffeffff) {
          *(longlong *)(puVar9 + 0x48) = lVar4;
          *(undefined8 *)(puVar9 + -8) = 0x1803a1379;
          FUN_1800cd6b0(param_1,puVar9 + 0x48);
        }
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x41);
  return param_1;
}



/* ===== 1803a13a0 FUN_1803a13a0 ===== */

longlong * FUN_1803a13a0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  iVar3 = FUN_1804e4d70(&DAT_1809f9d40);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9d8c == 0x7fffffff) {
    DAT_1809f9d8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd127f != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (DAT_181108a18 - DAT_181108a10 != 0) {
      uVar5 = DAT_181108a18 - DAT_181108a10 >> 4;
      if (0xfffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      lVar6 = uVar5 * 0x10;
      lVar4 = FUN_18000fb70(lVar6);
      *param_1 = lVar4;
      param_1[1] = lVar4;
      param_1[2] = lVar6 + lVar4;
      uVar5 = DAT_181108a18 - DAT_181108a10;
      FUN_180540530(lVar4,DAT_181108a10,uVar5);
      param_1[1] = (uVar5 & 0xfffffffffffffff0) + lVar4;
    }
    FUN_1804e4e90(&DAT_1809f9d40);
    return param_1;
  }
  FUN_1804e4e90(&DAT_1809f9d40);
  FUN_1803a0db0(&local_40);
  iVar3 = FUN_1804e4d70(&DAT_1809f9d40);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f9d8c == 0x7fffffff) {
    DAT_1809f9d8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd127f == '\0') {
    FUN_1803a15a0();
    DAT_180cd127f = '\x01';
  }
  lVar2 = local_30;
  lVar6 = local_38;
  lVar4 = local_40;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  *param_1 = lVar4;
  param_1[1] = lVar6;
  param_1[2] = lVar2;
  FUN_1804e4e90(&DAT_1809f9d40);
  puVar7 = auStack_68;
  puVar8 = auStack_68;
  if (local_40 == 0) {
    return param_1;
  }
  lVar4 = local_40;
  if (0xfff < (local_30 - local_40 & 0xfffffffffffffff0U)) {
    lVar4 = *(longlong *)(local_40 + -8);
    if ((local_40 - lVar4) - 8U < 0x20) goto LAB_1803a1544;
    pcVar1 = (code *)swi(0x29);
    lVar4 = (*pcVar1)(5);
    puVar7 = auStack_60;
  }
  puVar8 = puVar7;
LAB_1803a1544:
  *(undefined8 *)(puVar8 + -8) = 0x1803a1549;
  thunk_FUN_1803d64e0(lVar4);
  return param_1;
}



/* ===== 1803a15a0 FUN_1803a15a0 ===== */

void FUN_1803a15a0(undefined4 param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined8 unaff_RBP;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar4 = auStack_48;
  uVar3 = DAT_181108a20 - DAT_181108a10 >> 4;
  lVar2 = DAT_181108a10;
  if (param_3 <= uVar3) {
LAB_1803a16a6:
    *(undefined8 *)(puVar4 + 0x50) = unaff_RBP;
    uVar3 = DAT_181108a18 - lVar2 >> 4;
    if (uVar3 < param_3) {
      *(undefined8 *)(puVar4 + -8) = 0x1803a16d0;
      FUN_180540530(param_1,param_2,uVar3 * 0x10);
      lVar2 = DAT_181108a18;
      lVar5 = (param_3 - uVar3) * 0x10;
      *(undefined8 *)(puVar4 + -8) = 0x1803a16ed;
      FUN_180540530(DAT_181108a18,uVar3 * 0x10 + param_2,lVar5);
      DAT_181108a18 = lVar5 + lVar2;
      return;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1803a1717;
    FUN_180540530(param_1,param_2,param_3 * 0x10);
    DAT_181108a18 = param_3 * 0x10 + lVar2;
    return;
  }
  if (0xfffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar6 = 0xfffffffffffffff;
  }
  else {
    uVar6 = (uVar3 >> 1) + uVar3;
    if (uVar6 < param_3) {
      uVar6 = param_3;
    }
  }
  if (DAT_181108a10 != 0) {
    uVar3 = uVar3 * 0x10;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(DAT_181108a10 + -8);
      if (0x1f < (DAT_181108a10 - lVar2) - 8U) {
        lVar2 = 5;
        pcVar1 = (code *)swi(0x29);
        param_1 = (*pcVar1)();
        puVar4 = auStack_40;
        goto LAB_1803a16a6;
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar2,uVar3);
    DAT_181108a20 = 0;
    DAT_181108a10 = 0;
    DAT_181108a18 = 0;
  }
  if (0xfffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar2 = FUN_18000fb70(uVar6 * 0x10);
  DAT_181108a20 = uVar6 * 0x10 + lVar2;
  DAT_181108a10 = lVar2;
  DAT_181108a18 = lVar2;
  FUN_180540530(lVar2,param_2,param_3 * 0x10);
  DAT_181108a18 = param_3 * 0x10 + lVar2;
  return;
}



/* ===== 1803a1740 FUN_1803a1740 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1803a1740(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong in_RAX;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = param_1[0xe];
  fVar1 = param_1[0xd];
  fVar2 = param_1[6];
  fVar3 = param_1[5];
  fVar9 = fVar10 * fVar3 - fVar1 * fVar2;
  fVar8 = (fVar9 * *param_1 - (fVar10 * param_1[4] - fVar2 * param_1[0xc]) * param_1[1]) +
          (fVar1 * param_1[4] - fVar3 * param_1[0xc]) * param_1[2];
  if (DAT_1808abf68 <= (float)((uint)fVar8 & _DAT_1808ade90)) {
    fVar5 = (float)((uint)param_1[3] ^ DAT_1808adec0);
    fVar6 = (float)((uint)param_1[0xf] ^ DAT_1808adec0);
    fVar7 = (float)((uint)param_1[7] ^ DAT_1808adec0);
    fVar10 = ((fVar9 * fVar5 - (fVar10 * fVar7 - fVar2 * fVar6) * param_1[1]) +
             (fVar1 * fVar7 - fVar3 * fVar6) * param_1[2]) / fVar8;
    *param_2 = fVar10;
    uVar4 = (uint)fVar10 & 0x7f800000;
    in_RAX = (ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar4 != 0x7f800000);
    fVar10 = (((param_1[0xe] * fVar7 - param_1[6] * fVar6) * *param_1 -
              (param_1[0xe] * param_1[4] - param_1[6] * param_1[0xc]) * fVar5) +
             (param_1[4] * fVar6 - param_1[0xc] * fVar7) * param_1[2]) / fVar8;
    param_2[1] = fVar10;
    fVar8 = (((param_1[5] * fVar6 - param_1[0xd] * fVar7) * *param_1 -
             (param_1[4] * fVar6 - param_1[0xc] * fVar7) * param_1[1]) +
            (param_1[0xd] * param_1[4] - param_1[5] * param_1[0xc]) * fVar5) / fVar8;
    param_2[2] = fVar8;
    if (((uVar4 != 0x7f800000) &&
        (uVar4 = (uint)fVar10 & 0x7f800000,
        in_RAX = (ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar4 != 0x7f800000), uVar4 != 0x7f800000))
       && (uVar4 = (uint)fVar8 & 0x7f800000,
          in_RAX = (ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar4 != 0x7f800000), uVar4 != 0x7f800000)
       ) {
      return in_RAX;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1803a19a0 FUN_1803a19a0 ===== */

void FUN_1803a19a0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_1 * DAT_1808ac014;
  fVar7 = param_1[1] * DAT_1808ac014;
  fVar8 = param_1[2] * DAT_1808ac014;
  fVar2 = (float)FUN_180517790(fVar6);
  fVar6 = (float)FUN_180517200(fVar6);
  fVar3 = (float)FUN_180517790(fVar7);
  fVar7 = (float)FUN_180517200(fVar7);
  fVar4 = (float)FUN_180517790(fVar8);
  fVar8 = (float)FUN_180517200(fVar8);
  uVar1 = DAT_1808adec0;
  fVar5 = (float)((uint)fVar4 ^ DAT_1808adec0);
  *param_2 = fVar7 * fVar6;
  param_2[1] = fVar3 * fVar6;
  param_2[2] = (float)((uint)fVar2 ^ uVar1);
  *param_3 = fVar8 * fVar3 - fVar4 * fVar2 * fVar7;
  param_3[1] = fVar5 * fVar2 * fVar3 - fVar8 * fVar7;
  param_3[2] = fVar5 * fVar6;
  *param_4 = fVar8 * fVar2 * fVar7 + fVar4 * fVar3;
  param_4[1] = fVar8 * fVar2 * fVar3 - fVar4 * fVar7;
  param_4[2] = fVar8 * fVar6;
  return;
}



/* ===== 1803a1b30 FUN_1803a1b30 ===== */

float * FUN_1803a1b30(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_2;
  fVar3 = (float)*(undefined8 *)(param_2 + 1);
  fVar4 = (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar2 = fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18051af10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (fVar2 < DAT_1808abf8c) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return param_1;
  }
  fVar2 = DAT_1808ac34c / fVar2;
  *param_1 = fVar1 * fVar2;
  *(ulonglong *)(param_1 + 1) = CONCAT44(fVar4 * fVar2,fVar3 * fVar2);
  return param_1;
}



/* ===== 1803a1bf0 FUN_1803a1bf0 ===== */

undefined1 FUN_1803a1bf0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar8 = fVar2 * param_1[0xc] + fVar1 * param_1[0xd] + fVar3 * param_1[0xe] + param_1[0xf];
  if (fVar8 < DAT_1808ac000) {
    return 0;
  }
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[4];
  param_5 = param_5 * DAT_1808ac1f4;
  fVar8 = DAT_1808ac34c / fVar8;
  fVar7 = param_1[7];
  *param_3 = (fVar1 * param_1[1] + fVar2 * *param_1 + fVar3 * param_1[2] + param_1[3]) *
             param_4 * DAT_1808ac1f4 * fVar8 + param_4 * DAT_1808ac1f4;
  param_3[1] = param_5 - param_5 * (fVar2 * fVar6 + fVar1 * fVar4 + fVar3 * fVar5 + fVar7) * fVar8;
  return 1;
}



/* ===== 1803a1d00 FUN_1803a1d00 ===== */

longlong FUN_1803a1d00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = FUN_18000f3a0((ulonglong)DAT_1809618b8 + param_1);
  if ((lVar2 == 0) || (lVar2 = FUN_18000f3a0(lVar2), lVar2 == 0)) {
    return 0;
  }
  iVar1 = FUN_180011200((ulonglong)DAT_1809618bc + lVar2);
  if (iVar1 - 1U < 0x20) {
    uVar3 = FUN_180011200((ulonglong)DAT_1809618c0 + lVar2);
    if ((uVar3 & 0x7fffffff) == 0) {
      lVar4 = (ulonglong)DAT_1809618c4 + lVar2;
    }
    else {
      lVar4 = FUN_18000f3a0((ulonglong)DAT_1809618c4 + lVar2);
    }
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  lVar2 = FUN_18000f3a0((ulonglong)DAT_1809618c8 + lVar2);
  return lVar2;
}



