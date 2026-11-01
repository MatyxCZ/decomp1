/* ===== 1801f73d0 FUN_1801f73d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801f73d0(undefined4 *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char local_res10 [16];
  float local_res20 [2];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  char local_a4;
  float *local_a0;
  undefined *local_98;
  float *local_90;
  char *local_88;
  undefined1 *local_80;
  
  puVar3 = (undefined1 *)register0x00000020;
  if (((((uint)param_2[6] & 1) != 0) &&
      (fVar7 = (float)param_1[3] * (float)param_1[3],
      (float)param_1[4] * (float)param_1[4] + fVar7 != 0.0)) &&
     (puVar3 = (undefined1 *)FUN_1801f3bb0(fVar7,param_3), (char)puVar3 != '\0')) {
    fVar7 = *param_2 - _DAT_1809f01d0;
    fVar10 = param_2[1] - _DAT_1809f01d4;
    local_d8 = 0.0;
    local_res20[0] = 0.0;
    FUN_1801f2f60(fVar7,fVar10,&local_d8,local_res20);
    fVar7 = fVar10 * fVar10 + fVar7 * fVar7;
    if (fVar7 < 0.0) {
      fVar7 = (float)FUN_18051af10(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    fVar1 = local_d8;
    fVar10 = local_res20[0];
    local_cc = DAT_1808ac9fc;
    if (DAT_1808ac9fc <= fVar7) {
      local_cc = fVar7;
    }
    local_98 = &DAT_1809f01d0;
    local_90 = &local_cc;
    local_c8[0] = 0;
    local_88 = local_res10;
    local_80 = local_c8;
    local_bc = 0;
    uStack_b4 = 0;
    local_c4 = 0x3f800000;
    local_c0 = 0;
    local_ac = 0;
    local_a4 = '\0';
    local_res10[0] = '\0';
    local_a0 = param_2;
    FUN_1801f7870(&local_a0,local_d8,local_res20[0]);
    uVar2 = DAT_1808adec0;
    FUN_1801f7870(&local_a0,(uint)fVar10 ^ DAT_1808adec0,fVar1);
    FUN_1801f7870(&local_a0,fVar10,(uint)fVar1 ^ uVar2);
    fVar7 = DAT_1808ac260;
    fVar11 = (fVar10 + fVar1) * DAT_1808ac260;
    FUN_1801f7870(&local_a0,(fVar1 - fVar10) * DAT_1808ac260,fVar11);
    puVar3 = (undefined1 *)FUN_1801f7870(&local_a0,fVar11,(fVar10 - fVar1) * fVar7);
    if ((local_res10[0] != '\0') && (local_a4 != '\0')) {
      local_d8 = 0.0;
      local_d0 = 0.0;
      FUN_1801f2f60((float)local_bc - uStack_b4._4_4_,local_bc._4_4_ - (float)local_ac,&local_d8,
                    &local_d0);
      local_d4 = 0.0;
      local_res20[0] = 0.0;
      puVar3 = (undefined1 *)FUN_1801f31f0(param_1,&local_d4,local_res20);
      fVar7 = local_res20[0] * local_d8 - local_d4 * local_d0;
      fVar10 = (float)((uint)fVar7 & _DAT_1808ade90);
      if (DAT_1808ac000 <= fVar10) {
        fVar8 = (float)FUN_180516b00(local_d8,(uint)local_d0 ^ uVar2);
        fVar11 = DAT_1808ac1f4;
        fVar1 = DAT_1808abfd4;
        fVar8 = fVar8 * DAT_1808aca98;
        fVar9 = (float)FUN_18053f0d0(fVar8 * DAT_1808abfd4 + DAT_1808ac1f4);
        fVar8 = fVar8 - fVar9 * DAT_1808acbd0;
        if (fVar7 < 0.0) {
          fVar8 = fVar8 + DAT_1808acb58;
          fVar7 = (float)FUN_18053f0d0(fVar8 * fVar1 + fVar11);
          fVar8 = fVar8 - fVar7 * DAT_1808acbd0;
        }
        DAT_180ceb3f0 = *param_1;
        DAT_180ceb3f4 = param_1[1];
        DAT_180ceb3f8 = param_1[2];
        DAT_180ceb3fc = (float)param_1[3];
        _DAT_180ceb400 = *(undefined8 *)(param_1 + 4);
        DAT_180ceb408 = param_1[6];
        DAT_180ceb40c = (float)param_1[7];
        DAT_180ceb410 = param_1[8];
        DAT_180ceb414 = *(undefined1 *)(param_1 + 9);
        DAT_180ceb415 = *(undefined1 *)((longlong)param_1 + 0x25);
        DAT_180ceb418 = *(undefined8 *)(param_1 + 10);
        DAT_180ceb420 = *(undefined8 *)(param_1 + 0xc);
        if ((longlong *)(param_1 + 0xe) != &DAT_180ceb428) {
          lVar5 = *(longlong *)(param_1 + 0xe);
          FUN_1802009d0(&DAT_180ceb428,lVar5,
                        (*(longlong *)(param_1 + 0x10) - lVar5 >> 3) * -0x71c71c71c71c71c7);
        }
        lVar5 = DAT_180ceb430;
        lVar6 = DAT_180ceb428;
        if (DAT_180ceb428 != DAT_180ceb430) {
          do {
            if ((*(longlong *)(lVar6 + 8) == 0) && (*(char *)(lVar6 + 0x40) != '\0')) {
              if ((*(char *)(lVar6 + 0x30) != '\0') || (*(char *)(lVar6 + 0x20) != '\0')) {
                *(undefined1 *)(lVar6 + 0x40) = 0;
                lVar5 = DAT_180ceb430;
                goto LAB_1801f77df;
              }
              FUN_180540530(lVar6,lVar6 + 0x48,lVar5 - (lVar6 + 0x48));
              lVar5 = DAT_180ceb430 + -0x48;
              DAT_180ceb430 = lVar5;
            }
            else {
LAB_1801f77df:
              lVar6 = lVar6 + 0x48;
            }
          } while (lVar6 != lVar5);
        }
        _DAT_180ceb400 = 0;
        DAT_180ceb408 = 0;
        DAT_180ceb410 = 0;
        DAT_180ceb3fc = fVar10;
        DAT_180ceb40c = fVar8;
        uVar4 = FUN_1801f7000(&DAT_180ceb3f0,param_2,param_3);
        return uVar4;
      }
    }
  }
  return (ulonglong)puVar3 & 0xffffffffffffff00;
}



/* ===== 1801f7870 FUN_1801f7870 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f7870(longlong *param_1,float param_2,float param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_98;
  float local_94;
  float local_90;
  undefined2 local_87;
  undefined1 local_85;
  undefined2 local_7f;
  undefined1 local_7d;
  undefined2 local_63;
  undefined1 local_61;
  
  pfVar1 = (float *)param_1[1];
  local_98 = param_2 * *(float *)param_1[2] + *pfVar1;
  local_94 = param_3 * *(float *)param_1[2] + pfVar1[1];
  local_90 = pfVar1[2];
  if (((DAT_180961f40 != 0) && (DAT_180961f48 != 0)) && (DAT_180961f50 != 0)) {
    uVar2 = *(undefined8 *)(*param_1 + 0xd0);
    lVar6 = FUN_18000f3a0();
    if (lVar6 != 0) {
      _DAT_180ceb280 = 0;
      uRam0000000180ceb288 = 0;
      _DAT_180ceb290 = 0;
      uRam0000000180ceb298 = 0;
      _DAT_180ceb2a0 = 0;
      uRam0000000180ceb2a8 = 0;
      _DAT_180ceb2b0 = 0;
      uRam0000000180ceb2b8 = 0;
      _DAT_180ceb2c0 = 0;
      uRam0000000180ceb2c8 = 0;
      _DAT_180ceb2d0 = 0;
      uRam0000000180ceb2d8 = 0;
      _DAT_180ceb2e0 = 0;
      uRam0000000180ceb2e8 = 0;
      _DAT_180ceb2f0 = 0;
      uRam0000000180ceb2f8 = 0;
      _DAT_180ceb320 = 0;
      uRam0000000180ceb328 = 0;
      _DAT_180ceb330 = 0;
      uRam0000000180ceb338 = 0;
      _DAT_180ceb340 = 0;
      _DAT_180ceb348 = 0;
      _DAT_180ceb350 = 0;
      uRam0000000180ceb358 = 0;
      uVar7 = FUN_180540170(&DAT_180ceb110,0,0x140);
      uRam0000000180ceb328 = CONCAT44(0x41800000,(undefined4)uRam0000000180ceb328);
      _DAT_180ceb348 = CONCAT71(DAT_180ceb348_1,1);
      cVar5 = FUN_1801f3b50(uVar7,uVar2);
      if ((((cVar5 != '\0') &&
           (cVar5 = FUN_1801f3b80(lVar6,&DAT_180ceb320,pfVar1,&local_98), fVar4 = DAT_180ceb1bc,
           cVar5 != '\0')) &&
          ((((uint)DAT_180ceb1bc & 0x7f800000) != 0x7f800000 && (DAT_180ceb1bc < DAT_1808ac34c))))
         && (((*(char *)param_1[3] == '\0' ||
              ((lVar6 = param_1[4], *(char *)(lVar6 + 8) == '\0' &&
               (DAT_1808ac34c < *(float *)(lVar6 + 4) || DAT_1808ac34c == *(float *)(lVar6 + 4)))))
             || (pfVar1 = (float *)*param_1, fVar12 = 0.0 - *pfVar1,
                fVar9 = *(float *)(lVar6 + 0xc) - *pfVar1,
                fVar10 = *(float *)(lVar6 + 0x10) - pfVar1[1], fVar11 = 0.0 - pfVar1[2],
                fVar8 = *(float *)(lVar6 + 0x14) - pfVar1[2], fVar13 = 0.0 - pfVar1[1],
                fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11 <
                fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8)))) {
        puVar3 = (undefined1 *)param_1[4];
        *puVar3 = 1;
        *(undefined2 *)(puVar3 + 1) = local_87;
        puVar3[3] = local_85;
        *(float *)(puVar3 + 4) = fVar4;
        puVar3[8] = 0;
        *(undefined2 *)(puVar3 + 9) = local_7f;
        puVar3[0xb] = local_7d;
        *(undefined4 *)(puVar3 + 0xc) = 0;
        *(undefined4 *)(puVar3 + 0x10) = 0;
        *(undefined4 *)(puVar3 + 0x14) = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0;
        *(undefined4 *)(puVar3 + 0x20) = 0;
        puVar3[0x24] = 0;
        *(undefined2 *)(puVar3 + 0x25) = local_63;
        puVar3[0x27] = local_61;
        *(undefined1 *)param_1[3] = 1;
      }
    }
  }
  return;
}



/* ===== 1801f7b60 FUN_1801f7b60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f7b60(undefined4 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *_Str1;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_res18;
  
  if (DAT_180920dc5 == '\0') {
    return;
  }
  cVar2 = FUN_18026b8a0();
  if (cVar2 != '\0') {
    return;
  }
  if (0.0 < *(float *)(param_2 + 0x14)) {
    return;
  }
  if ((((DAT_180ceb268 | *(ulonglong *)(param_1 + 10)) & 2) != 0) && (DAT_180cc412c != '\0')) {
    return;
  }
  if ((*(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) +
       *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc) < DAT_1808ac34c) &&
     ((float)param_1[4] * (float)param_1[4] + (float)param_1[3] * (float)param_1[3] == 0.0)) {
    return;
  }
  if (((DAT_180cc412d != '\0') && (DAT_1809efa7c != -1)) &&
     (FUN_1803a0940(&local_res18), local_res18 != 0)) {
    lVar4 = FUN_18000f3a0();
    if (lVar4 == 0) {
      _Str1 = (char *)0x0;
    }
    else {
      lVar4 = FUN_18000f3a0();
      if (lVar4 == 0) {
        _Str1 = (char *)0x0;
      }
      else {
        lVar4 = FUN_18000f3a0();
        if (lVar4 == 0) {
          _Str1 = (char *)0x0;
        }
        else {
          _Str1 = (char *)FUN_18000f3a0();
          if ((char *)0x7ffffffefffe < _Str1 + -0x10000) {
            _Str1 = (char *)0x0;
          }
        }
      }
    }
    if (_Str1 != (char *)0x0) {
      iVar3 = strcmp(_Str1,"C_CSPlayerPawn");
      uVar6 = 0x34;
      if (iVar3 == 0) goto LAB_1801f7cc0;
    }
  }
  uVar6 = 0x35;
LAB_1801f7cc0:
  cVar2 = FUN_1801f7000(param_1,param_2,uVar6);
  if (cVar2 == '\0') {
    DAT_180cc45b7 = 1;
    cVar2 = FUN_1801f73d0(param_1,param_2,uVar6);
    plVar1 = (longlong *)(param_1 + 0xe);
    if (cVar2 == '\0') {
      DAT_180ceb3f0 = *param_1;
      DAT_180ceb3f4 = param_1[1];
      DAT_180ceb3f8 = param_1[2];
      DAT_180ceb3fc = param_1[3];
      _DAT_180ceb400 = *(undefined8 *)(param_1 + 4);
      DAT_180ceb408 = param_1[6];
      DAT_180ceb40c = param_1[7];
      DAT_180ceb410 = param_1[8];
      DAT_180ceb414 = *(undefined1 *)(param_1 + 9);
      DAT_180ceb415 = *(undefined1 *)((longlong)param_1 + 0x25);
      DAT_180ceb418 = *(undefined8 *)(param_1 + 10);
      DAT_180ceb420 = *(undefined8 *)(param_1 + 0xc);
      if (plVar1 != &DAT_180ceb428) {
        FUN_1802009d0(&DAT_180ceb428,*plVar1,
                      (*(longlong *)(param_1 + 0x10) - *plVar1 >> 3) * -0x71c71c71c71c71c7);
      }
      lVar4 = DAT_180ceb430;
      lVar5 = DAT_180ceb428;
      if (DAT_180ceb428 != DAT_180ceb430) {
        do {
          if ((*(longlong *)(lVar5 + 8) == 0) && (*(char *)(lVar5 + 0x40) != '\0')) {
            if ((*(char *)(lVar5 + 0x30) != '\0') || (*(char *)(lVar5 + 0x20) != '\0')) {
              *(undefined1 *)(lVar5 + 0x40) = 0;
              lVar4 = DAT_180ceb430;
              goto LAB_1801f7e41;
            }
            FUN_180540530(lVar5,lVar5 + 0x48,lVar4 - (lVar5 + 0x48));
            lVar4 = DAT_180ceb430 + -0x48;
            DAT_180ceb430 = lVar4;
          }
          else {
LAB_1801f7e41:
            lVar5 = lVar5 + 0x48;
          }
        } while (lVar5 != lVar4);
      }
      _DAT_180ceb400 = 0;
      DAT_180ceb3fc = 0;
      cVar2 = FUN_1801f7000(&DAT_180ceb3f0,param_2,uVar6);
      if (cVar2 == '\0') {
        FUN_1801f6bb0(param_1,param_2);
        return;
      }
    }
    *param_1 = DAT_180ceb3f0;
    param_1[1] = DAT_180ceb3f4;
    param_1[2] = DAT_180ceb3f8;
    param_1[3] = DAT_180ceb3fc;
    param_1[4] = DAT_180ceb400;
    param_1[5] = DAT_180ceb404;
    param_1[6] = DAT_180ceb408;
    param_1[7] = DAT_180ceb40c;
    param_1[8] = DAT_180ceb410;
    *(undefined1 *)(param_1 + 9) = DAT_180ceb414;
    *(undefined1 *)((longlong)param_1 + 0x25) = DAT_180ceb415;
    *(undefined8 *)(param_1 + 10) = DAT_180ceb418;
    *(undefined8 *)(param_1 + 0xc) = DAT_180ceb420;
    if (plVar1 != &DAT_180ceb428) {
      FUN_1802009d0(plVar1,DAT_180ceb428,(DAT_180ceb430 - DAT_180ceb428 >> 3) * -0x71c71c71c71c71c7)
      ;
    }
  }
  return;
}



/* ===== 1801f7fa0 FUN_1801f7fa0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f7fa0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  int local_res10 [2];
  int local_res18 [4];
  
  fVar4 = *(float *)(param_2 + 0x20);
  fVar7 = fVar4 * fVar4 + *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c);
  if (fVar7 < 0.0) {
    fVar7 = (float)FUN_18051af10(fVar7);
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  fVar3 = (float)FUN_180516b00(fVar4);
  fVar8 = DAT_1808acbd0;
  fVar4 = DAT_1808ac34c;
  fVar3 = fVar3 * DAT_1808aca98;
  if (DAT_180cc412e == '\0') {
    if (DAT_1808ac34c <= fVar7) {
      fVar10 = *(float *)(param_1 + 0x1c);
      fVar5 = (float)FUN_180519fe0(fVar10 - fVar3);
      if (fVar10 <= fVar3) {
        if (fVar5 <= DAT_1808ace7c) {
          fVar5 = fVar5 + fVar8;
        }
      }
      else if (DAT_1808acb58 <= fVar5) {
        fVar5 = fVar5 - fVar8;
      }
      fVar8 = *(float *)(param_2 + 0x34);
      fVar6 = fVar8 - *(float *)(param_2 + 0x30);
      fVar10 = 0.0;
      if (0.0 <= fVar6) {
        fVar10 = fVar6;
      }
      if ((float)((uint)(fVar10 / fVar7) & (uint)_DAT_1808ade90) <= fVar4) {
        fVar10 = (float)FUN_18051acf0(fVar10 / fVar7);
        fVar10 = fVar10 * DAT_1808aca98;
      }
      else {
        fVar10 = 0.0;
      }
      fVar6 = fVar8 + fVar8;
      if (*(float *)(param_2 + 0x30) <= fVar8 + fVar8) {
        fVar6 = *(float *)(param_2 + 0x30);
      }
      fVar7 = (float)((uint)fVar6 ^ DAT_1808adec0) / (fVar7 + fVar7);
      if ((float)((uint)fVar7 & (uint)_DAT_1808ade90) <= fVar4) {
        fVar7 = (float)FUN_18051acf0(fVar7);
        fVar7 = fVar7 * DAT_1808aca98;
      }
      else {
        fVar7 = 0.0;
      }
      uVar9 = (uint)_DAT_1808ade90;
      fVar8 = (float)((uint)fVar7 & uVar9);
      if ((float)((uint)fVar7 & uVar9) <= (float)((uint)fVar10 & uVar9)) {
        fVar8 = (float)((uint)fVar10 & uVar9);
      }
      fVar8 = fVar8 + fVar8;
      if (fVar8 < (float)((uint)fVar5 & uVar9)) {
        local_res18[0] = 100;
        piVar2 = local_res10;
        local_res10[0] = 0;
        if (-1 < DAT_180920db4) {
          piVar2 = &DAT_180920db4;
        }
        piVar1 = local_res18;
        if (DAT_180920db4 < 0x65) {
          piVar1 = piVar2;
        }
        fVar10 = ((float)*piVar1 / DAT_1808acb08) * (fVar10 - fVar7) + fVar7;
      }
      if ((((float)((uint)fVar5 & uVar9) <= DAT_1808acb4c) && (fVar5 <= fVar8)) &&
         ((fVar5 < (float)((uint)fVar8 ^ DAT_1808adec0) || (fVar5 <= 0.0)))) {
        fVar4 = DAT_1808acda0;
      }
      *(float *)(param_1 + 0x1c) = fVar3 - fVar4 * fVar10;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(float *)(param_1 + 0x10) = fVar4;
    }
    else {
      *(float *)(param_1 + 0xc) = DAT_1808ac34c;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    fVar4 = (float)FUN_18053f0d0(fVar3 / DAT_1808acbd0 + DAT_1808ac1f4);
    *(float *)(param_1 + 0x1c) = fVar3 - fVar4 * fVar8;
    fVar4 = (fVar7 / (*(float *)(param_2 + 0x24) * *(float *)(param_2 + 4))) /
            *(float *)(param_2 + 8);
    if (fVar4 <= DAT_1808ac34c) {
      *(uint *)(param_1 + 0xc) = (uint)fVar4 ^ DAT_1808adec0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      *(float *)(param_1 + 0xc) = DAT_1808acda0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



/* ===== 1801f82c0 FUN_1801f82c0 ===== */

undefined8 FUN_1801f82c0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    return 0;
  }
  if (DAT_18095723c == '\0') {
    return 0;
  }
  if (((*(longlong *)(param_1 + 0xb8) == 0) || (DAT_180ceb3c0 == 0)) ||
     (cVar2 = FUN_180011220((ulonglong)DAT_180ceb3c0 + *(longlong *)(param_1 + 0xb8)), cVar2 == '\0'
     )) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((0 < *(int *)(param_1 + 0x24)) && (!bVar1)) {
    return 2;
  }
  if (*(short *)(param_1 + 0xc0) == 0x40) {
    return 3;
  }
  return 0;
}



/* ===== 1801f8340 FUN_1801f8340 ===== */

void FUN_1801f8340(longlong param_1,float *param_2,longlong param_3,float param_4,int param_5,
                  char param_6,float param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar6 = DAT_1808accc8;
  fVar5 = DAT_1808ac34c;
  fVar4 = DAT_1808ac1f4;
  fVar3 = DAT_1808ac00c;
  fVar2 = DAT_1808abff4;
  fVar16 = DAT_1808ac34c - param_4;
  iVar10 = (int)(fVar16 * DAT_1808acab0);
  if (param_5 < iVar10) {
    iVar10 = param_5;
  }
  if (0 < iVar10) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    fVar13 = param_4;
    iVar9 = 0;
    while( true ) {
      pfVar8 = param_2 + 2;
      iVar11 = iVar9 + 1;
      *(undefined4 *)(param_1 + 0x1c) = uVar1;
      fVar15 = fVar13 + fVar3;
      fVar12 = ((float)iVar11 * (fVar16 / (float)iVar10) + param_4 + fVar6) - fVar6;
      if (fVar15 <= fVar12) {
        fVar15 = fVar12;
      }
      if (param_7 <= fVar13) {
        *param_2 = 1.0;
      }
      FUN_1801f37a0(param_2,(fVar15 - fVar13) * fVar3,param_3);
      fVar12 = *pfVar8;
      param_2[1] = param_2[10] * *param_2;
      param_2[0xc] = param_2[10] * *param_2 * fVar12 * param_2[9];
      pfVar7 = param_2 + 0xb;
      if (fVar12 < param_2[0xb]) {
        pfVar7 = pfVar8;
      }
      param_2[0xd] = *pfVar7;
      FUN_1801f7fa0(param_1,param_2);
      FUN_1801f3490(param_1,fVar13,param_1 + 0x18,*(undefined4 *)(param_1 + 0xc),
                    *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),1);
      FUN_1801f3a30(param_2,param_1);
      if ((iVar9 == 0) && (param_6 != '\0')) {
        fVar13 = *(float *)(param_3 + 0x60);
        if (*(char *)(param_2 + 5) == '\0') {
          fVar13 = fVar13 - *(float *)(param_3 + 0x70) * fVar4 * fVar2;
        }
        fVar12 = param_2[4];
        if (0.0 < fVar12) {
          fVar14 = fVar5 - fVar12 / DAT_1808acb08;
          if (fVar14 <= fVar5) {
            if (fVar14 <= 0.0) {
              fVar14 = 0.0;
            }
          }
          else {
            fVar14 = fVar5;
          }
          fVar13 = fVar13 * fVar14;
        }
        fVar12 = fVar13 * *(float *)(param_3 + 0x6c) + fVar12;
        fVar13 = *(float *)(param_3 + 100);
        if ((fVar12 <= *(float *)(param_3 + 100)) && (fVar13 = fVar12, fVar12 <= 0.0)) {
          fVar13 = 0.0;
        }
        param_2[4] = fVar13;
      }
      if ((DAT_180cc412e != '\0') &&
         (param_2[7] * param_2[7] + param_2[8] * param_2[8] <= DAT_1808ac000)) break;
      if (iVar10 <= iVar11) {
        return;
      }
      fVar13 = fVar15;
      iVar9 = iVar11;
    }
    FUN_1801f33a0(param_1,fVar15,0,0,0);
  }
  return;
}



/* ===== 1801f8670 FUN_1801f8670 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f8670(undefined8 *param_1,float *param_2)

{
  float **ppfVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  bool bVar6;
  undefined1 auVar7 [11];
  bool bVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float *pfVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_448 [32];
  undefined8 local_428;
  undefined8 local_420;
  float local_418;
  undefined1 local_410;
  float *local_408;
  undefined8 local_400;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  undefined8 uStack_3ec;
  float fStack_3e4;
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [8];
  float fStack_3c8;
  float fStack_3c4;
  undefined8 local_3c0;
  float local_3b8;
  float fStack_3b4;
  undefined4 uStack_3b0;
  float fStack_3ac;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  float local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined2 local_378;
  undefined1 uStack_376;
  uint5 uStack_375;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  ulonglong local_348;
  undefined8 uStack_340;
  float local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  longlong local_328;
  undefined8 local_318;
  float *local_310;
  undefined1 *local_308;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  float fStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
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
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [240];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined8 local_f0;
  undefined8 local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  ulonglong local_c8;
  
  uVar19 = DAT_180ceb268;
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_448;
  if (DAT_180cc45b7 != '\0') {
    return;
  }
  if (DAT_180920da8 == '\0') {
    return;
  }
  if (((uint)param_2[6] & 1) != 0) {
    if (((DAT_180ceb268 | param_1[5]) & 2) == 0) {
      return;
    }
    if (DAT_180cc412c == '\0') {
      return;
    }
  }
  if ((DAT_180920dab == '\0') || (DAT_180920dae == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((DAT_180920daa == '\0') || ((DAT_180920dab != '\0' && (bVar8)))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((DAT_180920dad != '\0') && ((DAT_180ceb258 >> 0x10 & 1) != 0)) {
    DAT_180cc412e = '\x01';
  }
  if ((DAT_180920dac != '\0') && ((DAT_180ceb258 & 2) == 0)) {
    DAT_180cc412e = '\x01';
  }
  if (((bVar8) && (*(float *)((longlong)param_1 + 0xc) == 0.0)) && (*(float *)(param_1 + 2) == 0.0))
  {
    DAT_180cc412e = '\x01';
  }
  cVar11 = DAT_180cc412e;
  if (bVar6) {
    if (DAT_180920dab != '\0') goto LAB_1801f88b2;
    if (((*(byte *)(param_1 + 5) & 0x10) == 0) && (*(float *)(param_1 + 2) == 0.0))
    goto LAB_1801f87e4;
LAB_1801f88da:
    if (DAT_180cc412e == '\0') {
      return;
    }
  }
  else {
    if (DAT_180920dab == '\0') {
LAB_1801f88d2:
      if (!bVar8) goto LAB_1801f88da;
LAB_1801f87e4:
      fVar21 = (float)FUN_180517200(*(float *)(param_1 + 3) * DAT_1808ac010);
      if (fVar21 < 0.0) {
        fVar21 = *(float *)((longlong)param_1 + 0x1c) + DAT_1808acb58;
LAB_1801f8808:
        *(float *)((longlong)param_1 + 0x1c) = fVar21;
      }
    }
    else {
LAB_1801f88b2:
      if ((*(float *)((longlong)param_1 + 0xc) == 0.0) && (*(float *)(param_1 + 2) == 0.0)) {
        if (bVar6) goto LAB_1801f87e4;
        goto LAB_1801f88d2;
      }
      local_3f8 = 0.0;
      local_3f4 = 0.0;
      FUN_1801f31f0(param_1,&local_3f8,&local_3f4);
      fVar21 = (float)FUN_180516b00();
      fVar21 = fVar21 * DAT_1808aca98;
      if (((uint)fVar21 & 0x7f800000) != 0x7f800000) goto LAB_1801f8808;
    }
    if (DAT_180920da9 != '\0') {
      local_308 = &DAT_180920da8;
      local_318 = param_1;
      local_310 = param_2;
      FUN_1801f95c0(&local_318);
      uVar19 = DAT_180ceb268;
      cVar11 = DAT_180cc412e;
    }
  }
  param_1[5] = param_1[5] & 0xfffffffffffeffff;
  uVar2 = param_1[5];
  DAT_180ceb268 = uVar19 & 0xfffffffffffeffff;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  DAT_180ceb264 = *(undefined4 *)((longlong)param_1 + 0x1c);
  DAT_180cc412f = 1;
  fVar21 = param_2[3];
  fVar30 = param_2[4];
  fVar29 = fVar30 * fVar30 + fVar21 * fVar21;
  if (fVar29 < 0.0) {
    DAT_180ceb100 = (float)FUN_18051af10();
  }
  else {
    DAT_180ceb100 = SQRT(fVar29);
  }
  auVar7 = (undefined1  [11])local_3a8._5_11_;
  fVar27 = DAT_1808ac00c;
  local_3a8._0_7_ = local_3a8._5_7_ << 0x28;
  local_3a8[7] = auVar7[2];
  local_3a8._8_8_ = auVar7._3_8_;
  uVar10 = local_3a8._8_8_;
  if (*(char *)((longlong)param_2 + 0x45) == '\0') {
    local_3a8._0_5_ = CONCAT14((char)((uint)param_2[6] >> 1),param_2[0x13]) & 0x1ffffffff;
  }
  else {
    local_3a8[4] = 1;
    local_3a8._0_4_ = param_2[0x13];
  }
  local_3f0 = param_2[0x10];
  fStack_3e4 = param_2[0xb];
  fStack_3b4 = 0.0;
  uStack_3b0 = 0;
  uStack_3ec._0_4_ = 0.0;
  uStack_3ec._4_4_ = 0.0;
  auVar3._4_8_ = uVar10;
  auVar3._0_4_ = (int)local_3a8._0_5_;
  auVar25._0_8_ = auVar3._0_8_ << 0x20;
  auVar25._8_4_ = local_3a8._4_4_;
  auVar25._12_4_ = auVar7._7_4_;
  auVar4._4_8_ = auVar25._8_8_;
  auVar4._0_4_ = (int)local_3a8._0_5_;
  auVar24._0_8_ = auVar4._0_8_ << 0x20;
  auVar24._8_4_ = local_3a8._4_4_;
  local_3e0._0_8_ = auVar24._4_8_;
  local_3e0._8_4_ = param_2[0x12];
  local_3e0._12_4_ = fVar21;
  auVar5._4_8_ = local_3e0._8_8_;
  auVar5._0_4_ = 0x3c800000;
  auVar26._0_8_ = auVar5._0_8_ << 0x20;
  auVar26._8_4_ = param_2[0x23];
  auVar26._12_4_ = param_2[0x1e];
  register0x00001204 = auVar26._4_12_;
  local_3d0._0_4_ = fVar30;
  local_3c0 = 0;
  if ((cVar11 != '\0') && (fVar29 < DAT_1808ac000)) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  iVar18 = (int)(((float)DAT_180920db0 / DAT_1808acb08) * DAT_1808ac9fc);
  if ((iVar18 < 1) || (*(char *)(param_2 + 0x17) == '\0')) {
    DAT_180cc412b = 0 < iVar18;
  }
  else {
    DAT_180cc412b = *(char *)(param_2 + 0x24);
  }
  local_3b8 = local_3f0;
  fStack_3ac = fStack_3e4;
  local_3a8 = local_3e0;
  local_398 = _local_3d0;
  if (DAT_180cc412b == '\0') {
    FUN_1801f37a0(&local_3f0,DAT_1808ac00c,param_2);
    uStack_3ec = CONCAT44(uStack_3ec._4_4_,local_3f0 * fStack_3c8);
    pfVar15 = (float *)((longlong)&uStack_3ec + 4);
    if (fStack_3c4 <= uStack_3ec._4_4_) {
      pfVar15 = &fStack_3c4;
    }
    local_3c0 = CONCAT44(*pfVar15,local_3f0 * fStack_3c8 * uStack_3ec._4_4_ * (float)local_3d0._4_4_
                        );
    FUN_1801f7fa0(param_1,&local_3f0);
    if (cVar11 == '\0') {
      return;
    }
    if ((float)(*(uint *)((longlong)param_1 + 0xc) & _DAT_1808ade90) < DAT_1808ac34c) {
      local_418 = (float)((uint)local_418 & 0xffffff00);
      local_420 = (ulonglong)local_420._4_4_ << 0x20;
      local_428 = (ulonglong)local_428._4_4_ << 0x20;
      FUN_1801f3490(param_1,0,param_1 + 3,DAT_1808acda0);
      local_428 = local_428 & 0xffffffff00000000;
      FUN_1801f33a0(param_1,((float)(*(uint *)((longlong)param_1 + 0xc) & _DAT_1808ade90) +
                            DAT_1808accc8) - DAT_1808accc8,0,0);
      return;
    }
    return;
  }
  local_118 = *param_1;
  uStack_110 = (undefined4)param_1[1];
  uStack_10c = (undefined4)((ulonglong)param_1[1] >> 0x20);
  uStack_108 = *(undefined4 *)(param_1 + 2);
  uStack_104 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_100 = 0;
  uStack_fc = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_f8 = *(undefined4 *)(param_1 + 4);
  local_f4 = *(undefined1 *)((longlong)param_1 + 0x24);
  local_f3 = *(undefined1 *)((longlong)param_1 + 0x25);
  local_e8 = param_1[6];
  ppfVar1 = (float **)(param_1 + 7);
  local_f0 = uVar2;
  FUN_180200720(&local_e0,ppfVar1);
  for (pfVar15 = local_e0;
      ((pfVar15 != local_d8 && (*(char *)(pfVar15 + 0x10) == '\0')) &&
      (*(char *)(pfVar15 + 8) == '\0')); pfVar15 = pfVar15 + 0x12) {
  }
  if (pfVar15 != local_d8) {
    pfVar13 = pfVar15 + 0x12;
    if (pfVar13 != local_d8) {
      do {
        if ((*(char *)(pfVar13 + 0x10) == '\0') && (*(char *)(pfVar13 + 8) == '\0')) {
          lVar16 = *(longlong *)(pfVar13 + 2);
          *(longlong *)pfVar15 = *(longlong *)pfVar13;
          *(longlong *)(pfVar15 + 2) = lVar16;
          lVar16 = *(longlong *)(pfVar13 + 6);
          *(longlong *)(pfVar15 + 4) = *(longlong *)(pfVar13 + 4);
          *(longlong *)(pfVar15 + 6) = lVar16;
          lVar16 = *(longlong *)(pfVar13 + 10);
          *(longlong *)(pfVar15 + 8) = *(longlong *)(pfVar13 + 8);
          *(longlong *)(pfVar15 + 10) = lVar16;
          fVar29 = pfVar13[0xd];
          fVar23 = pfVar13[0xe];
          fVar31 = pfVar13[0xf];
          pfVar15[0xc] = pfVar13[0xc];
          pfVar15[0xd] = fVar29;
          pfVar15[0xe] = fVar23;
          pfVar15[0xf] = fVar31;
          *(longlong *)(pfVar15 + 0x10) = *(longlong *)(pfVar13 + 0x10);
          pfVar15 = pfVar15 + 0x12;
        }
        pfVar13 = pfVar13 + 0x12;
      } while (pfVar13 != local_d8);
      if (pfVar15 == local_d8) goto LAB_1801f8c85;
    }
    FUN_180540530(pfVar15,local_d8,0);
    local_d8 = pfVar15;
  }
LAB_1801f8c85:
  iVar12 = (int)((longlong)local_d8 - (longlong)local_e0 >> 3);
  iVar20 = iVar12 * -0x38e38e39 + 0x20;
  if (*(char *)(param_2 + 0x17) != '\0') {
    iVar20 = iVar12 * -0x38e38e39 + 0x1f;
  }
  iVar12 = FUN_1801f82c0(param_2);
  auVar25 = local_3a8;
  iVar20 = iVar20 - iVar12;
  for (pfVar15 = local_e0; pfVar15 != local_d8; pfVar15 = pfVar15 + 0x12) {
    if ((*(longlong *)(pfVar15 + 2) == 2) && (*(char *)(pfVar15 + 4) != '\0')) {
      fVar29 = *pfVar15;
      goto LAB_1801f8daa;
    }
  }
  fVar29 = 0.0;
  if (((uint)param_2[6] & 1) != 0) {
    uStack_3b0 = 0;
    fStack_3ac = 0.0;
    local_3a8._0_4_ = local_3a8._1_4_ << 8;
    local_3a8 = ZEXT416((uint)local_3a8._0_4_);
    local_398._0_4_ = local_398._1_4_ << 8;
    uVar9 = local_398._0_4_;
    local_398 = ZEXT416((uint)local_398._0_4_);
    local_388 = (float)((uint)local_388 & 0xffffff00);
    uStack_384 = 0;
    uStack_380 = 0;
    uStack_37c = 0;
    local_378 = 0;
    uStack_376 = 0;
    local_3b8 = 0.0;
    local_368 = (ulonglong)(uint)fStack_3b4 << 0x20;
    uStack_350 = 0;
    local_348 = (ulonglong)(uint)uVar9;
    uStack_340 = 0;
    local_338 = local_388;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    local_328 = (ulonglong)uStack_375 << 0x18;
    uStack_360 = 2;
    local_358 = CONCAT71((uint7)auVar25._1_3_,1);
    if (local_d8 == local_d0) {
      FUN_18008c530(&local_e0,local_d8,&local_368);
    }
    else {
      *(longlong *)local_d8 = local_368;
      local_d8[2] = 2.8026e-45;
      local_d8[3] = 0.0;
      *(longlong *)(local_d8 + 4) = local_358;
      local_d8[6] = 0.0;
      local_d8[7] = 0.0;
      local_d8[8] = (float)uVar9;
      local_d8[9] = 0.0;
      local_d8[10] = 0.0;
      local_d8[0xb] = 0.0;
      local_d8[0xc] = local_388;
      local_d8[0xd] = 0.0;
      local_d8[0xe] = 0.0;
      local_d8[0xf] = 0.0;
      *(longlong *)(local_d8 + 0x10) = local_328;
      local_d8 = local_d8 + 0x12;
    }
  }
LAB_1801f8daa:
  fVar23 = DAT_1808ac34c;
  if ((DAT_180cc412e == '\0') &&
     (fVar31 = param_2[0x1e], fVar30 * fVar30 + fVar21 * fVar21 < fVar31 * fVar31 * DAT_1808ac1f4))
  {
    pfVar13 = local_d8;
    FUN_1801f37a0(&local_3f0,0,param_2);
    auVar25 = local_398;
    uStack_3ec._0_4_ = local_3f0 * fStack_3c8;
    pfVar15 = (float *)((longlong)&uStack_3ec + 4);
    if (fStack_3c4 <= uStack_3ec._4_4_) {
      pfVar15 = &fStack_3c4;
    }
    local_3c0 = CONCAT44(*pfVar15,(float)uStack_3ec * uStack_3ec._4_4_ * (float)local_3d0._4_4_);
    fVar21 = (((fVar31 / ((float)uStack_3ec * uStack_3ec._4_4_)) * DAT_1808acab0 + DAT_1808accc8) -
             DAT_1808accc8) + fVar29;
    if (DAT_1808ac314 <= fVar21) {
LAB_1801f9253:
      *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
      goto LAB_1801f955a;
    }
    local_3a8._0_4_ = local_3a8._1_4_ << 8;
    uVar9 = local_3a8._0_4_;
    local_3a8 = ZEXT416((uint)local_3a8._0_4_);
    local_398._0_4_ = local_398._1_4_ << 8;
    local_398 = ZEXT416((uint)local_398._0_4_);
    local_388 = (float)((uint)local_388 & 0xffffff00);
    uStack_384 = 0;
    uStack_380 = 0;
    uStack_37c = 0;
    local_378 = 0;
    uStack_376 = 0;
    uStack_3b0 = 0;
    fStack_3ac = 0.0;
    local_368 = CONCAT44(fStack_3b4,fVar29);
    uStack_360 = 0;
    uStack_340 = 0;
    local_338 = local_388;
    local_358 = CONCAT44(uStack_100,uVar9);
    uStack_350 = CONCAT44(local_f8,uStack_fc);
    local_348 = CONCAT71((uint7)auVar25._1_3_,1);
    uStack_334 = 0x3f800000;
    uStack_330 = 0;
    uStack_32c = 0;
    local_328 = CONCAT62((int6)(((ulonglong)uStack_375 << 0x18) >> 0x10),1);
    local_3b8 = fVar29;
    if (pfVar13 == local_d0) {
      FUN_18008c530(&local_e0,uStack_fc,&local_368);
    }
    else {
      *pfVar13 = fVar29;
      pfVar13[1] = fStack_3b4;
      pfVar13[2] = 0.0;
      pfVar13[3] = 0.0;
      *(longlong *)(pfVar13 + 4) = local_358;
      *(longlong *)(pfVar13 + 6) = uStack_350;
      *(ulonglong *)(pfVar13 + 8) = local_348;
      pfVar13[10] = 0.0;
      pfVar13[0xb] = 0.0;
      *(longlong *)(pfVar13 + 0xc) = CONCAT44(0x3f800000,local_388);
      pfVar13[0xe] = 0.0;
      pfVar13[0xf] = 0.0;
      *(longlong *)(pfVar13 + 0x10) = local_328;
      local_d8 = local_d8 + 0x12;
    }
    pfVar15 = local_d8;
    uStack_10c = 0x3f800000;
    uStack_108 = 0;
    FUN_1801f37a0(&local_3f0,(fVar21 - fVar29) * fVar27,param_2);
    fVar30 = local_3f0 * fStack_3c8;
    uVar9 = local_3d0._4_4_;
    pfVar13 = (float *)((longlong)&uStack_3ec + 4);
    if (fStack_3c4 <= uStack_3ec._4_4_) {
      pfVar13 = &fStack_3c4;
    }
    local_3c0 = CONCAT44(*pfVar13,fVar30 * uStack_3ec._4_4_ * (float)local_3d0._4_4_);
    local_3f4 = 0.0;
    local_3f8 = 0.0;
    uStack_3ec._0_4_ = fVar30;
    FUN_1801f31f0(&local_118,&local_3f4,&local_3f8);
    fVar27 = local_3f4;
    fVar31 = local_3f4 * local_3f4 + local_3f8 * local_3f8;
    if (fVar31 < 0.0) {
      fVar22 = (float)FUN_18051af10();
    }
    else {
      fVar22 = SQRT(fVar31);
    }
    if (fVar31 == 0.0) {
      fVar31 = 0.0;
      fVar27 = 0.0;
    }
    else {
      fVar27 = (fVar23 / fVar22) * fVar27;
      fVar31 = (fVar23 / fVar22) * local_3f8;
    }
    fVar28 = fVar23;
    if (fVar22 <= fVar23) {
      fVar28 = fVar22;
    }
    fVar28 = fVar28 * uStack_3ec._4_4_;
    fVar22 = fVar28;
    if (fStack_3c4 <= fVar28) {
      fVar22 = fStack_3c4;
    }
    fVar22 = fVar22 - (fVar31 * (float)local_3d0._0_4_ + fVar27 * (float)local_3e0._12_4_);
    fVar32 = (float)local_3d0._0_4_;
    fVar33 = (float)local_3e0._12_4_;
    if (0.0 < fVar22) {
      fVar30 = fVar30 * fVar28 * (float)uVar9;
      if (fVar22 <= fVar30) {
        fVar30 = fVar22;
      }
      fVar33 = (float)local_3e0._12_4_ + fVar27 * fVar30;
      local_3e0._12_4_ = fVar33;
      fVar32 = (float)local_3d0._0_4_ + fVar31 * fVar30;
      local_3d0._0_4_ = fVar32;
    }
    if (0.0 < param_2[5]) {
      lVar16 = (longlong)pfVar15 - (longlong)local_e0;
      local_3b8 = (float)_DAT_1808ad2c0;
      fStack_3b4 = (float)((ulonglong)_DAT_1808ad2c0 >> 0x20);
      uStack_3b0 = (undefined4)_UNK_1808ad2c8;
      fStack_3ac = (float)((ulonglong)_UNK_1808ad2c8 >> 0x20);
      local_3a8 = ZEXT816(0);
      local_398._0_14_ = ZEXT814(0);
      local_388 = 1.0;
      local_318 = (undefined8 *)
                  CONCAT44((float)uVar9 * fVar32 + param_2[1],(float)uVar9 * fVar33 + *param_2);
      local_310 = (float *)CONCAT44(local_310._4_4_,(float)uVar9 * DAT_1808acb60 + param_2[2]);
      puVar17 = &DAT_18060c098;
      if (*(char *)(param_2 + 0x11) != '\0') {
        puVar17 = &DAT_18060c088;
      }
      local_400 = 0;
      local_408 = &local_3b8;
      local_410 = 7;
      local_418 = (float)CONCAT31(local_418._1_3_,4);
      local_420 = 0x1c1003;
      local_428 = *(ulonglong *)(param_2 + 0x34);
      FUN_1802aed00(param_2,&local_318,&DAT_18060c078,puVar17);
      if ((local_398[0xd] == '\0') && (local_3b8 < fVar23)) {
        if ((((uint)param_2[6] & 1) == 0) &&
           (DAT_1808ac01c <= (float)(local_3a8._8_4_ & _DAT_1808ade90))) {
          pfVar15 = local_e0 + ((lVar16 >> 3) * -0x71c71c71c71c71c7 + -1) * 0x12;
          FUN_180540530(pfVar15,pfVar15 + 0x12,(longlong)local_d8 - (longlong)(pfVar15 + 0x12));
          local_d8 = local_d8 + -0x12;
          iVar20 = iVar20 + -1;
          fVar27 = DAT_1808ac00c;
          goto LAB_1801f926a;
        }
        goto LAB_1801f9253;
      }
    }
    iVar20 = iVar20 + -1;
    fVar29 = fVar21;
    fVar27 = DAT_1808ac00c;
  }
LAB_1801f926a:
  if (iVar20 < iVar18) {
    iVar18 = iVar20;
  }
  fVar21 = param_2[5];
  if ((0.0 < fVar21) && (fVar21 < param_2[0x1c] * fVar27)) {
    fVar23 = fVar21 / (param_2[0x1c] * fVar27);
  }
  local_420 = CONCAT71(local_420._1_7_,*(undefined1 *)(param_2 + 6)) & 0xffffffffffffff01;
  local_428 = CONCAT44(local_428._4_4_,iVar18);
  local_418 = fVar23;
  FUN_1801f8340(&local_118,&local_3f0,param_2,fVar29);
  cVar11 = FUN_1801f3bb0(&local_118,0x35);
  if ((cVar11 == '\0') || (((byte)DAT_1809f0238 & 1) == 0)) {
    *param_1 = local_118;
    param_1[1] = CONCAT44(uStack_10c,uStack_110);
    param_1[2] = CONCAT44(uStack_104,uStack_108);
    param_1[3] = CONCAT44(uStack_fc,uStack_100);
    *(undefined4 *)(param_1 + 4) = local_f8;
    *(undefined1 *)((longlong)param_1 + 0x24) = local_f4;
    *(undefined1 *)((longlong)param_1 + 0x25) = local_f3;
    param_1[5] = local_f0;
    param_1[6] = local_e8;
    if (ppfVar1 != &local_e0) {
      FUN_1802009d0(ppfVar1,local_e0,
                    ((longlong)local_d8 - (longlong)local_e0 >> 3) * -0x71c71c71c71c71c7);
    }
    if ((cVar11 == '\0') || (DAT_1809f0459 == '\0')) {
      DAT_180cc45ec = false;
    }
    else {
      DAT_180cc45ec = DAT_1809f045a == '\0';
    }
  }
  else {
    puVar14 = (undefined4 *)FUN_1801f3d10(local_208,&DAT_1809f01d0,param_2);
    auVar25 = local_3e0;
    local_2f8 = *puVar14;
    uStack_2f4 = puVar14[1];
    uStack_2f0 = puVar14[2];
    uStack_2ec = puVar14[3];
    local_2e8 = puVar14[4];
    uStack_2e4 = puVar14[5];
    uStack_2e0 = puVar14[6];
    uStack_2dc = puVar14[7];
    local_2d8 = puVar14[8];
    uStack_2d4 = puVar14[9];
    uStack_2d0 = puVar14[10];
    fStack_3e4 = (float)puVar14[0xb];
    local_2c8 = *(undefined8 *)(puVar14 + 0xc);
    uStack_2c0 = *(undefined8 *)(puVar14 + 0xe);
    local_2b8 = *(undefined1 (*) [16])(puVar14 + 0x10);
    local_3f0 = local_2b8._0_4_;
    local_2a8 = *(undefined8 *)(puVar14 + 0x14);
    uStack_2a0 = *(undefined8 *)(puVar14 + 0x16);
    local_298 = *(undefined8 *)(puVar14 + 0x18);
    uStack_290 = *(undefined8 *)(puVar14 + 0x1a);
    local_288 = *(undefined8 *)(puVar14 + 0x1c);
    uStack_280 = *(undefined8 *)(puVar14 + 0x1e);
    local_278 = *(undefined8 *)(puVar14 + 0x20);
    uStack_270 = *(undefined8 *)(puVar14 + 0x22);
    local_268 = *(undefined8 *)(puVar14 + 0x24);
    uStack_260 = *(undefined8 *)(puVar14 + 0x26);
    local_258 = *(undefined8 *)(puVar14 + 0x28);
    uStack_250 = *(undefined8 *)(puVar14 + 0x2a);
    local_248 = *(undefined8 *)(puVar14 + 0x2c);
    uStack_240 = *(undefined8 *)(puVar14 + 0x2e);
    local_238 = *(undefined8 *)(puVar14 + 0x30);
    uStack_230 = *(undefined8 *)(puVar14 + 0x32);
    local_228 = *(undefined8 *)(puVar14 + 0x34);
    uStack_220 = *(undefined8 *)(puVar14 + 0x36);
    local_218 = *(undefined8 *)(puVar14 + 0x38);
    uStack_210 = *(undefined8 *)(puVar14 + 0x3a);
    uStack_3ec = 0;
    auVar7._2_9_ = local_3e0._7_9_;
    auVar7._0_2_ = local_3a8._5_2_;
    local_3e0._0_7_ = auVar7._0_7_ << 0x28;
    local_3e0._8_8_ = auVar25._8_8_;
    local_3e0[7] = local_3a8[7];
    fStack_3c8 = param_2[0x23];
    local_3d0 = (undefined1  [8])0x3c80000000000000;
    fStack_3c4 = param_2[0x1e];
    local_3c0 = 0;
    if (local_2b8[5] == '\0') {
      local_3e0._0_5_ = CONCAT14((char)(uStack_2e0 >> 1),local_2b8._12_4_) & 0x1ffffffff;
    }
    else {
      local_3e0[4] = 1;
      local_3e0._0_4_ = local_2b8._12_4_;
    }
    local_3e0._8_4_ = local_2b8._8_4_;
    local_3e0._12_4_ = uStack_2ec;
    local_3d0._0_4_ = local_2e8;
    fStack_2cc = fStack_3e4;
    FUN_1801f37a0(&local_3f0,fVar27,&local_2f8);
    pfVar15 = (float *)((longlong)&uStack_3ec + 4);
    if (fStack_3c4 <= uStack_3ec._4_4_) {
      pfVar15 = &fStack_3c4;
    }
    local_3c0 = CONCAT44(*pfVar15,fStack_3c8 * local_3f0 * uStack_3ec._4_4_ * (float)local_3d0._4_4_
                        );
    uStack_3ec._0_4_ = fStack_3c8 * local_3f0;
    FUN_1801f7fa0(param_1,&local_3f0);
  }
LAB_1801f955a:
  FUN_180200b70(&local_e0);
  return;
}



/* ===== 1801f95c0 FUN_1801f95c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f95c0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  char cVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  undefined8 local_188;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  int local_16c [3];
  undefined8 local_160;
  undefined4 local_158;
  longlong local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  float *pfStack_138;
  float *local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined4 local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  
  fVar14 = (float)FUN_180517200();
  local_1a8 = fVar14;
  fVar15 = (float)FUN_180517790();
  puVar4 = (undefined8 *)param_1[1];
  local_1a0 = 0.0;
  fVar16 = *(float *)(puVar4 + 2) * *(float *)(puVar4 + 2) +
           *(float *)((longlong)puVar4 + 0xc) * *(float *)((longlong)puVar4 + 0xc);
  local_1a4 = fVar15;
  if (fVar16 < 0.0) {
    fVar16 = (float)FUN_18051af10();
  }
  else {
    fVar16 = SQRT(fVar16);
  }
  uVar8 = _UNK_1808ad2c8;
  lVar7 = _DAT_1808ad2c0;
  fVar6 = DAT_1808ac34c;
  uVar1 = *puVar4;
  puVar11 = &DAT_18060c098;
  local_180 = *(float *)(puVar4 + 1);
  local_150 = _DAT_1808ad2c0;
  puStack_148 = (undefined8 *)_UNK_1808ad2c8;
  if (*(char *)((longlong)puVar4 + 0x44) != '\0') {
    puVar11 = &DAT_18060c088;
  }
  local_120 = 0x3f800000;
  local_160 = *puVar11;
  fVar20 = (fVar16 + DAT_1808acbb4) * _DAT_1808ac478 * DAT_1808ac00c;
  local_158 = *(undefined4 *)(puVar11 + 1);
  local_140 = (float *)0x0;
  pfStack_138 = (float *)0x0;
  local_188._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_198 = (float)uVar1 + fVar14 * fVar20;
  local_130 = (float *)0x0;
  local_128 = 0;
  local_194 = local_188._4_4_ + fVar15 * fVar20;
  local_124 = 0;
  local_190 = local_180 + fVar20 * 0.0;
  local_188 = uVar1;
  cVar10 = FUN_1802aed00(&local_188,&local_198,&DAT_18060c078,&local_160,puVar4[0x1a],0x1c1003,4,7,
                         &local_150,0);
  fVar15 = DAT_1808acb60;
  fVar14 = DAT_1808ac140;
  if (cVar10 != '\0') {
    fVar21 = (float)local_150;
    if ((float)local_150 < fVar6) {
      lVar5 = param_1[1];
      if ((float)((uint)pfStack_138 & _DAT_1808ade90) < *(float *)(lVar5 + 0x7c)) {
        if (fVar16 < DAT_1808acb60) {
          fVar16 = *(float *)(lVar5 + 0x14);
          if ((*(byte *)(lVar5 + 0x18) & 1) != 0) {
            if (fVar16 <= *(float *)(lVar5 + 0x60)) {
              fVar16 = *(float *)(lVar5 + 0x60);
            }
          }
          local_198 = (float)local_188;
          local_194 = local_188._4_4_;
          local_190 = (fVar16 * fVar16) / (*(float *)(lVar5 + 0x70) + *(float *)(lVar5 + 0x70)) +
                      local_180;
          if ((*(byte *)(lVar5 + 0x18) & 2) == 0) {
            local_190 = local_190 + DAT_1808ac844;
          }
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          local_178 = (float)local_188 + fVar20 * local_1a8;
          local_f0 = 0;
          local_ec = 0;
          local_174 = fVar20 * local_1a4 + local_188._4_4_;
          local_e8 = 0x3f800000;
          local_118 = lVar7;
          uStack_110 = uVar8;
          local_170 = fVar20 * local_1a0 + local_190;
          FUN_1802aed00(&local_198,&local_178,&DAT_18060c078,&local_160,
                        *(undefined8 *)(lVar5 + 0xd0),0x1c1003,4,7,&local_118,0);
          if (fVar21 < (float)local_118) {
            if (fVar6 <= (float)local_118) {
              return;
            }
            fVar17 = (float)local_118 * fVar20 - fVar14;
            local_f8 = 0;
            local_f0 = 0;
            local_ec = 0;
            fVar16 = 0.0;
            if (0.0 <= fVar17) {
              fVar16 = fVar17;
            }
            local_e8 = 0x3f800000;
            local_118 = _DAT_1808ad2c0;
            uStack_110 = _UNK_1808ad2c8;
            local_d8 = fVar16 * local_1a0 + local_190;
            local_178 = fVar16 * local_1a8 + local_198;
            local_108 = 0;
            uStack_100 = 0;
            local_174 = fVar16 * local_1a4 + local_194;
            local_170 = local_d8 - fVar15;
            local_e0 = local_178;
            local_dc = local_174;
            FUN_1802aed00(&local_e0,&local_178,&DAT_18060c078,&local_160,
                          *(undefined8 *)(param_1[1] + 0xd0),0x1c1003,4,7,&local_118,0);
            if (((float)local_118 < fVar6) &&
               (*(float *)(param_1[1] + 0x7c) <= (float)((uint)uStack_100 & _DAT_1808ade90))) {
              return;
            }
          }
        }
        uVar9 = DAT_1808adec0;
        fVar15 = (float)local_140;
        fVar16 = local_140._4_4_;
        local_16c[1] = 0xc9;
        iVar2 = *(int *)(param_1[2] + 0x10);
        piVar13 = local_16c;
        if (-1 < iVar2) {
          piVar13 = (int *)(param_1[2] + 0x10);
        }
        local_16c[0] = 0;
        fVar14 = fVar21 * fVar20 - fVar14;
        fVar20 = (float)((uint)local_140._4_4_ ^ DAT_1808adec0);
        piVar12 = local_16c + 1;
        if (iVar2 < 0xca) {
          piVar12 = piVar13;
        }
        fVar21 = 0.0;
        if (0.0 <= fVar14) {
          fVar21 = fVar14;
        }
        iVar2 = *piVar12;
        local_150 = param_1[1];
        puStack_148 = &local_160;
        local_140 = &local_d0;
        pfStack_138 = local_res8;
        local_130 = &local_1a8;
        local_cc = fVar21 * local_1a4 + local_188._4_4_;
        local_res8[0] = (float)iVar2;
        local_c8 = fVar21 * local_1a0 + local_180;
        local_d0 = (float)local_188 + fVar21 * local_1a8;
        fVar17 = (float)FUN_1801f9c90(&local_150,fVar20,fVar15);
        fVar14 = DAT_1808ac1f4;
        fVar18 = (float)FUN_1801f9c90(&local_150,fVar20 * DAT_1808ac1f4,fVar15 * DAT_1808ac1f4);
        fVar21 = (float)((uint)fVar15 ^ uVar9);
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        fVar18 = (float)FUN_1801f9c90(&local_150,fVar16,fVar21);
        fVar14 = (float)FUN_1801f9c90(&local_150,fVar16 * fVar14,fVar21 * fVar14);
        if (fVar18 <= fVar14) {
          fVar18 = fVar14;
        }
        if (fVar17 <= fVar18) {
          fVar14 = fVar16;
        }
        else {
          fVar21 = fVar15;
          fVar14 = fVar20;
        }
        local_res18[0] = 0x5a;
        local_res10[0] = 0;
        iVar3 = *(int *)(param_1[2] + 0x14);
        piVar13 = local_res10;
        if (-1 < iVar3) {
          piVar13 = (int *)(param_1[2] + 0x14);
        }
        piVar12 = local_res18;
        if (iVar3 < 0x5b) {
          piVar12 = piVar13;
        }
        fVar19 = (float)FUN_180517200((float)*piVar12 * DAT_1808ac010);
        if ((fVar17 == fVar6) == (fVar18 == fVar6)) {
          if ((((fVar17 != fVar6) || (fVar18 != fVar6)) && (iVar2 != 200)) &&
             ((float)((uint)(fVar21 * local_1a4 + fVar14 * local_1a8) & _DAT_1808ade90) <= fVar19))
          {
            return;
          }
          if (0.0 < fVar15 * local_1a4 - fVar16 * local_1a8) {
            fVar16 = fVar20;
          }
        }
        else {
          fVar16 = fVar14;
        }
        fVar14 = (float)FUN_180516b00(fVar17 == fVar6,fVar16);
        *(float *)(*param_1 + 0x1c) = fVar14 * DAT_1808aca98;
      }
    }
  }
  return;
}



/* ===== 1801f9c90 FUN_1801f9c90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f9c90(longlong *param_1,float param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  
  pfVar1 = (float *)param_1[2];
  local_88 = _DAT_1808ad2c0;
  uStack_80 = _UNK_1808ad2c8;
  fVar4 = *(float *)param_1[3];
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_a8 = fVar4 * param_2 + *pfVar1;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f800000;
  local_a4 = fVar4 * param_3 + pfVar1[1];
  local_a0 = fVar4 * 0.0 + pfVar1[2];
  FUN_1802aed00(pfVar1,&local_a8,&DAT_18060c078,param_1[1],*(undefined8 *)(*param_1 + 0xd0),0x1c1003
                ,4,7,&local_88,0);
  pfVar1 = (float *)param_1[2];
  local_68 = 0;
  local_60 = 0;
  pfVar2 = (float *)param_1[4];
  local_5c = 0;
  local_58 = 0x3f800000;
  fVar3 = (float)local_88 * *(float *)param_1[3] - DAT_1808ac140;
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  local_88 = _DAT_1808ad2c0;
  uStack_80 = _UNK_1808ad2c8;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = fVar4 * param_2 + *pfVar1;
  local_94 = fVar4 * param_3 + pfVar1[1];
  local_90 = fVar4 * 0.0 + pfVar1[2];
  local_a8 = local_98 + *pfVar2 * DAT_1808ac9fc;
  local_a4 = pfVar2[1] * DAT_1808ac9fc + local_94;
  local_a0 = pfVar2[2] * DAT_1808ac9fc + local_90;
  FUN_1802aed00(&local_98,&local_a8,&DAT_18060c078,param_1[1],*(undefined8 *)(*param_1 + 0xd0),
                0x1c1003,4,7,&local_88,0);
  return;
}



/* ===== 1801f9ea0 FUN_1801f9ea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f9ea0(undefined8 *param_1,longlong param_2,uint param_3,uint param_4,byte param_5,
                  byte param_6)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_188 [32];
  uint local_168;
  uint local_160;
  longlong local_158;
  uint local_150;
  uint local_148;
  uint local_140;
  uint local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103;
  ulonglong local_100;
  undefined8 local_f8;
  longlong local_f0 [3];
  undefined1 local_d8 [64];
  undefined1 local_98 [24];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_188;
  if (DAT_1809ef930 < 0) {
    DAT_1809ef930 = DAT_180ceb0f0;
    local_128 = *param_1;
    local_120 = *(undefined4 *)(param_1 + 1);
    local_11c = *(undefined8 *)((longlong)param_1 + 0xc);
    local_114 = *(undefined4 *)((longlong)param_1 + 0x14);
    local_110 = param_1[3];
    local_108 = *(undefined4 *)(param_1 + 4);
    local_104 = *(undefined1 *)((longlong)param_1 + 0x24);
    local_103 = *(undefined1 *)((longlong)param_1 + 0x25);
    local_100 = param_1[5];
    local_f8 = param_1[6];
    FUN_180200720(local_f0,param_1 + 7);
    local_100 = local_100 & 0xfffffffffffffffd;
    cVar1 = FUN_1801f3bb0(&local_128,0x35);
    if (cVar1 != '\0') {
      uVar3 = 1;
      do {
        if (((byte)DAT_1809f0238 & 1) != 0) {
          FUN_180200b70(local_f0);
          lVar4 = DAT_180ceb0f0 + -1 + (longlong)(int)uVar3;
          DAT_1809ef998 = uVar3;
          goto LAB_1801fa02c;
        }
        if (0.0 < DAT_1809f01e4) break;
        if (uVar3 < 0x40) {
          local_168 = local_168 & 0xffffff00;
          uVar2 = FUN_18045a7d0(local_d8,&local_128,DAT_180ceb270,(undefined4)DAT_180ceb370);
          FUN_18045ad20(&DAT_1809f01d0,uVar2);
          FUN_180011610(local_80);
          FUN_180200b70(local_98);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 0x41);
    }
    lVar4 = -1;
    FUN_180200b70(local_f0);
    DAT_1809ef998 = 0xffffffff;
LAB_1801fa02c:
    DAT_1809eea68 = lVar4;
    if (DAT_180ceb104 < 600) {
      DAT_180ceb104 = DAT_180ceb104 + 1;
      local_168 = (uint)(DAT_180ceb258 >> 2) & 1;
      local_138 = (uint)param_6;
      local_140 = (uint)param_5;
      local_160 = DAT_1809ef998;
      local_158 = lVar4;
      local_150 = param_3 & 0xff;
      local_148 = param_4 & 0xff;
      FUN_1801ec960("jb: cmd %lld fall | vz %.1f ducking %d user duck %d | predicted ground in %d ticks (cmd %lld) | hj %d nfd %d nlp %d rb %d"
                    ,DAT_180ceb0f0,(double)*(float *)(param_2 + 0x14),
                    *(uint *)(param_2 + 0x18) >> 1 & 1);
    }
  }
  return;
}



/* ===== 1801fa0d0 FUN_1801fa0d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801fa0d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  float *pfVar17;
  undefined1 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  int iVar26;
  char *pcVar27;
  uint uVar28;
  ulonglong uVar29;
  bool bVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [24];
  char local_2b8;
  char local_2b0;
  char local_218;
  byte local_217;
  byte local_216;
  char local_215;
  undefined8 *local_210;
  undefined8 *puStack_208;
  undefined8 *local_200;
  float local_1f8;
  float fStack_1f4;
  undefined8 uStack_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  ulonglong local_1b8;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  longlong local_198;
  longlong local_190;
  longlong lStack_188;
  longlong local_180;
  undefined8 *local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  uint local_158;
  byte bStack_154;
  undefined2 uStack_153;
  undefined1 uStack_151;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  ulonglong local_f0;
  undefined8 local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_180919500 ^ (ulonglong)auStack_2d8;
  local_178 = param_1;
  if ((((DAT_180920dc0 == '\0') || (cVar13 = FUN_18026b8a0(), cVar13 != '\0')) ||
      ((*(byte *)(param_2 + 0x18) & 1) != 0)) || (0.0 < *(float *)(param_2 + 0x14))) {
    DAT_1809ef930 = -1;
  }
  puVar25 = auStack_2d8;
  if (DAT_180920dc0 == '\0') goto LAB_1801fb34b;
  cVar13 = FUN_18026b8a0();
  puVar25 = auStack_2d8;
  if (((cVar13 != '\0') ||
      ((local_218 = DAT_180920dc2, DAT_180cc45ec != '\0' &&
       (puVar25 = auStack_2d8, DAT_180920dc2 != '\0')))) ||
     (puVar25 = auStack_2d8, *(char *)(param_2 + 0x1c) != '\x02')) goto LAB_1801fb34b;
  local_1a4 = *(uint *)(param_2 + 0x18);
  puVar25 = auStack_2d8;
  if ((local_1a4 & 1) != 0) goto LAB_1801fb34b;
  puVar25 = auStack_2d8;
  if (0.0 < *(float *)(param_2 + 0x14)) goto LAB_1801fb34b;
  local_1a8 = 0;
  if (((byte)DAT_180ceb258 & 2) != 0) {
    local_1a8 = (uint)DAT_180920ce8;
  }
  if ((DAT_1808ace84 <= *(float *)(param_2 + 0x14)) || (DAT_180920dc4 == '\0')) {
    local_217 = 0;
  }
  else {
    local_217 = 1;
  }
  cVar13 = (char)local_1a8;
  if ((DAT_180920dc1 == '\0') || (cVar13 == '\0')) {
    local_216 = 0;
  }
  else {
    local_216 = 1;
  }
  if ((DAT_180920dc3 == '\0') || (cVar13 != '\0')) {
    local_1a4 = local_1a4 & 0xffffff00;
  }
  else {
    local_1a4 = CONCAT31((uint3)(local_1a4 >> 9),~(byte)(local_1a4 >> 1)) & 0xffffff01;
  }
  if (local_217 == 0 && (local_216 == 0 && (char)local_1a4 == '\0')) {
    local_215 = '\0';
    puVar25 = auStack_2d8;
    if (DAT_180920dc2 == '\0') goto LAB_1801fb34b;
  }
  else {
    local_215 = '\x01';
  }
  if (DAT_180cc45b5 == '\0') {
    local_2b0 = DAT_180920dc2;
    local_2b8 = (char)local_1a4;
    FUN_1801f9ea0(param_1,param_2,local_216);
  }
  local_19c = 0;
  if (cVar13 != '\0') {
    local_19c = (uint)DAT_180cc412b;
  }
  uVar28 = *(uint *)(param_2 + 0x18);
  local_118 = *param_1;
  local_110 = *(undefined4 *)(param_1 + 1);
  local_10c = *(undefined8 *)((longlong)param_1 + 0xc);
  uStack_104 = *(undefined8 *)((longlong)param_1 + 0x14);
  local_fc = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_f8 = *(undefined4 *)(param_1 + 4);
  local_f4 = *(undefined1 *)((longlong)param_1 + 0x24);
  local_f3 = *(undefined1 *)((longlong)param_1 + 0x25);
  local_f0 = param_1[5];
  local_e8 = param_1[6];
  local_1a0 = uVar28;
  FUN_180200720(&local_e0,param_1 + 7);
  if (local_e0 != local_d8) {
    local_d8 = local_e0;
  }
  uVar28 = uVar28 & 2;
  if (uVar28 == 0) {
    fStack_160 = 0.0;
    uStack_15c = 0;
    uVar11 = local_158 >> 8;
    local_158 = local_158 & 0xffffff00;
    bStack_154 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    local_148 = (float)((uint)local_148 & 0xffffff00);
    fStack_144 = 0.0;
    fStack_140 = 0.0;
    fStack_13c = 0.0;
    local_138 = (float)((uint)local_138 & 0xffffff00);
    fStack_134 = 0.0;
    uStack_130 = 0;
    uStack_12c = 0;
    local_128 = local_128 & 0xffffffffff000000;
    local_168 = 0.0;
    local_1f8 = 0.0;
    fStack_1f4 = fStack_164;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    local_1d8 = local_148;
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    local_1c8 = local_138;
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    local_1b8 = local_128;
    uStack_1f0 = 4;
    local_1e8 = CONCAT31((int3)uVar11,1);
    if (local_d8 == local_d0) {
      FUN_18008c530(&local_e0,local_d8,&local_1f8);
    }
    else {
      *(ulonglong *)local_d8 = (ulonglong)(uint)fStack_164 << 0x20;
      local_d8[2] = 5.60519e-45;
      local_d8[3] = 0.0;
      *(ulonglong *)(local_d8 + 4) = (ulonglong)local_1e8;
      local_d8[6] = 0.0;
      local_d8[7] = 0.0;
      local_d8[8] = local_148;
      local_d8[9] = 0.0;
      local_d8[10] = 0.0;
      local_d8[0xb] = 0.0;
      local_d8[0xc] = local_138;
      local_d8[0xd] = 0.0;
      local_d8[0xe] = 0.0;
      local_d8[0xf] = 0.0;
      *(ulonglong *)(local_d8 + 0x10) = local_128;
      local_d8 = local_d8 + 0x12;
    }
  }
  if (cVar13 != '\0') {
    local_f0 = local_f0 & 0xfffffffffffffffd;
  }
  local_190 = 0;
  lStack_188 = 0;
  local_180 = 0;
  if ((longlong)local_d8 - (longlong)local_e0 == 0) {
    lVar15 = 0;
  }
  else {
    lVar14 = (longlong)local_d8 - (longlong)local_e0 >> 3;
    if (0x38e38e38e38e38e < (ulonglong)(lVar14 * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar14 = lVar14 * 8;
    lVar15 = FUN_18000fb70(lVar14);
    local_180 = lVar14 + lVar15;
    lVar14 = (longlong)local_d8 - (longlong)local_e0;
    local_190 = lVar15;
    FUN_180540530(lVar15,local_e0,lVar14);
    lStack_188 = lVar15 + (lVar14 >> 3) * 8;
  }
  uVar29 = 0;
  local_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  local_200 = (undefined8 *)0x0;
  local_198 = lStack_188;
  puVar16 = (undefined8 *)FUN_18000fb70(0x380);
  puVar22 = puStack_208;
  puVar23 = auStack_2d8;
  puVar24 = auStack_2d8;
  puVar21 = puVar16;
  for (puVar20 = local_210; puVar20 != puStack_208; puVar20 = puVar20 + 7) {
    *puVar21 = *puVar20;
    uVar19 = puVar20[3];
    puVar20[3] = 0;
    uVar6 = puVar20[2];
    puVar20[2] = 0;
    uVar7 = puVar20[1];
    puVar20[1] = 0;
    puVar21[1] = uVar7;
    puVar21[2] = uVar6;
    puVar21[3] = uVar19;
    *(undefined1 *)(puVar21 + 4) = *(undefined1 *)(puVar20 + 4);
    *(undefined8 *)((longlong)puVar21 + 0x24) = *(undefined8 *)((longlong)puVar20 + 0x24);
    *(undefined4 *)((longlong)puVar21 + 0x2c) = *(undefined4 *)((longlong)puVar20 + 0x2c);
    puVar21[6] = puVar20[6];
    puVar21 = puVar21 + 7;
  }
  puVar25 = auStack_2d8;
  puVar21 = local_210;
  if (local_210 != (undefined8 *)0x0) {
    for (; puVar21 != puVar22; puVar21 = puVar21 + 7) {
      FUN_180200b70(puVar21 + 1);
    }
    puVar21 = local_210;
    if ((ulonglong)(((longlong)local_200 - (longlong)local_210 >> 3) * 8) < 0x1000) {
LAB_1801fa59a:
      puVar24 = puVar23;
    }
    else {
      puVar21 = (undefined8 *)local_210[-1];
      puVar20 = (undefined8 *)((longlong)local_210 + (-8 - (longlong)puVar21));
      if (&DAT_0000001f < puVar20) {
        pcVar9 = (code *)swi(0x29);
        (*pcVar9)(5);
        puVar23 = auStack_2d0;
        puVar21 = puVar20;
        goto LAB_1801fa59a;
      }
    }
    *(undefined8 *)(puVar24 + -8) = 0x1801fa5a2;
    thunk_FUN_1803d64e0(puVar21);
    puVar25 = puVar24;
  }
  fVar32 = DAT_1808ac314;
  fVar34 = DAT_1808ac090;
  fVar2 = DAT_1808ac00c;
  local_200 = puVar16 + 0x70;
  bVar10 = false;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  iVar26 = 0x10;
  local_210 = puVar16;
  puStack_208 = puVar16;
  do {
    *(undefined8 *)(puVar25 + -8) = 0x1801fa618;
    FUN_1802009d0(&local_e0,lVar15,(local_198 - lVar15 >> 3) * -0x71c71c71c71c71c7);
    fVar33 = fVar32;
    if (iVar26 != 0x10) {
      fVar33 = (float)iVar26 * fVar34;
    }
    if (((char)local_19c != '\0') && (DAT_180cc412e == '\0')) {
      fStack_164 = 0.0;
      fStack_160 = 0.0;
      fStack_144 = 0.015625;
      fStack_140 = *(float *)(param_2 + 0x8c);
      fStack_13c = *(float *)(param_2 + 0x78);
      local_138 = 0.0;
      fStack_134 = 0.0;
      local_158 = *(uint *)(param_2 + 0x4c);
      uStack_150 = *(undefined4 *)(param_2 + 0x48);
      local_168 = *(float *)(param_2 + 0x40);
      uStack_14c = *(undefined4 *)(param_2 + 0xc);
      local_148 = *(float *)(param_2 + 0x10);
      uStack_15c = *(undefined4 *)(param_2 + 0x2c);
      bStack_154 = 1;
      *(undefined8 *)(puVar25 + -8) = 0x1801fa6df;
      FUN_1801f37a0(&local_168,fVar33 * fVar2,param_2);
      fStack_164 = fStack_140 * local_168;
      local_138 = fStack_160 * fStack_164 * fStack_144;
      pfVar17 = &fStack_160;
      if (fStack_13c <= fStack_160) {
        pfVar17 = &fStack_13c;
      }
      fStack_134 = *pfVar17;
      local_fc = DAT_180ceb264;
      *(undefined8 *)(puVar25 + -8) = 0x1801fa741;
      FUN_1801f7fa0(&local_118,&local_168);
      fVar3 = local_138;
      uVar12 = local_158;
      fStack_160 = 0.0;
      uStack_15c = 0;
      local_158 = local_158 & 0xffffff00;
      bStack_154 = 0;
      uStack_153 = 0;
      uStack_151 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uVar11 = (uint)local_148 >> 8;
      local_148 = (float)((uint)local_148 & 0xffffff00);
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      fStack_13c = 0.0;
      local_138 = (float)((uint)local_138 & 0xffffff00);
      fStack_134 = 0.0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_128 = local_128 & 0xffffffffff000000;
      local_168 = 0.0;
      local_1f8 = 0.0;
      fStack_1f4 = fStack_164;
      uStack_1f0 = 0;
      local_1e8 = local_158;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      local_1c8 = local_138;
      uStack_1e4 = uStack_104._4_4_;
      uStack_1e0 = local_fc;
      uStack_1dc = local_f8;
      local_1d8 = (float)CONCAT31((int3)uVar11,1);
      uStack_1c4 = (float)local_10c;
      uStack_1c0 = local_10c._4_4_;
      uStack_1bc = (undefined4)uStack_104;
      local_1b8 = CONCAT62((int6)(local_128 >> 0x10),1);
      if (local_d8 == local_d0) {
        *(undefined8 *)(puVar25 + -8) = 0x1801fa84c;
        FUN_18008c530(&local_e0,local_d8,&local_1f8);
      }
      else {
        *local_d8 = 0.0;
        local_d8[1] = fStack_164;
        local_d8[2] = 0.0;
        local_d8[3] = 0.0;
        *(ulonglong *)(local_d8 + 4) = CONCAT44(uStack_104._4_4_,uVar12) & 0xffffffffffffff00;
        *(ulonglong *)(local_d8 + 6) = CONCAT44(local_f8,local_fc);
        *(ulonglong *)(local_d8 + 8) = (ulonglong)(uint)local_1d8;
        local_d8[10] = 0.0;
        local_d8[0xb] = 0.0;
        *(ulonglong *)(local_d8 + 0xc) = CONCAT44((float)local_10c,fVar3) & 0xffffffffffffff00;
        *(ulonglong *)(local_d8 + 0xe) = CONCAT44((undefined4)uStack_104,local_10c._4_4_);
        *(ulonglong *)(local_d8 + 0x10) = local_1b8;
        local_d8 = local_d8 + 0x12;
      }
    }
    if ((char)local_1a8 != '\0') {
      uVar11 = local_1e8 >> 8;
      local_1e8 = local_1e8 & 0xffffff00;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      local_1d8 = (float)((uint)local_1d8 & 0xffffff00);
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      local_1c8 = (float)((uint)local_1c8 & 0xffffff00);
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      local_1b8 = local_1b8 & 0xffffffffff000000;
      uStack_1f0 = 0;
      fStack_164 = fStack_1f4;
      bStack_154 = 0;
      uStack_153 = 0;
      uStack_151 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      local_148 = local_1d8;
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      fStack_13c = 0.0;
      local_138 = local_1c8;
      fStack_134 = 0.0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_128 = local_1b8;
      fStack_160 = 2.8026e-45;
      uStack_15c = 0;
      local_158 = CONCAT31((int3)uVar11,1);
      if (local_d8 == local_d0) {
        *(undefined8 *)(puVar25 + -8) = 0x1801fa914;
        local_1f8 = fVar33;
        local_168 = fVar33;
        FUN_18008c530(&local_e0,local_d8,&local_168);
      }
      else {
        *(ulonglong *)local_d8 = CONCAT44(fStack_1f4,fVar33);
        local_d8[2] = 2.8026e-45;
        local_d8[3] = 0.0;
        *(ulonglong *)(local_d8 + 4) = (ulonglong)local_158;
        local_d8[6] = 0.0;
        local_d8[7] = 0.0;
        local_d8[8] = local_1d8;
        local_d8[9] = 0.0;
        local_d8[10] = 0.0;
        local_d8[0xb] = 0.0;
        local_d8[0xc] = local_1c8;
        local_d8[0xd] = 0.0;
        local_d8[0xe] = 0.0;
        local_d8[0xf] = 0.0;
        *(ulonglong *)(local_d8 + 0x10) = local_1b8;
        local_d8 = local_d8 + 0x12;
      }
    }
    local_158 = local_1e8 >> 8;
    local_1e8 = local_158 << 8;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    local_1d8 = (float)((uint)local_1d8 & 0xffffff00);
    uStack_1d4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    local_1c8 = (float)((uint)local_1c8 & 0xffffff00);
    uStack_1c4 = 0;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    local_1b8 = local_1b8 & 0xffffffffff000000;
    uStack_1f0 = 0;
    fStack_164 = fStack_1f4;
    bStack_154 = 0;
    uStack_153 = 0;
    uStack_151 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    local_148 = local_1d8;
    fStack_144 = 0.0;
    fStack_140 = 0.0;
    fStack_13c = 0.0;
    local_138 = local_1c8;
    fStack_134 = 0.0;
    uStack_130 = 0;
    uStack_12c = 0;
    local_128 = local_1b8;
    fStack_160 = 5.60519e-45;
    uStack_15c = 0;
    local_158 = local_158 << 8;
    if (local_d8 == local_d0) {
      *(undefined8 *)(puVar25 + -8) = 0x1801fa9cd;
      local_1f8 = fVar33;
      local_168 = fVar33;
      FUN_18008c530(&local_e0,local_d8,&local_168);
    }
    else {
      *local_d8 = fVar33;
      local_d8[1] = fStack_1f4;
      local_d8[2] = 5.60519e-45;
      local_d8[3] = 0.0;
      *(ulonglong *)(local_d8 + 4) = (ulonglong)local_158;
      local_d8[6] = 0.0;
      local_d8[7] = 0.0;
      local_d8[8] = local_1d8;
      local_d8[9] = 0.0;
      local_d8[10] = 0.0;
      local_d8[0xb] = 0.0;
      local_d8[0xc] = local_1c8;
      local_d8[0xd] = 0.0;
      local_d8[0xe] = 0.0;
      local_d8[0xf] = 0.0;
      *(ulonglong *)(local_d8 + 0x10) = local_1b8;
      local_d8 = local_d8 + 0x12;
      local_1f8 = fVar33;
      local_168 = fVar33;
    }
    if (uVar28 != 0) {
      uVar11 = local_1e8 >> 8;
      local_1e8 = local_1e8 & 0xffffff00;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      local_1d8 = (float)((uint)local_1d8 & 0xffffff00);
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      local_1c8 = (float)((uint)local_1c8 & 0xffffff00);
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      local_1b8 = local_1b8 & 0xffffffffff000000;
      local_1f8 = fVar33 + fVar2;
      uStack_1f0 = 0;
      fStack_164 = fStack_1f4;
      bStack_154 = 0;
      uStack_153 = 0;
      uStack_151 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      local_148 = local_1d8;
      fStack_144 = 0.0;
      fStack_140 = 0.0;
      fStack_13c = 0.0;
      local_138 = local_1c8;
      fStack_134 = 0.0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_128 = local_1b8;
      fStack_160 = 5.60519e-45;
      uStack_15c = 0;
      local_158 = CONCAT31((int3)uVar11,1);
      local_168 = local_1f8;
      if (local_d8 == local_d0) {
        *(undefined8 *)(puVar25 + -8) = 0x1801faa8b;
        FUN_18008c530(&local_e0,local_d8,&local_168);
      }
      else {
        *local_d8 = local_1f8;
        local_d8[1] = fStack_1f4;
        local_d8[2] = 5.60519e-45;
        local_d8[3] = 0.0;
        *(ulonglong *)(local_d8 + 4) = (ulonglong)local_158;
        local_d8[6] = 0.0;
        local_d8[7] = 0.0;
        local_d8[8] = local_1d8;
        local_d8[9] = 0.0;
        local_d8[10] = 0.0;
        local_d8[0xb] = 0.0;
        local_d8[0xc] = local_1c8;
        local_d8[0xd] = 0.0;
        local_d8[0xe] = 0.0;
        local_d8[0xf] = 0.0;
        *(ulonglong *)(local_d8 + 0x10) = local_1b8;
        local_d8 = local_d8 + 0x12;
      }
    }
    uVar19 = 0x35;
    if (DAT_180cc45b5 != '\0') {
      uVar19 = 0x11;
    }
    *(undefined8 *)(puVar25 + -8) = 0x1801faaab;
    cVar13 = FUN_1801f3bb0(&local_118,uVar19);
    puVar21 = puStack_208;
    fVar4 = DAT_1809f01e4;
    fVar3 = DAT_1809f01e0;
    fVar33 = DAT_1809f01dc;
    if (cVar13 == '\0') {
      puVar20 = local_210;
      puVar22 = local_210;
      if (local_210 != (undefined8 *)0x0) goto joined_r0x0001801fb2c1;
      goto LAB_1801fb335;
    }
    bVar30 = DAT_1809f0458 != '\0';
    bVar31 = DAT_1809f0459 != '\0';
    if (uVar29 + 1 < 0x14) {
      if (DAT_1809f045a == '\0') {
        if (bVar30) {
          uVar18 = 0x67;
          if (DAT_1809f045c != '\0') {
            uVar18 = 0x6a;
          }
        }
        else if (bVar31) {
          uVar18 = 0x75;
        }
        else {
          uVar18 = 100;
          if (DAT_1809f0460 == '\0') {
            uVar18 = 0x2d;
          }
        }
      }
      else {
        uVar18 = 0x4c;
      }
      *(undefined1 *)((longlong)&local_c8 + uVar29) = uVar18;
      *(undefined1 *)((longlong)&local_c8 + uVar29 + 1) = 0;
      uVar29 = uVar29 + 1;
    }
    if (bVar30 || bVar31) {
      bVar10 = true;
      if (DAT_1809f045a == '\0') {
        if (bVar30 || DAT_1809f045c != '\0') {
          bVar31 = false;
        }
        else if ((bVar31) && (local_218 == '\0')) goto LAB_1801fac47;
        if ((local_215 != '\0') || (bVar31 != false)) {
          fStack_160 = 0.0;
          uStack_15c = 0;
          local_158 = 0;
          bStack_154 = 0;
          uStack_153 = 0;
          uStack_151 = 0;
          uStack_150 = 0;
          uStack_14c = 0;
          local_148 = (float)((uint)local_148 & 0xffffff00);
          fStack_144 = 0.0;
          fStack_140 = 0.0;
          fStack_13c = 0.0;
          local_138 = 0.0;
          fStack_134 = 0.0;
          local_168 = (float)local_f0;
          fStack_164 = (float)(local_f0 >> 0x20);
          *(undefined8 *)(puVar25 + -8) = 0x1801fabff;
          FUN_1802009d0(&fStack_160);
          local_148 = (float)CONCAT31(local_148._1_3_,bVar31);
          fStack_144 = fVar33;
          fStack_140 = fVar3;
          fStack_13c = fVar4;
          local_138 = (float)local_10c;
          fStack_134 = local_10c._4_4_;
          *(undefined8 *)(puVar25 + -8) = 0x1801fac39;
          FUN_1802007f0(&local_210,&local_168);
          *(undefined8 *)(puVar25 + -8) = 0x1801fac43;
          FUN_180200b70(&fStack_160);
          if (bVar31 != false) break;
        }
      }
    }
    else {
      if (DAT_1809f0460 == '\0') {
        if (!bVar10) break;
      }
      else if (!bVar10) goto LAB_1801fac47;
      bVar10 = true;
    }
LAB_1801fac47:
    iVar26 = iVar26 + -1;
  } while (0 < iVar26);
  puVar21 = puStack_208;
  uVar29 = CONCAT71(DAT_180ceb258._1_7_,(byte)DAT_180ceb258) >> 2;
  local_198 = -1;
  if (-1 < DAT_1809ef930) {
    local_198 = (DAT_180ceb0f0 - DAT_1809ef930) + 1;
  }
  puVar20 = local_210;
  if (local_210 != puStack_208) {
    for (; puVar20 != puStack_208; puVar20 = puVar20 + 7) {
      if (*(char *)(puVar20 + 4) != '\0') {
        puVar20 = local_210;
        goto LAB_1801fae00;
      }
    }
    goto LAB_1801faf14;
  }
  if (((bVar10) && (DAT_180cc45b5 == '\0')) && (DAT_180ceb104 < 600)) {
    DAT_180ceb104 = DAT_180ceb104 + 1;
    fVar2 = *(float *)(param_2 + 0x14);
    *(undefined8 **)(puVar25 + 0x68) = &local_c8;
    *(uint *)(puVar25 + 0x60) = (uint)(local_218 != '\0');
    *(uint *)(puVar25 + 0x58) = local_1a4 & 0xff;
    *(uint *)(puVar25 + 0x50) = (uint)local_217;
    *(uint *)(puVar25 + 0x48) = (uint)local_216;
    *(uint *)(puVar25 + 0x40) = (uint)((char)local_1a8 != '\0');
    *(longlong *)(puVar25 + 0x38) = local_198;
    *(longlong *)(puVar25 + 0x30) = DAT_1809ef930;
    *(undefined4 *)(puVar25 + 0x28) = DAT_1809ef998;
    *(uint *)(puVar25 + 0x20) = (uint)((byte)uVar29 & 1);
    *(undefined8 *)(puVar25 + -8) = 0x1801fad4d;
    FUN_1801ec960("jb: cmd %lld ground this tick, no record | vz %.1f ducking %d user duck %d | predicted %d ticks at cmd %lld, actual %lld | bh %d hj %d nfd %d nlp %d rb %d | t 63/64..1/16: %s"
                  ,DAT_180ceb0f0,(double)fVar2,local_1a0 >> 1 & 1);
  }
  puVar20 = puStack_208;
  puVar21 = local_210;
  if (local_210 != (undefined8 *)0x0) {
    for (; puVar21 != puVar20; puVar21 = puVar21 + 7) {
      *(undefined8 *)(puVar25 + -8) = 0x1801fad6d;
      FUN_180200b70(puVar21 + 1);
    }
    goto LAB_1801fad76;
  }
  goto LAB_1801fb335;
joined_r0x0001801fb2c1:
  for (; local_210 = puVar22, puVar20 != puVar21; puVar20 = puVar20 + 7) {
    *(undefined8 *)(puVar25 + -8) = 0x1801fb2cc;
    FUN_180200b70(puVar20 + 1);
    puVar22 = local_210;
  }
  if (0xfff < (ulonglong)(((longlong)local_200 - (longlong)puVar22 >> 3) * 8)) {
    puVar21 = (undefined8 *)((longlong)puVar22 + (-8 - (longlong)puVar22[-1]));
    puVar20 = (undefined8 *)puVar22[-1];
    if (puVar21 <= &DAT_0000001f) goto LAB_1801fb320;
LAB_1801fb316:
    pcVar9 = (code *)swi(0x29);
    (*pcVar9)(5);
    puVar25 = puVar25 + 8;
    puVar22 = puVar21;
  }
  puVar20 = puVar22;
LAB_1801fb320:
  *(undefined8 *)(puVar25 + -8) = 0x1801fb325;
  thunk_FUN_1803d64e0(puVar20);
  local_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  local_200 = (undefined8 *)0x0;
  goto LAB_1801fb335;
  while (puVar20 = puVar20 + 7, puVar20 != puStack_208) {
LAB_1801fae00:
    if (*(char *)(puVar20 + 4) == '\0') break;
  }
  if (puVar20 != puStack_208) {
    puVar22 = puVar20 + 7;
    puVar16 = puStack_208;
    if (puVar22 != puStack_208) {
      do {
        if (*(char *)(puVar22 + 4) != '\0') {
          *puVar20 = *puVar22;
          *(undefined8 *)(puVar25 + -8) = 0x1801fae3a;
          FUN_180200bf0(puVar20 + 1,puVar22 + 1);
          *(undefined1 *)(puVar20 + 4) = *(undefined1 *)(puVar22 + 4);
          *(undefined8 *)((longlong)puVar20 + 0x24) = *(undefined8 *)((longlong)puVar22 + 0x24);
          *(undefined4 *)((longlong)puVar20 + 0x2c) = *(undefined4 *)((longlong)puVar22 + 0x2c);
          *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(puVar22 + 6);
          *(undefined4 *)((longlong)puVar20 + 0x34) = *(undefined4 *)((longlong)puVar22 + 0x34);
          puVar20 = puVar20 + 7;
        }
        puVar22 = puVar22 + 7;
      } while (puVar22 != puVar21);
      puVar16 = puStack_208;
      if (puVar20 == puVar21) goto LAB_1801faf14;
    }
    for (; puVar22 = puStack_208, puVar21 != puStack_208; puVar21 = puVar21 + 7) {
      *puVar20 = *puVar21;
      *(undefined8 *)(puVar25 + -8) = 0x1801faea3;
      puStack_208 = puVar16;
      FUN_180200bf0(puVar20 + 1,puVar21 + 1);
      *(undefined1 *)(puVar20 + 4) = *(undefined1 *)(puVar21 + 4);
      *(undefined8 *)((longlong)puVar20 + 0x24) = *(undefined8 *)((longlong)puVar21 + 0x24);
      *(undefined4 *)((longlong)puVar20 + 0x2c) = *(undefined4 *)((longlong)puVar21 + 0x2c);
      *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(puVar21 + 6);
      *(undefined4 *)((longlong)puVar20 + 0x34) = *(undefined4 *)((longlong)puVar21 + 0x34);
      puVar20 = puVar20 + 7;
      puVar16 = puStack_208;
      puStack_208 = puVar22;
    }
    puStack_208 = puVar16;
    for (puVar21 = puVar20; puVar21 != puVar16; puVar21 = puVar21 + 7) {
      *(undefined8 *)(puVar25 + -8) = 0x1801faef9;
      FUN_180200b70(puVar21 + 1);
    }
    puStack_208 = puVar20;
  }
LAB_1801faf14:
  puVar21 = local_210;
  fVar34 = 0.0;
  fVar32 = DAT_1808acda0;
  fVar33 = DAT_1808acda0;
  for (pfVar17 = (float *)local_210[1]; pfVar17 != (float *)local_210[2]; pfVar17 = pfVar17 + 0x12)
  {
    if (*(longlong *)(pfVar17 + 2) == 4) {
      fVar3 = *pfVar17;
      if (*(char *)(pfVar17 + 4) == '\0') {
        fVar34 = fVar3;
      }
      else if (0.0 < fVar3) {
        fVar33 = fVar3;
      }
      else {
        fVar32 = fVar3;
      }
    }
  }
  if (DAT_180cc45b5 == '\0') {
    if (DAT_180ceb104 < 600) {
      DAT_180ceb104 = DAT_180ceb104 + 1;
      fVar3 = *(float *)((longlong)local_210 + 0x2c);
      fVar4 = *(float *)(param_2 + 0x14);
      pcVar27 = "none (ducking)";
      if (0.0 <= fVar32) {
        pcVar27 = "at";
      }
      cVar13 = *(char *)(local_210 + 4);
      *(undefined8 **)(puVar25 + 0xb0) = &local_c8;
      *(uint *)(puVar25 + 0xa8) = (uint)(local_218 != '\0');
      *(uint *)(puVar25 + 0xa0) = local_1a4 & 0xff;
      *(uint *)(puVar25 + 0x98) = (uint)local_217;
      *(uint *)(puVar25 + 0x90) = (uint)local_216;
      *(uint *)(puVar25 + 0x88) = (uint)((char)local_1a8 != '\0');
      *(uint *)(puVar25 + 0x80) = (uint)uVar29 & 1;
      *(uint *)(puVar25 + 0x78) = local_1a0 >> 1 & 1;
      *(double *)(puVar25 + 0x70) = (double)fVar3;
      *(double *)(puVar25 + 0x68) = (double)fVar4;
      *(longlong *)(puVar25 + 0x60) = local_198;
      *(undefined8 *)(puVar25 + 0x58) = DAT_1809eea68;
      *(longlong *)(puVar25 + 0x50) = DAT_1809ef930;
      *(undefined4 *)(puVar25 + 0x48) = DAT_1809ef998;
      *(uint *)(puVar25 + 0x40) = (uint)((char)local_1a8 != '\0');
      *(double *)(puVar25 + 0x38) = (double)fVar33;
      *(double *)(puVar25 + 0x30) = (double)fVar32;
      *(longlong *)(puVar25 + 0x28) = DAT_180ceb0f0;
      *(char **)(puVar25 + 0x20) = pcVar27;
      *(undefined8 *)(puVar25 + -8) = 0x1801fb097;
      FUN_1801ec960("jb: cmd %lld APPLIED t %.4f ramp %d | duck press %s cmd %lld when %.4f, unduck t, re-duck %.4f, jump %d | predicted %d ticks at cmd %lld (cmd %lld), actual %lld | vz %.1f -> %.1f ducking %d user duck %d | bh %d hj %d nfd %d nlp %d rb %d | %s"
                    ,DAT_180ceb0f0,(double)fVar34,cVar13 != '\0');
      if (DAT_180cc45b5 != '\0') goto LAB_1801fb0c9;
    }
    DAT_180cc409f = 1;
    DAT_180cc409d = 1;
    DAT_180cc409c = *(undefined1 *)(puVar21 + 4);
    DAT_1809ee978 = DAT_180ceb0f0;
  }
LAB_1801fb0c9:
  puVar20 = local_178;
  plVar1 = local_178 + 7;
  if (local_178 != puVar21 + -6) {
    lVar15 = puVar21[1];
    lVar14 = puVar21[2];
    *(undefined8 *)(puVar25 + -8) = 0x1801fb0ff;
    FUN_1802009d0(plVar1,lVar15,(lVar14 - lVar15 >> 3) * -0x71c71c71c71c71c7);
  }
  puVar20[5] = *puVar21;
  if (((char)local_19c != '\0') && (*(char *)(puVar21 + 4) == '\0')) {
    lVar15 = *plVar1;
    lVar14 = puVar20[8];
    if (lVar15 != lVar14) {
      fStack_164 = 0.0;
      fStack_160 = 0.0;
      fStack_144 = 0.015625;
      fStack_140 = *(float *)(param_2 + 0x8c);
      fStack_13c = *(float *)(param_2 + 0x78);
      local_138 = 0.0;
      fStack_134 = 0.0;
      local_158 = *(uint *)(param_2 + 0x4c);
      if (*(char *)(param_2 + 0x45) == '\0') {
        bStack_154 = (byte)(*(uint *)(param_2 + 0x18) >> 1) & 1;
      }
      else {
        bStack_154 = 1;
      }
      uStack_150 = *(undefined4 *)(param_2 + 0x48);
      local_168 = *(float *)(param_2 + 0x40);
      uStack_14c = *(undefined4 *)(param_2 + 0xc);
      local_148 = *(float *)(param_2 + 0x10);
      uStack_15c = *(undefined4 *)(param_2 + 0x2c);
      *(undefined8 *)(puVar25 + -8) = 0x1801fb1d3;
      FUN_1801f37a0(&local_168,fVar2,param_2);
      fStack_164 = fStack_140 * local_168;
      local_138 = fStack_160 * fStack_164 * fStack_144;
      pfVar17 = &fStack_160;
      if (fStack_13c <= fStack_160) {
        pfVar17 = &fStack_13c;
      }
      fStack_134 = *pfVar17;
      uStack_14c = *(undefined4 *)((longlong)puVar21 + 0x24);
      local_148 = *(float *)(puVar21 + 5);
      cVar13 = *(char *)(param_2 + 0x5c);
      *(undefined8 *)(puVar25 + -8) = 0x1801fb241;
      iVar26 = FUN_1801f82c0(param_2);
      lVar8 = puVar20[8];
      *(undefined4 *)(puVar25 + 0x30) = DAT_1808ac34c;
      puVar25[0x28] = 0;
      *(uint *)(puVar25 + 0x20) =
           ((0x20 - (uint)(cVar13 != '\0')) + (int)(lVar14 - lVar15 >> 3) * -0x38e38e39) - iVar26;
      uVar5 = *(undefined4 *)(lVar8 + -0x48);
      *(undefined8 *)(puVar25 + -8) = 0x1801fb27b;
      FUN_1801f8340(puVar20,&local_168,param_2,uVar5);
    }
  }
  puVar20 = puStack_208;
  puVar21 = local_210;
  if (local_210 != (undefined8 *)0x0) {
    for (; puVar21 != puVar20; puVar21 = puVar21 + 7) {
      *(undefined8 *)(puVar25 + -8) = 0x1801fb29f;
      FUN_180200b70(puVar21 + 1);
    }
LAB_1801fad76:
    puVar20 = local_210;
    if (0xfff < (ulonglong)(((longlong)local_200 - (longlong)local_210 >> 3) * 8)) {
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_210 + (-8 - (longlong)local_210[-1])))
      goto LAB_1801fb316;
      puVar20 = (undefined8 *)local_210[-1];
    }
    goto LAB_1801fb320;
  }
LAB_1801fb335:
  *(undefined8 *)(puVar25 + -8) = 0x1801fb33e;
  FUN_180200b70(&local_190);
  *(undefined8 *)(puVar25 + -8) = 0x1801fb34b;
  FUN_180200b70(&local_e0);
LAB_1801fb34b:
  *(undefined8 *)(puVar25 + -8) = 0x1801fb35a;
  return;
}



/* ===== 1801fb3b0 FUN_1801fb3b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fb3b0(float *param_1)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float local_res10 [2];
  float local_res18;
  char *local_res20;
  
  if ((((DAT_18092131b != '\0') &&
       (cVar10 = FUN_18026b8a0(), iVar16 = DAT_1809efb6c, fVar28 = DAT_1808ac34c, cVar10 == '\0'))
      && (DAT_180cc412d != '\0')) && (DAT_1809f015c != '\0')) {
    if ((DAT_1809efb78 < 0.0) || (fVar21 = DAT_1809efb78, DAT_1808ac34c <= DAT_1809efb78)) {
      local_res10[0] = 0.0;
      fVar21 = (float)FUN_180512fd0(DAT_1809efb78,local_res10);
      fVar22 = local_res10[0];
      if (fVar21 < 0.0) {
        fVar21 = fVar21 + fVar28;
        if (fVar21 < fVar28) {
          fVar22 = local_res10[0] + DAT_1808acda0;
        }
        else {
          fVar21 = 0.0;
        }
      }
      iVar16 = iVar16 + (int)fVar22;
    }
    fVar22 = DAT_1808ac0c0;
    if (DAT_1809efd93 != '\0') {
      if ((DAT_1809efbfc <= 0.0) ||
         (fVar23 = (float)FUN_18053ef70(DAT_1809efbfc * DAT_1808acab0), 1 < (int)fVar23 - iVar16)) {
        if (DAT_1809efd90 != '\0') {
          return;
        }
        if (DAT_1809efd9c <= 0.0) {
          return;
        }
        fVar21 = (float)iVar16 * DAT_1808ac00c + fVar21 * DAT_1808ac00c;
        if (fVar21 <= DAT_1809efd9c) {
          return;
        }
        fVar21 = (fVar21 + fVar22) - DAT_1809efaf0;
        if (0.0 < fVar21) {
          if (fVar21 <= DAT_1808ac118) {
            if (DAT_1809efd94 == '\0') {
              return;
            }
            pcVar17 = "throw (jump throw)";
          }
          else {
            pcVar17 = "throw (stash old)";
          }
        }
        else {
          pcVar17 = "throw (stash ahead)";
        }
      }
      else {
        pcVar17 = "stash";
      }
      DAT_180ceb270 = DAT_180ceb268;
      cVar10 = FUN_1801f3bb0(param_1,0x11);
      if (cVar10 != '\0') {
        if (((DAT_1809f0550 != '\0') || (DAT_1809f055c != 0.0)) ||
           ((DAT_1809f0553 == '\0' && (DAT_1809f0552 != '\0')))) {
          if (fVar22 < (float)((uint)(DAT_1809f0558 - DAT_1808ac1f4) & _DAT_1808ade90)) {
            if ((DAT_1809f0558 <= fVar28) && (fVar28 = 0.0, 0.0 <= DAT_1809f0558)) {
              fVar28 = DAT_1809f0558;
            }
          }
          else {
            fVar28 = DAT_1808ac1f4;
          }
        }
        uVar24 = FUN_180242c70(DAT_1809f0980);
        fVar21 = *param_1;
        fVar22 = param_1[1];
        fVar23 = param_1[2];
        local_res20 = "";
        local_res18 = fVar21;
        cVar10 = FUN_180242d10(param_1,&DAT_1809f01dc,uVar24,&local_res20);
        lVar9 = DAT_180ceb0f0;
        fVar8 = DAT_1809f01e4;
        fVar7 = DAT_1809f01e0;
        fVar6 = DAT_1809f01dc;
        fVar1 = *param_1;
        local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,cVar10);
        if (((fVar1 == fVar21) && (param_1[1] == fVar22)) && (param_1[2] == fVar23)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (DAT_180cc45b5 == '\0') {
          if (bVar5) {
            DAT_180ceb098 = 2;
          }
          if ((DAT_180960e88 != DAT_180ceb0f0) ||
             ((DAT_180ca00d0 == fVar1 && (DAT_180ca00d4 == param_1[1])))) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((DAT_180ca00cc < 4000) && ((DAT_180960e88 != DAT_180ceb0f0 || (bVar5)))) {
            DAT_180ca00cc = DAT_180ca00cc + 1;
            iVar15 = 0;
            lVar2 = *(longlong *)(param_1 + 0x10);
            fVar21 = param_1[1];
            lVar11 = *(longlong *)(param_1 + 0xe);
            DAT_180960e88 = DAT_180ceb0f0;
            for (; lVar11 != lVar2; lVar11 = lVar11 + 0x48) {
              iVar15 = (iVar15 + 1) - (uint)(*(char *)(lVar11 + 0x30) == '\0');
            }
            pcVar12 = local_res20;
            if (cVar10 != '\0') {
              pcVar12 = "written: this command\'s base view angles (W view), no subtick view step";
            }
            local_res20 = (char *)CONCAT44(local_res20._4_4_,(uint)(DAT_1809efd94 != '\0'));
            bVar18 = DAT_1809f0552 != '\0';
            dVar25 = (double)DAT_1809f055c;
            bVar19 = DAT_1809f0553 != '\0';
            bVar20 = DAT_1809f0550 != '\0';
            dVar26 = (double)DAT_1809f0558;
            dVar3 = (double)DAT_1809efaf0;
            dVar4 = (double)DAT_1809efbfc;
            fVar27 = DAT_1809f01e0 * DAT_1809f01e0 + DAT_1809f01dc * DAT_1809f01dc +
                     DAT_1809f01e4 * DAT_1809f01e4;
            DAT_180ca00d0 = fVar1;
            DAT_180ca00d4 = fVar21;
            if (fVar27 < 0.0) {
              fVar27 = (float)FUN_18051af10(fVar27);
              cVar10 = local_res10[0]._0_1_;
            }
            else {
              fVar27 = SQRT(fVar27);
            }
            pcVar13 = " (unchanged)";
            pcVar14 = "";
            if (cVar10 != '\0') {
              pcVar13 = "";
            }
            if (bVar5) {
              pcVar14 = " (recomputed in a later CreateMove call)";
            }
            FUN_1802b2560("[super toss] cmd %lld tick %d %s%s | view %.3f %.3f %.3f -> %.3f %.3f %.3f%s | steps %d (view %d) | vel %.2f %.2f %.2f (|v| %.2f) | strength %.3f (raw %.3f pin %d throw_time %.4f held %d redraw %d) speed %.2f | jump_throw %d stash_when %.4f stash_time %.4f | %s"
                          ,lVar9,iVar16,pcVar17,pcVar14,(double)local_res18,(double)fVar22,
                          (double)fVar23,(double)fVar1,(double)fVar21,(double)param_1[2],pcVar13,
                          (int)(lVar2 - *(longlong *)(param_1 + 0xe) >> 3) * 0x38e38e39,iVar15,
                          (double)fVar6,(double)fVar7,(double)fVar8,(double)fVar27,(double)fVar28,
                          dVar26,bVar20,dVar25,bVar19,bVar18,(double)(float)uVar24,local_res20._0_4_
                          ,dVar4,dVar3,pcVar12);
          }
        }
      }
    }
  }
  return;
}



/* ===== 1801fbad0 FUN_1801fbad0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fbad0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_1038 [32];
  ulonglong local_1018;
  undefined1 local_1010;
  undefined1 local_1008;
  undefined8 local_1000;
  ulonglong local_ff8;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_1038;
  if (*(char *)((longlong)param_2 + 0x1c) != '\a') {
    DAT_180cc45b6 = DAT_1809f358a;
    DAT_180cc412b = 0;
    DAT_180cc45ec = 0;
    DAT_180cc412e = 0;
    DAT_180cc45b4 = 0;
    DAT_180cc45b7 = 0;
    DAT_180cc412c = FUN_1801f3ec0(param_2);
    FUN_1801f4030(param_1,param_2);
    if (*(char *)((longlong)param_2 + 0x1c) == '\t') {
      if ((DAT_180920dd0 != '\0') && (cVar3 = FUN_18026b8a0(), cVar3 == '\0')) {
        FUN_1801f4190(param_1,param_2);
      }
      if ((((byte)DAT_180ceb268 & 2) != 0) || ((*(byte *)(param_1 + 0x28) & 2) != 0)) {
        for (lVar4 = *(longlong *)(param_1 + 0x38); lVar4 != *(longlong *)(param_1 + 0x40);
            lVar4 = lVar4 + 0x48) {
          if (*(longlong *)(lVar4 + 8) == 2) {
            return;
          }
        }
        FUN_1801f35a0(param_1,0,2,1);
      }
    }
    else if (*(char *)((longlong)param_2 + 0x1c) == '\x02') {
      DAT_1809efa00 = DAT_180ceb0f0;
      FUN_1801f4750(param_1,param_2);
      DAT_180ceb258 = *(ulonglong *)(param_1 + 0x28);
      if (DAT_1809eeb00 == DAT_180ceb0f0) {
        DAT_180ceb258 = (uint)DAT_180ceb378 & 2 | DAT_180ceb258;
      }
      DAT_180ceb0e8 = CONCAT71(DAT_180ceb268._1_7_,(byte)DAT_180ceb268);
      DAT_180ceb270 = DAT_180ceb0e8;
      FUN_1801f5790(param_1,param_2);
      DAT_180ceb270 = CONCAT71(DAT_180ceb268._1_7_,(byte)DAT_180ceb268);
      FUN_1801f5f90(param_1,param_2);
      DAT_180ceb270 = CONCAT71(DAT_180ceb268._1_7_,(byte)DAT_180ceb268);
      FUN_1801f67e0(param_1,param_2);
      FUN_1801f7b60(param_1,param_2);
      DAT_180ceb270 = CONCAT71(DAT_180ceb268._1_7_,(byte)DAT_180ceb268);
      if (((DAT_180920dc8 != '\0') && (DAT_180cc412c != '\0')) &&
         (((DAT_180ceb270 | *(ulonglong *)(param_1 + 0x28)) & 2) == 0)) {
        cVar3 = FUN_1801f3bb0(param_1,0x10);
        if ((cVar3 != '\0') && (((byte)DAT_1809f0238 & 1) == 0)) {
          uVar8 = *(ulonglong *)(param_1 + 0x30) | _UNK_1808ad3b8;
          *(ulonglong *)(param_1 + 0x28) = *(ulonglong *)(param_1 + 0x28) | _DAT_1808ad3b0;
          *(ulonglong *)(param_1 + 0x30) = uVar8;
          FUN_1801f35a0(param_1,0,2,1);
          fVar2 = DAT_1808ac040;
          iVar6 = 0x1f;
          lVar4 = (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) *
                  -0x71c71c71c71c71c7 + -1;
          do {
            *(float *)(*(longlong *)(param_1 + 0x38) + lVar4 * 0x48) = (float)iVar6 * fVar2;
            cVar3 = FUN_1801f3bb0(param_1,0x10);
            if (cVar3 == '\0') break;
            if (DAT_1809f045c != '\0') goto LAB_1801fbdc4;
            iVar6 = iVar6 + -1;
          } while (0 < iVar6);
          lVar1 = *(longlong *)(param_1 + 0x38) + lVar4 * 0x48;
          lVar4 = lVar1 + 0x48;
          FUN_180540530(lVar1,lVar4,*(longlong *)(param_1 + 0x40) - lVar4);
          *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -0x48;
          for (lVar4 = *(longlong *)(param_1 + 0x38); lVar4 != *(longlong *)(param_1 + 0x40);
              lVar4 = lVar4 + 0x48) {
            if (*(longlong *)(lVar4 + 8) == 2) goto LAB_1801fbdc4;
          }
          FUN_1801f35a0(param_1,0,2,1);
        }
LAB_1801fbdc4:
        DAT_180ceb270 = CONCAT71(DAT_180ceb268._1_7_,(byte)DAT_180ceb268);
      }
      FUN_1801f8670(param_1,param_2,0);
      FUN_1801fa0d0(param_1,param_2);
      FUN_1801fb3b0(param_1);
      if ((((byte)DAT_180ceb268 & 2) != 0) && (DAT_180cc412c != '\0')) {
        for (lVar4 = *(longlong *)(param_1 + 0x38); lVar4 != *(longlong *)(param_1 + 0x40);
            lVar4 = lVar4 + 0x48) {
          if (*(longlong *)(lVar4 + 8) == 2) goto LAB_1801fbe36;
        }
        FUN_1801f35a0(param_1,0,2,1);
      }
LAB_1801fbe36:
      lVar4 = *(longlong *)(param_1 + 0x40);
      lVar1 = *(longlong *)(param_1 + 0x38);
      lVar7 = lVar4 - lVar1;
      lVar5 = (lVar7 >> 3) * -0x71c71c71c71c71c7;
      if (lVar5 < 0x21) {
        FUN_1801f09d0(lVar1,lVar4);
      }
      else {
        lVar7 = lVar7 / 0x12 + (lVar7 >> 0x3f);
        FUN_1801f0b30(&local_1000,lVar5 - ((lVar7 >> 3) - (lVar7 >> 0x3f)));
        local_1010 = local_1008;
        local_1018 = local_ff8;
        FUN_1801f0be0(lVar1,lVar4,lVar5,local_1000);
        if (0x38 < local_ff8) {
          FUN_1803d64e0(local_1000);
        }
      }
      DAT_180ceb254 = *(undefined4 *)(param_2 + 3);
      DAT_180ceb360 = *param_2;
      DAT_180ceb368 = *(undefined4 *)(param_2 + 1);
    }
  }
  return;
}



/* ===== 1801fbf20 FUN_1801fbf20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fbf20(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1cf;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [240];
  
  DAT_180cc412f = 0;
  if (param_1 == 0) {
    DAT_180cc412f = 0;
    return;
  }
  if (DAT_180ccfae7 == '\0') {
    DAT_180cc412f = 0;
    return;
  }
  cVar3 = FUN_18026b8a0();
  if (cVar3 != '\0') {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res8);
    DAT_181108a00 = local_res8;
    local_res8 = FUN_1803a0c50(&local_res8);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res8 = DAT_1811089f8;
  }
  lVar2 = local_res8;
  if (local_res8 == 0) {
    DAT_1811089f8 = local_res8;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_res8;
    return;
  }
  DAT_1811089f8 = local_res8;
  iVar4 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_res8);
  if (999 < iVar4 - 1U) {
    return;
  }
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_198 = _DAT_1808ad910;
  uStack_190 = _UNK_1808ad918;
  local_178 = _DAT_1808add90;
  uStack_170 = _UNK_1808add98;
  local_1e8 = 0;
  uStack_1e0 = (ulonglong)uStack_1e0._6_2_ << 0x30;
  local_1d8 = 0x3f800000;
  uStack_1d0 = 0;
  uStack_1cf = 0;
  uStack_1cc = 0x437a0000;
  iStack_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = CONCAT26(local_1b8._6_2_,0x3f800000);
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = (ulonglong)uStack_1a0._5_3_ << 0x28;
  local_188 = _DAT_1808ada60;
  uStack_180 = _UNK_1808ada68;
  local_168 = CONCAT62(local_168._2_6_,1);
  local_168 = CONCAT44(0xffffffff,(undefined4)local_168);
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = (uStack_150 >> 8 & 0xffffff) << 8;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_11e = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0x3c800000;
  cVar3 = FUN_1801f2020(&local_res8,&local_1f8);
  if (cVar3 == '\0') {
    return;
  }
  DAT_180ceb0f0 = *(longlong *)(param_1 + 8);
  lVar6 = 0;
  if (DAT_1809f31f4 == (int)DAT_180ceb0f0) {
    lVar6 = DAT_180cfa070;
  }
  DAT_180cc412a = 0;
  if (lVar6 == 0) {
    DAT_180cc412d = FUN_180463b50(&DAT_1809efa10,lVar2,0x11);
    if (DAT_180cc412d == '\0') goto LAB_1801fc2ed;
  }
  else {
    FUN_1801fd810(&DAT_1809efa10,lVar6 + 0x10);
    _DAT_1809efb68 = 0x11;
    if (DAT_1809efb58 != 0) {
      if (((DAT_181112110 == 0) ||
          (0x7ffffffefffe < (DAT_1809efb58 + (ulonglong)DAT_181112110) - 0x10000)) ||
         (iVar4 = FUN_180011200(), 0xfffffffd < iVar4 - 1U)) {
        _DAT_1809efb60 = 0;
      }
      else {
        puVar5 = (undefined8 *)FUN_1803a0940(&local_res8,iVar4);
        _DAT_1809efb60 = *puVar5;
      }
    }
    FUN_1804624c0(&DAT_1809efa10);
    FUN_180463020(&DAT_1809efa10);
    DAT_1809f0160 = *(undefined4 *)(lVar6 + 0x760);
    iVar4 = DAT_1809efb30 + 1;
    DAT_180cc412a = 1;
    _DAT_1809efb74 = (float)iVar4 * DAT_1808ac00c;
    DAT_1809efb6c = iVar4;
    _DAT_1809f017c = iVar4;
    _DAT_1809f0180 = _DAT_1809efb74;
    puVar5 = (undefined8 *)FUN_1801f3d10(local_108,&DAT_1809efa10,&local_1f8);
    DAT_180cc412d = '\x01';
    local_1f8 = *puVar5;
    uStack_1f0 = puVar5[1];
    local_1e8 = puVar5[2];
    uStack_1ce = (undefined2)((ulonglong)puVar5[5] >> 0x10);
    uStack_1c0 = puVar5[7];
    uStack_1c4 = (undefined4)((ulonglong)puVar5[6] >> 0x20);
    local_1b8 = puVar5[8];
    uStack_1b0 = puVar5[9];
    local_1a8 = puVar5[10];
    uStack_1a0 = puVar5[0xb];
    local_198 = puVar5[0xc];
    uStack_190 = puVar5[0xd];
    local_188 = puVar5[0xe];
    uStack_180 = puVar5[0xf];
    local_178 = puVar5[0x10];
    uStack_170 = puVar5[0x11];
    local_168 = puVar5[0x12];
    uStack_160 = puVar5[0x13];
    local_158 = puVar5[0x14];
    uStack_150 = puVar5[0x15];
    local_148 = puVar5[0x16];
    uStack_140 = puVar5[0x17];
    local_138 = (undefined4)puVar5[0x18];
    uStack_134 = (undefined4)((ulonglong)puVar5[0x18] >> 0x20);
    uStack_130 = (undefined4)puVar5[0x19];
    uStack_12c = (undefined4)((ulonglong)puVar5[0x19] >> 0x20);
    local_128 = puVar5[0x1a];
    uVar1 = puVar5[0x1b];
    uStack_120 = (undefined2)uVar1;
    uStack_11e = (undefined1)((ulonglong)uVar1 >> 0x10);
    uStack_11d = (undefined1)((ulonglong)uVar1 >> 0x18);
    uStack_11c = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_110 = puVar5[0x1d];
    uStack_1e0._6_2_ = (ushort)((ulonglong)puVar5[3] >> 0x30);
    uStack_1e0._0_6_ = CONCAT15(DAT_1809efa81,(int5)puVar5[3]);
    local_1d8 = CONCAT44(DAT_1809efab4,(int)puVar5[4]);
    uStack_1d0 = DAT_1809efaba;
    uStack_1cf = DAT_1809efabb;
    uStack_118 = (undefined4)puVar5[0x1c];
    uStack_114 = (undefined4)((ulonglong)puVar5[0x1c] >> 0x20);
    iStack_1c8 = iVar4;
  }
  uStack_1cc = DAT_1809efb44;
LAB_1801fc2ed:
  lVar2 = DAT_180ceb0f0;
  if (-1 < DAT_180ceb0f0) {
    lVar6 = DAT_180ceb0f0 % 0x96;
    *(undefined4 *)(&DAT_1809eeb28 + lVar6 * 0x18) = uStack_1f0._4_4_;
    *(undefined4 *)(&DAT_1809eeb30 + lVar6 * 0x18) = (undefined4)local_158;
    *(undefined4 *)(&DAT_1809eeb2c + lVar6 * 0x18) = (undefined4)local_1e8;
    *(longlong *)(&DAT_1809eeb20 + lVar6 * 0x18) = lVar2;
    *(undefined4 *)(&DAT_1809eeb34 + lVar6 * 0x18) = local_168._4_4_;
  }
  DAT_180ceb268 = *(undefined8 *)(param_1 + 0x70);
  DAT_180ceb370 = *(undefined8 *)(param_1 + 8);
  DAT_180ceb270 = DAT_180ceb268;
  FUN_1801fbad0(&DAT_180cf9fa0,&local_1f8);
  *(undefined8 *)(param_1 + 0x70) = DAT_180ceb268;
  return;
}



/* ===== 1801fc3c0 FUN_1801fc3c0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fc3c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 uVar1;
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
  undefined1 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined1 auStack_2128 [32];
  undefined1 local_2108;
  undefined1 local_2107;
  undefined1 local_2106;
  undefined1 local_2105;
  undefined1 local_2104;
  undefined1 local_2103;
  undefined1 local_2102;
  undefined1 local_2101;
  undefined1 local_2100;
  longlong local_20f8;
  undefined4 local_20f0;
  undefined4 local_20ec;
  undefined4 local_20e8;
  undefined4 local_20e4;
  undefined8 local_20d8;
  undefined8 uStack_20d0;
  undefined8 local_20c8;
  undefined8 uStack_20c0;
  undefined8 local_20b8;
  undefined1 uStack_20b0;
  undefined1 uStack_20af;
  undefined2 uStack_20ae;
  undefined4 uStack_20ac;
  undefined4 uStack_20a8;
  undefined4 uStack_20a4;
  undefined8 uStack_20a0;
  undefined8 local_2098;
  undefined8 uStack_2090;
  undefined8 local_2088;
  undefined8 uStack_2080;
  undefined8 local_2078;
  undefined8 uStack_2070;
  undefined8 local_2068;
  undefined8 uStack_2060;
  undefined8 local_2058;
  undefined8 uStack_2050;
  undefined8 local_2048;
  undefined8 uStack_2040;
  undefined8 local_2038;
  undefined8 uStack_2030;
  undefined8 local_2028;
  undefined8 uStack_2020;
  undefined4 local_2018;
  undefined4 uStack_2014;
  undefined4 uStack_2010;
  undefined4 uStack_200c;
  undefined8 local_2008;
  undefined2 uStack_2000;
  undefined1 uStack_1ffe;
  undefined1 uStack_1ffd;
  undefined4 uStack_1ffc;
  undefined4 uStack_1ff8;
  undefined4 uStack_1ff4;
  undefined8 uStack_1ff0;
  undefined8 local_1fe8;
  undefined8 local_1fe0;
  undefined8 local_1fd8;
  undefined8 local_1fd0;
  undefined8 local_1fc8;
  undefined8 local_1fc0;
  undefined8 local_1fb8;
  undefined1 local_1fb0 [248];
  undefined1 local_1eb8 [3600];
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined4 local_1088;
  undefined1 local_1084;
  undefined1 local_1083;
  undefined8 local_1080;
  undefined8 local_1078;
  longlong local_1070;
  longlong local_1068;
  undefined1 local_1058 [664];
  undefined1 local_dc0 [1320];
  undefined1 local_898 [664];
  undefined1 local_600 [1320];
  ulonglong local_d8;
  undefined8 local_48;
  
  local_48 = 0x1801fc3df;
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_2128;
  if ((DAT_180ccfae7 != '\0') && (cVar19 = FUN_18026b8a0(), cVar19 == '\0')) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_20f8);
      DAT_181108a00 = local_20f8;
      DAT_1811089f8 = FUN_1803a0c50(&local_20f8);
      DAT_180cd1304 = '\x01';
    }
    if ((DAT_1811089f8 != 0) && (DAT_180ca09f0 != 0)) {
      local_20f8 = DAT_1811089f8;
      iVar20 = FUN_180011200();
      if (iVar20 - 1U < 1000) {
        local_20d8 = 0;
        uStack_20d0 = 0;
        local_20c8 = 0;
        uStack_20c0 = (ulonglong)uStack_20c0._6_2_ << 0x30;
        local_20b8 = 0x3f800000;
        uStack_20b0 = 0;
        uStack_20af = 0;
        uStack_20ac = 0x437a0000;
        uStack_20a8 = 0;
        uStack_20a0 = 0;
        local_2098 = CONCAT26(local_2098._6_2_,0x3f800000);
        uStack_2090 = 0;
        local_2088 = 0;
        uStack_2080 = (ulonglong)uStack_2080._5_3_ << 0x28;
        local_2078 = _DAT_1808ad910;
        uStack_2070 = _UNK_1808ad918;
        local_2068 = _DAT_1808ada60;
        uStack_2060 = _UNK_1808ada68;
        local_2058 = _DAT_1808add90;
        uStack_2050 = _UNK_1808add98;
        local_2048 = CONCAT62(local_2048._2_6_,1);
        local_2048 = CONCAT44(0xffffffff,(undefined4)local_2048);
        uStack_2040 = 0;
        local_2038 = 0;
        uStack_2030 = (uStack_2030 >> 8 & 0xffffff) << 8;
        local_2028 = 0;
        uStack_2020 = 0;
        local_2018 = 0;
        uStack_2014 = 0;
        uStack_2010 = 0;
        local_2008 = 0;
        uStack_2000 = 0;
        uStack_1ffe = 0;
        uStack_1ffc = 0;
        uStack_1ff8 = 0;
        uStack_1ff4 = 0;
        uStack_1ff0 = 0x3c800000;
        cVar19 = FUN_1801f2020(&local_20f8,&local_20d8);
        if (cVar19 != '\0') {
          FUN_1801fcbf0(local_898,&DAT_1809efa10);
          uVar13 = DAT_180cc412d;
          FUN_1801fcbf0(local_1058,&DAT_1809f01d0);
          uVar18 = DAT_180ceb370;
          uVar17 = DAT_180ceb360;
          uVar16 = DAT_180ceb270;
          uVar15 = DAT_180ceb264;
          uVar14 = DAT_180ceb100;
          uVar12 = _DAT_1809ef9e0;
          uVar11 = _DAT_1809ef9d8;
          uVar10 = DAT_1809ef9d0;
          uVar9 = _DAT_1809ef9c8;
          uVar8 = _DAT_1809ef9c0;
          uVar7 = _DAT_1809ef9b8;
          uVar6 = _DAT_1809ef9b0;
          uVar5 = _DAT_1809ef9a8;
          uVar4 = _DAT_1809ef9a0;
          local_2108 = DAT_180cc45b6;
          local_2107 = DAT_180cc412c;
          local_1fe8 = DAT_1809efa00;
          local_2106 = DAT_180cc412b;
          local_2105 = DAT_180cc45ec;
          local_2104 = DAT_180cc412e;
          local_2103 = DAT_180cc412a;
          local_2102 = DAT_180cc412f;
          local_2101 = DAT_180cc45b4;
          local_2100 = DAT_180cc45b7;
          local_1fe0 = DAT_180ceb258;
          local_1fd8 = DAT_180ceb0e8;
          local_20f0 = DAT_180ceb0e4;
          local_20ec = DAT_180ceb250;
          local_20e8 = DAT_180ceb254;
          local_20e4 = DAT_180ceb368;
          local_1fd0 = DAT_180ceb268;
          FUN_180540530(local_1eb8,&DAT_1809eeb20,0xe10);
          local_1fc8 = DAT_180ceb0f0;
          local_10a8 = _DAT_180ceb3f0;
          uStack_10a0 = _DAT_180ceb3f8;
          local_1098 = _DAT_180ceb400;
          uStack_1090 = _DAT_180ceb408;
          local_1088 = DAT_180ceb410;
          local_1084 = DAT_180ceb414;
          local_1083 = DAT_180ceb415;
          local_1080 = DAT_180ceb418;
          local_1078 = DAT_180ceb420;
          FUN_180200720(&local_1070,&DAT_180ceb428);
          local_1fc0 = DAT_1809ef930;
          local_1fb8 = DAT_1809eea68;
          local_20f8 = CONCAT44(local_20f8._4_4_,DAT_1809ef998);
          DAT_180cc45b5 = 1;
          DAT_180cc412f = 0;
          DAT_180ceb0f0 = param_4;
          FUN_1801fd810(&DAT_1809efa10,param_1);
          DAT_180cc412d = 1;
          DAT_180cc412a = 1;
          puVar21 = (undefined8 *)FUN_1801f3d10(local_1fb0,&DAT_1809efa10,&local_20d8);
          local_20d8 = *puVar21;
          uVar1 = *(undefined4 *)((longlong)puVar21 + 0xc);
          uStack_20d0 = puVar21[1];
          local_20c8 = puVar21[2];
          uStack_20ae = (undefined2)((ulonglong)puVar21[5] >> 0x10);
          uStack_20a0 = puVar21[7];
          uStack_20a4 = (undefined4)((ulonglong)puVar21[6] >> 0x20);
          local_2098 = puVar21[8];
          uStack_2090 = puVar21[9];
          local_2088 = puVar21[10];
          uStack_2080 = puVar21[0xb];
          local_2078 = puVar21[0xc];
          uStack_2070 = puVar21[0xd];
          local_2068 = puVar21[0xe];
          uStack_2060 = puVar21[0xf];
          local_2058 = puVar21[0x10];
          uStack_2050 = puVar21[0x11];
          uVar2 = puVar21[0x12];
          local_2038 = puVar21[0x14];
          local_2028 = puVar21[0x16];
          uStack_2020 = puVar21[0x17];
          local_2018 = (undefined4)puVar21[0x18];
          uStack_2014 = (undefined4)((ulonglong)puVar21[0x18] >> 0x20);
          uStack_2010 = (undefined4)puVar21[0x19];
          uStack_200c = (undefined4)((ulonglong)puVar21[0x19] >> 0x20);
          local_2008 = puVar21[0x1a];
          uVar3 = puVar21[0x1b];
          uStack_2000 = (undefined2)uVar3;
          uStack_1ffe = (undefined1)((ulonglong)uVar3 >> 0x10);
          uStack_1ffd = (undefined1)((ulonglong)uVar3 >> 0x18);
          uStack_1ffc = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_1ff0 = puVar21[0x1d];
          uStack_1ff8 = (undefined4)puVar21[0x1c];
          uStack_1ff4 = (undefined4)((ulonglong)puVar21[0x1c] >> 0x20);
          uStack_20a8 = DAT_1809efb6c;
          uStack_20c0._6_2_ = (ushort)((ulonglong)puVar21[3] >> 0x30);
          uStack_20c0._0_6_ = CONCAT15(DAT_1809efa81,(int5)puVar21[3]);
          local_20b8 = CONCAT44(DAT_1809efab4,(int)puVar21[4]);
          uStack_20b0 = DAT_1809efaba;
          uStack_20af = DAT_1809efabb;
          uStack_20ac = DAT_1809efb44;
          uStack_2030 = CONCAT71((int7)((ulonglong)puVar21[0x15] >> 8),DAT_1809efd93);
          uStack_2030 = CONCAT44(DAT_1809efd9c,(undefined4)uStack_2030);
          uStack_2040 = CONCAT44((int)((ulonglong)puVar21[0x13] >> 0x20),DAT_1809efd60);
          if (-1 < DAT_180ceb0f0) {
            lVar22 = DAT_180ceb0f0 % 0x96;
            *(longlong *)(&DAT_1809eeb20 + lVar22 * 0x18) = DAT_180ceb0f0;
            *(undefined4 *)(&DAT_1809eeb28 + lVar22 * 0x18) = uVar1;
            *(undefined4 *)(&DAT_1809eeb2c + lVar22 * 0x18) = (undefined4)local_20c8;
            *(undefined4 *)(&DAT_1809eeb30 + lVar22 * 0x18) = (undefined4)local_2038;
            local_2048._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            *(undefined4 *)(&DAT_1809eeb34 + lVar22 * 0x18) = local_2048._4_4_;
          }
          DAT_180ceb268 = *param_3;
          DAT_180ceb270 = DAT_180ceb268;
          DAT_180ceb370 = param_4;
          local_2048 = uVar2;
          FUN_1801fbad0(param_2,&local_20d8);
          *param_3 = DAT_180ceb268;
          DAT_180cc45b5 = 0;
          FUN_1801fd810(&DAT_1809efa10,local_898);
          DAT_180cc412d = uVar13;
          FUN_1801fd810(&DAT_1809f01d0,local_1058);
          DAT_180cc45b6 = local_2108;
          DAT_180cc412c = local_2107;
          DAT_1809efa00 = local_1fe8;
          DAT_180cc412b = local_2106;
          DAT_180cc45ec = local_2105;
          DAT_180cc412e = local_2104;
          DAT_180cc412a = local_2103;
          DAT_180cc412f = local_2102;
          DAT_180cc45b4 = local_2101;
          DAT_180cc45b7 = local_2100;
          DAT_180ceb258 = local_1fe0;
          DAT_180ceb0e8 = local_1fd8;
          DAT_180ceb0e4 = local_20f0;
          DAT_180ceb250 = local_20ec;
          DAT_180ceb254 = local_20e8;
          DAT_180ceb368 = local_20e4;
          DAT_180ceb268 = local_1fd0;
          _DAT_1809ef9a0 = uVar4;
          _DAT_1809ef9a8 = uVar5;
          _DAT_1809ef9b0 = uVar6;
          _DAT_1809ef9b8 = uVar7;
          _DAT_1809ef9c0 = uVar8;
          _DAT_1809ef9c8 = uVar9;
          DAT_1809ef9d0 = uVar10;
          _DAT_1809ef9d8 = uVar11;
          _DAT_1809ef9e0 = uVar12;
          DAT_180ceb100 = uVar14;
          DAT_180ceb264 = uVar15;
          DAT_180ceb270 = uVar16;
          DAT_180ceb360 = uVar17;
          DAT_180ceb370 = uVar18;
          FUN_180540530(&DAT_1809eeb20,local_1eb8,0xe10);
          DAT_180ceb0f0 = local_1fc8;
          _DAT_180ceb3f0 = local_10a8;
          _DAT_180ceb3f8 = uStack_10a0;
          _DAT_180ceb400 = local_1098;
          _DAT_180ceb408 = uStack_1090;
          DAT_180ceb410 = local_1088;
          DAT_180ceb414 = local_1084;
          DAT_180ceb415 = local_1083;
          DAT_180ceb418 = local_1080;
          DAT_180ceb420 = local_1078;
          FUN_1802009d0(&DAT_180ceb428,local_1070,
                        (local_1068 - local_1070 >> 3) * -0x71c71c71c71c71c7);
          DAT_1809ef930 = local_1fc0;
          DAT_1809eea68 = local_1fb8;
          DAT_1809ef998 = (undefined4)local_20f8;
          FUN_180200b70(&local_1070);
          FUN_1800244c0(local_dc0);
          FUN_1800244c0(local_600);
        }
      }
    }
  }
  return;
}



/* ===== 1801fcbf0 FUN_1801fcbf0 ===== */

undefined8 * FUN_1801fcbf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x73);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0xa9);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0xaa);
  *(undefined1 *)((longlong)param_1 + 0xab) = *(undefined1 *)((longlong)param_2 + 0xab);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_1[0x1a] = param_2[0x1a];
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0xdc) = *(undefined1 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_1[0x1e] = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  param_1[0x21] = param_2[0x21];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  param_1[0x23] = param_2[0x23];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  param_1[0x25] = param_2[0x25];
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x139) = *(undefined1 *)((longlong)param_2 + 0x139);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x16c) = *(undefined1 *)((longlong)param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x174) = *(undefined1 *)((longlong)param_2 + 0x174);
  uVar1 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar1;
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  uVar1 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = uVar1;
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x1bc);
  *(undefined8 *)((longlong)param_1 + 0x1b4) = *(undefined8 *)((longlong)param_2 + 0x1b4);
  *(undefined8 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = *(undefined8 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
  param_1[0x3a] = param_2[0x3a];
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)((longlong)param_2 + 0x1dc);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0x1e1) = *(undefined1 *)((longlong)param_2 + 0x1e1);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)((longlong)param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x3d);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)((longlong)param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  param_1[0x3f] = param_2[0x3f];
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)((longlong)param_1 + 0x201) = *(undefined1 *)((longlong)param_2 + 0x201);
  *(undefined1 *)((longlong)param_1 + 0x202) = *(undefined1 *)((longlong)param_2 + 0x202);
  *(undefined1 *)((longlong)param_1 + 0x203) = *(undefined1 *)((longlong)param_2 + 0x203);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)((longlong)param_2 + 0x20c);
  param_1[0x42] = param_2[0x42];
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined8 *)((longlong)param_1 + 0x21c) = *(undefined8 *)((longlong)param_2 + 0x21c);
  *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)((longlong)param_2 + 0x224);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)((longlong)param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x46);
  *(undefined8 *)((longlong)param_1 + 0x234) = *(undefined8 *)((longlong)param_2 + 0x234);
  *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)((longlong)param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)((longlong)param_2 + 0x244);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)((longlong)param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_2 + 0x4a);
  *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)((longlong)param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
  *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)((longlong)param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x264) = *(undefined4 *)((longlong)param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(param_2 + 0x4d);
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)((longlong)param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(param_2 + 0x4e);
  *(undefined4 *)((longlong)param_1 + 0x274) = *(undefined4 *)((longlong)param_2 + 0x274);
  param_1[0x4f] = param_2[0x4f];
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)((longlong)param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  *(undefined2 *)((longlong)param_1 + 0x28c) = *(undefined2 *)((longlong)param_2 + 0x28c);
  *(undefined1 *)((longlong)param_1 + 0x28e) = *(undefined1 *)((longlong)param_2 + 0x28e);
  *(undefined1 *)((longlong)param_1 + 0x28f) = *(undefined1 *)((longlong)param_2 + 0x28f);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  if (param_2[0x54] - param_2[0x53] != 0) {
    uVar5 = (longlong)(param_2[0x54] - param_2[0x53]) >> 4;
    if (0xfffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar6 = uVar5 * 0x10;
    lVar2 = FUN_18000fb70(lVar6);
    param_1[0x53] = lVar2;
    param_1[0x54] = lVar2;
    param_1[0x55] = lVar2 + lVar6;
    lVar2 = param_1[0x53];
    uVar5 = param_2[0x54] - param_2[0x53];
    FUN_180540530(lVar2,param_2[0x53],uVar5);
    param_1[0x54] = (uVar5 & 0xfffffffffffffff0) + lVar2;
  }
  param_1[0x56] = param_2[0x56];
  param_1[0x57] = param_2[0x57];
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)((longlong)param_2 + 0x2c4);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x2c9) = *(undefined1 *)((longlong)param_2 + 0x2c9);
  *(undefined1 *)((longlong)param_1 + 0x2ca) = *(undefined1 *)((longlong)param_2 + 0x2ca);
  *(undefined1 *)((longlong)param_1 + 0x2cb) = *(undefined1 *)((longlong)param_2 + 0x2cb);
  *(undefined1 *)((longlong)param_1 + 0x2cc) = *(undefined1 *)((longlong)param_2 + 0x2cc);
  *(undefined1 *)((longlong)param_1 + 0x2cd) = *(undefined1 *)((longlong)param_2 + 0x2cd);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x5a);
  *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)((longlong)param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)((longlong)param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)((longlong)param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x5d);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)((longlong)param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
  *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x5f);
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x61);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0x62);
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)((longlong)param_2 + 0x314);
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_2 + 99);
  *(undefined4 *)((longlong)param_1 + 0x31c) = *(undefined4 *)((longlong)param_2 + 0x31c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)((longlong)param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x65) = *(undefined4 *)(param_2 + 0x65);
  *(undefined4 *)((longlong)param_1 + 0x32c) = *(undefined4 *)((longlong)param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)((longlong)param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x67);
  *(undefined4 *)((longlong)param_1 + 0x33c) = *(undefined4 *)((longlong)param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x344) = *(undefined4 *)((longlong)param_2 + 0x344);
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
  lVar2 = 5;
  *(undefined1 *)((longlong)param_1 + 0x349) = *(undefined1 *)((longlong)param_2 + 0x349);
  *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)((longlong)param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined4 *)((longlong)param_1 + 0x354) = *(undefined4 *)((longlong)param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x6b);
  *(undefined4 *)((longlong)param_1 + 0x35c) = *(undefined4 *)((longlong)param_2 + 0x35c);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x364) = *(undefined4 *)((longlong)param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(param_2 + 0x6d);
  *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)((longlong)param_2 + 0x36c);
  *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined4 *)((longlong)param_1 + 0x374) = *(undefined4 *)((longlong)param_2 + 0x374);
  *(undefined4 *)(param_1 + 0x6f) = *(undefined4 *)(param_2 + 0x6f);
  *(undefined1 *)((longlong)param_1 + 0x37c) = *(undefined1 *)((longlong)param_2 + 0x37c);
  *(undefined1 *)((longlong)param_1 + 0x37d) = *(undefined1 *)((longlong)param_2 + 0x37d);
  *(undefined1 *)((longlong)param_1 + 0x37e) = *(undefined1 *)((longlong)param_2 + 0x37e);
  *(undefined1 *)((longlong)param_1 + 0x37f) = *(undefined1 *)((longlong)param_2 + 0x37f);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)((longlong)param_1 + 0x381) = *(undefined1 *)((longlong)param_2 + 0x381);
  *(undefined1 *)((longlong)param_1 + 0x382) = *(undefined1 *)((longlong)param_2 + 0x382);
  *(undefined1 *)((longlong)param_1 + 899) = *(undefined1 *)((longlong)param_2 + 899);
  *(undefined1 *)((longlong)param_1 + 900) = *(undefined1 *)((longlong)param_2 + 900);
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(param_2 + 0x71);
  *(undefined4 *)((longlong)param_1 + 0x38c) = *(undefined4 *)((longlong)param_2 + 0x38c);
  *(undefined4 *)(param_1 + 0x72) = *(undefined4 *)(param_2 + 0x72);
  *(undefined4 *)((longlong)param_1 + 0x394) = *(undefined4 *)((longlong)param_2 + 0x394);
  puVar3 = param_1 + 0x73;
  puVar4 = param_2 + 0x73;
  do {
    uVar1 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar1;
    uVar1 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar1;
    uVar1 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar1;
    uVar1 = puVar4[7];
    puVar3[6] = puVar4[6];
    puVar3[7] = uVar1;
    uVar1 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar3[10] = puVar4[10];
    puVar3[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar3[0xc] = puVar4[0xc];
    puVar3[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar3[0xe] = puVar4[0xe];
    puVar3[0xf] = uVar1;
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 0x10;
    puVar4 = puVar4 + 0x10;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0xc3) = *(undefined4 *)(param_2 + 0xc3);
  lVar2 = 2;
  *(undefined4 *)((longlong)param_1 + 0x61c) = *(undefined4 *)((longlong)param_2 + 0x61c);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)((longlong)param_1 + 0x624) = *(undefined4 *)((longlong)param_2 + 0x624);
  *(undefined4 *)(param_1 + 0xc5) = *(undefined4 *)(param_2 + 0xc5);
  puVar3 = (undefined8 *)((longlong)param_1 + 0x62c);
  puVar4 = (undefined8 *)((longlong)param_2 + 0x62c);
  do {
    uVar1 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar1;
    uVar1 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar1;
    uVar1 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar1;
    uVar1 = puVar4[7];
    puVar3[6] = puVar4[6];
    puVar3[7] = uVar1;
    uVar1 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar3[10] = puVar4[10];
    puVar3[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar3[0xc] = puVar4[0xc];
    puVar3[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar3[0xe] = puVar4[0xe];
    puVar3[0xf] = uVar1;
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 0x10;
    puVar4 = puVar4 + 0x10;
  } while (lVar2 != 0);
  *(undefined4 *)((longlong)param_1 + 0x72c) = *(undefined4 *)((longlong)param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0xe6) = *(undefined4 *)(param_2 + 0xe6);
  *(undefined4 *)((longlong)param_1 + 0x734) = *(undefined4 *)((longlong)param_2 + 0x734);
  *(undefined4 *)(param_1 + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)((longlong)param_1 + 0x73c) = *(undefined4 *)((longlong)param_2 + 0x73c);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined1 *)((longlong)param_1 + 0x744) = *(undefined1 *)((longlong)param_2 + 0x744);
  *(undefined4 *)(param_1 + 0xe9) = *(undefined4 *)(param_2 + 0xe9);
  *(undefined1 *)((longlong)param_1 + 0x74c) = *(undefined1 *)((longlong)param_2 + 0x74c);
  *(undefined4 *)(param_1 + 0xea) = *(undefined4 *)(param_2 + 0xea);
  uVar1 = param_2[0xec];
  param_1[0xeb] = param_2[0xeb];
  param_1[0xec] = uVar1;
  uVar1 = param_2[0xee];
  param_1[0xed] = param_2[0xed];
  param_1[0xee] = uVar1;
  uVar1 = param_2[0xf0];
  param_1[0xef] = param_2[0xef];
  param_1[0xf0] = uVar1;
  uVar1 = param_2[0xf2];
  param_1[0xf1] = param_2[0xf1];
  param_1[0xf2] = uVar1;
  uVar1 = param_2[0xf4];
  param_1[0xf3] = param_2[0xf3];
  param_1[0xf4] = uVar1;
  uVar1 = param_2[0xf6];
  param_1[0xf5] = param_2[0xf5];
  param_1[0xf6] = uVar1;
  param_1[0xf7] = param_2[0xf7];
  return param_1;
}



/* ===== 1801fd810 FUN_1801fd810 ===== */

undefined8 * FUN_1801fd810(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 9);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 9) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x73);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0xa9);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0xaa);
  *(undefined1 *)((longlong)param_1 + 0xab) = *(undefined1 *)((longlong)param_2 + 0xab);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_1[0x1a] = param_2[0x1a];
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0xdc) = *(undefined1 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_1[0x1e] = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  param_1[0x21] = param_2[0x21];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  param_1[0x23] = param_2[0x23];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  param_1[0x25] = param_2[0x25];
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x139) = *(undefined1 *)((longlong)param_2 + 0x139);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x16c) = *(undefined1 *)((longlong)param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x174) = *(undefined1 *)((longlong)param_2 + 0x174);
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_2 + 0x1cc);
  param_1[0x3a] = param_2[0x3a];
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)((longlong)param_2 + 0x1dc);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0x1e1) = *(undefined1 *)((longlong)param_2 + 0x1e1);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)((longlong)param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x3d);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)((longlong)param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  param_1[0x3f] = param_2[0x3f];
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)((longlong)param_1 + 0x201) = *(undefined1 *)((longlong)param_2 + 0x201);
  *(undefined1 *)((longlong)param_1 + 0x202) = *(undefined1 *)((longlong)param_2 + 0x202);
  *(undefined1 *)((longlong)param_1 + 0x203) = *(undefined1 *)((longlong)param_2 + 0x203);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)((longlong)param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined8 *)((longlong)param_1 + 0x21c) = *(undefined8 *)((longlong)param_2 + 0x21c);
  *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)((longlong)param_2 + 0x224);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)((longlong)param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x234) = *(undefined4 *)((longlong)param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)((longlong)param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)((longlong)param_2 + 0x244);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)((longlong)param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_2 + 0x4a);
  *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)((longlong)param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)(param_2 + 0x4b);
  *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)((longlong)param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x264) = *(undefined4 *)((longlong)param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(param_2 + 0x4d);
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)((longlong)param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(param_2 + 0x4e);
  *(undefined4 *)((longlong)param_1 + 0x274) = *(undefined4 *)((longlong)param_2 + 0x274);
  param_1[0x4f] = param_2[0x4f];
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)((longlong)param_2 + 0x284);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x289) = *(undefined1 *)((longlong)param_2 + 0x289);
  *(undefined1 *)((longlong)param_1 + 0x28a) = *(undefined1 *)((longlong)param_2 + 0x28a);
  *(undefined1 *)((longlong)param_1 + 0x28b) = *(undefined1 *)((longlong)param_2 + 0x28b);
  *(undefined1 *)((longlong)param_1 + 0x28c) = *(undefined1 *)((longlong)param_2 + 0x28c);
  *(undefined1 *)((longlong)param_1 + 0x28d) = *(undefined1 *)((longlong)param_2 + 0x28d);
  *(undefined1 *)((longlong)param_1 + 0x28e) = *(undefined1 *)((longlong)param_2 + 0x28e);
  *(undefined1 *)((longlong)param_1 + 0x28f) = *(undefined1 *)((longlong)param_2 + 0x28f);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  if (param_1 != param_2) {
    lVar8 = param_1[0x53];
    lVar7 = param_2[0x53];
    uVar9 = param_2[0x54] - lVar7 >> 4;
    if ((ulonglong)(param_1[0x55] - lVar8 >> 4) < uVar9) {
      FUN_180200df0(param_1 + 0x53,uVar9);
      lVar8 = param_1[0x53];
      lVar10 = uVar9 << 4;
      FUN_180540530(lVar8,lVar7,lVar10);
    }
    else {
      uVar11 = param_1[0x54] - lVar8 >> 4;
      if (uVar11 < uVar9) {
        FUN_180540530(lVar8,lVar7,uVar11 * 0x10);
        lVar8 = param_1[0x54];
        lVar10 = (uVar9 - uVar11) * 0x10;
        FUN_180540530(lVar8,uVar11 * 0x10 + lVar7,lVar10);
      }
      else {
        lVar10 = uVar9 << 4;
        FUN_180540530(lVar8,lVar7,lVar10);
      }
    }
    param_1[0x54] = lVar10 + lVar8;
  }
  param_1[0x56] = param_2[0x56];
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x57);
  *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)((longlong)param_2 + 700);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)((longlong)param_2 + 0x2c4);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x2c9) = *(undefined1 *)((longlong)param_2 + 0x2c9);
  *(undefined1 *)((longlong)param_1 + 0x2ca) = *(undefined1 *)((longlong)param_2 + 0x2ca);
  *(undefined1 *)((longlong)param_1 + 0x2cb) = *(undefined1 *)((longlong)param_2 + 0x2cb);
  *(undefined1 *)((longlong)param_1 + 0x2cc) = *(undefined1 *)((longlong)param_2 + 0x2cc);
  *(undefined1 *)((longlong)param_1 + 0x2cd) = *(undefined1 *)((longlong)param_2 + 0x2cd);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x5a);
  *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)((longlong)param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)((longlong)param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)((longlong)param_2 + 0x2e4);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x5d);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)((longlong)param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_2 + 0x5e);
  *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_2 + 0x5f);
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)param_2 + 0x2fc);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_2 + 0x61);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_2 + 0x30c);
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_2 + 0x62);
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)((longlong)param_2 + 0x314);
  *(undefined4 *)(param_1 + 99) = *(undefined4 *)(param_2 + 99);
  *(undefined4 *)((longlong)param_1 + 0x31c) = *(undefined4 *)((longlong)param_2 + 0x31c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)((longlong)param_1 + 0x324) = *(undefined4 *)((longlong)param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x65) = *(undefined4 *)(param_2 + 0x65);
  *(undefined4 *)((longlong)param_1 + 0x32c) = *(undefined4 *)((longlong)param_2 + 0x32c);
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)((longlong)param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x67);
  *(undefined4 *)((longlong)param_1 + 0x33c) = *(undefined4 *)((longlong)param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x344) = *(undefined4 *)((longlong)param_2 + 0x344);
  lVar7 = 5;
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
  *(undefined1 *)((longlong)param_1 + 0x349) = *(undefined1 *)((longlong)param_2 + 0x349);
  *(undefined4 *)((longlong)param_1 + 0x34c) = *(undefined4 *)((longlong)param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_2 + 0x6a);
  *(undefined4 *)((longlong)param_1 + 0x354) = *(undefined4 *)((longlong)param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x6b);
  *(undefined4 *)((longlong)param_1 + 0x35c) = *(undefined4 *)((longlong)param_2 + 0x35c);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x364) = *(undefined4 *)((longlong)param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(param_2 + 0x6d);
  *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)((longlong)param_2 + 0x36c);
  *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)(param_2 + 0x6e);
  *(undefined4 *)((longlong)param_1 + 0x374) = *(undefined4 *)((longlong)param_2 + 0x374);
  *(undefined4 *)(param_1 + 0x6f) = *(undefined4 *)(param_2 + 0x6f);
  *(undefined1 *)((longlong)param_1 + 0x37c) = *(undefined1 *)((longlong)param_2 + 0x37c);
  *(undefined1 *)((longlong)param_1 + 0x37d) = *(undefined1 *)((longlong)param_2 + 0x37d);
  *(undefined1 *)((longlong)param_1 + 0x37e) = *(undefined1 *)((longlong)param_2 + 0x37e);
  *(undefined1 *)((longlong)param_1 + 0x37f) = *(undefined1 *)((longlong)param_2 + 0x37f);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)((longlong)param_1 + 0x381) = *(undefined1 *)((longlong)param_2 + 0x381);
  *(undefined1 *)((longlong)param_1 + 0x382) = *(undefined1 *)((longlong)param_2 + 0x382);
  *(undefined1 *)((longlong)param_1 + 899) = *(undefined1 *)((longlong)param_2 + 899);
  *(undefined1 *)((longlong)param_1 + 900) = *(undefined1 *)((longlong)param_2 + 900);
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(param_2 + 0x71);
  *(undefined4 *)((longlong)param_1 + 0x38c) = *(undefined4 *)((longlong)param_2 + 0x38c);
  *(undefined4 *)(param_1 + 0x72) = *(undefined4 *)(param_2 + 0x72);
  *(undefined4 *)((longlong)param_1 + 0x394) = *(undefined4 *)((longlong)param_2 + 0x394);
  puVar5 = param_1 + 0x73;
  puVar6 = param_2 + 0x73;
  do {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    uVar4 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar4;
    uVar4 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar4;
    uVar4 = puVar6[7];
    puVar5[6] = puVar6[6];
    puVar5[7] = uVar4;
    uVar4 = puVar6[9];
    puVar5[8] = puVar6[8];
    puVar5[9] = uVar4;
    uVar4 = puVar6[0xb];
    puVar5[10] = puVar6[10];
    puVar5[0xb] = uVar4;
    uVar4 = puVar6[0xd];
    puVar5[0xc] = puVar6[0xc];
    puVar5[0xd] = uVar4;
    uVar4 = puVar6[0xf];
    puVar5[0xe] = puVar6[0xe];
    puVar5[0xf] = uVar4;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0xc3) = *(undefined4 *)(param_2 + 0xc3);
  lVar7 = 2;
  *(undefined4 *)((longlong)param_1 + 0x61c) = *(undefined4 *)((longlong)param_2 + 0x61c);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)((longlong)param_1 + 0x624) = *(undefined4 *)((longlong)param_2 + 0x624);
  *(undefined4 *)(param_1 + 0xc5) = *(undefined4 *)(param_2 + 0xc5);
  puVar5 = (undefined8 *)((longlong)param_1 + 0x62c);
  puVar6 = (undefined8 *)((longlong)param_2 + 0x62c);
  do {
    uVar4 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar4;
    uVar4 = puVar6[3];
    puVar5[2] = puVar6[2];
    puVar5[3] = uVar4;
    uVar4 = puVar6[5];
    puVar5[4] = puVar6[4];
    puVar5[5] = uVar4;
    uVar4 = puVar6[7];
    puVar5[6] = puVar6[6];
    puVar5[7] = uVar4;
    uVar4 = puVar6[9];
    puVar5[8] = puVar6[8];
    puVar5[9] = uVar4;
    uVar4 = puVar6[0xb];
    puVar5[10] = puVar6[10];
    puVar5[0xb] = uVar4;
    uVar4 = puVar6[0xd];
    puVar5[0xc] = puVar6[0xc];
    puVar5[0xd] = uVar4;
    uVar4 = puVar6[0xf];
    puVar5[0xe] = puVar6[0xe];
    puVar5[0xf] = uVar4;
    lVar7 = lVar7 + -1;
    puVar5 = puVar5 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar7 != 0);
  *(undefined4 *)((longlong)param_1 + 0x72c) = *(undefined4 *)((longlong)param_2 + 0x72c);
  *(undefined4 *)(param_1 + 0xe6) = *(undefined4 *)(param_2 + 0xe6);
  *(undefined4 *)((longlong)param_1 + 0x734) = *(undefined4 *)((longlong)param_2 + 0x734);
  *(undefined4 *)(param_1 + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)((longlong)param_1 + 0x73c) = *(undefined4 *)((longlong)param_2 + 0x73c);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined1 *)((longlong)param_1 + 0x744) = *(undefined1 *)((longlong)param_2 + 0x744);
  *(undefined4 *)(param_1 + 0xe9) = *(undefined4 *)(param_2 + 0xe9);
  *(undefined1 *)((longlong)param_1 + 0x74c) = *(undefined1 *)((longlong)param_2 + 0x74c);
  *(undefined4 *)(param_1 + 0xea) = *(undefined4 *)(param_2 + 0xea);
  uVar4 = param_2[0xec];
  param_1[0xeb] = param_2[0xeb];
  param_1[0xec] = uVar4;
  uVar4 = param_2[0xee];
  param_1[0xed] = param_2[0xed];
  param_1[0xee] = uVar4;
  uVar4 = param_2[0xf0];
  param_1[0xef] = param_2[0xef];
  param_1[0xf0] = uVar4;
  uVar4 = param_2[0xf2];
  param_1[0xf1] = param_2[0xf1];
  param_1[0xf2] = uVar4;
  uVar4 = param_2[0xf4];
  param_1[0xf3] = param_2[0xf3];
  param_1[0xf4] = uVar4;
  uVar4 = param_2[0xf6];
  param_1[0xf5] = param_2[0xf5];
  param_1[0xf6] = uVar4;
  param_1[0xf7] = param_2[0xf7];
  return param_1;
}



/* ===== 1801fe500 FUN_1801fe500 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fe500(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  float *pfVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_568;
  float local_560 [4];
  float local_550;
  float local_54c;
  float local_548;
  char local_538 [128];
  float local_4b8 [292];
  
  fVar18 = DAT_180ceb300;
  fVar5 = DAT_1808ac34c;
  if (DAT_1809ef9a1 == '\0') {
    if (DAT_180ceb304 == '\0') {
      DAT_180ceb304 = '\x01';
      DAT_180ceb300 = 0.0;
    }
    if (DAT_180ceb308 == 0.0) {
    }
    else {
      _DAT_180ceb310 = 0.0;
      if (DAT_180ceb300 <= 0.0) {
        _DAT_180ceb310 = DAT_180ceb300;
      }
      DAT_180ceb308 = 0.0;
      DAT_180ceb314 = 0.0;
      if (0.0 <= DAT_180ceb300) {
        DAT_180ceb314 = DAT_180ceb300;
      }
      DAT_180ceb30c = 0.0;
      _DAT_180ceb308 = 0;
    }
    if (DAT_1808abf7c < (float)((uint)(DAT_180ceb300 - DAT_180ceb308) & _DAT_1808ade90)) {
      fVar18 = DAT_180ceb30c + *(float *)(DAT_180ca0a50 + 0x40);
      _DAT_180ceb308 = CONCAT44(fVar18,DAT_180ceb308);
      if (fVar18 < DAT_1808ac118) {
        fVar18 = fVar18 / DAT_1808ac118;
        local_568 = CONCAT44(local_568._4_4_,0x3f800000);
        local_560[2] = 0.0;
        local_560[0] = fVar18;
        pfVar13 = local_560 + 2;
        if (0.0 <= fVar18) {
          pfVar13 = local_560;
        }
        pfVar12 = (float *)&local_568;
        if (fVar18 <= DAT_1808ac34c) {
          pfVar12 = pfVar13;
        }
        fVar18 = DAT_1808ac34c - *pfVar12;
        DAT_180ceb300 =
             DAT_180ceb314 - (DAT_1808ac34c - fVar18 * fVar18 * fVar18) * (DAT_180ceb314 - 0.0);
      }
      else {
        DAT_180ceb300 = 0.0;
      }
    }
  }
  else {
    _DAT_180ceb310 = DAT_1808ac34c;
    if (DAT_180ceb300 <= DAT_1808ac34c) {
      _DAT_180ceb310 = DAT_180ceb300;
    }
    DAT_180ceb304 = '\x01';
    _DAT_180ceb308 = 0x3f800000;
    DAT_180ceb300 = 1.0;
    DAT_180ceb314 = DAT_1808ac34c;
    if (DAT_1808ac34c <= fVar18) {
      DAT_180ceb314 = fVar18;
    }
  }
  if (param_1 != 0) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_568);
      DAT_181108a00 = local_568;
      DAT_1811089f8 = FUN_1803a0c50(&local_568);
      DAT_180cd1304 = '\x01';
    }
    if ((((DAT_1811089f8 != 0) && (DAT_180ca09f0 != 0)) &&
        (iVar8 = FUN_180011200((ulonglong)DAT_180ca09f0 + DAT_1811089f8), iVar8 - 1U < 1000)) &&
       (0.0 < DAT_180ceb300)) {
      fVar20 = DAT_1809ef9a4 - _DAT_1809ef9b0;
      fVar21 = DAT_1809ef9a8 - _DAT_1809ef9b4;
      fVar22 = DAT_1809ef9ac - _DAT_1809ef9b8;
      local_550 = DAT_1809ef9a4;
      local_54c = DAT_1809ef9a8;
      local_548 = DAT_1809ef9ac;
      fVar18 = DAT_1808ac988;
      if (fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22 <= DAT_1808ac988) {
        local_560[2] = 1.0;
        local_568 = local_568 & 0xffffffff00000000;
        plVar11 = (longlong *)FUN_1800ad890(local_560);
        fVar18 = (float)(((double)*plVar11 / DAT_1808ac9a0 - _DAT_1809ef9c0) * DAT_1808ac698);
        local_560[0] = fVar18;
        pfVar13 = (float *)&local_568;
        if (0.0 <= fVar18) {
          pfVar13 = local_560;
        }
        pfVar12 = local_560 + 2;
        if (fVar18 <= fVar5) {
          pfVar12 = pfVar13;
        }
        fVar18 = *pfVar12;
        local_550 = fVar20 * fVar18 + _DAT_1809ef9b0;
        local_54c = fVar21 * fVar18 + _DAT_1809ef9b4;
        local_548 = fVar22 * fVar18 + _DAT_1809ef9b8;
      }
      fVar6 = local_548;
      fVar22 = local_54c;
      fVar21 = local_550;
      uVar9 = FUN_1801fedb0(fVar18,DAT_18095cdb8,DAT_18095cdbc,DAT_18095cdc0,
                            DAT_180ceb300 * _DAT_18095cdc4);
      uVar10 = FUN_1801fedb0();
      uVar2 = DAT_1811079b4;
      uVar1 = DAT_1811079b0;
      lVar14 = (longlong)DAT_181107a00;
      local_560[0] = 0.0;
      local_560[1] = 0.0;
      cVar7 = FUN_1803a1bf0(&DAT_181107930 + lVar14 * 0x40,&local_550,local_560,DAT_1811079b0,
                            DAT_1811079b4);
      fVar20 = DAT_1808acb24;
      fVar18 = DAT_1808ac980;
      fVar5 = DAT_1808ac7c8;
      if (cVar7 != '\0') {
        uVar16 = 0;
        local_4b8[0] = 0.0;
        local_4b8[1] = 0.0;
        local_4b8[2] = 0.0;
        local_4b8[3] = 0.0;
        local_4b8[4] = 0.0;
        local_4b8[5] = 0.0;
        local_4b8[6] = 0.0;
        local_4b8[7] = 0.0;
        local_4b8[8] = 0.0;
        local_4b8[9] = 0.0;
        local_4b8[10] = 0.0;
        local_4b8[0xb] = 0.0;
        local_4b8[0xc] = 0.0;
        local_4b8[0xd] = 0.0;
        local_4b8[0xe] = 0.0;
        local_4b8[0xf] = 0.0;
        local_4b8[0x10] = 0.0;
        local_4b8[0x11] = 0.0;
        local_4b8[0x12] = 0.0;
        local_4b8[0x13] = 0.0;
        local_4b8[0x14] = 0.0;
        local_4b8[0x15] = 0.0;
        local_4b8[0x16] = 0.0;
        local_4b8[0x17] = 0.0;
        local_4b8[0x18] = 0.0;
        local_4b8[0x19] = 0.0;
        local_4b8[0x1a] = 0.0;
        local_4b8[0x1b] = 0.0;
        local_4b8[0x1c] = 0.0;
        local_4b8[0x1d] = 0.0;
        local_4b8[0x1e] = 0.0;
        local_4b8[0x1f] = 0.0;
        local_4b8[0x20] = 0.0;
        local_4b8[0x21] = 0.0;
        local_4b8[0x22] = 0.0;
        local_4b8[0x23] = 0.0;
        local_4b8[0x24] = 0.0;
        local_4b8[0x25] = 0.0;
        local_4b8[0x26] = 0.0;
        local_4b8[0x27] = 0.0;
        local_4b8[0x28] = 0.0;
        local_4b8[0x29] = 0.0;
        local_4b8[0x2a] = 0.0;
        local_4b8[0x2b] = 0.0;
        local_4b8[0x2c] = 0.0;
        local_4b8[0x2d] = 0.0;
        local_4b8[0x2e] = 0.0;
        local_4b8[0x2f] = 0.0;
        local_4b8[0x30] = 0.0;
        local_4b8[0x31] = 0.0;
        local_4b8[0x32] = 0.0;
        local_4b8[0x33] = 0.0;
        local_4b8[0x34] = 0.0;
        local_4b8[0x35] = 0.0;
        local_4b8[0x36] = 0.0;
        local_4b8[0x37] = 0.0;
        local_4b8[0x38] = 0.0;
        local_4b8[0x39] = 0.0;
        local_4b8[0x3a] = 0.0;
        local_4b8[0x3b] = 0.0;
        local_4b8[0x3c] = 0.0;
        local_4b8[0x3d] = 0.0;
        local_4b8[0x3e] = 0.0;
        local_4b8[0x3f] = 0.0;
        local_4b8[0x40] = 0.0;
        local_4b8[0x41] = 0.0;
        local_4b8[0x42] = 0.0;
        local_4b8[0x43] = 0.0;
        local_4b8[0x44] = 0.0;
        local_4b8[0x45] = 0.0;
        local_4b8[0x46] = 0.0;
        local_4b8[0x47] = 0.0;
        local_4b8[0x48] = 0.0;
        local_4b8[0x49] = 0.0;
        local_4b8[0x4a] = 0.0;
        local_4b8[0x4b] = 0.0;
        local_4b8[0x4c] = 0.0;
        local_4b8[0x4d] = 0.0;
        local_4b8[0x4e] = 0.0;
        local_4b8[0x4f] = 0.0;
        local_4b8[0x50] = 0.0;
        local_4b8[0x51] = 0.0;
        local_4b8[0x52] = 0.0;
        local_4b8[0x53] = 0.0;
        local_4b8[0x54] = 0.0;
        local_4b8[0x55] = 0.0;
        local_4b8[0x56] = 0.0;
        local_4b8[0x57] = 0.0;
        local_4b8[0x58] = 0.0;
        local_4b8[0x59] = 0.0;
        local_4b8[0x5a] = 0.0;
        local_4b8[0x5b] = 0.0;
        local_4b8[0x5c] = 0.0;
        local_4b8[0x5d] = 0.0;
        local_4b8[0x5e] = 0.0;
        local_4b8[0x5f] = 0.0;
        local_4b8[0x60] = 0.0;
        local_4b8[0x61] = 0.0;
        local_4b8[0x62] = 0.0;
        local_4b8[99] = 0.0;
        local_4b8[100] = 0.0;
        local_4b8[0x65] = 0.0;
        local_4b8[0x66] = 0.0;
        local_4b8[0x67] = 0.0;
        local_4b8[0x68] = 0.0;
        local_4b8[0x69] = 0.0;
        local_4b8[0x6a] = 0.0;
        local_4b8[0x6b] = 0.0;
        local_4b8[0x6c] = 0.0;
        local_4b8[0x6d] = 0.0;
        local_4b8[0x6e] = 0.0;
        local_4b8[0x6f] = 0.0;
        local_4b8[0x70] = 0.0;
        local_4b8[0x71] = 0.0;
        local_4b8[0x72] = 0.0;
        local_4b8[0x73] = 0.0;
        local_4b8[0x74] = 0.0;
        local_4b8[0x75] = 0.0;
        local_4b8[0x76] = 0.0;
        local_4b8[0x77] = 0.0;
        local_4b8[0x78] = 0.0;
        local_4b8[0x79] = 0.0;
        local_4b8[0x7a] = 0.0;
        local_4b8[0x7b] = 0.0;
        local_4b8[0x7c] = 0.0;
        local_4b8[0x7d] = 0.0;
        local_4b8[0x7e] = 0.0;
        local_4b8[0x7f] = 0.0;
        local_4b8[0x80] = 0.0;
        local_4b8[0x81] = 0.0;
        local_4b8[0x82] = 0.0;
        local_4b8[0x83] = 0.0;
        local_4b8[0x84] = 0.0;
        local_4b8[0x85] = 0.0;
        local_4b8[0x86] = 0.0;
        local_4b8[0x87] = 0.0;
        local_4b8[0x88] = 0.0;
        local_4b8[0x89] = 0.0;
        local_4b8[0x8a] = 0.0;
        local_4b8[0x8b] = 0.0;
        local_4b8[0x8c] = 0.0;
        local_4b8[0x8d] = 0.0;
        local_4b8[0x8e] = 0.0;
        local_4b8[0x8f] = 0.0;
        local_4b8[0x90] = 0.0;
        local_4b8[0x91] = 0.0;
        local_4b8[0x92] = 0.0;
        local_4b8[0x93] = 0.0;
        local_4b8[0x94] = 0.0;
        local_4b8[0x95] = 0.0;
        local_4b8[0x96] = 0.0;
        local_4b8[0x97] = 0.0;
        local_4b8[0x98] = 0.0;
        local_4b8[0x99] = 0.0;
        local_4b8[0x9a] = 0.0;
        local_4b8[0x9b] = 0.0;
        local_4b8[0x9c] = 0.0;
        local_4b8[0x9d] = 0.0;
        local_4b8[0x9e] = 0.0;
        local_4b8[0x9f] = 0.0;
        local_4b8[0xa0] = 0.0;
        local_4b8[0xa1] = 0.0;
        local_4b8[0xa2] = 0.0;
        local_4b8[0xa3] = 0.0;
        local_4b8[0xa4] = 0.0;
        local_4b8[0xa5] = 0.0;
        local_4b8[0xa6] = 0.0;
        local_4b8[0xa7] = 0.0;
        local_4b8[0xa8] = 0.0;
        local_4b8[0xa9] = 0.0;
        local_4b8[0xaa] = 0.0;
        local_4b8[0xab] = 0.0;
        local_4b8[0xac] = 0.0;
        local_4b8[0xad] = 0.0;
        local_4b8[0xae] = 0.0;
        local_4b8[0xaf] = 0.0;
        local_4b8[0xb0] = 0.0;
        local_4b8[0xb1] = 0.0;
        local_4b8[0xb2] = 0.0;
        local_4b8[0xb3] = 0.0;
        local_4b8[0xb4] = 0.0;
        local_4b8[0xb5] = 0.0;
        local_4b8[0xb6] = 0.0;
        local_4b8[0xb7] = 0.0;
        local_4b8[0xb8] = 0.0;
        local_4b8[0xb9] = 0.0;
        local_4b8[0xba] = 0.0;
        local_4b8[0xbb] = 0.0;
        local_4b8[0xbc] = 0.0;
        local_4b8[0xbd] = 0.0;
        local_4b8[0xbe] = 0.0;
        local_4b8[0xbf] = 0.0;
        local_4b8[0xc0] = 0.0;
        local_4b8[0xc1] = 0.0;
        local_4b8[0xc2] = 0.0;
        local_4b8[0xc3] = 0.0;
        local_4b8[0xc4] = 0.0;
        local_4b8[0xc5] = 0.0;
        local_4b8[0xc6] = 0.0;
        local_4b8[199] = 0.0;
        local_4b8[200] = 0.0;
        local_4b8[0xc9] = 0.0;
        local_4b8[0xca] = 0.0;
        local_4b8[0xcb] = 0.0;
        local_4b8[0xcc] = 0.0;
        local_4b8[0xcd] = 0.0;
        local_4b8[0xce] = 0.0;
        local_4b8[0xcf] = 0.0;
        local_4b8[0xd0] = 0.0;
        local_4b8[0xd1] = 0.0;
        local_4b8[0xd2] = 0.0;
        local_4b8[0xd3] = 0.0;
        local_4b8[0xd4] = 0.0;
        local_4b8[0xd5] = 0.0;
        local_4b8[0xd6] = 0.0;
        local_4b8[0xd7] = 0.0;
        local_4b8[0xd8] = 0.0;
        local_4b8[0xd9] = 0.0;
        local_4b8[0xda] = 0.0;
        local_4b8[0xdb] = 0.0;
        local_4b8[0xdc] = 0.0;
        local_4b8[0xdd] = 0.0;
        local_4b8[0xde] = 0.0;
        local_4b8[0xdf] = 0.0;
        local_4b8[0xe0] = 0.0;
        local_4b8[0xe1] = 0.0;
        local_4b8[0xe2] = 0.0;
        local_4b8[0xe3] = 0.0;
        local_4b8[0xe4] = 0.0;
        local_4b8[0xe5] = 0.0;
        local_4b8[0xe6] = 0.0;
        local_4b8[0xe7] = 0.0;
        local_4b8[0xe8] = 0.0;
        local_4b8[0xe9] = 0.0;
        local_4b8[0xea] = 0.0;
        local_4b8[0xeb] = 0.0;
        local_4b8[0xec] = 0.0;
        local_4b8[0xed] = 0.0;
        local_4b8[0xee] = 0.0;
        local_4b8[0xef] = 0.0;
        local_4b8[0xf0] = 0.0;
        local_4b8[0xf1] = 0.0;
        local_4b8[0xf2] = 0.0;
        local_4b8[0xf3] = 0.0;
        local_4b8[0xf4] = 0.0;
        local_4b8[0xf5] = 0.0;
        local_4b8[0xf6] = 0.0;
        local_4b8[0xf7] = 0.0;
        local_4b8[0xf8] = 0.0;
        local_4b8[0xf9] = 0.0;
        local_4b8[0xfa] = 0.0;
        local_4b8[0xfb] = 0.0;
        local_4b8[0xfc] = 0.0;
        local_4b8[0xfd] = 0.0;
        local_4b8[0xfe] = 0.0;
        local_4b8[0xff] = 0.0;
        local_538[0] = '\0';
        local_538[1] = '\0';
        local_538[2] = '\0';
        local_538[3] = '\0';
        local_538[4] = '\0';
        local_538[5] = '\0';
        local_538[6] = '\0';
        local_538[7] = '\0';
        local_538[8] = '\0';
        local_538[9] = '\0';
        local_538[10] = '\0';
        local_538[0xb] = '\0';
        local_538[0xc] = '\0';
        local_538[0xd] = '\0';
        local_538[0xe] = '\0';
        local_538[0xf] = '\0';
        local_538[0x10] = '\0';
        local_538[0x11] = '\0';
        local_538[0x12] = '\0';
        local_538[0x13] = '\0';
        local_538[0x14] = '\0';
        local_538[0x15] = '\0';
        local_538[0x16] = '\0';
        local_538[0x17] = '\0';
        local_538[0x18] = '\0';
        local_538[0x19] = '\0';
        local_538[0x1a] = '\0';
        local_538[0x1b] = '\0';
        local_538[0x1c] = '\0';
        local_538[0x1d] = '\0';
        local_538[0x1e] = '\0';
        local_538[0x1f] = '\0';
        local_538[0x20] = '\0';
        local_538[0x21] = '\0';
        local_538[0x22] = '\0';
        local_538[0x23] = '\0';
        local_538[0x24] = '\0';
        local_538[0x25] = '\0';
        local_538[0x26] = '\0';
        local_538[0x27] = '\0';
        local_538[0x28] = '\0';
        local_538[0x29] = '\0';
        local_538[0x2a] = '\0';
        local_538[0x2b] = '\0';
        local_538[0x2c] = '\0';
        local_538[0x2d] = '\0';
        local_538[0x2e] = '\0';
        local_538[0x2f] = '\0';
        local_538[0x30] = '\0';
        local_538[0x31] = '\0';
        local_538[0x32] = '\0';
        local_538[0x33] = '\0';
        local_538[0x34] = '\0';
        local_538[0x35] = '\0';
        local_538[0x36] = '\0';
        local_538[0x37] = '\0';
        local_538[0x38] = '\0';
        local_538[0x39] = '\0';
        local_538[0x3a] = '\0';
        local_538[0x3b] = '\0';
        local_538[0x3c] = '\0';
        local_538[0x3d] = '\0';
        local_538[0x3e] = '\0';
        local_538[0x3f] = '\0';
        local_538[0x40] = '\0';
        local_538[0x41] = '\0';
        local_538[0x42] = '\0';
        local_538[0x43] = '\0';
        local_538[0x44] = '\0';
        local_538[0x45] = '\0';
        local_538[0x46] = '\0';
        local_538[0x47] = '\0';
        local_538[0x48] = '\0';
        local_538[0x49] = '\0';
        local_538[0x4a] = '\0';
        local_538[0x4b] = '\0';
        local_538[0x4c] = '\0';
        local_538[0x4d] = '\0';
        local_538[0x4e] = '\0';
        local_538[0x4f] = '\0';
        local_538[0x50] = '\0';
        local_538[0x51] = '\0';
        local_538[0x52] = '\0';
        local_538[0x53] = '\0';
        local_538[0x54] = '\0';
        local_538[0x55] = '\0';
        local_538[0x56] = '\0';
        local_538[0x57] = '\0';
        local_538[0x58] = '\0';
        local_538[0x59] = '\0';
        local_538[0x5a] = '\0';
        local_538[0x5b] = '\0';
        local_538[0x5c] = '\0';
        local_538[0x5d] = '\0';
        local_538[0x5e] = '\0';
        local_538[0x5f] = '\0';
        local_538[0x60] = '\0';
        local_538[0x61] = '\0';
        local_538[0x62] = '\0';
        local_538[99] = '\0';
        local_538[100] = '\0';
        local_538[0x65] = '\0';
        local_538[0x66] = '\0';
        local_538[0x67] = '\0';
        local_538[0x68] = '\0';
        local_538[0x69] = '\0';
        local_538[0x6a] = '\0';
        local_538[0x6b] = '\0';
        local_538[0x6c] = '\0';
        local_538[0x6d] = '\0';
        local_538[0x6e] = '\0';
        local_538[0x6f] = '\0';
        local_538[0x70] = '\0';
        local_538[0x71] = '\0';
        local_538[0x72] = '\0';
        local_538[0x73] = '\0';
        local_538[0x74] = '\0';
        local_538[0x75] = '\0';
        local_538[0x76] = '\0';
        local_538[0x77] = '\0';
        local_538[0x78] = '\0';
        local_538[0x79] = '\0';
        local_538[0x7a] = '\0';
        local_538[0x7b] = '\0';
        local_538[0x7c] = '\0';
        local_538[0x7d] = '\0';
        local_538[0x7e] = '\0';
        local_538[0x7f] = '\0';
        do {
          fVar19 = ((float)(int)uVar16 / fVar20) * fVar5;
          fVar17 = (float)FUN_180517200(fVar19);
          local_550 = fVar17 * fVar18 + fVar21;
          fVar17 = (float)FUN_180517790(fVar19);
          local_54c = fVar17 * fVar18 + fVar22;
          local_568 = 0;
          local_548 = fVar6;
          cVar7 = FUN_1803a1bf0(&DAT_181107930 + lVar14 * 0x40,&local_550,&local_568,uVar1,uVar2);
          local_4b8[uVar16 * 2] = (float)local_568;
          local_4b8[uVar16 * 2 + 1] = local_568._4_4_;
          local_538[uVar16] = cVar7;
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
        } while ((int)uVar15 < 0x80);
        uVar16 = 0;
        fVar5 = local_560[0];
        fVar18 = local_560[1];
        uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0x1218);
        uVar2 = *(undefined4 *)(DAT_180ca0a50 + 0x121c);
        do {
          if (local_538[uVar16] != '\0') {
            uVar15 = (int)uVar16 + 1U & 0x8000007f;
            if ((int)uVar15 < 0) {
              uVar15 = (uVar15 - 1 | 0xffffff80) + 1;
            }
            if (local_538[(int)uVar15] != '\0') {
              FUN_1803fc3a0(param_1,3,3);
              sVar4 = *(short *)(param_1 + 0x34);
              uVar3 = *(undefined8 *)(local_4b8 + uVar16 * 2);
              **(short **)(param_1 + 0x48) = sVar4;
              *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
              **(short **)(param_1 + 0x48) = sVar4 + 1;
              *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
              **(short **)(param_1 + 0x48) = sVar4 + 2;
              pfVar13 = *(float **)(param_1 + 0x40);
              *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 2;
              *pfVar13 = fVar5;
              pfVar13[1] = fVar18;
              lVar14 = *(longlong *)(param_1 + 0x40);
              *(undefined4 *)(lVar14 + 8) = uVar1;
              *(undefined4 *)(lVar14 + 0xc) = uVar2;
              *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar9;
              *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
              **(undefined8 **)(param_1 + 0x40) = uVar3;
              lVar14 = *(longlong *)(param_1 + 0x40);
              uVar3 = *(undefined8 *)(local_4b8 + (longlong)(int)uVar15 * 2);
              *(undefined4 *)(lVar14 + 8) = uVar1;
              *(undefined4 *)(lVar14 + 0xc) = uVar2;
              *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
              *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
              **(undefined8 **)(param_1 + 0x40) = uVar3;
              lVar14 = *(longlong *)(param_1 + 0x40);
              *(undefined4 *)(lVar14 + 8) = uVar1;
              *(undefined4 *)(lVar14 + 0xc) = uVar2;
              *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
              *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
            }
          }
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
        } while ((int)uVar15 < 0x80);
      }
    }
  }
  return;
}



/* ===== 1801fedb0 FUN_1801fedb0 ===== */

uint FUN_1801fedb0(undefined8 param_1,float param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float local_78 [8];
  float local_58;
  float local_54;
  float local_50 [2];
  float local_48;
  float local_44;
  float local_40 [2];
  float local_38 [12];
  
  local_78[4] = 1.0;
  local_78[0] = 0.0;
  local_58 = 1.0;
  local_78[5] = 0.0;
  local_48 = 1.0;
  local_54 = 0.0;
  local_38[0] = 1.0;
  local_78[2] = param_2;
  pfVar5 = local_78;
  if (0.0 <= param_2) {
    pfVar5 = local_78 + 2;
  }
  local_44 = 0.0;
  local_78[6] = param_3;
  pfVar1 = local_78 + 4;
  if (param_2 <= DAT_1808ac34c) {
    pfVar1 = pfVar5;
  }
  local_40[0] = param_5;
  local_50[0] = param_4;
  pfVar5 = local_78 + 5;
  if (0.0 <= param_3) {
    pfVar5 = local_78 + 6;
  }
  pfVar2 = &local_58;
  if (param_3 <= DAT_1808ac34c) {
    pfVar2 = pfVar5;
  }
  pfVar5 = &local_54;
  if (0.0 <= param_4) {
    pfVar5 = local_50;
  }
  pfVar3 = &local_48;
  if (param_4 <= DAT_1808ac34c) {
    pfVar3 = pfVar5;
  }
  pfVar5 = &local_44;
  if (0.0 <= param_5) {
    pfVar5 = local_40;
  }
  pfVar4 = local_38;
  if (param_5 <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  return (((int)(*pfVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
          (int)(*pfVar3 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar2 * DAT_1808acb94 + DAT_1808ac1f4)) << 8 |
         (int)(*pfVar1 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 1801fef00 FUN_1801fef00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801fef00(longlong param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a18 [32];
  undefined1 local_9f8;
  float local_9e8;
  ulonglong local_9e0 [4];
  uint local_9c0;
  undefined2 local_9bc;
  undefined8 local_9b8;
  undefined2 local_9b0;
  undefined8 local_9ac;
  undefined8 local_9a0;
  undefined4 local_998;
  undefined2 local_994;
  undefined8 local_990;
  undefined8 local_988;
  undefined4 local_980;
  undefined1 local_97c;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined2 local_948;
  undefined4 local_944;
  undefined8 local_940;
  undefined8 local_938;
  undefined1 local_930;
  undefined4 local_92c;
  undefined8 local_928;
  undefined8 local_920;
  undefined4 local_918;
  undefined8 local_914;
  undefined8 local_908;
  undefined2 local_900;
  char local_8fe;
  undefined8 local_8fc;
  float local_8f4;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined4 local_8e0;
  undefined8 local_8dc;
  undefined4 local_8d4;
  undefined8 local_8d0;
  undefined4 local_8c8;
  undefined2 local_8c4;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  uint local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined8 local_824;
  undefined4 local_81c;
  undefined8 local_818;
  undefined4 local_810;
  undefined8 local_80c;
  undefined4 local_804;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined1 local_7bc;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined4 local_768;
  undefined4 local_764;
  undefined2 local_760;
  undefined8 local_75c;
  undefined4 local_754;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined4 local_730;
  undefined1 local_72c;
  undefined4 local_728;
  undefined1 local_724;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined4 local_6e8;
  undefined8 local_6e4;
  undefined8 uStack_6dc;
  undefined8 local_6d4;
  undefined4 local_6cc;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined2 local_6b8;
  undefined8 local_6b4;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined8 local_6a0;
  undefined4 local_698;
  undefined8 local_694;
  undefined4 local_68c;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined1 local_670;
  undefined8 local_66c;
  undefined8 local_664;
  undefined8 local_65c;
  undefined4 local_654;
  undefined1 local_650;
  undefined8 local_64c;
  undefined4 local_644;
  undefined1 local_640;
  undefined8 local_63c;
  undefined8 local_634;
  undefined8 local_62c;
  undefined8 local_624;
  undefined8 local_61c;
  undefined4 local_614;
  undefined8 local_610;
  undefined1 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined2 local_5cc;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined2 local_550;
  undefined4 local_54c;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined1 local_514;
  undefined8 local_510;
  undefined8 local_508;
  undefined1 local_500 [640];
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 local_244;
  undefined8 local_23c;
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined1 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_d8 [64];
  undefined1 local_98 [24];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_a18;
  uVar4 = local_58;
  if (param_1 == 0) goto LAB_1801ff0f2;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_9e0);
    DAT_181108a00 = local_9e0[0];
    DAT_1811089f8 = FUN_1803a0c50(local_9e0);
    DAT_180cd1304 = '\x01';
  }
  uVar4 = DAT_1811089f8;
  if ((DAT_1811089f8 == 0) || (DAT_180ca09f0 == 0)) goto LAB_1801ff0f2;
  local_9e0[0] = DAT_1811089f8;
  iVar3 = FUN_180011200(DAT_180ca09f0 + DAT_1811089f8);
  fVar1 = DAT_1808ac34c;
  uVar4 = (ulonglong)(iVar3 - 1U);
  if (999 < iVar3 - 1U) goto LAB_1801ff0f2;
  local_9e0[1] = 0;
  local_9e0[2] = 0;
  fVar7 = 0.0;
  local_9e0[3] = 0;
  local_9c0 = 0;
  local_9bc = 0;
  local_9b8 = 0x3f800000;
  local_9b0 = 0;
  local_9ac = 0x437a0000;
  local_9a0 = 0;
  local_998 = 0x3f800000;
  local_994 = 0;
  local_990 = 0;
  local_988 = 0;
  local_980 = 0;
  local_97c = 0;
  local_978 = _DAT_1808ad910;
  uStack_970 = _UNK_1808ad918;
  local_968 = _DAT_1808ada60;
  uStack_960 = _UNK_1808ada68;
  local_958 = _DAT_1808add90;
  uStack_950 = _UNK_1808add98;
  local_948 = 1;
  local_944 = 0xffffffff;
  local_940 = 0;
  local_938 = 0;
  local_930 = 0;
  local_92c = 0;
  local_928 = 0;
  local_920 = 0;
  local_918 = 0;
  local_914 = 0;
  local_908 = 0;
  local_900 = 0;
  local_8fe = '\0';
  local_8fc = 0;
  local_8f4 = 0.0;
  local_8f0 = 0x3c800000;
  uVar4 = FUN_1801f2020(local_9e0,local_9e0 + 1);
  if ((char)uVar4 == '\0') goto LAB_1801ff0f2;
  iVar3 = local_9ac._4_4_;
  if (((((local_918._3_1_ != '\0') && ((float)local_9ac._4_4_ * DAT_1808ac00c <= (float)local_914))
       || (uVar4 = (ulonglong)local_9c0, (local_9c0 & 0x20) != 0)) ||
      ((local_9bc._1_1_ != '\0' || (local_9b0._1_1_ != '\0')))) ||
     (((local_9c0 & 1) == 0 || (((short)local_918 == 0x31 && ((char)local_900 != '\0'))))))
  goto LAB_1801ff0f2;
  if (local_900._1_1_ == '\0') {
    if (local_8f0._4_4_ < 0.0) {
LAB_1801ff12e:
      local_9e8 = 0.0;
      fVar5 = (float)FUN_180512fd0();
      fVar6 = local_9e8;
      if (fVar5 < 0.0) {
        fVar5 = fVar5 + fVar1;
        if (fVar5 < fVar1) {
          fVar6 = local_9e8 + DAT_1808acda0;
        }
        else {
          fVar5 = 0.0;
        }
      }
      uVar4 = (ulonglong)(uint)(int)fVar6;
      iVar3 = iVar3 + (int)fVar6;
    }
    else {
      fVar5 = local_8f0._4_4_;
      if (fVar1 <= local_8f0._4_4_) goto LAB_1801ff12e;
    }
    iVar3 = iVar3 - local_8fc._4_4_;
    fVar5 = fVar5 - local_8f4;
    if (0.0 <= fVar5) {
LAB_1801ff17b:
      fVar7 = fVar5;
    }
    else if (fVar5 + fVar1 < fVar1) {
      iVar3 = iVar3 + -1;
      fVar5 = fVar5 + fVar1;
      goto LAB_1801ff17b;
    }
    if ((float)iVar3 * DAT_1808ac00c + fVar7 * DAT_1808ac00c < (float)local_8f0) goto LAB_1801ff0f2;
  }
  else if (local_8fe != '\0') {
    if ((float)local_9ac._4_4_ * DAT_1808ac00c <= (float)local_8f0 + (float)local_8fc)
    goto LAB_1801ff0f2;
  }
  uVar4 = 0;
  if ((~((byte)local_9a0 >> 1) & 1) != 0) {
    local_8e8 = 0;
    local_8e0 = 0;
    local_8dc = 0;
    local_8d4 = 0;
    local_8d0 = 0;
    local_8c8 = 0;
    local_8c4 = 0;
    local_8c0 = 0;
    local_8b8 = 0;
    local_8b0 = 0;
    local_8a8 = 0;
    uStack_8a0 = 0;
    cVar2 = FUN_180267210(param_1,local_9e0,&local_8e8);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      local_898 = 0;
      uStack_890 = 0;
      local_888 = 0;
      uStack_880 = 0;
      local_878 = 0;
      uStack_870 = 0;
      local_868 = _DAT_1808adae0;
      uStack_860 = _UNK_1808adae8;
      local_858 = _DAT_1808adae0;
      uStack_850 = _UNK_1808adae8;
      local_848 = 0;
      uStack_840 = 0;
      local_838 = 0;
      local_830 = 0;
      local_82c = 0xffffffff;
      local_828 = 2;
      local_824 = 0;
      local_81c = 0x3f800000;
      local_818 = 0;
      local_810 = 0x3f800000;
      local_80c = 0x3f800000;
      local_804 = 0;
      local_800 = 1;
      local_7f8 = 0;
      local_7f0 = 0;
      local_7e8 = 0;
      uStack_7e0 = 0;
      local_7d8 = 0;
      local_7d0 = 0;
      local_7c8 = 0;
      local_7c0 = 0;
      local_7bc = 0;
      local_7b8 = 0;
      uStack_7b0 = 0;
      local_7a8 = 0;
      uStack_7a0 = 0;
      local_798 = 0;
      uStack_790 = 0;
      local_788 = 0;
      local_780 = 0;
      local_778 = 0;
      local_770 = 0;
      local_768 = 0;
      local_764 = 0x43820000;
      local_760 = 0;
      local_75c = 0;
      local_754 = 0;
      local_750 = 0;
      local_748 = 0;
      local_740 = 0x11;
      local_738 = 0x3c800000;
      local_730 = 0;
      local_72c = 0;
      local_728 = 0;
      local_724 = 0;
      local_720 = 0;
      uStack_718 = 0;
      local_710 = 0;
      local_708 = 0;
      local_700 = 0;
      local_6f8 = 0;
      uStack_6f0 = 0;
      local_6e8 = 0;
      local_6e4 = 0;
      uStack_6dc = 0;
      local_6d4 = 0;
      local_6cc = 0;
      local_6c8 = 0;
      uStack_6c0 = 0;
      local_6b8 = 0;
      local_6b4 = 0;
      local_6ac = 0;
      local_6a8 = 0x3f800000;
      local_6a0 = 0;
      local_698 = 0;
      local_694 = 0;
      local_68c = 0;
      local_688 = 0;
      local_680 = 0;
      local_678 = 0;
      local_670 = 0;
      local_66c = 0;
      local_664 = 0;
      local_65c = 0;
      local_654 = 0;
      local_650 = 0;
      local_64c = 0;
      local_644 = 0;
      local_640 = 0;
      local_63c = 0;
      local_634 = 0;
      local_62c = 0;
      local_624 = 0;
      local_61c = 0;
      local_614 = 0xffffffff;
      local_610 = 0;
      local_608 = 0;
      local_600 = 0;
      local_5f8 = 0;
      uStack_5f0 = 0;
      local_5e8 = 0;
      local_5e0 = 0;
      local_5d8 = 0;
      local_5d0 = 0;
      local_5cc = 0;
      local_5c8 = _DAT_1808ade10;
      uStack_5c0 = _UNK_1808ade18;
      local_5b8 = _DAT_1808ad580;
      uStack_5b0 = _UNK_1808ad588;
      local_5a8 = _DAT_1808ada50;
      uStack_5a0 = _UNK_1808ada58;
      local_598 = _DAT_1808ad590;
      uStack_590 = _UNK_1808ad598;
      local_588 = _DAT_1808adbb0;
      uStack_580 = _UNK_1808adbb8;
      local_578 = _DAT_1808ad570;
      uStack_570 = _UNK_1808ad578;
      local_568 = _DAT_1808ade50;
      uStack_560 = _UNK_1808ade58;
      local_558 = 0;
      local_550 = 1;
      local_54c = 0xffffffff;
      local_548 = 0;
      local_540 = 0;
      local_538 = 0;
      local_530 = 0;
      local_528 = 0;
      local_520 = 0;
      local_518 = 0;
      local_514 = 0;
      local_510 = 0;
      local_508 = 0;
      FUN_180540170(local_500,0,0x280);
      local_280 = 0;
      local_278 = 0;
      local_270 = 0;
      FUN_180540170(&local_26c,0,0x100);
      local_26c = 0;
      local_264 = 0;
      local_25c = 0;
      local_254 = 0;
      local_24c = 0;
      local_244 = 0;
      local_23c = 0;
      local_234 = 0;
      local_22c = 0;
      local_224 = 0;
      local_21c = 0;
      local_214 = 0;
      local_20c = 0;
      local_204 = 0;
      local_1fc = 0;
      local_1f4 = 0;
      local_1ec = 0;
      local_1e4 = 0;
      local_1dc = 0;
      local_1d4 = 0;
      local_1cc = 0;
      local_1c4 = 0;
      local_1bc = 0;
      local_1b4 = 0;
      local_1ac = 0;
      local_1a4 = 0;
      local_19c = 0;
      local_194 = 0;
      local_18c = 0;
      local_184 = 0;
      local_17c = 0;
      local_174 = 0;
      local_16c = 0;
      local_164 = 0;
      local_15c = 0;
      local_154 = 0;
      local_150 = 0;
      local_14c = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 2;
      local_12e = 0;
      local_12c = 0;
      local_124 = 0;
      local_120 = 0x4396ff27;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_104 = 0;
      local_100 = 0x3f800000;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      cVar2 = FUN_180463b50(&local_898,local_9e0[0],0x11);
      if (cVar2 == '\0') {
        uVar4 = 0;
      }
      else {
        local_9f8 = 0;
        FUN_18045a7d0(local_d8,&local_8e8,*(undefined8 *)(param_1 + 0x70),
                      *(undefined4 *)(param_1 + 8));
        iVar3 = 0;
        do {
          FUN_18045ad20(&local_898,local_d8);
          if ((local_830 & 1) == 0) {
            uVar4 = 1;
            goto LAB_1801ff7e9;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 2);
        uVar4 = 0;
LAB_1801ff7e9:
        FUN_180011610(local_80);
        FUN_180200b70(local_98);
      }
      FUN_1800244c0(&local_600);
    }
    FUN_180200b70(&local_8b0);
    return uVar4;
  }
LAB_1801ff0f2:
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 1801ff820 FUN_1801ff820 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801ff820(longlong param_1,char param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auStack_1138 [32];
  undefined1 local_1118;
  longlong local_1108;
  undefined4 local_1100;
  uint uStack_10fc;
  undefined8 uStack_10f8;
  uint local_10f0;
  undefined4 uStack_10ec;
  undefined4 uStack_10e8;
  undefined4 uStack_10e4;
  float local_10e0;
  undefined8 uStack_10dc;
  undefined4 uStack_10d4;
  float local_10d0;
  undefined8 uStack_10cc;
  undefined4 uStack_10c4;
  undefined2 local_10c0;
  undefined1 uStack_10be;
  uint5 uStack_10bd;
  undefined8 local_10b8;
  undefined4 local_10b0;
  undefined8 local_10ac;
  undefined4 local_10a4;
  undefined8 local_10a0;
  undefined4 local_1098;
  undefined2 local_1094;
  ulonglong local_1090;
  ulonglong local_1088;
  float *local_1080;
  float *local_1078;
  float *pfStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined4 local_1000;
  undefined4 local_ffc;
  undefined4 local_ff8;
  undefined8 local_ff4;
  undefined4 local_fec;
  undefined8 local_fe8;
  undefined4 local_fe0;
  undefined8 local_fdc;
  undefined4 local_fd4;
  undefined8 local_fd0;
  undefined8 local_fc8;
  undefined8 local_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 local_fa0;
  undefined8 local_f98;
  undefined4 local_f90;
  undefined1 local_f8c;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 local_f50;
  undefined8 local_f48;
  undefined8 local_f40;
  undefined4 local_f38;
  undefined4 local_f34;
  undefined2 local_f30;
  undefined8 local_f2c;
  undefined4 local_f24;
  longlong local_f20;
  undefined8 local_f18;
  undefined8 local_f10;
  undefined8 local_f08;
  undefined4 local_f00;
  undefined1 local_efc;
  undefined4 local_ef8;
  undefined1 local_ef4;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 local_ed8;
  undefined8 local_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined4 local_eb8;
  undefined8 local_eb4;
  undefined8 uStack_eac;
  undefined8 local_ea4;
  undefined4 local_e9c;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined2 local_e88;
  undefined8 local_e84;
  undefined4 local_e7c;
  undefined4 local_e78;
  undefined8 local_e70;
  undefined4 local_e68;
  undefined8 local_e64;
  undefined4 local_e5c;
  undefined8 local_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined1 local_e40;
  undefined8 local_e3c;
  undefined8 local_e34;
  undefined8 local_e2c;
  undefined4 local_e24;
  undefined1 local_e20;
  undefined8 local_e1c;
  undefined4 local_e14;
  undefined1 local_e10;
  undefined8 local_e0c;
  undefined8 local_e04;
  undefined8 local_dfc;
  undefined8 local_df4;
  undefined8 local_dec;
  undefined4 local_de4;
  undefined8 local_de0;
  undefined1 local_dd8;
  undefined8 local_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 local_db0;
  undefined8 local_da8;
  undefined4 local_da0;
  undefined2 local_d9c;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined2 local_d20;
  undefined4 local_d1c;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined4 local_ce8;
  undefined1 local_ce4;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined1 local_cd0 [640];
  undefined8 local_a50;
  undefined8 local_a48;
  undefined4 local_a40;
  undefined8 local_a3c;
  undefined8 local_a34;
  undefined8 local_a2c;
  undefined8 local_a24;
  undefined8 local_a1c;
  undefined8 local_a14;
  undefined8 local_a0c;
  undefined8 local_a04;
  undefined8 local_9fc;
  undefined8 local_9f4;
  undefined8 local_9ec;
  undefined8 local_9e4;
  undefined8 local_9dc;
  undefined8 local_9d4;
  undefined8 local_9cc;
  undefined8 local_9c4;
  undefined8 local_9bc;
  undefined8 local_9b4;
  undefined8 local_9ac;
  undefined8 local_9a4;
  undefined8 local_99c;
  undefined8 local_994;
  undefined8 local_98c;
  undefined8 local_984;
  undefined8 local_97c;
  undefined8 local_974;
  undefined8 local_96c;
  undefined8 local_964;
  undefined8 local_95c;
  undefined8 local_954;
  undefined8 local_94c;
  undefined8 local_944;
  undefined8 local_93c;
  undefined8 local_934;
  undefined8 local_92c;
  undefined1 local_924;
  undefined4 local_920;
  undefined1 local_91c;
  undefined4 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined2 local_900;
  undefined1 local_8fe;
  undefined8 local_8fc;
  undefined4 local_8f4;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined4 local_8d8;
  undefined1 local_8d4;
  undefined8 local_8d0;
  undefined1 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined2 local_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined8 local_834;
  undefined4 local_82c;
  undefined8 local_828;
  undefined4 local_820;
  undefined8 local_81c;
  undefined4 local_814;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined1 local_7cc;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined4 local_778;
  undefined4 local_774;
  undefined2 local_770;
  undefined8 local_76c;
  undefined4 local_764;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined4 local_740;
  undefined1 local_73c;
  undefined4 local_738;
  undefined1 local_734;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined4 local_6f8;
  undefined8 local_6f4;
  undefined8 uStack_6ec;
  undefined8 local_6e4;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined2 local_6c8;
  undefined8 local_6c4;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined8 local_6b0;
  undefined4 local_6a8;
  undefined8 local_6a4;
  undefined4 local_69c;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined1 local_680;
  undefined8 local_67c;
  undefined8 local_674;
  undefined8 local_66c;
  undefined4 local_664;
  undefined1 local_660;
  undefined8 local_65c;
  undefined4 local_654;
  undefined1 local_650;
  undefined8 local_64c;
  undefined8 local_644;
  undefined8 local_63c;
  undefined8 local_634;
  undefined8 local_62c;
  undefined4 local_624;
  undefined8 local_620;
  undefined1 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  undefined2 local_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined2 local_560;
  undefined4 local_55c;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined1 local_524;
  undefined8 local_520;
  undefined8 local_518;
  undefined1 local_510 [640];
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined8 local_26c;
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined8 local_244;
  undefined8 local_23c;
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined8 local_16c;
  undefined1 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined1 local_13e;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  longlong local_e8 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [3];
  undefined1 local_90 [40];
  ulonglong local_68;
  undefined8 uStack_38;
  
  uStack_38 = 0x1801ff83b;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1138;
  if (param_1 != 0) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_1108);
      DAT_181108a00 = local_1108;
      local_1108 = FUN_1803a0c50(&local_1108);
      DAT_180cd1304 = '\x01';
    }
    else {
      local_1108 = DAT_1811089f8;
    }
    lVar4 = local_1108;
    DAT_1811089f8 = local_1108;
    if ((local_1108 != 0) && (DAT_180ca09f0 != 0)) {
      iVar6 = FUN_180011200((ulonglong)DAT_180ca09f0 + local_1108);
      fVar3 = DAT_1808ac34c;
      if (iVar6 - 1U < 1000) {
        local_8a8 = 0;
        uStack_8a0 = 0;
        local_898 = 0;
        uStack_890 = 0;
        local_888 = 0;
        uStack_880 = 0;
        local_878 = _DAT_1808adae0;
        uStack_870 = _UNK_1808adae8;
        local_868 = _DAT_1808adae0;
        uStack_860 = _UNK_1808adae8;
        local_858 = 0;
        uStack_850 = 0;
        local_848 = 0;
        local_840 = 0;
        local_83c = 0xffffffff;
        local_838 = 2;
        local_834 = 0;
        local_82c = 0x3f800000;
        local_828 = 0;
        local_820 = 0x3f800000;
        local_81c = 0x3f800000;
        local_814 = 0;
        local_810 = 1;
        local_808 = 0;
        local_800 = 0;
        local_7f8 = 0;
        uStack_7f0 = 0;
        local_7e8 = 0;
        local_7e0 = 0;
        local_7d8 = 0;
        local_7d0 = 0;
        local_7cc = 0;
        local_7c8 = 0;
        uStack_7c0 = 0;
        local_7b8 = 0;
        uStack_7b0 = 0;
        local_7a8 = 0;
        uStack_7a0 = 0;
        local_798 = 0;
        local_790 = 0;
        local_788 = 0;
        local_780 = 0;
        local_778 = 0;
        local_774 = 0x43820000;
        local_770 = 0;
        local_76c = 0;
        local_764 = 0;
        local_760 = 0;
        local_758 = 0;
        local_750 = 0x11;
        local_748 = 0x3c800000;
        local_740 = 0;
        local_73c = 0;
        local_738 = 0;
        local_734 = 0;
        local_730 = 0;
        uStack_728 = 0;
        local_720 = 0;
        local_718 = 0;
        local_710 = 0;
        local_708 = 0;
        uStack_700 = 0;
        local_6f8 = 0;
        local_6f4 = 0;
        uStack_6ec = 0;
        local_6e4 = 0;
        local_6dc = 0;
        local_6d8 = 0;
        uStack_6d0 = 0;
        local_6c8 = 0;
        local_6c4 = 0;
        local_6bc = 0;
        local_6b8 = 0x3f800000;
        local_6b0 = 0;
        local_6a8 = 0;
        local_6a4 = 0;
        local_69c = 0;
        local_698 = 0;
        local_690 = 0;
        local_688 = 0;
        local_680 = 0;
        local_67c = 0;
        local_674 = 0;
        local_66c = 0;
        local_664 = 0;
        local_660 = 0;
        local_65c = 0;
        local_654 = 0;
        local_650 = 0;
        local_64c = 0;
        local_644 = 0;
        local_63c = 0;
        local_634 = 0;
        local_62c = 0;
        uVar10 = 0xffffffff;
        local_624 = 0xffffffff;
        local_620 = 0;
        local_618 = 0;
        local_610 = 0;
        local_608 = 0;
        uStack_600 = 0;
        local_5f8 = 0;
        local_5f0 = 0;
        local_5e8 = 0;
        local_5e0 = 0;
        local_5dc = 0;
        local_5d8 = _DAT_1808ade10;
        uStack_5d0 = _UNK_1808ade18;
        local_5c8 = _DAT_1808ad580;
        uStack_5c0 = _UNK_1808ad588;
        local_5b8 = _DAT_1808ada50;
        uStack_5b0 = _UNK_1808ada58;
        local_5a8 = _DAT_1808ad590;
        uStack_5a0 = _UNK_1808ad598;
        local_598 = _DAT_1808adbb0;
        uStack_590 = _UNK_1808adbb8;
        local_588 = _DAT_1808ad570;
        uStack_580 = _UNK_1808ad578;
        local_578 = _DAT_1808ade50;
        uStack_570 = _UNK_1808ade58;
        local_568 = 0;
        local_560 = 1;
        local_55c = 0xffffffff;
        local_558 = 0;
        local_550 = 0;
        local_548 = 0;
        local_540 = 0;
        local_538 = 0;
        local_530 = 0;
        local_528 = 0;
        local_524 = 0;
        local_520 = 0;
        local_518 = 0;
        FUN_180540170(local_510,0,0x280);
        local_290 = 0;
        local_288 = 0;
        local_280 = 0;
        FUN_180540170(&local_27c,0,0x100);
        local_27c = 0;
        local_274 = 0;
        local_26c = 0;
        local_264 = 0;
        local_25c = 0;
        local_254 = 0;
        local_24c = 0;
        local_244 = 0;
        local_23c = 0;
        local_234 = 0;
        local_22c = 0;
        local_224 = 0;
        local_21c = 0;
        local_214 = 0;
        local_20c = 0;
        local_204 = 0;
        local_1fc = 0;
        local_1f4 = 0;
        local_1ec = 0;
        local_1e4 = 0;
        local_1dc = 0;
        local_1d4 = 0;
        local_1cc = 0;
        local_1c4 = 0;
        local_1bc = 0;
        local_1b4 = 0;
        local_1ac = 0;
        local_1a4 = 0;
        local_19c = 0;
        local_194 = 0;
        local_18c = 0;
        local_184 = 0;
        local_17c = 0;
        local_174 = 0;
        local_16c = 0;
        local_164 = 0;
        local_160 = 0;
        local_15c = 0;
        local_158 = 0;
        local_150 = 0;
        local_148 = 0;
        local_140 = 2;
        local_13e = 0;
        local_13c = 0;
        local_134 = 0;
        local_130 = 0x4396ff27;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        local_114 = 0;
        local_110 = 0x3f800000;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        cVar5 = FUN_180463b50(&local_8a8,lVar4,0x11);
        if ((cVar5 == '\0') || (local_5e0._2_1_ == '\0')) {
          if (param_2 == '\0') {
            uVar10 = 0;
          }
          else if (cVar5 != '\0') {
            local_10b8 = 0;
            local_10b0 = 0;
            local_10ac = 0;
            local_10a4 = 0;
            local_10a0 = 0;
            local_1098 = 0;
            local_1094 = 0;
            local_1090 = 0;
            local_1088 = 0;
            local_1080 = (float *)0x0;
            local_1078 = (float *)0x0;
            pfStack_1070 = (float *)0x0;
            cVar5 = FUN_180267210(param_1,&local_1108,&local_10b8);
            if (cVar5 != '\0') {
              uStack_10f8 = 0;
              uVar2 = local_10f0 >> 8;
              local_10f0 = local_10f0 & 0xffffff00;
              uStack_10ec = 0;
              uStack_10e8 = 0;
              uStack_10e4 = 0;
              local_10e0 = (float)((uint)local_10e0 & 0xffffff00);
              uStack_10dc = 0;
              uStack_10d4 = 0;
              local_10d0 = (float)((uint)local_10d0 & 0xffffff00);
              uStack_10cc = 0;
              uStack_10c4 = 0;
              local_10c0 = 0;
              uStack_10be = 0;
              local_1100 = 0;
              local_e8[0] = (ulonglong)uStack_10fc << 0x20;
              uStack_d0 = 0;
              local_c8 = local_10e0;
              uStack_c4 = 0;
              uStack_c0 = 0;
              uStack_bc = 0;
              local_b8 = local_10d0;
              uStack_b4 = 0;
              uStack_b0 = 0;
              uStack_ac = 0;
              local_a8[0] = (ulonglong)uStack_10bd << 0x18;
              local_e8[1] = 2;
              local_d8 = CONCAT71((uint7)(uint3)uVar2,1);
              if (local_1078 == pfStack_1070) {
                FUN_18008c530(&local_1080,local_1078,local_e8);
              }
              else {
                *(longlong *)local_1078 = local_e8[0];
                local_1078[2] = 2.8026e-45;
                local_1078[3] = 0.0;
                *(undefined8 *)(local_1078 + 4) = local_d8;
                local_1078[6] = 0.0;
                local_1078[7] = 0.0;
                local_1078[8] = local_10e0;
                local_1078[9] = 0.0;
                local_1078[10] = 0.0;
                local_1078[0xb] = 0.0;
                local_1078[0xc] = local_10d0;
                local_1078[0xd] = 0.0;
                local_1078[0xe] = 0.0;
                local_1078[0xf] = 0.0;
                *(longlong *)(local_1078 + 0x10) = local_a8[0];
                local_1078 = local_1078 + 0x12;
              }
              local_1090 = local_1090 | 2;
              local_1088 = local_1088 | 2;
              uVar10 = *(ulonglong *)(param_1 + 0x70);
              for (pfVar7 = local_1080; pfVar7 != local_1078; pfVar7 = pfVar7 + 0x12) {
                fVar1 = *pfVar7;
                if (0.0 <= fVar1) {
                  fVar11 = fVar3;
                  if (fVar1 <= fVar3) {
                    fVar11 = fVar1;
                  }
                }
                else {
                  fVar11 = 0.0;
                }
                *pfVar7 = fVar11;
              }
              local_1068 = 0;
              uStack_1060 = 0;
              local_1058 = 0;
              uStack_1050 = 0;
              local_1048 = 0;
              uStack_1040 = 0;
              local_1018 = 0;
              uStack_1010 = 0;
              local_1008 = 0;
              local_1000 = 0;
              local_ffc = 0xffffffff;
              local_ff8 = 2;
              local_ff4 = 0;
              local_fec = 0x3f800000;
              local_fe8 = 0;
              local_fe0 = 0x3f800000;
              local_fdc = 0x3f800000;
              local_fd4 = 0;
              local_fd0 = 1;
              local_fc8 = 0;
              local_fc0 = 0;
              local_fb8 = 0;
              uStack_fb0 = 0;
              local_fa8 = 0;
              local_fa0 = 0;
              local_f98 = 0;
              local_f90 = 0;
              local_f8c = 0;
              local_f88 = 0;
              uStack_f80 = 0;
              local_f78 = 0;
              uStack_f70 = 0;
              local_f68 = 0;
              uStack_f60 = 0;
              local_f58 = 0;
              local_f50 = 0;
              local_f48 = 0;
              local_f40 = 0;
              local_f38 = 0;
              local_f34 = 0x43820000;
              local_f30 = 0;
              local_f2c = 0;
              local_f24 = 0;
              local_f20 = 0;
              local_f18 = 0;
              local_f10 = 0x11;
              local_f08 = 0x3c800000;
              local_f00 = 0;
              local_efc = 0;
              local_ef8 = 0;
              local_ef4 = 0;
              local_ef0 = 0;
              uStack_ee8 = 0;
              local_ee0 = 0;
              local_ed8 = 0;
              local_ed0 = 0;
              local_ec8 = 0;
              uStack_ec0 = 0;
              local_eb8 = 0;
              local_eb4 = 0;
              uStack_eac = 0;
              local_ea4 = 0;
              local_e9c = 0;
              local_e98 = 0;
              uStack_e90 = 0;
              local_e88 = 0;
              local_e84 = 0;
              local_e7c = 0;
              local_e78 = 0x3f800000;
              local_e70 = 0;
              local_e68 = 0;
              local_e64 = 0;
              local_e5c = 0;
              local_e58 = 0;
              local_e50 = 0;
              local_e48 = 0;
              local_e40 = 0;
              local_e3c = 0;
              local_e34 = 0;
              local_e2c = 0;
              local_e24 = 0;
              local_e20 = 0;
              local_e1c = 0;
              local_e14 = 0;
              local_e10 = 0;
              local_e0c = 0;
              local_e04 = 0;
              local_dfc = 0;
              local_df4 = 0;
              local_dec = 0;
              local_de4 = 0xffffffff;
              local_de0 = 0;
              local_dd8 = 0;
              local_dd0 = 0;
              local_dc8 = 0;
              uStack_dc0 = 0;
              local_db8 = 0;
              local_db0 = 0;
              local_da8 = 0;
              local_da0 = 0;
              local_d9c = 0;
              local_d28 = 0;
              local_d20 = 1;
              local_d1c = 0xffffffff;
              local_d18 = 0;
              local_d10 = 0;
              local_d08 = 0;
              local_d00 = 0;
              local_cf8 = 0;
              local_cf0 = 0;
              local_ce8 = 0;
              local_ce4 = 0;
              local_ce0 = 0;
              local_cd8 = 0;
              local_1038 = _DAT_1808adae0;
              uStack_1030 = _UNK_1808adae8;
              local_1028 = _DAT_1808adae0;
              uStack_1020 = _UNK_1808adae8;
              local_d98 = _DAT_1808ade10;
              uStack_d90 = _UNK_1808ade18;
              local_d88 = _DAT_1808ad580;
              uStack_d80 = _UNK_1808ad588;
              local_d78 = _DAT_1808ada50;
              uStack_d70 = _UNK_1808ada58;
              local_d68 = _DAT_1808ad590;
              uStack_d60 = _UNK_1808ad598;
              local_d58 = _DAT_1808adbb0;
              uStack_d50 = _UNK_1808adbb8;
              local_d48 = _DAT_1808ad570;
              uStack_d40 = _UNK_1808ad578;
              local_d38 = _DAT_1808ade50;
              uStack_d30 = _UNK_1808ade58;
              FUN_180540170(local_cd0,0,0x280);
              local_a50 = 0;
              local_a48 = 0;
              local_a40 = 0;
              FUN_180540170(&local_a3c,0,0x100);
              local_a3c = 0;
              local_a34 = 0;
              local_a2c = 0;
              local_a24 = 0;
              local_a1c = 0;
              local_a14 = 0;
              local_a0c = 0;
              local_a04 = 0;
              local_9fc = 0;
              local_9f4 = 0;
              local_9ec = 0;
              local_9e4 = 0;
              local_9dc = 0;
              local_9d4 = 0;
              local_9cc = 0;
              local_9c4 = 0;
              local_9bc = 0;
              local_9b4 = 0;
              local_9ac = 0;
              local_9a4 = 0;
              local_99c = 0;
              local_994 = 0;
              local_98c = 0;
              local_984 = 0;
              local_97c = 0;
              local_974 = 0;
              local_96c = 0;
              local_964 = 0;
              local_95c = 0;
              local_954 = 0;
              local_94c = 0;
              local_944 = 0;
              local_93c = 0;
              local_934 = 0;
              local_92c = 0;
              local_924 = 0;
              local_920 = 0;
              local_91c = 0;
              local_918 = 0;
              local_910 = 0;
              local_908 = 0;
              local_900 = 2;
              local_8fe = 0;
              local_8fc = 0;
              local_8f4 = 0;
              local_8f0 = 0x4396ff27;
              local_8e8 = 0;
              uStack_8e0 = 0;
              local_8d8 = 0;
              local_8d4 = 0;
              local_8d0 = 0x3f800000;
              local_8c8 = 0;
              local_8c0 = 0;
              local_8b8 = 0;
              local_8b0 = 0;
              FUN_1801fd810(&local_1068,&local_8a8);
              local_f10 = CONCAT44(local_f10._4_4_,0x35);
              if (local_f20 != 0) {
                if (((DAT_181112110 == 0) ||
                    (0x7ffffffefffe < (local_f20 + (ulonglong)DAT_181112110) - 0x10000)) ||
                   (iVar6 = FUN_180011200(), 0xfffffffd < iVar6 - 1U)) {
                  local_f18 = 0;
                }
                else {
                  puVar8 = (undefined8 *)FUN_1803a0940(&local_1108,iVar6);
                  local_f18 = *puVar8;
                }
              }
              FUN_1804624c0(&local_1068);
              FUN_180463020(&local_1068);
              local_918 = local_158;
              local_1118 = 0;
              uVar9 = FUN_18045a7d0(local_e8,&local_10b8,uVar10 & 0xfffffffffffffffd,
                                    *(undefined4 *)(param_1 + 8));
              FUN_18045ad20(&local_1068,uVar9);
              FUN_180011610(local_90);
              FUN_180200b70(local_a8);
              uVar10 = (ulonglong)(local_de0._4_1_ != '\0');
              FUN_1800244c0(&local_dd0);
            }
            FUN_180200b70(&local_1080);
          }
        }
        else {
          uVar10 = 0xfffffffe;
        }
        FUN_1800244c0(&local_610);
        return uVar10;
      }
    }
  }
  return 0xffffffff;
}



/* ===== 180200660 FUN_180200660 ===== */

void FUN_180200660(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    FUN_180200b70(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_1802006e8;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_1802006e8:
  *(undefined8 *)(puVar5 + -8) = 0x1802006f0;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180200720 FUN_180200720 ===== */

longlong * FUN_180200720(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    lVar1 = param_2[1] - *param_2 >> 3;
    if (0x38e38e38e38e38e < (ulonglong)(lVar1 * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar1 = lVar1 * 8;
    lVar2 = FUN_18000fb70(lVar1);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar1 + lVar2;
    lVar1 = param_2[1] - *param_2;
    FUN_180540530(lVar2,*param_2,lVar1);
    param_1[1] = lVar2 + (lVar1 >> 3) * 8;
  }
  return param_1;
}



/* ===== 1802007f0 FUN_1802007f0 ===== */

undefined8 * FUN_1802007f0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)param_1[2]) {
    *puVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    uVar5 = param_2[2];
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    puVar2[1] = uVar3;
    puVar2[2] = uVar5;
    puVar2[3] = uVar4;
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 4);
    *(undefined8 *)((longlong)puVar2 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    puVar2[6] = param_2[6];
    puVar2 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar2 + 7);
    return puVar2;
  }
  uVar12 = 0x492492492492492;
  lVar6 = ((longlong)puVar2 - *param_1) / 0x38;
  if (lVar6 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar6 + 1;
  uVar10 = (param_1[2] - *param_1 >> 3) * 0x6db6db6db6db6db7;
  if (uVar10 <= 0x492492492492492 - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (0x492492492492492 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar12 * 0x38);
  puVar13 = puVar7 + lVar6 * 7;
  *puVar13 = *param_2;
  uVar3 = param_2[3];
  uVar4 = param_2[2];
  uVar5 = param_2[1];
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  puVar13[3] = uVar3;
  puVar13[1] = uVar5;
  puVar13[2] = uVar4;
  *(undefined1 *)(puVar13 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)((longlong)puVar13 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)puVar13 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  puVar13[6] = param_2[6];
  puVar9 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  puVar11 = puVar7;
  if (puVar2 != puVar9) {
    FUN_180200cb0((undefined8 *)*param_1,puVar2,puVar7);
    puVar9 = (undefined8 *)param_1[1];
    puVar11 = puVar13 + 7;
    puVar8 = puVar2;
  }
  FUN_180200cb0(puVar8,puVar9,puVar11);
  FUN_180200d20(param_1,puVar7,uVar1,uVar12);
  return puVar13;
}



/* ===== 1802009d0 FUN_1802009d0 ===== */

void FUN_1802009d0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  uVar9 = *param_1;
  uVar2 = ((longlong)(param_1[2] - uVar9) >> 3) * -0x71c71c71c71c71c7;
  if (param_3 <= uVar2) {
    lVar4 = (longlong)(param_1[1] - uVar9) >> 3;
    if ((ulonglong)(lVar4 * -0x71c71c71c71c71c7) < param_3) {
      FUN_180540530(uVar9,param_2,lVar4 * 8);
      uVar9 = param_1[1];
      lVar5 = (param_3 + lVar4 * 0x71c71c71c71c71c7) * 0x48;
      FUN_180540530(uVar9,lVar4 * 8 + param_2,lVar5);
    }
    else {
      lVar5 = param_3 * 0x48;
      FUN_180540530(uVar9,param_2,lVar5);
    }
    goto LAB_180200b48;
  }
  if (0x38e38e38e38e38e < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x38e38e38e38e38e - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x38e38e38e38e38e;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar8 = auStack_58;
  if (uVar9 != 0) {
    uVar3 = uVar9;
    if ((ulonglong)(((longlong)(param_1[2] - uVar9) >> 3) * 8) < 0x1000) {
LAB_180200a85:
      puVar7 = puVar6;
    }
    else {
      uVar3 = *(ulonglong *)(uVar9 - 8);
      uVar9 = (uVar9 - uVar3) - 8;
      if (0x1f < uVar9) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_50;
        uVar3 = uVar9;
        goto LAB_180200a85;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x180200a8d;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0x38e38e38e38e38e < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_180200b62;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x180200ab7;
  uVar9 = FUN_18000fb70(uVar2 * 0x48);
  *param_1 = uVar9;
  param_1[1] = uVar9;
  param_1[2] = uVar2 * 0x48 + uVar9;
  lVar5 = param_3 * 0x48;
  *(undefined8 *)(puVar8 + -8) = 0x180200ae3;
  FUN_180540530(uVar9,param_2,lVar5);
LAB_180200b48:
  param_1[1] = lVar5 + uVar9;
  return;
}



/* ===== 180200b70 FUN_180200b70 ===== */

void FUN_180200b70(ulonglong *param_1)

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
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 3) * 8;
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
  *(undefined8 *)(puVar5 + -8) = 0x180200bd7;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180200bf0 FUN_180200bf0 ===== */

longlong * FUN_180200bf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) goto LAB_180200c7a;
  lVar3 = lVar1;
  if ((ulonglong)((param_1[2] - lVar1 >> 3) * 8) < 0x1000) {
LAB_180200c64:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + -8);
    if (0x1f < (lVar1 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar4 = auStack_20;
      goto LAB_180200c64;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180200c6f;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_180200c7a:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



/* ===== 180200cb0 FUN_180200cb0 ===== */

undefined8 * FUN_180200cb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    *param_3 = *param_1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    uVar3 = param_1[1];
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_3[1] = uVar3;
    param_3[2] = uVar1;
    param_3[3] = uVar2;
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined8 *)((longlong)param_3 + 0x24) = *(undefined8 *)((longlong)param_1 + 0x24);
    *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x2c);
    param_3[6] = param_1[6];
    param_3 = param_3 + 7;
  }
  return param_3;
}



/* ===== 180200d20 FUN_180200d20 ===== */

void FUN_180200d20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  if (lVar3 == 0) goto LAB_180200dbe;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    FUN_180200b70(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 3) * 8) < 0x1000) {
LAB_180200db3:
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_180200db3;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180200dbe;
  thunk_FUN_1803d64e0(lVar2);
LAB_180200dbe:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x38 + param_2;
  param_1[2] = param_4 * 0x38 + param_2;
  return;
}



/* ===== 180200df0 FUN_180200df0 ===== */

void FUN_180200df0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  lVar2 = *param_1;
  uVar7 = param_1[2] - lVar2 >> 4;
  if (0xfffffffffffffff - (uVar7 >> 1) < uVar7) {
    uVar7 = 0xfffffffffffffff;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    if (uVar7 < param_2) {
      uVar7 = param_2;
    }
  }
  puVar6 = auStack_28;
  if (lVar2 == 0) goto LAB_180200e95;
  lVar3 = lVar2;
  if ((param_1[2] - lVar2 & 0xfffffffffffffff0U) < 0x1000) {
LAB_180200e7d:
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      lVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_180200e7d;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180200e88;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = puVar5;
LAB_180200e95:
  if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar6 + -8) = &UNK_180200ec9;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar6 + -8) = 0x180200ea6;
  lVar2 = FUN_18000fb70(uVar7 * 0x10);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + uVar7 * 0x10;
  return;
}



/* ===== 180200ed0 FUN_180200ed0 ===== */

undefined8 FUN_180200ed0(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  HMODULE pHVar7;
  short *psVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 local_268 [64];
  int local_228 [20];
  uint local_1d8;
  undefined1 local_118 [272];
  
  if (DAT_180ceb440 != 0) {
    return 1;
  }
  pHVar7 = GetModuleHandleA("panorama.dll");
  if (pHVar7 != (HMODULE)0x0) {
    psVar8 = (short *)FUN_1802010e0(local_268,pHVar7);
    if (*psVar8 == 0x5a4d) {
      puVar9 = (undefined8 *)
               FUN_180201150(local_118,(longlong)&pHVar7->unused + (longlong)*(int *)(psVar8 + 0x1e)
                            );
      lVar11 = 2;
      piVar10 = local_228;
      do {
        piVar1 = piVar10 + 0x20;
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        puVar2 = puVar9 + 0x10;
        *(undefined8 *)piVar10 = *puVar9;
        *(undefined8 *)(piVar10 + 2) = uVar3;
        uVar3 = puVar9[4];
        uVar6 = puVar9[5];
        *(undefined8 *)(piVar10 + 4) = uVar4;
        *(undefined8 *)(piVar10 + 6) = uVar5;
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        *(undefined8 *)(piVar10 + 8) = uVar3;
        *(undefined8 *)(piVar10 + 10) = uVar6;
        uVar3 = puVar9[8];
        uVar6 = puVar9[9];
        *(undefined8 *)(piVar10 + 0xc) = uVar4;
        *(undefined8 *)(piVar10 + 0xe) = uVar5;
        uVar4 = puVar9[10];
        uVar5 = puVar9[0xb];
        *(undefined8 *)(piVar10 + 0x10) = uVar3;
        *(undefined8 *)(piVar10 + 0x12) = uVar6;
        uVar3 = puVar9[0xc];
        uVar6 = puVar9[0xd];
        *(undefined8 *)(piVar10 + 0x14) = uVar4;
        *(undefined8 *)(piVar10 + 0x16) = uVar5;
        uVar4 = puVar9[0xe];
        uVar5 = puVar9[0xf];
        *(undefined8 *)(piVar10 + 0x18) = uVar3;
        *(undefined8 *)(piVar10 + 0x1a) = uVar6;
        *(undefined8 *)(piVar10 + 0x1c) = uVar4;
        *(undefined8 *)(piVar10 + 0x1e) = uVar5;
        lVar11 = lVar11 + -1;
        puVar9 = puVar2;
        piVar10 = piVar1;
      } while (lVar11 != 0);
      *(undefined8 *)piVar1 = *puVar2;
      if (local_228[0] == 0x4550) {
        DAT_180ceb448 = pHVar7;
        DAT_180ceb440 = (longlong)&pHVar7->unused + (ulonglong)local_1d8;
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 180200ff0 FUN_180200ff0 ===== */

undefined8 FUN_180200ff0(void)

{
  longlong *plVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (DAT_1811150a0 == (longlong *)0x0) {
    hModule = GetModuleHandleA("panorama.dll");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar2 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1811150a0 = (longlong *)(*pFVar2)("PanoramaUIEngine001",0);
    if (DAT_1811150a0 == (longlong *)0x0) {
      return 0;
    }
  }
  plVar1 = DAT_1811150a0;
  lVar3 = FUN_18000f3a0(DAT_1811150a0);
  if (lVar3 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018020105b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x68))(plVar1);
  return uVar4;
}



/* ===== 180201070 FUN_180201070 ===== */

longlong FUN_180201070(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_180961ac0 != 0) {
    lVar1 = FUN_18000f3a0();
    if (lVar1 != 0) {
      lVar1 = FUN_18000f3a0(lVar1 + 8);
      if (lVar1 != 0) {
        lVar2 = FUN_18000f3a0(lVar1);
        if (lVar2 != 0) {
          lVar2 = FUN_18000f3a0(lVar2);
          if (lVar2 != 0) {
            return lVar1;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}



/* ===== 1802010e0 FUN_1802010e0 ===== */

undefined8 * FUN_1802010e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    uVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



/* ===== 180201150 FUN_180201150 ===== */

undefined8 * FUN_180201150(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 local_118 [34];
  
  if (param_2 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    lVar4 = 2;
    puVar3 = param_1;
    do {
      uVar1 = param_2[1];
      *puVar3 = *param_2;
      puVar3[1] = uVar1;
      uVar1 = param_2[3];
      puVar3[2] = param_2[2];
      puVar3[3] = uVar1;
      uVar1 = param_2[5];
      puVar3[4] = param_2[4];
      puVar3[5] = uVar1;
      uVar1 = param_2[7];
      puVar3[6] = param_2[6];
      puVar3[7] = uVar1;
      uVar1 = param_2[9];
      puVar3[8] = param_2[8];
      puVar3[9] = uVar1;
      uVar1 = param_2[0xb];
      puVar3[10] = param_2[10];
      puVar3[0xb] = uVar1;
      uVar1 = param_2[0xd];
      puVar3[0xc] = param_2[0xc];
      puVar3[0xd] = uVar1;
      uVar1 = param_2[0xf];
      puVar3[0xe] = param_2[0xe];
      puVar3[0xf] = uVar1;
      puVar3 = puVar3 + 0x10;
      param_2 = param_2 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *puVar3 = *param_2;
    return param_1;
  }
  FUN_180540170(local_118,0,0x108);
  puVar2 = local_118;
  lVar4 = 2;
  puVar3 = param_1;
  do {
    uVar1 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar1;
    uVar1 = puVar2[3];
    puVar3[2] = puVar2[2];
    puVar3[3] = uVar1;
    uVar1 = puVar2[5];
    puVar3[4] = puVar2[4];
    puVar3[5] = uVar1;
    uVar1 = puVar2[7];
    puVar3[6] = puVar2[6];
    puVar3[7] = uVar1;
    uVar1 = puVar2[9];
    puVar3[8] = puVar2[8];
    puVar3[9] = uVar1;
    uVar1 = puVar2[0xb];
    puVar3[10] = puVar2[10];
    puVar3[0xb] = uVar1;
    uVar1 = puVar2[0xd];
    puVar3[0xc] = puVar2[0xc];
    puVar3[0xd] = uVar1;
    uVar1 = puVar2[0xf];
    puVar3[0xe] = puVar2[0xe];
    puVar3[0xf] = uVar1;
    puVar3 = puVar3 + 0x10;
    puVar2 = puVar2 + 0x10;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *puVar3 = *puVar2;
  return param_1;
}



/* ===== 180201310 FUN_180201310 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180201310(longlong *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined1 local_23 [3];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_68;
  lVar3 = 0;
  local_40 = param_1;
  puVar1 = (undefined1 *)FUN_180042bb0(local_23);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = lVar3;
  param_1[3] = lVar3;
  if (puVar1 == local_23) {
    param_1[3] = 0xf;
    *(char *)param_1 = (char)lVar3;
  }
  else {
    puVar5 = local_23 + -(longlong)puVar1;
    if ((undefined1 *)0x7fffffffffffffff < puVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (puVar5 < (undefined1 *)0x10) {
      param_1[2] = (longlong)puVar5;
      param_1[3] = 0xf;
      FUN_180540530(param_1,puVar1,puVar5);
      puVar5[(longlong)param_1] = 0;
    }
    else {
      uVar2 = (ulonglong)puVar5 | 0xf;
      uVar4 = 0x7fffffffffffffff;
      if ((uVar2 < 0x8000000000000000) && (uVar4 = uVar2, uVar2 < 0x16)) {
        uVar4 = 0x16;
      }
      lVar3 = FUN_18000fb70(uVar4 + 1);
      *param_1 = lVar3;
      param_1[2] = (longlong)puVar5;
      param_1[3] = uVar4;
      FUN_180540530(lVar3,puVar1,puVar5);
      puVar5[lVar3] = 0;
    }
  }
  return param_1;
}



/* ===== 180201430 FUN_180201430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180201430(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  size_t sVar13;
  longlong lVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined1 auStack_1a8 [32];
  byte *local_188;
  uint local_180;
  uint local_178;
  undefined4 local_170;
  char local_168;
  int local_164;
  longlong local_160;
  undefined4 local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 *local_130;
  undefined1 local_128 [16];
  char local_118 [97];
  undefined1 auStack_b7 [7];
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0xf;
  *(undefined2 *)param_1 = 0x5b;
  local_158 = 1;
  cVar2 = '\x01';
  local_168 = '\x01';
  puVar18 = &DAT_1806f1258;
  local_160 = param_3;
  local_138 = param_2;
  local_130 = param_1;
  if (DAT_180ca0a0c != 0) {
    lVar7 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180ca0a0c);
    uVar6 = DAT_180ceb480;
    if ((lVar7 != 0) && (DAT_180ceb480 != 0)) {
      if ((DAT_180ceb484 == 0) ||
         (iVar4 = FUN_180011200(lVar7 + (ulonglong)DAT_180ceb484), 0xfffffffd < iVar4 - 1U)) {
        local_150 = 0;
      }
      else {
        plVar8 = (longlong *)FUN_1803a0940(&local_148,iVar4);
        local_150 = *plVar8;
        uVar6 = DAT_180ceb480;
      }
      iVar4 = FUN_180011200((ulonglong)uVar6 + lVar7);
      local_164 = iVar4;
      local_148 = FUN_18000f3a0((ulonglong)uVar6 + lVar7 + 8);
      if (local_148 != 0) {
        iVar19 = 0;
        while ((iVar19 < iVar4 && (iVar19 < 0x40))) {
          iVar5 = FUN_180011200(local_148 + (longlong)iVar19 * 4);
          if (iVar5 - 1U < 0xfffffffe) {
            plVar8 = (longlong *)FUN_1803a0940(local_128,iVar5);
            lVar7 = *plVar8;
            if (lVar7 == 0) goto LAB_180201668;
            local_78[0] = 0;
            local_78[1] = 0;
            local_78[2] = 0;
            local_78[3] = 0;
            local_78[4] = 0;
            local_78[5] = 0;
            local_78[6] = 0;
            local_78[7] = 0;
            local_78[8] = 0;
            local_78[9] = 0;
            local_78[10] = 0;
            local_78[0xb] = 0;
            local_78[0xc] = 0;
            local_78[0xd] = 0;
            local_78[0xe] = 0;
            local_78[0xf] = 0;
            local_78[0x10] = 0;
            local_78[0x11] = 0;
            local_78[0x12] = 0;
            local_78[0x13] = 0;
            local_78[0x14] = 0;
            local_78[0x15] = 0;
            local_78[0x16] = 0;
            local_78[0x17] = 0;
            local_78[0x18] = 0;
            local_78[0x19] = 0;
            local_78[0x1a] = 0;
            local_78[0x1b] = 0;
            local_78[0x1c] = 0;
            local_78[0x1d] = 0;
            local_78[0x1e] = 0;
            local_78[0x1f] = 0;
            local_78[0x20] = 0;
            local_78[0x21] = 0;
            local_78[0x22] = 0;
            local_78[0x23] = 0;
            local_78[0x24] = 0;
            local_78[0x25] = 0;
            local_78[0x26] = 0;
            local_78[0x27] = 0;
            local_78[0x28] = 0;
            local_78[0x29] = 0;
            local_78[0x2a] = 0;
            local_78[0x2b] = 0;
            local_78[0x2c] = 0;
            local_78[0x2d] = 0;
            local_78[0x2e] = 0;
            local_78[0x2f] = 0;
            lVar9 = FUN_18000f3a0((ulonglong)DAT_180ceb474 + 8 + lVar7);
            if (0x7ffffffefffe < lVar9 - 0x10000U) {
LAB_180201663:
              cVar2 = local_168;
              goto LAB_180201668;
            }
            lVar10 = FUN_18000f3a0((ulonglong)DAT_180ceb478 + lVar9);
            if (0x7ffffffefffe < lVar10 - 0x10000U) {
LAB_18020165f:
              iVar4 = local_164;
              goto LAB_180201663;
            }
            stack0xffffffffffffff48 = 0;
            uStack_b0 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
            lVar14 = 0;
            do {
              cVar2 = FUN_180011220(lVar14 + lVar10);
              local_118[lVar14 + 0x60] = cVar2;
              if (cVar2 == '\0') break;
              uVar11 = lVar14 + 2;
              lVar14 = lVar14 + 1;
            } while (uVar11 < 0x40);
            iVar4 = strncmp(local_118 + 0x60,"weapon_",7);
            pcVar16 = local_118 + 0x60;
            if (iVar4 == 0) {
              pcVar16 = auStack_b7 + 6;
            }
            uVar11 = 0;
            if (*pcVar16 == '\0') goto LAB_18020165f;
            do {
              uVar15 = uVar11;
              bVar1 = pcVar16[uVar15];
              if ((char)bVar1 < 'a') {
                if ((0x2f < (byte)(bVar1 - 0x30)) ||
                   ((0x87fffffe03ffU >> ((ulonglong)(bVar1 - 0x30) & 0x3f) & 1) == 0))
                goto LAB_18020165f;
              }
              else if ('z' < (char)bVar1) goto LAB_18020165f;
              uVar11 = uVar15 + 1;
              if (0x2f < uVar11) goto LAB_18020165f;
              local_78[uVar15] = bVar1;
              puVar12 = (undefined8 *)auStack_b7;
              if (iVar4 == 0) {
                puVar12 = &uStack_b0;
              }
            } while (*(char *)(uVar15 + (longlong)puVar12) != '\0');
            if (uVar11 == 0) goto LAB_18020165f;
            local_78[uVar15 + 1] = 0;
            iVar4 = FUN_180011200((ulonglong)DAT_180ceb47c + lVar9);
            switch(iVar4) {
            case 0:
              lVar9 = 2;
              break;
            case 1:
              lVar9 = 1;
              break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 0x10:
              lVar9 = 0;
              break;
            default:
              local_140 = lVar7;
              lVar9 = FUN_1803a0710();
              if (lVar9 == 0) {
LAB_180201749:
                lVar9 = 8;
              }
              else {
                lVar10 = 0;
                do {
                  lVar14 = lVar10 + 1;
                  if (*(char *)(lVar9 + lVar10) != (&DAT_1806d4100)[lVar10]) goto LAB_180201749;
                  lVar10 = lVar14;
                } while (lVar14 != 5);
                lVar9 = 5;
              }
              break;
            case 8:
              lVar9 = 3;
              break;
            case 9:
              lVar9 = 4;
            }
            if (*(char *)(local_160 + 0x9c + lVar9) == '\0') goto LAB_18020165f;
            if (((DAT_180ceb4b0 == 0) || (DAT_180ceb4b4 == 0)) || (DAT_180ceb4b8 == 0)) {
              local_178 = 0;
LAB_1802017ce:
              if (iVar4 == 0) {
                local_170 = 2;
              }
              else if (iVar4 == 1) {
                local_170 = 1;
              }
              else if ((iVar4 - 2U < 5) || (iVar4 == 0x10)) {
                local_170 = 0;
              }
              else {
                local_170 = 8;
                if (iVar4 == 9) {
                  local_170 = 4;
                }
              }
            }
            else {
              uVar6 = FUN_180011440();
              local_178 = uVar6 & 0xffff;
              if (local_178 == 0x1f) {
                local_170 = 3;
              }
              else if (local_178 == 0x37) {
                local_170 = 6;
              }
              else if (local_178 == 0x31) {
                local_170 = 5;
              }
              else {
                if ((uVar6 & 0xfffe) != 0x32) goto LAB_1802017ce;
                local_170 = 7;
              }
            }
            local_118[0] = '\0';
            local_118[1] = '\0';
            local_118[2] = '\0';
            local_118[3] = '\0';
            local_118[4] = '\0';
            local_118[5] = '\0';
            local_118[6] = '\0';
            local_118[7] = '\0';
            local_118[8] = '\0';
            local_118[9] = '\0';
            local_118[10] = '\0';
            local_118[0xb] = '\0';
            local_118[0xc] = '\0';
            local_118[0xd] = '\0';
            local_118[0xe] = '\0';
            local_118[0xf] = '\0';
            local_118[0x10] = '\0';
            local_118[0x11] = '\0';
            local_118[0x12] = '\0';
            local_118[0x13] = '\0';
            local_118[0x14] = '\0';
            local_118[0x15] = '\0';
            local_118[0x16] = '\0';
            local_118[0x17] = '\0';
            local_118[0x18] = '\0';
            local_118[0x19] = '\0';
            local_118[0x1a] = '\0';
            local_118[0x1b] = '\0';
            local_118[0x1c] = '\0';
            local_118[0x1d] = '\0';
            local_118[0x1e] = '\0';
            local_118[0x1f] = '\0';
            local_118[0x20] = '\0';
            local_118[0x21] = '\0';
            local_118[0x22] = '\0';
            local_118[0x23] = '\0';
            local_118[0x24] = '\0';
            local_118[0x25] = '\0';
            local_118[0x26] = '\0';
            local_118[0x27] = '\0';
            local_118[0x28] = '\0';
            local_118[0x29] = '\0';
            local_118[0x2a] = '\0';
            local_118[0x2b] = '\0';
            local_118[0x2c] = '\0';
            local_118[0x2d] = '\0';
            local_118[0x2e] = '\0';
            local_118[0x2f] = '\0';
            local_118[0x30] = '\0';
            local_118[0x31] = '\0';
            local_118[0x32] = '\0';
            local_118[0x33] = '\0';
            local_118[0x34] = '\0';
            local_118[0x35] = '\0';
            local_118[0x36] = '\0';
            local_118[0x37] = '\0';
            local_118[0x38] = '\0';
            local_118[0x39] = '\0';
            local_118[0x3a] = '\0';
            local_118[0x3b] = '\0';
            local_118[0x3c] = '\0';
            local_118[0x3d] = '\0';
            local_118[0x3e] = '\0';
            local_118[0x3f] = '\0';
            local_118[0x40] = '\0';
            local_118[0x41] = '\0';
            local_118[0x42] = '\0';
            local_118[0x43] = '\0';
            local_118[0x44] = '\0';
            local_118[0x45] = '\0';
            local_118[0x46] = '\0';
            local_118[0x47] = '\0';
            local_118[0x48] = '\0';
            local_118[0x49] = '\0';
            local_118[0x4a] = '\0';
            local_118[0x4b] = '\0';
            local_118[0x4c] = '\0';
            local_118[0x4d] = '\0';
            local_118[0x4e] = '\0';
            local_118[0x4f] = '\0';
            local_118[0x50] = '\0';
            local_118[0x51] = '\0';
            local_118[0x52] = '\0';
            local_118[0x53] = '\0';
            local_118[0x54] = '\0';
            local_118[0x55] = '\0';
            local_118[0x56] = '\0';
            local_118[0x57] = '\0';
            local_118[0x58] = '\0';
            local_118[0x59] = '\0';
            local_118[0x5a] = '\0';
            local_118[0x5b] = '\0';
            local_118[0x5c] = '\0';
            local_118[0x5d] = '\0';
            local_118[0x5e] = '\0';
            local_118[0x5f] = '\0';
            puVar17 = &DAT_1806f1258;
            if (local_168 != '\0') {
              puVar17 = &DAT_18058b643;
            }
            local_180 = (uint)(lVar7 == local_150);
            local_188 = local_78;
            snprintf(local_118,0x60,"%s[\"%s\",%d,%d,%d]",puVar17);
            sVar13 = strlen(local_118);
            FUN_1800134a0(param_1,local_118,sVar13);
            cVar2 = '\0';
            local_168 = '\0';
            iVar19 = iVar19 + 1;
            iVar4 = local_164;
          }
          else {
LAB_180201668:
            iVar19 = iVar19 + 1;
          }
        }
        param_2 = local_138;
      }
    }
  }
  lVar7 = local_160;
  if (DAT_180ceb488 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_18000f3a0(param_2 + (ulonglong)DAT_180ceb488);
  }
  if (((*(char *)(lVar7 + 0xa2) != '\0') && (lVar9 != 0)) &&
     ((DAT_180ceb48c != 0 &&
      (cVar3 = FUN_180011220(lVar9 + (ulonglong)DAT_180ceb48c), cVar3 == '\x01')))) {
    local_118[0] = '\0';
    local_118[1] = '\0';
    local_118[2] = '\0';
    local_118[3] = '\0';
    local_118[4] = '\0';
    local_118[5] = '\0';
    local_118[6] = '\0';
    local_118[7] = '\0';
    local_118[8] = '\0';
    local_118[9] = '\0';
    local_118[10] = '\0';
    local_118[0xb] = '\0';
    local_118[0xc] = '\0';
    local_118[0xd] = '\0';
    local_118[0xe] = '\0';
    local_118[0xf] = '\0';
    local_118[0x10] = '\0';
    local_118[0x11] = '\0';
    local_118[0x12] = '\0';
    local_118[0x13] = '\0';
    local_118[0x14] = '\0';
    local_118[0x15] = '\0';
    local_118[0x16] = '\0';
    local_118[0x17] = '\0';
    local_118[0x18] = '\0';
    local_118[0x19] = '\0';
    local_118[0x1a] = '\0';
    local_118[0x1b] = '\0';
    local_118[0x1c] = '\0';
    local_118[0x1d] = '\0';
    local_118[0x1e] = '\0';
    local_118[0x1f] = '\0';
    local_118[0x20] = '\0';
    local_118[0x21] = '\0';
    local_118[0x22] = '\0';
    local_118[0x23] = '\0';
    local_118[0x24] = '\0';
    local_118[0x25] = '\0';
    local_118[0x26] = '\0';
    local_118[0x27] = '\0';
    local_118[0x28] = '\0';
    local_118[0x29] = '\0';
    local_118[0x2a] = '\0';
    local_118[0x2b] = '\0';
    local_118[0x2c] = '\0';
    local_118[0x2d] = '\0';
    local_118[0x2e] = '\0';
    local_118[0x2f] = '\0';
    local_118[0x30] = '\0';
    local_118[0x31] = '\0';
    local_118[0x32] = '\0';
    local_118[0x33] = '\0';
    local_118[0x34] = '\0';
    local_118[0x35] = '\0';
    local_118[0x36] = '\0';
    local_118[0x37] = '\0';
    local_118[0x38] = '\0';
    local_118[0x39] = '\0';
    local_118[0x3a] = '\0';
    local_118[0x3b] = '\0';
    local_118[0x3c] = '\0';
    local_118[0x3d] = '\0';
    local_118[0x3e] = '\0';
    local_118[0x3f] = '\0';
    local_118[0x40] = '\0';
    local_118[0x41] = '\0';
    local_118[0x42] = '\0';
    local_118[0x43] = '\0';
    local_118[0x44] = '\0';
    local_118[0x45] = '\0';
    local_118[0x46] = '\0';
    local_118[0x47] = '\0';
    local_118[0x48] = '\0';
    local_118[0x49] = '\0';
    local_118[0x4a] = '\0';
    local_118[0x4b] = '\0';
    local_118[0x4c] = '\0';
    local_118[0x4d] = '\0';
    local_118[0x4e] = '\0';
    local_118[0x4f] = '\0';
    local_118[0x50] = '\0';
    local_118[0x51] = '\0';
    local_118[0x52] = '\0';
    local_118[0x53] = '\0';
    local_118[0x54] = '\0';
    local_118[0x55] = '\0';
    local_118[0x56] = '\0';
    local_118[0x57] = '\0';
    local_118[0x58] = '\0';
    local_118[0x59] = '\0';
    local_118[0x5a] = '\0';
    local_118[0x5b] = '\0';
    local_118[0x5c] = '\0';
    local_118[0x5d] = '\0';
    local_118[0x5e] = '\0';
    local_118[0x5f] = '\0';
    puVar17 = &DAT_1806f1258;
    if (cVar2 != '\0') {
      puVar17 = &DAT_18058b643;
    }
    local_170 = 6;
    local_178 = 0x37;
    local_180 = 0;
    local_188 = (byte *)0x18058b628;
    snprintf(local_118,0x60,"%s[\"%s\",%d,%d,%d]",puVar17);
    sVar13 = strlen(local_118);
    FUN_1800134a0(param_1,local_118,sVar13);
    cVar2 = '\0';
  }
  if (*(char *)(lVar7 + 0xa3) != '\0') {
    if (((lVar9 == 0) || (DAT_180ceb490 == 0)) ||
       (cVar3 = FUN_180011220(lVar9 + (ulonglong)DAT_180ceb490), cVar3 != '\x01')) {
      if ((DAT_180ceb494 == 0) ||
         (iVar4 = FUN_180011200(param_2 + (ulonglong)DAT_180ceb494), iVar4 < 1)) goto LAB_180201a56;
      if (cVar2 != '\0') {
        puVar18 = &DAT_18058b643;
      }
      local_178 = 0x32;
      local_188 = (byte *)0x1806e0c04;
    }
    else {
      if (cVar2 != '\0') {
        puVar18 = &DAT_18058b643;
      }
      local_178 = 0x33;
      local_188 = (byte *)0x180704ea8;
    }
    local_170 = 7;
    local_180 = 0;
    local_118[0] = '\0';
    local_118[1] = '\0';
    local_118[2] = '\0';
    local_118[3] = '\0';
    local_118[4] = '\0';
    local_118[5] = '\0';
    local_118[6] = '\0';
    local_118[7] = '\0';
    local_118[8] = '\0';
    local_118[9] = '\0';
    local_118[10] = '\0';
    local_118[0xb] = '\0';
    local_118[0xc] = '\0';
    local_118[0xd] = '\0';
    local_118[0xe] = '\0';
    local_118[0xf] = '\0';
    local_118[0x10] = '\0';
    local_118[0x11] = '\0';
    local_118[0x12] = '\0';
    local_118[0x13] = '\0';
    local_118[0x14] = '\0';
    local_118[0x15] = '\0';
    local_118[0x16] = '\0';
    local_118[0x17] = '\0';
    local_118[0x18] = '\0';
    local_118[0x19] = '\0';
    local_118[0x1a] = '\0';
    local_118[0x1b] = '\0';
    local_118[0x1c] = '\0';
    local_118[0x1d] = '\0';
    local_118[0x1e] = '\0';
    local_118[0x1f] = '\0';
    local_118[0x20] = '\0';
    local_118[0x21] = '\0';
    local_118[0x22] = '\0';
    local_118[0x23] = '\0';
    local_118[0x24] = '\0';
    local_118[0x25] = '\0';
    local_118[0x26] = '\0';
    local_118[0x27] = '\0';
    local_118[0x28] = '\0';
    local_118[0x29] = '\0';
    local_118[0x2a] = '\0';
    local_118[0x2b] = '\0';
    local_118[0x2c] = '\0';
    local_118[0x2d] = '\0';
    local_118[0x2e] = '\0';
    local_118[0x2f] = '\0';
    local_118[0x30] = '\0';
    local_118[0x31] = '\0';
    local_118[0x32] = '\0';
    local_118[0x33] = '\0';
    local_118[0x34] = '\0';
    local_118[0x35] = '\0';
    local_118[0x36] = '\0';
    local_118[0x37] = '\0';
    local_118[0x38] = '\0';
    local_118[0x39] = '\0';
    local_118[0x3a] = '\0';
    local_118[0x3b] = '\0';
    local_118[0x3c] = '\0';
    local_118[0x3d] = '\0';
    local_118[0x3e] = '\0';
    local_118[0x3f] = '\0';
    local_118[0x40] = '\0';
    local_118[0x41] = '\0';
    local_118[0x42] = '\0';
    local_118[0x43] = '\0';
    local_118[0x44] = '\0';
    local_118[0x45] = '\0';
    local_118[0x46] = '\0';
    local_118[0x47] = '\0';
    local_118[0x48] = '\0';
    local_118[0x49] = '\0';
    local_118[0x4a] = '\0';
    local_118[0x4b] = '\0';
    local_118[0x4c] = '\0';
    local_118[0x4d] = '\0';
    local_118[0x4e] = '\0';
    local_118[0x4f] = '\0';
    local_118[0x50] = '\0';
    local_118[0x51] = '\0';
    local_118[0x52] = '\0';
    local_118[0x53] = '\0';
    local_118[0x54] = '\0';
    local_118[0x55] = '\0';
    local_118[0x56] = '\0';
    local_118[0x57] = '\0';
    local_118[0x58] = '\0';
    local_118[0x59] = '\0';
    local_118[0x5a] = '\0';
    local_118[0x5b] = '\0';
    local_118[0x5c] = '\0';
    local_118[0x5d] = '\0';
    local_118[0x5e] = '\0';
    local_118[0x5f] = '\0';
    snprintf(local_118,0x60,"%s[\"%s\",%d,%d,%d]",puVar18);
    sVar13 = strlen(local_118);
    FUN_1800134a0(param_1,local_118,sVar13);
  }
LAB_180201a56:
  FUN_1800134a0(param_1,&DAT_1806e9114,1);
  return param_1;
}



/* ===== 180201ae0 FUN_180201ae0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_180201ae0(undefined8 *param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  uint local_148;
  uint local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulonglong local_100 [4];
  undefined1 local_e0 [40];
  char local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_178;
  local_138 = 0;
  local_130 = param_1;
  local_128 = param_4;
  if ((DAT_180ceb4a0 == 0) ||
     (lVar4 = FUN_18000f3a0((ulonglong)DAT_180ceb4a0 + param_2), lVar4 == 0)) {
    if (param_3 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    lVar4 = (longlong)param_3;
  }
  iVar3 = FUN_180011200((ulonglong)DAT_180ceb4a4 + param_2);
  if (iVar3 - 1U < 0xfffffffe) {
    puVar5 = (undefined8 *)FUN_1803a0940(&local_130,iVar3);
    puVar5 = (undefined8 *)*puVar5;
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_b8[8] = '\0';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = '\0';
  local_b8[0x10] = '\0';
  local_b8[0x11] = '\0';
  local_b8[0x12] = '\0';
  local_b8[0x13] = '\0';
  local_b8[0x14] = '\0';
  local_b8[0x15] = '\0';
  local_b8[0x16] = '\0';
  local_b8[0x17] = '\0';
  local_b8[0x18] = '\0';
  local_b8[0x19] = '\0';
  local_b8[0x1a] = '\0';
  local_b8[0x1b] = '\0';
  local_b8[0x1c] = '\0';
  local_b8[0x1d] = '\0';
  local_b8[0x1e] = '\0';
  local_b8[0x1f] = '\0';
  local_b8[0x20] = '\0';
  local_b8[0x21] = '\0';
  local_b8[0x22] = '\0';
  local_b8[0x23] = '\0';
  local_b8[0x24] = '\0';
  local_b8[0x25] = '\0';
  local_b8[0x26] = '\0';
  local_b8[0x27] = '\0';
  local_b8[0x28] = '\0';
  local_b8[0x29] = '\0';
  local_b8[0x2a] = '\0';
  local_b8[0x2b] = '\0';
  local_b8[0x2c] = '\0';
  local_b8[0x2d] = '\0';
  local_b8[0x2e] = '\0';
  local_b8[0x2f] = '\0';
  local_b8[0x30] = '\0';
  local_b8[0x31] = '\0';
  local_b8[0x32] = '\0';
  local_b8[0x33] = '\0';
  local_b8[0x34] = '\0';
  local_b8[0x35] = '\0';
  local_b8[0x36] = '\0';
  local_b8[0x37] = '\0';
  local_b8[0x38] = '\0';
  local_b8[0x39] = '\0';
  local_b8[0x3a] = '\0';
  local_b8[0x3b] = '\0';
  local_b8[0x3c] = '\0';
  local_b8[0x3d] = '\0';
  local_b8[0x3e] = '\0';
  local_b8[0x3f] = '\0';
  local_b8[0x40] = '\0';
  local_b8[0x41] = '\0';
  local_b8[0x42] = '\0';
  local_b8[0x43] = '\0';
  local_b8[0x44] = '\0';
  local_b8[0x45] = '\0';
  local_b8[0x46] = '\0';
  local_b8[0x47] = '\0';
  local_b8[0x48] = '\0';
  local_b8[0x49] = '\0';
  local_b8[0x4a] = '\0';
  local_b8[0x4b] = '\0';
  local_b8[0x4c] = '\0';
  local_b8[0x4d] = '\0';
  local_b8[0x4e] = '\0';
  local_b8[0x4f] = '\0';
  local_b8[0x50] = '\0';
  local_b8[0x51] = '\0';
  local_b8[0x52] = '\0';
  local_b8[0x53] = '\0';
  local_b8[0x54] = '\0';
  local_b8[0x55] = '\0';
  local_b8[0x56] = '\0';
  local_b8[0x57] = '\0';
  local_b8[0x58] = '\0';
  local_b8[0x59] = '\0';
  local_b8[0x5a] = '\0';
  local_b8[0x5b] = '\0';
  local_b8[0x5c] = '\0';
  local_b8[0x5d] = '\0';
  local_b8[0x5e] = '\0';
  local_b8[0x5f] = '\0';
  local_158 = lVar4;
  if (puVar5 == (undefined8 *)0x0) {
    snprintf(local_b8,0x60,"[%d,\"%llu\",0]",param_3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar6 = strlen(local_b8);
    FUN_1800133a0(param_1,local_b8,sVar6);
    return param_1;
  }
  local_150 = -1;
  if ((((*(char *)(param_5 + 0x94) != '\0') && (DAT_180ceb498 != 0)) && (DAT_180ceb49c != 0)) &&
     ((lVar4 = FUN_18000f3a0((ulonglong)DAT_180ceb498 + param_2), 0x7ffffffefffe < lVar4 - 0x10000U
      || (local_150 = FUN_180011200((ulonglong)DAT_180ceb49c + lVar4), local_150 < 0)))) {
    local_150 = -1;
  }
  cVar2 = FUN_180011220((undefined1 *)((ulonglong)DAT_180ceb4ac + (longlong)puVar5));
  local_148 = (uint)(cVar2 == '\x03');
  snprintf(local_b8,0x60,"[%d,\"%llu\",1,%d,%d,",param_3);
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  sVar6 = strlen(local_b8);
  FUN_1800133a0(&local_120,local_b8,sVar6);
  if (*(int *)(param_5 + 0x98) < 1) {
    uVar13 = 5;
    pcVar9 = "null]";
  }
  else {
    local_130 = puVar5;
    pcVar9 = (char *)FUN_1803a0710(&local_130);
    if (((pcVar9 == (char *)0x0) || (iVar3 = strcmp(pcVar9,"C_CSPlayerPawn"), iVar3 != 0)) ||
       ((cVar2 = FUN_180011220((undefined1 *)((ulonglong)DAT_180ceb4a8 + (longlong)puVar5)),
        cVar2 != '\0' ||
        ((*(int *)(param_5 + 0x98) == 1 && (cVar2 = FUN_1800307b0(puVar5,local_128), cVar2 != '\0'))
        )))) {
      local_100[1] = 0;
      local_100[2] = 2;
      local_100[3] = 0xf;
      local_100[0] = (ulonglong)DAT_180704efc;
      puVar7 = local_100;
      uVar12 = 4;
    }
    else {
      puVar7 = (ulonglong *)FUN_180201430(local_e0,puVar5,param_5);
      uVar12 = 2;
    }
    if (puVar7[3] < 0x10) {
      puVar10 = puVar7;
    }
    else {
      puVar10 = (ulonglong *)*puVar7;
    }
    local_138 = uVar12;
    FUN_1800134a0(&local_120,puVar10,puVar7[2]);
    if (((uVar12 & 4) != 0) && (uVar12 = uVar12 & 0xfffffffb, 0xf < local_100[3])) {
      uVar11 = local_100[3] + 1;
      uVar8 = local_100[0];
      if (0xfff < uVar11) {
        uVar8 = *(ulonglong *)(local_100[0] - 8);
        if (0x1f < (local_100[0] - uVar8) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          puVar5 = (undefined8 *)(*pcVar1)();
          return puVar5;
        }
        uVar11 = local_100[3] + 0x28;
      }
      thunk_FUN_1803d64e0(uVar8,uVar11);
    }
    if ((uVar12 & 2) != 0) {
      FUN_18000f890(local_e0);
    }
    uVar13 = 1;
    pcVar9 = "]";
  }
  FUN_1800134a0(&local_120,pcVar9,uVar13);
  *param_1 = local_120;
  param_1[1] = uStack_118;
  param_1[2] = local_110;
  param_1[3] = uStack_108;
  return param_1;
}



/* ===== 180201e40 FUN_180201e40 ===== */

void FUN_180201e40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  
  if ((param_1 != 0) && (lVar2 = FUN_1804ef120(param_1,"[neverlose] scoreboard | "), lVar2 != 0)) {
    for (lVar2 = FUN_1804ef120(param_1,"[neverlose] scoreboard | defined #"); lVar2 != 0;
        lVar2 = FUN_1804ef120(lVar2 + 1)) {
      if ((lVar2 == param_1) || (*(char *)(lVar2 + -1) == '\n')) {
        sVar3 = strlen("[neverlose] scoreboard | defined #");
        iVar1 = FUN_18051566c(sVar3 + lVar2,0,10);
        if (iVar1 != 0) {
          DAT_180ceb460 = iVar1;
        }
        break;
      }
    }
    for (lVar2 = FUN_1804ef120(param_1,"[neverlose] scoreboard | lost #"); lVar2 != 0;
        lVar2 = FUN_1804ef120(lVar2 + 1)) {
      if ((lVar2 == param_1) || (*(char *)(lVar2 + -1) == '\n')) {
        sVar3 = strlen("[neverlose] scoreboard | lost #");
        iVar1 = FUN_18051566c(sVar3 + lVar2,0,10);
        if (iVar1 != 0) {
          DAT_180ceb4bc = iVar1;
        }
        break;
      }
    }
    lVar2 = FUN_1804ef120(param_1,"[neverlose] scoreboard | define #");
    if (lVar2 != 0) {
      while ((lVar2 != param_1 && (*(char *)(lVar2 + -1) != '\n'))) {
        lVar2 = FUN_1804ef120(lVar2 + 1);
        if (lVar2 == 0) {
          return;
        }
      }
      sVar3 = strlen("[neverlose] scoreboard | define #");
      iVar1 = FUN_18051566c(sVar3 + lVar2,0,10);
      if ((iVar1 != 0) && (lVar2 = FUN_1804ef120(param_1," failed: "), lVar2 != 0)) {
        DAT_180ceb464 = iVar1;
      }
    }
  }
  return;
}



/* ===== 180201fc0 FUN_180201fc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180201fc0(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_e8;
  undefined8 *local_e0;
  char local_d8 [96];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  local_d8[0] = '\0';
  local_d8[1] = '\0';
  local_d8[2] = '\0';
  local_d8[3] = '\0';
  local_d8[4] = '\0';
  local_d8[5] = '\0';
  local_d8[6] = '\0';
  local_d8[7] = '\0';
  local_d8[8] = '\0';
  local_d8[9] = '\0';
  local_d8[10] = '\0';
  local_d8[0xb] = '\0';
  local_d8[0xc] = '\0';
  local_d8[0xd] = '\0';
  local_d8[0xe] = '\0';
  local_d8[0xf] = '\0';
  local_d8[0x10] = '\0';
  local_d8[0x11] = '\0';
  local_d8[0x12] = '\0';
  local_d8[0x13] = '\0';
  local_d8[0x14] = '\0';
  local_d8[0x15] = '\0';
  local_d8[0x16] = '\0';
  local_d8[0x17] = '\0';
  local_d8[0x18] = '\0';
  local_d8[0x19] = '\0';
  local_d8[0x1a] = '\0';
  local_d8[0x1b] = '\0';
  local_d8[0x1c] = '\0';
  local_d8[0x1d] = '\0';
  local_d8[0x1e] = '\0';
  local_d8[0x1f] = '\0';
  local_d8[0x20] = '\0';
  local_d8[0x21] = '\0';
  local_d8[0x22] = '\0';
  local_d8[0x23] = '\0';
  local_d8[0x24] = '\0';
  local_d8[0x25] = '\0';
  local_d8[0x26] = '\0';
  local_d8[0x27] = '\0';
  local_d8[0x28] = '\0';
  local_d8[0x29] = '\0';
  local_d8[0x2a] = '\0';
  local_d8[0x2b] = '\0';
  local_d8[0x2c] = '\0';
  local_d8[0x2d] = '\0';
  local_d8[0x2e] = '\0';
  local_d8[0x2f] = '\0';
  local_d8[0x30] = '\0';
  local_d8[0x31] = '\0';
  local_d8[0x32] = '\0';
  local_d8[0x33] = '\0';
  local_d8[0x34] = '\0';
  local_d8[0x35] = '\0';
  local_d8[0x36] = '\0';
  local_d8[0x37] = '\0';
  local_d8[0x38] = '\0';
  local_d8[0x39] = '\0';
  local_d8[0x3a] = '\0';
  local_d8[0x3b] = '\0';
  local_d8[0x3c] = '\0';
  local_d8[0x3d] = '\0';
  local_d8[0x3e] = '\0';
  local_d8[0x3f] = '\0';
  local_d8[0x40] = '\0';
  local_d8[0x41] = '\0';
  local_d8[0x42] = '\0';
  local_d8[0x43] = '\0';
  local_d8[0x44] = '\0';
  local_d8[0x45] = '\0';
  local_d8[0x46] = '\0';
  local_d8[0x47] = '\0';
  local_d8[0x48] = '\0';
  local_d8[0x49] = '\0';
  local_d8[0x4a] = '\0';
  local_d8[0x4b] = '\0';
  local_d8[0x4c] = '\0';
  local_d8[0x4d] = '\0';
  local_d8[0x4e] = '\0';
  local_d8[0x4f] = '\0';
  local_d8[0x50] = '\0';
  local_d8[0x51] = '\0';
  local_d8[0x52] = '\0';
  local_d8[0x53] = '\0';
  local_d8[0x54] = '\0';
  local_d8[0x55] = '\0';
  local_d8[0x56] = '\0';
  local_d8[0x57] = '\0';
  local_d8[0x58] = '\0';
  local_d8[0x59] = '\0';
  local_d8[0x5a] = '\0';
  local_d8[0x5b] = '\0';
  local_d8[0x5c] = '\0';
  local_d8[0x5d] = '\0';
  local_d8[0x5e] = '\0';
  local_d8[0x5f] = '\0';
  local_e0 = param_1;
  snprintf(local_d8,0x60,
           "if(typeof(WlNlScoreboard)!==\'undefined\'&&WlNlScoreboard&&WlNlScoreboard.gen===%u){WlNlScoreboard."
           ,DAT_180ceb4c4);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_f8 = DAT_180ceb4c4;
  snprintf(&local_78,0x60,"}else{$.Msg(\'%s%u, call dropped\');}","[neverlose] scoreboard | lost #")
  ;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_d8);
  FUN_1800133a0(param_1,local_d8,sVar1);
  local_e8 = 1;
  sVar1 = strlen(param_2);
  FUN_1800134a0(param_1,param_2,sVar1);
  sVar1 = strlen((char *)&local_78);
  FUN_1800134a0(param_1,&local_78,sVar1);
  return param_1;
}



/* ===== 180202130 FUN_180202130 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180202130(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar4 = DAT_180ceb458;
  if (DAT_180cc45ef == '\0') {
    return 0;
  }
  if ((((DAT_180961ab0 == 0) || (lVar2 = FUN_18000f3a0(), lVar2 == 0)) ||
      (lVar2 = FUN_18000f3a0(lVar2 + 8), lVar2 == 0)) ||
     ((lVar3 = FUN_18000f3a0(lVar2), lVar3 == 0 || (lVar3 = FUN_18000f3a0(lVar3), lVar3 == 0)))) {
    lVar2 = 0;
  }
  else if (lVar2 == lVar4) {
    if (param_1 == 0) {
      return 0;
    }
    cVar1 = FUN_180200ed0();
    if (cVar1 == '\0') {
      return 0;
    }
    lVar4 = FUN_180200ff0();
    if (lVar4 == 0) {
      return 0;
    }
    lVar3 = FUN_18000f3a0(lVar4);
    if (lVar3 == 0) {
      return 0;
    }
    pcVar5 = (code *)FUN_18000f3a0(lVar3 + 0x268);
    if (pcVar5 < DAT_180ceb448) {
      return 0;
    }
    if (pcVar5 < DAT_180ceb440) {
      (*pcVar5)(lVar4,lVar2,param_1,&DAT_18070230d,1);
      return 1;
    }
    return 0;
  }
  FUN_1802b2560("[neverlose] scoreboard | hud panel %p -> %p, #%u dropped, re-inject",lVar4,lVar2,
                DAT_180ceb4c4);
  PTR_s_first_define_1809f0990 = s_hud_panel_changed_180704f08;
  DAT_1809f09c8 = 0;
  puVar6 = &DAT_1809f09b8;
  if (0xf < DAT_1809f09d0) {
    puVar6 = _DAT_1809f09b8;
  }
  DAT_180cc45ef = 0;
  DAT_180cc45ed = 0;
  DAT_180ceb458 = 0;
  *puVar6 = 0;
  puVar7 = &DAT_1809f09e0;
  DAT_180ceb450 = 0;
  do {
    puVar7[2] = 0;
    if ((ulonglong)puVar7[3] < 0x10) {
      puVar8 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar7;
    }
    puVar7 = puVar7 + 4;
    *(undefined1 *)puVar8 = 0;
  } while (puVar7 != &DAT_1809f11e0);
  return 0;
}



/* ===== 1802022e0 FUN_1802022e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802022e0(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_68;
  if ((((DAT_180961ab0 != 0) && (lVar2 = FUN_18000f3a0(), lVar2 != 0)) &&
      (lVar2 = FUN_18000f3a0(lVar2 + 8), lVar2 != 0)) &&
     ((lVar3 = FUN_18000f3a0(lVar2), lVar3 != 0 && (lVar3 = FUN_18000f3a0(lVar3), lVar3 != 0)))) {
    if (DAT_180cc492c == '\0') {
      plVar8 = &DAT_180d00d00;
      plVar10 = &DAT_180d00d00;
      do {
        if ((code *)*plVar10 == FUN_180201e40) goto LAB_180202397;
        plVar10 = plVar10 + 1;
      } while (plVar10 != (longlong *)&DAT_180d00d40);
      do {
        LOCK();
        lVar3 = *plVar8;
        if (lVar3 == 0) {
          *plVar8 = (longlong)FUN_180201e40;
        }
        UNLOCK();
      } while ((lVar3 != 0) && (plVar8 = plVar8 + 1, plVar8 != (longlong *)&DAT_180d00d40));
LAB_180202397:
      DAT_180cc492c = '\x01';
    }
    DAT_180ceb4c4 = DAT_180ceb4c4 + 1;
    if (DAT_180ceb4c4 == 0) {
      DAT_180ceb4c4 = 1;
    }
    FUN_180029840(&DAT_1809f11e0,
                  "(function (gen) {\nif (typeof WlNlScoreboard !== \'undefined\' && WlNlScoreboard && WlNlScoreboard.reset) {\ntry { WlNlScoreboard.reset(); } catch (e) {}\n\t}\n\n\tvar S = {\n\t\to: 88, w: 100, money: false, equip: 0,\n\t\tplayers: {}, cursor: 0, root: null, key: \'\', force: true,\n\t\trows: {}, revealed: {}, boxes: [], handlers: [], said: {}\n\t};\n\n\tvar ICON_STYLE = [\n\t\t[\'marginLeft\', \'1px\'], [\'marginRight\', \'1px\'], [\'uiScale\', \'45%\'], [\'verticalAlign\', \'middle\'],\n\t\t[\'transitionProperty\', \'opacity\'], [\'transitionDuration\', \'0.1s\'], [\'transitionTimingFunction\', \'ease-in-out\']\n\t];\n\n\tfunction ok(p) { return !!p && typeof p.IsValid === \'function\' && p.IsValid(); }\n\n\tfunction say(key, text) {\n\t\tif (S.said[key]) return;\n\t\tS.said[key] = true;\n\t\t$.Msg(\'[neverlose] scoreboard | \' + text);\n\t}\n\n\tfunction all(r, cls) {\n\t\ttry { return r.FindChildrenWithClassTraverse(cls) || []; } catch (e) { return []; }\n\t}\n\n\tfunction insideEndOfMatch(p) {\n\t\tfor (var q = p; ok(q); q = q.GetParent()) {\n\t\t\tif (typeof q.id === \'string\' && q.id.indexOf(\'EndOfMatch\') >= 0) return true;\n\t\t}\n\t\treturn false;\n\t}\n\n\tfunction board() {\n\t\tif (ok(S.root)) return S.root;\n\t\tvar ctx = $.GetContextPanel();\n\t\tif (!ok(ctx)) return null;\n\t\tvar found = null;\n\t\tvar spare = null;\n\t\tvar mains = all(ctx, \'sb-main\');\n\t\tfor (var i = 0; i < mains.length && !found; ++i) {\n\t\t\tif (insideEndOfMatch(mains[i])) continue;\n\t\t\tvar top = null;\n\t\t\tfor (var q = mains[i]; ok(q) && q !== ctx; q = q.GetParent()) {\n\t\t\t\ttop = q;\n\t\t\t\tif (q.paneltype === \'CSGOScoreboard\') {\n\t\t\t\t\tfound = q;\n\t\t\t\t\tbreak;\n\t\t\t\t}\n\t\t\t}\n\t\t\tif (!spare) spare = top;\n\t\t}\n\t\tif (!found && spare) {\n\t\t\tfound = spare;\n\t\t\tsay(\'spare\', \'no CSGOScoreboard above .sb-main, using \' + spare.paneltype + \' #\' + spare.id);\n\t\t}\n\t\tif (!found) return null;\n\t\tS.root = found;\n\t\tS.rows = {};\n\t\tS.key = \'\';\n\t\tS.force = true;\n\t\tsay(\'root:\' + found.id, \'root \' + found.paneltype + \' #\' + found.id);\n\t\treturn found;\n\t}\n\n\tfunction setWidth(p, value) {\n\t\tif (!ok(p)) return;\n\t\tif (!p.BHasClass(\'nl-scoreboard-width\')) p.AddClass(\'nl-scoreboard-width\');\n\t\tp.style.width..." /* TRUNCATED STRING LITERAL */
                  ,0x2b0f);
    puVar4 = (undefined8 *)FUN_180201310(local_30,DAT_180ceb4c4);
    if ((ulonglong)puVar4[3] < 0x10) {
      puVar9 = puVar4;
    }
    else {
      puVar9 = (undefined8 *)*puVar4;
    }
    FUN_1800134a0(&DAT_1809f11e0,puVar9,puVar4[2]);
    FUN_18000f890(local_30);
    FUN_1800134a0(&DAT_1809f11e0,&DAT_1806e1984,2);
    FUN_1802b2560("[neverlose] scoreboard | run #%u (%s) on hud panel %p",DAT_180ceb4c4,
                  PTR_s_first_define_1809f0990,lVar2);
    puVar4 = &DAT_1809f11e0;
    if (((((DAT_1809f11f8 < 0x10) || (puVar4 = DAT_1809f11e0, DAT_1809f11e0 != (undefined8 *)0x0))
         && (cVar1 = FUN_180200ed0(), cVar1 != '\0')) &&
        ((lVar3 = FUN_180200ff0(), lVar3 != 0 && (lVar5 = FUN_18000f3a0(lVar3), lVar5 != 0)))) &&
       ((pcVar6 = (code *)FUN_18000f3a0(lVar5 + 0x268), DAT_180ceb448 <= pcVar6 &&
        (pcVar6 < DAT_180ceb440)))) {
      local_48 = 1;
      (*pcVar6)(lVar3,lVar2,puVar4,&DAT_18070230d);
      DAT_180cc45ed = 1;
      DAT_180ceb454 = 0;
      DAT_1809f09c8 = 0;
      puVar7 = &DAT_1809f09b8;
      if (0xf < DAT_1809f09d0) {
        puVar7 = _DAT_1809f09b8;
      }
      DAT_180ceb458 = lVar2;
      *puVar7 = 0;
      puVar4 = &DAT_1809f09e0;
      do {
        puVar4[2] = 0;
        if ((ulonglong)puVar4[3] < 0x10) {
          puVar9 = puVar4;
        }
        else {
          puVar9 = (undefined8 *)*puVar4;
        }
        *(undefined1 *)puVar9 = 0;
        puVar4 = puVar4 + 4;
      } while ((undefined8 **)puVar4 != &DAT_1809f11e0);
    }
    else {
      FUN_1802b2560("[neverlose] scoreboard | #%u not run: run_script unavailable, next try in %d ticks"
                    ,DAT_180ceb4c4,DAT_1809ef99c);
      DAT_180ceb450 = DAT_1809ef99c;
      DAT_1809ef99c = DAT_1809ef99c * 2;
      if (0x400 < DAT_1809ef99c) {
        DAT_1809ef99c = 0x400;
      }
      PTR_s_first_define_1809f0990 = s_retry_after_run_script_failure_180705030;
    }
  }
  return;
}



/* ===== 180202590 FUN_180202590 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180202590(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (((((DAT_180cc45ef != '\0') || (DAT_180cc45ed != '\0')) && (DAT_180961ab0 != 0)) &&
      (((lVar2 = FUN_18000f3a0(), lVar2 != 0 && (lVar2 = FUN_18000f3a0(lVar2 + 8), lVar2 != 0)) &&
       ((lVar3 = FUN_18000f3a0(lVar2), lVar3 != 0 &&
        ((lVar3 = FUN_18000f3a0(lVar3), lVar3 != 0 && (lVar2 == DAT_180ceb458)))))))) &&
     ((cVar1 = FUN_180200ed0(), cVar1 != '\0' &&
      ((((lVar3 = FUN_180200ff0(), lVar3 != 0 && (lVar4 = FUN_18000f3a0(lVar3), lVar4 != 0)) &&
        (pcVar5 = (code *)FUN_18000f3a0(lVar4 + 0x268), DAT_180ceb448 <= pcVar5)) &&
       (pcVar5 < DAT_180ceb440)))))) {
    (*pcVar5)(lVar3,lVar2,
              "if(typeof(WlNlScoreboard)!==\'undefined\'&&WlNlScoreboard){WlNlScoreboard.reset();}WlNlScoreboard=undefined;"
              ,&DAT_18070230d,1);
  }
  DAT_180cc45ef = 0;
  PTR_s_first_define_1809f0990 = s_first_define_180704e70;
  DAT_1809f09c8 = 0;
  puVar6 = &DAT_1809f09b8;
  if (0xf < DAT_1809f09d0) {
    puVar6 = _DAT_1809f09b8;
  }
  DAT_180cc45ed = 0;
  DAT_180ceb458 = 0;
  DAT_180ceb450 = 0;
  *puVar6 = 0;
  puVar7 = &DAT_1809f09e0;
  do {
    puVar7[2] = 0;
    if ((ulonglong)puVar7[3] < 0x10) {
      puVar8 = puVar7;
    }
    else {
      puVar8 = (undefined8 *)*puVar7;
    }
    puVar7 = puVar7 + 4;
    *(undefined1 *)puVar8 = 0;
  } while (puVar7 != &DAT_1809f11e0);
  DAT_1809ef99c = 0x40;
  return;
}



/* ===== 180202700 FUN_180202700 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180202700(void)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  HMODULE hModule;
  FARPROC pFVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 ****ppppuVar12;
  size_t sVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  undefined8 *****pppppuVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  undefined8 **ppuVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****_Buf1;
  undefined8 ****ppppuVar22;
  undefined8 *****pppppuVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  undefined8 *puVar27;
  ulonglong *puVar28;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  char *local_148;
  uint local_140;
  int local_138;
  char local_128;
  uint local_124;
  undefined8 local_120;
  undefined8 *****local_118;
  undefined8 ****ppppuStack_110;
  undefined8 ****local_108;
  undefined8 ****ppppuStack_100;
  undefined8 local_e8;
  ulonglong local_e0;
  char local_d8 [32];
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
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_168;
  if (DAT_180cc45ee != '\0') {
    FUN_180202590();
    DAT_180cc45ee = '\0';
    puVar9 = auStack_168;
    goto LAB_18020332a;
  }
  if ((((DAT_18095d358 == 0x58) && (DAT_18095d35c == 100)) && (DAT_18095d360 == '\0')) &&
     (DAT_18095d364 == 0)) {
    if ((DAT_180cc45ef != '\0') || (puVar9 = auStack_168, DAT_180cc45ed != '\0')) {
      FUN_180202590();
      puVar9 = auStack_168;
    }
    goto LAB_18020332a;
  }
  puVar9 = auStack_168;
  if ((DAT_180cd1ac4 == '\0') || (puVar9 = auStack_168, DAT_180961ab0 == 0)) goto LAB_18020332a;
  if (DAT_1811150a0 == 0) {
    hModule = GetModuleHandleA("panorama.dll");
    puVar9 = auStack_168;
    if (hModule == (HMODULE)0x0) goto LAB_18020332a;
    pFVar8 = GetProcAddress(hModule,"CreateInterface");
    puVar9 = auStack_168;
    if (pFVar8 == (FARPROC)0x0) goto LAB_18020332a;
    DAT_1811150a0 = (*pFVar8)("PanoramaUIEngine001",0);
    puVar9 = auStack_168;
    if (DAT_1811150a0 == 0) goto LAB_18020332a;
  }
  puVar26 = auStack_168;
  cVar5 = FUN_180200ed0();
  puVar9 = auStack_168;
  if (cVar5 == '\0') goto LAB_18020332a;
  if (DAT_180ceb470 == '\0') {
    puVar9 = auStack_168;
    if (DAT_1811089f0 == 0) goto LAB_18020332a;
    DAT_180ceb470 = '\x01';
    DAT_180ceb474 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
    DAT_180ceb478 = FUN_18038eaf0("CCSWeaponBaseVData","m_szName");
    DAT_180ceb47c = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_180ceb480 = FUN_18038eaf0("CPlayer_WeaponServices","m_hMyWeapons");
    DAT_180ceb484 = FUN_18038eaf0("CPlayer_WeaponServices","m_hActiveWeapon");
    DAT_180ceb488 = FUN_18038eaf0("C_BasePlayerPawn","m_pItemServices");
    DAT_180ceb48c = FUN_18038eaf0("CCSPlayer_ItemServices","m_bHasDefuser");
    DAT_180ceb490 = FUN_18038eaf0("CCSPlayer_ItemServices","m_bHasHelmet");
    DAT_180ceb494 = FUN_18038eaf0("C_CSPlayerPawn","m_ArmorValue");
    DAT_180ceb498 = FUN_18038eaf0("CCSPlayerController","m_pInGameMoneyServices");
    DAT_180ceb49c = FUN_18038eaf0("CCSPlayerController_InGameMoneyServices","m_iAccount");
    DAT_180ceb4a0 = FUN_18038eaf0("CBasePlayerController","m_steamID");
    DAT_180ceb4a4 = FUN_18038eaf0("CBasePlayerController","m_hPawn");
    DAT_180ceb4a8 = FUN_18038eaf0("C_BaseEntity","m_lifeState");
    DAT_180ceb4ac = FUN_18038eaf0("C_BaseEntity","m_iTeamNum");
    DAT_180ceb4b0 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
    DAT_180ceb4b4 = FUN_18038eaf0("C_AttributeContainer","m_Item");
    DAT_180ceb4b8 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
    if ((((DAT_180ceb474 == 0) || (DAT_180ceb478 == 0)) || (DAT_180ceb47c == 0)) ||
       (((DAT_180ceb4a4 == 0 || (DAT_180ceb4a8 == 0)) || (DAT_180ceb4ac == 0)))) {
      DAT_180ceb471 = '\0';
      FUN_1802b2560("[error] hud | scoreboard: schema fields missing");
    }
    else {
      DAT_180ceb471 = '\x01';
    }
  }
  puVar9 = auStack_168;
  if (DAT_180ceb471 == '\0') goto LAB_18020332a;
  puVar27 = &DAT_1809f09e0;
  if (DAT_180cc45ef == '\0') {
LAB_180202b5a:
    if (DAT_180cc45ed == '\0') {
LAB_180202b69:
      if (0 < DAT_180ceb450) {
        DAT_180ceb450 = DAT_180ceb450 + -1;
        puVar9 = auStack_168;
        goto LAB_18020332a;
      }
LAB_180202b7a:
      FUN_1802022e0();
      goto LAB_180202b7f;
    }
LAB_180202b8c:
    if (DAT_180ceb460 != DAT_180ceb4c4) {
      if (DAT_180ceb464 == DAT_180ceb4c4) {
        FUN_1802b2560("[neverlose] scoreboard | #%u %s, next try in %d ticks",DAT_180ceb4c4,
                      "define threw",DAT_1809ef99c);
        DAT_180ceb450 = DAT_1809ef99c;
        DAT_1809ef99c = DAT_1809ef99c * 2;
        if (0x400 < DAT_1809ef99c) {
          DAT_1809ef99c = 0x400;
        }
        pcVar11 = "retry after define error";
      }
      else {
        if (DAT_180cd040a == '\0') {
          FUN_1802b2560(
                       "[neverlose] scoreboard | #%u assumed defined: console listener is off, no confirmation possible"
                       );
          goto LAB_180202b9a;
        }
        DAT_180ceb454 = DAT_180ceb454 + 1;
        if (DAT_180ceb454 < 0x40) goto LAB_180202c79;
        FUN_1802b2560("[neverlose] scoreboard | #%u %s, next try in %d ticks",DAT_180ceb4c4,
                      "not confirmed (no \'defined\' line, script did not run or had a syntax error)"
                      ,DAT_1809ef99c);
        DAT_180ceb450 = DAT_1809ef99c;
        DAT_1809ef99c = DAT_1809ef99c * 2;
        if (0x400 < DAT_1809ef99c) {
          DAT_1809ef99c = 0x400;
        }
        pcVar11 = "retry after unconfirmed define";
      }
      DAT_180ceb458 = 0;
      DAT_180cc45ed = '\0';
      PTR_s_first_define_1809f0990 = pcVar11;
      goto LAB_180202c79;
    }
LAB_180202b9a:
    DAT_180cc45ed = '\0';
    DAT_180cc45ef = '\x01';
    DAT_180ceb4c0 = 0;
LAB_180202c91:
    DAT_180ceb4c0 = DAT_180ceb4c0 + 1;
    if (DAT_180ceb4c0 == 0x40) {
      DAT_1809ef99c = 0x40;
    }
  }
  else {
    if (DAT_180ceb4bc == DAT_180ceb4c4) {
      bVar1 = DAT_180ceb4c0 < 0x40;
      local_148 = "";
      if (DAT_180ceb4c0 < 0x40) {
        local_148 = " after a back-off";
      }
      FUN_1802b2560("[neverlose] scoreboard | #%u lost after %d ticks on hud panel %p (WlNlScoreboard gone from the HUD script context), re-inject%s"
                    ,DAT_180ceb4c4,DAT_180ceb4c0,DAT_180ceb458);
      DAT_180cc45ef = '\0';
      DAT_180cc45ed = '\0';
      DAT_180ceb458 = 0;
      DAT_180ceb450 = 0;
      PTR_s_first_define_1809f0990 = s_define_lost_180705290;
      DAT_1809f09c8 = (undefined8 ****)0x0;
      puVar9 = &DAT_1809f09b8;
      if (0xf < DAT_1809f09d0) {
        puVar9 = _DAT_1809f09b8;
      }
      *puVar9 = 0;
      puVar10 = &DAT_1809f09e0;
      do {
        puVar10[2] = 0;
        if ((ulonglong)puVar10[3] < 0x10) {
          puVar19 = puVar10;
        }
        else {
          puVar19 = (undefined8 *)*puVar10;
        }
        *(undefined1 *)puVar19 = 0;
        puVar10 = puVar10 + 4;
      } while (puVar10 != &DAT_1809f11e0);
      if (bVar1) {
        DAT_180ceb450 = DAT_1809ef99c;
        DAT_1809ef99c = DAT_1809ef99c * 2;
        if (0x400 < DAT_1809ef99c) {
          DAT_1809ef99c = 0x400;
        }
        goto LAB_180202b69;
      }
      goto LAB_180202b7a;
    }
    if (DAT_180cc45ef == '\0') goto LAB_180202b5a;
LAB_180202b7f:
    if (DAT_180cc45ed != '\0') goto LAB_180202b8c;
LAB_180202c79:
    puVar9 = auStack_168;
    if (DAT_180cc45ef == '\0') goto LAB_18020332a;
    if (DAT_180ceb4c0 < 0x40) goto LAB_180202c91;
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
  local_138 = DAT_18095d364;
  local_140 = (uint)(DAT_18095d360 != '\0');
  local_148 = (char *)CONCAT44(local_148._4_4_,DAT_18095d35c);
  snprintf(&local_b8,0x60,"cfg(%d,%d,%d,%d);",DAT_18095d358);
  ppppuVar12 = (undefined8 ****)strlen((char *)&local_b8);
  puVar9 = &DAT_1809f09b8;
  if (0xf < DAT_1809f09d0) {
    puVar9 = _DAT_1809f09b8;
  }
  if ((DAT_1809f09c8 != ppppuVar12) ||
     ((DAT_1809f09c8 != (undefined8 ****)0x0 &&
      (iVar6 = memcmp(puVar9,&local_b8,(size_t)DAT_1809f09c8), iVar6 != 0)))) {
    puVar10 = (undefined8 *)FUN_180201fc0(local_d8,&local_b8);
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    cVar5 = FUN_180202130(puVar10);
    FUN_18000f890(local_d8);
    if (cVar5 != '\0') {
      sVar13 = strlen((char *)&local_b8);
      FUN_180029840(&DAT_1809f09b8,&local_b8,sVar13);
    }
  }
  puVar9 = auStack_168;
  if (DAT_180cc45ef != '\0') {
    local_120 = FUN_1800305a0();
    DAT_1809f09a8 = 0;
    ppuVar20 = &DAT_1809f0998;
    if (0xf < DAT_1809f09b0) {
      ppuVar20 = (undefined8 **)DAT_1809f0998;
    }
    *(undefined1 *)ppuVar20 = 0;
    local_124 = 1;
    do {
      uVar4 = local_120;
      uVar3 = local_124;
      ppppuVar12 = (undefined8 ****)0x0;
      iVar6 = local_124 - 1;
      ppppuStack_110 = (undefined8 ****)0x0;
      local_108 = (undefined8 ****)0x0;
      ppppuStack_100 = (undefined8 ****)0xf;
      local_118 = (undefined8 *****)0x0;
      lVar14 = FUN_18000f3a0(DAT_1809619d0);
      if (((lVar14 != 0) &&
          (lVar14 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                                  lVar14 + (ulonglong)((uVar3 >> 9) * DAT_180961944)),
          lVar14 - 0x10000U < 0xfffffffffffeffff)) &&
         (lVar14 = FUN_18000f3a0((ulonglong)((uVar3 & 0x1ff) * DAT_180961948) + lVar14),
         lVar14 - 0x10000U < 0xfffffffffffeffff)) {
        lVar15 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar14);
        ppppuVar22 = ppppuVar12;
        if (((lVar15 != 0) &&
            (lVar15 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar15), lVar15 != 0)) &&
           ((lVar15 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar15), lVar15 != 0 &&
            (ppppuVar16 = (undefined8 ****)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar15),
            ppppuVar16 + -0x2000 < (undefined8 ****)0x7ffffffeffff)))) {
          ppppuVar22 = ppppuVar16;
        }
        if ((ppppuVar22 == (undefined8 ****)0x0) ||
           (iVar7 = strcmp((char *)ppppuVar22,"CCSPlayerController"), iVar7 != 0))
        goto LAB_180202f8a;
        local_148 = &DAT_18095d2cc;
        pppppuVar17 = (undefined8 *****)FUN_180201ae0(local_d8,lVar14,iVar6,uVar4);
        if (&local_118 == (undefined8 ******)pppppuVar17) {
LAB_180202f81:
          FUN_18000f890(local_d8);
          goto LAB_180202f8a;
        }
        if (ppppuStack_100 < &DAT_00000010) {
LAB_180202f4e:
          local_118 = (undefined8 *****)*pppppuVar17;
          ppppuStack_110 = pppppuVar17[1];
          local_108 = pppppuVar17[2];
          ppppuStack_100 = pppppuVar17[3];
          pppppuVar17[2] = (undefined8 ****)0x0;
          pppppuVar17[3] = (undefined8 ****)0xf;
          *(undefined1 *)pppppuVar17 = 0;
          goto LAB_180202f81;
        }
        ppppuVar22 = (undefined8 ****)((longlong)ppppuStack_100 + 1);
        pppppuVar21 = local_118;
        if (ppppuVar22 < (undefined8 ****)0x1000) {
LAB_180202f49:
          thunk_FUN_1803d64e0(pppppuVar21,ppppuVar22);
          goto LAB_180202f4e;
        }
        pppppuVar21 = (undefined8 *****)local_118[-1];
        if ((ulonglong)((longlong)local_118 + (-8 - (longlong)pppppuVar21)) < 0x20) {
          ppppuVar22 = ppppuStack_100 + 5;
          goto LAB_180202f49;
        }
LAB_1802031ee:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar26 = auStack_160;
        break;
      }
LAB_180202f8a:
      ppppuVar12 = ppppuStack_100;
      ppppuVar22 = local_108;
      pppppuVar21 = local_118;
      local_128 = local_108 == (undefined8 ****)0x0;
      lVar14 = (ulonglong)uVar3 - 1;
      pppppuVar17 = (undefined8 *****)(&DAT_1809f09e0 + lVar14 * 4);
      if (local_108 == (undefined8 ****)0x0) {
        if ((undefined8 ****)(&DAT_1809f09f0)[lVar14 * 4] != (undefined8 ****)0x0) {
          local_d8[0] = '\0';
          local_d8[1] = '\0';
          local_d8[2] = '\0';
          local_d8[3] = '\0';
          local_d8[4] = '\0';
          local_d8[5] = '\0';
          local_d8[6] = '\0';
          local_d8[7] = '\0';
          local_d8[8] = '\0';
          local_d8[9] = '\0';
          local_d8[10] = '\0';
          local_d8[0xb] = '\0';
          local_d8[0xc] = '\0';
          local_d8[0xd] = '\0';
          local_d8[0xe] = '\0';
          local_d8[0xf] = '\0';
          local_d8[0x10] = '\0';
          local_d8[0x11] = '\0';
          local_d8[0x12] = '\0';
          local_d8[0x13] = '\0';
          local_d8[0x14] = '\0';
          local_d8[0x15] = '\0';
          local_d8[0x16] = '\0';
          local_d8[0x17] = '\0';
          local_d8[0x18] = '\0';
          local_d8[0x19] = '\0';
          local_d8[0x1a] = '\0';
          local_d8[0x1b] = '\0';
          local_d8[0x1c] = '\0';
          local_d8[0x1d] = '\0';
          local_d8[0x1e] = '\0';
          local_d8[0x1f] = '\0';
          snprintf(local_d8,0x20,"[%d,\"\"]",iVar6);
          sVar13 = strlen(local_d8);
          FUN_180029840(&local_118,local_d8,sVar13);
          pppppuVar21 = local_118;
          ppppuVar12 = ppppuStack_100;
          ppppuVar22 = local_108;
          goto LAB_18020309c;
        }
        if (ppppuStack_100 < &DAT_00000010) goto LAB_1802031d5;
LAB_180202fca:
        ppppuVar12 = (undefined8 ****)((longlong)ppppuStack_100 + 1);
        pppppuVar17 = local_118;
        if ((undefined8 ****)0xfff < ppppuVar12) {
          pppppuVar17 = (undefined8 *****)local_118[-1];
          if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)pppppuVar17)))
          goto LAB_18020334a;
          ppppuVar12 = ppppuStack_100 + 5;
        }
        thunk_FUN_1803d64e0(pppppuVar17,ppppuVar12);
      }
      else {
        pppppuVar23 = pppppuVar17;
        if (0xf < (ulonglong)(&DAT_1809f09f8)[lVar14 * 4]) {
          pppppuVar23 = (undefined8 *****)*pppppuVar17;
        }
        _Buf1 = &local_118;
        if ((undefined8 ****)0xf < ppppuStack_100) {
          _Buf1 = local_118;
        }
        if ((local_108 == (undefined8 ****)(&DAT_1809f09f0)[lVar14 * 4]) &&
           ((local_108 == (undefined8 ****)0x0 ||
            (iVar6 = memcmp(_Buf1,pppppuVar23,(size_t)local_108), iVar6 == 0)))) {
          if ((undefined8 ****)0xf < ppppuVar12) {
            ppppuVar22 = (undefined8 ****)((longlong)ppppuVar12 + 1);
            pppppuVar17 = pppppuVar21;
            if ((undefined8 ****)0xfff < ppppuVar22) {
              pppppuVar17 = (undefined8 *****)pppppuVar21[-1];
              if (0x1f < (ulonglong)((longlong)pppppuVar21 + (-8 - (longlong)pppppuVar17)))
              goto LAB_18020334a;
              ppppuVar22 = ppppuVar12 + 5;
            }
            thunk_FUN_1803d64e0(pppppuVar17,ppppuVar22);
          }
        }
        else {
LAB_18020309c:
          puVar28 = &DAT_1809f09f8 + lVar14 * 4;
          if (DAT_1809f09a8 != 0) {
            FUN_1800134a0(&DAT_1809f0998,&DAT_1806f1258,1);
            pppppuVar21 = local_118;
            ppppuVar12 = ppppuStack_100;
            ppppuVar22 = local_108;
          }
          pppppuVar23 = &local_118;
          if ((undefined8 ****)0xf < ppppuVar12) {
            pppppuVar23 = pppppuVar21;
          }
          FUN_1800134a0(&DAT_1809f0998,pppppuVar23,ppppuVar22);
          if (local_128 == '\0') {
            if ((undefined8 ******)pppppuVar17 != &local_118) {
              uVar25 = *puVar28;
              if (0xf < uVar25) {
                ppppuVar22 = *pppppuVar17;
                uVar24 = uVar25 + 1;
                if (0xfff < uVar24) {
                  if (0x1f < (ulonglong)((longlong)ppppuVar22 + (-8 - (longlong)ppppuVar22[-1])))
                  goto LAB_1802031ee;
                  uVar24 = uVar25 + 0x28;
                  ppppuVar22 = (undefined8 ****)ppppuVar22[-1];
                }
                thunk_FUN_1803d64e0(ppppuVar22,uVar24);
              }
              *puVar28 = 0xf;
              *pppppuVar17 = local_118;
              *(undefined8 *****)(lVar14 * 0x20 + 0x1809f09e8) = ppppuStack_110;
              (&DAT_1809f09f0)[lVar14 * 4] = local_108;
              (&DAT_1809f09f8)[lVar14 * 4] = ppppuStack_100;
              local_108 = (undefined8 ****)0x0;
              ppppuStack_100 = (undefined8 ****)0xf;
              local_118 = (undefined8 *****)((ulonglong)local_118 & 0xffffffffffffff00);
            }
          }
          else {
            (&DAT_1809f09f0)[lVar14 * 4] = 0;
            if (0xf < *puVar28) {
              pppppuVar17 = (undefined8 *****)*pppppuVar17;
            }
            *(undefined1 *)pppppuVar17 = 0;
          }
          if (&DAT_00000010 <= ppppuStack_100) goto LAB_180202fca;
        }
      }
LAB_1802031d5:
      ppppuVar12 = (undefined8 ****)0x0;
      local_124 = local_124 + 1;
    } while ((int)local_124 < 0x41);
    puVar9 = puVar26;
    if (DAT_1809f09a8 != 0) {
      *(undefined8 *)(puVar26 + 0x70) = 0;
      *(undefined8 *)(puVar26 + 0x78) = 0;
      local_e8 = 6;
      local_e0 = 0xf;
      *(undefined4 *)(puVar26 + 0x70) = DAT_18070527c;
      *(undefined2 *)(puVar26 + 0x74) = DAT_180705280;
      puVar26[0x76] = 0;
      ppuVar20 = &DAT_1809f0998;
      if (0xf < DAT_1809f09b0) {
        ppuVar20 = (undefined8 **)DAT_1809f0998;
      }
      *(undefined8 *)(puVar26 + -8) = 0x180203259;
      FUN_1800134a0(puVar26 + 0x70,ppuVar20);
      *(undefined8 *)(puVar26 + -8) = 0x180203270;
      FUN_1800134a0(puVar26 + 0x70,&DAT_180705320,3);
      puVar18 = puVar26 + 0x70;
      if (0xf < local_e0) {
        puVar18 = *(undefined1 **)(puVar26 + 0x70);
      }
      *(undefined8 *)(puVar26 + -8) = 0x180203289;
      puVar10 = (undefined8 *)FUN_180201fc0(local_d8,puVar18);
      if (0xf < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      *(undefined8 *)(puVar26 + -8) = 0x18020329c;
      cVar5 = FUN_180202130(puVar10);
      *(undefined8 *)(puVar26 + -8) = 0x1802032a8;
      FUN_18000f890(local_d8);
      if (cVar5 == '\0') {
        puVar18 = &DAT_1809f09b8;
        if (0xf < DAT_1809f09d0) {
          puVar18 = _DAT_1809f09b8;
        }
        DAT_1809f09c8 = ppppuVar12;
        *puVar18 = 0;
        do {
          puVar27[2] = ppppuVar12;
          if ((ulonglong)puVar27[3] < 0x10) {
            puVar10 = puVar27;
          }
          else {
            puVar10 = (undefined8 *)*puVar27;
          }
          *(undefined1 *)puVar10 = 0;
          puVar27 = puVar27 + 4;
        } while (puVar27 != &DAT_1809f11e0);
      }
      if (0xf < local_e0) {
        uVar25 = local_e0 + 1;
        lVar14 = *(longlong *)(puVar26 + 0x70);
        lVar15 = lVar14;
        if (0xfff < uVar25) {
          lVar15 = *(longlong *)(lVar14 + -8);
          if (0x1f < (lVar14 - lVar15) - 8U) {
LAB_18020334a:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar25 = local_e0 + 0x28;
        }
        *(undefined8 *)(puVar26 + -8) = 0x18020332a;
        thunk_FUN_1803d64e0(lVar15,uVar25);
      }
    }
  }
LAB_18020332a:
  *(undefined8 *)(puVar9 + -8) = 0x180203336;
  return;
}



/* ===== 180203360 FUN_180203360 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180203360(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  
  if (DAT_180cc492f == '\0') {
    return 0;
  }
  if (DAT_180961ab0 != 0) {
    lVar2 = FUN_18000f3a0();
    if (lVar2 != 0) {
      lVar2 = FUN_18000f3a0(lVar2 + 8);
      if (lVar2 != 0) {
        lVar3 = FUN_18000f3a0(lVar2);
        if (lVar3 != 0) {
          lVar3 = FUN_18000f3a0(lVar3);
          if ((lVar3 != 0) && (lVar2 == DAT_180ceb4d8)) {
            if (param_1 != 0) {
              cVar1 = FUN_180200ed0();
              if (cVar1 != '\0') {
                lVar3 = FUN_180200ff0();
                if (lVar3 != 0) {
                  lVar4 = FUN_18000f3a0(lVar3);
                  if (lVar4 != 0) {
                    pcVar5 = (code *)FUN_18000f3a0(lVar4 + 0x268);
                    if ((DAT_180ceb448 <= pcVar5) && (pcVar5 < DAT_180ceb440)) {
                      (*pcVar5)(lVar3,lVar2,param_1,&DAT_18070230d,1);
                      return 1;
                    }
                  }
                }
              }
            }
            return 0;
          }
        }
      }
    }
  }
  DAT_180ceb4d8 = 0;
  DAT_180ceb4d0 = 0;
  DAT_180ceb4d4 = 0;
  DAT_180cc492d = 0;
  _DAT_180ceb4e0 = 0;
  _DAT_180ceb4e8 = 0;
  _DAT_180ceb4f0 = 0;
  DAT_180cc492f = 0;
  return 0;
}



/* ===== 1802034b0 FUN_1802034b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802034b0(float *param_1)

{
  undefined1 auStack_1a8 [32];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [320];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  FUN_180540170(local_158,0,0x140);
  local_180 = (double)param_1[2];
  local_168 = (double)param_1[5];
  local_170 = (double)param_1[4];
  local_178 = (double)param_1[3];
  local_188 = (double)param_1[1];
  local_160 = local_180;
  snprintf(local_158,0x140,
           "if(typeof(WlHudLayout)!==\'undefined\'){WlHudLayout.apply([%.4f,%.4f,%.4f,%.4f,%.4f,%.4f],%.4f);}"
           ,(double)*param_1);
  FUN_180203360(local_158);
  return;
}



/* ===== 180203580 FUN_180203580 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180203580(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f1200);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f124c == 0x7fffffff) {
    DAT_1809f124c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  _DAT_180ceb4c8 = 0;
  FUN_1804e4e90(&DAT_1809f1200);
  return;
}



/* ===== 1802035e0 FUN_1802035e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802035e0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_e8;
  if (DAT_180cc492e == '\0') {
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    iVar10 = FUN_1804e4d70(&DAT_1809f1200);
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f124c == 0x7fffffff) {
      DAT_1809f124c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    puVar11 = &DAT_180ceb4c8;
    do {
      fVar20 = (float)puVar11[1];
      if (((fVar20 != 0.0) && (uVar1 = *puVar11, uVar1 < 6)) &&
         ((float)(*(uint *)((longlong)&local_a0 + (longlong)(int)uVar1 * 4) & (uint)_DAT_1808ade90)
          < (float)((uint)fVar20 & (uint)_DAT_1808ade90))) {
        *(float *)((longlong)&local_a0 + (longlong)(int)uVar1 * 4) = fVar20;
      }
      uVar8 = uStack_98;
      uVar7 = local_a0;
      puVar11 = puVar11 + 2;
    } while (puVar11 != (uint *)&DAT_180ceb4d0);
    fVar22 = (float)local_a0;
    fVar20 = local_a0._4_4_;
    fVar21 = (float)uStack_98;
    fVar19 = uStack_98._4_4_;
    fVar18 = (float)local_90;
    fVar17 = local_90._4_4_;
    FUN_1804e4e90(&DAT_1809f1200);
    bVar2 = fVar22 != 0.0;
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    if (bVar2) {
      local_a0 = uVar7 & 0xffffffff;
    }
    else {
      local_a0._0_4_ = 0.0;
      fVar22 = (float)local_a0;
    }
    bVar3 = fVar20 != 0.0;
    if (bVar3) {
      local_a0 = CONCAT44(fVar20,(float)local_a0);
    }
    else {
      fVar20 = 0.0;
    }
    bVar4 = fVar21 != 0.0;
    if (bVar4) {
      uStack_98 = uVar8 & 0xffffffff;
    }
    else {
      uStack_98._0_4_ = 0.0;
      fVar21 = (float)uStack_98;
    }
    bVar5 = fVar19 != 0.0;
    if (bVar5) {
      fVar19 = (float)((uint)fVar19 ^ DAT_1808adec0);
      uStack_98 = CONCAT44(fVar19,(float)uStack_98);
    }
    else {
      fVar19 = 0.0;
    }
    bVar6 = fVar18 != 0.0;
    if (bVar6) {
      fVar18 = (float)((uint)fVar18 ^ DAT_1808adec0);
      local_90 = (ulonglong)(uint)fVar18;
    }
    else {
      local_90._0_4_ = 0.0;
      fVar18 = (float)local_90;
    }
    bVar16 = bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2)));
    if (fVar17 == 0.0) {
      if ((!bVar6 && (!bVar5 && (!bVar4 && (!bVar3 && !bVar2)))) && (DAT_180cc492d == '\0')) {
        return;
      }
      fVar17 = 0.0;
    }
    else {
      fVar17 = (float)((uint)fVar17 ^ DAT_1808adec0);
      bVar16 = true;
      local_90 = CONCAT44(fVar17,(float)local_90);
    }
    if (DAT_180cc492f == '\0') {
      if ((0 < DAT_180ceb4d0) && (DAT_180ceb4d0 + 1 < 8)) {
        DAT_180ceb4d0 = DAT_180ceb4d0 + 1;
        return;
      }
      DAT_180ceb4d0 = 1;
      if (DAT_180961ab0 == 0) {
        DAT_180ceb4d0 = 1;
        return;
      }
      lVar12 = FUN_18000f3a0();
      if (lVar12 == 0) {
        return;
      }
      lVar12 = FUN_18000f3a0(lVar12 + 8);
      if (lVar12 == 0) {
        return;
      }
      lVar13 = FUN_18000f3a0(lVar12);
      if (lVar13 == 0) {
        return;
      }
      lVar13 = FUN_18000f3a0(lVar13);
      if (lVar13 == 0) {
        return;
      }
      cVar9 = FUN_180200ed0();
      if (cVar9 == '\0') {
        return;
      }
      lVar13 = FUN_180200ff0();
      if (lVar13 == 0) {
        return;
      }
      lVar14 = FUN_18000f3a0(lVar13);
      if (lVar14 == 0) {
        return;
      }
      pcVar15 = (code *)FUN_18000f3a0(lVar14 + 0x268);
      if (pcVar15 < DAT_180ceb448) {
        return;
      }
      if (DAT_180ceb440 <= pcVar15) {
        return;
      }
      local_c8 = 1;
      (*pcVar15)(lVar13,lVar12,
                 "\n(function () {\n    var ids = [\"HudTopLeft\", \"HudTopCenter\", \"HudTopRight\", \"HudLowerLeft\", \"HudBottomCenter\", \"HudBottomRight\"];\n    var find = function (id) {\n        var root = $.GetContextPanel();\n        if (!root || !root.IsValid()) return null;\n        var panel = root.id === id ? root : root.FindChildTraverse(id);\n        return panel && panel.IsValid() ? panel : null;\n    };\n    var find_any = function (id) {\n        var root = $.GetContextPanel();\n        if (!root || !root.IsValid()) return null;\n        while (root.GetParent() && root.GetParent().IsValid()) root = root.GetParent();\n        var panel = root.id === id ? root : root.FindChildTraverse(id);\n        return panel && panel.IsValid() ? panel : null;\n    };\n    var place = function (panel, dy) {\n        if (!panel) return;\n        panel.style.transform = dy ? \"translate3d(0px, \" + dy + \"px, 0px)\" : \"none\";\n    };\n    WlHudLayout = {\n        apply: function (offsets, extra) {\n            for (var i = 0; i < ids.length; i++) place(find(ids[i]), offsets[i] || 0);\n            place(find_any(\"fps_row\"), extra || 0);\n        },\n        missing: function () {\n            var out = [];\n            for (var i = 0; i < ids.length; i++) {\n                if (!find(ids[i])) out.push(ids[i]);\n            }\n            if (out.length) $.Msg(\"[neverlose] hud layout: missing \" + out.join(\", \"));\n        }\n    };\n    WlHudLayout.missing();\n})();\n"
                 ,&DAT_18070230d);
      DAT_180ceb4e0 = 0.0;
      local_a8 = 0;
      DAT_180ceb4e4 = 0.0;
      DAT_180ceb4e8 = 0.0;
      DAT_180ceb4ec = 0.0;
      DAT_180ceb4f0 = 0.0;
      _DAT_180ceb4e0 = 0;
      _DAT_180ceb4e8 = 0;
      DAT_180ceb4f4 = 0.0;
      DAT_180cc492f = '\x01';
      DAT_180cc492d = '\0';
      DAT_180ceb4d8 = lVar12;
    }
    else {
    }
    if (((((fVar22 != DAT_180ceb4e0) || (fVar20 != DAT_180ceb4e4)) || (fVar21 != DAT_180ceb4e8)) ||
        ((fVar19 != DAT_180ceb4ec || (fVar18 != DAT_180ceb4f0)))) ||
       ((fVar17 != DAT_180ceb4f4 ||
        ((bVar16 != false && (DAT_180ceb4d4 = DAT_180ceb4d4 + 1, 0x3f < DAT_180ceb4d4)))))) {
      DAT_180ceb4d4 = 0;
      cVar9 = FUN_1802034b0(&local_a0);
      if (cVar9 != '\0') {
        _DAT_180ceb4e0 = local_a0;
        _DAT_180ceb4e8 = uStack_98;
        DAT_180ceb4f0 = (float)local_90;
        DAT_180ceb4f4 = local_90._4_4_;
        DAT_180cc492d = bVar16;
      }
    }
  }
  else {
    if ((DAT_180cc492f != '\0') && (DAT_180cc492d != '\0')) {
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      FUN_1802034b0(&local_a0);
    }
    FUN_180203360("WlHudLayout=undefined;");
    DAT_180cc492f = '\0';
    DAT_180ceb4f4 = 0.0;
    _DAT_180ceb4e0 = 0;
    _DAT_180ceb4e8 = 0;
    DAT_180ceb4d8 = 0;
    DAT_180ceb4d0 = 0;
    DAT_180ceb4d4 = 0;
    DAT_180cc492d = '\0';
    DAT_180ceb4f0 = 0.0;
    DAT_180cc492e = '\0';
  }
  return;
}



/* ===== 180203b20 FUN_180203b20 ===== */

void FUN_180203b20(void)

{
  int iVar1;
  undefined1 **ppuVar2;
  char **ppcVar3;
  char **ppcVar4;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  ppcVar4 = &local_28;
  if ((DAT_180ceb500 == '\0') && (DAT_1811089f0 != 0)) {
    ppcVar3 = &local_108;
    local_108 = "C_PlantedC4";
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flC4Blow");
      if (iVar1 != 0) goto LAB_180203b93;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_100);
    iVar1 = 0;
LAB_180203b93:
    ppcVar3 = &local_100;
    local_100 = "C_PlantedC4";
    DAT_180ceb504 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flTimerLength");
      if (iVar1 != 0) goto LAB_180203bd3;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_f8);
    iVar1 = 0;
LAB_180203bd3:
    ppcVar3 = &local_f8;
    local_f8 = "C_PlantedC4";
    DAT_180ceb508 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bHasExploded");
      if (iVar1 != 0) goto LAB_180203c13;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_f0);
    iVar1 = 0;
LAB_180203c13:
    ppcVar3 = &local_f0;
    local_f0 = "C_PlantedC4";
    DAT_180ceb50c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bBombDefused");
      if (iVar1 != 0) goto LAB_180203c53;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_e8);
    iVar1 = 0;
LAB_180203c53:
    ppcVar3 = &local_e8;
    local_e8 = "C_PlantedC4";
    DAT_180ceb510 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bBeingDefused");
      if (iVar1 != 0) goto LAB_180203c93;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_e0);
    iVar1 = 0;
LAB_180203c93:
    ppcVar3 = &local_e0;
    local_e0 = "C_PlantedC4";
    DAT_180ceb514 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flDefuseCountDown");
      if (iVar1 != 0) goto LAB_180203cd3;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_d8);
    iVar1 = 0;
LAB_180203cd3:
    ppcVar3 = &local_d8;
    local_d8 = "C_PlantedC4";
    DAT_180ceb518 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_flDefuseLength");
      if (iVar1 != 0) goto LAB_180203d13;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_d0);
    iVar1 = 0;
LAB_180203d13:
    ppcVar3 = &local_d0;
    local_d0 = "C_PlantedC4";
    DAT_180ceb51c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nBombSite");
      if (iVar1 != 0) goto LAB_180203d53;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_c8);
    iVar1 = 0;
LAB_180203d53:
    ppcVar3 = &local_c8;
    local_c8 = "C_PlantedC4";
    DAT_180ceb520 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bC4Activated");
      if (iVar1 != 0) goto LAB_180203d93;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_c0);
    iVar1 = 0;
LAB_180203d93:
    ppcVar3 = &local_c0;
    local_c0 = "C_PlantedC4";
    DAT_180ceb524 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bBombTicking");
      if (iVar1 != 0) goto LAB_180203dd3;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_b8);
    iVar1 = 0;
LAB_180203dd3:
    local_b8 = "C_CSPlayerResource";
    ppcVar3 = &local_b8;
    DAT_180ceb528 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bombsiteCenterA");
      if (iVar1 != 0) goto LAB_180203e13;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_b0);
    iVar1 = 0;
LAB_180203e13:
    ppcVar3 = &local_b0;
    local_b0 = "C_CSPlayerResource";
    DAT_180ceb52c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_bombsiteCenterB");
      if (iVar1 != 0) goto LAB_180203e52;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_a8);
    iVar1 = 0;
LAB_180203e52:
    local_a8 = "C_C4";
    ppuVar2 = &local_a8;
    DAT_180ceb530 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppuVar2,"m_bStartedArming");
      if (iVar1 != 0) goto LAB_180203e92;
      ppuVar2 = ppuVar2 + 1;
    } while (ppuVar2 != &local_a0);
    iVar1 = 0;
LAB_180203e92:
    ppcVar3 = &local_a0;
    local_a0 = "C_C4";
    DAT_180ceb534 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_fArmedTime");
      if (iVar1 != 0) goto LAB_180203ec2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_98);
    iVar1 = 0;
LAB_180203ec2:
    ppcVar3 = &local_38;
    local_38 = "C_CSPlayerPawn";
    local_30 = "C_CSPlayerPawnBase";
    DAT_180ceb538 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nWhichBombZone");
      if (iVar1 != 0) goto LAB_180203f12;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != ppcVar4);
    iVar1 = 0;
LAB_180203f12:
    local_98 = "CCSPlayerController";
    ppcVar3 = &local_98;
    DAT_180ceb53c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_hObserverPawn");
      if (iVar1 != 0) goto LAB_180203f52;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_90);
    iVar1 = 0;
LAB_180203f52:
    ppcVar3 = &local_90;
    local_90 = "C_BasePlayerPawn";
    DAT_180ceb540 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_pObserverServices");
      if (iVar1 != 0) goto LAB_180203f92;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_88);
    iVar1 = 0;
LAB_180203f92:
    local_88 = "CPlayer_ObserverServices";
    ppcVar3 = &local_88;
    DAT_180ceb544 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_hObserverTarget");
      if (iVar1 != 0) goto LAB_180203fd2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_80);
    iVar1 = 0;
LAB_180203fd2:
    ppcVar3 = &local_80;
    local_80 = "CPlayer_ObserverServices";
    DAT_180ceb548 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_iObserverMode");
      if (iVar1 != 0) goto LAB_180204002;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_78);
    iVar1 = 0;
LAB_180204002:
    local_78 = "CBasePlayerController";
    ppcVar3 = &local_78;
    DAT_180ceb54c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_hPawn");
      if (iVar1 != 0) goto LAB_180204042;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_70);
    iVar1 = 0;
LAB_180204042:
    ppcVar3 = &local_70;
    local_70 = "CBasePlayerController";
    DAT_180ceb550 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_iszPlayerName");
      if (iVar1 != 0) goto LAB_180204072;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_68);
    iVar1 = 0;
LAB_180204072:
    local_68 = "C_BaseEntity";
    ppcVar3 = &local_68;
    DAT_180ceb554 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_MoveType");
      if (iVar1 != 0) goto LAB_1802040b2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_60);
    iVar1 = 0;
LAB_1802040b2:
    ppcVar3 = &local_60;
    local_60 = "C_BaseEntity";
    DAT_180ceb558 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_nActualMoveType");
      if (iVar1 != 0) goto LAB_1802040e2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_58);
    iVar1 = 0;
LAB_1802040e2:
    ppcVar3 = &local_58;
    local_58 = "CBasePlayerController";
    DAT_180ceb55c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_steamID");
      if (iVar1 != 0) goto LAB_180204112;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_50);
    iVar1 = 0;
LAB_180204112:
    ppcVar3 = &local_50;
    local_50 = "CCSPlayerController";
    DAT_180ceb560 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_iPing");
      if (iVar1 != 0) goto LAB_180204142;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_48);
    iVar1 = 0;
LAB_180204142:
    local_48 = "CCSPlayerController";
    ppcVar3 = &local_48;
    DAT_180ceb564 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_pActionTrackingServices");
      if (iVar1 != 0) goto LAB_180204182;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_40);
    iVar1 = 0;
LAB_180204182:
    ppcVar3 = &local_40;
    local_40 = "CCSPlayerController_ActionTrackingServices";
    DAT_180ceb568 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar3,"m_matchStats");
      if (iVar1 != 0) goto LAB_1802041c2;
      ppcVar3 = ppcVar3 + 1;
    } while (ppcVar3 != &local_38);
    iVar1 = 0;
LAB_1802041c2:
    local_28 = "CSPerRoundStats_t";
    local_20 = "CSMatchStats_t";
    DAT_180ceb56c = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_iKills");
      if (iVar1 != 0) goto LAB_180204212;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != &local_18);
    iVar1 = 0;
LAB_180204212:
    local_18 = "CSPerRoundStats_t";
    ppcVar4 = &local_18;
    local_10 = "CSMatchStats_t";
    DAT_180ceb570 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar4,"m_iDeaths");
      if (iVar1 != 0) goto LAB_180204262;
      ppcVar4 = ppcVar4 + 1;
    } while (ppcVar4 != (char **)((longlong)register0x00000020 + -8));
    iVar1 = 0;
LAB_180204262:
    DAT_180ceb500 = '\x01';
    DAT_180ceb574 = iVar1;
  }
  return;
}



/* ===== 180204280 FUN_180204280 ===== */

bool FUN_180204280(longlong param_1)

{
  char cVar1;
  
  if ((DAT_180ceb50c != 0) &&
     (cVar1 = FUN_180011220(param_1 + (ulonglong)DAT_180ceb50c), cVar1 != '\0')) {
    return false;
  }
  if ((DAT_180ceb510 != 0) &&
     (cVar1 = FUN_180011220(param_1 + (ulonglong)DAT_180ceb510), cVar1 != '\0')) {
    return false;
  }
  if ((DAT_180ceb524 != 0) &&
     (cVar1 = FUN_180011220(param_1 + (ulonglong)DAT_180ceb524), cVar1 == '\0')) {
    return false;
  }
  if (DAT_180ceb528 == 0) {
    return true;
  }
  cVar1 = FUN_180011220(param_1 + (ulonglong)DAT_180ceb528);
  return cVar1 != '\0';
}



/* ===== 180204300 FUN_180204300 ===== */

longlong FUN_180204300(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong local_res8;
  
  if (DAT_180ceb578 != 0) {
    local_res8 = DAT_180ceb578;
    pcVar5 = (char *)FUN_1803a0710();
    if ((pcVar5 == (char *)0x0) || (iVar3 = strcmp(pcVar5,"C_PlantedC4"), iVar3 != 0)) {
      DAT_180ceb578 = 0;
    }
    else if ((DAT_180ceb578 != 0) && (cVar2 = FUN_180204280(), cVar2 != '\0')) {
      return DAT_180ceb578;
    }
  }
  DAT_180ceb580 = DAT_180ceb580 + 1;
  if (DAT_180ceb580 < 8) {
    return DAT_180ceb578;
  }
  DAT_180ceb580 = 0;
  if ((DAT_1809619d0 == 0) || (lVar6 = FUN_18000f3a0(), lVar6 == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    iVar3 = 0;
    do {
      lVar7 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                            (ulonglong)(uint)(iVar3 * DAT_180961944) + lVar6);
      if (lVar7 - 0x10000U < 0x7ffffffeffff) {
        iVar10 = 0;
        do {
          if (0x40 < iVar3 * 0x200 + iVar10) {
            lVar8 = FUN_18000f3a0((ulonglong)(uint)(iVar10 * DAT_180961948) + lVar7);
            if (lVar8 - 0x10000U < 0x7ffffffeffff) {
              local_res8 = lVar8;
              pcVar5 = (char *)FUN_1803a0710(&local_res8);
              if (pcVar5 != (char *)0x0) {
                iVar4 = strcmp(pcVar5,"C_CSPlayerResource");
                if (iVar4 == 0) {
                  DAT_180ceb588 = lVar8;
                }
              }
              local_res8 = lVar8;
              pcVar5 = (char *)FUN_1803a0710(&local_res8);
              if (pcVar5 != (char *)0x0) {
                iVar4 = strcmp(pcVar5,"C_PlantedC4");
                uVar1 = DAT_180ceb510;
                if (iVar4 == 0) {
                  uVar11 = (ulonglong)DAT_180ceb510;
                  if ((((DAT_180ceb50c == 0) ||
                       (cVar2 = FUN_180011220(lVar8 + (ulonglong)DAT_180ceb50c), cVar2 == '\0')) &&
                      ((uVar1 == 0 || (cVar2 = FUN_180011220(lVar8 + uVar11), cVar2 == '\0')))) &&
                     ((DAT_180ceb524 == 0 ||
                      (cVar2 = FUN_180011220(lVar8 + (ulonglong)DAT_180ceb524), cVar2 != '\0')))) {
                    if (DAT_180ceb528 == 0) {
                      DAT_180ceb578 = lVar8;
                      return lVar8;
                    }
                    cVar2 = FUN_180011220(lVar8 + (ulonglong)DAT_180ceb528);
                    if (cVar2 != '\0') {
                      DAT_180ceb578 = lVar8;
                      return lVar8;
                    }
                  }
                  if (uVar1 != 0) {
                    cVar2 = FUN_180011220(lVar8 + uVar11);
                    if (cVar2 != '\0') {
                      lVar9 = lVar8;
                    }
                  }
                }
              }
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x200);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
  }
  DAT_180ceb578 = lVar9;
  return lVar9;
}



/* ===== 180204590 FUN_180204590 ===== */

undefined8 FUN_180204590(longlong *param_1,float param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float *pfVar13;
  char *_Str1;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float extraout_XMM0_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_res8;
  undefined1 local_98 [128];
  
  if ((*param_1 == 0) || (DAT_180ca09fc == 0)) {
    return 0;
  }
  uVar7 = FUN_180011200(*param_1 + (ulonglong)DAT_180ca09fc);
  plVar9 = (longlong *)FUN_1803a0940(&local_res8,uVar7);
  lVar4 = *plVar9;
  if (lVar4 == 0) {
    return 0;
  }
  if (DAT_180ca09f0 == 0) {
    return 0;
  }
  iVar8 = FUN_180011200(lVar4 + (ulonglong)DAT_180ca09f0);
  if (999 < iVar8 - 1U) {
    return 0;
  }
  if (DAT_180ca0a0c == 0) {
    return 0;
  }
  uVar12 = (ulonglong)DAT_180ca0a10;
  if (DAT_180ca0a10 == 0) {
    return 0;
  }
  lVar10 = FUN_18000f3a0(lVar4 + (ulonglong)DAT_180ca0a0c);
  if (lVar10 == 0) {
    return 0;
  }
  FUN_180011200(lVar10 + uVar12);
  plVar9 = (longlong *)FUN_1803a0940(&local_res8);
  lVar10 = *plVar9;
  if (lVar10 == 0) {
    return 0;
  }
  local_res8 = lVar10;
  lVar11 = FUN_1803a0710(&local_res8);
  if (lVar11 == 0) {
    return 0;
  }
  lVar14 = 0;
  do {
    lVar15 = lVar14 + 1;
    if (*(char *)(lVar11 + lVar14) != (&DAT_1806d4100)[lVar14]) {
      return 0;
    }
    lVar14 = lVar15;
  } while (lVar15 != 5);
  cVar6 = FUN_180011220((ulonglong)DAT_180ceb534 + lVar10);
  if (cVar6 == '\0') {
    return 0;
  }
  if (DAT_180ca09f4 == 0) {
    return 0;
  }
  cVar6 = FUN_180011220(lVar4 + (ulonglong)DAT_180ca09f4);
  uVar16 = DAT_180ca09f8;
  if (cVar6 != '\x02') {
    return 0;
  }
  uVar12 = (ulonglong)DAT_180ca09f8;
  *param_3 = 1;
  if (((uVar16 == 0) || (lVar11 = FUN_18000f3a0(uVar12 + lVar10), lVar11 == 0)) ||
     (DAT_180ca0950 == 0)) {
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
  }
  else {
    pfVar13 = (float *)FUN_1800111b0(local_98,lVar11 + (ulonglong)DAT_180ca0950);
    fVar17 = *pfVar13;
    fVar18 = pfVar13[1];
    fVar19 = pfVar13[2];
  }
  if (DAT_180ceb588 != 0) {
    local_res8 = DAT_180ceb588;
    _Str1 = (char *)FUN_1803a0710(&local_res8);
    if (((_Str1 != (char *)0x0) &&
        (iVar8 = strcmp(_Str1,"C_CSPlayerResource"), lVar11 = DAT_180ceb588, iVar8 == 0)) &&
       ((DAT_180ceb52c != 0 && (DAT_180ceb530 != 0)))) {
      pfVar13 = (float *)FUN_1800111b0(local_98,DAT_180ceb588 + (ulonglong)DAT_180ceb52c);
      fVar1 = *pfVar13;
      fVar2 = pfVar13[1];
      fVar3 = pfVar13[2];
      pfVar13 = (float *)FUN_1800111b0(local_98,(ulonglong)DAT_180ceb530 + lVar11);
      uVar16 = (uint)((fVar18 - pfVar13[1]) * (fVar18 - pfVar13[1]) +
                      (fVar17 - *pfVar13) * (fVar17 - *pfVar13) +
                      (fVar19 - pfVar13[2]) * (fVar19 - pfVar13[2]) <=
                     (fVar18 - fVar2) * (fVar18 - fVar2) + (fVar17 - fVar1) * (fVar17 - fVar1) +
                     (fVar19 - fVar3) * (fVar19 - fVar3));
      goto LAB_18020489f;
    }
  }
  uVar5 = DAT_180ceb53c;
  uVar12 = (ulonglong)DAT_180ceb53c;
  uVar16 = 0xffffffff;
  param_3[1] = 0xffffffff;
  if (uVar5 != 0) {
    iVar8 = FUN_180011200(lVar4 + uVar12);
    if (iVar8 == 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      if (iVar8 == 2) {
        uVar16 = 1;
      }
    }
  }
LAB_18020489f:
  param_3[1] = uVar16;
  uVar16 = DAT_180ceb538;
  uVar12 = (ulonglong)DAT_180ceb538;
  param_3[3] = 0x40400000;
  if (uVar16 == 0) {
    fVar17 = 0.0;
  }
  else {
    FUN_18000f3d0(uVar12 + lVar10);
    fVar17 = extraout_XMM0_Da;
  }
  if (fVar17 <= param_2) {
    param_3[2] = 0;
    return 1;
  }
  fVar18 = DAT_1808ac658;
  if (fVar17 - param_2 <= DAT_1808ac658) {
    fVar18 = fVar17 - param_2;
  }
  param_3[2] = fVar18;
  return 1;
}



/* ===== 180204930 FUN_180204930 ===== */

void FUN_180204930(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  
  if ((DAT_180961a50 == 0) || (lVar5 = FUN_18000f3a0(), lVar5 == 0)) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)FUN_18000f3d0(lVar5 + 0x30);
  }
  if ((DAT_180ceb504 == 0) || (lVar5 = FUN_180204300(), lVar5 == 0)) {
    if (DAT_180ceb534 == 0) {
      return;
    }
    FUN_1803a1250(&local_58);
    puVar8 = auStack_78;
    puVar9 = auStack_78;
    uVar7 = local_58;
    if (local_58 != local_50) {
      do {
        cVar2 = FUN_180204590(uVar7,fVar11,param_3);
        if (cVar2 != '\0') {
          if (local_58 == 0) {
            return;
          }
          puVar9 = auStack_78;
          if ((ulonglong)(((longlong)(local_48 - local_58) >> 3) * 8) < 0x1000) goto LAB_180204d4d;
          if (0x1f < (local_58 - *(ulonglong *)(local_58 - 8)) - 8) goto LAB_180204d43;
          local_58 = *(ulonglong *)(local_58 - 8);
          puVar9 = auStack_78;
          goto LAB_180204d4d;
        }
        uVar7 = uVar7 + 8;
      } while (uVar7 != local_50);
      uVar7 = local_58;
    }
    if (uVar7 == 0) {
      return;
    }
    if (0xfff < (ulonglong)(((longlong)(local_48 - uVar7) >> 3) * 8)) {
      local_58 = *(ulonglong *)(uVar7 - 8);
      uVar7 = (uVar7 - local_58) - 8;
      if (uVar7 < 0x20) goto LAB_180204d4d;
LAB_180204d43:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar8 = auStack_70;
    }
    local_58 = uVar7;
    puVar9 = puVar8;
LAB_180204d4d:
    *(undefined8 *)(puVar9 + -8) = 0x180204d52;
    thunk_FUN_1803d64e0(local_58);
    return;
  }
  if ((DAT_180ceb50c != 0) &&
     (cVar2 = FUN_180011220((ulonglong)DAT_180ceb50c + lVar5), cVar2 != '\0')) {
    return;
  }
  if (DAT_180ceb520 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_180011200((ulonglong)DAT_180ceb520 + lVar5);
  }
  param_3[1] = uVar3;
  if ((DAT_180ceb510 != 0) &&
     (cVar2 = FUN_180011220((ulonglong)DAT_180ceb510 + lVar5), cVar2 != '\0')) {
    *param_3 = 3;
    return;
  }
  uVar7 = (ulonglong)DAT_180ceb504;
  *param_3 = 2;
  fVar12 = (float)FUN_18000f3d0(uVar7 + lVar5);
  uVar10 = DAT_180ceb508;
  uVar7 = (ulonglong)DAT_180ceb508;
  fVar13 = 0.0;
  if (0.0 <= fVar12 - fVar11) {
    fVar13 = fVar12 - fVar11;
  }
  param_3[2] = fVar13;
  if (uVar10 == 0) {
    fVar12 = DAT_1808aca54;
  }
  else {
    fVar12 = (float)FUN_18000f3d0(uVar7 + lVar5);
    fVar13 = (float)param_3[2];
  }
  param_3[3] = fVar12;
  if ((fVar12 <= 0.0) || (((uint)fVar12 & 0x7f800000) == 0x7f800000)) {
    param_3[3] = 0x42200000;
  }
  if (fVar13 <= 0.0) {
    *param_3 = 0;
    return;
  }
  if (((DAT_180ceb514 != 0) && (uVar7 = (ulonglong)DAT_180ceb518, DAT_180ceb518 != 0)) &&
     (cVar2 = FUN_180011220((ulonglong)DAT_180ceb514 + lVar5), cVar2 != '\0')) {
    *(undefined1 *)(param_3 + 4) = 1;
    fVar12 = (float)FUN_18000f3d0(uVar7 + lVar5);
    uVar10 = DAT_180ceb51c;
    uVar7 = (ulonglong)DAT_180ceb51c;
    fVar13 = 0.0;
    if (0.0 <= fVar12 - fVar11) {
      fVar13 = fVar12 - fVar11;
    }
    param_3[5] = fVar13;
    if (uVar10 == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)FUN_18000f3d0(uVar7 + lVar5);
    }
    param_3[6] = fVar11;
    if ((fVar11 <= 0.0) || (((uint)fVar11 & 0x7f800000) == 0x7f800000)) {
      if ((float)param_3[5] <= DAT_1808ac750) {
        fVar11 = DAT_1808ac750;
      }
      else {
        fVar11 = DAT_1808ac864;
      }
      param_3[6] = fVar11;
    }
  }
  uVar10 = DAT_180ca09f0;
  if (((*param_2 != 0) && (DAT_180ca09f0 != 0)) &&
     (iVar4 = FUN_180011200(*param_2 + (ulonglong)DAT_180ca09f0), iVar4 - 1U < 1000)) {
    lVar6 = *param_2;
    goto LAB_180204c25;
  }
  if (*param_1 == 0) {
    return;
  }
  if (((DAT_180ceb540 != 0) && (DAT_180ceb544 != 0)) && (DAT_180ceb548 != 0)) {
    uVar3 = FUN_180011200(*param_1 + (ulonglong)DAT_180ceb540);
    FUN_1803a0940(&local_res20,uVar3);
    if (((CONCAT44(uStackX_24,local_res20) != 0) &&
        (lVar6 = FUN_18000f3a0((ulonglong)DAT_180ceb544 + CONCAT44(uStackX_24,local_res20)),
        lVar6 - 0x10000U < 0x7ffffffeffff)) &&
       (iVar4 = FUN_180011200((ulonglong)DAT_180ceb548 + lVar6), iVar4 - 1U < 0xfffffffe)) {
      FUN_1803a0940(&local_res20,iVar4);
      uVar10 = DAT_180ca09f0;
      lVar6 = CONCAT44(uStackX_24,local_res20);
      if (lVar6 != 0) {
        if ((DAT_180ca09f0 != 0) &&
           (iVar4 = FUN_180011200(lVar6 + (ulonglong)DAT_180ca09f0), iVar4 - 1U < 1000))
        goto LAB_180204c25;
        goto LAB_180204c23;
      }
    }
    uVar10 = DAT_180ca09f0;
  }
LAB_180204c23:
  lVar6 = 0;
LAB_180204c25:
  if (lVar6 == 0) {
    return;
  }
  if (uVar10 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_180011200((ulonglong)uVar10 + lVar6);
  }
  param_3[8] = uVar3;
  local_res20 = 0;
  cVar2 = FUN_1803c5580(lVar5,lVar6,&local_res20);
  if (cVar2 == '\0') {
    return;
  }
  param_3[7] = local_res20;
  return;
}



/* ===== 180204d80 FUN_180204d80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180204d80(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 *puVar14;
  size_t sVar15;
  ulonglong *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong *puVar20;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong *local_1b8;
  ulonglong *local_1b0;
  ulonglong *local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
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
  ulonglong uStack_120;
  undefined1 local_118 [128];
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 local_70;
  uint local_6c;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  puVar19 = auStack_1f8;
  if ((DAT_180ceb544 == 0) || (puVar19 = auStack_1f8, DAT_180ceb548 == 0)) goto LAB_18020526c;
  puVar19 = auStack_1f8;
  if (*param_1 == 0) goto LAB_18020526c;
  puVar19 = auStack_1f8;
  if (DAT_180ceb550 == 0) goto LAB_18020526c;
  local_1d0 = param_2;
  uVar9 = FUN_180011200(*param_1 + (ulonglong)DAT_180ceb550);
  FUN_1803a0940(&local_1d8,uVar9);
  lVar3 = local_1d8;
  puVar19 = auStack_1f8;
  if (local_1d8 == 0) goto LAB_18020526c;
  *(undefined1 *)(param_2 + 0x40) = 1;
  if ((((DAT_180ceb55c == 0) ||
       (cVar7 = FUN_180011220(local_1d8 + (ulonglong)DAT_180ceb55c), cVar7 != '\b')) &&
      ((DAT_180ceb558 == 0 ||
       (cVar7 = FUN_180011220(lVar3 + (ulonglong)DAT_180ceb558), cVar7 != '\b')))) ||
     (lVar11 = FUN_18000f3a0((ulonglong)DAT_180ceb544 + lVar3), 0x7ffffffefffe < lVar11 - 0x10000U))
  {
    lVar11 = 0;
  }
  else {
    bVar8 = 0;
    if (DAT_180ceb54c != 0) {
      bVar8 = FUN_180011220(lVar11 + (ulonglong)DAT_180ceb54c);
    }
    iVar10 = FUN_180011200((ulonglong)DAT_180ceb548 + lVar11);
    if (iVar10 - 1U < 0xfffffffe) {
      FUN_1803a0940(&local_1d8,iVar10);
      lVar11 = local_1d8;
      if (((local_1d8 == 0) || (pcVar12 = (char *)FUN_1803a0710(&local_1d8), pcVar12 == (char *)0x0)
          ) || (iVar10 = strcmp(pcVar12,"C_CSPlayerPawn"), iVar10 != 0)) goto LAB_180204edf;
    }
    else {
LAB_180204edf:
      lVar11 = 0;
    }
    if ((bVar8 & 0xfe) != 2) {
      lVar11 = 0;
    }
  }
  FUN_1803a1250(&local_1b0);
  puVar17 = auStack_1f8;
  puVar18 = auStack_1f8;
  local_1b8 = local_1a8;
  puVar16 = local_1b0;
  if (local_1b0 != local_1a8) {
    do {
      if ((*puVar16 == 0) || (DAT_180ceb550 == 0)) {
        local_1d8 = 0;
      }
      else {
        uVar9 = FUN_180011200((ulonglong)DAT_180ceb550 + *puVar16);
        FUN_1803a0940(&local_1d8,uVar9);
        lVar4 = local_1d8;
        if ((((local_1d8 != 0) && (local_1d8 != lVar3)) &&
            ((((DAT_180ceb55c != 0 &&
               (cVar7 = FUN_180011220(local_1d8 + (ulonglong)DAT_180ceb55c), cVar7 == '\b')) ||
              ((DAT_180ceb558 != 0 &&
               (cVar7 = FUN_180011220(lVar4 + (ulonglong)DAT_180ceb558), cVar7 == '\b')))) &&
             (lVar13 = FUN_18000f3a0((ulonglong)DAT_180ceb544 + lVar4),
             lVar13 - 0x10000U < 0x7ffffffeffff)))) &&
           (iVar10 = FUN_180011200((ulonglong)DAT_180ceb548 + lVar13), iVar10 - 1U < 0xfffffffe)) {
          FUN_1803a0940(&local_1c8,iVar10);
          lVar13 = local_1c8;
          if (local_1c8 == 0) {
LAB_180205004:
            lVar13 = 0;
          }
          else {
            local_1c0 = local_1c8;
            pcVar12 = (char *)FUN_1803a0710(&local_1c0);
            if (pcVar12 == (char *)0x0) goto LAB_180205004;
            iVar10 = strcmp(pcVar12,"C_CSPlayerPawn");
            if (iVar10 != 0) goto LAB_180205004;
          }
          if ((lVar13 != 0) && ((lVar13 == lVar3 || ((lVar11 != 0 && (lVar13 == lVar11)))))) {
            uStack_90 = 0;
            local_88 = 0;
            local_80 = 0xf;
            local_98 = 0;
            local_78 = 0;
            local_70 = 0;
            local_6c = 0;
            uVar1 = *puVar16;
            local_68 = uVar1;
            if (DAT_180ceb554 == 0) {
              FUN_1803a0620(puVar16,&local_60);
            }
            else {
              puVar14 = (undefined8 *)FUN_180205d20(local_118,DAT_180ceb554 + uVar1);
              local_198 = *puVar14;
              uStack_190 = puVar14[1];
              local_188 = puVar14[2];
              uStack_180 = puVar14[3];
              local_178 = puVar14[4];
              uStack_170 = puVar14[5];
              local_168 = puVar14[6];
              uStack_160 = puVar14[7];
              local_158 = puVar14[8];
              uStack_150 = puVar14[9];
              local_148 = puVar14[10];
              uStack_140 = puVar14[0xb];
              local_138 = puVar14[0xc];
              uStack_130 = puVar14[0xd];
              local_128 = puVar14[0xe];
              uStack_120 = puVar14[0xf] & 0xffffffffffffff;
              local_60 = 0;
              uStack_58 = 0;
              local_50 = 0;
              local_48 = 0;
              sVar15 = strlen((char *)&local_198);
              FUN_1800133a0(&local_60,&local_198,sVar15);
            }
            uVar6 = uStack_58;
            local_98 = local_60;
            uStack_90 = uStack_58;
            local_88 = local_50;
            local_80 = local_48;
            if (DAT_180ceb560 == 0) {
              local_78 = 0;
            }
            else {
              local_78 = FUN_18000f3a0((ulonglong)DAT_180ceb560 + *puVar16);
            }
            uVar5 = local_78;
            local_70 = local_78 == 0;
            if (DAT_180ca09f4 == 0) {
              local_6c = 0;
            }
            else {
              bVar8 = FUN_180011220(lVar4 + (ulonglong)DAT_180ca09f4);
              local_6c = (uint)bVar8;
            }
            puVar20 = *(ulonglong **)(local_1d0 + 0x30);
            if (puVar20 == *(ulonglong **)(local_1d0 + 0x38)) {
              FUN_180205dd0(local_1d0 + 0x28,puVar20,&local_98);
            }
            else {
              *puVar20 = local_60;
              puVar20[1] = uVar6;
              puVar20[2] = local_50;
              puVar20[3] = local_48;
              local_88 = 0;
              local_80 = 0xf;
              local_98 = local_98 & 0xffffffffffffff00;
              puVar20[4] = uVar5;
              *(undefined1 *)(puVar20 + 5) = local_70;
              *(uint *)((longlong)puVar20 + 0x2c) = local_6c;
              puVar20[6] = uVar1;
              *(longlong *)(local_1d0 + 0x30) = *(longlong *)(local_1d0 + 0x30) + 0x38;
            }
            FUN_18000f890(&local_98);
          }
        }
      }
      puVar16 = puVar16 + 1;
    } while (puVar16 != local_1b8);
  }
  puVar19 = auStack_1f8;
  if (local_1b0 == (ulonglong *)0x0) goto LAB_18020526c;
  puVar16 = local_1b0;
  if ((ulonglong)((local_1a0 - (longlong)local_1b0 >> 3) * 8) < 0x1000) {
LAB_180205264:
    puVar18 = puVar17;
  }
  else {
    puVar16 = (ulonglong *)local_1b0[-1];
    puVar20 = (ulonglong *)((longlong)local_1b0 + (-8 - (longlong)puVar16));
    if (&DAT_0000001f < puVar20) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar17 = auStack_1f0;
      puVar16 = puVar20;
      goto LAB_180205264;
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x18020526c;
  thunk_FUN_1803d64e0(puVar16);
  puVar19 = puVar18;
LAB_18020526c:
  *(undefined8 *)(puVar19 + -8) = 0x18020527b;
  return;
}



/* ===== 1802052a0 FUN_1802052a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802052a0(void)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  float *pfVar6;
  undefined8 *****pppppuVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined *local_188;
  undefined *local_180 [2];
  undefined4 local_170 [2];
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined1 local_158;
  undefined2 local_157;
  undefined1 local_155;
  undefined8 local_154;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined8 *****local_120;
  undefined8 uStack_118;
  longlong local_110;
  ulonglong local_108;
  undefined4 local_100;
  float local_fc;
  undefined2 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined1 local_ec;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 local_e0;
  longlong local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined8 local_54;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  if (((((DAT_18095ce00 == '\0') && (DAT_18095cf18 == '\0')) && (DAT_18095ce9d == '\0')) &&
      ((((DAT_18095ce9e == '\0' && (DAT_18095ce9f == '\0')) &&
        ((DAT_18095cea0 == '\0' && ((DAT_18095cea1 == '\0' && (DAT_18095cea2 == '\0')))))) &&
       (DAT_18095cea3 == '\0')))) && ((DAT_18095cea4 == '\0' && (DAT_18095cec8 == '\0')))) {
    iVar3 = FUN_1804e4d70(&DAT_1809f1250);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f129c == 0x7fffffff) {
      DAT_1809f129c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    local_c8 = 0;
    local_c4 = 0xffffffff;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0xffffffff;
    local_a8 = 0;
    local_88 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0xf;
    local_80 = 0;
    local_60 = 0xffffffff;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_4c = 0;
    _DAT_1809f12a0 = 0;
    _DAT_1809f12a4 = 0xffffffff;
    _DAT_1809f12a8 = 0;
    _DAT_1809f12ac = 0;
    DAT_1809f12b0 = 0;
    _DAT_1809f12b1 = local_b7;
    DAT_1809f12b3 = local_b5;
    _DAT_1809f12b4 = 0;
    _DAT_1809f12b8 = 0;
    _DAT_1809f12bc = 0xffffffff;
    DAT_1809f12c0 = 0;
    FUN_1800bcd20(&DAT_1809f12c8);
    DAT_1809f12c8 = 0;
    DAT_1809f12d0 = 0;
    _DAT_1809f12d8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    DAT_1809f12e0 = 0;
    FUN_18002ba60(&DAT_1809f12e8,&local_80);
    DAT_1809f1308 = local_60;
    DAT_1809f130c = (float)local_5c;
    DAT_1809f1310 = (undefined1)local_58;
    DAT_1809f1311 = local_58._1_1_;
    DAT_1809f1314 = (undefined4)local_54;
    DAT_1809f1318 = local_54._4_4_;
    DAT_1809f131c = local_4c;
    FUN_18000f890(&local_80);
    FUN_1800bcd20(&local_a0);
    FUN_1804e4e90(&DAT_1809f1250);
    return;
  }
  FUN_180203b20();
  local_168 = 0;
  local_164 = 0xffffffff;
  fVar16 = 0.0;
  local_160 = 0;
  local_158 = 0;
  local_154 = 0;
  local_14c = 0xffffffff;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = 0xf;
  local_120 = (undefined8 *****)0x0;
  local_100 = 0xffffffff;
  local_fc = 0.0;
  local_f8 = 0;
  local_f4 = 0;
  uStack_f0 = 0;
  local_ec = 0;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_180);
    FUN_1803a0b60(&local_188);
    DAT_181108a00 = local_188;
    local_188 = (undefined *)FUN_1803a0c50(&local_188);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_180[0] = DAT_181108a00;
    local_188 = DAT_1811089f8;
  }
  puVar13 = local_180[0];
  puVar2 = local_188;
  DAT_1811089f8 = local_188;
  if ((DAT_18095cea3 != '\0') || (DAT_18095cea4 != '\0')) {
    FUN_180204930(local_180,&local_188,&local_168);
  }
  if (DAT_18095cf18 != '\0') {
    FUN_180204d80(local_180,&local_168);
    puVar13 = local_180[0];
  }
  if ((puVar13 != (undefined *)0x0) && (DAT_180ceb564 != 0)) {
    local_180[0] = (undefined *)CONCAT44(local_180[0]._4_4_,999);
    local_170[0] = 0;
    iVar3 = FUN_180011200(puVar13 + DAT_180ceb564);
    local_188 = (undefined *)CONCAT44(local_188._4_4_,iVar3);
    ppuVar9 = (undefined **)local_170;
    if (-1 < iVar3) {
      ppuVar9 = &local_188;
    }
    ppuVar5 = local_180;
    if (iVar3 < 1000) {
      ppuVar5 = ppuVar9;
    }
    local_100 = *(undefined4 *)ppuVar5;
  }
  if (((puVar2 == (undefined *)0x0) || (DAT_180ca09f0 == 0)) ||
     (iVar3 = FUN_180011200(puVar2 + DAT_180ca09f0), 999 < iVar3 - 1U)) {
    local_f8 = local_f8 & 0xff00;
  }
  else {
    local_f8 = CONCAT11(local_f8._1_1_,1);
    if (DAT_180ca0a1c == 0) {
      fVar15 = 0.0;
    }
    else {
      pfVar6 = (float *)FUN_1800111b0(local_180,puVar2 + DAT_180ca0a1c);
      fVar16 = *pfVar6;
      fVar15 = pfVar6[1];
    }
    fVar16 = fVar15 * fVar15 + fVar16 * fVar16;
    if (fVar16 < 0.0) {
      local_fc = (float)FUN_18051af10(fVar16);
    }
    else {
      local_fc = SQRT(fVar16);
    }
    if (((uint)local_fc & 0x7f800000) == 0x7f800000) {
      local_fc = 0.0;
    }
  }
  local_180[0] = &DAT_1809ec010;
  iVar3 = FUN_1804e4d70(&DAT_1809ec010);
  puVar14 = auStack_1a8;
  if (iVar3 != 0) goto LAB_180205a4f;
  if (DAT_1809ec05c == 0x7fffffff) {
    DAT_1809ec05c = 0x7ffffffe;
    goto LAB_180205a44;
  }
  puVar11 = &DAT_1809ec060;
  if (DAT_180cc3e18 != '\0') {
    puVar11 = (undefined8 *)&DAT_1809ec080;
  }
  FUN_180024b50(&local_e8,puVar11);
  FUN_1804e4e90(&DAT_1809ec010);
  if (local_108 < 0x10) {
LAB_1802057c0:
    local_120 = (undefined8 *****)CONCAT71(uStack_e7,local_e8);
    uStack_118 = local_e0;
    local_110 = local_d8;
    local_108 = local_d0;
    local_d8 = 0;
    local_d0 = 0xf;
    local_e8 = 0;
    FUN_18000f890(&local_e8);
    lVar8 = local_110;
    pppppuVar10 = local_120;
    pppppuVar7 = &local_120;
    if (0xf < local_108) {
      pppppuVar7 = local_120;
    }
    if (local_110 == 9) {
      iVar3 = memcmp(pppppuVar7,"main_menu",9);
      if (iVar3 == 0) {
        local_110 = 0;
        pppppuVar7 = &local_120;
        if (0xf < local_108) {
          pppppuVar7 = pppppuVar10;
        }
        *(undefined1 *)pppppuVar7 = 0;
        lVar8 = local_110;
      }
    }
    if (puVar13 == (undefined *)0x0) {
LAB_18020584d:
      local_f8 = local_f8 & 0xff;
    }
    else {
      local_f8 = CONCAT11(1,(undefined1)local_f8);
      if (lVar8 == 0) goto LAB_18020584d;
    }
    if (puVar13 != (undefined *)0x0) {
      if (DAT_180ceb568 != 0) {
        uVar12 = (ulonglong)DAT_180ceb56c;
        if (((DAT_180ceb56c != 0) && (DAT_180ceb570 != 0)) && (DAT_180ceb574 != 0)) {
          lVar8 = FUN_18000f3a0(puVar13 + DAT_180ceb568);
          if (lVar8 - 0x10000U < 0x7ffffffeffff) {
            uVar4 = FUN_180011200(DAT_180ceb570 + uVar12 + lVar8);
            _local_f4 = CONCAT44(uStack_f0,uVar4);
            uVar4 = FUN_180011200(DAT_180ceb574 + uVar12 + lVar8);
            local_ec = 1;
            uStack_f0 = uVar4;
          }
        }
      }
    }
    iVar3 = FUN_1804e4d70(&DAT_1809f1250);
    puVar14 = auStack_1a8;
    if (iVar3 != 0) {
LAB_180205a4f:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f129c != 0x7fffffff) {
      _DAT_1809f12a0 = local_168;
      _DAT_1809f12a4 = local_164;
      _DAT_1809f12a8 = (undefined4)local_160;
      _DAT_1809f12ac = local_160._4_4_;
      DAT_1809f12b0 = local_158;
      _DAT_1809f12b1 = local_157;
      DAT_1809f12b3 = local_155;
      _DAT_1809f12b4 = (undefined4)local_154;
      _DAT_1809f12b8 = local_154._4_4_;
      _DAT_1809f12bc = local_14c;
      DAT_1809f12c0 = local_148;
      FUN_1800bcd20(&DAT_1809f12c8);
      DAT_1809f12c8 = local_140;
      DAT_1809f12d0 = local_138;
      _DAT_1809f12d8 = uStack_130;
      local_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      DAT_1809f12e0 = local_128;
      FUN_18002ba60(&DAT_1809f12e8,&local_120);
      DAT_1809f1308 = local_100;
      DAT_1809f130c = local_fc;
      DAT_1809f1310 = (undefined1)local_f8;
      DAT_1809f1311 = local_f8._1_1_;
      DAT_1809f1314 = local_f4;
      DAT_1809f1318 = uStack_f0;
      DAT_1809f131c = local_ec;
      FUN_1804e4e90(&DAT_1809f1250);
      FUN_18000f890(&local_120);
      FUN_1800bcd20(&local_140);
      return;
    }
  }
  else {
    uVar12 = local_108 + 1;
    pppppuVar10 = local_120;
    if (uVar12 < 0x1000) {
LAB_1802057bb:
      thunk_FUN_1803d64e0(pppppuVar10,uVar12);
      goto LAB_1802057c0;
    }
    pppppuVar10 = (undefined8 *****)local_120[-1];
    if ((undefined1 *)((longlong)local_120 + (-8 - (longlong)pppppuVar10)) < (undefined1 *)0x20) {
      uVar12 = local_108 + 0x28;
      goto LAB_1802057bb;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar14 = auStack_1a0;
  }
  DAT_1809f129c = 0x7ffffffe;
LAB_180205a44:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_180205a4e;
  FUN_1804e4a90(6);
}



/* ===== 180205a80 FUN_180205a80 ===== */

undefined4 * FUN_180205a80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = param_2[8];
  if (param_1 != param_2) {
    FUN_1800bcd20(param_1 + 10);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_2 + 0xe) = 0;
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_18002ba60(param_1 + 0x12,param_2 + 0x12);
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  return param_1;
}



/* ===== 180205b40 FUN_180205b40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_180205b40(undefined4 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar6 = FUN_1804e4d70(&DAT_1809f1250);
  uVar4 = _DAT_1809f12ac;
  uVar3 = _DAT_1809f12a8;
  uVar2 = _DAT_1809f12a4;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f129c == 0x7fffffff) {
    DAT_1809f129c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  *param_1 = _DAT_1809f12a0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar4 = _DAT_1809f12bc;
  uVar3 = _DAT_1809f12b8;
  uVar2 = _DAT_1809f12b4;
  param_1[4] = _DAT_1809f12b0;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = DAT_1809f12c0;
  plVar1 = (longlong *)(param_1 + 10);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  if (DAT_1809f12d0 - DAT_1809f12c8 != 0) {
    lVar7 = DAT_1809f12d0 - DAT_1809f12c8 >> 3;
    if (0x492492492492492 < (ulonglong)(lVar7 * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar7 = lVar7 * 8;
    lVar8 = FUN_18000fb70(lVar7);
    *plVar1 = lVar8;
    *(longlong *)(param_1 + 0xc) = lVar8;
    *(longlong *)(param_1 + 0xe) = lVar8 + lVar7;
    lVar5 = DAT_1809f12d0;
    lVar7 = *plVar1;
    for (lVar8 = DAT_1809f12c8; lVar8 != lVar5; lVar8 = lVar8 + 0x38) {
      FUN_180024b50(lVar7,lVar8);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined1 *)(lVar7 + 0x28) = *(undefined1 *)(lVar8 + 0x28);
      *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(lVar8 + 0x2c);
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
      lVar7 = lVar7 + 0x38;
    }
    *(longlong *)(param_1 + 0xc) = lVar7;
  }
  *(undefined1 *)(param_1 + 0x10) = DAT_1809f12e0;
  FUN_180024b50(param_1 + 0x12,&DAT_1809f12e8);
  param_1[0x1a] = DAT_1809f1308;
  param_1[0x1b] = DAT_1809f130c;
  *(undefined1 *)(param_1 + 0x1c) = DAT_1809f1310;
  *(undefined1 *)((longlong)param_1 + 0x71) = DAT_1809f1311;
  param_1[0x1d] = DAT_1809f1314;
  param_1[0x1e] = DAT_1809f1318;
  *(undefined1 *)(param_1 + 0x1f) = DAT_1809f131c;
  FUN_1804e4e90(&DAT_1809f1250);
  return param_1;
}



/* ===== 180205d20 FUN_180205d20 ===== */

undefined8 * FUN_180205d20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    uVar1 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar1;
    uVar1 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar1;
    uVar1 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    uVar1 = param_2[0xf];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



/* ===== 180205dd0 FUN_180205dd0 ===== */

undefined8 * FUN_180205dd0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  lVar15 = *param_1;
  uVar14 = 0x492492492492492;
  lVar9 = (param_1[1] - lVar15 >> 3) * 0x6db6db6db6db6db7;
  if (lVar9 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar9 + 1;
  uVar12 = (param_1[2] - lVar15 >> 3) * 0x6db6db6db6db6db7;
  if (uVar12 <= 0x492492492492492 - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar14 = uVar1;
    if (uVar1 <= uVar12) {
      uVar14 = uVar12;
    }
    if (0x492492492492492 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar14 * 0x38);
  puVar16 = auStack_48;
  puVar17 = auStack_48;
  puVar18 = puVar10 + (((longlong)param_2 - lVar15) / 0x38) * 7;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = 0;
  puVar18[3] = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)puVar18 = *param_3;
  *(undefined4 *)((longlong)puVar18 + 4) = uVar4;
  *(undefined4 *)(puVar18 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar18 + 0xc) = uVar6;
  uVar7 = *(undefined8 *)(param_3 + 6);
  puVar18[2] = *(undefined8 *)(param_3 + 4);
  puVar18[3] = uVar7;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar18[4] = *(undefined8 *)(param_3 + 8);
  *(undefined1 *)(puVar18 + 5) = *(undefined1 *)(param_3 + 10);
  *(undefined4 *)((longlong)puVar18 + 0x2c) = param_3[0xb];
  puVar18[6] = *(undefined8 *)(param_3 + 0xc);
  puVar2 = (undefined4 *)param_1[1];
  puVar11 = (undefined4 *)*param_1;
  puVar8 = puVar10;
  if (param_2 == puVar2) {
    for (; puVar11 != puVar2; puVar11 = puVar11 + 0xe) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      *(undefined4 *)puVar8 = *puVar11;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar11 + 6);
      puVar8[2] = *(undefined8 *)(puVar11 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puVar8[4] = *(undefined8 *)(puVar11 + 8);
      *(undefined1 *)(puVar8 + 5) = *(undefined1 *)(puVar11 + 10);
      *(undefined4 *)((longlong)puVar8 + 0x2c) = puVar11[0xb];
      puVar8[6] = *(undefined8 *)(puVar11 + 0xc);
      puVar8 = puVar8 + 7;
    }
  }
  else {
    for (; puVar11 != param_2; puVar11 = puVar11 + 0xe) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      *(undefined4 *)puVar8 = *puVar11;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar11 + 6);
      puVar8[2] = *(undefined8 *)(puVar11 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar11 + 4) = 0;
      *(undefined8 *)(puVar11 + 6) = 0xf;
      *(undefined1 *)puVar11 = 0;
      puVar8[4] = *(undefined8 *)(puVar11 + 8);
      *(undefined1 *)(puVar8 + 5) = *(undefined1 *)(puVar11 + 10);
      *(undefined4 *)((longlong)puVar8 + 0x2c) = puVar11[0xb];
      puVar8[6] = *(undefined8 *)(puVar11 + 0xc);
      puVar8 = puVar8 + 7;
    }
    puVar2 = (undefined4 *)param_1[1];
    puVar8 = puVar18;
    for (; param_2 != puVar2; param_2 = param_2 + 0xe) {
      puVar13 = puVar8 + 7;
      *puVar13 = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)puVar13 = *param_2;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
      *(undefined4 *)(puVar8 + 8) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0x44) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      puVar8[9] = *(undefined8 *)(param_2 + 4);
      puVar8[10] = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      puVar8[0xb] = *(undefined8 *)(param_2 + 8);
      *(undefined1 *)(puVar8 + 0xc) = *(undefined1 *)(param_2 + 10);
      *(undefined4 *)((longlong)puVar8 + 100) = param_2[0xb];
      puVar8[0xd] = *(undefined8 *)(param_2 + 0xc);
      puVar8 = puVar13;
    }
  }
  lVar15 = *param_1;
  if (lVar15 == 0) goto LAB_1802060aa;
  lVar9 = param_1[1];
  for (; lVar15 != lVar9; lVar15 = lVar15 + 0x38) {
    FUN_18000f890(lVar15);
  }
  lVar15 = *param_1;
  lVar9 = lVar15;
  if ((ulonglong)((param_1[2] - lVar15 >> 3) * 8) < 0x1000) {
LAB_18020609f:
    puVar17 = puVar16;
  }
  else {
    lVar9 = *(longlong *)(lVar15 + -8);
    if (0x1f < (lVar15 - lVar9) - 8U) {
      lVar9 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar16 = auStack_40;
      goto LAB_18020609f;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x1802060aa;
  thunk_FUN_1803d64e0(lVar9);
LAB_1802060aa:
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1 * 7);
  param_1[2] = (longlong)(puVar10 + uVar14 * 7);
  return puVar18;
}



/* ===== 180206100 FUN_180206100 ===== */

undefined4 FUN_180206100(undefined8 param_1)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0xffffffff;
  (*DAT_180962088)(param_1,local_res10,"particles/entity/spectator_utility_trail.vpcf",2,0,0,0,0);
  return local_res10[0];
}



/* ===== 180206150 FUN_180206150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180206150(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [200];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  if (DAT_1811150a8 == (longlong *)0x0) {
    hModule = GetModuleHandleA("particles.dll");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar1 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1811150a8 = (longlong *)(*pFVar1)("ParticleSystemMgr003",0);
    if (DAT_1811150a8 == (longlong *)0x0) {
      return 0;
    }
  }
  if (DAT_1809620a0 == (code *)0x0) {
    return 0;
  }
  local_188 = (longlong *)0x0;
  local_180 = 0;
  (**(code **)(*DAT_1811150a8 + 0x148))(DAT_1811150a8,&local_188,&local_180);
  if ((local_188 == (longlong *)0x0) || (*local_188 == 0)) {
    return 0;
  }
  (*DAT_1809620a0)(param_1,param_2,0);
  local_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  FUN_180540170(local_f0,0,0xc0);
  local_178 = param_3;
  (**(code **)(*(longlong *)*local_188 + 8))((longlong *)*local_188,5,&local_178);
  return 1;
}



/* ===== 1802062d0 FUN_1802062d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1802062d0(longlong param_1,undefined8 param_2,undefined8 *param_3,float param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  
  if ((((param_1 != 0) && (DAT_180962080 != 0)) && (DAT_180962088 != 0)) && (DAT_180962090 != 0)) {
    lVar3 = FUN_18000f3a0();
    if (lVar3 != 0) {
      if (DAT_180cc4b5c == '\0') {
        DAT_180cc4b5c = FUN_1802080c0("particles/entity/spectator_utility_trail.vpcf");
      }
      iVar2 = FUN_180206100(lVar3);
      if (iVar2 != -1) {
        local_48 = CONCAT44((float)((ulonglong)*param_3 >> 0x20) * _UNK_1808ade34,
                            (float)*param_3 * _DAT_1808ade30);
        local_54 = DAT_1808ac064;
        if (DAT_1808ac064 <= param_4) {
          local_54 = param_4;
        }
        local_40 = *(float *)(param_3 + 1) * DAT_1808acb94;
        local_58 = param_5;
        local_50 = *(undefined4 *)((longlong)param_3 + 0xc);
        FUN_18007e970(lVar3,iVar2,0x10,&local_48);
        FUN_18007e970(lVar3,iVar2,3,&local_58);
        cVar1 = FUN_180206150(lVar3,iVar2,param_1);
        if (cVar1 != '\0') {
          return iVar2;
        }
        FUN_18007eb70(lVar3,iVar2);
      }
    }
  }
  return -1;
}



/* ===== 180206420 FUN_180206420 ===== */

undefined4 FUN_180206420(undefined8 param_1)

{
  undefined4 local_res10 [6];
  
  if (DAT_180962088 == (code *)0x0) {
    return 0xffffffff;
  }
  local_res10[0] = 0xffffffff;
  (*DAT_180962088)(param_1,local_res10,"particles/neverlose/impact_sparks.vpcf",0,0,0,0,0);
  return local_res10[0];
}



/* ===== 180206480 FUN_180206480 ===== */

void FUN_180206480(void)

{
  if (DAT_180962090 == (code *)0x0) {
    return;
  }
  (*DAT_180962090)();
  return;
}



/* ===== 1802064b0 FUN_1802064b0 ===== */

void FUN_1802064b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_180962098 == (code *)0x0) {
    return;
  }
  (*DAT_180962098)(0,param_2,0,param_3,0);
  return;
}



/* ===== 1802064e0 FUN_1802064e0 ===== */

void FUN_1802064e0(longlong param_1,int param_2)

{
  if (((param_1 != 0) && (param_2 != -1)) && (DAT_1809620a8 != (code *)0x0)) {
    (*DAT_1809620a8)(param_1,param_2,1);
  }
  return;
}



/* ===== 180206510 FUN_180206510 ===== */

int FUN_180206510(void)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_res8 [4];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res8);
  }
  else {
    local_res8[0] = DAT_181108a00;
  }
  if ((local_res8[0] != 0) && (DAT_180ca09fc != 0)) {
    iVar1 = FUN_180011200((ulonglong)DAT_180ca09fc + local_res8[0]);
    if (iVar1 - 1U < 0xfffffffe) {
      plVar2 = (longlong *)FUN_1803a0940(local_res8,iVar1);
      iVar3 = 0;
      if (*plVar2 != 0) {
        iVar3 = iVar1;
      }
      return iVar3;
    }
  }
  return 0;
}



/* ===== 180206590 FUN_180206590 ===== */

void FUN_180206590(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined *local_res10 [3];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    puVar7 = local_res10[0];
  }
  else {
    puVar7 = DAT_181108a00;
  }
  if ((((puVar7 != (undefined *)0x0) && (DAT_180961a50 != 0)) &&
      (lVar5 = FUN_18000f3a0(), lVar5 - 0x10000U < 0x7ffffffeffff)) &&
     ((puVar6 = (undefined *)FUN_180273f90(param_1,"userid"), puVar6 == puVar7 &&
      (iVar2 = FUN_180206510(), iVar2 != 0)))) {
    iVar3 = FUN_180011200(lVar5 + 0x44);
    local_res10[0] = &DAT_1809f1620;
    iVar4 = FUN_1804e4d70(&DAT_1809f1620);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    piVar1 = DAT_180ceb598;
    if (DAT_1809f166c == 0x7fffffff) {
      DAT_1809f166c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    for (; piVar1 != DAT_180ceb5a0; piVar1 = piVar1 + 5) {
      if ((*piVar1 == iVar3) && (piVar1[1] == iVar2)) goto LAB_18020671c;
    }
    local_68 = iVar3;
    local_64 = iVar2;
    iVar4 = FUN_180273cc0(param_1,&DAT_1806d23e4);
    local_60 = iVar4;
    iVar8 = FUN_180273cc0(param_1,&DAT_1806d23e8);
    local_5c = iVar8;
    local_58 = FUN_180273cc0(param_1,&DAT_1806d23ec);
    piVar1 = DAT_180ceb5a0;
    if (DAT_180ceb5a0 == DAT_180ceb5a8) {
      FUN_180206e70(local_58,DAT_180ceb5a0,&local_68);
    }
    else {
      *DAT_180ceb5a0 = iVar3;
      piVar1[1] = iVar2;
      piVar1[2] = iVar4;
      piVar1[3] = iVar8;
      piVar1[4] = local_58;
      DAT_180ceb5a0 = DAT_180ceb5a0 + 5;
    }
LAB_18020671c:
    FUN_1804e4e90(&DAT_1809f1620);
  }
  return;
}



/* ===== 180206760 FUN_180206760 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180206760(undefined8 param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  undefined1 auStack_128 [32];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  uint local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0 [4];
  undefined8 local_b0;
  float local_a8 [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  ulonglong local_78;
  
  fVar5 = DAT_1808acb94;
  local_78 = DAT_180919500 ^ (ulonglong)auStack_128;
  pfVar9 = &local_108;
  local_104 = 10.0;
  local_108 = 1.0;
  if (DAT_1808ac34c <= DAT_18095d51c) {
    pfVar9 = &DAT_18095d51c;
  }
  pfVar8 = &local_104;
  if (DAT_18095d51c <= DAT_1808ac864) {
    pfVar8 = pfVar9;
  }
  pfVar9 = &local_104;
  fVar1 = *pfVar8;
  if (0 < DAT_18095d520) {
    pfVar9 = (float *)&DAT_18095d520;
  }
  local_108 = 4.2039e-43;
  local_104 = 1.4013e-45;
  pfVar8 = &local_108;
  if (DAT_18095d520 < 0x12d) {
    pfVar8 = pfVar9;
  }
  pfVar9 = &local_104;
  fVar10 = *pfVar8;
  if (0x31 < DAT_18095d524) {
    pfVar9 = (float *)&DAT_18095d524;
  }
  local_108 = 4.2039e-43;
  local_104 = 7.00649e-44;
  pfVar8 = &local_108;
  if (DAT_18095d524 < 0x12d) {
    pfVar8 = pfVar9;
  }
  pfVar9 = &local_104;
  fVar3 = *pfVar8;
  if (-1 < DAT_18095d528) {
    pfVar9 = (float *)&DAT_18095d528;
  }
  local_108 = 1.12104e-42;
  local_104 = 0.0;
  pfVar8 = &local_108;
  if (DAT_18095d528 < 0x321) {
    pfVar8 = pfVar9;
  }
  pfVar9 = &local_104;
  fVar4 = *pfVar8;
  local_108 = 10.0;
  local_104 = 1.0;
  if (DAT_1808ac34c <= DAT_18095d52c) {
    pfVar9 = &DAT_18095d52c;
  }
  pfVar8 = &local_108;
  if (DAT_18095d52c <= DAT_1808ac864) {
    pfVar8 = pfVar9;
  }
  fVar2 = *pfVar8;
  if (DAT_18095d518 <= 0.0) {
    local_100 = 255.0;
    local_fc = 255.0;
    local_f8 = 255.0;
  }
  else {
    local_100 = DAT_18095d50c * DAT_1808acb94;
    local_f8 = DAT_18095d514 * DAT_1808acb94;
    local_fc = DAT_18095d510 * DAT_1808acb94;
  }
  iVar7 = FUN_180206420(param_1);
  if (iVar7 != -1) {
    local_ec = (float)(int)fVar10;
    local_e8 = 0;
    local_f0 = fVar2;
    cVar6 = FUN_180206480(param_1,iVar7,2,&local_f0);
    if (cVar6 != '\0') {
      fVar10 = (float)(int)fVar3;
      local_e4 = (uint)fVar10 ^ DAT_1808adec0;
      local_dc = (float)(int)fVar4 * _DAT_1808acd3c;
      local_e0 = local_e4;
      cVar6 = FUN_180206480(param_1,iVar7,3,&local_e4);
      if ((cVar6 != '\0') &&
         (local_d8 = fVar10, local_d4 = fVar10, local_d0 = (float)(int)fVar4,
         cVar6 = FUN_180206480(param_1,iVar7,4,&local_d8), cVar6 != '\0')) {
        local_cc = DAT_18095d4fc * fVar5;
        local_c8 = DAT_18095d500 * fVar5;
        local_c4 = DAT_18095d504 * fVar5;
        cVar6 = FUN_180206480(param_1,iVar7,1,&local_cc);
        if (cVar6 != '\0') {
          local_c0[0] = DAT_18095d508 * fVar5;
          local_c0[1] = 0.0;
          local_c0[2] = 0.0;
          cVar6 = FUN_180206480(param_1,iVar7,5,local_c0);
          if (cVar6 != '\0') {
            local_c0[3] = fVar1 * DAT_1808ac1b0;
            local_b0 = 0;
            cVar6 = FUN_180206480(param_1,iVar7,6,local_c0 + 3);
            if ((cVar6 != '\0') &&
               (cVar6 = FUN_180206480(param_1,iVar7,7,&local_100), cVar6 != '\0')) {
              local_a8[0] = DAT_18095d518 * fVar5;
              local_a8[1] = 0.0;
              local_a8[2] = 0.0;
              cVar6 = FUN_180206480(param_1,iVar7,8,local_a8);
              if (cVar6 != '\0') {
                local_98 = *param_2;
                local_94 = param_2[1];
                local_90 = param_2[2];
                local_8c = _DAT_1808ad2c0;
                uStack_84 = _UNK_1808ad2c8;
                local_7c = 0x3f800000;
                cVar6 = FUN_1802064b0(param_1,iVar7,&local_98);
                if (cVar6 != '\0') {
                  return;
                }
              }
            }
          }
        }
      }
    }
    FUN_1802064e0(param_1,iVar7);
  }
  return;
}



/* ===== 180206bb0 FUN_180206bb0 ===== */

void FUN_180206bb0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  ulonglong local_58;
  ulonglong uStack_50;
  longlong local_48;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  iVar5 = FUN_1804e4d70(&DAT_1809f1620);
  lVar3 = DAT_180ceb5a8;
  uVar8 = DAT_180ceb5a0;
  uVar12 = DAT_180ceb598;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f166c == 0x7fffffff) {
    DAT_1809f166c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_58 = DAT_180ceb598;
  DAT_180ceb598 = 0;
  uStack_50 = DAT_180ceb5a0;
  DAT_180ceb5a0 = 0;
  local_48 = DAT_180ceb5a8;
  DAT_180ceb5a8 = 0;
  FUN_1804e4e90(&DAT_1809f1620);
  iVar5 = FUN_180206510();
  if (((iVar5 != 0) && (DAT_18095d4f8 != '\0')) && (uVar12 != uVar8)) {
    if (((DAT_180962080 == 0) || (lVar6 = FUN_18000f3a0(), lVar6 == 0)) ||
       ((DAT_180961a50 == 0 ||
        ((lVar7 = FUN_18000f3a0(), 0x7ffffffefffe < lVar7 - 0x10000U ||
         (cVar4 = FUN_1803a10a0(), cVar4 == '\0')))))) {
      if (DAT_1809efa08 != 0) {
        DAT_1809efa08 = 0;
        pcVar9 = "not in game: impacts dropped";
LAB_180206d57:
        FUN_1802b2560("[sparks] %s",pcVar9);
      }
    }
    else if ((DAT_180cc4b5d == '\0') &&
            (DAT_180cc4b5d = FUN_1802080c0("particles/neverlose/impact_sparks.vpcf"),
            DAT_180cc4b5d == '\0')) {
      if (DAT_1809efa08 != 1) {
        DAT_1809efa08 = 1;
        pcVar9 = "particles/neverlose/impact_sparks.vpcf not registered yet: impacts dropped";
        goto LAB_180206d57;
      }
    }
    else {
      uVar2 = uVar12;
      if (DAT_1809efa08 != 2) {
        DAT_1809efa08 = 2;
        FUN_1802b2560("[sparks] %s","spawning particles/neverlose/impact_sparks.vpcf");
      }
      for (; uVar2 != uVar8; uVar2 = uVar2 + 0x14) {
        if (*(int *)(uVar2 + 4) == iVar5) {
          FUN_180206760(lVar6,uVar2 + 8);
        }
      }
    }
  }
  puVar10 = auStack_78;
  puVar11 = auStack_78;
  if (uVar12 == 0) {
    return;
  }
  uVar8 = uVar12;
  if (0xfff < (ulonglong)(((longlong)(lVar3 - uVar12) >> 2) * 4)) {
    uVar8 = *(ulonglong *)(uVar12 - 8);
    uVar12 = (uVar12 - uVar8) - 8;
    if (uVar12 < 0x20) goto LAB_180206db4;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar10 = auStack_70;
    uVar8 = uVar12;
  }
  puVar11 = puVar10;
LAB_180206db4:
  *(undefined8 *)(puVar11 + -8) = 0x180206db9;
  thunk_FUN_1803d64e0(uVar8);
  return;
}



/* ===== 180206df0 FUN_180206df0 ===== */

void FUN_180206df0(ulonglong *param_1)

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
  uVar2 = ((longlong)(param_1[2] - uVar4) >> 2) * 4;
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
  *(undefined8 *)(puVar5 + -8) = 0x180206e57;
  thunk_FUN_1803d64e0(uVar3,uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180206e70 FUN_180206e70 ===== */

longlong FUN_180206e70(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  lVar3 = DAT_180ceb598;
  uVar14 = 0xccccccccccccccc;
  lVar8 = (DAT_180ceb5a0 - DAT_180ceb598 >> 2) * -0x3333333333333333;
  if (lVar8 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar9 = (DAT_180ceb5a8 - DAT_180ceb598 >> 2) * -0x3333333333333333;
  if (uVar9 <= 0xccccccccccccccc - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0xccccccccccccccc < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar8 = FUN_18000fb70(uVar14 * 0x14);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x14;
  puVar2 = (undefined4 *)(lVar8 + lVar3 * 0x14);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar8 + lVar3 * 0x14;
  *(undefined4 *)(lVar3 + 0x10) = param_3[4];
  if (param_2 == DAT_180ceb5a0) {
    lVar13 = DAT_180ceb5a0 - DAT_180ceb598;
    lVar10 = lVar8;
    param_2 = DAT_180ceb598;
  }
  else {
    FUN_180540530(lVar8,DAT_180ceb598,param_2 - DAT_180ceb598);
    lVar10 = lVar3 + 0x14;
    lVar13 = DAT_180ceb5a0 - param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(lVar10,param_2,lVar13);
  if (DAT_180ceb598 == 0) goto LAB_180206ff1;
  lVar10 = DAT_180ceb598;
  if ((ulonglong)((DAT_180ceb5a8 - DAT_180ceb598 >> 2) * 4) < 0x1000) {
LAB_180206fe6:
    puVar12 = puVar11;
  }
  else {
    lVar10 = *(longlong *)(DAT_180ceb598 + -8);
    if (0x1f < (DAT_180ceb598 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      goto LAB_180206fe6;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180206ff1;
  thunk_FUN_1803d64e0(lVar10);
LAB_180206ff1:
  DAT_180ceb598 = lVar8;
  DAT_180ceb5a0 = lVar8 + uVar1 * 0x14;
  DAT_180ceb5a8 = uVar14 * 0x14 + lVar8;
  return lVar3;
}



/* ===== 180207040 FUN_180207040 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180207040(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [200];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  local_f4 = 0xc00000c8;
  FUN_180540170(local_f0,0,200);
  local_28 = 0;
  local_20 = 0;
  (*DAT_180961d08)(&local_f8,"panorama/images/backgrounds/bluedots_large_png.vtex");
  local_20 = 0x78657476;
  lVar1 = (**(code **)(*param_1 + 0x278))(param_1,&local_f8,0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = 0;
    if (*(undefined8 **)(lVar1 + 8) != (undefined8 *)0x0) {
      uVar2 = **(undefined8 **)(lVar1 + 8);
    }
  }
  return uVar2;
}



/* ===== 180207100 FUN_180207100 ===== */

longlong FUN_180207100(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  uint7 uVar3;
  longlong lVar2;
  longlong local_res20;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xc0))();
  lVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    local_res20 = 0;
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_res20,param_2);
    lVar2 = 0;
    if (local_res20 != 0) {
      plVar1 = *(longlong **)(local_res20 + 8);
      uVar3 = (uint7)((ulonglong)plVar1 >> 8);
      if ((plVar1 == (longlong *)0x0) || (*plVar1 != param_3)) {
        lVar2 = (ulonglong)uVar3 << 8;
      }
      else {
        lVar2 = CONCAT71(uVar3,1);
      }
    }
  }
  return lVar2;
}



/* ===== 180207170 FUN_180207170 ===== */

undefined8 FUN_180207170(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ULONGLONG UVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  
  lVar1 = DAT_180ceb5c8;
  if (((param_1 == 0) || (DAT_180cc4bf4 == '\0')) || (DAT_180ceb5c8 == 0)) {
    return 0;
  }
  lVar6 = DAT_180ceb5b8;
  if (DAT_180ceb5b8 != 0) goto LAB_1802072ca;
  UVar4 = GetTickCount64();
  cVar2 = DAT_180cc4bf6;
  if (UVar4 < DAT_180ceb5e0) {
    return 0;
  }
  LOCK();
  DAT_180cc4bf6 = '\x01';
  UNLOCK();
  if (cVar2 != '\0') {
    DAT_180cc4bf6 = '\x01';
    return 0;
  }
  DAT_180ceb5e0 = UVar4 + 2000;
  if (DAT_180961d08 == 0) {
LAB_18020725f:
    lVar6 = 0;
LAB_180207261:
    DAT_180cc4bf7 = '\x01';
  }
  else {
    hModule = GetModuleHandleA("resourcesystem.dll");
    if ((hModule == (HMODULE)0x0) ||
       (pFVar5 = GetProcAddress(hModule,"CreateInterface"), pFVar5 == (FARPROC)0x0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (*pFVar5)("ResourceSystem013",0);
    }
    if (lVar6 == 0) goto LAB_18020725f;
    lVar6 = FUN_180207040(lVar6);
    if (lVar6 == 0) goto LAB_180207261;
    DAT_180ceb5b8 = lVar6;
    if (DAT_180cc4bf7 != '\0') {
      DAT_180cc4b5f = 1;
    }
  }
  DAT_180cc4bf6 = '\0';
  LOCK();
  uVar3 = (uint)(lVar6 != 0);
  UNLOCK();
  bVar9 = (lVar6 != 0) != DAT_1809efa0c;
  DAT_1809efa0c = uVar3;
  if (bVar9) {
    pcVar7 = " (retry in 2 s)";
    if (lVar6 != 0) {
      pcVar7 = "";
    }
    pcVar8 = "texture not registered yet";
    if (lVar6 != 0) {
      pcVar8 = "texture resolved";
    }
    FUN_1802b2560("[dots] %s | %s -> %p%s",pcVar8,
                  "panorama/images/backgrounds/bluedots_large_png.vtex",lVar6,pcVar7);
  }
  if (lVar6 == 0) {
    return 0;
  }
LAB_1802072ca:
  cVar2 = FUN_180207100(lVar1,param_1,lVar6);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



/* ===== 180207310 FUN_180207310 ===== */

int FUN_180207310(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar1 = *(int *)(param_1 + 0x180);
  if ((0x3f < iVar1 - 1U) || (lVar2 = *(longlong *)(param_1 + 0x188), lVar2 == 0)) {
    return 0;
  }
  iVar6 = 0;
  lVar5 = DAT_180ceb5c0;
  while (iVar6 < iVar1) {
    plVar3 = *(longlong **)(lVar2 + (longlong)iVar6 * 8);
    if (((plVar3 == (longlong *)0x0) || (lVar5 == 0)) || (lVar4 = *plVar3, lVar4 != lVar5)) {
      iVar6 = iVar6 + 1;
    }
    else {
      (**(code **)(lVar4 + 0x100))();
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 1;
      lVar5 = DAT_180ceb5c0;
    }
  }
  return iVar7;
}



/* ===== 1802073a0 FUN_1802073a0 ===== */

void FUN_1802073a0(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  cVar3 = DAT_180cc4bf4;
  cVar2 = DAT_180cc4b5f;
  cVar1 = DAT_18095d3a9;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  LOCK();
  UNLOCK();
  LOCK();
  DAT_180cc4b5f = 0;
  UNLOCK();
  DAT_180ceb5c8 = param_1;
  if ((DAT_180cc4bf4 != DAT_18095d3a9) ||
     ((DAT_180cc4bf4 = DAT_18095d3a9, cVar2 != '\0' && (DAT_18095d3a9 != '\0')))) {
    DAT_180cc4bf4 = DAT_18095d3a9;
    uVar4 = FUN_180207310();
    if (cVar3 == cVar1) {
      pcVar5 = "texture resolved";
    }
    else {
      pcVar5 = "off";
      if (cVar1 != '\0') {
        pcVar5 = "on";
      }
    }
    FUN_1802b2560("[dots] %s | %d window(s) repainted",pcVar5,uVar4);
  }
  (*DAT_180ceb5b0)(param_1);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180207440 FUN_180207440 ===== */

undefined8
FUN_180207440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  char cVar1;
  undefined8 uVar2;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  cVar1 = FUN_180207170(param_2);
  if (cVar1 == '\0') {
    uVar2 = (*DAT_180ceb5d8)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,param_10,param_11);
  }
  else {
    uVar2 = 0;
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar2;
}



/* ===== 180207510 FUN_180207510 ===== */

undefined8
FUN_180207510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  char cVar1;
  undefined8 uVar2;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  cVar1 = FUN_180207170(param_2);
  if (cVar1 == '\0') {
    uVar2 = (*DAT_180ceb5d0)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                             ,param_10,param_11,param_12);
  }
  else {
    uVar2 = 0;
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar2;
}



/* ===== 1802075f0 FUN_1802075f0 ===== */

ulonglong FUN_1802075f0(longlong param_1,char *param_2)

{
  char *in_RAX;
  int iVar1;
  longlong lVar2;
  
  if (*param_2 == -0x17) {
    for (iVar1 = 0; iVar1 < 0x80; iVar1 = iVar1 + 1) {
      lVar2 = (longlong)iVar1;
      in_RAX = (char *)0x0;
      if (*(char *)(lVar2 + param_1) == -0x3d) break;
      if ((*(char *)(lVar2 + param_1) == -0x18) &&
         (in_RAX = (char *)(*(int *)(lVar2 + 1 + param_1) + lVar2 + param_1),
         in_RAX == param_2 + *(int *)(param_2 + 1))) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



/* ===== 180207650 FUN_180207650 ===== */

longlong FUN_180207650(longlong param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  
  bVar1 = false;
  bVar2 = false;
  for (iVar5 = 0; iVar5 + 4 < 0x81; iVar5 = iVar5 + 1) {
    if (*(int *)(iVar5 + param_1) == 0x180) {
      bVar1 = true;
    }
    if (*(int *)(iVar5 + param_1) == 0x188) {
      bVar2 = true;
    }
  }
  if ((((*param_2 == 'H') && (param_2[1] == -0x75)) && (param_2[2] == -0x7f)) &&
     (param_2[7] == -0x3d)) {
    lVar4 = 0;
    bVar3 = true;
  }
  else {
    lVar4 = (ulonglong)(uint3)((uint)(iVar5 + 4) >> 8) << 8;
    bVar3 = false;
  }
  if (((bVar1) && (bVar2)) && (bVar3)) {
    lVar4 = 1;
  }
  return lVar4;
}



/* ===== 1802076f0 FUN_1802076f0 ===== */

void FUN_1802076f0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  HMODULE pHVar4;
  HANDLE pvVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulonglong uVar14;
  char *local_58;
  ulonglong local_50;
  char *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  if (DAT_180cc4bf5 != '\0') {
    return;
  }
  DAT_180cc4bf5 = 1;
  pHVar4 = GetModuleHandleA("panorama.dll");
  if (pHVar4 == (HMODULE)0x0) {
LAB_180207b1b:
    FUN_1802b2560("[error] dots | panorama.dll not loaded: HUD Panorama Dots stays off");
    return;
  }
  local_48 = (char *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  pvVar5 = GetCurrentProcess();
  iVar3 = K32GetModuleInformation(pvVar5,pHVar4,&local_48,0x18);
  pcVar13 = local_48;
  if (iVar3 == 0) goto LAB_180207b1b;
  uVar14 = uStack_40 & 0xffffffff;
  local_58 = local_48;
  local_50 = uVar14;
  if ((local_48 == (char *)0x0) || (uVar14 == 0)) goto LAB_180207b1b;
  local_48 = "CUIEngineSource2@panorama";
  uStack_40 = 0x19;
  lVar6 = FUN_1801d1f10(&local_58,&local_48);
  uStack_40 = 0x18;
  local_48 = "CUIRenderEngine@panorama";
  lVar7 = FUN_1801d1f10(&local_58,&local_48);
  uStack_40 = 0x1f;
  local_48 = "CTopLevelWindowSource2@panorama";
  DAT_180ceb5c0 = FUN_1801d1f10(&local_58,&local_48);
  if (lVar6 == 0) {
    pcVar8 = (char *)0x0;
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar8 = (char *)FUN_18000f3a0(lVar6 + 0x4a0);
    pcVar9 = (char *)FUN_18000f3a0(lVar6 + 0xc0);
  }
  if (lVar7 == 0) {
    pcVar10 = (char *)0x0;
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar10 = (char *)FUN_18000f3a0(lVar7 + 0x10);
    pcVar11 = (char *)FUN_18000f3a0(lVar7 + 0x88);
  }
  if ((((((pcVar8 < pcVar13) || (pcVar1 = pcVar13 + uVar14, pcVar1 <= pcVar8)) || (pcVar9 < pcVar13)
        ) || ((pcVar1 <= pcVar9 || (pcVar10 < pcVar13)))) ||
      ((pcVar1 <= pcVar10 || ((pcVar11 < pcVar13 || (pcVar1 <= pcVar11)))))) || (DAT_180ceb5c0 == 0)
     ) {
    FUN_1802b2560("[error] dots | vtables: engine %p render %p window %p | RunFrame %p, slot 24 %p, draw %p / %p: HUD Panorama Dots stays off"
                  ,lVar6,lVar7,DAT_180ceb5c0,pcVar8,pcVar9,pcVar10,pcVar11);
    return;
  }
  cVar2 = FUN_180207650(pcVar8,pcVar9);
  if ((cVar2 == '\0') || (cVar2 = FUN_1802075f0(pcVar10,pcVar11), cVar2 == '\0')) {
    FUN_1802b2560("[error] dots | slot layout changed (RunFrame %p, slot 24 %p, draw %p / %p): HUD Panorama Dots stays off"
                  ,pcVar8,pcVar9,pcVar10,pcVar11);
    return;
  }
  iVar3 = FUN_180428df0(pcVar10,FUN_180207440,&DAT_180ceb5d8);
  if (iVar3 != 0) {
    uVar12 = FUN_180429510(iVar3);
    FUN_1802b2560("[error] dots | %s: hook failed | %s","CUIRenderEngine slot 2",uVar12);
    DAT_180ceb5d8 = 0;
    return;
  }
  iVar3 = FUN_1804293b0(pcVar10,1);
  if (iVar3 == 0) {
    FUN_1802b2560("[dots] %s hooked -> %p","CUIRenderEngine slot 2",pcVar10);
    iVar3 = FUN_180428df0(pcVar11,FUN_180207510,&DAT_180ceb5d0);
    if (iVar3 != 0) {
      uVar12 = FUN_180429510(iVar3);
      FUN_1802b2560("[error] dots | %s: hook failed | %s","CUIRenderEngine slot 17",uVar12);
      DAT_180ceb5d0 = 0;
      return;
    }
    iVar3 = FUN_1804293b0(pcVar11,1);
    if (iVar3 == 0) {
      FUN_1802b2560("[dots] %s hooked -> %p","CUIRenderEngine slot 17",pcVar11);
      iVar3 = FUN_180428df0(pcVar8,FUN_1802073a0,&DAT_180ceb5b0);
      if (iVar3 != 0) {
        uVar12 = FUN_180429510(iVar3);
        FUN_1802b2560("[error] dots | %s: hook failed | %s","CUIEngine slot 148 (RunFrame)",uVar12);
        DAT_180ceb5b0 = 0;
        return;
      }
      iVar3 = FUN_1804293b0(pcVar8,1);
      if (iVar3 == 0) {
        pcVar13 = "CUIEngine slot 148 (RunFrame)";
        pcVar9 = "[dots] %s hooked -> %p";
        goto LAB_18020796c;
      }
      pcVar8 = (char *)FUN_180429510(iVar3);
      pcVar13 = "CUIEngine slot 148 (RunFrame)";
    }
    else {
      pcVar8 = (char *)FUN_180429510(iVar3);
      pcVar13 = "CUIRenderEngine slot 17";
    }
  }
  else {
    pcVar8 = (char *)FUN_180429510(iVar3);
    pcVar13 = "CUIRenderEngine slot 2";
  }
  pcVar9 = "[error] dots | %s: enable failed | %s";
LAB_18020796c:
  FUN_1802b2560(pcVar9,pcVar13,pcVar8);
  return;
}



/* ===== 180207b30 FUN_180207b30 ===== */

ulonglong FUN_180207b30(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10;
  
  local_res10 = CONCAT44((int)((ulonglong)param_2 >> 0x20),0xffffffff);
  (*DAT_180962088)(param_1,&local_res10,"particles/dev/materials_test_alpha_thresholding.vpcf",8,0,0
                   ,0,0);
  return local_res10 & 0xffffffff;
}



/* ===== 180207b90 FUN_180207b90 ===== */

void FUN_180207b90(void)

{
  (*DAT_1809620b0)();
  return;
}



/* ===== 180207bf0 FUN_180207bf0 ===== */

void FUN_180207bf0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  float fVar10;
  int local_res10;
  undefined4 uStackX_14;
  int local_res18 [4];
  uint local_58;
  uint local_54;
  uint local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28 [4];
  
  if ((DAT_180921084 != '\0') && (fVar10 = (float)FUN_180273cc0(param_1,"health"), fVar10 <= 0.0)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res10);
      lVar9 = CONCAT44(uStackX_14,local_res10);
    }
    else {
      lVar9 = DAT_181108a00;
    }
    if (lVar9 != 0) {
      lVar4 = FUN_180273f90(param_1,"attacker");
      lVar5 = FUN_180273f90(param_1,"userid");
      if ((((lVar5 != 0) && (lVar5 != lVar4)) && (lVar4 == lVar9)) && (DAT_180ca09fc != 0)) {
        uVar2 = FUN_180011200((ulonglong)DAT_180ca09fc + lVar5);
        plVar6 = (longlong *)FUN_1803a0940(&local_res10,uVar2);
        lVar9 = *plVar6;
        if ((((lVar9 != 0) && (DAT_180962080 != 0)) &&
            ((DAT_180962088 != 0 && ((DAT_180962090 != 0 && (DAT_1809620b0 != 0)))))) &&
           (lVar4 = FUN_18000f3a0(), lVar4 != 0)) {
          if (DAT_180cc4bf8 == '\0') {
            DAT_180cc4bf8 = FUN_1802080c0("particles/dev/materials_test_alpha_thresholding.vpcf");
          }
          iVar3 = FUN_180207b30(lVar4);
          if (((iVar3 != -1) && (cVar1 = FUN_180207b90(lVar4,iVar3,0,lVar9), cVar1 != '\0')) &&
             (cVar1 = FUN_180207b90(lVar4,iVar3,1,lVar9), cVar1 != '\0')) {
            piVar8 = &local_res10;
            local_res18[0] = 100;
            local_res10 = 0;
            local_28[1] = 0.0;
            local_28[2] = 0.0;
            if (-1 < DAT_1809210ac) {
              piVar8 = &DAT_1809210ac;
            }
            piVar7 = local_res18;
            if (DAT_1809210ac < 0x65) {
              piVar7 = piVar8;
            }
            piVar8 = &local_res10;
            if (-1 < DAT_1809210b0) {
              piVar8 = &DAT_1809210b0;
            }
            local_res10 = 0;
            local_48 = (float)*piVar7;
            local_res18[0] = 200;
            piVar7 = local_res18;
            if (DAT_1809210b0 < 0xc9) {
              piVar7 = piVar8;
            }
            local_58 = (uint)local_48 ^ DAT_1808adec0;
            local_40 = (float)*piVar7 + local_48;
            local_50 = (uint)local_40 ^ DAT_1808adec0;
            local_38 = DAT_18092109c * DAT_1808acb94;
            local_30 = DAT_1809210a4 * DAT_1808acb94;
            local_34 = DAT_1809210a0 * DAT_1808acb94;
            local_28[0] = DAT_1809210a8 * DAT_1808acb94;
            local_54 = local_58;
            local_44 = local_48;
            FUN_18007e970(lVar4,iVar3,3,&local_58);
            FUN_18007e970(lVar4,iVar3,5,&local_48);
            FUN_18007e970(lVar4,iVar3,2,&local_38);
            FUN_18007e970(lVar4,iVar3,4,local_28);
          }
        }
      }
    }
  }
  return;
}



/* ===== 180207ed0 FUN_180207ed0 ===== */

undefined8 FUN_180207ed0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(*(uint *)(param_1 + -0xd4) & 0x3fffffff);
  if (0x1ff < uVar3) {
    uVar3 = 0x1ff;
  }
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + -0xd0);
    if ((*(uint *)(param_1 + -0xd4) >> 0x1e & 1) == 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      FUN_180540530(param_2,puVar2,uVar3);
      *(undefined1 *)(uVar3 + param_2) = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* ===== 180207f50 FUN_180207f50 ===== */

undefined8 FUN_180207f50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_4,param_2);
    uVar2 = 0;
    if (lVar3 != 0) {
      FUN_180540530(lVar3,param_3,param_4);
      *(longlong *)(param_1 + 0x38) = lVar3;
      *(undefined8 *)(param_1 + 0x40) = param_4;
      *(undefined8 *)(param_1 + 0x48) = param_4;
      (*DAT_180962078)(param_1 + -0xe0,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== 180207fc0 FUN_180207fc0 ===== */

undefined8 FUN_180207fc0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_28 = 0;
  if (0 < (longlong)*(ulonglong *)(param_1 + 0x20)) {
    local_28 = *(ulonglong *)(param_1 + 0x20);
  }
  uVar3 = local_28;
  if (param_4 < local_28) {
    uVar3 = param_4;
  }
  local_38 = *(ulonglong *)(param_1 + 0x28);
  if ((longlong)local_38 < 1) {
    local_38 = param_4 - uVar3;
  }
  else {
    local_20 = param_4 - uVar3;
    local_18 = local_38;
    if (local_20 < local_38) {
      local_38 = local_20;
    }
  }
  local_30 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (local_38 == 0) goto LAB_180208097;
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    local_30 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_38,param_2);
    if (local_30 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 0x38) = local_30;
    *(ulonglong *)(param_1 + 0x40) = local_38;
  }
  else {
    puVar2 = &local_38;
    if (*(ulonglong *)(param_1 + 0x40) < local_38) {
      puVar2 = (ulonglong *)(param_1 + 0x40);
    }
    local_38 = *puVar2;
  }
  if (local_38 != 0) {
    FUN_180540530(local_30,uVar3 + param_3,local_38);
  }
LAB_180208097:
  *(ulonglong *)(param_1 + 0x48) = local_38;
  (*DAT_180962078)(param_1 + -0xe0,0);
  return 1;
}



/* ===== 1802080c0 FUN_1802080c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802080c0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [200];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_118;
  if (DAT_1811150b0 == 0) {
    hModule = GetModuleHandleA("resourcesystem.dll");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar3 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar3 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1811150b0 = (*pFVar3)("ResourceSystem013",0);
    if (DAT_1811150b0 == 0) {
      return 0;
    }
  }
  lVar2 = DAT_1811150b0;
  pcVar1 = DAT_180961d08;
  if (((param_1 == 0) || (DAT_180961d08 == (code *)0x0)) || (DAT_180961d10 == (code *)0x0)) {
    return 0;
  }
  local_f8 = 0;
  local_f4 = 0xc00000c8;
  FUN_180540170(local_f0,0,200);
  local_28 = 0;
  local_20 = 0;
  (*pcVar1)(&local_f8,param_1);
  local_20 = 0x66637076;
  (*DAT_180961d10)(lVar2,&local_f8,&DAT_18058b643);
  return 1;
}



/* ===== 180208200 FUN_180208200 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180208200(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  undefined1 auStack_258 [32];
  char local_238 [512];
  ulonglong local_38;
  
  uVar1 = DAT_180919500 ^ (ulonglong)auStack_258;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (DAT_180962078 != 0)))) {
    local_38 = uVar1;
    FUN_180540170(local_238,0,0x200);
    uVar1 = FUN_180207ed0(param_1,local_238);
    if ((char)uVar1 != '\0') {
      pcVar2 = local_238;
      while (local_238[0] != '\0') {
        if (*pcVar2 == '\\') {
          *pcVar2 = '/';
        }
        pcVar2 = pcVar2 + 1;
        local_238[0] = *pcVar2;
      }
      lVar3 = FUN_1804ef120(local_238,param_2);
      uVar1 = 0;
      if (lVar3 != 0) {
        uVar1 = FUN_180207f50(param_1,local_238,param_3,param_4);
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



/* ===== 1802082d0 FUN_1802082d0 ===== */

int FUN_1802082d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char *_Str1;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((lVar2 == 0) || (uVar1 = *(uint *)(param_1 + 0x18), 0x200 < uVar1)) {
    iVar4 = 0;
  }
  else {
    uVar5 = 0;
    while ((uVar5 < uVar1 && (iVar4 < 4))) {
      lVar6 = (ulonglong)uVar5 * 0x40 + lVar2;
      _Str1 = *(char **)(lVar6 + 0x28);
      if ((_Str1 != (char *)0x0) &&
         ((iVar3 = strcmp(_Str1,"g_flBrightnessExposureBias"), iVar3 == 0 ||
          (iVar3 = strcmp(_Str1,"g_flRenderOnlyExposureBias"), iVar3 == 0)))) {
        *(longlong *)(param_2 + (longlong)iVar4 * 8) = lVar6;
        iVar4 = iVar4 + 1;
      }
      uVar5 = uVar5 + 1;
    }
  }
  return iVar4;
}



/* ===== 180208380 FUN_180208380 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180208380(undefined8 param_1,char param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  float local_70 [2];
  undefined1 local_68 [16];
  ulonglong local_58 [8];
  
  local_58[4] = DAT_180919500 ^ (ulonglong)auStack_98;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  iVar6 = FUN_1802082d0(0,local_58);
  fVar4 = DAT_1808acdf8;
  uVar10 = 0;
  if (0 < iVar6) {
    do {
      local_78 = local_58[uVar10];
      local_70[0] = (float)FUN_18000f3d0();
      if (param_2 == '\0') {
        uVar7 = ((((((((local_78 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ local_78 >> 8 & 0xff
                      ) * 0x100000001b3 ^ local_78 >> 0x10 & 0xff) * 0x100000001b3 ^
                    local_78 >> 0x18 & 0xff) * 0x100000001b3 ^ local_78 >> 0x20 & 0xff) *
                   0x100000001b3 ^ local_78 >> 0x28 & 0xff) * 0x100000001b3 ^
                 local_78 >> 0x30 & 0xff) * 0x100000001b3 ^ local_78 >> 0x38) * 0x100000001b3 &
                DAT_180ceb640;
        plVar8 = *(longlong **)(DAT_180ceb628 + 8 + uVar7 * 0x10);
        if (plVar8 == DAT_180ceb618) {
LAB_180208501:
          plVar8 = (longlong *)0x0;
        }
        else {
          uVar1 = plVar8[2];
          while (local_78 != uVar1) {
            if (plVar8 == *(longlong **)(DAT_180ceb628 + uVar7 * 0x10)) goto LAB_180208501;
            plVar8 = (longlong *)plVar8[1];
            uVar1 = plVar8[2];
          }
        }
        if ((plVar8 != (longlong *)0x0) && (plVar8 != DAT_180ceb618)) {
          FUN_180013280(local_78,plVar8 + 3);
          lVar3 = DAT_180ceb628;
          plVar5 = DAT_180ceb618;
          uVar7 = (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 & DAT_180ceb640;
          plVar2 = *(longlong **)(DAT_180ceb628 + uVar7 * 0x10);
          if (*(longlong **)(DAT_180ceb628 + 8 + uVar7 * 0x10) == plVar8) {
            if (plVar2 == plVar8) {
              *(longlong **)(DAT_180ceb628 + uVar7 * 0x10) = DAT_180ceb618;
              *(longlong **)(lVar3 + 8 + uVar7 * 0x10) = plVar5;
            }
            else {
              *(longlong *)(DAT_180ceb628 + 8 + uVar7 * 0x10) = plVar8[1];
            }
          }
          else if (plVar2 == plVar8) {
            *(longlong *)(DAT_180ceb628 + uVar7 * 0x10) = *plVar8;
          }
          lVar3 = *plVar8;
          DAT_180ceb620 = DAT_180ceb620 + -1;
          *(longlong *)plVar8[1] = lVar3;
          *(longlong *)(lVar3 + 8) = plVar8[1];
          thunk_FUN_1803d64e0(plVar8,0x20);
        }
      }
      else if (local_70[0] != fVar4) {
        FUN_180209090(local_70[0],local_68,&local_78,local_70);
        DAT_180cc4bfe = 1;
        FUN_180013280(local_78,&DAT_180616018);
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < iVar6);
  }
  return;
}



/* ===== 180208630 FUN_180208630 ===== */

void FUN_180208630(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  int iVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 local_res8;
  
  if (DAT_180cc4bfa != '\0') {
    return;
  }
  iVar9 = 1;
  if (DAT_180ca0d57 == '\0') {
    DAT_180ca0d57 = '\x01';
    FUN_180011cb0("client.dll","CCSGO_TeamIntroMenu",0x20,1,FUN_180011ae0,&DAT_180ca3bb8,
                  "team intro");
    FUN_180011cb0("client.dll","CCSGO_HudMatchAlerts",0x20,1,FUN_180011b40,&DAT_180ca3bf0,
                  "server advertisements");
    FUN_180011cb0("client.dll","CCSGO_HudDamageIndicator",0x20,9,FUN_180011ba0,&DAT_180ca3a48,
                  "damage indicator");
    FUN_180011cb0("particles.dll","CParticleObjectDesc",0,4,FUN_180011bd0,&DAT_180ca3a38,
                  "particle filter");
    FUN_1802076f0();
  }
  if (DAT_180ca0cdc == '\0') {
    DAT_180ca0cdc = '\x01';
    FUN_180010000("CCSUsrMsg_ReportHit",FUN_18000fd50,&DAT_180ca1c60);
    FUN_180010000("CMsgTEFireBullets",FUN_18000fe90,&DAT_180ca39d8);
  }
  FUN_18038d0c0();
  if ((DAT_1809210be != '\0') && (DAT_180ca0a28 != 0)) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res8);
      DAT_181108a00 = local_res8;
      DAT_1811089f8 = FUN_1803a0c50(&local_res8);
      DAT_180cd1304 = '\x01';
    }
    lVar4 = DAT_1811089f8;
    if ((((DAT_1811089f8 != 0) && (DAT_180ca09f0 != 0)) &&
        (iVar2 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0), iVar2 - 1U < 1000)) &&
       (cVar1 = FUN_180011220((ulonglong)DAT_180ca0a28 + lVar4), cVar1 != '\0')) {
      DAT_180cc4bff = '\x01';
      goto LAB_180208857;
    }
  }
  DAT_180cc4bff = '\0';
LAB_180208857:
  LOCK();
  UNLOCK();
  if (DAT_180cc4bfd == '\0') {
    DAT_180cc4bfd = '\x01';
    DAT_180ceb5e8 = FUN_180264b70("cl_firstperson_legs");
    if ((DAT_180ceb5e8 != 0) && (cVar1 = FUN_180264d70(DAT_180ceb5e8), cVar1 == '\0')) {
      DAT_180ceb5f0 = FUN_180264d70(DAT_180ceb5e8);
      DAT_180cc4bfb = 1;
      FUN_180264d90(DAT_180ceb5e8,DAT_180ceb5f0 & 0xffffffffffffff01 | 1);
    }
  }
  ppuVar7 = &PTR_s_r_draw3dskybox_1809f16c0;
  do {
    iVar2 = *(int *)(ppuVar7 + 1);
    lVar4 = FUN_1800f1c60();
    if (iVar2 == 0) {
      cVar1 = *(char *)(lVar4 + 0x36c);
LAB_180208902:
      if (cVar1 == '\0') goto LAB_180208906;
      if (ppuVar7[2] == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        if (*(char *)((longlong)ppuVar7 + 0x21) == '\0') {
          puVar10 = (undefined *)FUN_180264b70(*ppuVar7);
          ppuVar7[2] = puVar10;
          *(bool *)((longlong)ppuVar7 + 0x21) = puVar10 == (undefined *)0x0;
        }
        if (puVar10 != (undefined *)0x0) goto LAB_18020894a;
      }
      else {
LAB_18020894a:
        if (*(char *)(ppuVar7 + 4) == '\0') {
          puVar10 = (undefined *)FUN_180264d70();
          ppuVar7[3] = puVar10;
          *(undefined1 *)(ppuVar7 + 4) = 1;
        }
        lVar4 = FUN_180264d70(ppuVar7[2]);
        if (lVar4 != 0) {
          FUN_180264d90(ppuVar7[2],0);
        }
      }
    }
    else {
      if (iVar2 == 1) {
        cVar1 = *(char *)(lVar4 + 0x36b);
        goto LAB_180208902;
      }
      if (iVar2 == 2) {
        cVar1 = DAT_180cc4bff;
        goto LAB_180208902;
      }
LAB_180208906:
      if (*(char *)(ppuVar7 + 4) != '\0') {
        FUN_180264d90(ppuVar7[2],ppuVar7[3]);
        *(undefined1 *)(ppuVar7 + 4) = 0;
      }
    }
    cVar1 = DAT_18095d3b4;
    ppuVar7 = ppuVar7 + 5;
    if (ppuVar7 == &PTR_s_ragdoll_gravity_scale_1809f1738) {
      FUN_180012ce0(&PTR_s_r_csgo_render_decals_1809624f8,DAT_18095d3b4);
      pcVar8 = "found";
      puVar10 = &DAT_1806d2870;
      uVar3 = (uint)(cVar1 != '\0');
      if (uVar3 != DAT_180962520) {
        if (DAT_180962500 == 0) {
          pcVar11 = "pending";
          if (DAT_180962511 != '\0') {
            pcVar11 = "missing";
          }
        }
        else {
          pcVar11 = "found";
        }
        puVar6 = &DAT_1806d2870;
        if (cVar1 != '\0') {
          puVar6 = &DAT_1806d286c;
        }
        DAT_180962520 = uVar3;
        FUN_1802b2560("[removals] decals %s | r_csgo_render_decals %s",puVar6,pcVar11);
      }
      DAT_180cd127b = DAT_18095d3b1;
      lVar4 = FUN_1800f1c60();
      DAT_1811088e0 = *(undefined1 *)(lVar4 + 0x2c);
      if ((*(char *)(lVar4 + 0x365) == '\0') && (*(char *)(lVar4 + 0x366) != '\0')) {
        DAT_1811088e1 = 1;
      }
      else {
        DAT_1811088e1 = 0;
      }
      uVar5 = 0;
      do {
        (&DAT_1811088e4)[uVar5] = *(undefined4 *)(lVar4 + 0x30 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      if (*(char *)(lVar4 + 0x2c) == '\0') {
        DAT_1811162f0 = '\0';
        DAT_181108998 = 0;
      }
      else if ((DAT_1811162f0 == '\0') && (0 < DAT_181108998)) {
        DAT_1811162f0 = '\x01';
        FUN_1802b2560("[world effects] fullbright: written into the view after the ambient copy (%d frames)"
                      ,DAT_181108998);
      }
      if ((DAT_18095d1d8 == '\0') || (DAT_18095d1fc == '\0')) {
        cVar1 = '\0';
        iVar9 = 0;
      }
      else {
        cVar1 = '\x01';
      }
      FUN_18038cb80(cVar1);
      if (iVar9 != DAT_1809f7588) {
        if ((DAT_1811088f8 == 0) && (pcVar8 = "pending", DAT_181108909 != '\0')) {
          pcVar8 = "missing";
        }
        if (cVar1 != '\0') {
          puVar10 = &DAT_1806d286c;
        }
        DAT_1809f7588 = iVar9;
        FUN_1802b2560("[world effects] disable inferno decals %s | r_csgo_render_inferno_decals %s",
                      puVar10,pcVar8);
      }
      return;
    }
  } while( true );
}



/* ===== 180208b40 FUN_180208b40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180208b40(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  code *pcVar11;
  char ****ppppcVar12;
  char *pcVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  char ****local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  cVar6 = DAT_18095d3aa;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_58 = 0;
  bVar15 = DAT_18095d3aa != '\0';
  if (DAT_180961ab0 == 0) {
    return;
  }
  lVar7 = FUN_18000f3a0();
  if (lVar7 == 0) {
    return;
  }
  lVar7 = FUN_18000f3a0(lVar7 + 8);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = FUN_18000f3a0(lVar7);
  if (lVar8 == 0) {
    return;
  }
  lVar8 = FUN_18000f3a0(lVar8);
  if (lVar8 == 0) {
    return;
  }
  UVar9 = GetTickCount64();
  if ((bVar15 == DAT_1809f09d8) && (lVar7 == DAT_180ceb600)) {
    if (DAT_180cc4bfc != '\0') {
      if (cVar6 == '\0') {
        return;
      }
      if (UVar9 - _DAT_180ceb608 < 500) {
        return;
      }
      goto LAB_180208c09;
    }
LAB_180208c17:
    bVar1 = true;
  }
  else {
LAB_180208c09:
    if ((DAT_180cc4bfc == '\0') || (lVar7 != DAT_180ceb600)) goto LAB_180208c17;
    bVar1 = false;
  }
  local_50 = (char ****)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = (char ****)FUN_18000fb70(0xa0);
  uVar2 = s__function______try___var_root_____180709310._8_8_;
  local_40 = 0x93;
  local_38 = 0x9f;
  *local_50 = (char ***)s__function______try___var_root_____180709310._0_8_;
  local_50[1] = (char ***)uVar2;
  uVar2 = s__function______try___var_root_____180709310._24_8_;
  local_50[2] = (char ***)s__function______try___var_root_____180709310._16_8_;
  local_50[3] = (char ***)uVar2;
  uVar2 = s__function______try___var_root_____180709310._40_8_;
  local_50[4] = (char ***)s__function______try___var_root_____180709310._32_8_;
  local_50[5] = (char ***)uVar2;
  uVar2 = s__function______try___var_root_____180709310._56_8_;
  local_50[6] = (char ***)s__function______try___var_root_____180709310._48_8_;
  local_50[7] = (char ***)uVar2;
  uVar2 = s__function______try___var_root_____180709310._72_8_;
  local_50[8] = (char ***)s__function______try___var_root_____180709310._64_8_;
  local_50[9] = (char ***)uVar2;
  uVar2 = s__function______try___var_root_____180709310._88_8_;
  local_50[10] = (char ***)s__function______try___var_root_____180709310._80_8_;
  local_50[0xb] = (char ***)uVar2;
  uVar2 = s__function______try___var_root_____180709310._104_8_;
  local_50[0xc] = (char ***)s__function______try___var_root_____180709310._96_8_;
  local_50[0xd] = (char ***)uVar2;
  uVar5 = s__function______try___var_root_____180709310._124_4_;
  uVar4 = s__function______try___var_root_____180709310._120_4_;
  uVar3 = s__function______try___var_root_____180709310._116_4_;
  *(undefined4 *)(local_50 + 0xe) = s__function______try___var_root_____180709310._112_4_;
  *(undefined4 *)((longlong)local_50 + 0x74) = uVar3;
  *(undefined4 *)(local_50 + 0xf) = uVar4;
  *(undefined4 *)((longlong)local_50 + 0x7c) = uVar5;
  uVar5 = s__function______try___var_root_____180709310._140_4_;
  uVar4 = s__function______try___var_root_____180709310._136_4_;
  uVar3 = s__function______try___var_root_____180709310._132_4_;
  *(undefined4 *)(local_50 + 0x10) = s__function______try___var_root_____180709310._128_4_;
  *(undefined4 *)((longlong)local_50 + 0x84) = uVar3;
  *(undefined4 *)(local_50 + 0x11) = uVar4;
  *(undefined4 *)((longlong)local_50 + 0x8c) = uVar5;
  *(uint *)((longlong)local_50 + 0x8f) =
       CONCAT31(s__function______try___var_root_____180709310._144_3_,
                s__function______try___var_root_____180709310[0x8f]);
  *(char *)((longlong)local_50 + 0x93) = '\0';
  local_58 = 1;
  if (bVar1) {
    FUN_1800134a0(&local_50,
                  " [\'HudBottomGradient\', \'HudDamageIndicator\'].forEach(function (id) { var q = root.FindChildTraverse(id); if (q && q.IsValid()) q.style.opacity = null; });"
                  ,0x9a);
  }
  FUN_1800134a0(&local_50,
                " var p = root.FindChildTraverse(\'HudBottomGradient\'); if (!p || !p.IsValid()) return; var d = p.Data();"
                ,0x67);
  pcVar13 = 
  " if (!d.wlHidden) { d.wlVisible = p.visible; d.wlHidden = true; $.Msg(\'[neverlose] hud removals | bottom gradient hidden\'); } if (p.visible) p.visible = false;"
  ;
  if (cVar6 == '\0') {
    pcVar13 = 
    " if (d.wlHidden) { if (p.visible !== d.wlVisible) p.visible = d.wlVisible; d.wlHidden = false; $.Msg(\'[neverlose] hud removals | bottom gradient restored\'); }"
    ;
  }
  FUN_1800134a0(&local_50,pcVar13,(ulonglong)(cVar6 != '\0') + 0x9d);
  FUN_1800134a0(&local_50,"} catch (e) { $.Msg(\'[neverlose] hud removals | \' + e); } })();",0x3e);
  if (local_38 < 0x10) {
    ppppcVar12 = (char ****)&local_50;
LAB_180208de1:
    cVar6 = FUN_180200ed0();
    if ((((cVar6 != '\0') && (lVar8 = FUN_180200ff0(), lVar8 != 0)) &&
        (lVar10 = FUN_18000f3a0(lVar8), lVar10 != 0)) &&
       ((pcVar11 = (code *)FUN_18000f3a0(lVar10 + 0x268), DAT_180ceb448 <= pcVar11 &&
        (pcVar11 < DAT_180ceb440)))) {
      local_68 = 1;
      (*pcVar11)(lVar8,lVar7,ppppcVar12,&DAT_18070230d);
      bVar1 = false;
      goto LAB_180208d68;
    }
  }
  else {
    ppppcVar12 = local_50;
    if (local_50 != (char ****)0x0) goto LAB_180208de1;
  }
  bVar1 = true;
LAB_180208d68:
  if (0xf < local_38) {
    uVar14 = local_38 + 1;
    ppppcVar12 = local_50;
    if (0xfff < uVar14) {
      ppppcVar12 = (char ****)local_50[-1];
      if ((char *)0x1f < (char *)((longlong)local_50 + (-8 - (longlong)ppppcVar12))) {
        pcVar11 = (code *)swi(0x29);
        (*pcVar11)(5);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar14 = local_38 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppcVar12,uVar14);
  }
  if (!bVar1) {
    DAT_180cc4bfc = '\x01';
    DAT_1809f09d8 = (uint)bVar15;
    DAT_180ceb600 = lVar7;
    _DAT_180ceb608 = UVar9;
  }
  return;
}



/* ===== 180208e60 FUN_180208e60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180208e60(void)

{
  char cVar1;
  int iVar2;
  undefined **ppuVar3;
  
  DAT_180cc4bfa = 1;
  if ((DAT_180cc4bfb != '\0') && (DAT_180ceb5e8 != 0)) {
    FUN_180264d90(DAT_180ceb5e8,DAT_180ceb5f0);
    DAT_180cc4bfb = '\0';
  }
  ppuVar3 = &PTR_s_r_draw3dskybox_1809f16c0;
  do {
    if (*(char *)(ppuVar3 + 4) != '\0') {
      FUN_180264d90(ppuVar3[2],ppuVar3[3]);
      *(undefined1 *)(ppuVar3 + 4) = 0;
    }
    ppuVar3 = ppuVar3 + 5;
  } while (ppuVar3 != &PTR_s_ragdoll_gravity_scale_1809f1738);
  if (DAT_180962510 != '\0') {
    FUN_180264d90(DAT_180962500,DAT_180962508);
    DAT_180962510 = '\0';
  }
  DAT_180ca0cdf = 1;
  if (DAT_180ca3be8 != '\0') {
    DAT_180ca3be8 = '\0';
    cVar1 = FUN_18026b600(DAT_180ca3be0,&DAT_180ca3bc8,DAT_180ca3bd8);
    if (cVar1 == '\0') {
      FUN_1802b2560("[error] event listeners | unregister failed");
    }
  }
  if (DAT_180ca3a30 != '\0') {
    DAT_180ca3a30 = '\0';
    cVar1 = FUN_18026b600(DAT_180ca3a28,&DAT_180ca3a10,DAT_180ca3a20);
    if (cVar1 == '\0') {
      FUN_1802b2560("[error] event listeners | unregister failed");
    }
  }
  if (DAT_180ca3a70 != '\0') {
    DAT_180ca3a70 = '\0';
    cVar1 = FUN_18026b600(DAT_180ca3a68,&DAT_180ca3a50,DAT_180ca3a60);
    if (cVar1 == '\0') {
      FUN_1802b2560("[error] event listeners | unregister failed");
    }
  }
  iVar2 = 0;
  do {
    if (DAT_180ca3bb4 < 1) break;
    Sleep(1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1000);
  if ((((DAT_180ca3b80 != '\0') && (DAT_180ca3b90 != 0)) && (DAT_180ca3b88 != 0)) &&
     (((DAT_180ca3b94 != 0 && (DAT_180ca0d56 != '\0')) && (DAT_180ca3a78 != 0)))) {
    if (DAT_180ca3a78 - 0x10000U < 0x7ffffffeffff) {
      FUN_180013280((ulonglong)DAT_180ca3b90 + DAT_180ca3a78,&DAT_1809624f4);
    }
    if (DAT_18096251c != 0) {
      DAT_18096251c = 0;
    }
    _DAT_1809624f4 = 0xffffffff;
    DAT_180ca3a78 = 0;
  }
  DAT_180cd127d = 0;
  DAT_180cd127b = 0;
  DAT_1811088e0 = 0;
  DAT_1811088e1 = 0;
  if (DAT_181108908 != '\0') {
    FUN_180264d90(DAT_1811088f8,DAT_181108900);
    DAT_181108908 = '\0';
  }
  return;
}



/* ===== 180209090 FUN_180209090 ===== */

undefined8 * FUN_180209090(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

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
  puVar6 = (undefined8 *)(DAT_180ceb640 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180ceb628 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180ceb618;
  if (puVar3 != DAT_180ceb618) {
    puVar6 = *(undefined8 **)(DAT_180ceb628 + (longlong)puVar6 * 0x10);
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
  if (DAT_180ceb620 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,DAT_180ceb628,param_4,&DAT_180ceb618,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar3 + 3) = *param_4;
  uVar2 = DAT_180ceb648;
  if (DAT_180ceb610 < (float)(DAT_180ceb620 + 1) / (float)DAT_180ceb648) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180ceb620 + 1) / DAT_180ceb610);
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
    FUN_180209380(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180ceb628 + 8 + (DAT_180ceb640 & uVar7) * 0x10);
    puVar8 = DAT_180ceb618;
    if (puVar6 != DAT_180ceb618) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180ceb628 + (DAT_180ceb640 & uVar7) * 0x10))
        goto LAB_1802092f9;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_1802092f9:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180ceb620 = DAT_180ceb620 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180ceb628;
  uVar7 = DAT_180ceb640 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180ceb628 + uVar7 * 0x10);
  if (puVar1 == DAT_180ceb618) {
    *(undefined8 **)(DAT_180ceb628 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180ceb628 + uVar7 * 0x10) = puVar3;
      goto LAB_180209358;
    }
    if (*(undefined8 **)(DAT_180ceb628 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180209358;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_180209358:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180209380 FUN_180209380 ===== */

void FUN_180209380(undefined8 param_1,ulonglong param_2)

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
  
  plVar9 = DAT_180ceb618;
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
  FUN_180029a30(&DAT_180ceb628,2L << (bVar11 & 0x3f),DAT_180ceb618);
  DAT_180ceb640 = lVar12 - 1;
  DAT_180ceb648 = lVar12;
  plVar8 = (longlong *)*DAT_180ceb618;
joined_r0x0001802093fc:
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
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3 & DAT_180ceb640;
        plVar3 = *(longlong **)(DAT_180ceb628 + uVar10 * 0x10);
        puVar1 = (undefined8 *)(DAT_180ceb628 + uVar10 * 0x10);
        lVar12 = DAT_180ceb628 + uVar10 * 0x10;
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
        goto joined_r0x0001802093fc;
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



/* ===== 180209580 FUN_180209580 ===== */

longlong FUN_180209580(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if ((lVar1 == 0) && (*(char *)((longlong)param_1 + 0x19) == '\0')) {
    lVar1 = FUN_180264b70(*param_1);
    *(bool *)((longlong)param_1 + 0x19) = lVar1 == 0;
    if (lVar1 == 0) {
      FUN_1802b2560("[error] ragdolls | ConVar %s not found",*param_1);
    }
    LOCK();
    param_1[1] = lVar1;
    UNLOCK();
  }
  return lVar1;
}



/* ===== 1802095e0 FUN_1802095e0 ===== */

ulonglong FUN_1802095e0(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  
  iVar1 = DAT_18095d3b8;
  if (DAT_180ca006d == '\0') {
    if ((DAT_18095d3b8 == 2) != DAT_1809f09dc) {
      puVar6 = &DAT_1806d2870;
      if (DAT_18095d3b8 == 2) {
        puVar6 = &DAT_1806d286c;
      }
      DAT_1809f09dc = (uint)(DAT_18095d3b8 == 2);
      FUN_1802b2560("[ragdolls] force %s | gravity %d%% friction %d%%",puVar6,DAT_18095d3bc,
                    DAT_18095d3c0);
    }
    iVar2 = DAT_18095d3bc;
    if (iVar1 == 2) {
      lVar4 = FUN_180209580(&PTR_s_ragdoll_gravity_scale_1809f1738);
      if (lVar4 != 0) {
        uVar5 = FUN_180264d70(lVar4);
        if (DAT_1809f1750 == '\0') {
          LOCK();
          UNLOCK();
          LOCK();
          DAT_1809f1750 = '\x01';
          UNLOCK();
          DAT_1809f1748 = uVar5;
        }
        if (uVar5 != (uVar5 & 0xffffffff00000000 | (ulonglong)(uint)((float)iVar2 * DAT_1808ac000)))
        {
          FUN_180264d90(lVar4);
        }
      }
      iVar1 = DAT_18095d3c0;
      lVar4 = FUN_180209580(&PTR_s_ragdoll_friction_scale_1809f1758);
      in_RAX = 0;
      if (lVar4 != 0) {
        uVar5 = FUN_180264d70(lVar4);
        if (DAT_1809f1770 == 0) {
          LOCK();
          UNLOCK();
          LOCK();
          DAT_1809f1770 = 1;
          UNLOCK();
          DAT_1809f1768 = uVar5;
        }
        in_RAX = (ulonglong)(uint)((float)iVar1 * DAT_1808ac000);
        if (uVar5 != (uVar5 & 0xffffffff00000000 | in_RAX)) {
          in_RAX = FUN_180264d90(lVar4);
        }
      }
    }
    else {
      if (DAT_1809f1750 != '\0') {
        FUN_180264d90(DAT_1809f1740,DAT_1809f1748);
        LOCK();
        DAT_1809f1750 = '\0';
        UNLOCK();
      }
      in_RAX = (ulonglong)DAT_1809f1770;
      if (DAT_1809f1770 != 0) {
        FUN_180264d90(DAT_1809f1760,DAT_1809f1768);
        bVar3 = DAT_1809f1770;
        LOCK();
        DAT_1809f1770 = 0;
        UNLOCK();
        return (ulonglong)bVar3;
      }
    }
  }
  return in_RAX;
}



/* ===== 1802097c0 FUN_1802097c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802097c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  if (DAT_1811150b8 < 0x191) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_228,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_238 = 0;
    local_230 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_pets.log","[%llu] %s\n",UVar2,local_228);
    DAT_1811150b8 = DAT_1811150b8 + 1;
  }
  return;
}



