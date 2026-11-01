/* ===== 1803ee540 FUN_1803ee540 ===== */

bool FUN_1803ee540(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = DAT_180ca0a50;
  lVar3 = DAT_180ca0a50;
  if ((*(char *)(DAT_180ca0a50 + 0xb5f) != '\0') && (cVar2 = FUN_1803eb1c0(0x291), cVar2 != '\0')) {
    cVar2 = FUN_1803dd930(0x20);
    if (cVar2 != '\0') {
      return true;
    }
    lVar3 = DAT_180ca0a50;
  }
  if (*(int *)(lVar1 + 0x20a8) != param_2) {
    return false;
  }
  if ((*(int *)(lVar3 + 0x2064) == *(int *)(lVar3 + 0x1ee8)) && (*(int *)(lVar3 + 0x2064) != 0)) {
    return true;
  }
  return param_2 == *(int *)(*(longlong *)(lVar1 + 0x14f8) + 0x8c);
}



/* ===== 1803ee5e0 FUN_1803ee5e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1803ee5e0(float *param_1,float *param_2,float *param_3,uint *param_4,float *param_5,
                     float *param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_88 [6] [16];
  
  fVar8 = param_2[1];
  fVar1 = param_3[1];
  fVar2 = *param_3;
  fVar3 = param_5[3];
  fVar4 = param_5[1];
  if (fVar4 <= fVar8) {
    fVar9 = fVar3 - fVar1;
    if (fVar8 <= fVar3 - fVar1) {
      fVar9 = fVar8;
    }
  }
  else {
    fVar9 = fVar4;
  }
  fVar8 = *param_5;
  fVar11 = *param_2;
  if (fVar8 <= fVar11) {
    fVar14 = param_5[2] - fVar2;
    if (fVar11 <= fVar14) {
      fVar14 = fVar11;
    }
  }
  else {
    fVar14 = fVar8;
  }
  if (param_7 == 1) {
    uVar5 = *param_4;
    local_88[0] = _DAT_1808ad620;
    iVar7 = -(uint)(uVar5 != 0xffffffff);
    do {
      if (iVar7 == -1) {
        uVar6 = uVar5;
LAB_1803ee6b6:
        if (uVar6 == 3) {
          fVar9 = *param_6;
          fVar11 = param_6[3];
        }
        else if (uVar6 == 1) {
          fVar9 = *param_6;
LAB_1803ee6ff:
          fVar11 = param_6[1] - fVar1;
        }
        else {
          fVar9 = 0.0;
          fVar11 = 0.0;
          if (uVar6 == 0) {
            fVar11 = param_6[3];
            fVar9 = param_6[2] - fVar2;
          }
          else if (uVar6 == 2) {
            fVar9 = param_6[2] - fVar2;
            goto LAB_1803ee6ff;
          }
        }
        if ((((fVar8 <= fVar9) && (fVar4 <= fVar11)) && (fVar2 + fVar9 <= param_5[2])) &&
           (fVar1 + fVar11 <= fVar3)) {
          param_1[1] = fVar11;
          *param_4 = uVar6;
          goto LAB_1803ee77a;
        }
      }
      else {
        uVar6 = *(uint *)(local_88[0] + (longlong)iVar7 * 4);
        if (uVar6 != uVar5) goto LAB_1803ee6b6;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    *param_4 = 0xffffffff;
  }
  else {
    if ((param_7 & 0xfffffffd) == 0) {
      uVar5 = *param_4;
      local_88[0]._4_4_ = _UNK_1808ad3c4;
      local_88[0]._0_4_ = _DAT_1808ad3c0;
      local_88[0]._8_4_ = _UNK_1808ad3c8;
      local_88[0]._12_4_ = _UNK_1808ad3cc;
      iVar7 = -(uint)(uVar5 != 0xffffffff);
      do {
        if (iVar7 == -1) {
          uVar6 = uVar5;
LAB_1803ee7e8:
          fVar11 = fVar3;
          if (uVar6 == 0) {
            fVar10 = *param_6;
LAB_1803ee7f1:
            fVar13 = fVar8;
            if (uVar6 == 2) {
              fVar11 = param_6[1];
              goto LAB_1803ee800;
            }
            if (uVar6 != 3) goto LAB_1803ee800;
            fVar12 = param_6[3];
          }
          else {
            fVar10 = param_5[2];
            if (uVar6 != 1) goto LAB_1803ee7f1;
            fVar13 = param_6[2];
LAB_1803ee800:
            fVar12 = fVar4;
          }
          if (((fVar2 <= fVar10 - fVar13) || (1 < uVar6)) &&
             ((fVar1 <= fVar11 - fVar12 || (1 < uVar6 - 2)))) {
            if (uVar6 == 0) {
              fVar14 = *param_6 - fVar2;
            }
            else if (uVar6 == 1) {
              fVar14 = param_6[2];
            }
            else if (uVar6 == 2) {
              fVar9 = param_6[1] - fVar1;
            }
            else if (uVar6 == 3) {
              fVar9 = param_6[3];
            }
            if (fVar14 <= fVar8) {
              fVar14 = fVar8;
            }
            *param_4 = uVar6;
            if (fVar9 <= fVar4) {
              fVar9 = fVar4;
            }
            *param_1 = fVar14;
            param_1[1] = fVar9;
            return param_1;
          }
        }
        else {
          uVar6 = *(uint *)(local_88[0] + (longlong)iVar7 * 4);
          if (uVar6 != uVar5) goto LAB_1803ee7e8;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    }
    *param_4 = 0xffffffff;
    if (param_7 == 2) {
      *(ulonglong *)param_1 =
           CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) + _UNK_1808adc94,
                    (float)*(undefined8 *)param_2 + _DAT_1808adc90);
      return param_1;
    }
  }
  fVar9 = *param_3 + *param_2;
  if (param_5[2] <= fVar9) {
    fVar9 = param_5[2];
  }
  fVar9 = fVar9 - *param_3;
  fVar8 = param_3[1] + param_2[1];
  if (fVar9 <= *param_5) {
    fVar9 = *param_5;
  }
  if (param_5[3] <= fVar8) {
    fVar8 = param_5[3];
  }
  fVar8 = fVar8 - param_3[1];
  if (fVar8 <= param_5[1]) {
    fVar8 = param_5[1];
  }
  param_1[1] = fVar8;
LAB_1803ee77a:
  *param_1 = fVar9;
  return param_1;
}



/* ===== 1803ee8d0 FUN_1803ee8d0 ===== */

float * FUN_1803ee8d0(float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = DAT_180ca0a50;
  uVar1 = *(undefined8 *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 8);
  uVar2 = *(undefined8 *)(**(longlong **)(DAT_180ca0a50 + 0x2058) + 0x10);
  fVar6 = (float)uVar1;
  fVar7 = (float)((ulonglong)uVar1 >> 0x20);
  fVar8 = (float)uVar2 + fVar6;
  fVar9 = (float)((ulonglong)uVar2 >> 0x20) + fVar7;
  *(undefined8 *)param_1 = uVar1;
  *(ulonglong *)(param_1 + 2) = CONCAT44(fVar9,fVar8);
  fVar5 = *(float *)(lVar3 + 0xdc0);
  fVar4 = *(float *)(lVar3 + 0xdbc);
  if (fVar9 - fVar7 <= fVar5 + fVar5) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)((uint)fVar5 ^ DAT_1808adec0);
  }
  if (fVar8 - fVar6 <= fVar4 + fVar4) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)((uint)fVar4 ^ DAT_1808adec0);
  }
  *param_1 = fVar6 - fVar4;
  param_1[3] = fVar9 + fVar5;
  param_1[2] = fVar4 + fVar8;
  param_1[1] = fVar7 - fVar5;
  return param_1;
}



/* ===== 1803ee9a0 FUN_1803ee9a0 ===== */

float * FUN_1803ee9a0(float *param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float local_res10;
  float local_res14;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  lVar4 = DAT_180ca0a50;
  FUN_1803ee8d0(&local_28);
  uVar2 = *(uint *)(param_2 + 0x14);
  if ((uVar2 >> 0x1c & 1) != 0) {
    lVar3 = *(longlong *)
             (((longlong)*(int *)(lVar4 + 0x14c8) + -2) * 0x88 + *(longlong *)(lVar4 + 0x14d0));
    if (*(char *)(lVar3 + 0x17b) == '\0') {
      local_38 = *(float *)(lVar3 + 0x28) + *(float *)(lVar4 + 0xcf4);
      local_34 = -3.4028235e+38;
      local_2c = 3.4028235e+38;
      local_30 = ((*(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30)) - *(float *)(lVar4 + 0xcf4))
                 - *(float *)(lVar3 + 0xc0);
    }
    else {
      local_34 = *(float *)(lVar3 + 0x26c);
      local_2c = *(float *)(lVar3 + 0x274);
      local_38 = -3.4028235e+38;
      local_30 = 3.4028235e+38;
    }
LAB_1803eea67:
    FUN_1803ee5e0(param_1,param_2 + 0x28,param_2 + 0x30,param_2 + 0xe4,&local_28,&local_38,0);
    return param_1;
  }
  if ((uVar2 >> 0x1a & 1) != 0) {
    local_38 = *(float *)(param_2 + 0x28);
    local_34 = *(float *)(param_2 + 0x2c);
    local_30 = local_38;
    local_2c = local_34;
    goto LAB_1803eea67;
  }
  if ((uVar2 >> 0x19 & 1) == 0) {
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x28);
    return param_1;
  }
  fVar1 = *(float *)(lVar4 + 0xdc4);
  FUN_1803f06a0(&local_res10,0x2000000);
  if ((((*(int *)(lVar4 + 0x128) == 1) &&
       ((((*(char *)(lVar4 + 0x2060) == '\0' || (*(char *)(lVar4 + 0x2061) == '\0')) ||
         (*(longlong *)(lVar4 + 0x2068) == 0)) &&
        ((fVar6 = (fVar1 * 0.0 + local_res10) - *(float *)(param_2 + 0x30) * DAT_1808ac1f4,
         local_28 <= fVar6 &&
         (fVar5 = (fVar1 * DAT_1808ace38 + local_res14) - *(float *)(param_2 + 0x34),
         local_24 <= fVar5)))))) && (fVar6 + *(float *)(param_2 + 0x30) <= local_20)) &&
     (fVar5 + *(float *)(param_2 + 0x34) <= local_1c)) {
    *param_1 = fVar6;
    param_1[1] = fVar5;
    return param_1;
  }
  if ((*(char *)(lVar4 + 0x2060) != '\0') && (*(char *)(lVar4 + 0x2061) != '\0')) {
    local_30 = DAT_1808ac918;
    local_2c = DAT_1808ac838;
    if (*(char *)(lVar4 + 0x72) == '\0') goto LAB_1803eec53;
  }
  local_30 = fVar1 * DAT_1808ac980;
  local_2c = fVar1 * DAT_1808ac980;
LAB_1803eec53:
  local_2c = local_res14 + local_2c;
  local_30 = local_res10 + local_30;
  local_38 = local_res10 - DAT_1808ac918;
  local_34 = local_res14 - DAT_1808ac838;
  local_res10 = fVar1 * DAT_1808ac918 + local_res10;
  local_res14 = fVar1 * DAT_1808ac864 + local_res14;
  FUN_1803ee5e0(param_1,&local_res10,param_2 + 0x30,param_2 + 0xe4,&local_28,&local_38,2);
  return param_1;
}



/* ===== 1803eeca0 FUN_1803eeca0 ===== */

ulonglong FUN_1803eeca0(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar2 = *(ulonglong *)(DAT_180ca0a50 + 0x2068);
  if (uVar2 != 0) {
    uVar3 = 0;
    uVar1 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
    if (*(ulonglong *)(DAT_180ca0a50 + 0x14f8) != 0) {
      do {
        uVar3 = *(ulonglong *)(*(longlong *)(uVar1 + 0x3c0) + 0x3c8);
        bVar4 = uVar1 != uVar3;
        uVar1 = uVar3;
      } while (bVar4);
    }
    uVar1 = uVar2;
    do {
      in_RAX = *(ulonglong *)(*(longlong *)(uVar1 + 0x3c0) + 0x3c8);
      bVar4 = uVar1 != in_RAX;
      uVar1 = in_RAX;
    } while (bVar4);
    if (in_RAX == uVar3) {
LAB_1803eed19:
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
    do {
      if (uVar2 == uVar3) goto LAB_1803eed19;
    } while ((uVar2 != in_RAX) && (uVar2 = *(ulonglong *)(uVar2 + 0x3b0), uVar2 != 0));
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1803eed20 FUN_1803eed20 ===== */

void FUN_1803eed20(longlong param_1,char param_2,uint param_3)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  
  lVar3 = DAT_180ca0a50;
  if (((param_3 >> 0x18 & 1) == 0) || ((param_3 & 0x14000000) == 0x4000000)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  if ((param_2 == '\0') && (cVar6 == *(char *)(param_1 + 0xd6))) {
    *(char *)(param_1 + 0xd6) = cVar6;
    return;
  }
  if (cVar6 == '\0') {
    iVar4 = *(int *)(DAT_180ca0a50 + 0x14ac);
    piVar1 = (int *)(DAT_180ca0a50 + 0x14a8);
    if (*piVar1 == iVar4) {
      iVar7 = *piVar1 + 1;
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar7 < iVar4) {
        iVar7 = iVar4;
      }
      FUN_18000ba20(piVar1,iVar7);
    }
    *(longlong *)(*(longlong *)(lVar3 + 0x14b0) + (longlong)*piVar1 * 8) = param_1;
    *piVar1 = *piVar1 + 1;
    *(short *)(param_1 + 0xe2) = (short)*piVar1 + -1;
    *(undefined1 *)(param_1 + 0xd6) = 0;
    return;
  }
  if ((param_2 != '\0') || (cVar6 == *(char *)(param_1 + 0xd6))) {
    *(char *)(param_1 + 0xd6) = cVar6;
    return;
  }
  iVar4 = *(int *)(DAT_180ca0a50 + 0x14a8);
  iVar7 = *(short *)(param_1 + 0xe2) + 1;
  if (iVar7 < iVar4) {
    do {
      lVar5 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      psVar2 = (short *)(*(longlong *)(*(longlong *)(lVar3 + 0x14b0) + lVar5 * 8) + 0xe2);
      *psVar2 = *psVar2 + -1;
      iVar4 = *(int *)(lVar3 + 0x14a8);
    } while (iVar7 < iVar4);
  }
  lVar5 = *(longlong *)(lVar3 + 0x14b0) + (longlong)*(short *)(param_1 + 0xe2) * 8;
  FUN_180540530(lVar5,lVar5 + 8,((longlong)iVar4 - (longlong)*(short *)(param_1 + 0xe2)) * 8 + -8);
  *(int *)(lVar3 + 0x14a8) = *(int *)(lVar3 + 0x14a8) + -1;
  *(undefined2 *)(param_1 + 0xe2) = 0xffff;
  *(char *)(param_1 + 0xd6) = cVar6;
  return;
}



/* ===== 1803eeeb0 FUN_1803eeeb0 ===== */

void FUN_1803eeeb0(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = (longlong)*(int *)(DAT_180ca0a50 + 0x14a8) * 8 + -8;
  if (*(longlong *)(lVar2 + *(longlong *)(DAT_180ca0a50 + 0x14b0)) != param_1) {
    iVar6 = *(int *)(DAT_180ca0a50 + 0x14a8) + -1;
    for (iVar5 = (int)*(short *)(param_1 + 0xe2); iVar5 < iVar6; iVar5 = iVar5 + 1) {
      lVar4 = (longlong)iVar5;
      *(undefined8 *)(*(longlong *)(lVar3 + 0x14b0) + lVar4 * 8) =
           *(undefined8 *)(*(longlong *)(lVar3 + 0x14b0) + 8 + lVar4 * 8);
      psVar1 = (short *)(*(longlong *)(*(longlong *)(lVar3 + 0x14b0) + lVar4 * 8) + 0xe2);
      *psVar1 = *psVar1 + -1;
    }
    *(longlong *)(lVar2 + *(longlong *)(lVar3 + 0x14b0)) = param_1;
    *(short *)(param_1 + 0xe2) = (short)iVar6;
  }
  return;
}



/* ===== 1803eef40 FUN_1803eef40 ===== */

void FUN_1803eef40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = DAT_180ca0a50;
  iVar5 = *(int *)(DAT_180ca0a50 + 0x1498);
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14a0);
  lVar2 = *(longlong *)(lVar1 + -8 + (longlong)iVar5 * 8);
  if ((lVar2 != param_1) && (*(longlong *)(lVar2 + 0x3c0) != param_1)) {
    for (uVar4 = iVar5 - 2; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
      if (*(longlong *)(lVar1 + (ulonglong)uVar4 * 8) == param_1) {
        FUN_180540530(lVar1 + (ulonglong)uVar4 * 8,lVar1 + (longlong)(int)(uVar4 + 1) * 8,
                      (longlong)(int)(~uVar4 + iVar5) << 3);
        *(longlong *)(*(longlong *)(lVar3 + 0x14a0) + -8 + (longlong)*(int *)(lVar3 + 0x1498) * 8) =
             param_1;
        break;
      }
    }
    iVar5 = 0;
    if (0 < *(int *)(lVar3 + 0x2020)) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x2028) + 8 + (longlong)iVar5 * 0x58);
        if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x3b0), lVar1 != 0)) &&
           (*(longlong *)(lVar1 + 0x3c0) == param_1)) {
          FUN_1803eef40();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar3 + 0x2020));
    }
  }
  return;
}



/* ===== 1803ef030 FUN_1803ef030 ===== */

void FUN_1803ef030(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  
  lVar3 = DAT_180ca0a50;
  if ((((param_2 & 2) != 0) && (*(longlong *)(DAT_180ca0a50 + 0x2068) != param_1)) &&
     (0 < *(int *)(DAT_180ca0a50 + 0x2020))) {
    lVar8 = *(longlong *)(DAT_180ca0a50 + 0x2028);
    lVar6 = (longlong)*(int *)(DAT_180ca0a50 + 0x2020) * 0x58;
    lVar10 = lVar6 + lVar8;
    if (lVar6 != 0) {
LAB_1803ef081:
      lVar6 = *(longlong *)(lVar8 + 8);
      if (((lVar6 != 0) && ((*(uint *)(lVar6 + 0x14) & 0x8000000) != 0)) &&
         ((*(char *)(lVar6 + 0xcc) != '\0' || (*(char *)(lVar6 + 0xcd) != '\0')))) {
        if (param_1 == 0) {
LAB_1803ef0c7:
          if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 4) != 0) {
            if (param_1 == 0) {
              pcVar9 = "<NULL>";
            }
            else {
              pcVar9 = *(char **)(param_1 + 8);
            }
            FUN_1803f5060("[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n",
                          pcVar9,*(undefined8 *)(lVar6 + 8));
          }
          lVar3 = DAT_180ca0a50;
          if (((param_1 == 0) || (lVar10 = *(longlong *)(param_1 + 0x3c0), param_1 != lVar10)) ||
             ((*(uint *)(param_1 + 0x14) & 0x2000) != 0)) goto LAB_1803ef260;
          plVar2 = *(longlong **)(DAT_180ca0a50 + 0x14a0);
          plVar1 = plVar2 + *(int *)(DAT_180ca0a50 + 0x1498);
          for (plVar14 = plVar2; (plVar14 < plVar1 && (*plVar14 != lVar10)); plVar14 = plVar14 + 1)
          {
          }
          plVar12 = plVar2;
          if (plVar1 <= plVar2) goto LAB_1803ef1ee;
          do {
            if (*plVar12 == *(longlong *)(lVar6 + 0x3c0)) break;
            plVar12 = plVar12 + 1;
          } while (plVar12 < plVar1);
LAB_1803ef1ee:
          iVar11 = (int)((longlong)plVar12 - (longlong)plVar2 >> 3);
          iVar13 = (int)((longlong)plVar14 - (longlong)plVar2 >> 3);
          if (iVar13 < iVar11) {
            FUN_180540530(plVar2 + iVar13,plVar2 + (iVar13 + 1),
                          (longlong)((iVar11 - iVar13) + -1) << 3);
            *(longlong *)(*(longlong *)(lVar3 + 0x14a0) + -8 + (longlong)iVar11 * 8) = lVar10;
          }
          else {
            FUN_180540530(plVar2 + (iVar11 + 1),plVar2 + iVar11,(longlong)(iVar13 - iVar11) << 3);
            *(longlong *)(*(longlong *)(lVar3 + 0x14a0) + (longlong)iVar11 * 8) = lVar10;
          }
LAB_1803ef260:
          uVar7 = *(int *)(lVar3 + 0x2020) - 1;
          if (-1 < (int)uVar7) {
            do {
              lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0x2028) + 8 + (ulonglong)uVar7 * 0x58);
              if ((lVar10 != 0) && ((*(uint *)(lVar10 + 0x14) & 0x8000000) != 0))
              goto LAB_1803ef2a0;
              uVar7 = uVar7 - 1;
            } while (-1 < (int)uVar7);
          }
          lVar10 = 0;
LAB_1803ef2a0:
          FUN_1803edf20(lVar10,0);
          return;
        }
        lVar4 = param_1;
        if (*(longlong *)(param_1 + 0x3c0) != lVar6) {
          while (lVar4 != lVar6) {
            lVar4 = *(longlong *)(lVar4 + 0x3b8);
            if (lVar4 == 0) goto LAB_1803ef0c7;
          }
        }
      }
      lVar8 = lVar8 + 0x58;
      if (lVar8 == lVar10) goto LAB_1803ef0e8;
      goto LAB_1803ef081;
    }
  }
LAB_1803ef0e8:
  if (((((param_2 & 1) != 0) && (param_1 != 0)) &&
      (lVar10 = *(longlong *)(param_1 + 1000), lVar10 != 0)) && (*(char *)(lVar10 + 0xcd) != '\0'))
  {
    param_1 = lVar10;
  }
  lVar10 = 0;
  if (*(longlong *)(DAT_180ca0a50 + 0x2068) != param_1) {
    FUN_1803ef3d0(param_1);
    if (param_1 == 0) {
      *(undefined4 *)(lVar3 + 0x2064) = 0;
      uVar5 = 0;
      *(undefined4 *)(lVar3 + 0x2074) = 0;
    }
    else {
      if (*(char *)(lVar3 + 0x2061) != '\0') {
        *(undefined1 *)(lVar3 + 0x2062) = 1;
      }
      *(undefined4 *)(lVar3 + 0x2064) = *(undefined4 *)(param_1 + 0x3f0);
      *(undefined4 *)(lVar3 + 0x2074) = 0;
      uVar5 = *(undefined4 *)(param_1 + 0x428);
    }
    FUN_1803e7f50(uVar5);
    *(undefined1 *)(lVar3 + 0x2063) = 0;
    *(undefined8 *)(lVar3 + 0x20c0) = 0xffffffffffffffff;
    FUN_1803edf20(param_1,0);
  }
  if (param_1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x3c0);
  }
  if (((*(int *)(lVar3 + 0x1578) != 0) && (*(longlong *)(lVar3 + 0x15a0) != 0)) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x15a0) + 0x3c0) != lVar10 &&
      (*(char *)(lVar3 + 0x1588) == '\0')))) {
    FUN_1803dd660(0,0);
  }
  if ((param_1 != 0) &&
     (FUN_1803eeeb0(lVar10),
     ((*(uint *)(lVar10 + 0x14) | *(uint *)(param_1 + 0x14)) >> 0xd & 1) == 0)) {
    FUN_1803eef40(lVar10);
  }
  return;
}



/* ===== 1803ef360 FUN_1803ef360 ===== */

void FUN_1803ef360(void)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = DAT_180ca0a50;
  if ((*(longlong *)(DAT_180ca0a50 + 0x2068) == 0) ||
     ((*(uint *)(*(longlong *)(DAT_180ca0a50 + 0x2068) + 0x14) & 0x10000) == 0)) {
    if (*(int *)(DAT_180ca0a50 + 0x20b8) == 2) {
      bVar1 = *(byte *)(DAT_180ca0a50 + 0x28) & 1;
    }
    else {
      if (*(int *)(DAT_180ca0a50 + 0x20b8) != 3) goto LAB_1803ef38d;
      bVar1 = *(byte *)(DAT_180ca0a50 + 0x28) & 2;
    }
    if (bVar1 != 0) {
LAB_1803ef38d:
      if (*(char *)(DAT_180ca0a50 + 0x76) == '\0') {
        *(undefined2 *)(DAT_180ca0a50 + 0x2061) = 0x101;
        return;
      }
      *(undefined2 *)(DAT_180ca0a50 + 0x2060) = 0x101;
      *(undefined1 *)(lVar2 + 0x2062) = 1;
      return;
    }
  }
  *(undefined2 *)(DAT_180ca0a50 + 0x2060) = 0x100;
  *(undefined1 *)(lVar2 + 0x2062) = 1;
  return;
}



/* ===== 1803ef3d0 FUN_1803ef3d0 ===== */

void FUN_1803ef3d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar1 = DAT_180ca0a50;
  lVar2 = DAT_180ca0a50;
  if (*(longlong *)(DAT_180ca0a50 + 0x2068) != param_1) {
    if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 4) != 0) {
      if (param_1 == 0) {
        pcVar3 = "<NULL>";
      }
      else {
        pcVar3 = *(char **)(param_1 + 8);
      }
      FUN_1803f5060("[focus] SetNavWindow(\"%s\")\n",pcVar3);
    }
    lVar2 = DAT_180ca0a50;
    *(longlong *)(lVar1 + 0x2068) = param_1;
    *(undefined8 *)(lVar1 + 0x20c0) = 0xffffffffffffffff;
  }
  *(undefined2 *)(lVar1 + 0x2108) = 0;
  *(undefined1 *)(lVar1 + 0x20ca) = 0;
  if ((*(char *)(lVar2 + 0x2109) == '\0') && (*(char *)(lVar2 + 0x20ca) == '\0')) {
    *(undefined1 *)(lVar2 + 0x20c9) = 0;
    return;
  }
  *(undefined1 *)(lVar2 + 0x20c9) = 1;
  return;
}



/* ===== 1803ef480 FUN_1803ef480 ===== */

void FUN_1803ef480(undefined4 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_180ca0a50;
  *(undefined4 *)(DAT_180ca0a50 + 0x2064) = param_1;
  *(int *)(lVar3 + 0x2074) = param_2;
  FUN_1803e7f50(param_3);
  lVar4 = DAT_180ca0a50;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x2068) + 0x3f0 + (longlong)param_2 * 4) = param_1;
  uVar2 = param_4[1];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x2068) + 0x3f8 + (longlong)param_2 * 0x10);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar4 + 0x2068) + 0x3d8) + 0x418 +
   (longlong)*(int *)(lVar4 + 0x2074) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar4 + 0x2068) + 0x3d8) + 0x41c +
   (longlong)*(int *)(lVar4 + 0x2074) * 8) = 0x7f7fffff;
  return;
}



/* ===== 1803ef530 FUN_1803ef530 ===== */

void FUN_1803ef530(int param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = DAT_180ca0a50;
  if (*(longlong *)(DAT_180ca0a50 + 0x2068) != param_2) {
    FUN_1803ef3d0(param_2);
  }
  lVar4 = (longlong)*(int *)(param_2 + 0x170);
  *(int *)(lVar2 + 0x2074) = *(int *)(param_2 + 0x170);
  *(int *)(lVar2 + 0x2064) = param_1;
  FUN_1803e7f50(*(undefined4 *)(lVar2 + 0x1ea4));
  *(int *)(param_2 + 0x3f0 + lVar4 * 4) = param_1;
  if (*(int *)(lVar2 + 0x1ee8) == param_1) {
    uVar1 = *(undefined8 *)(lVar2 + 0x1f0c);
    fVar5 = (float)*(undefined8 *)(param_2 + 0x128);
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x128) >> 0x20);
    *(ulonglong *)(param_2 + 0x3f8 + lVar4 * 0x10) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 0x1f04) >> 0x20) - fVar6,
                  (float)*(undefined8 *)(lVar2 + 0x1f04) - fVar5);
    *(ulonglong *)(param_2 + 0x400 + lVar4 * 0x10) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) - fVar6,(float)uVar1 - fVar5);
    if (*(int *)(lVar2 + 0x1ee8) == param_1) {
      uVar3 = *(undefined4 *)(lVar2 + 0x1eec);
      goto LAB_1803ef5cb;
    }
  }
  uVar3 = 0;
LAB_1803ef5cb:
  *(undefined4 *)(lVar2 + 0x2078) = uVar3;
  if (param_1 == *(int *)(lVar2 + 0x157c)) {
    *(undefined1 *)(lVar2 + 0x2063) = 1;
  }
  if (*(int *)(lVar2 + 0x159c) - 2U < 2) {
    *(undefined1 *)(lVar2 + 0x2061) = 1;
  }
  else if (*(char *)(lVar2 + 0x76) != '\0') {
    *(undefined1 *)(lVar2 + 0x2060) = 0;
  }
  lVar2 = DAT_180ca0a50;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x2068) + 0x3d8) + 0x418 +
   (longlong)*(int *)(DAT_180ca0a50 + 0x2074) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar2 + 0x2068) + 0x3d8) + 0x41c +
   (longlong)*(int *)(lVar2 + 0x2074) * 8) = 0x7f7fffff;
  return;
}



/* ===== 1803ef660 FUN_1803ef660 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1803ef660(longlong param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar4 = (ulonglong)*(uint *)(lVar2 + 0x170);
  if (*(uint *)(DAT_180ca0a50 + 0x2074) != *(uint *)(lVar2 + 0x170)) {
LAB_1803efa47:
    return uVar4 & 0xffffffffffffff00;
  }
  *(int *)(DAT_180ca0a50 + 0x2144) = *(int *)(DAT_180ca0a50 + 0x2144) + 1;
  uVar4 = *(ulonglong *)(lVar3 + 0x2068);
  fVar10 = *param_2;
  fVar14 = param_2[1];
  fVar8 = param_2[2];
  fVar12 = param_2[3];
  if (*(ulonglong *)(lVar2 + 0x3b0) == uVar4) {
    fVar15 = *(float *)(lVar2 + 0x274);
    if ((((fVar15 <= fVar14) || (fVar7 = *(float *)(lVar2 + 0x26c), fVar12 <= fVar7)) ||
        (fVar16 = *(float *)(lVar2 + 0x270), fVar16 <= fVar10)) ||
       (fVar11 = *(float *)(lVar2 + 0x268), fVar8 <= fVar11)) goto LAB_1803efa47;
    if (fVar7 <= fVar14) {
      fVar13 = fVar15;
      if (fVar14 <= fVar15) {
        fVar13 = fVar14;
      }
    }
    else {
      fVar13 = fVar7;
    }
    if (fVar11 <= fVar10) {
      fVar9 = fVar16;
      if (fVar10 <= fVar16) {
        fVar9 = fVar10;
      }
    }
    else {
      fVar9 = fVar11;
    }
    if ((fVar7 <= fVar12) && (fVar7 = fVar15, fVar12 <= fVar15)) {
      fVar7 = fVar12;
    }
    if ((fVar11 <= fVar8) && (fVar11 = fVar16, fVar8 <= fVar16)) {
      fVar11 = fVar8;
    }
  }
  else {
    fVar9 = fVar10;
    fVar11 = fVar8;
    fVar13 = fVar14;
    fVar7 = fVar12;
  }
  fVar10 = *(float *)(lVar3 + 0x2124);
  fVar14 = *(float *)(lVar3 + 0x2128);
  if (fVar10 <= fVar11) {
    if (fVar9 < *(float *)(lVar3 + 0x212c) || fVar9 == *(float *)(lVar3 + 0x212c)) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = fVar9 - *(float *)(lVar3 + 0x212c);
    }
  }
  else {
    fVar8 = fVar11 - fVar10;
  }
  fVar16 = *(float *)(lVar3 + 0x2130) - fVar14;
  fVar15 = (fVar7 - fVar13) * DAT_1808ac118 + fVar13;
  fVar12 = (fVar7 - fVar13) * DAT_1808ac294 + fVar13;
  fVar17 = fVar16 * DAT_1808ac118 + fVar14;
  fVar16 = fVar16 * DAT_1808ac294 + fVar14;
  if (fVar17 <= fVar12) {
    if (fVar16 < fVar15) {
      fVar12 = fVar15 - fVar16;
      goto LAB_1803ef832;
    }
    fVar12 = 0.0;
  }
  else {
    fVar12 = fVar12 - fVar17;
LAB_1803ef832:
    if ((fVar12 != 0.0) && (fVar8 != 0.0)) {
      if (fVar8 <= 0.0) {
        fVar8 = fVar8 / DAT_1808acc3c + DAT_1808acda0;
      }
      else {
        fVar8 = fVar8 / DAT_1808acc3c + DAT_1808ac34c;
      }
    }
  }
  fVar15 = (float)((uint)fVar12 & _DAT_1808ade90) + (float)((uint)fVar8 & _DAT_1808ade90);
  fVar14 = (fVar13 + fVar7) - (fVar14 + *(float *)(lVar3 + 0x2130));
  fVar10 = (fVar9 + fVar11) - (fVar10 + *(float *)(lVar3 + 0x212c));
  fVar7 = (float)((uint)fVar14 & _DAT_1808ade90) + (float)((uint)fVar10 & _DAT_1808ade90);
  if ((fVar8 == 0.0) && (fVar12 == 0.0)) {
    if ((fVar10 == 0.0) && (fVar14 == 0.0)) {
      uVar4 = (ulonglong)*(uint *)(lVar3 + 0x2064);
      uVar5 = (uint)(*(uint *)(lVar3 + 0x2064) <= *(uint *)(lVar3 + 0x1ee8));
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar14 = 0.0;
    }
    else {
      fVar11 = fVar7;
      if ((float)((uint)fVar10 & _DAT_1808ade90) <= (float)((uint)fVar14 & _DAT_1808ade90))
      goto LAB_1803ef947;
      uVar5 = (uint)(0.0 < fVar10);
    }
  }
  else {
    fVar10 = fVar8;
    fVar11 = fVar15;
    fVar14 = fVar12;
    if ((float)((uint)fVar8 & _DAT_1808ade90) <= (float)((uint)fVar12 & _DAT_1808ade90)) {
LAB_1803ef947:
      uVar5 = (0.0 < fVar14) + 2;
    }
    else {
      uVar5 = (uint)(0.0 < fVar8);
    }
  }
  uVar1 = *(uint *)(lVar3 + 0x2118);
  bVar6 = 0;
  if (uVar5 == uVar1) {
    if (fVar15 < *(float *)(param_1 + 0x24)) {
      *(float *)(param_1 + 0x24) = fVar15;
      *(float *)(param_1 + 0x28) = fVar7;
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
    if (fVar15 == *(float *)(param_1 + 0x24)) {
      if (*(float *)(param_1 + 0x28) <= fVar7) {
        if (fVar7 == *(float *)(param_1 + 0x28)) {
          if (uVar1 - 2 < 2) {
            fVar8 = fVar12;
          }
          bVar6 = 0;
          if (fVar8 < 0.0) {
            bVar6 = 1;
          }
        }
      }
      else {
        *(float *)(param_1 + 0x28) = fVar7;
        bVar6 = 1;
      }
    }
  }
  if ((((*(float *)(param_1 + 0x24) == DAT_1808acd08) && (fVar11 < *(float *)(param_1 + 0x2c))) &&
      (*(int *)(lVar3 + 0x2074) == 1)) &&
     ((*(uint *)(*(longlong *)(lVar3 + 0x2068) + 0x14) & 0x10000000) == 0)) {
    if (uVar1 == 0) {
      if (0.0 <= fVar10) {
        return (ulonglong)bVar6;
      }
    }
    else if (uVar1 == 1) {
      if (fVar10 <= 0.0) {
        return (ulonglong)bVar6;
      }
    }
    else if (uVar1 == 2) {
      if (0.0 <= fVar14) {
        return (ulonglong)bVar6;
      }
    }
    else if ((uVar1 != 3) || (fVar14 <= 0.0)) goto LAB_1803efa42;
    *(float *)(param_1 + 0x2c) = fVar11;
    bVar6 = 1;
  }
LAB_1803efa42:
  return (ulonglong)bVar6;
}



/* ===== 1803efa70 FUN_1803efa70 ===== */

void FUN_1803efa70(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  lVar13 = DAT_180ca0a50;
  lVar8 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_58 = *(float *)(DAT_180ca0a50 + 0x1f04);
  fVar10 = *(float *)(DAT_180ca0a50 + 0x1f08);
  fStack_50 = *(float *)(DAT_180ca0a50 + 0x1f0c);
  fVar11 = *(float *)(DAT_180ca0a50 + 0x1f10);
  uVar5 = *(uint *)(DAT_180ca0a50 + 0x1eec);
  iVar6 = *(int *)(DAT_180ca0a50 + 0x1ee8);
  if (*(char *)(lVar8 + 0x178) == '\0') {
    fVar20 = *(float *)(lVar8 + 0x268);
    fVar1 = *(float *)(lVar8 + 0x270);
    if (fVar20 <= local_58) {
      fVar19 = fVar1;
      if (local_58 <= fVar1) {
        fVar19 = local_58;
      }
    }
    else {
      fVar19 = fVar20;
    }
    if ((fVar20 <= fStack_50) && (fVar20 = fVar1, fStack_50 <= fVar1)) {
      fVar20 = fStack_50;
    }
    local_58 = fVar19;
    fStack_50 = fVar20;
  }
  fVar1 = fStack_50;
  fVar20 = local_58;
  if ((((*(char *)(DAT_180ca0a50 + 0x20ca) != '\0') &&
       (*(int *)(DAT_180ca0a50 + 0x2074) == *(int *)(lVar8 + 0x170))) && ((uVar5 & 0x40) == 0)) &&
     (((uVar5 & 4) == 0 || (*(int *)(DAT_180ca0a50 + 0x20d8) == 0)))) {
    *(longlong *)(DAT_180ca0a50 + 0x20d0) = lVar8;
    *(int *)(lVar13 + 0x20d8) = iVar6;
    *(undefined4 *)(lVar13 + 0x20dc) = *(undefined4 *)(lVar13 + 0x1ea4);
    *(uint *)(lVar13 + 0x20f0) = uVar5;
    fVar19 = (float)*(undefined8 *)(lVar8 + 0x128);
    fVar17 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x128) >> 0x20);
    *(ulonglong *)(lVar13 + 0x20e0) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar13 + 0x1f04) >> 0x20) - fVar17,
                  (float)*(undefined8 *)(lVar13 + 0x1f04) - fVar19);
    *(ulonglong *)(lVar13 + 0x20e8) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar13 + 0x1f0c) >> 0x20) - fVar17,
                  (float)*(undefined8 *)(lVar13 + 0x1f0c) - fVar19);
    if ((uVar5 >> 0x15 & 1) != 0) {
      *(undefined8 *)(lVar13 + 0x2100) = *(undefined8 *)(lVar13 + 0x1ec0);
    }
    if ((uVar5 & 4) == 0) {
      *(undefined1 *)(lVar13 + 0x20ca) = 0;
      *(bool *)(lVar13 + 0x20c9) = *(char *)(lVar13 + 0x2109) != '\0';
    }
  }
  fStack_54 = fVar10;
  fStack_4c = fVar11;
  if (((*(char *)(lVar13 + 0x2109) != '\0') && ((uVar5 & 0x40) == 0)) &&
     ((uVar7 = *(uint *)(lVar13 + 0x210c), (uVar7 >> 9 & 1) != 0 ||
      ((*(uint *)(lVar8 + 0x14) & 0x10000) == 0)))) {
    if ((uVar7 >> 10 & 1) == 0) {
      if ((*(int *)(lVar13 + 0x2064) != iVar6) || ((uVar7 & 0x10) != 0)) {
        lVar14 = *(longlong *)(lVar13 + 0x2068);
        lVar15 = 0x2150;
        if (lVar8 != lVar14) {
          lVar15 = 0x21c0;
        }
        cVar12 = FUN_1803ef660((longlong *)(lVar15 + lVar13),&local_58);
        if (cVar12 != '\0') {
          lVar9 = *(longlong *)(lVar13 + 0x14f8);
          bVar16 = lVar8 != lVar14;
          *(longlong *)(lVar15 + lVar13) = lVar9;
          lVar15 = 0x2158;
          if (bVar16) {
            lVar15 = 0x21c8;
          }
          *(undefined4 *)(lVar15 + lVar13) = *(undefined4 *)(lVar13 + 0x1ee8);
          lVar15 = 0x215c;
          if (bVar16) {
            lVar15 = 0x21cc;
          }
          *(undefined4 *)(lVar15 + lVar13) = *(undefined4 *)(lVar13 + 0x1ea4);
          uVar7 = *(uint *)(lVar13 + 0x1eec);
          lVar15 = 0x2170;
          if (bVar16) {
            lVar15 = 0x21e0;
          }
          *(uint *)(lVar15 + lVar13) = uVar7;
          fVar19 = *(float *)(lVar9 + 300);
          fVar17 = *(float *)(lVar9 + 0x128);
          fVar18 = *(float *)(lVar13 + 0x1f08);
          lVar15 = 0x2160;
          if (bVar16) {
            lVar15 = 0x21d0;
          }
          fVar2 = *(float *)(lVar13 + 0x1f10);
          fVar3 = *(float *)(lVar13 + 0x1f0c);
          *(float *)(lVar15 + lVar13) = *(float *)(lVar13 + 0x1f04) - fVar17;
          lVar15 = 0x2164;
          if (bVar16) {
            lVar15 = 0x21d4;
          }
          *(float *)(lVar15 + lVar13) = fVar18 - fVar19;
          lVar15 = 0x2168;
          if (bVar16) {
            lVar15 = 0x21d8;
          }
          *(float *)(lVar15 + lVar13) = fVar3 - fVar17;
          lVar15 = 0x216c;
          if (bVar16) {
            lVar15 = 0x21dc;
          }
          *(float *)(lVar15 + lVar13) = fVar2 - fVar19;
          if ((uVar7 >> 0x15 & 1) != 0) {
            lVar15 = 0x2180;
            if (lVar8 != lVar14) {
              lVar15 = 0x21f0;
            }
            *(undefined8 *)(lVar15 + lVar13) = *(undefined8 *)(lVar13 + 0x1ec0);
          }
        }
        if (((((*(byte *)(lVar13 + 0x210c) & 0x20) != 0) &&
             (fVar19 = *(float *)(lVar8 + 0x234), fVar10 < fVar19)) &&
            (fVar17 = *(float *)(lVar8 + 0x22c), fVar17 < fVar11)) &&
           ((fVar20 < *(float *)(lVar8 + 0x230) &&
            (*(float *)(lVar8 + 0x228) <= fVar1 && fVar1 != *(float *)(lVar8 + 0x228))))) {
          if (fVar17 <= fVar11) {
            fVar18 = fVar19;
            if (fVar11 <= fVar19) {
              fVar18 = fVar11;
            }
          }
          else {
            fVar18 = fVar17;
          }
          if ((fVar17 <= fVar10) && (fVar17 = fVar19, fVar10 <= fVar19)) {
            fVar17 = fVar10;
          }
          if (((fVar11 - fVar10) * DAT_1808ac254 <= fVar18 - fVar17) &&
             (cVar12 = FUN_1803ef660(lVar13 + 0x2188,&local_58), cVar12 != '\0')) {
            *(longlong *)(lVar13 + 0x2188) = *(longlong *)(lVar13 + 0x14f8);
            *(undefined4 *)(lVar13 + 0x2190) = *(undefined4 *)(lVar13 + 0x1ee8);
            *(undefined4 *)(lVar13 + 0x2194) = *(undefined4 *)(lVar13 + 0x1ea4);
            *(uint *)(lVar13 + 0x21a8) = *(uint *)(lVar13 + 0x1eec);
            uVar4 = *(undefined8 *)(*(longlong *)(lVar13 + 0x14f8) + 0x128);
            fVar19 = (float)uVar4;
            fVar17 = (float)((ulonglong)uVar4 >> 0x20);
            *(ulonglong *)(lVar13 + 0x2198) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)(lVar13 + 0x1f04) >> 0x20) - fVar17,
                          (float)*(undefined8 *)(lVar13 + 0x1f04) - fVar19);
            *(ulonglong *)(lVar13 + 0x21a0) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)(lVar13 + 0x1f0c) >> 0x20) - fVar17,
                          (float)*(undefined8 *)(lVar13 + 0x1f0c) - fVar19);
            if ((*(uint *)(lVar13 + 0x1eec) >> 0x15 & 1) != 0) {
              *(undefined8 *)(lVar13 + 0x21b8) = *(undefined8 *)(lVar13 + 0x1ec0);
            }
          }
        }
      }
    }
    else {
      FUN_1803eff70(iVar6,uVar5,uVar7);
    }
  }
  if (*(int *)(lVar13 + 0x2064) == iVar6) {
    if (*(longlong *)(lVar13 + 0x2068) != lVar8) {
      FUN_1803ef3d0(lVar8);
    }
    *(undefined4 *)(lVar13 + 0x2074) = *(undefined4 *)(lVar8 + 0x170);
    FUN_1803e7f50(*(undefined4 *)(lVar13 + 0x1ea4));
    *(undefined4 *)(lVar13 + 0x2070) = *(undefined4 *)(lVar13 + 0x1ea4);
    *(undefined1 *)(lVar13 + 0x2063) = 1;
    *(uint *)(lVar13 + 0x2078) = uVar5;
    if ((*(uint *)(lVar13 + 0x1eec) & 0x200000) != 0) {
      *(undefined8 *)(lVar13 + 0x20c0) = *(undefined8 *)(lVar13 + 0x1ec0);
    }
    fVar19 = *(float *)(lVar8 + 0x128);
    fVar17 = *(float *)(lVar8 + 300);
    lVar13 = (longlong)*(int *)(lVar8 + 0x170);
    *(float *)(lVar8 + 0x3f8 + lVar13 * 0x10) = fVar20 - fVar19;
    *(float *)(lVar8 + 0x3fc + lVar13 * 0x10) = fVar10 - fVar17;
    *(float *)(lVar8 + 0x400 + lVar13 * 0x10) = fVar1 - fVar19;
    *(float *)(lVar8 + 0x404 + lVar13 * 0x10) = fVar11 - fVar17;
  }
  return;
}



/* ===== 1803eff70 FUN_1803eff70 ===== */

void FUN_1803eff70(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  lVar6 = DAT_180ca0a50;
  if ((param_3 >> 9 & 1) == 0) {
    if (*(int *)(DAT_180ca0a50 + 0x2074) != *(int *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x170))
    {
      return;
    }
    if (*(int *)(DAT_180ca0a50 + 0x2070) != *(int *)(DAT_180ca0a50 + 0x1ea4)) {
      return;
    }
    if (((param_2 & 1) != 0) ||
       (((*(byte *)(DAT_180ca0a50 + 0x28) & 1) == 0 && ((param_2 >> 0x14 & 1) == 0)))) {
      bVar4 = false;
      goto LAB_1803effcc;
    }
  }
  bVar4 = true;
LAB_1803effcc:
  iVar5 = *(int *)(DAT_180ca0a50 + 0x2148);
  if (iVar5 == 1) {
    if (bVar4) {
      if (*(int *)(DAT_180ca0a50 + 0x2200) == 0) {
        lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
        *(longlong *)(DAT_180ca0a50 + 0x21f8) = lVar3;
        *(undefined4 *)(lVar6 + 0x2200) = *(undefined4 *)(lVar6 + 0x1ee8);
        *(undefined4 *)(lVar6 + 0x2204) = *(undefined4 *)(lVar6 + 0x1ea4);
        *(uint *)(lVar6 + 0x2218) = *(uint *)(lVar6 + 0x1eec);
        uVar2 = *(undefined8 *)(lVar3 + 0x128);
        fVar7 = (float)uVar2;
        fVar8 = (float)((ulonglong)uVar2 >> 0x20);
        *(ulonglong *)(lVar6 + 0x2208) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x1f04) >> 0x20) - fVar8,
                      (float)*(undefined8 *)(lVar6 + 0x1f04) - fVar7);
        *(ulonglong *)(lVar6 + 0x2210) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x1f0c) >> 0x20) - fVar8,
                      (float)*(undefined8 *)(lVar6 + 0x1f0c) - fVar7);
        if ((*(uint *)(lVar6 + 0x1eec) >> 0x15 & 1) != 0) {
          *(undefined8 *)(lVar6 + 0x2228) = *(undefined8 *)(lVar6 + 0x1ec0);
        }
      }
      if ((0 < *(int *)(lVar6 + 0x214c)) &&
         (iVar5 = *(int *)(lVar6 + 0x214c) + -1, *(int *)(lVar6 + 0x214c) = iVar5, iVar5 == 0)) {
        FUN_1803f03b0(lVar6 + 0x2150);
        return;
      }
    }
    if (*(int *)(lVar6 + 0x2064) == param_1) {
      *(undefined4 *)(lVar6 + 0x214c) = 1;
      return;
    }
  }
  else if (iVar5 == -1) {
    if (*(int *)(DAT_180ca0a50 + 0x2064) == param_1) {
      if (*(int *)(DAT_180ca0a50 + 0x2158) != 0) {
        pcVar1 = (char *)(DAT_180ca0a50 + 0x20ca);
        *(undefined1 *)(DAT_180ca0a50 + 0x2109) = 0;
        *(bool *)(lVar6 + 0x20c9) = *pcVar1 != '\0';
        return;
      }
    }
    else if (bVar4) {
      lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      *(longlong *)(DAT_180ca0a50 + 0x2150) = lVar3;
      *(undefined4 *)(lVar6 + 0x2158) = *(undefined4 *)(lVar6 + 0x1ee8);
      *(undefined4 *)(lVar6 + 0x215c) = *(undefined4 *)(lVar6 + 0x1ea4);
      *(uint *)(lVar6 + 0x2170) = *(uint *)(lVar6 + 0x1eec);
      uVar2 = *(undefined8 *)(lVar3 + 0x128);
      fVar7 = (float)uVar2;
      fVar8 = (float)((ulonglong)uVar2 >> 0x20);
      *(ulonglong *)(lVar6 + 0x2160) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x1f04) >> 0x20) - fVar8,
                    (float)*(undefined8 *)(lVar6 + 0x1f04) - fVar7);
      *(ulonglong *)(lVar6 + 0x2168) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x1f0c) >> 0x20) - fVar8,
                    (float)*(undefined8 *)(lVar6 + 0x1f0c) - fVar7);
      if ((*(uint *)(lVar6 + 0x1eec) >> 0x15 & 1) != 0) {
        *(undefined8 *)(lVar6 + 0x2180) = *(undefined8 *)(lVar6 + 0x1ec0);
        return;
      }
    }
  }
  else if ((iVar5 == 0) && (bVar4)) {
    if (*(int *)(DAT_180ca0a50 + 0x2064) == param_1) {
      FUN_1803f03b0(DAT_180ca0a50 + 0x2150);
    }
    if (*(int *)(lVar6 + 0x2200) == 0) {
      *(longlong *)(lVar6 + 0x21f8) = *(longlong *)(lVar6 + 0x14f8);
      *(undefined4 *)(lVar6 + 0x2200) = *(undefined4 *)(lVar6 + 0x1ee8);
      *(undefined4 *)(lVar6 + 0x2204) = *(undefined4 *)(lVar6 + 0x1ea4);
      *(uint *)(lVar6 + 0x2218) = *(uint *)(lVar6 + 0x1eec);
      uVar2 = *(undefined8 *)(*(longlong *)(lVar6 + 0x14f8) + 0x128);
      fVar7 = (float)uVar2;
      fVar8 = (float)((ulonglong)uVar2 >> 0x20);
      *(ulonglong *)(lVar6 + 0x2208) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x1f04) >> 0x20) - fVar8,
                    (float)*(undefined8 *)(lVar6 + 0x1f04) - fVar7);
      *(ulonglong *)(lVar6 + 0x2210) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x1f0c) >> 0x20) - fVar8,
                    (float)*(undefined8 *)(lVar6 + 0x1f0c) - fVar7);
      if ((*(uint *)(lVar6 + 0x1eec) >> 0x15 & 1) != 0) {
        *(undefined8 *)(lVar6 + 0x2228) = *(undefined8 *)(lVar6 + 0x1ec0);
      }
    }
  }
  return;
}



/* ===== 1803f0230 FUN_1803f0230 ===== */

void FUN_1803f0230(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  lVar1 = DAT_180ca0a50;
  uVar3 = param_3 | 0x10;
  if ((param_3 >> 10 & 1) == 0) {
    uVar3 = param_3;
  }
  *(undefined4 *)(DAT_180ca0a50 + 0x2118) = param_1;
  *(undefined4 *)(lVar1 + 0x211c) = param_1;
  *(undefined2 *)(lVar1 + 0x2108) = 0x101;
  uVar2 = 0;
  *(undefined4 *)(lVar1 + 0x2120) = param_2;
  *(uint *)(lVar1 + 0x210c) = uVar3;
  *(undefined4 *)(lVar1 + 0x2110) = param_4;
  *(undefined1 *)(lVar1 + 0x210a) = 0;
  if ((uVar3 >> 9 & 1) == 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x130);
  }
  *(undefined8 *)(lVar1 + 0x2150) = 0;
  *(undefined8 *)(lVar1 + 0x2158) = 0;
  *(undefined4 *)(lVar1 + 0x2170) = 0;
  *(undefined8 *)(lVar1 + 0x2180) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x217c) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2178) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2174) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x2188) = 0;
  *(undefined8 *)(lVar1 + 0x2190) = 0;
  *(undefined4 *)(lVar1 + 0x21a8) = 0;
  *(undefined8 *)(lVar1 + 0x21b8) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x21b4) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21b0) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21ac) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x21c0) = 0;
  *(undefined8 *)(lVar1 + 0x21c8) = 0;
  *(undefined4 *)(lVar1 + 0x21e0) = 0;
  *(undefined8 *)(lVar1 + 0x21f0) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x21ec) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21e8) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x21e4) = 0x7f7fffff;
  *(undefined8 *)(lVar1 + 0x21f8) = 0;
  *(undefined8 *)(lVar1 + 0x2200) = 0;
  *(undefined4 *)(lVar1 + 0x2218) = 0;
  *(undefined8 *)(lVar1 + 0x2228) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x2224) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x2220) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x221c) = 0x7f7fffff;
  *(undefined1 *)(lVar1 + 0x20c9) = 1;
  *(undefined4 *)(lVar1 + 0x2114) = uVar2;
  *(undefined4 *)(lVar1 + 0x214c) = 0;
  return;
}



/* ===== 1803f03b0 FUN_1803f03b0 ===== */

void FUN_1803f03b0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  lVar5 = DAT_180ca0a50;
  lVar4 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(DAT_180ca0a50 + 0x2109) = 0;
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar5 + 0x1ee8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar5 + 0x1ea4);
  uVar3 = *(uint *)(lVar5 + 0x1eec);
  *(uint *)(param_1 + 4) = uVar3;
  uVar1 = *(undefined8 *)(lVar4 + 0x128);
  uVar2 = *(undefined8 *)(lVar5 + 0x1f0c);
  fVar6 = (float)uVar1;
  fVar7 = (float)((ulonglong)uVar1 >> 0x20);
  param_1[2] = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar5 + 0x1f04) >> 0x20) - fVar7,
                        (float)*(undefined8 *)(lVar5 + 0x1f04) - fVar6);
  param_1[3] = CONCAT44((float)((ulonglong)uVar2 >> 0x20) - fVar7,(float)uVar2 - fVar6);
  if ((uVar3 >> 0x15 & 1) != 0) {
    param_1[6] = *(longlong *)(lVar5 + 0x1ec0);
  }
  if ((*(char *)(lVar5 + 0x2109) == '\0') && (*(char *)(lVar5 + 0x20ca) == '\0')) {
    *(undefined1 *)(lVar5 + 0x20c9) = 0;
    return;
  }
  *(undefined1 *)(lVar5 + 0x20c9) = 1;
  return;
}



/* ===== 1803f0450 FUN_1803f0450 ===== */

void FUN_1803f0450(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_180ca0a50;
  if (param_1 == 0) {
    lVar2 = *(longlong *)(DAT_180ca0a50 + 0x2068);
    lVar4 = *(longlong *)(lVar2 + 1000);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0xcd) == '\0')) {
      lVar4 = lVar2;
    }
    *(longlong *)(DAT_180ca0a50 + 0x2068) = lVar4;
    *(undefined8 *)(lVar3 + 0x20c0) = 0xffffffffffffffff;
    if ((lVar2 != 0) && ((*(byte *)(lVar3 + 0x28f4) & 4) != 0)) {
      FUN_1803f5060("[focus] NavRestoreLayer: from \"%s\" to SetNavWindow(\"%s\")\n",
                    *(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar4 + 8));
    }
  }
  lVar2 = *(longlong *)(lVar3 + 0x2068);
  iVar1 = *(int *)(lVar2 + 0x3f0 + (longlong)param_1 * 4);
  if (iVar1 == 0) {
    *(int *)(lVar3 + 0x2074) = param_1;
    FUN_1803f0510(lVar2,1);
    return;
  }
  FUN_1803ef480(iVar1,param_1,0,lVar2 + 0x3f8 + (longlong)param_1 * 0x10);
  return;
}



/* ===== 1803f0510 FUN_1803f0510 ===== */

void FUN_1803f0510(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = DAT_180ca0a50;
  if ((*(uint *)(param_1 + 0x14) >> 0x10 & 1) != 0) {
    *(undefined4 *)(DAT_180ca0a50 + 0x2064) = 0;
    FUN_1803e7f50(*(undefined4 *)(param_1 + 0x428));
    return;
  }
  if ((((param_1 == *(longlong *)(param_1 + 0x3c0)) ||
       ((*(uint *)(param_1 + 0x14) >> 0x1a & 1) != 0)) || (*(int *)(param_1 + 0x3f0) == 0)) ||
     (param_2 != '\0')) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 0x10) != 0) {
    FUN_1803f5060("[nav] NavInitRequest: from NavInitWindow(), init_for_nav=%d, window=\"%s\", layer=%d\n"
                  ,cVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(DAT_180ca0a50 + 0x2074));
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(lVar1 + 0x2064) = *(undefined4 *)(param_1 + 0x3f0);
    FUN_1803e7f50(*(undefined4 *)(param_1 + 0x428));
    return;
  }
  local_18 = 0;
  uStack_10 = 0;
  FUN_1803ef480(0,*(undefined4 *)(lVar1 + 0x2074),*(undefined4 *)(param_1 + 0x428),&local_18);
  lVar2 = DAT_180ca0a50;
  *(undefined2 *)(lVar1 + 0x20ca) = 1;
  *(undefined4 *)(lVar1 + 0x20d8) = 0;
  if ((*(char *)(lVar2 + 0x2109) == '\0') && (*(char *)(lVar2 + 0x20ca) == '\0')) {
    *(undefined1 *)(lVar2 + 0x20c9) = 0;
    return;
  }
  *(undefined1 *)(lVar2 + 0x20c9) = 1;
  return;
}



/* ===== 1803f0640 FUN_1803f0640 ===== */

char FUN_1803f0640(uint param_1)

{
  bool bVar1;
  
  if (((*(int *)(DAT_180ca0a50 + 0x1578) == 0) || (*(char *)(DAT_180ca0a50 + 0x158c) == '\0')) ||
     (*(int *)(DAT_180ca0a50 + 0x1578) != *(int *)(DAT_180ca0a50 + 0x1ee8))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((param_1 >> 0x1a & 1) != 0) && (bVar1)) {
    return '\x02';
  }
  if ((*(char *)(DAT_180ca0a50 + 0x2060) == '\0') || (*(char *)(DAT_180ca0a50 + 0x2061) == '\0')) {
    return '\x01';
  }
  return (*(longlong *)(DAT_180ca0a50 + 0x2068) != 0) + '\x01';
}



/* ===== 1803f06a0 FUN_1803f06a0 ===== */

float * FUN_1803f06a0(float *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res18;
  float local_res1c;
  
  lVar5 = DAT_180ca0a50;
  iVar2 = FUN_1803f0640();
  if (iVar2 == 1) {
    if ((*(float *)(lVar5 + 0x110) < DAT_1808ace9c) || (*(float *)(lVar5 + 0x114) < DAT_1808ace9c))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = 0x110;
    if (!bVar1) {
      lVar3 = 0x2508;
    }
    fVar6 = *(float *)(lVar3 + lVar5) + DAT_1808ac34c;
    lVar3 = 0x114;
    if (!bVar1) {
      lVar3 = 0x250c;
    }
    param_1[1] = *(float *)(lVar3 + lVar5);
    *param_1 = fVar6;
    return param_1;
  }
  lVar3 = *(longlong *)(lVar5 + 0x2068);
  if ((((*(int *)(lVar5 + 0x1578) == 0) || (*(char *)(lVar5 + 0x158c) == '\0')) ||
      (*(int *)(lVar5 + 0x1578) != *(int *)(lVar5 + 0x1ee8))) || ((param_2 >> 0x1a & 1) == 0)) {
    if (lVar3 == 0) {
      fVar6 = 0.0;
      fVar10 = 0.0;
      fVar9 = 0.0;
      fVar8 = 0.0;
      goto LAB_1803f086d;
    }
    lVar4 = (longlong)*(int *)(lVar5 + 0x2074);
    fVar6 = *(float *)(lVar3 + 0x128) + *(float *)(lVar3 + 0x3f8 + lVar4 * 0x10);
    fVar10 = *(float *)(lVar3 + 300) + *(float *)(lVar3 + 0x3fc + lVar4 * 0x10);
    fVar9 = *(float *)(lVar3 + 0x128) + *(float *)(lVar3 + 0x400 + lVar4 * 0x10);
    fVar8 = *(float *)(lVar3 + 300) + *(float *)(lVar3 + 0x404 + lVar4 * 0x10);
  }
  else {
    fVar6 = *(float *)(lVar5 + 0x1f04);
    fVar10 = *(float *)(lVar5 + 0x1f08);
    fVar9 = *(float *)(lVar5 + 0x1f0c);
    fVar8 = *(float *)(lVar5 + 0x1f10);
    if (lVar3 == 0) goto LAB_1803f086d;
  }
  if ((*(int *)(lVar3 + 0x290) != *(int *)(lVar5 + 4)) &&
     ((*(float *)(lVar3 + 0xa8) != DAT_1808acd08 || (*(float *)(lVar3 + 0xac) != DAT_1808acd08)))) {
    FUN_1803ecf50(&local_res18);
    local_res18 = *(float *)(lVar3 + 0x98) - local_res18;
    local_res1c = *(float *)(lVar3 + 0x9c) - local_res1c;
    fVar6 = fVar6 + local_res18;
    fVar9 = fVar9 + local_res18;
    fVar10 = fVar10 + local_res1c;
    fVar8 = fVar8 + local_res1c;
  }
LAB_1803f086d:
  fVar7 = *(float *)(lVar5 + 0xcdc) * DAT_1808ac710;
  if (fVar9 - fVar6 <= fVar7) {
    fVar7 = fVar9 - fVar6;
  }
  lVar3 = **(longlong **)(lVar5 + 0x2058);
  fVar9 = *(float *)(lVar5 + 0xce0);
  if (fVar8 - fVar10 <= *(float *)(lVar5 + 0xce0)) {
    fVar9 = fVar8 - fVar10;
  }
  fVar10 = *(float *)(lVar3 + 8);
  fVar7 = fVar7 + fVar6;
  fVar8 = fVar8 - fVar9;
  fVar6 = *(float *)(lVar3 + 0xc);
  if ((fVar6 <= fVar8) && (fVar6 = fVar6 + *(float *)(lVar3 + 0x14), fVar8 <= fVar6)) {
    fVar6 = fVar8;
  }
  if ((fVar10 <= fVar7) && (fVar10 = fVar10 + *(float *)(lVar3 + 0x10), fVar7 <= fVar10)) {
    fVar10 = fVar7;
  }
  *param_1 = (float)(int)fVar10;
  param_1[1] = (float)(int)fVar6;
  return param_1;
}



/* ===== 1803f0920 FUN_1803f0920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803f0920(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  char cVar10;
  undefined1 uVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  byte bVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  uint *puVar23;
  uint uVar24;
  uint unaff_R15D;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_d8 [32];
  char local_b8;
  byte local_b7;
  uint local_b4 [3];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68 [5];
  
  lVar9 = DAT_180ca0a50;
  local_68[0] = DAT_180919500 ^ (ulonglong)auStack_d8;
  pbVar1 = (byte *)(DAT_180ca0a50 + 0x28);
  *(undefined1 *)(DAT_180ca0a50 + 0xe3) = 0;
  if (((*pbVar1 & 2) == 0) || ((*(byte *)(lVar9 + 0x2c) & 1) == 0)) {
    bVar7 = false;
    local_b8 = '\0';
  }
  else {
    bVar7 = true;
    local_88 = _DAT_1808ad860;
    uStack_80 = _UNK_1808ad868;
    local_b8 = '\x01';
    local_78 = _DAT_1808ad870;
    uStack_70 = _UNK_1808ad878;
    if (*(int *)(lVar9 + 0x20b8) != 3) {
      local_b8 = '\x01';
      puVar22 = &local_88;
      do {
        uVar21 = (ulonglong)(uint)*puVar22;
        pcVar15 = (char *)FUN_1803d6470(uVar21);
        if ((*pcVar15 != '\0') && (cVar10 = FUN_1803eb1c0(uVar21 & 0xffffffff,0), cVar10 != '\0')) {
          *(undefined4 *)(lVar9 + 0x20b8) = 3;
        }
        puVar22 = (ulonglong *)((longlong)puVar22 + 4);
      } while (puVar22 != local_68);
    }
  }
  bVar19 = *(byte *)(lVar9 + 0x28) & 1;
  local_a8 = _DAT_1808ad840;
  uStack_a0 = _UNK_1808ad848;
  local_98 = 0x201;
  local_94 = 0x203;
  local_90 = 0x204;
  local_b7 = bVar19;
  if ((bVar19 != 0) && (*(int *)(lVar9 + 0x20b8) != 2)) {
    puVar23 = (uint *)&local_a8;
    do {
      uVar21 = (ulonglong)*puVar23;
      pcVar15 = (char *)FUN_1803d6470(uVar21);
      if ((*pcVar15 != '\0') && (cVar10 = FUN_1803eb1c0(uVar21 & 0xffffffff,0), cVar10 != '\0')) {
        *(undefined4 *)(lVar9 + 0x20b8) = 2;
      }
      puVar23 = puVar23 + 1;
    } while (puVar23 != &local_8c);
  }
  iVar14 = *(int *)(lVar9 + 0x20d8);
  *(undefined8 *)(lVar9 + 0x2230) = 0;
  *(undefined4 *)(lVar9 + 0x2238) = 0;
  if ((iVar14 != 0) && (*(longlong *)(lVar9 + 0x2068) != 0)) {
    if (*(int *)(lVar9 + 0x2064) != iVar14) {
      *(undefined4 *)(lVar9 + 0x2230) = *(undefined4 *)(lVar9 + 0x2070);
      *(int *)(lVar9 + 0x2234) = iVar14;
      *(undefined4 *)(lVar9 + 0x2238) = *(undefined4 *)(lVar9 + 0x20dc);
      *(undefined4 *)(lVar9 + 0x223c) = 0;
      *(undefined1 *)(lVar9 + 0x2240) = 0;
      *(byte *)(lVar9 + 0x2241) = (byte)(*(uint *)(lVar9 + 0x20f0) >> 0x15) & 1;
    }
    if ((*(byte *)(lVar9 + 0x28f4) & 0x10) != 0) {
      FUN_1803f5060("[nav] NavInitRequest: ApplyResult: NavID 0x%08X in Layer %d Window \"%s\"\n",
                    iVar14,*(undefined4 *)(lVar9 + 0x2074),
                    *(undefined8 *)(*(longlong *)(lVar9 + 0x2068) + 8));
    }
    FUN_1803ef480(*(undefined4 *)(lVar9 + 0x20d8),*(undefined4 *)(lVar9 + 0x2074),
                  *(undefined4 *)(lVar9 + 0x20dc));
    *(undefined1 *)(lVar9 + 0x2063) = 1;
    if (*(longlong *)(lVar9 + 0x2100) != -1) {
      *(longlong *)(lVar9 + 0x20c0) = *(longlong *)(lVar9 + 0x2100);
    }
    if (*(char *)(lVar9 + 0x20cb) != '\0') {
      FUN_1803ef360();
    }
  }
  *(undefined2 *)(lVar9 + 0x20ca) = 0;
  *(undefined4 *)(lVar9 + 0x20d8) = 0;
  if (*(char *)(lVar9 + 0x2108) != '\0') {
    FUN_1803f1d30();
  }
  *(undefined4 *)(lVar9 + 0x214c) = 0;
  *(undefined2 *)(lVar9 + 0x2108) = 0;
  if (('\0' < *(char *)(lVar9 + 0x20c8)) &&
     (cVar10 = *(char *)(lVar9 + 0x20c8) + -1, *(char *)(lVar9 + 0x20c8) = cVar10, cVar10 == '\0'))
  {
    *(undefined1 *)(lVar9 + 0x2060) = 1;
  }
  local_b4[0] = unaff_R15D & 0xffffff00;
  uVar24 = 1;
  if ((((*(char *)(lVar9 + 0x2062) != '\0') && (*(char *)(lVar9 + 0x2063) != '\0')) &&
      (*(char *)(lVar9 + 0x2060) != '\0')) && (*(char *)(lVar9 + 0x2061) != '\0')) {
    local_b4[0] = (uint)(*(longlong *)(lVar9 + 0x2068) != 0);
  }
  cVar10 = (char)local_b4[0];
  lVar5 = *(longlong *)(lVar9 + 0x2068);
  *(undefined1 *)(lVar9 + 0x2062) = 0;
  if (lVar5 != 0) {
    lVar16 = lVar5;
    do {
      if ((*(longlong *)(lVar16 + 0x3c0) == lVar16) ||
         ((*(uint *)(lVar16 + 0x14) & 0x14000000) != 0)) {
        if (lVar16 != lVar5) {
          *(longlong *)(lVar16 + 1000) = lVar5;
        }
        break;
      }
      lVar16 = *(longlong *)(lVar16 + 0x3b0);
    } while (lVar16 != 0);
  }
  lVar5 = *(longlong *)(lVar9 + 0x2068);
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 1000) != 0)) && (*(int *)(lVar9 + 0x2074) == 0)) {
    *(undefined8 *)(lVar5 + 1000) = 0;
  }
  FUN_1803f29e0();
  if ((((bVar19 == 0) && (!bVar7)) || (*(longlong *)(lVar9 + 0x2068) == 0)) ||
     ((*(uint *)(*(longlong *)(lVar9 + 0x2068) + 0x14) & 0x10000) != 0)) {
    *(undefined1 *)(lVar9 + 0xe5) = 0;
LAB_1803f0d28:
    if (*(longlong *)(lVar9 + 0x2250) != 0) goto LAB_1803f0c78;
    uVar11 = 0;
  }
  else {
    *(undefined1 *)(lVar9 + 0xe5) = 1;
    if ((*(int *)(lVar9 + 0x2064) == 0) || (*(char *)(lVar9 + 0x2060) == '\0')) goto LAB_1803f0d28;
LAB_1803f0c78:
    uVar11 = 1;
  }
  *(undefined1 *)(lVar9 + 0xe6) = uVar11;
  FUN_1803f2140();
  lVar5 = DAT_180ca0a50;
  uVar3 = *(uint *)(DAT_180ca0a50 + 0x28);
  *(undefined8 *)(DAT_180ca0a50 + 0x20a8) = 0;
  lVar16 = lVar5;
  if (((uVar3 & 1) != 0) || ((uVar3 & 2) != 0)) {
    plVar6 = *(longlong **)(lVar5 + 0x2068);
    if (plVar6 != (longlong *)0x0) {
      if (((uVar3 & 1) == 0) ||
         (((((*(float *)(lVar5 + 0x2ac) <= 0.0 && *(float *)(lVar5 + 0x2ac) != 0.0 ||
             (*(char *)(lVar5 + 0x2a4) != '\0')) ||
            ((*(char *)(lVar5 + 0x1e9c) != '\0' && (*(int *)(lVar5 + 0x1578) != -1)))) ||
           (*(int *)(lVar5 + 0x1710) != -1)) &&
          ((cVar12 = FUN_1803e9470(0x245,0,0xffffffff), cVar12 == '\0' ||
           (*(int *)(lVar5 + 0x130) != 0x2000)))))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (((uVar3 & 2) == 0) || (cVar12 = FUN_1803e9470(0x27c,0,0xffffffff), cVar12 == '\0')) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      bVar19 = local_b7;
      if (bVar8 || bVar7) {
        *(undefined4 *)(lVar5 + 0x20a8) = *(undefined4 *)(lVar5 + 0x2064);
        *(int *)(lVar5 + 0x20ac) = (int)plVar6[2];
        iVar14 = FUN_1803d7830("#CLOSE",0,
                               *(undefined4 *)(plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4))
        ;
        if (*(int *)(*plVar6 + 0x155c) == iVar14) {
          FUN_1803f5630(iVar14,0xb,"#CLOSE");
          lVar16 = DAT_180ca0a50;
        }
        if (*(int *)(lVar5 + 0x2064) == iVar14) {
LAB_1803f0e2a:
          *(undefined4 *)(lVar5 + 0x20a8) = *(undefined4 *)(*(longlong *)(lVar5 + 0x2068) + 0x8c);
        }
        else {
          plVar6 = *(longlong **)(lVar5 + 0x2068);
          iVar14 = FUN_1803d7830("#COLLAPSE",0,
                                 *(undefined4 *)
                                  (plVar6[0x22] + -4 + (longlong)(int)plVar6[0x21] * 4));
          if (*(int *)(*plVar6 + 0x155c) == iVar14) {
            FUN_1803f5630(iVar14,0xb,"#COLLAPSE");
            lVar16 = DAT_180ca0a50;
          }
          if (*(int *)(lVar5 + 0x2064) == iVar14) goto LAB_1803f0e2a;
        }
        *(undefined4 *)(lVar5 + 0x20b8) = 2;
        FUN_1803ef360();
        bVar19 = local_b7;
      }
    }
  }
  iVar14 = *(int *)(lVar9 + 0x2064);
  *(undefined8 *)(lVar9 + 0x2080) = 0;
  *(undefined4 *)(lVar9 + 0x207c) = 0;
  *(undefined4 *)(lVar9 + 0x2088) = 0;
  if ((((iVar14 != 0) && (*(char *)(lVar9 + 0x2060) != '\0')) &&
      (*(longlong *)(lVar9 + 0x2250) == 0)) &&
     ((*(longlong *)(lVar9 + 0x2068) != 0 &&
      ((*(uint *)(*(longlong *)(lVar9 + 0x2068) + 0x14) & 0x10000) == 0)))) {
    if (((bVar19 == 0) || (*(char *)(lVar16 + 500) == '\0')) ||
       (((*(char *)(lVar16 + 0x1e9c) != '\0' && (*(int *)(lVar16 + 0x1578) != -1)) ||
        (*(int *)(lVar16 + 0x168c) != -1)))) {
      if (local_b8 != '\0') {
        uVar21 = 0x27d;
        if (*(char *)(lVar9 + 0x71) != '\0') {
          uVar21 = 0x27b;
        }
        pcVar15 = (char *)FUN_1803d6470(uVar21);
        if ((*pcVar15 != '\0') &&
           (cVar10 = FUN_1803eb1c0(uVar21 & 0xffffffff,0xffffffff), cVar10 != '\0'))
        goto LAB_1803f0f25;
      }
      bVar7 = false;
LAB_1803f0f71:
      bVar8 = false;
    }
    else {
LAB_1803f0f25:
      bVar7 = true;
      if ((local_b7 == 0) || (cVar10 = FUN_1803e9470(0x20c,0,0xffffffff), cVar10 == '\0')) {
        if (local_b8 != '\0') {
          uVar18 = 0x27d;
          if (*(char *)(lVar9 + 0x71) != '\0') {
            uVar18 = 0x27b;
          }
          cVar10 = FUN_1803e9470(uVar18,0,0xffffffff);
          if (cVar10 != '\0') goto LAB_1803f0f68;
        }
        goto LAB_1803f0f71;
      }
LAB_1803f0f68:
      bVar8 = true;
    }
    if ((local_b7 == 0) ||
       ((cVar10 = FUN_1803e9470(0x20d,0,0xffffffff), cVar10 == '\0' &&
        (cVar10 = FUN_1803e9470(0x273,0,0xffffffff), cVar10 == '\0')))) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x01';
    }
    cVar12 = '\0';
    if ((bVar7) && (local_b8 != '\0')) {
      uVar20 = 0x27d;
      if (*(char *)(lVar9 + 0x71) != '\0') {
        uVar20 = 0x27b;
      }
      cVar12 = '\0';
      pcVar15 = (char *)FUN_1803d6470(uVar20);
      if ((((*pcVar15 != cVar12) && (cVar13 = FUN_1803eb1c0(uVar20,0xffffffff), cVar13 != '\0')) &&
          ((*(uint *)(lVar9 + 0x2078) & 0x100000) != 0)) &&
         ((*(float *)(pcVar15 + 8) <= DAT_1808ac21c && DAT_1808ac21c != *(float *)(pcVar15 + 8) &&
          (DAT_1808ac21c <= *(float *)(pcVar15 + 4))))) {
        cVar12 = '\x01';
      }
    }
    iVar4 = *(int *)(lVar9 + 0x1578);
    if (iVar4 == 0) {
      if (bVar8) {
        *(int *)(lVar9 + 0x207c) = iVar14;
        *(undefined4 *)(lVar9 + 0x2088) = 2;
      }
LAB_1803f1037:
      if ((cVar10 != '\0') || (cVar12 != '\0')) {
        *(int *)(lVar9 + 0x207c) = iVar14;
        *(undefined4 *)(lVar9 + 0x2088) = 1;
      }
      if ((iVar4 == 0) || (iVar4 == iVar14)) {
        if ((bVar7 || cVar10 != '\0') || (cVar12 != '\0')) {
          *(int *)(lVar9 + 0x2080) = iVar14;
        }
        if (((iVar4 == 0) || (iVar4 == iVar14)) && ((bVar8 || cVar10 != '\0' || (cVar12 != '\0'))))
        {
          *(int *)(lVar9 + 0x2084) = iVar14;
          *(int *)(lVar16 + 0x20a0) = iVar14;
          *(undefined4 *)(lVar16 + 0x20a4) = 0x3dcccccd;
        }
      }
    }
    else if (iVar4 == iVar14) goto LAB_1803f1037;
    cVar10 = (char)local_b4[0];
  }
  if ((*(longlong *)(lVar9 + 0x2068) == 0) ||
     ((*(uint *)(*(longlong *)(lVar9 + 0x2068) + 0x14) & 0x10000) == 0)) {
    if ((*(char *)(lVar9 + 0x77) != '\0') && (*(char *)(lVar9 + 0x20c8) == '\0')) {
      *(undefined1 *)(lVar9 + 0x2060) = 1;
    }
  }
  else {
    *(undefined1 *)(lVar9 + 0x2060) = 0;
  }
  fVar26 = *(float *)(lVar9 + 0x20a4);
  if (0.0 < fVar26) {
    fVar25 = fVar26 - *(float *)(lVar9 + 0x40);
    fVar26 = 0.0;
    if (0.0 <= fVar25) {
      fVar26 = fVar25;
    }
    *(float *)(lVar9 + 0x20a4) = fVar26;
  }
  if (fVar26 == 0.0) {
    *(undefined4 *)(lVar9 + 0x20a0) = 0;
  }
  iVar14 = *(int *)(lVar9 + 0x20b0);
  if (iVar14 != 0) {
    *(int *)(lVar9 + 0x2084) = iVar14;
    *(int *)(lVar9 + 0x2080) = iVar14;
    *(int *)(lVar9 + 0x207c) = iVar14;
    *(undefined4 *)(lVar9 + 0x2088) = *(undefined4 *)(lVar9 + 0x20b4);
  }
  *(undefined4 *)(lVar9 + 0x20b0) = 0;
  FUN_1803f14f0();
  lVar5 = DAT_180ca0a50;
  if ((((*(int *)(lVar9 + 0x2118) == -1) &&
       (lVar16 = *(longlong *)(DAT_180ca0a50 + 0x2068), lVar16 != 0)) &&
      (*(longlong *)(DAT_180ca0a50 + 0x2250) == 0)) &&
     ((((*(uint *)(lVar16 + 0x14) & 0x10000) == 0 && (*(char *)(DAT_180ca0a50 + 0x2242) != '\0')) &&
      ((cVar12 = FUN_1803e9470(0x200,1,0xffffffff), cVar12 != '\0' &&
       ((*(char *)(lVar5 + 300) == '\0' && (*(char *)(lVar5 + 0x12e) == '\0')))))))) {
    if ((*(byte *)(lVar5 + 0x28) & 1) == 0) {
      if (*(char *)(lVar5 + 0x12d) == '\0') {
        uVar24 = (uint)(*(int *)(lVar5 + 0x1578) != 0);
      }
      else {
        uVar24 = 0xffffffff;
      }
    }
    else if (*(char *)(lVar5 + 0x12d) == '\0') {
      if ((*(char *)(lVar5 + 0x2060) == '\0') && (*(int *)(lVar5 + 0x1578) == 0)) {
        uVar24 = 0;
      }
    }
    else {
      uVar24 = 0xffffffff;
    }
    *(uint *)(lVar5 + 0x2148) = uVar24;
    uVar18 = 3;
    if (*(char *)(lVar16 + 0xd3) != '\0') {
      uVar18 = 0x21;
    }
    FUN_1803f0230(0xffffffff,((int)uVar24 >> 0x1f) + 3,0x1400,uVar18);
    *(undefined4 *)(lVar5 + 0x214c) = 0xffffffff;
  }
  if ((*(char *)(lVar5 + 0x2109) == '\0') && (*(char *)(lVar5 + 0x20ca) == '\0')) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  *(undefined1 *)(lVar5 + 0x20c9) = uVar11;
  lVar16 = *(longlong *)(lVar9 + 0x2068);
  *(undefined1 *)(lVar9 + 0x2063) = 0;
  fVar26 = DAT_1808acda0;
  fVar25 = DAT_1808ac34c;
  if (((lVar16 == 0) || ((*(uint *)(lVar16 + 0x14) & 0x10000) != 0)) ||
     (*(longlong *)(lVar9 + 0x2250) != 0)) goto LAB_1803f144c;
  fVar28 = (float)(int)(*(float *)(lVar16 + 0x2c0) * DAT_1808acb08 * *(float *)(lVar9 + 0x40) +
                       DAT_1808ac1f4);
  if (((*(short *)(lVar16 + 0x174) == 0) && (*(char *)(lVar16 + 0x17a) != '\0')) &&
     (iVar14 = *(int *)(lVar9 + 0x2118), iVar14 != -1)) {
    fVar27 = DAT_1808acda0;
    if (iVar14 == 0) {
LAB_1803f1302:
      *(undefined4 *)(lVar16 + 0xb0) = 0;
      *(undefined4 *)(lVar16 + 0xb8) = 0;
      *(float *)(lVar16 + 0xa8) = (float)(int)(fVar27 * fVar28 + *(float *)(lVar16 + 0x98));
    }
    else if (iVar14 == 1) {
      fVar27 = DAT_1808ac34c;
      goto LAB_1803f1302;
    }
    if ((iVar14 == 2) || (fVar26 = fVar25, iVar14 == 3)) {
      *(undefined4 *)(lVar16 + 0xb4) = 0;
      *(undefined4 *)(lVar16 + 0xbc) = 0;
      *(float *)(lVar16 + 0xac) = (float)(int)(fVar26 * fVar28 + *(float *)(lVar16 + 0x9c));
    }
  }
  if (local_b8 != '\0') {
    fVar26 = *(float *)(lVar5 + 0x9d0) - *(float *)(lVar5 + 0x9c0);
    fVar27 = *(float *)(lVar5 + 0x9f0) - *(float *)(lVar5 + 0x9e0);
    if ((*(char *)(lVar5 + 0x954) == '\0') || (*(char *)(lVar5 + 0x1c1c) != '\0')) {
      if ((*(char *)(lVar5 + 0x964) != '\0') && (*(char *)(lVar5 + 0x1c28) == '\0')) {
        fVar25 = DAT_1808ac864;
      }
    }
    else {
      fVar25 = DAT_1808ac0c0;
    }
    if ((fVar26 != 0.0) && (*(char *)(lVar16 + 200) != '\0')) {
      *(undefined4 *)(lVar16 + 0xb0) = 0;
      *(undefined4 *)(lVar16 + 0xb8) = 0;
      *(float *)(lVar16 + 0xa8) = (float)(int)(fVar26 * fVar28 * fVar25 + *(float *)(lVar16 + 0x98))
      ;
    }
    if (fVar27 != 0.0) {
      *(undefined4 *)(lVar16 + 0xb4) = 0;
      *(undefined4 *)(lVar16 + 0xbc) = 0;
      *(float *)(lVar16 + 0xac) = (float)(int)(fVar27 * fVar28 * fVar25 + *(float *)(lVar16 + 0x9c))
      ;
    }
  }
LAB_1803f144c:
  if ((local_b7 == 0) && (local_b8 == '\0')) {
    *(undefined2 *)(lVar9 + 0x2060) = 0;
    cVar10 = '\0';
  }
  if (((cVar10 != '\0') && (*(char *)(lVar9 + 0x72) != '\0')) &&
     ((*(byte *)(lVar9 + 0x2c) & 4) != 0)) {
    puVar17 = (undefined4 *)FUN_1803f06a0(local_b4,0x4000000);
    uVar20 = *puVar17;
    uVar2 = puVar17[1];
    *(undefined4 *)(lVar5 + 0xae8) = uVar20;
    *(undefined4 *)(lVar5 + 0xaec) = uVar2;
    *(undefined4 *)(lVar5 + 0x110) = uVar20;
    *(undefined4 *)(lVar5 + 0x114) = uVar2;
    *(undefined8 *)(lVar5 + 0xfc) = 0;
    *(undefined1 *)(lVar5 + 0xe3) = 1;
  }
  *(undefined4 *)(lVar9 + 0x2144) = 0;
  return;
}



/* ===== 1803f14f0 FUN_1803f14f0 ===== */

/* WARNING: Removing unreachable block (ram,0x0001803f1c19) */

void FUN_1803f14f0(void)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  float *pfVar6;
  char *pcVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
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
  undefined1 local_res18 [16];
  
  lVar4 = DAT_180ca0a50;
  uVar11 = *(uint *)(DAT_180ca0a50 + 0x28);
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x2068);
  if (((uVar11 & 2) == 0) || ((*(byte *)(DAT_180ca0a50 + 0x2c) & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  fVar17 = 0.0;
  if ((*(char *)(DAT_180ca0a50 + 0x210a) == '\0') || (lVar1 == 0)) {
    *(undefined4 *)(DAT_180ca0a50 + 0x2118) = 0xffffffff;
    *(undefined8 *)(lVar4 + 0x210c) = 0;
    if ((lVar1 != 0) &&
       ((*(longlong *)(lVar4 + 0x2250) == 0 && ((*(uint *)(lVar1 + 0x14) & 0x10000) == 0)))) {
      uVar10 = *(uint *)(DAT_180ca0a50 + 0x1e98);
      if (((uVar10 & 1) == 0) &&
         (((bVar2 && (cVar5 = FUN_1803e9470(0x27e,5,0xffffffff), cVar5 != '\0')) ||
          (((uVar11 & 1) != 0 && (cVar5 = FUN_1803e9470(0x201,5,0xffffffff), cVar5 != '\0')))))) {
        *(undefined4 *)(lVar4 + 0x2118) = 0;
      }
      if (((uVar10 & 2) == 0) &&
         (((bVar2 && (cVar5 = FUN_1803e9470(0x27f,5,0xffffffff), cVar5 != '\0')) ||
          (((uVar11 & 1) != 0 && (cVar5 = FUN_1803e9470(0x202,5,0xffffffff), cVar5 != '\0')))))) {
        *(undefined4 *)(lVar4 + 0x2118) = 1;
      }
      if (((uVar10 & 4) == 0) &&
         (((bVar2 && (cVar5 = FUN_1803e9470(0x280,5,0xffffffff), cVar5 != '\0')) ||
          (((uVar11 & 1) != 0 && (cVar5 = FUN_1803e9470(0x203,5,0xffffffff), cVar5 != '\0')))))) {
        *(undefined4 *)(lVar4 + 0x2118) = 2;
      }
      if (((uVar10 & 8) == 0) &&
         (((bVar2 && (cVar5 = FUN_1803e9470(0x281,5,0xffffffff), cVar5 != '\0')) ||
          (((uVar11 & 1) != 0 && (cVar5 = FUN_1803e9470(0x204,5,0xffffffff), cVar5 != '\0')))))) {
        *(undefined4 *)(lVar4 + 0x2118) = 3;
      }
    }
    *(undefined4 *)(lVar4 + 0x2120) = *(undefined4 *)(lVar4 + 0x2118);
    *(undefined4 *)(lVar4 + 0x2134) = 0x7f7fffff;
    *(undefined4 *)(lVar4 + 0x2138) = 0x7f7fffff;
    *(undefined4 *)(lVar4 + 0x213c) = 0xff7fffff;
    *(undefined4 *)(lVar4 + 0x2140) = 0xff7fffff;
LAB_1803f1729:
    if (lVar1 != 0) goto LAB_1803f172e;
LAB_1803f1747:
    fVar12 = 0.0;
  }
  else {
    if ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 0x10) == 0) goto LAB_1803f1729;
    FUN_1803f5060("[nav] NavMoveRequestForward %d\n",*(undefined4 *)(DAT_180ca0a50 + 0x2118));
LAB_1803f172e:
    if ((*(int *)(lVar4 + 0x2118) != -1) || ((uVar11 & 1) == 0)) goto LAB_1803f1747;
    fVar12 = (float)FUN_1803f2350();
  }
  *(undefined1 *)(lVar4 + 0x210a) = 0;
  if (*(int *)(lVar4 + 0x2118) != -1) {
    FUN_1803f0230(*(int *)(lVar4 + 0x2118),*(undefined4 *)(lVar4 + 0x2120),
                  *(undefined4 *)(lVar4 + 0x210c),*(undefined4 *)(lVar4 + 0x2110));
  }
  fVar3 = DAT_1808acd08;
  cVar5 = *(char *)(lVar4 + 0x2108);
  if (cVar5 == '\0') {
LAB_1803f1ae5:
    if (lVar1 != 0) {
LAB_1803f1a8d:
      lVar8 = (longlong)*(int *)(lVar4 + 0x2074);
      fVar15 = *(float *)(lVar1 + 0x3f8 + lVar8 * 0x10);
      pfVar6 = (float *)(lVar1 + 0x400 + lVar8 * 0x10);
      if ((*pfVar6 <= fVar15 && fVar15 != *pfVar6) ||
         (fVar13 = *(float *)(lVar1 + 0x3fc + lVar8 * 0x10),
         pfVar6 = (float *)(lVar1 + 0x404 + lVar8 * 0x10), *pfVar6 <= fVar13 && fVar13 != *pfVar6))
      {
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar14 = 0.0;
      }
      else {
        fVar16 = *(float *)(lVar1 + 0x400 + lVar8 * 0x10);
        fVar14 = *(float *)(lVar1 + 0x404 + lVar8 * 0x10);
        fVar17 = fVar13;
      }
      fVar15 = fVar15 + *(float *)(lVar1 + 0x128);
      fVar17 = fVar17 + *(float *)(lVar1 + 300);
      fVar16 = fVar16 + *(float *)(lVar1 + 0x128);
      fVar14 = fVar14 + *(float *)(lVar1 + 300);
      if ((*(uint *)(lVar4 + 0x210c) >> 0xb & 1) != 0) {
        if ((((*(float *)(lVar1 + 0x228) <= fVar15) && (*(float *)(lVar1 + 0x22c) <= fVar17)) &&
            (fVar16 <= *(float *)(lVar1 + 0x230))) && (fVar14 <= *(float *)(lVar1 + 0x234))) {
          *(uint *)(lVar4 + 0x210c) = *(uint *)(lVar4 + 0x210c) | 0x20;
        }
        *(float *)(lVar4 + 0x2140) = fVar14;
        fVar13 = fVar17 + fVar12;
        *(float *)(lVar4 + 0x2134) = fVar15;
        *(float *)(lVar4 + 0x213c) = fVar16;
        fVar14 = fVar14 + fVar12;
        *(float *)(lVar4 + 0x2138) = fVar17;
        if (fVar13 < fVar17) {
          *(float *)(lVar4 + 0x2138) = fVar13;
        }
        fVar17 = fVar13;
        if (*(float *)(lVar4 + 0x2140) <= fVar14 && fVar14 != *(float *)(lVar4 + 0x2140)) {
          *(float *)(lVar4 + 0x2140) = fVar14;
        }
      }
      if (*(char *)(lVar4 + 0x2108) != '\0') {
        uVar11 = *(uint *)(lVar4 + 0x2118);
        lVar1 = *(longlong *)(lVar1 + 0x3d8);
        fVar12 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x2068) + 0x128);
        fVar13 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x2068) + 300);
        if ((*(byte *)(lVar4 + 0x210c) & 0x80) == 0) {
          if (*(float *)(lVar1 + 0x418 + lVar8 * 8) == fVar3) {
            fVar21 = fVar15 + DAT_1808ac34c;
            if (fVar16 <= fVar15 + DAT_1808ac34c) {
              fVar21 = fVar16;
            }
            *(float *)(lVar1 + 0x418 + lVar8 * 8) = fVar21 - fVar12;
          }
          if (*(float *)(lVar1 + 0x41c + lVar8 * 8) == fVar3) {
            *(float *)(lVar1 + 0x41c + lVar8 * 8) = (fVar14 + fVar17) * DAT_1808ac1f4 - fVar13;
          }
        }
        if ((uVar11 - 2 < 2) && (fVar21 = *(float *)(lVar1 + 0x418 + lVar8 * 8), fVar21 != fVar3)) {
          fVar15 = fVar21 + fVar12;
          fVar16 = fVar15;
        }
        else if (uVar11 < 2) {
          fVar12 = *(float *)(lVar1 + 0x41c + lVar8 * 8);
          if (fVar12 != fVar3) {
            fVar17 = fVar12 + fVar13;
            fVar14 = fVar17;
          }
        }
      }
      goto LAB_1803f1af6;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x2064) == 0) {
      if ((*(byte *)(lVar4 + 0x28f4) & 0x10) != 0) {
        if (lVar1 == 0) {
          pcVar7 = "<NULL>";
        }
        else {
          pcVar7 = *(char **)(lVar1 + 8);
        }
        FUN_1803f5060("[nav] NavInitRequest: from move, window \"%s\", layer=%d\n",pcVar7,
                      *(undefined4 *)(lVar4 + 0x2074));
        cVar5 = *(char *)(lVar4 + 0x2108);
      }
      *(undefined2 *)(lVar4 + 0x20ca) = 0x101;
      *(undefined4 *)(lVar4 + 0x20d8) = 0;
      if (*(char *)(lVar4 + 0x76) != '\0') {
        *(undefined1 *)(lVar4 + 0x2060) = 1;
      }
      if (cVar5 == '\0') goto LAB_1803f1ae5;
    }
    piVar9 = (int *)(lVar4 + 0x2074);
    if ((*(int *)(lVar4 + 0x20b8) != 3) || (*piVar9 != 0)) goto LAB_1803f1ae5;
    if (lVar1 != 0) {
      uVar11 = *(uint *)(lVar4 + 0x210c);
      fVar15 = *(float *)(lVar1 + 0x128);
      fVar13 = *(float *)(lVar1 + 300);
      fVar16 = *(float *)(lVar1 + 0x230);
      uVar10 = uVar11 & 10;
      fVar14 = *(float *)(lVar1 + 0x234);
      fVar21 = *(float *)(lVar1 + 0x228);
      fVar19 = *(float *)(lVar1 + 0x22c);
      pfVar6 = (float *)FUN_1803ecf50(local_res18,lVar1);
      uVar11 = uVar11 & 5;
      if ((uVar11 != 0) && (uVar10 != 0)) goto LAB_1803f1ae5;
      fVar18 = pfVar6[1] - *(float *)(lVar1 + 0x9c);
      fVar20 = *pfVar6 - *(float *)(lVar1 + 0x98);
      lVar8 = (longlong)*piVar9;
      fVar19 = ((fVar19 - DAT_1808ac34c) - fVar13) + fVar18;
      fVar21 = fVar20 + ((fVar21 - DAT_1808ac34c) - fVar15);
      fVar20 = fVar20 + ((fVar16 + DAT_1808ac34c) - fVar15);
      fVar18 = fVar18 + ((fVar14 + DAT_1808ac34c) - fVar13);
      if ((((*(float *)(lVar1 + 0x3f8 + lVar8 * 0x10) < fVar21) ||
           (*(float *)(lVar1 + 0x3fc + lVar8 * 0x10) < fVar19)) ||
          (fVar20 < *(float *)(lVar1 + 0x400 + lVar8 * 0x10))) ||
         (fVar18 < *(float *)(lVar1 + 0x404 + lVar8 * 0x10))) {
        if ((*(byte *)(lVar4 + 0x28f4) & 0x10) != 0) {
          FUN_1803f5060("[nav] NavMoveRequest: clamp NavRectRel for gamepad move\n");
        }
        fVar15 = *(float *)(lVar1 + 0x2c0) * DAT_1808ac1f4;
        if (uVar11 == 0) {
          fVar16 = fVar20 - fVar21;
          if (fVar15 <= fVar20 - fVar21) {
            fVar16 = fVar15;
          }
          fVar13 = fVar16 + fVar21;
          fVar16 = fVar20 - fVar16;
        }
        else {
          fVar13 = DAT_1808aceb0;
          fVar16 = fVar3;
        }
        if (uVar10 == 0) {
          fVar14 = fVar18 - fVar19;
          if (fVar15 <= fVar18 - fVar19) {
            fVar14 = fVar15;
          }
          fVar15 = fVar14 + fVar19;
          fVar14 = fVar18 - fVar14;
        }
        else {
          fVar15 = DAT_1808aceb0;
          fVar14 = fVar3;
        }
        lVar8 = (longlong)*piVar9;
        fVar21 = *(float *)(lVar1 + 0x3fc + lVar8 * 0x10);
        if (fVar15 <= fVar21) {
          fVar19 = fVar14;
          if (fVar21 <= fVar14) {
            fVar19 = fVar21;
          }
        }
        else {
          fVar19 = fVar15;
        }
        fVar21 = *(float *)(lVar1 + 0x3f8 + lVar8 * 0x10);
        if (fVar13 <= fVar21) {
          fVar18 = fVar16;
          if (fVar21 <= fVar16) {
            fVar18 = fVar21;
          }
        }
        else {
          fVar18 = fVar13;
        }
        *(float *)(lVar1 + 0x3f8 + lVar8 * 0x10) = fVar18;
        *(float *)(lVar1 + 0x3fc + lVar8 * 0x10) = fVar19;
        fVar21 = *(float *)(lVar1 + 0x404 + lVar8 * 0x10);
        if ((fVar15 <= fVar21) && (fVar15 = fVar14, fVar21 <= fVar14)) {
          fVar15 = fVar21;
        }
        fVar14 = *(float *)(lVar1 + 0x400 + lVar8 * 0x10);
        if ((fVar13 <= fVar14) && (fVar13 = fVar16, fVar14 <= fVar16)) {
          fVar13 = fVar14;
        }
        *(float *)(lVar1 + 0x400 + lVar8 * 0x10) = fVar13;
        *(float *)(lVar1 + 0x404 + lVar8 * 0x10) = fVar15;
        *(undefined4 *)(lVar4 + 0x2064) = 0;
      }
      goto LAB_1803f1a8d;
    }
  }
  fVar17 = 0.0;
  fVar15 = 0.0;
  fVar14 = 0.0;
  fVar16 = 0.0;
LAB_1803f1af6:
  *(float *)(lVar4 + 0x2124) = fVar15;
  *(float *)(lVar4 + 0x2128) = fVar17;
  *(float *)(lVar4 + 0x212c) = fVar16;
  *(float *)(lVar4 + 0x2130) = fVar14;
  return;
}



/* ===== 1803f1d30 FUN_1803f1d30 ===== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803f1d30(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar3 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x2158) == 0) {
    if (*(int *)(DAT_180ca0a50 + 0x21c8) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)(DAT_180ca0a50 + 0x21c0);
    }
  }
  else {
    plVar7 = (longlong *)(DAT_180ca0a50 + 0x2150);
  }
  uVar5 = *(uint *)(DAT_180ca0a50 + 0x210c);
  if (((((uVar5 & 0x400) != 0) && (plVar7 == (longlong *)0x0)) &&
      ((*(int *)(DAT_180ca0a50 + 0x214c) == 1 || (*(int *)(DAT_180ca0a50 + 0x2148) == 0)))) &&
     (*(int *)(DAT_180ca0a50 + 0x2200) != 0)) {
    plVar7 = (longlong *)(DAT_180ca0a50 + 0x21f8);
  }
  if (*(int *)(DAT_180ca0a50 + 0x2118) - 2U < 2) {
    lVar8 = 4;
    puVar9 = (undefined8 *)((longlong)&local_res10 + 4);
    puVar10 = (undefined8 *)((longlong)local_res8 + 4);
  }
  else {
    lVar8 = 0;
    puVar9 = &local_res10;
    puVar10 = (undefined8 *)local_res8;
  }
  if (plVar7 == (longlong *)0x0) {
    if ((uVar5 & 0x400) != 0) {
      *(uint *)(DAT_180ca0a50 + 0x210c) = uVar5 | 0x4000;
    }
    if ((*(int *)(lVar3 + 0x2064) != 0) && ((*(uint *)(lVar3 + 0x210c) & 0x4000) == 0)) {
      FUN_1803ef360();
    }
    *(undefined4 *)
     (lVar8 + (longlong)*(int *)(lVar3 + 0x2074) * 8 + 0x418 +
     *(longlong *)(*(longlong *)(lVar3 + 0x2068) + 0x3d8)) = 0x7f7fffff;
    if ((*(byte *)(lVar3 + 0x28f4) & 0x10) != 0) {
      FUN_1803f5060("[nav] NavMoveSubmitted but not led to a result!\n");
      return;
    }
  }
  else {
    if ((((uVar5 & 0x20) != 0) && (*(int *)(DAT_180ca0a50 + 0x2190) != 0)) &&
       (*(int *)(DAT_180ca0a50 + 0x2190) != *(int *)(DAT_180ca0a50 + 0x2064))) {
      plVar7 = (longlong *)(DAT_180ca0a50 + 0x2188);
    }
    plVar1 = (longlong *)(DAT_180ca0a50 + 0x21c0);
    if (((plVar7 != plVar1) && (*(int *)(DAT_180ca0a50 + 0x21c8) != 0)) &&
       (*(longlong *)(*plVar1 + 0x3b0) == *(longlong *)(DAT_180ca0a50 + 0x2068))) {
      if ((*(float *)(DAT_180ca0a50 + 0x21e4) < *(float *)((longlong)plVar7 + 0x24)) ||
         ((*(float *)(DAT_180ca0a50 + 0x21e4) == *(float *)((longlong)plVar7 + 0x24) &&
          (*(float *)(DAT_180ca0a50 + 0x21e8) <= *(float *)(plVar7 + 5) &&
           *(float *)(plVar7 + 5) != *(float *)(DAT_180ca0a50 + 0x21e8))))) {
        plVar7 = plVar1;
      }
    }
    if (*(int *)(DAT_180ca0a50 + 0x2074) == 0) {
      uVar2 = *(undefined8 *)(*plVar7 + 0x128);
      fVar12 = (float)uVar2;
      fVar13 = (float)((ulonglong)uVar2 >> 0x20);
      local_28 = CONCAT44((float)((ulonglong)plVar7[2] >> 0x20) + fVar13,(float)plVar7[2] + fVar12);
      local_20 = CONCAT44((float)((ulonglong)plVar7[3] >> 0x20) + fVar13,(float)plVar7[3] + fVar12);
      FUN_1803ed160(local_res8,*plVar7,&local_28,*(undefined4 *)(DAT_180ca0a50 + 0x2110));
      if ((*(byte *)(lVar3 + 0x210c) & 0x40) != 0) {
        if (*(int *)(lVar3 + 0x2118) == 2) {
          uVar11 = *(undefined4 *)(*plVar7 + 0xa4);
        }
        else {
          uVar11 = 0;
        }
        lVar8 = *plVar7;
        *(undefined4 *)(lVar8 + 0xac) = uVar11;
        *(undefined4 *)(lVar8 + 0xb4) = 0;
        *(undefined4 *)(lVar8 + 0xbc) = 0;
      }
    }
    lVar8 = *(longlong *)(lVar3 + 0x2068);
    if (lVar8 != *plVar7) {
      if ((*(byte *)(lVar3 + 0x28f4) & 4) != 0) {
        FUN_1803f5060("[focus] NavMoveRequest: SetNavWindow(\"%s\")\n",*(undefined8 *)(*plVar7 + 8))
        ;
      }
      lVar8 = *plVar7;
      *(longlong *)(lVar3 + 0x2068) = lVar8;
      *(undefined8 *)(lVar3 + 0x20c0) = 0xffffffffffffffff;
    }
    if ((*(int *)(lVar3 + 0x1578) != (int)plVar7[1]) && ((*(uint *)(lVar3 + 0x210c) & 0x8000) == 0))
    {
      FUN_1803dd660(0,0);
      lVar8 = *(longlong *)(lVar3 + 0x2068);
    }
    iVar6 = (int)plVar7[1];
    uVar5 = *(uint *)(lVar3 + 0x210c);
    if (((*(int *)(lVar3 + 0x2064) != iVar6) || ((uVar5 >> 0xb & 1) != 0)) &&
       ((uVar5 >> 0xd & 1) == 0)) {
      *(undefined4 *)(lVar3 + 0x2230) = *(undefined4 *)(lVar3 + 0x2070);
      *(int *)(lVar3 + 0x2234) = (int)plVar7[1];
      *(undefined4 *)(lVar3 + 0x2238) = *(undefined4 *)((longlong)plVar7 + 0xc);
      *(undefined4 *)(lVar3 + 0x223c) = *(undefined4 *)(lVar3 + 0x2114);
      *(byte *)(lVar3 + 0x2240) = (byte)(uVar5 >> 10) & 1;
      *(byte *)(lVar3 + 0x2241) = (byte)(*(uint *)(plVar7 + 4) >> 0x15) & 1;
      iVar6 = (int)plVar7[1];
    }
    if ((*(byte *)(lVar3 + 0x28f4) & 0x10) != 0) {
      FUN_1803f5060("[nav] NavMoveRequest: result NavID 0x%08X in Layer %d Window \"%s\"\n",iVar6,
                    *(undefined4 *)(lVar3 + 0x2074),*(undefined8 *)(lVar8 + 8));
    }
    local_res8 = *(undefined1 (*) [8])
                  (*(longlong *)(*(longlong *)(lVar3 + 0x2068) + 0x3d8) + 0x418 +
                  (longlong)*(int *)(lVar3 + 0x2074) * 8);
    FUN_1803ef480((int)plVar7[1],(longlong)*(int *)(lVar3 + 0x2074),
                  *(undefined4 *)((longlong)plVar7 + 0xc),plVar7 + 2);
    if (plVar7[6] != -1) {
      *(longlong *)(lVar3 + 0x20c0) = plVar7[6];
    }
    if ((*(uint *)(lVar3 + 0x210c) & 0x400) == 0) {
      iVar6 = *(int *)(lVar3 + 0x2074);
      local_res10 = CONCAT44(((float)((ulonglong)plVar7[3] >> 0x20) +
                             (float)((ulonglong)plVar7[2] >> 0x20)) * _UNK_1808ad9f4,
                             ((float)plVar7[3] + (float)plVar7[2]) * _DAT_1808ad9f0);
      *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
      *(undefined1 (*) [8])
       (*(longlong *)(*(longlong *)(lVar3 + 0x2068) + 0x3d8) + 0x418 + (longlong)iVar6 * 8) =
           local_res8;
    }
    uVar5 = *(uint *)(lVar3 + 0x210c);
    if (((uVar5 >> 10 & 1) != 0) && ((*(uint *)(plVar7 + 4) & 0x100000) == 0)) {
      uVar5 = uVar5 & 0xffffefff;
      *(uint *)(lVar3 + 0x210c) = uVar5;
    }
    if ((uVar5 >> 0xc & 1) != 0) {
      *(int *)(lVar3 + 0x20b0) = (int)plVar7[1];
      uVar4 = 0;
      *(undefined4 *)(lVar3 + 0x20b4) = 0;
      if ((uVar5 >> 9 & 1) != 0) {
        uVar4 = 0x20;
        *(undefined4 *)(lVar3 + 0x20b4) = 0x20;
      }
      if ((uVar5 >> 10 & 1) != 0) {
        *(uint *)(lVar3 + 0x20b4) = uVar4 | 0xd;
      }
    }
    if ((uVar5 >> 0xe & 1) == 0) {
      FUN_1803ef360();
    }
  }
  return;
}



/* ===== 1803f2140 FUN_1803f2140 ===== */

void FUN_1803f2140(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar6 = DAT_180ca0a50;
  if (((*(uint *)(DAT_180ca0a50 + 0x28) & 2) == 0) || ((*(byte *)(DAT_180ca0a50 + 0x2c) & 1) == 0))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((*(uint *)(DAT_180ca0a50 + 0x28) & 1) == 0) ||
     (cVar7 = FUN_1803e9470(0x20e,0,0xffffffff), cVar7 == '\0')) {
    if (!bVar5) {
      return;
    }
    uVar8 = 0x27b;
    if (*(char *)(lVar6 + 0x71) != '\0') {
      uVar8 = 0x27d;
    }
    cVar7 = FUN_1803e9470(uVar8,0,0xffffffff);
    if (cVar7 == '\0') {
      return;
    }
  }
  if ((*(byte *)(lVar6 + 0x28f4) & 0x10) != 0) {
    FUN_1803f5060();
  }
  if (*(int *)(lVar6 + 0x1578) != 0) {
    FUN_1803dd660(0,0);
    return;
  }
  if (*(int *)(lVar6 + 0x2074) != 0) {
    FUN_1803f0450(0);
    FUN_1803ef360();
    return;
  }
  lVar2 = *(longlong *)(lVar6 + 0x2068);
  if ((((lVar2 != 0) && (lVar2 != *(longlong *)(lVar2 + 0x3c0))) &&
      (lVar3 = *(longlong *)(lVar2 + 0x3d8), (*(uint *)(lVar3 + 0x14) & 0x4000000) == 0)) &&
     (lVar4 = *(longlong *)(lVar3 + 0x3b0), lVar4 != 0)) {
    FUN_1803ef030(lVar4,0);
    fVar9 = (float)*(undefined8 *)(lVar3 + 0x28);
    fVar10 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x28) >> 0x20);
    fVar11 = (float)*(undefined8 *)(lVar4 + 0x128);
    fVar12 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x128) >> 0x20);
    local_18 = CONCAT44(fVar10 - fVar12,fVar9 - fVar11);
    local_10 = CONCAT44(((float)((ulonglong)*(undefined8 *)(lVar3 + 0x30) >> 0x20) + fVar10) -
                        fVar12,((float)*(undefined8 *)(lVar3 + 0x30) + fVar9) - fVar11);
    FUN_1803ef480(*(undefined4 *)(lVar3 + 0x90),0,0,&local_18);
    FUN_1803ef360();
    return;
  }
  iVar1 = *(int *)(lVar6 + 0x2020);
  if (((0 < iVar1) &&
      (lVar3 = *(longlong *)(((longlong)iVar1 + -1) * 0x58 + 8 + *(longlong *)(lVar6 + 0x2028)),
      lVar3 != 0)) && ((*(uint *)(lVar3 + 0x14) & 0x8000000) == 0)) {
    FUN_1803ee010(iVar1 + -1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
    return;
  }
  if ((*(char *)(lVar6 + 0x74) == '\0') && (*(char *)(lVar6 + 0x75) == '\0')) {
    cVar7 = '\0';
  }
  else {
    cVar7 = *(char *)(lVar6 + 0x75);
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x14) & 0x4000000) != 0)) {
      *(undefined4 *)(lVar2 + 0x3f0) = 0;
      cVar7 = *(char *)(lVar6 + 0x75);
    }
  }
  if (((*(char *)(lVar6 + 0x74) != '\0') || (cVar7 != '\0')) &&
     (*(undefined4 *)(lVar6 + 0x2064) = 0, cVar7 != '\0')) {
    FUN_1803ef030(0,0);
  }
  return;
}



/* ===== 1803f2350 FUN_1803f2350 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1803f2350(void)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x2068);
  if (((*(uint *)(lVar2 + 0x14) & 0x10000) == 0) && (*(longlong *)(DAT_180ca0a50 + 0x2250) == 0)) {
    if (*(char *)(DAT_180ca0a50 + 0x184) == '\0') {
      cVar6 = '\0';
    }
    else if (((*(char *)(DAT_180ca0a50 + 0x1e9c) == '\0') ||
             (*(int *)(DAT_180ca0a50 + 0x1578) == -1)) && (*(int *)(DAT_180ca0a50 + 0x1638) == -1))
    {
      cVar6 = '\x01';
    }
    else {
      cVar6 = '\0';
    }
    if (*(char *)(DAT_180ca0a50 + 0x194) == '\0') {
      cVar7 = '\0';
    }
    else if (((*(char *)(DAT_180ca0a50 + 0x1e9c) == '\0') ||
             (*(int *)(DAT_180ca0a50 + 0x1578) == -1)) && (*(int *)(DAT_180ca0a50 + 0x1644) == -1))
    {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    cVar4 = FUN_1803e9470(0x207,1,0xffffffff);
    cVar5 = FUN_1803e9470(0x208,1,0xffffffff);
    if ((cVar6 != cVar7) || (cVar4 != cVar5)) {
      if (*(int *)(lVar3 + 0x2074) != 0) {
        FUN_1803f0450(0);
      }
      if (((*(byte *)(lVar2 + 0x174) & 1) != 0) || (*(char *)(lVar2 + 0x17a) == '\0')) {
        lVar8 = (longlong)*(int *)(lVar3 + 0x2074);
        fVar11 = ((*(float *)(lVar2 + 0x234) - *(float *)(lVar2 + 0x22c)) -
                 *(float *)(lVar2 + 0x2c0)) +
                 (*(float *)(lVar2 + 0x404 + lVar8 * 0x10) -
                 *(float *)(lVar2 + 0x3fc + lVar8 * 0x10));
        fVar9 = 0.0;
        if (0.0 <= fVar11) {
          fVar9 = fVar11;
        }
        cVar6 = FUN_1803e9470(0x205,1,0);
        uVar10 = _UNK_1808adec4;
        if (cVar6 != '\0') {
          fVar9 = (float)((uint)fVar9 ^ DAT_1808adec0);
          *(undefined4 *)(lVar3 + 0x2118) = 3;
          *(undefined4 *)(lVar3 + 0x2120) = 2;
          *(undefined4 *)(lVar3 + 0x210c) = 0x810;
          goto LAB_1803f24e3;
        }
        cVar6 = FUN_1803e9470(0x206,1,0);
        if (cVar6 == '\0') {
          fVar9 = 0.0;
          if (cVar4 != '\0') {
            fVar9 = *(float *)(lVar2 + 0x3f8 + lVar8 * 0x10);
            pfVar1 = (float *)(lVar2 + 0x400 + lVar8 * 0x10);
            *(undefined4 *)(lVar2 + 0x404 + lVar8 * 0x10) = 0;
            *(undefined4 *)(lVar2 + 0x3fc + lVar8 * 0x10) = 0;
            if (*pfVar1 <= fVar9 && fVar9 != *pfVar1) {
              *(undefined4 *)(lVar2 + 0x400 + lVar8 * 0x10) = 0;
              *(undefined4 *)(lVar2 + 0x3f8 + lVar8 * 0x10) = 0;
            }
            fVar9 = 0.0;
            uVar10 = 0;
            *(undefined4 *)(lVar3 + 0x2118) = 3;
            *(undefined4 *)(lVar3 + 0x210c) = 0x50;
            goto LAB_1803f24e3;
          }
          if (cVar5 != '\0') {
            uVar10 = *(undefined4 *)(lVar2 + 0x44);
            fVar11 = *(float *)(lVar2 + 0x3f8 + lVar8 * 0x10);
            pfVar1 = (float *)(lVar2 + 0x400 + lVar8 * 0x10);
            *(undefined4 *)(lVar2 + 0x404 + lVar8 * 0x10) = uVar10;
            *(undefined4 *)(lVar2 + 0x3fc + lVar8 * 0x10) = uVar10;
            if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
              *(undefined4 *)(lVar2 + 0x400 + lVar8 * 0x10) = 0;
              *(undefined4 *)(lVar2 + 0x3f8 + lVar8 * 0x10) = 0;
            }
            *(undefined4 *)(lVar3 + 0x210c) = 0x50;
            goto LAB_1803f267c;
          }
        }
        else {
          *(undefined4 *)(lVar3 + 0x2120) = 3;
          *(undefined4 *)(lVar3 + 0x210c) = 0x810;
LAB_1803f267c:
          *(undefined4 *)(lVar3 + 0x2118) = 2;
        }
        uVar10 = 0;
        goto LAB_1803f24e3;
      }
      cVar6 = FUN_1803e9470(0x205,1,0xffffffff);
      if (cVar6 == '\0') {
        cVar6 = FUN_1803e9470(0x206,1,0xffffffff);
        if (cVar6 != '\0') {
          fVar9 = (*(float *)(lVar2 + 0x234) - *(float *)(lVar2 + 0x22c)) + *(float *)(lVar2 + 0x9c)
          ;
          goto LAB_1803f24ca;
        }
        if (cVar4 == '\0') {
          if (cVar5 == '\0') goto LAB_1803f24e0;
          *(undefined4 *)(lVar2 + 0xac) = *(undefined4 *)(lVar2 + 0xa4);
        }
        else {
          *(undefined4 *)(lVar2 + 0xac) = 0;
        }
      }
      else {
        fVar9 = *(float *)(lVar2 + 0x9c) - (*(float *)(lVar2 + 0x234) - *(float *)(lVar2 + 0x22c));
LAB_1803f24ca:
        *(float *)(lVar2 + 0xac) = fVar9;
      }
      *(undefined4 *)(lVar2 + 0xbc) = 0;
      *(undefined4 *)(lVar2 + 0xb4) = 0;
    }
  }
LAB_1803f24e0:
  fVar9 = 0.0;
  uVar10 = 0;
LAB_1803f24e3:
  return CONCAT44(uVar10,fVar9);
}



/* ===== 1803f26a0 FUN_1803f26a0 ===== */

void FUN_1803f26a0(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = DAT_180ca0a50;
  lVar4 = (longlong)*(int *)(DAT_180ca0a50 + 0x2074);
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x2068);
  iVar5 = *(int *)(DAT_180ca0a50 + 0x2118);
  uVar1 = *(uint *)(DAT_180ca0a50 + 0x210c);
  fVar8 = *(float *)(lVar2 + 0x3fc + lVar4 * 0x10);
  fVar11 = *(float *)(lVar2 + 0x404 + lVar4 * 0x10);
  if (*(int *)(DAT_180ca0a50 + 0x2074) == 1) {
    fVar9 = *(float *)(lVar2 + 0x30);
    fVar10 = *(float *)(lVar2 + 0x34);
  }
  else {
    fVar9 = *(float *)(lVar2 + 0x58) + *(float *)(lVar2 + 0x40);
    fVar10 = *(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 0x44);
  }
  if (iVar5 == 0) {
    if ((uVar1 & 5) == 0) {
      return;
    }
    fVar10 = fVar8;
    fVar6 = fVar9;
    if ((uVar1 & 4) != 0) {
      iVar5 = 2;
      fVar7 = (float)((uint)(fVar11 - fVar8) ^ DAT_1808adec0);
      fVar10 = fVar7 + fVar8;
      fVar11 = fVar7 + fVar11;
    }
  }
  else if (iVar5 == 1) {
    if ((uVar1 & 5) == 0) {
      return;
    }
    fVar9 = (float)(*(uint *)(lVar2 + 0x58) ^ DAT_1808adec0);
    fVar10 = fVar8;
    fVar6 = fVar9;
    if ((uVar1 & 4) != 0) {
      iVar5 = 3;
      fVar10 = fVar8 + (fVar11 - fVar8);
      fVar11 = fVar11 + (fVar11 - fVar8);
    }
  }
  else {
    fVar6 = *(float *)(lVar2 + 0x3f8 + lVar4 * 0x10);
    fVar9 = *(float *)(lVar2 + 0x400 + lVar4 * 0x10);
    if (iVar5 == 2) {
      if ((uVar1 & 10) == 0) {
        return;
      }
      fVar11 = fVar10;
      if ((uVar1 & 8) != 0) {
        iVar5 = 0;
        fVar8 = (float)((uint)(fVar9 - fVar6) ^ DAT_1808adec0);
        fVar9 = fVar8 + fVar9;
        fVar6 = fVar8 + fVar6;
      }
    }
    else {
      if (iVar5 != 3) {
        return;
      }
      if ((uVar1 & 10) == 0) {
        return;
      }
      fVar10 = (float)(*(uint *)(lVar2 + 0x5c) ^ DAT_1808adec0);
      fVar11 = fVar10;
      if ((uVar1 & 8) != 0) {
        iVar5 = 1;
        fVar8 = fVar9 - fVar6;
        fVar6 = fVar6 + fVar8;
        fVar9 = fVar9 + fVar8;
      }
    }
  }
  *(float *)(lVar2 + 0x3f8 + lVar4 * 0x10) = fVar6;
  *(float *)(lVar2 + 0x3fc + lVar4 * 0x10) = fVar10;
  *(float *)(lVar2 + 0x400 + lVar4 * 0x10) = fVar9;
  *(float *)(lVar2 + 0x404 + lVar4 * 0x10) = fVar11;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar3 + 0x2068) + 0x3d8) + 0x418 +
   (longlong)*(int *)(lVar3 + 0x2074) * 8) = 0x7f7fffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar3 + 0x2068) + 0x3d8) + 0x41c +
   (longlong)*(int *)(lVar3 + 0x2074) * 8) = 0x7f7fffff;
  *(undefined2 *)(lVar3 + 0x2108) = 0;
  *(undefined1 *)(lVar3 + 0x210a) = 1;
  *(bool *)(lVar3 + 0x20c9) = *(char *)(lVar3 + 0x20ca) != '\0';
  *(uint *)(lVar3 + 0x210c) = uVar1 | 0x80;
  *(int *)(lVar3 + 0x2120) = iVar5;
  return;
}



/* ===== 1803f28c0 FUN_1803f28c0 ===== */

void FUN_1803f28c0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = DAT_180ca0a50;
  if ((*(uint *)(*(longlong *)(DAT_180ca0a50 + 0x2250) + 0x14) & 0x8000000) != 0) {
    return;
  }
  iVar3 = (int)*(short *)(*(longlong *)(DAT_180ca0a50 + 0x2250) + 0xe2);
  uVar4 = iVar3 + param_1;
  if (-1 < (int)uVar4) {
    do {
      if (*(int *)(DAT_180ca0a50 + 0x14a8) <= (int)uVar4) break;
      lVar2 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x14b0) + (ulonglong)uVar4 * 8);
      if (((*(char *)(lVar2 + 0xcd) != '\0') && (lVar2 == *(longlong *)(lVar2 + 0x3c0))) &&
         ((*(uint *)(lVar2 + 0x14) & 0x20000) == 0)) {
        if (lVar2 != 0) goto LAB_1803f29a0;
        break;
      }
      uVar4 = uVar4 + param_1;
    } while (-1 < (int)uVar4);
  }
  if (param_1 < 0) {
    iVar5 = *(int *)(DAT_180ca0a50 + 0x14a8) + -1;
    if (iVar5 < 0) goto LAB_1803f2998;
  }
  else {
    iVar5 = 0;
  }
  do {
    if ((*(int *)(DAT_180ca0a50 + 0x14a8) <= iVar5) || (iVar5 == iVar3)) break;
    lVar2 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x14b0) + (longlong)iVar5 * 8);
    if ((*(char *)(lVar2 + 0xcd) != '\0') &&
       ((lVar2 == *(longlong *)(lVar2 + 0x3c0) && ((*(uint *)(lVar2 + 0x14) & 0x20000) == 0))))
    goto LAB_1803f299b;
    iVar5 = iVar5 + param_1;
  } while (-1 < iVar5);
LAB_1803f2998:
  lVar2 = 0;
LAB_1803f299b:
  if (lVar2 != 0) {
LAB_1803f29a0:
    *(longlong *)(DAT_180ca0a50 + 0x2258) = lVar2;
    *(longlong *)(lVar1 + 0x2250) = lVar2;
    *(undefined8 *)(lVar1 + 0x2284) = 0;
    *(undefined8 *)(lVar1 + 0x227c) = 0;
  }
  *(undefined1 *)(lVar1 + 0x2274) = 0;
  return;
}



/* ===== 1803f29e0 FUN_1803f29e0 ===== */

void FUN_1803f29e0(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res8;
  float local_resc;
  char local_res10;
  undefined4 local_res18;
  uint local_res20;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [14];
  
  lVar6 = DAT_180ca0a50;
  uVar15 = *(int *)(DAT_180ca0a50 + 0x2020) - 1;
  local_88 = 0;
  local_res10 = '\0';
  if (-1 < (int)uVar15) {
    do {
      lVar20 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x2028) + 8 + (ulonglong)uVar15 * 0x58);
      if ((lVar20 != 0) && ((*(uint *)(lVar20 + 0x14) & 0x8000000) != 0)) {
        *(undefined8 *)(DAT_180ca0a50 + 0x2250) = 0;
        lVar12 = 0;
        goto LAB_1803f2a6c;
      }
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  lVar12 = *(longlong *)(DAT_180ca0a50 + 0x2250);
  lVar20 = 0;
LAB_1803f2a6c:
  plVar1 = (longlong *)(lVar6 + 0x2250);
  if ((*(longlong *)(lVar6 + 0x2258) != 0) && (lVar12 == 0)) {
    fVar25 = *(float *)(lVar6 + 0x226c) - *(float *)(lVar6 + 0x40) * DAT_1808ac864;
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    *(float *)(lVar6 + 0x226c) = fVar25;
    if ((*(float *)(lVar6 + 0x228c) <= 0.0) && (fVar25 <= 0.0)) {
      *(undefined8 *)(lVar6 + 0x2258) = 0;
    }
  }
  uVar18 = 0xffffffff;
  pcVar17 = "##NavUpdateWindowing";
  bVar8 = 0x23;
  do {
    pcVar17 = pcVar17 + 1;
    if (((bVar8 == 0x23) && (*pcVar17 == 0x23)) && (pcVar17[1] == 0x23)) {
      uVar18 = 0xffffffff;
      pcVar17 = pcVar17 + 2;
    }
    else {
      uVar18 = (ulonglong)
               ((uint)(uVar18 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar18 & 0xff ^ (ulonglong)bVar8) * 4));
    }
    bVar8 = *pcVar17;
  } while (bVar8 != 0);
  uVar15 = ~(uint)uVar18;
  if (((*(uint *)(lVar6 + 0x28) & 2) == 0) || ((*(byte *)(lVar6 + 0x2c) & 1) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_res20 = *(uint *)(lVar6 + 0x28) & 0xffffff01;
  lVar12 = lVar6;
  if ((lVar20 == 0) && (*(int *)(lVar6 + 0x2244) != 0)) {
    cVar7 = FUN_1803eb460(*(int *)(lVar6 + 0x2244),0x2001,uVar15);
    lVar12 = DAT_180ca0a50;
    if (cVar7 == '\0') goto LAB_1803f2b72;
    uVar22 = 0xffffffff;
    bVar5 = true;
    local_res18 = 0xffffffff;
LAB_1803f2b88:
    if (*(int *)(lVar6 + 0x2248) == 0) goto LAB_1803f2bb2;
    cVar7 = FUN_1803eb460(*(int *)(lVar6 + 0x2248),0x2001,uVar15);
    local_res8 = (float)CONCAT31(local_res8._1_3_,1);
    lVar12 = DAT_180ca0a50;
    if (cVar7 == '\0') goto LAB_1803f2bb2;
  }
  else {
LAB_1803f2b72:
    bVar5 = false;
    uVar22 = 1;
    local_res18 = 1;
    if (lVar20 == 0) goto LAB_1803f2b88;
LAB_1803f2bb2:
    local_res8 = (float)((uint)local_res8 & 0xffffff00);
  }
  if ((!bVar2) || (*plVar1 != 0)) {
LAB_1803f2be6:
    bVar2 = false;
  }
  else {
    cVar7 = FUN_1803eb460(0x27a,0x2000,uVar15);
    lVar12 = DAT_180ca0a50;
    if (cVar7 == '\0') goto LAB_1803f2be6;
    bVar2 = true;
  }
  if ((lVar20 != 0) || (!bVar2)) {
    bVar3 = false;
    if (lVar20 == 0) goto LAB_1803f2bfc;
LAB_1803f2c27:
    bVar4 = false;
    uVar21 = 3;
  }
  else {
    bVar3 = true;
LAB_1803f2bfc:
    if ((*plVar1 != 0) || ((!bVar5 && (local_res8._0_1_ == '\0')))) goto LAB_1803f2c27;
    bVar4 = true;
    uVar21 = 2;
  }
  bVar23 = false;
  if (bVar2) {
    *(undefined1 *)(lVar6 + 0x2274) = 1;
    *(undefined4 *)(lVar6 + 0x2278) = 0x27a;
    *(undefined4 *)(lVar6 + 0x20b8) = 3;
    *(undefined4 *)(lVar6 + 0x2270) = 3;
  }
  if ((bVar3) || (bVar4)) {
    lVar20 = *(longlong *)(lVar6 + 0x2068);
    if ((lVar20 == 0) ||
       (((*(char *)(lVar20 + 0xcd) == '\0' || (lVar20 != *(longlong *)(lVar20 + 0x3c0))) ||
        ((*(uint *)(lVar20 + 0x14) & 0x20000) != 0)))) {
      uVar16 = *(int *)(lVar6 + 0x14a8) - 1;
      if (-1 < (int)uVar16) {
        do {
          if (*(int *)(lVar12 + 0x14a8) <= (int)uVar16) break;
          lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x14b0) + (ulonglong)uVar16 * 8);
          if (((*(char *)(lVar13 + 0xcd) != '\0') && (lVar13 == *(longlong *)(lVar13 + 0x3c0))) &&
             ((*(uint *)(lVar13 + 0x14) & 0x20000) == 0)) goto LAB_1803f2cda;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
      lVar13 = 0;
LAB_1803f2cda:
      if (lVar13 == 0) goto LAB_1803f2d61;
    }
    else {
      lVar13 = lVar20;
    }
    if ((bVar4) || (*(char *)(lVar6 + 0x2243) != '\0')) {
      lVar13 = *(longlong *)(lVar13 + 0x3c0);
      *(longlong *)(lVar6 + 0x2258) = lVar13;
      *plVar1 = lVar13;
    }
    *(undefined4 *)(lVar6 + 0x20b8) = uVar21;
    bVar23 = lVar20 == 0;
    *(undefined8 *)(lVar6 + 0x2268) = 0;
    *(undefined8 *)(lVar6 + 0x2284) = 0;
    *(undefined8 *)(lVar6 + 0x227c) = 0;
    *(undefined4 *)(lVar6 + 0x2270) = uVar21;
    local_res18 = uVar22;
    if ((bVar5) || (local_res8._0_1_ != '\0')) {
      FUN_1803eb310((*(uint *)(lVar6 + 0x2248) | *(uint *)(lVar6 + 0x2244)) & 0xf000,uVar15);
      local_res18 = uVar22;
    }
  }
LAB_1803f2d61:
  fVar27 = DAT_1808ac34c;
  fVar25 = DAT_1808ac118;
  lVar20 = *plVar1;
  if ((lVar20 == 0) && (*(char *)(lVar6 + 0x2274) == '\0')) {
LAB_1803f2f5f:
    cVar7 = '\0';
  }
  else if (*(int *)(lVar6 + 0x2270) == 3) {
    if (lVar20 != 0) {
      fVar24 = *(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0x2268);
      *(float *)(lVar6 + 0x2268) = fVar24;
      fVar24 = (fVar24 - fVar25) / DAT_1808ac064;
      if (0.0 <= fVar24) {
        fVar26 = fVar27;
        if (fVar24 <= fVar27) {
          fVar26 = fVar24;
        }
      }
      else {
        fVar26 = 0.0;
      }
      fVar24 = *(float *)(lVar6 + 0x226c);
      if (*(float *)(lVar6 + 0x226c) <= fVar26) {
        fVar24 = fVar26;
      }
      *(float *)(lVar6 + 0x226c) = fVar24;
      bVar8 = FUN_1803e9470(0x282,1,0);
      bVar9 = FUN_1803e9470(0x283,1,0);
      if (((uint)bVar8 - (uint)bVar9 != 0) && (!bVar23)) {
        FUN_1803f28c0((uint)bVar8 - (uint)bVar9);
        lVar20 = *plVar1;
        *(undefined4 *)(lVar6 + 0x226c) = 0x3f800000;
      }
    }
    if ((*(char *)(lVar12 + 0x8d4) != '\0') && (*(char *)(lVar12 + 0x1bbc) == '\0'))
    goto LAB_1803f2e95;
    if ((*(byte *)(lVar6 + 0x2274) &
        (*(float *)(lVar6 + 0x226c) <= fVar27 && fVar27 != *(float *)(lVar6 + 0x226c))) == 0) {
      local_88 = *plVar1;
    }
    else if (*(longlong *)(lVar6 + 0x2068) != 0) {
      local_res10 = '\x01';
    }
    *plVar1 = 0;
    *(undefined1 *)(lVar6 + 0x2274) = 0;
    cVar7 = local_res10;
  }
  else {
LAB_1803f2e95:
    if ((lVar20 != 0) && (*(int *)(lVar6 + 0x2270) == 2)) {
      fVar24 = *(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0x2268);
      uVar15 = 0xf000;
      if (*(uint *)(lVar6 + 0x2244) != 0) {
        uVar15 = *(uint *)(lVar6 + 0x2244);
      }
      *(float *)(lVar6 + 0x2268) = fVar24;
      uVar16 = 0xf000;
      if (*(uint *)(lVar6 + 0x2248) != 0) {
        uVar16 = *(uint *)(lVar6 + 0x2248);
      }
      fVar25 = (fVar24 - fVar25) / DAT_1808ac064;
      if (0.0 <= fVar25) {
        if (fVar25 <= fVar27) {
          fVar27 = fVar25;
        }
      }
      else {
        fVar27 = 0.0;
      }
      fVar25 = *(float *)(lVar6 + 0x226c);
      if (*(float *)(lVar6 + 0x226c) <= fVar27) {
        fVar25 = fVar27;
      }
      *(float *)(lVar6 + 0x226c) = fVar25;
      if (((!bVar5) && (local_res8._0_1_ == '\0')) || (bVar23)) {
        local_88 = lVar20;
        if ((*(uint *)(lVar6 + 0x130) & uVar16 & uVar15 & 0xf000) != (uVar16 & uVar15 & 0xf000))
        goto LAB_1803f2f5f;
        local_88 = 0;
        cVar7 = '\0';
        goto LAB_1803f2f67;
      }
      FUN_1803f28c0(local_res18);
    }
    local_88 = 0;
    cVar7 = '\0';
  }
LAB_1803f2f67:
  bVar2 = false;
  local_80 = 0x211;
  local_7c = 0x215;
  if (((*(longlong *)(lVar6 + 0x2068) != 0) &&
      ((*(uint *)(*(longlong *)(lVar6 + 0x2068) + 0x14) & 0x10000) == 0)) &&
     ((char)local_res20 != '\0')) {
    puVar19 = &local_80;
    do {
      uVar22 = *puVar19;
      cVar10 = FUN_1803e9470(uVar22,0,0xffffffff);
      if (cVar10 != '\0') {
        bVar2 = true;
        *(undefined4 *)(lVar6 + 0x2278) = uVar22;
        *(undefined1 *)(lVar6 + 0x2274) = 1;
        *(undefined4 *)(lVar6 + 0x20b8) = 2;
        *(undefined4 *)(lVar6 + 0x2270) = 2;
        break;
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != local_78);
  }
  if ((*(char *)(lVar6 + 0x2274) != '\0') && (*(int *)(lVar6 + 0x2270) == 2)) {
    if ((0 < *(int *)(lVar6 + 0xbe0)) ||
       ((((*(char *)(lVar6 + 300) != '\0' || (*(char *)(lVar6 + 0x12d) != '\0')) ||
         (*(char *)(lVar6 + 0x12f) != '\0')) ||
        ((!bVar2 && (*(double *)(lVar6 + 0x15e0) == *(double *)(lVar6 + 0x10))))))) {
LAB_1803f30ff:
      *(undefined1 *)(lVar6 + 0x2274) = 0;
    }
    else {
      uVar15 = *(uint *)(lVar6 + 0x2278);
      if (((uVar15 - 0x200 < 0x9b) || ((uVar15 == 0x1000 || (uVar15 == 0x2000)))) ||
         ((uVar15 == 0x4000 || (uVar15 == 0x8000)))) {
        if (((*(char *)(lVar12 + 0x1e9c) == '\0') || (*(int *)(lVar12 + 0x1578) == -1)) ||
           (0x77 < uVar15 - 0x200)) {
          if ((uVar15 & 0xf000) != 0) {
            if (uVar15 == 0x1000) {
              uVar15 = 0x297;
            }
            else if (uVar15 == 0x2000) {
              uVar15 = 0x298;
            }
            else if (uVar15 == 0x4000) {
              uVar15 = 0x299;
            }
            else if (uVar15 == 0x8000) {
              uVar15 = 0x29a;
            }
          }
          if (*(int *)(lVar12 + ((longlong)(int)uVar15 + -0x2b) * 0xc) == -1) goto LAB_1803f30f6;
        }
        goto LAB_1803f30ff;
      }
LAB_1803f30f6:
      if (*(int *)(lVar12 + 0x1d28) != -1) goto LAB_1803f30ff;
    }
    uVar18 = (ulonglong)*(uint *)(lVar6 + 0x2278);
    pcVar17 = (char *)FUN_1803d6470(uVar18);
    if (*(float *)(pcVar17 + 8) <= 0.0 && *(float *)(pcVar17 + 8) != 0.0) {
      if (*pcVar17 != '\0') goto LAB_1803f31c8;
    }
    else if (*pcVar17 == '\0') {
      cVar10 = FUN_1803eb1c0(uVar18 & 0xffffffff,0);
      if (((cVar10 != '\0') && (*(char *)(lVar6 + 0x2274) != '\0')) &&
         ((*(int *)(lVar6 + 0x1578) == 0 || (*(char *)(lVar6 + 0x1587) != '\0')))) {
        pfVar14 = (float *)(lVar6 + 0xae8);
        if (pfVar14 == (float *)0x0) {
          pfVar14 = (float *)(lVar12 + 0x110);
        }
        if ((*pfVar14 < DAT_1808ace9c) || (pfVar14[1] < DAT_1808ace9c)) {
          cVar10 = '\0';
        }
        else {
          cVar10 = '\x01';
        }
        pfVar14 = (float *)(lVar6 + 0x110);
        if (pfVar14 == (float *)0x0) {
          pfVar14 = (float *)(lVar12 + 0x110);
        }
        if ((*pfVar14 < DAT_1808ace9c) || (pfVar14[1] < DAT_1808ace9c)) {
          cVar11 = '\0';
        }
        else {
          cVar11 = '\x01';
        }
        if (cVar11 == cVar10) {
          cVar7 = '\x01';
        }
      }
    }
    else {
LAB_1803f31c8:
      cVar10 = FUN_1803eb1c0(uVar18 & 0xffffffff,0);
      if (cVar10 != '\0') goto LAB_1803f31dd;
    }
    *(undefined1 *)(lVar6 + 0x2274) = 0;
  }
LAB_1803f31dd:
  lVar20 = *plVar1;
  if ((lVar20 != 0) && ((*(byte *)(lVar20 + 0x14) & 4) == 0)) {
    if (*(int *)(lVar6 + 0x20b8) == 2) {
      if (*(char *)(lVar6 + 0x12d) != '\0') goto LAB_1803f3349;
      fVar25 = *(float *)(lVar12 + 0x160) - *(float *)(lVar12 + 0x150);
      fVar27 = *(float *)(lVar12 + 0x180) - *(float *)(lVar12 + 0x170);
    }
    else {
      if (*(int *)(lVar6 + 0x20b8) != 3) goto LAB_1803f3349;
      fVar25 = *(float *)(lVar12 + 0x9d0) - *(float *)(lVar12 + 0x9c0);
      fVar27 = *(float *)(lVar12 + 0x9f0) - *(float *)(lVar12 + 0x9e0);
    }
    if ((fVar25 != 0.0) || (fVar27 != 0.0)) {
      fVar24 = *(float *)(lVar6 + 0x40) * DAT_1808acc30 * *(float *)(lVar12 + 0x11d4);
      *(undefined1 *)(lVar6 + 0x2061) = 1;
      fVar27 = fVar24 * fVar27 + *(float *)(lVar6 + 0x2280);
      fVar25 = fVar24 * fVar25 + *(float *)(lVar6 + 0x227c);
      *(float *)(lVar6 + 0x2280) = fVar27;
      *(float *)(lVar6 + 0x227c) = fVar25;
      fVar24 = (float)(int)fVar25;
      fVar25 = (float)(int)fVar27;
      if ((fVar24 != 0.0) || (fVar25 != 0.0)) {
        lVar20 = *(longlong *)(lVar20 + 0x3c0);
        local_res8 = fVar24 + *(float *)(lVar20 + 0x28);
        local_resc = fVar25 + *(float *)(lVar20 + 0x2c);
        FUN_1803e7c50(lVar20,&local_res8,1);
        *(float *)(lVar6 + 0x227c) = *(float *)(lVar6 + 0x227c) - fVar24;
        *(float *)(lVar6 + 0x2280) = *(float *)(lVar6 + 0x2280) - fVar25;
      }
    }
  }
LAB_1803f3349:
  if (local_88 != 0) {
    if ((*(longlong *)(lVar12 + 0x2068) == 0) ||
       (local_88 != *(longlong *)(*(longlong *)(lVar12 + 0x2068) + 0x3c0))) {
      FUN_1803dd660(0,0);
      FUN_1803ef360();
      FUN_1803edf20(local_88,0);
      FUN_1803ef030(local_88,1);
      lVar20 = *(longlong *)(lVar12 + 0x2068);
      if (*(int *)(lVar20 + 0x3f0) == 0) {
        FUN_1803f0510(lVar20,0);
      }
      if (*(short *)(lVar20 + 0x176) == 2) {
        *(undefined4 *)(lVar12 + 0x2074) = 1;
      }
    }
    *(undefined8 *)(lVar12 + 0x2250) = 0;
  }
  if ((cVar7 != '\0') && (*(longlong *)(lVar6 + 0x2068) != 0)) {
    FUN_1803dd660(0,0);
    lVar20 = *(longlong *)(lVar6 + 0x2068);
    lVar12 = lVar20;
    if (*(longlong *)(lVar20 + 0x3b0) != 0) {
      do {
        if (((*(byte *)(lVar12 + 0x174) & 2) != 0) ||
           ((*(uint *)(lVar12 + 0x14) & 0x15000000) != 0x1000000)) break;
        lVar12 = *(longlong *)(lVar12 + 0x3b0);
      } while (*(longlong *)(lVar12 + 0x3b0) != 0);
      if (lVar12 != lVar20) {
        FUN_1803ef030(lVar12,0);
        *(longlong *)(lVar12 + 1000) = lVar20;
      }
    }
    if ((*(byte *)(*(longlong *)(lVar6 + 0x2068) + 0x174) & 2) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(uint *)(lVar6 + 0x2074) ^ 1;
    }
    if (uVar15 != *(uint *)(lVar6 + 0x2074)) {
      if (uVar15 == 1) {
        *(undefined4 *)(*(longlong *)(lVar6 + 0x2068) + 0x3f4) = 0;
      }
      FUN_1803f0450();
      FUN_1803ef360();
    }
  }
  return;
}



/* ===== 1803f34b0 FUN_1803f34b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803f34b0(void)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  char *_Str1;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  lVar4 = DAT_180ca0a50;
  if (DAT_1808ac0e8 < *(float *)(DAT_180ca0a50 + 0x2268) ||
      DAT_1808ac0e8 == *(float *)(DAT_180ca0a50 + 0x2268)) {
    uVar2 = *(uint *)(DAT_180ca0a50 + 0x1f38);
    lVar3 = **(longlong **)(DAT_180ca0a50 + 0x2058);
    fVar7 = (float)*(undefined8 *)(lVar3 + 0x10) * _DAT_1808ad980;
    fVar8 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * _UNK_1808ad984;
    *(uint *)(DAT_180ca0a50 + 0x1f38) = uVar2 | 0x10;
    *(ulonglong *)(lVar4 + 0x1f84) = CONCAT44(fVar8,fVar7);
    *(undefined4 *)(lVar4 + 0x1f8c) = 0x7f7fffff;
    *(undefined4 *)(lVar4 + 0x1f90) = 0x7f7fffff;
    *(undefined8 *)(lVar4 + 0x1f98) = 0;
    *(undefined8 *)(lVar4 + 0x1fa0) = 0;
    uVar1 = *(undefined8 *)(lVar3 + 8);
    fVar7 = (float)*(undefined8 *)(lVar3 + 0x10) * _DAT_1808ad9f0;
    fVar8 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * _UNK_1808ad9f4;
    *(uint *)(lVar4 + 0x1f38) = uVar2 | 0x11;
    *(undefined4 *)(lVar4 + 0x1f50) = 0x3f000000;
    *(undefined4 *)(lVar4 + 0x1f54) = 0x3f000000;
    *(undefined4 *)(lVar4 + 0x1f3c) = 1;
    local_28 = 2;
    *(ulonglong *)(lVar4 + 0x1f48) =
         CONCAT44(fVar8 + (float)((ulonglong)uVar1 >> 0x20),fVar7 + (float)uVar1);
    local_24 = *(undefined4 *)(lVar4 + 0xca4);
    local_20 = *(undefined4 *)(lVar4 + 0xca8);
    fVar7 = (float)*(undefined8 *)(lVar4 + 0xca4);
    fVar8 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0xca4) >> 0x20);
    FUN_1803f6350(lVar4 + 0x1fd0,&local_28);
    *(ulonglong *)(lVar4 + 0xca4) = CONCAT44(fVar8 + fVar8,fVar7 + fVar7);
    FUN_1803e4f20("##NavWindowingOverlay",0,0x31347);
    *(undefined8 *)(lVar4 + 0x2260) = *(undefined8 *)(lVar4 + 0x14f8);
    if (*(char *)(lVar4 + 0x18) != '\0') {
      FUN_180418180(lVar4 + 0x18);
    }
    uVar2 = *(uint *)(lVar4 + 0x14a8);
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x14b0) + (ulonglong)uVar2 * 8);
      if (((*(char *)(lVar3 + 0xcd) != '\0') && (lVar3 == *(longlong *)(lVar3 + 0x3c0))) &&
         ((*(uint *)(lVar3 + 0x14) & 0x20000) == 0)) {
        _Str1 = *(char **)(lVar3 + 8);
        pcVar6 = _Str1;
        if (_Str1 == (char *)0xffffffffffffffff) {
LAB_1803f3662:
          if ((*(uint *)(lVar3 + 0x14) >> 0x1a & 1) == 0) {
            if (((*(uint *)(lVar3 + 0x14) >> 10 & 1) == 0) ||
               (iVar5 = strcmp(_Str1,"##MainMenuBar"), iVar5 != 0)) {
              pcVar6 = *(char **)(DAT_180ca0a50 + 0x2850);
            }
            else {
              pcVar6 = *(char **)(DAT_180ca0a50 + 0x2840);
            }
          }
          else {
            pcVar6 = *(char **)(DAT_180ca0a50 + 0x2848);
          }
          _Str1 = "*Missing Text*";
          if (pcVar6 != (char *)0x0) {
            _Str1 = pcVar6;
          }
        }
        else {
          do {
            if ((*pcVar6 == '\0') || ((*pcVar6 == '#' && (pcVar6[1] == '#')))) break;
            pcVar6 = pcVar6 + 1;
          } while (pcVar6 != (char *)0xffffffffffffffff);
          if (_Str1 == pcVar6) goto LAB_1803f3662;
        }
        local_res8 = 0;
        FUN_1804201d0(_Str1,*(longlong *)(lVar4 + 0x2250) == lVar3,0,&local_res8);
      }
    }
    FUN_1803e75b0();
    FUN_1803d8a40(1);
  }
  return;
}



/* ===== 1803f3710 FUN_1803f3710 ===== */

void FUN_1803f3710(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180ca0a50;
  if ((*(char *)(DAT_180ca0a50 + 0x2290) != '\0') && ((*(byte *)(DAT_180ca0a50 + 0x28f4) & 2) != 0))
  {
    FUN_1803f5060();
  }
  *(undefined1 *)(lVar1 + 0x2290) = 0;
  *(undefined8 *)(lVar1 + 0x22ac) = 0;
  *(undefined8 *)(lVar1 + 0x22a0) = 0;
  *(undefined4 *)(lVar1 + 0x22a8) = 0;
  *(undefined8 *)(lVar1 + 0x22b8) = 0;
  *(undefined8 *)(lVar1 + 0x22c0) = 0;
  *(undefined8 *)(lVar1 + 0x22c8) = 0;
  *(undefined8 *)(lVar1 + 0x22d0) = 0;
  *(undefined2 *)(lVar1 + 0x22d8) = 0;
  *(undefined4 *)(lVar1 + 0x22b4) = 0xffffffff;
  *(undefined1 *)(lVar1 + 0x22da) = 0;
  *(undefined4 *)(lVar1 + 0x2308) = 0;
  *(undefined8 *)(lVar1 + 0x2314) = 0;
  *(undefined4 *)(lVar1 + 0x2310) = 0x7f7fffff;
  *(undefined4 *)(lVar1 + 0x231c) = 0xffffffff;
  FUN_1803d6150(lVar1 + 9000);
  *(undefined8 *)(lVar1 + 0x2338) = 0;
  *(undefined8 *)(lVar1 + 0x2340) = 0;
  return;
}



/* ===== 1803f37c0 FUN_1803f37c0 ===== */

void FUN_1803f37c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  if (*(longlong *)(param_1 + 0x2878) == 0) {
    FUN_1803d8600(param_1 + 0x2880);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2884);
  if (iVar2 < 0) {
    iVar2 = iVar2 + iVar2 / 2;
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_1803f6920(param_1 + 0x2880,iVar1);
  }
  *(undefined4 *)(param_1 + 0x2880) = 0;
  FUN_1803d8600(param_1 + 0x2880,param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x2880) + -1;
  if (*(int *)(param_1 + 0x2880) == 0) {
    iVar2 = 0;
  }
  puVar3 = &DAT_180ca006f;
  if (*(undefined **)(param_1 + 0x2888) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 0x2888);
  }
  FUN_18051142c(puVar3,1,(longlong)iVar2,*(undefined8 *)(param_1 + 0x2878));
  return;
}



/* ===== 1803f3880 FUN_1803f3880 ===== */

void FUN_1803f3880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (*(char *)(DAT_180ca0a50 + 0x2868) != '\0') {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1803f37c0(DAT_180ca0a50,param_1,&local_res10);
  }
  return;
}



/* ===== 1803f38c0 FUN_1803f38c0 ===== */

void FUN_1803f38c0(longlong param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *_Str;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  float fVar11;
  
  fVar4 = DAT_1808ac34c;
  do {
    lVar5 = DAT_180ca0a50;
    pcVar10 = *(char **)(DAT_180ca0a50 + 0x2890);
    _Str = *(char **)(DAT_180ca0a50 + 0x2898);
    lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined8 *)(DAT_180ca0a50 + 0x2898) = 0;
    *(undefined8 *)(lVar5 + 0x2890) = 0;
    if ((param_3 == (char *)0x0) && (param_3 = param_2, param_2 != (char *)0xffffffffffffffff)) {
      while (*param_3 != '\0') {
        if (((*param_3 == '#') && (param_3[1] == '#')) ||
           (param_3 = param_3 + 1, param_3 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (param_1 != 0) {
      fVar11 = *(float *)(lVar5 + 0xce0);
      if (*(float *)(lVar5 + 0xce0) <= *(float *)(lVar5 + 0xcf0)) {
        fVar11 = *(float *)(lVar5 + 0xcf0);
      }
      if (*(float *)(param_1 + 4) <= fVar11 + *(float *)(lVar5 + 0x28a0) + fVar4) {
        if (param_1 == 0) goto LAB_1803f3999;
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      *(undefined4 *)(lVar5 + 0x28a0) = *(undefined4 *)(param_1 + 4);
      if (bVar3) {
        FUN_1803f3880(&DAT_1806e6e50);
        *(undefined1 *)(lVar5 + 0x2869) = 1;
      }
    }
LAB_1803f3999:
    if (pcVar10 != (char *)0x0) {
      sVar7 = strlen(pcVar10);
      FUN_1803f38c0(param_1,pcVar10,pcVar10 + sVar7);
    }
    iVar1 = *(int *)(lVar2 + 0x1a0);
    iVar6 = *(int *)(lVar5 + 0x28a4);
    if (iVar1 < iVar6) {
      *(int *)(lVar5 + 0x28a4) = iVar1;
      iVar6 = iVar1;
    }
    iVar1 = *(int *)(lVar2 + 0x1a0);
    while( true ) {
      pcVar8 = (char *)FUN_180540ca0(param_2,10,(longlong)param_3 - (longlong)param_2);
      pcVar10 = param_3;
      if (pcVar8 != (char *)0x0) {
        pcVar10 = pcVar8;
      }
      if ((param_2 == pcVar10) && (pcVar10 == param_3)) break;
      iVar9 = 1;
      if (*(char *)(lVar5 + 0x2869) != '\0') {
        iVar9 = (iVar1 - iVar6) * 4;
      }
      FUN_1803f3880("%*s%.*s",iVar9,&DAT_18058b643,(int)pcVar10 - (int)param_2,param_2);
      *(undefined1 *)(lVar5 + 0x2869) = 0;
      if (*pcVar10 == '\n') {
        FUN_1803f3880(&DAT_1806e6e50);
        *(undefined1 *)(lVar5 + 0x2869) = 1;
      }
      if (pcVar10 == param_3) break;
      param_2 = pcVar10 + 1;
    }
    if (_Str == (char *)0x0) {
      return;
    }
    sVar7 = strlen(_Str);
    param_3 = _Str + sVar7;
    param_2 = _Str;
  } while( true );
}



/* ===== 1803f3a90 FUN_1803f3a90 ===== */

void FUN_1803f3a90(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_180ca0a50;
  if (*(char *)(DAT_180ca0a50 + 0x2868) == '\0') {
    lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined1 *)(DAT_180ca0a50 + 0x1576) = 1;
    *(undefined1 *)(lVar2 + 0x2868) = 1;
    *(undefined4 *)(lVar2 + 0x286c) = 8;
    *(longlong *)(lVar2 + 0x2870) = lVar1;
    *(undefined8 *)(lVar2 + 0x2898) = 0;
    *(undefined8 *)(lVar2 + 0x2890) = 0;
    *(undefined4 *)(lVar2 + 0x28a4) = *(undefined4 *)(lVar1 + 0x1a0);
    *(undefined4 *)(lVar2 + 0x28a8) = 0;
    *(undefined4 *)(lVar2 + 0x28a0) = 0x7f7fffff;
    *(undefined1 *)(lVar2 + 0x2869) = 1;
  }
  return;
}



/* ===== 1803f3b00 FUN_1803f3b00 ===== */

longlong FUN_1803f3b00(byte *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0xffffffff;
  uVar6 = 0xffffffff;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    pbVar3 = param_1 + 1;
    if (((bVar2 == 0x23) && (*pbVar3 == 0x23)) && (param_1[2] == 0x23)) {
      uVar7 = 0xffffffff;
      pbVar3 = param_1 + 3;
    }
    else {
      uVar7 = (ulonglong)
              ((uint)(uVar7 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar7 & 0xff ^ (ulonglong)bVar2) * 4));
    }
    uVar6 = (uint)uVar7;
    param_1 = pbVar3;
    bVar2 = *pbVar3;
  }
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x27c0);
  lVar4 = (longlong)*(int *)(DAT_180ca0a50 + 0x27b8) * 0x50;
  lVar1 = lVar4 + lVar5;
  if (lVar4 != 0) {
    do {
      if (*(uint *)(lVar5 + 8) == ~uVar6) {
        return lVar5;
      }
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != lVar1);
  }
  return 0;
}



/* ===== 1803f3ba0 FUN_1803f3ba0 ===== */

void FUN_1803f3ba0(char *param_1,size_t param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  short sVar5;
  ushort uVar6;
  char *pcVar7;
  longlong lVar8;
  short sVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  size_t local_res10;
  longlong local_48;
  longlong local_40;
  
  lVar8 = DAT_180ca0a50;
  local_res10 = param_2;
  if (param_2 == 0) {
    local_res10 = strlen(param_1);
  }
  iVar10 = *(int *)(lVar8 + 0x27ac);
  iVar17 = (int)local_res10 + 1;
  if (iVar10 < iVar17) {
    if (iVar10 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar10 / 2 + iVar10;
    }
    iVar4 = iVar17;
    if (iVar17 < iVar10) {
      iVar4 = iVar10;
    }
    FUN_1803f6920(lVar8 + 0x27a8,iVar4);
  }
  *(int *)(lVar8 + 0x27a8) = iVar17;
  pcVar3 = *(char **)(lVar8 + 0x27b0);
  pcVar2 = pcVar3 + local_res10;
  FUN_180540530(pcVar3,param_1,local_res10);
  *pcVar2 = '\0';
  lVar18 = *(longlong *)(lVar8 + 0x27c0);
  lVar14 = (longlong)*(int *)(lVar8 + 0x27b8) * 0x50;
  lVar13 = lVar14 + lVar18;
  if (lVar14 != 0) {
    do {
      if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
        (**(code **)(lVar18 + 0x18))(lVar8,lVar18);
      }
      lVar18 = lVar18 + 0x50;
    } while (lVar18 != lVar13);
  }
  lVar18 = 0;
  lVar13 = 0;
  pcVar11 = pcVar3;
  while (pcVar11 < pcVar2) {
    for (; (*pcVar11 == '\n' || (pcVar7 = pcVar11, *pcVar11 == '\r')); pcVar11 = pcVar11 + 1) {
    }
    for (; ((pcVar7 < pcVar2 && (*pcVar7 != '\n')) && (*pcVar7 != '\r')); pcVar7 = pcVar7 + 1) {
    }
    *pcVar7 = '\0';
    if (*pcVar11 != ';') {
      if (((*pcVar11 == '[') && (pcVar11 < pcVar7)) && (pcVar1 = pcVar7 + -1, pcVar7[-1] == ']')) {
        pcVar11 = pcVar11 + 1;
        *pcVar1 = '\0';
        puVar12 = (undefined1 *)FUN_180540ca0(pcVar11,0x5d,(longlong)pcVar1 - (longlong)pcVar11);
        if ((puVar12 != (undefined1 *)0x0) &&
           (lVar14 = FUN_180540ca0(puVar12 + 1,0x5b,(longlong)pcVar1 - (longlong)(puVar12 + 1)),
           lVar14 != 0)) {
          *puVar12 = 0;
          lVar13 = FUN_1803f3b00(pcVar11);
          if (lVar13 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = (**(code **)(lVar13 + 0x20))(lVar8,lVar13,lVar14 + 1);
          }
        }
      }
      else if ((lVar13 != 0) && (lVar18 != 0)) {
        (**(code **)(lVar13 + 0x28))(lVar8,lVar13,lVar18,pcVar11);
      }
    }
    pcVar11 = pcVar7 + 1;
  }
  *(undefined1 *)(lVar8 + 0x27a2) = 1;
  FUN_180540530(pcVar3,param_1,local_res10);
  lVar13 = DAT_180ca0a50;
  uVar19 = *(uint *)(lVar8 + 0x88);
  local_48 = 0;
  iVar10 = 0;
  local_40 = 0;
  if (0 < (int)uVar19) {
    local_48 = (ulonglong)uVar19 << 0x20;
    iVar17 = *(int *)(DAT_180ca0a50 + 0xc4c);
    if (iVar17 != 0) {
      sVar9 = (short)(iVar17 / 10000);
      sVar5 = (short)(iVar17 / 100);
      uVar16 = (sVar5 + sVar9 * -4) * 0x80 & 0x780U | ((short)iVar17 + sVar5 * -4) * 0x800 |
               sVar9 + 0x30U & 0x7f;
      do {
        uVar6 = uVar16;
        uVar16 = (uVar6 - ((uVar6 & 0x780) == 0x80) ^ uVar6) & 0x7f ^ uVar6;
        sVar9 = (uVar6 >> 7) - 1;
        if ((uVar6 & 0x780) == 0x80) {
          sVar9 = 0xc;
        }
        uVar19 = uVar19 - 1;
        uVar16 = (sVar9 << 7 ^ uVar16) & 0x780 ^ uVar16;
      } while (0 < (int)uVar19);
      if (((uVar16 & 0x7f) == 0 || (uVar16 & 0x780) == 0) || (uVar16 < 0x800)) {
        uVar19 = 0;
      }
      else {
        uVar19 = (uVar6 >> 0xb) + 20000000 + ((uVar16 >> 7 & 0xf) + (uVar16 & 0x7f) * 100) * 100;
      }
      local_40 = (ulonglong)uVar19 << 0x20;
    }
    lVar14 = *(longlong *)(DAT_180ca0a50 + 0x27c0);
    lVar15 = (longlong)*(int *)(DAT_180ca0a50 + 0x27b8) * 0x50;
    lVar18 = lVar15 + lVar14;
    if (lVar15 != 0) {
      do {
        if (((iVar10 == 0) || (*(int *)(lVar14 + 8) == iVar10)) &&
           (*(code **)(lVar14 + 0x40) != (code *)0x0)) {
          (**(code **)(lVar14 + 0x40))(lVar13,lVar14,&local_48);
          iVar10 = (int)local_48;
        }
        lVar14 = lVar14 + 0x50;
      } while (lVar14 != lVar18);
    }
  }
  lVar18 = *(longlong *)(lVar8 + 0x27c0);
  lVar14 = (longlong)*(int *)(lVar8 + 0x27b8) * 0x50;
  lVar13 = lVar14 + lVar18;
  if (lVar14 != 0) {
    do {
      if (*(code **)(lVar18 + 0x30) != (code *)0x0) {
        (**(code **)(lVar18 + 0x30))(lVar8,lVar18);
      }
      lVar18 = lVar18 + 0x50;
    } while (lVar18 != lVar13);
  }
  return;
}



/* ===== 1803f3f90 FUN_1803f3f90 ===== */

undefined * FUN_1803f3f90(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = DAT_180ca0a50;
  *(undefined4 *)(DAT_180ca0a50 + 0x27a4) = 0;
  piVar1 = (int *)(lVar4 + 0x27a8);
  iVar6 = *(int *)(lVar4 + 0x27ac);
  if (iVar6 < 0) {
    iVar6 = iVar6 / 2 + iVar6;
    iVar3 = 0;
    if (0 < iVar6) {
      iVar3 = iVar6;
    }
    FUN_1803f6920(piVar1,iVar3);
  }
  *piVar1 = 0;
  if (*(int *)(lVar4 + 0x27ac) == 0) {
    FUN_1803f6920(piVar1,8);
  }
  *(undefined1 *)((longlong)*piVar1 + *(longlong *)(lVar4 + 0x27b0)) = 0;
  *piVar1 = *piVar1 + 1;
  lVar8 = *(longlong *)(lVar4 + 0x27c0);
  lVar7 = (longlong)*(int *)(lVar4 + 0x27b8) * 0x50;
  lVar2 = lVar7 + lVar8;
  if (lVar7 != 0) {
    do {
      (**(code **)(lVar8 + 0x38))(lVar4,lVar8,piVar1);
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != lVar2);
  }
  if (param_1 != (longlong *)0x0) {
    iVar6 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar6 = 0;
    }
    *param_1 = (longlong)iVar6;
  }
  puVar5 = &DAT_180ca006f;
  if (*(undefined **)(lVar4 + 0x27b0) != (undefined *)0x0) {
    puVar5 = *(undefined **)(lVar4 + 0x27b0);
  }
  return puVar5;
}



/* ===== 1803f4080 FUN_1803f4080 ===== */

undefined8 * FUN_1803f4080(char *param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  size_t sVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  lVar1 = DAT_180ca0a50;
  if (*(char *)(DAT_180ca0a50 + 0x8c) == '\0') {
    cVar8 = *param_1;
    pcVar6 = param_1;
    while (pcVar3 = pcVar6, cVar8 != '\0') {
      while (((pcVar6 = pcVar3 + 1, cVar8 == '#' && (*pcVar6 == '#')) && (pcVar3[2] == '#'))) {
        cVar8 = *pcVar6;
        param_1 = pcVar3 + 3;
        pcVar3 = pcVar6;
      }
      cVar8 = *pcVar6;
    }
  }
  sVar7 = strlen(param_1);
  lVar12 = (longlong)*(int *)(lVar1 + 0x27c8);
  iVar4 = *(int *)(lVar1 + 0x27cc);
  uVar10 = (int)sVar7 + 0x18U & 0xfffffffc;
  iVar9 = uVar10 + *(int *)(lVar1 + 0x27c8);
  if (iVar4 < iVar9) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar2 = iVar9;
    if (iVar9 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_1803f6920(lVar1 + 0x27c8,iVar2);
  }
  *(int *)(lVar1 + 0x27c8) = iVar9;
  *(uint *)(lVar12 + *(longlong *)(lVar1 + 0x27d0)) = uVar10;
  lVar1 = *(longlong *)(lVar1 + 0x27d0);
  puVar11 = (undefined8 *)(lVar1 + 4 + lVar12);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = 0;
    puVar11[1] = 0;
  }
  uVar5 = FUN_1803d7830(param_1,sVar7,0);
  *(undefined4 *)puVar11 = uVar5;
  FUN_180540530(lVar1 + 0x14 + lVar12,param_1,sVar7 + 1);
  return puVar11;
}



/* ===== 1803f41e0 FUN_1803f41e0 ===== */

void FUN_1803f41e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x27d0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x27d0) + 4;
  }
  do {
    if (lVar3 == 0) {
      return;
    }
    uVar1 = *(ushort *)(lVar3 + 0xc);
    if ((((uVar1 & 0x7f) == 0) || ((uVar1 & 0x780) == 0)) || (uVar1 < 0x800)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (*(int *)(param_3 + 0xc) == 0) {
LAB_1803f4296:
      if ((*(char *)(param_3 + 8) != '\0') && (!bVar2)) goto LAB_1803f42a2;
    }
    else {
      if ((((uVar1 & 0x7f) == 0) || ((uVar1 >> 7 & 0xf) == 0)) || (uVar1 >> 0xb == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = (uVar1 >> 0xb) + 20000000 + ((uVar1 >> 7 & 0xf) + (uVar1 & 0x7f) * 100) * 100;
      }
      if (*(int *)(param_3 + 0xc) <= iVar4) goto LAB_1803f4296;
LAB_1803f42a2:
      *(byte *)(lVar3 + 0xe) = *(byte *)(lVar3 + 0xe) | 8;
    }
    if ((*(char *)(param_3 + 10) != '\0') || ((*(char *)(param_3 + 0xb) != '\0' && (!bVar2)))) {
      *(undefined2 *)(lVar3 + 0xc) = *(undefined2 *)(param_1 + 0x27a0);
    }
    lVar5 = *(int *)(lVar3 + -4) + lVar3;
    lVar3 = 0;
    if (lVar5 != *(longlong *)(param_1 + 0x27d0) + 4 + (longlong)*(int *)(param_1 + 0x27c8)) {
      lVar3 = lVar5;
    }
  } while( true );
}



/* ===== 1803f4310 FUN_1803f4310 ===== */

uint * FUN_1803f4310(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0xffffffff;
  uVar7 = 0xffffffff;
  bVar1 = *param_3;
  pbVar3 = param_3;
  while (bVar1 != 0) {
    pbVar4 = pbVar3 + 1;
    if (((bVar1 == 0x23) && (*pbVar4 == 0x23)) && (pbVar3[2] == 0x23)) {
      uVar8 = 0xffffffff;
      pbVar4 = pbVar3 + 3;
    }
    else {
      uVar8 = (ulonglong)
              ((uint)(uVar8 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar8 & 0xff ^ (ulonglong)bVar1) * 4));
    }
    uVar7 = (uint)uVar8;
    pbVar3 = pbVar4;
    bVar1 = *pbVar4;
  }
  uVar7 = ~uVar7;
  puVar5 = (uint *)(*(longlong *)(DAT_180ca0a50 + 0x27d0) + 4);
  puVar2 = (uint *)0x0;
  if (*(longlong *)(DAT_180ca0a50 + 0x27d0) != 0) {
    puVar2 = puVar5;
  }
  while( true ) {
    if (puVar2 == (uint *)0x0) {
      puVar5 = (uint *)FUN_1803f4080(param_3);
      *(byte *)((longlong)puVar5 + 0xe) = *(byte *)((longlong)puVar5 + 0xe) | 4;
      *puVar5 = uVar7;
      return puVar5;
    }
    if ((*puVar2 == uVar7) && ((*(byte *)((longlong)puVar2 + 0xe) & 8) == 0)) break;
    puVar6 = (uint *)((longlong)(int)puVar2[-1] + (longlong)puVar2);
    puVar2 = (uint *)0x0;
    if (puVar6 != (uint *)((longlong)*(int *)(DAT_180ca0a50 + 0x27c8) + (longlong)puVar5)) {
      puVar2 = puVar6;
    }
  }
  puVar2[0] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(byte *)((longlong)puVar2 + 0xe) = *(byte *)((longlong)puVar2 + 0xe) | 4;
  *puVar2 = uVar7;
  return puVar2;
}



/* ===== 1803f43e0 FUN_1803f43e0 ===== */

uint FUN_1803f43e0(undefined8 param_1,undefined8 param_2,longlong param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  int local_res18 [4];
  ushort local_18 [2];
  undefined2 local_14 [6];
  
  iVar1 = sscanf(param_4,"Pos=%i,%i",(int *)local_18,(int *)local_14);
  if (iVar1 == 2) {
    *(ushort *)(param_3 + 4) = local_18[0];
    *(undefined2 *)(param_3 + 6) = local_14[0];
    return (uint)local_18[0];
  }
  iVar1 = sscanf(param_4,"Size=%i,%i",(int *)local_18,(int *)local_14);
  if (iVar1 == 2) {
    *(ushort *)(param_3 + 8) = local_18[0];
    *(undefined2 *)(param_3 + 10) = local_14[0];
    return (uint)local_18[0];
  }
  iVar1 = sscanf(param_4,"Collapsed=%d",local_res18);
  if (iVar1 == 1) {
    *(byte *)(param_3 + 0xe) = *(byte *)(param_3 + 0xe) & 0xfe;
    *(byte *)(param_3 + 0xe) = *(byte *)(param_3 + 0xe) | local_res18[0] != 0;
    return (uint)(local_res18[0] != 0);
  }
  iVar1 = sscanf(param_4,"IsChild=%d",local_res18);
  if (iVar1 == 1) {
    *(byte *)(param_3 + 0xe) = *(byte *)(param_3 + 0xe) & 0xfd;
    *(byte *)(param_3 + 0xe) = *(byte *)(param_3 + 0xe) | -(local_res18[0] != 0) & 2U;
    return -local_res18[0];
  }
  uVar2 = sscanf(param_4,"LastUsed=%d",local_res18);
  if (uVar2 == 1) {
    sVar4 = (short)(local_res18[0] / 100);
    uVar2 = (local_res18[0] / 10000) * 100;
    sVar3 = (short)(local_res18[0] / 10000);
    *(ushort *)(param_3 + 0xc) =
         ((short)local_res18[0] + sVar4 * -4) * 0x800 | sVar3 + 0x30U & 0x7f |
         (sVar4 + sVar3 * -100 & 0xfU) << 7;
  }
  return uVar2;
}



/* ===== 1803f4560 FUN_1803f4560 ===== */

void FUN_1803f4560(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)0x0;
  if (*(longlong *)(param_1 + 0x27d0) != 0) {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x27d0) + 4);
  }
  while (puVar1 != (undefined4 *)0x0) {
    if ((*(byte *)((longlong)puVar1 + 0xe) & 4) != 0) {
      lVar2 = FUN_1803e1e50(*puVar1);
      if (lVar2 != 0) {
        FUN_1803e1f50(lVar2,puVar1);
      }
      *(byte *)((longlong)puVar1 + 0xe) = *(byte *)((longlong)puVar1 + 0xe) & 0xfb;
    }
    puVar3 = (undefined4 *)((longlong)(int)puVar1[-1] + (longlong)puVar1);
    puVar1 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)
                  (*(longlong *)(param_1 + 0x27d0) + 4 + (longlong)*(int *)(param_1 + 0x27c8))) {
      puVar1 = puVar3;
    }
  }
  return;
}



/* ===== 1803f45e0 FUN_1803f45e0 ===== */

void FUN_1803f45e0(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar11 = *(longlong **)(param_1 + 0x14a0);
  plVar3 = plVar11 + *(int *)(param_1 + 0x1498);
  if (((longlong)*(int *)(param_1 + 0x1498) & 0x1fffffffffffffffU) != 0) {
    lVar14 = DAT_180ca0a50;
    do {
      lVar13 = *plVar11;
      if ((*(uint *)(lVar13 + 0x14) & 0x100) == 0) {
        if (*(int *)(lVar13 + 0x2c4) == -1) {
          piVar2 = (int *)(*(longlong *)(lVar14 + 0x27d0) + 4);
          piVar12 = (int *)0x0;
          if (*(longlong *)(lVar14 + 0x27d0) != 0) {
            piVar12 = piVar2;
          }
          if (piVar12 != (int *)0x0) {
            do {
              if ((*piVar12 == *(int *)(lVar13 + 0x10)) &&
                 ((*(byte *)((longlong)piVar12 + 0xe) & 8) == 0)) goto LAB_1803f46a4;
              piVar8 = (int *)((longlong)piVar12[-1] + (longlong)piVar12);
              piVar12 = (int *)0x0;
              if (piVar8 != (int *)((longlong)*(int *)(lVar14 + 0x27c8) + (longlong)piVar2)) {
                piVar12 = piVar8;
              }
            } while (piVar12 != (int *)0x0);
          }
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)((longlong)*(int *)(lVar13 + 0x2c4) + *(longlong *)(lVar14 + 0x27d0));
        }
LAB_1803f46a4:
        if (piVar12 == (int *)0x0) {
          piVar12 = (int *)FUN_1803f4080(*(undefined8 *)(lVar13 + 8));
          lVar14 = DAT_180ca0a50;
          *(undefined2 *)(piVar12 + 3) = *(undefined2 *)(param_1 + 0x27a0);
          *(int *)(lVar13 + 0x2c4) = (int)piVar12 - *(int *)(param_1 + 0x27d0);
        }
        fVar4 = *(float *)(lVar13 + 0x28);
        *(short *)((longlong)piVar12 + 6) = (short)(int)*(float *)(lVar13 + 0x2c);
        *(short *)(piVar12 + 1) = (short)(int)fVar4;
        fVar4 = *(float *)(lVar13 + 0x38);
        *(short *)((longlong)piVar12 + 10) = (short)(int)*(float *)(lVar13 + 0x3c);
        *(short *)(piVar12 + 2) = (short)(int)fVar4;
        bVar9 = (*(byte *)((longlong)piVar12 + 0xe) ^
                (char)((uint)*(undefined4 *)(lVar13 + 0x14) >> 0x18) * '\x02') & 2 ^
                *(byte *)((longlong)piVar12 + 0xe);
        *(byte *)((longlong)piVar12 + 0xe) = bVar9;
        *(byte *)((longlong)piVar12 + 0xe) = ((bVar9 ^ *(byte *)(lVar13 + 0xcf)) & 1 ^ bVar9) & 0xf7
        ;
        *(undefined2 *)(piVar12 + 3) = *(undefined2 *)(param_1 + 0x27a0);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
  }
  iVar1 = *(int *)(param_1 + 0x27c8) * 6;
  iVar10 = *param_3 + -1 + iVar1;
  if (*param_3 == 0) {
    iVar10 = iVar1;
  }
  FUN_1803f6920(param_3,iVar10);
  lVar14 = 0;
  if (*(longlong *)(param_1 + 0x27d0) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x27d0) + 4;
  }
  while (lVar14 != 0) {
    if ((*(byte *)(lVar14 + 0xe) & 8) == 0) {
      FUN_1803d85d0(param_3,"[%s][%s]\n",*param_2,lVar14 + 0x10);
      if ((*(byte *)(lVar14 + 0xe) & 2) == 0) {
        FUN_1803d85d0(param_3,"Pos=%d,%d\n",(int)*(short *)(lVar14 + 4),(int)*(short *)(lVar14 + 6))
        ;
        FUN_1803d85d0(param_3,"Size=%d,%d\n",(int)*(short *)(lVar14 + 8),
                      (int)*(short *)(lVar14 + 10));
        if ((*(byte *)(lVar14 + 0xe) & 1) != 0) {
          FUN_1803d85d0(param_3,"Collapsed=1\n");
        }
      }
      else {
        FUN_1803d85d0(param_3,"IsChild=1\n");
        FUN_1803d85d0(param_3,"Size=%d,%d\n",(int)*(short *)(lVar14 + 8),
                      (int)*(short *)(lVar14 + 10));
      }
      if (((*(char *)(param_1 + 0x85) != '\0') &&
          (uVar5 = *(ushort *)(lVar14 + 0xc), (uVar5 & 0x7f) != 0 && (uVar5 & 0x780) != 0)) &&
         (0x7ff < uVar5)) {
        FUN_1803d85d0(param_3,"LastUsed=%08d\n",
                      (uVar5 >> 0xb) + 20000000 + ((uVar5 >> 7 & 0xf) + (uVar5 & 0x7f) * 100) * 100)
        ;
      }
      iVar10 = 1;
      if (*param_3 != 0) {
        iVar10 = *param_3;
      }
      iVar1 = iVar10 + 1;
      if (param_3[1] <= iVar1) {
        iVar7 = param_3[1] * 2;
        if (iVar7 < iVar1) {
          iVar7 = iVar1;
        }
        FUN_1803f6920(param_3,iVar7);
      }
      iVar7 = param_3[1];
      if (iVar7 < iVar1) {
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        iVar6 = iVar1;
        if (iVar1 < iVar7) {
          iVar6 = iVar7;
        }
        FUN_1803f6920(param_3,iVar6);
      }
      *param_3 = iVar1;
      *(undefined1 *)(*(longlong *)(param_3 + 2) + -1 + (longlong)iVar10) = 10;
      *(undefined1 *)((longlong)iVar10 + *(longlong *)(param_3 + 2)) = 0;
    }
    lVar13 = *(int *)(lVar14 + -4) + lVar14;
    lVar14 = 0;
    if (lVar13 != *(longlong *)(param_1 + 0x27d0) + 4 + (longlong)*(int *)(param_1 + 0x27c8)) {
      lVar14 = lVar13;
    }
  }
  return;
}



/* ===== 1803f4940 FUN_1803f4940 ===== */

void FUN_1803f4940(void)

{
  int *piVar1;
  longlong *plVar2;
  short *psVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  short sVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar7 = DAT_180ca0a50;
  lVar6 = **(longlong **)(DAT_180ca0a50 + 0x2058);
  *(undefined8 *)(lVar6 + 4) = 5;
  *(undefined4 *)(lVar6 + 0xc) = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar7 + 0x30);
  *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar7 + 0x38);
  if ((*(char *)(lVar7 + 0x1fb9) != '\0') || (*(float *)(lVar7 + 0x90) < 0.0)) {
    fVar15 = DAT_1808acd08;
  }
  else {
    fVar15 = (float)*(double *)(lVar7 + 0x10) - *(float *)(lVar7 + 0x90);
  }
  plVar12 = *(longlong **)(lVar7 + 0x2058);
  plVar2 = plVar12 + *(int *)(lVar7 + 0x2050);
  if (((longlong)*(int *)(lVar7 + 0x2050) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar6 = *plVar12;
      uVar4 = *(undefined8 *)(lVar6 + 0xe0);
      uVar5 = *(undefined8 *)(lVar6 + 0xe8);
      fVar13 = (float)((ulonglong)uVar4 >> 0x20);
      *(undefined8 *)(lVar6 + 0xd0) = uVar4;
      *(undefined8 *)(lVar6 + 0xe8) = 0;
      *(undefined8 *)(lVar6 + 0xe0) = 0;
      *(undefined8 *)(lVar6 + 0xd8) = uVar5;
      *(ulonglong *)(lVar6 + 0x20) =
           CONCAT44(fVar13 + (float)((ulonglong)*(undefined8 *)(lVar6 + 8) >> 0x20),
                    (float)uVar4 + (float)*(undefined8 *)(lVar6 + 8));
      fVar14 = (*(float *)(lVar6 + 0x14) - fVar13) - (float)((ulonglong)uVar5 >> 0x20);
      fVar13 = 0.0;
      if (0.0 <= fVar14) {
        fVar13 = fVar14;
      }
      *(float *)(lVar6 + 0x2c) = fVar13;
      fVar14 = (*(float *)(lVar6 + 0x10) - (float)uVar4) - (float)uVar5;
      fVar13 = 0.0;
      if (0.0 <= fVar14) {
        fVar13 = fVar14;
      }
      *(float *)(lVar6 + 0x28) = fVar13;
      if ((*(float *)(lVar6 + 0x58) <= fVar15 && fVar15 != *(float *)(lVar6 + 0x58)) &&
         (lVar7 = *(longlong *)(lVar6 + 0x40), lVar7 != 0)) {
        FUN_1803fb9a0(lVar7);
        lVar8 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          piVar1 = (int *)(DAT_180ca0a50 + 4);
          lVar11 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8;
          if (*(int *)(DAT_180ca0a50 + 0x29c0 + lVar11) != *piVar1) {
            iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
            sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
            *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
            lVar11 = (longlong)sVar9 * 8;
            *(int *)(lVar11 + 0x29c0 + lVar8) = *piVar1;
            *(undefined4 *)(lVar11 + 0x29c4 + lVar8) = 0;
          }
          psVar3 = (short *)(lVar11 + 0x29c6 + lVar8);
          *psVar3 = *psVar3 + 1;
          *(int *)(lVar8 + 0x29b8) = *(int *)(lVar8 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar7);
        *(undefined8 *)(lVar6 + 0x40) = 0;
      }
      if ((*(float *)(lVar6 + 0x5c) <= fVar15 && fVar15 != *(float *)(lVar6 + 0x5c)) &&
         (lVar7 = *(longlong *)(lVar6 + 0x48), lVar7 != 0)) {
        FUN_1803fb9a0(lVar7);
        lVar8 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          piVar1 = (int *)(DAT_180ca0a50 + 4);
          lVar11 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8;
          if (*(int *)(DAT_180ca0a50 + 0x29c0 + lVar11) != *piVar1) {
            iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
            sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
            *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
            lVar11 = (longlong)sVar9 * 8;
            *(int *)(lVar11 + 0x29c0 + lVar8) = *piVar1;
            *(undefined4 *)(lVar11 + 0x29c4 + lVar8) = 0;
          }
          psVar3 = (short *)(lVar11 + 0x29c6 + lVar8);
          *psVar3 = *psVar3 + 1;
          *(int *)(lVar8 + 0x29b8) = *(int *)(lVar8 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar7);
        *(undefined8 *)(lVar6 + 0x48) = 0;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
  }
  return;
}



/* ===== 1803f4bf0 FUN_1803f4bf0 ===== */

undefined8 FUN_1803f4bf0(longlong param_1)

{
  BOOL BVar1;
  int cbMultiByte;
  int iVar2;
  int iVar3;
  HANDLE hMem;
  LPCWSTR lpWideCharStr;
  
  FUN_1803d6150(param_1 + 0x26e0);
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  hMem = GetClipboardData(0xd);
  if (hMem == (HANDLE)0x0) {
    CloseClipboard();
    return 0;
  }
  lpWideCharStr = GlobalLock(hMem);
  if (lpWideCharStr != (LPCWSTR)0x0) {
    cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
    iVar2 = *(int *)(param_1 + 0x26e4);
    if (iVar2 < cbMultiByte) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      iVar3 = cbMultiByte;
      if (cbMultiByte < iVar2) {
        iVar3 = iVar2;
      }
      FUN_1803f6920(param_1 + 0x26e0,iVar3);
    }
    *(int *)(param_1 + 0x26e0) = cbMultiByte;
    WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,*(LPSTR *)(param_1 + 0x26e8),cbMultiByte,
                        (LPCSTR)0x0,(LPBOOL)0x0);
  }
  GlobalUnlock(hMem);
  CloseClipboard();
  return *(undefined8 *)(param_1 + 0x26e8);
}



/* ===== 1803f4d40 FUN_1803f4d40 ===== */

void FUN_1803f4d40(undefined8 param_1,LPCSTR param_2)

{
  BOOL BVar1;
  int cchWideChar;
  HGLOBAL hMem;
  LPWSTR lpWideCharStr;
  HANDLE pvVar2;
  
  BVar1 = OpenClipboard((HWND)0x0);
  if (BVar1 != 0) {
    cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
    hMem = GlobalAlloc(2,(longlong)cchWideChar * 2);
    if (hMem != (HGLOBAL)0x0) {
      lpWideCharStr = GlobalLock(hMem);
      MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,cchWideChar);
      GlobalUnlock(hMem);
      EmptyClipboard();
      pvVar2 = SetClipboardData(0xd,hMem);
      if (pvVar2 == (HANDLE)0x0) {
        GlobalFree(hMem);
      }
    }
    CloseClipboard();
  }
  return;
}



/* ===== 1803f4e10 FUN_1803f4e10 ===== */

bool FUN_1803f4e10(undefined8 param_1,LPCSTR param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  HINSTANCE pHVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  
  iVar3 = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  lpWideCharStr = (LPCWSTR)0x0;
  if (0 < iVar3) {
    iVar7 = iVar3;
    if (iVar3 < 8) {
      iVar7 = 8;
    }
    if ((0 < iVar7) &&
       (lpWideCharStr = (LPCWSTR)_malloc_base((longlong)iVar7 * 2), DAT_180ca0a50 != 0)) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
  }
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr,iVar3);
  pHVar4 = ShellExecuteW((HWND)0x0,L"open",lpWideCharStr,(LPCWSTR)0x0,(LPCWSTR)0x0,10);
  lVar2 = DAT_180ca0a50;
  if (lpWideCharStr != (LPCWSTR)0x0) {
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar6 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar6 != *piVar1) {
        iVar3 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar5 = (short)iVar3 + (short)(iVar3 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar5;
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar5 * 8);
        *piVar6 = *piVar1;
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lpWideCharStr);
  }
  return 0x20 < (longlong)pHVar4;
}



/* ===== 1803f4f80 FUN_1803f4f80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803f4f80(undefined8 param_1,longlong param_2,longlong param_3)

{
  HWND pHVar1;
  HIMC pHVar2;
  undefined1 auStack_78 [32];
  tagCANDIDATEFORM local_58;
  tagCOMPOSITIONFORM local_38;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  pHVar1 = *(HWND *)(param_2 + 0x38);
  if ((pHVar1 != (HWND)0x0) && (pHVar2 = ImmGetContext(pHVar1), pHVar2 != (HIMC)0x0)) {
    local_38.dwStyle = 0x20;
    local_38.rcArea.left = 0;
    local_38.rcArea.top = 0;
    local_38.rcArea.right = 0;
    local_38.rcArea.bottom = 0;
    local_38.ptCurrentPos.y = (int)(float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    local_38.ptCurrentPos.x = (int)(float)*(undefined8 *)(param_3 + 4);
    ImmSetCompositionWindow(pHVar2,&local_38);
    local_58.dwIndex = 0;
    local_58.rcArea.left = 0;
    local_58.rcArea.top = 0;
    local_58.rcArea.right = 0;
    local_58.rcArea.bottom = 0;
    local_58.dwStyle = 0x40;
    local_58.ptCurrentPos.y = (int)(float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
    local_58.ptCurrentPos.x = (int)(float)*(undefined8 *)(param_3 + 4);
    ImmSetCandidateWindow(pHVar2,&local_58);
    ImmReleaseContext(pHVar1,pHVar2);
  }
  return;
}



/* ===== 1803f5060 FUN_1803f5060 ===== */

void FUN_1803f5060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1803f5090(param_1,&local_res10);
  return;
}



/* ===== 1803f5090 FUN_1803f5090 ===== */

void FUN_1803f5090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  lVar3 = DAT_180ca0a50;
  iVar8 = *(int *)(DAT_180ca0a50 + 0x28f8) + -1;
  if (*(int *)(DAT_180ca0a50 + 0x28f8) == 0) {
    iVar8 = 0;
  }
  if (*(char *)(DAT_180ca0a50 + 0x18) == '\0') {
    FUN_1803d85d0(DAT_180ca0a50 + 0x28f8,"[%05d] ");
  }
  else {
    FUN_1803d85d0(DAT_180ca0a50 + 0x28f8,"[%s] [%05d] ",DAT_180ca0a50 + 0x18,
                  *(undefined4 *)(DAT_180ca0a50 + 4));
  }
  FUN_1803d8600(lVar3 + 0x28f8,param_1,param_2);
  iVar9 = *(int *)(lVar3 + 0x28f8) + -1;
  if (*(int *)(lVar3 + 0x28f8) == 0) {
    iVar9 = 0;
  }
  puVar6 = &DAT_180ca006f;
  if (*(undefined **)(lVar3 + 0x2900) != (undefined *)0x0) {
    puVar6 = *(undefined **)(lVar3 + 0x2900);
  }
  if (iVar8 != iVar9) {
    piVar2 = (int *)(lVar3 + 0x2908);
    if ((*(int *)(lVar3 + 0x2918) == 0) || (puVar6[(longlong)*(int *)(lVar3 + 0x2918) + -1] == '\n')
       ) {
      iVar4 = *(int *)(lVar3 + 0x290c);
      if (*piVar2 == iVar4) {
        iVar7 = *piVar2 + 1;
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        if (iVar7 < iVar4) {
          iVar7 = iVar4;
        }
        FUN_18007e1d0(piVar2,iVar7);
      }
      *(undefined4 *)(*(longlong *)(lVar3 + 0x2910) + (longlong)*piVar2 * 4) =
           *(undefined4 *)(lVar3 + 0x2918);
      *piVar2 = *piVar2 + 1;
    }
    lVar5 = FUN_180540ca0(puVar6 + iVar8,10,(longlong)iVar9 - (longlong)iVar8);
    while (lVar5 != 0) {
      puVar1 = (undefined *)(lVar5 + 1);
      if (puVar1 < puVar6 + iVar9) {
        iVar4 = *(int *)(lVar3 + 0x290c);
        if (*piVar2 == iVar4) {
          iVar7 = *piVar2 + 1;
          if (iVar4 == 0) {
            iVar4 = 8;
          }
          else {
            iVar4 = iVar4 / 2 + iVar4;
          }
          if (iVar7 < iVar4) {
            iVar7 = iVar4;
          }
          FUN_18007e1d0(piVar2,iVar7);
        }
        *(int *)(*(longlong *)(lVar3 + 0x2910) + (longlong)*piVar2 * 4) = (int)puVar1 - (int)puVar6;
        *piVar2 = *piVar2 + 1;
      }
      lVar5 = FUN_180540ca0(puVar1,10,(longlong)(puVar6 + iVar9) - (longlong)puVar1);
    }
    if (iVar9 <= *(int *)(lVar3 + 0x2918)) {
      iVar9 = *(int *)(lVar3 + 0x2918);
    }
    *(int *)(lVar3 + 0x2918) = iVar9;
  }
  puVar6 = &DAT_180ca006f;
  if (*(undefined **)(lVar3 + 0x2900) != (undefined *)0x0) {
    puVar6 = *(undefined **)(lVar3 + 0x2900);
  }
  if ((*(uint *)(lVar3 + 0x28f4) & 0x100000) != 0) {
    printf("%s",puVar6 + iVar8);
  }
  if ((*(uint *)(lVar3 + 0x28f4) & 0x200000) == 0) {
    return;
  }
  OutputDebugStringA("[imgui] ");
                    /* WARNING: Could not recover jumptable at 0x0001803f52d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringA(puVar6 + iVar8);
  return;
}



/* ===== 1803f52e0 FUN_1803f52e0 ===== */

void FUN_1803f52e0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  
  lVar3 = DAT_180ca0a50;
  if (*(char *)(DAT_180ca0a50 + 0x292a) != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar7 = *(float *)(DAT_180ca0a50 + 0x1ef4);
  fVar10 = *(float *)(DAT_180ca0a50 + 0x1ef8);
  fVar6 = *(float *)(DAT_180ca0a50 + 0x1efc);
  fVar5 = *(float *)(DAT_180ca0a50 + 0x1f00);
  *(undefined4 *)(DAT_180ca0a50 + 0x1eac) = 0;
  lVar4 = FUN_1803ddf50(**(undefined8 **)(lVar3 + 0x2058),1,"##Foreground");
  local_cc = DAT_1808ac1f4;
  local_d4 = *(float *)(lVar3 + 0x114);
  local_d8 = *(float *)(lVar3 + 0x110);
  fVar6 = fVar6 + DAT_1808ac658;
  fVar10 = fVar10 - DAT_1808ac658;
  fVar7 = fVar7 - DAT_1808ac658;
  fVar5 = fVar5 + DAT_1808ac658;
  if (fVar10 <= local_d4) {
    fVar8 = fVar5;
    if (local_d4 <= fVar5) {
      fVar8 = local_d4;
    }
  }
  else {
    fVar8 = fVar10;
  }
  if (fVar7 <= local_d8) {
    fVar9 = fVar6;
    if (local_d8 <= fVar6) {
      fVar9 = local_d8;
    }
  }
  else {
    fVar9 = fVar7;
  }
  local_res10 = fVar7 + DAT_1808ac1f4;
  local_res14 = fVar10 + DAT_1808ac1f4;
  local_resc = DAT_1808ac1f4;
  if ((*(byte *)(lVar4 + 0x30) & 1) == 0) {
    local_resc = DAT_1808ac1e0;
  }
  local_res8 = fVar6 - local_resc;
  local_resc = fVar5 - local_resc;
  FUN_1803fe160(lVar4,&local_res10,&local_res8,0,0);
  uVar2 = DAT_1808ac34c;
  FUN_1803fc600(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),0xff00ff00,
                DAT_1808ac34c,0x200);
  local_d8 = local_d8 + local_cc;
  local_d4 = local_d4 + local_cc;
  local_d0 = fVar9 + local_cc;
  *(undefined4 *)(lVar4 + 0x50) = 0;
  local_cc = fVar8 + local_cc;
  FUN_1803fc600(lVar4,&local_d8,2,0xff00ff00,uVar2,0);
  return;
}



/* ===== 1803f5500 FUN_1803f5500 ===== */

int FUN_1803f5500(int *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res10 [8];
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    *(undefined2 *)((longlong)param_1 + 5) = 0xff00;
    iVar3 = param_1[3];
    if (iVar3 < 0) {
      iVar3 = iVar3 + iVar3 / 2;
      iVar4 = 0;
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
      FUN_1803f6f10(param_1 + 2,iVar4);
    }
    param_1[2] = 0;
    if (0 < param_1[6]) {
      **(undefined1 **)(param_1 + 8) = 0;
    }
    local_res10[0] = 0;
    FUN_1803f6a20(param_1 + 6,0,local_res10);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 == 0) {
    return 0;
  }
  cVar2 = *(char *)((longlong)param_1 + 6);
  if (-1 < cVar2) {
    iVar3 = (int)cVar2;
    if ((param_1[2] <= iVar3) ||
       ((*(char *)(*(longlong *)(param_1 + 4) + 5 + (longlong)cVar2 * 0xc) == '\0' &&
        (*(char *)(*(longlong *)(param_1 + 4) + 4 + (longlong)cVar2 * 0xc) < '\x03')))) {
      iVar4 = param_1[2];
      *(bool *)((longlong)param_1 + 5) = iVar3 == iVar4;
      goto LAB_1803f55e6;
    }
    cVar2 = cVar2 + '\x01';
    *(char *)((longlong)param_1 + 6) = cVar2;
  }
  iVar4 = param_1[2];
  iVar3 = (int)cVar2;
  *(bool *)((longlong)param_1 + 5) = iVar3 == iVar4;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 1) = 1;
    return param_2;
  }
  if (cVar2 < '\0') {
    return 0;
  }
LAB_1803f55e6:
  if (iVar3 < iVar4) {
    pcVar1 = (char *)(*(longlong *)(param_1 + 4) + 4 + (longlong)cVar2 * 0xc);
    *pcVar1 = *pcVar1 + '\x01';
    *(undefined1 *)(param_1 + 1) = 1;
    return *(int *)(*(longlong *)(param_1 + 4) + (longlong)*(char *)((longlong)param_1 + 6) * 0xc);
  }
  return 0;
}



/* ===== 1803f5630 FUN_1803f5630 ===== */

void FUN_1803f5630(uint param_1,int param_2,char *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_res20;
  undefined8 local_38 [2];
  
  lVar4 = DAT_180ca0a50;
  uVar11 = (ulonglong)param_1;
  if (*(char *)(DAT_180ca0a50 + 0x2974) == '\0') {
    return;
  }
  cVar1 = *(char *)(DAT_180ca0a50 + 0x2976);
  lVar10 = (longlong)cVar1;
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (cVar1 == -1) {
    *(undefined1 *)(DAT_180ca0a50 + 0x2976) = 0;
    iVar5 = *(int *)(lVar4 + 0x297c);
    iVar8 = *(int *)(lVar2 + 0x108) + 1;
    local_38[0] = 0xff000000000000;
    if (iVar5 < iVar8) {
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      iVar3 = iVar8;
      if (iVar8 < iVar5) {
        iVar3 = iVar5;
      }
      local_res20 = param_4;
      FUN_1803f6f10(lVar4 + 0x2978,iVar3);
    }
    for (iVar5 = *(int *)(lVar4 + 0x2978); iVar5 < iVar8; iVar5 = iVar5 + 1) {
      lVar10 = *(longlong *)(lVar4 + 0x2980);
      *(undefined8 *)(lVar10 + (longlong)iVar5 * 0xc) = local_38[0];
      *(undefined4 *)(lVar10 + 8 + (longlong)iVar5 * 0xc) = 0xffffffff;
    }
    *(int *)(lVar4 + 0x2978) = iVar8;
    iVar5 = *(int *)(lVar2 + 0x108);
    if (iVar5 + 1 < 1) {
      return;
    }
    iVar8 = 0;
    do {
      if (iVar8 < iVar5) {
        uVar7 = *(uint *)(*(longlong *)(lVar2 + 0x110) + (longlong)iVar8 * 4);
      }
      else {
        uVar7 = param_1;
      }
      lVar10 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      *(uint *)(*(longlong *)(lVar4 + 0x2980) + lVar10 * 0xc) = uVar7;
      iVar5 = *(int *)(lVar2 + 0x108);
    } while (iVar8 < iVar5 + 1);
    return;
  }
  if ((int)cVar1 != *(int *)(lVar2 + 0x108)) {
    return;
  }
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x2980);
  if (*(int *)(lVar2 + 8 + lVar10 * 0xc) != -1) goto LAB_1803f5844;
  local_38[0] = 0;
  local_res20 = 0;
  if (param_2 == 4) {
    uVar11 = (ulonglong)param_3 & 0xffffffff;
    pcVar9 = "%d";
LAB_1803f5808:
    FUN_1803d7690(local_38,&local_res20,pcVar9,uVar11);
  }
  else if (param_2 == 0xb) {
    sVar6 = strlen(param_3);
    FUN_1803d7690(local_38,&local_res20,&DAT_1808a8fb4,sVar6 & 0xffffffff,param_3);
  }
  else if (param_2 == 0xc) {
    FUN_1803d7690(local_38,&local_res20,"(void*)0x%p",param_3);
  }
  else if (param_2 == 0xd) {
    pcVar9 = "0x%08X [override]";
    goto LAB_1803f5808;
  }
  iVar8 = *(int *)(lVar4 + 0x2988);
  iVar5 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar5 = 0;
  }
  *(int *)(lVar2 + 8 + lVar10 * 0xc) = iVar5;
  FUN_1803d8520((int *)(lVar4 + 0x2988),local_38[0],local_res20 + 1);
LAB_1803f5844:
  *(undefined1 *)(lVar2 + 5 + lVar10 * 0xc) = 1;
  if (*(char *)(lVar2 + 6 + lVar10 * 0xc) == -1) {
    *(char *)(lVar2 + 6 + lVar10 * 0xc) = (char)param_2;
  }
  return;
}



/* ===== 1803f5870 FUN_1803f5870 ===== */

void FUN_1803f5870(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar6 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar6 != *piVar1) {
        iVar5 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar4;
        piVar6 = (int *)(lVar3 + 0x29c0 + (longlong)sVar4 * 8);
        *piVar6 = *piVar1;
        *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar4 * 8) = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar2);
  }
  return;
}



/* ===== 1803f5900 FUN_1803f5900 ===== */

void FUN_1803f5900(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar7 = param_1[1];
  if (*param_1 == iVar7) {
    iVar9 = *param_1 + 1;
    if (iVar7 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar7 / 2 + iVar7;
    }
    if (iVar9 < iVar3) {
      iVar9 = iVar3;
    }
    if (iVar7 < iVar9) {
      uVar4 = _malloc_base((longlong)iVar9 * 0x50);
      lVar2 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_180540530(uVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x50);
        lVar5 = *(longlong *)(param_1 + 2);
        if ((lVar5 != 0) && (lVar2 != 0)) {
          piVar8 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
          if (*piVar8 != *(int *)(lVar2 + 4)) {
            iVar7 = *(short *)(lVar2 + 0x29bc) + 1;
            sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
            *(short *)(lVar2 + 0x29bc) = sVar6;
            piVar8 = (int *)(lVar2 + 0x29c0 + (longlong)sVar6 * 8);
            *piVar8 = *(int *)(lVar2 + 4);
            *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar6 * 8) = 0;
          }
          *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
          *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar5);
      }
      *(undefined8 *)(param_1 + 2) = uVar4;
      param_1[1] = iVar9;
    }
  }
  lVar5 = (longlong)*param_1;
  uVar4 = param_2[1];
  lVar2 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar2 + lVar5 * 0x50);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  uVar4 = param_2[3];
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar5 * 0x50);
  *puVar1 = param_2[2];
  puVar1[1] = uVar4;
  uVar4 = param_2[5];
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar5 * 0x50);
  *puVar1 = param_2[4];
  puVar1[1] = uVar4;
  uVar4 = param_2[7];
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar5 * 0x50);
  *puVar1 = param_2[6];
  puVar1[1] = uVar4;
  uVar4 = param_2[9];
  puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar5 * 0x50);
  *puVar1 = param_2[8];
  puVar1[1] = uVar4;
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 1803f5a70 FUN_1803f5a70 ===== */

void FUN_1803f5a70(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  FUN_1803d6150(param_1 + 2);
  lVar2 = DAT_180ca0a50;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    *param_1 = 0;
    if (lVar2 != 0) {
      piVar5 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
      if (*piVar5 != *(int *)(lVar2 + 4)) {
        iVar4 = *(short *)(lVar2 + 0x29bc) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(lVar2 + 0x29bc) = sVar3;
        piVar5 = (int *)(lVar2 + 0x29c0 + (longlong)sVar3 * 8);
        *piVar5 = *(int *)(lVar2 + 4);
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar3 * 8) = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar1);
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}



/* ===== 1803f5b20 FUN_1803f5b20 ===== */

void FUN_1803f5b20(longlong param_1)

{
  FUN_1803f5a70();
  FUN_1803f5870(param_1 + 0x10);
  FUN_1803f5870(param_1);
  return;
}



/* ===== 1803f5b50 FUN_1803f5b50 ===== */

void FUN_1803f5b50(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *param_1) {
    do {
      FUN_1803f5870((longlong)iVar5 * 0x58 + *(longlong *)(param_1 + 2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_1);
  }
  lVar2 = DAT_180ca0a50;
  lVar1 = *(longlong *)(param_1 + 2);
  if (lVar1 != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (lVar2 != 0) {
      piVar4 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
      if (*piVar4 != *(int *)(lVar2 + 4)) {
        iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
        sVar3 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(lVar2 + 0x29bc) = sVar3;
        piVar4 = (int *)(lVar2 + 0x29c0 + (longlong)sVar3 * 8);
        *piVar4 = *(int *)(lVar2 + 4);
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar3 * 8) = 0;
      }
      *(short *)((longlong)piVar4 + 6) = *(short *)((longlong)piVar4 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar1);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* ===== 1803f5c30 FUN_1803f5c30 ===== */

void FUN_1803f5c30(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 2)) {
    do {
      iVar1 = *(int *)(param_1[3] + 8 + (longlong)iVar6 * 0x10);
      if (iVar1 != -1) {
        lVar2 = param_1[1];
        uVar7 = (longlong)iVar1 * 0xb0;
        FUN_1803f5870(lVar2 + 0xa0 + uVar7);
        FUN_1803f5870(lVar2 + (uVar7 | 8));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 2));
  }
  FUN_1803d6150(param_1 + 2);
  lVar3 = DAT_180ca0a50;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    *param_1 = 0;
    if (lVar3 != 0) {
      piVar5 = (int *)(lVar3 + 0x29c0 + (longlong)*(short *)(lVar3 + 0x29bc) * 8);
      if (*piVar5 != *(int *)(lVar3 + 4)) {
        iVar6 = *(short *)(lVar3 + 0x29bc) + 1;
        sVar4 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(lVar3 + 0x29bc) = sVar4;
        piVar5 = (int *)(lVar3 + 0x29c0 + (longlong)sVar4 * 8);
        *piVar5 = *(int *)(lVar3 + 4);
        *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar4 * 8) = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar2);
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}



/* ===== 1803f5d50 FUN_1803f5d50 ===== */

void FUN_1803f5d50(longlong param_1)

{
  FUN_1803f5c30();
  FUN_1803f5870(param_1 + 0x10);
  FUN_1803f5870(param_1);
  return;
}



/* ===== 1803f5d80 FUN_1803f5d80 ===== */

void FUN_1803f5d80(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 2)) {
    do {
      iVar1 = *(int *)(param_1[3] + 8 + (longlong)iVar6 * 0x10);
      if (iVar1 != -1) {
        FUN_1803f6c30((longlong)iVar1 * 0x250 + param_1[1]);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 2));
  }
  FUN_1803d6150(param_1 + 2);
  lVar3 = DAT_180ca0a50;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    *param_1 = 0;
    if (lVar3 != 0) {
      piVar5 = (int *)(lVar3 + 0x29c0 + (longlong)*(short *)(lVar3 + 0x29bc) * 8);
      if (*piVar5 != *(int *)(lVar3 + 4)) {
        iVar6 = *(short *)(lVar3 + 0x29bc) + 1;
        sVar4 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(lVar3 + 0x29bc) = sVar4;
        piVar5 = (int *)(lVar3 + 0x29c0 + (longlong)sVar4 * 8);
        *piVar5 = *(int *)(lVar3 + 4);
        *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar4 * 8) = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar2);
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}



/* ===== 1803f5e70 FUN_1803f5e70 ===== */

void FUN_1803f5e70(longlong param_1)

{
  FUN_1803f5d80();
  FUN_1803f5870(param_1 + 0x10);
  FUN_1803f5870(param_1);
  return;
}



/* ===== 1803f5ea0 FUN_1803f5ea0 ===== */

void FUN_1803f5ea0(int *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  iVar7 = 0;
  if (0 < *param_1) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar7 * 8);
      if (lVar3 != 0) {
        FUN_1803d6320(lVar3);
        lVar4 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          iVar2 = *(int *)(DAT_180ca0a50 + 4);
          lVar5 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8;
          if (*(int *)(DAT_180ca0a50 + 0x29c0 + lVar5) != iVar2) {
            iVar9 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
            sVar8 = (short)iVar9 + (short)(iVar9 / 6) * -6;
            *(short *)(DAT_180ca0a50 + 0x29bc) = sVar8;
            lVar5 = (longlong)sVar8 * 8;
            *(undefined4 *)(lVar5 + 0x29c4 + lVar4) = 0;
            *(int *)(lVar5 + 0x29c0 + lVar4) = iVar2;
          }
          psVar1 = (short *)(lVar5 + 0x29c6 + lVar4);
          *psVar1 = *psVar1 + 1;
          *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_1);
  }
  lVar4 = DAT_180ca0a50;
  lVar3 = *(longlong *)(param_1 + 2);
  if (lVar3 != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (lVar4 != 0) {
      piVar6 = (int *)(lVar4 + 0x29c0 + (longlong)*(short *)(lVar4 + 0x29bc) * 8);
      if (*piVar6 != *(int *)(lVar4 + 4)) {
        iVar7 = *(short *)(lVar4 + 0x29bc) + 1;
        sVar8 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(lVar4 + 0x29bc) = sVar8;
        piVar6 = (int *)(lVar4 + 0x29c0 + (longlong)sVar8 * 8);
        *piVar6 = *(int *)(lVar4 + 4);
        *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar8 * 8) = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar3);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* ===== 1803f6010 FUN_1803f6010 ===== */

void FUN_1803f6010(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  if (*param_1 == iVar4) {
    iVar6 = *param_1 + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    FUN_1803f6cf0(param_1,iVar6);
  }
  uVar3 = param_2[1];
  lVar5 = (longlong)*param_1 * 0x58;
  lVar2 = *(longlong *)(param_1 + 2);
  *(undefined8 *)(lVar5 + lVar2) = *param_2;
  ((undefined8 *)(lVar5 + lVar2))[1] = uVar3;
  uVar3 = param_2[3];
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar2);
  *puVar1 = param_2[2];
  puVar1[1] = uVar3;
  uVar3 = param_2[5];
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar2);
  *puVar1 = param_2[4];
  puVar1[1] = uVar3;
  uVar3 = param_2[7];
  puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar2);
  *puVar1 = param_2[6];
  puVar1[1] = uVar3;
  uVar3 = param_2[9];
  puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar2);
  *puVar1 = param_2[8];
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar5 + 0x50 + lVar2) = param_2[10];
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 1803f60b0 FUN_1803f60b0 ===== */

void FUN_1803f60b0(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar6 = param_1[1];
  if (param_2 <= iVar6) {
    *param_1 = param_2;
    return;
  }
  if (iVar6 == 0) {
    iVar3 = 8;
  }
  else {
    iVar3 = iVar6 / 2 + iVar6;
  }
  iVar8 = param_2;
  if (param_2 < iVar3) {
    iVar8 = iVar3;
  }
  if (iVar8 <= iVar6) {
    *param_1 = param_2;
    return;
  }
  uVar4 = _malloc_base((longlong)iVar8 * 0x3c);
  lVar2 = DAT_180ca0a50;
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_180540530(uVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x3c);
    lVar1 = *(longlong *)(param_1 + 2);
    if ((lVar1 != 0) && (lVar2 != 0)) {
      piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
      if (*piVar7 != *(int *)(lVar2 + 4)) {
        iVar6 = *(short *)(lVar2 + 0x29bc) + 1;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(lVar2 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)sVar5 * 8);
        *piVar7 = *(int *)(lVar2 + 4);
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar1);
  }
  *(undefined8 *)(param_1 + 2) = uVar4;
  param_1[1] = iVar8;
  *param_1 = param_2;
  return;
}



/* ===== 1803f6200 FUN_1803f6200 ===== */

void FUN_1803f6200(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar7 = param_1[1];
  if (*param_1 == iVar7) {
    iVar9 = *param_1 + 1;
    if (iVar7 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar7 / 2 + iVar7;
    }
    if (iVar9 < iVar4) {
      iVar9 = iVar4;
    }
    if (iVar7 < iVar9) {
      uVar5 = _malloc_base((longlong)iVar9 << 4);
      lVar3 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_180540530(uVar5,*(longlong *)(param_1 + 2),(longlong)*param_1 << 4);
        lVar2 = *(longlong *)(param_1 + 2);
        if ((lVar2 != 0) && (lVar3 != 0)) {
          piVar8 = (int *)(lVar3 + 0x29c0 + (longlong)*(short *)(lVar3 + 0x29bc) * 8);
          if (*piVar8 != *(int *)(lVar3 + 4)) {
            iVar7 = *(short *)(lVar3 + 0x29bc) + 1;
            sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
            *(short *)(lVar3 + 0x29bc) = sVar6;
            piVar8 = (int *)(lVar3 + 0x29c0 + (longlong)sVar6 * 8);
            *piVar8 = *(int *)(lVar3 + 4);
            *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar6 * 8) = 0;
          }
          *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
          *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar2);
      }
      *(undefined8 *)(param_1 + 2) = uVar5;
      param_1[1] = iVar9;
    }
  }
  uVar5 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 1803f6350 FUN_1803f6350 ===== */

void FUN_1803f6350(int *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar6 = param_1[1];
  if (*param_1 == iVar6) {
    iVar8 = *param_1 + 1;
    if (iVar6 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar6 / 2 + iVar6;
    }
    if (iVar8 < iVar3) {
      iVar8 = iVar3;
    }
    if (iVar6 < iVar8) {
      uVar4 = _malloc_base((longlong)iVar8 * 0xc);
      lVar2 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_180540530(uVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xc);
        lVar1 = *(longlong *)(param_1 + 2);
        if ((lVar1 != 0) && (lVar2 != 0)) {
          piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
          if (*piVar7 != *(int *)(lVar2 + 4)) {
            iVar6 = *(short *)(lVar2 + 0x29bc) + 1;
            sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
            *(short *)(lVar2 + 0x29bc) = sVar5;
            piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)sVar5 * 8);
            *piVar7 = *(int *)(lVar2 + 4);
            *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar5 * 8) = 0;
          }
          *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
          *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar1);
      }
      *(undefined8 *)(param_1 + 2) = uVar4;
      param_1[1] = iVar8;
    }
  }
  iVar6 = *param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  *(undefined8 *)(lVar2 + (longlong)iVar6 * 0xc) = *param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar6 * 0xc) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 1803f64b0 FUN_1803f64b0 ===== */

void FUN_1803f64b0(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar7 = param_1[1];
  if (*param_1 == iVar7) {
    iVar9 = *param_1 + 1;
    if (iVar7 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar7 / 2 + iVar7;
    }
    if (iVar9 < iVar4) {
      iVar9 = iVar4;
    }
    if (iVar7 < iVar9) {
      uVar5 = _malloc_base((longlong)iVar9 * 0x14);
      lVar3 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_180540530(uVar5,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x14);
        lVar2 = *(longlong *)(param_1 + 2);
        if ((lVar2 != 0) && (lVar3 != 0)) {
          piVar8 = (int *)(lVar3 + 0x29c0 + (longlong)*(short *)(lVar3 + 0x29bc) * 8);
          if (*piVar8 != *(int *)(lVar3 + 4)) {
            iVar7 = *(short *)(lVar3 + 0x29bc) + 1;
            sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
            *(short *)(lVar3 + 0x29bc) = sVar6;
            piVar8 = (int *)(lVar3 + 0x29c0 + (longlong)sVar6 * 8);
            *piVar8 = *(int *)(lVar3 + 4);
            *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar6 * 8) = 0;
          }
          *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
          *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar2);
      }
      *(undefined8 *)(param_1 + 2) = uVar5;
      param_1[1] = iVar9;
    }
  }
  iVar7 = *param_1;
  uVar5 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x14);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar7 * 0x14) = *(undefined4 *)(param_2 + 2);
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 1803f6610 FUN_1803f6610 ===== */

void FUN_1803f6610(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar6 = param_1[1];
  if (param_2 <= iVar6) {
    *param_1 = param_2;
    return;
  }
  if (iVar6 == 0) {
    iVar3 = 8;
  }
  else {
    iVar3 = iVar6 / 2 + iVar6;
  }
  iVar8 = param_2;
  if (param_2 < iVar3) {
    iVar8 = iVar3;
  }
  if (iVar8 <= iVar6) {
    *param_1 = param_2;
    return;
  }
  uVar4 = _malloc_base((longlong)iVar8 * 0x88);
  lVar2 = DAT_180ca0a50;
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_180540530(uVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x88);
    lVar1 = *(longlong *)(param_1 + 2);
    if ((lVar1 != 0) && (lVar2 != 0)) {
      piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
      if (*piVar7 != *(int *)(lVar2 + 4)) {
        iVar6 = *(short *)(lVar2 + 0x29bc) + 1;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(lVar2 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)sVar5 * 8);
        *piVar7 = *(int *)(lVar2 + 4);
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar1);
  }
  *(undefined8 *)(param_1 + 2) = uVar4;
  param_1[1] = iVar8;
  *param_1 = param_2;
  return;
}



/* ===== 1803f6760 FUN_1803f6760 ===== */

void FUN_1803f6760(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 0x14);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x14);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 1803f6880 FUN_1803f6880 ===== */

longlong FUN_1803f6880(int *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar3 = param_1[1];
  uVar6 = param_2 - *(longlong *)(param_1 + 2);
  if (*param_1 == iVar3) {
    iVar4 = *param_1 + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_1803f7030(param_1,iVar4);
  }
  if ((longlong)uVar6 >> 4 < (longlong)*param_1) {
    lVar5 = (uVar6 & 0xfffffffffffffff0) + *(longlong *)(param_1 + 2);
    FUN_180540530(lVar5 + 0x10,lVar5,((longlong)*param_1 - ((longlong)uVar6 >> 4)) * 0x10);
  }
  uVar2 = param_3[1];
  puVar1 = (undefined8 *)((uVar6 & 0xfffffffffffffff0) + *(longlong *)(param_1 + 2));
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  *param_1 = *param_1 + 1;
  return *(longlong *)(param_1 + 2) + (uVar6 & 0xfffffffffffffff0);
}



/* ===== 1803f6920 FUN_1803f6920 ===== */

void FUN_1803f6920(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 1803f6a20 FUN_1803f6a20 ===== */

void FUN_1803f6a20(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = param_1[1];
  if (iVar3 < param_2) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    iVar2 = param_2;
    if (param_2 < iVar3) {
      iVar2 = iVar3;
    }
    FUN_1803f6920(param_1,iVar2);
  }
  iVar3 = *param_1;
  uVar6 = (ulonglong)iVar3;
  if (iVar3 < param_2) {
    if (0xf < (uint)(param_2 - iVar3)) {
      piVar5 = (int *)((longlong)(param_2 + -1) + *(longlong *)(param_1 + 2));
      piVar1 = (int *)(*(longlong *)(param_1 + 2) + uVar6);
      if (((param_1 + 2 < piVar1) || (piVar5 < param_1 + 2)) &&
         ((param_3 < piVar1 || (piVar5 < param_3)))) {
        uVar7 = param_2 - iVar3 & 0x8000000f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
        }
        uVar4 = ((param_2 - uVar7) - iVar3) + 0xf;
        uVar8 = 1;
        if (iVar3 < (int)(param_2 - uVar7)) {
          uVar8 = uVar4 >> 4;
        }
        uVar7 = iVar3 + uVar8 * 0x10;
        uVar6 = (ulonglong)uVar7;
        FUN_180540170(piVar1,(char)*param_3,
                      (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0xfU)) >> 4) << 4);
        if (param_2 <= (int)uVar7) goto LAB_1803f6b14;
      }
    }
    do {
      iVar3 = (int)uVar6;
      uVar7 = iVar3 + 1;
      uVar6 = (ulonglong)uVar7;
      *(char *)((longlong)iVar3 + *(longlong *)(param_1 + 2)) = (char)*param_3;
    } while ((int)uVar7 < param_2);
  }
LAB_1803f6b14:
  *param_1 = param_2;
  return;
}



/* ===== 1803f6b20 FUN_1803f6b20 ===== */

void FUN_1803f6b20(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 2);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 2);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 1803f6c30 FUN_1803f6c30 ===== */

longlong FUN_1803f6c30(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 != 0) && (DAT_180ca0a50 != 0)) {
    piVar1 = (int *)(DAT_180ca0a50 + 4);
    piVar6 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
    if (*piVar6 != *piVar1) {
      iVar5 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
      sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
      *(short *)(DAT_180ca0a50 + 0x29bc) = sVar4;
      piVar6 = (int *)(lVar3 + 0x29c0 + (longlong)sVar4 * 8);
      *piVar6 = *piVar1;
      *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar4 * 8) = 0;
    }
    *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
    *(int *)(lVar3 + 0x29b8) = *(int *)(lVar3 + 0x29b8) + 1;
  }
  thunk_FUN_1805277b0(lVar2);
  FUN_1803f5870(param_1 + 0x1e0);
  FUN_1803f5870(param_1 + 0x1c0);
  FUN_1803f5870(param_1 + 400);
  return param_1;
}



/* ===== 1803f6cf0 FUN_1803f6cf0 ===== */

void FUN_1803f6cf0(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 0x58);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x58);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 1803f6e00 FUN_1803f6e00 ===== */

void FUN_1803f6e00(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 0x1c);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x1c);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 1803f6f10 FUN_1803f6f10 ===== */

void FUN_1803f6f10(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 0xc);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xc);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 1803f7030 FUN_1803f7030 ===== */

void FUN_1803f7030(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 << 4);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 << 4);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 1803f7140 FUN_1803f7140 ===== */

void FUN_1803f7140(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  if (*param_1 == iVar4) {
    iVar6 = *param_1 + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    FUN_1803f71d0(param_1,iVar6);
  }
  lVar5 = (longlong)*param_1;
  uVar3 = param_2[1];
  lVar2 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar2 + lVar5 * 0x48);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  uVar3 = param_2[3];
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar5 * 0x48);
  *puVar1 = param_2[2];
  puVar1[1] = uVar3;
  uVar3 = param_2[5];
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar5 * 0x48);
  *puVar1 = param_2[4];
  puVar1[1] = uVar3;
  uVar3 = param_2[7];
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar5 * 0x48);
  *puVar1 = param_2[6];
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar2 + 0x40 + lVar5 * 0x48) = param_2[8];
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 1803f71d0 FUN_1803f71d0 ===== */

void FUN_1803f71d0(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 0x48);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x48);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 1803f72f0 FUN_1803f72f0 ===== */

void FUN_1803f72f0(int *param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  ulonglong uVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar4 = DAT_1808ad670._4_4_;
  iVar3 = (int)DAT_1808ad670;
  iVar5 = 0;
  uVar1 = param_5 - 1;
  if (0 < (int)uVar1) {
    iVar6 = iVar5;
    if ((7 < uVar1) && (1 < DAT_1809194c8)) {
      uVar7 = uVar1 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      do {
        auVar9._4_4_ = iVar4 + iVar5 + 1;
        auVar9._0_4_ = iVar3 + iVar5 + 1;
        lVar8 = (longlong)iVar5;
        auVar9._8_8_ = 0;
        auVar9 = pmovsxdq(in_XMM2,auVar9);
        uVar16 = auVar9._8_8_ * 0x10 + param_4;
        *(longlong *)(param_4 + 8 + lVar8 * 0x10) = auVar9._0_8_ * 0x10 + param_4;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar16;
        *(ulonglong *)(param_4 + 0x18 + lVar8 * 0x10) = uVar16;
        iVar6 = iVar5 + 5;
        auVar10._4_4_ = iVar4 + iVar5 + 3;
        auVar10._0_4_ = iVar3 + iVar5 + 3;
        auVar10._8_8_ = 0;
        auVar9 = pmovsxdq(auVar13,auVar10);
        uVar16 = auVar9._8_8_ * 0x10 + param_4;
        *(longlong *)(param_4 + 0x28 + lVar8 * 0x10) = auVar9._0_8_ * 0x10 + param_4;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar16;
        *(ulonglong *)(param_4 + 0x38 + lVar8 * 0x10) = uVar16;
        iVar2 = iVar5 + 7;
        iVar5 = iVar5 + 8;
        auVar11._4_4_ = iVar4 + iVar6;
        auVar11._0_4_ = iVar3 + iVar6;
        auVar11._8_8_ = 0;
        auVar9 = pmovsxdq(auVar14,auVar11);
        uVar16 = auVar9._8_8_ * 0x10 + param_4;
        *(longlong *)(param_4 + 0x48 + lVar8 * 0x10) = auVar9._0_8_ * 0x10 + param_4;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar16;
        *(ulonglong *)(param_4 + 0x58 + lVar8 * 0x10) = uVar16;
        auVar12._4_4_ = iVar4 + iVar2;
        auVar12._0_4_ = iVar3 + iVar2;
        auVar12._8_8_ = 0;
        auVar9 = pmovsxdq(auVar15,auVar12);
        uVar16 = auVar9._8_8_ * 0x10 + param_4;
        *(longlong *)(param_4 + 0x68 + lVar8 * 0x10) = auVar9._0_8_ * 0x10 + param_4;
        in_XMM2._8_8_ = 0;
        in_XMM2._0_8_ = uVar16;
        *(ulonglong *)(param_4 + 0x78 + lVar8 * 0x10) = uVar16;
      } while (iVar5 < (int)(uVar1 - uVar7));
      iVar6 = iVar5;
      if ((int)uVar1 <= iVar5) goto LAB_1803f74b1;
    }
    do {
      iVar5 = iVar6 + 1;
      *(longlong *)(param_4 + 8 + (longlong)iVar6 * 0x10) = (longlong)iVar5 * 0x10 + param_4;
      iVar6 = iVar5;
    } while (iVar5 < (int)uVar1);
  }
LAB_1803f74b1:
  *(undefined8 *)(param_4 + 8 + (longlong)iVar5 * 0x10) = 0;
  param_1[2] = (param_5 + -1 + param_2) / param_5;
  param_1[3] = 1;
  param_1[4] = 0;
  *(longlong *)(param_1 + 8) = param_4;
  *(int **)(param_1 + 6) = param_1 + 10;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[5] = param_5;
  *(int **)(param_1 + 0xc) = param_1 + 0xe;
  param_1[0xe] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0x40000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}



/* ===== 1803f7510 FUN_1803f7510 ===== */

int * FUN_1803f7510(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int local_res18;
  int local_98;
  int *local_90;
  int *local_80;
  int *local_68;
  int *local_60;
  
  iVar17 = param_3 + -1 + param_2[2];
  iVar9 = *param_2;
  iVar17 = iVar17 - iVar17 % param_2[2];
  if ((iVar9 < iVar17) || (iVar1 = param_2[1], iVar1 < param_4)) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    return param_1;
  }
  piVar10 = *(int **)(param_2 + 6);
  piVar12 = (int *)0x0;
  iVar15 = 0x40000000;
  piVar16 = param_2 + 6;
  local_98 = 0x40000000;
  local_90 = (int *)0x0;
  if (*piVar10 + iVar17 <= iVar9) {
    local_98 = 0x40000000;
    local_68 = piVar16;
    local_60 = piVar10;
    do {
      iVar13 = *local_60;
      iVar7 = 0;
      iVar6 = 0;
      iVar8 = 0;
      piVar4 = piVar12;
      piVar14 = local_60;
      if (iVar13 < iVar13 + iVar17) {
        do {
          iVar2 = piVar14[1];
          if (iVar7 < iVar2) {
            piVar4 = *(int **)(piVar14 + 2);
            iVar11 = (iVar2 - iVar7) * iVar8;
            iVar5 = *piVar4;
            iVar3 = iVar13;
            if (iVar13 <= *piVar14) {
              iVar3 = *piVar14;
            }
            iVar3 = iVar5 - iVar3;
            iVar7 = iVar2;
          }
          else {
            piVar4 = *(int **)(piVar14 + 2);
            iVar5 = *piVar4;
            iVar3 = iVar17 - iVar8;
            if ((iVar5 - *piVar14) + iVar8 <= iVar17) {
              iVar3 = iVar5 - *piVar14;
            }
            iVar11 = (iVar7 - iVar2) * iVar3;
          }
          iVar8 = iVar8 + iVar3;
          iVar6 = iVar6 + iVar11;
          piVar14 = piVar4;
        } while (iVar5 < iVar13 + iVar17);
        piVar4 = local_90;
      }
      if (param_2[4] == 0) {
        local_90 = local_68;
        if (iVar15 <= iVar7) {
          local_90 = piVar12;
          iVar7 = iVar15;
        }
        piVar12 = local_90;
        iVar15 = iVar7;
      }
      else {
        piVar12 = piVar4;
        if (param_4 + iVar7 <= iVar1) {
          if (iVar7 < iVar15) {
LAB_1803f76bd:
            piVar12 = local_68;
            iVar15 = iVar7;
            local_98 = iVar6;
            local_90 = local_68;
          }
          else if (iVar7 == iVar15) {
            if (iVar6 < local_98) goto LAB_1803f76bd;
          }
        }
      }
      local_68 = local_60 + 2;
      local_60 = *(int **)(local_60 + 2);
    } while (*local_60 + iVar17 <= iVar9);
    if (piVar12 != (int *)0x0) {
      local_res18 = **(int **)piVar12;
      goto LAB_1803f7703;
    }
  }
  local_res18 = 0;
LAB_1803f7703:
  if (param_2[4] == 1) {
    local_80 = piVar10;
    if (*piVar10 < iVar17) {
      do {
        local_80 = *(int **)(local_80 + 2);
      } while (*local_80 < iVar17);
    }
    do {
      iVar13 = *local_80 - iVar17;
      iVar9 = **(int **)(piVar10 + 2);
      while (iVar9 <= iVar13) {
        piVar16 = piVar10 + 2;
        piVar10 = *(int **)(piVar10 + 2);
        iVar9 = **(int **)(piVar10 + 2);
      }
      iVar8 = 0;
      iVar7 = 0;
      iVar6 = 0;
      iVar9 = *piVar10;
      piVar12 = piVar10;
      while (iVar9 < *local_80) {
        iVar2 = piVar12[1];
        if (iVar8 < iVar2) {
          iVar3 = (iVar2 - iVar8) * iVar6;
          piVar4 = *(int **)(piVar12 + 2);
          iVar5 = iVar13;
          if (iVar13 <= *piVar12) {
            iVar5 = *piVar12;
          }
          iVar9 = *piVar4;
          iVar5 = iVar9 - iVar5;
          iVar8 = iVar2;
        }
        else {
          piVar4 = *(int **)(piVar12 + 2);
          iVar9 = *piVar4;
          iVar5 = iVar9 - *piVar12;
          if (iVar17 < (iVar9 - *piVar12) + iVar6) {
            iVar5 = iVar17 - iVar6;
          }
          iVar3 = (iVar8 - iVar2) * iVar5;
        }
        iVar6 = iVar6 + iVar5;
        iVar7 = iVar7 + iVar3;
        piVar12 = piVar4;
      }
      if (((param_4 + iVar8 <= iVar1) && (iVar8 <= iVar15)) &&
         (((iVar8 < iVar15 || (iVar7 < local_98)) || ((iVar7 == local_98 && (iVar13 < local_res18)))
          ))) {
        iVar15 = iVar8;
        local_res18 = iVar13;
        local_98 = iVar7;
        local_90 = piVar16;
      }
      local_80 = *(int **)(local_80 + 2);
      piVar12 = local_90;
    } while (local_80 != (int *)0x0);
  }
  param_1[1] = iVar15;
  *(int **)(param_1 + 2) = piVar12;
  *param_1 = local_res18;
  return param_1;
}



/* ===== 1803f78a0 FUN_1803f78a0 ===== */

undefined8 FUN_1803f78a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  byte bVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  int local_res8;
  int local_res10;
  int local_res20;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  *(longlong *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar4 = FUN_180234e90(param_2,param_3,&DAT_18073aa18);
  iVar5 = FUN_180234e90(param_2,param_3,&DAT_18073aa20);
  *(int *)(param_1 + 0x18) = iVar5;
  iVar6 = FUN_180234e90(param_2,param_3,&DAT_1806e788c);
  *(int *)(param_1 + 0x1c) = iVar6;
  iVar7 = FUN_180234e90(param_2,param_3,&DAT_18073aa28);
  *(int *)(param_1 + 0x20) = iVar7;
  iVar8 = FUN_180234e90(param_2,param_3,&DAT_18073a9f8);
  *(int *)(param_1 + 0x24) = iVar8;
  iVar9 = FUN_180234e90(param_2,param_3,&DAT_18073aa00);
  *(int *)(param_1 + 0x28) = iVar9;
  uVar10 = FUN_180234e90(param_2,param_3,&DAT_18073aa08);
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  uVar10 = FUN_180234e90(param_2,param_3,&DAT_18073aa10);
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  if (uVar4 == 0) {
    return 0;
  }
  if (iVar6 == 0) {
    return 0;
  }
  if (iVar8 == 0) {
    return 0;
  }
  if (iVar9 == 0) {
    return 0;
  }
  if (iVar7 != 0) {
    if (iVar5 == 0) {
      return 0;
    }
    goto LAB_1803f7d89;
  }
  local_res8 = 2;
  local_res10 = 0;
  iVar5 = 0;
  iVar6 = 0;
  uVar11 = FUN_180234e90(param_2,param_3,&DAT_18073aa6c);
  if (uVar11 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(ulonglong *)(param_1 + 0x40) = (ulonglong)uVar11 + param_2;
  *(undefined4 *)(param_1 + 0x4c) = 0x20000000;
  local_98._12_4_ = SUB164(*(undefined1 (*) [16])(param_1 + 0x40),0xc);
  iVar7 = *(int *)(param_1 + 0x48) + 2;
  local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x40),0);
  if ((((int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) < iVar7) || (iVar7 < 0)) ||
     ((int)local_98._12_4_ <= iVar7)) {
    bVar16 = 0;
  }
  else {
    bVar16 = *(byte *)((longlong)iVar7 + local_98._0_8_);
  }
  local_98._8_4_ = local_98._12_4_;
  if ((int)(uint)bVar16 <= (int)local_98._12_4_) {
    local_98._8_4_ = (uint)bVar16;
  }
  FUN_180234900(local_68,local_98);
  pauVar12 = (undefined1 (*) [16])FUN_180234900(local_68,local_98);
  local_68 = *pauVar12;
  plVar13 = (longlong *)FUN_180234d60(&local_78,local_68,0);
  local_a8 = *plVar13;
  lStack_a0 = plVar13[1];
  FUN_180234900(local_68,local_98);
  puVar14 = (undefined8 *)FUN_180234900(local_68,local_98);
  uVar3 = puVar14[1];
  *(undefined8 *)(param_1 + 0x60) = *puVar14;
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  pauVar12 = (undefined1 (*) [16])FUN_180234c10(local_68,&local_a8,0x11);
  local_68 = *pauVar12;
  if (local_68._8_4_ < local_68._12_4_) {
    local_res10 = FUN_180234a10(local_68);
  }
  pauVar12 = (undefined1 (*) [16])FUN_180234c10(local_68,&local_a8,0x106);
  local_68 = *pauVar12;
  if (local_68._8_4_ < local_68._12_4_) {
    local_res8 = FUN_180234a10(local_68);
  }
  pauVar12 = (undefined1 (*) [16])FUN_180234c10(local_68,&local_a8,0x124);
  local_68 = *pauVar12;
  if (local_68._8_4_ < local_68._12_4_) {
    iVar5 = FUN_180234a10(local_68);
  }
  pauVar12 = (undefined1 (*) [16])FUN_180234c10(local_68,&local_a8,0x125);
  local_68 = *pauVar12;
  if (local_68._8_4_ < local_68._12_4_) {
    iVar6 = FUN_180234a10(local_68);
  }
  local_78 = local_a8;
  uStack_70 = lStack_a0;
  local_68 = local_98;
  local_res20 = 0;
  local_a8 = 0;
  auVar18 = local_98;
  plVar13 = (longlong *)FUN_180234c10(local_58,&local_78,0x12);
  local_78 = *plVar13;
  uStack_70 = plVar13[1];
  uVar17 = 0;
  do {
    if (uStack_70._4_4_ <= (int)uStack_70) break;
    uVar10 = FUN_180234a10(&local_78);
    uVar11 = (int)uVar17 + 1;
    *(undefined4 *)(local_98 + uVar17 * 4 + -0x10) = uVar10;
    uVar17 = (ulonglong)uVar11;
  } while ((int)uVar11 < 2);
  iVar7 = local_a8._4_4_;
  iVar8 = auVar18._12_4_;
  if ((local_a8._4_4_ == 0) || ((uint)local_a8 == 0)) {
LAB_1803f7cc7:
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    if (((local_a8 < 0) || (((int)(uint)local_a8 < 0 || (iVar8 < local_a8._4_4_)))) ||
       (iVar8 - local_a8._4_4_ < (int)(uint)local_a8)) {
      uVar11 = 0;
      local_78 = 0;
    }
    else {
      local_78 = auVar18._0_8_ + (longlong)local_a8._4_4_;
      uVar11 = (uint)local_a8;
    }
    uStack_70 = (ulonglong)uVar11 << 0x20;
    plVar13 = (longlong *)FUN_180234c10(local_58,&local_78,0x13);
    local_78 = *plVar13;
    uStack_70 = plVar13[1];
    if ((int)plVar13[1] < *(int *)((longlong)plVar13 + 0xc)) {
      local_res20 = FUN_180234a10(&local_78);
    }
    if (local_res20 == 0) goto LAB_1803f7cc7;
    local_res20 = local_res20 + iVar7;
    if (iVar8 < local_res20) {
LAB_1803f7cb5:
      local_68._8_4_ = iVar8;
    }
    else {
      local_68._8_4_ = local_res20;
      if (local_res20 < 0) goto LAB_1803f7cb5;
    }
    FUN_180234900(&local_88,local_68);
  }
  *(undefined8 *)(param_1 + 0x70) = local_88;
  *(undefined8 *)(param_1 + 0x78) = uStack_80;
  if (local_res8 != 2) {
    return 0;
  }
  if (local_res10 == 0) {
    return 0;
  }
  if (iVar5 != 0) {
    if (iVar6 == 0) {
      return 0;
    }
    if (iVar8 < iVar5) {
LAB_1803f7d12:
      local_98._8_4_ = iVar8;
    }
    else {
      local_98._8_4_ = iVar5;
      if (iVar5 < 0) goto LAB_1803f7d12;
    }
    puVar14 = (undefined8 *)FUN_180234900(local_58,local_98);
    uVar3 = puVar14[1];
    *(undefined8 *)(param_1 + 0x80) = *puVar14;
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    if (((iVar6 < 0) || (iVar5 = local_98._12_4_ - iVar6, iVar5 < 0)) ||
       ((int)local_98._12_4_ < iVar6)) {
      iVar5 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = (longlong)iVar6 + local_98._0_8_;
    }
    *(longlong *)(param_1 + 0x90) = lVar15;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(int *)(param_1 + 0x9c) = iVar5;
    iVar8 = local_98._12_4_;
  }
  if (iVar8 < local_res10) {
LAB_1803f7d72:
    local_98._8_4_ = iVar8;
  }
  else {
    local_98._8_4_ = local_res10;
    if (local_res10 < 0) goto LAB_1803f7d72;
  }
  puVar14 = (undefined8 *)FUN_180234900(local_58,local_98);
  uVar3 = puVar14[1];
  *(undefined8 *)(param_1 + 0x50) = *puVar14;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
LAB_1803f7d89:
  uVar11 = FUN_180234e90(param_2,param_3,&DAT_18073aa74);
  if (uVar11 == 0) {
    uVar11 = 0xffff;
  }
  else {
    uVar11 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar11 + 4 + param_2),
                            *(undefined1 *)((ulonglong)uVar11 + 5 + param_2));
  }
  *(uint *)(param_1 + 0x14) = uVar11;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  uVar11 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar4 + 2 + param_2),
                          *(undefined1 *)((ulonglong)uVar4 + 3 + param_2));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (uVar11 != 0) {
    do {
      uVar1 = uVar4 + 4 + iVar5 * 8;
      uVar17 = (ulonglong)uVar1;
      sVar2 = CONCAT11(*(undefined1 *)(param_2 + (ulonglong)uVar1),
                       *(undefined1 *)(param_2 + 1 + (ulonglong)uVar1));
      if ((sVar2 == 0) ||
         ((sVar2 == 3 &&
          ((sVar2 = CONCAT11(*(undefined1 *)(param_2 + 2 + uVar17),
                             *(undefined1 *)(param_2 + 3 + uVar17)), sVar2 == 1 || (sVar2 == 10)))))
         ) {
        *(uint *)(param_1 + 0x38) =
             ((uint)*(byte *)(param_2 + 5 + uVar17) << 0x10 |
              (uint)*(byte *)(param_2 + 6 + uVar17) << 8 |
              (uint)*(byte *)(param_2 + 4 + uVar17) << 0x18 | (uint)*(byte *)(param_2 + 7 + uVar17))
             + uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar11);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x3c) =
       (uint)CONCAT11(*(undefined1 *)((longlong)*(int *)(param_1 + 0x1c) + 0x32 + param_2),
                      *(undefined1 *)((longlong)*(int *)(param_1 + 0x1c) + 0x33 + param_2));
  return 1;
}



/* ===== 1803f7e80 FUN_1803f7e80 ===== */

uint FUN_1803f7e80(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  int iVar14;
  ulonglong uVar15;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar12 = *(uint *)(param_1 + 0x38);
  uVar15 = (ulonglong)uVar12;
  lVar4 = uVar15 + lVar2;
  sVar7 = CONCAT11(*(undefined1 *)(uVar15 + lVar2),*(undefined1 *)(lVar4 + 1));
  if (sVar7 == 0) {
    if ((int)param_2 < (int)(CONCAT11(*(undefined1 *)(lVar4 + 2),*(undefined1 *)(lVar4 + 3)) - 6)) {
      return (uint)*(byte *)((longlong)(int)param_2 + uVar15 + 6 + lVar2);
    }
  }
  else if (sVar7 == 6) {
    uVar12 = (uint)CONCAT11(*(byte *)(lVar4 + 6),*(byte *)(lVar4 + 7));
    if ((uVar12 <= param_2) &&
       (param_2 < (((uint)*(byte *)(lVar4 + 8) + (uint)*(byte *)(lVar4 + 6)) * 0x100 |
                  (uint)*(byte *)(lVar4 + 7)) + (uint)*(byte *)(lVar4 + 9))) {
      lVar4 = (param_2 - uVar12) * 2 + uVar15;
      return (uint)CONCAT11(*(undefined1 *)(lVar4 + 10 + lVar2),*(undefined1 *)(lVar4 + 0xb + lVar2)
                           );
    }
  }
  else if (sVar7 != 2) {
    if (sVar7 == 4) {
      if ((int)param_2 < 0x10000) {
        uVar9 = uVar12 + 0xe;
        sVar7 = CONCAT11(*(undefined1 *)(lVar4 + 10),*(undefined1 *)(lVar4 + 0xb));
        uVar8 = CONCAT11(*(undefined1 *)(lVar4 + 6),*(undefined1 *)(lVar4 + 7)) >> 1;
        uVar5 = CONCAT11(*(undefined1 *)(lVar4 + 0xc),*(undefined1 *)(lVar4 + 0xd)) & 0xfffffffe;
        uVar13 = CONCAT11(*(undefined1 *)(lVar4 + 8),*(undefined1 *)(lVar4 + 9)) >> 1;
        lVar4 = (ulonglong)uVar5 + (ulonglong)uVar9;
        if ((int)param_2 <
            (int)(uint)CONCAT11(*(undefined1 *)(lVar4 + lVar2),*(undefined1 *)(lVar4 + 1 + lVar2)))
        {
          uVar12 = uVar9;
        }
        else {
          uVar12 = uVar12 + 0xe + uVar5;
        }
        uVar12 = uVar12 - 2;
        for (; sVar7 != 0; sVar7 = sVar7 + -1) {
          uVar13 = uVar13 >> 1;
          uVar5 = (uint)uVar13 * 2;
          uVar3 = uVar5 + uVar12;
          if ((int)param_2 <=
              (int)(uint)CONCAT11(*(undefined1 *)((ulonglong)uVar12 + lVar2 + (ulonglong)uVar5),
                                  *(undefined1 *)((ulonglong)uVar12 + lVar2 + 1 + (ulonglong)uVar5))
             ) {
            uVar3 = uVar12;
          }
          uVar12 = uVar3;
        }
        lVar4 = (ulonglong)((uVar12 - uVar9) + 2 >> 1 & 0xffff) * 2;
        lVar6 = (uint)uVar8 * 2 + uVar15 + lVar4;
        uVar12 = (uint)CONCAT11(*(undefined1 *)(lVar6 + 0x10 + lVar2),
                                *(undefined1 *)(lVar6 + 0x11 + lVar2));
        if (((int)uVar12 <= (int)param_2) &&
           ((int)param_2 <=
            (int)(uint)CONCAT11(*(undefined1 *)(lVar4 + (ulonglong)uVar9 + lVar2),
                                *(undefined1 *)(lVar4 + (ulonglong)uVar9 + 1 + lVar2)))) {
          lVar6 = uVar15 + lVar4 + (ulonglong)((uint)uVar8 * 6);
          uVar13 = CONCAT11(*(undefined1 *)(lVar6 + 0x10 + lVar2),
                            *(undefined1 *)(lVar6 + 0x11 + lVar2));
          if (uVar13 == 0) {
            lVar4 = (uint)uVar8 * 4 + uVar15 + lVar4;
            return (uint)(ushort)(CONCAT11(*(undefined1 *)(lVar4 + 0x10 + lVar2),
                                           *(undefined1 *)(lVar4 + 0x11 + lVar2)) + (short)param_2);
          }
          lVar4 = (ulonglong)uVar13 + (longlong)(int)((param_2 - uVar12) * 2) + uVar15 + lVar4 +
                  (ulonglong)((uint)uVar8 * 6);
          return (uint)CONCAT11(*(undefined1 *)(lVar4 + 0x10 + lVar2),
                                *(undefined1 *)(lVar4 + 0x11 + lVar2));
        }
      }
    }
    else if ((sVar7 == 0xc) || (sVar7 == 0xd)) {
      iVar10 = 0;
      iVar14 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0xc),*(undefined1 *)(lVar4 + 0xd))
                                 ,*(undefined1 *)(lVar4 + 0xe)),*(undefined1 *)(lVar4 + 0xf));
      if (0 < iVar14) {
        do {
          iVar11 = (iVar14 - iVar10 >> 1) + iVar10;
          lVar6 = (longlong)(iVar11 * 0xc);
          uVar12 = (uint)*(byte *)(lVar4 + 0x11 + lVar6) << 0x10 |
                   (uint)*(byte *)(lVar4 + 0x12 + lVar6) << 8 |
                   (uint)*(byte *)(lVar4 + 0x10 + lVar6) << 0x18 |
                   (uint)*(byte *)(lVar4 + 0x13 + lVar6);
          if (param_2 < uVar12) {
            iVar14 = iVar11;
          }
          else {
            lVar1 = lVar6 + uVar15;
            if (param_2 <=
                ((uint)*(byte *)(lVar4 + 0x15 + lVar6) << 0x10 |
                 (uint)*(byte *)(lVar4 + 0x16 + lVar6) << 8 |
                 (uint)*(byte *)(lVar4 + 0x14 + lVar6) << 0x18 |
                (uint)*(byte *)(lVar4 + 0x17 + lVar6))) {
              uVar5 = (uint)*(byte *)(lVar1 + 0x19 + lVar2) << 0x10 |
                      (uint)*(byte *)(lVar1 + 0x1a + lVar2) << 8 |
                      (uint)*(byte *)(lVar1 + 0x18 + lVar2) << 0x18 |
                      (uint)*(byte *)(lVar1 + 0x1b + lVar2);
              if (sVar7 == 0xc) {
                return param_2 + (uVar5 - uVar12);
              }
              return uVar5;
            }
            iVar10 = iVar11 + 1;
          }
        } while (iVar10 < iVar14);
      }
    }
  }
  return 0;
}



/* ===== 1803f8210 FUN_1803f8210 ===== */

/* WARNING: Removing unreachable block (ram,0x0001803f8df2) */
/* WARNING: Removing unreachable block (ram,0x0001803f8df7) */
/* WARNING: Removing unreachable block (ram,0x0001803f8e15) */
/* WARNING: Removing unreachable block (ram,0x0001803f8e51) */
/* WARNING: Removing unreachable block (ram,0x0001803f8f0a) */
/* WARNING: Removing unreachable block (ram,0x0001803f8f0f) */
/* WARNING: Removing unreachable block (ram,0x0001803f8f2c) */
/* WARNING: Removing unreachable block (ram,0x0001803f8f67) */
/* WARNING: Removing unreachable block (ram,0x0001803f8f71) */

int FUN_1803f8210(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  short sVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  short sVar17;
  byte *pbVar18;
  longlong lVar19;
  short *psVar20;
  int *piVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  int iVar26;
  int iVar27;
  byte bVar28;
  byte bVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  undefined2 uVar36;
  undefined2 uVar37;
  longlong lVar38;
  longlong lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int local_res20;
  int local_f8;
  int local_f4;
  
  iVar12 = FUN_180235af0();
  iVar24 = 0;
  *param_3 = 0;
  fVar10 = DAT_1808ac34c;
  fVar9 = DAT_1808abf9c;
  if (iVar12 < 0) {
LAB_1803f8f79:
    iVar12 = 0;
  }
  else {
    lVar19 = *(longlong *)(param_1 + 8);
    lVar35 = (longlong)iVar12;
    lVar39 = lVar19 + lVar35;
    sVar17 = CONCAT11(*(char *)(lVar19 + lVar35),*(undefined1 *)(lVar39 + 1));
    if (sVar17 < 1) {
      iVar12 = 0;
      lVar15 = 0;
      if (*(char *)(lVar19 + lVar35) < '\0') {
        puVar25 = (undefined1 *)(lVar39 + 10);
        lVar39 = lVar15;
        iVar24 = iVar12;
        do {
          uVar11 = puVar25[3];
          uVar5 = puVar25[2];
          bVar22 = puVar25[1];
          if ((bVar22 & 2) == 0) {
            fVar47 = 0.0;
            fVar46 = 0.0;
            lVar19 = 4;
          }
          else {
            if ((bVar22 & 1) == 0) {
              iVar27 = (int)(char)puVar25[5];
              lVar19 = 6;
              iVar12 = (int)(char)puVar25[4];
            }
            else {
              lVar19 = 8;
              iVar27 = (int)CONCAT11(puVar25[6],puVar25[7]);
              iVar12 = (int)CONCAT11(puVar25[4],puVar25[5]);
            }
            fVar46 = (float)iVar27;
            fVar47 = (float)iVar12;
          }
          puVar25 = puVar25 + lVar19;
          if ((bVar22 & 8) == 0) {
            if ((bVar22 & 0x40) != 0) {
              uVar6 = *puVar25;
              puVar1 = puVar25 + 1;
              puVar2 = puVar25 + 2;
              puVar3 = puVar25 + 3;
              puVar25 = puVar25 + 4;
              fVar42 = (float)(int)CONCAT11(*puVar2,*puVar3) * fVar9;
              fVar43 = (float)(int)CONCAT11(uVar6,*puVar1) * fVar9;
              goto LAB_1803f8819;
            }
            if (-1 < (char)bVar22) {
              fVar42 = fVar10;
              fVar43 = fVar10;
              goto LAB_1803f8819;
            }
            puVar1 = puVar25 + 4;
            puVar2 = puVar25 + 5;
            fVar43 = (float)(int)CONCAT11(*puVar25,puVar25[1]) * fVar9;
            puVar3 = puVar25 + 6;
            puVar4 = puVar25 + 7;
            fVar44 = (float)(int)CONCAT11(puVar25[2],puVar25[3]) * fVar9;
            puVar25 = puVar25 + 8;
            fVar45 = (float)(int)CONCAT11(*puVar1,*puVar2) * fVar9;
            fVar42 = (float)(int)CONCAT11(*puVar3,*puVar4) * fVar9;
          }
          else {
            puVar1 = puVar25 + 1;
            uVar6 = *puVar25;
            puVar25 = puVar25 + 2;
            fVar42 = (float)(int)CONCAT11(uVar6,*puVar1) * fVar9;
            fVar43 = fVar42;
LAB_1803f8819:
            fVar44 = 0.0;
            fVar45 = 0.0;
          }
          fVar41 = fVar44 * fVar44 + fVar43 * fVar43;
          if (fVar41 < 0.0) {
            fVar41 = (float)FUN_18051af10(fVar41);
          }
          else {
            fVar41 = SQRT(fVar41);
          }
          fVar40 = fVar42 * fVar42 + fVar45 * fVar45;
          if (fVar40 < 0.0) {
            fVar40 = (float)FUN_18051af10();
          }
          else {
            fVar40 = SQRT(fVar40);
          }
          iVar27 = FUN_1803f8fd0(param_1,CONCAT11(uVar5,uVar11));
          lVar15 = lVar39;
          iVar12 = iVar24;
          if (0 < iVar27) {
            iVar12 = 0;
            if (iVar27 < 4) goto LAB_1803f8c0f;
            do {
              psVar20 = (short *)((longlong)iVar12 * 0xe);
              sVar17 = *psVar20;
              *psVar20 = (short)(int)((fVar45 * (float)(int)psVar20[1] + fVar43 * (float)(int)sVar17
                                      + fVar47) * fVar41);
              psVar20[1] = (short)(int)((fVar42 * (float)(int)psVar20[1] +
                                         fVar44 * (float)(int)sVar17 + fVar46) * fVar40);
              sVar17 = psVar20[2];
              psVar20[2] = (short)(int)((fVar45 * (float)(int)psVar20[3] +
                                         fVar43 * (float)(int)sVar17 + fVar47) * fVar41);
              psVar20[3] = (short)(int)((fVar42 * (float)(int)psVar20[3] +
                                         fVar44 * (float)(int)sVar17 + fVar46) * fVar40);
              sVar17 = psVar20[7];
              psVar20[7] = (short)(int)((fVar45 * (float)(int)psVar20[8] +
                                         fVar43 * (float)(int)sVar17 + fVar47) * fVar41);
              psVar20[8] = (short)(int)((fVar42 * (float)(int)psVar20[8] +
                                         fVar44 * (float)(int)sVar17 + fVar46) * fVar40);
              sVar17 = psVar20[9];
              psVar20[9] = (short)(int)((fVar45 * (float)(int)psVar20[10] +
                                         fVar43 * (float)(int)sVar17 + fVar47) * fVar41);
              psVar20[10] = (short)(int)((fVar42 * (float)(int)psVar20[10] +
                                          fVar44 * (float)(int)sVar17 + fVar46) * fVar40);
              sVar17 = psVar20[0xe];
              psVar20[0xe] = (short)(int)((fVar45 * (float)(int)psVar20[0xf] +
                                           fVar43 * (float)(int)sVar17 + fVar47) * fVar41);
              psVar20[0xf] = (short)(int)((fVar42 * (float)(int)psVar20[0xf] +
                                           fVar44 * (float)(int)sVar17 + fVar46) * fVar40);
              sVar17 = psVar20[0x10];
              psVar20[0x10] =
                   (short)(int)((fVar45 * (float)(int)psVar20[0x11] + fVar43 * (float)(int)sVar17 +
                                fVar47) * fVar41);
              psVar20[0x11] =
                   (short)(int)((fVar42 * (float)(int)psVar20[0x11] + fVar44 * (float)(int)sVar17 +
                                fVar46) * fVar40);
              sVar17 = psVar20[0x15];
              iVar12 = iVar12 + 4;
              psVar20[0x15] =
                   (short)(int)((fVar45 * (float)(int)psVar20[0x16] + fVar43 * (float)(int)sVar17 +
                                fVar47) * fVar41);
              psVar20[0x16] =
                   (short)(int)((fVar42 * (float)(int)psVar20[0x16] + fVar44 * (float)(int)sVar17 +
                                fVar46) * fVar40);
              sVar17 = psVar20[0x17];
              psVar20[0x17] =
                   (short)(int)((fVar45 * (float)(int)psVar20[0x18] + fVar43 * (float)(int)sVar17 +
                                fVar47) * fVar41);
              psVar20[0x18] =
                   (short)(int)((fVar42 * (float)(int)psVar20[0x18] + fVar44 * (float)(int)sVar17 +
                                fVar46) * fVar40);
            } while (iVar12 < iVar27 + -3);
            for (; iVar12 < iVar27; iVar12 = iVar12 + 1) {
LAB_1803f8c0f:
              psVar20 = (short *)((longlong)iVar12 * 0xe);
              sVar17 = *psVar20;
              *psVar20 = (short)(int)((fVar45 * (float)(int)psVar20[1] + fVar43 * (float)(int)sVar17
                                      + fVar47) * fVar41);
              psVar20[1] = (short)(int)((fVar42 * (float)(int)psVar20[1] +
                                         fVar44 * (float)(int)sVar17 + fVar46) * fVar40);
              sVar17 = psVar20[2];
              psVar20[2] = (short)(int)((fVar45 * (float)(int)psVar20[3] +
                                         fVar43 * (float)(int)sVar17 + fVar47) * fVar41);
              psVar20[3] = (short)(int)((fVar42 * (float)(int)psVar20[3] +
                                         fVar44 * (float)(int)sVar17 + fVar46) * fVar40);
            }
            iVar12 = iVar27 + iVar24;
            lVar15 = _malloc_base((longlong)iVar12 * 0xe);
            lVar19 = DAT_180ca0a50;
            if (DAT_180ca0a50 != 0) {
              FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
            }
            if (lVar15 == 0) {
              if (lVar39 != 0) {
                if (lVar19 != 0) {
                  piVar21 = (int *)(lVar19 + 0x29c0 + (longlong)*(short *)(lVar19 + 0x29bc) * 8);
                  if (*piVar21 != *(int *)(lVar19 + 4)) {
                    iVar12 = *(short *)(lVar19 + 0x29bc) + 1;
                    sVar17 = (short)iVar12 + (short)(iVar12 / 6) * -6;
                    *(short *)(lVar19 + 0x29bc) = sVar17;
                    piVar21 = (int *)(lVar19 + 0x29c0 + (longlong)sVar17 * 8);
                    *piVar21 = *(int *)(lVar19 + 4);
                    *(undefined4 *)(lVar19 + 0x29c4 + (longlong)sVar17 * 8) = 0;
                  }
                  *(short *)((longlong)piVar21 + 6) = *(short *)((longlong)piVar21 + 6) + 1;
                  *(int *)(lVar19 + 0x29b8) = *(int *)(lVar19 + 0x29b8) + 1;
                }
                thunk_FUN_1805277b0(lVar39);
              }
              goto LAB_1803f8f79;
            }
            if ((0 < iVar24) && (lVar39 != 0)) {
              FUN_180540530(lVar15,lVar39,(longlong)iVar24 * 0xe);
            }
            FUN_180540530((longlong)iVar24 * 0xe + lVar15,0,(longlong)iVar27 * 0xe);
            if (lVar39 != 0) {
              if (lVar19 != 0) {
                iVar24 = *(int *)(lVar19 + 4);
                lVar35 = (longlong)*(short *)(lVar19 + 0x29bc) * 8;
                if (*(int *)(lVar19 + 0x29c0 + lVar35) != iVar24) {
                  iVar27 = *(short *)(lVar19 + 0x29bc) + 1;
                  sVar17 = (short)iVar27 + (short)(iVar27 / 6) * -6;
                  *(short *)(lVar19 + 0x29bc) = sVar17;
                  lVar35 = (longlong)sVar17 * 8;
                  *(undefined4 *)(lVar35 + 0x29c4 + lVar19) = 0;
                  *(int *)(lVar35 + 0x29c0 + lVar19) = iVar24;
                }
                psVar20 = (short *)(lVar35 + 0x29c6 + lVar19);
                *psVar20 = *psVar20 + 1;
                *(int *)(lVar19 + 0x29b8) = *(int *)(lVar19 + 0x29b8) + 1;
              }
              thunk_FUN_1805277b0(lVar39);
            }
            thunk_FUN_1805277b0(0);
          }
          if ((bVar22 & 0x20) == 0) break;
          lVar39 = lVar15;
          iVar24 = iVar12;
        } while( true );
      }
    }
    else {
      uVar8 = sVar17 * 2;
      lVar38 = (longlong)(int)uVar8;
      uVar11 = *(undefined1 *)(lVar38 + lVar35 + 0xb + lVar19);
      uVar5 = *(undefined1 *)(lVar38 + lVar35 + 10 + lVar19);
      uVar31 = (uint)CONCAT11(*(undefined1 *)(lVar38 + 8 + lVar39),
                              *(undefined1 *)(lVar38 + 9 + lVar39));
      lVar15 = _malloc_base((longlong)(int)((uVar8 | 1) + uVar31) * 0xe);
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (lVar15 == 0) goto LAB_1803f8f79;
      bVar22 = 0;
      bVar28 = 0;
      local_f4 = 0;
      pbVar18 = (byte *)((ulonglong)CONCAT11(uVar5,uVar11) + 0xc + lVar35 + lVar38 + lVar19);
      iVar27 = uVar31 + 1;
      iVar32 = 0;
      iVar26 = 0;
      bVar29 = 0;
      iVar30 = 0;
      do {
        if (bVar29 == 0) {
          bVar22 = *pbVar18;
          if ((bVar22 & 8) != 0) {
            bVar29 = pbVar18[1];
          }
          pbVar18 = pbVar18 + (ulonglong)((bVar22 & 8) != 0) + 1;
        }
        else {
          bVar29 = bVar29 - 1;
        }
        iVar13 = iVar30 + uVar8;
        iVar30 = iVar30 + 1;
        *(byte *)(lVar15 + 0xc + (longlong)iVar13 * 0xe) = bVar22;
      } while (iVar30 < iVar27);
      iVar13 = 0;
      iVar30 = iVar26;
      do {
        lVar39 = (longlong)(int)(iVar13 + uVar8) * 0xe;
        bVar22 = *(byte *)(lVar15 + 0xc + lVar39);
        bVar29 = bVar22 & 0x10;
        if ((bVar22 & 2) == 0) {
          if (bVar29 == 0) {
            iVar30 = iVar30 + ((int)(short)((ushort)*pbVar18 << 8) | (uint)pbVar18[1]);
            pbVar18 = pbVar18 + 2;
          }
        }
        else {
          bVar22 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar16 = (uint)bVar22;
          if (bVar29 == 0) {
            uVar16 = -(uint)bVar22;
          }
          iVar30 = iVar30 + uVar16;
        }
        iVar13 = iVar13 + 1;
        *(short *)(lVar15 + lVar39) = (short)iVar30;
      } while (iVar13 < iVar27);
      iVar13 = 0;
      iVar30 = iVar32;
      do {
        lVar39 = (longlong)(int)(iVar13 + uVar8) * 0xe;
        bVar22 = *(byte *)(lVar15 + 0xc + lVar39);
        bVar29 = bVar22 & 0x20;
        if ((bVar22 & 4) == 0) {
          if (bVar29 == 0) {
            iVar30 = iVar30 + ((int)(short)((ushort)*pbVar18 << 8) | (uint)pbVar18[1]);
            pbVar18 = pbVar18 + 2;
          }
        }
        else {
          bVar22 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar16 = (uint)bVar22;
          if (bVar29 == 0) {
            uVar16 = -(uint)bVar22;
          }
          iVar30 = iVar30 + uVar16;
        }
        iVar13 = iVar13 + 1;
        *(short *)(lVar15 + 2 + lVar39) = (short)iVar30;
      } while (iVar13 < iVar27);
      iVar14 = 0;
      local_res20 = 0;
      local_f8 = 0;
      iVar23 = 0;
      iVar27 = iVar32;
      iVar30 = iVar32;
      iVar13 = iVar32;
      do {
        lVar39 = (longlong)(int)(iVar23 + uVar8) * 0xe;
        bVar22 = *(byte *)(lVar15 + 0xc + lVar39);
        sVar17 = *(short *)(lVar15 + lVar39);
        iVar33 = (int)sVar17;
        sVar7 = *(short *)(lVar15 + 2 + lVar39);
        iVar34 = (int)sVar7;
        if (iVar26 == iVar23) {
          if (iVar23 != 0) {
            iVar14 = FUN_180235be0(lVar15,iVar14,iVar24,bVar28,iVar13,iVar30,local_f8,local_res20,
                                   iVar27,iVar32);
          }
          bVar28 = ~bVar22 & 1;
          if (bVar28 == 0) {
            iVar30 = iVar34;
            iVar13 = iVar33;
          }
          else {
            iVar13 = (int)*(short *)(lVar15 + 0xe + lVar39);
            iVar30 = (int)*(short *)(lVar15 + 0x10 + lVar39);
            local_res20 = iVar34;
            local_f8 = iVar33;
            if ((*(byte *)(lVar15 + 0x1a + lVar39) & 1) == 0) {
              iVar30 = iVar30 + iVar34 >> 1;
              iVar13 = iVar13 + iVar33 >> 1;
            }
            else {
              iVar23 = iVar23 + 1;
            }
          }
          iVar24 = 0;
          lVar39 = (longlong)iVar14;
          iVar14 = iVar14 + 1;
          lVar39 = lVar39 * 0xe;
          *(undefined4 *)(lVar15 + 4 + lVar39) = 0;
          *(undefined1 *)(lVar15 + 0xc + lVar39) = 1;
          *(short *)(lVar15 + lVar39) = (short)iVar13;
          *(short *)(lVar15 + 2 + lVar39) = (short)iVar30;
          iVar26 = CONCAT11(*(undefined1 *)(iVar12 + lVar19 + 10 + (longlong)(local_f4 * 2)),
                            *(undefined1 *)(iVar12 + lVar19 + 0xb + (longlong)(local_f4 * 2))) + 1;
          local_f4 = local_f4 + 1;
        }
        else {
          uVar37 = (undefined2)iVar27;
          uVar36 = (undefined2)iVar32;
          if ((bVar22 & 1) == 0) {
            if (iVar24 != 0) {
              lVar39 = (longlong)iVar14;
              iVar14 = iVar14 + 1;
              lVar39 = lVar39 * 0xe;
              *(short *)(lVar15 + lVar39) = (short)(iVar27 + iVar33 >> 1);
              *(short *)(lVar15 + 2 + lVar39) = (short)(iVar32 + iVar34 >> 1);
              *(undefined1 *)(lVar15 + 0xc + lVar39) = 3;
              *(undefined2 *)(lVar15 + 4 + lVar39) = uVar37;
              *(undefined2 *)(lVar15 + 6 + lVar39) = uVar36;
            }
            iVar24 = 1;
            iVar32 = iVar34;
            iVar27 = iVar33;
          }
          else {
            lVar39 = (longlong)iVar14 * 0xe;
            iVar14 = iVar14 + 1;
            if (iVar24 == 0) {
              uVar36 = 0;
              uVar11 = 2;
              uVar37 = 0;
            }
            else {
              uVar11 = 3;
            }
            *(undefined1 *)(lVar15 + 0xc + lVar39) = uVar11;
            *(short *)(lVar15 + lVar39) = sVar17;
            *(short *)(lVar15 + 2 + lVar39) = sVar7;
            *(undefined2 *)(lVar15 + 4 + lVar39) = uVar37;
            iVar24 = 0;
            *(undefined2 *)(lVar15 + 6 + lVar39) = uVar36;
          }
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 < (int)(uVar31 + 1));
      iVar12 = FUN_180235be0(lVar15,iVar14,iVar24,bVar28,iVar13,iVar30,local_f8,local_res20,iVar27,
                             iVar32);
    }
    *param_3 = lVar15;
  }
  return iVar12;
}



/* ===== 1803f8fd0 FUN_1803f8fd0 ===== */

ulonglong FUN_1803f8fd0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  int local_10;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar2 = FUN_1803f8210();
  }
  else {
    local_40 = 1;
    local_18 = 0;
    local_10 = 0;
    local_78 = 0;
    local_50 = 0;
    local_48 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    iVar1 = FUN_180236d80(0,0,&local_40);
    if (iVar1 != 0) {
      uVar3 = _malloc_base((longlong)local_10 * 0xe);
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      *param_3 = uVar3;
      local_50 = uVar3;
      iVar1 = FUN_180236d80(param_1,param_2,&local_78);
      if (iVar1 != 0) {
        return (ulonglong)local_48;
      }
    }
    *param_3 = 0;
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 1803f90e0 FUN_1803f90e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803f90e0(int *param_1,float *param_2,int param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  float *pfVar1;
  short *psVar2;
  longlong ******pppppplVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  short sVar13;
  int iVar14;
  longlong ******pppppplVar15;
  longlong lVar16;
  int iVar17;
  int *piVar18;
  float *pfVar19;
  longlong ******pppppplVar20;
  longlong ******pppppplVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_338 [32];
  float local_318;
  undefined1 *local_308;
  int local_300;
  longlong ******local_2f8;
  undefined1 *local_2f0;
  undefined8 *local_2e8;
  undefined1 *local_2e0;
  undefined1 local_2d8 [528];
  ulonglong local_c8;
  
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_338;
  pppppplVar20 = (longlong ******)0x0;
  puVar24 = (undefined8 *)0x0;
  local_2e8 = (undefined8 *)0x0;
  local_2f8 = (longlong ******)0x0;
  if (*param_1 < 0x41) {
    local_308 = local_2d8;
  }
  else {
    local_308 = (undefined1 *)_malloc_base((longlong)(int)(*param_1 * 2 | 1) * 4);
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
  }
  fVar6 = DAT_1808ac34c;
  iVar23 = *param_1;
  param_2[(longlong)param_3 * 5 + 1] = (float)(param_1[1] + param_6) + DAT_1808ac34c;
  uVar9 = _DAT_1808ade90;
  fVar8 = DAT_1808acda0;
  fVar7 = DAT_1808acb94;
  fVar5 = DAT_1808ac1f4;
  lVar4 = DAT_180ca0a50;
  if (0 < param_1[1]) {
    local_2f0 = local_308 + (longlong)iVar23 * 4;
    pppppplVar21 = (longlong ******)0x0;
    iVar14 = 0;
    iVar23 = 0;
    local_2e0 = local_2f0 + 4;
    local_300 = param_6;
    do {
      pppppplVar15 = (longlong ******)&local_2f8;
      fVar28 = (float)local_300 + fVar6;
      fVar27 = (float)local_300 + 0.0;
      FUN_180540170(local_308,0,(longlong)*param_1 << 2);
      FUN_180540170(local_2f0);
      if (pppppplVar20 != (longlong ******)0x0) {
        do {
          pppppplVar20 = (longlong ******)*pppppplVar15;
          if (*(float *)((longlong)pppppplVar20 + 0x1c) <= fVar27) {
            *pppppplVar15 = *pppppplVar20;
            *pppppplVar20 = (longlong *****)pppppplVar21;
            *(undefined4 *)((longlong)pppppplVar20 + 0x14) = 0;
            pppppplVar21 = pppppplVar20;
            pppppplVar20 = pppppplVar15;
          }
          pppppplVar15 = pppppplVar20;
        } while (*pppppplVar20 != (longlong *****)0x0);
        pppppplVar20 = local_2f8;
      }
      pfVar19 = param_2;
      if (param_2[1] <= fVar28) {
        do {
          if (pfVar19[1] != pfVar19[3]) {
            puVar12 = puVar24;
            if (pppppplVar21 == (longlong ******)0x0) {
              if (iVar14 == 0) {
                puVar12 = (undefined8 *)_malloc_base(0x6408);
                if (DAT_180ca0a50 != 0) {
                  FUN_1803ddee0(DAT_180ca0a50 + 0x29b4);
                }
                if (puVar12 == (undefined8 *)0x0) goto LAB_1803f9400;
                *puVar12 = puVar24;
                iVar14 = 800;
              }
              iVar14 = iVar14 + -1;
              pppppplVar15 = (longlong ******)(puVar12 + (longlong)iVar14 * 4 + 1);
              puVar24 = puVar12;
              if (pppppplVar15 == (longlong ******)0x0) goto LAB_1803f9400;
            }
            else {
              pppppplVar15 = pppppplVar21;
              pppppplVar21 = (longlong ******)*pppppplVar21;
            }
            fVar26 = (pfVar19[2] - *pfVar19) / (pfVar19[3] - pfVar19[1]);
            *(float *)((longlong)pppppplVar15 + 0xc) = fVar26;
            if (fVar26 == 0.0) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = fVar6 / fVar26;
            }
            *(float *)(pppppplVar15 + 2) = fVar25;
            *(float *)(pppppplVar15 + 1) =
                 ((fVar27 - pfVar19[1]) * fVar26 + *pfVar19) - (float)param_5;
            fVar26 = fVar8;
            if (pfVar19[4] != 0.0) {
              fVar26 = fVar6;
            }
            *(float *)((longlong)pppppplVar15 + 0x14) = fVar26;
            *(float *)(pppppplVar15 + 3) = pfVar19[1];
            fVar26 = pfVar19[3];
            *(float *)((longlong)pppppplVar15 + 0x1c) = fVar26;
            if (((iVar23 == 0) && (param_6 != 0)) && (fVar26 < fVar27)) {
              *(float *)((longlong)pppppplVar15 + 0x1c) = fVar27;
            }
            *pppppplVar15 = (longlong *****)pppppplVar20;
            pppppplVar20 = pppppplVar15;
            puVar24 = puVar12;
          }
LAB_1803f9400:
          param_2 = pfVar19 + 5;
          pfVar1 = pfVar19 + 6;
          pfVar19 = param_2;
        } while (*pfVar1 <= fVar28);
        local_2f8 = pppppplVar20;
        local_2e8 = puVar24;
      }
      puVar10 = local_308;
      if (pppppplVar20 != (longlong ******)0x0) {
        local_318 = fVar27;
        FUN_180238080(local_308,local_2e0,*param_1,pppppplVar20);
      }
      iVar22 = 0;
      fVar27 = 0.0;
      if (0 < *param_1) {
        do {
          fVar27 = fVar27 + *(float *)(local_2f0 + (longlong)iVar22 * 4);
          iVar17 = (int)((float)((uint)(fVar27 + *(float *)(puVar10 + (longlong)iVar22 * 4)) & uVar9
                                ) * fVar7 + fVar5);
          if (0xff < iVar17) {
            iVar17 = 0xff;
          }
          iVar11 = iVar23 * param_1[2] + iVar22;
          iVar22 = iVar22 + 1;
          *(char *)((longlong)iVar11 + *(longlong *)(param_1 + 4)) = (char)iVar17;
        } while (iVar22 < *param_1);
        puVar24 = local_2e8;
      }
      pppppplVar15 = (longlong ******)&local_2f8;
      pppppplVar3 = pppppplVar20;
      while (pppppplVar3 != (longlong ******)0x0) {
        pppppplVar15 = (longlong ******)*pppppplVar15;
        *(float *)(pppppplVar15 + 1) =
             *(float *)((longlong)pppppplVar15 + 0xc) + *(float *)(pppppplVar15 + 1);
        pppppplVar3 = (longlong ******)*pppppplVar15;
      }
      iVar23 = iVar23 + 1;
      local_300 = local_300 + 1;
      lVar4 = DAT_180ca0a50;
    } while (iVar23 < param_1[1]);
  }
  while (DAT_180ca0a50 = lVar4, puVar24 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)*puVar24;
    if (lVar4 != 0) {
      iVar23 = *(int *)(lVar4 + 4);
      lVar16 = (longlong)*(short *)(lVar4 + 0x29bc) * 8;
      if (*(int *)(lVar4 + 0x29c0 + lVar16) != iVar23) {
        iVar14 = *(short *)(lVar4 + 0x29bc) + 1;
        sVar13 = (short)iVar14 + (short)(iVar14 / 6) * -6;
        *(short *)(lVar4 + 0x29bc) = sVar13;
        lVar16 = (longlong)sVar13 * 8;
        *(undefined4 *)(lVar16 + 0x29c4 + lVar4) = 0;
        *(int *)(lVar16 + 0x29c0 + lVar4) = iVar23;
      }
      psVar2 = (short *)(lVar16 + 0x29c6 + lVar4);
      *psVar2 = *psVar2 + 1;
      *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(puVar24);
    lVar4 = DAT_180ca0a50;
    puVar24 = puVar12;
  }
  if (local_308 != local_2d8) {
    if ((local_308 != (undefined1 *)0x0) && (lVar4 != 0)) {
      piVar18 = (int *)(lVar4 + 0x29c0 + (longlong)*(short *)(lVar4 + 0x29bc) * 8);
      if (*piVar18 != *(int *)(lVar4 + 4)) {
        iVar23 = *(short *)(lVar4 + 0x29bc) + 1;
        sVar13 = (short)iVar23 + (short)(iVar23 / 6) * -6;
        *(short *)(lVar4 + 0x29bc) = sVar13;
        piVar18 = (int *)(lVar4 + 0x29c0 + (longlong)sVar13 * 8);
        *piVar18 = *(int *)(lVar4 + 4);
        *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar13 * 8) = 0;
      }
      *(short *)((longlong)piVar18 + 6) = *(short *)((longlong)piVar18 + 6) + 1;
      *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(local_308);
  }
  return;
}



/* ===== 1803f96c0 FUN_1803f96c0 ===== */

void FUN_1803f96c0(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
                  uint param_6,float param_7,float param_8)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  
  if (0 < (int)param_4) {
    iVar11 = 0;
    if (7 < param_4) {
      do {
        iVar11 = iVar11 + 8;
      } while (iVar11 < (int)(param_4 & 0xfffffff8));
      if ((int)param_4 <= iVar11) goto LAB_1803f9787;
    }
    if (1 < (int)(param_4 - iVar11)) {
      do {
        iVar11 = iVar11 + 2;
      } while (iVar11 < (int)(param_4 - 1));
    }
  }
LAB_1803f9787:
  lVar4 = _malloc_base();
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  if (lVar4 != 0) {
    iVar11 = 0;
    fVar16 = (float)(param_6 ^ DAT_1808adec0);
    iVar13 = 0;
    uVar15 = 0;
    if (0 < (int)param_4) {
      do {
        iVar8 = *(int *)(param_3 + uVar15 * 4);
        lVar9 = (longlong)iVar13 * 8 + param_2;
        iVar13 = iVar13 + iVar8;
        iVar12 = iVar8 + -1;
        iVar7 = 0;
        if (0 < iVar8) {
          do {
            if (*(float *)(lVar9 + 4 + (longlong)iVar12 * 8) !=
                *(float *)(lVar9 + 4 + (longlong)iVar7 * 8)) {
              lVar5 = (longlong)iVar11;
              *(undefined4 *)(lVar4 + 0x10 + lVar5 * 0x14) = 0;
              fVar3 = *(float *)(lVar9 + 4 + (longlong)iVar12 * 8);
              pfVar2 = (float *)(lVar9 + 4 + (longlong)iVar7 * 8);
              iVar8 = iVar7;
              if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
                *(undefined4 *)(lVar4 + 0x10 + lVar5 * 0x14) = 1;
                iVar8 = iVar12;
                iVar12 = iVar7;
              }
              iVar11 = iVar11 + 1;
              *(float *)(lVar4 + lVar5 * 0x14) =
                   param_5 * *(float *)(lVar9 + (longlong)iVar8 * 8) + param_7;
              *(float *)(lVar4 + 4 + lVar5 * 0x14) =
                   fVar16 * *(float *)(lVar9 + 4 + (longlong)iVar8 * 8) + param_8;
              *(float *)(lVar4 + 8 + lVar5 * 0x14) =
                   param_5 * *(float *)(lVar9 + (longlong)iVar12 * 8) + param_7;
              *(float *)(lVar4 + 0xc + lVar5 * 0x14) =
                   fVar16 * *(float *)(lVar9 + 4 + (longlong)iVar12 * 8) + param_8;
            }
            iVar8 = iVar7 + 1;
            iVar12 = iVar7;
            iVar7 = iVar8;
          } while (iVar8 < *(int *)(param_3 + uVar15 * 4));
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while ((int)uVar14 < (int)param_4);
    }
    FUN_180238ce0(lVar4,iVar11);
    FUN_180238b40(lVar4,iVar11);
    FUN_1803f90e0(param_1,lVar4,iVar11);
    lVar9 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar10 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar10 != *piVar1) {
        iVar11 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        lVar5 = DAT_180ca0a50 + 0x29c0;
        sVar6 = (short)iVar11 + (short)(iVar11 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar6;
        piVar10 = (int *)(lVar5 + (longlong)sVar6 * 8);
        *piVar10 = *piVar1;
        *(undefined4 *)(lVar9 + 0x29c4 + (longlong)sVar6 * 8) = 0;
      }
      *(short *)((longlong)piVar10 + 6) = *(short *)((longlong)piVar10 + 6) + 1;
      piVar1 = (int *)(lVar9 + 0x29b8);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_1805277b0(lVar4);
  }
  return;
}



/* ===== 1803f99e0 FUN_1803f99e0 ===== */

void FUN_1803f99e0(longlong param_1,int *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11,int param_12)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = (param_8 - param_6) * (param_8 - param_6) + (param_7 - param_5) * (param_7 - param_5);
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18051af10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar4 = (param_6 - param_4) * (param_6 - param_4) + (param_5 - param_3) * (param_5 - param_3);
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_18051af10(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  fVar6 = (param_10 - param_8) * (param_10 - param_8) + (param_9 - param_7) * (param_9 - param_7);
  if (fVar6 < 0.0) {
    fVar6 = (float)FUN_18051af10(fVar6);
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  fVar6 = fVar2 + fVar4 + fVar6;
  fVar2 = (param_10 - param_4) * (param_10 - param_4) + (param_9 - param_3) * (param_9 - param_3);
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18051af10(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar2 = fVar6 * fVar6 - fVar2 * fVar2;
  while( true ) {
    if (0x10 < param_12) {
      return;
    }
    if (fVar2 <= param_11) break;
    param_12 = param_12 + 1;
    fVar6 = (param_4 + param_6) * DAT_1808ac1f4;
    fVar2 = (param_6 + param_8) * DAT_1808ac1f4;
    fVar7 = (param_5 + param_7) * DAT_1808ac1f4;
    param_8 = (param_8 + param_10) * DAT_1808ac1f4;
    param_7 = (param_7 + param_9) * DAT_1808ac1f4;
    fVar3 = (param_3 + param_5) * DAT_1808ac1f4;
    param_6 = (param_8 + fVar2) * DAT_1808ac1f4;
    fVar2 = (fVar2 + fVar6) * DAT_1808ac1f4;
    fVar4 = (fVar7 + fVar3) * DAT_1808ac1f4;
    param_5 = (param_7 + fVar7) * DAT_1808ac1f4;
    fVar7 = (param_6 + fVar2) * DAT_1808ac1f4;
    fVar5 = (param_5 + fVar4) * DAT_1808ac1f4;
    FUN_1803f99e0(param_1,param_2,param_3,param_4,fVar3,fVar6,fVar4,fVar2,fVar5,fVar7,param_11,
                  param_12);
    fVar2 = (param_8 - param_6) * (param_8 - param_6) + (param_7 - param_5) * (param_7 - param_5);
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_18051af10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar4 = (param_6 - fVar7) * (param_6 - fVar7) + (param_5 - fVar5) * (param_5 - fVar5);
    if (fVar4 < 0.0) {
      fVar4 = (float)FUN_18051af10(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar6 = (param_10 - param_8) * (param_10 - param_8) + (param_9 - param_7) * (param_9 - param_7);
    if (fVar6 < 0.0) {
      fVar6 = (float)FUN_18051af10(fVar6);
    }
    else {
      fVar6 = SQRT(fVar6);
    }
    fVar6 = fVar2 + fVar4 + fVar6;
    fVar2 = (param_10 - fVar7) * (param_10 - fVar7) + (param_9 - fVar5) * (param_9 - fVar5);
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_18051af10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar6 * fVar6 - fVar2 * fVar2;
    param_4 = fVar7;
    param_3 = fVar5;
  }
  iVar1 = *param_2;
  if (param_1 != 0) {
    *(float *)(param_1 + (longlong)iVar1 * 8) = param_9;
    *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_10;
  }
  *param_2 = iVar1 + 1;
  return;
}



/* ===== 1803f9e80 FUN_1803f9e80 ===== */

longlong FUN_1803f9e80(longlong param_1,int param_2,undefined8 param_3,longlong *param_4,
                      int *param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined2 uVar14;
  int local_res10 [2];
  int local_res18;
  
  iVar12 = 0;
  local_res10[0] = 0;
  uVar8 = 0;
  if (0 < param_2) {
    do {
      iVar4 = iVar12 + 1;
      if (*(char *)(param_1 + 0xc + uVar8 * 0xe) != '\x01') {
        iVar4 = iVar12;
      }
      iVar12 = iVar4;
      uVar11 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar11;
    } while ((int)uVar11 < param_2);
  }
  *param_5 = iVar12;
  if (iVar12 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = _malloc_base((longlong)iVar12 * 4);
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4);
    }
    *param_4 = lVar5;
    if (lVar5 == 0) {
      *param_5 = 0;
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      lVar13 = 0;
      local_res18 = 0;
      do {
        if (local_res18 == 1) {
          lVar5 = _malloc_base((longlong)local_res10[0] * 8);
          if (DAT_180ca0a50 != 0) {
            FUN_1803ddee0(DAT_180ca0a50 + 0x29b4);
          }
          if (lVar5 == 0) {
            thunk_FUN_1805277b0(0);
            lVar13 = DAT_180ca0a50;
            lVar5 = *param_4;
            if ((lVar5 != 0) && (DAT_180ca0a50 != 0)) {
              piVar1 = (int *)(DAT_180ca0a50 + 4);
              piVar9 = (int *)(DAT_180ca0a50 + 0x29c0 +
                              (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
              if (*piVar9 != *piVar1) {
                iVar12 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
                lVar10 = DAT_180ca0a50 + 0x29c0;
                sVar6 = (short)iVar12 + (short)(iVar12 / 6) * -6;
                *(short *)(DAT_180ca0a50 + 0x29bc) = sVar6;
                piVar9 = (int *)(lVar10 + (longlong)sVar6 * 8);
                *piVar9 = *piVar1;
                *(undefined4 *)(lVar13 + 0x29c4 + (longlong)sVar6 * 8) = 0;
              }
              *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
              piVar1 = (int *)(lVar13 + 0x29b8);
              *piVar1 = *piVar1 + 1;
            }
            thunk_FUN_1805277b0(lVar5);
            *param_4 = 0;
            *param_5 = 0;
            return 0;
          }
        }
        uVar8 = 0;
        local_res10[0] = 0;
        iVar12 = -1;
        if (0 < param_2) {
          do {
            lVar10 = uVar8 * 0xe;
            cVar2 = *(char *)(param_1 + 0xc + lVar10);
            if (cVar2 == '\x01') {
              if (-1 < iVar12) {
                *(int *)(*param_4 + (longlong)iVar12 * 4) = local_res10[0] - (int)lVar13;
              }
              lVar13 = (longlong)local_res10[0];
              iVar12 = iVar12 + 1;
              uVar3 = *(undefined4 *)(param_1 + lVar10);
              uVar14 = (undefined2)((uint)uVar3 >> 0x10);
              local_res10[0] = local_res10[0] + 1;
              if (lVar5 != 0) {
                *(ulonglong *)(lVar5 + lVar13 * 8) =
                     CONCAT44((float)(int)((longlong)CONCAT26(uVar14,CONCAT24(uVar14,uVar3)) >> 0x30
                                          ),(float)(int)(short)uVar3);
              }
            }
            else if (cVar2 == '\x02') {
              lVar7 = (longlong)local_res10[0];
              uVar3 = *(undefined4 *)(param_1 + lVar10);
              uVar14 = (undefined2)((uint)uVar3 >> 0x10);
              local_res10[0] = local_res10[0] + 1;
              if (lVar5 != 0) {
                *(ulonglong *)(lVar5 + lVar7 * 8) =
                     CONCAT44((float)(int)((longlong)CONCAT26(uVar14,CONCAT24(uVar14,uVar3)) >> 0x30
                                          ),(float)(int)(short)uVar3);
              }
            }
            else if (cVar2 == '\x03') {
              FUN_1802393d0(lVar5,local_res10);
            }
            else if (cVar2 == '\x04') {
              FUN_1803f99e0(lVar5,local_res10);
            }
            uVar11 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar11;
          } while ((int)uVar11 < param_2);
        }
        *(int *)(*param_4 + (longlong)iVar12 * 4) = local_res10[0] - (int)lVar13;
        local_res18 = local_res18 + 1;
      } while (local_res18 < 2);
    }
  }
  return lVar5;
}



/* ===== 1803fa340 FUN_1803fa340 ===== */

void FUN_1803fa340(undefined8 param_1,float param_2,undefined8 param_3,undefined4 param_4,
                  float param_5,float param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  undefined4 local_res10 [6];
  
  fVar8 = param_6;
  if (param_5 <= param_6) {
    fVar8 = param_5;
  }
  local_res10[0] = 0;
  _param_12 = 0;
  lVar4 = FUN_1803f9e80(param_3,param_4,param_2 / fVar8,&param_12,local_res10);
  if (lVar4 != 0) {
    FUN_1803f96c0(param_1,lVar4,_param_12,local_res10[0],param_5,param_6,param_7,param_8,param_9,
                  param_10);
    lVar3 = DAT_180ca0a50;
    if ((_param_12 != 0) && (DAT_180ca0a50 != 0)) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar7 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar7 != *piVar1) {
        iVar6 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        lVar2 = DAT_180ca0a50 + 0x29c0;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar2 + (longlong)sVar5 * 8);
        *piVar7 = *piVar1;
        *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      piVar1 = (int *)(lVar3 + 0x29b8);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_1805277b0(_param_12);
    lVar3 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar7 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar7 != *piVar1) {
        iVar6 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        lVar2 = DAT_180ca0a50 + 0x29c0;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar2 + (longlong)sVar5 * 8);
        *piVar7 = *piVar1;
        *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      piVar1 = (int *)(lVar3 + 0x29b8);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_1805277b0(lVar4);
  }
  return;
}



/* ===== 1803fa530 FUN_1803fa530 ===== */

void FUN_1803fa530(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                  float param_6,float param_7,float param_8,float param_9,undefined4 param_10)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  float fVar10;
  longlong local_res8;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  
  uVar3 = FUN_1803f8fd0(param_1,param_10,&local_res8);
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar5 = FUN_180235af0();
    if (iVar5 < 0) {
      iVar4 = 0;
      iVar5 = 0;
      goto LAB_1803fa6c1;
    }
    lVar2 = *(longlong *)(param_1 + 8);
    lVar9 = (longlong)iVar5;
    iVar5 = (int)CONCAT11(*(undefined1 *)(lVar2 + 2 + lVar9),*(undefined1 *)(lVar2 + 3 + lVar9));
    iVar7 = (int)CONCAT11(*(undefined1 *)(lVar2 + 8 + lVar9),*(undefined1 *)(lVar2 + 9 + lVar9));
  }
  else {
    local_90 = 1;
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    iVar4 = FUN_180236d80(param_1,param_10,&local_90);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = (int)local_78;
    }
    iVar7 = 0;
    if (iVar4 != 0) {
      iVar7 = uStack_70._4_4_;
    }
  }
  fVar10 = (float)iVar5 * param_6 + param_8;
  iVar5 = (int)fVar10;
  if ((fVar10 < 0.0) && ((float)iVar5 != fVar10)) {
    iVar5 = iVar5 + -1;
  }
  iVar4 = (int)(float)iVar5;
  fVar10 = param_9 - (float)iVar7 * param_7;
  iVar5 = (int)fVar10;
  if ((fVar10 < 0.0) && ((float)iVar5 != fVar10)) {
    iVar5 = iVar5 + -1;
  }
  iVar5 = (int)(float)iVar5;
LAB_1803fa6c1:
  local_a0 = param_5;
  local_a8 = param_3;
  local_a4 = param_4;
  local_98 = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_1803fa340(&local_a8,iVar4,local_res8,uVar3,param_6,param_7,param_8,param_9,iVar4,iVar5);
  }
  lVar2 = DAT_180ca0a50;
  if ((local_res8 != 0) && (DAT_180ca0a50 != 0)) {
    piVar1 = (int *)(DAT_180ca0a50 + 4);
    piVar8 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
    if (*piVar8 != *piVar1) {
      iVar5 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
      lVar9 = DAT_180ca0a50 + 0x29c0;
      sVar6 = (short)iVar5 + (short)(iVar5 / 6) * -6;
      *(short *)(DAT_180ca0a50 + 0x29bc) = sVar6;
      piVar8 = (int *)(lVar9 + (longlong)sVar6 * 8);
      *piVar8 = *piVar1;
      *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar6 * 8) = 0;
    }
    *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
    piVar1 = (int *)(lVar2 + 0x29b8);
    *piVar1 = *piVar1 + 1;
  }
  thunk_FUN_1805277b0(local_res8);
  return;
}



/* ===== 1803fa7d0 FUN_1803fa7d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803fa7d0(longlong param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  byte local_38 [8];
  ulonglong local_30;
  
  if (0 < param_3) {
    local_30 = DAT_180919500 ^ (ulonglong)auStack_58;
    iVar4 = param_2 - param_5;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    do {
      FUN_180540170(local_38,0,param_5);
      uVar7 = 0;
      if (param_5 == 2) {
        uVar3 = 0;
        if (-1 < iVar4) {
          do {
            lVar5 = (longlong)(int)uVar3;
            bVar1 = *(byte *)(param_1 + lVar5);
            uVar6 = (int)uVar7 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]);
            uVar7 = (ulonglong)uVar6;
            uVar2 = uVar3 + 2;
            uVar3 = uVar3 + 1;
            local_38[uVar2 & 7] = bVar1;
            *(char *)(param_1 + lVar5) = (char)(uVar6 >> 1);
          } while ((int)uVar3 <= iVar4);
        }
      }
      else if (param_5 == 3) {
        uVar3 = 0;
        if (-1 < iVar4) {
          do {
            lVar5 = (longlong)(int)uVar3;
            bVar1 = *(byte *)(param_1 + lVar5);
            uVar7 = (ulonglong)((int)uVar7 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]));
            uVar2 = uVar3 + 3;
            uVar3 = uVar3 + 1;
            local_38[uVar2 & 7] = bVar1;
            *(char *)(param_1 + lVar5) = (char)(uVar7 / 3);
          } while ((int)uVar3 <= iVar4);
        }
      }
      else if (param_5 == 4) {
        uVar3 = 0;
        if (-1 < iVar4) {
          do {
            lVar5 = (longlong)(int)uVar3;
            bVar1 = *(byte *)(param_1 + lVar5);
            uVar6 = (int)uVar7 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]);
            uVar7 = (ulonglong)uVar6;
            uVar2 = uVar3 + 4;
            uVar3 = uVar3 + 1;
            local_38[uVar2 & 7] = bVar1;
            *(char *)(param_1 + lVar5) = (char)(uVar6 >> 2);
          } while ((int)uVar3 <= iVar4);
        }
      }
      else {
        uVar3 = 0;
        if (param_5 == 5) {
          if (-1 < iVar4) {
            do {
              lVar5 = (longlong)(int)uVar3;
              bVar1 = *(byte *)(param_1 + lVar5);
              uVar7 = (ulonglong)((int)uVar7 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]));
              uVar2 = uVar3 + 5;
              uVar3 = uVar3 + 1;
              local_38[uVar2 & 7] = bVar1;
              *(char *)(param_1 + lVar5) = (char)(uVar7 / 5);
            } while ((int)uVar3 <= iVar4);
          }
        }
        else if (-1 < iVar4) {
          do {
            lVar5 = (longlong)(int)uVar3;
            bVar1 = *(byte *)(param_1 + lVar5);
            uVar6 = (int)uVar7 + ((uint)bVar1 - (uint)local_38[uVar3 & 7]);
            uVar7 = (ulonglong)uVar6;
            uVar2 = param_5 + uVar3;
            uVar3 = uVar3 + 1;
            local_38[uVar2 & 7] = bVar1;
            *(char *)(param_1 + lVar5) = (char)(uVar6 / param_5);
          } while ((int)uVar3 <= iVar4);
        }
      }
      for (; (int)uVar3 < param_2; uVar3 = uVar3 + 1) {
        uVar2 = (int)uVar7 - (uint)local_38[uVar3 & 7];
        uVar7 = (ulonglong)uVar2;
        *(char *)(param_1 + (int)uVar3) = (char)(uVar2 / param_5);
      }
      param_1 = param_1 + param_4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* ===== 1803faa20 FUN_1803faa20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1803faa20(longlong param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  byte local_38 [8];
  ulonglong local_30;
  
  uVar4 = DAT_180919500 ^ (ulonglong)auStack_58;
  iVar6 = param_3 - param_5;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_30 = uVar4;
  if (0 < param_2) {
    do {
      FUN_180540170(local_38,0,param_5);
      uVar8 = 0;
      if (param_5 == 2) {
        uVar5 = 0;
        uVar4 = 0;
        if (-1 < iVar6) {
          do {
            iVar3 = param_4 * uVar5;
            bVar1 = *(byte *)(param_1 + iVar3);
            uVar7 = (int)uVar8 + ((uint)bVar1 - (uint)local_38[uVar5 & 7]);
            uVar8 = (ulonglong)uVar7;
            uVar2 = uVar5 + 2;
            uVar5 = uVar5 + 1;
            local_38[uVar2 & 7] = bVar1;
            uVar7 = uVar7 >> 1;
            uVar4 = (ulonglong)uVar7;
            *(char *)(param_1 + iVar3) = (char)uVar7;
          } while ((int)uVar5 <= iVar6);
        }
      }
      else if (param_5 == 3) {
        uVar5 = 0;
        uVar4 = 0;
        if (-1 < iVar6) {
          do {
            iVar3 = param_4 * uVar5;
            bVar1 = *(byte *)(param_1 + iVar3);
            uVar8 = (ulonglong)((int)uVar8 + ((uint)bVar1 - (uint)local_38[uVar5 & 7]));
            uVar2 = uVar5 + 3;
            uVar5 = uVar5 + 1;
            local_38[uVar2 & 7] = bVar1;
            uVar4 = uVar8 * 0xaaaaaaab & 0xffffffff;
            *(char *)(param_1 + iVar3) = (char)(uVar8 / 3);
          } while ((int)uVar5 <= iVar6);
        }
      }
      else {
        uVar2 = param_5 - 4;
        uVar4 = (ulonglong)uVar2;
        if (uVar2 == 0) {
          uVar5 = 0;
          if (-1 < iVar6) {
            do {
              iVar3 = param_4 * uVar5;
              bVar1 = *(byte *)(param_1 + iVar3);
              uVar7 = (int)uVar8 + ((uint)bVar1 - (uint)local_38[uVar5 & 7]);
              uVar8 = (ulonglong)uVar7;
              uVar2 = uVar5 + 4;
              uVar5 = uVar5 + 1;
              local_38[uVar2 & 7] = bVar1;
              uVar7 = uVar7 >> 2;
              uVar4 = (ulonglong)uVar7;
              *(char *)(param_1 + iVar3) = (char)uVar7;
            } while ((int)uVar5 <= iVar6);
          }
        }
        else {
          uVar5 = 0;
          if (uVar2 == 1) {
            if (-1 < iVar6) {
              do {
                iVar3 = param_4 * uVar5;
                bVar1 = *(byte *)(param_1 + iVar3);
                uVar8 = (ulonglong)((int)uVar8 + ((uint)bVar1 - (uint)local_38[uVar5 & 7]));
                uVar2 = uVar5 + 5;
                uVar5 = uVar5 + 1;
                local_38[uVar2 & 7] = bVar1;
                uVar4 = uVar8 * 0xcccccccd & 0xffffffff;
                *(char *)(param_1 + iVar3) = (char)(uVar8 / 5);
              } while ((int)uVar5 <= iVar6);
            }
          }
          else if (-1 < iVar6) {
            do {
              iVar3 = param_4 * uVar5;
              bVar1 = *(byte *)(param_1 + iVar3);
              uVar7 = (int)uVar8 + ((uint)bVar1 - (uint)local_38[uVar5 & 7]);
              uVar8 = (ulonglong)uVar7;
              uVar2 = param_5 + uVar5;
              uVar5 = uVar5 + 1;
              local_38[uVar2 & 7] = bVar1;
              uVar4 = (ulonglong)uVar7 / (ulonglong)param_5;
              *(char *)(param_1 + iVar3) = (char)uVar4;
            } while ((int)uVar5 <= iVar6);
          }
        }
      }
      for (; (int)uVar5 < param_3; uVar5 = uVar5 + 1) {
        uVar2 = (int)uVar8 - (uint)local_38[uVar5 & 7];
        uVar8 = (ulonglong)uVar2;
        uVar4 = (ulonglong)uVar2 / (ulonglong)param_5;
        *(char *)(param_1 + (int)(param_4 * uVar5)) = (char)uVar4;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar4;
}



/* ===== 1803fac90 FUN_1803fac90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803fac90(longlong param_1)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_1 == 0) {
    param_1 = DAT_180ca0a50 + 0xc90;
  }
  *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x154) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x158) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x160) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x164) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x168) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x170) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x174) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x178) = 0x3d75c28f;
  *(undefined8 *)(param_1 + 0x17c) = 0x3f70a3d7;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x194) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x198) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x19c) = 0x3f70a3d7;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3edc28f6;
  *(undefined4 *)(param_1 + 0x1a4) = 0x3edc28f6;
  *(undefined4 *)(param_1 + 0x1a8) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x1ac) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0x3e23d70a;
  *(undefined4 *)(param_1 + 0x1c4) = 0x3e947ae1;
  *(undefined4 *)(param_1 + 0x1c8) = 0x3ef5c28f;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f0a3d71;
  *(undefined4 *)(param_1 + 0x1d0) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x1d8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x1dc) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x1ec) = 0x3f2b851f;
  *(undefined4 *)(param_1 + 0x1f0) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 500) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x1f8) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x200) = 0x3e23d70a;
  *(undefined4 *)(param_1 + 0x204) = 0x3e947ae1;
  *(undefined4 *)(param_1 + 0x208) = 0x3ef5c28f;
  fVar2 = _UNK_1808ada44;
  fVar1 = _DAT_1808ada40;
  *(undefined8 *)(param_1 + 0x20c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0x3f028f5c;
  *(undefined4 *)(param_1 + 0x220) = 0x3e0f5c29;
  *(undefined4 *)(param_1 + 0x224) = 0x3e0f5c29;
  *(undefined4 *)(param_1 + 0x228) = 0x3e0f5c29;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x230) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x234) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x238) = 0x3ca3d70a;
  *(undefined4 *)(param_1 + 0x23c) = 0x3f07ae14;
  *(undefined4 *)(param_1 + 0x240) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x244) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x248) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x250) = 0x3ed1eb85;
  *(undefined4 *)(param_1 + 0x254) = 0x3ed1eb85;
  *(undefined4 *)(param_1 + 600) = 0x3ed1eb85;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x260) = 0x3f028f5c;
  *(undefined4 *)(param_1 + 0x264) = 0x3f028f5c;
  *(undefined4 *)(param_1 + 0x268) = 0x3f028f5c;
  *(undefined4 *)(param_1 + 0x26c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x270) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x274) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x278) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x27c) = 0x3f800000;
  fVar5 = (float)*(undefined8 *)(param_1 + 0x1c0);
  fVar7 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1c0) >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x1c8);
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20);
  *(ulonglong *)(param_1 + 0x280) =
       CONCAT44(((float)((ulonglong)*(undefined8 *)(param_1 + 0x1d0) >> 0x20) - fVar7) * fVar2 +
                fVar7,((float)*(undefined8 *)(param_1 + 0x1d0) - fVar5) * fVar1 + fVar5);
  fVar7 = _UNK_1808adaa4;
  fVar5 = _DAT_1808adaa0;
  *(ulonglong *)(param_1 + 0x288) =
       CONCAT44(((float)((ulonglong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20) - fVar10) * fVar2 +
                fVar10,((float)*(undefined8 *)(param_1 + 0x1d8) - fVar9) * fVar1 + fVar9);
  *(undefined4 *)(param_1 + 0x290) = 0x3e75c28f;
  *(undefined4 *)(param_1 + 0x294) = 0x3f051eb8;
  *(undefined4 *)(param_1 + 0x298) = 0x3f6147ae;
  *(undefined4 *)(param_1 + 0x29c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a0) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2a4) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x2a8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x2ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b0) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2b4) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x2b8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 700) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x2c0) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2c4) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x2c8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x2cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d0) = 0x3d75c28f;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f07ae14;
  *(undefined4 *)(param_1 + 0x2d8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x2dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e0) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2e4) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x2e8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x2ec) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x2f0) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x2f4) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x2f8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x2fc) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x300) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x304) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x308) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x30c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 800) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x324) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x328) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x32c) = 0x3f47ae14;
  *(undefined4 *)(param_1 + 0x330) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x334) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x338) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x33c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x340) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x344) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x348) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x34c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x350) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x354) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x358) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x35c) = 0x3f2b851f;
  *(undefined4 *)(param_1 + 0x360) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x364) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x368) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x36c) = 0x3f733333;
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x2f8);
  fVar2 = _UNK_1808ada14;
  fVar1 = _DAT_1808ada10;
  fVar13 = (float)*(undefined8 *)(param_1 + 0x200);
  fVar14 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x200) >> 0x20);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x208);
  fVar4 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x208) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x2e0);
  fVar12 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x2e0) >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x2e8);
  fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x2e8) >> 0x20);
  fVar11 = (fVar13 - fVar11) * fVar5 + fVar11;
  fVar12 = (fVar14 - fVar12) * fVar7 + fVar12;
  fVar9 = (fVar3 - fVar9) * fVar5 + fVar9;
  fVar10 = (fVar4 - fVar10) * fVar7 + fVar10;
  *(ulonglong *)(param_1 + 0x390) = CONCAT44(fVar12,fVar11);
  *(ulonglong *)(param_1 + 0x398) = CONCAT44(fVar10,fVar9);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x300);
  fVar16 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x300) >> 0x20);
  fVar15 = (fVar13 - fVar15) * fVar1 + fVar15;
  fVar16 = (fVar14 - fVar16) * fVar2 + fVar16;
  fVar13 = (float)*(undefined8 *)(param_1 + 0x308);
  fVar14 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x308) >> 0x20);
  *(ulonglong *)(param_1 + 0x3a0) = CONCAT44(fVar16,fVar15);
  fVar13 = (fVar3 - fVar13) * fVar1 + fVar13;
  fVar14 = (fVar4 - fVar14) * fVar2 + fVar14;
  *(ulonglong *)(param_1 + 0x3a8) = CONCAT44(fVar14,fVar13);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x308);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x1f0);
  fVar3 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20);
  fVar6 = (float)*(undefined8 *)(param_1 + 0x1f8);
  fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1f8) >> 0x20);
  *(ulonglong *)(param_1 + 0x3c0) =
       CONCAT44((fVar3 - fVar12) * fVar7 + fVar12,(fVar4 - fVar11) * fVar5 + fVar11);
  fVar2 = _UNK_1808ad9a4;
  fVar1 = _DAT_1808ad9a0;
  *(ulonglong *)(param_1 + 0x3c8) =
       CONCAT44((fVar8 - fVar10) * fVar7 + fVar10,(fVar6 - fVar9) * fVar5 + fVar9);
  *(ulonglong *)(param_1 + 0x3d0) =
       CONCAT44((fVar3 - fVar16) * fVar2 + fVar16,(fVar4 - fVar15) * fVar1 + fVar15);
  *(ulonglong *)(param_1 + 0x3d8) =
       CONCAT44((fVar8 - fVar14) * fVar2 + fVar14,(fVar6 - fVar13) * fVar1 + fVar13);
  *(undefined4 *)(param_1 + 0x3e0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3e4) = 0x3f000000;
  *(undefined8 *)(param_1 + 1000) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3f0) = 0x3f1c28f6;
  *(undefined4 *)(param_1 + 0x3f4) = 0x3f1c28f6;
  *(undefined4 *)(param_1 + 0x3f8) = 0x3f1c28f6;
  *(undefined4 *)(param_1 + 0x3fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x404) = 0x3edc28f6;
  *(undefined4 *)(param_1 + 0x408) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x40c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x410) = 0x3f666666;
  *(undefined8 *)(param_1 + 0x414) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x41c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x420) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x424) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x42c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x430) = 0x3e428f5c;
  *(undefined4 *)(param_1 + 0x434) = 0x3e428f5c;
  *(undefined4 *)(param_1 + 0x438) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x43c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x440) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x444) = 0x3e9eb852;
  *(undefined4 *)(param_1 + 0x448) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x44c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x450) = 0x3e6b851f;
  *(undefined4 *)(param_1 + 0x454) = 0x3e6b851f;
  *(undefined4 *)(param_1 + 0x458) = 0x3e800000;
  *(undefined8 *)(param_1 + 0x45c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x474) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x478) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47c) = 0x3d75c28f;
  *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x490) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x494) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x498) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x49c) = 0x3eb33333;
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x4b0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4b4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4bc) = 0x3f666666;
  *(undefined8 *)(param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4e0) = 0x3e851eb8;
  *(undefined4 *)(param_1 + 0x4e4) = 0x3f170a3d;
  *(undefined4 *)(param_1 + 0x4e8) = 0x3f7ae148;
  *(undefined4 *)(param_1 + 0x4ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4fc) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x500) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x504) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x508) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x50c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x510) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x514) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x518) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x51c) = 0x3eb33333;
  *(undefined4 *)(param_1 + 0x520) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x524) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x528) = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0x52c) = 0x3eb33333;
  return;
}



/* ===== 1803fb5c0 FUN_1803fb5c0 ===== */

undefined8 * FUN_1803fb5c0(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar3 = 0;
  *param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
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
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
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
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_180540170(param_1,0,0x248);
  fVar2 = DAT_1808aca7c;
  fVar1 = DAT_1808ac680;
  do {
    fVar5 = (((float)(int)uVar3 + (float)(int)uVar3) * fVar1) / fVar2;
    uVar4 = FUN_180517200(fVar5);
    *(undefined4 *)(param_1 + (ulonglong)uVar3 + 0xe) = uVar4;
    uVar4 = FUN_180517790(fVar5);
    *(undefined4 *)((longlong)param_1 + (ulonglong)uVar3 * 8 + 0x74) = uVar4;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x30);
  return param_1;
}



/* ===== 1803fb7d0 FUN_1803fb7d0 ===== */

void FUN_1803fb7d0(longlong param_1)

{
  FUN_1803f5870(param_1 + 0x58);
  FUN_1803f5870(param_1 + 0x48);
  return;
}



