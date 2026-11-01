/* ===== 1812604f0 FUN_1812604f0 ===== */

longlong FUN_1812604f0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (ulonglong)*(ushort *)(param_1 + 0x14) + 0x18 + param_1;
  if (*(ushort *)(param_1 + 6) != 0) {
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar2 < *(ushort *)(param_1 + 6));
  }
  return 0;
}



/* ===== 181260540 FUN_181260540 ===== */

ulonglong FUN_181260540(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_181260590(&DAT_181253350);
  if ((int)uVar1 != 0) {
    lVar2 = FUN_1812604f0(&DAT_181253350,param_1 + -0x181253350);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = (ulonglong)(~*(uint *)(lVar2 + 0x24) >> 0x1f);
    }
  }
  return uVar1;
}



/* ===== 181260590 FUN_181260590 ===== */

bool FUN_181260590(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}



/* ===== 1812605c0 FUN_1812605c0 ===== */

undefined8 * FUN_1812605c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &DAT_181269c58;
  if ((param_2 & 1) != 0) {
    thunk_FUN_181259da0(param_1,0x18);
  }
  return param_1;
}



/* ===== 1812605f0 FUN_1812605f0 ===== */

undefined8 FUN_1812605f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_181260610(param_2,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}



/* ===== 181260610 FUN_181260610 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001812734a2) */

void FUN_181260610(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  
  pbVar5 = (byte *)(*(longlong *)(param_2 + 8) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar1 = pbVar5[3];
  if (2 < (*pbVar5 & 7)) {
    uVar7 = bVar1 & 0x1f;
    if ((bVar1 & 0x1f) != 0) {
      if ((*pbVar5 & 0x40) == 0) {
        lVar3 = (ulonglong)uVar7 + 4;
      }
      else {
        lVar3 = (ulonglong)uVar7 * 2 + 5;
      }
      pbVar5 = pbVar5 + lVar3;
      uVar4 = 0;
      pbVar6 = pbVar5;
      if (bVar1 >> 5 != 0) {
        do {
          pbVar5 = pbVar6 + 3;
          bVar8 = *pbVar6 >> 3;
          if (bVar8 != 0) {
            if ((*pbVar6 & 2) == 0) {
              pbVar5 = pbVar6 + (ulonglong)bVar8 + 6;
            }
            else {
              pbVar5 = pbVar5 + (ulonglong)bVar8 * 2 + 4;
            }
          }
          uVar4 = uVar4 + 1;
          pbVar6 = pbVar5;
        } while (uVar4 < bVar1 >> 5);
      }
      uVar4 = 0;
      if ((bVar1 & 0x1f) != 0) {
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1;
          if (((bVar1 < 4) || (bVar8 = bVar1 & 0xf, (byte)(bVar8 - 8) < 3)) ||
             (bVar8 = bVar1 & 7, (byte)(bVar8 - 4) < 4)) {
            if (bVar8 == 0) {
              return;
            }
            if (0x20 < bVar8) goto switchD_18126074f_caseD_4;
          }
          else {
            if ((bVar1 & 0x3f) != 0x20) goto switchD_18126074f_caseD_4;
            bVar8 = 0x20;
          }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(byte *)((longlong)&UINT_1812607c8 + (ulonglong)bVar8)) {
          case 0:
            lVar3 = 2;
            break;
          case 1:
            lVar3 = 5;
            break;
          case 2:
            lVar3 = 3;
            break;
          case 3:
            lVar3 = 1;
            break;
          case 4:
switchD_18126074f_caseD_4:
            FUN_181254b40();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          case 5:
            if (SCARRY8((ulonglong)
                        (&switchD_18126074f::switchdataD_1812607b4)
                        [*(byte *)((longlong)&UINT_1812607c8 + (ulonglong)bVar8)],0x181253350)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          pbVar5 = pbVar5 + lVar3;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar7);
      }
    }
  }
  return;
}



/* ===== 181260800 __security_check_cookie ===== */

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18126c390) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_181254b40(_StackCookie);
  return;
}



/* ===== 181260820 thunk_FUN_181259da0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_181259da0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (iVar2 = (*DAT_181262498)(_DAT_18132f518,0,param_1), iVar2 == 0)) {
    uVar3 = (*DAT_1812623c8)();
    uVar3 = FUN_181259bbc(uVar3);
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = uVar3;
  }
  return;
}



/* ===== 1812608b0 __chkstk ===== */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



/* ===== 181260900 thunk_FUN_181259da0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_181259da0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != 0) && (iVar2 = (*DAT_181262498)(_DAT_18132f518,0,param_1), iVar2 == 0)) {
    uVar3 = (*DAT_1812623c8)();
    uVar3 = FUN_181259bbc(uVar3);
    puVar1 = (undefined4 *)FUN_181259cfc();
    *puVar1 = uVar3;
  }
  return;
}



/* ===== 181260910 FUN_181260910 ===== */

void FUN_181260910(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_181255710();
  if ((((*(byte *)(param_1 + 1) & 0x66) == 0) && (*param_1 == -0x1f928c9d)) && (iVar2 == 1)) {
    lVar1 = FUN_181255cd0();
    *(int **)(lVar1 + 0x20) = param_1;
    lVar1 = FUN_181255cd0();
    *(undefined8 *)(lVar1 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_181258e5c();
  }
  return;
}



/* ===== 1812609b0 FUN_1812609b0 ===== */

void FUN_1812609b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001812609b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1812625a8)();
  return;
}



/* ===== 1812609f0 FUN_1812609f0 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1812609f0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  char *pcVar9;
  undefined4 uVar10;
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
  undefined8 uVar23;
  char cVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  byte bVar32;
  undefined1 (*pauVar29) [32];
  undefined8 *puVar30;
  undefined8 *puVar31;
  char cVar33;
  char cVar35;
  byte bVar36;
  char cVar37;
  undefined1 (*pauVar34) [32];
  undefined6 uVar38;
  char unaff_BL;
  char cVar39;
  char unaff_BH;
  byte bVar40;
  undefined6 unaff_0000001a;
  undefined8 *unaff_RBP;
  undefined8 uVar41;
  char *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar42;
  longlong lVar43;
  ulonglong uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_3) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 < 0x21) {
    uVar41 = param_2[1];
    puVar31 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar31;
    uVar12 = puVar31[1];
    *param_1 = *param_2;
    param_1[1] = uVar41;
    param_1 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *param_1 = uVar11;
    param_1[1] = uVar12;
    return;
  }
  puVar31 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar31 = param_1;
  }
  if (param_1 < puVar31) {
    uVar41 = *param_2;
    uVar11 = param_2[1];
    lVar43 = (longlong)param_2 - (longlong)param_1;
    puVar31 = (undefined8 *)((longlong)param_1 + lVar43 + (param_3 - 0x10));
    uVar12 = *puVar31;
    uVar13 = puVar31[1];
    puVar30 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar42 = param_3 - 0x10;
    puVar31 = puVar30;
    uVar45 = uVar12;
    uVar46 = uVar13;
    if (((ulonglong)puVar30 & 0xf) != 0) {
      puVar31 = (undefined8 *)((ulonglong)puVar30 & 0xfffffffffffffff0);
      uVar45 = *(undefined8 *)((longlong)puVar31 + lVar43);
      uVar46 = ((undefined8 *)((longlong)puVar31 + lVar43))[1];
      *puVar30 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar42 = (longlong)puVar31 - (longlong)param_1;
    }
    uVar44 = uVar42 >> 7;
    if (uVar44 != 0) {
      *puVar31 = uVar45;
      puVar31[1] = uVar46;
      puVar30 = puVar31;
      while( true ) {
        puVar3 = (undefined8 *)((longlong)puVar30 + lVar43 + -0x10);
        uVar12 = puVar3[1];
        puVar31 = (undefined8 *)((longlong)puVar30 + lVar43 + -0x20);
        uVar13 = *puVar31;
        uVar45 = puVar31[1];
        puVar31 = puVar30 + -0x10;
        puVar30[-2] = *puVar3;
        puVar30[-1] = uVar12;
        puVar30[-4] = uVar13;
        puVar30[-3] = uVar45;
        puVar3 = (undefined8 *)((longlong)puVar30 + lVar43 + -0x30);
        uVar12 = puVar3[1];
        puVar4 = (undefined8 *)((longlong)puVar30 + lVar43 + -0x40);
        uVar13 = *puVar4;
        uVar45 = puVar4[1];
        uVar44 = uVar44 - 1;
        puVar30[-6] = *puVar3;
        puVar30[-5] = uVar12;
        puVar30[-8] = uVar13;
        puVar30[-7] = uVar45;
        puVar3 = (undefined8 *)((longlong)puVar30 + lVar43 + -0x50);
        uVar12 = puVar3[1];
        puVar4 = (undefined8 *)((longlong)puVar30 + lVar43 + -0x60);
        uVar13 = *puVar4;
        uVar45 = puVar4[1];
        puVar30[-10] = *puVar3;
        puVar30[-9] = uVar12;
        puVar30[-0xc] = uVar13;
        puVar30[-0xb] = uVar45;
        puVar3 = (undefined8 *)((longlong)puVar30 + lVar43 + -0x70);
        uVar12 = *puVar3;
        uVar13 = puVar3[1];
        uVar45 = *(undefined8 *)((longlong)puVar31 + lVar43);
        uVar46 = ((undefined8 *)((longlong)puVar31 + lVar43))[1];
        if (uVar44 == 0) break;
        puVar30[-0xe] = uVar12;
        puVar30[-0xd] = uVar13;
        *puVar31 = uVar45;
        puVar30[-0xf] = uVar46;
        puVar30 = puVar31;
      }
      puVar30[-0xe] = uVar12;
      puVar30[-0xd] = uVar13;
      uVar42 = uVar42 & 0x7f;
    }
    for (uVar44 = uVar42 >> 4; uVar44 != 0; uVar44 = uVar44 - 1) {
      *puVar31 = uVar45;
      puVar31[1] = uVar46;
      puVar31 = puVar31 + -2;
      uVar45 = *(undefined8 *)((longlong)puVar31 + lVar43);
      uVar46 = ((undefined8 *)((longlong)puVar31 + lVar43))[1];
    }
    if ((uVar42 & 0xf) != 0) {
      *param_1 = uVar41;
      param_1[1] = uVar11;
    }
    *puVar31 = uVar45;
    puVar31[1] = uVar46;
    return;
  }
  if (DAT_18126c3d8 < 3) {
    if ((param_3 < 0x801) || ((DAT_18132ef5c & 2) == 0)) {
      if (0x80 < param_3) {
        lVar43 = ((ulonglong)param_1 & 0xf) - 0x10;
        param_1 = (undefined8 *)((longlong)param_1 - lVar43);
        param_2 = (undefined8 *)((longlong)param_2 - lVar43);
        param_3 = param_3 + lVar43;
        if (0x80 < param_3) {
          do {
            uVar41 = param_2[1];
            uVar11 = param_2[2];
            uVar12 = param_2[3];
            uVar13 = param_2[4];
            uVar45 = param_2[5];
            uVar46 = param_2[6];
            uVar14 = param_2[7];
            *param_1 = *param_2;
            param_1[1] = uVar41;
            param_1[2] = uVar11;
            param_1[3] = uVar12;
            param_1[4] = uVar13;
            param_1[5] = uVar45;
            param_1[6] = uVar46;
            param_1[7] = uVar14;
            uVar41 = param_2[9];
            uVar11 = param_2[10];
            uVar12 = param_2[0xb];
            uVar13 = param_2[0xc];
            uVar45 = param_2[0xd];
            uVar46 = param_2[0xe];
            uVar14 = param_2[0xf];
            param_1[8] = param_2[8];
            param_1[9] = uVar41;
            param_1[10] = uVar11;
            param_1[0xb] = uVar12;
            param_1[0xc] = uVar13;
            param_1[0xd] = uVar45;
            param_1[0xe] = uVar46;
            param_1[0xf] = uVar14;
            param_1 = param_1 + 0x10;
            param_2 = param_2 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000181260f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((longlong)&DAT_181253350 +
                (ulonglong)*(uint *)(&LAB_181269e48 + (param_3 + 0xf >> 4) * 4)))();
      return;
    }
LAB_1812609e0:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  if ((0x2000 < param_3) && (param_3 < 0x180001)) {
    puVar31 = param_1 + 8;
    if (param_2 < param_1) {
      puVar31 = param_2;
    }
    if ((puVar31 <= param_2) && ((DAT_18132ef5c & 2) != 0)) goto LAB_1812609e0;
  }
  uVar41 = *param_2;
  if (0x100 < param_3) {
    lVar43 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar29 = (undefined1 (*) [32])((longlong)param_1 - lVar43);
    pauVar34 = (undefined1 (*) [32])((longlong)param_2 - lVar43);
    param_3 = param_3 + lVar43;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar42 = param_3;
          auVar5 = pauVar34[1];
          auVar6 = pauVar34[2];
          auVar7 = pauVar34[3];
          auVar8 = vmovntdq_avx(*pauVar34);
          *pauVar29 = auVar8;
          auVar5 = vmovntdq_avx(auVar5);
          pauVar29[1] = auVar5;
          auVar5 = vmovntdq_avx(auVar6);
          pauVar29[2] = auVar5;
          auVar5 = vmovntdq_avx(auVar7);
          pauVar29[3] = auVar5;
          auVar5 = pauVar34[5];
          auVar6 = pauVar34[6];
          auVar7 = pauVar34[7];
          auVar8 = vmovntdq_avx(pauVar34[4]);
          pauVar29[4] = auVar8;
          auVar5 = vmovntdq_avx(auVar5);
          pauVar29[5] = auVar5;
          auVar5 = vmovntdq_avx(auVar6);
          pauVar29[6] = auVar5;
          auVar5 = vmovntdq_avx(auVar7);
          pauVar29[7] = auVar5;
          pauVar29 = pauVar29 + 8;
          pauVar34 = pauVar34 + 8;
          param_3 = uVar42 - 0x100;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar42) {
          case 0x100:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x101:
          case 0x102:
          case 0x103:
          case 0x104:
          case 0x105:
          case 0x106:
          case 0x107:
          case 0x108:
          case 0x109:
          case 0x10a:
          case 0x10b:
          case 0x10c:
          case 0x10d:
          case 0x10e:
          case 0x10f:
          case 0x110:
          case 0x111:
          case 0x112:
          case 0x113:
          case 0x114:
          case 0x115:
          case 0x116:
          case 0x117:
          case 0x118:
          case 0x119:
          case 0x11a:
          case 0x11b:
          case 0x11c:
          case 0x11d:
          case 0x11e:
          case 0x11f:
          case 0x120:
            uVar26 = (uint)pauVar29 ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x54479b00);
            cVar24 = (char)((ulonglong)pauVar34 >> 8);
            uVar27 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x54488c00);
            *(char *)(unaff_RBP + -0x1fff577) = *(char *)(unaff_RBP + -0x1fff577) + cVar24;
            uVar38 = (undefined6)((ulonglong)pauVar34 >> 0x10);
            cVar33 = (char)pauVar34;
            cVar35 = cVar24 + unaff_BL;
            uVar27 = CONCAT31((int3)(uVar26 >> 8),(char)uVar26 + (char)param_1) ^ uVar27 ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x5448b500) ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x54494200);
            pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x49);
            *pcVar1 = *pcVar1 + (char)(uVar27 >> 8);
            uVar27 = uVar27 ^ *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                                       0x54496b00);
            pcVar1 = (char *)((ulonglong)uVar27 * 3 + 0x33f00054);
            *pcVar1 = *pcVar1 + cVar33;
            uVar10 = *(undefined4 *)
                      CONCAT71((int7)((ulonglong)param_1 >> 8),
                               (char)param_1 + cVar24 + cVar35 * '\x02');
            pcVar9 = unaff_RSI + 1;
            bVar36 = cVar35 + unaff_BH;
            lVar43 = CONCAT62(uVar38,CONCAT11(bVar36,cVar33));
            cVar24 = *unaff_RSI + cVar35 + bVar36;
            uVar27 = CONCAT22((short)(uVar27 >> 0x10),
                              CONCAT11((char)(uVar27 >> 8) + cVar33,(char)uVar27)) ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x5449d500) ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x544a5600);
            pcVar1 = (char *)(lVar43 + 0x33f00054 + (ulonglong)uVar27 * 2);
            *pcVar1 = *pcVar1 + cVar24;
            uVar10 = *(undefined4 *)(ulonglong)CONCAT31((int3)((uint)uVar10 >> 8),cVar24);
            pcVar1 = (char *)(lVar43 + -0xfffabb6);
            *pcVar1 = *pcVar1 + bVar36;
            uVar27 = uVar27 ^ *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                                       0x544ad600);
            pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                             (ulonglong)uVar27 * 2);
            cVar24 = (char)uVar10;
            *pcVar1 = *pcVar1 + cVar24;
            cVar24 = cVar24 + bVar36;
            cVar33 = cVar33 + cVar24;
            uVar26 = uVar27 ^ *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                                       0x544b9c00) ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x544d4000);
            *(char *)((ulonglong)uVar26 + 0x4d) =
                 *(char *)((ulonglong)uVar26 + 0x4d) + (char)(uVar26 >> 8);
            uVar27 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x544d7000);
            unaff_RSI[-0xfffabb2] = unaff_RSI[-0xfffabb2] + cVar33;
            uVar26 = uVar26 ^ uVar27 ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x544edc00);
            *(char *)(ulonglong)uVar26 = *(char *)(ulonglong)uVar26 + (char)uVar26;
            uVar27 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x544f5800);
            pbVar2 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x2c00544f);
            bVar25 = *pbVar2;
            *pbVar2 = *pbVar2 + bVar36;
            uVar41 = *unaff_RBP;
            uVar10 = *(undefined4 *)
                      (ulonglong)CONCAT31((int3)((uint)uVar10 >> 8),cVar24 + bVar36 * '\x03');
            pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x54);
            *pcVar1 = *pcVar1 + CARRY1(bVar25,bVar36);
            uVar26 = uVar26 ^ uVar27 ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x5453a900);
            bVar40 = unaff_BH + (char)uVar26;
            *unaff_RBP = CONCAT62(unaff_0000001a,CONCAT11(bVar40,unaff_BL));
            unaff_RBP[-1] = unaff_RBP;
            uVar27 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,unaff_BL)) + 0x5453cf00);
            cVar24 = (char)uVar10 + bVar36 * '\x03' + bVar40;
            unaff_RBP[-2] = CONCAT62(unaff_0000001a,CONCAT11(bVar40,unaff_BL));
            unaff_RBP[-3] = unaff_RBP + -2;
            uVar28 = uVar26 ^ uVar27 ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,unaff_BL)) + 0x5453f800);
            *(char *)(ulonglong)uVar28 = *(char *)(ulonglong)uVar28 + (char)((uint)uVar10 >> 8);
            unaff_RBP[-4] = unaff_RBP + -3;
            unaff_RBP[-5] = unaff_RBP + -4;
            uVar27 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,unaff_BL)) + 0x5454a000);
            cVar37 = bVar36 + cVar24;
            unaff_RBP[-6] = unaff_RBP + -5;
            unaff_RBP[-7] = unaff_RBP + -6;
            uVar26 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,unaff_BL)) + 0x5454de00);
            pcVar1 = (char *)(CONCAT62(uVar38,CONCAT11(cVar37,cVar33)) * 2 + 0x33f00054);
            *pcVar1 = *pcVar1 + cVar24 + cVar37;
            unaff_RBP[-8] = uVar41;
            unaff_RBP[-9] = unaff_RBP + -8;
            cVar35 = cVar37 * '\x05' + 'U';
            uVar26 = uVar28 ^ uVar27 ^ uVar26 ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,unaff_BL)) + 0x5456ac00);
            unaff_RBP[-10] = pcVar9;
            unaff_RBP[-0xb] = unaff_RBP + -10;
            uVar27 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,unaff_BL)) + 0x5456d500);
            cVar39 = unaff_BL + bVar40;
            unaff_RBP[-0xc] = pcVar9;
            unaff_RBP[-0xd] = unaff_RBP + -0xc;
            uVar28 = CONCAT22((short)(uVar26 >> 0x10),
                              CONCAT11((char)(uVar26 >> 8) + cVar33,(char)uVar26)) ^ uVar27 ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,cVar39)) + 0x54593000);
            pcVar1 = (char *)((ulonglong)uVar28 + 0x59);
            *pcVar1 = *pcVar1 + cVar39;
            unaff_RBP[-0xe] = unaff_RBP + -0xd;
            uVar27 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,cVar39)) + 0x545b3000);
            unaff_RSI[0x5c] = unaff_RSI[0x5c] + cVar33;
            unaff_RBP[-0xf] = unaff_RBP + -0xe;
            uVar26 = *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,cVar39)) + 0x545be000);
            *pcVar9 = *pcVar9 + cVar35;
            lVar43 = unaff_RBP[-0xf];
            *(longlong *)(lVar43 + -8) = lVar43;
            cVar35 = cVar35 + cVar37;
            uVar27 = uVar28 ^ uVar27 ^ uVar26 ^
                     *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(bVar40,cVar39)) + 0x545e7000);
            bVar32 = (byte)(uVar27 >> 8);
            *(longlong *)(lVar43 + -8) = lVar43;
            bVar36 = (byte)uVar27;
            bVar25 = bVar36 + 0x54;
            cVar24 = *(char *)(CONCAT62(0xe100,CONCAT11(bVar25,cVar35)) * 2 + 0x545ef7);
            *(longlong *)(lVar43 + -8) = lVar43;
            *(int *)((ulonglong)
                     CONCAT31((int3)(uVar27 >> 8),
                              (((bVar36 - cVar24) - (0xab < bVar36)) -
                              *(char *)(CONCAT62(0xe100,CONCAT11(bVar25 + bVar40,cVar35)) * 2 +
                                       0x546160)) - CARRY1(bVar25,bVar40)) + 0x54) =
                 (int)lVar43 + -8;
            *(char *)(unaff_RDI + -0xfffab9f) =
                 *(char *)(unaff_RDI + -0xfffab9f) +
                 (bVar32 ^ (byte)((uint)*(undefined4 *)
                                         (CONCAT62(unaff_0000001a,CONCAT11(bVar40,cVar39 + bVar32))
                                         + 0x54618900) >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        } while( true );
      }
      do {
        uVar11 = *(undefined8 *)(*pauVar34 + 8);
        uVar12 = *(undefined8 *)(*pauVar34 + 0x10);
        uVar13 = *(undefined8 *)(*pauVar34 + 0x18);
        uVar45 = *(undefined8 *)pauVar34[1];
        uVar46 = *(undefined8 *)(pauVar34[1] + 8);
        uVar14 = *(undefined8 *)(pauVar34[1] + 0x10);
        uVar15 = *(undefined8 *)(pauVar34[1] + 0x18);
        uVar16 = *(undefined8 *)pauVar34[2];
        uVar17 = *(undefined8 *)(pauVar34[2] + 8);
        uVar18 = *(undefined8 *)(pauVar34[2] + 0x10);
        uVar19 = *(undefined8 *)(pauVar34[2] + 0x18);
        uVar20 = *(undefined8 *)pauVar34[3];
        uVar21 = *(undefined8 *)(pauVar34[3] + 8);
        uVar22 = *(undefined8 *)(pauVar34[3] + 0x10);
        uVar23 = *(undefined8 *)(pauVar34[3] + 0x18);
        *(undefined8 *)*pauVar29 = *(undefined8 *)*pauVar34;
        *(undefined8 *)(*pauVar29 + 8) = uVar11;
        *(undefined8 *)(*pauVar29 + 0x10) = uVar12;
        *(undefined8 *)(*pauVar29 + 0x18) = uVar13;
        *(undefined8 *)pauVar29[1] = uVar45;
        *(undefined8 *)(pauVar29[1] + 8) = uVar46;
        *(undefined8 *)(pauVar29[1] + 0x10) = uVar14;
        *(undefined8 *)(pauVar29[1] + 0x18) = uVar15;
        *(undefined8 *)pauVar29[2] = uVar16;
        *(undefined8 *)(pauVar29[2] + 8) = uVar17;
        *(undefined8 *)(pauVar29[2] + 0x10) = uVar18;
        *(undefined8 *)(pauVar29[2] + 0x18) = uVar19;
        *(undefined8 *)pauVar29[3] = uVar20;
        *(undefined8 *)(pauVar29[3] + 8) = uVar21;
        *(undefined8 *)(pauVar29[3] + 0x10) = uVar22;
        *(undefined8 *)(pauVar29[3] + 0x18) = uVar23;
        uVar11 = *(undefined8 *)(pauVar34[4] + 8);
        uVar12 = *(undefined8 *)(pauVar34[4] + 0x10);
        uVar13 = *(undefined8 *)(pauVar34[4] + 0x18);
        uVar45 = *(undefined8 *)pauVar34[5];
        uVar46 = *(undefined8 *)(pauVar34[5] + 8);
        uVar14 = *(undefined8 *)(pauVar34[5] + 0x10);
        uVar15 = *(undefined8 *)(pauVar34[5] + 0x18);
        uVar16 = *(undefined8 *)pauVar34[6];
        uVar17 = *(undefined8 *)(pauVar34[6] + 8);
        uVar18 = *(undefined8 *)(pauVar34[6] + 0x10);
        uVar19 = *(undefined8 *)(pauVar34[6] + 0x18);
        uVar20 = *(undefined8 *)pauVar34[7];
        uVar21 = *(undefined8 *)(pauVar34[7] + 8);
        uVar22 = *(undefined8 *)(pauVar34[7] + 0x10);
        uVar23 = *(undefined8 *)(pauVar34[7] + 0x18);
        *(undefined8 *)pauVar29[4] = *(undefined8 *)pauVar34[4];
        *(undefined8 *)(pauVar29[4] + 8) = uVar11;
        *(undefined8 *)(pauVar29[4] + 0x10) = uVar12;
        *(undefined8 *)(pauVar29[4] + 0x18) = uVar13;
        *(undefined8 *)pauVar29[5] = uVar45;
        *(undefined8 *)(pauVar29[5] + 8) = uVar46;
        *(undefined8 *)(pauVar29[5] + 0x10) = uVar14;
        *(undefined8 *)(pauVar29[5] + 0x18) = uVar15;
        *(undefined8 *)pauVar29[6] = uVar16;
        *(undefined8 *)(pauVar29[6] + 8) = uVar17;
        *(undefined8 *)(pauVar29[6] + 0x10) = uVar18;
        *(undefined8 *)(pauVar29[6] + 0x18) = uVar19;
        *(undefined8 *)pauVar29[7] = uVar20;
        *(undefined8 *)(pauVar29[7] + 8) = uVar21;
        *(undefined8 *)(pauVar29[7] + 0x10) = uVar22;
        *(undefined8 *)(pauVar29[7] + 0x18) = uVar23;
        pauVar29 = pauVar29 + 8;
        pauVar34 = pauVar34 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000181260c72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)&DAT_181253350 +
            (ulonglong)*(uint *)(&DAT_181269e00 + (param_3 + 0x1f >> 5) * 4)))(uVar41);
  return;
}



/* ===== 181261130 FUN_181261130 ===== */
/* DECOMPILATION FAILED: Low-level Error: Bad instruction count exceeded:
    ...
    No pcode could be generated at address: r0x000181283aa0 */

/* ===== 1812614f0 FUN_1812614f0 ===== */

void FUN_1812614f0(undefined8 param_1,longlong param_2)

{
  FUN_181255310(*(undefined1 *)(param_2 + 0x20));
  return;
}



/* ===== 18126150a FUN_18126150a ===== */

void FUN_18126150a(void)

{
  FUN_181255210();
  return;
}



/* ===== 181261520 FUN_181261520 ===== */

void FUN_181261520(undefined8 *param_1,longlong param_2)

{
  FUN_181255180(*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x68),
                *(undefined8 *)(param_2 + 0x70),FUN_181254b60,*(undefined4 *)*param_1,param_1);
  return;
}



/* ===== 181261560 FUN_181261560 ===== */

bool FUN_181261560(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



/* ===== 1812616d0 FUN_1812616d0 ===== */

void FUN_1812616d0(undefined8 param_1,longlong param_2)

{
  FUN_181257a40(param_1,*(undefined8 *)(param_2 + 0xd8),param_2 + 0x20);
  return;
}



/* ===== 181261780 FUN_181261780 ===== */

void FUN_181261780(void)

{
  FUN_181255b20();
  return;
}



/* ===== 181261796 FUN_181261796 ===== */

void FUN_181261796(void)

{
  longlong lVar1;
  
  lVar1 = FUN_181255cd0();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_181255cd0();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}



/* ===== 1812617b9 FUN_1812617b9 ===== */

void FUN_1812617b9(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x48));
  return;
}



/* ===== 1812617d3 FUN_1812617d3 ===== */

undefined4 FUN_1812617d3(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}



/* ===== 181261800 FUN_181261800 ===== */

void FUN_181261800(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x68));
  return;
}



/* ===== 18126181a FUN_18126181a ===== */

void FUN_18126181a(void)

{
  __acrt_unlock(5);
  return;
}



/* ===== 181261833 FUN_181261833 ===== */

void FUN_181261833(void)

{
  __acrt_unlock(7);
  return;
}



/* ===== 181261850 FUN_181261850 ===== */

void FUN_181261850(void)

{
  __acrt_unlock(0);
  return;
}



/* ===== 181261866 FUN_181261866 ===== */

void FUN_181261866(void)

{
  __acrt_unlock(0);
  return;
}



/* ===== 18126187c FUN_18126187c ===== */

void FUN_18126187c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}



/* ===== 18126189d FUN_18126189d ===== */

void FUN_18126189d(undefined8 param_1,longlong param_2)

{
  FUN_18125cba8(**(undefined8 **)(param_2 + 0x48));
  return;
}



/* ===== 1812618b8 FUN_1812618b8 ===== */

void FUN_1812618b8(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x98));
  return;
}



/* ===== 1812618d5 FUN_1812618d5 ===== */

void FUN_1812618d5(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x58));
  return;
}



/* ===== 1812618ef FUN_1812618ef ===== */

void FUN_1812618ef(void)

{
  __acrt_unlock(4);
  return;
}



/* ===== 181261908 FUN_181261908 ===== */

void FUN_181261908(undefined8 param_1,longlong param_2)

{
  FUN_18125ea44(**(undefined4 **)(param_2 + 0x48));
  return;
}



/* ===== 181261922 FUN_181261922 ===== */

void FUN_181261922(undefined8 param_1,longlong param_2)

{
  FUN_18125ea44(*(undefined4 *)(param_2 + 0x60));
  return;
}



/* ===== 181261939 FUN_181261939 ===== */

void FUN_181261939(void)

{
  __acrt_unlock(8);
  return;
}



/* ===== 181261952 FUN_181261952 ===== */

void FUN_181261952(undefined8 param_1,longlong param_2)

{
  FUN_18125cba8(*(undefined8 *)(param_2 + 0x40));
  return;
}



/* ===== 181261970 FUN_181261970 ===== */

bool FUN_181261970(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



/* END: 10338 functions; 10336 succeeded; 2 failed. */
