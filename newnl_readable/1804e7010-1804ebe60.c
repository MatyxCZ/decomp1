/* ===== 1804e7010 FUN_1804e7010 ===== */

undefined1 (*) [32]
FUN_1804e7010(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  uint uVar19;
  undefined1 (*pauVar20) [32];
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  
  uVar21 = (longlong)param_2 - (longlong)param_1;
  pauVar20 = param_2;
  if (((uVar21 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar21 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      auVar24 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        pauVar3 = pauVar20 + -1;
        pauVar4 = pauVar20 + -1;
        pauVar5 = pauVar20 + -1;
        pauVar6 = pauVar20 + -1;
        pauVar7 = pauVar20 + -1;
        pauVar8 = pauVar20 + -1;
        pauVar9 = pauVar20 + -1;
        pauVar10 = pauVar20 + -1;
        pauVar11 = pauVar20 + -1;
        pauVar12 = pauVar20 + -1;
        pauVar13 = pauVar20 + -1;
        pauVar14 = pauVar20 + -1;
        pauVar15 = pauVar20 + -1;
        pauVar16 = pauVar20 + -1;
        pauVar17 = pauVar20 + -1;
        pauVar18 = pauVar20 + -1;
        pauVar20 = (undefined1 (*) [32])(pauVar20[-1] + 0x10);
        auVar23[0] = -((*pauVar3)[0x10] == auVar24[0]);
        auVar23[1] = -((*pauVar4)[0x11] == auVar24[1]);
        auVar23[2] = -((*pauVar5)[0x12] == auVar24[2]);
        auVar23[3] = -((*pauVar6)[0x13] == auVar24[3]);
        auVar23[4] = -((*pauVar7)[0x14] == auVar24[4]);
        auVar23[5] = -((*pauVar8)[0x15] == auVar24[5]);
        auVar23[6] = -((*pauVar9)[0x16] == auVar24[6]);
        auVar23[7] = -((*pauVar10)[0x17] == auVar24[7]);
        auVar23[8] = -((*pauVar11)[0x18] == auVar24[8]);
        auVar23[9] = -((*pauVar12)[0x19] == auVar24[9]);
        auVar23[10] = -((*pauVar13)[0x1a] == auVar24[10]);
        auVar23[0xb] = -((*pauVar14)[0x1b] == auVar24[0xb]);
        auVar23[0xc] = -((*pauVar15)[0x1c] == auVar24[0xc]);
        auVar23[0xd] = -((*pauVar16)[0x1d] == auVar24[0xd]);
        auVar23[0xe] = -((*pauVar17)[0x1e] == auVar24[0xe]);
        auVar23[0xf] = -((*pauVar18)[0x1f] == auVar24[0xf]);
        uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar19 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar19 == 0; uVar19 = uVar19 - 1) {
            }
          }
          return (undefined1 (*) [32])(*pauVar20 + uVar19);
        }
      } while (pauVar20 != (undefined1 (*) [32])((longlong)param_2 - (uVar21 & 0xfffffffffffffff0)))
      ;
    }
  }
  else {
    auVar24 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar25._16_16_ = auVar24;
    auVar25._0_16_ = auVar24;
    do {
      auVar2 = vpcmpeqb_avx2(auVar25,pauVar20[-1]);
      pauVar20 = pauVar20 + -1;
      uVar19 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar19 != 0) goto LAB_1804e70c9;
    } while (pauVar20 != (undefined1 (*) [32])((longlong)param_2 - (uVar21 & 0xffffffffffffffe0)));
    uVar22 = (ulonglong)((uint)uVar21 & 0x1c);
    if ((uVar21 & 0x1c) != 0) {
      pauVar20 = (undefined1 (*) [32])((longlong)pauVar20 - uVar22);
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar22),*pauVar20);
      auVar25 = vpcmpeqb_avx2(auVar2,auVar25);
      auVar25 = vpand_avx2(auVar25,*(undefined1 (*) [32])(&DAT_180574630 + -uVar22));
      uVar19 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      if (uVar19 != 0) {
LAB_1804e70c9:
        return (undefined1 (*) [32])(*pauVar20 + (0x1f - LZCOUNT(uVar19)));
      }
    }
  }
  do {
    if (pauVar20 == param_1) {
      return param_2;
    }
    pauVar20 = (undefined1 (*) [32])(pauVar20[-1] + 0x1f);
  } while ((*pauVar20)[0] != param_3);
  return pauVar20;
}



/* ===== 1804e7130 FUN_1804e7130 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_1804e7130(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar17;
  undefined1 auVar16 [16];
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_98;
  puVar5 = *param_1 + param_2;
  uVar8 = (uint)param_2 & 0xf;
  uVar9 = (ulonglong)uVar8;
  puVar1 = *param_1 + uVar9;
  uVar7 = (uint)param_4;
  if (param_4 < 0x11) {
    FUN_180540530(local_78,param_3,param_4);
    auVar15 = local_78;
    do {
      if (puVar5 == puVar1) {
        if (uVar9 != 0) {
          uVar11 = param_2 < 0x10;
          if ((bool)uVar11) {
            FUN_180540530(local_78,param_1,param_2);
          }
          else {
            local_78 = *param_1;
          }
          iVar3 = pcmpestri(auVar15,local_78,0x70,uVar7,uVar8);
          if ((bool)uVar11) {
            return (undefined1 *)(longlong)iVar3;
          }
        }
        goto LAB_1804e7345;
      }
      pauVar6 = (undefined1 (*) [16])(puVar5 + -0x10);
      bVar10 = (undefined1 *)0xf < puVar5;
      puVar5 = puVar5 + -0x10;
      iVar3 = pcmpestri(local_78,*pauVar6,0x70,uVar7,0x10);
    } while (bVar10);
    puVar5 = puVar5 + ((longlong)iVar3 - (longlong)param_1);
  }
  else {
    uVar7 = uVar7 & 0xf;
    pauVar6 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_180540530(local_78,pauVar6,uVar7);
    auVar15 = local_78;
    if (puVar5 != puVar1) {
      do {
        auVar14 = *(undefined1 (*) [16])(puVar5 + -0x10);
        puVar5 = puVar5 + -0x10;
        auVar12 = pcmpestrm(*param_3,auVar14,0x30,0x10,0x10);
        pauVar4 = param_3;
        while( true ) {
          uVar2 = auVar12._8_4_;
          uVar17 = auVar12._12_4_;
          if (pauVar4 == pauVar6) break;
          auVar13 = *pauVar4;
          pauVar4 = pauVar4 + 1;
          auVar13 = pcmpestrm(auVar13,auVar14,0x30,0x10,0x10);
          auVar16._0_4_ = auVar12._0_4_ & auVar13._0_4_;
          auVar16._4_4_ = auVar12._4_4_ & auVar13._4_4_;
          auVar16._8_4_ = uVar2 & auVar13._8_4_;
          auVar16._12_4_ = uVar17 & auVar13._12_4_;
          auVar12 = auVar16;
        }
        if ((param_4 & 0xf) != 0) {
          auVar14 = pcmpestrm(local_78,auVar14,0x30,uVar7,0x10);
          auVar12._0_4_ = auVar12._0_4_ & auVar14._0_4_;
          auVar12._4_4_ = 0;
          auVar12._8_4_ = uVar2 & auVar14._8_4_;
          auVar12._12_4_ = uVar17 & auVar14._12_4_;
        }
        uVar2 = auVar12._0_4_;
        if (uVar2 != 0) {
          iVar3 = 0x1f;
          if (uVar2 != 0) {
            for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
          if (iVar3 != -1) {
            return puVar5 + ((longlong)iVar3 - (longlong)param_1);
          }
        }
      } while (puVar5 != puVar1);
    }
    if (uVar9 == 0) {
LAB_1804e7345:
      puVar5 = (undefined1 *)0xffffffffffffffff;
    }
    else {
      if (param_2 < 0x10) {
        FUN_180540530(local_78,param_1,param_2);
      }
      else {
        local_78 = *param_1;
      }
      auVar14 = pcmpestrm(*param_3,local_78,0x30,0x10,uVar8);
      while( true ) {
        uVar2 = auVar14._8_4_;
        uVar17 = auVar14._12_4_;
        if (param_3 == pauVar6) break;
        auVar12 = *param_3;
        param_3 = param_3 + 1;
        auVar12 = pcmpestrm(auVar12,local_78,0x30,0x10,uVar8);
        auVar13._0_4_ = auVar14._0_4_ & auVar12._0_4_;
        auVar13._4_4_ = auVar14._4_4_ & auVar12._4_4_;
        auVar13._8_4_ = uVar2 & auVar12._8_4_;
        auVar13._12_4_ = uVar17 & auVar12._12_4_;
        auVar14 = auVar13;
      }
      if ((param_4 & 0xf) != 0) {
        auVar15 = pcmpestrm(auVar15,local_78,0x30,uVar7,uVar8);
        auVar14._0_4_ = auVar14._0_4_ & auVar15._0_4_;
        auVar14._4_4_ = 0;
        auVar14._8_4_ = uVar2 & auVar15._8_4_;
        auVar14._12_4_ = uVar17 & auVar15._12_4_;
      }
      uVar7 = auVar14._0_4_;
      iVar3 = -1;
      if ((uVar7 != 0) && (iVar3 = 0x1f, uVar7 != 0)) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      puVar5 = (undefined1 *)(longlong)iVar3;
    }
  }
  return puVar5;
}



/* ===== 1804e7370 FUN_1804e7370 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001804e74d7) */
/* WARNING: Removing unreachable block (ram,0x0001804e74da) */
/* WARNING: Removing unreachable block (ram,0x0001804e7553) */
/* WARNING: Removing unreachable block (ram,0x0001804e7555) */

undefined1 *
FUN_1804e7370(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar10 = (uint)param_2 & 0xf;
  uVar11 = (ulonglong)uVar10;
  puVar6 = *param_1 + param_2;
  iVar3 = -1;
  uVar7 = (uint)param_4;
  local_88 = param_2;
  if (param_4 < 0x11) {
    FUN_180540530(&local_88,param_3,param_4);
    auVar2._8_8_ = uStack_80;
    auVar2._0_8_ = local_88;
    do {
      if (puVar6 == *param_1 + uVar11) {
        if (uVar11 != 0) {
          uVar13 = param_2 < 0x10;
          if ((bool)uVar13) {
            FUN_180540530(&local_88,param_1,param_2);
            auVar14._8_8_ = uStack_80;
            auVar14._0_8_ = local_88;
          }
          else {
            auVar14 = *param_1;
          }
          iVar3 = pcmpestri(auVar2,auVar14,0x40,uVar7,uVar10);
          if ((bool)uVar13) {
            return (undefined1 *)(longlong)iVar3;
          }
        }
        return (undefined1 *)0xffffffffffffffff;
      }
      pauVar9 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar12 = (undefined1 *)0xf < puVar6;
      puVar6 = puVar6 + -0x10;
      iVar3 = pcmpestri(auVar2,*pauVar9,0x40,uVar7,0x10);
    } while (bVar12);
    puVar6 = puVar6 + ((longlong)iVar3 - (longlong)param_1);
  }
  else {
    uVar7 = uVar7 & 0xf;
    pauVar9 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_180540530(local_78,pauVar9,uVar7);
    auVar2 = local_78;
    do {
      if (puVar6 == *param_1 + uVar11) {
        if (uVar11 == 0) {
          return (undefined1 *)0xffffffffffffffff;
        }
        uVar13 = local_88 < 0x10;
        if ((bool)uVar13) {
          FUN_180540530(local_78,param_1);
        }
        else {
          local_78 = *param_1;
        }
        do {
          iVar5 = pcmpestri(*param_3,local_78,0x40,0x10,uVar10);
          if (((bool)uVar13) && (iVar3 < iVar5)) {
            iVar3 = iVar5;
          }
          param_3 = param_3 + 1;
          uVar13 = param_3 < pauVar9;
        } while (param_3 != pauVar9);
        if ((param_4 & 0xf) != 0) {
          pcmpestri(auVar2,local_78,0x40,uVar7,uVar10);
        }
        return (undefined1 *)(longlong)iVar3;
      }
      pauVar1 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar12 = puVar6 < (undefined1 *)0x10;
      puVar6 = puVar6 + -0x10;
      iVar5 = -1;
      pauVar8 = param_3;
      do {
        iVar4 = pcmpestri(*pauVar8,*pauVar1,0x40,0x10,0x10);
        if ((bVar12) && (iVar5 < iVar4)) {
          iVar5 = iVar4;
        }
        pauVar8 = pauVar8 + 1;
        bVar12 = pauVar8 < pauVar9;
      } while (pauVar8 != pauVar9);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_78,*pauVar1,0x40,uVar7,0x10);
      }
    } while (iVar5 == -1);
    puVar6 = puVar6 + ((longlong)iVar5 - (longlong)param_1);
  }
  return puVar6;
}



/* ===== 1804e7590 FUN_1804e7590 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1804e7590(longlong param_1,ulonglong param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [32];
  ulonglong local_180 [4];
  undefined1 local_160 [4] [32];
  undefined1 local_e0 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  pbVar1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    local_1a0 = auVar11._0_32_;
    if (param_3 != pbVar1) {
      do {
        bVar4 = *param_3;
        param_3 = param_3 + 1;
        auVar9._1_3_ = 0;
        auVar9[0] = bVar4;
        auVar9[4] = bVar4;
        auVar9._5_3_ = 0;
        auVar9[8] = bVar4;
        auVar9._9_3_ = 0;
        auVar9[0xc] = bVar4;
        auVar9._13_3_ = 0;
        auVar9[0x10] = bVar4;
        auVar9._17_3_ = 0;
        auVar9[0x14] = bVar4;
        auVar9._21_3_ = 0;
        auVar9[0x18] = bVar4;
        auVar9._25_3_ = 0;
        auVar9[0x1c] = bVar4;
        auVar9._29_3_ = 0;
        auVar9 = vpsllvd_avx2(_DAT_180574720,auVar9 ^ _DAT_180574760);
        local_1a0 = vpor_avx2(auVar9,auVar11._0_32_);
        auVar11 = ZEXT3264(local_1a0);
      } while (param_3 != pbVar1);
    }
  }
  else {
    FUN_180540170(local_160,0,0x100);
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_160[0][*param_3] = 0xff;
    }
    local_1a0 = ZEXT2032(CONCAT416((uint)(SUB321(local_e0 >> 7,0) & 1) |
                                   (uint)(SUB321(local_e0 >> 0xf,0) & 1) << 1 |
                                   (uint)(SUB321(local_e0 >> 0x17,0) & 1) << 2 |
                                   (uint)(SUB321(local_e0 >> 0x1f,0) & 1) << 3 |
                                   (uint)(SUB321(local_e0 >> 0x27,0) & 1) << 4 |
                                   (uint)(SUB321(local_e0 >> 0x2f,0) & 1) << 5 |
                                   (uint)(SUB321(local_e0 >> 0x37,0) & 1) << 6 |
                                   (uint)(SUB321(local_e0 >> 0x3f,0) & 1) << 7 |
                                   (uint)(SUB321(local_e0 >> 0x47,0) & 1) << 8 |
                                   (uint)(SUB321(local_e0 >> 0x4f,0) & 1) << 9 |
                                   (uint)(SUB321(local_e0 >> 0x57,0) & 1) << 10 |
                                   (uint)(SUB321(local_e0 >> 0x5f,0) & 1) << 0xb |
                                   (uint)(SUB321(local_e0 >> 0x67,0) & 1) << 0xc |
                                   (uint)(SUB321(local_e0 >> 0x6f,0) & 1) << 0xd |
                                   (uint)(SUB321(local_e0 >> 0x77,0) & 1) << 0xe |
                                   (uint)SUB321(local_e0 >> 0x7f,0) << 0xf |
                                   (uint)(SUB321(local_e0 >> 0x87,0) & 1) << 0x10 |
                                   (uint)(SUB321(local_e0 >> 0x8f,0) & 1) << 0x11 |
                                   (uint)(SUB321(local_e0 >> 0x97,0) & 1) << 0x12 |
                                   (uint)(SUB321(local_e0 >> 0x9f,0) & 1) << 0x13 |
                                   (uint)(SUB321(local_e0 >> 0xa7,0) & 1) << 0x14 |
                                   (uint)(SUB321(local_e0 >> 0xaf,0) & 1) << 0x15 |
                                   (uint)(SUB321(local_e0 >> 0xb7,0) & 1) << 0x16 |
                                   (uint)SUB321(local_e0 >> 0xbf,0) << 0x17 |
                                   (uint)(SUB321(local_e0 >> 199,0) & 1) << 0x18 |
                                   (uint)(SUB321(local_e0 >> 0xcf,0) & 1) << 0x19 |
                                   (uint)(SUB321(local_e0 >> 0xd7,0) & 1) << 0x1a |
                                   (uint)(SUB321(local_e0 >> 0xdf,0) & 1) << 0x1b |
                                   (uint)(SUB321(local_e0 >> 0xe7,0) & 1) << 0x1c |
                                   (uint)(SUB321(local_e0 >> 0xef,0) & 1) << 0x1d |
                                   (uint)(SUB321(local_e0 >> 0xf7,0) & 1) << 0x1e |
                                   (uint)(byte)(local_e0[0x1f] >> 7) << 0x1f,
                                   ZEXT416((uint)(SUB321(local_160[0] >> 7,0) & 1) |
                                           (uint)(SUB321(local_160[0] >> 0xf,0) & 1) << 1 |
                                           (uint)(SUB321(local_160[0] >> 0x17,0) & 1) << 2 |
                                           (uint)(SUB321(local_160[0] >> 0x1f,0) & 1) << 3 |
                                           (uint)(SUB321(local_160[0] >> 0x27,0) & 1) << 4 |
                                           (uint)(SUB321(local_160[0] >> 0x2f,0) & 1) << 5 |
                                           (uint)(SUB321(local_160[0] >> 0x37,0) & 1) << 6 |
                                           (uint)(SUB321(local_160[0] >> 0x3f,0) & 1) << 7 |
                                           (uint)(SUB321(local_160[0] >> 0x47,0) & 1) << 8 |
                                           (uint)(SUB321(local_160[0] >> 0x4f,0) & 1) << 9 |
                                           (uint)(SUB321(local_160[0] >> 0x57,0) & 1) << 10 |
                                           (uint)(SUB321(local_160[0] >> 0x5f,0) & 1) << 0xb |
                                           (uint)(SUB321(local_160[0] >> 0x67,0) & 1) << 0xc |
                                           (uint)(SUB321(local_160[0] >> 0x6f,0) & 1) << 0xd |
                                           (uint)(SUB321(local_160[0] >> 0x77,0) & 1) << 0xe |
                                           (uint)SUB321(local_160[0] >> 0x7f,0) << 0xf |
                                           (uint)(SUB321(local_160[0] >> 0x87,0) & 1) << 0x10 |
                                           (uint)(SUB321(local_160[0] >> 0x8f,0) & 1) << 0x11 |
                                           (uint)(SUB321(local_160[0] >> 0x97,0) & 1) << 0x12 |
                                           (uint)(SUB321(local_160[0] >> 0x9f,0) & 1) << 0x13 |
                                           (uint)(SUB321(local_160[0] >> 0xa7,0) & 1) << 0x14 |
                                           (uint)(SUB321(local_160[0] >> 0xaf,0) & 1) << 0x15 |
                                           (uint)(SUB321(local_160[0] >> 0xb7,0) & 1) << 0x16 |
                                           (uint)SUB321(local_160[0] >> 0xbf,0) << 0x17 |
                                           (uint)(SUB321(local_160[0] >> 199,0) & 1) << 0x18 |
                                           (uint)(SUB321(local_160[0] >> 0xcf,0) & 1) << 0x19 |
                                           (uint)(SUB321(local_160[0] >> 0xd7,0) & 1) << 0x1a |
                                           (uint)(SUB321(local_160[0] >> 0xdf,0) & 1) << 0x1b |
                                           (uint)(SUB321(local_160[0] >> 0xe7,0) & 1) << 0x1c |
                                           (uint)(SUB321(local_160[0] >> 0xef,0) & 1) << 0x1d |
                                           (uint)(SUB321(local_160[0] >> 0xf7,0) & 1) << 0x1e |
                                           (uint)(byte)(local_160[0][0x1f] >> 7) << 0x1f)));
  }
  uVar6 = 0;
  uVar8 = param_2 & 0xfffffffffffffff8;
  if (uVar8 != 0) {
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(param_1 + uVar6);
      auVar9 = vpmovzxbd_avx2(auVar2);
      auVar10 = vpsrld_avx2(auVar9,5);
      auVar10 = vpermd_avx2(auVar10,local_1a0);
      auVar9 = vpandn_avx2(auVar9,_DAT_180574740);
      auVar9 = vpsllvd_avx2(auVar10,auVar9);
      uVar5 = vmovmskps_avx(auVar9);
      uVar5 = uVar5 ^ 0xff;
      if (uVar5 != 0) {
        uVar7 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        return uVar7 + uVar6;
      }
      uVar6 = uVar6 + 8;
    } while (uVar6 != uVar8);
  }
  uVar5 = (uint)param_2 & 7;
  if ((param_2 & 7) != 0) {
    FUN_180540530(local_180,param_1 + uVar8,uVar5);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_180[0];
    auVar10 = vpmovzxbd_avx2(auVar3);
    auVar9 = vpandn_avx2(auVar10,_DAT_180574740);
    auVar10 = vpsrld_avx2(auVar10,5);
    auVar10 = vpermd_avx2(auVar10,local_1a0);
    auVar9 = vpsllvd_avx2(auVar10,auVar9);
    uVar7 = vmovmskps_avx(auVar9);
    uVar5 = ~uVar7 & (1 << (sbyte)uVar5) - 1U;
    if (uVar5 != 0) {
      uVar7 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      return uVar7 + uVar8;
    }
  }
  return -1;
}



/* ===== 1804e77c0 FUN_1804e77c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1804e77c0(longlong param_1,ulonglong param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [32];
  ulonglong local_180 [4];
  undefined1 local_160 [4] [32];
  undefined1 local_e0 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  pbVar1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    local_1a0 = auVar11._0_32_;
    if (param_3 != pbVar1) {
      do {
        bVar4 = *param_3;
        param_3 = param_3 + 1;
        auVar9._1_3_ = 0;
        auVar9[0] = bVar4;
        auVar9[4] = bVar4;
        auVar9._5_3_ = 0;
        auVar9[8] = bVar4;
        auVar9._9_3_ = 0;
        auVar9[0xc] = bVar4;
        auVar9._13_3_ = 0;
        auVar9[0x10] = bVar4;
        auVar9._17_3_ = 0;
        auVar9[0x14] = bVar4;
        auVar9._21_3_ = 0;
        auVar9[0x18] = bVar4;
        auVar9._25_3_ = 0;
        auVar9[0x1c] = bVar4;
        auVar9._29_3_ = 0;
        auVar9 = vpsllvd_avx2(_DAT_180574720,auVar9 ^ _DAT_180574760);
        local_1a0 = vpor_avx2(auVar9,auVar11._0_32_);
        auVar11 = ZEXT3264(local_1a0);
      } while (param_3 != pbVar1);
    }
  }
  else {
    FUN_180540170(local_160,0,0x100);
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_160[0][*param_3] = 0xff;
    }
    local_1a0 = ZEXT2032(CONCAT416((uint)(SUB321(local_e0 >> 7,0) & 1) |
                                   (uint)(SUB321(local_e0 >> 0xf,0) & 1) << 1 |
                                   (uint)(SUB321(local_e0 >> 0x17,0) & 1) << 2 |
                                   (uint)(SUB321(local_e0 >> 0x1f,0) & 1) << 3 |
                                   (uint)(SUB321(local_e0 >> 0x27,0) & 1) << 4 |
                                   (uint)(SUB321(local_e0 >> 0x2f,0) & 1) << 5 |
                                   (uint)(SUB321(local_e0 >> 0x37,0) & 1) << 6 |
                                   (uint)(SUB321(local_e0 >> 0x3f,0) & 1) << 7 |
                                   (uint)(SUB321(local_e0 >> 0x47,0) & 1) << 8 |
                                   (uint)(SUB321(local_e0 >> 0x4f,0) & 1) << 9 |
                                   (uint)(SUB321(local_e0 >> 0x57,0) & 1) << 10 |
                                   (uint)(SUB321(local_e0 >> 0x5f,0) & 1) << 0xb |
                                   (uint)(SUB321(local_e0 >> 0x67,0) & 1) << 0xc |
                                   (uint)(SUB321(local_e0 >> 0x6f,0) & 1) << 0xd |
                                   (uint)(SUB321(local_e0 >> 0x77,0) & 1) << 0xe |
                                   (uint)SUB321(local_e0 >> 0x7f,0) << 0xf |
                                   (uint)(SUB321(local_e0 >> 0x87,0) & 1) << 0x10 |
                                   (uint)(SUB321(local_e0 >> 0x8f,0) & 1) << 0x11 |
                                   (uint)(SUB321(local_e0 >> 0x97,0) & 1) << 0x12 |
                                   (uint)(SUB321(local_e0 >> 0x9f,0) & 1) << 0x13 |
                                   (uint)(SUB321(local_e0 >> 0xa7,0) & 1) << 0x14 |
                                   (uint)(SUB321(local_e0 >> 0xaf,0) & 1) << 0x15 |
                                   (uint)(SUB321(local_e0 >> 0xb7,0) & 1) << 0x16 |
                                   (uint)SUB321(local_e0 >> 0xbf,0) << 0x17 |
                                   (uint)(SUB321(local_e0 >> 199,0) & 1) << 0x18 |
                                   (uint)(SUB321(local_e0 >> 0xcf,0) & 1) << 0x19 |
                                   (uint)(SUB321(local_e0 >> 0xd7,0) & 1) << 0x1a |
                                   (uint)(SUB321(local_e0 >> 0xdf,0) & 1) << 0x1b |
                                   (uint)(SUB321(local_e0 >> 0xe7,0) & 1) << 0x1c |
                                   (uint)(SUB321(local_e0 >> 0xef,0) & 1) << 0x1d |
                                   (uint)(SUB321(local_e0 >> 0xf7,0) & 1) << 0x1e |
                                   (uint)(byte)(local_e0[0x1f] >> 7) << 0x1f,
                                   ZEXT416((uint)(SUB321(local_160[0] >> 7,0) & 1) |
                                           (uint)(SUB321(local_160[0] >> 0xf,0) & 1) << 1 |
                                           (uint)(SUB321(local_160[0] >> 0x17,0) & 1) << 2 |
                                           (uint)(SUB321(local_160[0] >> 0x1f,0) & 1) << 3 |
                                           (uint)(SUB321(local_160[0] >> 0x27,0) & 1) << 4 |
                                           (uint)(SUB321(local_160[0] >> 0x2f,0) & 1) << 5 |
                                           (uint)(SUB321(local_160[0] >> 0x37,0) & 1) << 6 |
                                           (uint)(SUB321(local_160[0] >> 0x3f,0) & 1) << 7 |
                                           (uint)(SUB321(local_160[0] >> 0x47,0) & 1) << 8 |
                                           (uint)(SUB321(local_160[0] >> 0x4f,0) & 1) << 9 |
                                           (uint)(SUB321(local_160[0] >> 0x57,0) & 1) << 10 |
                                           (uint)(SUB321(local_160[0] >> 0x5f,0) & 1) << 0xb |
                                           (uint)(SUB321(local_160[0] >> 0x67,0) & 1) << 0xc |
                                           (uint)(SUB321(local_160[0] >> 0x6f,0) & 1) << 0xd |
                                           (uint)(SUB321(local_160[0] >> 0x77,0) & 1) << 0xe |
                                           (uint)SUB321(local_160[0] >> 0x7f,0) << 0xf |
                                           (uint)(SUB321(local_160[0] >> 0x87,0) & 1) << 0x10 |
                                           (uint)(SUB321(local_160[0] >> 0x8f,0) & 1) << 0x11 |
                                           (uint)(SUB321(local_160[0] >> 0x97,0) & 1) << 0x12 |
                                           (uint)(SUB321(local_160[0] >> 0x9f,0) & 1) << 0x13 |
                                           (uint)(SUB321(local_160[0] >> 0xa7,0) & 1) << 0x14 |
                                           (uint)(SUB321(local_160[0] >> 0xaf,0) & 1) << 0x15 |
                                           (uint)(SUB321(local_160[0] >> 0xb7,0) & 1) << 0x16 |
                                           (uint)SUB321(local_160[0] >> 0xbf,0) << 0x17 |
                                           (uint)(SUB321(local_160[0] >> 199,0) & 1) << 0x18 |
                                           (uint)(SUB321(local_160[0] >> 0xcf,0) & 1) << 0x19 |
                                           (uint)(SUB321(local_160[0] >> 0xd7,0) & 1) << 0x1a |
                                           (uint)(SUB321(local_160[0] >> 0xdf,0) & 1) << 0x1b |
                                           (uint)(SUB321(local_160[0] >> 0xe7,0) & 1) << 0x1c |
                                           (uint)(SUB321(local_160[0] >> 0xef,0) & 1) << 0x1d |
                                           (uint)(SUB321(local_160[0] >> 0xf7,0) & 1) << 0x1e |
                                           (uint)(byte)(local_160[0][0x1f] >> 7) << 0x1f)));
  }
  uVar6 = 0;
  uVar8 = param_2 & 0xfffffffffffffff8;
  if (uVar8 != 0) {
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(param_1 + uVar6);
      auVar9 = vpmovzxbd_avx2(auVar2);
      auVar10 = vpsrld_avx2(auVar9,5);
      auVar10 = vpermd_avx2(auVar10,local_1a0);
      auVar9 = vpandn_avx2(auVar9,_DAT_180574740);
      auVar9 = vpsllvd_avx2(auVar10,auVar9);
      uVar5 = vmovmskps_avx(auVar9);
      if (uVar5 != 0) {
        uVar7 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        return uVar7 + uVar6;
      }
      uVar6 = uVar6 + 8;
    } while (uVar6 != uVar8);
  }
  uVar5 = (uint)param_2 & 7;
  if ((param_2 & 7) != 0) {
    FUN_180540530(local_180,param_1 + uVar8,uVar5);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_180[0];
    auVar10 = vpmovzxbd_avx2(auVar3);
    auVar9 = vpandn_avx2(auVar10,_DAT_180574740);
    auVar10 = vpsrld_avx2(auVar10,5);
    auVar10 = vpermd_avx2(auVar10,local_1a0);
    auVar9 = vpsllvd_avx2(auVar10,auVar9);
    uVar7 = vmovmskps_avx(auVar9);
    uVar7 = uVar7 & (1 << (sbyte)uVar5) - 1U;
    if (uVar7 != 0) {
      uVar5 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      return uVar5 + uVar8;
    }
  }
  return -1;
}



/* ===== 1804e79f0 FUN_1804e79f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1804e79f0(longlong param_1,ulonglong param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [64];
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [32];
  ulonglong local_180 [4];
  undefined1 local_160 [4] [32];
  undefined1 local_e0 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  pbVar1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auVar9 = ZEXT1664((undefined1  [16])0x0);
    local_1a0 = auVar9._0_32_;
    while (param_3 != pbVar1) {
      bVar4 = *param_3;
      param_3 = param_3 + 1;
      auVar7._1_3_ = 0;
      auVar7[0] = bVar4;
      auVar7[4] = bVar4;
      auVar7._5_3_ = 0;
      auVar7[8] = bVar4;
      auVar7._9_3_ = 0;
      auVar7[0xc] = bVar4;
      auVar7._13_3_ = 0;
      auVar7[0x10] = bVar4;
      auVar7._17_3_ = 0;
      auVar7[0x14] = bVar4;
      auVar7._21_3_ = 0;
      auVar7[0x18] = bVar4;
      auVar7._25_3_ = 0;
      auVar7[0x1c] = bVar4;
      auVar7._29_3_ = 0;
      auVar7 = vpsllvd_avx2(_DAT_180574720,auVar7 ^ _DAT_180574760);
      local_1a0 = vpor_avx2(auVar7,auVar9._0_32_);
      auVar9 = ZEXT3264(local_1a0);
    }
  }
  else {
    FUN_180540170(local_160,0,0x100);
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_160[0][*param_3] = 0xff;
    }
    local_1a0 = ZEXT2032(CONCAT416((uint)(SUB321(local_e0 >> 7,0) & 1) |
                                   (uint)(SUB321(local_e0 >> 0xf,0) & 1) << 1 |
                                   (uint)(SUB321(local_e0 >> 0x17,0) & 1) << 2 |
                                   (uint)(SUB321(local_e0 >> 0x1f,0) & 1) << 3 |
                                   (uint)(SUB321(local_e0 >> 0x27,0) & 1) << 4 |
                                   (uint)(SUB321(local_e0 >> 0x2f,0) & 1) << 5 |
                                   (uint)(SUB321(local_e0 >> 0x37,0) & 1) << 6 |
                                   (uint)(SUB321(local_e0 >> 0x3f,0) & 1) << 7 |
                                   (uint)(SUB321(local_e0 >> 0x47,0) & 1) << 8 |
                                   (uint)(SUB321(local_e0 >> 0x4f,0) & 1) << 9 |
                                   (uint)(SUB321(local_e0 >> 0x57,0) & 1) << 10 |
                                   (uint)(SUB321(local_e0 >> 0x5f,0) & 1) << 0xb |
                                   (uint)(SUB321(local_e0 >> 0x67,0) & 1) << 0xc |
                                   (uint)(SUB321(local_e0 >> 0x6f,0) & 1) << 0xd |
                                   (uint)(SUB321(local_e0 >> 0x77,0) & 1) << 0xe |
                                   (uint)SUB321(local_e0 >> 0x7f,0) << 0xf |
                                   (uint)(SUB321(local_e0 >> 0x87,0) & 1) << 0x10 |
                                   (uint)(SUB321(local_e0 >> 0x8f,0) & 1) << 0x11 |
                                   (uint)(SUB321(local_e0 >> 0x97,0) & 1) << 0x12 |
                                   (uint)(SUB321(local_e0 >> 0x9f,0) & 1) << 0x13 |
                                   (uint)(SUB321(local_e0 >> 0xa7,0) & 1) << 0x14 |
                                   (uint)(SUB321(local_e0 >> 0xaf,0) & 1) << 0x15 |
                                   (uint)(SUB321(local_e0 >> 0xb7,0) & 1) << 0x16 |
                                   (uint)SUB321(local_e0 >> 0xbf,0) << 0x17 |
                                   (uint)(SUB321(local_e0 >> 199,0) & 1) << 0x18 |
                                   (uint)(SUB321(local_e0 >> 0xcf,0) & 1) << 0x19 |
                                   (uint)(SUB321(local_e0 >> 0xd7,0) & 1) << 0x1a |
                                   (uint)(SUB321(local_e0 >> 0xdf,0) & 1) << 0x1b |
                                   (uint)(SUB321(local_e0 >> 0xe7,0) & 1) << 0x1c |
                                   (uint)(SUB321(local_e0 >> 0xef,0) & 1) << 0x1d |
                                   (uint)(SUB321(local_e0 >> 0xf7,0) & 1) << 0x1e |
                                   (uint)(byte)(local_e0[0x1f] >> 7) << 0x1f,
                                   ZEXT416((uint)(SUB321(local_160[0] >> 7,0) & 1) |
                                           (uint)(SUB321(local_160[0] >> 0xf,0) & 1) << 1 |
                                           (uint)(SUB321(local_160[0] >> 0x17,0) & 1) << 2 |
                                           (uint)(SUB321(local_160[0] >> 0x1f,0) & 1) << 3 |
                                           (uint)(SUB321(local_160[0] >> 0x27,0) & 1) << 4 |
                                           (uint)(SUB321(local_160[0] >> 0x2f,0) & 1) << 5 |
                                           (uint)(SUB321(local_160[0] >> 0x37,0) & 1) << 6 |
                                           (uint)(SUB321(local_160[0] >> 0x3f,0) & 1) << 7 |
                                           (uint)(SUB321(local_160[0] >> 0x47,0) & 1) << 8 |
                                           (uint)(SUB321(local_160[0] >> 0x4f,0) & 1) << 9 |
                                           (uint)(SUB321(local_160[0] >> 0x57,0) & 1) << 10 |
                                           (uint)(SUB321(local_160[0] >> 0x5f,0) & 1) << 0xb |
                                           (uint)(SUB321(local_160[0] >> 0x67,0) & 1) << 0xc |
                                           (uint)(SUB321(local_160[0] >> 0x6f,0) & 1) << 0xd |
                                           (uint)(SUB321(local_160[0] >> 0x77,0) & 1) << 0xe |
                                           (uint)SUB321(local_160[0] >> 0x7f,0) << 0xf |
                                           (uint)(SUB321(local_160[0] >> 0x87,0) & 1) << 0x10 |
                                           (uint)(SUB321(local_160[0] >> 0x8f,0) & 1) << 0x11 |
                                           (uint)(SUB321(local_160[0] >> 0x97,0) & 1) << 0x12 |
                                           (uint)(SUB321(local_160[0] >> 0x9f,0) & 1) << 0x13 |
                                           (uint)(SUB321(local_160[0] >> 0xa7,0) & 1) << 0x14 |
                                           (uint)(SUB321(local_160[0] >> 0xaf,0) & 1) << 0x15 |
                                           (uint)(SUB321(local_160[0] >> 0xb7,0) & 1) << 0x16 |
                                           (uint)SUB321(local_160[0] >> 0xbf,0) << 0x17 |
                                           (uint)(SUB321(local_160[0] >> 199,0) & 1) << 0x18 |
                                           (uint)(SUB321(local_160[0] >> 0xcf,0) & 1) << 0x19 |
                                           (uint)(SUB321(local_160[0] >> 0xd7,0) & 1) << 0x1a |
                                           (uint)(SUB321(local_160[0] >> 0xdf,0) & 1) << 0x1b |
                                           (uint)(SUB321(local_160[0] >> 0xe7,0) & 1) << 0x1c |
                                           (uint)(SUB321(local_160[0] >> 0xef,0) & 1) << 0x1d |
                                           (uint)(SUB321(local_160[0] >> 0xf7,0) & 1) << 0x1e |
                                           (uint)(byte)(local_160[0][0x1f] >> 7) << 0x1f)));
  }
  while (7 < param_2) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)((param_2 - 8) + param_1);
    auVar7 = vpmovzxbd_avx2(auVar2);
    param_2 = param_2 - 8;
    auVar8 = vpsrld_avx2(auVar7,5);
    auVar8 = vpermd_avx2(auVar8,local_1a0);
    auVar7 = vpandn_avx2(auVar7,_DAT_180574740);
    auVar7 = vpsllvd_avx2(auVar8,auVar7);
    uVar5 = vmovmskps_avx(auVar7);
    if ((uVar5 ^ 0xff) != 0) {
      return (param_2 - (uint)LZCOUNT(uVar5 ^ 0xff)) + 0x1f;
    }
  }
  uVar5 = (uint)param_2 & 7;
  if ((param_2 & 7) != 0) {
    FUN_180540530(local_180,param_1,uVar5);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_180[0];
    auVar8 = vpmovzxbd_avx2(auVar3);
    auVar7 = vpandn_avx2(auVar8,_DAT_180574740);
    auVar8 = vpsrld_avx2(auVar8,5);
    auVar8 = vpermd_avx2(auVar8,local_1a0);
    auVar7 = vpsllvd_avx2(auVar8,auVar7);
    uVar6 = vmovmskps_avx(auVar7);
    uVar5 = ~uVar6 & (1 << (sbyte)uVar5) - 1U;
    if (uVar5 != 0) {
      return (ulonglong)(0x1f - LZCOUNT(uVar5));
    }
  }
  return 0xffffffffffffffff;
}



/* ===== 1804e7c20 FUN_1804e7c20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1804e7c20(longlong param_1,ulonglong param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [32];
  ulonglong local_180 [4];
  undefined1 local_160 [4] [32];
  undefined1 local_e0 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  pbVar1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auVar10 = ZEXT1664((undefined1  [16])0x0);
    local_1a0 = auVar10._0_32_;
    while (param_3 != pbVar1) {
      bVar4 = *param_3;
      param_3 = param_3 + 1;
      auVar8._1_3_ = 0;
      auVar8[0] = bVar4;
      auVar8[4] = bVar4;
      auVar8._5_3_ = 0;
      auVar8[8] = bVar4;
      auVar8._9_3_ = 0;
      auVar8[0xc] = bVar4;
      auVar8._13_3_ = 0;
      auVar8[0x10] = bVar4;
      auVar8._17_3_ = 0;
      auVar8[0x14] = bVar4;
      auVar8._21_3_ = 0;
      auVar8[0x18] = bVar4;
      auVar8._25_3_ = 0;
      auVar8[0x1c] = bVar4;
      auVar8._29_3_ = 0;
      auVar8 = vpsllvd_avx2(_DAT_180574720,auVar8 ^ _DAT_180574760);
      local_1a0 = vpor_avx2(auVar8,auVar10._0_32_);
      auVar10 = ZEXT3264(local_1a0);
    }
  }
  else {
    FUN_180540170(local_160,0,0x100);
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_160[0][*param_3] = 0xff;
    }
    local_1a0 = ZEXT2032(CONCAT416((uint)(SUB321(local_e0 >> 7,0) & 1) |
                                   (uint)(SUB321(local_e0 >> 0xf,0) & 1) << 1 |
                                   (uint)(SUB321(local_e0 >> 0x17,0) & 1) << 2 |
                                   (uint)(SUB321(local_e0 >> 0x1f,0) & 1) << 3 |
                                   (uint)(SUB321(local_e0 >> 0x27,0) & 1) << 4 |
                                   (uint)(SUB321(local_e0 >> 0x2f,0) & 1) << 5 |
                                   (uint)(SUB321(local_e0 >> 0x37,0) & 1) << 6 |
                                   (uint)(SUB321(local_e0 >> 0x3f,0) & 1) << 7 |
                                   (uint)(SUB321(local_e0 >> 0x47,0) & 1) << 8 |
                                   (uint)(SUB321(local_e0 >> 0x4f,0) & 1) << 9 |
                                   (uint)(SUB321(local_e0 >> 0x57,0) & 1) << 10 |
                                   (uint)(SUB321(local_e0 >> 0x5f,0) & 1) << 0xb |
                                   (uint)(SUB321(local_e0 >> 0x67,0) & 1) << 0xc |
                                   (uint)(SUB321(local_e0 >> 0x6f,0) & 1) << 0xd |
                                   (uint)(SUB321(local_e0 >> 0x77,0) & 1) << 0xe |
                                   (uint)SUB321(local_e0 >> 0x7f,0) << 0xf |
                                   (uint)(SUB321(local_e0 >> 0x87,0) & 1) << 0x10 |
                                   (uint)(SUB321(local_e0 >> 0x8f,0) & 1) << 0x11 |
                                   (uint)(SUB321(local_e0 >> 0x97,0) & 1) << 0x12 |
                                   (uint)(SUB321(local_e0 >> 0x9f,0) & 1) << 0x13 |
                                   (uint)(SUB321(local_e0 >> 0xa7,0) & 1) << 0x14 |
                                   (uint)(SUB321(local_e0 >> 0xaf,0) & 1) << 0x15 |
                                   (uint)(SUB321(local_e0 >> 0xb7,0) & 1) << 0x16 |
                                   (uint)SUB321(local_e0 >> 0xbf,0) << 0x17 |
                                   (uint)(SUB321(local_e0 >> 199,0) & 1) << 0x18 |
                                   (uint)(SUB321(local_e0 >> 0xcf,0) & 1) << 0x19 |
                                   (uint)(SUB321(local_e0 >> 0xd7,0) & 1) << 0x1a |
                                   (uint)(SUB321(local_e0 >> 0xdf,0) & 1) << 0x1b |
                                   (uint)(SUB321(local_e0 >> 0xe7,0) & 1) << 0x1c |
                                   (uint)(SUB321(local_e0 >> 0xef,0) & 1) << 0x1d |
                                   (uint)(SUB321(local_e0 >> 0xf7,0) & 1) << 0x1e |
                                   (uint)(byte)(local_e0[0x1f] >> 7) << 0x1f,
                                   ZEXT416((uint)(SUB321(local_160[0] >> 7,0) & 1) |
                                           (uint)(SUB321(local_160[0] >> 0xf,0) & 1) << 1 |
                                           (uint)(SUB321(local_160[0] >> 0x17,0) & 1) << 2 |
                                           (uint)(SUB321(local_160[0] >> 0x1f,0) & 1) << 3 |
                                           (uint)(SUB321(local_160[0] >> 0x27,0) & 1) << 4 |
                                           (uint)(SUB321(local_160[0] >> 0x2f,0) & 1) << 5 |
                                           (uint)(SUB321(local_160[0] >> 0x37,0) & 1) << 6 |
                                           (uint)(SUB321(local_160[0] >> 0x3f,0) & 1) << 7 |
                                           (uint)(SUB321(local_160[0] >> 0x47,0) & 1) << 8 |
                                           (uint)(SUB321(local_160[0] >> 0x4f,0) & 1) << 9 |
                                           (uint)(SUB321(local_160[0] >> 0x57,0) & 1) << 10 |
                                           (uint)(SUB321(local_160[0] >> 0x5f,0) & 1) << 0xb |
                                           (uint)(SUB321(local_160[0] >> 0x67,0) & 1) << 0xc |
                                           (uint)(SUB321(local_160[0] >> 0x6f,0) & 1) << 0xd |
                                           (uint)(SUB321(local_160[0] >> 0x77,0) & 1) << 0xe |
                                           (uint)SUB321(local_160[0] >> 0x7f,0) << 0xf |
                                           (uint)(SUB321(local_160[0] >> 0x87,0) & 1) << 0x10 |
                                           (uint)(SUB321(local_160[0] >> 0x8f,0) & 1) << 0x11 |
                                           (uint)(SUB321(local_160[0] >> 0x97,0) & 1) << 0x12 |
                                           (uint)(SUB321(local_160[0] >> 0x9f,0) & 1) << 0x13 |
                                           (uint)(SUB321(local_160[0] >> 0xa7,0) & 1) << 0x14 |
                                           (uint)(SUB321(local_160[0] >> 0xaf,0) & 1) << 0x15 |
                                           (uint)(SUB321(local_160[0] >> 0xb7,0) & 1) << 0x16 |
                                           (uint)SUB321(local_160[0] >> 0xbf,0) << 0x17 |
                                           (uint)(SUB321(local_160[0] >> 199,0) & 1) << 0x18 |
                                           (uint)(SUB321(local_160[0] >> 0xcf,0) & 1) << 0x19 |
                                           (uint)(SUB321(local_160[0] >> 0xd7,0) & 1) << 0x1a |
                                           (uint)(SUB321(local_160[0] >> 0xdf,0) & 1) << 0x1b |
                                           (uint)(SUB321(local_160[0] >> 0xe7,0) & 1) << 0x1c |
                                           (uint)(SUB321(local_160[0] >> 0xef,0) & 1) << 0x1d |
                                           (uint)(SUB321(local_160[0] >> 0xf7,0) & 1) << 0x1e |
                                           (uint)(byte)(local_160[0][0x1f] >> 7) << 0x1f)));
  }
  while (7 < param_2) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)((param_2 - 8) + param_1);
    auVar8 = vpmovzxbd_avx2(auVar2);
    param_2 = param_2 - 8;
    auVar9 = vpsrld_avx2(auVar8,5);
    auVar9 = vpermd_avx2(auVar9,local_1a0);
    auVar8 = vpandn_avx2(auVar8,_DAT_180574740);
    auVar8 = vpsllvd_avx2(auVar9,auVar8);
    iVar5 = vmovmskps_avx(auVar8);
    if (iVar5 != 0) {
      return (param_2 - (uint)LZCOUNT(iVar5)) + 0x1f;
    }
  }
  uVar7 = (uint)param_2 & 7;
  if ((param_2 & 7) != 0) {
    FUN_180540530(local_180,param_1,uVar7);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_180[0];
    auVar9 = vpmovzxbd_avx2(auVar3);
    auVar8 = vpandn_avx2(auVar9,_DAT_180574740);
    auVar9 = vpsrld_avx2(auVar9,5);
    auVar9 = vpermd_avx2(auVar9,local_1a0);
    auVar8 = vpsllvd_avx2(auVar9,auVar8);
    uVar6 = vmovmskps_avx(auVar8);
    uVar6 = uVar6 & (1 << (sbyte)uVar7) - 1U;
    if (uVar6 != 0) {
      return (ulonglong)(0x1f - LZCOUNT(uVar6));
    }
  }
  return 0xffffffffffffffff;
}



/* ===== 1804e7e50 FUN_1804e7e50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
FUN_1804e7e50(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 (*pauVar7) [16];
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar14;
  undefined1 auVar13 [16];
  uint uVar15;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_88;
  pauVar7 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar4 = (uint)param_4;
  if (param_4 < 0x11) {
    FUN_180540530(local_68,param_3,param_4);
    auVar12 = local_68;
    for (; param_1 != pauVar7; param_1 = param_1 + 1) {
      iVar1 = pcmpestri(local_68,*param_1,0x30,uVar4,0x10);
      if (param_1 < pauVar7) goto LAB_1804e7efd;
    }
    bVar8 = false;
    uVar6 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_180540530(local_68,param_1,uVar6);
      iVar1 = pcmpestri(auVar12,local_68,0x30,uVar4,uVar6);
      if (bVar8) {
LAB_1804e7efd:
        return (undefined1 (*) [16])(*param_1 + iVar1);
      }
      param_1 = (undefined1 (*) [16])(*param_1 + uVar6);
    }
  }
  else {
    uVar4 = uVar4 & 0xf;
    pauVar3 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_180540530(local_68,pauVar3,uVar4);
    auVar12 = local_68;
    pauVar5 = param_3 + 1;
    if (param_1 != pauVar7) {
      do {
        auVar11 = *param_1;
        auVar9 = pcmpestrm(*param_3,auVar11,0x30,0x10,0x10);
        pauVar2 = pauVar5;
        while( true ) {
          uVar6 = auVar9._8_4_;
          uVar14 = auVar9._12_4_;
          if (pauVar2 == pauVar3) break;
          auVar10 = *pauVar2;
          pauVar2 = pauVar2 + 1;
          auVar10 = pcmpestrm(auVar10,auVar11,0x30,0x10,0x10);
          auVar13._0_4_ = auVar9._0_4_ & auVar10._0_4_;
          auVar13._4_4_ = auVar9._4_4_ & auVar10._4_4_;
          auVar13._8_4_ = uVar6 & auVar10._8_4_;
          auVar13._12_4_ = uVar14 & auVar10._12_4_;
          auVar9 = auVar13;
        }
        if ((param_4 & 0xf) != 0) {
          auVar11 = pcmpestrm(local_68,auVar11,0x30,uVar4,0x10);
          auVar9._0_4_ = auVar9._0_4_ & auVar11._0_4_;
          auVar9._4_4_ = 0;
          auVar9._8_4_ = uVar6 & auVar11._8_4_;
          auVar9._12_4_ = uVar14 & auVar11._12_4_;
        }
        uVar6 = auVar9._0_4_;
        if (uVar6 != 0) {
          iVar1 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
          if ((iVar1 < 0x10) && (iVar1 != 0x10)) {
            return (undefined1 (*) [16])(*param_1 + iVar1);
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 != pauVar7);
    }
    uVar6 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_180540530(local_68,param_1,uVar6);
      auVar11 = pcmpestrm(*param_3,local_68,0x30,0x10,uVar6);
      while( true ) {
        uVar14 = auVar11._8_4_;
        uVar15 = auVar11._12_4_;
        if (pauVar5 == pauVar3) break;
        auVar9 = *pauVar5;
        pauVar5 = pauVar5 + 1;
        auVar9 = pcmpestrm(auVar9,local_68,0x30,0x10,uVar6);
        auVar10._0_4_ = auVar11._0_4_ & auVar9._0_4_;
        auVar10._4_4_ = auVar11._4_4_ & auVar9._4_4_;
        auVar10._8_4_ = uVar14 & auVar9._8_4_;
        auVar10._12_4_ = uVar15 & auVar9._12_4_;
        auVar11 = auVar10;
      }
      if ((param_4 & 0xf) != 0) {
        auVar12 = pcmpestrm(auVar12,local_68,0x30,uVar4,uVar6);
        auVar11._0_4_ = auVar11._0_4_ & auVar12._0_4_;
        auVar11._4_4_ = 0;
        auVar11._8_4_ = uVar14 & auVar12._8_4_;
        auVar11._12_4_ = uVar15 & auVar12._12_4_;
      }
      uVar4 = auVar11._0_4_;
      if (uVar4 != 0) {
        uVar14 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        if ((int)uVar14 < (int)uVar6) {
          uVar6 = uVar14;
        }
      }
      param_1 = (undefined1 (*) [16])(*param_1 + (int)uVar6);
    }
  }
  return param_1;
}



/* ===== 1804e8070 FUN_1804e8070 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001804e8197) */
/* WARNING: Removing unreachable block (ram,0x0001804e819a) */
/* WARNING: Removing unreachable block (ram,0x0001804e8206) */
/* WARNING: Removing unreachable block (ram,0x0001804e8209) */

undefined1 (*) [16]
FUN_1804e8070(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  undefined1 (*pauVar10) [16];
  bool bVar11;
  undefined1 uVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_88;
  pauVar10 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar6 = (uint)param_4;
  if (param_4 < 0x11) {
    FUN_180540530(local_68,param_3,param_4);
    auVar1 = local_68;
    for (; param_1 != pauVar10; param_1 = param_1 + 1) {
      iVar2 = pcmpestri(local_68,*param_1,0,uVar6,0x10);
      if (param_1 < pauVar10) goto LAB_1804e811f;
    }
    bVar11 = false;
    uVar9 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_180540530(local_68,param_1,uVar9);
      iVar2 = pcmpestri(auVar1,local_68,0,uVar6,uVar9);
      if (bVar11) {
LAB_1804e811f:
        return (undefined1 (*) [16])(*param_1 + iVar2);
      }
      param_1 = (undefined1 (*) [16])(*param_1 + uVar9);
    }
  }
  else {
    uVar6 = uVar6 & 0xf;
    pauVar5 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_180540530(local_68,pauVar5,uVar6);
    auVar1 = local_68;
    for (; param_1 != pauVar10; param_1 = param_1 + 1) {
      bVar11 = param_1 < pauVar10;
      iVar2 = 0x10;
      pauVar8 = param_3;
      do {
        iVar3 = pcmpestri(*pauVar8,*param_1,0,0x10,0x10);
        if ((bVar11) && (iVar3 < iVar2)) {
          iVar2 = iVar3;
        }
        pauVar8 = pauVar8 + 1;
        bVar11 = pauVar8 < pauVar5;
      } while (pauVar8 != pauVar5);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_68,*param_1,0,uVar6,0x10);
      }
      if (iVar2 != 0x10) {
        return (undefined1 (*) [16])(*param_1 + iVar2);
      }
    }
    uVar12 = 0;
    uVar9 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_180540530(local_68,param_1,uVar9);
      uVar7 = uVar9;
      do {
        uVar4 = pcmpestri(*param_3,local_68,0,0x10,uVar9);
        if (((bool)uVar12) && ((int)uVar4 < (int)uVar7)) {
          uVar7 = uVar4;
        }
        param_3 = param_3 + 1;
        uVar12 = param_3 < pauVar5;
      } while (param_3 != pauVar5);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(auVar1,local_68,0,uVar6,uVar9);
      }
      param_1 = (undefined1 (*) [16])(*param_1 + (int)uVar7);
    }
  }
  return param_1;
}



/* ===== 1804e8250 FUN_1804e8250 ===== */

void FUN_1804e8250(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (uVar6 < 0x20) {
    if (uVar6 < 0x10) goto LAB_1804e8383;
  }
  else if ((DAT_1809194cc & 0x20) != 0) {
    auVar2 = *param_1;
    puVar4 = *param_1;
    auVar13 = auVar2;
    while (param_1 = param_1 + 1,
          param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0))) {
      auVar2 = *param_1;
      auVar13 = vpminsd_avx2(auVar2,auVar13);
    }
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar3 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar7),*param_1);
      auVar2 = vpblendvb_avx2(auVar2,auVar3,*(undefined1 (*) [32])(&DAT_180574630 + -uVar7));
      auVar13 = vpminsd_avx2(auVar2,auVar13);
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
    auVar2 = vpermq_avx2(auVar13,0x4e);
    auVar2 = vpminsd_avx2(auVar2,auVar13);
    auVar13 = vpshufd_avx2(auVar2,0x4e);
    auVar2 = vpminsd_avx2(auVar13,auVar2);
    auVar13 = vpshufd_avx2(auVar2,0xb1);
    auVar2 = vpminsd_avx2(auVar13,auVar2);
    iVar8 = auVar2._0_4_;
    if (param_1 == param_2) {
      return;
    }
    do {
      iVar5 = *(int *)*param_1;
      if (iVar8 <= *(int *)*param_1) {
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
    } while (param_1 != param_2);
    return;
  }
  if ((DAT_1809194cc & 4) != 0) {
    uVar9 = *(uint *)*param_1;
    uVar10 = *(uint *)(*param_1 + 4);
    uVar11 = *(uint *)(*param_1 + 8);
    uVar12 = *(uint *)(*param_1 + 0xc);
    puVar4 = *param_1;
    while (param_1 = (undefined1 (*) [32])(*param_1 + 0x10),
          param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0))) {
      auVar1 = *(undefined1 (*) [16])*param_1;
      iVar8 = auVar1._0_4_;
      uVar9 = (uint)(iVar8 < (int)uVar9) * iVar8 | (iVar8 >= (int)uVar9) * uVar9;
      iVar8 = auVar1._4_4_;
      uVar10 = (uint)(iVar8 < (int)uVar10) * iVar8 | (iVar8 >= (int)uVar10) * uVar10;
      iVar8 = auVar1._8_4_;
      uVar11 = (uint)(iVar8 < (int)uVar11) * iVar8 | (iVar8 >= (int)uVar11) * uVar11;
      iVar8 = auVar1._12_4_;
      uVar12 = (uint)(iVar8 < (int)uVar12) * iVar8 | (iVar8 >= (int)uVar12) * uVar12;
    }
    uVar9 = ((int)uVar11 < (int)uVar9) * uVar11 | ((int)uVar11 >= (int)uVar9) * uVar9;
    uVar10 = ((int)uVar12 < (int)uVar10) * uVar12 | ((int)uVar12 >= (int)uVar10) * uVar10;
    uVar9 = ((int)uVar10 < (int)uVar9) * uVar10 | ((int)uVar10 >= (int)uVar9) * uVar9;
    if (param_1 == param_2) {
      return;
    }
    do {
      uVar10 = *(uint *)*param_1;
      if ((int)uVar9 <= (int)*(uint *)*param_1) {
        uVar10 = uVar9;
      }
      uVar9 = uVar10;
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
    } while (param_1 != param_2);
    return;
  }
LAB_1804e8383:
  iVar8 = *(int *)*param_1;
  while (iVar5 = iVar8, param_1 = (undefined1 (*) [32])(*param_1 + 4), param_1 != param_2) {
    iVar8 = *(int *)*param_1;
    if (iVar5 <= *(int *)*param_1) {
      iVar8 = iVar5;
    }
  }
  return;
}



/* ===== 1804e83b0 FUN_1804e83b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804e83b0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  
  uVar7 = (longlong)param_2 - (longlong)param_1;
  if (uVar7 < 0x20) {
    if (uVar7 < 0x10) goto LAB_1804e858c;
  }
  else if ((DAT_1809194cc & 0x20) != 0) {
    puVar4 = *param_1;
    auVar2 = vpsubq_avx2(*param_1,_DAT_180574680);
    auVar14 = auVar2;
    while (param_1 = param_1 + 1,
          param_1 != (undefined1 (*) [32])(puVar4 + (uVar7 & 0xffffffffffffffe0))) {
      auVar2 = vpsubq_avx2(*param_1,_DAT_180574680);
      auVar1 = vpcmpgtq_avx2(auVar14,auVar2);
      auVar14 = vpblendvb_avx2(auVar14,auVar2,auVar1);
    }
    uVar8 = (ulonglong)((uint)uVar7 & 0x1c);
    if ((uVar7 & 0x1c) != 0) {
      auVar1 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar8),*param_1);
      auVar1 = vpsubq_avx2(auVar1,_DAT_180574680);
      auVar2 = vpblendvb_avx2(auVar2,auVar1,*(undefined1 (*) [32])(&DAT_180574630 + -uVar8));
      auVar1 = vpcmpgtq_avx2(auVar14,auVar2);
      auVar14 = vpblendvb_avx2(auVar14,auVar2,auVar1);
      param_1 = (undefined1 (*) [32])(*param_1 + uVar8);
    }
    auVar10 = vpsrldq_avx(auVar14._0_16_,8);
    uVar7 = auVar14._0_8_;
    if ((longlong)auVar10._0_8_ < (longlong)auVar14._0_8_) {
      uVar7 = auVar10._0_8_;
    }
    auVar10 = vpsrldq_avx(auVar14._16_16_,8);
    if ((longlong)auVar14._16_8_ < (longlong)uVar7) {
      uVar7 = auVar14._16_8_;
    }
    if ((longlong)auVar10._0_8_ < (longlong)uVar7) {
      uVar7 = auVar10._0_8_;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar7;
    auVar10 = vpunpcklqdq_avx(auVar10,auVar10);
    uVar7 = auVar10._0_8_ + 0x8000000000000000;
    if (param_1 == param_2) {
      return;
    }
    do {
      uVar8 = *(ulonglong *)*param_1;
      if (uVar7 <= *(ulonglong *)*param_1) {
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
      param_1 = (undefined1 (*) [32])(*param_1 + 8);
    } while (param_1 != param_2);
    return;
  }
  if ((DAT_1809194cc & 4) != 0) {
    auVar13._0_8_ = *(longlong *)*param_1 - _DAT_180574650;
    auVar13._8_8_ = *(longlong *)(*param_1 + 8) - _UNK_180574658;
    pauVar3 = param_1;
    while( true ) {
      pauVar6 = (undefined1 (*) [32])(*pauVar3 + 0x10);
      lVar9 = auVar13._0_8_;
      lVar5 = auVar13._8_8_;
      if (pauVar6 == (undefined1 (*) [32])(*param_1 + (uVar7 & 0xfffffffffffffff0))) break;
      auVar12._0_8_ = *(longlong *)*pauVar6 - _DAT_180574650;
      auVar12._8_8_ = *(longlong *)(*pauVar3 + 0x18) - _UNK_180574658;
      auVar11._0_8_ = -(ulonglong)(auVar12._0_8_ < lVar9);
      auVar11._8_8_ = -(ulonglong)(auVar12._8_8_ < lVar5);
      auVar13 = pblendvb(auVar13,auVar12,auVar11);
      pauVar3 = pauVar6;
    }
    if (lVar9 <= lVar5) {
      lVar5 = lVar9;
    }
    uVar7 = lVar5 + 0x8000000000000000;
    if (pauVar6 == param_2) {
      return;
    }
    do {
      uVar8 = *(ulonglong *)*pauVar6;
      if (uVar7 <= *(ulonglong *)*pauVar6) {
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
      pauVar6 = (undefined1 (*) [32])(*pauVar6 + 8);
    } while (pauVar6 != param_2);
    return;
  }
LAB_1804e858c:
  uVar7 = *(ulonglong *)*param_1;
  while (uVar8 = uVar7, param_1 = (undefined1 (*) [32])(*param_1 + 8), param_1 != param_2) {
    uVar7 = *(ulonglong *)*param_1;
    if (uVar8 <= *(ulonglong *)*param_1) {
      uVar7 = uVar8;
    }
  }
  return;
}



/* ===== 1804e85c0 FUN_1804e85c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [32] FUN_1804e85c0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 auVar12 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [32];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  
  auVar13._16_48_ = in_ZMM6._16_48_;
  auVar13._0_16_ = ZEXT416(DAT_1808acd0c);
  auVar12 = *param_1;
  uVar6 = (longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0;
  if (0x2000000000 < uVar6) {
    uVar6 = 0x2000000000;
  }
  auVar15 = ZEXT1664((undefined1  [16])0x0);
  auVar16 = ZEXT1664((undefined1  [16])0x0);
  pauVar10 = (undefined1 (*) [32])(*param_1 + uVar6);
  pauVar11 = param_1;
  while( true ) {
    pauVar9 = pauVar11;
    auVar1 = auVar12;
    while( true ) {
      pauVar9 = pauVar9 + 1;
      auVar4._0_4_ = _DAT_180574720 + auVar16._0_4_;
      auVar4._4_4_ = _UNK_180574724 + auVar16._4_4_;
      auVar4._8_4_ = _UNK_180574728 + auVar16._8_4_;
      auVar4._12_4_ = _UNK_18057472c + auVar16._12_4_;
      auVar4._16_4_ = _UNK_180574730 + auVar16._16_4_;
      auVar4._20_4_ = _UNK_180574734 + auVar16._20_4_;
      auVar4._24_4_ = _UNK_180574738 + auVar16._24_4_;
      auVar4._28_4_ = _UNK_18057473c + auVar16._28_4_;
      auVar16 = ZEXT3264(auVar4);
      auVar14 = auVar15._0_32_;
      if (pauVar9 == pauVar10) break;
      auVar1 = *pauVar9;
      auVar2 = vcmpps_avx(auVar12,auVar1,0x1e);
      auVar4 = vpblendvb_avx2(auVar14,auVar4,auVar2);
      auVar15 = ZEXT3264(auVar4);
      auVar12 = vminps_avx(auVar1,auVar12);
    }
    uVar6 = (longlong)param_2 - (longlong)pauVar9;
    if (((uVar6 & 0xffffffffffffffe0) == 0) &&
       (uVar8 = (ulonglong)((uint)uVar6 & 0x1c), (uVar6 & 0x1c) != 0)) {
      auVar2 = *(undefined1 (*) [32])(&DAT_180574630 + -uVar8);
      auVar3 = vmaskmovps_avx(auVar2,*pauVar9);
      auVar1 = vblendvps_avx(auVar1,auVar3,auVar2);
      auVar3 = vcmpps_avx(auVar12,auVar1,0x1e);
      auVar2 = vpand_avx2(auVar3,auVar2);
      auVar14 = vpblendvb_avx2(auVar14,auVar4,auVar2);
      auVar12 = vminps_avx(auVar1,auVar12);
      pauVar9 = (undefined1 (*) [32])(*pauVar9 + uVar8);
    }
    auVar1 = vshufps_avx(auVar12,auVar12,0xb1);
    auVar1 = vminps_avx(auVar1,auVar12);
    auVar4 = vshufps_avx(auVar1,auVar1,0x4e);
    auVar1 = vminps_avx(auVar4,auVar1);
    auVar4 = vperm2f128_avx(auVar1,ZEXT832(0),1);
    auVar1 = vminps_avx(auVar4,auVar1);
    if (auVar1._0_4_ < auVar13._0_4_) {
      auVar12 = vcmpps_avx(auVar1,auVar12,0);
      auVar4 = vpblendvb_avx2(_DAT_180574780,auVar14,auVar12);
      auVar14 = vpermq_avx2(auVar4,0x4e);
      auVar13 = ZEXT1664(auVar1._0_16_);
      auVar1 = vpminud_avx2(auVar14,auVar4);
      auVar14 = vpshufd_avx2(auVar1,0x4e);
      auVar1 = vpminud_avx2(auVar14,auVar1);
      auVar14 = vpshufd_avx2(auVar1,0xb1);
      auVar14 = vpminud_avx2(auVar14,auVar1);
      auVar1 = vpcmpeqd_avx2(auVar14,auVar4);
      uVar5 = 0;
      for (uVar7 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) &
                   ((uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar12 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f); (uVar7 & 1) == 0;
          uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      param_1 = (undefined1 (*) [32])(pauVar11[auVar14._0_4_] + uVar5);
    }
    uVar6 = (longlong)param_2 - (longlong)pauVar9 & 0xffffffffffffffe0;
    if (uVar6 == 0) break;
    auVar12 = *pauVar9;
    auVar15 = ZEXT3264(SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    if (0x2000000000 < uVar6) {
      uVar6 = 0x2000000000;
    }
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + uVar6);
    pauVar11 = pauVar9;
  }
  auVar15 = ZEXT1664(auVar13._0_16_);
  for (; pauVar9 != param_2; pauVar9 = (undefined1 (*) [32])(*pauVar9 + 4)) {
    if (*(float *)*pauVar9 < auVar15._0_4_) {
      auVar15._0_16_ = ZEXT416((uint)*(float *)*pauVar9);
      param_1 = pauVar9;
    }
  }
  return param_1;
}



/* ===== 1804e87b0 FUN_1804e87b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1804e87b0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  ushort uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar12;
  uint uVar13;
  undefined1 auVar11 [16];
  uint uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  
  auVar11 = *param_1;
  uVar3 = (longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0;
  if (0x1000000000 < uVar3) {
    uVar3 = 0x1000000000;
  }
  auVar27 = ZEXT816(0);
  iVar29 = 0;
  iVar30 = 0;
  iVar31 = 0;
  iVar32 = 0;
  pauVar5 = (undefined1 (*) [16])(*param_1 + uVar3);
  pauVar4 = param_1;
  pauVar6 = param_1;
  fVar28 = DAT_1808acd0c;
  while( true ) {
    while( true ) {
      pauVar4 = pauVar4 + 1;
      iVar29 = iVar29 + _DAT_1808ad5d0;
      iVar30 = iVar30 + _UNK_1808ad5d4;
      iVar31 = iVar31 + _UNK_1808ad5d8;
      iVar32 = iVar32 + _UNK_1808ad5dc;
      fVar15 = auVar11._0_4_;
      fVar18 = auVar11._4_4_;
      fVar20 = auVar11._8_4_;
      fVar22 = auVar11._12_4_;
      if (pauVar4 == pauVar5) break;
      auVar9 = *pauVar4;
      auVar8._4_4_ = -(uint)(auVar9._4_4_ < fVar18);
      auVar8._0_4_ = -(uint)(auVar9._0_4_ < fVar15);
      auVar8._8_4_ = -(uint)(auVar9._8_4_ < fVar20);
      auVar8._12_4_ = -(uint)(auVar9._12_4_ < fVar22);
      auVar11 = minps(auVar9,auVar11);
      auVar1._4_4_ = iVar30;
      auVar1._0_4_ = iVar29;
      auVar1._8_4_ = iVar31;
      auVar1._12_4_ = iVar32;
      auVar27 = pblendvb(auVar27,auVar1,auVar8);
    }
    auVar9._4_4_ = fVar15;
    auVar9._0_4_ = fVar18;
    auVar9._8_4_ = fVar22;
    auVar9._12_4_ = fVar20;
    auVar11 = minps(auVar9,auVar11);
    auVar25._8_4_ = auVar11._0_4_;
    auVar25._0_8_ = auVar11._8_8_;
    auVar25._12_4_ = auVar11._4_4_;
    auVar11 = minps(auVar25,auVar11);
    fVar24 = auVar11._0_4_;
    if (fVar24 < fVar28) {
      uVar7 = -(uint)(auVar11._12_4_ == fVar22);
      auVar26._4_4_ = -(uint)(auVar11._4_4_ == fVar18);
      auVar26._0_4_ = -(uint)(fVar24 == fVar15);
      auVar26._8_4_ = -(uint)(auVar11._8_4_ == fVar20);
      auVar26._12_4_ = uVar7;
      auVar11 = pblendvb(_DAT_1808adf90,auVar27,auVar26);
      uVar10 = auVar11._0_4_;
      uVar12 = auVar11._4_4_;
      uVar13 = auVar11._8_4_;
      uVar14 = auVar11._12_4_;
      uVar16 = (uVar13 < uVar10) * uVar13 | (uVar13 >= uVar10) * uVar10;
      uVar19 = (uVar14 < uVar12) * uVar14 | (uVar14 >= uVar12) * uVar12;
      uVar21 = (uVar10 < uVar13) * uVar10 | (uVar10 >= uVar13) * uVar13;
      uVar23 = (uVar12 < uVar14) * uVar12 | (uVar12 >= uVar14) * uVar14;
      uVar17 = (uVar19 < uVar16) * uVar19 | (uVar19 >= uVar16) * uVar16;
      auVar11._0_4_ = -(uint)(uVar17 == uVar10);
      auVar11._4_4_ = -(uint)(((uVar16 < uVar19) * uVar16 | (uVar16 >= uVar19) * uVar19) == uVar12);
      auVar11._8_4_ = -(uint)(((uVar23 < uVar21) * uVar23 | (uVar23 >= uVar21) * uVar21) == uVar13);
      auVar11._12_4_ = -(uint)(((uVar21 < uVar23) * uVar21 | (uVar21 >= uVar23) * uVar23) == uVar14)
      ;
      uVar2 = ((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar11._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar11._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar11._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar11._12_4_ >> 0x1f) << 0xf) &
              ((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(uVar7 >> 7) & 1) << 0xc | (ushort)((byte)(uVar7 >> 0xf) & 1) << 0xd |
               (ushort)((byte)(uVar7 >> 0x17) & 1) << 0xe | (ushort)(byte)(uVar7 >> 0x1f) << 0xf);
      uVar7 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      param_1 = (undefined1 (*) [16])(pauVar6[uVar17] + uVar7);
      fVar28 = fVar24;
    }
    uVar3 = (longlong)param_2 - (longlong)pauVar4 & 0xfffffffffffffff0;
    if (uVar3 == 0) break;
    auVar11 = *pauVar4;
    auVar27 = ZEXT816(0);
    if (0x1000000000 < uVar3) {
      uVar3 = 0x1000000000;
    }
    pauVar5 = (undefined1 (*) [16])(*pauVar5 + uVar3);
    pauVar6 = pauVar4;
  }
  for (; pauVar4 != param_2; pauVar4 = (undefined1 (*) [16])(*pauVar4 + 4)) {
    if (*(float *)*pauVar4 < fVar28) {
      param_1 = pauVar4;
      fVar28 = *(float *)*pauVar4;
    }
  }
  return param_1;
}



/* ===== 1804e8920 FUN_1804e8920 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [32] FUN_1804e8920(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 auVar12 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [32];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  
  auVar13._16_48_ = in_ZMM6._16_48_;
  auVar13._0_16_ = ZEXT416(DAT_1805746e0);
  auVar12 = *param_1;
  uVar6 = (longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0;
  if (0x2000000000 < uVar6) {
    uVar6 = 0x2000000000;
  }
  auVar15 = ZEXT1664((undefined1  [16])0x0);
  auVar16 = ZEXT1664((undefined1  [16])0x0);
  pauVar10 = (undefined1 (*) [32])(*param_1 + uVar6);
  pauVar11 = param_1;
  while( true ) {
    pauVar9 = pauVar11;
    auVar1 = auVar12;
    while( true ) {
      pauVar9 = pauVar9 + 1;
      auVar4._0_4_ = _DAT_180574720 + auVar16._0_4_;
      auVar4._4_4_ = _UNK_180574724 + auVar16._4_4_;
      auVar4._8_4_ = _UNK_180574728 + auVar16._8_4_;
      auVar4._12_4_ = _UNK_18057472c + auVar16._12_4_;
      auVar4._16_4_ = _UNK_180574730 + auVar16._16_4_;
      auVar4._20_4_ = _UNK_180574734 + auVar16._20_4_;
      auVar4._24_4_ = _UNK_180574738 + auVar16._24_4_;
      auVar4._28_4_ = _UNK_18057473c + auVar16._28_4_;
      auVar16 = ZEXT3264(auVar4);
      auVar14 = auVar15._0_32_;
      if (pauVar9 == pauVar10) break;
      auVar1 = *pauVar9;
      auVar2 = vcmpps_avx(auVar1,auVar12,0x1e);
      auVar4 = vpblendvb_avx2(auVar14,auVar4,auVar2);
      auVar15 = ZEXT3264(auVar4);
      auVar12 = vmaxps_avx(auVar1,auVar12);
    }
    uVar6 = (longlong)param_2 - (longlong)pauVar9;
    if (((uVar6 & 0xffffffffffffffe0) == 0) &&
       (uVar8 = (ulonglong)((uint)uVar6 & 0x1c), (uVar6 & 0x1c) != 0)) {
      auVar2 = *(undefined1 (*) [32])(&DAT_180574630 + -uVar8);
      auVar3 = vmaskmovps_avx(auVar2,*pauVar9);
      auVar1 = vblendvps_avx(auVar1,auVar3,auVar2);
      auVar3 = vcmpps_avx(auVar1,auVar12,0x1e);
      auVar2 = vpand_avx2(auVar3,auVar2);
      auVar14 = vpblendvb_avx2(auVar14,auVar4,auVar2);
      auVar12 = vmaxps_avx(auVar1,auVar12);
      pauVar9 = (undefined1 (*) [32])(*pauVar9 + uVar8);
    }
    auVar1 = vshufps_avx(auVar12,auVar12,0xb1);
    auVar1 = vmaxps_avx(auVar1,auVar12);
    auVar4 = vshufps_avx(auVar1,auVar1,0x4e);
    auVar1 = vmaxps_avx(auVar4,auVar1);
    auVar4 = vperm2f128_avx(auVar1,ZEXT832(0),1);
    auVar1 = vmaxps_avx(auVar4,auVar1);
    if (auVar13._0_4_ < auVar1._0_4_) {
      auVar12 = vcmpps_avx(auVar1,auVar12,0);
      auVar4 = vpblendvb_avx2(_DAT_180574780,auVar14,auVar12);
      auVar14 = vpermq_avx2(auVar4,0x4e);
      auVar13 = ZEXT1664(auVar1._0_16_);
      auVar1 = vpminud_avx2(auVar14,auVar4);
      auVar14 = vpshufd_avx2(auVar1,0x4e);
      auVar1 = vpminud_avx2(auVar14,auVar1);
      auVar14 = vpshufd_avx2(auVar1,0xb1);
      auVar14 = vpminud_avx2(auVar14,auVar1);
      auVar1 = vpcmpeqd_avx2(auVar14,auVar4);
      uVar5 = 0;
      for (uVar7 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar1 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) &
                   ((uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar12 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar12 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar12 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar12 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar12 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar12 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar12 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar12 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar12 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar12 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar12 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar12 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar12 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar12 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e |
                   (uint)(byte)(auVar12[0x1f] >> 7) << 0x1f); (uVar7 & 1) == 0;
          uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      param_1 = (undefined1 (*) [32])(pauVar11[auVar14._0_4_] + uVar5);
    }
    uVar6 = (longlong)param_2 - (longlong)pauVar9 & 0xffffffffffffffe0;
    if (uVar6 == 0) break;
    auVar12 = *pauVar9;
    auVar15 = ZEXT3264(SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    if (0x2000000000 < uVar6) {
      uVar6 = 0x2000000000;
    }
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + uVar6);
    pauVar11 = pauVar9;
  }
  auVar15 = ZEXT1664(auVar13._0_16_);
  for (; pauVar9 != param_2; pauVar9 = (undefined1 (*) [32])(*pauVar9 + 4)) {
    if (auVar15._0_4_ < *(float *)*pauVar9) {
      auVar15._0_16_ = ZEXT416((uint)*(float *)*pauVar9);
      param_1 = pauVar9;
    }
  }
  return param_1;
}



/* ===== 1804e8b10 FUN_1804e8b10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1804e8b10(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  ushort uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar12;
  uint uVar13;
  undefined1 auVar11 [16];
  uint uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  
  auVar11 = *param_1;
  uVar3 = (longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0;
  if (0x1000000000 < uVar3) {
    uVar3 = 0x1000000000;
  }
  auVar27 = ZEXT816(0);
  iVar29 = 0;
  iVar30 = 0;
  iVar31 = 0;
  iVar32 = 0;
  pauVar5 = (undefined1 (*) [16])(*param_1 + uVar3);
  pauVar4 = param_1;
  pauVar6 = param_1;
  fVar28 = DAT_1805746e0;
  while( true ) {
    while( true ) {
      pauVar4 = pauVar4 + 1;
      iVar29 = iVar29 + _DAT_1808ad5d0;
      iVar30 = iVar30 + _UNK_1808ad5d4;
      iVar31 = iVar31 + _UNK_1808ad5d8;
      iVar32 = iVar32 + _UNK_1808ad5dc;
      fVar15 = auVar11._0_4_;
      fVar18 = auVar11._4_4_;
      fVar20 = auVar11._8_4_;
      fVar22 = auVar11._12_4_;
      if (pauVar4 == pauVar5) break;
      auVar9 = *pauVar4;
      auVar8._4_4_ = -(uint)(fVar18 < auVar9._4_4_);
      auVar8._0_4_ = -(uint)(fVar15 < auVar9._0_4_);
      auVar8._8_4_ = -(uint)(fVar20 < auVar9._8_4_);
      auVar8._12_4_ = -(uint)(fVar22 < auVar9._12_4_);
      auVar11 = maxps(auVar9,auVar11);
      auVar1._4_4_ = iVar30;
      auVar1._0_4_ = iVar29;
      auVar1._8_4_ = iVar31;
      auVar1._12_4_ = iVar32;
      auVar27 = pblendvb(auVar27,auVar1,auVar8);
    }
    auVar9._4_4_ = fVar15;
    auVar9._0_4_ = fVar18;
    auVar9._8_4_ = fVar22;
    auVar9._12_4_ = fVar20;
    auVar11 = maxps(auVar9,auVar11);
    auVar25._8_4_ = auVar11._0_4_;
    auVar25._0_8_ = auVar11._8_8_;
    auVar25._12_4_ = auVar11._4_4_;
    auVar11 = maxps(auVar25,auVar11);
    fVar24 = auVar11._0_4_;
    if (fVar28 < fVar24) {
      uVar7 = -(uint)(auVar11._12_4_ == fVar22);
      auVar26._4_4_ = -(uint)(auVar11._4_4_ == fVar18);
      auVar26._0_4_ = -(uint)(fVar24 == fVar15);
      auVar26._8_4_ = -(uint)(auVar11._8_4_ == fVar20);
      auVar26._12_4_ = uVar7;
      auVar11 = pblendvb(_DAT_1808adf90,auVar27,auVar26);
      uVar10 = auVar11._0_4_;
      uVar12 = auVar11._4_4_;
      uVar13 = auVar11._8_4_;
      uVar14 = auVar11._12_4_;
      uVar16 = (uVar13 < uVar10) * uVar13 | (uVar13 >= uVar10) * uVar10;
      uVar19 = (uVar14 < uVar12) * uVar14 | (uVar14 >= uVar12) * uVar12;
      uVar21 = (uVar10 < uVar13) * uVar10 | (uVar10 >= uVar13) * uVar13;
      uVar23 = (uVar12 < uVar14) * uVar12 | (uVar12 >= uVar14) * uVar14;
      uVar17 = (uVar19 < uVar16) * uVar19 | (uVar19 >= uVar16) * uVar16;
      auVar11._0_4_ = -(uint)(uVar17 == uVar10);
      auVar11._4_4_ = -(uint)(((uVar16 < uVar19) * uVar16 | (uVar16 >= uVar19) * uVar19) == uVar12);
      auVar11._8_4_ = -(uint)(((uVar23 < uVar21) * uVar23 | (uVar23 >= uVar21) * uVar21) == uVar13);
      auVar11._12_4_ = -(uint)(((uVar21 < uVar23) * uVar21 | (uVar21 >= uVar23) * uVar23) == uVar14)
      ;
      uVar2 = ((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar11._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar11._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar11._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar11._12_4_ >> 0x1f) << 0xf) &
              ((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(uVar7 >> 7) & 1) << 0xc | (ushort)((byte)(uVar7 >> 0xf) & 1) << 0xd |
               (ushort)((byte)(uVar7 >> 0x17) & 1) << 0xe | (ushort)(byte)(uVar7 >> 0x1f) << 0xf);
      uVar7 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      param_1 = (undefined1 (*) [16])(pauVar6[uVar17] + uVar7);
      fVar28 = fVar24;
    }
    uVar3 = (longlong)param_2 - (longlong)pauVar4 & 0xfffffffffffffff0;
    if (uVar3 == 0) break;
    auVar11 = *pauVar4;
    auVar27 = ZEXT816(0);
    if (0x1000000000 < uVar3) {
      uVar3 = 0x1000000000;
    }
    pauVar5 = (undefined1 (*) [16])(*pauVar5 + uVar3);
    pauVar6 = pauVar4;
  }
  for (; pauVar4 != param_2; pauVar4 = (undefined1 (*) [16])(*pauVar4 + 4)) {
    if (fVar28 < *(float *)*pauVar4) {
      param_1 = pauVar4;
      fVar28 = *(float *)*pauVar4;
    }
  }
  return param_1;
}



/* ===== 1804e8c80 FUN_1804e8c80 ===== */

ulonglong FUN_1804e8c80(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  
  uVar6 = 0;
  if ((DAT_1809194cc & 0x20) == 0) {
    if ((DAT_1809194cc & 4) == 0) goto joined_r0x0001804e8d4b;
    uVar8 = param_3 * 2 & 0xfffffffffffffff0;
    if (uVar8 != 0) {
      do {
        pcVar1 = (char *)(param_1 + uVar6);
        auVar2 = *(undefined1 (*) [16])(param_2 + uVar6);
        auVar10[0] = -(*pcVar1 == auVar2[0]);
        auVar10[1] = -(pcVar1[1] == auVar2[1]);
        auVar10[2] = -(pcVar1[2] == auVar2[2]);
        auVar10[3] = -(pcVar1[3] == auVar2[3]);
        auVar10[4] = -(pcVar1[4] == auVar2[4]);
        auVar10[5] = -(pcVar1[5] == auVar2[5]);
        auVar10[6] = -(pcVar1[6] == auVar2[6]);
        auVar10[7] = -(pcVar1[7] == auVar2[7]);
        auVar10[8] = -(pcVar1[8] == auVar2[8]);
        auVar10[9] = -(pcVar1[9] == auVar2[9]);
        auVar10[10] = -(pcVar1[10] == auVar2[10]);
        auVar10[0xb] = -(pcVar1[0xb] == auVar2[0xb]);
        auVar10[0xc] = -(pcVar1[0xc] == auVar2[0xc]);
        auVar10[0xd] = -(pcVar1[0xd] == auVar2[0xd]);
        auVar10[0xe] = -(pcVar1[0xe] == auVar2[0xe]);
        auVar10[0xf] = -(pcVar1[0xf] == auVar2[0xf]);
        uVar7 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
        if (uVar7 != 0) {
          uVar3 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          return uVar6 + uVar3 >> 1;
        }
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != uVar8);
    }
  }
  else {
    uVar8 = param_3 * 2;
    if ((uVar8 & 0xffffffffffffffe0) != 0) {
      do {
        auVar4 = vpcmpeqb_avx2(*(undefined1 (*) [32])(uVar6 + param_2),
                               *(undefined1 (*) [32])(uVar6 + param_1));
        uVar7 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
        if (uVar7 != 0) goto LAB_1804e8d64;
        uVar6 = uVar6 + 0x20;
      } while (uVar6 != (uVar8 & 0xffffffffffffffe0));
    }
    uVar9 = (ulonglong)((uint)uVar8 & 0x1c);
    if ((uVar8 & 0x1c) != 0) {
      auVar4 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar9),
                               *(undefined1 (*) [32])(uVar6 + param_2));
      auVar5 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar9),
                               *(undefined1 (*) [32])(uVar6 + param_1));
      auVar4 = vpcmpeqb_avx2(auVar5,auVar4);
      uVar7 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
      if (uVar7 != 0) {
LAB_1804e8d64:
        uVar3 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return uVar6 + uVar3 >> 1;
      }
      uVar6 = uVar6 + uVar9;
    }
  }
  uVar6 = uVar6 >> 1;
joined_r0x0001804e8d4b:
  for (; (uVar6 != param_3 && (*(short *)(param_1 + uVar6 * 2) == *(short *)(param_2 + uVar6 * 2)));
      uVar6 = uVar6 + 1) {
  }
  return uVar6;
}



/* ===== 1804e8d80 FUN_1804e8d80 ===== */

char FUN_1804e8d80(ulonglong param_1,ulonglong param_2,char param_3)

{
  bool bVar1;
  
  if ((param_3 != '\0') && (0x30 < param_1)) {
    if (param_2 < 0x11) {
      return (1000 < param_1) * '\x02';
    }
    if (param_2 < 0x31) {
      return (0x50 < param_1) * '\x02';
    }
    return 2;
  }
  bVar1 = false;
  if (0x20 < param_2) {
    if (param_2 < 0x31) {
      return 0x1a0 < param_1;
    }
    if (param_2 < 0x41) {
      return 0xe0 < param_1;
    }
    if (param_2 < 0x51) {
      return 0x80 < param_1;
    }
    if (param_2 < 0x21d) {
      return 0x30 < param_1;
    }
    bVar1 = 0x20 < param_1;
  }
  return bVar1;
}



/* ===== 1804e8e10 FUN_1804e8e10 ===== */

void FUN_1804e8e10(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
                  short param_4,short param_5)

{
  undefined1 auVar1 [32];
  undefined1 *puVar2;
  short sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  uint uVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  uint uVar23;
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  uVar23 = CONCAT22(param_5,param_5);
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar2 = *param_1;
      auVar20._0_4_ = CONCAT22(param_5,param_5);
      auVar20._4_4_ = auVar20._0_4_;
      auVar20._8_4_ = auVar20._0_4_;
      auVar20._12_4_ = auVar20._0_4_;
      do {
        auVar7 = *(undefined1 (*) [16])*param_1;
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
        auVar6._0_2_ = -(ushort)(auVar7._0_2_ == param_4);
        auVar6._2_2_ = -(ushort)(auVar7._2_2_ == param_4);
        auVar6._4_2_ = -(ushort)(auVar7._4_2_ == param_4);
        auVar6._6_2_ = -(ushort)(auVar7._6_2_ == param_4);
        auVar6._8_2_ = -(ushort)(auVar7._8_2_ == param_4);
        auVar6._10_2_ = -(ushort)(auVar7._10_2_ == param_4);
        auVar6._12_2_ = -(ushort)(auVar7._12_2_ == param_4);
        auVar6._14_2_ = -(ushort)(auVar7._14_2_ == param_4);
        auVar7 = pblendvb(auVar7,auVar20,auVar6);
        *(undefined1 (*) [16])*param_3 = auVar7;
        param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar5 & 0xfffffffffffffff0)));
    }
  }
  else {
    auVar20 = vpunpcklwd_avx(ZEXT416((uint)(int)param_4),ZEXT416((uint)(int)param_4));
    auVar7 = vpunpcklwd_avx(ZEXT416((uint)(int)param_5),ZEXT416((uint)(int)param_5));
    auVar20 = vpshufd_avx(auVar20,0);
    auVar7 = vpshufd_avx(auVar7,0);
    auVar21._16_16_ = auVar20;
    auVar21._0_16_ = auVar20;
    auVar22._16_16_ = auVar7;
    auVar22._0_16_ = auVar7;
    puVar2 = *param_1;
    do {
      auVar1 = vpcmpeqw_avx2(auVar21,*param_1);
      auVar1 = vpblendvb_avx2(*param_1,auVar22,auVar1);
      *param_3 = auVar1;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
    uVar4 = (ulonglong)((uint)uVar5 & 0x1c);
    if ((uVar5 & 0x1c) != 0) {
      auVar1 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar4),*param_1);
      auVar21 = vpcmpeqw_avx2(auVar1,auVar21);
      auVar21 = vpblendvb_avx2(auVar1,auVar22,auVar21);
      param_1 = (undefined1 (*) [32])(*param_1 + uVar4);
      auVar21 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar4),auVar21);
      *param_3 = auVar21;
      param_3 = (undefined1 (*) [32])(*param_3 + uVar4);
    }
  }
  uVar5 = (ulonglong)((longlong)param_2 + (1 - (longlong)param_1)) >> 1;
  if (param_2 < param_1) {
    uVar5 = 0;
  }
  if ((0x1f < uVar5) &&
     (((undefined1 (*) [32])(param_1[-1] + uVar5 * 2 + 0x1e) < param_3 ||
      ((undefined1 (*) [32])(param_3[-1] + uVar5 * 2 + 0x1e) < param_1)))) {
    uVar4 = 0;
    do {
      auVar20 = *(undefined1 (*) [16])*param_1;
      uVar4 = uVar4 + 0x20;
      uVar9 = CONCAT22(-(ushort)(auVar20._2_2_ == param_4),-(ushort)(auVar20._0_2_ == param_4));
      auVar10._0_8_ =
           CONCAT26(-(ushort)(auVar20._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar20._4_2_ == param_4),uVar9));
      auVar10._8_2_ = -(ushort)(auVar20._8_2_ == param_4);
      auVar10._10_2_ = -(ushort)(auVar20._10_2_ == param_4);
      auVar14._12_2_ = -(ushort)(auVar20._12_2_ == param_4);
      auVar14._0_12_ = auVar10;
      auVar14._14_2_ = -(ushort)(auVar20._14_2_ == param_4);
      uVar19 = (uint)((ulonglong)auVar10._0_8_ >> 0x20);
      auVar7 = *(undefined1 (*) [16])(*param_1 + 0x10);
      *(uint *)*param_3 = ~uVar9 & auVar20._0_4_ | uVar9 & uVar23;
      *(uint *)(*param_3 + 4) = ~uVar19 & auVar20._4_4_ | uVar19 & uVar23;
      *(uint *)(*param_3 + 8) = ~auVar10._8_4_ & auVar20._8_4_ | auVar10._8_4_ & uVar23;
      *(uint *)(*param_3 + 0xc) = ~auVar14._12_4_ & auVar20._12_4_ | auVar14._12_4_ & uVar23;
      uVar9 = CONCAT22(-(ushort)(auVar7._2_2_ == param_4),-(ushort)(auVar7._0_2_ == param_4));
      auVar11._0_8_ =
           CONCAT26(-(ushort)(auVar7._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar7._4_2_ == param_4),uVar9));
      auVar11._8_2_ = -(ushort)(auVar7._8_2_ == param_4);
      auVar11._10_2_ = -(ushort)(auVar7._10_2_ == param_4);
      auVar15._12_2_ = -(ushort)(auVar7._12_2_ == param_4);
      auVar15._0_12_ = auVar11;
      auVar15._14_2_ = -(ushort)(auVar7._14_2_ == param_4);
      uVar19 = (uint)((ulonglong)auVar11._0_8_ >> 0x20);
      auVar20 = *(undefined1 (*) [16])param_1[1];
      *(uint *)(*param_3 + 0x10) = ~uVar9 & auVar7._0_4_ | uVar9 & uVar23;
      *(uint *)(*param_3 + 0x14) = ~uVar19 & auVar7._4_4_ | uVar19 & uVar23;
      *(uint *)(*param_3 + 0x18) = ~auVar11._8_4_ & auVar7._8_4_ | auVar11._8_4_ & uVar23;
      *(uint *)(*param_3 + 0x1c) = ~auVar15._12_4_ & auVar7._12_4_ | auVar15._12_4_ & uVar23;
      uVar9 = CONCAT22(-(ushort)(auVar20._2_2_ == param_4),-(ushort)(auVar20._0_2_ == param_4));
      auVar12._0_8_ =
           CONCAT26(-(ushort)(auVar20._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar20._4_2_ == param_4),uVar9));
      auVar12._8_2_ = -(ushort)(auVar20._8_2_ == param_4);
      auVar12._10_2_ = -(ushort)(auVar20._10_2_ == param_4);
      auVar16._12_2_ = -(ushort)(auVar20._12_2_ == param_4);
      auVar16._0_12_ = auVar12;
      auVar16._14_2_ = -(ushort)(auVar20._14_2_ == param_4);
      uVar19 = (uint)((ulonglong)auVar12._0_8_ >> 0x20);
      auVar7 = *(undefined1 (*) [16])(param_1[1] + 0x10);
      param_1 = param_1 + 2;
      *(uint *)param_3[1] = ~uVar9 & auVar20._0_4_ | uVar9 & uVar23;
      *(uint *)(param_3[1] + 4) = ~uVar19 & auVar20._4_4_ | uVar19 & uVar23;
      *(uint *)(param_3[1] + 8) = ~auVar12._8_4_ & auVar20._8_4_ | auVar12._8_4_ & uVar23;
      *(uint *)(param_3[1] + 0xc) = ~auVar16._12_4_ & auVar20._12_4_ | auVar16._12_4_ & uVar23;
      uVar9 = CONCAT22(-(ushort)(auVar7._2_2_ == param_4),-(ushort)(auVar7._0_2_ == param_4));
      auVar13._0_8_ =
           CONCAT26(-(ushort)(auVar7._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar7._4_2_ == param_4),uVar9));
      auVar13._8_2_ = -(ushort)(auVar7._8_2_ == param_4);
      auVar13._10_2_ = -(ushort)(auVar7._10_2_ == param_4);
      auVar17._12_2_ = -(ushort)(auVar7._12_2_ == param_4);
      auVar17._0_12_ = auVar13;
      auVar17._14_2_ = -(ushort)(auVar7._14_2_ == param_4);
      auVar18._0_4_ = uVar9 & uVar23;
      uVar19 = (uint)((ulonglong)auVar13._0_8_ >> 0x20);
      auVar18._4_4_ = uVar19 & uVar23;
      auVar18._8_4_ = auVar13._8_4_ & uVar23;
      auVar18._12_4_ = auVar17._12_4_ & uVar23;
      auVar8._0_4_ = ~uVar9 & auVar7._0_4_;
      auVar8._4_4_ = ~uVar19 & auVar7._4_4_;
      auVar8._8_4_ = ~auVar13._8_4_ & auVar7._8_4_;
      auVar8._12_4_ = ~auVar17._12_4_ & auVar7._12_4_;
      *(undefined1 (*) [16])(param_3[1] + 0x10) = auVar8 | auVar18;
      param_3 = param_3 + 2;
    } while (uVar4 != (uVar5 & 0xffffffffffffffe0));
  }
  for (; param_1 != param_2; param_1 = (undefined1 (*) [32])(*param_1 + 2)) {
    sVar3 = *(short *)*param_1;
    if (*(short *)*param_1 == param_4) {
      sVar3 = param_5;
    }
    *(short *)*param_3 = sVar3;
    param_3 = (undefined1 (*) [32])(*param_3 + 2);
  }
  return;
}



/* ===== 1804e9050 FUN_1804e9050 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [32]
FUN_1804e9050(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 *puVar6;
  int iVar7;
  undefined1 (*pauVar8) [32];
  ulonglong uVar9;
  undefined1 (*pauVar10) [32];
  uint uVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [64];
  undefined2 uVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_138 [56];
  undefined1 (*local_100) [32];
  undefined2 local_f8;
  undefined1 auStack_f6 [30];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_138;
  uVar9 = (longlong)param_2 - (longlong)param_1;
  local_100 = param_2;
  if (param_4 < 0x21) {
    lVar3 = -param_4;
    local_c0 = *(undefined8 *)*(undefined1 (*) [32])(&DAT_180574630 + lVar3);
    uStack_b8 = *(undefined8 *)(&UNK_180574638 + lVar3);
    uStack_b0 = *(undefined8 *)(&UNK_180574640 + lVar3);
    uStack_a8 = *(undefined8 *)(&UNK_180574648 + lVar3);
    FUN_180540530(&local_f8,param_3,param_4);
    puVar6 = *param_1;
    do {
      auVar12._2_2_ = local_f8;
      auVar12._0_2_ = local_f8;
      auVar12._4_2_ = local_f8;
      auVar12._6_2_ = local_f8;
      auVar12._8_2_ = local_f8;
      auVar12._10_2_ = local_f8;
      auVar12._12_2_ = local_f8;
      auVar12._14_2_ = local_f8;
      auVar12._16_2_ = local_f8;
      auVar12._18_2_ = local_f8;
      auVar12._20_2_ = local_f8;
      auVar12._22_2_ = local_f8;
      auVar12._24_2_ = local_f8;
      auVar12._26_2_ = local_f8;
      auVar12._28_2_ = local_f8;
      auVar12._30_2_ = local_f8;
      auVar12 = vpcmpeqw_avx2(auVar12,*param_1);
      uVar11 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe |
               (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 |
               (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e;
      if (uVar11 != 0) {
        auVar14 = ZEXT3264(CONCAT302(auStack_f6,local_f8));
        auVar16 = ZEXT3264(CONCAT824(uStack_a8,CONCAT816(uStack_b0,CONCAT88(uStack_b8,local_c0))));
        pauVar10 = local_100;
        do {
          uVar1 = 0;
          for (uVar2 = uVar11; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            uVar1 = uVar1 + 1;
          }
          pauVar8 = (undefined1 (*) [32])(*param_1 + uVar1);
          if ((ulonglong)((longlong)pauVar10 - (longlong)pauVar8) < 0x20) {
            if ((ulonglong)((longlong)pauVar10 - (longlong)pauVar8) < param_4) break;
            FUN_180540530(local_a0,pauVar8);
            auVar14 = ZEXT3264(CONCAT302(auStack_f6,local_f8));
            auVar16 = ZEXT3264(CONCAT824(uStack_a8,CONCAT816(uStack_b0,CONCAT88(uStack_b8,local_c0))
                                        ));
            pauVar10 = local_100;
            auVar12 = local_a0;
          }
          else {
            auVar12 = *pauVar8;
          }
          if ((auVar16._0_32_ & (auVar14._0_32_ ^ auVar12)) == (undefined1  [32])0x0) {
            return pauVar8;
          }
          uVar11 = uVar11 ^ 1 << ((byte)uVar1 & 0x1f);
        } while (uVar11 != 0);
      }
      pauVar10 = local_100;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar6 + (uVar9 & 0xffffffffffffffe0)));
    uVar9 = (longlong)local_100 - (longlong)param_1;
    if (uVar9 < param_4) goto LAB_1804e91f0;
    FUN_180540530(&local_c0,param_1,uVar9);
    auVar13._2_2_ = local_f8;
    auVar13._0_2_ = local_f8;
    auVar13._4_2_ = local_f8;
    auVar13._6_2_ = local_f8;
    auVar13._8_2_ = local_f8;
    auVar13._10_2_ = local_f8;
    auVar13._12_2_ = local_f8;
    auVar13._14_2_ = local_f8;
    auVar13._16_2_ = local_f8;
    auVar13._18_2_ = local_f8;
    auVar13._20_2_ = local_f8;
    auVar13._22_2_ = local_f8;
    auVar13._24_2_ = local_f8;
    auVar13._26_2_ = local_f8;
    auVar13._28_2_ = local_f8;
    auVar13._30_2_ = local_f8;
    auVar5._8_8_ = uStack_b8;
    auVar5._0_8_ = local_c0;
    auVar5._16_8_ = uStack_b0;
    auVar5._24_8_ = uStack_a8;
    auVar12 = vpcmpeqw_avx2(auVar13,auVar5);
    uVar11 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2 |
             (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6
             | (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 |
             (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
             (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
             (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe |
             (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
             (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
             (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
             (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 |
             (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
             (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
             (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
             (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e;
    if (uVar11 == 0) goto LAB_1804e91f0;
    do {
      uVar1 = 0;
      for (uVar2 = uVar11; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
        uVar1 = uVar1 + 1;
      }
      if (uVar9 - param_4 < (ulonglong)uVar1) break;
      pauVar10 = (undefined1 (*) [32])(*param_1 + uVar1);
      FUN_180540530(local_80,pauVar10,(longlong)local_100 - (longlong)pauVar10);
      auVar4._2_30_ = auStack_f6;
      auVar4._0_2_ = local_f8;
      if ((*(undefined1 (*) [32])(&DAT_180574630 + lVar3) & (local_80 ^ auVar4)) ==
          (undefined1  [32])0x0) {
        return pauVar10;
      }
      uVar11 = uVar11 ^ 1 << ((byte)uVar1 & 0x1f);
    } while (uVar11 != 0);
  }
  else {
    local_80 = *param_3;
    auVar14 = ZEXT3264(local_80);
    uVar15 = local_80._0_2_;
    local_a0._2_2_ = uVar15;
    local_a0._0_2_ = uVar15;
    local_a0._4_2_ = uVar15;
    local_a0._6_2_ = uVar15;
    local_a0._8_2_ = uVar15;
    local_a0._10_2_ = uVar15;
    local_a0._12_2_ = uVar15;
    local_a0._14_2_ = uVar15;
    local_a0._16_2_ = uVar15;
    local_a0._18_2_ = uVar15;
    local_a0._20_2_ = uVar15;
    local_a0._22_2_ = uVar15;
    local_a0._24_2_ = uVar15;
    local_a0._26_2_ = uVar15;
    local_a0._28_2_ = uVar15;
    local_a0._30_2_ = uVar15;
    pauVar10 = (undefined1 (*) [32])((uVar9 - param_4) + (longlong)param_1);
    do {
      auVar12 = vpcmpeqw_avx2(local_a0,*param_1);
      for (uVar11 = (uint)(SUB321(auVar12 >> 7,0) & 1) | (uint)(SUB321(auVar12 >> 0x17,0) & 1) << 2
                    | (uint)(SUB321(auVar12 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar12 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar12 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar12 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar12 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar12 >> 0x77,0) & 1) << 0xe |
                    (uint)(SUB321(auVar12 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar12 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar12 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar12 >> 0xb7,0) & 1) << 0x16 |
                    (uint)(SUB321(auVar12 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar12 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar12 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar12 >> 0xf7,0) & 1) << 0x1e; uVar11 != 0;
          uVar11 = uVar11 ^ 1 << ((byte)uVar1 & 0x1f)) {
        uVar1 = 0;
        for (uVar2 = uVar11; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          uVar1 = uVar1 + 1;
        }
        pauVar8 = (undefined1 (*) [32])(*param_1 + uVar1);
        if (pauVar10 < pauVar8) break;
        if (auVar14._0_32_ == *pauVar8) {
          iVar7 = memcmp(pauVar8 + 1,param_3 + 1,param_4 - 0x20);
          if (iVar7 == 0) {
            return pauVar8;
          }
          auVar14 = ZEXT3264(local_80);
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 <= pauVar10);
  }
  pauVar10 = local_100;
LAB_1804e91f0:
  return pauVar10;
}



/* ===== 1804e92d0 FUN_1804e92d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
FUN_1804e92d0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    param_2 = param_1;
  }
  else if (param_4 == 1) {
    param_2 = (undefined1 (*) [16])FUN_1804e6c50(param_1,param_2,(*param_3)[0]);
  }
  else {
    uVar3 = (longlong)param_2 - (longlong)param_1;
    if (param_4 <= uVar3) {
      if ((((byte)DAT_1809194cc & 4) == 0) || (uVar3 < 0x10)) {
        pauVar5 = (undefined1 (*) [16])((longlong)param_1 + uVar3 + (1 - param_4));
        if (param_1 != pauVar5) {
          do {
            if ((*param_1)[0] == (*param_3)[0]) {
              uVar3 = 1;
              while ((*param_1)[uVar3] == (*param_3)[uVar3]) {
                uVar3 = uVar3 + 1;
                if (uVar3 == param_4) {
                  return param_1;
                }
              }
            }
            param_1 = (undefined1 (*) [16])(*param_1 + 1);
          } while (param_1 != pauVar5);
        }
        return param_2;
      }
      if (param_4 < 0x11) {
        uVar6 = (uint)param_4;
        uVar7 = 0x10 < uVar6;
        FUN_180540530(local_58,param_3,param_4);
        auVar1 = local_58;
        do {
          iVar2 = pcmpestri(local_58,*param_1,0xc,uVar6,0x10);
          if ((bool)uVar7) {
            param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
            if (iVar2 <= (int)(0x10 - uVar6)) {
              return param_1;
            }
          }
          else {
            param_1 = param_1 + 1;
          }
          uVar7 = param_1 < param_2 + -1;
        } while (param_1 <= param_2 + -1);
        bVar8 = param_2 < param_1;
        lVar4 = (longlong)param_2 - (longlong)param_1;
        if (lVar4 != 0) {
          FUN_180540530(local_58,param_1,lVar4);
          iVar2 = pcmpestri(auVar1,local_58,0xc,uVar6,(int)lVar4);
          if (bVar8) {
            return (undefined1 (*) [16])(*param_1 + iVar2);
          }
        }
      }
      else {
        auVar1 = *param_3;
        bVar8 = CARRY8((longlong)param_1 - param_4,uVar3);
        pauVar5 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar3);
        do {
          iVar2 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
          if (bVar8) {
            if (iVar2 == 0) {
LAB_1804e9429:
              iVar2 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
              if (iVar2 == 0) {
                return param_1;
              }
            }
            else {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
              if (pauVar5 < param_1) break;
              auVar9._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
              auVar9._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
              auVar9._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
              auVar9._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
              if (auVar9 == (undefined1  [16])0x0) goto LAB_1804e9429;
            }
            param_1 = (undefined1 (*) [16])(*param_1 + 1);
          }
          else {
            param_1 = param_1 + 1;
          }
          bVar8 = param_1 < pauVar5;
        } while (param_1 <= pauVar5);
      }
    }
  }
  return param_2;
}



/* ===== 1804e94c0 FUN_1804e94c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
FUN_1804e94c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             longlong param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    param_2 = param_1;
  }
  else if (param_4 == 1) {
    param_2 = (undefined1 (*) [16])FUN_1804e6d50(param_1,param_2,*(undefined2 *)*param_3);
  }
  else {
    uVar5 = (longlong)param_2 - (longlong)param_1;
    uVar8 = param_4 * 2;
    if (uVar8 <= uVar5) {
      if (((DAT_1809194cc & 0x20) != 0) && (0x1f < uVar5)) {
        pauVar3 = (undefined1 (*) [16])FUN_1804e9050(param_1,param_2,param_3,uVar8);
        return pauVar3;
      }
      if (((DAT_1809194cc & 4) == 0) || (uVar5 < 0x10)) {
        pauVar3 = (undefined1 (*) [16])((longlong)param_1 + uVar5 + param_4 * -2 + 2);
        if (param_1 != pauVar3) {
          do {
            if (*(short *)*param_1 == *(short *)*param_3) {
              lVar6 = 1;
              while (*(short *)(*param_1 + lVar6 * 2) == *(short *)(*param_3 + lVar6 * 2)) {
                lVar6 = lVar6 + 1;
                if (lVar6 == param_4) {
                  return param_1;
                }
              }
            }
            param_1 = (undefined1 (*) [16])(*param_1 + 2);
          } while (param_1 != pauVar3);
        }
        return param_2;
      }
      if (uVar8 < 0x11) {
        uVar2 = (uint)param_4;
        uVar9 = 8 < uVar2;
        FUN_180540530(local_58,param_3,uVar8);
        auVar1 = local_58;
        do {
          iVar4 = pcmpestri(local_58,*param_1,0xd,uVar2,8);
          if ((bool)uVar9) {
            param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
            if (iVar4 <= (int)(8 - uVar2)) {
              return param_1;
            }
          }
          else {
            param_1 = param_1 + 1;
          }
          uVar9 = param_1 < param_2 + -1;
        } while (param_1 <= param_2 + -1);
        uVar8 = (longlong)param_2 - (longlong)param_1;
        if (uVar8 != 0) {
          bVar10 = (uVar8 & 1) != 0;
          FUN_180540530(local_58,param_1);
          iVar4 = pcmpestri(auVar1,local_58,0xd,uVar2,(int)(uVar8 >> 1));
          if (bVar10) {
            return (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
          }
        }
      }
      else {
        auVar1 = *param_3;
        uVar7 = (longlong)param_1 + param_4 * -2;
        bVar10 = CARRY8(uVar7,uVar5);
        pauVar3 = (undefined1 (*) [16])(uVar7 + uVar5);
        do {
          iVar4 = pcmpestri(auVar1,*param_1,0xd,8,8);
          if (bVar10) {
            if (iVar4 == 0) {
LAB_1804e964b:
              iVar4 = memcmp(param_1 + 1,param_3 + 1,uVar8 - 0x10);
              if (iVar4 == 0) {
                return param_1;
              }
            }
            else {
              param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
              if (pauVar3 < param_1) break;
              auVar11._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
              auVar11._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
              auVar11._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
              auVar11._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
              if (auVar11 == (undefined1  [16])0x0) goto LAB_1804e964b;
            }
            param_1 = (undefined1 (*) [16])(*param_1 + 2);
          }
          else {
            param_1 = param_1 + 1;
          }
          bVar10 = param_1 < pauVar3;
        } while (param_1 <= pauVar3);
      }
    }
  }
  return param_2;
}



/* ===== 1804e96f0 FUN_1804e96f0 ===== */

ulonglong FUN_1804e96f0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  undefined4 extraout_var;
  uint *puVar5;
  undefined1 auVar6 [16];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)*param_1;
    puVar2 = (uint *)*plVar1;
    do {
      uVar4 = 0x1f;
      if (param_2 != 0) {
        for (; param_2 >> uVar4 == 0; uVar4 = uVar4 - 1) {
        }
      }
      puVar5 = puVar2;
      if ((uVar4 == 0) ||
         (puVar5 = (uint *)((longlong)puVar2 + (ulonglong)uVar4),
         auVar6._0_4_ = *puVar5 ^ *(uint *)(param_1 + 2),
         auVar6._4_4_ = puVar5[1] ^ *(uint *)((longlong)param_1 + 0x14),
         auVar6._8_4_ = puVar5[2] ^ *(uint *)(param_1 + 3),
         auVar6._12_4_ = puVar5[3] ^ *(uint *)((longlong)param_1 + 0x1c),
         auVar6 == (undefined1  [16])0x0)) {
        iVar3 = memcmp(puVar5 + 4,(void *)param_1[4],param_1[5] - 0x10);
        if (iVar3 == 0) {
          *plVar1 = (longlong)puVar5;
          return CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),1);
        }
      }
      uVar4 = 1 << ((byte)uVar4 & 0x1f);
      in_RAX = (ulonglong)uVar4;
      param_2 = param_2 ^ uVar4;
    } while (param_2 != 0);
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 1804e9780 FUN_1804e9780 ===== */

void FUN_1804e9780(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
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
  undefined8 *puVar13;
  
  if ((0x1f < (ulonglong)((longlong)param_2 - (longlong)param_1)) &&
     (((byte)DAT_1809194cc & 0x20) != 0)) {
    puVar13 = (undefined8 *)
              (((longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0U) + (longlong)param_1);
    do {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      uVar9 = *param_1;
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar12 = param_1[3];
      uVar5 = *param_4;
      uVar6 = param_4[1];
      uVar7 = param_4[2];
      uVar8 = param_4[3];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      *param_3 = uVar5;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      param_3[3] = uVar8;
      *param_4 = uVar9;
      param_4[1] = uVar10;
      param_4[2] = uVar11;
      param_4[3] = uVar12;
      param_4 = param_4 + 4;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
    } while (param_1 != puVar13);
  }
  if ((0xf < (ulonglong)((longlong)param_2 - (longlong)param_1)) && (((byte)DAT_1809194cc & 4) != 0)
     ) {
    puVar13 = (undefined8 *)
              (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U) + (longlong)param_1);
    do {
      uVar2 = param_3[1];
      uVar3 = *param_4;
      uVar4 = param_4[1];
      uVar5 = *param_1;
      uVar6 = param_1[1];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1 = param_1 + 2;
      *param_3 = uVar3;
      param_3[1] = uVar4;
      param_3 = param_3 + 2;
      *param_4 = uVar5;
      param_4[1] = uVar6;
      param_4 = param_4 + 2;
    } while (param_1 != puVar13);
  }
  if (7 < (ulonglong)((longlong)param_2 - (longlong)param_1)) {
    puVar13 = (undefined8 *)
              (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U) + (longlong)param_1);
    do {
      uVar2 = *param_1;
      uVar3 = *param_4;
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      *param_3 = uVar3;
      param_3 = param_3 + 1;
      *param_4 = uVar2;
      param_4 = param_4 + 1;
    } while (param_1 != puVar13);
  }
  for (; param_1 != param_2; param_1 = (undefined8 *)((longlong)param_1 + 1)) {
    uVar1 = *(undefined1 *)param_1;
    *(undefined1 *)param_1 = *(undefined1 *)param_3;
    *(undefined1 *)param_3 = *(undefined1 *)param_4;
    *(undefined1 *)param_4 = uVar1;
    param_4 = (undefined8 *)((longlong)param_4 + 1);
    param_3 = (undefined8 *)((longlong)param_3 + 1);
  }
  return;
}



/* ===== 1804e98a0 thunk_FUN_1804e6890 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
thunk_FUN_1804e6890(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16]
                   ,ulonglong param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  undefined1 auStack_d8 [32];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (**appauStack_a8 [2]) [16];
  undefined1 auStack_98 [16];
  undefined1 (*pauStack_88) [16];
  ulonglong uStack_80;
  undefined1 (*pauStack_78) [16];
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uStack_68 = DAT_180919500 ^ (ulonglong)auStack_d8;
  pauStack_b0 = param_2;
  if (param_4 != 0) {
    pauStack_b8 = param_1;
    if (param_4 == 1) {
      pauVar6 = (undefined1 (*) [16])FUN_1804e7010(param_1,param_2,(*param_3)[0]);
      return pauVar6;
    }
    uVar10 = (longlong)param_2 - (longlong)param_1;
    if (param_4 <= uVar10) {
      if (((DAT_1809194cc & 0x20) != 0) && (0x1f < uVar10)) {
        pauVar6 = (undefined1 (*) [16])FUN_1804e64f0();
        return pauVar6;
      }
      if (((DAT_1809194cc & 4) == 0) || (uVar10 < 0x10)) {
        pauVar6 = (undefined1 (*) [16])((longlong)param_2 - param_4);
        while( true ) {
          if ((*pauVar6)[0] == (*param_3)[0]) {
            uVar10 = 1;
            while ((*pauVar6)[uVar10] == (*param_3)[uVar10]) {
              uVar10 = uVar10 + 1;
              if (uVar10 == param_4) {
                return pauVar6;
              }
            }
          }
          if (pauVar6 == param_1) break;
          pauVar6 = (undefined1 (*) [16])(pauVar6[-1] + 0xf);
        }
        return param_2;
      }
      iVar5 = (int)param_4;
      if (param_4 < 0x11) {
        uVar8 = (1 << (0x11U - (char)param_4 & 0x1f)) - 1;
        FUN_180540530(&pauStack_78,param_3,param_4);
        auVar12._8_8_ = uStack_70;
        auVar12._0_8_ = pauStack_78;
        param_2 = param_2 + -1;
        auVar11 = pcmpestrm(auVar12,*param_2,0xc,iVar5,0x10);
        uVar3 = auVar11._0_4_ & uVar8;
        if (uVar3 != 0) {
          uVar8 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar8 == 0; uVar8 = uVar8 - 1) {
            }
          }
          return (undefined1 (*) [16])(*param_2 + uVar8);
        }
        uVar3 = (uint)uVar10 & 0xf;
        uVar16 = (uint)((ulonglong)pauStack_78 >> 0x20);
        uVar17 = (uint)((ulonglong)uStack_70 >> 0x20);
        if (param_2 != (undefined1 (*) [16])(*param_1 + uVar3)) {
          do {
            param_2 = param_2 + -1;
            auVar11 = pcmpestrm(auVar12,*param_2,0xc,iVar5,0x10);
            uVar9 = auVar11._0_4_;
            if (uVar9 != 0) {
              uVar7 = (uVar8 ^ 0xffff) & uVar9;
              if (uVar7 != 0) {
                do {
                  uVar1 = 0x1f;
                  if (uVar7 != 0) {
                    for (; uVar7 >> uVar1 == 0; uVar1 = uVar1 - 1) {
                    }
                  }
                  pauVar6 = (undefined1 (*) [16])(*param_2 + uVar1);
                  auVar14._0_4_ = (uint)pauStack_78 ^ *(uint *)*pauVar6;
                  auVar14._4_4_ = uVar16 ^ *(uint *)(*pauVar6 + 4);
                  auVar14._8_4_ = (uint)uStack_70 ^ *(uint *)(*pauVar6 + 8);
                  auVar14._12_4_ = uVar17 ^ *(uint *)(*pauVar6 + 0xc);
                  if ((*(undefined1 (*) [16])(&DAT_1805746d0 + -param_4) & auVar14) ==
                      (undefined1  [16])0x0) {
                    return pauVar6;
                  }
                  uVar7 = uVar7 ^ 1 << ((byte)uVar1 & 0x1f);
                } while (uVar7 != 0);
              }
              uVar9 = uVar9 & uVar8;
              if (uVar9 != 0) {
                uVar3 = 0x1f;
                if (uVar9 != 0) {
                  for (; uVar9 >> uVar3 == 0; uVar3 = uVar3 - 1) {
                  }
                }
                return (undefined1 (*) [16])(*param_2 + uVar3);
              }
            }
          } while (param_2 != (undefined1 (*) [16])(*param_1 + uVar3));
          param_1 = pauStack_b8;
        }
        if ((ulonglong)uVar3 != 0) {
          auVar12 = pcmpestrm(auVar12,*param_1,0xc,iVar5,0x10);
          uVar3 = auVar12._0_4_ & (1 << (sbyte)uVar3) - 1U;
          if (uVar3 != 0) {
            uVar9 = (uVar8 ^ 0xffff) & uVar3;
            if (uVar9 != 0) {
              do {
                uVar7 = 0x1f;
                if (uVar9 != 0) {
                  for (; uVar9 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                  }
                }
                pauVar6 = (undefined1 (*) [16])(*param_1 + uVar7);
                auVar13._0_4_ = *(uint *)*pauVar6 ^ (uint)pauStack_78;
                auVar13._4_4_ = *(uint *)(*pauVar6 + 4) ^ uVar16;
                auVar13._8_4_ = *(uint *)(*pauVar6 + 8) ^ (uint)uStack_70;
                auVar13._12_4_ = *(uint *)(*pauVar6 + 0xc) ^ uVar17;
                if ((*(undefined1 (*) [16])(&DAT_1805746d0 + -param_4) & auVar13) ==
                    (undefined1  [16])0x0) {
                  return pauVar6;
                }
                uVar9 = uVar9 ^ 1 << ((byte)uVar7 & 0x1f);
              } while (uVar9 != 0);
            }
            uVar3 = uVar3 & uVar8;
            if (uVar3 != 0) {
              uVar8 = 0x1f;
              if (uVar3 != 0) {
                for (; uVar3 >> uVar8 == 0; uVar8 = uVar8 - 1) {
                }
              }
              return (undefined1 (*) [16])(*param_1 + uVar8);
            }
          }
        }
      }
      else {
        auVar12 = *param_3;
        param_2 = (undefined1 (*) [16])((longlong)param_2 - param_4);
        param_3 = param_3 + 1;
        appauStack_a8[0] = &pauStack_78;
        auVar11._0_4_ = *(uint *)*param_2 ^ auVar12._0_4_;
        auVar11._4_4_ = *(uint *)(*param_2 + 4) ^ auVar12._4_4_;
        auVar11._8_4_ = *(uint *)(*param_2 + 8) ^ auVar12._8_4_;
        auVar11._12_4_ = *(uint *)(*param_2 + 0xc) ^ auVar12._12_4_;
        auStack_98 = auVar12;
        pauStack_88 = param_3;
        uStack_80 = param_4;
        if ((auVar11 == (undefined1  [16])0x0) &&
           (pauStack_78 = param_2, iVar4 = memcmp(param_2 + 1,param_3,param_4 - 0x10), iVar4 == 0))
        {
          return param_2;
        }
        uVar3 = (uint)uVar10 - iVar5 & 0xf;
        uVar10 = (ulonglong)uVar3;
        if (param_2 != (undefined1 (*) [16])(*param_1 + uVar10)) {
          do {
            param_2 = param_2 + -1;
            auVar11 = pcmpestrm(auVar12,*param_2,0xc,0x10,0x10);
            uVar8 = auVar11._0_4_;
            pauStack_78 = param_2;
            if (uVar8 != 0) {
              do {
                uVar16 = 0x1f;
                if (uVar8 != 0) {
                  for (; uVar8 >> uVar16 == 0; uVar16 = uVar16 - 1) {
                  }
                }
                if (uVar16 == 0) {
                  pauVar6 = param_2;
LAB_1804e6b63:
                  iVar5 = memcmp(pauVar6 + 1,param_3,param_4 - 0x10);
                  if (iVar5 == 0) {
                    return pauVar6;
                  }
                }
                else {
                  pauVar6 = (undefined1 (*) [16])(*param_2 + uVar16);
                  auVar15._0_4_ = auVar12._0_4_ ^ *(uint *)*pauVar6;
                  auVar15._4_4_ = auVar12._4_4_ ^ *(uint *)(*pauVar6 + 4);
                  auVar15._8_4_ = auVar12._8_4_ ^ *(uint *)(*pauVar6 + 8);
                  auVar15._12_4_ = auVar12._12_4_ ^ *(uint *)(*pauVar6 + 0xc);
                  if (auVar15 == (undefined1  [16])0x0) goto LAB_1804e6b63;
                }
                uVar8 = uVar8 ^ 1 << ((byte)uVar16 & 0x1f);
              } while (uVar8 != 0);
              param_1 = pauStack_b8;
            }
          } while (param_2 != (undefined1 (*) [16])(*param_1 + uVar10));
        }
        if (((uVar10 != 0) &&
            (auVar12 = pcmpestrm(auVar12,*param_1,0xc,0x10,0x10),
            (auVar12._0_4_ & (1 << (sbyte)uVar3) - 1U) != 0)) &&
           (pauStack_78 = param_1, cVar2 = FUN_1804e96f0(appauStack_a8), cVar2 != '\0')) {
          return pauStack_78;
        }
      }
    }
  }
  return pauStack_b0;
}



/* ===== 1804e98b0 thunk_FUN_1804e6210 ===== */

void thunk_FUN_1804e6210(void)

{
  FUN_1804e6210();
  return;
}



/* ===== 1804e98c0 thunk_FUN_1804e6380 ===== */

longlong thunk_FUN_1804e6380(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char acStack_140 [280];
  
  if ((DAT_1809194cc & 4) == 0) {
    FUN_180540170(acStack_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      acStack_140[*param_3] = '\x01';
    }
    lVar3 = 0;
    if (param_2 == 0) {
      return -1;
    }
    while (acStack_140[*(byte *)(param_1 + lVar3)] == '\0') {
      lVar3 = lVar3 + 1;
      if (lVar3 == param_2) {
        return -1;
      }
    }
  }
  else {
    iVar2 = FUN_1804e8d80(param_2,param_4,
                          CONCAT31((uint3)(DAT_1809194cc >> 0xd),(char)(DAT_1809194cc >> 5)) &
                          0xffffff01);
    if (iVar2 == 2) {
      lVar3 = FUN_1804e77c0(param_1,param_2,param_3);
      return lVar3;
    }
    if (iVar2 == 1) {
      FUN_180540170(acStack_140,0,0x100);
      pbVar1 = param_3 + param_4;
      for (; param_3 != pbVar1; param_3 = param_3 + 1) {
        acStack_140[*param_3] = '\x01';
      }
      lVar3 = 0;
      if (param_2 == 0) {
        return -1;
      }
      do {
        if (acStack_140[*(byte *)(param_1 + lVar3)] != '\0') {
          return lVar3;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != param_2);
      return -1;
    }
    lVar4 = FUN_1804e8070(param_1,param_2,param_3);
    lVar3 = -1;
    if (lVar4 != param_2 + param_1) {
      lVar3 = lVar4 - param_1;
    }
  }
  return lVar3;
}



/* ===== 1804e98d0 FUN_1804e98d0 ===== */

longlong FUN_1804e98d0(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  char local_140 [280];
  
  if ((DAT_1809194cc & 4) == 0) {
    FUN_180540170(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    if (param_2 == 0) {
LAB_1804e9a04:
      param_2 = -1;
    }
    else {
      while (pbVar1 = (byte *)(param_1 + -1 + param_2), param_2 = param_2 + -1,
            local_140[*pbVar1] != '\0') {
        if (param_2 == 0) {
          return -1;
        }
      }
    }
  }
  else {
    iVar2 = FUN_1804e8d80(param_2,param_4,
                          CONCAT31((uint3)(DAT_1809194cc >> 0xd),(char)(DAT_1809194cc >> 5)) &
                          0xffffff01);
    if (iVar2 == 2) {
      lVar3 = FUN_1804e79f0(param_1,param_2,param_3);
      return lVar3;
    }
    if (iVar2 != 1) {
      lVar3 = FUN_1804e7130(param_1,param_2,param_3);
      return lVar3;
    }
    FUN_180540170(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    do {
      if (param_2 == 0) goto LAB_1804e9a04;
      pbVar1 = (byte *)(param_1 + -1 + param_2);
      param_2 = param_2 + -1;
    } while (local_140[*pbVar1] != '\0');
  }
  return param_2;
}



/* ===== 1804e9a40 FUN_1804e9a40 ===== */

longlong FUN_1804e9a40(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  char local_140 [280];
  
  if ((DAT_1809194cc & 4) == 0) {
    FUN_180540170(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    if (param_2 == 0) {
LAB_1804e9b74:
      param_2 = -1;
    }
    else {
      while (pbVar1 = (byte *)(param_1 + -1 + param_2), param_2 = param_2 + -1,
            local_140[*pbVar1] == '\0') {
        if (param_2 == 0) {
          return -1;
        }
      }
    }
  }
  else {
    iVar2 = FUN_1804e8d80(param_2,param_4,
                          CONCAT31((uint3)(DAT_1809194cc >> 0xd),(char)(DAT_1809194cc >> 5)) &
                          0xffffff01);
    if (iVar2 == 2) {
      lVar3 = FUN_1804e7c20(param_1,param_2,param_3);
      return lVar3;
    }
    if (iVar2 != 1) {
      lVar3 = FUN_1804e7370(param_1,param_2,param_3);
      return lVar3;
    }
    FUN_180540170(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    do {
      if (param_2 == 0) goto LAB_1804e9b74;
      pbVar1 = (byte *)(param_1 + -1 + param_2);
      param_2 = param_2 + -1;
    } while (local_140[*pbVar1] == '\0');
  }
  return param_2;
}



/* ===== 1804e9bb0 thunk_FUN_1804e7010 ===== */

undefined1 (*) [32]
thunk_FUN_1804e7010(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 (*pauVar12) [32];
  undefined1 (*pauVar13) [32];
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  undefined1 (*pauVar17) [32];
  undefined1 (*pauVar18) [32];
  uint uVar19;
  undefined1 (*pauVar20) [32];
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  
  uVar21 = (longlong)param_2 - (longlong)param_1;
  pauVar20 = param_2;
  if (((uVar21 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar21 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      auVar24 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        pauVar3 = pauVar20 + -1;
        pauVar4 = pauVar20 + -1;
        pauVar5 = pauVar20 + -1;
        pauVar6 = pauVar20 + -1;
        pauVar7 = pauVar20 + -1;
        pauVar8 = pauVar20 + -1;
        pauVar9 = pauVar20 + -1;
        pauVar10 = pauVar20 + -1;
        pauVar11 = pauVar20 + -1;
        pauVar12 = pauVar20 + -1;
        pauVar13 = pauVar20 + -1;
        pauVar14 = pauVar20 + -1;
        pauVar15 = pauVar20 + -1;
        pauVar16 = pauVar20 + -1;
        pauVar17 = pauVar20 + -1;
        pauVar18 = pauVar20 + -1;
        pauVar20 = (undefined1 (*) [32])(pauVar20[-1] + 0x10);
        auVar23[0] = -((*pauVar3)[0x10] == auVar24[0]);
        auVar23[1] = -((*pauVar4)[0x11] == auVar24[1]);
        auVar23[2] = -((*pauVar5)[0x12] == auVar24[2]);
        auVar23[3] = -((*pauVar6)[0x13] == auVar24[3]);
        auVar23[4] = -((*pauVar7)[0x14] == auVar24[4]);
        auVar23[5] = -((*pauVar8)[0x15] == auVar24[5]);
        auVar23[6] = -((*pauVar9)[0x16] == auVar24[6]);
        auVar23[7] = -((*pauVar10)[0x17] == auVar24[7]);
        auVar23[8] = -((*pauVar11)[0x18] == auVar24[8]);
        auVar23[9] = -((*pauVar12)[0x19] == auVar24[9]);
        auVar23[10] = -((*pauVar13)[0x1a] == auVar24[10]);
        auVar23[0xb] = -((*pauVar14)[0x1b] == auVar24[0xb]);
        auVar23[0xc] = -((*pauVar15)[0x1c] == auVar24[0xc]);
        auVar23[0xd] = -((*pauVar16)[0x1d] == auVar24[0xd]);
        auVar23[0xe] = -((*pauVar17)[0x1e] == auVar24[0xe]);
        auVar23[0xf] = -((*pauVar18)[0x1f] == auVar24[0xf]);
        uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar19 = 0x1f;
          if (uVar1 != 0) {
            for (; uVar1 >> uVar19 == 0; uVar19 = uVar19 - 1) {
            }
          }
          return (undefined1 (*) [32])(*pauVar20 + uVar19);
        }
      } while (pauVar20 != (undefined1 (*) [32])((longlong)param_2 - (uVar21 & 0xfffffffffffffff0)))
      ;
    }
  }
  else {
    auVar24 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar25._16_16_ = auVar24;
    auVar25._0_16_ = auVar24;
    do {
      auVar2 = vpcmpeqb_avx2(auVar25,pauVar20[-1]);
      pauVar20 = pauVar20 + -1;
      uVar19 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
      if (uVar19 != 0) goto LAB_1804e70c9;
    } while (pauVar20 != (undefined1 (*) [32])((longlong)param_2 - (uVar21 & 0xffffffffffffffe0)));
    uVar22 = (ulonglong)((uint)uVar21 & 0x1c);
    if ((uVar21 & 0x1c) != 0) {
      pauVar20 = (undefined1 (*) [32])((longlong)pauVar20 - uVar22);
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar22),*pauVar20);
      auVar25 = vpcmpeqb_avx2(auVar2,auVar25);
      auVar25 = vpand_avx2(auVar25,*(undefined1 (*) [32])(&DAT_180574630 + -uVar22));
      uVar19 = (uint)(SUB321(auVar25 >> 7,0) & 1) | (uint)(SUB321(auVar25 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar25 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar25 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar25 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar25 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar25 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar25 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar25 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar25 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar25 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar25 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar25 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar25 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar25 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar25 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar25 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar25 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar25 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar25 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar25 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar25 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar25 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar25 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar25 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar25 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar25 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar25 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar25 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar25 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar25 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar25[0x1f] >> 7) << 0x1f;
      if (uVar19 != 0) {
LAB_1804e70c9:
        return (undefined1 (*) [32])(*pauVar20 + (0x1f - LZCOUNT(uVar19)));
      }
    }
  }
  do {
    if (pauVar20 == param_1) {
      return param_2;
    }
    pauVar20 = (undefined1 (*) [32])(pauVar20[-1] + 0x1f);
  } while ((*pauVar20)[0] != param_3);
  return pauVar20;
}



/* ===== 1804e9bc0 thunk_FUN_1804e6c50 ===== */

undefined1 (*) [32]
thunk_FUN_1804e6c50(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar4 = *param_1;
      auVar9 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar8[0] = -((*param_1)[0] == auVar9[0]);
        auVar8[1] = -((*param_1)[1] == auVar9[1]);
        auVar8[2] = -((*param_1)[2] == auVar9[2]);
        auVar8[3] = -((*param_1)[3] == auVar9[3]);
        auVar8[4] = -((*param_1)[4] == auVar9[4]);
        auVar8[5] = -((*param_1)[5] == auVar9[5]);
        auVar8[6] = -((*param_1)[6] == auVar9[6]);
        auVar8[7] = -((*param_1)[7] == auVar9[7]);
        auVar8[8] = -((*param_1)[8] == auVar9[8]);
        auVar8[9] = -((*param_1)[9] == auVar9[9]);
        auVar8[10] = -((*param_1)[10] == auVar9[10]);
        auVar8[0xb] = -((*param_1)[0xb] == auVar9[0xb]);
        auVar8[0xc] = -((*param_1)[0xc] == auVar9[0xc]);
        auVar8[0xd] = -((*param_1)[0xd] == auVar9[0xd]);
        auVar8[0xe] = -((*param_1)[0xe] == auVar9[0xe]);
        auVar8[0xf] = -((*param_1)[0xf] == auVar9[0xf]);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar9 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar10._16_16_ = auVar9;
    auVar10._0_16_ = auVar9;
    do {
      auVar2 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_1804e6cf1;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar7),*param_1);
      auVar10 = vpcmpeqb_avx2(auVar2,auVar10);
      auVar10 = vpand_avx2(auVar10,*(undefined1 (*) [32])(&DAT_180574630 + -uVar7));
      uVar5 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar10[0x1f] >> 7) << 0x1f;
      if (uVar5 != 0) {
LAB_1804e6cf1:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}



/* ===== 1804e9bd0 thunk_FUN_1804e6d50 ===== */

undefined1 (*) [32]
thunk_FUN_1804e6d50(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar4 = *param_1;
      do {
        auVar8._0_2_ = -(ushort)(*(short *)*param_1 == param_3);
        auVar8._2_2_ = -(ushort)(*(short *)(*param_1 + 2) == param_3);
        auVar8._4_2_ = -(ushort)(*(short *)(*param_1 + 4) == param_3);
        auVar8._6_2_ = -(ushort)(*(short *)(*param_1 + 6) == param_3);
        auVar8._8_2_ = -(ushort)(*(short *)(*param_1 + 8) == param_3);
        auVar8._10_2_ = -(ushort)(*(short *)(*param_1 + 10) == param_3);
        auVar8._12_2_ = -(ushort)(*(short *)(*param_1 + 0xc) == param_3);
        auVar8._14_2_ = -(ushort)(*(short *)(*param_1 + 0xe) == param_3);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auVar8._14_2_ >> 7) & 1) << 0xe | auVar8._14_2_ & 0x8000;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar4 = *param_1;
    auVar8 = vpunpcklwd_avx(ZEXT416((uint)(int)param_3),ZEXT416((uint)(int)param_3));
    auVar8 = vpshufd_avx(auVar8,0);
    auVar9._16_16_ = auVar8;
    auVar9._0_16_ = auVar8;
    do {
      auVar2 = vpcmpeqw_avx2(auVar9,*param_1);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) goto LAB_1804e6df3;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar7),*param_1);
      auVar9 = vpcmpeqw_avx2(auVar2,auVar9);
      auVar9 = vpand_avx2(auVar9,*(undefined1 (*) [32])(&DAT_180574630 + -uVar7));
      uVar5 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar9 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar9 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar9[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0) {
LAB_1804e6df3:
        uVar3 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return (undefined1 (*) [32])(*param_1 + uVar3);
      }
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
  }
  for (; (param_1 != param_2 && (*(short *)*param_1 != param_3));
      param_1 = (undefined1 (*) [32])(*param_1 + 2)) {
  }
  return param_1;
}



/* ===== 1804e9be0 thunk_FUN_1804e6e50 ===== */

undefined1 (*) [32]
thunk_FUN_1804e6e50(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (((uVar6 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar6 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar4 = *param_1;
      do {
        auVar8._0_4_ = -(uint)(*(uint *)*param_1 == param_3);
        auVar8._4_4_ = -(uint)(*(uint *)(*param_1 + 4) == param_3);
        auVar8._8_4_ = -(uint)(*(uint *)(*param_1 + 8) == param_3);
        auVar8._12_4_ = -(uint)(*(uint *)(*param_1 + 0xc) == param_3);
        uVar1 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                (ushort)((byte)(auVar8._12_4_ >> 7) & 1) << 0xc |
                (ushort)((byte)(auVar8._12_4_ >> 0xf) & 1) << 0xd |
                (ushort)((byte)(auVar8._12_4_ >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auVar8._12_4_ >> 0x1f) << 0xf;
        if (uVar1 != 0) {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar5);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(uint *)*param_1 != param_3));
        param_1 = (undefined1 (*) [32])(*param_1 + 4)) {
    }
    return param_1;
  }
  auVar8 = vpshufd_avx(ZEXT416(param_3),0);
  auVar9._16_16_ = auVar8;
  auVar9._0_16_ = auVar8;
  puVar4 = *param_1;
  do {
    auVar2 = vpcmpeqd_avx2(auVar9,*param_1);
    uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f;
    if (uVar5 != 0) goto LAB_1804e6ec8;
    param_1 = param_1 + 1;
  } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0)));
  uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
  if ((uVar6 & 0x1c) != 0) {
    auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar7),*param_1);
    auVar9 = vpcmpeqd_avx2(auVar2,auVar9);
    auVar9 = vpand_avx2(auVar9,*(undefined1 (*) [32])(&DAT_180574630 + -uVar7));
    uVar5 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar9 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar9 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar9[0x1f] >> 7) << 0x1f;
    if (uVar5 != 0) {
LAB_1804e6ec8:
      uVar3 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      return (undefined1 (*) [32])(*param_1 + uVar3);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
  }
  return param_1;
}



/* ===== 1804e9bf0 thunk_FUN_1804e6f30 ===== */

undefined1 (*) [32]
thunk_FUN_1804e6f30(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_1809194cc & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_1809194cc & 4) != 0)) {
      puVar3 = *param_1;
      do {
        auVar7._0_8_ = -(ulonglong)(*(ulonglong *)*param_1 == param_3);
        auVar7._8_8_ = -(ulonglong)(*(ulonglong *)(*param_1 + 8) == param_3);
        uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)((byte)(auVar7._8_8_ >> 7) & 1) << 8 |
                (ushort)((byte)(auVar7._8_8_ >> 0xf) & 1) << 9 |
                (ushort)((byte)(auVar7._8_8_ >> 0x17) & 1) << 10 |
                (ushort)((byte)(auVar7._8_8_ >> 0x1f) & 1) << 0xb |
                (ushort)((byte)(auVar7._8_8_ >> 0x27) & 1) << 0xc |
                (ushort)((byte)(auVar7._8_8_ >> 0x2f) & 1) << 0xd |
                (ushort)((byte)(auVar7._8_8_ >> 0x37) & 1) << 0xe |
                (ushort)(byte)(auVar7._8_8_ >> 0x3f) << 0xf;
        if (uVar1 != 0) {
          uVar4 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar4);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar5 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(ulonglong *)*param_1 != param_3));
        param_1 = (undefined1 (*) [32])(*param_1 + 8)) {
    }
    return param_1;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3;
  auVar7 = vpunpcklqdq_avx(auVar11,auVar11);
  puVar3 = *param_1;
  do {
    lVar10 = auVar7._0_8_;
    auVar8._0_8_ = -(ulonglong)(lVar10 == *(longlong *)*param_1);
    lVar12 = auVar7._8_8_;
    auVar8._8_8_ = -(ulonglong)(lVar12 == *(longlong *)(*param_1 + 8));
    auVar8._16_8_ = -(ulonglong)(lVar10 == SUB248(*(undefined1 (*) [24])*param_1,0x10));
    auVar8._24_8_ = -(ulonglong)(lVar12 == *(longlong *)(*param_1 + 0x18));
    uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
            (uint)((byte)(auVar8._24_8_ >> 7) & 1) << 0x18 |
            (uint)((byte)(auVar8._24_8_ >> 0xf) & 1) << 0x19 |
            (uint)((byte)(auVar8._24_8_ >> 0x17) & 1) << 0x1a |
            (uint)((byte)(auVar8._24_8_ >> 0x1f) & 1) << 0x1b |
            (uint)((byte)(auVar8._24_8_ >> 0x27) & 1) << 0x1c |
            (uint)((byte)(auVar8._24_8_ >> 0x2f) & 1) << 0x1d |
            (uint)((byte)(auVar8._24_8_ >> 0x37) & 1) << 0x1e |
            (uint)(byte)(auVar8._24_8_ >> 0x3f) << 0x1f;
    if (uVar4 != 0) goto LAB_1804e6faa;
    param_1 = param_1 + 1;
  } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar5 & 0xffffffffffffffe0)));
  uVar6 = (ulonglong)((uint)uVar5 & 0x1c);
  if ((uVar5 & 0x1c) != 0) {
    auVar8 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar6),*param_1);
    auVar9._0_8_ = -(ulonglong)(auVar8._0_8_ == lVar10);
    auVar9._8_8_ = -(ulonglong)(auVar8._8_8_ == lVar12);
    auVar9._16_8_ = -(ulonglong)(auVar8._16_8_ == lVar10);
    auVar9._24_8_ = -(ulonglong)(auVar8._24_8_ == lVar12);
    auVar8 = vpand_avx2(auVar9,*(undefined1 (*) [32])(&DAT_180574630 + -uVar6));
    uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar8[0x1f] >> 7) << 0x1f;
    if (uVar4 != 0) {
LAB_1804e6faa:
      uVar2 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      return (undefined1 (*) [32])(*param_1 + uVar2);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + uVar6);
  }
  return param_1;
}



/* ===== 1804e9c00 FUN_1804e9c00 ===== */

float * FUN_1804e9c00(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = param_1;
  fVar2 = DAT_1805746e0;
  if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x20) {
    if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x10) goto joined_r0x0001804e9c4c;
  }
  else if ((DAT_1809194cc & 0x20) != 0) {
    pfVar1 = (float *)FUN_1804e8920(param_1,param_2,0);
    return pfVar1;
  }
  if ((DAT_1809194cc & 4) != 0) {
    pfVar1 = (float *)FUN_1804e8b10(param_1,param_2,0);
    return pfVar1;
  }
joined_r0x0001804e9c4c:
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (fVar2 < *param_1) {
      pfVar1 = param_1;
      fVar2 = *param_1;
    }
  }
  return pfVar1;
}



/* ===== 1804e9c70 thunk_FUN_1804e8250 ===== */

void thunk_FUN_1804e8250(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [32];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (uVar6 < 0x20) {
    if (uVar6 < 0x10) goto LAB_1804e8383;
  }
  else if ((DAT_1809194cc & 0x20) != 0) {
    auVar2 = *param_1;
    puVar4 = *param_1;
    auVar13 = auVar2;
    while (param_1 = param_1 + 1,
          param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xffffffffffffffe0))) {
      auVar2 = *param_1;
      auVar13 = vpminsd_avx2(auVar2,auVar13);
    }
    uVar7 = (ulonglong)((uint)uVar6 & 0x1c);
    if ((uVar6 & 0x1c) != 0) {
      auVar3 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar7),*param_1);
      auVar2 = vpblendvb_avx2(auVar2,auVar3,*(undefined1 (*) [32])(&DAT_180574630 + -uVar7));
      auVar13 = vpminsd_avx2(auVar2,auVar13);
      param_1 = (undefined1 (*) [32])(*param_1 + uVar7);
    }
    auVar2 = vpermq_avx2(auVar13,0x4e);
    auVar2 = vpminsd_avx2(auVar2,auVar13);
    auVar13 = vpshufd_avx2(auVar2,0x4e);
    auVar2 = vpminsd_avx2(auVar13,auVar2);
    auVar13 = vpshufd_avx2(auVar2,0xb1);
    auVar2 = vpminsd_avx2(auVar13,auVar2);
    iVar8 = auVar2._0_4_;
    if (param_1 == param_2) {
      return;
    }
    do {
      iVar5 = *(int *)*param_1;
      if (iVar8 <= *(int *)*param_1) {
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
    } while (param_1 != param_2);
    return;
  }
  if ((DAT_1809194cc & 4) != 0) {
    uVar9 = *(uint *)*param_1;
    uVar10 = *(uint *)(*param_1 + 4);
    uVar11 = *(uint *)(*param_1 + 8);
    uVar12 = *(uint *)(*param_1 + 0xc);
    puVar4 = *param_1;
    while (param_1 = (undefined1 (*) [32])(*param_1 + 0x10),
          param_1 != (undefined1 (*) [32])(puVar4 + (uVar6 & 0xfffffffffffffff0))) {
      auVar1 = *(undefined1 (*) [16])*param_1;
      iVar8 = auVar1._0_4_;
      uVar9 = (uint)(iVar8 < (int)uVar9) * iVar8 | (iVar8 >= (int)uVar9) * uVar9;
      iVar8 = auVar1._4_4_;
      uVar10 = (uint)(iVar8 < (int)uVar10) * iVar8 | (iVar8 >= (int)uVar10) * uVar10;
      iVar8 = auVar1._8_4_;
      uVar11 = (uint)(iVar8 < (int)uVar11) * iVar8 | (iVar8 >= (int)uVar11) * uVar11;
      iVar8 = auVar1._12_4_;
      uVar12 = (uint)(iVar8 < (int)uVar12) * iVar8 | (iVar8 >= (int)uVar12) * uVar12;
    }
    uVar9 = ((int)uVar11 < (int)uVar9) * uVar11 | ((int)uVar11 >= (int)uVar9) * uVar9;
    uVar10 = ((int)uVar12 < (int)uVar10) * uVar12 | ((int)uVar12 >= (int)uVar10) * uVar10;
    uVar9 = ((int)uVar10 < (int)uVar9) * uVar10 | ((int)uVar10 >= (int)uVar9) * uVar9;
    if (param_1 == param_2) {
      return;
    }
    do {
      uVar10 = *(uint *)*param_1;
      if ((int)uVar9 <= (int)*(uint *)*param_1) {
        uVar10 = uVar9;
      }
      uVar9 = uVar10;
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
    } while (param_1 != param_2);
    return;
  }
LAB_1804e8383:
  iVar8 = *(int *)*param_1;
  while (iVar5 = iVar8, param_1 = (undefined1 (*) [32])(*param_1 + 4), param_1 != param_2) {
    iVar8 = *(int *)*param_1;
    if (iVar5 <= *(int *)*param_1) {
      iVar8 = iVar5;
    }
  }
  return;
}



/* ===== 1804e9c80 thunk_FUN_1804e83b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1804e83b0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 (*pauVar3) [32];
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [32];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  
  uVar7 = (longlong)param_2 - (longlong)param_1;
  if (uVar7 < 0x20) {
    if (uVar7 < 0x10) goto LAB_1804e858c;
  }
  else if ((DAT_1809194cc & 0x20) != 0) {
    puVar4 = *param_1;
    auVar2 = vpsubq_avx2(*param_1,_DAT_180574680);
    auVar14 = auVar2;
    while (param_1 = param_1 + 1,
          param_1 != (undefined1 (*) [32])(puVar4 + (uVar7 & 0xffffffffffffffe0))) {
      auVar2 = vpsubq_avx2(*param_1,_DAT_180574680);
      auVar1 = vpcmpgtq_avx2(auVar14,auVar2);
      auVar14 = vpblendvb_avx2(auVar14,auVar2,auVar1);
    }
    uVar8 = (ulonglong)((uint)uVar7 & 0x1c);
    if ((uVar7 & 0x1c) != 0) {
      auVar1 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar8),*param_1);
      auVar1 = vpsubq_avx2(auVar1,_DAT_180574680);
      auVar2 = vpblendvb_avx2(auVar2,auVar1,*(undefined1 (*) [32])(&DAT_180574630 + -uVar8));
      auVar1 = vpcmpgtq_avx2(auVar14,auVar2);
      auVar14 = vpblendvb_avx2(auVar14,auVar2,auVar1);
      param_1 = (undefined1 (*) [32])(*param_1 + uVar8);
    }
    auVar10 = vpsrldq_avx(auVar14._0_16_,8);
    uVar7 = auVar14._0_8_;
    if ((longlong)auVar10._0_8_ < (longlong)auVar14._0_8_) {
      uVar7 = auVar10._0_8_;
    }
    auVar10 = vpsrldq_avx(auVar14._16_16_,8);
    if ((longlong)auVar14._16_8_ < (longlong)uVar7) {
      uVar7 = auVar14._16_8_;
    }
    if ((longlong)auVar10._0_8_ < (longlong)uVar7) {
      uVar7 = auVar10._0_8_;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar7;
    auVar10 = vpunpcklqdq_avx(auVar10,auVar10);
    uVar7 = auVar10._0_8_ + 0x8000000000000000;
    if (param_1 == param_2) {
      return;
    }
    do {
      uVar8 = *(ulonglong *)*param_1;
      if (uVar7 <= *(ulonglong *)*param_1) {
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
      param_1 = (undefined1 (*) [32])(*param_1 + 8);
    } while (param_1 != param_2);
    return;
  }
  if ((DAT_1809194cc & 4) != 0) {
    auVar13._0_8_ = *(longlong *)*param_1 - _DAT_180574650;
    auVar13._8_8_ = *(longlong *)(*param_1 + 8) - _UNK_180574658;
    pauVar3 = param_1;
    while( true ) {
      pauVar6 = (undefined1 (*) [32])(*pauVar3 + 0x10);
      lVar9 = auVar13._0_8_;
      lVar5 = auVar13._8_8_;
      if (pauVar6 == (undefined1 (*) [32])(*param_1 + (uVar7 & 0xfffffffffffffff0))) break;
      auVar12._0_8_ = *(longlong *)*pauVar6 - _DAT_180574650;
      auVar12._8_8_ = *(longlong *)(*pauVar3 + 0x18) - _UNK_180574658;
      auVar11._0_8_ = -(ulonglong)(auVar12._0_8_ < lVar9);
      auVar11._8_8_ = -(ulonglong)(auVar12._8_8_ < lVar5);
      auVar13 = pblendvb(auVar13,auVar12,auVar11);
      pauVar3 = pauVar6;
    }
    if (lVar9 <= lVar5) {
      lVar5 = lVar9;
    }
    uVar7 = lVar5 + 0x8000000000000000;
    if (pauVar6 == param_2) {
      return;
    }
    do {
      uVar8 = *(ulonglong *)*pauVar6;
      if (uVar7 <= *(ulonglong *)*pauVar6) {
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
      pauVar6 = (undefined1 (*) [32])(*pauVar6 + 8);
    } while (pauVar6 != param_2);
    return;
  }
LAB_1804e858c:
  uVar7 = *(ulonglong *)*param_1;
  while (uVar8 = uVar7, param_1 = (undefined1 (*) [32])(*param_1 + 8), param_1 != param_2) {
    uVar7 = *(ulonglong *)*param_1;
    if (uVar8 <= *(ulonglong *)*param_1) {
      uVar7 = uVar8;
    }
  }
  return;
}



/* ===== 1804e9c90 FUN_1804e9c90 ===== */

float * FUN_1804e9c90(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = param_1;
  fVar2 = DAT_1808acd0c;
  if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x20) {
    if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x10) goto joined_r0x0001804e9cdc;
  }
  else if ((DAT_1809194cc & 0x20) != 0) {
    pfVar1 = (float *)FUN_1804e85c0(param_1,param_2,0);
    return pfVar1;
  }
  if ((DAT_1809194cc & 4) != 0) {
    pfVar1 = (float *)FUN_1804e87b0(param_1,param_2,0);
    return pfVar1;
  }
joined_r0x0001804e9cdc:
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (*param_1 < fVar2) {
      pfVar1 = param_1;
      fVar2 = *param_1;
    }
  }
  return pfVar1;
}



/* ===== 1804e9d00 thunk_FUN_1804e8c80 ===== */

ulonglong thunk_FUN_1804e8c80(longlong param_1,longlong param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  
  uVar6 = 0;
  if ((DAT_1809194cc & 0x20) == 0) {
    if ((DAT_1809194cc & 4) == 0) goto joined_r0x0001804e8d4b;
    uVar8 = param_3 * 2 & 0xfffffffffffffff0;
    if (uVar8 != 0) {
      do {
        pcVar1 = (char *)(param_1 + uVar6);
        auVar2 = *(undefined1 (*) [16])(param_2 + uVar6);
        auVar10[0] = -(*pcVar1 == auVar2[0]);
        auVar10[1] = -(pcVar1[1] == auVar2[1]);
        auVar10[2] = -(pcVar1[2] == auVar2[2]);
        auVar10[3] = -(pcVar1[3] == auVar2[3]);
        auVar10[4] = -(pcVar1[4] == auVar2[4]);
        auVar10[5] = -(pcVar1[5] == auVar2[5]);
        auVar10[6] = -(pcVar1[6] == auVar2[6]);
        auVar10[7] = -(pcVar1[7] == auVar2[7]);
        auVar10[8] = -(pcVar1[8] == auVar2[8]);
        auVar10[9] = -(pcVar1[9] == auVar2[9]);
        auVar10[10] = -(pcVar1[10] == auVar2[10]);
        auVar10[0xb] = -(pcVar1[0xb] == auVar2[0xb]);
        auVar10[0xc] = -(pcVar1[0xc] == auVar2[0xc]);
        auVar10[0xd] = -(pcVar1[0xd] == auVar2[0xd]);
        auVar10[0xe] = -(pcVar1[0xe] == auVar2[0xe]);
        auVar10[0xf] = -(pcVar1[0xf] == auVar2[0xf]);
        uVar7 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
        if (uVar7 != 0) {
          uVar3 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          return uVar6 + uVar3 >> 1;
        }
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != uVar8);
    }
  }
  else {
    uVar8 = param_3 * 2;
    if ((uVar8 & 0xffffffffffffffe0) != 0) {
      do {
        auVar4 = vpcmpeqb_avx2(*(undefined1 (*) [32])(uVar6 + param_2),
                               *(undefined1 (*) [32])(uVar6 + param_1));
        uVar7 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
        if (uVar7 != 0) goto LAB_1804e8d64;
        uVar6 = uVar6 + 0x20;
      } while (uVar6 != (uVar8 & 0xffffffffffffffe0));
    }
    uVar9 = (ulonglong)((uint)uVar8 & 0x1c);
    if ((uVar8 & 0x1c) != 0) {
      auVar4 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar9),
                               *(undefined1 (*) [32])(uVar6 + param_2));
      auVar5 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_180574630 + -uVar9),
                               *(undefined1 (*) [32])(uVar6 + param_1));
      auVar4 = vpcmpeqb_avx2(auVar5,auVar4);
      uVar7 = ~((uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f);
      if (uVar7 != 0) {
LAB_1804e8d64:
        uVar3 = 0;
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        return uVar6 + uVar3 >> 1;
      }
      uVar6 = uVar6 + uVar9;
    }
  }
  uVar6 = uVar6 >> 1;
joined_r0x0001804e8d4b:
  for (; (uVar6 != param_3 && (*(short *)(param_1 + uVar6 * 2) == *(short *)(param_2 + uVar6 * 2)));
      uVar6 = uVar6 + 1) {
  }
  return uVar6;
}



/* ===== 1804e9d10 FUN_1804e9d10 ===== */

ulonglong * FUN_1804e9d10(ulonglong *param_1,ulonglong *param_2,byte param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar3 = param_1;
  puVar2 = param_1;
  if ((((byte)DAT_1809194cc & 4) != 0) && (7 < (ulonglong)((longlong)param_2 - (longlong)param_1)))
  {
    puVar3 = (ulonglong *)
             (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U) + (longlong)param_1);
    auVar7 = pshufb(ZEXT116(param_3),ZEXT816(0));
    do {
      uVar1 = *param_1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar1;
      param_1 = param_1 + 1;
      auVar6[0] = -((char)uVar1 == auVar7[0]);
      auVar6[1] = -((char)(uVar1 >> 8) == auVar7[1]);
      auVar6[2] = -((char)(uVar1 >> 0x10) == auVar7[2]);
      auVar6[3] = -((char)(uVar1 >> 0x18) == auVar7[3]);
      auVar6[4] = -((char)(uVar1 >> 0x20) == auVar7[4]);
      auVar6[5] = -((char)(uVar1 >> 0x28) == auVar7[5]);
      auVar6[6] = -((char)(uVar1 >> 0x30) == auVar7[6]);
      auVar6[7] = -((char)(uVar1 >> 0x38) == auVar7[7]);
      auVar6[8] = -(auVar7[8] == '\0');
      auVar6[9] = -(auVar7[9] == '\0');
      auVar6[10] = -(auVar7[10] == '\0');
      auVar6[0xb] = -(auVar7[0xb] == '\0');
      auVar6[0xc] = -(auVar7[0xc] == '\0');
      auVar6[0xd] = -(auVar7[0xd] == '\0');
      auVar6[0xe] = -(auVar7[0xe] == '\0');
      auVar6[0xf] = -(auVar7[0xf] == '\0');
      uVar1 = (ulonglong)
              (byte)(SUB161(auVar6 >> 7,0) & 1 | (SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar6 >> 0x17,0) & 1) << 2 | (SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar6 >> 0x27,0) & 1) << 4 | (SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar6 >> 0x37,0) & 1) << 6 | SUB161(auVar6 >> 0x3f,0) << 7);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(&DAT_180572120 + uVar1 * 8);
      auVar6 = pshufb(auVar5,auVar4);
      *puVar2 = auVar6._0_8_;
      puVar2 = (ulonglong *)((longlong)puVar2 + (ulonglong)(byte)(&DAT_180572920)[uVar1]);
    } while (param_1 != puVar3);
  }
  for (; puVar3 != param_2; puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
    if ((byte)*puVar3 != param_3) {
      *(byte *)puVar2 = (byte)*puVar3;
      puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    }
  }
  return puVar2;
}



/* ===== 1804e9dc0 FUN_1804e9dc0 ===== */

undefined1 (*) [32]
FUN_1804e9dc0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 auVar1 [32];
  uint uVar2;
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  pauVar4 = param_1;
  if (((DAT_1809194cc & 0x20) == 0) || (uVar5 < 0x20)) {
    pauVar6 = param_1;
    if (((DAT_1809194cc & 4) != 0) && (0xf < uVar5)) {
      pauVar6 = (undefined1 (*) [32])(*param_1 + (uVar5 & 0xfffffffffffffff0));
      pauVar3 = param_2;
      do {
        auVar8 = *(undefined1 (*) [16])*param_1;
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
        auVar7._0_4_ = -(uint)(auVar8._0_4_ == param_3);
        auVar7._4_4_ = -(uint)(auVar8._4_4_ == param_3);
        auVar7._8_4_ = -(uint)(auVar8._8_4_ == param_3);
        auVar7._12_4_ = -(uint)(auVar8._12_4_ == param_3);
        uVar2 = movmskps((int)pauVar3,auVar7);
        pauVar3 = (undefined1 (*) [32])(ulonglong)uVar2;
        auVar8 = pshufb(auVar8,*(undefined1 (*) [16])(&DAT_180573b20 + (longlong)pauVar3 * 0x10));
        *(undefined1 (*) [16])*pauVar4 = auVar8;
        pauVar4 = (undefined1 (*) [32])(*pauVar4 + (byte)pauVar3[0xc02b9e1][0]);
      } while (param_1 != pauVar6);
    }
  }
  else {
    auVar8 = vpshufd_avx(ZEXT416(param_3),0);
    auVar9._16_16_ = auVar8;
    auVar9._0_16_ = auVar8;
    pauVar6 = (undefined1 (*) [32])(*param_1 + (uVar5 & 0xffffffffffffffe0));
    do {
      auVar1 = vpcmpeqd_avx2(auVar9,*param_1);
      uVar2 = vmovmskps_avx(auVar1);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(&DAT_180573c30 + (ulonglong)uVar2 * 8);
      auVar1 = vpmovzxbd_avx2(auVar8);
      auVar1 = vpermd_avx2(auVar1,*param_1);
      *pauVar4 = auVar1;
      param_1 = param_1 + 1;
      pauVar4 = (undefined1 (*) [32])(*pauVar4 + (byte)(&DAT_180574430)[uVar2]);
    } while (param_1 != pauVar6);
  }
  for (; pauVar6 != param_2; pauVar6 = (undefined1 (*) [32])(*pauVar6 + 4)) {
    if (*(uint *)*pauVar6 != param_3) {
      *(uint *)*pauVar4 = *(uint *)*pauVar6;
      pauVar4 = (undefined1 (*) [32])(*pauVar4 + 4);
    }
  }
  return pauVar4;
}



/* ===== 1804e9ed0 FUN_1804e9ed0 ===== */

void FUN_1804e9ed0(void)

{
  FUN_1804e8e10();
  return;
}



/* ===== 1804e9ee0 FUN_1804e9ee0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804e9ee0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  undefined1 auVar6 [32];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  
  auVar6 = _DAT_180574700;
  uVar7 = (longlong)param_2 - (longlong)param_1;
  if ((0x3f < uVar7) && (((byte)DAT_1809194cc & 0x20) != 0)) {
    puVar5 = *param_1;
    do {
      auVar3 = vpermd_avx2(auVar6,*param_1);
      auVar4 = vpermd_avx2(auVar6,param_2[-1]);
      param_2 = param_2 + -1;
      *param_1 = auVar4;
      param_1 = param_1 + 1;
      *param_2 = auVar3;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar7 >> 1 & 0x7fffffffffffffe0)));
  }
  uVar7 = (longlong)param_2 - (longlong)param_1;
  if ((0x1f < uVar7) && (((byte)DAT_1809194cc & 4) != 0)) {
    puVar5 = *param_1;
    do {
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x10);
      auVar8._4_4_ = *(undefined4 *)(*param_1 + 8);
      auVar8._0_4_ = *(undefined4 *)(*param_1 + 0xc);
      auVar8._8_4_ = *(undefined4 *)(*param_1 + 4);
      auVar8._12_4_ = *(undefined4 *)*param_1;
      auVar1 = *(undefined1 (*) [16])*param_2;
      *(int *)*param_1 = auVar1._12_4_;
      *(int *)(*param_1 + 4) = auVar1._8_4_;
      *(int *)(*param_1 + 8) = auVar1._4_4_;
      *(int *)(*param_1 + 0xc) = auVar1._0_4_;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      *(undefined1 (*) [16])*param_2 = auVar8;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar7 >> 1 & 0x7ffffffffffffff0)));
  }
  if (param_1 != param_2) {
    do {
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x1c);
      if (param_1 == param_2) {
        return;
      }
      uVar2 = *(undefined4 *)*param_1;
      *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
      param_1 = (undefined1 (*) [32])(*param_1 + 4);
      *(undefined4 *)*param_2 = uVar2;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 1804e9fc0 FUN_1804e9fc0 ===== */

void FUN_1804e9fc0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if ((0x3f < uVar6) && (((byte)DAT_1809194cc & 0x20) != 0)) {
    puVar5 = *param_1;
    do {
      auVar3 = vpermq_avx2(*param_1,0x1b);
      auVar4 = vpermq_avx2(param_2[-1],0x1b);
      param_2 = param_2 + -1;
      *param_1 = auVar4;
      param_1 = param_1 + 1;
      *param_2 = auVar3;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar6 >> 1 & 0x7fffffffffffffe0)));
  }
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if ((0x1f < uVar6) && (((byte)DAT_1809194cc & 4) != 0)) {
    puVar5 = *param_1;
    do {
      auVar1 = *(undefined1 (*) [16])*param_1;
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x10);
      auVar8._0_8_ = auVar1._8_8_;
      auVar8._8_4_ = auVar1._0_4_;
      auVar8._12_4_ = auVar1._4_4_;
      auVar1 = *(undefined1 (*) [16])*param_2;
      auVar7._0_8_ = auVar1._8_8_;
      auVar7._8_4_ = auVar1._0_4_;
      auVar7._12_4_ = auVar1._4_4_;
      *(undefined1 (*) [16])*param_1 = auVar7;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      *(undefined1 (*) [16])*param_2 = auVar8;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar6 >> 1 & 0x7ffffffffffffff0)));
  }
  if (param_1 != param_2) {
    do {
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x18);
      if (param_1 == param_2) {
        return;
      }
      uVar2 = *(undefined8 *)*param_1;
      *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
      param_1 = (undefined1 (*) [32])(*param_1 + 8);
      *(undefined8 *)*param_2 = uVar2;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== 1804ea090 FUN_1804ea090 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ea090(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_258;
  do {
    while( true ) {
      uVar3 = param_2 - param_1;
      uVar1 = param_3 - param_2;
      if (uVar1 < uVar3) break;
      if (uVar3 == 0) {
        return;
      }
      if ((uVar3 < 0x201) && ((uVar3 < 0x81 || (uVar3 * 2 <= uVar1)))) {
        FUN_180540530(local_238,param_1,uVar3);
        FUN_180540530(param_1,param_2,uVar1);
        param_1 = uVar1 + param_1;
        uVar1 = uVar3;
LAB_1804ea1e7:
        FUN_180540530(param_1,local_238,uVar1);
        return;
      }
      lVar2 = param_3 - uVar3;
      if (uVar1 < uVar3 * 2) {
        FUN_1804ea240();
        param_3 = lVar2;
      }
      else {
        FUN_1804e9780(lVar2,param_3,param_1,lVar2 - uVar3);
        param_3 = lVar2 - uVar3;
      }
    }
    if (uVar1 == 0) {
      return;
    }
    if ((uVar1 < 0x201) && ((uVar1 < 0x81 || (uVar1 * 2 <= uVar3)))) {
      FUN_180540530(local_238,param_2,uVar1);
      FUN_180540530(uVar1 + param_1,param_1,uVar3);
      goto LAB_1804ea1e7;
    }
    if (uVar3 < uVar1 * 2) {
      FUN_1804ea240(param_2,param_3,param_1);
      param_1 = uVar1 + param_1;
    }
    else {
      FUN_1804e9780(param_2,param_3,uVar1 + param_1,param_1);
      param_1 = param_1 + uVar1 * 2;
    }
  } while( true );
}



/* ===== 1804ea220 thunk_FUN_1804e92d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
thunk_FUN_1804e92d0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16]
                   ,ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_180919500 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    param_2 = param_1;
  }
  else if (param_4 == 1) {
    param_2 = (undefined1 (*) [16])FUN_1804e6c50(param_1,param_2,(*param_3)[0]);
  }
  else {
    uVar3 = (longlong)param_2 - (longlong)param_1;
    if (param_4 <= uVar3) {
      if ((((byte)DAT_1809194cc & 4) == 0) || (uVar3 < 0x10)) {
        pauVar5 = (undefined1 (*) [16])((longlong)param_1 + uVar3 + (1 - param_4));
        if (param_1 != pauVar5) {
          do {
            if ((*param_1)[0] == (*param_3)[0]) {
              uVar3 = 1;
              while ((*param_1)[uVar3] == (*param_3)[uVar3]) {
                uVar3 = uVar3 + 1;
                if (uVar3 == param_4) {
                  return param_1;
                }
              }
            }
            param_1 = (undefined1 (*) [16])(*param_1 + 1);
          } while (param_1 != pauVar5);
        }
        return param_2;
      }
      if (param_4 < 0x11) {
        uVar6 = (uint)param_4;
        uVar7 = 0x10 < uVar6;
        FUN_180540530(auStack_58,param_3,param_4);
        auVar1 = auStack_58;
        do {
          iVar2 = pcmpestri(auStack_58,*param_1,0xc,uVar6,0x10);
          if ((bool)uVar7) {
            param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
            if (iVar2 <= (int)(0x10 - uVar6)) {
              return param_1;
            }
          }
          else {
            param_1 = param_1 + 1;
          }
          uVar7 = param_1 < param_2 + -1;
        } while (param_1 <= param_2 + -1);
        bVar8 = param_2 < param_1;
        lVar4 = (longlong)param_2 - (longlong)param_1;
        if (lVar4 != 0) {
          FUN_180540530(auStack_58,param_1,lVar4);
          iVar2 = pcmpestri(auVar1,auStack_58,0xc,uVar6,(int)lVar4);
          if (bVar8) {
            return (undefined1 (*) [16])(*param_1 + iVar2);
          }
        }
      }
      else {
        auVar1 = *param_3;
        bVar8 = CARRY8((longlong)param_1 - param_4,uVar3);
        pauVar5 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar3);
        do {
          iVar2 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
          if (bVar8) {
            if (iVar2 == 0) {
LAB_1804e9429:
              iVar2 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
              if (iVar2 == 0) {
                return param_1;
              }
            }
            else {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar2);
              if (pauVar5 < param_1) break;
              auVar9._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
              auVar9._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
              auVar9._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
              auVar9._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
              if (auVar9 == (undefined1  [16])0x0) goto LAB_1804e9429;
            }
            param_1 = (undefined1 (*) [16])(*param_1 + 1);
          }
          else {
            param_1 = param_1 + 1;
          }
          bVar8 = param_1 < pauVar5;
        } while (param_1 <= pauVar5);
      }
    }
  }
  return param_2;
}



/* ===== 1804ea230 thunk_FUN_1804e94c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
thunk_FUN_1804e94c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16]
                   ,longlong param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_180919500 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    param_2 = param_1;
  }
  else if (param_4 == 1) {
    param_2 = (undefined1 (*) [16])FUN_1804e6d50(param_1,param_2,*(undefined2 *)*param_3);
  }
  else {
    uVar5 = (longlong)param_2 - (longlong)param_1;
    uVar8 = param_4 * 2;
    if (uVar8 <= uVar5) {
      if (((DAT_1809194cc & 0x20) != 0) && (0x1f < uVar5)) {
        pauVar3 = (undefined1 (*) [16])FUN_1804e9050(param_1,param_2,param_3,uVar8);
        return pauVar3;
      }
      if (((DAT_1809194cc & 4) == 0) || (uVar5 < 0x10)) {
        pauVar3 = (undefined1 (*) [16])((longlong)param_1 + uVar5 + param_4 * -2 + 2);
        if (param_1 != pauVar3) {
          do {
            if (*(short *)*param_1 == *(short *)*param_3) {
              lVar6 = 1;
              while (*(short *)(*param_1 + lVar6 * 2) == *(short *)(*param_3 + lVar6 * 2)) {
                lVar6 = lVar6 + 1;
                if (lVar6 == param_4) {
                  return param_1;
                }
              }
            }
            param_1 = (undefined1 (*) [16])(*param_1 + 2);
          } while (param_1 != pauVar3);
        }
        return param_2;
      }
      if (uVar8 < 0x11) {
        uVar2 = (uint)param_4;
        uVar9 = 8 < uVar2;
        FUN_180540530(auStack_58,param_3,uVar8);
        auVar1 = auStack_58;
        do {
          iVar4 = pcmpestri(auStack_58,*param_1,0xd,uVar2,8);
          if ((bool)uVar9) {
            param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
            if (iVar4 <= (int)(8 - uVar2)) {
              return param_1;
            }
          }
          else {
            param_1 = param_1 + 1;
          }
          uVar9 = param_1 < param_2 + -1;
        } while (param_1 <= param_2 + -1);
        uVar8 = (longlong)param_2 - (longlong)param_1;
        if (uVar8 != 0) {
          bVar10 = (uVar8 & 1) != 0;
          FUN_180540530(auStack_58,param_1);
          iVar4 = pcmpestri(auVar1,auStack_58,0xd,uVar2,(int)(uVar8 >> 1));
          if (bVar10) {
            return (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
          }
        }
      }
      else {
        auVar1 = *param_3;
        uVar7 = (longlong)param_1 + param_4 * -2;
        bVar10 = CARRY8(uVar7,uVar5);
        pauVar3 = (undefined1 (*) [16])(uVar7 + uVar5);
        do {
          iVar4 = pcmpestri(auVar1,*param_1,0xd,8,8);
          if (bVar10) {
            if (iVar4 == 0) {
LAB_1804e964b:
              iVar4 = memcmp(param_1 + 1,param_3 + 1,uVar8 - 0x10);
              if (iVar4 == 0) {
                return param_1;
              }
            }
            else {
              param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
              if (pauVar3 < param_1) break;
              auVar11._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
              auVar11._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
              auVar11._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
              auVar11._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
              if (auVar11 == (undefined1  [16])0x0) goto LAB_1804e964b;
            }
            param_1 = (undefined1 (*) [16])(*param_1 + 2);
          }
          else {
            param_1 = param_1 + 1;
          }
          bVar10 = param_1 < pauVar3;
        } while (param_1 <= pauVar3);
      }
    }
  }
  return param_2;
}



/* ===== 1804ea240 FUN_1804ea240 ===== */

void FUN_1804ea240(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((0x1f < (ulonglong)((longlong)param_2 - (longlong)param_1)) &&
     (((byte)DAT_1809194cc & 0x20) != 0)) {
    puVar9 = (undefined8 *)
             (((longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0U) + (longlong)param_1);
    do {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      uVar5 = *param_1;
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar8 = param_1[3];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      *param_3 = uVar5;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      param_3[3] = uVar8;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    } while (param_1 != puVar9);
  }
  if ((0xf < (ulonglong)((longlong)param_2 - (longlong)param_1)) && (((byte)DAT_1809194cc & 4) != 0)
     ) {
    puVar9 = (undefined8 *)
             (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U) + (longlong)param_1);
    do {
      uVar2 = param_3[1];
      uVar3 = *param_1;
      uVar4 = param_1[1];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1 = param_1 + 2;
      *param_3 = uVar3;
      param_3[1] = uVar4;
      param_3 = param_3 + 2;
    } while (param_1 != puVar9);
  }
  if (7 < (ulonglong)((longlong)param_2 - (longlong)param_1)) {
    puVar9 = (undefined8 *)
             (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U) + (longlong)param_1);
    do {
      uVar2 = *param_1;
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      *param_3 = uVar2;
      param_3 = param_3 + 1;
    } while (param_1 != puVar9);
  }
  for (; param_1 != param_2; param_1 = (undefined8 *)((longlong)param_1 + 1)) {
    uVar1 = *(undefined1 *)param_1;
    *(undefined1 *)param_1 = *(undefined1 *)param_3;
    *(undefined1 *)param_3 = uVar1;
    param_3 = (undefined8 *)((longlong)param_3 + 1);
  }
  return;
}



/* ===== 1804ea320 FUN_1804ea320 ===== */

undefined1 (*) [32] FUN_1804ea320(undefined8 param_1,undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 *puVar3;
  undefined1 (*pauVar4) [32];
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  pauVar7 = (undefined1 (*) [32])FUN_1804e6110();
  if (pauVar7 != param_2) {
    uVar10 = (ulonglong)DAT_1809194cc;
    pauVar8 = (undefined1 (*) [32])(*pauVar7 + 4);
    uVar11 = (longlong)param_2 - (longlong)pauVar8;
    if (((DAT_1809194cc & 0x20) == 0) || (uVar11 < 0x20)) {
      pauVar12 = pauVar8;
      if (((DAT_1809194cc & 4) != 0) && (0xf < uVar11)) {
        pauVar12 = (undefined1 (*) [32])(*pauVar8 + (uVar11 & 0xfffffffffffffff0));
        pauVar7 = pauVar8;
        do {
          auVar14 = *(undefined1 (*) [16])*pauVar8;
          pauVar4 = pauVar8 + -1;
          puVar3 = *pauVar8;
          puVar5 = *pauVar8;
          puVar6 = *pauVar8;
          pauVar8 = (undefined1 (*) [32])(*pauVar8 + 0x10);
          auVar13._0_4_ = -(uint)(*(int *)(*pauVar4 + 0x1c) == auVar14._0_4_);
          auVar13._4_4_ = -(uint)(*(int *)puVar3 == auVar14._4_4_);
          auVar13._8_4_ = -(uint)(*(int *)(puVar5 + 4) == auVar14._8_4_);
          auVar13._12_4_ = -(uint)(*(int *)(puVar6 + 8) == auVar14._12_4_);
          uVar9 = movmskps((int)uVar10,auVar13);
          uVar10 = (ulonglong)uVar9;
          auVar14 = pshufb(auVar14,*(undefined1 (*) [16])(&DAT_180573b20 + uVar10 * 0x10));
          *(undefined1 (*) [16])*pauVar7 = auVar14;
          pauVar7 = (undefined1 (*) [32])(*pauVar7 + (byte)(&DAT_180573c20)[uVar10]);
        } while (pauVar8 != pauVar12);
        pauVar7 = (undefined1 (*) [32])(pauVar7[-1] + 0x1c);
      }
    }
    else {
      puVar3 = *pauVar8;
      pauVar7 = pauVar8;
      do {
        auVar1 = *pauVar8;
        auVar2 = vpcmpeqd_avx2(auVar1,*(undefined1 (*) [32])(pauVar8[-1] + 0x1c));
        uVar9 = vmovmskps_avx(auVar2);
        pauVar8 = pauVar8 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = *(ulonglong *)(&DAT_180573c30 + (ulonglong)uVar9 * 8);
        auVar2 = vpmovzxbd_avx2(auVar14);
        auVar1 = vpermd_avx2(auVar2,auVar1);
        *pauVar7 = auVar1;
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + (byte)(&DAT_180574430)[uVar9]);
      } while (pauVar8 != (undefined1 (*) [32])(puVar3 + (uVar11 & 0xffffffffffffffe0)));
      pauVar7 = (undefined1 (*) [32])(pauVar7[-1] + 0x1c);
      pauVar12 = (undefined1 (*) [32])(puVar3 + (uVar11 & 0xffffffffffffffe0));
    }
    for (; pauVar12 != param_2; pauVar12 = (undefined1 (*) [32])(*pauVar12 + 4)) {
      if (*(int *)*pauVar12 != *(int *)*pauVar7) {
        pauVar7 = (undefined1 (*) [32])(*pauVar7 + 4);
        *(int *)*pauVar7 = *(int *)*pauVar12;
      }
    }
    pauVar7 = (undefined1 (*) [32])(*pauVar7 + 4);
  }
  return pauVar7;
}



/* ===== 1804ea440 FUN_1804ea440 ===== */

char * FUN_1804ea440(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_1805747a0;
  do {
    if (*piVar1 == param_1) {
      return *(char **)(piVar1 + 2);
    }
    piVar1 = piVar1 + 4;
  } while (piVar1 != &DAT_180574c90);
  return "unknown error";
}



/* ===== 1804ea470 FUN_1804ea470 ===== */

int FUN_1804ea470(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_180574c90;
  do {
    if (*piVar1 == param_1) {
      return piVar1[1];
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 != (int *)"success");
  return 0;
}



/* ===== 1804ea4a0 FUN_1804ea4a0 ===== */

undefined8 FUN_1804ea4a0(undefined8 param_1)

{
  undefined4 *puVar1;
  
  LOCK();
  DAT_1809191dc = DAT_1809191dc + 1;
  UNLOCK();
  if (DAT_1809191dc == 0) {
    puVar1 = (undefined4 *)&DAT_180c9eca0;
    do {
      FUN_1804ec700(puVar1);
      puVar1 = puVar1 + 10;
    } while (puVar1 != &DAT_180c9ede0);
  }
  return param_1;
}



/* ===== 1804ea500 FUN_1804ea500 ===== */

int * FUN_1804ea500(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 == 0) {
    FUN_1805207c0();
    return param_1;
  }
  if (param_2 < 8) {
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_180c9eca0 + (longlong)param_2 * 0x28));
  }
  return param_1;
}



/* ===== 1804ea550 FUN_1804ea550 ===== */

void FUN_1804ea550(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_1809191dc + -1;
  UNLOCK();
  iVar1 = DAT_1809191dc + -1;
  DAT_1809191dc = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_180c9eca0;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_180c9ede0);
  }
  return;
}



/* ===== 1804ea5a0 FUN_1804ea5a0 ===== */

void FUN_1804ea5a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001805207e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180c9f620);
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180c9eca0 + (longlong)iVar1 * 0x28));
    return;
  }
  return;
}



/* ===== 1804ea5d0 thunk_FUN_1804ef6a0 ===== */

undefined4 thunk_FUN_1804ef6a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804efa00();
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0x30);
}



/* ===== 1804ea5e0 FUN_1804ea5e0 ===== */

longlong FUN_1804ea5e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1 * 2;
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_1 + 2 + lVar2) != 0);
  lVar1 = lVar1 * 2 + 2;
  lVar2 = _malloc_base(lVar1);
  if (lVar2 != 0) {
    FUN_180540530(lVar2,param_1,lVar1);
  }
  return lVar2;
}



/* ===== 1804ea650 FUN_1804ea650 ===== */

undefined8 * FUN_1804ea650(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  *param_1 = std::locale::_Locimp::vftable;
  FUN_1804ea500(local_res10,0);
  lVar2 = param_1[3];
  while (lVar2 != 0) {
    lVar2 = lVar2 + -1;
    if ((*(longlong *)(param_1[2] + lVar2 * 8) != 0) &&
       (lVar1 = (*(code *)PTR__guard_dispatch_icall_18056b850)(), lVar1 != 0)) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar1,1);
    }
  }
  thunk_FUN_1805277b0(param_1[2]);
  FUN_1804ea5a0(local_res10);
  if (param_1[5] != 0) {
    thunk_FUN_1805277b0();
  }
  param_1[5] = 0;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x38);
  }
  return param_1;
}



/* ===== 1804ea710 FUN_1804ea710 ===== */

void FUN_1804ea710(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc_base(0x10);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4c90();
  }
  *puVar1 = DAT_180c9ee28;
  puVar1[1] = param_1;
  DAT_180c9ee28 = puVar1;
  return;
}



/* ===== 1804ea750 FUN_1804ea750 ===== */

undefined8 FUN_1804ea750(void)

{
  return DAT_180c9ee38;
}



/* ===== 1804ea760 FUN_1804ea760 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1804ea760(char param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_1804ea500(local_res8,0);
  lVar1 = DAT_180c9ee38;
  if (DAT_180c9ee38 == 0) {
    lVar1 = FUN_1804ea930(0);
    if (DAT_180c9ee40 == '\0') {
      DAT_180c9ee40 = '\x01';
      FUN_1804ec730(FUN_1804ea9b0);
    }
    DAT_180c9ee38 = lVar1;
    *(undefined4 *)(lVar1 + 0x20) = 0x3f;
    if (*(undefined **)(lVar1 + 0x28) != &DAT_1808a7d28) {
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        thunk_FUN_1805277b0();
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar2 = (undefined2 *)_malloc_base(2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0x43;
      }
      *(undefined2 **)(lVar1 + 0x28) = puVar2;
    }
    (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar1);
    _DAT_180c9ede8 = lVar1;
    DAT_180c9ee18 = lVar1;
  }
  if (param_1 != '\0') {
    (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar1);
  }
  FUN_1804ea5a0(local_res8);
  return lVar1;
}



/* ===== 1804ea850 FUN_1804ea850 ===== */

void FUN_1804ea850(longlong param_1,char *param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  
  pwVar1 = _wsetlocale(0,(wchar_t *)0x0);
  if (*(wchar_t **)(param_1 + 0x48) != pwVar1) {
    if (*(wchar_t **)(param_1 + 0x48) != (wchar_t *)0x0) {
      thunk_FUN_1805277b0();
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (pwVar1 != (wchar_t *)0x0) {
      uVar2 = FUN_1804ea5e0();
      *(undefined8 *)(param_1 + 0x48) = uVar2;
    }
  }
  pcVar3 = (char *)0x0;
  if (param_2 != (char *)0x0) {
    pcVar3 = setlocale(0,param_2);
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "*";
  }
  if (*(char **)(param_1 + 0x58) != pcVar3) {
    if (*(char **)(param_1 + 0x58) != (char *)0x0) {
      thunk_FUN_1805277b0();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    lVar5 = -1;
    do {
      lVar4 = lVar5;
      lVar5 = lVar4 + 1;
    } while (pcVar3[lVar4 + 1] != '\0');
    lVar5 = _malloc_base(lVar4 + 2);
    if (lVar5 != 0) {
      FUN_180540530(lVar5,pcVar3,lVar4 + 2);
    }
    *(longlong *)(param_1 + 0x58) = lVar5;
  }
  return;
}



/* ===== 1804ea910 FUN_1804ea910 ===== */

void FUN_1804ea910(longlong param_1)

{
  wchar_t *_Locale;
  
  _Locale = L"";
  if (*(wchar_t **)(param_1 + 0x48) != (wchar_t *)0x0) {
    _Locale = *(wchar_t **)(param_1 + 0x48);
  }
  _wsetlocale(0,_Locale);
  return;
}



/* ===== 1804ea930 FUN_1804ea930 ===== */

undefined8 * FUN_1804ea930(undefined1 param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x38);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x24) = param_1;
  *puVar1 = std::locale::_Locimp::vftable;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[5] = 0;
  puVar2 = (undefined2 *)_malloc_base(2);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0x2a;
  }
  puVar1[5] = puVar2;
  return puVar1;
}



/* ===== 1804ea9b0 FUN_1804ea9b0 ===== */

void FUN_1804ea9b0(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  FUN_1804ea500(local_res8,0);
  if (DAT_180c9ee38 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_18056b850)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar1,1);
    }
  }
  DAT_180c9ee38 = 0;
  FUN_1804ea5a0(local_res8);
  return;
}



/* ===== 1804eaa10 FUN_1804eaa10 ===== */

void FUN_1804eaa10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) ||
     ((&DAT_180c9eeb0)[lVar1] = (&DAT_180c9eeb0)[lVar1] + -1, (char)(&DAT_180c9eeb0)[lVar1] < '\x01'
     )) {
    for (puVar2 = *(undefined8 **)(param_1 + 0x38); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)(0,param_1,*(undefined4 *)(puVar2 + 1));
    }
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      thunk_FUN_1803d64e0(puVar2,0x18);
      puVar2 = puVar3;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      thunk_FUN_1803d64e0(puVar2,0x18);
      puVar2 = puVar3;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
      if ((*(longlong *)(lVar1 + 8) != 0) &&
         (lVar4 = (*(code *)PTR__guard_dispatch_icall_18056b850)(), lVar4 != 0)) {
        (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar4,1);
      }
      thunk_FUN_1803d64e0(lVar1,0x10);
    }
  }
  return;
}



/* ===== 1804eab10 FUN_1804eab10 ===== */

_iobuf * FUN_1804eab10(char *param_1,uint param_2,int param_3)

{
  int iVar1;
  _iobuf *p_Var2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 | 1;
  if ((param_2 & 0x40) == 0) {
    uVar4 = param_2;
  }
  uVar3 = uVar4 | 2;
  if ((uVar4 & 8) == 0) {
    uVar3 = uVar4;
  }
  iVar1 = 0;
  uVar4 = DAT_1809191f0;
  while (uVar4 != (uVar3 & 0xffffffbb)) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x14) {
      return (_iobuf *)0x0;
    }
    uVar4 = (&DAT_1809191f0)[iVar1];
  }
  p_Var2 = common_fsopen<char>(param_1,(&PTR_DAT_1805755b0)[iVar1],param_3);
  if (p_Var2 != (_iobuf *)0x0) {
    if (((param_2 & 4) == 0) || (iVar1 = FUN_180512148(p_Var2,0,2), iVar1 == 0)) {
      return p_Var2;
    }
    FUN_18051053c(p_Var2);
  }
  return (_iobuf *)0x0;
}



/* ===== 1804eabd0 FUN_1804eabd0 ===== */

_iobuf * FUN_1804eabd0(wchar_t *param_1,uint param_2,int param_3)

{
  int iVar1;
  _iobuf *p_Var2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 | 1;
  if ((param_2 & 0x40) == 0) {
    uVar4 = param_2;
  }
  uVar3 = uVar4 | 2;
  if ((uVar4 & 8) == 0) {
    uVar3 = uVar4;
  }
  iVar1 = 0;
  uVar4 = DAT_180919240;
  while (uVar4 != (uVar3 & 0xffffffbb)) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x14) {
      return (_iobuf *)0x0;
    }
    uVar4 = (&DAT_180919240)[iVar1];
  }
  p_Var2 = common_fsopen<wchar_t>(param_1,(wchar_t *)(&PTR_DAT_180575690)[iVar1],param_3);
  if (p_Var2 != (_iobuf *)0x0) {
    if (((param_2 & 4) == 0) || (iVar1 = FUN_180512148(p_Var2,0,2), iVar1 == 0)) {
      return p_Var2;
    }
    FUN_18051053c(p_Var2);
  }
  return (_iobuf *)0x0;
}



/* ===== 1804eac90 FUN_1804eac90 ===== */

undefined4 * FUN_1804eac90(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar3 = FUN_180520030();
  *param_1 = uVar3;
  puVar4 = (undefined8 *)_calloc_base(0x100,2);
  *(undefined8 **)(param_1 + 2) = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = __pctype_func();
    *(ushort **)(param_1 + 2) = puVar5;
    param_1[4] = 0;
  }
  else {
    puVar5 = __pctype_func();
    lVar7 = 4;
    do {
      uVar6 = *(undefined8 *)(puVar5 + 4);
      *puVar4 = *(undefined8 *)puVar5;
      puVar4[1] = uVar6;
      uVar6 = *(undefined8 *)(puVar5 + 0xc);
      puVar4[2] = *(undefined8 *)(puVar5 + 8);
      puVar4[3] = uVar6;
      uVar6 = *(undefined8 *)(puVar5 + 0x14);
      puVar4[4] = *(undefined8 *)(puVar5 + 0x10);
      puVar4[5] = uVar6;
      uVar6 = *(undefined8 *)(puVar5 + 0x1c);
      puVar4[6] = *(undefined8 *)(puVar5 + 0x18);
      puVar4[7] = uVar6;
      uVar6 = *(undefined8 *)(puVar5 + 0x24);
      puVar4[8] = *(undefined8 *)(puVar5 + 0x20);
      puVar4[9] = uVar6;
      uVar6 = *(undefined8 *)(puVar5 + 0x2c);
      puVar4[10] = *(undefined8 *)(puVar5 + 0x28);
      puVar4[0xb] = uVar6;
      uVar3 = *(undefined4 *)(puVar5 + 0x32);
      uVar1 = *(undefined4 *)(puVar5 + 0x34);
      uVar2 = *(undefined4 *)(puVar5 + 0x36);
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar5 + 0x30);
      *(undefined4 *)((longlong)puVar4 + 100) = uVar3;
      *(undefined4 *)(puVar4 + 0xd) = uVar1;
      *(undefined4 *)((longlong)puVar4 + 0x6c) = uVar2;
      uVar6 = *(undefined8 *)(puVar5 + 0x3c);
      puVar4[0xe] = *(undefined8 *)(puVar5 + 0x38);
      puVar4[0xf] = uVar6;
      lVar7 = lVar7 + -1;
      puVar5 = puVar5 + 0x40;
      puVar4 = puVar4 + 0x10;
    } while (lVar7 != 0);
    param_1[4] = 1;
  }
  lVar7 = FUN_180520060();
  lVar7 = *(longlong *)(lVar7 + 8);
  *(longlong *)(param_1 + 6) = lVar7;
  if (lVar7 != 0) {
    uVar6 = FUN_1805223f0();
    *(undefined8 *)(param_1 + 6) = uVar6;
  }
  return param_1;
}



/* ===== 1804ead70 FUN_1804ead70 ===== */

ulonglong FUN_1804ead70(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ushort *puVar5;
  byte bVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte local_res10;
  byte local_res11;
  undefined1 local_res12;
  byte local_res18;
  undefined1 local_res19;
  
  uVar8 = (ulonglong)(int)param_1;
  if (param_2 == (undefined4 *)0x0) {
    lVar4 = FUN_180520060();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    uVar1 = FUN_180520030();
  }
  else {
    lVar4 = *(longlong *)(param_2 + 6);
    uVar1 = *param_2;
  }
  if (lVar4 == 0) {
    if (0x40 < (int)param_1) {
      uVar2 = param_1 + 0x20;
      if (0x5a < (int)param_1) {
        uVar2 = param_1;
      }
      uVar8 = (ulonglong)uVar2;
    }
    goto LAB_1804eadb4;
  }
  bVar6 = (byte)(param_1 >> 8);
  if (param_1 < 0x100) {
    if (param_2 != (undefined4 *)0x0) {
      if ((*(byte *)(*(longlong *)(param_2 + 2) + uVar8 * 2) & 1) == 0) goto LAB_1804eadb4;
      goto LAB_1804eadea;
    }
    iVar3 = isupper(param_1);
    if (iVar3 == 0) goto LAB_1804eadb4;
LAB_1804eae23:
    puVar5 = __pctype_func();
    uVar7 = puVar5[(int)param_1 >> 8 & 0xff] & 0x8000;
  }
  else {
    if (param_2 == (undefined4 *)0x0) goto LAB_1804eae23;
LAB_1804eadea:
    uVar7 = *(ushort *)(*(longlong *)(param_2 + 2) + (ulonglong)bVar6 * 2) >> 0xf;
  }
  if (uVar7 == 0) {
    uVar9 = 1;
    local_res11 = 0;
    local_res10 = (byte)param_1;
  }
  else {
    uVar9 = 2;
    local_res12 = 0;
    local_res10 = bVar6;
    local_res11 = (byte)param_1;
  }
  iVar3 = FUN_1804ec770(lVar4,0x100,&local_res10,uVar9,&local_res18,3,uVar1,1);
  if (iVar3 != 0) {
    uVar8 = (ulonglong)local_res18;
    if (iVar3 != 1) {
      uVar8 = (ulonglong)CONCAT11(local_res18,local_res19);
    }
    return uVar8;
  }
LAB_1804eadb4:
  return uVar8 & 0xffffffff;
}



/* ===== 1804eaeb0 FUN_1804eaeb0 ===== */

ulonglong FUN_1804eaeb0(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ushort *puVar5;
  byte bVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte local_res10;
  byte local_res11;
  undefined1 local_res12;
  byte local_res18;
  undefined1 local_res19;
  
  uVar8 = (ulonglong)(int)param_1;
  if (param_2 == (undefined4 *)0x0) {
    lVar4 = FUN_180520060();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    uVar1 = FUN_180520030();
  }
  else {
    lVar4 = *(longlong *)(param_2 + 6);
    uVar1 = *param_2;
  }
  if (lVar4 == 0) {
    if (0x60 < (int)param_1) {
      uVar2 = param_1 - 0x20;
      if (0x7a < (int)param_1) {
        uVar2 = param_1;
      }
      uVar8 = (ulonglong)uVar2;
    }
    goto LAB_1804eaef4;
  }
  bVar6 = (byte)(param_1 >> 8);
  if (param_1 < 0x100) {
    if (param_2 != (undefined4 *)0x0) {
      if ((*(byte *)(*(longlong *)(param_2 + 2) + uVar8 * 2) & 2) == 0) goto LAB_1804eaef4;
      goto LAB_1804eaf2a;
    }
    iVar3 = islower(param_1);
    if (iVar3 == 0) goto LAB_1804eaef4;
LAB_1804eaf63:
    puVar5 = __pctype_func();
    uVar7 = puVar5[(int)param_1 >> 8 & 0xff] & 0x8000;
  }
  else {
    if (param_2 == (undefined4 *)0x0) goto LAB_1804eaf63;
LAB_1804eaf2a:
    uVar7 = *(ushort *)(*(longlong *)(param_2 + 2) + (ulonglong)bVar6 * 2) >> 0xf;
  }
  if (uVar7 == 0) {
    uVar9 = 1;
    local_res11 = 0;
    local_res10 = (byte)param_1;
  }
  else {
    uVar9 = 2;
    local_res12 = 0;
    local_res10 = bVar6;
    local_res11 = (byte)param_1;
  }
  iVar3 = FUN_1804ec770(lVar4,0x200,&local_res10,uVar9,&local_res18,3,uVar1,1);
  if (iVar3 != 0) {
    uVar8 = (ulonglong)local_res18;
    if (iVar3 != 1) {
      uVar8 = (ulonglong)CONCAT11(local_res18,local_res19);
    }
    return uVar8;
  }
LAB_1804eaef4:
  return uVar8 & 0xffffffff;
}



/* ===== 1804eaff0 FUN_1804eaff0 ===== */

LONGLONG FUN_1804eaff0(void)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  return local_res8[0].QuadPart;
}



/* ===== 1804eb010 FUN_1804eb010 ===== */

void FUN_1804eb010(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_180c9eec0 == (_struct_19)0x0) {
    QueryPerformanceFrequency(local_res8);
    DAT_180c9eec0 = local_res8[0].s;
  }
  return;
}



/* ===== 1804eb040 _Xtime_get_ticks ===== */

/* Library Function - Single Match
    _Xtime_get_ticks
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

longlong _Xtime_get_ticks(void)

{
  uint local_res8;
  uint local_resc;
  
  GetSystemTimePreciseAsFileTime(&local_res8);
  return ((ulonglong)local_resc << 0x20) + -0x19db1ded53e8000 + (ulonglong)local_res8;
}



/* ===== 1804eb070 FUN_1804eb070 ===== */

undefined8 * FUN_1804eb070(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong lVar4;
  uint uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  uVar1 = FUN_180520030();
  *(undefined4 *)param_1 = uVar1;
  uVar1 = FUN_180520094();
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  lVar2 = FUN_180520060();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(uint *)(param_1 + 1) = (uint)(lVar2 == 0);
  if (lVar2 != 0) {
    puVar3 = __pctype_func();
    uVar5 = 0;
    lVar2 = 0;
    do {
      if ((short)puVar3[lVar2] < 0) {
        *(byte *)((lVar2 >> 3) + 0xc + (longlong)param_1) =
             *(byte *)((lVar2 >> 3) + 0xc + (longlong)param_1) | (byte)(1 << (uVar5 & 7));
      }
      if ((short)puVar3[lVar2 + 1] < 0) {
        lVar4 = lVar2 + 1 >> 3;
        *(byte *)(lVar4 + 0xc + (longlong)param_1) =
             *(byte *)(lVar4 + 0xc + (longlong)param_1) | (byte)(1 << (uVar5 + 1 & 7));
      }
      if ((short)puVar3[lVar2 + 2] < 0) {
        lVar4 = lVar2 + 2 >> 3;
        *(byte *)(lVar4 + 0xc + (longlong)param_1) =
             *(byte *)(lVar4 + 0xc + (longlong)param_1) | (byte)(1 << (uVar5 + 2 & 7));
      }
      if ((short)puVar3[lVar2 + 3] < 0) {
        lVar4 = lVar2 + 3 >> 3;
        *(byte *)(lVar4 + 0xc + (longlong)param_1) =
             *(byte *)(lVar4 + 0xc + (longlong)param_1) | (byte)(1 << (uVar5 + 3 & 7));
      }
      uVar5 = uVar5 + 4;
      lVar2 = lVar2 + 4;
    } while ((int)uVar5 < 0x100);
  }
  return param_1;
}



/* ===== 1804eb180 FUN_1804eb180 ===== */

void FUN_1804eb180(void)

{
  DWORD DVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  DVar1 = GetCurrentThreadId();
  iVar2 = FUN_1804e4d70(&DAT_180919290);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809192dc == 0x7fffffff) {
    DAT_1809192dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar3 = &DAT_180c9eed0;
  do {
    iVar2 = *(int *)(puVar3 + 800);
    if (iVar2 != 0) {
      iVar4 = 0;
      do {
        if (0x13 < iVar4) break;
        if ((*(longlong *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10) != 0) &&
           (*(DWORD *)(puVar3 + (longlong)iVar4 * 0x28 + 8) == DVar1)) {
          if (*(undefined4 **)(puVar3 + (longlong)iVar4 * 0x28 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(puVar3 + (longlong)iVar4 * 0x28 + 0x20) = 1;
          }
          FUN_1804eb6a0(*(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x18));
          FUN_1804e4e90(*(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10));
          *(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10) = 0;
          *(int *)(puVar3 + 800) = *(int *)(puVar3 + 800) + -1;
          iVar2 = *(int *)(puVar3 + 800);
        }
        iVar4 = iVar4 + 1;
      } while (iVar2 != 0);
    }
    puVar3 = *(undefined **)(puVar3 + 0x328);
    if (puVar3 == (undefined *)0x0) {
      FUN_1804e4e90(&DAT_180919290);
      return;
    }
  } while( true );
}



/* ===== 1804eb270 FUN_1804eb270 ===== */

void FUN_1804eb270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  
  iVar2 = FUN_1804e4d70(&DAT_180919290);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809192dc == 0x7fffffff) {
    DAT_1809192dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar6 = &DAT_180c9eed0;
  do {
    do {
      if (*(int *)(puVar6 + 800) != 0x14) {
        uVar5 = 0;
        goto LAB_1804eb2f0;
      }
      puVar1 = (undefined8 *)(puVar6 + 0x328);
      puVar6 = (undefined *)*puVar1;
    } while (puVar6 != (undefined *)0x0);
    puVar6 = (undefined *)_calloc_base(1);
    *puVar1 = puVar6;
  } while (puVar6 != (undefined *)0x0);
  goto LAB_1804eb323;
  while (uVar4 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar4, (int)uVar4 < 0x14) {
LAB_1804eb2f0:
    if (*(longlong *)(puVar6 + uVar5 * 0x28 + 0x10) == 0) {
      DVar3 = GetCurrentThreadId();
      *(DWORD *)(puVar6 + uVar5 * 0x28 + 8) = DVar3;
      *(undefined8 *)(puVar6 + uVar5 * 0x28 + 0x10) = param_2;
      *(undefined8 *)(puVar6 + uVar5 * 0x28 + 0x18) = param_1;
      *(undefined8 *)(puVar6 + uVar5 * 0x28 + 0x20) = param_3;
      *(int *)(puVar6 + 800) = *(int *)(puVar6 + 800) + 1;
      break;
    }
  }
LAB_1804eb323:
  FUN_1804e4e90(&DAT_180919290);
  return;
}



/* ===== 1804eb360 FUN_1804eb360 ===== */

void FUN_1804eb360(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = FUN_1804e4d70(&DAT_180919290);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809192dc == 0x7fffffff) {
    DAT_1809192dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar2 = &DAT_180c9eed0;
  do {
    iVar1 = *(int *)(puVar2 + 800);
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        if (0x13 < iVar3) break;
        if (*(longlong *)(puVar2 + (longlong)iVar3 * 0x28 + 0x10) == param_1) {
          *(undefined8 *)(puVar2 + (longlong)iVar3 * 0x28 + 0x10) = 0;
          *(int *)(puVar2 + 800) = *(int *)(puVar2 + 800) + -1;
          iVar1 = *(int *)(puVar2 + 800);
        }
        iVar3 = iVar3 + 1;
      } while (iVar1 != 0);
    }
    puVar2 = *(undefined **)(puVar2 + 0x328);
    if (puVar2 == (undefined *)0x0) {
      FUN_1804e4e90(&DAT_180919290);
      return;
    }
  } while( true );
}



/* ===== 1804eb410 FUN_1804eb410 ===== */

undefined4 FUN_1804eb410(undefined8 *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = CloseHandle((HANDLE)*param_1);
  uVar2 = 4;
  if (BVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 1804eb430 FUN_1804eb430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_1804eb430(void)

{
  DWORD *pDVar1;
  WORD WVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint uVar5;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer;
  ulonglong uVar6;
  ushort uVar7;
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX p_Var8;
  int iVar9;
  undefined1 auStack_78 [32];
  DWORD local_58 [2];
  undefined1 local_50 [56];
  
  local_50._48_8_ = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58[0] = 0x30;
  Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0;
  BVar3 = GetLogicalProcessorInformationEx
                    (RelationProcessorPackage,(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)local_50,
                     local_58);
  p_Var8 = Buffer;
  if (BVar3 == 0) {
    do {
      DVar4 = GetLastError();
      if (DVar4 != 0x7a) {
        if (p_Var8 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
          thunk_FUN_1803d64e0(p_Var8);
        }
        return 0;
      }
      Buffer = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)FUN_1804edb30(local_58[0],&DAT_1805757b2);
      if (p_Var8 != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
        thunk_FUN_1803d64e0(p_Var8);
      }
      if (Buffer == (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
        return 0;
      }
      BVar3 = GetLogicalProcessorInformationEx(RelationProcessorPackage,Buffer,local_58);
      p_Var8 = Buffer;
    } while (BVar3 == 0);
  }
  else {
    p_Var8 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)local_50;
  }
  iVar9 = 0;
  if (local_58[0] != 0) {
    do {
      WVar2 = (p_Var8->u).Processor.GroupCount;
      uVar7 = 0;
      pDVar1 = &p_Var8->Size;
      if (WVar2 != 0) {
        do {
          uVar6 = *(ulonglong *)
                   ((p_Var8->u).Group.GroupInfo[0].Reserved + (ulonglong)uVar7 * 0x10 + -2);
          if (DAT_1809194c8 < 2) {
            uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
            uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
            uVar5 = (uint)(byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
          }
          else {
            uVar5 = (uint)POPCOUNT(uVar6);
          }
          iVar9 = iVar9 + uVar5;
          uVar7 = uVar7 + 1;
        } while (uVar7 != WVar2);
      }
      p_Var8 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)
               ((p_Var8->u).Group.Reserved + ((ulonglong)*pDVar1 - 0xc));
      local_58[0] = local_58[0] - *pDVar1;
    } while (local_58[0] != 0);
    local_58[0] = 0;
  }
  if (Buffer != (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)0x0) {
    thunk_FUN_1803d64e0(Buffer);
  }
  return iVar9;
}



/* ===== 1804eb610 KERNEL32.DLL::GetCurrentThreadId ===== */

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001804eb610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



/* ===== 1804eb620 FUN_1804eb620 ===== */

undefined4 FUN_1804eb620(undefined8 *param_1,DWORD *param_2)

{
  HANDLE hHandle;
  DWORD DVar1;
  BOOL BVar2;
  undefined4 uVar3;
  DWORD local_res8 [2];
  
  hHandle = (HANDLE)*param_1;
  DVar1 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
  if (DVar1 == 0xffffffff) {
    return 4;
  }
  if (param_2 != (DWORD *)0x0) {
    BVar2 = GetExitCodeThread(hHandle,local_res8);
    if (BVar2 == 0) {
      return 4;
    }
    *param_2 = local_res8[0];
  }
  BVar2 = CloseHandle(hHandle);
  uVar3 = 4;
  if (BVar2 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== 1804eb6a0 FUN_1804eb6a0 ===== */

undefined8 FUN_1804eb6a0(longlong param_1)

{
  WakeAllConditionVariable((PCONDITION_VARIABLE)(param_1 + 8));
  return 0;
}



/* ===== 1804eb6c0 FUN_1804eb6c0 ===== */

undefined8 FUN_1804eb6c0(longlong param_1)

{
  WakeConditionVariable((PCONDITION_VARIABLE)(param_1 + 8));
  return 0;
}



/* ===== 1804eb6e0 FUN_1804eb6e0 ===== */

undefined8 FUN_1804eb6e0(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  BVar1 = SleepConditionVariableSRW
                    ((PCONDITION_VARIABLE)(param_1 + 8),(PSRWLOCK)(param_2 + 0x10),0xffffffff,0);
  if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DVar2 = GetCurrentThreadId();
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(DWORD *)(param_2 + 0x48) = DVar2;
  return 0;
}



/* ===== 1804eb730 FUN_1804eb730 ===== */

void FUN_1804eb730(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804eb740 FUN_1804eb740 ===== */

undefined8 * FUN_1804eb740(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 2) = *param_2;
  uVar1 = param_2[1];
  param_1[3] = 0;
  *(uint *)((longlong)param_1 + 0x14) = uVar1 | 1;
  param_1[4] = 0;
  uVar1 = param_2[6];
  *(uint *)(param_1 + 5) = uVar1;
  uVar2 = (ulonglong)uVar1;
  if (0xf < uVar1) {
    uVar2 = 0xf;
  }
  FUN_180540530(param_1 + 6,param_2 + 8,uVar2 * 8);
  FUN_180540170(param_1 + uVar2 + 6,0,(ulonglong)(0xf - (int)uVar2) << 3);
  return param_1;
}



/* ===== 1804eb7e0 FUN_1804eb7e0 ===== */

undefined8 * FUN_1804eb7e0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1804ef040(param_2 + 8);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



/* ===== 1804eb830 FUN_1804eb830 ===== */

undefined8 * FUN_1804eb830(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



/* ===== 1804eb860 FUN_1804eb860 ===== */

void FUN_1804eb860(longlong param_1)

{
  *(undefined ***)(param_1 + 0xa8) = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 0xb0);
  return;
}



/* ===== 1804eb890 FUN_1804eb890 ===== */

void FUN_1804eb890(longlong param_1)

{
  *(undefined ***)(param_1 + 0xa8) = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 0xb0);
  return;
}



/* ===== 1804eb8c0 FUN_1804eb8c0 ===== */

void FUN_1804eb8c0(longlong param_1)

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



/* ===== 1804eb920 FUN_1804eb920 ===== */

void FUN_1804eb920(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  return;
}



/* ===== 1804eb950 FUN_1804eb950 ===== */

undefined8 * FUN_1804eb950(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = uVar3;
  lVar5 = param_1[1];
  param_1[1] = uVar4;
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar5);
      LOCK();
      piVar1 = (int *)(lVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)PTR__guard_dispatch_icall_18056b850)(lVar5);
      }
    }
  }
  return param_1;
}



/* ===== 1804eb9f0 FUN_1804eb9f0 ===== */

longlong FUN_1804eb9f0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xa8) = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 0xb0);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0xc0);
  }
  return param_1;
}



/* ===== 1804eba50 FUN_1804eba50 ===== */

longlong FUN_1804eba50(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xa8) = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 0xb0);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0xc0);
  }
  return param_1;
}



/* ===== 1804ebab0 FUN_1804ebab0 ===== */

undefined8 FUN_1804ebab0(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0xb0);
  }
  return param_1;
}



/* ===== 1804ebae0 FUN_1804ebae0 ===== */

undefined8 * FUN_1804ebae0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1804ef0e0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x18);
  }
  return param_1;
}



/* ===== 1804ebb30 FUN_1804ebb30 ===== */

/* WARNING: Switch with 1 destination removed at 0x0001804ebc36 */

void FUN_1804ebb30(undefined8 *param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined *local_48;
  undefined **ppuStack_40;
  
  uVar11 = 0;
  puVar6 = *(undefined **)(param_2 + 0xe);
  iVar4 = *(int *)(puVar6 + (longlong)*(int *)(*(longlong *)(param_2 + 0xc) + 0xc) + 4);
  lVar10 = (longlong)*(int *)(puVar6 + iVar4 + 0x14) + 0xb0;
  local_48 = puVar6;
  puVar8 = (undefined8 *)_malloc_base();
  if (puVar8 == (undefined8 *)0x0) {
    LOCK();
    DAT_1809193a8 = DAT_1809193a8 + 1;
    UNLOCK();
    local_48 = &DAT_1809193b0;
    ppuStack_40 = &PTR_vftable_1809193a0;
    FUN_1804eb950(param_1,&local_48);
    ppuVar7 = ppuStack_40;
    if (ppuStack_40 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = ppuStack_40 + 1;
      iVar4 = *(int *)ppuVar1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)PTR__guard_dispatch_icall_18056b850)(ppuStack_40);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001805400f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar7 + 8))(ppuVar7);
          return;
        }
      }
    }
  }
  else {
    FUN_1804ebe90(puVar8 + 0x16,*(undefined8 *)(param_2 + 10),puVar6 + iVar4,puVar6,uVar11,lVar10);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 1) = 1;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    *puVar8 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
    puVar8[0x15] = 0;
    puVar3 = puVar8 + 2;
    *(undefined4 *)puVar3 = *param_2;
    *(uint *)((longlong)puVar8 + 0x14) = param_2[1] | 1;
    puVar8[3] = 0;
    puVar8[4] = 0;
    uVar5 = param_2[6];
    *(uint *)(puVar8 + 5) = uVar5;
    uVar9 = (ulonglong)uVar5;
    if (0xf < uVar5) {
      uVar9 = 0xf;
    }
    FUN_180540530(puVar8 + 6,param_2 + 8,uVar9 * 8);
    FUN_180540170(puVar3 + uVar9 + 4,0,(ulonglong)(0xf - (int)uVar9) << 3);
    puVar8[7] = puVar8 + 0x16;
    *param_1 = puVar3;
    param_1[1] = puVar8;
  }
  return;
}



/* ===== 1804ebd10 FUN_1804ebd10 ===== */

/* WARNING: Switch with 1 destination removed at 0x0001804ebdcb */

void FUN_1804ebd10(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined *local_40;
  undefined **ppuStack_38;
  
  if (param_3 == (undefined8 *)0x0) {
    LOCK();
    DAT_1809193a8 = DAT_1809193a8 + 1;
    UNLOCK();
    local_40 = &DAT_1809193b0;
    ppuStack_38 = &PTR_vftable_1809193a0;
    FUN_1804eb950(param_1,&local_40,0,param_4,1);
    ppuVar5 = ppuStack_38;
    if (ppuStack_38 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = ppuStack_38 + 1;
      iVar3 = *(int *)ppuVar1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_18056b850)(ppuStack_38);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001805400f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar5 + 8))(ppuVar5);
          return;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_3 + 1) = 1;
    *(undefined4 *)((longlong)param_3 + 0xc) = 1;
    *param_3 = _anon_6E02EFE5::_ExceptionPtr_normal::vftable;
    param_3[0x15] = 0;
    *(undefined4 *)(param_3 + 2) = *param_2;
    *(uint *)((longlong)param_3 + 0x14) = param_2[1] | 1;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar4 = param_2[6];
    *(uint *)(param_3 + 5) = uVar4;
    uVar6 = (ulonglong)uVar4;
    if (0xf < uVar4) {
      uVar6 = 0xf;
    }
    FUN_180540530(param_3 + 6,param_2 + 8,uVar6 * 8,param_4,0);
    FUN_180540170(param_3 + uVar6 + 6,0,(ulonglong)(0xf - (int)uVar6) << 3);
    *param_1 = (longlong)(param_3 + 2);
    param_1[1] = (longlong)param_3;
  }
  return;
}



/* ===== 1804ebe60 FUN_1804ebe60 ===== */

void FUN_1804ebe60(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001804ebe60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



