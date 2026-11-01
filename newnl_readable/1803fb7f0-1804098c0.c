/* ===== 1803fb7f0 FUN_1803fb7f0 ===== */

void FUN_1803fb7f0(longlong param_1,float param_2)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = DAT_1808ac34c;
  if (*(float *)(param_1 + 0x2c) != param_2) {
    uVar5 = 0;
    *(float *)(param_1 + 0x2c) = param_2;
    do {
      iVar4 = (int)uVar5;
      if (iVar4 == 0) {
        uVar2 = 0x30;
      }
      else {
        fVar6 = (float)iVar4;
        fVar7 = *(float *)(param_1 + 0x2c);
        if (fVar6 <= *(float *)(param_1 + 0x2c)) {
          fVar7 = fVar6;
        }
        FUN_18053eb30(fVar1 - fVar7 / fVar6);
        fVar7 = (float)FUN_18053ef70();
        iVar3 = (int)fVar7 + 1;
        if (iVar3 < 0) {
          iVar3 = (int)fVar7 + 2;
        }
        iVar3 = (iVar3 >> 1) * 2;
        if (iVar3 < 4) {
          uVar2 = 4;
        }
        else {
          if (0x200 < iVar3) {
            iVar3 = 0;
          }
          uVar2 = (undefined1)iVar3;
        }
      }
      *(undefined1 *)(param_1 + 500 + uVar5) = uVar2;
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while ((int)(iVar4 + 1U) < 0x40);
    fVar7 = (float)FUN_180517200();
    *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x2c) / (fVar1 - fVar7);
  }
  return;
}



/* ===== 1803fb8f0 FUN_1803fb8f0 ===== */

undefined8 * FUN_1803fb8f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_180540170(param_1,0,0xe0);
  FUN_1803fba70(param_1,param_2);
  return param_1;
}



/* ===== 1803fb9a0 FUN_1803fb9a0 ===== */

void FUN_1803fb9a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_1803fbcd0();
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x60);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x58);
    for (plVar4 = plVar3; plVar4 < plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_1) {
        if (plVar4 < plVar1 + -1) {
          *(longlong *)
           (((longlong)plVar4 - (longlong)plVar3 & 0xfffffffffffffff8U) + (longlong)plVar3) =
               plVar1[-1];
        }
        *(int *)(lVar2 + 0x58) = *(int *)(lVar2 + 0x58) + -1;
        break;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1803f5870(param_1 + 0xc0);
  FUN_1803f5870(param_1 + 0xb0);
  FUN_1803f5870(param_1 + 0xa0);
  FUN_1804014e0(param_1 + 0x88);
  FUN_1803f5870(param_1 + 0x90);
  FUN_1803f5870(param_1 + 0x50);
  FUN_1803f5870(param_1 + 0x20);
  FUN_18007dea0(param_1 + 0x10);
  FUN_1803f5870(param_1);
  return;
}



/* ===== 1803fba70 FUN_1803fba70 ===== */

void FUN_1803fba70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x60);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x58);
    for (plVar6 = plVar3; plVar6 < plVar1; plVar6 = plVar6 + 1) {
      if (*plVar6 == param_1) {
        if (plVar6 < plVar1 + -1) {
          *(longlong *)
           (((longlong)plVar6 - (longlong)plVar3 & 0xfffffffffffffff8U) + (longlong)plVar3) =
               plVar1[-1];
        }
        *(int *)(lVar2 + 0x58) = *(int *)(lVar2 + 0x58) + -1;
        break;
      }
    }
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x5c);
    if (*(int *)(param_2 + 0x58) == iVar4) {
      iVar5 = *(int *)(param_2 + 0x58) + 1;
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
      FUN_18000ba20(param_2 + 0x58,iVar5);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x60) + (longlong)*(int *)(param_2 + 0x58) * 8) = param_1;
    *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + 1;
  }
  return;
}



/* ===== 1803fbb30 FUN_1803fbb30 ===== */

void FUN_1803fbb30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (1 < (int)param_1[0x23]) {
    FUN_1804016a0(param_1 + 0x22,param_1);
  }
  iVar1 = param_1[1];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1803f71d0(param_1,iVar2);
  }
  *param_1 = 0;
  iVar1 = param_1[5];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1803f6b20(param_1 + 4,iVar2);
  }
  param_1[4] = 0;
  iVar1 = param_1[9];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1803f6760(param_1 + 8,iVar2);
  }
  param_1[8] = 0;
  param_1[0xc] = *(undefined4 *)(*(longlong *)(param_1 + 0xe) + 0x30);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0xd] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_1[0x29];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1803f7030(param_1 + 0x28,iVar2);
  }
  param_1[0x28] = 0;
  iVar1 = param_1[0x2d];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1803f7030(param_1 + 0x2c,iVar2);
  }
  param_1[0x2c] = 0;
  FUN_18000d5e0(param_1 + 0x30,0);
  iVar1 = param_1[0x15];
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar1 / 2;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_18000ba20(param_1 + 0x14,iVar2);
  }
  param_1[0x14] = 0;
  param_1[0x22] = 0;
  local_18 = 0;
  param_1[0x23] = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1803f7140(param_1,&local_58);
  return;
}



/* ===== 1803fbcd0 FUN_1803fbcd0 ===== */

void FUN_1803fbcd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  FUN_1803d6150();
  FUN_1803d6150(param_1 + 0x10);
  FUN_1803d6150(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar2 = DAT_180ca0a50;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
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
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar2 = DAT_180ca0a50;
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
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
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  FUN_1803d6150(param_1 + 0xc0);
  FUN_1803d6150(param_1 + 0x50);
  FUN_1804014e0(param_1 + 0x88);
  return;
}



/* ===== 1803fbe60 FUN_1803fbe60 ===== */

void FUN_1803fbe60(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  iVar9 = param_1[1];
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x1a);
  iVar2 = param_1[0x20];
  uVar7 = *(undefined8 *)(param_1 + 0x1c);
  uVar8 = *(undefined8 *)(param_1 + 0x1e);
  iVar3 = param_1[4];
  if (*param_1 == iVar9) {
    iVar11 = *param_1 + 1;
    if (iVar9 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar9 / 2 + iVar9;
    }
    if (iVar11 < iVar9) {
      iVar11 = iVar9;
    }
    FUN_1803f71d0(param_1,iVar11);
  }
  lVar10 = (longlong)*param_1;
  lVar4 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x48);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar10 * 0x48);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar10 * 0x48);
  *puVar1 = CONCAT44(iVar3,iVar2);
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar10 * 0x48);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x40 + lVar10 * 0x48) = 0;
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 1803fbf20 FUN_1803fbf20 ===== */

void FUN_1803fbf20(int *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  
  if (((param_2 == -8) && (*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc60), lVar2 != 0)
     ) {
    param_2 = lVar2;
  }
  lVar2 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
  if (*(int *)(*(longlong *)(param_1 + 2) + 0x28 + ((longlong)*param_1 + -1) * 0x48) != 0) {
    FUN_1803fbe60(param_1);
    lVar2 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
  }
  *(longlong *)(lVar2 + 0x30) = param_2;
  if (param_4 == 0) {
    *(undefined8 *)(lVar2 + 0x38) = param_3;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(undefined4 *)(lVar2 + 0x44) = 0xffffffff;
  }
  else {
    piVar1 = param_1 + 0x30;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(int *)(lVar2 + 0x40) = (int)param_4;
    *(int *)(lVar2 + 0x44) = *piVar1;
    FUN_18000d5e0(piVar1,*piVar1 + (int)param_4);
    FUN_180540530((longlong)*(int *)(lVar2 + 0x44) + *(longlong *)(param_1 + 0x32),param_3,param_4);
  }
  FUN_1803fbe60(param_1);
  return;
}



/* ===== 1803fbff0 FUN_1803fbff0 ===== */

void FUN_1803fbff0(int *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 2);
  iVar2 = *param_1;
  lVar6 = (longlong)iVar2;
  lVar1 = lVar3 + lVar6 * 0x48;
  if (*(int *)(lVar3 + -0x20 + lVar6 * 0x48) == 0) {
    if (1 < iVar2) {
      iVar5 = memcmp(param_1 + 0x18,(void *)(lVar3 + -0x90 + lVar6 * 0x48),0x24);
      if (((iVar5 == 0) &&
          (*(int *)(lVar3 + -0x6c + lVar6 * 0x48) + *(int *)(lVar3 + -0x68 + lVar6 * 0x48) ==
           *(int *)(lVar3 + -0x24 + lVar6 * 0x48))) &&
         (*(longlong *)(lVar3 + -0x60 + lVar6 * 0x48) == 0)) {
        *param_1 = iVar2 + -1;
        return;
      }
    }
  }
  else if ((*(longlong *)(lVar1 + -0x48) != *(longlong *)(param_1 + 0x18)) ||
          (*(longlong *)(lVar1 + -0x40) != *(longlong *)(param_1 + 0x1a))) {
    FUN_1803fbe60();
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(lVar1 + -0x48) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + -0x40) = uVar4;
  return;
}



/* ===== 1803fc0a0 FUN_1803fc0a0 ===== */

void FUN_1803fc0a0(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *param_1;
  lVar6 = (longlong)iVar2;
  lVar3 = *(longlong *)(param_1 + 2);
  iVar5 = *(int *)(lVar3 + -0x20 + lVar6 * 0x48);
  if ((iVar5 != 0) &&
     ((*(longlong *)(lVar3 + -0x30 + lVar6 * 0x48) != *(longlong *)(param_1 + 0x1e) ||
      (*(longlong *)(lVar3 + -0x38 + lVar6 * 0x48) != *(longlong *)(param_1 + 0x1c))))) {
    FUN_1803fbe60(param_1);
    return;
  }
  if (*(longlong *)(lVar3 + -0x18 + lVar6 * 0x48) == 0) {
    if ((iVar5 == 0) && (1 < iVar2)) {
      iVar5 = memcmp(param_1 + 0x18,(void *)(lVar3 + -0x90 + lVar6 * 0x48),0x24);
      if ((iVar5 == 0) &&
         ((*(int *)(lVar3 + -0x6c + lVar6 * 0x48) + *(int *)(lVar3 + -0x68 + lVar6 * 0x48) ==
           *(int *)(lVar3 + -0x24 + lVar6 * 0x48) &&
          (*(longlong *)(lVar3 + -0x60 + lVar6 * 0x48) == 0)))) {
        *param_1 = iVar2 + -1;
        return;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1e);
    puVar1 = (undefined8 *)(lVar3 + -0x38 + lVar6 * 0x48);
    *puVar1 = *(undefined8 *)(param_1 + 0x1c);
    puVar1[1] = uVar4;
  }
  return;
}



/* ===== 1803fc160 FUN_1803fc160 ===== */

uint FUN_1803fc160(longlong param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  
  param_2 = param_2 * *(float *)(param_1 + 0xd4);
  if ((uint)(int)(param_2 + DAT_1808ac33c) < 0x40) {
    return (uint)*(byte *)(*(longlong *)(param_1 + 0x38) + 500 +
                          (longlong)(int)(param_2 + DAT_1808ac33c));
  }
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x2c);
  if (param_2 <= fVar2) {
    fVar2 = param_2;
  }
  fVar2 = (float)FUN_18053eb30(DAT_1808ac34c - fVar2 / param_2);
  fVar2 = (float)FUN_18053ef70(DAT_1808ac680 / fVar2);
  uVar1 = (((int)fVar2 + 1) / 2) * 2;
  if ((int)uVar1 < 4) {
    return 4;
  }
  if (0x200 < (int)uVar1) {
    uVar1 = 0x200;
  }
  return uVar1;
}



/* ===== 1803fc200 FUN_1803fc200 ===== */

void FUN_1803fc200(longlong param_1,float *param_2,float *param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = *param_3;
  fVar5 = param_3[1];
  fVar7 = param_2[1];
  fVar9 = *param_2;
  if (param_4 != '\0') {
    if (fVar9 < *(float *)(param_1 + 0x60)) {
      fVar9 = *(float *)(param_1 + 0x60);
    }
    if (fVar7 < *(float *)(param_1 + 100)) {
      fVar7 = *(float *)(param_1 + 100);
    }
    if (*(float *)(param_1 + 0x68) < fVar6) {
      fVar6 = *(float *)(param_1 + 0x68);
    }
    if (*(float *)(param_1 + 0x6c) < fVar5) {
      fVar5 = *(float *)(param_1 + 0x6c);
    }
  }
  iVar2 = *(int *)(param_1 + 0xa4);
  fVar8 = fVar9;
  if (fVar9 <= fVar6) {
    fVar8 = fVar6;
  }
  fVar6 = fVar7;
  if (fVar7 <= fVar5) {
    fVar6 = fVar5;
  }
  if (*(int *)(param_1 + 0xa0) == iVar2) {
    iVar4 = *(int *)(param_1 + 0xa0) + 1;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_1803f7030(param_1 + 0xa0,iVar4);
  }
  lVar3 = (longlong)*(int *)(param_1 + 0xa0);
  lVar1 = *(longlong *)(param_1 + 0xa8);
  *(float *)(lVar1 + lVar3 * 0x10) = fVar9;
  *(float *)(lVar1 + 4 + lVar3 * 0x10) = fVar7;
  *(float *)(lVar1 + 8 + lVar3 * 0x10) = fVar8;
  *(float *)(lVar1 + 0xc + lVar3 * 0x10) = fVar6;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(float *)(param_1 + 0x60) = fVar9;
  *(float *)(param_1 + 100) = fVar7;
  *(float *)(param_1 + 0x68) = fVar8;
  *(float *)(param_1 + 0x6c) = fVar6;
  FUN_1803fbff0(param_1);
  return;
}



/* ===== 1803fc340 FUN_1803fc340 ===== */

void FUN_1803fc340(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar3 = *(int *)(param_1 + 0xb0);
  iVar1 = iVar3 + -1;
  *(int *)(param_1 + 0xb0) = iVar1;
  if (iVar1 == 0) {
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xb8) + (longlong)(iVar3 + -2) * 0x10);
    local_18 = *puVar2;
    uStack_10 = puVar2[1];
  }
  *(undefined4 *)(param_1 + 0x70) = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0x74) = local_18._4_4_;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)uStack_10;
  *(undefined4 *)(param_1 + 0x7c) = uStack_10._4_4_;
  FUN_1803fc0a0(param_1);
  return;
}



/* ===== 1803fc3a0 FUN_1803fc3a0 ===== */

void FUN_1803fc3a0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((0xffff < (uint)(param_1[0xd] + param_3)) && ((*(byte *)(param_1 + 0xc) & 8) != 0)) {
    param_1[0x20] = param_1[8];
    param_1[0xd] = 0;
    if (*(int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48) == 0) {
      *(int *)(*(longlong *)(param_1 + 2) + -0x28 + (longlong)*param_1 * 0x48) = param_1[8];
    }
    else {
      FUN_1803fbe60(param_1);
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
  *piVar1 = *piVar1 + param_2;
  iVar2 = param_1[8];
  iVar4 = param_1[9];
  param_3 = iVar2 + param_3;
  iVar5 = 8;
  if (iVar4 < param_3) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar3 = param_3;
    if (param_3 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_1803f6760(param_1 + 8,iVar3);
  }
  param_1[8] = param_3;
  iVar4 = param_1[4];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 10) + (longlong)iVar2 * 0x14;
  param_2 = iVar4 + param_2;
  iVar2 = param_1[5];
  if (iVar2 < param_2) {
    if (iVar2 != 0) {
      iVar5 = iVar2 + iVar2 / 2;
    }
    iVar2 = param_2;
    if (param_2 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_1803f6b20(param_1 + 4,iVar2);
  }
  param_1[4] = param_2;
  *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 6) + (longlong)iVar4 * 2;
  return;
}



/* ===== 1803fc4a0 FUN_1803fc4a0 ===== */

void FUN_1803fc4a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  longlong lVar10;
  
  sVar9 = *(short *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)param_3;
  uVar3 = *(undefined4 *)((longlong)param_4 + 4);
  uVar4 = *(undefined4 *)param_4;
  uVar5 = *(undefined4 *)((longlong)param_5 + 4);
  uVar6 = *(undefined4 *)param_5;
  uVar7 = *(undefined4 *)param_2;
  uVar8 = *(undefined4 *)((longlong)param_3 + 4);
  **(short **)(param_1 + 0x48) = sVar9;
  *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar9 + 1;
  *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar9 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar9;
  *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar9 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar9 + 3;
  **(undefined8 **)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = *param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_6;
  lVar10 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar10 + 0x14) = uVar2;
  *(undefined4 *)(lVar10 + 0x18) = uVar1;
  lVar10 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar10 + 0x1c) = uVar6;
  *(undefined4 *)(lVar10 + 0x20) = uVar3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_6;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = *param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30) = *param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_6;
  lVar10 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar10 + 0x3c) = uVar7;
  *(undefined4 *)(lVar10 + 0x40) = uVar8;
  lVar10 = *(longlong *)(param_1 + 0x40);
  *(undefined4 *)(lVar10 + 0x44) = uVar4;
  *(undefined4 *)(lVar10 + 0x48) = uVar5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_6;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
  return;
}



/* ===== 1803fc600 FUN_1803fc600 ===== */

void FUN_1803fc600(longlong param_1,undefined8 *param_2,uint param_3,uint param_4,float param_5,
                  uint param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  short sVar21;
  uint uVar22;
  short sVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint local_d4;
  uint local_d0;
  uint local_c8;
  
  fVar28 = DAT_1808ac34c;
  lVar26 = (longlong)(int)param_3;
  if ((int)param_3 < 2) {
    return;
  }
  if ((param_4 & 0xff000000) == 0) {
    return;
  }
  local_c8 = param_6 & 0x200;
  uVar24 = param_3;
  if ((param_6 & 0x200) == 0) {
    uVar24 = param_3 - 1;
  }
  fVar41 = *(float *)(param_1 + 0xd0);
  bVar7 = param_5 <= fVar41;
  if ((param_6 & 0x8000000f) != 0) {
    FUN_1803ebc00("Incorrect parameter. Did you swap \'thickness\' and \'flags\'?");
    return;
  }
  uVar2 = **(undefined4 **)(param_1 + 0x38);
  uVar3 = (*(undefined4 **)(param_1 + 0x38))[1];
  if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
    FUN_1803fc3a0(param_1,uVar24 * 6,uVar24 * 4);
    uVar20 = 0;
    if ((int)uVar24 < 1) {
      return;
    }
    param_5 = param_5 * DAT_1808ac1f4;
    do {
      uVar19 = (ulonglong)uVar20;
      uVar20 = uVar20 + 1;
      uVar22 = 0;
      if (uVar20 != param_3) {
        uVar22 = uVar20;
      }
      lVar26 = (longlong)(int)uVar22;
      fVar28 = *(float *)(param_2 + lVar26) - *(float *)(param_2 + uVar19);
      fVar34 = *(float *)((longlong)param_2 + lVar26 * 8 + 4) -
               *(float *)((longlong)param_2 + uVar19 * 8 + 4);
      fVar41 = fVar34 * fVar34 + fVar28 * fVar28;
      if (0.0 < fVar41) {
        auVar29 = rsqrtss(ZEXT416((uint)fVar41),ZEXT416((uint)fVar41));
        fVar34 = auVar29._0_4_ * fVar34;
        fVar28 = auVar29._0_4_ * fVar28;
      }
      fVar34 = fVar34 * param_5;
      fVar28 = fVar28 * param_5;
      **(float **)(param_1 + 0x40) = *(float *)(param_2 + uVar19) + fVar34;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) =
           *(float *)((longlong)param_2 + uVar19 * 8 + 4) - fVar28;
      lVar18 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar18 + 8) = uVar2;
      *(undefined4 *)(lVar18 + 0xc) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar34 + *(float *)(param_2 + lVar26);
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) =
           *(float *)((longlong)param_2 + lVar26 * 8 + 4) - fVar28;
      lVar18 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar18 + 0x1c) = uVar2;
      *(undefined4 *)(lVar18 + 0x20) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x28) = *(float *)(param_2 + lVar26) - fVar34;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x2c) =
           fVar28 + *(float *)((longlong)param_2 + lVar26 * 8 + 4);
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 0x30) = uVar2;
      *(undefined4 *)(lVar26 + 0x34) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x3c) = *(float *)(param_2 + uVar19) - fVar34;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x40) =
           fVar28 + *(float *)((longlong)param_2 + uVar19 * 8 + 4);
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 0x44) = uVar2;
      *(undefined4 *)(lVar26 + 0x48) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
      **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = *(short *)(param_1 + 0x34) + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = *(short *)(param_1 + 0x34) + 2;
      *(undefined2 *)(*(longlong *)(param_1 + 0x48) + 6) = *(undefined2 *)(param_1 + 0x34);
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = *(short *)(param_1 + 0x34) + 2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = *(short *)(param_1 + 0x34) + 3;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
    } while ((int)uVar20 < (int)uVar24);
    return;
  }
  uVar20 = param_4 & 0xffffff;
  if (param_5 <= DAT_1808ac34c) {
    param_5 = DAT_1808ac34c;
  }
  iVar15 = (int)param_5;
  if (((((*(uint *)(param_1 + 0x30) & 2) == 0) || (0x1f < iVar15)) ||
      (DAT_1808abf94 < param_5 - (float)iVar15)) || (fVar41 != DAT_1808ac34c)) {
    if (bVar7) {
      local_d0 = param_3 * 3;
      local_d4 = 3;
      bVar10 = false;
      iVar16 = uVar24 * 0xc;
      goto LAB_1803fc7b0;
    }
    local_d0 = param_3 * 4;
    FUN_1803fc3a0(param_1,uVar24 * 0x12,local_d0);
    local_d4 = 3;
    bVar10 = false;
    iVar16 = 5;
  }
  else {
    local_d0 = param_3 * 2;
    local_d4 = 2;
    iVar16 = uVar24 * 6;
    bVar10 = true;
LAB_1803fc7b0:
    FUN_1803fc3a0(param_1,iVar16,local_d0);
    iVar16 = 3;
  }
  FUN_18040c430(*(longlong *)(param_1 + 0x38) + 0x48,iVar16 * param_3);
  uVar25 = DAT_1808adec0;
  uVar19 = 0;
  uVar22 = 0;
  puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 0x50);
  puVar1 = puVar6 + lVar26;
  if (3 < (int)uVar24) {
    do {
      lVar18 = (longlong)(int)uVar22;
      uVar11 = 0;
      if (uVar22 + 1 != param_3) {
        uVar11 = uVar22 + 1;
      }
      fVar34 = *(float *)(param_2 + (int)uVar11) - *(float *)(param_2 + lVar18);
      fVar36 = *(float *)((longlong)param_2 + (longlong)(int)uVar11 * 8 + 4) -
               *(float *)((longlong)param_2 + lVar18 * 8 + 4);
      auVar29._4_12_ = ZEXT812(0);
      auVar29._0_4_ = fVar36 * fVar36 + fVar34 * fVar34;
      if (0.0 < auVar29._0_4_) {
        auVar29 = rsqrtss(auVar29,auVar29);
        fVar36 = auVar29._0_4_ * fVar36;
        fVar34 = auVar29._0_4_ * fVar34;
      }
      *(float *)(puVar6 + lVar18) = fVar36;
      *(uint *)((longlong)puVar6 + lVar18 * 8 + 4) = (uint)fVar34 ^ uVar25;
      uVar11 = 0;
      if (uVar22 + 2 != param_3) {
        uVar11 = uVar22 + 2;
      }
      fVar34 = *(float *)(param_2 + (int)uVar11) - *(float *)(param_2 + lVar18 + 1);
      fVar36 = *(float *)((longlong)param_2 + (longlong)(int)uVar11 * 8 + 4) -
               *(float *)((longlong)param_2 + lVar18 * 8 + 0xc);
      auVar30._4_12_ = ZEXT812(0);
      auVar30._0_4_ = fVar36 * fVar36 + fVar34 * fVar34;
      if (0.0 < auVar30._0_4_) {
        auVar29 = rsqrtss(auVar30,auVar30);
        fVar36 = auVar29._0_4_ * fVar36;
        fVar34 = auVar29._0_4_ * fVar34;
      }
      *(float *)(puVar6 + lVar18 + 1) = fVar36;
      *(uint *)((longlong)puVar6 + lVar18 * 8 + 0xc) = (uint)fVar34 ^ uVar25;
      uVar11 = 0;
      if (uVar22 + 3 != param_3) {
        uVar11 = uVar22 + 3;
      }
      fVar34 = *(float *)(param_2 + (int)uVar11) - *(float *)(param_2 + lVar18 + 2);
      fVar36 = *(float *)((longlong)param_2 + (longlong)(int)uVar11 * 8 + 4) -
               *(float *)((longlong)param_2 + lVar18 * 8 + 0x14);
      auVar31._4_12_ = ZEXT812(0);
      auVar31._0_4_ = fVar36 * fVar36 + fVar34 * fVar34;
      if (0.0 < auVar31._0_4_) {
        auVar29 = rsqrtss(auVar31,auVar31);
        fVar36 = auVar29._0_4_ * fVar36;
        fVar34 = auVar29._0_4_ * fVar34;
      }
      *(float *)(puVar6 + lVar18 + 2) = fVar36;
      uVar22 = uVar22 + 4;
      *(uint *)((longlong)puVar6 + lVar18 * 8 + 0x14) = (uint)fVar34 ^ uVar25;
      uVar11 = 0;
      if (uVar22 != param_3) {
        uVar11 = uVar22;
      }
      fVar34 = *(float *)(param_2 + (int)uVar11) - *(float *)(param_2 + lVar18 + 3);
      fVar36 = *(float *)((longlong)param_2 + (longlong)(int)uVar11 * 8 + 4) -
               *(float *)((longlong)param_2 + lVar18 * 8 + 0x1c);
      auVar32._4_12_ = ZEXT812(0);
      auVar32._0_4_ = fVar36 * fVar36 + fVar34 * fVar34;
      if (0.0 < auVar32._0_4_) {
        auVar29 = rsqrtss(auVar32,auVar32);
        fVar36 = auVar29._0_4_ * fVar36;
        fVar34 = auVar29._0_4_ * fVar34;
      }
      *(float *)(puVar6 + lVar18 + 3) = fVar36;
      *(uint *)((longlong)puVar6 + lVar18 * 8 + 0x1c) = (uint)fVar34 ^ uVar25;
    } while ((int)uVar22 < (int)(uVar24 - 3));
  }
  while ((int)uVar22 < (int)uVar24) {
    uVar11 = uVar22 + 1;
    uVar12 = 0;
    if (uVar11 != param_3) {
      uVar12 = uVar11;
    }
    lVar18 = (longlong)(int)uVar22;
    fVar34 = *(float *)(param_2 + (int)uVar12) - *(float *)(param_2 + lVar18);
    fVar36 = *(float *)((longlong)param_2 + (longlong)(int)uVar12 * 8 + 4) -
             *(float *)((longlong)param_2 + lVar18 * 8 + 4);
    auVar33._4_12_ = ZEXT812(0);
    auVar33._0_4_ = fVar36 * fVar36 + fVar34 * fVar34;
    if (0.0 < auVar33._0_4_) {
      auVar29 = rsqrtss(auVar33,auVar33);
      fVar36 = auVar29._0_4_ * fVar36;
      fVar34 = auVar29._0_4_ * fVar34;
    }
    *(float *)(puVar6 + lVar18) = fVar36;
    *(uint *)((longlong)puVar6 + lVar18 * 8 + 4) = (uint)fVar34 ^ uVar25;
    uVar22 = uVar11;
  }
  if (local_c8 == 0) {
    puVar6[lVar26 + -1] = puVar6[lVar26 + -2];
  }
  fVar34 = DAT_1808ac1f4;
  if (bVar10) {
    fVar41 = param_5 * DAT_1808ac1f4 + fVar28;
  }
  else if (!bVar7) {
    fVar36 = (param_5 - fVar41) * DAT_1808ac1f4;
    if (local_c8 == 0) {
      fVar40 = fVar36 + fVar41;
      lVar18 = (int)(param_3 * 4 + -4) + lVar26;
      *puVar1 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                         (float)((ulonglong)*puVar6 >> 0x20) * fVar40,
                         (float)*param_2 + (float)*puVar6 * fVar40);
      puVar1[1] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                           (float)((ulonglong)*puVar6 >> 0x20) * fVar36,
                           (float)*param_2 + (float)*puVar6 * fVar36);
      puVar1[2] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                           (float)((ulonglong)*puVar6 >> 0x20) * fVar36,
                           (float)*param_2 - (float)*puVar6 * fVar36);
      puVar1[3] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                           (float)((ulonglong)*puVar6 >> 0x20) * fVar40,
                           (float)*param_2 - (float)*puVar6 * fVar40);
      puVar6[lVar18] =
           CONCAT44((float)((ulonglong)param_2[lVar26 + -1] >> 0x20) +
                    (float)((ulonglong)puVar6[lVar26 + -1] >> 0x20) * fVar40,
                    (float)param_2[lVar26 + -1] + (float)puVar6[lVar26 + -1] * fVar40);
      puVar6[lVar18 + 1] =
           CONCAT44((float)((ulonglong)param_2[lVar26 + -1] >> 0x20) +
                    (float)((ulonglong)puVar6[lVar26 + -1] >> 0x20) * fVar36,
                    (float)param_2[lVar26 + -1] + (float)puVar6[lVar26 + -1] * fVar36);
      puVar6[lVar18 + 2] =
           CONCAT44((float)((ulonglong)param_2[lVar26 + -1] >> 0x20) -
                    (float)((ulonglong)puVar6[lVar26 + -1] >> 0x20) * fVar36,
                    (float)param_2[lVar26 + -1] - (float)puVar6[lVar26 + -1] * fVar36);
      puVar6[lVar18 + 3] =
           CONCAT44((float)((ulonglong)param_2[lVar26 + -1] >> 0x20) -
                    (float)((ulonglong)puVar6[lVar26 + -1] >> 0x20) * fVar40,
                    (float)param_2[lVar26 + -1] - (float)puVar6[lVar26 + -1] * fVar40);
    }
    fVar39 = DAT_1808acb08;
    fVar40 = DAT_1808abf8c;
    uVar13 = 0;
    local_d4 = 0;
    if (0 < (int)uVar24) {
      uVar22 = 1;
      iVar15 = *(int *)(param_1 + 0x34);
      do {
        if (uVar22 == param_3) {
          iVar16 = *(int *)(param_1 + 0x34);
          uVar25 = 0;
        }
        else {
          iVar16 = iVar15 + 4;
          uVar25 = uVar22;
        }
        lVar26 = (longlong)(int)uVar25;
        fVar27 = (*(float *)(puVar6 + lVar26) + *(float *)(puVar6 + uVar13)) * fVar34;
        fVar35 = (*(float *)((longlong)puVar6 + lVar26 * 8 + 4) +
                 *(float *)((longlong)puVar6 + uVar13 * 8 + 4)) * fVar34;
        fVar37 = fVar35 * fVar35 + fVar27 * fVar27;
        if (fVar40 < fVar37) {
          fVar37 = fVar28 / fVar37;
          fVar38 = fVar39;
          if (fVar37 <= fVar39) {
            fVar38 = fVar37;
          }
          fVar35 = fVar38 * fVar35;
          fVar27 = fVar38 * fVar27;
        }
        lVar18 = (longlong)(int)(uVar25 * 4);
        sVar8 = (short)iVar16;
        sVar23 = sVar8 + 1;
        fVar37 = (fVar36 + fVar41) * fVar27;
        sVar21 = sVar8 + 2;
        fVar38 = (fVar36 + fVar41) * fVar35;
        *(float *)(puVar1 + lVar18) = fVar37 + *(float *)(param_2 + lVar26);
        *(float *)((longlong)puVar1 + lVar18 * 8 + 4) =
             fVar38 + *(float *)((longlong)param_2 + lVar26 * 8 + 4);
        *(float *)(puVar1 + lVar18 + 1) = fVar27 * fVar36 + *(float *)(param_2 + lVar26);
        *(float *)((longlong)puVar1 + lVar18 * 8 + 0xc) =
             fVar35 * fVar36 + *(float *)((longlong)param_2 + lVar26 * 8 + 4);
        *(float *)(puVar1 + lVar18 + 2) = *(float *)(param_2 + lVar26) - fVar27 * fVar36;
        *(float *)((longlong)puVar1 + lVar18 * 8 + 0x14) =
             *(float *)((longlong)param_2 + lVar26 * 8 + 4) - fVar35 * fVar36;
        *(float *)(puVar1 + lVar18 + 3) = *(float *)(param_2 + lVar26) - fVar37;
        sVar9 = (short)iVar15;
        sVar14 = sVar9 + 2;
        *(float *)((longlong)puVar1 + lVar18 * 8 + 0x1c) =
             *(float *)((longlong)param_2 + lVar26 * 8 + 4) - fVar38;
        **(short **)(param_1 + 0x48) = sVar23;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar9 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar23;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0xc) = sVar23;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0xe) = sVar9 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x10) = sVar9;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x12) = sVar9;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x14) = sVar8;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x16) = sVar23;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x18) = sVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x1a) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x1c) = sVar9 + 3;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x1e) = sVar9 + 3;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x20) = sVar8 + 3;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x22) = sVar21;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x24;
        local_d4 = local_d4 + 1;
        uVar13 = (ulonglong)local_d4;
        uVar22 = uVar22 + 1;
        iVar15 = iVar16;
      } while ((int)local_d4 < (int)uVar24);
    }
    do {
      iVar15 = (int)uVar19;
      uVar24 = iVar15 + 1;
      uVar19 = (ulonglong)uVar24;
      lVar18 = (longlong)(iVar15 * 4);
      **(undefined8 **)(param_1 + 0x40) = puVar1[lVar18];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 8) = uVar2;
      *(undefined4 *)(lVar26 + 0xc) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar20;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) = puVar1[lVar18 + 1];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 0x1c) = uVar2;
      *(undefined4 *)(lVar26 + 0x20) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = puVar1[lVar18 + 2];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 0x30) = uVar2;
      *(undefined4 *)(lVar26 + 0x34) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x3c) = puVar1[lVar18 + 3];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 0x44) = uVar2;
      *(undefined4 *)(lVar26 + 0x48) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x4c) = uVar20;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
    } while ((int)uVar24 < (int)param_3);
    goto LAB_1803fd1ff;
  }
  if (local_c8 == 0) {
    lVar18 = (int)(param_3 * 2) + lVar26;
    *puVar1 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) +
                       (float)((ulonglong)*puVar6 >> 0x20) * fVar41,
                       (float)*param_2 + (float)*puVar6 * fVar41);
    puVar1[1] = CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                         (float)((ulonglong)*puVar6 >> 0x20) * fVar41,
                         (float)*param_2 - (float)*puVar6 * fVar41);
    puVar6[lVar18 + -2] =
         CONCAT44((float)((ulonglong)param_2[lVar26 + -1] >> 0x20) +
                  (float)((ulonglong)puVar6[lVar26 + -1] >> 0x20) * fVar41,
                  (float)param_2[lVar26 + -1] + (float)puVar6[lVar26 + -1] * fVar41);
    puVar6[lVar18 + -1] =
         CONCAT44((float)((ulonglong)param_2[lVar26 + -1] >> 0x20) -
                  (float)((ulonglong)puVar6[lVar26 + -1] >> 0x20) * fVar41,
                  (float)param_2[lVar26 + -1] - (float)puVar6[lVar26 + -1] * fVar41);
  }
  fVar40 = DAT_1808acb08;
  fVar36 = DAT_1808abf8c;
  if (0 < (int)uVar24) {
    uVar22 = 1;
    uVar13 = 0;
    iVar16 = *(int *)(param_1 + 0x34);
    do {
      if (uVar22 == param_3) {
        iVar17 = *(int *)(param_1 + 0x34);
        uVar25 = 0;
      }
      else {
        iVar17 = local_d4 + iVar16;
        uVar25 = uVar22;
      }
      lVar26 = (longlong)(int)uVar25;
      fVar27 = (*(float *)(puVar6 + lVar26) + *(float *)(puVar6 + uVar13)) * fVar34;
      fVar39 = (*(float *)((longlong)puVar6 + lVar26 * 8 + 4) +
               *(float *)((longlong)puVar6 + uVar13 * 8 + 4)) * fVar34;
      fVar37 = fVar39 * fVar39 + fVar27 * fVar27;
      if (fVar36 < fVar37) {
        fVar37 = fVar28 / fVar37;
        fVar35 = fVar40;
        if (fVar37 <= fVar40) {
          fVar35 = fVar37;
        }
        fVar39 = fVar35 * fVar39;
        fVar27 = fVar35 * fVar27;
      }
      sVar9 = (short)iVar17;
      sVar21 = sVar9 + 1;
      lVar18 = (longlong)(int)(uVar25 * 2);
      *(float *)(puVar1 + lVar18) = fVar27 * fVar41 + *(float *)(param_2 + lVar26);
      *(float *)((longlong)puVar1 + lVar18 * 8 + 4) =
           fVar39 * fVar41 + *(float *)((longlong)param_2 + lVar26 * 8 + 4);
      *(float *)(puVar1 + lVar18 + 1) = *(float *)(param_2 + lVar26) - fVar27 * fVar41;
      sVar8 = (short)iVar16;
      sVar14 = sVar8 + 1;
      *(float *)((longlong)puVar1 + lVar18 * 8 + 0xc) =
           *(float *)((longlong)param_2 + lVar26 * 8 + 4) - fVar39 * fVar41;
      **(short **)(param_1 + 0x48) = sVar9;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar8;
      if (bVar10) {
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar9;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      }
      else {
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar8 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar8 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar9 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar9;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0xc) = sVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0xe) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x10) = sVar8;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x12) = sVar8;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x14) = sVar9;
        *(short *)(*(longlong *)(param_1 + 0x48) + 0x16) = sVar21;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0x18;
      }
      uVar25 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar25;
      uVar22 = uVar22 + 1;
      iVar16 = iVar17;
    } while ((int)uVar25 < (int)uVar24);
  }
  if (bVar10) {
    lVar18 = (longlong)iVar15;
    lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar2 = *(undefined4 *)(lVar26 + lVar18 * 0x10);
    uVar3 = *(undefined4 *)(lVar26 + 4 + lVar18 * 0x10);
    uVar4 = *(undefined4 *)(lVar26 + 8 + lVar18 * 0x10);
    uVar5 = *(undefined4 *)(lVar26 + 0xc + lVar18 * 0x10);
    do {
      iVar15 = (int)uVar19;
      uVar24 = iVar15 + 1;
      uVar19 = (ulonglong)uVar24;
      lVar18 = (longlong)(iVar15 * 2);
      **(undefined8 **)(param_1 + 0x40) = puVar1[lVar18];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 8) = uVar2;
      *(undefined4 *)(lVar26 + 0xc) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) = puVar1[lVar18 + 1];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 0x1c) = uVar4;
      *(undefined4 *)(lVar26 + 0x20) = uVar5;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
    } while ((int)uVar24 < (int)param_3);
  }
  else {
    do {
      **(undefined8 **)(param_1 + 0x40) = param_2[uVar19];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 8) = uVar2;
      *(undefined4 *)(lVar26 + 0xc) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      lVar18 = (longlong)((int)uVar19 * 2);
      uVar24 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar24;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14) = puVar1[lVar18];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 0x1c) = uVar2;
      *(undefined4 *)(lVar26 + 0x20) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar20;
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = puVar1[lVar18 + 1];
      lVar26 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar26 + 0x30) = uVar2;
      *(undefined4 *)(lVar26 + 0x34) = uVar3;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = uVar20;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x3c;
    } while ((int)uVar24 < (int)param_3);
  }
LAB_1803fd1ff:
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (local_d0 & 0xffff);
  return;
}



/* ===== 1803fd460 FUN_1803fd460 ===== */

void FUN_1803fd460(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  short sVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  short sVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if ((2 < (int)param_3) && ((param_4 & 0xff000000) != 0)) {
    uVar1 = **(undefined4 **)(param_1 + 0x38);
    uVar2 = (*(undefined4 **)(param_1 + 0x38))[1];
    if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
      FUN_1803fc3a0(param_1,(param_3 - 2) * 3);
      uVar17 = 0;
      do {
        lVar4 = uVar17 * 8;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + lVar4);
        lVar4 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar4 + 8) = uVar1;
        *(undefined4 *)(lVar4 + 0xc) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
      } while ((int)uVar16 < (int)param_3);
      iVar14 = 2;
      do {
        **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
        sVar11 = (short)iVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar11 + -1 + *(short *)(param_1 + 0x34);
        iVar14 = iVar14 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar11 + *(short *)(param_1 + 0x34);
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
        uVar16 = param_3;
      } while (iVar14 < (int)param_3);
    }
    else {
      uVar16 = param_3 * 2;
      fVar28 = *(float *)(param_1 + 0xd0);
      FUN_1803fc3a0(param_1,param_3 * 9 + -6,uVar16);
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      iVar14 = 2;
      do {
        sVar11 = (short)iVar14;
        iVar14 = iVar14 + 1;
        sVar13 = (short)uVar3;
        sVar11 = sVar11 * 2 + sVar13;
        **(short **)(param_1 + 0x48) = sVar13;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar11 + -2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar11;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      } while (iVar14 < (int)param_3);
      FUN_18040c430(*(longlong *)(param_1 + 0x38) + 0x48,param_3);
      uVar7 = DAT_1808adec0;
      iVar19 = param_3 - 1;
      iVar10 = 0;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x50);
      iVar14 = iVar19;
      if ((int)param_3 < 4) goto LAB_1803fd702;
      do {
        lVar9 = (longlong)iVar10;
        lVar15 = (longlong)iVar14;
        fVar23 = *(float *)(param_2 + lVar9 * 8) - *(float *)(param_2 + lVar15 * 8);
        fVar25 = *(float *)(param_2 + 4 + lVar9 * 8) - *(float *)(param_2 + 4 + lVar15 * 8);
        fVar20 = fVar25 * fVar25 + fVar23 * fVar23;
        if (0.0 < fVar20) {
          auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          fVar25 = auVar22._0_4_ * fVar25;
          fVar23 = auVar22._0_4_ * fVar23;
        }
        *(float *)(lVar4 + lVar15 * 8) = fVar25;
        *(uint *)(lVar4 + 4 + lVar15 * 8) = (uint)fVar23 ^ uVar7;
        fVar23 = *(float *)(param_2 + 8 + lVar9 * 8) - *(float *)(param_2 + lVar9 * 8);
        fVar25 = *(float *)(param_2 + 0xc + lVar9 * 8) - *(float *)(param_2 + 4 + lVar9 * 8);
        fVar20 = fVar25 * fVar25 + fVar23 * fVar23;
        if (0.0 < fVar20) {
          auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          fVar25 = auVar22._0_4_ * fVar25;
          fVar23 = auVar22._0_4_ * fVar23;
        }
        *(float *)(lVar4 + lVar9 * 8) = fVar25;
        *(uint *)(lVar4 + 4 + lVar9 * 8) = (uint)fVar23 ^ uVar7;
        fVar23 = *(float *)(param_2 + 0x10 + lVar9 * 8) - *(float *)(param_2 + 8 + lVar9 * 8);
        fVar25 = *(float *)(param_2 + 0x14 + lVar9 * 8) - *(float *)(param_2 + 0xc + lVar9 * 8);
        fVar20 = fVar25 * fVar25 + fVar23 * fVar23;
        if (0.0 < fVar20) {
          auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          fVar25 = auVar22._0_4_ * fVar25;
          fVar23 = auVar22._0_4_ * fVar23;
        }
        *(float *)(lVar4 + 8 + lVar9 * 8) = fVar25;
        *(uint *)(lVar4 + 0xc + lVar9 * 8) = (uint)fVar23 ^ uVar7;
        fVar23 = *(float *)(param_2 + 0x18 + lVar9 * 8) - *(float *)(param_2 + 0x10 + lVar9 * 8);
        fVar25 = *(float *)(param_2 + 0x1c + lVar9 * 8) - *(float *)(param_2 + 0x14 + lVar9 * 8);
        fVar20 = fVar25 * fVar25 + fVar23 * fVar23;
        if (0.0 < fVar20) {
          auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          fVar25 = auVar22._0_4_ * fVar25;
          fVar23 = auVar22._0_4_ * fVar23;
        }
        iVar14 = iVar10 + 3;
        *(float *)(lVar4 + 0x10 + lVar9 * 8) = fVar25;
        iVar10 = iVar10 + 4;
        *(uint *)(lVar4 + 0x14 + lVar9 * 8) = (uint)fVar23 ^ uVar7;
        iVar8 = iVar10;
        fVar23 = DAT_1808abf8c;
        fVar20 = DAT_1808ac1f4;
        fVar25 = DAT_1808ac34c;
        fVar6 = DAT_1808acb08;
      } while (iVar10 < (int)(param_3 - 3));
      while( true ) {
        iVar10 = iVar8;
        DAT_1808abf8c = fVar23;
        DAT_1808ac1f4 = fVar20;
        DAT_1808ac34c = fVar25;
        DAT_1808acb08 = fVar6;
        if ((int)param_3 <= iVar10) break;
LAB_1803fd702:
        lVar9 = (longlong)iVar14;
        fVar23 = *(float *)(param_2 + (longlong)iVar10 * 8) - *(float *)(param_2 + lVar9 * 8);
        fVar25 = *(float *)(param_2 + 4 + (longlong)iVar10 * 8) -
                 *(float *)(param_2 + 4 + lVar9 * 8);
        fVar20 = fVar25 * fVar25 + fVar23 * fVar23;
        if (0.0 < fVar20) {
          auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          fVar25 = auVar22._0_4_ * fVar25;
          fVar23 = auVar22._0_4_ * fVar23;
        }
        *(float *)(lVar4 + lVar9 * 8) = fVar25;
        *(uint *)(lVar4 + 4 + lVar9 * 8) = (uint)fVar23 ^ uVar7;
        iVar8 = iVar10 + 1;
        iVar14 = iVar10;
        fVar23 = DAT_1808abf8c;
        fVar20 = DAT_1808ac1f4;
        fVar25 = DAT_1808ac34c;
        fVar6 = DAT_1808acb08;
      }
      fVar28 = fVar28 * fVar20;
      iVar14 = 0;
      do {
        lVar9 = (longlong)iVar14;
        fVar21 = (*(float *)(lVar4 + (longlong)iVar19 * 8) + *(float *)(lVar4 + lVar9 * 8)) * fVar20
        ;
        fVar24 = (*(float *)(lVar4 + 4 + lVar9 * 8) + *(float *)(lVar4 + 4 + (longlong)iVar19 * 8))
                 * fVar20;
        fVar26 = fVar24 * fVar24 + fVar21 * fVar21;
        if (fVar23 < fVar26) {
          fVar26 = fVar25 / fVar26;
          fVar27 = fVar6;
          if (fVar26 <= fVar6) {
            fVar27 = fVar26;
          }
          fVar24 = fVar27 * fVar24;
          fVar21 = fVar27 * fVar21;
        }
        sVar11 = (short)iVar19 * 2;
        sVar5 = (short)iVar14 * 2;
        fVar21 = fVar28 * fVar21;
        fVar24 = fVar28 * fVar24;
        sVar12 = sVar5 + sVar13;
        **(float **)(param_1 + 0x40) = *(float *)(param_2 + lVar9 * 8) - fVar21;
        *(float *)(*(longlong *)(param_1 + 0x40) + 4) = *(float *)(param_2 + 4 + lVar9 * 8) - fVar24
        ;
        lVar15 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar15 + 8) = uVar1;
        *(undefined4 *)(lVar15 + 0xc) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar21 + *(float *)(param_2 + lVar9 * 8);
        sVar18 = sVar11 + sVar13 + 1;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) =
             fVar24 + *(float *)(param_2 + 4 + lVar9 * 8);
        lVar9 = *(longlong *)(param_1 + 0x40);
        *(undefined4 *)(lVar9 + 0x1c) = uVar1;
        *(undefined4 *)(lVar9 + 0x20) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4 & 0xffffff;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
        **(short **)(param_1 + 0x48) = sVar12;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar11 + sVar13;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar18;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar18;
        iVar10 = iVar14 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar5 + sVar13 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar12;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        iVar19 = iVar14;
        iVar14 = iVar10;
      } while (iVar10 < (int)param_3);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (uVar16 & 0xffff);
  }
  return;
}



/* ===== 1803fd9d0 FUN_1803fd9d0 ===== */

void FUN_1803fd9d0(longlong param_1,float *param_2,float param_3,uint param_4,int param_5)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  float *pfVar11;
  
  if (param_3 < DAT_1808ac1f4) {
    FUN_18000b9c0(param_1 + 0x50);
    return;
  }
  iVar4 = FUN_1803fc160(DAT_1808ac1f4,param_3);
  iVar5 = (int)(0x30 / (longlong)iVar4);
  uVar8 = 0x30 / (longlong)iVar4 & 0xffffffff;
  if (iVar5 < 1) {
    uVar8 = 1;
    iVar6 = -(param_5 - param_4);
    if (iVar6 < 0) {
      iVar6 = param_5 - param_4;
    }
  }
  else {
    if (0xc < iVar5) {
      uVar8 = 0xc;
    }
    iVar5 = (int)uVar8;
    iVar4 = -(param_5 - param_4);
    if (iVar4 < 0) {
      iVar4 = param_5 - param_4;
    }
    iVar6 = iVar4;
    if (1 < iVar5) {
      iVar6 = iVar4 / iVar5;
      if (0 < iVar4 % iVar5) {
        bVar3 = true;
        iVar6 = iVar4 / iVar5 + 2;
        uVar9 = uVar8;
        if (0 < iVar4) {
          uVar9 = (ulonglong)(uint)(iVar5 - (iVar5 - iVar4 % iVar5) / 2);
        }
        goto LAB_1803fda63;
      }
    }
  }
  iVar6 = iVar6 + 1;
  bVar3 = false;
  uVar9 = uVar8;
LAB_1803fda63:
  iVar4 = *(int *)(param_1 + 0x50);
  iVar5 = *(int *)(param_1 + 0x54);
  iVar6 = iVar4 + iVar6;
  if (iVar5 < iVar6) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar2 = iVar6;
    if (iVar6 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_18000ba20(param_1 + 0x50,iVar2);
  }
  *(int *)(param_1 + 0x50) = iVar6;
  pfVar11 = (float *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 8);
  if (param_4 < 0x30) {
    uVar10 = param_4;
  }
  else {
    uVar7 = (int)param_4 % 0x30;
    uVar10 = uVar7 + 0x30;
    if (-1 < (int)uVar7) {
      uVar10 = uVar7;
    }
  }
  if (param_5 < (int)param_4) {
    do {
      uVar7 = uVar10 + 0x30;
      if (-1 < (int)uVar10) {
        uVar7 = uVar10;
      }
      param_4 = param_4 - (int)uVar9;
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (longlong)(int)uVar7 * 8);
      uVar10 = uVar7 - (int)uVar9;
      *pfVar11 = param_3 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 +
                                     (longlong)(int)uVar7 * 8) + *param_2;
      pfVar11[1] = fVar1 * param_3 + param_2[1];
      pfVar11 = pfVar11 + 2;
      uVar9 = uVar8;
    } while (param_5 <= (int)param_4);
  }
  else {
    do {
      uVar7 = uVar10 - 0x30;
      if ((int)uVar10 < 0x30) {
        uVar7 = uVar10;
      }
      param_4 = param_4 + (int)uVar9;
      uVar10 = uVar7 + (int)uVar9;
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (longlong)(int)uVar7 * 8);
      *pfVar11 = param_3 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 +
                                     (longlong)(int)uVar7 * 8) + *param_2;
      pfVar11[1] = fVar1 * param_3 + param_2[1];
      pfVar11 = pfVar11 + 2;
      uVar9 = uVar8;
    } while ((int)param_4 <= param_5);
  }
  if (bVar3) {
    param_5 = param_5 % 0x30;
    iVar4 = param_5 + 0x30;
    if (-1 < param_5) {
      iVar4 = param_5;
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (longlong)iVar4 * 8);
    *pfVar11 = param_3 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 + (longlong)iVar4 * 8) +
               *param_2;
    pfVar11[1] = fVar1 * param_3 + param_2[1];
  }
  return;
}



/* ===== 1803fdc60 FUN_1803fdc60 ===== */

void FUN_1803fdc60(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
                  int param_6)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (DAT_1808ac1f4 <= param_3) {
    FUN_18000ba20(param_1 + 0x50,param_6 + 1 + *(int *)(param_1 + 0x50));
    iVar5 = 0;
    if (-1 < param_6) {
      do {
        fVar8 = ((float)iVar5 / (float)param_6) * (param_5 - param_4) + param_4;
        fVar6 = (float)FUN_180517200(fVar8);
        fVar1 = *param_2;
        fVar7 = (float)FUN_180517790(fVar8);
        iVar3 = *(int *)(param_1 + 0x54);
        fVar8 = param_2[1];
        if (*(int *)(param_1 + 0x50) == iVar3) {
          iVar4 = *(int *)(param_1 + 0x50) + 1;
          if (iVar3 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar3 / 2 + iVar3;
          }
          if (iVar4 < iVar3) {
            iVar4 = iVar3;
          }
          FUN_18000ba20(param_1 + 0x50,iVar4);
        }
        iVar3 = *(int *)(param_1 + 0x50);
        iVar5 = iVar5 + 1;
        lVar2 = *(longlong *)(param_1 + 0x58);
        *(float *)(lVar2 + (longlong)iVar3 * 8) = fVar6 * param_3 + fVar1;
        *(float *)(lVar2 + 4 + (longlong)iVar3 * 8) = fVar7 * param_3 + fVar8;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      } while (iVar5 <= param_6);
    }
  }
  else {
    FUN_18000b9c0(param_1 + 0x50);
  }
  return;
}



/* ===== 1803fddf0 FUN_1803fddf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803fddf0(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
                  int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 in_R9;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88;
  float local_84;
  
  fVar7 = DAT_1808aca7c;
  if (param_3 < DAT_1808ac1f4) {
    FUN_18000b9c0(param_1 + 0x50);
  }
  else if (param_6 < 1) {
    if (*(float *)(*(longlong *)(param_1 + 0x38) + 0x1f0) < param_3) {
      iVar2 = FUN_1803fc160();
      fVar7 = (float)FUN_18053ef70(((float)iVar2 *
                                   (float)((uint)(param_5 - param_4) & _DAT_1808ade90)) /
                                   DAT_1808ac7d0);
      iVar2 = 1;
      if (0 < (int)fVar7) {
        iVar2 = (int)fVar7;
      }
      FUN_1803fdc60(param_1,param_2,param_3,param_4,param_5,iVar2);
    }
    else {
      fVar8 = (param_5 * DAT_1808aca7c) / DAT_1808ac7d0;
      fVar6 = (param_4 * DAT_1808aca7c) / DAT_1808ac7d0;
      if (param_4 <= param_5) {
        fVar6 = (float)FUN_18053ef70();
        iVar2 = (int)fVar6;
        if ((0.0 <= fVar8) || ((float)(int)fVar8 == fVar8)) {
          iVar3 = (int)fVar8;
        }
        else {
          iVar3 = (int)fVar8 + -1;
        }
        iVar4 = (int)(float)iVar3;
        iVar3 = iVar4 - iVar2;
      }
      else {
        iVar2 = (int)fVar6;
        if ((fVar6 < 0.0) && ((float)iVar2 != fVar6)) {
          iVar2 = iVar2 + -1;
        }
        iVar2 = (int)(float)iVar2;
        fVar6 = (float)FUN_18053ef70();
        iVar4 = (int)fVar6;
        iVar3 = iVar2 - iVar4;
      }
      fVar6 = DAT_1808abf94;
      iVar5 = 0;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      fVar8 = (float)((uint)(((float)iVar2 * DAT_1808ac680 + (float)iVar2 * DAT_1808ac680) / fVar7 -
                            param_4) & _DAT_1808ade90);
      fVar7 = (float)((uint)(param_5 -
                            ((float)iVar4 * DAT_1808ac680 + (float)iVar4 * DAT_1808ac680) / fVar7) &
                     _DAT_1808ade90);
      bVar1 = DAT_1808abf94 <= fVar7;
      FUN_18000ba20(param_1 + 0x50,
                    (uint)(DAT_1808abf94 <= fVar7) + (DAT_1808abf94 <= fVar8) + 1 +
                    *(int *)(param_1 + 0x50) + iVar5);
      if (fVar6 <= fVar8) {
        fVar7 = (float)FUN_180517200();
        local_88 = fVar7 * param_3 + *param_2;
        fVar7 = (float)FUN_180517790();
        local_84 = fVar7 * param_3 + param_2[1];
        FUN_18000b9c0(param_1 + 0x50,&local_88);
      }
      if (0 < iVar5) {
        FUN_1803fd9d0(param_1,param_2,param_3,iVar2,iVar4);
      }
      if (bVar1) {
        fVar7 = (float)FUN_180517200();
        local_88 = fVar7 * param_3 + *param_2;
        fVar7 = (float)FUN_180517790();
        local_84 = fVar7 * param_3 + param_2[1];
        FUN_18000b9c0(param_1 + 0x50,&local_88);
      }
    }
  }
  else {
    FUN_1803fdc60(param_1,param_2,param_3,in_R9,param_5,param_6);
  }
  return;
}



/* ===== 1803fe160 FUN_1803fe160 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803fe160(longlong param_1,float *param_2,float *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_68;
  
  fVar2 = DAT_1808ac1f4;
  uVar6 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar5 = (float)param_4;
  if (fVar5 < DAT_1808ac1f4) {
    uVar3 = param_5;
  }
  else {
    uVar3 = param_5 | 0xf0;
    if ((param_5 & 0x1f0) != 0) {
      uVar3 = param_5;
    }
    bVar1 = (byte)uVar3;
    fVar4 = DAT_1808ac1f4;
    if ((bVar1 & 0xc0) != 0xc0 && (bVar1 & 0x30) != 0x30) {
      fVar4 = DAT_1808ac34c;
    }
    fVar4 = (float)((uint)(*param_3 - *param_2) & _DAT_1808ade90) * fVar4 - DAT_1808ac34c;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    fVar4 = DAT_1808ac1f4;
    if ((bVar1 & 0xa0) != 0xa0 && (bVar1 & 0x50) != 0x50) {
      fVar4 = DAT_1808ac34c;
    }
    fVar4 = (float)((uint)(param_3[1] - param_2[1]) & _DAT_1808ade90) * fVar4 - DAT_1808ac34c;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
  }
  if ((fVar5 < DAT_1808ac1f4) || ((uVar3 & 0x1f0) == 0x100)) {
    param_1 = param_1 + 0x50;
    FUN_18000b9c0(param_1);
    local_68 = CONCAT44(param_2[1],*param_3);
    FUN_18000b9c0(param_1,&local_68);
    FUN_18000b9c0(param_1,param_3);
    local_68 = CONCAT44(param_3[1],*param_2);
    FUN_18000b9c0(param_1,&local_68);
  }
  else {
    if ((uVar3 & 0x10) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = fVar5;
    }
    if ((uVar3 & 0x20) == 0) {
      fVar7 = 0.0;
      uVar8 = 0;
    }
    else {
      fVar7 = fVar5;
      uVar8 = uVar6;
    }
    if ((char)uVar3 < '\0') {
      fVar9 = fVar5;
      uVar10 = uVar6;
    }
    else {
      fVar9 = 0.0;
      uVar10 = 0;
    }
    if ((uVar3 & 0x40) == 0) {
      fVar5 = 0.0;
      uVar6 = 0;
    }
    local_68 = CONCAT44((float)((ulonglong)*(undefined8 *)param_2 >> 0x20) + fVar4,
                        (float)*(undefined8 *)param_2 + fVar4);
    if (DAT_1808ac1f4 <= fVar4) {
      FUN_1803fd9d0(param_1,&local_68,fVar4,0x18,0x24);
    }
    else {
      FUN_18000b9c0(param_1 + 0x50);
    }
    local_68 = CONCAT44(fVar7 + param_2[1],*param_3 - fVar7);
    if (fVar2 <= fVar7) {
      FUN_1803fd9d0(param_1,&local_68,CONCAT44(uVar8,fVar7),0x24,0x30);
    }
    else {
      FUN_18000b9c0(param_1 + 0x50);
    }
    local_68 = CONCAT44((float)((ulonglong)*(undefined8 *)param_3 >> 0x20) - fVar9,
                        (float)*(undefined8 *)param_3 - fVar9);
    if (fVar2 <= fVar9) {
      FUN_1803fd9d0(param_1,&local_68,CONCAT44(uVar10,fVar9),0,0xc);
    }
    else {
      FUN_18000b9c0(param_1 + 0x50);
    }
    local_68 = CONCAT44(param_3[1] - fVar5,fVar5 + *param_2);
    if (fVar2 <= fVar5) {
      FUN_1803fd9d0(param_1,&local_68,CONCAT44(uVar6,fVar5),0xc,0x18);
    }
    else {
      FUN_18000b9c0(param_1 + 0x50);
    }
  }
  return;
}



/* ===== 1803fe480 FUN_1803fe480 ===== */

void FUN_1803fe480(longlong param_1,float *param_2,float *param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_7 & 0x8000000f) != 0) {
    FUN_1803ebc00("Incorrect parameter. Did you swap \'thickness\' and \'flags\'?");
    return;
  }
  if ((param_4 & 0xff000000) != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      pfVar2 = &local_10;
      local_10 = *param_3 - DAT_1808ac1e0;
      local_c = param_3[1] - DAT_1808ac1e0;
      pfVar1 = &local_18;
      fVar3 = DAT_1808ac1e0;
      local_18 = *param_2 + DAT_1808ac1f4;
      local_14 = param_2[1] + DAT_1808ac1f4;
    }
    else {
      pfVar2 = &local_18;
      pfVar1 = &local_10;
      fVar3 = DAT_1808ac1f4;
      local_18 = *param_3 - DAT_1808ac1f4;
      local_14 = param_3[1] - DAT_1808ac1f4;
      local_10 = *param_2 + DAT_1808ac1f4;
      local_c = param_2[1] + DAT_1808ac1f4;
    }
    FUN_1803fe160(fVar3,pfVar1,pfVar2,param_5,param_7);
    FUN_1803fc600(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  param_6,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* ===== 1803fe590 FUN_1803fe590 ===== */

void FUN_1803fe590(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  float param_5,uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  longlong lVar8;
  
  if ((param_4 & 0xff000000) != 0) {
    if ((DAT_1808ac1f4 <= param_5) && ((param_6 & 0x1f0) != 0x100)) {
      FUN_1803fe160(param_1,param_2,param_3,param_5,param_6);
      FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
    FUN_1803fc3a0(param_1,6,4);
    sVar7 = *(short *)(param_1 + 0x34);
    uVar1 = *(undefined4 *)param_3;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)param_2;
    uVar4 = (*(undefined4 **)(param_1 + 0x38))[1];
    uVar5 = **(undefined4 **)(param_1 + 0x38);
    uVar6 = *(undefined4 *)((longlong)param_3 + 4);
    **(short **)(param_1 + 0x48) = sVar7;
    *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar7 + 1;
    *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar7 + 2;
    *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar7;
    *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar7 + 2;
    *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar7 + 3;
    **(undefined8 **)(param_1 + 0x40) = *param_2;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 8) = uVar5;
    *(undefined4 *)(lVar8 + 0xc) = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x14) = uVar1;
    *(undefined4 *)(lVar8 + 0x18) = uVar2;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x1c) = uVar5;
    *(undefined4 *)(lVar8 + 0x20) = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = *param_3;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x30) = uVar5;
    *(undefined4 *)(lVar8 + 0x34) = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38) = param_4;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x3c) = uVar3;
    *(undefined4 *)(lVar8 + 0x40) = uVar6;
    lVar8 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar8 + 0x44) = uVar5;
    *(undefined4 *)(lVar8 + 0x48) = uVar4;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x4c) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x50;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 4;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
  }
  return;
}



/* ===== 1803fe730 FUN_1803fe730 ===== */

void FUN_1803fe730(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  uint param_5,uint param_6,uint param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (((param_4 | param_5 | param_6 | param_7) & 0xff000000) != 0) {
    uVar2 = **(undefined4 **)(param_1 + 0x38);
    uVar3 = (*(undefined4 **)(param_1 + 0x38))[1];
    FUN_1803fc3a0(param_1,6,4);
    **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 1;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 2;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(undefined2 **)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 2;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(short **)(param_1 + 0x48) = *(short *)(param_1 + 0x34) + 3;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
    **(undefined8 **)(param_1 + 0x40) = *param_2;
    lVar5 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar5 + 8) = uVar2;
    *(undefined4 *)(lVar5 + 0xc) = uVar3;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    lVar5 = *(longlong *)(param_1 + 0x40);
    puVar1 = (undefined4 *)(lVar5 + 0x14);
    *(undefined4 **)(param_1 + 0x40) = puVar1;
    uVar4 = *(undefined4 *)((longlong)param_2 + 4);
    *puVar1 = *(undefined4 *)param_3;
    *(undefined4 *)(lVar5 + 0x18) = uVar4;
    lVar5 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar5 + 8) = uVar2;
    *(undefined4 *)(lVar5 + 0xc) = uVar3;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    **(undefined8 **)(param_1 + 0x40) = *param_3;
    lVar5 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar5 + 8) = uVar2;
    *(undefined4 *)(lVar5 + 0xc) = uVar3;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_6;
    lVar5 = *(longlong *)(param_1 + 0x40);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    puVar1 = (undefined4 *)(lVar5 + 0x14);
    *(undefined4 **)(param_1 + 0x40) = puVar1;
    uVar4 = *(undefined4 *)((longlong)param_3 + 4);
    *puVar1 = *(undefined4 *)param_2;
    *(undefined4 *)(lVar5 + 0x18) = uVar4;
    lVar5 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar5 + 8) = uVar2;
    *(undefined4 *)(lVar5 + 0xc) = uVar3;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_7;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  return;
}



/* ===== 1803fe8f0 FUN_1803fe8f0 ===== */

void FUN_1803fe8f0(longlong param_1,undefined8 param_2,float param_3,uint param_4,int param_5,
                  undefined4 param_6)

{
  float fVar1;
  
  if (((param_4 & 0xff000000) != 0) && (DAT_1808ac1f4 <= param_3)) {
    if (param_5 < 1) {
      FUN_1803fd9d0(param_1,param_2,param_3 - DAT_1808ac1f4,0,0x30);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    }
    else {
      if (param_5 < 3) {
        param_5 = 3;
      }
      else if (0x200 < param_5) {
        param_5 = 0x200;
      }
      fVar1 = (((float)param_5 - DAT_1808ac34c) * DAT_1808ac7d0) / (float)param_5;
      FUN_1803fddf0(param_1,fVar1,param_3 - DAT_1808ac1f4,0,fVar1,param_5 + -1);
    }
    FUN_1803fc600(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4,
                  param_6,0x200);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* ===== 1803fe9d0 FUN_1803fe9d0 ===== */

void FUN_1803fe9d0(longlong param_1,undefined8 param_2,float param_3,uint param_4,int param_5)

{
  undefined8 in_R8;
  float fVar1;
  
  if (((param_4 & 0xff000000) != 0) && (DAT_1808ac1f4 <= param_3)) {
    if (param_5 < 1) {
      FUN_1803fd9d0(param_1,param_2,in_R8,0,0x30);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    }
    else {
      if (param_5 < 3) {
        param_5 = 3;
      }
      else if (0x200 < param_5) {
        param_5 = 0x200;
      }
      fVar1 = (((float)param_5 - DAT_1808ac34c) * DAT_1808ac7d0) / (float)param_5;
      FUN_1803fddf0(param_1,fVar1,in_R8,0,fVar1,param_5 + -1);
    }
    FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* ===== 1803fea90 FUN_1803fea90 ===== */

void FUN_1803fea90(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if ((param_7 & 0xff000000) != 0) {
    if ((param_2[1] == *(longlong *)(param_1 + 0x78)) && (*param_2 == *(longlong *)(param_1 + 0x70))
       ) {
      bVar4 = false;
    }
    else {
      iVar7 = *(int *)(param_1 + 0xb4);
      bVar4 = true;
      if (*(int *)(param_1 + 0xb0) == iVar7) {
        iVar8 = *(int *)(param_1 + 0xb0) + 1;
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        if (iVar8 < iVar7) {
          iVar8 = iVar7;
        }
        FUN_1803f7030(param_1 + 0xb0,iVar8);
      }
      lVar5 = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 4);
      lVar6 = param_2[1];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar1 = (undefined4 *)
               (*(longlong *)(param_1 + 0xb8) + (longlong)*(int *)(param_1 + 0xb0) * 0x10);
      *puVar1 = (int)lVar5;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar6;
      puVar1[3] = uVar3;
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      *(int *)(param_1 + 0x70) = (int)lVar5;
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      *(int *)(param_1 + 0x78) = (int)lVar6;
      *(undefined4 *)(param_1 + 0x7c) = uVar3;
      FUN_1803fc0a0(param_1);
    }
    FUN_1803fc3a0(param_1,6,4);
    FUN_1803fc4a0(param_1,param_3,param_4,param_5,param_6,param_7);
    if (bVar4) {
      FUN_1803fc340(param_1);
    }
  }
  return;
}



/* ===== 1803febc0 FUN_1803febc0 ===== */

void FUN_1803febc0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,float param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((param_7 & 0xff000000) != 0) {
    if (param_8 < DAT_1808ac1f4) {
      local_38 = (undefined4)*param_2;
      uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_30 = (undefined4)param_2[1];
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_1803fea90(local_38,&local_38,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      if ((param_2[1] == *(longlong *)(param_1 + 0x78)) &&
         (*param_2 == *(longlong *)(param_1 + 0x70))) {
        bVar4 = false;
      }
      else {
        iVar7 = *(int *)(param_1 + 0xb4);
        bVar4 = true;
        if (*(int *)(param_1 + 0xb0) == iVar7) {
          iVar8 = *(int *)(param_1 + 0xb0) + 1;
          if (iVar7 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = iVar7 / 2 + iVar7;
          }
          if (iVar8 < iVar7) {
            iVar8 = iVar7;
          }
          FUN_1803f7030(param_1 + 0xb0,iVar8);
        }
        lVar5 = *param_2;
        uVar2 = *(undefined4 *)((longlong)param_2 + 4);
        lVar6 = param_2[1];
        uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
        puVar1 = (undefined4 *)
                 (*(longlong *)(param_1 + 0xb8) + (longlong)*(int *)(param_1 + 0xb0) * 0x10);
        *puVar1 = (int)lVar5;
        puVar1[1] = uVar2;
        puVar1[2] = (int)lVar6;
        puVar1[3] = uVar3;
        *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        *(int *)(param_1 + 0x70) = (int)lVar5;
        *(undefined4 *)(param_1 + 0x74) = uVar2;
        *(int *)(param_1 + 0x78) = (int)lVar6;
        *(undefined4 *)(param_1 + 0x7c) = uVar3;
        FUN_1803fc0a0(param_1);
      }
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      FUN_1803fe160(param_1,param_3,param_4,param_8,CONCAT44(uVar9,0xf0));
      FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_7)
      ;
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_180401c50(param_1,uVar2,*(undefined4 *)(param_1 + 0x20),param_3,param_4,param_5,param_6);
      if (bVar4) {
        FUN_1803fc340(param_1);
        return;
      }
    }
  }
  return;
}



/* ===== 1803fed70 FUN_1803fed70 ===== */

void FUN_1803fed70(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  undefined8 param_6,undefined8 param_7,float param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
  int iVar7;
  short *psVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar11 = *param_3;
  fVar12 = *param_2;
  if (fVar12 < fVar11) {
    fVar2 = param_3[1];
    fVar13 = param_2[1];
    if ((fVar13 < fVar2) &&
       ((((fVar12 < (float)param_6 || ((float)param_7 < fVar11)) || (fVar13 < param_6._4_4_)) ||
        (param_7._4_4_ < fVar2)))) {
      if ((float)param_6 <= fVar12) {
        param_6._0_4_ = fVar12;
      }
      if (fVar11 <= (float)param_7) {
        param_7._0_4_ = fVar11;
      }
      if ((float)param_6 < (float)param_7) {
        if (param_6._4_4_ <= fVar13) {
          param_6._4_4_ = fVar13;
        }
        if (fVar2 <= param_7._4_4_) {
          param_7._4_4_ = fVar2;
        }
        if (param_6._4_4_ < param_7._4_4_) {
          FUN_1803fc3a0(fVar2,0x18,0xc);
          fVar11 = *param_2;
          pfVar6 = *(float **)(param_1 + 0x10);
          psVar8 = *(short **)(param_1 + 0x12);
          sVar5 = (short)param_1[0xd];
          pfVar6[1] = param_2[1];
          *pfVar6 = fVar11;
          fVar11 = *param_4;
          pfVar6[3] = param_4[1];
          pfVar6[2] = fVar11;
          pfVar6[4] = param_8;
          fVar11 = *param_3;
          pfVar6[6] = param_2[1];
          pfVar6[5] = fVar11;
          fVar11 = *param_5;
          pfVar6[8] = param_4[1];
          pfVar6[7] = fVar11;
          pfVar6[9] = param_8;
          fVar11 = *param_3;
          pfVar6[0xb] = param_3[1];
          pfVar6[10] = fVar11;
          fVar11 = *param_5;
          pfVar6[0xd] = param_5[1];
          pfVar6[0xc] = fVar11;
          pfVar6[0xe] = param_8;
          fVar11 = *param_2;
          pfVar6[0x10] = param_3[1];
          pfVar6[0xf] = fVar11;
          fVar11 = *param_4;
          pfVar6[0x12] = param_5[1];
          pfVar6[0x11] = fVar11;
          pfVar6[0x13] = param_8;
          fVar11 = *param_2;
          fVar12 = *param_4;
          fVar2 = param_4[1];
          fVar13 = param_2[1];
          fVar9 = *param_3;
          fVar10 = *param_5;
          fVar3 = param_3[1];
          fVar4 = param_5[1];
          pfVar6[0x14] = (float)param_6;
          pfVar6[0x15] = param_6._4_4_;
          pfVar6[0x19] = (float)param_7;
          fVar9 = (fVar10 - fVar12) / (fVar9 - fVar11);
          pfVar6[0x18] = param_8;
          fVar10 = (fVar4 - fVar2) / (fVar3 - fVar13);
          fVar11 = fVar12 / fVar9 - fVar11;
          pfVar6[0x1a] = param_6._4_4_;
          fVar13 = fVar2 / fVar10 - fVar13;
          fVar12 = (fVar11 + (float)param_7) * fVar9;
          fVar9 = (fVar11 + (float)param_6) * fVar9;
          fVar11 = (fVar13 + param_6._4_4_) * fVar10;
          pfVar6[0x16] = fVar9;
          pfVar6[0x17] = fVar11;
          pfVar6[0x1c] = fVar11;
          pfVar6[0x1b] = fVar12;
          pfVar6[0x20] = fVar12;
          pfVar6[0x1e] = (float)param_7;
          pfVar6[0x1f] = param_7._4_4_;
          pfVar6[0x23] = (float)param_6;
          pfVar6[0x24] = param_7._4_4_;
          pfVar6[0x25] = fVar9;
          pfVar6[0x1d] = param_8;
          pfVar6[0x22] = param_8;
          pfVar6[0x27] = param_8;
          fVar11 = (fVar13 + param_7._4_4_) * fVar10;
          pfVar6[0x21] = fVar11;
          pfVar6[0x26] = fVar11;
          pfVar6[0x29] = param_2[1];
          pfVar6[0x28] = (float)param_6;
          fVar11 = param_2[1];
          pfVar6[0x2a] = fVar9;
          pfVar6[0x2c] = param_8;
          pfVar6[0x2b] = (fVar13 + fVar11) * fVar10;
          pfVar6[0x2e] = param_2[1];
          pfVar6[0x2d] = (float)param_7;
          fVar11 = param_2[1];
          pfVar6[0x2f] = fVar12;
          pfVar6[0x31] = param_8;
          pfVar6[0x30] = (fVar13 + fVar11) * fVar10;
          pfVar6[0x33] = param_3[1];
          pfVar6[0x32] = (float)param_7;
          fVar11 = param_3[1];
          pfVar6[0x34] = fVar12;
          pfVar6[0x36] = param_8;
          pfVar6[0x35] = (fVar13 + fVar11) * fVar10;
          pfVar6[0x38] = param_3[1];
          pfVar6[0x37] = (float)param_6;
          fVar11 = param_3[1];
          pfVar6[0x39] = fVar9;
          pfVar6[0x3b] = param_8;
          pfVar6[0x3a] = (fVar13 + fVar11) * fVar10;
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0xf0;
          param_1[0xd] = param_1[0xd] + 0xc;
          if (*param_2 <= (float)param_6 && (float)param_6 != *param_2) {
            *psVar8 = sVar5;
            psVar8[1] = sVar5 + 8;
            psVar8[2] = sVar5 + 0xb;
            psVar8[4] = sVar5 + 0xb;
            psVar8[5] = sVar5 + 3;
            psVar8[3] = sVar5;
            psVar8 = psVar8 + 6;
          }
          if (param_2[1] <= param_6._4_4_ && param_6._4_4_ != param_2[1]) {
            psVar8[1] = sVar5 + 9;
            *psVar8 = sVar5 + 8;
            psVar8[2] = sVar5 + 5;
            psVar8[4] = sVar5 + 5;
            psVar8[5] = sVar5 + 4;
            psVar8[3] = sVar5 + 8;
            psVar8 = psVar8 + 6;
          }
          if ((float)param_7 < *param_3) {
            psVar8[1] = sVar5 + 1;
            *psVar8 = sVar5 + 9;
            psVar8[2] = sVar5 + 2;
            psVar8[4] = sVar5 + 2;
            psVar8[5] = sVar5 + 10;
            psVar8[3] = sVar5 + 9;
            psVar8 = psVar8 + 6;
          }
          if (param_7._4_4_ < param_3[1]) {
            psVar8[1] = sVar5 + 6;
            *psVar8 = sVar5 + 7;
            psVar8[2] = sVar5 + 10;
            psVar8[5] = sVar5 + 0xb;
            psVar8[3] = sVar5 + 7;
            psVar8[4] = sVar5 + 10;
            psVar8 = psVar8 + 6;
          }
          iVar7 = 0x18 - (int)((longlong)psVar8 - *(longlong *)(param_1 + 0x12) >> 1);
          *(short **)(param_1 + 0x12) = psVar8;
          piVar1 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
          *piVar1 = *piVar1 - iVar7;
          param_1[4] = param_1[4] - iVar7;
          return;
        }
      }
      FUN_1803fc3a0(fVar2,6,4);
      FUN_1803fc4a0(param_1,param_2,param_3,param_4,param_5,param_8);
    }
  }
  return;
}



/* ===== 1803ff290 FUN_1803ff290 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1803ff290(longlong param_1,uint param_2,longlong param_3,int param_4,
                       undefined8 param_5,undefined8 param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  float *pfVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  byte *pbVar23;
  byte bVar24;
  byte bVar25;
  float *pfVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_100;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_d4;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined1 *local_b8 [2];
  longlong local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  ulonglong local_90;
  
  local_90 = DAT_180919500 ^ (ulonglong)&local_d8;
  local_d0 = (ulonglong)param_2;
  local_a8 = (longlong)param_4;
  puVar18 = auStack_f8;
  if ((((float)param_5 < (float)param_6) && (puVar18 = auStack_f8, param_5._4_4_ < param_6._4_4_))
     && (puVar18 = auStack_f8, 2 < (int)param_2)) {
    local_c0 = (ulonglong)(param_4 * 2);
    uVar7 = local_c0 + 0xf;
    if (uVar7 <= local_c0) {
      uVar7 = 0xffffffffffffff0;
    }
    uStack_100 = 0x1803ff348;
    lVar5 = -(uVar7 & 0xfffffffffffffff0);
    puVar18 = auStack_f8 + lVar5;
    bVar15 = 0;
    iVar28 = 0;
    bVar25 = 0xff;
    puVar17 = auStack_f8 + lVar5 + 0x20;
    local_98 = puVar17 + local_a8;
    local_d4 = param_4;
    local_c8 = param_3;
    local_a0 = puVar17;
    uVar7 = local_c0;
    uVar9 = local_d0;
    if ((int)param_2 < 4) {
LAB_1803ff4e3:
      do {
        lVar27 = (longlong)iVar28;
        fVar2 = *(float *)(param_1 + 4 + lVar27 * 8);
        fVar34 = *(float *)(param_1 + lVar27 * 8);
        bVar13 = 0;
        if (fVar2 < param_5._4_4_) {
          bVar13 = 4;
        }
        bVar6 = 0;
        if (param_6._4_4_ < fVar2) {
          bVar6 = 8;
        }
        bVar20 = 0;
        if ((float)param_6 < fVar34) {
          bVar20 = 2;
        }
        iVar28 = iVar28 + 1;
        bVar20 = bVar13 | bVar6 | fVar34 < (float)param_5 | bVar20;
        bVar25 = bVar25 & bVar20;
        puVar17[lVar27] = bVar20;
        bVar15 = bVar15 | bVar20;
      } while (iVar28 < (int)uVar9);
    }
    else {
      do {
        lVar27 = (longlong)iVar28;
        fVar2 = *(float *)(param_1 + 4 + lVar27 * 8);
        fVar34 = *(float *)(param_1 + lVar27 * 8);
        bVar13 = 0;
        if (fVar2 < param_5._4_4_) {
          bVar13 = 4;
        }
        bVar6 = 0;
        if (param_6._4_4_ < fVar2) {
          bVar6 = 8;
        }
        bVar20 = 0;
        if ((float)param_6 < fVar34) {
          bVar20 = 2;
        }
        bVar20 = bVar13 | bVar6 | fVar34 < (float)param_5 | bVar20;
        puVar17[lVar27] = bVar20;
        fVar2 = *(float *)(param_1 + 0xc + lVar27 * 8);
        fVar34 = *(float *)(param_1 + 8 + lVar27 * 8);
        bVar13 = 0;
        if (fVar2 < param_5._4_4_) {
          bVar13 = 4;
        }
        bVar6 = 0;
        if (param_6._4_4_ < fVar2) {
          bVar6 = 8;
        }
        bVar24 = 0;
        if ((float)param_6 < fVar34) {
          bVar24 = 2;
        }
        bVar24 = bVar13 | bVar6 | fVar34 < (float)param_5 | bVar24;
        auStack_f8[lVar27 + lVar5 + 0x21] = bVar24;
        fVar2 = *(float *)(param_1 + 0x14 + lVar27 * 8);
        fVar34 = *(float *)(param_1 + 0x10 + lVar27 * 8);
        bVar13 = 0;
        if (fVar2 < param_5._4_4_) {
          bVar13 = 4;
        }
        bVar6 = 0;
        if (param_6._4_4_ < fVar2) {
          bVar6 = 8;
        }
        bVar21 = 0;
        if ((float)param_6 < fVar34) {
          bVar21 = 2;
        }
        bVar21 = bVar13 | bVar6 | fVar34 < (float)param_5 | bVar21;
        auStack_f8[lVar27 + lVar5 + 0x22] = bVar21;
        fVar2 = *(float *)(param_1 + 0x1c + lVar27 * 8);
        fVar34 = *(float *)(param_1 + 0x18 + lVar27 * 8);
        bVar13 = 0;
        if (fVar2 < param_5._4_4_) {
          bVar13 = 4;
        }
        bVar6 = 0;
        if (param_6._4_4_ < fVar2) {
          bVar6 = 8;
        }
        bVar14 = 0;
        if ((float)param_6 < fVar34) {
          bVar14 = 2;
        }
        bVar14 = bVar13 | bVar6 | fVar34 < (float)param_5 | bVar14;
        auStack_f8[lVar27 + lVar5 + 0x23] = bVar14;
        bVar25 = bVar14 & bVar21 & bVar24 & bVar20 & bVar25;
        bVar15 = bVar14 | bVar21 | bVar24 | bVar20 | bVar15;
        iVar28 = iVar28 + 4;
      } while (iVar28 < (int)(param_2 - 3));
      uVar9 = local_d0;
      uVar7 = local_c0;
      param_4 = local_d4;
      if (iVar28 < (int)local_d0) goto LAB_1803ff4e3;
    }
    lVar27 = local_c8;
    if (bVar25 == 0) {
      if (bVar15 == 0) {
        puVar17 = auStack_f8 + lVar5;
        if (param_4 < (int)uVar9) {
LAB_1803ff96f:
          uVar9 = 0xffffffff;
          puVar18 = puVar17;
        }
        else {
          *(undefined8 *)(auStack_f8 + lVar5 + -8) = 0x1803ff557;
          FUN_180540530(lVar27,param_1,(longlong)(int)uVar9 << 3);
          uVar9 = uVar9 & 0xffffffff;
          puVar18 = auStack_f8 + lVar5;
        }
        goto LAB_1803ff978;
      }
      uVar10 = uVar7 * 8 + 0xf;
      if (uVar10 <= uVar7 * 8) {
        uVar10 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_f8 + lVar5 + -8) = 0x1803ff585;
      lVar27 = -(uVar10 & 0xfffffffffffffff0);
      puVar18 = auStack_f8 + lVar27 + lVar5;
      lVar30 = (longlong)param_4;
      puVar17 = auStack_f8 + lVar27 + lVar5 + 0x20;
      local_b8[1] = puVar17 + lVar30 * 8;
      local_b8[0] = puVar17;
      *(undefined8 *)(auStack_f8 + lVar27 + lVar5 + -8) = 0x1803ff5ab;
      FUN_180540530(puVar17,param_1);
      uVar7 = 0;
      local_d8 = 0;
      uVar29 = 1;
      do {
        if ((uVar29 & bVar15) != 0) {
          iVar22 = (int)uVar7;
          iVar31 = 0;
          uVar7 = (ulonglong)(int)(1U - iVar22);
          iVar28 = (int)uVar9;
          pfVar26 = (float *)local_b8[iVar22];
          pbVar19 = local_b8[(longlong)iVar22 + 3];
          pfVar4 = (float *)local_b8[uVar7];
          pbVar23 = local_b8[uVar7 + 3];
          pfVar16 = pfVar26 + ((longlong)iVar28 + -1) * 2;
          bVar25 = pbVar19[(longlong)iVar28 + -1];
          pfVar1 = pfVar4 + lVar30 * 2;
          pfVar11 = pfVar4;
          pfVar12 = pfVar4;
          if (0 < iVar28) {
            do {
              bVar13 = *pbVar19;
              if ((uVar29 & (bVar13 ^ bVar25)) == 0) {
                pfVar12 = pfVar11;
                if ((bVar13 & uVar29) == 0) {
                  puVar17 = auStack_f8 + lVar27 + lVar5;
                  if (pfVar1 <= pfVar11) goto LAB_1803ff96f;
                  *(undefined8 *)pfVar11 = *(undefined8 *)pfVar26;
                  pfVar12 = pfVar11 + 2;
                  *pbVar23 = bVar13;
                  pbVar23 = pbVar23 + 1;
                }
              }
              else {
                fVar2 = *pfVar16;
                fVar34 = pfVar16[1];
                if (local_d8 == 0) {
                  fVar33 = (float)param_5;
LAB_1803ff6c6:
                  fVar32 = ((fVar33 - fVar2) / (*pfVar26 - fVar2)) * (pfVar26[1] - fVar34) + fVar34;
                }
                else {
                  if (local_d8 == 1) {
                    fVar33 = (float)param_6;
                    goto LAB_1803ff6c6;
                  }
                  if (local_d8 == 2) {
                    fVar32 = param_5._4_4_;
LAB_1803ff6a2:
                    fVar33 = ((fVar32 - fVar34) / (pfVar26[1] - fVar34)) * (*pfVar26 - fVar2) +
                             fVar2;
                  }
                  else {
                    if (local_d8 == 3) {
                      fVar32 = param_6._4_4_;
                      goto LAB_1803ff6a2;
                    }
                    fVar32 = 0.0;
                    fVar33 = 0.0;
                  }
                }
                puVar17 = auStack_f8 + lVar27 + lVar5;
                if (pfVar1 <= pfVar11) goto LAB_1803ff96f;
                *pfVar11 = fVar33;
                pfVar12 = pfVar11 + 2;
                pfVar11[1] = fVar32;
                bVar25 = 0;
                if (fVar32 < param_5._4_4_) {
                  bVar25 = 4;
                }
                bVar6 = 0;
                if (param_6._4_4_ < fVar32) {
                  bVar6 = 8;
                }
                bVar20 = 0;
                if ((float)param_6 < fVar33) {
                  bVar20 = 2;
                }
                *pbVar23 = bVar25 | bVar6 | fVar33 < (float)param_5 | bVar20;
                if ((bVar13 & uVar29) == 0) {
                  puVar17 = auStack_f8 + lVar27 + lVar5;
                  if (pfVar1 <= pfVar12) goto LAB_1803ff96f;
                  *(undefined8 *)pfVar12 = *(undefined8 *)pfVar26;
                  pbVar23[1] = bVar13;
                  pbVar23 = pbVar23 + 2;
                  pfVar12 = pfVar11 + 4;
                }
                else {
                  pbVar23 = pbVar23 + 1;
                }
                bVar25 = bVar13;
              }
              pbVar19 = pbVar19 + 1;
              iVar31 = iVar31 + 1;
              pfVar11 = pfVar12;
              pfVar16 = pfVar26;
              pfVar26 = pfVar26 + 2;
            } while (iVar31 < iVar28);
            uVar7 = (ulonglong)(1U - iVar22);
          }
          uVar9 = (longlong)pfVar12 - (longlong)pfVar4 >> 3;
          lVar30 = local_a8;
        }
        fVar2 = DAT_1808abf94;
        local_d8 = local_d8 + 1;
        uVar29 = uVar29 << 1 | (uint)((int)uVar29 < 0);
      } while (local_d8 < 4);
      iVar28 = (int)uVar9;
      if (2 < iVar28) {
        uVar29 = 0;
        iVar22 = 0;
        puVar18 = local_b8[(int)uVar7];
        fVar34 = *(float *)(puVar18 + (longlong)iVar28 * 8 + -8);
        fVar33 = *(float *)(puVar18 + (longlong)iVar28 * 8 + -4);
        if (iVar28 < 4) goto LAB_1803ff918;
        do {
          lVar30 = (longlong)iVar22;
          fVar32 = *(float *)(puVar18 + lVar30 * 8);
          fVar3 = *(float *)(puVar18 + lVar30 * 8 + 4);
          if (fVar2 < (fVar3 - fVar33) * (fVar3 - fVar33) + (fVar32 - fVar34) * (fVar32 - fVar34)) {
            lVar8 = (longlong)(int)uVar29;
            uVar29 = uVar29 + 1;
            *(float *)(local_c8 + lVar8 * 8) = fVar32;
            *(float *)(local_c8 + 4 + lVar8 * 8) = fVar3;
            fVar34 = fVar32;
            fVar33 = fVar3;
          }
          fVar32 = *(float *)(puVar18 + lVar30 * 8 + 8);
          fVar3 = *(float *)(puVar18 + lVar30 * 8 + 0xc);
          if (fVar2 < (fVar3 - fVar33) * (fVar3 - fVar33) + (fVar32 - fVar34) * (fVar32 - fVar34)) {
            lVar8 = (longlong)(int)uVar29;
            uVar29 = uVar29 + 1;
            *(float *)(local_c8 + lVar8 * 8) = fVar32;
            *(float *)(local_c8 + 4 + lVar8 * 8) = fVar3;
            fVar34 = fVar32;
            fVar33 = fVar3;
          }
          fVar32 = *(float *)(puVar18 + lVar30 * 8 + 0x10);
          fVar3 = *(float *)(puVar18 + lVar30 * 8 + 0x14);
          if (fVar2 < (fVar3 - fVar33) * (fVar3 - fVar33) + (fVar32 - fVar34) * (fVar32 - fVar34)) {
            lVar8 = (longlong)(int)uVar29;
            uVar29 = uVar29 + 1;
            *(float *)(local_c8 + lVar8 * 8) = fVar32;
            *(float *)(local_c8 + 4 + lVar8 * 8) = fVar3;
            fVar34 = fVar32;
            fVar33 = fVar3;
          }
          fVar32 = *(float *)(puVar18 + lVar30 * 8 + 0x18);
          fVar3 = *(float *)(puVar18 + lVar30 * 8 + 0x1c);
          if (fVar2 < (fVar3 - fVar33) * (fVar3 - fVar33) + (fVar32 - fVar34) * (fVar32 - fVar34)) {
            lVar30 = (longlong)(int)uVar29;
            uVar29 = uVar29 + 1;
            *(float *)(local_c8 + lVar30 * 8) = fVar32;
            *(float *)(local_c8 + 4 + lVar30 * 8) = fVar3;
            fVar34 = fVar32;
            fVar33 = fVar3;
          }
          iVar22 = iVar22 + 4;
        } while (iVar22 < iVar28 + -3);
        for (; iVar22 < iVar28; iVar22 = iVar22 + 1) {
LAB_1803ff918:
          fVar32 = *(float *)(puVar18 + (longlong)iVar22 * 8);
          fVar3 = *(float *)(puVar18 + (longlong)iVar22 * 8 + 4);
          if (fVar2 < (fVar3 - fVar33) * (fVar3 - fVar33) + (fVar32 - fVar34) * (fVar32 - fVar34)) {
            lVar30 = (longlong)(int)uVar29;
            uVar29 = uVar29 + 1;
            *(float *)(local_c8 + lVar30 * 8) = fVar32;
            *(float *)(local_c8 + 4 + lVar30 * 8) = fVar3;
            fVar34 = fVar32;
            fVar33 = fVar3;
          }
        }
        uVar9 = 0;
        puVar18 = auStack_f8 + lVar27 + lVar5 + -0xf8 + 0xf8;
        if (2 < (int)uVar29) {
          uVar9 = (ulonglong)uVar29;
          puVar18 = auStack_f8 + lVar27 + lVar5 + -0xf8 + 0xf8;
        }
        goto LAB_1803ff978;
      }
    }
  }
  uVar9 = 0;
LAB_1803ff978:
  *(undefined8 *)(puVar18 + -8) = 0x1803ff984;
  return uVar9;
}



/* ===== 1803ff9b0 FUN_1803ff9b0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803ff9b0(int *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  undefined8 param_6,int param_7,undefined4 param_8)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  undefined8 uVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  short *psVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  short sVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  float local_d8 [2];
  undefined8 local_d0;
  float local_c8 [2];
  undefined8 local_c0;
  int local_b8;
  int *local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_180919500 ^ (ulonglong)local_d8;
  puVar17 = auStack_108;
  if ((*param_2 < *param_3) && (puVar17 = auStack_108, param_2[1] < param_3[1])) {
    uVar13 = (longlong)(param_7 + 4) * 8;
    uVar15 = uVar13 + 0xf;
    if (uVar15 <= uVar13) {
      uVar15 = 0xffffffffffffff0;
    }
    uStack_110 = 0x1803ffa64;
    lVar7 = -(uVar15 & 0xfffffffffffffff0);
    uVar4 = *(undefined8 *)param_2;
    local_b0 = param_1;
    *(undefined8 *)((longlong)local_d8 + lVar7 + -8) = *(undefined8 *)param_3;
    pfVar1 = (float *)((longlong)local_d8 + lVar7);
    *(undefined8 *)(auStack_108 + lVar7 + 0x20) = uVar4;
    *(undefined8 *)(auStack_108 + lVar7 + -8) = 0x1803ffa8c;
    iVar12 = FUN_1803ff290(param_6,param_7,pfVar1);
    lVar24 = (longlong)iVar12;
    if (iVar12 == 0) {
      *(undefined8 *)(auStack_108 + lVar7 + -8) = 0x1803ffaa6;
      FUN_1803fc3a0(param_1,6,4);
      *(undefined4 *)((longlong)local_d8 + lVar7 + -8) = param_8;
      *(float **)(auStack_108 + lVar7 + 0x20) = param_5;
      *(undefined8 *)(auStack_108 + lVar7 + -8) = 0x1803ffacd;
      FUN_1803fc4a0(param_1,param_2,param_3,param_4);
      puVar17 = auStack_108 + lVar7;
    }
    else {
      iVar21 = (iVar12 + 4) * 3;
      local_b8 = iVar21;
      *(undefined8 *)(auStack_108 + lVar7 + -8) = 0x1803ffae5;
      FUN_1803fc3a0(param_1,iVar21,iVar12 + 4);
      puVar17 = auStack_108 + lVar7;
      iVar21 = 0;
      psVar16 = *(short **)(param_1 + 0x12);
      lVar6 = *(longlong *)(param_1 + 0x10);
      sVar5 = (short)param_1[0xd];
      fVar26 = (*param_5 - *param_4) / (*param_3 - *param_2);
      fVar28 = (param_5[1] - param_4[1]) / (param_3[1] - param_2[1]);
      fVar30 = *param_4 / fVar26 - *param_2;
      fVar31 = param_4[1] / fVar28 - param_2[1];
      if (3 < iVar12) {
        do {
          lVar14 = (longlong)iVar21;
          iVar21 = iVar21 + 4;
          *(undefined8 *)(lVar6 + lVar14 * 0x14) = *(undefined8 *)(pfVar1 + lVar14 * 2);
          fVar29 = pfVar1[lVar14 * 2];
          fVar3 = *(float *)((longlong)local_d8 + lVar14 * 8 + lVar7 + 4);
          *(undefined4 *)(lVar6 + 0x10 + lVar14 * 0x14) = param_8;
          *(float *)(lVar6 + 8 + lVar14 * 0x14) = (fVar30 + fVar29) * fVar26;
          *(float *)(lVar6 + 0xc + lVar14 * 0x14) = (fVar31 + fVar3) * fVar28;
          *(undefined8 *)(lVar6 + 0x14 + lVar14 * 0x14) =
               *(undefined8 *)((longlong)local_d8 + lVar14 * 8 + lVar7 + 8);
          fVar29 = *(float *)((longlong)local_d8 + lVar14 * 8 + lVar7 + 8);
          fVar3 = *(float *)((longlong)local_c8 + lVar14 * 8 + lVar7 + -4);
          *(undefined4 *)(lVar6 + 0x24 + lVar14 * 0x14) = param_8;
          *(float *)(lVar6 + 0x1c + lVar14 * 0x14) = (fVar30 + fVar29) * fVar26;
          *(float *)(lVar6 + 0x20 + lVar14 * 0x14) = (fVar31 + fVar3) * fVar28;
          *(undefined8 *)(lVar6 + 0x28 + lVar14 * 0x14) =
               *(undefined8 *)((longlong)local_c8 + lVar14 * 8 + lVar7);
          fVar29 = *(float *)((longlong)local_c8 + lVar14 * 8 + lVar7);
          fVar3 = *(float *)((longlong)local_c8 + lVar14 * 8 + lVar7 + 4);
          *(undefined4 *)(lVar6 + 0x38 + lVar14 * 0x14) = param_8;
          *(float *)(lVar6 + 0x30 + lVar14 * 0x14) = (fVar30 + fVar29) * fVar26;
          *(float *)(lVar6 + 0x34 + lVar14 * 0x14) = (fVar31 + fVar3) * fVar28;
          *(undefined8 *)(lVar6 + 0x3c + lVar14 * 0x14) =
               *(undefined8 *)((longlong)local_c8 + lVar14 * 8 + lVar7 + 8);
          fVar29 = *(float *)((longlong)local_c8 + lVar14 * 8 + lVar7 + 8);
          fVar3 = *(float *)((longlong)local_c8 + lVar14 * 8 + lVar7 + 0xc);
          *(undefined4 *)(lVar6 + 0x4c + lVar14 * 0x14) = param_8;
          *(float *)(lVar6 + 0x44 + lVar14 * 0x14) = (fVar30 + fVar29) * fVar26;
          *(float *)(lVar6 + 0x48 + lVar14 * 0x14) = (fVar31 + fVar3) * fVar28;
        } while (iVar21 < iVar12 + -3);
      }
      for (; iVar21 < iVar12; iVar21 = iVar21 + 1) {
        lVar14 = (longlong)iVar21;
        *(undefined8 *)(lVar6 + lVar14 * 0x14) = *(undefined8 *)(pfVar1 + lVar14 * 2);
        fVar29 = pfVar1[lVar14 * 2];
        fVar3 = *(float *)((longlong)local_d8 + lVar14 * 8 + lVar7 + 4);
        *(undefined4 *)(lVar6 + 0x10 + lVar14 * 0x14) = param_8;
        *(float *)(lVar6 + 8 + lVar14 * 0x14) = (fVar30 + fVar29) * fVar26;
        *(float *)(lVar6 + 0xc + lVar14 * 0x14) = (fVar31 + fVar3) * fVar28;
      }
      local_d0._0_4_ = *param_3;
      local_c8[1] = param_3[1];
      sVar23 = sVar5 + (short)iVar12;
      local_c0._0_4_ = *param_2;
      local_d0._4_4_ = param_2[1];
      local_c8[0] = (float)local_d0;
      local_c0._4_4_ = local_c8[1];
      local_d8[1] = local_d0._4_4_;
      local_d8[0] = (float)local_c0;
      *(float *)(lVar6 + 4 + lVar24 * 0x14) = local_d0._4_4_;
      *(float *)(lVar6 + lVar24 * 0x14) = (float)local_c0;
      fVar26 = param_4[1];
      *(float *)(lVar6 + 8 + lVar24 * 0x14) = *param_4;
      *(undefined4 *)(lVar6 + 0x10 + lVar24 * 0x14) = param_8;
      *(float *)(lVar6 + 0xc + lVar24 * 0x14) = fVar26;
      *(float *)(lVar6 + 0x14 + lVar24 * 0x14) = (float)local_d0;
      *(float *)(lVar6 + 0x18 + lVar24 * 0x14) = local_d0._4_4_;
      fVar26 = param_4[1];
      *(float *)(lVar6 + 0x1c + lVar24 * 0x14) = *param_5;
      *(undefined4 *)(lVar6 + 0x24 + lVar24 * 0x14) = param_8;
      *(float *)(lVar6 + 0x20 + lVar24 * 0x14) = fVar26;
      *(float *)(lVar6 + 0x28 + lVar24 * 0x14) = (float)local_d0;
      *(float *)(lVar6 + 0x2c + lVar24 * 0x14) = local_c8[1];
      fVar26 = param_5[1];
      *(float *)(lVar6 + 0x30 + lVar24 * 0x14) = *param_5;
      *(undefined4 *)(lVar6 + 0x38 + lVar24 * 0x14) = param_8;
      *(float *)(lVar6 + 0x34 + lVar24 * 0x14) = fVar26;
      *(float *)(lVar6 + 0x3c + lVar24 * 0x14) = (float)local_c0;
      *(float *)(lVar6 + 0x40 + lVar24 * 0x14) = local_c8[1];
      fVar26 = param_5[1];
      *(float *)(lVar6 + 0x44 + lVar24 * 0x14) = *param_4;
      *(undefined4 *)(lVar6 + 0x4c + lVar24 * 0x14) = param_8;
      iVar21 = iVar12 + -1;
      *(float *)(lVar6 + 0x48 + lVar24 * 0x14) = fVar26;
      param_1[0xd] = param_1[0xd] + iVar12 + 4;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (longlong)(iVar12 + 4) * 0x14;
      uVar10 = DAT_1808adec0;
      uVar9 = _DAT_1808ade90;
      fVar3 = DAT_1808ac118;
      uVar20 = 0xffffffff;
      fVar26 = *(float *)((longlong)local_d8 + lVar7 + 4);
      uVar18 = 0xffffffff;
      fVar28 = *(float *)((longlong)local_c8 + lVar7 + -4);
      fVar30 = *(float *)((longlong)local_c8 + lVar7 + 4);
      fVar31 = pfVar1[(longlong)iVar21 * 2];
      fVar29 = *(float *)((longlong)local_d8 + (longlong)iVar21 * 8 + lVar7 + 4);
      iVar25 = 1;
      if ((fVar30 - fVar26) * *(float *)((longlong)local_d8 + lVar7 + 8) +
          (fVar28 - fVar30) * *pfVar1 + (fVar26 - fVar28) * *(float *)((longlong)local_c8 + lVar7) <
          0.0) {
        iVar25 = -1;
      }
      uVar15 = 0;
      if (0 < iVar12) {
        do {
          fVar26 = pfVar1[uVar15 * 2];
          fVar28 = *(float *)((longlong)local_d8 + uVar15 * 8 + lVar7 + 4);
          fVar27 = fVar28 - fVar29;
          fVar30 = (float)((uint)(fVar26 - fVar31) ^ uVar10);
          if ((float)((uint)fVar27 & uVar9) <= (float)((uint)fVar30 & uVar9)) {
            if (fVar30 < 0.0) {
              uVar13 = (ulonglong)(0.0 < fVar27);
            }
            else {
              uVar13 = (ulonglong)((fVar27 <= 0.0) + 2);
            }
          }
          else if (fVar27 < 0.0) {
            uVar13 = 0;
            if (0.0 < fVar30) {
              uVar13 = 3;
            }
          }
          else {
            uVar13 = (ulonglong)((0.0 < fVar30) + 1);
          }
          uVar22 = (uint)uVar13;
          sVar8 = (short)uVar15;
          if (fVar3 <= (float)((uint)((fVar28 - local_d8[uVar13 * 2 + 1]) * fVar31 +
                                      (local_d8[uVar13 * 2 + 1] - fVar29) * fVar26 +
                                     (fVar29 - fVar28) * local_d8[uVar13 * 2]) & uVar9)) {
            *psVar16 = sVar5 + (short)iVar21;
            psVar16[1] = sVar5 + sVar8;
            psVar16[2] = sVar23 + (short)uVar13;
            psVar16 = psVar16 + 3;
          }
          uVar19 = uVar22;
          uVar11 = uVar22;
          if (uVar18 != 0xffffffff) {
            uVar19 = uVar20;
            uVar11 = uVar18;
          }
          while (uVar18 = uVar11, uVar20 = uVar19, uVar22 != uVar20) {
            uVar19 = iVar25 + uVar20 & 3;
            uVar11 = uVar18;
            if (fVar3 <= (float)((uint)((fVar29 - local_d8[(longlong)(int)uVar20 * 2 + 1]) *
                                        local_d8[(ulonglong)uVar19 * 2] +
                                        (local_d8[(ulonglong)uVar19 * 2 + 1] - fVar29) *
                                        local_d8[(longlong)(int)uVar20 * 2] +
                                       (local_d8[(longlong)(int)uVar20 * 2 + 1] -
                                       local_d8[(ulonglong)uVar19 * 2 + 1]) * fVar31) & uVar9)) {
              psVar16[1] = sVar23 + (short)uVar19;
              psVar16[2] = sVar5 + (short)iVar21;
              *psVar16 = (short)uVar20 + sVar23;
              psVar16 = psVar16 + 3;
            }
          }
          iVar21 = (int)uVar15;
          uVar15 = (ulonglong)(iVar21 + 1U);
          fVar29 = fVar28;
          fVar31 = fVar26;
        } while ((int)(iVar21 + 1U) < iVar12);
        param_1 = local_b0;
        if (uVar18 != 0xffffffff) {
          while (uVar10 = uVar20, uVar18 != uVar10) {
            uVar20 = iVar25 + uVar10 & 3;
            if (fVar3 <= (float)((uint)((local_d8[(ulonglong)uVar20 * 2 + 1] - fVar28) *
                                        local_d8[(longlong)(int)uVar10 * 2] +
                                        (fVar28 - local_d8[(longlong)(int)uVar10 * 2 + 1]) *
                                        local_d8[(ulonglong)uVar20 * 2] +
                                       (local_d8[(longlong)(int)uVar10 * 2 + 1] -
                                       local_d8[(ulonglong)uVar20 * 2 + 1]) * fVar26) & uVar9)) {
              psVar16[1] = sVar23 + (short)uVar20;
              psVar16[2] = sVar5 + sVar8;
              *psVar16 = (short)uVar10 + sVar23;
              psVar16 = psVar16 + 3;
            }
          }
        }
      }
      lVar7 = *(longlong *)(param_1 + 0x12);
      *(short **)(param_1 + 0x12) = psVar16;
      local_b8 = local_b8 - (int)((longlong)psVar16 - lVar7 >> 1);
      piVar2 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
      *piVar2 = *piVar2 - local_b8;
      param_1[4] = param_1[4] - local_b8;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x180400097;
  return;
}



/* ===== 1804000e0 FUN_1804000e0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804000e0(longlong param_1,float *param_2,float *param_3,uint param_4,float param_5,
                  float *param_6,uint param_7,float param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  uint local_108;
  int local_e8;
  uint uStack_e4;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  ulonglong local_98;
  
  puVar10 = auStack_128;
  local_98 = DAT_180919500 ^ (ulonglong)&local_e8;
  if ((param_4 & 0xff000000) == 0) goto LAB_1804003e7;
  uStack_e4 = param_7 & 0x100000;
  if ((param_8 <= 0.0) || ((param_7 & 0x1f0) == 0x100)) {
    bVar3 = false;
    bVar6 = bVar3;
    if (uStack_e4 == 0) goto LAB_1804001dc;
LAB_1804001f0:
    puVar10 = auStack_128;
    local_e0 = 0;
    local_e8 = 0;
  }
  else {
    bVar3 = true;
    bVar6 = true;
    if (uStack_e4 == 0) {
LAB_1804001dc:
      bVar3 = bVar6;
      uStack_130 = 0x1804001ec;
      FUN_1803fc3a0(param_1,0x36);
      goto LAB_1804001f0;
    }
    local_108 = param_7;
    uStack_130 = 0x18040017e;
    FUN_1803fe160(param_1,param_2);
    local_e8 = *(int *)(param_1 + 0x50);
    uVar7 = (longlong)local_e8 * 8 + 0xf;
    if (uVar7 <= (ulonglong)((longlong)local_e8 * 8)) {
      uVar7 = 0xffffffffffffff0;
    }
    uStack_130 = 0x1804001a9;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    lVar2 = -(uVar7 & 0xfffffffffffffff0);
    local_e0 = (longlong)&local_e8 + lVar2;
    *(undefined8 *)(auStack_128 + lVar2 + -8) = 0x1804001be;
    FUN_180540530((longlong)&local_e8 + lVar2,uVar1);
    puVar10 = auStack_128 + lVar2;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  iVar11 = 0;
  do {
    iVar9 = 0;
    do {
      lVar5 = local_e0;
      iVar4 = local_e8;
      lVar8 = (longlong)(iVar11 + iVar9 * 3);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x240);
      local_d0 = *(undefined4 *)(lVar2 + lVar8 * 0x10);
      local_cc = *(undefined4 *)(lVar2 + 4 + lVar8 * 0x10);
      local_d8 = *(undefined4 *)(lVar2 + 8 + lVar8 * 0x10);
      local_d4 = *(undefined4 *)(lVar2 + 0xc + lVar8 * 0x10);
      if (iVar11 == 0) {
        fVar13 = *param_2;
        fVar14 = fVar13 - param_5;
      }
      else if (iVar11 == 1) {
        fVar13 = *param_3;
        fVar14 = *param_2;
      }
      else if (iVar11 == 2) {
        fVar14 = *param_3;
        fVar13 = fVar14 + param_5;
      }
      else {
        fVar14 = 0.0;
        fVar13 = 0.0;
      }
      if (iVar9 == 0) {
        fVar12 = param_2[1];
        fVar15 = fVar12 - param_5;
      }
      else if (iVar9 == 1) {
        fVar12 = param_3[1];
        fVar15 = param_2[1];
      }
      else if (iVar9 == 2) {
        fVar15 = param_3[1];
        fVar12 = fVar15 + param_5;
      }
      else {
        fVar15 = 0.0;
        fVar12 = 0.0;
      }
      fVar13 = *param_6 + fVar13;
      fVar14 = *param_6 + fVar14;
      fVar12 = param_6[1] + fVar12;
      fVar15 = param_6[1] + fVar15;
      if (uStack_e4 == 0) {
        *(uint *)(puVar10 + 0x28) = param_4;
        *(undefined4 **)(puVar10 + 0x20) = &local_d8;
        local_c8 = fVar13;
        local_c4 = fVar12;
        local_c0 = fVar14;
        local_bc = fVar15;
        *(undefined8 *)(puVar10 + -8) = 0x180400343;
        FUN_1803fc4a0(param_1,&local_c0,&local_c8,&local_d0);
      }
      else {
        *(uint *)(puVar10 + 0x38) = param_4;
        if (bVar3) {
          *(int *)(puVar10 + 0x30) = iVar4;
          *(longlong *)(puVar10 + 0x28) = lVar5;
          local_b8 = fVar13;
          local_b4 = fVar12;
          local_b0 = fVar14;
          local_ac = fVar15;
          *(undefined4 **)(puVar10 + 0x20) = &local_d8;
          *(undefined8 *)(puVar10 + -8) = 0x180400383;
          FUN_1803ff9b0(param_1,&local_b0,&local_b8,&local_d0);
        }
        else {
          uVar1 = *(undefined8 *)param_2;
          *(undefined8 *)(puVar10 + 0x30) = *(undefined8 *)param_3;
          *(undefined8 *)(puVar10 + 0x28) = uVar1;
          *(undefined4 **)(puVar10 + 0x20) = &local_d8;
          local_a8 = fVar13;
          local_a4 = fVar12;
          local_a0 = fVar14;
          local_9c = fVar15;
          *(undefined8 *)(puVar10 + -8) = 0x1804003c3;
          FUN_1803fed70(param_1,&local_a0,&local_a8,&local_d0);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
LAB_1804003e7:
  *(undefined8 *)(puVar10 + -8) = 0x1804003f3;
  return;
}



/* ===== 180400420 FUN_180400420 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180400420(int *param_1,float *param_2,uint param_3,float param_4,float param_5,
                  float *param_6)

{
  float *pfVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float *pfVar9;
  int iVar10;
  ushort *puVar11;
  ulonglong uVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined8 auStack_1a0 [4];
  float afStack_180 [2];
  float local_178 [8];
  ushort *local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float *local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  int local_118;
  int *local_110;
  float local_108;
  int local_104;
  float *local_100;
  ulonglong local_f8;
  
  uVar6 = DAT_1808adec0;
  fVar33 = DAT_1808ac34c;
  fVar20 = DAT_1808abfbc;
  local_f8 = DAT_180919500 ^ (ulonglong)local_178;
  uVar15 = param_1[0xc];
  local_110 = param_1;
  local_148 = param_4;
  uVar12 = (ulonglong)(int)param_3;
  local_140 = param_2;
  local_178[1] = (float)param_3;
  iVar17 = 1;
  if ((param_2[5] - param_2[1]) * param_2[2] + (param_2[3] - param_2[5]) * *param_2 +
      (param_2[1] - param_2[3]) * param_2[4] < 0.0) {
    iVar17 = -1;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe) + 0x240);
  local_178[6] = *(float *)(lVar3 + 0x9c);
  local_178[4] = *(float *)(lVar3 + 0x98);
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x18) + 8) + 0x38);
  fVar25 = (float)*(int *)(lVar4 + 0x24);
  local_150 = DAT_1808ac34c / fVar25;
  fVar19 = (float)*(int *)(lVar4 + 0x28);
  local_118 = param_3 * 0xc;
  uVar5 = (longlong)local_118 + 0xf;
  local_14c = DAT_1808ac34c / fVar19;
  local_138 = *(float *)(lVar3 + 0x90) - *(float *)(lVar3 + 0x98);
  local_144 = local_178[6] - local_178[6];
  local_120 = fVar25 * local_138;
  local_11c = (local_178[6] - local_178[6]) * fVar19;
  if (uVar5 <= (ulonglong)(longlong)local_118) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_1a0[0] = 0x1804005c5;
  lVar3 = -(uVar5 & 0xfffffffffffffff0);
  iVar10 = 0;
  pfVar1 = (float *)((longlong)local_178 + lVar3);
  local_100 = pfVar1 + uVar12 * 2;
  uVar5 = uVar12;
  if (3 < (int)param_3) {
    fVar19 = (float)iVar17;
    do {
      lVar7 = (longlong)iVar10;
      lVar4 = (longlong)((iVar10 + 1) % (int)uVar5);
      fVar28 = param_2[lVar4 * 2 + 1] - param_2[lVar7 * 2 + 1];
      fVar26 = (float)((uint)(param_2[lVar4 * 2] - param_2[lVar7 * 2]) ^ uVar6);
      fVar25 = fVar26 * fVar26 + fVar28 * fVar28;
      if (fVar25 <= 0.0) {
        fVar25 = fVar20;
      }
      else if (fVar25 < 0.0) {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x18040065f;
        fVar25 = (float)FUN_18051af10();
        uVar5 = (ulonglong)param_3;
        param_2 = local_140;
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      *(float *)((longlong)local_178 + lVar7 * 8 + lVar3 + 4) = (fVar26 / fVar25) * fVar19;
      lVar4 = (longlong)((iVar10 + 2) % (int)uVar5);
      pfVar1[lVar7 * 2] = (fVar28 / fVar25) * fVar19;
      fVar28 = param_2[lVar4 * 2 + 1] - param_2[lVar7 * 2 + 3];
      fVar26 = (float)((uint)(param_2[lVar4 * 2] - param_2[lVar7 * 2 + 2]) ^ uVar6);
      fVar25 = fVar26 * fVar26 + fVar28 * fVar28;
      if (fVar25 <= 0.0) {
        fVar25 = fVar20;
      }
      else if (fVar25 < 0.0) {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x1804006e3;
        fVar25 = (float)FUN_18051af10();
        uVar5 = (ulonglong)param_3;
        param_2 = local_140;
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      *(float *)((longlong)local_178 + lVar7 * 8 + lVar3 + 0xc) = (fVar26 / fVar25) * fVar19;
      lVar4 = (longlong)((iVar10 + 3) % (int)uVar5);
      *(float *)((longlong)local_178 + lVar7 * 8 + lVar3 + 8) = (fVar28 / fVar25) * fVar19;
      fVar28 = param_2[lVar4 * 2 + 1] - param_2[lVar7 * 2 + 5];
      fVar26 = (float)((uint)(param_2[lVar4 * 2] - param_2[lVar7 * 2 + 4]) ^ uVar6);
      fVar25 = fVar26 * fVar26 + fVar28 * fVar28;
      if (fVar25 <= 0.0) {
        fVar25 = fVar20;
      }
      else if (fVar25 < 0.0) {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400768;
        fVar25 = (float)FUN_18051af10();
        uVar5 = (ulonglong)param_3;
        param_2 = local_140;
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      iVar10 = iVar10 + 4;
      *(float *)((longlong)local_178 + lVar7 * 8 + lVar3 + 0x14) = (fVar26 / fVar25) * fVar19;
      lVar4 = (longlong)(iVar10 % (int)uVar5);
      *(float *)((longlong)local_178 + lVar7 * 8 + lVar3 + 0x10) = (fVar28 / fVar25) * fVar19;
      fVar28 = param_2[lVar4 * 2 + 1] - param_2[lVar7 * 2 + 7];
      fVar26 = (float)((uint)(param_2[lVar4 * 2] - param_2[lVar7 * 2 + 6]) ^ uVar6);
      fVar25 = fVar26 * fVar26 + fVar28 * fVar28;
      if (fVar25 <= 0.0) {
        fVar25 = fVar20;
      }
      else if (fVar25 < 0.0) {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x1804007ef;
        fVar25 = (float)FUN_18051af10();
        uVar5 = (ulonglong)param_3;
        param_2 = local_140;
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      *(float *)((longlong)local_178 + lVar7 * 8 + lVar3 + 0x18) = (fVar28 / fVar25) * fVar19;
      *(float *)((longlong)local_178 + lVar7 * 8 + lVar3 + 0x1c) = (fVar26 / fVar25) * fVar19;
    } while (iVar10 < (int)(param_3 - 3));
  }
  piVar16 = local_110;
  if (iVar10 < (int)uVar5) {
    do {
      lVar7 = (longlong)iVar10;
      iVar10 = iVar10 + 1;
      lVar4 = (longlong)(iVar10 % (int)uVar5);
      fVar26 = param_2[lVar4 * 2 + 1] - param_2[lVar7 * 2 + 1];
      fVar25 = (float)((uint)(param_2[lVar4 * 2] - param_2[lVar7 * 2]) ^ uVar6);
      fVar19 = fVar25 * fVar25 + fVar26 * fVar26;
      if (fVar19 <= 0.0) {
        fVar19 = fVar20;
      }
      else if (fVar19 < 0.0) {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400896;
        fVar19 = (float)FUN_18051af10();
        uVar5 = (ulonglong)param_3;
        param_2 = local_140;
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      pfVar1[lVar7 * 2] = (fVar26 / fVar19) * (float)iVar17;
      *(float *)((longlong)local_178 + lVar7 * 8 + lVar3 + 4) = (fVar25 / fVar19) * (float)iVar17;
    } while (iVar10 < (int)uVar5);
  }
  fVar28 = DAT_1808ac340;
  fVar26 = DAT_1808ac1f4;
  fVar25 = *(float *)((longlong)afStack_180 + uVar12 * 8 + lVar3);
  pfVar18 = pfVar1 + uVar12 * 2;
  fVar19 = *(float *)((longlong)afStack_180 + uVar12 * 8 + lVar3 + 4);
  uVar8 = 0;
  iVar17 = (int)uVar5;
  if (0 < iVar17) {
    do {
      fVar29 = pfVar1[uVar8 * 2];
      fVar34 = *(float *)((longlong)local_178 + uVar8 * 8 + lVar3 + 4);
      fVar19 = fVar19 * fVar34 + fVar25 * fVar29;
      if (fVar28 <= fVar19) {
        fVar19 = fVar33;
      }
      else {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x18040091b;
        auVar22._0_8_ = FUN_18053eb30();
        auVar22._8_8_ = extraout_XMM0_Qb;
        if (fVar19 <= 0.0) {
          fVar19 = (float)auVar22._0_8_;
          auVar22._0_4_ = fVar19 * fVar26;
        }
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ = auVar22._0_4_ * fVar26;
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400930;
        fVar19 = (float)FUN_180517200(auVar23._0_8_);
        uVar5 = (ulonglong)param_3;
        fVar19 = fVar33 / fVar19;
      }
      pfVar18[uVar8] = fVar19;
      uVar6 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar6;
      iVar17 = (int)uVar5;
      fVar19 = fVar34;
      fVar25 = fVar29;
    } while ((int)uVar6 < iVar17);
  }
  iVar10 = local_118;
  local_104 = iVar17 * 10;
  *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x18040096c;
  FUN_1803fc3a0(piVar16,iVar10,iVar17 * 10);
  pfVar13 = local_140;
  fVar33 = *(float *)((longlong)afStack_180 + uVar12 * 8 + lVar3);
  fVar19 = *(float *)((longlong)afStack_180 + uVar12 * 8 + lVar3 + 4);
  puVar11 = *(ushort **)(piVar16 + 0x12);
  uVar6 = (uint)*(ushort *)(piVar16 + 0xd);
  pfVar9 = *(float **)(piVar16 + 0x10);
  local_158 = puVar11;
  local_178[0]._0_2_ = *(ushort *)(piVar16 + 0xd);
  local_178[2] = *local_140 + *param_6;
  local_178[3] = local_140[1] + param_6[1];
  if ((uVar15 & 4) == 0) {
    if (0 < (int)local_178[1]) {
      fVar25 = local_178[1];
      uVar15 = 0;
      fVar20 = local_178[2];
      do {
        fVar29 = local_148;
        uVar14 = uVar15 + 1;
        uVar12 = (ulonglong)uVar15;
        fVar26 = pfVar1[uVar12 * 2];
        fVar28 = *(float *)((longlong)local_178 + uVar12 * 8 + lVar3 + 4);
        local_12c = pfVar18[uVar12];
        lVar4 = (longlong)((int)uVar14 % (int)fVar25);
        fVar34 = fVar26 * fVar33 + fVar28 * fVar19;
        local_178[5] = pfVar13[lVar4 * 2 + 1] + param_6[1];
        local_130 = *param_6 + pfVar13[lVar4 * 2];
        local_134 = pfVar18[lVar4];
        local_178[2] = fVar20;
        if (fVar34 < DAT_1808ac340) {
          fVar21 = local_12c * param_5;
          fVar27 = local_120 * local_12c;
          fVar30 = local_11c * local_12c;
          uVar15 = (fVar34 <= 0.0) + 1;
          iVar17 = 0;
          fVar20 = local_150 * fVar27;
          local_124 = fVar20;
          fVar25 = local_14c * fVar30;
          do {
            if (1 < uVar15) {
              if (iVar17 == 0) {
                fVar26 = fVar26 + fVar33;
                fVar28 = fVar28 + fVar19;
                fVar34 = fVar26 * fVar26 + fVar28 * fVar28;
                if (fVar34 <= _DAT_1808abf44) {
                  fVar26 = fVar26 / DAT_1808abfbc;
                  fVar28 = fVar28 / DAT_1808abfbc;
                }
                else if (fVar34 < 0.0) {
                  *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x1804010c5;
                  fVar34 = (float)FUN_18051af10();
                  fVar26 = fVar26 / fVar34;
                  fVar28 = fVar28 / fVar34;
                }
                else {
                  fVar26 = fVar26 / SQRT(fVar34);
                  fVar28 = fVar28 / SQRT(fVar34);
                }
              }
              else {
                fVar26 = pfVar1[uVar12 * 2];
                fVar28 = *(float *)((longlong)local_178 + uVar12 * 8 + lVar3 + 4);
              }
              fVar34 = fVar26 * fVar33 + fVar28 * fVar19;
            }
            *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x18040110b;
            FUN_18053eb30();
            *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180401110;
            fVar24 = (float)FUN_180517790();
            iVar17 = iVar17 + 1;
            pfVar9[2] = local_178[4];
            pfVar9[3] = local_178[6];
            *pfVar9 = local_178[2];
            pfVar9[1] = local_178[3];
            pfVar9[4] = fVar29;
            pfVar9[9] = fVar29;
            pfVar9[7] = fVar20 + local_178[4];
            pfVar9[5] = fVar26 * fVar21 + local_178[2];
            pfVar9[6] = fVar28 * fVar21 + local_178[3];
            pfVar9[8] = fVar25 + local_178[6];
            pfVar9[0xe] = fVar29;
            pfVar9[10] = fVar33 * fVar21 + local_178[2];
            pfVar9[0xb] = fVar19 * fVar21 + local_178[3];
            pfVar9[0xc] = (fVar27 * fVar34 + fVar30 * fVar24) * local_150 + local_178[4];
            pfVar9[0xd] = (fVar27 * fVar24 + fVar30 * fVar34) * local_14c + local_178[6];
            pfVar9 = pfVar9 + 0xf;
            *local_158 = local_178[0]._0_2_;
            local_158[1] = local_178[0]._0_2_ + 1;
            uVar6 = (uint)(ushort)(local_178[0]._0_2_ + 3);
            local_158[2] = local_178[0]._0_2_ + 2;
            puVar11 = local_158 + 3;
            local_178[0]._0_2_ = local_178[0]._0_2_ + 3;
            local_158 = puVar11;
            fVar33 = fVar26;
            fVar19 = fVar28;
          } while (iVar17 < (int)uVar15);
          pfVar13 = local_140;
          pfVar18 = local_100;
          fVar25 = local_178[1];
        }
        fVar34 = local_12c;
        fVar20 = local_130;
        fVar29 = local_134;
        fVar21 = (local_178[5] - local_178[3]) * (local_178[5] - local_178[3]) +
                 (local_130 - local_178[2]) * (local_130 - local_178[2]);
        if (0.0 < fVar21) {
          if (fVar21 < 0.0) {
            *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x18040129d;
            fVar21 = (float)FUN_18051af10();
          }
          else {
            fVar21 = SQRT(fVar21);
          }
          if (fVar21 <= DAT_1808abf94) {
            uVar6 = (uint)local_178[0]._0_2_;
            puVar11 = local_158;
          }
          else {
            pfVar9[4] = local_148;
            *pfVar9 = local_178[2];
            pfVar9[1] = local_178[3];
            pfVar9[2] = local_178[4];
            pfVar9[3] = local_178[6];
            pfVar9[9] = local_148;
            pfVar9[5] = fVar20;
            pfVar9[6] = local_178[5];
            pfVar9[7] = local_178[4];
            pfVar9[8] = local_178[6];
            pfVar9[0xe] = local_148;
            pfVar9[0xb] = fVar28 * param_5 * fVar29 + local_178[5];
            pfVar9[10] = fVar26 * param_5 * fVar29 + fVar20;
            pfVar9[0xc] = local_138 * fVar29 + local_178[4];
            pfVar9[0xd] = local_144 * fVar29 + local_178[6];
            pfVar9[0x13] = local_148;
            pfVar9[0xf] = fVar26 * param_5 * fVar34 + local_178[2];
            pfVar9[0x10] = fVar28 * param_5 * fVar34 + local_178[3];
            pfVar9[0x12] = fVar34 * local_144 + local_178[6];
            pfVar9[0x11] = fVar34 * local_138 + local_178[4];
            pfVar9 = pfVar9 + 0x14;
            *local_158 = local_178[0]._0_2_;
            local_158[1] = local_178[0]._0_2_ + 1;
            local_158[2] = local_178[0]._0_2_ + 2;
            local_158[4] = local_178[0]._0_2_ + 2;
            local_158[3] = local_178[0]._0_2_;
            local_158[5] = local_178[0]._0_2_ + 3;
            local_158 = local_158 + 6;
            uVar6 = (uint)(ushort)(local_178[0]._0_2_ + 4);
            local_178[0]._0_2_ = local_178[0]._0_2_ + 4;
            puVar11 = local_158;
          }
        }
        local_178[2] = fVar20;
        local_178[3] = local_178[5];
        uVar15 = uVar14;
      } while ((int)uVar14 < (int)fVar25);
    }
  }
  else {
    fVar28 = fVar33 + *pfVar1;
    fVar29 = fVar19 + *(float *)((longlong)local_178 + lVar3 + 4);
    fVar25 = fVar28 * fVar28 + fVar29 * fVar29;
    if (0.0 < fVar25) {
      if (fVar25 < 0.0) {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400a08;
        fVar20 = (float)FUN_18051af10();
        uVar6 = (uint)local_178[0]._0_2_;
      }
      else {
        fVar20 = SQRT(fVar25);
      }
    }
    fVar34 = 0.0;
    fVar25 = local_178[2] - (fVar28 / fVar20) * fVar26;
    local_178[3] = local_178[3] - (fVar29 / fVar20) * fVar26;
    local_178[2] = fVar25;
    puVar11 = local_158;
    fVar20 = local_178[1];
    if ((int)local_178[1] < 1) goto LAB_180401417;
    do {
      fVar28 = *param_6;
      uVar15 = (int)fVar34 + 1;
      uVar12 = (ulonglong)(uint)fVar34;
      fVar27 = pfVar1[uVar12 * 2];
      fVar30 = *(float *)((longlong)local_178 + uVar12 * 8 + lVar3 + 4);
      fVar29 = local_100[uVar12];
      lVar4 = (longlong)((int)uVar15 % (int)fVar20);
      local_130 = fVar29;
      local_124 = (float)uVar15;
      fVar31 = fVar27 + pfVar1[lVar4 * 2];
      fVar32 = fVar30 + *(float *)((longlong)local_178 + lVar4 * 8 + lVar3 + 4);
      local_178[5] = pfVar13[lVar4 * 2 + 1] + param_6[1];
      fVar21 = local_100[lVar4];
      fVar34 = pfVar13[lVar4 * 2];
      local_128 = fVar21;
      fVar24 = fVar32 * fVar32 + fVar31 * fVar31;
      local_178[2] = fVar25;
      if (fVar24 <= 0.0) {
        fVar25 = DAT_1808abfbc;
      }
      else if (fVar24 < 0.0) {
        *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400b01;
        fVar25 = (float)FUN_18051af10();
      }
      else {
        fVar25 = SQRT(fVar24);
      }
      fVar24 = local_148;
      local_12c = (fVar28 + fVar34) - (fVar31 / fVar25) * fVar26;
      fVar28 = fVar27 * fVar33 + fVar30 * fVar19;
      local_178[5] = local_178[5] - (fVar32 / fVar25) * fVar26;
      fVar34 = (float)uVar15;
      if (fVar28 < DAT_1808ac340) {
        fVar26 = fVar29 * param_5;
        fVar34 = local_120 * fVar29;
        fVar20 = local_150 * fVar34;
        fVar29 = local_11c * fVar29;
        uVar15 = (fVar28 <= 0.0) + 1;
        local_108 = fVar20;
        iVar17 = 0;
        fVar25 = local_14c * fVar29;
        puVar11 = local_158;
        do {
          if (1 < uVar15) {
            if (iVar17 == 0) {
              fVar27 = fVar27 + fVar33;
              fVar30 = fVar30 + fVar19;
              fVar28 = fVar30 * fVar30 + fVar27 * fVar27;
              if (fVar28 <= 0.0) {
                fVar27 = fVar27 / DAT_1808abfbc;
                fVar30 = fVar30 / DAT_1808abfbc;
              }
              else if (fVar28 < 0.0) {
                *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400c21;
                fVar28 = (float)FUN_18051af10();
                fVar27 = fVar27 / fVar28;
                fVar30 = fVar30 / fVar28;
              }
              else {
                fVar27 = fVar27 / SQRT(fVar28);
                fVar30 = fVar30 / SQRT(fVar28);
              }
            }
            else {
              fVar27 = pfVar1[uVar12 * 2];
              fVar30 = *(float *)((longlong)local_178 + uVar12 * 8 + lVar3 + 4);
            }
            fVar28 = fVar27 * fVar33 + fVar30 * fVar19;
          }
          *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400c67;
          FUN_18053eb30();
          *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400c6c;
          fVar21 = (float)FUN_180517790();
          iVar17 = iVar17 + 1;
          pfVar9[2] = local_178[4];
          pfVar9[3] = local_178[6];
          *pfVar9 = local_178[2];
          pfVar9[1] = local_178[3];
          pfVar9[4] = fVar24;
          pfVar9[9] = fVar24;
          pfVar9[7] = fVar20 + local_178[4];
          pfVar9[5] = fVar27 * fVar26 + local_178[2];
          pfVar9[6] = fVar30 * fVar26 + local_178[3];
          pfVar9[8] = fVar25 + local_178[6];
          pfVar9[0xe] = fVar24;
          pfVar9[10] = fVar33 * fVar26 + local_178[2];
          pfVar9[0xb] = fVar19 * fVar26 + local_178[3];
          pfVar9[0xc] = (fVar29 * fVar21 + fVar34 * fVar28) * local_150 + local_178[4];
          pfVar9[0xd] = (fVar34 * fVar21 + fVar29 * fVar28) * local_14c + local_178[6];
          pfVar9 = pfVar9 + 0xf;
          *puVar11 = local_178[0]._0_2_;
          puVar11[1] = local_178[0]._0_2_ + 1;
          puVar11[2] = local_178[0]._0_2_ + 2;
          puVar11 = puVar11 + 3;
          local_178[0]._0_2_ = local_178[0]._0_2_ + 3;
          fVar33 = fVar27;
          fVar19 = fVar30;
        } while (iVar17 < (int)uVar15);
        local_158 = puVar11;
        pfVar13 = local_140;
        fVar29 = local_130;
        fVar26 = DAT_1808ac1f4;
        fVar21 = local_128;
        fVar20 = local_178[1];
        fVar34 = local_124;
      }
      fVar25 = local_12c;
      fVar28 = (local_178[5] - local_178[3]) * (local_178[5] - local_178[3]) +
               (local_12c - local_178[2]) * (local_12c - local_178[2]);
      if (0.0 < fVar28) {
        if (fVar28 < 0.0) {
          *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x180400df8;
          fVar28 = (float)FUN_18051af10();
        }
        else {
          fVar28 = SQRT(fVar28);
        }
        if (DAT_1808abf94 < fVar28) {
          pfVar9[4] = local_148;
          *pfVar9 = local_178[2];
          pfVar9[1] = local_178[3];
          pfVar9[2] = local_178[4];
          pfVar9[3] = local_178[6];
          pfVar9[9] = local_148;
          pfVar9[5] = fVar25;
          pfVar9[6] = local_178[5];
          pfVar9[7] = local_178[4];
          pfVar9[8] = local_178[6];
          pfVar9[0xe] = local_148;
          pfVar9[0xb] = fVar30 * param_5 * fVar21 + local_178[5];
          pfVar9[10] = fVar27 * param_5 * fVar21 + fVar25;
          pfVar9[0xc] = local_138 * fVar21 + local_178[4];
          pfVar9[0xd] = local_144 * fVar21 + local_178[6];
          pfVar9[0x13] = local_148;
          pfVar9[0xf] = fVar27 * param_5 * fVar29 + local_178[2];
          pfVar9[0x10] = fVar30 * param_5 * fVar29 + local_178[3];
          pfVar9[0x11] = fVar29 * local_138 + local_178[4];
          pfVar9[0x12] = fVar29 * local_144 + local_178[6];
          pfVar9 = pfVar9 + 0x14;
          *local_158 = local_178[0]._0_2_;
          local_158[1] = local_178[0]._0_2_ + 1;
          local_158[2] = local_178[0]._0_2_ + 2;
          local_158[4] = local_178[0]._0_2_ + 2;
          local_158[3] = local_178[0]._0_2_;
          local_158[5] = local_178[0]._0_2_ + 3;
          local_158 = local_158 + 6;
          local_178[0]._0_2_ = local_178[0]._0_2_ + 4;
        }
      }
      uVar6 = (uint)local_178[0]._0_2_;
      local_178[2] = fVar25;
      local_178[3] = local_178[5];
      puVar11 = local_158;
    } while ((int)fVar34 < (int)fVar20);
  }
  piVar16 = local_110;
LAB_180401417:
  lVar4 = *(longlong *)(piVar16 + 0x12);
  lVar7 = *(longlong *)(piVar16 + 0x10);
  *(ushort **)(piVar16 + 0x12) = puVar11;
  local_118 = local_118 - (int)((longlong)puVar11 - lVar4 >> 1);
  piVar16[0xd] = uVar6;
  *(float **)(piVar16 + 0x10) = pfVar9;
  piVar2 = (int *)(*(longlong *)(piVar16 + 2) + -0x20 + (longlong)*piVar16 * 0x48);
  *piVar2 = *piVar2 - local_118;
  piVar16[8] = piVar16[8] + ((int)((longlong)pfVar9 - lVar7 >> 2) * -0x33333333 - local_104);
  piVar16[4] = piVar16[4] - local_118;
  *(undefined8 *)((longlong)auStack_1a0 + lVar3) = 0x18040147b;
  return;
}



/* ===== 1804014e0 FUN_1804014e0 ===== */

void FUN_1804014e0(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[2]) {
    do {
      if (iVar2 == *param_1) {
        puVar1 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 4));
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      FUN_1803d6150(*(longlong *)(param_1 + 4) + (longlong)iVar2 * 0x20);
      FUN_1803d6150(((longlong)iVar2 * 0x20 | 0x10U) + *(longlong *)(param_1 + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[2]);
  }
  *param_1 = 0;
  param_1[1] = 1;
  FUN_1803d6150(param_1 + 2);
  return;
}



/* ===== 180401570 FUN_180401570 ===== */

void FUN_180401570(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_3) {
    FUN_18040c520(param_1 + 8,param_3);
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 < param_3) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      iVar3 = param_3;
      if (param_3 < iVar2) {
        iVar3 = iVar2;
      }
      FUN_18040c520(param_1 + 8,iVar3);
    }
    *(int *)(param_1 + 8) = param_3;
  }
  *(int *)(param_1 + 4) = param_3;
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  uVar5 = 1;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  if (1 < param_3) {
    do {
      lVar6 = (ulonglong)uVar5 * 0x20;
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar6);
      if ((int)uVar5 < iVar1) {
        iVar2 = *(int *)((longlong)puVar4 + 4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + (iVar2 + 1 >> 1);
          iVar3 = 0;
          if (0 < iVar2) {
            iVar3 = iVar2;
          }
          FUN_1803f71d0(puVar4,iVar3);
        }
        *(undefined4 *)puVar4 = 0;
        iVar2 = *(int *)(lVar6 + 0x14 + *(longlong *)(param_1 + 0x10));
        lVar6 = lVar6 + *(longlong *)(param_1 + 0x10);
        if (iVar2 < 0) {
          iVar2 = (iVar2 + 1 >> 1) + iVar2;
          iVar3 = 0;
          if (0 < iVar2) {
            iVar3 = iVar2;
          }
          FUN_1803f6b20(lVar6 + 0x10,iVar3);
        }
        *(undefined4 *)(lVar6 + 0x10) = 0;
      }
      else if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < param_3);
  }
  return;
}



/* ===== 1804016a0 FUN_1804016a0 ===== */

void FUN_1804016a0(longlong param_1,uint *param_2)

{
  uint *puVar1;
  void *_Buf2;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  void *_Buf1;
  int iVar11;
  uint uVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int local_res8;
  
  if (*(int *)(param_1 + 4) < 2) {
    return;
  }
  FUN_180401a80(param_1,param_2,0);
  uVar8 = *param_2;
  puVar1 = param_2 + 2;
  if (0 < (int)uVar8) {
    do {
      if ((*(int *)(*(longlong *)puVar1 + -0x20 + (ulonglong)uVar8 * 0x48) != 0) ||
         (*(longlong *)(*(longlong *)puVar1 + -0x18 + (ulonglong)uVar8 * 0x48) != 0)) break;
      uVar8 = uVar8 - 1;
      *param_2 = uVar8;
    } while (0 < (int)uVar8);
  }
  iVar17 = 0;
  iVar15 = 0;
  if ((*(int *)(param_1 + 4) < 1) || ((int)uVar8 < 1)) {
    _Buf1 = (void *)0x0;
  }
  else {
    _Buf1 = (void *)(*(longlong *)puVar1 + ((longlong)(int)uVar8 + -1) * 0x48);
    if (_Buf1 != (void *)0x0) {
      iVar11 = *(int *)((longlong)_Buf1 + 0x28) + *(int *)((longlong)_Buf1 + 0x24);
      goto LAB_18040176c;
    }
  }
  iVar11 = 0;
LAB_18040176c:
  local_res8 = 1;
  if (1 < *(int *)(param_1 + 4)) {
    iVar15 = 0;
    do {
      piVar13 = (int *)((longlong)local_res8 * 0x20 + *(longlong *)(param_1 + 0x10));
      iVar9 = *piVar13;
      if (iVar9 < 1) {
LAB_180401857:
        iVar15 = iVar15 + piVar13[4];
        iVar17 = iVar17 + iVar9;
        if (0 < iVar9) goto LAB_180401865;
      }
      else {
        _Buf2 = *(void **)(piVar13 + 2);
        if ((*(int *)((longlong)_Buf2 + (longlong)iVar9 * 0x48 + -0x20) == 0) &&
           (*(longlong *)((longlong)_Buf2 + (longlong)iVar9 * 0x48 + -0x18) == 0)) {
          iVar9 = iVar9 + -1;
          *piVar13 = iVar9;
          if (iVar9 < 1) goto LAB_180401857;
        }
        if ((((_Buf1 != (void *)0x0) && (iVar5 = memcmp(_Buf1,_Buf2,0x24), iVar5 == 0)) &&
            (*(longlong *)((longlong)_Buf1 + 0x30) == 0)) &&
           (*(longlong *)((longlong)_Buf2 + 0x30) == 0)) {
          *(int *)((longlong)_Buf1 + 0x28) =
               *(int *)((longlong)_Buf1 + 0x28) + *(int *)((longlong)_Buf2 + 0x28);
          iVar11 = iVar11 + *(int *)((longlong)_Buf2 + 0x28);
          FUN_180540530(*(longlong *)(piVar13 + 2),*(longlong *)(piVar13 + 2) + 0x48,
                        (longlong)*piVar13 * 0x48 + -0x48);
          *piVar13 = *piVar13 + -1;
          iVar9 = *piVar13;
          if (iVar9 < 1) goto LAB_180401857;
        }
        iVar17 = iVar17 + iVar9;
        iVar15 = iVar15 + piVar13[4];
        _Buf1 = (void *)(*(longlong *)(piVar13 + 2) + (longlong)(iVar9 + -1) * 0x48);
LAB_180401865:
        iVar9 = 0;
        do {
          lVar7 = (longlong)iVar9;
          iVar9 = iVar9 + 1;
          *(int *)(*(longlong *)(piVar13 + 2) + 0x24 + lVar7 * 0x48) = iVar11;
          iVar11 = iVar11 + *(int *)(*(longlong *)(piVar13 + 2) + 0x28 + lVar7 * 0x48);
        } while (iVar9 < *piVar13);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < *(int *)(param_1 + 4));
  }
  uVar8 = 8;
  uVar6 = param_2[1];
  uVar12 = *param_2 + iVar17;
  if ((int)uVar6 < (int)uVar12) {
    if (uVar6 == 0) {
      uVar6 = 8;
    }
    else {
      uVar6 = (int)uVar6 / 2 + uVar6;
    }
    uVar3 = uVar12;
    if ((int)uVar12 < (int)uVar6) {
      uVar3 = uVar6;
    }
    FUN_1803f71d0(param_2,uVar3);
  }
  *param_2 = uVar12;
  uVar6 = param_2[5];
  uVar12 = param_2[4] + iVar15;
  if ((int)uVar6 < (int)uVar12) {
    if (uVar6 != 0) {
      uVar8 = uVar6 + (int)uVar6 / 2;
    }
    uVar6 = uVar12;
    if ((int)uVar12 < (int)uVar8) {
      uVar6 = uVar8;
    }
    FUN_1803f6b20(param_2 + 4,uVar6);
  }
  iVar11 = 1;
  param_2[4] = uVar12;
  lVar7 = *(longlong *)puVar1 + ((longlong)(int)*param_2 - (longlong)iVar17) * 0x48;
  lVar16 = *(longlong *)(param_2 + 6) + ((longlong)(int)uVar12 - (longlong)iVar15) * 2;
  if (1 < *(int *)(param_1 + 4)) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar14 = (longlong)iVar11 * 0x20;
      if (*(int *)(lVar2 + lVar14) != 0) {
        lVar10 = (longlong)*(int *)(lVar2 + lVar14) * 0x48;
        FUN_180540530(lVar7,*(undefined8 *)(lVar2 + 8 + lVar14),lVar10);
        lVar7 = lVar7 + lVar10;
      }
      iVar15 = *(int *)(lVar2 + 0x10 + lVar14);
      if (iVar15 != 0) {
        lVar10 = (longlong)iVar15 * 2;
        FUN_180540530(lVar16,*(undefined8 *)(lVar2 + 0x18 + lVar14),lVar10);
        lVar16 = lVar16 + lVar10;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 4));
  }
  *(longlong *)(param_2 + 0x12) = lVar16;
  if ((*param_2 == 0) ||
     (*(longlong *)(*(longlong *)puVar1 + 0x30 + ((longlong)(int)*param_2 + -1) * 0x48) != 0)) {
    FUN_1803fbe60(param_2);
  }
  lVar7 = *(longlong *)puVar1 + (longlong)(int)*param_2 * 0x48;
  if (*(int *)(*(longlong *)puVar1 + -0x20 + (longlong)(int)*param_2 * 0x48) == 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(lVar7 + -0x48) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(lVar7 + -0x40) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(lVar7 + -0x38) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(lVar7 + -0x30) = uVar4;
    *(uint *)(lVar7 + -0x28) = param_2[0x20];
    *(undefined4 *)(param_1 + 4) = 1;
    return;
  }
  iVar15 = memcmp((void *)(lVar7 + -0x48),param_2 + 0x18,0x24);
  if (iVar15 != 0) {
    FUN_1803fbe60(param_2);
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}



/* ===== 180401a80 FUN_180401a80 ===== */

void FUN_180401a80(int *param_1,int *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*param_1 == param_3) {
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 2);
  puVar1 = (undefined8 *)((longlong)*param_1 * 0x20 + *(longlong *)(param_1 + 4));
  *puVar1 = *(undefined8 *)param_2;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 6);
  puVar1 = (undefined8 *)((longlong)*param_1 * 0x20 + 0x10 + *(longlong *)(param_1 + 4));
  *puVar1 = *(undefined8 *)(param_2 + 4);
  puVar1[1] = uVar2;
  *param_1 = param_3;
  puVar1 = (undefined8 *)((longlong)param_3 * 0x20 + *(longlong *)(param_1 + 4));
  uVar2 = puVar1[1];
  *(undefined8 *)param_2 = *puVar1;
  *(undefined8 *)(param_2 + 2) = uVar2;
  puVar1 = (undefined8 *)((longlong)param_3 * 0x20 + 0x10 + *(longlong *)(param_1 + 4));
  uVar2 = puVar1[1];
  *(undefined8 *)(param_2 + 4) = *puVar1;
  *(undefined8 *)(param_2 + 6) = uVar2;
  *(longlong *)(param_2 + 0x12) = *(longlong *)(param_2 + 6) + (longlong)param_2[4] * 2;
  if ((*param_2 != 0) &&
     (puVar1 = (undefined8 *)(*(longlong *)(param_2 + 2) + ((longlong)*param_2 + -1) * 0x48),
     puVar1 != (undefined8 *)0x0)) {
    if (*(int *)(puVar1 + 5) == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x1a);
      *puVar1 = *(undefined8 *)(param_2 + 0x18);
      puVar1[1] = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x1e);
      puVar1[2] = *(undefined8 *)(param_2 + 0x1c);
      puVar1[3] = uVar2;
      *(int *)(puVar1 + 4) = param_2[0x20];
      return;
    }
    iVar3 = memcmp(puVar1,param_2 + 0x18,0x24);
    if (iVar3 == 0) {
      return;
    }
  }
  FUN_1803fbe60(param_2);
  return;
}



/* ===== 180401b60 FUN_180401b60 ===== */

void FUN_180401b60(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = *param_3;
  if ((iVar2 != 0) &&
     (((iVar2 != 1 || (*(int *)(*(longlong *)(param_3 + 2) + 0x28) != 0)) ||
      (*(longlong *)(*(longlong *)(param_3 + 2) + 0x30) != 0)))) {
    if (0 < param_3[0x30]) {
      lVar3 = *(longlong *)(param_3 + 2);
      lVar1 = (longlong)iVar2 * 0x48 + lVar3;
      if ((longlong)iVar2 * 0x48 != 0) {
        do {
          if (((*(longlong *)(lVar3 + 0x30) != 0) && (*(int *)(lVar3 + 0x44) != -1)) &&
             (0 < *(int *)(lVar3 + 0x40))) {
            *(longlong *)(lVar3 + 0x38) =
                 (longlong)*(int *)(lVar3 + 0x44) + *(longlong *)(param_3 + 0x32);
          }
          lVar3 = lVar3 + 0x48;
        } while (lVar3 != lVar1);
      }
    }
    iVar2 = param_2[1];
    if (*param_2 == iVar2) {
      iVar4 = *param_2 + 1;
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
      FUN_18000ba20(param_2,iVar4);
    }
    *(int **)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 8) = param_3;
    *param_2 = *param_2 + 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3[8];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3[4];
  }
  return;
}



/* ===== 180401c50 FUN_180401c50 ===== */

void FUN_180401c50(longlong param_1,int param_2,int param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar8 = 0.0;
  fVar9 = *param_6;
  fVar3 = *param_7;
  fVar4 = param_7[1];
  fVar10 = param_6[1];
  if (param_5[1] - param_4[1] == 0.0) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (fVar4 - fVar10) / (param_5[1] - param_4[1]);
  }
  if (*param_5 - *param_4 != 0.0) {
    fVar8 = (fVar3 - fVar9) / (*param_5 - *param_4);
  }
  pfVar2 = (float *)((longlong)param_2 * 0x14 + *(longlong *)(param_1 + 0x28));
  pfVar1 = (float *)((longlong)param_3 * 0x14 + *(longlong *)(param_1 + 0x28));
  if (pfVar2 < pfVar1) {
    fVar6 = fVar9;
    if (fVar3 <= fVar9) {
      fVar6 = fVar3;
    }
    fVar7 = fVar10;
    if (fVar4 <= fVar10) {
      fVar7 = fVar4;
    }
    if (fVar9 <= fVar3) {
      fVar9 = fVar3;
    }
    if (fVar10 <= fVar4) {
      fVar10 = fVar4;
    }
    if (0x4f < (longlong)param_3 * 0x14 + (longlong)param_2 * -0x14 + 0x13U) {
      do {
        fVar3 = (pfVar2[1] - param_4[1]) * fVar11 + param_6[1];
        fVar4 = (*pfVar2 - *param_4) * fVar8 + *param_6;
        if (fVar7 <= fVar3) {
          fVar5 = fVar10;
          if (fVar3 <= fVar10) {
            fVar5 = fVar3;
          }
        }
        else {
          fVar5 = fVar7;
        }
        if (fVar6 <= fVar4) {
          fVar3 = fVar9;
          if (fVar4 <= fVar9) {
            fVar3 = fVar4;
          }
        }
        else {
          fVar3 = fVar6;
        }
        pfVar2[2] = fVar3;
        pfVar2[3] = fVar5;
        fVar3 = (pfVar2[6] - param_4[1]) * fVar11 + param_6[1];
        fVar4 = (pfVar2[5] - *param_4) * fVar8 + *param_6;
        if (fVar7 <= fVar3) {
          fVar5 = fVar10;
          if (fVar3 <= fVar10) {
            fVar5 = fVar3;
          }
        }
        else {
          fVar5 = fVar7;
        }
        if (fVar6 <= fVar4) {
          fVar3 = fVar9;
          if (fVar4 <= fVar9) {
            fVar3 = fVar4;
          }
        }
        else {
          fVar3 = fVar6;
        }
        pfVar2[7] = fVar3;
        pfVar2[8] = fVar5;
        fVar3 = (pfVar2[0xb] - param_4[1]) * fVar11 + param_6[1];
        fVar4 = (pfVar2[10] - *param_4) * fVar8 + *param_6;
        if (fVar7 <= fVar3) {
          fVar5 = fVar10;
          if (fVar3 <= fVar10) {
            fVar5 = fVar3;
          }
        }
        else {
          fVar5 = fVar7;
        }
        if (fVar6 <= fVar4) {
          fVar3 = fVar9;
          if (fVar4 <= fVar9) {
            fVar3 = fVar4;
          }
        }
        else {
          fVar3 = fVar6;
        }
        pfVar2[0xc] = fVar3;
        pfVar2[0xd] = fVar5;
        fVar3 = (pfVar2[0x10] - param_4[1]) * fVar11 + param_6[1];
        fVar4 = (pfVar2[0xf] - *param_4) * fVar8 + *param_6;
        if (fVar7 <= fVar3) {
          fVar5 = fVar10;
          if (fVar3 <= fVar10) {
            fVar5 = fVar3;
          }
        }
        else {
          fVar5 = fVar7;
        }
        if (fVar6 <= fVar4) {
          fVar3 = fVar9;
          if (fVar4 <= fVar9) {
            fVar3 = fVar4;
          }
        }
        else {
          fVar3 = fVar6;
        }
        pfVar2[0x11] = fVar3;
        pfVar2[0x12] = fVar5;
        pfVar2 = pfVar2 + 0x14;
      } while (pfVar2 < pfVar1 + -0xf);
      if (pfVar1 <= pfVar2) {
        return;
      }
    }
    do {
      fVar4 = (pfVar2[1] - param_4[1]) * fVar11 + param_6[1];
      fVar3 = (*pfVar2 - *param_4) * fVar8 + *param_6;
      if (fVar7 <= fVar4) {
        fVar5 = fVar10;
        if (fVar4 <= fVar10) {
          fVar5 = fVar4;
        }
      }
      else {
        fVar5 = fVar7;
      }
      if (fVar6 <= fVar3) {
        fVar4 = fVar9;
        if (fVar3 <= fVar9) {
          fVar4 = fVar3;
        }
      }
      else {
        fVar4 = fVar6;
      }
      pfVar2[2] = fVar4;
      pfVar2[3] = fVar5;
      pfVar2 = pfVar2 + 5;
    } while (pfVar2 < pfVar1);
  }
  return;
}



/* ===== 180401f30 FUN_180401f30 ===== */

void FUN_180401f30(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    return;
  }
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
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  return;
}



/* ===== 180401ff0 FUN_180401ff0 ===== */

longlong FUN_180401ff0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined2 *)(param_1 + 0x399) = 0;
  *(undefined1 *)(param_1 + 0x39b) = 0;
  *(undefined8 *)(param_1 + 0x39c) = 0;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  FUN_180540170(0,0,0x3b8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x200;
  *(undefined4 *)(param_1 + 0x10) = 0x80;
  *(undefined4 *)(param_1 + 0x14) = 0x2000;
  *(undefined4 *)(param_1 + 0x18) = 0x2000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined4 *)(param_1 + 0x298) = 1;
  *(undefined4 *)(param_1 + 0x29c) = 1;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x388) = 0x10;
  *(undefined4 *)(param_1 + 0x38c) = 1;
  *(undefined4 *)(param_1 + 0x390) = 0x4099999a;
  *(undefined4 *)(param_1 + 0x394) = 0x40733333;
  *(undefined1 *)(param_1 + 0x398) = 1;
  return param_1;
}



/* ===== 180402350 FUN_180402350 ===== */

void FUN_180402350(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  longlong *plVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if ((DAT_180ca0a50 != 0) && ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
    FUN_1803f5060("[font] ImFontAtlas::ClearFonts()\n");
  }
  puVar9 = *(undefined8 **)(param_1 + 0x70);
  puVar1 = puVar9 + *(int *)(param_1 + 0x68);
  if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
    do {
      FUN_180403d70(param_1,*puVar9,0);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  FUN_1804077b0(param_1);
  FUN_1804024c0(param_1);
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      FUN_18040bcf0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar8 * 8));
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x68));
  }
  lVar4 = DAT_180ca0a50;
  lVar3 = *(longlong *)(param_1 + 0x70);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (lVar4 != 0) {
      piVar7 = (int *)(lVar4 + 0x29c0 + (longlong)*(short *)(lVar4 + 0x29bc) * 8);
      if (*piVar7 != *(int *)(lVar4 + 4)) {
        iVar8 = *(short *)(lVar4 + 0x29bc) + 1;
        sVar5 = (short)iVar8 + (short)(iVar8 / 6) * -6;
        *(short *)(lVar4 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar4 + 0x29c0 + (longlong)sVar5 * 8);
        *piVar7 = *(int *)(lVar4 + 4);
        *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar3);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  plVar6 = *(longlong **)(param_1 + 0x2a8);
  plVar2 = plVar6 + *(int *)(param_1 + 0x2a0);
  if (((longlong)*(int *)(param_1 + 0x2a0) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar3 = *plVar6;
      if (*(longlong *)(lVar3 + 0x10) == param_1) {
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  return;
}



/* ===== 1804024c0 FUN_1804024c0 ===== */

void FUN_1804024c0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  short sVar11;
  int iVar12;
  
  puVar8 = *(undefined8 **)(param_1 + 0x70);
  puVar1 = puVar8 + *(int *)(param_1 + 0x68);
  if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
    do {
      FUN_180404b70(param_1,*puVar8);
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  lVar9 = *(longlong *)(param_1 + 0x80);
  lVar5 = (longlong)*(int *)(param_1 + 0x78) * 0xa0;
  lVar2 = lVar5 + lVar9;
  if (lVar5 != 0) {
    do {
      FUN_180404d10();
      lVar9 = lVar9 + 0xa0;
    } while (lVar9 != lVar2);
  }
  plVar10 = *(longlong **)(param_1 + 0x70);
  plVar3 = plVar10 + *(int *)(param_1 + 0x68);
  if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar5 = DAT_180ca0a50;
      lVar2 = *plVar10;
      lVar9 = *(longlong *)(lVar2 + 0x28);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar2 + 0x20) = 0;
        if (lVar5 != 0) {
          lVar6 = (longlong)*(short *)(lVar5 + 0x29bc) * 8;
          if (*(int *)(lVar5 + 0x29c0 + lVar6) != *(int *)(lVar5 + 4)) {
            iVar12 = *(short *)(lVar5 + 0x29bc) + 1;
            sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
            *(short *)(lVar5 + 0x29bc) = sVar11;
            lVar6 = (longlong)sVar11 * 8;
            *(int *)(lVar6 + 0x29c0 + lVar5) = *(int *)(lVar5 + 4);
            *(undefined4 *)(lVar6 + 0x29c4 + lVar5) = 0;
          }
          psVar4 = (short *)(lVar6 + 0x29c6 + lVar5);
          *psVar4 = *psVar4 + 1;
          *(int *)(lVar5 + 0x29b8) = *(int *)(lVar5 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar9);
        *(undefined8 *)(lVar2 + 0x28) = 0;
      }
      *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 4;
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar3);
  }
  lVar9 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar9 != 0) {
      piVar7 = (int *)(lVar9 + 0x29c0 + (longlong)*(short *)(lVar9 + 0x29bc) * 8);
      if (*piVar7 != *(int *)(lVar9 + 4)) {
        iVar12 = *(short *)(lVar9 + 0x29bc) + 1;
        sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
        *(short *)(lVar9 + 0x29bc) = sVar11;
        piVar7 = (int *)(lVar9 + 0x29c0 + (longlong)sVar11 * 8);
        *piVar7 = *(int *)(lVar9 + 4);
        *(undefined4 *)(lVar9 + 0x29c4 + (longlong)sVar11 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar9 + 0x29b8) = *(int *)(lVar9 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar2);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0x2e0) = 0xffffffffffffffff;
  return;
}



/* ===== 1804026b0 FUN_1804026b0 ===== */

void FUN_1804026b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  if (*(undefined8 **)(param_1 + 0x2b8) != param_2) {
    puVar6 = *(undefined8 **)(param_1 + 0x70);
    puVar1 = puVar6 + *(int *)(param_1 + 0x68);
    if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
      do {
        FUN_180404b70(param_1,*puVar6);
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x2b0);
    if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) &&
       (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 0x10), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1);
      lVar4 = *(longlong *)(param_1 + 0x2b0);
    }
    *(undefined8 **)(param_1 + 0x2b8) = param_2;
    if (param_2 == (undefined8 *)0x0) {
      puVar5 = &DAT_1808a81dc;
    }
    else {
      puVar5 = (undefined *)*param_2;
    }
    *(undefined **)(param_1 + 0x2c0) = puVar5;
    if (((lVar4 != 0) && (param_2 != (undefined8 *)0x0)) && ((code *)param_2[1] != (code *)0x0)) {
      (*(code *)param_2[1])(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x70);
    puVar1 = puVar6 + *(int *)(param_1 + 0x68);
    if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
      do {
        FUN_180404ae0(param_1,*puVar6);
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
    plVar7 = *(longlong **)(param_1 + 0x70);
    plVar2 = plVar7 + *(int *)(param_1 + 0x68);
    if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar4 = *plVar7;
        puVar6 = *(undefined8 **)(lVar4 + 0x28);
        puVar1 = puVar6 + *(int *)(lVar4 + 0x20);
        for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          FUN_180404c10(param_1,lVar4,*puVar6);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar2);
    }
  }
  return;
}



/* ===== 180402820 FUN_180402820 ===== */

void FUN_180402820(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  undefined8 *puVar20;
  
  *(undefined1 *)(param_1 + 0x51) = param_3;
  iVar18 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      lVar17 = (longlong)iVar18;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar17 * 8);
      cVar9 = FUN_180402ae0(lVar3);
      if (cVar9 != '\0') {
        FUN_180401f30(lVar3);
        if (lVar3 != 0) {
          FUN_180401f30(lVar3);
          FUN_1803f5870(lVar3 + 0x48);
          lVar8 = DAT_180ca0a50;
          if (DAT_180ca0a50 != 0) {
            piVar1 = (int *)(DAT_180ca0a50 + 4);
            lVar14 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8;
            if (*(int *)(DAT_180ca0a50 + 0x29c0 + lVar14) != *piVar1) {
              iVar12 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
              sVar11 = (short)iVar12 + (short)(iVar12 / 6) * -6;
              *(short *)(DAT_180ca0a50 + 0x29bc) = sVar11;
              lVar14 = (longlong)sVar11 * 8;
              *(int *)(lVar14 + 0x29c0 + lVar8) = *piVar1;
              *(undefined4 *)(lVar14 + 0x29c4 + lVar8) = 0;
            }
            psVar2 = (short *)(lVar14 + 0x29c6 + lVar8);
            *psVar2 = *psVar2 + 1;
            *(int *)(lVar8 + 0x29b8) = *(int *)(lVar8 + 0x29b8) + 1;
          }
          thunk_FUN_1805277b0(lVar3);
        }
        lVar3 = *(longlong *)(param_1 + 0x48) + lVar17 * 8;
        FUN_180540530(lVar3,lVar3 + 8,(*(int *)(param_1 + 0x40) - lVar17) * 8 + -8);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        iVar18 = iVar18 + -1;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x51) == '\0') {
LAB_18040295e:
    if (*(char *)(param_1 + 0x52) == '\0') {
      FUN_1803ebc00(
                   "Backend does not support ImGuiBackendFlags_RendererHasTextures, and font atlas is not built! Update backend OR make sure you called ImGui_ImplXXXX_NewFrame() function for renderer backend, which should call io.Fonts->GetTexDataAsRGBA32() / GetTexDataAsAlpha8()."
                   );
      goto LAB_180402970;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x52) = 1;
    if (*(longlong *)(param_1 + 0x2b0) == 0) {
      FUN_180403fc0(param_1);
    }
    if (*(char *)(param_1 + 0x51) == '\0') goto LAB_18040295e;
LAB_180402970:
    if (*(char *)(param_1 + 0x52) == '\0') goto LAB_180402998;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x2b0) + 0xb9) != '\0') &&
     (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_1803ebc00(
                 "Called ImFontAtlas::Build() before ImGuiBackendFlags_RendererHasTextures got set! With new backends: you don\'t need to call Build()."
                 );
  }
LAB_180402998:
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  *(undefined4 *)(lVar3 + 0xa4) = param_2;
  puVar15 = *(undefined8 **)(param_1 + 0x70);
  puVar20 = puVar15 + *(int *)(param_1 + 0x68);
  if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
    do {
      *(undefined8 *)*puVar15 = 0;
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar20);
  }
  if (0 < *(int *)(lVar3 + 0xe8)) {
    iVar18 = *(int *)(lVar3 + 0xc0);
    if (0 < iVar18) {
      uVar19 = 0;
      uVar16 = 0;
      do {
        uVar10 = uVar19 & 0x1f;
        uVar13 = uVar19;
        if ((int)uVar19 < 0) {
          uVar13 = uVar19 + 0x1f;
          uVar10 = uVar10 - 0x20;
        }
        puVar20 = (undefined8 *)
                  (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + (longlong)((int)uVar13 >> 5) * 8) +
                  (longlong)(int)uVar10 * 0x68);
        if ((*(uint *)((longlong)puVar20 + 0x4c) & 0x4000000) == 0) {
          uVar10 = uVar16 & 0x1f;
          uVar13 = uVar16;
          if ((int)uVar16 < 0) {
            uVar13 = uVar16 + 0x1f;
            uVar10 = uVar10 - 0x20;
          }
          puVar15 = (undefined8 *)
                    (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + (longlong)((int)uVar13 >> 5) * 8) +
                    (longlong)(int)uVar10 * 0x68);
          uVar16 = uVar16 + 1;
          if (puVar15 != puVar20) {
            uVar7 = puVar20[1];
            *puVar15 = *puVar20;
            puVar15[1] = uVar7;
            uVar7 = puVar20[3];
            puVar15[2] = puVar20[2];
            puVar15[3] = uVar7;
            uVar7 = puVar20[5];
            puVar15[4] = puVar20[4];
            puVar15[5] = uVar7;
            uVar7 = puVar20[7];
            puVar15[6] = puVar20[6];
            puVar15[7] = uVar7;
            uVar7 = puVar20[9];
            puVar15[8] = puVar20[8];
            puVar15[9] = uVar7;
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0x54);
            uVar5 = *(undefined4 *)(puVar20 + 0xb);
            uVar6 = *(undefined4 *)((longlong)puVar20 + 0x5c);
            *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(puVar20 + 10);
            *(undefined4 *)((longlong)puVar15 + 0x54) = uVar4;
            *(undefined4 *)(puVar15 + 0xb) = uVar5;
            *(undefined4 *)((longlong)puVar15 + 0x5c) = uVar6;
            puVar15[0xc] = puVar20[0xc];
            FUN_1803d8480(lVar3 + 0xd8,*(undefined4 *)((longlong)puVar15 + 0x54),puVar15);
            iVar18 = *(int *)(lVar3 + 0xc0);
          }
        }
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar18);
    }
    *(int *)(lVar3 + 0xc0) = iVar18 - *(int *)(lVar3 + 0xe8);
    *(undefined4 *)(lVar3 + 0xe8) = 0;
  }
  return;
}



/* ===== 180402ae0 FUN_180402ae0 ===== */

ulonglong FUN_180402ae0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint7 uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 0) {
    iVar5 = *(int *)(param_1 + 0x4c);
    if (iVar5 < 0) {
      iVar5 = iVar5 + iVar5 / 2;
      iVar2 = 0;
      if (0 < iVar5) {
        iVar2 = iVar5;
      }
      FUN_18000ba20(param_1 + 0x48,iVar2);
    }
    uVar1 = *(uint *)(param_1 + 4);
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  uVar3 = (ulonglong)uVar1;
  if (*(char *)(param_1 + 0x5f) == '\0') {
    if (uVar1 != 4) goto LAB_180402b4c;
LAB_180402b62:
    if (((*(longlong *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 8) == 0)) &&
       (*(longlong *)(param_1 + 0x10) == 0)) {
      *(undefined4 *)(param_1 + 4) = 1;
LAB_180402b51:
      uVar4 = (uint7)(uVar3 >> 8);
      if (*(char *)(param_1 + 0x5f) == '\0') {
        *(undefined4 *)(param_1 + 4) = 2;
        return (ulonglong)uVar4 << 8;
      }
      return CONCAT71(uVar4,1);
    }
  }
  else {
    if (uVar1 != 1) {
      if (uVar1 != 4) {
        *(undefined4 *)(param_1 + 4) = 4;
      }
      goto LAB_180402b62;
    }
    uVar3 = 1;
LAB_180402b4c:
    if ((int)uVar3 == 1) goto LAB_180402b51;
    if ((int)uVar3 != 4) goto LAB_180402b97;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
LAB_180402b97:
  return uVar3 & 0xffffffffffffff00;
}



/* ===== 180402ba0 FUN_180402ba0 ===== */

void FUN_180402ba0(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar10 = *(uint **)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x30) == 1) {
    iVar9 = *(int *)(param_1 + 0x3c);
    if (0 < iVar9) {
      iVar2 = *(int *)(param_1 + 0x38);
      iVar8 = iVar2;
      puVar11 = puVar10;
      do {
        for (; 3 < iVar8; iVar8 = iVar8 + -4) {
          lVar5 = (longlong)((float)(byte)*puVar10 * param_2);
          bVar6 = 0xff;
          if ((uint)lVar5 < 0xff) {
            bVar6 = (byte)lVar5;
          }
          *(byte *)puVar10 = bVar6;
          lVar5 = (longlong)((float)*(byte *)((longlong)puVar10 + 1) * param_2);
          bVar6 = 0xff;
          if ((uint)lVar5 < 0xff) {
            bVar6 = (byte)lVar5;
          }
          *(byte *)((longlong)puVar10 + 1) = bVar6;
          lVar5 = (longlong)((float)*(byte *)((longlong)puVar10 + 2) * param_2);
          bVar6 = 0xff;
          if ((uint)lVar5 < 0xff) {
            bVar6 = (byte)lVar5;
          }
          *(byte *)((longlong)puVar10 + 2) = bVar6;
          lVar5 = (longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
          bVar6 = 0xff;
          if ((uint)lVar5 < 0xff) {
            bVar6 = (byte)lVar5;
          }
          *(byte *)((longlong)puVar10 + 3) = bVar6;
          puVar10 = puVar10 + 1;
        }
        for (; 0 < iVar8; iVar8 = iVar8 + -1) {
          lVar5 = (longlong)((float)(byte)*puVar10 * param_2);
          bVar6 = 0xff;
          if ((uint)lVar5 < 0xff) {
            bVar6 = (byte)lVar5;
          }
          *(byte *)puVar10 = bVar6;
          puVar10 = (uint *)((longlong)puVar10 + 1);
        }
        iVar9 = iVar9 + -1;
        puVar10 = (uint *)((longlong)puVar11 + (longlong)iVar1);
        iVar8 = iVar2;
        puVar11 = puVar10;
      } while (0 < iVar9);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x30) == 0) && (iVar9 = *(int *)(param_1 + 0x3c), 0 < iVar9)) {
    iVar2 = *(int *)(param_1 + 0x38);
    iVar8 = iVar2;
    puVar11 = puVar10;
    do {
      for (; 3 < iVar8; iVar8 = iVar8 + -4) {
        uVar7 = *puVar10;
        uVar3 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
        uVar4 = 0xff;
        if (uVar3 < 0xff) {
          uVar4 = uVar3;
        }
        uVar3 = puVar10[1];
        *puVar10 = ((uVar4 << 8 | uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 8 |
                   uVar7 & 0xff;
        uVar4 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 7) * param_2);
        uVar7 = 0xff;
        if (uVar4 < 0xff) {
          uVar7 = uVar4;
        }
        uVar4 = puVar10[2];
        puVar10[1] = ((uVar7 << 8 | uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 8 |
                     uVar3 & 0xff;
        uVar3 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 0xb) * param_2);
        uVar7 = 0xff;
        if (uVar3 < 0xff) {
          uVar7 = uVar3;
        }
        uVar3 = puVar10[3];
        puVar10[2] = ((uVar7 << 8 | uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 8 |
                     uVar4 & 0xff;
        uVar4 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 0xf) * param_2);
        uVar7 = 0xff;
        if (uVar4 < 0xff) {
          uVar7 = uVar4;
        }
        puVar10[3] = ((uVar7 << 8 | uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 8 & 0xff) << 8 |
                     uVar3 & 0xff;
        puVar10 = puVar10 + 4;
      }
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        uVar7 = *puVar10;
        uVar3 = (uint)(longlong)((float)*(byte *)((longlong)puVar10 + 3) * param_2);
        uVar4 = 0xff;
        if (uVar3 < 0xff) {
          uVar4 = uVar3;
        }
        *puVar10 = ((uVar4 << 8 | uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 8 |
                   uVar7 & 0xff;
        puVar10 = puVar10 + 1;
      }
      iVar9 = iVar9 + -1;
      puVar10 = (uint *)((longlong)puVar11 + (longlong)iVar1);
      iVar8 = iVar2;
      puVar11 = puVar10;
    } while (0 < iVar9);
  }
  return;
}



/* ===== 180402ef0 FUN_180402ef0 ===== */

void FUN_180402ef0(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,int param_6
                  ,int param_7,int param_8)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_8) {
    do {
      FUN_180540530((longlong)
                    (((iVar1 + param_6) * *(int *)(param_4 + 0x24) + param_5) *
                    *(int *)(param_4 + 0x2c)) + *(longlong *)(param_4 + 0x30),
                    (longlong)
                    (((iVar1 + param_3) * *(int *)(param_1 + 0x24) + param_2) *
                    *(int *)(param_1 + 0x2c)) + *(longlong *)(param_1 + 0x30),
                    (longlong)(*(int *)(param_4 + 0x2c) * param_7));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_8);
  }
  return;
}



/* ===== 180402fa0 FUN_180402fa0 ===== */

void FUN_180402fa0(longlong param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = (uint)param_2 + (uint)param_4;
  if (*(ushort *)(param_1 + 0x44) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)*(ushort *)(param_1 + 0x40) + (uint)*(ushort *)(param_1 + 0x44);
  }
  uVar5 = uVar10;
  if (uVar10 <= uVar11) {
    uVar5 = uVar11;
  }
  uVar11 = (uint)param_3 + (uint)param_5;
  if (*(ushort *)(param_1 + 0x46) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)*(ushort *)(param_1 + 0x42) + (uint)*(ushort *)(param_1 + 0x46);
  }
  uVar4 = param_2;
  if (*(ushort *)(param_1 + 0x40) < param_2) {
    uVar4 = *(ushort *)(param_1 + 0x40);
  }
  *(ushort *)(param_1 + 0x40) = uVar4;
  uVar7 = param_3;
  if (*(ushort *)(param_1 + 0x42) < param_3) {
    uVar7 = *(ushort *)(param_1 + 0x42);
  }
  *(ushort *)(param_1 + 0x42) = uVar7;
  sVar2 = (short)uVar11;
  if (uVar11 <= uVar8) {
    sVar2 = (short)uVar8;
  }
  *(ushort *)(param_1 + 0x44) = (short)uVar5 - uVar4;
  *(ushort *)(param_1 + 0x46) = sVar2 - uVar7;
  uVar4 = param_2;
  if (*(ushort *)(param_1 + 0x38) < param_2) {
    uVar4 = *(ushort *)(param_1 + 0x38);
  }
  *(ushort *)(param_1 + 0x38) = uVar4;
  uVar7 = param_3;
  if (*(ushort *)(param_1 + 0x3a) < param_3) {
    uVar7 = *(ushort *)(param_1 + 0x3a);
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x3c) + (uint)uVar4;
  *(ushort *)(param_1 + 0x3a) = uVar7;
  if (uVar10 <= uVar5) {
    uVar10 = uVar5 & 0xffff;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x3e) + (uint)uVar7;
  *(ushort *)(param_1 + 0x3c) = (short)uVar10 - uVar4;
  if (uVar11 <= uVar5) {
    uVar11 = uVar5 & 0xffff;
  }
  *(ushort *)(param_1 + 0x3e) = (short)uVar11 - uVar7;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 3)) {
    *(undefined4 *)(param_1 + 4) = 3;
    iVar3 = *(int *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x48) == iVar3) {
      iVar9 = *(int *)(param_1 + 0x48) + 1;
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      if (iVar9 < iVar3) {
        iVar9 = iVar3;
      }
      FUN_18000ba20(param_1 + 0x48,iVar9);
    }
    lVar6 = (longlong)*(int *)(param_1 + 0x48);
    lVar1 = *(longlong *)(param_1 + 0x50);
    *(ushort *)(lVar1 + lVar6 * 8) = param_2;
    *(ushort *)(lVar1 + 2 + lVar6 * 8) = param_3;
    *(ushort *)(lVar1 + 4 + lVar6 * 8) = param_4;
    *(ushort *)(lVar1 + 6 + lVar6 * 8) = param_5;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return;
}



/* ===== 180403130 FUN_180403130 ===== */

undefined8 * FUN_180403130(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 extraout_XMM0_Da;
  
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_1804075f0();
  }
  iVar12 = 8;
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(char *)(param_2 + 0x35) == '\0') {
    puVar7 = (undefined8 *)_malloc_base(0x50);
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
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
      *(undefined4 *)(puVar7 + 9) = 0x3f800000;
    }
    iVar11 = *(int *)(param_1 + 0x29c);
    *(int *)(param_1 + 0x29c) = iVar11 + 1;
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)((longlong)puVar7 + 0x1c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)(param_2 + 0x70);
    *(int *)(puVar7 + 3) = iVar11;
    iVar11 = *(int *)(param_1 + 0x6c);
    if (*(int *)(param_1 + 0x68) == iVar11) {
      iVar14 = *(int *)(param_1 + 0x68) + 1;
      if (iVar11 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar11 / 2 + iVar11;
      }
      if (iVar14 < iVar6) {
        iVar14 = iVar6;
      }
      if (iVar11 < iVar14) {
        uVar8 = _malloc_base((longlong)iVar14 * 8);
        lVar2 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
        }
        if (*(longlong *)(param_1 + 0x70) != 0) {
          FUN_180540530(uVar8,*(longlong *)(param_1 + 0x70),(longlong)*(int *)(param_1 + 0x68) << 3)
          ;
          lVar15 = *(longlong *)(param_1 + 0x70);
          if ((lVar15 != 0) && (lVar2 != 0)) {
            piVar13 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
            if (*piVar13 != *(int *)(lVar2 + 4)) {
              iVar11 = *(short *)(lVar2 + 0x29bc) + 1;
              sVar10 = (short)iVar11 + (short)(iVar11 / 6) * -6;
              *(short *)(lVar2 + 0x29bc) = sVar10;
              piVar13 = (int *)(lVar2 + 0x29c0 + (longlong)sVar10 * 8);
              *piVar13 = *(int *)(lVar2 + 4);
              *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar10 * 8) = 0;
            }
            *(short *)((longlong)piVar13 + 6) = *(short *)((longlong)piVar13 + 6) + 1;
            *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
          }
          thunk_FUN_1805277b0(lVar15);
        }
        *(undefined8 *)(param_1 + 0x70) = uVar8;
        *(int *)(param_1 + 0x6c) = iVar14;
      }
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x68) * 8) =
         puVar7;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  else {
    puVar7 = *(undefined8 **)(param_2 + 0x80);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + -8 + (longlong)iVar1 * 8);
    }
    FUN_1804059d0(param_1,puVar7);
  }
  FUN_18040c100(param_1 + 0x78,param_2);
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar15 = (longlong)*(int *)(param_1 + 0x78) * 0xa0;
  lVar16 = lVar2 + -0xa0 + lVar15;
  if (*(longlong *)(lVar15 + -0x20 + lVar2) == 0) {
    *(undefined8 **)(lVar15 + -0x20 + lVar2) = puVar7;
  }
  iVar11 = *(int *)((longlong)puVar7 + 0x24);
  if (*(int *)(puVar7 + 4) == iVar11) {
    iVar14 = *(int *)(puVar7 + 4) + 1;
    if (iVar11 != 0) {
      iVar12 = iVar11 + iVar11 / 2;
    }
    if (iVar14 < iVar12) {
      iVar14 = iVar12;
    }
    FUN_18000ba20(puVar7 + 4,iVar14);
  }
  *(longlong *)(puVar7[5] + (longlong)*(int *)(puVar7 + 4) * 8) = lVar16;
  *(int *)(puVar7 + 4) = *(int *)(puVar7 + 4) + 1;
  FUN_1804041c0();
  psVar3 = *(short **)(lVar15 + -0x58 + lVar2);
  if (psVar3 != (short *)0x0) {
    iVar12 = 0;
    sVar10 = *psVar3;
    psVar4 = psVar3;
    while (sVar10 != 0) {
      psVar4 = psVar4 + 1;
      iVar12 = iVar12 + 1;
      sVar10 = *psVar4;
    }
    lVar9 = (longlong)(iVar12 + 1) * 2;
    uVar8 = _malloc_base(lVar9);
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    uVar8 = FUN_180540530(uVar8,psVar3,lVar9);
    *(undefined8 *)(lVar15 + -0x58 + lVar2) = uVar8;
  }
  lVar9 = *(longlong *)(lVar15 + -0x18 + lVar2);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x2b8);
  }
  if ((*(code **)(lVar9 + 0x18) == (code *)0x0) ||
     (cVar5 = (**(code **)(lVar9 + 0x18))(param_1,lVar16), cVar5 != '\0')) {
    FUN_180404c10(param_1,puVar7,lVar16);
    if (iVar1 == 0) {
      FUN_180403d70(param_1,0,puVar7);
    }
  }
  else {
    FUN_180404d10(extraout_XMM0_Da,lVar16);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    *(int *)(puVar7 + 4) = *(int *)(puVar7 + 4) + -1;
    if (*(char *)(lVar15 + -0x6b + lVar2) == '\0') {
      FUN_18040bcf0(puVar7);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    }
    puVar7 = (undefined8 *)0x0;
  }
  return puVar7;
}



/* ===== 180403490 FUN_180403490 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180403490(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 uStack_124;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined2 uStack_11e;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 uStack_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined2 uStack_7e;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_188;
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x38);
    if (fVar3 == 0.0) {
      fVar4 = DAT_1808ac34c;
    }
    else {
      fVar4 = fVar3;
    }
    if (((fVar3 == DAT_1808ac34c) && (*(float *)(lVar1 + 0x30) <= 0.0)) &&
       (*(char *)(lVar1 + 0x78) != '\0')) {
      fVar4 = DAT_1808ac540;
    }
    fVar3 = *(float *)(lVar1 + 0xc90);
    if (*(float *)(lVar1 + 0xc90) <= 0.0) {
      fVar3 = DAT_1808ac8d4;
    }
    if (fVar3 * *(float *)(lVar1 + 0xc98) * *(float *)(lVar1 + 0xc94) * fVar4 < DAT_1808ac900) {
      FUN_180540170(&local_158,0,0xa0);
      local_b8 = local_158;
      uStack_b0 = uStack_150;
      uStack_124 = 1;
      local_a8 = local_148;
      uStack_a0 = uStack_140;
      uStack_121 = 0;
      uStack_120 = 0;
      local_98 = local_138;
      uStack_90 = uStack_130;
      uStack_11e = 0;
      uStack_80 = 0;
      uStack_84 = 1;
      uStack_81 = 0;
      uStack_7e = 0;
      uStack_100 = CONCAT44(0x7f7fffff,(undefined4)uStack_100);
      local_78 = local_118;
      uStack_70 = uStack_110;
      local_68 = local_108;
      uStack_60 = uStack_100;
      uStack_f0 = CONCAT44(0x3f800000,(undefined4)uStack_f0);
      local_58 = local_f8;
      uStack_50 = uStack_f0;
      local_e8 = &DAT_3f8000003f800000;
      local_48 = &DAT_3f8000003f800000;
      uStack_82 = 1;
      local_38 = local_d8;
      uStack_34 = uStack_d4;
      uStack_30 = uStack_d0;
      uStack_2c = uStack_cc;
      fStack_7c = 13.0;
      local_28 = local_c8;
      uStack_24 = uStack_c4;
      uStack_20 = uStack_c0;
      uStack_1c = uStack_bc;
      _uStack_40 = CONCAT44((int)((ulonglong)_uStack_e0 >> 0x20),0x10);
      FUN_1803d7610(&local_b8,0x28,"ProggyClean.ttf");
      puVar2 = &DAT_1806c6850;
      uStack_7e = 0x85;
      local_168 = &local_b8;
      local_68 = CONCAT44(local_68._4_4_ + fStack_7c / DAT_1808ac8d4,(undefined4)local_68);
      goto LAB_180403731;
    }
  }
  FUN_180540170(&local_b8,0,0xa0);
  local_158 = local_b8;
  uStack_150 = uStack_b0;
  uStack_84 = 1;
  local_148 = local_a8;
  uStack_140 = uStack_a0;
  uStack_81 = 0;
  uStack_80 = 0;
  local_138 = local_98;
  uStack_130 = uStack_90;
  uStack_7e = 0;
  uStack_120 = 0;
  uStack_124 = 1;
  uStack_121 = 0;
  uStack_11e = 0;
  uStack_60 = CONCAT44(0x7f7fffff,(undefined4)uStack_60);
  local_118 = local_78;
  uStack_110 = uStack_70;
  local_108 = local_68;
  uStack_100 = uStack_60;
  uStack_50 = CONCAT44(0x3f800000,(undefined4)uStack_50);
  local_f8 = local_58;
  uStack_f0 = uStack_50;
  local_48 = &DAT_3f8000003f800000;
  local_e8 = &DAT_3f8000003f800000;
  uStack_122 = 1;
  local_d8 = local_38;
  uStack_d4 = uStack_34;
  uStack_d0 = uStack_30;
  uStack_cc = uStack_2c;
  fStack_11c = 13.0;
  local_c8 = local_28;
  uStack_c4 = uStack_24;
  uStack_c0 = uStack_20;
  uStack_bc = uStack_1c;
  _uStack_e0 = CONCAT44((int)((ulonglong)_uStack_40 >> 0x20),0x10);
  FUN_1803d7610(&local_158,0x28,"ProggyForever.ttf");
  local_168 = &local_158;
  puVar2 = &DAT_1806c2f60;
  local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_ * _DAT_1808ac35c,(undefined4)local_e8);
  local_108 = CONCAT44(local_108._4_4_ + fStack_11c * DAT_1808ac090 * DAT_1808ac1f4,
                       (undefined4)local_108);
LAB_180403731:
  local_160 = 0;
  FUN_180403ba0(param_1,puVar2);
  return;
}



/* ===== 180403770 FUN_180403770 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180403770(undefined8 param_1,char *param_2,float param_3,undefined4 *param_4,longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined1 auStack_208 [32];
  undefined8 local_1e8 [2];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined1 uStack_1a4;
  undefined2 uStack_1a3;
  undefined1 uStack_1a1;
  undefined1 uStack_1a0;
  byte bStack_19f;
  undefined2 uStack_19e;
  float fStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
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
  uint uStack_104;
  int iStack_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  
  local_98 = DAT_180919500 ^ (ulonglong)auStack_208;
  local_1e8[0] = 0;
  lVar3 = FUN_1803d7ae0(param_2,param_2,local_1e8);
  if (lVar3 == 0) {
    if ((param_4 == (undefined4 *)0x0) || ((*(byte *)(param_4 + 0x1e) & 2) == 0)) {
      FUN_1803f5060("While loading \'%s\'\n",param_2);
      FUN_1803ebc00("Could not load font file!");
    }
    uVar5 = 0;
  }
  else {
    if (param_4 == (undefined4 *)0x0) {
      FUN_180540170(&local_1d8,0,0xa0);
      uStack_1a4 = 1;
      uStack_19e = 0;
      uStack_1a1 = 0;
      uStack_1a0 = 0;
      uStack_104 = (uint)CONCAT21(uStack_1a3,1);
      iStack_100 = (uint)bStack_19f << 8;
      uStack_164 = 0x3f800000;
      uStack_17c = 0x7f7fffff;
      uStack_dc = 0x7f7fffff;
      uStack_16c = 0x3f800000;
      uStack_cc = 0x3f800000;
      local_168 = 0x3f800000;
      local_c8 = 0x3f800000;
      uStack_c4 = 0x3f800000;
    }
    else {
      local_1d8 = *param_4;
      uStack_1d4 = param_4[1];
      uStack_1d0 = param_4[2];
      uStack_1cc = param_4[3];
      local_1c8 = param_4[4];
      uStack_1c4 = param_4[5];
      uStack_1c0 = param_4[6];
      uStack_1bc = param_4[7];
      local_1b8 = param_4[8];
      uStack_1b4 = param_4[9];
      uStack_1b0._0_4_ = param_4[10];
      uStack_1b0._4_4_ = param_4[0xb];
      local_1a8 = param_4[0xc];
      uStack_104 = param_4[0xd];
      iStack_100 = param_4[0xe];
      fStack_19c = (float)param_4[0xf];
      local_198._0_4_ = param_4[0x10];
      local_198._4_4_ = param_4[0x11];
      uStack_190 = param_4[0x12];
      uStack_18c = param_4[0x13];
      local_188 = param_4[0x14];
      uStack_184 = param_4[0x15];
      uStack_180 = param_4[0x16];
      uStack_dc = param_4[0x17];
      local_178 = param_4[0x18];
      uStack_174 = param_4[0x19];
      uStack_170 = param_4[0x1a];
      uStack_cc = param_4[0x1b];
      local_c8 = param_4[0x1c];
      uStack_c4 = param_4[0x1d];
      uStack_160 = param_4[0x1e];
      uStack_15c = param_4[0x1f];
      local_158 = param_4[0x20];
      uStack_154 = param_4[0x21];
      uStack_150 = param_4[0x22];
      uStack_14c = param_4[0x23];
      local_148 = param_4[0x24];
      uStack_144 = param_4[0x25];
      uStack_140 = param_4[0x26];
      uStack_13c = param_4[0x27];
    }
    local_138 = local_1d8;
    uStack_134 = uStack_1d4;
    uStack_130 = uStack_1d0;
    uStack_12c = uStack_1cc;
    local_128 = local_1c8;
    uStack_124 = uStack_1c4;
    uStack_120 = uStack_1c0;
    uStack_11c = uStack_1bc;
    local_118 = local_1b8;
    uStack_114 = uStack_1b4;
    uStack_110 = (undefined4)uStack_1b0;
    uStack_10c = uStack_1b0._4_4_;
    local_108 = local_1a8;
    fStack_fc = fStack_19c;
    local_f8 = (undefined4)local_198;
    uStack_f4 = local_198._4_4_;
    uStack_f0 = uStack_190;
    uStack_ec = uStack_18c;
    local_e8 = local_188;
    uStack_e4 = uStack_184;
    uStack_e0 = uStack_180;
    local_d8 = local_178;
    uStack_d4 = uStack_174;
    uStack_d0 = uStack_170;
    uStack_c0 = uStack_160;
    uStack_bc = uStack_15c;
    local_b8 = local_158;
    uStack_b4 = uStack_154;
    uStack_b0 = uStack_150;
    uStack_ac = uStack_14c;
    local_a8 = local_148;
    uStack_a4 = uStack_144;
    uStack_a0 = uStack_140;
    uStack_9c = uStack_13c;
    if ((char)local_1d8 == '\0') {
      sVar4 = strlen(param_2);
      pcVar2 = param_2 + sVar4;
      while (param_2 < pcVar2) {
        pcVar1 = pcVar2 + -1;
        pcVar2 = pcVar2 + -1;
        if ((*pcVar1 == '/') || (*pcVar1 == '\\')) break;
      }
      FUN_1803d7610(&local_138,0x28,&DAT_1806d3198);
    }
    uStack_1a4 = (undefined1)uStack_104;
    uStack_1a3 = (undefined2)(uStack_104 >> 8);
    uStack_1a1 = (undefined1)(uStack_104 >> 0x18);
    uStack_1a0 = (undefined1)iStack_100;
    bStack_19f = (byte)((uint)iStack_100 >> 8);
    uStack_19e = (undefined2)((uint)iStack_100 >> 0x10);
    local_1a8 = (undefined4)local_1e8[0];
    local_198 = CONCAT44(uStack_f4,local_f8);
    fStack_19c = fStack_fc;
    if (0.0 < param_3) {
      fStack_19c = param_3;
    }
    if (param_5 != 0) {
      local_198 = param_5;
    }
    local_1d8 = local_138;
    uStack_1d4 = uStack_134;
    uStack_1d0 = uStack_130;
    uStack_1cc = uStack_12c;
    local_1c8 = local_128;
    uStack_1c4 = uStack_124;
    uStack_1c0 = uStack_120;
    uStack_1bc = uStack_11c;
    local_1b8 = local_118;
    uStack_1b4 = uStack_114;
    uStack_1b0 = lVar3;
    uStack_190 = uStack_f0;
    uStack_18c = uStack_ec;
    local_188 = local_e8;
    uStack_184 = uStack_e4;
    uStack_180 = uStack_e0;
    uStack_17c = uStack_dc;
    local_178 = local_d8;
    uStack_174 = uStack_d4;
    uStack_170 = uStack_d0;
    uStack_16c = uStack_cc;
    local_168 = local_c8;
    uStack_164 = uStack_c4;
    uStack_160 = uStack_c0;
    uStack_15c = uStack_bc;
    local_158 = local_b8;
    uStack_154 = uStack_b4;
    uStack_150 = uStack_b0;
    uStack_14c = uStack_ac;
    local_148 = local_a8;
    uStack_144 = uStack_a4;
    uStack_140 = uStack_a0;
    uStack_13c = uStack_9c;
    uVar5 = FUN_180403130(param_1,&local_1d8);
  }
  return uVar5;
}



/* ===== 180403a20 FUN_180403a20 ===== */

void FUN_180403a20(undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  undefined4 *param_5,longlong param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined1 uStack_e4;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  undefined1 uStack_e0;
  byte bStack_df;
  undefined2 uStack_de;
  float fStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  if (param_5 == (undefined4 *)0x0) {
    FUN_180540170(&local_118,0,0xa0);
    uVar1 = (uint)CONCAT21(uStack_e3,1);
    iVar2 = (uint)bStack_df << 8;
    uStack_bc = 0x7f7fffff;
    uStack_ac = 0x3f800000;
    local_a8 = 0x3f800000;
    uStack_a4 = 0x3f800000;
  }
  else {
    local_118 = *param_5;
    uStack_114 = param_5[1];
    uStack_110 = param_5[2];
    uStack_10c = param_5[3];
    local_108 = param_5[4];
    uStack_104 = param_5[5];
    uStack_100 = param_5[6];
    uStack_fc = param_5[7];
    local_f8 = param_5[8];
    uStack_f4 = param_5[9];
    uVar1 = param_5[0xd];
    iVar2 = param_5[0xe];
    fStack_dc = (float)param_5[0xf];
    local_d8._0_4_ = param_5[0x10];
    local_d8._4_4_ = param_5[0x11];
    uStack_d0 = param_5[0x12];
    uStack_cc = param_5[0x13];
    local_c8 = param_5[0x14];
    uStack_c4 = param_5[0x15];
    uStack_c0 = param_5[0x16];
    uStack_bc = param_5[0x17];
    local_b8 = param_5[0x18];
    uStack_b4 = param_5[0x19];
    uStack_b0 = param_5[0x1a];
    uStack_ac = param_5[0x1b];
    local_a8 = param_5[0x1c];
    uStack_a4 = param_5[0x1d];
    uStack_a0 = param_5[0x1e];
    uStack_9c = param_5[0x1f];
    local_98 = param_5[0x20];
    uStack_94 = param_5[0x21];
    uStack_90 = param_5[0x22];
    uStack_8c = param_5[0x23];
    local_88 = param_5[0x24];
    uStack_84 = param_5[0x25];
    uStack_80 = param_5[0x26];
    uStack_7c = param_5[0x27];
  }
  uStack_e4 = (undefined1)uVar1;
  uStack_e3 = (undefined2)(uVar1 >> 8);
  uStack_e1 = (undefined1)(uVar1 >> 0x18);
  uStack_e0 = (undefined1)iVar2;
  bStack_df = (byte)((uint)iVar2 >> 8);
  uStack_de = (undefined2)((uint)iVar2 >> 0x10);
  if (0.0 < param_4) {
    fStack_dc = param_4;
  }
  if (param_6 != 0) {
    local_d8 = param_6;
  }
  uStack_f0 = param_2;
  local_e8 = param_3;
  FUN_180403130(param_1,&local_118);
  return;
}



/* ===== 180403ba0 FUN_180403ba0 ===== */

void FUN_180403ba0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  undefined4 local_f8;
  undefined1 uStack_f4;
  ushort uStack_f3;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  byte bStack_ef;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  bVar1 = *(byte *)(param_2 + 8);
  bVar2 = *(byte *)(param_2 + 9);
  bVar3 = *(byte *)(param_2 + 10);
  bVar4 = *(byte *)(param_2 + 0xb);
  uVar5 = _malloc_base();
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  FUN_18040ba20(uVar5,param_2);
  if (param_5 == (undefined4 *)0x0) {
    FUN_180540170(&local_128,0,0xa0);
    iVar6 = (uint)uStack_f3 << 8;
    iVar7 = (uint)bStack_ef << 8;
    uStack_cc = 0x7f7fffff;
    uStack_bc = 0x3f800000;
    local_b8 = 0x3f800000;
    uStack_b4 = 0x3f800000;
  }
  else {
    local_128 = *param_5;
    uStack_124 = param_5[1];
    uStack_120 = param_5[2];
    uStack_11c = param_5[3];
    local_118 = param_5[4];
    uStack_114 = param_5[5];
    uStack_110 = param_5[6];
    uStack_10c = param_5[7];
    local_108 = param_5[8];
    uStack_104 = param_5[9];
    uStack_100 = param_5[10];
    uStack_fc = param_5[0xb];
    local_f8 = param_5[0xc];
    iVar6 = param_5[0xd];
    iVar7 = param_5[0xe];
    uStack_ec = param_5[0xf];
    local_e8 = param_5[0x10];
    uStack_e4 = param_5[0x11];
    uStack_e0 = param_5[0x12];
    uStack_dc = param_5[0x13];
    local_d8 = param_5[0x14];
    uStack_d4 = param_5[0x15];
    uStack_d0 = param_5[0x16];
    uStack_cc = param_5[0x17];
    local_c8 = param_5[0x18];
    uStack_c4 = param_5[0x19];
    uStack_c0 = param_5[0x1a];
    uStack_bc = param_5[0x1b];
    local_b8 = param_5[0x1c];
    uStack_b4 = param_5[0x1d];
    uStack_b0 = param_5[0x1e];
    uStack_ac = param_5[0x1f];
    local_a8 = param_5[0x20];
    uStack_a4 = param_5[0x21];
    uStack_a0 = param_5[0x22];
    uStack_9c = param_5[0x23];
    local_98 = param_5[0x24];
    uStack_94 = param_5[0x25];
    uStack_90 = param_5[0x26];
    uStack_8c = param_5[0x27];
  }
  uStack_f3 = (ushort)((uint)iVar6 >> 8);
  uStack_f1 = (undefined1)((uint)iVar6 >> 0x18);
  uStack_f0 = (undefined1)iVar7;
  bStack_ef = (byte)((uint)iVar7 >> 8);
  uStack_ee = (undefined2)((uint)iVar7 >> 0x10);
  uStack_f4 = 1;
  FUN_180403a20(param_1,uVar5,
                (uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4,param_4,
                &local_128,param_6);
  return;
}



/* ===== 180403d70 FUN_180403d70 ===== */

void FUN_180403d70(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x2a8);
  plVar1 = plVar6 + *(int *)(param_1 + 0x2a0);
  if (((longlong)*(int *)(param_1 + 0x2a0) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar2 = *plVar6;
      if (*(longlong *)(lVar2 + 0x18) == param_2) {
        *(longlong *)(lVar2 + 0x18) = param_3;
      }
      lVar2 = *(longlong *)(lVar2 + 0x68);
      if ((lVar2 != 0) &&
         (((param_2 != 0 || (*(longlong *)(lVar2 + 0x11f0) != 0)) ||
          (*(float *)(lVar2 + 0x1204) != 0.0)))) {
        if (*(longlong *)(lVar2 + 0x68) == param_2) {
          *(longlong *)(lVar2 + 0x68) = param_3;
        }
        lVar3 = DAT_180ca0a50;
        DAT_180ca0a50 = lVar3;
        if (*(longlong *)(lVar2 + 0x11f0) == param_2) {
          if (lVar2 == DAT_180ca0a50) {
            FUN_1803e8680(param_3,*(undefined4 *)(lVar2 + 0x1204),*(undefined4 *)(lVar2 + 0x1200));
          }
          else {
            DAT_180ca0a50 = lVar2;
            FUN_1803e8680(param_3,*(undefined4 *)(lVar2 + 0x1204),*(undefined4 *)(lVar2 + 0x1200));
            DAT_180ca0a50 = lVar3;
          }
        }
        plVar4 = *(longlong **)(lVar2 + 0x1fe8);
        plVar5 = plVar4 + (longlong)*(int *)(lVar2 + 0x1fe0) * 2;
        for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
          if (*plVar4 == param_2) {
            *plVar4 = param_3;
          }
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}



/* ===== 180403ea0 FUN_180403ea0 ===== */

ulonglong FUN_180403ea0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_1804075f0();
  }
  uVar2 = FUN_180407b60(param_1,param_2,param_3,0);
  if ((uint)uVar2 == 0xffffffff) {
    return uVar2;
  }
  if (param_4 != (undefined2 *)0x0) {
    puVar3 = (uint *)FUN_180407f30(param_1,uVar2 & 0xffffffff);
    if (puVar3 != (uint *)0x0) {
      *param_4 = (short)*puVar3;
      param_4[1] = *(undefined2 *)((longlong)puVar3 + 2);
      param_4[2] = (short)puVar3[1];
      param_4[3] = *(undefined2 *)((longlong)puVar3 + 6);
      *(ulonglong *)(param_4 + 4) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20) *
                    (float)(*puVar3 >> 0x10),
                    (float)*(undefined8 *)(param_1 + 0x54) * (float)(*puVar3 & 0xffff));
      *(ulonglong *)(param_4 + 8) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20) *
                    (float)((puVar3[1] >> 0x10) + (*puVar3 >> 0x10)),
                    (float)*(undefined8 *)(param_1 + 0x54) *
                    (float)((puVar3[1] & 0xffff) + (*puVar3 & 0xffff)));
    }
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
    lVar4 = (longlong)
            (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                     (ulonglong)((uint)uVar2 & 0x7ffff) * 4) << 0xc) >> 0xc;
    FUN_180402fa0(*(undefined8 *)(param_1 + 0x38),*(undefined2 *)(lVar1 + lVar4 * 8),
                  *(undefined2 *)(lVar1 + 2 + lVar4 * 8),*(undefined2 *)(lVar1 + 4 + lVar4 * 8),
                  *(undefined2 *)(lVar1 + 6 + lVar4 * 8));
    *(undefined1 *)(param_1 + 0x52) = 0;
  }
  return uVar2 & 0xffffffff;
}



/* ===== 180403fc0 FUN_180403fc0 ===== */

void FUN_180403fc0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ushort *puVar10;
  longlong *plVar11;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x20) != *(int *)(param_1 + 4))) {
    FUN_1804067f0();
  }
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_1804075f0(param_1);
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_180403490(param_1);
  }
  plVar7 = *(longlong **)(param_1 + 0x2a8);
  plVar1 = plVar7 + *(int *)(param_1 + 0x2a0);
  if (((longlong)*(int *)(param_1 + 0x2a0) & 0x1fffffffffffffffU) != 0) {
    do {
      if (*(longlong *)(*plVar7 + 0x68) != 0) {
        *(byte *)(param_1 + 0x51) = (byte)(*(uint *)(*(longlong *)(*plVar7 + 0x68) + 0x2c) >> 4) & 1
        ;
        break;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    *(undefined1 *)(param_1 + 0x52) = 1;
    return;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x2b0) + 0xb9) = 1;
  uVar5 = DAT_1808acda0;
  plVar7 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar7 + *(int *)(param_1 + 0x68);
  if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar4 = *plVar7;
      lVar6 = FUN_180409a40(lVar4,*(undefined4 *)(lVar4 + 0x1c),uVar5);
      if (*(short *)(lVar4 + 0x32) != 0) {
        FUN_1804098c0(lVar6);
      }
      if (*(short *)(lVar4 + 0x30) != 0) {
        FUN_1804098c0(lVar6);
      }
      plVar11 = *(longlong **)(lVar4 + 0x28);
      plVar2 = plVar11 + *(int *)(lVar4 + 0x20);
      for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
        puVar10 = *(ushort **)(*plVar11 + 0x40);
        if (puVar10 == (ushort *)0x0) {
          puVar10 = &DAT_1808a95e4;
          goto LAB_180404120;
        }
        uVar3 = *puVar10;
        while (uVar3 != 0) {
LAB_180404120:
          uVar9 = (uint)*puVar10;
          if (*puVar10 <= puVar10[1]) {
            do {
              if (0xffff < uVar9) break;
              uVar8 = (ulonglong)(uVar9 & 0xffff);
              if (((ulonglong)(longlong)*(int *)(lVar6 + 0x20) <= uVar8) ||
                 (*(short *)(*(longlong *)(lVar6 + 0x28) + uVar8 * 2) == -1)) {
                FUN_180408100(lVar6,uVar8,0);
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 <= puVar10[1]);
          }
          puVar10 = puVar10 + 2;
          uVar3 = *puVar10;
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  *(undefined1 *)(param_1 + 0x52) = 1;
  return;
}



/* ===== 1804041c0 FUN_1804041c0 ===== */

void FUN_1804041c0(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x70);
  plVar2 = plVar7 + *(int *)(param_1 + 0x68);
  if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
    do {
      iVar4 = *(int *)(*plVar7 + 0x24);
      puVar1 = (undefined4 *)(*plVar7 + 0x20);
      if (iVar4 < 0) {
        iVar4 = (iVar4 + 1 >> 1) + iVar4;
        iVar6 = 0;
        if (0 < iVar4) {
          iVar6 = iVar4;
        }
        FUN_18000ba20(puVar1,iVar6);
      }
      plVar7 = plVar7 + 1;
      *puVar1 = 0;
    } while (plVar7 != plVar2);
  }
  lVar8 = *(longlong *)(param_1 + 0x80);
  lVar5 = (longlong)*(int *)(param_1 + 0x78) * 0xa0;
  lVar3 = lVar5 + lVar8;
  if (lVar5 != 0) {
    do {
      lVar5 = *(longlong *)(lVar8 + 0x80);
      iVar4 = *(int *)(lVar5 + 0x24);
      if (*(int *)(lVar5 + 0x20) == iVar4) {
        iVar6 = *(int *)(lVar5 + 0x20) + 1;
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        if (iVar6 < iVar4) {
          iVar6 = iVar4;
        }
        FUN_18000ba20(lVar5 + 0x20,iVar6);
      }
      *(longlong *)(*(longlong *)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x20) * 8) = lVar8;
      lVar8 = lVar8 + 0xa0;
      *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
    } while (lVar8 != lVar3);
  }
  return;
}



/* ===== 1804042b0 FUN_1804042b0 ===== */

void FUN_1804042b0(uint *param_1)

{
  longlong lVar1;
  char cVar2;
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
  float fVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  undefined4 uVar51;
  ushort *puVar52;
  longlong lVar53;
  undefined2 *puVar54;
  undefined8 *puVar55;
  char *pcVar56;
  int iVar57;
  int iVar58;
  undefined4 uVar59;
  int iVar60;
  char *pcVar61;
  longlong lVar62;
  int iVar63;
  char *pcVar64;
  uint uVar65;
  uint uVar66;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar51 = 2;
  if ((*param_1 >> 1 & 1) == 0) {
    uVar51 = 0xf5;
  }
  lVar1 = *(longlong *)(param_1 + 0xac);
  iVar57 = 0x1b;
  uVar59 = 2;
  if ((*param_1 & 2) == 0) {
    uVar59 = 0x1b;
  }
  local_68 = 0;
  uStack_60 = 0;
  puVar52 = (ushort *)FUN_180407f30(param_1,*(undefined4 *)(lVar1 + 0xec));
  if (puVar52 == (ushort *)0x0) {
    uVar51 = FUN_180403ea0(param_1,uVar51,uVar59,&local_68);
    uVar65 = (uint)local_68._2_2_;
    uVar66 = (uint)(ushort)local_68;
    *(undefined4 *)(lVar1 + 0xec) = uVar51;
    cVar49 = UNK_1808ad8bf;
    cVar48 = UNK_1808ad8be;
    cVar47 = UNK_1808ad8bd;
    cVar46 = UNK_1808ad8bc;
    cVar45 = UNK_1808ad8bb;
    cVar44 = UNK_1808ad8ba;
    cVar43 = UNK_1808ad8b9;
    cVar42 = UNK_1808ad8b8;
    cVar41 = UNK_1808ad8b7;
    cVar40 = UNK_1808ad8b6;
    cVar39 = UNK_1808ad8b5;
    cVar38 = UNK_1808ad8b4;
    cVar37 = UNK_1808ad8b3;
    cVar36 = UNK_1808ad8b2;
    cVar35 = UNK_1808ad8b1;
    cVar34 = DAT_1808ad8b0;
    lVar1 = *(longlong *)(param_1 + 0xe);
    iVar58 = *(int *)(lVar1 + 0x20);
    if ((*param_1 & 2) == 0) {
      pcVar56 = 
      "..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...." /* TRUNCATED STRING LITERAL */
      ;
      pcVar61 = 
      "..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...." /* TRUNCATED STRING LITERAL */
      ;
      if (iVar58 == 0) {
        iVar58 = 0x1b;
        lVar62 = (longlong)
                 (int)(((uint)local_68._2_2_ * *(int *)(lVar1 + 0x24) + uVar66) *
                      *(int *)(lVar1 + 0x2c)) + *(longlong *)(lVar1 + 0x30);
        do {
          lVar53 = 0;
          do {
            uVar51 = 0;
            if (pcVar61[lVar53] == '.') {
              uVar51 = 0xffffffff;
            }
            *(undefined4 *)(lVar62 + lVar53 * 4) = uVar51;
            uVar51 = 0;
            if (pcVar61[lVar53 + 1] == '.') {
              uVar51 = 0xffffffff;
            }
            *(undefined4 *)(lVar62 + 4 + lVar53 * 4) = uVar51;
            lVar53 = lVar53 + 2;
          } while (lVar53 != 0x7a);
          pcVar61 = pcVar61 + 0x7a;
          lVar62 = lVar62 + (longlong)*(int *)(lVar1 + 0x24) * 4;
          iVar58 = iVar58 + -1;
        } while (iVar58 != 0);
      }
      else if (iVar58 == 1) {
        iVar58 = 0x1b;
        pcVar64 = (char *)((longlong)
                           (int)(((uint)local_68._2_2_ * *(int *)(lVar1 + 0x24) + uVar66) *
                                *(int *)(lVar1 + 0x2c)) + *(longlong *)(lVar1 + 0x30));
        do {
          if ((pcVar61 + 0x79 < pcVar64) || (iVar60 = 0, pcVar64 + 0x79 < pcVar61)) {
            cVar50 = pcVar61[1];
            cVar2 = pcVar61[2];
            cVar3 = pcVar61[3];
            cVar4 = pcVar61[4];
            cVar5 = pcVar61[5];
            cVar6 = pcVar61[6];
            cVar7 = pcVar61[7];
            cVar8 = pcVar61[8];
            cVar9 = pcVar61[9];
            cVar10 = pcVar61[10];
            cVar11 = pcVar61[0xb];
            cVar12 = pcVar61[0xc];
            cVar13 = pcVar61[0xd];
            cVar14 = pcVar61[0xe];
            cVar15 = pcVar61[0xf];
            cVar16 = pcVar61[0x10];
            cVar17 = pcVar61[0x11];
            cVar18 = pcVar61[0x12];
            cVar19 = pcVar61[0x13];
            cVar20 = pcVar61[0x14];
            cVar21 = pcVar61[0x15];
            cVar22 = pcVar61[0x16];
            cVar23 = pcVar61[0x17];
            cVar24 = pcVar61[0x18];
            cVar25 = pcVar61[0x19];
            cVar26 = pcVar61[0x1a];
            cVar27 = pcVar61[0x1b];
            cVar28 = pcVar61[0x1c];
            cVar29 = pcVar61[0x1d];
            cVar30 = pcVar61[0x1e];
            cVar31 = pcVar61[0x1f];
            *pcVar64 = -(cVar34 == *pcVar61);
            pcVar64[1] = -(cVar35 == cVar50);
            pcVar64[2] = -(cVar36 == cVar2);
            pcVar64[3] = -(cVar37 == cVar3);
            pcVar64[4] = -(cVar38 == cVar4);
            pcVar64[5] = -(cVar39 == cVar5);
            pcVar64[6] = -(cVar40 == cVar6);
            pcVar64[7] = -(cVar41 == cVar7);
            pcVar64[8] = -(cVar42 == cVar8);
            pcVar64[9] = -(cVar43 == cVar9);
            pcVar64[10] = -(cVar44 == cVar10);
            pcVar64[0xb] = -(cVar45 == cVar11);
            pcVar64[0xc] = -(cVar46 == cVar12);
            pcVar64[0xd] = -(cVar47 == cVar13);
            pcVar64[0xe] = -(cVar48 == cVar14);
            pcVar64[0xf] = -(cVar49 == cVar15);
            cVar50 = pcVar61[0x20];
            cVar2 = pcVar61[0x21];
            cVar3 = pcVar61[0x22];
            cVar4 = pcVar61[0x23];
            cVar5 = pcVar61[0x24];
            cVar6 = pcVar61[0x25];
            cVar7 = pcVar61[0x26];
            cVar8 = pcVar61[0x27];
            cVar9 = pcVar61[0x28];
            cVar10 = pcVar61[0x29];
            cVar11 = pcVar61[0x2a];
            cVar12 = pcVar61[0x2b];
            cVar13 = pcVar61[0x2c];
            cVar14 = pcVar61[0x2d];
            cVar15 = pcVar61[0x2e];
            cVar32 = pcVar61[0x2f];
            pcVar64[0x10] = -(cVar34 == cVar16);
            pcVar64[0x11] = -(cVar35 == cVar17);
            pcVar64[0x12] = -(cVar36 == cVar18);
            pcVar64[0x13] = -(cVar37 == cVar19);
            pcVar64[0x14] = -(cVar38 == cVar20);
            pcVar64[0x15] = -(cVar39 == cVar21);
            pcVar64[0x16] = -(cVar40 == cVar22);
            pcVar64[0x17] = -(cVar41 == cVar23);
            pcVar64[0x18] = -(cVar42 == cVar24);
            pcVar64[0x19] = -(cVar43 == cVar25);
            pcVar64[0x1a] = -(cVar44 == cVar26);
            pcVar64[0x1b] = -(cVar45 == cVar27);
            pcVar64[0x1c] = -(cVar46 == cVar28);
            pcVar64[0x1d] = -(cVar47 == cVar29);
            pcVar64[0x1e] = -(cVar48 == cVar30);
            pcVar64[0x1f] = -(cVar49 == cVar31);
            cVar16 = pcVar61[0x30];
            cVar17 = pcVar61[0x31];
            cVar18 = pcVar61[0x32];
            cVar19 = pcVar61[0x33];
            cVar20 = pcVar61[0x34];
            cVar21 = pcVar61[0x35];
            cVar22 = pcVar61[0x36];
            cVar23 = pcVar61[0x37];
            cVar24 = pcVar61[0x38];
            cVar25 = pcVar61[0x39];
            cVar26 = pcVar61[0x3a];
            cVar27 = pcVar61[0x3b];
            cVar28 = pcVar61[0x3c];
            cVar29 = pcVar61[0x3d];
            cVar30 = pcVar61[0x3e];
            cVar31 = pcVar61[0x3f];
            pcVar64[0x20] = -(cVar34 == cVar50);
            pcVar64[0x21] = -(cVar35 == cVar2);
            pcVar64[0x22] = -(cVar36 == cVar3);
            pcVar64[0x23] = -(cVar37 == cVar4);
            pcVar64[0x24] = -(cVar38 == cVar5);
            pcVar64[0x25] = -(cVar39 == cVar6);
            pcVar64[0x26] = -(cVar40 == cVar7);
            pcVar64[0x27] = -(cVar41 == cVar8);
            pcVar64[0x28] = -(cVar42 == cVar9);
            pcVar64[0x29] = -(cVar43 == cVar10);
            pcVar64[0x2a] = -(cVar44 == cVar11);
            pcVar64[0x2b] = -(cVar45 == cVar12);
            pcVar64[0x2c] = -(cVar46 == cVar13);
            pcVar64[0x2d] = -(cVar47 == cVar14);
            pcVar64[0x2e] = -(cVar48 == cVar15);
            pcVar64[0x2f] = -(cVar49 == cVar32);
            pcVar64[0x30] = -(cVar34 == cVar16);
            pcVar64[0x31] = -(cVar35 == cVar17);
            pcVar64[0x32] = -(cVar36 == cVar18);
            pcVar64[0x33] = -(cVar37 == cVar19);
            pcVar64[0x34] = -(cVar38 == cVar20);
            pcVar64[0x35] = -(cVar39 == cVar21);
            pcVar64[0x36] = -(cVar40 == cVar22);
            pcVar64[0x37] = -(cVar41 == cVar23);
            pcVar64[0x38] = -(cVar42 == cVar24);
            pcVar64[0x39] = -(cVar43 == cVar25);
            pcVar64[0x3a] = -(cVar44 == cVar26);
            pcVar64[0x3b] = -(cVar45 == cVar27);
            pcVar64[0x3c] = -(cVar46 == cVar28);
            pcVar64[0x3d] = -(cVar47 == cVar29);
            pcVar64[0x3e] = -(cVar48 == cVar30);
            pcVar64[0x3f] = -(cVar49 == cVar31);
            iVar60 = 0x40;
          }
          do {
            cVar50 = '\0';
            if (pcVar61[iVar60] == '.') {
              cVar50 = -1;
            }
            iVar63 = iVar60 + 1;
            pcVar64[iVar60] = cVar50;
            iVar60 = iVar63;
          } while (iVar63 < 0x7a);
          pcVar61 = pcVar61 + 0x7a;
          pcVar64 = pcVar64 + *(int *)(lVar1 + 0x24);
          iVar58 = iVar58 + -1;
        } while (iVar58 != 0);
      }
      cVar49 = UNK_1808ade8f;
      cVar48 = UNK_1808ade8e;
      cVar47 = UNK_1808ade8d;
      cVar46 = UNK_1808ade8c;
      cVar45 = UNK_1808ade8b;
      cVar44 = UNK_1808ade8a;
      cVar43 = UNK_1808ade89;
      cVar42 = UNK_1808ade88;
      cVar41 = UNK_1808ade87;
      cVar40 = UNK_1808ade86;
      cVar39 = UNK_1808ade85;
      cVar38 = UNK_1808ade84;
      cVar37 = UNK_1808ade83;
      cVar36 = UNK_1808ade82;
      cVar35 = UNK_1808ade81;
      cVar34 = DAT_1808ade80;
      lVar1 = *(longlong *)(param_1 + 0xe);
      if (*(int *)(lVar1 + 0x20) == 0) {
        lVar62 = (longlong)
                 (int)(((ushort)local_68 + 0x7b + uVar65 * *(int *)(lVar1 + 0x24)) *
                      *(int *)(lVar1 + 0x2c)) + *(longlong *)(lVar1 + 0x30);
        do {
          lVar53 = 0;
          do {
            uVar51 = 0;
            if (pcVar56[lVar53] == 'X') {
              uVar51 = 0xffffffff;
            }
            *(undefined4 *)(lVar62 + lVar53 * 4) = uVar51;
            uVar51 = 0;
            if (pcVar56[lVar53 + 1] == 'X') {
              uVar51 = 0xffffffff;
            }
            *(undefined4 *)(lVar62 + 4 + lVar53 * 4) = uVar51;
            lVar53 = lVar53 + 2;
          } while (lVar53 != 0x7a);
          pcVar56 = pcVar56 + 0x7a;
          lVar62 = lVar62 + (longlong)*(int *)(lVar1 + 0x24) * 4;
          iVar57 = iVar57 + -1;
        } while (iVar57 != 0);
      }
      else if (*(int *)(lVar1 + 0x20) == 1) {
        pcVar61 = (char *)((longlong)
                           (int)(((ushort)local_68 + 0x7b + uVar65 * *(int *)(lVar1 + 0x24)) *
                                *(int *)(lVar1 + 0x2c)) + *(longlong *)(lVar1 + 0x30));
        do {
          if ((pcVar56 + 0x79 < pcVar61) || (iVar58 = 0, pcVar61 + 0x79 < pcVar56)) {
            cVar50 = pcVar56[1];
            cVar2 = pcVar56[2];
            cVar3 = pcVar56[3];
            cVar4 = pcVar56[4];
            cVar5 = pcVar56[5];
            cVar6 = pcVar56[6];
            cVar7 = pcVar56[7];
            cVar8 = pcVar56[8];
            cVar9 = pcVar56[9];
            cVar10 = pcVar56[10];
            cVar11 = pcVar56[0xb];
            cVar12 = pcVar56[0xc];
            cVar13 = pcVar56[0xd];
            cVar14 = pcVar56[0xe];
            cVar15 = pcVar56[0xf];
            cVar16 = pcVar56[0x10];
            cVar17 = pcVar56[0x11];
            cVar18 = pcVar56[0x12];
            cVar19 = pcVar56[0x13];
            cVar20 = pcVar56[0x14];
            cVar21 = pcVar56[0x15];
            cVar22 = pcVar56[0x16];
            cVar23 = pcVar56[0x17];
            cVar24 = pcVar56[0x18];
            cVar25 = pcVar56[0x19];
            cVar26 = pcVar56[0x1a];
            cVar27 = pcVar56[0x1b];
            cVar28 = pcVar56[0x1c];
            cVar29 = pcVar56[0x1d];
            cVar30 = pcVar56[0x1e];
            cVar31 = pcVar56[0x1f];
            *pcVar61 = -(cVar34 == *pcVar56);
            pcVar61[1] = -(cVar35 == cVar50);
            pcVar61[2] = -(cVar36 == cVar2);
            pcVar61[3] = -(cVar37 == cVar3);
            pcVar61[4] = -(cVar38 == cVar4);
            pcVar61[5] = -(cVar39 == cVar5);
            pcVar61[6] = -(cVar40 == cVar6);
            pcVar61[7] = -(cVar41 == cVar7);
            pcVar61[8] = -(cVar42 == cVar8);
            pcVar61[9] = -(cVar43 == cVar9);
            pcVar61[10] = -(cVar44 == cVar10);
            pcVar61[0xb] = -(cVar45 == cVar11);
            pcVar61[0xc] = -(cVar46 == cVar12);
            pcVar61[0xd] = -(cVar47 == cVar13);
            pcVar61[0xe] = -(cVar48 == cVar14);
            pcVar61[0xf] = -(cVar49 == cVar15);
            cVar50 = pcVar56[0x20];
            cVar2 = pcVar56[0x21];
            cVar3 = pcVar56[0x22];
            cVar4 = pcVar56[0x23];
            cVar5 = pcVar56[0x24];
            cVar6 = pcVar56[0x25];
            cVar7 = pcVar56[0x26];
            cVar8 = pcVar56[0x27];
            cVar9 = pcVar56[0x28];
            cVar10 = pcVar56[0x29];
            cVar11 = pcVar56[0x2a];
            cVar12 = pcVar56[0x2b];
            cVar13 = pcVar56[0x2c];
            cVar14 = pcVar56[0x2d];
            cVar15 = pcVar56[0x2e];
            cVar32 = pcVar56[0x2f];
            pcVar61[0x10] = -(cVar34 == cVar16);
            pcVar61[0x11] = -(cVar35 == cVar17);
            pcVar61[0x12] = -(cVar36 == cVar18);
            pcVar61[0x13] = -(cVar37 == cVar19);
            pcVar61[0x14] = -(cVar38 == cVar20);
            pcVar61[0x15] = -(cVar39 == cVar21);
            pcVar61[0x16] = -(cVar40 == cVar22);
            pcVar61[0x17] = -(cVar41 == cVar23);
            pcVar61[0x18] = -(cVar42 == cVar24);
            pcVar61[0x19] = -(cVar43 == cVar25);
            pcVar61[0x1a] = -(cVar44 == cVar26);
            pcVar61[0x1b] = -(cVar45 == cVar27);
            pcVar61[0x1c] = -(cVar46 == cVar28);
            pcVar61[0x1d] = -(cVar47 == cVar29);
            pcVar61[0x1e] = -(cVar48 == cVar30);
            pcVar61[0x1f] = -(cVar49 == cVar31);
            cVar16 = pcVar56[0x30];
            cVar17 = pcVar56[0x31];
            cVar18 = pcVar56[0x32];
            cVar19 = pcVar56[0x33];
            cVar20 = pcVar56[0x34];
            cVar21 = pcVar56[0x35];
            cVar22 = pcVar56[0x36];
            cVar23 = pcVar56[0x37];
            cVar24 = pcVar56[0x38];
            cVar25 = pcVar56[0x39];
            cVar26 = pcVar56[0x3a];
            cVar27 = pcVar56[0x3b];
            cVar28 = pcVar56[0x3c];
            cVar29 = pcVar56[0x3d];
            cVar30 = pcVar56[0x3e];
            cVar31 = pcVar56[0x3f];
            pcVar61[0x20] = -(cVar34 == cVar50);
            pcVar61[0x21] = -(cVar35 == cVar2);
            pcVar61[0x22] = -(cVar36 == cVar3);
            pcVar61[0x23] = -(cVar37 == cVar4);
            pcVar61[0x24] = -(cVar38 == cVar5);
            pcVar61[0x25] = -(cVar39 == cVar6);
            pcVar61[0x26] = -(cVar40 == cVar7);
            pcVar61[0x27] = -(cVar41 == cVar8);
            pcVar61[0x28] = -(cVar42 == cVar9);
            pcVar61[0x29] = -(cVar43 == cVar10);
            pcVar61[0x2a] = -(cVar44 == cVar11);
            pcVar61[0x2b] = -(cVar45 == cVar12);
            pcVar61[0x2c] = -(cVar46 == cVar13);
            pcVar61[0x2d] = -(cVar47 == cVar14);
            pcVar61[0x2e] = -(cVar48 == cVar15);
            pcVar61[0x2f] = -(cVar49 == cVar32);
            pcVar61[0x30] = -(cVar34 == cVar16);
            pcVar61[0x31] = -(cVar35 == cVar17);
            pcVar61[0x32] = -(cVar36 == cVar18);
            pcVar61[0x33] = -(cVar37 == cVar19);
            pcVar61[0x34] = -(cVar38 == cVar20);
            pcVar61[0x35] = -(cVar39 == cVar21);
            pcVar61[0x36] = -(cVar40 == cVar22);
            pcVar61[0x37] = -(cVar41 == cVar23);
            pcVar61[0x38] = -(cVar42 == cVar24);
            pcVar61[0x39] = -(cVar43 == cVar25);
            pcVar61[0x3a] = -(cVar44 == cVar26);
            pcVar61[0x3b] = -(cVar45 == cVar27);
            pcVar61[0x3c] = -(cVar46 == cVar28);
            pcVar61[0x3d] = -(cVar47 == cVar29);
            pcVar61[0x3e] = -(cVar48 == cVar30);
            pcVar61[0x3f] = -(cVar49 == cVar31);
            iVar58 = 0x40;
          }
          do {
            cVar50 = '\0';
            if (pcVar56[iVar58] == 'X') {
              cVar50 = -1;
            }
            iVar60 = iVar58 + 1;
            pcVar61[iVar58] = cVar50;
            iVar58 = iVar60;
          } while (iVar60 < 0x7a);
          pcVar56 = pcVar56 + 0x7a;
          pcVar61 = pcVar61 + *(int *)(lVar1 + 0x24);
          iVar57 = iVar57 + -1;
        } while (iVar57 != 0);
      }
    }
    else if (iVar58 == 0) {
      puVar55 = (undefined8 *)
                ((longlong)
                 (int)(((uint)local_68._2_2_ * *(int *)(lVar1 + 0x24) + (uint)(ushort)local_68) *
                      *(int *)(lVar1 + 0x2c)) + *(longlong *)(lVar1 + 0x30));
      *puVar55 = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar55 + (longlong)*(int *)(lVar1 + 0x24) * 4) = 0xffffffffffffffff
      ;
    }
    else if (iVar58 == 1) {
      puVar54 = (undefined2 *)
                ((longlong)
                 (int)((uVar65 * *(int *)(lVar1 + 0x24) + uVar66) * *(int *)(lVar1 + 0x2c)) +
                *(longlong *)(lVar1 + 0x30));
      *puVar54 = 0xffff;
      *(undefined2 *)((longlong)*(int *)(lVar1 + 0x24) + (longlong)puVar54) = 0xffff;
    }
  }
  else {
    uVar66 = (uint)*puVar52;
    uVar65 = (uint)puVar52[1];
  }
  fVar33 = DAT_1808ac1f4;
  param_1[0x17] = (uint)(((float)uVar66 + DAT_1808ac1f4) * (float)param_1[0x15]);
  param_1[0x18] = (uint)(((float)uVar65 + fVar33) * (float)param_1[0x16]);
  return;
}



/* ===== 1804046b0 FUN_1804046b0 ===== */

void FUN_1804046b0(byte *param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  float fVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if ((*param_1 & 4) == 0) {
    lVar18 = *(longlong *)(param_1 + 0x2b0);
    lVar3 = *(longlong *)(param_1 + 0x38);
    local_68 = 0;
    uStack_60 = 0;
    puVar8 = (ushort *)FUN_180407f30(param_1,*(undefined4 *)(lVar18 + 0xf0));
    fVar4 = DAT_1808ac1f4;
    if (puVar8 == (ushort *)0x0) {
      uVar6 = FUN_180403ea0(param_1,0x22,0x21,&local_68);
      fVar4 = DAT_1808ac1f4;
      uVar1 = (ushort)local_68;
      uVar2 = local_68._2_2_;
      *(undefined4 *)(lVar18 + 0xf0) = uVar6;
      uVar5 = local_68._4_2_;
      uVar12 = 0;
      do {
        iVar9 = (int)uVar12;
        iVar7 = (int)((uint)uVar5 - iVar9) / 2;
        lVar18 = (longlong)iVar7;
        iVar13 = ((uint)uVar5 - iVar7) - iVar9;
        if (*(int *)(lVar3 + 0x20) == 1) {
          lVar16 = (longlong)
                   (int)(((iVar9 + (uint)uVar2) * *(int *)(lVar3 + 0x24) + (uint)uVar1) *
                        *(int *)(lVar3 + 0x2c)) + *(longlong *)(lVar3 + 0x30);
          if (0 < iVar7) {
            FUN_180540170(lVar16,0,lVar18);
          }
          if (iVar9 != 0) {
            FUN_180540170(lVar16 + lVar18,0xff,uVar12);
          }
          if (0 < iVar13) {
            FUN_180540170(uVar12 + lVar16 + lVar18,0,(longlong)iVar13);
          }
        }
        else if (*(int *)(lVar3 + 0x20) == 0) {
          puVar17 = (undefined4 *)
                    ((longlong)
                     (int)(((iVar9 + (uint)uVar2) * *(int *)(lVar3 + 0x24) + (uint)uVar1) *
                          *(int *)(lVar3 + 0x2c)) + *(longlong *)(lVar3 + 0x30));
          if (0 < iVar7) {
            puVar14 = puVar17;
            for (lVar16 = lVar18; lVar16 != 0; lVar16 = lVar16 + -1) {
              *puVar14 = 0xffffff;
              puVar14 = puVar14 + 1;
            }
          }
          if (iVar9 != 0) {
            FUN_180540170(puVar17 + lVar18,0xffffffff,uVar12 << 2);
          }
          if (0 < iVar13) {
            puVar17 = puVar17 + uVar12 + lVar18;
            for (lVar16 = (longlong)iVar13; lVar16 != 0; lVar16 = lVar16 + -1) {
              *puVar17 = 0xffffff;
              puVar17 = puVar17 + 1;
            }
          }
        }
        fVar20 = *(float *)(param_1 + 0x58);
        fVar19 = *(float *)(param_1 + 0x54);
        *(float *)(param_1 + uVar12 * 0x10 + 0x88) = fVar19 * (float)(int)((uVar1 - 1) + iVar7);
        fVar20 = (fVar20 * (float)(int)(iVar9 + (uint)uVar2 + 1) +
                 fVar20 * (float)(int)(iVar9 + (uint)uVar2)) * fVar4;
        *(float *)(param_1 + uVar12 * 0x10 + 0x8c) = fVar20;
        *(float *)(param_1 + uVar12 * 0x10 + 0x90) =
             fVar19 * (float)(int)(uVar1 + 1 + iVar7 + iVar9);
        *(float *)(param_1 + uVar12 * 0x10 + 0x94) = fVar20;
        uVar12 = (ulonglong)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < 0x21);
    }
    else {
      uVar15 = (uint)*puVar8;
      uVar11 = 0;
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      do {
        iVar9 = uVar2 - uVar11;
        iVar7 = iVar9;
        if (iVar9 < 0) {
          iVar7 = iVar9 + 1;
        }
        fVar20 = *(float *)(param_1 + 0x58);
        iVar13 = uVar11 + uVar1;
        fVar19 = *(float *)(param_1 + 0x54);
        uVar12 = (ulonglong)uVar11;
        iVar7 = (iVar7 >> 1) + uVar15;
        *(float *)(param_1 + uVar12 * 0x10 + 0x88) = fVar19 * (float)(iVar7 + -1);
        fVar20 = (fVar20 * (float)(iVar13 + 1) + fVar20 * (float)iVar13) * fVar4;
        *(float *)(param_1 + uVar12 * 0x10 + 0x8c) = fVar20;
        *(float *)(param_1 + uVar12 * 0x10 + 0x90) = fVar19 * (float)(int)(iVar7 + 1 + uVar11);
        *(float *)(param_1 + uVar12 * 0x10 + 0x94) = fVar20;
        iVar7 = iVar9 + -1;
        if (iVar9 + -1 < 0) {
          iVar7 = iVar9;
        }
        fVar20 = *(float *)(param_1 + 0x54);
        iVar7 = (iVar7 >> 1) + uVar15;
        iVar10 = iVar9 + -2;
        fVar19 = (*(float *)(param_1 + 0x58) * (float)(iVar13 + 2) +
                 *(float *)(param_1 + 0x58) * (float)(iVar13 + 1)) * fVar4;
        *(float *)(param_1 + uVar12 * 0x10 + 0x98) = fVar20 * (float)(iVar7 + -1);
        *(float *)(param_1 + uVar12 * 0x10 + 0x9c) = fVar19;
        *(float *)(param_1 + uVar12 * 0x10 + 0xa0) = fVar20 * (float)(int)(iVar7 + 2 + uVar11);
        *(float *)(param_1 + uVar12 * 0x10 + 0xa4) = fVar19;
        if (iVar10 < 0) {
          iVar10 = iVar9 + -1;
        }
        fVar20 = *(float *)(param_1 + 0x58);
        fVar19 = *(float *)(param_1 + 0x54);
        iVar7 = (iVar10 >> 1) + uVar15;
        iVar9 = iVar7 + 3 + uVar11;
        uVar11 = uVar11 + 3;
        *(float *)(param_1 + uVar12 * 0x10 + 0xa8) = fVar19 * (float)(iVar7 + -1);
        fVar20 = (fVar20 * (float)(iVar13 + 3) + fVar20 * (float)(iVar13 + 2)) * fVar4;
        *(float *)(param_1 + uVar12 * 0x10 + 0xac) = fVar20;
        *(float *)(param_1 + uVar12 * 0x10 + 0xb0) = fVar19 * (float)iVar9;
        *(float *)(param_1 + uVar12 * 0x10 + 0xb4) = fVar20;
      } while ((int)uVar11 < 0x21);
    }
  }
  return;
}



/* ===== 180404ae0 FUN_180404ae0 ===== */

undefined1 FUN_180404ae0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 uVar7;
  
  plVar6 = *(longlong **)(param_2 + 0x28);
  uVar7 = 1;
  plVar1 = plVar6 + *(int *)(param_2 + 0x20);
  uVar5 = uVar7;
  if (((longlong)*(int *)(param_2 + 0x20) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar4 = *(longlong *)(*plVar6 + 0x88);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x2b8);
      }
      if ((*(code **)(lVar4 + 0x18) == (code *)0x0) ||
         (cVar3 = (**(code **)(lVar4 + 0x18))(param_1), cVar3 != '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      uVar5 = 0;
      if (bVar2) {
        uVar5 = uVar7;
      }
      plVar6 = plVar6 + 1;
      uVar7 = uVar5;
    } while (plVar6 != plVar1);
  }
  return uVar5;
}



/* ===== 180404b70 FUN_180404b70 ===== */

void FUN_180404b70(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2[1] != 0) {
    FUN_1804059d0();
  }
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = 0;
  plVar3 = (longlong *)param_2[5];
  plVar1 = plVar3 + *(int *)(param_2 + 4);
  if (((longlong)*(int *)(param_2 + 4) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar2 = *(longlong *)(*plVar3 + 0x88);
      if (((lVar2 != 0) || (lVar2 = *(longlong *)(param_1 + 0x2b8), lVar2 != 0)) &&
         (*(code **)(lVar2 + 0x20) != (code *)0x0)) {
        (**(code **)(lVar2 + 0x20))(param_1);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return;
}



/* ===== 180404c10 FUN_180404c10 ===== */

void FUN_180404c10(longlong param_1,undefined8 *param_2,longlong param_3)

{
  short sVar1;
  char cVar2;
  short *psVar3;
  short local_28 [4];
  short local_20 [4];
  
  if (*(char *)(param_3 + 0x35) == '\0') {
    if (param_2[1] != 0) {
      FUN_1804059d0();
    }
    *(undefined1 *)((longlong)param_2 + 0x34) = 0;
    *param_2 = 0;
    param_2[1] = param_1;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  local_20[0] = *(short *)((longlong)param_2 + 0x32);
  local_20[1] = -3;
  local_20[2] = 0x3f;
  local_20[3] = 0x20;
  if (*(short *)((longlong)param_2 + 0x32) == 0) {
    psVar3 = local_20;
    do {
      sVar1 = *psVar3;
      if ((sVar1 != 0) && (cVar2 = FUN_1804099b0(param_2,sVar1), cVar2 != '\0')) {
        *(short *)((longlong)param_2 + 0x32) = sVar1;
        break;
      }
      psVar3 = psVar3 + 1;
    } while (psVar3 != local_20 + 4);
  }
  local_28[0] = *(short *)(param_3 + 0x3a);
  local_28[1] = 0x2026;
  local_28[2] = 0x85;
  if (*(short *)(param_2 + 6) == 0) {
    psVar3 = local_28;
    do {
      sVar1 = *psVar3;
      if ((sVar1 != 0) && (cVar2 = FUN_1804099b0(param_2,sVar1), cVar2 != '\0')) {
        *(short *)(param_2 + 6) = sVar1;
        break;
      }
      psVar3 = psVar3 + 1;
    } while (psVar3 != local_28 + 3);
  }
  if (*(short *)(param_2 + 6) == 0) {
    *(undefined2 *)(param_2 + 6) = 0x85;
    *(undefined1 *)((longlong)param_2 + 0x35) = 1;
  }
  return;
}



/* ===== 180404d10 FUN_180404d10 ===== */

void FUN_180404d10(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  
  lVar4 = DAT_180ca0a50;
  if (*(char *)(param_2 + 0x34) != '\0') {
    lVar3 = *(longlong *)(param_2 + 0x28);
    if ((lVar3 != 0) && (DAT_180ca0a50 != 0)) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar7 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar7 != *piVar1) {
        iVar6 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        lVar2 = DAT_180ca0a50 + 0x29c0;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar2 + (longlong)sVar5 * 8);
        *piVar7 = *piVar1;
        *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      piVar1 = (int *)(lVar4 + 0x29b8);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_1805277b0(lVar3);
  }
  lVar4 = *(longlong *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x28) = 0;
  lVar3 = DAT_180ca0a50;
  if (lVar4 != 0) {
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
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



/* ===== 180404e40 FUN_180404e40 ===== */

undefined8 FUN_180404e40(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  uint local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  
  lVar2 = *(longlong *)(param_2 + 0x58);
  lVar5 = FUN_180409940(param_2,0x2e);
  if (lVar5 == 0) {
    lVar5 = FUN_180409940(param_2,0xff0e);
    if (lVar5 == 0) {
      return 0;
    }
  }
  uVar7 = (ulonglong)(*(uint *)(lVar5 + 0x28) & 0x7ffff);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
  lVar9 = (longlong)
          (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) + uVar7 * 4) << 0xc) >> 0xc
  ;
  fVar10 = (*(float *)(lVar5 + 0x10) - *(float *)(lVar5 + 8)) + DAT_1808ac34c;
  local_40 = FUN_180407b60(param_1,(uint)*(ushort *)(lVar3 + 4 + lVar9 * 8) * 3 + 2,
                           *(undefined2 *)(lVar3 + 6 + lVar9 * 8),0);
  local_60 = *(float *)(lVar5 + 8);
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
  local_68 = (uint)*(ushort *)(lVar2 + 0x30) << 6 | 2;
  local_58 = (fVar10 * DAT_1808ac658 + local_60) - DAT_1808ac34c;
  local_54 = *(undefined4 *)(lVar5 + 0x14);
  local_64 = *(float *)(lVar5 + 4);
  if (*(float *)(lVar5 + 4) <= local_58) {
    local_64 = local_58;
  }
  lVar9 = (longlong)
          (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                   (ulonglong)(local_40 & 0x7ffff) * 4) << 0xc) >> 0xc;
  local_5c = *(undefined4 *)(lVar5 + 0xc);
  uVar6 = FUN_180409370(param_1,param_2,0,&local_68);
  iVar8 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
  lVar5 = (longlong)
          (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) + uVar7 * 4) << 0xc) >> 0xc
  ;
  do {
    uVar1 = *(ushort *)(lVar2 + 4 + lVar5 * 8);
    FUN_180402ef0(uVar4,*(undefined2 *)(lVar2 + lVar5 * 8),*(undefined2 *)(lVar2 + 2 + lVar5 * 8),
                  uVar4,(uVar1 + 1) * iVar8 + (uint)*(ushort *)(lVar3 + lVar9 * 8),
                  *(undefined2 *)(lVar3 + 2 + lVar9 * 8),uVar1,
                  *(undefined2 *)(lVar2 + 6 + lVar5 * 8));
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  FUN_180402fa0(uVar4,*(undefined2 *)(lVar3 + lVar9 * 8),*(undefined2 *)(lVar3 + 2 + lVar9 * 8),
                *(undefined2 *)(lVar3 + 4 + lVar9 * 8),*(undefined2 *)(lVar3 + 6 + lVar9 * 8));
  *(undefined1 *)(param_1 + 0x52) = 0;
  return uVar6;
}



/* ===== 180405080 FUN_180405080 ===== */

void FUN_180405080(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_38;
  float local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(short *)(lVar1 + 0x32) != 0) {
    lVar2 = FUN_180409940();
    if (lVar2 != 0) goto LAB_18040511f;
  }
  lVar2 = FUN_180409940(param_1,0x20);
  local_10 = 0xffffffff;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  if (lVar2 == 0) {
    local_34 = (float)(int)(*(float *)(param_1 + 0x14) * DAT_1808ac1b0 + DAT_1808ac1f4);
  }
  else {
    local_34 = *(float *)(lVar2 + 4);
  }
  lVar2 = FUN_180409370(*(undefined8 *)(lVar1 + 8),param_1,0,&local_38);
LAB_18040511f:
  *(int *)(param_1 + 0x40) = (int)((lVar2 - *(longlong *)(param_1 + 0x38)) / 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 4);
  return;
}



/* ===== 180405160 FUN_180405160 ===== */

/* WARNING: Removing unreachable block (ram,0x000180405283) */
/* WARNING: Removing unreachable block (ram,0x00018040528f) */
/* WARNING: Removing unreachable block (ram,0x0001804052ab) */
/* WARNING: Removing unreachable block (ram,0x0001804052e6) */
/* WARNING: Removing unreachable block (ram,0x0001804052f1) */

undefined8 *
FUN_180405160(longlong param_1,longlong param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 local_108;
  float local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  if ((DAT_180ca0a50 != 0) && ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
    FUN_1803f5060("[font] Created baked %.2fpx\n",(double)param_3);
  }
  lVar8 = *(longlong *)(param_1 + 0x2b0);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_98 = 0xffffffff;
  iVar2 = *(int *)(lVar8 + 0xc0);
  if (iVar2 == *(int *)(lVar8 + 0xc4)) {
    FUN_18040c630(lVar8 + 0xc0,*(int *)(lVar8 + 0xc4) + 0x20);
  }
  uVar6 = iVar2 >> 0x1f & 0x1f;
  uVar3 = iVar2 + uVar6;
  puVar9 = (undefined8 *)
           ((longlong)(int)((uVar3 & 0x1f) - uVar6) * 0x68 +
           *(longlong *)(*(longlong *)(lVar8 + 0xd0) + (longlong)((int)uVar3 >> 5) * 8));
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  *(undefined4 *)(puVar9 + 8) = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar9 + 0x44) = local_98._4_4_;
  *(undefined4 *)(puVar9 + 9) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_90._4_4_;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  *(int *)(lVar8 + 0xc0) = *(int *)(lVar8 + 0xc0) + 1;
  *(float *)((longlong)puVar9 + 0x14) = param_3;
  *(undefined4 *)(puVar9 + 3) = param_4;
  *(undefined4 *)((longlong)puVar9 + 0x54) = param_5;
  puVar9[0xb] = param_2;
  *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + 0xa4);
  lVar8 = 0;
  plVar5 = *(longlong **)(param_2 + 0x28);
  plVar1 = plVar5 + *(int *)(param_2 + 0x20);
  if (((longlong)*(int *)(param_2 + 0x20) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar7 = *(longlong *)(*plVar5 + 0x88);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(param_1 + 0x2b8);
      }
      lVar8 = lVar8 + *(longlong *)(lVar7 + 0x48);
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    if (lVar8 != 0) {
      lVar8 = _malloc_base(lVar8);
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      goto LAB_180405395;
    }
  }
  lVar8 = 0;
LAB_180405395:
  puVar9[0xc] = lVar8;
  plVar5 = *(longlong **)(param_2 + 0x28);
  plVar1 = plVar5 + *(int *)(param_2 + 0x20);
  if (((longlong)*(int *)(param_2 + 0x20) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar7 = *(longlong *)(*plVar5 + 0x88);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(param_1 + 0x2b8);
      }
      if (*(code **)(lVar7 + 0x30) != (code *)0x0) {
        (**(code **)(lVar7 + 0x30))(param_1,*plVar5,puVar9,lVar8);
      }
      lVar8 = lVar8 + *(longlong *)(lVar7 + 0x48);
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  puVar4 = (uint *)FUN_180409940(puVar9,0x20);
  if (puVar4 != (uint *)0x0) {
    *puVar4 = *puVar4 & 0xfffffffd;
  }
  lVar8 = FUN_180409940(puVar9,9);
  if ((lVar8 == 0) && (puVar4 != (uint *)0x0)) {
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0xffffffff;
    local_108 = 0x240;
    local_104 = (float)puVar4[1] * DAT_1808ac710;
    FUN_180409370(param_1,puVar9,0,&local_108);
  }
  return puVar9;
}



/* ===== 1804054a0 FUN_1804054a0 ===== */

longlong FUN_1804054a0(longlong param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  iVar9 = 0;
  iVar2 = *(int *)(lVar3 + 0xc0);
  do {
    lVar7 = 0;
    lVar6 = 0;
    uVar8 = 0;
    if (iVar2 < 4) {
      if (0 < iVar2) {
        lVar5 = *(longlong *)(lVar3 + 0xd0);
        goto LAB_1804056ae;
      }
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0xd0);
      do {
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 >> 5) * 8) +
                (ulonglong)(uVar8 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 + 1 >> 5) * 8) +
                (ulonglong)(uVar8 + 1 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 + 2 >> 5) * 8) +
                (ulonglong)(uVar8 + 2 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 + 3 >> 5) * 8) +
                (ulonglong)(uVar8 + 3 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
        uVar8 = uVar8 + 4;
      } while ((int)uVar8 < iVar2 + -3);
      for (; (int)uVar8 < iVar2; uVar8 = uVar8 + 1) {
LAB_1804056ae:
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 >> 5) * 8) +
                (ulonglong)(uVar8 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
      }
      if (lVar7 != 0) {
        if (lVar6 == 0) {
          return lVar7;
        }
        if (*(float *)(lVar7 + 0x14) < param_3 + param_3) {
          return lVar6;
        }
        if (param_3 * DAT_1808ac1f4 < *(float *)(lVar6 + 0x14)) {
          return lVar7;
        }
      }
      if (lVar6 != 0) {
        return lVar6;
      }
    }
    iVar9 = iVar9 + 1;
    if (1 < iVar9) {
      return 0;
    }
  } while( true );
}



/* ===== 180405770 FUN_180405770 ===== */

void FUN_180405770(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  if ((DAT_180ca0a50 != 0) && ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
    if (*(int *)(param_2 + 4) == 0) {
      pcVar10 = "<unknown>";
    }
    else {
      pcVar10 = *(char **)param_2[5];
    }
    FUN_1803f5060("[font] Discard baked %.2f for \"%s\"\n",(double)*(float *)(param_3 + 0x14),
                  pcVar10);
  }
  lVar9 = *(longlong *)(param_3 + 0x38);
  lVar5 = (longlong)*(int *)(param_3 + 0x30) * 0x2c;
  lVar11 = lVar5 + lVar9;
  if (lVar5 != 0) {
    do {
      if (*(int *)(lVar9 + 0x28) != -1) {
        FUN_180407a80(param_1);
      }
      lVar9 = lVar9 + 0x2c;
    } while (lVar9 != lVar11);
  }
  plVar8 = (longlong *)param_2[5];
  lVar11 = *(longlong *)(param_3 + 0x60);
  plVar1 = plVar8 + *(int *)(param_2 + 4);
  if (((longlong)*(int *)(param_2 + 4) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar9 = *(longlong *)(*plVar8 + 0x88);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(param_1 + 0x2b8);
      }
      if (*(code **)(lVar9 + 0x38) != (code *)0x0) {
        (**(code **)(lVar9 + 0x38))(param_1,*plVar8,param_3,lVar11);
      }
      lVar11 = lVar11 + *(longlong *)(lVar9 + 0x48);
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  lVar9 = DAT_180ca0a50;
  lVar11 = *(longlong *)(param_3 + 0x60);
  if (lVar11 != 0) {
    if (DAT_180ca0a50 != 0) {
      piVar7 = (int *)(DAT_180ca0a50 + 4);
      piVar6 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar6 != *piVar7) {
        iVar4 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        lVar5 = DAT_180ca0a50 + 0x29c0;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar3;
        piVar6 = (int *)(lVar5 + (longlong)sVar3 * 8);
        *piVar6 = *piVar7;
        *(undefined4 *)(lVar9 + 0x29c4 + (longlong)sVar3 * 8) = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar7 = (int *)(lVar9 + 0x29b8);
      *piVar7 = *piVar7 + 1;
    }
    thunk_FUN_1805277b0(lVar11);
    *(undefined8 *)(param_3 + 0x60) = 0;
  }
  FUN_1803d8480(lVar2 + 0xd8,*(undefined4 *)(param_3 + 0x54),0);
  piVar7 = (int *)(lVar2 + 0xe8);
  *piVar7 = *piVar7 + 1;
  *(undefined4 *)(param_3 + 0x10) = 0;
  lVar11 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_3 + 0x38);
  if (lVar2 != 0) {
    *(undefined8 *)(param_3 + 0x30) = 0;
    if (lVar11 != 0) {
      piVar7 = (int *)(lVar11 + 0x29c0 + (longlong)*(short *)(lVar11 + 0x29bc) * 8);
      if (*piVar7 != *(int *)(lVar11 + 4)) {
        iVar4 = *(short *)(lVar11 + 0x29bc) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(lVar11 + 0x29bc) = sVar3;
        piVar7 = (int *)(lVar11 + 0x29c0 + (longlong)sVar3 * 8);
        *piVar7 = *(int *)(lVar11 + 4);
        *(undefined4 *)(lVar11 + 0x29c4 + (longlong)sVar3 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar11 + 0x29b8) = *(int *)(lVar11 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar2);
    *(undefined8 *)(param_3 + 0x38) = 0;
  }
  FUN_1803d6150(param_3);
  FUN_1803d6150(param_3 + 0x20);
  *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) & 0xfc000000;
  *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) | 0x4000000;
  *(undefined4 *)(param_3 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_3 + 0x44) = 0;
  *param_2 = 0;
  return;
}



/* ===== 1804059d0 FUN_1804059d0 ===== */

void FUN_1804059d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  if ((lVar1 != 0) && (uVar4 = 0, 0 < *(int *)(lVar1 + 0xc0))) {
    do {
      uVar2 = uVar4 & 0x1f;
      uVar3 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = uVar4 + 0x1f;
        uVar2 = uVar2 - 0x20;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0xd0) + (longlong)((int)uVar3 >> 5) * 8) +
              (longlong)(int)uVar2 * 0x68;
      if (((*(int *)(lVar5 + 0x50) <= *(int *)(*(longlong *)(param_1 + 0x2b0) + 0xa4)) &&
          (*(longlong *)(lVar5 + 0x58) == param_2)) && ((*(uint *)(lVar5 + 0x4c) & 0x4000000) == 0))
      {
        FUN_180405770(param_1,param_2);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(lVar1 + 0xc0));
  }
  return;
}



/* ===== 180405a80 FUN_180405a80 ===== */

void FUN_180405a80(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2b0);
  uVar4 = 0;
  if (0 < *(int *)(lVar1 + 0xc0)) {
    do {
      uVar2 = uVar4 & 0x1f;
      uVar3 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = uVar4 + 0x1f;
        uVar2 = uVar2 - 0x20;
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0xd0) + (longlong)((int)uVar3 >> 5) * 8) +
              (longlong)(int)uVar2 * 0x68;
      if (((*(int *)(lVar5 + 0x50) + param_2 <= *(int *)(*(longlong *)(param_1 + 0x2b0) + 0xa4)) &&
          ((*(uint *)(lVar5 + 0x4c) & 0x4000000) == 0)) &&
         ((*(byte *)(*(longlong *)(lVar5 + 0x58) + 0x10) & 8) == 0)) {
        FUN_180405770(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(lVar1 + 0xc0));
  }
  return;
}



/* ===== 180405b20 FUN_180405b20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180405b20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  
  auVar9 = _DAT_1808adc30;
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar6 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x38) = param_2;
  uVar3 = *(undefined8 *)(param_2 + 0x24);
  *(longlong *)(param_1 + 0x28) = param_2;
  auVar14._4_4_ = (float)(int)((ulonglong)uVar3 >> 0x20);
  auVar14._0_4_ = (float)(int)uVar3;
  auVar14._8_8_ = 0;
  auVar14 = divps(auVar9,auVar14);
  *(longlong *)(param_1 + 0x54) = auVar14._0_8_;
  plVar12 = *(longlong **)(param_1 + 0x2a8);
  plVar1 = plVar12 + *(int *)(param_1 + 0x2a0);
  if (((longlong)*(int *)(param_1 + 0x2a0) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar7 = *plVar12;
      if ((*(longlong *)(lVar7 + 0x68) == 0) || (*(char *)(*(longlong *)(lVar7 + 0x68) + 1) != '\0')
         ) {
        puVar13 = *(undefined8 **)(lVar7 + 0x60);
        puVar2 = puVar13 + *(int *)(lVar7 + 0x58);
        for (; puVar13 != puVar2; puVar13 = puVar13 + 1) {
          piVar8 = (int *)*puVar13;
          if ((((0 < *piVar8) && (*(longlong *)(piVar8 + 0x1e) == lVar6)) &&
              (*(longlong *)(piVar8 + 0x1c) == lVar5)) && (*(longlong *)(piVar8 + 0x1c) != param_2))
          {
            *(longlong *)(piVar8 + 0x1c) = param_2;
            *(longlong *)(piVar8 + 0x1e) = lVar6;
            iVar4 = piVar8[0x2c];
            lVar7 = *(longlong *)(piVar8 + 0x2e);
            *(longlong *)(lVar7 + -0x10 + (longlong)iVar4 * 0x10) = param_2;
            *(longlong *)(lVar7 + -8 + (longlong)iVar4 * 0x10) = lVar6;
            FUN_1803fc0a0(piVar8);
          }
          plVar10 = *(longlong **)(piVar8 + 0x2e);
          plVar11 = plVar10 + (longlong)piVar8[0x2c] * 2;
          for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
            if ((plVar10[1] == lVar6) && (*plVar10 == lVar5)) {
              *plVar10 = param_2;
              plVar10[1] = lVar6;
            }
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
  return;
}



/* ===== 180405c80 FUN_180405c80 ===== */

void FUN_180405c80(undefined8 param_1)

{
  FUN_1804042b0();
  FUN_1804046b0(param_1);
  FUN_180406c90(param_1);
  return;
}



/* ===== 180405cb0 FUN_180405cb0 ===== */

int * FUN_180405cb0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  piVar3 = (int *)_malloc_base(0x60);
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  iVar6 = 1;
  if (piVar3 != (int *)0x0) {
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0xb] = 0;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    piVar3[0xe] = 0;
    piVar3[0xf] = 0;
    piVar3[0x10] = 0;
    piVar3[0x11] = 0;
    piVar3[0x12] = 0;
    piVar3[0x13] = 0;
    piVar3[0x14] = 0;
    piVar3[0x15] = 0;
    piVar3[0x16] = 0;
    piVar3[0x17] = 0;
    piVar3[1] = 1;
  }
  iVar2 = *(int *)(param_1 + 0x298);
  *(int *)(param_1 + 0x298) = iVar2 + 1;
  *piVar3 = iVar2;
  iVar2 = *(int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x40) == iVar2) {
    iVar5 = *(int *)(param_1 + 0x40) + 1;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_18000ba20(param_1 + 0x40,iVar5);
  }
  *(int **)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x40) * 8) = piVar3;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x5f) = 1;
  }
  iVar2 = *(int *)(param_1 + 4);
  FUN_180401f30(piVar3);
  piVar3[8] = iVar2;
  piVar3[1] = 2;
  piVar3[9] = param_2;
  piVar3[10] = param_3;
  if (iVar2 == 0) {
    iVar6 = 4;
    param_2 = param_2 * 4;
  }
  else if (iVar2 != 1) {
    iVar6 = 0;
    param_2 = 0;
  }
  piVar3[0xb] = iVar6;
  *(undefined1 *)((longlong)piVar3 + 0x5e) = 0;
  uVar4 = _malloc_base((longlong)(param_2 * param_3));
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  *(undefined8 *)(piVar3 + 0xc) = uVar4;
  FUN_180540170(uVar4,0,(longlong)(piVar3[0xb] * piVar3[10] * piVar3[9]));
  piVar3[0x10] = -1;
  piVar3[0x11] = 0;
  piVar3[0xe] = 0;
  piVar3[0xf] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_180405b20(param_1,piVar3);
  return piVar3;
}



/* ===== 180405e50 FUN_180405e50 ===== */

void FUN_180405e50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  longlong local_78;
  
  lVar6 = *(longlong *)(param_1 + 0x2b0);
  *(undefined1 *)(lVar6 + 0xb8) = 1;
  puVar7 = *(undefined4 **)(param_1 + 0x38);
  puVar11 = (undefined4 *)FUN_180405cb0();
  *(undefined1 *)((longlong)puVar11 + 0x5e) = *(undefined1 *)((longlong)puVar7 + 0x5e);
  if ((DAT_180ca0a50 != 0) && ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
    FUN_1803f5060("[font] Texture #%03d: resize+repack %dx%d => Texture #%03d: %dx%d\n",*puVar7,
                  puVar7[9],puVar7[10],*puVar11,puVar11[9],puVar11[10]);
  }
  FUN_180407900(param_1);
  lVar19 = 0;
  local_78 = 0;
  iVar14 = *(int *)(lVar6 + 0x70);
  if (0 < iVar14) {
    iVar15 = iVar14;
    if (iVar14 < 8) {
      iVar15 = 8;
    }
    if (0 < iVar15) {
      local_78 = _malloc_base((longlong)iVar15 * 4);
      lVar19 = local_78;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
    }
  }
  if ((lVar19 != 0) && (*(longlong *)(lVar6 + 0x78) != 0)) {
    FUN_180540530(lVar19,*(longlong *)(lVar6 + 0x78),(longlong)iVar14 << 2);
  }
  uVar4 = *(undefined4 *)(lVar6 + 0x60);
  *(undefined4 *)(lVar6 + 0x60) = 0;
  uVar5 = *(undefined4 *)(lVar6 + 100);
  *(undefined4 *)(lVar6 + 100) = 0;
  lVar19 = *(longlong *)(lVar6 + 0x68);
  *(undefined8 *)(lVar6 + 0x68) = 0;
  puVar23 = *(uint **)(lVar6 + 0x78);
  puVar2 = puVar23 + *(int *)(lVar6 + 0x70);
  if (((longlong)*(int *)(lVar6 + 0x70) & 0x3fffffffffffffffU) != 0) {
    do {
      if ((*puVar23 >> 0x1e & 1) != 0) {
        lVar20 = (longlong)(int)(*puVar23 << 0xc) >> 0xc;
        sVar13 = *(short *)(lVar19 + 4 + lVar20 * 8);
        if ((sVar13 != 0) || (*(short *)(lVar19 + 6 + lVar20 * 8) != 0)) {
          uVar9 = FUN_180407b60(param_1,sVar13,*(undefined2 *)(lVar19 + 6 + lVar20 * 8),puVar23);
          if (uVar9 == 0xffffffff) {
            if ((DAT_180ca0a50 != 0) && ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
              FUN_1803f5060("[font] Texture #%03d: resize failed. Will grow.\n",*puVar11);
            }
            lVar22 = DAT_180ca0a50;
            *(undefined1 *)((longlong)puVar11 + 0x5f) = 1;
            *(undefined4 *)(lVar6 + 0x60) = uVar4;
            *(undefined4 *)(lVar6 + 100) = uVar5;
            lVar20 = *(longlong *)(lVar6 + 0x68);
            *(longlong *)(lVar6 + 0x68) = lVar19;
            lVar19 = *(longlong *)(lVar6 + 0x78);
            piVar1 = (int *)(lVar6 + 0x70);
            if (lVar19 != 0) {
              *(undefined4 *)(lVar6 + 0x74) = 0;
              *piVar1 = 0;
              if (lVar22 != 0) {
                piVar18 = (int *)(lVar22 + ((longlong)*(short *)(lVar22 + 0x29bc) + 0x538) * 8);
                if (*piVar18 != *(int *)(lVar22 + 4)) {
                  iVar15 = *(short *)(lVar22 + 0x29bc) + 1;
                  sVar13 = (short)iVar15 + (short)(iVar15 / 6) * -6;
                  *(short *)(lVar22 + 0x29bc) = sVar13;
                  piVar18 = (int *)(lVar22 + ((longlong)sVar13 + 0x538) * 8);
                  *piVar18 = *(int *)(lVar22 + 4);
                  *(undefined4 *)(lVar22 + 0x29c4 + (longlong)sVar13 * 8) = 0;
                }
                *(short *)((longlong)piVar18 + 6) = *(short *)((longlong)piVar18 + 6) + 1;
                *(int *)(lVar22 + 0x29b8) = *(int *)(lVar22 + 0x29b8) + 1;
              }
              thunk_FUN_1805277b0(lVar19);
              *(undefined8 *)(lVar6 + 0x78) = 0;
            }
            FUN_18040be90(piVar1,iVar14);
            if ((*(longlong *)(lVar6 + 0x78) != 0) && (local_78 != 0)) {
              FUN_180540530(*(longlong *)(lVar6 + 0x78),local_78,(longlong)*piVar1 << 2);
            }
            FUN_180405b20(param_1,puVar7);
            FUN_180406480(param_1,param_2,param_3);
            lVar19 = lVar20;
            goto LAB_180406224;
          }
          lVar17 = (longlong)
                   (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                            (ulonglong)(uVar9 & 0x7ffff) * 4) << 0xc) >> 0xc;
          lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
          FUN_180402ef0(puVar7,*(undefined2 *)(lVar19 + lVar20 * 8),
                        *(undefined2 *)(lVar19 + 2 + lVar20 * 8),puVar11,
                        *(undefined2 *)(lVar22 + lVar17 * 8),
                        *(undefined2 *)(lVar22 + 2 + lVar17 * 8),
                        *(undefined2 *)(lVar22 + 4 + lVar17 * 8),
                        *(undefined2 *)(lVar22 + 6 + lVar17 * 8));
        }
      }
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar2);
  }
  *(undefined8 *)(lVar6 + 0x9c) = 0;
  uVar9 = 0;
  if (0 < *(int *)(lVar6 + 0xc0)) {
    do {
      uVar16 = uVar9 & 0x1f;
      uVar10 = uVar9;
      if ((int)uVar9 < 0) {
        uVar10 = uVar9 + 0x1f;
        uVar16 = uVar16 - 0x20;
      }
      lVar20 = *(longlong *)(*(longlong *)(lVar6 + 0xd0) + (longlong)((int)uVar10 >> 5) * 8);
      lVar22 = *(longlong *)((longlong)(int)uVar16 * 0x68 + 0x38 + lVar20);
      lVar20 = (longlong)*(int *)((longlong)(int)uVar16 * 0x68 + 0x30 + lVar20) * 0x2c + lVar22;
      for (; lVar22 != lVar20; lVar22 = lVar22 + 0x2c) {
        if (*(uint *)(lVar22 + 0x28) != 0xffffffff) {
          lVar21 = (longlong)
                   (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                            (ulonglong)(*(uint *)(lVar22 + 0x28) & 0x7ffff) * 4) << 0xc) >> 0xc;
          lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
          *(float *)(lVar22 + 0x18) =
               (float)*(ushort *)(lVar17 + lVar21 * 8) * *(float *)(param_1 + 0x54);
          *(float *)(lVar22 + 0x1c) =
               (float)*(ushort *)(lVar17 + 2 + lVar21 * 8) * *(float *)(param_1 + 0x58);
          *(float *)(lVar22 + 0x20) =
               (float)((uint)*(ushort *)(lVar17 + 4 + lVar21 * 8) +
                      (uint)*(ushort *)(lVar17 + lVar21 * 8)) * *(float *)(param_1 + 0x54);
          *(float *)(lVar22 + 0x24) =
               (float)((uint)*(ushort *)(lVar17 + 6 + lVar21 * 8) +
                      (uint)*(ushort *)(lVar17 + 2 + lVar21 * 8)) * *(float *)(param_1 + 0x58);
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(lVar6 + 0xc0));
  }
  FUN_1804042b0(param_1);
  FUN_1804046b0(param_1);
  FUN_180406c90(param_1);
  *(undefined1 *)(lVar6 + 0xb8) = 0;
  if (((longlong)*(int *)(param_1 + 0x2a0) & 0x1fffffffffffffffU) != 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x2a8);
    puVar3 = puVar12 + *(int *)(param_1 + 0x2a0);
    do {
      puVar8 = (undefined8 *)*puVar12;
      if (puVar8[2] == param_1) {
        *puVar8 = *(undefined8 *)(param_1 + 0x5c);
        puVar8[1] = param_1 + 0x88;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar3);
  }
LAB_180406224:
  lVar6 = DAT_180ca0a50;
  if (local_78 != 0) {
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar18 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar18 != *piVar1) {
        iVar14 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar13 = (short)iVar14 + (short)(iVar14 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar13;
        piVar18 = (int *)(lVar6 + 0x29c0 + (longlong)sVar13 * 8);
        *piVar18 = *piVar1;
        *(undefined4 *)(lVar6 + 0x29c4 + (longlong)sVar13 * 8) = 0;
      }
      *(short *)((longlong)piVar18 + 6) = *(short *)((longlong)piVar18 + 6) + 1;
      *(int *)(lVar6 + 0x29b8) = *(int *)(lVar6 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(local_78);
  }
  lVar6 = DAT_180ca0a50;
  if (lVar19 != 0) {
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar18 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar18 != *piVar1) {
        iVar14 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar13 = (short)iVar14 + (short)(iVar14 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar13;
        piVar18 = (int *)(lVar6 + 0x29c0 + (longlong)sVar13 * 8);
        *piVar18 = *piVar1;
        *(undefined4 *)(lVar6 + 0x29c4 + (longlong)sVar13 * 8) = 0;
      }
      *(short *)((longlong)piVar18 + 6) = *(short *)((longlong)piVar18 + 6) + 1;
      *(int *)(lVar6 + 0x29b8) = *(int *)(lVar6 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar19);
  }
  return;
}



/* ===== 180406480 FUN_180406480 ===== */

void FUN_180406480(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == -1) {
    param_2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x24);
  }
  if (param_3 == -1) {
    param_3 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x28);
  }
  iVar3 = param_3 * 2;
  iVar2 = param_2;
  if (param_2 < param_3) {
    iVar3 = param_3;
    iVar2 = param_2 * 2;
  }
  uVar1 = *(int *)(param_1 + 8) + -1 + *(int *)(*(longlong *)(param_1 + 0x2b0) + 0xa8);
  uVar1 = (int)uVar1 >> 1 | uVar1;
  uVar1 = (int)uVar1 >> 2 | uVar1;
  uVar1 = (int)uVar1 >> 4 | uVar1;
  uVar1 = (int)uVar1 >> 8 | uVar1;
  iVar4 = ((int)uVar1 >> 0x10 | uVar1) + 1;
  if (iVar4 <= iVar2) {
    iVar4 = iVar2;
  }
  uVar1 = *(int *)(param_1 + 8) + -1 + *(int *)(*(longlong *)(param_1 + 0x2b0) + 0xac);
  uVar1 = (int)uVar1 >> 1 | uVar1;
  uVar1 = (int)uVar1 >> 2 | uVar1;
  uVar1 = (int)uVar1 >> 4 | uVar1;
  uVar1 = (int)uVar1 >> 8 | uVar1;
  iVar2 = (uVar1 | (int)uVar1 >> 0x10) + 1;
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 0xc) <= iVar4) && (iVar3 = iVar4, *(int *)(param_1 + 0x14) < iVar4)) {
    iVar3 = *(int *)(param_1 + 0x14);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x10) <= iVar2) && (iVar4 = iVar2, *(int *)(param_1 + 0x18) < iVar2)) {
    iVar4 = *(int *)(param_1 + 0x18);
  }
  if ((iVar3 != param_2) || (iVar4 != param_3)) {
    FUN_180405e50(param_1);
  }
  return;
}



/* ===== 180406590 FUN_180406590 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_180406590(int *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar6 = (int)*(undefined8 *)(param_2 + 3) + _DAT_1808adf90;
  uVar8 = (int)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20) + _UNK_1808adf94;
  lVar1 = *(longlong *)(param_2 + 0xac);
  uVar6 = (int)uVar6 >> 1 | uVar6;
  uVar8 = (int)uVar8 >> 1 | uVar8;
  uVar6 = (int)uVar6 >> 2 | uVar6;
  uVar8 = (int)uVar8 >> 2 | uVar8;
  uVar6 = (int)uVar6 >> 4 | uVar6;
  uVar8 = (int)uVar8 >> 4 | uVar8;
  uVar6 = (int)uVar6 >> 8 | uVar6;
  uVar8 = (int)uVar8 >> 8 | uVar8;
  uVar6 = (int)uVar6 >> 0x10 | uVar6;
  uVar8 = (int)uVar8 >> 0x10 | uVar8;
  iVar9 = uVar6 + _DAT_1808ad5d0;
  iVar10 = uVar8 + _UNK_1808ad5d4;
  if (((lVar1 == 0) || (*(longlong *)(param_2 + 0xe) == 0)) ||
     (*(int *)(*(longlong *)(param_2 + 0xe) + 4) == 4)) {
    *(ulonglong *)param_1 = CONCAT44(iVar10,iVar9);
    return param_1;
  }
  uVar2 = *(int *)(lVar1 + 0xa8) - 1;
  uVar2 = (int)uVar2 >> 1 | uVar2;
  uVar2 = (int)uVar2 >> 2 | uVar2;
  uVar2 = (int)uVar2 >> 4 | uVar2;
  uVar2 = (int)uVar2 >> 8 | uVar2;
  uVar2 = (int)uVar2 >> 0x10 | uVar2;
  if (iVar9 <= (int)(uVar2 + 1)) {
    uVar6 = uVar2;
  }
  uVar2 = *(int *)(lVar1 + 0xac) - 1;
  uVar2 = (int)uVar2 >> 1 | uVar2;
  iVar9 = uVar6 + 1;
  uVar2 = (int)uVar2 >> 2 | uVar2;
  uVar2 = (int)uVar2 >> 4 | uVar2;
  uVar2 = (int)uVar2 >> 8 | uVar2;
  uVar2 = (int)uVar2 >> 0x10 | uVar2;
  if (iVar10 <= (int)(uVar2 + 1)) {
    uVar8 = uVar2;
  }
  iVar5 = *(int *)(lVar1 + 0x98) - *(int *)(lVar1 + 0xa0);
  iVar10 = uVar8 + 1;
  if ((float)iVar5 < 0.0) {
    fVar7 = (float)FUN_18051af10();
  }
  else {
    fVar7 = SQRT((float)iVar5);
  }
  uVar2 = (int)((int)fVar7 - 1U) >> 1 | (int)fVar7 - 1U;
  uVar2 = (int)uVar2 >> 2 | uVar2;
  uVar2 = (int)uVar2 >> 4 | uVar2;
  uVar2 = (int)uVar2 >> 8 | uVar2;
  uVar2 = (int)uVar2 >> 0x10 | uVar2;
  if (iVar9 < iVar10) {
    if ((int)(uVar2 + 1) <= iVar10) {
      uVar2 = uVar8;
    }
    if ((*param_2 & 1) == 0) {
      uVar2 = (int)uVar2 >> 1 | uVar2;
      uVar2 = (int)uVar2 >> 2 | uVar2;
      uVar2 = (int)uVar2 >> 4 | uVar2;
      uVar2 = (int)uVar2 >> 8 | uVar2;
      uVar2 = (int)uVar2 >> 0x10 | uVar2;
    }
    iVar3 = uVar2 + 1;
    iVar4 = (int)(iVar5 + uVar2) / iVar3;
    if (iVar4 <= iVar9) {
      iVar4 = iVar9;
    }
  }
  else {
    if ((int)(uVar2 + 1) <= iVar9) {
      uVar2 = uVar6;
    }
    iVar4 = uVar2 + 1;
    iVar3 = (int)(uVar2 + iVar5) / iVar4;
    if (iVar3 <= iVar10) {
      iVar3 = iVar10;
    }
    if ((*param_2 & 1) == 0) {
      uVar6 = (int)(iVar3 - 1U) >> 1 | iVar3 - 1U;
      uVar6 = (int)uVar6 >> 2 | uVar6;
      uVar6 = (int)uVar6 >> 4 | uVar6;
      uVar6 = (int)uVar6 >> 8 | uVar6;
      iVar3 = ((int)uVar6 >> 0x10 | uVar6) + 1;
    }
  }
  *param_1 = iVar4;
  param_1[1] = iVar3;
  return param_1;
}



/* ===== 1804067f0 FUN_1804067f0 ===== */

void FUN_1804067f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_180406590(&local_res8,param_1);
  FUN_1804077b0(param_1);
  FUN_180405cb0(param_1,local_res8,local_resc);
  FUN_1804075f0(param_1);
  lVar5 = *(longlong *)(param_1 + 0x80);
  lVar4 = (longlong)*(int *)(param_1 + 0x78) * 0xa0;
  lVar1 = lVar4 + lVar5;
  if (lVar4 != 0) {
    do {
      lVar4 = *(longlong *)(lVar5 + 0x88);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x2b8);
      }
      if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
        (**(code **)(lVar4 + 0x18))(param_1,lVar5);
      }
      lVar5 = lVar5 + 0xa0;
    } while (lVar5 != lVar1);
  }
  plVar7 = *(longlong **)(param_1 + 0x70);
  plVar2 = plVar7 + *(int *)(param_1 + 0x68);
  if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar1 = *plVar7;
      puVar6 = *(undefined8 **)(lVar1 + 0x28);
      puVar3 = puVar6 + *(int *)(lVar1 + 0x20);
      for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
        FUN_180404c10(param_1,lVar1,*puVar6);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
  }
  return;
}



/* ===== 180406900 FUN_180406900 ===== */

void FUN_180406900(longlong param_1,float *param_2,int param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  
  fVar6 = DAT_1808ac1a0;
  fVar5 = DAT_1808ac13c;
  fVar4 = DAT_1808ac088;
  fVar3 = DAT_1808abff0;
  fVar2 = DAT_1808abfa8;
  fVar1 = DAT_1808abf90;
  iVar11 = param_3;
  if (param_4 != '\0') {
    iVar11 = 1;
  }
  iVar9 = 0;
  if (0 < param_3) {
    lVar10 = (longlong)iVar11;
    do {
      iVar12 = 0;
      pfVar8 = (float *)(param_1 + (longlong)(iVar11 * 7) * -4);
      do {
        fVar13 = 0.0;
        iVar7 = iVar9;
        if (param_4 != '\0') {
          iVar7 = iVar12;
        }
        if ((-1 < iVar7 + -7) && (iVar7 + -7 < param_3)) {
          fVar13 = *pfVar8 * 0.0 + 0.0;
        }
        if ((-1 < iVar7 + -6) && (iVar7 + -6 < param_3)) {
          fVar13 = pfVar8[lVar10] * 0.0 + fVar13;
        }
        if ((-1 < iVar7 + -5) && (iVar7 + -5 < param_3)) {
          fVar13 = fVar1 * pfVar8[lVar10 * 2] + fVar13;
        }
        if ((-1 < iVar7 + -4) && (iVar7 + -4 < param_3)) {
          fVar13 = fVar2 * pfVar8[lVar10 * 3] + fVar13;
        }
        if ((-1 < iVar7 + -3) && (iVar7 + -3 < param_3)) {
          fVar13 = fVar3 * pfVar8[lVar10 * 4] + fVar13;
        }
        if ((-1 < iVar7 + -2) && (iVar7 + -2 < param_3)) {
          fVar13 = fVar4 * pfVar8[lVar10 * 5] + fVar13;
        }
        if ((-1 < iVar7 + -1) && (iVar7 + -1 < param_3)) {
          fVar13 = fVar5 * pfVar8[lVar10 * 6] + fVar13;
        }
        if (iVar7 < param_3) {
          fVar13 = fVar6 * pfVar8[lVar10 * 7] + fVar13;
        }
        if ((-1 < iVar7 + 1) && (iVar7 + 1 < param_3)) {
          fVar13 = fVar5 * pfVar8[lVar10 * 8] + fVar13;
        }
        if ((-1 < iVar7 + 2) && (iVar7 + 2 < param_3)) {
          fVar13 = fVar4 * pfVar8[lVar10 * 9] + fVar13;
        }
        if ((-1 < iVar7 + 3) && (iVar7 + 3 < param_3)) {
          fVar13 = fVar3 * pfVar8[lVar10 * 10] + fVar13;
        }
        if ((-1 < iVar7 + 4) && (iVar7 + 4 < param_3)) {
          fVar13 = fVar2 * pfVar8[lVar10 * 0xb] + fVar13;
        }
        if ((-1 < iVar7 + 5) && (iVar7 + 5 < param_3)) {
          fVar13 = fVar1 * pfVar8[lVar10 * 0xc] + fVar13;
        }
        if ((-1 < iVar7 + 6) && (iVar7 + 6 < param_3)) {
          fVar13 = pfVar8[lVar10 * 0xd] * 0.0 + fVar13;
        }
        if ((-1 < iVar7 + 7) && (iVar7 + 7 < param_3)) {
          fVar13 = pfVar8[lVar10 * 0xe] * 0.0 + fVar13;
        }
        *param_2 = fVar13;
        iVar12 = iVar12 + 1;
        param_2 = param_2 + 1;
        pfVar8 = pfVar8 + 1;
      } while (iVar12 < param_3);
      iVar9 = iVar9 + 1;
      param_1 = param_1 + (longlong)param_3 * 4;
    } while (iVar9 < param_3);
  }
  return;
}



/* ===== 180406c00 FUN_180406c00 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180406c00(undefined8 param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 auStack_60 [5];
  ulonglong local_38 [3];
  
  local_38[0] = DAT_180919500 ^ (ulonglong)local_38;
  uVar3 = (longlong)(param_2 * param_2) * 4;
  uVar2 = uVar3 + 0xf;
  if (uVar2 <= uVar3) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x180406c49;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_60 + lVar1) = 0x180406c5f;
  FUN_180406900(param_1,(longlong)local_38 + lVar1,param_2,1);
  *(undefined8 *)((longlong)auStack_60 + lVar1) = 0x180406c6d;
  FUN_180406900((longlong)local_38 + lVar1,param_1);
  *(undefined8 *)((longlong)auStack_60 + lVar1) = 0x180406c79;
  return;
}



/* ===== 180406c90 FUN_180406c90 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180406c90(longlong param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ushort *puVar16;
  ulonglong uVar17;
  short *psVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  int iVar27;
  undefined1 *puVar28;
  ushort uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  ushort uVar36;
  uint uVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uStack_150;
  undefined1 auStack_148 [48];
  float local_118;
  int local_114;
  uint local_110;
  uint local_10c;
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)&local_118;
  uVar14 = *(uint *)(param_1 + 0x388);
  uVar22 = *(uint *)(param_1 + 0x38c);
  local_100 = 0;
  uStack_f8 = 0;
  uStack_150 = 0x180406d18;
  local_110 = uVar14;
  local_10c = uVar22;
  puVar16 = (ushort *)FUN_180407f30(param_1,*(undefined4 *)(param_1 + 0x2e0));
  fVar46 = DAT_1808acb94;
  fVar2 = DAT_1808ac34c;
  fVar45 = DAT_1808abfbc;
  puVar25 = auStack_148;
  if (puVar16 == (ushort *)0x0) {
    iVar38 = uVar22 + uVar14 + 4;
    uStack_150 = 0x180406d5e;
    uVar12 = FUN_180403ea0(param_1,iVar38,iVar38,&local_100);
    *(undefined4 *)(param_1 + 0x2e0) = uVar12;
    uVar37 = _DAT_1808ade90;
    fVar1 = DAT_1808abf94;
    uVar36 = local_100._2_2_ + 2;
    iVar38 = *(int *)(param_1 + 0x38c) + *(int *)(param_1 + 0x388) * 2;
    local_118._0_2_ = (short)local_100 + 2;
    fVar44 = (float)(int)(uVar22 + uVar14);
    uVar21 = (longlong)(iVar38 * iVar38) * 4;
    uVar17 = uVar21 + 0xf;
    if (uVar17 <= uVar21) {
      uVar17 = 0xffffffffffffff0;
    }
    uStack_150 = 0x180406dc0;
    lVar19 = -(uVar17 & 0xfffffffffffffff0);
    puVar25 = auStack_148 + lVar19;
    iVar27 = 0;
    puVar26 = auStack_148 + lVar19 + 0x30;
    if (0 < iVar38) {
      fVar46 = (fVar44 + (float)(int)uVar14) * DAT_1808ac1f4;
      fVar45 = (fVar44 - (float)(int)uVar14) * DAT_1808ac1f4;
      do {
        iVar24 = 0;
        do {
          fVar43 = (float)((uint)((float)iVar27 - fVar46) & uVar37) - fVar45;
          fVar44 = (float)((uint)((float)iVar24 - fVar46) & uVar37) - fVar45;
          fVar39 = fVar43;
          if (fVar43 <= 0.0) {
            fVar39 = 0.0;
          }
          fVar40 = fVar44;
          if (fVar44 <= 0.0) {
            fVar40 = 0.0;
          }
          fVar39 = fVar39 * fVar39 + fVar40 * fVar40;
          if (fVar39 <= 0.0) {
            fVar39 = fVar1;
          }
          else if (fVar39 < 0.0) {
            *(undefined8 *)(auStack_148 + lVar19 + -8) = 0x180406e92;
            fVar39 = (float)FUN_18051af10();
          }
          else {
            fVar39 = SQRT(fVar39);
          }
          if (fVar44 <= fVar43) {
            fVar44 = fVar43;
          }
          if (0.0 <= fVar44) {
            fVar44 = 0.0;
          }
          fVar43 = (float)*(int *)(param_1 + 0x388) + *(float *)(param_1 + 0x394);
          if (fVar43 <= DAT_1808abfbc) {
            fVar43 = DAT_1808abfbc;
          }
          fVar44 = *(float *)(param_1 + 0x394) + fVar44 + fVar39;
          if (fVar44 <= 0.0) {
            fVar44 = 0.0;
          }
          fVar39 = fVar44 / fVar43;
          if (fVar2 <= fVar44 / fVar43) {
            fVar39 = fVar2;
          }
          *(undefined8 *)(auStack_148 + lVar19 + -8) = 0x180406eee;
          uVar12 = FUN_18051afb0(fVar2 - fVar39);
          iVar30 = iVar27 * iVar38 + iVar24;
          iVar24 = iVar24 + 1;
          *(undefined4 *)(puVar26 + (longlong)iVar30 * 4) = uVar12;
        } while (iVar24 < iVar38);
        iVar27 = iVar27 + 1;
      } while (iVar27 < iVar38);
      fVar45 = DAT_1808abfbc;
      fVar46 = DAT_1808acb94;
    }
    uVar11 = local_118._0_2_;
    if (*(char *)(param_1 + 0x398) != '\0') {
      *(undefined8 *)(auStack_148 + lVar19 + -8) = 0x180406f3c;
      FUN_180406c00(puVar26,iVar38);
    }
    iVar24 = 0;
    lVar19 = *(longlong *)(param_1 + 0x38);
    iVar27 = *(int *)(param_1 + 0x388) + 2 + *(int *)(param_1 + 0x38c);
    if (0 < iVar27) {
      do {
        iVar30 = 0;
        do {
          iVar32 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x20);
          if (iVar32 == 0) {
            *(uint *)((longlong)
                      (int)(((uint)uVar11 +
                            ((uint)uVar36 + iVar24) * *(int *)(lVar19 + 0x24) + iVar30) *
                           *(int *)(lVar19 + 0x2c)) + *(longlong *)(lVar19 + 0x30)) =
                 (int)(*(float *)(puVar26 + (longlong)(iVar24 * iVar38 + iVar30) * 4) * fVar46) <<
                 0x18 | 0xffffff;
          }
          else if (iVar32 == 1) {
            *(char *)((longlong)
                      (int)(((uint)uVar11 +
                            ((uint)uVar36 + iVar24) * *(int *)(lVar19 + 0x24) + iVar30) *
                           *(int *)(lVar19 + 0x2c)) + *(longlong *)(lVar19 + 0x30)) =
                 (char)(int)(*(float *)(puVar26 + (longlong)(iVar24 * iVar38 + iVar30) * 4) * fVar46
                            );
          }
          iVar30 = iVar30 + 1;
        } while (iVar30 < iVar27);
        iVar24 = iVar24 + 1;
      } while (iVar24 < iVar27);
    }
    uVar22 = local_10c;
    uVar14 = local_110;
  }
  else {
    local_118._0_2_ = *puVar16;
    uVar36 = puVar16[1];
  }
  uVar12 = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined8 *)(puVar25 + -8) = 0x18040701f;
  psVar18 = (short *)FUN_180407f30(param_1,uVar12);
  if (psVar18 != (short *)0x0) {
    local_118._0_2_ = *psVar18 + 2;
    sVar3 = psVar18[2];
    uVar36 = psVar18[1] + 2;
    uVar37 = (uint)uVar36;
    sVar4 = psVar18[3];
    uVar17 = 0;
    do {
      bVar9 = false;
      iVar38 = (int)(uVar17 / 3);
      iVar27 = (int)uVar17 + iVar38 * -3;
      uVar11 = (ushort)uVar22;
      uVar29 = local_118._0_2_;
      if (iVar27 == 0) {
LAB_18040709f:
        uVar11 = (ushort)uVar14;
      }
      else if (iVar27 == 1) {
        uVar29 = local_118._0_2_ + (ushort)uVar14;
      }
      else {
        if (iVar27 == 2) {
          bVar9 = true;
          goto LAB_18040709f;
        }
        uVar11 = sVar3 - 4;
      }
      fVar1 = *(float *)(param_1 + 0x54);
      fVar44 = *(float *)(param_1 + 0x58);
      uVar34 = (uint)uVar11 + (uint)uVar29;
      uVar31 = uVar37;
      if (iVar38 == 0) {
        uVar22 = uVar14 & 0xffff;
LAB_1804070fb:
        uVar22 = uVar22 + uVar31;
        bVar10 = false;
        uVar14 = uVar22;
      }
      else {
        if (iVar38 == 1) {
          uVar22 = uVar22 & 0xffff;
          uVar31 = uVar14 + uVar36 & 0xffff;
          goto LAB_1804070fb;
        }
        if (iVar38 != 2) {
          uVar22 = (uint)(ushort)(sVar4 - 4);
          goto LAB_1804070fb;
        }
        uVar22 = (local_110 & 0xffff) + (uint)uVar36;
        bVar10 = true;
        uVar14 = (uint)uVar36;
      }
      uVar13 = uVar34;
      if (!bVar9) {
        uVar13 = (uint)uVar29;
      }
      if (!bVar10) {
        uVar22 = uVar31;
      }
      uVar31 = (uint)uVar29;
      if (!bVar9) {
        uVar31 = uVar34;
      }
      uVar34 = (int)uVar17 + 1;
      *(float *)(param_1 + 0x2e8 + uVar17 * 0x10) = (float)uVar13 * fVar1;
      *(float *)(param_1 + 0x2ec + uVar17 * 0x10) = (float)uVar22 * fVar44;
      *(float *)(param_1 + 0x2f0 + uVar17 * 0x10) = (float)uVar31 * fVar1;
      *(float *)(param_1 + 0x2f4 + uVar17 * 0x10) = (float)uVar14 * fVar44;
      uVar17 = (ulonglong)uVar34;
      uVar22 = local_10c;
      uVar14 = local_110;
    } while ((int)uVar34 < 9);
  }
  uVar12 = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined8 *)(puVar25 + -8) = 0x18040719b;
  lVar19 = FUN_180407f30(param_1,uVar12);
  fVar1 = DAT_1808ac918;
  puVar26 = puVar25;
  if (lVar19 == 0) {
    *(undefined8 *)(puVar25 + -8) = 0x1804071bf;
    fVar44 = (float)FUN_180517200();
    iVar38 = *(int *)(param_1 + 0x388);
    if (*(longlong *)(param_1 + 0x2b0) == 0) {
      *(undefined8 *)(puVar25 + -8) = 0x1804071ee;
      FUN_1804075f0(param_1);
    }
    iVar38 = (int)((float)iVar38 / fVar44 + fVar1) + 8;
    *(undefined8 *)(puVar25 + -8) = 0x1804071ff;
    uVar14 = FUN_180407b60(param_1,iVar38,iVar38);
    if (uVar14 != 0xffffffff) {
      *(undefined8 *)(puVar25 + -8) = 0x180407212;
      puVar16 = (ushort *)FUN_180407f30(param_1,uVar14);
      if (puVar16 != (ushort *)0x0) {
        uVar36 = puVar16[1];
        local_118._0_2_ = *puVar16;
      }
      if (*(char *)(param_1 + 0x51) != '\0') {
        lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
        lVar23 = (longlong)
                 (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                          (ulonglong)(uVar14 & 0x7ffff) * 4) << 0xc) >> 0xc;
        uVar5 = *(undefined2 *)(lVar19 + 2 + lVar23 * 8);
        uVar6 = *(undefined2 *)(lVar19 + lVar23 * 8);
        *(uint *)(puVar25 + 0x20) = (uint)*(ushort *)(lVar19 + 6 + lVar23 * 8);
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(puVar25 + -8) = 0x18040726f;
        FUN_180402fa0(uVar8,uVar6,uVar5);
        *(undefined1 *)(param_1 + 0x52) = 0;
      }
    }
    *(uint *)(param_1 + 0x2e4) = uVar14;
    iVar38 = *(int *)(param_1 + 0x388);
    iVar27 = iVar38 * 2;
    uVar21 = (longlong)(iVar38 * iVar38 * 4) * 4;
    fVar39 = (float)iVar27 * DAT_1808ac1f4;
    uVar17 = uVar21 + 0xf;
    if (uVar17 <= uVar21) {
      uVar17 = 0xffffffffffffff0;
    }
    *(undefined8 *)(puVar25 + -8) = 0x1804072be;
    lVar19 = -(uVar17 & 0xfffffffffffffff0);
    iVar38 = 0;
    puVar28 = puVar25 + lVar19 + 0x30;
    local_108 = puVar28;
    if (0 < iVar27) {
      do {
        iVar24 = 0;
        fVar43 = (float)iVar38 - fVar39;
        do {
          fVar40 = (float)iVar24 - fVar39;
          fVar40 = fVar40 * fVar40 + fVar43 * fVar43;
          if (fVar40 <= 0.0) {
            fVar40 = 0.0;
          }
          else if (fVar40 < 0.0) {
            *(undefined8 *)(puVar25 + lVar19 + -8) = 0x180407332;
            fVar40 = (float)FUN_18051af10();
          }
          else {
            fVar40 = SQRT(fVar40);
          }
          fVar40 = fVar40 + *(float *)(param_1 + 0x394);
          if (fVar40 <= 0.0) {
            fVar40 = 0.0;
          }
          fVar41 = (float)*(int *)(param_1 + 0x388) + *(float *)(param_1 + 0x394);
          if (fVar41 <= fVar45) {
            fVar41 = fVar45;
          }
          fVar42 = fVar40 / fVar41;
          if (fVar2 <= fVar40 / fVar41) {
            fVar42 = fVar2;
          }
          *(undefined8 *)(puVar25 + lVar19 + -8) = 0x18040737d;
          uVar12 = FUN_18051afb0(fVar2 - fVar42);
          iVar30 = iVar38 * iVar27 + iVar24;
          iVar24 = iVar24 + 1;
          *(undefined4 *)(puVar28 + (longlong)iVar30 * 4) = uVar12;
        } while (iVar24 < iVar27);
        iVar38 = iVar38 + 1;
      } while (iVar38 < iVar27);
    }
    if (*(char *)(param_1 + 0x398) != '\0') {
      *(undefined8 *)(puVar25 + lVar19 + -8) = 0x1804073b7;
      FUN_180406c00(puVar28,iVar27);
    }
    local_110 = *(uint *)(param_1 + 0x388);
    iVar38 = 0;
    lVar23 = *(longlong *)(param_1 + 0x38);
    local_114 = (int)((float)(int)local_110 / fVar44);
    local_10c = (local_114 - local_110) + 8;
    iVar24 = (int)((float)(int)local_110 / fVar44 + fVar1);
    puVar26 = puVar25 + lVar19;
    if (0 < iVar24) {
      do {
        iVar35 = iVar27 + -1;
        iVar30 = iVar38 - local_10c;
        iVar33 = 0;
        iVar32 = (local_110 - local_114) + -8;
        do {
          if (iVar32 < 0) {
            iVar20 = 0;
          }
          else {
            iVar20 = iVar32;
            if (iVar35 < iVar32) {
              iVar20 = iVar35;
            }
          }
          if (iVar30 < 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = iVar30;
            if (iVar35 < iVar30) {
              iVar15 = iVar35;
            }
          }
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x20);
          if (iVar7 == 0) {
            *(uint *)((longlong)
                      (int)(((uint)local_118._0_2_ +
                            ((uint)uVar36 + iVar38) * *(int *)(lVar23 + 0x24) + iVar33) *
                           *(int *)(lVar23 + 0x2c)) + *(longlong *)(lVar23 + 0x30)) =
                 (int)(*(float *)(puVar28 + (longlong)(iVar15 * iVar27 + iVar20) * 4) * fVar46) <<
                 0x18 | 0xffffff;
          }
          else if (iVar7 == 1) {
            *(char *)((longlong)
                      (int)(((uint)local_118._0_2_ +
                            ((uint)uVar36 + iVar38) * *(int *)(lVar23 + 0x24) + iVar33) *
                           *(int *)(lVar23 + 0x2c)) + *(longlong *)(lVar23 + 0x30)) =
                 (char)(int)(*(float *)(puVar28 + (longlong)(iVar15 * iVar27 + iVar20) * 4) * fVar46
                            );
          }
          iVar33 = iVar33 + 1;
          iVar32 = iVar32 + 1;
          puVar28 = local_108;
        } while (iVar33 < iVar24);
        iVar38 = iVar38 + 1;
        puVar26 = puVar25 + lVar19;
      } while (iVar38 < iVar24);
    }
  }
  uVar12 = *(undefined4 *)(param_1 + 0x2e4);
  *(undefined8 *)(puVar26 + -8) = 0x1804074ee;
  psVar18 = (short *)FUN_180407f30(param_1,uVar12);
  if (psVar18 != (short *)0x0) {
    sVar3 = *psVar18;
    sVar4 = psVar18[1];
    fVar45 = *(float *)(param_1 + 0x54);
    fVar2 = *(float *)(param_1 + 0x58);
    *(undefined8 *)(puVar26 + -8) = 0x18040751f;
    fVar46 = (float)FUN_180517200();
    uVar36 = (short)(int)((float)*(int *)(param_1 + 0x388) / fVar46 + fVar1) - 0x10;
    *(float *)(param_1 + 0x378) = (float)(ushort)(sVar3 + 8U) * fVar45;
    *(float *)(param_1 + 0x37c) = (float)(ushort)(sVar4 + 8U) * fVar2;
    *(float *)(param_1 + 0x380) = (float)((uint)uVar36 + (uint)(ushort)(sVar3 + 8U)) * fVar45;
    *(float *)(param_1 + 900) = (float)((uint)uVar36 + (uint)(ushort)(sVar4 + 8U)) * fVar2;
  }
  *(undefined8 *)(puVar26 + -8) = 0x18040759c;
  return;
}



/* ===== 1804075f0 FUN_1804075f0 ===== */

void FUN_1804075f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    uVar7 = FUN_180409130();
    FUN_1804026b0(param_1,uVar7);
  }
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30) == 0)) {
    uVar5 = *(int *)(param_1 + 0x10) - 1;
    uVar5 = (int)uVar5 >> 1 | uVar5;
    uVar5 = (int)uVar5 >> 2 | uVar5;
    uVar5 = (int)uVar5 >> 4 | uVar5;
    uVar5 = (int)uVar5 >> 8 | uVar5;
    uVar6 = *(int *)(param_1 + 0xc) - 1;
    uVar6 = (int)uVar6 >> 1 | uVar6;
    uVar6 = (int)uVar6 >> 2 | uVar6;
    uVar6 = (int)uVar6 >> 4 | uVar6;
    uVar6 = (int)uVar6 >> 8 | uVar6;
    FUN_180405cb0(param_1,((int)uVar6 >> 0x10 | uVar6) + 1,((int)uVar5 >> 0x10 | uVar5) + 1);
  }
  lVar8 = _malloc_base(0xf8);
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  if (lVar8 != 0) {
    FUN_180540170(lVar8,0,0xf8);
    *(undefined4 *)(lVar8 + 0xa4) = 0xffffffff;
    *(undefined4 *)(lVar8 + 0x90) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0xec) = 0xffffffffffffffff;
  }
  *(longlong *)(param_1 + 0x2b0) = lVar8;
  pcVar3 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  plVar10 = *(longlong **)(param_1 + 0x2a8);
  plVar1 = plVar10 + *(int *)(param_1 + 0x2a0);
  if (((longlong)*(int *)(param_1 + 0x2a0) & 0x1fffffffffffffffU) != 0) {
    do {
      if (*(longlong *)(*plVar10 + 0x68) != 0) {
        *(byte *)(param_1 + 0x51) =
             (byte)(*(uint *)(*(longlong *)(*plVar10 + 0x68) + 0x2c) >> 4) & 1;
        break;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
  }
  FUN_180407900(param_1);
  FUN_180405c80(param_1);
  FUN_1804041c0(param_1);
  if (((longlong)*(int *)(param_1 + 0x2a0) & 0x1fffffffffffffffU) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x2a8);
    puVar2 = puVar9 + *(int *)(param_1 + 0x2a0);
    do {
      puVar4 = (undefined8 *)*puVar9;
      if (puVar4[2] == param_1) {
        *puVar4 = *(undefined8 *)(param_1 + 0x5c);
        puVar4[1] = param_1 + 0x88;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar2);
  }
  FUN_180409c40();
  return;
}



/* ===== 1804077b0 FUN_1804077b0 ===== */

void FUN_1804077b0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(param_1 + 0x70);
  puVar2 = puVar9 + *(int *)(param_1 + 0x68);
  if (((longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffffU) != 0) {
    do {
      FUN_180404b70(param_1,*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar2);
  }
  if (((*(longlong *)(param_1 + 0x2b0) != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) &&
     (pcVar3 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 0x10), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    FUN_1803f5870(lVar4 + 0xd8);
    FUN_18040bdb0(lVar4 + 0xc0);
    FUN_1803f5870(lVar4 + 0x80);
    FUN_1803f5870(lVar4 + 0x70);
    FUN_1803f5870(lVar4 + 0x60);
    FUN_1803f5870(lVar4 + 0x50);
    lVar5 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar8 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar8 != *piVar1) {
        iVar7 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar6;
        piVar8 = (int *)(lVar5 + 0x29c0 + (longlong)sVar6 * 8);
        *piVar8 = *piVar1;
        *(undefined4 *)(lVar5 + 0x29c4 + (longlong)sVar6 * 8) = 0;
      }
      *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
      *(int *)(lVar5 + 0x29b8) = *(int *)(lVar5 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar4);
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  return;
}



/* ===== 180407900 FUN_180407900 ===== */

void FUN_180407900(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  short sVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  iVar9 = *(int *)(lVar2 + 0x54);
  iVar5 = *(int *)(lVar1 + 0x24) / 2;
  if (iVar9 < iVar5) {
    if (iVar9 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar9 / 2 + iVar9;
    }
    iVar11 = iVar5;
    if (iVar5 < iVar6) {
      iVar11 = iVar6;
    }
    if (iVar9 < iVar11) {
      uVar7 = _malloc_base((longlong)iVar11 << 4);
      lVar4 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(lVar2 + 0x58) != 0) {
        FUN_180540530(uVar7,*(longlong *)(lVar2 + 0x58),(longlong)*(int *)(lVar2 + 0x50) << 4);
        lVar3 = *(longlong *)(lVar2 + 0x58);
        if ((lVar3 != 0) && (lVar4 != 0)) {
          piVar10 = (int *)(lVar4 + 0x29c0 + (longlong)*(short *)(lVar4 + 0x29bc) * 8);
          if (*piVar10 != *(int *)(lVar4 + 4)) {
            iVar9 = *(short *)(lVar4 + 0x29bc) + 1;
            sVar8 = (short)iVar9 + (short)(iVar9 / 6) * -6;
            *(short *)(lVar4 + 0x29bc) = sVar8;
            piVar10 = (int *)(lVar4 + 0x29c0 + (longlong)sVar8 * 8);
            *piVar10 = *(int *)(lVar4 + 4);
            *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar8 * 8) = 0;
          }
          *(short *)((longlong)piVar10 + 6) = *(short *)((longlong)piVar10 + 6) + 1;
          *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar3);
      }
      *(undefined8 *)(lVar2 + 0x58) = uVar7;
      *(int *)(lVar2 + 0x54) = iVar11;
    }
  }
  *(int *)(lVar2 + 0x50) = iVar5;
  FUN_1803f72f0(lVar2,*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),
                *(undefined8 *)(lVar2 + 0x58),iVar5);
  *(undefined8 *)(lVar2 + 0x94) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  return;
}



/* ===== 180407a80 FUN_180407a80 ===== */

void FUN_180407a80(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  lVar4 = *(longlong *)(lVar3 + 0x78);
  uVar5 = *(uint *)(lVar4 + (ulonglong)(param_2 & 0x7ffff) * 4);
  lVar1 = *(longlong *)(lVar3 + 0x68) + ((longlong)(int)(uVar5 << 0xc) >> 0xc) * 8;
  if (lVar1 != 0) {
    param_2 = param_2 & 0x7ffff;
    *(uint *)(lVar4 + (ulonglong)param_2 * 4) = uVar5 & 0xbfffffff;
    uVar7 = *(uint *)(lVar3 + 0x90) & 0xfffff | uVar5 & 0xbff00000;
    uVar8 = (uVar5 & 0xbff00000) + 0x100000;
    uVar6 = (uVar8 ^ uVar7) & 0x3ff00000;
    uVar5 = uVar6 ^ uVar7;
    *(uint *)(lVar4 + (ulonglong)param_2 * 4) = uVar5;
    if ((uVar5 & 0x3ff00000) == 0) {
      *(uint *)(lVar4 + (ulonglong)param_2 * 4) =
           (uVar5 + 0x100000 ^ uVar6 ^ uVar8) & 0x3ff00000 ^ uVar7;
    }
    iVar2 = *(int *)(param_1 + 8);
    *(int *)(lVar3 + 0x9c) = *(int *)(lVar3 + 0x9c) + 1;
    *(uint *)(lVar3 + 0x90) = param_2;
    *(int *)(lVar3 + 0xa0) =
         *(int *)(lVar3 + 0xa0) +
         ((uint)*(ushort *)(lVar1 + 4) + iVar2) * ((uint)*(ushort *)(lVar1 + 6) + iVar2);
    *(undefined4 *)(lVar1 + 4) = 0;
  }
  return;
}



/* ===== 180407b60 FUN_180407b60 ===== */

uint FUN_180407b60(longlong param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  float fVar5;
  uint *puVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined2 uVar16;
  uint uVar17;
  undefined2 local_94;
  undefined1 local_68 [40];
  
  fVar5 = DAT_1808ac118;
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  iVar9 = *(int *)(param_1 + 8);
  iVar12 = 3;
  iVar14 = param_2 + iVar9;
  uVar10 = param_2;
  if ((int)param_2 <= (int)*(uint *)(lVar2 + 0xa8)) {
    uVar10 = *(uint *)(lVar2 + 0xa8);
  }
  iVar15 = param_3 + iVar9;
  *(uint *)(lVar2 + 0xa8) = uVar10;
  uVar17 = 0xffff;
  uVar10 = param_3;
  if ((int)param_3 <= (int)*(uint *)(lVar2 + 0xac)) {
    uVar10 = *(uint *)(lVar2 + 0xac);
  }
  *(uint *)(lVar2 + 0xac) = uVar10;
  do {
    uVar10 = 0xffff;
    if ((iVar14 == 0) || (iVar15 == 0)) {
      uVar13 = 0;
      uVar10 = 0;
LAB_180407da2:
      uVar17 = uVar13 & 0xffff;
      break;
    }
    puVar6 = (uint *)FUN_1803f7510(local_68,lVar2,iVar14,iVar15,uVar17,iVar9,0,iVar15);
    puVar11 = *(undefined8 **)(puVar6 + 2);
    uVar1 = *puVar6;
    uVar13 = puVar6[1];
    if (((puVar11 == (undefined8 *)0x0) || (*(int *)(lVar2 + 4) < (int)(uVar13 + iVar15))) ||
       (puVar6 = *(uint **)(lVar2 + 0x20), puVar6 == (uint *)0x0)) {
      puVar11 = (undefined8 *)0x0;
LAB_180407ca1:
      if (puVar11 != (undefined8 *)0x0) goto LAB_180407ca6;
    }
    else {
      puVar6[1] = uVar13 + iVar15;
      *puVar6 = uVar1;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(puVar6 + 2);
      piVar7 = (int *)*puVar11;
      if (*piVar7 < (int)uVar1) {
        piVar3 = *(int **)(piVar7 + 2);
        *(uint **)(piVar7 + 2) = puVar6;
        piVar7 = piVar3;
      }
      else {
        *puVar11 = puVar6;
      }
      if (*(longlong *)(piVar7 + 2) != 0) {
        do {
          piVar3 = *(int **)(piVar7 + 2);
          if ((int)(uVar1 + iVar14) < *piVar3) break;
          *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(lVar2 + 0x20);
          *(int **)(lVar2 + 0x20) = piVar7;
          piVar7 = piVar3;
        } while (*(longlong *)(piVar3 + 2) != 0);
      }
      *(int **)(puVar6 + 2) = piVar7;
      if ((int)(uVar1 + iVar14) <= *piVar7) goto LAB_180407ca1;
      *piVar7 = uVar1 + iVar14;
LAB_180407ca6:
      uVar10 = uVar1 & 0xffff;
      if ((uVar1 != 0x7fffffff) || (uVar13 != 0x7fffffff)) goto LAB_180407da2;
    }
    if ((iVar12 == 0) || (*(char *)(lVar2 + 0xb8) != '\0')) {
      if ((DAT_180ca0a50 != 0) && ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x100) != 0)) {
        FUN_1803f5060("[font] Failed packing %dx%d rectangle. Returning fallback.\n",param_2,param_3
                     );
      }
      return 0xffffffff;
    }
    lVar4 = *(longlong *)(param_1 + 0x2b0);
    FUN_180405a80(param_1,2);
    if ((float)*(int *)(lVar4 + 0x98) * fVar5 <= (float)*(int *)(lVar4 + 0xa0)) {
      FUN_180405e50(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x24),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x28));
    }
    else {
      FUN_180406480(param_1,0xffffffff,0xffffffff);
    }
    iVar12 = iVar12 + -1;
  } while (-1 < iVar12);
  uVar16 = (undefined2)uVar17;
  local_94 = (undefined2)param_3;
  iVar12 = uVar10 + iVar9 + (param_2 & 0xffff);
  if (iVar12 <= *(int *)(lVar2 + 0xb0)) {
    iVar12 = *(int *)(lVar2 + 0xb0);
  }
  *(int *)(lVar2 + 0xb0) = iVar12;
  iVar9 = (uVar17 & 0xffff) + iVar9 + (param_3 & 0xffff);
  if (iVar9 <= *(int *)(lVar2 + 0xb4)) {
    iVar9 = *(int *)(lVar2 + 0xb4);
  }
  *(int *)(lVar2 + 0x94) = *(int *)(lVar2 + 0x94) + 1;
  *(int *)(lVar2 + 0xb4) = iVar9;
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + iVar15 * iVar14;
  iVar9 = *(int *)(lVar2 + 100);
  if (*(int *)(lVar2 + 0x60) == iVar9) {
    iVar12 = *(int *)(lVar2 + 0x60) + 1;
    if (iVar9 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar9 / 2 + iVar9;
    }
    if (iVar12 < iVar9) {
      iVar12 = iVar9;
    }
    FUN_18000ba20(lVar2 + 0x60,iVar12);
  }
  lVar8 = (longlong)*(int *)(lVar2 + 0x60);
  lVar4 = *(longlong *)(lVar2 + 0x68);
  *(short *)(lVar4 + lVar8 * 8) = (short)uVar10;
  *(undefined2 *)(lVar4 + 2 + lVar8 * 8) = uVar16;
  *(short *)(lVar4 + 4 + lVar8 * 8) = (short)param_2;
  *(undefined2 *)(lVar4 + 6 + lVar8 * 8) = local_94;
  uVar10 = *(uint *)(lVar2 + 0x60);
  *(uint *)(lVar2 + 0x60) = uVar10 + 1;
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  if (param_4 == (uint *)0x0) {
    uVar17 = *(uint *)(lVar2 + 0x90);
    if ((int)uVar17 < 0) {
      FUN_18040be90(lVar2 + 0x70,*(int *)(lVar2 + 0x70) + 1);
      uVar17 = *(int *)(lVar2 + 0x70) - 1;
      puVar6 = (uint *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar17 * 4);
      uVar13 = 0;
    }
    else {
      puVar6 = (uint *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar17 * 4);
      *(int *)(lVar2 + 0x90) =
           (*(int *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar17 * 4) << 0xc) >> 0xc;
      uVar13 = *puVar6;
    }
    uVar10 = (uVar13 ^ uVar10) & 0xfff00000 ^ uVar10;
    *puVar6 = uVar10 | 0x40000000;
    uVar17 = uVar10 & 0x3ff00000 | uVar17;
  }
  else {
    uVar10 = *(int *)(lVar2 + 0x60) - 1;
    uVar10 = (uVar10 ^ *param_4) & 0xfff00000 ^ uVar10;
    *param_4 = uVar10;
    uVar17 = (uint)((longlong)param_4 - *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) >> 2) |
             (uVar10 >> 0x14 & 0x3ff) << 0x14;
  }
  return uVar17;
}



/* ===== 180407f30 FUN_180407f30 ===== */

longlong FUN_180407f30(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if ((uint)param_2 != 0xffffffff) {
    uVar2 = (uint)param_2 & 0x7ffff;
    if (*(longlong *)(param_1 + 0x2b0) == 0) {
      FUN_1804075f0();
    }
    lVar1 = *(longlong *)(param_1 + 0x2b0);
    if ((((int)uVar2 < *(int *)(lVar1 + 0x70)) &&
        (uVar2 = *(uint *)(*(longlong *)(lVar1 + 0x78) + (ulonglong)uVar2 * 4),
        (uVar2 >> 0x14 & 0x3ff) == ((uint)(param_2 >> 0x14) & 0x3ff))) && ((uVar2 >> 0x1e & 1) != 0)
       ) {
      return *(longlong *)(lVar1 + 0x68) + ((longlong)(int)(uVar2 << 0xc) >> 0xc) * 8;
    }
  }
  return 0;
}



/* ===== 180407fd0 FUN_180407fd0 ===== */

void FUN_180407fd0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_res10 [2];
  
  iVar5 = (int)param_2;
  uVar8 = param_2 & 0xffffffff;
  if (iVar5 <= *(int *)(param_1 + 0x20)) {
    return;
  }
  local_res10[0] = 0xbf800000;
  FUN_18040bfe0(param_1,param_2,local_res10);
  iVar7 = *(int *)(param_1 + 0x24);
  if (iVar7 < iVar5) {
    if (iVar7 == 0) {
      uVar1 = 8;
    }
    else {
      uVar1 = iVar7 / 2 + iVar7;
    }
    if (iVar5 < (int)uVar1) {
      uVar8 = (ulonglong)uVar1;
    }
    FUN_1803f6b20(param_1 + 0x20,uVar8);
  }
  iVar7 = *(int *)(param_1 + 0x20);
  uVar8 = (ulonglong)iVar7;
  if (iVar7 < iVar5) {
    if (7 < (uint)(iVar5 - iVar7)) {
      puVar6 = (undefined2 *)(*(longlong *)(param_1 + 0x28) + uVar8 * 2);
      if (((undefined2 *)(param_1 + 0x28) < puVar6) ||
         ((undefined2 *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar5 + -1) * 2) <
          (undefined2 *)(param_1 + 0x28))) {
        uVar1 = iVar5 - iVar7 & 0x80000007;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
        }
        uVar2 = ((iVar5 - uVar1) - iVar7) + 7;
        uVar4 = 1;
        if (iVar7 < (int)(iVar5 - uVar1)) {
          uVar4 = uVar2 >> 3;
        }
        uVar1 = iVar7 + uVar4 * 8;
        uVar8 = (ulonglong)uVar1;
        for (uVar3 = (ulonglong)((longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3) << 4) / 2
            ; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = 0xffff;
          puVar6 = puVar6 + 1;
        }
        if (iVar5 <= (int)uVar1) goto LAB_1804080e9;
      }
    }
    do {
      iVar7 = (int)uVar8;
      uVar1 = iVar7 + 1;
      uVar8 = (ulonglong)uVar1;
      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 2) = 0xffff;
    } while ((int)uVar1 < iVar5);
  }
LAB_1804080e9:
  *(int *)(param_1 + 0x20) = iVar5;
  return;
}



/* ===== 180408100 FUN_180408100 ===== */

longlong FUN_180408100(longlong param_1,ushort param_2,float *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  ushort uVar5;
  longlong lVar6;
  ushort *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  lVar8 = *(longlong *)(param_1 + 0x58);
  lVar3 = *(longlong *)(lVar8 + 8);
  if ((*(char *)(lVar3 + 0x50) == '\0') && ((*(byte *)(lVar8 + 0x10) & 4) == 0)) {
    uVar5 = param_2;
    if (*(int *)(lVar8 + 0x38) != 0) {
      uVar5 = FUN_1803d8260(lVar8 + 0x38,param_2,param_2);
    }
    if (((uVar5 == *(ushort *)(lVar8 + 0x30)) && (*(char *)(lVar8 + 0x35) != '\0')) &&
       (lVar6 = FUN_180404e40(lVar3), lVar6 != 0)) {
      return lVar6;
    }
    plVar11 = *(longlong **)(lVar8 + 0x28);
    uVar10 = 0;
    lVar6 = *(longlong *)(param_1 + 0x60);
    plVar1 = plVar11 + *(int *)(lVar8 + 0x20);
    if (((longlong)*(int *)(lVar8 + 0x20) & 0x1fffffffffffffffU) != 0) {
      do {
        lVar8 = *plVar11;
        lVar9 = *(longlong *)(lVar8 + 0x88);
        if (lVar9 == 0) {
          lVar9 = *(longlong *)(lVar3 + 0x2b8);
        }
        puVar7 = *(ushort **)(lVar8 + 0x48);
        if (puVar7 != (ushort *)0x0) {
          uVar2 = *puVar7;
          while (uVar2 != 0) {
            if ((*puVar7 <= uVar5) && (uVar5 <= puVar7[1])) goto LAB_18040829b;
            puVar7 = puVar7 + 2;
            uVar2 = *puVar7;
          }
        }
        if (param_3 == (float *)0x0) {
          local_78 = 0;
          local_50 = 0xffffffff;
          local_70 = 0;
          uStack_68 = 0;
          local_60 = 0;
          uStack_58 = 0;
          cVar4 = (**(code **)(lVar9 + 0x40))(lVar3,lVar8,param_1,lVar6,uVar5,&local_78,0);
          if (cVar4 != '\0') {
            local_78 = CONCAT44(local_78._4_4_,
                                ((uint)param_2 << 4 | uVar10 & 0xf) << 2 | (uint)local_78 & 3);
            lVar8 = FUN_180409370(lVar3,param_1,lVar8,&local_78);
            return lVar8;
          }
        }
        else {
          cVar4 = (**(code **)(lVar9 + 0x40))(lVar3,lVar8,param_1,lVar6,uVar5,0,param_3);
          if (cVar4 != '\0') {
            fVar14 = *param_3;
            if (lVar8 != 0) {
              fVar12 = *(float *)(**(longlong **)(*(longlong *)(param_1 + 0x58) + 0x28) + 0x3c);
              if (fVar12 == 0.0) {
                fVar12 = DAT_1808ac34c;
              }
              else {
                fVar12 = *(float *)(param_1 + 0x14) / fVar12;
              }
              fVar13 = fVar12 * *(float *)(lVar8 + 0x58);
              if ((fVar13 <= fVar14) &&
                 (fVar13 = fVar12 * *(float *)(lVar8 + 0x5c), fVar14 <= fVar13)) {
                fVar13 = fVar14;
              }
              if (*(char *)(lVar8 + 0x36) != '\0') {
                fVar13 = (float)(int)(fVar13 + DAT_1808ac1f4);
              }
              fVar14 = fVar13 + *(float *)(lVar8 + 0x60);
            }
            FUN_180407fd0(param_1,uVar5 + 1);
            *(float *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 4) = fVar14;
            return 0;
          }
        }
LAB_18040829b:
        lVar6 = lVar6 + *(longlong *)(lVar9 + 0x48);
        uVar10 = uVar10 + 1;
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar1);
    }
    if ((*(uint *)(param_1 + 0x4c) & 0x8000000) == 0) {
      if (*(int *)(param_1 + 0x40) == -1) {
        FUN_180405080(param_1);
      }
      FUN_180407fd0(param_1,uVar5 + 1);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 4) =
           *(undefined4 *)(param_1 + 0x10);
      *(undefined2 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar5 * 2) = 0xfffe;
    }
  }
  else if ((*(int *)(param_1 + 0x40) == -1) && ((*(uint *)(param_1 + 0x4c) & 0x8000000) == 0)) {
    FUN_180405080();
  }
  return 0;
}



/* ===== 1804083d0 FUN_1804083d0 ===== */

undefined4 FUN_1804083d0(longlong param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined4 local_res8 [8];
  
  fVar1 = *(float *)(param_1 + 0x14);
  if ((DAT_1808acb28 <= fVar1) || ((*(uint *)(param_1 + 0x4c) & 0x10000000) != 0)) {
    local_res8[0] = 0;
    lVar2 = FUN_180408100(fVar1,param_2,local_res8);
    if (lVar2 == 0) {
      return local_res8[0];
    }
  }
  else {
    lVar2 = FUN_180408100(fVar1,param_2,0);
    if (lVar2 == 0) {
      return *(undefined4 *)(param_1 + 0x10);
    }
  }
  return *(undefined4 *)(lVar2 + 4);
}



/* ===== 180408440 FUN_180408440 ===== */

ulonglong FUN_180408440(undefined8 param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  short sVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  
  lVar5 = _malloc_base(0xa8);
  lVar12 = DAT_180ca0a50;
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  pcVar3 = *(char **)(param_2 + 0x28);
  iVar4 = *(int *)(param_2 + 100);
  cVar2 = *pcVar3;
  if (cVar2 == '1') {
    bVar13 = pcVar3[1] == '\0';
LAB_1804085a0:
    if ((!bVar13) || (pcVar3[2] != '\0')) goto LAB_180408737;
    bVar13 = pcVar3[3] == '\0';
LAB_1804085b4:
    if (!bVar13) goto LAB_180408737;
LAB_1804085ba:
    uVar10 = -(uint)(iVar4 != 0);
  }
  else {
    if (cVar2 != 't') {
      if (cVar2 != 'O') {
        if (cVar2 != '\0') goto LAB_180408737;
        bVar13 = pcVar3[1] == '\x01';
        goto LAB_1804085a0;
      }
      if ((pcVar3[1] != 'T') || (pcVar3[2] != 'T')) goto LAB_180408737;
      bVar13 = pcVar3[3] == 'O';
      goto LAB_1804085b4;
    }
    if (pcVar3[1] == 'y') {
      if (pcVar3[2] != 'p') goto LAB_180408737;
      bVar13 = pcVar3[3] == '1';
      goto LAB_1804085b4;
    }
    if (((pcVar3[1] == 'r') && (pcVar3[2] == 'u')) && (pcVar3[3] == 'e')) goto LAB_1804085ba;
    if (((pcVar3[1] != 't') || (pcVar3[2] != 'c')) ||
       ((pcVar3[3] != 'f' ||
        (((((uint)(byte)pcVar3[5] << 0x10 | (uint)(byte)pcVar3[6] << 8 |
            (uint)(byte)pcVar3[4] << 0x18 | (uint)(byte)pcVar3[7]) - 0x10000 & 0xfffeffff) != 0 ||
         (CONCAT31(CONCAT21(CONCAT11(pcVar3[8],pcVar3[9]),pcVar3[10]),pcVar3[0xb]) <= iVar4))))))
    goto LAB_180408737;
    lVar11 = (longlong)(iVar4 * 4);
    uVar10 = (uint)(byte)pcVar3[lVar11 + 0xd] << 0x10 | (uint)(byte)pcVar3[lVar11 + 0xe] << 8 |
             (uint)(byte)pcVar3[lVar11 + 0xc] << 0x18 | (uint)(byte)pcVar3[lVar11 + 0xf];
  }
  if (-1 < (int)uVar10) {
    iVar4 = FUN_1803f78a0(lVar5);
    lVar12 = DAT_180ca0a50;
    if (iVar4 != 0) {
      *(longlong *)(param_2 + 0x90) = lVar5;
      fVar1 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x80) + 0x28) + 0x3c);
      if ((*(char *)(param_2 + 0x35) != '\0') && (*(float *)(param_2 + 0x3c) == 0.0)) {
        *(float *)(param_2 + 0x3c) = fVar1;
      }
      lVar11 = (longlong)*(int *)(lVar5 + 0x24);
      lVar12 = *(longlong *)(lVar5 + 8);
      iVar4 = (int)CONCAT11(*(undefined1 *)(lVar11 + 4 + lVar12),
                            *(undefined1 *)(lVar11 + 5 + lVar12)) -
              (int)CONCAT11(*(undefined1 *)(lVar11 + 6 + lVar12),
                            *(undefined1 *)(lVar11 + 7 + lVar12));
      fVar14 = DAT_1808ac34c / (float)iVar4;
      *(float *)(lVar5 + 0xa0) = fVar14;
      if (((*(char *)(param_2 + 0x35) != '\0') && (*(float *)(param_2 + 0x3c) != 0.0)) &&
         (fVar1 != 0.0)) {
        fVar14 = (*(float *)(param_2 + 0x3c) / fVar1) * fVar14;
        *(float *)(lVar5 + 0xa0) = fVar14;
      }
      *(float *)(lVar5 + 0xa0) = fVar14 * *(float *)(param_2 + 0x74);
      return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
    }
    if (lVar5 != 0) {
      if (DAT_180ca0a50 != 0) {
        piVar9 = (int *)(DAT_180ca0a50 + 4);
        piVar8 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
        if (*piVar8 != *piVar9) {
          iVar4 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar7 = (short)iVar4 + (short)(iVar4 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar7;
          piVar8 = (int *)(lVar12 + 0x29c0 + (longlong)sVar7 * 8);
          *piVar8 = *piVar9;
          *(undefined4 *)(lVar12 + 0x29c4 + (longlong)sVar7 * 8) = 0;
        }
        *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
        *(int *)(lVar12 + 0x29b8) = *(int *)(lVar12 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar5);
    }
    uVar6 = FUN_1803ebc00(
                         "stbtt_InitFont(): failed to parse FontData. It is correct and complete? Check FontDataSize."
                         );
    return uVar6 & 0xffffffffffffff00;
  }
LAB_180408737:
  if (lVar5 != 0) {
    if (lVar12 != 0) {
      piVar9 = (int *)(lVar12 + 0x29c0 + (longlong)*(short *)(lVar12 + 0x29bc) * 8);
      if (*piVar9 != *(int *)(lVar12 + 4)) {
        iVar4 = *(short *)(lVar12 + 0x29bc) + 1;
        sVar7 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(lVar12 + 0x29bc) = sVar7;
        piVar9 = (int *)(lVar12 + 0x29c0 + (longlong)sVar7 * 8);
        *piVar9 = *(int *)(lVar12 + 4);
        *(undefined4 *)(lVar12 + 0x29c4 + (longlong)sVar7 * 8) = 0;
      }
      *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
      *(int *)(lVar12 + 0x29b8) = *(int *)(lVar12 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar5);
  }
  uVar6 = FUN_1803ebc00(
                       "stbtt_GetFontOffsetForIndex(): FontData is incorrect, or FontNo cannot be found."
                       );
  return uVar6 & 0xffffffffffffff00;
}



/* ===== 1804087d0 FUN_1804087d0 ===== */

void FUN_1804087d0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_2 + 0x90);
  if (lVar2 == 0) {
    *(undefined8 *)(param_2 + 0x90) = 0;
    return;
  }
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
  *(undefined8 *)(param_2 + 0x90) = 0;
  return;
}



/* ===== 180408890 FUN_180408890 ===== */

bool FUN_180408890(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1803f7e80(*(undefined8 *)(param_2 + 0x90),param_3);
  return iVar1 != 0;
}



/* ===== 1804088b0 FUN_1804088b0 ===== */

undefined8 FUN_1804088b0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (*(char *)(param_2 + 0x35) == '\0') {
    lVar3 = *(longlong *)(param_2 + 0x90);
    lVar5 = (longlong)*(int *)(lVar3 + 0x24);
    fVar7 = (*(float *)(lVar3 + 0xa0) * *(float *)(param_3 + 0x14)) / *(float *)(param_2 + 0x74);
    lVar3 = *(longlong *)(lVar3 + 8);
    uVar1 = *(undefined1 *)(lVar5 + 6 + lVar3);
    uVar2 = *(undefined1 *)(lVar5 + 7 + lVar3);
    uVar6 = FUN_18053ef70((float)(int)CONCAT11(*(undefined1 *)(lVar5 + 4 + lVar3),
                                               *(undefined1 *)(lVar5 + 5 + lVar3)) * fVar7);
    *(undefined4 *)(param_3 + 0x44) = uVar6;
    fVar7 = (float)(int)CONCAT11(uVar1,uVar2) * fVar7;
    iVar4 = (int)fVar7;
    if ((fVar7 < 0.0) && ((float)iVar4 != fVar7)) {
      iVar4 = iVar4 + -1;
    }
    *(float *)(param_3 + 0x48) = (float)iVar4;
  }
  return 1;
}



/* ===== 180408980 FUN_180408980 ===== */

undefined8
FUN_180408980(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,ushort param_5,
             uint *param_6,float *param_7)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_res10;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar26;
  undefined8 uVar25;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar27;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  
  uVar1 = param_5;
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
  lVar2 = *(longlong *)(param_2 + 0x90);
  iVar5 = FUN_1803f7e80(lVar2,param_5);
  if (iVar5 == 0) {
    return 0;
  }
  iVar14 = (int)*(char *)(param_2 + 0x37);
  if ((*(char *)(param_2 + 0x37) == '\0') &&
     ((DAT_1808aca34 <
       *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x14) * *(float *)(param_2 + 0x70) ||
      (iVar14 = 2, *(char *)(param_2 + 0x36) != '\0')))) {
    iVar14 = 1;
  }
  iVar6 = (int)*(char *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x38) == '\0') {
    iVar6 = 1;
  }
  fVar20 = *(float *)(param_3 + 0x14) * *(float *)(lVar2 + 0xa0);
  iVar7 = 0;
  fVar22 = *(float *)(param_3 + 0x18) * *(float *)(param_2 + 0x70);
  fVar23 = (float)iVar14;
  fVar17 = fVar20 * fVar22;
  fVar24 = (float)iVar6;
  fVar21 = fVar23 * fVar17;
  fVar17 = fVar24 * fVar17;
  if (*(int *)(lVar2 + 0x4c) == 0) {
    iVar9 = FUN_180235af0(lVar2,iVar5);
    if (-1 < iVar9) {
      lVar3 = *(longlong *)(lVar2 + 8);
      lVar12 = (longlong)iVar9;
      iVar8 = (int)CONCAT11(*(undefined1 *)(lVar3 + 2 + lVar12),*(undefined1 *)(lVar3 + 3 + lVar12))
      ;
      _param_5 = (int)CONCAT11(*(undefined1 *)(lVar3 + 4 + lVar12),
                               *(undefined1 *)(lVar3 + 5 + lVar12));
      iVar9 = (int)CONCAT11(*(undefined1 *)(lVar3 + 8 + lVar12),*(undefined1 *)(lVar3 + 9 + lVar12))
      ;
      iVar7 = (int)CONCAT11(*(undefined1 *)(lVar3 + 6 + lVar12),*(undefined1 *)(lVar3 + 7 + lVar12))
      ;
      goto LAB_180408b6b;
    }
    iVar8 = 0;
    iVar9 = 0;
    iVar15 = 0;
  }
  else {
    local_f8 = 1;
    local_d0 = 0;
    local_c8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    iVar7 = FUN_180236d80(lVar2,iVar5,&local_f8);
    bVar16 = iVar7 != 0;
    _param_5 = 0;
    if (bVar16) {
      _param_5 = (int)uStack_d8;
    }
    iVar8 = 0;
    if (bVar16) {
      iVar8 = (int)local_e0;
    }
    iVar9 = 0;
    if (bVar16) {
      iVar9 = uStack_d8._4_4_;
    }
    iVar7 = 0;
    if (bVar16) {
      iVar7 = local_e0._4_4_;
    }
LAB_180408b6b:
    fVar18 = (float)iVar8 * fVar21 + 0.0;
    iVar8 = (int)fVar18;
    if ((fVar18 < 0.0) && ((float)iVar8 != fVar18)) {
      iVar8 = iVar8 + -1;
    }
    iVar8 = (int)(float)iVar8;
    fVar18 = 0.0 - (float)iVar9 * fVar17;
    iVar9 = (int)fVar18;
    if ((fVar18 < 0.0) && ((float)iVar9 != fVar18)) {
      iVar9 = iVar9 + -1;
    }
    iVar9 = (int)(float)iVar9;
    fVar18 = (float)FUN_18053ef70((float)iVar7 * fVar21 + 0.0);
    iVar7 = (int)fVar18;
    fVar18 = (float)FUN_18053ef70(0.0 - (float)_param_5 * fVar17);
    iVar15 = (int)fVar18;
  }
  lVar3 = *(longlong *)(lVar2 + 8);
  uVar10 = (uint)CONCAT11(*(undefined1 *)((longlong)*(int *)(lVar2 + 0x24) + 0x22 + lVar3),
                          *(undefined1 *)((longlong)*(int *)(lVar2 + 0x24) + 0x23 + lVar3));
  if (iVar5 < (int)uVar10) {
    lVar12 = (longlong)(iVar5 * 4) + (longlong)*(int *)(lVar2 + 0x28);
    sVar13 = CONCAT11(*(undefined1 *)(lVar12 + lVar3),*(undefined1 *)(lVar12 + 1 + lVar3));
  }
  else {
    lVar12 = (ulonglong)(uVar10 * 4) + (longlong)*(int *)(lVar2 + 0x28);
    sVar13 = CONCAT11(*(undefined1 *)(lVar12 + -4 + lVar3),*(undefined1 *)(lVar12 + -3 + lVar3));
  }
  fVar20 = (float)(int)sVar13 * fVar20;
  if (param_7 != (float *)0x0) {
    *param_7 = fVar20;
    return 1;
  }
  *param_6 = *param_6 & 0x3f;
  *param_6 = *param_6 | (uint)uVar1 << 6;
  param_6[1] = (uint)fVar20;
  if (iVar8 == iVar7) {
    return 1;
  }
  if (iVar9 == iVar15) {
    return 1;
  }
  iVar7 = (iVar7 - iVar8) + -1 + iVar14;
  iVar9 = (iVar15 - iVar9) + -1 + iVar6;
  uVar10 = FUN_180407b60(param_1,iVar7,iVar9,0);
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  local_b8 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68) +
             ((longlong)
              (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                       (ulonglong)(uVar10 & 0x7ffff) * 4) << 0xc) >> 0xc) * 8;
  if (*(int *)(lVar2 + 0x4c) == 0) {
    iVar8 = FUN_180235af0(lVar2,iVar5);
    if (iVar8 < 0) {
      iVar8 = 0;
      local_res10 = 0;
      goto LAB_180408e6c;
    }
    lVar3 = *(longlong *)(lVar2 + 8);
    lVar12 = (longlong)iVar8;
    iVar8 = (int)CONCAT11(*(undefined1 *)(lVar3 + 2 + lVar12),*(undefined1 *)(lVar3 + 3 + lVar12));
    iVar15 = (int)CONCAT11(*(undefined1 *)(lVar3 + 8 + lVar12),*(undefined1 *)(lVar3 + 9 + lVar12));
  }
  else {
    local_f8 = 1;
    local_d0 = 0;
    local_c8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    iVar11 = FUN_180236d80(lVar2,iVar5,&local_f8);
    iVar8 = 0;
    if (iVar11 != 0) {
      iVar8 = (int)local_e0;
    }
    iVar15 = 0;
    if (iVar11 != 0) {
      iVar15 = uStack_d8._4_4_;
    }
  }
  fVar20 = (float)iVar8 * fVar21 + 0.0;
  iVar8 = (int)fVar20;
  if ((fVar20 < 0.0) && ((float)iVar8 != fVar20)) {
    iVar8 = iVar8 + -1;
  }
  local_res10 = (int)(float)iVar8;
  fVar20 = 0.0 - (float)iVar15 * fVar17;
  iVar8 = (int)fVar20;
  if ((fVar20 < 0.0) && ((float)iVar8 != fVar20)) {
    iVar8 = iVar8 + -1;
  }
  iVar8 = (int)(float)iVar8;
LAB_180408e6c:
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  FUN_18000d5e0(lVar3 + 0x80,iVar9 * iVar7);
  local_c0 = *(undefined8 *)(lVar3 + 0x88);
  FUN_180540170(local_c0,0,(longlong)(iVar9 * iVar7));
  uVar4 = local_c0;
  uVar25 = CONCAT44(uVar26,iVar7);
  FUN_1803fa530(lVar2,local_c0,(iVar7 - iVar14) + 1,(iVar9 - iVar6) + 1,uVar25,
                CONCAT44(uVar27,fVar21),fVar17,0,0,iVar5);
  uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
  if (1 < iVar14) {
    uVar25 = CONCAT44(uVar26,iVar14);
    FUN_1803fa7d0(uVar4,iVar7,iVar9,iVar7,uVar25);
    uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
  }
  if (1 < iVar6) {
    FUN_1803faa20(uVar4,iVar7,iVar9,iVar7,CONCAT44(uVar26,iVar6));
  }
  if (iVar14 == 0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = (float)(1 - iVar14) / (fVar23 + fVar23);
  }
  if (iVar6 == 0) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = (float)(1 - iVar6) / (fVar24 + fVar24);
  }
  fVar18 = *(float *)(**(longlong **)(*(longlong *)(param_3 + 0x58) + 0x28) + 0x3c);
  if (fVar18 == 0.0) {
    fVar18 = DAT_1808ac34c;
  }
  else {
    fVar18 = *(float *)(param_3 + 0x14) / fVar18;
  }
  fVar19 = fVar18 * *(float *)(param_2 + 0x50) + DAT_1808ac1f4;
  iVar5 = (int)fVar19;
  if ((fVar19 < 0.0) && ((float)iVar5 != fVar19)) {
    iVar5 = iVar5 + -1;
  }
  fVar18 = fVar18 * *(float *)(param_2 + 0x54) + DAT_1808ac1f4;
  iVar14 = (int)fVar18;
  if ((fVar18 < 0.0) && ((float)iVar14 != fVar18)) {
    iVar14 = iVar14 + -1;
  }
  fVar23 = DAT_1808ac34c / (fVar23 * fVar22);
  fVar22 = DAT_1808ac34c / (fVar24 * fVar22);
  fVar21 = (float)(int)(*(float *)(param_3 + 0x44) + DAT_1808ac1f4) + fVar21 + (float)iVar14;
  param_6[3] = (uint)((float)iVar8 * fVar22 + fVar21);
  param_6[2] = (uint)((float)local_res10 * fVar23 + (float)iVar5 + fVar20);
  param_6[4] = (uint)((float)(int)((uint)*(ushort *)(local_b8 + 4) + local_res10) * fVar23 +
                     (float)iVar5 + fVar20);
  uVar1 = *(ushort *)(local_b8 + 6);
  *param_6 = *param_6 | 2;
  param_6[10] = uVar10;
  param_6[5] = (uint)((float)(int)((uint)uVar1 + iVar8) * fVar22 + fVar21);
  FUN_1804096d0(param_1,param_3,param_2,param_6,local_b8,uVar4,fVar17,iVar7);
  return 1;
}



/* ===== 180409130 FUN_180409130 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180409130(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8) <
      DAT_181116460) {
    FUN_1804ed1b0(&DAT_181116460);
    if (DAT_181116460 == -1) {
      _DAT_181116470 = (char *)0x0;
      uRam0000000181116478 = 0;
      _DAT_181116480 = 0;
      _DAT_181116488 = (code *)0x0;
      _DAT_181116490 = (code *)0x0;
      _DAT_181116498 = (code *)0x0;
      _DAT_1811164a0 = (code *)0x0;
      _DAT_1811164a8 = 0;
      _DAT_1811164b0 = (code *)0x0;
      uRam00000001811164b8 = 0;
      _Init_thread_footer(&DAT_181116460);
    }
  }
  _DAT_1811164a8 = 0;
  _DAT_181116470 = "stb_truetype";
  _DAT_181116488 = FUN_180408440;
  _DAT_181116490 = FUN_1804087d0;
  _DAT_181116498 = FUN_180408890;
  _DAT_1811164a0 = FUN_1804088b0;
  _DAT_1811164b0 = FUN_180408980;
  return &DAT_181116470;
}



/* ===== 180409210 FUN_180409210 ===== */

void FUN_180409210(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 8;
  do {
    if ((*(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)((ulonglong)(longlong)iVar3 >> 5) * 4
                  ) >> ((byte)iVar3 & 0x1f) & 1) != 0) {
      iVar1 = param_2[1];
      if (*param_2 == iVar1) {
        iVar5 = *param_2 + 1;
        if (iVar1 == 0) {
          iVar1 = 8;
        }
        else {
          iVar1 = iVar1 / 2 + iVar1;
        }
        if (iVar5 < iVar1) {
          iVar5 = iVar1;
        }
        FUN_1803f6b20(param_2,iVar5);
      }
      *(short *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 2) = (short)iVar3;
      iVar5 = *param_2;
      iVar1 = iVar5 + 1;
      *param_2 = iVar1;
      if (iVar3 < 0xffff) {
        do {
          if ((*(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)((longlong)iVar3 + 1U >> 5) * 4
                        ) >> ((byte)((longlong)iVar3 + 1U) & 0x1f) & 1) == 0) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0xffff);
      }
      iVar2 = param_2[1];
      if (iVar1 == iVar2) {
        iVar5 = iVar5 + 2;
        if (iVar2 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = iVar2 / 2 + iVar2;
        }
        if (iVar5 < iVar2) {
          iVar5 = iVar2;
        }
        FUN_1803f6b20(param_2,iVar5);
      }
      *(short *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 2) = (short)iVar3;
      *param_2 = *param_2 + 1;
    }
    iVar3 = iVar3 + 1;
    if (0xffff < iVar3) {
      iVar3 = param_2[1];
      if (*param_2 == iVar3) {
        iVar1 = *param_2 + 1;
        if (iVar3 != 0) {
          iVar4 = iVar3 + iVar3 / 2;
        }
        if (iVar1 < iVar4) {
          iVar1 = iVar4;
        }
        FUN_1803f6b20(param_2,iVar1);
      }
      *(undefined2 *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 2) = 0;
      *param_2 = *param_2 + 1;
      return;
    }
  } while( true );
}



/* ===== 180409370 FUN_180409370 ===== */

uint * FUN_180409370(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  
  iVar3 = *(int *)(param_2 + 0x30);
  iVar9 = *(int *)(param_2 + 0x34);
  if (iVar3 == iVar9) {
    if (iVar9 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar9 / 2 + iVar9;
    }
    iVar12 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar9 < iVar12) {
      uVar7 = _malloc_base((longlong)iVar12 * 0x2c);
      lVar14 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(param_2 + 0x38) != 0) {
        FUN_180540530(uVar7,*(longlong *)(param_2 + 0x38),(longlong)*(int *)(param_2 + 0x30) * 0x2c)
        ;
        lVar10 = *(longlong *)(param_2 + 0x38);
        if ((lVar10 != 0) && (lVar14 != 0)) {
          piVar11 = (int *)(lVar14 + 0x29c0 + (longlong)*(short *)(lVar14 + 0x29bc) * 8);
          if (*piVar11 != *(int *)(lVar14 + 4)) {
            iVar9 = *(short *)(lVar14 + 0x29bc) + 1;
            sVar8 = (short)iVar9 + (short)(iVar9 / 6) * -6;
            *(short *)(lVar14 + 0x29bc) = sVar8;
            piVar11 = (int *)(lVar14 + 0x29c0 + (longlong)sVar8 * 8);
            *piVar11 = *(int *)(lVar14 + 4);
            *(undefined4 *)(lVar14 + 0x29c4 + (longlong)sVar8 * 8) = 0;
          }
          *(short *)((longlong)piVar11 + 6) = *(short *)((longlong)piVar11 + 6) + 1;
          *(int *)(lVar14 + 0x29b8) = *(int *)(lVar14 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar10);
      }
      *(undefined8 *)(param_2 + 0x38) = uVar7;
      *(int *)(param_2 + 0x34) = iVar12;
    }
  }
  uVar7 = param_4[1];
  lVar10 = (longlong)*(int *)(param_2 + 0x30) * 0x2c;
  lVar14 = *(longlong *)(param_2 + 0x38);
  *(undefined8 *)(lVar10 + lVar14) = *param_4;
  ((undefined8 *)(lVar10 + lVar14))[1] = uVar7;
  uVar7 = param_4[3];
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar14);
  *puVar1 = param_4[2];
  puVar1[1] = uVar7;
  uVar7 = *(undefined8 *)((longlong)param_4 + 0x24);
  puVar1 = (undefined8 *)(lVar10 + 0x1c + lVar14);
  *puVar1 = *(undefined8 *)((longlong)param_4 + 0x1c);
  puVar1[1] = uVar7;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  puVar13 = (uint *)((longlong)iVar3 * 0x2c + *(longlong *)(param_2 + 0x38));
  if (puVar13[10] != 0xffffffff) {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x68);
    lVar10 = (longlong)
             (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78) +
                      (ulonglong)(puVar13[10] & 0x7ffff) * 4) << 0xc) >> 0xc;
    puVar13[6] = (uint)((float)*(ushort *)(lVar14 + lVar10 * 8) * *(float *)(param_1 + 0x54));
    puVar13[7] = (uint)((float)*(ushort *)(lVar14 + 2 + lVar10 * 8) * *(float *)(param_1 + 0x58));
    puVar13[8] = (uint)((float)((uint)*(ushort *)(lVar14 + 4 + lVar10 * 8) +
                               (uint)*(ushort *)(lVar14 + lVar10 * 8)) * *(float *)(param_1 + 0x54))
    ;
    puVar13[9] = (uint)((float)((uint)*(ushort *)(lVar14 + 6 + lVar10 * 8) +
                               (uint)*(ushort *)(lVar14 + 2 + lVar10 * 8)) *
                       *(float *)(param_1 + 0x58));
    uVar6 = *(uint *)(param_2 + 0x4c);
    *(uint *)(param_2 + 0x4c) =
         ((uint)*(ushort *)(lVar14 + 6 + lVar10 * 8) * (uint)*(ushort *)(lVar14 + 4 + lVar10 * 8) +
          uVar6 ^ uVar6) & 0x3ffffff ^ uVar6;
  }
  fVar4 = DAT_1808ac1f4;
  if (param_3 != 0) {
    fVar16 = *(float *)(**(longlong **)(*(longlong *)(param_2 + 0x58) + 0x28) + 0x3c);
    if (fVar16 == 0.0) {
      fVar16 = DAT_1808ac34c;
    }
    else {
      fVar16 = *(float *)(param_2 + 0x14) / fVar16;
    }
    fVar2 = (float)puVar13[1];
    fVar15 = fVar16 * *(float *)(param_3 + 0x58);
    if ((fVar15 <= fVar2) && (fVar15 = fVar16 * *(float *)(param_3 + 0x5c), fVar2 <= fVar15)) {
      fVar15 = fVar2;
    }
    if (fVar15 != fVar2) {
      fVar16 = (fVar15 - fVar2) * DAT_1808ac1f4;
      if (*(char *)(param_3 + 0x36) != '\0') {
        fVar16 = (float)(int)fVar16;
      }
      puVar13[2] = (uint)(fVar16 + (float)puVar13[2]);
      puVar13[4] = (uint)(fVar16 + (float)puVar13[4]);
    }
    if (*(char *)(param_3 + 0x36) != '\0') {
      fVar15 = (float)(int)(fVar15 + fVar4);
    }
    puVar13[1] = (uint)(fVar15 + *(float *)(param_3 + 0x60));
  }
  if ((*puVar13 & 1) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x5e) = 1;
    *(undefined1 *)(param_1 + 0x53) = 1;
  }
  uVar6 = *puVar13 >> 6;
  FUN_180407fd0(param_2,uVar6 + 1);
  *(uint *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar6 * 4) = puVar13[1];
  *(short *)(*(longlong *)(param_2 + 0x28) + (ulonglong)uVar6 * 2) = (short)iVar3;
  lVar14 = (longlong)((int)uVar6 >> 0xd) >> 3;
  *(byte *)(lVar14 + 0x34 + *(longlong *)(param_2 + 0x58)) =
       *(byte *)(lVar14 + 0x34 + *(longlong *)(param_2 + 0x58)) |
       (byte)(1 << ((int)uVar6 >> 0xd & 7U));
  return puVar13;
}



/* ===== 1804096d0 FUN_1804096d0 ===== */

void FUN_1804096d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  ushort *param_5,byte *param_6,undefined8 param_7,int param_8)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  int local_54;
  ulonglong local_50;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar2 = param_5[3];
  uVar7 = (uint)uVar2;
  uVar3 = param_5[2];
  iVar10 = *(int *)(lVar4 + 0x2c) * *(int *)(lVar4 + 0x24);
  puVar8 = (uint *)((longlong)
                    (int)(((uint)param_5[1] * *(int *)(lVar4 + 0x24) + (uint)*param_5) *
                         *(int *)(lVar4 + 0x2c)) + *(longlong *)(lVar4 + 0x30));
  if (*(int *)(lVar4 + 0x20) == 1) {
    if (uVar2 != 0) {
      do {
        FUN_180540530(puVar8,param_6,(uint)uVar3);
        uVar7 = uVar7 - 1;
        param_6 = param_6 + param_8;
        puVar8 = (uint *)((longlong)puVar8 + (longlong)iVar10);
      } while (0 < (int)uVar7);
    }
  }
  else if ((*(int *)(lVar4 + 0x20) == 0) && (uVar2 != 0)) {
    do {
      pbVar5 = param_6;
      puVar6 = puVar8;
      uVar9 = (uint)uVar3;
      if (uVar3 != 0) {
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          uVar9 = uVar9 - 1;
          *puVar6 = (uint)bVar1 << 0x18 | 0xffffff;
          puVar6 = puVar6 + 1;
        } while (0 < (int)uVar9);
      }
      uVar7 = uVar7 - 1;
      param_6 = param_6 + param_8;
      puVar8 = (uint *)((longlong)puVar8 + (longlong)iVar10);
    } while (0 < (int)uVar7);
  }
  local_80 = *(undefined8 *)(param_2 + 0x58);
  local_54 = *(int *)(lVar4 + 0x24) * *(int *)(lVar4 + 0x2c);
  local_50 = (ulonglong)
             (CONCAT24((short)((uint)*(undefined4 *)(param_5 + 2) >> 0x10),
                       *(undefined4 *)(param_5 + 2)) & 0xffff0000ffff);
  local_60 = (longlong)
             (int)(((uint)*param_5 + (uint)param_5[1] * *(int *)(lVar4 + 0x24)) *
                  *(int *)(lVar4 + 0x2c)) + *(longlong *)(lVar4 + 0x30);
  local_58 = *(undefined4 *)(lVar4 + 0x20);
  local_88 = param_1;
  local_78 = param_3;
  local_70 = param_2;
  local_68 = param_4;
  if (*(float *)(param_3 + 0x6c) != DAT_1808ac34c) {
    FUN_180402ba0(&local_88);
  }
  FUN_180402fa0(lVar4,*param_5,param_5[1],param_5[2],param_5[3]);
  *(undefined1 *)(param_1 + 0x52) = 0;
  return;
}



/* ===== 1804098c0 FUN_1804098c0 ===== */

longlong FUN_1804098c0(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    if (uVar1 == 0xfffe) {
      return (longlong)*(int *)(param_1 + 0x40) * 0x2c + *(longlong *)(param_1 + 0x38);
    }
    if (uVar1 != 0xffff) {
      return (ulonglong)uVar1 * 0x2c + *(longlong *)(param_1 + 0x38);
    }
  }
  lVar2 = FUN_180408100(param_1,param_2,0);
  if (lVar2 == 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x2c + *(longlong *)(param_1 + 0x38);
  }
  return lVar2;
}



