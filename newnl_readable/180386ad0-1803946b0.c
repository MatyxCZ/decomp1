/* ===== 180386ad0 FUN_180386ad0 ===== */

undefined4 FUN_180386ad0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_res20 [2];
  
  if (DAT_180962088 == (code *)0x0) {
    return 0xffffffff;
  }
  local_res20[0] = 0xffffffff;
  (*DAT_180962088)(param_1,local_res20,param_2,param_3,0,0,0,0);
  return local_res20[0];
}



/* ===== 180386b30 FUN_180386b30 ===== */

void FUN_180386b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_180962098 == (code *)0x0) {
    return;
  }
  (*DAT_180962098)(0,param_2,0,param_4,0);
  return;
}



/* ===== 180386b60 FUN_180386b60 ===== */

ulonglong FUN_180386b60(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong in_RAX;
  uint7 uVar3;
  int iVar4;
  
  if ((0 < *(int *)(param_1 + 0x98)) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    iVar4 = 0;
    while (iVar4 < *(int *)(param_1 + 0x98)) {
      in_RAX = (ulonglong)iVar4;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + in_RAX * 8);
      if (lVar2 == 0) {
        iVar4 = iVar4 + 1;
      }
      else {
        uVar1 = *(uint *)(lVar2 + 0x38);
        in_RAX = (ulonglong)uVar1;
        if (uVar1 == 0xffffffff) {
          iVar4 = iVar4 + 1;
        }
        else {
          if ((uVar1 == param_2) && (*(longlong *)(lVar2 + 0x10) != 0)) {
            uVar3 = (uint7)(uint3)(uVar1 >> 8);
            if ((DAT_181108844 == 0) ||
               (*(longlong *)((ulonglong)DAT_181108844 + *(longlong *)(lVar2 + 0x10)) != 0)) {
              return CONCAT71(uVar3,1);
            }
            return (ulonglong)uVar3 << 8;
          }
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 180386be0 FUN_180386be0 ===== */

longlong FUN_180386be0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (((0 < *(int *)(param_1 + 0x98)) && (*(longlong *)(param_1 + 0xa0) != 0)) && (param_2 != -1)) {
    iVar2 = 0;
    while (iVar2 < *(int *)(param_1 + 0x98)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar2 * 8);
      if (lVar1 == 0) {
        iVar2 = iVar2 + 1;
      }
      else if ((*(int *)(lVar1 + 0x38) == -1) || (*(int *)(lVar1 + 0x38) != param_2)) {
        iVar2 = iVar2 + 1;
      }
      else {
        if (*(longlong *)(lVar1 + 0x10) != 0) {
          return *(longlong *)(lVar1 + 0x10);
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return 0;
}



/* ===== 180386c50 FUN_180386c50 ===== */

uint FUN_180386c50(longlong param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if ((param_1 == 0) || (param_2 == -1)) {
    return in_EAX & 0xffffff00;
  }
  if ((DAT_180cd110e == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181108844 = FUN_18038eaf0("CNewParticleEffect","m_pParticles");
    DAT_180cd110e = '\x01';
  }
  uVar1 = FUN_180386b60(param_1,param_2);
  return uVar1;
}



/* ===== 180386cc0 FUN_180386cc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180386cc0(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (((((DAT_18095d210 != '\0') && (DAT_180cd110d != '\0')) &&
       (lVar4 = (longlong)param_2, (&DAT_18095d224)[lVar4] != '\0')) &&
      ((DAT_180961a50 != 0 && (lVar3 = FUN_18000f3a0(), lVar3 - 0x10000U < 0x7ffffffeffff)))) &&
     ((cVar1 = FUN_1803a10a0(), cVar1 != '\0' &&
      ((DAT_180962080 != 0 && (lVar3 = FUN_18000f3a0(), lVar3 != 0)))))) {
    if ((&DAT_18095d27c)[lVar4] == '\0') {
      lVar4 = lVar4 * 0x10;
      pfVar6 = (float *)(&DAT_18095d22c + lVar4);
      pfVar5 = (float *)(&DAT_18095d230 + lVar4);
      pfVar7 = (float *)(lVar4 + 0x18095d234);
    }
    else {
      pfVar6 = (float *)&DAT_18095d214;
      pfVar5 = (float *)&DAT_18095d218;
      pfVar7 = (float *)&DAT_18095d21c;
    }
    local_68 = FUN_180273cc0(param_1,&DAT_1806d23e4);
    local_64 = FUN_180273cc0(param_1,&DAT_1806d23e8);
    local_60 = FUN_180273cc0(param_1,&DAT_1806d23ec);
    iVar2 = FUN_180386ad0(lVar3,"particles/neverlose/grenade_effect.vpcf",0);
    if (iVar2 != -1) {
      local_48 = local_68;
      local_44 = local_64;
      local_40 = local_60;
      local_3c = _DAT_1808ad2c0;
      uStack_34 = _UNK_1808ad2c8;
      local_2c = 0x3f800000;
      cVar1 = FUN_180206480(lVar3,iVar2,0,&local_68);
      if ((cVar1 != '\0') && (cVar1 = FUN_180386b30(lVar3,iVar2), cVar1 != '\0')) {
        local_58 = *pfVar6 * DAT_1808acb94;
        local_50 = *pfVar7 * DAT_1808acb94;
        local_54 = *pfVar5 * DAT_1808acb94;
        cVar1 = FUN_180206480(lVar3,iVar2,1,&local_58);
        if (cVar1 != '\0') {
          return;
        }
      }
      FUN_1802064e0(lVar3,iVar2);
    }
  }
  return;
}



/* ===== 180386f70 FUN_180386f70 ===== */

undefined4 FUN_180386f70(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = DAT_181108830;
  puVar3 = DAT_181108828;
  if (DAT_181108828 != DAT_181108830) {
    do {
      FUN_1802064e0(param_1,*puVar3);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
    if (DAT_181108828 != DAT_181108830) {
      DAT_181108830 = DAT_181108828;
    }
  }
  uVar2 = DAT_18110884c;
  LOCK();
  DAT_18110884c = 0;
  UNLOCK();
  return uVar2;
}



/* ===== 180386fe0 FUN_180386fe0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180386fe0(longlong param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res18 [2];
  float local_res20 [2];
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [4];
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  
  lVar6 = FUN_1800f1c60();
  fVar17 = 0.0;
  if ((((DAT_180962170 == 0) || (DAT_180961a38 == 0)) ||
      (lVar7 = FUN_180264580(), 0x7ffffffefffe < lVar7 - 0x10000U)) ||
     (fVar10 = (float)FUN_18000f3d0(lVar7 + 4), ((uint)fVar10 & 0x7f800000) == 0x7f800000)) {
    if (DAT_180ccf985 == '\0') {
      fVar10 = 0.0;
    }
    else {
      fVar10 = DAT_180cf9f4c;
    }
  }
  fVar10 = fVar10 * DAT_1808ac014;
  fVar11 = (float)FUN_180517790(fVar10);
  fVar10 = (float)FUN_180517200(fVar10);
  uVar5 = DAT_1808adec0;
  local_108 = 0;
  fVar20 = (float)((uint)fVar11 ^ DAT_1808adec0);
  local_100 = 0.0;
  local_f8 = 0;
  local_f0 = 0.0;
  if (param_3 == (float *)0x0) {
    local_e8 = 0.0;
    fStack_e4 = 0.0;
    local_e0 = 0.0;
    cVar1 = FUN_1803a1740(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&local_e8);
    if (cVar1 == '\0') {
      return;
    }
    FUN_180273880();
    if (DAT_180cfb2b0 == (code *)0x0) {
      uVar4 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      DAT_1809f3584 = uVar4 << 5 ^ uVar4;
      iVar2 = DAT_1809f3584 % 0x3e9 + 3000;
    }
    else {
      iVar2 = (*DAT_180cfb2b0)(3000,4000);
    }
    FUN_180273880();
    if (DAT_180cfb2b8 == (code *)0x0) {
      uVar4 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      DAT_1809f3584 = uVar4 << 5 ^ uVar4;
      fVar12 = ((float)(DAT_1809f3584 & 0xffff) * _DAT_1808acc54) / DAT_1808accac - DAT_1808acc4c;
    }
    else {
      fVar12 = (float)(*DAT_180cfb2b8)(DAT_1808ace90,DAT_1808acc4c);
    }
    FUN_180273880();
    if (DAT_180cfb2b0 == (code *)0x0) {
      uVar4 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      DAT_1809f3584 = uVar4 << 5 ^ uVar4;
      iVar3 = DAT_1809f3584 % 0x12d + 0x15e;
    }
    else {
      iVar3 = (*DAT_180cfb2b0)(0x15e,0x28a);
    }
    fVar14 = (float)iVar2;
    fVar18 = fVar12 * fVar20 + fVar14 * fVar10 + local_e8 + 0.0;
    fVar19 = fVar12 * fVar10 + fVar14 * fVar11 + fStack_e4 + 0.0;
    fVar12 = fVar12 * 0.0 + fVar14 * 0.0 + local_e0 + (float)iVar3;
    FUN_180273880();
    if (DAT_180cfb2b8 == (code *)0x0) {
      uVar4 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      DAT_1809f3584 = uVar4 << 5 ^ uVar4;
      fVar14 = ((float)(DAT_1809f3584 & 0xffff) * _DAT_1808ac14c) / DAT_1808accac + DAT_1808ac2b4;
    }
    else {
      fVar14 = (float)(*DAT_180cfb2b8)(DAT_1808ac2b4,DAT_1808ac3ac);
    }
    fVar14 = fVar14 * DAT_1808acc2c;
    FUN_180273880();
    if (DAT_180cfb2b0 == (code *)0x0) {
      uVar4 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      DAT_1809f3584 = uVar4 << 5 ^ uVar4;
      uVar4 = DAT_1809f3584 & 1;
    }
    else {
      uVar4 = (*DAT_180cfb2b0)(0,1);
    }
    if (uVar4 == 0) {
      fVar14 = (float)((uint)fVar14 ^ uVar5);
    }
    FUN_180273880();
    if (DAT_180cfb2b8 == (code *)0x0) {
      uVar5 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      DAT_1809f3584 = uVar5 << 5 ^ uVar5;
      fVar13 = ((float)(DAT_1809f3584 & 0xffff) * _DAT_1808ac11c) / DAT_1808accac + DAT_1808ac2cc;
    }
    else {
      fVar13 = (float)(*DAT_180cfb2b8)(DAT_1808ac2cc,DAT_1808ac394);
    }
    fVar13 = fVar13 * DAT_1808acc58;
    FUN_180273880();
    if (DAT_180cfb2b0 == (code *)0x0) {
      uVar5 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      DAT_1809f3584 = uVar5 << 5 ^ uVar5;
      iVar2 = DAT_1809f3584 % 0x4b1 - 600;
    }
    else {
      iVar2 = (*DAT_180cfb2b0)(0xfffffda8,600);
    }
    fVar16 = (float)iVar2;
    fVar15 = fVar16 * fVar10 + fVar14 * fVar20 + fVar18;
    local_f8 = CONCAT44(fVar19 - fVar14 * fVar10,fVar18 - fVar14 * fVar20);
    fVar10 = fVar16 * fVar11 + fVar14 * fVar10 + fVar19;
    local_f0 = fVar12 - fVar14 * 0.0;
    local_100 = fVar16 * 0.0 + fVar14 * 0.0 + fVar12 + fVar13;
  }
  else {
    FUN_180273880();
    fVar12 = DAT_1808accac;
    if (DAT_180cfb2b8 == (code *)0x0) {
      uVar5 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      DAT_1809f3584 = uVar5 << 5 ^ uVar5;
      fVar14 = ((float)(DAT_1809f3584 & 0xffff) * _DAT_1808ac11c) / DAT_1808accac + DAT_1808ac2cc;
    }
    else {
      fVar14 = (float)(*DAT_180cfb2b8)(DAT_1808ac2cc,DAT_1808ac394);
    }
    fVar14 = fVar14 * DAT_1808acc58;
    FUN_180273880();
    if (DAT_180cfb2b8 == (code *)0x0) {
      uVar5 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      DAT_1809f3584 = uVar5 << 5 ^ uVar5;
      fVar12 = ((float)(DAT_1809f3584 & 0xffff) * _DAT_1808acc54) / fVar12 - DAT_1808acc4c;
    }
    else {
      fVar12 = (float)(*DAT_180cfb2b8)(DAT_1808ace90,DAT_1808acc4c);
    }
    FUN_180273880();
    if (DAT_180cfb2b0 == (code *)0x0) {
      uVar5 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      DAT_1809f3584 = uVar5 << 5 ^ uVar5;
      iVar2 = DAT_1809f3584 % 0x4b1 - 600;
    }
    else {
      iVar2 = (*DAT_180cfb2b0)(0xfffffda8,600);
    }
    local_f8 = *(undefined8 *)param_3;
    local_f0 = param_3[2];
    fVar18 = (float)iVar2;
    fVar15 = fVar18 * fVar10 + fVar12 * fVar20 + *param_3;
    fVar10 = fVar18 * fVar11 + fVar12 * fVar10 + param_3[1];
    local_100 = fVar18 * 0.0 + fVar12 * 0.0 + param_3[2] + fVar14;
  }
  local_108 = CONCAT44(fVar10 + 0.0,fVar15 + 0.0);
  if (((DAT_180cd11fa != '\0') && (param_1 != 0)) &&
     (fVar10 = (float)FUN_180386ad0(param_1,"particles/neverlose/weather_thunder.vpcf",0),
     fVar10 != -NAN)) {
    FUN_180206480(param_1,fVar10,1,&local_f8);
    fVar12 = _UNK_1808ade34;
    fVar11 = _DAT_1808ade30;
    fVar20 = DAT_1808acb94;
    local_e8 = (float)*(undefined8 *)(lVar6 + 0x2d8) * _DAT_1808ade30;
    fStack_e4 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x2d8) >> 0x20) * _UNK_1808ade34;
    local_e0 = *(float *)(lVar6 + 0x2e0) * DAT_1808acb94;
    FUN_180206480(param_1,fVar10,2,&local_e8);
    local_e8 = (float)*(undefined8 *)(lVar6 + 0x2e8) * fVar11;
    fStack_e4 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x2e8) >> 0x20) * fVar12;
    local_e0 = *(float *)(lVar6 + 0x2f0) * fVar20;
    FUN_180206480(param_1,fVar10,3,&local_e8);
    local_e8 = *(float *)(lVar6 + 0x2e4) * fVar20;
    fStack_e4 = 0.0;
    local_e0 = 0.0;
    FUN_180206480(param_1,fVar10,4,&local_e8);
    local_e8 = *(float *)(lVar6 + 0x2f4) * fVar20;
    fStack_e4 = 0.0;
    local_e0 = 0.0;
    FUN_180206480(param_1,fVar10,5,&local_e8);
    FUN_180206480(param_1,fVar10,0,&local_108);
    fVar11 = *(float *)(lVar6 + 0x2fc);
    local_res20[0] = 5.0;
    local_res18[0] = 0.3;
    pfVar9 = local_res18;
    if (DAT_1808ac154 <= fVar11) {
      pfVar9 = (float *)(lVar6 + 0x2fc);
    }
    pfVar8 = local_res20;
    if (fVar11 <= DAT_1808ac750) {
      pfVar8 = pfVar9;
    }
    fVar11 = *pfVar8;
    local_e8 = fVar10;
    if ((DAT_180961a50 != 0) && (lVar7 = FUN_18000f3a0(), lVar7 - 0x10000U < 0x7ffffffeffff)) {
      fVar17 = (float)FUN_18000f3d0(lVar7 + 0x30);
    }
    fStack_e4 = fVar17 + fVar11;
    local_e0 = *(float *)(lVar6 + 0x2e4) * fVar20;
    local_dc = *(float *)(lVar6 + 0x2f4) * fVar20;
    FUN_180388600(local_e0,&local_e8);
    LOCK();
    DAT_18110884c = (undefined4)(DAT_181108830 - DAT_181108828 >> 4);
    UNLOCK();
    FUN_180273880();
    if (DAT_180cfb2b0 == (code *)0x0) {
      uVar5 = DAT_1809f3584 << 0xd ^ DAT_1809f3584;
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      DAT_1809f3584 = uVar5 << 5 ^ uVar5;
      uVar5 = DAT_1809f3584 % 3;
    }
    else {
      uVar5 = (*DAT_180cfb2b0)(0,2);
    }
    DAT_181108848 = (DAT_181108848 <= (int)uVar5) + uVar5;
    if ((*(char *)(lVar6 + 0x300) != '\0') && (cVar1 = FUN_180389020(), cVar1 != '\0')) {
      lVar6 = (longlong)DAT_181108848;
      local_d8[0] = 0;
      local_d4 = 0x41f00000;
      fVar10 = (float)(DAT_181108848 + 1) * _DAT_1808ac56c;
      local_d0 = (float)FUN_180517200(fVar10);
      fVar17 = DAT_1808acb28;
      local_d0 = local_d0 * DAT_1808acb28;
      local_cc = (float)FUN_180517790(fVar10);
      local_cc = local_cc * fVar17;
      local_c8 = 0x43000000;
      FUN_180388c30(&local_e8,(&PTR_s_Weather_thunder_close_1_1806ab088)[lVar6],param_2,local_d8);
    }
  }
  return;
}



/* ===== 1803879f0 FUN_1803879f0 ===== */

undefined8 FUN_1803879f0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float fStack_44;
  float local_40;
  
  fVar5 = (float)param_2[1];
  uVar2 = *(undefined8 *)*param_1;
  fVar6 = *(float *)param_1[1];
  if (0.0 < fVar5 - fVar6) {
    lVar3 = param_1[2];
    fVar7 = *(float *)param_1[3];
    cVar4 = FUN_180386c50(uVar2,*param_2);
    if (cVar4 != '\0') {
      fVar7 = fVar7 * DAT_1808acb94;
      fVar6 = (fVar5 - fVar6) / DAT_1808ac154;
      uVar1 = *(undefined8 *)(lVar3 + 0x2e8);
      local_40 = fVar7 * *(float *)(lVar3 + 0x2f0);
      fVar5 = DAT_1808ac34c;
      if (fVar6 <= DAT_1808ac34c) {
        fVar5 = fVar6;
      }
      local_48 = (float)uVar1 * fVar7;
      fStack_44 = (float)((ulonglong)uVar1 >> 0x20) * fVar7;
      FUN_180206480(uVar2,*param_2,3,&local_48);
      fStack_44 = 0.0;
      local_40 = 0.0;
      local_48 = fVar5 * (float)param_2[2];
      FUN_180206480(uVar2,*param_2,4,&local_48);
      local_48 = fVar5 * (float)param_2[3];
      fStack_44 = 0.0;
      local_40 = 0.0;
      FUN_180206480(uVar2,*param_2,5,&local_48);
      return 0;
    }
  }
  FUN_1802064e0(uVar2,*param_2);
  return 1;
}



/* ===== 180387b30 FUN_180387b30 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180387b30(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  longlong local_res10;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar2 = _DAT_1809f717c;
  if (((DAT_180cd11fb == '\0') && (DAT_180961a50 != 0)) &&
     (lVar3 = FUN_18000f3a0(), uVar2 = _DAT_1809f717c, lVar3 - 0x10000U < 0x7ffffffeffff)) {
    fVar9 = (float)FUN_180273cc0(param_1,"health");
    uVar2 = _DAT_1809f717c;
    if (fVar9 <= 0.0) {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res10);
        lVar3 = local_res10;
      }
      else {
        lVar3 = DAT_181108a00;
      }
      uVar2 = _DAT_1809f717c;
      if (((lVar3 != 0) &&
          (lVar4 = FUN_1800f1c60(), uVar2 = _DAT_1809f717c, *(char *)(lVar4 + 0x2d5) != '\0')) &&
         (*(char *)(lVar4 + 0x301) != '\0')) {
        lVar4 = FUN_180273f90(param_1,"attacker");
        lVar5 = FUN_180273f90(param_1,"userid");
        uVar2 = _DAT_1809f717c;
        if (((lVar5 != 0) && (lVar4 != 0)) &&
           ((lVar5 != lVar4 && ((lVar4 == lVar3 && (DAT_180ca09fc != 0)))))) {
          uVar2 = FUN_180011200((ulonglong)DAT_180ca09fc + lVar5);
          plVar6 = (longlong *)FUN_1803a0940(&local_res10,uVar2);
          uVar2 = _DAT_1809f717c;
          if (*plVar6 != 0) {
            if (((DAT_180ca09f8 == 0) ||
                (lVar3 = FUN_18000f3a0(*plVar6 + (ulonglong)DAT_180ca09f8), lVar3 == 0)) ||
               (DAT_180ca0950 == 0)) {
              local_38 = 0;
              local_30 = 0;
            }
            else {
              puVar7 = (undefined8 *)FUN_1800111b0(&local_28,lVar3 + (ulonglong)DAT_180ca0950);
              local_38 = *puVar7;
              local_30 = *(undefined4 *)(puVar7 + 1);
            }
            local_28 = 0;
            local_20 = 0;
            cVar1 = FUN_18038b000(&local_28);
            uVar2 = _DAT_1809f717c;
            if (cVar1 != '\0') {
              if (DAT_180962080 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_18000f3a0();
              }
              FUN_180386fe0(uVar8,&local_28,&local_38);
              uVar2 = 0;
              if ((DAT_180961a50 != 0) &&
                 (lVar3 = FUN_18000f3a0(), lVar3 - 0x10000U < 0x7ffffffeffff)) {
                uVar2 = FUN_18000f3d0(lVar3 + 0x30);
              }
            }
          }
        }
      }
    }
  }
  _DAT_1809f717c = uVar2;
  return;
}



/* ===== 180387d50 FUN_180387d50 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180387d50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  float *pfVar10;
  float *pfVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  float fVar16;
  float local_res8;
  undefined4 uStackX_c;
  float local_res10 [2];
  longlong local_res18 [2];
  float local_88;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  longlong *local_68;
  float *local_60;
  undefined *local_58;
  float *local_50;
  
  if ((DAT_1809620c0 != 0) && (lVar7 = FUN_18000f3a0(), lVar7 != 0)) {
    if (DAT_180cd11f8 == '\0') {
      DAT_180cd11f8 = FUN_180273b60("hegrenade_detonate",&LAB_180386f20);
    }
    if (DAT_180cd110f == '\0') {
      DAT_180cd110f = FUN_180273b60("flashbang_detonate",&LAB_180386f30);
    }
    if (DAT_180cd11f9 == '\0') {
      DAT_180cd11f9 = FUN_180273b60("smokegrenade_detonate",&LAB_180386f40);
    }
    if (DAT_180cd11fc == '\0') {
      DAT_180cd11fc = FUN_180273b60("inferno_startburn",&LAB_180386f50);
    }
    if (DAT_180cd110c == '\0') {
      DAT_180cd110c = FUN_180273b60("decoy_started",&LAB_180386f60);
    }
    if (DAT_180cd11fd == '\0') {
      DAT_180cd11fd = FUN_180273b60("player_hurt",FUN_180387b30);
    }
  }
  if (DAT_180962080 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_18000f3a0();
  }
  if ((((DAT_180cd11fb != '\0') || (lVar7 == 0)) || (DAT_180961a50 == 0)) ||
     (lVar8 = FUN_18000f3a0(), 0x7ffffffefffe < lVar8 - 0x10000U)) {
LAB_180388273:
    FUN_180386f70(lVar7);
    DAT_181108840 = 0.0;
    _DAT_1809f717c = -INFINITY;
    FUN_18038b3d0(lVar7);
    lVar7 = DAT_181108860;
    if (DAT_180cd11fb == '\0') {
      pfVar10 = (float *)0x0;
      lVar8 = DAT_181108858;
      if (DAT_181108858 != DAT_181108860) {
        do {
          FUN_18000f890(lVar8 + 0x10);
          uVar5 = DAT_181108854;
          lVar8 = lVar8 + 0x60;
        } while (lVar8 != lVar7);
        DAT_181108860 = DAT_181108858;
        LOCK();
        DAT_181108854 = 0;
        pfVar10 = (float *)(ulonglong)uVar5;
        UNLOCK();
        DAT_1809f7910 = DAT_1809f7910 + 1;
      }
    }
    else {
      pfVar10 = (float *)FUN_180389020();
    }
    return pfVar10;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    lVar8 = CONCAT44(uStackX_c,local_res8);
  }
  else {
    lVar8 = DAT_181108a00;
  }
  if ((lVar8 == 0) || (cVar6 = FUN_1803a10a0(), cVar6 == '\0')) goto LAB_180388273;
  FUN_180389020();
  if (DAT_180cd110d == '\0') {
    DAT_180cd110d = FUN_1802080c0("particles/neverlose/grenade_effect.vpcf");
  }
  if (DAT_180cd11fa == '\0') {
    DAT_180cd11fa = FUN_1802080c0("particles/neverlose/weather_thunder.vpcf");
  }
  if (DAT_180cd125d == '\0') {
    DAT_180cd125d = FUN_1802080c0("particles/neverlose/weather_rain.vpcf");
  }
  if (DAT_180cd125e == '\0') {
    DAT_180cd125e = FUN_1802080c0("particles/neverlose/rain_single_drip_ground.vpcf");
  }
  if (DAT_180cd1278 == '\0') {
    DAT_180cd1278 = FUN_1802080c0("particles/neverlose/rain_puddle_ripples_small.vpcf");
  }
  if (DAT_180cd127a == '\0') {
    DAT_180cd127a = FUN_1802080c0("particles/neverlose/weather_snow.vpcf");
  }
  fVar16 = 0.0;
  if ((DAT_180961a50 != 0) && (lVar8 = FUN_18000f3a0(), lVar8 - 0x10000U < 0x7ffffffeffff)) {
    fVar16 = (float)FUN_18000f3d0(lVar8 + 0x30);
  }
  if (fVar16 < DAT_181108840) {
    FUN_180386f70(lVar7);
    DAT_181108840 = 0.0;
    _DAT_1809f717c = -INFINITY;
    FUN_18038b3d0(lVar7);
  }
  DAT_181108840 = fVar16;
  FUN_18038b0f0(lVar7);
  local_80 = 0;
  local_78 = 0;
  cVar6 = FUN_18038b000(&local_80);
  if (cVar6 == '\0') {
    local_80 = 0;
    local_78 = 0;
  }
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar9 = &DAT_18093cdcc;
    puVar12 = &DAT_18093d030;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar9 = &DAT_18093d3e0 + (longlong)(int)DAT_1809ebfb8 * 0x614;
    puVar12 = (undefined *)((longlong)(int)DAT_1809ebfb8 * 0x614 + 0x18093d644);
  }
  else {
    pcVar9 = &DAT_18093c7f8;
    puVar12 = &DAT_18093ca5c;
  }
  puVar15 = &DAT_1805e9ea0;
  if (*pcVar9 != '\0') {
    puVar15 = puVar12;
  }
  local_res8 = fVar16;
  local_res18[0] = lVar7;
  if (puVar15[0x2d5] == '\0') {
    pfVar10 = (float *)FUN_180386f70(lVar7);
    return pfVar10;
  }
  fVar16 = (float)FUN_180517790(fVar16 * DAT_1808ac950);
  puVar4 = DAT_181108830;
  local_68 = local_res18;
  local_60 = &local_res8;
  local_58 = puVar15;
  local_50 = local_res10;
  local_res10[0] = (fVar16 * DAT_1808ac1f4 + DAT_1808ac1f4) * DAT_1808ac1b8 + DAT_1808ac214;
  puVar13 = DAT_181108828;
  if (DAT_181108828 != DAT_181108830) {
    do {
      cVar6 = FUN_1803879f0(&local_68,puVar13);
      if (cVar6 != '\0') break;
      puVar13 = puVar13 + 4;
    } while (puVar13 != puVar4);
  }
  if (puVar13 == puVar4) {
LAB_1803881ba:
    if (puVar13 == puVar4) goto LAB_1803881da;
  }
  else {
    puVar14 = puVar13 + 4;
    if (puVar14 != puVar4) {
      do {
        cVar6 = FUN_1803879f0(&local_68,puVar14);
        if (cVar6 == '\0') {
          uVar1 = puVar14[1];
          uVar2 = puVar14[2];
          uVar3 = puVar14[3];
          *puVar13 = *puVar14;
          puVar13[1] = uVar1;
          puVar13[2] = uVar2;
          puVar13[3] = uVar3;
          puVar13 = puVar13 + 4;
        }
        puVar14 = puVar14 + 4;
      } while (puVar14 != puVar4);
      goto LAB_1803881ba;
    }
  }
  lVar7 = (longlong)DAT_181108830 - (longlong)puVar4;
  FUN_180540530(puVar13,puVar4,lVar7);
  DAT_181108830 = (undefined4 *)(lVar7 + (longlong)puVar13);
LAB_1803881da:
  LOCK();
  DAT_18110884c = (undefined4)((longlong)DAT_181108830 - (longlong)DAT_181108828 >> 4);
  UNLOCK();
  fVar16 = *(float *)(puVar15 + 0x2f8);
  local_84 = 120.0;
  local_88 = 0.1;
  pfVar10 = &local_88;
  if (DAT_1808ac0c0 <= fVar16) {
    pfVar10 = (float *)(puVar15 + 0x2f8);
  }
  pfVar11 = &local_84;
  if (fVar16 <= DAT_1808acb18) {
    pfVar11 = pfVar10;
  }
  if (*pfVar11 <= local_res8 - _DAT_1809f717c) {
    pfVar10 = (float *)FUN_180386fe0(local_res18[0],&local_80,0);
    _DAT_1809f717c = local_res8;
    return pfVar10;
  }
  return pfVar11;
}



/* ===== 180388300 FUN_180388300 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180388300(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_838 [32];
  char local_818 [512];
  char local_618 [512];
  char local_418 [512];
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_838;
  cVar1 = FUN_180208200(param_1,"particles/neverlose/grenade_effect",&DAT_1808988a0,0x142d);
  if ((cVar1 == '\0') &&
     (cVar1 = FUN_180208200(param_1,"particles/neverlose/weather_thunder",&DAT_180897930,0xf6d),
     cVar1 == '\0')) {
    if ((param_1 != 0) && (DAT_180962078 != 0)) {
      FUN_180540170(local_818,0,0x200);
      cVar1 = FUN_180207ed0(param_1,local_818);
      if (cVar1 != '\0') {
        pcVar2 = local_818;
        while (local_818[0] != '\0') {
          if (*pcVar2 == '\\') {
            *pcVar2 = '/';
          }
          pcVar2 = pcVar2 + 1;
          local_818[0] = *pcVar2;
        }
        lVar3 = FUN_1804ef120(local_818,"particles/neverlose/weather_rain");
        if ((lVar3 != 0) &&
           (cVar1 = FUN_180207f50(param_1,local_818,&DAT_18089cde0,0x131f), cVar1 != '\0'))
        goto LAB_1803885d4;
      }
    }
    if (param_1 != 0) {
      if (DAT_180962078 != 0) {
        FUN_180540170(local_618,0,0x200);
        cVar1 = FUN_180207ed0(param_1,local_618);
        if (cVar1 != '\0') {
          pcVar2 = local_618;
          while (local_618[0] != '\0') {
            if (*pcVar2 == '\\') {
              *pcVar2 = '/';
            }
            pcVar2 = pcVar2 + 1;
            local_618[0] = *pcVar2;
          }
          lVar3 = FUN_1804ef120(local_618,"particles/neverlose/rain_single_drip_ground");
          if ((lVar3 != 0) &&
             (cVar1 = FUN_180207f50(param_1,local_618,&DAT_18089b120,0x103a), cVar1 != '\0'))
          goto LAB_1803885d4;
        }
      }
      if (param_1 != 0) {
        if (DAT_180962078 != 0) {
          FUN_180540170(local_418,0,0x200);
          cVar1 = FUN_180207ed0(param_1,local_418);
          if (cVar1 != '\0') {
            pcVar2 = local_418;
            while (local_418[0] != '\0') {
              if (*pcVar2 == '\\') {
                *pcVar2 = '/';
              }
              pcVar2 = pcVar2 + 1;
              local_418[0] = *pcVar2;
            }
            lVar3 = FUN_1804ef120(local_418,"particles/neverlose/rain_puddle_ripples_small");
            if ((lVar3 != 0) &&
               (cVar1 = FUN_180207f50(param_1,local_418,&DAT_18089c160,0xc7f), cVar1 != '\0'))
            goto LAB_1803885d4;
          }
        }
        if ((param_1 != 0) && (DAT_180962078 != 0)) {
          FUN_180540170(local_218,0,0x200);
          cVar1 = FUN_180207ed0(param_1,local_218);
          if (cVar1 != '\0') {
            pcVar2 = local_218;
            while (local_218[0] != '\0') {
              if (*pcVar2 == '\\') {
                *pcVar2 = '/';
              }
              pcVar2 = pcVar2 + 1;
              local_218[0] = *pcVar2;
            }
            lVar3 = FUN_1804ef120(local_218,"particles/neverlose/weather_snow");
            if ((lVar3 != 0) &&
               (cVar1 = FUN_180207f50(param_1,local_218,&DAT_18089a060,0x10be), cVar1 != '\0'))
            goto LAB_1803885d4;
          }
        }
      }
    }
    uVar4 = 0;
  }
  else {
LAB_1803885d4:
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== 180388600 FUN_180388600 ===== */

undefined8 * FUN_180388600(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar6 = DAT_181108830;
  if (DAT_181108830 != DAT_181108838) {
    uVar5 = param_2[1];
    *DAT_181108830 = *param_2;
    puVar6[1] = uVar5;
    puVar6 = DAT_181108830;
    DAT_181108830 = DAT_181108830 + 2;
    return puVar6;
  }
  uVar14 = 0xfffffffffffffff;
  uVar15 = (longlong)DAT_181108830 - (longlong)DAT_181108828;
  lVar10 = (longlong)uVar15 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = lVar10 + 1;
  uVar8 = (longlong)DAT_181108838 - (longlong)DAT_181108828 >> 4;
  if (uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar14 = uVar11;
    if (uVar11 <= uVar8) {
      uVar14 = uVar8;
    }
    if (0xfffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar14 * 0x10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar16 = (undefined8 *)((uVar15 & 0xfffffffffffffff0) + (longlong)puVar7);
  *(undefined4 *)puVar16 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)puVar16 + 4) = uVar2;
  *(undefined4 *)(puVar16 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0xc) = uVar4;
  if (puVar6 == DAT_181108830) {
    lVar10 = (longlong)DAT_181108830 - (longlong)DAT_181108828;
    puVar9 = puVar7;
    puVar6 = DAT_181108828;
  }
  else {
    FUN_180540530(puVar7,DAT_181108828,(longlong)puVar6 - (longlong)DAT_181108828);
    puVar9 = puVar16 + 2;
    lVar10 = (longlong)DAT_181108830 - (longlong)puVar6;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar10);
  if (DAT_181108828 == (undefined8 *)0x0) goto LAB_180388751;
  puVar6 = DAT_181108828;
  if (((longlong)DAT_181108838 - (longlong)DAT_181108828 & 0xfffffffffffffff0U) < 0x1000) {
LAB_180388749:
    puVar13 = puVar12;
  }
  else {
    puVar6 = (undefined8 *)DAT_181108828[-1];
    if (0x1f < (ulonglong)((longlong)DAT_181108828 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar12 = auStack_30;
      goto LAB_180388749;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180388751;
  thunk_FUN_1803d64e0(puVar6);
LAB_180388751:
  DAT_181108830 = puVar7 + uVar11 * 2;
  DAT_181108828 = puVar7;
  DAT_181108838 = puVar7 + uVar14 * 2;
  return puVar16;
}



/* ===== 1803887a0 FUN_1803887a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803887a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  ULONGLONG UVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined8 *local_430;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_458;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180013640();
  local_438 = 0;
  local_430 = &local_res10;
  iVar1 = FUN_180501904(*puVar2 | 2,local_428,0x400,param_1);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (-1 < iVar1) {
    UVar3 = GetTickCount64();
    FUN_1802b2870("wl_sounds.log","[%llu] [nl_sound] %s\n",UVar3,local_428);
  }
  return;
}



/* ===== 180388850 FUN_180388850 ===== */

undefined1 FUN_180388850(void)

{
  if (((((DAT_180961b38 == 0) || (DAT_180961b40 == 0)) || (DAT_180961b48 == 0)) ||
      ((((DAT_180961b50 == 0 || (DAT_180961b58 == 0)) ||
        ((DAT_180961b60 == 0 || ((DAT_180961b68 == 0 || (DAT_180961b70 == 0)))))) ||
       (DAT_180961b78 == 0)))) ||
     ((((DAT_180961b80 == 0 || (DAT_180961b98 == 0)) || (DAT_180961ba0 == 0)) ||
      ((DAT_180961ba8 == 0 || (DAT_180961bc0 == 0)))))) {
    return 0;
  }
  return 1;
}



/* ===== 1803888f0 FUN_1803888f0 ===== */

void FUN_1803888f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (*DAT_180961b70)();
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180388915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180961b78)(lVar1,param_3,2);
  return;
}



/* ===== 180388930 FUN_180388930 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180388930(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar2 = *DAT_180961b38;
  if ((lVar2 == 0) || (plVar3 = (longlong *)*DAT_180961b40, plVar3 == (longlong *)0x0)) {
    lVar6 = 0;
  }
  else {
    lVar4 = (*DAT_180961b48)(lVar2,"snd_event_point",0);
    lVar6 = 0;
    if (lVar4 != 0) {
      lVar5 = (*DAT_180961b50)(0x38);
      lVar6 = 0;
      if (lVar5 != 0) {
        (*DAT_180961b60)(lVar5,lVar2 + 0xd50,3);
        *(short *)(lVar5 + 0x20) = *(short *)(lVar5 + 0x20) + 1;
        FUN_1803888f0(lVar5,&DAT_1806ad0d8,"snd_event_point");
        FUN_1803888f0(lVar5,&DAT_1806ad0b8,&DAT_1806dfa60);
        FUN_1803888f0(lVar5,&DAT_1806ad088,param_1);
        FUN_1803888f0(lVar5,&DAT_1806ad098,&DAT_1806dfa60);
        FUN_1803888f0(lVar5,&DAT_1806ad0e8,&DAT_1806dfa60);
        pcVar7 = "false";
        if (param_3 != '\0') {
          pcVar7 = "true";
        }
        FUN_1803888f0(lVar5,&DAT_1806ad078,pcVar7);
        FUN_1803888f0(lVar5,&DAT_1806ad0a8,"false");
        (*DAT_180961b80)(lVar5,&DAT_1806ad0c8,param_2);
        uVar1 = *(undefined4 *)(lVar2 + 0x1fc0);
        local_78 = *(undefined8 *)(lVar2 + 0x1fd0);
        uStack_70 = *(undefined8 *)(lVar2 + 0x1fd8);
        local_68 = *(undefined4 *)(lVar2 + 0x1fe0);
        uStack_64 = *(undefined4 *)(lVar2 + 0x1fe4);
        uStack_60 = *(undefined4 *)(lVar2 + 0x1fe8);
        uStack_5c = *(undefined4 *)(lVar2 + 0x1fec);
        local_58 = *(undefined4 *)(lVar2 + 0x1ff0);
        uStack_54 = *(undefined4 *)(lVar2 + 0x1ff4);
        uStack_50 = *(undefined4 *)(lVar2 + 0x1ff8);
        uStack_4c = *(undefined4 *)(lVar2 + 0x1ffc);
        local_a0 = 0;
        local_a8 = 0xffffffff;
        local_b0 = 0xffffffff;
        local_b8 = (undefined8 *)((ulonglong)local_b8._4_4_ << 0x20);
        lVar6 = (*DAT_180961b98)(lVar2,uVar1,lVar4,&DAT_18058b643);
        local_98 = lVar6;
        if (lVar6 != 0) {
          lVar4 = *(longlong *)(lVar6 + 0x10);
          local_80 = 0x1ffffffffffff;
          local_b8 = &local_78;
          local_90 = lVar4;
          local_88 = lVar5;
          (**(code **)(*plVar3 + 0x118))(plVar3,uVar1,1,&local_90);
          if ((*(uint *)(lVar4 + 0x30) & 0x200) == 0) {
            (*DAT_180961ba0)(lVar2,lVar6,lVar5);
            (*DAT_180961ba8)(lVar2);
          }
          else {
            lVar6 = 0;
            local_98 = 0;
          }
        }
        *(short *)(lVar5 + 0x20) = *(short *)(lVar5 + 0x20) + -1;
        if (*(short *)(lVar5 + 0x20) < 1) {
          (*DAT_180961b68)(lVar5);
          (*DAT_180961b58)(lVar5,0x38);
        }
      }
    }
  }
  return lVar6;
}



/* ===== 180388bb0 FUN_180388bb0 ===== */

longlong * FUN_180388bb0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *in_RAX;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  if (*(int *)(param_1 + 8) != -1) {
    in_RAX = (longlong *)FUN_1803a0940(local_res8);
    lVar1 = *in_RAX;
    if (lVar1 != 0) {
      lVar3 = FUN_18000f3a0(lVar1 + 0x10);
      in_RAX = (longlong *)0x0;
      if ((lVar3 != 0) &&
         (in_RAX = (longlong *)FUN_180011200(lVar3 + 0x30), ((uint)in_RAX >> 9 & 1) == 0)) {
        FUN_18020b090(lVar1);
        uVar2 = DAT_181108854;
        if (0 < (int)DAT_181108854) {
          LOCK();
          DAT_181108854 = DAT_181108854 - 1;
          UNLOCK();
          return (longlong *)(ulonglong)uVar2;
        }
        LOCK();
        DAT_181108854 = 0;
        in_RAX = (longlong *)(ulonglong)uVar2;
        UNLOCK();
      }
    }
  }
  return in_RAX;
}



/* ===== 180388c30 FUN_180388c30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180388c30(longlong *param_1,char *param_2,uint *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong lVar2;
  size_t sVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined1 local_6c;
  undefined2 local_6b;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (((((((DAT_180cd11ff != '\0') || (DAT_180961a50 == 0)) ||
         (lVar2 = FUN_18000f3a0(), 0x7ffffffefffe < lVar2 - 0x10000U)) ||
        ((cVar1 = FUN_1803a10a0(), cVar1 == '\0' || (cVar1 = FUN_180388850(), cVar1 == '\0')))) ||
       ((param_2 == (char *)0x0 || ((*param_2 == '\0' || ((*param_3 & 0x7f800000) == 0x7f800000)))))
       ) || ((param_3[1] & 0x7f800000) == 0x7f800000)) ||
     (((((param_3[2] & 0x7f800000) == 0x7f800000 ||
        ((*(uint *)(param_4 + 8) & 0x7f800000) == 0x7f800000)) ||
       ((*(uint *)(param_4 + 0xc) & 0x7f800000) == 0x7f800000)) ||
      ((((*(uint *)(param_4 + 0x10) & 0x7f800000) == 0x7f800000 ||
        (((uint)*(float *)(param_4 + 4) & 0x7f800000) == 0x7f800000)) ||
       (lVar2 = DAT_181108858, *(float *)(param_4 + 4) < 0.0)))))) {
LAB_180388ed1:
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    for (; lVar2 != DAT_181108860; lVar2 = lVar2 + 0x60) {
      if (*(char *)(lVar2 + 0x58) != '\0') goto LAB_180388ed1;
    }
    local_a0 = 0xffffffff;
    uStack_90 = 0;
    local_88 = _DAT_1808ad410;
    uStack_80 = _UNK_1808ad418;
    local_98 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 1;
    local_a8 = DAT_1809f7908;
    DAT_1809f7908 = DAT_1809f7908 + 1;
    sVar3 = strlen(param_2);
    FUN_180029840(&local_98,param_2,sVar3);
    local_78 = *(undefined8 *)param_3;
    local_70 = param_3[2];
    local_6c = *param_4;
    local_6b = *(undefined2 *)(param_4 + 1);
    local_69 = param_4[3];
    uVar4 = *(undefined4 *)(param_4 + 4);
    local_68 = *(undefined8 *)(param_4 + 4);
    uStack_60 = *(undefined8 *)(param_4 + 0xc);
    uVar5 = 0;
    if ((DAT_180961a50 != 0) &&
       (lVar2 = FUN_18000f3a0(), uVar4 = extraout_XMM0_Da, lVar2 - 0x10000U < 0x7ffffffeffff)) {
      uVar4 = FUN_18000f3d0(lVar2);
      uVar5 = uVar4;
    }
    local_58 = CONCAT44(local_58._4_4_,uVar5);
    local_50 = 1;
    if (DAT_181108860 == DAT_181108868) {
      FUN_180389650(uVar4,DAT_181108860,&local_a8);
    }
    else {
      FUN_180389850();
      DAT_181108860 = DAT_181108860 + 0x60;
    }
    lVar2 = DAT_1809f7910;
    *param_1 = local_a8;
    param_1[1] = lVar2;
    FUN_18000f890(&local_98);
  }
  return param_1;
}



/* ===== 180388f10 FUN_180388f10 ===== */

void FUN_180388f10(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((*param_1 != 0) && (plVar6 = DAT_181108858, param_1[1] == DAT_1809f7910)) {
    do {
      plVar2 = plVar6;
      if (plVar2 == DAT_181108860) goto LAB_18038900e;
      plVar6 = plVar2 + 0xc;
    } while (*plVar2 != *param_1);
    FUN_180388bb0(plVar2);
    plVar5 = DAT_181108860;
    for (; plVar6 != plVar5; plVar6 = plVar6 + 0xc) {
      *plVar2 = *plVar6;
      *(int *)(plVar2 + 1) = (int)plVar6[1];
      FUN_18002ba60(plVar2 + 2,plVar6 + 2);
      plVar2[6] = plVar6[6];
      *(int *)(plVar2 + 7) = (int)plVar6[7];
      lVar3 = plVar6[8];
      uVar1 = *(undefined4 *)((longlong)plVar6 + 0x44);
      lVar4 = plVar6[9];
      *(undefined4 *)((longlong)plVar2 + 0x3c) = *(undefined4 *)((longlong)plVar6 + 0x3c);
      *(int *)(plVar2 + 8) = (int)lVar3;
      *(undefined4 *)((longlong)plVar2 + 0x44) = uVar1;
      *(int *)(plVar2 + 9) = (int)lVar4;
      *(undefined4 *)((longlong)plVar2 + 0x4c) = *(undefined4 *)((longlong)plVar6 + 0x4c);
      *(int *)(plVar2 + 10) = (int)plVar6[10];
      *(undefined4 *)((longlong)plVar2 + 0x54) = *(undefined4 *)((longlong)plVar6 + 0x54);
      *(char *)(plVar2 + 0xb) = (char)plVar6[0xb];
      plVar2 = plVar2 + 0xc;
    }
    FUN_18000f890(DAT_181108860 + -10);
    DAT_181108860 = DAT_181108860 + -0xc;
  }
LAB_18038900e:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* ===== 180389020 FUN_180389020 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180389020(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_c8 [32];
  double local_a8;
  uint local_a0;
  double local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  float local_78;
  ulonglong local_70;
  
  puVar13 = DAT_181108860;
  local_70 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if (DAT_180cd11ff == '\0') {
    if ((((DAT_180961a50 != 0) && (lVar12 = FUN_18000f3a0(), lVar12 - 0x10000U < 0x7ffffffeffff)) &&
        (cVar7 = FUN_1803a10a0(), cVar7 != '\0')) && (cVar7 = FUN_180388850(), cVar7 != '\0')) {
      if ((DAT_180961a50 == 0) || (lVar12 = FUN_18000f3a0(), 0x7ffffffefffe < lVar12 - 0x10000U)) {
        fVar17 = 0.0;
      }
      else {
        fVar17 = (float)FUN_18000f3d0(lVar12);
      }
      fVar18 = DAT_1808ac658;
      puVar13 = DAT_181108860;
      puVar15 = DAT_181108858;
      if (DAT_181108858 != DAT_181108860) {
        do {
          if (((*(char *)(puVar15 + 0xb) != '\0') && (fVar18 <= fVar17 - *(float *)(puVar15 + 10)))
             || ((0.0 < *(float *)(puVar15 + 8) &&
                 (*(float *)(puVar15 + 8) + *(float *)(puVar15 + 10) <= fVar17)))) {
            FUN_180388bb0(puVar15);
            puVar6 = DAT_181108860;
            puVar13 = puVar15;
            puVar5 = puVar15;
            while (puVar4 = puVar5 + 0xc, puVar4 != puVar6) {
              *puVar13 = *puVar4;
              *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar4 + 1);
              FUN_18002ba60(puVar13 + 2,puVar4 + 2);
              puVar13[6] = puVar4[6];
              *(undefined4 *)(puVar13 + 7) = *(undefined4 *)(puVar4 + 7);
              uVar1 = *(undefined4 *)(puVar4 + 8);
              uVar2 = *(undefined4 *)((longlong)puVar5 + 0xa4);
              uVar3 = *(undefined4 *)(puVar4 + 9);
              *(undefined4 *)((longlong)puVar13 + 0x3c) = *(undefined4 *)((longlong)puVar5 + 0x9c);
              *(undefined4 *)(puVar13 + 8) = uVar1;
              *(undefined4 *)((longlong)puVar13 + 0x44) = uVar2;
              *(undefined4 *)(puVar13 + 9) = uVar3;
              *(undefined4 *)((longlong)puVar13 + 0x4c) = *(undefined4 *)((longlong)puVar5 + 0xac);
              *(undefined4 *)(puVar13 + 10) = *(undefined4 *)(puVar4 + 10);
              *(undefined4 *)((longlong)puVar13 + 0x54) = *(undefined4 *)((longlong)puVar5 + 0xb4);
              *(undefined1 *)(puVar13 + 0xb) = *(undefined1 *)(puVar4 + 0xb);
              puVar13 = puVar13 + 0xc;
              puVar5 = puVar4;
            }
            FUN_18000f890(DAT_181108860 + -10);
            puVar13 = DAT_181108860 + -0xc;
            DAT_181108860 = puVar13;
          }
          else {
            puVar15 = puVar15 + 0xc;
          }
        } while (puVar15 != puVar13);
      }
      puVar15 = DAT_181108858;
      if (DAT_181108858 != puVar13) {
        while (*(char *)(puVar15 + 0xb) == '\0') {
          puVar15 = puVar15 + 0xc;
          if (puVar15 == puVar13) {
            return 1;
          }
        }
        plVar10 = puVar15 + 2;
        fVar18 = (float)*(undefined8 *)((longlong)puVar15 + 0x44) + (float)puVar15[6];
        fVar19 = (float)((ulonglong)*(undefined8 *)((longlong)puVar15 + 0x44) >> 0x20) +
                 (float)((ulonglong)puVar15[6] >> 0x20);
        fVar20 = *(float *)((longlong)puVar15 + 0x4c) + *(float *)(puVar15 + 7);
        local_80 = CONCAT44(fVar19,fVar18);
        plVar14 = plVar10;
        if (0xf < (ulonglong)puVar15[5]) {
          plVar14 = (longlong *)*plVar10;
        }
        local_78 = fVar20;
        lVar12 = FUN_180388930(plVar14,&local_80,*(undefined1 *)((longlong)puVar15 + 0x3c));
        if (lVar12 == 0) {
          if (DAT_180cd125c != '\0') {
            return 0;
          }
          DAT_180cd125c = 1;
          cVar7 = FUN_180388850();
          pcVar16 = "missing";
          if (cVar7 != '\0') {
            pcVar16 = "ok";
          }
          if (0xf < (ulonglong)puVar15[5]) {
            plVar10 = (longlong *)*plVar10;
          }
          FUN_1803887a0("spawn of %s \"%s\" failed (spawner patterns %s)","snd_event_point",plVar10,
                        pcVar16);
          return 0;
        }
        lVar12 = FUN_18000f3a0(lVar12 + 0x10);
        if (lVar12 == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar8 = FUN_180011200(lVar12 + 0x10);
          uVar9 = FUN_180011200(lVar12 + 0x30);
          uVar9 = uVar8 + (uVar9 & 1) * -0x8000;
          uVar9 = (uVar9 ^ uVar8) & 0x7fff ^ uVar9;
        }
        *(float *)((longlong)puVar15 + 0x54) = fVar17;
        *(uint *)(puVar15 + 1) = uVar9;
        *(undefined1 *)(puVar15 + 0xb) = 0;
        LOCK();
        DAT_181108854 = DAT_181108854 + 1;
        UNLOCK();
        local_90 = *(undefined4 *)(puVar15 + 1);
        local_98 = (double)*(float *)(puVar15 + 8);
        if (0xf < (ulonglong)puVar15[5]) {
          plVar10 = (longlong *)*plVar10;
        }
        local_a0 = (uint)(*(char *)((longlong)puVar15 + 0x3c) != '\0');
        local_a8 = (double)fVar20;
        FUN_1803887a0("spawned \"%s\" at %.0f %.0f %.0f (stopOnNew %d, lifetime %.1f) -> %08x",
                      plVar10,(double)fVar18,(double)fVar19);
      }
      return 1;
    }
    puVar13 = DAT_181108860;
    puVar15 = DAT_181108858;
    if (DAT_181108858 == DAT_181108860) {
      return 0;
    }
    do {
      FUN_18000f890(puVar15 + 2);
      puVar15 = puVar15 + 0xc;
    } while (puVar15 != puVar13);
  }
  else {
    puVar15 = DAT_181108858;
    if (DAT_181108858 == DAT_181108860) {
      return 0;
    }
    do {
      if (*(int *)(puVar15 + 1) != -1) {
        plVar10 = (longlong *)FUN_1803a0940(local_88);
        lVar12 = *plVar10;
        if (((lVar12 != 0) && (lVar11 = FUN_18000f3a0(lVar12 + 0x10), lVar11 != 0)) &&
           (uVar8 = FUN_180011200(lVar11 + 0x30), (uVar8 >> 9 & 1) == 0)) {
          FUN_18020b090(lVar12);
          if (DAT_181108854 < 1) {
            DAT_181108854 = 0;
          }
          else {
            DAT_181108854 = DAT_181108854 + -1;
          }
          LOCK();
          UNLOCK();
        }
      }
      puVar5 = DAT_181108860;
      puVar15 = puVar15 + 0xc;
    } while (puVar15 != puVar13);
    puVar13 = DAT_181108858;
    if (DAT_181108858 == DAT_181108860) goto LAB_180389462;
    do {
      FUN_18000f890(puVar13 + 2);
      puVar13 = puVar13 + 0xc;
    } while (puVar13 != puVar5);
  }
  DAT_181108860 = DAT_181108858;
LAB_180389462:
  LOCK();
  UNLOCK();
  DAT_1809f7910 = DAT_1809f7910 + 1;
  DAT_181108854 = 0;
  return 0;
}



/* ===== 1803894b0 FUN_1803894b0 ===== */

undefined8 FUN_1803894b0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float extraout_XMM0_Da;
  float fVar8;
  undefined1 local_res10 [8];
  
  if (((((DAT_180cd11ff == '\0') && (DAT_180961a50 != 0)) &&
       (lVar5 = FUN_18000f3a0(), lVar5 - 0x10000U < 0x7ffffffeffff)) &&
      ((cVar2 = FUN_1803a10a0(), cVar2 != '\0' && (cVar2 = FUN_180388850(), cVar2 != '\0')))) &&
     ((*param_1 != 0 && (plVar1 = DAT_181108858, param_1[1] == DAT_1809f7910)))) {
    for (; plVar1 != DAT_181108860; plVar1 = plVar1 + 0xc) {
      if (*plVar1 == *param_1) {
        if ((char)plVar1[0xb] == '\0') {
          if ((int)plVar1[1] == -1) {
            return 0;
          }
          plVar6 = (longlong *)FUN_1803a0940(local_res10);
          lVar5 = *plVar6;
          if (lVar5 == 0) {
            return 0;
          }
          lVar7 = FUN_18000f3a0(lVar5 + 0x10);
          if (lVar7 == 0) {
            return 0;
          }
          uVar3 = FUN_180011200(lVar7 + 0x30);
          if ((uVar3 >> 9 & 1) != 0) {
            return 0;
          }
          if ((DAT_180961a50 == 0) || (lVar7 = FUN_18000f3a0(), 0x7ffffffefffe < lVar7 - 0x10000U))
          {
            fVar8 = 0.0;
          }
          else {
            FUN_18000f3d0(lVar7);
            fVar8 = extraout_XMM0_Da;
          }
          if (DAT_1808ac34c <= fVar8 - *(float *)((longlong)plVar1 + 0x54)) {
            if ((DAT_180cd11fe == '\0') && (DAT_1811089f0 != 0)) {
              iVar4 = FUN_18038eaf0("C_SoundEventEntity","m_iszSoundName");
              DAT_180cd11fe = '\x01';
              DAT_181108850 = iVar4 + 8;
              if (iVar4 == 0) {
                DAT_181108850 = 0;
              }
              FUN_1803887a0("sound guid offset %x");
            }
            if (DAT_181108850 == 0) {
              return 0;
            }
            iVar4 = FUN_180011200(lVar5 + (ulonglong)DAT_181108850);
            if (iVar4 == 0) {
              return 0;
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 180389650 FUN_180389650 ===== */

longlong FUN_180389650(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  
  uVar6 = DAT_181108858;
  lVar3 = ((longlong)(DAT_181108860 - DAT_181108858) >> 5) * -0x5555555555555555;
  uVar7 = 0x2aaaaaaaaaaaaaa;
  if (lVar3 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar3 + 1;
  uVar5 = ((longlong)(DAT_181108868 - DAT_181108858) >> 5) * -0x5555555555555555;
  if (uVar5 <= 0x2aaaaaaaaaaaaaa - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x2aaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0x60);
  lVar11 = ((longlong)(param_2 - uVar6) / 0x60) * 0x60 + lVar4;
  lVar3 = lVar11 + 0x60;
  local_78 = &DAT_181108858;
  local_70 = lVar4;
  local_68 = uVar7;
  local_60 = lVar3;
  local_58 = lVar3;
  FUN_180389850(-((longlong)(param_2 - uVar6) >> 0x3f),lVar11,param_3);
  uVar6 = DAT_181108858;
  lVar10 = lVar4;
  if (param_2 != DAT_181108860) {
    FUN_1803898c0(DAT_181108858,param_2,lVar4);
    uVar6 = param_2;
    lVar10 = lVar3;
  }
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  FUN_1803898c0(uVar6,DAT_181108860,lVar10);
  uVar5 = DAT_181108860;
  uVar6 = DAT_181108858;
  if (DAT_181108858 == 0) goto LAB_180389800;
  for (; uVar6 != uVar5; uVar6 = uVar6 + 0x60) {
    FUN_18000f890(uVar6 + 0x10);
  }
  uVar6 = DAT_181108858;
  if ((ulonglong)(((longlong)(DAT_181108868 - DAT_181108858) >> 5) << 5) < 0x1000) {
LAB_1803897f8:
    puVar9 = puVar8;
  }
  else {
    uVar6 = *(ulonglong *)(DAT_181108858 - 8);
    uVar5 = (DAT_181108858 - uVar6) - 8;
    if (0x1f < uVar5) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_90;
      uVar6 = uVar5;
      goto LAB_1803897f8;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x180389800;
  thunk_FUN_1803d64e0(uVar6);
LAB_180389800:
  DAT_181108858 = lVar4;
  DAT_181108860 = uVar1 * 0x60 + lVar4;
  DAT_181108868 = uVar7 * 0x60 + lVar4;
  return lVar11;
}



/* ===== 180389850 FUN_180389850 ===== */

void FUN_180389850(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_2 = *param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
  FUN_180024b50(param_2 + 2,param_3 + 2);
  param_2[6] = param_3[6];
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_3 + 7);
  uVar1 = *(undefined8 *)((longlong)param_3 + 0x44);
  *(undefined8 *)((longlong)param_2 + 0x3c) = *(undefined8 *)((longlong)param_3 + 0x3c);
  *(undefined8 *)((longlong)param_2 + 0x44) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x4c) = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_3 + 10);
  *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)((longlong)param_3 + 0x54);
  *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_3 + 0xb);
  return;
}



/* ===== 1803898c0 FUN_1803898c0 ===== */

undefined8 * FUN_1803898c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_3 = *param_1;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[4] = 0;
    param_1[5] = 0xf;
    param_3[6] = param_1[6];
    *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_1 + 7);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x44);
    *(undefined8 *)((longlong)param_3 + 0x3c) = *(undefined8 *)((longlong)param_1 + 0x3c);
    *(undefined8 *)((longlong)param_3 + 0x44) = uVar1;
    *(undefined4 *)((longlong)param_3 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x4c);
    *(undefined4 *)(param_3 + 10) = *(undefined4 *)(param_1 + 10);
    *(undefined4 *)((longlong)param_3 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x54);
    *(undefined1 *)(param_3 + 0xb) = *(undefined1 *)(param_1 + 0xb);
    param_3 = param_3 + 0xc;
  }
  return param_3;
}



/* ===== 180389970 FUN_180389970 ===== */

void FUN_180389970(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x60) {
    FUN_18000f890(lVar4 + 0x10);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x60;
  if (0xfff < uVar3) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    if ((*(longlong *)(param_1 + 8) - lVar4) - 8U < 0x20) {
      thunk_FUN_1803d64e0(lVar4,uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0();
  return;
}



/* ===== 180389a20 FUN_180389a20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180389a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  ULONGLONG UVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined8 *local_430;
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_458;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180013640();
  local_438 = 0;
  local_430 = &local_res10;
  iVar1 = FUN_180501904(*puVar2 | 2,local_428,0x400,param_1);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (-1 < iVar1) {
    UVar3 = GetTickCount64();
    FUN_1802b2870("wl_world.log","[%llu] [nl_weather] %s\n",UVar3,local_428);
  }
  return;
}



/* ===== 180389ad0 FUN_180389ad0 ===== */

undefined8 FUN_180389ad0(longlong param_1)

{
  char cVar1;
  
  if ((DAT_180cd125f == '\0') && (DAT_1811089f0 != 0)) {
    DAT_1811088a4 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_180cd125f = '\x01';
  }
  if (((param_1 == 0) || (DAT_1811088a4 == 0)) ||
     (cVar1 = FUN_180011220((ulonglong)DAT_1811088a4 + param_1), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}



/* ===== 180389b40 FUN_180389b40 ===== */

undefined8 FUN_180389b40(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  HMODULE pHVar3;
  HANDLE pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  if (DAT_180cd1279 == '\0') {
    DAT_180cd1279 = '\x01';
    pHVar3 = GetModuleHandleA("engine2.dll");
    if (pHVar3 == (HMODULE)0x0) {
      local_28 = 0;
      uStack_20 = 0;
    }
    else {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      pvVar4 = GetCurrentProcess();
      iVar1 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
      if (iVar1 == 0) {
        local_28 = 0;
        uStack_20 = 0;
      }
      else {
        uStack_20 = uStack_20 & 0xffffffff;
      }
    }
    local_38 = "8B B1 ? ? ? ? 48 8B DA 8B 52 40";
    local_30 = 0x1f;
    lVar5 = FUN_1801d1e00(&local_28,&local_38);
    if ((lVar5 != 0) && (iVar1 = FUN_180011200(lVar5 + 2), iVar1 - 0x104U < 0xefc)) {
      DAT_1811088a0 = iVar1 - 4;
    }
    FUN_180389a20("network tick offset %x",DAT_1811088a0);
  }
  uVar6 = (ulonglong)DAT_1811088a0;
  if (((DAT_1811088a0 == 0) || (DAT_180961fa8 == 0)) ||
     (lVar5 = FUN_18000f3a0(), 0x7ffffffefffe < (lVar5 + uVar6) - 0x10000)) {
    return 0;
  }
  uVar2 = FUN_180011200();
  *param_1 = uVar2;
  return 1;
}



/* ===== 180389c80 FUN_180389c80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_180389c80(double *param_1,double *param_2)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int local_res8 [2];
  
  iVar5 = 0;
  *param_2 = 0.0;
  *param_1 = 0.0;
  lVar3 = FUN_1800f1c60();
  if (*(char *)(lVar3 + 0x2ac) == (char)iVar5) {
    return 0;
  }
  local_res8[0] = iVar5;
  cVar2 = FUN_180389b40(local_res8);
  if (cVar2 == '\0') {
    return 0;
  }
  if (*(int *)(lVar3 + 0x2b0) == -1) {
    if ((DAT_180961a50 == 0) || (lVar4 = FUN_18000f3a0(), 0x7ffffffefffe < lVar4 - 0x10000U)) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)FUN_18000f3d0(lVar4);
    }
    dVar7 = (double)FUN_18051f830((double)fVar6 * _DAT_1808ac630,DAT_1808ac6f8);
  }
  else {
    dVar7 = (double)*(int *)(lVar3 + 0x2b0);
  }
  fVar6 = *(float *)(lVar3 + 0x2b8);
  dVar13 = (dVar7 * DAT_1808ac588) / _DAT_1808ac6d8;
  dVar12 = (double)local_res8[0] * DAT_1808ac3a0 * _DAT_1808ac4c0;
  dVar1 = (double)*(float *)(lVar3 + 700) * DAT_1808ac4f0;
  dVar7 = (double)FUN_1805194f0(dVar12 * DAT_1808ac4f0 + DAT_1808ac460);
  dVar7 = dVar7 * _DAT_1808ac4c0;
  dVar8 = (double)FUN_1805194f0(dVar12 * _DAT_1808ac550 + _DAT_1808ac528);
  dVar8 = dVar8 * DAT_1808ac460;
  dVar9 = (double)FUN_1805194f0(dVar12 * _DAT_1808ac5b8 + _DAT_1808ac5a0);
  dVar9 = dVar9 * _DAT_1808ac438;
  dVar10 = (double)FUN_180519a60(dVar13);
  dVar11 = dVar12 * _DAT_1808ac510;
  *param_1 = (dVar7 + dVar8 + dVar9) * dVar1 + dVar10 * (double)fVar6;
  dVar7 = (double)FUN_1805194f0(dVar11 + DAT_1808ac548);
  dVar7 = dVar7 * _DAT_1808ac4c0;
  dVar8 = (double)FUN_1805194f0(dVar12 * _DAT_1808ac560 + DAT_1808ac4a8);
  dVar8 = dVar8 * DAT_1808ac460;
  dVar12 = (double)FUN_1805194f0(dVar12 * _DAT_1808ac5a8 + _DAT_1808ac580);
  dVar12 = dVar12 * _DAT_1808ac438;
  dVar9 = (double)FUN_1805194f0(dVar13);
  *param_2 = (dVar7 + dVar8 + dVar12) * dVar1 + dVar9 * (double)fVar6;
  return 1;
}



/* ===== 180389f10 FUN_180389f10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180389f10(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double local_res8;
  undefined8 *local_res10;
  float local_e8;
  float fStack_e4;
  float local_e0;
  
  local_res10 = param_2;
  lVar2 = FUN_1800f1c60();
  bVar7 = DAT_1809f7954 != 1;
  if (bVar7) {
    lVar6 = 0x338;
    local_res8 = 4.13038879923282e-321;
    lVar3 = 0x33c;
    lVar4 = 0x340;
  }
  else {
    lVar6 = 0x304;
    local_res8 = 3.87347466339537e-321;
    lVar3 = 0x308;
    lVar4 = 0x30c;
  }
  lVar5 = 0x314;
  if (bVar7) {
    lVar5 = 0x348;
    fVar17 = (float)FUN_18053f0d0((float)*(int *)(lVar2 + 0x360) * DAT_1808ac688);
    param_2 = local_res10;
  }
  else {
    fVar17 = (float)*(int *)(lVar2 + 0x32c);
  }
  fVar18 = DAT_1808acb94;
  fVar15 = 0.0;
  if ((param_1 != 0) && (DAT_1809f7950 != -1)) {
    local_e0 = *(float *)(param_2 + 1);
    local_e8 = (float)*param_2;
    fStack_e4 = (float)((ulonglong)*param_2 >> 0x20);
    FUN_180206480(param_1,DAT_1809f7950,0,&local_e8);
    if (DAT_1809f7950 != -1) {
      local_e8 = *(float *)(lVar6 + lVar2) * fVar18;
      fStack_e4 = *(float *)(lVar3 + lVar2) * fVar18;
      local_e0 = *(float *)(lVar2 + lVar4) * fVar18;
      FUN_180206480(param_1,DAT_1809f7950,1,&local_e8);
      if (DAT_1809f7950 != -1) {
        fStack_e4 = 0.0;
        local_e0 = 0.0;
        local_e8 = fVar17;
        FUN_180206480(param_1,DAT_1809f7950,2,&local_e8);
        if (DAT_1809f7950 != -1) {
          fStack_e4 = 0.0;
          local_e0 = 0.0;
          local_e8 = *(float *)((longlong)local_res8 + lVar2) * fVar18;
          FUN_180206480(param_1,DAT_1809f7950,4,&local_e8);
        }
      }
    }
  }
  fVar14 = DAT_1808ac864;
  fVar13 = 0.0;
  local_res8 = 0.0;
  local_res10 = (undefined8 *)0x0;
  if (bVar7) {
    fVar17 = (float)*(int *)(lVar2 + 0x358);
    FUN_180389c80(&local_res8,&local_res10);
    puVar1 = local_res10;
    dVar11 = local_res8;
    dVar12 = (double)local_res10 * (double)local_res10 + local_res8 * local_res8;
    if (dVar12 == 0.0) {
      local_e8 = 0.0;
      fStack_e4 = 0.0;
    }
    else {
      if (dVar12 < 0.0) {
        dVar12 = (double)FUN_18051ff20();
      }
      else {
        dVar12 = SQRT(dVar12);
      }
      lVar3 = FUN_1800f1c60();
      if (fVar17 <= DAT_1808acb08) {
        fVar15 = fVar17;
        if (fVar17 <= DAT_1808ac864) {
          fVar15 = DAT_1808ac864;
        }
        dVar10 = (double)fVar15 + (double)fVar15 + DAT_1808ac6a8;
        dVar10 = dVar10 + dVar10;
      }
      else {
        dVar10 = DAT_1808ac720;
      }
      dVar9 = dVar12;
      if (DAT_1808ac500 <= dVar12) {
        dVar9 = DAT_1808ac500;
      }
      dVar10 = dVar9 * dVar10 * ((double)*(float *)(lVar3 + 0x2c0) / _DAT_1808ac6d8);
      dVar11 = (dVar11 / dVar12) * dVar10;
      dVar10 = ((double)puVar1 / dVar12) * dVar10;
      local_e8 = (float)dVar11;
      fStack_e4 = (float)dVar10;
      fVar13 = (float)(dVar11 * DAT_1808ac4b8);
      fVar15 = (float)(dVar10 * DAT_1808ac4b8);
    }
    if (((param_1 != 0) && (DAT_1809f7950 != -1)) &&
       (local_e0 = fVar17, FUN_180206480(param_1,DAT_1809f7950,3,&local_e8), DAT_1809f7950 != -1)) {
      local_e8 = (float)*(int *)(lVar2 + 0x35c);
      fStack_e4 = 0.0;
      local_e0 = 0.0;
      FUN_180206480(param_1,DAT_1809f7950,5,&local_e8);
      if (DAT_1809f7950 != -1) {
        local_e8 = *(float *)(lVar5 + lVar2) * fVar18;
        fStack_e4 = (float)*(undefined8 *)(lVar2 + 0x34c) * _DAT_1808ade30;
        local_e0 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x34c) >> 0x20) * _UNK_1808ade34;
        FUN_180206480(param_1,DAT_1809f7950,6,&local_e8);
        if (DAT_1809f7950 != -1) {
          local_e8 = *(float *)(lVar2 + 0x354) * fVar18;
          fStack_e4 = 0.0;
          local_e0 = 0.0;
          FUN_180206480(param_1,DAT_1809f7950,7,&local_e8);
          if (DAT_1809f7950 != -1) {
            local_e0 = 0.0;
            local_e8 = fVar13;
            fStack_e4 = fVar15;
            FUN_180206480(param_1,DAT_1809f7950,8,&local_e8);
          }
        }
      }
    }
  }
  else {
    fVar16 = ((float)*(int *)(lVar2 + 0x324) - DAT_1808ac864) * DAT_1808ac750 + DAT_1808acbf0;
    FUN_180389c80(&local_res8,&local_res10);
    puVar1 = local_res10;
    dVar12 = local_res8;
    dVar11 = (double)local_res10 * (double)local_res10 + local_res8 * local_res8;
    if (dVar11 == 0.0) {
      local_e0 = (float)((uint)fVar16 ^ DAT_1808adec0);
      fVar16 = 0.0;
    }
    else {
      lVar3 = FUN_1800f1c60();
      if (dVar11 < 0.0) {
        dVar11 = (double)FUN_18051ff20();
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      dVar10 = dVar11;
      if (DAT_1808ac500 <= dVar11) {
        dVar10 = DAT_1808ac500;
      }
      dVar9 = (double)fVar16;
      dVar8 = (double)FUN_1805194f0();
      fVar15 = (float)((dVar12 / dVar11) * dVar8 * dVar9);
      fVar16 = (float)(((double)puVar1 / dVar11) * dVar8 * dVar9);
      dVar11 = (double)FUN_180519a60();
      local_e0 = (float)(dVar11 * (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^
                                                   DAT_1808adeb0._4_4_,
                                                   SUB84(dVar9,0) ^ (uint)DAT_1808adeb0));
      fVar13 = (float)(((double)*(float *)(lVar3 + 700) * _DAT_1808ac4d8 + DAT_1808ac470) * dVar10);
      fVar14 = DAT_1808ac864;
    }
    if (((param_1 != 0) && (DAT_1809f7950 != -1)) &&
       (local_e8 = fVar15, fStack_e4 = fVar16, FUN_180206480(param_1,DAT_1809f7950,3,&local_e8),
       DAT_1809f7950 != -1)) {
      local_e8 = (float)*(int *)(lVar2 + 0x328);
      fStack_e4 = 0.0;
      local_e0 = 0.0;
      FUN_180206480(param_1,DAT_1809f7950,5,&local_e8);
      if (DAT_1809f7950 != -1) {
        local_e8 = *(float *)(lVar2 + 800) * fVar18;
        fStack_e4 = 0.0;
        local_e0 = 0.0;
        FUN_180206480(param_1,DAT_1809f7950,6,&local_e8);
        if (DAT_1809f7950 != -1) {
          local_e8 = *(float *)(lVar5 + lVar2) * fVar18;
          fStack_e4 = *(float *)(lVar2 + 0x318) * fVar18;
          local_e0 = *(float *)(lVar2 + 0x31c) * fVar18;
          FUN_180206480(param_1,DAT_1809f7950,7,&local_e8);
          if (DAT_1809f7950 != -1) {
            fStack_e4 = 0.0;
            local_e0 = 0.0;
            local_e8 = fVar13;
            FUN_180206480(param_1,DAT_1809f7950,8,&local_e8);
            if (DAT_1809f7950 != -1) {
              fVar18 = (fVar17 - fVar14) / DAT_1808acaf4;
              fVar17 = (float)*(int *)(lVar2 + 0x330) * DAT_1808ac000;
              fStack_e4 = fVar18 * _DAT_1808acb64 + DAT_1808ac9ac;
              local_e0 = fVar18 * DAT_1808acb30 + DAT_1808ac900;
              local_e8 = (fStack_e4 * DAT_1808ac2cc + local_e0 * DAT_1808ac30c) * fVar17 +
                         fVar18 * _DAT_1808acb9c + DAT_1808ac9f4;
              fStack_e4 = (DAT_1808ac34c - fVar17 * DAT_1808ac2cc) * fStack_e4;
              local_e0 = (DAT_1808ac34c - fVar17 * DAT_1808ac30c) * local_e0;
              FUN_180206480(param_1,DAT_1809f7950,10,&local_e8);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 18038a730 FUN_18038a730 ===== */

undefined8 FUN_18038a730(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x2d8);
  bVar1 = *(byte *)(param_1 + 0x460);
  lVar4 = *(longlong *)(param_1 + 0x318);
  bVar2 = *(byte *)(param_1 + 0x468);
  for (uVar7 = 0; (int)uVar7 < param_2; uVar7 = uVar7 + 1) {
    lVar6 = (longlong)((int)uVar7 >> 2) * (ulonglong)bVar1 + (ulonglong)(uVar7 & 3);
    lVar5 = (longlong)(int)(uVar7 * 3);
    *(undefined4 *)(param_3 + lVar5 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
    *(undefined4 *)(param_3 + 4 + lVar5 * 4) = *(undefined4 *)(lVar3 + 0x10 + lVar6 * 4);
    *(undefined4 *)(param_3 + 8 + lVar5 * 4) = *(undefined4 *)(lVar3 + 0x20 + lVar6 * 4);
    *(undefined4 *)(param_4 + (longlong)(int)uVar7 * 4) =
         *(undefined4 *)
          (lVar4 + ((longlong)((int)uVar7 >> 2) * (ulonglong)bVar2 + (ulonglong)(uVar7 & 3)) * 4);
  }
  return 1;
}



/* ===== 18038a7e0 FUN_18038a7e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18038a7e0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  int local_res10 [2];
  uint local_78;
  uint local_74;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (DAT_181108888 != DAT_181108890) {
    DAT_181108890 = DAT_181108888;
  }
  local_res10[0] = 0;
  cVar2 = FUN_180389b40(local_res10);
  if (cVar2 == '\0') {
    return 2;
  }
  if (DAT_1809f7950 == -1) {
    return 1;
  }
  fVar9 = (float)local_res10[0] * DAT_1808ac00c;
  if (DAT_1809f7918 != DAT_1809f7950) {
    local_68 = 0xffffffff;
    local_60 = 0;
    local_58 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    local_38 = 0;
    DAT_1809f7918 = 0xffffffff;
    DAT_1809f7920 = 0;
    _DAT_1809f7928 = 0;
    DAT_1809f7930 = 0.0;
    FUN_1800ccf00(&DAT_1809f7938,&local_48);
    FUN_180068f30(&local_48);
    DAT_1809f7918 = DAT_1809f7950;
  }
  iVar1 = DAT_1809f7918;
  if (fVar9 < DAT_1809f7930) {
    local_68 = 0xffffffff;
    local_60 = 0;
    local_58 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    local_38 = 0;
    DAT_1809f7918 = 0xffffffff;
    DAT_1809f7920 = 0;
    _DAT_1809f7928 = 0;
    DAT_1809f7930 = 0.0;
    FUN_1800ccf00(&DAT_1809f7938,&local_48);
    FUN_180068f30(&local_48);
  }
  DAT_1809f7918 = iVar1;
  DAT_1809f7930 = fVar9;
  if (DAT_1809f7928 <= fVar9) {
    _DAT_1809f7928 = CONCAT44(DAT_1809f792c,fVar9 + DAT_1808ac0c0);
    if (DAT_1809f792c <= fVar9) {
      if (param_1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_180386be0(param_1,DAT_1809f7950);
      }
      if ((DAT_180cd110e == '\0') && (DAT_1811089f0 != 0)) {
        DAT_181108844 = FUN_18038eaf0("CNewParticleEffect","m_pParticles");
        DAT_180cd110e = '\x01';
      }
      if (((lVar4 == 0) || (DAT_181108844 == 0)) ||
         (lVar4 = FUN_18000f3a0((ulonglong)DAT_181108844 + lVar4), lVar4 == 0)) {
        local_68 = 0xffffffff;
        local_60 = 0;
        local_58 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_50 = 0;
        local_38 = 0;
        DAT_1809f7918 = 0xffffffff;
        DAT_1809f7920 = 0;
        _DAT_1809f7928 = 0;
        DAT_1809f7930 = 0.0;
        FUN_1800ccf00(&DAT_1809f7938,&local_48);
        FUN_180068f30(&local_48);
        return 1;
      }
      lVar5 = FUN_18000f3a0(lVar4 + 0x20);
      if ((lVar5 == 0) || (lVar6 = FUN_18000f3a0(lVar5 + 0x28), lVar6 != lVar4)) {
        DAT_1809f7920 = 0;
        if (DAT_1809f7938 != DAT_1809f7940) {
          DAT_1809f7940 = DAT_1809f7938;
        }
        _DAT_1809f7928 = CONCAT44(fVar9 + DAT_1808ac140,DAT_1809f7928);
      }
      else {
        _DAT_1809f7928 = _DAT_1809f7928 & 0xffffffff;
        if ((DAT_1809f7920 != lVar5) && (DAT_1809f7920 = lVar5, DAT_1809f7938 != DAT_1809f7940)) {
          DAT_1809f7940 = DAT_1809f7938;
        }
        uVar3 = FUN_180011200(lVar5 + 0x74);
        lVar4 = (longlong)(int)uVar3;
        if (100000 < uVar3) {
          return 3;
        }
        if (uVar3 != 0) {
          lVar6 = FUN_18000f3a0(lVar5 + 0x2d8);
          if ((lVar6 != 0) && (cVar2 = FUN_180011220(lVar5 + 0x460), cVar2 == '\f')) {
            lVar6 = FUN_18000f3a0(lVar5 + 0x318);
            if ((lVar6 == 0) || (cVar2 = FUN_180011220(lVar5 + 0x468), cVar2 != '\x04')) {
              return 5;
            }
            local_res10[0] = 0x7fc00000;
            FUN_18038b4d0(&DAT_1809f7938,lVar4,local_res10);
            FUN_1800d50c0(&DAT_1811088a8,lVar4 * 3);
            FUN_1800d50c0(&DAT_181108870,lVar4);
            cVar2 = FUN_18038a730(lVar5,uVar3,DAT_1811088a8,DAT_181108870);
            if (cVar2 != '\0') {
              uVar8 = 0;
              if ((int)uVar3 < 1) {
                return 0;
              }
              do {
                uVar7 = (ulonglong)uVar8;
                fVar9 = *(float *)(DAT_181108870 + uVar7 * 4);
                if ((((((uint)fVar9 & 0x7f800000) == 0x7f800000) ||
                     (local_78 = *(uint *)(DAT_1811088a8 + uVar7 * 0xc),
                     (local_78 & 0x7f800000) == 0x7f800000)) ||
                    (local_74 = *(uint *)(DAT_1811088a8 + 4 + uVar7 * 0xc),
                    (local_74 & 0x7f800000) == 0x7f800000)) ||
                   (local_70 = *(uint *)(DAT_1811088a8 + 8 + uVar7 * 0xc),
                   (local_70 & 0x7f800000) == 0x7f800000)) {
                  *(undefined4 *)(DAT_1809f7938 + uVar7 * 4) = 0x7fc00000;
                }
                else {
                  if (*(float *)(DAT_1809f7938 + uVar7 * 4) != fVar9) {
                    FUN_180081aa0(&DAT_181108888,&local_78);
                  }
                  *(float *)(DAT_1809f7938 + uVar7 * 4) = fVar9;
                }
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)uVar3);
              return 0;
            }
          }
          return 4;
        }
        if (DAT_1809f7938 != DAT_1809f7940) {
          DAT_1809f7940 = DAT_1809f7938;
        }
      }
    }
  }
  return 0;
}



/* ===== 18038ad00 FUN_18038ad00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18038ad00(undefined8 param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  undefined1 local_58 [16];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 uStack_3c;
  
  lVar2 = FUN_1800f1c60();
  if ((DAT_1809f7954 != 1) || (*(char *)(lVar2 + 0x334) == '\0')) {
    FUN_180388f10(&DAT_1809f7960);
    DAT_1809f7970 = 0xffffffff;
    DAT_1809f7980 = 0;
    return;
  }
  iVar6 = 0;
  if (0x27 < *(int *)(lVar2 + 0x32c)) {
    iVar6 = (0x45 < *(int *)(lVar2 + 0x32c)) + 1;
  }
  if (iVar6 != DAT_1809f7970) {
    FUN_180388f10(&DAT_1809f7960);
    DAT_1809f7970 = iVar6;
  }
  iVar6 = FUN_18038a7e0(param_1);
  if (iVar6 != DAT_1809f732c) {
    DAT_1809f732c = iVar6;
    FUN_180389a20("rain sound sample status %d (%zu fresh points)",iVar6,
                  ((longlong)DAT_181108890 - (longlong)DAT_181108888 >> 2) * -0x5555555555555555);
  }
  if ((iVar6 == 0) && (DAT_181108888 != DAT_181108890)) {
    pfVar5 = DAT_181108888;
    pfVar3 = DAT_181108888;
    fVar8 = DAT_1808acd08;
    do {
      fVar9 = (pfVar5[1] - param_2[1]) * (pfVar5[1] - param_2[1]) +
              (*pfVar5 - *param_2) * (*pfVar5 - *param_2) +
              (pfVar5[2] - param_2[2]) * (pfVar5[2] - param_2[2]);
      if (fVar9 < fVar8) {
        pfVar3 = pfVar5;
        fVar8 = fVar9;
      }
      pfVar5 = pfVar5 + 3;
    } while (pfVar5 != DAT_181108890);
    if ((DAT_180961a50 == 0) || (lVar2 = FUN_18000f3a0(), 0x7ffffffefffe < lVar2 - 0x10000U)) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)FUN_18000f3d0(lVar2);
    }
    bVar7 = DAT_1809f7980 == '\0';
    if ((DAT_1809f7980 != '\0') && (_DAT_1809f7984 <= fVar8)) {
      bVar7 = _DAT_1808acccc <
              (pfVar3[1] - _DAT_1809f7978) * (pfVar3[1] - _DAT_1809f7978) +
              (*pfVar3 - _DAT_1809f7974) * (*pfVar3 - _DAT_1809f7974) +
              (pfVar3[2] - _DAT_1809f797c) * (pfVar3[2] - _DAT_1809f797c);
    }
    if (!bVar7) goto LAB_18038af2d;
    FUN_180388f10(&DAT_1809f7960);
    _DAT_1809f7974 = *(undefined8 *)pfVar3;
    _DAT_1809f7984 = fVar8 + DAT_1808ac34c;
    _DAT_1809f797c = pfVar3[2];
    DAT_1809f7980 = '\x01';
  }
  else {
LAB_18038af2d:
    if (DAT_1809f7980 == '\0') {
      return;
    }
  }
  cVar1 = FUN_180389020();
  if (cVar1 == '\0') {
    if (DAT_1809f7960 == 0) {
      return;
    }
  }
  else if (DAT_1809f7960 == 0) goto LAB_18038af79;
  cVar1 = FUN_1803894b0(&DAT_1809f7960);
  if (cVar1 != '\0') {
    return;
  }
LAB_18038af79:
  FUN_180388f10(&DAT_1809f7960);
  local_48[0] = 1;
  local_44 = _DAT_1808adcc0;
  uStack_3c = _UNK_1808adcc8;
  puVar4 = (undefined8 *)
           FUN_180388c30(local_58,(&PTR_s_Base_RainExterior_1806ad118)[DAT_1809f7970],&DAT_1809f7974
                         ,local_48);
  _DAT_1809f7968 = puVar4[1];
  DAT_1809f7960 = *puVar4;
  return;
}



/* ===== 18038b000 FUN_18038b000 ===== */

undefined8 FUN_18038b000(undefined4 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_res10 [3];
  undefined1 local_18 [16];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    DAT_181108a00 = local_res10[0];
    DAT_1811089f8 = FUN_1803a0c50(local_res10);
    DAT_180cd1304 = '\x01';
  }
  lVar2 = DAT_1811089f8;
  if ((DAT_1811089f8 == 0) || (cVar1 = FUN_180389ad0(DAT_1811089f8), cVar1 == '\0')) {
    uVar4 = FUN_1803a1740(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,param_1);
    return uVar4;
  }
  if (((DAT_180ca09f8 == 0) || (lVar2 = FUN_18000f3a0(lVar2 + (ulonglong)DAT_180ca09f8), lVar2 == 0)
      ) || (DAT_180ca0950 == 0)) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = (undefined4 *)FUN_1800111b0(local_18,lVar2 + (ulonglong)DAT_180ca0950);
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  return 1;
}



/* ===== 18038b0f0 FUN_18038b0f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18038b0f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar5 = FUN_1800f1c60();
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    DAT_1811089f8 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  lVar2 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
    uVar7 = 0xffffffff;
LAB_18038b1b2:
    cVar3 = '\0';
  }
  else {
    lVar6 = FUN_18000f3a0(DAT_1811089f8 + 0x10);
    if (lVar6 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar10 = FUN_180011200(lVar6 + 0x10);
      uVar7 = FUN_180011200(lVar6 + 0x30);
      uVar7 = uVar10 + (uVar7 & 1) * -0x8000;
      uVar7 = (uVar7 ^ uVar10) & 0x7fff ^ uVar7;
    }
    cVar3 = FUN_180389ad0(lVar2);
    if (cVar3 == '\0') goto LAB_18038b1b2;
    cVar3 = '\x01';
  }
  if (*(char *)(lVar5 + 0x302) == '\0') {
    uVar10 = -(uint)(*(char *)(lVar5 + 0x335) != '\0') & 2;
  }
  else {
    uVar10 = 1;
  }
  iVar4 = -1;
  if ((uVar10 == DAT_1809f7954) && (uVar7 == DAT_1809f7958)) {
    if (cVar3 != DAT_1809f795c) goto LAB_18038b1f8;
  }
  else {
LAB_18038b1f8:
    FUN_1802064e0(param_1,DAT_1809f7950);
    DAT_1809f7950 = -1;
    FUN_180388f10(&DAT_1809f7960);
    DAT_1809f7970 = 0xffffffff;
    DAT_1809f7980 = 0;
    _DAT_1809f7984 = 0;
    DAT_1809f7954 = uVar10;
    DAT_1809f7958 = uVar7;
    DAT_1809f795c = cVar3;
  }
  local_28 = 0;
  local_20 = 0;
  cVar3 = FUN_18038b000(&local_28);
  iVar1 = DAT_1809f7950;
  if (cVar3 == '\0') {
    return;
  }
  if (DAT_1809f7954 == 0) goto LAB_18038b3ac;
  if (DAT_1809f7954 == 1) {
    if ((DAT_180cd125d != '\0') && (DAT_180cd125e != '\0')) {
      cVar3 = DAT_180cd1278;
      goto LAB_18038b2ac;
    }
  }
  else {
    cVar3 = DAT_180cd127a;
LAB_18038b2ac:
    if (cVar3 != '\0') {
      if ((param_1 != 0) && (DAT_1809f7950 != -1)) {
        if ((DAT_180cd110e == '\0') && (DAT_1811089f0 != 0)) {
          DAT_181108844 = FUN_18038eaf0("CNewParticleEffect","m_pParticles");
          DAT_180cd110e = '\x01';
        }
        cVar3 = FUN_180386b60(param_1,iVar1);
        if (cVar3 != '\0') goto LAB_18038b396;
      }
      pcVar8 = "particles/neverlose/weather_snow.vpcf";
      if (DAT_1809f7954 == 1) {
        pcVar8 = "particles/neverlose/weather_rain.vpcf";
      }
      if (param_1 != 0) {
        iVar4 = FUN_180386ad0(param_1,pcVar8,8);
      }
      uVar7 = (uint)(iVar4 != -1) | DAT_1809f7954 * 2;
      DAT_1809f7950 = iVar4;
      if (DAT_1809f7328 != uVar7) {
        pcVar8 = "create failed";
        if (iVar4 != -1) {
          pcVar8 = "created";
        }
        puVar9 = &DAT_1806f8c7c;
        if (DAT_1809f7954 == 1) {
          puVar9 = &DAT_1806f8bfc;
        }
        DAT_1809f7328 = uVar7;
        FUN_180389a20("%s effect %s (%d)",puVar9,pcVar8,iVar4);
      }
    }
  }
LAB_18038b396:
  if (DAT_1809f7950 != -1) {
    FUN_180389f10(param_1,&local_28);
  }
LAB_18038b3ac:
  FUN_18038ad00(param_1,&local_28);
  return;
}



/* ===== 18038b3d0 FUN_18038b3d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18038b3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_ffffffffffffffc0;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FUN_1802064e0(param_1,DAT_1809f7950);
  FUN_180388f10();
  _DAT_1809f795d = (undefined2)((ulonglong)in_stack_ffffffffffffffc0 >> 0x28);
  DAT_1809f795f = (undefined1)((ulonglong)in_stack_ffffffffffffffc0 >> 0x38);
  _DAT_1809f7981 = local_18._1_2_;
  DAT_1809f7983 = local_18._3_1_;
  local_18 = 0;
  DAT_1809f7954 = 0;
  DAT_1809f795c = 0;
  DAT_1809f7960 = 0;
  _DAT_1809f7968 = 0;
  _DAT_1809f7974 = 0;
  _DAT_1809f797c = 0;
  DAT_1809f7980 = 0;
  _DAT_1809f7984 = 0;
  DAT_1809f7920 = 0;
  _DAT_1809f7928 = 0;
  DAT_1809f7930 = 0;
  DAT_1809f7950 = 0xffffffff;
  DAT_1809f7958 = 0xffffffff;
  DAT_1809f7970 = 0xffffffff;
  local_28 = 0;
  uStack_20 = 0;
  DAT_1809f7918 = 0xffffffff;
  FUN_1800ccf00(&DAT_1809f7938,&local_28,param_3,param_4,0xffffffff,0,0,0);
  FUN_180068f30(&local_28);
  return;
}



/* ===== 18038b4d0 FUN_18038b4d0 ===== */

void FUN_18038b4d0(longlong *param_1,ulonglong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1[1];
  lVar1 = *param_1;
  uVar4 = (longlong)piVar6 - lVar1 >> 2;
  if (param_2 < uVar4) {
    param_1[1] = lVar1 + param_2 * 4;
    return;
  }
  if (uVar4 < param_2) {
    uVar3 = param_1[2] - lVar1 >> 2;
    if (uVar3 < param_2) {
      if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      uVar5 = 0x3fffffffffffffff;
      if (uVar3 <= 0x3fffffffffffffff - (uVar3 >> 1)) {
        uVar5 = (uVar3 >> 1) + uVar3;
        if (uVar5 < param_2) {
          uVar5 = param_2;
        }
        else if (0x3fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_18000d840();
        }
      }
      lVar2 = FUN_18000fb70(uVar5 * 4);
      uVar4 = param_2 - uVar4;
      piVar6 = (int *)(((longlong)piVar6 - lVar1 & 0xfffffffffffffffcU) + lVar2);
      if (*param_3 == 0) {
        FUN_180540170(piVar6,0,uVar4 * 4);
      }
      else {
        for (; 3 < uVar4; uVar4 = uVar4 - 4) {
          *piVar6 = *param_3;
          piVar6[1] = *param_3;
          piVar6[2] = *param_3;
          piVar6[3] = *param_3;
          piVar6 = piVar6 + 4;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *piVar6 = *param_3;
          piVar6 = piVar6 + 1;
        }
      }
      FUN_180540530(lVar2,*param_1,param_1[1] - *param_1);
      FUN_18006b9f0(param_1,lVar2,param_2,uVar5);
      return;
    }
    param_2 = param_2 - uVar4;
    if (*param_3 == 0) {
      FUN_180540170(piVar6,0,param_2 * 4);
      piVar6 = piVar6 + param_2;
    }
    else {
      for (; 3 < param_2; param_2 = param_2 - 4) {
        *piVar6 = *param_3;
        piVar6[1] = *param_3;
        piVar6[2] = *param_3;
        piVar6[3] = *param_3;
        piVar6 = piVar6 + 4;
      }
      for (; param_2 != 0; param_2 = param_2 - 1) {
        *piVar6 = *param_3;
        piVar6 = piVar6 + 1;
      }
    }
    param_1[1] = (longlong)piVar6;
  }
  return;
}



/* ===== 18038b6a0 FUN_18038b6a0 ===== */

void FUN_18038b6a0(void)

{
  if ((DAT_181108920 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181108924 = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
    DAT_181108928 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    DAT_18110892c = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_181108930 = FUN_18038eaf0("C_BasePlayerPawn","m_hController");
    DAT_181108934 = FUN_18038eaf0("C_CSPlayerPawnBase","m_hOriginalController");
    DAT_181108938 = FUN_18038eaf0("CCSPlayerController","m_iCoachingTeam");
    DAT_18110893c = FUN_18038eaf0("C_BaseCSGrenadeProjectile","m_nExplodeEffectTickBegin");
    DAT_181108940 = FUN_18038eaf0("C_Inferno","m_nInfernoType");
    DAT_181108944 = FUN_18038eaf0("C_CSGameRules","m_bWarmupPeriod");
    DAT_181108948 = FUN_18038eaf0("C_CSGameRules","m_bFreezePeriod");
    DAT_18110894c = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_181108950 = FUN_18038eaf0("C_BaseEntity","m_bTakesDamage");
    DAT_181108954 = FUN_18038eaf0("C_CSPlayerPawn","m_bGunGameImmunity");
    DAT_181108958 = FUN_18038eaf0("C_BaseEntity","m_nActualMoveType");
    DAT_18110895c = FUN_18038eaf0("C_BaseEntity","m_fFlags");
    DAT_181108960 = FUN_18038eaf0("C_BaseEntity","m_nTakeDamageFlags");
    DAT_181108964 = FUN_18038eaf0("C_CSPlayerPawn","m_flHealthShotBoostExpirationTime");
    DAT_181108968 = FUN_18038eaf0("C_BaseModelEntity","m_vecViewOffset");
    DAT_18110896c = FUN_18038eaf0("C_SmokeGrenadeProjectile","m_bDidSmokeEffect");
    DAT_181108970 = FUN_18038eaf0("C_GameRules","m_bGamePaused");
    if (DAT_181108970 == 0) {
      DAT_181108970 = FUN_18038eaf0("C_CSGameRules","m_bGamePaused");
    }
    DAT_181108974 = FUN_18038eaf0("C_GameRules","m_nPauseStartTick");
    if (DAT_181108974 == 0) {
      DAT_181108974 = FUN_18038eaf0("C_CSGameRules","m_nPauseStartTick");
    }
    DAT_181108978 = FUN_18038eaf0("C_GameRules","m_nTotalPausedTicks");
    if (DAT_181108978 == 0) {
      DAT_181108978 = FUN_18038eaf0("C_CSGameRules","m_nTotalPausedTicks");
    }
    DAT_18110897c = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
    DAT_181108920 = '\x01';
    if (((((DAT_18110894c == 0) || (DAT_181108950 == 0)) || (DAT_181108954 == 0)) ||
        (((DAT_181108958 == 0 || (DAT_18110895c == 0)) ||
         ((DAT_181108960 == 0 || ((DAT_181108964 == 0 || (DAT_181108968 == 0)))))))) ||
       ((DAT_18110896c == 0 || (DAT_18110897c == 0)))) {
      FUN_1802b2560(
                   "[error] world effects | fire damage schema: life %x takes %x immunity %x move %x flags %x damage flags %x boost %x view %x smoke %x group %x"
                   );
    }
    if (((((DAT_181108924 == 0) || (DAT_181108928 == 0)) || (DAT_18110892c == 0)) ||
        ((DAT_181108930 == 0 || (DAT_18110893c == 0)))) || (DAT_181108940 == 0)) {
      FUN_1802b2560(
                   "[error] world effects | schema: owner %x node %x team %x controller %x explode %x inferno %x"
                   );
    }
  }
  return;
}



/* ===== 18038ba70 FUN_18038ba70 ===== */

uint FUN_18038ba70(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong local_res10 [3];
  
  if (DAT_181108930 != 0) {
    uVar3 = FUN_180011200((ulonglong)DAT_181108930 + *param_1);
    FUN_1803a0940(local_res10,uVar3);
    if (local_res10[0] != 0) {
      bVar1 = FUN_180011220((ulonglong)DAT_18110892c + local_res10[0]);
      uVar5 = (uint)bVar1;
      if ((bVar1 == 1) && (DAT_181108938 != 0)) {
        if (DAT_1809f9cf0 == 0) {
          DAT_1809f9cf0 = bVar1;
          DAT_1809f9ce8 = FUN_180264b70(PTR_s_sv_coaching_enabled_1809f9ce0);
          if (DAT_1809f9ce8 == 0) {
            FUN_1802b2560("[error] world effects | ConVar %s not found",
                          PTR_s_sv_coaching_enabled_1809f9ce0);
          }
        }
        if (DAT_1809f9ce8 != 0) {
          cVar2 = FUN_180264d70();
          if (cVar2 != '\0') {
            uVar4 = FUN_180011200((ulonglong)DAT_181108938 + local_res10[0]);
            uVar5 = 1;
            if (uVar4 != 0) {
              uVar5 = uVar4;
            }
          }
        }
      }
      return uVar5;
    }
  }
  bVar1 = FUN_180011220((ulonglong)DAT_18110892c + *param_1);
  return (uint)bVar1;
}



/* ===== 18038bb60 FUN_18038bb60 ===== */

bool FUN_18038bb60(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  char *_Str1;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_res20 [8];
  
  if (param_3 == '\0') {
LAB_18038bc17:
    if (DAT_1809f9d20 == '\0') {
      DAT_1809f9d20 = '\x01';
      DAT_1809f9d18 = FUN_180264b70(PTR_s_inferno_damage_1809f9d10);
      if (DAT_1809f9d18 == 0) {
        FUN_1802b2560("[error] world effects | ConVar %s not found",PTR_s_inferno_damage_1809f9d10);
      }
    }
    lVar9 = DAT_1809f9d18;
  }
  else {
    if (DAT_1809f7a10 == '\0') {
      DAT_1809f7a10 = '\x01';
      DAT_1809f7a08 = FUN_180264b70(PTR_s_inferno_ct_experiment_1809f7a00);
      if (DAT_1809f7a08 == 0) {
        FUN_1802b2560("[error] world effects | ConVar %s not found",
                      PTR_s_inferno_ct_experiment_1809f7a00);
      }
    }
    if ((DAT_1809f7a08 == 0) || (cVar1 = FUN_180264d70(), cVar1 == '\0')) goto LAB_18038bc17;
    if (DAT_1809f9d08 == '\0') {
      DAT_1809f9d08 = '\x01';
      DAT_1809f9d00 = FUN_180264b70(PTR_s_inferno_damage_ct_1809f9cf8);
      if (DAT_1809f9d00 == 0) {
        FUN_1802b2560("[error] world effects | ConVar %s not found",
                      PTR_s_inferno_damage_ct_1809f9cf8);
      }
    }
    lVar9 = DAT_1809f9d00;
  }
  if (lVar9 == 0) {
    fVar7 = DAT_1808aca54;
  }
  else {
    fVar7 = (float)FUN_180264d70();
  }
  if (DAT_1809f79f8 == '\0') {
    DAT_1809f79f8 = '\x01';
    DAT_1809f79f0 = FUN_180264b70(PTR_s_inferno_damage_timer_1809f79e8);
    if (DAT_1809f79f0 == 0) {
      FUN_1802b2560("[error] world effects | ConVar %s not found",
                    PTR_s_inferno_damage_timer_1809f79e8);
    }
  }
  if (DAT_1809f79f0 == 0) {
    fVar3 = DAT_1808ac0d8;
  }
  else {
    fVar3 = (float)FUN_180264d70();
  }
  if (fVar7 <= 0.0) {
    return false;
  }
  if (fVar3 <= 0.0) {
    return false;
  }
  if (fVar3 * fVar7 < DAT_1808ac34c) {
    return false;
  }
  if (*param_2 == 0) {
    return true;
  }
  if (*param_1 == 0) {
    return true;
  }
  _Str1 = (char *)FUN_1803a0710(param_2);
  if (_Str1 == (char *)0x0) {
    return true;
  }
  iVar4 = strcmp(_Str1,"CCSPlayerController");
  if (iVar4 != 0) {
    return true;
  }
  if (DAT_181108930 != 0) {
    uVar5 = FUN_180011200((ulonglong)DAT_181108930 + *param_1);
    plVar8 = (longlong *)FUN_1803a0940(local_res20,uVar5);
    lVar9 = *plVar8;
    if (lVar9 != 0) goto LAB_18038bd83;
  }
  lVar9 = 0;
  if (DAT_181108934 != 0) {
    uVar5 = FUN_180011200((ulonglong)DAT_181108934 + *param_1);
    plVar8 = (longlong *)FUN_1803a0940(local_res20,uVar5);
    lVar9 = *plVar8;
  }
LAB_18038bd83:
  if (lVar9 != *param_2) {
    if (DAT_1809f7998 == '\0') {
      DAT_1809f7998 = '\x01';
      DAT_1809f7990 = FUN_180264b70(PTR_s_mp_teammates_are_enemies_1809f7988);
      if (DAT_1809f7990 == 0) {
        FUN_1802b2560("[error] world effects | ConVar %s not found",
                      PTR_s_mp_teammates_are_enemies_1809f7988);
      }
    }
    if ((DAT_1809f7990 == 0) || (cVar1 = FUN_180264d70(), cVar1 == '\0')) {
      bVar2 = FUN_180011220((ulonglong)DAT_18110892c + *param_2);
      uVar10 = (uint)bVar2;
      if ((bVar2 == 1) && (DAT_181108938 != 0)) {
        if ((DAT_1809f9cf0 == 0) &&
           (DAT_1809f9cf0 = bVar2,
           DAT_1809f9ce8 = FUN_180264b70(PTR_s_sv_coaching_enabled_1809f9ce0), DAT_1809f9ce8 == 0))
        {
          FUN_1802b2560("[error] world effects | ConVar %s not found",
                        PTR_s_sv_coaching_enabled_1809f9ce0);
        }
        if ((DAT_1809f9ce8 != 0) && (cVar1 = FUN_180264d70(), cVar1 != '\0')) {
          uVar6 = FUN_180011200((ulonglong)DAT_181108938 + *param_2);
          uVar10 = 1;
          if (uVar6 != 0) {
            uVar10 = uVar6;
          }
        }
      }
      uVar6 = FUN_18038ba70(param_1);
      if (uVar6 == uVar10) {
        if (DAT_1809f79e0 == '\0') {
          DAT_1809f79e0 = '\x01';
          DAT_1809f79d8 = FUN_180264b70(PTR_s_mp_friendlyfire_1809f79d0);
          if (DAT_1809f79d8 == 0) {
            FUN_1802b2560("[error] world effects | ConVar %s not found",
                          PTR_s_mp_friendlyfire_1809f79d0);
          }
        }
        if (((DAT_1809f79d8 == 0) || (cVar1 = FUN_180264d70(), cVar1 == '\0')) ||
           ((lVar9 = FUN_180266660(), lVar9 != 0 &&
            (((DAT_181108944 != 0 &&
              (cVar1 = FUN_180011220(lVar9 + (ulonglong)DAT_181108944), cVar1 != '\0')) ||
             ((DAT_181108948 != 0 &&
              (cVar1 = FUN_180011220(lVar9 + (ulonglong)DAT_181108948), cVar1 != '\0')))))))) {
          return false;
        }
        if (DAT_1809f7a28 == '\0') {
          DAT_1809f7a28 = '\x01';
          DAT_1809f7a20 = FUN_180264b70(PTR_s_ff_damage_reduction_other_1809f7a18);
          if (DAT_1809f7a20 == 0) {
            FUN_1802b2560("[error] world effects | ConVar %s not found",
                          PTR_s_ff_damage_reduction_other_1809f7a18);
          }
        }
        if (DAT_1809f7a20 == 0) {
          return false;
        }
        fVar7 = (float)FUN_180264d70();
        return 0.0 < fVar7;
      }
    }
  }
  return true;
}



/* ===== 18038bf90 FUN_18038bf90 ===== */

undefined8 FUN_18038bf90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (((*(longlong *)(param_1 + 0xd0) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x18), uVar3 = 0, lVar1 != 0)) &&
     (puVar2 = *(undefined8 **)(lVar1 + 8), uVar3 = 0, puVar2 != (undefined8 *)0x0)) {
    uVar3 = *puVar2;
  }
  return uVar3;
}



/* ===== 18038bfc0 FUN_18038bfc0 ===== */

bool FUN_18038bfc0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef120();
  return lVar1 != 0;
}



/* ===== 18038bfe0 FUN_18038bfe0 ===== */

ulonglong FUN_18038bfe0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  plVar2 = *(longlong **)(param_1 + 0xd0);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(*plVar2 + 0xc0))(plVar2,0);
    uVar3 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      *param_2 = *puVar4;
      param_2[1] = puVar4[1];
      uVar1 = puVar4[2];
      param_2[2] = uVar1;
      uVar3 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return uVar3;
}



/* ===== 18038c030 FUN_18038c030 ===== */

void FUN_18038c030(longlong param_1,float *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = 0.0;
  if (0.0 <= param_2[3]) {
    fVar4 = param_2[3];
  }
  fVar6 = DAT_1808ac34c;
  if (fVar4 <= DAT_1808ac34c) {
    fVar6 = fVar4;
  }
  uVar1 = 0xff;
  uVar2 = 0xff;
  uVar3 = 0xff;
  fVar4 = DAT_1808ac34c;
  if ((param_2[1] - DAT_1808ac34c) * (param_2[1] - DAT_1808ac34c) +
      (*param_2 - DAT_1808ac34c) * (*param_2 - DAT_1808ac34c) +
      (param_2[2] - DAT_1808ac34c) * (param_2[2] - DAT_1808ac34c) +
      (fVar6 - DAT_1808ac34c) * (fVar6 - DAT_1808ac34c) != 0.0) {
    fVar5 = DAT_1808ac34c;
    if (*param_2 <= DAT_1808ac34c) {
      fVar5 = *param_2;
    }
    uVar1 = (undefined1)(int)(fVar5 * DAT_1808acb94);
    fVar5 = DAT_1808ac34c;
    if (param_2[1] <= DAT_1808ac34c) {
      fVar5 = param_2[1];
    }
    uVar2 = (undefined1)(int)(fVar5 * DAT_1808acb94);
    fVar5 = DAT_1808ac34c;
    if (param_2[2] <= DAT_1808ac34c) {
      fVar5 = param_2[2];
    }
    uVar3 = (undefined1)(int)(fVar5 * DAT_1808acb94);
    if (fVar6 <= DAT_1808ac34c) {
      fVar4 = fVar6;
    }
  }
  *(undefined1 *)(param_1 + 0x94) = uVar1;
  *(undefined1 *)(param_1 + 0x95) = uVar2;
  *(undefined1 *)(param_1 + 0x96) = uVar3;
  *(float *)(param_1 + 0x74) = fVar4;
  return;
}



/* ===== 18038c110 FUN_18038c110 ===== */

void FUN_18038c110(longlong param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res18 [2];
  float local_res20 [2];
  float local_28 [10];
  
  fVar7 = DAT_1808acb94;
  fVar6 = DAT_1808ac34c;
  fVar5 = *(float *)(param_1 + 0x74) - DAT_1808ac34c;
  pfVar1 = param_2 + 2;
  fVar4 = *param_2 - DAT_1808ac34c;
  pfVar3 = param_2 + 1;
  if ((*pfVar3 - DAT_1808ac34c) * (*pfVar3 - DAT_1808ac34c) + fVar4 * fVar4 +
      (*pfVar1 - DAT_1808ac34c) * (*pfVar1 - DAT_1808ac34c) + fVar5 * fVar5 == 0.0) {
    *(undefined2 *)(param_1 + 0x94) = 0xffff;
    *(undefined1 *)(param_1 + 0x96) = 0xff;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  }
  else {
    local_res18[0] = 1.0;
    pfVar2 = local_res18;
    if (*param_2 <= DAT_1808ac34c) {
      pfVar2 = param_2;
    }
    *(char *)(param_1 + 0x94) = (char)(int)(*pfVar2 * DAT_1808acb94);
    local_res20[0] = 1.0;
    pfVar2 = local_res20;
    if (*pfVar3 <= fVar6) {
      pfVar2 = pfVar3;
    }
    *(char *)(param_1 + 0x95) = (char)(int)(*pfVar2 * fVar7);
    local_28[0] = 1.0;
    pfVar3 = local_28;
    if (*pfVar1 <= fVar6) {
      pfVar3 = pfVar1;
    }
    *(char *)(param_1 + 0x96) = (char)(int)(*pfVar3 * fVar7);
    fVar7 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0x74)) {
      fVar7 = *(float *)(param_1 + 0x74);
    }
    if (fVar7 <= fVar6) {
      fVar6 = fVar7;
    }
    *(float *)(param_1 + 0x74) = fVar6;
  }
  return;
}



/* ===== 18038c230 FUN_18038c230 ===== */

void FUN_18038c230(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x74);
  *(undefined2 *)(param_1 + 0x94) = 0xffff;
  *(undefined1 *)(param_1 + 0x96) = 0xff;
  fVar3 = DAT_1808ac34c;
  if (fVar1 != DAT_1808ac34c) {
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    if (fVar2 <= DAT_1808ac34c) {
      fVar3 = fVar2;
    }
  }
  *(float *)(param_1 + 0x74) = fVar3;
  return;
}



/* ===== 18038c270 FUN_18038c270 ===== */

undefined4 FUN_18038c270(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}



/* ===== 18038c280 FUN_18038c280 ===== */

undefined1 FUN_18038c280(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_58;
  float local_50;
  
  iVar2 = FUN_18038c270(param_2);
  if (iVar2 != -1) {
    uVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x788) != 0) {
      do {
        if (*(int *)(param_1 + 0x790 + uVar3 * 8) == iVar2) {
          return *(undefined1 *)(param_1 + 0x794 + uVar3 * 8);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulonglong *)(param_1 + 0x788));
    }
  }
  local_58 = 0;
  local_50 = 0.0;
  cVar1 = FUN_18038bfe0(param_2,&local_58);
  if (cVar1 == '\0') {
    return *(undefined1 *)(param_1 + 0x74);
  }
  uVar3 = *(ulonglong *)(param_1 + 0x78);
  uVar5 = 0;
  uVar6 = 0x40;
  fVar14 = DAT_1808acd08;
  if (uVar3 < 4) {
    if (uVar3 != 0) goto LAB_18038c4d7;
  }
  else {
    lVar4 = 0;
    do {
      fVar10 = *(float *)(param_1 + 0x80 + lVar4) - (float)local_58;
      fVar12 = *(float *)(param_1 + 0x84 + lVar4) - local_58._4_4_;
      fVar9 = *(float *)(param_1 + 0x88 + lVar4) - local_50;
      fVar10 = fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9;
      fVar9 = fVar14;
      if (fVar10 < fVar14) {
        fVar9 = fVar10;
      }
      fVar11 = *(float *)(param_1 + 0x90 + lVar4) - (float)local_58;
      fVar12 = *(float *)(param_1 + 0x98 + lVar4) - local_50;
      fVar13 = *(float *)(param_1 + 0x94 + lVar4) - local_58._4_4_;
      uVar8 = uVar5;
      if (fVar14 <= fVar10) {
        uVar8 = uVar6;
      }
      fVar14 = fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12;
      fVar10 = fVar9;
      if (fVar14 < fVar9) {
        fVar10 = fVar14;
      }
      fVar11 = *(float *)(param_1 + 0xa0 + lVar4) - (float)local_58;
      fVar12 = *(float *)(param_1 + 0xa8 + lVar4) - local_50;
      fVar13 = *(float *)(param_1 + 0xa4 + lVar4) - local_58._4_4_;
      uVar7 = uVar5 + 1;
      if (fVar9 <= fVar14) {
        uVar7 = uVar8;
      }
      fVar9 = fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12;
      fVar14 = fVar10;
      if (fVar9 < fVar10) {
        fVar14 = fVar9;
      }
      fVar11 = *(float *)(param_1 + 0xb0 + lVar4) - (float)local_58;
      fVar12 = *(float *)(param_1 + 0xb8 + lVar4) - local_50;
      fVar13 = *(float *)(param_1 + 0xb4 + lVar4) - local_58._4_4_;
      uVar6 = uVar5 + 2;
      if (fVar10 <= fVar9) {
        uVar6 = uVar7;
      }
      fVar9 = fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12;
      if (fVar9 < fVar14) {
        uVar6 = uVar5 + 3;
        fVar14 = fVar9;
      }
      uVar5 = uVar5 + 4;
      lVar4 = lVar4 + 0x40;
    } while (uVar5 < uVar3 - 3);
    for (; uVar5 < uVar3; uVar5 = uVar5 + 1) {
LAB_18038c4d7:
      fVar10 = *(float *)(param_1 + 0x80 + uVar5 * 0x10) - (float)local_58;
      fVar12 = *(float *)(param_1 + 0x84 + uVar5 * 0x10) - local_58._4_4_;
      fVar9 = *(float *)(param_1 + 0x88 + uVar5 * 0x10) - local_50;
      fVar9 = fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9;
      if (fVar9 < fVar14) {
        uVar6 = uVar5;
        fVar14 = fVar9;
      }
    }
    if (uVar6 != 0x40) {
      return *(undefined1 *)(param_1 + 0x8c + uVar6 * 0x10);
    }
  }
  return *(undefined1 *)(param_1 + 0x74);
}



/* ===== 18038c570 FUN_18038c570 ===== */

undefined8 FUN_18038c570(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined8 *)(*param_1 + 0x28);
  }
  return uVar1;
}



/* ===== 18038c590 FUN_18038c590 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18038c590(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  float local_d0;
  uint local_c8;
  undefined *local_c0;
  undefined *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_180919500 ^ (ulonglong)auStack_f8;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_a8 = param_4;
  local_a0 = param_3;
  local_98 = param_2;
  local_90 = param_1;
  if (param_3 == 0) goto LAB_18038cb12;
  if (DAT_180cd127d == '\0') goto LAB_18038cb12;
  lVar13 = (longlong)DAT_181108910 * 0xb90;
  uVar12 = *(uint *)(&DAT_1809f7a30 + lVar13);
  local_c8 = uVar12;
  if ((uVar12 & 0xf0f) == 0) goto LAB_18038cb12;
  lVar5 = FUN_18038c570(param_3);
  local_88 = lVar5;
  if ((lVar5 == 0) || (lVar6 = FUN_18038bf90(lVar5), lVar6 == 0)) goto LAB_18038cb12;
  bVar3 = FUN_18038bfc0(lVar6,"weapon_fx");
  cVar4 = FUN_18038bfc0(lVar6,"impact_fx");
  if (((bVar3 == 0) && (cVar4 == '\0')) ||
     ((cVar4 = FUN_18038bfc0(lVar6,"shell_casing"), cVar4 != '\0' ||
      (cVar4 = FUN_18038bfc0(lVar6,"weapon_molotov"), cVar4 != '\0')))) {
    cVar4 = FUN_18038bfc0(lVar6,"molotov");
    if ((cVar4 != '\0') || (cVar4 = FUN_18038bfc0(lVar6,"incendiary"), cVar4 != '\0'))
    goto switchD_18038c6b9_caseD_3;
    cVar4 = FUN_18038bfc0(lVar6,"explosions_fx");
    if (cVar4 == '\0') goto LAB_18038cb12;
    cVar4 = FUN_18038bfc0(lVar6,"explosion_basic");
    if ((cVar4 == '\0') && (cVar4 = FUN_18038bfc0(lVar6,"explosion_hegrenade_dirt"), cVar4 == '\0'))
    {
      cVar4 = FUN_18038bfc0(lVar6,"light");
      if (cVar4 == '\0') {
        cVar4 = FUN_18038bfc0(lVar6,"explosion_c4");
        if (cVar4 == '\0') goto LAB_18038cb12;
        iVar9 = 6;
      }
      else {
        iVar9 = 5;
      }
      goto switchD_18038c6b9_caseD_4;
    }
switchD_18038c6b9_caseD_2:
    if ((uVar12 & 4) != 0) {
      local_d8 = (undefined *)0x0;
      local_d0 = 0.0;
      cVar4 = FUN_18038bfe0(lVar5,&local_d8);
      if (cVar4 != '\0') {
        uVar10 = 0x40;
        uVar8 = 0;
        local_b0 = *(ulonglong *)(&DAT_1809f7eb0 + lVar13);
        fVar1 = (float)local_d8;
        fVar2 = local_d8._4_4_;
        fVar16 = DAT_1808acd08;
        if (local_b0 < 4) {
          if (local_b0 != 0) goto LAB_18038ca33;
        }
        else {
          local_c0 = &DAT_1809f7ec4 + lVar13;
          local_b8 = &DAT_1809f7ec8 + lVar13;
          do {
            fVar15 = (*(float *)(&DAT_1809f7ebc + uVar8 * 0xc + lVar13) - local_d8._4_4_) *
                     (*(float *)(&DAT_1809f7ebc + uVar8 * 0xc + lVar13) - local_d8._4_4_) +
                     (*(float *)(&DAT_1809f7eb8 + uVar8 * 0xc + lVar13) - (float)local_d8) *
                     (*(float *)(&DAT_1809f7eb8 + uVar8 * 0xc + lVar13) - (float)local_d8) +
                     (*(float *)(&DAT_1809f7ec0 + uVar8 * 0xc + lVar13) - local_d0) *
                     (*(float *)(&DAT_1809f7ec0 + uVar8 * 0xc + lVar13) - local_d0);
            if (fVar15 < fVar16) {
              uVar10 = uVar8;
              fVar16 = fVar15;
            }
            fVar15 = *(float *)(&DAT_1809f7ecc + lVar13 + uVar8 * 0xc) - local_d0;
            fVar15 = (*(float *)(local_b8 + uVar8 * 0xc) - local_d8._4_4_) *
                     (*(float *)(local_b8 + uVar8 * 0xc) - local_d8._4_4_) +
                     (*(float *)(local_c0 + uVar8 * 0xc) - (float)local_d8) *
                     (*(float *)(local_c0 + uVar8 * 0xc) - (float)local_d8) + fVar15 * fVar15;
            if (fVar15 < fVar16) {
              uVar10 = uVar8 + 1;
              fVar16 = fVar15;
            }
            fVar15 = (*(float *)(&DAT_1809f7ed4 + uVar8 * 0xc + lVar13) - local_d8._4_4_) *
                     (*(float *)(&DAT_1809f7ed4 + uVar8 * 0xc + lVar13) - local_d8._4_4_) +
                     (*(float *)(&DAT_1809f7ed0 + uVar8 * 0xc + lVar13) - (float)local_d8) *
                     (*(float *)(&DAT_1809f7ed0 + uVar8 * 0xc + lVar13) - (float)local_d8) +
                     (*(float *)(&DAT_1809f7ed8 + uVar8 * 0xc + lVar13) - local_d0) *
                     (*(float *)(&DAT_1809f7ed8 + uVar8 * 0xc + lVar13) - local_d0);
            if (fVar15 < fVar16) {
              uVar10 = uVar8 + 2;
              fVar16 = fVar15;
            }
            fVar15 = (*(float *)(&DAT_1809f7ee0 + uVar8 * 0xc + lVar13) - local_d8._4_4_) *
                     (*(float *)(&DAT_1809f7ee0 + uVar8 * 0xc + lVar13) - local_d8._4_4_) +
                     (*(float *)(&DAT_1809f7edc + uVar8 * 0xc + lVar13) - (float)local_d8) *
                     (*(float *)(&DAT_1809f7edc + uVar8 * 0xc + lVar13) - (float)local_d8) +
                     (*(float *)(&DAT_1809f7ee4 + uVar8 * 0xc + lVar13) - local_d0) *
                     (*(float *)(&DAT_1809f7ee4 + uVar8 * 0xc + lVar13) - local_d0);
            if (fVar15 < fVar16) {
              uVar10 = uVar8 + 3;
              fVar16 = fVar15;
            }
            uVar8 = uVar8 + 4;
            puVar7 = &DAT_1809f7ecc + lVar13;
            uVar12 = local_c8;
            lVar5 = local_88;
          } while (uVar8 < local_b0 - 3);
          while( true ) {
            local_d8 = puVar7;
            if (local_b0 <= uVar8) break;
LAB_18038ca33:
            fVar15 = (*(float *)(&DAT_1809f7ebc + uVar8 * 0xc + lVar13) - fVar2) *
                     (*(float *)(&DAT_1809f7ebc + uVar8 * 0xc + lVar13) - fVar2) +
                     (*(float *)(&DAT_1809f7eb8 + uVar8 * 0xc + lVar13) - fVar1) *
                     (*(float *)(&DAT_1809f7eb8 + uVar8 * 0xc + lVar13) - fVar1) +
                     (*(float *)(&DAT_1809f7ec0 + uVar8 * 0xc + lVar13) - local_d0) *
                     (*(float *)(&DAT_1809f7ec0 + uVar8 * 0xc + lVar13) - local_d0);
            if (fVar15 < fVar16) {
              uVar10 = uVar8;
              fVar16 = fVar15;
            }
            uVar8 = uVar8 + 1;
            puVar7 = local_d8;
          }
          if ((uVar10 != 0x40) && (fVar16 < DAT_1808ac750)) {
            FUN_18038c110(lVar5,&DAT_1809f7a94 + lVar13);
            goto LAB_18038cb12;
          }
        }
      }
    }
    if ((uVar12 & 0x404) != 0) {
      FUN_18038c230(lVar5);
    }
  }
  else {
    iVar9 = (bVar3 ^ 1) + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar3) {
    default:
      if ((uVar12 & 1) == 0) {
        bVar14 = (uVar12 & 0x100) == 0;
LAB_18038caf6:
        if (bVar14) goto LAB_18038cb12;
        local_88 = _DAT_1808adc30;
        uStack_80 = _UNK_1808adc38;
        plVar11 = &local_88;
      }
      else {
        puVar7 = &DAT_1809f7a34;
        if (bVar3 == 0) {
          puVar7 = &DAT_1809f7a44;
        }
        plVar11 = (longlong *)(puVar7 + lVar13);
      }
      break;
    case 2:
      goto switchD_18038c6b9_caseD_2;
    case 3:
switchD_18038c6b9_caseD_3:
      if ((uVar12 & 2) == 0) {
        bVar14 = (uVar12 & 0x200) == 0;
        goto LAB_18038caf6;
      }
      cVar4 = FUN_18038c280(&DAT_1809f7a30 + lVar13,lVar5);
      puVar7 = &DAT_1809f7a74;
      if (cVar4 == '\0') {
        puVar7 = &DAT_1809f7a84;
      }
      plVar11 = (longlong *)(puVar7 + lVar13);
      break;
    case 4:
    case 5:
switchD_18038c6b9_caseD_4:
      if ((uVar12 & 8) == 0) {
        bVar14 = (uVar12 & 0x800) == 0;
        goto LAB_18038caf6;
      }
      puVar7 = &DAT_1809f7a54;
      if (iVar9 != 5) {
        puVar7 = &DAT_1809f7a64;
      }
      plVar11 = (longlong *)(puVar7 + lVar13);
    }
    FUN_18038c030(lVar5,plVar11);
  }
LAB_18038cb12:
  (*DAT_181108988)(local_90,local_98,local_a0,local_a8);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 18038cb80 FUN_18038cb80 ===== */

void FUN_18038cb80(char param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 == '\0') {
    if (DAT_181108908 == '\0') {
      return;
    }
    FUN_180264d90(DAT_1811088f8,DAT_181108900);
    DAT_181108908 = 0;
    return;
  }
  if (DAT_1811088f8 == 0) {
    if (DAT_181108909 != '\0') {
      return;
    }
    DAT_1811088f8 = FUN_180264b70("r_csgo_render_inferno_decals");
    DAT_181108909 = DAT_1811088f8 == 0;
    if (DAT_1811088f8 == 0) {
      FUN_1802b2560("[error] world effects | ConVar r_csgo_render_inferno_decals not found");
    }
    if (DAT_1811088f8 == 0) {
      return;
    }
  }
  lVar1 = DAT_1811088f8;
  uVar2 = FUN_180264d70(DAT_1811088f8);
  if (DAT_181108908 == '\0') {
    DAT_181108908 = '\x01';
    DAT_181108900 = uVar2;
  }
  if ((char)uVar2 == '\0') {
    return;
  }
  FUN_180264d90(lVar1,uVar2 & 0xffffffffffffff00);
  return;
}



/* ===== 18038cc50 FUN_18038cc50 ===== */

undefined8
FUN_18038cc50(LPCSTR param_1,char *param_2,int param_3,undefined8 param_4,undefined8 *param_5,
             undefined8 param_6)

{
  PVOID pvVar1;
  int iVar2;
  HMODULE pHVar3;
  HANDLE pvVar4;
  longlong lVar5;
  LPCVOID lpAddress;
  SIZE_T SVar6;
  PVOID pvVar7;
  char *local_78;
  size_t local_70;
  _MEMORY_BASIC_INFORMATION local_68;
  
  pHVar3 = GetModuleHandleA(param_1);
  if (pHVar3 != (HMODULE)0x0) {
    local_68.BaseAddress = (LPCVOID)0x0;
    local_68.AllocationBase = (PVOID)0x0;
    local_68.AllocationProtect = 0;
    local_68._20_4_ = 0;
    pvVar4 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar4,pHVar3,&local_68,0x18);
    pvVar1 = local_68.BaseAddress;
    if (iVar2 != 0) {
      pvVar7 = (PVOID)((ulonglong)local_68.AllocationBase & 0xffffffff);
      local_68.AllocationBase = pvVar7;
      if ((local_68.BaseAddress != (LPCVOID)0x0) && (pvVar7 != (PVOID)0x0)) {
        local_70 = strlen(param_2);
        local_78 = param_2;
        lVar5 = FUN_1801d1f10(&local_68,&local_78);
        if (lVar5 != 0) {
          lpAddress = (LPCVOID)FUN_18000f3a0(lVar5 + (longlong)param_3 * 8);
          if ((pvVar1 <= lpAddress) && (lpAddress < (LPCVOID)((longlong)pvVar7 + (longlong)pvVar1)))
          {
            local_68.BaseAddress = (LPCVOID)0x0;
            local_68.AllocationBase = (PVOID)0x0;
            local_68.AllocationProtect = 0;
            local_68._20_4_ = 0;
            local_68.RegionSize = 0;
            local_68.State = 0;
            local_68.Protect = 0;
            local_68.Type = 0;
            local_68._44_4_ = 0;
            SVar6 = VirtualQuery(lpAddress,&local_68,0x30);
            if ((SVar6 != 0) &&
               ((local_68.State == 0x1000 && ((local_68._32_8_ & 0xf000000000) != 0)))) {
              iVar2 = FUN_180428df0(lpAddress,param_4,param_5);
              if (iVar2 == 0) {
                iVar2 = FUN_1804293b0(lpAddress,1);
                if (iVar2 == 0) {
                  FUN_1802b2560("[world effects] %s hooked | %s slot %d -> %p",param_6,param_2,
                                param_3,lpAddress);
                  return 1;
                }
              }
              FUN_1802b2560("[error] world effects | %s: hook failed",param_6);
              *param_5 = 0;
              return 0;
            }
          }
          FUN_1802b2560("[error] world effects | %s: %s slot %d is not code (%p)",param_6,param_2,
                        param_3,lpAddress);
          return 0;
        }
      }
    }
  }
  FUN_1802b2560("[error] world effects | %s: vtable %s not found",param_6,param_2);
  return 0;
}



/* ===== 18038ce60 FUN_18038ce60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18038ce60(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  cVar1 = DAT_1811088e0;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  if ((((param_1 != (longlong *)0x0) && (DAT_1811088d8 != 0)) &&
      ((DAT_1811088e0 != '\0' || (DAT_1811088e1 != '\0')))) && (*param_1 == DAT_1811088d8)) {
    if ((DAT_1811088e1 != '\0') && (DAT_181108980 != (code *)0x0)) {
      (*DAT_181108980)(param_1 + 0xa4e,0x28f8b01b,0);
    }
    if ((cVar1 != '\0') && (DAT_181108990 != (code *)0x0)) {
      local_28 = 0;
      uStack_20 = 0;
      for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
        local_38 = (&DAT_1811088e4)[local_30];
        *(undefined4 *)((longlong)&local_28 + local_30 * 4) = local_38;
      }
      (*DAT_181108990)(param_1 + 0xa2c,0x8310aef1,&local_28);
    }
  }
  return;
}



/* ===== 18038cf40 FUN_18038cf40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18038cf40(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  if (((param_1 != 0) &&
      (local_18 = DAT_180919500 ^ (ulonglong)auStack_58, DAT_181108990 != (code *)0x0)) &&
     (DAT_1811088e0 != '\0')) {
    local_28 = 0;
    uStack_20 = 0;
    for (local_30 = 0; local_30 < 4; local_30 = local_30 + 1) {
      local_38 = (&DAT_1811088e4)[local_30];
      *(undefined4 *)((longlong)&local_28 + local_30 * 4) = local_38;
    }
    (*DAT_181108990)(param_1,0x8310aef1,&local_28);
  }
  return;
}



/* ===== 18038cfd0 FUN_18038cfd0 ===== */

void FUN_18038cfd0(undefined8 param_1)

{
  (*DAT_1811089a0)();
  if (DAT_1811088e0 != '\0') {
    FUN_18038cf40(param_1);
    LOCK();
    DAT_181108998 = DAT_181108998 + 1;
    UNLOCK();
  }
  return;
}



/* ===== 18038d000 FUN_18038d000 ===== */

undefined8
FUN_18038d000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  FUN_18038ce60(param_2);
  uVar1 = (*DAT_1811088d0)(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_18038ce60(param_2);
  return uVar1;
}



/* ===== 18038d060 FUN_18038d060 ===== */

undefined8
FUN_18038d060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  FUN_18038ce60(param_2);
  uVar1 = (*DAT_1811088c8)(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_18038ce60(param_2);
  return uVar1;
}



/* ===== 18038d0c0 FUN_18038d0c0 ===== */

void FUN_18038d0c0(void)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  longlong *lpAddress;
  SIZE_T SVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *local_68;
  ulonglong local_60;
  _MEMORY_BASIC_INFORMATION local_58;
  
  if (DAT_180cd127c != '\0') {
    return;
  }
  DAT_180cd127c = 1;
  FUN_18038cc50("materialsystem2.dll","CPostProcessingState",9,&LAB_18038ce40,&DAT_1811089a8,
                "post processing removal");
  pHVar2 = GetModuleHandleA("client.dll");
  if (pHVar2 == (HMODULE)0x0) {
    local_60 = 0;
    local_68 = (longlong *)0x0;
  }
  else {
    local_58.BaseAddress = (longlong *)0x0;
    local_58.AllocationBase = (PVOID)0x0;
    local_58.AllocationProtect = 0;
    local_58._20_4_ = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_58);
    if (iVar1 == 0) {
      local_60 = 0;
      local_68 = (longlong *)0x0;
    }
    else {
      local_60 = (ulonglong)local_58.AllocationBase & 0xffffffff;
      local_68 = local_58.BaseAddress;
    }
  }
  local_58.BaseAddress =
       "48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 66 0F 6E CA 41 8B F0 66 0F 70 C9 00";
  local_58.AllocationBase = &DAT_00000050;
  DAT_181108980 = FUN_1801d1e00(&local_68,&local_58);
  local_58.BaseAddress =
       "48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 66 0F 6E CA 49 8B F0 66 0F 70 C9 00 8B EA 48 8B F9 45 33 C9 48 8B C1 66 66 0F 1F 84 00 00 00 00 00 66 0F 6F C1 4C 8D 15 ? ? ? ? 66 0F 76 00 0F 50 C8 85 C9 75 ? 41 FF C1 48 83 C0 10 41 83 F9 02 72 DD 48 8B 87 A8 00 00 00"
  ;
  local_58.AllocationBase = (undefined1 *)0x108;
  DAT_181108990 = FUN_1801d1e00(&local_68,&local_58);
  pHVar2 = GetModuleHandleA("scenesystem.dll");
  if (pHVar2 == (HMODULE)0x0) {
LAB_18038d25d:
    uVar7 = 0;
    plVar6 = (longlong *)0x0;
LAB_18038d261:
    DAT_1811088d8 = 0;
LAB_18038d26c:
    lpAddress = (longlong *)0x0;
  }
  else {
    local_58.BaseAddress = (longlong *)0x0;
    local_58.AllocationBase = (undefined1 *)0x0;
    local_58.AllocationProtect = 0;
    local_58._20_4_ = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_58);
    plVar6 = local_58.BaseAddress;
    if (iVar1 == 0) goto LAB_18038d25d;
    uVar7 = (ulonglong)local_58.AllocationBase & 0xffffffff;
    local_68 = local_58.BaseAddress;
    local_60 = uVar7;
    if ((local_58.BaseAddress == (longlong *)0x0) || (uVar7 == 0)) goto LAB_18038d261;
    local_58.BaseAddress = "CSceneView";
    local_58.AllocationBase = (undefined1 *)0xa;
    DAT_1811088d8 = FUN_1801d1f10(&local_68,&local_58);
    if (DAT_1811088d8 == 0) goto LAB_18038d26c;
    lpAddress = (longlong *)FUN_18000f3a0(DAT_1811088d8 + 0x1a8);
  }
  if ((((lpAddress != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) && (uVar7 != 0)) &&
     ((plVar6 <= lpAddress && (lpAddress < (longlong *)(uVar7 + (longlong)plVar6))))) {
    local_58.BaseAddress = (longlong *)0x0;
    local_58.AllocationBase = (undefined1 *)0x0;
    local_58.AllocationProtect = 0;
    local_58._20_4_ = 0;
    local_58.RegionSize = 0;
    local_58.State = 0;
    local_58.Protect = 0;
    local_58.Type = 0;
    local_58._44_4_ = 0;
    SVar4 = VirtualQuery(lpAddress,&local_58,0x30);
    if (((SVar4 != 0) && ((local_58.State == 0x1000 && ((local_58._32_8_ & 0xf000000000) != 0)))) &&
       (*lpAddress == -0x3cffffae9f7e72b8)) goto LAB_18038d2eb;
  }
  DAT_1811088d8 = 0;
LAB_18038d2eb:
  if (((DAT_181108980 == 0) || (DAT_181108990 == 0)) || (DAT_1811088d8 == 0)) {
    FUN_1802b2560("[error] world effects | render attributes: set int %p set vec4 %p view %p");
  }
  else {
    FUN_18038cc50("client.dll","CRenderingPipelineCsgo3DSkybox",0,FUN_18038d000,&DAT_1811088d0,
                  "fullbright (3d skybox pipeline)");
    FUN_18038cc50("client.dll","CRenderingPipelineCsgo",0,FUN_18038d060,&DAT_1811088c8,
                  "fullbright (csgo pipeline)");
    lVar5 = DAT_1809620b8;
    if (DAT_1809620b8 == 0) {
      FUN_1802b2560("[error] world effects | fullbright: view_ambient_copy not found");
    }
    else {
      iVar1 = FUN_180428df0(DAT_1809620b8,FUN_18038cfd0,&DAT_1811089a0);
      if ((iVar1 == 0) && (iVar1 = FUN_1804293b0(lVar5,1), iVar1 == 0)) {
        FUN_1802b2560("[world effects] fullbright (view ambient copy) hooked -> %p",lVar5);
      }
      else {
        DAT_1811089a0 = 0;
        FUN_1802b2560("[error] world effects | fullbright: view_ambient_copy hook failed");
      }
    }
  }
  pHVar2 = GetModuleHandleA("particles.dll");
  if (pHVar2 != (HMODULE)0x0) {
    local_58.BaseAddress = (longlong *)0x0;
    local_58.AllocationBase = (undefined1 *)0x0;
    local_58.AllocationProtect = 0;
    local_58._20_4_ = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_58,0x18);
    if (iVar1 != 0) {
      local_60 = (ulonglong)local_58.AllocationBase & 0xffffffff;
      local_68 = local_58.BaseAddress;
      if ((local_58.BaseAddress != (longlong *)0x0) && (local_60 != 0)) {
        local_58.BaseAddress = "CParticleObjectDesc";
        local_58.AllocationBase = &DAT_00000013;
        lVar5 = FUN_1801d1f10(&local_68,&local_58);
        if (lVar5 != 0) {
          lVar5 = FUN_18000f3a0(lVar5 + 0x38);
          if ((lVar5 == 0) ||
             (iVar1 = FUN_180428df0(lVar5,FUN_18038c590,&DAT_181108988), iVar1 != 0)) {
            FUN_1802b2560("[error] world effects | OnPreRender hook failed");
            DAT_181108988 = 0;
            return;
          }
          iVar1 = FUN_1804293b0(lVar5,1);
          if (iVar1 == 0) {
            FUN_1802b2560("[world effects] CParticleObjectDesc slot 7 (OnPreRender) hooked -> %p",
                          lVar5);
            return;
          }
          FUN_1802b2560("[error] world effects | OnPreRender enable failed");
          return;
        }
      }
    }
  }
  FUN_1802b2560("[error] world effects | CParticleObjectDesc vtable not found");
  return;
}



/* ===== 18038d530 FUN_18038d530 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18038d530(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined2 local_resd;
  undefined1 local_resf;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong local_b8 [2];
  undefined1 local_a8 [13];
  undefined2 local_9b;
  undefined1 local_99;
  longlong *local_98;
  longlong *plStack_90;
  longlong local_88;
  
  FUN_18038b6a0();
  uVar18 = -(uint)(DAT_18095d1fd != '\0') & 4;
  uVar11 = -(uint)(DAT_18095d1d8 != '\0') & 2;
  uVar19 = uVar18 | uVar11;
  uVar20 = uVar19 | DAT_18095d074 != '\0' | -(uint)(DAT_18095d01c != '\0') & 8;
  DAT_181108914 = (DAT_1811088c0 | DAT_181108914) & ~uVar20;
  iVar13 = (DAT_181108910 + 1) % 3;
  lVar16 = (longlong)iVar13 * 0xb90;
  DAT_1811088c0 = uVar20;
  *(uint *)(&DAT_1809f7a30 + lVar16) = DAT_181108914 << 8 | uVar20;
  uVar2 = uRam000000018095d080;
  *(undefined8 *)(&DAT_1809f7a34 + lVar16) = _DAT_18095d078;
  *(undefined8 *)(lVar16 + 0x1809f7a3c) = uVar2;
  uVar2 = uRam000000018095d090;
  *(undefined8 *)(&DAT_1809f7a44 + lVar16) = _DAT_18095d088;
  *(undefined8 *)(lVar16 + 0x1809f7a4c) = uVar2;
  uVar2 = uRam000000018095d038;
  *(undefined8 *)(&DAT_1809f7a54 + lVar16) = _DAT_18095d030;
  *(undefined8 *)(lVar16 + 0x1809f7a5c) = uVar2;
  uVar2 = uRam000000018095d028;
  *(undefined8 *)(&DAT_1809f7a64 + lVar16) = _DAT_18095d020;
  *(undefined8 *)(lVar16 + 0x1809f7a6c) = uVar2;
  uVar2 = uRam000000018095d1e4;
  *(undefined8 *)(&DAT_1809f7a74 + lVar16) = _DAT_18095d1dc;
  *(undefined8 *)(lVar16 + 0x1809f7a7c) = uVar2;
  uVar23 = uRam000000018095d1f8;
  uVar22 = uRam000000018095d1f4;
  uVar21 = uRam000000018095d1f0;
  *(undefined4 *)(&DAT_1809f7a84 + lVar16) = _DAT_18095d1ec;
  *(undefined4 *)(lVar16 + 0x1809f7a88) = uVar21;
  *(undefined4 *)(lVar16 + 0x1809f7a8c) = uVar22;
  *(undefined4 *)(lVar16 + 0x1809f7a90) = uVar23;
  uVar23 = uRam000000018095d20c;
  uVar22 = uRam000000018095d208;
  uVar21 = uRam000000018095d204;
  *(undefined4 *)(&DAT_1809f7a94 + lVar16) = _DAT_18095d200;
  *(undefined4 *)(lVar16 + 0x1809f7a98) = uVar21;
  *(undefined4 *)(lVar16 + 0x1809f7a9c) = uVar22;
  *(undefined4 *)(lVar16 + 0x1809f7aa0) = uVar23;
  *(undefined8 *)(&DAT_1809f7aa8 + lVar16) = 0;
  *(undefined8 *)(&DAT_1809f7eb0 + lVar16) = 0;
  *(undefined8 *)(&DAT_1809f81b8 + lVar16) = 0;
  (&DAT_1809f7aa4)[lVar16] = 1;
  if ((DAT_181108920 == '\0') || (uVar19 == 0)) goto LAB_18038db1d;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
  }
  else {
    local_res10 = DAT_181108a00;
  }
  local_res18 = 0;
  uVar3 = FUN_18038bb60(&local_res18,&local_res10,0);
  (&DAT_1809f7aa4)[lVar16] = uVar3;
  FUN_1803a09f0(&local_98);
  puVar14 = auStack_d8;
  puVar15 = auStack_d8;
  plVar12 = local_98;
  if (local_98 != plStack_90) {
    do {
      pcVar7 = (char *)FUN_1803a0710(plVar12);
      if (pcVar7 != (char *)0x0) {
        lVar10 = *plVar12;
        lVar8 = FUN_18000f3a0((ulonglong)DAT_181108928 + lVar10);
        if (lVar8 != 0) {
          if ((((*plVar12 == 0) || (DAT_180ca09f8 == 0)) ||
              (lVar8 = FUN_18000f3a0(*plVar12 + (ulonglong)DAT_180ca09f8), lVar8 == 0)) ||
             (DAT_180ca0950 == 0)) {
            uVar21 = 0;
            uVar22 = 0;
            uVar23 = 0;
          }
          else {
            puVar9 = (undefined4 *)FUN_1800111b0(local_a8,lVar8 + (ulonglong)DAT_180ca0950);
            uVar21 = *puVar9;
            uVar22 = puVar9[1];
            uVar23 = puVar9[2];
          }
          if (((uVar18 != 0) && (iVar4 = strcmp(pcVar7,"C_HEGrenadeProjectile"), iVar4 == 0)) &&
             ((*(ulonglong *)(&DAT_1809f7eb0 + lVar16) < 0x40 &&
              (iVar4 = FUN_180011200((ulonglong)DAT_18110893c + lVar10), 0 < iVar4)))) {
            lVar8 = *(longlong *)(&DAT_1809f7eb0 + lVar16);
            *(longlong *)(&DAT_1809f7eb0 + lVar16) = lVar8 + 1;
            *(undefined4 *)(&DAT_1809f7eb8 + lVar8 * 0xc + lVar16) = uVar21;
            *(undefined4 *)(&DAT_1809f7ebc + lVar8 * 0xc + lVar16) = uVar22;
            *(undefined4 *)(&DAT_1809f7ec0 + lVar8 * 0xc + lVar16) = uVar23;
          }
          if (uVar11 != 0) {
            iVar4 = strcmp(pcVar7,"C_Inferno");
            if ((iVar4 == 0) && (*(ulonglong *)(&DAT_1809f7aa8 + lVar16) < 0x40)) {
              uVar5 = FUN_180011200((ulonglong)DAT_181108924 + lVar10);
              FUN_1803a0940(&local_res20,uVar5);
              iVar4 = FUN_180011200((ulonglong)DAT_181108940 + lVar10);
              lVar10 = local_res20;
              if ((local_res20 == 0) ||
                 ((pcVar7 = (char *)FUN_1803a0710(&local_res20), pcVar7 == (char *)0x0 ||
                  (iVar6 = strcmp(pcVar7,"C_CSPlayerPawn"), iVar6 != 0)))) {
                local_b8[1] = 0;
                plVar17 = local_b8 + 1;
              }
              else {
                local_b8[0] = lVar10;
                plVar17 = local_b8;
              }
              uVar3 = FUN_18038bb60(plVar17,&local_res10,iVar4 == 1);
              lVar10 = *(longlong *)(&DAT_1809f7aa8 + lVar16);
              *(longlong *)(&DAT_1809f7aa8 + lVar16) = lVar10 + 1;
              *(undefined4 *)(lVar16 + 0x1809f7ab0 + lVar10 * 0x10) = uVar21;
              *(undefined4 *)(lVar16 + 0x1809f7ab4 + lVar10 * 0x10) = uVar22;
              *(undefined4 *)(lVar16 + 0x1809f7ab8 + lVar10 * 0x10) = uVar23;
              *(undefined1 *)(lVar16 + 0x1809f7abc + lVar10 * 0x10) = uVar3;
              *(undefined2 *)(lVar16 + 0x1809f7abd + lVar10 * 0x10) = local_9b;
              *(undefined1 *)(lVar16 + 0x1809f7abf + lVar10 * 0x10) = local_99;
            }
            else {
              iVar4 = strcmp(pcVar7,"C_MolotovGrenade");
              if ((((((iVar4 == 0) || (iVar4 = strcmp(pcVar7,"C_IncendiaryGrenade"), iVar4 == 0)) ||
                    (iVar4 = strcmp(pcVar7,"C_BaseCSGrenadeProjectile"), iVar4 == 0)) ||
                   (((iVar4 = strcmp(pcVar7,"C_HEGrenadeProjectile"), iVar4 == 0 ||
                     (iVar4 = strcmp(pcVar7,"C_FlashbangProjectile"), iVar4 == 0)) ||
                    ((iVar4 = strcmp(pcVar7,"C_SmokeGrenadeProjectile"), iVar4 == 0 ||
                     ((iVar4 = strcmp(pcVar7,"C_DecoyProjectile"), iVar4 == 0 ||
                      (iVar4 = strcmp(pcVar7,"C_MolotovProjectile"), iVar4 == 0)))))))) ||
                  (iVar4 = strcmp(pcVar7,"C_SensorGrenadeProjectile"), iVar4 == 0)) &&
                 ((((*(ulonglong *)(&DAT_1809f81b8 + lVar16) < 0x80 &&
                    (iVar4 = FUN_180011200((ulonglong)DAT_181108924 + lVar10), iVar4 != -1)) &&
                   (FUN_1803a0940(&local_res18,iVar4), local_res18 != 0)) &&
                  (((pcVar7 = (char *)FUN_1803a0710(&local_res18), pcVar7 != (char *)0x0 &&
                    (iVar4 = strcmp(pcVar7,"C_CSPlayerPawn"), iVar4 == 0)) &&
                   ((lVar10 = FUN_18000f3a0(lVar10 + 0x10), lVar10 != 0 &&
                    (iVar4 = FUN_180011200(lVar10 + 0x10), iVar4 - 1U < 0xfffffffe)))))))) {
                uVar3 = FUN_18038bb60(&local_res18,&local_res10,0);
                lVar10 = *(longlong *)(&DAT_1809f81b8 + lVar16);
                *(longlong *)(&DAT_1809f81b8 + lVar16) = lVar10 + 1;
                *(int *)(lVar16 + 0x1809f81c0 + lVar10 * 8) = iVar4;
                *(undefined1 *)(lVar16 + 0x1809f81c4 + lVar10 * 8) = uVar3;
                *(undefined2 *)(lVar16 + 0x1809f81c5 + lVar10 * 8) = local_resd;
                *(undefined1 *)(lVar16 + 0x1809f81c7 + lVar10 * 8) = local_resf;
              }
            }
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plStack_90);
  }
  if (local_98 == (longlong *)0x0) goto LAB_18038db1d;
  plVar12 = local_98;
  if ((ulonglong)((local_88 - (longlong)local_98 >> 3) * 8) < 0x1000) {
LAB_18038db09:
    puVar15 = puVar14;
  }
  else {
    plVar12 = (longlong *)local_98[-1];
    plVar17 = (longlong *)((longlong)local_98 + (-8 - (longlong)plVar12));
    if (&DAT_0000001f < plVar17) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar14 = auStack_d0;
      plVar12 = plVar17;
      goto LAB_18038db09;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x18038db11;
  thunk_FUN_1803d64e0(plVar12);
LAB_18038db1d:
  DAT_181108910 = iVar13;
  if ((DAT_180cd127c == '\0') || (DAT_181108988 == 0)) {
    DAT_180cd127d = 0;
  }
  else {
    DAT_180cd127d = 1;
  }
  return;
}



/* ===== 18038db70 FUN_18038db70 ===== */

bool FUN_18038db70(ulonglong param_1,ulonglong param_2,char param_3,float param_4,float param_5,
                  float param_6)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  float extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  ulonglong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  longlong local_e0 [22];
  
  local_138 = CONCAT44(local_138._4_4_,1);
  FUN_18038b6a0();
  if (DAT_181108920 == '\0') {
    return false;
  }
  if (param_3 == '\0') {
LAB_18038dc91:
    if (DAT_1809f9d20 == '\0') {
      DAT_1809f9d20 = '\x01';
      DAT_1809f9d18 = FUN_180264b70(PTR_s_inferno_damage_1809f9d10);
      if (DAT_1809f9d18 == 0) {
        FUN_1802b2560("[error] world effects | ConVar %s not found",PTR_s_inferno_damage_1809f9d10);
      }
    }
    lVar14 = DAT_1809f9d18;
  }
  else {
    if (DAT_1809f7a10 == '\0') {
      DAT_1809f7a10 = '\x01';
      DAT_1809f7a08 = FUN_180264b70(PTR_s_inferno_ct_experiment_1809f7a00);
      if (DAT_1809f7a08 == 0) {
        FUN_1802b2560("[error] world effects | ConVar %s not found",
                      PTR_s_inferno_ct_experiment_1809f7a00);
      }
    }
    if ((DAT_1809f7a08 == 0) || (cVar8 = FUN_180264d70(), cVar8 == '\0')) goto LAB_18038dc91;
    if (DAT_1809f9d08 == '\0') {
      DAT_1809f9d08 = '\x01';
      DAT_1809f9d00 = FUN_180264b70(PTR_s_inferno_damage_ct_1809f9cf8);
      if (DAT_1809f9d00 == 0) {
        FUN_1802b2560("[error] world effects | ConVar %s not found",
                      PTR_s_inferno_damage_ct_1809f9cf8);
      }
    }
    lVar14 = DAT_1809f9d00;
  }
  if (lVar14 == 0) {
    fVar11 = DAT_1808aca54;
  }
  else {
    fVar11 = (float)FUN_180264d70();
  }
  if (DAT_1809f79f8 == '\0') {
    DAT_1809f79f8 = '\x01';
    DAT_1809f79f0 = FUN_180264b70(PTR_s_inferno_damage_timer_1809f79e8);
    if (DAT_1809f79f0 == 0) {
      FUN_1802b2560("[error] world effects | ConVar %s not found",
                    PTR_s_inferno_damage_timer_1809f79e8);
    }
  }
  if (DAT_1809f79f0 == 0) {
    fVar26 = DAT_1808ac0d8;
  }
  else {
    fVar26 = (float)FUN_180264d70();
  }
  fVar4 = DAT_1808ac34c;
  if (fVar11 <= 0.0) {
    return false;
  }
  if (fVar26 <= 0.0) {
    return false;
  }
  if (fVar26 * fVar11 < DAT_1808ac34c) {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  local_138 = param_2;
  pcVar13 = (char *)FUN_1803a0710(&local_138);
  if (pcVar13 == (char *)0x0) {
    return false;
  }
  iVar10 = strcmp(pcVar13,"C_CSPlayerPawn");
  if (iVar10 != 0) {
    return false;
  }
  lVar14 = FUN_180266660();
  if (lVar14 == 0) {
    return false;
  }
  if (DAT_18110894c == 0) {
    return false;
  }
  cVar8 = FUN_180011220(param_2 + DAT_18110894c);
  if (cVar8 != '\0') {
    return false;
  }
  if (DAT_181108950 == 0) {
    return false;
  }
  cVar8 = FUN_180011220(param_2 + DAT_181108950);
  if (cVar8 != '\x01') {
    return false;
  }
  if ((DAT_181108954 != 0) && (cVar8 = FUN_180011220(param_2 + DAT_181108954), cVar8 != '\0')) {
    return false;
  }
  if ((DAT_181108958 != 0) &&
     (cVar8 = FUN_180011220(param_2 + DAT_181108958), (byte)(cVar8 - 7U) < 2)) {
    return false;
  }
  if ((DAT_18110895c != 0) &&
     (uVar15 = FUN_180011440(param_2 + DAT_18110895c), (uVar15 & 0x4020) != 0)) {
    return false;
  }
  if ((DAT_181108960 != 0) && (bVar9 = FUN_180011200(param_2 + DAT_181108960), (bVar9 & 0x11) == 1))
  {
    return false;
  }
  if (DAT_181108964 != 0) {
    lVar14 = FUN_18000f3a0(param_2 + 0x10);
    if ((lVar14 == 0) || (DAT_18110897c == 0)) {
      lVar14 = FUN_180266660();
LAB_18038dfec:
      if (lVar14 != 0) {
        if (DAT_181108978 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_180011200(lVar14 + (ulonglong)DAT_181108978);
        }
        fVar11 = DAT_1808ac00c;
        if ((((DAT_181108970 == 0) || (DAT_181108974 == 0)) ||
            (cVar8 = FUN_180011220(lVar14 + (ulonglong)DAT_181108970), cVar8 != '\x01')) ||
           (iVar12 = FUN_180011200((ulonglong)DAT_181108974 + lVar14),
           param_5 < (float)iVar12 * fVar11)) {
          param_5 = param_5 - (float)iVar10 * fVar11;
        }
        else {
          param_5 = (float)(iVar12 - iVar10) * fVar11;
        }
      }
    }
    else {
      iVar10 = FUN_180011200((ulonglong)DAT_18110897c + lVar14);
      lVar14 = FUN_180266660();
      if (iVar10 == 0) goto LAB_18038dfec;
    }
    FUN_18000f3d0(DAT_181108964 + param_2);
    if (param_5 + param_4 < extraout_XMM0_Da) {
      if (DAT_1809f79c8 == '\0') {
        DAT_1809f79c8 = '\x01';
        DAT_1809f79c0 = FUN_180264b70(PTR_s_healthshot_healthboost_damage_mu_1809f79b8);
        if (DAT_1809f79c0 == 0) {
          FUN_1802b2560("[error] world effects | ConVar %s not found",
                        PTR_s_healthshot_healthboost_damage_mu_1809f79b8);
        }
      }
      if ((DAT_1809f79c0 != 0) && (fVar11 = (float)FUN_180264d70(), fVar11 <= 0.0)) {
        return false;
      }
    }
  }
  puVar20 = auStack_158;
  puVar21 = auStack_158;
  if ((param_1 != 0) && (param_1 != param_2)) {
    local_138 = param_1;
    pcVar13 = (char *)FUN_1803a0710(&local_138);
    if ((pcVar13 == (char *)0x0) || (iVar10 = strcmp(pcVar13,"C_CSPlayerPawn"), iVar10 != 0)) {
      uVar15 = 0;
      iVar10 = -1;
    }
    else {
      if ((DAT_181108930 == 0) || (iVar10 = FUN_180011200(param_1 + DAT_181108930), iVar10 == -1)) {
LAB_18038df9d:
        if ((DAT_181108934 != 0) && (iVar10 = FUN_180011200(param_1 + DAT_181108934), iVar10 != -1))
        {
          FUN_1803a0940(&local_138,iVar10);
          uVar15 = local_138;
          if (local_138 != 0) goto LAB_18038dfce;
        }
        uVar15 = 0;
      }
      else {
        FUN_1803a0940(&local_138,iVar10);
        uVar15 = local_138;
        if (local_138 == 0) goto LAB_18038df9d;
      }
LAB_18038dfce:
      local_138 = param_1;
      iVar10 = FUN_18038ba70(&local_138);
    }
    if ((DAT_181108930 == 0) || (iVar12 = FUN_180011200(param_2 + DAT_181108930), iVar12 == -1)) {
LAB_18038e0bd:
      if ((DAT_181108934 != 0) && (iVar12 = FUN_180011200(param_2 + DAT_181108934), iVar12 != -1)) {
        FUN_1803a0940(&local_138,iVar12);
        uVar16 = local_138;
        if (local_138 != 0) goto LAB_18038e0ee;
      }
      uVar16 = 0;
    }
    else {
      FUN_1803a0940(&local_138,iVar12);
      uVar16 = local_138;
      if (local_138 == 0) goto LAB_18038e0bd;
    }
LAB_18038e0ee:
    if (uVar16 == uVar15) {
LAB_18038e15e:
      if (DAT_1809f79e0 == '\0') {
        DAT_1809f79e0 = '\x01';
        DAT_1809f79d8 = FUN_180264b70(PTR_s_mp_friendlyfire_1809f79d0);
        if (DAT_1809f79d8 == 0) {
          FUN_1802b2560("[error] world effects | ConVar %s not found",
                        PTR_s_mp_friendlyfire_1809f79d0);
        }
      }
      if (((DAT_1809f79d8 == 0) || (cVar8 = FUN_180264d70(), cVar8 == '\0')) ||
         ((lVar14 = FUN_180266660(), lVar14 != 0 &&
          (((DAT_181108944 != 0 &&
            (cVar8 = FUN_180011220(lVar14 + (ulonglong)DAT_181108944), cVar8 != '\0')) ||
           ((DAT_181108948 != 0 &&
            (cVar8 = FUN_180011220(lVar14 + (ulonglong)DAT_181108948), cVar8 != '\0')))))))) {
        return false;
      }
      if (DAT_1809f7a28 == '\0') {
        DAT_1809f7a28 = '\x01';
        DAT_1809f7a20 = FUN_180264b70(PTR_s_ff_damage_reduction_other_1809f7a18);
        if (DAT_1809f7a20 == 0) {
          FUN_1802b2560("[error] world effects | ConVar %s not found",
                        PTR_s_ff_damage_reduction_other_1809f7a18);
        }
      }
      if (DAT_1809f7a20 == 0) {
        return false;
      }
      fVar11 = (float)FUN_180264d70();
      if (fVar11 <= 0.0) {
        return false;
      }
    }
    else {
      if (DAT_1809f7998 == '\0') {
        DAT_1809f7998 = '\x01';
        DAT_1809f7990 = FUN_180264b70(PTR_s_mp_teammates_are_enemies_1809f7988);
        if (DAT_1809f7990 == 0) {
          FUN_1802b2560("[error] world effects | ConVar %s not found",
                        PTR_s_mp_teammates_are_enemies_1809f7988);
        }
      }
      if ((DAT_1809f7990 == 0) || (cVar8 = FUN_180264d70(), cVar8 == '\0')) {
        local_138 = param_2;
        iVar12 = FUN_18038ba70(&local_138);
        if (iVar12 == iVar10) goto LAB_18038e15e;
      }
    }
  }
  if (param_6 < 0.0) {
    return true;
  }
  if (((DAT_180ca09f8 == 0) || (lVar14 = FUN_18000f3a0(param_2 + DAT_180ca09f8), lVar14 == 0)) ||
     (DAT_180ca0950 == 0)) {
    local_118 = 0.0;
    local_114 = 0.0;
    local_110 = 0.0;
  }
  else {
    pfVar17 = (float *)FUN_1800111b0(&local_118,lVar14 + (ulonglong)DAT_180ca0950);
    local_118 = *pfVar17;
    local_114 = pfVar17[1];
    local_110 = pfVar17[2];
  }
  if (DAT_181108968 == 0) {
    fVar11 = 0.0;
    fVar26 = 0.0;
    local_e8 = 0.0;
  }
  else {
    pfVar17 = (float *)FUN_1800111b0(&local_118,param_2 + DAT_181108968);
    fVar11 = *pfVar17;
    fVar26 = pfVar17[1];
    local_e8 = pfVar17[2];
  }
  local_f0 = local_118 + fVar11;
  local_ec = local_114 + fVar26;
  local_e8 = local_110 + local_e8;
  local_110 = local_110 + DAT_1808ac950;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_138 = CONCAT44(local_138._4_4_,1);
  puVar22 = auStack_158;
  if (DAT_18110896c == 0) goto LAB_18038e410;
  FUN_1803a09f0(&local_130);
  plVar18 = local_130;
  if (local_130 != local_128) {
    do {
      pcVar13 = (char *)FUN_1803a0710(plVar18);
      if (((pcVar13 != (char *)0x0) &&
          (iVar10 = strcmp(pcVar13,"C_SmokeGrenadeProjectile"), iVar10 == 0)) &&
         (cVar8 = FUN_180011220((ulonglong)DAT_18110896c + *plVar18), cVar8 == '\x01')) {
        local_e0[0] = *plVar18;
        FUN_1800242d0(&local_108,local_e0);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != local_128);
  }
  puVar22 = auStack_158;
  if (local_130 == (longlong *)0x0) goto LAB_18038e410;
  plVar18 = local_130;
  if ((ulonglong)((local_120 - (longlong)local_130 >> 3) * 8) < 0x1000) {
LAB_18038e407:
    puVar21 = puVar20;
  }
  else {
    plVar18 = (longlong *)local_130[-1];
    plVar19 = (longlong *)((longlong)local_130 + (-8 - (longlong)plVar18));
    if (&DAT_0000001f < plVar19) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar20 = auStack_150;
      plVar18 = plVar19;
      goto LAB_18038e407;
    }
  }
  *(undefined8 *)(puVar21 + -8) = 0x18038e40f;
  thunk_FUN_1803d64e0(plVar18);
  puVar22 = puVar21;
LAB_18038e410:
  fVar7 = DAT_1808acde4;
  fVar6 = DAT_1808ac964;
  fVar5 = DAT_1808ac658;
  fVar26 = DAT_1808ac40c;
  fVar11 = DAT_1808ac0c0;
  fVar28 = 0.0;
  plVar18 = *(longlong **)(puVar22 + 0x50);
  plVar19 = *(longlong **)(puVar22 + 0x58);
  if (plVar18 != plVar19) {
    do {
      lVar14 = *plVar18;
      *(undefined8 *)(puVar22 + 0x28) = 0;
      *(undefined8 *)(puVar22 + 0x30) = 0;
      *(undefined8 *)(puVar22 + 0x38) = 0;
      if ((lVar14 == 0) || (DAT_180ca0e5e == '\0')) {
        fVar23 = 0.0;
      }
      else {
        *(uint *)(puVar22 + 0x28) = DAT_180cc4c34;
        *(undefined4 *)(puVar22 + 0x2c) = DAT_180cc4c38;
        *(undefined4 *)(puVar22 + 0x30) = DAT_180cc4c3c;
        *(undefined4 *)(puVar22 + 0x34) = DAT_180cc4c40;
        *(undefined4 *)(puVar22 + 0x38) = 0xe8;
        *(undefined4 *)(puVar22 + 0x3c) = 0xc;
        lVar14 = lVar14 + (ulonglong)DAT_180cc4c34;
        *(undefined8 *)(puVar22 + -8) = 0x18038e4d2;
        fVar23 = (float)FUN_18000f3d0(lVar14 + 0xc);
        fVar23 = (param_4 + param_6) - fVar23;
        fVar27 = (fVar23 - fVar11) / fVar26;
        if (fVar27 < 0.0) {
          fVar27 = 0.0;
        }
        else if (fVar4 <= fVar27) {
          fVar27 = fVar4;
        }
        fVar24 = (fVar23 - fVar6) / fVar7;
        if (fVar24 < 0.0) {
          fVar24 = 0.0;
        }
        else if (fVar4 <= fVar24) {
          fVar24 = fVar4;
        }
        *(undefined8 *)(puVar22 + -8) = 0x18038e552;
        fVar23 = (float)FUN_18023bfc0(lVar14,puVar22 + 0x28,puVar22 + 0x68);
        fVar23 = fVar23 * (fVar5 - (fVar24 + fVar24)) * fVar24 * fVar24 *
                          (fVar5 - (fVar27 + fVar27)) * fVar27 * fVar27;
      }
      fVar28 = fVar28 + fVar23;
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar19);
    plVar19 = *(longlong **)(puVar22 + 0x58);
  }
  fVar23 = 0.0;
  for (plVar18 = *(longlong **)(puVar22 + 0x50); plVar18 != plVar19; plVar18 = plVar18 + 1) {
    lVar14 = *plVar18;
    *(undefined8 *)(puVar22 + 0x28) = 0;
    *(undefined8 *)(puVar22 + 0x30) = 0;
    *(undefined8 *)(puVar22 + 0x38) = 0;
    if ((lVar14 == 0) || (DAT_180ca0e5e == '\0')) {
      fVar27 = 0.0;
    }
    else {
      *(uint *)(puVar22 + 0x28) = DAT_180cc4c34;
      *(undefined4 *)(puVar22 + 0x2c) = DAT_180cc4c38;
      *(undefined4 *)(puVar22 + 0x30) = DAT_180cc4c3c;
      *(undefined4 *)(puVar22 + 0x34) = DAT_180cc4c40;
      *(undefined4 *)(puVar22 + 0x38) = 0xe8;
      *(undefined4 *)(puVar22 + 0x3c) = 0xc;
      lVar14 = lVar14 + (ulonglong)DAT_180cc4c34;
      *(undefined8 *)(puVar22 + -8) = 0x18038e5ff;
      fVar27 = (float)FUN_18000f3d0(lVar14 + 0xc);
      fVar27 = (param_4 + param_6) - fVar27;
      fVar24 = (fVar27 - fVar11) / fVar26;
      if (fVar24 < 0.0) {
        fVar24 = 0.0;
      }
      else if (fVar4 <= fVar24) {
        fVar24 = fVar4;
      }
      fVar25 = (fVar27 - fVar6) / fVar7;
      if (fVar25 < 0.0) {
        fVar25 = 0.0;
      }
      else if (fVar4 <= fVar25) {
        fVar25 = fVar4;
      }
      *(undefined8 *)(puVar22 + -8) = 0x18038e67f;
      fVar27 = (float)FUN_18023bfc0(lVar14,puVar22 + 0x28,puVar22 + 0x40);
      fVar27 = fVar27 * (fVar5 - (fVar25 + fVar25)) * fVar25 * fVar25 *
                        (fVar5 - (fVar24 + fVar24)) * fVar24 * fVar24;
    }
    fVar23 = fVar23 + fVar27;
  }
  if (DAT_1809f79b0 == '\0') {
    DAT_1809f79b0 = '\x01';
    *(undefined8 *)(puVar22 + -8) = 0x18038e6c0;
    DAT_1809f79a8 = FUN_180264b70(PTR_s_inferno_smoke_volume_density_1809f79a0);
    if (DAT_1809f79a8 == 0) {
      *(undefined8 *)(puVar22 + -8) = 0x18038e6df;
      FUN_1802b2560("[error] world effects | ConVar %s not found",
                    PTR_s_inferno_smoke_volume_density_1809f79a0);
    }
  }
  if (DAT_1809f79a8 == 0) {
    fVar11 = DAT_1808ac03c;
  }
  else {
    *(undefined8 *)(puVar22 + -8) = 0x18038e6fa;
    fVar11 = (float)FUN_180264d70();
  }
  bVar3 = fVar23 + fVar28 <= fVar11;
  lVar14 = *(longlong *)(puVar22 + 0x50);
  if (lVar14 != 0) {
    uVar15 = (*(longlong *)(puVar22 + 0x60) - lVar14 >> 3) * 8;
    if (0xfff < uVar15) {
      lVar1 = *(longlong *)(lVar14 + -8);
      if ((lVar14 - lVar1) - 8U < 0x20) {
        *(undefined8 *)(puVar22 + -8) = 0x18038e749;
        thunk_FUN_1803d64e0(lVar1,uVar15 + 0x27);
        return bVar3;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar22 = puVar22 + 8;
    }
    *(undefined8 *)(puVar22 + -8) = 0x18038e75d;
    thunk_FUN_1803d64e0();
  }
  return bVar3;
}



/* ===== 18038e7c0 FUN_18038e7c0 ===== */

undefined8 * FUN_18038e7c0(undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  size_t sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(param_2);
  FUN_1800133a0(param_1,param_2,sVar1,param_4,uVar2);
  FUN_1800134a0(param_1,&DAT_18089e9f8,2,param_4,1);
  sVar1 = strlen(param_3);
  FUN_1800134a0(param_1,param_3,sVar1);
  return param_1;
}



/* ===== 18038e850 FUN_18038e850 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18038e850(char *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  longlong *plVar10;
  size_t sVar11;
  longlong lVar12;
  undefined8 *puVar13;
  char *_Str;
  undefined4 *puVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  if ((DAT_1811089f0 != (longlong *)0x0) &&
     (plVar10 = (longlong *)
                (**(code **)(*DAT_1811089f0 + 0x68))(DAT_1811089f0,PTR_s_client_dll_1809f9d30,0),
     plVar10 != (longlong *)0x0)) {
    local_78 = 0;
    (**(code **)(*plVar10 + 0x10))(plVar10,&local_78,param_1);
    lVar12 = local_78;
    if (local_78 != 0) {
      sVar11 = strlen(param_1);
      FUN_180029840(param_2,param_1,sVar11);
      lVar15 = *(longlong *)(param_2 + 0x20);
      lVar2 = *(longlong *)(param_2 + 0x28);
      if (lVar15 != lVar2) {
        do {
          FUN_18000f890(lVar15);
          lVar15 = lVar15 + 0x28;
        } while (lVar15 != lVar2);
        *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
      }
      uVar9 = FUN_180011440(lVar12 + 0x24);
      uVar17 = (ulonglong)uVar9;
      lVar12 = FUN_18000f3a0(lVar12 + 0x30);
      if ((uVar9 != 0) && (lVar12 != 0)) {
        lVar15 = *(longlong *)(param_2 + 0x20);
        if ((ulonglong)((*(longlong *)(param_2 + 0x30) - lVar15 >> 3) * -0x3333333333333333) <
            uVar17) {
          lVar2 = *(longlong *)(param_2 + 0x28);
          puVar13 = (undefined8 *)FUN_18000fb70(uVar17 * 0x28);
          puVar3 = *(undefined4 **)(param_2 + 0x28);
          puVar1 = puVar13;
          for (puVar14 = *(undefined4 **)(param_2 + 0x20); puVar14 != puVar3; puVar14 = puVar14 + 10
              ) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            uVar5 = puVar14[1];
            uVar6 = puVar14[2];
            uVar7 = puVar14[3];
            *(undefined4 *)puVar1 = *puVar14;
            *(undefined4 *)((longlong)puVar1 + 4) = uVar5;
            *(undefined4 *)(puVar1 + 1) = uVar6;
            *(undefined4 *)((longlong)puVar1 + 0xc) = uVar7;
            uVar8 = *(undefined8 *)(puVar14 + 6);
            puVar1[2] = *(undefined8 *)(puVar14 + 4);
            puVar1[3] = uVar8;
            *(undefined8 *)(puVar14 + 4) = 0;
            *(undefined8 *)(puVar14 + 6) = 0xf;
            *(undefined1 *)puVar14 = 0;
            *(undefined4 *)(puVar1 + 4) = puVar14[8];
            puVar1 = puVar1 + 5;
          }
          FUN_18038f500(param_2 + 0x20,puVar13,(lVar2 - lVar15 >> 3) * -0x3333333333333333,uVar17);
        }
        if (uVar9 != 0) {
          uVar16 = 0;
          do {
            _Str = (char *)FUN_18000f3a0((ulonglong)uVar16 * 0x20 + lVar12);
            if (_Str != (char *)0x0) {
              local_70 = 0;
              uStack_68 = 0;
              local_60 = 0;
              local_58 = 0;
              sVar11 = strlen(_Str);
              FUN_1800133a0(&local_70,_Str,sVar11);
              local_50 = FUN_180011200(lVar12 + ((ulonglong)uVar16 * 0x20 | 0x10));
              puVar4 = *(ulonglong **)(param_2 + 0x28);
              if (puVar4 == *(ulonglong **)(param_2 + 0x30)) {
                FUN_18038f2c0(param_2 + 0x20,puVar4,&local_70);
              }
              else {
                *puVar4 = local_70;
                puVar4[1] = uStack_68;
                puVar4[2] = local_60;
                puVar4[3] = local_58;
                local_60 = 0;
                local_58 = 0xf;
                local_70 = local_70 & 0xffffffffffffff00;
                *(undefined4 *)(puVar4 + 4) = local_50;
                *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 0x28;
              }
              FUN_18000f890(&local_70);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar9);
        }
      }
      return 1;
    }
  }
  return 0;
}



/* ===== 18038eaf0 FUN_18038eaf0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18038eaf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar9;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  undefined8 ****local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  longlong lStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_b8;
  if (DAT_1811089f0 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_18038e7c0(local_80,param_1,param_2);
    ppppuVar5 = local_80;
    if (0xf < local_68) {
      ppppuVar5 = local_80[0];
    }
    uVar8 = 0xcbf29ce484222325;
    uVar4 = 0;
    if (local_70 != 0) {
      do {
        uVar8 = (uVar8 ^ *(byte *)(uVar4 + (longlong)ppppuVar5)) * 0x100000001b3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_70);
    }
    lVar2 = FUN_18038f1e0(uVar4,local_90,local_80,uVar8);
    lVar7 = DAT_1811089b8;
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar7 = *(longlong *)(lVar2 + 8);
    }
    if (lVar7 == DAT_1811089b8) {
      uStack_58 = 0;
      local_50 = _DAT_1808ad410;
      uStack_48 = _UNK_1808ad418;
      local_60 = 0;
      local_40 = 0;
      lStack_38 = 0;
      local_30 = 0;
      uVar6 = 0;
      cVar1 = FUN_18038e850(param_1,&local_60);
      lVar2 = lStack_38;
      uVar9 = extraout_XMM0_Da;
      lVar7 = local_40;
      if (cVar1 != '\0') {
        for (; lVar7 != lVar2; lVar7 = lVar7 + 0x28) {
          cVar1 = FUN_180023400(lVar7,param_2);
          uVar9 = extraout_XMM0_Da_00;
          if (cVar1 != '\0') {
            uVar6 = *(undefined4 *)(lVar7 + 0x20);
            break;
          }
        }
      }
      plVar3 = (longlong *)FUN_18038ef80(uVar9,local_90,local_80);
      *(undefined4 *)(*plVar3 + 0x30) = uVar6;
      FUN_18038eed0(&local_40);
      FUN_18000f890(&local_60);
    }
    else {
      uVar6 = *(undefined4 *)(lVar7 + 0x30);
    }
    FUN_18000f890(local_80);
  }
  return uVar6;
}



/* ===== 18038ec80 FUN_18038ec80 ===== */

void FUN_18038ec80(longlong param_1)

{
  FUN_18038eed0(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18038eca0 FUN_18038eca0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18038eca0(void)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  errno_t eVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  char ******param2;
  char *param3;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  FILE *local_88;
  char ******local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  char *local_60;
  char *pcStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  puVar8 = auStack_a8;
  if (DAT_1811089f0 != 0) {
    local_88 = (FILE *)0x0;
    eVar4 = fopen_s(&local_88,"neverlose_schema.txt","w");
    puVar8 = auStack_a8;
    if ((eVar4 == 0) && (puVar8 = auStack_a8, local_88 != (FILE *)0x0)) {
      ppuVar9 = &PTR_s_C_BaseEntity_1806b10e0;
      do {
        pcVar7 = *ppuVar9;
        uStack_78 = 0;
        local_70 = 0;
        local_68 = 0xf;
        local_80 = (char ******)0x0;
        local_60 = (char *)0x0;
        pcStack_58 = (char *)0x0;
        local_50 = 0;
        cVar3 = FUN_18038e850(pcVar7,&local_80);
        if (cVar3 == '\0') {
          fprintf(local_88,"%s not found\n\n",pcVar7);
          pcVar2 = pcStack_58;
          pcVar7 = local_60;
          if (local_60 != (char *)0x0) {
            for (; pcVar7 != pcVar2; pcVar7 = pcVar7 + 0x28) {
              FUN_18000f890(pcVar7);
            }
LAB_18038ee35:
            uVar6 = (local_50 - (longlong)local_60 >> 3) * 8;
            if (uVar6 < 0x1000) {
              pcVar7 = local_60;
            }
            else {
              if ((char *)0x1f < local_60 + (-8 - (longlong)*(char **)(local_60 + -8))) {
                pcVar1 = (code *)swi(0x29);
                (*pcVar1)(5);
                puVar8 = auStack_a0;
                goto LAB_18038eeae;
              }
              uVar6 = uVar6 + 0x27;
              pcVar7 = *(char **)(local_60 + -8);
            }
            thunk_FUN_1803d64e0(pcVar7,uVar6);
            local_50 = 0;
            local_60 = (char *)0x0;
            pcStack_58 = (char *)0x0;
          }
        }
        else {
          param2 = (char ******)&local_80;
          if (0xf < local_68) {
            param2 = local_80;
          }
          fprintf(local_88,"%s fields %zu\n",(char *)param2,
                  ((longlong)pcStack_58 - (longlong)local_60 >> 3) * -0x3333333333333333);
          pcVar2 = pcStack_58;
          for (pcVar7 = local_60; pcVar7 != pcVar2; pcVar7 = pcVar7 + 0x28) {
            if (*(ulonglong *)(pcVar7 + 0x18) < 0x10) {
              param3 = pcVar7;
            }
            else {
              param3 = *(char **)pcVar7;
            }
            fprintf(local_88,"    0x%04X %s\n",*(uint *)(pcVar7 + 0x20),param3);
          }
          fprintf(local_88,"\n");
          pcVar2 = pcStack_58;
          pcVar7 = local_60;
          if (local_60 != (char *)0x0) {
            for (; pcVar7 != pcVar2; pcVar7 = pcVar7 + 0x28) {
              FUN_18000f890(pcVar7);
            }
            goto LAB_18038ee35;
          }
        }
        FUN_18000f890(&local_80);
        ppuVar9 = ppuVar9 + 1;
      } while (ppuVar9 != &PTR_s_health_bar_1806b11b0);
      FUN_18051053c(local_88);
      uVar5 = 1;
      puVar8 = auStack_a8;
      goto LAB_18038eeb0;
    }
  }
LAB_18038eeae:
  uVar5 = 0;
LAB_18038eeb0:
  *(undefined8 *)(puVar8 + -8) = 0x18038eebc;
  return uVar5;
}



/* ===== 18038eed0 FUN_18038eed0 ===== */

void FUN_18038eed0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18038ef5f;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18038ef5f:
  *(undefined8 *)(puVar5 + -8) = 0x18038ef67;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 18038ef80 FUN_18038ef80 ===== */

longlong * FUN_18038ef80(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  undefined4 uVar11;
  longlong local_48;
  longlong lStack_40;
  undefined8 *local_38;
  longlong *local_30;
  
  if ((ulonglong)param_3[3] < 0x10) {
    puVar7 = param_3;
  }
  else {
    puVar7 = (undefined8 *)*param_3;
  }
  uVar9 = 0xcbf29ce484222325;
  uVar4 = 0;
  if (param_3[2] != 0) {
    do {
      uVar9 = (uVar9 ^ *(byte *)(uVar4 + (longlong)puVar7)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)param_3[2]);
  }
  FUN_18038f1e0(uVar4,&local_48,param_3,uVar9);
  if (lStack_40 != 0) {
    *param_2 = lStack_40;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_1811089c0 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  local_38 = &DAT_1811089b8;
  local_30 = (longlong *)0x0;
  plVar2 = (longlong *)FUN_1804ecaa0(0x38);
  local_30 = plVar2;
  FUN_180024b50(plVar2 + 2,param_3);
  *(undefined4 *)(plVar2 + 6) = 0;
  uVar4 = DAT_1811089e8;
  if (DAT_1811089b0 < (float)(DAT_1811089c0 + 1) / (float)DAT_1811089e8) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_1811089c0 + 1) / DAT_1811089b0);
    lVar5 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar5 = -0x8000000000000000;
    }
    uVar6 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar5)) {
      uVar6 = (longlong)fVar10 + lVar5;
    }
    uVar8 = uVar4;
    if ((uVar4 < uVar6) && ((0x1ff < uVar4 || (uVar8 = uVar4 * 8, uVar4 * 8 < uVar6)))) {
      uVar8 = uVar6;
    }
    uVar11 = FUN_18038f5e0(uVar6,uVar8);
    plVar3 = (longlong *)FUN_18038f1e0(uVar11,&local_38,plVar2 + 2,uVar9);
    local_48 = *plVar3;
  }
  plVar3 = *(longlong **)(local_48 + 8);
  DAT_1811089c0 = DAT_1811089c0 + 1;
  *plVar2 = local_48;
  plVar2[1] = (longlong)plVar3;
  *plVar3 = (longlong)plVar2;
  *(longlong **)(local_48 + 8) = plVar2;
  lVar1 = DAT_1811089c8;
  uVar9 = DAT_1811089e0 & uVar9;
  lVar5 = *(longlong *)(DAT_1811089c8 + uVar9 * 0x10);
  if (lVar5 == DAT_1811089b8) {
    *(longlong **)(DAT_1811089c8 + uVar9 * 0x10) = plVar2;
  }
  else {
    if (lVar5 == local_48) {
      *(longlong **)(DAT_1811089c8 + uVar9 * 0x10) = plVar2;
      goto LAB_18038f1b0;
    }
    if (*(longlong **)(DAT_1811089c8 + 8 + uVar9 * 0x10) != plVar3) goto LAB_18038f1b0;
  }
  *(longlong **)(lVar1 + 8 + uVar9 * 0x10) = plVar2;
LAB_18038f1b0:
  *param_2 = (longlong)plVar2;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 18038f1e0 FUN_18038f1e0 ===== */

undefined8 *
FUN_18038f1e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(DAT_1811089c8 + 8 + (DAT_1811089e0 & param_4) * 0x10);
  if (puVar4 == DAT_1811089b8) {
    *param_2 = DAT_1811089b8;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_1811089c8 + (DAT_1811089e0 & param_4) * 0x10);
  _Size = param_3[2];
  uVar2 = param_3[3];
  while( true ) {
    _Buf2 = puVar4 + 2;
    if (0xf < (ulonglong)puVar4[5]) {
      _Buf2 = (undefined8 *)*_Buf2;
    }
    if (uVar2 < 0x10) {
      _Buf1 = param_3;
    }
    else {
      _Buf1 = (undefined8 *)*param_3;
    }
    if ((_Size == puVar4[4]) && ((_Size == 0 || (iVar3 = memcmp(_Buf1,_Buf2,_Size), iVar3 == 0))))
    break;
    if (puVar4 == puVar1) {
      *param_2 = puVar4;
      param_2[1] = 0;
      return param_2;
    }
    puVar4 = (undefined8 *)puVar4[1];
  }
  *param_2 = *puVar4;
  param_2[1] = puVar4;
  return param_2;
}



/* ===== 18038f2c0 FUN_18038f2c0 ===== */

undefined8 * FUN_18038f2c0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  lVar3 = *param_1;
  uVar14 = 0x666666666666666;
  lVar9 = (param_1[1] - lVar3 >> 3) * -0x3333333333333333;
  if (lVar9 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar9 + 1;
  uVar12 = (param_1[2] - lVar3 >> 3) * -0x3333333333333333;
  if (uVar12 <= 0x666666666666666 - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar14 = uVar1;
    if (uVar1 <= uVar12) {
      uVar14 = uVar12;
    }
    if (0x666666666666666 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar14 * 0x28);
  lVar3 = ((longlong)param_2 - lVar3) / 0x28;
  puVar10[lVar3 * 5] = 0;
  (puVar10 + lVar3 * 5)[1] = 0;
  puVar10[lVar3 * 5 + 2] = 0;
  puVar2 = puVar10 + lVar3 * 5;
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
  *(undefined4 *)(puVar2 + 4) = param_3[8];
  puVar4 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  puVar8 = puVar10;
  if (param_2 == puVar4) {
    for (; puVar11 != puVar4; puVar11 = puVar11 + 10) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined4 *)puVar8 = *puVar11;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar5;
      *(undefined4 *)(puVar8 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar7;
      uVar5 = puVar11[5];
      uVar6 = puVar11[6];
      uVar7 = puVar11[7];
      *(undefined4 *)(puVar8 + 2) = puVar11[4];
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar5;
      *(undefined4 *)(puVar8 + 3) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar7;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      *(undefined4 *)(puVar8 + 4) = puVar11[8];
      puVar8 = puVar8 + 5;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 10) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      *(undefined4 *)puVar8 = *puVar11;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar5;
      *(undefined4 *)(puVar8 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar7;
      uVar5 = puVar11[5];
      uVar6 = puVar11[6];
      uVar7 = puVar11[7];
      *(undefined4 *)(puVar8 + 2) = puVar11[4];
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar5;
      *(undefined4 *)(puVar8 + 3) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar7;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      *(undefined4 *)(puVar8 + 4) = puVar11[8];
      puVar8 = puVar8 + 5;
    }
    puVar4 = (undefined4 *)param_1[1];
    puVar8 = puVar2;
    for (; param_2 != puVar4; param_2 = param_2 + 10) {
      puVar13 = puVar8 + 5;
      *puVar13 = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined4 *)puVar13 = *param_2;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar5;
      *(undefined4 *)(puVar8 + 6) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x34) = uVar7;
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      *(undefined4 *)(puVar8 + 7) = param_2[4];
      *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar5;
      *(undefined4 *)(puVar8 + 8) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x44) = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      *(undefined4 *)(puVar8 + 9) = param_2[8];
      puVar8 = puVar13;
    }
  }
  FUN_18038f500(param_1,puVar10,uVar1,uVar14);
  return puVar2;
}



/* ===== 18038f500 FUN_18038f500 ===== */

void FUN_18038f500(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  if (lVar3 == 0) goto LAB_18038f5a6;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 3) * 8) < 0x1000) {
LAB_18038f59b:
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_18038f59b;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x18038f5a6;
  thunk_FUN_1803d64e0(lVar2);
LAB_18038f5a6:
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x28;
  param_1[2] = param_2 + param_4 * 0x28;
  return;
}



/* ===== 18038f5e0 FUN_18038f5e0 ===== */

void FUN_18038f5e0(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_1811089b8;
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
  FUN_180029a30(&DAT_1811089c8,2L << (bVar13 & 0x3f),DAT_1811089b8);
  DAT_1811089e0 = lVar17 - 1;
  DAT_1811089e8 = lVar17;
  plVar8 = (longlong *)*DAT_1811089b8;
joined_r0x00018038f66a:
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
      uVar12 = uVar12 & DAT_1811089e0;
      plVar18 = *(longlong **)(DAT_1811089c8 + uVar12 * 0x10);
      puVar2 = (undefined8 *)(DAT_1811089c8 + uVar12 * 0x10);
      lVar17 = DAT_1811089c8 + uVar12 * 0x10;
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
joined_r0x00018038f773:
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
            goto joined_r0x00018038f66a;
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
      goto joined_r0x00018038f66a;
    }
    if ((_Size != 0) && (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 != 0)) {
      uVar11 = plVar8[5];
      goto joined_r0x00018038f773;
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



/* ===== 18038f860 FUN_18038f860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18038f860(undefined8 *param_1,LPCWSTR param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  DWORD DVar5;
  HMODULE hModule;
  longlong lVar6;
  undefined4 *puVar7;
  LPWSTR pWVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  LPWSTR local_88;
  LPWSTR pWStack_80;
  LPWSTR local_78;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (param_2 == (LPCWSTR)0x0) {
    param_2 = (LPCWSTR)0x0;
  }
  local_68 = param_1;
  hModule = GetModuleHandleW(param_2);
  if (hModule == (HMODULE)0x0) {
    *(undefined1 *)(param_1 + 4) = 0;
    puVar12 = auStack_a8;
    goto LAB_18038fa4d;
  }
  local_88 = (LPWSTR)0x0;
  pWStack_80 = (LPWSTR)0x0;
  local_78 = (LPWSTR)0x0;
  local_88 = (LPWSTR)FUN_18000fb70(0x208);
  pWVar8 = local_88 + 0x104;
  local_78 = pWVar8;
  FUN_180540170(local_88,0,0x208);
  puVar10 = auStack_a8;
  puVar11 = auStack_a8;
  lVar6 = (longlong)pWVar8 - (longlong)local_88;
  pWStack_80 = pWVar8;
  while ((ulonglong)(lVar6 >> 1) < 0x8001) {
    DVar5 = GetModuleFileNameW(hModule,local_88,
                               (DWORD)((longlong)pWStack_80 - (longlong)local_88 >> 1));
    if (DVar5 == 0) {
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_18038f96c;
    }
    uVar9 = (longlong)pWStack_80 - (longlong)local_88 >> 1;
    if (DVar5 < uVar9) {
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0;
      FUN_180024d40(&local_60,local_88,(longlong)((ulonglong)DVar5 * 2) >> 1);
      puVar7 = (undefined4 *)FUN_180014350(&local_60,local_40);
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
      *(undefined8 *)(puVar7 + 6) = 7;
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      FUN_1800289e0(local_40);
      FUN_1800289e0(&local_60);
      goto LAB_18038f96c;
    }
    FUN_1803920c0(&local_88,uVar9 * 2);
    lVar6 = (longlong)pWStack_80 - (longlong)local_88;
  }
  *(undefined1 *)(param_1 + 4) = 0;
LAB_18038f96c:
  puVar12 = auStack_a8;
  if (local_88 == (LPWSTR)0x0) goto LAB_18038fa4d;
  pWVar8 = local_88;
  if ((ulonglong)(((longlong)local_78 - (longlong)local_88 >> 1) * 2) < 0x1000) {
LAB_18038fa42:
    puVar11 = puVar10;
  }
  else {
    pWVar8 = *(LPWSTR *)(local_88 + -4);
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)pWVar8))) {
      pWVar8 = (LPWSTR)&DAT_00000005;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar10 = auStack_a0;
      goto LAB_18038fa42;
    }
  }
  *(undefined8 *)(puVar11 + -8) = 0x18038fa4d;
  thunk_FUN_1803d64e0(pWVar8);
  puVar12 = puVar11;
LAB_18038fa4d:
  *(undefined8 *)(puVar12 + -8) = 0x18038fa5c;
  return param_1;
}



/* ===== 18038fa80 FUN_18038fa80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18038fa80(ulonglong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  char *pcVar12;
  char cVar13;
  longlong *****ppppplVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [40];
  ulonglong local_2c8;
  undefined8 *local_2b8;
  undefined8 local_2b0;
  undefined2 local_2a8 [2];
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  longlong local_278 [2];
  byte abStack_268 [128];
  longlong local_1e8;
  undefined1 local_168 [16];
  undefined8 *****local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 *****local_138;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong local_120;
  undefined8 *****local_118;
  undefined8 uStack_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 *****local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong *****local_d8 [2];
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  undefined8 *****local_a0;
  longlong ****pppplStack_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 *****local_80;
  undefined8 uStack_78;
  ulonglong local_70 [2];
  undefined8 local_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_2f8;
  local_2b8 = (undefined8 *)((ulonglong)local_2b8 & 0xffffffff00000000);
  local_2c8 = param_1;
  FUN_180391ff0(param_1 + 0x68);
  FUN_180276480(local_278,param_2,0x20);
  if (local_1e8 == 0) {
    *(char **)(param_1 + 0xa8) = "cannot open vpk directory file";
    uVar6 = 0;
    puVar22 = auStack_2f8;
    goto LAB_180390554;
  }
  local_60 = 0;
  iStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_180276e90(local_278,&local_60,0x1c);
  puVar22 = auStack_2f8;
  if ((abStack_268[*(int *)(local_278[0] + 4)] & 6) != 0) {
    *(char **)(param_1 + 0xa8) = "vpk header truncated";
    uVar6 = 0;
    puVar22 = auStack_2f8;
    goto LAB_180390554;
  }
  if ((int)local_60 != 0x55aa1234) {
    *(char **)(param_1 + 0xa8) = "bad vpk signature";
    uVar6 = 0;
    puVar22 = auStack_2f8;
    goto LAB_180390554;
  }
  if (local_60._4_4_ != 2) {
    *(char **)(param_1 + 0xa8) = "unsupported vpk version";
    uVar6 = 0;
    goto LAB_180390554;
  }
  if ((undefined8 *)(param_1 + 0x40) != param_2) {
    if ((ulonglong)param_2[3] < 8) {
      puVar7 = param_2;
    }
    else {
      puVar7 = (undefined8 *)*param_2;
    }
    FUN_1800277d0((undefined8 *)(param_1 + 0x40),puVar7,param_2[2]);
  }
  uVar6 = FUN_180014350(param_2,&local_118);
  FUN_1800248e0(param_1,uVar6);
  FUN_1800289e0(&local_118);
  *(int *)(param_1 + 0x60) = iStack_58 + 0x1c;
  puVar7 = (undefined8 *)FUN_180099cd0(param_2,&local_118);
  if ((ulonglong)puVar7[3] < 8) {
    local_2b8 = puVar7;
  }
  else {
    local_2b8 = (undefined8 *)*puVar7;
  }
  local_2b0 = puVar7[2];
  FUN_180024c20(local_d8,&local_2b8);
  local_2b8 = (undefined8 *)CONCAT44(local_2b8._4_4_,0xc);
  FUN_1800289e0(&local_118);
  ppppplVar14 = (longlong *****)local_d8;
  if (0xf < local_c0) {
    ppppplVar14 = local_d8[0];
  }
  uVar24 = 0xffffffffffffffff;
  uVar16 = local_c8;
  if (3 < local_c8) {
    lVar8 = -1;
    if (local_c8 - 4 != -1) {
      lVar8 = local_c8 - 4;
    }
    lVar19 = lVar8 + 4 + (longlong)ppppplVar14;
    lVar8 = thunk_FUN_1804e6890(ppppplVar14,lVar19,&DAT_18089ebd0,4);
    if (lVar8 != lVar19) {
      uVar24 = lVar8 - (longlong)ppppplVar14;
    }
    uVar16 = local_c8;
  }
  if (uVar24 == 0xffffffffffffffff) {
    local_a0 = (undefined8 *****)0x0;
    pppplStack_98 = (longlong ****)0x0;
    local_90 = 0;
    local_88 = 0;
    ppppplVar14 = (longlong *****)local_d8;
    if (0xf < local_c0) {
      ppppplVar14 = local_d8[0];
    }
    if (0x7fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (uVar16 < 0x10) {
      local_90 = uVar16;
      local_88 = 0xf;
      pppppuVar11 = (undefined8 *****)*ppppplVar14;
      local_a0 = pppppuVar11;
      pppplStack_98 = ppppplVar14[1];
    }
    else {
      uVar24 = uVar16 | 0xf;
      if (uVar24 < 0x8000000000000000) {
        if (uVar24 < 0x16) {
          uVar24 = 0x16;
        }
      }
      else {
        uVar24 = 0x7fffffffffffffff;
      }
      pppppuVar11 = (undefined8 *****)FUN_18000fb70(uVar24 + 1);
      local_a0 = pppppuVar11;
      local_90 = uVar16;
      local_88 = uVar24;
      FUN_180540530(pppppuVar11,ppppplVar14,uVar16 + 1);
    }
    pppppuVar10 = &local_a0;
    uVar18 = 0xd;
    puVar26 = &local_90;
    puVar15 = &local_88;
  }
  else {
    local_80 = (undefined8 *****)0x0;
    uStack_78 = 0;
    local_70[0] = 0;
    local_70[1] = 0;
    if (uVar16 < uVar24) {
      uVar24 = uVar16;
    }
    ppppplVar14 = (longlong *****)local_d8;
    if (0xf < local_c0) {
      ppppplVar14 = local_d8[0];
    }
    FUN_1800133a0(&local_80,ppppplVar14,uVar24);
    pppppuVar10 = &local_80;
    uVar18 = 0x1e;
    puVar26 = local_70;
    puVar15 = local_70 + 1;
    pppppuVar11 = local_80;
  }
  local_2b8 = (undefined8 *)CONCAT44(local_2b8._4_4_,uVar18);
  if ((undefined8 *****)(param_1 + 0x20) != pppppuVar10) {
    if (*puVar15 < 0x10) {
      pppppuVar11 = pppppuVar10;
    }
    FUN_180029840((undefined8 *****)(param_1 + 0x20),pppppuVar11,*puVar26);
  }
  if ((uVar18 & 2) != 0) {
    uVar18 = uVar18 & 0xfffffffd;
    FUN_18000f890(&local_80);
  }
  if ((uVar18 & 1) != 0) {
    FUN_18000f890(&local_a0);
  }
  uVar18 = *(uint *)(param_1 + 0x60);
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0xf;
  local_f8 = (undefined8 *****)0x0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0xf;
  local_138 = (undefined8 *****)0x0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0xf;
  local_118 = (undefined8 *****)0x0;
  local_2b8 = (undefined8 *)(ulonglong)uVar18;
  plVar9 = (longlong *)FUN_180276790(local_278,&local_b8);
  puVar22 = auStack_2f8;
  puVar21 = auStack_2f8;
  puVar20 = auStack_2f8;
  if (plVar9[1] + *plVar9 < (longlong)(ulonglong)uVar18) {
LAB_18038feb0:
    local_e8 = 0;
    pppppuVar10 = &local_f8;
    if (0xf < local_e0) {
      pppppuVar10 = local_f8;
    }
    *(undefined1 *)pppppuVar10 = 0;
    cVar17 = '\0';
    while( true ) {
      iVar5 = FUN_1803924e0(local_278);
      cVar13 = (char)iVar5;
      if (iVar5 == -1) {
        cVar13 = cVar17;
      }
      if ((abStack_268[*(int *)(local_278[0] + 4)] & 6) != 0) goto LAB_18039044e;
      if (cVar13 == '\0') break;
      FUN_1800690a0(&local_f8);
      cVar17 = cVar13;
    }
    lVar8 = local_e8;
    if (local_e8 != 0) {
LAB_18038ff20:
      do {
        local_128 = 0;
        pppppuVar10 = &local_138;
        if (0xf < local_120) {
          pppppuVar10 = local_138;
        }
        *(undefined1 *)pppppuVar10 = 0;
        cVar17 = '\0';
        while( true ) {
          iVar5 = FUN_1803924e0(local_278);
          cVar13 = (char)iVar5;
          if (iVar5 == -1) {
            cVar13 = cVar17;
          }
          if ((abStack_268[*(int *)(local_278[0] + 4)] & 6) != 0) goto LAB_18039042c;
          if (cVar13 == '\0') break;
          FUN_1800690a0(&local_138);
          cVar17 = cVar13;
        }
        if (local_128 == 0) goto LAB_18039042c;
        while( true ) {
          local_108 = 0;
          pppppuVar10 = &local_118;
          if (0xf < local_100) {
            pppppuVar10 = local_118;
          }
          *(undefined1 *)pppppuVar10 = 0;
          cVar17 = '\0';
          while( true ) {
            iVar5 = FUN_1803924e0(local_278);
            lVar19 = local_108;
            cVar13 = (char)iVar5;
            if (iVar5 == -1) {
              cVar13 = cVar17;
            }
            if ((abStack_268[*(int *)(local_278[0] + 4)] & 6) != 0) goto LAB_18038ff20;
            if (cVar13 == '\0') break;
            FUN_1800690a0(&local_118);
            cVar17 = cVar13;
          }
          if (local_108 == 0) break;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          FUN_180276e90(local_278,&local_b8,0x12);
          if ((abStack_268[*(int *)(local_278[0] + 4)] & 6) != 0) {
LAB_18039046e:
            pcVar12 = "vpk entry truncated";
            uVar6 = 0;
            puVar22 = puVar21;
            goto LAB_18039047e;
          }
          local_298 = 0;
          uStack_290 = 0;
          local_288 = 0;
          local_2a8[0] = local_b8._6_2_;
          local_2a4 = (undefined4)uStack_b0;
          local_2a0 = uStack_b0._4_4_;
          if (local_b8._4_2_ != 0) {
            FUN_1800e88a0(&local_298,local_b8._4_2_);
            FUN_180276e90(local_278,local_298,local_b8._4_2_);
          }
          lVar4 = local_128;
          uStack_150 = 0;
          local_148 = 0;
          local_140 = 0xf;
          local_158 = (undefined8 *****)0x0;
          pppppuVar10 = &local_138;
          if (0xf < local_120) {
            pppppuVar10 = local_138;
          }
          if (local_128 != 1) {
LAB_1803900f6:
            pppppuVar10 = &local_138;
            if (0xf < local_120) {
              pppppuVar10 = local_138;
            }
            FUN_1800134a0(&local_158,pppppuVar10,lVar4);
            uVar24 = local_140;
            uVar16 = local_148;
            if (local_148 < local_140) {
              pppppuVar10 = &local_158;
              if (0xf < local_140) {
                pppppuVar10 = local_158;
              }
              puVar1 = (undefined2 *)((longlong)pppppuVar10 + local_148);
              local_148 = local_148 + 1;
              *puVar1 = 0x2f;
              goto LAB_180390238;
            }
            puVar23 = auStack_2f8;
            if (local_148 != 0x7fffffffffffffff) {
              param_1 = local_148 + 1;
              uVar25 = param_1 | 0xf;
              if (uVar25 < 0x8000000000000000) {
                if (0x7fffffffffffffff - (local_140 >> 1) < local_140) {
                  uVar25 = 0x7fffffffffffffff;
                }
                else {
                  uVar2 = (local_140 >> 1) + local_140;
                  if (uVar25 < uVar2) {
                    uVar25 = uVar2;
                  }
                }
              }
              else {
                uVar25 = 0x7fffffffffffffff;
              }
              pppppuVar11 = (undefined8 *****)FUN_18000fb70(uVar25 + 1);
              pppppuVar10 = local_158;
              local_148 = param_1;
              local_140 = uVar25;
              if (uVar24 < 0x10) {
                FUN_180540530(pppppuVar11,&local_158,uVar16);
                *(undefined2 *)((longlong)pppppuVar11 + uVar16) = 0x2f;
LAB_18039022c:
                param_1 = local_2c8;
                local_158 = pppppuVar11;
                goto LAB_180390238;
              }
              FUN_180540530(pppppuVar11,local_158,uVar16);
              *(undefined2 *)((longlong)pppppuVar11 + uVar16) = 0x2f;
              if (uVar24 + 1 < 0x1000) {
                thunk_FUN_1803d64e0(pppppuVar10);
                goto LAB_18039022c;
              }
              if ((ulonglong)((longlong)pppppuVar10 + (-8 - (longlong)pppppuVar10[-1])) < 0x20) {
                thunk_FUN_1803d64e0(pppppuVar10[-1],uVar24 + 0x28);
                goto LAB_18039022c;
              }
LAB_180390460:
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              puVar20 = auStack_2f0;
LAB_180390467:
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              puVar21 = puVar20 + 8;
              goto LAB_18039046e;
            }
            goto LAB_18039059f;
          }
          iVar5 = memcmp(pppppuVar10,&DAT_1806efc00,1);
          if (iVar5 != 0) goto LAB_1803900f6;
LAB_180390238:
          pppppuVar10 = &local_118;
          if (0xf < local_100) {
            pppppuVar10 = local_118;
          }
          FUN_1800134a0(&local_158,pppppuVar10,lVar19);
          uVar24 = local_140;
          uVar16 = local_148;
          if (local_148 < local_140) {
            pppppuVar10 = &local_158;
            if (0xf < local_140) {
              pppppuVar10 = local_158;
            }
            puVar1 = (undefined2 *)((longlong)pppppuVar10 + local_148);
            local_148 = local_148 + 1;
            *puVar1 = 0x2e;
          }
          else {
            puVar23 = auStack_2f8;
            if (local_148 == 0x7fffffffffffffff) goto LAB_18039059f;
            param_1 = local_148 + 1;
            uVar25 = param_1 | 0xf;
            if (uVar25 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (local_140 >> 1) < local_140) {
                uVar25 = 0x7fffffffffffffff;
              }
              else {
                uVar2 = (local_140 >> 1) + local_140;
                if (uVar25 < uVar2) {
                  uVar25 = uVar2;
                }
              }
            }
            else {
              uVar25 = 0x7fffffffffffffff;
            }
            pppppuVar11 = (undefined8 *****)FUN_18000fb70(uVar25 + 1);
            pppppuVar10 = local_158;
            local_148 = param_1;
            local_140 = uVar25;
            if (uVar24 < 0x10) {
              FUN_180540530(pppppuVar11,&local_158,uVar16);
              *(undefined2 *)((longlong)pppppuVar11 + uVar16) = 0x2e;
            }
            else {
              FUN_180540530(pppppuVar11,local_158,uVar16);
              *(undefined2 *)((longlong)pppppuVar11 + uVar16) = 0x2e;
              if (uVar24 + 1 < 0x1000) {
                thunk_FUN_1803d64e0(pppppuVar10);
              }
              else {
                if (0x1f < (ulonglong)((longlong)pppppuVar10 + (-8 - (longlong)pppppuVar10[-1])))
                goto LAB_180390460;
                thunk_FUN_1803d64e0(pppppuVar10[-1],uVar24 + 0x28);
              }
            }
            param_1 = local_2c8;
            local_158 = pppppuVar11;
          }
          pppppuVar10 = &local_f8;
          if (0xf < local_e0) {
            pppppuVar10 = local_f8;
          }
          FUN_1800134a0(&local_158,pppppuVar10,lVar8);
          FUN_180391c80(param_1 + 0x68,local_168,&local_158,local_2a8);
          if (0xf < local_140) {
            uVar16 = local_140 + 1;
            pppppuVar10 = local_158;
            if (0xfff < uVar16) {
              pppppuVar10 = (undefined8 *****)local_158[-1];
              if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)pppppuVar10)))
              goto LAB_180390467;
              uVar16 = local_140 + 0x28;
            }
            thunk_FUN_1803d64e0(pppppuVar10,uVar16);
          }
          local_148 = 0;
          local_140 = 0xf;
          local_158 = (undefined8 *****)((ulonglong)local_158 & 0xffffffffffffff00);
          FUN_180081c30(&local_298);
          lVar8 = local_e8;
        }
      } while( true );
    }
  }
LAB_18039044e:
  if (*(longlong *)(param_1 + 0x78) == 0) {
    pcVar12 = "vpk tree empty";
    uVar6 = 0;
    puVar22 = auStack_2f8;
  }
  else {
    uVar6 = 1;
    pcVar12 = (char *)0x0;
  }
LAB_18039047e:
  *(char **)(param_1 + 0xa8) = pcVar12;
  if (0xf < local_100) {
    uVar16 = local_100 + 1;
    pppppuVar10 = local_118;
    if (uVar16 < 0x1000) {
LAB_1803904c1:
      *(undefined8 *)(puVar22 + -8) = 0x1803904c6;
      thunk_FUN_1803d64e0(pppppuVar10,uVar16);
      goto LAB_1803904c7;
    }
    pppppuVar10 = (undefined8 *****)local_118[-1];
    if ((undefined1 *)((longlong)local_118 + (-8 - (longlong)pppppuVar10)) < (undefined1 *)0x20) {
      uVar16 = local_100 + 0x28;
      goto LAB_1803904c1;
    }
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar22 = puVar22 + 8;
LAB_180390591:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar22 = puVar22 + 8;
LAB_180390598:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar23 = puVar22 + 8;
LAB_18039059f:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar23 + -8) = 0x1803905a4;
    FUN_180011990();
  }
LAB_1803904c7:
  if (0xf < local_120) {
    uVar16 = local_120 + 1;
    pppppuVar10 = local_138;
    if (0xfff < uVar16) {
      pppppuVar10 = (undefined8 *****)local_138[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_138 + (-8 - (longlong)pppppuVar10)))
      goto LAB_180390591;
      uVar16 = local_120 + 0x28;
    }
    *(undefined8 *)(puVar22 + -8) = 0x180390508;
    thunk_FUN_1803d64e0(pppppuVar10,uVar16);
  }
  if (0xf < local_e0) {
    uVar16 = local_e0 + 1;
    pppppuVar10 = local_f8;
    if (0xfff < uVar16) {
      pppppuVar10 = (undefined8 *****)local_f8[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_f8 + (-8 - (longlong)pppppuVar10)))
      goto LAB_180390598;
      uVar16 = local_e0 + 0x28;
    }
    *(undefined8 *)(puVar22 + -8) = 0x180390546;
    thunk_FUN_1803d64e0(pppppuVar10,uVar16);
  }
  *(undefined8 *)(puVar22 + -8) = 0x180390553;
  FUN_18000f890(local_d8);
LAB_180390554:
  *(undefined8 *)(puVar22 + -8) = 0x18039055d;
  FUN_18005e2f0(local_278);
  *(undefined8 *)(puVar22 + -8) = 0x18039056f;
  return uVar6;
LAB_18039042c:
  plVar9 = (longlong *)FUN_180276790(local_278,&local_b8);
  if ((longlong)local_2b8 <= plVar9[1] + *plVar9) goto LAB_18039044e;
  goto LAB_18038feb0;
}



/* ===== 1803905b0 FUN_1803905b0 ===== */

longlong FUN_1803905b0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [16];
  
  if ((ulonglong)param_2[3] < 0x10) {
    puVar6 = param_2;
  }
  else {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar4 = 0;
  uVar5 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar6 + uVar4);
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_2[2]);
  }
  lVar2 = FUN_1800268a0(param_1 + 0x68,local_18,param_2,uVar5);
  lVar2 = *(longlong *)(lVar2 + 8);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  lVar3 = 0;
  if (lVar2 != *(longlong *)(param_1 + 0x70)) {
    lVar3 = lVar2 + 0x30;
  }
  return lVar3;
}



/* ===== 180390640 FUN_180390640 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180390640(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_288 [32];
  uint local_268;
  uint local_258;
  char *local_248;
  size_t sStack_240;
  undefined8 uStack_238;
  undefined1 local_228 [8];
  uint local_220;
  longlong local_198;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  char local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_288;
  local_258 = 0;
  puVar4 = (ushort *)FUN_1803905b0();
  uVar11 = 0;
  if (puVar4 != (ushort *)0x0) {
    uVar2 = *(uint *)(puVar4 + 4);
    if (param_4 < *(uint *)(puVar4 + 4)) {
      uVar2 = param_4;
    }
    uVar11 = (ulonglong)uVar2;
    lVar1 = *param_3;
    lVar9 = param_3[1];
    if (lVar1 != param_3[1]) {
      param_3[1] = lVar1;
      lVar9 = lVar1;
    }
    uVar10 = (*(longlong *)(puVar4 + 0xc) - *(longlong *)(puVar4 + 8)) + uVar11;
    if ((ulonglong)(param_3[2] - lVar1) < uVar10) {
      if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      uVar5 = FUN_18000fb70(uVar10);
      FUN_180540530(uVar5,*param_3,param_3[1] - *param_3);
      FUN_180082ac0(param_3,uVar5,lVar9 - lVar1,uVar10);
    }
    FUN_180211af0(param_3,param_3[1],*(longlong *)(puVar4 + 8),
                  *(longlong *)(puVar4 + 0xc) - *(longlong *)(puVar4 + 8));
    if (uVar2 == 0) {
      uVar11 = CONCAT71((int7)((ulonglong)param_3[1] >> 8),*param_3 != param_3[1]);
    }
    else {
      if (*puVar4 == 0x7fff) {
        FUN_180024980(local_d8,param_1 + 0x40);
        puVar6 = local_d8;
        uVar7 = 1;
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
        plVar8 = (longlong *)(param_1 + 0x20);
        if (0xf < *(ulonglong *)(param_1 + 0x38)) {
          plVar8 = (longlong *)*plVar8;
        }
        local_268 = (uint)*puVar4;
        snprintf(local_98,0x40,"%s_%03u.vpk",plVar8);
        sStack_240 = strlen(local_98);
        local_248 = local_98;
        uVar3 = FUN_1804e5000();
        FUN_180013d60(local_118,uVar3,&local_248);
        local_258 = 0x18;
        FUN_180014f50(local_f8,param_1,local_118);
        FUN_1800289e0(local_118);
        puVar6 = local_f8;
        uVar7 = 0x1e;
      }
      local_258 = uVar7;
      FUN_180024980(local_b8,puVar6);
      if ((uVar7 & 2) != 0) {
        uVar7 = uVar7 & 0xfffffffd;
        FUN_1800289e0(local_f8);
      }
      if ((uVar7 & 1) != 0) {
        FUN_1800289e0(local_d8);
      }
      FUN_180276480(local_228,local_b8,0x20);
      if (local_198 == 0) {
        bVar12 = false;
      }
      else {
        if (*puVar4 == 0x7fff) {
          uVar10 = (ulonglong)*(uint *)(param_1 + 0x60);
        }
        else {
          uVar10 = 0;
        }
        local_248 = (char *)(*(uint *)(puVar4 + 2) + uVar10);
        sStack_240 = 0;
        uStack_238 = 0;
        FUN_180276850(local_228,&local_248);
        lVar1 = param_3[1];
        lVar9 = *param_3;
        FUN_1800e88a0(param_3,uVar11 + (lVar1 - lVar9));
        FUN_180276e90(local_228,*param_3 + (lVar1 - lVar9),uVar11);
        bVar12 = local_220 == uVar2;
      }
      FUN_18005e2f0(local_228);
      FUN_1800289e0(local_b8);
      uVar11 = (ulonglong)bVar12;
    }
  }
  return uVar11;
}



/* ===== 180390930 FUN_180390930 ===== */

undefined8 *
FUN_180390930(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  size_t _Size;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar1 = *(longlong **)(param_1 + 0x70);
  plVar6 = (longlong *)*plVar1;
  if (plVar6 != plVar1) {
    _Size = param_3[1];
    do {
      if (_Size == 0) {
LAB_1803909e3:
        if (param_4[1] != 0) {
          if ((ulonglong)plVar6[5] < 0x10) {
            plVar4 = plVar6 + 2;
          }
          else {
            plVar4 = (longlong *)plVar6[2];
          }
          lVar5 = FUN_180068d80(plVar4,plVar6[4],0,*param_4,param_4[1]);
          if (lVar5 == -1) goto LAB_180390a54;
        }
        lVar5 = param_2[1];
        if (lVar5 == param_2[2]) {
          FUN_180028f00(param_2,lVar5);
        }
        else {
          FUN_180024b50(lVar5,plVar6 + 2);
          param_2[1] = param_2[1] + 0x20;
        }
      }
      else {
        uVar2 = plVar6[4];
        if (_Size + 1 < uVar2) {
          uVar7 = uVar2 - _Size;
          if (uVar2 < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          plVar4 = plVar6 + 2;
          uVar2 = plVar6[5];
          if (0xf < uVar2) {
            plVar4 = (longlong *)plVar6[2];
          }
          iVar3 = memcmp((void *)((longlong)plVar4 + uVar7),(void *)*param_3,_Size);
          if (iVar3 == 0) {
            plVar4 = plVar6 + 2;
            if (0xf < uVar2) {
              plVar4 = (longlong *)plVar6[2];
            }
            if (*(char *)((longlong)plVar4 + (uVar7 - 1)) == '.') goto LAB_1803909e3;
          }
        }
      }
LAB_180390a54:
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != plVar1);
  }
  return param_2;
}



/* ===== 180390a90 FUN_180390a90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180390a90(longlong param_1)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 uVar7;
  int iVar8;
  LSTATUS LVar9;
  short *psVar10;
  undefined8 uVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *******pppppppuVar17;
  undefined8 uVar18;
  short *psVar19;
  short *psVar20;
  undefined8 *******pppppppuVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  uint uVar24;
  uint *******pppppppuVar25;
  ulonglong uVar26;
  longlong lVar27;
  wchar_t **ppwVar28;
  undefined1 auStackY_838 [32];
  undefined1 local_7f8 [8];
  uint local_7f0;
  longlong local_7e8;
  undefined1 local_7e0 [8];
  uint *******local_7d8;
  longlong local_7d0;
  undefined1 local_7c8;
  undefined4 local_7c7;
  undefined2 local_7c3;
  undefined1 local_7c1;
  uint *******local_7c0;
  longlong local_7b8;
  undefined4 local_7a8 [2];
  undefined **local_7a0;
  wchar_t *local_798;
  undefined8 local_790;
  wchar_t *local_788 [2];
  byte local_778 [160];
  undefined **local_6d8 [12];
  undefined8 *******local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  ulonglong uStack_660;
  undefined8 *******local_658;
  undefined8 uStack_650;
  ulonglong local_648;
  ulonglong local_640;
  uint *******local_638 [2];
  longlong local_628;
  ulonglong local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  uint *******local_5b8;
  longlong local_5b0;
  undefined1 local_5a8;
  undefined4 local_5a7;
  undefined2 local_5a3;
  undefined1 local_5a1;
  uint *******local_5a0;
  longlong local_598;
  uint *******local_588;
  undefined8 uStack_580;
  longlong local_578;
  ulonglong local_570;
  uint *******local_568;
  undefined8 uStack_560;
  longlong local_558;
  ulonglong local_550;
  undefined8 *******local_548;
  undefined8 uStack_540;
  ulonglong local_538;
  ulonglong uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  uint *******local_508;
  longlong lStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  uint *******local_4e8 [2];
  longlong local_4d8;
  ulonglong local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [32];
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8 [32];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [528];
  ulonglong local_78;
  
  uVar4 = _UNK_1808ad3e8;
  uVar3 = _DAT_1808ad3e0;
  local_78 = DAT_180919500 ^ (ulonglong)auStackY_838;
  uVar24 = 0;
  local_7f0 = 0;
  local_798 = L"client.dll";
  local_790 = 0;
  ppwVar28 = &local_798;
  local_7e8 = param_1;
  do {
    FUN_18038f860(&local_7d8,*ppwVar28);
    if ((char)local_7b8 != '\0') {
      FUN_180024980(local_638,&local_7d8);
      if (local_628 != 0) {
LAB_180390b40:
        FUN_180024980(local_3c8,local_638);
        local_588 = (uint *******)0x0;
        uStack_580 = 0;
        local_578 = 0;
        local_570 = 0;
        FUN_180024d40(&local_588,L"csgo",4);
        pppppppuVar25 = (uint *******)&local_588;
        if (7 < local_570) {
          pppppppuVar25 = local_588;
        }
        if ((local_578 == 0) ||
           ((((3 < local_578 * 2 && ((*(uint *)pppppppuVar25 & 0xffffffdf) - 0x3a0041 < 0x1a)) ||
             (*(short *)pppppppuVar25 == 0x5c)) || (*(short *)pppppppuVar25 == 0x2f)))) {
          FUN_180024980(&local_3a8,local_638);
          local_7f0 = uVar24 | 0x2c0;
          FUN_180013f60(&local_3a8,&local_588);
        }
        else {
          local_5b8 = (uint *******)local_638;
          if (7 < local_620) {
            local_5b8 = local_638[0];
          }
          if (((local_628 == 2) && ((*(uint *)local_5b8 & 0xffffffdf) - 0x3a0041 < 0x1a)) ||
             ((local_628 == 0 ||
              ((sVar2 = *(short *)((longlong)local_5b8 + local_628 * 2 + -2), sVar2 == 0x5c ||
               (sVar2 == 0x2f)))))) {
            local_5a8 = 0;
            lVar27 = 0;
          }
          else {
            local_5a8 = 1;
            lVar27 = 1;
          }
          uStack_3a0 = 0;
          local_398 = uVar3;
          uStack_390 = uVar4;
          local_3a8 = 0;
          local_7f0 = uVar24 | 0x1c0;
          local_5b0 = local_628;
          local_5a7 = local_7c7;
          local_5a3 = local_7c3;
          local_5a1 = local_7c1;
          local_598 = local_578;
          local_5a0 = pppppppuVar25;
          FUN_1800223a0(&local_3a8,local_628 + lVar27 + local_578,&local_5b8);
        }
        FUN_1800289e0(&local_588);
        puVar23 = local_3c8;
        uVar6 = uVar24 | 0xc0;
        do {
          uVar24 = uVar6;
          local_7a8[0] = 0;
          local_7a0 = &PTR_vftable_18091a158;
          local_5d8 = 0;
          uStack_5d0 = 0;
          local_5c8 = 0;
          local_5c0 = 0;
          FUN_180024d40(&local_5d8,L"pak01_dir.vpk",0xd);
          uVar11 = FUN_180014f50(local_4a8,puVar23,&local_5d8);
          piVar12 = (int *)FUN_180016ab0(local_7f8,uVar11,local_7a8);
          iVar8 = *piVar12;
          FUN_1800289e0(local_4a8);
          FUN_1800289e0(&local_5d8);
          if (iVar8 == 2) {
            FUN_180024980(param_1,puVar23);
            *(undefined1 *)(param_1 + 0x20) = 1;
            FUN_1804eced0(local_3c8,0x20,2,thunk_FUN_1800289e0);
            FUN_1800289e0(local_638);
            if ((char)local_7b8 == '\0') {
              return param_1;
            }
            FUN_1800289e0(&local_7d8);
            return param_1;
          }
          puVar23 = puVar23 + 0x20;
          uVar6 = uVar24 | 6;
        } while (puVar23 != local_388);
        pppppppuVar25 = (uint *******)local_638;
        if (7 < local_620) {
          pppppppuVar25 = local_638[0];
        }
        psVar19 = (short *)((longlong)pppppppuVar25 + local_628 * 2);
        for (psVar10 = (short *)FUN_180013e50(pppppppuVar25); psVar10 != psVar19;
            psVar10 = psVar10 + 1) {
          if ((*psVar10 != 0x5c) && (psVar20 = psVar19, *psVar10 != 0x2f)) goto LAB_180390e00;
        }
        goto LAB_180390e4c;
      }
LAB_180390f55:
      FUN_1800289e0(local_638);
      if ((char)local_7b8 != '\0') {
        FUN_1800289e0(&local_7d8);
      }
    }
    ppwVar28 = ppwVar28 + 1;
  } while (ppwVar28 != local_788);
  FUN_180540170(local_288,0,0x208);
  local_7e8 = CONCAT44(local_7e8._4_4_,0x208);
  LVar9 = RegGetValueW((HKEY)0xffffffff80000001,L"Software\\Valve\\Steam",L"SteamPath",2,
                       (LPDWORD)0x0,local_288,(LPDWORD)&local_7e8);
  if (LVar9 == 0) {
    local_408 = 0;
    uStack_400 = 0;
    local_3f8 = 0;
    local_3f0 = 0;
    FUN_180024d40(&local_408,L"csgo",4);
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    local_3d0 = 0;
    FUN_180024d40(&local_3e8,L"game",4);
    local_468 = 0;
    uStack_460 = 0;
    local_458 = 0;
    local_450 = 0;
    FUN_180024d40(&local_468,L"Counter-Strike Global Offensive",0x1f);
    local_488 = 0;
    uStack_480 = 0;
    local_478 = 0;
    local_470 = 0;
    FUN_180024d40(&local_488,L"common",6);
    uVar24 = uVar24 | 0xff000000;
    local_508 = (uint *******)0x0;
    lStack_500 = 0;
    local_4f8 = 0;
    local_4f0 = 0;
    FUN_180024d40(&local_508,L"steamapps",9);
    uVar11 = FUN_180512c70(local_288);
    local_5d8 = 0;
    uStack_5d0 = 0;
    local_5c8 = 0;
    local_5c0 = 0;
    FUN_180024d40(&local_5d8,local_288,uVar11);
    uVar11 = FUN_180014f50(local_328,&local_5d8,&local_508);
    uVar11 = FUN_180014f50(local_348,uVar11,&local_488);
    uVar11 = FUN_180014f50(local_368,uVar11,&local_468);
    uVar11 = FUN_180014f50(local_388,uVar11,&local_3e8);
    FUN_180014f50(local_4a8,uVar11,&local_408);
    FUN_1800289e0(local_388);
    FUN_1800289e0(local_368);
    FUN_1800289e0(local_348);
    FUN_1800289e0(local_328);
    FUN_1800289e0(&local_5d8);
    FUN_1800289e0(&local_508);
    FUN_1800289e0(&local_488);
    FUN_1800289e0(&local_468);
    FUN_1800289e0(&local_3e8);
    FUN_1800289e0(&local_408);
    local_7a8[0] = 0;
    local_7a0 = &PTR_vftable_18091a158;
    local_678 = (undefined8 *******)0x0;
    uStack_670 = 0;
    local_668 = 0;
    uStack_660 = 0;
    FUN_180024d40(&local_678,L"pak01_dir.vpk",0xd);
    uVar11 = FUN_180014f50(&local_528,local_4a8,&local_678);
    piVar12 = (int *)FUN_180016ab0(local_7f8,uVar11,local_7a8);
    iVar8 = *piVar12;
    FUN_1800289e0(&local_528);
    FUN_1800289e0(&local_678);
    if (iVar8 == 2) {
      FUN_180024980(param_1,local_4a8);
      *(undefined1 *)(param_1 + 0x20) = 1;
      FUN_1800289e0(local_4a8);
      return param_1;
    }
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0;
    local_5e0 = 0;
    FUN_180024d40(&local_5f8,L"libraryfolders.vdf",0x12);
    local_618 = 0;
    uStack_610 = 0;
    local_608 = 0;
    local_600 = 0;
    FUN_180024d40(&local_618,L"steamapps",9);
    uVar11 = FUN_180512c70(local_288);
    local_678 = (undefined8 *******)0x0;
    uStack_670 = 0;
    local_668 = 0;
    uStack_660 = 0;
    FUN_180024d40(&local_678,local_288,uVar11);
    uVar11 = FUN_180014f50(&local_4c8,&local_678,&local_618);
    uVar11 = FUN_180014f50(&local_528,uVar11,&local_5f8);
    FUN_180276480(local_788,uVar11,1);
    FUN_1800289e0(&local_528);
    FUN_1800289e0(&local_4c8);
    FUN_1800289e0(&local_678);
    FUN_1800289e0(&local_618);
    FUN_1800289e0(&local_5f8);
    uVar5 = _UNK_1808ad418;
    uVar11 = _DAT_1808ad410;
    uStack_650 = 0;
    local_648 = 0;
    local_640 = 0xf;
    local_658 = (undefined8 *******)0x0;
    bVar1 = local_778[*(int *)(local_788[0] + 2)];
    while ((bVar1 & 6) == 0) {
      uVar7 = FUN_18006d510((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2),10);
      plVar13 = (longlong *)FUN_180075fd0(local_788,&local_658,uVar7);
      if ((*(byte *)((longlong)(plVar13 + 2) + (longlong)*(int *)(*plVar13 + 4)) & 6) != 0) break;
      pppppppuVar21 = &local_658;
      if (0xf < local_640) {
        pppppppuVar21 = local_658;
      }
      if (((5 < local_648) &&
          (lVar27 = local_648 + (longlong)pppppppuVar21,
          lVar14 = thunk_FUN_1804e92d0(pppppppuVar21,lVar27,"\"path\"",6), lVar14 != lVar27)) &&
         (lVar14 - (longlong)pppppppuVar21 != -1)) {
        uVar15 = (lVar14 - (longlong)pppppppuVar21) + 6;
        pppppppuVar21 = &local_658;
        if (0xf < local_640) {
          pppppppuVar21 = local_658;
        }
        if (((uVar15 < local_648) &&
            (lVar27 = local_648 + (longlong)pppppppuVar21,
            lVar14 = thunk_FUN_1804e6c50((longlong)pppppppuVar21 + uVar15,lVar27,0x22),
            lVar14 != lVar27)) && (lVar14 = lVar14 - (longlong)pppppppuVar21, lVar14 != -1)) {
          uVar15 = lVar14 + 1;
          pppppppuVar21 = &local_658;
          if (0xf < local_640) {
            pppppppuVar21 = local_658;
          }
          if (((uVar15 < local_648) &&
              (lVar27 = local_648 + (longlong)pppppppuVar21,
              lVar16 = thunk_FUN_1804e6c50(uVar15 + (longlong)pppppppuVar21,lVar27,0x22),
              lVar16 != lVar27)) && (lVar16 - (longlong)pppppppuVar21 != -1)) {
            local_548 = (undefined8 *******)0x0;
            uStack_540 = 0;
            local_538 = 0;
            uStack_530 = 0;
            if (local_648 < uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_18002a1a0();
            }
            uVar26 = ((lVar16 - (longlong)pppppppuVar21) - lVar14) - 1;
            if (local_648 - uVar15 < uVar26) {
              uVar26 = local_648 - uVar15;
            }
            pppppppuVar21 = &local_658;
            if (0xf < local_640) {
              pppppppuVar21 = local_658;
            }
            FUN_1800133a0(&local_548,(longlong)pppppppuVar21 + uVar15,uVar26);
            uVar26 = uStack_530;
            uVar15 = local_538;
            pppppppuVar21 = local_548;
            uStack_520 = 0;
            local_518 = uVar11;
            uStack_510 = uVar5;
            local_528 = 0;
            uVar22 = 0;
            if (local_538 != 0) {
              do {
                pppppppuVar17 = &local_548;
                if (0xf < uVar26) {
                  pppppppuVar17 = pppppppuVar21;
                }
                if ((*(char *)((longlong)pppppppuVar17 + uVar22) == '\\') && (uVar22 + 1 < uVar15))
                {
                  pppppppuVar17 = &local_548;
                  if (0xf < uVar26) {
                    pppppppuVar17 = pppppppuVar21;
                  }
                  if (*(char *)((longlong)pppppppuVar17 + uVar22 + 1) == '\\') {
                    uVar22 = uVar22 + 1;
                  }
                }
                pppppppuVar17 = &local_548;
                if (0xf < uVar26) {
                  pppppppuVar17 = pppppppuVar21;
                }
                FUN_1800690a0(&local_528,*(undefined1 *)((longlong)pppppppuVar17 + uVar22));
                uVar22 = uVar22 + 1;
              } while (uVar22 < uVar15);
            }
            local_4c8 = 0;
            uStack_4c0 = 0;
            local_4b8 = 0;
            local_4b0 = 0;
            FUN_180024d40(&local_4c8,L"csgo",4);
            local_428 = 0;
            uStack_420 = 0;
            local_418 = 0;
            local_410 = 0;
            FUN_180024d40(&local_428,L"game",4);
            local_448 = 0;
            uStack_440 = 0;
            local_438 = 0;
            local_430 = 0;
            FUN_180024d40(&local_448,L"Counter-Strike Global Offensive",0x1f);
            local_618 = 0;
            uStack_610 = 0;
            local_608 = 0;
            local_600 = 0;
            FUN_180024d40(&local_618,L"common",6);
            local_5f8 = 0;
            uStack_5f0 = 0;
            local_5e8 = 0;
            local_5e0 = 0;
            FUN_180024d40(&local_5f8,L"steamapps",9);
            uVar18 = FUN_180066c10(&local_5b8,&local_528);
            uVar18 = FUN_180014f50(local_2a8,uVar18,&local_5f8);
            uVar18 = FUN_180014f50(local_2c8,uVar18,&local_618);
            uVar18 = FUN_180014f50(local_2e8,uVar18,&local_448);
            uVar18 = FUN_180014f50(local_308,uVar18,&local_428);
            FUN_180014f50(local_4e8,uVar18,&local_4c8);
            FUN_1800289e0(local_308);
            FUN_1800289e0(local_2e8);
            FUN_1800289e0(local_2c8);
            FUN_1800289e0(local_2a8);
            FUN_1800289e0(&local_5b8);
            FUN_1800289e0(&local_5f8);
            FUN_1800289e0(&local_618);
            FUN_1800289e0(&local_448);
            FUN_1800289e0(&local_428);
            FUN_1800289e0(&local_4c8);
            local_568 = (uint *******)0x0;
            uStack_560 = 0;
            local_558 = 0;
            local_550 = 0;
            FUN_180024d40(&local_568,L"pak01_dir.vpk",0xd);
            pppppppuVar25 = (uint *******)&local_568;
            if (7 < local_550) {
              pppppppuVar25 = local_568;
            }
            if (((local_558 == 0) ||
                (((3 < local_558 * 2 && ((*(uint *)pppppppuVar25 & 0xffffffdf) - 0x3a0041 < 0x1a))
                 || (*(short *)pppppppuVar25 == 0x5c)))) || (*(short *)pppppppuVar25 == 0x2f)) {
              FUN_180024980(&local_678,local_4e8);
              local_7f0 = uVar24 | 0xbffc00;
              FUN_180013f60(&local_678,&local_568);
            }
            else {
              local_7d8 = (uint *******)local_4e8;
              if (7 < local_4d0) {
                local_7d8 = local_4e8[0];
              }
              if (((local_4d8 == 2) && ((*(uint *)local_7d8 & 0xffffffdf) - 0x3a0041 < 0x1a)) ||
                 ((local_4d8 == 0 ||
                  ((sVar2 = *(short *)((longlong)local_7d8 + local_4d8 * 2 + -2), sVar2 == 0x5c ||
                   (sVar2 == 0x2f)))))) {
                local_7c8 = 0;
                lVar27 = 0;
              }
              else {
                local_7c8 = 1;
                lVar27 = 1;
              }
              uStack_670 = 0;
              local_668 = uVar3;
              uStack_660 = uVar4;
              local_678 = (undefined8 *******)0x0;
              local_7f0 = uVar24 | 0x7ffc00;
              local_7d0 = local_4d8;
              local_7c7 = local_5a7;
              local_7c3 = local_5a3;
              local_7c1 = local_5a1;
              local_7b8 = local_558;
              local_7c0 = pppppppuVar25;
              FUN_1800223a0(&local_678,lVar27 + local_558 + local_4d8,&local_7d8);
            }
            uVar24 = uVar24 | 0x3ffc00;
            piVar12 = (int *)FUN_180016ab0(local_7e0,&local_678,local_7a8);
            iVar8 = *piVar12;
            FUN_1800289e0(&local_678);
            FUN_1800289e0(&local_568);
            if (iVar8 == 2) {
              FUN_180024980(param_1,local_4e8);
              *(undefined1 *)(param_1 + 0x20) = 1;
              FUN_1800289e0(local_4e8);
              FUN_18000f890(&local_528);
              FUN_18000f890(&local_548);
              FUN_18000f890(&local_658);
              *(undefined ***)((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2)) =
                   std::basic_ifstream<char,std::char_traits<char>_>::vftable;
              *(int *)((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2) + -4) =
                   *(int *)(local_788[0] + 2) + -0xb0;
              FUN_1800681f0(local_778);
              *(undefined ***)((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2)) =
                   std::basic_istream<char,std::char_traits<char>_>::vftable;
              *(int *)((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2) + -4) =
                   *(int *)(local_788[0] + 2) + -0x18;
              local_6d8[0] = std::ios_base::vftable;
              FUN_1804eaa10(local_6d8);
              FUN_1800289e0(local_4a8);
              return param_1;
            }
            FUN_1800289e0(local_4e8);
            FUN_18000f890(&local_528);
            FUN_18000f890(&local_548);
          }
        }
      }
      bVar1 = local_778[*(int *)(local_788[0] + 2)];
    }
    FUN_18000f890(&local_658);
    *(undefined ***)((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2)) =
         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2) + -4) =
         *(int *)(local_788[0] + 2) + -0xb0;
    FUN_1800681f0(local_778);
    *(undefined ***)((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2)) =
         std::basic_istream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)local_788 + (longlong)*(int *)(local_788[0] + 2) + -4) =
         *(int *)(local_788[0] + 2) + -0x18;
    local_6d8[0] = std::ios_base::vftable;
    FUN_1804eaa10(local_6d8);
    FUN_1800289e0(local_4a8);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_1;
  while (psVar20 = psVar19, psVar10 != psVar19) {
LAB_180390e00:
    psVar19 = psVar20 + -1;
    if ((*psVar19 == 0x5c) || (*psVar19 == 0x2f)) goto joined_r0x000180390e21;
  }
  goto LAB_180390e4c;
  while( true ) {
    psVar20 = psVar19 + -1;
    if ((*psVar20 != 0x5c) && (*psVar20 != 0x2f)) break;
joined_r0x000180390e21:
    psVar19 = psVar20;
    if (psVar10 == psVar19) break;
  }
LAB_180390e4c:
  local_678 = (undefined8 *******)0x0;
  uStack_670 = 0;
  local_668 = 0;
  uStack_660 = 0;
  FUN_180024d40(&local_678,pppppppuVar25,(longlong)psVar19 - (longlong)pppppppuVar25 >> 1);
  uVar24 = uVar24 | 0x3e;
  local_508 = (uint *******)local_638;
  if (7 < local_620) {
    local_508 = local_638[0];
  }
  lStack_500 = local_628;
  iVar8 = FUN_180014140(&local_678,&local_508);
  if (iVar8 == 0) {
    FUN_1800289e0(&local_678);
    FUN_1804eced0(local_3c8,0x20,2,thunk_FUN_1800289e0);
    goto LAB_180390f55;
  }
  pppppppuVar21 = &local_678;
  if (7 < uStack_660) {
    pppppppuVar21 = local_678;
  }
  FUN_1800277d0(local_638,pppppppuVar21,local_668);
  FUN_1800289e0(&local_678);
  FUN_1804eced0(local_3c8,0x20,2,thunk_FUN_1800289e0);
  if (local_628 == 0) goto LAB_180390f55;
  goto LAB_180390b40;
}



/* ===== 180391c50 FUN_180391c50 ===== */

void FUN_180391c50(undefined8 param_1)

{
  FUN_1804eced0(param_1,0x20,2,thunk_FUN_1800289e0);
  return;
}



/* ===== 180391c80 FUN_180391c80 ===== */

longlong * FUN_180391c80(float *param_1,longlong *param_2,undefined8 *param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  size_t _Size;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  float *pfVar14;
  undefined8 *local_58;
  longlong local_50;
  
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar12 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (param_3[2] != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)(uVar7 + (longlong)puVar6)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(param_1,&local_58,param_3,uVar12);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  pfVar14 = param_1 + 2;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x58);
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar1 = param_3[1];
  puVar6[2] = *param_3;
  puVar6[3] = uVar1;
  uVar1 = param_3[3];
  puVar6[4] = param_3[2];
  puVar6[5] = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined2 *)(puVar6 + 6) = *param_4;
  *(undefined4 *)((longlong)puVar6 + 0x34) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_4 + 4);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_4 + 0xc);
  *(undefined8 *)(param_4 + 0xc) = 0;
  uVar3 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_4 + 8) = 0;
  puVar6[8] = uVar3;
  puVar6[9] = uVar2;
  puVar6[10] = uVar1;
  fVar13 = *param_1;
  uVar7 = *(ulonglong *)(param_1 + 0xe);
  if (fVar13 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar7) {
    fVar13 = (float)FUN_18053ef70((float)(*(longlong *)(param_1 + 4) + 1) / fVar13,uVar1,0,fVar13,
                                  pfVar14,puVar6);
    lVar8 = 0;
    if ((DAT_1808acd00 <= fVar13) && (fVar13 = fVar13 - DAT_1808acd00, fVar13 < DAT_1808acd00)) {
      lVar8 = -0x8000000000000000;
    }
    uVar9 = 8;
    if (8 < (ulonglong)((longlong)fVar13 + lVar8)) {
      uVar9 = (longlong)fVar13 + lVar8;
    }
    uVar10 = uVar7;
    if ((uVar7 < uVar9) && ((0x1ff < uVar7 || (uVar10 = uVar7 * 8, uVar7 * 8 < uVar9)))) {
      uVar10 = uVar9;
    }
    FUN_180392680(param_1,uVar10);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_58 = *(undefined8 **)(param_1 + 2);
    if (puVar11 != local_58) {
      puVar4 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      _Size = puVar6[4];
      while( true ) {
        _Buf2 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        if ((ulonglong)puVar6[5] < 0x10) {
          _Buf1 = puVar6 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar6[2];
        }
        if ((_Size == puVar11[4]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,_Buf2,_Size), iVar5 == 0)))) {
          local_58 = (undefined8 *)*puVar11;
          goto LAB_180391f08;
        }
        if (puVar11 == puVar4) break;
        puVar11 = (undefined8 *)puVar11[1];
      }
      local_58 = puVar11;
    }
  }
LAB_180391f08:
  puVar11 = (undefined8 *)local_58[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = local_58;
  puVar6[1] = puVar11;
  *puVar11 = puVar6;
  local_58[1] = puVar6;
  lVar8 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar4 = *(undefined8 **)(lVar8 + uVar12 * 0x10);
  if (puVar4 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar8 + uVar12 * 0x10) = puVar6;
  }
  else {
    if (puVar4 == local_58) {
      *(undefined8 **)(lVar8 + uVar12 * 0x10) = puVar6;
      goto LAB_180391f53;
    }
    if (*(undefined8 **)(lVar8 + 8 + uVar12 * 0x10) != puVar11) goto LAB_180391f53;
  }
  *(undefined8 **)(lVar8 + 8 + uVar12 * 0x10) = puVar6;
LAB_180391f53:
  *param_2 = (longlong)puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180391f80 FUN_180391f80 ===== */

void FUN_180391f80(ulonglong *param_1)

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
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 1) * 2;
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
  *(undefined8 *)(puVar5 + -8) = 0x180391fcf;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180391ff0 FUN_180391ff0 ===== */

void FUN_180391ff0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180392280(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_180081c30(puVar1 + 8);
      FUN_18000f890(puVar1 + 2);
      thunk_FUN_1803d64e0(puVar1,0x58);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_res8 = *(undefined8 *)(param_1 + 8);
    FUN_180026a10(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
  }
  return;
}



/* ===== 1803920c0 FUN_1803920c0 ===== */

void FUN_1803920c0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar1 = param_1[1];
  lVar5 = *param_1;
  uVar9 = lVar1 - lVar5 >> 1;
  if (param_2 < uVar9) {
    param_1[1] = lVar5 + param_2 * 2;
    return;
  }
  if (param_2 <= uVar9) {
    return;
  }
  uVar4 = param_1[2] - lVar5 >> 1;
  if (param_2 <= uVar4) {
    lVar5 = (param_2 - uVar9) * 2;
    FUN_180540170(lVar1,0,lVar5);
    param_1[1] = lVar5 + lVar1;
    return;
  }
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar6 = 0x7fffffffffffffff;
  if (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) {
    uVar6 = (uVar4 >> 1) + uVar4;
    if (uVar6 < param_2) {
      uVar6 = param_2;
    }
    else if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar6 * 2);
  FUN_180540170(lVar3 + (lVar1 - lVar5 & 0xfffffffffffffffeU),0,(param_2 - uVar9) * 2);
  FUN_180540530(lVar3,*param_1,param_1[1] - *param_1);
  puVar7 = auStack_38;
  puVar8 = auStack_38;
  lVar1 = *param_1;
  if (lVar1 == 0) goto LAB_1803921da;
  lVar5 = lVar1;
  if ((ulonglong)((param_1[2] - lVar1 >> 1) * 2) < 0x1000) {
LAB_1803921cf:
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(lVar1 + -8);
    if (0x1f < (lVar1 - lVar5) - 8U) {
      lVar5 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar7 = auStack_30;
      goto LAB_1803921cf;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x1803921da;
  thunk_FUN_1803d64e0(lVar5);
LAB_1803921da:
  *param_1 = lVar3;
  param_1[1] = lVar3 + param_2 * 2;
  param_1[2] = uVar6 * 2 + lVar3;
  return;
}



/* ===== 180392230 FUN_180392230 ===== */

void FUN_180392230(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_180081c30(lVar1 + 0x40);
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x58);
  }
  return;
}



/* ===== 180392280 FUN_180392280 ===== */

longlong * FUN_180392280(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if (param_2 == param_3) {
    return param_3;
  }
  plVar13 = param_2 + 2;
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar4 = (undefined8 *)param_2[1];
  if (0xf < (ulonglong)param_2[5]) {
    plVar13 = (longlong *)*plVar13;
  }
  uVar9 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)(uVar9 + (longlong)plVar13);
      uVar9 = uVar9 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar9 < (ulonglong)param_2[4]);
  }
  lVar6 = (*(ulonglong *)(param_1 + 0x30) & uVar10) * 0x10;
  plVar13 = *(longlong **)(lVar6 + lVar2);
  plVar7 = (longlong *)(lVar6 + 8 + lVar2);
  plVar5 = (longlong *)*plVar7;
  plVar11 = param_2;
  do {
    plVar12 = (longlong *)*plVar11;
    FUN_180081c30(plVar11 + 8);
    FUN_18000f890(plVar11 + 2);
    thunk_FUN_1803d64e0(plVar11,0x58);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar11 == plVar5) {
      if (plVar13 == param_2) {
        *(longlong *)(lVar6 + lVar2) = (longlong)puVar3;
        puVar8 = puVar3;
      }
      else {
        puVar8 = puVar4;
      }
      *plVar7 = (longlong)puVar8;
      while (plVar12 != param_3) {
        plVar13 = plVar12 + 2;
        if (0xf < (ulonglong)plVar12[5]) {
          plVar13 = (longlong *)*plVar13;
        }
        uVar9 = 0;
        uVar10 = 0xcbf29ce484222325;
        if (plVar12[4] != 0) {
          do {
            pbVar1 = (byte *)(uVar9 + (longlong)plVar13);
            uVar9 = uVar9 + 1;
            uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
          } while (uVar9 < (ulonglong)plVar12[4]);
        }
        uVar10 = *(ulonglong *)(param_1 + 0x30) & uVar10;
        plVar5 = *(longlong **)(lVar2 + 8 + uVar10 * 0x10);
        plVar13 = (longlong *)(lVar2 + uVar10 * 0x10);
        plVar11 = plVar12;
        while( true ) {
          plVar12 = (longlong *)*plVar11;
          FUN_180081c30(plVar11 + 8);
          FUN_18000f890(plVar11 + 2);
          thunk_FUN_1803d64e0(plVar11,0x58);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar11 == plVar5) break;
          plVar11 = plVar12;
          if (plVar12 == param_3) {
            *plVar13 = (longlong)plVar12;
            goto LAB_18039247d;
          }
        }
        *plVar13 = (longlong)puVar3;
        *(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) = puVar3;
      }
      goto LAB_18039247d;
    }
    plVar11 = plVar12;
  } while (plVar12 != param_3);
  if (plVar13 == param_2) {
    *(longlong *)(lVar6 + lVar2) = (longlong)plVar12;
  }
LAB_18039247d:
  *puVar4 = plVar12;
  plVar12[1] = (longlong)puVar4;
  return param_3;
}



/* ===== 1803924e0 FUN_1803924e0 ===== */

uint FUN_1803924e0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  longlong *local_68;
  char local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  uVar8 = 0;
  param_1[1] = 0;
  FUN_180077490(&local_68,param_1);
  if (local_60 == '\0') {
    uVar4 = 0xffffffff;
    goto LAB_1803925cc;
  }
  plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if ((*(byte **)plVar3[7] == (byte *)0x0) || (*(int *)plVar3[10] < 1)) {
    uVar4 = (**(code **)(*plVar3 + 0x30))();
  }
  else {
    uVar4 = (uint)**(byte **)plVar3[7];
  }
  if (uVar4 == 0xffffffff) {
    uVar8 = 3;
    goto LAB_1803925cc;
  }
  plVar3 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (*(longlong *)plVar3[7] == 0) {
LAB_1803925a3:
    (**(code **)(*plVar3 + 0x38))();
  }
  else {
    iVar1 = *(int *)plVar3[10];
    if (iVar1 < 1) goto LAB_1803925a3;
    *(int *)plVar3[10] = iVar1 + -1;
    *(longlong *)plVar3[7] = *(longlong *)plVar3[7] + 1;
  }
  param_1[1] = 1;
LAB_1803925cc:
  lVar6 = (longlong)*(int *)(*param_1 + 4);
  uVar2 = *(uint *)(lVar6 + 0x10 + (longlong)param_1);
  uVar7 = 4;
  if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
    uVar7 = 0;
  }
  *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar7 | uVar8 | uVar2 & 0x17;
  uVar8 = (uVar7 | uVar8 | uVar2) & *(uint *)(lVar6 + 0x14 + (longlong)param_1);
  if ((uVar8 & 0x17) == 0) {
    plVar3 = *(longlong **)((longlong)*(int *)(*local_68 + 4) + 0x48 + (longlong)local_68);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    return uVar4;
  }
  if ((uVar8 & 4) == 0) {
    pcVar9 = "ios_base::failbit set";
    if ((uVar8 & 2) == 0) {
      pcVar9 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar9 = "ios_base::badbit set";
  }
  uVar5 = FUN_18004d7f0(local_58,1);
  FUN_18004e280(local_48,pcVar9,uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_48,&DAT_180915ec0);
}



/* ===== 180392680 FUN_180392680 ===== */

void FUN_180392680(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *_Buf1;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  bVar11 = (char)lVar14 + 1;
  lVar14 = 1L << (bVar11 & 0x3f);
  FUN_1800ea4a0(param_1 + 0x18,2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar14;
  *(longlong *)(param_1 + 0x30) = lVar14 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x000180392702:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        return;
      }
      uVar16 = plVar6[5];
      plVar10 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      uVar8 = plVar6[4];
      if (0xf < uVar16) {
        plVar10 = (longlong *)plVar6[2];
      }
      uVar13 = 0xcbf29ce484222325;
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar10 + uVar9);
          uVar9 = uVar9 + 1;
          uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
        } while (uVar9 < uVar8);
      }
      lVar14 = *(longlong *)(param_1 + 0x18);
      uVar13 = *(ulonglong *)(param_1 + 0x30) & uVar13;
      plVar10 = *(longlong **)(lVar14 + uVar13 * 0x10);
      if (plVar10 != plVar2) break;
      *(longlong **)(lVar14 + uVar13 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar15 = *(longlong **)(lVar14 + 8 + uVar13 * 0x10);
    plVar12 = plVar15 + 2;
    if (0xf < (ulonglong)plVar15[5]) {
      plVar12 = (longlong *)*plVar12;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar16) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (uVar8 != plVar15[4]) {
LAB_18039280f:
      if (plVar10 != plVar15) {
        do {
          plVar15 = (longlong *)plVar15[1];
          plVar10 = plVar15 + 2;
          if (0xf < (ulonglong)plVar15[5]) {
            plVar10 = (longlong *)*plVar10;
          }
          if (uVar16 < 0x10) {
            plVar12 = plVar6 + 2;
          }
          else {
            plVar12 = (longlong *)plVar6[2];
          }
          if (uVar8 == plVar15[4]) {
            if ((uVar8 == 0) || (iVar7 = memcmp(plVar12,plVar10,uVar8), iVar7 == 0)) {
              lVar14 = *plVar15;
              plVar10 = (longlong *)plVar6[1];
              *plVar10 = (longlong)plVar3;
              plVar12 = (longlong *)plVar3[1];
              *plVar12 = lVar14;
              puVar4 = *(undefined8 **)(lVar14 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar14 + 8) = plVar12;
              plVar3[1] = (longlong)plVar10;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x000180392702;
            }
            uVar16 = plVar6[5];
          }
        } while (*(longlong **)(lVar14 + uVar13 * 0x10) != plVar15);
      }
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar14 + uVar13 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x000180392702;
    }
    if ((uVar8 != 0) && (iVar7 = memcmp(_Buf1,plVar12,uVar8), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar14 + uVar13 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_18039280f;
    }
    plVar15 = (longlong *)*plVar15;
    if (plVar15 != plVar6) {
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar14 + 8 + uVar13 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}



/* ===== 180392920 FUN_180392920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180392920(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_858 [32];
  ulonglong local_838 [258];
  
  local_838[0x100] = DAT_180919500 ^ (ulonglong)auStack_858;
  bVar3 = *param_1;
  while ((bVar3 != 0 && (lVar2 = FUN_1804ef420(&DAT_18089ece0,(int)(char)*param_1), lVar2 != 0))) {
    param_1 = param_1 + 1;
    bVar3 = *param_1;
  }
  bVar8 = *param_1 != 0x2f;
  if (!bVar8) {
    param_1 = param_1 + 1;
  }
  bVar1 = !bVar8;
  if ((0x3f < *param_1) || ((0x8000000200000001U >> ((longlong)(char)*param_1 & 0x3fU) & 1) == 0)) {
    iVar7 = 0;
    pbVar4 = param_1;
    do {
      lVar2 = FUN_1804ef420(&DAT_18089ece0,(int)(char)*pbVar4);
      if (lVar2 != 0) {
        if (*pbVar4 != 0) {
          *pbVar4 = 0;
          pbVar4 = pbVar4 + 1;
        }
        break;
      }
      pbVar4 = pbVar4 + 1;
    } while (*pbVar4 != 0);
    if (!bVar1) {
      do {
        if ((*pbVar4 == 0) || (0xfc < iVar7)) break;
        do {
          lVar2 = FUN_1804ef420(&DAT_18089ece0,(int)(char)*pbVar4);
          pbVar5 = pbVar4;
          if (lVar2 == 0) break;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar4;
        } while (*pbVar4 != 0);
        if (*pbVar5 == 0) break;
        pbVar6 = pbVar5;
        if (*pbVar5 == 0x2f) {
          bVar1 = true;
          break;
        }
        do {
          lVar2 = FUN_1804ef420(&DAT_18089ece0,(int)(char)*pbVar6);
          if ((lVar2 != 0) || (*pbVar6 == 0x3d)) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar6 != 0);
        if (*pbVar6 == 0) break;
        *pbVar6 = 0;
        pbVar6 = pbVar6 + 1;
        if (*pbVar6 == 0) break;
        do {
          bVar3 = *pbVar6;
          if ((bVar3 == 0x22) || (bVar3 == 0x27)) break;
          pbVar4 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar3 = 0;
        } while (*pbVar4 != 0);
        if (bVar3 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar4 = pbVar6;
        if (*pbVar6 == 0) {
LAB_180392afe:
          local_838[iVar7] = (ulonglong)pbVar5;
          local_838[(longlong)iVar7 + 1] = (ulonglong)pbVar6;
          iVar7 = iVar7 + 2;
        }
        else {
          do {
            if (*pbVar4 == bVar3) {
              if (*pbVar4 != 0) {
                *pbVar4 = 0;
                pbVar4 = pbVar4 + 1;
              }
              goto LAB_180392afe;
            }
            pbVar4 = pbVar4 + 1;
          } while (*pbVar4 != 0);
          local_838[iVar7] = (ulonglong)pbVar5;
          local_838[(longlong)iVar7 + 1] = (ulonglong)pbVar6;
          iVar7 = iVar7 + 2;
        }
      } while( true );
    }
    local_838[iVar7] = 0;
    local_838[(longlong)iVar7 + 1] = 0;
    if (bVar8) {
      FUN_1803990a0(param_4,param_1,local_838);
    }
    if (bVar1) {
      FUN_180399650(param_4,param_1);
    }
  }
  return;
}



/* ===== 180392ba0 FUN_180392ba0 ===== */

void FUN_180392ba0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[4];
  fVar2 = *param_2;
  fVar3 = param_1[1];
  fVar4 = param_2[2];
  fVar5 = param_1[3];
  fVar6 = param_2[4];
  param_1[1] = fVar3 * param_2[3] + *param_1 * param_2[1];
  param_1[3] = fVar5 * param_2[3] + param_1[2] * param_2[1];
  fVar7 = param_2[3];
  fVar8 = param_2[1];
  fVar9 = param_2[5];
  *param_1 = fVar3 * fVar4 + *param_1 * fVar2;
  param_1[2] = fVar5 * fVar4 + param_1[2] * fVar2;
  param_1[4] = param_1[5] * fVar4 + fVar1 * fVar2 + fVar6;
  param_1[5] = param_1[5] * fVar7 + fVar1 * fVar8 + fVar9;
  return;
}



/* ===== 180392ca0 FUN_180392ca0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180392ca0(float *param_1,float *param_2)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = DAT_1808adec0;
  dVar2 = (double)*param_2 * (double)param_2[3] - (double)param_2[2] * (double)param_2[1];
  if ((_DAT_1808acd70 < dVar2) && (dVar2 < DAT_1808ac180)) {
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[5] = 0.0;
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    return;
  }
  dVar2 = DAT_1808ac500 / dVar2;
  *param_1 = (float)((double)param_2[3] * dVar2);
  param_1[2] = (float)((double)(float)((uint)param_2[2] ^ uVar1) * dVar2);
  param_1[4] = (float)(((double)param_2[5] * (double)param_2[2] -
                       (double)param_2[4] * (double)param_2[3]) * dVar2);
  param_1[1] = (float)((double)(float)((uint)param_2[1] ^ uVar1) * dVar2);
  param_1[3] = (float)((double)*param_2 * dVar2);
  param_1[5] = (float)(((double)param_2[4] * (double)param_2[1] -
                       (double)param_2[5] * (double)*param_2) * dVar2);
  return;
}



/* ===== 180392de0 FUN_180392de0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180392de0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  double local_b8 [22];
  
  fVar23 = param_2[7];
  fVar22 = *param_2;
  fVar26 = param_2[1];
  fVar1 = param_2[6];
  fVar7 = fVar26;
  if (fVar23 <= fVar26) {
    fVar7 = fVar23;
  }
  fVar2 = fVar22;
  if (fVar1 <= fVar22) {
    fVar2 = fVar1;
  }
  if (fVar26 <= fVar23) {
    fVar26 = fVar23;
  }
  fVar23 = param_2[2];
  fVar15 = fVar22;
  if (fVar22 <= fVar1) {
    fVar15 = fVar1;
  }
  param_1[1] = fVar7;
  *param_1 = fVar2;
  param_1[2] = fVar15;
  param_1[3] = fVar26;
  dVar9 = DAT_1808ac570;
  dVar8 = DAT_1808ac500;
  dVar21 = DAT_1808ac4f8;
  dVar20 = DAT_1808ac078;
  if ((((fVar2 <= fVar23) && (fVar23 <= fVar15)) && (fVar7 <= param_2[3])) &&
     (((param_2[3] <= fVar26 && (fVar2 <= param_2[4])) &&
      ((param_2[4] <= fVar15 && ((fVar7 <= param_2[5] && (param_2[5] <= fVar26)))))))) {
    return;
  }
  uVar13 = 0;
  dVar5 = (double)fVar22;
  dVar3 = (double)fVar23;
  dVar4 = (double)param_2[4];
  dVar6 = (double)fVar1;
  dVar19 = ((dVar3 * DAT_1808ac5f0 - dVar5 * DAT_1808ac570) - dVar4 * DAT_1808ac5f0) +
           dVar6 * DAT_1808ac570;
  dVar17 = (dVar5 * DAT_1808ac5c8 - dVar3 * DAT_1808ac608) + dVar4 * DAT_1808ac5c8;
  uVar12 = (uint)((ulonglong)dVar17 >> 0x20);
  dVar16 = dVar3 * DAT_1808ac570 - dVar5 * DAT_1808ac570;
  if (DAT_1808ac078 <=
      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_1808adea4,
                       SUB84(dVar19,0) & _DAT_1808adea0)) {
    dVar16 = dVar17 * dVar17 - dVar16 * DAT_1808ac598 * dVar19;
    if (DAT_1808ac078 < dVar16) {
      if (dVar16 < 0.0) {
        dVar16 = (double)FUN_18051ff20(dVar16);
      }
      else {
        dVar16 = SQRT(dVar16);
      }
      uVar14 = 0;
      dVar18 = (dVar16 - dVar17) / (dVar19 + dVar19);
      if ((dVar20 < dVar18) && (dVar18 < dVar21)) {
        local_b8[0] = dVar18;
        uVar14 = 1;
      }
      dVar17 = ((double)CONCAT44(uVar12 ^ DAT_1808adeb0._4_4_,SUB84(dVar17,0) ^ (uint)DAT_1808adeb0)
               - dVar16) / (dVar19 + dVar19);
      uVar13 = uVar14;
      if ((dVar20 < dVar17) && (dVar17 < dVar21)) {
        uVar13 = (ulonglong)((int)uVar14 + 1);
        local_b8[uVar14] = dVar17;
      }
    }
LAB_18039304a:
    iVar11 = 0;
    uVar12 = (uint)uVar13;
    if (3 < uVar12) {
      do {
        dVar17 = local_b8[iVar11];
        dVar16 = dVar8 - dVar17;
        dVar19 = local_b8[(longlong)iVar11 + 1];
        dVar18 = dVar8 - dVar19;
        fVar22 = (float)(dVar16 * dVar9 * dVar16 * dVar17 * dVar3 + dVar16 * dVar16 * dVar16 * dVar5
                         + dVar16 * dVar9 * dVar17 * dVar17 * dVar4 +
                        dVar17 * dVar17 * dVar17 * dVar6);
        fVar23 = *param_1;
        if (fVar22 <= *param_1) {
          fVar23 = fVar22;
        }
        fVar26 = param_1[2];
        if (param_1[2] <= fVar22) {
          fVar26 = fVar22;
        }
        dVar17 = local_b8[(longlong)iVar11 + 2];
        dVar16 = dVar8 - dVar17;
        fVar22 = (float)(dVar18 * dVar9 * dVar18 * dVar19 * dVar3 + dVar18 * dVar18 * dVar18 * dVar5
                         + dVar18 * dVar9 * dVar19 * dVar19 * dVar4 +
                        dVar19 * dVar19 * dVar19 * dVar6);
        if (fVar22 <= fVar23) {
          fVar23 = fVar22;
        }
        if (fVar26 <= fVar22) {
          fVar26 = fVar22;
        }
        dVar19 = local_b8[(longlong)iVar11 + 3];
        fVar22 = (float)(dVar16 * dVar9 * dVar16 * dVar17 * dVar3 + dVar16 * dVar16 * dVar16 * dVar5
                         + dVar16 * dVar9 * dVar17 * dVar17 * dVar4 +
                        dVar17 * dVar17 * dVar17 * dVar6);
        iVar11 = iVar11 + 4;
        dVar17 = dVar8 - dVar19;
        if (fVar22 <= fVar23) {
          fVar23 = fVar22;
        }
        if (fVar26 <= fVar22) {
          fVar26 = fVar22;
        }
        fVar22 = (float)(dVar17 * dVar9 * dVar17 * dVar19 * dVar3 + dVar17 * dVar17 * dVar17 * dVar5
                         + dVar17 * dVar9 * dVar19 * dVar19 * dVar4 +
                        dVar19 * dVar19 * dVar19 * dVar6);
        if (fVar22 <= fVar23) {
          fVar23 = fVar22;
        }
        if (fVar26 <= fVar22) {
          fVar26 = fVar22;
        }
        *param_1 = fVar23;
        param_1[2] = fVar26;
      } while (iVar11 < (int)(uVar12 - 3));
    }
    uVar24 = (uint)DAT_1808adeb0;
    uVar25 = DAT_1808adeb0._4_4_;
    if (iVar11 < (int)uVar12) goto LAB_180393249;
  }
  else {
    if ((((double)CONCAT44(uVar12 & _UNK_1808adea4,SUB84(dVar17,0) & _DAT_1808adea0) <=
          DAT_1808ac078) ||
        (dVar17 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ DAT_1808adeb0._4_4_,
                                   SUB84(dVar16,0) ^ (uint)DAT_1808adeb0) / dVar17,
        dVar17 <= DAT_1808ac078)) || (DAT_1808ac4f8 <= dVar17)) goto LAB_18039304a;
    local_b8[0] = dVar17;
    uVar13 = 1;
    iVar11 = 0;
    uVar24 = (uint)DAT_1808adeb0;
    uVar25 = DAT_1808adeb0._4_4_;
LAB_180393249:
    do {
      lVar10 = (longlong)iVar11;
      iVar11 = iVar11 + 1;
      dVar17 = local_b8[lVar10];
      dVar19 = dVar8 - dVar17;
      fVar22 = (float)(dVar19 * dVar9 * dVar19 * dVar17 * dVar3 + dVar19 * dVar19 * dVar19 * dVar5 +
                       dVar19 * dVar9 * dVar17 * dVar17 * dVar4 + dVar17 * dVar17 * dVar17 * dVar6);
      fVar23 = *param_1;
      if (fVar22 <= *param_1) {
        fVar23 = fVar22;
      }
      *param_1 = fVar23;
      fVar23 = param_1[2];
      if (param_1[2] <= fVar22) {
        fVar23 = fVar22;
      }
      param_1[2] = fVar23;
    } while (iVar11 < (int)uVar13);
  }
  uVar13 = 0;
  dVar3 = (double)param_2[3];
  dVar5 = (double)param_2[1];
  dVar4 = (double)param_2[5];
  dVar6 = (double)param_2[7];
  dVar19 = ((dVar3 * DAT_1808ac5f0 - dVar5 * dVar9) - dVar4 * DAT_1808ac5f0) + dVar6 * dVar9;
  dVar17 = (dVar5 * DAT_1808ac5c8 - dVar3 * DAT_1808ac608) + dVar4 * DAT_1808ac5c8;
  uVar12 = (uint)((ulonglong)dVar17 >> 0x20);
  dVar16 = dVar3 * dVar9 - dVar5 * dVar9;
  if (dVar20 <= (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_1808adea4,
                                 SUB84(dVar19,0) & _DAT_1808adea0)) {
    dVar16 = dVar17 * dVar17 - dVar16 * DAT_1808ac598 * dVar19;
    if (dVar20 < dVar16) {
      if (dVar16 < 0.0) {
        dVar16 = (double)FUN_18051ff20(dVar16);
      }
      else {
        dVar16 = SQRT(dVar16);
      }
      uVar14 = 0;
      local_b8[0] = (dVar16 - dVar17) / (dVar19 + dVar19);
      if ((dVar20 < local_b8[0]) && (local_b8[0] < dVar21)) {
        uVar14 = 1;
      }
      dVar17 = ((double)CONCAT44(uVar12 ^ DAT_1808adeb0._4_4_,SUB84(dVar17,0) ^ (uint)DAT_1808adeb0)
               - dVar16) / (dVar19 + dVar19);
      uVar13 = uVar14;
      if ((dVar20 < dVar17) && (dVar17 < dVar21)) {
        uVar13 = (ulonglong)((int)uVar14 + 1);
        local_b8[uVar14] = dVar17;
      }
    }
  }
  else if (((dVar20 < (double)CONCAT44(uVar12 & _UNK_1808adea4,SUB84(dVar17,0) & _DAT_1808adea0)) &&
           (local_b8[0] = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar25,
                                           SUB84(dVar16,0) ^ uVar24) / dVar17, dVar20 < local_b8[0])
           ) && (local_b8[0] < dVar21)) {
    uVar13 = 1;
    iVar11 = 0;
    goto LAB_180393650;
  }
  iVar11 = 0;
  uVar12 = (uint)uVar13;
  if (3 < uVar12) {
    do {
      dVar20 = local_b8[iVar11];
      dVar17 = dVar8 - dVar20;
      dVar21 = local_b8[(longlong)iVar11 + 1];
      dVar19 = dVar8 - dVar21;
      fVar22 = (float)(dVar17 * dVar9 * dVar17 * dVar20 * dVar3 + dVar17 * dVar17 * dVar17 * dVar5 +
                       dVar17 * dVar9 * dVar20 * dVar20 * dVar4 + dVar20 * dVar20 * dVar20 * dVar6);
      fVar23 = param_1[1];
      if (fVar22 <= param_1[1]) {
        fVar23 = fVar22;
      }
      fVar26 = param_1[3];
      if (param_1[3] <= fVar22) {
        fVar26 = fVar22;
      }
      dVar20 = local_b8[(longlong)iVar11 + 2];
      dVar17 = dVar8 - dVar20;
      fVar22 = (float)(dVar19 * dVar9 * dVar19 * dVar21 * dVar3 + dVar19 * dVar19 * dVar19 * dVar5 +
                       dVar19 * dVar9 * dVar21 * dVar21 * dVar4 + dVar21 * dVar21 * dVar21 * dVar6);
      if (fVar22 <= fVar23) {
        fVar23 = fVar22;
      }
      if (fVar26 <= fVar22) {
        fVar26 = fVar22;
      }
      dVar21 = local_b8[(longlong)iVar11 + 3];
      fVar22 = (float)(dVar17 * dVar9 * dVar17 * dVar20 * dVar3 + dVar17 * dVar17 * dVar17 * dVar5 +
                       dVar17 * dVar9 * dVar20 * dVar20 * dVar4 + dVar20 * dVar20 * dVar20 * dVar6);
      iVar11 = iVar11 + 4;
      dVar20 = dVar8 - dVar21;
      if (fVar22 <= fVar23) {
        fVar23 = fVar22;
      }
      if (fVar26 <= fVar22) {
        fVar26 = fVar22;
      }
      fVar22 = (float)(dVar20 * dVar9 * dVar20 * dVar21 * dVar3 + dVar20 * dVar20 * dVar20 * dVar5 +
                       dVar20 * dVar9 * dVar21 * dVar21 * dVar4 + dVar21 * dVar21 * dVar21 * dVar6);
      if (fVar22 <= fVar23) {
        fVar23 = fVar22;
      }
      if (fVar26 <= fVar22) {
        fVar26 = fVar22;
      }
      param_1[1] = fVar23;
      param_1[3] = fVar26;
    } while (iVar11 < (int)(uVar12 - 3));
  }
  if ((int)uVar12 <= iVar11) {
    return;
  }
LAB_180393650:
  do {
    lVar10 = (longlong)iVar11;
    iVar11 = iVar11 + 1;
    dVar20 = local_b8[lVar10];
    dVar21 = dVar8 - dVar20;
    fVar22 = (float)(dVar21 * dVar9 * dVar21 * dVar20 * dVar3 + dVar21 * dVar21 * dVar21 * dVar5 +
                     dVar21 * dVar9 * dVar20 * dVar20 * dVar4 + dVar20 * dVar20 * dVar20 * dVar6);
    fVar23 = param_1[1];
    if (fVar22 <= param_1[1]) {
      fVar23 = fVar22;
    }
    param_1[1] = fVar23;
    fVar23 = param_1[3];
    if (param_1[3] <= fVar22) {
      fVar23 = fVar22;
    }
    param_1[3] = fVar23;
  } while (iVar11 < (int)uVar13);
  return;
}



/* ===== 180393740 FUN_180393740 ===== */

void FUN_180393740(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x9c14);
  if (iVar3 < *(int *)(param_1 + 0x9c10) + 1) {
    if (iVar3 == 0) {
      iVar1 = 8;
      iVar3 = 0x10;
    }
    else {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 * 4;
    }
    *(int *)(param_1 + 0x9c14) = iVar1;
    lVar2 = _realloc_base(*(undefined8 *)(param_1 + 0x9c08),(longlong)iVar3 << 2);
    *(longlong *)(param_1 + 0x9c08) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x9c08) + (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4)
       = param_2;
  *(undefined4 *)
   (*(longlong *)(param_1 + 0x9c08) + 4 + (longlong)(*(int *)(param_1 + 0x9c10) * 2) * 4) = param_3;
  *(int *)(param_1 + 0x9c10) = *(int *)(param_1 + 0x9c10) + 1;
  return;
}



/* ===== 1803937f0 FUN_1803937f0 ===== */

void FUN_1803937f0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (0 < *(int *)(param_1 + 0x9c10)) {
    lVar3 = (longlong)(*(int *)(param_1 + 0x9c10) * 2);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x9c08) + -8 + lVar3 * 4);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x9c08) + -4 + lVar3 * 4);
    fVar4 = (param_2 - fVar1) / DAT_1808ac658;
    fVar5 = (param_3 - fVar2) / DAT_1808ac658;
    FUN_180393740(DAT_1808ac658,fVar4 + fVar1,fVar5 + fVar2);
    FUN_180393740(param_1,param_2 - fVar4,param_3 - fVar5);
    FUN_180393740(param_1,param_2,param_3);
  }
  return;
}



/* ===== 1803938c0 FUN_1803938c0 ===== */

void FUN_1803938c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x9c00);
  if (iVar1 < 0x7f) {
    *(int *)(param_1 + 0x9c00) = iVar1 + 1;
    lVar6 = 2;
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x138 + param_1);
    puVar4 = (undefined8 *)(((longlong)iVar1 + 1) * 0x138 + param_1);
    do {
      puVar7 = puVar4;
      puVar5 = puVar3;
      uVar2 = puVar5[1];
      *puVar7 = *puVar5;
      puVar7[1] = uVar2;
      uVar2 = puVar5[3];
      puVar7[2] = puVar5[2];
      puVar7[3] = uVar2;
      uVar2 = puVar5[5];
      puVar7[4] = puVar5[4];
      puVar7[5] = uVar2;
      uVar2 = puVar5[7];
      puVar7[6] = puVar5[6];
      puVar7[7] = uVar2;
      uVar2 = puVar5[9];
      puVar7[8] = puVar5[8];
      puVar7[9] = uVar2;
      uVar2 = puVar5[0xb];
      puVar7[10] = puVar5[10];
      puVar7[0xb] = uVar2;
      uVar2 = puVar5[0xd];
      puVar7[0xc] = puVar5[0xc];
      puVar7[0xd] = uVar2;
      uVar2 = puVar5[0xf];
      puVar7[0xe] = puVar5[0xe];
      puVar7[0xf] = uVar2;
      lVar6 = lVar6 + -1;
      puVar3 = puVar5 + 0x10;
      puVar4 = puVar7 + 0x10;
    } while (lVar6 != 0);
    uVar2 = puVar5[0x11];
    puVar7[0x10] = puVar5[0x10];
    puVar7[0x11] = uVar2;
    uVar2 = puVar5[0x13];
    puVar7[0x12] = puVar5[0x12];
    puVar7[0x13] = uVar2;
    uVar2 = puVar5[0x15];
    puVar7[0x14] = puVar5[0x14];
    puVar7[0x15] = uVar2;
    puVar7[0x16] = puVar5[0x16];
  }
  return;
}



/* ===== 180393980 FUN_180393980 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_180393980(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  uint uVar1;
  longlong lVar2;
  float local_res10;
  
  uVar1 = (uint)((ulonglong)param_2 >> 0x20);
  local_res10 = (float)param_2;
  if (uVar1 < 10) {
    lVar2 = (longlong)*(int *)(param_1 + 0x9c00) * 0x138;
    switch(uVar1) {
    case 2:
      return (local_res10 / DAT_1808acad0) * *(float *)(param_1 + 0x9c5c);
    case 3:
      return (local_res10 / DAT_1808ac7ac) * *(float *)(param_1 + 0x9c5c);
    case 4:
      return (local_res10 / _DAT_1808ac998) * *(float *)(param_1 + 0x9c5c);
    case 5:
      return (local_res10 / _DAT_1808ac5f8) * *(float *)(param_1 + 0x9c5c);
    case 6:
      return local_res10 * *(float *)(param_1 + 0x9c5c);
    case 7:
      return (local_res10 / DAT_1808acb08) * param_4 + param_3;
    case 8:
      return local_res10 * *(float *)(lVar2 + 0x124 + param_1);
    case 9:
      return local_res10 * *(float *)(lVar2 + 0x124 + param_1) * DAT_1808ac200;
    }
  }
  return local_res10;
}



/* ===== 180393aa0 FUN_180393aa0 ===== */

float * FUN_180393aa0(longlong param_1,char *param_2,float *param_3,undefined8 param_4,char *param_5
                     )

{
  char *_Str2;
  char cVar1;
  float fVar2;
  char *pcVar3;
  char *_Str1;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  char *_Str1_00;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    pcVar3 = *(char **)(param_1 + 0x9c30);
    for (_Str1 = pcVar3; _Str1 != (char *)0x0; _Str1 = *(char **)(_Str1 + 0xd8)) {
      iVar6 = strcmp(_Str1,param_2);
      if (iVar6 == 0) {
        iVar6 = 0;
        pcVar9 = _Str1;
        do {
          lVar4 = *(longlong *)(pcVar9 + 0xd0);
          if (lVar4 != 0) {
            fVar2 = *(float *)(pcVar9 + 200);
            pfVar8 = (float *)_malloc_base((longlong)(int)fVar2 * 8 + 0x28);
            if (pfVar8 == (float *)0x0) {
              return (float *)0x0;
            }
            if (_Str1[0xad] == '\x01') {
              fVar12 = param_3[1];
              fVar15 = param_3[2] - *param_3;
              fVar16 = param_3[3] - fVar12;
            }
            else {
              fVar12 = *(float *)(param_1 + 0x9c44);
              param_3 = (float *)(param_1 + 40000);
              fVar15 = *(float *)(param_1 + 0x9c48);
              fVar16 = *(float *)(param_1 + 0x9c4c);
            }
            cVar1 = _Str1[0x80];
            fVar14 = *param_3;
            if (cVar1 == '\x02') {
              fVar10 = (float)FUN_180393980(param_1,*(undefined8 *)(_Str1 + 0x84),fVar14,fVar15);
              fVar11 = (float)FUN_180393980(fVar10,*(undefined8 *)(_Str1 + 0x8c),fVar12,fVar16);
              fVar15 = (float)FUN_180393980(fVar11,*(undefined8 *)(_Str1 + 0x94),fVar14,fVar15);
              fVar14 = fVar15 - fVar10;
              fVar12 = (float)FUN_180393980(fVar15,*(undefined8 *)(_Str1 + 0x9c),fVar12,fVar16);
              pfVar8[2] = fVar14;
              pfVar8[4] = fVar10;
              pfVar8[1] = (float)((uint)fVar14 ^ DAT_1808adec0);
              pfVar8[5] = fVar11;
              *pfVar8 = fVar12 - fVar11;
              pfVar8[3] = fVar12 - fVar11;
            }
            else {
              fVar10 = fVar16 * fVar16 + fVar15 * fVar15;
              if (fVar10 < 0.0) {
                fVar10 = (float)FUN_18051af10(fVar10);
              }
              else {
                fVar10 = SQRT(fVar10);
              }
              if (DAT_1808ac540 < 0.0) {
                fVar11 = (float)FUN_18051af10(DAT_1808ac540);
              }
              else {
                fVar11 = SQRT(DAT_1808ac540);
              }
              fVar10 = (float)FUN_180393980(param_1,*(undefined8 *)(_Str1 + 0x94),0,fVar10 / fVar11)
              ;
              uVar5 = *(undefined8 *)(_Str1 + 0x84);
              *pfVar8 = fVar10;
              pfVar8[3] = fVar10;
              pfVar8[1] = 0.0;
              pfVar8[2] = 0.0;
              fVar11 = (float)FUN_180393980(fVar10,uVar5,fVar14,fVar15);
              uVar5 = *(undefined8 *)(_Str1 + 0x8c);
              pfVar8[4] = fVar11;
              fVar11 = (float)FUN_180393980(fVar11,uVar5,fVar12,fVar16);
              uVar5 = *(undefined8 *)(_Str1 + 0x9c);
              pfVar8[5] = fVar11;
              fVar15 = (float)FUN_180393980(fVar11,uVar5,fVar14,fVar15);
              uVar5 = *(undefined8 *)(_Str1 + 0xa4);
              pfVar8[7] = fVar15 / fVar10;
              fVar12 = (float)FUN_180393980(fVar15 / fVar10,uVar5,fVar12,fVar16);
              pfVar8[8] = fVar12 / fVar10;
            }
            uVar13 = FUN_180392ba0(pfVar8,_Str1 + 0xb0);
            FUN_180392ba0(uVar13,param_4);
            *(char *)(pfVar8 + 6) = _Str1[0xac];
            FUN_180540530(pfVar8 + 10,lVar4,(longlong)(int)fVar2 * 8);
            *param_5 = cVar1;
            pfVar8[9] = fVar2;
            return pfVar8;
          }
          _Str2 = pcVar9 + 0x40;
          if ((_Str2 != (char *)0x0) && (*_Str2 != '\0')) {
            _Str1_00 = pcVar3;
            do {
              iVar7 = strcmp(_Str1_00,_Str2);
              if (iVar7 == 0) goto LAB_180393b4e;
              _Str1_00 = *(char **)(_Str1_00 + 0xd8);
            } while (_Str1_00 != (char *)0x0);
          }
          _Str1_00 = (char *)0x0;
LAB_180393b4e:
          if (_Str1_00 == pcVar9) {
            return (float *)0x0;
          }
          iVar6 = iVar6 + 1;
          if (0x20 < iVar6) {
            return (float *)0x0;
          }
          pcVar9 = _Str1_00;
          if (_Str1_00 == (char *)0x0) {
            return (float *)0x0;
          }
        } while( true );
      }
    }
  }
  return (float *)0x0;
}



/* ===== 180393df0 FUN_180393df0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180393df0(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_d8 [32];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_d8;
  puVar12 = *(undefined8 **)(param_2 + 0x140);
  if (puVar12 != (undefined8 *)0x0) {
    bVar9 = true;
    fVar1 = param_3[4];
    fVar2 = param_3[2];
    fVar3 = *param_3;
    fVar4 = param_3[5];
    fVar5 = param_3[3];
    fVar6 = param_3[1];
    do {
      pfVar7 = (float *)*puVar12;
      local_a8 = fVar2 * pfVar7[1] + fVar3 * *pfVar7 + fVar1;
      local_a4 = fVar6 * *pfVar7 + fVar5 * pfVar7[1] + fVar4;
      if (0 < *(int *)(puVar12 + 1) + -1) {
        iVar11 = 0;
        do {
          lVar10 = (longlong)(iVar11 * 2);
          iVar8 = iVar11 * 2;
          iVar11 = iVar11 + 3;
          local_a0 = fVar3 * pfVar7[lVar10 + 2] + fVar2 * pfVar7[lVar10 + 3] + fVar1;
          local_9c = fVar6 * pfVar7[lVar10 + 2] + fVar5 * pfVar7[lVar10 + 3] + fVar4;
          local_98 = fVar3 * pfVar7[iVar8 + 4] + fVar2 * pfVar7[lVar10 + 5] + fVar1;
          local_94 = fVar6 * pfVar7[iVar8 + 4] + fVar5 * pfVar7[lVar10 + 5] + fVar4;
          local_90 = fVar3 * pfVar7[iVar11 * 2] + fVar2 * pfVar7[lVar10 + 7] + fVar1;
          local_8c = fVar6 * pfVar7[iVar11 * 2] + fVar5 * pfVar7[lVar10 + 7] + fVar4;
          FUN_180392de0(&local_b8,&local_a8);
          if (bVar9) {
            bVar9 = false;
            *(ulonglong *)param_1 = CONCAT44(fStack_b4,local_b8);
            *(ulonglong *)(param_1 + 2) = CONCAT44(fStack_ac,fStack_b0);
          }
          else {
            fVar13 = *param_1;
            if (local_b8 <= *param_1) {
              fVar13 = local_b8;
            }
            fVar14 = param_1[2];
            if (param_1[2] <= fStack_b0) {
              fVar14 = fStack_b0;
            }
            *param_1 = fVar13;
            fVar13 = param_1[1];
            if (fStack_b4 <= param_1[1]) {
              fVar13 = fStack_b4;
            }
            param_1[2] = fVar14;
            param_1[1] = fVar13;
            fVar13 = param_1[3];
            if (param_1[3] <= fStack_ac) {
              fVar13 = fStack_ac;
            }
            param_1[3] = fVar13;
          }
          local_a8 = local_90;
          local_a4 = local_8c;
        } while (iVar11 < *(int *)(puVar12 + 1) + -1);
      }
      puVar12 = (undefined8 *)puVar12[4];
    } while (puVar12 != (undefined8 *)0x0);
  }
  return;
}



/* ===== 1803940b0 FUN_1803940b0 ===== */

void FUN_1803940b0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (*(longlong *)(param_1 + 0x9c18) != 0) {
    iVar3 = *(int *)(param_1 + 0x9c00);
    puVar8 = (undefined8 *)_malloc_base();
    if (puVar8 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)((longlong)iVar3 * 0x138 + param_1);
      fVar16 = *(float *)((longlong)puVar12 + 0x4c);
      fVar14 = *(float *)((longlong)puVar12 + 0x44);
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      uVar1 = *puVar12;
      uVar4 = puVar12[1];
      *(undefined8 *)((longlong)puVar8 + 0x6c) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x74) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x84) = 0;
      uVar5 = puVar12[2];
      uVar6 = puVar12[3];
      *(undefined1 *)((longlong)puVar8 + 0x8f) = 0;
      *(undefined1 *)((longlong)puVar8 + 0x97) = 0;
      puVar8[0x29] = 0;
      *puVar8 = uVar1;
      puVar8[1] = uVar4;
      uVar1 = puVar12[4];
      uVar4 = puVar12[5];
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      uVar5 = puVar12[6];
      uVar6 = puVar12[7];
      puVar8[4] = uVar1;
      puVar8[5] = uVar4;
      uVar1 = *(undefined8 *)((longlong)puVar12 + 0x6c);
      uVar4 = *(undefined8 *)((longlong)puVar12 + 0x74);
      puVar8[6] = uVar5;
      puVar8[7] = uVar6;
      uVar5 = *(undefined8 *)((longlong)puVar12 + 0x7c);
      uVar6 = *(undefined8 *)((longlong)puVar12 + 0x84);
      puVar8[0x15] = uVar1;
      puVar8[0x16] = uVar4;
      uVar1 = *(undefined8 *)((longlong)puVar12 + 0x8c);
      uVar4 = *(undefined8 *)((longlong)puVar12 + 0x94);
      puVar8[0x17] = uVar5;
      puVar8[0x18] = uVar6;
      uVar5 = *(undefined8 *)((longlong)puVar12 + 0x9c);
      uVar6 = *(undefined8 *)((longlong)puVar12 + 0xa4);
      puVar8[0x19] = uVar1;
      puVar8[0x1a] = uVar4;
      uVar1 = *(undefined8 *)((longlong)puVar12 + 0xac);
      uVar4 = *(undefined8 *)((longlong)puVar12 + 0xb4);
      puVar8[0x1b] = uVar5;
      puVar8[0x1c] = uVar6;
      uVar5 = *(undefined8 *)((longlong)puVar12 + 0xbc);
      uVar6 = *(undefined8 *)((longlong)puVar12 + 0xc4);
      puVar8[0x1d] = uVar1;
      puVar8[0x1e] = uVar4;
      uVar1 = *(undefined8 *)((longlong)puVar12 + 0xcc);
      uVar4 = *(undefined8 *)((longlong)puVar12 + 0xd4);
      puVar8[0x1f] = uVar5;
      puVar8[0x20] = uVar6;
      uVar5 = *(undefined8 *)((longlong)puVar12 + 0xdc);
      uVar6 = *(undefined8 *)((longlong)puVar12 + 0xe4);
      puVar8[0x21] = uVar1;
      puVar8[0x22] = uVar4;
      uVar4 = puVar12[8];
      uVar7 = puVar12[9];
      puVar8[0x23] = uVar5;
      puVar8[0x24] = uVar6;
      uVar1 = puVar12[10];
      puVar8[0x25] = uVar4;
      puVar8[0x26] = uVar7;
      fVar13 = *(float *)(puVar12 + 8);
      puVar8[0x27] = uVar1;
      fVar13 = *(float *)(puVar12 + 9) * *(float *)(puVar12 + 9) + fVar13 * fVar13;
      if (fVar13 < 0.0) {
        fVar13 = (float)FUN_18051af10(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
      fVar16 = fVar16 * fVar16 + fVar14 * fVar14;
      if (fVar16 < 0.0) {
        fVar16 = (float)FUN_18051af10(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      uVar1 = *(undefined8 *)((longlong)puVar12 + 0xec);
      iVar10 = 0;
      iVar3 = *(int *)((longlong)puVar12 + 0x114);
      fVar16 = (fVar16 + fVar13) * DAT_1808ac1f4;
      *(undefined1 *)((longlong)puVar8 + 0x8c) = *(undefined1 *)((longlong)puVar12 + 0x114);
      *(ulonglong *)((longlong)puVar8 + 100) =
           CONCAT44((float)((ulonglong)uVar1 >> 0x20) * fVar16,(float)uVar1 * fVar16);
      if (3 < iVar3) {
        do {
          lVar9 = (longlong)iVar10;
          iVar10 = iVar10 + 4;
          fVar14 = *(float *)((longlong)puVar12 + lVar9 * 4 + 0xf8);
          *(float *)((longlong)puVar8 + lVar9 * 4 + 0x6c) =
               fVar16 * *(float *)((longlong)puVar12 + lVar9 * 4 + 0xf4);
          fVar13 = *(float *)((longlong)puVar12 + lVar9 * 4 + 0xfc);
          *(float *)((longlong)puVar8 + lVar9 * 4 + 0x70) = fVar16 * fVar14;
          fVar14 = *(float *)((longlong)puVar12 + lVar9 * 4 + 0x100);
          *(float *)((longlong)puVar8 + lVar9 * 4 + 0x74) = fVar16 * fVar13;
          *(float *)((longlong)puVar8 + lVar9 * 4 + 0x78) = fVar16 * fVar14;
        } while (iVar10 < iVar3 + -3);
      }
      for (; iVar10 < iVar3; iVar10 = iVar10 + 1) {
        *(float *)((longlong)puVar8 + (longlong)iVar10 * 4 + 0x6c) =
             fVar16 * *(float *)((longlong)puVar12 + (longlong)iVar10 * 4 + 0xf4);
      }
      *(undefined1 *)((longlong)puVar8 + 0x8d) = *(undefined1 *)(puVar12 + 0x23);
      *(undefined1 *)((longlong)puVar8 + 0x8e) = *(undefined1 *)((longlong)puVar12 + 0x119);
      *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)((longlong)puVar12 + 0x11c);
      *(undefined1 *)((longlong)puVar8 + 0x94) = *(undefined1 *)(puVar12 + 0x24);
      *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar12 + 0xc);
      *(undefined1 *)((longlong)puVar8 + 0x95) = *(undefined1 *)((longlong)puVar12 + 0x137);
      lVar9 = *(longlong *)(param_1 + 0x9c18);
      *(undefined8 *)(param_1 + 0x9c18) = 0;
      puVar8[0x28] = lVar9;
      fVar16 = *(float *)(lVar9 + 0x10);
      fVar14 = *(float *)(lVar9 + 0x14);
      fVar13 = *(float *)(lVar9 + 0x18);
      lVar11 = *(longlong *)(lVar9 + 0x20);
      fVar15 = *(float *)(lVar9 + 0x1c);
      *(float *)(puVar8 + 0x13) = fVar16;
      *(float *)((longlong)puVar8 + 0x9c) = fVar14;
      *(float *)(puVar8 + 0x14) = fVar13;
      *(float *)((longlong)puVar8 + 0xa4) = fVar15;
      if (lVar11 != 0) {
        do {
          if (*(float *)(lVar11 + 0x10) <= fVar16) {
            fVar16 = *(float *)(lVar11 + 0x10);
          }
          if (*(float *)(lVar11 + 0x14) <= fVar14) {
            fVar14 = *(float *)(lVar11 + 0x14);
          }
          if (fVar13 <= *(float *)(lVar11 + 0x18)) {
            fVar13 = *(float *)(lVar11 + 0x18);
          }
          if (fVar15 <= *(float *)(lVar11 + 0x1c)) {
            fVar15 = *(float *)(lVar11 + 0x1c);
          }
          lVar11 = *(longlong *)(lVar11 + 0x20);
        } while (lVar11 != 0);
        *(float *)((longlong)puVar8 + 0xa4) = fVar15;
        *(float *)(puVar8 + 0x14) = fVar13;
        *(float *)((longlong)puVar8 + 0x9c) = fVar14;
        *(float *)(puVar8 + 0x13) = fVar16;
      }
      fVar16 = DAT_1808acb94;
      cVar2 = *(char *)((longlong)puVar12 + 0x134);
      if (cVar2 == '\0') {
        *(undefined1 *)(puVar8 + 8) = 0;
      }
      else if (cVar2 == '\x01') {
        fVar14 = *(float *)((longlong)puVar12 + 100);
        *(undefined1 *)(puVar8 + 8) = 1;
        *(uint *)(puVar8 + 9) = (int)(longlong)(fVar14 * fVar16) << 0x18 | *(uint *)(puVar12 + 0xb);
      }
      else if (cVar2 == '\x02') {
        *(undefined1 *)(puVar8 + 8) = 0xff;
      }
      cVar2 = *(char *)((longlong)puVar12 + 0x135);
      if (cVar2 == '\0') {
        *(undefined1 *)(puVar8 + 10) = 0;
      }
      else if (cVar2 == '\x01') {
        fVar14 = *(float *)(puVar12 + 0xd);
        *(undefined1 *)(puVar8 + 10) = 1;
        *(uint *)(puVar8 + 0xb) =
             (int)(longlong)(fVar14 * fVar16) << 0x18 | *(uint *)((longlong)puVar12 + 0x5c);
      }
      else if (cVar2 == '\x02') {
        *(undefined1 *)(puVar8 + 10) = 0xff;
      }
      *(bool *)((longlong)puVar8 + 0x96) = *(char *)((longlong)puVar12 + 0x136) != '\0';
      if (*(longlong *)(*(longlong *)(param_1 + 0x9c20) + 8) == 0) {
        *(undefined8 **)(*(longlong *)(param_1 + 0x9c20) + 8) = puVar8;
      }
      else {
        *(undefined8 **)(*(longlong *)(param_1 + 0x9c38) + 0x148) = puVar8;
      }
      *(undefined8 **)(param_1 + 0x9c38) = puVar8;
    }
  }
  return;
}



/* ===== 1803944a0 FUN_1803944a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803944a0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_58 [32];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_58;
  if (3 < *(int *)(param_1 + 0x9c10)) {
    iVar5 = *(int *)(param_1 + 0x9c00);
    if (param_2 != '\0') {
      FUN_1803937f0(param_1,**(undefined4 **)(param_1 + 0x9c08),
                    (*(undefined4 **)(param_1 + 0x9c08))[1]);
    }
    if ((*(int *)(param_1 + 0x9c10) % 3 == 1) &&
       (plVar1 = (longlong *)_malloc_base(0x28), plVar1 != (longlong *)0x0)) {
      plVar1[1] = 0;
      plVar1[2] = 0;
      plVar1[3] = 0;
      plVar1[4] = 0;
      lVar2 = _malloc_base((longlong)(*(int *)(param_1 + 0x9c10) * 2) << 2);
      *plVar1 = lVar2;
      if (lVar2 == 0) {
        thunk_FUN_1805277b0(plVar1);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x9c10);
        *(char *)((longlong)plVar1 + 0xc) = param_2;
        *(int *)(plVar1 + 1) = iVar6;
        if (0 < iVar6) {
          iVar6 = 0;
          lVar4 = (longlong)iVar5 * 0x138;
          do {
            iVar5 = iVar6 * 2;
            iVar6 = iVar6 + 1;
            lVar3 = (longlong)iVar5;
            fVar7 = *(float *)(*(longlong *)(param_1 + 0x9c08) + 4 + lVar3 * 4);
            fVar8 = *(float *)(*(longlong *)(param_1 + 0x9c08) + lVar3 * 4);
            *(float *)(lVar2 + lVar3 * 4) =
                 fVar7 * *(float *)(param_1 + 0x48 + lVar4) +
                 fVar8 * *(float *)(param_1 + 0x40 + lVar4) + *(float *)(param_1 + 0x50 + lVar4);
            *(float *)(lVar2 + 4 + lVar3 * 4) =
                 fVar8 * *(float *)(param_1 + 0x44 + lVar4) +
                 fVar7 * *(float *)(param_1 + 0x4c + lVar4) + *(float *)(param_1 + 0x54 + lVar4);
          } while (iVar6 < *(int *)(param_1 + 0x9c10));
        }
        iVar6 = 0;
        iVar5 = (int)plVar1[1] + -1;
        if (0 < iVar5) {
          do {
            FUN_180392de0(&local_38,*plVar1 + (longlong)(iVar6 * 2) * 4);
            if (iVar6 == 0) {
              *(float *)(plVar1 + 2) = local_38;
              *(float *)((longlong)plVar1 + 0x14) = fStack_34;
              *(float *)(plVar1 + 3) = fStack_30;
              *(float *)((longlong)plVar1 + 0x1c) = fStack_2c;
            }
            else {
              fVar7 = *(float *)(plVar1 + 2);
              if (local_38 <= *(float *)(plVar1 + 2)) {
                fVar7 = local_38;
              }
              fVar8 = *(float *)((longlong)plVar1 + 0x14);
              if (fStack_34 <= *(float *)((longlong)plVar1 + 0x14)) {
                fVar8 = fStack_34;
              }
              *(float *)(plVar1 + 2) = fVar7;
              fVar7 = *(float *)(plVar1 + 3);
              if (*(float *)(plVar1 + 3) <= fStack_30) {
                fVar7 = fStack_30;
              }
              *(float *)((longlong)plVar1 + 0x14) = fVar8;
              fVar8 = *(float *)((longlong)plVar1 + 0x1c);
              if (*(float *)((longlong)plVar1 + 0x1c) <= fStack_2c) {
                fVar8 = fStack_2c;
              }
              *(float *)(plVar1 + 3) = fVar7;
              *(float *)((longlong)plVar1 + 0x1c) = fVar8;
            }
            iVar6 = iVar6 + 3;
          } while (iVar6 < iVar5);
        }
        plVar1[4] = *(longlong *)(param_1 + 0x9c18);
        *(longlong **)(param_1 + 0x9c18) = plVar1;
      }
    }
  }
  return;
}



/* ===== 1803946b0 FUN_1803946b0 ===== */

double FUN_1803946b0(char *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *local_res8;
  
  uVar8 = (undefined4)DAT_1808ac500;
  uVar9 = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
  bVar2 = false;
  bVar1 = false;
  local_res8 = (char *)0x0;
  if (*param_1 != '+') {
    if (*param_1 != '-') goto LAB_180394700;
    uVar8 = (undefined4)DAT_1808acdb8;
    uVar9 = (undefined4)((ulonglong)DAT_1808acdb8 >> 0x20);
  }
  param_1 = param_1 + 1;
LAB_180394700:
  dVar7 = 0.0;
  if ((byte)(*param_1 - 0x30U) < 10) {
    lVar4 = FUN_1805155b8(param_1,&local_res8,10);
    dVar7 = 0.0;
    if (param_1 != local_res8) {
      bVar1 = true;
      dVar7 = (double)lVar4;
      param_1 = local_res8;
    }
  }
  pcVar5 = param_1;
  if (*param_1 == '.') {
    pcVar5 = param_1 + 1;
    if ((byte)(param_1[1] - 0x30U) < 10) {
      lVar4 = FUN_1805155b8(pcVar5,&local_res8,10);
      if (pcVar5 != local_res8) {
        dVar6 = (double)FUN_18051cb80(DAT_1808ac600,
                                      (double)((longlong)local_res8 - (longlong)pcVar5));
        bVar2 = true;
        dVar7 = dVar7 + (double)lVar4 / dVar6;
        pcVar5 = local_res8;
      }
    }
  }
  if (!(!bVar1 && !bVar2)) {
    if (((*pcVar5 + 0xbbU & 0xdf) == 0) &&
       (iVar3 = FUN_180515504(pcVar5 + 1,&local_res8,10), pcVar5 + 1 != local_res8)) {
      dVar6 = (double)FUN_18051cb80(DAT_1808ac600,(double)iVar3);
      dVar7 = dVar6 * dVar7;
    }
    return dVar7 * (double)CONCAT44(uVar9,uVar8);
  }
  return 0.0;
}



