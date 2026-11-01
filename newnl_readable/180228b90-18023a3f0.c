/* ===== 180228b90 FUN_180228b90 ===== */

void FUN_180228b90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1800288b0(lVar1 + 0x30);
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x48);
  }
  return;
}



/* ===== 180228be0 FUN_180228be0 ===== */

void FUN_180228be0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1800132b0(lVar1 + 0x48);
    FUN_180228300(lVar1 + 0x38);
    FUN_18000f890(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x70);
  }
  return;
}



/* ===== 180228c30 FUN_180228c30 ===== */

void FUN_180228c30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_180228d20(param_1,*puVar1,puVar1);
      return;
    }
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_1800288b0(puVar1 + 6);
      FUN_18000f890(puVar1 + 2);
      thunk_FUN_1803d64e0(puVar1,0x48);
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



/* ===== 180228d20 FUN_180228d20 ===== */

longlong * FUN_180228d20(longlong param_1,longlong *param_2,longlong *param_3)

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
    FUN_1800288b0(plVar11 + 6);
    FUN_18000f890(plVar11 + 2);
    thunk_FUN_1803d64e0(plVar11,0x48);
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
          FUN_1800288b0(plVar11 + 6);
          FUN_18000f890(plVar11 + 2);
          thunk_FUN_1803d64e0(plVar11,0x48);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar11 == plVar5) break;
          plVar11 = plVar12;
          if (plVar12 == param_3) {
            *plVar13 = (longlong)plVar12;
            goto LAB_180228f1d;
          }
        }
        *plVar13 = (longlong)puVar3;
        *(undefined8 **)(lVar2 + 8 + uVar10 * 0x10) = puVar3;
      }
      goto LAB_180228f1d;
    }
    plVar11 = plVar12;
  } while (plVar12 != param_3);
  if (plVar13 == param_2) {
    *(longlong *)(lVar6 + lVar2) = (longlong)plVar12;
  }
LAB_180228f1d:
  *puVar4 = plVar12;
  plVar12[1] = (longlong)puVar4;
  return param_3;
}



/* ===== 180228f80 FUN_180228f80 ===== */

void FUN_180228f80(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  longlong *_Buf1;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  plVar7 = DAT_180cecb78;
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  bVar12 = (char)lVar14 + 1;
  lVar14 = 1L << (bVar12 & 0x3f);
  FUN_180029a30(&DAT_180cecb88,2L << (bVar12 & 0x3f),DAT_180cecb78);
  DAT_180cecba0 = lVar14 - 1;
  DAT_180cecba8 = lVar14;
  plVar6 = (longlong *)*DAT_180cecb78;
  lVar14 = DAT_180cecb88;
joined_r0x000180229001:
  do {
    while( true ) {
      if (plVar6 == plVar7) {
        DAT_180cecb88 = lVar14;
        return;
      }
      uVar16 = plVar6[5];
      plVar11 = plVar6 + 2;
      plVar2 = (longlong *)*plVar6;
      uVar9 = plVar6[4];
      if (0xf < uVar16) {
        plVar11 = (longlong *)plVar6[2];
      }
      uVar17 = 0xcbf29ce484222325;
      uVar10 = 0;
      if (uVar9 != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar11 + uVar10);
          uVar10 = uVar10 + 1;
          uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
        } while (uVar10 < uVar9);
      }
      uVar17 = uVar17 & DAT_180cecba0;
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      DAT_180cecb88 = lVar14;
      if (plVar11 != plVar7) break;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_180cecb88;
    }
    plVar15 = *(longlong **)(lVar14 + 8 + uVar17 * 0x10);
    plVar13 = plVar15 + 2;
    if (0xf < (ulonglong)plVar15[5]) {
      plVar13 = (longlong *)*plVar13;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar16) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (uVar9 != plVar15[4]) {
LAB_18022910a:
      if (plVar11 != plVar15) {
        do {
          plVar15 = (longlong *)plVar15[1];
          plVar11 = plVar15 + 2;
          if (0xf < (ulonglong)plVar15[5]) {
            plVar11 = (longlong *)*plVar11;
          }
          if (uVar16 < 0x10) {
            plVar13 = plVar6 + 2;
          }
          else {
            plVar13 = (longlong *)plVar6[2];
          }
          if (uVar9 == plVar15[4]) {
            if ((uVar9 == 0) || (iVar8 = memcmp(plVar13,plVar11,uVar9), iVar8 == 0)) {
              lVar14 = *plVar15;
              puVar3 = (undefined8 *)plVar6[1];
              *puVar3 = plVar2;
              plVar11 = (longlong *)plVar2[1];
              *plVar11 = lVar14;
              puVar4 = *(undefined8 **)(lVar14 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar14 + 8) = plVar11;
              plVar2[1] = (longlong)puVar3;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar2;
              lVar14 = DAT_180cecb88;
              goto joined_r0x000180229001;
            }
            uVar16 = plVar6[5];
          }
        } while (*(longlong **)(lVar14 + uVar17 * 0x10) != plVar15);
      }
      puVar3 = (undefined8 *)plVar6[1];
      *puVar3 = plVar2;
      puVar4 = (undefined8 *)plVar2[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar2[1] = (longlong)puVar3;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar14 + uVar17 * 0x10) = plVar6;
      plVar6 = plVar2;
      lVar14 = DAT_180cecb88;
      goto joined_r0x000180229001;
    }
    if ((uVar9 != 0) && (iVar8 = memcmp(_Buf1,plVar13,uVar9), iVar8 != 0)) {
      plVar11 = *(longlong **)(lVar14 + uVar17 * 0x10);
      uVar16 = plVar6[5];
      goto LAB_18022910a;
    }
    plVar15 = (longlong *)*plVar15;
    if (plVar15 != plVar6) {
      puVar3 = (undefined8 *)plVar6[1];
      *puVar3 = plVar2;
      puVar4 = (undefined8 *)plVar2[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar2[1] = (longlong)puVar3;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar14 + 8 + uVar17 * 0x10) = plVar6;
    plVar6 = plVar2;
    lVar14 = DAT_180cecb88;
  } while( true );
}



/* ===== 1802291f0 FUN_1802291f0 ===== */

/* WARNING: Removing unreachable block (ram,0x00018022980a) */
/* WARNING: Removing unreachable block (ram,0x000180229860) */
/* WARNING: Removing unreachable block (ram,0x0001802298cf) */
/* WARNING: Removing unreachable block (ram,0x0001802298e4) */
/* WARNING: Removing unreachable block (ram,0x0001802296f9) */
/* WARNING: Removing unreachable block (ram,0x000180229740) */
/* WARNING: Removing unreachable block (ram,0x0001802297af) */
/* WARNING: Removing unreachable block (ram,0x0001802297bb) */
/* WARNING: Removing unreachable block (ram,0x00018022993f) */
/* WARNING: Removing unreachable block (ram,0x000180229990) */
/* WARNING: Removing unreachable block (ram,0x000180229a00) */
/* WARNING: Removing unreachable block (ram,0x000180229a0c) */

void FUN_1802291f0(longlong param_1,longlong param_2,float *param_3,float param_4,uint param_5,
                  float param_6)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res20 [2];
  undefined8 in_stack_fffffffffffffec0;
  ulonglong uVar18;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  uint local_f8 [5];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  
  fVar8 = DAT_1808ac34c;
  fVar11 = DAT_1808ac000;
  uVar2 = (uint)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
  if (((param_1 != 0) && (fVar10 = *param_3, 0.0 < fVar10)) && (fVar15 = param_3[1], 0.0 < fVar15))
  {
    local_120 = 1.0;
    local_10c = 0.0;
    pfVar3 = &local_10c;
    if (0.0 <= param_4) {
      pfVar3 = local_res20;
    }
    fVar14 = fVar10 * DAT_1808ac1f4;
    fVar13 = fVar15 * DAT_1808ac1f4;
    pfVar5 = &local_120;
    if (param_4 <= DAT_1808ac34c) {
      pfVar5 = pfVar3;
    }
    uVar7 = 1;
    if (1 < (int)param_5) {
      uVar7 = param_5;
    }
    lVar6 = 0;
    if ((int)param_5 < 2) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = (float)(param_5 >> 1);
    }
    local_100 = fVar17;
    local_res20[0] = param_4;
    if (*(int *)(param_2 + 8) == 0) {
      uVar1 = FUN_18002ed80(param_2 + 0xc,*pfVar5);
      uVar18 = (ulonglong)uVar2 << 0x20;
      local_120 = 0.0;
      if ((int)param_5 < 2) {
        local_128 = CONCAT44(fVar13 + fVar8,fVar10);
        local_11c = fVar13;
        FUN_1803fe590(param_1,&local_120,&local_128,uVar1,0,uVar18);
        local_120 = fVar14;
        fVar17 = fVar8;
      }
      else {
        local_11c = fVar13 - fVar17;
        local_128 = CONCAT44(fVar17 + fVar13,fVar10);
        FUN_1803fe590(param_1,&local_120,&local_128,uVar1,0,uVar18);
        local_120 = fVar14 - fVar17;
      }
      local_128 = CONCAT44(fVar15,fVar14 + fVar17);
      local_11c = 0.0;
      FUN_1803fe590(param_1,&local_120,&local_128,uVar1,0,uVar18 & 0xffffffff00000000);
    }
    else {
      local_104 = (float)(int)uVar7;
      fVar16 = (float)*(int *)(param_2 + 0x48) * DAT_1808ac000;
      fVar15 = (float)*(int *)(param_2 + 0x44) * DAT_1808ac000;
      if (*(int *)(param_2 + 0x40) == 1) {
        dVar9 = 0.0;
      }
      else {
        dVar9 = (double)((float)*(int *)(param_2 + 0x4c) * DAT_1808ac000);
      }
      local_110 = (float)FUN_18053ef70(fVar15 * fVar13);
      uVar1 = FUN_18053ef70(fVar16 * fVar13);
      local_128 = CONCAT44(local_128._4_4_,uVar1);
      dVar12 = (double)fVar10 * dVar9 * DAT_1808ac458;
      dVar9 = (double)FUN_18053dd10((double)fVar15 * dVar12 + (double)local_110);
      local_110 = (float)dVar9;
      dVar9 = (double)FUN_18053dd10((double)fVar16 * dVar12 + (double)(float)local_128);
      fVar10 = (float)dVar9;
      if (*(int *)(param_2 + 0x50) < 0x19) {
        fVar11 = local_110;
      }
      else {
        fVar11 = (float)*(int *)(param_2 + 0x50) * param_6 * fVar11;
        fVar10 = fVar11 + fVar10;
        fVar11 = fVar11 + local_110;
      }
      fVar15 = *pfVar5;
      uVar2 = FUN_18002ed80(param_2 + 0x1c,fVar15);
      local_f8[2] = FUN_18002ed80(param_2 + 0x2c,fVar15);
      local_f8[3] = local_f8[2] & 0xffffff;
      local_f8[0] = uVar2 & 0xffffff;
      local_f8[1] = uVar2;
      local_f8[4] = local_f8[3];
      local_e4 = local_f8[2];
      local_e0 = uVar2;
      local_dc = local_f8[0];
      uVar1 = FUN_18002ed80(param_2 + 0x58,fVar8);
      fVar8 = *(float *)(param_1 + 0x20);
      local_110 = fVar8;
      if (*(char *)(param_2 + 0x3c) != '\0') {
        fVar17 = fVar13 - fVar17;
        fVar10 = fVar14 - fVar10;
        fVar15 = local_104 + fVar17;
        fStack_114 = fVar17;
        local_10c = fVar14 - fVar11;
        local_118 = fVar10;
        fVar11 = (fVar14 - fVar11) - fVar10;
        local_108 = fVar15;
        do {
          local_128 = CONCAT44(fVar15,fVar11 * (float)(&DAT_180629f8c)[lVar6] + fVar10);
          local_120 = fVar11 * (float)(&DAT_180629f88)[lVar6] + fVar10;
          local_11c = fVar17;
          FUN_1803fe730(param_1,&local_120,&local_128,local_f8[lVar6],local_f8[lVar6 + 1],
                        local_f8[lVar6 + 1],local_f8[lVar6]);
          fVar8 = local_110;
          uVar18 = lVar6 + 2;
          lVar6 = lVar6 + 1;
        } while (uVar18 < 4);
        if (*(char *)(param_2 + 0x54) != '\0') {
          local_128 = 0;
          FUN_1804000e0(param_1,&local_118,&local_10c,uVar1,DAT_1808ac950,&local_128,0x100000,0);
        }
      }
      fVar11 = DAT_1808ac25c;
      if ((*(int *)(param_2 + 0x40) == 1) && ((int)fVar8 < *(int *)(param_1 + 0x20))) {
        do {
          lVar4 = (longlong)(int)fVar8;
          fVar8 = (float)((int)fVar8 + 1);
          lVar6 = *(longlong *)(param_1 + 0x28);
          fVar10 = (*(float *)(lVar6 + 4 + lVar4 * 0x14) - fVar13) * fVar11;
          fVar15 = (*(float *)(lVar6 + lVar4 * 0x14) - fVar14) * fVar11;
          *(float *)(lVar6 + lVar4 * 0x14) = fVar10 + fVar15 + fVar14;
          *(float *)(lVar6 + 4 + lVar4 * 0x14) = (fVar10 - fVar15) + fVar13;
        } while ((int)fVar8 < *(int *)(param_1 + 0x20));
      }
    }
  }
  return;
}



/* ===== 180229b40 FUN_180229b40 ===== */

void FUN_180229b40(undefined8 param_1,float *param_2,float *param_3,float param_4,float *param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  float fVar18;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  
  fVar15 = *param_3 - *param_2;
  fVar18 = param_3[1] - param_2[1];
  fVar7 = fVar15 * fVar15 + fVar18 * fVar18;
  if (fVar7 < 0.0) {
    fVar7 = (float)FUN_18051af10();
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  fVar2 = DAT_1808ac1f4;
  if (DAT_1808abfa0 < fVar7) {
    fVar8 = DAT_1808ac34c;
    if (DAT_1808ac34c <= param_4 + param_4) {
      fVar8 = param_4 + param_4;
    }
    fVar7 = fVar7 / fVar8;
    if (fVar7 <= DAT_1808acb28) {
      if (fVar7 <= DAT_1808ac8b0) {
        fVar7 = DAT_1808ac8b0;
      }
      iVar4 = (int)fVar7;
      if (iVar4 < 1) {
        return;
      }
    }
    else {
      iVar4 = (int)DAT_1808acb28;
    }
    iVar5 = 0;
    fVar7 = param_5[1];
    fVar8 = param_5[2];
    fVar1 = *param_5;
    fVar9 = DAT_1808ac34c / (float)iVar4;
    if (0 < iVar4) {
      do {
        iVar6 = iVar5 + 1;
        fVar14 = (float)iVar5 * fVar9;
        fVar13 = (float)iVar6 * fVar9;
        fVar11 = fVar1;
        fVar12 = fVar7;
        fVar16 = fVar8;
        if (param_6 == '\0') {
          if (0.0 < fVar13) {
            fVar11 = *param_5;
            fVar12 = param_5[1];
            fVar16 = param_5[2];
            fVar10 = param_5[3];
            if (fVar13 < fVar2) {
              fVar17 = fVar13 + fVar13;
              fVar11 = (fVar11 - fVar1) * fVar17 + fVar1;
              fVar12 = (fVar12 - fVar7) * fVar17 + fVar7;
              fVar16 = (fVar16 - fVar8) * fVar17 + fVar8;
              fVar10 = (fVar10 - 0.0) * fVar17 + 0.0;
            }
          }
          else {
            fVar10 = 0.0;
          }
          if (fVar14 <= 0.0) {
LAB_180229de1:
            local_ec = 0.0;
            local_f8 = fVar1;
            local_f4 = fVar7;
            local_f0 = fVar8;
          }
          else {
            local_f8 = *param_5;
            local_f4 = param_5[1];
            local_f0 = param_5[2];
            local_ec = param_5[3];
            if (fVar14 < fVar2) {
              fVar17 = fVar14 + fVar14;
              local_f8 = (local_f8 - fVar1) * fVar17 + fVar1;
              local_f4 = (local_f4 - fVar7) * fVar17 + fVar7;
              local_f0 = (local_f0 - fVar8) * fVar17 + fVar8;
              local_ec = (local_ec - 0.0) * fVar17 + 0.0;
            }
          }
        }
        else {
          if (fVar2 < fVar13) {
            if (fVar13 < DAT_1808ac34c) {
              fVar10 = (fVar13 - fVar2) + (fVar13 - fVar2);
              fVar11 = fVar10 * (fVar1 - *param_5) + *param_5;
              fVar12 = fVar10 * (fVar7 - param_5[1]) + param_5[1];
              fVar16 = fVar10 * (fVar8 - param_5[2]) + param_5[2];
              fVar10 = fVar10 * (0.0 - param_5[3]) + param_5[3];
            }
            else {
              fVar10 = 0.0;
            }
          }
          else {
            fVar10 = param_5[3];
            fVar11 = *param_5;
            fVar12 = param_5[1];
            fVar16 = param_5[2];
          }
          if (fVar2 < fVar14) {
            if (DAT_1808ac34c <= fVar14) goto LAB_180229de1;
            fVar17 = (fVar14 - fVar2) + (fVar14 - fVar2);
            local_f8 = fVar17 * (fVar1 - *param_5) + *param_5;
            local_f4 = fVar17 * (fVar7 - param_5[1]) + param_5[1];
            local_f0 = fVar17 * (fVar8 - param_5[2]) + param_5[2];
            local_ec = fVar17 * (0.0 - param_5[3]) + param_5[3];
          }
          else {
            local_ec = param_5[3];
            local_f8 = *param_5;
            local_f4 = param_5[1];
            local_f0 = param_5[2];
          }
        }
        local_f8 = (fVar11 - local_f8) * fVar2 + local_f8;
        local_f4 = (fVar12 - local_f4) * fVar2 + local_f4;
        local_ec = (fVar10 - local_ec) * fVar2 + local_ec;
        local_f0 = (fVar16 - local_f0) * fVar2 + local_f0;
        uVar3 = FUN_1803d7f30(&local_f8);
        if ((uVar3 & 0xff000000) != 0) {
          local_e8 = fVar14 * fVar15 + *param_2 + fVar2;
          local_e4 = fVar14 * fVar18 + param_2[1] + fVar2;
          local_e0 = fVar13 * fVar15 + *param_2 + fVar2;
          local_dc = fVar13 * fVar18 + param_2[1] + fVar2;
          FUN_1803fc600(param_1,&local_e8,2,uVar3,param_4,0);
        }
        iVar5 = iVar6;
      } while (iVar6 < iVar4);
    }
  }
  return;
}



/* ===== 18022a100 FUN_18022a100 ===== */

void FUN_18022a100(longlong param_1,float *param_2,float param_3,float param_4,float param_5,
                  longlong param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  float local_68;
  float local_64;
  
  if ((((param_1 != 0) && (DAT_1808ac34c <= param_5)) && (0.0 <= param_4)) &&
     ((0.0 < param_3 && (0.0 < *(float *)(param_6 + 0xc))))) {
    iVar6 = *(int *)(param_1 + 0x20);
    fVar1 = *param_2;
    fVar2 = param_2[1];
    local_64 = fVar2 + param_4;
    local_resc = local_64 + param_3;
    local_res8 = fVar1;
    local_68 = fVar1;
    FUN_180229b40(local_resc,&local_68,&local_res8,param_5,param_6,1);
    local_resc = fVar2 - param_4;
    local_64 = local_resc - param_3;
    local_res8 = fVar1;
    local_68 = fVar1;
    FUN_180229b40(param_1,&local_68,&local_res8,param_5,param_6,0);
    local_res8 = fVar1 - param_4;
    local_68 = local_res8 - param_3;
    local_resc = fVar2;
    local_64 = fVar2;
    FUN_180229b40(param_1,&local_68,&local_res8,param_5,param_6,0);
    local_68 = fVar1 + param_4;
    local_res8 = local_68 + param_3;
    local_resc = fVar2;
    local_64 = fVar2;
    FUN_180229b40(param_1,&local_68,&local_res8,param_5,param_6,1);
    fVar4 = DAT_1808ac264;
    if (iVar6 < *(int *)(param_1 + 0x20)) {
      do {
        lVar5 = (longlong)iVar6;
        iVar6 = iVar6 + 1;
        lVar3 = *(longlong *)(param_1 + 0x28);
        fVar8 = *(float *)(lVar3 + 4 + lVar5 * 0x14) - fVar2;
        fVar7 = *(float *)(lVar3 + lVar5 * 0x14) - fVar1;
        *(float *)(lVar3 + lVar5 * 0x14) = (fVar8 + fVar7) * fVar4 + fVar1;
        *(float *)(lVar3 + 4 + lVar5 * 0x14) = (fVar8 - fVar7) * fVar4 + fVar2;
      } while (iVar6 < *(int *)(param_1 + 0x20));
    }
  }
  return;
}



/* ===== 18022a330 FUN_18022a330 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18022a330(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  float param_5)

{
  float *pfVar1;
  int *piVar2;
  longlong lVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  int *piVar7;
  char ****ppppcVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined8 *local_120;
  char ****local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  int local_f8 [3];
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  char ****local_b8 [3];
  ulonglong local_a0;
  ulonglong local_98;
  
  fVar12 = DAT_1808ac34c;
  if (param_1 != 0) {
    local_98 = DAT_180919500 ^ (ulonglong)auStack_148;
    pfVar1 = (float *)(param_4 + 0xc);
    if (0.0 < *pfVar1) {
      local_d0 = _DAT_1808addd0;
      uStack_c8 = _UNK_1808addd8;
      local_c0 = 0x41900000;
      local_f8[0] = 0;
      if (DAT_1808ac34c < param_5) {
        local_f8[0] = (int)((param_5 - DAT_1808ac34c) * DAT_1808ac710);
      }
      local_f8[2] = 4;
      local_f8[1] = 0;
      piVar2 = local_f8 + 1;
      if (-1 < local_f8[0]) {
        piVar2 = local_f8;
      }
      piVar7 = local_f8 + 2;
      if (local_f8[0] < 5) {
        piVar7 = piVar2;
      }
      lVar9 = DAT_181107a28;
      if ((DAT_181107a28 != 0) || (lVar9 = *(longlong *)(DAT_180ca0a50 + 0x11f0), lVar9 != 0)) {
        fVar13 = *(float *)((longlong)local_b8 + (longlong)*piVar7 * 4 + -0x18) * _DAT_1808ac3cc;
        lVar3 = FUN_180409a40(lVar9,fVar13,DAT_1808acda0);
        if ((lVar3 == 0) || (lVar3 = FUN_1804098c0(lVar3,0x41), lVar3 == 0)) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = (float)FUN_18053f0d0();
        }
        FUN_18003a390(local_b8,param_3);
        fVar11 = (float)FUN_18053f0d0();
        local_d8 = (float)FUN_18053f0d0();
        local_d4 = fVar11 - fVar10;
        local_e8 = 1.0;
        local_ec = 0.0;
        pfVar4 = &local_ec;
        if (0.0 <= *pfVar1) {
          pfVar4 = pfVar1;
        }
        pfVar6 = &local_e8;
        if (*pfVar1 <= fVar12) {
          pfVar6 = pfVar4;
        }
        ppppcVar8 = (char ****)local_b8;
        if (0xf < local_a0) {
          ppppcVar8 = local_b8[0];
        }
        local_e4 = local_d8 + fVar12;
        local_e0 = (fVar11 - fVar10) + fVar12;
        uVar5 = (int)(*pfVar6 * DAT_1808acb60 + DAT_1808ac1f4) << 0x18;
        if (((uVar5 != 0) && (ppppcVar8 != (char ****)0x0)) && (*(char *)ppppcVar8 != '\0')) {
          if (fVar13 == 0.0) {
            fVar12 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
          }
          else {
            fVar12 = fVar13;
          }
          local_d0 = *(undefined8 *)(param_1 + 0x60);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_100 = 0;
          local_108 = 0;
          local_110 = 0;
          local_120 = &local_d0;
          local_128 = uVar5;
          local_118 = ppppcVar8;
          FUN_18040a900(lVar9,param_1,fVar12,&local_e4);
        }
        ppppcVar8 = (char ****)local_b8;
        if (0xf < local_a0) {
          ppppcVar8 = local_b8[0];
        }
        uVar5 = FUN_1803d7f30(param_4);
        if ((((uVar5 & 0xff000000) != 0) && (ppppcVar8 != (char ****)0x0)) &&
           (*(char *)ppppcVar8 != '\0')) {
          if (fVar13 == 0.0) {
            fVar13 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
          }
          local_d0 = *(undefined8 *)(param_1 + 0x60);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_100 = 0;
          local_108 = 0;
          local_110 = 0;
          local_120 = &local_d0;
          local_128 = uVar5;
          local_118 = ppppcVar8;
          FUN_18040a900(lVar9,param_1,fVar13,&local_d8);
        }
        FUN_18000f890(local_b8);
      }
    }
  }
  return;
}



/* ===== 18022a660 FUN_18022a660 ===== */

void FUN_18022a660(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined *local_res18;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    lVar6 = CONCAT44(uStackX_14,local_res10);
  }
  else {
    lVar6 = DAT_181108a00;
  }
  if (lVar6 == 0) {
    return;
  }
  lVar3 = FUN_180273f90(param_1,"attacker");
  lVar4 = FUN_180273f90(param_1,"userid");
  uVar9 = DAT_180c9ffe4;
  if (lVar3 != lVar6) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (lVar4 == lVar6) {
    return;
  }
  local_res10 = DAT_180c9ffe4;
  if ((DAT_18095d3f4 != '\0') && (DAT_180ca09fc != 0)) {
    uVar1 = FUN_180011200((ulonglong)DAT_180ca09fc + lVar4);
    plVar5 = (longlong *)FUN_1803a0940(&local_res18,uVar1);
    if (*plVar5 != 0) {
      if (((DAT_180ca09f8 == 0) ||
          (lVar6 = FUN_18000f3a0(*plVar5 + (ulonglong)DAT_180ca09f8), lVar6 == 0)) ||
         (DAT_180ca0950 == 0)) {
        uStack_50 = 0;
        uStack_4c = 0;
        fVar10 = 0.0;
      }
      else {
        puVar7 = (undefined4 *)FUN_1800111b0(&local_58,lVar6 + (ulonglong)DAT_180ca0950);
        uStack_50 = *puVar7;
        uStack_4c = puVar7[1];
        fVar10 = (float)puVar7[2];
      }
      local_58 = uVar9;
      fVar8 = (float)FUN_180273cc0(param_1,"dmg_health");
      iStack_54 = (int)fVar8;
      fVar10 = fVar10 + DAT_1808acab0;
      local_res18 = &DAT_1809f29b0;
      local_48 = fVar10;
      iVar2 = FUN_1804e4d70(&DAT_1809f29b0);
      if (iVar2 != 0) goto LAB_18022a901;
      if (DAT_1809f29fc == 0x7fffffff) goto LAB_18022a8ec;
      uVar9 = extraout_XMM0_Da;
      if (0x1f < (ulonglong)(((longlong)DAT_180cecbd0 - DAT_180cecbc8 >> 2) * -0x3333333333333333))
      {
        uVar9 = FUN_180540530(DAT_180cecbc8,DAT_180cecbc8 + 0x14,
                              (longlong)DAT_180cecbd0 - (DAT_180cecbc8 + 0x14));
        DAT_180cecbd0 = DAT_180cecbd0 + -5;
      }
      puVar7 = DAT_180cecbd0;
      if (DAT_180cecbd0 == DAT_180cecbd8) {
        FUN_18022b740(uVar9,DAT_180cecbd0,&local_58);
      }
      else {
        *DAT_180cecbd0 = local_58;
        puVar7[1] = iStack_54;
        puVar7[2] = uStack_50;
        puVar7[3] = uStack_4c;
        puVar7[4] = fVar10;
        DAT_180cecbd0 = DAT_180cecbd0 + 5;
      }
      FUN_1804e4e90(&DAT_1809f29b0);
    }
  }
  if (DAT_18095d3c4 != '\0') {
    local_res18 = &DAT_1809f29b0;
    iVar2 = FUN_1804e4d70(&DAT_1809f29b0);
    if (iVar2 != 0) {
LAB_18022a901:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f29fc == 0x7fffffff) {
LAB_18022a8ec:
      DAT_1809f29fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (DAT_180cecbf8 != DAT_180cecc00) {
      DAT_180cecc00 = DAT_180cecbf8;
    }
    FUN_180066e60(&DAT_180cecbf8,&local_res10);
    FUN_1804e4e90(&DAT_1809f29b0);
  }
  return;
}



/* ===== 18022a910 FUN_18022a910 ===== */

void FUN_18022a910(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ulonglong uVar11;
  float *pfVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  float *pfVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res8 [2];
  undefined *local_res10;
  float local_res18 [2];
  undefined8 local_res20;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  float local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  float local_134;
  undefined8 local_130;
  undefined4 local_128;
  float local_124;
  float *local_120;
  float *pfStack_118;
  longlong local_110;
  float *local_108;
  float *pfStack_100;
  longlong local_f8;
  
  fVar3 = DAT_1808ac34c;
  if (param_1 == 0) {
    return;
  }
  if (DAT_180cd0fa7 == '\0') {
    return;
  }
  if (DAT_181107a40 == 0) {
    return;
  }
  local_res8[0] = DAT_180c9ffe4;
  if (DAT_18091a1b4 < 1) {
    fVar24 = DAT_1808ac34c;
  }
  else {
    if (DAT_18091a1b4 < 100) {
      iVar7 = 100;
    }
    else {
      iVar7 = DAT_18091a1b4;
      if (200 < DAT_18091a1b4) {
        iVar7 = 200;
      }
    }
    fVar24 = (float)iVar7 / DAT_1808acb08;
  }
  local_108 = (float *)0x0;
  pfStack_100 = (float *)0x0;
  local_f8 = 0;
  local_120 = (float *)0x0;
  pfStack_118 = (float *)0x0;
  local_110 = 0;
  local_res10 = &DAT_1809f29b0;
  iVar7 = FUN_1804e4d70(&DAT_1809f29b0);
  fVar23 = local_res8[0];
  lVar4 = DAT_180cecbe0;
  fVar21 = DAT_1808ac154;
  puVar15 = auStack_178;
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f29fc == 0x7fffffff) goto LAB_18022b27f;
  fVar26 = 0.0;
  uVar11 = 0;
  uVar13 = DAT_180cecbe8 - DAT_180cecbe0 >> 4;
  if (uVar13 != 0) {
    do {
      fVar19 = local_res8[0] - *(float *)(DAT_180cecbe0 + uVar11 * 0x10);
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
    } while ((DAT_18095d3f0 + DAT_1808ac154 <= fVar19) && (uVar11 = uVar11 + 1, uVar11 < uVar13));
    if ((uVar11 != 0) && (uVar11 * 0x10 != 0)) {
      lVar1 = uVar11 * 0x10 + DAT_180cecbe0;
      lVar16 = DAT_180cecbe8 - lVar1;
      FUN_180540530(DAT_180cecbe0,lVar1,lVar16);
      DAT_180cecbe8 = lVar16 + lVar4;
    }
  }
  lVar4 = DAT_180cecbc8;
  uVar11 = 0;
  uVar13 = (DAT_180cecbd0 - DAT_180cecbc8 >> 2) * -0x3333333333333333;
  if (uVar13 != 0) {
    do {
      fVar19 = fVar23 - *(float *)(DAT_180cecbc8 + uVar11 * 0x14);
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
    } while ((DAT_18095d408 + fVar21 <= fVar19) && (uVar11 = uVar11 + 1, uVar11 < uVar13));
    if ((uVar11 != 0) && (uVar11 * 0x14 != 0)) {
      lVar1 = uVar11 * 0x14 + DAT_180cecbc8;
      lVar16 = DAT_180cecbd0 - lVar1;
      FUN_180540530(DAT_180cecbc8,lVar1,lVar16);
      DAT_180cecbd0 = lVar4 + lVar16;
    }
  }
  lVar4 = DAT_180cecbf8;
  uVar11 = 0;
  uVar13 = DAT_180cecc00 - DAT_180cecbf8 >> 2;
  if (uVar13 != 0) {
    do {
      fVar19 = fVar23 - *(float *)(DAT_180cecbf8 + uVar11 * 4);
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
    } while ((DAT_18095d3d8 + fVar21 <= fVar19) && (uVar11 = uVar11 + 1, uVar11 < uVar13));
    if ((uVar11 != 0) && (uVar11 * 4 != 0)) {
      lVar1 = uVar11 * 4 + DAT_180cecbf8;
      lVar16 = DAT_180cecc00 - lVar1;
      FUN_180540530(DAT_180cecbf8,lVar1,lVar16);
      DAT_180cecc00 = lVar4 + lVar16;
    }
  }
  FUN_18022b2a0(&local_108,DAT_180cecbe0,DAT_180cecbe8 - DAT_180cecbe0 >> 4);
  FUN_18022b400(&local_120,DAT_180cecbc8,(DAT_180cecbd0 - DAT_180cecbc8 >> 2) * -0x3333333333333333)
  ;
  bVar18 = DAT_180cecbf8 != DAT_180cecc00;
  if (bVar18) {
    fVar26 = *(float *)(DAT_180cecc00 + -4);
  }
  FUN_1804e4e90(&DAT_1809f29b0);
  pfVar17 = pfStack_100;
  pfVar5 = local_108;
  puVar14 = auStack_178;
  if ((DAT_18095d3dc != '\0') && (local_108 != pfStack_100)) {
    fVar19 = fVar24 * DAT_1808ac7ac;
    fVar25 = fVar24 * DAT_1808ac838;
    pfVar12 = local_108;
    do {
      fVar22 = fVar23 - *pfVar12;
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      if (fVar22 < DAT_18095d3f0 + fVar21) {
        fVar20 = fVar22 - DAT_18095d3f0;
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        if (fVar20 / fVar21 <= fVar3) {
          fVar20 = fVar3 - fVar20 / fVar21;
        }
        else {
          fVar20 = 0.0;
        }
        local_res20 = 0;
        local_148 = 0;
        local_158 = DAT_1811079b4;
        cVar6 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,pfVar12 + 1,&local_148
                              ,DAT_1811079b0);
        if (cVar6 != '\0') {
          if (fVar21 <= fVar22) {
            fVar22 = fVar21;
          }
          fVar22 = fVar3 - fVar20 * (fVar22 / fVar21);
          fVar22 = fVar3 - fVar22 * fVar22 * fVar22;
          local_res20 = local_148;
          local_res10 = (undefined *)CONCAT44(local_res10._4_4_,fVar22);
          local_res18[0] = 1.0;
          local_res8[0] = 0.0;
          local_140 = CONCAT44(DAT_18095d3e4,DAT_18095d3e0);
          local_138 = DAT_18095d3e8;
          pfVar10 = local_res8;
          if (0.0 <= fVar22) {
            pfVar10 = local_res8 + 2;
          }
          pfVar8 = local_res8 + 4;
          if (fVar22 <= fVar3) {
            pfVar8 = pfVar10;
          }
          local_134 = DAT_18095d3ec * *pfVar8;
          local_150 = &local_140;
          local_158 = fVar24;
          FUN_18022a100(param_1,&local_res20,fVar25,fVar19);
        }
      }
      else {
        local_res20 = 0;
      }
      pfVar12 = pfVar12 + 4;
    } while (pfVar12 != pfVar17);
  }
  pfVar12 = pfStack_118;
  pfVar17 = local_120;
  fVar19 = DAT_1808aca68;
  if ((DAT_18095d3f4 != '\0') && (local_120 != pfStack_118)) {
    pfVar10 = local_120;
    do {
      fVar22 = fVar23 - *pfVar10;
      fVar25 = fVar22;
      if (fVar22 <= 0.0) {
        fVar25 = 0.0;
      }
      if (fVar25 < DAT_18095d408 + fVar21) {
        fVar20 = fVar25;
        if (fVar21 <= fVar25) {
          fVar20 = fVar21;
        }
        fVar25 = fVar25 - DAT_18095d408;
        if (fVar25 <= 0.0) {
          fVar25 = 0.0;
        }
        if (fVar25 / fVar21 <= fVar3) {
          fVar25 = fVar3 - fVar25 / fVar21;
        }
        else {
          fVar25 = 0.0;
        }
        fVar25 = fVar3 - fVar25 * (fVar20 / fVar21);
        fVar25 = fVar3 - fVar25 * fVar25 * fVar25;
        if (0.0 < fVar25) {
          local_140 = *(undefined8 *)(pfVar10 + 2);
          local_138 = pfVar10[4] + fVar22 * fVar19;
          local_148 = 0;
          local_res20 = 0;
          local_158 = DAT_1811079b4;
          cVar6 = FUN_1803a1bf0(&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,&local_140,
                                &local_res20,DAT_1811079b0);
          if (cVar6 != '\0') {
            local_148 = local_res20;
            local_res10 = (undefined *)CONCAT44(local_res10._4_4_,fVar25);
            local_res18[0] = 1.0;
            local_res8[0] = 0.0;
            local_130._0_4_ = DAT_18095d3f8;
            local_130._4_4_ = DAT_18095d3fc;
            local_128 = DAT_18095d400;
            pfVar8 = local_res8;
            if (0.0 <= fVar25) {
              pfVar8 = local_res8 + 2;
            }
            pfVar9 = local_res8 + 4;
            if (fVar25 <= fVar3) {
              pfVar9 = pfVar8;
            }
            local_124 = DAT_18095d404 * *pfVar9;
            local_158 = fVar24;
            FUN_18022a330(param_1,&local_148,pfVar10[1],&local_130);
          }
        }
      }
      pfVar10 = pfVar10 + 5;
    } while (pfVar10 != pfVar12);
  }
  if ((DAT_18095d3c4 != '\0') && (bVar18)) {
    fVar23 = fVar23 - fVar26;
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    if (fVar23 < DAT_18095d3d8 + fVar21) {
      fVar23 = fVar23 - DAT_18095d3d8;
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      if (fVar23 / fVar21 <= fVar3) {
        fVar21 = fVar3 - fVar23 / fVar21;
      }
      else {
        fVar21 = 0.0;
      }
      fVar21 = fVar3 - fVar21;
      fVar21 = fVar3 - fVar21 * fVar21 * fVar21;
      local_res10 = (undefined *)CONCAT44(local_res10._4_4_,fVar21);
      local_res18[0] = 1.0;
      local_res8[0] = 0.0;
      local_130._0_4_ = DAT_18095d3c8;
      local_130._4_4_ = DAT_18095d3cc;
      local_128 = DAT_18095d3d0;
      pfVar12 = local_res8;
      if (0.0 <= fVar21) {
        pfVar12 = local_res8 + 2;
      }
      pfVar10 = local_res8 + 4;
      if (fVar21 <= fVar3) {
        pfVar10 = pfVar12;
      }
      local_124 = DAT_18095d3d4 * *pfVar10;
      local_res8[0] = DAT_1811079b0 * DAT_1808ac1f4;
      local_res8[1] = DAT_1811079b4 * DAT_1808ac1f4;
      local_150 = &local_130;
      local_158 = fVar24;
      FUN_18022a100(param_1,local_res8,fVar24 * DAT_1808ac880,fVar24 * DAT_1808ac7ec);
    }
  }
  if (pfVar17 == (float *)0x0) {
LAB_18022b1e5:
    if (pfVar5 == (float *)0x0) {
      return;
    }
    uVar11 = local_f8 - (longlong)pfVar5 & 0xfffffffffffffff0;
    pfVar17 = pfVar5;
    if (uVar11 < 0x1000) {
LAB_18022b216:
      thunk_FUN_1803d64e0(pfVar17,uVar11);
      return;
    }
    pfVar17 = *(float **)(pfVar5 + -2);
    if ((ulonglong)((longlong)pfVar5 + (-8 - (longlong)pfVar17)) < 0x20) {
      uVar11 = uVar11 + 0x27;
      goto LAB_18022b216;
    }
  }
  else {
    uVar11 = (local_110 - (longlong)pfVar17 >> 2) * 4;
    pfVar12 = pfVar17;
    if (uVar11 < 0x1000) {
LAB_18022b1dc:
      thunk_FUN_1803d64e0(pfVar12,uVar11);
      goto LAB_18022b1e5;
    }
    pfVar12 = *(float **)(pfVar17 + -2);
    if ((ulonglong)((longlong)pfVar17 + (-8 - (longlong)pfVar12)) < 0x20) {
      uVar11 = uVar11 + 0x27;
      goto LAB_18022b1dc;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar14 = auStack_170;
  }
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar15 = puVar14 + 8;
LAB_18022b27f:
  DAT_1809f29fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_18022b293;
  FUN_1804e4a90(6);
}



/* ===== 18022b2a0 FUN_18022b2a0 ===== */

void FUN_18022b2a0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar5 = auStack_58;
  puVar6 = auStack_58;
  uVar4 = *param_1;
  uVar2 = (longlong)(param_1[2] - uVar4) >> 4;
  if (param_3 <= uVar2) {
    uVar2 = (longlong)(param_1[1] - uVar4) >> 4;
    if (uVar2 < param_3) {
      FUN_180540530(uVar4,param_2,uVar2 * 0x10);
      uVar4 = param_1[1];
      lVar8 = (param_3 - uVar2) * 0x10;
      FUN_180540530(uVar4,uVar2 * 0x10 + param_2,lVar8);
    }
    else {
      lVar8 = param_3 << 4;
      FUN_180540530(uVar4,param_2,lVar8);
    }
    goto LAB_18022b3d4;
  }
  if (0xfffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0xfffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar2 = 0xfffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar7 = auStack_58;
  if (uVar4 != 0) {
    uVar3 = uVar4;
    if ((param_1[2] - uVar4 & 0xfffffffffffffff0) < 0x1000) {
LAB_18022b337:
      puVar6 = puVar5;
    }
    else {
      uVar3 = *(ulonglong *)(uVar4 - 8);
      uVar4 = (uVar4 - uVar3) - 8;
      if (0x1f < uVar4) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar5 = auStack_50;
        uVar3 = uVar4;
        goto LAB_18022b337;
      }
    }
    *(undefined8 *)(puVar6 + -8) = 0x18022b33f;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar7 = puVar6;
  }
  if (0xfffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_18022b3ee;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar7 + -8) = 0x18022b361;
  uVar4 = FUN_18000fb70(uVar2 * 0x10);
  *param_1 = uVar4;
  param_1[1] = uVar4;
  lVar8 = param_3 << 4;
  param_1[2] = uVar2 * 0x10 + uVar4;
  *(undefined8 *)(puVar7 + -8) = 0x18022b385;
  FUN_180540530(uVar4,param_2,lVar8);
LAB_18022b3d4:
  param_1[1] = lVar8 + uVar4;
  return;
}



/* ===== 18022b400 FUN_18022b400 ===== */

void FUN_18022b400(ulonglong *param_1,longlong param_2,ulonglong param_3)

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
  uVar2 = ((longlong)(param_1[2] - uVar9) >> 2) * -0x3333333333333333;
  if (param_3 <= uVar2) {
    lVar4 = (longlong)(param_1[1] - uVar9) >> 2;
    if ((ulonglong)(lVar4 * -0x3333333333333333) < param_3) {
      FUN_180540530(uVar9,param_2,lVar4 * 4);
      uVar9 = param_1[1];
      lVar5 = (param_3 + lVar4 * 0x3333333333333333) * 0x14;
      FUN_180540530(uVar9,lVar4 * 4 + param_2,lVar5);
    }
    else {
      lVar5 = param_3 * 0x14;
      FUN_180540530(uVar9,param_2,lVar5);
    }
    goto LAB_18022b578;
  }
  if (0xccccccccccccccc < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0xccccccccccccccc - (uVar2 >> 1) < uVar2) {
    uVar2 = 0xccccccccccccccc;
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
    if ((ulonglong)(((longlong)(param_1[2] - uVar9) >> 2) * 4) < 0x1000) {
LAB_18022b4b5:
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
        goto LAB_18022b4b5;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x18022b4bd;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0xccccccccccccccc < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_18022b592;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x18022b4e7;
  uVar9 = FUN_18000fb70(uVar2 * 0x14);
  *param_1 = uVar9;
  param_1[1] = uVar9;
  param_1[2] = uVar2 * 0x14 + uVar9;
  lVar5 = param_3 * 0x14;
  *(undefined8 *)(puVar8 + -8) = 0x18022b513;
  FUN_180540530(uVar9,param_2,lVar5);
LAB_18022b578:
  param_1[1] = lVar5 + uVar9;
  return;
}



/* ===== 18022b5a0 FUN_18022b5a0 ===== */

undefined8 * FUN_18022b5a0(undefined8 param_1,undefined8 *param_2)

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
  
  puVar6 = DAT_180cecbe8;
  if (DAT_180cecbe8 != DAT_180cecbf0) {
    uVar5 = param_2[1];
    *DAT_180cecbe8 = *param_2;
    puVar6[1] = uVar5;
    puVar6 = DAT_180cecbe8;
    DAT_180cecbe8 = DAT_180cecbe8 + 2;
    return puVar6;
  }
  uVar14 = 0xfffffffffffffff;
  uVar15 = (longlong)DAT_180cecbe8 - (longlong)DAT_180cecbe0;
  lVar10 = (longlong)uVar15 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar11 = lVar10 + 1;
  uVar8 = (longlong)DAT_180cecbf0 - (longlong)DAT_180cecbe0 >> 4;
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
  if (puVar6 == DAT_180cecbe8) {
    lVar10 = (longlong)DAT_180cecbe8 - (longlong)DAT_180cecbe0;
    puVar9 = puVar7;
    puVar6 = DAT_180cecbe0;
  }
  else {
    FUN_180540530(puVar7,DAT_180cecbe0,(longlong)puVar6 - (longlong)DAT_180cecbe0);
    puVar9 = puVar16 + 2;
    lVar10 = (longlong)DAT_180cecbe8 - (longlong)puVar6;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar6,lVar10);
  if (DAT_180cecbe0 == (undefined8 *)0x0) goto LAB_18022b6f1;
  puVar6 = DAT_180cecbe0;
  if (((longlong)DAT_180cecbf0 - (longlong)DAT_180cecbe0 & 0xfffffffffffffff0U) < 0x1000) {
LAB_18022b6e9:
    puVar13 = puVar12;
  }
  else {
    puVar6 = (undefined8 *)DAT_180cecbe0[-1];
    if (0x1f < (ulonglong)((longlong)DAT_180cecbe0 + (-8 - (longlong)puVar6))) {
      pcVar1 = (code *)swi(0x29);
      puVar6 = (undefined8 *)(*pcVar1)(5);
      puVar12 = auStack_30;
      goto LAB_18022b6e9;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x18022b6f1;
  thunk_FUN_1803d64e0(puVar6);
LAB_18022b6f1:
  DAT_180cecbe8 = puVar7 + uVar11 * 2;
  DAT_180cecbe0 = puVar7;
  DAT_180cecbf0 = puVar7 + uVar14 * 2;
  return puVar16;
}



/* ===== 18022b740 FUN_18022b740 ===== */

longlong FUN_18022b740(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  
  lVar3 = DAT_180cecbc8;
  uVar14 = 0xccccccccccccccc;
  lVar8 = (DAT_180cecbd0 - DAT_180cecbc8 >> 2) * -0x3333333333333333;
  if (lVar8 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar8 + 1;
  uVar9 = (DAT_180cecbd8 - DAT_180cecbc8 >> 2) * -0x3333333333333333;
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
  if (param_2 == DAT_180cecbd0) {
    lVar13 = DAT_180cecbd0 - DAT_180cecbc8;
    lVar10 = lVar8;
    param_2 = DAT_180cecbc8;
  }
  else {
    FUN_180540530(lVar8,DAT_180cecbc8,param_2 - DAT_180cecbc8);
    lVar10 = lVar3 + 0x14;
    lVar13 = DAT_180cecbd0 - param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(lVar10,param_2,lVar13);
  if (DAT_180cecbc8 == 0) goto LAB_18022b8c1;
  lVar10 = DAT_180cecbc8;
  if ((ulonglong)((DAT_180cecbd8 - DAT_180cecbc8 >> 2) * 4) < 0x1000) {
LAB_18022b8b6:
    puVar12 = puVar11;
  }
  else {
    lVar10 = *(longlong *)(DAT_180cecbc8 + -8);
    if (0x1f < (DAT_180cecbc8 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      goto LAB_18022b8b6;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x18022b8c1;
  thunk_FUN_1803d64e0(lVar10);
LAB_18022b8c1:
  DAT_180cecbc8 = lVar8;
  DAT_180cecbd0 = lVar8 + uVar1 * 0x14;
  DAT_180cecbd8 = uVar14 * 0x14 + lVar8;
  return lVar3;
}



/* ===== 18022b910 FUN_18022b910 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022b910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  if (DAT_1811150d4 < 0x3c) {
    DAT_1811150d4 = DAT_1811150d4 + 1;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_180540170(local_228,0,0x200);
    puVar1 = (ulonglong *)FUN_180013640();
    local_238 = 0;
    local_230 = &local_res10;
    FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_sounds.log","[%llu] hitsound | %s\n",UVar2,local_228);
  }
  return;
}



/* ===== 18022b9e0 FUN_18022b9e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18022b9e0(undefined8 *param_1,undefined8 param_2)

{
  short *psVar1;
  short *psVar2;
  code *pcVar3;
  int iVar4;
  short *psVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  size_t _Size;
  undefined8 *puVar10;
  short *psVar11;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 ****local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 ****local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  if ((ulonglong)param_1[3] < 8) {
    puVar10 = param_1;
  }
  else {
    puVar10 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar10 + param_1[2] * 2);
  psVar11 = psVar2;
  for (psVar5 = (short *)FUN_180013e50(puVar10,psVar2); psVar5 != psVar2; psVar5 = psVar5 + 1) {
    if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) goto LAB_18022ba50;
  }
LAB_18022ba6b:
  local_88 = (undefined8 ****)0x0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_180024d40(&local_88,psVar11,(longlong)psVar2 - (longlong)psVar11 >> 1);
  local_a8 = &local_88;
  if (7 < local_70) {
    local_a8 = local_88;
  }
  uStack_a0 = local_78;
  FUN_180024c20(local_68,&local_a8);
  FUN_1800289e0(&local_88);
  puVar9 = auStack_c8;
  if (7 < local_58) {
    uVar7 = local_58 - 7;
    if (local_58 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    _Size = 7;
    if (local_58 - uVar7 < 7) {
      _Size = local_58 - uVar7;
    }
    ppppuVar6 = local_68;
    if (0xf < local_50) {
      ppppuVar6 = local_68[0];
    }
    iVar4 = memcmp((void *)((longlong)ppppuVar6 + uVar7),&DAT_18070c718,_Size);
    puVar9 = auStack_c8;
    if ((iVar4 == 0) && (puVar9 = auStack_c8, 6 < _Size)) {
      local_a8 = (undefined8 ****)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      if (local_58 < uVar7) {
        uVar7 = local_58;
      }
      ppppuVar6 = local_68;
      if (0xf < local_50) {
        ppppuVar6 = local_68[0];
      }
      FUN_1800133a0(&local_a8,ppppuVar6,uVar7);
      FUN_18002ba60(param_2,&local_a8);
      if (0xf < local_90) {
        uVar7 = local_90 + 1;
        ppppuVar6 = local_a8;
        if (0xfff < uVar7) {
          ppppuVar6 = (undefined8 ****)local_a8[-1];
          if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar6))) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar9 = auStack_c0;
            goto LAB_18022bb9a;
          }
          uVar7 = local_90 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppuVar6,uVar7);
      }
      puVar9 = auStack_c8;
      uVar8 = 1;
      goto LAB_18022bb9c;
    }
  }
LAB_18022bb9a:
  uVar8 = 0;
LAB_18022bb9c:
  *(undefined8 *)(puVar9 + -8) = 0x18022bba5;
  FUN_18000f890(local_68);
  *(undefined8 *)(puVar9 + -8) = 0x18022bbb4;
  return uVar8;
LAB_18022ba50:
  psVar1 = psVar11 + -1;
  if (*psVar1 == 0x5c) goto LAB_18022ba6b;
  if ((*psVar1 == 0x2f) || (psVar11 = psVar1, psVar5 == psVar1)) goto LAB_18022ba6b;
  goto LAB_18022ba50;
}



/* ===== 18022bbd0 FUN_18022bbd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022bbd0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  short *psVar3;
  longlong *plVar4;
  short *psVar5;
  int iVar6;
  code *pcVar7;
  longlong lVar8;
  undefined4 *puVar9;
  char cVar10;
  short *psVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  undefined8 ****ppppuVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  short *psVar22;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  longlong local_178;
  undefined8 ****local_170;
  ulonglong local_168;
  uint local_158;
  ulonglong local_148;
  undefined **ppuStack_140;
  ulonglong local_128 [2];
  uint local_118 [2];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  int local_d8 [4];
  undefined8 ****local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_198;
  uVar21 = 0;
  local_158 = 0;
  local_148 = local_148 & 0xffffffff00000000;
  ppuStack_140 = &PTR_vftable_18091a158;
  FUN_18004e860(local_118,param_1,&local_148);
  if (CONCAT44(uStack_10c,uStack_110) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_10c,uStack_110) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_128[0] = (ulonglong)local_118[0];
  FUN_18004eae0(&local_108,local_128);
  if (CONCAT44(uStack_10c,uStack_110) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_10c,uStack_110) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_18004ebc0(&local_f8,&local_148);
  puVar18 = auStack_198;
  puVar19 = auStack_198;
  puVar20 = auStack_198;
  if (local_108 != local_f8) {
    do {
      lVar8 = local_108;
      FUN_180015fc0(local_108,local_d8,3);
      if (local_d8[0] == 3) {
        if (param_3 < 1) goto LAB_18022c019;
        puVar2 = (undefined8 *)(lVar8 + 0x20);
        if (*(ulonglong *)(lVar8 + 0x38) < 8) {
          puVar14 = puVar2;
        }
        else {
          puVar14 = (undefined8 *)*puVar2;
        }
        psVar5 = (short *)((longlong)puVar14 + *(longlong *)(lVar8 + 0x30) * 2);
        psVar22 = psVar5;
        for (psVar11 = (short *)FUN_180013e50(puVar14,psVar5); psVar11 != psVar5;
            psVar11 = psVar11 + 1) {
          if ((*psVar11 != 0x5c) && (*psVar11 != 0x2f)) goto LAB_18022bd20;
        }
LAB_18022bd3b:
        local_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        FUN_180024d40(&local_a8,psVar22,(longlong)psVar5 - (longlong)psVar22 >> 1);
        local_158 = uVar21 | 4;
        local_e8 = &local_a8;
        if (7 < uStack_90) {
          local_e8 = local_a8;
        }
        local_e0 = local_98;
        FUN_180024c20(local_68,&local_e8);
        if ((ulonglong)param_2[3] < 0x10) {
          puVar14 = param_2;
        }
        else {
          puVar14 = (undefined8 *)*param_2;
        }
        plVar12 = (longlong *)FUN_18006b5b0(local_68,0,puVar14,param_2[2]);
        local_c8 = (undefined8 ****)*plVar12;
        lStack_c0 = plVar12[1];
        local_b8 = plVar12[2];
        uStack_b0 = plVar12[3];
        plVar12[2] = 0;
        plVar12[3] = 0xf;
        *(undefined1 *)plVar12 = 0;
        puVar13 = (ulonglong *)FUN_1800134a0(&local_c8,&DAT_1806e08bc,1);
        local_88 = *puVar13;
        uStack_80 = puVar13[1];
        local_78 = puVar13[2];
        uStack_70 = puVar13[3];
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        *(undefined1 *)puVar13 = 0;
        uVar21 = uVar21 | 0x7f;
        local_158 = uVar21;
        FUN_18022bbd0(puVar2,&local_88,param_3 + -1);
        if (0xf < uStack_70) {
          uVar16 = uStack_70 + 1;
          uVar17 = local_88;
          if (uVar16 < 0x1000) {
LAB_18022be6a:
            thunk_FUN_1803d64e0(uVar17,uVar16);
            goto LAB_18022be6f;
          }
          uVar17 = *(ulonglong *)(local_88 - 8);
          if ((local_88 - uVar17) - 8 < 0x20) {
            uVar16 = uStack_70 + 0x28;
            goto LAB_18022be6a;
          }
          pcVar7 = (code *)swi(0x29);
          (*pcVar7)(5);
          puVar18 = auStack_190;
LAB_18022c0f9:
          pcVar7 = (code *)swi(0x29);
          (*pcVar7)(5);
          puVar19 = puVar18 + 8;
LAB_18022c100:
          pcVar7 = (code *)swi(0x29);
          (*pcVar7)(5);
          puVar20 = puVar19 + 8;
LAB_18022c107:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar20 + -8) = &UNK_18022c10c;
          FUN_180011990();
        }
LAB_18022be6f:
        local_78 = 0;
        uStack_70 = 0xf;
        local_88 = local_88 & 0xffffffffffffff00;
        if (0xf < uStack_b0) {
          uVar17 = uStack_b0 + 1;
          ppppuVar15 = local_c8;
          if (0xfff < uVar17) {
            ppppuVar15 = (undefined8 ****)local_c8[-1];
            if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar15)))
            goto LAB_18022c0f9;
            uVar17 = uStack_b0 + 0x28;
          }
          thunk_FUN_1803d64e0(ppppuVar15,uVar17);
        }
        local_b8 = 0;
        uStack_b0 = 0xf;
        local_c8 = (undefined8 ****)((ulonglong)local_c8 & 0xffffffffffffff00);
        FUN_18000f890(local_68);
        FUN_1800289e0(&local_a8);
      }
      else {
        FUN_180015fc0(lVar8,local_128,3);
        if ((int)local_128[0] == 2) {
          lStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0xf;
          local_c8 = (undefined8 ****)0x0;
          cVar10 = FUN_18022b9e0(lVar8 + 0x20,&local_c8);
          if (cVar10 != '\0') {
            if (0x7fffffffffffffff - param_2[2] < local_b8) goto LAB_18022c107;
            local_170 = &local_c8;
            if (0xf < uStack_b0) {
              local_170 = local_c8;
            }
            local_168 = local_b8;
            local_178 = param_2[2];
            FUN_180069380(&local_a8);
            puVar9 = DAT_180cecc18;
            uVar21 = uVar21 | 0x200;
            local_158 = uVar21;
            if (DAT_180cecc18 == DAT_180cecc20) {
              FUN_18009bb20(&DAT_180cecc10,DAT_180cecc18,&local_a8);
            }
            else {
              *DAT_180cecc18 = (undefined4)local_a8;
              puVar9[1] = local_a8._4_4_;
              puVar9[2] = (undefined4)uStack_a0;
              puVar9[3] = uStack_a0._4_4_;
              *(undefined8 *)(puVar9 + 4) = local_98;
              *(ulonglong *)(puVar9 + 6) = uStack_90;
              local_98 = 0;
              uStack_90 = 0xf;
              local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
              DAT_180cecc18 = DAT_180cecc18 + 8;
            }
            FUN_18000f890(&local_a8);
          }
          if (0xf < uStack_b0) {
            uVar17 = uStack_b0 + 1;
            ppppuVar15 = local_c8;
            if (0xfff < uVar17) {
              ppppuVar15 = (undefined8 ****)local_c8[-1];
              if ((ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar15)) < 0x20) {
                uVar17 = uStack_b0 + 0x28;
                goto LAB_18022c014;
              }
              goto LAB_18022c100;
            }
LAB_18022c014:
            thunk_FUN_1803d64e0(ppppuVar15,uVar17);
          }
        }
      }
LAB_18022c019:
      FUN_18004e9d0(&local_108);
    } while (local_108 != local_f8);
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_f0 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0);
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_100 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_100 + 8))(local_100);
      }
    }
  }
  plVar12 = (longlong *)CONCAT44(uStack_10c,uStack_110);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar12 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  return;
LAB_18022bd20:
  psVar3 = psVar22 + -1;
  if (*psVar3 == 0x5c) goto LAB_18022bd3b;
  if ((*psVar3 == 0x2f) || (psVar22 = psVar3, psVar11 == psVar3)) goto LAB_18022bd3b;
  goto LAB_18022bd20;
}



/* ===== 18022c110 FUN_18022c110 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18022c110(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_168 [32];
  undefined8 ****local_148;
  undefined **local_140;
  undefined1 local_138 [32];
  char local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  longlong local_d0 [4];
  undefined8 ****local_b0 [2];
  undefined8 local_a0;
  ulonglong local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  lVar6 = DAT_180cecc18;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_168;
  local_148 = (undefined8 ****)((ulonglong)local_148 & 0xffffffff00000000);
  lVar9 = DAT_180cecc10;
  if (DAT_180cecc10 != DAT_180cecc18) {
    do {
      FUN_18000f890(lVar9);
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != lVar6);
    DAT_180cecc18 = DAT_180cecc10;
  }
  DAT_180ccf6e4 = 1;
  FUN_180390a90(local_138);
  if (local_118 == '\0') {
    FUN_180029840(&DAT_180ca1120,"the game folder wasn\'t found",0x1c);
    FUN_180029840(s_not_scanned_1809f2a20,
                  "the game folder wasn\'t found (client.dll path, Steam libraries)",0x3f);
    FUN_18022b910("scan | no game directory");
    goto LAB_18022c634;
  }
  local_148 = (undefined8 ****)0x18070c8d8;
  local_140 = (undefined **)0x6;
  uVar2 = FUN_1804e5000();
  FUN_180013d60(local_90,uVar2,&local_148);
  FUN_180014f50(local_b0,local_138,local_90);
  FUN_1800289e0(local_90);
  local_148 = (undefined8 ****)((ulonglong)local_148 & 0xffffffff00000000);
  local_140 = &PTR_vftable_18091a158;
  FUN_180016bc0(local_b0,&local_148);
  local_148 = local_b0;
  if (7 < local_98) {
    local_148 = local_b0[0];
  }
  local_140 = (undefined **)local_a0;
  FUN_180024c20(&local_110,&local_148);
  uVar8 = CONCAT44(DAT_180ca1138._4_4_,(undefined4)DAT_180ca1138);
  if (0xf < uVar8) {
    uVar7 = uVar8 + 1;
    lVar9 = CONCAT44(DAT_180ca1120._4_4_,(undefined4)DAT_180ca1120);
    lVar6 = lVar9;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar9 + -8);
      if (0x1f < (lVar9 - lVar6) - 8U) goto LAB_18022c66d;
      uVar7 = uVar8 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar6,uVar7);
  }
  DAT_180ca1120._0_4_ = (undefined4)local_110;
  DAT_180ca1120._4_4_ = local_110._4_4_;
  uRam0000000180ca1128 = (undefined4)uStack_108;
  uRam0000000180ca112c = uStack_108._4_4_;
  _DAT_180ca1130 = (undefined4)local_100;
  uRam0000000180ca1134 = local_100._4_4_;
  DAT_180ca1138._0_4_ = (undefined4)uStack_f8;
  DAT_180ca1138._4_4_ = uStack_f8._4_4_;
  local_100 = 0;
  uStack_f8 = 0xf;
  local_110 = local_110 & 0xffffffffffffff00;
  FUN_18000f890(&local_110);
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0xf;
  local_110 = 0;
  FUN_18022bbd0(local_b0,&local_110,1);
  if (0xf < uStack_f8) {
    uVar7 = uStack_f8 + 1;
    uVar8 = local_110;
    if (0xfff < uVar7) {
      uVar8 = *(ulonglong *)(local_110 - 8);
      if (0x1f < (local_110 - uVar8) - 8) goto LAB_18022c66d;
      uVar7 = uStack_f8 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar8,uVar7);
  }
  FUN_180225020(DAT_180cecc10,DAT_180cecc18,DAT_180cecc18 - DAT_180cecc10 >> 5,0);
  bVar11 = DAT_180cecc10 != DAT_180cecc18;
  if (bVar11) {
    local_d0[1] = 0;
    local_d0[2] = 0;
    local_d0[3] = 0xf;
    local_d0[0] = 0;
    plVar5 = local_d0;
  }
  else {
    uStack_108 = 0;
    local_100 = 7;
    uStack_f8 = 0xf;
    local_110 = (ulonglong)
                CONCAT16(DAT_18070c718._6_1_,CONCAT24(DAT_18070c718._4_2_,(undefined4)DAT_18070c718)
                        );
    local_148._0_4_ = 0x1e1;
    uVar3 = FUN_180066ab0(local_50,&DAT_18070c9ec,&local_110);
    local_148._0_4_ = 0x1e3;
    puVar4 = (ulonglong *)FUN_1800134a0(uVar3," files in ",10);
    local_f0 = *puVar4;
    uStack_e8 = puVar4[1];
    local_e0 = puVar4[2];
    uStack_d8 = puVar4[3];
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    local_148 = (undefined8 ****)CONCAT44(local_148._4_4_,999);
    plVar5 = (longlong *)FUN_1800667a0(local_70,&local_f0,&DAT_180ca1120);
  }
  if (plVar5 != (longlong *)s_not_scanned_1809f2a20) {
    if (DAT_1809f2a38 < 0x10) {
LAB_18022c4bb:
      s_not_scanned_1809f2a20._0_4_ = *(undefined4 *)plVar5;
      s_not_scanned_1809f2a20._4_4_ = *(undefined4 *)((longlong)plVar5 + 4);
      s_not_scanned_1809f2a20._8_4_ = *(undefined4 *)(plVar5 + 1);
      uRam00000001809f2a2c = *(undefined4 *)((longlong)plVar5 + 0xc);
      _DAT_1809f2a30 = plVar5[2];
      DAT_1809f2a38 = plVar5[3];
      plVar5[2] = 0;
      plVar5[3] = 0xf;
      *(char *)plVar5 = '\0';
      goto LAB_18022c4fc;
    }
    uVar8 = DAT_1809f2a38 + 1;
    lVar9 = CONCAT44(s_not_scanned_1809f2a20._4_4_,s_not_scanned_1809f2a20._0_4_);
    lVar6 = lVar9;
    if (uVar8 < 0x1000) {
LAB_18022c4b6:
      thunk_FUN_1803d64e0(lVar6,uVar8);
      goto LAB_18022c4bb;
    }
    lVar6 = *(longlong *)(lVar9 + -8);
    if ((lVar9 - lVar6) - 8U < 0x20) {
      uVar8 = DAT_1809f2a38 + 0x28;
      goto LAB_18022c4b6;
    }
LAB_18022c65f:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_18022c666:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_18022c66d:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_18022c4fc:
  if ((bVar11) && (0xf < (ulonglong)local_d0[3])) {
    uVar8 = local_d0[3] + 1;
    lVar6 = local_d0[0];
    if (0xfff < uVar8) {
      lVar6 = *(longlong *)(local_d0[0] + -8);
      if (0x1f < (local_d0[0] - lVar6) - 8U) goto LAB_18022c65f;
      uVar8 = local_d0[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar6,uVar8);
  }
  if (!bVar11) {
    FUN_18000f890(local_70);
    if (0xf < uStack_d8) {
      uVar7 = uStack_d8 + 1;
      uVar8 = local_f0;
      if (0xfff < uVar7) {
        uVar8 = *(ulonglong *)(local_f0 - 8);
        if (0x1f < (local_f0 - uVar8) - 8) goto LAB_18022c666;
        uVar7 = uStack_d8 + 0x28;
      }
      thunk_FUN_1803d64e0(uVar8,uVar7);
    }
    local_e0 = 0;
    uStack_d8 = 0xf;
    local_f0 = local_f0 & 0xffffffffffffff00;
  }
  if ((!bVar11) && (FUN_18000f890(local_50), 0xf < uStack_f8)) {
    uVar7 = uStack_f8 + 1;
    uVar8 = local_110;
    if (0xfff < uVar7) {
      uVar8 = *(ulonglong *)(local_110 - 8);
      if (0x1f < (local_110 - uVar8) - 8) goto LAB_18022c66d;
      uVar7 = uStack_f8 + 0x28;
    }
    thunk_FUN_1803d64e0(uVar8,uVar7);
  }
  puVar10 = &DAT_180ca1120;
  if (0xf < CONCAT44(DAT_180ca1138._4_4_,(undefined4)DAT_180ca1138)) {
    puVar10 = (undefined8 *)CONCAT44(DAT_180ca1120._4_4_,(undefined4)DAT_180ca1120);
  }
  FUN_18022b910("scan | %zu sounds in %s",DAT_180cecc18 - DAT_180cecc10 >> 5,puVar10);
  FUN_1800289e0(local_b0);
LAB_18022c634:
  if (local_118 != '\0') {
    FUN_1800289e0(local_138);
  }
  return;
}



/* ===== 18022c680 FUN_18022c680 ===== */

undefined8 FUN_18022c680(code *param_1)

{
  (*param_1)(0);
  return 1;
}



/* ===== 18022c6a0 FUN_18022c6a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022c6a0(longlong param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auStack_508 [32];
  float local_4e8 [6];
  undefined8 ****local_4d0 [3];
  ulonglong local_4b8;
  char *local_4b0;
  undefined8 ****local_4a8;
  undefined8 *local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478 [1080];
  undefined4 local_40;
  char **local_38;
  ulonglong local_28;
  
  lVar1 = DAT_180961c80;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_508;
  if ((DAT_180961c80 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    local_4e8[2] = param_2;
    FUN_180066a20(local_4d0,"sounds/",param_1);
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_4e8[4] = 1.0;
    local_4e8[0] = 0.0;
    pfVar4 = local_4e8;
    if (0.0 <= param_2) {
      pfVar4 = local_4e8 + 2;
    }
    pfVar3 = local_4e8 + 4;
    if (param_2 <= DAT_1808ac34c) {
      pfVar3 = pfVar4;
    }
    snprintf(&local_498,0x20,&DAT_18070c948,(double)*pfVar3);
    local_4b0 = "playvol";
    local_4a8 = local_4d0;
    if (0xf < local_4b8) {
      local_4a8 = local_4d0[0];
    }
    local_4a0 = &local_498;
    FUN_180540170(local_478,0,0x450);
    local_40 = 3;
    local_38 = &local_4b0;
    cVar2 = FUN_18022c680(lVar1,local_478);
    if (cVar2 == '\0') {
      FUN_180029840(s_not_scanned_1809f2a20,"the game\'s sound command faulted",0x20);
    }
    FUN_18000f890(local_4d0);
  }
  return;
}



/* ===== 18022c820 FUN_18022c820 ===== */

bool FUN_18022c820(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res10 [3];
  
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    lVar2 = local_res10[0];
  }
  else {
    lVar2 = DAT_181108a00;
  }
  if (lVar2 != 0) {
    lVar1 = FUN_180273f90(param_1,"attacker");
    if (lVar1 == lVar2) {
      lVar1 = FUN_180273f90(param_1,"userid");
      return lVar1 != lVar2;
    }
  }
  return false;
}



/* ===== 18022c8a0 FUN_18022c8a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022c8a0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [9];
  
  local_48[4] = DAT_180919500 ^ (ulonglong)auStack_68;
  if (DAT_180921220 != '\0') {
    cVar3 = FUN_18022c820();
    uVar2 = DAT_180921264;
    if (cVar3 != '\0') {
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      sVar4 = strlen(&DAT_180921221);
      FUN_1800133a0(local_48,&DAT_180921221,sVar4);
      FUN_18022c6a0(local_48,uVar2);
      if (0xf < (ulonglong)local_48[3]) {
        uVar6 = local_48[3] + 1;
        lVar5 = local_48[0];
        if (0xfff < uVar6) {
          lVar5 = *(longlong *)(local_48[0] + -8);
          if (0x1f < (local_48[0] - lVar5) - 8U) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar6 = local_48[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar5,uVar6);
      }
    }
  }
  return;
}



/* ===== 18022c980 FUN_18022c980 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022c980(void)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [9];
  
  local_48[4] = DAT_180919500 ^ (ulonglong)auStack_68;
  if (DAT_180921268 != '\0') {
    cVar3 = FUN_18022c820();
    uVar2 = DAT_1809212ac;
    if (cVar3 != '\0') {
      local_48[0] = 0;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      sVar4 = strlen(&DAT_180921269);
      FUN_1800133a0(local_48,&DAT_180921269,sVar4);
      FUN_18022c6a0(local_48,uVar2);
      if (0xf < (ulonglong)local_48[3]) {
        uVar6 = local_48[3] + 1;
        lVar5 = local_48[0];
        if (0xfff < uVar6) {
          lVar5 = *(longlong *)(local_48[0] + -8);
          if (0x1f < (local_48[0] - lVar5) - 8U) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar6 = local_48[3] + 0x28;
        }
        thunk_FUN_1803d64e0(lVar5,uVar6);
      }
    }
  }
  return;
}



/* ===== 18022ca60 FUN_18022ca60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18022ca60(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined1 local_50;
  undefined8 local_4f;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58 = &DAT_1809f2a40;
  iVar2 = FUN_1804e4d70(&DAT_1809f2a40);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f2a8c == 0x7fffffff) {
    DAT_1809f2a8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((ulonglong)(((longlong)DAT_180cecc30 - DAT_180cecc28 >> 3) * -0x3333333333333333) < 8) {
    uVar3 = FUN_180024b50(&local_50,param_1);
    puVar1 = DAT_180cecc30;
    local_30 = param_2;
    if (DAT_180cecc30 == DAT_180cecc38) {
      FUN_18022cd10(uVar3,DAT_180cecc30,&local_50);
    }
    else {
      *DAT_180cecc30 = local_50;
      *(undefined8 *)(puVar1 + 1) = local_4f;
      *(undefined4 *)(puVar1 + 9) = local_47;
      *(undefined2 *)(puVar1 + 0xd) = local_43;
      puVar1[0xf] = local_41;
      *(undefined8 *)(puVar1 + 0x10) = local_40;
      *(undefined8 *)(puVar1 + 0x18) = uStack_38;
      local_40 = _DAT_1808ad410;
      uStack_38 = _UNK_1808ad418;
      local_50 = 0;
      *(undefined4 *)(puVar1 + 0x20) = param_2;
      DAT_180cecc30 = DAT_180cecc30 + 0x28;
    }
    FUN_18000f890(&local_50);
  }
  FUN_1804e4e90(&DAT_1809f2a40);
  return;
}



/* ===== 18022cbc0 FUN_18022cbc0 ===== */

void FUN_18022cbc0(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  ulonglong local_48;
  ulonglong uStack_40;
  longlong local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  iVar5 = FUN_1804e4d70(&DAT_1809f2a40);
  lVar4 = DAT_180cecc38;
  uVar2 = DAT_180cecc30;
  uVar8 = DAT_180cecc28;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f2a8c == 0x7fffffff) {
    DAT_1809f2a8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_48 = DAT_180cecc28;
  DAT_180cecc28 = 0;
  uStack_40 = DAT_180cecc30;
  DAT_180cecc30 = 0;
  local_38 = DAT_180cecc38;
  DAT_180cecc38 = 0;
  FUN_1804e4e90(&DAT_1809f2a40);
  puVar7 = auStack_68;
  if (uVar8 != uVar2) {
    uVar6 = uVar8;
    do {
      FUN_18022c6a0(uVar6,*(undefined4 *)(uVar6 + 0x20));
      uVar6 = uVar6 + 0x28;
    } while (uVar6 != uVar2);
  }
  if (uVar8 != 0) {
    if (uVar8 != uVar2) {
      uVar6 = uVar8;
      do {
        FUN_18000f890(uVar6);
        uVar6 = uVar6 + 0x28;
      } while (uVar6 != uVar2);
    }
    uVar2 = ((longlong)(lVar4 - uVar8) >> 3) * 8;
    if (0xfff < uVar2) {
      plVar1 = (longlong *)(uVar8 - 8);
      uVar8 = (uVar8 - *plVar1) - 8;
      if (uVar8 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar2 + 0x27);
        return;
      }
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar7 = auStack_60;
    }
    *(undefined8 *)(puVar7 + -8) = 0x18022cce0;
    thunk_FUN_1803d64e0(uVar8);
  }
  return;
}



/* ===== 18022cd10 FUN_18022cd10 ===== */

undefined8 * FUN_18022cd10(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar14 = (undefined4 *)DAT_180cecc28;
  uVar15 = 0x666666666666666;
  lVar10 = ((longlong)DAT_180cecc30 - (longlong)DAT_180cecc28 >> 3) * -0x3333333333333333;
  if (lVar10 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar10 + 1;
  uVar12 = ((longlong)DAT_180cecc38 - (longlong)DAT_180cecc28 >> 3) * -0x3333333333333333;
  if (uVar12 <= 0x666666666666666 - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar15 = uVar1;
    if (uVar1 <= uVar12) {
      uVar15 = uVar12;
    }
    if (0x666666666666666 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar11 = (undefined8 *)FUN_18000fb70(uVar15 * 0x28);
  puVar16 = auStack_48;
  puVar17 = auStack_48;
  lVar10 = ((longlong)param_2 - (longlong)puVar14) / 0x28;
  puVar11[lVar10 * 5] = 0;
  (puVar11 + lVar10 * 5)[1] = 0;
  puVar11[lVar10 * 5 + 2] = 0;
  puVar2 = puVar11 + lVar10 * 5;
  puVar2[3] = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)puVar2 = *param_3;
  *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
  *(undefined4 *)(puVar2 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
  uVar7 = *(undefined8 *)(param_3 + 6);
  puVar2[2] = *(undefined8 *)(param_3 + 4);
  puVar2[3] = uVar7;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar2 + 4) = param_3[8];
  puVar9 = (undefined4 *)DAT_180cecc30;
  puVar8 = puVar11;
  puVar14 = (undefined4 *)DAT_180cecc28;
  if ((undefined8 *)param_2 == DAT_180cecc30) {
    for (; puVar14 != puVar9; puVar14 = puVar14 + 10) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar14[1];
      uVar5 = puVar14[2];
      uVar6 = puVar14[3];
      *(undefined4 *)puVar8 = *puVar14;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar14 + 6);
      puVar8[2] = *(undefined8 *)(puVar14 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      *(undefined4 *)(puVar8 + 4) = puVar14[8];
      puVar8 = puVar8 + 5;
    }
  }
  else {
    for (; DAT_180cecc30 = (undefined8 *)puVar9, puVar14 != param_2; puVar14 = puVar14 + 10) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      uVar4 = puVar14[1];
      uVar5 = puVar14[2];
      uVar6 = puVar14[3];
      *(undefined4 *)puVar8 = *puVar14;
      *(undefined4 *)((longlong)puVar8 + 4) = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar6;
      uVar7 = *(undefined8 *)(puVar14 + 6);
      puVar8[2] = *(undefined8 *)(puVar14 + 4);
      puVar8[3] = uVar7;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      *(undefined4 *)(puVar8 + 4) = puVar14[8];
      puVar8 = puVar8 + 5;
      puVar9 = (undefined4 *)DAT_180cecc30;
    }
    puVar8 = puVar2;
    for (; param_2 != puVar9; param_2 = param_2 + 10) {
      puVar13 = puVar8 + 5;
      *puVar13 = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)puVar13 = *param_2;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar4;
      *(undefined4 *)(puVar8 + 6) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0x34) = uVar6;
      uVar7 = *(undefined8 *)(param_2 + 6);
      puVar8[7] = *(undefined8 *)(param_2 + 4);
      puVar8[8] = uVar7;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      *(undefined4 *)(puVar8 + 9) = param_2[8];
      puVar8 = puVar13;
    }
  }
  puVar9 = (undefined4 *)DAT_180cecc30;
  puVar14 = (undefined4 *)DAT_180cecc28;
  if (DAT_180cecc28 == (undefined8 *)0x0) goto LAB_18022cfaf;
  for (; puVar14 != puVar9; puVar14 = puVar14 + 10) {
    FUN_18000f890(puVar14);
  }
  puVar14 = (undefined4 *)DAT_180cecc28;
  if ((ulonglong)(((longlong)DAT_180cecc38 - (longlong)DAT_180cecc28 >> 3) * 8) < 0x1000) {
LAB_18022cfa4:
    puVar17 = puVar16;
  }
  else {
    puVar14 = *(undefined4 **)((longlong)DAT_180cecc28 + -8);
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cecc28 + (-8 - (longlong)puVar14))) {
      puVar14 = (undefined4 *)&DAT_00000005;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar16 = auStack_40;
      goto LAB_18022cfa4;
    }
  }
  *(undefined8 *)(puVar17 + -8) = 0x18022cfaf;
  thunk_FUN_1803d64e0(puVar14);
LAB_18022cfaf:
  DAT_180cecc28 = puVar11;
  DAT_180cecc30 = puVar11 + uVar1 * 5;
  DAT_180cecc38 = puVar11 + uVar15 * 5;
  return puVar2;
}



/* ===== 18022d000 FUN_18022d000 ===== */

void FUN_18022d000(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  
  pfVar4 = DAT_180cf8d40;
  fVar3 = DAT_1808ac154;
  pfVar6 = DAT_180cf8d38;
  if (DAT_180cf8d38 != DAT_180cf8d40) {
    do {
      fVar8 = param_1 - *pfVar6;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (param_2 + DAT_1808ac154 <= fVar8) break;
      if (*(char *)(pfVar6 + 6) != '\0') {
        fVar8 = param_1 - pfVar6[5];
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        if (DAT_1808ac154 <= fVar8) break;
      }
      pfVar6 = pfVar6 + 9;
    } while (pfVar6 != DAT_180cf8d40);
    if (pfVar6 != DAT_180cf8d40) {
      pfVar5 = pfVar6 + 9;
      if (pfVar5 == DAT_180cf8d40) goto LAB_18022d0e4;
      param_2 = param_2 + DAT_1808ac154;
      do {
        fVar8 = param_1 - *pfVar5;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        if (fVar8 < param_2) {
          if (*(char *)(pfVar5 + 6) != '\0') {
            fVar8 = param_1 - pfVar5[5];
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
            if (fVar3 <= fVar8) goto LAB_18022d0cf;
          }
          fVar8 = pfVar5[1];
          fVar1 = pfVar5[2];
          fVar2 = pfVar5[3];
          *pfVar6 = *pfVar5;
          pfVar6[1] = fVar8;
          pfVar6[2] = fVar1;
          pfVar6[3] = fVar2;
          fVar8 = pfVar5[5];
          fVar1 = pfVar5[6];
          fVar2 = pfVar5[7];
          pfVar6[4] = pfVar5[4];
          pfVar6[5] = fVar8;
          pfVar6[6] = fVar1;
          pfVar6[7] = fVar2;
          pfVar6[8] = pfVar5[8];
          pfVar6 = pfVar6 + 9;
        }
LAB_18022d0cf:
        pfVar5 = pfVar5 + 9;
      } while (pfVar5 != pfVar4);
    }
  }
  if (pfVar6 == pfVar4) {
    return;
  }
LAB_18022d0e4:
  lVar7 = (longlong)DAT_180cf8d40 - (longlong)pfVar4;
  FUN_180540530(pfVar6,pfVar4,lVar7);
  DAT_180cf8d40 = (float *)(lVar7 + (longlong)pfVar6);
  return;
}



/* ===== 18022d110 FUN_18022d110 ===== */

void FUN_18022d110(float *param_1,uint param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_70;
  
  uVar4 = DAT_180c9ffe4;
  uVar3 = DAT_18095d4f4;
  if (DAT_18095d4b8 != '\0') {
    iVar5 = FUN_1804e4d70(&DAT_1809f2ab0);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f2afc == 0x7fffffff) {
      DAT_1809f2afc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_18022d000(uVar4);
    uVar9 = ((longlong)DAT_180cf8d40 - (longlong)DAT_180cf8d38 >> 2) * -0x71c71c71c71c71c7;
    uVar6 = uVar9;
    if (0x20 < uVar9) {
      uVar6 = 0x20;
    }
    for (uVar6 = uVar9 - uVar6; uVar6 < uVar9; uVar6 = uVar6 + 1) {
      if ((((*(uint *)((longlong)DAT_180cf8d38 + uVar6 * 0x24 + 0x10) == param_2) &&
           (*(float *)((longlong)DAT_180cf8d38 + uVar6 * 0x24 + 4) == *param_1)) &&
          (*(float *)((longlong)DAT_180cf8d38 + uVar6 * 0x24 + 8) == param_1[1])) &&
         (*(float *)((longlong)DAT_180cf8d38 + uVar6 * 0x24 + 0xc) == param_1[2]))
      goto LAB_18022d32e;
    }
    if (0x3ff < uVar9) {
      FUN_180540530();
      DAT_180cf8d40 = (undefined8 *)((longlong)DAT_180cf8d40 + -0x24);
    }
    puVar8 = DAT_180cf8d40;
    uVar11 = DAT_1808ac34c;
    uStack_70 = uStack_70 & 0xffffff00;
    uVar1 = *(undefined8 *)param_1;
    uStack_84 = (undefined4)uVar1;
    uStack_80 = (undefined4)((ulonglong)uVar1 >> 0x20);
    fVar2 = param_1[2];
    if (DAT_180cf8d40 == DAT_180cf8d48) {
      FUN_18022d930(uVar1,DAT_180cf8d40);
    }
    else {
      *DAT_180cf8d40 = CONCAT44(uStack_84,uVar4);
      puVar8[1] = CONCAT44(fVar2,uStack_80);
      puVar8[2] = (ulonglong)param_2;
      puVar8[3] = CONCAT44(0x3f800000,uStack_70);
      *(undefined4 *)(puVar8 + 4) = uVar11;
      DAT_180cf8d40 = (undefined8 *)((longlong)DAT_180cf8d40 + 0x24);
    }
    uVar6 = 0;
    puVar8 = DAT_180cf8d38;
    if (DAT_180cf8d38 != DAT_180cf8d40) {
      do {
        uVar6 = uVar6 + (*(char *)(puVar8 + 3) == '\0');
        puVar8 = (undefined8 *)((longlong)puVar8 + 0x24);
        puVar7 = DAT_180cf8d38;
        puVar10 = DAT_180cf8d40;
      } while (puVar8 != DAT_180cf8d40);
      do {
        if (uVar6 < 0x201) break;
        if (*(char *)(puVar7 + 3) == '\0') {
          auVar12._0_8_ = FUN_1802300e0(puVar7,uVar4,uVar3);
          auVar12._8_8_ = extraout_XMM0_Qb;
          if ((float)auVar12._0_8_ <= 0.0) {
            auVar12._0_8_ = auVar12._4_8_ << 0x20;
          }
          *(int *)((longlong)puVar7 + 0x1c) = (int)auVar12._0_8_;
          uVar11 = FUN_1802301d0(auVar12._0_8_,uVar4,uVar3);
          *(undefined4 *)(puVar7 + 4) = uVar11;
          *(undefined4 *)((longlong)puVar7 + 0x14) = uVar4;
          *(undefined1 *)(puVar7 + 3) = 1;
          uVar6 = uVar6 - 1;
        }
        puVar7 = (undefined8 *)((longlong)puVar7 + 0x24);
      } while (puVar7 != puVar10);
    }
LAB_18022d32e:
    FUN_1804e4e90(&DAT_1809f2ab0);
  }
  return;
}



/* ===== 18022d380 FUN_18022d380 ===== */

void FUN_18022d380(int *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (DAT_180961a50 != 0) {
    lVar3 = FUN_18000f3a0();
    if (lVar3 - 0x10000U < 0x7ffffffeffff) {
      uVar5 = FUN_18000f3d0(lVar3 + 0x30);
      goto LAB_18022d3cf;
    }
  }
  uVar5 = 0;
LAB_18022d3cf:
  DAT_180c9ffe4 = uVar5;
  if (((param_1 != (int *)0x0) && (DAT_180cd0fa7 != '\0')) && (DAT_181107a40 != 0)) {
    FUN_18000edf0(param_1);
    if (DAT_18095d4b8 != '\0') {
      iVar2 = FUN_1804e4d70(&DAT_1809f2ab0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f2afc == 0x7fffffff) {
        DAT_1809f2afc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      uVar6 = FUN_18022d000(uVar5,DAT_18095d4f4);
      if (DAT_180cf8d38 == DAT_180cf8d40) {
        FUN_1804e4e90(&DAT_1809f2ab0);
      }
      else {
        FUN_18022d750(uVar6,DAT_180cf8d38,(DAT_180cf8d40 - DAT_180cf8d38 >> 2) * -0x71c71c71c71c71c7
                     );
        FUN_1804e4e90(&DAT_1809f2ab0);
        cVar1 = FUN_180230270(DAT_180cecc40,
                              (DAT_180cecc48 - DAT_180cecc40 >> 2) * -0x71c71c71c71c71c7,uVar5,
                              &DAT_18095d4b8,&DAT_181107930 + (longlong)DAT_181107a00 * 0x40,
                              *(undefined4 *)(DAT_180ca0a50 + 0x30),
                              *(undefined4 *)(DAT_180ca0a50 + 0x34));
        if ((cVar1 != '\0') && (DAT_180cecce8 - 1 < 0x400)) {
          FUN_1803fbf20(param_1,FUN_18022ec30,&DAT_180cecc60,(ulonglong)DAT_180cecce8 * 0x30 + 0xd0)
          ;
          lVar3 = -8;
          if ((*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) != 0) &&
             (lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x68) + 0xc60),
             lVar4 != 0)) {
            lVar3 = lVar4;
          }
          lVar4 = *(longlong *)(param_1 + 2) + ((longlong)*param_1 + -1) * 0x48;
          if (*(int *)(lVar4 + 0x28) != 0) {
            FUN_1803fbe60(param_1);
            lVar4 = *(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1) * 0x48;
          }
          *(longlong *)(lVar4 + 0x30) = lVar3;
          *(undefined8 *)(lVar4 + 0x38) = 0;
          *(undefined4 *)(lVar4 + 0x40) = 0;
          *(undefined4 *)(lVar4 + 0x44) = 0xffffffff;
          FUN_1803fbe60(param_1);
        }
      }
    }
  }
  return;
}



/* ===== 18022d5e0 FUN_18022d5e0 ===== */

void FUN_18022d5e0(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f2ab0);
  if (iVar1 != 0) {
LAB_18022d741:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f2afc == 0x7fffffff) {
    DAT_1809f2afc = 0x7ffffffe;
  }
  else {
    if (DAT_180cf8d38 != DAT_180cf8d40) {
      DAT_180cf8d40 = DAT_180cf8d38;
    }
    FUN_1804e4e90(&DAT_1809f2ab0);
    FUN_18000f330();
    iVar1 = FUN_1804e4d70(&DAT_1809f29b0);
    if (iVar1 != 0) goto LAB_18022d741;
    if (DAT_1809f29fc == 0x7fffffff) {
      DAT_1809f29fc = 0x7ffffffe;
    }
    else {
      if (DAT_180cecbc8 != DAT_180cecbd0) {
        DAT_180cecbd0 = DAT_180cecbc8;
      }
      if (DAT_180cecbe0 != DAT_180cecbe8) {
        DAT_180cecbe8 = DAT_180cecbe0;
      }
      if (DAT_180cecbf8 != DAT_180cecc00) {
        DAT_180cecc00 = DAT_180cecbf8;
      }
      FUN_1804e4e90(&DAT_1809f29b0);
      if (DAT_180ca39e0 != DAT_180ca39e8) {
        DAT_180ca39e8 = DAT_180ca39e0;
      }
      if (DAT_180ca1c20 != DAT_180ca1c28) {
        DAT_180ca1c28 = DAT_180ca1c20;
      }
      iVar1 = FUN_1804e4d70(&DAT_1809624a0);
      if (iVar1 != 0) goto LAB_18022d741;
      if (DAT_1809624ec != 0x7fffffff) {
        if (DAT_180ca39f8 != DAT_180ca3a00) {
          DAT_180ca3a00 = DAT_180ca39f8;
        }
        FUN_1804e4e90(&DAT_1809624a0);
        return;
      }
      DAT_1809624ec = 0x7ffffffe;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(6);
}



/* ===== 18022d750 FUN_18022d750 ===== */

void FUN_18022d750(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  puVar5 = auStack_48;
  lVar2 = -0x71c71c71c71c71c7;
  lVar7 = DAT_180cecc50 - DAT_180cecc40 >> 2;
  uVar8 = lVar7 * -0x71c71c71c71c71c7;
  lVar3 = DAT_180cecc40;
  uVar6 = param_3;
  if (param_3 <= uVar8) {
LAB_18022d880:
    uVar8 = (DAT_180cecc48 - lVar3 >> 2) * lVar2;
    if (uVar8 < param_3) {
      *(undefined8 *)(puVar5 + 0x50) = unaff_RSI;
      *(undefined8 *)(puVar5 + -8) = 0x18022d8b0;
      FUN_180540530();
      lVar2 = DAT_180cecc48;
      lVar3 = (param_3 - uVar8) * 0x24;
      *(undefined8 *)(puVar5 + -8) = 0x18022d8d5;
      FUN_180540530(DAT_180cecc48,uVar8 * 0x24 + param_2,lVar3);
      DAT_180cecc48 = lVar3 + lVar2;
      return;
    }
    *(undefined8 *)(puVar5 + -8) = 0x18022d904;
    FUN_180540530();
    DAT_180cecc48 = uVar6 * 0x24 + lVar3;
    return;
  }
  if (0x71c71c71c71c71c < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  if (0x71c71c71c71c71c - (uVar8 >> 1) < uVar8) {
    uVar8 = 0x71c71c71c71c71c;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    if (uVar8 < param_3) {
      uVar8 = param_3;
    }
  }
  if (DAT_180cecc40 != 0) {
    uVar4 = lVar7 * 4;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(DAT_180cecc40 + -8);
      if (0x1f < (DAT_180cecc40 - lVar3) - 8U) {
        lVar3 = 5;
        pcVar1 = (code *)swi(0x29);
        lVar2 = (*pcVar1)();
        puVar5 = auStack_40;
        goto LAB_18022d880;
      }
      uVar4 = uVar4 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar3,uVar4);
    DAT_180cecc50 = 0;
    DAT_180cecc40 = 0;
    DAT_180cecc48 = 0;
  }
  if (0x71c71c71c71c71c < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_18000d840();
  }
  lVar3 = FUN_18000fb70(uVar8 * 0x24);
  DAT_180cecc50 = uVar8 * 0x24 + lVar3;
  DAT_180cecc40 = lVar3;
  DAT_180cecc48 = lVar3;
  FUN_180540530(lVar3,param_2,param_3 * 0x24);
  DAT_180cecc48 = param_3 * 0x24 + lVar3;
  return;
}



/* ===== 18022d930 FUN_18022d930 ===== */

longlong FUN_18022d930(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  
  lVar3 = DAT_180cf8d38;
  uVar14 = 0x71c71c71c71c71c;
  lVar8 = (DAT_180cf8d40 - DAT_180cf8d38 >> 2) * -0x71c71c71c71c71c7;
  if (lVar8 == 0x71c71c71c71c71c) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar8 + 1;
  uVar9 = (DAT_180cf8d48 - DAT_180cf8d38 >> 2) * -0x71c71c71c71c71c7;
  if (uVar9 <= 0x71c71c71c71c71c - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar1;
    if (uVar1 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0x71c71c71c71c71c < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar8 = FUN_18000fb70(uVar14 * 0x24);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  lVar3 = (param_2 - lVar3) / 0x24;
  puVar2 = (undefined4 *)(lVar8 + lVar3 * 0x24);
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  lVar3 = lVar8 + lVar3 * 0x24;
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(lVar3 + 0x10) = param_3[4];
  *(undefined4 *)(lVar3 + 0x14) = uVar5;
  *(undefined4 *)(lVar3 + 0x18) = uVar6;
  *(undefined4 *)(lVar3 + 0x1c) = uVar7;
  *(undefined4 *)(lVar3 + 0x20) = param_3[8];
  if (param_2 == DAT_180cf8d40) {
    lVar13 = DAT_180cf8d40 - DAT_180cf8d38;
    lVar10 = lVar8;
    param_2 = DAT_180cf8d38;
  }
  else {
    FUN_180540530(lVar8,DAT_180cf8d38,param_2 - DAT_180cf8d38);
    lVar10 = lVar3 + 0x24;
    lVar13 = DAT_180cf8d40 - param_2;
  }
  puVar11 = auStack_38;
  puVar12 = auStack_38;
  FUN_180540530(lVar10,param_2,lVar13);
  if (DAT_180cf8d38 == 0) goto LAB_18022dab9;
  lVar10 = DAT_180cf8d38;
  if ((ulonglong)((DAT_180cf8d48 - DAT_180cf8d38 >> 2) * 4) < 0x1000) {
LAB_18022daae:
    puVar12 = puVar11;
  }
  else {
    lVar10 = *(longlong *)(DAT_180cf8d38 + -8);
    if (0x1f < (DAT_180cf8d38 - lVar10) - 8U) {
      lVar10 = 5;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar11 = auStack_30;
      goto LAB_18022daae;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x18022dab9;
  thunk_FUN_1803d64e0(lVar10);
LAB_18022dab9:
  DAT_180cf8d38 = lVar8;
  DAT_180cf8d40 = lVar8 + uVar1 * 0x24;
  DAT_180cf8d48 = uVar14 * 0x24 + lVar8;
  return lVar3;
}



/* ===== 18022db10 FUN_18022db10 ===== */

void FUN_18022db10(void)

{
  longlong *plVar1;
  
  plVar1 = &DAT_180cf8d78;
  do {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 1;
  } while (plVar1 != &DAT_180cf8da0);
  plVar1 = &DAT_180cf8e00;
  do {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 1;
  } while (plVar1 != &DAT_180cf8e28);
  plVar1 = &DAT_180cf8dc0;
  do {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
      *plVar1 = 0;
    }
    plVar1 = plVar1 + 1;
  } while (plVar1 != &DAT_180cf8de8);
  DAT_180cf8d58 = 0;
  DAT_180cf8d68 = 0;
  return;
}



/* ===== 18022dbc0 FUN_18022dbc0 ===== */

void FUN_18022dbc0(void)

{
  if (DAT_180cf8df0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8df0 + 0x10))();
    DAT_180cf8df0 = (longlong *)0x0;
  }
  if (DAT_180cf8da8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8da8 + 0x10))();
    DAT_180cf8da8 = (longlong *)0x0;
  }
  if (DAT_180cf8e70 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e70 + 0x10))();
    DAT_180cf8e70 = (longlong *)0x0;
  }
  DAT_180cf8e68 = 0;
  return;
}



/* ===== 18022dc20 FUN_18022dc20 ===== */

void FUN_18022dc20(void)

{
  FUN_18022db10();
  FUN_18022dbc0();
  if (DAT_180cf8df8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8df8 + 0x10))();
    DAT_180cf8df8 = (longlong *)0x0;
  }
  if (DAT_180cf8d70 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8d70 + 0x10))();
    DAT_180cf8d70 = (longlong *)0x0;
  }
  if (DAT_180cf8e40 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e40 + 0x10))();
    DAT_180cf8e40 = (longlong *)0x0;
  }
  if (DAT_180cf8de8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8de8 + 0x10))();
    DAT_180cf8de8 = (longlong *)0x0;
  }
  if (DAT_180cf8d50 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8d50 + 0x10))();
    DAT_180cf8d50 = (longlong *)0x0;
  }
  if (DAT_180cf8e50 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e50 + 0x10))();
    DAT_180cf8e50 = (longlong *)0x0;
  }
  if (DAT_180cf8e78 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e78 + 0x10))();
    DAT_180cf8e78 = (longlong *)0x0;
  }
  if (DAT_180cf8db0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8db0 + 0x10))();
    DAT_180cf8db0 = (longlong *)0x0;
  }
  if (DAT_180cf8d60 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8d60 + 0x10))();
    DAT_180cf8d60 = (longlong *)0x0;
  }
  if (DAT_180cf8e58 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e58 + 0x10))();
    DAT_180cf8e58 = (longlong *)0x0;
  }
  if (DAT_180cf8da0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8da0 + 0x10))();
    DAT_180cf8da0 = (longlong *)0x0;
  }
  if (DAT_180cf8e38 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e38 + 0x10))();
    DAT_180cf8e38 = (longlong *)0x0;
  }
  if (DAT_180cf8e30 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e30 + 0x10))();
    DAT_180cf8e30 = (longlong *)0x0;
  }
  if (DAT_180cf8e60 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e60 + 0x10))();
    DAT_180cf8e60 = (longlong *)0x0;
  }
  if (DAT_180cf8db8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8db8 + 0x10))();
    DAT_180cf8db8 = (longlong *)0x0;
  }
  if (DAT_180cf8e28 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e28 + 0x10))();
    DAT_180cf8e28 = (longlong *)0x0;
  }
  DAT_180ccf6e7 = 0;
  DAT_180cf8e48 = 0;
  return;
}



/* ===== 18022dde0 FUN_18022dde0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18022dde0(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  if ((DAT_180ccf6e7 != '\0') && (DAT_180cf8e48 == param_1)) {
    return 1;
  }
  if ((DAT_180ccf788 != '\0') || (param_1 == (longlong *)0x0)) {
    return 0;
  }
  FUN_18022dc20();
  local_1a8 = &DAT_180cf8e28;
  iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_18070ca60,0x5c08,0);
  if (-1 < iVar1) {
    local_1a8 = &DAT_180cf8db8;
    iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_180712670,0x1bcc,0);
    if (-1 < iVar1) {
      local_1a8 = &DAT_180cf8e60;
      iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_180714e40,0x1db4,0);
      if (-1 < iVar1) {
        local_1a8 = &DAT_180cf8e30;
        iVar1 = (**(code **)(*param_1 + 0x90))(param_1,&DAT_180719580,94000,0);
        if (-1 < iVar1) {
          local_1a8 = &DAT_180cf8e38;
          iVar1 = (**(code **)(*param_1 + 0x90))(param_1,&DAT_180716ee0,0x2698,0);
          if (-1 < iVar1) {
            local_1a8 = &DAT_180cf8da0;
            iVar1 = (**(code **)(*param_1 + 0x60))(param_1,&DAT_180714240,0xc00,0);
            if (-1 < iVar1) {
              local_1a8 = &DAT_180cf8e58;
              iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_180716c00,0x2d4,0);
              if (-1 < iVar1) {
                local_180 = 0xc0d0;
                local_170 = 0;
                local_17c = 2;
                local_178 = 4;
                local_174 = 0x10000;
                iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_180,0,&DAT_180cf8d60);
                if ((-1 < iVar1) && (DAT_180cf8d60 != 0)) {
                  local_190 = 0x88;
                  local_198 = 0x8000;
                  local_188 = 0x40;
                  local_184 = 0x20;
                  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_198,0,&DAT_180cf8db0);
                  if ((-1 < iVar1) &&
                     ((((DAT_180cf8db0 != 0 &&
                        (iVar1 = (**(code **)(*param_1 + 0x38))
                                           (param_1,DAT_180cf8db0,0,&DAT_180cf8e50), -1 < iVar1)) &&
                       (DAT_180cf8e50 != 0)) &&
                      ((iVar1 = (**(code **)(*param_1 + 0x40))
                                          (param_1,DAT_180cf8db0,0,&DAT_180cf8de8), -1 < iVar1 &&
                       (DAT_180cf8de8 != 0)))))) {
                    local_190 = 0x88;
                    local_198 = 0x1000;
                    local_188 = 0x40;
                    local_184 = 4;
                    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_198,0,&DAT_180cf8e78);
                    if ((-1 < iVar1) &&
                       (((DAT_180cf8e78 != 0 &&
                         (iVar1 = (**(code **)(*param_1 + 0x38))
                                            (param_1,DAT_180cf8e78,0,&DAT_180cf8d50), -1 < iVar1))
                        && ((DAT_180cf8d50 != 0 &&
                            ((iVar1 = (**(code **)(*param_1 + 0x40))
                                                (param_1,DAT_180cf8e78,0,&DAT_180cf8e40), -1 < iVar1
                             && (DAT_180cf8e40 != 0)))))))) {
                      local_168 = 0x14;
                      local_15c = 3;
                      local_160 = 3;
                      local_164 = 3;
                      local_158 = 0;
                      uStack_150 = 0;
                      local_138 = 0x7f7fffff;
                      local_148 = 0;
                      uStack_140 = 0;
                      iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,&local_168,&DAT_180cf8d70);
                      if ((iVar1 < 0) || (DAT_180cf8d70 == 0)) {
                        local_158 = CONCAT44(1,(undefined4)local_158);
                        uStack_150 = CONCAT44(uStack_150._4_4_,1);
                        iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,&local_168,&DAT_180cf8d70);
                        if ((iVar1 < 0) || (DAT_180cf8d70 == 0)) goto LAB_18022e25e;
                      }
                      FUN_180540170(local_128,0,0x108);
                      local_11c = 2;
                      local_118 = _DAT_1808ad600;
                      uStack_110 = _UNK_1808ad608;
                      local_108 = 1;
                      local_104 = 0xf;
                      iVar1 = (**(code **)(*param_1 + 0xa0))(param_1,local_128,&DAT_180cf8df8);
                      if ((-1 < iVar1) && (DAT_180cf8df8 != 0)) {
                        DAT_180ccf6e7 = 1;
                        DAT_180cf8e48 = param_1;
                        return 1;
                      }
                    }
                  }
                }
                goto LAB_18022e25e;
              }
            }
          }
        }
      }
    }
  }
  FUN_1802b2560("[error] impacts | neverlose shaders rejected by the device");
LAB_18022e25e:
  FUN_18022dc20();
  DAT_180ccf788 = 1;
  FUN_1802b2560("[error] impacts | D3D resources");
  return 0;
}



/* ===== 18022e280 FUN_18022e280 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18022e280(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  longlong local_b8 [16];
  
  local_b8[0xf] = DAT_180919500 ^ (ulonglong)auStack_108;
  if (((param_2 == DAT_180cf8d68) && (param_3 == DAT_180cf8d58)) && (DAT_180cf8dc0 != 0)) {
    uVar4 = 1;
  }
  else {
    local_d4 = 1;
    local_b8[0xe] = 0;
    uVar5 = 0;
    local_b8[9] = 0;
    local_b8[4] = 0;
    bVar2 = true;
    local_c4 = 0;
    local_e0 = 1;
    local_dc = 1;
    local_d8 = 10;
    local_cc = 0;
    local_c8 = 0x28;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_b8[0xc] = 0;
    local_b8[0xd] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_e8 = param_2;
    local_e4 = param_3;
    do {
      if (!bVar2) goto LAB_18022e4a1;
      plVar1 = local_b8 + (ulonglong)uVar5 + 10;
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1,&local_e8,0,plVar1);
      if ((iVar3 < 0) || (*plVar1 == 0)) {
LAB_18022e3d0:
        bVar2 = false;
      }
      else {
        iVar3 = (**(code **)(*param_1 + 0x48))(param_1,*plVar1,0,local_b8 + (ulonglong)uVar5 + 5);
        if ((iVar3 < 0) || (local_b8[(ulonglong)uVar5 + 5] == 0)) goto LAB_18022e3d0;
        iVar3 = (**(code **)(*param_1 + 0x38))(param_1,*plVar1,0,local_b8 + uVar5);
        if ((iVar3 < 0) || (local_b8[uVar5] == 0)) goto LAB_18022e3d0;
        bVar2 = true;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 5);
    if (bVar2) {
      FUN_18022db10();
      DAT_180cf8dc0 = local_b8[10];
      DAT_180cf8e00 = local_b8[5];
      DAT_180cf8d78 = local_b8[0];
      DAT_180cf8dc8 = local_b8[0xb];
      DAT_180cf8e08 = local_b8[6];
      DAT_180cf8d80 = local_b8[1];
      _DAT_180cf8dd0 = local_b8[0xc];
      DAT_180cf8e10 = local_b8[7];
      DAT_180cf8d88 = local_b8[2];
      _DAT_180cf8dd8 = local_b8[0xd];
      DAT_180cf8e18 = local_b8[8];
      _DAT_180cf8d90 = local_b8[3];
      _DAT_180cf8de0 = local_b8[0xe];
      DAT_180cf8e20 = local_b8[9];
      _DAT_180cf8d98 = local_b8[4];
      uVar4 = 1;
      DAT_180cf8d58 = param_3;
      DAT_180cf8d68 = param_2;
    }
    else {
LAB_18022e4a1:
      lVar6 = 0;
      do {
        if ((longlong *)local_b8[lVar6] != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_b8[lVar6] + 0x10))();
          local_b8[lVar6] = 0;
        }
        if ((longlong *)local_b8[lVar6 + 5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_b8[lVar6 + 5] + 0x10))();
          local_b8[lVar6 + 5] = 0;
        }
        if ((longlong *)local_b8[lVar6 + 10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_b8[lVar6 + 10] + 0x10))();
          local_b8[lVar6 + 10] = 0;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 5);
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* ===== 18022e530 FUN_18022e530 ===== */

undefined8 * FUN_18022e530(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
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
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x10;
  FUN_180540170(param_1 + 0x22,0,0x180);
  *(undefined4 *)(param_1 + 0x52) = 0x10;
  FUN_180540170((longlong)param_1 + 0x294,0,0x100);
  (**(code **)(*(longlong *)*param_1 + 0x298))((longlong *)*param_1,param_1 + 1);
  (**(code **)(*(longlong *)*param_1 + 0x270))((longlong *)*param_1,param_1 + 2);
  (**(code **)(*(longlong *)*param_1 + 0x260))((longlong *)*param_1,param_1 + 3,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x310))((longlong *)*param_1,param_1 + 4,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x330))((longlong *)*param_1,param_1 + 5,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x290))((longlong *)*param_1,param_1 + 6,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x250))((longlong *)*param_1,param_1 + 7,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x358))((longlong *)*param_1,param_1 + 8,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x240))((longlong *)*param_1,0,1,param_1 + 9);
  (**(code **)(*(longlong *)*param_1 + 0x268))((longlong *)*param_1,0,1,param_1 + 10);
  (**(code **)(*(longlong *)*param_1 + 0x368))((longlong *)*param_1,0,1,param_1 + 0xb);
  (**(code **)(*(longlong *)*param_1 + 0x2a0))((longlong *)*param_1,0,1,param_1 + 0xc);
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,0,4,param_1 + 0xd);
  (**(code **)(*(longlong *)*param_1 + 0x348))((longlong *)*param_1,0,1,param_1 + 0x11);
  (**(code **)(*(longlong *)*param_1 + 0x350))((longlong *)*param_1,0,2,param_1 + 0x12);
  (**(code **)(*(longlong *)*param_1 + 600))((longlong *)*param_1,0,1,param_1 + 0x14);
  (**(code **)(*(longlong *)*param_1 + 0x2c8))((longlong *)*param_1,8,param_1 + 0x15,param_1 + 0x1d)
  ;
  (**(code **)(*(longlong *)*param_1 + 0x2d8))
            ((longlong *)*param_1,param_1 + 0x1e,param_1 + 0x1f,param_1 + 0x21);
  (**(code **)(*(longlong *)*param_1 + 0x2f8))
            ((longlong *)*param_1,(longlong)param_1 + 0x10c,param_1 + 0x22);
  (**(code **)(*(longlong *)*param_1 + 0x300))
            ((longlong *)*param_1,param_1 + 0x52,(longlong)param_1 + 0x294);
  return param_1;
}



/* ===== 18022e830 FUN_18022e830 ===== */

void FUN_18022e830(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*(longlong *)*param_1 + 0x220))((longlong *)*param_1,0,2,&local_58,0);
  plVar5 = param_1 + 0x15;
  plVar2 = param_1 + 0x1d;
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,8,plVar5,*plVar2);
  (**(code **)(*(longlong *)*param_1 + 0x118))
            ((longlong *)*param_1,param_1[0x1e],param_1 + 0x1f,(int)param_1[0x21]);
  (**(code **)(*(longlong *)*param_1 + 0x160))
            ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0x10c),param_1 + 0x22);
  (**(code **)(*(longlong *)*param_1 + 0x168))
            ((longlong *)*param_1,(int)param_1[0x52],(longlong)param_1 + 0x294);
  (**(code **)(*(longlong *)*param_1 + 0xc0))((longlong *)*param_1,(int)param_1[1]);
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,param_1[2]);
  (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,param_1[3],0,0);
  plVar1 = param_1 + 4;
  (**(code **)(*(longlong *)*param_1 + 0x1e0))((longlong *)*param_1,*plVar1,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x200))((longlong *)*param_1,param_1[5],0,0);
  (**(code **)(*(longlong *)*param_1 + 0xb8))((longlong *)*param_1,param_1[6],0,0);
  (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_1[7],0,0);
  (**(code **)(*(longlong *)*param_1 + 0x228))((longlong *)*param_1,param_1[8],0,0);
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,0,1,param_1 + 9);
  (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,0,1,param_1 + 10);
  (**(code **)(*(longlong *)*param_1 + 0x238))((longlong *)*param_1,0,1,param_1 + 0xb);
  (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0,1,param_1 + 0xc);
  plVar6 = param_1 + 0xd;
  (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,0,4,plVar6);
  plVar3 = param_1 + 0x11;
  (**(code **)(*(longlong *)*param_1 + 0x218))((longlong *)*param_1,0,1,plVar3);
  plVar7 = param_1 + 0x12;
  (**(code **)(*(longlong *)*param_1 + 0x220))((longlong *)*param_1,0,2,plVar7,0);
  plVar4 = param_1 + 0x14;
  (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,0,1,plVar4);
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
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
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
    param_1[8] = 0;
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
  if (param_1 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x10))();
        *plVar6 = 0;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
  }
  if ((longlong *)*plVar3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar3 + 0x10))();
    *plVar3 = 0;
  }
  if (param_1 != param_1 + 2) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x10))();
        *plVar7 = 0;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar4);
  }
  if ((longlong *)*plVar4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar4 + 0x10))();
    *plVar4 = 0;
  }
  if (param_1 != param_1 + 8) {
    do {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x10))();
        *plVar5 = 0;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
  }
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar2 + 0x10))();
    *plVar2 = 0;
  }
  if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1e] + 0x10))();
    param_1[0x1e] = 0;
  }
  return;
}



/* ===== 18022ec30 FUN_18022ec30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022ec30(undefined8 param_1,float *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  char cVar18;
  int iVar19;
  float *pfVar20;
  char *pcVar21;
  float *pfVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_708 [32];
  undefined8 local_6e8;
  undefined8 **local_6e0;
  longlong *local_6d8;
  float local_6d0;
  longlong *local_6c8;
  longlong *local_6c0;
  undefined8 *local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined1 local_538 [168];
  undefined1 local_490 [64];
  undefined8 local_450;
  undefined8 local_448;
  undefined1 local_440 [16];
  undefined4 local_430;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188 [6];
  undefined8 local_170;
  float local_168;
  float local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  plVar17 = DAT_1811079f8;
  plVar16 = DAT_1811079e0;
  if (param_2 != (float *)0x0) {
    local_f8 = DAT_180919500 ^ (ulonglong)auStack_708;
    puVar1 = *(undefined8 **)(param_2 + 0xe);
    if ((puVar1 != (undefined8 *)0x0) && (0xcf < (int)param_2[0x10])) {
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar8 = puVar1[4];
      uVar9 = puVar1[5];
      uVar10 = puVar1[6];
      uVar11 = puVar1[7];
      uVar12 = puVar1[8];
      uVar13 = puVar1[9];
      uVar14 = puVar1[10];
      uVar15 = puVar1[0xb];
      local_658 = puVar1[0xc];
      uStack_650 = puVar1[0xd];
      local_648 = puVar1[0xe];
      uStack_640 = puVar1[0xf];
      fVar29 = *(float *)(puVar1 + 0x10);
      fVar30 = *(float *)((longlong)puVar1 + 0x84);
      uVar2 = *(undefined4 *)(puVar1 + 0x11);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x8c);
      local_638 = puVar1[0x12];
      uStack_630 = puVar1[0x13];
      local_628 = puVar1[0x14];
      uStack_620 = puVar1[0x15];
      local_618 = puVar1[0x16];
      uStack_610 = puVar1[0x17];
      local_548 = puVar1[0x18];
      uStack_540 = puVar1[0x19];
      local_6d8 = (longlong *)CONCAT44(local_6d8._4_4_,fVar29);
      if ((((*(uint *)(puVar1 + 0x11) - 1 < 0x400) &&
           (((lVar24 = (ulonglong)*(uint *)(puVar1 + 0x11) * 0x30,
             lVar24 + 0xd0U <= (ulonglong)(longlong)(int)param_2[0x10] &&
             (((uint)fVar29 & 0x7f800000) != 0x7f800000)) && (0.0 < fVar29)))) &&
          (((((uint)fVar30 & 0x7f800000) != 0x7f800000 && (0.0 < fVar30)) &&
           (fVar29 <= DAT_1808acc90)))) &&
         (((fVar30 <= DAT_1808acc90 && (DAT_1811079f8 != (longlong *)0x0)) &&
          (local_6d0 = fVar30, cVar18 = FUN_18022dde0(DAT_1811079e0), cVar18 != '\0')))) {
        fVar26 = (float)FUN_18053ef70();
        fVar27 = (float)FUN_18053ef70();
        cVar18 = FUN_18022e280(plVar16,(longlong)fVar26 & 0xffffffff,(longlong)fVar27 & 0xffffffff);
        if (cVar18 != '\0') {
          uVar23 = (int)(longlong)fVar26 + 0x1fU >> 5;
          local_6d0 = (float)((int)(longlong)fVar27 + 0x1fU >> 5);
          uVar25 = (int)local_6d0 * uVar23;
          if (DAT_180cf8e68 < uVar25) {
            if (0x7ff00 < uVar25) {
              return;
            }
            local_6c0 = (longlong *)0x0;
            local_6c8 = (longlong *)0x0;
            local_6d8 = (longlong *)0x0;
            local_188[2] = 0x88;
            local_188[3] = 0;
            local_188[0] = uVar25 * 0x2004;
            local_188[1] = 0;
            local_188[4] = 0x40;
            local_188[5] = 4;
            iVar19 = (**(code **)(*plVar16 + 0x18))(plVar16,local_188,0,&local_6c0);
            if (((((iVar19 < 0) || (local_6c0 == (longlong *)0x0)) ||
                 (iVar19 = (**(code **)(*plVar16 + 0x38))(plVar16,local_6c0,0,&local_6c8),
                 iVar19 < 0)) ||
                ((local_6c8 == (longlong *)0x0 ||
                 (iVar19 = (**(code **)(*plVar16 + 0x40))(plVar16,local_6c0,0,&local_6d8),
                 iVar19 < 0)))) || (local_6d8 == (longlong *)0x0)) {
              if (local_6d8 != (longlong *)0x0) {
                (**(code **)(*local_6d8 + 0x10))();
                local_6d8 = (longlong *)0x0;
              }
              if (local_6c8 != (longlong *)0x0) {
                (**(code **)(*local_6c8 + 0x10))();
                local_6c8 = (longlong *)0x0;
              }
              if (local_6c0 == (longlong *)0x0) {
                return;
              }
              (**(code **)(*local_6c0 + 0x10))();
              return;
            }
            FUN_18022dbc0();
            DAT_180cf8e70 = local_6c0;
            DAT_180cf8da8 = local_6c8;
            DAT_180cf8df0 = local_6d8;
            DAT_180cf8e68 = uVar25;
          }
          local_6b8 = (undefined8 *)0x0;
          uStack_6b0 = 0;
          local_6e0 = &local_6b8;
          local_6e8 = (ulonglong)local_6e8._4_4_ << 0x20;
          iVar19 = (**(code **)(*plVar17 + 0x70))(plVar17,DAT_180cf8d60,0,4);
          if (-1 < iVar19) {
            local_548 = CONCAT44(1,(undefined4)local_548);
            uStack_540 = CONCAT44(uVar25,uVar23);
            *local_6b8 = uVar4;
            local_6b8[1] = uVar5;
            local_6b8[2] = uVar6;
            local_6b8[3] = uVar7;
            local_6b8[4] = uVar8;
            local_6b8[5] = uVar9;
            local_6b8[6] = uVar10;
            local_6b8[7] = uVar11;
            local_6b8[8] = uVar12;
            local_6b8[9] = uVar13;
            local_6b8[10] = uVar14;
            local_6b8[0xb] = uVar15;
            local_6b8[0xc] = local_658;
            local_6b8[0xd] = uStack_650;
            local_6b8[0xe] = local_648;
            local_6b8[0xf] = uStack_640;
            *(float *)(local_6b8 + 0x10) = fVar29;
            *(float *)((longlong)local_6b8 + 0x84) = fVar30;
            *(undefined4 *)(local_6b8 + 0x11) = uVar2;
            *(undefined4 *)((longlong)local_6b8 + 0x8c) = uVar3;
            local_6b8[0x12] = local_638;
            local_6b8[0x13] = uStack_630;
            *(undefined4 *)(local_6b8 + 0x14) = (undefined4)local_628;
            *(undefined4 *)((longlong)local_6b8 + 0xa4) = local_628._4_4_;
            *(undefined4 *)(local_6b8 + 0x15) = (undefined4)uStack_620;
            *(undefined4 *)((longlong)local_6b8 + 0xac) = uStack_620._4_4_;
            local_6b8[0x16] = local_618;
            local_6b8[0x17] = uStack_610;
            local_6b8[0x18] = local_548;
            local_6b8[0x19] = uStack_540;
            FUN_180540530(local_6b8 + 0x1a,puVar1 + 0x1a,lVar24);
            (**(code **)(*plVar17 + 0x78))(plVar17,DAT_180cf8d60,0);
            FUN_18022e530(local_538,plVar17);
            local_118 = 0;
            uStack_110 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_698 = 0;
            uStack_690 = 0;
            (**(code **)(*plVar17 + 200))(plVar17,0,1,&local_118);
            (**(code **)(*plVar17 + 0x40))(plVar17,0,4,&local_118);
            (**(code **)(*plVar17 + 0x238))(plVar17,0,1,&DAT_180cf8d60);
            (**(code **)(*plVar17 + 0x228))(plVar17,DAT_180cf8e30,0,0);
            local_6a8 = DAT_180cf8de8;
            local_6a0 = DAT_180cf8e40;
            local_6e8 = 0;
            (**(code **)(*plVar17 + 0x220))(plVar17,0,2,&local_6a8);
            (**(code **)(*plVar17 + 0x148))(plVar17,1,1,1);
            local_6e8 = 0;
            (**(code **)(*plVar17 + 0x220))(plVar17,0,2,&local_698);
            (**(code **)(*plVar17 + 0x218))(plVar17,0,1,&DAT_180cf8e50);
            (**(code **)(*plVar17 + 0x228))(plVar17,DAT_180cf8e38,0,0);
            local_6e8 = 0;
            (**(code **)(*plVar17 + 0x220))(plVar17,0,1,&DAT_180cf8df0);
            (**(code **)(*plVar17 + 0x148))(plVar17,uVar23,local_6d0,1);
            local_6e8 = 0;
            (**(code **)(*plVar17 + 0x220))(plVar17,0,1,&local_698);
            (**(code **)(*plVar17 + 0x218))(plVar17,0,1,&local_118);
            (**(code **)(*plVar17 + 0x1e0))(plVar17,0,0,0);
            (**(code **)(*plVar17 + 0x200))(plVar17,0,0,0);
            (**(code **)(*plVar17 + 0xb8))(plVar17,0,0,0);
            (**(code **)(*plVar17 + 0x88))(plVar17,0);
            (**(code **)(*plVar17 + 0xc0))(plVar17);
            (**(code **)(*plVar17 + 0x38))(plVar17,0,1,&DAT_180cf8d60);
            (**(code **)(*plVar17 + 200))(plVar17,0,1,&DAT_180cf8da8);
            (**(code **)(*plVar17 + 0x58))(plVar17,DAT_180cf8da0,0,0);
            local_170 = 0;
            local_160 = 0;
            local_15c = 0x3f800000;
            local_168 = fVar29;
            local_164 = fVar30;
            (**(code **)(*plVar17 + 0x160))(plVar17,1,&local_170);
            lVar24 = **(longlong **)(DAT_180ca0a50 + 0x2058);
            pcVar21 = (char *)(lVar24 + 0x60);
            cVar18 = *pcVar21;
            if (cVar18 == '\0') {
              pcVar21 = (char *)0x0;
            }
            if (pcVar21 == (char *)0x0) {
              fVar27 = 0.0;
              fVar26 = 0.0;
            }
            else {
              pfVar22 = (float *)(lVar24 + 0x80);
              pfVar20 = (float *)(lVar24 + 0x84);
              if (cVar18 == '\0') {
                pfVar22 = (float *)&DAT_00000020;
                pfVar20 = (float *)&DAT_00000024;
              }
              fVar26 = *pfVar20;
              fVar27 = *pfVar22;
            }
            fVar28 = 0.0;
            if (0.0 <= *param_2 - fVar27) {
              fVar28 = *param_2 - fVar27;
            }
            local_198 = (int)fVar28;
            fVar28 = 0.0;
            if (0.0 <= param_2[1] - fVar26) {
              fVar28 = param_2[1] - fVar26;
            }
            local_194 = (int)fVar28;
            if (param_2[2] - fVar27 <= fVar29) {
              fVar29 = param_2[2] - fVar27;
            }
            local_190 = (int)fVar29;
            if (param_2[3] - fVar26 <= fVar30) {
              fVar30 = param_2[3] - fVar26;
            }
            local_18c = (int)fVar30;
            (**(code **)(*plVar17 + 0x168))(plVar17,1,&local_198);
            (**(code **)(*plVar17 + 0x80))(plVar17,0,1,&DAT_180cf8d60);
            local_158 = 0;
            uStack_150 = 0;
            (**(code **)(*plVar17 + 0x108))(plVar17,5,&DAT_180cf8e00,0);
            (**(code **)(*plVar17 + 0x118))(plVar17,DAT_180cf8df8,&local_158,0xffffffff);
            (**(code **)(*plVar17 + 0x48))(plVar17,DAT_180cf8e58,0,0);
            local_6e8 = local_6e8 & 0xffffffff00000000;
            (**(code **)(*plVar17 + 0xa8))(plVar17,6,uVar25,0);
            local_148 = DAT_180cf8e50;
            local_140 = DAT_180cf8da8;
            local_138 = DAT_180cf8d50;
            (**(code **)(*plVar17 + 0x40))(plVar17,0,3,&local_148);
            local_130 = DAT_180cf8e00;
            local_128 = DAT_180cf8e08;
            local_120 = DAT_180cf8e18;
            (**(code **)(*plVar17 + 0x108))(plVar17,3,&local_130,0);
            (**(code **)(*plVar17 + 0x118))(plVar17,DAT_180cf8df8,&local_158,0xffffffff);
            (**(code **)(*plVar17 + 0x48))(plVar17,DAT_180cf8e28,0,0);
            local_6e8 = local_6e8 & 0xffffffff00000000;
            (**(code **)(*plVar17 + 0xa8))(plVar17,6,uVar25,0);
            local_688 = DAT_180cf8e10;
            local_680 = DAT_180cf8e20;
            (**(code **)(*plVar17 + 0x108))(plVar17,2,&local_688,0);
            local_678 = DAT_180cf8d78;
            local_670 = DAT_180cf8d80;
            (**(code **)(*plVar17 + 0x40))(plVar17,0,2,&local_678);
            (**(code **)(*plVar17 + 0x40))(plVar17,2,1,&DAT_180cf8d90);
            (**(code **)(*plVar17 + 0x50))(plVar17,0,1,&DAT_180cf8d70);
            (**(code **)(*plVar17 + 0x48))(plVar17,DAT_180cf8db8,0,0);
            local_6e8 = local_6e8 & 0xffffffff00000000;
            (**(code **)(*plVar17 + 0xa8))(plVar17,6,uVar25,0);
            (**(code **)(*plVar17 + 0x108))(plVar17,8,local_490,local_450);
            (**(code **)(*plVar17 + 0x118))(plVar17,local_448,local_440,local_430);
            local_668 = DAT_180cf8d88;
            local_660 = DAT_180cf8d80;
            (**(code **)(*plVar17 + 0x40))(plVar17,0,2,&local_668);
            (**(code **)(*plVar17 + 0x40))(plVar17,2,1,&DAT_180cf8d98);
            (**(code **)(*plVar17 + 0x48))(plVar17,DAT_180cf8e60,0,0);
            local_6e8 = local_6e8 & 0xffffffff00000000;
            (**(code **)(*plVar17 + 0xa8))(plVar17,6,uVar25,0);
            FUN_18022e830(local_538);
          }
        }
      }
    }
  }
  return;
}



/* ===== 18022f740 FUN_18022f740 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_18022f740(undefined8 param_1,float *param_2)

{
  bool bVar1;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  
  fVar64 = (((DAT_180cecc74 * DAT_180cecc88 * DAT_180cecc9c -
             DAT_180cecc8c * DAT_180cecc74 * DAT_180cecc98) -
            DAT_180cecc78 * DAT_180cecc84 * DAT_180cecc9c) +
            DAT_180cecc7c * DAT_180cecc84 * DAT_180cecc98 +
           DAT_180cecc94 * DAT_180cecc78 * DAT_180cecc8c) -
           DAT_180cecc94 * DAT_180cecc7c * DAT_180cecc88;
  fVar33 = ((((DAT_180cecc70 * DAT_180cecc8c * DAT_180cecc98 -
              DAT_180cecc70 * DAT_180cecc88 * DAT_180cecc9c) +
             DAT_180cecc80 * DAT_180cecc78 * DAT_180cecc9c) -
            DAT_180cecc80 * DAT_180cecc7c * DAT_180cecc98) -
           DAT_180cecc90 * DAT_180cecc78 * DAT_180cecc8c) +
           DAT_180cecc90 * DAT_180cecc7c * DAT_180cecc88;
  fVar74 = (((DAT_180cecc70 * DAT_180cecc84 * DAT_180cecc9c -
             DAT_180cecc70 * DAT_180cecc8c * DAT_180cecc94) -
            DAT_180cecc80 * DAT_180cecc74 * DAT_180cecc9c) +
            DAT_180cecc80 * DAT_180cecc7c * DAT_180cecc94 +
           DAT_180cecc90 * DAT_180cecc74 * DAT_180cecc8c) -
           DAT_180cecc90 * DAT_180cecc7c * DAT_180cecc84;
  fVar2 = DAT_180cecc6c * DAT_180cecc90;
  fVar44 = ((((DAT_180cecc70 * DAT_180cecc88 * DAT_180cecc94 -
              DAT_180cecc70 * DAT_180cecc84 * DAT_180cecc98) +
             DAT_180cecc80 * DAT_180cecc74 * DAT_180cecc98) -
            DAT_180cecc80 * DAT_180cecc78 * DAT_180cecc94) -
           DAT_180cecc90 * DAT_180cecc74 * DAT_180cecc88) +
           DAT_180cecc90 * DAT_180cecc78 * DAT_180cecc84;
  fVar3 = DAT_180cecc68 * DAT_180cecc90;
  fVar4 = DAT_180cecc6c * DAT_180cecc80;
  fVar5 = DAT_180cecc68 * DAT_180cecc80;
  fVar22 = DAT_180cecc64 * DAT_180cecc90;
  fVar6 = DAT_180cecc64 * DAT_180cecc80;
  fVar7 = DAT_180cecc6c * DAT_180cecc70;
  fVar54 = DAT_180cecc6c * DAT_180cecc94 * DAT_180cecc88;
  fVar73 = DAT_180cecc6c * DAT_180cecc94 * DAT_180cecc78;
  fVar8 = DAT_180cecc68 * DAT_180cecc70;
  fVar45 = DAT_180cecc68 * DAT_180cecc94 * DAT_180cecc8c;
  fVar9 = DAT_180cecc60 * DAT_180cecc78;
  fVar77 = DAT_180cecc60 * DAT_180cecc7c;
  fVar23 = DAT_180cecc68 * DAT_180cecc84 * DAT_180cecc9c;
  fVar10 = DAT_180cecc64 * DAT_180cecc70;
  fVar79 = DAT_180cecc60 * DAT_180cecc74;
  fVar34 = DAT_180cecc6c * DAT_180cecc84 * DAT_180cecc98;
  fVar78 = DAT_180cecc6c * DAT_180cecc84 * DAT_180cecc78;
  fVar11 = DAT_180cecc64 * DAT_180cecc88 * DAT_180cecc9c;
  fVar59 = DAT_180cecc64 * DAT_180cecc8c * DAT_180cecc98;
  fVar24 = DAT_180cecc68 * DAT_180cecc74 * DAT_180cecc9c;
  fVar35 = DAT_180cecc6c * DAT_180cecc74 * DAT_180cecc98;
  fVar12 = DAT_180cecc64 * DAT_180cecc7c * DAT_180cecc98;
  fVar46 = DAT_180cecc64 * DAT_180cecc78 * DAT_180cecc9c;
  fVar70 = DAT_180cecc68 * DAT_180cecc94 * DAT_180cecc7c;
  fVar75 = DAT_180cecc68 * DAT_180cecc84 * DAT_180cecc7c;
  fVar62 = DAT_180cecc64 * DAT_180cecc78 * DAT_180cecc8c;
  fVar65 = DAT_180cecc68 * DAT_180cecc74 * DAT_180cecc8c;
  fVar67 = DAT_180cecc64 * DAT_180cecc7c * DAT_180cecc88;
  fVar69 = DAT_180cecc6c * DAT_180cecc74 * DAT_180cecc88;
  fVar55 = fVar2 * DAT_180cecc88;
  fVar47 = fVar3 * DAT_180cecc8c;
  fVar36 = fVar4 * DAT_180cecc98;
  fVar13 = DAT_180cecc60 * DAT_180cecc8c * DAT_180cecc98;
  fVar60 = fVar2 * DAT_180cecc78;
  fVar66 = DAT_180cecc60 * DAT_180cecc88 * DAT_180cecc9c;
  fVar25 = fVar5 * DAT_180cecc9c;
  fVar26 = fVar8 * DAT_180cecc9c;
  fVar14 = fVar9 * DAT_180cecc9c;
  fVar48 = fVar3 * DAT_180cecc7c;
  fVar37 = fVar7 * DAT_180cecc98;
  fVar63 = fVar77 * DAT_180cecc98;
  fVar56 = fVar5 * DAT_180cecc7c;
  fVar27 = fVar8 * DAT_180cecc8c;
  fVar15 = fVar77 * DAT_180cecc88;
  fVar49 = fVar7 * DAT_180cecc88;
  fVar38 = fVar9 * DAT_180cecc8c;
  fVar61 = fVar4 * DAT_180cecc78;
  fVar71 = DAT_180cecc60 * DAT_180cecc8c * DAT_180cecc94;
  fVar57 = fVar2 * DAT_180cecc84;
  fVar2 = fVar2 * DAT_180cecc74;
  fVar16 = DAT_180cecc60 * DAT_180cecc84 * DAT_180cecc9c;
  fVar28 = fVar6 * DAT_180cecc9c;
  fVar50 = fVar22 * DAT_180cecc8c;
  fVar39 = fVar4 * DAT_180cecc94;
  fVar4 = fVar4 * DAT_180cecc74;
  fVar29 = fVar10 * DAT_180cecc9c;
  fVar51 = fVar22 * DAT_180cecc7c;
  fVar40 = fVar7 * DAT_180cecc94;
  fVar17 = fVar77 * DAT_180cecc94;
  fVar58 = fVar79 * DAT_180cecc9c;
  fVar18 = fVar79 * DAT_180cecc8c;
  fVar30 = fVar10 * DAT_180cecc8c;
  fVar41 = fVar6 * DAT_180cecc7c;
  fVar7 = fVar7 * DAT_180cecc84;
  fVar77 = fVar77 * DAT_180cecc84;
  fVar42 = fVar22 * DAT_180cecc88;
  fVar72 = fVar5 * DAT_180cecc74;
  fVar52 = fVar3 * DAT_180cecc84;
  fVar3 = fVar3 * DAT_180cecc74;
  fVar68 = DAT_180cecc60 * DAT_180cecc84 * DAT_180cecc98;
  fVar19 = fVar6 * DAT_180cecc98;
  fVar5 = fVar5 * DAT_180cecc94;
  fVar76 = DAT_180cecc60 * DAT_180cecc88 * DAT_180cecc94;
  fVar22 = fVar22 * DAT_180cecc78;
  fVar6 = fVar6 * DAT_180cecc78;
  fVar43 = fVar8 * DAT_180cecc94;
  fVar31 = fVar10 * DAT_180cecc98;
  fVar20 = fVar79 * DAT_180cecc98;
  fVar53 = fVar9 * DAT_180cecc94;
  fVar79 = fVar79 * DAT_180cecc88;
  fVar8 = fVar8 * DAT_180cecc84;
  fVar10 = fVar10 * DAT_180cecc88;
  fVar9 = fVar9 * DAT_180cecc84;
  fVar32 = DAT_180cecc64 * fVar33 + DAT_180cecc60 * fVar64 + fVar74 * DAT_180cecc68 +
           fVar44 * DAT_180cecc6c;
  bVar1 = ((uint)fVar32 & 0x7f800000) != 0x7f800000;
  if ((!bVar1) || ((float)((uint)fVar32 & _DAT_1808ade90) <= DAT_1808abf78)) {
    bVar1 = false;
  }
  else {
    fVar21 = DAT_1808ac34c / fVar32;
    *param_2 = fVar64 * fVar21;
    param_2[1] = (((((fVar59 - fVar11) + fVar23) - fVar34) - fVar45) + fVar54) * fVar21;
    param_2[2] = ((((fVar46 - fVar12) - fVar24) + fVar35 + fVar70) - fVar73) * fVar21;
    param_2[3] = (((((fVar67 - fVar62) + fVar65) - fVar69) - fVar75) + fVar78) * fVar21;
    param_2[4] = fVar33 * fVar21;
    param_2[5] = ((((fVar66 - fVar13) - fVar25) + fVar36 + fVar47) - fVar55) * fVar21;
    param_2[6] = (((((fVar63 - fVar14) + fVar26) - fVar37) - fVar48) + fVar60) * fVar21;
    param_2[7] = ((((fVar38 - fVar15) - fVar27) + fVar49 + fVar56) - fVar61) * fVar21;
    param_2[8] = fVar74 * fVar21;
    param_2[9] = (((((fVar71 - fVar16) + fVar28) - fVar39) - fVar50) + fVar57) * fVar21;
    param_2[10] = ((((fVar58 - fVar17) - fVar29) + fVar40 + fVar51) - fVar2) * fVar21;
    param_2[0xb] = (((((fVar77 - fVar18) + fVar30) - fVar7) - fVar41) + fVar4) * fVar21;
    param_2[0xc] = fVar44 * fVar21;
    param_2[0xd] = ((((fVar68 - fVar76) - fVar19) + fVar5 + fVar42) - fVar52) * fVar21;
    param_2[0xe] = (((((fVar53 - fVar20) + fVar31) - fVar43) - fVar22) + fVar3) * fVar21;
    param_2[0xf] = ((((fVar79 - fVar9) - fVar10) + fVar8 + fVar6) - fVar72) * fVar21;
  }
  return CONCAT31((int3)(((uint)fVar32 & 0x7f800000) >> 8),bVar1);
}



/* ===== 1802300e0 FUN_1802300e0 ===== */

float FUN_1802300e0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2 - *param_1;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (param_3 + DAT_1808ac154 <= fVar1) {
    return DAT_1808acda0;
  }
  param_3 = fVar1 - param_3;
  if (DAT_1808ac154 <= fVar1) {
    fVar1 = DAT_1808ac154;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  param_3 = param_3 / DAT_1808ac154;
  if (param_3 <= DAT_1808ac34c) {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    param_3 = DAT_1808ac34c - param_3;
  }
  else {
    param_3 = 0.0;
  }
  fVar1 = DAT_1808ac34c - param_3 * (fVar1 / DAT_1808ac154);
  fVar1 = DAT_1808ac34c - fVar1 * fVar1 * fVar1;
  if (*(char *)(param_1 + 6) != '\0') {
    param_2 = param_2 - param_1[5];
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if (DAT_1808ac154 <= param_2) {
      return DAT_1808acda0;
    }
    fVar2 = (param_2 / DAT_1808ac154 - DAT_1808ac34c) + DAT_1808ac34c;
    fVar2 = (DAT_1808ac34c - fVar2 * fVar2 * fVar2) * param_1[7];
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
  }
  return fVar1;
}



/* ===== 1802301d0 FUN_1802301d0 ===== */

float FUN_1802301d0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 - *param_1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = fVar2 - param_3;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = fVar2 / DAT_1808ac154;
  if (fVar2 <= DAT_1808ac34c) {
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = (fVar2 - DAT_1808ac34c) + DAT_1808ac34c;
  }
  else {
    fVar2 = DAT_1808ac34c;
  }
  fVar2 = DAT_1808ac34c - fVar2 * fVar2 * fVar2;
  if (*(char *)(param_1 + 6) != '\0') {
    param_2 = param_2 - param_1[5];
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    param_2 = param_2 / DAT_1808ac154;
    if (param_2 <= DAT_1808ac34c) {
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      fVar1 = (param_2 - DAT_1808ac34c) + DAT_1808ac34c;
    }
    else {
      fVar1 = DAT_1808ac34c;
    }
    fVar1 = (DAT_1808ac34c - fVar1 * fVar1 * fVar1) * param_1[8];
    if (fVar1 <= fVar2) {
      fVar2 = fVar1;
    }
  }
  return fVar2;
}



/* ===== 180230270 FUN_180230270 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180230270(longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5,float param_6,float param_7)

{
  undefined4 uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  uVar6 = 0;
  uVar7 = 0;
  if (param_2 != 0) {
    puVar8 = &DAT_180cecc60;
    do {
      lVar4 = param_1 + uVar7 * 0x24;
      FUN_1802300e0();
      if (0.0 < extraout_XMM0_Da) {
        if (0x3ff < uVar6) {
          return 0;
        }
        uVar3 = (ulonglong)uVar6;
        uVar6 = uVar6 + 1;
        lVar5 = uVar3 * 6;
        puVar8[uVar3 * 0xc + 0x34] = *(undefined4 *)(lVar4 + 4);
        puVar8[uVar3 * 0xc + 0x35] = *(undefined4 *)(lVar4 + 8);
        uVar1 = *(undefined4 *)(lVar4 + 0xc);
        puVar8[uVar3 * 0xc + 0x37] = extraout_XMM0_Da;
        puVar8[uVar3 * 0xc + 0x36] = uVar1;
        *(undefined8 *)(puVar8 + uVar3 * 0xc + 0x38) = 0;
        *(undefined8 *)((longlong)(puVar8 + uVar3 * 0xc + 0x38) + 8) = 0;
        puVar8[uVar3 * 0xc + 0x3c] = *(undefined4 *)(lVar4 + 0x10);
        FUN_1802301d0();
        puVar8[lVar5 * 2 + 0x3d] = extraout_XMM0_Da_00;
        *(undefined8 *)(puVar8 + lVar5 * 2 + 0x3e) = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
    if ((((uVar6 != 0) && (((uint)param_6 & 0x7f800000) != 0x7f800000)) && (0.0 < param_6)) &&
       ((((uint)param_7 & 0x7f800000) != 0x7f800000 && (0.0 < param_7)))) {
      _DAT_180cecc60 = *param_5;
      _DAT_180cecc68 = param_5[1];
      _DAT_180cecc70 = param_5[2];
      _DAT_180cecc78 = param_5[3];
      _DAT_180cecc80 = param_5[4];
      _DAT_180cecc88 = param_5[5];
      _DAT_180cecc90 = param_5[6];
      _DAT_180cecc98 = param_5[7];
      cVar2 = FUN_18022f740(puVar8,&DAT_180cecca0);
      if (cVar2 != '\0') {
        _DAT_180cecce0 = param_6;
        _DAT_180cecce4 = param_7;
        DAT_180cecce8 = uVar6;
        _DAT_180ceccec = (float)*(int *)(param_4 + 0x24) * DAT_1808ac428 * DAT_1808ac000;
        _DAT_180ceccf0 = *(undefined4 *)(param_4 + 4);
        _DAT_180ceccf4 = *(undefined4 *)(param_4 + 8);
        _DAT_180ceccf8 = *(undefined4 *)(param_4 + 0xc);
        _DAT_180ceccfc = *(undefined4 *)(param_4 + 0x10);
        _DAT_180cecd00 = *(undefined4 *)(param_4 + 0x14);
        _DAT_180cecd04 = *(undefined4 *)(param_4 + 0x18);
        _DAT_180cecd08 = *(undefined4 *)(param_4 + 0x1c);
        _DAT_180cecd0c = *(undefined4 *)(param_4 + 0x20);
        _DAT_180cecd10 = *(undefined4 *)(param_4 + 0x38);
        _DAT_180cecd14 = (float)*(int *)(param_4 + 0x28) * DAT_1808ac000;
        _DAT_180cecd18 = (float)*(int *)(param_4 + 0x2c) * DAT_1808ac000;
        _DAT_180cecd1c = (float)*(int *)(param_4 + 0x30) * DAT_1808ac000;
        _DAT_180cecd20 = (float)*(int *)(param_4 + 0x34) * DAT_1808ac000;
        _DAT_180cecd24 = 0;
        _DAT_180cecd2c = 0;
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 180230540 FUN_180230540 ===== */

void FUN_180230540(void)

{
  if (DAT_180cf8eb8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8eb8 + 0x10))();
    DAT_180cf8eb8 = (longlong *)0x0;
  }
  if (DAT_180cf8ef8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ef8 + 0x10))();
    DAT_180cf8ef8 = (longlong *)0x0;
  }
  if (DAT_180cf8ec0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ec0 + 0x10))();
    DAT_180cf8ec0 = (longlong *)0x0;
  }
  if (DAT_180cf8f48 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8f48 + 0x10))();
    DAT_180cf8f48 = (longlong *)0x0;
  }
  if (DAT_180cf8ea8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ea8 + 0x10))();
    DAT_180cf8ea8 = (longlong *)0x0;
  }
  DAT_180cf8ee0 = 0;
  return;
}



/* ===== 1802305e0 FUN_1802305e0 ===== */

void FUN_1802305e0(void)

{
  if (DAT_180cf8e90 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e90 + 0x10))();
    DAT_180cf8e90 = (longlong *)0x0;
  }
  if (DAT_180cf8f40 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8f40 + 0x10))();
    DAT_180cf8f40 = (longlong *)0x0;
  }
  if (DAT_180cf8eb0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8eb0 + 0x10))();
    DAT_180cf8eb0 = (longlong *)0x0;
  }
  DAT_180cf8f00 = 0;
  DAT_180cf8f18 = 0;
  return;
}



/* ===== 180230650 FUN_180230650 ===== */

void FUN_180230650(void)

{
  FUN_180230540();
  FUN_1802305e0();
  if (DAT_180cf8ee8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ee8 + 0x10))();
    DAT_180cf8ee8 = (longlong *)0x0;
  }
  if (DAT_180cf8e88 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e88 + 0x10))();
    DAT_180cf8e88 = (longlong *)0x0;
  }
  if (DAT_180cf8e80 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e80 + 0x10))();
    DAT_180cf8e80 = (longlong *)0x0;
  }
  if (DAT_180cf8ed8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ed8 + 0x10))();
    DAT_180cf8ed8 = (longlong *)0x0;
  }
  if (DAT_180cf8ef0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ef0 + 0x10))();
    DAT_180cf8ef0 = (longlong *)0x0;
  }
  if (DAT_180cf8e98 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8e98 + 0x10))();
    DAT_180cf8e98 = (longlong *)0x0;
  }
  if (DAT_180cf8f50 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8f50 + 0x10))();
    DAT_180cf8f50 = (longlong *)0x0;
  }
  if (DAT_180cf8f58 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8f58 + 0x10))();
    DAT_180cf8f58 = (longlong *)0x0;
  }
  if (DAT_180cf8f38 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8f38 + 0x10))();
    DAT_180cf8f38 = (longlong *)0x0;
  }
  if (DAT_180cf8ec8 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ec8 + 0x10))();
    DAT_180cf8ec8 = (longlong *)0x0;
  }
  if (DAT_180cf8f60 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8f60 + 0x10))();
    DAT_180cf8f60 = (longlong *)0x0;
  }
  if (DAT_180cf8ea0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ea0 + 0x10))();
    DAT_180cf8ea0 = (longlong *)0x0;
  }
  if (DAT_180cf8ed0 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8ed0 + 0x10))();
    DAT_180cf8ed0 = (longlong *)0x0;
  }
  if (DAT_180cf8f08 != (longlong *)0x0) {
    (**(code **)(*DAT_180cf8f08 + 0x10))();
    DAT_180cf8f08 = (longlong *)0x0;
  }
  DAT_180ccf789 = 0;
  DAT_180cf8f10 = 0;
  return;
}



/* ===== 1802307e0 FUN_1802307e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802307e0(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 local_13c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_103 [235];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_198;
  if ((DAT_180ccf789 != '\0') && (DAT_180cf8f10 == param_1)) {
    return 1;
  }
  if ((DAT_180ccf78a != '\0') || (param_1 == (longlong *)0x0)) {
    return 0;
  }
  FUN_180230650();
  local_178 = &DAT_180cf8f08;
  iVar1 = (**(code **)(*param_1 + 0x90))(param_1,&DAT_180730d70,0x54f4,0);
  if (-1 < iVar1) {
    local_178 = &DAT_180cf8ed0;
    iVar1 = (**(code **)(*param_1 + 0x60))(param_1,&DAT_180736270,0xbb0,0);
    if (-1 < iVar1) {
      local_178 = &DAT_180cf8ea0;
      iVar1 = (**(code **)(*param_1 + 0x60))(param_1,&DAT_1807391d0,0x844,0);
      if (-1 < iVar1) {
        local_178 = &DAT_180cf8f60;
        iVar1 = (**(code **)(*param_1 + 0x60))(param_1,&DAT_180736e20,0x9a0,0);
        if (-1 < iVar1) {
          local_178 = &DAT_180cf8ec8;
          iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_180738160,0x106c,0);
          if (-1 < iVar1) {
            local_178 = &DAT_180cf8f58;
            iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_1807377c0,0x994,0);
            if (-1 < iVar1) {
              local_178 = &DAT_180cf8f38;
              iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_180730ba0,0x1c4,0);
              if (-1 < iVar1) {
                local_178 = &DAT_180cf8f50;
                iVar1 = (**(code **)(*param_1 + 0x78))(param_1,&DAT_180730520,0x680,0);
                if (-1 < iVar1) {
                  uStack_158 = 0;
                  uStack_154 = 0;
                  local_168 = 0x2000000e0;
                  local_160 = 4;
                  uStack_15c = 0x10000;
                  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&local_168,0,&DAT_180cf8e98);
                  if ((-1 < iVar1) && (DAT_180cf8e98 != 0)) {
                    local_128 = 0;
                    FUN_180540170(local_103,0,0xe3);
                    local_120 = 1;
                    local_11c = 2;
                    local_118 = _DAT_1808ad660;
                    uStack_110 = _UNK_1808ad668;
                    local_108 = 5;
                    local_104 = 0xf;
                    iVar1 = (**(code **)(*param_1 + 0xa0))(param_1,&local_128,&DAT_180cf8ef0);
                    if ((iVar1 < 0) || (DAT_180cf8ef0 == 0)) {
                      local_11c = 5;
                      local_118 = 0x100000006;
                      uStack_110 = CONCAT44(6,(undefined4)uStack_110);
                      local_108 = 1;
                    }
                    else {
                      local_11c = 5;
                      local_118 = 0x100000006;
                      uStack_110 = CONCAT44(6,(undefined4)uStack_110);
                      local_108 = 1;
                      iVar1 = (**(code **)(*param_1 + 0xa0))(param_1,&local_128,&DAT_180cf8ed8);
                      if ((-1 < iVar1) && (DAT_180cf8ed8 != 0)) {
                        local_13c = 0;
                        local_168 = 0;
                        local_160 = 8;
                        uStack_15c = 0;
                        uStack_158 = 0;
                        uStack_154 = 0;
                        uStack_150 = 0;
                        local_14c = 0;
                        uStack_148 = 0;
                        uStack_144 = 0;
                        uStack_140 = 0;
                        iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,&local_168,&DAT_180cf8e80);
                        if ((-1 < iVar1) && (DAT_180cf8e80 != 0)) {
                          uStack_148 = 0;
                          uStack_144 = 0;
                          local_168 = 0x100000003;
                          local_160 = 0;
                          uStack_15c = 0;
                          uStack_158 = 0;
                          uStack_154 = 0;
                          uStack_150 = 1;
                          local_14c = 1;
                          iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,&local_168,&DAT_180cf8e88);
                          if ((-1 < iVar1) && (DAT_180cf8e88 != 0)) {
                            FUN_180540170(&local_128,0,0x108);
                            local_11c = 2;
                            local_118 = _DAT_1808ad600;
                            uStack_110 = _UNK_1808ad608;
                            local_108 = 1;
                            local_104 = 0xf;
                            iVar1 = (**(code **)(*param_1 + 0xa0))
                                              (param_1,&local_128,&DAT_180cf8ee8);
                            if ((-1 < iVar1) && (DAT_180cf8ee8 != 0)) {
                              DAT_180ccf789 = 1;
                              DAT_180cf8f10 = param_1;
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_180230c2f;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_1802b2560("[error] trajectory_gpu | neverlose shaders rejected by the device");
LAB_180230c2f:
  FUN_180230650();
  DAT_180ccf78a = 1;
  FUN_1802b2560("[error] trajectory_gpu | D3D resources");
  return 0;
}



/* ===== 180230c50 FUN_180230c50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180230c50(longlong *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  int local_88 [7];
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_e8;
  if (DAT_180cf8ee0 < param_2) {
    local_90 = (longlong *)0x0;
    local_c8 = (longlong *)0x0;
    local_b0 = (longlong *)0x0;
    uVar3 = param_2;
    if (0x400 < param_2) {
      uVar3 = 0x400;
    }
    local_b8 = (longlong *)0x0;
    uVar3 = uVar3 + param_2;
    local_c0 = (longlong *)0x0;
    local_88[2] = 8;
    local_88[3] = 0;
    local_88[1] = 0;
    local_88[4] = 0x40;
    local_88[5] = 0x24;
    local_88[0] = uVar3 * 0x24;
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_88,0,&local_90);
    if ((((iVar1 < 0) || (local_90 == (longlong *)0x0)) ||
        (iVar1 = (**(code **)(*param_1 + 0x38))(param_1,local_90,0,&local_b0), iVar1 < 0)) ||
       (local_b0 == (longlong *)0x0)) {
      local_88[0] = uVar3 * 0x80 + 0x80;
      local_88[2] = 0x88;
      local_88[5] = 0x40;
    }
    else {
      local_88[2] = 0x88;
      local_88[0] = uVar3 * 0x80 + 0x80;
      local_88[5] = 0x40;
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_88,0,&local_c8);
      if ((((-1 < iVar1) && (local_c8 != (longlong *)0x0)) &&
          ((iVar1 = (**(code **)(*param_1 + 0x38))(param_1,local_c8,0,&local_b8), -1 < iVar1 &&
           ((local_b8 != (longlong *)0x0 &&
            (iVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_c8,0,&local_c0), -1 < iVar1))))))
         && (local_c0 != (longlong *)0x0)) {
        FUN_180230540();
        DAT_180cf8ea8 = local_90;
        DAT_180cf8f48 = local_c8;
        DAT_180cf8ec0 = local_b0;
        DAT_180cf8ef8 = local_b8;
        DAT_180cf8eb8 = local_c0;
        DAT_180cf8ee0 = uVar3;
        goto LAB_180230ded;
      }
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
      local_c0 = (longlong *)0x0;
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
      local_b8 = (longlong *)0x0;
    }
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x10))();
      local_b0 = (longlong *)0x0;
    }
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
      local_c8 = (longlong *)0x0;
    }
    plVar2 = local_90;
LAB_180230f8b:
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    return 0;
  }
LAB_180230ded:
  if (((DAT_180cf8eb0 == (longlong *)0x0) || (DAT_180cf8f00 != param_3)) ||
     (DAT_180cf8f18 != param_4)) {
    local_5c = 1;
    local_4c = 0;
    local_68 = 1;
    local_64 = 1;
    local_60 = 10;
    local_54 = 0;
    local_50 = 0x28;
    local_98 = (longlong *)0x0;
    local_a0 = (longlong *)0x0;
    local_a8 = (longlong *)0x0;
    local_88[6] = param_3;
    local_6c = param_4;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,local_88 + 6,0,&local_98);
    if (((iVar1 < 0) || (local_98 == (longlong *)0x0)) ||
       (((iVar1 = (**(code **)(*param_1 + 0x48))(param_1,local_98,0,&local_a0), iVar1 < 0 ||
         ((local_a0 == (longlong *)0x0 ||
          (iVar1 = (**(code **)(*param_1 + 0x38))(param_1,local_98,0,&local_a8), iVar1 < 0)))) ||
        (local_a8 == (longlong *)0x0)))) {
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
        local_a8 = (longlong *)0x0;
      }
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x10))();
        local_a0 = (longlong *)0x0;
      }
      plVar2 = local_98;
      goto LAB_180230f8b;
    }
    FUN_1802305e0();
    DAT_180cf8eb0 = local_98;
    DAT_180cf8e90 = local_a0;
    DAT_180cf8f40 = local_a8;
    DAT_180cf8f00 = param_3;
    DAT_180cf8f18 = param_4;
  }
  return 1;
}



/* ===== 180230fc0 FUN_180230fc0 ===== */

undefined8 * FUN_180230fc0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
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
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x10;
  FUN_180540170((longlong)param_1 + 0x114,0,0x180);
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x10;
  FUN_180540170(param_1 + 0x53,0,0x100);
  (**(code **)(*(longlong *)*param_1 + 0x298))((longlong *)*param_1,param_1 + 1);
  (**(code **)(*(longlong *)*param_1 + 0x270))((longlong *)*param_1,param_1 + 2);
  (**(code **)(*(longlong *)*param_1 + 0x260))((longlong *)*param_1,param_1 + 3,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x310))((longlong *)*param_1,param_1 + 4,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x330))((longlong *)*param_1,param_1 + 5,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x290))((longlong *)*param_1,param_1 + 6,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x250))((longlong *)*param_1,param_1 + 7,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x358))((longlong *)*param_1,param_1 + 8,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x240))((longlong *)*param_1,0,1,param_1 + 9);
  (**(code **)(*(longlong *)*param_1 + 0x268))((longlong *)*param_1,0,1,param_1 + 10);
  (**(code **)(*(longlong *)*param_1 + 0x368))((longlong *)*param_1,0,1,param_1 + 0xb);
  (**(code **)(*(longlong *)*param_1 + 0x2a0))((longlong *)*param_1,0,1,param_1 + 0xc);
  (**(code **)(*(longlong *)*param_1 + 0x248))((longlong *)*param_1,0,2,param_1 + 0xd);
  (**(code **)(*(longlong *)*param_1 + 0x348))((longlong *)*param_1,0,1,param_1 + 0xf);
  (**(code **)(*(longlong *)*param_1 + 0x350))((longlong *)*param_1,0,2,param_1 + 0x10);
  (**(code **)(*(longlong *)*param_1 + 0x2c8))((longlong *)*param_1,8,param_1 + 0x12,param_1 + 0x1a)
  ;
  (**(code **)(*(longlong *)*param_1 + 0x2d8))
            ((longlong *)*param_1,param_1 + 0x1b,param_1 + 0x1c,param_1 + 0x1e);
  (**(code **)(*(longlong *)*param_1 + 0x2e0))((longlong *)*param_1,param_1 + 0x1f,param_1 + 0x20);
  (**(code **)(*(longlong *)*param_1 + 0x2f0))((longlong *)*param_1,param_1 + 0x21);
  (**(code **)(*(longlong *)*param_1 + 0x2f8))
            ((longlong *)*param_1,param_1 + 0x22,(longlong)param_1 + 0x114);
  (**(code **)(*(longlong *)*param_1 + 0x300))
            ((longlong *)*param_1,(longlong)param_1 + 0x294,param_1 + 0x53);
  return param_1;
}



/* ===== 1802312d0 FUN_1802312d0 ===== */

void FUN_1802312d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*(longlong *)*param_1 + 0x220))((longlong *)*param_1,0,2,&local_58,0);
  (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,0,2,&local_68);
  (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0,1,&local_68);
  plVar5 = param_1 + 0x12;
  plVar4 = param_1 + 0x1a;
  (**(code **)(*(longlong *)*param_1 + 0x108))((longlong *)*param_1,8,plVar5,*plVar4);
  (**(code **)(*(longlong *)*param_1 + 0x118))
            ((longlong *)*param_1,param_1[0x1b],param_1 + 0x1c,(int)param_1[0x1e]);
  (**(code **)(*(longlong *)*param_1 + 0x120))
            ((longlong *)*param_1,param_1[0x1f],(int)param_1[0x20]);
  (**(code **)(*(longlong *)*param_1 + 0x158))((longlong *)*param_1,param_1[0x21]);
  (**(code **)(*(longlong *)*param_1 + 0x160))
            ((longlong *)*param_1,(int)param_1[0x22],(longlong)param_1 + 0x114);
  (**(code **)(*(longlong *)*param_1 + 0x168))
            ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0x294),param_1 + 0x53);
  (**(code **)(*(longlong *)*param_1 + 0xc0))((longlong *)*param_1,(int)param_1[1]);
  plVar1 = param_1 + 2;
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,*plVar1);
  (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,param_1[3],0,0);
  (**(code **)(*(longlong *)*param_1 + 0x1e0))((longlong *)*param_1,param_1[4],0,0);
  (**(code **)(*(longlong *)*param_1 + 0x200))((longlong *)*param_1,param_1[5],0,0);
  (**(code **)(*(longlong *)*param_1 + 0xb8))((longlong *)*param_1,param_1[6],0,0);
  (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_1[7],0,0);
  plVar2 = param_1 + 8;
  (**(code **)(*(longlong *)*param_1 + 0x228))((longlong *)*param_1,*plVar2,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,0,1,param_1 + 9);
  (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,0,1,param_1 + 10);
  (**(code **)(*(longlong *)*param_1 + 0x238))((longlong *)*param_1,0,1,param_1 + 0xb);
  (**(code **)(*(longlong *)*param_1 + 200))((longlong *)*param_1,0,1,param_1 + 0xc);
  plVar7 = param_1 + 0xd;
  (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,0,2,plVar7);
  plVar3 = param_1 + 0xf;
  (**(code **)(*(longlong *)*param_1 + 0x218))((longlong *)*param_1,0,1,plVar3);
  plVar6 = param_1 + 0x10;
  (**(code **)(*(longlong *)*param_1 + 0x220))((longlong *)*param_1,0,2,plVar6,0);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
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
  if ((longlong *)*plVar2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar2 + 0x10))();
    *plVar2 = 0;
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
  if (param_1 != plVar1) {
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 0x10))();
        *plVar7 = 0;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar3);
  }
  if ((longlong *)*plVar3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar3 + 0x10))();
    *plVar3 = 0;
  }
  if (param_1 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x10))();
        *plVar6 = 0;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar5);
  }
  if (param_1 != plVar2) {
    do {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x10))();
        *plVar5 = 0;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar4);
  }
  if ((longlong *)*plVar4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar4 + 0x10))();
    *plVar4 = 0;
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
    param_1[0x1b] = 0;
  }
  if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1f] + 0x10))();
    param_1[0x1f] = 0;
  }
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21] + 0x10))();
    param_1[0x21] = 0;
  }
  return;
}



/* ===== 180231730 FUN_180231730 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180231730(undefined8 param_1,float *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong *plVar24;
  char cVar25;
  int iVar26;
  float *pfVar27;
  char *pcVar28;
  float *pfVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_5b8 [32];
  undefined8 local_598;
  undefined8 **local_590;
  undefined4 local_588;
  undefined8 *local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined1 local_4e8 [144];
  undefined1 local_458 [64];
  undefined8 local_418;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  plVar24 = DAT_1811079f8;
  uVar23 = DAT_1811079e0;
  if (param_2 != (float *)0x0) {
    local_f8 = DAT_180919500 ^ (ulonglong)auStack_5b8;
    puVar1 = *(undefined8 **)(param_2 + 0xe);
    if ((puVar1 != (undefined8 *)0x0) && (0xdf < (int)param_2[0x10])) {
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      uVar17 = puVar1[4];
      uVar18 = puVar1[5];
      uVar19 = puVar1[6];
      uVar20 = puVar1[7];
      fVar33 = *(float *)(puVar1 + 8);
      fVar34 = *(float *)((longlong)puVar1 + 0x44);
      uVar3 = *(undefined4 *)(puVar1 + 9);
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x4c);
      uVar21 = puVar1[10];
      uVar22 = puVar1[0xb];
      local_558 = puVar1[0xc];
      uStack_550 = puVar1[0xd];
      local_548 = puVar1[0xe];
      uStack_540 = puVar1[0xf];
      local_538 = puVar1[0x10];
      uStack_530 = puVar1[0x11];
      local_528 = puVar1[0x12];
      uStack_520 = puVar1[0x13];
      uVar5 = *(uint *)(puVar1 + 0x14);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0xa4);
      uVar7 = *(undefined4 *)(puVar1 + 0x15);
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0xac);
      local_518 = puVar1[0x16];
      uStack_510 = puVar1[0x17];
      uVar9 = *(undefined4 *)(puVar1 + 0x18);
      uVar10 = *(undefined4 *)((longlong)puVar1 + 0xc4);
      uVar11 = *(uint *)(puVar1 + 0x19);
      uVar12 = *(undefined4 *)((longlong)puVar1 + 0xcc);
      local_508 = puVar1[0x1a];
      uStack_500 = puVar1[0x1b];
      if ((((uVar5 - 1 < 0x1fffbfd) &&
           ((((ulonglong)uVar5 * 0x24 + 0xe0 <= (ulonglong)(longlong)(int)param_2[0x10] &&
             (0.0 < fVar33)) && (0.0 < fVar34)))) &&
          (((fVar33 <= DAT_1808acc90 && (fVar34 <= DAT_1808acc90)) &&
           (DAT_1811079f8 != (longlong *)0x0)))) &&
         (cVar25 = FUN_1802307e0(DAT_1811079e0), cVar25 != '\0')) {
        iVar30 = (uVar11 >> 1 & 1) + uVar5;
        fVar31 = (float)FUN_18053ef70();
        fVar32 = (float)FUN_18053ef70();
        cVar25 = FUN_180230c50(uVar23,iVar30,(longlong)fVar32,(longlong)fVar31 & 0xffffffff);
        if (cVar25 != '\0') {
          local_578 = (undefined8 *)0x0;
          uStack_570 = 0;
          local_590 = &local_578;
          local_598 = (undefined8 *)((ulonglong)local_598._4_4_ << 0x20);
          iVar26 = (**(code **)(*plVar24 + 0x70))(plVar24,DAT_180cf8e98,0,4);
          if (-1 < iVar26) {
            *local_578 = uVar13;
            local_578[1] = uVar14;
            local_578[2] = uVar15;
            local_578[3] = uVar16;
            local_578[4] = uVar17;
            local_578[5] = uVar18;
            local_578[6] = uVar19;
            local_578[7] = uVar20;
            *(float *)(local_578 + 8) = fVar33;
            *(float *)((longlong)local_578 + 0x44) = fVar34;
            *(undefined4 *)(local_578 + 9) = uVar3;
            *(undefined4 *)((longlong)local_578 + 0x4c) = uVar4;
            local_578[10] = uVar21;
            local_578[0xb] = uVar22;
            local_578[0xc] = local_558;
            local_578[0xd] = uStack_550;
            local_578[0xe] = local_548;
            local_578[0xf] = uStack_540;
            local_578[0x10] = local_538;
            local_578[0x11] = uStack_530;
            *(undefined4 *)(local_578 + 0x12) = (undefined4)local_528;
            *(undefined4 *)((longlong)local_578 + 0x94) = local_528._4_4_;
            *(undefined4 *)(local_578 + 0x13) = (undefined4)uStack_520;
            *(undefined4 *)((longlong)local_578 + 0x9c) = uStack_520._4_4_;
            *(uint *)(local_578 + 0x14) = uVar5;
            *(undefined4 *)((longlong)local_578 + 0xa4) = uVar6;
            *(undefined4 *)(local_578 + 0x15) = uVar7;
            *(undefined4 *)((longlong)local_578 + 0xac) = uVar8;
            local_578[0x16] = local_518;
            local_578[0x17] = uStack_510;
            *(undefined4 *)(local_578 + 0x18) = uVar9;
            *(undefined4 *)((longlong)local_578 + 0xc4) = uVar10;
            *(uint *)(local_578 + 0x19) = uVar11;
            *(undefined4 *)((longlong)local_578 + 0xcc) = uVar12;
            local_578[0x1a] = local_508;
            local_578[0x1b] = uStack_500;
            (**(code **)(*plVar24 + 0x78))(plVar24,DAT_180cf8e98,0);
            local_138 = 0;
            local_130 = 0;
            local_12c = (undefined4)((ulonglong)uVar5 * 0x24);
            local_128 = 1;
            local_124 = 1;
            local_598 = puVar1 + 0x1c;
            local_588 = 0;
            local_590 = (undefined8 **)((ulonglong)local_590 & 0xffffffff00000000);
            (**(code **)(*plVar24 + 0x180))(plVar24,DAT_180cf8ea8,0,&local_138);
            FUN_180230fc0(local_4e8,plVar24);
            local_568 = 0;
            uStack_560 = 0;
            local_4f8 = 0;
            uStack_4f0 = 0;
            (**(code **)(*plVar24 + 200))(plVar24,0,1,&local_568);
            (**(code **)(*plVar24 + 0x40))(plVar24,0,2,&local_568);
            (**(code **)(*plVar24 + 0x228))(plVar24,DAT_180cf8f08,0,0);
            (**(code **)(*plVar24 + 0x238))(plVar24,0,1,&DAT_180cf8e98);
            (**(code **)(*plVar24 + 0x218))(plVar24,0,1,&DAT_180cf8ec0);
            local_598 = (undefined8 *)0x0;
            (**(code **)(*plVar24 + 0x220))(plVar24,0,1,&DAT_180cf8eb8);
            (**(code **)(*plVar24 + 0x148))(plVar24,1,1,1);
            local_598 = (undefined8 *)0x0;
            (**(code **)(*plVar24 + 0x220))(plVar24,0,2,&local_4f8);
            (**(code **)(*plVar24 + 0xb8))(plVar24,0,0,0);
            (**(code **)(*plVar24 + 0x1e0))(plVar24,0,0,0);
            (**(code **)(*plVar24 + 0x200))(plVar24,0,0,0);
            (**(code **)(*plVar24 + 0x88))(plVar24,0);
            (**(code **)(*plVar24 + 0xc0))(plVar24,4);
            (**(code **)(*plVar24 + 0x38))(plVar24,0,1,&DAT_180cf8e98);
            (**(code **)(*plVar24 + 0x80))(plVar24,0,1,&DAT_180cf8e98);
            (**(code **)(*plVar24 + 200))(plVar24,0,1,&DAT_180cf8ef8);
            (**(code **)(*plVar24 + 0x40))(plVar24,0,1,&DAT_180cf8ef8);
            (**(code **)(*plVar24 + 0x120))(plVar24,DAT_180cf8e80,0);
            (**(code **)(*plVar24 + 0x158))(plVar24,DAT_180cf8e88);
            local_120 = 0;
            local_110 = 0;
            local_10c = 0x3f800000;
            local_118 = fVar33;
            local_114 = fVar34;
            (**(code **)(*plVar24 + 0x160))(plVar24,1,&local_120);
            lVar2 = **(longlong **)(DAT_180ca0a50 + 0x2058);
            pcVar28 = (char *)(lVar2 + 0x60);
            cVar25 = *pcVar28;
            if (cVar25 == '\0') {
              pcVar28 = (char *)0x0;
            }
            if (pcVar28 == (char *)0x0) {
              fVar32 = 0.0;
              fVar31 = 0.0;
            }
            else {
              pfVar29 = (float *)(lVar2 + 0x80);
              pfVar27 = (float *)(lVar2 + 0x84);
              if (cVar25 == '\0') {
                pfVar29 = (float *)&DAT_00000020;
                pfVar27 = (float *)&DAT_00000024;
              }
              fVar31 = *pfVar27;
              fVar32 = *pfVar29;
            }
            fVar35 = 0.0;
            if (0.0 <= *param_2 - fVar32) {
              fVar35 = *param_2 - fVar32;
            }
            local_148 = (int)fVar35;
            fVar35 = 0.0;
            if (0.0 <= param_2[1] - fVar31) {
              fVar35 = param_2[1] - fVar31;
            }
            local_144 = (int)fVar35;
            if (param_2[2] - fVar32 <= fVar33) {
              fVar33 = param_2[2] - fVar32;
            }
            local_140 = (int)fVar33;
            if (param_2[3] - fVar31 <= fVar34) {
              fVar34 = param_2[3] - fVar31;
            }
            local_13c = (int)fVar34;
            (**(code **)(*plVar24 + 0x168))(plVar24,1,&local_148);
            local_108 = 0;
            uStack_100 = 0;
            (**(code **)(*plVar24 + 0x108))(plVar24,1,&DAT_180cf8e90,0);
            (**(code **)(*plVar24 + 0x118))(plVar24,DAT_180cf8ee8,&local_108,0xffffffff);
            (**(code **)(*plVar24 + 0x58))(plVar24,DAT_180cf8ea0,0,0);
            (**(code **)(*plVar24 + 0x48))(plVar24,DAT_180cf8f38,0,0);
            (**(code **)(*plVar24 + 0x68))(plVar24,6,0);
            (**(code **)(*plVar24 + 0x118))(plVar24,DAT_180cf8ef0,&local_108,0xffffffff);
            (**(code **)(*plVar24 + 0x58))(plVar24,DAT_180cf8ed0,0,0);
            (**(code **)(*plVar24 + 0x48))(plVar24,DAT_180cf8ec8,0,0);
            local_598 = (undefined8 *)((ulonglong)local_598 & 0xffffffff00000000);
            (**(code **)(*plVar24 + 0xa8))(plVar24,6,iVar30,0);
            (**(code **)(*plVar24 + 0x108))(plVar24,8,local_458,local_418);
            (**(code **)(*plVar24 + 0x118))(plVar24,DAT_180cf8ed8,&local_108,0xffffffff);
            (**(code **)(*plVar24 + 0x40))(plVar24,1,1,&DAT_180cf8f40);
            (**(code **)(*plVar24 + 0x58))(plVar24,DAT_180cf8ea0,0,0);
            (**(code **)(*plVar24 + 0x48))(plVar24,DAT_180cf8f50,0,0);
            (**(code **)(*plVar24 + 0x68))(plVar24,6,0);
            (**(code **)(*plVar24 + 0x58))(plVar24,DAT_180cf8f60,0,0);
            (**(code **)(*plVar24 + 0x48))(plVar24,DAT_180cf8f58,0,0);
            local_598 = (undefined8 *)((ulonglong)local_598 & 0xffffffff00000000);
            (**(code **)(*plVar24 + 0xa8))(plVar24,6,iVar30 + 1,0);
            FUN_1802312d0(local_4e8);
          }
        }
      }
    }
  }
  return;
}



/* ===== 180231f40 FUN_180231f40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180231f40(int *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  short *psVar25;
  undefined1 uVar26;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [64];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
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
  undefined8 uStack_110;
  undefined8 local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  short local_e8 [6];
  short local_dc [2];
  ulonglong local_d8;
  
  if (param_1 != (int *)0x0) {
    psVar25 = local_e8;
    local_d8 = DAT_180919500 ^ (ulonglong)auStack_1e8;
    if ((((param_4 != 0) && (param_5 - 1U < 0x1fffbfd)) &&
        (fVar4 = *(float *)(param_3 + 7), 0.0 < fVar4)) &&
       (((fVar5 = *(float *)(param_2 + 8), 0.0 < fVar5 &&
         (fVar6 = *(float *)((longlong)param_2 + 0x44), 0.0 < fVar6)) &&
        ((fVar7 = *(float *)(param_2 + 9), DAT_1808ac34c <= fVar7 &&
         (fVar8 = *(float *)((longlong)param_2 + 0x4c), DAT_1808ac34c <= fVar8)))))) {
      FUN_180540170(local_1c8,0,0xe0);
      uVar11 = *param_2;
      uVar12 = param_2[1];
      local_128 = (undefined4)param_5;
      uVar13 = param_2[2];
      uVar14 = param_2[3];
      uStack_14c = 0;
      uVar15 = param_2[4];
      uVar16 = param_2[5];
      uVar17 = param_2[6];
      uVar18 = param_2[7];
      uVar19 = *param_3;
      uVar20 = param_3[1];
      fStack_180 = (float)(int)fVar7;
      uVar21 = param_3[2];
      uVar22 = param_3[3];
      local_158 = *(undefined4 *)(param_3 + 4);
      uStack_150 = *(undefined4 *)(param_3 + 5);
      uStack_144 = *(undefined4 *)((longlong)param_3 + 0x3c);
      uStack_13c = *(undefined4 *)(param_3 + 0xb);
      fStack_17c = (float)(int)fVar8;
      uStack_134 = *(undefined4 *)(param_3 + 9);
      uStack_154 = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_140 = *(undefined4 *)(param_3 + 8);
      local_138 = *(undefined4 *)((longlong)param_3 + 0x44);
      uStack_130 = *(undefined4 *)((longlong)param_3 + 0x4c);
      uStack_12c = *(undefined4 *)((longlong)param_3 + 0x5c);
      uStack_11c = *(undefined4 *)((longlong)param_3 + 100);
      uVar26 = (undefined1)((ushort)*(undefined2 *)(param_3 + 0xc) >> 8);
      uVar2 = (ulonglong)
              CONCAT14(uVar26,(uint)(CONCAT12(uVar26,*(undefined2 *)(param_3 + 0xc)) & 0xff00ff)) &
              0xffffffff0000ffff;
      local_118 = *(undefined4 *)((longlong)param_3 + 0x54);
      local_f8 = *(undefined4 *)((longlong)param_3 + 0x2c);
      uStack_124 = (undefined4)uVar2;
      uStack_120 = (undefined4)(uVar2 >> 0x20);
      uStack_f4 = *(undefined4 *)(param_3 + 6);
      uVar2 = param_5 * 0x24 + 0xe0;
      uStack_f0 = *(undefined4 *)((longlong)param_3 + 0x34);
      uStack_100 = -(uint)(*(char *)(param_3 + 0xd) != '\0') & 2;
      uStack_ec = *(undefined4 *)(param_3 + 10);
      if (uVar2 < 0x80000000) {
        local_188 = fVar5;
        fStack_184 = fVar6;
        local_148 = fVar4;
        FUN_1800e88a0(&DAT_180cf8f20,uVar2);
        puVar23 = DAT_180cf8f20;
        *DAT_180cf8f20 = uVar11;
        puVar23[1] = uVar12;
        puVar23[2] = uVar13;
        puVar23[3] = uVar14;
        puVar23[4] = uVar15;
        puVar23[5] = uVar16;
        puVar23[6] = uVar17;
        puVar23[7] = uVar18;
        puVar23[8] = CONCAT44(fStack_184,local_188);
        puVar23[9] = CONCAT44(fStack_17c,fStack_180);
        puVar23[10] = uVar19;
        puVar23[0xb] = uVar20;
        puVar23[0xc] = uVar21;
        puVar23[0xd] = uVar22;
        puVar23[0xe] = CONCAT44(uStack_154,local_158);
        puVar23[0xf] = CONCAT44(uStack_14c,uStack_150);
        puVar23[0x10] = CONCAT44(uStack_144,local_148);
        puVar23[0x11] = CONCAT44(uStack_13c,uStack_140);
        puVar23[0x12] = CONCAT44(uStack_134,local_138);
        puVar23[0x13] = CONCAT44(uStack_12c,uStack_130);
        puVar23[0x14] = CONCAT44(uStack_124,local_128);
        puVar23[0x15] = CONCAT44(uStack_11c,uStack_120);
        puVar23[0x16] = CONCAT44(uStack_114,local_118);
        puVar23[0x17] = uStack_110;
        puVar23[0x18] = local_108;
        puVar23[0x19] = CONCAT44(uStack_fc,uStack_100);
        puVar23[0x1a] = CONCAT44(uStack_f4,local_f8);
        puVar23[0x1b] = CONCAT44(uStack_ec,uStack_f0);
        FUN_180540530(DAT_180cf8f20 + 0x1c,param_4,param_5 * 0x24);
        FUN_1803fbe60(param_1);
        FUN_1803fc3a0(param_1,6,4);
        local_e8[0] = (short)param_1[0xd];
        local_e8[1] = local_e8[0] + 1;
        local_e8[2] = local_e8[0] + 2;
        local_e8[5] = local_e8[0] + 3;
        local_e8[3] = local_e8[0] + 2;
        local_e8[4] = local_e8[0] + 1;
        do {
          sVar9 = *psVar25;
          psVar25 = psVar25 + 1;
          **(short **)(param_1 + 0x12) = sVar9;
          *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 2;
        } while (psVar25 != local_dc);
        **(undefined8 **)(param_1 + 0x10) = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0xffffffff;
        lVar10 = *(longlong *)(param_1 + 0x10);
        puVar1 = (undefined4 *)(lVar10 + 0x14);
        *(undefined4 **)(param_1 + 0x10) = puVar1;
        *puVar1 = 0;
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0xffffffff;
        lVar10 = *(longlong *)(param_1 + 0x10);
        puVar1 = (undefined4 *)(lVar10 + 0x14);
        *(undefined4 **)(param_1 + 0x10) = puVar1;
        *puVar1 = 0;
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0xffffffff;
        lVar10 = *(longlong *)(param_1 + 0x10);
        puVar1 = (undefined4 *)(lVar10 + 0x14);
        *(undefined4 **)(param_1 + 0x10) = puVar1;
        *puVar1 = 0;
        *(undefined4 *)(lVar10 + 0x18) = 0;
        piVar3 = param_1 + 0x30;
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10) = 0xffffffff;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
        param_1[0xd] = param_1[0xd] + 4;
        lVar24 = (longlong)*param_1;
        lVar10 = *(longlong *)(param_1 + 2);
        *(undefined8 *)(lVar10 + -0x10 + lVar24 * 0x48) = 0;
        *(code **)(lVar10 + -0x18 + lVar24 * 0x48) = FUN_180231730;
        *(int *)(lVar10 + -8 + lVar24 * 0x48) = (int)uVar2;
        *(int *)(lVar10 + -4 + lVar24 * 0x48) = *piVar3;
        FUN_18000d5e0(piVar3,*piVar3 + (int)uVar2);
        FUN_180540530((longlong)*(int *)(lVar10 + -4 + lVar24 * 0x48) +
                      *(longlong *)(param_1 + 0x32),DAT_180cf8f20,uVar2);
        FUN_1803fbe60(param_1);
      }
    }
  }
  return;
}



/* ===== 1802323e0 FUN_1802323e0 ===== */

longlong FUN_1802323e0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180201070();
  if (lVar1 != 0) {
    return lVar1;
  }
  if ((((DAT_180961ab8 == 0) || (lVar1 = FUN_18000f3a0(), lVar1 == 0)) ||
      (lVar1 = FUN_18000f3a0(lVar1 + 8), lVar1 == 0)) ||
     ((lVar2 = FUN_18000f3a0(lVar1), lVar2 == 0 || (lVar2 = FUN_18000f3a0(lVar2), lVar2 == 0)))) {
    lVar1 = 0;
  }
  return lVar1;
}



/* ===== 180232450 FUN_180232450 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

code * FUN_180232450(void)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  code *pcVar7;
  size_t sVar8;
  char *******pppppppcVar9;
  ulonglong uVar10;
  char *_Str;
  uint uVar11;
  uint uVar12;
  char *_Str_00;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  char *******local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_58 = 0;
  pcVar3 = (code *)FUN_1802323e0();
  if (pcVar3 == (code *)0x0) {
    return (code *)0x0;
  }
  uVar11 = -(uint)(DAT_180920e24 != '\0') & 2;
  bVar13 = DAT_180920e23 != '\0';
  uVar12 = uVar11 | bVar13;
  if ((DAT_1809f1a08 == uVar12) && (DAT_180cf8f78 == pcVar3)) {
    return pcVar3;
  }
  if ((uVar12 == 0) && ((int)DAT_1809f1a08 < 0)) {
    LOCK();
    pcVar5 = (code *)(ulonglong)DAT_1809f1a08;
    UNLOCK();
    DAT_1809f1a08 = 0;
    DAT_180cf8f78 = pcVar3;
    return pcVar5;
  }
  if ((DAT_180cf8f78 != (code *)0x0) && (DAT_180cf8f78 != pcVar3)) {
    if (((DAT_180961ab8 == 0) ||
        (((lVar4 = FUN_18000f3a0(), lVar4 == 0 ||
          (pcVar5 = (code *)FUN_18000f3a0(lVar4 + 8), pcVar5 == (code *)0x0)) ||
         (lVar4 = FUN_18000f3a0(pcVar5), lVar4 == 0)))) ||
       (lVar4 = FUN_18000f3a0(lVar4), lVar4 == 0)) {
      pcVar5 = (code *)0x0;
    }
    if ((((DAT_180cf8f78 == pcVar5) || (pcVar5 = (code *)FUN_180201070(), DAT_180cf8f78 == pcVar5))
        && ((pcVar5 = DAT_180cf8f78, DAT_180cf8f78 != (code *)0x0 &&
            ((cVar2 = FUN_180200ed0(), cVar2 != '\0' && (lVar4 = FUN_180200ff0(), lVar4 != 0))))))
       && ((lVar6 = FUN_18000f3a0(lVar4), lVar6 != 0 &&
           ((pcVar7 = (code *)FUN_18000f3a0(lVar6 + 0x268), DAT_180ceb448 <= pcVar7 &&
            (pcVar7 < DAT_180ceb440)))))) {
      local_68 = 1;
      (*pcVar7)(lVar4,pcVar5,
                "(function () { try { var root = $.GetContextPanel(); while (root && root.GetParent && root.GetParent()) root = root.GetParent(); if (root) { root.Data().wlAutoAccept = false; root.Data().wlCancelMatch = false; } } catch (e) {} })();"
                ,&DAT_18070230d);
    }
  }
  local_50 = (char *******)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = (char *******)FUN_18000fb70(0xd0);
  uVar1 = s__function______try___var_root_____18073a8b0._8_8_;
  local_40 = 0xc0;
  local_38 = 0xcf;
  *local_50 = (char ******)s__function______try___var_root_____18073a8b0._0_8_;
  local_50[1] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._24_8_;
  local_50[2] = (char ******)s__function______try___var_root_____18073a8b0._16_8_;
  local_50[3] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._40_8_;
  local_50[4] = (char ******)s__function______try___var_root_____18073a8b0._32_8_;
  local_50[5] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._56_8_;
  local_50[6] = (char ******)s__function______try___var_root_____18073a8b0._48_8_;
  local_50[7] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._72_8_;
  local_50[8] = (char ******)s__function______try___var_root_____18073a8b0._64_8_;
  local_50[9] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._88_8_;
  local_50[10] = (char ******)s__function______try___var_root_____18073a8b0._80_8_;
  local_50[0xb] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._104_8_;
  local_50[0xc] = (char ******)s__function______try___var_root_____18073a8b0._96_8_;
  local_50[0xd] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._120_8_;
  local_50[0xe] = (char ******)s__function______try___var_root_____18073a8b0._112_8_;
  local_50[0xf] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._136_8_;
  local_50[0x10] = (char ******)s__function______try___var_root_____18073a8b0._128_8_;
  local_50[0x11] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._152_8_;
  local_50[0x12] = (char ******)s__function______try___var_root_____18073a8b0._144_8_;
  local_50[0x13] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._168_8_;
  local_50[0x14] = (char ******)s__function______try___var_root_____18073a8b0._160_8_;
  local_50[0x15] = (char ******)uVar1;
  uVar1 = s__function______try___var_root_____18073a8b0._184_8_;
  local_50[0x16] = (char ******)s__function______try___var_root_____18073a8b0._176_8_;
  local_50[0x17] = (char ******)uVar1;
  *(char *)(local_50 + 0x18) = '\0';
  local_58 = 1;
  _Str_00 = "false";
  _Str = "false";
  if (bVar13) {
    _Str = "true";
  }
  sVar8 = strlen(_Str);
  FUN_1800134a0(&local_50,_Str,sVar8);
  FUN_1800134a0(&local_50,"; keep.wlCancelMatch = ",0x17);
  if (uVar11 != 0) {
    _Str_00 = "true";
  }
  sVar8 = strlen(_Str_00);
  FUN_1800134a0(&local_50,_Str_00,sVar8);
  pcVar5 = (code *)FUN_1800134a0(&local_50,
                                 "; if (keep.wlLobbyHooked6) return; keep.wlLobbyHooked6 = true; var findPopup = function () {  var mark = root.FindChildTraverse(\'AcceptMatchCountdown\') || root.FindChildTraverse(\'AcceptMatchSlots\');  if (!mark || !mark.IsValid()) return null;  var panel = mark; var last = mark;  while (panel && panel.GetParent && panel.GetParent()) {   var type = \'\'; try { type = panel.paneltype || \'\'; } catch (e) {}   if (type.indexOf(\'Popup\') >= 0) return panel;   last = panel; panel = panel.GetParent();   if (panel === root) break;  }  return last; }; var frameOf = function (popup) {  var mark = root.FindChildTraverse(\'AcceptMatchCountdown\') || root.FindChildTraverse(\'AcceptMatchSlots\');  var best = null; var limit = popup.actuallayoutwidth * 0.9;  for (var p = mark; p && p !== popup && p.GetParent; p = p.GetParent()) { if (p.actuallayoutwidth > 0 && p.actuallayoutwidth < limit) best = p; }  return best; }; var place = function (popup, button) {  var frame = frameOf(popup); if (!frame || !frame.GetPositionWithinWindow || !popup.GetPositionWithinWindow) return;  var scale = popup.actualuiscale_x || 1; var a = frame.GetPositionWithinWindow(); var b = popup.GetPositionWithinWindow();  var x = (a.x - b.x + frame.actuallayoutwidth) / scale - 44; var y = (a.y - b.y) / scale + 14;  button.style.horizontalAlign = \'left\'; button.style.verticalAlign = \'top\'; button.style.margin = \'0px\';  button.style.position = Math.round(x) + \'px \' + Math.round(y) + \'px 0px\'; }; var cancelMatch = function (popup) {  try { UiToolkitAPI.HideTextTooltip(); } catch (e) {}  try { LobbyAPI.StopMatchmaking(); } catch (e) {}  try { $.DispatchEvent(\'CloseAcceptPopup\'); } catch (e) {}  try { if (popup && popup.IsValid()) $.DispatchEvent(\'UIPopupButtonClicked\', popup, \'\'); } catch (e) {} }; var addCross = function (tries) {  if (!keep.wlCancelMatch) return;  var popup = findPopup();  if (!popup) {   if (tries < 40) { $.Schedule(0.25, function () { addCross(tries + 1); }); return; }   $.Msg(\'[neverlose] cancel match | accept popup not found under \' + root.id + \' (..." /* TRUNCATED STRING LITERAL */
                                 ,0xd9a);
  if (local_38 < 0x10) {
    pppppppcVar9 = (char *******)&local_50;
LAB_180232782:
    pcVar5 = (code *)FUN_180200ed0();
    if ((char)pcVar5 != '\0') {
      lVar4 = FUN_180200ff0();
      pcVar5 = (code *)0x0;
      if (lVar4 != 0) {
        lVar6 = FUN_18000f3a0(lVar4);
        pcVar5 = (code *)0x0;
        if (((lVar6 != 0) &&
            (pcVar5 = (code *)FUN_18000f3a0(lVar6 + 0x268), DAT_180ceb448 <= pcVar5)) &&
           (pcVar5 < DAT_180ceb440)) {
          local_68 = 1;
          pcVar5 = (code *)(*pcVar5)(lVar4,pcVar3,pppppppcVar9,&DAT_18070230d);
          bVar13 = true;
          goto LAB_180232717;
        }
      }
    }
  }
  else {
    pppppppcVar9 = local_50;
    if (local_50 != (char *******)0x0) goto LAB_180232782;
  }
  bVar13 = false;
LAB_180232717:
  if (0xf < local_38) {
    uVar10 = local_38 + 1;
    pppppppcVar9 = local_50;
    if (0xfff < uVar10) {
      pppppppcVar9 = (char *******)local_50[-1];
      if ((char *)0x1f < (char *)((longlong)local_50 + (-8 - (longlong)pppppppcVar9))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        pcVar3 = (code *)(*pcVar3)();
        return pcVar3;
      }
      uVar10 = local_38 + 0x28;
    }
    pcVar5 = (code *)thunk_FUN_1803d64e0(pppppppcVar9,uVar10);
  }
  if (bVar13) {
    LOCK();
    UNLOCK();
    DAT_180cf8f78 = pcVar3;
    DAT_1809f1a08 = uVar12;
    return pcVar5;
  }
  return pcVar5;
}



/* ===== 180232810 FUN_180232810 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180232810(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 ***pppuVar5;
  undefined8 *_Buf2;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 ***local_30;
  undefined8 uStack_28;
  size_t local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  cVar1 = DAT_180920f34;
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  puVar4 = local_38;
  if (-1 < DAT_180920f38) {
    puVar4 = &DAT_180920f38;
  }
  if (1000 < DAT_180920f38) {
    puVar4 = &DAT_180637de8;
  }
  DAT_1809f1a0c = *puVar4;
  LOCK();
  UNLOCK();
  cVar2 = FUN_1803a10a0();
  if (cVar2 == '\0') {
    uStack_28 = 0;
    local_20 = 0;
    local_18 = 0xf;
    local_30 = (undefined8 ***)0x0;
  }
  else {
    FUN_1800f1bd0(&local_30);
  }
  if (cVar2 == DAT_180ccf78c) {
    if (cVar2 != '\0') {
      _Buf2 = &DAT_1809f2b00;
      if (0xf < DAT_1809f2b18) {
        _Buf2 = DAT_1809f2b00;
      }
      pppuVar5 = &local_30;
      if (0xf < local_18) {
        pppuVar5 = local_30;
      }
      if (local_20 != DAT_1809f2b10) goto LAB_18023294d;
      if (local_20 != 0) {
        iVar3 = memcmp(pppuVar5,_Buf2,local_20);
        if (iVar3 != 0) goto LAB_18023294d;
      }
    }
    if ((DAT_180ccf78d == '\0') || (cVar1 != '\0')) goto LAB_1802329b6;
    LOCK();
    DAT_1809f1aec = DAT_1809f1aec + 1;
    UNLOCK();
    LOCK();
    DAT_180cf8f98 = 0;
    UNLOCK();
    LOCK();
    DAT_1809f1ae8 = 0xffffffff;
    UNLOCK();
    LOCK();
    DAT_180cf8f88 = 0;
    UNLOCK();
    LOCK();
    DAT_180cf8fa0 = 0;
    UNLOCK();
    LOCK();
    UNLOCK();
  }
  else {
LAB_18023294d:
    LOCK();
    DAT_180ccf83c = 0;
    UNLOCK();
    LOCK();
    DAT_1809f1aec = DAT_1809f1aec + 1;
    UNLOCK();
    LOCK();
    DAT_180cf8f98 = 0;
    UNLOCK();
    LOCK();
    DAT_1809f1ae8 = 0xffffffff;
    UNLOCK();
    LOCK();
    DAT_180cf8f88 = 0;
    UNLOCK();
    LOCK();
    DAT_180cf8fa0 = 0;
    UNLOCK();
    pppuVar5 = &local_30;
    if (0xf < local_18) {
      pppuVar5 = local_30;
    }
    FUN_180029840(&DAT_1809f2b00,pppuVar5,local_20);
    LOCK();
    UNLOCK();
    DAT_180ccf78c = cVar2;
    DAT_180ccf83c = cVar2;
LAB_1802329b6:
    DAT_180ccf78d = cVar1;
    LOCK();
    DAT_180ccf78e = cVar1;
    UNLOCK();
    if (cVar1 != '\0') goto LAB_1802329f9;
  }
  DAT_180ccf78d = cVar1;
  DAT_180ccf78e = DAT_180ccf78d;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cf8f90);
  DAT_180cf8fa8 = 0;
  _DAT_180cf8fb0 = 0;
  DAT_180ccf78f = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cf8f90);
LAB_1802329f9:
  FUN_18000f890(&local_30);
  return;
}



/* ===== 180232a20 FUN_180232a20 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_180232a20(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  ULONGLONG UVar8;
  byte *pbVar9;
  int *piVar10;
  int iVar11;
  double dVar12;
  int local_58;
  int local_54 [5];
  
  lVar7 = DAT_180cf8fa0;
  pcVar4 = DAT_180cd1ac8;
  iVar3 = DAT_1809f1ae8;
  iVar11 = 0;
  if ((((DAT_180ccf78e == '\0') || (DAT_180ccf83c == '\0')) || (param_1 == 0)) ||
     ((DAT_180cf8f98 != DAT_1809f1aec || (DAT_180cf8f88 != param_1)))) {
    bVar2 = false;
  }
  else if (((DAT_180cf8fa0 == 0) || (DAT_1809f1ae8 < 0)) ||
          (UVar8 = GetTickCount64(), 45000 < UVar8 - lVar7)) {
    bVar2 = false;
  }
  else {
    local_58 = -0x69;
    local_54[0] = (DAT_1809f1a0c - iVar3) + -5;
    piVar10 = &local_58;
    if (-0x6a < local_54[0]) {
      piVar10 = local_54;
    }
    if (1000 < local_54[0]) {
      piVar10 = &DAT_180637de8;
    }
    iVar11 = *piVar10;
    bVar2 = true;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cf8f90);
  if ((((!bVar2) || (param_3 == (byte *)0x0)) || (param_4 < param_3)) ||
     ((ulonglong)((longlong)param_4 - (longlong)param_3) < 5)) {
    DAT_180cf8fa8 = 0;
    _DAT_180cf8fb0 = 0;
    DAT_180ccf78f = '\0';
    pbVar9 = (byte *)(*pcVar4)(param_1,param_2,param_3,param_4);
LAB_180232d0d:
LAB_180232d13:
    param_3 = pbVar9;
  }
  else {
    UVar8 = GetTickCount64();
    bVar6 = DAT_180cf8f84;
    uVar5 = DAT_180cf8f80;
    if (iVar11 < 1) {
      DAT_180cf8fa8 = 0;
      _DAT_180cf8fb0 = 0;
      DAT_180ccf78f = '\0';
      pbVar9 = (byte *)(*pcVar4)(param_1,param_2,param_3,param_4);
      if (((iVar11 < 0) && (param_3 + 5 <= pbVar9)) &&
         (((*param_3 & 0xf8) == 0x98 && (uVar1 = *(ushort *)(param_3 + 3), uVar1 != 0xffff)))) {
        dVar12 = (double)FUN_18053f010((double)(iVar11 * -1000 + 0x1f) * _DAT_1808ac3d8);
        iVar11 = (int)dVar12 + (uint)uVar1;
        if (0xfffe < iVar11) {
          iVar11 = 0xfffe;
        }
        *(short *)(param_3 + 3) = (short)iVar11;
      }
      goto LAB_180232d0d;
    }
    if (DAT_180cf8fa8 != param_1) {
      DAT_180cf8fa8 = 0;
      _DAT_180cf8fb0 = 0;
      DAT_180ccf78f = '\0';
LAB_180232c16:
      pbVar9 = (byte *)(*pcVar4)(param_1,param_2,param_3,param_4);
      if ((pbVar9 == param_3 + 5) && (*param_3 == 0x98)) {
        DAT_180cf8f80 = *(undefined4 *)param_3;
        DAT_180cf8f84 = param_3[4];
        DAT_180ccf78f = '\x01';
        pbVar9 = param_3;
        DAT_180cf8fa8 = param_1;
        _DAT_180cf8fb0 = UVar8;
      }
      goto LAB_180232d13;
    }
    if (DAT_180ccf78f == '\0') goto LAB_180232c16;
    if ((ulonglong)(longlong)iVar11 <= UVar8 - _DAT_180cf8fb0) {
      pbVar9 = (byte *)(*pcVar4)(param_1,param_2,param_3,param_4);
      if ((pbVar9 == param_3 + 5) && (*param_3 == 0x98)) {
        DAT_180cf8f80 = *(undefined4 *)param_3;
        DAT_180cf8f84 = param_3[4];
        _DAT_180cf8fb0 = UVar8;
        *(undefined4 *)param_3 = uVar5;
        param_3[4] = bVar6;
      }
      else {
        DAT_180cf8fa8 = 0;
        _DAT_180cf8fb0 = 0;
        DAT_180ccf78f = '\0';
      }
      goto LAB_180232d19;
    }
  }
  pbVar9 = param_3;
LAB_180232d19:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cf8f90);
  return pbVar9;
}



/* ===== 180232d40 FUN_180232d40 ===== */

undefined8 FUN_180232d40(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 extraout_XMM0_Da;
  
  (**(code **)(*param_1 + param_2 * 8))(param_1,param_3);
  *param_4 = extraout_XMM0_Da;
  return 1;
}



/* ===== 180232d80 FUN_180232d80 ===== */

undefined8
FUN_180232d80(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,param_3);
  *param_4 = uVar1;
  return 1;
}



/* ===== 180232dc0 FUN_180232dc0 ===== */

undefined8 FUN_180232dc0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + param_2 * 8))();
  *param_3 = uVar1;
  return 1;
}



/* ===== 180232df0 FUN_180232df0 ===== */

undefined8 FUN_180232df0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0xa8))(param_1,param_3,param_4,0);
  return 1;
}



/* ===== 180232e40 FUN_180232e40 ===== */

undefined8 FUN_180232e40(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar3 = 0;
    while ((uVar3 + 1 < 0x80 && (*(char *)(uVar3 + lVar1) != '\0'))) {
      uVar3 = uVar3 + 1;
    }
    FUN_180540530(param_2,lVar1,uVar3,param_4,uVar3);
    *(undefined1 *)(uVar3 + param_2) = 0;
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 180232ea0 FUN_180232ea0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180232ea0(void)

{
  undefined1 *puVar1;
  ushort uStack_a2;
  
  _DAT_180cf8fc0 = (ulonglong)uStack_a2 << 0x30;
  DAT_1809f2b30 = 0;
  puVar1 = &DAT_1809f2b20;
  if (0xf < DAT_1809f2b38) {
    puVar1 = _DAT_1809f2b20;
  }
  _DAT_180cf8fc8 = 0;
  _DAT_180cf8fd0 = 0;
  _DAT_180cf8fd8 = 0;
  _DAT_180cf8ff0 = 0;
  _DAT_180cf8ff8 = 0;
  _DAT_180cf8fe0 = 0;
  _DAT_180cf8fe8 = 0;
  _DAT_180cf9000 = 0;
  _DAT_180cf9008 = 0;
  _DAT_180cf9010 = 0;
  _DAT_180cf9018 = 0;
  DAT_180cf9020 = 0;
  DAT_180cf9028 = 0;
  DAT_180cf9030 = 0;
  DAT_180cf9038 = 0;
  DAT_180cf9040 = 0;
  _DAT_180cf9048 = 0;
  *puVar1 = 0;
  return;
}



/* ===== 180232f80 FUN_180232f80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180232f80(longlong param_1,undefined8 param_2,double param_3)

{
  bool bVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  char *pcVar8;
  int iVar9;
  size_t sVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  float local_128;
  char local_124 [4];
  undefined8 local_120;
  undefined8 local_118;
  char local_108 [128];
  ulonglong local_88;
  
  local_88 = DAT_180919500 ^ (ulonglong)auStack_148;
  local_128 = 0.0;
  local_120 = 0;
  fVar11 = 0.0;
  FUN_180232d40(param_2,4,0,&local_128);
  FUN_180232d80(param_2);
  FUN_180232d80(param_2);
  fVar2 = local_128;
  iVar5 = local_120._4_4_;
  iVar9 = (int)local_120;
  if (DAT_180cf8fc0 == '\0') {
LAB_180233065:
    lVar6 = FUN_180266660();
    if (((lVar6 == 0) || (DAT_180cf9f80 == 0)) ||
       (cVar4 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar6), cVar4 == '\0')) {
      local_124[0] = '\0';
      FUN_180232dc0(param_2,6,local_124);
      if (local_124[0] == '\0') {
        local_124[0] = '\0';
        FUN_180232dc0(param_2,7,local_124);
        if (local_124[0] == '\0') {
          local_108[0] = '\0';
          local_108[1] = '\0';
          local_108[2] = '\0';
          local_108[3] = '\0';
          local_108[4] = '\0';
          local_108[5] = '\0';
          local_108[6] = '\0';
          local_108[7] = '\0';
          local_108[8] = '\0';
          local_108[9] = '\0';
          local_108[10] = '\0';
          local_108[0xb] = '\0';
          local_108[0xc] = '\0';
          local_108[0xd] = '\0';
          local_108[0xe] = '\0';
          local_108[0xf] = '\0';
          local_108[0x10] = '\0';
          local_108[0x11] = '\0';
          local_108[0x12] = '\0';
          local_108[0x13] = '\0';
          local_108[0x14] = '\0';
          local_108[0x15] = '\0';
          local_108[0x16] = '\0';
          local_108[0x17] = '\0';
          local_108[0x18] = '\0';
          local_108[0x19] = '\0';
          local_108[0x1a] = '\0';
          local_108[0x1b] = '\0';
          local_108[0x1c] = '\0';
          local_108[0x1d] = '\0';
          local_108[0x1e] = '\0';
          local_108[0x1f] = '\0';
          local_108[0x20] = '\0';
          local_108[0x21] = '\0';
          local_108[0x22] = '\0';
          local_108[0x23] = '\0';
          local_108[0x24] = '\0';
          local_108[0x25] = '\0';
          local_108[0x26] = '\0';
          local_108[0x27] = '\0';
          local_108[0x28] = '\0';
          local_108[0x29] = '\0';
          local_108[0x2a] = '\0';
          local_108[0x2b] = '\0';
          local_108[0x2c] = '\0';
          local_108[0x2d] = '\0';
          local_108[0x2e] = '\0';
          local_108[0x2f] = '\0';
          local_108[0x30] = '\0';
          local_108[0x31] = '\0';
          local_108[0x32] = '\0';
          local_108[0x33] = '\0';
          local_108[0x34] = '\0';
          local_108[0x35] = '\0';
          local_108[0x36] = '\0';
          local_108[0x37] = '\0';
          local_108[0x38] = '\0';
          local_108[0x39] = '\0';
          local_108[0x3a] = '\0';
          local_108[0x3b] = '\0';
          local_108[0x3c] = '\0';
          local_108[0x3d] = '\0';
          local_108[0x3e] = '\0';
          local_108[0x3f] = '\0';
          local_108[0x40] = '\0';
          local_108[0x41] = '\0';
          local_108[0x42] = '\0';
          local_108[0x43] = '\0';
          local_108[0x44] = '\0';
          local_108[0x45] = '\0';
          local_108[0x46] = '\0';
          local_108[0x47] = '\0';
          local_108[0x48] = '\0';
          local_108[0x49] = '\0';
          local_108[0x4a] = '\0';
          local_108[0x4b] = '\0';
          local_108[0x4c] = '\0';
          local_108[0x4d] = '\0';
          local_108[0x4e] = '\0';
          local_108[0x4f] = '\0';
          local_108[0x50] = '\0';
          local_108[0x51] = '\0';
          local_108[0x52] = '\0';
          local_108[0x53] = '\0';
          local_108[0x54] = '\0';
          local_108[0x55] = '\0';
          local_108[0x56] = '\0';
          local_108[0x57] = '\0';
          local_108[0x58] = '\0';
          local_108[0x59] = '\0';
          local_108[0x5a] = '\0';
          local_108[0x5b] = '\0';
          local_108[0x5c] = '\0';
          local_108[0x5d] = '\0';
          local_108[0x5e] = '\0';
          local_108[0x5f] = '\0';
          local_108[0x60] = '\0';
          local_108[0x61] = '\0';
          local_108[0x62] = '\0';
          local_108[99] = '\0';
          local_108[100] = '\0';
          local_108[0x65] = '\0';
          local_108[0x66] = '\0';
          local_108[0x67] = '\0';
          local_108[0x68] = '\0';
          local_108[0x69] = '\0';
          local_108[0x6a] = '\0';
          local_108[0x6b] = '\0';
          local_108[0x6c] = '\0';
          local_108[0x6d] = '\0';
          local_108[0x6e] = '\0';
          local_108[0x6f] = '\0';
          local_108[0x70] = '\0';
          local_108[0x71] = '\0';
          local_108[0x72] = '\0';
          local_108[0x73] = '\0';
          local_108[0x74] = '\0';
          local_108[0x75] = '\0';
          local_108[0x76] = '\0';
          local_108[0x77] = '\0';
          local_108[0x78] = '\0';
          local_108[0x79] = '\0';
          local_108[0x7a] = '\0';
          local_108[0x7b] = '\0';
          local_108[0x7c] = '\0';
          local_108[0x7d] = '\0';
          local_108[0x7e] = '\0';
          local_108[0x7f] = '\0';
          cVar4 = FUN_180232e40(param_2,local_108);
          if (cVar4 == '\0') {
            sVar10 = 0xb;
            pcVar8 = "Unconnected";
          }
          else {
            sVar10 = strlen(local_108);
            pcVar8 = local_108;
          }
          goto LAB_18023313b;
        }
      }
      sVar10 = 0xc;
      pcVar8 = "Local Server";
    }
    else {
      sVar10 = 5;
      pcVar8 = "Valve";
    }
LAB_18023313b:
    FUN_180029840(&DAT_1809f2b20,pcVar8,sVar10);
  }
  else {
    if (((local_128 < DAT_180cf8fc8) || (iVar9 < DAT_180cf8fcc)) ||
       (local_120._4_4_ < DAT_180cf8fd0)) {
      FUN_180232ea0();
    }
    if (DAT_180cf8fc0 == '\0') goto LAB_180233065;
  }
  DAT_180cf8fc8 = fVar2;
  DAT_180cf8fc0 = '\x01';
  DAT_180cf8fd0 = iVar5;
  local_128 = 0.0;
  DAT_180cf8fcc = iVar9;
  FUN_180232d40(param_2,10,0,&local_128);
  fVar2 = DAT_1808acc3c;
  if (((uint)local_128 & 0x7f800000) == 0x7f800000) {
    local_128 = 0.0;
  }
  fVar12 = local_128;
  if (local_128 <= 0.0) {
    fVar12 = 0.0;
  }
  local_128 = 0.0;
  DAT_180cf8fd4 = fVar12 * DAT_1808acc3c;
  FUN_180232d40(param_1,0x44,0,&local_128);
  fVar13 = DAT_1808acb08;
  fVar12 = DAT_1808ac34c;
  if (((uint)local_128 & 0x7f800000) == 0x7f800000) {
    local_128 = 0.0;
LAB_18023320e:
    if (local_128 <= 0.0) {
      local_128 = fVar11;
    }
    DAT_180cf8ff8 = local_128 * DAT_1808acb08;
  }
  else {
    if (local_128 <= DAT_1808ac34c) goto LAB_18023320e;
    DAT_180cf8ff8 = DAT_1808acb08;
  }
  local_128 = 0.0;
  FUN_180232d40(param_1,0x45,0,&local_128);
  if (((uint)local_128 & 0x7f800000) == 0x7f800000) {
    local_128 = 0.0;
LAB_18023326c:
    if (local_128 <= 0.0) {
      local_128 = fVar11;
    }
    DAT_180cf8ffc = local_128 * fVar13;
  }
  else {
    if (local_128 <= fVar12) goto LAB_18023326c;
    DAT_180cf8ffc = fVar13;
  }
  local_128 = 0.0;
  FUN_180232d40(param_2,0xc,0,&local_128);
  fVar14 = local_128;
  local_128 = 0.0;
  FUN_180232d40(param_2,0xc,1,&local_128);
  if (((uint)fVar14 & 0x7f800000) == 0x7f800000) {
    fVar14 = 0.0;
LAB_1802332ec:
    if (fVar14 <= 0.0) {
      fVar14 = fVar11;
    }
    DAT_180cf9000 = fVar14 * fVar13;
  }
  else {
    if (fVar14 <= fVar12) goto LAB_1802332ec;
    DAT_180cf9000 = fVar13;
  }
  if (((uint)local_128 & 0x7f800000) == 0x7f800000) {
    local_128 = 0.0;
LAB_180233322:
    if (local_128 <= 0.0) {
      local_128 = fVar11;
    }
    DAT_180cf9004 = local_128 * fVar13;
  }
  else {
    if (local_128 <= fVar12) goto LAB_180233322;
    DAT_180cf9004 = fVar13;
  }
  local_128 = 0.0;
  FUN_180232d40(param_2,0xd,0,&local_128);
  fVar14 = local_128;
  local_128 = 0.0;
  FUN_180232d40(param_2,0xd,1,&local_128);
  if (((uint)fVar14 & 0x7f800000) == 0x7f800000) {
    fVar14 = 0.0;
LAB_1802333a2:
    if (fVar14 <= 0.0) {
      fVar14 = fVar11;
    }
    DAT_180cf9008 = fVar14 * fVar13;
  }
  else {
    if (fVar14 <= fVar12) goto LAB_1802333a2;
    DAT_180cf9008 = fVar13;
  }
  if (((uint)local_128 & 0x7f800000) == 0x7f800000) {
    local_128 = 0.0;
LAB_1802333d8:
    if (local_128 <= 0.0) {
      local_128 = fVar11;
    }
    DAT_180cf900c = local_128 * fVar13;
  }
  else {
    if (local_128 <= fVar12) goto LAB_1802333d8;
    DAT_180cf900c = fVar13;
  }
  local_128 = 0.0;
  FUN_180232d40(param_2,0xe,0,&local_128);
  fVar14 = local_128;
  local_128 = 0.0;
  FUN_180232d40(param_2,0xe,1,&local_128);
  if (((uint)fVar14 & 0x7f800000) == 0x7f800000) {
    fVar14 = 0.0;
  }
  DAT_180cf9010 = fVar14;
  if (fVar14 <= 0.0) {
    DAT_180cf9010 = fVar11;
  }
  if (((uint)local_128 & 0x7f800000) == 0x7f800000) {
    local_128 = 0.0;
  }
  DAT_180cf9014 = local_128;
  if (local_128 <= 0.0) {
    DAT_180cf9014 = fVar11;
  }
  local_128 = 0.0;
  FUN_180232d40(param_2,0xf,0,&local_128);
  fVar14 = local_128;
  local_128 = 0.0;
  FUN_180232d40(param_2,0xf,1,&local_128);
  if (((uint)fVar14 & 0x7f800000) == 0x7f800000) {
    fVar14 = 0.0;
  }
  DAT_180cf9018 = fVar14;
  if (fVar14 <= 0.0) {
    DAT_180cf9018 = fVar11;
  }
  DAT_180cf901c = local_128;
  if (((uint)local_128 & 0x7f800000) == 0x7f800000) {
    DAT_180cf901c = 0.0;
  }
  if (DAT_180cf901c <= 0.0) {
    DAT_180cf901c = fVar11;
  }
  local_118 = 0;
  FUN_180232df0(param_2);
  fVar14 = (float)local_118;
  if (((uint)(float)local_118 & 0x7f800000) == 0x7f800000) {
    fVar14 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = fVar11;
  }
  DAT_180cf8fd8 = fVar14 * fVar2;
  fVar14 = local_118._4_4_;
  if (((uint)local_118._4_4_ & 0x7f800000) == 0x7f800000) {
    fVar14 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = fVar11;
  }
  local_128 = 0.0;
  DAT_180cf8fdc = fVar14 * fVar2;
  FUN_180232d40(param_2,0x14,0,&local_128);
  _DAT_180cf8fe8 = local_128;
  if (((uint)local_128 & 0x7f800000) == 0x7f800000) {
    _DAT_180cf8fe8 = 0.0;
  }
  if (_DAT_180cf8fe8 <= 0.0) {
    _DAT_180cf8fe8 = fVar11;
  }
  local_124[0] = '\0';
  FUN_180232dc0(param_2,8,local_124);
  fVar11 = DAT_180cf8ff8;
  if (DAT_180cf8ff8 <= DAT_180cf8ffc) {
    fVar11 = DAT_180cf8ffc;
  }
  DAT_180cf8fc1 = local_124[0];
  if (DAT_1808ac000 < fVar11) {
    DAT_180cf9020 = param_3;
  }
  fVar11 = DAT_180cf9000;
  if (DAT_180cf9000 <= DAT_180cf9004) {
    fVar11 = DAT_180cf9004;
  }
  if (DAT_1808ac000 < fVar11) {
    DAT_180cf9028 = param_3;
  }
  fVar11 = DAT_180cf9008;
  if (DAT_180cf9008 <= DAT_180cf900c) {
    fVar11 = DAT_180cf900c;
  }
  if (DAT_1808ac000 < fVar11) {
    DAT_180cf9030 = param_3;
  }
  fVar11 = DAT_180cf9010;
  if (DAT_180cf9010 <= DAT_180cf9014) {
    fVar11 = DAT_180cf9014;
  }
  if (DAT_1808ac950 <= fVar11) {
    DAT_180cf9038 = param_3;
  }
  bVar1 = fVar13 <= DAT_180cf8fd8;
  fVar11 = DAT_180cf8fd8;
  if (!bVar1) {
    fVar11 = DAT_180cf8fdc;
  }
  if (DAT_180cf8fe4 < fVar11) {
    DAT_180cf8fc5 = bVar1;
    DAT_180cf8fe4 = fVar11;
  }
  fVar11 = DAT_180cf8fe4;
  uVar3 = DAT_180cf8fc5;
  if (DAT_1808ac470 <= param_3 - _DAT_180cf9048) {
    DAT_180cf8fc5 = 0;
    DAT_180cf8fe4 = 0.0;
    DAT_180cf8fc4 = uVar3;
    DAT_180cf8fe0 = fVar11;
    _DAT_180cf9048 = param_3;
  }
  if ((bVar1) || (_DAT_1808ac700 <= DAT_180cf8fdc)) {
    DAT_180cf9040 = param_3;
  }
  iVar5 = FUN_180011200(param_1 + 600);
  DAT_180cf8fc2 = 0 < iVar5;
  if (iVar5 < 1) {
    _DAT_180cf8fec = 0;
  }
  else {
    fVar11 = (float)FUN_18000f3d0(param_1 + 0x25c);
    local_128 = 0.0;
    _DAT_180cf8fec = CONCAT44(_DAT_180cf8ff0,fVar11 * fVar2);
    FUN_180232d40(param_1,0x40,0,&local_128);
    _DAT_180cf8fec = CONCAT44(local_128 * fVar2,_DAT_180cf8fec);
  }
  if ((DAT_180cf8fb8 == 0) &&
     (((hModule = GetModuleHandleA("client.dll"), hModule == (HMODULE)0x0 ||
       (pFVar7 = GetProcAddress(hModule,"CreateInterface"), pFVar7 == (FARPROC)0x0)) ||
      (DAT_180cf8fb8 = (*pFVar7)("Source2ClientPrediction001",0), DAT_180cf8fb8 == 0)))) {
    _DAT_180cf8ff4 = 0.0;
    DAT_180cf8fc3 = 0;
    return;
  }
  iVar5 = FUN_180011200(DAT_180cf8fb8 + 0x10c);
  DAT_180cf8fc3 = 0 < iVar5;
  if (iVar5 < 1) {
    _DAT_180cf8ff4 = 0.0;
    return;
  }
  fVar11 = (float)FUN_18000f3d0(param_1 + 0xc4);
  if (fVar11 == 0.0) {
    fVar11 = 0.0;
LAB_180233825:
    if (fVar11 < fVar12) goto LAB_18023386c;
  }
  else {
    fVar11 = (float)FUN_18000f3d0(param_1 + 0xcc);
    if (0.0 <= fVar11) goto LAB_180233825;
  }
  local_128 = 0.0;
  fVar11 = (float)FUN_180512fd0(fVar11,&local_128);
  fVar13 = local_128;
  if (fVar11 < 0.0) {
    fVar11 = fVar11 + fVar12;
    if (fVar11 < fVar12) {
      fVar13 = local_128 + DAT_1808acda0;
    }
    else {
      fVar11 = 0.0;
    }
  }
  iVar5 = iVar5 + (int)fVar13;
LAB_18023386c:
  fVar11 = fVar11 * DAT_1808ac00c;
  fVar13 = (float)iVar5 * DAT_1808ac00c;
  fVar12 = (float)FUN_18000f3d0(param_1 + 0xc0);
  _DAT_180cf8ff4 = ((fVar13 + fVar11) - fVar12) * fVar2;
  return;
}



/* ===== 180233900 FUN_180233900 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180233900(double param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [4];
  uint local_b4;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_6c = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0xf;
  local_40 = 0;
  local_b8[0] = DAT_180cf8fc0;
  local_b4 = (uint)(DAT_180cf8fc1 != '\0');
  local_b0 = DAT_180cf8fc2;
  local_af = DAT_180cf8fc3;
  local_ae = DAT_180cf8fc4;
  local_ac = DAT_180cf8fd4;
  local_a8 = DAT_180cf8fe0;
  local_a4 = _DAT_180cf8fe8;
  uStack_9c = _DAT_180cf8ff0;
  _local_94 = CONCAT44(DAT_180cf8ffc,DAT_180cf8ff8);
  _local_8c = CONCAT44(DAT_180cf9004,DAT_180cf9000);
  _local_84 = CONCAT44(DAT_180cf900c,DAT_180cf9008);
  _local_7c = CONCAT44(DAT_180cf9014,DAT_180cf9010);
  _local_74 = CONCAT44(DAT_180cf901c,DAT_180cf9018);
  if (DAT_180cf9020 <= 0.0) {
    local_68 = DAT_1808acdb8;
  }
  else {
    local_68 = param_1 - DAT_180cf9020;
  }
  if (DAT_180cf9028 <= 0.0) {
    local_60 = DAT_1808acdb8;
  }
  else {
    local_60 = param_1 - DAT_180cf9028;
  }
  if (DAT_180cf9030 <= 0.0) {
    local_58 = DAT_1808acdb8;
  }
  else {
    local_58 = param_1 - DAT_180cf9030;
  }
  if (DAT_180cf9038 <= 0.0) {
    local_50 = DAT_1808acdb8;
  }
  else {
    local_50 = param_1 - DAT_180cf9038;
  }
  if (DAT_180cf9040 <= 0.0) {
    local_48 = DAT_1808acdb8;
  }
  else {
    local_48 = param_1 - DAT_180cf9040;
  }
  puVar2 = &DAT_1809f2b20;
  if (0xf < DAT_1809f2b38) {
    puVar2 = _DAT_1809f2b20;
  }
  FUN_180029840(&local_40,puVar2,DAT_1809f2b30);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cd0d78);
  FUN_1800c9960(&DAT_1809eba80,local_b8);
  plVar1 = (longlong *)FUN_1800ad890(local_c8);
  _DAT_1809eba70 = (double)*plVar1 / DAT_1808ac9a0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cd0d78);
  FUN_18000f890(&local_40);
  return;
}



/* ===== 180233b60 FUN_180233b60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180233b60(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  uint uVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  undefined1 local_88 [36];
  undefined4 uStack_64;
  
  if ((DAT_18091a1e0 != '\0') && (DAT_18091b3a4 != '\0')) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res18);
      DAT_181108a00 = local_res18.s;
      DAT_1811089f8 = FUN_1803a0c50(&local_res18);
      DAT_180cd1304 = '\x01';
    }
    lVar8 = DAT_1811089f8;
    if ((((DAT_1811089f8 != 0) && (lVar6 = *param_1, lVar6 != DAT_1811089f8)) && (lVar6 != 0)) &&
       (DAT_180ca09f0 != 0)) {
      iVar5 = FUN_180011200((ulonglong)DAT_180ca09f0 + lVar6);
      uVar1 = DAT_180ca09f4;
      if ((iVar5 - 1U < 1000) && (lVar6 = *param_1, lVar6 != lVar8)) {
        uVar11 = (ulonglong)DAT_180ca09f4;
        if ((lVar6 == 0) || (DAT_180ca09f4 == 0)) {
          cVar3 = '\0';
        }
        else {
          cVar3 = FUN_180011220(lVar6 + uVar11);
        }
        if (uVar1 == 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = FUN_180011220(lVar8 + uVar11);
        }
        uVar2 = DAT_180ca09f8;
        uVar1 = DAT_180ca0950;
        if (cVar3 != cVar4) {
          uVar11 = (ulonglong)DAT_180ca0950;
          uVar12 = (ulonglong)DAT_180ca09f8;
          fVar17 = 0.0;
          if (((*param_1 == 0) || (DAT_180ca09f8 == 0)) ||
             ((lVar6 = FUN_18000f3a0(*param_1 + uVar12), lVar6 == 0 || (uVar1 == 0)))) {
            fVar18 = 0.0;
            fVar19 = 0.0;
            fVar20 = 0.0;
          }
          else {
            pfVar7 = (float *)FUN_1800111b0(local_88,lVar6 + uVar11);
            fVar18 = *pfVar7;
            fVar19 = pfVar7[1];
            fVar20 = pfVar7[2];
          }
          uVar14 = (uint)_DAT_1808ade90;
          if (((DAT_1808ac000 <= (float)((uint)fVar18 & uVar14)) ||
              (DAT_1808ac000 <= (float)((uint)fVar19 & uVar14))) ||
             (DAT_1808ac000 <= (float)((uint)fVar20 & uVar14))) {
            if (((uVar2 == 0) || (lVar8 = FUN_18000f3a0(lVar8 + uVar12), lVar8 == 0)) ||
               (uVar1 == 0)) {
              fVar13 = 0.0;
              fVar16 = 0.0;
            }
            else {
              pfVar7 = (float *)FUN_1800111b0(local_88,lVar8 + uVar11);
              fVar17 = *pfVar7;
              fVar13 = pfVar7[1];
              fVar16 = pfVar7[2];
            }
            fVar17 = (fVar19 - fVar13) * (fVar19 - fVar13) + (fVar18 - fVar17) * (fVar18 - fVar17) +
                     (fVar20 - fVar16) * (fVar20 - fVar16);
            if (fVar17 < 0.0) {
              fVar17 = (float)FUN_18051af10(fVar17);
            }
            else {
              fVar17 = SQRT(fVar17);
            }
            if (fVar17 < DAT_1808acc4c) {
              if (DAT_1811160e0 < 0x28) {
                DAT_1811160e0 = DAT_1811160e0 + 1;
                UVar9 = GetTickCount64();
                FUN_1802b2870("wl_sounds.log","[%llu] sound esp | %s | %.0f %.0f %.0f\n",UVar9,
                              param_2,(double)fVar18,(double)fVar19,(double)fVar20);
              }
              iVar5 = FUN_1804e4d70(&DAT_1809f2b40);
              if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1804e4a90(5);
              }
              if (DAT_1809f2b8c == 0x7fffffff) {
                DAT_1809f2b8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1804e4a90(6);
              }
              if (DAT_180cf9850 == 0x40) {
                FUN_180540530(&DAT_180cf9050,&DAT_180cf9070,0x7e0);
                DAT_180cf9850 = 0x3f;
              }
              local_res18.QuadPart = 0;
              local_res20.QuadPart = 0;
              QueryPerformanceFrequency(&local_res18);
              QueryPerformanceCounter(&local_res20);
              dVar15 = 0.0;
              if (local_res18.QuadPart != 0) {
                dVar15 = (double)local_res20.QuadPart / (double)local_res18.QuadPart;
              }
              lVar8 = *param_1;
              lVar10 = DAT_180cf9850 * 0x20;
              lVar6 = DAT_180cf9850 * 4;
              DAT_180cf9850 = DAT_180cf9850 + 1;
              (&DAT_180cf9050)[lVar6] = dVar15;
              *(float *)(lVar10 + 0x180cf9058) = fVar18;
              *(float *)(lVar10 + 0x180cf905c) = fVar19;
              *(float *)(&DAT_180cf9060 + lVar10) = fVar20;
              *(undefined4 *)(lVar10 + 0x180cf9064) = uStack_64;
              *(longlong *)(lVar10 + 0x180cf9068) = lVar8;
              FUN_1804e4e90(&DAT_1809f2b40);
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== 180233f80 FUN_180233f80 ===== */

void FUN_180233f80(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char *_Str1;
  longlong local_res10 [3];
  
  if ((DAT_180ccf83d == '\0') && (lVar3 = FUN_180273f90(param_1,"userid"), lVar3 != 0)) {
    if (DAT_180ca09fc == 0) {
      lVar3 = 0;
    }
    else {
      uVar1 = FUN_180011200((ulonglong)DAT_180ca09fc + lVar3);
      plVar4 = (longlong *)FUN_1803a0940(local_res10,uVar1);
      lVar3 = *plVar4;
    }
    if (((((lVar3 != 0) &&
          (local_res10[0] = lVar3, lVar5 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar3),
          lVar5 != 0)) && (lVar5 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar5), lVar5 != 0)) &&
        ((lVar5 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar5), lVar5 != 0 &&
         (_Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar5),
         _Str1 + -0x10000 < (char *)0x7ffffffeffff)))) &&
       ((iVar2 = strcmp(_Str1,"C_CSPlayerPawn"), iVar2 == 0 &&
        ((DAT_180ca09f0 != 0 &&
         (iVar2 = FUN_180011200(lVar3 + (ulonglong)DAT_180ca09f0), iVar2 - 1U < 1000)))))) {
      FUN_180233b60(local_res10,"player_footstep");
    }
  }
  return;
}



/* ===== 180234090 FUN_180234090 ===== */

void FUN_180234090(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f2b40);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f2b8c == 0x7fffffff) {
    DAT_1809f2b8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_180cf9850 = 0;
  FUN_1804e4e90(&DAT_1809f2b40);
  return;
}



/* ===== 1802340f0 FUN_1802340f0 ===== */

void FUN_1802340f0(int *param_1)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  LARGE_INTEGER local_950;
  LARGE_INTEGER local_948;
  float local_940;
  float local_93c;
  float local_938;
  float local_934;
  float local_930 [6];
  float local_918;
  float local_914;
  float local_910 [2];
  float local_908;
  float local_904;
  float local_900 [2];
  float local_8f8;
  float local_8f4;
  float local_8f0 [2];
  float local_8e8;
  float local_8e4;
  float local_8e0 [2];
  float local_8d8;
  uint local_8d4;
  int *local_8d0;
  double local_8c8;
  undefined8 uStack_8c0;
  undefined4 auStack_8b8 [548];
  
  if (((param_1 != (int *)0x0) && (DAT_180cd0fa7 != '\0')) && (DAT_181107a40 != 0)) {
    local_948.QuadPart = 0;
    local_950.QuadPart = 0;
    local_8d0 = param_1;
    QueryPerformanceFrequency(&local_948);
    QueryPerformanceCounter(&local_950);
    dVar2 = 0.0;
    if (local_948.QuadPart != 0) {
      dVar2 = (double)local_950.QuadPart / (double)local_948.QuadPart;
    }
    iVar11 = FUN_1804e4d70();
    dVar26 = DAT_1808ac500;
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f2b8c == 0x7fffffff) {
      DAT_1809f2b8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    uVar24 = 0;
    uVar23 = 0;
    if (3 < DAT_180cf9850) {
      lVar16 = 0;
      do {
        lVar18 = uVar24 * 0x20;
        uVar22 = uVar23;
        if (dVar2 - (double)(&DAT_180cf9050)[uVar24 * 4] < dVar26) {
          uVar3 = *(undefined8 *)(lVar18 + 0x180cf9058);
          uVar4 = *(undefined8 *)(&DAT_180cf9060 + lVar18);
          uVar5 = *(undefined8 *)(lVar18 + 0x180cf9068);
          lVar18 = uVar23 * 0x20;
          uVar22 = uVar23 + 1;
          (&DAT_180cf9050)[uVar23 * 4] = (&DAT_180cf9050)[uVar24 * 4];
          *(undefined8 *)(lVar18 + 0x180cf9058) = uVar3;
          *(undefined8 *)(&DAT_180cf9060 + lVar18) = uVar4;
          *(undefined8 *)(lVar18 + 0x180cf9068) = uVar5;
        }
        uVar23 = uVar22;
        if (dVar2 - *(double *)((longlong)&DAT_180cf9070 + lVar16) < dVar26) {
          uVar5 = *(undefined8 *)(lVar16 + 0x180cf9078);
          uVar3 = *(undefined8 *)(&DAT_180cf9080 + lVar16);
          uVar4 = *(undefined8 *)(lVar16 + 0x180cf9088);
          lVar18 = uVar22 * 0x20;
          uVar23 = uVar22 + 1;
          (&DAT_180cf9050)[uVar22 * 4] = *(undefined8 *)((longlong)&DAT_180cf9070 + lVar16);
          *(undefined8 *)(lVar18 + 0x180cf9058) = uVar5;
          *(undefined8 *)(&DAT_180cf9060 + lVar18) = uVar3;
          *(undefined8 *)(lVar18 + 0x180cf9068) = uVar4;
        }
        uVar22 = uVar23;
        if (dVar2 - *(double *)((longlong)&DAT_180cf9090 + lVar16) < dVar26) {
          uVar5 = *(undefined8 *)(lVar16 + 0x180cf9098);
          uVar3 = *(undefined8 *)(&DAT_180cf90a0 + lVar16);
          uVar4 = *(undefined8 *)(lVar16 + 0x180cf90a8);
          lVar18 = uVar23 * 0x20;
          uVar22 = uVar23 + 1;
          (&DAT_180cf9050)[uVar23 * 4] = *(undefined8 *)((longlong)&DAT_180cf9090 + lVar16);
          *(undefined8 *)(lVar18 + 0x180cf9058) = uVar5;
          *(undefined8 *)(&DAT_180cf9060 + lVar18) = uVar3;
          *(undefined8 *)(lVar18 + 0x180cf9068) = uVar4;
        }
        uVar23 = uVar22;
        if (dVar2 - *(double *)((longlong)&DAT_180cf90b0 + lVar16) < dVar26) {
          uVar5 = *(undefined8 *)(lVar16 + 0x180cf90b8);
          uVar3 = *(undefined8 *)(&DAT_180cf90c0 + lVar16);
          uVar4 = *(undefined8 *)(lVar16 + 0x180cf90c8);
          lVar18 = uVar22 * 0x20;
          uVar23 = uVar22 + 1;
          (&DAT_180cf9050)[uVar22 * 4] = *(undefined8 *)((longlong)&DAT_180cf90b0 + lVar16);
          *(undefined8 *)(lVar18 + 0x180cf9058) = uVar5;
          *(undefined8 *)(&DAT_180cf9060 + lVar18) = uVar3;
          *(undefined8 *)(lVar18 + 0x180cf9068) = uVar4;
        }
        uVar24 = uVar24 + 4;
        lVar16 = lVar16 + 0x80;
      } while (uVar24 < DAT_180cf9850 - 3);
    }
    for (; uVar24 < DAT_180cf9850; uVar24 = uVar24 + 1) {
      lVar16 = uVar24 * 0x20;
      uVar22 = uVar23;
      if (dVar2 - (double)(&DAT_180cf9050)[uVar24 * 4] < dVar26) {
        uVar5 = *(undefined8 *)(lVar16 + 0x180cf9058);
        uVar3 = *(undefined8 *)(&DAT_180cf9060 + lVar16);
        uVar4 = *(undefined8 *)(lVar16 + 0x180cf9068);
        lVar16 = uVar23 * 0x20;
        uVar22 = uVar23 + 1;
        (&DAT_180cf9050)[uVar23 * 4] = (&DAT_180cf9050)[uVar24 * 4];
        *(undefined8 *)(lVar16 + 0x180cf9058) = uVar5;
        *(undefined8 *)(&DAT_180cf9060 + lVar16) = uVar3;
        *(undefined8 *)(lVar16 + 0x180cf9068) = uVar4;
      }
      uVar23 = uVar22;
    }
    DAT_180cf9850 = uVar23;
    if ((DAT_18091a1e0 == '\0') || (DAT_18091b3a4 == '\0')) {
      FUN_1804e4e90(&DAT_1809f2b40);
    }
    else {
      FUN_180540530(&local_8c8,&DAT_180cf9050,0x800);
      FUN_1804e4e90(&DAT_1809f2b40);
      uVar9 = DAT_1811079b4;
      uVar8 = DAT_1811079b0;
      if (uVar23 != 0) {
        lVar16 = (longlong)DAT_181107a00;
        bVar7 = false;
        uVar24 = 0;
        local_948.QuadPart = 0xffffffff;
        bVar6 = false;
        if (uVar23 != 0) {
          fVar27 = DAT_18091b3ac;
          fVar28 = DAT_18091b3a8;
          local_934 = DAT_18091b3b4;
          fVar25 = DAT_1808acb94;
          fVar31 = DAT_1808ac1f4;
          fVar32 = DAT_18091b3b0;
          fVar29 = DAT_1808ac34c;
          do {
            local_930[2] = 1.0;
            local_930[0] = 0.0;
            local_918 = 1.0;
            local_930[3] = 0.0;
            local_910[0] = fVar28;
            local_908 = 1.0;
            dVar26 = dVar2 - (double)(&uStack_8c0)[uVar24 * 4 + -1];
            local_914 = 0.0;
            local_900[0] = fVar27;
            local_8f8 = 1.0;
            local_904 = 0.0;
            if (dVar26 <= 0.0) {
              dVar26 = 0.0;
            }
            local_8f0[0] = fVar32;
            local_8e8 = 1.0;
            local_8f4 = 0.0;
            local_8d8 = 1.0;
            local_8e4 = 0.0;
            local_930[1] = (float)dVar26;
            pfVar17 = local_930;
            if (0.0 <= local_930[1]) {
              pfVar17 = local_930 + 1;
            }
            pfVar12 = local_930 + 2;
            if (local_930[1] <= fVar29) {
              pfVar12 = pfVar17;
            }
            local_930[4] = fVar29 - *pfVar12;
            pfVar17 = local_930 + 3;
            if (0.0 <= local_930[4]) {
              pfVar17 = local_930 + 4;
            }
            pfVar12 = &local_918;
            if (local_930[4] <= fVar29) {
              pfVar12 = pfVar17;
            }
            local_8e0[0] = local_934 * *pfVar12;
            pfVar17 = &local_914;
            if (0.0 <= fVar28) {
              pfVar17 = local_910;
            }
            pfVar12 = &local_908;
            if (fVar28 <= fVar29) {
              pfVar12 = pfVar17;
            }
            pfVar17 = &local_904;
            if (0.0 <= fVar27) {
              pfVar17 = local_900;
            }
            pfVar13 = &local_8f8;
            if (fVar27 <= fVar29) {
              pfVar13 = pfVar17;
            }
            pfVar17 = &local_8f4;
            if (0.0 <= fVar32) {
              pfVar17 = local_8f0;
            }
            pfVar14 = &local_8e8;
            if (fVar32 <= fVar29) {
              pfVar14 = pfVar17;
            }
            pfVar17 = &local_8e4;
            if (0.0 <= local_8e0[0]) {
              pfVar17 = local_8e0;
            }
            pfVar15 = &local_8d8;
            if (local_8e0[0] <= fVar29) {
              pfVar15 = pfVar17;
            }
            local_8d4 = (((int)(*pfVar15 * fVar25 + fVar31) << 8 | (int)(*pfVar14 * fVar25 + fVar31)
                         ) << 8 | (int)(*pfVar13 * fVar25 + fVar31)) << 8 |
                        (int)(*pfVar12 * fVar25 + fVar31);
            if (0xffffff < local_8d4) {
              fVar30 = (fVar29 - local_930[4]) * DAT_1808aca5c;
              iVar11 = (int)(fVar30 + fVar30);
              if (0x200 < iVar11) {
                iVar11 = 0x200;
              }
              if (2 < iVar11) {
                fVar27 = *(float *)(&uStack_8c0 + uVar24 * 4);
                fVar28 = *(float *)((longlong)&uStack_8c0 + (uVar24 * 8 + 1) * 4);
                uVar1 = *(undefined4 *)(&uStack_8c0 + uVar24 * 4 + 1);
                iVar21 = 0;
                uVar22 = 0;
                do {
                  fVar25 = (float)FUN_180517200();
                  local_940 = fVar25 * fVar30 + fVar27;
                  fVar25 = (float)FUN_180517790();
                  local_93c = fVar25 * fVar30 + fVar28;
                  local_950.QuadPart = 0;
                  local_938 = (float)uVar1;
                  cVar10 = FUN_1803a1bf0(&DAT_181107930 + lVar16 * 0x40,&local_940,&local_950,uVar8,
                                         uVar9);
                  param_1 = local_8d0;
                  iVar21 = (iVar21 + 1) - (uint)(cVar10 == '\0');
                  (&DAT_1811150e0)[uVar22 * 2] = local_950.s.LowPart;
                  (&DAT_1811150e4)[uVar22 * 2] = local_950.s.HighPart;
                  uVar19 = (int)uVar22 + 1;
                  uVar22 = (ulonglong)uVar19;
                } while ((int)uVar19 < iVar11);
                if (iVar21 != 0) {
                  if (!bVar6) {
                    FUN_1803fbe60(local_8d0);
                    iVar21 = *param_1;
                    lVar20 = (longlong)iVar21;
                    lVar18 = *(longlong *)(param_1 + 2);
                    *(code **)(lVar18 + -0x18 + lVar20 * 0x48) = FUN_18000c1f0;
                    *(undefined8 *)(lVar18 + -0x10 + lVar20 * 0x48) = 0;
                    *(undefined4 *)(lVar18 + -8 + lVar20 * 0x48) = 0;
                    *(undefined4 *)(lVar18 + -4 + lVar20 * 0x48) = 0xffffffff;
                    FUN_1803fbe60(param_1);
                    local_948.s.HighPart = param_1[8];
                    local_948.s.LowPart = iVar21 - 1;
                  }
                  bVar6 = true;
                  FUN_1803fc600(param_1,&DAT_1811150e0,iVar11,local_8d4,DAT_1808ac540,0x200);
                  fVar32 = DAT_18091b3b0;
                }
                fVar27 = DAT_18091b3ac;
                fVar28 = DAT_18091b3a8;
                local_934 = DAT_18091b3b4;
                fVar25 = DAT_1808acb94;
                fVar31 = DAT_1808ac1f4;
                fVar29 = DAT_1808ac34c;
                bVar7 = bVar6;
              }
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar23);
          if (bVar7) {
            local_940 = fVar28;
            local_93c = fVar27;
            local_938 = fVar32;
            FUN_18000ced0(param_1,&local_948,&local_940);
          }
        }
      }
    }
  }
  return;
}



/* ===== 180234900 FUN_180234900 ===== */

longlong * FUN_180234900(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  uVar8 = 0;
  iVar7 = 2;
  iVar4 = iVar1;
  do {
    if (iVar4 < iVar2) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      bVar5 = *(byte *)(lVar6 + *param_2);
      *(int *)(param_2 + 1) = iVar4;
    }
    else {
      bVar5 = 0;
    }
    uVar8 = uVar8 << 8 | (uint)bVar5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (uVar8 != 0) {
    if (iVar4 < iVar2) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      bVar5 = *(byte *)(lVar6 + *param_2);
    }
    else {
      bVar5 = 0;
    }
    iVar4 = uVar8 * bVar5 + iVar4;
    if ((iVar2 < iVar4) || (iVar4 < 0)) {
      iVar4 = iVar2;
    }
    uVar8 = 0;
    *(int *)(param_2 + 1) = iVar4;
    if (bVar5 != 0) {
      iVar7 = 0;
      do {
        if (iVar4 < iVar2) {
          lVar6 = (longlong)iVar4;
          iVar4 = iVar4 + 1;
          bVar3 = *(byte *)(lVar6 + *param_2);
          *(int *)(param_2 + 1) = iVar4;
        }
        else {
          bVar3 = 0;
        }
        iVar7 = iVar7 + 1;
        uVar8 = uVar8 << 8 | (uint)bVar3;
      } while (iVar7 < (int)(uint)bVar5);
    }
    iVar4 = (uVar8 - 1) + iVar4;
    if ((iVar2 < iVar4) || (iVar4 < 0)) {
      iVar4 = iVar2;
    }
    *(int *)(param_2 + 1) = iVar4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((((-1 < iVar1) && (iVar4 = iVar4 - iVar1, -1 < iVar4)) &&
      (iVar1 <= *(int *)((longlong)param_2 + 0xc))) &&
     (iVar4 <= *(int *)((longlong)param_2 + 0xc) - iVar1)) {
    *param_1 = (longlong)iVar1 + *param_2;
    *(int *)((longlong)param_1 + 0xc) = iVar4;
  }
  return param_1;
}



/* ===== 180234a10 FUN_180234a10 ===== */

uint FUN_180234a10(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ushort uVar7;
  uint3 uVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = (int)param_1[1];
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  if (iVar4 < iVar5) {
    lVar6 = *param_1;
    iVar9 = iVar4 + 1;
    bVar1 = *(byte *)(iVar4 + lVar6);
    *(int *)(param_1 + 1) = iVar9;
    if ((byte)(bVar1 - 0x20) < 0xd7) {
      return bVar1 - 0x8b;
    }
    if ((byte)(bVar1 + 9) < 4) {
      if (iVar9 < iVar5) {
        uVar2 = *(undefined1 *)(iVar9 + lVar6);
        *(int *)(param_1 + 1) = iVar4 + 2;
        return CONCAT11(bVar1,uVar2) - 0xf694;
      }
      return (uint)bVar1 * 0x100 - 0xf694;
    }
    if ((byte)(bVar1 + 5) < 4) {
      if (iVar9 < iVar5) {
        bVar3 = *(byte *)(iVar9 + lVar6);
        *(int *)(param_1 + 1) = iVar4 + 2;
        return ((uint)bVar1 * -0x100 + 0xfa94) - (uint)bVar3;
      }
      return (uint)bVar1 * -0x100 + 0xfa94;
    }
    if (bVar1 == 0x1c) {
      if (iVar5 <= iVar9) {
        return 0;
      }
      bVar1 = *(byte *)(iVar9 + lVar6);
      iVar9 = iVar4 + 2;
      *(int *)(param_1 + 1) = iVar9;
      if (iVar9 < iVar5) {
        uVar2 = *(undefined1 *)(iVar9 + lVar6);
        *(int *)(param_1 + 1) = iVar4 + 3;
        return (uint)CONCAT11(bVar1,uVar2);
      }
      return (uint)bVar1 << 8;
    }
    if (bVar1 == 0x1d) {
      if (iVar5 <= iVar9) {
        return 0;
      }
      bVar1 = *(byte *)(iVar9 + lVar6);
      iVar9 = iVar4 + 2;
      *(int *)(param_1 + 1) = iVar9;
      if (iVar5 <= iVar9) {
        return (uint)bVar1 << 0x18;
      }
      iVar10 = iVar4 + 3;
      uVar7 = CONCAT11(bVar1,*(undefined1 *)(iVar9 + lVar6));
      *(int *)(param_1 + 1) = iVar10;
      if (iVar5 <= iVar10) {
        return (uint)uVar7 << 0x10;
      }
      iVar9 = iVar4 + 4;
      uVar8 = CONCAT21(uVar7,*(undefined1 *)(iVar10 + lVar6));
      *(int *)(param_1 + 1) = iVar9;
      if (iVar9 < iVar5) {
        uVar2 = *(undefined1 *)(iVar9 + lVar6);
        *(int *)(param_1 + 1) = iVar4 + 5;
        return CONCAT31(uVar8,uVar2);
      }
      return (uint)uVar8 << 8;
    }
  }
  return 0;
}



/* ===== 180234c10 FUN_180234c10 ===== */

longlong * FUN_180234c10(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  iVar8 = 0;
  if (iVar3 < 0) {
    iVar8 = iVar3;
  }
  *(int *)(param_2 + 1) = iVar8;
  if (iVar8 < iVar3) {
LAB_180234c40:
    do {
      iVar3 = (int)param_2[1];
      lVar6 = (longlong)iVar3;
      iVar1 = *(int *)((longlong)param_2 + 0xc);
      if (iVar3 < iVar1) {
        lVar2 = *param_2;
        if (0x1b < *(byte *)(lVar6 + lVar2)) {
          if (*(char *)(lVar6 + lVar2) == '\x1e') {
            iVar3 = iVar3 + 1;
            if (iVar3 < 0) {
              *(int *)(param_2 + 1) = iVar1;
            }
            else {
              *(int *)(param_2 + 1) = iVar3;
              if (iVar3 < iVar1) {
                iVar4 = iVar3;
                do {
                  if (iVar3 < iVar1) {
                    iVar3 = iVar3 + 1;
                    bVar5 = *(byte *)(lVar2 + iVar4);
                    *(int *)(param_2 + 1) = iVar3;
                    iVar4 = iVar3;
                  }
                  else {
                    bVar5 = 0;
                  }
                } while ((((bVar5 & 0xf) != 0xf) && (bVar5 >> 4 != 0xf)) && (iVar4 < iVar1));
              }
            }
          }
          else {
            FUN_180234a10(param_2);
          }
          goto LAB_180234c40;
        }
        bVar5 = *(byte *)(lVar2 + lVar6);
        uVar7 = (uint)bVar5;
        iVar4 = iVar3 + 1;
        *(int *)(param_2 + 1) = iVar4;
        if (bVar5 == 0xc) {
          if (iVar4 < iVar1) {
            bVar5 = *(byte *)(lVar2 + 1 + lVar6);
            *(int *)(param_2 + 1) = iVar3 + 2;
            uVar7 = bVar5 | 0x100;
            iVar4 = iVar3 + 2;
          }
          else {
            uVar7 = 0x100;
            iVar4 = iVar3 + 1;
          }
        }
      }
      else {
        uVar7 = 0;
        iVar4 = iVar3;
      }
      if (uVar7 == param_3) {
        *param_1 = 0;
        param_1[1] = 0;
        if (iVar8 < 0) {
          return param_1;
        }
        iVar3 = iVar3 - iVar8;
        if (iVar3 < 0) {
          return param_1;
        }
        if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
          return param_1;
        }
        if (*(int *)((longlong)param_2 + 0xc) - iVar8 < iVar3) {
          return param_1;
        }
        lVar6 = (longlong)iVar8 + *param_2;
        *(int *)((longlong)param_1 + 0xc) = iVar3;
        goto LAB_180234d25;
      }
      iVar8 = iVar4;
    } while (iVar4 < iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < *(int *)((longlong)param_2 + 0xc)) {
    lVar6 = *param_2;
LAB_180234d25:
    *param_1 = lVar6;
  }
  return param_1;
}



/* ===== 180234d60 FUN_180234d60 ===== */

longlong * FUN_180234d60(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  iVar9 = 0;
  if (iVar1 < 0) {
    iVar9 = iVar1;
  }
  if (iVar9 < iVar1) {
    lVar5 = *param_2;
    iVar11 = iVar9 + 1;
    if (iVar11 < iVar1) {
      iVar7 = iVar9 + 2;
      uVar8 = (uint)CONCAT11(*(byte *)(lVar5 + iVar9),*(undefined1 *)(lVar5 + iVar11));
      if (iVar7 < iVar1) {
        lVar4 = (longlong)iVar7;
        iVar7 = iVar9 + 3;
        bVar3 = *(byte *)(lVar4 + lVar5);
      }
      else {
        bVar3 = 0;
      }
    }
    else {
      uVar8 = (uint)*(byte *)(lVar5 + iVar9) << 8;
      bVar3 = 0;
      iVar7 = iVar11;
    }
  }
  else {
    uVar8 = 0;
    bVar3 = 0;
    iVar7 = iVar9;
  }
  uVar6 = (uint)bVar3;
  iVar7 = uVar6 * param_3 + iVar7;
  if ((iVar1 < iVar7) || (iVar7 < 0)) {
    iVar7 = iVar1;
  }
  uVar12 = 0;
  *(int *)(param_2 + 1) = iVar7;
  uVar10 = 0;
  if (bVar3 != 0) {
    do {
      if (iVar7 < iVar1) {
        lVar5 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        *(int *)(param_2 + 1) = iVar7;
        bVar2 = *(byte *)(lVar5 + *param_2);
      }
      else {
        bVar2 = 0;
      }
      uVar10 = uVar10 + 1;
      uVar12 = uVar12 << 8 | (uint)bVar2;
    } while ((int)uVar10 < (int)(uint)bVar3);
    uVar10 = 0;
    iVar9 = 0;
    do {
      if (iVar7 < iVar1) {
        lVar5 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        *(int *)(param_2 + 1) = iVar7;
        bVar3 = *(byte *)(lVar5 + *param_2);
      }
      else {
        bVar3 = 0;
      }
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 << 8 | (uint)bVar3;
    } while (iVar9 < (int)uVar6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar9 = uVar12 + 2 + (uVar8 + 1) * uVar6;
  if ((((-1 < iVar9) && (iVar11 = uVar10 - uVar12, -1 < iVar11)) && (iVar9 <= iVar1)) &&
     (iVar11 <= iVar1 - iVar9)) {
    *param_1 = (longlong)iVar9 + *param_2;
    *(int *)((longlong)param_1 + 0xc) = iVar11;
  }
  return param_1;
}



/* ===== 180234e90 FUN_180234e90 ===== */

uint FUN_180234e90(longlong param_1,uint param_2,char *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)CONCAT11(*(undefined1 *)((ulonglong)param_2 + 4 + param_1),
                         *(undefined1 *)((ulonglong)param_2 + 5 + param_1));
  if (uVar4 != 0) {
    iVar3 = 0;
    do {
      uVar1 = iVar3 * 0x10 + param_2 + 0xc;
      uVar2 = (ulonglong)uVar1;
      if (((((uint)*(byte *)((ulonglong)uVar1 + param_1) == (int)*param_3) &&
           ((uint)*(byte *)(uVar2 + 1 + param_1) == (int)param_3[1])) &&
          ((uint)*(byte *)(uVar2 + 2 + param_1) == (int)param_3[2])) &&
         ((uint)*(byte *)(uVar2 + 3 + param_1) == (int)param_3[3])) {
        return (uint)*(byte *)(uVar2 + 9 + param_1) << 0x10 |
               (uint)*(byte *)(uVar2 + 10 + param_1) << 8 |
               (uint)*(byte *)(uVar2 + 8 + param_1) << 0x18 | (uint)*(byte *)(uVar2 + 0xb + param_1)
        ;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar4);
  }
  return 0;
}



/* ===== 180234f50 FUN_180234f50 ===== */

undefined8 * FUN_180234f50(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 local_res8;
  longlong local_38;
  int iStack_30;
  int iStack_2c;
  undefined1 local_28 [16];
  
  local_res8 = 0;
  iVar2 = 0;
  plVar4 = (longlong *)FUN_180234c10(&local_38,param_3,0x12);
  uVar6 = 0;
  local_38 = *plVar4;
  iStack_30 = (int)plVar4[1];
  iStack_2c = *(int *)((longlong)plVar4 + 0xc);
  do {
    if (iStack_2c <= iStack_30) break;
    uVar1 = FUN_180234a10(&local_38);
    uVar5 = (ulonglong)uVar6;
    uVar6 = uVar6 + 1;
    *(undefined4 *)((longlong)&local_res8 + uVar5 * 4) = uVar1;
  } while ((int)uVar6 < 2);
  iVar3 = local_res8._4_4_;
  if ((local_res8._4_4_ != 0) && ((int)local_res8 != 0)) {
    if ((local_res8 < 0) ||
       ((((int)local_res8 < 0 || (*(int *)((longlong)param_2 + 0xc) < local_res8._4_4_)) ||
        (*(int *)((longlong)param_2 + 0xc) - local_res8._4_4_ < (int)local_res8)))) {
      local_38 = 0;
      iStack_2c = 0;
    }
    else {
      local_38 = (longlong)local_res8._4_4_ + *param_2;
      iStack_2c = (int)local_res8;
    }
    iStack_30 = 0;
    plVar4 = (longlong *)FUN_180234c10(local_28,&local_38,0x13);
    local_38 = *plVar4;
    iStack_30 = (int)plVar4[1];
    iStack_2c = *(int *)((longlong)plVar4 + 0xc);
    if ((int)plVar4[1] < iStack_2c) {
      iVar2 = FUN_180234a10(&local_38);
    }
    if (iVar2 != 0) {
      iVar3 = iVar3 + iVar2;
      if ((*(int *)((longlong)param_2 + 0xc) < iVar3) || (iVar3 < 0)) {
        iVar3 = *(int *)((longlong)param_2 + 0xc);
      }
      *(int *)(param_2 + 1) = iVar3;
      FUN_180234900(param_1,param_2);
      return param_1;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}



/* ===== 180235080 FUN_180235080 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180235080(undefined8 param_1,longlong param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  int local_res10;
  undefined8 local_res20;
  longlong local_98;
  uint uStack_90;
  int iStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  uVar9 = (ulonglong)param_3;
  _DAT_180cf98c0 = 0;
  _DAT_180cf98c8 = 0;
  DAT_180cf9888 = param_2;
  _DAT_180cf9890 = param_3;
  uVar2 = FUN_180234e90(param_2,uVar9,&DAT_18073aa18);
  iVar3 = FUN_180234e90(param_2,uVar9,&DAT_18073aa20);
  _DAT_180cf9898 = iVar3;
  DAT_180cf989c = FUN_180234e90(param_2,param_3,&DAT_1806e788c);
  iVar4 = FUN_180234e90(param_2,param_3,&DAT_18073aa28);
  _DAT_180cf98a0 = iVar4;
  iVar5 = FUN_180234e90(param_2,param_3,&DAT_18073a9f8);
  DAT_180cf98a4 = iVar5;
  iVar6 = FUN_180234e90(param_2,uVar9,&DAT_18073aa00);
  _DAT_180cf98a8 = iVar6;
  _DAT_180cf98ac = FUN_180234e90(param_2,param_3,&DAT_18073aa08);
  _DAT_180cf98b0 = FUN_180234e90(param_2,param_3,&DAT_18073aa10);
  if (uVar2 == 0) {
    return 0;
  }
  if (DAT_180cf989c == 0) {
    return 0;
  }
  if (iVar5 == 0) {
    return 0;
  }
  if (iVar6 == 0) {
    return 0;
  }
  if (iVar4 != 0) {
    if (iVar3 == 0) {
      return 0;
    }
    goto LAB_1802355ce;
  }
  iVar4 = 0;
  uVar15 = (uint)CONCAT11(*(undefined1 *)(uVar9 + 4 + param_2),*(undefined1 *)(uVar9 + 5 + param_2))
  ;
  iVar3 = 2;
  iVar5 = 0;
  iVar6 = 0;
  iVar13 = 0;
  if (uVar15 == 0) {
    return 0;
  }
  while( true ) {
    uVar8 = iVar13 * 0x10 + param_3 + 0xc;
    uVar9 = (ulonglong)uVar8;
    if ((((*(char *)(uVar9 + param_2) == 'C') && (*(char *)(uVar9 + 1 + param_2) == 'F')) &&
        (*(char *)(uVar9 + 2 + param_2) == 'F')) && (*(char *)(uVar9 + 3 + param_2) == ' ')) break;
    iVar13 = iVar13 + 1;
    if ((int)uVar15 <= iVar13) {
      return 0;
    }
  }
  uVar15 = (uint)*(byte *)((ulonglong)uVar8 + 0xb + param_2) +
           (uint)*(byte *)(uVar9 + 9 + param_2) * 0x10000 +
           (uint)*(byte *)(uVar9 + 10 + param_2) * 0x100 +
           (uint)*(byte *)((ulonglong)uVar8 + 8 + param_2) * 0x1000000;
  if (uVar15 == 0) {
    return 0;
  }
  _DAT_180cf98c0 = (ulonglong)uVar15 + param_2;
  _DAT_180cf9900 = 0;
  _DAT_180cf9908 = 0;
  _DAT_180cf9910 = 0;
  _DAT_180cf9918 = 0;
  _DAT_180cf98c8 = CONCAT44(0x20000000,_DAT_180cf98c8);
  uStack_90 = (uint)*(byte *)(_DAT_180cf98c0 + 2);
  iStack_8c = 0x20000000;
  local_98 = _DAT_180cf98c0;
  FUN_180234900(local_68,&local_98);
  pauVar10 = (undefined1 (*) [16])FUN_180234900(local_68,&local_98);
  local_68 = *pauVar10;
  plVar11 = (longlong *)FUN_180234d60(local_78,local_68,0);
  local_88 = *plVar11;
  uStack_80 = plVar11[1];
  FUN_180234900(local_68,&local_98);
  puVar12 = (undefined8 *)FUN_180234900(local_68,&local_98);
  _DAT_180cf98e0 = *puVar12;
  uRam0000000180cf98e8 = puVar12[1];
  pauVar10 = (undefined1 (*) [16])FUN_180234c10(local_68,&local_88,0x11);
  local_68 = *pauVar10;
  if (local_68._8_4_ < local_68._12_4_) {
    iVar4 = FUN_180234a10(local_68);
  }
  pauVar10 = (undefined1 (*) [16])FUN_180234c10(local_68,&local_88,0x106);
  local_68 = *pauVar10;
  if (local_68._8_4_ < local_68._12_4_) {
    iVar3 = FUN_180234a10(local_68);
  }
  pauVar10 = (undefined1 (*) [16])FUN_180234c10(local_68,&local_88,0x124);
  local_68 = *pauVar10;
  if (local_68._8_4_ < local_68._12_4_) {
    iVar5 = FUN_180234a10(local_68);
  }
  pauVar10 = (undefined1 (*) [16])FUN_180234c10(local_68,&local_88,0x125);
  local_68 = *pauVar10;
  if (local_68._8_4_ < local_68._12_4_) {
    iVar6 = FUN_180234a10(local_68);
  }
  auVar16._8_4_ = uStack_90;
  auVar16._0_8_ = local_98;
  auVar16._12_4_ = iStack_8c;
  local_res10 = 0;
  local_res20 = 0;
  local_78 = auVar16;
  plVar11 = (longlong *)FUN_180234c10(local_58,&local_88,0x12);
  local_88 = *plVar11;
  uStack_80 = plVar11[1];
  uVar9 = 0;
  do {
    if (uStack_80._4_4_ <= (int)uStack_80) break;
    uVar7 = FUN_180234a10(&local_88);
    uVar15 = (int)uVar9 + 1;
    *(undefined4 *)((longlong)&local_res20 + uVar9 * 4) = uVar7;
    uVar9 = (ulonglong)uVar15;
  } while ((int)uVar15 < 2);
  iVar13 = local_res20._4_4_;
  iVar14 = auVar16._12_4_;
  if ((local_res20._4_4_ == 0) || ((uint)local_res20 == 0)) {
LAB_1802354f7:
    _DAT_180cf98f0 = 0;
    _DAT_180cf98fc = 0;
    _DAT_180cf98f8 = 0;
  }
  else {
    if (((local_res20 < 0) || (((int)(uint)local_res20 < 0 || (iVar14 < local_res20._4_4_)))) ||
       (iVar14 - local_res20._4_4_ < (int)(uint)local_res20)) {
      uVar15 = 0;
      local_88 = 0;
    }
    else {
      local_88 = auVar16._0_8_ + (longlong)local_res20._4_4_;
      uVar15 = (uint)local_res20;
    }
    uStack_80 = (ulonglong)uVar15 << 0x20;
    plVar11 = (longlong *)FUN_180234c10(local_58,&local_88,0x13);
    local_88 = *plVar11;
    uStack_80 = plVar11[1];
    if ((int)plVar11[1] < *(int *)((longlong)plVar11 + 0xc)) {
      local_res10 = FUN_180234a10();
    }
    if (local_res10 == 0) goto LAB_1802354f7;
    local_res10 = local_res10 + iVar13;
    if (iVar14 < local_res10) {
LAB_1802354db:
      local_78._8_4_ = iVar14;
    }
    else {
      local_78._8_4_ = local_res10;
      if (local_res10 < 0) goto LAB_1802354db;
    }
    FUN_180234900(local_68,local_78);
    _DAT_180cf98f0 = local_68._0_8_;
    _DAT_180cf98fc = local_68._12_4_;
    _DAT_180cf98f8 = local_68._8_4_;
  }
  if (iVar3 != 2) {
    return 0;
  }
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar5 != 0) {
    if (iVar6 == 0) {
      return 0;
    }
    if ((iVar14 < iVar5) || (uStack_90 = iVar5, iVar5 < 0)) {
      uStack_90 = iVar14;
    }
    puVar12 = (undefined8 *)FUN_180234900(local_58,&local_98);
    _DAT_180cf9900 = *puVar12;
    _DAT_180cf9908 = puVar12[1];
    if (((iVar6 < 0) || (uVar15 = iStack_8c - iVar6, (int)uVar15 < 0)) || (iStack_8c < iVar6)) {
      uVar15 = 0;
      _DAT_180cf9910 = 0;
    }
    else {
      _DAT_180cf9910 = iVar6 + local_98;
    }
    _DAT_180cf9918 = (ulonglong)uVar15 << 0x20;
    iVar14 = iStack_8c;
  }
  if ((iVar14 < iVar4) || (uStack_90 = iVar4, iVar4 < 0)) {
    uStack_90 = iVar14;
  }
  puVar12 = (undefined8 *)FUN_180234900(local_58,&local_98);
  _DAT_180cf98d0 = *puVar12;
  uRam0000000180cf98d8 = puVar12[1];
LAB_1802355ce:
  uVar15 = (uint)CONCAT11(*(undefined1 *)((ulonglong)param_3 + 4 + param_2),
                          *(undefined1 *)((ulonglong)param_3 + 5 + param_2));
  iVar3 = 0;
  if (uVar15 != 0) {
    do {
      uVar8 = iVar3 * 0x10 + param_3 + 0xc;
      uVar9 = (ulonglong)uVar8;
      if (((*(char *)(uVar9 + param_2) == 'm') && (*(char *)(param_2 + 1 + uVar9) == 'a')) &&
         ((*(char *)(param_2 + 2 + uVar9) == 'x' && (*(char *)(param_2 + 3 + uVar9) == 'p')))) {
        uVar15 = (uint)*(byte *)((ulonglong)uVar8 + 0xb + param_2) +
                 (uint)*(byte *)(uVar9 + 9 + param_2) * 0x10000 +
                 (uint)*(byte *)(uVar9 + 10 + param_2) * 0x100 +
                 (uint)*(byte *)((ulonglong)uVar8 + 8 + param_2) * 0x1000000;
        if (uVar15 != 0) {
          _DAT_180cf9894 =
               (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar15 + 4 + param_2),
                              *(undefined1 *)((ulonglong)uVar15 + 5 + param_2));
          goto LAB_18023562a;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar15);
  }
  _DAT_180cf9894 = 0xffff;
LAB_18023562a:
  uVar15 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar2 + 2 + param_2),
                          *(undefined1 *)((ulonglong)uVar2 + 3 + param_2));
  iVar3 = 0;
  DAT_180cf98b8 = 0;
  iVar4 = 0;
  if (uVar15 != 0) {
    do {
      uVar8 = uVar2 + 4 + iVar4 * 8;
      uVar9 = (ulonglong)uVar8;
      sVar1 = CONCAT11(*(undefined1 *)(param_2 + (ulonglong)uVar8),
                       *(undefined1 *)(param_2 + 1 + (ulonglong)uVar8));
      if ((sVar1 == 0) ||
         ((sVar1 == 3 &&
          ((sVar1 = CONCAT11(*(undefined1 *)(param_2 + 2 + uVar9),
                             *(undefined1 *)(param_2 + 3 + uVar9)), sVar1 == 1 || (sVar1 == 10))))))
      {
        iVar3 = ((uint)*(byte *)(param_2 + 5 + uVar9) << 0x10 |
                 (uint)*(byte *)(param_2 + 6 + uVar9) << 8 |
                 (uint)*(byte *)(param_2 + 4 + uVar9) << 0x18 | (uint)*(byte *)(param_2 + 7 + uVar9)
                ) + uVar2;
        DAT_180cf98b8 = iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar15);
    if (iVar3 != 0) {
      _DAT_180cf98b4 = 0xffffffff;
      _DAT_180cf98bc =
           (uint)CONCAT11(*(undefined1 *)((longlong)DAT_180cf989c + 0x32 + param_2),
                          *(undefined1 *)((longlong)DAT_180cf989c + 0x33 + param_2));
      return 1;
    }
  }
  _DAT_180cf98b4 = 0xffffffff;
  return 0;
}



/* ===== 180235750 FUN_180235750 ===== */

uint FUN_180235750(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  int iVar14;
  ulonglong uVar15;
  
  uVar12 = (ulonglong)DAT_180cf98b8;
  uVar15 = (ulonglong)DAT_180cf98b8;
  lVar4 = uVar12 + DAT_180cf9888;
  sVar6 = CONCAT11(*(undefined1 *)(uVar12 + DAT_180cf9888),*(undefined1 *)(lVar4 + 1));
  if (sVar6 == 0) {
    if ((int)param_2 < (int)(CONCAT11(*(undefined1 *)(lVar4 + 2),*(undefined1 *)(lVar4 + 3)) - 6)) {
      return (uint)*(byte *)((longlong)(int)param_2 + uVar12 + 6 + DAT_180cf9888);
    }
  }
  else if (sVar6 == 6) {
    uVar11 = (uint)CONCAT11(*(byte *)(lVar4 + 6),*(byte *)(lVar4 + 7));
    if ((uVar11 <= param_2) &&
       (param_2 < (((uint)*(byte *)(lVar4 + 8) + (uint)*(byte *)(lVar4 + 6)) * 0x100 |
                  (uint)*(byte *)(lVar4 + 7)) + (uint)*(byte *)(lVar4 + 9))) {
      lVar4 = (param_2 - uVar11) * 2 + uVar15;
      return (uint)CONCAT11(*(undefined1 *)(lVar4 + 10 + DAT_180cf9888),
                            *(undefined1 *)(lVar4 + 0xb + DAT_180cf9888));
    }
  }
  else if (sVar6 != 2) {
    if (sVar6 == 4) {
      if ((int)param_2 < 0x10000) {
        uVar8 = DAT_180cf98b8 + 0xe;
        sVar6 = CONCAT11(*(undefined1 *)(lVar4 + 10),*(undefined1 *)(lVar4 + 0xb));
        uVar7 = CONCAT11(*(undefined1 *)(lVar4 + 6),*(undefined1 *)(lVar4 + 7)) >> 1;
        uVar11 = CONCAT11(*(undefined1 *)(lVar4 + 0xc),*(undefined1 *)(lVar4 + 0xd)) & 0xfffffffe;
        uVar13 = CONCAT11(*(undefined1 *)(lVar4 + 8),*(undefined1 *)(lVar4 + 9)) >> 1;
        lVar4 = (ulonglong)uVar11 + (ulonglong)uVar8;
        if ((int)param_2 <
            (int)(uint)CONCAT11(*(undefined1 *)(lVar4 + DAT_180cf9888),
                                *(undefined1 *)(lVar4 + 1 + DAT_180cf9888))) {
          uVar11 = uVar8;
        }
        else {
          uVar11 = DAT_180cf98b8 + 0xe + uVar11;
        }
        uVar11 = uVar11 - 2;
        for (; sVar6 != 0; sVar6 = sVar6 + -1) {
          uVar13 = uVar13 >> 1;
          uVar2 = (uint)uVar13 * 2;
          uVar3 = uVar2 + uVar11;
          if ((int)param_2 <=
              (int)(uint)CONCAT11(*(undefined1 *)
                                   ((ulonglong)uVar11 + DAT_180cf9888 + (ulonglong)uVar2),
                                  *(undefined1 *)
                                   ((ulonglong)uVar11 + DAT_180cf9888 + 1 + (ulonglong)uVar2))) {
            uVar3 = uVar11;
          }
          uVar11 = uVar3;
        }
        lVar4 = (ulonglong)((uVar11 - uVar8) + 2 >> 1 & 0xffff) * 2;
        lVar5 = (uint)uVar7 * 2 + uVar15 + lVar4;
        uVar11 = (uint)CONCAT11(*(undefined1 *)(lVar5 + 0x10 + DAT_180cf9888),
                                *(undefined1 *)(lVar5 + 0x11 + DAT_180cf9888));
        if (((int)uVar11 <= (int)param_2) &&
           ((int)param_2 <=
            (int)(uint)CONCAT11(*(undefined1 *)(lVar4 + (ulonglong)uVar8 + DAT_180cf9888),
                                *(undefined1 *)(lVar4 + (ulonglong)uVar8 + 1 + DAT_180cf9888)))) {
          lVar5 = uVar15 + lVar4 + (ulonglong)((uint)uVar7 * 6);
          uVar13 = CONCAT11(*(undefined1 *)(lVar5 + 0x10 + DAT_180cf9888),
                            *(undefined1 *)(lVar5 + 0x11 + DAT_180cf9888));
          if (uVar13 == 0) {
            lVar4 = (uint)uVar7 * 4 + uVar15 + lVar4;
            return (uint)(ushort)(CONCAT11(*(undefined1 *)(lVar4 + 0x10 + DAT_180cf9888),
                                           *(undefined1 *)(lVar4 + 0x11 + DAT_180cf9888)) +
                                 (short)param_2);
          }
          lVar4 = (ulonglong)uVar13 + (longlong)(int)((param_2 - uVar11) * 2) + uVar15 + lVar4 +
                  (ulonglong)((uint)uVar7 * 6);
          return (uint)CONCAT11(*(undefined1 *)(lVar4 + 0x10 + DAT_180cf9888),
                                *(undefined1 *)(lVar4 + 0x11 + DAT_180cf9888));
        }
      }
    }
    else if ((sVar6 == 0xc) || (sVar6 == 0xd)) {
      iVar9 = 0;
      iVar14 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0xc),*(undefined1 *)(lVar4 + 0xd))
                                 ,*(undefined1 *)(lVar4 + 0xe)),*(undefined1 *)(lVar4 + 0xf));
      if (0 < iVar14) {
        do {
          iVar10 = (iVar14 - iVar9 >> 1) + iVar9;
          lVar5 = (longlong)(iVar10 * 0xc);
          uVar11 = (uint)*(byte *)(lVar4 + 0x11 + lVar5) << 0x10 |
                   (uint)*(byte *)(lVar4 + 0x12 + lVar5) << 8 |
                   (uint)*(byte *)(lVar4 + 0x10 + lVar5) << 0x18 |
                   (uint)*(byte *)(lVar4 + 0x13 + lVar5);
          if (param_2 < uVar11) {
            iVar14 = iVar10;
          }
          else {
            lVar1 = lVar5 + uVar15;
            if (param_2 <=
                ((uint)*(byte *)(lVar4 + 0x15 + lVar5) << 0x10 |
                 (uint)*(byte *)(lVar4 + 0x16 + lVar5) << 8 |
                 (uint)*(byte *)(lVar4 + 0x14 + lVar5) << 0x18 |
                (uint)*(byte *)(lVar4 + 0x17 + lVar5))) {
              uVar8 = (uint)*(byte *)(lVar1 + 0x19 + DAT_180cf9888) << 0x10 |
                      (uint)*(byte *)(lVar1 + 0x1a + DAT_180cf9888) << 8 |
                      (uint)*(byte *)(lVar1 + 0x18 + DAT_180cf9888) << 0x18 |
                      (uint)*(byte *)(lVar1 + 0x1b + DAT_180cf9888);
              if (sVar6 == 0xc) {
                return param_2 + (uVar8 - uVar11);
              }
              return uVar8;
            }
            iVar9 = iVar10 + 1;
          }
        } while (iVar9 < iVar14);
      }
    }
  }
  return 0;
}



/* ===== 180235af0 FUN_180235af0 ===== */

int FUN_180235af0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 0x14) <= param_2) || (1 < *(int *)(param_1 + 0x3c))) {
    return -1;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x3c) == 0) {
    lVar4 = lVar4 + *(longlong *)(param_1 + 8);
    lVar3 = (longlong)(param_2 * 2);
    iVar1 = (uint)CONCAT11(*(undefined1 *)(lVar4 + lVar3),*(undefined1 *)(lVar4 + 1 + lVar3)) * 2;
    iVar2 = iVar1 + *(int *)(param_1 + 0x20);
    if (iVar1 == (uint)CONCAT11(*(undefined1 *)(lVar4 + 2 + lVar3),
                                *(undefined1 *)(lVar4 + 3 + lVar3)) * 2) {
      iVar2 = -1;
    }
    return iVar2;
  }
  lVar3 = (longlong)(param_2 * 4) + *(longlong *)(param_1 + 8);
  uVar5 = (uint)*(byte *)(lVar3 + 1 + lVar4) << 0x10 | (uint)*(byte *)(lVar3 + 2 + lVar4) << 8 |
          (uint)*(byte *)(lVar3 + lVar4) << 0x18 | (uint)*(byte *)(lVar3 + 3 + lVar4);
  iVar2 = uVar5 + *(int *)(param_1 + 0x20);
  if (uVar5 == ((uint)*(byte *)(lVar3 + 5 + lVar4) << 0x10 | (uint)*(byte *)(lVar3 + 6 + lVar4) << 8
                | (uint)*(byte *)(lVar3 + 4 + lVar4) << 0x18 | (uint)*(byte *)(lVar3 + 7 + lVar4)))
  {
    iVar2 = -1;
  }
  return iVar2;
}



/* ===== 180235be0 FUN_180235be0 ===== */

int FUN_180235be0(longlong param_1,int param_2,int param_3,int param_4,undefined2 param_5,
                 undefined2 param_6,int param_7,int param_8,int param_9,int param_10)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    if (param_3 != 0) {
      lVar1 = (longlong)param_2 * 0xe;
      param_2 = param_2 + 1;
      *(short *)(lVar1 + param_1) = (short)(param_7 + param_9 >> 1);
      *(undefined1 *)(lVar1 + 0xc + param_1) = 3;
      *(undefined2 *)(lVar1 + 4 + param_1) = (undefined2)param_9;
      *(undefined2 *)(lVar1 + 6 + param_1) = (undefined2)param_10;
      *(short *)(lVar1 + 2 + param_1) = (short)(param_8 + param_10 >> 1);
    }
    lVar1 = (longlong)param_2 * 0xe;
    *(undefined2 *)(lVar1 + param_1) = param_5;
    *(undefined2 *)(lVar1 + 2 + param_1) = param_6;
    *(short *)(lVar1 + 4 + param_1) = (short)param_7;
    *(undefined1 *)(lVar1 + 0xc + param_1) = 3;
    *(short *)(lVar1 + 6 + param_1) = (short)param_8;
    return param_2 + 1;
  }
  lVar1 = (longlong)param_2 * 0xe;
  *(undefined2 *)(lVar1 + param_1) = param_5;
  *(undefined2 *)(lVar1 + 2 + param_1) = param_6;
  if (param_3 == 0) {
    *(undefined1 *)(lVar1 + 0xc + param_1) = 2;
    *(undefined4 *)(lVar1 + 4 + param_1) = 0;
    return param_2 + 1;
  }
  *(undefined2 *)(lVar1 + 4 + param_1) = (undefined2)param_9;
  *(undefined2 *)(lVar1 + 6 + param_1) = (undefined2)param_10;
  *(undefined1 *)(lVar1 + 0xc + param_1) = 3;
  return param_2 + 1;
}



/* ===== 180235cd0 FUN_180235cd0 ===== */

/* WARNING: Removing unreachable block (ram,0x000180236805) */

int FUN_180235cd0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 uVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ushort uVar19;
  int iVar20;
  short sVar21;
  short *psVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  int iVar28;
  byte bVar29;
  int iVar30;
  byte bVar31;
  undefined2 uVar32;
  longlong lVar33;
  int iVar34;
  longlong lVar35;
  byte bVar36;
  undefined2 uVar37;
  int iVar38;
  longlong lVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int local_f8;
  int local_f4;
  int local_f0;
  
  iVar15 = FUN_180235af0();
  bVar36 = 0;
  *param_3 = 0;
  fVar12 = DAT_1808ac34c;
  fVar11 = DAT_1808abf9c;
  if (iVar15 < 0) {
LAB_18023680a:
    iVar15 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 8);
    lVar35 = (longlong)iVar15;
    lVar39 = lVar9 + lVar35;
    sVar21 = CONCAT11(*(char *)(lVar9 + lVar35),*(undefined1 *)(lVar39 + 1));
    if (sVar21 < 1) {
      iVar15 = 0;
      lVar18 = 0;
      if (*(char *)(lVar9 + lVar35) < '\0') {
        puVar26 = (undefined1 *)(lVar39 + 10);
        lVar39 = lVar18;
        iVar20 = iVar15;
        do {
          bVar36 = puVar26[1];
          uVar13 = puVar26[3];
          uVar7 = puVar26[2];
          if ((bVar36 & 2) == 0) {
            fVar46 = 0.0;
            fVar47 = 0.0;
            puVar26 = puVar26 + 4;
          }
          else if ((bVar36 & 1) == 0) {
            pcVar5 = puVar26 + 4;
            pcVar6 = puVar26 + 5;
            puVar26 = puVar26 + 6;
            fVar46 = (float)(int)*pcVar5;
            fVar47 = (float)(int)*pcVar6;
          }
          else {
            puVar1 = puVar26 + 4;
            puVar2 = puVar26 + 5;
            puVar3 = puVar26 + 7;
            puVar4 = puVar26 + 6;
            puVar26 = puVar26 + 8;
            fVar46 = (float)(int)CONCAT11(*puVar1,*puVar2);
            fVar47 = (float)(int)CONCAT11(*puVar4,*puVar3);
          }
          fVar45 = 0.0;
          fVar44 = 0.0;
          if ((bVar36 & 8) == 0) {
            if ((bVar36 & 0x40) == 0) {
              fVar42 = fVar12;
              fVar43 = fVar12;
              if (-1 < (char)bVar36) goto LAB_1802362cc;
              sVar21 = CONCAT11(*puVar26,puVar26[1]);
              puVar1 = puVar26 + 2;
              puVar2 = puVar26 + 3;
              puVar3 = puVar26 + 4;
              puVar4 = puVar26 + 5;
              sVar14 = CONCAT11(puVar26[6],puVar26[7]);
              puVar26 = puVar26 + 8;
              fVar44 = (float)(int)CONCAT11(*puVar1,*puVar2) * fVar11;
              fVar45 = (float)(int)CONCAT11(*puVar3,*puVar4) * fVar11;
            }
            else {
              sVar21 = CONCAT11(*puVar26,puVar26[1]);
              sVar14 = CONCAT11(puVar26[2],puVar26[3]);
              puVar26 = puVar26 + 4;
            }
            fVar42 = (float)(int)sVar21 * fVar11;
            fVar43 = (float)(int)sVar14 * fVar11;
          }
          else {
            puVar1 = puVar26 + 1;
            uVar8 = *puVar26;
            puVar26 = puVar26 + 2;
            fVar42 = (float)(int)CONCAT11(uVar8,*puVar1) * fVar11;
            fVar43 = fVar42;
          }
LAB_1802362cc:
          fVar41 = fVar44 * fVar44 + fVar42 * fVar42;
          if (fVar41 < 0.0) {
            fVar41 = (float)FUN_18051af10(fVar41);
          }
          else {
            fVar41 = SQRT(fVar41);
          }
          fVar40 = fVar43 * fVar43 + fVar45 * fVar45;
          if (fVar40 < 0.0) {
            fVar40 = (float)FUN_18051af10();
          }
          else {
            fVar40 = SQRT(fVar40);
          }
          iVar24 = FUN_180237e60(param_1,CONCAT11(uVar7,uVar13));
          lVar18 = lVar39;
          iVar15 = iVar20;
          if (0 < iVar24) {
            iVar15 = 0;
            if (iVar24 < 4) goto LAB_18023668d;
            do {
              psVar22 = (short *)((longlong)iVar15 * 0xe);
              sVar21 = *psVar22;
              *psVar22 = (short)(int)(((float)(int)psVar22[1] * fVar45 + (float)(int)sVar21 * fVar42
                                      + fVar46) * fVar41);
              psVar22[1] = (short)(int)(((float)(int)psVar22[1] * fVar43 +
                                         (float)(int)sVar21 * fVar44 + fVar47) * fVar40);
              sVar21 = psVar22[2];
              psVar22[2] = (short)(int)(((float)(int)psVar22[3] * fVar45 +
                                         (float)(int)sVar21 * fVar42 + fVar46) * fVar41);
              psVar22[3] = (short)(int)(((float)(int)psVar22[3] * fVar43 +
                                         (float)(int)sVar21 * fVar44 + fVar47) * fVar40);
              sVar21 = psVar22[7];
              psVar22[7] = (short)(int)(((float)(int)psVar22[8] * fVar45 +
                                         (float)(int)sVar21 * fVar42 + fVar46) * fVar41);
              psVar22[8] = (short)(int)(((float)(int)psVar22[8] * fVar43 +
                                         (float)(int)sVar21 * fVar44 + fVar47) * fVar40);
              sVar21 = psVar22[9];
              psVar22[9] = (short)(int)(((float)(int)psVar22[10] * fVar45 +
                                         (float)(int)sVar21 * fVar42 + fVar46) * fVar41);
              psVar22[10] = (short)(int)(((float)(int)psVar22[10] * fVar43 +
                                          (float)(int)sVar21 * fVar44 + fVar47) * fVar40);
              sVar21 = psVar22[0xe];
              psVar22[0xe] = (short)(int)(((float)(int)psVar22[0xf] * fVar45 +
                                           (float)(int)sVar21 * fVar42 + fVar46) * fVar41);
              psVar22[0xf] = (short)(int)(((float)(int)psVar22[0xf] * fVar43 +
                                           (float)(int)sVar21 * fVar44 + fVar47) * fVar40);
              sVar21 = psVar22[0x10];
              psVar22[0x10] =
                   (short)(int)(((float)(int)psVar22[0x11] * fVar45 + (float)(int)sVar21 * fVar42 +
                                fVar46) * fVar41);
              psVar22[0x11] =
                   (short)(int)(((float)(int)psVar22[0x11] * fVar43 + (float)(int)sVar21 * fVar44 +
                                fVar47) * fVar40);
              sVar21 = psVar22[0x15];
              psVar22[0x15] =
                   (short)(int)(((float)(int)psVar22[0x16] * fVar45 + (float)(int)sVar21 * fVar42 +
                                fVar46) * fVar41);
              psVar22[0x16] =
                   (short)(int)(((float)(int)psVar22[0x16] * fVar43 + (float)(int)sVar21 * fVar44 +
                                fVar47) * fVar40);
              sVar21 = psVar22[0x17];
              iVar15 = iVar15 + 4;
              psVar22[0x17] =
                   (short)(int)(((float)(int)psVar22[0x18] * fVar45 + (float)(int)sVar21 * fVar42 +
                                fVar46) * fVar41);
              psVar22[0x18] =
                   (short)(int)(((float)(int)psVar22[0x18] * fVar43 + (float)(int)sVar21 * fVar44 +
                                fVar47) * fVar40);
            } while (iVar15 < iVar24 + -3);
            for (; iVar15 < iVar24; iVar15 = iVar15 + 1) {
LAB_18023668d:
              psVar22 = (short *)((longlong)iVar15 * 0xe);
              sVar21 = *psVar22;
              *psVar22 = (short)(int)(((float)(int)psVar22[1] * fVar45 + (float)(int)sVar21 * fVar42
                                      + fVar46) * fVar41);
              psVar22[1] = (short)(int)(((float)(int)psVar22[1] * fVar43 +
                                         (float)(int)sVar21 * fVar44 + fVar47) * fVar40);
              sVar21 = psVar22[2];
              psVar22[2] = (short)(int)(((float)(int)psVar22[3] * fVar45 +
                                         (float)(int)sVar21 * fVar42 + fVar46) * fVar41);
              psVar22[3] = (short)(int)(((float)(int)psVar22[3] * fVar43 +
                                         (float)(int)sVar21 * fVar44 + fVar47) * fVar40);
            }
            iVar15 = iVar24 + iVar20;
            lVar18 = _malloc_base((longlong)iVar15 * 0xe);
            if (lVar18 == 0) {
              if (lVar39 != 0) {
                thunk_FUN_1805277b0(lVar39);
              }
              goto LAB_18023680a;
            }
            if ((0 < iVar20) && (lVar39 != 0)) {
              FUN_180540530(lVar18,lVar39,(longlong)iVar20 * 0xe);
            }
            FUN_180540530((longlong)iVar20 * 0xe + lVar18,0,(longlong)iVar24 * 0xe);
            if (lVar39 != 0) {
              thunk_FUN_1805277b0(lVar39);
            }
            thunk_FUN_1805277b0(0);
          }
          if ((bVar36 & 0x20) == 0) break;
          lVar39 = lVar18;
          iVar20 = iVar15;
        } while( true );
      }
    }
    else {
      uVar10 = sVar21 * 2;
      lVar33 = (longlong)(int)uVar10;
      uVar13 = *(undefined1 *)(lVar33 + lVar35 + 10 + lVar9);
      uVar7 = *(undefined1 *)(lVar33 + lVar35 + 0xb + lVar9);
      uVar23 = (uint)CONCAT11(*(undefined1 *)(lVar33 + 8 + lVar39),
                              *(undefined1 *)(lVar33 + 9 + lVar39));
      lVar18 = _malloc_base((longlong)(int)((uVar10 | 1) + uVar23) * 0xe);
      if (lVar18 == 0) goto LAB_18023680a;
      bVar31 = 0;
      iVar20 = 0;
      local_f0 = 0;
      pbVar27 = (byte *)((ulonglong)CONCAT11(uVar13,uVar7) + lVar33 + lVar35 + 0xc + lVar9);
      iVar28 = 0;
      iVar24 = uVar23 + 1;
      iVar30 = 0;
      bVar29 = 0;
      do {
        if (bVar29 == 0) {
          bVar31 = *pbVar27;
          if ((bVar31 & 8) != 0) {
            bVar29 = pbVar27[1];
          }
          pbVar27 = pbVar27 + (ulonglong)((bVar31 & 8) != 0) + 1;
        }
        else {
          bVar29 = bVar29 - 1;
        }
        iVar16 = iVar30 + uVar10;
        iVar30 = iVar30 + 1;
        *(byte *)(lVar18 + 0xc + (longlong)iVar16 * 0xe) = bVar31;
      } while (iVar30 < iVar24);
      sVar21 = 0;
      iVar30 = 0;
      do {
        lVar39 = (longlong)(int)(iVar30 + uVar10) * 0xe;
        bVar31 = *(byte *)(lVar18 + 0xc + lVar39);
        bVar29 = bVar31 & 0x10;
        if ((bVar31 & 2) == 0) {
          if (bVar29 == 0) {
            sVar21 = sVar21 + CONCAT11(*pbVar27,pbVar27[1]);
            pbVar27 = pbVar27 + 2;
          }
        }
        else {
          bVar31 = *pbVar27;
          pbVar27 = pbVar27 + 1;
          uVar19 = (ushort)bVar31;
          if (bVar29 == 0) {
            uVar19 = -(ushort)bVar31;
          }
          sVar21 = sVar21 + uVar19;
        }
        iVar30 = iVar30 + 1;
        *(short *)(lVar18 + lVar39) = sVar21;
      } while (iVar30 < iVar24);
      sVar21 = 0;
      iVar30 = 0;
      do {
        lVar39 = (longlong)(int)(iVar30 + uVar10) * 0xe;
        bVar31 = *(byte *)(lVar18 + 0xc + lVar39);
        bVar29 = bVar31 & 0x20;
        if ((bVar31 & 4) == 0) {
          if (bVar29 == 0) {
            sVar21 = sVar21 + CONCAT11(*pbVar27,pbVar27[1]);
            pbVar27 = pbVar27 + 2;
          }
        }
        else {
          bVar31 = *pbVar27;
          pbVar27 = pbVar27 + 1;
          uVar19 = (ushort)bVar31;
          if (bVar29 == 0) {
            uVar19 = -(ushort)bVar31;
          }
          sVar21 = sVar21 + uVar19;
        }
        iVar30 = iVar30 + 1;
        *(short *)(lVar18 + 2 + lVar39) = sVar21;
      } while (iVar30 < iVar24);
      iVar17 = 0;
      local_f8 = 0;
      local_f4 = 0;
      iVar38 = 0;
      iVar24 = 0;
      iVar30 = 0;
      iVar16 = 0;
      iVar25 = 0;
      do {
        lVar39 = (longlong)(int)(iVar25 + uVar10) * 0xe;
        bVar31 = *(byte *)(lVar18 + 0xc + lVar39);
        sVar21 = *(short *)(lVar18 + 2 + lVar39);
        sVar14 = *(short *)(lVar18 + lVar39);
        iVar34 = (int)sVar14;
        if (iVar28 == iVar25) {
          if (iVar25 != 0) {
            iVar17 = FUN_180235be0(lVar18,iVar17,iVar20,bVar36,iVar16,iVar30,local_f4,local_f8,
                                   iVar24,iVar38);
          }
          iVar20 = (int)sVar21;
          bVar36 = ~bVar31 & 1;
          if (bVar36 == 0) {
            iVar30 = iVar20;
            iVar16 = iVar34;
          }
          else {
            iVar16 = (int)*(short *)(lVar18 + 0xe + lVar39);
            iVar30 = (int)*(short *)(lVar18 + 0x10 + lVar39);
            local_f8 = iVar20;
            local_f4 = iVar34;
            if ((*(byte *)(lVar18 + 0x1a + lVar39) & 1) == 0) {
              iVar30 = iVar30 + iVar20 >> 1;
              iVar16 = iVar16 + iVar34 >> 1;
            }
            else {
              iVar25 = iVar25 + 1;
            }
          }
          iVar20 = 0;
          lVar39 = (longlong)iVar17;
          iVar17 = iVar17 + 1;
          lVar39 = lVar39 * 0xe;
          *(undefined4 *)(lVar18 + 4 + lVar39) = 0;
          *(undefined1 *)(lVar18 + 0xc + lVar39) = 1;
          *(short *)(lVar18 + lVar39) = (short)iVar16;
          *(short *)(lVar18 + 2 + lVar39) = (short)iVar30;
          iVar28 = CONCAT11(*(undefined1 *)(iVar15 + lVar9 + 10 + (longlong)(local_f0 * 2)),
                            *(undefined1 *)(iVar15 + lVar9 + 0xb + (longlong)(local_f0 * 2))) + 1;
          local_f0 = local_f0 + 1;
        }
        else {
          uVar32 = (undefined2)iVar24;
          uVar37 = (undefined2)iVar38;
          if ((bVar31 & 1) == 0) {
            if (iVar20 != 0) {
              lVar39 = (longlong)iVar17;
              iVar17 = iVar17 + 1;
              lVar39 = lVar39 * 0xe;
              *(short *)(lVar18 + lVar39) = (short)(iVar24 + iVar34 >> 1);
              *(short *)(lVar18 + 2 + lVar39) = (short)(iVar38 + sVar21 >> 1);
              *(undefined1 *)(lVar18 + 0xc + lVar39) = 3;
              *(undefined2 *)(lVar18 + 4 + lVar39) = uVar32;
              *(undefined2 *)(lVar18 + 6 + lVar39) = uVar37;
            }
            iVar20 = 1;
            iVar24 = iVar34;
            iVar38 = (int)sVar21;
          }
          else {
            lVar39 = (longlong)iVar17 * 0xe;
            iVar17 = iVar17 + 1;
            if (iVar20 == 0) {
              uVar37 = 0;
              uVar13 = 2;
              uVar32 = 0;
            }
            else {
              uVar13 = 3;
            }
            *(undefined1 *)(lVar18 + 0xc + lVar39) = uVar13;
            *(short *)(lVar18 + lVar39) = sVar14;
            *(short *)(lVar18 + 2 + lVar39) = sVar21;
            *(undefined2 *)(lVar18 + 4 + lVar39) = uVar32;
            iVar20 = 0;
            *(undefined2 *)(lVar18 + 6 + lVar39) = uVar37;
          }
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 < (int)(uVar23 + 1));
      iVar15 = FUN_180235be0(lVar18,iVar17,iVar20,bVar36,iVar16,iVar30,local_f4,local_f8,iVar24,
                             iVar38);
    }
    *param_3 = lVar18;
  }
  return iVar15;
}



/* ===== 180236860 FUN_180236860 ===== */

void FUN_180236860(int *param_1,char param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    lVar1 = *(longlong *)(param_1 + 10);
    lVar3 = (longlong)param_1[0xc] * 0xe;
    param_1[0xc] = param_1[0xc] + 1;
    *(undefined2 *)(lVar3 + 4 + lVar1) = (undefined2)param_5;
    *(undefined2 *)(lVar3 + 6 + lVar1) = (undefined2)param_6;
    *(char *)(lVar3 + 0xc + lVar1) = param_2;
    *(short *)(lVar3 + lVar1) = (short)param_3;
    *(short *)(lVar3 + 2 + lVar1) = (short)param_4;
    *(undefined2 *)(lVar3 + 8 + lVar1) = (undefined2)param_7;
    *(undefined2 *)(lVar3 + 10 + lVar1) = (undefined2)param_8;
    return;
  }
  if ((param_1[7] < param_3) || (iVar6 = param_1[7], param_1[1] == 0)) {
    param_1[7] = param_3;
    iVar6 = param_3;
  }
  if ((param_1[9] < param_4) || (iVar4 = param_1[9], param_1[1] == 0)) {
    param_1[9] = param_4;
    iVar4 = param_4;
  }
  if ((param_3 < param_1[6]) || (iVar5 = param_1[6], param_1[1] == 0)) {
    param_1[6] = param_3;
    iVar5 = param_3;
  }
  if ((param_4 < param_1[8]) || (iVar2 = param_1[8], param_1[1] == 0)) {
    param_1[8] = param_4;
    iVar2 = param_4;
  }
  param_1[1] = 1;
  if (param_2 != '\x04') {
    param_1[0xc] = param_1[0xc] + 1;
    return;
  }
  if (iVar6 < param_5) {
    param_1[7] = param_5;
    iVar6 = param_5;
  }
  if (iVar4 < param_6) {
    param_1[9] = param_6;
    iVar4 = param_6;
  }
  if (param_5 < iVar5) {
    param_1[6] = param_5;
    iVar5 = param_5;
  }
  if (param_6 < iVar2) {
    param_1[8] = param_6;
    iVar2 = param_6;
  }
  if (iVar6 < param_7) {
    param_1[7] = param_7;
  }
  if (iVar4 < param_8) {
    param_1[9] = param_8;
  }
  if (param_7 < iVar5) {
    param_1[6] = param_7;
  }
  param_1[0xc] = param_1[0xc] + 1;
  if (param_8 < iVar2) {
    param_1[8] = param_8;
  }
  return;
}



/* ===== 1802369a0 FUN_1802369a0 ===== */

void FUN_1802369a0(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (((float)param_1[2] != (float)param_1[4]) || ((float)param_1[3] != (float)param_1[5])) {
    iVar4 = (int)(float)param_1[3];
    iVar3 = (int)(float)param_1[2];
    if (*param_1 != 0) {
      if ((param_1[7] < iVar3) || (param_1[1] == 0)) {
        param_1[7] = iVar3;
      }
      if ((param_1[9] < iVar4) || (param_1[1] == 0)) {
        param_1[9] = iVar4;
      }
      if ((iVar3 < param_1[6]) || (param_1[1] == 0)) {
        param_1[6] = iVar3;
      }
      if ((iVar4 < param_1[8]) || (param_1[1] == 0)) {
        param_1[8] = iVar4;
      }
      param_1[0xc] = param_1[0xc] + 1;
      param_1[1] = 1;
      return;
    }
    lVar1 = *(longlong *)(param_1 + 10);
    lVar2 = (longlong)param_1[0xc] * 0xe;
    param_1[0xc] = param_1[0xc] + 1;
    *(undefined1 *)(lVar2 + 0xc + lVar1) = 2;
    *(short *)(lVar2 + lVar1) = (short)iVar3;
    *(short *)(lVar2 + 2 + lVar1) = (short)iVar4;
    *(undefined8 *)(lVar2 + 4 + lVar1) = 0;
  }
  return;
}



/* ===== 180236a50 FUN_180236a50 ===== */

void FUN_180236a50(int *param_1,float param_2,float param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_1802369a0();
  param_2 = param_2 + (float)param_1[4];
  param_3 = param_3 + (float)param_1[5];
  param_1[4] = (int)param_2;
  param_1[2] = (int)param_2;
  param_1[5] = (int)param_3;
  param_1[3] = (int)param_3;
  iVar4 = (int)param_2;
  if (*param_1 == 0) {
    lVar1 = *(longlong *)(param_1 + 10);
    lVar3 = (longlong)param_1[0xc] * 0xe;
    *(short *)(lVar3 + 2 + lVar1) = (short)(int)param_3;
    param_1[0xc] = param_1[0xc] + 1;
    *(undefined8 *)(lVar3 + 4 + lVar1) = 0;
    *(undefined1 *)(lVar3 + 0xc + lVar1) = 1;
    *(short *)(lVar3 + lVar1) = (short)iVar4;
    return;
  }
  if ((param_1[7] < iVar4) || (param_1[1] == 0)) {
    param_1[7] = iVar4;
  }
  iVar2 = (int)param_3;
  if ((param_1[9] < iVar2) || (param_1[1] == 0)) {
    param_1[9] = iVar2;
  }
  if ((iVar4 < param_1[6]) || (param_1[1] == 0)) {
    param_1[6] = iVar4;
  }
  if ((iVar2 < param_1[8]) || (param_1[1] == 0)) {
    param_1[8] = iVar2;
  }
  param_1[0xc] = param_1[0xc] + 1;
  param_1[1] = 1;
  return;
}



/* ===== 180236b20 FUN_180236b20 ===== */

void FUN_180236b20(int *param_1,float param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  fVar1 = (float)param_1[4];
  param_3 = param_3 + (float)param_1[5];
  param_1[4] = (int)(param_2 + fVar1);
  param_1[5] = (int)param_3;
  iVar5 = (int)(param_2 + fVar1);
  if (*param_1 == 0) {
    iVar3 = param_1[0xc];
    lVar2 = *(longlong *)(param_1 + 10);
    param_1[0xc] = param_1[0xc] + 1;
    lVar4 = (longlong)iVar3 * 0xe;
    *(short *)(lVar4 + 2 + lVar2) = (short)(int)param_3;
    *(undefined8 *)(lVar4 + 4 + lVar2) = 0;
    *(undefined1 *)(lVar4 + 0xc + lVar2) = 2;
    *(short *)(lVar4 + lVar2) = (short)iVar5;
    return;
  }
  if ((param_1[7] < iVar5) || (param_1[1] == 0)) {
    param_1[7] = iVar5;
  }
  iVar3 = (int)param_3;
  if ((param_1[9] < iVar3) || (param_1[1] == 0)) {
    param_1[9] = iVar3;
  }
  if ((iVar5 < param_1[6]) || (param_1[1] == 0)) {
    param_1[6] = iVar5;
  }
  if ((iVar3 < param_1[8]) || (param_1[1] == 0)) {
    param_1[8] = iVar3;
  }
  param_1[0xc] = param_1[0xc] + 1;
  param_1[1] = 1;
  return;
}



/* ===== 180236bc0 FUN_180236bc0 ===== */

undefined8 * FUN_180236bc0(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  iVar1 = *(int *)(param_2 + 0x9c);
  pcVar2 = *(char **)(param_2 + 0x90);
  if (iVar1 < 0) {
    iVar12 = iVar1;
  }
  else {
    iVar12 = 0;
    if (0 < iVar1) {
      iVar12 = 1;
      if (*pcVar2 != '\0') {
        if (*pcVar2 == '\x03') {
          if (iVar1 < 2) {
            uVar8 = 0;
            uVar7 = 0;
            bVar3 = 0;
          }
          else if (iVar1 < 3) {
            uVar7 = (uint)(byte)pcVar2[1] << 8;
            uVar8 = 0;
            bVar3 = 0;
            iVar12 = 2;
          }
          else {
            iVar12 = 3;
            uVar7 = (uint)CONCAT11(pcVar2[1],pcVar2[2]);
            if (iVar1 < 4) {
              uVar8 = 0;
              bVar3 = 0;
            }
            else {
              uVar8 = (uint)(byte)pcVar2[3];
              iVar12 = 4;
              if (iVar1 < 5) {
                bVar3 = 0;
              }
              else {
                bVar3 = pcVar2[4];
                iVar12 = 5;
              }
            }
          }
          iVar9 = 0;
          uVar8 = uVar8 << 8 | (uint)bVar3;
          if (uVar7 != 0) {
            do {
              if (iVar12 < iVar1) {
                iVar11 = iVar12 + 1;
                cVar10 = pcVar2[iVar12];
                if (iVar11 < iVar1) {
                  iVar6 = iVar12 + 2;
                  uVar5 = (uint)(byte)pcVar2[iVar11];
                  if (iVar6 < iVar1) {
                    iVar12 = iVar12 + 3;
                    bVar3 = pcVar2[iVar6];
                  }
                  else {
                    bVar3 = 0;
                    iVar12 = iVar6;
                  }
                }
                else {
                  uVar5 = 0;
                  bVar3 = 0;
                  iVar12 = iVar11;
                }
              }
              else {
                cVar10 = '\0';
                uVar5 = 0;
                bVar3 = 0;
              }
              uVar5 = uVar5 << 8 | (uint)bVar3;
              if (((int)uVar8 <= param_3) && (param_3 < (int)uVar5)) goto LAB_180236d25;
              iVar9 = iVar9 + 1;
              uVar8 = uVar5;
            } while (iVar9 < (int)uVar7);
          }
        }
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
    }
  }
  iVar12 = iVar12 + param_3;
  if (((iVar1 < iVar12) || (iVar12 < 0)) || (iVar1 <= iVar12)) {
    cVar10 = '\0';
  }
  else {
    cVar10 = pcVar2[iVar12];
  }
LAB_180236d25:
  local_68 = *(undefined4 *)(param_2 + 0x80);
  uStack_64 = *(undefined4 *)(param_2 + 0x84);
  uStack_60 = *(undefined4 *)(param_2 + 0x88);
  uStack_5c = *(undefined4 *)(param_2 + 0x8c);
  puVar4 = (undefined4 *)FUN_180234d60(local_48,&local_68,cVar10);
  local_58 = *(undefined4 *)(param_2 + 0x40);
  uStack_54 = *(undefined4 *)(param_2 + 0x44);
  uStack_50 = *(undefined4 *)(param_2 + 0x48);
  uStack_4c = *(undefined4 *)(param_2 + 0x4c);
  local_68 = *puVar4;
  uStack_64 = puVar4[1];
  uStack_60 = puVar4[2];
  uStack_5c = puVar4[3];
  FUN_180234f50(param_1,&local_58,&local_68);
  return param_1;
}



/* ===== 180236d80 FUN_180236d80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180236d80(longlong param_1,undefined4 param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
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
  float fVar36;
  float fVar37;
  undefined1 auStack_348 [32];
  int local_328;
  int local_320;
  int local_318;
  int local_310;
  int local_308;
  int local_304;
  float local_300;
  float local_2fc;
  ulonglong local_2f8;
  float local_2e8;
  int local_2e4;
  undefined1 local_2d8 [16];
  int local_2c8;
  float local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  undefined4 local_2a8;
  float *local_2a0;
  longlong local_298;
  ulonglong local_288;
  undefined8 uStack_280;
  int iStack_27c;
  byte *local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [12];
  float afStack_24c [5];
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  undefined8 auStack_188 [20];
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_348;
  local_2b8 = 0;
  local_2c8 = 0;
  local_268 = *(undefined8 *)(param_1 + 0x70);
  uStack_260 = *(undefined8 *)(param_1 + 0x78);
  iVar9 = 1;
  local_278 = *(byte **)(param_1 + 0x50);
  uStack_270 = *(undefined8 *)(param_1 + 0x58);
  uVar23 = 0;
  local_2e4 = 1;
  local_2c0 = 0;
  local_2a8 = param_2;
  local_298 = param_1;
  pauVar10 = (undefined1 (*) [16])FUN_180234d60(&local_288,&local_278,param_2);
  local_304 = SUB164(*pauVar10,0xc);
  iVar21 = *(int *)(*pauVar10 + 8);
  local_2d8._0_8_ = SUB168(*pauVar10,0);
  local_2d8._8_8_ = *(undefined8 *)(*pauVar10 + 8);
  local_2fc = local_224;
  local_300 = local_220;
  local_2c4 = local_228;
  local_2e8 = local_22c;
  local_2b4 = local_230;
  local_2b0 = local_234;
  local_2ac = local_238;
  uVar20 = local_2d8._0_8_;
  fVar24 = local_22c;
  fVar28 = local_228;
  fVar31 = local_238;
  fVar32 = local_234;
  fVar33 = local_230;
  fVar34 = afStack_24c[1];
  fVar35 = afStack_24c[3];
  fVar36 = afStack_24c[2];
  fVar37 = afStack_24c[4];
  iVar18 = 0;
  fVar27 = local_224;
  fVar30 = local_220;
  local_2f8 = local_2d8._0_8_;
  iVar19 = local_304;
LAB_180236edd:
  lVar12 = local_298;
  if ((int)local_2d8._12_4_ <= iVar21) {
    return 0;
  }
  iVar22 = iVar21 + 1;
  local_2d8._8_4_ = iVar22;
  bVar2 = *(byte *)((longlong)iVar21 + uVar20);
  iVar17 = 0;
  local_308 = 1;
  switch(bVar2) {
  case 1:
  case 3:
  case 0x12:
  case 0x17:
    local_2c8 = local_2c8 + (int)uVar23 / 2;
    goto LAB_180237d49;
  default:
    local_308 = 1;
    if (bVar2 == 0xff) {
      if (iVar22 < iVar19) {
        lVar12 = (longlong)iVar22;
        iVar22 = iVar21 + 2;
        local_2d8._8_4_ = iVar22;
        uVar4 = *(undefined1 *)(lVar12 + uVar20);
      }
      else {
        uVar4 = 0;
      }
      if (iVar22 < iVar19) {
        lVar12 = (longlong)iVar22;
        iVar22 = iVar22 + 1;
        local_2d8._8_4_ = iVar22;
        uVar5 = *(undefined1 *)(lVar12 + uVar20);
      }
      else {
        uVar5 = 0;
      }
      if (iVar22 < iVar19) {
        lVar12 = (longlong)iVar22;
        iVar22 = iVar22 + 1;
        local_2d8._8_4_ = iVar22;
        uVar6 = *(undefined1 *)(lVar12 + uVar20);
      }
      else {
        uVar6 = 0;
      }
      if (iVar22 < iVar19) {
        lVar12 = (longlong)iVar22;
        iVar22 = iVar22 + 1;
        local_2d8._8_4_ = iVar22;
        uVar7 = *(undefined1 *)(lVar12 + uVar20);
      }
      else {
        uVar7 = 0;
      }
      fVar24 = (float)CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar6),uVar7) * _DAT_1808abf98;
    }
    else {
      if (((bVar2 & 0xe0) == 0) && (bVar2 != 0x1c)) {
        return 0;
      }
      if (iVar19 < iVar21) {
LAB_180237be2:
        local_2d8._8_4_ = iVar19;
      }
      else {
        local_2d8._8_4_ = iVar21;
        if (iVar21 < 0) goto LAB_180237be2;
      }
      sVar8 = FUN_180234a10(local_2d8);
      local_304 = local_2d8._12_4_;
      local_2f8 = local_2d8._0_8_;
      fVar24 = (float)(int)sVar8;
      uVar20 = local_2d8._0_8_;
      iVar22 = local_2d8._8_4_;
      iVar19 = local_2d8._12_4_;
    }
    if (0x2f < (int)uVar23) {
      return 0;
    }
    lVar12 = (longlong)(int)uVar23;
    uVar23 = uVar23 + 1;
    local_308 = 0;
    afStack_24c[lVar12 + 1] = fVar24;
    local_300 = local_220;
    local_2fc = local_224;
    local_2c4 = local_228;
    local_2e8 = local_22c;
    local_2b4 = local_230;
    local_2b0 = local_234;
    local_2ac = local_238;
    fVar24 = local_22c;
    fVar28 = local_228;
    fVar31 = local_238;
    fVar32 = local_234;
    fVar33 = local_230;
    fVar34 = afStack_24c[1];
    fVar35 = afStack_24c[3];
    fVar36 = afStack_24c[2];
    fVar37 = afStack_24c[4];
    iVar21 = iVar22;
    fVar27 = local_224;
    fVar30 = local_220;
    goto LAB_180237d4d;
  case 4:
    if ((int)uVar23 < 1) {
      return 0;
    }
    goto LAB_180236fb8;
  case 5:
    if ((int)uVar23 < 2) {
      return 0;
    }
    do {
      iVar21 = iVar17;
      fVar27 = (float)FUN_180236b20(param_3);
      iVar17 = iVar17 + 2;
    } while (iVar21 + 3 < (int)uVar23);
    goto LAB_180237d3e;
  case 6:
    if ((int)uVar23 < 1) {
      return 0;
    }
    while( true ) {
      iVar21 = iVar17;
      fVar27 = (float)FUN_180236b20(param_3);
      iVar17 = iVar17 + 1;
      iVar21 = iVar21 + 2;
LAB_18023708d:
      if (((int)uVar23 <= iVar17) || (fVar27 = (float)FUN_180236b20(param_3), (int)uVar23 <= iVar21)
         ) break;
      iVar17 = iVar21;
    }
    goto LAB_180237d3e;
  case 7:
    if ((int)uVar23 < 1) {
      return 0;
    }
    iVar21 = 1;
    goto LAB_18023708d;
  case 8:
    if ((int)uVar23 < 6) {
      return 0;
    }
    do {
      fVar25 = afStack_24c[(longlong)iVar17 + 1] + *(float *)(param_3 + 0x10);
      fVar27 = afStack_24c[(longlong)iVar17 + 2] + *(float *)(param_3 + 0x14);
      fVar30 = fVar25 + afStack_24c[(longlong)iVar17 + 3];
      local_320 = (int)fVar27;
      fVar29 = fVar30 + afStack_24c[(longlong)iVar17 + 5];
      fVar27 = fVar27 + afStack_24c[(longlong)iVar17 + 4];
      local_318 = (int)fVar30;
      local_328 = (int)fVar25;
      *(float *)(param_3 + 0x10) = fVar29;
      fVar30 = fVar27 + afStack_24c[(longlong)iVar17 + 6];
      local_310 = (int)fVar27;
      *(float *)(param_3 + 0x14) = fVar30;
      FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar29,(int)fVar30
                   );
      iVar21 = iVar17 + 0xb;
      iVar17 = iVar17 + 6;
    } while (iVar21 < (int)uVar23);
    break;
  case 10:
    if (local_2b8 == 0) {
      if (*(int *)(local_298 + 0x9c) != 0) {
        puVar11 = (undefined8 *)FUN_180236bc0(local_258,local_298);
        local_268 = *puVar11;
        uStack_260 = puVar11[1];
        fVar30 = local_300;
      }
      local_2b8 = 1;
    }
    goto LAB_180237659;
  case 0xb:
    goto switchD_180236f42_caseD_b;
  case 0xc:
    if (iVar22 < (int)local_2d8._12_4_) {
      lVar12 = (longlong)iVar22;
      iVar22 = iVar21 + 2;
      local_2d8._8_4_ = iVar22;
      cVar3 = *(char *)(lVar12 + uVar20);
    }
    else {
      cVar3 = '\0';
    }
    if (cVar3 == '\"') {
      if ((int)uVar23 < 7) {
        return 0;
      }
      fVar29 = fVar34 + *(float *)(param_3 + 0x10);
      fVar24 = *(float *)(param_3 + 0x14) + 0.0;
      fVar27 = fVar36 + fVar29;
      local_320 = (int)fVar24;
      fVar30 = fVar37 + fVar27;
      fVar24 = fVar24 + fVar35;
      local_318 = (int)fVar27;
      local_310 = (int)fVar24;
      local_328 = (int)fVar29;
      *(float *)(param_3 + 0x10) = fVar30;
      fVar24 = fVar24 + 0.0;
      *(float *)(param_3 + 0x14) = fVar24;
      FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar30,(int)fVar24
                   );
      fVar25 = *(float *)(param_3 + 0x14) + 0.0;
      fVar26 = fVar25 - fVar35;
      fVar30 = fVar26 + 0.0;
      fVar24 = fVar32;
      fVar29 = fVar33;
      fVar27 = fVar31;
LAB_180237b65:
      fVar27 = fVar27 + *(float *)(param_3 + 0x10);
      fVar24 = fVar24 + fVar27;
      fVar29 = fVar29 + fVar24;
    }
    else {
      if (cVar3 == '#') {
        if ((int)uVar23 < 0xd) {
          return 0;
        }
        fVar25 = fVar34 + *(float *)(param_3 + 0x10);
        fVar27 = fVar36 + *(float *)(param_3 + 0x14);
        fVar30 = fVar35 + fVar25;
        local_320 = (int)fVar27;
        fVar27 = fVar37 + fVar27;
        fVar29 = fVar31 + fVar30;
        local_318 = (int)fVar30;
        fVar30 = fVar32 + fVar27;
        *(float *)(param_3 + 0x10) = fVar29;
        local_310 = (int)fVar27;
        local_328 = (int)fVar25;
        *(float *)(param_3 + 0x14) = fVar30;
        FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar29,
                      (int)fVar30);
        fVar25 = fVar24 + *(float *)(param_3 + 0x14);
        fVar26 = local_2fc + fVar25;
        fVar30 = local_21c + fVar26;
        fVar24 = fVar28;
        fVar29 = local_300;
        fVar27 = fVar33;
        goto LAB_180237b65;
      }
      if (cVar3 == '$') {
        if ((int)uVar23 < 9) {
          return 0;
        }
        fVar27 = fVar36 + *(float *)(param_3 + 0x14);
        fVar30 = fVar34 + *(float *)(param_3 + 0x10);
        local_320 = (int)fVar27;
        fVar25 = fVar35 + fVar30;
        fVar27 = fVar27 + fVar37;
        local_328 = (int)fVar30;
        fVar29 = fVar31 + fVar25;
        fVar30 = fVar27 + 0.0;
        local_310 = (int)fVar27;
        local_318 = (int)fVar25;
        *(float *)(param_3 + 0x10) = fVar29;
        *(float *)(param_3 + 0x14) = fVar30;
        FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar29,
                      (int)fVar30);
        fVar25 = *(float *)(param_3 + 0x14) + 0.0;
        fVar26 = fVar25 + fVar24;
        fVar30 = fVar26 - (fVar36 + fVar37 + fVar24);
        fVar24 = fVar33;
        fVar29 = fVar28;
        fVar27 = fVar32;
        goto LAB_180237b65;
      }
      if (cVar3 != '%') {
        return 0;
      }
      if ((int)uVar23 < 0xb) {
        return 0;
      }
      fVar29 = fVar35 + fVar34 + fVar31 + fVar33 + local_2c4;
      fVar27 = fVar36 + fVar37 + fVar32 + local_2e8 + fVar27;
      if ((float)((uint)fVar29 & _DAT_1808ade90) <= (float)((uint)fVar27 & _DAT_1808ade90)) {
        fVar29 = (float)((uint)fVar29 ^ DAT_1808adec0);
      }
      else {
        fVar29 = fVar30;
        fVar30 = (float)((uint)fVar27 ^ DAT_1808adec0);
      }
      fVar27 = fVar34 + *(float *)(param_3 + 0x10);
      fVar24 = fVar36 + *(float *)(param_3 + 0x14);
      local_320 = (int)fVar24;
      fVar28 = fVar27 + fVar35;
      fVar24 = fVar24 + fVar37;
      local_328 = (int)fVar27;
      local_310 = (int)fVar24;
      local_318 = (int)fVar28;
      fVar28 = fVar28 + fVar31;
      fVar24 = fVar24 + fVar32;
      *(float *)(param_3 + 0x10) = fVar28;
      *(float *)(param_3 + 0x14) = fVar24;
      FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar28,(int)fVar24
                   );
      fVar27 = fVar33 + *(float *)(param_3 + 0x10);
      fVar25 = local_2e8 + *(float *)(param_3 + 0x14);
      fVar24 = fVar27 + local_2c4;
      fVar26 = fVar25 + local_2fc;
      fVar29 = fVar24 + fVar29;
      fVar30 = fVar26 + fVar30;
      fVar28 = local_2c4;
    }
    local_320 = (int)fVar25;
    local_310 = (int)fVar26;
    local_318 = (int)fVar24;
    local_328 = (int)fVar27;
    *(float *)(param_3 + 0x10) = fVar29;
    *(float *)(param_3 + 0x14) = fVar30;
    FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar29,(int)fVar30);
    goto LAB_180237d32;
  case 0xe:
    FUN_1802369a0(param_3);
    return 1;
  case 0x13:
  case 0x14:
    if (iVar9 != 0) {
      local_2c8 = local_2c8 + (int)uVar23 / 2;
      iVar19 = local_304;
    }
    iVar9 = 0;
    iVar21 = local_2c8 + 7;
    local_2e4 = 0;
    if (iVar21 < 0) {
      iVar21 = local_2c8 + 0xe;
    }
    local_2d8._8_4_ = iVar22 + (iVar21 >> 3);
    if ((iVar19 < (int)local_2d8._8_4_) || ((int)local_2d8._8_4_ < 0)) {
      local_2d8._8_4_ = iVar19;
      iVar21 = iVar19;
    }
    else {
      iVar21 = local_2d8._8_4_;
    }
    goto LAB_180237d4d;
  case 0x15:
    if ((int)uVar23 < 2) {
      return 0;
    }
LAB_180236fb8:
    iVar9 = 0;
    local_2e4 = 0;
    FUN_180236a50(param_3,iVar19,afStack_24c[(int)uVar23]);
    break;
  case 0x16:
    if ((int)uVar23 < 1) {
      return 0;
    }
    iVar9 = 0;
    local_2e4 = 0;
    FUN_180236a50(param_3,iVar19,0);
    break;
  case 0x18:
    if ((int)uVar23 < 8) {
      return 0;
    }
    if (5 < (int)(uVar23 - 2)) {
      do {
        iVar21 = iVar17;
        fVar25 = afStack_24c[(longlong)iVar21 + 1] + *(float *)(param_3 + 0x10);
        fVar27 = afStack_24c[(longlong)iVar21 + 2] + *(float *)(param_3 + 0x14);
        fVar30 = fVar25 + afStack_24c[(longlong)iVar21 + 3];
        local_320 = (int)fVar27;
        fVar29 = fVar30 + afStack_24c[(longlong)iVar21 + 5];
        fVar27 = fVar27 + afStack_24c[(longlong)iVar21 + 4];
        local_318 = (int)fVar30;
        local_328 = (int)fVar25;
        *(float *)(param_3 + 0x10) = fVar29;
        fVar30 = fVar27 + afStack_24c[(longlong)iVar21 + 6];
        local_310 = (int)fVar27;
        *(float *)(param_3 + 0x14) = fVar30;
        FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar29,
                      (int)fVar30);
        iVar17 = iVar21 + 6;
      } while (iVar21 + 0xb < (int)(uVar23 - 2));
      if ((int)uVar23 <= iVar21 + 7) {
        return 0;
      }
      iVar9 = local_2e4;
    }
    fVar27 = (float)FUN_180236b20(param_3);
    goto LAB_180237d3e;
  case 0x19:
    if ((int)uVar23 < 8) {
      return 0;
    }
    uVar20 = (ulonglong)(uVar23 - 6);
    if (1 < (int)(uVar23 - 6)) {
      do {
        iVar18 = iVar17;
        iVar21 = iVar18;
        FUN_180236b20(param_3);
        iVar17 = iVar18 + 2;
      } while (iVar21 + 3 < (int)uVar20);
      if ((int)uVar23 <= iVar18 + 7) {
        return 0;
      }
    }
    lVar12 = (longlong)iVar17;
    fVar25 = afStack_24c[lVar12 + 1] + *(float *)(param_3 + 0x10);
    fVar27 = afStack_24c[lVar12 + 2] + *(float *)(param_3 + 0x14);
    fVar30 = fVar25 + afStack_24c[lVar12 + 3];
    local_320 = (int)fVar27;
    fVar29 = fVar30 + afStack_24c[lVar12 + 5];
    fVar27 = fVar27 + afStack_24c[lVar12 + 4];
    local_318 = (int)fVar30;
    local_328 = (int)fVar25;
    *(float *)(param_3 + 0x10) = fVar29;
    fVar30 = fVar27 + afStack_24c[lVar12 + 6];
    local_310 = (int)fVar27;
    *(float *)(param_3 + 0x14) = fVar30;
    FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar29,(int)fVar30);
    break;
  case 0x1a:
  case 0x1b:
    if ((int)uVar23 < 4) {
      return 0;
    }
    uVar14 = uVar23 & 1;
    if (uVar14 == 0) {
      fVar24 = 0.0;
    }
    else {
      iVar21 = iVar22;
      if ((int)uVar23 <= (int)(uVar14 + 3)) goto LAB_180237d4d;
      fVar24 = fVar34;
    }
    do {
      fVar28 = *(float *)(param_3 + 0x10);
      fVar30 = *(float *)(param_3 + 0x14);
      fVar31 = afStack_24c[(longlong)(int)uVar14 + 1];
      fVar32 = afStack_24c[(longlong)(int)uVar14 + 2];
      fVar33 = afStack_24c[(longlong)(int)uVar14 + 3];
      if (bVar2 == 0x1b) {
        fVar29 = afStack_24c[(longlong)(int)uVar14 + 4] + fVar32 + fVar28 + fVar31;
        fVar25 = fVar33 + fVar30 + fVar24 + 0.0;
        fVar27 = fVar24;
        fVar24 = fVar31;
      }
      else {
        fVar29 = fVar32 + fVar28 + fVar24 + 0.0;
        fVar25 = afStack_24c[(longlong)(int)uVar14 + 4] + fVar33 + fVar30 + fVar31;
        fVar27 = fVar31;
      }
      *(float *)(param_3 + 0x10) = fVar29;
      *(float *)(param_3 + 0x14) = fVar25;
      local_320 = (int)(fVar27 + fVar30);
      local_328 = (int)(fVar24 + fVar28);
      local_318 = (int)(fVar24 + fVar28 + fVar32);
      local_310 = (int)(fVar27 + fVar30 + fVar33);
      FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_318 >> 8),4),(int)fVar29,(int)fVar25
                   );
      iVar21 = uVar14 + 7;
      uVar14 = uVar14 + 4;
      fVar24 = 0.0;
    } while (iVar21 < (int)uVar23);
    fVar28 = local_2c4;
    fVar31 = local_2ac;
    fVar32 = local_2b0;
    fVar33 = local_2b4;
    goto LAB_180237d32;
  case 0x1d:
LAB_180237659:
    if ((int)uVar23 < 1) {
      return 0;
    }
    if (9 < iVar18) {
      return 0;
    }
    auStack_188[(longlong)iVar18 * 2] = local_2d8._0_8_;
    auStack_188[(longlong)iVar18 * 2 + 1] = local_2d8._8_8_;
    if (bVar2 == 10) {
      puVar11 = &local_268;
      piVar15 = (int *)((longlong)&uStack_260 + 4);
    }
    else {
      puVar11 = (undefined8 *)(lVar12 + 0x60);
      piVar15 = (int *)(lVar12 + 0x6c);
    }
    iVar21 = *piVar15;
    pbVar1 = (byte *)*puVar11;
    if (iVar21 < 0) {
      iVar19 = iVar21;
LAB_1802376d0:
      uVar14 = 0;
LAB_1802376d2:
      uVar13 = uVar14;
      bVar2 = 0;
    }
    else {
      iVar19 = 0;
      if (iVar21 < 1) goto LAB_1802376d0;
      uVar13 = (uint)*pbVar1;
      iVar19 = 1;
      uVar14 = (uint)*pbVar1;
      if (iVar21 < 2) goto LAB_1802376d2;
      bVar2 = pbVar1[1];
      iVar19 = 2;
    }
    uVar14 = uVar13 << 8 | (uint)bVar2;
    if (uVar14 < 0x846c) {
      iVar22 = 0x46b;
      if (uVar14 < 0x4d8) {
        iVar22 = 0x6b;
      }
    }
    else {
      iVar22 = 0x8000;
    }
    iVar22 = (int)afStack_24c[(int)uVar23] + iVar22;
    if ((iVar22 < 0) || ((int)uVar14 <= iVar22)) {
      local_288 = 0;
      uStack_280 = 0;
    }
    else {
      uStack_270 = CONCAT44(iVar21,iVar19);
      local_278 = pbVar1;
      FUN_180234d60(&local_288,&local_278,iVar22);
    }
    iVar21 = 0;
    if (iStack_27c == 0) {
      return 0;
    }
    uVar23 = uVar23 - 1;
    iVar18 = iVar18 + 1;
    local_2d8._8_4_ = 0;
    local_2d8._0_8_ = local_288;
    local_2d8._12_4_ = iStack_27c;
    local_304 = iStack_27c;
    local_2f8 = local_288;
    uVar20 = local_288;
    fVar27 = local_2fc;
    local_2c0 = iVar18;
    iVar19 = iStack_27c;
    goto LAB_180236edd;
  case 0x1e:
    if ((int)uVar23 < 4) {
      return 0;
    }
    local_2a0 = (float *)(param_3 + 0x14);
    iVar21 = iVar17;
    while( true ) {
      if (uVar23 - iVar21 == 5) {
        fVar24 = afStack_24c[(longlong)(iVar21 + 4) + 1];
      }
      else {
        fVar24 = 0.0;
      }
      fVar29 = *(float *)(param_3 + 0x10) + 0.0;
      fVar30 = afStack_24c[(longlong)iVar21 + 1];
      fVar27 = *local_2a0;
      fVar26 = fVar29 + afStack_24c[(longlong)iVar21 + 2];
      local_328 = (int)fVar29;
      fVar25 = fVar26 + afStack_24c[(longlong)iVar21 + 4];
      fVar29 = fVar30 + fVar27 + afStack_24c[(longlong)iVar21 + 3];
      local_318 = (int)fVar26;
      local_310 = (int)fVar29;
      *(float *)(param_3 + 0x10) = fVar25;
      fVar29 = fVar29 + fVar24;
      *local_2a0 = fVar29;
      local_320 = (int)(fVar30 + fVar27);
      FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar25,(int)fVar29
                   );
      iVar17 = iVar21 + 4;
      iVar9 = iVar21 + 7;
      local_2bc = iVar21 + 8;
      iVar18 = iVar21 + 0xb;
      iVar19 = iVar21 + 5;
      iVar21 = iVar21 + 6;
      pfVar16 = local_2a0;
LAB_1802371b0:
      if ((int)uVar23 <= iVar9) break;
      if (uVar23 - iVar17 == 5) {
        fVar24 = afStack_24c[(longlong)local_2bc + 1];
      }
      else {
        fVar24 = 0.0;
      }
      fVar30 = afStack_24c[(longlong)iVar17 + 1] + *(float *)(param_3 + 0x10);
      local_320 = (int)(*pfVar16 + 0.0);
      fVar27 = fVar30 + afStack_24c[(longlong)iVar19 + 1];
      local_328 = (int)fVar30;
      fVar30 = *pfVar16 + 0.0 + afStack_24c[(longlong)iVar21 + 1];
      local_318 = (int)fVar27;
      fVar27 = fVar27 + fVar24;
      fVar24 = fVar30 + afStack_24c[(longlong)iVar9 + 1];
      local_310 = (int)fVar30;
      *(float *)(param_3 + 0x10) = fVar27;
      *pfVar16 = fVar24;
      FUN_180236860(param_3,CONCAT71((uint7)(uint3)((uint)local_320 >> 8),4),(int)fVar27,(int)fVar24
                   );
      if ((int)uVar23 <= iVar18) break;
      local_2a0 = pfVar16;
      iVar21 = local_2bc;
    }
    iVar9 = local_2e4;
LAB_180237d32:
    fVar24 = local_2e8;
    break;
  case 0x1f:
    if ((int)uVar23 < 4) {
      return 0;
    }
    iVar9 = 3;
    local_2bc = 4;
    iVar19 = 1;
    iVar21 = 2;
    iVar18 = 7;
    pfVar16 = (float *)(param_3 + 0x14);
    goto LAB_1802371b0;
  }
  fVar27 = local_2fc;
LAB_180237d3e:
  uVar20 = local_2f8;
  fVar30 = local_300;
LAB_180237d49:
  iVar21 = iVar22;
  iVar19 = local_304;
LAB_180237d4d:
  uVar14 = 0;
  if (local_308 == 0) {
    uVar14 = uVar23;
  }
  uVar23 = uVar14;
  iVar18 = local_2c0;
  goto LAB_180236edd;
switchD_180236f42_caseD_b:
  if (iVar18 < 1) {
    return 0;
  }
  lVar12 = (longlong)iVar18;
  iVar18 = iVar18 + -1;
  local_2d8 = *(undefined1 (*) [16])(auStack_188 + (lVar12 + -1) * 2);
  iVar21 = local_2d8._8_4_;
  local_304 = local_2d8._12_4_;
  uVar20 = local_2d8._0_8_;
  fVar27 = local_2fc;
  fVar30 = local_300;
  local_2f8 = uVar20;
  local_2c0 = iVar18;
  iVar19 = local_304;
  goto LAB_180236edd;
}



/* ===== 180237e60 FUN_180237e60 ===== */

ulonglong FUN_180237e60(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
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
    uVar2 = FUN_180235cd0();
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
      local_50 = _malloc_base((longlong)local_10 * 0xe);
      *param_3 = local_50;
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



/* ===== 180237f40 FUN_180237f40 ===== */

void FUN_180237f40(longlong param_1,int param_2,longlong param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  
  if (((param_5 != param_7) && (fVar2 = *(float *)(param_3 + 0x1c), param_5 <= fVar2)) &&
     (fVar1 = *(float *)(param_3 + 0x18), fVar1 <= param_7)) {
    if (param_5 < fVar1) {
      param_4 = param_4 + ((fVar1 - param_5) * (param_6 - param_4)) / (param_7 - param_5);
      param_5 = fVar1;
    }
    if (fVar2 < param_7) {
      param_6 = param_6 + ((fVar2 - param_7) * (param_6 - param_4)) / (param_7 - param_5);
      param_7 = fVar2;
    }
    fVar2 = (float)param_2;
    if ((param_4 <= fVar2) && (param_6 <= fVar2)) {
      *(float *)(param_1 + (longlong)param_2 * 4) =
           (param_7 - param_5) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (longlong)param_2 * 4);
      return;
    }
    if ((param_4 < (float)(param_2 + 1)) || (param_6 < (float)(param_2 + 1))) {
      *(float *)(param_1 + (longlong)param_2 * 4) =
           (DAT_1808ac34c - ((param_4 - fVar2) + (param_6 - fVar2)) * DAT_1808ac1f4) *
           (param_7 - param_5) * *(float *)(param_3 + 0x14) +
           *(float *)(param_1 + (longlong)param_2 * 4);
    }
  }
  return;
}



/* ===== 180238080 FUN_180238080 ===== */

void FUN_180238080(longlong param_1,longlong param_2,int param_3,longlong *param_4,float param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
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
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (param_4 != (longlong *)0x0) {
    fVar20 = param_5 + DAT_1808ac34c;
    fVar14 = DAT_1808ac34c;
    do {
      fVar17 = DAT_1808ac1f4;
      fVar13 = *(float *)((longlong)param_4 + 0xc);
      fVar11 = *(float *)(param_4 + 1);
      if (fVar13 == 0.0) {
        if (fVar11 < (float)param_3) {
          if (fVar11 < 0.0) {
            FUN_180237f40(param_2 + -4,0,param_4,fVar11,param_5,fVar11,fVar20);
          }
          else {
            FUN_180237f40(param_1,(int)fVar11,param_4,fVar11,param_5,fVar11,fVar20);
            FUN_180237f40(param_2 + -4);
          }
LAB_18023863c:
          fVar14 = DAT_1808ac34c;
        }
      }
      else {
        fVar15 = *(float *)(param_4 + 3);
        fVar18 = fVar13 + fVar11;
        if (fVar15 <= param_5) {
          fVar16 = fVar11;
          fVar15 = param_5;
        }
        else {
          fVar16 = (fVar15 - param_5) * fVar13 + fVar11;
        }
        fVar8 = *(float *)((longlong)param_4 + 0x1c);
        if (fVar20 <= fVar8) {
          fVar8 = fVar20;
          fVar10 = fVar13;
        }
        else {
          fVar10 = (fVar8 - param_5) * fVar13;
        }
        if ((((fVar16 < 0.0) || (fVar10 = fVar11 + fVar10, fVar10 < 0.0)) ||
            ((float)param_3 <= fVar16)) || ((float)param_3 <= fVar10)) {
          uVar4 = 0;
          if (0 < param_3) {
            do {
              uVar6 = (int)uVar4 + 1;
              uVar7 = (ulonglong)uVar6;
              fVar15 = (float)(int)uVar4;
              fVar14 = (float)(int)uVar6;
              fVar16 = (fVar15 - fVar11) / fVar13 + param_5;
              fVar17 = (fVar14 - fVar11) / fVar13 + param_5;
              if ((fVar15 <= fVar11) || (fVar18 <= fVar14)) {
                if ((fVar15 <= fVar18) || (fVar11 <= fVar14)) {
                  if (((fVar11 < fVar15) && (fVar15 < fVar18)) ||
                     ((fVar18 < fVar15 && (fVar15 < fVar11)))) {
                    FUN_180237f40(param_1,uVar4,param_4,fVar11,param_5,fVar15,fVar16);
                  }
                  else if ((fVar14 <= fVar11) || (fVar18 <= fVar14)) {
                    if ((fVar18 < fVar14) && (fVar14 < fVar11)) {
                      FUN_180237f40(param_1,uVar4,param_4,fVar11,param_5,fVar14,fVar17);
                    }
                  }
                  else {
                    FUN_180237f40(param_1,uVar4,param_4,fVar11,param_5,fVar14,fVar17);
                  }
                }
                else {
                  FUN_180237f40(param_1,uVar4,param_4,fVar11,param_5,fVar14,fVar17);
                  FUN_180237f40();
                }
              }
              else {
                FUN_180237f40(param_1,uVar4,param_4,fVar11,param_5,fVar15,fVar16);
                FUN_180237f40();
              }
              FUN_180237f40(param_1);
              uVar4 = uVar7 & 0xffffffff;
            } while ((int)uVar7 < param_3);
            goto LAB_18023863c;
          }
        }
        else {
          iVar2 = (int)fVar16;
          if (iVar2 == (int)fVar10) {
            lVar1 = (longlong)iVar2;
            fVar13 = (fVar8 - fVar15) * *(float *)((longlong)param_4 + 0x14);
            *(float *)(param_1 + lVar1 * 4) =
                 ((((float)iVar2 + fVar14) - fVar10) + (((float)iVar2 + fVar14) - fVar16)) *
                 DAT_1808ac1f4 * fVar13 + *(float *)(param_1 + lVar1 * 4);
            *(float *)(param_2 + lVar1 * 4) = fVar13 + *(float *)(param_2 + lVar1 * 4);
          }
          else {
            fVar14 = *(float *)(param_4 + 2);
            if (fVar16 <= fVar10) {
              fVar13 = fVar16;
            }
            else {
              fVar14 = (float)((uint)fVar14 ^ DAT_1808adec0);
              fVar13 = fVar8 - param_5;
              fVar8 = fVar20 - (fVar15 - param_5);
              fVar15 = fVar20 - fVar13;
              fVar13 = fVar10;
              fVar11 = fVar18;
              fVar10 = fVar16;
            }
            fVar18 = *(float *)((longlong)param_4 + 0x14);
            iVar5 = (int)fVar13;
            iVar3 = (int)fVar10;
            iVar2 = iVar5 + 1;
            fVar19 = (float)iVar3;
            fVar9 = ((float)iVar2 - fVar11) * fVar14 + param_5;
            fVar16 = (fVar19 - fVar11) * fVar14 + param_5;
            fVar11 = fVar20;
            if (fVar9 <= fVar20) {
              fVar11 = fVar9;
            }
            fVar9 = (fVar11 - fVar15) * fVar18;
            *(float *)(param_1 + (longlong)iVar5 * 4) =
                 ((float)iVar2 - fVar13) * fVar9 * DAT_1808ac1f4 +
                 *(float *)(param_1 + (longlong)iVar5 * 4);
            if ((fVar20 < fVar16) && (iVar5 = (iVar3 - iVar5) + -1, fVar16 = fVar20, iVar5 != 0)) {
              fVar14 = (fVar20 - fVar11) / (float)iVar5;
            }
            if (iVar2 < iVar3) {
              fVar14 = fVar18 * fVar14;
              if (3 < iVar3 - iVar2) {
                fVar13 = fVar14 * fVar17;
                do {
                  lVar1 = (longlong)iVar2;
                  iVar2 = iVar2 + 4;
                  *(float *)(param_1 + lVar1 * 4) = fVar13 + fVar9 + *(float *)(param_1 + lVar1 * 4)
                  ;
                  fVar11 = fVar9 + fVar14 + fVar14;
                  *(float *)(param_1 + 4 + lVar1 * 4) =
                       fVar13 + fVar9 + fVar14 + *(float *)(param_1 + 4 + lVar1 * 4);
                  fVar12 = fVar11 + fVar14;
                  *(float *)(param_1 + 8 + lVar1 * 4) =
                       fVar13 + fVar11 + *(float *)(param_1 + 8 + lVar1 * 4);
                  fVar9 = fVar12 + fVar14;
                  *(float *)(param_1 + 0xc + lVar1 * 4) =
                       fVar13 + fVar12 + *(float *)(param_1 + 0xc + lVar1 * 4);
                } while (iVar2 < iVar3 + -3);
              }
              for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
                fVar13 = fVar14 * fVar17 + fVar9;
                fVar9 = fVar9 + fVar14;
                *(float *)(param_1 + (longlong)iVar2 * 4) =
                     fVar13 + *(float *)(param_1 + (longlong)iVar2 * 4);
              }
            }
            fVar14 = DAT_1808ac34c;
            lVar1 = (longlong)iVar3;
            *(float *)(param_1 + lVar1 * 4) =
                 (((fVar19 + DAT_1808ac34c) - fVar19) + ((fVar19 + DAT_1808ac34c) - fVar10)) *
                 fVar17 * (fVar8 - fVar16) * fVar18 + fVar9 + *(float *)(param_1 + lVar1 * 4);
            *(float *)(param_2 + lVar1 * 4) =
                 (fVar8 - fVar15) * fVar18 + *(float *)(param_2 + lVar1 * 4);
          }
        }
      }
      param_4 = (longlong *)*param_4;
    } while (param_4 != (longlong *)0x0);
  }
  return;
}



/* ===== 1802386c0 FUN_1802386c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802386c0(int *param_1,float *param_2,int param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  float *pfVar1;
  longlong ****pppplVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong ****pppplVar11;
  int iVar12;
  float *pfVar13;
  longlong ****pppplVar14;
  longlong ****pppplVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_338 [32];
  float local_318;
  int local_308;
  undefined1 *local_300;
  longlong ****local_2f8;
  undefined1 *local_2f0;
  undefined8 *local_2e8;
  undefined1 *local_2e0;
  undefined1 local_2d8 [528];
  ulonglong local_c8;
  
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_338;
  pppplVar14 = (longlong ****)0x0;
  puVar18 = (undefined8 *)0x0;
  local_2e8 = (undefined8 *)0x0;
  local_2f8 = (longlong ****)0x0;
  if (*param_1 < 0x41) {
    local_300 = local_2d8;
  }
  else {
    local_300 = (undefined1 *)_malloc_base((longlong)(int)(*param_1 * 2 | 1) << 2);
  }
  fVar4 = DAT_1808ac34c;
  iVar17 = *param_1;
  param_2[(longlong)param_3 * 5 + 1] = (float)(param_1[1] + param_6) + DAT_1808ac34c;
  uVar7 = _DAT_1808ade90;
  fVar6 = DAT_1808acda0;
  fVar5 = DAT_1808acb94;
  fVar3 = DAT_1808ac1f4;
  if (0 < param_1[1]) {
    local_2f0 = local_300 + (longlong)iVar17 * 4;
    pppplVar15 = (longlong ****)0x0;
    iVar17 = 0;
    iVar19 = 0;
    local_2e0 = local_2f0 + 4;
    local_308 = param_6;
    do {
      pppplVar11 = (longlong ****)&local_2f8;
      fVar23 = (float)local_308 + fVar4;
      fVar22 = (float)local_308 + 0.0;
      FUN_180540170(local_300,0,(longlong)*param_1 << 2);
      FUN_180540170(local_2f0);
      if (pppplVar14 != (longlong ****)0x0) {
        do {
          pppplVar14 = (longlong ****)*pppplVar11;
          if (*(float *)((longlong)pppplVar14 + 0x1c) <= fVar22) {
            *pppplVar11 = *pppplVar14;
            *pppplVar14 = (longlong ***)pppplVar15;
            *(undefined4 *)((longlong)pppplVar14 + 0x14) = 0;
            pppplVar15 = pppplVar14;
            pppplVar14 = pppplVar11;
          }
          pppplVar11 = pppplVar14;
        } while (*pppplVar14 != (longlong ***)0x0);
        pppplVar14 = local_2f8;
      }
      pfVar13 = param_2;
      if (param_2[1] <= fVar23) {
        do {
          if (pfVar13[1] != pfVar13[3]) {
            puVar10 = puVar18;
            if (pppplVar15 == (longlong ****)0x0) {
              if (iVar19 == 0) {
                puVar10 = (undefined8 *)_malloc_base(0x6408);
                if (puVar10 == (undefined8 *)0x0) goto LAB_18023898c;
                *puVar10 = puVar18;
                iVar19 = 800;
              }
              iVar19 = iVar19 + -1;
              pppplVar11 = (longlong ****)(puVar10 + (longlong)iVar19 * 4 + 1);
              puVar18 = puVar10;
              if (pppplVar11 == (longlong ****)0x0) goto LAB_18023898c;
            }
            else {
              pppplVar11 = pppplVar15;
              pppplVar15 = (longlong ****)*pppplVar15;
            }
            fVar21 = (pfVar13[2] - *pfVar13) / (pfVar13[3] - pfVar13[1]);
            *(float *)((longlong)pppplVar11 + 0xc) = fVar21;
            if (fVar21 == 0.0) {
              fVar20 = 0.0;
            }
            else {
              fVar20 = fVar4 / fVar21;
            }
            *(float *)(pppplVar11 + 2) = fVar20;
            *(float *)(pppplVar11 + 1) =
                 ((fVar22 - pfVar13[1]) * fVar21 + *pfVar13) - (float)param_5;
            fVar21 = fVar6;
            if (pfVar13[4] != 0.0) {
              fVar21 = fVar4;
            }
            *(float *)((longlong)pppplVar11 + 0x14) = fVar21;
            *(float *)(pppplVar11 + 3) = pfVar13[1];
            fVar21 = pfVar13[3];
            *(float *)((longlong)pppplVar11 + 0x1c) = fVar21;
            if (((iVar17 == 0) && (param_6 != 0)) && (fVar21 < fVar22)) {
              *(float *)((longlong)pppplVar11 + 0x1c) = fVar22;
            }
            *pppplVar11 = (longlong ***)pppplVar14;
            pppplVar14 = pppplVar11;
            puVar18 = puVar10;
          }
LAB_18023898c:
          param_2 = pfVar13 + 5;
          pfVar1 = pfVar13 + 6;
          pfVar13 = param_2;
        } while (*pfVar1 <= fVar23);
        local_2f8 = pppplVar14;
        local_2e8 = puVar18;
      }
      puVar8 = local_300;
      if (pppplVar14 != (longlong ****)0x0) {
        local_318 = fVar22;
        FUN_180238080(local_300,local_2e0,*param_1,pppplVar14);
      }
      iVar16 = 0;
      fVar22 = 0.0;
      if (0 < *param_1) {
        do {
          fVar22 = fVar22 + *(float *)(local_2f0 + (longlong)iVar16 * 4);
          iVar12 = (int)((float)((uint)(fVar22 + *(float *)(puVar8 + (longlong)iVar16 * 4)) & uVar7)
                         * fVar5 + fVar3);
          if (0xff < iVar12) {
            iVar12 = 0xff;
          }
          iVar9 = iVar17 * param_1[2] + iVar16;
          iVar16 = iVar16 + 1;
          *(char *)((longlong)iVar9 + *(longlong *)(param_1 + 4)) = (char)iVar12;
        } while (iVar16 < *param_1);
        puVar18 = local_2e8;
      }
      pppplVar11 = (longlong ****)&local_2f8;
      pppplVar2 = pppplVar14;
      while (pppplVar2 != (longlong ****)0x0) {
        pppplVar11 = (longlong ****)*pppplVar11;
        *(float *)(pppplVar11 + 1) =
             *(float *)((longlong)pppplVar11 + 0xc) + *(float *)(pppplVar11 + 1);
        pppplVar2 = (longlong ****)*pppplVar11;
      }
      iVar17 = iVar17 + 1;
      local_308 = local_308 + 1;
    } while (iVar17 < param_1[1]);
  }
  while (puVar18 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar18;
    thunk_FUN_1805277b0(puVar18);
    puVar18 = puVar10;
  }
  if (local_300 != local_2d8) {
    thunk_FUN_1805277b0();
  }
  return;
}



/* ===== 180238b40 FUN_180238b40 ===== */

void FUN_180238b40(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar13 = 1;
  if (1 < param_2) {
    do {
      uVar12 = (uint)uVar13;
      uVar5 = *(undefined4 *)(param_1 + uVar13 * 0x14);
      fVar3 = *(float *)(param_1 + 4 + uVar13 * 0x14);
      uVar4 = *(undefined8 *)(param_1 + 8 + uVar13 * 0x14);
      uVar6 = *(undefined4 *)(param_1 + 0x10 + uVar13 * 0x14);
      uVar11 = uVar13;
      if (3 < uVar12) {
        do {
          uVar10 = (uint)uVar11;
          if (*(float *)(param_1 + -0x10 + uVar11 * 0x14) <= fVar3) goto LAB_180238c94;
          puVar2 = (undefined8 *)(param_1 + -0x14 + uVar11 * 0x14);
          uVar8 = puVar2[1];
          uVar7 = *(undefined4 *)(param_1 + -4 + uVar11 * 0x14);
          puVar1 = (undefined8 *)(param_1 + uVar11 * 0x14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar8;
          *(undefined4 *)(param_1 + 0x10 + uVar11 * 0x14) = uVar7;
          if (*(float *)(param_1 + -0x24 + uVar11 * 0x14) <= fVar3) {
            uVar10 = uVar10 - 1;
            goto LAB_180238c94;
          }
          puVar1 = (undefined8 *)(param_1 + -0x28 + uVar11 * 0x14);
          uVar8 = puVar1[1];
          uVar7 = *(undefined4 *)(param_1 + -0x18 + uVar11 * 0x14);
          puVar2 = (undefined8 *)(param_1 + -0x14 + uVar11 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined4 *)(param_1 + -4 + uVar11 * 0x14) = uVar7;
          if (*(float *)(param_1 + -0x38 + uVar11 * 0x14) <= fVar3) {
            uVar10 = uVar10 - 2;
            goto LAB_180238c94;
          }
          puVar1 = (undefined8 *)(param_1 + -0x3c + uVar11 * 0x14);
          uVar8 = puVar1[1];
          uVar7 = *(undefined4 *)(param_1 + -0x2c + uVar11 * 0x14);
          puVar2 = (undefined8 *)(param_1 + -0x28 + uVar11 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined4 *)(param_1 + -0x18 + uVar11 * 0x14) = uVar7;
          if (*(float *)(param_1 + -0x4c + uVar11 * 0x14) <= fVar3) {
            uVar10 = uVar10 - 3;
            goto LAB_180238c94;
          }
          puVar1 = (undefined8 *)(param_1 + -0x50 + uVar11 * 0x14);
          uVar8 = puVar1[1];
          uVar7 = *(undefined4 *)(param_1 + -0x40 + uVar11 * 0x14);
          uVar13 = (ulonglong)(uVar10 - 4);
          puVar2 = (undefined8 *)(param_1 + -0x3c + uVar11 * 0x14);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined4 *)(param_1 + -0x2c + uVar11 * 0x14) = uVar7;
          uVar11 = uVar13;
        } while (3 < (int)(uVar10 - 4));
      }
      uVar10 = (uint)uVar13;
      while ((0 < (int)uVar10 &&
             (uVar10 = (uint)uVar13, fVar3 < *(float *)(param_1 + -0x10 + uVar13 * 0x14)))) {
        puVar2 = (undefined8 *)(param_1 + -0x14 + uVar13 * 0x14);
        uVar8 = puVar2[1];
        uVar7 = *(undefined4 *)(param_1 + -4 + uVar13 * 0x14);
        uVar10 = uVar10 - 1;
        puVar1 = (undefined8 *)(param_1 + uVar13 * 0x14);
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        *(undefined4 *)(param_1 + 0x10 + uVar13 * 0x14) = uVar7;
        uVar13 = (ulonglong)uVar10;
      }
LAB_180238c94:
      if (uVar12 != uVar10) {
        lVar9 = (longlong)(int)uVar10;
        *(undefined8 *)(param_1 + 8 + lVar9 * 0x14) = uVar4;
        *(undefined4 *)(param_1 + 0x10 + lVar9 * 0x14) = uVar6;
        *(float *)(param_1 + 4 + lVar9 * 0x14) = fVar3;
        *(undefined4 *)(param_1 + lVar9 * 0x14) = uVar5;
      }
      uVar13 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < param_2);
  }
  return;
}



/* ===== 180238ce0 FUN_180238ce0 ===== */

void FUN_180238ce0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  
  if (0xc < (int)param_2) {
    uVar13 = (ulonglong)param_2;
    do {
      uVar12 = (uint)uVar13;
      uVar9 = (ulonglong)(uVar12 >> 1);
      fVar3 = *(float *)((longlong)param_1 + uVar9 * 0x14 + 4);
      fVar4 = *(float *)((longlong)param_1 + uVar13 * 0x14 + -0x10);
      if (*(float *)((longlong)param_1 + 4) < fVar3 != fVar3 < fVar4) {
        puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
        uVar6 = puVar1[1];
        iVar15 = 0;
        if (*(float *)((longlong)param_1 + 4) < fVar4 != fVar3 < fVar4) {
          iVar15 = uVar12 - 1;
        }
        lVar10 = (longlong)iVar15;
        puVar11 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        uVar7 = *puVar11;
        uVar8 = puVar11[1];
        uVar5 = *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10);
        puVar11 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        *puVar11 = *puVar1;
        puVar11[1] = uVar6;
        *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10) =
             *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10) = uVar5;
      }
      puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
      uVar6 = puVar1[1];
      uVar5 = *(undefined4 *)(param_1 + 2);
      iVar15 = 1;
      uVar7 = *param_1;
      uVar8 = param_1[1];
      *param_1 = *puVar1;
      param_1[1] = uVar6;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10);
      puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10) = uVar5;
      uVar14 = uVar12;
      while( true ) {
        uVar14 = uVar14 - 1;
        fVar3 = *(float *)((longlong)param_1 + 4);
        pfVar2 = (float *)((longlong)param_1 + (longlong)iVar15 * 0x14 + 4);
        if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
          do {
            iVar15 = iVar15 + 1;
            pfVar2 = (float *)((longlong)param_1 + (longlong)iVar15 * 0x14 + 4);
          } while (*pfVar2 <= fVar3 && fVar3 != *pfVar2);
        }
        fVar4 = *(float *)((longlong)param_1 + (longlong)(int)uVar14 * 0x14 + 4);
        while (fVar3 < fVar4) {
          uVar14 = uVar14 - 1;
          fVar4 = *(float *)((longlong)param_1 + (longlong)(int)uVar14 * 0x14 + 4);
        }
        puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar15 * 0x14);
        if ((int)uVar14 <= iVar15) break;
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar5 = *(undefined4 *)(puVar1 + 2);
        iVar15 = iVar15 + 1;
        lVar10 = (longlong)(int)uVar14;
        puVar11 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        uVar8 = puVar11[1];
        *puVar1 = *puVar11;
        puVar1[1] = uVar8;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10) = uVar5;
      }
      uVar12 = uVar12 - iVar15;
      if ((int)uVar14 < (int)uVar12) {
        puVar11 = param_1;
        param_1 = puVar1;
        uVar13 = (ulonglong)uVar12;
        uVar9 = (ulonglong)uVar14;
      }
      else {
        uVar9 = (ulonglong)uVar12;
        puVar11 = puVar1;
        uVar13 = (ulonglong)uVar14;
      }
      FUN_180238ce0(puVar11,uVar9);
    } while (0xc < (int)uVar13);
  }
  return;
}



/* ===== 180238e80 FUN_180238e80 ===== */

void FUN_180238e80(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
                  uint param_6,float param_7,float param_8)

{
  int *piVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  
  iVar12 = 0;
  if ((int)param_4 < 1) goto LAB_180238f48;
  iVar9 = 0;
  if (7 < param_4) {
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    do {
      lVar6 = (longlong)iVar9;
      iVar9 = iVar9 + 8;
      piVar1 = (int *)(param_3 + lVar6 * 4);
      iVar16 = iVar16 + *piVar1;
      iVar17 = iVar17 + piVar1[1];
      iVar18 = iVar18 + piVar1[2];
      iVar19 = iVar19 + piVar1[3];
      piVar1 = (int *)(param_3 + 0x10 + lVar6 * 4);
      iVar12 = iVar12 + *piVar1;
      iVar13 = iVar13 + piVar1[1];
      iVar14 = iVar14 + piVar1[2];
      iVar15 = iVar15 + piVar1[3];
    } while (iVar9 < (int)(param_4 & 0xfffffff8));
    iVar12 = iVar12 + iVar16 + iVar14 + iVar18 + iVar13 + iVar17 + iVar15 + iVar19;
    if ((int)param_4 <= iVar9) goto LAB_180238f48;
  }
  iVar13 = 0;
  iVar14 = 0;
  if ((int)(param_4 - iVar9) < 2) {
LAB_180238f3a:
    iVar12 = iVar12 + *(int *)(param_3 + (longlong)iVar9 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar9;
      iVar9 = iVar9 + 2;
      iVar13 = iVar13 + *(int *)(param_3 + lVar6 * 4);
      iVar14 = iVar14 + *(int *)(param_3 + 4 + lVar6 * 4);
    } while (iVar9 < (int)(param_4 - 1));
    if (iVar9 < (int)param_4) goto LAB_180238f3a;
  }
  iVar12 = iVar12 + iVar14 + iVar13;
LAB_180238f48:
  lVar6 = _malloc_base((longlong)iVar12 * 0x14 + 0x14);
  if (lVar6 != 0) {
    fVar20 = (float)(param_6 ^ DAT_1808adec0);
    iVar9 = 0;
    iVar12 = 0;
    uVar11 = 0;
    if (0 < (int)param_4) {
      do {
        lVar2 = param_2 + (longlong)iVar9 * 8;
        iVar14 = *(int *)(param_3 + uVar11 * 4);
        iVar9 = iVar9 + iVar14;
        iVar15 = 0;
        iVar13 = iVar14 + -1;
        if (3 < iVar14) {
          do {
            lVar8 = (longlong)iVar15;
            fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar13 * 8);
            fVar4 = *(float *)(lVar2 + 4 + lVar8 * 8);
            if (fVar3 != fVar4) {
              lVar7 = (longlong)iVar12;
              *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x14) = 0;
              if (fVar3 <= fVar4) {
                iVar16 = iVar15;
              }
              else {
                *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x14) = 1;
                iVar16 = iVar13;
                iVar13 = iVar15;
              }
              iVar12 = iVar12 + 1;
              fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar16 * 8);
              *(float *)(lVar6 + lVar7 * 0x14) =
                   param_5 * *(float *)(lVar2 + (longlong)iVar16 * 8) + param_7;
              fVar5 = *(float *)(lVar2 + (longlong)iVar13 * 8);
              *(float *)(lVar6 + 4 + lVar7 * 0x14) = fVar20 * fVar3 + param_8;
              fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar13 * 8);
              *(float *)(lVar6 + 8 + lVar7 * 0x14) = param_5 * fVar5 + param_7;
              *(float *)(lVar6 + 0xc + lVar7 * 0x14) = fVar20 * fVar3 + param_8;
            }
            fVar3 = *(float *)(lVar2 + 0xc + lVar8 * 8);
            if (fVar4 != fVar3) {
              lVar7 = (longlong)iVar12;
              *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x14) = 0;
              if (fVar4 <= fVar3) {
                iVar13 = iVar15 + 1;
                iVar16 = iVar15;
              }
              else {
                *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x14) = 1;
                iVar13 = iVar15;
                iVar16 = iVar15 + 1;
              }
              iVar12 = iVar12 + 1;
              fVar4 = *(float *)(lVar2 + 4 + (longlong)iVar13 * 8);
              *(float *)(lVar6 + lVar7 * 0x14) =
                   param_5 * *(float *)(lVar2 + (longlong)iVar13 * 8) + param_7;
              fVar5 = *(float *)(lVar2 + (longlong)iVar16 * 8);
              *(float *)(lVar6 + 4 + lVar7 * 0x14) = fVar20 * fVar4 + param_8;
              fVar4 = *(float *)(lVar2 + 4 + (longlong)iVar16 * 8);
              *(float *)(lVar6 + 8 + lVar7 * 0x14) = param_5 * fVar5 + param_7;
              *(float *)(lVar6 + 0xc + lVar7 * 0x14) = fVar20 * fVar4 + param_8;
            }
            fVar4 = *(float *)(lVar2 + 0x14 + lVar8 * 8);
            if (fVar3 != fVar4) {
              lVar7 = (longlong)iVar12;
              iVar13 = iVar15 + 1;
              *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x14) = 0;
              if (fVar3 <= fVar4) {
                iVar16 = iVar15 + 2;
              }
              else {
                *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x14) = 1;
                iVar16 = iVar13;
                iVar13 = iVar15 + 2;
              }
              iVar12 = iVar12 + 1;
              fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar16 * 8);
              *(float *)(lVar6 + lVar7 * 0x14) =
                   param_5 * *(float *)(lVar2 + (longlong)iVar16 * 8) + param_7;
              fVar5 = *(float *)(lVar2 + (longlong)iVar13 * 8);
              *(float *)(lVar6 + 4 + lVar7 * 0x14) = fVar20 * fVar3 + param_8;
              fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar13 * 8);
              *(float *)(lVar6 + 8 + lVar7 * 0x14) = param_5 * fVar5 + param_7;
              *(float *)(lVar6 + 0xc + lVar7 * 0x14) = fVar20 * fVar3 + param_8;
            }
            fVar3 = *(float *)(lVar2 + 0x1c + lVar8 * 8);
            if (fVar4 != fVar3) {
              lVar8 = (longlong)iVar12;
              iVar13 = iVar15 + 2;
              *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0x14) = 0;
              if (fVar4 <= fVar3) {
                iVar16 = iVar15 + 3;
              }
              else {
                *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0x14) = 1;
                iVar16 = iVar13;
                iVar13 = iVar15 + 3;
              }
              iVar12 = iVar12 + 1;
              fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar16 * 8);
              *(float *)(lVar6 + lVar8 * 0x14) =
                   param_5 * *(float *)(lVar2 + (longlong)iVar16 * 8) + param_7;
              fVar4 = *(float *)(lVar2 + (longlong)iVar13 * 8);
              *(float *)(lVar6 + 4 + lVar8 * 0x14) = fVar20 * fVar3 + param_8;
              fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar13 * 8);
              *(float *)(lVar6 + 8 + lVar8 * 0x14) = param_5 * fVar4 + param_7;
              *(float *)(lVar6 + 0xc + lVar8 * 0x14) = fVar20 * fVar3 + param_8;
            }
            iVar13 = iVar15 + 3;
            iVar15 = iVar15 + 4;
          } while (iVar15 < iVar14 + -3);
        }
        while (iVar16 = iVar15, iVar16 < iVar14) {
          fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar13 * 8);
          fVar4 = *(float *)(lVar2 + 4 + (longlong)iVar16 * 8);
          if (fVar3 != fVar4) {
            lVar8 = (longlong)iVar12;
            *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0x14) = 0;
            if (fVar3 <= fVar4) {
              iVar15 = iVar16;
            }
            else {
              *(undefined4 *)(lVar6 + 0x10 + lVar8 * 0x14) = 1;
              iVar15 = iVar13;
              iVar13 = iVar16;
            }
            iVar12 = iVar12 + 1;
            fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar15 * 8);
            *(float *)(lVar6 + lVar8 * 0x14) =
                 param_5 * *(float *)(lVar2 + (longlong)iVar15 * 8) + param_7;
            fVar4 = *(float *)(lVar2 + (longlong)iVar13 * 8);
            *(float *)(lVar6 + 4 + lVar8 * 0x14) = fVar20 * fVar3 + param_8;
            fVar3 = *(float *)(lVar2 + 4 + (longlong)iVar13 * 8);
            *(float *)(lVar6 + 8 + lVar8 * 0x14) = param_5 * fVar4 + param_7;
            *(float *)(lVar6 + 0xc + lVar8 * 0x14) = fVar20 * fVar3 + param_8;
          }
          iVar13 = iVar16;
          iVar15 = iVar16 + 1;
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)param_4);
    }
    FUN_180238ce0(lVar6,iVar12);
    FUN_180238b40(lVar6,iVar12);
    FUN_1802386c0(param_1,lVar6,iVar12);
    thunk_FUN_1805277b0(lVar6);
  }
  return;
}



/* ===== 1802393d0 FUN_1802393d0 ===== */

undefined8
FUN_1802393d0(longlong param_1,int *param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,float param_8,float param_9,int param_10)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = DAT_1808ac1f4;
  if (param_10 < 0x11) {
    fVar5 = (param_5 + param_5 + param_3 + param_7) * DAT_1808ac140;
    fVar6 = (param_6 + param_6 + param_4 + param_8) * DAT_1808ac140;
    fVar4 = (param_3 + param_7) * DAT_1808ac1f4 - fVar5;
    fVar3 = (param_4 + param_8) * DAT_1808ac1f4 - fVar6;
    if (fVar3 * fVar3 + fVar4 * fVar4 <= param_9) {
      iVar1 = *param_2;
      if (param_1 != 0) {
        *(float *)(param_1 + (longlong)iVar1 * 8) = param_7;
        *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_8;
      }
      *param_2 = iVar1 + 1;
    }
    else {
      FUN_1802393d0();
      FUN_1802393d0(param_1,param_2,fVar5,fVar6,(param_5 + param_7) * fVar2,
                    (param_6 + param_8) * fVar2,param_7,param_8,param_9,param_10 + 1);
    }
  }
  return 1;
}



/* ===== 1802395d0 FUN_1802395d0 ===== */

void FUN_1802395d0(longlong param_1,int *param_2,float param_3,float param_4,float param_5,
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
  fVar5 = (param_6 - param_4) * (param_6 - param_4) + (param_5 - param_3) * (param_5 - param_3);
  if (fVar5 < 0.0) {
    fVar5 = (float)FUN_18051af10(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  fVar6 = (param_10 - param_8) * (param_10 - param_8) + (param_9 - param_7) * (param_9 - param_7);
  if (fVar6 < 0.0) {
    fVar6 = (float)FUN_18051af10(fVar6);
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  fVar6 = fVar2 + fVar5 + fVar6;
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
    fVar5 = (fVar7 + fVar3) * DAT_1808ac1f4;
    param_5 = (param_7 + fVar7) * DAT_1808ac1f4;
    fVar7 = (param_6 + fVar2) * DAT_1808ac1f4;
    fVar4 = (param_5 + fVar5) * DAT_1808ac1f4;
    FUN_1802395d0(param_1,param_2,param_3,param_4,fVar3,fVar6,fVar5,fVar2,fVar4,fVar7,param_11,
                  param_12);
    fVar2 = (param_8 - param_6) * (param_8 - param_6) + (param_7 - param_5) * (param_7 - param_5);
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_18051af10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar5 = (param_6 - fVar7) * (param_6 - fVar7) + (param_5 - fVar4) * (param_5 - fVar4);
    if (fVar5 < 0.0) {
      fVar5 = (float)FUN_18051af10(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar6 = (param_10 - param_8) * (param_10 - param_8) + (param_9 - param_7) * (param_9 - param_7);
    if (fVar6 < 0.0) {
      fVar6 = (float)FUN_18051af10(fVar6);
    }
    else {
      fVar6 = SQRT(fVar6);
    }
    fVar6 = fVar2 + fVar5 + fVar6;
    fVar2 = (param_10 - fVar7) * (param_10 - fVar7) + (param_9 - fVar4) * (param_9 - fVar4);
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_18051af10(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar6 * fVar6 - fVar2 * fVar2;
    param_4 = fVar7;
    param_3 = fVar4;
  }
  iVar1 = *param_2;
  if (param_1 != 0) {
    *(float *)(param_1 + (longlong)iVar1 * 8) = param_9;
    *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_10;
  }
  *param_2 = iVar1 + 1;
  return;
}



/* ===== 180239a70 FUN_180239a70 ===== */

longlong FUN_180239a70(longlong param_1,int param_2,undefined8 param_3,longlong *param_4,
                      int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  int local_res10 [2];
  int local_res18;
  
  lVar5 = 0;
  local_res10[0] = 0;
  iVar10 = 0;
  uVar7 = 0;
  if (0 < param_2) {
    do {
      iVar3 = iVar10 + 1;
      if (*(char *)(param_1 + 0xc + uVar7 * 0xe) != '\x01') {
        iVar3 = iVar10;
      }
      iVar10 = iVar3;
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
    } while ((int)uVar9 < param_2);
  }
  *param_5 = iVar10;
  if (iVar10 != 0) {
    lVar4 = _malloc_base((longlong)iVar10 << 2);
    *param_4 = lVar4;
    if (lVar4 != 0) {
      lVar4 = 0;
      local_res18 = 0;
      do {
        if ((local_res18 == 1) && (lVar5 = _malloc_base((longlong)local_res10[0] << 3), lVar5 == 0))
        {
          thunk_FUN_1805277b0(0);
          thunk_FUN_1805277b0(*param_4);
          *param_4 = 0;
          *param_5 = 0;
          return 0;
        }
        uVar7 = 0;
        local_res10[0] = 0;
        iVar10 = -1;
        if (0 < param_2) {
          do {
            lVar8 = uVar7 * 0xe;
            cVar1 = *(char *)(param_1 + 0xc + lVar8);
            if (cVar1 == '\x01') {
              if (-1 < iVar10) {
                *(int *)(*param_4 + (longlong)iVar10 * 4) = local_res10[0] - (int)lVar4;
              }
              lVar4 = (longlong)local_res10[0];
              iVar10 = iVar10 + 1;
              uVar2 = *(undefined4 *)(param_1 + lVar8);
              uVar11 = (undefined2)((uint)uVar2 >> 0x10);
              local_res10[0] = local_res10[0] + 1;
              if (lVar5 != 0) {
                *(ulonglong *)(lVar5 + lVar4 * 8) =
                     CONCAT44((float)(int)((longlong)CONCAT26(uVar11,CONCAT24(uVar11,uVar2)) >> 0x30
                                          ),(float)(int)(short)uVar2);
              }
            }
            else if (cVar1 == '\x02') {
              lVar6 = (longlong)local_res10[0];
              uVar2 = *(undefined4 *)(param_1 + lVar8);
              uVar11 = (undefined2)((uint)uVar2 >> 0x10);
              local_res10[0] = local_res10[0] + 1;
              if (lVar5 != 0) {
                *(ulonglong *)(lVar5 + lVar6 * 8) =
                     CONCAT44((float)(int)((longlong)CONCAT26(uVar11,CONCAT24(uVar11,uVar2)) >> 0x30
                                          ),(float)(int)(short)uVar2);
              }
            }
            else if (cVar1 == '\x03') {
              FUN_1802393d0(lVar5,local_res10);
            }
            else if (cVar1 == '\x04') {
              FUN_1802395d0(lVar5,local_res10);
            }
            uVar9 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar9;
          } while ((int)uVar9 < param_2);
        }
        *(int *)(*param_4 + (longlong)iVar10 * 4) = local_res10[0] - (int)lVar4;
        local_res18 = local_res18 + 1;
      } while (local_res18 < 2);
      return lVar5;
    }
    *param_5 = 0;
  }
  return 0;
}



/* ===== 180239e40 FUN_180239e40 ===== */

void FUN_180239e40(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                  float param_6,float param_7,float param_8,float param_9,undefined4 param_10)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined8 local_res8;
  undefined8 local_res10;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  
  uVar6 = param_10;
  local_res8 = param_1;
  uVar7 = FUN_180237e60(&DAT_180cf9880,param_10,&local_res10);
  fVar5 = param_9;
  fVar4 = param_8;
  fVar3 = param_7;
  fVar2 = param_6;
  if (DAT_180cf98cc == 0) {
    iVar10 = FUN_180235af0(&DAT_180cf9880,uVar6);
    if (iVar10 < 0) {
      iVar10 = 0;
      iVar11 = 0;
      goto LAB_180239f7c;
    }
    lVar9 = (longlong)iVar10;
    iVar10 = (int)CONCAT11(*(undefined1 *)(lVar9 + 2 + DAT_180cf9888),
                           *(undefined1 *)(lVar9 + 3 + DAT_180cf9888));
    iVar11 = (int)CONCAT11(*(undefined1 *)(lVar9 + 8 + DAT_180cf9888),
                           *(undefined1 *)(lVar9 + 9 + DAT_180cf9888));
  }
  else {
    local_b0 = 1;
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    iVar8 = FUN_180236d80(&DAT_180cf9880,uVar6,&local_b0);
    iVar10 = 0;
    if (iVar8 != 0) {
      iVar10 = (int)local_98;
    }
    iVar11 = 0;
    if (iVar8 != 0) {
      iVar11 = uStack_90._4_4_;
    }
  }
  fVar12 = (float)FUN_18053f0d0((float)iVar10 * fVar2 + fVar4);
  iVar10 = (int)fVar12;
  fVar12 = (float)FUN_18053f0d0(fVar5 - (float)iVar11 * fVar3);
  iVar11 = (int)fVar12;
LAB_180239f7c:
  local_c0 = param_5;
  local_c8 = param_3;
  local_c4 = param_4;
  local_b8 = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    param_5 = 0;
    fVar12 = fVar3;
    if (fVar2 <= fVar3) {
      fVar12 = fVar2;
    }
    local_res8 = 0;
    lVar9 = FUN_180239a70(local_res10,uVar7,DAT_1808ac188 / fVar12,&local_res8,&param_5);
    uVar1 = local_res8;
    if (lVar9 != 0) {
      FUN_180238e80(&local_c8,lVar9,local_res8,param_5,fVar2,fVar3,fVar4,fVar5,iVar10,iVar11);
      thunk_FUN_1805277b0(uVar1);
      thunk_FUN_1805277b0(lVar9);
    }
  }
  thunk_FUN_1805277b0(local_res10);
  return;
}



/* ===== 18023a070 FUN_18023a070 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18023a070(void)

{
  char cVar1;
  UINT UVar2;
  int iVar3;
  char **ppcVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 auStack_3f8 [32];
  char *local_3d8;
  longlong local_3c8;
  undefined1 local_3c0;
  undefined1 local_3bf;
  undefined4 local_3be;
  undefined2 local_3ba;
  undefined8 local_3b8;
  undefined2 local_3b0;
  undefined4 local_3ae;
  undefined2 local_3aa;
  char *local_3a8 [5];
  char *local_380;
  longlong local_378 [2];
  byte abStack_368 [56];
  longlong alStack_330 [25];
  CHAR local_268 [272];
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_3f8;
  if (DAT_180ccf87e == '\0') {
    if (DAT_180ccf87c == '\0') {
      FUN_180540170(local_268,0,0x104);
      UVar2 = GetWindowsDirectoryA(local_268,0x104);
      if (UVar2 != 0) {
        local_3a8[0] = "verdanab.ttf";
        local_3a8[1] = "tahomabd.ttf";
        local_3a8[2] = "arialbd.ttf";
        local_3a8[3] = "verdana.ttf";
        local_3a8[4] = "arial.ttf";
        ppcVar4 = local_3a8;
        do {
          FUN_180540170(local_158,0,0x104);
          local_3d8 = *ppcVar4;
          snprintf(local_158,0x104,"%s\\Fonts\\%s",local_268);
          FUN_1800695d0(local_378,local_158,0x20);
          if ((abStack_368[*(int *)(local_378[0] + 4)] & 6) == 0) {
            local_3c8 = *(longlong *)((longlong)alStack_330 + (longlong)*(int *)(local_378[0] + 4));
            local_3b8 = 0;
            local_3b0 = 1;
            local_3ae = local_3be;
            local_3aa = local_3ba;
            local_3c0 = local_3c8 == 0;
            local_3bf = 0;
            uVar8 = FUN_18023b240(&DAT_180cf9968,&local_3c8,&local_3b8);
            if (DAT_180cf9968 != DAT_180cf9970) {
              cVar1 = *DAT_180cf9968;
              if (cVar1 == '1') {
                bVar7 = DAT_180cf9968[1] == '\0';
LAB_18023a2ff:
                if ((!bVar7) || (DAT_180cf9968[2] != '\0')) goto LAB_18023a310;
                bVar7 = DAT_180cf9968[3] == '\0';
LAB_18023a30b:
                uVar5 = 0;
                if (!bVar7) goto LAB_18023a310;
              }
              else {
                if (cVar1 == 't') {
                  if (DAT_180cf9968[1] == 'y') {
                    if (DAT_180cf9968[2] == 'p') {
                      bVar7 = DAT_180cf9968[3] == '1';
                      goto LAB_18023a30b;
                    }
                  }
                  else if (DAT_180cf9968[1] == 'r') {
                    if (DAT_180cf9968[2] == 'u') {
                      bVar7 = DAT_180cf9968[3] == 'e';
                      goto LAB_18023a30b;
                    }
                  }
                  else if ((((DAT_180cf9968[1] == 't') && (DAT_180cf9968[2] == 'c')) &&
                           (DAT_180cf9968[3] == 'f')) &&
                          (((((uint)(byte)DAT_180cf9968[5] << 0x10 |
                              (uint)(byte)DAT_180cf9968[6] << 8 |
                              (uint)(byte)DAT_180cf9968[4] << 0x18 | (uint)(byte)DAT_180cf9968[7]) -
                             0x10000 & 0xfffeffff) == 0 &&
                           (0 < CONCAT31(CONCAT21(CONCAT11(DAT_180cf9968[8],DAT_180cf9968[9]),
                                                  DAT_180cf9968[10]),DAT_180cf9968[0xb]))))) {
                    uVar5 = (uint)(byte)DAT_180cf9968[0xd] << 0x10 |
                            (uint)(byte)DAT_180cf9968[0xe] << 8 |
                            (uint)(byte)DAT_180cf9968[0xc] << 0x18 | (uint)(byte)DAT_180cf9968[0xf];
                    goto LAB_18023a316;
                  }
                }
                else if (cVar1 == 'O') {
                  if ((DAT_180cf9968[1] == 'T') && (DAT_180cf9968[2] == 'T')) {
                    bVar7 = DAT_180cf9968[3] == 'O';
                    goto LAB_18023a30b;
                  }
                }
                else if (cVar1 == '\0') {
                  bVar7 = DAT_180cf9968[1] == '\x01';
                  goto LAB_18023a2ff;
                }
LAB_18023a310:
                uVar5 = 0xffffffff;
              }
LAB_18023a316:
              iVar3 = FUN_180235080(uVar8,DAT_180cf9968,uVar5);
              if (iVar3 != 0) {
                lVar6 = (longlong)DAT_180cf98a4;
                iVar3 = (int)CONCAT11(*(undefined1 *)(lVar6 + 4 + DAT_180cf9888),
                                      *(undefined1 *)(lVar6 + 5 + DAT_180cf9888));
                DAT_180cf9920 =
                     DAT_1808acab0 /
                     (float)(iVar3 - CONCAT11(*(undefined1 *)(lVar6 + 6 + DAT_180cf9888),
                                              *(undefined1 *)(lVar6 + 7 + DAT_180cf9888)));
                DAT_180cf9948 = (float)iVar3 * DAT_180cf9920;
                DAT_180ccf87e = '\x01';
                FUN_18005e2f0(local_378);
                goto LAB_18023a3e1;
              }
            }
          }
          FUN_18005e2f0(local_378);
          ppcVar4 = ppcVar4 + 1;
        } while (ppcVar4 != local_3a8 + 5);
      }
      DAT_180ccf87c = '\x01';
    }
    uVar8 = 0;
  }
  else {
LAB_18023a3e1:
    uVar8 = 1;
  }
  return uVar8;
}



/* ===== 18023a3f0 FUN_18023a3f0 ===== */

undefined1 * FUN_18023a3f0(undefined1 *param_1,char param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  iVar2 = FUN_180235750(param_1,(int)param_2);
  fVar1 = DAT_180cf9920;
  if (iVar2 != 0) {
    if (DAT_180cf98cc == 0) {
      iVar2 = FUN_180235af0(&DAT_180cf9880,iVar2);
      if (iVar2 < 0) {
        return param_1;
      }
      lVar5 = (longlong)iVar2;
      iVar2 = (int)CONCAT11(*(undefined1 *)(lVar5 + 2 + DAT_180cf9888),
                            *(undefined1 *)(lVar5 + 3 + DAT_180cf9888));
      iVar4 = (int)CONCAT11(*(undefined1 *)(lVar5 + 6 + DAT_180cf9888),
                            *(undefined1 *)(lVar5 + 7 + DAT_180cf9888));
      iVar3 = (int)CONCAT11(*(undefined1 *)(lVar5 + 8 + DAT_180cf9888),
                            *(undefined1 *)(lVar5 + 9 + DAT_180cf9888));
    }
    else {
      local_98 = 1;
      local_70 = 0;
      local_68 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      iVar2 = FUN_180236d80(&DAT_180cf9880,iVar2,&local_98);
      bVar6 = iVar2 != 0;
      iVar2 = 0;
      if (bVar6) {
        iVar2 = (int)local_80;
      }
      iVar4 = 0;
      if (bVar6) {
        iVar4 = local_80._4_4_;
      }
      iVar3 = 0;
      if (bVar6) {
        iVar3 = uStack_78._4_4_;
      }
    }
    fVar7 = (float)FUN_18053f0d0((float)iVar2 * fVar1 + 0.0);
    fVar8 = (float)FUN_18053f0d0(0.0 - (float)iVar3 * fVar1);
    fVar9 = (float)FUN_18053ef70((float)iVar4 * fVar1 + 0.0);
    fVar10 = (float)FUN_18053ef70();
    fVar1 = DAT_180cf9948;
    if ((int)fVar7 < (int)fVar9) {
      if ((int)fVar8 < (int)fVar10) {
        *param_1 = 1;
        *(float *)(param_1 + 4) = (float)(int)fVar7;
        *(float *)(param_1 + 0xc) = (float)(int)fVar9;
        *(float *)(param_1 + 8) = (float)(int)fVar8 + fVar1;
        *(float *)(param_1 + 0x10) = (float)(int)fVar10 + fVar1;
      }
    }
  }
  return param_1;
}



