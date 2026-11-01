/* ===== 180072d40 FUN_180072d40 ===== */

void FUN_180072d40(undefined8 param_1,undefined8 param_2,longlong param_3,float param_4,
                  float param_5,float param_6,float param_7,undefined1 *param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  
  iVar4 = FUN_1804e4d70(&DAT_1809e8e50,param_2,param_3,param_4,&DAT_1809e8e50);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar5 = FUN_18006e170(param_1);
  if ((((lVar5 != 0) && (*(char *)(lVar5 + 0x48) == '\0')) &&
      (lVar1 = *(longlong *)(lVar5 + 0x40), lVar1 != 0)) &&
     ((lVar2 = *(longlong *)(lVar5 + 0xa0), lVar2 != 0 && (param_3 != 0)))) {
    for (piVar6 = *(int **)(lVar2 + 0x68); piVar6 != *(int **)(lVar2 + 0x70); piVar6 = piVar6 + 0x96
        ) {
      if (*piVar6 == (int)param_2) {
        if (-1 < piVar6[0x8f]) {
          FUN_18047f6f0(lVar1,0xffffd8f0);
          iVar4 = FUN_18047fe10(lVar1,0xffffffff);
          uVar3 = DAT_180ccfa78;
          if (iVar4 == 6) {
            DAT_180ccfa18 = DAT_180ccfa18 + 1;
            DAT_180ccfa78 = param_3;
            FUN_18047f4f0(lVar1,(double)param_4);
            FUN_18047f4f0(lVar1,(double)param_5);
            FUN_18047f4f0(lVar1,(double)param_6);
            FUN_18047f4f0(lVar1,(double)param_7);
            FUN_18047e8f0(lVar1,0,0x10);
            FUN_18047f270(lVar1,*param_8);
            FUN_18047f8e0(lVar1,0xfffffffe,"hover");
            FUN_18047f270(lVar1,param_8[3]);
            FUN_18047f8e0(lVar1,0xfffffffe,"click");
            FUN_18047f270(lVar1,param_8[6]);
            FUN_18047f8e0(lVar1,0xfffffffe,"rclick");
            FUN_18047f4f0(lVar1,(double)*(float *)(param_8 + 8));
            FUN_18047f8e0(lVar1,0xfffffffe,&DAT_1806e1ba4);
            FUN_18047f4f0(lVar1,(double)*(float *)(param_8 + 0xc));
            FUN_18047f8e0(lVar1,0xfffffffe,&DAT_1806e1ba8);
            FUN_18047f270(lVar1,*param_8);
            FUN_18047f8e0(lVar1,0xfffffffe,"hovered");
            FUN_18047f270(lVar1,param_8[1]);
            FUN_18047f8e0(lVar1,0xfffffffe,"active");
            FUN_18047f270(lVar1,param_8[2]);
            FUN_18047f8e0(lVar1,0xfffffffe,&DAT_1806e1bb8);
            FUN_18047f270(lVar1,param_8[3]);
            FUN_18047f8e0(lVar1,0xfffffffe,"clicked");
            FUN_18047f270(lVar1,param_8[4]);
            FUN_18047f8e0(lVar1,0xfffffffe,"released");
            FUN_18047f270(lVar1,param_8[5]);
            FUN_18047f8e0(lVar1,0xfffffffe,"right_down");
            FUN_18047f270(lVar1,param_8[6]);
            FUN_18047f8e0(lVar1,0xfffffffe,"right_clicked");
            FUN_18047f270(lVar1,param_8[7]);
            FUN_18047f8e0(lVar1,0xfffffffe,"dragging");
            FUN_18047f4f0(lVar1,(double)*(float *)(param_8 + 8));
            FUN_18047f8e0(lVar1,0xfffffffe,&DAT_1806d23e4);
            FUN_18047f4f0(lVar1,(double)*(float *)(param_8 + 0xc));
            FUN_18047f8e0(lVar1,0xfffffffe,&DAT_1806d23e8);
            FUN_18047f4f0(lVar1,(double)*(float *)(param_8 + 0x10));
            FUN_18047f8e0(lVar1,0xfffffffe,"wheel");
            FUN_180070500(lVar5,5,0);
            DAT_180ccfa18 = DAT_180ccfa18 + -1;
            DAT_180ccfa78 = uVar3;
          }
          else {
            FUN_18047fb50(lVar1,0xfffffffe);
          }
        }
        break;
      }
    }
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180073120 FUN_180073120 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180073120(longlong param_1,longlong param_2,longlong param_3,char param_4,longlong param_5)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  char *local_138;
  char local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined *local_b0;
  longlong local_a8;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  char local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_118 = param_5;
  local_b0 = &DAT_1809e8e50;
  local_128 = param_4;
  local_120 = param_3;
  local_f0 = param_2;
  local_d8 = param_1;
  iVar6 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((DAT_180ccfa90 != DAT_180ccfa98) && (param_1 != 0)) {
    DAT_180ccfa18 = DAT_180ccfa18 + 1;
    local_110 = 0;
    lVar12 = DAT_180ccfa90;
    lVar10 = DAT_180ccfa98;
    if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
      do {
        uVar14 = local_110;
        lVar2 = *(longlong *)(lVar12 + local_110 * 8);
        if (*(char *)(lVar2 + 0x48) == '\0') {
          if (*(longlong *)(lVar2 + 0x40) != 0) {
            if (*(longlong *)(lVar2 + 0x118) != *(longlong *)(lVar2 + 0x120)) {
              local_108 = 0;
              lStack_100 = 0;
              local_f8 = 0;
              uVar4 = (*(longlong *)(lVar2 + 0x120) - *(longlong *)(lVar2 + 0x118)) / 0x48;
              if (uVar4 != 0) {
                if (0x38e38e38e38e38e < uVar4) {
                    /* WARNING: Subroutine does not return */
                  FUN_1800118d0();
                }
                lVar8 = FUN_18000fb70(uVar4 * 0x48);
                local_f8 = lVar8 + uVar4 * 0x48;
                local_e0 = &local_108;
                lVar10 = *(longlong *)(lVar2 + 0x120);
                local_b8 = &local_108;
                lVar12 = *(longlong *)(lVar2 + 0x118);
                local_108 = lVar8;
                lStack_100 = lVar8;
                local_c8 = lVar8;
                param_3 = local_120;
                while( true ) {
                  local_120 = param_3;
                  local_c0 = lVar8;
                  if (lVar12 == lVar10) break;
                  local_a8 = lVar8;
                  FUN_180024b50(lVar8,lVar12);
                  FUN_180024b50(lVar8 + 0x20,lVar12 + 0x20);
                  *(undefined4 *)(lVar8 + 0x40) = *(undefined4 *)(lVar12 + 0x40);
                  *(undefined4 *)(lVar8 + 0x44) = *(undefined4 *)(lVar12 + 0x44);
                  lVar8 = lVar8 + 0x48;
                  lVar12 = lVar12 + 0x48;
                  param_3 = local_120;
                }
                local_e0 = (longlong *)0x0;
                lStack_100 = lVar8;
                local_e8 = lVar8;
                local_c8 = lVar8;
              }
              uVar3 = *(undefined8 *)(lVar2 + 0x40);
              local_d0 = lStack_100;
              lVar12 = local_108;
              if (local_108 != lStack_100) {
                do {
                  if (*(char *)(lVar2 + 0x48) != '\0') break;
                  iVar6 = FUN_1800aa840(param_3,lVar12);
                  if (-1 < iVar6) {
                    lVar10 = (longlong)iVar6;
                    if (*(char *)(param_3 + 0x1218 + lVar10 * 0x74) != '\0') {
                      pcVar1 = (char *)(param_5 + lVar10 * 0x48);
                      local_98 = 0;
                      uStack_88 = 0;
                      local_80 = 0;
                      local_78 = 0xf;
                      local_90 = 0;
                      local_70 = '\0';
                      local_6c = 0xffffffff;
                      local_68 = 0;
                      local_60 = 0;
                      local_58 = 0;
                      *pcVar1 = '\0';
                      lVar8 = param_5 + lVar10 * 0x48 + 8;
                      FUN_18002ba60(lVar8,&local_90);
                      pcVar1[0x28] = local_70;
                      *(undefined4 *)(pcVar1 + 0x2c) = local_6c;
                      *(undefined4 *)(pcVar1 + 0x30) = local_68;
                      *(undefined8 *)(pcVar1 + 0x38) = local_60;
                      *(undefined4 *)(pcVar1 + 0x40) = (undefined4)local_58;
                      *(undefined4 *)(pcVar1 + 0x44) = local_58._4_4_;
                      FUN_18000f890(&local_90);
                      iVar6 = FUN_18047ed40(uVar3);
                      FUN_18047f6f0(uVar3,0xffffd8f0,*(undefined4 *)(lVar12 + 0x44));
                      iVar7 = FUN_18047fe10(uVar3,0xffffffff);
                      if (iVar7 == 6) {
                        plVar9 = (longlong *)FUN_18047efb0(uVar3,8);
                        *plVar9 = local_d8;
                        FUN_18047eb70(uVar3,0xffffd8f0,"wl.entity");
                        FUN_18047f990(uVar3,0xfffffffe);
                        FUN_18047f270(uVar3,local_128);
                        if (local_f0 == 0) {
                          FUN_18047f4d0();
                        }
                        else {
                          plVar9 = (longlong *)FUN_18047efb0(uVar3,8);
                          *plVar9 = local_f0;
                          FUN_18047eb70(uVar3,0xffffd8f0,"wl.entity");
                          FUN_18047f990(uVar3,0xfffffffe);
                        }
                        cVar5 = FUN_180070500(lVar2,3,3);
                        if (cVar5 == '\0') {
                          FUN_18047fb50(uVar3,iVar6);
                          break;
                        }
                        local_138 = pcVar1;
                        FUN_18007cf90(uVar3,iVar6 + 1,lVar12,
                                      *(undefined4 *)(local_120 + 0x1244 + lVar10 * 0x74));
                        FUN_18047fb50(uVar3,iVar6);
                        if ((*pcVar1 == '\0') && (local_128 != '\0')) {
                          *pcVar1 = '\x01';
                          if (*(int *)(lVar12 + 0x40) == 1) {
                            builtin_strncpy(pcVar1 + 0x30,"ff&?",4);
                            uVar13 = 2;
                            puVar11 = (undefined8 *)&DAT_1806e1c0c;
                          }
                          else {
                            if (pcVar1 == (char *)(lVar12 + 0x18)) goto LAB_18007355e;
                            puVar11 = (undefined8 *)(lVar12 + 0x20);
                            if (0xf < *(ulonglong *)(lVar12 + 0x38)) {
                              puVar11 = (undefined8 *)*puVar11;
                            }
                            uVar13 = *(undefined8 *)(lVar12 + 0x30);
                          }
                          FUN_180029840(lVar8,puVar11,uVar13);
                        }
                      }
                      else {
                        FUN_18047fb50(uVar3,iVar6);
                      }
LAB_18007355e:
                      param_3 = local_120;
                      param_5 = local_118;
                    }
                  }
                  lVar12 = lVar12 + 0x48;
                } while (lVar12 != local_d0);
                uVar14 = local_110;
              }
              FUN_180076830(&local_108);
              lVar12 = DAT_180ccfa90;
              param_3 = local_120;
              lVar10 = DAT_180ccfa98;
              param_5 = local_118;
            }
          }
        }
        local_110 = uVar14 + 1;
      } while (local_110 < (ulonglong)(lVar10 - lVar12 >> 3));
    }
    DAT_180ccfa18 = DAT_180ccfa18 + -1;
    FUN_18006e590();
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180073650 FUN_180073650 ===== */

undefined8 FUN_180073650(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((DAT_180ccfa28 == DAT_180ccfa30) && (DAT_180ccfac0 == DAT_180ccfac8)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_1804e4e90(&DAT_1809e8e50);
  return uVar2;
}



/* ===== 1800736e0 FUN_1800736e0 ===== */

void FUN_1800736e0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_180961ab8 == 0) {
LAB_18007375c:
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18000f3a0();
    if (lVar2 == 0) goto LAB_18007375c;
    lVar2 = FUN_18000f3a0(lVar2 + 8);
    if (lVar2 == 0) goto LAB_18007375c;
    lVar3 = FUN_18000f3a0(lVar2);
    if (lVar3 == 0) goto LAB_18007375c;
    lVar3 = FUN_18000f3a0(lVar3);
    if (lVar3 == 0) goto LAB_18007375c;
  }
  if (DAT_180961ab0 != 0) {
    lVar3 = FUN_18000f3a0();
    if (lVar3 != 0) {
      lVar3 = FUN_18000f3a0(lVar3 + 8);
      if (lVar3 != 0) {
        lVar4 = FUN_18000f3a0(lVar3);
        if (lVar4 != 0) {
          lVar4 = FUN_18000f3a0(lVar4);
          if (lVar4 != 0) goto LAB_1800737a1;
        }
      }
    }
  }
  lVar3 = 0;
LAB_1800737a1:
  FUN_18006f480(lVar3,lVar2);
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 1800737f0 FUN_1800737f0 ===== */

void FUN_1800737f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  
  FUN_180071b80();
  puVar6 = &DAT_1809e8e50;
  iVar2 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (((DAT_180962080 == 0) || (DAT_180962088 == 0)) || (DAT_180962090 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_18000f3a0();
  }
  plVar1 = DAT_180ccfaf0;
  plVar4 = DAT_180ccfae8;
  if (DAT_180ccfae8 != DAT_180ccfaf0) {
    do {
      lVar5 = *plVar4;
      if (((*(char *)(lVar5 + 0x40) != '\0') && (*(char *)(lVar5 + 0x41) == '\0')) &&
         ((lVar3 != 0 && (*(longlong *)(lVar5 + 0x38) == lVar3)))) {
        FUN_18007eb70(lVar3,*(undefined4 *)(lVar5 + 0x34),param_3,param_4,puVar6);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
    if (DAT_180ccfae8 != DAT_180ccfaf0) {
      FUN_180081a30(DAT_180ccfae8,DAT_180ccfaf0);
      DAT_180ccfaf0 = DAT_180ccfae8;
    }
  }
  iVar2 = FUN_1804e4d70(&DAT_180963470);
  lVar3 = DAT_180ccfb08;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809634bc == 0x7fffffff) {
    DAT_1809634bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  lVar5 = DAT_180ccfb00;
  if (DAT_180ccfb00 != DAT_180ccfb08) {
    do {
      FUN_180081c30(lVar5 + 0x20);
      FUN_18000f890(lVar5);
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != lVar3);
    DAT_180ccfb08 = DAT_180ccfb00;
  }
  LOCK();
  DAT_180ccfae0 = 0;
  UNLOCK();
  FUN_1804e4e90(&DAT_180963470);
  FUN_1804e4e90(&DAT_1809e8e50);
  for (iVar2 = 0; (0 < DAT_180cd0250 && (iVar2 < 12000)); iVar2 = iVar2 + 0x32) {
    Sleep(0x32);
  }
  return;
}



/* ===== 1800739d0 FUN_1800739d0 ===== */

void FUN_1800739d0(undefined1 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  char *_Str;
  
  iVar1 = FUN_1804e4d70(&DAT_1809e8e50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809e8e9c == 0x7fffffff) {
    DAT_1809e8e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  _Str = "";
  if (param_2 != (char *)0x0) {
    _Str = param_2;
  }
  DAT_180962431 = param_1;
  sVar2 = strlen(_Str);
  FUN_180029840(&DAT_180963400,_Str,sVar2);
  FUN_1804e4e90(&DAT_1809e8e50);
  return;
}



/* ===== 180073a70 FUN_180073a70 ===== */

undefined8 FUN_180073a70(undefined8 param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  size_t sVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  sVar2 = strlen(param_3);
  if (0x7fffffffffffffffU - lVar1 < sVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  FUN_180069380(param_1);
  return param_1;
}



/* ===== 180073df0 FUN_180073df0 ===== */

void FUN_180073df0(char *param_1,undefined8 *param_2)

{
  longlong lVar1;
  size_t _Size;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *_Buf1;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined4 *local_58;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar11 = 0;
  lVar10 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar10 + uVar11 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_68 = (undefined4 *)0x0;
        puStack_60 = (undefined4 *)0x0;
        local_58 = (undefined4 *)0x0;
        puVar9 = *(undefined8 **)(lVar1 + 0x58);
        puVar6 = *(undefined8 **)(lVar1 + 0x50);
        puVar7 = puStack_60;
        while( true ) {
          puVar3 = local_68;
          puStack_60 = puVar7;
          if (puVar6 == puVar9) break;
          sVar5 = strlen(param_1);
          _Size = puVar6[2];
          if ((ulonglong)puVar6[3] < 0x10) {
            _Buf1 = puVar6;
          }
          else {
            _Buf1 = (undefined8 *)*puVar6;
          }
          if ((_Size == sVar5) &&
             ((_Size == 0 || (iVar4 = memcmp(_Buf1,param_1,_Size), iVar4 == 0)))) {
            if (puStack_60 == local_58) {
              FUN_18006a410(&local_68);
            }
            else {
              *puStack_60 = *(undefined4 *)(puVar6 + 4);
              puStack_60 = puStack_60 + 1;
            }
          }
          puVar6 = puVar6 + 5;
          puVar7 = puStack_60;
        }
        while ((puVar3 != puVar7 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar3);
          iVar4 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar4 == 6) {
            puVar6 = (undefined8 *)FUN_18047efb0(*(undefined8 *)(lVar1 + 0x40),0x48);
            *puVar6 = *(undefined8 *)*param_2;
            puVar9 = (undefined8 *)(&DAT_180962e00 + *(longlong *)param_2[1] * 0x20);
            if (0xf < (ulonglong)(&DAT_180962e18)[*(longlong *)param_2[1] * 4]) {
              puVar9 = (undefined8 *)*puVar9;
            }
            FUN_1805124f0(puVar6 + 1,0x40,puVar9,0xffffffffffffffff);
            FUN_18047eb70(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,"wl.event");
            FUN_18047f990(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
            FUN_180070500(lVar1,1,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar3 = puVar3 + 1;
        }
        if (local_68 != (undefined4 *)0x0) {
          uVar8 = ((longlong)local_58 - (longlong)local_68 >> 2) * 4;
          if (uVar8 < 0x1000) {
            puVar7 = local_68;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_68 + (-8 - (longlong)*(undefined4 **)(local_68 + -2)))) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar8 = uVar8 + 0x27;
            puVar7 = *(undefined4 **)(local_68 + -2);
          }
          thunk_FUN_1803d64e0(puVar7,uVar8);
          local_68 = (undefined4 *)0x0;
          puStack_60 = (undefined4 *)0x0;
          local_58 = (undefined4 *)0x0;
        }
        lVar10 = DAT_180ccfa90;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulonglong)(DAT_180ccfa98 - lVar10 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180074070 FUN_180074070 ===== */

undefined8 *
FUN_180074070(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_1804ecaa0(0x1c8);
  FUN_180540170(uVar1,0,0x1c8,param_4,uVar2);
  uVar1 = FUN_1800740d0(uVar1);
  *param_1 = uVar1;
  return param_1;
}



/* ===== 1800740d0 FUN_1800740d0 ===== */

undefined8 * FUN_1800740d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0xf;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xf;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0xf;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0x28) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xfffffffe;
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
  return param_1;
}



/* ===== 180074270 FUN_180074270 ===== */

void FUN_180074270(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar10 = 0;
  lVar6 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar6 + uVar10 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_58 = (undefined4 *)0x0;
        puStack_50 = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        puVar2 = *(undefined8 **)(lVar1 + 0x58);
        puVar5 = puStack_50;
        for (puVar8 = *(undefined8 **)(lVar1 + 0x50); puStack_50 = puVar5, puVar8 != puVar2;
            puVar8 = puVar8 + 5) {
          if ((ulonglong)puVar8[3] < 0x10) {
            _Buf1 = puVar8;
          }
          else {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((puVar8[2] == 0xb) && (iVar4 = memcmp(_Buf1,"frame_stage",0xb), iVar4 == 0)) {
            if (puStack_50 == local_48) {
              FUN_18006a410(&local_58);
            }
            else {
              *puStack_50 = *(undefined4 *)(puVar8 + 4);
              puStack_50 = puStack_50 + 1;
            }
          }
          puVar5 = puStack_50;
        }
        puVar9 = local_58;
        while ((puVar9 != puVar5 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar9);
          iVar4 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar4 == 6) {
            FUN_18047f3d0(*(undefined8 *)(lVar1 + 0x40),(longlong)*(int *)*param_2);
            FUN_180070500(lVar1,1,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar9 = puVar9 + 1;
        }
        if (local_58 != (undefined4 *)0x0) {
          uVar7 = ((longlong)local_48 - (longlong)local_58 >> 2) * 4;
          if (uVar7 < 0x1000) {
            puVar5 = local_58;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_58 + (-8 - (longlong)*(undefined4 **)(local_58 + -2)))) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = uVar7 + 0x27;
            puVar5 = *(undefined4 **)(local_58 + -2);
          }
          thunk_FUN_1803d64e0(puVar5,uVar7);
          local_58 = (undefined4 *)0x0;
          puStack_50 = (undefined4 *)0x0;
          local_48 = (undefined4 *)0x0;
        }
        lVar6 = DAT_180ccfa90;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(DAT_180ccfa98 - lVar6 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180074460 FUN_180074460 ===== */

void FUN_180074460(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar10 = 0;
  lVar6 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar6 + uVar10 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_58 = (undefined4 *)0x0;
        puStack_50 = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        puVar4 = *(undefined8 **)(lVar1 + 0x58);
        puVar5 = puStack_50;
        for (puVar8 = *(undefined8 **)(lVar1 + 0x50); puStack_50 = puVar5, puVar8 != puVar4;
            puVar8 = puVar8 + 5) {
          if ((ulonglong)puVar8[3] < 0x10) {
            _Buf1 = puVar8;
          }
          else {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((puVar8[2] == 10) && (iVar3 = memcmp(_Buf1,"createmove",10), iVar3 == 0)) {
            if (puStack_50 == local_48) {
              FUN_18006a410(&local_58);
            }
            else {
              *puStack_50 = *(undefined4 *)(puVar8 + 4);
              puStack_50 = puStack_50 + 1;
            }
          }
          puVar5 = puStack_50;
        }
        puVar9 = local_58;
        while ((puVar9 != puVar5 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar9);
          iVar3 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar3 == 6) {
            puVar4 = (undefined8 *)FUN_18047efb0(*(undefined8 *)(lVar1 + 0x40),8);
            *puVar4 = *(undefined8 *)*param_2;
            FUN_18047eb70(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,"wl.cmd");
            FUN_18047f990(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
            FUN_180070500(lVar1,1,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar9 = puVar9 + 1;
        }
        if (local_58 != (undefined4 *)0x0) {
          uVar7 = ((longlong)local_48 - (longlong)local_58 >> 2) * 4;
          if (uVar7 < 0x1000) {
            puVar5 = local_58;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_58 + (-8 - (longlong)*(undefined4 **)(local_58 + -2)))) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar7 = uVar7 + 0x27;
            puVar5 = *(undefined4 **)(local_58 + -2);
          }
          thunk_FUN_1803d64e0(puVar5,uVar7);
          local_58 = (undefined4 *)0x0;
          puStack_50 = (undefined4 *)0x0;
          local_48 = (undefined4 *)0x0;
        }
        lVar6 = DAT_180ccfa90;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(DAT_180ccfa98 - lVar6 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180074690 FUN_180074690 ===== */

void FUN_180074690(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar10 = 0;
  lVar6 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar6 + uVar10 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_58 = (undefined4 *)0x0;
        puStack_50 = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        puVar2 = *(undefined8 **)(lVar1 + 0x58);
        puVar5 = puStack_50;
        for (puVar8 = *(undefined8 **)(lVar1 + 0x50); puStack_50 = puVar5, puVar8 != puVar2;
            puVar8 = puVar8 + 5) {
          if ((ulonglong)puVar8[3] < 0x10) {
            _Buf1 = puVar8;
          }
          else {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((puVar8[2] == 0xc) && (iVar4 = memcmp(_Buf1,"menu_toggled",0xc), iVar4 == 0)) {
            if (puStack_50 == local_48) {
              FUN_18006a410(&local_58);
            }
            else {
              *puStack_50 = *(undefined4 *)(puVar8 + 4);
              puStack_50 = puStack_50 + 1;
            }
          }
          puVar5 = puStack_50;
        }
        puVar9 = local_58;
        while ((puVar9 != puVar5 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar9);
          iVar4 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar4 == 6) {
            FUN_18047f270(*(undefined8 *)(lVar1 + 0x40),*(undefined4 *)*param_2);
            FUN_180070500(lVar1,1,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar9 = puVar9 + 1;
        }
        if (local_58 != (undefined4 *)0x0) {
          uVar7 = ((longlong)local_48 - (longlong)local_58 >> 2) * 4;
          if (uVar7 < 0x1000) {
            puVar5 = local_58;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_58 + (-8 - (longlong)*(undefined4 **)(local_58 + -2)))) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = uVar7 + 0x27;
            puVar5 = *(undefined4 **)(local_58 + -2);
          }
          thunk_FUN_1803d64e0(puVar5,uVar7);
          local_58 = (undefined4 *)0x0;
          puStack_50 = (undefined4 *)0x0;
          local_48 = (undefined4 *)0x0;
        }
        lVar6 = DAT_180ccfa90;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(DAT_180ccfa98 - lVar6 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180074880 FUN_180074880 ===== */

void FUN_180074880(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *local_48;
  undefined4 *puStack_40;
  undefined4 *local_38;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar10 = 0;
  lVar6 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar6 + uVar10 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_48 = (undefined4 *)0x0;
        puStack_40 = (undefined4 *)0x0;
        local_38 = (undefined4 *)0x0;
        puVar2 = *(undefined8 **)(lVar1 + 0x58);
        puVar5 = puStack_40;
        for (puVar8 = *(undefined8 **)(lVar1 + 0x50); puStack_40 = puVar5, puVar8 != puVar2;
            puVar8 = puVar8 + 5) {
          if ((ulonglong)puVar8[3] < 0x10) {
            _Buf1 = puVar8;
          }
          else {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((puVar8[2] == 5) && (iVar4 = memcmp(_Buf1,"paint",5), iVar4 == 0)) {
            if (puStack_40 == local_38) {
              FUN_18006a410(&local_48);
            }
            else {
              *puStack_40 = *(undefined4 *)(puVar8 + 4);
              puStack_40 = puStack_40 + 1;
            }
          }
          puVar5 = puStack_40;
        }
        puVar9 = local_48;
        while ((puVar9 != puVar5 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar9);
          iVar4 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar4 == 6) {
            FUN_180070500(lVar1,0,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar9 = puVar9 + 1;
        }
        if (local_48 != (undefined4 *)0x0) {
          uVar7 = ((longlong)local_38 - (longlong)local_48 >> 2) * 4;
          if (uVar7 < 0x1000) {
            puVar5 = local_48;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_48 + (-8 - (longlong)*(undefined4 **)(local_48 + -2)))) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = uVar7 + 0x27;
            puVar5 = *(undefined4 **)(local_48 + -2);
          }
          thunk_FUN_1803d64e0(puVar5,uVar7);
          local_48 = (undefined4 *)0x0;
          puStack_40 = (undefined4 *)0x0;
          local_38 = (undefined4 *)0x0;
        }
        lVar6 = DAT_180ccfa90;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(DAT_180ccfa98 - lVar6 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180074a50 FUN_180074a50 ===== */

void FUN_180074a50(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 *_Buf1;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar12 = 0;
  lVar7 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar2 = *(longlong *)(lVar7 + uVar12 * 8);
      if ((*(char *)(lVar2 + 0x48) == '\0') && (*(longlong *)(lVar2 + 0x40) != 0)) {
        local_58 = (undefined4 *)0x0;
        puStack_50 = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        puVar3 = *(undefined8 **)(lVar2 + 0x58);
        puVar6 = puStack_50;
        for (puVar10 = *(undefined8 **)(lVar2 + 0x50); puStack_50 = puVar6, puVar10 != puVar3;
            puVar10 = puVar10 + 5) {
          if ((ulonglong)puVar10[3] < 0x10) {
            _Buf1 = puVar10;
          }
          else {
            _Buf1 = (undefined8 *)*puVar10;
          }
          if ((puVar10[2] == 10) && (iVar5 = memcmp(_Buf1,"level_init",10), iVar5 == 0)) {
            if (puStack_50 == local_48) {
              FUN_18006a410(&local_58);
            }
            else {
              *puStack_50 = *(undefined4 *)(puVar10 + 4);
              puStack_50 = puStack_50 + 1;
            }
          }
          puVar6 = puStack_50;
        }
        puVar11 = local_58;
        while ((puVar11 != puVar6 && (*(char *)(lVar2 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar2 + 0x40),0xffffd8f0,*puVar11);
          iVar5 = FUN_18047fe10(*(undefined8 *)(lVar2 + 0x40),0xffffffff);
          if (iVar5 == 6) {
            plVar8 = (longlong *)*param_2;
            plVar1 = plVar8 + 2;
            if (0xf < (ulonglong)plVar8[3]) {
              plVar8 = (longlong *)*plVar8;
            }
            FUN_18047f450(*(undefined8 *)(lVar2 + 0x40),plVar8,*plVar1);
            FUN_180070500(lVar2,1,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar2 + 0x40),0xfffffffe);
          }
          puVar11 = puVar11 + 1;
        }
        if (local_58 != (undefined4 *)0x0) {
          uVar9 = ((longlong)local_48 - (longlong)local_58 >> 2) * 4;
          if (uVar9 < 0x1000) {
            puVar6 = local_58;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_58 + (-8 - (longlong)*(undefined4 **)(local_58 + -2)))) {
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar9 = uVar9 + 0x27;
            puVar6 = *(undefined4 **)(local_58 + -2);
          }
          thunk_FUN_1803d64e0(puVar6,uVar9);
          local_58 = (undefined4 *)0x0;
          puStack_50 = (undefined4 *)0x0;
          local_48 = (undefined4 *)0x0;
        }
        lVar7 = DAT_180ccfa90;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulonglong)(DAT_180ccfa98 - lVar7 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180074c50 FUN_180074c50 ===== */

void FUN_180074c50(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *local_48;
  undefined4 *puStack_40;
  undefined4 *local_38;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar10 = 0;
  lVar6 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar6 + uVar10 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_48 = (undefined4 *)0x0;
        puStack_40 = (undefined4 *)0x0;
        local_38 = (undefined4 *)0x0;
        puVar2 = *(undefined8 **)(lVar1 + 0x58);
        puVar5 = puStack_40;
        for (puVar8 = *(undefined8 **)(lVar1 + 0x50); puStack_40 = puVar5, puVar8 != puVar2;
            puVar8 = puVar8 + 5) {
          if ((ulonglong)puVar8[3] < 0x10) {
            _Buf1 = puVar8;
          }
          else {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((puVar8[2] == 0xe) && (iVar4 = memcmp(_Buf1,"level_shutdown",0xe), iVar4 == 0)) {
            if (puStack_40 == local_38) {
              FUN_18006a410(&local_48);
            }
            else {
              *puStack_40 = *(undefined4 *)(puVar8 + 4);
              puStack_40 = puStack_40 + 1;
            }
          }
          puVar5 = puStack_40;
        }
        puVar9 = local_48;
        while ((puVar9 != puVar5 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar9);
          iVar4 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar4 == 6) {
            FUN_180070500(lVar1,0,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar9 = puVar9 + 1;
        }
        if (local_48 != (undefined4 *)0x0) {
          uVar7 = ((longlong)local_38 - (longlong)local_48 >> 2) * 4;
          if (uVar7 < 0x1000) {
            puVar5 = local_48;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_48 + (-8 - (longlong)*(undefined4 **)(local_48 + -2)))) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = uVar7 + 0x27;
            puVar5 = *(undefined4 **)(local_48 + -2);
          }
          thunk_FUN_1803d64e0(puVar5,uVar7);
          local_48 = (undefined4 *)0x0;
          puStack_40 = (undefined4 *)0x0;
          local_38 = (undefined4 *)0x0;
        }
        lVar6 = DAT_180ccfa90;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(DAT_180ccfa98 - lVar6 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180074e20 FUN_180074e20 ===== */

void FUN_180074e20(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar10 = 0;
  lVar6 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar6 + uVar10 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_58 = (undefined4 *)0x0;
        puStack_50 = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        puVar2 = *(undefined8 **)(lVar1 + 0x58);
        puVar5 = puStack_50;
        for (puVar8 = *(undefined8 **)(lVar1 + 0x50); puStack_50 = puVar5, puVar8 != puVar2;
            puVar8 = puVar8 + 5) {
          if ((ulonglong)puVar8[3] < 0x10) {
            _Buf1 = puVar8;
          }
          else {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((puVar8[2] == 0xc) && (iVar4 = memcmp(_Buf1,"movement_hit",0xc), iVar4 == 0)) {
            if (puStack_50 == local_48) {
              FUN_18006a410(&local_58);
            }
            else {
              *puStack_50 = *(undefined4 *)(puVar8 + 4);
              puStack_50 = puStack_50 + 1;
            }
          }
          puVar5 = puStack_50;
        }
        puVar9 = local_58;
        while ((puVar9 != puVar5 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar9);
          iVar4 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar4 == 6) {
            FUN_18047f530(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)*param_2);
            FUN_18047f4f0(*(undefined8 *)(lVar1 + 0x40),(double)*(float *)param_2[1]);
            FUN_18047f4f0(*(undefined8 *)(lVar1 + 0x40),(double)*(float *)param_2[2]);
            FUN_180070500(lVar1,3,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar9 = puVar9 + 1;
        }
        if (local_58 != (undefined4 *)0x0) {
          uVar7 = ((longlong)local_48 - (longlong)local_58 >> 2) * 4;
          if (uVar7 < 0x1000) {
            puVar5 = local_58;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_58 + (-8 - (longlong)*(undefined4 **)(local_58 + -2)))) {
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = uVar7 + 0x27;
            puVar5 = *(undefined4 **)(local_58 + -2);
          }
          thunk_FUN_1803d64e0(puVar5,uVar7);
          local_58 = (undefined4 *)0x0;
          puStack_50 = (undefined4 *)0x0;
          local_48 = (undefined4 *)0x0;
        }
        lVar6 = DAT_180ccfa90;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(DAT_180ccfa98 - lVar6 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180075040 FUN_180075040 ===== */

void FUN_180075040(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined4 *local_58;
  undefined4 *puStack_50;
  undefined4 *local_48;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar10 = 0;
  lVar6 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar6 + uVar10 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_58 = (undefined4 *)0x0;
        puStack_50 = (undefined4 *)0x0;
        local_48 = (undefined4 *)0x0;
        puVar4 = *(undefined8 **)(lVar1 + 0x58);
        puVar5 = puStack_50;
        for (puVar8 = *(undefined8 **)(lVar1 + 0x50); puStack_50 = puVar5, puVar8 != puVar4;
            puVar8 = puVar8 + 5) {
          if ((ulonglong)puVar8[3] < 0x10) {
            _Buf1 = puVar8;
          }
          else {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((puVar8[2] == 0xd) && (iVar3 = memcmp(_Buf1,"override_view",0xd), iVar3 == 0)) {
            if (puStack_50 == local_48) {
              FUN_18006a410(&local_58);
            }
            else {
              *puStack_50 = *(undefined4 *)(puVar8 + 4);
              puStack_50 = puStack_50 + 1;
            }
          }
          puVar5 = puStack_50;
        }
        puVar9 = local_58;
        while ((puVar9 != puVar5 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar9);
          iVar3 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar3 == 6) {
            puVar4 = (undefined8 *)FUN_18047efb0(*(undefined8 *)(lVar1 + 0x40),8);
            *puVar4 = *(undefined8 *)*param_2;
            FUN_18047eb70(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,"wl.view");
            FUN_18047f990(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
            FUN_180070500(lVar1,1,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar9 = puVar9 + 1;
        }
        if (local_58 != (undefined4 *)0x0) {
          uVar7 = ((longlong)local_48 - (longlong)local_58 >> 2) * 4;
          if (uVar7 < 0x1000) {
            puVar5 = local_58;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_58 + (-8 - (longlong)*(undefined4 **)(local_58 + -2)))) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar7 = uVar7 + 0x27;
            puVar5 = *(undefined4 **)(local_58 + -2);
          }
          thunk_FUN_1803d64e0(puVar5,uVar7);
          local_58 = (undefined4 *)0x0;
          puStack_50 = (undefined4 *)0x0;
          local_48 = (undefined4 *)0x0;
        }
        lVar6 = DAT_180ccfa90;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(DAT_180ccfa98 - lVar6 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180075270 FUN_180075270 ===== */

void FUN_180075270(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 *_Buf1;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined4 *local_58;
  
  DAT_180ccfa18 = DAT_180ccfa18 + 1;
  uVar12 = 0;
  lVar8 = DAT_180ccfa90;
  if (DAT_180ccfa98 - DAT_180ccfa90 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar8 + uVar12 * 8);
      if ((*(char *)(lVar1 + 0x48) == '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) {
        local_68 = (undefined4 *)0x0;
        puStack_60 = (undefined4 *)0x0;
        local_58 = (undefined4 *)0x0;
        puVar2 = *(undefined8 **)(lVar1 + 0x58);
        puVar7 = puStack_60;
        for (puVar10 = *(undefined8 **)(lVar1 + 0x50); puStack_60 = puVar7, puVar10 != puVar2;
            puVar10 = puVar10 + 5) {
          if ((ulonglong)puVar10[3] < 0x10) {
            _Buf1 = puVar10;
          }
          else {
            _Buf1 = (undefined8 *)*puVar10;
          }
          if ((puVar10[2] == 10) && (iVar5 = memcmp(_Buf1,"player_esp",10), iVar5 == 0)) {
            if (puStack_60 == local_58) {
              FUN_18006a410(&local_68);
            }
            else {
              *puStack_60 = *(undefined4 *)(puVar10 + 4);
              puStack_60 = puStack_60 + 1;
            }
          }
          puVar7 = puStack_60;
        }
        puVar11 = local_68;
        while ((puVar11 != puVar7 && (*(char *)(lVar1 + 0x48) == '\0'))) {
          FUN_18047f6f0(*(undefined8 *)(lVar1 + 0x40),0xffffd8f0,*puVar11);
          iVar5 = FUN_18047fe10(*(undefined8 *)(lVar1 + 0x40),0xffffffff);
          if (iVar5 == 6) {
            lVar8 = *(longlong *)*param_2;
            uVar3 = *(undefined8 *)(lVar1 + 0x40);
            if (lVar8 == 0) {
              FUN_18047f4d0();
            }
            else {
              plVar6 = (longlong *)FUN_18047efb0(uVar3,8);
              *plVar6 = lVar8;
              FUN_18047eb70(uVar3,0xffffd8f0,"wl.entity");
              FUN_18047f990(uVar3,0xfffffffe);
            }
            FUN_18047e8f0(*(undefined8 *)(lVar1 + 0x40),0,4);
            FUN_18047f4f0(*(undefined8 *)(lVar1 + 0x40),(double)*(float *)param_2[1]);
            FUN_18047f8e0(*(undefined8 *)(lVar1 + 0x40),0xfffffffe,&DAT_1806dfd6c);
            FUN_18047f4f0(*(undefined8 *)(lVar1 + 0x40),(double)*(float *)param_2[2]);
            FUN_18047f8e0(*(undefined8 *)(lVar1 + 0x40),0xfffffffe,&DAT_1806dfd58);
            FUN_18047f4f0(*(undefined8 *)(lVar1 + 0x40),(double)*(float *)param_2[3]);
            FUN_18047f8e0(*(undefined8 *)(lVar1 + 0x40),0xfffffffe,"right");
            FUN_18047f4f0(*(undefined8 *)(lVar1 + 0x40),(double)*(float *)param_2[4]);
            FUN_18047f8e0(*(undefined8 *)(lVar1 + 0x40),0xfffffffe,"bottom");
            FUN_180070500(lVar1,2,0);
          }
          else {
            FUN_18047fb50(*(undefined8 *)(lVar1 + 0x40),0xfffffffe);
          }
          puVar11 = puVar11 + 1;
        }
        if (local_68 != (undefined4 *)0x0) {
          uVar9 = ((longlong)local_58 - (longlong)local_68 >> 2) * 4;
          if (uVar9 < 0x1000) {
            puVar7 = local_68;
          }
          else {
            if (0x1f < (ulonglong)
                       ((longlong)local_68 + (-8 - (longlong)*(undefined4 **)(local_68 + -2)))) {
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar9 = uVar9 + 0x27;
            puVar7 = *(undefined4 **)(local_68 + -2);
          }
          thunk_FUN_1803d64e0(puVar7,uVar9);
          local_68 = (undefined4 *)0x0;
          puStack_60 = (undefined4 *)0x0;
          local_58 = (undefined4 *)0x0;
        }
        lVar8 = DAT_180ccfa90;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulonglong)(DAT_180ccfa98 - lVar8 >> 3));
  }
  DAT_180ccfa18 = DAT_180ccfa18 + -1;
  FUN_18006e590();
  return;
}



/* ===== 180075560 FUN_180075560 ===== */

void FUN_180075560(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)DAT_180ca0ca0[1];
  cVar2 = *(char *)((longlong)plVar3 + 0x19);
  plVar5 = plVar3;
  plVar1 = DAT_180ca0ca0;
  while (cVar2 == '\0') {
    cVar2 = FUN_180023470(plVar5 + 4,param_2);
    plVar4 = plVar1;
    if (cVar2 < '\0') {
      plVar5 = plVar5 + 2;
    }
    else if ((*(char *)((longlong)plVar1 + 0x19) != '\0') &&
            (cVar2 = FUN_180023470(param_2,plVar5 + 4), plVar4 = plVar5, -1 < cVar2)) {
      plVar4 = plVar1;
    }
    plVar5 = (longlong *)*plVar5;
    plVar1 = plVar4;
    cVar2 = *(char *)((longlong)plVar5 + 0x19);
  }
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    plVar3 = (longlong *)*plVar1;
  }
  cVar2 = *(char *)((longlong)plVar3 + 0x19);
  while (cVar2 == '\0') {
    cVar2 = FUN_180023470(param_2,plVar3 + 4);
    if (cVar2 < '\0') {
      plVar3 = (longlong *)*plVar3;
    }
    else {
      plVar3 = (longlong *)plVar3[2];
    }
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  FUN_180076520();
  return;
}



/* ===== 180075640 FUN_180075640 ===== */

void FUN_180075640(longlong *param_1)

{
  FUN_180076260(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1803d64e0(*param_1,0x88);
  return;
}



/* ===== 180075670 FUN_180075670 ===== */

void FUN_180075670(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_1800769f0(lVar1);
  thunk_FUN_1803d64e0(lVar1,0x1c8);
  return;
}



/* ===== 1800756a0 FUN_1800756a0 ===== */

void FUN_1800756a0(longlong *param_1)

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
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x70) {
    FUN_180066ff0(lVar3 + 0x58);
    FUN_18000f890(lVar3 + 0x38);
    FUN_18000f890(lVar3 + 0x18);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 4) * 0x10)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180075746;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180075746:
  *(undefined8 *)(puVar5 + -8) = 0x18007574e;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180075780 FUN_180075780 ===== */

longlong *
FUN_180075780(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  *param_1 = (longlong)&DAT_1806e48c8;
  param_1[0x12] = (longlong)std::ios_base::vftable;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x12] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  uVar4 = 1;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  plVar1 = param_1 + 2;
  FUN_18006ce70((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,plVar1,param_3,param_4,1);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x90;
  plVar5 = plVar1;
  FUN_18006cdb0(plVar1);
  *plVar1 = (longlong)
            std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4c90();
  }
  if (uVar2 == 0) {
    uVar4 = 2;
    param_1[0xf] = 0;
  }
  else {
    lVar3 = FUN_18000fb70(uVar2);
    FUN_180540530(lVar3,param_2,uVar2,param_4,uVar4,plVar5);
    param_1[0xf] = uVar2 + lVar3;
    *(longlong *)param_1[5] = lVar3;
    *(longlong *)param_1[9] = lVar3;
    *(int *)param_1[0xc] = (int)uVar2;
    uVar4 = 3;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return param_1;
}



/* ===== 180075900 FUN_180075900 ===== */

ulonglong * FUN_180075900(longlong param_1,ulonglong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar11 = param_4 & 1;
  if ((uVar11 == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  param_4 = param_4 & 2;
  if ((param_4 == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar7 && !bVar8) {
    uVar10 = param_3[1] + *param_3;
    lVar3 = **(longlong **)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
      uVar9 = **(ulonglong **)(param_1 + 0x40);
      if ((uVar9 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar9)) {
        *(ulonglong *)(param_1 + 0x68) = uVar9;
      }
    }
    else {
      uVar9 = 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar5 = **(longlong **)(param_1 + 0x18);
    if ((uVar10 <= (ulonglong)(lVar4 - lVar5)) &&
       ((uVar10 == 0 || (((uVar11 == 0 || (lVar3 != 0)) && ((param_4 == 0 || (uVar9 != 0)))))))) {
      lVar1 = lVar5 + uVar10;
      if ((uVar11 != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar4 - (int)lVar1;
      }
      if ((param_4 != 0) && (uVar9 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar6 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar5;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar6) - (int)lVar1;
      }
      *param_2 = uVar10;
      goto LAB_180075a00;
    }
  }
  *param_2 = 0xffffffffffffffff;
LAB_180075a00:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



/* ===== 180075a30 FUN_180075a30 ===== */

ulonglong *
FUN_180075a30(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  
  bVar12 = param_5 & 1;
  if ((bVar12 == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  bVar13 = param_5 & 2;
  if ((bVar13 == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (bVar7 || bVar8) goto LAB_180075b98;
  lVar3 = **(longlong **)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    uVar10 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar10 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar10)) {
      *(ulonglong *)(param_1 + 0x68) = uVar10;
    }
  }
  else {
    uVar10 = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar5 = **(longlong **)(param_1 + 0x18);
  uVar11 = lVar4 - lVar5;
  if (param_4 == 0) {
    uVar9 = 0;
LAB_180075b21:
    uVar9 = uVar9 + param_3;
    if ((uVar9 <= uVar11) &&
       ((uVar9 == 0 || (((bVar12 == 0 || (lVar3 != 0)) && ((bVar13 == 0 || (uVar10 != 0)))))))) {
      lVar1 = uVar9 + lVar5;
      if ((bVar12 != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x18) = lVar5;
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar4 - (int)lVar1;
      }
      if ((bVar13 != 0) && (uVar10 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar6 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar5;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar6) - (int)lVar1;
      }
      *param_2 = uVar9;
      goto LAB_180075b9f;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if (bVar12 == 0) {
        if ((bVar13 != 0) && ((uVar10 != 0 || (lVar5 == 0)))) {
          uVar9 = uVar10 - lVar5;
          goto LAB_180075b21;
        }
      }
      else if ((lVar3 != 0) || (lVar5 == 0)) {
        uVar9 = lVar3 - lVar5;
        goto LAB_180075b21;
      }
    }
  }
  else if (param_4 == 2) {
    uVar9 = uVar11;
    goto LAB_180075b21;
  }
LAB_180075b98:
  *param_2 = 0xffffffffffffffff;
LAB_180075b9f:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



/* ===== 180075bd0 FUN_180075bd0 ===== */

ulonglong FUN_180075bd0(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = *(byte **)*(int **)(param_1 + 0x38);
  if (pbVar1 != (byte *)0x0) {
    if (pbVar1 < pbVar1 + **(int **)(param_1 + 0x50)) {
      return (ulonglong)*pbVar1;
    }
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if ((pbVar2 != (byte *)0x0) && ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
      pbVar3 = *(byte **)(param_1 + 0x68);
      if (*(byte **)(param_1 + 0x68) < pbVar2) {
        pbVar3 = pbVar2;
      }
      if (pbVar1 < pbVar3) {
        *(byte **)(param_1 + 0x68) = pbVar3;
        **(int **)(param_1 + 0x50) = (int)pbVar3 - **(int **)(param_1 + 0x38);
        return (ulonglong)*(byte *)**(undefined8 **)(param_1 + 0x38);
      }
    }
  }
  return 0xffffffff;
}



/* ===== 180075c30 FUN_180075c30 ===== */

int FUN_180075c30(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 == 0) || (uVar1 <= **(ulonglong **)(param_1 + 0x18))) ||
     ((param_2 != -1 &&
      (((char)param_2 != *(char *)(uVar1 - 1) && ((*(byte *)(param_1 + 0x70) & 2) != 0)))))) {
    return -1;
  }
  **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
  **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
  if (param_2 == -1) {
    param_2 = 0;
  }
  else {
    *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
  }
  return param_2;
}



/* ===== 180075c90 FUN_180075c90 ===== */

int FUN_180075c90(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar10 = **(ulonglong **)(param_1 + 0x40);
  if (uVar10 == 0) {
    uVar9 = 0;
    uVar10 = **(ulonglong **)(param_1 + 0x18);
  }
  else {
    iVar2 = **(int **)(param_1 + 0x58);
    uVar9 = uVar10 + (longlong)iVar2;
    if (uVar10 < uVar9) {
      **(int **)(param_1 + 0x58) = iVar2 + -1;
      puVar8 = (undefined1 *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(puVar8 + 1);
      *puVar8 = (char)param_2;
      *(ulonglong *)(param_1 + 0x68) = uVar10 + 1;
      return param_2;
    }
    uVar10 = **(ulonglong **)(param_1 + 0x18);
    uVar9 = uVar9 - uVar10;
    if (0x1f < uVar9) {
      if (uVar9 < 0x3fffffff) {
        lVar7 = uVar9 * 2;
      }
      else {
        lVar7 = 0x7fffffff;
        if (0x7ffffffe < uVar9) {
          return -1;
        }
      }
      goto LAB_180075d5c;
    }
  }
  lVar7 = 0x20;
LAB_180075d5c:
  lVar5 = FUN_18000fb70(lVar7);
  FUN_180540530(lVar5,uVar10,uVar9);
  puVar8 = auStack_58;
  lVar1 = lVar5 + uVar9;
  *(longlong *)(param_1 + 0x68) = lVar1 + 1;
  **(longlong **)(param_1 + 0x20) = lVar5;
  **(longlong **)(param_1 + 0x40) = lVar1;
  **(int **)(param_1 + 0x58) = ((int)lVar5 + (int)lVar7) - (int)lVar1;
  if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    lVar7 = (**(longlong **)(param_1 + 0x38) - uVar10) + lVar5;
    **(longlong **)(param_1 + 0x18) = lVar5;
    **(longlong **)(param_1 + 0x38) = lVar7;
    **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar7;
  }
  else {
    **(longlong **)(param_1 + 0x18) = lVar5;
    **(longlong **)(param_1 + 0x38) = lVar5;
    **(undefined4 **)(param_1 + 0x50) = 0;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    uVar6 = uVar10;
    if (0xfff < uVar9) {
      uVar6 = *(ulonglong *)(uVar10 - 8);
      uVar10 = (uVar10 - uVar6) - 8;
      if (uVar10 < 0x20) {
        uVar9 = uVar9 + 0x27;
        puVar8 = auStack_58;
      }
      else {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar8 = auStack_50;
        uVar6 = uVar10;
      }
    }
    *(undefined8 *)(puVar8 + -8) = 0x180075e24;
    thunk_FUN_1803d64e0(uVar6,uVar9);
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  puVar8 = (undefined1 *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(puVar8 + 1);
  *puVar8 = (char)param_2;
  return param_2;
}



/* ===== 180075e50 FUN_180075e50 ===== */

void FUN_180075e50(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  *param_1 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    if (*(longlong *)param_1[8] == 0) {
      lVar4 = (longlong)*(int *)param_1[10] + *(longlong *)param_1[7];
    }
    else {
      lVar4 = (longlong)*(int *)param_1[0xb] + *(longlong *)param_1[8];
    }
    lVar1 = *(longlong *)param_1[3];
    puVar5 = auStack_28;
    if ((0xfff < (ulonglong)(lVar4 - lVar1)) &&
       (puVar5 = auStack_28, 0x1f < (lVar1 - *(longlong *)(lVar1 + -8)) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar5 = auStack_20;
    }
    *(undefined8 *)(puVar5 + -8) = 0x180075ecf;
    thunk_FUN_1803d64e0();
  }
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)param_1[10] = 0;
  *(undefined8 *)param_1[4] = 0;
  *(undefined8 *)param_1[8] = 0;
  *(undefined4 *)param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xfffffffe;
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  lVar4 = param_1[0xc];
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
    pcVar2 = *(code **)(**(longlong **)(lVar4 + 8) + 0x10);
    *(undefined8 *)(puVar5 + -8) = 0x180075f23;
    puVar3 = (undefined8 *)(*pcVar2)();
    if (puVar3 != (undefined8 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      *(undefined8 *)(puVar5 + -8) = 0x180075f36;
      (*pcVar2)(puVar3,1);
    }
  }
  thunk_FUN_1803d64e0(lVar4,0x10);
  return;
}



/* ===== 180075f50 FUN_180075f50 ===== */

longlong FUN_180075f50(longlong param_1,ulonglong param_2)

{
  param_1 = param_1 + -0x90;
  FUN_18006e0d0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0xf0);
  }
  return param_1;
}



/* ===== 180075f90 FUN_180075f90 ===== */

undefined8 FUN_180075f90(undefined8 param_1,ulonglong param_2)

{
  FUN_180075e50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x78);
  }
  return param_1;
}



/* ===== 180075fd0 FUN_180075fd0 ===== */

longlong * FUN_180075fd0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  uVar10 = 0;
  bVar3 = false;
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  cVar4 = FUN_180077be0(param_1);
  if (cVar4 != '\0') {
    param_2[2] = 0;
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar6 = 0;
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] < 1)) {
      uVar5 = (**(code **)(*plVar2 + 0x30))();
    }
    else {
      uVar5 = (uint)**(byte **)plVar2[7];
    }
    while (uVar5 != 0xffffffff) {
      if (uVar5 == (param_3 & 0xff)) {
        bVar3 = true;
        plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        if (*(longlong *)plVar2[7] != 0) {
          iVar1 = *(int *)plVar2[10];
          if (0 < iVar1) {
            *(int *)plVar2[10] = iVar1 + -1;
            *(longlong *)plVar2[7] = *(longlong *)plVar2[7] + 1;
            goto LAB_1800760ea;
          }
        }
        (**(code **)(*plVar2 + 0x38))();
        goto LAB_1800760ea;
      }
      if (0x7ffffffffffffffe < (ulonglong)param_2[2]) {
        uVar10 = 2;
        goto LAB_1800760ea;
      }
      FUN_1800690a0(param_2,uVar5 & 0xff);
      bVar3 = true;
      uVar5 = FUN_180077750(*(undefined8 *)
                             ((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1));
    }
    uVar10 = 1;
LAB_1800760ea:
    if (bVar3) goto LAB_180076136;
  }
  uVar10 = uVar10 | 2;
LAB_180076136:
  lVar8 = (longlong)*(int *)(*param_1 + 4);
  uVar5 = *(uint *)(lVar8 + 0x10 + (longlong)param_1);
  uVar9 = 4;
  if (*(longlong *)(lVar8 + 0x48 + (longlong)param_1) != 0) {
    uVar9 = 0;
  }
  *(uint *)(lVar8 + 0x10 + (longlong)param_1) = uVar9 | uVar10 | uVar5 & 0x17;
  uVar10 = (uVar9 | uVar10 | uVar5) & *(uint *)(lVar8 + 0x14 + (longlong)param_1);
  if ((uVar10 & 0x17) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    return param_1;
  }
  if ((uVar10 & 4) == 0) {
    pcVar11 = "ios_base::failbit set";
    if ((uVar10 & 2) == 0) {
      pcVar11 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar11 = "ios_base::badbit set";
  }
  uVar7 = FUN_18004d7f0(local_60,1);
  FUN_18004e280(local_50,pcVar11,uVar7);
                    /* WARNING: Subroutine does not return */
  FUN_1804ef5f0(local_50,&DAT_180915ec0);
}



/* ===== 1800761f0 FUN_1800761f0 ===== */

longlong FUN_1800761f0(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_18002ba60(param_3,param_1);
    *(undefined1 *)(param_3 + 0x20) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)(param_3 + 0x21) = *(undefined1 *)(param_1 + 0x21);
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    param_3 = param_3 + 0x30;
  }
  return param_3;
}



/* ===== 180076260 FUN_180076260 ===== */

void FUN_180076260(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180076260(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18000f890(param_3 + 0xc);
    FUN_18000f890(param_3 + 8);
    FUN_18000f890(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0x88);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 1800762f0 FUN_1800762f0 ===== */

undefined8 * FUN_1800762f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *local_58;
  undefined8 *local_50;
  
  puVar1 = DAT_180ca0ca0;
  puVar7 = (undefined8 *)DAT_180ca0ca0[1];
  puVar5 = puVar7;
  puVar3 = DAT_180ca0ca0;
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    do {
      puVar7 = puVar5;
      cVar2 = FUN_180023470(puVar7 + 4,param_3);
      if (-1 < cVar2) {
        puVar5 = (undefined8 *)*puVar7;
        puVar3 = puVar7;
      }
      else {
        puVar5 = (undefined8 *)puVar7[2];
      }
      uVar6 = (uint)(-1 < cVar2);
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
  }
  else {
    uVar6 = 0;
  }
  if ((*(char *)((longlong)puVar3 + 0x19) == '\0') &&
     (cVar2 = FUN_180023470(param_3,puVar3 + 4), -1 < cVar2)) {
    *param_2 = puVar3;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    if (DAT_180ca0ca8 == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
      FUN_18006dab0();
    }
    local_58 = &DAT_180ca0ca0;
    local_50 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)FUN_1804ecaa0(0x88);
    local_50 = puVar3;
    FUN_180024b50(puVar3 + 4,param_3);
    puVar5 = puVar3 + 8;
    *puVar5 = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    *puVar5 = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0xf;
    *(undefined1 *)puVar5 = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0xf;
    *(undefined1 *)(puVar3 + 0xc) = 0;
    puVar3[0x10] = 0;
    *puVar3 = puVar1;
    puVar3[1] = puVar1;
    puVar3[2] = puVar1;
    *(undefined2 *)(puVar3 + 3) = 0;
    local_50 = (undefined8 *)(ulonglong)uVar6;
    local_58 = puVar7;
    uVar4 = FUN_1800774d0(&DAT_180ca0ca0,&local_58,puVar3);
    *param_2 = uVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}



/* ===== 1800764a0 FUN_1800764a0 ===== */

longlong * FUN_1800764a0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = *param_1;
    *param_1 = 0;
    lVar2 = *param_3;
    *param_3 = lVar1;
    if (lVar2 != 0) {
      FUN_1800769f0(lVar2);
      thunk_FUN_1803d64e0(lVar2,0x1c8);
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}



/* ===== 180076520 FUN_180076520 ===== */

longlong FUN_180076520(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar5 = DAT_180ca0ca0;
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  lVar9 = 0;
  plVar8 = plVar2;
  while (plVar8 != plVar3) {
    lVar9 = lVar9 + 1;
    plVar4 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar8 = plVar4;
      while (cVar1 == '\0') {
        plVar8 = (longlong *)*plVar8;
        cVar1 = *(char *)(*plVar8 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar8[1] + 0x19);
      plVar6 = (longlong *)plVar8[1];
      plVar4 = plVar8;
      while ((plVar8 = plVar6, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar6 = (longlong *)plVar8[1];
        plVar4 = plVar8;
      }
    }
  }
  if ((plVar2 == (longlong *)*DAT_180ca0ca0) && (*(char *)((longlong)plVar3 + 0x19) != '\0')) {
    FUN_180076260(&DAT_180ca0ca0,&DAT_180ca0ca0,DAT_180ca0ca0[1]);
    plVar5[1] = (longlong)plVar5;
    *plVar5 = (longlong)plVar5;
    plVar5[2] = (longlong)plVar5;
    DAT_180ca0ca8 = 0;
  }
  else {
    while (plVar2 != plVar3) {
      plVar8 = (longlong *)plVar2[2];
      if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar8 + 0x19);
        while (cVar1 == '\0') {
          plVar8 = (longlong *)*plVar8;
          cVar1 = *(char *)(*plVar8 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar4 = (longlong *)plVar2[1];
        plVar5 = plVar2;
        while ((plVar8 = plVar4, cVar1 == '\0' && (plVar5 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar4 = (longlong *)plVar8[1];
          plVar5 = plVar8;
        }
      }
      lVar7 = FUN_180077e30(&DAT_180ca0ca0,plVar2);
      FUN_18000f890(lVar7 + 0x60);
      FUN_18000f890(lVar7 + 0x40);
      FUN_18000f890(lVar7 + 0x20);
      thunk_FUN_1803d64e0(lVar7,0x88);
      plVar2 = plVar8;
    }
  }
  return lVar9;
}



/* ===== 1800766b0 FUN_1800766b0 ===== */

void FUN_1800766b0(longlong *param_1)

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
    FUN_18000f890(lVar3 + 8);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_18007674a;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_18007674a:
  *(undefined8 *)(puVar5 + -8) = 0x180076752;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180076770 FUN_180076770 ===== */

void FUN_180076770(longlong *param_1)

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
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if (0xfff < (ulonglong)((param_1[2] - lVar3 >> 3) * 8)) {
    lVar2 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180076801;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180076801:
  *(undefined8 *)(puVar5 + -8) = 0x180076809;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180076830 FUN_180076830 ===== */

void FUN_180076830(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar3 = *param_1;
  if (uVar3 == 0) {
    return;
  }
  uVar2 = param_1[1];
  for (; uVar3 != uVar2; uVar3 = uVar3 + 0x48) {
    FUN_18000f890(uVar3 + 0x20);
    FUN_18000f890(uVar3);
  }
  uVar3 = *param_1;
  uVar2 = uVar3;
  if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar3) / 0x48) * 0x48)) {
    uVar2 = *(ulonglong *)(uVar3 - 8);
    uVar3 = (uVar3 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1800768dc;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1800768dc:
  *(undefined8 *)(puVar5 + -8) = 0x1800768e1;
  thunk_FUN_1803d64e0(uVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 180076900 FUN_180076900 ===== */

void FUN_180076900(longlong *param_1)

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
    if ((lVar3 - lVar2) - 8U < 0x20) goto LAB_180076999;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180076999:
  *(undefined8 *)(puVar5 + -8) = 0x1800769a1;
  thunk_FUN_1803d64e0(lVar2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800769c0 FUN_1800769c0 ===== */

void FUN_1800769c0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



/* ===== 1800769f0 FUN_1800769f0 ===== */

void FUN_1800769f0(longlong param_1)

{
  FUN_1800766b0(param_1 + 0x1b0);
  FUN_1800288b0(param_1 + 0x198);
  FUN_1800288b0(param_1 + 0x180);
  FUN_1800288b0(param_1 + 0x168);
  FUN_180076770(param_1 + 0x150);
  FUN_180076830(param_1 + 0x118);
  FUN_18000f890(param_1 + 0xf0);
  FUN_18000f890(param_1 + 0xd0);
  FUN_18000f890(param_1 + 0xa8);
  FUN_1800244c0(param_1 + 0x88);
  FUN_1800244c0(param_1 + 0x70);
  FUN_180076900(param_1 + 0x50);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 180076ac0 FUN_180076ac0 ===== */

longlong FUN_180076ac0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  
  lVar6 = *param_1;
  if (param_1[1] - lVar6 == -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar11 = (param_1[1] - lVar6 >> 6) + 1;
  uVar4 = param_1[2] - lVar6 >> 6;
  uVar10 = 0x3ffffffffffffff;
  if (uVar4 <= 0x3ffffffffffffff - (uVar4 >> 1)) {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar11;
    if (uVar11 <= uVar4) {
      uVar10 = uVar4;
    }
    if (0x3ffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar3 = FUN_18000fb70(uVar10 << 6);
  uVar4 = param_2 - lVar6 & 0xffffffffffffffc0;
  lVar1 = uVar4 + lVar3;
  lVar6 = lVar1 + 0x40;
  local_78 = param_1;
  local_70 = lVar3;
  local_68 = uVar10;
  local_60 = lVar6;
  local_58 = lVar6;
  FUN_180024b50(lVar1,param_3);
  FUN_180024b50(lVar3 + (uVar4 | 0x20),param_4);
  lVar5 = param_1[1];
  local_60 = lVar1;
  if (param_2 == lVar5) {
    param_2 = *param_1;
    lVar6 = lVar3;
  }
  else {
    FUN_18006c260(*param_1,param_2,lVar3,param_1);
    lVar5 = param_1[1];
    local_60 = lVar3;
  }
  FUN_18006c260(param_2,lVar5,lVar6,param_1);
  puVar7 = auStack_98;
  puVar8 = auStack_98;
  local_70 = 0;
  lVar6 = *param_1;
  puVar9 = auStack_98;
  if (lVar6 == 0) goto LAB_180076c71;
  lVar5 = param_1[1];
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x40) {
    FUN_18000f890(lVar6 + 0x20);
    FUN_18000f890(lVar6);
  }
  lVar6 = *param_1;
  if ((param_1[2] - lVar6 & 0xffffffffffffffc0U) < 0x1000) {
LAB_180076c69:
    lVar5 = lVar6;
    puVar8 = puVar7;
  }
  else {
    lVar5 = *(longlong *)(lVar6 + -8);
    if (0x1f < (lVar6 - lVar5) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar6 = (*pcVar2)(5);
      puVar7 = auStack_90;
      goto LAB_180076c69;
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x180076c71;
  thunk_FUN_1803d64e0(lVar5);
  puVar9 = puVar8;
LAB_180076c71:
  *param_1 = lVar3;
  param_1[1] = uVar11 * 0x40 + lVar3;
  param_1[2] = *(longlong *)(puVar9 + 0xa8) + lVar3;
  return lVar1;
}



/* ===== 180076cb0 FUN_180076cb0 ===== */

undefined8 * FUN_180076cb0(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  uVar10 = (ulonglong)DAT_180ccfac0;
  lVar7 = ((longlong)DAT_180ccfac8 - (longlong)DAT_180ccfac0 >> 3) * -0x3333333333333333;
  uVar11 = 0x666666666666666;
  if (lVar7 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar7 + 1;
  uVar9 = ((longlong)DAT_180ccfad0 - (longlong)DAT_180ccfac0 >> 3) * -0x3333333333333333;
  if (uVar9 <= 0x666666666666666 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar11 = uVar1;
    if (uVar1 <= uVar9) {
      uVar11 = uVar9;
    }
    if (0x666666666666666 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar11 * 0x28);
  puVar2 = puVar8 + ((longlong)(param_2 - uVar10) / 0x28) * 5;
  puVar14 = puVar2 + 5;
  local_78 = &DAT_180ccfac0;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar15 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)puVar2 = *param_3;
  *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
  *(undefined4 *)(puVar2 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  *(undefined4 *)(puVar2 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar4;
  *(undefined4 *)(puVar2 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar6;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar2 + 4) = param_3[8];
  local_68 = uVar11;
  local_60 = puVar2;
  local_58 = puVar14;
  if ((undefined8 *)param_2 == DAT_180ccfac8) {
    param_2 = (ulonglong)DAT_180ccfac0;
    puVar14 = puVar8;
    local_70 = puVar8;
  }
  else {
    local_70 = puVar8;
    FUN_180077830(DAT_180ccfac0,param_2,puVar8);
    local_60 = puVar8;
  }
  FUN_180077830(param_2,DAT_180ccfac8,puVar14);
  uVar9 = (ulonglong)DAT_180ccfac8;
  puVar12 = auStack_98;
  puVar13 = auStack_98;
  local_70 = (undefined8 *)uVar15;
  uVar10 = (ulonglong)DAT_180ccfac0;
  if (DAT_180ccfac0 == (undefined8 *)0x0) goto LAB_180076ec4;
  for (; uVar10 != uVar9; uVar10 = uVar10 + 0x28) {
    FUN_18000f890(uVar10);
  }
  uVar10 = (ulonglong)DAT_180ccfac0;
  if ((ulonglong)(((longlong)DAT_180ccfad0 - (longlong)DAT_180ccfac0 >> 3) * 8) < 0x1000) {
LAB_180076ebc:
    puVar13 = puVar12;
  }
  else {
    uVar10 = *(ulonglong *)((longlong)DAT_180ccfac0 - 8);
    uVar9 = ((longlong)DAT_180ccfac0 - uVar10) - 8;
    if (0x1f < uVar9) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar12 = auStack_90;
      uVar10 = uVar9;
      goto LAB_180076ebc;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x180076ec4;
  thunk_FUN_1803d64e0(uVar10);
LAB_180076ec4:
  DAT_180ccfac0 = puVar8;
  DAT_180ccfac8 = puVar8 + uVar1 * 5;
  DAT_180ccfad0 = puVar8 + uVar11 * 5;
  return puVar2;
}



/* ===== 180076f10 FUN_180076f10 ===== */

undefined8 * FUN_180076f10(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  uVar9 = (ulonglong)DAT_180ccfaa8;
  lVar6 = ((longlong)DAT_180ccfab0 - (longlong)DAT_180ccfaa8 >> 4) * -0x5555555555555555;
  uVar10 = 0x555555555555555;
  if (lVar6 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar6 + 1;
  uVar8 = ((longlong)DAT_180ccfab8 - (longlong)DAT_180ccfaa8 >> 4) * -0x5555555555555555;
  if (uVar8 <= 0x555555555555555 - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined8 *)FUN_18000fb70(uVar10 * 0x30);
  puVar13 = puVar7 + ((longlong)(param_2 - uVar9) / 0x30) * 6;
  puVar14 = puVar13 + 6;
  local_78 = &DAT_180ccfaa8;
  *puVar13 = 0;
  puVar13[1] = 0;
  uVar15 = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)puVar13 = *param_3;
  *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
  *(undefined4 *)(puVar13 + 1) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  *(undefined4 *)(puVar13 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar13 + 0x14) = uVar3;
  *(undefined4 *)(puVar13 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar5;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined1 *)(puVar13 + 4) = *(undefined1 *)(param_3 + 8);
  *(undefined1 *)((longlong)puVar13 + 0x21) = *(undefined1 *)((longlong)param_3 + 0x21);
  puVar13[5] = *(undefined8 *)(param_3 + 10);
  local_68 = uVar10;
  local_60 = puVar13;
  local_58 = puVar14;
  if ((undefined8 *)param_2 == DAT_180ccfab0) {
    param_2 = (ulonglong)DAT_180ccfaa8;
    puVar14 = puVar7;
    local_70 = puVar7;
  }
  else {
    local_70 = puVar7;
    FUN_1800778c0(DAT_180ccfaa8,param_2,puVar7);
    local_60 = puVar7;
  }
  FUN_1800778c0(param_2,DAT_180ccfab0,puVar14);
  uVar8 = (ulonglong)DAT_180ccfab0;
  puVar11 = auStack_98;
  puVar12 = auStack_98;
  local_70 = (undefined8 *)uVar15;
  uVar9 = (ulonglong)DAT_180ccfaa8;
  if (DAT_180ccfaa8 == (undefined8 *)0x0) goto LAB_180077130;
  for (; uVar9 != uVar8; uVar9 = uVar9 + 0x30) {
    FUN_18000f890(uVar9);
  }
  uVar9 = (ulonglong)DAT_180ccfaa8;
  if ((ulonglong)(((longlong)DAT_180ccfab8 - (longlong)DAT_180ccfaa8 >> 4) << 4) < 0x1000) {
LAB_180077128:
    puVar12 = puVar11;
  }
  else {
    uVar9 = *(ulonglong *)((longlong)DAT_180ccfaa8 - 8);
    uVar8 = ((longlong)DAT_180ccfaa8 - uVar9) - 8;
    if (0x1f < uVar8) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_90;
      uVar9 = uVar8;
      goto LAB_180077128;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x180077130;
  thunk_FUN_1803d64e0(uVar9);
LAB_180077130:
  DAT_180ccfaa8 = puVar7;
  DAT_180ccfab0 = puVar7 + uVar1 * 6;
  DAT_180ccfab8 = puVar7 + uVar10 * 6;
  return puVar13;
}



/* ===== 180077180 FUN_180077180 ===== */

longlong * FUN_180077180(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong *local_50;
  
  plVar6 = DAT_180ccfa90;
  if ((longlong)DAT_180ccfa98 - (longlong)DAT_180ccfa90 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = ((longlong)DAT_180ccfa98 - (longlong)DAT_180ccfa90 >> 3) + 1;
  uVar5 = (longlong)DAT_180ccfaa0 - (longlong)DAT_180ccfa90 >> 3;
  uVar10 = 0x1fffffffffffffff;
  if (uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar1;
    if (uVar1 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  plVar4 = (longlong *)FUN_18000fb70(uVar10 * 8);
  puVar8 = auStack_d8;
  puVar9 = auStack_d8;
  plVar11 = (longlong *)
            (((longlong)param_2 - (longlong)plVar6 & 0xfffffffffffffff8U) + (longlong)plVar4);
  local_50 = plVar11 + 1;
  local_70 = &DAT_180ccfa90;
  lVar2 = *param_3;
  *param_3 = 0;
  *plVar11 = lVar2;
  plVar6 = DAT_180ccfa98;
  if (param_2 == DAT_180ccfa98) {
    local_a8 = &DAT_180ccfa90;
    local_b8 = plVar4;
    for (plVar7 = DAT_180ccfa90; plVar7 != plVar6; plVar7 = plVar7 + 1) {
      lVar2 = *plVar7;
      *plVar7 = 0;
      *local_b8 = lVar2;
      local_b8 = local_b8 + 1;
    }
    local_b0 = local_b8;
    local_58 = plVar11;
  }
  else {
    local_90 = &DAT_180ccfa90;
    local_a0 = plVar4;
    plVar7 = DAT_180ccfa98;
    for (plVar6 = DAT_180ccfa90; DAT_180ccfa98 = plVar7, plVar6 != param_2; plVar6 = plVar6 + 1) {
      lVar2 = *plVar6;
      *plVar6 = 0;
      *local_a0 = lVar2;
      local_a0 = local_a0 + 1;
      plVar7 = DAT_180ccfa98;
    }
    local_78 = &DAT_180ccfa90;
    local_88 = local_50;
    for (; param_2 != plVar7; param_2 = param_2 + 1) {
      lVar2 = *param_2;
      *param_2 = 0;
      *local_88 = lVar2;
      local_88 = local_88 + 1;
    }
    local_98 = local_a0;
    local_80 = local_88;
    local_58 = plVar4;
  }
  plVar7 = DAT_180ccfa98;
  local_68 = 0;
  local_60 = uVar10;
  plVar6 = DAT_180ccfa90;
  if (DAT_180ccfa90 == (longlong *)0x0) goto LAB_1800773d3;
  for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      FUN_1800769f0(lVar2);
      thunk_FUN_1803d64e0(lVar2,0x1c8);
    }
  }
  plVar6 = DAT_180ccfa90;
  if ((ulonglong)(((longlong)DAT_180ccfaa0 - (longlong)DAT_180ccfa90 >> 3) * 8) < 0x1000) {
LAB_1800773cb:
    puVar9 = puVar8;
  }
  else {
    plVar6 = (longlong *)DAT_180ccfa90[-1];
    plVar7 = (longlong *)((longlong)DAT_180ccfa90 + (-8 - (longlong)plVar6));
    if (&DAT_0000001f < plVar7) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar8 = auStack_d0;
      plVar6 = plVar7;
      goto LAB_1800773cb;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800773d3;
  thunk_FUN_1803d64e0(plVar6);
LAB_1800773d3:
  DAT_180ccfa90 = plVar4;
  DAT_180ccfa98 = plVar4 + uVar1;
  DAT_180ccfaa0 = plVar4 + uVar10;
  return plVar11;
}



/* ===== 180077420 FUN_180077420 ===== */

void FUN_180077420(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18000f890(lVar1 + 0x60);
    FUN_18000f890(lVar1 + 0x40);
    FUN_18000f890(lVar1 + 0x20);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x88);
  return;
}



/* ===== 180077490 FUN_180077490 ===== */

undefined8 * FUN_180077490(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar2 = FUN_180077be0(*param_1);
  *(undefined1 *)(param_1 + 1) = uVar2;
  return param_1;
}



/* ===== 1800774d0 FUN_1800774d0 ===== */

longlong * FUN_1800774d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar8 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar8;
  if (plVar8 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar8[2] = (longlong)param_3;
    if (plVar8 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar8 = (longlong)param_3;
    if (plVar8 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar8 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar8[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar8[1] + 8) + 0x18) = 0;
        plVar8 = *(longlong **)(plVar8[1] + 8);
      }
      else {
        plVar7 = (longlong *)plVar6[2];
        plVar5 = plVar6;
        if (plVar8 == plVar7) {
          plVar6[2] = *plVar7;
          if (*(char *)(*plVar7 + 0x19) == '\0') {
            *(longlong **)(*plVar7 + 8) = plVar6;
          }
          plVar7[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar7;
          }
          else {
            plVar8 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar8) {
              *plVar8 = (longlong)plVar7;
            }
            else {
              plVar8[2] = (longlong)plVar7;
            }
          }
          *plVar7 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar7;
          plVar5 = plVar7;
          plVar8 = plVar6;
        }
        *(undefined1 *)(plVar5 + 3) = 1;
        *(undefined1 *)(*(longlong *)(plVar8[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar8[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar5 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar5[2]) {
            plVar5[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar5 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_18007771d:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar7 = (longlong *)*plVar6;
        if (plVar8 == plVar7) {
          *plVar6 = plVar7[2];
          if (*(char *)(plVar7[2] + 0x19) == '\0') {
            *(longlong **)(plVar7[2] + 8) = plVar6;
          }
          plVar7[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar7;
            plVar7[2] = (longlong)plVar6;
            plVar6[1] = (longlong)plVar7;
            plVar8 = plVar6;
          }
          else {
            puVar4 = (undefined8 *)plVar6[1];
            if (plVar6 == (longlong *)puVar4[2]) {
              puVar4[2] = plVar7;
              plVar7[2] = (longlong)plVar6;
              plVar6[1] = (longlong)plVar7;
              plVar8 = plVar6;
            }
            else {
              *puVar4 = plVar7;
              plVar7[2] = (longlong)plVar6;
              plVar6[1] = (longlong)plVar7;
              plVar8 = plVar6;
            }
          }
        }
        else {
          plVar7 = plVar6;
        }
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(*(longlong *)(plVar8[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar8[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_18007771d;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar8[1] + 8) + 0x18) = 0;
      plVar8 = *(longlong **)(plVar8[1] + 8);
    }
    cVar1 = *(char *)(plVar8[1] + 0x18);
  } while( true );
}



/* ===== 180077750 FUN_180077750 ===== */

ulonglong FUN_180077750(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  ulonglong uVar5;
  
  if (*(longlong *)param_1[7] != 0) {
    piVar2 = (int *)param_1[10];
    iVar1 = *piVar2;
    if (1 < iVar1) {
      *piVar2 = iVar1 + -1;
      plVar3 = (longlong *)param_1[7];
      *plVar3 = *plVar3 + 1;
      return (ulonglong)*(byte *)*plVar3;
    }
    if (0 < iVar1) {
      *piVar2 = iVar1 + -1;
      pbVar4 = *(byte **)param_1[7];
      *(byte **)param_1[7] = pbVar4 + 1;
      uVar5 = (ulonglong)*pbVar4;
      goto LAB_1800777b2;
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x38))(param_1);
LAB_1800777b2:
  if ((int)uVar5 == -1) {
    return uVar5;
  }
  if ((*(byte **)param_1[7] == (byte *)0x0) || (*(int *)param_1[10] < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001800777f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    return uVar5;
  }
  return (ulonglong)**(byte **)param_1[7];
}



/* ===== 180077800 FUN_180077800 ===== */

void FUN_180077800(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1803d64e0(*(longlong *)(param_1 + 8),0x88);
  return;
}



/* ===== 180077830 FUN_180077830 ===== */

undefined8 * FUN_180077830(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
    param_3 = param_3 + 5;
  }
  return param_3;
}



/* ===== 1800778c0 FUN_1800778c0 ===== */

undefined8 * FUN_1800778c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    uVar1 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar1;
    uVar1 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar1;
    *(undefined1 *)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((longlong)param_3 + 0x21) = *(undefined1 *)((longlong)param_1 + 0x21);
    param_3[5] = param_1[5];
    param_3 = param_3 + 6;
  }
  return param_3;
}



/* ===== 180077960 FUN_180077960 ===== */

void FUN_180077960(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_18000f890(lVar2 + 0x20);
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 1800779d0 FUN_1800779d0 ===== */

void FUN_1800779d0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar7 = auStack_28;
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
    FUN_18000f890(lVar6);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x28;
  uVar3 = uVar5;
  if (0xfff < uVar4) {
    uVar3 = *(ulonglong *)(uVar5 - 8);
    uVar5 = (uVar5 - uVar3) - 8;
    if (uVar5 < 0x20) {
      uVar4 = uVar4 + 0x27;
      puVar7 = auStack_28;
    }
    else {
      uVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar7 = auStack_20;
      uVar3 = uVar5;
    }
  }
  *(undefined8 *)(puVar7 + -8) = 0x180077a60;
  thunk_FUN_1803d64e0(uVar3,uVar4);
  return;
}



/* ===== 180077a80 FUN_180077a80 ===== */

void FUN_180077a80(longlong param_1)

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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar3 = *(longlong *)(param_1 + 0x18); lVar3 != lVar1; lVar3 = lVar3 + 0x30) {
    FUN_18000f890(lVar3);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar3 = lVar1;
  if (0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 0x30)) {
    lVar3 = *(longlong *)(lVar1 + -8);
    if ((lVar1 - lVar3) - 8U < 0x20) goto LAB_180077b01;
    lVar3 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar4 = auStack_20;
  }
  puVar5 = puVar4;
LAB_180077b01:
  *(undefined8 *)(puVar5 + -8) = 0x180077b09;
  thunk_FUN_1803d64e0(lVar3);
  return;
}



/* ===== 180077b20 FUN_180077b20 ===== */

void FUN_180077b20(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  for (plVar5 = *(longlong **)(param_1 + 0x18); plVar5 != plVar2; plVar5 = plVar5 + 1) {
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      FUN_1800769f0(lVar3);
      thunk_FUN_1803d64e0(lVar3,0x1c8);
    }
  }
  uVar1 = *(longlong *)(param_1 + 0x10) * 8;
  if (0xfff < uVar1) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    if ((*(longlong *)(param_1 + 8) - lVar3) - 8U < 0x20) {
      thunk_FUN_1803d64e0(lVar3,uVar1 + 0x27);
      return;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
  }
  thunk_FUN_1803d64e0();
  return;
}



/* ===== 180077be0 FUN_180077be0 ===== */

undefined8 FUN_180077be0(longlong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 local_40 [16];
  undefined1 local_30 [40];
  
  lVar4 = (longlong)*(int *)(*param_1 + 4);
  uVar3 = *(uint *)(lVar4 + 0x10 + (longlong)param_1);
  if (uVar3 == 0) {
    if (*(longlong *)(lVar4 + 0x50 + (longlong)param_1) != 0) {
      FUN_18006be00();
    }
    uVar1 = CONCAT71((int7)((ulonglong)*param_1 >> 8),
                     *(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0);
  }
  else {
    uVar1 = 0;
    uVar2 = 4;
    if (*(longlong *)(lVar4 + 0x48 + (longlong)param_1) != 0) {
      uVar2 = 0;
    }
    uVar3 = uVar2 | uVar3 & 0x15 | 2;
    *(uint *)(lVar4 + 0x10 + (longlong)param_1) = uVar3;
    uVar3 = uVar3 & *(uint *)(lVar4 + 0x14 + (longlong)param_1);
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        pcVar5 = "ios_base::failbit set";
        if ((uVar3 & 2) == 0) {
          pcVar5 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar5 = "ios_base::badbit set";
      }
      uVar1 = FUN_18004d7f0(local_40,1);
      FUN_18004e280(local_30,pcVar5,uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_1804ef5f0(local_30,&DAT_180915ec0);
    }
  }
  return uVar1;
}



/* ===== 180077ca0 FUN_180077ca0 ===== */

void FUN_180077ca0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 180077cf0 FUN_180077cf0 ===== */

void FUN_180077cf0(longlong param_1)

{
  FUN_180066ff0(param_1 + 0x58);
  FUN_18000f890(param_1 + 0x38);
  FUN_18000f890(param_1 + 0x18);
  return;
}



/* ===== 180077d30 FUN_180077d30 ===== */

void FUN_180077d30(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar3 = (longlong *)*param_1; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      FUN_1800769f0(lVar2);
      thunk_FUN_1803d64e0(lVar2,0x1c8);
    }
  }
  return;
}



/* ===== 180077d90 FUN_180077d90 ===== */

void FUN_180077d90(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 180077de0 FUN_180077de0 ===== */

void FUN_180077de0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_18000f890(lVar2);
  }
  return;
}



/* ===== 180077e30 FUN_180077e30 ===== */

longlong * FUN_180077e30(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)param_2[2];
  plVar7 = param_2 + 2;
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar8 + 0x19);
    plVar5 = plVar8;
    while (cVar1 == '\0') {
      plVar5 = (longlong *)*plVar5;
      cVar1 = *(char *)(*plVar5 + 0x19);
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar4 = (longlong *)param_2[1];
    plVar6 = param_2;
    while ((plVar5 = plVar4, cVar1 == '\0' && (plVar6 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar4 = (longlong *)plVar5[1];
      plVar6 = plVar5;
    }
  }
  plVar6 = (longlong *)*param_2;
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      plVar8 = (longlong *)plVar5[2];
      if (plVar5 != param_2) {
        plVar6[1] = (longlong)plVar5;
        *plVar5 = *param_2;
        if (plVar5 == (longlong *)*plVar7) {
          plVar6 = plVar5;
        }
        else {
          plVar6 = (longlong *)plVar5[1];
          if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
            plVar8[1] = (longlong)plVar6;
          }
          *plVar6 = (longlong)plVar8;
          plVar5[2] = *plVar7;
          *(longlong **)(*plVar7 + 8) = plVar5;
        }
        if (*(longlong **)(*param_1 + 8) == param_2) {
          *(longlong **)(*param_1 + 8) = plVar5;
        }
        else {
          puVar3 = (undefined8 *)param_2[1];
          if ((longlong *)*puVar3 == param_2) {
            *puVar3 = plVar5;
          }
          else {
            puVar3[2] = plVar5;
          }
        }
        lVar2 = plVar5[3];
        plVar5[1] = param_2[1];
        *(char *)(plVar5 + 3) = (char)param_2[3];
        *(char *)(param_2 + 3) = (char)lVar2;
        goto LAB_180077fc1;
      }
    }
    else {
      plVar8 = plVar6;
    }
  }
  plVar6 = (longlong *)param_2[1];
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    plVar8[1] = (longlong)plVar6;
  }
  if (*(longlong **)(*param_1 + 8) == param_2) {
    *(longlong **)(*param_1 + 8) = plVar8;
  }
  else if ((longlong *)*plVar6 == param_2) {
    *plVar6 = (longlong)plVar8;
  }
  else {
    plVar6[2] = (longlong)plVar8;
  }
  if (*(longlong **)*param_1 == param_2) {
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar7 = plVar8;
      while (cVar1 == '\0') {
        plVar7 = (longlong *)*plVar7;
        cVar1 = *(char *)(*plVar7 + 0x19);
      }
    }
    else {
      plVar7 = plVar6;
    }
    *(longlong **)*param_1 = plVar7;
  }
  lVar2 = *param_1;
  if (*(longlong **)(lVar2 + 0x10) == param_2) {
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar1 = *(char *)(plVar8[2] + 0x19);
      plVar7 = plVar8;
      while (cVar1 == '\0') {
        plVar7 = (longlong *)plVar7[2];
        cVar1 = *(char *)(plVar7[2] + 0x19);
      }
      *(longlong **)(lVar2 + 0x10) = plVar7;
    }
    else {
      *(longlong **)(lVar2 + 0x10) = plVar6;
    }
  }
LAB_180077fc1:
  if ((char)param_2[3] == '\x01') {
    if (plVar8 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar7 = plVar6;
        if ((char)plVar8[3] != '\x01') break;
        plVar5 = (longlong *)*plVar7;
        if (plVar8 == plVar5) {
          plVar5 = (longlong *)plVar7[2];
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            plVar5 = (longlong *)plVar7[2];
            *(undefined1 *)(plVar7 + 3) = 0;
            plVar7[2] = *plVar5;
            if (*(char *)(*plVar5 + 0x19) == '\0') {
              *(longlong **)(*plVar5 + 8) = plVar7;
            }
            plVar5[1] = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar5;
            }
            else {
              puVar3 = (undefined8 *)plVar7[1];
              if (plVar7 == (longlong *)*puVar3) {
                *puVar3 = plVar5;
              }
              else {
                puVar3[2] = plVar5;
              }
            }
            *plVar5 = (longlong)plVar7;
            plVar7[1] = (longlong)plVar5;
            plVar5 = (longlong *)plVar7[2];
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(*plVar5 + 0x18) != '\x01') || (*(char *)(plVar5[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar5[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar5 + 0x18) = 1;
                lVar2 = *plVar5;
                *(undefined1 *)(plVar5 + 3) = 0;
                *plVar5 = *(longlong *)(lVar2 + 0x10);
                if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
                  *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar5;
                }
                *(longlong *)(lVar2 + 8) = plVar5[1];
                if (plVar5 == *(longlong **)(*param_1 + 8)) {
                  *(longlong *)(*param_1 + 8) = lVar2;
                }
                else {
                  plVar6 = (longlong *)plVar5[1];
                  if (plVar5 == (longlong *)plVar6[2]) {
                    plVar6[2] = lVar2;
                  }
                  else {
                    *plVar6 = lVar2;
                  }
                }
                *(longlong **)(lVar2 + 0x10) = plVar5;
                plVar5[1] = lVar2;
                plVar5 = (longlong *)plVar7[2];
              }
              *(char *)(plVar5 + 3) = (char)plVar7[3];
              *(undefined1 *)(plVar7 + 3) = 1;
              *(undefined1 *)(plVar5[2] + 0x18) = 1;
              plVar5 = (longlong *)plVar7[2];
              plVar7[2] = *plVar5;
              if (*(char *)(*plVar5 + 0x19) == '\0') {
                *(longlong **)(*plVar5 + 8) = plVar7;
              }
              plVar5[1] = plVar7[1];
              if (plVar7 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar5;
                *plVar5 = (longlong)plVar7;
              }
              else {
                puVar3 = (undefined8 *)plVar7[1];
                if (plVar7 == (longlong *)*puVar3) {
                  *puVar3 = plVar5;
                  *plVar5 = (longlong)plVar7;
                }
                else {
                  puVar3[2] = plVar5;
                  *plVar5 = (longlong)plVar7;
                }
              }
LAB_18007829a:
              plVar7[1] = (longlong)plVar5;
              break;
            }
LAB_180078141:
            *(undefined1 *)(plVar5 + 3) = 0;
          }
        }
        else {
          if ((char)plVar5[3] == '\0') {
            *(undefined1 *)(plVar5 + 3) = 1;
            lVar2 = *plVar7;
            *(undefined1 *)(plVar7 + 3) = 0;
            *plVar7 = *(longlong *)(lVar2 + 0x10);
            if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar7;
            }
            *(longlong *)(lVar2 + 8) = plVar7[1];
            if (plVar7 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar2;
            }
            else {
              plVar5 = (longlong *)plVar7[1];
              if (plVar7 == (longlong *)plVar5[2]) {
                plVar5[2] = lVar2;
              }
              else {
                *plVar5 = lVar2;
              }
            }
            *(longlong **)(lVar2 + 0x10) = plVar7;
            plVar7[1] = lVar2;
            plVar5 = (longlong *)*plVar7;
          }
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            if ((*(char *)(plVar5[2] + 0x18) != '\x01') || (*(char *)(*plVar5 + 0x18) != '\x01')) {
              if (*(char *)(*plVar5 + 0x18) == '\x01') {
                *(undefined1 *)(plVar5[2] + 0x18) = 1;
                plVar6 = (longlong *)plVar5[2];
                *(undefined1 *)(plVar5 + 3) = 0;
                plVar5[2] = *plVar6;
                if (*(char *)(*plVar6 + 0x19) == '\0') {
                  *(longlong **)(*plVar6 + 8) = plVar5;
                }
                plVar6[1] = plVar5[1];
                if (plVar5 == *(longlong **)(*param_1 + 8)) {
                  *(longlong **)(*param_1 + 8) = plVar6;
                }
                else {
                  puVar3 = (undefined8 *)plVar5[1];
                  if (plVar5 == (longlong *)*puVar3) {
                    *puVar3 = plVar6;
                  }
                  else {
                    puVar3[2] = plVar6;
                  }
                }
                *plVar6 = (longlong)plVar5;
                plVar5[1] = (longlong)plVar6;
                plVar5 = (longlong *)*plVar7;
              }
              *(char *)(plVar5 + 3) = (char)plVar7[3];
              *(undefined1 *)(plVar7 + 3) = 1;
              *(undefined1 *)(*plVar5 + 0x18) = 1;
              plVar5 = (longlong *)*plVar7;
              *plVar7 = plVar5[2];
              if (*(char *)(plVar5[2] + 0x19) == '\0') {
                *(longlong **)(plVar5[2] + 8) = plVar7;
              }
              plVar5[1] = plVar7[1];
              if (plVar7 == *(longlong **)(*param_1 + 8)) {
                *(longlong **)(*param_1 + 8) = plVar5;
              }
              else {
                puVar3 = (undefined8 *)plVar7[1];
                if (plVar7 == (longlong *)puVar3[2]) {
                  puVar3[2] = plVar5;
                }
                else {
                  *puVar3 = plVar5;
                }
              }
              plVar5[2] = (longlong)plVar7;
              goto LAB_18007829a;
            }
            goto LAB_180078141;
          }
        }
        plVar6 = (longlong *)plVar7[1];
        plVar8 = plVar7;
      } while (plVar7 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar8 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



/* ===== 1800782c0 FUN_1800782c0 ===== */

longlong FUN_1800782c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180024b50();
  FUN_180024b50(param_1 + 0x20,param_3);
  return param_1;
}



/* ===== 1800782f8 FUN_1800782f8 ===== */

void FUN_1800782f8(longlong param_1)

{
  FUN_180075f50(param_1 - *(int *)(param_1 + -4));
  return;
}



/* ===== 180078310 FUN_180078310 ===== */

void FUN_180078310(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_18047eb70(param_1,0xffffd8ee,param_2);
  iVar3 = FUN_18047fe10(param_1,0xffffffff);
  if (iVar3 != 5) {
    FUN_18047fb50(param_1,0xfffffffe);
    FUN_18047e8f0(param_1,0,0);
    FUN_18047f610(param_1,0xffffffff);
    FUN_18047f8e0(param_1,0xffffd8ee,param_2);
  }
  lVar2 = *param_3;
  while (lVar2 != 0) {
    FUN_18047f2b0(param_1,param_3[1],0);
    FUN_18047f8e0(param_1,0xfffffffe);
    plVar1 = param_3 + 2;
    param_3 = param_3 + 2;
    lVar2 = *plVar1;
  }
  FUN_18047fb50(param_1,0xfffffffe);
  return;
}



/* ===== 1800783e0 FUN_1800783e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800783e0(undefined8 param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  char **ppcVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  char *local_50;
  char *local_48;
  char *local_40 [3];
  char *local_28 [2];
  
  local_28[0] = (char *)(DAT_180919500 ^ (ulonglong)auStack_78);
  plVar6 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar7 = *plVar6;
  FUN_18047e8f0(param_1,0,0);
  local_40[0] = "C_BasePlayerPawn";
  ppcVar8 = local_40;
  local_40[1] = "C_CSPlayerPawnBase";
  local_40[2] = "C_CSPlayerPawn";
  do {
    uVar2 = FUN_18038eaf0(*ppcVar8,"m_pWeaponServices");
    if (uVar2 != 0) break;
    ppcVar8 = ppcVar8 + 1;
  } while (ppcVar8 != local_28);
  local_50 = "CPlayer_WeaponServices";
  ppcVar8 = &local_50;
  local_48 = "CCSPlayer_WeaponServices";
  do {
    uVar3 = FUN_18038eaf0(*ppcVar8,"m_hMyWeapons");
    if (uVar3 != 0) break;
    ppcVar8 = ppcVar8 + 1;
  } while (ppcVar8 != local_40);
  if (((uVar2 != 0) && (uVar3 != 0)) &&
     (lVar7 = FUN_18000f3a0((ulonglong)uVar2 + lVar7), lVar7 != 0)) {
    iVar4 = FUN_180011200((ulonglong)uVar3 + lVar7);
    lVar7 = FUN_18000f3a0((ulonglong)uVar3 + lVar7 + 8);
    if ((iVar4 - 1U < 0x40) && (lVar7 != 0)) {
      uVar9 = 0;
      iVar10 = 1;
      if (0 < iVar4) {
        do {
          uVar5 = FUN_180011200(lVar7 + uVar9 * 4);
          FUN_1803a0940(&local_58,uVar5);
          lVar1 = local_58;
          if (local_58 != 0) {
            plVar6 = (longlong *)FUN_18047efb0(param_1,8);
            *plVar6 = lVar1;
            FUN_18047eb70(param_1,0xffffd8f0,"wl.entity");
            FUN_18047f990(param_1,0xfffffffe);
            FUN_18047f7e0(param_1,0xfffffffe,iVar10);
            iVar10 = iVar10 + 1;
          }
          uVar2 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar2;
        } while ((int)uVar2 < iVar4);
      }
    }
  }
  return 1;
}



/* ===== 1800785c0 FUN_1800785c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800785c0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  char **ppcVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  char *pcVar17;
  bool bVar18;
  char **ppcVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  float fVar24;
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  uint local_108;
  longlong local_100;
  uint local_f8;
  undefined4 local_f4;
  longlong local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong local_a0 [4];
  char local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_108 = 0;
  plVar11 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  lVar12 = *plVar11;
  local_100 = lVar12;
  if ((lVar12 == 0) || (DAT_1809619a0 == 0)) {
    local_f0 = 0;
    if (lVar12 != 0) goto LAB_180078643;
  }
  else {
    local_f0 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar12);
LAB_180078643:
    if (local_f0 != 0) {
      if (((DAT_1809619a4 == 0) || (DAT_1809619a8 == 0)) || (DAT_180961998 == 0)) {
        local_f8 = 0;
      }
      else {
        uVar3 = FUN_180011440((ulonglong)DAT_1809619a8 + lVar12 + (ulonglong)DAT_180961998 +
                              (ulonglong)DAT_1809619a4);
        local_f8 = (uint)uVar3;
      }
      puVar23 = auStack_128;
      local_e8 = "CCSWeaponBaseVData";
      ppcVar13 = &local_e8;
      do {
        uVar4 = FUN_18038eaf0(*ppcVar13,"m_WeaponType");
        if (uVar4 != 0) goto LAB_1800786c6;
        ppcVar13 = ppcVar13 + 1;
      } while (ppcVar13 != &local_e0);
      uVar4 = 0;
LAB_1800786c6:
      local_d0 = "CBasePlayerWeaponVData";
      local_c8 = "CCSWeaponBaseVData";
      ppcVar13 = &local_d0;
      do {
        uVar5 = FUN_18038eaf0(*ppcVar13,"m_iMaxClip1");
        if (uVar5 != 0) goto LAB_180078706;
        ppcVar13 = ppcVar13 + 1;
      } while (ppcVar13 != &local_c0);
      uVar5 = 0;
LAB_180078706:
      local_e0 = "CCSWeaponBaseVData";
      ppcVar13 = &local_e0;
      do {
        uVar6 = FUN_18038eaf0(*ppcVar13,"m_flMaxSpeed");
        if (uVar6 != 0) goto LAB_180078736;
        ppcVar13 = ppcVar13 + 1;
      } while (ppcVar13 != &local_d8);
      uVar6 = 0;
LAB_180078736:
      local_d8 = "CCSWeaponBaseVData";
      ppcVar13 = &local_d8;
      do {
        uVar7 = FUN_18038eaf0(*ppcVar13,"m_bIsFullAuto");
        if (uVar7 != 0) break;
        ppcVar13 = ppcVar13 + 1;
      } while (ppcVar13 != &local_d0);
      if (uVar4 == 0) {
        local_f4 = 0xffffffff;
      }
      else {
        local_f4 = FUN_180011200((ulonglong)uVar4 + local_f0);
      }
      if (DAT_180961990 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_180011200((ulonglong)DAT_180961990 + lVar12);
      }
      FUN_18047e8f0(param_1,0,0);
      uVar4 = local_f8;
      FUN_18047f4f0(param_1,(double)(int)local_f8);
      FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4970);
      lVar12 = FUN_180280c60(uVar4);
      if (lVar12 == 0) {
        uStack_b8 = 0;
        local_b0 = 0;
        local_a8 = 0xf;
        local_c0 = (char *)0x0;
        ppcVar13 = &local_c0;
        uVar4 = 2;
      }
      else {
        ppcVar13 = (char **)FUN_180024b50(local_80,lVar12 + 8);
        uVar4 = 1;
      }
      if (ppcVar13[3] < (char *)0x10) {
        ppcVar19 = ppcVar13;
      }
      else {
        ppcVar19 = (char **)*ppcVar13;
      }
      local_108 = uVar4;
      FUN_18047f450(param_1,ppcVar19,ppcVar13[2]);
      FUN_18047f8e0(param_1,0xfffffffe,&DAT_18058b644);
      if ((uVar4 & 2) == 0) {
LAB_1800788b7:
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar4 & 0xfffffffe;
          local_108 = uVar4;
          FUN_18000f890(local_80);
        }
        if (lVar12 == 0) goto LAB_1800788ef;
        puVar14 = (ulonglong *)FUN_180024b50(local_80,lVar12 + 0x28);
        uVar4 = uVar4 | 4;
        puVar23 = auStack_128;
      }
      else {
        uVar4 = uVar4 & 0xfffffffd;
        local_108 = uVar4;
        if (local_a8 < 0x10) {
LAB_1800788a3:
          local_b0 = 0;
          local_a8 = 0xf;
          local_c0 = (char *)((ulonglong)local_c0 & 0xffffffffffffff00);
          goto LAB_1800788b7;
        }
        uVar20 = local_a8 + 1;
        pcVar17 = local_c0;
        if (uVar20 < 0x1000) {
LAB_18007889e:
          thunk_FUN_1803d64e0(pcVar17,uVar20);
          goto LAB_1800788a3;
        }
        pcVar17 = *(char **)(local_c0 + -8);
        if (local_c0 + (-8 - (longlong)pcVar17) < (char *)0x20) {
          uVar20 = local_a8 + 0x28;
          goto LAB_18007889e;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar23 = auStack_120;
LAB_1800788ef:
        local_a0[1] = 0;
        local_a0[2] = 0;
        local_a0[3] = 0xf;
        local_a0[0] = 0;
        puVar14 = local_a0;
        uVar4 = uVar4 | 8;
      }
      *(uint *)(puVar23 + 0x20) = uVar4;
      if (puVar14[3] < 0x10) {
        puVar21 = puVar14;
      }
      else {
        puVar21 = (ulonglong *)*puVar14;
      }
      uVar20 = puVar14[2];
      *(undefined8 *)(puVar23 + -8) = 0x180078937;
      FUN_18047f450(param_1,puVar21,uVar20);
      *(undefined8 *)(puVar23 + -8) = 0x18007894b;
      FUN_18047f8e0(param_1,0xfffffffe,"display");
      if ((uVar4 & 8) == 0) {
LAB_1800789a3:
        if ((uVar4 & 4) != 0) {
          *(uint *)(puVar23 + 0x20) = uVar4 & 0xfffffffb;
          *(undefined8 *)(puVar23 + -8) = 0x1800789b8;
          FUN_18000f890(local_80);
        }
        iVar9 = *(int *)(puVar23 + 0x34);
        *(undefined8 *)(puVar23 + -8) = 0x1800789cd;
        FUN_18047f4f0(param_1,(double)iVar9);
        *(undefined8 *)(puVar23 + -8) = 0x1800789e1;
        FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4980);
        *(undefined8 *)(puVar23 + -8) = 0x1800789f5;
        FUN_18047f270(param_1,iVar9 - 1U < 6);
        *(undefined8 *)(puVar23 + -8) = 0x180078a09;
        FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4988);
        *(undefined8 *)(puVar23 + -8) = 0x180078a19;
        FUN_18047f4f0(param_1,(double)iVar8);
        *(undefined8 *)(puVar23 + -8) = 0x180078a2d;
        FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e498c);
        if (DAT_180961994 == 0) goto LAB_180078a4e;
        lVar12 = *(longlong *)(puVar23 + 0x28);
        *(undefined8 *)(puVar23 + -8) = 0x180078a45;
        iVar9 = FUN_180011200((ulonglong)DAT_180961994 + lVar12);
      }
      else {
        uVar4 = uVar4 & 0xfffffff7;
        *(uint *)(puVar23 + 0x20) = uVar4;
        if (local_a0[3] < 0x10) {
LAB_180078993:
          local_a0[2] = 0;
          local_a0[3] = 0xf;
          local_a0[0] = local_a0[0] & 0xffffffffffffff00;
          goto LAB_1800789a3;
        }
        uVar22 = local_a0[3] + 1;
        uVar20 = local_a0[0];
        if (uVar22 < 0x1000) {
LAB_18007898e:
          *(undefined8 *)(puVar23 + -8) = 0x180078993;
          thunk_FUN_1803d64e0(uVar20,uVar22);
          goto LAB_180078993;
        }
        uVar20 = *(ulonglong *)(local_a0[0] - 8);
        if ((local_a0[0] - uVar20) - 8 < 0x20) {
          uVar22 = local_a0[3] + 0x28;
          goto LAB_18007898e;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar23 = puVar23 + 8;
LAB_180078a4e:
        iVar9 = 0;
        lVar12 = *(longlong *)(puVar23 + 0x28);
      }
      *(undefined8 *)(puVar23 + -8) = 0x180078a66;
      FUN_18047f4f0(param_1,(double)iVar9);
      *(undefined8 *)(puVar23 + -8) = 0x180078a7a;
      FUN_18047f8e0(param_1,0xfffffffe,"reserve");
      lVar15 = *(longlong *)(puVar23 + 0x38);
      if (uVar5 == 0) {
        iVar9 = 0;
      }
      else {
        *(undefined8 *)(puVar23 + -8) = 0x180078a8f;
        iVar9 = FUN_180011200((ulonglong)uVar5 + lVar15);
      }
      *(undefined8 *)(puVar23 + -8) = 0x180078aaa;
      FUN_18047f4f0(param_1,(double)iVar9);
      *(undefined8 *)(puVar23 + -8) = 0x180078abe;
      FUN_18047f8e0(param_1,0xfffffffe,"max_clip");
      fVar24 = 0.0;
      if (uVar6 != 0) {
        *(undefined8 *)(puVar23 + -8) = 0x180078ad1;
        fVar24 = (float)FUN_18000f3d0((ulonglong)uVar6 + lVar15);
      }
      *(undefined8 *)(puVar23 + -8) = 0x180078ae0;
      FUN_18047f4f0(param_1,(double)fVar24);
      *(undefined8 *)(puVar23 + -8) = 0x180078af4;
      FUN_18047f8e0(param_1,0xfffffffe,"max_speed");
      if (uVar7 == 0) {
LAB_180078b0d:
        uVar16 = 0;
      }
      else {
        *(undefined8 *)(puVar23 + -8) = 0x180078b04;
        cVar2 = FUN_180011220((ulonglong)uVar7 + lVar15);
        uVar16 = 1;
        if (cVar2 == '\0') goto LAB_180078b0d;
      }
      *(undefined8 *)(puVar23 + -8) = 0x180078b18;
      FUN_18047f270(param_1,uVar16);
      *(undefined8 *)(puVar23 + -8) = 0x180078b2c;
      FUN_18047f8e0(param_1,0xfffffffe,"full_auto");
      if (DAT_180cd1304 == '\0') {
        *(undefined8 *)(puVar23 + -8) = 0x180078b48;
        FUN_1803a0b60(puVar23 + 0x28);
        lVar15 = *(longlong *)(puVar23 + 0x28);
      }
      else {
        lVar15 = DAT_181108a00;
      }
      bVar18 = 0 < iVar8;
      if (0 < iVar8) {
        bVar18 = 0 < iVar8;
        uVar20 = (ulonglong)DAT_18096199c;
        if (DAT_18096199c != 0) {
          bVar18 = 0 < iVar8;
          if ((DAT_180ca09b8 != 0) && (bVar18 = 0 < iVar8, lVar15 != 0)) {
            *(undefined8 *)(puVar23 + -8) = 0x180078b92;
            iVar8 = FUN_180011200((ulonglong)DAT_180ca09b8 + lVar15,bVar18);
            *(undefined8 *)(puVar23 + -8) = 0x180078b9e;
            iVar9 = FUN_180011200(uVar20 + lVar12);
            bVar18 = iVar9 <= iVar8 + 1;
          }
        }
      }
      *(undefined8 *)(puVar23 + -8) = 0x180078bae;
      FUN_18047f270(param_1,bVar18);
      *(undefined8 *)(puVar23 + -8) = 0x180078bc2;
      FUN_18047f8e0(param_1,0xfffffffe,"can_shoot");
      if (DAT_180cd1304 == '\0') {
        *(undefined8 *)(puVar23 + -8) = 0x180078bde;
        FUN_1803a0b60(puVar23 + 0x28);
        DAT_181108a00 = *(longlong *)(puVar23 + 0x28);
        *(undefined8 *)(puVar23 + -8) = 0x180078bf4;
        DAT_1811089f8 = FUN_1803a0c50(puVar23 + 0x28);
        DAT_180cd1304 = '\x01';
      }
      *(longlong *)(puVar23 + 0x28) = DAT_1811089f8;
      local_80[0] = '\0';
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_64 = 1;
      local_5c = 0;
      local_54 = 0;
      if (((DAT_1811089f8 != 0) && (DAT_180ca0a0c != 0)) &&
         (uVar20 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 != 0)) {
        *(undefined8 *)(puVar23 + -8) = 0x180078c58;
        lVar15 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + DAT_1811089f8);
        if (lVar15 != 0) {
          *(undefined8 *)(puVar23 + -8) = 0x180078c66;
          uVar10 = FUN_180011200(lVar15 + uVar20);
          *(undefined8 *)(puVar23 + -8) = 0x180078c72;
          plVar11 = (longlong *)FUN_1803a0940(puVar23 + 0x38,uVar10);
          if (*plVar11 == lVar12) {
            *(undefined8 *)(puVar23 + -8) = 0x180078c85;
            cVar2 = FUN_1802ad2f0(puVar23 + 0x28,local_80);
            if ((cVar2 != '\0') && (local_80[0] != '\0')) {
              *(undefined8 *)(puVar23 + -8) = 0x180078c9f;
              FUN_18047f4f0(param_1,(double)(float)local_5c);
              *(undefined8 *)(puVar23 + -8) = 0x180078cb3;
              FUN_18047f8e0(param_1,0xfffffffe,"inaccuracy");
              *(undefined8 *)(puVar23 + -8) = 0x180078cc3;
              FUN_18047f4f0(param_1,(double)local_5c._4_4_);
              *(undefined8 *)(puVar23 + -8) = 0x180078cd7;
              FUN_18047f8e0(param_1,0xfffffffe,"spread");
            }
          }
        }
      }
      uVar16 = 1;
      goto LAB_180078ce0;
    }
  }
  puVar23 = auStack_128;
  uVar16 = 0;
LAB_180078ce0:
  *(undefined8 *)(puVar23 + -8) = 0x180078cec;
  return uVar16;
}



/* ===== 180078d00 FUN_180078d00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180078d00(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 ****ppppuVar13;
  int *piVar14;
  int iVar15;
  undefined1 auStack_7a8 [32];
  undefined8 local_788;
  float local_780;
  undefined1 local_778 [888];
  undefined8 ****local_400 [2];
  undefined8 local_3f0;
  ulonglong local_3e8;
  int local_3d8 [220];
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_7a8;
  plVar6 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar6 == 0) || (DAT_180ca09f8 == 0)) {
    FUN_18047e8f0(param_1,0,0);
  }
  else {
    lVar7 = FUN_18000f3a0(*plVar6 + (ulonglong)DAT_180ca09f8);
    FUN_18047e8f0(param_1,0,0);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)FUN_1803a1e60(local_778,lVar7);
      lVar11 = 6;
      piVar14 = local_3d8;
      do {
        piVar10 = piVar14;
        puVar9 = puVar8;
        uVar2 = puVar9[1];
        *(undefined8 *)piVar10 = *puVar9;
        *(undefined8 *)(piVar10 + 2) = uVar2;
        uVar2 = puVar9[3];
        *(undefined8 *)(piVar10 + 4) = puVar9[2];
        *(undefined8 *)(piVar10 + 6) = uVar2;
        uVar2 = puVar9[5];
        *(undefined8 *)(piVar10 + 8) = puVar9[4];
        *(undefined8 *)(piVar10 + 10) = uVar2;
        uVar2 = puVar9[7];
        *(undefined8 *)(piVar10 + 0xc) = puVar9[6];
        *(undefined8 *)(piVar10 + 0xe) = uVar2;
        uVar2 = puVar9[9];
        *(undefined8 *)(piVar10 + 0x10) = puVar9[8];
        *(undefined8 *)(piVar10 + 0x12) = uVar2;
        uVar2 = puVar9[0xb];
        *(undefined8 *)(piVar10 + 0x14) = puVar9[10];
        *(undefined8 *)(piVar10 + 0x16) = uVar2;
        uVar2 = puVar9[0xd];
        *(undefined8 *)(piVar10 + 0x18) = puVar9[0xc];
        *(undefined8 *)(piVar10 + 0x1a) = uVar2;
        uVar2 = puVar9[0xf];
        *(undefined8 *)(piVar10 + 0x1c) = puVar9[0xe];
        *(undefined8 *)(piVar10 + 0x1e) = uVar2;
        lVar11 = lVar11 + -1;
        puVar8 = puVar9 + 0x10;
        piVar14 = piVar10 + 0x20;
      } while (lVar11 != 0);
      uVar2 = puVar9[0x11];
      *(undefined8 *)(piVar10 + 0x20) = puVar9[0x10];
      *(undefined8 *)(piVar10 + 0x22) = uVar2;
      uVar2 = puVar9[0x13];
      *(undefined8 *)(piVar10 + 0x24) = puVar9[0x12];
      *(undefined8 *)(piVar10 + 0x26) = uVar2;
      uVar2 = puVar9[0x15];
      *(undefined8 *)(piVar10 + 0x28) = puVar9[0x14];
      *(undefined8 *)(piVar10 + 0x2a) = uVar2;
      uVar2 = puVar9[0x17];
      *(undefined8 *)(piVar10 + 0x2c) = puVar9[0x16];
      *(undefined8 *)(piVar10 + 0x2e) = uVar2;
      uVar2 = puVar9[0x19];
      *(undefined8 *)(piVar10 + 0x30) = puVar9[0x18];
      *(undefined8 *)(piVar10 + 0x32) = uVar2;
      uVar2 = puVar9[0x1b];
      *(undefined8 *)(piVar10 + 0x34) = puVar9[0x1a];
      *(undefined8 *)(piVar10 + 0x36) = uVar2;
      iVar15 = *(int *)((longlong)puVar9 + 0xe4);
      iVar3 = *(int *)(puVar9 + 0x1d);
      iVar4 = *(int *)((longlong)puVar9 + 0xec);
      piVar10[0x38] = *(int *)(puVar9 + 0x1c);
      piVar10[0x39] = iVar15;
      piVar10[0x3a] = iVar3;
      piVar10[0x3b] = iVar4;
      piVar10[0x3c] = *(int *)(puVar9 + 0x1e);
      iVar15 = 1;
      piVar14 = local_3d8;
      if ((longlong)local_68 * 0x2c != 0) {
        do {
          local_788 = 0;
          local_780 = 0.0;
          cVar5 = FUN_1803a2190(lVar7,piVar14,&local_788);
          if (cVar5 != '\0') {
            FUN_18047e8f0(param_1,0,0);
            FUN_18047f4f0(param_1,(double)*piVar14);
            FUN_18047f8e0(param_1,0xfffffffe,"index");
            uVar1 = piVar14[2];
            FUN_18047f4f0(param_1,(double)(int)uVar1);
            FUN_18047f8e0(param_1,0xfffffffe,"group");
            if (uVar1 < 9) {
              pcVar12 = (&PTR_s_generic_18089faa0)[(int)uVar1];
            }
            else {
              pcVar12 = "generic";
            }
            FUN_180013350(local_400,pcVar12);
            ppppuVar13 = local_400;
            if (0xf < local_3e8) {
              ppppuVar13 = local_400[0];
            }
            FUN_18047f450(param_1,ppppuVar13,local_3f0);
            FUN_18047f8e0(param_1,0xfffffffe,"group_name");
            FUN_18000f890(local_400);
            FUN_18047f4f0(param_1,(double)(float)piVar14[9]);
            FUN_18047f8e0(param_1,0xfffffffe,"radius");
            FUN_18047f4f0(param_1,(double)piVar14[1]);
            FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e0c5c);
            FUN_18047f4f0(param_1,(double)*(byte *)(piVar14 + 10));
            FUN_18047f8e0(param_1,0xfffffffe,"shape");
            FUN_18047f270(param_1,*(undefined1 *)((longlong)piVar14 + 0x29));
            FUN_18047f8e0(param_1,0xfffffffe,"translation_only");
            FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
            lVar11 = FUN_18047fd90(param_1,0xffffffff);
            FUN_18047fb50(param_1,0xfffffffe);
            uVar2 = *(undefined8 *)(lVar11 + 0x40);
            FUN_18047f6f0(uVar2,0xffffd8f0,*(undefined4 *)(lVar11 + 0x140));
            FUN_18047f4f0(uVar2,(double)(float)local_788);
            FUN_18047f4f0(uVar2,(double)local_788._4_4_);
            FUN_18047f4f0(uVar2,(double)local_780);
            FUN_18047e730(uVar2,3,1);
            FUN_18047f8e0(param_1,0xfffffffe,"center");
            FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
            lVar11 = FUN_18047fd90(param_1,0xffffffff);
            FUN_18047fb50(param_1,0xfffffffe);
            uVar2 = *(undefined8 *)(lVar11 + 0x40);
            FUN_18047f6f0(uVar2,0xffffd8f0,*(undefined4 *)(lVar11 + 0x140));
            FUN_18047f4f0(uVar2,(double)(float)piVar14[3]);
            FUN_18047f4f0(uVar2,(double)(float)piVar14[4]);
            FUN_18047f4f0(uVar2,(double)(float)piVar14[5]);
            FUN_18047e730(uVar2,3,1);
            FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4a3c);
            FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
            lVar11 = FUN_18047fd90(param_1,0xffffffff);
            FUN_18047fb50(param_1,0xfffffffe);
            uVar2 = *(undefined8 *)(lVar11 + 0x40);
            FUN_18047f6f0(uVar2,0xffffd8f0,*(undefined4 *)(lVar11 + 0x140));
            FUN_18047f4f0(uVar2,(double)(float)piVar14[6]);
            FUN_18047f4f0(uVar2,(double)(float)piVar14[7]);
            FUN_18047f4f0(uVar2,(double)(float)piVar14[8]);
            FUN_18047e730(uVar2,3,1);
            FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4a44);
            FUN_18047f7e0(param_1,0xfffffffe,iVar15);
            iVar15 = iVar15 + 1;
          }
          piVar14 = piVar14 + 0xb;
        } while (piVar14 != local_3d8 + (longlong)local_68 * 0xb);
      }
    }
  }
  return 1;
}



/* ===== 180079210 FUN_180079210 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180079210(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  longlong lVar21;
  int *piVar22;
  undefined1 auStack_748 [32];
  undefined8 local_728;
  float local_720;
  undefined1 local_718 [896];
  int local_398 [220];
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_748;
  plVar16 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
  if ((*plVar16 == 0) || (DAT_180ca09f8 == 0)) {
    FUN_18047e010(param_1,2);
  }
  else {
    lVar17 = FUN_18000f3a0(*plVar16 + (ulonglong)DAT_180ca09f8);
    iVar15 = FUN_18047e010(param_1,2);
    if (lVar17 != 0) {
      puVar18 = (undefined8 *)FUN_1803a1e60(local_718,lVar17);
      lVar21 = 6;
      piVar22 = local_398;
      do {
        piVar20 = piVar22;
        puVar19 = puVar18;
        uVar2 = puVar19[1];
        uVar11 = puVar19[2];
        uVar12 = puVar19[3];
        *(undefined8 *)piVar20 = *puVar19;
        *(undefined8 *)(piVar20 + 2) = uVar2;
        uVar2 = puVar19[4];
        uVar13 = puVar19[5];
        *(undefined8 *)(piVar20 + 4) = uVar11;
        *(undefined8 *)(piVar20 + 6) = uVar12;
        uVar11 = puVar19[6];
        uVar12 = puVar19[7];
        *(undefined8 *)(piVar20 + 8) = uVar2;
        *(undefined8 *)(piVar20 + 10) = uVar13;
        uVar2 = puVar19[8];
        uVar13 = puVar19[9];
        *(undefined8 *)(piVar20 + 0xc) = uVar11;
        *(undefined8 *)(piVar20 + 0xe) = uVar12;
        uVar11 = puVar19[10];
        uVar12 = puVar19[0xb];
        *(undefined8 *)(piVar20 + 0x10) = uVar2;
        *(undefined8 *)(piVar20 + 0x12) = uVar13;
        uVar2 = puVar19[0xc];
        uVar13 = puVar19[0xd];
        *(undefined8 *)(piVar20 + 0x14) = uVar11;
        *(undefined8 *)(piVar20 + 0x16) = uVar12;
        uVar11 = puVar19[0xe];
        uVar12 = puVar19[0xf];
        *(undefined8 *)(piVar20 + 0x18) = uVar2;
        *(undefined8 *)(piVar20 + 0x1a) = uVar13;
        *(undefined8 *)(piVar20 + 0x1c) = uVar11;
        *(undefined8 *)(piVar20 + 0x1e) = uVar12;
        lVar21 = lVar21 + -1;
        puVar18 = puVar19 + 0x10;
        piVar22 = piVar20 + 0x20;
      } while (lVar21 != 0);
      uVar2 = puVar19[0x11];
      piVar22 = local_398;
      uVar11 = puVar19[0x12];
      uVar12 = puVar19[0x13];
      *(undefined8 *)(piVar20 + 0x20) = puVar19[0x10];
      *(undefined8 *)(piVar20 + 0x22) = uVar2;
      uVar2 = puVar19[0x14];
      uVar13 = puVar19[0x15];
      *(undefined8 *)(piVar20 + 0x24) = uVar11;
      *(undefined8 *)(piVar20 + 0x26) = uVar12;
      uVar11 = puVar19[0x16];
      uVar12 = puVar19[0x17];
      *(undefined8 *)(piVar20 + 0x28) = uVar2;
      *(undefined8 *)(piVar20 + 0x2a) = uVar13;
      uVar2 = puVar19[0x18];
      uVar13 = puVar19[0x19];
      *(undefined8 *)(piVar20 + 0x2c) = uVar11;
      *(undefined8 *)(piVar20 + 0x2e) = uVar12;
      iVar3 = *(int *)(puVar19 + 0x1a);
      iVar4 = *(int *)((longlong)puVar19 + 0xd4);
      iVar5 = *(int *)(puVar19 + 0x1b);
      iVar6 = *(int *)((longlong)puVar19 + 0xdc);
      *(undefined8 *)(piVar20 + 0x30) = uVar2;
      *(undefined8 *)(piVar20 + 0x32) = uVar13;
      iVar7 = *(int *)(puVar19 + 0x1c);
      iVar8 = *(int *)((longlong)puVar19 + 0xe4);
      iVar9 = *(int *)(puVar19 + 0x1d);
      iVar10 = *(int *)((longlong)puVar19 + 0xec);
      iVar1 = *(int *)(puVar19 + 0x1e);
      piVar20[0x34] = iVar3;
      piVar20[0x35] = iVar4;
      piVar20[0x36] = iVar5;
      piVar20[0x37] = iVar6;
      piVar20[0x38] = iVar7;
      piVar20[0x39] = iVar8;
      piVar20[0x3a] = iVar9;
      piVar20[0x3b] = iVar10;
      piVar20[0x3c] = iVar1;
      if ((longlong)local_28 * 0x2c != 0) {
        do {
          if (*piVar22 == iVar15) {
            local_728 = 0;
            local_720 = 0.0;
            cVar14 = FUN_1803a2190(lVar17,iVar3,&local_728);
            if (cVar14 == '\0') {
              return 0;
            }
            FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
            lVar17 = FUN_18047fd90(param_1,0xffffffff);
            FUN_18047fb50(param_1,0xfffffffe);
            uVar2 = *(undefined8 *)(lVar17 + 0x40);
            FUN_18047f6f0(uVar2,0xffffd8f0,*(undefined4 *)(lVar17 + 0x140));
            FUN_18047f4f0(uVar2,SUB84((double)(float)local_728,0));
            FUN_18047f4f0(uVar2,SUB84((double)local_728._4_4_,0));
            FUN_18047f4f0(uVar2,SUB84((double)local_720,0));
            FUN_18047e730(uVar2,3,1);
            return 1;
          }
          piVar22 = piVar22 + 0xb;
        } while (piVar22 != local_398 + (longlong)local_28 * 0xb);
      }
    }
  }
  return 0;
}



/* ===== 180079460 FUN_180079460 ===== */

undefined8 FUN_180079460(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char **ppcVar4;
  char *local_18;
  char *local_10;
  
  local_18 = "C_BaseEntity";
  ppcVar4 = &local_18;
  do {
    uVar1 = FUN_18038eaf0(*ppcVar4,"m_fFlags");
    if (uVar1 != 0) {
      plVar3 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
      uVar2 = FUN_180011200((ulonglong)uVar1 + *plVar3);
      goto LAB_1800794d8;
    }
    ppcVar4 = ppcVar4 + 1;
  } while (ppcVar4 != &local_10);
  uVar2 = 0;
LAB_1800794d8:
  FUN_18047f3d0(param_1,uVar2);
  return 1;
}



/* ===== 180079500 FUN_180079500 ===== */

undefined8 FUN_180079500(undefined8 param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char **ppcVar5;
  char *local_18;
  char *local_10;
  
  local_18 = "C_BaseEntity";
  ppcVar5 = &local_18;
  do {
    uVar1 = FUN_18038eaf0(*ppcVar5,"m_fFlags");
    if (uVar1 != 0) {
      plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
      uVar3 = FUN_180011200((ulonglong)uVar1 + *plVar2);
      if ((uVar3 & 1) != 0) {
        uVar4 = 1;
        goto LAB_180079555;
      }
      break;
    }
    ppcVar5 = ppcVar5 + 1;
  } while (ppcVar5 != &local_10);
  uVar4 = 0;
LAB_180079555:
  FUN_18047f270(param_1,uVar4);
  return 1;
}



/* ===== 1800795a0 FUN_1800795a0 ===== */

undefined8 FUN_1800795a0(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (DAT_180ca0a28 != 0) {
    plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.entity");
    cVar1 = FUN_180011220((ulonglong)DAT_180ca0a28 + *plVar2);
    if (cVar1 != '\0') {
      FUN_18047f270(param_1,1);
      return 1;
    }
  }
  FUN_18047f270(param_1,0);
  return 1;
}



/* ===== 180079610 FUN_180079610 ===== */

undefined8 FUN_180079610(void)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  char **ppcVar7;
  longlong local_res8;
  char *local_18;
  char *local_10;
  
  local_18 = "C_CSGameRulesProxy";
  ppcVar7 = &local_18;
  while( true ) {
    uVar1 = FUN_18038eaf0(*ppcVar7,"m_pGameRules");
    if (uVar1 != 0) break;
    ppcVar7 = ppcVar7 + 1;
    if (ppcVar7 == &local_10) {
      return 0;
    }
  }
  if (DAT_180ccfad8 != 0) {
    local_res8 = DAT_180ccfad8;
    pcVar3 = (char *)FUN_1803a0710(&local_res8);
    if (pcVar3 != (char *)0x0) {
      iVar2 = strcmp(pcVar3,"C_CSGameRulesProxy");
      if (iVar2 == 0) goto LAB_180079749;
    }
  }
  DAT_180ccfad8 = 0;
  uVar6 = 0;
  do {
    lVar4 = FUN_18000f3a0(DAT_1809619d0);
    if (lVar4 != 0) {
      lVar4 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                            lVar4 + (ulonglong)(uint)(((int)uVar6 >> 9) * DAT_180961944));
      if (lVar4 - 0x10000U < 0xfffffffffffeffff) {
        lVar4 = FUN_18000f3a0((ulonglong)((uVar6 & 0x1ff) * DAT_180961948) + lVar4);
        if (lVar4 - 0x10000U < 0xfffffffffffeffff) {
          local_res8 = lVar4;
          pcVar3 = (char *)FUN_1803a0710(&local_res8);
          if (pcVar3 != (char *)0x0) {
            iVar2 = strcmp(pcVar3,"C_CSGameRulesProxy");
            if (iVar2 == 0) {
              DAT_180ccfad8 = lVar4;
              goto LAB_180079750;
            }
          }
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x200);
LAB_180079749:
LAB_180079750:
  if (DAT_180ccfad8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_18000f3a0(DAT_180ccfad8 + (ulonglong)uVar1);
  }
  return uVar5;
}



/* ===== 180079780 FUN_180079780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180079780(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined1 auStack_58 [32];
  undefined8 ***local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_58;
  FUN_1800f1bd0(local_38);
  pppuVar1 = local_38;
  if (0xf < local_20) {
    pppuVar1 = local_38[0];
  }
  FUN_18047f450(param_1,pppuVar1,local_28);
  FUN_18000f890(local_38);
  return 1;
}



/* ===== 1800797f0 FUN_1800797f0 ===== */

undefined8 FUN_1800797f0(undefined8 param_1)

{
  FUN_18047f270(param_1,DAT_180962434);
  return 1;
}



/* ===== 180079810 FUN_180079810 ===== */

undefined8 FUN_180079810(undefined8 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_18007dd80("m_bWarmupPeriod");
  FUN_18047f270(param_1,uVar1);
  return 1;
}



/* ===== 180079840 FUN_180079840 ===== */

undefined8 FUN_180079840(undefined8 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_18007dd80("m_bFreezePeriod");
  FUN_18047f270(param_1,uVar1);
  return 1;
}



/* ===== 180079870 FUN_180079870 ===== */

undefined8 FUN_180079870(undefined8 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_18007dd80("m_bBombPlanted");
  FUN_18047f270(param_1,uVar1);
  return 1;
}



/* ===== 1800798a0 FUN_1800798a0 ===== */

undefined8 FUN_1800798a0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_18007de10("m_totalRoundsPlayed");
  FUN_18047f3d0(param_1,(longlong)iVar1);
  return 1;
}



/* ===== 1800798d0 FUN_1800798d0 ===== */

undefined8 FUN_1800798d0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char **ppcVar4;
  float fVar5;
  float fVar6;
  char *local_38;
  char *local_30 [5];
  
  lVar2 = FUN_180079610();
  ppcVar4 = &local_38;
  local_38 = "C_CSGameRules";
  do {
    uVar1 = FUN_18038eaf0(*ppcVar4,"m_fRoundStartTime");
    if (uVar1 != 0) goto LAB_180079923;
    ppcVar4 = ppcVar4 + 1;
  } while (ppcVar4 != local_30);
  uVar1 = 0;
LAB_180079923:
  if ((lVar2 == 0) || (uVar1 == 0)) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)FUN_18000f3d0((ulonglong)uVar1 + lVar2);
  }
  uVar3 = FUN_18007de10("m_iRoundTime");
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if ((DAT_180961a50 == 0) || (lVar2 = FUN_18000f3a0(), lVar2 == 0)) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)FUN_18000f3d0(lVar2 + 0x30);
  }
  fVar6 = ((float)(int)uVar3 + fVar5) - fVar6;
  fVar5 = 0.0;
  if (0.0 <= fVar6) {
    fVar5 = fVar6;
  }
  FUN_18047f4f0(param_1,(double)fVar5);
  return 1;
}



/* ===== 1800799c0 FUN_1800799c0 ===== */

undefined8 FUN_1800799c0(undefined8 param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_18007dd80("m_bHasMatchStarted");
  FUN_18047f270(param_1,uVar1);
  return 1;
}



/* ===== 1800799f0 FUN_1800799f0 ===== */

undefined8 FUN_1800799f0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180961a50 != 0) {
    lVar2 = FUN_18000f3a0();
    if (lVar2 != 0) {
      iVar1 = FUN_180011200((ulonglong)DAT_180961958 + lVar2);
      goto LAB_180079a21;
    }
  }
  iVar1 = 0;
LAB_180079a21:
  FUN_18047f3d0(param_1,(longlong)iVar1);
  return 1;
}



/* ===== 180079a40 FUN_180079a40 ===== */

undefined8 FUN_180079a40(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180961a50 != 0) {
    lVar2 = FUN_18000f3a0();
    if (lVar2 != 0) {
      iVar1 = FUN_180011200((ulonglong)DAT_180961960 + lVar2);
      goto LAB_180079a71;
    }
  }
  iVar1 = 0;
LAB_180079a71:
  FUN_18047f3d0(param_1,(longlong)iVar1);
  return 1;
}



/* ===== 180079a90 FUN_180079a90 ===== */

undefined8 FUN_180079a90(undefined8 param_1)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res10 [6];
  float local_68 [4];
  longlong local_58 [8];
  
  plVar4 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cmd");
  lVar1 = *plVar4;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa10)) {
    FUN_180484c10(param_1,"a command is only valid inside its createmove callback");
  }
  dVar2 = (double)FUN_18047e140(param_1,2);
  lVar8 = 0;
  if ((lVar1 != 0) && (lVar7 = *(longlong *)(lVar1 + 0x40), lVar7 - 0x10000U < 0x7ffffffeffff)) {
    if (0x7ffffffefffe < *(longlong *)(lVar7 + 0x40) - 0x10000U) {
      lVar7 = 0;
    }
    lVar8 = lVar7;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res10);
    DAT_181108a00 = CONCAT44(local_res10[1],local_res10[0]);
    DAT_1811089f8 = FUN_1803a0c50(local_res10);
    DAT_180cd1304 = '\x01';
  }
  if ((lVar8 != 0) && (DAT_1811089f8 != 0)) {
    fVar12 = ((*(float *)(*(longlong *)(lVar8 + 0x40) + 0x1c) - (float)dVar2) * DAT_1808ac680) /
             DAT_1808acb58;
    local_58[0] = DAT_1811089f8;
    fVar10 = (float)FUN_180517790(fVar12);
    fVar11 = (float)FUN_180517200(fVar12);
    fVar12 = DAT_1808acda0;
    local_res10[4] = 1.0;
    local_res10[0] = -1.0;
    fVar13 = fVar11 * *(float *)(lVar8 + 0x58) - fVar10 * *(float *)(lVar8 + 0x5c);
    local_68[2] = 1.0;
    local_68[0] = -1.0;
    fVar10 = fVar10 * *(float *)(lVar8 + 0x58) + fVar11 * *(float *)(lVar8 + 0x5c);
    local_res10[2] = fVar10;
    local_68[1] = fVar13;
    iVar3 = FUN_18047fbf0(param_1,3);
    pfVar5 = local_res10;
    if (fVar12 <= fVar10) {
      pfVar5 = local_res10 + 2;
    }
    pfVar9 = local_res10 + 4;
    if (fVar10 <= DAT_1808ac34c) {
      pfVar9 = pfVar5;
    }
    pfVar5 = local_68;
    if (fVar12 <= fVar13) {
      pfVar5 = local_68 + 1;
    }
    pfVar6 = local_68 + 2;
    if (fVar13 <= DAT_1808ac34c) {
      pfVar6 = pfVar5;
    }
    FUN_1802afee0(lVar1,local_58,*pfVar6,*pfVar9,iVar3 != 0);
  }
  return 0;
}



/* ===== 180079cc0 FUN_180079cc0 ===== */

undefined8 FUN_180079cc0(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  undefined1 local_48 [64];
  
  plVar5 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar7 = *plVar5;
  if ((lVar7 == 0) || (lVar7 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  pfVar6 = (float *)FUN_1800111b0(local_48,(ulonglong)DAT_180961ff0 + lVar7);
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar7 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar4 = *(undefined8 *)(lVar7 + 0x40);
  FUN_18047f6f0(uVar4,0xffffd8f0,*(undefined4 *)(lVar7 + 0x140));
  FUN_18047f4f0(uVar4,(double)fVar1);
  FUN_18047f4f0(uVar4,(double)fVar2);
  FUN_18047f4f0(uVar4,(double)fVar3);
  FUN_18047e730(uVar4,3,1);
  return 1;
}



/* ===== 180079dd0 FUN_180079dd0 ===== */

undefined8 FUN_180079dd0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  puVar3 = (undefined8 *)FUN_180063d70(local_18,param_1,2);
  local_28 = *puVar3;
  local_20 = *(undefined4 *)(puVar3 + 1);
  FUN_180023a50((ulonglong)DAT_180961ff0 + lVar1,&local_28);
  return 0;
}



/* ===== 180079e60 FUN_180079e60 ===== */

undefined8 FUN_180079e60(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  undefined1 local_48 [64];
  
  plVar5 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar7 = *plVar5;
  if ((lVar7 == 0) || (lVar7 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  pfVar6 = (float *)FUN_1800111b0(local_48,(ulonglong)DAT_180961ff4 + lVar7);
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  FUN_18047eb70(param_1,0xffffd8f0,"wl_state");
  lVar7 = FUN_18047fd90(param_1,0xffffffff);
  FUN_18047fb50(param_1,0xfffffffe);
  uVar4 = *(undefined8 *)(lVar7 + 0x40);
  FUN_18047f6f0(uVar4,0xffffd8f0,*(undefined4 *)(lVar7 + 0x140));
  FUN_18047f4f0(uVar4,(double)fVar1);
  FUN_18047f4f0(uVar4,(double)fVar2);
  FUN_18047f4f0(uVar4,(double)fVar3);
  FUN_18047e730(uVar4,3,1);
  return 1;
}



/* ===== 180079f70 FUN_180079f70 ===== */

undefined8 FUN_180079f70(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  puVar3 = (undefined8 *)FUN_180063d70(local_18,param_1,2);
  local_28 = *puVar3;
  local_20 = *(undefined4 *)(puVar3 + 1);
  FUN_180023a50((ulonglong)DAT_180961ff4 + lVar1,&local_28);
  return 0;
}



/* ===== 18007a000 FUN_18007a000 ===== */

undefined8 FUN_18007a000(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  
  plVar2 = (longlong *)FUN_18047e2c0(param_1,1,"wl.view");
  lVar1 = *plVar2;
  if ((lVar1 == 0) || (lVar1 != DAT_180ccfa80)) {
    FUN_180484c10(param_1,"the view is only valid inside its override_view callback");
  }
  fVar3 = (float)FUN_18000f3d0(lVar1 + 0x4d4);
  FUN_18047f4f0(param_1,(double)fVar3);
  return 1;
}



/* ===== 18007a070 FUN_18007a070 ===== */

undefined8 FUN_18007a070(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_18047e2c0(param_1,1,"wl.cvar");
  if (*plVar1 != 0) {
    lVar2 = FUN_18000f3a0();
    if (lVar2 - 0x10000U < 0x7ffffffeffff) {
      FUN_18047f530(param_1,lVar2);
      return 1;
    }
  }
  return 0;
}



/* ===== 18007a0d0 FUN_18007a0d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_18007a0d0(undefined8 param_1)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8 [5];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
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
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_e8;
  uVar3 = FUN_18047e510(param_1,1,"%Y-%m-%d %H:%M:%S",0);
  iVar2 = FUN_18047edb0(param_1,2);
  if (iVar2 == 0) {
    local_c8[0] = FUN_180512a60(0);
  }
  else {
    dVar1 = (double)FUN_18047fd30(param_1,2);
    local_c8[0] = (longlong)dVar1;
  }
  local_a0 = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[4] = 0;
  iVar2 = thunk_FUN_1805121e4(local_c8 + 1,local_c8);
  if (iVar2 == 0) {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
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
    uVar3 = FUN_180512a44(&local_98,0x80,uVar3,local_c8 + 1);
    FUN_18047f450(param_1,&local_98,uVar3);
  }
  return iVar2 == 0;
}



/* ===== 18007a1f0 FUN_18007a1f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007a1f0(undefined8 param_1)

{
  undefined8 *puVar1;
  float fVar2;
  char cVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_f8 [32];
  undefined8 ****local_d8 [2];
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 ****local_b8 [2];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_f8;
  FUN_18047e8f0(param_1,0,0);
  pcVar9 = &DAT_18095d530;
  do {
    if (*pcVar9 != '\0') {
      FUN_18047e8f0(param_1,0,0);
      FUN_180013350(local_d8,pcVar9);
      ppppuVar6 = local_d8;
      if (0xf < local_c0) {
        ppppuVar6 = local_d8[0];
      }
      FUN_18047f450(param_1,ppppuVar6,local_c8);
      FUN_18047f8e0(param_1,0xfffffffe,"field");
      FUN_18000f890(local_d8);
      FUN_18047f4f0(param_1,(double)*(int *)(pcVar9 + 0x60));
      FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e4b1c);
      puVar4 = (undefined8 *)FUN_1801c6760(local_78,*(undefined4 *)(pcVar9 + 0x60));
      puVar1 = puVar4 + 2;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_18047f450(param_1,puVar4,*puVar1);
      FUN_18047f8e0(param_1,0xfffffffe,"key_name");
      FUN_18000f890(local_78);
      if (*(int *)(pcVar9 + 100) == 1) {
        pcVar5 = "toggle";
      }
      else if (*(int *)(pcVar9 + 100) == 2) {
        pcVar5 = "always";
      }
      else {
        pcVar5 = "hold";
      }
      FUN_180013350(local_b8,pcVar5);
      ppppuVar6 = local_b8;
      if (0xf < local_a0) {
        ppppuVar6 = local_b8[0];
      }
      FUN_18047f450(param_1,ppppuVar6,local_a8);
      FUN_18047f8e0(param_1,0xfffffffe,&DAT_1806e044c);
      FUN_18000f890(local_b8);
      FUN_18047f270(param_1,pcVar9[0x68]);
      FUN_18047f8e0(param_1,0xfffffffe,"value");
      FUN_18047f4f0(param_1,(double)*(float *)(pcVar9 + 0x6c));
      FUN_18047f8e0(param_1,0xfffffffe,"number");
      fVar2 = *(float *)(pcVar9 + 0x6c);
      FUN_180013350(local_98,pcVar9);
      uVar8 = 0;
      do {
        if (((((&DAT_18095d530)[uVar8 * 0xe4] != '\0') &&
             ((float)(&DAT_18095d59c)[uVar8 * 0x39] == fVar2)) &&
            (cVar3 = FUN_180023400(local_98,&DAT_18095d530 + uVar8 * 0xe4), cVar3 != '\0')) &&
           ((&DAT_180cd1320)[uVar8] != '\0')) {
          uVar7 = 1;
          goto LAB_18007a437;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x40);
      uVar7 = 0;
LAB_18007a437:
      FUN_18047f270(param_1,uVar7);
      FUN_18047f8e0(param_1,0xfffffffe,"active");
      FUN_18000f890(local_98);
      FUN_18047f7e0(param_1);
    }
    pcVar9 = pcVar9 + 0xe4;
    if (pcVar9 == &DAT_180960e30) {
      return 1;
    }
  } while( true );
}



/* ===== 18007a4c0 FUN_18007a4c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18007a4c0(undefined8 param_1)

{
  int iVar1;
  float *pfVar2;
  double dVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int ****ppppiVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 ****ppppuVar15;
  longlong lVar16;
  char *pcVar17;
  ulonglong uVar18;
  undefined8 ****ppppuVar19;
  undefined4 uVar20;
  char cVar21;
  float fVar22;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined1 local_1a8 [112];
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_b8;
  undefined8 ****local_a8 [2];
  ulonglong local_98;
  ulonglong local_90;
  int ****local_88 [2];
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1d8;
  uVar8 = 1;
  uVar9 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_a8,uVar9);
  uVar20 = 2;
  local_1b0 = FUN_18047e010(param_1,2);
  iVar6 = FUN_18047fe10(param_1,3);
  if (0 < iVar6) {
    uVar9 = FUN_18047e090(param_1,3,0);
    FUN_180013350(local_88,uVar9);
    ppppiVar10 = (int ****)local_88;
    if (0xf < local_70) {
      ppppiVar10 = local_88[0];
    }
    if ((local_78 == 4) && (*(int *)ppppiVar10 == 0x646c6f68)) {
      FUN_18000f890();
    }
    else {
      ppppiVar10 = (int ****)local_88;
      if (0xf < local_70) {
        ppppiVar10 = local_88[0];
      }
      if (local_78 == 6) {
        iVar6 = *(int *)ppppiVar10 + -0x67676f74;
        if (iVar6 == 0) {
          iVar6 = *(ushort *)((longlong)ppppiVar10 + 4) - 0x656c;
        }
        if (iVar6 == 0) {
          FUN_18000f890();
          uVar20 = 1;
          goto LAB_18007a62a;
        }
      }
      ppppiVar10 = (int ****)local_88;
      if (0xf < local_70) {
        ppppiVar10 = local_88[0];
      }
      if (local_78 == 6) {
        iVar6 = *(int *)ppppiVar10 + -0x61776c61;
        if (iVar6 == 0) {
          iVar6 = *(ushort *)((longlong)ppppiVar10 + 4) - 0x7379;
        }
        if (iVar6 == 0) {
          FUN_18000f890();
          goto LAB_18007a62a;
        }
      }
      ppppiVar10 = (int ****)local_88;
      if (0xf < local_70) {
        ppppiVar10 = local_88[0];
      }
      FUN_180484c10(param_1,"bad bind mode \'%s\' (hold, toggle or always)",ppppiVar10);
      FUN_18000f890();
    }
  }
  uVar20 = 0;
LAB_18007a62a:
  if (DAT_180cc3e19 == '\0') {
    DAT_180cc3e19 = '\x01';
    FUN_1800ff4a0(local_1b8,&DAT_18091a190);
  }
  uVar4 = local_90;
  ppppuVar19 = local_a8[0];
  ppppuVar15 = local_a8;
  if (0xf < local_90) {
    ppppuVar15 = local_a8[0];
  }
  uVar13 = 0;
  uVar18 = 0xcbf29ce484222325;
  if (local_98 != 0) {
    do {
      uVar18 = (uVar18 ^ *(byte *)((longlong)ppppuVar15 + uVar13)) * 0x100000001b3;
      uVar13 = uVar13 + 1;
    } while (uVar13 < local_98);
  }
  lVar11 = FUN_18014a630(uVar13,local_1a8,local_a8,uVar18);
  lVar16 = DAT_180cd12c8;
  if (*(longlong *)(lVar11 + 8) != 0) {
    lVar16 = *(longlong *)(lVar11 + 8);
  }
  if ((lVar16 == DAT_180cd12c8) || (pfVar2 = *(float **)(lVar16 + 0x30), pfVar2 == (float *)0x0)) {
    ppppuVar15 = local_a8;
    if (0xf < uVar4) {
      ppppuVar15 = ppppuVar19;
    }
    uVar8 = FUN_180484c10(param_1,"unknown setting \'%s\'",ppppuVar15);
  }
  else {
    iVar6 = *(int *)(lVar16 + 0x38);
    fVar22 = 0.0;
    if (iVar6 == 1) {
      iVar6 = FUN_18047fe10(param_1,4);
      if ((iVar6 < 1) || (iVar6 = FUN_18047fbf0(param_1,4), iVar6 != 0)) {
        cVar21 = '\x01';
      }
      else {
        cVar21 = '\0';
      }
    }
    else {
      iVar1 = *(int *)(lVar16 + 0x3c);
      cVar21 = '\x01';
      iVar7 = FUN_18047edb0();
      if (iVar7 == 0) {
        if (iVar6 == 1) {
          if (*(char *)pfVar2 != '\0') {
            fVar22 = DAT_1808ac34c;
          }
        }
        else if (iVar6 == 2) {
          fVar22 = (float)(int)*pfVar2;
        }
        else if (iVar6 == 3) {
          fVar22 = *pfVar2;
        }
        else if (iVar6 == 4) {
          uVar14 = 0;
          uVar12 = 0;
          if (0 < iVar1) {
            do {
              if (0x17 < (int)uVar12) break;
              if (*(char *)((longlong)pfVar2 + (longlong)(int)uVar12) != '\0') {
                uVar14 = uVar14 | 1 << (uVar12 & 0x1f);
              }
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < iVar1);
          }
          fVar22 = (float)(int)uVar14;
        }
      }
      else {
        dVar3 = (double)FUN_18047fd30(param_1,4);
        fVar22 = (float)dVar3;
      }
    }
    pcVar17 = &DAT_18095d530;
    do {
      if (((*pcVar17 != '\0') && (*(float *)(pcVar17 + 0x6c) == fVar22)) &&
         (cVar5 = FUN_180023400(local_a8,pcVar17), cVar5 != '\0')) goto LAB_18007a8a1;
      pcVar17 = pcVar17 + 0xe4;
    } while (pcVar17 != &DAT_180960e30);
    if (local_98 < 0x60) {
      pcVar17 = &DAT_18095d530;
      do {
        if (*pcVar17 == '\0') {
          local_138 = 0;
          uStack_130 = CONCAT31(uStack_130._1_3_,1);
          uStack_12c = 0;
          local_b8 = CONCAT22(local_b8._2_2_,0x100);
          pcVar17[0] = '\0';
          pcVar17[1] = '\0';
          pcVar17[2] = '\0';
          pcVar17[3] = '\0';
          pcVar17[4] = '\0';
          pcVar17[5] = '\0';
          pcVar17[6] = '\0';
          pcVar17[7] = '\0';
          pcVar17[8] = '\0';
          pcVar17[9] = '\0';
          pcVar17[10] = '\0';
          pcVar17[0xb] = '\0';
          pcVar17[0xc] = '\0';
          pcVar17[0xd] = '\0';
          pcVar17[0xe] = '\0';
          pcVar17[0xf] = '\0';
          pcVar17[0x10] = '\0';
          pcVar17[0x11] = '\0';
          pcVar17[0x12] = '\0';
          pcVar17[0x13] = '\0';
          pcVar17[0x14] = '\0';
          pcVar17[0x15] = '\0';
          pcVar17[0x16] = '\0';
          pcVar17[0x17] = '\0';
          pcVar17[0x18] = '\0';
          pcVar17[0x19] = '\0';
          pcVar17[0x1a] = '\0';
          pcVar17[0x1b] = '\0';
          pcVar17[0x1c] = '\0';
          pcVar17[0x1d] = '\0';
          pcVar17[0x1e] = '\0';
          pcVar17[0x1f] = '\0';
          pcVar17[0x20] = '\0';
          pcVar17[0x21] = '\0';
          pcVar17[0x22] = '\0';
          pcVar17[0x23] = '\0';
          pcVar17[0x24] = '\0';
          pcVar17[0x25] = '\0';
          pcVar17[0x26] = '\0';
          pcVar17[0x27] = '\0';
          pcVar17[0x28] = '\0';
          pcVar17[0x29] = '\0';
          pcVar17[0x2a] = '\0';
          pcVar17[0x2b] = '\0';
          pcVar17[0x2c] = '\0';
          pcVar17[0x2d] = '\0';
          pcVar17[0x2e] = '\0';
          pcVar17[0x2f] = '\0';
          pcVar17[0x30] = '\0';
          pcVar17[0x31] = '\0';
          pcVar17[0x32] = '\0';
          pcVar17[0x33] = '\0';
          pcVar17[0x34] = '\0';
          pcVar17[0x35] = '\0';
          pcVar17[0x36] = '\0';
          pcVar17[0x37] = '\0';
          pcVar17[0x38] = '\0';
          pcVar17[0x39] = '\0';
          pcVar17[0x3a] = '\0';
          pcVar17[0x3b] = '\0';
          pcVar17[0x3c] = '\0';
          pcVar17[0x3d] = '\0';
          pcVar17[0x3e] = '\0';
          pcVar17[0x3f] = '\0';
          pcVar17[0x40] = '\0';
          pcVar17[0x41] = '\0';
          pcVar17[0x42] = '\0';
          pcVar17[0x43] = '\0';
          pcVar17[0x44] = '\0';
          pcVar17[0x45] = '\0';
          pcVar17[0x46] = '\0';
          pcVar17[0x47] = '\0';
          pcVar17[0x48] = '\0';
          pcVar17[0x49] = '\0';
          pcVar17[0x4a] = '\0';
          pcVar17[0x4b] = '\0';
          pcVar17[0x4c] = '\0';
          pcVar17[0x4d] = '\0';
          pcVar17[0x4e] = '\0';
          pcVar17[0x4f] = '\0';
          pcVar17[0x50] = '\0';
          pcVar17[0x51] = '\0';
          pcVar17[0x52] = '\0';
          pcVar17[0x53] = '\0';
          pcVar17[0x54] = '\0';
          pcVar17[0x55] = '\0';
          pcVar17[0x56] = '\0';
          pcVar17[0x57] = '\0';
          pcVar17[0x58] = '\0';
          pcVar17[0x59] = '\0';
          pcVar17[0x5a] = '\0';
          pcVar17[0x5b] = '\0';
          pcVar17[0x5c] = '\0';
          pcVar17[0x5d] = '\0';
          pcVar17[0x5e] = '\0';
          pcVar17[0x5f] = '\0';
          pcVar17[0x60] = '\0';
          pcVar17[0x61] = '\0';
          pcVar17[0x62] = '\0';
          pcVar17[99] = '\0';
          pcVar17[100] = '\0';
          pcVar17[0x65] = '\0';
          pcVar17[0x66] = '\0';
          pcVar17[0x67] = '\0';
          *(undefined4 *)(pcVar17 + 0x68) = uStack_130;
          pcVar17[0x6c] = '\0';
          pcVar17[0x6d] = '\0';
          pcVar17[0x6e] = '\0';
          pcVar17[0x6f] = '\0';
          pcVar17[0x70] = '\0';
          pcVar17[0x71] = '\0';
          pcVar17[0x72] = '\0';
          pcVar17[0x73] = '\0';
          pcVar17[0x74] = '\0';
          pcVar17[0x75] = '\0';
          pcVar17[0x76] = '\0';
          pcVar17[0x77] = '\0';
          pcVar17[0x78] = '\0';
          pcVar17[0x79] = '\0';
          pcVar17[0x7a] = '\0';
          pcVar17[0x7b] = '\0';
          pcVar17[0x7c] = '\0';
          pcVar17[0x7d] = '\0';
          pcVar17[0x7e] = '\0';
          pcVar17[0x7f] = '\0';
          pcVar17[0x80] = '\0';
          pcVar17[0x81] = '\0';
          pcVar17[0x82] = '\0';
          pcVar17[0x83] = '\0';
          pcVar17[0x84] = '\0';
          pcVar17[0x85] = '\0';
          pcVar17[0x86] = '\0';
          pcVar17[0x87] = '\0';
          pcVar17[0x88] = '\0';
          pcVar17[0x89] = '\0';
          pcVar17[0x8a] = '\0';
          pcVar17[0x8b] = '\0';
          pcVar17[0x8c] = '\0';
          pcVar17[0x8d] = '\0';
          pcVar17[0x8e] = '\0';
          pcVar17[0x8f] = '\0';
          pcVar17[0x90] = '\0';
          pcVar17[0x91] = '\0';
          pcVar17[0x92] = '\0';
          pcVar17[0x93] = '\0';
          pcVar17[0x94] = '\0';
          pcVar17[0x95] = '\0';
          pcVar17[0x96] = '\0';
          pcVar17[0x97] = '\0';
          pcVar17[0x98] = '\0';
          pcVar17[0x99] = '\0';
          pcVar17[0x9a] = '\0';
          pcVar17[0x9b] = '\0';
          pcVar17[0x9c] = '\0';
          pcVar17[0x9d] = '\0';
          pcVar17[0x9e] = '\0';
          pcVar17[0x9f] = '\0';
          pcVar17[0xa0] = '\0';
          pcVar17[0xa1] = '\0';
          pcVar17[0xa2] = '\0';
          pcVar17[0xa3] = '\0';
          pcVar17[0xa4] = '\0';
          pcVar17[0xa5] = '\0';
          pcVar17[0xa6] = '\0';
          pcVar17[0xa7] = '\0';
          pcVar17[0xa8] = '\0';
          pcVar17[0xa9] = '\0';
          pcVar17[0xaa] = '\0';
          pcVar17[0xab] = '\0';
          pcVar17[0xac] = '\0';
          pcVar17[0xad] = '\0';
          pcVar17[0xae] = '\0';
          pcVar17[0xaf] = '\0';
          pcVar17[0xb0] = '\0';
          pcVar17[0xb1] = '\0';
          pcVar17[0xb2] = '\0';
          pcVar17[0xb3] = '\0';
          pcVar17[0xb4] = '\0';
          pcVar17[0xb5] = '\0';
          pcVar17[0xb6] = '\0';
          pcVar17[0xb7] = '\0';
          pcVar17[0xb8] = '\0';
          pcVar17[0xb9] = '\0';
          pcVar17[0xba] = '\0';
          pcVar17[0xbb] = '\0';
          pcVar17[0xbc] = '\0';
          pcVar17[0xbd] = '\0';
          pcVar17[0xbe] = '\0';
          pcVar17[0xbf] = '\0';
          pcVar17[0xc0] = '\0';
          pcVar17[0xc1] = '\0';
          pcVar17[0xc2] = '\0';
          pcVar17[0xc3] = '\0';
          pcVar17[0xc4] = '\0';
          pcVar17[0xc5] = '\0';
          pcVar17[0xc6] = '\0';
          pcVar17[199] = '\0';
          pcVar17[200] = '\0';
          pcVar17[0xc9] = '\0';
          pcVar17[0xca] = '\0';
          pcVar17[0xcb] = '\0';
          pcVar17[0xcc] = '\0';
          pcVar17[0xcd] = '\0';
          pcVar17[0xce] = '\0';
          pcVar17[0xcf] = '\0';
          pcVar17[0xd0] = '\0';
          pcVar17[0xd1] = '\0';
          pcVar17[0xd2] = '\0';
          pcVar17[0xd3] = '\0';
          pcVar17[0xd4] = '\0';
          pcVar17[0xd5] = '\0';
          pcVar17[0xd6] = '\0';
          pcVar17[0xd7] = '\0';
          pcVar17[0xd8] = '\0';
          pcVar17[0xd9] = '\0';
          pcVar17[0xda] = '\0';
          pcVar17[0xdb] = '\0';
          pcVar17[0xdc] = '\0';
          pcVar17[0xdd] = '\0';
          pcVar17[0xde] = '\0';
          pcVar17[0xdf] = '\0';
          *(undefined4 *)(pcVar17 + 0xe0) = local_b8;
          ppppuVar19 = local_a8;
          if (0xf < local_90) {
            ppppuVar19 = local_a8[0];
          }
          snprintf(pcVar17,0x60,&DAT_1806d3198,ppppuVar19);
          *(float *)(pcVar17 + 0x6c) = fVar22;
LAB_18007a8a1:
          *(int *)(pcVar17 + 0x60) = (int)local_1b0;
          *(undefined4 *)(pcVar17 + 100) = uVar20;
          pcVar17[0x68] = cVar21;
          FUN_18047f270(param_1,1);
          goto LAB_18007a8dc;
        }
        pcVar17 = pcVar17 + 0xe4;
      } while (pcVar17 != &DAT_180960e30);
    }
    uVar8 = FUN_180484c10(param_1,"no free bind slots");
  }
LAB_18007a8dc:
  FUN_18000f890(local_a8);
  return uVar8;
}



/* ===== 18007a920 FUN_18007a920 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007a920(undefined8 param_1)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_158 [128];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_58;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_158;
  dVar1 = (double)FUN_18047e5f0(param_1,2);
  uVar3 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_48,uVar3);
  pcVar4 = &DAT_18095d530;
  while (((*pcVar4 == '\0' || (*(float *)(pcVar4 + 0x6c) != (float)dVar1)) ||
         (cVar2 = FUN_180023400(local_48,pcVar4), cVar2 == '\0'))) {
    pcVar4 = pcVar4 + 0xe4;
    if (pcVar4 == &DAT_180960e30) {
LAB_18007aa53:
      FUN_18000f890(local_48);
      return 0;
    }
  }
  local_d8 = 0;
  uStack_d0 = CONCAT31(uStack_d0._1_3_,1);
  uStack_cc = 0;
  local_58 = CONCAT22(local_58._2_2_,0x100);
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[2] = '\0';
  pcVar4[3] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  pcVar4[8] = '\0';
  pcVar4[9] = '\0';
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  pcVar4[0xc] = '\0';
  pcVar4[0xd] = '\0';
  pcVar4[0xe] = '\0';
  pcVar4[0xf] = '\0';
  pcVar4[0x10] = '\0';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  pcVar4[0x18] = '\0';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  pcVar4[0x20] = '\0';
  pcVar4[0x21] = '\0';
  pcVar4[0x22] = '\0';
  pcVar4[0x23] = '\0';
  pcVar4[0x24] = '\0';
  pcVar4[0x25] = '\0';
  pcVar4[0x26] = '\0';
  pcVar4[0x27] = '\0';
  pcVar4[0x28] = '\0';
  pcVar4[0x29] = '\0';
  pcVar4[0x2a] = '\0';
  pcVar4[0x2b] = '\0';
  pcVar4[0x2c] = '\0';
  pcVar4[0x2d] = '\0';
  pcVar4[0x2e] = '\0';
  pcVar4[0x2f] = '\0';
  pcVar4[0x30] = '\0';
  pcVar4[0x31] = '\0';
  pcVar4[0x32] = '\0';
  pcVar4[0x33] = '\0';
  pcVar4[0x34] = '\0';
  pcVar4[0x35] = '\0';
  pcVar4[0x36] = '\0';
  pcVar4[0x37] = '\0';
  pcVar4[0x38] = '\0';
  pcVar4[0x39] = '\0';
  pcVar4[0x3a] = '\0';
  pcVar4[0x3b] = '\0';
  pcVar4[0x3c] = '\0';
  pcVar4[0x3d] = '\0';
  pcVar4[0x3e] = '\0';
  pcVar4[0x3f] = '\0';
  pcVar4[0x40] = '\0';
  pcVar4[0x41] = '\0';
  pcVar4[0x42] = '\0';
  pcVar4[0x43] = '\0';
  pcVar4[0x44] = '\0';
  pcVar4[0x45] = '\0';
  pcVar4[0x46] = '\0';
  pcVar4[0x47] = '\0';
  pcVar4[0x48] = '\0';
  pcVar4[0x49] = '\0';
  pcVar4[0x4a] = '\0';
  pcVar4[0x4b] = '\0';
  pcVar4[0x4c] = '\0';
  pcVar4[0x4d] = '\0';
  pcVar4[0x4e] = '\0';
  pcVar4[0x4f] = '\0';
  pcVar4[0x50] = '\0';
  pcVar4[0x51] = '\0';
  pcVar4[0x52] = '\0';
  pcVar4[0x53] = '\0';
  pcVar4[0x54] = '\0';
  pcVar4[0x55] = '\0';
  pcVar4[0x56] = '\0';
  pcVar4[0x57] = '\0';
  pcVar4[0x58] = '\0';
  pcVar4[0x59] = '\0';
  pcVar4[0x5a] = '\0';
  pcVar4[0x5b] = '\0';
  pcVar4[0x5c] = '\0';
  pcVar4[0x5d] = '\0';
  pcVar4[0x5e] = '\0';
  pcVar4[0x5f] = '\0';
  pcVar4[0x60] = '\0';
  pcVar4[0x61] = '\0';
  pcVar4[0x62] = '\0';
  pcVar4[99] = '\0';
  pcVar4[100] = '\0';
  pcVar4[0x65] = '\0';
  pcVar4[0x66] = '\0';
  pcVar4[0x67] = '\0';
  *(undefined4 *)(pcVar4 + 0x68) = uStack_d0;
  pcVar4[0x6c] = '\0';
  pcVar4[0x6d] = '\0';
  pcVar4[0x6e] = '\0';
  pcVar4[0x6f] = '\0';
  pcVar4[0x70] = '\0';
  pcVar4[0x71] = '\0';
  pcVar4[0x72] = '\0';
  pcVar4[0x73] = '\0';
  pcVar4[0x74] = '\0';
  pcVar4[0x75] = '\0';
  pcVar4[0x76] = '\0';
  pcVar4[0x77] = '\0';
  pcVar4[0x78] = '\0';
  pcVar4[0x79] = '\0';
  pcVar4[0x7a] = '\0';
  pcVar4[0x7b] = '\0';
  pcVar4[0x7c] = '\0';
  pcVar4[0x7d] = '\0';
  pcVar4[0x7e] = '\0';
  pcVar4[0x7f] = '\0';
  pcVar4[0x80] = '\0';
  pcVar4[0x81] = '\0';
  pcVar4[0x82] = '\0';
  pcVar4[0x83] = '\0';
  pcVar4[0x84] = '\0';
  pcVar4[0x85] = '\0';
  pcVar4[0x86] = '\0';
  pcVar4[0x87] = '\0';
  pcVar4[0x88] = '\0';
  pcVar4[0x89] = '\0';
  pcVar4[0x8a] = '\0';
  pcVar4[0x8b] = '\0';
  pcVar4[0x8c] = '\0';
  pcVar4[0x8d] = '\0';
  pcVar4[0x8e] = '\0';
  pcVar4[0x8f] = '\0';
  pcVar4[0x90] = '\0';
  pcVar4[0x91] = '\0';
  pcVar4[0x92] = '\0';
  pcVar4[0x93] = '\0';
  pcVar4[0x94] = '\0';
  pcVar4[0x95] = '\0';
  pcVar4[0x96] = '\0';
  pcVar4[0x97] = '\0';
  pcVar4[0x98] = '\0';
  pcVar4[0x99] = '\0';
  pcVar4[0x9a] = '\0';
  pcVar4[0x9b] = '\0';
  pcVar4[0x9c] = '\0';
  pcVar4[0x9d] = '\0';
  pcVar4[0x9e] = '\0';
  pcVar4[0x9f] = '\0';
  pcVar4[0xa0] = '\0';
  pcVar4[0xa1] = '\0';
  pcVar4[0xa2] = '\0';
  pcVar4[0xa3] = '\0';
  pcVar4[0xa4] = '\0';
  pcVar4[0xa5] = '\0';
  pcVar4[0xa6] = '\0';
  pcVar4[0xa7] = '\0';
  pcVar4[0xa8] = '\0';
  pcVar4[0xa9] = '\0';
  pcVar4[0xaa] = '\0';
  pcVar4[0xab] = '\0';
  pcVar4[0xac] = '\0';
  pcVar4[0xad] = '\0';
  pcVar4[0xae] = '\0';
  pcVar4[0xaf] = '\0';
  pcVar4[0xb0] = '\0';
  pcVar4[0xb1] = '\0';
  pcVar4[0xb2] = '\0';
  pcVar4[0xb3] = '\0';
  pcVar4[0xb4] = '\0';
  pcVar4[0xb5] = '\0';
  pcVar4[0xb6] = '\0';
  pcVar4[0xb7] = '\0';
  pcVar4[0xb8] = '\0';
  pcVar4[0xb9] = '\0';
  pcVar4[0xba] = '\0';
  pcVar4[0xbb] = '\0';
  pcVar4[0xbc] = '\0';
  pcVar4[0xbd] = '\0';
  pcVar4[0xbe] = '\0';
  pcVar4[0xbf] = '\0';
  pcVar4[0xc0] = '\0';
  pcVar4[0xc1] = '\0';
  pcVar4[0xc2] = '\0';
  pcVar4[0xc3] = '\0';
  pcVar4[0xc4] = '\0';
  pcVar4[0xc5] = '\0';
  pcVar4[0xc6] = '\0';
  pcVar4[199] = '\0';
  pcVar4[200] = '\0';
  pcVar4[0xc9] = '\0';
  pcVar4[0xca] = '\0';
  pcVar4[0xcb] = '\0';
  pcVar4[0xcc] = '\0';
  pcVar4[0xcd] = '\0';
  pcVar4[0xce] = '\0';
  pcVar4[0xcf] = '\0';
  pcVar4[0xd0] = '\0';
  pcVar4[0xd1] = '\0';
  pcVar4[0xd2] = '\0';
  pcVar4[0xd3] = '\0';
  pcVar4[0xd4] = '\0';
  pcVar4[0xd5] = '\0';
  pcVar4[0xd6] = '\0';
  pcVar4[0xd7] = '\0';
  pcVar4[0xd8] = '\0';
  pcVar4[0xd9] = '\0';
  pcVar4[0xda] = '\0';
  pcVar4[0xdb] = '\0';
  pcVar4[0xdc] = '\0';
  pcVar4[0xdd] = '\0';
  pcVar4[0xde] = '\0';
  pcVar4[0xdf] = '\0';
  *(undefined4 *)(pcVar4 + 0xe0) = local_58;
  goto LAB_18007aa53;
}



/* ===== 18007aa90 FUN_18007aa90 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18007aa90(undefined8 param_1)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  dVar1 = (double)FUN_18047e5f0(param_1,2,0);
  uVar3 = FUN_18047e090(param_1,1,0);
  FUN_180013350(local_48,uVar3);
  uVar4 = 0;
  while (((((&DAT_18095d530)[uVar4 * 0xe4] == '\0' ||
           ((float)(&DAT_18095d59c)[uVar4 * 0x39] != (float)dVar1)) ||
          (cVar2 = FUN_180023400(local_48,&DAT_18095d530 + uVar4 * 0xe4), cVar2 == '\0')) ||
         ((&DAT_180cd1320)[uVar4] == '\0'))) {
    uVar4 = uVar4 + 1;
    if (0x3f < uVar4) {
      uVar3 = 0;
LAB_18007ab41:
      FUN_18047f270(param_1,uVar3);
      FUN_18000f890(local_48);
      return 1;
    }
  }
  uVar3 = 1;
  goto LAB_18007ab41;
}



/* ===== 18007ab90 FUN_18007ab90 ===== */

undefined8 FUN_18007ab90(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_18;
  char local_10;
  
  iVar1 = FUN_18047e010(param_1,1);
  if (iVar1 - 1U < 0xff) {
    iVar1 = *(int *)(&DAT_180cd1368 + (longlong)iVar1 * 4);
  }
  else {
    iVar1 = 0;
  }
  FUN_18007df30();
  if ((local_10 == '\0') && (*(int *)(local_18 + 0x18) != iVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(int *)(local_18 + 0x18) = iVar1;
  FUN_18047f270(param_1,uVar2);
  return 1;
}



