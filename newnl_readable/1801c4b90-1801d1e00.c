/* ===== 1801c4b90 FUN_1801c4b90 ===== */

undefined1 FUN_1801c4b90(int param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = DAT_180cd1310;
  lVar4 = DAT_180cd1308;
  do {
    if (lVar4 == lVar2) {
      LOCK();
      uVar1 = (&DAT_180cd1320)[param_1];
      (&DAT_180cd1320)[param_1] = 0;
      UNLOCK();
      return uVar1;
    }
    bVar5 = *(int *)(lVar4 + 0x10) == param_1;
    if (bVar5) {
      *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
    }
    lVar3 = thunk_FUN_1804e6e50(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),param_1)
    ;
    if (lVar3 == *(longlong *)(lVar4 + 0x20)) {
      if (bVar5) goto LAB_1801c4c06;
    }
    else {
      FUN_180540530(lVar3,lVar3 + 4,*(longlong *)(lVar4 + 0x20) - (lVar3 + 4));
      *(longlong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + -4;
LAB_1801c4c06:
      FUN_1801c4220(lVar4,param_1,0,", hotkey edited");
    }
    lVar4 = lVar4 + 0x48;
  } while( true );
}



/* ===== 1801c4c50 FUN_1801c4c50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c4c50(void)

{
  char *_Str1;
  longlong lVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  longlong *plVar6;
  size_t sVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined8 ******ppppppuVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 *puVar17;
  char cVar18;
  char *_Str;
  undefined4 *puVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong *plVar24;
  float fVar25;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  char local_128;
  undefined1 local_127 [15];
  longlong local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  uint7 uStack_9f;
  undefined *local_98 [2];
  undefined8 ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  puVar17 = auStack_148;
  local_68 = DAT_180919500 ^ (ulonglong)auStack_148;
  uVar22 = 0;
  do {
    lVar23 = uVar22 * 0xe4;
    lVar16 = uVar22 * 0x80;
    _Str1 = &DAT_1809ec160 + lVar16;
    if (((&DAT_18095d530)[lVar23] == '\0') ||
       (((&DAT_18095d594)[uVar22 * 0x39] != 2 && (0xfe < (&DAT_18095d590)[uVar22 * 0x39] - 1)))) {
      local_128 = '\0';
      cVar18 = (&DAT_1809ec1d8)[lVar16];
LAB_1801c4eca:
      if (cVar18 != '\0') {
        FUN_1801c4b90(uVar22 & 0xffffffff);
      }
LAB_1801c4ed7:
      local_b8 = 0;
      uStack_b4 = 0xffffffff;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a4 = 1;
      uStack_a0 = 0;
      _Str1[0] = '\0';
      _Str1[1] = '\0';
      _Str1[2] = '\0';
      _Str1[3] = '\0';
      _Str1[4] = '\0';
      _Str1[5] = '\0';
      _Str1[6] = '\0';
      _Str1[7] = '\0';
      *(undefined8 *)(lVar16 + 0x1809ec168) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec170) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec178) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec180) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec188) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec190) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec198) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec1a0) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec1a8) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec1b0) = 0;
      *(undefined8 *)(lVar16 + 0x1809ec1b8) = 0;
      *(undefined8 *)(&DAT_1809ec1c0 + uVar22 * 0x20) = 0xffffffff00000000;
      (&DAT_1809ec1c8)[uVar22 * 0x10] = 0;
      *(undefined8 *)(&DAT_1809ec1d0 + uVar22 * 0x20) = 0x100000000;
      *(ulonglong *)(&DAT_1809ec1d8 + lVar16) = (ulonglong)uStack_9f << 8;
      if (local_128 != '\0') {
        _Str = &DAT_18095d530 + lVar23;
        uVar8 = *(undefined8 *)(lVar23 + 0x18095d538);
        *(undefined8 *)_Str1 = *(undefined8 *)_Str;
        *(undefined8 *)(lVar16 + 0x1809ec168) = uVar8;
        uVar8 = *(undefined8 *)((longlong)&DAT_18095d548 + lVar23);
        *(undefined8 *)(lVar16 + 0x1809ec170) = *(undefined8 *)((longlong)&DAT_18095d540 + lVar23);
        *(undefined8 *)(lVar16 + 0x1809ec178) = uVar8;
        uVar8 = *(undefined8 *)(lVar23 + 0x18095d558);
        *(undefined8 *)(lVar16 + 0x1809ec180) = *(undefined8 *)(&DAT_18095d550 + lVar23);
        *(undefined8 *)(lVar16 + 0x1809ec188) = uVar8;
        uVar8 = *(undefined8 *)(lVar23 + 0x18095d568);
        *(undefined8 *)(lVar16 + 0x1809ec190) = *(undefined8 *)(&DAT_18095d560 + lVar23);
        *(undefined8 *)(lVar16 + 0x1809ec198) = uVar8;
        uVar8 = *(undefined8 *)(lVar23 + 0x18095d578);
        *(undefined8 *)(lVar16 + 0x1809ec1a0) = *(undefined8 *)(&DAT_18095d570 + lVar23);
        *(undefined8 *)(lVar16 + 0x1809ec1a8) = uVar8;
        uVar8 = *(undefined8 *)(lVar23 + 0x18095d588);
        *(undefined8 *)(lVar16 + 0x1809ec1b0) = *(undefined8 *)(&DAT_18095d580 + lVar23);
        *(undefined8 *)(lVar16 + 0x1809ec1b8) = uVar8;
        (&DAT_1809ec1c0)[uVar22 * 0x20] = (&DAT_18095d590)[uVar22 * 0x39];
        (&DAT_1809ec1c4)[uVar22 * 0x20] = (&DAT_18095d594)[uVar22 * 0x39];
        local_88 = (undefined8 ******)0x0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0;
        sVar7 = strlen(_Str);
        FUN_1800133a0(&local_88,_Str,sVar7);
        if (DAT_180cc3e19 == '\0') {
          DAT_180cc3e19 = '\x01';
          FUN_1800ff4a0(local_127,&DAT_18091a190);
        }
        ppppppuVar14 = &local_88;
        if (0xf < local_70) {
          ppppppuVar14 = local_88;
        }
        uVar21 = 0xcbf29ce484222325;
        uVar10 = 0;
        if (local_78 != 0) {
          do {
            uVar21 = (uVar21 ^ *(byte *)((longlong)ppppppuVar14 + uVar10)) * 0x100000001b3;
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_78);
        }
        lVar23 = FUN_18014a630(uVar10,local_98,&local_88,uVar21);
        lVar23 = *(longlong *)(lVar23 + 8);
        if ((lVar23 == 0) || (lVar23 == DAT_180cd12c8)) {
          uVar8 = 0;
          uVar13 = 0;
          uVar20 = 1;
        }
        else {
          uVar8 = *(undefined8 *)(lVar23 + 0x30);
          uVar13 = *(undefined4 *)(lVar23 + 0x38);
          uVar20 = *(undefined4 *)(lVar23 + 0x3c);
        }
        (&DAT_1809ec1c8)[uVar22 * 0x10] = uVar8;
        (&DAT_1809ec1d0)[uVar22 * 0x20] = uVar13;
        (&DAT_1809ec1d4)[uVar22 * 0x20] = uVar20;
        FUN_18000f890(&local_88);
        if (((&DAT_1809ec1c8)[uVar22 * 0x10] == 0) || ((&DAT_1809ec1d0)[uVar22 * 0x20] == 0)) {
          (&DAT_1809ec1d8)[lVar16] = 0;
        }
        else {
          (&DAT_1809ec1d8)[lVar16] = 1;
        }
      }
    }
    else {
      local_128 = '\x01';
      cVar18 = (&DAT_1809ec1d8)[lVar16];
      if (cVar18 == '\0') goto LAB_1801c4ed7;
      iVar5 = strcmp(_Str1,&DAT_18095d530 + lVar23);
      if (((iVar5 != 0) || ((&DAT_1809ec1c0)[uVar22 * 0x20] != (&DAT_18095d590)[uVar22 * 0x39])) ||
         ((&DAT_1809ec1c4)[uVar22 * 0x20] != (&DAT_18095d594)[uVar22 * 0x39])) goto LAB_1801c4eca;
    }
    plVar6 = DAT_180cd1310;
    plVar24 = (longlong *)0x0;
    puVar19 = (undefined4 *)&DAT_1809ec160;
    uVar22 = uVar22 + 1;
    plVar11 = DAT_180cd1308;
  } while (uVar22 < 0x40);
  for (; plVar11 != plVar6; plVar11 = plVar11 + 9) {
    *(undefined2 *)(plVar11 + 8) = 0;
  }
  local_98[0] = &DAT_1809ec0c0;
  iVar5 = FUN_1804e4d70(&DAT_1809ec0c0);
  lVar16 = DAT_180cd1890;
  fVar4 = DAT_1808ac34c;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  lVar23 = DAT_180cd1888;
  if (DAT_1809ec10c == 0x7fffffff) {
LAB_1801c54dd:
    DAT_1809ec10c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar17 + -8) = &UNK_1801c54f1;
    FUN_1804e4a90(6);
  }
  for (; lVar23 != lVar16; lVar23 = lVar23 + 0x30) {
    plVar6 = (longlong *)FUN_1800fbdb0(&local_88,lVar23);
    plVar11 = DAT_180cd1310;
    lVar1 = *plVar6;
    if (lVar1 != 0) {
      iVar5 = (int)plVar6[1];
      plVar12 = DAT_180cd1308;
      if (iVar5 != 0) {
        for (; plVar12 != DAT_180cd1310; plVar12 = plVar12 + 9) {
          if ((*plVar12 == lVar1) && ((int)plVar12[1] == iVar5)) goto LAB_1801c4e0c;
        }
        plVar12 = plVar24;
LAB_1801c4e0c:
        if (plVar12 == (longlong *)0x0) {
          local_10c = *(undefined4 *)((longlong)plVar6 + 0xc);
          local_108 = 0xffffffff;
          local_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e0 = 0;
          local_dc = 0xffffffff;
          local_d8 = 0;
          local_d4 = 0;
          local_118 = lVar1;
          local_110 = iVar5;
          local_e8 = plVar12;
          if (DAT_180cd1310 == DAT_180cd1318) {
            FUN_1801c7a40(iVar5,DAT_180cd1310,&local_118);
          }
          else {
            *DAT_180cd1310 = lVar1;
            *(int *)(plVar11 + 1) = iVar5;
            *(undefined4 *)((longlong)plVar11 + 0xc) = local_10c;
            *(undefined4 *)(plVar11 + 2) = 0xffffffff;
            uStack_f0 = 0;
            local_f8 = 0;
            local_100 = 0;
            plVar11[3] = 0;
            plVar11[4] = 0;
            plVar11[5] = 0;
            plVar11[6] = 0;
            *(undefined1 *)(plVar11 + 7) = 0;
            *(undefined4 *)((longlong)plVar11 + 0x3c) = 0xffffffff;
            *(undefined2 *)(plVar11 + 8) = 0;
            *(undefined4 *)((longlong)plVar11 + 0x44) = 0;
            DAT_180cd1310 = DAT_180cd1310 + 9;
          }
          plVar12 = DAT_180cd1310 + -9;
          FUN_180068f30(&local_100);
        }
        *(undefined2 *)(plVar12 + 8) = 0x101;
        *(undefined4 *)((longlong)plVar12 + 0x44) = *(undefined4 *)(lVar23 + 0x20);
        iVar5 = FUN_1801c3e90(plVar12);
        if (iVar5 == -1) {
          if ((char)plVar12[7] == '\0') {
            pfVar2 = (float *)*plVar12;
            if (pfVar2 == (float *)0x0) goto LAB_1801c5190;
            iVar5 = (int)plVar12[1];
            if (iVar5 == 1) {
              cVar18 = *(char *)pfVar2;
              goto LAB_1801c5189;
            }
            if (iVar5 == 2) {
              fVar25 = (float)(int)*pfVar2;
            }
            else if (iVar5 == 3) {
              fVar25 = *pfVar2;
            }
            else {
              if (iVar5 != 4) goto LAB_1801c5190;
              plVar11 = plVar24;
              plVar6 = plVar24;
              if (0 < *(int *)((longlong)plVar12 + 0xc)) {
                do {
                  uVar9 = (uint)plVar11;
                  if (0x17 < uVar9) break;
                  if (*(char *)((longlong)pfVar2 + (longlong)plVar11) != '\0') {
                    plVar6 = (longlong *)(ulonglong)((uint)plVar6 | 1 << (uVar9 & 0x1f));
                  }
                  plVar11 = (longlong *)(ulonglong)(uVar9 + 1);
                } while ((int)(uVar9 + 1) < *(int *)((longlong)plVar12 + 0xc));
              }
              fVar25 = (float)(int)plVar6;
            }
          }
          else {
            fVar25 = *(float *)(plVar12 + 6);
          }
        }
        else if ((int)plVar12[1] == 1) {
          cVar18 = (&DAT_18095d598)[(longlong)iVar5 * 0xe4];
LAB_1801c5189:
          if (cVar18 == '\0') {
LAB_1801c5190:
            fVar25 = 0.0;
          }
          else {
            fVar25 = fVar4;
          }
        }
        else {
          fVar25 = (float)(&DAT_18095d59c)[(longlong)iVar5 * 0x39];
        }
        *(float *)(lVar23 + 0x24) = fVar25;
        *(undefined1 *)(lVar23 + 0x28) = 1;
      }
    }
  }
  FUN_1804e4e90(&DAT_1809ec0c0);
  do {
    plVar11 = DAT_180cd1310;
    if (*(char *)(puVar19 + 0x1e) != '\0') {
      if (DAT_180cd1308 != DAT_180cd1310) {
        plVar6 = DAT_180cd1308;
        do {
          if ((*plVar6 == *(longlong *)(puVar19 + 0x1a)) && ((int)plVar6[1] == puVar19[0x1c])) {
            *(undefined1 *)(plVar6 + 8) = 1;
            goto LAB_1801c52c6;
          }
          plVar6 = plVar6 + 9;
        } while (plVar6 != DAT_180cd1310);
      }
      local_108 = 0xffffffff;
      local_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = (longlong *)0x0;
      local_e0 = 0;
      local_dc = 0xffffffff;
      local_d8 = 1;
      local_d4 = 0;
      local_118 = *(longlong *)(puVar19 + 0x1a);
      local_110 = puVar19[0x1c];
      local_10c = puVar19[0x1d];
      if (DAT_180cd1310 == DAT_180cd1318) {
        FUN_1801c7a40(local_110,DAT_180cd1310,&local_118);
      }
      else {
        *DAT_180cd1310 = local_118;
        *(int *)(plVar11 + 1) = local_110;
        *(undefined4 *)((longlong)plVar11 + 0xc) = local_10c;
        *(undefined4 *)(plVar11 + 2) = 0xffffffff;
        uStack_f0 = 0;
        local_f8 = 0;
        local_100 = 0;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[5] = 0;
        plVar11[6] = 0;
        *(undefined1 *)(plVar11 + 7) = 0;
        *(undefined4 *)((longlong)plVar11 + 0x3c) = 0xffffffff;
        *(undefined2 *)(plVar11 + 8) = 1;
        *(undefined4 *)((longlong)plVar11 + 0x44) = 0;
        DAT_180cd1310 = DAT_180cd1310 + 9;
      }
      FUN_180068f30(&local_100);
    }
LAB_1801c52c6:
    puVar19 = puVar19 + 0x20;
  } while (puVar19 != &DAT_1809ee160);
  plVar11 = DAT_180cd1308;
  plVar6 = DAT_180cd1310;
  if (DAT_180cd1308 != DAT_180cd1310) {
    do {
      if ((char)plVar11[8] == '\0') {
        if ((char)plVar11[7] != '\0') {
          pfVar2 = (float *)*plVar11;
          if (pfVar2 == (float *)0x0) {
LAB_1801c5374:
            fVar25 = 0.0;
          }
          else {
            iVar5 = (int)plVar11[1];
            if (iVar5 == 1) {
              if (*(char *)pfVar2 == '\0') goto LAB_1801c5374;
              fVar25 = fVar4;
            }
            else if (iVar5 == 2) {
              fVar25 = (float)(int)*pfVar2;
            }
            else if (iVar5 == 3) {
              fVar25 = *pfVar2;
            }
            else {
              if (iVar5 != 4) goto LAB_1801c5374;
              plVar12 = plVar24;
              plVar15 = plVar24;
              if (0 < *(int *)((longlong)plVar11 + 0xc)) {
                do {
                  uVar9 = (uint)plVar12;
                  if (0x17 < uVar9) break;
                  if (*(char *)((longlong)pfVar2 + (longlong)plVar12) != '\0') {
                    plVar15 = (longlong *)(ulonglong)((uint)plVar15 | 1 << (uVar9 & 0x1f));
                  }
                  plVar12 = (longlong *)(ulonglong)(uVar9 + 1);
                } while ((int)(uVar9 + 1) < *(int *)((longlong)plVar11 + 0xc));
              }
              fVar25 = (float)(int)plVar15;
            }
          }
          if (fVar25 == *(float *)((longlong)plVar11 + 0x34)) {
            FUN_1801c3c60(plVar11,(int)plVar11[6]);
            plVar6 = DAT_180cd1310;
          }
        }
        plVar12 = plVar11 + 9;
        plVar15 = plVar11;
        if (plVar12 != plVar6) {
          do {
            *plVar15 = *plVar12;
            *(int *)(plVar15 + 1) = (int)plVar12[1];
            *(undefined4 *)((longlong)plVar15 + 0xc) = *(undefined4 *)((longlong)plVar12 + 0xc);
            *(int *)(plVar15 + 2) = (int)plVar12[2];
            if (plVar15 != plVar12) {
              lVar16 = plVar15[3];
              if (lVar16 != 0) {
                uVar22 = (plVar15[5] - lVar16 >> 2) * 4;
                if (0xfff < uVar22) {
                  if (0x1f < (lVar16 - *(longlong *)(lVar16 + -8)) - 8U) {
                    pcVar3 = (code *)swi(0x29);
                    (*pcVar3)(5);
                    puVar17 = auStack_140;
                    goto LAB_1801c54dd;
                  }
                  uVar22 = uVar22 + 0x27;
                  lVar16 = *(longlong *)(lVar16 + -8);
                }
                thunk_FUN_1803d64e0(lVar16,uVar22);
                plVar15[3] = 0;
                plVar15[4] = 0;
                plVar15[5] = 0;
              }
              plVar15[3] = plVar12[3];
              plVar15[4] = plVar12[4];
              plVar15[5] = plVar12[5];
              plVar12[3] = 0;
              plVar12[4] = 0;
              plVar12[5] = 0;
            }
            *(int *)(plVar15 + 6) = (int)plVar12[6];
            *(undefined4 *)((longlong)plVar15 + 0x34) = *(undefined4 *)((longlong)plVar12 + 0x34);
            *(char *)(plVar15 + 7) = (char)plVar12[7];
            *(undefined4 *)((longlong)plVar15 + 0x3c) = *(undefined4 *)((longlong)plVar12 + 0x3c);
            *(char *)(plVar15 + 8) = (char)plVar12[8];
            *(undefined1 *)((longlong)plVar15 + 0x41) = *(undefined1 *)((longlong)plVar12 + 0x41);
            *(undefined4 *)((longlong)plVar15 + 0x44) = *(undefined4 *)((longlong)plVar12 + 0x44);
            plVar15 = plVar15 + 9;
            plVar12 = plVar12 + 9;
          } while (plVar12 != plVar6);
          plVar6 = DAT_180cd1310;
        }
        FUN_180068f30(plVar6 + -6);
        plVar6 = DAT_180cd1310 + -9;
        DAT_180cd1310 = plVar6;
      }
      else {
        plVar11 = plVar11 + 9;
      }
    } while (plVar11 != plVar6);
  }
  return;
}



/* ===== 1801c5510 FUN_1801c5510 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801c5510(uint param_1,ulonglong param_2,ulonglong param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  short sVar10;
  
  cVar4 = DAT_180cd176c;
  cVar1 = DAT_180cd176a;
  bVar2 = DAT_180cd1769;
  lVar3 = DAT_180cd1360;
  uVar9 = DAT_180cd1300;
  if (param_1 < 0x202) {
    if (param_1 == 0x201) goto switchD_1801c565e_caseD_203;
    if (0xfd < param_1 - 8) {
      return in_RAX;
    }
    iVar7 = (int)param_2;
    switch(param_1) {
    case 8:
      uVar6 = 1;
      do {
        LOCK();
        bVar2 = (&DAT_180cd1768)[uVar6];
        (&DAT_180cd1768)[uVar6] = 0;
        uVar5 = (ulonglong)bVar2;
        UNLOCK();
        if (bVar2 != 0) {
          uVar5 = FUN_1801c3b20(uVar6,0);
        }
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
      } while ((int)uVar9 < 0x100);
      return uVar5;
    default:
      return (ulonglong)(&switchD_1801c555c::switchdataD_1801c5874)[param_1 - 8];
    case 0x1c:
      if (param_2 != 0) {
        return (ulonglong)(&switchD_1801c555c::switchdataD_1801c5874)[param_1 - 8];
      }
      uVar6 = 1;
      do {
        LOCK();
        bVar2 = (&DAT_180cd1768)[uVar6];
        (&DAT_180cd1768)[uVar6] = 0;
        uVar5 = (ulonglong)bVar2;
        UNLOCK();
        if (bVar2 != 0) {
          uVar5 = FUN_1801c3b20(uVar6,0);
        }
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
      } while ((int)uVar9 < 0x100);
      return uVar5;
    case 0x100:
    case 0x104:
      if (((param_3 >> 0x1e & 1) != 0) && (DAT_180cd1360 == 0)) {
        return 0;
      }
      goto LAB_1801c3bc0;
    case 0x101:
    case 0x105:
      if (0xfe < iVar7 - 1U) {
        return (ulonglong)(iVar7 - 1U);
      }
      param_2 = param_2 & 0xffffffff;
      LOCK();
      (&DAT_180cd1768)[iVar7] = 0;
      UNLOCK();
    }
    goto LAB_1801c5849;
  }
  if (0xb < param_1 - 0x202) {
    return in_RAX;
  }
  uVar6 = (ulonglong)(&switchD_1801c565e::switchdataD_1801c5974)[param_1 - 0x202] + 0x180000000;
  sVar10 = (short)(param_2 >> 0x10);
  switch(param_1) {
  case 0x202:
    param_2 = 1;
    LOCK();
    DAT_180cd1769 = 0;
    UNLOCK();
    break;
  case 0x203:
switchD_1801c565e_caseD_203:
    LOCK();
    DAT_180cd1360 = 0;
    UNLOCK();
    if (lVar3 != 0) {
      LOCK();
      DAT_180cd1300 = 1;
      UNLOCK();
      LOCK();
      DAT_180cd1868 = lVar3;
      UNLOCK();
      LOCK();
      DAT_180cd1769 = 1;
      UNLOCK();
      return (ulonglong)uVar9;
    }
    if ((DAT_180ca0a50 != 0) && (*(char *)(DAT_180ca0a50 + 0xe2) != '\0')) {
      DAT_180cd1360 = 0;
      return DAT_180ca0a50;
    }
    LOCK();
    DAT_180cd1769 = 1;
    UNLOCK();
    if (bVar2 != 0) {
      DAT_180cd1360 = 0;
      DAT_180cd1769 = 1;
      return (ulonglong)bVar2;
    }
    LOCK();
    _DAT_180cd136c = _DAT_180cd136c + 1;
    UNLOCK();
    uVar8 = 1;
    param_2 = 1;
    goto LAB_1801c584b;
  default:
    LOCK();
    DAT_180cd1360 = 0;
    UNLOCK();
    if (lVar3 != 0) {
      LOCK();
      DAT_180cd1300 = 2;
      UNLOCK();
      LOCK();
      DAT_180cd1868 = lVar3;
      UNLOCK();
      LOCK();
      DAT_180cd176a = 1;
      UNLOCK();
      return uVar6;
    }
    if ((DAT_180ca0a50 != 0) && (*(char *)(DAT_180ca0a50 + 0xe2) != '\0')) {
      DAT_180cd1360 = 0;
      return DAT_180ca0a50;
    }
    LOCK();
    DAT_180cd176a = '\x01';
    UNLOCK();
    if (cVar1 != '\0') {
      DAT_180cd1360 = 0;
      DAT_180cd176a = 1;
      return DAT_180ca0a50;
    }
    LOCK();
    _DAT_180cd1370 = _DAT_180cd1370 + 1;
    UNLOCK();
    uVar8 = 0x180000001;
    param_2 = 2;
    goto LAB_1801c584b;
  case 0x205:
    param_2 = 2;
    LOCK();
    DAT_180cd176a = '\0';
    UNLOCK();
    break;
  case 0x207:
  case 0x209:
    LOCK();
    DAT_180cd1360 = 0;
    UNLOCK();
    if (lVar3 != 0) {
      LOCK();
      DAT_180cd1300 = 4;
      UNLOCK();
      LOCK();
      DAT_180cd1868 = lVar3;
      UNLOCK();
      LOCK();
      DAT_180cd176c = 1;
      UNLOCK();
      return uVar6;
    }
    if ((DAT_180ca0a50 != 0) && (*(char *)(DAT_180ca0a50 + 0xe2) != '\0')) {
      DAT_180cd1360 = 0;
      return DAT_180ca0a50;
    }
    LOCK();
    DAT_180cd176c = '\x01';
    UNLOCK();
    if (cVar4 != '\0') {
      DAT_180cd1360 = 0;
      DAT_180cd176c = 1;
      return DAT_180ca0a50;
    }
    LOCK();
    _DAT_180cd1378 = _DAT_180cd1378 + 1;
    UNLOCK();
    uVar8 = 0x180000001;
    param_2 = 4;
    goto LAB_1801c584b;
  case 0x208:
    param_2 = 4;
    LOCK();
    DAT_180cd176c = '\0';
    UNLOCK();
    break;
  case 0x20a:
    goto switchD_1801c555c_caseD_9;
  case 0x20b:
  case 0x20d:
    iVar7 = (sVar10 != 1) + 5;
LAB_1801c3bc0:
    uVar6 = (ulonglong)(iVar7 - 1U);
    if (iVar7 - 1U < 0xff) {
      LOCK();
      DAT_180cd1360 = 0;
      UNLOCK();
      if (lVar3 != 0) {
        if (iVar7 == 0x1b) {
          DAT_180cd1300 = -1;
        }
        else if ((iVar7 == 8) || (iVar7 == 0x2e)) {
          DAT_180cd1300 = 0;
        }
        else {
          DAT_180cd1300 = iVar7;
        }
        LOCK();
        UNLOCK();
        LOCK();
        DAT_180cd1868 = lVar3;
        UNLOCK();
        LOCK();
        (&DAT_180cd1768)[iVar7] = 1;
        UNLOCK();
        return (longlong)iVar7;
      }
      if ((DAT_180ca0a50 == 0) || (uVar6 = DAT_180ca0a50, *(char *)(DAT_180ca0a50 + 0xe2) == '\0'))
      {
        uVar6 = (ulonglong)iVar7;
        LOCK();
        cVar1 = (&DAT_180cd1768)[uVar6];
        (&DAT_180cd1768)[uVar6] = '\x01';
        UNLOCK();
        if (cVar1 == '\0') {
          LOCK();
          *(int *)(&DAT_180cd1368 + uVar6 * 4) = *(int *)(&DAT_180cd1368 + uVar6 * 4) + 1;
          UNLOCK();
          uVar6 = FUN_1801c3b20(iVar7,0x180cd1301);
          return uVar6;
        }
      }
    }
    return uVar6;
  case 0x20c:
    param_2 = (ulonglong)((sVar10 != 1) + 5);
    LOCK();
    (&DAT_180cd176d)[sVar10 != 1] = 0;
    UNLOCK();
  }
LAB_1801c5849:
  uVar8 = 0;
LAB_1801c584b:
  uVar6 = FUN_1801c3b20(param_2,uVar8);
switchD_1801c555c_caseD_9:
  return uVar6;
}



/* ===== 1801c59b0 FUN_1801c59b0 ===== */

void FUN_1801c59b0(void)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  SHORT SVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char local_res8 [8];
  undefined1 local_res10 [8];
  char local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined1 local_b8;
  char local_b7;
  undefined1 local_b6 [2];
  int local_b4;
  undefined4 local_b0 [2];
  undefined4 *local_a8;
  char *local_a0;
  longlong *local_98;
  int *local_90;
  char *local_88;
  int *local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined4 *local_68;
  undefined4 *puStack_60;
  longlong local_58;
  
  puVar11 = auStack_d8;
  puVar12 = auStack_d8;
  uVar9 = 1;
  do {
    if (((&DAT_180cd1768)[uVar9] != '\0') && (SVar5 = GetAsyncKeyState((int)uVar9), -1 < SVar5)) {
      LOCK();
      cVar4 = (&DAT_180cd1768)[uVar9];
      (&DAT_180cd1768)[uVar9] = '\0';
      UNLOCK();
      if (cVar4 != '\0') {
        FUN_1801c3b20(uVar9,0);
      }
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
  } while ((int)uVar8 < 0x100);
  FUN_1801c4c50();
  local_68 = (undefined4 *)0x0;
  puStack_60 = (undefined4 *)0x0;
  local_58 = 0;
  iVar6 = FUN_1804e4d70(&DAT_1809ec110);
  lVar13 = DAT_180cd1880;
  puVar7 = DAT_180cd1878;
  puVar15 = DAT_180cd1870;
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec15c == 0x7fffffff) {
    DAT_1809ec15c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_68 = DAT_180cd1870;
  DAT_180cd1870 = (undefined4 *)0x0;
  puStack_60 = DAT_180cd1878;
  DAT_180cd1878 = (undefined4 *)0x0;
  local_70 = DAT_180cd1880;
  local_58 = DAT_180cd1880;
  DAT_180cd1880 = 0;
  FUN_1804e4e90(&DAT_1809ec110);
  plVar2 = DAT_180cd1308;
  plVar10 = DAT_180cd1310;
  if (puVar15 != puVar7) {
    puVar14 = puVar15;
    do {
      plVar2 = DAT_180cd1310;
      local_res8[0] = *(char *)(puVar14 + 1);
      local_b0[0] = *puVar14;
      local_b8 = 1;
      local_b7 = '\0';
      local_b4 = 0;
      plVar10 = DAT_180cd1308;
      if (DAT_180cd1308 != DAT_180cd1310) {
        do {
          cVar4 = FUN_1801c4890(plVar10);
          if (cVar4 != '\0') {
            local_res20[0] = 0;
            local_a8 = (undefined4 *)local_res20;
            local_a0 = (char *)local_b0;
            local_90 = (int *)&local_b8;
            local_88 = &local_b7;
            local_80 = &local_b4;
            local_98 = plVar10;
            FUN_1801c6c80(plVar10,&local_a8);
          }
          plVar10 = plVar10 + 9;
        } while (plVar10 != plVar2);
      }
      plVar10 = DAT_180cd1310;
      plVar2 = DAT_180cd1308;
      if ((local_res8[0] == '\0') && (local_b4 != 0x101)) {
        local_res10[0] = 0;
LAB_1801c5b4e:
        local_b6[0] = 0;
      }
      else {
        local_res10[0] = 1;
        if ((local_res8[0] == '\0') || (local_b4 == 0x100)) goto LAB_1801c5b4e;
        local_b6[0] = 1;
      }
      for (; plVar2 != plVar10; plVar2 = plVar2 + 9) {
        cVar4 = FUN_1801c4890(plVar2);
        if (cVar4 != '\0') {
          local_res18[0] = '\0';
          local_a8 = local_b0;
          local_a0 = local_res8;
          local_90 = &local_b4;
          local_88 = local_res18;
          local_80 = (int *)local_res10;
          local_78 = local_b6;
          uVar9 = 0;
          local_98 = plVar2;
          do {
            if ((((&DAT_1809ec1d8)[uVar9 * 0x80] != '\0') &&
                ((&DAT_1809ec1c8)[uVar9 * 0x10] == *plVar2)) &&
               ((&DAT_1809ec1d0)[uVar9 * 0x20] == (int)plVar2[1])) {
              FUN_1801c4a10(&local_a8,uVar9 & 0xffffffff,&DAT_1809ec160 + uVar9 * 0x80);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < 0x40);
          if (local_res18[0] != '\0') {
            FUN_1801c45d0(plVar2);
          }
        }
      }
      puVar14 = puVar14 + 2;
      plVar2 = DAT_180cd1308;
      plVar10 = DAT_180cd1310;
      lVar13 = local_70;
    } while (puVar14 != puVar7);
  }
  for (; plVar3 = DAT_180cd1310, plVar2 != DAT_180cd1310; plVar2 = plVar2 + 9) {
    DAT_180cd1310 = plVar10;
    FUN_1801c45d0(plVar2);
    plVar10 = DAT_180cd1310;
    DAT_180cd1310 = plVar3;
  }
  if (puVar15 == (undefined4 *)0x0) {
    DAT_180cd1310 = plVar10;
    return;
  }
  puVar7 = puVar15;
  DAT_180cd1310 = plVar10;
  if (0xfff < (ulonglong)((lVar13 - (longlong)puVar15 >> 3) * 8)) {
    puVar7 = *(undefined4 **)(puVar15 + -2);
    puVar15 = (undefined4 *)((longlong)puVar15 + (-8 - (longlong)puVar7));
    if (puVar15 <= &DAT_0000001f) goto LAB_1801c5cbd;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar11 = auStack_d0;
    puVar7 = puVar15;
  }
  puVar12 = puVar11;
LAB_1801c5cbd:
  *(undefined8 *)(puVar12 + -8) = 0x1801c5cc2;
  thunk_FUN_1803d64e0(puVar7);
  return;
}



/* ===== 1801c5d00 FUN_1801c5d00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c5d00(ulonglong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  int iVar3;
  ulonglong uVar4;
  ulonglong *_Buf1;
  ulonglong *_Buf2;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined *local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_80 = &DAT_1809ec0c0;
  iVar3 = FUN_1804e4d70(&DAT_1809ec0c0);
  puVar7 = DAT_180cd1890;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec10c == 0x7fffffff) {
    DAT_1809ec10c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd1888 != DAT_180cd1890) {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    puVar5 = DAT_180cd1888;
    do {
      _Buf2 = param_1;
      if (0xf < uVar1) {
        _Buf2 = (ulonglong *)*param_1;
      }
      _Size = puVar5[2];
      if (puVar5[3] < 0x10) {
        _Buf1 = puVar5;
      }
      else {
        _Buf1 = (ulonglong *)*puVar5;
      }
      if (_Size == sVar2) {
        if (_Size != 0) {
          iVar3 = memcmp(_Buf1,_Buf2,_Size);
          if (iVar3 != 0) goto LAB_1801c5db2;
        }
        *(undefined4 *)(puVar5 + 4) = param_2;
        goto LAB_1801c5ee9;
      }
LAB_1801c5db2:
      puVar5 = puVar5 + 6;
    } while (puVar5 != puVar7);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar1 = param_1[2];
  if (0xf < param_1[3]) {
    param_1 = (ulonglong *)*param_1;
  }
  if (0x7fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  if (uVar1 < 0x10) {
    uVar6 = 0xf;
    uStack_60 = 0xf;
    local_78 = *param_1;
    uStack_70 = param_1[1];
    local_68 = uVar1;
  }
  else {
    uVar4 = uVar1 | 0xf;
    uVar6 = 0x7fffffffffffffff;
    if ((uVar4 < 0x8000000000000000) && (uVar6 = uVar4, uVar4 < 0x16)) {
      uVar6 = 0x16;
    }
    local_88 = FUN_18000fb70(uVar6 + 1);
    local_78 = local_88;
    local_68 = uVar1;
    uStack_60 = uVar6;
    FUN_180540530(local_88,param_1,uVar1 + 1);
    puVar7 = DAT_180cd1890;
  }
  local_54 = 0;
  local_50 = 0;
  local_58 = param_2;
  if (puVar7 == DAT_180cd1898) {
    FUN_1801c7ca0(local_78,puVar7,&local_78);
  }
  else {
    *puVar7 = local_78;
    puVar7[1] = uStack_70;
    puVar7[2] = uVar1;
    puVar7[3] = uVar6;
    local_68 = _DAT_1808ad410;
    uStack_60 = _UNK_1808ad418;
    local_78 = local_78 & 0xffffffffffffff00;
    *(undefined4 *)(puVar7 + 4) = param_2;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    DAT_180cd1890 = DAT_180cd1890 + 6;
  }
  FUN_18000f890(&local_78);
LAB_1801c5ee9:
  FUN_1804e4e90(&DAT_1809ec0c0);
  return;
}



/* ===== 1801c5f50 FUN_1801c5f50 ===== */

void FUN_1801c5f50(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  iVar3 = FUN_1804e4d70(&DAT_1809ec0c0);
  puVar8 = DAT_180cd1890;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec10c == 0x7fffffff) {
    DAT_1809ec10c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  puVar7 = DAT_180cd1888;
  puVar6 = puVar8;
  if (DAT_180cd1888 == DAT_180cd1890) {
LAB_1801c6078:
    puVar4 = puVar6;
    if (puVar7 == puVar8) goto LAB_1801c60d8;
  }
  else {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    do {
      puVar5 = param_1;
      if (0xf < uVar1) {
        puVar5 = (undefined8 *)*param_1;
      }
      _Size = puVar7[2];
      if ((ulonglong)puVar7[3] < 0x10) {
        puVar4 = puVar7;
      }
      else {
        puVar4 = (undefined8 *)*puVar7;
      }
    } while (((_Size != sVar2) ||
             ((_Size != 0 && (iVar3 = memcmp(puVar4,puVar5,_Size), iVar3 != 0)))) &&
            (puVar7 = puVar7 + 6, puVar7 != puVar8));
    if (puVar7 == puVar8) goto LAB_1801c6078;
    puVar5 = puVar7 + 6;
    puVar4 = puVar8;
    if (puVar5 != puVar8) {
      do {
        if ((ulonglong)param_1[3] < 0x10) {
          puVar6 = param_1;
        }
        else {
          puVar6 = (undefined8 *)*param_1;
        }
        sVar2 = puVar5[2];
        if ((ulonglong)puVar5[3] < 0x10) {
          puVar4 = puVar5;
        }
        else {
          puVar4 = (undefined8 *)*puVar5;
        }
        if ((sVar2 != param_1[2]) ||
           ((sVar2 != 0 && (iVar3 = memcmp(puVar4,puVar6,sVar2), iVar3 != 0)))) {
          FUN_18002ba60(puVar7,puVar5);
          *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar5 + 4);
          *(undefined4 *)((longlong)puVar7 + 0x24) = *(undefined4 *)((longlong)puVar5 + 0x24);
          *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar5 + 5);
          puVar7 = puVar7 + 6;
        }
        puVar5 = puVar5 + 6;
      } while (puVar5 != puVar8);
      puVar6 = DAT_180cd1890;
      goto LAB_1801c6078;
    }
  }
  for (; puVar5 = puVar7, puVar8 != puVar4; puVar8 = puVar8 + 6) {
    FUN_18002ba60(puVar7,puVar8);
    *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar8 + 4);
    *(undefined4 *)((longlong)puVar7 + 0x24) = *(undefined4 *)((longlong)puVar8 + 0x24);
    *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar8 + 5);
    puVar7 = puVar7 + 6;
    puVar6 = DAT_180cd1890;
  }
  for (; puVar5 != puVar6; puVar5 = puVar5 + 6) {
    FUN_18000f890(puVar5);
  }
  DAT_180cd1890 = puVar7;
LAB_1801c60d8:
  FUN_1804e4e90(&DAT_1809ec0c0);
  return;
}



/* ===== 1801c6120 FUN_1801c6120 ===== */

undefined8 FUN_1801c6120(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t _Size;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  iVar4 = FUN_1804e4d70(&DAT_1809ec0c0);
  puVar3 = DAT_180cd1890;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec10c == 0x7fffffff) {
    DAT_1809ec10c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd1888 != DAT_180cd1890) {
    uVar1 = param_1[3];
    sVar2 = param_1[2];
    puVar5 = DAT_180cd1888;
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
        if (_Size != 0) {
          iVar4 = memcmp(_Buf1,_Buf2,_Size);
          if (iVar4 != 0) goto LAB_1801c61b5;
        }
        uVar6 = 1;
        *param_2 = *(undefined4 *)(puVar5 + 4);
        goto LAB_1801c61c0;
      }
LAB_1801c61b5:
      puVar5 = puVar5 + 6;
    } while (puVar5 != puVar3);
  }
  uVar6 = 0;
LAB_1801c61c0:
  FUN_1804e4e90(&DAT_1809ec0c0);
  return uVar6;
}



/* ===== 1801c6220 FUN_1801c6220 ===== */

undefined8 FUN_1801c6220(undefined8 *param_1,undefined4 *param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  size_t _Size;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  iVar4 = FUN_1804e4d70(&DAT_1809ec0c0);
  puVar3 = DAT_180cd1890;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ec10c == 0x7fffffff) {
    DAT_1809ec10c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180cd1888 != DAT_180cd1890) {
    sVar1 = param_1[2];
    uVar2 = param_1[3];
    puVar5 = DAT_180cd1888;
    do {
      if (uVar2 < 0x10) {
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
      if (_Size == sVar1) {
        if (_Size != 0) {
          iVar4 = memcmp(_Buf1,_Buf2,_Size);
          if (iVar4 != 0) goto LAB_1801c62bb;
        }
        if (*(char *)(puVar5 + 5) != '\0') {
          uVar6 = 1;
          *param_2 = *(undefined4 *)((longlong)puVar5 + 0x24);
          goto LAB_1801c62c6;
        }
      }
LAB_1801c62bb:
      puVar5 = puVar5 + 6;
    } while (puVar5 != puVar3);
  }
  uVar6 = 0;
LAB_1801c62c6:
  FUN_1804e4e90(&DAT_1809ec0c0);
  return uVar6;
}



/* ===== 1801c6320 FUN_1801c6320 ===== */

void FUN_1801c6320(ulonglong param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined4 *local_58;
  
  puVar4 = DAT_180cd1310;
  puVar8 = auStack_88;
  puVar7 = DAT_180cd1308;
  do {
    if (puVar7 == puVar4) {
      return;
    }
    uVar10 = *puVar7;
    if ((int)puVar7[1] == 4) {
      if ((uVar10 <= param_1) && (param_1 < (longlong)*(int *)((longlong)puVar7 + 0xc) + uVar10))
      goto LAB_1801c6382;
    }
    else if (param_1 == uVar10) {
LAB_1801c6382:
      iVar1 = (int)puVar7[2];
      if ((iVar1 != -1) || (puVar7[3] != puVar7[4])) {
        local_68 = (undefined4 *)0x0;
        puStack_60 = (undefined4 *)0x0;
        puVar9 = (undefined4 *)0x0;
        local_58 = (undefined4 *)0x0;
        if (puVar7[4] - puVar7[3] == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar10 = (longlong)(puVar7[4] - puVar7[3]) >> 2;
          if (0x3fffffffffffffff < uVar10) goto LAB_1801c64e1;
          puVar6 = (undefined4 *)FUN_18000fb70(uVar10 * 4);
          puVar9 = puVar6 + uVar10;
          uVar10 = puVar7[4] - puVar7[3];
          local_68 = puVar6;
          local_58 = puVar9;
          FUN_180540530(puVar6,puVar7[3],uVar10);
          puStack_60 = (undefined4 *)((uVar10 & 0xfffffffffffffffc) + (longlong)puVar6);
        }
        puVar5 = puStack_60;
        *(undefined4 *)(puVar7 + 2) = 0xffffffff;
        if (puVar7[3] != puVar7[4]) {
          puVar7[4] = puVar7[3];
        }
        puVar3 = puVar6;
        if (iVar1 != -1) {
          FUN_1801c4220(puVar7,iVar1,0,", inactive");
        }
        for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
          FUN_1801c4220(puVar7,*puVar3,0,", inactive");
        }
        FUN_1801c45d0(puVar7);
        if (puVar6 != (undefined4 *)0x0) {
          uVar10 = ((longlong)puVar9 - (longlong)puVar6 >> 2) * 4;
          if (0xfff < uVar10) {
            if (0x1f < (ulonglong)
                       ((longlong)puVar6 + (-8 - (longlong)*(undefined4 **)(puVar6 + -2)))) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar8 = auStack_80;
LAB_1801c64e1:
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar8 + -8) = &UNK_1801c64e6;
              FUN_1800118d0();
            }
            uVar10 = uVar10 + 0x27;
            puVar6 = *(undefined4 **)(puVar6 + -2);
          }
          thunk_FUN_1803d64e0(puVar6,uVar10);
        }
      }
    }
    puVar7 = puVar7 + 9;
  } while( true );
}



/* ===== 1801c64f0 FUN_1801c64f0 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c64f0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_2038 [32];
  undefined1 local_2018 [8192];
  ulonglong local_18;
  undefined8 uStack_10;
  
  lVar1 = DAT_180cd1310;
  uStack_10 = 0x1801c6500;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_2038;
  lVar3 = DAT_180cd1308;
  if (DAT_180cd1308 != DAT_180cd1310) {
    do {
      FUN_180068f30(lVar3 + 0x18);
      lVar3 = lVar3 + 0x48;
    } while (lVar3 != lVar1);
    DAT_180cd1310 = DAT_180cd1308;
  }
  FUN_180540170(local_2018,0,0x2000);
  FUN_1801c7170(local_2018);
  FUN_180540530(&DAT_1809ec160,local_2018,0x2000);
  puVar2 = (undefined8 *)&DAT_180cd1320;
  do {
    LOCK();
    *(undefined1 *)puVar2 = 0;
    UNLOCK();
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  } while (puVar2 != &DAT_180cd1360);
  return;
}



/* ===== 1801c65c0 FUN_1801c65c0 ===== */

void FUN_1801c65c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  uint uVar11;
  undefined1 local_60 [24];
  float local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  
  puVar4 = DAT_180cd1310;
  puVar9 = DAT_180cd1308;
  do {
    if (puVar9 == puVar4) {
      return;
    }
    if (((*(char *)(puVar9 + 7) != '\0') &&
        (puVar3 = (undefined4 *)*puVar9, (undefined4 *)((longlong)&DAT_18091a18c + 3) < puVar3)) &&
       (puVar3 < &DAT_180960e34)) {
      iVar1 = *(int *)(puVar9 + 1);
      iVar2 = *(int *)((longlong)puVar9 + 0xc);
      FUN_1801c77e0(local_60);
      local_40 = *(undefined1 *)(puVar9 + 7);
      local_44 = *(undefined4 *)((longlong)puVar9 + 0x34);
      pfVar10 = (float *)((longlong)puVar3 + param_1 + -0x18091a190);
      local_48 = *(float *)(puVar9 + 6);
      local_3c = *(undefined4 *)((longlong)puVar9 + 0x3c);
      local_38 = *(undefined1 *)(puVar9 + 8);
      local_37 = *(undefined1 *)((longlong)puVar9 + 0x41);
      local_34 = *(undefined4 *)((longlong)puVar9 + 0x44);
      if (pfVar10 != (float *)0x0) {
        if (iVar1 == 1) {
          *(bool *)pfVar10 = local_48 != 0.0;
        }
        else if (iVar1 == 2) {
          fVar6 = (float)FUN_1804f3280(local_48);
          *pfVar10 = fVar6;
        }
        else if (iVar1 == 3) {
          *pfVar10 = local_48;
        }
        else if ((iVar1 == 4) && (uVar5 = FUN_1804f3280(local_48), 0 < iVar2)) {
          uVar8 = 0;
          uVar11 = 1;
          do {
            if (0x17 < (uint)uVar8) break;
            uVar7 = uVar5 & uVar11;
            uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
            *(bool *)((longlong)pfVar10 + uVar8) = uVar7 != 0;
            uVar7 = (uint)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < iVar2);
        }
      }
      FUN_180068f30(local_60);
    }
    puVar9 = puVar9 + 9;
  } while( true );
}



/* ===== 1801c6760 FUN_1801c6760 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1801c6760(char *param_1,int param_2)

{
  char *_Str;
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined **ppuVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [32];
  char *local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_68;
  if (param_2 - 1U < 0xff) {
    ppuVar4 = (undefined **)&DAT_1805ea370;
    do {
      local_20 = param_1;
      if (*(int *)ppuVar4 == param_2) {
        _Str = ppuVar4[1];
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
        sVar3 = strlen(_Str);
        FUN_1800133a0(param_1,_Str,sVar3);
        return param_1;
      }
      ppuVar4 = ppuVar4 + 2;
    } while (ppuVar4 != &PTR_s_health_bar_1805ea6b0);
    if ((param_2 - 0x30U < 10) || (param_2 - 0x41U < 0x1a)) {
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
      param_1[0x10] = '\x01';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      cVar1 = (char)param_2 + ' ';
      if (param_2 < 0x41) {
        cVar1 = (char)param_2;
      }
      *param_1 = cVar1;
      param_1[1] = '\0';
    }
    else if ((param_2 < 0x60) || (0x69 < param_2)) {
      if ((param_2 < 0x70) || (0x87 < param_2)) {
        local_20 = (char *)0x0;
        uStack_18 = 0;
        snprintf(&local_20,0x10,"key %02X",param_2);
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
        sVar3 = strlen((char *)&local_20);
        FUN_1800133a0(param_1,&local_20,sVar3);
      }
      else {
        uVar2 = FUN_18003a390(local_40,param_2 + -0x6f);
        FUN_180066ab0(param_1,&DAT_1806f8f44,uVar2);
        FUN_18000f890(local_40);
      }
    }
    else {
      uVar2 = FUN_18003a390(local_40,param_2 + -0x60);
      FUN_180066ab0(param_1,&DAT_1806f8f3c,uVar2);
      FUN_18000f890(local_40);
    }
  }
  else {
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
    param_1[0x10] = '\x04';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0] = 'n';
    param_1[1] = 'o';
    param_1[2] = 'n';
    param_1[3] = 'e';
    param_1[4] = '\0';
  }
  return param_1;
}



/* ===== 1801c6930 FUN_1801c6930 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1801c6930(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *puVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 ***pppuVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [40];
  char *local_a0;
  char *local_98;
  undefined8 ***local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_c8;
  uStack_88 = 0;
  uVar11 = 0;
  local_80 = 0;
  local_78 = 0xf;
  local_90 = (undefined8 ***)0x0;
  uVar15 = 0;
  local_a0 = param_1;
  local_98 = param_1;
  do {
    lVar14 = uVar15 * 0xe4;
    if ((&DAT_18095d530)[lVar14] != '\0') {
      sVar5 = strlen(&DAT_18095d530 + lVar14);
      sVar7 = param_2[2];
      if ((ulonglong)param_2[3] < 0x10) {
        puVar10 = param_2;
      }
      else {
        puVar10 = (undefined8 *)*param_2;
      }
      if (sVar7 == sVar5) {
        if (sVar7 != 0) {
          iVar4 = memcmp(puVar10,&DAT_18095d530 + lVar14,sVar7);
          if (iVar4 != 0) goto LAB_1801c6b67;
        }
        if (uVar11 != 0) {
          FUN_1800134a0(&local_90,&DAT_1806f0594,2);
        }
        puVar6 = (undefined8 *)FUN_1801c6760(local_70,(&DAT_18095d590)[uVar15 * 0x39]);
        puVar10 = puVar6 + 2;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        FUN_1800134a0(&local_90,puVar6,*puVar10);
        FUN_18000f890(local_70);
        FUN_1800134a0(&local_90,&DAT_1806efc00,1);
        if ((&DAT_18095d594)[uVar15 * 0x39] == 1) {
          pcVar12 = "toggle";
        }
        else if ((&DAT_18095d594)[uVar15 * 0x39] == 2) {
          pcVar12 = "always";
        }
        else {
          pcVar12 = "hold";
        }
        sVar7 = strlen(pcVar12);
        FUN_1800134a0(&local_90,pcVar12,sVar7);
        pcVar12 = " -> off";
        if ((&DAT_18095d598)[lVar14] != '\0') {
          pcVar12 = " -> on";
        }
        sVar7 = strlen(pcVar12);
        FUN_1800134a0(&local_90,pcVar12,sVar7);
        pcVar12 = " idle";
        if ((&DAT_180cd1320)[uVar15] != '\0') {
          pcVar12 = " engaged";
        }
        sVar7 = strlen(pcVar12);
        FUN_1800134a0(&local_90,pcVar12,sVar7);
        if (((&DAT_18095d590)[uVar15 * 0x39] - 1 < 0xff) &&
           ((&DAT_180cd1768)[(int)(&DAT_18095d590)[uVar15 * 0x39]] != '\0')) {
          FUN_1800134a0(&local_90," key down",9);
        }
        if ((&DAT_1809ec1d8)[uVar15 * 0x80] == '\0') {
          FUN_1800134a0(&local_90," (not live)",0xb);
        }
        uVar11 = local_80;
      }
    }
LAB_1801c6b67:
    pcVar12 = local_a0;
    uVar15 = uVar15 + 1;
    if (0x3f < uVar15) {
      local_a0[0] = '\0';
      local_a0[1] = '\0';
      local_a0[2] = '\0';
      local_a0[3] = '\0';
      local_a0[4] = '\0';
      local_a0[5] = '\0';
      local_a0[6] = '\0';
      local_a0[7] = '\0';
      local_a0[8] = '\0';
      local_a0[9] = '\0';
      local_a0[10] = '\0';
      local_a0[0xb] = '\0';
      local_a0[0xc] = '\0';
      local_a0[0xd] = '\0';
      local_a0[0xe] = '\0';
      local_a0[0xf] = '\0';
      if (uVar11 == 0) {
        local_a0[0x10] = '\t';
        local_a0[0x11] = '\0';
        local_a0[0x12] = '\0';
        local_a0[0x13] = '\0';
        local_a0[0x14] = '\0';
        local_a0[0x15] = '\0';
        local_a0[0x16] = '\0';
        local_a0[0x17] = '\0';
        local_a0[0x18] = '\x0f';
        local_a0[0x19] = '\0';
        local_a0[0x1a] = '\0';
        local_a0[0x1b] = '\0';
        local_a0[0x1c] = '\0';
        local_a0[0x1d] = '\0';
        local_a0[0x1e] = '\0';
        local_a0[0x1f] = '\0';
        *(undefined8 *)local_a0 = s_no_hotkey_1806f8f88._0_8_;
        local_a0[8] = s_no_hotkey_1806f8f88[8];
        local_a0[9] = '\0';
      }
      else {
        local_a0[0x10] = '\0';
        local_a0[0x11] = '\0';
        local_a0[0x12] = '\0';
        local_a0[0x13] = '\0';
        local_a0[0x14] = '\0';
        local_a0[0x15] = '\0';
        local_a0[0x16] = '\0';
        local_a0[0x17] = '\0';
        local_a0[0x18] = '\0';
        local_a0[0x19] = '\0';
        local_a0[0x1a] = '\0';
        local_a0[0x1b] = '\0';
        local_a0[0x1c] = '\0';
        local_a0[0x1d] = '\0';
        local_a0[0x1e] = '\0';
        local_a0[0x1f] = '\0';
        pppuVar13 = &local_90;
        if (0xf < local_78) {
          pppuVar13 = local_90;
        }
        if (0x7fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_180011990();
        }
        if (uVar11 < 0x10) {
          *(ulonglong *)(local_a0 + 0x10) = uVar11;
          local_a0[0x18] = '\x0f';
          local_a0[0x19] = '\0';
          local_a0[0x1a] = '\0';
          local_a0[0x1b] = '\0';
          local_a0[0x1c] = '\0';
          local_a0[0x1d] = '\0';
          local_a0[0x1e] = '\0';
          local_a0[0x1f] = '\0';
          uVar1 = *(undefined4 *)((longlong)pppuVar13 + 4);
          uVar2 = *(undefined4 *)(pppuVar13 + 1);
          uVar3 = *(undefined4 *)((longlong)pppuVar13 + 0xc);
          *(undefined4 *)local_a0 = *(undefined4 *)pppuVar13;
          *(undefined4 *)(local_a0 + 4) = uVar1;
          *(undefined4 *)(local_a0 + 8) = uVar2;
          *(undefined4 *)(local_a0 + 0xc) = uVar3;
        }
        else {
          uVar8 = uVar11 | 0xf;
          uVar15 = 0x7fffffffffffffff;
          if ((uVar8 < 0x8000000000000000) && (uVar15 = uVar8, uVar8 < 0x16)) {
            uVar15 = 0x16;
          }
          uVar9 = FUN_18000fb70(uVar15 + 1);
          *(undefined8 *)pcVar12 = uVar9;
          *(ulonglong *)(pcVar12 + 0x10) = uVar11;
          *(ulonglong *)(pcVar12 + 0x18) = uVar15;
          FUN_180540530(uVar9,pppuVar13,uVar11 + 1);
        }
      }
      FUN_18000f890(&local_90);
      return pcVar12;
    }
  } while( true );
}



/* ===== 1801c6c80 FUN_1801c6c80 ===== */

void FUN_1801c6c80(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  lVar3 = 0;
  do {
    iVar5 = (int)uVar2;
    if ((((((&DAT_1809ec1d8)[uVar2 * 0x80] != '\0') && ((&DAT_1809ec1c8)[uVar2 * 0x10] == *param_1))
         && ((&DAT_1809ec1d0)[uVar2 * 0x20] == (int)param_1[1])) &&
        ((*(char *)*param_2 == '\0' && ((&DAT_1809ec1c0)[uVar2 * 0x20] == *(int *)param_2[1])))) &&
       ((&DAT_1809ec1c4)[uVar2 * 0x20] == 1)) {
      *(char *)*param_2 = '\x01';
      iVar1 = *(int *)(param_2[2] + 0x10);
      if ((*(char *)param_2[3] == '\0') && ((iVar1 == iVar5) != (bool)*(char *)param_2[4])) {
        *(uint *)param_2[5] = (iVar1 == iVar5) + 0x100;
      }
      *(bool *)param_2[4] = iVar1 == iVar5;
      *(undefined1 *)param_2[3] = 0;
    }
    if (((((&DAT_1809ec258)[lVar3] != '\0') &&
         (*(longlong *)((longlong)&DAT_1809ec248 + lVar3) == *param_1)) &&
        (*(int *)((longlong)&DAT_1809ec250 + lVar3) == (int)param_1[1])) &&
       (((*(char *)*param_2 == '\0' &&
         (*(int *)((longlong)&DAT_1809ec240 + lVar3) == *(int *)param_2[1])) &&
        (*(int *)((longlong)&DAT_1809ec244 + lVar3) == 1)))) {
      *(char *)*param_2 = '\x01';
      iVar4 = iVar5 + 1;
      iVar1 = *(int *)(param_2[2] + 0x10);
      if ((*(char *)param_2[3] == '\0') && ((iVar1 == iVar4) != (bool)*(char *)param_2[4])) {
        *(uint *)param_2[5] = (iVar1 == iVar4) + 0x100;
      }
      *(bool *)param_2[4] = iVar1 == iVar4;
      *(undefined1 *)param_2[3] = 0;
    }
    if ((((((&DAT_1809ec2d8)[lVar3] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec2c8 + lVar3) == *param_1)) &&
         (*(int *)((longlong)&DAT_1809ec2d0 + lVar3) == (int)param_1[1])) &&
        ((*(char *)*param_2 == '\0' &&
         (*(int *)((longlong)&DAT_1809ec2c0 + lVar3) == *(int *)param_2[1])))) &&
       (*(int *)((longlong)&DAT_1809ec2c4 + lVar3) == 1)) {
      *(char *)*param_2 = '\x01';
      iVar4 = iVar5 + 2;
      iVar1 = *(int *)(param_2[2] + 0x10);
      if ((*(char *)param_2[3] == '\0') && ((iVar1 == iVar4) != (bool)*(char *)param_2[4])) {
        *(uint *)param_2[5] = (iVar1 == iVar4) + 0x100;
      }
      *(bool *)param_2[4] = iVar1 == iVar4;
      *(undefined1 *)param_2[3] = 0;
    }
    if ((((((&DAT_1809ec358)[lVar3] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec348 + lVar3) == *param_1)) &&
         (*(int *)((longlong)&DAT_1809ec350 + lVar3) == (int)param_1[1])) &&
        ((*(char *)*param_2 == '\0' &&
         (*(int *)((longlong)&DAT_1809ec340 + lVar3) == *(int *)param_2[1])))) &&
       (*(int *)((longlong)&DAT_1809ec344 + lVar3) == 1)) {
      *(char *)*param_2 = '\x01';
      iVar4 = iVar5 + 3;
      iVar1 = *(int *)(param_2[2] + 0x10);
      if ((*(char *)param_2[3] == '\0') && ((iVar1 == iVar4) != (bool)*(char *)param_2[4])) {
        *(uint *)param_2[5] = (iVar1 == iVar4) + 0x100;
      }
      *(bool *)param_2[4] = iVar1 == iVar4;
      *(undefined1 *)param_2[3] = 0;
    }
    if (((((&DAT_1809ec3d8)[lVar3] != '\0') &&
         (*(longlong *)((longlong)&DAT_1809ec3c8 + lVar3) == *param_1)) &&
        (*(int *)((longlong)&DAT_1809ec3d0 + lVar3) == (int)param_1[1])) &&
       (((*(char *)*param_2 == '\0' &&
         (*(int *)((longlong)&DAT_1809ec3c0 + lVar3) == *(int *)param_2[1])) &&
        (*(int *)((longlong)&DAT_1809ec3c4 + lVar3) == 1)))) {
      *(char *)*param_2 = '\x01';
      iVar4 = iVar5 + 4;
      iVar1 = *(int *)(param_2[2] + 0x10);
      if ((*(char *)param_2[3] == '\0') && ((iVar1 == iVar4) != (bool)*(char *)param_2[4])) {
        *(uint *)param_2[5] = (iVar1 == iVar4) + 0x100;
      }
      *(bool *)param_2[4] = iVar1 == iVar4;
      *(undefined1 *)param_2[3] = 0;
    }
    if (((((&DAT_1809ec458)[lVar3] != '\0') &&
         (*(longlong *)((longlong)&DAT_1809ec448 + lVar3) == *param_1)) &&
        (*(int *)((longlong)&DAT_1809ec450 + lVar3) == (int)param_1[1])) &&
       (((*(char *)*param_2 == '\0' &&
         (*(int *)((longlong)&DAT_1809ec440 + lVar3) == *(int *)param_2[1])) &&
        (*(int *)((longlong)&DAT_1809ec444 + lVar3) == 1)))) {
      *(char *)*param_2 = '\x01';
      iVar4 = iVar5 + 5;
      iVar1 = *(int *)(param_2[2] + 0x10);
      if ((*(char *)param_2[3] == '\0') && ((iVar1 == iVar4) != (bool)*(char *)param_2[4])) {
        *(uint *)param_2[5] = (iVar1 == iVar4) + 0x100;
      }
      *(bool *)param_2[4] = iVar1 == iVar4;
      *(undefined1 *)param_2[3] = 0;
    }
    if ((((((&DAT_1809ec4d8)[lVar3] != '\0') &&
          (*(longlong *)((longlong)&DAT_1809ec4c8 + lVar3) == *param_1)) &&
         (*(int *)((longlong)&DAT_1809ec4d0 + lVar3) == (int)param_1[1])) &&
        ((*(char *)*param_2 == '\0' &&
         (*(int *)((longlong)&DAT_1809ec4c0 + lVar3) == *(int *)param_2[1])))) &&
       (*(int *)((longlong)&DAT_1809ec4c4 + lVar3) == 1)) {
      *(char *)*param_2 = '\x01';
      iVar4 = iVar5 + 6;
      iVar1 = *(int *)(param_2[2] + 0x10);
      if ((*(char *)param_2[3] == '\0') && ((iVar1 == iVar4) != (bool)*(char *)param_2[4])) {
        *(uint *)param_2[5] = (iVar1 == iVar4) + 0x100;
      }
      *(bool *)param_2[4] = iVar1 == iVar4;
      *(undefined1 *)param_2[3] = 0;
    }
    if (((((&DAT_1809ec558)[lVar3] != '\0') &&
         (*(longlong *)((longlong)&DAT_1809ec548 + lVar3) == *param_1)) &&
        (*(int *)((longlong)&DAT_1809ec550 + lVar3) == (int)param_1[1])) &&
       (((*(char *)*param_2 == '\0' &&
         (*(int *)((longlong)&DAT_1809ec540 + lVar3) == *(int *)param_2[1])) &&
        (*(int *)((longlong)&DAT_1809ec544 + lVar3) == 1)))) {
      *(char *)*param_2 = '\x01';
      iVar5 = iVar5 + 7;
      iVar1 = *(int *)(param_2[2] + 0x10);
      if ((*(char *)param_2[3] == '\0') && ((iVar1 == iVar5) != (bool)*(char *)param_2[4])) {
        *(uint *)param_2[5] = (iVar1 == iVar5) + 0x100;
      }
      *(bool *)param_2[4] = iVar1 == iVar5;
      *(undefined1 *)param_2[3] = 0;
    }
    uVar2 = uVar2 + 8;
    lVar3 = lVar3 + 0x400;
  } while (uVar2 < 0x40);
  return;
}



/* ===== 1801c7170 FUN_1801c7170 ===== */

void FUN_1801c7170(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    lVar2 = uVar3 * 0x80;
    *(undefined8 *)(lVar2 + param_1) = 0;
    ((undefined8 *)(lVar2 + param_1))[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x30 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x40 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x50 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x60 + param_1) = 0;
    *(undefined4 *)(lVar2 + 100 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x68 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x70 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x74 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x78 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x80 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x90 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0xa0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0xb0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0xc0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0xd0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0xe0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0xe4 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0xe8 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0xf0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0xf4 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0xf8 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x100 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x110 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x120 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x130 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x140 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x150 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x160 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x164 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x168 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x170 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x174 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x178 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x180 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 400 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x1a0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x1b0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x1c0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x1d0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x1e0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x1e4 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x1e8 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x1f0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 500 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x1f8 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x200 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x210 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x220 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x230 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x240 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x250 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x260 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x264 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x268 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x270 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x274 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x278 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x280 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x290 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x2a0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x2b0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x2c0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x2d0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x2e0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x2e4 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x2e8 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x2f0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x2f4 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x2f8 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x300 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x310 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 800 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x330 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x340 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x350 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x360 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x364 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x368 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x370 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x374 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x378 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x380 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x390 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x3a0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x3b0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x3c0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x3d0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x3e0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x3e4 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 1000 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x3f0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x3f4 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x3f8 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x400 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x410 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x420 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x430 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x440 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x450 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x460 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x464 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x468 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x470 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x474 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x478 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x480 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x490 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x4a0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x4b0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x4c0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x4d0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x4e0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x4e4 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x4e8 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x4f0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x4f4 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x4f8 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x500 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x510 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x520 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x530 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x540 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x550 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x560 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x564 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x568 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x570 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x574 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x578 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x580 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x590 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x5a0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x5b0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x5c0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x5d0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x5e0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x5e4 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x5e8 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x5f0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x5f4 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x5f8 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x600 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x610 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x620 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x630 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x640 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x650 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x660 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x664 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x668 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x670 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x674 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x678 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x680 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x690 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x6a0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x6b0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar3 = uVar3 + 0x10;
    puVar1 = (undefined8 *)(lVar2 + 0x6c0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x6d0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x6e0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x6e4 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x6e8 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x6f0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x6f4 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x6f8 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x700 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x710 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x720 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x730 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x740 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x750 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x760 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x764 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x768 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x770 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x774 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x778 + param_1) = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x780 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x790 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x7a0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x7b0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x7c0 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 2000 + param_1);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x7e0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x7e4 + param_1) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x7e8 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x7f0 + param_1) = 0;
    *(undefined4 *)(lVar2 + 0x7f4 + param_1) = 1;
    *(undefined1 *)(lVar2 + 0x7f8 + param_1) = 0;
  } while (uVar3 < 0x40);
  return;
}



/* ===== 1801c77e0 FUN_1801c77e0 ===== */

longlong * FUN_1801c77e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] - *param_2 != 0) {
    uVar3 = param_2[1] - *param_2 >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    lVar1 = uVar3 * 4;
    lVar2 = FUN_18000fb70(lVar1);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar1 + lVar2;
    uVar3 = param_2[1] - *param_2;
    FUN_180540530(lVar2,*param_2,uVar3);
    param_1[1] = (uVar3 & 0xfffffffffffffffc) + lVar2;
  }
  return param_1;
}



/* ===== 1801c7890 FUN_1801c7890 ===== */

undefined8 * FUN_1801c7890(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar3 = DAT_180cd1878;
  if (DAT_180cd1878 != DAT_180cd1880) {
    *DAT_180cd1878 = *param_2;
    puVar3 = DAT_180cd1878;
    DAT_180cd1878 = DAT_180cd1878 + 1;
    return puVar3;
  }
  uVar8 = 0x1fffffffffffffff;
  uVar11 = (longlong)DAT_180cd1878 - (longlong)DAT_180cd1870;
  lVar4 = (longlong)uVar11 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar6 = (longlong)DAT_180cd1880 - (longlong)DAT_180cd1870 >> 3;
  uVar1 = lVar4 + 1;
  if (uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = uVar1;
    if (uVar1 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar5 = (undefined8 *)FUN_18000fb70(uVar8 * 8);
  puVar12 = (undefined8 *)((uVar11 & 0xfffffffffffffff8) + (longlong)puVar5);
  *puVar12 = *param_2;
  if (puVar3 == DAT_180cd1878) {
    lVar4 = (longlong)DAT_180cd1878 - (longlong)DAT_180cd1870;
    puVar7 = puVar5;
    puVar3 = DAT_180cd1870;
  }
  else {
    FUN_180540530(puVar5,DAT_180cd1870,(longlong)puVar3 - (longlong)DAT_180cd1870);
    puVar7 = puVar12 + 1;
    lVar4 = (longlong)DAT_180cd1878 - (longlong)puVar3;
  }
  puVar9 = auStack_38;
  puVar10 = auStack_38;
  FUN_180540530(puVar7,puVar3,lVar4);
  if (DAT_180cd1870 == (undefined8 *)0x0) goto LAB_1801c79ef;
  puVar3 = DAT_180cd1870;
  if ((ulonglong)(((longlong)DAT_180cd1880 - (longlong)DAT_180cd1870 >> 3) * 8) < 0x1000) {
LAB_1801c79e4:
    puVar10 = puVar9;
  }
  else {
    puVar3 = (undefined8 *)DAT_180cd1870[-1];
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cd1870 + (-8 - (longlong)puVar3))) {
      puVar3 = (undefined8 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar9 = auStack_30;
      goto LAB_1801c79e4;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1801c79ef;
  thunk_FUN_1803d64e0(puVar3);
LAB_1801c79ef:
  DAT_180cd1870 = puVar5;
  DAT_180cd1878 = puVar5 + uVar1;
  DAT_180cd1880 = puVar5 + uVar8;
  return puVar12;
}



/* ===== 1801c7a40 FUN_1801c7a40 ===== */

longlong FUN_1801c7a40(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar10 = DAT_180cd1308;
  uVar13 = 0x38e38e38e38e38e;
  lVar7 = ((longlong)(DAT_180cd1310 - DAT_180cd1308) >> 3) * -0x71c71c71c71c71c7;
  if (lVar7 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = ((longlong)(DAT_180cd1318 - DAT_180cd1308) >> 3) * -0x71c71c71c71c71c7;
  if (uVar9 <= 0x38e38e38e38e38e - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar13 = uVar1;
    if (uVar1 <= uVar9) {
      uVar13 = uVar9;
    }
    if (0x38e38e38e38e38e < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar8 = FUN_18000fb70(uVar13 * 0x48);
  lVar7 = (longlong)(param_2 - uVar10) / 0x48;
  *(undefined8 *)(lVar8 + lVar7 * 0x48) = *param_3;
  lVar2 = lVar8 + lVar7 * 0x48;
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_3 + 2);
  uVar3 = param_3[5];
  uVar4 = param_3[4];
  uVar5 = param_3[3];
  param_3[5] = 0;
  param_3[4] = 0;
  param_3[3] = 0;
  *(undefined8 *)(lVar2 + 0x18) = uVar5;
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined1 *)(lVar2 + 0x38) = *(undefined1 *)(param_3 + 7);
  *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined1 *)(lVar2 + 0x40) = *(undefined1 *)(param_3 + 8);
  *(undefined1 *)(lVar2 + 0x41) = *(undefined1 *)((longlong)param_3 + 0x41);
  *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar10 = DAT_180cd1308;
  lVar7 = lVar8;
  if (param_2 != DAT_180cd1310) {
    FUN_1801c7fc0(DAT_180cd1308,param_2,lVar8);
    lVar7 = lVar2 + 0x48;
    uVar10 = param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_1801c7fc0(uVar10,DAT_180cd1310,lVar7);
  uVar9 = DAT_180cd1310;
  uVar10 = DAT_180cd1308;
  if (DAT_180cd1308 == 0) goto LAB_1801c7c46;
  for (; uVar10 != uVar9; uVar10 = uVar10 + 0x48) {
    FUN_180068f30(uVar10 + 0x18);
  }
  uVar10 = DAT_180cd1308;
  if ((ulonglong)(((longlong)(DAT_180cd1318 - DAT_180cd1308) >> 3) * 8) < 0x1000) {
LAB_1801c7c3e:
    puVar12 = puVar11;
  }
  else {
    uVar10 = *(ulonglong *)(DAT_180cd1308 - 8);
    uVar9 = (DAT_180cd1308 - uVar10) - 8;
    if (0x1f < uVar9) {
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar11 = auStack_40;
      uVar10 = uVar9;
      goto LAB_1801c7c3e;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1801c7c46;
  thunk_FUN_1803d64e0(uVar10);
LAB_1801c7c46:
  DAT_180cd1308 = lVar8;
  DAT_180cd1310 = lVar8 + uVar1 * 0x48;
  DAT_180cd1318 = uVar13 * 0x48 + lVar8;
  return lVar2;
}



/* ===== 1801c7ca0 FUN_1801c7ca0 ===== */

undefined8 * FUN_1801c7ca0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar13 = (undefined4 *)DAT_180cd1888;
  uVar14 = 0x555555555555555;
  lVar9 = ((longlong)DAT_180cd1890 - (longlong)DAT_180cd1888 >> 4) * -0x5555555555555555;
  if (lVar9 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar9 + 1;
  uVar11 = ((longlong)DAT_180cd1898 - (longlong)DAT_180cd1888 >> 4) * -0x5555555555555555;
  if (uVar11 <= 0x555555555555555 - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar14 = uVar1;
    if (uVar1 <= uVar11) {
      uVar14 = uVar11;
    }
    if (0x555555555555555 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar10 = (undefined8 *)FUN_18000fb70(uVar14 * 0x30);
  puVar15 = auStack_48;
  puVar16 = auStack_48;
  puVar17 = puVar10 + (((longlong)param_2 - (longlong)puVar13) / 0x30) * 6;
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  puVar17[3] = 0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)puVar17 = *param_3;
  *(undefined4 *)((longlong)puVar17 + 4) = uVar3;
  *(undefined4 *)(puVar17 + 1) = uVar4;
  *(undefined4 *)((longlong)puVar17 + 0xc) = uVar5;
  uVar6 = *(undefined8 *)(param_3 + 6);
  puVar17[2] = *(undefined8 *)(param_3 + 4);
  puVar17[3] = uVar6;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar17 + 4) = param_3[8];
  *(undefined4 *)((longlong)puVar17 + 0x24) = param_3[9];
  *(undefined1 *)(puVar17 + 5) = *(undefined1 *)(param_3 + 10);
  puVar8 = (undefined4 *)DAT_180cd1890;
  puVar12 = puVar10;
  puVar13 = (undefined4 *)DAT_180cd1888;
  if ((undefined8 *)param_2 == DAT_180cd1890) {
    for (; puVar13 != puVar8; puVar13 = puVar13 + 0xc) {
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar3 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      *(undefined4 *)puVar12 = *puVar13;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar3;
      *(undefined4 *)(puVar12 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(puVar13 + 6);
      puVar12[2] = *(undefined8 *)(puVar13 + 4);
      puVar12[3] = uVar6;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      *(undefined4 *)(puVar12 + 4) = puVar13[8];
      *(undefined4 *)((longlong)puVar12 + 0x24) = puVar13[9];
      *(undefined1 *)(puVar12 + 5) = *(undefined1 *)(puVar13 + 10);
      puVar12 = puVar12 + 6;
    }
  }
  else {
    while( true ) {
      puVar7 = puVar17;
      DAT_180cd1890 = (undefined8 *)puVar8;
      if (puVar13 == param_2) break;
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar3 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      *(undefined4 *)puVar12 = *puVar13;
      *(undefined4 *)((longlong)puVar12 + 4) = uVar3;
      *(undefined4 *)(puVar12 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar5;
      uVar6 = *(undefined8 *)(puVar13 + 6);
      puVar12[2] = *(undefined8 *)(puVar13 + 4);
      puVar12[3] = uVar6;
      *(undefined8 *)(puVar13 + 4) = 0;
      *(undefined8 *)(puVar13 + 6) = 0xf;
      *(undefined1 *)puVar13 = 0;
      *(undefined4 *)(puVar12 + 4) = puVar13[8];
      *(undefined4 *)((longlong)puVar12 + 0x24) = puVar13[9];
      *(undefined1 *)(puVar12 + 5) = *(undefined1 *)(puVar13 + 10);
      puVar12 = puVar12 + 6;
      puVar13 = puVar13 + 0xc;
      puVar8 = (undefined4 *)DAT_180cd1890;
    }
    for (; param_2 != puVar8; param_2 = param_2 + 0xc) {
      puVar12 = puVar7 + 6;
      *puVar12 = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *(undefined4 *)puVar12 = *param_2;
      *(undefined4 *)((longlong)puVar7 + 0x34) = uVar3;
      *(undefined4 *)(puVar7 + 7) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar5;
      uVar6 = *(undefined8 *)(param_2 + 6);
      puVar7[8] = *(undefined8 *)(param_2 + 4);
      puVar7[9] = uVar6;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      *(undefined4 *)(puVar7 + 10) = param_2[8];
      *(undefined4 *)((longlong)puVar7 + 0x54) = param_2[9];
      *(undefined1 *)(puVar7 + 0xb) = *(undefined1 *)(param_2 + 10);
      puVar7 = puVar12;
    }
  }
  puVar8 = (undefined4 *)DAT_180cd1890;
  puVar13 = (undefined4 *)DAT_180cd1888;
  if (DAT_180cd1888 == (undefined8 *)0x0) goto LAB_1801c7f68;
  for (; puVar13 != puVar8; puVar13 = puVar13 + 0xc) {
    FUN_18000f890(puVar13);
  }
  puVar13 = (undefined4 *)DAT_180cd1888;
  if ((ulonglong)(((longlong)DAT_180cd1898 - (longlong)DAT_180cd1888 >> 4) << 4) < 0x1000) {
LAB_1801c7f5d:
    puVar16 = puVar15;
  }
  else {
    puVar13 = *(undefined4 **)((longlong)DAT_180cd1888 + -8);
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cd1888 + (-8 - (longlong)puVar13))) {
      puVar13 = (undefined4 *)&DAT_00000005;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar15 = auStack_40;
      goto LAB_1801c7f5d;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x1801c7f68;
  thunk_FUN_1803d64e0(puVar13);
LAB_1801c7f68:
  DAT_180cd1888 = puVar10;
  DAT_180cd1890 = puVar10 + uVar1 * 6;
  DAT_180cd1898 = puVar10 + uVar14 * 6;
  return puVar17;
}



/* ===== 1801c7fc0 FUN_1801c7fc0 ===== */

undefined8 * FUN_1801c7fc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    *param_3 = *param_1;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 2);
    uVar1 = param_1[4];
    uVar2 = param_1[3];
    uVar3 = param_1[5];
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_3[3] = uVar2;
    param_3[4] = uVar1;
    param_3[5] = uVar3;
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 6);
    *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
    *(undefined1 *)(param_3 + 7) = *(undefined1 *)(param_1 + 7);
    *(undefined4 *)((longlong)param_3 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x3c);
    *(undefined1 *)(param_3 + 8) = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)((longlong)param_3 + 0x41) = *(undefined1 *)((longlong)param_1 + 0x41);
    *(undefined4 *)((longlong)param_3 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x44);
    param_3 = param_3 + 9;
  }
  return param_3;
}



/* ===== 1801c8080 FUN_1801c8080 ===== */

void FUN_1801c8080(int param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  char *_Str;
  
  iVar1 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee40c == 0x7fffffff) {
    DAT_1809ee40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  (&DAT_1809ee160)[(longlong)param_1 * 10] = 1;
  _Str = "";
  if (param_2 != (char *)0x0) {
    _Str = param_2;
  }
  sVar2 = strlen(_Str);
  FUN_180029840(&DAT_1809ee160 + ((longlong)param_1 * 5 + 1) * 2,_Str,sVar2);
  FUN_1804e4e90(&DAT_1809ee3c0);
  return;
}



/* ===== 1801c8140 FUN_1801c8140 ===== */

void FUN_1801c8140(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  char *_Str;
  
  iVar1 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee40c == 0x7fffffff) {
    DAT_1809ee40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  (&DAT_1809ee160)[(longlong)param_1 * 10] = param_2;
  _Str = "";
  if (param_3 != (char *)0x0) {
    _Str = param_3;
  }
  sVar2 = strlen(_Str);
  FUN_180029840(&DAT_1809ee160 + ((longlong)param_1 * 5 + 1) * 2,_Str,sVar2);
  FUN_1804e4e90(&DAT_1809ee3c0);
  return;
}



/* ===== 1801c8200 FUN_1801c8200 ===== */

undefined8 FUN_1801c8200(void)

{
  undefined8 uVar1;
  ULONGLONG UVar2;
  
  UVar2 = GetTickCount64();
  uVar1 = DAT_180cd18b8;
  LOCK();
  DAT_180cd18b8 = UVar2;
  UNLOCK();
  LOCK();
  DAT_180cc3e1a = 1;
  UNLOCK();
  return uVar1;
}



/* ===== 1801c8230 thunk_FUN_1812222e1 ===== */

void thunk_FUN_1812222e1(void)

{
  code *pcVar1;
  char *pcStack_28;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  pcVar1 = (code *)thunk_FUN_181253d40();
  if (pcVar1 != (code *)0x0) {
    pcStack_28 = (char *)0x0;
    (*pcVar1)(&pcStack_28,auStack_20,auStack_18);
  }
  FUN_1801c8237();
  return;
}



/* ===== 1801c8237 FUN_1801c8237 ===== */

void FUN_1801c8237(void)

{
  snprintf(&DAT_180cd18d0,0x100,&DAT_1806d3198);
  return;
}



/* ===== 1801c8250 FUN_1801c8250 ===== */

undefined * FUN_1801c8250(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  BOOL local_res8 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  BVar2 = InitOnceBeginInitialize((LPINIT_ONCE)&DAT_180cd19d0,0,local_res8,(LPVOID *)0x0);
  puVar4 = auStack_28;
  if (BVar2 == 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  if (*(int *)(puVar4 + 0x30) != 0) {
    *(undefined8 *)(puVar4 + -8) = 0x1801c8282;
    thunk_FUN_1812222e1();
    *(undefined8 *)(puVar4 + -8) = 0x1801c8294;
    BVar2 = InitOnceComplete((LPINIT_ONCE)&DAT_180cd19d0,0,(LPVOID)0x0);
    if (BVar2 == 0) {
      *(undefined8 *)(puVar4 + -8) = 0x1801c82a9;
      FUN_1804eb730();
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined *)(*pcVar1)();
      return puVar3;
    }
  }
  return &DAT_180cd18d0;
}



/* ===== 1801c82c0 FUN_1801c82c0 ===== */

void FUN_1801c82c0(void)

{
  int iVar1;
  ulonglong uVar2;
  
  if (((DAT_180cd1a48 != 0) ||
      (DAT_180cd1a48 = FUN_180264b70("cl_tickpacket_desired_queuelength"), DAT_180cd1a48 != 0)) &&
     (uVar2 = FUN_180264d70(DAT_180cd1a48), DAT_180cc3e1d != '\0')) {
    FUN_180264d90(DAT_180cd1a48,uVar2 & 0xffffffff00000000 | (ulonglong)DAT_180cd1a90);
    DAT_180cc3e1d = '\0';
  }
  if ((DAT_180cd1b80 == 0) &&
     (DAT_180cd1b80 = FUN_180264b70("cl_usercmd_max_per_movemsg"), DAT_180cd1b80 == 0)) {
    return;
  }
  uVar2 = FUN_180264d70(DAT_180cd1b80);
  if (-1 < (int)DAT_1809ee3b8) {
    FUN_180264d90(DAT_180cd1b80,uVar2 & 0xffffffff00000000 | (ulonglong)DAT_1809ee3b8);
    DAT_1809ee3b8 = 0xffffffff;
  }
  iVar1 = FUN_180264d70(DAT_180cd1b80);
  DAT_1809ebfbc = 4;
  if (0 < iVar1) {
    DAT_1809ebfbc = iVar1;
  }
  return;
}



/* ===== 1801c83a0 FUN_1801c83a0 ===== */

undefined8 FUN_1801c83a0(ulonglong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180961930 < param_1) {
    lVar4 = param_1 - DAT_180961930;
    lVar1 = FUN_18000f3a0(param_1 + 0x18);
    if (lVar1 == lVar4) {
      if (DAT_180cd1aa7 == '\0') {
        uVar3 = 0;
        if (DAT_18110df50 != 0) {
          do {
            if ((&DAT_18110c740)[uVar3 * 4] == lVar4) goto LAB_1801c842b;
            uVar3 = uVar3 + 1;
          } while (uVar3 < DAT_18110df50);
        }
        lVar1 = FUN_1803c5d30(lVar4);
        if ((lVar1 == 0) || (*(char *)(lVar1 + 0x80) == '\0')) goto LAB_1801c841e;
      }
      else {
LAB_1801c841e:
        lVar1 = FUN_1803bdf40(lVar4);
        if (lVar1 == 0) goto LAB_1801c842f;
      }
LAB_1801c842b:
      uVar2 = 1;
      goto LAB_1801c843c;
    }
  }
LAB_1801c842f:
  uVar2 = (*DAT_180cd1b30)(param_1);
LAB_1801c843c:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar2;
}



/* ===== 1801c8450 FUN_1801c8450 ===== */

void FUN_1801c8450(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((param_2 != 0) && (DAT_180961930 < param_1)) {
    lVar4 = param_1 - DAT_180961930;
    lVar1 = FUN_18000f3a0(param_1 + 0x18);
    if (lVar1 == lVar4) {
      if (DAT_180cd1aa7 == '\0') {
        uVar2 = 0;
        if (DAT_18110df50 != 0) {
          do {
            if ((&DAT_18110c740)[uVar2 * 4] == lVar4) {
              FUN_180540530(param_2,&DAT_18110c748 + uVar2 * 0x20,0x10);
              goto LAB_1801c8530;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < DAT_18110df50);
        }
        lVar1 = FUN_1803c5d30(lVar4);
        if ((lVar1 == 0) || (pcVar3 = (char *)(lVar1 + 0x80), *pcVar3 == '\0')) goto LAB_1801c84eb;
      }
      else {
LAB_1801c84eb:
        pcVar3 = (char *)FUN_1803bdf40(lVar4);
        if (pcVar3 == (char *)0x0) goto LAB_1801c8523;
      }
      FUN_180540530(param_2,pcVar3 + 4,0x10);
      goto LAB_1801c8530;
    }
  }
LAB_1801c8523:
  (*DAT_180cd1ab0)(param_1,param_2);
LAB_1801c8530:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c8550 FUN_1801c8550 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c8550(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  char local_40 [4];
  int local_3c;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_68;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_40[0] = '\0';
  local_3c = -1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24[0] = 0;
  FUN_18026b1a0(local_40);
  (*DAT_180cd1b00)(param_1,param_2);
  lVar3 = local_38;
  if (local_40[0] != '\0') {
    local_48 = 0;
    cVar4 = FUN_18026b0e0(local_38,&local_48);
    uVar1 = local_48;
    if (cVar4 != '\0') {
      uVar6 = 0;
      do {
        FUN_18026b040(uVar1,uVar6,*(undefined4 *)(local_24 + uVar6 * 4 + -0xc));
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < 3);
    }
    iVar2 = local_3c;
    if (local_3c == DAT_1809f3518) {
      FUN_1800233d0(lVar3 + 0x8c,local_24);
    }
    DAT_1809f337c = iVar2;
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c8650 FUN_1801c8650 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c8650(undefined8 param_1,undefined4 param_2,char param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  size_t sVar10;
  ulonglong uVar11;
  longlong lVar12;
  ULONGLONG UVar13;
  LARGE_INTEGER LVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  LARGE_INTEGER local_a8;
  undefined4 local_a0;
  LARGE_INTEGER local_98;
  undefined4 local_90 [2];
  _struct_19 local_88;
  undefined2 local_4f;
  undefined1 local_4d;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180ca15ba != '\0') {
    FUN_180048ef0();
  }
  if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_a8);
      DAT_181108a00.s = local_a8.s;
      DAT_1811089f8.QuadPart = FUN_1803a0c50(&local_a8);
      DAT_180cd1304 = '\x01';
    }
    if (((DAT_180ccf9c0 != '\0') && (DAT_1811089f8.s != (_struct_19)0x0)) &&
       (DAT_1811089f8.s == DAT_180ccf998)) {
      DAT_180ccf9c0 = '\0';
      if (((DAT_180ccf854 != 0) && (DAT_1811089f8.QuadPart - 0x10000U < 0x7ffffffeffff)) &&
         ((lVar9 = FUN_18000f3a0((ulonglong)DAT_180ccf854 + DAT_1811089f8.QuadPart), lVar9 != 0 &&
          (lVar9 == DAT_180ccf9a0)))) {
        FUN_180047aa0(lVar9);
      }
    }
  }
  if (((param_3 != '\0') && (DAT_18096221c != '\0')) && (DAT_180cd1ac4 != '\0')) {
    FUN_1802a0f90(param_2);
  }
  (*DAT_180cd1b90)(param_1,param_2,param_3);
  local_90[0] = 0;
  local_a8.QuadPart._0_4_ = 0;
  local_a8.QuadPart._4_4_ = 0;
  QueryPerformanceCounter(&local_a8);
  local_88 = local_a8.s;
  if (((param_3 == '\0') || (lVar9 = FUN_180269460(), lVar9 == 0)) ||
     (uVar6 = FUN_180011200((ulonglong)DAT_180961fcc + lVar9), uVar6 == DAT_1809f337c)) {
    FUN_180202700();
    FUN_180208b40();
    FUN_18037a850();
    if (param_3 == '\0') goto LAB_1801c9328;
  }
  else {
    if (((-1 < (int)uVar6) && (DAT_180961fd0 != 0)) &&
       ((lVar9 = ((ulonglong)uVar6 % (ulonglong)DAT_180961fd0) * (ulonglong)DAT_180961fd4 + lVar9,
        lVar9 != 0 && (uVar7 = FUN_180011200(lVar9 + 8), uVar7 == uVar6)))) {
      local_a8.s.LowPart = 2;
      FUN_180013280(lVar9 + 0x94,&local_a8);
    }
    FUN_180202700();
    FUN_180208b40();
    FUN_18037a850();
  }
  if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
    FUN_18002bf40();
    if (DAT_18095d371._5_1_ == '\0') {
      DAT_18096260c = 0xffffffff;
    }
    else {
      DAT_18096260c = FUN_18002e8b0();
    }
    if (((DAT_180ccf987 == '\0') && (DAT_1809620c0 != 0)) && (lVar9 = FUN_18000f3a0(), lVar9 != 0))
    {
      DAT_180ccf987 = FUN_180273b60("player_hurt",FUN_180264500);
    }
    FUN_1800ab2f0();
    if (((DAT_180cc4b5e == '\0') && (DAT_1809620c0 != 0)) && (lVar9 = FUN_18000f3a0(), lVar9 != 0))
    {
      DAT_180cc4b5e = FUN_180273b60("bullet_impact",FUN_180206590);
    }
    if (((DAT_180cc4bf9 == '\0') && (DAT_1809620c0 != 0)) && (lVar9 = FUN_18000f3a0(), lVar9 != 0))
    {
      DAT_180cc4bf9 = FUN_180273b60("player_hurt",FUN_180207bf0);
    }
    if (DAT_180ccf6d6 == '\0') {
      if (DAT_1809620c0 != 0) {
        lVar9 = FUN_18000f3a0();
        if (lVar9 != 0) {
          DAT_180ccf6d6 = FUN_180273b60("player_hurt",FUN_18022a660);
        }
        goto LAB_1801c894a;
      }
    }
    else {
LAB_1801c894a:
      if ((DAT_1809620c0 != 0) && (lVar9 = FUN_18000f3a0(), lVar9 != 0)) {
        if (DAT_180ccf6e5 == '\0') {
          DAT_180ccf6e5 = FUN_180273b60("player_hurt",FUN_18022c8a0);
        }
        if (DAT_180ccf6d7 == '\0') {
          DAT_180ccf6d7 = FUN_180273b60("player_death",FUN_18022c980);
        }
      }
    }
    if (((DAT_180921220 != '\0') && (DAT_180921221 != '\0')) &&
       (cVar5 = FUN_180023400(&DAT_1809f2a00,&DAT_180921221), cVar5 == '\0')) {
      sVar10 = strlen(&DAT_180921221);
      FUN_180029840(&DAT_1809f2a00,&DAT_180921221,sVar10);
      FUN_18022c6a0(&DAT_1809f2a00,0);
    }
    if (((DAT_180921268 != '\0') && (DAT_180921269 != '\0')) &&
       (cVar5 = FUN_180023400(&DAT_1809f2a90,&DAT_180921269), cVar5 == '\0')) {
      sVar10 = strlen(&DAT_180921269);
      FUN_180029840(&DAT_1809f2a90,&DAT_180921269,sVar10);
      FUN_18022c6a0(&DAT_1809f2a90,0);
    }
    if ((DAT_1809620c0 != 0) && (lVar9 = FUN_18000f3a0(), lVar9 != 0)) {
      if (DAT_180ccf83f == '\0') {
        DAT_180ccf83f = FUN_180273b60("round_start",&LAB_180233f70);
      }
      if (DAT_180ccf83e == '\0') {
        DAT_180ccf83e = FUN_180273b60("player_footstep",FUN_180233f80);
      }
    }
    cVar5 = DAT_18095d4b8;
    if (DAT_18095d4b8 == '\0') {
      fVar15 = DAT_180cf8d30;
    }
    else {
      if ((DAT_180ccf6e6 == '\0') && (DAT_1811089f0 != 0)) {
        DAT_180ccf6e6 = '\x01';
        DAT_180cf8d34 = FUN_18038eaf0("C_CSGameRules","m_fRoundStartTime");
      }
      lVar9 = FUN_180266660();
      fVar15 = 0.0;
      if ((lVar9 != 0) && (DAT_180cf8d34 != 0)) {
        fVar15 = (float)FUN_18000f3d0((ulonglong)DAT_180cf8d34 + lVar9);
      }
    }
    iVar8 = FUN_1804e4d70(&DAT_1809f2ab0);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f2afc == 0x7fffffff) {
      DAT_1809f2afc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (cVar5 == '\0') {
LAB_1801c8b54:
      if (DAT_180cf8d38 != DAT_180cf8d40) {
        DAT_180cf8d40 = DAT_180cf8d38;
      }
    }
    else if (fVar15 != DAT_180cf8d30) {
      DAT_180cf8d30 = fVar15;
      goto LAB_1801c8b54;
    }
    FUN_1804e4e90(&DAT_1809f2ab0);
  }
  if ((DAT_180961a40 == (code *)0x0) || (DAT_180961a48 == (code *)0x0)) goto LAB_1801c9328;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_a8);
    LVar14.s = local_a8.s;
  }
  else {
    LVar14.s = DAT_181108a00.s;
  }
  if ((((LVar14.s == (_struct_19)0x0) || (lVar9 = (*DAT_180961a48)(LVar14.QuadPart), lVar9 == 0)) ||
      (iVar8 = FUN_180011200((ulonglong)DAT_180961fcc + lVar9), iVar8 == 0)) ||
     (lVar9 = (*DAT_180961a40)(LVar14.QuadPart,iVar8), lVar9 == 0)) goto LAB_1801c9328;
  FUN_1801c82c0();
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_a8);
    DAT_181108a00.s = local_a8.s;
    DAT_1811089f8.QuadPart = FUN_1803a0c50(&local_a8);
    DAT_180cd1304 = '\x01';
  }
  local_98.s = DAT_1811089f8.s;
  if (((DAT_1811089f8.s == (_struct_19)0x0) || (DAT_180ca09f0 == 0)) ||
     (iVar8 = FUN_180011200((ulonglong)DAT_180ca09f0 + DAT_1811089f8.QuadPart), 999 < iVar8 - 1U)) {
    DAT_180cc3e78 = 0;
    goto LAB_1801c9328;
  }
  lVar12 = *(longlong *)(lVar9 + 0x40);
  if (((lVar12 - 0x10000U < 0x7ffffffeffff) &&
      (*(longlong *)(lVar12 + 0x40) - 0x10000U < 0x7ffffffeffff)) &&
     (((*(byte *)(lVar12 + 0x10) & 4) == 0 ||
      ((*(byte *)(*(longlong *)(lVar12 + 0x40) + 0x10) & 3) == 0)))) {
    local_a8.QuadPart._0_4_ = 0;
    local_a8.QuadPart._4_4_ = 0;
    local_a0 = 0;
    cVar5 = FUN_1802adef0(lVar9,&local_a8);
    if (cVar5 != '\0') {
      *(DWORD *)(*(longlong *)(lVar12 + 0x40) + 0x18) = local_a8.s.LowPart;
      *(LONG *)(*(longlong *)(lVar12 + 0x40) + 0x1c) = local_a8.s.HighPart;
      puVar1 = (uint *)(*(longlong *)(lVar12 + 0x40) + 0x10);
      *puVar1 = *puVar1 | 3;
      *(uint *)(lVar12 + 0x10) = *(uint *)(lVar12 + 0x10) | 4;
    }
  }
  FUN_1801d7c60();
  if ((DAT_180ca0a18 == 0) || (uVar11 = FUN_180011200(), (uVar11 & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((DAT_1809ee590 == '\0') || (((byte)DAT_1809ee594 & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  DAT_180cc3e78 = bVar3 || bVar4;
  DAT_180ccfae6 = 0;
  DAT_180ccfae7 = '\0';
  if ((*(longlong *)(lVar9 + 0x40) - 0x10000U < 0x7ffffffeffff) &&
     (lVar12 = *(longlong *)(*(longlong *)(lVar9 + 0x40) + 0x40), lVar12 - 0x10000U < 0x7ffffffeffff
     )) {
    DAT_180cfa088 = *(undefined4 *)(lVar12 + 0x18);
    DAT_180cfa08c = *(undefined4 *)(lVar12 + 0x1c);
    DAT_180cfa090 = *(undefined4 *)(lVar12 + 0x20);
    DAT_180ccfae6 = 1;
  }
  *(ulonglong *)PTR_DAT_180c8b050 = *(ulonglong *)(lVar9 + 0x70) | *(ulonglong *)(lVar9 + 0x60);
  DAT_180c8c1e8 = *(undefined8 *)(lVar9 + 0x60);
  DAT_180ceb378 = *(undefined8 *)(lVar9 + 0x60);
  DAT_1809eeb00 = *(undefined8 *)(lVar9 + 8);
  FUN_180272430(lVar9);
  if (((DAT_1809f351c == 2) ||
      ((((DAT_1809f351c == 1 && (lVar12 = FUN_180266660(), lVar12 != 0)) && (DAT_180cf9f80 != 0)) &&
       (cVar5 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar12), cVar5 != '\0')))) ||
     (cVar5 = FUN_18026b810(1), cVar5 != '\0')) {
    FUN_1802a21e0(lVar9);
    FUN_1802abd00(lVar9);
    FUN_1802a2da0(lVar9,1);
LAB_1801c92e2:
    lVar12 = *(longlong *)(lVar9 + 0x40);
    if (lVar12 - 0x10000U < 0x7ffffffeffff) {
      FUN_180265140(lVar9,lVar12);
      FUN_180265200(lVar12);
    }
  }
  else {
    DAT_1809f3c60 = 0xffffffffffffffff;
    DAT_1809f3c68 = 0;
    DAT_1809f3c70 = 0;
    DAT_1809f3c78 = 0;
    DAT_1809f3c80 = 0;
    DAT_1809f3c88 = 0;
    _DAT_1809f3c91 = local_4f;
    DAT_1809f3c93 = local_4d;
    DAT_1809f3c94 = 0;
    DAT_1809f3c98 = 0;
    DAT_180cfe888 = 0;
    DAT_1809f3c90 = cVar5;
    lVar12 = FUN_180266660();
    if ((((lVar12 == 0) || (DAT_180cf9f80 == 0)) ||
        (cVar5 = FUN_180011220((ulonglong)DAT_180cf9f80 + lVar12), cVar5 == '\0')) &&
       ((lVar12 = *(longlong *)(lVar9 + 0x40), lVar12 - 0x10000U < 0x7ffffffeffff &&
        (*(longlong *)(lVar12 + 0x40) - 0x10000U < 0x7ffffffeffff)))) {
      *(undefined4 *)(lVar12 + 0x20) = 0;
    }
    FUN_1801dee00(lVar9);
    FUN_1801dff30(lVar9);
    FUN_1801ebba0(lVar9);
    FUN_1801e0de0(lVar9);
    cVar5 = DAT_180cc409f;
    lVar12 = *(longlong *)(lVar9 + 8);
    if (lVar12 != DAT_1809ee970) {
      DAT_180cc409b = DAT_180cc409f;
      DAT_180cc409f = '\0';
      DAT_1809ee970 = lVar12;
      if (cVar5 == '\0') {
        if (DAT_180cd1304 == '\0') {
          FUN_1803a0b60(&local_a8);
          DAT_181108a00.s = local_a8.s;
          DAT_1811089f8.QuadPart = FUN_1803a0c50(&local_a8);
          DAT_180cd1304 = '\x01';
        }
        local_a8.s = DAT_1811089f8.s;
        FUN_1801eacb0(&local_a8,lVar12);
      }
    }
    FUN_1801dd2e0(lVar9);
    FUN_1801dddb0(lVar9);
    FUN_180273560(lVar9);
    FUN_1800dd1e0(lVar9);
    UVar13 = GetTickCount64();
    if ((DAT_180920e2c == '\0') || (cVar5 = FUN_18026b8a0(), cVar5 != '\0')) {
LAB_1801c901e:
      DAT_180ccf78b = '\0';
      DAT_180cf8f70 = UVar13;
    }
    else {
      puVar2 = (ulonglong *)(lVar9 + 0x68);
      uVar11 = *puVar2;
      if (DAT_180ccf78b != '\0') {
        *(ulonglong *)(lVar9 + 0x60) = *(ulonglong *)(lVar9 + 0x60) & 0xfffffffdffffffff;
        *puVar2 = uVar11 | 0x200000000;
        *(ulonglong *)(lVar9 + 0x70) = *(ulonglong *)(lVar9 + 0x70) & 0xfffffffdffffffff;
        goto LAB_1801c901e;
      }
      if (((*(ulonglong *)(lVar9 + 0x70) | uVar11) & 0xfffffffdffffffff) != 0) {
        DAT_180cf8f70 = UVar13;
      }
      if (((*(ulonglong *)(lVar9 + 0x60) & 0x200000000) == 0) && (9999 < UVar13 - DAT_180cf8f70)) {
        *(ulonglong *)(lVar9 + 0x60) = *(ulonglong *)(lVar9 + 0x60) | 0x200000000;
        *puVar2 = uVar11 | 0x200000000;
        DAT_180ccf78b = '\x01';
      }
    }
    FUN_1802a21e0(lVar9);
    FUN_1802abd00(lVar9);
    FUN_180241850();
    FUN_18024f710(*(undefined4 *)(lVar9 + 8));
    FUN_1801e1c20(lVar9);
    if (((*(uint *)(lVar9 + 0x68) & *(uint *)(lVar9 + 0x60) & 0x801) != 0) ||
       (DAT_180cd034d != '\0')) {
      DAT_180cc3e7b = 1;
    }
    cVar5 = FUN_180266720(lVar9,&local_98);
    if (cVar5 == '\0') {
      FUN_180072000(lVar9);
      goto LAB_1801c92e2;
    }
    uVar6 = *(uint *)(lVar9 + 8);
    if (DAT_180ceb098 < 1) {
      uVar16 = DAT_180cf9fa0;
      uVar17 = DAT_180cf9fa4;
      uVar18 = DAT_180cf9fa8;
    }
    else {
      uVar16 = DAT_180cf9fb8;
      uVar17 = DAT_180cf9fbc;
      uVar18 = DAT_180cf9fc0;
    }
    DAT_1809f3518 = uVar6;
    if (-1 < (int)uVar6) {
      lVar12 = (ulonglong)(uVar6 % 0x96) * 0x20;
      if (*(uint *)(&DAT_180c3ad20 + lVar12) != uVar6) {
        (&DAT_180c3ad24)[lVar12] = 0;
      }
      *(uint *)(&DAT_180c3ad20 + lVar12) = uVar6;
      *(undefined4 *)(&DAT_180c3ad28 + lVar12) = uVar16;
      *(undefined4 *)(&DAT_180c3ad2c + lVar12) = uVar17;
      *(undefined4 *)(&DAT_180c3ad30 + lVar12) = uVar18;
    }
    DAT_180c8e98c = 0;
    FUN_1802568e0(lVar9);
    FUN_1801fbf20(lVar9);
    FUN_180088fc0(lVar9);
    FUN_180257540(lVar9);
    FUN_180471510(lVar9,&local_98);
    if (PTR_DAT_180c873b8[9] != '\0') {
      DAT_180cc3e7b = 1;
    }
    lVar12 = *(longlong *)(lVar9 + 0x40);
    if (lVar12 - 0x10000U < 0x7ffffffeffff) {
      if (0x7ffffffefffe < *(longlong *)(lVar12 + 0x40) - 0x10000U) {
        lVar12 = 0;
      }
    }
    else {
      lVar12 = 0;
    }
    if ((DAT_180ccfae7 != '\0') && (lVar12 != 0)) {
      if (*(longlong *)(lVar12 + 0x40) - 0x10000U < 0x7ffffffeffff) {
        *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 0x18) = DAT_180cf9fa0;
        *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 0x1c) = DAT_180cf9fa4;
        *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 0x20) = DAT_180cf9fa8;
      }
      *(undefined4 *)(lVar12 + 0x58) = DAT_180cf9fac;
      *(undefined4 *)(lVar12 + 0x5c) = DAT_180cf9fb0;
      *(undefined4 *)(lVar12 + 0x60) = DAT_180cf9fb4;
      *(undefined8 *)(lVar9 + 0x60) = DAT_180cf9fc8;
    }
    FUN_180072000(lVar9);
    lVar12 = *(longlong *)(lVar9 + 0x40);
    if (lVar12 - 0x10000U < 0x7ffffffeffff) {
      if (0x7ffffffefffe < *(longlong *)(lVar12 + 0x40) - 0x10000U) {
        lVar12 = 0;
      }
    }
    else {
      lVar12 = 0;
    }
    if ((DAT_180ccfae7 != '\0') && (lVar12 != 0)) {
      if (*(longlong *)(lVar12 + 0x40) - 0x10000U < 0x7ffffffeffff) {
        DAT_180cf9fa0 = *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 0x18);
        DAT_180cf9fa4 = *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 0x1c);
        DAT_180cf9fa8 = *(undefined4 *)(*(longlong *)(lVar12 + 0x40) + 0x20);
      }
      DAT_180cf9fac = *(undefined4 *)(lVar12 + 0x58);
      DAT_180cf9fb0 = *(undefined4 *)(lVar12 + 0x5c);
      DAT_180cf9fb4 = *(undefined4 *)(lVar12 + 0x60);
      DAT_180cf9fc8 = *(undefined8 *)(lVar9 + 0x60);
    }
    FUN_180267880(lVar9);
    FUN_180435df0(lVar9);
  }
  if (0 < DAT_180ceb098) {
    DAT_180ceb098 = DAT_180ceb098 + -1;
  }
  FUN_1802a2680(lVar9);
LAB_1801c9328:
  FUN_1802b2ad0(local_90);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9380 FUN_1801c9380 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c9380(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 local_68 [2];
  longlong local_60 [4];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_1802b1930(param_3,param_4);
  lVar1 = DAT_1811080f0;
  if ((&DAT_1809628ac)[(longlong)DAT_180ca3d60 * 0x90] == '\0') {
    local_60[0] = DAT_1811080f0;
    if ((((DAT_1811080f0 != 0) && (param_3 != 0)) && (param_4 - 1U < 0x100000)) &&
       (uVar4 = 0, 0 < param_4)) {
      do {
        lVar5 = (ulonglong)DAT_180961910 * (ulonglong)uVar4 + param_3;
        lVar3 = FUN_18000f3a0((ulonglong)DAT_180961914 + lVar5);
        if ((lVar3 != 0) && (lVar3 != lVar1)) {
          cVar2 = FUN_1803763c0(lVar3);
          if (cVar2 == '\x01') {
            FUN_1800239d0((ulonglong)DAT_180961914 + lVar5,local_60);
            FUN_1800239d0((ulonglong)DAT_180961918 + lVar5,local_60);
            LOCK();
            _DAT_181107ec8 = _DAT_181107ec8 + 1;
            UNLOCK();
          }
          else if (cVar2 == '\x02') {
            local_68[0] = 0;
            FUN_180013280((ulonglong)DAT_18096191c + lVar5,local_68);
            local_68[0] = 0;
            FUN_180013280((ulonglong)DAT_180961920 + lVar5,local_68);
            LOCK();
            _DAT_181108068 = _DAT_181108068 + 1;
            UNLOCK();
          }
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < param_4);
    }
  }
  (*DAT_180cd1b58)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9520 FUN_1801c9520 ===== */

void FUN_1801c9520(void)

{
  FUN_1802b1ce0();
  return;
}



/* ===== 1801c9530 FUN_1801c9530 ===== */

void FUN_1801c9530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1b10)();
  FUN_1801c9520(param_3);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9560 FUN_1801c9560 ===== */

undefined8 FUN_1801c9560(undefined8 param_1)

{
  undefined8 uVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  uVar1 = (*DAT_180cd1af8)();
  FUN_1802b0c30(param_1);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar1;
}



/* ===== 1801c95a0 FUN_1801c95a0 ===== */

void FUN_1801c95a0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_res18[0] = param_3;
  FUN_1802b0f70(local_res18);
  (*DAT_180cd1be8)(param_1,param_2,local_res18[0]);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c95f0 FUN_1801c95f0 ===== */

void FUN_1801c95f0(undefined8 param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_res18 [2];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar1 = &DAT_18093ce0c;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar1 = &DAT_18093d420 + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    pcVar1 = &DAT_18093c838;
  }
  local_res18[0] = param_3;
  if (((*pcVar1 != '\0') && ((&DAT_180962900)[(longlong)DAT_180ca3d60 * 0x90] == '\0')) &&
     (param_2 != 0x2acab07c)) {
    pcVar3 = DAT_180cd1ae0;
    uVar2 = FUN_1802b0b60();
    (*pcVar3)(param_1,0x2acab07c,uVar2);
  }
  FUN_1802b0f70(local_res18,param_2);
  (*DAT_180cd1ae0)(param_1,param_2,local_res18[0]);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c96c0 FUN_1801c96c0 ===== */

void FUN_1801c96c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_4c;
  undefined4 local_44;
  char local_40;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = '\0';
  local_4c = 0;
  local_44 = 0;
  local_40 = '\0';
  FUN_18037ab00(param_3,param_4,&local_88);
  (*DAT_180cd1a58)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar1 = local_60;
  if (local_40 != '\0') {
    FUN_180023a50(local_60 + 0xe8,&local_4c);
  }
  if (local_50 != '\0') {
    FUN_1800239d0(lVar1 + 0xd0,&local_58);
  }
  if ((local_88 != 0) && (local_80 != 0)) {
    FUN_1800239d0(local_88,&local_80);
  }
  if (local_78 != 0) {
    FUN_180023a50(local_78 + 0xe8,&local_70);
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c97f0 FUN_1801c97f0 ===== */

void FUN_1801c97f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_18037b0c0(param_2);
  (*DAT_180cd1a50)(param_1,param_2,param_3);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9840 FUN_1801c9840 ===== */

void FUN_1801c9840(undefined8 param_1,undefined8 param_2)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_1800da770(param_2);
  FUN_1800abb50(4);
  (*DAT_180cd1a98)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9890 FUN_1801c9890 ===== */

void FUN_1801c9890(undefined8 param_1,undefined8 param_2)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_1800dbbe0(param_2);
  (*DAT_180cd1e18)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c98d0 FUN_1801c98d0 ===== */

void FUN_1801c98d0(undefined8 param_1,undefined8 param_2)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_1800dbe80(param_2);
  (*DAT_180cd1ba0)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9910 FUN_1801c9910 ===== */

void FUN_1801c9910(undefined8 param_1,undefined8 param_2)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_1800dc210(param_2);
  (*DAT_180cd1ab8)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9950 FUN_1801c9950 ===== */

ulonglong FUN_1801c9950(longlong param_1,uint param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ULONGLONG UVar4;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1a28)();
  uVar3 = (ulonglong)DAT_180ccf78e;
  if ((((DAT_180ccf78e != 0) && (uVar3 = (ulonglong)DAT_180ccf83c, DAT_180ccf83c != 0)) &&
      ((param_2 & 2) != 0)) && ((param_1 != 0 && (param_3 != 0)))) {
    lVar2 = FUN_18000f3a0(param_3 + 0x18);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = FUN_180011200(lVar2 + 0x10);
      if ((uVar3 & 0x10) != 0 && ((byte)uVar3 & 0xf) == 0xf) {
        uVar3 = FUN_180011200(lVar2 + 0x28);
        uVar1 = DAT_1809f1aec;
        if ((uint)uVar3 < 0x7d1) {
          LOCK();
          UNLOCK();
          DAT_1809f1ae8 = (uint)uVar3;
          UVar4 = GetTickCount64();
          LOCK();
          UNLOCK();
          DAT_180cf8f88 = param_1 + -0x188;
          LOCK();
          UNLOCK();
          LOCK();
          DAT_180cf8f98 = uVar1;
          UNLOCK();
          uVar3 = DAT_180cf8fa0;
          DAT_180cf8fa0 = UVar4;
        }
      }
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar3;
}



/* ===== 1801c9a20 FUN_1801c9a20 ===== */

void FUN_1801c9a20(void)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_180232a20();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9a40 FUN_1801c9a40 ===== */

void FUN_1801c9a40(undefined8 param_1)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1b38)();
  FUN_180010a70(param_1);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9a90 FUN_1801c9a90 ===== */

void FUN_1801c9a90(undefined8 param_1)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_180220b80();
  (*DAT_180cd1e50)(param_1);
  FUN_180220ee0(param_1);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801c9ad0 FUN_1801c9ad0 ===== */

undefined8 FUN_1801c9ad0(void)

{
  undefined8 uVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((DAT_180cc4bff == '\0') && (DAT_180ca15bd == '\0')) {
    uVar1 = (*DAT_180cd1bd0)();
  }
  else {
    uVar1 = 0;
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar1;
}



/* ===== 1801c9b10 FUN_1801c9b10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1801c9b10(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  undefined8 local_res10 [3];
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  int local_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [56];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_18002bf40();
  if (DAT_180cc46f8 != 0) {
    if (DAT_180ca0e5d == '\0') {
      uVar6 = FUN_1800305a0();
      puVar5 = (undefined4 *)FUN_18002c150(local_78,uVar6);
      local_98 = *puVar5;
      uStack_94 = puVar5[1];
      uStack_90 = puVar5[2];
      uStack_8c = puVar5[3];
      local_88 = puVar5[4];
      uStack_84 = puVar5[5];
      uStack_80 = puVar5[6];
      uStack_7c = puVar5[7];
      iVar4 = FUN_18002c5c0(uVar6,&local_98);
    }
    else {
      iVar4 = DAT_180962b58;
    }
    if (-1 < iVar4) {
      cVar1 = (*DAT_180cd1bb0)(param_1);
      if (DAT_180ca0e5d == '\0') {
        uVar6 = FUN_1800305a0();
        lVar7 = FUN_18002c150(local_78,uVar6);
        lVar8 = *(longlong *)(lVar7 + 8);
        lVar14 = *(longlong *)(lVar7 + 0x10);
        uVar9 = *(undefined4 *)(lVar7 + 0x18);
        cVar15 = *(char *)(lVar7 + 0x1d);
      }
      else {
        lVar8 = DAT_180962b40;
        lVar14 = DAT_180962b48;
        uVar9 = DAT_180962b50;
        cVar15 = DAT_180962b55;
      }
      if ((lVar8 == 0) || (DAT_180cc471c == 0)) {
        uVar10 = 0xffffffff;
      }
      else {
        bVar2 = FUN_180011220(lVar8 + (ulonglong)DAT_180cc471c);
        uVar10 = (uint)bVar2;
      }
      uVar11 = (uint)(cVar15 != '\0');
      uVar16 = (uint)(lVar14 != 0);
      uVar13 = (uint)(cVar1 != '\0');
      uVar12 = (uint)(iVar4 == 1);
      local_98 = uVar9;
      uStack_94 = uVar11;
      uStack_90 = uVar16;
      uStack_8c = uVar10;
      local_88 = iVar4;
      uStack_84 = uVar13;
      uStack_80 = uVar12;
      iVar3 = memcmp(&local_98,&DAT_180962bb0,0x1c);
      if (iVar3 != 0) {
        _DAT_180962bb0 = uVar9;
        _DAT_180962bb4 = uVar11;
        _DAT_180962bb8 = uVar16;
        _DAT_180962bbc = uVar10;
        _DAT_180962bc0 = iVar4;
        _DAT_180962bc4 = uVar13;
        _DAT_180962bc8 = uVar12;
        FUN_1802b2560("[hud] crosshair | weapon %p type %d scoped %d iron %d m_bShowCrosshair %d | verdict %d (-1 game, 0 hide, 1 force) game %d -> %d"
                      ,param_1,uVar9,cVar15 != '\0',lVar14 != 0,uVar10,iVar4,cVar1 != '\0',
                      iVar4 == 1);
      }
      bVar2 = iVar4 == 1;
      goto LAB_1801c9d87;
    }
  }
  if (DAT_180920e1c == 2) {
LAB_1801c9d69:
    bVar2 = 1;
  }
  else {
    if (DAT_180920e1c == 3) {
      bVar2 = 0;
      goto LAB_1801c9d87;
    }
    if (DAT_180920e1c == 1) {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(local_res10);
        DAT_181108a00 = local_res10[0];
        DAT_1811089f8 = FUN_1803a0c50(local_res10);
        DAT_180cd1304 = '\x01';
      }
      lVar8 = DAT_1811089f8;
      if (((DAT_1811089f8 != 0) && (DAT_180ca09f0 != 0)) &&
         (iVar4 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0), iVar4 - 1U < 1000)) {
        if (DAT_180ca0a28 != 0) {
          bVar2 = FUN_180011220(lVar8 + (ulonglong)DAT_180ca0a28);
          bVar2 = bVar2 ^ 1;
          goto LAB_1801c9d87;
        }
        goto LAB_1801c9d69;
      }
    }
    bVar2 = (*DAT_180cd1bb0)(param_1);
  }
LAB_1801c9d87:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return bVar2;
}



/* ===== 1801c9db0 FUN_1801c9db0 ===== */

undefined8 FUN_1801c9db0(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  uVar1 = (*DAT_180cd1e08)();
  if (DAT_1809210d4 != '\0') {
    lVar2 = FUN_18020cca0();
    if (lVar2 != 0) {
      uVar1 = 0xc4c4c4c40001;
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar1;
}



/* ===== 1801c9e00 FUN_1801c9e00 ===== */

undefined4 * FUN_1801c9e00(void)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int3 iVar5;
  int iVar6;
  uint uVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  undefined4 *lpAddress;
  ulonglong uVar10;
  longlong local_res8 [4];
  
  UVar8 = GetTickCount64();
  if (DAT_180cd1b78 <= UVar8) {
    DAT_180cd1b78 = UVar8 + 2000;
    if (DAT_180961c78 != 0) {
      uVar1 = DAT_180961c78 + 0x300;
      for (uVar10 = DAT_180961c78; uVar10 < uVar1; uVar10 = uVar10 + 1) {
        iVar5 = FUN_180011200(uVar10);
        if (((((iVar5 == 0xd8b48) && (iVar6 = FUN_180011200(uVar10 + 7), iVar6 == -0xfe74b8)) &&
             (cVar2 = FUN_180011220(uVar10 + 0xb), cVar2 == 'P')) &&
            ((iVar6 = FUN_180011200(uVar10 + 0xd), iVar6 == 0x48c88b48 &&
             (sVar4 = FUN_180011440(uVar10 + 0x11), sVar4 == 0x108b)))) &&
           (sVar4 = FUN_180011440(uVar10 + 0x13), sVar4 == -0x6d01)) {
          bVar3 = FUN_180011220(uVar10 + 0xc);
          uVar7 = FUN_180011200(uVar10 + 0x15);
          if ((((uVar7 | bVar3) & 7) == 0) && (uVar7 < 0x1001)) {
            iVar6 = FUN_180011200(uVar10 + 3);
            lVar9 = FUN_18000f3a0((longlong)iVar6 + 7 + uVar10);
            if ((lVar9 != 0) &&
               ((lVar9 = FUN_18020d2e0(lVar9,(uint)bVar3), lVar9 != 0 &&
                (lVar9 = FUN_18020d2e0(lVar9,uVar7), lVar9 != 0)))) {
              lVar9 = FUN_18000f3a0(lVar9);
              lVar9 = FUN_18000f3a0(lVar9 + 8);
              if (lVar9 != 0) {
                DAT_180cc3e7c = 1;
                lpAddress = VirtualAlloc((LPVOID)0x0,0x40,0x3000,0x40);
                if (lpAddress == (undefined4 *)0x0) {
                  return (undefined4 *)0x0;
                }
                *(undefined8 *)((longlong)lpAddress + 0x17) = 0xcccccccccccccccc;
                *(undefined1 *)((longlong)lpAddress + 0x1f) = 0xcc;
                *(undefined8 *)(lpAddress + 0xc) = 0xcccccccccccccccc;
                *(undefined8 *)(lpAddress + 0xe) = 0xcccccccccccccccc;
                *lpAddress = 0x25048b65;
                lpAddress[1] = 0x48;
                lpAddress[2] = 0x12053b;
                lpAddress[3] = 0x6740000;
                lpAddress[4] = 0x1225ff;
                *(undefined2 *)(lpAddress + 5) = 0;
                *(undefined1 *)((longlong)lpAddress + 0x16) = 0xc3;
                *(undefined8 *)(lpAddress + 8) = 0;
                *(undefined8 *)(lpAddress + 10) = 0;
                local_res8[0] = 0;
                iVar6 = FUN_180428df0(lVar9,lpAddress,local_res8);
                if ((iVar6 == 0) && (local_res8[0] != 0)) {
                  *(longlong *)(lpAddress + 10) = local_res8[0];
                  iVar6 = FUN_1804293b0(lVar9,1);
                  if (iVar6 == 0) {
                    return lpAddress;
                  }
                  FUN_1802b2560("[error] pets | preview pet sound hook not enabled");
                  FUN_180429140(lVar9);
                }
                else {
                  FUN_1802b2560("[error] pets | preview pet sound hook failed");
                }
                VirtualFree(lpAddress,0,0x8000);
                return (undefined4 *)0x0;
              }
            }
          }
          break;
        }
      }
    }
    DAT_180cd1ac0 = DAT_180cd1ac0 + 1;
    if (0x1d < DAT_180cd1ac0) {
      DAT_180cc3e7c = 1;
      FUN_1802b2560("[error] pets | preview pet sound function not found");
    }
  }
  return (undefined4 *)0x0;
}



/* ===== 1801ca070 FUN_1801ca070 ===== */

void FUN_1801ca070(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res20;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((DAT_180961c78 != 0) && (param_1 != 0)) {
    iVar3 = FUN_180011200(DAT_180961c78 + 0x30);
    if (iVar3 + 0x10000U < 0x10000) {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res20);
        DAT_181108a00 = local_res20;
        DAT_1811089f8 = FUN_1803a0c50(&local_res20);
        DAT_180cd1304 = '\x01';
      }
      lVar1 = DAT_1811089f8;
      if (DAT_1811089f8 == 0) {
LAB_1801ca237:
        if ((DAT_180cd1a10 != 0) ||
           ((DAT_180cc3e7c == '\0' && (DAT_180cd1a10 = FUN_1801c9e00(), DAT_180cd1a10 != 0)))) {
          lVar1 = DAT_180cd1a10;
          DVar5 = GetCurrentThreadId();
          *(DWORD *)(lVar1 + 0x20) = DVar5;
          (*DAT_180cd1bc0)(param_1,param_2,param_3);
          *(undefined4 *)(lVar1 + 0x20) = 0;
          goto LAB_1801ca293;
        }
      }
      else {
        if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
          DAT_1811161d8 = '\x01';
          DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
        }
        uVar2 = DAT_1811161dc;
        if (((DAT_1811161dc != 0) &&
            (lVar6 = FUN_18000f3a0(lVar1 + 0x10), lVar6 - 0x10000U < 0x7ffffffeffff)) &&
           (lVar7 = FUN_18000f3a0(lVar6), lVar7 == lVar1)) {
          iVar4 = FUN_180011200((ulonglong)uVar2 + lVar6);
          lVar1 = param_1 + iVar3;
          if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
            DAT_1811161d8 = '\x01';
            DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
          }
          uVar2 = DAT_1811161dc;
          if (((lVar1 != 0) && (DAT_1811161dc != 0)) &&
             ((lVar6 = FUN_18000f3a0(lVar1 + 0x10), lVar6 - 0x10000U < 0x7ffffffeffff &&
              ((lVar7 = FUN_18000f3a0(lVar6), lVar7 == lVar1 &&
               (iVar3 = FUN_180011200((ulonglong)uVar2 + lVar6), iVar3 != iVar4))))))
          goto LAB_1801ca237;
        }
      }
    }
  }
  (*DAT_180cd1bc0)(param_1,param_2,param_3);
LAB_1801ca293:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801ca2b0 FUN_1801ca2b0 ===== */

void FUN_1801ca2b0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char *_Str1;
  longlong local_res10;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_180227da0(param_2);
  if (param_2 != 0) {
    uVar1 = FUN_180011200(param_2 + 0x60);
    if (uVar1 - 1 < 0x7fff) {
      lVar3 = FUN_18000f3a0(DAT_1809619d0);
      if (lVar3 != 0) {
        lVar3 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                              lVar3 + (ulonglong)(uint)(((int)uVar1 >> 9) * DAT_180961944));
        if (lVar3 - 0x10000U < 0xfffffffffffeffff) {
          lVar3 = FUN_18000f3a0((ulonglong)((uVar1 & 0x1ff) * DAT_180961948) + lVar3);
          if (lVar3 - 0x10000U < 0xfffffffffffeffff) {
            local_res10 = lVar3;
            lVar3 = FUN_18000f3a0((ulonglong)DAT_180961968 + lVar3);
            if (lVar3 != 0) {
              lVar3 = FUN_18000f3a0((ulonglong)DAT_18096196c + lVar3);
              if (lVar3 != 0) {
                lVar3 = FUN_18000f3a0((ulonglong)DAT_180961970 + lVar3);
                if (lVar3 != 0) {
                  _Str1 = (char *)FUN_18000f3a0((ulonglong)DAT_180961974 + lVar3);
                  if (_Str1 + -0x10000 < (char *)0x7ffffffeffff) {
                    iVar2 = strcmp(_Str1,"C_CSPlayerPawn");
                    if (iVar2 == 0) {
                      FUN_180233b60(&local_res10,"sound");
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (*DAT_180cd1a30)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801ca420 FUN_1801ca420 ===== */

void FUN_1801ca420(void)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1a70)();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801ca4b0 FUN_1801ca4b0 ===== */

void FUN_1801ca4b0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  ULONGLONG UVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_18 [4];
  
  cVar3 = DAT_180cc3e7b;
  uVar6 = DAT_1809ee3bc;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((DAT_180920f3c == '\0') || (DAT_180cc3e78 == '\0')) {
    DAT_1809ee460 = 0xffffffff;
    DAT_180cc3e7b = 0;
  }
  else {
    uVar7 = DAT_1809ebfbc - 1;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    local_18[0] = 1;
    puVar4 = local_18;
    if (0 < DAT_180920f40) {
      puVar4 = (uint *)&DAT_180920f40;
    }
    if (6 < DAT_180920f40) {
      puVar4 = &DAT_1805a2578;
    }
    uVar8 = *puVar4;
    if ((int)uVar7 < (int)*puVar4) {
      uVar8 = uVar7;
    }
    if (((int)DAT_1809ee460 < 0) || (uVar7 = DAT_1809ee460, (int)uVar8 < (int)DAT_1809ee460)) {
      uVar7 = uVar8;
    }
    LOCK();
    DAT_180cc3e7b = 0;
    UNLOCK();
    if (cVar3 == '\0') {
      LOCK();
      iVar2 = DAT_180cd1b28 + 1;
      UNLOCK();
      bVar1 = DAT_180cd1b28 < (int)uVar7;
      DAT_180cd1b28 = iVar2;
      if (bVar1) goto LAB_1801ca5b5;
    }
    UVar5 = GetTickCount64();
    uVar6 = (int)UVar5 + uVar6;
    uVar6 = uVar6 * 0x2000 ^ uVar6;
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    DAT_1809ee3bc = uVar6 << 5 ^ uVar6;
    DAT_1809ee460 = DAT_1809ee3bc % (uVar8 + 1);
  }
  DAT_180cd1b28 = 0;
  (*DAT_180cd1a08)(param_1);
LAB_1801ca5b5:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801ca5d0 FUN_1801ca5d0 ===== */

longlong FUN_1801ca5d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  lVar1 = (*DAT_180cd1a80)();
  if (param_1 == 0xc4c4c4c40001) {
    lVar2 = FUN_18020cca0();
    if (lVar2 != 0) {
      lVar1 = lVar2;
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return lVar1;
}



/* ===== 1801ca620 FUN_1801ca620 ===== */

void FUN_1801ca620(longlong *param_1)

{
  (**(code **)(*param_1 + 0x208))();
  return;
}



/* ===== 1801ca640 FUN_1801ca640 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ca640(undefined8 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  HMODULE pHVar8;
  FARPROC pFVar9;
  char *pcVar10;
  size_t sVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 **_Buf1;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined *puVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined *local_res18 [2];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  uint local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  char *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined2 local_80;
  
  FUN_18008f2b0();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (((DAT_180cf9f78 != 0) ||
      (((pHVar8 = GetModuleHandleA("engine2.dll"), pHVar8 != (HMODULE)0x0 &&
        (pFVar9 = GetProcAddress(pHVar8,"CreateInterface"), pFVar9 != (FARPROC)0x0)) &&
       (DAT_180cf9f78 = (*pFVar9)("Source2EngineToClient001",0), DAT_180cf9f78 != 0)))) &&
     (pcVar10 = (char *)FUN_1801ca620(DAT_180cf9f78), pcVar10 != (char *)0x0)) {
    sVar11 = strlen(pcVar10);
    _Buf1 = &DAT_1809ee468;
    if (0xf < DAT_1809ee480) {
      _Buf1 = (undefined8 **)DAT_1809ee468;
    }
    if ((DAT_1809ee478 != sVar11) ||
       ((DAT_1809ee478 != 0 && (iVar6 = memcmp(_Buf1,pcVar10,DAT_1809ee478), iVar6 != 0)))) {
      FUN_180029840(&DAT_1809ee468,pcVar10,sVar11);
      local_res18[0] = &DAT_1809ec010;
      iVar6 = FUN_1804e4d70(&DAT_1809ec010);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ec05c == 0x7fffffff) {
        DAT_1809ec05c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      sVar11 = strlen(pcVar10);
      FUN_180029840(&DAT_1809ec080,pcVar10,sVar11);
      DAT_180cc3e18 = 1;
      FUN_1804e4e90(&DAT_1809ec010);
      FUN_1802b2870("wl_world.log","[ambience] engine level name: \"%s\"\n",pcVar10);
    }
  }
  FUN_180297960(param_2);
  puVar26 = &DAT_1806d2870;
  if (param_2 == 0xc) {
    if (DAT_180ca15ba != '\0') {
      cVar4 = FUN_180044350();
      if (((cVar4 != '\0') && (DAT_180ccf810 != 0)) &&
         ((lVar12 = FUN_18000f3a0(), lVar12 != 0 && (lVar13 = FUN_180045260(), lVar13 != 0)))) {
        bVar5 = FUN_180047310();
        if ((bVar5 != 0) || (DAT_180ca15b9 != 0)) {
          local_res18[0] = (undefined *)((ulonglong)local_res18[0] & 0xffffffffffffff00);
          FUN_1800233d0((ulonglong)DAT_180961fb8 + lVar12,local_res18);
          local_res18[0] = (undefined *)CONCAT44(local_res18[0]._4_4_,(uint)bVar5);
          FUN_180013280((ulonglong)DAT_180961fc8 + lVar12,local_res18);
        }
        iVar6 = DAT_180ccf77c;
        if (bVar5 != 0) {
          iVar6 = 0;
        }
        DAT_180ca15b9 = bVar5;
        if (iVar6 != DAT_180962bcc) {
          puVar19 = &DAT_1806d2870;
          if (bVar5 != 0) {
            puVar19 = &DAT_1806d286c;
          }
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,(uint)(DAT_18095cf86 != '\0'));
          local_f8 = (uint)(DAT_18095cf85 != '\0');
          DAT_180962bcc = iVar6;
          FUN_1802b2560("[nl_view] third person %s (reason %d: 1 setting, 2 pawn, 3 class, 4 dead, 5 rules, 6 grenade) | distance %d | disablers wall %d grenade %d"
                        ,puVar19,DAT_180ccf77c,DAT_18095cf88);
        }
      }
    }
    FUN_18008af40();
    DAT_180963568 = 1;
    (*DAT_180cd1be0)(param_1,0xc);
LAB_1801ca8d4:
    cVar4 = (param_2 != 0xc) + '\x02';
  }
  else {
    (*DAT_180cd1be0)(param_1,param_2);
    if (param_2 != 7) goto LAB_1801ca8d4;
    cVar4 = '\x01';
  }
  puVar22 = auStack_118;
  puVar20 = auStack_118;
  puVar21 = auStack_118;
  FUN_1802b29d0(local_d8,cVar4);
  if (param_2 == 0xc) {
    FUN_18008af40();
    DAT_180963568 = 0;
    FUN_18020cf10(0xc);
    FUN_180214b40();
    FUN_180217620();
    FUN_180219e20(0xc);
    if (DAT_180ceca98 != '\0') {
LAB_1801caa2a:
      FUN_180223e40();
      goto LAB_1801caa9a;
    }
    if (DAT_1811089f0 != 0) {
      DAT_180ceca9c = FUN_18038eaf0("C_CSWeaponBase","m_iWeaponGameplayAnimState");
      DAT_180cecaa0 = FUN_18038eaf0("C_CSWeaponBase","m_flWeaponGameplayAnimStateTimestamp");
      iVar6 = FUN_18038eaf0("C_AttributeContainer","m_Item");
      iVar7 = FUN_18038eaf0("C_EconEntity","m_AttributeManager");
      DAT_180cecaa4 = iVar6 + iVar7;
      DAT_180cecaa8 = FUN_18038eaf0("C_EconItemView","m_iItemDefinitionIndex");
      DAT_180ceca98 = '\x01';
      if (DAT_180ca0108 != 0) {
        puVar26 = &DAT_1806d286c;
      }
      local_f8 = DAT_180cecaa8;
      local_f0 = puVar26;
      FUN_180221620("offsets | state 0x%X | timestamp 0x%X | item 0x%X | def 0x%X | hook %s",
                    DAT_180ceca9c,DAT_180cecaa0,DAT_180cecaa4);
      if (DAT_180ceca98 != '\0') goto LAB_1801caa2a;
    }
    FUN_18021ace0();
  }
  else {
    FUN_18020cf10(param_2);
    FUN_180214b40();
    if (param_2 != 7) {
      FUN_18021ace0();
      FUN_18004cd50(param_2);
      FUN_1800df100(param_2);
      FUN_18026c450(param_2);
      FUN_1800dc590(param_2);
      FUN_1800d6460(param_2);
      FUN_1800ac6b0(param_2);
      FUN_1800abc50(param_2);
      FUN_180071e00(param_2);
      FUN_18021fc60();
      FUN_18022cbc0();
      goto LAB_1801cb593;
    }
    FUN_180217620();
    FUN_180219e20(7);
LAB_1801caa9a:
    FUN_18021ace0();
  }
  if ((DAT_180cec950 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cec950 = '\x01';
    DAT_180cec954 = FUN_18038eaf0("CCSPlayerController","m_pInventoryServices");
    DAT_180cec958 = FUN_18038eaf0("CCSPlayerController_InventoryServices","m_unMusicID");
    DAT_180cec95c = FUN_18038eaf0("CCSPlayerController_InventoryServices","m_rank");
  }
  FUN_18021b010();
  FUN_18004cd50(param_2);
  FUN_1800df100(param_2);
  FUN_18026c450(param_2);
  puVar22 = auStack_118;
  if (param_2 == 0xc) {
    if (DAT_180cfa290 == 0) {
LAB_1801cab48:
      pHVar8 = GetModuleHandleA("steam_api64.dll");
      puVar22 = auStack_118;
      if (pHVar8 != (HMODULE)0x0) {
        pFVar9 = GetProcAddress(pHVar8,"SteamAPI_SteamUtils_v010");
        puVar22 = auStack_118;
        if (pFVar9 != (FARPROC)0x0) {
          lVar12 = FUN_18026f380(pFVar9);
          puVar22 = auStack_118;
          if (lVar12 != 0) {
            local_e8 = 0x20;
            uStack_e0 = FUN_18026f2d0;
            local_c8 = (undefined8 *)FUN_18000fb70(0x10);
            local_c0 = local_c8 + 2;
            *(undefined4 *)local_c8 = local_e8;
            *(undefined4 *)((longlong)local_c8 + 4) = uStack_e4;
            *(undefined4 *)(local_c8 + 1) = (undefined4)uStack_e0;
            *(undefined4 *)((longlong)local_c8 + 0xc) = uStack_e0._4_4_;
            local_b8 = local_c0;
            FUN_18026f140(&DAT_180cfa290,lVar12,&local_c8);
            puVar22 = auStack_118;
            if (local_c8 != (undefined8 *)0x0) {
              puVar14 = local_c8;
              if (((longlong)local_b8 - (longlong)local_c8 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1801cac0f:
                puVar21 = puVar20;
              }
              else {
                puVar14 = (undefined8 *)local_c8[-1];
                if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)puVar14))) {
                  pcVar1 = (code *)swi(0x29);
                  puVar14 = (undefined8 *)(*pcVar1)(5);
                  puVar20 = auStack_110;
                  goto LAB_1801cac0f;
                }
              }
              *(undefined8 *)(puVar21 + -8) = 0x1801cac17;
              thunk_FUN_1803d64e0(puVar14);
              puVar22 = puVar21;
            }
          }
        }
      }
    }
    else {
      puVar26 = (undefined *)FUN_18000f3a0();
      puVar22 = auStack_118;
      if (puVar26 != &DAT_180cfa2a8) goto LAB_1801cab48;
    }
    if ((DAT_180ccfbd5 == '\0') && (DAT_1809620c0 != 0)) {
      *(undefined8 *)(puVar22 + -8) = 0x1801cac31;
      lVar12 = FUN_18000f3a0();
      if (lVar12 != 0) {
        *(undefined8 *)(puVar22 + -8) = 0x1801cac49;
        DAT_180ccfbd5 = FUN_180273b60("player_chat",FUN_180270290);
      }
    }
    *(undefined8 *)(puVar22 + -8) = 0x1801cac54;
    FUN_18026f8a0();
    *(undefined8 *)(puVar22 + -8) = 0x1801cac59;
    FUN_18026f610();
    *(undefined8 *)(puVar22 + -8) = 0x1801cac5e;
    FUN_18026fc50();
    if (DAT_180ccfba5 != '\0') goto LAB_1801caca6;
    if (DAT_1809620c0 != 0) {
      *(undefined8 *)(puVar22 + -8) = 0x1801cac78;
      lVar12 = FUN_18000f3a0();
      if (lVar12 == 0) goto LAB_1801caca6;
      *(undefined8 *)(puVar22 + -8) = 0x1801cac90;
      DAT_180ccfba5 = FUN_180273b60("player_hurt",FUN_18026d850);
    }
    *(undefined8 *)(puVar22 + -8) = 0x1801cac9d;
    FUN_1800dc590(0xc);
    *(undefined8 *)(puVar22 + -8) = 0x1801caca4;
    FUN_1800d6460(0xc);
LAB_1801cacbd:
    LOCK();
    DAT_180ca3c54 = 1;
    UNLOCK();
    if (DAT_180ca3bc5 == '\0') {
      if (DAT_180ca3c55 == '\0') {
        DAT_180ca3c55 = '\x01';
        if (DAT_1811160f0 == 0) {
          *(undefined8 *)(puVar22 + -8) = 0x1801cad1f;
          pHVar8 = GetModuleHandleA("tier0.dll");
          if (pHVar8 != (HMODULE)0x0) {
            *(undefined8 *)(puVar22 + -8) = 0x1801cad38;
            pFVar9 = GetProcAddress(pHVar8,"CreateInterface");
            if (pFVar9 != (FARPROC)0x0) {
              *(undefined8 *)(puVar22 + -8) = 0x1801cad4c;
              DAT_1811160f0 = (*pFVar9)("VEngineCvar007",0);
              if (DAT_1811160f0 != 0) goto LAB_1801cad5f;
            }
          }
        }
        else {
LAB_1801cad5f:
          if ((s_retry_1806f05c8[0] != '\0') && (PTR_PTR_1809ebbc8 != (undefined *)0x0)) {
            local_88 = 0;
            local_80 = 0;
            local_b0 = "retry";
            local_a8 = "Reconnect to the last server";
            local_a0 = 0x80008;
            local_98 = &PTR_PTR_1809ebbc8;
            local_90 = 1;
            local_res18[0] = (undefined *)0xffff;
            *(undefined8 *)(puVar22 + -8) = 0x1801cadbe;
            cVar4 = FUN_180264b10(DAT_1811160f0,&local_b0,local_res18);
            if ((cVar4 != '\0') && (local_res18[0] != (undefined *)0xffff)) {
              DAT_1809ebbc0 = local_res18[0];
              *(undefined8 *)(puVar22 + -8) = 0x1801cade5;
              FUN_1802b2560("[retry] console command \"%s\" registered | handle 0x%llX","retry");
              if (DAT_180ca3bc5 == '\0') {
                *(undefined8 *)(puVar22 + -8) = 0x1801cae03;
                FUN_1800d6d50();
              }
              else {
                *(undefined8 *)(puVar22 + -8) = 0x1801cadfc;
                FUN_1800d7040("unload during registration");
              }
              goto LAB_1801cae14;
            }
          }
        }
        *(undefined8 *)(puVar22 + -8) = 0x1801cae14;
        FUN_1802b2560("[error] retry | console command \"%s\" not registered (VEngineCvar007 missing, call faulted, or the name is taken)"
                      ,"retry");
      }
LAB_1801cae14:
      if (DAT_1809620c0 != 0) {
        *(undefined8 *)(puVar22 + -8) = 0x1801cae25;
        lVar12 = FUN_18000f3a0();
        if (lVar12 != 0) {
          if (DAT_180ca3c56 == '\0') {
            DAT_180ca3c56 = '\x01';
            *(undefined8 *)(puVar22 + -8) = 0x1801cae4d;
            FUN_180273b60("player_connect",&LAB_1800d6e90);
          }
          if (DAT_180ca3bc7 == '\0') {
            DAT_180ca3bc7 = '\x01';
            *(undefined8 *)(puVar22 + -8) = 0x1801cae70;
            FUN_180273b60("player_connect_full",&LAB_1800d6e90);
          }
        }
      }
    }
    else {
      *(undefined8 *)(puVar22 + -8) = 0x1801cacdd;
      FUN_1800d7040("game thread");
      LOCK();
      DAT_180ca3bc6 = 1;
      UNLOCK();
    }
    LOCK();
    DAT_180ca3cae = 1;
    UNLOCK();
    if (DAT_180ca3c57 != '\0') {
      *(undefined8 *)(puVar22 + -8) = 0x1801cae90;
      FUN_1800d7c30("unload");
      LOCK();
      DAT_180ca3cad = 1;
      UNLOCK();
      goto LAB_1801caf4a;
    }
    if (DAT_180920e26 == '\0') {
LAB_1801caf31:
      pcVar10 = "disabled";
      if (DAT_180920e26 != '\0') {
        pcVar10 = "no local player";
      }
      *(undefined8 *)(puVar22 + -8) = 0x1801caf4a;
      FUN_1800d7c30(pcVar10);
    }
    else {
      if (DAT_180cd1304 == '\0') {
        *(undefined8 *)(puVar22 + -8) = 0x1801caec8;
        FUN_1803a0b60(local_res18);
        puVar26 = local_res18[0];
      }
      else {
        puVar26 = DAT_181108a00;
      }
      if (puVar26 == (undefined *)0x0) goto LAB_1801caf31;
      if (DAT_180ca3caf == '\0') {
        *(undefined8 *)(puVar22 + -8) = 0x1801caf21;
        FUN_1800d7d70();
        if (DAT_180ca3caf != '\0') goto LAB_1801caf2a;
      }
      else if ((DAT_180920e28 == 1) == DAT_180cd0e50) {
LAB_1801caf2a:
        *(undefined8 *)(puVar22 + -8) = 0x1801caf2f;
        FUN_1800d7fe0();
      }
      else {
        DAT_180cd0e68 = 0;
        DAT_1809e9bc8 = 1;
        DAT_180cd0e58 = 0;
        *(undefined8 *)(puVar22 + -8) = 0x1801caf1a;
        DAT_180cd0e50 = (uint)(DAT_180920e28 == 1);
        FUN_1800d7fe0();
      }
    }
LAB_1801caf4a:
    if ((((DAT_180920e4e != '\0') || (DAT_180920e52 != '\0')) || (DAT_180920e70 != '\0')) ||
       (DAT_180920e84 != '\0')) {
      if (DAT_180ca1c6e != '\0') goto LAB_1801cafc9;
      if (DAT_1809620c0 != 0) {
        *(undefined8 *)(puVar22 + -8) = 0x1801cafa9;
        lVar12 = FUN_18000f3a0();
        if (lVar12 == 0) goto LAB_1801cafc9;
        *(undefined8 *)(puVar22 + -8) = 0x1801cafc1;
        DAT_180ca1c6e = FUN_180273b60("player_hurt",FUN_1800acdb0);
      }
    }
    *(undefined8 *)(puVar22 + -8) = 0x1801caf75;
    FUN_1800ac6b0(param_2);
    *(undefined8 *)(puVar22 + -8) = 0x1801caf7c;
    FUN_1800abc50(param_2);
    *(undefined8 *)(puVar22 + -8) = 0x1801caf83;
    FUN_180071e00(param_2);
    *(undefined8 *)(puVar22 + -8) = 0x1801caf88;
    FUN_18021fc60();
    *(undefined8 *)(puVar22 + -8) = 0x1801caf8d;
    FUN_18022cbc0();
  }
  else {
LAB_1801caca6:
    *(undefined8 *)(puVar22 + -8) = 0x1801cacad;
    FUN_1800dc590(param_2);
    *(undefined8 *)(puVar22 + -8) = 0x1801cacb4;
    FUN_1800d6460(param_2);
    if (param_2 == 0xc) goto LAB_1801cacbd;
LAB_1801cafc9:
    *(undefined8 *)(puVar22 + -8) = 0x1801cafd0;
    FUN_1800ac6b0(param_2);
    *(undefined8 *)(puVar22 + -8) = 0x1801cafd7;
    FUN_1800abc50(param_2);
    *(undefined8 *)(puVar22 + -8) = 0x1801cafde;
    FUN_180071e00(param_2);
    *(undefined8 *)(puVar22 + -8) = 0x1801cafe3;
    FUN_18021fc60();
    *(undefined8 *)(puVar22 + -8) = 0x1801cafe8;
    FUN_18022cbc0();
    if (param_2 != 0xc) {
      if (param_2 != 7) goto LAB_1801cb593;
      DAT_180ceb7b0 = DAT_180ceb7b0 + 1;
      if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
        *(undefined8 *)(puVar22 + -8) = 0x1801cb468;
        FUN_180469cd0();
        *(undefined8 *)(puVar22 + -8) = 0x1801cb46d;
        FUN_18043bbf0();
        *(undefined8 *)(puVar22 + -8) = 0x1801cb472;
        FUN_18043bfb0();
        *(undefined8 *)(puVar22 + -8) = 0x1801cb477;
        FUN_18047c520();
      }
      if ((DAT_180ceb590 != 0) && (DAT_180962080 != 0)) {
        *(undefined8 *)(puVar22 + -8) = 0x1801cb49a;
        lVar12 = FUN_18000f3a0();
        if (lVar12 != 0) {
          if (DAT_180961a50 == 0) {
LAB_1801cb4ca:
            fVar28 = 0.0;
          }
          else {
            *(undefined8 *)(puVar22 + -8) = 0x1801cb4b7;
            lVar13 = FUN_18000f3a0();
            if (lVar13 == 0) goto LAB_1801cb4ca;
            *(undefined8 *)(puVar22 + -8) = 0x1801cb4c5;
            fVar28 = (float)FUN_18000f3d0(lVar13 + 0x30);
          }
          uVar2 = _DAT_1808ade90;
          uVar23 = 0;
          uVar25 = 0;
          uVar24 = DAT_180ceb590;
          if (DAT_180ceb590 != 0) {
            do {
              fVar29 = (float)((uint)(fVar28 - (float)(&DAT_1809f1324)[uVar25 * 3]) & uVar2);
              if (fVar29 < (float)(&DAT_1809f1328)[uVar25 * 3] ||
                  fVar29 == (float)(&DAT_1809f1328)[uVar25 * 3]) {
                uVar30 = (&DAT_1809f1328)[uVar25 * 3];
                *(undefined8 *)(&DAT_1809f1320 + uVar23 * 3) =
                     *(undefined8 *)(&DAT_1809f1320 + uVar25 * 3);
                (&DAT_1809f1328)[uVar23 * 3] = uVar30;
                uVar23 = uVar23 + 1;
              }
              else {
                uVar30 = (&DAT_1809f1320)[uVar25 * 3];
                *(undefined8 *)(puVar22 + -8) = 0x1801cb51c;
                FUN_18007eb70(lVar12,uVar30);
                uVar24 = DAT_180ceb590;
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar24);
          }
          DAT_180ceb590 = uVar23;
        }
      }
      *(undefined8 *)(puVar22 + -8) = 0x1801cb560;
      FUN_180010d70();
      if (DAT_18096221c != '\0') {
        if (DAT_180cd1ac4 != '\0') {
          *(undefined8 *)(puVar22 + -8) = 0x1801cb579;
          FUN_1803c5af0();
        }
        if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
          *(undefined8 *)(puVar22 + -8) = 0x1801cb592;
          FUN_180386310();
        }
      }
      goto LAB_1801cb593;
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x1801caff6;
  FUN_18001d820();
  cVar4 = DAT_180ca0ddc;
  LOCK();
  DAT_180ca0ddc = '\0';
  UNLOCK();
  if (cVar4 != '\0') {
    uVar24 = 1;
    do {
      LOCK();
      bVar27 = (&DAT_180ca3c70)[uVar24] == 0;
      if (bVar27) {
        (&DAT_180ca3c70)[uVar24] = 1;
      }
      UNLOCK();
      if (bVar27) {
        uVar15 = (&DAT_180594010)[uVar24];
        *(undefined8 *)(puVar22 + -8) = 0x1801cb02c;
        uVar15 = FUN_18001cdb0(uVar15);
        LOCK();
        (&DAT_180cc3d80)[uVar24] = uVar15;
        UNLOCK();
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < 0xe);
    *(undefined8 *)(puVar22 + -8) = 0x1801cb04a;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_180ca3d68);
    puVar3 = DAT_180cc4100;
    puVar14 = DAT_180cc40f8;
    local_c8 = DAT_180cc40f8;
    DAT_180cc40f8 = (undefined8 *)0x0;
    local_c0 = DAT_180cc4100;
    DAT_180cc4100 = (undefined8 *)0x0;
    local_b8 = DAT_180cc4108;
    DAT_180cc4108 = (undefined8 *)0x0;
    if (puVar14 != puVar3) {
      puVar18 = puVar14;
      do {
        local_res18[0] = (undefined *)((ulonglong)local_res18[0] & 0xffffffff00000000);
        *(undefined8 *)(puVar22 + -8) = 0x1801cb0a5;
        FUN_180023500();
        puVar18 = puVar18 + 4;
      } while (puVar18 != puVar3);
    }
    *(undefined8 *)(puVar22 + -8) = 0x1801cb0bb;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ca3d68);
    for (; puVar14 != puVar3; puVar14 = puVar14 + 4) {
      if ((ulonglong)puVar14[3] < 0x10) {
        puVar18 = puVar14;
      }
      else {
        puVar18 = (undefined8 *)*puVar14;
      }
      *(undefined8 *)(puVar22 + -8) = 0x1801cb0d4;
      uVar15 = FUN_18001cdb0(puVar18);
      *(undefined8 *)(puVar22 + -8) = 0x1801cb0e4;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180ca3d68);
      *(undefined8 *)(puVar22 + -8) = 0x1801cb0f8;
      plVar16 = (longlong *)FUN_180027090(&DAT_180ca0ae0,puVar22 + 0x30,puVar14);
      *(undefined8 *)(*plVar16 + 0x30) = uVar15;
      *(undefined8 *)(puVar22 + -8) = 0x1801cb10c;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180ca3d68);
    }
    *(undefined8 *)(puVar22 + -8) = 0x1801cb11e;
    FUN_1800288b0(&local_c8);
  }
  if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
    *(undefined8 *)(puVar22 + -8) = 0x1801cb135;
    FUN_18020eeb0();
  }
  *(undefined8 *)(puVar22 + -8) = 0x1801cb13a;
  FUN_1801d6840();
  *(undefined8 *)(puVar22 + -8) = 0x1801cb13f;
  FUN_180220270();
  *(undefined8 *)(puVar22 + -8) = 0x1801cb144;
  FUN_180232810();
  *(undefined8 *)(puVar22 + -8) = 0x1801cb14d;
  plVar16 = (longlong *)FUN_1800ad890(local_res18);
  uVar30 = SUB84((double)*plVar16 / DAT_1808ac9a0,0);
  lVar12 = DAT_180cf9f78;
  if (DAT_180cf9f78 == 0) {
    *(undefined8 *)(puVar22 + -8) = 0x1801cb176;
    pHVar8 = GetModuleHandleA("engine2.dll");
    if (pHVar8 == (HMODULE)0x0) {
      lVar12 = 0;
    }
    else {
      *(undefined8 *)(puVar22 + -8) = 0x1801cb190;
      pFVar9 = GetProcAddress(pHVar8,"CreateInterface");
      if (pFVar9 == (FARPROC)0x0) {
        lVar12 = 0;
      }
      else {
        *(undefined8 *)(puVar22 + -8) = 0x1801cb1a5;
        lVar12 = (*pFVar9)("Source2EngineToClient001",0);
        DAT_180cf9f78 = lVar12;
      }
    }
  }
  if (DAT_180961fa8 == 0) {
    lVar13 = 0;
  }
  else {
    *(undefined8 *)(puVar22 + -8) = 0x1801cb1cf;
    lVar17 = FUN_18000f3a0();
    lVar13 = 0;
    if (lVar17 - 0x10000U < 0x7ffffffeffff) {
      lVar13 = lVar17;
    }
  }
  if (lVar12 - 0x10000U < 0x7ffffffeffff) {
    local_res18[0] = (undefined *)((ulonglong)local_res18[0] & 0xffffffffffffff00);
    *(undefined8 *)(puVar22 + -8) = 0x1801cb201;
    FUN_180232dc0(lVar12,0x27,local_res18);
    if ((char)local_res18[0] == '\0') goto LAB_1801cb20b;
    bVar27 = true;
  }
  else {
LAB_1801cb20b:
    bVar27 = false;
  }
  if ((lVar13 == 0) || (!bVar27)) {
LAB_1801cb23e:
    if (DAT_180cf8fc0 != '\0') {
      *(undefined8 *)(puVar22 + -8) = 0x1801cb24c;
      FUN_180232ea0();
    }
  }
  else {
    *(undefined8 *)(puVar22 + -8) = 0x1801cb222;
    lVar12 = FUN_18000f3a0(lVar13 + 0xf0);
    if (0x7ffffffefffe < lVar12 - 0x10000U) goto LAB_1801cb23e;
    *(undefined8 *)(puVar22 + -8) = 0x1801cb23c;
    FUN_180232f80(lVar13,lVar12,uVar30);
  }
  *(undefined8 *)(puVar22 + -8) = 0x1801cb254;
  FUN_180233900(uVar30);
  *(undefined8 *)(puVar22 + -8) = 0x1801cb259;
  FUN_1802035e0();
  if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
    *(undefined8 *)(puVar22 + -8) = 0x1801cb270;
    FUN_1802052a0();
  }
  *(undefined8 *)(puVar22 + -8) = 0x1801cb275;
  FUN_1803628b0();
  *(undefined8 *)(puVar22 + -8) = 0x1801cb27b;
  DAT_1811079c8 = GetTickCount64();
  LOCK();
  UNLOCK();
  if (DAT_18096221c != '\0') {
    if ((DAT_180cd1ac4 != '\0') &&
       (((DAT_18091a1e0 != '\0' || (DAT_18091bb0c != '\0')) || (DAT_1809209f0 != '\0')))) {
      *(undefined8 *)(puVar22 + -8) = 0x1801cb2b6;
      FUN_1803a4430();
    }
    if (DAT_18096221c != '\0') {
      if (DAT_180cd1ac4 != '\0') {
        *(undefined8 *)(puVar22 + -8) = 0x1801cb2cf;
        FUN_180387d50();
      }
      if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
        *(undefined8 *)(puVar22 + -8) = 0x1801cb2e8;
        FUN_180206bb0();
      }
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x1801cb2ed;
  FUN_18002e330();
  *(undefined8 *)(puVar22 + -8) = 0x1801cb2f2;
  FUN_1803bb180();
  *(undefined8 *)(puVar22 + -8) = 0x1801cb2f7;
  FUN_1800e46d0();
  if (DAT_18096221c != '\0') {
    if (DAT_180cd1ac4 != '\0') {
      *(undefined8 *)(puVar22 + -8) = 0x1801cb314;
      FUN_1800917e0();
    }
    if (DAT_18096221c != '\0') {
      if (DAT_180cd1ac4 != '\0') {
        *(undefined8 *)(puVar22 + -8) = 0x1801cb331;
        FUN_180253b80();
      }
      if (DAT_18096221c != '\0') {
        if (DAT_180cd1ac4 != '\0') {
          *(undefined8 *)(puVar22 + -8) = 0x1801cb34e;
          FUN_1800425e0();
        }
        if (DAT_18096221c != '\0') {
          if (DAT_180cd1ac4 != '\0') {
            if (DAT_180cd1304 == '\0') {
              *(undefined8 *)(puVar22 + -8) = 0x1801cb381;
              FUN_1803a0b60(local_res18);
              DAT_181108a00 = local_res18[0];
              *(undefined8 *)(puVar22 + -8) = 0x1801cb395;
              DAT_1811089f8 = FUN_1803a0c50(local_res18);
              DAT_180cd1304 = '\x01';
            }
            if ((DAT_1811089f8 == 0) || (DAT_180ca09f0 == 0)) {
LAB_1801cb3c7:
              DAT_180ca1bde = 0;
            }
            else {
              *(undefined8 *)(puVar22 + -8) = 0x1801cb3ba;
              iVar6 = FUN_180011200((ulonglong)DAT_180ca09f0 + DAT_1811089f8);
              if (999 < iVar6 - 1U) goto LAB_1801cb3c7;
              DAT_180ca1bde = 1;
            }
            LOCK();
            UNLOCK();
          }
          if (DAT_18096221c != '\0') {
            if (DAT_180cd1ac4 != '\0') {
              *(undefined8 *)(puVar22 + -8) = 0x1801cb3e8;
              FUN_18008e9b0();
            }
            if (DAT_18096221c != '\0') {
              if (DAT_180cd1ac4 != '\0') {
                *(undefined8 *)(puVar22 + -8) = 0x1801cb401;
                FUN_180012fa0();
                *(undefined8 *)(puVar22 + -8) = 0x1801cb406;
                FUN_18038d530();
              }
              if (DAT_18096221c != '\0') {
                if (DAT_180cd1ac4 != '\0') {
                  *(undefined8 *)(puVar22 + -8) = 0x1801cb41f;
                  FUN_1803c2230();
                }
                if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
                  *(undefined8 *)(puVar22 + -8) = 0x1801cb438;
                  FUN_180469ad0();
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x1801cb43d;
  FUN_1801d34f0();
LAB_1801cb593:
  *(undefined8 *)(puVar22 + -8) = 0x1801cb59c;
  FUN_1802b2ad0(local_d8);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cb5f0 FUN_1801cb5f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cb5f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  longlong lVar3;
  longlong lVar4;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_1800f19c0(param_2);
  FUN_180072350(param_2);
  DAT_180cc492f = 0;
  DAT_180ceb4d8 = 0;
  DAT_180ceb4d0 = 0;
  DAT_180ceb4d4 = 0;
  DAT_180cc492d = 0;
  _DAT_180ceb4e0 = 0;
  _DAT_180ceb4e8 = 0;
  _DAT_180ceb4f0 = 0;
  LOCK();
  DAT_180cd1a94 = 1;
  UNLOCK();
  LOCK();
  DAT_180cc3d74 = 1;
  UNLOCK();
  DAT_180ccfe84 = 0;
  if (DAT_180ccfeb8 != DAT_180ccfec0) {
    DAT_180ccfec0 = DAT_180ccfeb8;
  }
  iVar1 = FUN_1804e4d70(&DAT_1809ee4f0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee53c == 0x7fffffff) {
    DAT_1809ee53c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  FUN_180023ae0(&DAT_180ce1ee0);
  if (DAT_180ce1ec0 != DAT_180ce1ec8) {
    DAT_180ce1ec8 = DAT_180ce1ec0;
  }
  FUN_1804e4e90(&DAT_1809ee4f0);
  FUN_1800927f0();
  _DAT_181111c59 = 0;
  _DAT_181111c5c = 0;
  DAT_181111c68 = 0;
  _DAT_181111c6c = 0;
  ppuVar2 = (undefined **)&DAT_180c3df70;
  do {
    *(undefined4 *)ppuVar2 = 0xffffffff;
    *(undefined4 *)(ppuVar2 + 1) = 0;
    ppuVar2 = ppuVar2 + 0xfa;
  } while (ppuVar2 != &PTR_s_sv_air_max_wishspeed_180c87350);
  DAT_1809f771c = 0xffffffff;
  lVar3 = DAT_181112368;
  lVar4 = DAT_181112370;
  if (DAT_181112368 != DAT_181112370) {
    do {
      FUN_180467670();
      lVar3 = lVar3 + 0xfd0;
    } while (lVar3 != lVar4);
  }
  if (DAT_181112338 != DAT_181112340) {
    DAT_181112340 = DAT_181112338;
  }
  FUN_180472ad0();
  FUN_18047cc00();
  if (DAT_181114250 != DAT_181114258) {
    DAT_181114258 = DAT_181114250;
  }
  DAT_1809f3378 = 0xffffffff;
  DAT_180ccfb7c = 0;
  DAT_180ccfb7e = 0;
  DAT_180cfa1b8 = 0;
  DAT_180ccfb7d = 0;
  _DAT_180cfa114 = 0;
  DAT_1809f337c = 0xffffffff;
  DAT_1809f3518 = 0xffffffff;
  FUN_180263c50();
  (*DAT_180cd1e68)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cb820 FUN_1801cb820 ===== */

void FUN_1801cb820(undefined8 param_1,int param_2)

{
  longlong unaff_retaddr;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1b88)();
  if ((((param_2 == 0) && (DAT_180962010 != 0)) && (unaff_retaddr == DAT_180962010)) &&
     ((DAT_18096221c != '\0' && (DAT_180cd1ac4 != '\0')))) {
    FUN_18046a280();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cb880 FUN_1801cb880 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801cb880(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined1 local_134;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  char local_f8 [8];
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined8 local_d5;
  undefined8 uStack_cd;
  undefined8 local_c5;
  undefined8 uStack_bd;
  undefined8 local_b5;
  undefined8 uStack_ad;
  undefined8 local_a5;
  undefined8 uStack_9d;
  undefined8 local_95;
  undefined4 uStack_8d;
  undefined4 uStack_89;
  undefined4 uStack_85;
  undefined8 uStack_81;
  char local_79;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_158;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_f8[0] = '\0';
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d6 = 0;
  local_d5 = 0;
  uStack_cd = 0;
  local_c5 = 0;
  uStack_bd = 0;
  local_b5 = 0;
  uStack_ad = 0;
  local_a5 = 0;
  uStack_9d = 0;
  local_95 = 0;
  uStack_8d = 0;
  uStack_89 = 0;
  uStack_85 = 0;
  uStack_81 = 0;
  local_79 = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_130 = param_2;
  local_128 = param_3;
  local_118 = param_4;
  local_108 = param_1;
  FUN_18026a560(local_f8,param_1,param_2);
  if ((param_1 - 0x10000U < 0x7ffffffeffff) && (param_2 - 0x10000U < 0x7ffffffeffff)) {
    FUN_180011200(param_2 + 8);
    lVar6 = FUN_18000f3a0(param_1 + 0x38);
    if ((DAT_180ccf9c0 != '\0') && ((lVar6 != 0 && (lVar6 == DAT_180ccf998)))) {
      DAT_180ccf9c0 = '\0';
      if ((DAT_180ccf854 != 0) &&
         (((lVar6 - 0x10000U < 0x7ffffffeffff &&
           (lVar6 = FUN_18000f3a0((ulonglong)DAT_180ccf854 + lVar6), lVar6 != 0)) &&
          (lVar6 == DAT_180ccf9a0)))) {
        FUN_180047aa0(lVar6);
      }
    }
  }
  FUN_18043cfa0(param_1,param_2);
  lVar6 = local_e8;
  if ((local_f8[0] != '\0') && (iVar4 = FUN_180011200(local_e8 + 8), -1 < iVar4)) {
    lVar16 = (longlong)(iVar4 % 0x96) * 0x20;
    iVar1 = *(int *)(&DAT_180c3ad20 + lVar16);
    piVar8 = (int *)0x0;
    if (iVar1 == iVar4) {
      piVar8 = (int *)(&DAT_180c3ad20 + lVar16);
    }
    if (piVar8 != (int *)0x0) {
      pcVar10 = &DAT_00000004;
      if (iVar1 == iVar4) {
        pcVar10 = &DAT_180c3ad24 + lVar16;
      }
      if (*pcVar10 != '\0') {
        local_138 = FUN_180011200(lVar6 + 0x20);
        local_138 = local_138 | 1;
        FUN_180013280(lVar6 + 0x20,&local_138);
        lVar7 = FUN_18000f3a0(lVar6 + 0x40);
        if (lVar7 - 0x10000U < 0x7ffffffeffff) {
          local_138 = FUN_180011200(lVar7 + 0x10);
          local_138 = local_138 | 4;
          FUN_180013280(lVar7 + 0x10,&local_138);
          lVar6 = FUN_18000f3a0(lVar6 + 0x40);
          if (lVar6 - 0x10000U < 0x7ffffffeffff) {
            lVar7 = FUN_18000f3a0(lVar6 + 0x40);
            lVar6 = 0;
            if (lVar7 - 0x10000U < 0x7ffffffeffff) {
              lVar6 = lVar7;
            }
            if (lVar6 != 0) {
              uVar17 = FUN_18000f3d0(lVar6 + 0x18);
              local_70 = CONCAT44(local_70._4_4_,uVar17);
              uVar17 = FUN_18000f3d0(lVar6 + 0x1c);
              local_70 = CONCAT44(uVar17,(undefined4)local_70);
              uVar17 = FUN_18000f3d0(lVar6 + 0x20);
              local_68 = CONCAT44(local_68._4_4_,uVar17);
              local_138 = FUN_180011200(lVar6 + 0x10);
              local_138 = local_138 | 7;
              FUN_180013280(lVar6 + 0x10,&local_138);
              uVar15 = 0;
              do {
                puVar11 = (undefined *)0x14;
                if (iVar1 == iVar4) {
                  puVar11 = &DAT_180c3ad34 + lVar16;
                }
                FUN_180013280((longlong)((int)uVar15 * 4) + lVar6 + 0x18,puVar11 + uVar15 * 4);
                uVar14 = (int)uVar15 + 1;
                uVar15 = (ulonglong)uVar14;
              } while ((int)uVar14 < 3);
              param_1 = local_108;
              param_2 = local_130;
              local_78 = lVar6;
              goto LAB_1801cbb74;
            }
          }
        }
      }
    }
  }
LAB_1801cbb74:
  lVar6 = local_78;
  bVar2 = false;
  local_134 = 0;
  if ((param_1 - 0x10000U < 0x7ffffffeffff) && (param_2 - 0x10000U < 0x7ffffffeffff)) {
    lVar16 = FUN_18000f3a0(param_1 + 0x38);
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_130);
      DAT_181108a00 = local_130;
      DAT_1811089f8 = FUN_1803a0c50(&local_130);
      DAT_180cd1304 = '\x01';
    }
    if (((lVar16 != 0) && (DAT_1811089f8 != 0)) && (lVar16 == DAT_1811089f8)) {
      DAT_180ca1c38 = FUN_180011200(param_2 + 8);
      DAT_180ca0cdd = 0;
      DAT_180ca39d0 = GetCurrentThreadId();
      bVar2 = true;
      local_134 = 1;
    }
  }
  lVar16 = (*DAT_180cd1ad8)(param_1,param_2,local_128,local_118);
  cVar3 = local_f8[0];
  local_130 = lVar16;
  if ((local_f8[0] != '\0') && (lVar6 != 0)) {
    uVar15 = 0;
    do {
      FUN_180013280((longlong)((int)uVar15 * 4) + 0x18 + lVar6,(longlong)&local_70 + uVar15 * 4);
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < 3);
    local_138 = FUN_180011200(lVar6 + 0x10);
    local_138 = local_138 | 7;
    FUN_180013280(lVar6 + 0x10,&local_138);
    local_78 = 0;
  }
  FUN_18043d1c0(param_1);
  lVar6 = local_e8;
  if (cVar3 != '\0') {
    iVar4 = FUN_180011200(local_e8 + 8);
    if (((iVar4 == DAT_1809f3378) && (lVar7 = FUN_180269460(), lVar7 != 0)) &&
       ((uVar14 = iVar4 + 1, -1 < (int)uVar14 &&
        (((DAT_180961fd0 != 0 &&
          (lVar7 = ((ulonglong)uVar14 % (ulonglong)DAT_180961fd0) * (ulonglong)DAT_180961fd4 + lVar7
          , lVar7 != 0)) && (uVar5 = FUN_180011200(lVar7 + 8), uVar5 == uVar14)))))) {
      local_138 = 0;
      FUN_180013280(lVar7 + 8,&local_138);
    }
    lVar7 = local_e0;
    if (-1 < iVar4) {
      lVar16 = (longlong)(iVar4 % 0x96) * 0x20;
      iVar1 = *(int *)(&DAT_180c3ad20 + lVar16);
      piVar8 = (int *)0x0;
      if (iVar1 == iVar4) {
        piVar8 = (int *)(&DAT_180c3ad20 + lVar16);
      }
      if (((piVar8 != (int *)0x0) && (local_79 != '\0')) &&
         ((local_e0 - 0x10000U < 0x7ffffffeffff && ((DAT_180cfa0e0 != 0 && (DAT_180cfa158 != 0))))))
      {
        uVar15 = 0;
        do {
          FUN_1800233d0(DAT_180cfa0d4 + uVar15 + lVar7,(longlong)&uStack_89 + uVar15);
          uVar15 = uVar15 + 1;
        } while (uVar15 < 0xc);
        uVar15 = 0;
        do {
          FUN_1800233d0(DAT_180cfa0d8 + uVar15 + lVar7,(longlong)&uStack_cd + uVar15 + 4);
          uVar15 = uVar15 + 1;
        } while (uVar15 < 0x30);
        uVar15 = 0;
        do {
          FUN_1800233d0(DAT_180cfa0dc + uVar15 + lVar7,(longlong)&uStack_9d + uVar15 + 4);
          uVar15 = uVar15 + 1;
        } while (uVar15 < 0x10);
        puVar9 = (undefined8 *)FUN_1800111b0(&local_128,(ulonglong)DAT_180cfa0e0 + lVar7);
        local_118 = *puVar9;
        local_110 = *(undefined4 *)(puVar9 + 1);
        puVar13 = (undefined4 *)&DAT_00000008;
        if (iVar1 == iVar4) {
          puVar13 = (undefined4 *)(&DAT_180c3ad28 + lVar16);
        }
        puVar12 = (undefined4 *)&DAT_0000000c;
        if (iVar1 == iVar4) {
          puVar12 = (undefined4 *)(&DAT_180c3ad2c + lVar16);
        }
        local_128 = CONCAT44(*puVar12,*puVar13);
        puVar13 = (undefined4 *)&DAT_00000010;
        if (iVar1 == iVar4) {
          puVar13 = (undefined4 *)(&DAT_180c3ad30 + lVar16);
        }
        local_120 = *puVar13;
        FUN_180023a50((ulonglong)DAT_180cfa0e0 + lVar7,&local_128);
        FUN_1802694f0(lVar7);
        FUN_180023a50((ulonglong)DAT_180cfa0e0 + lVar7,&local_118);
      }
      lVar16 = local_130;
    }
    FUN_1800233d0(lVar6 + 0x49,&local_d8);
    FUN_1800233d0(lVar6 + 0x4a,(longlong)&local_d8 + 1);
    local_138 = FUN_180011200(lVar6 + 0x20);
    local_138 = local_138 | 0x1c;
    FUN_180013280(lVar6 + 0x20,&local_138);
    FUN_1800233d0(lVar6 + 0x4b,&local_d6);
  }
  if (bVar2) {
    DAT_180ca39d0 = 0;
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return lVar16;
}



/* ===== 1801cbf90 FUN_1801cbf90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801cbf90(longlong param_1)

{
  uint uVar1;
  HMODULE hModule;
  char cVar2;
  DWORD DVar3;
  char *pcVar4;
  longlong lVar5;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined1 auStack_668 [32];
  char local_648 [512];
  char local_448 [512];
  char local_248 [520];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_668;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  cVar2 = FUN_1800810e0();
  if (cVar2 == '\0') {
    if ((param_1 != 0) && (DAT_180962078 != 0)) {
      FUN_180540170(local_648,0,0x200);
      cVar2 = FUN_180207ed0(param_1,local_648);
      if (cVar2 != '\0') {
        pcVar4 = local_648;
        while (local_648[0] != '\0') {
          if (*pcVar4 == '\\') {
            *pcVar4 = '/';
          }
          pcVar4 = pcVar4 + 1;
          local_648[0] = *pcVar4;
        }
        lVar5 = FUN_1804ef120(local_648,"particles/entity/spectator_utility_trail");
        if ((lVar5 != 0) &&
           (cVar2 = FUN_180207f50(param_1,local_648,&DAT_180705ad0,0x1139), cVar2 != '\0'))
        goto LAB_1801cc2e9;
      }
    }
    if (param_1 != 0) {
      if (DAT_180962078 != 0) {
        FUN_180540170(local_448,0,0x200);
        cVar2 = FUN_180207ed0(param_1,local_448);
        if (cVar2 != '\0') {
          pcVar4 = local_448;
          while (local_448[0] != '\0') {
            if (*pcVar4 == '\\') {
              *pcVar4 = '/';
            }
            pcVar4 = pcVar4 + 1;
            local_448[0] = *pcVar4;
          }
          lVar5 = FUN_1804ef120(local_448,"particles/neverlose/impact_sparks");
          if ((lVar5 != 0) &&
             (cVar2 = FUN_180207f50(param_1,local_448,&DAT_180706d10,0x10dd), cVar2 != '\0'))
          goto LAB_1801cc2e9;
        }
      }
      if ((param_1 != 0) && (DAT_180962078 != 0)) {
        FUN_180540170(local_248,0,0x200);
        cVar2 = FUN_180207ed0(param_1,local_248);
        if (cVar2 != '\0') {
          pcVar4 = local_248;
          while (local_248[0] != '\0') {
            if (*pcVar4 == '\\') {
              *pcVar4 = '/';
            }
            pcVar4 = pcVar4 + 1;
            local_248[0] = *pcVar4;
          }
          lVar5 = FUN_1804ef120(local_248,"particles/dev/materials_test_alpha_thresholding");
          if ((lVar5 != 0) &&
             (cVar2 = FUN_180207f50(param_1,local_248,&DAT_180708170,0x1070), cVar2 != '\0'))
          goto LAB_1801cc2e9;
        }
      }
    }
    ppuVar8 = &PTR_s_particles_dev_materials_test_bur_1806a8fb0;
    do {
      if ((ppuVar8[2] != (undefined *)0x0) &&
         (cVar2 = FUN_180208200(param_1,ppuVar8[1],ppuVar8[2],ppuVar8[3]), cVar2 != '\0'))
      goto LAB_1801cc2e9;
      ppuVar8 = ppuVar8 + 4;
    } while (ppuVar8 != &PTR_s_materials_particle_phantom_lance_1806a9030);
    puVar9 = (undefined4 *)&DAT_1806a9040;
    do {
      cVar2 = FUN_180208200(param_1,*(undefined8 *)(puVar9 + 2),*(undefined8 *)(puVar9 + 4),
                            *(undefined8 *)(puVar9 + 6));
      if (cVar2 != '\0') goto LAB_1801cc2e9;
      puVar9 = puVar9 + 8;
    } while (puVar9 != &DAT_1806a90a0);
    ppuVar8 = &PTR_s_materials_particle_phantom_lance_1806a9030;
    do {
      uVar1 = *(uint *)(ppuVar8 + 1);
      if (DAT_1811162a8 == (HMODULE)0x0) {
        GetModuleHandleExA(6,(LPCSTR)FUN_18036fc20,&DAT_1811162a8);
      }
      hModule = DAT_1811162a8;
      if (((DAT_1811162a8 != (HMODULE)0x0) &&
          (hResInfo = FindResourceA(DAT_1811162a8,(LPCSTR)(ulonglong)(uVar1 & 0xffff),(LPCSTR)0xa),
          hResInfo != (HRSRC)0x0)) &&
         (hResData = LoadResource(hModule,hResInfo), hResData != (HGLOBAL)0x0)) {
        pvVar6 = LockResource(hResData);
        DVar3 = SizeofResource(hModule,hResInfo);
        if (((pvVar6 != (LPVOID)0x0) && (DVar3 != 0)) &&
           (cVar2 = FUN_180208200(param_1,*ppuVar8,pvVar6,DVar3), cVar2 != '\0'))
        goto LAB_1801cc2e9;
      }
      ppuVar8 = ppuVar8 + 2;
    } while (ppuVar8 != (undefined **)&DAT_1806a9040);
    cVar2 = FUN_180388300(param_1);
    if ((cVar2 == '\0') && (cVar2 = FUN_180094e40(param_1), cVar2 == '\0')) {
      uVar7 = (*DAT_180cd1e48)(param_1);
      goto LAB_1801cc2eb;
    }
  }
LAB_1801cc2e9:
  uVar7 = 0;
LAB_1801cc2eb:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar7;
}



/* ===== 1801cc320 FUN_1801cc320 ===== */

void FUN_1801cc320(void)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_1809210b9 == '\0') {
    (*DAT_180cd1a68)();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cc360 FUN_1801cc360 ===== */

void FUN_1801cc360(void)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1e60)();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cc380 FUN_1801cc380 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cc380(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ULONGLONG UVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_res10 [6];
  float local_28 [8];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1aa8)();
  lVar1 = DAT_180cf9f40;
  if (param_2 != 0) {
    if ((DAT_1809211a0 != '\0') && (DAT_180cf9f40 != 0)) {
      fVar6 = DAT_1808ac064;
      if (DAT_1808ac064 <= DAT_1809211a4) {
        fVar6 = DAT_1809211a4;
      }
      UVar2 = GetTickCount64();
      fVar5 = (float)(UVar2 - lVar1) / DAT_1808acc3c;
      if (fVar5 < fVar6) {
        local_28[2] = 1.0;
        local_28[0] = 0.0;
        local_28[1] = (DAT_1808ac34c - fVar5 / fVar6) * _DAT_1809211a8;
        pfVar4 = local_28;
        if (0.0 <= local_28[1]) {
          pfVar4 = local_28 + 1;
        }
        pfVar3 = local_28 + 2;
        if (local_28[1] <= DAT_1808ac34c) {
          pfVar3 = pfVar4;
        }
        fVar6 = *pfVar3;
        local_res10[0] = fVar6;
        fVar5 = (float)FUN_18000f3d0(param_2);
        if (fVar5 < fVar6) {
          FUN_180013280(param_2,local_res10);
        }
      }
      else {
        LOCK();
        DAT_180cf9f40 = 0;
        UNLOCK();
      }
    }
    if (DAT_18095d2d0 == 0) {
      if (DAT_180ccf986 == '\0') goto LAB_1801cc4be;
      local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,1);
    }
    else {
      local_res10[0] = (float)((uint)local_res10[0]._1_3_ << 8);
    }
    FUN_1800233d0(param_2 + 4,local_res10);
  }
LAB_1801cc4be:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cc4e0 FUN_1801cc4e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cc4e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1a40)();
  FUN_1802645a0(param_2);
  if (param_2 != 0) {
    iVar1 = FUN_180011200(param_2 + 0x430);
    iVar2 = FUN_180011200(param_2 + 0x438);
    if ((0 < iVar1) && (0 < iVar2)) {
      _DAT_180cf8f68 = (float)iVar1 / (float)iVar2;
    }
  }
  FUN_180072540(param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cc560 FUN_1801cc560 ===== */

void FUN_1801cc560(undefined8 param_1)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1b08)();
  FUN_18004d300(param_1);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cc590 FUN_1801cc590 ===== */

undefined8 FUN_1801cc590(void)

{
  undefined8 uVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_1809210c1 == '\0') {
    uVar1 = (*DAT_180cd1a88)();
  }
  else {
    uVar1 = 0;
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar1;
}



/* ===== 1801cc5c0 FUN_1801cc5c0 ===== */

void FUN_1801cc5c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = DAT_1809210b7;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (param_1 != 0) {
    if ((DAT_1809210b7 != '\0') || (DAT_180cc4bfe != '\0')) {
      iVar2 = FUN_1804e4d70(&DAT_1809f1670);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809f16bc == 0x7fffffff) {
        DAT_1809f16bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      if ((cVar1 == '\0') && (DAT_180ceb620 == 0)) {
        DAT_180cc4bfe = cVar1;
      }
      else {
        FUN_180208380(param_1,cVar1);
      }
      FUN_1804e4e90(&DAT_1809f1670);
    }
  }
  (*DAT_180cd1bd8)(param_1,param_2,param_3);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cc690 FUN_1801cc690 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cc690(undefined8 param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
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
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_128;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_1800f19c0(0);
  FUN_180072420();
  LOCK();
  DAT_1809f70bc = 0xffffffff;
  UNLOCK();
  DAT_1809f7178 = 0xffffffff;
  _DAT_1809f7900 = 0xffffffffffffffff;
  if (DAT_181108828 != DAT_181108830) {
    DAT_181108830 = DAT_181108828;
  }
  LOCK();
  DAT_18110884c = 0;
  UNLOCK();
  DAT_181108840 = 0;
  _DAT_1809f717c = 0xff800000;
  DAT_180cd110d = 0;
  DAT_180cd11fa = 0;
  DAT_1809f7950 = 0xffffffff;
  DAT_1809f7954 = 0;
  DAT_1809f7958 = 0xffffffff;
  DAT_1809f795c = 0;
  _DAT_1809f795d = local_100._5_2_;
  DAT_1809f795f = local_100._7_1_;
  DAT_1809f7960 = 0;
  _DAT_1809f7968 = 0;
  DAT_1809f7970 = 0xffffffff;
  _DAT_1809f7974 = 0;
  _DAT_1809f797c = 0;
  DAT_1809f7980 = 0;
  _DAT_1809f7981 = local_d8._1_2_;
  DAT_1809f7983 = local_d8._3_1_;
  _DAT_1809f7984 = 0;
  local_108 = 0xffffffff;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  DAT_1809f7918 = 0xffffffff;
  DAT_1809f7920 = 0;
  _DAT_1809f7928 = 0;
  DAT_1809f7930 = 0;
  FUN_1800ccf00(&DAT_1809f7938,&local_e8);
  FUN_180068f30(&local_e8);
  lVar2 = DAT_181108860;
  DAT_180cd127a = 0;
  DAT_180cd1278 = 0;
  DAT_180cd125e = 0;
  DAT_180cd125d = 0;
  DAT_1809f7328 = 0xffffffff;
  lVar4 = DAT_181108858;
  if (DAT_181108858 != DAT_181108860) {
    do {
      FUN_18000f890(lVar4 + 0x10);
      lVar4 = lVar4 + 0x60;
    } while (lVar4 != lVar2);
    DAT_181108860 = DAT_181108858;
  }
  LOCK();
  DAT_181108854 = 0;
  UNLOCK();
  DAT_1809f7910 = DAT_1809f7910 + 1;
  iVar3 = FUN_1804e4d70(&DAT_1809f1620);
  if (iVar3 != 0) {
LAB_1801ccb3e:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f166c == 0x7fffffff) {
    DAT_1809f166c = 0x7ffffffe;
  }
  else {
    if (DAT_180ceb598 != DAT_180ceb5a0) {
      DAT_180ceb5a0 = DAT_180ceb598;
    }
    DAT_180cc4b5d = 0;
    DAT_1809efa08 = 0xffffffff;
    FUN_1804e4e90(&DAT_1809f1620);
    DAT_180ceb578 = 0;
    DAT_180ceb580 = 0;
    iVar3 = FUN_1804e4d70(&DAT_1809f1250);
    if (iVar3 != 0) goto LAB_1801ccb3e;
    if (DAT_1809f129c != 0x7fffffff) {
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
      DAT_1809f130c = local_5c;
      DAT_1809f1310 = (undefined1)local_58;
      DAT_1809f1311 = local_58._1_1_;
      DAT_1809f1314 = (undefined4)local_54;
      DAT_1809f1318 = local_54._4_4_;
      DAT_1809f131c = local_4c;
      FUN_18000f890(&local_80);
      FUN_1800bcd20(&local_a0);
      FUN_1804e4e90(&DAT_1809f1250);
      DAT_180cc492f = 0;
      DAT_180ceb4d8 = 0;
      DAT_180ceb4d0 = 0;
      DAT_180ceb4d4 = 0;
      DAT_180cc492d = 0;
      _DAT_180ceb4e0 = 0;
      _DAT_180ceb4e8 = 0;
      _DAT_180ceb4f0 = 0;
      FUN_180234090();
      uVar5 = FUN_18022d5e0();
      uVar1 = DAT_180cc3d74;
      LOCK();
      DAT_180cd1a94 = 1;
      UNLOCK();
      LOCK();
      DAT_180cc3d74 = 1;
      UNLOCK();
      FUN_180263c50(uVar5,uVar1);
      (*DAT_180cd1ba8)(param_1);
      LOCK();
      DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
      UNLOCK();
      return;
    }
    DAT_1809f129c = 0x7ffffffe;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(6);
}



/* ===== 1801ccb50 FUN_1801ccb50 ===== */

void FUN_1801ccb50(undefined8 param_1,undefined8 param_2)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_18028efa0();
  (*DAT_180cd19e0)(param_1,param_2);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801ccb90 FUN_1801ccb90 ===== */

void FUN_1801ccb90(undefined8 param_1)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1e28)();
  FUN_18028f170(param_1);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801ccbc0 FUN_1801ccbc0 ===== */

void FUN_1801ccbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_1802988b0(param_2,param_3);
  (*DAT_180cd1a38)(param_1,param_2,param_3);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801ccc20 FUN_1801ccc20 ===== */

void FUN_1801ccc20(undefined8 param_1,undefined1 param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  undefined1 (*pauVar4) [16];
  char *pcVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  char local_138;
  char cStack_137;
  char cStack_136;
  char cStack_135;
  char cStack_134;
  char cStack_133;
  char cStack_132;
  char cStack_131;
  undefined4 uStack_130;
  char cStack_12c;
  char cStack_12b;
  char cStack_12a;
  char cStack_129;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined8 local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [112];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  pauVar4 = (undefined1 (*) [16])FUN_1800ede80(&local_138,param_1);
  auVar1 = *pauVar4;
  local_d8 = *(undefined8 *)pauVar4[1];
  uStack_d0 = *(undefined8 *)(pauVar4[1] + 8);
  local_c8 = *(undefined8 *)pauVar4[2];
  uStack_c0 = *(undefined8 *)(pauVar4[2] + 8);
  local_b8 = *(undefined8 *)pauVar4[3];
  uStack_b0 = *(undefined8 *)(pauVar4[3] + 8);
  local_e8 = auVar1;
  if (auVar1[1] == '\0') {
    pcVar5 = (char *)FUN_180297d80(local_a8,param_1);
    local_138 = *pcVar5;
    cStack_137 = pcVar5[1];
    cStack_136 = pcVar5[2];
    cStack_135 = pcVar5[3];
    cStack_134 = pcVar5[4];
    cStack_133 = pcVar5[5];
    cStack_132 = pcVar5[6];
    cStack_131 = pcVar5[7];
    uStack_130 = *(undefined4 *)(pcVar5 + 8);
    cStack_12c = pcVar5[0xc];
    cStack_12b = pcVar5[0xd];
    cStack_12a = pcVar5[0xe];
    cStack_129 = pcVar5[0xf];
    uStack_128 = (undefined4)*(undefined8 *)(pcVar5 + 0x10);
    uStack_124 = (undefined4)((ulonglong)*(undefined8 *)(pcVar5 + 0x10) >> 0x20);
    uStack_120 = (undefined4)*(undefined8 *)(pcVar5 + 0x18);
    uStack_11c = (undefined4)((ulonglong)*(undefined8 *)(pcVar5 + 0x18) >> 0x20);
    uStack_118 = (undefined4)*(undefined8 *)(pcVar5 + 0x20);
    uStack_114 = (undefined4)((ulonglong)*(undefined8 *)(pcVar5 + 0x20) >> 0x20);
    uStack_110 = (undefined4)*(undefined8 *)(pcVar5 + 0x28);
    local_10c = (undefined4)((ulonglong)*(undefined8 *)(pcVar5 + 0x28) >> 0x20);
    local_108 = *(undefined8 *)(pcVar5 + 0x30);
    uStack_100 = *(ulonglong *)(pcVar5 + 0x38);
    local_f8 = *(undefined1 (*) [16])(pcVar5 + 0x40);
    iVar8 = local_f8._12_4_;
    uVar7 = *(undefined4 *)(pcVar5 + 0x48);
    lVar6 = local_f8._0_8_;
  }
  else {
    local_138 = '\0';
    iVar8 = 0;
    uStack_130 = 0;
    cStack_12c = '\0';
    cStack_12b = '\0';
    cStack_12a = '\0';
    cStack_129 = '\0';
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    local_10c = 0;
    local_108 = 0;
    uStack_100 = uStack_100 & 0xffffffffffffff00;
    lVar6 = 0;
    uVar7 = 0;
    local_f8 = ZEXT816(0);
  }
  cVar2 = local_138;
  (*DAT_180cd19f8)(param_1,param_2);
  if (cVar2 != '\0') {
    cVar2 = FUN_18028ed00();
    if ((lVar6 == 0) || (DAT_180961e88 == 0)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_180011200((ulonglong)DAT_180961e88 + lVar6);
    }
    FUN_18028fbf0("colors | regenerate | weapon %p | def %d | injected %u | pending %d",lVar6,uVar7,
                  DAT_180cfc9e8 - iVar8,uVar3);
    if (cVar2 != '\0') {
      FUN_18028ed70(&uStack_130);
    }
  }
  if (auVar1[0] != '\0') {
    if ((auVar1[1] != '\0') && (DAT_1809ebf40 != '\0')) {
      cVar2 = FUN_18028ed00();
      if (cVar2 != '\0') {
        FUN_18028ed70(local_e8 + 8);
        if ((DAT_1809ebf71 != '\0') && (DAT_1809ebf72 == '\0')) {
          DAT_1809ebf72 = '\x01';
          FUN_1800ec090("preview regenerate");
        }
        goto LAB_1801ccde1;
      }
    }
    FUN_18028ed70(local_e8 + 8);
  }
LAB_1801ccde1:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cce10 FUN_1801cce10 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cce10(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd1b60)();
  if (((param_3 != (float *)0x0) && (fVar1 = *param_3, 0.0 < fVar1)) && (fVar1 < DAT_1808acb58)) {
    _DAT_180cf9f54 = fVar1;
  }
  if (((DAT_180921478 != '\0') && (param_2 != (float *)0x0)) && (param_3 != (float *)0x0)) {
    *param_2 = DAT_18092147c + *param_2;
    param_2[1] = DAT_180921480 + param_2[1];
    param_2[2] = DAT_180921484 + param_2[2];
    if (0.0 < DAT_180921488) {
      *param_3 = DAT_180921488;
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801ccec0 FUN_1801ccec0 ===== */

/* WARNING: Removing unreachable block (ram,0x0001801ccf53) */

undefined8 FUN_1801ccec0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if ((DAT_180921478 != '\0') && (param_3 != (float *)0x0)) {
    *param_3 = DAT_18092148c + *param_3;
    param_3[1] = DAT_180921490 + param_3[1];
    param_3[2] = DAT_180921494 + param_3[2];
  }
  uVar1 = (*DAT_180cd1bb8)();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar1;
}



/* ===== 1801ccf70 FUN_1801ccf70 ===== */

/* WARNING: Removing unreachable block (ram,0x0001801ccfbe) */

ulonglong FUN_1801ccf70(void)

{
  char cVar1;
  ulonglong uVar2;
  uint local_res8 [8];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  uVar2 = (*DAT_180cd19f0)();
  local_res8[0] = 0;
  cVar1 = FUN_18004cfd0((int)uVar2,local_res8);
  if (cVar1 != '\0') {
    uVar2 = (ulonglong)local_res8[0];
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar2;
}



/* ===== 1801cd000 FUN_1801cd000 ===== */

/* WARNING: Removing unreachable block (ram,0x0001801cd046) */

void FUN_1801cd000(void)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cd19d8)();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cd060 FUN_1801cd060 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801cd060(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong unaff_retaddr;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180ca15ba != '\0') {
    cVar1 = FUN_180044350();
    if (cVar1 != '\0') {
      FUN_180048630();
      FUN_180049280();
    }
  }
  DAT_181108758 = param_1 + 0x10;
  if (param_1 == 0) {
    DAT_181108758 = 0;
  }
  LOCK();
  UNLOCK();
  uVar4 = (*DAT_180cd1bf0)(param_1);
  FUN_18008afb0();
  if (DAT_180ca12ef == '\0') goto LAB_1801cd238;
  UVar5 = GetTickCount64();
  if (UVar5 - _DAT_180ccf990 < 1000) goto LAB_1801cd238;
  _DAT_180ccf990 = UVar5;
  if (DAT_180ccf810 == 0) {
    FUN_180045260();
    goto LAB_1801cd238;
  }
  lVar6 = FUN_18000f3a0();
  lVar7 = FUN_180045260();
  if ((lVar6 == 0) || (lVar7 == 0)) goto LAB_1801cd238;
  if (DAT_180ccf7f0 == 0) {
LAB_1801cd14c:
    uVar8 = 0;
  }
  else {
    cVar1 = FUN_1800440c0();
    if (cVar1 == '\0') goto LAB_1801cd14c;
    uVar8 = 1;
  }
  fVar9 = (float)FUN_1800474e0();
  uVar3 = FUN_180011200((ulonglong)DAT_180961fc8 + lVar6);
  fVar10 = (float)FUN_18000f3d0((ulonglong)DAT_180961fc4 + lVar6);
  fVar11 = (float)FUN_18000f3d0((ulonglong)DAT_180961fc0 + lVar6);
  fVar12 = (float)FUN_18000f3d0((ulonglong)DAT_180961fbc + lVar6);
  uVar2 = FUN_180011220((ulonglong)DAT_180961fb8 + lVar6);
  FUN_1802b2560("[nl_view] third person | wrote 229=1 238=%.1f 6a8=0 (dist %.1f frac %.2f keep %d) | read 229=%d 230=%.1f 234=%.1f 238=%.1f 6a8=%d | near %.1f | game first person %d"
                ,(double)DAT_180ccf838,(double)DAT_180962c84,(double)DAT_180962c80,
                DAT_180ca12ea != '\0',uVar2,(double)fVar12,(double)fVar11,(double)fVar10,uVar3,
                (double)fVar9,uVar8);
LAB_1801cd238:
  LOCK();
  DAT_180ca3bb4 = DAT_180ca3bb4 + 1;
  UNLOCK();
  if ((((DAT_180ca0cdf == '\0') && (DAT_180ca3a70 != '\0')) && (unaff_retaddr != 0)) &&
     (unaff_retaddr == DAT_180962130)) {
    FUN_180012990(1);
  }
  LOCK();
  DAT_180ca3bb4 = DAT_180ca3bb4 + -1;
  UNLOCK();
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar4;
}



/* ===== 1801cd2b0 FUN_1801cd2b0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1801cd2b0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  uVar2 = (*DAT_180cd1a20)(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((((param_2 != 0) && (param_3 != (undefined8 *)0x0)) && (param_4 != (undefined8 *)0x0)) &&
     (param_2 == DAT_181108758)) {
    iVar1 = FUN_1804e4d70(&DAT_1809f78b0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809f78fc == 0x7fffffff) {
      DAT_1809f78fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    _DAT_1811084d0 = *param_3;
    uRam00000001811084d8 = param_3[1];
    _DAT_1811084e0 = param_3[2];
    uRam00000001811084e8 = param_3[3];
    _DAT_1811084f0 = param_3[4];
    uRam00000001811084f8 = param_3[5];
    _DAT_181108500 = param_3[6];
    uRam0000000181108508 = param_3[7];
    _DAT_181108510 = *param_4;
    uRam0000000181108518 = param_4[1];
    _DAT_181108520 = param_4[2];
    uRam0000000181108528 = param_4[3];
    _DAT_181108530 = *(undefined4 *)(param_4 + 4);
    uRam0000000181108534 = *(undefined4 *)((longlong)param_4 + 0x24);
    uRam0000000181108538 = *(undefined4 *)(param_4 + 5);
    uRam000000018110853c = *(undefined4 *)((longlong)param_4 + 0x2c);
    _DAT_181108540 = *(undefined4 *)(param_4 + 6);
    uRam0000000181108544 = *(undefined4 *)((longlong)param_4 + 0x34);
    uRam0000000181108548 = *(undefined4 *)(param_4 + 7);
    uRam000000018110854c = *(undefined4 *)((longlong)param_4 + 0x3c);
    _DAT_181108550 = FUN_180382e80();
    _DAT_181108558 = _DAT_181108558 + 1;
    LOCK();
    DAT_181108720 = DAT_181108720 + 1;
    UNLOCK();
    FUN_1804e4e90(&DAT_1809f78b0);
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar2;
}



/* ===== 1801cd3f0 FUN_1801cd3f0 ===== */

longlong FUN_1801cd3f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  uVar2 = (*DAT_180cd1b40)();
  uVar2 = FUN_1803bc460(param_2,uVar2,param_3,param_4,param_5);
  uVar2 = FUN_1800e4d30(param_2,uVar2);
  lVar3 = FUN_18037af90(param_2,uVar2);
  lVar4 = DAT_180cf9858;
  if (((param_2 != 0) && (DAT_1809212e4 != '\0')) && (DAT_180cf9858 != 0)) {
    cVar1 = FUN_18023b200(param_2);
    if (cVar1 != '\0') goto LAB_1801cd46a;
  }
  lVar4 = lVar3;
LAB_1801cd46a:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return lVar4;
}



/* ===== 1801cd490 FUN_1801cd490 ===== */

longlong FUN_1801cd490(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  uVar2 = (*DAT_180cd1b48)();
  uVar2 = FUN_1803bc460(param_2,uVar2,param_3,param_4,param_5);
  uVar2 = FUN_1800e4d30(param_2,uVar2);
  lVar3 = FUN_18037af90(param_2,uVar2);
  lVar4 = DAT_180cf9858;
  if (((param_2 != 0) && (DAT_1809212e4 != '\0')) && (DAT_180cf9858 != 0)) {
    cVar1 = FUN_18023b200(param_2);
    if (cVar1 != '\0') goto LAB_1801cd50a;
  }
  lVar4 = lVar3;
LAB_1801cd50a:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return lVar4;
}



/* ===== 1801cd530 FUN_1801cd530 ===== */

void FUN_1801cd530(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 local_48 [40];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (((param_2 != 0) && (DAT_180961900 != 0)) && (DAT_18095d3b0 != '\0')) {
    iVar2 = FUN_180011200(param_2 + (ulonglong)DAT_180961900);
    if ((iVar2 - 1U < 0xfffffffe) && (iVar2 == DAT_1809624f0)) goto LAB_1801cd5d2;
  }
  FUN_1802b1ea0(local_48,param_2,param_4,1);
  cVar1 = FUN_1803c2f50(param_1,param_2,param_3,param_4,DAT_180cd1a78);
  if (cVar1 == '\0') {
    (*DAT_180cd1a78)(param_1,param_2,param_3,param_4);
  }
  FUN_1802b1fd0(local_48);
LAB_1801cd5d2:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cd5f0 FUN_1801cd5f0 ===== */

void FUN_1801cd5f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_48 [40];
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (((param_2 != 0) && (DAT_180961900 != 0)) && (DAT_18095d3b0 != '\0')) {
    iVar2 = FUN_180011200(param_2 + (ulonglong)DAT_180961900);
    if ((iVar2 - 1U < 0xfffffffe) && (iVar2 == DAT_1809624f0)) goto LAB_1801cd6b7;
  }
  if ((param_1 == 0) || (DAT_1809619f8 == 0)) {
LAB_1801cd664:
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_18000f3a0(param_1);
    if (lVar3 != DAT_1809619f8) goto LAB_1801cd664;
    uVar4 = 1;
  }
  FUN_1802b1ea0(local_48,param_2,param_4,uVar4);
  cVar1 = FUN_1803c2f50(param_1,param_2,param_3,param_4,DAT_180cd1ad0);
  if (cVar1 == '\0') {
    (*DAT_180cd1ad0)(param_1,param_2,param_3,param_4);
  }
  FUN_1802b1fd0(local_48);
LAB_1801cd6b7:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cd6d0 FUN_1801cd6d0 ===== */

int FUN_1801cd6d0(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  iVar1 = (*DAT_180cd1e70)();
  if (((iVar1 != -1) && (param_3 != (int *)0x0)) && (param_2 == 0x10000003)) {
    if (DAT_18091a190 == '\0') {
      if (DAT_180ca1bdc == '\0') {
        if (*param_3 == 0) {
          DAT_1809f3cb8 = DAT_1809f3cb8 + param_3[9];
          DAT_1809f3cbc = DAT_1809f3cbc + param_3[10];
          DAT_180cfe888 = DAT_180cfe888 + param_3[9];
        }
      }
      else if (*param_3 == 0) {
        LOCK();
        DAT_180ccfb44 = DAT_180ccfb44 + param_3[9];
        UNLOCK();
        LOCK();
        DAT_180ccfbb0 = DAT_180ccfbb0 + param_3[10];
        UNLOCK();
        param_3[9] = 0;
        param_3[10] = 0;
      }
    }
    else if (*param_3 == 0) {
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
    }
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return iVar1;
}



/* ===== 1801cd790 FUN_1801cd790 ===== */

int FUN_1801cd790(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  iVar2 = (*DAT_180cd1b68)();
  if ((DAT_18091a190 == '\0') && (DAT_180ca1bdc != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((iVar2 != -1) && (param_1 != (int *)0x0)) && (iVar2 != 0)) {
    iVar3 = iVar2;
    do {
      if (DAT_18091a190 == '\0') {
        if (bVar1) {
LAB_1801cd816:
          if (*param_1 == 0) {
            LOCK();
            DAT_180ccfb44 = DAT_180ccfb44 + param_1[9];
            UNLOCK();
            LOCK();
            DAT_180ccfbb0 = DAT_180ccfbb0 + param_1[10];
            UNLOCK();
            goto LAB_1801cd83f;
          }
        }
        else if (*param_1 == 0) {
          DAT_1809f3cb8 = DAT_1809f3cb8 + param_1[9];
          DAT_1809f3cbc = DAT_1809f3cbc + param_1[10];
          DAT_180cfe888 = DAT_180cfe888 + param_1[9];
        }
      }
      else {
        if (bVar1) goto LAB_1801cd816;
        if ((param_1 == (int *)0x0) || (*param_1 != 0)) goto LAB_1801cd843;
        param_1[7] = 0;
        param_1[8] = 0;
LAB_1801cd83f:
        param_1[9] = 0;
        param_1[10] = 0;
      }
LAB_1801cd843:
      param_1 = (int *)((longlong)param_1 + ((ulonglong)(uint)param_1[1] + 7 & 0xfffffffffffffff8));
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return iVar2;
}



/* ===== 1801cd870 FUN_1801cd870 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_1801cd870(HWND param_1,uint param_2,WPARAM param_3,HRAWINPUT param_4)

{
  char cVar1;
  UINT UVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  ULONGLONG UVar7;
  LRESULT LVar8;
  bool bVar9;
  uint local_res10 [6];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (param_2 == 0x8057) {
    if (DAT_180cc3e1e == '\0') {
      FUN_1803bb180();
      FUN_1800e46d0();
      FUN_18021ace0();
      FUN_18021fc60();
      FUN_18022cbc0();
      FUN_180232450();
      if ((((((DAT_180920f20 != '\0') && (DAT_180920f21 != '\0')) && (DAT_180961ab8 != 0)) &&
           ((lVar3 = FUN_18000f3a0(), lVar3 != 0 && (lVar3 = FUN_18000f3a0(lVar3 + 8), lVar3 != 0)))
           ) && (lVar4 = FUN_18000f3a0(lVar3), lVar4 != 0)) &&
         (lVar4 = FUN_18000f3a0(lVar4), lVar4 != 0)) {
        if (DAT_180cd0350 == lVar3) {
          UVar7 = GetTickCount64();
          if ((0xf9 < UVar7 - _DAT_180cd0330) &&
             (_DAT_180cd0330 = UVar7, lVar4 = FUN_1800abc30(lVar3), lVar4 != 0)) {
            cVar1 = FUN_180200ed0();
            if (((cVar1 != '\0') &&
                (((lVar4 = FUN_180200ff0(), lVar4 != 0 && (lVar5 = FUN_18000f3a0(lVar4), lVar5 != 0)
                  ) && (pcVar6 = (code *)FUN_18000f3a0(lVar5 + 0x268), DAT_180ceb448 <= pcVar6))))
               && (pcVar6 < DAT_180ceb440)) {
              (*pcVar6)(lVar4,lVar3,
                        "(function () { try { var root = $.GetContextPanel(); while (root && root.GetParent && root.GetParent()) root = root.GetParent(); var mark = root ? root.FindChildTraverse(\'wlMatchFound\') : null; if (mark) mark.DeleteAsync(0);} catch (e) {} })();"
                        ,&DAT_18070230d,1);
            }
            FUN_1800abb50(0);
          }
        }
        else {
          cVar1 = FUN_180200ed0();
          if (((cVar1 != '\0') && (lVar4 = FUN_180200ff0(), lVar4 != 0)) &&
             ((lVar5 = FUN_18000f3a0(lVar4), lVar5 != 0 &&
              ((pcVar6 = (code *)FUN_18000f3a0(lVar5 + 0x268), DAT_180ceb448 <= pcVar6 &&
               (pcVar6 < DAT_180ceb440)))))) {
            (*pcVar6)(lVar4,lVar3,
                      "(function () { try { var root = $.GetContextPanel(); while (root && root.GetParent && root.GetParent()) root = root.GetParent(); if (!root) return; var keep = root.Data(); if (keep.wlNotifyHooked) return; keep.wlNotifyHooked = true; $.RegisterForUnhandledEvent(\'PanoramaComponent_Lobby_ReadyUpForMatch\', function (shouldShow) {  if (!shouldShow) return;  var now = Date.now(); if (keep.wlFoundAt && now - keep.wlFoundAt < 20000) return; keep.wlFoundAt = now;  if (root.FindChildTraverse(\'wlMatchFound\')) return;  var mark = $.CreatePanel(\'Panel\', root, \'wlMatchFound\'); mark.style.visibility = \'collapse\'; });} catch (e) {} })();"
                      ,&DAT_18070230d,1);
            DAT_180cd0350 = lVar3;
            FUN_1800736e0();
            LVar8 = 0;
            goto LAB_1801cdbd8;
          }
        }
      }
      FUN_1800736e0();
      LVar8 = 0;
      goto LAB_1801cdbd8;
    }
  }
  else {
    if (DAT_180cc3e1a == '\0') {
switchD_1801cdbba_caseD_20d:
      LVar8 = CallWindowProcA(DAT_180cd1e58,param_1,param_2,param_3,(LPARAM)param_4);
      goto LAB_1801cdbd8;
    }
    if ((((param_2 - 0x100 & 0xfffffffb) == 0) && ((int)param_3 == DAT_18091a194)) &&
       (((ulonglong)param_4 >> 0x1e & 1) == 0)) {
      DAT_180cc3e1c = 1;
      LOCK();
      DAT_180cd1e20 = DAT_180cd1e20 + 1;
      UNLOCK();
    }
    if (DAT_180cc3e1e == '\0') {
      FUN_1801c5510(param_2,param_3,param_4);
    }
    if ((DAT_180cc3e1e != '\0') || (cVar1 = FUN_1800725e0(param_2,param_3,param_4), cVar1 == '\0'))
    {
      if ((DAT_180cc3e1e != '\0') || (DAT_18091a190 == '\0')) goto switchD_1801cdbba_caseD_20d;
      if ((DAT_180ca0a50 != 0) &&
         (lVar3 = FUN_1804279c0(param_1,param_2,param_3,param_4,DAT_180ca0a50 + 0x28), lVar3 != 0))
      {
        LVar8 = 1;
        goto LAB_1801cdbd8;
      }
      if (0x200 < param_2) {
        switch(param_2) {
        case 0x201:
        case 0x202:
        case 0x203:
        case 0x204:
        case 0x205:
        case 0x206:
        case 0x207:
        case 0x208:
        case 0x209:
        case 0x20a:
        case 0x20b:
        case 0x20c:
        case 0x20e:
          goto switchD_1801cdbba_caseD_201;
        default:
          goto switchD_1801cdbba_caseD_20d;
        }
      }
      if (param_2 != 0x200) {
        if (param_2 == 0xff) {
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          local_res10[0] = 0x18;
          UVar2 = GetRawInputData(param_4,0x10000005,&local_48,local_res10,0x18);
          if (UVar2 == 0xffffffff) {
            bVar9 = false;
          }
          else {
            bVar9 = (int)local_48 == 0;
          }
          if (bVar9) goto switchD_1801cdbba_caseD_201;
        }
        goto switchD_1801cdbba_caseD_20d;
      }
    }
  }
switchD_1801cdbba_caseD_201:
  LVar8 = 0;
LAB_1801cdbd8:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return LVar8;
}



/* ===== 1801cdc20 FUN_1801cdc20 ===== */

void FUN_1801cdc20(void)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_58 [40];
  
  if (DAT_180ca0a50 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(DAT_180ca0a50 + 0xd0);
  }
  if (*(longlong *)(lVar6 + 0x28) == 0) {
    FUN_180426190();
  }
  FUN_1804270e0();
  FUN_180364590();
  FUN_1803de890();
  if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
    FUN_1803a0f40();
  }
  FUN_1800e7d60();
  iVar2 = FUN_1804e4d70(&DAT_1809ee410);
  lVar6 = DAT_180cd18a8;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee45c == 0x7fffffff) {
    DAT_1809ee45c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar9 = 0;
  for (lVar8 = DAT_180cd18a0; lVar8 != lVar6; lVar8 = lVar8 + 0x20) {
    FUN_1800e77d0(local_58,lVar8);
    uVar3 = 0;
    if (*(ulonglong *)(lVar8 + 0x10) != 0) {
      do {
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulonglong *)(lVar8 + 0x10));
    }
    lVar4 = FUN_1800e9300();
    lVar7 = DAT_180cd1118;
    if (*(longlong *)(lVar4 + 8) != 0) {
      lVar7 = *(longlong *)(lVar4 + 8);
    }
    if ((lVar7 == DAT_180cd1118) || (*(int *)(lVar7 + 0x30) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar9 = (lVar9 + 1) - (ulonglong)!bVar1;
  }
  LOCK();
  UNLOCK();
  DAT_180cd18c0 = lVar9;
  FUN_1804e4e90(&DAT_1809ee410);
  if (DAT_180cc3e1b != '\0') {
    DAT_1809f758c = DAT_181108f70;
    DAT_18110902c = 0;
    DAT_180cd1a96 = 0;
    DAT_180cd1307 = 0;
    if ((DAT_1811079d8 != (HWND)0x0) &&
       (*(int *)(DAT_180ca0a50 + 4) == (*(int *)(DAT_180ca0a50 + 4) / 3) * 3)) {
      PostMessageA(DAT_1811079d8,0x8057,0,0);
    }
  }
  FUN_1803bd290();
  FUN_1800e4160();
  if (((DAT_180ca1c6f != '\0') && (DAT_180cd0fa7 != '\0')) && (DAT_181107a40 != 0)) {
    FUN_180367f50();
  }
  uVar5 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
  FUN_1800b7530(uVar5);
  FUN_180364290();
  return;
}



/* ===== 1801cde70 FUN_1801cde70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cde70(void)

{
  double dVar1;
  undefined4 *puVar2;
  size_t _Size;
  double dVar3;
  HWND pHVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  float *pfVar8;
  size_t sVar9;
  ULONGLONG UVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  HANDLE pvVar15;
  undefined8 *lpParameter;
  uint uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  char *pcVar23;
  bool bVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar27;
  undefined1 auStackY_c8 [32];
  undefined *local_98;
  longlong local_90 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStackY_c8;
  FUN_180221170();
  FUN_1801c59b0();
  FUN_18007dc70();
  FUN_180208630();
  FUN_1802095e0();
  lVar14 = DAT_1811079e0;
  if ((DAT_1809212e4 != '\0') && (DAT_1811079e0 != 0)) {
    if ((DAT_180ccf87d != '\0') &&
       (iVar7 = memcmp(&DAT_180cf9928,s_neverlose_1809212e5,0x20), iVar7 == 0)) {
      pfVar8 = (float *)&DAT_180cf9860;
      for (pfVar17 = (float *)&DAT_180921308; *pfVar8 == *pfVar17; pfVar17 = pfVar17 + 1) {
        pfVar8 = pfVar8 + 1;
        if (pfVar8 == (float *)&DAT_180cf9870) goto LAB_1801cdf6a;
      }
    }
    DAT_180ccf87d = '\x01';
    DAT_180cf9928 = s_neverlose_1809212e5[0];
    DAT_180cf9928_1._0_1_ = s_neverlose_1809212e5[1];
    DAT_180cf9928_1._1_1_ = s_neverlose_1809212e5[2];
    DAT_180cf9928_1._2_1_ = s_neverlose_1809212e5[3];
    DAT_180cf9928_1._3_1_ = s_neverlose_1809212e5[4];
    DAT_180cf9928_1._4_1_ = s_neverlose_1809212e5[5];
    DAT_180cf9928_1._5_1_ = s_neverlose_1809212e5[6];
    DAT_180cf9928_1._6_1_ = s_neverlose_1809212e5[7];
    uRam0000000180cf9930 = ram0x0001809212ed;
    _DAT_180cf9938 = _DAT_1809212f5;
    uRam0000000180cf993c = uRam00000001809212f9;
    uRam0000000180cf9940 = uRam00000001809212fd;
    uRam0000000180cf9944 = uRam0000000180921301;
    DAT_180cf9860 = DAT_180921308;
    DAT_180cf9864 = DAT_18092130c;
    uRam0000000180cf9868 = uRam0000000180921310;
    uRam0000000180cf986c = uRam0000000180921314;
    FUN_18023af00(lVar14,&DAT_1809212e4);
  }
LAB_1801cdf6a:
  if (DAT_18096221c == '\0') {
LAB_1801cdfa4:
    bVar24 = false;
  }
  else {
    if (DAT_180cd1ac4 != '\0') {
      FUN_1803a0f40();
    }
    if (((DAT_18096221c == '\0') || (DAT_180cd1ac4 == '\0')) ||
       (cVar5 = FUN_1803a10a0(), cVar5 == '\0')) goto LAB_1801cdfa4;
    bVar24 = true;
  }
  local_98 = &DAT_1809ec010;
  iVar7 = FUN_1804e4d70(&DAT_1809ec010);
  if (iVar7 != 0) goto LAB_1801cebb8;
  if (DAT_1809ec05c == 0x7fffffff) {
    DAT_1809ec05c = 0x7ffffffe;
    goto LAB_1801cebad;
  }
  FUN_180024b50(&local_80);
  FUN_1804e4e90(&DAT_1809ec010);
  _Size = CONCAT44(uStack_6c,local_70);
  puVar2 = (undefined4 *)CONCAT44(uStack_7c,local_80);
  if (bVar24) {
    puVar18 = &local_80;
    if (0xf < local_68) {
      puVar18 = puVar2;
    }
    if ((_Size == 9) && (iVar7 = memcmp(puVar18,"main_menu",9), iVar7 == 0)) goto LAB_1801ce046;
    DAT_180962434 = 0;
  }
  else {
LAB_1801ce046:
    DAT_180962434 = 1;
  }
  LOCK();
  UNLOCK();
  uVar19 = 0;
  uVar26 = 0xffffffff;
  if (_Size != 0) {
    do {
      sVar9 = strlen(&DAT_18093d3a0 + uVar19 * 0x614);
      puVar18 = &local_80;
      if (0xf < local_68) {
        puVar18 = puVar2;
      }
      if ((_Size == sVar9) &&
         ((_Size == 0 || (iVar7 = memcmp(puVar18,&DAT_18093d3a0 + uVar19 * 0x614,_Size), iVar7 == 0)
          ))) {
        if ((&DAT_18093d3e0)[uVar19 * 0x614] != '\0') {
          uVar26 = (undefined4)uVar19;
        }
        break;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < 0x30);
  }
  LOCK();
  UNLOCK();
  DAT_1809ebfb8 = uVar26;
  FUN_18000f890();
  if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
    FUN_1803c2720();
    FUN_1803c5610();
    FUN_1800321d0();
    if (DAT_180cd1aa5 == '\0') {
      FUN_1803c5190();
    }
    if (DAT_180cd1aa7 == '\0') {
      FUN_1803c4270();
    }
    lVar14 = DAT_1811079c8;
    UVar10 = GetTickCount64();
    if (499 < UVar10 - lVar14) {
      FUN_1803628b0();
    }
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_98);
      DAT_181108a00 = local_98;
      DAT_1811089f8 = FUN_1803a0c50();
      DAT_180cd1304 = '\x01';
    }
    if ((((DAT_1811089f8 != 0) && (FUN_18037b5a0(), DAT_180cd0fa7 != '\0')) && (DAT_181107a40 != 0))
       && (cVar5 = FUN_180365e00(), cVar5 != '\0')) {
      FUN_180365e80();
    }
  }
  if (DAT_180ca0a50 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(longlong *)(DAT_180ca0a50 + 0xd0);
  }
  if (*(longlong *)(lVar14 + 0x28) == 0) {
    FUN_180426190();
  }
  FUN_1804270e0();
  FUN_180364590();
  FUN_1803de890();
  if ((DAT_18096221c != '\0') && (DAT_180cd1ac4 != '\0')) {
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_180032e90(uVar11);
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_18025a190(uVar11);
    lVar12 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    lVar14 = DAT_180ccf748;
    if (((DAT_180cd0fa7 != '\0') && ((DAT_181107a40 != 0 && (lVar12 != 0)))) &&
       (DAT_180ccf740 != DAT_180ccf748)) {
      uVar26 = *(undefined4 *)(DAT_180ca0a50 + 0x40);
      dVar1 = *(double *)(DAT_180ca0a50 + 0x10);
      lVar20 = DAT_180ccf740;
      do {
        FUN_180041100(lVar12,lVar20,uVar26,SUB84(dVar1,0));
        dVar3 = DAT_1808ac548;
        lVar20 = lVar20 + 0x78;
      } while (lVar20 != lVar14);
      if ((longlong *)*DAT_180ccf708 != DAT_180ccf708) {
        plVar13 = DAT_180ccf708;
        plVar21 = (longlong *)*DAT_180ccf708;
        do {
          lVar14 = DAT_180ccf718;
          if (dVar1 - (double)plVar21[0x16] <= dVar3) {
            plVar22 = (longlong *)*plVar21;
          }
          else {
            uVar19 = (((((((((ulonglong)*(byte *)(plVar21 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar21 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar21 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar21 + 0x13)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar21 + 0x14)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar21 + 0x15)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar21 + 0x16)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar21 + 0x17)) * 0x100000001b3 & DAT_180ccf730
            ;
            plVar22 = *(longlong **)(DAT_180ccf718 + uVar19 * 0x10);
            if (*(longlong **)(DAT_180ccf718 + 8 + uVar19 * 0x10) == plVar21) {
              if (plVar22 == plVar21) {
                *(longlong **)(DAT_180ccf718 + uVar19 * 0x10) = plVar13;
                *(longlong **)(lVar14 + 8 + uVar19 * 0x10) = plVar13;
              }
              else {
                *(longlong *)(DAT_180ccf718 + 8 + uVar19 * 0x10) = plVar21[1];
              }
            }
            else if (plVar22 == plVar21) {
              *(longlong *)(DAT_180ccf718 + uVar19 * 0x10) = *plVar21;
            }
            plVar22 = (longlong *)*plVar21;
            DAT_180ccf710 = DAT_180ccf710 + -1;
            *(longlong **)plVar21[1] = plVar22;
            plVar22[1] = plVar21[1];
            FUN_18000f890(plVar21 + 0x11);
            FUN_18000f890(plVar21 + 0xc);
            thunk_FUN_1803d64e0(plVar21,0xb8);
            plVar13 = DAT_180ccf708;
          }
          plVar21 = plVar22;
        } while (plVar22 != plVar13);
      }
    }
    FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_1802340f0(uVar11);
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_18022d380(uVar11);
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_1803a8920(uVar11);
    FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_1802a5940(uVar11);
    FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_180030b80(uVar11);
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_18022a910(uVar11);
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_180089df0(uVar11);
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_1801fe500(uVar11);
    uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
    FUN_1800b1640(uVar11);
  }
  uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
  FUN_1800720c0(uVar11);
  FUN_1803bd290();
  FUN_1800e4160();
  if ((DAT_180ccf605 != '\0') || (-1 < DAT_1809f177c)) goto LAB_1801ce73b;
  iVar7 = FUN_1804e4d70(&DAT_1809f2a40);
  if (iVar7 != 0) goto LAB_1801cebb8;
  if (DAT_1809f2a8c == 0x7fffffff) {
    DAT_1809f2a8c = 0x7ffffffe;
    goto LAB_1801cebad;
  }
  bVar24 = DAT_180cecc28 == DAT_180cecc30;
  FUN_1804e4e90();
  if (((bVar24) &&
      (DAT_1809f1a08 == ((uint)(DAT_180920e23 != '\0') | -(uint)(DAT_180920e24 != '\0') & 2))) &&
     (lVar14 = FUN_1802323e0(), DAT_180cf8f78 == lVar14)) {
    if ((DAT_180920f20 != '\0') && (DAT_180920f21 != '\0')) {
      if (((DAT_180961ab8 == 0) ||
          ((lVar14 = FUN_18000f3a0(), lVar14 == 0 ||
           (lVar14 = FUN_18000f3a0(lVar14 + 8), lVar14 == 0)))) ||
         ((lVar12 = FUN_18000f3a0(lVar14), lVar12 == 0 ||
          (lVar12 = FUN_18000f3a0(lVar12), lVar12 == 0)))) {
        lVar14 = 0;
      }
      if ((DAT_180cd0350 != lVar14) || (UVar10 = GetTickCount64(), 0xf9 < UVar10 - _DAT_180cd0330))
      goto LAB_1801ce73b;
    }
    cVar5 = FUN_180073650();
    if (cVar5 != '\0') goto LAB_1801ce73b;
  }
  else {
LAB_1801ce73b:
    DAT_181114300 = DAT_181114300 + 1;
    if ((DAT_181114300 == (DAT_181114300 / 3) * 3) && (DAT_1811079d8 != (HWND)0x0)) {
      PostMessageA(DAT_1811079d8,0x8057,0,0);
    }
  }
  uVar26 = FUN_1800e7d60();
  if (DAT_180ca1c6a != '\0') {
    UVar10 = GetTickCount64();
    pHVar4 = DAT_1811079d8;
    uVar26 = extraout_XMM0_Da;
    if (19999 < UVar10 - _DAT_180cd0340) {
      LOCK();
      DAT_180ca1c6a = '\0';
      UNLOCK();
      if (DAT_1811079d8 != (HWND)0x0) {
        pvVar15 = GetProcessHeap();
        lpParameter = HeapAlloc(pvVar15,8,0x110);
        uVar26 = extraout_XMM0_Da_00;
        if (lpParameter != (undefined8 *)0x0) {
          *lpParameter = pHVar4;
          *(undefined1 *)(lpParameter + 0x21) = 1;
          pvVar15 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1800ab920,lpParameter,0,
                                 (LPDWORD)0x0);
          if (pvVar15 == (HANDLE)0x0) {
            pvVar15 = GetProcessHeap();
            HeapFree(pvVar15,0,lpParameter);
            uVar26 = extraout_XMM0_Da_02;
          }
          else {
            CloseHandle(pvVar15);
            uVar26 = extraout_XMM0_Da_01;
          }
        }
      }
    }
  }
  if (DAT_180cd0e6c == '\0') {
    uVar26 = FUN_180315290();
  }
  lVar14 = DAT_180ca0a50;
  cVar5 = DAT_18091a190;
  if ((DAT_180cd040b == '\0') || (DAT_18091a190 != '\0')) {
    if (DAT_18091a190 == '\0') goto LAB_1801ce8a4;
    uVar27 = DAT_1808ac34c;
  }
  else {
    uVar16 = 0x200;
    do {
      if (6 < uVar16 - 0x290) {
        *(undefined1 *)(lVar14 + 0x134 + ((ulonglong)uVar16 - 0x200) * 0x10) = 0;
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 0x29b);
    *(undefined4 *)(lVar14 + 0x118) = 0;
    *(undefined1 *)(lVar14 + 0x11c) = 0;
LAB_1801ce8a4:
    uVar27 = 0;
  }
  DAT_180cd040b = cVar5;
  uVar19 = 0xffffffff;
  pcVar23 = "menu_fade";
  bVar6 = 0x6d;
  do {
    pcVar23 = pcVar23 + 1;
    if (((bVar6 == 0x23) && (*pcVar23 == 0x23)) && (pcVar23[1] == 0x23)) {
      uVar19 = 0xffffffff;
      pcVar23 = pcVar23 + 2;
    }
    else {
      uVar19 = (ulonglong)
               ((uint)(uVar19 >> 8) ^
               *(uint *)(&DAT_1806c25c0 + (uVar19 & 0xff ^ (ulonglong)bVar6) * 4));
    }
    bVar6 = *pcVar23;
  } while (bVar6 != 0);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,~(uint)uVar19);
  local_74 = 0;
  local_70 = 0xffffffff;
  local_80 = uVar27;
  uStack_7c = uVar27;
  local_78 = uVar27;
  FUN_18034a380(uVar26,local_90,&local_98,&local_80);
  DAT_1811074e8 = (float)FUN_1802b3660(local_90[0] + 0x14,uVar27,DAT_1808ac118,0);
  lVar14 = DAT_180ccfa70;
  bVar24 = DAT_1811074e8 <= 0.0;
  if ((((((bVar24) && (DAT_180921140 == '\0')) &&
        ((DAT_18095ce00 == '\0' && ((DAT_18095cf18 == '\0' && (DAT_18095ce84 == '\0')))))) &&
       (DAT_18095ce9d == '\0')) &&
      ((((((DAT_18095ce9e == '\0' && (DAT_18095ce9f == '\0')) && (DAT_18095cea0 == '\0')) &&
         ((DAT_18095cea1 == '\0' && (DAT_18095cea2 == '\0')))) && (DAT_18095cea3 == '\0')) &&
       ((DAT_18095cea4 == '\0' && (DAT_18095cec8 == '\0')))))) &&
     ((DAT_180ccfa70 == 0 || (UVar10 = GetTickCount64(), 199 < UVar10 - lVar14)))) {
    if ((DAT_180920e56 != '\0') && (0 < DAT_180920e6c)) {
      iVar7 = FUN_1804e4d70(&DAT_1809e9bd0);
      if (iVar7 != 0) {
LAB_1801cebb8:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809e9c1c == 0x7fffffff) {
        DAT_1809e9c1c = 0x7ffffffe;
LAB_1801cebad:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(6);
      }
      bVar25 = DAT_180ca0d98 != 0;
      FUN_1804e4e90(&DAT_1809e9bd0);
      if (bVar25) goto LAB_1801ceb24;
    }
    if ((((((DAT_18095ce84 == '\0') && (DAT_18095ce9d == '\0')) && (DAT_18095ce9e == '\0')) &&
         (((DAT_18095ce9f == '\0' && (DAT_18095cea0 == '\0')) &&
          ((DAT_18095cea1 == '\0' && ((DAT_18095cea2 == '\0' && (DAT_18095cea3 == '\0')))))))) &&
        ((DAT_18095cea4 == '\0' &&
         (((DAT_18095cec8 == '\0' && (DAT_180ca39d5 == '\0')) && (DAT_18095ce00 == '\0')))))) &&
       (((DAT_180ccf89a == '\0' && (DAT_180ca006c == '\0')) && (DAT_180ca1c6f == '\0'))))
    goto LAB_1801ceb3c;
  }
LAB_1801ceb24:
  if ((DAT_180cd0fa7 != '\0') && (DAT_181107a40 != 0)) {
    FUN_180367f50();
  }
LAB_1801ceb3c:
  uVar11 = FUN_1803ddf50(**(undefined8 **)(DAT_180ca0a50 + 0x2058),0,"##Background");
  FUN_1800b7530(uVar11);
  FUN_18033afc0();
  if (!bVar24) {
    FUN_18033b2a0();
  }
  FUN_180364290();
  return;
}



/* ===== 1801cebd0 FUN_1801cebd0 ===== */

undefined4 FUN_1801cebd0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  BOOL BVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 local_48 [16];
  tagCURSORINFO local_38;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  if (DAT_180cc3e1e != '\0') {
    uVar5 = (*DAT_180cd1af0)();
    goto LAB_1801cf005;
  }
  FUN_1802b29d0(local_48);
  LOCK();
  DAT_180cd1108 = 1;
  UNLOCK();
  DAT_1811079b8 = param_1;
  if (DAT_180cd0fa7 == '\0') {
    cVar4 = FUN_180363b60(param_1);
LAB_1801cec57:
    if (cVar4 != '\0') goto LAB_1801cec6d;
  }
  else {
    if (DAT_181107a40 == 0) {
      cVar4 = FUN_180362920(param_1);
      goto LAB_1801cec57;
    }
LAB_1801cec6d:
    if ((DAT_180cd0fa7 != '\0') && (DAT_181107a40 != 0)) {
      if (DAT_1809ebfb8 == 0xfffffffe) {
        pcVar10 = &DAT_18093d000;
      }
      else if (DAT_1809ebfb8 < 0x30) {
        pcVar10 = &DAT_18093d614 + (longlong)(int)DAT_1809ebfb8 * 0x614;
      }
      else {
        pcVar10 = &DAT_18093ca2c;
      }
      if ((*pcVar10 != '\0') || (cVar4 = FUN_180365e00(), cVar4 != '\0')) {
        plVar3 = DAT_1811079f8;
        if (DAT_180cd10be == '\0') {
          if ((DAT_1811079f8 != (longlong *)0x0) && (param_1 != (longlong *)0x0)) {
            DAT_181108710 = DAT_1811079f8;
            (**(code **)(*DAT_1811079f8 + 0x18))(DAT_1811079f8,&DAT_1811085b8);
            (**(code **)(*param_1 + 0x48))(param_1,0,&DAT_18058a4c0,&DAT_1811082b0);
            uVar1 = *(undefined8 *)(*plVar3 + 0x108);
            iVar6 = FUN_180428df0(uVar1,FUN_180385c50,&DAT_1811081b0);
            if (iVar6 == 3) {
              GetTickCount64();
            }
            else {
              if (iVar6 == 0) {
                iVar7 = FUN_1804293b0(uVar1,1);
                if (iVar7 == 0) {
                  DAT_1811084c8 = uVar1;
                  GetTickCount64();
                  goto LAB_1801cee10;
                }
                FUN_180429140(uVar1);
              }
              DAT_1811081b0 = 0;
              GetTickCount64();
              FUN_180429510(iVar6);
            }
LAB_1801cee10:
            FUN_1802b2870("wl_world.log");
            DAT_180cd10be = '\x01';
            LOCK();
            PTR_s_not_installed_1809f7838 = s_waiting_for_scene_1808908f8;
            UNLOCK();
          }
        }
        else if ((param_1 != (longlong *)0x0) && (DAT_1811082b0 == 0)) {
          iVar6 = FUN_1804e4d70(&DAT_1809f7840);
          if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(5);
          }
          if (DAT_1809f788c == 0x7fffffff) {
            DAT_1809f788c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1804e4a90(6);
          }
          (**(code **)(*param_1 + 0x48))(param_1,0,&DAT_18058a4c0,&DAT_1811082b0);
          FUN_1804e4e90(&DAT_1809f7840);
        }
      }
      if (DAT_180cd1e58 == 0) {
        DAT_180cd1e58 = SetWindowLongPtrA(DAT_1811079d8,-4,0x1801cd870);
      }
      if (DAT_180cc3e1a == '\0') {
        FUN_1801cdc20();
      }
      else {
        uVar8 = FUN_1811bd091(DAT_18091a194);
        uVar2 = DAT_180cd1e20;
        bVar12 = (uVar8 & 0x8000) != 0;
        LOCK();
        DAT_180cd1e20 = 0;
        UNLOCK();
        if (DAT_180cc3e1c == '\0') {
          if (((uVar8 & 0x8000) != 0) && (DAT_180cc3e7a == '\0')) goto LAB_1801ceec9;
          DAT_180cc3e7a = bVar12;
        }
        else {
          DAT_180cc3e7a = bVar12;
          if ((uVar2 & 1) != 0) {
LAB_1801ceec9:
            DAT_18091a190 = DAT_18091a190 == '\0';
            pcVar10 = "poll";
            if (DAT_180cc3e1c != '\0') {
              pcVar10 = "message";
            }
            pcVar11 = "closed";
            if ((bool)DAT_18091a190) {
              pcVar11 = "opened";
            }
            DAT_180cc3e7a = bVar12;
            FUN_1802b2560("[menu] %s via %s",pcVar11,pcVar10);
          }
        }
        if (DAT_18091a190 == '\0') {
          if (DAT_180cc3e79 != '\0') {
            if (DAT_180cc3e1f != '\0') {
              ClipCursor((RECT *)&DAT_180cd1b18);
            }
            *(undefined1 *)(DAT_180ca0a50 + 0x8d) = 0;
            DAT_180cc3e1f = '\0';
            DAT_180cc3e79 = '\0';
          }
        }
        else {
          if (DAT_180cc3e79 == '\0') {
            local_38.hCursor = (HCURSOR)0x0;
            local_38.ptScreenPos.x = 0;
            local_38.ptScreenPos.y = 0;
            local_38.cbSize = 0x18;
            local_38.flags = 0;
            BVar9 = GetCursorInfo(&local_38);
            if ((BVar9 == 0) || ((~(byte)local_38.flags & 1) == 0)) goto LAB_1801cefd3;
            BVar9 = GetClipCursor((LPRECT)&DAT_180cd1b18);
            DAT_180cc3e1f = BVar9 != 0;
            DAT_180cc3e79 = '\x01';
            *(undefined1 *)(DAT_180ca0a50 + 0x8d) = 1;
          }
          ClipCursor((RECT *)0x0);
        }
LAB_1801cefd3:
        FUN_1801cde70();
      }
    }
  }
  FUN_180385ce0();
  FUN_1802b2ad0(local_48);
  uVar5 = (*DAT_180cd1af0)(param_1,param_2,param_3);
  FUN_1802b2ad0(local_48);
LAB_1801cf005:
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar5;
}



/* ===== 1801cf050 FUN_1801cf050 ===== */

void FUN_1801cf050(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_180386030();
  FUN_180363e70();
  (*DAT_180cd1b98)(param_1,param_2,param_3,param_4,param_5,param_6);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1801cf0b0 FUN_1801cf0b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1801cf0b0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ATOM AVar5;
  uint uVar6;
  int iVar7;
  HWND hWnd;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStackY_148 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  WNDCLASSEXA local_b8;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  HWND local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStackY_148;
  local_b8.cbClsExtra = 0;
  local_b8.cbWndExtra = 0;
  local_b8.hInstance = (HINSTANCE)0x0;
  local_b8.hIcon = (HICON)0x0;
  local_b8.hCursor = (HCURSOR)0x0;
  local_b8.hbrBackground = (HBRUSH)0x0;
  local_b8.lpszMenuName = (LPCSTR)0x0;
  local_b8.lpszClassName = (LPCSTR)0x0;
  local_b8.hIconSm = (HICON)0x0;
  local_b8.lpfnWndProc = DefWindowProcA_exref;
  local_b8.cbSize = 0x50;
  local_b8.style = 0;
  local_b8.hInstance = GetModuleHandleA((LPCSTR)0x0);
  local_b8.lpszClassName = "neverlose_dummy";
  AVar5 = RegisterClassExA(&local_b8);
  if (AVar5 == 0) {
    return 0;
  }
  hWnd = CreateWindowExA(0,local_b8.lpszClassName,"",0xcf0000,0,0,100,100,(HWND)0x0,(HMENU)0x0,
                         local_b8.hInstance,(LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    uVar6 = UnregisterClassA(local_b8.lpszClassName,local_b8.hInstance);
    return uVar6 & 0xffffff00;
  }
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  uVar6 = 0;
  local_48 = 0;
  local_40 = 1;
  local_28 = 0;
  local_58 = 0x1c;
  local_44 = 0x20;
  local_4c = 1;
  local_30 = 1;
  local_e0 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  local_c0 = 0xb000;
  local_bc = 0xa000;
  local_c8 = 0;
  local_38 = hWnd;
  iVar7 = D3D11CreateDeviceAndSwapChain(0,1,0,0);
  plVar4 = local_d0;
  plVar3 = local_d8;
  if ((iVar7 < 0) || (local_e0 == (longlong *)0x0)) goto LAB_1801cf651;
  DAT_180cd1e40 = *local_e0;
  if ((local_d0 == (longlong *)0x0) || (local_d8 == (longlong *)0x0)) {
LAB_1801cf48b:
    FUN_1802b2560("[error] wireframe hooks not installed");
  }
  else {
    if ((*(longlong *)(*local_d0 + 0x60) != 0) &&
       (iVar7 = FUN_180428df0(*(longlong *)(*local_d0 + 0x60),FUN_18036ec20,&DAT_181107e48),
       iVar7 != 0)) {
      uVar8 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s","create_vertex_shader",uVar8);
      DAT_181107e48 = 0;
    }
    lVar1 = *plVar3;
    if ((*(longlong *)(lVar1 + 0x58) != 0) &&
       (iVar7 = FUN_180428df0(*(longlong *)(lVar1 + 0x58),FUN_18036f9b0,&DAT_181107e70), iVar7 != 0)
       ) {
      uVar8 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s","vs_set_shader",uVar8);
      DAT_181107e70 = 0;
    }
    if ((*(longlong *)(lVar1 + 0x60) != 0) &&
       (iVar7 = FUN_180428df0(*(longlong *)(lVar1 + 0x60),FUN_18036f8c0,&DAT_181107e28), iVar7 != 0)
       ) {
      uVar8 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s","draw_indexed",uVar8);
      DAT_181107e28 = 0;
    }
    if ((*(longlong *)(lVar1 + 0x68) != 0) &&
       (iVar7 = FUN_180428df0(*(longlong *)(lVar1 + 0x68),FUN_18036f7d0,&DAT_181107e30), iVar7 != 0)
       ) {
      uVar8 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s",&DAT_18088c160,uVar8);
      DAT_181107e30 = 0;
    }
    if ((*(longlong *)(lVar1 + 0xa0) != 0) &&
       (iVar7 = FUN_180428df0(*(longlong *)(lVar1 + 0xa0),FUN_18036f6d0,&DAT_181107e58), iVar7 != 0)
       ) {
      uVar8 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s","draw_indexed_instanced",uVar8);
      DAT_181107e58 = 0;
    }
    if ((*(longlong *)(lVar1 + 0xa8) != 0) &&
       (iVar7 = FUN_180428df0(*(longlong *)(lVar1 + 0xa8),FUN_18036f5e0,&DAT_181107e50), iVar7 != 0)
       ) {
      uVar8 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] wireframe hook failed | %s | %s","draw_instanced",uVar8);
      DAT_181107e50 = 0;
    }
    local_e8 = (longlong *)0x0;
    iVar7 = (**(code **)(*plVar4 + 0xd8))(plVar4,0,&local_e8);
    if ((-1 < iVar7) && (local_e8 != (longlong *)0x0)) {
      FUN_18036ecd0(*local_e8,lVar1);
      (**(code **)(*local_e8 + 0x10))();
    }
    if (DAT_181107e48 == 0) goto LAB_1801cf48b;
  }
  plVar3 = local_d0;
  if ((local_d0 != (longlong *)0x0) && (local_d8 != (longlong *)0x0)) {
    lVar1 = *local_d8;
    if ((*(longlong *)(lVar1 + 0x108) != 0) &&
       (iVar7 = FUN_180428df0(*(longlong *)(lVar1 + 0x108),FUN_1803be680,&DAT_181108f68), iVar7 != 0
       )) {
      uVar8 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] esp preview hook failed | %s | %s","om_set_render_targets",uVar8);
      DAT_181108f68 = 0;
    }
    if ((*(longlong *)(lVar1 + 0x110) != 0) &&
       (iVar7 = FUN_180428df0(*(longlong *)(lVar1 + 0x110),FUN_1803be5d0,&DAT_181108f60), iVar7 != 0
       )) {
      uVar8 = FUN_180429510(iVar7);
      FUN_1802b2560("[error] esp preview hook failed | %s | %s","om_set_render_targets_uav",uVar8);
      DAT_181108f60 = 0;
    }
    local_e8 = (longlong *)0x0;
    iVar7 = (**(code **)(*plVar3 + 0xd8))(plVar3,0,&local_e8);
    if ((-1 < iVar7) && (local_e8 != (longlong *)0x0)) {
      lVar9 = *local_e8;
      lVar2 = *(longlong *)(lVar9 + 0x108);
      if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x108) != lVar2)) {
        if ((lVar2 != 0) && (iVar7 = FUN_180428df0(lVar2,FUN_1803be540,&DAT_181108fb0), iVar7 != 0))
        {
          uVar8 = FUN_180429510(iVar7);
          FUN_1802b2560("[error] esp preview hook failed | %s | %s","om_set_render_targets",uVar8);
          DAT_181108fb0 = 0;
        }
        lVar9 = *(longlong *)(lVar9 + 0x110);
        if (lVar1 != 0) goto LAB_1801cf5df;
LAB_1801cf5e8:
        if ((lVar9 != 0) && (iVar7 = FUN_180428df0(lVar9,FUN_1803be490,&DAT_181108f50), iVar7 != 0))
        {
          uVar8 = FUN_180429510(iVar7);
          FUN_1802b2560("[error] esp preview hook failed | %s | %s","om_set_render_targets_uav",
                        uVar8);
          DAT_181108f50 = 0;
        }
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x110);
LAB_1801cf5df:
        if (*(longlong *)(lVar1 + 0x110) != lVar9) goto LAB_1801cf5e8;
      }
      (**(code **)(*local_e8 + 0x10))();
    }
    uVar6 = 1;
    if (DAT_181108f68 != 0) goto LAB_1801cf651;
  }
  FUN_1802b2560("[error] esp preview hooks not installed");
  uVar6 = 1;
LAB_1801cf651:
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  DestroyWindow(hWnd);
  UnregisterClassA(local_b8.lpszClassName,local_b8.hInstance);
  return uVar6;
}



/* ===== 1801cf6d0 FUN_1801cf6d0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1801cf6d0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  HMODULE pHVar4;
  undefined4 *puVar5;
  HANDLE pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  LPCVOID lpAddress;
  SIZE_T SVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char *pcVar16;
  bool bVar17;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8;
  undefined1 local_98 [16];
  undefined4 *local_88;
  SIZE_T SStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  longlong local_50 [3];
  char *local_38;
  undefined8 local_30;
  
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_98._0_8_ = local_res8;
  local_98._8_8_ = local_50;
  local_88 = local_res10;
  pHVar4 = GetModuleHandleA("user32.dll");
  if (pHVar4 != (HMODULE)0x0) {
    DAT_180cd1e38 = GetProcAddress(pHVar4,"GetRawInputData");
    DAT_180cd1b50 = GetProcAddress(pHVar4,"GetRawInputBuffer");
    local_a8 = &DAT_180cd1e70;
    cVar2 = FUN_1801d0610(local_98,"get_raw_input_data",DAT_180cd1e38,FUN_1801cd6d0);
    if (cVar2 == '\0') {
      DAT_180cd1e38 = (FARPROC)0x0;
    }
    local_a8 = &DAT_180cd1b68;
    cVar2 = FUN_1801d0610(local_98,"get_raw_input_buffer",DAT_180cd1b50,FUN_1801cd790);
    if (cVar2 == '\0') {
      DAT_180cd1b50 = (FARPROC)0x0;
    }
  }
  _DAT_180cd1e10 = DAT_180961a00;
  local_a8 = &DAT_180cd1b30;
  cVar2 = FUN_1801d0610(local_98,"is_glowing",DAT_180961a00,FUN_1801c83a0);
  if (cVar2 == '\0') {
    _DAT_180cd1e10 = 0;
  }
  _DAT_180cd1a00 = DAT_180961a08;
  local_a8 = &DAT_180cd1ab0;
  cVar2 = FUN_1801d0610(local_98,"get_glow_color",DAT_180961a08,FUN_1801c8450);
  if (cVar2 == '\0') {
    _DAT_180cd1a00 = 0;
  }
  _DAT_180cd1b70 = DAT_180961a28;
  local_a8 = &DAT_180cd1b90;
  cVar2 = FUN_1801d0610(local_98,"create_move",DAT_180961a28,FUN_1801c8650);
  if (cVar2 == '\0') {
    _DAT_180cd1b70 = 0;
  }
  _DAT_180cd1ae8 = DAT_180961a30;
  local_a8 = &DAT_180cd1b00;
  cVar2 = FUN_1801d0610(local_98,"input_view_sync",DAT_180961a30,FUN_1801c8550);
  if (cVar2 == '\0') {
    _DAT_180cd1ae8 = 0;
  }
  _DAT_180cd1e30 = DAT_1809619e8;
  local_a8 = &DAT_180cd1a78;
  cVar2 = FUN_1801d0610(local_98,"generate_primitives",DAT_1809619e8,FUN_1801cd530);
  if (cVar2 == '\0') {
    _DAT_180cd1e30 = 0;
  }
  _DAT_180cd1bc8 = DAT_1809619f0;
  local_a8 = &DAT_180cd1ad0;
  cVar2 = FUN_1801d0610(local_98,"generate_model_primitives",DAT_1809619f0,FUN_1801cd5f0);
  if (cVar2 == '\0') {
    _DAT_180cd1bc8 = 0;
  }
  local_a8 = &DAT_180cd1b58;
  FUN_1801d0610(local_98,"draw_scene_object",DAT_180961cd0,FUN_1801c9380);
  local_a8 = &DAT_180cd1b10;
  FUN_1801d0610(local_98,"draw_scene_object_array",DAT_180961cd8,FUN_1801c9530);
  local_a8 = &DAT_180cd1be8;
  FUN_1801d0610(local_98,"set_shader_param",DAT_180961d28,FUN_1801c95a0);
  local_a8 = &DAT_180cd1af8;
  FUN_1801d0610(local_98,"setup_fog",DAT_180961dd0,FUN_1801c9560);
  local_a8 = &DAT_180cd1ae0;
  FUN_1801d0610(local_98,"set_postprocess_vec",DAT_180961d30,FUN_1801c95f0);
  local_a8 = &DAT_180cd1a58;
  FUN_1801d0610(local_98,"draw_skybox_array",DAT_180961ce8,FUN_1801c96c0);
  local_a8 = &DAT_180cd1a50;
  FUN_1801d0610(local_98,"light_scene_object",DAT_180961cf0,FUN_1801c97f0);
  local_a8 = &DAT_180cd1b40;
  FUN_1801d0610(local_98,"get_resource_view_a",DAT_180961cf8,FUN_1801cd3f0);
  local_a8 = &DAT_180cd1b48;
  FUN_1801d0610(local_98,"get_resource_view_b",DAT_180961d00,FUN_1801cd490);
  local_a8 = &DAT_180cd1bb0;
  FUN_1801d0610(local_98,"should_draw_crosshair",DAT_180961d48,FUN_1801c9b10);
  local_a8 = &DAT_180cd1bd0;
  FUN_1801d0610(local_98,"should_draw_viewmodel",DAT_180961d50,FUN_1801c9ad0);
  local_a8 = &DAT_180cd1a28;
  FUN_1801d0610(local_98,"net_populate_quality",DAT_180961d68,FUN_1801c9950);
  local_a8 = &DAT_180cd1ac8;
  FUN_1801d0610(local_98,"net_serialize_acks",DAT_180961d70,FUN_1801c9a20);
  local_a8 = &DAT_180cd1e50;
  FUN_1801d0610(local_98,"preview_panel_think",DAT_180961d78,FUN_1801c9a90);
  local_a8 = &DAT_180cd1b38;
  FUN_1801d0610(local_98,"trace_bullet",DAT_180961f68,FUN_1801c9a40);
  local_a8 = &DAT_180cd1a98;
  FUN_1801d0610(local_98,"vote_start",DAT_180961d98,FUN_1801c9840);
  local_a8 = &DAT_180cd1e18;
  FUN_1801d0610(local_98,"vote_pass",DAT_180961da0,FUN_1801c9890);
  local_a8 = &DAT_180cd1ba0;
  FUN_1801d0610(local_98,"vote_failed",DAT_180961da8,FUN_1801c98d0);
  local_a8 = &DAT_180cd1ab8;
  FUN_1801d0610(local_98,"call_vote_failed",DAT_180961db0,FUN_1801c9910);
  local_a8 = &DAT_180cd1be0;
  FUN_1801d0610(local_98,"frame_stage_notify",DAT_180961df8,FUN_1801ca640);
  local_a8 = &DAT_180cd1e08;
  FUN_1801d0610(local_98,"pet_item_id",DAT_180961af8,FUN_1801c9db0);
  local_a8 = &DAT_180cd1bc0;
  FUN_1801d0610(local_98,"pet_anim_event",DAT_180961c78,FUN_1801ca070);
  local_a8 = &DAT_180cd1a30;
  DAT_180ccf83d = FUN_1801d0610(local_98,"sound_start_message",DAT_180961c70,FUN_1801ca2b0);
  LOCK();
  UNLOCK();
  puVar5 = VirtualAlloc((LPVOID)0x0,0x40,0x3000,0x40);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x1135894c;
    puVar5[1] = 0xff000000;
    puVar5[2] = 0x25;
    *(undefined1 *)(puVar5 + 3) = 0;
    *(code **)((longlong)puVar5 + 0xd) = FUN_1801ca420;
    _DAT_180cd1a60 = (undefined8 *)(puVar5 + 6);
    *_DAT_180cd1a60 = 0;
    local_a8 = &DAT_180cd1a70;
    FUN_1801d0610(local_98,"overlay_box",DAT_180961c88);
  }
  local_a8 = &DAT_180ca0108;
  FUN_1801d0610(local_98,"reflect_weapon_state",DAT_180961f20,FUN_1802242b0);
  local_a8 = &DAT_180cd1a80;
  FUN_1801d0610(local_98,"find_item_view",DAT_180961b00,FUN_1801ca5d0);
  local_a8 = &DAT_180cd1a08;
  FUN_1801d0610(local_98,"send_move_packet",DAT_180961d38,FUN_1801ca4b0);
  local_a8 = &DAT_180cd19e0;
  FUN_1801d0610(local_98,"composite_append",DAT_180961e28,FUN_1801ccb50);
  local_a8 = &DAT_180cd1e28;
  FUN_1801d0610(local_98,"composite_add_container",DAT_180961e48,FUN_1801ccb90);
  local_a8 = &DAT_180cd19f8;
  FUN_1801d0610(local_98,"regenerate_weapon_skin",DAT_180961e60,FUN_1801ccc20);
  pHVar4 = GetModuleHandleA("client.dll");
  if (pHVar4 == (HMODULE)0x0) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    pvVar6 = GetCurrentProcess();
    iVar3 = K32GetModuleInformation(pvVar6,pHVar4,&local_68,0x18);
    if (iVar3 == 0) {
      local_68 = 0;
      uStack_60 = 0;
    }
    else {
      uStack_60 = uStack_60 & 0xffffffff;
    }
  }
  local_38 = "CCompositeMaterialManager";
  local_30 = 0x19;
  lVar7 = FUN_1801d1f10(&local_68,local_50 + 3);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_18000f3a0();
  }
  if ((DAT_180cd19e0 == 0) || (DAT_180cd1e28 == 0)) {
LAB_1801cff45:
    DAT_180ccfede = '\0';
  }
  else {
    local_a8 = &DAT_180cd1a38;
    cVar2 = FUN_1801d0610(local_98,"composite_request",uVar8,FUN_1801ccbc0);
    if (cVar2 == '\0') goto LAB_1801cff45;
    DAT_180ccfede = '\x01';
  }
  LOCK();
  UNLOCK();
  pcVar16 = "[error] not installed, glove colours fall back to the one-shot arm";
  if (DAT_180ccfede != '\0') {
    pcVar16 = "installed: glove colours follow every build";
  }
  FUN_1802b2560("[skins] composite request hook | manager vtable %p | slot 0 %p | %s",lVar7,uVar8,
                pcVar16);
  local_a8 = &DAT_180cd1b60;
  FUN_1801d0610(local_98,"get_viewmodel_offsets",DAT_180961db8,FUN_1801cce10);
  local_a8 = &DAT_180cd1bb8;
  FUN_1801d0610(local_98,"calc_viewmodel",DAT_180961dc0,FUN_1801ccec0);
  local_a8 = &DAT_180cd19f0;
  FUN_1801d0610(local_98,"viewmodel_fov",DAT_180961dc8,FUN_1801ccf70);
  local_a8 = &DAT_180cd19d8;
  FUN_1801d0610(local_98,"viewmodel_offsets",DAT_180961de8,FUN_1801cd000);
  local_a8 = &DAT_180ca0948;
  FUN_1801d0610(local_98,"panel_position",DAT_180961ac8,FUN_1803bc210);
  local_a8 = &DAT_180cd1e68;
  FUN_1801d0610(local_98,"level_init",DAT_180961f30,FUN_1801cb5f0);
  local_a8 = &DAT_180cd1ad8;
  FUN_1801d0610(local_98,"run_command",DAT_180961ff8,FUN_1801cb880);
  local_a8 = &DAT_180ca0048;
  FUN_1801d0610(local_98,"send_predicted_command",DAT_180961fe8,FUN_1800875d0);
  cVar2 = FUN_180269550();
  if (cVar2 != '\0') {
    if ((((((DAT_180cfa128 != 0) && (DAT_180cfa130 != 0)) && (DAT_180cfa1d0 != 0)) &&
         ((DAT_180cfa0c0 != 0 && (DAT_180cfa150 != 0)))) && (DAT_180cfa140 != 0)) &&
       (DAT_180cfa128 != 0)) {
      local_a8 = &DAT_180ca0118;
      FUN_1801d0610(local_98,"nl_cmd_prepare",DAT_180cfa128,FUN_18026a170);
    }
    if (DAT_180cfa198 != 0) {
      local_a8 = &DAT_180ca0120;
      cVar2 = FUN_1801d0610(local_98,"nl_signon",DAT_180cfa198,FUN_18026afa0);
      if (((cVar2 != '\0') && (DAT_180cfa188 != 0)) &&
         ((DAT_180cfa190 != 0 && ((DAT_180cfa198 != 0 && (DAT_180cfa188 != 0)))))) {
        local_a8 = &DAT_180ca0110;
        FUN_1801d0610(local_98,"nl_packet_entities",DAT_180cfa188,FUN_18026aa30);
      }
    }
    if (((((DAT_180cfa178 != 0) && (DAT_180cfa180 != 0)) && (DAT_180cfa1a0 != 0)) &&
        ((DAT_180cfa188 != 0 && (DAT_180cfa190 != 0)))) &&
       ((DAT_180cfa198 != 0 && ((DAT_180cfa188 != 0 && (DAT_180cfa178 != 0)))))) {
      local_a8 = &DAT_180ca0128;
      FUN_1801d0610(local_98,"nl_packet_queue",DAT_180cfa178,FUN_18026a9a0);
    }
  }
  local_a8 = &DAT_180cd1ba8;
  FUN_1801d0610(local_98,"level_shutdown",DAT_180961f38,FUN_1801cc690);
  local_a8 = &DAT_180cd1e48;
  FUN_1801d0610(local_98,"service_read",DAT_180962070,FUN_1801cbf90);
  local_a8 = &DAT_180cd1bf0;
  FUN_1801d0610(local_98,"set_up_views",DAT_180961d20,FUN_1801cd060);
  local_a8 = &DAT_180cd1a20;
  FUN_1801d0610(local_98,"get_matrix_for_view",DAT_180961d18,FUN_1801cd2b0);
  local_a8 = &DAT_180cd1a68;
  FUN_1801d0610(local_98,"draw_flash_effect",DAT_180962100,FUN_1801cc320);
  local_a8 = &DAT_180cd1aa8;
  FUN_1801d0610(local_98,"render_scope",DAT_180962108,FUN_1801cc380);
  local_a8 = &DAT_180cd1e60;
  FUN_1801d0610(local_98,"first_person_pawn",DAT_180962110,FUN_1801cc360);
  local_a8 = &DAT_180cd1a40;
  FUN_1801d0610(local_98,"override_view",DAT_180962150,FUN_1801cc4e0);
  local_a8 = &DAT_180cd1b08;
  FUN_1801d0610(local_98,"update_fov_sensitivity",DAT_180962158,FUN_1801cc560);
  local_a8 = &DAT_180cd1a88;
  FUN_1801d0610(local_98,"render_decals",DAT_180962178,FUN_1801cc590);
  local_a8 = &DAT_180cd1bd8;
  FUN_1801d0610(local_98,"prepare_scene_material",DAT_180962180,FUN_1801cc5c0);
  if (((DAT_180962000 == 0) || (lVar7 = FUN_18000f3a0(), 0x7ffffffefffe < lVar7 - 0x10000U)) ||
     (lVar9 = FUN_18000f3a0(lVar7), 0x7ffffffefffe < lVar9 - 0x10000U)) {
LAB_1801d0545:
    FUN_1802b2560("[error] hooks | prediction system (local lag records) not hooked");
  }
  else {
    uVar13 = 0;
    while( true ) {
      lpAddress = (LPCVOID)FUN_18000f3a0(lVar9 + uVar13 * 8);
      local_98._0_8_ = (undefined4 *)0x0;
      local_98._8_8_ = (longlong *)0x0;
      local_88 = (undefined4 *)0x0;
      SStack_80 = 0;
      local_78 = 0;
      uStack_70._0_4_ = 0;
      uStack_70._4_4_ = 0;
      if ((lpAddress == (LPCVOID)0x0) ||
         (SVar10 = VirtualQuery(lpAddress,(PMEMORY_BASIC_INFORMATION)local_98,0x30), SVar10 == 0))
      break;
      if (((DWORD)local_78 != 0x1000) ||
         (((local_78 & 0xf000000000) == 0 ||
          (uVar12 = (int)uVar13 + 1, uVar13 = (ulonglong)uVar12, 0x3f < (int)uVar12)))) break;
    }
    iVar3 = (int)uVar13;
    if (0x3e < iVar3 - 1U) {
      FUN_1802b2560("[error] prediction system | vtable %p has %d code slots, set-in-prediction hook not installed"
                    ,lVar9,uVar13);
      goto LAB_1801d0545;
    }
    _DAT_180cd1c00 = FUN_18000f3a0(lVar9 + -8);
    uVar11 = 0;
    if (0 < iVar3) {
      do {
        uVar12 = (int)uVar11 + 1;
        uVar8 = FUN_18000f3a0(lVar9 + uVar11 * 8);
        *(undefined8 *)(&DAT_180cd1c00 + (longlong)(int)uVar12 * 8) = uVar8;
        uVar11 = (ulonglong)uVar12;
      } while ((int)uVar12 < iVar3);
    }
    DAT_180cd1b88 = DAT_180cd1c08;
    if (DAT_180cd1c08 == (code *)0x0) goto LAB_1801d0545;
    DAT_180cd1c08 = FUN_1801cb820;
    DAT_180cd19e8 = lVar7;
    _DAT_180cd1a18 = lVar9;
    FUN_1802b2560("[hooks] prediction system | vtable copy of %d slots",uVar13);
    local_res18 = &DAT_180cd1c08;
    cVar2 = FUN_1800239d0(lVar7,&local_res18);
    if (cVar2 == '\0') goto LAB_1801d0545;
  }
  puVar14 = auStack_c8;
  puVar15 = auStack_c8;
  FUN_18004c9f0();
  FUN_180030850();
  FUN_180020c10();
  FUN_1800ee120();
  iVar3 = FUN_1804293b0(0,1);
  bVar17 = iVar3 == 0;
  if (bVar17) {
    FUN_1800876e0();
    FUN_1802b2560("[hooks] %d installed, %d skipped",local_res10[0],local_res8[0]);
  }
  else {
    uVar8 = FUN_180429510(iVar3);
    FUN_1802b2560("failed to enable hook: all | %s",uVar8);
  }
  if (local_50[0] == 0) {
    return bVar17;
  }
  lVar7 = local_50[0];
  if (0xfff < (local_50[2] - local_50[0] & 0xfffffffffffffff0U)) {
    lVar7 = *(longlong *)(local_50[0] + -8);
    if ((local_50[0] - lVar7) - 8U < 0x20) goto LAB_1801d05e7;
    pcVar1 = (code *)swi(0x29);
    lVar7 = (*pcVar1)(5);
    puVar14 = auStack_c0;
  }
  puVar15 = puVar14;
LAB_1801d05e7:
  *(undefined8 *)(puVar15 + -8) = 0x1801d05ec;
  thunk_FUN_1803d64e0(lVar7);
  return bVar17;
}



/* ===== 1801d0610 FUN_1801d0610 ===== */

ulonglong FUN_1801d0610(undefined8 *param_1,undefined8 param_2,LPCVOID param_3,LPCVOID param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res10;
  LPCVOID local_res18 [2];
  _MEMORY_BASIC_INFORMATION local_88;
  _MEMORY_BASIC_INFORMATION local_58;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (param_3 == (LPCVOID)0x0) {
    FUN_1802b2560("skipping unavailable hook: %s");
    piVar1 = (int *)*param_1;
    *piVar1 = *piVar1 + 1;
    return (ulonglong)piVar1 & 0xffffffffffffff00;
  }
  plVar5 = *(longlong **)param_1[1];
  while( true ) {
    if (plVar5 == (longlong *)((undefined8 *)param_1[1])[1]) {
      iVar2 = FUN_180428df0(param_3,param_4,param_5);
      if (iVar2 == 0) {
        FUN_1801d19c0(param_1[1],local_res18,&local_res10);
        piVar1 = (int *)param_1[2];
        *piVar1 = *piVar1 + 1;
        uVar4 = CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
      }
      else {
        local_58.BaseAddress = (PVOID)0x0;
        local_58.AllocationBase = (PVOID)0x0;
        local_58.AllocationProtect = 0;
        local_58._20_4_ = 0;
        local_58.RegionSize = 0;
        local_58.State = 0;
        local_58.Protect = 0;
        local_58.Type = 0;
        local_58._44_4_ = 0;
        local_88.BaseAddress = (PVOID)0x0;
        local_88.AllocationBase = (PVOID)0x0;
        local_88.AllocationProtect = 0;
        local_88._20_4_ = 0;
        local_88.RegionSize = 0;
        local_88.State = 0;
        local_88.Protect = 0;
        local_88.Type = 0;
        local_88._44_4_ = 0;
        VirtualQuery(param_3,&local_58,0x30);
        VirtualQuery(param_4,&local_88,0x30);
        uVar3 = FUN_180429510(iVar2);
        FUN_1802b2560("failed to hook: %s | %s | target %p prot %lx state %lx | detour %p prot %lx state %lx"
                      ,param_2,uVar3,param_3,local_58.Protect,local_58.State,param_4,
                      local_88.Protect,local_88.State);
        *param_5 = 0;
        piVar1 = (int *)*param_1;
        *piVar1 = *piVar1 + 1;
        uVar4 = (ulonglong)piVar1 & 0xffffffffffffff00;
      }
      return uVar4;
    }
    if ((LPCVOID)*plVar5 == param_3) break;
    plVar5 = plVar5 + 2;
  }
  FUN_1802b2560("failed to hook: %s | same target %p as %s",param_2,param_3,plVar5[1]);
  *param_5 = 0;
  piVar1 = (int *)*param_1;
  *piVar1 = *piVar1 + 1;
  return (ulonglong)piVar1 & 0xffffffffffffff00;
}



/* ===== 1801d07d0 FUN_1801d07d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1801d07d0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  HWND pHVar5;
  char cVar6;
  DWORD DVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar21;
  undefined1 auStack_458 [32];
  undefined1 local_438 [8];
  longlong *local_430;
  undefined *local_428;
  DWORD DStack_420;
  undefined4 uStack_41c;
  _NOTIFYICONDATAW local_418 [5];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_458;
  FUN_1801c82c0();
  FUN_180216240();
  LOCK();
  DAT_180ccf78e = 0;
  UNLOCK();
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
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cf8f90);
  DAT_180cf8fa8 = 0;
  _DAT_180cf8fb0 = 0;
  DAT_180ccf78f = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cf8f90);
  FUN_1800737f0();
  LOCK();
  DAT_180cd110a = 1;
  UNLOCK();
  iVar14 = 0;
  do {
    if (DAT_1809f70bc == -1) break;
    Sleep(1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 200);
  LOCK();
  DAT_180cd11fb = 1;
  UNLOCK();
  iVar14 = 0;
  do {
    if (DAT_18110884c < 1) break;
    Sleep(1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 200);
  LOCK();
  DAT_180cd11ff = 1;
  UNLOCK();
  iVar14 = 0;
  do {
    if (DAT_181108854 < 1) break;
    Sleep(1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 200);
  if ((DAT_180cc45ef != '\0') || (DAT_180cc45ed != '\0')) {
    DAT_180cc45ee = '\x01';
    iVar14 = 0;
    do {
      if (DAT_180cc45ee == '\0') break;
      Sleep(1);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x96);
    DAT_180cc45ee = 0;
  }
  if (DAT_180cc492f != '\0') {
    DAT_180cc492e = '\x01';
    iVar14 = 0;
    do {
      if (DAT_180cc492e == '\0') break;
      Sleep(1);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x96);
    DAT_180cc492e = 0;
  }
  LOCK();
  DAT_180cc4c88 = 0;
  UNLOCK();
  if (DAT_180ca1028 != 0) {
    DVar7 = GetCurrentThreadId();
    if (DAT_180ca1028 == DVar7) goto LAB_1801d1994;
    local_428 = _DAT_180ca1020;
    DStack_420 = DAT_180ca1028;
    uStack_41c = _DAT_180ca102c;
    iVar14 = FUN_1804eb620(&local_428,0);
    if (iVar14 != 0) goto LAB_1801d1989;
    _DAT_180ca1020 = (undefined *)0x0;
    _DAT_180ca1028 = 0;
  }
  if (DAT_180cec648 != (longlong *)0x0) {
    (**(code **)(*DAT_180cec648 + 0x10))();
    DAT_180cec648 = (longlong *)0x0;
  }
  LOCK();
  DAT_180ca39d7 = 0;
  UNLOCK();
  if (DAT_180ca0dd0 != 0) {
    DVar7 = GetCurrentThreadId();
    if (DAT_180ca0dd0 == DVar7) goto LAB_1801d1994;
    local_428 = _DAT_180ca0dc8;
    DStack_420 = DAT_180ca0dd0;
    uStack_41c = _DAT_180ca0dd4;
    iVar14 = FUN_1804eb620(&local_428,0);
    if (iVar14 != 0) goto LAB_1801d1989;
    _DAT_180ca0dc8 = (undefined *)0x0;
    _DAT_180ca0dd0 = 0;
  }
  LOCK();
  DAT_180ca39d6 = 0;
  UNLOCK();
  if ((DAT_180cfa290 != 0) && (puVar8 = (undefined *)FUN_18000f3a0(), puVar8 == &DAT_180cfa2a8)) {
    FUN_1800239d0(DAT_180cfa290,&DAT_180cfa298);
  }
  DAT_180cfa290 = 0;
  DAT_180cfa298 = 0;
  if ((DAT_180cfa7e0 != 0) && (puVar8 = (undefined *)FUN_18000f3a0(), puVar8 == &DAT_180cfa7f8)) {
    FUN_1800239d0(DAT_180cfa7e0,&DAT_180cfa7e8);
  }
  DAT_180cfa7e0 = 0;
  DAT_180cfa7e8 = 0;
  if ((DAT_180cfad50 != 0) && (puVar8 = (undefined *)FUN_18000f3a0(), puVar8 == &DAT_180cfad68)) {
    FUN_1800239d0(DAT_180cfad50,&DAT_180cfad58);
  }
  DAT_180cfad50 = 0;
  DAT_180cfad58 = 0;
  if ((DAT_180cfa7d0 != 0) && (DAT_180cfa7d8 != 0)) {
    ppuVar9 = (undefined **)FUN_18000f3a0();
    if (ppuVar9 == &PTR_PTR_1809f3608) {
      FUN_1800239d0(DAT_180cfa7d0,&DAT_180cfa7d8);
    }
    DAT_180cfa7d0 = 0;
    DAT_180cfa7d8 = 0;
  }
  cVar6 = FUN_18026f480();
  if (cVar6 != '\0') {
    FUN_18026f570();
  }
  LOCK();
  DAT_180ca3bc5 = 1;
  UNLOCK();
  if (DAT_180ca3c54 != '\0') {
    uVar15 = 0;
    do {
      if (DAT_180ca3bc6 != '\0') break;
      Sleep(5);
      uVar15 = uVar15 + 5;
    } while (uVar15 < 2000);
    if (DAT_180ca3bc6 == '\0') {
      FUN_1800d7040("unload thread, no frame stage within 2 s");
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cd0e48);
  DAT_1809ebbe0 = 0;
  puVar11 = &DAT_1809ebbd0;
  if (0xf < DAT_1809ebbe8) {
    puVar11 = DAT_1809ebbd0;
  }
  *(undefined1 *)puVar11 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cd0e48);
  LOCK();
  DAT_180ca3c57 = 1;
  UNLOCK();
  uVar21 = extraout_XMM0_Da;
  if (DAT_180ca3cae != '\0') {
    uVar15 = 0;
    do {
      if (DAT_180ca3cad != '\0') break;
      Sleep(5);
      uVar15 = uVar15 + 5;
      uVar21 = extraout_XMM0_Da_00;
    } while (uVar15 < 2000);
  }
  if (((DAT_180ca3cad == '\0') && (DAT_180ca3cbc != '\0')) && (DAT_180cd0e60 != 0)) {
    FUN_1800d7100(uVar21,DAT_180cd0e54);
  }
  if (DAT_1809620c0 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_18000f3a0();
  }
  uVar16 = 0;
  uVar18 = DAT_180cfc7c0;
  if (DAT_180cfc7c0 != 0) {
    do {
      lVar19 = uVar16 * 0x38;
      if (((&DAT_180cfb2f0)[lVar19] != '\0') && (lVar10 != 0)) {
        FUN_180273b40(lVar10,&DAT_180cfb2c0 + lVar19);
        uVar18 = DAT_180cfc7c0;
      }
      (&DAT_180cfb2f0)[lVar19] = 0;
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar18);
  }
  pHVar5 = DAT_1811079d8;
  cVar6 = DAT_180ca1c6a;
  DAT_180cfc7c0 = 0;
  LOCK();
  DAT_180ca1c6a = '\0';
  UNLOCK();
  if ((cVar6 != '\0') && (DAT_1811079d8 != (HWND)0x0)) {
    local_418[0]._4_4_ = 0;
    FUN_180540170(&local_418[0].uFlags,0,0x3bc);
    local_418[0].cbSize = 0x3d0;
    local_418[0].hWnd = pHVar5;
    local_418[0].uID = 0x574c;
    Shell_NotifyIconW(2,local_418);
  }
  DAT_180cd1aa6 = 1;
  if (DAT_18110c730 != '\0') {
    DAT_18110c730 = '\0';
    cVar6 = FUN_18026b600(DAT_18110c728,&DAT_18110c710,DAT_18110c720);
    if (cVar6 == '\0') {
      FUN_1802b2560("[error] event listeners | unregister failed");
    }
  }
  if (DAT_18110ffd8 != '\0') {
    DAT_18110ffd8 = '\0';
    cVar6 = FUN_18026b600(DAT_18110ffd0,&DAT_18110ffb8,DAT_18110ffc8);
    if (cVar6 == '\0') {
      FUN_1802b2560("[error] event listeners | unregister failed");
    }
  }
  iVar14 = 0;
  do {
    if (DAT_18110ffa8 < 1) break;
    Sleep(1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 1000);
  local_430 = (longlong *)&DAT_1809fa7b0;
  iVar14 = FUN_1804e4d70(&DAT_1809fa7b0);
  if (iVar14 != 0) goto LAB_1801d1994;
  if (DAT_1809fa7fc == 0x7fffffff) {
    DAT_1809fa7fc = 0x7ffffffe;
    goto LAB_1801d19a9;
  }
  FUN_1803c49c0();
  DAT_180cd1aa7 = 0;
  FUN_1804e4e90(&DAT_1809fa7b0);
  FUN_180208e60();
  DAT_180ccfe84 = 0;
  FUN_18008f2b0();
  DAT_180ca006d = 1;
  if (DAT_1809f1750 != '\0') {
    FUN_180264d90(DAT_1809f1740,DAT_1809f1748);
    LOCK();
    DAT_1809f1750 = '\0';
    UNLOCK();
  }
  if (DAT_1809f1770 != '\0') {
    FUN_180264d90(DAT_1809f1760,DAT_1809f1768);
    LOCK();
    DAT_1809f1770 = '\0';
    UNLOCK();
  }
  if ((DAT_180cc3d78 != 0) && (DAT_180cc3e08 != 0)) {
    FUN_180020330();
  }
  DAT_180cc3d78 = 0;
  DAT_1809627c0 = 0;
  DAT_180962810 = 3;
  DAT_180ca0dd9 = 1;
  iVar14 = 0;
  do {
    if (DAT_180ca0ddf != '\0') break;
    Sleep(1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 500);
  if (DAT_180ca0ddf == '\0') {
    FUN_18001b8c0();
    DAT_180ca0ddf = '\x01';
  }
  DAT_180cc3e1e = 1;
  if ((DAT_180cd1e58 != 0) && (DAT_1811079d8 != (HWND)0x0)) {
    SetWindowLongPtrA(DAT_1811079d8,-4,DAT_180cd1e58);
  }
  if ((DAT_180cd19e8 != 0) && (puVar11 = (undefined8 *)FUN_18000f3a0(), puVar11 == &DAT_180cd1c08))
  {
    FUN_1800239d0(DAT_180cd19e8,&DAT_180cd1a18);
  }
  DAT_180cd19e8 = 0;
  if ((DAT_180ccfba8 != 0) && (pcVar12 = (code *)FUN_18000f3a0(), pcVar12 == FUN_180087350)) {
    FUN_1800239d0(DAT_180ccfba8,&DAT_180ccfbe0);
  }
  DAT_180ccfba8 = 0;
  FUN_1804293b0(0,0);
  iVar14 = 0;
  do {
    if (DAT_180cd1aa0 < 1) goto LAB_1801d0fa9;
    Sleep(1);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 3000);
  if (0 < DAT_180cd1aa0) {
    FUN_1802b2560("[error] unload | %d hook calls still running",DAT_180cd1aa0);
  }
LAB_1801d0fa9:
  FUN_180048ef0();
  if (((((DAT_180ccf9c0 != '\0') && (DAT_180ccf998 != 0)) &&
       (lVar10 = FUN_180045260(), DAT_180ccf998 == lVar10)) &&
      ((DAT_180ccf854 != 0 &&
       (lVar10 = FUN_18000f3a0(DAT_180ccf998 + (ulonglong)DAT_180ccf854), lVar10 == DAT_180ccf9a0)))
      ) && (cVar6 = FUN_180047aa0(), cVar6 != '\0')) {
    FUN_1800442a0(DAT_180ccf998,&DAT_180ccf9a8);
  }
  DAT_180ccf9c0 = '\0';
  if (((DAT_180ca15bb != '\0') || (DAT_180ca15b9 != '\0')) &&
     ((DAT_180ccf810 != 0 && (lVar10 = FUN_18000f3a0(), lVar10 != 0)))) {
    local_438[0] = 0;
    FUN_1800233d0((ulonglong)DAT_180961fb8 + lVar10,local_438);
    local_430 = (longlong *)((ulonglong)local_430 & 0xffffffff00000000);
    FUN_180013280((ulonglong)DAT_180961fc8 + lVar10,&local_430);
  }
  if (DAT_180ca15b8 != '\0') {
    if (DAT_180962bd8 == 0) {
      if (DAT_180962be0 == '\0') {
        DAT_180962bd8 = FUN_180264b70(PTR_s_cl_view_near_hud_player_eye_dist_180962bd0);
        DAT_180962be0 = DAT_180962bd8 == 0;
        if (DAT_180962bd8 != 0) goto LAB_1801d10cc;
        FUN_1802b2560("[error] nl_view | convar %s not found",
                      PTR_s_cl_view_near_hud_player_eye_dist_180962bd0);
      }
      if (DAT_180962bd8 != 0) goto LAB_1801d10cc;
    }
    else {
LAB_1801d10cc:
      FUN_180013280(DAT_180962bd8 + 0x58,&DAT_180ccf82c);
    }
    DAT_180ca15b8 = '\0';
  }
  uVar3 = DAT_180ca15bd;
  DAT_180ca15bb = '\0';
  DAT_180ca15b9 = '\0';
  LOCK();
  DAT_180ca12ef = 0;
  UNLOCK();
  LOCK();
  DAT_180ca15bd = 0;
  UNLOCK();
  FUN_18025b1c0(uVar3);
  lVar10 = DAT_180ccf5f0;
  if (DAT_180ccf740 != DAT_180ccf748) {
    DAT_180ccf748 = DAT_180ccf740;
  }
  if (DAT_180ccf6e8 != DAT_180ccf6f0) {
    DAT_180ccf6f0 = DAT_180ccf6e8;
  }
  lVar19 = DAT_180ccf5e8;
  if (DAT_180ccf5e8 != DAT_180ccf5f0) {
    do {
      FUN_180043290(lVar19 + 8);
      lVar19 = lVar19 + 0x20;
    } while (lVar19 != lVar10);
    DAT_180ccf5f0 = DAT_180ccf5e8;
  }
  FUN_180042a70(&DAT_180ccf700);
  if (DAT_180cc4c60 != DAT_180cc4c68) {
    DAT_180cc4c68 = DAT_180cc4c60;
  }
  FUN_180033320(&DAT_180ca0c20);
  FUN_180033320(&DAT_180ca0c60);
  if (DAT_180cc4c48 != DAT_180cc4c50) {
    DAT_180cc4c50 = DAT_180cc4c48;
  }
  FUN_180034430();
  DAT_180ca12e8 = 0;
  FUN_18022d5e0();
  FUN_18022dc20();
  DAT_180ccf788 = 0;
  FUN_18000f330();
  FUN_18000d9e0();
  DAT_180ca0cdb = 0;
  local_428 = &DAT_1809f76c0;
  iVar14 = FUN_1804e4d70(&DAT_1809f76c0);
  plVar4 = DAT_181107e88;
  if (iVar14 != 0) {
LAB_1801d1994:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f770c == 0x7fffffff) {
    DAT_1809f770c = 0x7ffffffe;
  }
  else {
    plVar2 = DAT_181107e88;
    for (plVar1 = (longlong *)*DAT_181107e88; DAT_181107e88 = plVar2, plVar1 != plVar4;
        plVar1 = (longlong *)*plVar1) {
      if ((longlong *)plVar1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[3] + 0x10))();
      }
      if ((longlong *)plVar1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[2] + 0x10))();
      }
      plVar2 = DAT_181107e88;
    }
    if (DAT_181107e90 != 0) {
      if (DAT_181107e90 < DAT_181107eb8 >> 3) {
        FUN_180027bd0(&DAT_181107e80,*plVar2,plVar2);
      }
      else {
        *(undefined8 *)plVar2[1] = 0;
        puVar11 = (undefined8 *)*plVar2;
        while (puVar11 != (undefined8 *)0x0) {
          puVar17 = (undefined8 *)*puVar11;
          thunk_FUN_1803d64e0(puVar11,0x20);
          puVar11 = puVar17;
        }
        *DAT_181107e88 = (longlong)DAT_181107e88;
        DAT_181107e88[1] = (longlong)DAT_181107e88;
        DAT_181107e90 = 0;
        local_430 = DAT_181107e88;
        FUN_180026a10(DAT_181107e98,DAT_181107ea0,&local_430);
      }
    }
    if (DAT_181107e60 != (longlong *)0x0) {
      (**(code **)(*DAT_181107e60 + 0x10))();
      DAT_181107e60 = (longlong *)0x0;
    }
    FUN_1804e4e90(&DAT_1809f76c0);
    FUN_1803bae00();
    puVar11 = DAT_18110b5a0;
    if (DAT_18110b5a0 != DAT_18110b5a8) {
      puVar17 = DAT_18110b5a0 + 2;
      do {
        (**(code **)(*(longlong *)*puVar11 + 0x10))();
        FUN_180540530(puVar11,puVar17,(longlong)DAT_18110b5a8 - (longlong)puVar17);
        DAT_18110b5a8 = DAT_18110b5a8 + -2;
      } while (puVar11 != DAT_18110b5a8);
    }
    FUN_1803beb20();
    DAT_180cd1a97 = 0;
    FUN_1803c1950();
    puVar13 = &DAT_1809a5018;
    do {
      for (puVar11 = (undefined8 *)(puVar13 + 2); puVar11 != (undefined8 *)(puVar13 + 0xaa);
          puVar11 = puVar11 + 0x15) {
        *puVar11 = 0;
        *(undefined1 *)(puVar11 + 1) = 0;
      }
      *puVar13 = 0;
      puVar13 = puVar13 + 0xac;
    } while (puVar13 != &DAT_1809e85c8);
    iVar14 = FUN_1804e4d70(&DAT_1809e85d0);
    if (iVar14 != 0) goto LAB_1801d1994;
    if (DAT_1809e861c == 0x7fffffff) {
      DAT_1809e861c = 0x7ffffffe;
    }
    else {
      if (DAT_180cd0238 != DAT_180cd0240) {
        DAT_180cd0240 = DAT_180cd0238;
      }
      FUN_1804e4e90(&DAT_1809e85d0);
      local_428 = &DAT_1809ebca0;
      iVar14 = FUN_1804e4d70(&DAT_1809ebca0);
      plVar4 = DAT_180cd10c8;
      if (iVar14 != 0) goto LAB_1801d1994;
      if (DAT_1809ebcec == 0x7fffffff) {
        DAT_1809ebcec = 0x7ffffffe;
      }
      else {
        for (plVar1 = (longlong *)*DAT_180cd10c8; plVar1 != plVar4; plVar1 = (longlong *)*plVar1) {
          FUN_1800e2fd0(plVar1[6]);
          LOCK();
          cVar6 = *(char *)(plVar1[6] + 0xb0);
          *(char *)(plVar1[6] + 0xb0) = '\0';
          UNLOCK();
          if (cVar6 != '\0') {
            LOCK();
            DAT_180cd10b0 = DAT_180cd10b0 + -1;
            UNLOCK();
          }
        }
        if (DAT_180cd10d0 != 0) {
          if (DAT_180cd10d0 < DAT_180cd10f8 >> 3) {
            FUN_1800e53f0(&DAT_180cd10c0,*DAT_180cd10c8,DAT_180cd10c8);
          }
          else {
            FUN_1800e5940(DAT_180cd10d0,DAT_180cd10c8);
            *DAT_180cd10c8 = (longlong)DAT_180cd10c8;
            DAT_180cd10c8[1] = (longlong)DAT_180cd10c8;
            DAT_180cd10d0 = 0;
            local_430 = DAT_180cd10c8;
            FUN_180026ac0(DAT_180cd10d8,DAT_180cd10e0,&local_430);
          }
        }
        FUN_1804e4e90(&DAT_1809ebca0);
        puVar11 = DAT_180cd1080;
        if (DAT_180cd1080 != DAT_180cd1088) {
          puVar17 = DAT_180cd1080 + 2;
          do {
            (**(code **)(*(longlong *)*puVar11 + 0x10))();
            FUN_180540530(puVar11,puVar17,(longlong)DAT_180cd1088 - (longlong)puVar17);
            DAT_180cd1088 = DAT_180cd1088 + -2;
          } while (puVar11 != DAT_180cd1088);
        }
        iVar14 = FUN_1804e4d70(&DAT_1809ebe00);
        if (iVar14 != 0) goto LAB_1801d1994;
        if (DAT_1809ebe4c != 0x7fffffff) {
          FUN_1800ee770(&DAT_180ca0f38);
          FUN_1800e8740(&DAT_180cd1200);
          DAT_180cc3d77 = 0;
          FUN_1804e4e90(&DAT_1809ebe00);
          cVar6 = DAT_180cc3d76;
          LOCK();
          DAT_180cc3d76 = '\0';
          UNLOCK();
          if (cVar6 != '\0') {
            FUN_1804eb6a0(&DAT_180cd1150);
            if (DAT_180ca0e28 != 0) {
              DVar7 = GetCurrentThreadId();
              if (DAT_180ca0e28 == DVar7) goto LAB_1801d1994;
              local_428 = _DAT_180ca0e20;
              DStack_420 = DAT_180ca0e28;
              uStack_41c = _DAT_180ca0e2c;
              iVar14 = FUN_1804eb620(&local_428,0);
              if (iVar14 != 0) {
LAB_1801d1989:
                    /* WARNING: Subroutine does not return */
                FUN_1804e4a90(2);
              }
              _DAT_180ca0e20 = (undefined *)0x0;
              _DAT_180ca0e28 = 0;
            }
          }
          puVar17 = DAT_180cd1118;
          for (puVar11 = (undefined8 *)*DAT_180cd1118; puVar11 != puVar17;
              puVar11 = (undefined8 *)*puVar11) {
            if ((longlong *)puVar11[7] != (longlong *)0x0) {
              (**(code **)(*(longlong *)puVar11[7] + 0x10))();
            }
          }
          FUN_1800e8740(&DAT_180cd1110);
          lVar10 = DAT_180cd11a0;
          lVar19 = DAT_180cd1198;
          if (DAT_180cd1198 != DAT_180cd11a0) {
            do {
              FUN_180081c30(lVar19 + 0x28);
              FUN_18000f890(lVar19);
              lVar19 = lVar19 + 0x40;
            } while (lVar19 != lVar10);
            DAT_180cd11a0 = DAT_180cd1198;
          }
          lVar10 = DAT_180cd11b8;
          lVar19 = DAT_180cd11b0;
          if (DAT_180cd11b0 != DAT_180cd11b8) {
            do {
              FUN_18000f890(lVar19);
              lVar19 = lVar19 + 0x20;
            } while (lVar19 != lVar10);
            DAT_180cd11b8 = DAT_180cd11b0;
          }
          FUN_1800e8fc0(&DAT_180ca0f10);
          FUN_1800e8ec0(&DAT_180ca0e30);
          if (DAT_180cd10be != '\0') {
            DAT_180cd10be = '\0';
          }
          if (DAT_1811084c8 != 0) {
            FUN_1804293b0(DAT_1811084c8,0);
            FUN_180429140(DAT_1811084c8);
            DAT_1811084c8 = 0;
          }
          FUN_180386030();
          if (DAT_1811082a8 != (longlong *)0x0) {
            (**(code **)(*DAT_1811082a8 + 0x10))();
            DAT_1811082a8 = (longlong *)0x0;
          }
          if (DAT_1811086f0 != (longlong *)0x0) {
            (**(code **)(*DAT_1811086f0 + 0x10))();
            DAT_1811086f0 = (longlong *)0x0;
          }
          if (DAT_181108700 != (longlong *)0x0) {
            (**(code **)(*DAT_181108700 + 0x10))();
            DAT_181108700 = (longlong *)0x0;
          }
          if (DAT_1811082a0 != (longlong *)0x0) {
            (**(code **)(*DAT_1811082a0 + 0x10))();
            DAT_1811082a0 = (longlong *)0x0;
          }
          if (DAT_181108748 != (longlong *)0x0) {
            (**(code **)(*DAT_181108748 + 0x10))();
            DAT_181108748 = (longlong *)0x0;
          }
          if (DAT_181108740 != (longlong *)0x0) {
            (**(code **)(*DAT_181108740 + 0x10))();
            DAT_181108740 = (longlong *)0x0;
          }
          if (DAT_181108738 != (longlong *)0x0) {
            (**(code **)(*DAT_181108738 + 0x10))();
            DAT_181108738 = (longlong *)0x0;
          }
          if (DAT_181108730 != (longlong *)0x0) {
            (**(code **)(*DAT_181108730 + 0x10))();
            DAT_181108730 = (longlong *)0x0;
          }
          if (DAT_1811085b8 != (longlong *)0x0) {
            (**(code **)(*DAT_1811085b8 + 0x10))();
            DAT_1811085b8 = (longlong *)0x0;
          }
          DAT_181108710 = 0;
          DAT_180cd1104 = 0;
          FUN_18037bb90();
          plVar4 = DAT_180cf9858;
          LOCK();
          DAT_180cf9858 = (longlong *)0x0;
          UNLOCK();
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))();
          }
          if (DAT_180cf9870 != (longlong *)0x0) {
            (**(code **)(*DAT_180cf9870 + 0x10))();
          }
          puVar11 = DAT_180cf9958;
          DAT_180cf9870 = (longlong *)0x0;
          puVar17 = DAT_180cf9950;
          if (DAT_180cf9950 != DAT_180cf9958) {
            do {
              (**(code **)(*(longlong *)*puVar17 + 0x10))();
              puVar17 = puVar17 + 1;
            } while (puVar17 != puVar11);
            if (DAT_180cf9950 != DAT_180cf9958) {
              DAT_180cf9958 = DAT_180cf9950;
            }
          }
          DAT_180ccf87d = 0;
          if (DAT_180cc3e79 != '\0') {
            if (DAT_180cc3e1f != '\0') {
              ClipCursor((RECT *)&DAT_180cd1b18);
            }
            *(undefined1 *)(DAT_180ca0a50 + 0x8d) = 0;
            DAT_180cc3e1f = '\0';
            DAT_180cc3e79 = '\0';
          }
          DAT_180cd1e58 = 0;
          FUN_180363f00();
          uVar18 = 0;
          LOCK();
          bVar20 = DAT_1811118c8 == 0;
          if (bVar20) {
            DAT_1811118c8 = 1;
          }
          UNLOCK();
          while (!bVar20) {
            Sleep((uint)(0x1f < uVar18));
            uVar18 = uVar18 + 1;
            LOCK();
            bVar20 = DAT_1811118c8 == 0;
            if (bVar20) {
              DAT_1811118c8 = 1;
            }
            UNLOCK();
          }
          if ((DAT_1811118b0 != (HANDLE)0x0) &&
             (iVar14 = FUN_180428c90(0), puVar11 = DAT_1811118a8, iVar14 == 0)) {
            DAT_1811118a8 = (undefined8 *)0x0;
            while (puVar11 != (undefined8 *)0x0) {
              puVar17 = (undefined8 *)*puVar11;
              VirtualFree(puVar11,0,0x8000);
              puVar11 = puVar17;
            }
            HeapFree(DAT_1811118b0,0,DAT_1811118b8);
            HeapDestroy(DAT_1811118b0);
            DAT_1811118b0 = (HANDLE)0x0;
            DAT_1811118b8 = (LPVOID)0x0;
            _DAT_1811118c0 = 0;
          }
          iVar14 = DAT_1811118c8;
          LOCK();
          DAT_1811118c8 = 0;
          UNLOCK();
          return iVar14;
        }
        DAT_1809ebe4c = 0x7ffffffe;
      }
    }
  }
LAB_1801d19a9:
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(6);
}



/* ===== 1801d19c0 FUN_1801d19c0 ===== */

undefined8 * FUN_1801d19c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[2]) {
    *puVar7 = *param_2;
    puVar7[1] = *param_3;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 2);
    return puVar7;
  }
  uVar12 = 0xfffffffffffffff;
  uVar13 = (longlong)puVar7 - *param_1;
  lVar10 = (longlong)uVar13 >> 4;
  if (lVar10 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar11 = lVar10 + 1;
  uVar4 = param_1[2] - *param_1 >> 4;
  if (uVar4 <= 0xfffffffffffffff - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar12 = uVar11;
    if (uVar11 <= uVar4) {
      uVar12 = uVar4;
    }
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar3 = (undefined8 *)FUN_18000fb70(uVar12 * 0x10);
  puVar14 = (undefined8 *)((uVar13 & 0xfffffffffffffff0) + (longlong)puVar3);
  *puVar14 = *param_2;
  puVar14[1] = *param_3;
  puVar1 = (undefined8 *)*param_1;
  if (puVar7 == (undefined8 *)param_1[1]) {
    lVar10 = param_1[1] - (longlong)puVar1;
    puVar5 = puVar3;
    puVar7 = puVar1;
  }
  else {
    FUN_180540530(puVar3,puVar1,(longlong)puVar7 - (longlong)puVar1);
    puVar5 = puVar14 + 2;
    lVar10 = param_1[1] - (longlong)puVar7;
  }
  puVar8 = auStack_48;
  puVar9 = auStack_48;
  FUN_180540530(puVar5,puVar7,lVar10);
  lVar10 = *param_1;
  if (lVar10 == 0) goto LAB_1801d1b0a;
  if ((param_1[2] - lVar10 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1801d1b02:
    lVar6 = lVar10;
    puVar9 = puVar8;
  }
  else {
    lVar6 = *(longlong *)(lVar10 + -8);
    if (0x1f < (lVar10 - lVar6) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar10 = (*pcVar2)(5);
      puVar8 = auStack_40;
      goto LAB_1801d1b02;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1801d1b0a;
  thunk_FUN_1803d64e0(lVar6);
LAB_1801d1b0a:
  *param_1 = (longlong)puVar3;
  param_1[1] = (longlong)(puVar3 + uVar11 * 2);
  param_1[2] = (longlong)(puVar3 + uVar12 * 2);
  return puVar14;
}



/* ===== 1801d1b50 FUN_1801d1b50 ===== */

undefined8 * FUN_1801d1b50(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    uVar4 = 0;
    lVar3 = *param_2;
LAB_1801d1b90:
    do {
      if (*(char *)(uVar4 + lVar3) == ' ') {
LAB_1801d1c3a:
        uVar4 = uVar4 + 1;
      }
      else {
        if (*(char *)(uVar4 + lVar3) == '?') {
          FUN_1801d21b0(param_1);
          if (uVar2 <= uVar4) {
            return param_1;
          }
          while (*(char *)(uVar4 + lVar3) == '?') {
            uVar4 = uVar4 + 1;
            if (uVar2 <= uVar4) {
              return param_1;
            }
          }
          goto LAB_1801d1b90;
        }
        uVar5 = 0;
        if (uVar2 <= uVar4) goto LAB_1801d1c3a;
        do {
          if ((1 < uVar5) ||
             (((cVar1 = *(char *)(uVar4 + lVar3), 9 < (byte)(cVar1 - 0x30U) &&
               (5 < (byte)(cVar1 + 0x9fU))) && (5 < (byte)(cVar1 + 0xbfU))))) break;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
        if (uVar5 == 0) goto LAB_1801d1c3a;
        FUN_1801d21b0(param_1);
      }
    } while (uVar4 < uVar2);
  }
  return param_1;
}



/* ===== 1801d1c60 FUN_1801d1c60 ===== */

undefined8 FUN_1801d1c60(ulonglong param_1,longlong param_2)

{
  SIZE_T SVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  _MEMORY_BASIC_INFORMATION local_58;
  
  if (param_2 != 0) {
    if (param_1 + param_2 < param_1) {
      return 0;
    }
    uVar5 = (param_1 + param_2) - 1 >> 0xc;
    if (param_1 >> 0xc <= uVar5) {
      uVar3 = param_1 >> 0xc;
      do {
        uVar4 = uVar3 + 1;
        if (*(ulonglong *)(&DAT_180cd1e78 + (ulonglong)((uint)uVar3 & 0x1fff) * 8) != uVar4) {
          local_58.BaseAddress = (PVOID)0x0;
          local_58.AllocationBase = (PVOID)0x0;
          local_58.AllocationProtect = 0;
          local_58._20_4_ = 0;
          local_58.RegionSize = 0;
          local_58.State = 0;
          local_58.Protect = 0;
          local_58.Type = 0;
          local_58._44_4_ = 0;
          SVar1 = VirtualQuery((LPCVOID)(uVar3 << 0xc),&local_58,0x30);
          if (SVar1 == 0) {
            return 0;
          }
          if (local_58.State != 0x1000) {
            return 0;
          }
          if ((local_58._32_8_ & 0x10100000000) != 0) {
            return 0;
          }
          if ((local_58._32_8_ & 0xee00000000) == 0) {
            return 0;
          }
          uVar2 = local_58.RegionSize + (longlong)local_58.BaseAddress >> 0xc;
          uVar4 = uVar3;
          if (uVar5 + 1 < uVar2) {
            uVar2 = uVar5 + 1;
          }
          for (; uVar4 < uVar2; uVar4 = uVar4 + 1) {
            *(ulonglong *)(&DAT_180cd1e78 + (ulonglong)((uint)uVar4 & 0x1fff) * 8) = uVar4 + 1;
          }
        }
        uVar3 = uVar4;
      } while (uVar4 <= uVar5);
    }
  }
  return 1;
}



/* ===== 1801d1d70 FUN_1801d1d70 ===== */

undefined8 * FUN_1801d1d70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  pHVar2 = GetModuleHandleA((LPCSTR)*param_2);
  if (pHVar2 != (HMODULE)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_28,0x18);
    if (iVar1 != 0) {
      *param_1 = local_28;
      param_1[1] = uStack_20 & 0xffffffff;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* ===== 1801d1e00 FUN_1801d1e00 ===== */

undefined8 FUN_1801d1e00(longlong *param_1,undefined4 *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    return 0;
  }
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1801d1b50(&local_28,&local_38);
  puVar4 = auStack_58;
  if (local_28 != local_20) {
    uVar3 = FUN_180524dec();
    return uVar3;
  }
  if (local_28 != 0) {
    uVar2 = ((longlong)(local_18 - local_28) >> 1) * 2;
    uVar5 = local_28;
    if (0xfff < uVar2) {
      uVar5 = (local_28 - *(longlong *)(local_28 - 8)) - 8;
      if (uVar5 < 0x20) {
        thunk_FUN_1803d64e0(*(longlong *)(local_28 - 8),uVar2 + 0x27);
        return 0;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_50;
    }
    *(undefined8 *)(puVar4 + -8) = 0x1801d1ef3;
    thunk_FUN_1803d64e0(uVar5);
  }
  return 0;
}



