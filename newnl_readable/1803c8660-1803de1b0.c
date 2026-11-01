/* ===== 1803c8660 FUN_1803c8660 ===== */

undefined8 * FUN_1803c8660(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



/* ===== 1803c8670 FUN_1803c8670 ===== */

void FUN_1803c8670(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  iVar1 = 0;
  do {
    local_res18[0] = (undefined1)(param_2 >> ((byte)iVar1 & 0x1f));
    FUN_1803ca250(*param_1,local_res18);
    iVar1 = iVar1 + 8;
  } while (iVar1 != 0x20);
  return;
}



/* ===== 1803c86c0 FUN_1803c86c0 ===== */

void FUN_1803c86c0(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  undefined1 local_res18 [16];
  
  iVar1 = 0;
  do {
    local_res18[0] = (undefined1)(param_2 >> ((byte)iVar1 & 0x3f));
    FUN_1803ca250(*param_1,local_res18);
    iVar1 = iVar1 + 8;
  } while (iVar1 != 0x40);
  return;
}



/* ===== 1803c8720 FUN_1803c8720 ===== */

void FUN_1803c8720(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined2 local_res8 [16];
  
  local_res8[0] = 0xb848;
  FUN_180211af0(*(longlong *)*param_1,*(undefined8 *)(*(longlong *)*param_1 + 8),local_res8,2);
  puVar1 = (undefined8 *)param_1[1];
  iVar2 = 0;
  do {
    local_res8[0] = CONCAT11(local_res8[0]._1_1_,(char)(param_2 >> ((byte)iVar2 & 0x3f)));
    FUN_1803ca250(*puVar1,local_res8);
    iVar2 = iVar2 + 8;
  } while (iVar2 != 0x40);
  local_res8[0] = 0xd0ff;
  FUN_180211af0(*(longlong *)*param_1,*(undefined8 *)(*(longlong *)*param_1 + 8),local_res8,2);
  return;
}



/* ===== 1803c87b0 FUN_1803c87b0 ===== */

void FUN_1803c87b0(void)

{
  code *pcVar1;
  
  FUN_1801d07d0();
  FUN_1803c8190();
  FUN_1802b2400();
  if (DAT_181111830 != (PRUNTIME_FUNCTION)0x0) {
    RtlDeleteFunctionTable(DAT_181111830);
  }
  Sleep(200);
  FUN_1803c83a0();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 1803c87f0 FUN_1803c87f0 ===== */

void FUN_1803c87f0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  char *_Str;
  undefined *puVar5;
  
  puVar5 = PTR_DAT_1809f3760;
  iVar3 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee40c == 0x7fffffff) {
    DAT_1809ee40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_1809ee2f0 = 1;
  _Str = "";
  if (puVar5 != (undefined *)0x0) {
    _Str = puVar5;
  }
  sVar4 = strlen(_Str);
  FUN_180029840(&DAT_1809ee2f8,_Str,sVar4);
  FUN_1804e4e90(&DAT_1809ee3c0);
  iVar3 = 0;
  do {
    cVar1 = FUN_1803c81f0();
    if (cVar1 != '\0') {
      bVar2 = 1;
      goto LAB_1803c889b;
    }
    Sleep(100);
    iVar3 = iVar3 + 100;
  } while (iVar3 < 90000);
  bVar2 = FUN_1803c81f0();
LAB_1803c889b:
  if (DAT_180ccfeda == '\0') {
    iVar3 = bVar2 + 3;
    puVar5 = PTR_DAT_1809f3760;
  }
  else {
    iVar3 = 2;
    puVar5 = (undefined *)0x0;
  }
  FUN_1801c8140(10,iVar3,puVar5);
  return;
}



/* ===== 1803c8900 FUN_1803c8900 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c8900(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong *_Str;
  ulonglong *puVar17;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  longlong local_e8;
  ulonglong *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_d8 = (ulonglong *)&DAT_1809ee3c0;
  iVar7 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar7 != 0) {
LAB_1803c8cef:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee40c == 0x7fffffff) {
LAB_1803c8cfa:
    DAT_1809ee40c = DAT_1809ee40c + -1;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_1809ee318 = 1;
  FUN_180029840(&DAT_1809ee320,&DAT_18058b643,0);
  FUN_1804e4e90(&DAT_1809ee3c0);
  puVar16 = auStack_108;
  if (DAT_180ccfeda == '\0') {
    local_d8 = (ulonglong *)&DAT_1809ee3c0;
    iVar7 = FUN_1804e4d70(&DAT_1809ee3c0);
    if (iVar7 != 0) goto LAB_1803c8cef;
    if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c8cfa;
    DAT_1809ee318 = 3;
    sVar8 = strlen("item list not loaded");
    FUN_180029840(&DAT_1809ee320,"item list not loaded",sVar8);
    FUN_1804e4e90(&DAT_1809ee3c0);
    puVar15 = auStack_108;
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_d8 = &local_c8;
    piVar12 = &DAT_18092174c;
    do {
      if (0 < *piVar12) {
        uVar9 = FUN_1802816b0(&local_a8,*piVar12,piVar12[2]);
        FUN_1803c8d40(&local_d8,uVar9);
        FUN_18000f890(&local_a8);
      }
      piVar12 = piVar12 + 0x68;
    } while (piVar12 != &DAT_180931b4c);
    puVar10 = (undefined8 *)FUN_180280be0();
    puVar1 = (undefined4 *)puVar10[1];
    lVar4 = DAT_180cfc948;
    for (puVar13 = (undefined4 *)*puVar10; lVar3 = DAT_180cfc940, DAT_180cfc948 = lVar4,
        local_a8 = local_c8, local_a0 = uStack_c0, local_98 = local_b8, puVar13 != puVar1;
        puVar13 = puVar13 + 0x24) {
      if (puVar13[0x12] - 1 < 3) {
        uVar9 = FUN_1802816b0(&local_a8,*puVar13,0);
        FUN_1803c8d40(&local_d8,uVar9);
        FUN_18000f890(&local_a8);
      }
      lVar4 = DAT_180cfc948;
    }
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0xf8) {
      local_c8 = local_a8;
      uStack_c0 = local_a0;
      local_b8 = local_98;
      FUN_1803c8d40(&local_d8,lVar3 + 0x68);
      local_a8 = local_c8;
      local_a0 = uStack_c0;
      local_98 = local_b8;
    }
    local_b0 = (longlong)(local_a0 - local_a8) >> 5;
    local_b8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    local_d8 = &local_a8;
    iVar7 = FUN_1804e4d70(&DAT_1809ee410);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ee45c == 0x7fffffff) {
      DAT_1809ee45c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_180067380(&DAT_180cd18a0,&local_a8);
    DAT_180cd18c8 = DAT_180cd18a8 - DAT_180cd18a0 >> 5;
    LOCK();
    UNLOCK();
    LOCK();
    DAT_180cd18c0 = 0;
    UNLOCK();
    FUN_1804e4e90(&DAT_1809ee410);
    FUN_1800288b0(&local_a8);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_d8 = &local_88;
    local_d0 = &local_b0;
    iVar7 = 0;
    do {
      cVar5 = FUN_1803c8e10(&local_d8);
      if (cVar5 != '\0') {
        bVar6 = 1;
        goto LAB_1803c8bda;
      }
      Sleep(100);
      iVar7 = iVar7 + 100;
    } while (iVar7 < 30000);
    bVar6 = FUN_1803c8e10(&local_d8);
LAB_1803c8bda:
    local_e8 = local_b0;
    snprintf(&local_88,0x40,"%zu / %zu",DAT_180cd18c0);
    puVar17 = &local_88;
    if (bVar6 != 0) {
      puVar17 = (ulonglong *)0x0;
    }
    local_d8 = (ulonglong *)&DAT_1809ee3c0;
    iVar7 = FUN_1804e4d70(&DAT_1809ee3c0);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ee40c == 0x7fffffff) {
      DAT_1809ee40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    DAT_1809ee318 = (bVar6 ^ 1) + 2;
    _Str = (ulonglong *)&DAT_18058b643;
    if (puVar17 != (ulonglong *)0x0) {
      _Str = puVar17;
    }
    sVar8 = strlen((char *)_Str);
    FUN_180029840(&DAT_1809ee320,_Str,sVar8);
    FUN_1804e4e90(&DAT_1809ee3c0);
    uVar11 = uStack_c0;
    puVar15 = auStack_108;
    uVar14 = local_c8;
    if (local_c8 != 0) {
      for (; uVar14 != uVar11; uVar14 = uVar14 + 0x20) {
        FUN_18000f890(uVar14);
      }
      uVar11 = local_b8 - local_c8 & 0xffffffffffffffe0;
      uVar14 = local_c8;
      if (0xfff < uVar11) {
        uVar14 = (local_c8 - *(longlong *)(local_c8 - 8)) - 8;
        if (uVar14 < 0x20) {
          thunk_FUN_1803d64e0(*(longlong *)(local_c8 - 8),uVar11 + 0x27);
          puVar15 = auStack_108;
          goto LAB_1803c89e0;
        }
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar16 = auStack_100;
      }
      *(undefined8 *)(puVar16 + -8) = 0x1803c8cd7;
      thunk_FUN_1803d64e0(uVar14);
      puVar15 = puVar16;
    }
  }
LAB_1803c89e0:
  *(undefined8 *)(puVar15 + -8) = 0x1803c89ec;
  return;
}



/* ===== 1803c8d40 FUN_1803c8d40 ===== */

void FUN_1803c8d40(longlong *param_1,undefined8 *param_2)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  size_t _Size;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar5;
  
  sVar1 = param_2[2];
  if (sVar1 != 0) {
    param_1 = (longlong *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)*param_1;
    if ((ulonglong)((longlong)puVar2 - (longlong)puVar5) < 0x2580) {
      if (puVar5 != puVar2) {
        uVar3 = param_2[3];
        do {
          if (uVar3 < 0x10) {
            _Buf2 = param_2;
          }
          else {
            _Buf2 = (undefined8 *)*param_2;
          }
          _Size = puVar5[2];
          if ((ulonglong)puVar5[3] < 0x10) {
            _Buf1 = puVar5;
          }
          else {
            _Buf1 = (undefined8 *)*puVar5;
          }
          if (_Size == sVar1) {
            if (_Size == 0) {
              return;
            }
            iVar4 = memcmp(_Buf1,_Buf2,_Size);
            if (iVar4 == 0) {
              return;
            }
          }
          puVar5 = puVar5 + 4;
        } while (puVar5 != puVar2);
      }
      if (puVar2 == (undefined8 *)param_1[2]) {
        FUN_180028f00(param_1,puVar2,param_2);
      }
      else {
        FUN_180024b50(puVar2,param_2);
        param_1[1] = param_1[1] + 0x20;
      }
    }
  }
  return;
}



/* ===== 1803c8e10 FUN_1803c8e10 ===== */

undefined8 FUN_1803c8e10(longlong *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  char *_Str;
  
  snprintf(*param_1,0x40,"%zu / %zu",DAT_180cd18c0,*(undefined8 *)param_1[1]);
  pcVar1 = (char *)*param_1;
  iVar2 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee40c == 0x7fffffff) {
    DAT_1809ee40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_1809ee318 = 1;
  _Str = "";
  if (pcVar1 != (char *)0x0) {
    _Str = pcVar1;
  }
  sVar3 = strlen(_Str);
  FUN_180029840(&DAT_1809ee320,_Str,sVar3);
  FUN_1804e4e90(&DAT_1809ee3c0);
  return CONCAT71((int7)((ulonglong)param_1[1] >> 8),*(ulonglong *)param_1[1] <= DAT_180cd18c0);
}



/* ===== 1803c8ee0 FUN_1803c8ee0 ===== */

byte FUN_1803c8ee0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee40c == 0x7fffffff) {
    DAT_1809ee40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  DAT_1809ee340 = 1;
  FUN_180029840(&DAT_1809ee348,&DAT_18058b643,0);
  FUN_1804e4e90(&DAT_1809ee3c0);
  iVar3 = 0;
  do {
    cVar1 = FUN_1803c8fc0();
    if (cVar1 != '\0') {
      bVar2 = 1;
      goto LAB_1803c8f6b;
    }
    Sleep(100);
    iVar3 = iVar3 + 100;
  } while (iVar3 < 30000);
  bVar2 = FUN_1803c8fc0();
LAB_1803c8f6b:
  pcVar4 = "not ready yet, loads on demand";
  if (bVar2 != 0) {
    pcVar4 = (char *)0x0;
  }
  FUN_1801c8140(0xc,bVar2 ^ 1 | 2,pcVar4);
  return bVar2;
}



/* ===== 1803c8fc0 FUN_1803c8fc0 ===== */

undefined8 FUN_1803c8fc0(void)

{
  char cVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  longlong lVar3;
  
  if (DAT_180961ab0 == 0) {
    return 0;
  }
  if (DAT_1811150a0 == 0) {
    hModule = GetModuleHandleA("panorama.dll");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar2 == (FARPROC)0x0) {
      return 0;
    }
    DAT_1811150a0 = (*pFVar2)("PanoramaUIEngine001",0);
    if (DAT_1811150a0 == 0) {
      return 0;
    }
  }
  cVar1 = FUN_180200ed0();
  if (cVar1 != '\0') {
    if ((((DAT_180961ab8 != 0) && (lVar3 = FUN_18000f3a0(), lVar3 != 0)) &&
        (lVar3 = FUN_18000f3a0(lVar3 + 8), lVar3 != 0)) &&
       ((lVar3 = FUN_18000f3a0(lVar3), lVar3 != 0 && (lVar3 = FUN_18000f3a0(lVar3), lVar3 != 0)))) {
      return 1;
    }
    if (((DAT_180961ab0 != 0) && (lVar3 = FUN_18000f3a0(), lVar3 != 0)) &&
       ((lVar3 = FUN_18000f3a0(lVar3 + 8), lVar3 != 0 &&
        ((lVar3 = FUN_18000f3a0(lVar3), lVar3 != 0 && (lVar3 = FUN_18000f3a0(lVar3), lVar3 != 0)))))
       ) {
      return 1;
    }
  }
  return 0;
}



/* ===== 1803c90c0 FUN_1803c90c0 ===== */

void FUN_1803c90c0(char param_1)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar4 != 0) {
LAB_1803c9215:
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ee40c != 0x7fffffff) {
    DAT_1809ee368 = 1;
    FUN_180029840(&DAT_1809ee370,&DAT_18058b643,0);
    FUN_1804e4e90(&DAT_1809ee3c0);
    if (param_1 != '\0') {
      LOCK();
      DAT_180cc3e1b = 1;
      UNLOCK();
      iVar4 = 0;
      do {
        cVar2 = FUN_1803c9220();
        if (cVar2 != '\0') {
          bVar3 = 1;
          LOCK();
          UNLOCK();
          goto LAB_1803c91d9;
        }
        Sleep(100);
        iVar4 = iVar4 + 100;
      } while (iVar4 < 25000);
      bVar3 = FUN_1803c9220();
      uVar1 = DAT_180cc3e1b;
      LOCK();
      DAT_180cc3e1b = 0;
      UNLOCK();
      if (bVar3 == 0) {
        uVar5 = FUN_1803bdda0(uVar1);
      }
      else {
LAB_1803c91d9:
        DAT_180cc3e1b = 0;
        uVar5 = 0;
      }
      FUN_1801c8140(0xd,(bVar3 ^ 1) + 2,uVar5);
      return;
    }
    iVar4 = FUN_1804e4d70(&DAT_1809ee3c0);
    if (iVar4 != 0) goto LAB_1803c9215;
    if (DAT_1809ee40c != 0x7fffffff) {
      DAT_1809ee368 = 3;
      FUN_180029840(&DAT_1809ee370,"skipped, no panorama",0x14);
      FUN_1804e4e90(&DAT_1809ee3c0);
      return;
    }
  }
  DAT_1809ee40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(6);
}



/* ===== 1803c9220 FUN_1803c9220 ===== */

bool FUN_1803c9220(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  byte *pbVar4;
  uint uVar5;
  char *_Str;
  
  pcVar2 = (char *)FUN_1803bdda0();
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
  DAT_1809ee368 = 1;
  _Str = "";
  if (pcVar2 != (char *)0x0) {
    _Str = pcVar2;
  }
  sVar3 = strlen(_Str);
  FUN_180029840(&DAT_1809ee370,_Str,sVar3);
  FUN_1804e4e90(&DAT_1809ee3c0);
  pbVar4 = (byte *)FUN_1803bdda0();
  uVar5 = *pbVar4 - 0x6f;
  if ((uVar5 == 0) && (uVar5 = pbVar4[1] - 0x6b, uVar5 == 0)) {
    uVar5 = (uint)pbVar4[2];
  }
  return uVar5 == 0;
}



/* ===== 1803c9300 FUN_1803c9300 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803c9300(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  
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
  DAT_1809ee390 = 1;
  FUN_180029840(&DAT_1809ee398,&DAT_18058b643,0);
  FUN_1804e4e90();
  FUN_18022c110();
  _DAT_1809f2a10 = 0;
  puVar2 = &DAT_1809f2a00;
  if (0xf < DAT_1809f2a18) {
    puVar2 = _DAT_1809f2a00;
  }
  *puVar2 = 0;
  _DAT_1809f2aa0 = 0;
  puVar3 = &DAT_1809f2a90;
  if (0xf < DAT_1809f2aa8) {
    puVar3 = DAT_1809f2a90;
  }
  *(undefined1 *)puVar3 = 0;
  FUN_1803739c0();
  FUN_180374710();
  DAT_180cd107f = 1;
  FUN_180099f60();
  FUN_1801c8140(0xe,2,0);
  return;
}



/* ===== 1803c93f0 FUN_1803c93f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803c93f0(void)

{
  LPCSTR lpModuleName;
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  HMODULE pHVar11;
  FARPROC pFVar12;
  longlong lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulonglong uVar18;
  char **ppcVar19;
  undefined1 *puVar20;
  bool bVar21;
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [24];
  char *local_448;
  char *local_440;
  undefined *local_438;
  undefined4 local_430;
  undefined4 local_428;
  undefined4 local_420;
  undefined4 local_418;
  undefined4 local_410;
  char *local_408;
  char *local_400;
  char *local_3f8;
  byte local_3e8;
  undefined *local_3e0;
  char *local_3d8;
  char *local_3d0;
  char *local_3c8;
  char *local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  ulonglong local_3a0;
  char *local_398 [8];
  char *local_358 [96];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_468;
  local_3e0 = &DAT_1809ee3c0;
  iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar9 != 0) goto LAB_1803ca1cd;
  if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
  DAT_1809ee160 = 1;
  FUN_180029840(&DAT_1809ee168,&DAT_18058b643,0);
  FUN_1804e4e90(&DAT_1809ee3c0);
  iVar9 = 0;
  while( true ) {
    puVar20 = auStack_468;
    pHVar11 = GetModuleHandleA("client.dll");
    if (((pHVar11 != (HMODULE)0x0) &&
        (pHVar11 = GetModuleHandleA("engine2.dll"), pHVar11 != (HMODULE)0x0)) &&
       (pHVar11 = GetModuleHandleA("schemasystem.dll"), pHVar11 != (HMODULE)0x0)) break;
    Sleep(0xfa);
    iVar9 = iVar9 + 0xfa;
    if (59999 < iVar9) {
      FUN_1803c8170("client.dll / engine2.dll / schemasystem.dll not loaded after 60s");
                    /* WARNING: Subroutine does not return */
      FreeLibraryAndExitThread(DAT_181111838,0);
    }
  }
  FUN_1801c8140(0,2,0);
  FUN_1802b2280();
  FUN_1802b2560("loading");
  local_3e0 = &DAT_18058b643;
  cVar3 = FUN_1803c8040(&local_3e0);
  puVar17 = local_3e0;
  pcVar15 = "[error]";
  if (cVar3 != '\0') {
    pcVar15 = "[ok]";
  }
  FUN_1802b2560("%s unwind table: %s",pcVar15);
  FUN_1802b2560("[modules] neverlose image     0x%llX",DAT_181111838);
  FUN_1800739d0(cVar3,puVar17);
  local_398[0] = "client.dll";
  local_398[1] = "engine2.dll";
  local_398[2] = "scenesystem.dll";
  local_398[3] = "materialsystem2.dll";
  local_398[4] = "rendersystemdx11.dll";
  local_398[5] = "resourcesystem.dll";
  local_398[6] = "schemasystem.dll";
  local_398[7] = "tier0.dll";
  ppcVar19 = local_398;
  do {
    lpModuleName = *ppcVar19;
    pHVar11 = GetModuleHandleA(lpModuleName);
    if (pHVar11 == (HMODULE)0x0) {
      FUN_1802b2560("[error] module not found | module: %s",lpModuleName);
    }
    else {
      FUN_1802b2560("[modules] %-22s 0x%llX",lpModuleName);
    }
    ppcVar19 = ppcVar19 + 1;
  } while (ppcVar19 != local_358);
  local_3e0 = &DAT_1809ee3c0;
  iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
  if (iVar9 != 0) goto LAB_1803ca1cd;
  if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
  DAT_1809ee188 = 1;
  FUN_180029840(&DAT_1809ee190);
  FUN_1804e4e90();
  uVar18 = 0;
  LOCK();
  bVar21 = DAT_1811118c8 == 0;
  if (bVar21) {
    DAT_1811118c8 = 1;
  }
  UNLOCK();
  while (!bVar21) {
    Sleep((uint)(0x1f < uVar18));
    uVar18 = uVar18 + 1;
    LOCK();
    bVar21 = DAT_1811118c8 == 0;
    if (bVar21) {
      DAT_1811118c8 = 1;
    }
    UNLOCK();
  }
  if (DAT_1811118b0 == (HANDLE)0x0) {
    DAT_1811118b0 = HeapCreate(0,0,0);
    iVar9 = DAT_1811118c8;
    uVar16 = 9;
    if (DAT_1811118b0 != (HANDLE)0x0) {
      uVar16 = 0;
    }
    LOCK();
    DAT_1811118c8 = 0;
    UNLOCK();
    if (DAT_1811118b0 != (HANDLE)0x0) {
      cVar3 = FUN_1801cf0b0(iVar9);
      if (cVar3 == '\0') {
        FUN_1802b2560("[error] failed to create dummy D3D11 swap chain");
        goto LAB_1803ca1af;
      }
      uVar16 = *(undefined8 *)(DAT_180cd1e40 + 0x40);
      uVar1 = *(undefined8 *)(DAT_180cd1e40 + 0x68);
      iVar9 = FUN_180428df0(uVar16,FUN_1801cebd0,&DAT_180cd1af0);
      if ((iVar9 != 0) || (iVar9 = FUN_180428df0(uVar1,FUN_1801cf050,&DAT_180cd1b98), iVar9 != 0))
      goto LAB_1803ca1af;
      iVar9 = FUN_1804293b0(uVar16,1);
      if ((iVar9 != 0) || (iVar9 = FUN_1804293b0(uVar1,1), iVar9 != 0)) {
        FUN_1802b2560("[error] failed to enable present hooks");
        goto LAB_1803ca1af;
      }
      local_3e0 = &DAT_1809ee3c0;
      iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
      if (iVar9 != 0) goto LAB_1803ca1cd;
      if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
      DAT_1809ee188 = 2;
      FUN_180029840(&DAT_1809ee190,&DAT_18058b643,0);
      FUN_1804e4e90(&DAT_1809ee3c0);
      local_3e0 = &DAT_1809ee3c0;
      iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
      if (iVar9 != 0) goto LAB_1803ca1cd;
      if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
      DAT_1809ee1b0 = 1;
      FUN_180029840(&DAT_1809ee1b8,&DAT_18058b643,0);
      FUN_1804e4e90(&DAT_1809ee3c0);
      pHVar11 = GetModuleHandleA("schemasystem.dll");
      if (pHVar11 == (HMODULE)0x0) {
        pcVar15 = "schemasystem.dll not loaded";
LAB_1803c9867:
        bVar21 = false;
        pcVar14 = "ok";
        if (pcVar15 != (char *)0x0) {
          pcVar14 = pcVar15;
        }
        PTR_s_not_initialized_1809f9d28 = pcVar15;
        FUN_1802b2560("[error] schema initialize failed | %s",pcVar14);
        puVar17 = &DAT_1806d2ba0;
        if (PTR_s_not_initialized_1809f9d28 != (undefined *)0x0) {
          puVar17 = PTR_s_not_initialized_1809f9d28;
        }
      }
      else {
        pFVar12 = GetProcAddress(pHVar11,"CreateInterface");
        if (pFVar12 == (FARPROC)0x0) {
          pcVar15 = "CreateInterface not exported";
          goto LAB_1803c9867;
        }
        DAT_1811089f0 = (longlong *)(*pFVar12)("SchemaSystem_001",0);
        if (DAT_1811089f0 == (longlong *)0x0) {
          pcVar15 = "SchemaSystem_001 not found";
          goto LAB_1803c9867;
        }
        PTR_s_client_dll_1809f9d30 = s_client_dll_1806d2230;
        lVar13 = (**(code **)(*DAT_1811089f0 + 0x68))(DAT_1811089f0,"client.dll",0);
        if (lVar13 == 0) {
          DAT_1811089f0 = (longlong *)0x0;
          pcVar15 = "type scope for module not found";
          goto LAB_1803c9867;
        }
        PTR_s_not_initialized_1809f9d28 = (undefined *)0x0;
        FUN_18038eca0();
        bVar21 = true;
        puVar17 = (undefined *)0x0;
      }
      uVar16 = 4;
      if (bVar21) {
        uVar16 = 2;
      }
      FUN_1801c8140(2,uVar16,puVar17);
      local_3e0 = &DAT_1809ee3c0;
      iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
      if (iVar9 != 0) {
LAB_1803ca1cd:
                    /* WARNING: Subroutine does not return */
        FUN_1804e4a90(5);
      }
      if (DAT_1809ee40c != 0x7fffffff) {
        DAT_1809ee1d8 = 1;
        FUN_180029840(&DAT_1809ee1e0,&DAT_18058b643,0);
        FUN_1804e4e90(&DAT_1809ee3c0);
        bVar4 = FUN_18039e790();
        if (bVar4 == 0) {
          puVar17 = &DAT_1806d2ba0;
          if (PTR_s_not_initialized_1809f9d38 != (undefined *)0x0) {
            puVar17 = PTR_s_not_initialized_1809f9d38;
          }
          FUN_1802b2560("[error] icons initialize failed | %s",puVar17);
          puVar17 = &DAT_1806d2ba0;
          if (PTR_s_not_initialized_1809f9d38 != (undefined *)0x0) {
            puVar17 = PTR_s_not_initialized_1809f9d38;
          }
        }
        else {
          puVar17 = (undefined *)0x0;
        }
        FUN_1801c8140(3,bVar4 ^ 1 | 2,puVar17);
        local_3e0 = &DAT_1809ee3c0;
        iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
        if (iVar9 != 0) goto LAB_1803ca1cd;
        if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
        DAT_1809ee200 = 1;
        FUN_180029840(&DAT_1809ee208,&DAT_18058b643,0);
        FUN_1804e4e90(&DAT_1809ee3c0);
        bVar5 = FUN_1803c66b0();
        if (bVar5 == 0) {
          FUN_1802b2560("[error] layouts incomplete, esp disabled");
        }
        pcVar15 = "incomplete, esp disabled";
        if (bVar5 != 0) {
          pcVar15 = (char *)0x0;
        }
        FUN_1801c8140(4,(uint)(bVar5 ^ 1) * 2 + 2,pcVar15);
        local_3e0 = &DAT_1809ee3c0;
        iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
        if (iVar9 != 0) goto LAB_1803ca1cd;
        if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
        DAT_1809ee228 = 1;
        FUN_180029840(&DAT_1809ee230,&DAT_18058b643,0);
        FUN_1804e4e90(&DAT_1809ee3c0);
        bVar6 = FUN_1803cb350();
        pcVar15 = "some signatures not found, see console";
        if (bVar6 != 0) {
          pcVar15 = (char *)0x0;
        }
        local_3e8 = bVar6;
        FUN_1801c8140(5,(uint)(bVar6 ^ 1) * 2 + 2,pcVar15);
        local_3e0 = &DAT_1809ee3c0;
        iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
        if (iVar9 != 0) goto LAB_1803ca1cd;
        if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
        DAT_1809ee250 = 1;
        FUN_180029840(&DAT_1809ee258,&DAT_18058b643,0);
        FUN_1804e4e90(&DAT_1809ee3c0);
        FUN_180296ae0();
        if (DAT_1811089f0 != (longlong *)0x0) {
          DAT_181111800 = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
          _DAT_181111804 = FUN_18038eaf0("C_BaseEntity","m_nSubclassID");
          _DAT_181111808 = FUN_18038eaf0("CCSWeaponBaseVData","m_szName");
          _DAT_18111180c = FUN_18038eaf0("C_PlantedC4","m_flC4Blow");
          DAT_181111810 = FUN_18038eaf0("C_PlantedC4","m_bHasExploded");
          _DAT_181111814 = FUN_18038eaf0("C_PlantedC4","m_bBombDefused");
          _DAT_181111818 = FUN_18038eaf0("C_PlantedC4","m_bBeingDefused");
          _DAT_18111181c = FUN_18038eaf0("C_PlantedC4","m_flDefuseCountDown");
          _DAT_181111820 = FUN_18038eaf0("C_PlantedC4","m_nBombSite");
          _DAT_181111824 = FUN_18038eaf0("CGameSceneNode","m_angAbsRotation");
          if (DAT_1811089f0 != (longlong *)0x0) {
            DAT_180cfee68 = FUN_18038eaf0("CCSWeaponBaseVData","m_nDamage");
            DAT_180cfee6c = FUN_18038eaf0("CCSWeaponBaseVData","m_flPenetration");
            DAT_180cfee70 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRangeModifier");
            DAT_180cfee74 = FUN_18038eaf0("CCSWeaponBaseVData","m_flRange");
            DAT_180cfee78 = FUN_18038eaf0("CCSWeaponBaseVData","m_flArmorRatio");
            DAT_180cfee7c = FUN_18038eaf0("CCSWeaponBaseVData","m_flHeadshotMultiplier");
            DAT_180cfee80 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
            local_3c8 = "C_CSPlayerPawn";
            local_3c0 = "C_CSPlayerPawnBase";
            ppcVar19 = &local_3c8;
            do {
              iVar9 = FUN_18038eaf0(*ppcVar19,"m_bHasHelmet");
              if (iVar9 != 0) goto LAB_1803c9cc2;
              ppcVar19 = ppcVar19 + 1;
            } while (ppcVar19 != (char **)&local_3b8);
            iVar9 = 0;
LAB_1803c9cc2:
            local_3d8 = "C_BasePlayerPawn";
            ppcVar19 = &local_3d8;
            DAT_180cfee84 = iVar9;
            do {
              iVar9 = FUN_18038eaf0(*ppcVar19,"m_pItemServices");
              if (iVar9 != 0) goto LAB_1803c9d02;
              ppcVar19 = ppcVar19 + 1;
            } while (ppcVar19 != &local_3d0);
            iVar9 = 0;
LAB_1803c9d02:
            local_3d0 = "CCSPlayer_ItemServices";
            ppcVar19 = &local_3d0;
            DAT_180cfee88 = iVar9;
            do {
              iVar9 = FUN_18038eaf0(*ppcVar19,"m_bHasHelmet");
              if (iVar9 != 0) goto LAB_1803c9d42;
              ppcVar19 = ppcVar19 + 1;
            } while (ppcVar19 != &local_3c8);
            iVar9 = 0;
LAB_1803c9d42:
            bVar6 = local_3e8;
            DAT_180cfee8c = iVar9;
          }
        }
        DAT_180ceb590 = 0;
        local_3e0 = &DAT_1809ee3c0;
        iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
        if (iVar9 != 0) goto LAB_1803ca1cd;
        if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
        DAT_1809ee250 = 2;
        FUN_180029840(&DAT_1809ee258,&DAT_18058b643,0);
        FUN_1804e4e90(&DAT_1809ee3c0);
        if (((!bVar21) || (bVar5 == 0)) || ((bVar6 == 0 || (bVar4 == 0)))) {
          FUN_180540170(local_358,0,0x300);
          local_408 = "not found";
          local_3f8 = "not found";
          if (DAT_1809619e0 != 0) {
            local_3f8 = "ok";
          }
          local_400 = "not found";
          if (DAT_1809619d8 != 0) {
            local_400 = "ok";
          }
          if (DAT_1809619d0 != 0) {
            local_408 = "ok";
          }
          local_438 = &DAT_1806d2ba0;
          if (PTR_s_not_initialized_1809f9d38 != (undefined *)0x0) {
            local_438 = PTR_s_not_initialized_1809f9d38;
          }
          local_440 = "failed";
          if (local_3e8 != 0) {
            local_440 = "ok";
          }
          local_448 = "incomplete";
          if (bVar5 != 0) {
            local_448 = "ok";
          }
          puVar17 = &DAT_1806d2ba0;
          if ((!bVar21) && (PTR_s_not_initialized_1809f9d28 != (undefined *)0x0)) {
            puVar17 = PTR_s_not_initialized_1809f9d28;
          }
          local_410 = DAT_180ca0950;
          local_418 = DAT_180ca09fc;
          local_420 = DAT_180ca09f8;
          local_428 = DAT_180ca09f4;
          local_430 = DAT_180ca09f0;
          snprintf(local_358,0x300,
                   "running in menu only mode\n\nschema: %s\nlayouts: %s\npatterns: %s\nicons: %s\n\nhealth 0x%X\nteam 0x%X\nscene_node 0x%X\npawn 0x%X\nabs_origin 0x%X\n\nentity_list %s\nlocal_player %s\nview_matrix %s"
                   ,puVar17);
          MessageBoxA((HWND)0x0,(LPCSTR)local_358,"neverlose",0x30);
        }
        uVar16 = 2;
        local_3e0 = &DAT_1809ee3c0;
        iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
        if (iVar9 != 0) goto LAB_1803ca1cd;
        if (DAT_1809ee40c == 0x7fffffff) goto LAB_1803c9fe1;
        DAT_1809ee278 = 1;
        FUN_180029840(&DAT_1809ee280,&DAT_18058b643,0);
        FUN_1804e4e90(&DAT_1809ee3c0);
        uStack_3b0 = 0;
        local_3a8 = 7;
        local_3a0 = 0xf;
        local_3b8 = (char *)(ulonglong)
                            CONCAT16(s_default_18058b600[6],
                                     CONCAT24(s_default_18058b600._4_2_,s_default_18058b600._0_4_));
        bVar4 = FUN_1800fcff0(&local_3b8);
        if (0xf < local_3a0) {
          uVar18 = local_3a0 + 1;
          pcVar15 = local_3b8;
          if (0xfff < uVar18) {
            pcVar15 = *(char **)(local_3b8 + -8);
            if ((char *)0x1f < local_3b8 + (-8 - (longlong)pcVar15)) {
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              puVar20 = auStack_460;
              goto LAB_1803c9ffb;
            }
            uVar18 = local_3a0 + 0x28;
          }
          thunk_FUN_1803d64e0(pcVar15,uVar18);
        }
        pcVar15 = "no default config, using defaults";
        if (bVar4 != 0) {
          pcVar15 = (char *)0x0;
        }
        FUN_1801c8140(7,bVar4 ^ 1 | 2,pcVar15);
        local_3e0 = &DAT_1809ee3c0;
        iVar9 = FUN_1804e4d70(&DAT_1809ee3c0);
        if (iVar9 != 0) goto LAB_1803ca1cd;
        if (DAT_1809ee40c != 0x7fffffff) {
LAB_1803c9ffb:
          DAT_1809ee2a0 = 1;
          *(undefined8 *)(puVar20 + -8) = 0x1803ca017;
          FUN_180029840(&DAT_1809ee2a8,&DAT_18058b643,0);
          *(undefined8 *)(puVar20 + -8) = 0x1803ca020;
          FUN_1804e4e90(&DAT_1809ee3c0);
          *(undefined8 *)(puVar20 + -8) = 0x1803ca025;
          cVar3 = FUN_1801cf6d0();
          if (cVar3 == '\0') {
            *(undefined8 *)(puVar20 + -8) = 0x1803ca035;
            FUN_1802b2560("[error] hooks initialize failed, unloading");
            *(undefined8 *)(puVar20 + -8) = 0x1803ca041;
            FUN_1803c8170("failed to install game hooks");
            *(undefined8 *)(puVar20 + -8) = 0x1803ca046;
            FUN_1803c87b0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined8 *)(puVar20 + -8) = 0x1803ca057;
          FUN_1801c8140(8,2,0);
          *(undefined8 *)(puVar20 + -8) = 0x1803ca063;
          FUN_1801c8080(9,0);
          *(undefined8 *)(puVar20 + -8) = 0x1803ca068;
          cVar3 = FUN_1801d2ee0();
          if (cVar3 == '\0') {
            *(undefined8 *)(puVar20 + -8) = 0x1803ca088;
            pcVar14 = (char *)FUN_1801d4440();
            pcVar15 = "unknown";
            if (pcVar14 != (char *)0x0) {
              pcVar15 = pcVar14;
            }
            *(undefined8 *)(puVar20 + -8) = 0x1803ca0a5;
            FUN_1802b2560("[error] materials failed | %s",pcVar15);
            *(undefined8 *)(puVar20 + -8) = 0x1803ca0aa;
            pcVar14 = (char *)FUN_1801d4440();
            pcVar15 = "unknown";
            if (pcVar14 != (char *)0x0) {
              pcVar15 = pcVar14;
            }
            uVar16 = 3;
          }
          else {
            *(undefined8 *)(puVar20 + -8) = 0x1803ca071;
            uVar10 = FUN_1801d4430();
            *(undefined8 *)(puVar20 + -8) = 0x1803ca07f;
            FUN_1802b2560("[materials] %d created",uVar10);
            pcVar15 = (char *)0x0;
          }
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0c7;
          FUN_1801c8140(9,uVar16,pcVar15);
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0cc;
          FUN_1803c87f0();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0d1;
          FUN_1803c8900();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0d6;
          uVar7 = FUN_1803c8ee0();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0de;
          FUN_1803c90c0(uVar7);
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0e3;
          FUN_1803c9300();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0e8;
          FUN_1801c8200();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0f4;
          FUN_1802b2560("loaded, press end to unload");
          *(undefined8 *)(puVar20 + -8) = 0x1803ca0ff;
          sVar8 = GetAsyncKeyState(0x23);
          while (-1 < sVar8) {
            *(undefined8 *)(puVar20 + -8) = 0x1803ca10f;
            Sleep(0x32);
            *(undefined8 *)(puVar20 + -8) = 0x1803ca11a;
            sVar8 = GetAsyncKeyState(0x23);
          }
          *(undefined8 *)(puVar20 + -8) = 0x1803ca12b;
          FUN_1802b2560("unloading");
          *(undefined8 *)(puVar20 + -8) = 0x1803ca138;
          Beep(0x78,0x78);
          *(undefined8 *)(puVar20 + -8) = 0x1803ca13d;
          FUN_1801d07d0();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca142;
          FUN_18039ec90();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca147;
          thunk_FUN_1800dd840();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca14c;
          FUN_1803c8190();
          *(undefined8 *)(puVar20 + -8) = 0x1803ca158;
          FUN_1802b2560("unloaded, the image is released by a stub outside it");
          *(undefined8 *)(puVar20 + -8) = 0x1803ca15d;
          FUN_1802b2400();
          if (DAT_181111830 != (PRUNTIME_FUNCTION)0x0) {
            *(undefined8 *)(puVar20 + -8) = 0x1803ca16f;
            RtlDeleteFunctionTable(DAT_181111830);
          }
          *(undefined8 *)(puVar20 + -8) = 0x1803ca17a;
          Sleep(200);
          *(undefined8 *)(puVar20 + -8) = 0x1803ca17f;
          FUN_1803c83a0();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
LAB_1803c9fe1:
      DAT_1809ee40c = DAT_1809ee40c + -1;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
  }
  else {
    uVar16 = 1;
    LOCK();
    UNLOCK();
  }
  DAT_1811118c8 = 0;
  uVar16 = FUN_180429510(uVar16);
  FUN_1802b2560("[error] minhook initialize failed | %s",uVar16);
LAB_1803ca1af:
  FUN_1802b2560("[error] present hook failed, unloading");
  FUN_1803c8170("failed to hook present, dx11 swapchain vtable not acquired");
  FUN_1803c87b0();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* ===== 1803ca1e0 FUN_1803ca1e0 ===== */

undefined8 FUN_1803ca1e0(HMODULE param_1,int param_2)

{
  HANDLE hObject;
  
  if (param_2 == 1) {
    DAT_181111838 = param_1;
    DisableThreadLibraryCalls(param_1);
    hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1803c93f0,(LPVOID)0x0,0,(LPDWORD)0x0);
    if (hObject == (HANDLE)0x0) {
      MessageBoxA((HWND)0x0,"failed to create main thread","neverlose",0x10);
      return 0;
    }
    CloseHandle(hObject);
  }
  return 1;
}



/* ===== 1803ca250 FUN_1803ca250 ===== */

void FUN_1803ca250(longlong *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  puVar5 = (undefined1 *)param_1[1];
  if (puVar5 != (undefined1 *)param_1[2]) {
    *puVar5 = *param_2;
    param_1[1] = param_1[1] + 1;
    return;
  }
  lVar6 = (longlong)puVar5 - *param_1;
  if (lVar6 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar4 = param_1[2] - *param_1;
  uVar1 = lVar6 + 1;
  uVar7 = 0x7fffffffffffffff;
  if ((uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) && (uVar7 = (uVar4 >> 1) + uVar4, uVar7 < uVar1))
  {
    uVar7 = uVar1;
  }
  lVar3 = FUN_18000fb70(uVar7);
  *(undefined1 *)(lVar3 + lVar6) = *param_2;
  puVar2 = (undefined1 *)*param_1;
  if (puVar5 == (undefined1 *)param_1[1]) {
    lVar8 = param_1[1] - (longlong)puVar2;
    lVar6 = lVar3;
    puVar5 = puVar2;
  }
  else {
    FUN_180540530(lVar3,puVar2,(longlong)puVar5 - (longlong)puVar2);
    lVar6 = lVar6 + 1 + lVar3;
    lVar8 = param_1[1] - (longlong)puVar5;
  }
  FUN_180540530(lVar6,puVar5,lVar8);
  FUN_180082ac0(param_1,lVar3,uVar1,uVar7);
  return;
}



/* ===== 1803ca350 FUN_1803ca350 ===== */

undefined8 FUN_1803ca350(void)

{
  DAT_181111840 = DAT_181111840 + 1;
  FUN_1802b2560();
  return 0;
}



/* ===== 1803ca370 FUN_1803ca370 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803ca370(char *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined4 uStack_af;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  puVar2 = DAT_181111850;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  puVar6 = DAT_181111848;
  while( true ) {
    if (puVar6 == puVar2) {
      local_b8 = 0;
      uStack_b7 = 0;
      uStack_b0 = 0;
      uStack_af = 0;
      uStack_ab = 0;
      uStack_a9 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      sVar5 = strlen(param_2);
      FUN_1800133a0(&local_b8,param_2,sVar5);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      sVar5 = strlen(param_1);
      FUN_1800133a0(&local_98,param_1,sVar5);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      sVar5 = strlen(param_3);
      uVar7 = FUN_1800133a0(&local_78,param_3,sVar5);
      puVar6 = DAT_181111850;
      local_58 = param_4;
      if (DAT_181111850 == DAT_181111858) {
        FUN_1803d5e10(uVar7,DAT_181111850,&local_b8);
      }
      else {
        *(undefined1 *)DAT_181111850 = local_b8;
        *(ulonglong *)((longlong)puVar6 + 1) = CONCAT17(uStack_b0,uStack_b7);
        *(undefined4 *)((longlong)puVar6 + 9) = uStack_af;
        *(undefined2 *)((longlong)puVar6 + 0xd) = uStack_ab;
        *(undefined1 *)((longlong)puVar6 + 0xf) = uStack_a9;
        puVar6[2] = local_a8;
        puVar6[3] = uStack_a0;
        uVar1 = _UNK_1808ad418;
        uVar7 = _DAT_1808ad410;
        local_a8 = _DAT_1808ad410;
        uStack_a0 = _UNK_1808ad418;
        local_b8 = 0;
        puVar6[4] = local_98;
        puVar6[5] = uStack_90;
        puVar6[6] = local_88;
        puVar6[7] = uStack_80;
        local_88 = uVar7;
        uStack_80 = uVar1;
        local_98 = local_98 & 0xffffffffffffff00;
        puVar6[8] = local_78;
        puVar6[9] = uStack_70;
        puVar6[10] = local_68;
        puVar6[0xb] = uStack_60;
        local_68 = uVar7;
        uStack_60 = uVar1;
        local_78 = local_78 & 0xffffffffffffff00;
        puVar6[0xc] = param_4;
        DAT_181111850 = DAT_181111850 + 0xd;
      }
      FUN_18000f890(&local_78);
      FUN_18000f890(&local_98);
      FUN_18000f890(&local_b8);
      return;
    }
    sVar4 = strlen(param_2);
    sVar5 = puVar6[2];
    if ((ulonglong)puVar6[3] < 0x10) {
      _Buf1 = puVar6;
    }
    else {
      _Buf1 = (undefined8 *)*puVar6;
    }
    if ((sVar5 == sVar4) && ((sVar5 == 0 || (iVar3 = memcmp(_Buf1,param_2,sVar5), iVar3 == 0))))
    break;
    puVar6 = puVar6 + 0xd;
  }
  sVar5 = strlen(param_1);
  FUN_180029840(puVar6 + 4,param_1,sVar5);
  sVar5 = strlen(param_3);
  FUN_180029840(puVar6 + 8,param_3,sVar5);
  puVar6[0xc] = param_4;
  return;
}



/* ===== 1803ca5a0 FUN_1803ca5a0 ===== */

void FUN_1803ca5a0(longlong param_1)

{
  FUN_18000f890(param_1 + 0x40);
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 1803ca5d0 FUN_1803ca5d0 ===== */

longlong FUN_1803ca5d0(LPCSTR param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  longlong lVar4;
  char *pcVar5;
  char *local_58;
  size_t local_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  DAT_181111844 = DAT_181111844 + 1;
  FUN_1803ca370(param_1,param_2,param_3,0);
  pHVar2 = GetModuleHandleA(param_1);
  if (pHVar2 != (HMODULE)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_48,0x18);
    if (iVar1 != 0) {
      uStack_40 = uStack_40 & 0xffffffff;
      if ((local_48 != 0) && (uStack_40 != 0)) {
        local_50 = strlen(param_3);
        local_58 = param_3;
        lVar4 = FUN_1801d1e00(&local_48,&local_58);
        if (lVar4 != 0) {
          FUN_1803ca370(param_1,param_2,param_3,lVar4);
          return lVar4;
        }
        pcVar5 = "[error] pattern not found | %s:%s | %s";
        goto LAB_1803ca6b2;
      }
    }
  }
  param_3 = "";
  pcVar5 = "[error] module not found | module: %s | %s";
LAB_1803ca6b2:
  DAT_181111840 = DAT_181111840 + 1;
  FUN_1802b2560(pcVar5,param_1,param_2,param_3);
  return 0;
}



/* ===== 1803ca6d0 FUN_1803ca6d0 ===== */

longlong FUN_1803ca6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_1803ca5d0();
  if (lVar3 == 0) {
    return 0;
  }
  param_4 = param_4 + lVar3;
  if ((param_4 - 0x10000U < 0x7ffffffeffff) && (cVar1 = FUN_180011220(param_4), cVar1 == -0x18)) {
    iVar2 = FUN_180011200(param_4 + 1);
    param_4 = param_4 + (longlong)iVar2 + 5;
    FUN_1803ca370(param_1,param_2,param_3,param_4);
    if (param_4 != 0) {
      return param_4;
    }
  }
  else {
    FUN_1803ca370(param_1,param_2,param_3,0);
  }
  DAT_181111840 = DAT_181111840 + 1;
  FUN_1802b2560("[error] call not resolved | %s:%s | %s",param_1,param_2,param_3);
  return 0;
}



/* ===== 1803ca790 FUN_1803ca790 ===== */

longlong FUN_1803ca790(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      longlong param_5,longlong param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_1803ca5d0();
  if (lVar1 != 0) {
    lVar1 = lVar1 + param_4;
    if ((lVar1 != 0) &&
       (param_6 = *(int *)(lVar1 + param_5) + lVar1 + param_6, param_6 - 0x10000U < 0x7ffffffeffff))
    {
      FUN_1803ca370(param_1,param_2,param_3,param_6);
      return param_6;
    }
    FUN_1803ca370(param_1,param_2,param_3,0);
    DAT_181111840 = DAT_181111840 + 1;
    FUN_1802b2560("[error] address not resolved | %s:%s | %s",param_1,param_2,param_3);
  }
  return 0;
}



/* ===== 1803ca840 FUN_1803ca840 ===== */

uint FUN_1803ca840(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180011200(param_1 + param_2);
    if ((uVar1 != 0) && (uVar1 < param_5)) {
      if (uVar1 != param_4) {
        FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)",param_3,uVar1,param_4);
      }
      return uVar1;
    }
    DAT_181111840 = DAT_181111840 + 1;
  }
  FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                param_3,uVar1,param_4);
  return param_4;
}



/* ===== 1803ca8d0 FUN_1803ca8d0 ===== */

void FUN_1803ca8d0(void)

{
  int iVar1;
  int iVar2;
  HMODULE pHVar3;
  HANDLE pvVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *local_38;
  ulonglong local_30;
  char *local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  DAT_181111844 = DAT_181111844 + 1;
  FUN_1803ca370("client.dll","input_camera",
                "49 8D 80 ? ? ? ? 41 80 B8 ? ? ? ? 00 F2 0F 10 00 F2 0F 11 44 24 20 75 ? F3 0F 10 44 24 24 F3 0F 10 4C 24 20 41 C6 80 ? ? ? ? 01 F3 41 0F 11 80 ? ? ? ? F3 41 0F 11 88 ? ? ? ? 41 C7 80 ? ? ? ? 00 00 F0 41 41 C7 80"
                ,0);
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
LAB_1803caa0d:
    pcVar8 = "";
    pcVar6 = "[error] module not found | module: %s | %s";
LAB_1803caa1b:
    DAT_181111840 = DAT_181111840 + 1;
    FUN_1802b2560(pcVar6,"client.dll","input_camera",pcVar8);
    iVar2 = 0;
    lVar5 = 0;
    iVar1 = DAT_180961fb4;
LAB_1803caa3e:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "CCSGOInput view angles",iVar2,iVar1);
    DAT_180961fb4 = iVar1;
    if (lVar5 != 0) goto LAB_1803caa68;
    iVar2 = 0;
    iVar1 = DAT_180961fb8;
LAB_1803caab3:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "CCSGOInput third person",iVar2,iVar1);
    DAT_180961fb8 = iVar1;
    if (lVar5 != 0) goto LAB_1803caadd;
    iVar2 = 0;
    iVar1 = DAT_180961fc0;
LAB_1803cab28:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "CCSGOInput camera yaw",iVar2,iVar1);
    DAT_180961fc0 = iVar1;
    if (lVar5 != 0) goto LAB_1803cab52;
    iVar2 = 0;
    iVar1 = DAT_180961fbc;
LAB_1803cab9d:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "CCSGOInput camera pitch",iVar2,iVar1);
    DAT_180961fbc = iVar1;
    if (lVar5 != 0) goto LAB_1803cabc7;
    iVar2 = 0;
    iVar1 = DAT_180961fc4;
LAB_1803cac12:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "CCSGOInput camera distance",iVar2,iVar1);
    iVar2 = 0;
    iVar7 = DAT_180961fc8;
    DAT_180961fc4 = iVar1;
    if (lVar5 != 0) goto LAB_1803cac3c;
LAB_1803cac77:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "CCSGOInput camera command",iVar2,iVar7);
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar4 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    if (iVar1 == 0) goto LAB_1803caa0d;
    uStack_20 = uStack_20 & 0xffffffff;
    if ((local_28 == (char *)0x0) || (uStack_20 == 0)) goto LAB_1803caa0d;
    local_38 = 
    "49 8D 80 ? ? ? ? 41 80 B8 ? ? ? ? 00 F2 0F 10 00 F2 0F 11 44 24 20 75 ? F3 0F 10 44 24 24 F3 0F 10 4C 24 20 41 C6 80 ? ? ? ? 01 F3 41 0F 11 80 ? ? ? ? F3 41 0F 11 88 ? ? ? ? 41 C7 80 ? ? ? ? 00 00 F0 41 41 C7 80"
    ;
    local_30 = 0xd3;
    lVar5 = FUN_1801d1e00(&local_28,&local_38);
    if (lVar5 == 0) {
      pcVar8 = 
      "49 8D 80 ? ? ? ? 41 80 B8 ? ? ? ? 00 F2 0F 10 00 F2 0F 11 44 24 20 75 ? F3 0F 10 44 24 24 F3 0F 10 4C 24 20 41 C6 80 ? ? ? ? 01 F3 41 0F 11 80 ? ? ? ? F3 41 0F 11 88 ? ? ? ? 41 C7 80 ? ? ? ? 00 00 F0 41 41 C7 80"
      ;
      pcVar6 = "[error] pattern not found | %s:%s | %s";
      goto LAB_1803caa1b;
    }
    FUN_1803ca370("client.dll","input_camera",
                  "49 8D 80 ? ? ? ? 41 80 B8 ? ? ? ? 00 F2 0F 10 00 F2 0F 11 44 24 20 75 ? F3 0F 10 44 24 24 F3 0F 10 4C 24 20 41 C6 80 ? ? ? ? 01 F3 41 0F 11 80 ? ? ? ? F3 41 0F 11 88 ? ? ? ? 41 C7 80 ? ? ? ? 00 00 F0 41 41 C7 80"
                  ,lVar5);
    iVar1 = DAT_180961fb4;
    iVar2 = FUN_180011200(lVar5 + 3);
    if (0xfffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803caa3e;
    }
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","CCSGOInput view angles",iVar2,
                    iVar1);
    }
    DAT_180961fb4 = iVar2;
LAB_1803caa68:
    iVar1 = DAT_180961fb8;
    iVar2 = FUN_180011200(lVar5 + 10);
    if (0xfffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803caab3;
    }
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","CCSGOInput third person",iVar2,
                    iVar1);
    }
    DAT_180961fb8 = iVar2;
LAB_1803caadd:
    iVar1 = DAT_180961fc0;
    iVar2 = FUN_180011200(lVar5 + 0x34);
    if (0xfffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cab28;
    }
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","CCSGOInput camera yaw",iVar2,
                    iVar1);
    }
    DAT_180961fc0 = iVar2;
LAB_1803cab52:
    iVar1 = DAT_180961fbc;
    iVar2 = FUN_180011200(lVar5 + 0x3d);
    if (0xfffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cab9d;
    }
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","CCSGOInput camera pitch",iVar2,
                    iVar1);
    }
    DAT_180961fbc = iVar2;
LAB_1803cabc7:
    iVar1 = DAT_180961fc4;
    iVar2 = FUN_180011200(lVar5 + 0x44);
    if (0xfffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cac12;
    }
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","CCSGOInput camera distance",iVar2
                    ,iVar1);
    }
    DAT_180961fc4 = iVar2;
LAB_1803cac3c:
    iVar1 = DAT_180961fc8;
    iVar2 = FUN_180011200(lVar5 + 0x4f);
    if (0xfffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      iVar7 = iVar1;
      goto LAB_1803cac77;
    }
    iVar7 = iVar2;
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","CCSGOInput camera command",iVar2,
                    iVar1);
    }
  }
  DAT_181111844 = DAT_181111844 + 1;
  DAT_180961fc8 = iVar7;
  FUN_1803ca370("client.dll","command_ring",
                "B8 ? ? ? ? 8B CB F7 E3 C1 EA ? 69 C2 ? ? ? ? 2B C8 48 63 C1 33 C9 48 69 C0 ? ? ? ? 49 03 C0 39 58 08"
                ,0);
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
LAB_1803cadbe:
    pcVar8 = "";
    pcVar6 = "[error] module not found | module: %s | %s";
LAB_1803cadcc:
    DAT_181111840 = DAT_181111840 + 1;
    FUN_1802b2560(pcVar6,"client.dll","command_ring",pcVar8);
    iVar2 = 0;
    lVar5 = 0;
    iVar1 = DAT_180961fd0;
LAB_1803cadef:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "command ring size",iVar2,iVar1);
    iVar2 = 0;
    iVar7 = DAT_180961fd4;
    DAT_180961fd0 = iVar1;
    if (lVar5 != 0) goto LAB_1803cae19;
LAB_1803cae54:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "command ring stride",iVar2,iVar7);
    iVar2 = iVar7;
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar4 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    if (iVar1 == 0) goto LAB_1803cadbe;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_1803cadbe;
    local_28 = 
    "B8 ? ? ? ? 8B CB F7 E3 C1 EA ? 69 C2 ? ? ? ? 2B C8 48 63 C1 33 C9 48 69 C0 ? ? ? ? 49 03 C0 39 58 08"
    ;
    uStack_20 = 100;
    lVar5 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar5 == 0) {
      pcVar8 = 
      "B8 ? ? ? ? 8B CB F7 E3 C1 EA ? 69 C2 ? ? ? ? 2B C8 48 63 C1 33 C9 48 69 C0 ? ? ? ? 49 03 C0 39 58 08"
      ;
      pcVar6 = "[error] pattern not found | %s:%s | %s";
      goto LAB_1803cadcc;
    }
    FUN_1803ca370("client.dll","command_ring",
                  "B8 ? ? ? ? 8B CB F7 E3 C1 EA ? 69 C2 ? ? ? ? 2B C8 48 63 C1 33 C9 48 69 C0 ? ? ? ? 49 03 C0 39 58 08"
                  ,lVar5);
    iVar1 = DAT_180961fd0;
    iVar2 = FUN_180011200(lVar5 + 0xe);
    if (0xffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cadef;
    }
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","command ring size",iVar2,iVar1);
    }
    DAT_180961fd0 = iVar2;
LAB_1803cae19:
    iVar7 = DAT_180961fd4;
    iVar2 = FUN_180011200(lVar5 + 0x1c);
    if (0xffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cae54;
    }
    if (iVar2 != iVar7) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","command ring stride",iVar2,iVar7)
      ;
    }
  }
  DAT_181111844 = DAT_181111844 + 1;
  DAT_180961fd4 = iVar2;
  FUN_1803ca370("client.dll","view_setup_camera",
                "48 8D 93 ? ? ? ? 4C 89 64 24 28 4C 8D 83 ? ? ? ? 48 89 54 24 20 4C 8D 8B ? ? ? ? 48 8D 93 ? ? ? ? 48 8B CE 48 8B 06 FF 90"
                ,0);
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
LAB_1803caf9b:
    pcVar8 = "";
    pcVar6 = "[error] module not found | module: %s | %s";
LAB_1803cafa9:
    DAT_181111840 = DAT_181111840 + 1;
    FUN_1802b2560(pcVar6,"client.dll","view_setup_camera",pcVar8);
    iVar2 = 0;
    lVar5 = 0;
    iVar1 = DAT_180961ff0;
LAB_1803cafcc:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "CViewSetup origin",iVar2,iVar1);
    iVar2 = 0;
    iVar7 = DAT_180961ff4;
    DAT_180961ff0 = iVar1;
    if (lVar5 != 0) goto LAB_1803caff6;
LAB_1803cb031:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "CViewSetup angles",iVar2,iVar7);
    iVar2 = iVar7;
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar4 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    if (iVar1 == 0) goto LAB_1803caf9b;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_1803caf9b;
    local_28 = 
    "48 8D 93 ? ? ? ? 4C 89 64 24 28 4C 8D 83 ? ? ? ? 48 89 54 24 20 4C 8D 8B ? ? ? ? 48 8D 93 ? ? ? ? 48 8B CE 48 8B 06 FF 90"
    ;
    uStack_20 = 0x79;
    lVar5 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar5 == 0) {
      pcVar8 = 
      "48 8D 93 ? ? ? ? 4C 89 64 24 28 4C 8D 83 ? ? ? ? 48 89 54 24 20 4C 8D 8B ? ? ? ? 48 8D 93 ? ? ? ? 48 8B CE 48 8B 06 FF 90"
      ;
      pcVar6 = "[error] pattern not found | %s:%s | %s";
      goto LAB_1803cafa9;
    }
    FUN_1803ca370("client.dll","view_setup_camera",
                  "48 8D 93 ? ? ? ? 4C 89 64 24 28 4C 8D 83 ? ? ? ? 48 89 54 24 20 4C 8D 8B ? ? ? ? 48 8D 93 ? ? ? ? 48 8B CE 48 8B 06 FF 90"
                  ,lVar5);
    iVar1 = DAT_180961ff0;
    iVar2 = FUN_180011200(lVar5 + 0x22);
    if (0xffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cafcc;
    }
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","CViewSetup origin",iVar2,iVar1);
    }
    DAT_180961ff0 = iVar2;
LAB_1803caff6:
    iVar7 = DAT_180961ff4;
    iVar2 = FUN_180011200(lVar5 + 0xf);
    if (0xffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cb031;
    }
    if (iVar2 != iVar7) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","CViewSetup angles",iVar2,iVar7);
    }
  }
  DAT_181111844 = DAT_181111844 + 1;
  DAT_180961ff4 = iVar2;
  FUN_1803ca370("client.dll","entity_visibility",
                "FF 90 ? ? ? ? 48 8B 1E 48 8B CE FF 93 ? ? ? ? 0F B6 D0 48 8B CE FF 93",0);
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
LAB_1803cb171:
    pcVar8 = "";
    pcVar6 = "[error] module not found | module: %s | %s";
LAB_1803cb17f:
    DAT_181111840 = DAT_181111840 + 1;
    FUN_1802b2560(pcVar6,"client.dll","entity_visibility",pcVar8);
    iVar2 = 0;
    iVar1 = DAT_180962214;
LAB_1803cb1a0:
    FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                  "C_BaseEntity UpdateVisibility",iVar2,iVar1);
    iVar2 = iVar1;
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar4 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    if (iVar1 == 0) goto LAB_1803cb171;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_1803cb171;
    local_28 = "FF 90 ? ? ? ? 48 8B 1E 48 8B CE FF 93 ? ? ? ? 0F B6 D0 48 8B CE FF 93";
    uStack_20 = 0x45;
    lVar5 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar5 == 0) {
      pcVar8 = "FF 90 ? ? ? ? 48 8B 1E 48 8B CE FF 93 ? ? ? ? 0F B6 D0 48 8B CE FF 93";
      pcVar6 = "[error] pattern not found | %s:%s | %s";
      goto LAB_1803cb17f;
    }
    FUN_1803ca370("client.dll","entity_visibility",
                  "FF 90 ? ? ? ? 48 8B 1E 48 8B CE FF 93 ? ? ? ? 0F B6 D0 48 8B CE FF 93",lVar5);
    iVar1 = DAT_180962214;
    iVar2 = FUN_180011200(lVar5 + 2);
    if (0x1ffe < iVar2 - 1U) {
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cb1a0;
    }
    if (iVar2 != iVar1) {
      FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)","C_BaseEntity UpdateVisibility",
                    iVar2,iVar1);
    }
  }
  DAT_181111844 = DAT_181111844 + 1;
  DAT_180962214 = iVar2;
  FUN_1803ca370("client.dll","smoke_light_probe",
                "41 0F B6 00 38 81 ? ? ? ? 74 ? 48 8B 81 ? ? ? ? 48 85 C0 74 ? C6 80 ? ? ? ? 00",0);
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
LAB_1803cb2ef:
    pcVar8 = "";
    pcVar6 = "[error] module not found | module: %s | %s";
  }
  else {
    local_28 = (char *)0x0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar4 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    if (iVar1 == 0) goto LAB_1803cb2ef;
    local_30 = uStack_20 & 0xffffffff;
    local_38 = local_28;
    if ((local_28 == (char *)0x0) || (local_30 == 0)) goto LAB_1803cb2ef;
    local_28 = "41 0F B6 00 38 81 ? ? ? ? 74 ? 48 8B 81 ? ? ? ? 48 85 C0 74 ? C6 80 ? ? ? ? 00";
    uStack_20 = 0x4e;
    lVar5 = FUN_1801d1e00(&local_38,&local_28);
    if (lVar5 != 0) {
      FUN_1803ca370("client.dll","smoke_light_probe",
                    "41 0F B6 00 38 81 ? ? ? ? 74 ? 48 8B 81 ? ? ? ? 48 85 C0 74 ? C6 80 ? ? ? ? 00"
                    ,lVar5);
      iVar1 = DAT_180962218;
      iVar2 = FUN_180011200(lVar5 + 0xf);
      if (iVar2 - 1U < 0xffff) {
        if (iVar2 != iVar1) {
          FUN_1802b2560("[patterns] offset %s moved: 0x%X (was 0x%X)",
                        "C_SmokeGrenadeProjectile scene object",iVar2,iVar1);
        }
        DAT_180962218 = iVar2;
        return;
      }
      DAT_181111840 = DAT_181111840 + 1;
      goto LAB_1803cb31e;
    }
    pcVar8 = "41 0F B6 00 38 81 ? ? ? ? 74 ? 48 8B 81 ? ? ? ? 48 85 C0 74 ? C6 80 ? ? ? ? 00";
    pcVar6 = "[error] pattern not found | %s:%s | %s";
  }
  DAT_181111840 = DAT_181111840 + 1;
  FUN_1802b2560(pcVar6,"client.dll","smoke_light_probe",pcVar8);
  iVar2 = 0;
  iVar1 = DAT_180962218;
LAB_1803cb31e:
  FUN_1802b2560("[error] offset not resolved | %s | read 0x%X, keeping the last verified 0x%X",
                "C_SmokeGrenadeProjectile scene object",iVar2,iVar1);
  DAT_180962218 = iVar1;
  return;
}



/* ===== 1803cb350 FUN_1803cb350 ===== */
/* DECOMPILATION FAILED: Exception while decompiling 1803cb350: process: timeout
 */

/* ===== 1803d5e10 FUN_1803d5e10 ===== */

undefined8 * FUN_1803d5e10(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar10 = (ulonglong)DAT_181111848;
  uVar15 = 0x276276276276276;
  lVar7 = ((longlong)DAT_181111850 - (longlong)DAT_181111848 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (lVar7 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_1800118d0();
  }
  uVar1 = lVar7 + 1;
  uVar9 = ((longlong)DAT_181111858 - (longlong)DAT_181111848 >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (uVar9 <= 0x276276276276276 - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar15 = uVar1;
    if (uVar1 <= uVar9) {
      uVar15 = uVar9;
    }
    if (0x276276276276276 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar8 = (undefined8 *)FUN_18000fb70(uVar15 * 0x68);
  puVar13 = puVar8 + ((longlong)(param_2 - uVar10) / 0x68) * 0xd;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  uVar6 = param_3[1];
  *puVar13 = *param_3;
  puVar13[1] = uVar6;
  uVar6 = param_3[3];
  puVar13[2] = param_3[2];
  puVar13[3] = uVar6;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  uVar6 = param_3[5];
  puVar13[4] = param_3[4];
  puVar13[5] = uVar6;
  uVar6 = param_3[7];
  puVar13[6] = param_3[6];
  puVar13[7] = uVar6;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar4 = *(undefined4 *)(param_3 + 9);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x4c);
  *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((longlong)puVar13 + 0x44) = uVar3;
  *(undefined4 *)(puVar13 + 9) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x4c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar4 = *(undefined4 *)(param_3 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x5c);
  *(undefined4 *)(puVar13 + 10) = *(undefined4 *)(param_3 + 10);
  *(undefined4 *)((longlong)puVar13 + 0x54) = uVar3;
  *(undefined4 *)(puVar13 + 0xb) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x5c) = uVar5;
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  *(undefined1 *)(param_3 + 8) = 0;
  puVar13[0xc] = param_3[0xc];
  uVar10 = (ulonglong)DAT_181111848;
  puVar14 = puVar8;
  if ((undefined8 *)param_2 != DAT_181111850) {
    FUN_1803d6090(DAT_181111848,param_2,puVar8);
    puVar14 = puVar13 + 0xd;
    uVar10 = param_2;
  }
  puVar11 = auStack_48;
  puVar12 = auStack_48;
  FUN_1803d6090(uVar10,DAT_181111850,puVar14);
  uVar9 = (ulonglong)DAT_181111850;
  uVar10 = (ulonglong)DAT_181111848;
  if (DAT_181111848 == (undefined8 *)0x0) goto LAB_1803d6033;
  for (; uVar10 != uVar9; uVar10 = uVar10 + 0x68) {
    FUN_18000f890(uVar10 + 0x40);
    FUN_18000f890(uVar10 + 0x20);
    FUN_18000f890(uVar10);
  }
  uVar10 = (ulonglong)DAT_181111848;
  if ((ulonglong)(((longlong)DAT_181111858 - (longlong)DAT_181111848 >> 3) * 8) < 0x1000) {
LAB_1803d602b:
    puVar12 = puVar11;
  }
  else {
    uVar10 = *(ulonglong *)((longlong)DAT_181111848 - 8);
    uVar9 = ((longlong)DAT_181111848 - uVar10) - 8;
    if (0x1f < uVar9) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar11 = auStack_40;
      uVar10 = uVar9;
      goto LAB_1803d602b;
    }
  }
  *(undefined8 *)(puVar12 + -8) = 0x1803d6033;
  thunk_FUN_1803d64e0(uVar10);
LAB_1803d6033:
  DAT_181111850 = puVar8 + uVar1 * 0xd;
  DAT_181111848 = puVar8;
  DAT_181111858 = puVar8 + uVar15 * 0xd;
  return puVar13;
}



/* ===== 1803d6090 FUN_1803d6090 ===== */

undefined8 * FUN_1803d6090(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xd) {
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
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    uVar1 = param_1[5];
    param_3[4] = param_1[4];
    param_3[5] = uVar1;
    uVar1 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    param_1[7] = 0xf;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    uVar1 = param_1[9];
    param_3[8] = param_1[8];
    param_3[9] = uVar1;
    uVar1 = param_1[0xb];
    param_3[10] = param_1[10];
    param_3[0xb] = uVar1;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0xf;
    param_3[0xc] = param_1[0xc];
    param_3 = param_3 + 0xd;
  }
  return param_3;
}



/* ===== 1803d6150 FUN_1803d6150 ===== */

void FUN_1803d6150(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
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
  return;
}



/* ===== 1803d6200 FUN_1803d6200 ===== */

void FUN_1803d6200(longlong param_1)

{
  FUN_1804014e0();
  FUN_1803f5870(param_1 + 8);
  return;
}



/* ===== 1803d6220 printf ===== */

int __cdecl printf(char *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
                    /* 0x3d6220  135  printf */
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_180013640();
  iVar3 = FUN_180500ea4(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



/* ===== 1803d6270 _vsnprintf_l ===== */

int __cdecl
_vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x3d6270  91  _vsnprintf_l */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1803d62d0 _vsnprintf ===== */

int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  ulonglong *puVar2;
  
                    /* 0x3d62d0  88  _vsnprintf */
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,_Dest,_Count,_Format,0,_Args);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== 1803d6320 FUN_1803d6320 ===== */

void FUN_1803d6320(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 != 0) {
    FUN_1803fb9a0(lVar2);
    lVar3 = DAT_180ca0a50;
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
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    FUN_1803fb9a0(lVar2);
    lVar3 = DAT_180ca0a50;
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
  FUN_1803f5870(param_1 + 0xc0);
  FUN_1803f5870(param_1 + 0x70);
  return;
}



/* ===== 1803d6470 FUN_1803d6470 ===== */

longlong FUN_1803d6470(uint param_1)

{
  if ((param_1 & 0xf000) != 0) {
    if (param_1 == 0x1000) {
      param_1 = 0x297;
    }
    else if (param_1 == 0x2000) {
      param_1 = 0x298;
    }
    else if (param_1 == 0x4000) {
      param_1 = 0x299;
    }
    else if (param_1 == 0x8000) {
      param_1 = 0x29a;
    }
  }
  return (longlong)(int)(param_1 - 0x200) * 0x10 + 0x134 + DAT_180ca0a50;
}



/* ===== 1803d64e0 FUN_1803d64e0 ===== */

void FUN_1803d64e0(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180c9ffc8,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_18051be70(DVar3);
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = uVar4;
  }
  return;
}



/* ===== 1803d64f0 FUN_1803d64f0 ===== */

undefined4 * FUN_1803d64f0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x96) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xce) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd2) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd6) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xda) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xde) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe2) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xea) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xee) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf2) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xf6) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xfe) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x102) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x10e) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x116) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x11e) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x122) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x126) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x132) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x136) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x13a) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x13e) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x142) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x146) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x14a) = 0;
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x3f19999a;
  param_1[5] = 0x41000000;
  *(undefined8 *)(param_1 + 6) = 0x41000000;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x40800000;
  param_1[10] = 0x42000000;
  *(undefined8 *)(param_1 + 0xb) = 0x42000000;
  *(undefined8 *)(param_1 + 0xd) = 0x3f000000;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x40800000;
  *(undefined8 *)(param_1 + 0x14) = 0x40400000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x41000000;
  param_1[0x18] = 0x40800000;
  param_1[0x19] = 0x40800000;
  param_1[0x1a] = 0x40800000;
  param_1[0x1b] = 0x40800000;
  *(undefined8 *)(param_1 + 0x1c) = 0x40000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x41a80000;
  param_1[0x20] = 0x40c00000;
  param_1[0x21] = 0x41600000;
  param_1[0x22] = 0x41100000;
  param_1[0x23] = 0x40000000;
  *(undefined8 *)(param_1 + 0x24) = 0x41400000;
  *(undefined8 *)(param_1 + 0x26) = 0x40800000;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x29) = 0x40a00000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x2c] = 0x42a00000;
  param_1[0x2d] = 0xbf800000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0x3f800000;
  param_1[0x31] = 0x3f1c61aa;
  *(undefined8 *)(param_1 + 0x32) = 0x3f000000;
  param_1[0x34] = 0x40000;
  *(undefined8 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x37) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x40000000;
  param_1[0x3b] = 0x40400000;
  param_1[0x3c] = 0x40400000;
  param_1[0x3d] = 1;
  param_1[0x3e] = 0x3f000000;
  *(undefined8 *)(param_1 + 0x3f) = 0x3f000000;
  param_1[0x41] = 0;
  param_1[0x42] = 0x3f800000;
  param_1[0x43] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x44) = 0x40400000;
  param_1[0x46] = 0x3f000000;
  param_1[0x47] = 0x41a00000;
  param_1[0x48] = 0x40400000;
  param_1[0x49] = 0x41980000;
  param_1[0x4a] = 0x41980000;
  param_1[0x4b] = 0x40400000;
  param_1[0x4c] = 0x40400000;
  param_1[0x4d] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x4e) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x13a) = 1;
  param_1[0x4f] = 0x3f8f5c29;
  param_1[0x50] = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x51) = 0x42c80000;
  param_1[0x53] = 0x3f490fdb;
  param_1[0x14c] = 0x3e19999a;
  param_1[0x14d] = 0x3e19999a;
  param_1[0x14e] = 0x3ecccccd;
  param_1[0x14f] = 0xa400;
  param_1[0x150] = 0x30400;
  *(undefined8 *)(param_1 + 0x151) = 0x3f800000;
  param_1[0x153] = 0;
  FUN_1803fac90();
  return param_1;
}



/* ===== 1803d6b10 FUN_1803d6b10 ===== */

undefined8 * FUN_1803d6b10(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  FUN_180540170(param_1,0,0xbe8);
  *param_1 = 0;
  param_1[4] = "imgui.ini";
  *(undefined4 *)(param_1 + 1) = 0xbf800000;
  param_1[5] = "imgui_log.txt";
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xbf800000;
  *(undefined4 *)(param_1 + 3) = 0x3c888889;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40a00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x1000000;
  *(undefined4 *)(param_1 + 0x179) = 0x3f800000;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x10001;
  *(undefined4 *)(param_1 + 10) = 0x10100;
  *(undefined4 *)(param_1 + 0xb) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x12900000;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0x101;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x42700000;
  *(undefined4 *)(param_1 + 0x11) = 0x10100;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xe) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xf) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3e8ccccd;
  *(undefined4 *)(param_1 + 0x10) = 0x3d4ccccd;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x158) = 0xff7fffff;
  *(undefined4 *)((longlong)param_1 + 0xac4) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x171) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xb74) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xb8c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x16f) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x172) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xb7c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xb94) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x170) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x173) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xb84) = 0xbf800000;
  lVar1 = 0;
  do {
    lVar2 = lVar1 + 1;
    *(undefined4 *)((longlong)param_1 + lVar1 * 0x10 + 0x114) = 0xbf800000;
    *(undefined4 *)(param_1 + lVar1 * 2 + 0x22) = 0xbf800000;
    lVar1 = lVar2;
  } while (lVar2 != 0x9b);
  *(undefined1 *)((longlong)param_1 + 0xbb5) = 1;
  return param_1;
}



/* ===== 1803d6d30 FUN_1803d6d30 ===== */

void FUN_1803d6d30(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xbb5) != '\0')) {
    lVar4 = *(longlong *)(param_1 + 0xe0);
    iVar3 = *(int *)(lVar4 + 0x1494);
    *(int *)(lVar4 + 0x1494) = iVar3 + 1;
    iVar6 = *(int *)(lVar4 + 0x1474);
    if (*(int *)(lVar4 + 0x1470) == iVar6) {
      iVar7 = *(int *)(lVar4 + 0x1470) + 1;
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar6;
      }
      FUN_1803f6e00(lVar4 + 0x1470,iVar7);
    }
    lVar8 = (longlong)*(int *)(lVar4 + 0x1470) * 0x1c;
    lVar5 = *(longlong *)(lVar4 + 0x1478);
    puVar1 = (undefined8 *)(lVar8 + lVar5);
    *puVar1 = 0x200000005;
    puVar1[1] = CONCAT44(param_2,iVar3);
    puVar2 = (ulonglong *)(lVar8 + 0xc + lVar5);
    *puVar2 = (ulonglong)param_2;
    puVar2[1] = 0;
    *(int *)(lVar4 + 0x1470) = *(int *)(lVar4 + 0x1470) + 1;
  }
  return;
}



/* ===== 1803d6e10 FUN_1803d6e10 ===== */

void FUN_1803d6e10(longlong param_1,ushort param_2)

{
  if (((param_2 != 0) || (*(short *)(param_1 + 0xbb6) != 0)) && (*(char *)(param_1 + 0xbb5) != '\0')
     ) {
    if ((param_2 & 0xfc00) == 0xd800) {
      if (*(short *)(param_1 + 0xbb6) != 0) {
        FUN_1803d6d30(param_1,0xfffd);
      }
      *(ushort *)(param_1 + 0xbb6) = param_2;
      return;
    }
    if (*(short *)(param_1 + 0xbb6) != 0) {
      if ((param_2 & 0xfc00) == 0xdc00) {
        param_2 = 0xfffd;
      }
      else {
        FUN_1803d6d30(param_1,0xfffd);
      }
      *(undefined2 *)(param_1 + 0xbb6) = 0;
    }
    FUN_1803d6d30(param_1,param_2);
  }
  return;
}



/* ===== 1803d6ec0 FUN_1803d6ec0 ===== */

void FUN_1803d6ec0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  uVar5 = 0x200;
  do {
    if (6 < uVar5 - 0x290) {
      uVar3 = (ulonglong)uVar5;
      *(undefined1 *)(lVar1 + -0x1ecc + uVar3 * 0x10) = 0;
      *(undefined4 *)(lVar1 + -0x1ec8 + uVar3 * 0x10) = 0xbf800000;
      *(undefined4 *)(lVar1 + -0x1ec4 + uVar3 * 0x10) = 0xbf800000;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 0x29b);
  *(undefined8 *)(param_1 + 0x104) = 0;
  iVar4 = *(int *)(param_1 + 0xbbc);
  if (iVar4 < 0) {
    iVar4 = iVar4 / 2 + iVar4;
    iVar2 = 0;
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_1803f6b20((undefined4 *)(param_1 + 3000),iVar2);
  }
  *(undefined4 *)(param_1 + 3000) = 0;
  return;
}



/* ===== 1803d6f60 FUN_1803d6f60 ===== */

void FUN_1803d6f60(longlong param_1,uint param_2,char param_3,float param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xbb5) != '\0')) {
    lVar5 = *(longlong *)(param_1 + 0xe0);
    if (*(char *)(lVar5 + 0x78) != '\0') {
      if (param_2 == 0x8000) {
        param_2 = 0x1000;
      }
      else if (param_2 == 0x1000) {
        param_2 = 0x8000;
      }
      else if (param_2 == 0x212) {
        param_2 = 0x20f;
      }
      else if (param_2 == 0x216) {
        param_2 = 0x213;
      }
      else if (param_2 == 0x20f) {
        param_2 = 0x212;
      }
      else if (param_2 == 0x213) {
        param_2 = 0x216;
      }
    }
    iVar3 = *(int *)(lVar5 + 0x1470);
    uVar12 = iVar3 - 1;
    if (-1 < (int)uVar12) {
      do {
        piVar8 = (int *)((ulonglong)uVar12 * 0x1c + *(longlong *)(lVar5 + 0x1478));
        if ((*piVar8 == 4) && (piVar8[3] == param_2)) goto LAB_1803d701c;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    piVar8 = (int *)0x0;
LAB_1803d701c:
    uVar12 = param_2;
    if ((param_2 & 0xf000) != 0) {
      if (param_2 == 0x1000) {
        uVar12 = 0x297;
      }
      else if (param_2 == 0x2000) {
        uVar12 = 0x298;
      }
      else if (param_2 == 0x4000) {
        uVar12 = 0x299;
      }
      else if (param_2 == 0x8000) {
        uVar12 = 0x29a;
      }
    }
    if (piVar8 == (int *)0x0) {
      cVar9 = *(char *)(lVar5 + 0x134 + ((longlong)(int)uVar12 + -0x200) * 0x10);
      fVar13 = *(float *)(lVar5 + 0x140 + ((longlong)(int)uVar12 + -0x200) * 0x10);
    }
    else {
      cVar9 = (char)piVar8[4];
      fVar13 = (float)piVar8[5];
    }
    if ((cVar9 != param_3) || (fVar13 != param_4)) {
      iVar4 = *(int *)(lVar5 + 0x1494);
      *(int *)(lVar5 + 0x1494) = iVar4 + 1;
      iVar7 = *(int *)(lVar5 + 0x1474);
      if (iVar3 == iVar7) {
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        iVar10 = iVar3 + 1;
        if (iVar3 + 1 < iVar7) {
          iVar10 = iVar7;
        }
        FUN_1803f6e00(lVar5 + 0x1470,iVar10);
      }
      lVar11 = (longlong)*(int *)(lVar5 + 0x1470) * 0x1c;
      lVar6 = *(longlong *)(lVar5 + 0x1478);
      puVar1 = (undefined8 *)(lVar11 + lVar6);
      *puVar1 = CONCAT44((param_2 - 0x278 < 0x18) + 2,4);
      puVar1[1] = CONCAT44(param_2,iVar4);
      puVar2 = (ulonglong *)(lVar11 + 0xc + lVar6);
      *puVar2 = (ulonglong)CONCAT14(param_3,param_2);
      puVar2[1] = (ulonglong)(uint)param_4;
      *(int *)(lVar5 + 0x1470) = *(int *)(lVar5 + 0x1470) + 1;
    }
  }
  return;
}



/* ===== 1803d7170 FUN_1803d7170 ===== */

void FUN_1803d7170(longlong param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  
  if (*(char *)(param_1 + 0xbb5) != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xe0);
    if (DAT_1808aceb0 < param_3) {
      iVar6 = (int)param_3;
      if ((param_3 < 0.0) && ((float)iVar6 != param_3)) {
        iVar6 = iVar6 + -1;
      }
      param_3 = (float)iVar6;
    }
    if (DAT_1808aceb0 < param_2) {
      iVar6 = (int)param_2;
      if ((param_2 < 0.0) && ((float)iVar6 != param_2)) {
        iVar6 = iVar6 + -1;
      }
      param_2 = (float)iVar6;
    }
    iVar6 = *(int *)(lVar4 + 0x1470);
    uVar8 = iVar6 - 1;
    if (-1 < (int)uVar8) {
      lVar5 = *(longlong *)(lVar4 + 0x1478);
      do {
        lVar10 = (ulonglong)uVar8 * 0x1c;
        if (*(int *)(lVar10 + lVar5) == 1) {
          fVar2 = *(float *)(lVar10 + 0xc + lVar5);
          fVar11 = *(float *)(lVar10 + 0x10 + lVar5);
          goto LAB_1803d7226;
        }
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    fVar2 = *(float *)(lVar4 + 0x110);
    fVar11 = *(float *)(lVar4 + 0x114);
LAB_1803d7226:
    if ((fVar2 != param_2) || (fVar11 != param_3)) {
      iVar3 = *(int *)(lVar4 + 0x1494);
      *(int *)(lVar4 + 0x1494) = iVar3 + 1;
      iVar7 = *(int *)(lVar4 + 0x1474);
      uVar8 = *(uint *)(lVar4 + 0x1490);
      if (iVar6 == iVar7) {
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        iVar9 = iVar6 + 1;
        if (iVar6 + 1 < iVar7) {
          iVar9 = iVar7;
        }
        FUN_1803f6e00(lVar4 + 0x1470,iVar9);
      }
      lVar10 = (longlong)*(int *)(lVar4 + 0x1470) * 0x1c;
      lVar5 = *(longlong *)(lVar4 + 0x1478);
      puVar1 = (undefined8 *)(lVar10 + lVar5);
      *puVar1 = 0x100000001;
      puVar1[1] = CONCAT44(param_2,iVar3);
      puVar1 = (undefined8 *)(lVar10 + 0xc + lVar5);
      *puVar1 = CONCAT44(param_3,param_2);
      puVar1[1] = (ulonglong)uVar8;
      *(int *)(lVar4 + 0x1470) = *(int *)(lVar4 + 0x1470) + 1;
    }
  }
  return;
}



/* ===== 1803d7300 FUN_1803d7300 ===== */

void FUN_1803d7300(longlong param_1,int param_2,char param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  cVar7 = *(char *)(param_1 + 0xbb5);
  lVar5 = *(longlong *)(param_1 + 0xe0);
  do {
    if (cVar7 == '\0') {
      return;
    }
    if ((((*(char *)(param_1 + 0x50) != '\0') && (param_2 == 0)) &&
        (*(char *)(param_1 + 0xb73) != '\0')) && (param_2 = 1, param_3 == '\0')) {
      *(undefined1 *)(param_1 + 0xb73) = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x1470);
    uVar13 = iVar3 - 1;
    uVar14 = (ulonglong)uVar13;
    if (-1 < (int)uVar13) {
      lVar6 = *(longlong *)(lVar5 + 0x1478);
      uVar12 = uVar14;
      do {
        lVar10 = uVar12 * 0x1c;
        if ((*(int *)(lVar10 + lVar6) == 3) && (*(int *)(lVar10 + 0xc + lVar6) == param_2)) {
          cVar7 = *(char *)(lVar10 + 0x10 + lVar6);
          goto LAB_1803d73ab;
        }
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
      } while (-1 < (int)uVar11);
    }
    cVar7 = *(char *)(lVar5 + 0x118 + (longlong)param_2);
LAB_1803d73ab:
    if (cVar7 == param_3) {
      return;
    }
    if (((*(char *)(param_1 + 0x50) == '\0') || (param_2 != 0)) || (param_3 == '\0')) {
LAB_1803d7458:
      iVar4 = *(int *)(lVar5 + 0x1494);
      *(int *)(lVar5 + 0x1494) = iVar4 + 1;
      iVar8 = *(int *)(lVar5 + 0x1474);
      uVar13 = *(uint *)(lVar5 + 0x1490);
      if (iVar3 == iVar8) {
        if (iVar8 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar8 / 2 + iVar8;
        }
        iVar9 = iVar3 + 1;
        if (iVar3 + 1 < iVar8) {
          iVar9 = iVar8;
        }
        FUN_1803f6e00(lVar5 + 0x1470,iVar9);
      }
      lVar10 = (longlong)*(int *)(lVar5 + 0x1470) * 0x1c;
      lVar6 = *(longlong *)(lVar5 + 0x1478);
      puVar1 = (undefined8 *)(lVar10 + lVar6);
      *puVar1 = 0x100000003;
      puVar1[1] = CONCAT44(param_2,iVar4);
      puVar2 = (ulonglong *)(lVar10 + 0xc + lVar6);
      *puVar2 = (ulonglong)CONCAT14(param_3,param_2);
      puVar2[1] = (ulonglong)uVar13;
      *(int *)(lVar5 + 0x1470) = *(int *)(lVar5 + 0x1470) + 1;
      return;
    }
    if (-1 < (int)uVar13) {
      lVar6 = *(longlong *)(lVar5 + 0x1478);
      do {
        lVar10 = uVar14 * 0x1c;
        if ((*(int *)(lVar10 + lVar6) == 4) && (*(int *)(lVar10 + 0xc + lVar6) == 0x8000)) {
          cVar7 = *(char *)(lVar10 + 0x10 + lVar6);
          goto LAB_1803d7404;
        }
        uVar13 = (int)uVar14 - 1;
        uVar14 = (ulonglong)uVar13;
      } while (-1 < (int)uVar13);
    }
    cVar7 = *(char *)(lVar5 + 0x12f);
LAB_1803d7404:
    if (cVar7 == '\0') goto LAB_1803d7458;
    if ((*(byte *)(lVar5 + 0x28f4) & 0x80) != 0) {
      FUN_1803f5060("[io] Super+Left Click aliased into Right Click\n");
    }
    *(undefined1 *)(param_1 + 0xb73) = 1;
    param_3 = '\x01';
    cVar7 = *(char *)(param_1 + 0xbb5);
    param_2 = 1;
    lVar5 = *(longlong *)(param_1 + 0xe0);
  } while( true );
}



/* ===== 1803d7520 FUN_1803d7520 ===== */

void FUN_1803d7520(longlong param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if ((*(char *)(param_1 + 0xbb5) != '\0') && ((param_2 != 0.0 || (param_3 != 0.0)))) {
    lVar4 = *(longlong *)(param_1 + 0xe0);
    iVar2 = *(int *)(lVar4 + 0x1494);
    *(int *)(lVar4 + 0x1494) = iVar2 + 1;
    iVar6 = *(int *)(lVar4 + 0x1474);
    uVar3 = *(uint *)(lVar4 + 0x1490);
    if (*(int *)(lVar4 + 0x1470) == iVar6) {
      iVar7 = *(int *)(lVar4 + 0x1470) + 1;
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar6;
      }
      FUN_1803f6e00(lVar4 + 0x1470,iVar7);
    }
    lVar8 = (longlong)*(int *)(lVar4 + 0x1470) * 0x1c;
    lVar5 = *(longlong *)(lVar4 + 0x1478);
    puVar1 = (undefined8 *)(lVar8 + lVar5);
    *puVar1 = 0x100000002;
    puVar1[1] = CONCAT44(param_2,iVar2);
    puVar1 = (undefined8 *)(lVar8 + 0xc + lVar5);
    *puVar1 = CONCAT44(param_3,param_2);
    puVar1[1] = (ulonglong)uVar3;
    *(int *)(lVar4 + 0x1470) = *(int *)(lVar4 + 0x1470) + 1;
  }
  return;
}



/* ===== 1803d7610 FUN_1803d7610 ===== */

void FUN_1803d7610(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_180013640();
  iVar1 = FUN_180501904(*puVar2 | 1,param_1,param_2,param_3,0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (param_1 != 0) {
    if ((iVar1 == -1) || ((int)param_2 <= iVar1)) {
      iVar1 = (int)param_2 + -1;
    }
    *(undefined1 *)(iVar1 + param_1) = 0;
  }
  return;
}



/* ===== 1803d7690 FUN_1803d7690 ===== */

void FUN_1803d7690(void)

{
  FUN_1803d76b0();
  return;
}



/* ===== 1803d76b0 FUN_1803d76b0 ===== */

void FUN_1803d76b0(longlong *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  ulonglong *puVar6;
  char *_Str;
  
  lVar2 = DAT_180ca0a50;
  if (*param_3 == '%') {
    if (param_3[1] == 's') {
      if (param_3[2] == '\0') {
        _Str = "(null)";
        if ((char *)*param_4 != (char *)0x0) {
          _Str = (char *)*param_4;
        }
        *param_1 = (longlong)_Str;
        if (param_2 == (longlong *)0x0) {
          return;
        }
        sVar5 = strlen(_Str);
        *param_2 = (longlong)(_Str + sVar5);
        return;
      }
    }
    else if ((((param_3[1] == '.') && (param_3[2] == '*')) && (param_3[3] == 's')) &&
            (param_3[4] == '\0')) {
      lVar2 = param_4[1];
      iVar1 = (int)*param_4;
      if (lVar2 != 0) {
        *param_1 = lVar2;
        *param_2 = iVar1 + lVar2;
        return;
      }
      *param_1 = (longlong)&DAT_1808a7550;
      iVar4 = 6;
      if (iVar1 < 6) {
        iVar4 = iVar1;
      }
      *param_2 = (longlong)(&DAT_1808a7550 + iVar4);
      return;
    }
  }
  iVar1 = *(int *)(DAT_180ca0a50 + 11000);
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x2b00);
  puVar6 = (ulonglong *)FUN_180013640();
  iVar4 = FUN_180501904(*puVar6 | 1,lVar3,(longlong)iVar1,param_3,0,param_4);
  if (iVar4 < 0) {
    iVar4 = -1;
  }
  if (lVar3 != 0) {
    if ((iVar4 == -1) || (iVar1 <= iVar4)) {
      iVar4 = iVar1 + -1;
    }
    *(undefined1 *)(iVar4 + lVar3) = 0;
  }
  *param_1 = *(longlong *)(lVar2 + 0x2b00);
  if (param_2 != (longlong *)0x0) {
    *param_2 = (longlong)iVar4 + *(longlong *)(lVar2 + 0x2b00);
  }
  return;
}



/* ===== 1803d7830 FUN_1803d7830 ===== */

uint FUN_1803d7830(byte *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  
  param_3 = ~param_3;
  uVar2 = param_3;
  if (param_2 != 0) {
    do {
      if (((*param_1 == 0x23) && (1 < param_2 - 1U)) &&
         ((param_1[1] == 0x23 && (param_1[2] == 0x23)))) {
        lVar3 = 3;
        lVar4 = -3;
        uVar2 = param_3;
      }
      else {
        lVar3 = 1;
        uVar2 = uVar2 >> 8 ^
                *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)*param_1) * 4);
        lVar4 = -1;
      }
      param_1 = param_1 + lVar3;
      param_2 = param_2 + lVar4;
    } while (param_2 != 0);
    return ~uVar2;
  }
  bVar1 = *param_1;
  while (bVar1 != 0) {
    pbVar5 = param_1 + 1;
    if (((bVar1 == 0x23) && (*pbVar5 == 0x23)) && (param_1[2] == 0x23)) {
      pbVar5 = param_1 + 3;
      uVar2 = param_3;
    }
    else {
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)bVar1) * 4);
    }
    param_1 = pbVar5;
    bVar1 = *pbVar5;
  }
  return ~uVar2;
}



/* ===== 1803d7900 FUN_1803d7900 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1803d7900(LPCSTR param_1,LPCSTR param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int cchWideChar;
  LPWSTR pWVar4;
  undefined8 uVar5;
  short sVar6;
  int *piVar7;
  WCHAR *lpWideCharStr;
  undefined1 auStackY_298 [32];
  WCHAR local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_298;
  iVar3 = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)0x0,0);
  pWVar4 = (LPWSTR)0x0;
  if ((0x104 < cchWideChar + iVar3) &&
     (pWVar4 = (LPWSTR)_malloc_base((longlong)(cchWideChar + iVar3) * 2), DAT_180ca0a50 != 0)) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  lpWideCharStr = local_258;
  if (pWVar4 != (LPWSTR)0x0) {
    lpWideCharStr = pWVar4;
  }
  MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,iVar3);
  MultiByteToWideChar(0xfde9,0,param_2,-1,lpWideCharStr + iVar3,cchWideChar);
  uVar5 = FUN_18051819c(lpWideCharStr,lpWideCharStr + iVar3);
  lVar2 = DAT_180ca0a50;
  if (pWVar4 != (LPWSTR)0x0) {
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar7 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar7 != *piVar1) {
        iVar3 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar6 = (short)iVar3 + (short)(iVar3 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar6;
        piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)sVar6 * 8);
        *piVar7 = *piVar1;
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar6 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(pWVar4);
  }
  return uVar5;
}



/* ===== 1803d7ae0 FUN_1803d7ae0 ===== */

void * FUN_1803d7ae0(undefined8 param_1,undefined8 param_2,size_t *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  FILE *_File;
  void *_DstBuf;
  size_t sVar6;
  short sVar7;
  int *piVar8;
  size_t _Count;
  
  if (param_3 != (size_t *)0x0) {
    *param_3 = 0;
  }
  _File = (FILE *)FUN_1803d7900(param_1,&DAT_18089f780);
  if (_File == (FILE *)0x0) {
    return (void *)0x0;
  }
  iVar4 = FUN_180518fe4(_File);
  if ((iVar4 != -1) && (iVar5 = FUN_180512148(_File,0,2), iVar5 == 0)) {
    iVar5 = FUN_180518fe4(_File);
    _Count = (size_t)iVar5;
    if ((iVar5 != -1) &&
       ((iVar4 = FUN_180512148(_File,iVar4,0), iVar4 == 0 && (_Count != 0xffffffffffffffff)))) {
      _DstBuf = (void *)_malloc_base(_Count);
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (_DstBuf != (void *)0x0) {
        sVar6 = fread(_DstBuf,1,_Count,_File);
        if (sVar6 == _Count) {
          FUN_18051053c(_File);
          if (param_3 != (size_t *)0x0) {
            *param_3 = _Count;
          }
          return _DstBuf;
        }
        FUN_18051053c(_File);
        lVar3 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          piVar1 = (int *)(DAT_180ca0a50 + 4);
          piVar8 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8
                          );
          if (*piVar8 != *piVar1) {
            iVar4 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
            lVar2 = DAT_180ca0a50 + 0x29c0;
            sVar7 = (short)iVar4 + (short)(iVar4 / 6) * -6;
            *(short *)(DAT_180ca0a50 + 0x29bc) = sVar7;
            piVar8 = (int *)(lVar2 + (longlong)sVar7 * 8);
            *piVar8 = *piVar1;
            *(undefined4 *)(lVar3 + 0x29c4 + (longlong)sVar7 * 8) = 0;
          }
          *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
          piVar1 = (int *)(lVar3 + 0x29b8);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_1805277b0(_DstBuf);
        return (void *)0x0;
      }
    }
  }
  FUN_18051053c(_File);
  return (void *)0x0;
}



/* ===== 1803d7c80 FUN_1803d7c80 ===== */

int FUN_1803d7c80(uint *param_1,byte *param_2,byte *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;
  
  bVar6 = *param_2;
  cVar1 = (&DAT_1808a9078)[bVar6 >> 3];
  lVar9 = (longlong)cVar1;
  iVar7 = (uint)(cVar1 == '\0') + (int)cVar1;
  if (param_3 == (byte *)0x0) {
    param_3 = param_2 + iVar7;
  }
  if (param_3 <= param_2) {
    bVar6 = 0;
  }
  if (param_2 + 1 < param_3) {
    bVar11 = param_2[1];
  }
  else {
    bVar11 = 0;
  }
  if (param_2 + 2 < param_3) {
    bVar10 = param_2[2];
  }
  else {
    bVar10 = 0;
  }
  if (param_2 + 3 < param_3) {
    bVar5 = param_2[3];
  }
  else {
    bVar5 = 0;
  }
  uVar4 = (bVar5 & 0x3f |
          (bVar10 & 0x3f) << 6 |
          (bVar11 & 0x3f) << 0xc | (*(uint *)(&DAT_1808a90b0 + lVar9 * 4) & (uint)bVar6) << 0x12) >>
          ((byte)*(undefined4 *)(&DAT_1808a9060 + lVar9 * 4) & 0x1f);
  *param_1 = uVar4;
  uVar8 = 0;
  if (uVar4 >> 0xb == 0x1b) {
    uVar8 = 0x80;
  }
  uVar2 = 0;
  if (0xffff < uVar4) {
    uVar2 = 0x100;
  }
  if ((int)((uVar8 | uVar2 | -(uint)(uVar4 < *(uint *)(&DAT_1808a9048 + lVar9 * 4)) & 0x40 |
            (((uint)(bVar5 >> 2) | bVar10 & 0xc0) >> 2 | bVar11 & 0xc0) >> 2) ^ 0x2a) >>
      ((byte)*(undefined4 *)(&DAT_1808a9098 + lVar9 * 4) & 0x1f) == 0) {
    return iVar7;
  }
  *param_1 = 0xfffd;
  iVar3 = (uint)(bVar5 != 0) + (uint)(bVar6 != 0) + (uint)(bVar11 != 0) + (uint)(bVar10 != 0);
  if (iVar7 < iVar3) {
    iVar3 = iVar7;
  }
  return iVar3;
}



/* ===== 1803d7e10 FUN_1803d7e10 ===== */

undefined8 FUN_1803d7e10(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = (byte)param_3;
  if (param_3 < 0x80) {
    *param_1 = bVar1;
    return 1;
  }
  if (param_3 < 0x800) {
    *param_1 = (char)(param_3 >> 6) - 0x40;
    param_1[1] = bVar1 & 0x3f | 0x80;
    return 2;
  }
  if (param_3 < 0x10000) {
    *param_1 = (char)(param_3 >> 0xc) - 0x20;
    param_1[1] = (byte)(param_3 >> 6) & 0x3f | 0x80;
    param_1[2] = bVar1 & 0x3f | 0x80;
    return 3;
  }
  if (param_3 < 0x110000) {
    *param_1 = (char)(param_3 >> 0x12) - 0x10;
    param_1[1] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
    param_1[2] = (byte)(param_3 >> 6) & 0x3f | 0x80;
    param_1[3] = bVar1 & 0x3f | 0x80;
    return 4;
  }
  return 0;
}



/* ===== 1803d7ec0 FUN_1803d7ec0 ===== */

ulonglong FUN_1803d7ec0(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  int local_res8 [2];
  
  uVar3 = param_3;
  if (param_1 == param_3) {
    return param_1;
  }
  do {
    if (uVar3 <= param_1) {
      uVar3 = param_1;
      break;
    }
    pbVar1 = (byte *)(uVar3 - 1);
    uVar3 = uVar3 - 1;
  } while ((*pbVar1 & 0xc0) == 0x80);
  iVar2 = FUN_1803d7c80(local_res8,uVar3,param_2);
  if ((local_res8[0] != 0xfffd) && (iVar2 <= (int)param_3 - (int)uVar3)) {
    uVar3 = param_3;
  }
  return uVar3;
}



/* ===== 1803d7f30 FUN_1803d7f30 ===== */

uint FUN_1803d7f30(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  if (0.0 <= fVar1) {
    fVar3 = DAT_1808ac34c;
    if (fVar1 <= DAT_1808ac34c) {
      fVar3 = fVar1;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar1 = param_1[1];
  if (0.0 <= fVar1) {
    fVar5 = DAT_1808ac34c;
    if (fVar1 <= DAT_1808ac34c) {
      fVar5 = fVar1;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar1 = param_1[2];
  if (0.0 <= fVar1) {
    fVar4 = DAT_1808ac34c;
    if (fVar1 <= DAT_1808ac34c) {
      fVar4 = fVar1;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar1 = param_1[3];
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = DAT_1808ac34c, fVar1 <= DAT_1808ac34c)) {
    fVar2 = fVar1;
  }
  return (int)(fVar2 * DAT_1808acb94 + DAT_1808ac1f4) << 0x18 |
         (int)(fVar4 * DAT_1808acb94 + DAT_1808ac1f4) << 0x10 |
         (int)(fVar5 * DAT_1808acb94 + DAT_1808ac1f4) << 8 |
         (int)(fVar3 * DAT_1808acb94 + DAT_1808ac1f4);
}



/* ===== 1803d7ff0 FUN_1803d7ff0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d7ff0(float param_1,float param_2,float param_3,uint *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 <= param_2) {
    fVar3 = 0.0;
    fVar1 = param_2;
  }
  else {
    fVar1 = param_3;
    param_3 = param_2;
    fVar3 = DAT_1808acda0;
  }
  fVar4 = fVar1;
  if (param_1 < fVar1) {
    fVar3 = DAT_1808acd6c - fVar3;
    fVar4 = param_1;
    param_1 = fVar1;
  }
  fVar1 = fVar4;
  if (param_3 <= fVar4) {
    fVar1 = param_3;
  }
  fVar2 = param_1 + DAT_1808abf50;
  *param_4 = (uint)((fVar4 - param_3) / ((param_1 - fVar1) * DAT_1808ac7ac + DAT_1808abf50) + fVar3)
             & _DAT_1808ade90;
  *param_5 = (param_1 - fVar1) / fVar2;
  *param_6 = param_1;
  return;
}



/* ===== 1803d80a0 FUN_1803d80a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d80a0(undefined8 param_1,float param_2,float param_3,float *param_4,float *param_5,
                  float *param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_1808ac34c;
  if (param_2 == 0.0) {
    *param_6 = param_3;
    *param_5 = param_3;
    *param_4 = param_3;
    return;
  }
  fVar2 = (float)FUN_180519fe0(param_1,DAT_1808ac34c);
  uVar1 = (uint)(fVar2 / _DAT_1808ac0f4);
  fVar3 = (fVar5 - param_2) * param_3;
  fVar4 = fVar2 / _DAT_1808ac0f4 - (float)(int)uVar1;
  fVar2 = (fVar5 - fVar4 * param_2) * param_3;
  if (uVar1 < 6) {
    fVar5 = (fVar5 - (fVar5 - fVar4) * param_2) * param_3;
    switch(uVar1) {
    case 0:
      *param_4 = param_3;
      *param_5 = fVar5;
      *param_6 = fVar3;
      break;
    case 1:
      *param_4 = fVar2;
      *param_5 = param_3;
      *param_6 = fVar3;
      break;
    case 2:
      *param_4 = fVar3;
      *param_5 = param_3;
      *param_6 = fVar5;
      break;
    case 3:
      *param_4 = fVar3;
      *param_5 = fVar2;
      *param_6 = param_3;
      break;
    case 4:
      *param_4 = fVar5;
      *param_5 = fVar3;
      *param_6 = param_3;
      break;
    case 5:
      goto switchD_1803d8172_caseD_5;
    }
  }
  else {
switchD_1803d8172_caseD_5:
    *param_4 = param_3;
    *param_5 = fVar3;
    *param_6 = fVar2;
  }
  return;
}



/* ===== 1803d8260 FUN_1803d8260 ===== */

uint FUN_1803d8260(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  uVar4 = (longlong)iVar1;
  puVar5 = puVar2;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar4 >> 1;
      if (puVar5[uVar3 * 4] < param_2) {
        puVar5 = puVar5 + uVar3 * 4 + 4;
        uVar3 = uVar4 + (-1 - uVar3);
      }
      uVar4 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar5 == puVar2 + (longlong)iVar1 * 4) || (*puVar5 != param_2)) {
    return param_3;
  }
  return puVar5[2];
}



/* ===== 1803d82e0 FUN_1803d82e0 ===== */

ulonglong FUN_1803d82e0(int *param_1,uint param_2,ulonglong param_3)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  uVar4 = (longlong)iVar1;
  puVar5 = puVar2;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar4 >> 1;
      if (puVar5[uVar3 * 4] < param_2) {
        puVar5 = puVar5 + uVar3 * 4 + 4;
        uVar3 = uVar4 + (-1 - uVar3);
      }
      uVar4 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar5 == puVar2 + (longlong)iVar1 * 4) || (*puVar5 != param_2)) {
    return param_3;
  }
  return (ulonglong)puVar5[2];
}



/* ===== 1803d8350 FUN_1803d8350 ===== */

void FUN_1803d8350(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint local_18 [2];
  uint local_10;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  puVar4 = puVar2;
  uVar5 = (longlong)iVar1;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar5 >> 1;
      if (puVar4[uVar3 * 4] < param_2) {
        puVar4 = puVar4 + uVar3 * 4 + 4;
        uVar3 = uVar5 + (-1 - uVar3);
      }
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar4 == puVar2 + (longlong)iVar1 * 4) || (*puVar4 != param_2)) {
    local_18[0] = param_2;
    local_10 = param_3;
    FUN_1803f6880(param_1,puVar4,local_18);
    return;
  }
  puVar4[2] = param_3;
  return;
}



/* ===== 1803d83f0 FUN_1803d83f0 ===== */

void FUN_1803d83f0(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint local_18 [2];
  uint local_10;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  puVar4 = puVar2;
  uVar5 = (longlong)iVar1;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar5 >> 1;
      if (puVar4[uVar3 * 4] < param_2) {
        puVar4 = puVar4 + uVar3 * 4 + 4;
        uVar3 = uVar5 + (-1 - uVar3);
      }
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar4 == puVar2 + (longlong)iVar1 * 4) || (*puVar4 != param_2)) {
    local_18[0] = param_2;
    local_10 = param_3;
    FUN_1803f6880(param_1,puVar4,local_18);
    return;
  }
  puVar4[2] = param_3;
  return;
}



/* ===== 1803d8480 FUN_1803d8480 ===== */

void FUN_1803d8480(int *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint local_18 [2];
  undefined8 local_10;
  
  iVar1 = *param_1;
  puVar2 = *(uint **)(param_1 + 2);
  puVar4 = puVar2;
  uVar5 = (longlong)iVar1;
  if (iVar1 != 0) {
    do {
      uVar3 = uVar5 >> 1;
      if (puVar4[uVar3 * 4] < param_2) {
        puVar4 = puVar4 + uVar3 * 4 + 4;
        uVar3 = uVar5 + (-1 - uVar3);
      }
      uVar5 = uVar3;
    } while (uVar3 != 0);
  }
  if ((puVar4 == puVar2 + (longlong)iVar1 * 4) || (*puVar4 != param_2)) {
    local_18[0] = param_2;
    local_10 = param_3;
    FUN_1803f6880(param_1,puVar4,local_18);
    return;
  }
  *(undefined8 *)(puVar4 + 2) = param_3;
  return;
}



/* ===== 1803d8520 FUN_1803d8520 ===== */

void FUN_1803d8520(int *param_1,char *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 0) {
    sVar4 = strlen(param_2);
    iVar5 = (int)sVar4;
  }
  else {
    iVar5 = (int)param_3 - (int)param_2;
  }
  iVar6 = 1;
  if (*param_1 != 0) {
    iVar6 = *param_1;
  }
  iVar1 = iVar6 + iVar5;
  if (param_1[1] <= iVar1) {
    iVar3 = param_1[1] * 2;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_1803f6920(param_1,iVar3);
  }
  iVar3 = param_1[1];
  if (iVar3 < iVar1) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    FUN_1803f6920(param_1,iVar2);
  }
  *param_1 = iVar1;
  FUN_180540530((longlong)(iVar6 + -1) + *(longlong *)(param_1 + 2),param_2,(longlong)iVar5);
  *(undefined1 *)((longlong)iVar1 + -1 + *(longlong *)(param_1 + 2)) = 0;
  return;
}



/* ===== 1803d85d0 FUN_1803d85d0 ===== */

void FUN_1803d85d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1803d8600(param_1,param_2,&local_res18);
  return;
}



/* ===== 1803d8600 FUN_1803d8600 ===== */

void FUN_1803d8600(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  
  puVar6 = (ulonglong *)FUN_180013640();
  iVar4 = FUN_180501904(*puVar6 | 1,0,0,param_2,0,param_3);
  if (iVar4 < 0) {
    iVar4 = -1;
  }
  if (0 < iVar4) {
    iVar8 = 1;
    if (*param_1 != 0) {
      iVar8 = *param_1;
    }
    iVar7 = iVar8 + iVar4;
    if (param_1[1] <= iVar7) {
      iVar5 = param_1[1] * 2;
      if (iVar5 < iVar7) {
        iVar5 = iVar7;
      }
      FUN_1803f6920(param_1,iVar5);
    }
    iVar5 = param_1[1];
    if (iVar5 < iVar7) {
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      iVar3 = iVar7;
      if (iVar7 < iVar5) {
        iVar3 = iVar5;
      }
      FUN_1803f6920(param_1,iVar3);
    }
    *param_1 = iVar7;
    lVar2 = *(longlong *)(param_1 + 2);
    lVar1 = lVar2 + iVar8 + -1;
    iVar7 = FUN_180501904(*puVar6 | 1,lVar1,(longlong)iVar4 + 1,param_2,0,param_3);
    if (iVar7 < 0) {
      iVar7 = -1;
    }
    if (lVar1 != 0) {
      if ((iVar7 == -1) || ((int)((longlong)iVar4 + 1) <= iVar7)) {
        iVar7 = iVar4;
      }
      *(undefined1 *)((longlong)iVar7 + -1 + lVar2 + iVar8) = 0;
    }
  }
  return;
}



/* ===== 1803d8730 FUN_1803d8730 ===== */

void FUN_1803d8730(int param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  float fVar3;
  longlong lVar4;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  lVar4 = DAT_180ca0a50;
  lVar1 = (longlong)param_1 + 0xde;
  puVar2 = (undefined4 *)(DAT_180ca0a50 + lVar1 * 0x10);
  local_44 = *puVar2;
  uStack_40 = puVar2[1];
  uStack_3c = puVar2[2];
  uStack_38 = puVar2[3];
  local_48 = param_1;
  FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_48);
  fVar3 = DAT_1808abfe4;
  if (*(int *)(lVar4 + 0x1fbc) != param_1) {
    *(float *)(lVar4 + lVar1 * 0x10) = (float)(param_2 & 0xff) * DAT_1808abfe4;
    *(float *)(lVar4 + 4 + lVar1 * 0x10) = (float)(param_2 >> 8 & 0xff) * fVar3;
    *(float *)(lVar4 + 8 + lVar1 * 0x10) = (float)(param_2 >> 0x10 & 0xff) * fVar3;
    *(float *)(lVar4 + 0xc + lVar1 * 0x10) = (float)(param_2 >> 0x18) * fVar3;
  }
  return;
}



/* ===== 1803d87f0 FUN_1803d87f0 ===== */

void FUN_1803d87f0(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fc0) < param_1) {
    FUN_1803ebc00("Calling PopStyleColor() too many times!");
    param_1 = *(int *)(lVar4 + 0x1fc0);
  }
  if (0 < param_1) {
    iVar5 = *(int *)(lVar4 + 0x1fc0);
    do {
      param_1 = param_1 + -1;
      puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x1fc8) + -0x10 + (longlong)iVar5 * 0x14);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)
               (lVar4 + 0xde0 +
               (longlong)*(int *)(*(longlong *)(lVar4 + 0x1fc8) + -0x14 + (longlong)iVar5 * 0x14) *
               0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      iVar5 = *(int *)(lVar4 + 0x1fc0) + -1;
      *(int *)(lVar4 + 0x1fc0) = iVar5;
    } while (0 < param_1);
  }
  return;
}



/* ===== 1803d8870 FUN_1803d8870 ===== */

void FUN_1803d8870(int param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  int local_28;
  undefined4 local_24;
  
  lVar1 = DAT_180ca0a50;
  if (((&DAT_1806c2eb1)[(longlong)param_1 * 4] == '\b') &&
     ((char)*(uint *)(&DAT_1806c2eb0 + (longlong)param_1 * 4) == '\x01')) {
    uVar2 = *(uint *)(&DAT_1806c2eb0 + (longlong)param_1 * 4) >> 0x10;
    local_24 = *(undefined4 *)((ulonglong)uVar2 + 0xc90 + DAT_180ca0a50);
    local_28 = param_1;
    FUN_1803f6350(DAT_180ca0a50 + 0x1fd0,&local_28);
    *(undefined4 *)((ulonglong)uVar2 + 0xc90 + lVar1) = param_2;
    return;
  }
  FUN_1803ebc00("Calling PushStyleVar() variant with wrong type!");
  return;
}



/* ===== 1803d8900 FUN_1803d8900 ===== */

void FUN_1803d8900(int param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  lVar1 = DAT_180ca0a50;
  if (((&DAT_1806c2eb1)[(longlong)param_1 * 4] == '\b') &&
     ((char)*(uint *)(&DAT_1806c2eb0 + (longlong)param_1 * 4) == '\x02')) {
    uVar2 = *(uint *)(&DAT_1806c2eb0 + (longlong)param_1 * 4) >> 0x10;
    local_24 = *(undefined4 *)((ulonglong)uVar2 + 0xc90 + DAT_180ca0a50);
    local_20 = *(undefined4 *)((ulonglong)uVar2 + 0xc94 + DAT_180ca0a50);
    local_28 = param_1;
    FUN_1803f6350(DAT_180ca0a50 + 0x1fd0,&local_28);
    *(undefined4 *)((ulonglong)uVar2 + 0xc90 + lVar1) = param_2;
    return;
  }
  FUN_1803ebc00("Calling PushStyleVar() variant with wrong type!");
  return;
}



/* ===== 1803d89a0 FUN_1803d89a0 ===== */

void FUN_1803d89a0(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = DAT_180ca0a50;
  if (((&DAT_1806c2eb1)[(longlong)param_1 * 4] == '\b') &&
     ((char)*(uint *)(&DAT_1806c2eb0 + (longlong)param_1 * 4) == '\x02')) {
    uVar2 = *(uint *)(&DAT_1806c2eb0 + (longlong)param_1 * 4) >> 0x10;
    local_14 = *(undefined4 *)((ulonglong)uVar2 + 0xc90 + DAT_180ca0a50);
    local_10 = *(undefined4 *)((ulonglong)uVar2 + 0xc94 + DAT_180ca0a50);
    local_18 = param_1;
    FUN_1803f6350(DAT_180ca0a50 + 0x1fd0,&local_18);
    *(undefined8 *)((ulonglong)uVar2 + 0xc90 + lVar1) = *param_2;
    return;
  }
  FUN_1803ebc00("Calling PushStyleVar() variant with wrong type!");
  return;
}



/* ===== 1803d8a40 FUN_1803d8a40 ===== */

void FUN_1803d8a40(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1fd0) < param_1) {
    FUN_1803ebc00("Calling PopStyleVar() too many times!");
    param_1 = *(int *)(lVar2 + 0x1fd0);
  }
  iVar3 = *(int *)(lVar2 + 0x1fd0);
  for (; 3 < param_1; param_1 = param_1 + -4) {
    lVar1 = *(longlong *)(lVar2 + 0x1fd8);
    lVar4 = (longlong)iVar3;
    lVar5 = (longlong)*(int *)(lVar1 + -0xc + lVar4 * 0xc);
    if ((&DAT_1806c2eb1)[lVar5 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_1806c2eb2 + lVar5 * 4);
      if ((*(uint *)(&DAT_1806c2eb0 + lVar5 * 4) & 0xff) == 1) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -8 + lVar4 * 0xc);
      }
      else if ((*(uint *)(&DAT_1806c2eb0 + lVar5 * 4) & 0xff) == 2) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -8 + lVar4 * 0xc);
        *(undefined4 *)(lVar2 + 0xc94 + uVar6) = *(undefined4 *)(lVar1 + -4 + lVar4 * 0xc);
      }
    }
    lVar5 = (longlong)*(int *)(lVar2 + 0x1fd0);
    *(int *)(lVar2 + 0x1fd0) = *(int *)(lVar2 + 0x1fd0) + -1;
    lVar1 = *(longlong *)(lVar2 + 0x1fd8);
    lVar4 = (longlong)*(int *)(lVar1 + -0x18 + lVar5 * 0xc);
    if ((&DAT_1806c2eb1)[lVar4 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_1806c2eb2 + lVar4 * 4);
      if ((*(uint *)(&DAT_1806c2eb0 + lVar4 * 4) & 0xff) == 1) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
      }
      else if ((*(uint *)(&DAT_1806c2eb0 + lVar4 * 4) & 0xff) == 2) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
        *(undefined4 *)(lVar2 + 0xc94 + uVar6) = *(undefined4 *)(lVar1 + -0x10 + lVar5 * 0xc);
      }
    }
    lVar5 = (longlong)*(int *)(lVar2 + 0x1fd0);
    *(int *)(lVar2 + 0x1fd0) = *(int *)(lVar2 + 0x1fd0) + -1;
    lVar1 = *(longlong *)(lVar2 + 0x1fd8);
    lVar4 = (longlong)*(int *)(lVar1 + -0x18 + lVar5 * 0xc);
    if ((&DAT_1806c2eb1)[lVar4 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_1806c2eb2 + lVar4 * 4);
      if ((*(uint *)(&DAT_1806c2eb0 + lVar4 * 4) & 0xff) == 1) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
      }
      else if ((*(uint *)(&DAT_1806c2eb0 + lVar4 * 4) & 0xff) == 2) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
        *(undefined4 *)(lVar2 + 0xc94 + uVar6) = *(undefined4 *)(lVar1 + -0x10 + lVar5 * 0xc);
      }
    }
    lVar5 = (longlong)*(int *)(lVar2 + 0x1fd0);
    *(int *)(lVar2 + 0x1fd0) = *(int *)(lVar2 + 0x1fd0) + -1;
    lVar1 = *(longlong *)(lVar2 + 0x1fd8);
    lVar4 = (longlong)*(int *)(lVar1 + -0x18 + lVar5 * 0xc);
    if ((&DAT_1806c2eb1)[lVar4 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_1806c2eb2 + lVar4 * 4);
      if ((*(uint *)(&DAT_1806c2eb0 + lVar4 * 4) & 0xff) == 1) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
      }
      else if ((*(uint *)(&DAT_1806c2eb0 + lVar4 * 4) & 0xff) == 2) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -0x14 + lVar5 * 0xc);
        *(undefined4 *)(lVar2 + 0xc94 + uVar6) = *(undefined4 *)(lVar1 + -0x10 + lVar5 * 0xc);
      }
    }
    iVar3 = *(int *)(lVar2 + 0x1fd0) + -1;
    *(int *)(lVar2 + 0x1fd0) = iVar3;
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    lVar1 = *(longlong *)(lVar2 + 0x1fd8);
    lVar4 = (longlong)iVar3;
    lVar5 = (longlong)*(int *)(lVar1 + -0xc + lVar4 * 0xc);
    if ((&DAT_1806c2eb1)[lVar5 * 4] == '\b') {
      uVar6 = (ulonglong)*(ushort *)(&DAT_1806c2eb2 + lVar5 * 4);
      if ((*(uint *)(&DAT_1806c2eb0 + lVar5 * 4) & 0xff) == 1) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -8 + lVar4 * 0xc);
      }
      else if ((*(uint *)(&DAT_1806c2eb0 + lVar5 * 4) & 0xff) == 2) {
        *(undefined4 *)(lVar2 + 0xc90 + uVar6) = *(undefined4 *)(lVar1 + -8 + lVar4 * 0xc);
        *(undefined4 *)(lVar2 + 0xc94 + uVar6) = *(undefined4 *)(lVar1 + -4 + lVar4 * 0xc);
      }
    }
    iVar3 = *(int *)(lVar2 + 0x1fd0) + -1;
    *(int *)(lVar2 + 0x1fd0) = iVar3;
  }
  return;
}



/* ===== 1803d8ca0 FUN_1803d8ca0 ===== */

void FUN_1803d8ca0(undefined8 param_1,char *param_2,char *param_3,char param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char *_Str;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar13;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_38 = param_1;
  if (param_4 == '\0') {
    if (param_3 == (char *)0x0) {
      sVar6 = strlen(param_2);
      param_3 = param_2 + sVar6;
    }
  }
  else {
    pcVar8 = (char *)0xffffffffffffffff;
    if (param_3 != (char *)0x0) {
      pcVar8 = param_3;
    }
    param_3 = param_2;
    if (param_2 < pcVar8) {
      do {
        if ((*param_3 == '\0') || ((*param_3 == '#' && (param_3[1] == '#')))) break;
        param_3 = param_3 + 1;
      } while (param_3 < pcVar8);
    }
  }
  lVar3 = DAT_180ca0a50;
  if (param_2 != param_3) {
    local_30 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
    uStack_2c = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
    uStack_28 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
    fStack_24 = *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar4 = FUN_1803d7f30(&local_30);
    lVar11 = lVar3;
    if (((uVar4 & 0xff000000) != 0) && (*param_2 != '\0')) {
      fVar12 = *(float *)(lVar3 + 0x1200);
      lVar11 = *(longlong *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8);
      lVar9 = *(longlong *)(lVar3 + 0x11f0);
      if (lVar9 == 0) {
        lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + 0x18);
      }
      if (fVar12 == 0.0) {
        fVar12 = *(float *)(*(longlong *)(lVar11 + 0x38) + 0x20);
      }
      local_30 = *(undefined4 *)(lVar11 + 0x60);
      uStack_2c = *(undefined4 *)(lVar11 + 100);
      uStack_28 = *(undefined4 *)(lVar11 + 0x68);
      fStack_24 = *(float *)(lVar11 + 0x6c);
      FUN_18040a900(lVar9,lVar11,fVar12,&local_38,CONCAT44(uVar13,uVar4),&local_30,param_2,param_3,0
                    ,0);
      lVar11 = DAT_180ca0a50;
    }
    if (*(char *)(lVar3 + 0x2868) != '\0') {
      pcVar8 = *(char **)(lVar11 + 0x2890);
      lVar3 = *(longlong *)(lVar11 + 0x14f8);
      _Str = *(char **)(lVar11 + 0x2898);
      *(undefined8 *)(lVar11 + 0x2898) = 0;
      *(undefined8 *)(lVar11 + 0x2890) = 0;
      if (param_3 == (char *)0x0) {
        param_3 = param_2;
        if (param_2 != (char *)0xffffffffffffffff) {
          while (*param_3 != '\0') {
            if (((*param_3 == '#') && (param_3[1] == '#')) ||
               (param_3 = param_3 + 1, param_3 == (char *)0xffffffffffffffff)) break;
          }
        }
      }
      fVar12 = *(float *)(lVar11 + 0xce0);
      if (*(float *)(lVar11 + 0xce0) <= *(float *)(lVar11 + 0xcf0)) {
        fVar12 = *(float *)(lVar11 + 0xcf0);
      }
      fVar1 = *(float *)(lVar11 + 0x28a0);
      *(float *)(lVar11 + 0x28a0) = local_38._4_4_;
      if (fVar12 + fVar1 + DAT_1808ac34c < local_38._4_4_) {
        FUN_1803f3880(&DAT_1806e6e50);
        *(undefined1 *)(lVar11 + 0x2869) = 1;
      }
      if (pcVar8 != (char *)0x0) {
        sVar6 = strlen(pcVar8);
        FUN_1803f38c0(&local_38,pcVar8,pcVar8 + sVar6);
      }
      iVar2 = *(int *)(lVar3 + 0x1a0);
      iVar5 = *(int *)(lVar11 + 0x28a4);
      if (iVar2 < iVar5) {
        *(int *)(lVar11 + 0x28a4) = iVar2;
        iVar5 = iVar2;
      }
      iVar2 = *(int *)(lVar3 + 0x1a0);
      while( true ) {
        pcVar7 = (char *)FUN_180540ca0(param_2,10,(longlong)param_3 - (longlong)param_2);
        pcVar8 = param_3;
        if (pcVar7 != (char *)0x0) {
          pcVar8 = pcVar7;
        }
        if ((param_2 == pcVar8) && (pcVar8 == param_3)) break;
        iVar10 = 1;
        if (*(char *)(lVar11 + 0x2869) != '\0') {
          iVar10 = (iVar2 - iVar5) * 4;
        }
        FUN_1803f3880("%*s%.*s",iVar10,&DAT_18058b643,(int)pcVar8 - (int)param_2,param_2);
        *(undefined1 *)(lVar11 + 0x2869) = 0;
        if (*pcVar8 == '\n') {
          FUN_1803f3880(&DAT_1806e6e50);
          *(undefined1 *)(lVar11 + 0x2869) = 1;
        }
        if (pcVar8 == param_3) break;
        param_2 = pcVar8 + 1;
      }
      if (_Str != (char *)0x0) {
        sVar6 = strlen(_Str);
        FUN_1803f38c0(&local_38,_Str,_Str + sVar6);
      }
    }
  }
  return;
}



/* ===== 1803d8fb0 FUN_1803d8fb0 ===== */

void FUN_1803d8fb0(undefined8 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char *_Str;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  float fVar12;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar13;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_48 = param_1;
  if (param_3 == (char *)0x0) {
    sVar6 = strlen(param_2);
    param_3 = param_2 + sVar6;
  }
  lVar3 = DAT_180ca0a50;
  if (param_2 != param_3) {
    local_40 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
    uStack_3c = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
    uStack_38 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
    fStack_34 = *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar4 = FUN_1803d7f30(&local_40);
    lVar10 = lVar3;
    if (((uVar4 & 0xff000000) != 0) && (*param_2 != '\0')) {
      fVar12 = *(float *)(lVar3 + 0x1200);
      lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0x14f8) + 0x2c8);
      lVar8 = *(longlong *)(lVar3 + 0x11f0);
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 0x18);
      }
      if (fVar12 == 0.0) {
        fVar12 = *(float *)(*(longlong *)(lVar10 + 0x38) + 0x20);
      }
      local_40 = *(undefined4 *)(lVar10 + 0x60);
      uStack_3c = *(undefined4 *)(lVar10 + 100);
      uStack_38 = *(undefined4 *)(lVar10 + 0x68);
      fStack_34 = *(float *)(lVar10 + 0x6c);
      FUN_18040a900(lVar8,lVar10,fVar12,&local_48,CONCAT44(uVar13,uVar4),&local_40,param_2,param_3,
                    param_4,0);
      lVar10 = DAT_180ca0a50;
    }
    if (*(char *)(lVar3 + 0x2868) != '\0') {
      pcVar11 = *(char **)(lVar10 + 0x2890);
      lVar3 = *(longlong *)(lVar10 + 0x14f8);
      _Str = *(char **)(lVar10 + 0x2898);
      *(undefined8 *)(lVar10 + 0x2898) = 0;
      *(undefined8 *)(lVar10 + 0x2890) = 0;
      if ((param_3 == (char *)0x0) && (param_3 = param_2, param_2 != (char *)0xffffffffffffffff)) {
        while (*param_3 != '\0') {
          if (((*param_3 == '#') && (param_3[1] == '#')) ||
             (param_3 = param_3 + 1, param_3 == (char *)0xffffffffffffffff)) break;
        }
      }
      fVar12 = *(float *)(lVar10 + 0xce0);
      if (*(float *)(lVar10 + 0xce0) <= *(float *)(lVar10 + 0xcf0)) {
        fVar12 = *(float *)(lVar10 + 0xcf0);
      }
      fVar1 = *(float *)(lVar10 + 0x28a0);
      *(float *)(lVar10 + 0x28a0) = local_48._4_4_;
      if (fVar12 + fVar1 + DAT_1808ac34c < local_48._4_4_) {
        FUN_1803f3880(&DAT_1806e6e50);
        *(undefined1 *)(lVar10 + 0x2869) = 1;
      }
      if (pcVar11 != (char *)0x0) {
        sVar6 = strlen(pcVar11);
        FUN_1803f38c0(&local_48,pcVar11,pcVar11 + sVar6);
      }
      iVar2 = *(int *)(lVar3 + 0x1a0);
      iVar5 = *(int *)(lVar10 + 0x28a4);
      if (iVar2 < iVar5) {
        *(int *)(lVar10 + 0x28a4) = iVar2;
        iVar5 = iVar2;
      }
      iVar2 = *(int *)(lVar3 + 0x1a0);
      while( true ) {
        pcVar7 = (char *)FUN_180540ca0(param_2,10,(longlong)param_3 - (longlong)param_2);
        pcVar11 = param_3;
        if (pcVar7 != (char *)0x0) {
          pcVar11 = pcVar7;
        }
        if ((param_2 == pcVar11) && (pcVar11 == param_3)) break;
        iVar9 = 1;
        if (*(char *)(lVar10 + 0x2869) != '\0') {
          iVar9 = (iVar2 - iVar5) * 4;
        }
        FUN_1803f3880("%*s%.*s",iVar9,&DAT_18058b643,(int)pcVar11 - (int)param_2,param_2);
        *(undefined1 *)(lVar10 + 0x2869) = 0;
        if (*pcVar11 == '\n') {
          FUN_1803f3880(&DAT_1806e6e50);
          *(undefined1 *)(lVar10 + 0x2869) = 1;
        }
        if (pcVar11 == param_3) break;
        param_2 = pcVar11 + 1;
      }
      if (_Str != (char *)0x0) {
        sVar6 = strlen(_Str);
        FUN_1803f38c0(&local_48,_Str,_Str + sVar6);
      }
    }
  }
  return;
}



/* ===== 1803d9290 FUN_1803d9290 ===== */

void FUN_1803d9290(longlong param_1,float *param_2,float *param_3,char *param_4,char *param_5,
                  ulonglong *param_6,float *param_7,float *param_8)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  undefined8 local_res10;
  ulonglong in_stack_ffffffffffffff68;
  undefined4 uVar11;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  local_res10 = *(undefined8 *)param_2;
  fVar8 = (float)local_res10;
  if (param_6 == (ulonglong *)0x0) {
    if (param_4 == param_5) {
      local_74 = *(float *)(DAT_180ca0a50 + 0x1200);
      uVar10 = 0;
    }
    else {
      in_stack_ffffffffffffff68 = 0;
      FUN_18040a2f0(&param_6,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                    *(float *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,0,param_4,param_5,param_5,0);
      local_74 = param_6._4_4_;
      uVar10 = (ulonglong)
               (uint)(float)(int)((uint)((float)(int)param_6._0_4_ < param_6._0_4_) +
                                 (int)param_6._0_4_);
    }
    pfVar4 = &local_74;
  }
  else {
    uVar10 = *param_6;
    pfVar4 = (float *)((longlong)&local_70 + 4);
    local_70 = uVar10;
  }
  pfVar6 = param_8 + 2;
  pfVar5 = param_8;
  if (param_8 == (float *)0x0) {
    pfVar6 = param_3;
    pfVar5 = param_2;
  }
  fVar9 = local_res10._4_4_;
  if ((*pfVar6 <= (float)uVar10 + fVar8) || (pfVar6[1] <= *pfVar4 + local_res10._4_4_)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (param_8 != (float *)0x0) {
    if ((fVar8 < *pfVar5) || (local_res10._4_4_ < pfVar5[1])) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    bVar1 = (bool)(bVar1 | bVar2);
  }
  if (0.0 < *param_7) {
    fVar7 = ((*param_3 - fVar8) - (float)uVar10) * *param_7 + fVar8;
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    local_res10 = CONCAT44(local_res10._4_4_,fVar8);
  }
  if (0.0 < param_7[1]) {
    fVar8 = ((param_3[1] - fVar9) - *pfVar4) * param_7[1] + fVar9;
    if (fVar9 <= fVar8) {
      fVar9 = fVar8;
    }
    local_res10 = CONCAT44(fVar9,(undefined4)local_res10);
  }
  local_68 = *(undefined8 *)(DAT_180ca0a50 + 0xde0);
  uStack_60 = CONCAT44(*(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c),
                       *(undefined4 *)(DAT_180ca0a50 + 0xde8));
  if (bVar1) {
    uVar3 = FUN_1803d7f30(&local_68);
    if ((uVar3 & 0xff000000) == 0) {
      return;
    }
    if (param_4 == param_5) {
      return;
    }
    if (*param_4 == '\0') {
      return;
    }
    uVar11 = 1;
    fVar8 = *(float *)(param_1 + 0x60);
    if (*(float *)(param_1 + 0x60) <= *pfVar5) {
      fVar8 = *pfVar5;
    }
    fVar9 = *(float *)(param_1 + 0x68);
    if (*pfVar6 <= *(float *)(param_1 + 0x68)) {
      fVar9 = *pfVar6;
    }
    fVar7 = *(float *)(param_1 + 100);
    if (*(float *)(param_1 + 100) <= pfVar5[1]) {
      fVar7 = pfVar5[1];
    }
    local_68 = CONCAT44(fVar7,fVar8);
    fVar8 = *(float *)(param_1 + 0x6c);
    if (pfVar6[1] <= *(float *)(param_1 + 0x6c)) {
      fVar8 = pfVar6[1];
    }
    uStack_60 = CONCAT44(fVar8,fVar9);
  }
  else {
    uVar3 = FUN_1803d7f30(&local_68);
    if ((uVar3 & 0xff000000) == 0) {
      return;
    }
    if (param_4 == param_5) {
      return;
    }
    if (*param_4 == '\0') {
      return;
    }
    local_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uVar11 = 0;
  }
  FUN_18040a900(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_res10,uVar3,&local_68,
                param_4,param_5,in_stack_ffffffffffffff68 & 0xffffffff00000000,uVar11);
  return;
}



/* ===== 1803d9560 FUN_1803d9560 ===== */

void FUN_1803d9560(longlong param_1,undefined8 param_2,char *param_3,char *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  char *_Str;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  float fVar11;
  
  lVar2 = DAT_180ca0a50;
  pcVar9 = (char *)0xffffffffffffffff;
  if (param_4 != (char *)0x0) {
    pcVar9 = param_4;
  }
  pcVar10 = param_3;
  if (param_3 < pcVar9) {
    while (*pcVar10 != '\0') {
      if (((*pcVar10 == '#') && (pcVar10[1] == '#')) || (pcVar10 = pcVar10 + 1, pcVar9 <= pcVar10))
      break;
    }
  }
  if ((int)pcVar10 == (int)param_3) {
    return;
  }
  FUN_1803d9290(*(undefined8 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x2c8),param_1,param_2,
                param_3,pcVar10,param_5,param_6,param_7);
  lVar4 = DAT_180ca0a50;
  if (*(char *)(lVar2 + 0x2868) == '\0') {
    return;
  }
  pcVar9 = *(char **)(DAT_180ca0a50 + 0x2890);
  _Str = *(char **)(DAT_180ca0a50 + 0x2898);
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined8 *)(DAT_180ca0a50 + 0x2898) = 0;
  *(undefined8 *)(lVar4 + 0x2890) = 0;
  pcVar7 = param_3;
  if (pcVar10 == (char *)0x0) {
    while (((pcVar10 = pcVar7, pcVar10 != (char *)0xffffffffffffffff && (*pcVar10 != '\0')) &&
           ((*pcVar10 != '#' || (pcVar10[1] != '#'))))) {
      pcVar7 = pcVar10 + 1;
    }
  }
  if (param_1 != 0) {
    fVar11 = *(float *)(lVar4 + 0xce0);
    if (*(float *)(lVar4 + 0xce0) <= *(float *)(lVar4 + 0xcf0)) {
      fVar11 = *(float *)(lVar4 + 0xcf0);
    }
    if (*(float *)(param_1 + 4) <= fVar11 + *(float *)(lVar4 + 0x28a0) + DAT_1808ac34c) {
      if (param_1 == 0) goto LAB_1803d96c5;
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    *(undefined4 *)(lVar4 + 0x28a0) = *(undefined4 *)(param_1 + 4);
    if (bVar3) {
      FUN_1803f3880(&DAT_1806e6e50);
      *(undefined1 *)(lVar4 + 0x2869) = 1;
    }
  }
LAB_1803d96c5:
  if (pcVar9 != (char *)0x0) {
    sVar6 = strlen(pcVar9);
    FUN_1803f38c0(param_1,pcVar9,pcVar9 + sVar6);
  }
  iVar1 = *(int *)(lVar2 + 0x1a0);
  iVar5 = *(int *)(lVar4 + 0x28a4);
  if (iVar1 < iVar5) {
    *(int *)(lVar4 + 0x28a4) = iVar1;
    iVar5 = iVar1;
  }
  iVar1 = *(int *)(lVar2 + 0x1a0);
  while( true ) {
    pcVar7 = (char *)FUN_180540ca0(param_3,10,(longlong)pcVar10 - (longlong)param_3);
    pcVar9 = pcVar10;
    if (pcVar7 != (char *)0x0) {
      pcVar9 = pcVar7;
    }
    if ((param_3 == pcVar9) && (pcVar9 == pcVar10)) break;
    iVar8 = 1;
    if (*(char *)(lVar4 + 0x2869) != '\0') {
      iVar8 = (iVar1 - iVar5) * 4;
    }
    FUN_1803f3880("%*s%.*s",iVar8,&DAT_18058b643,(int)pcVar9 - (int)param_3,param_3);
    *(undefined1 *)(lVar4 + 0x2869) = 0;
    if (*pcVar9 == '\n') {
      FUN_1803f3880(&DAT_1806e6e50);
      *(undefined1 *)(lVar4 + 0x2869) = 1;
    }
    if (pcVar9 == pcVar10) break;
    param_3 = pcVar9 + 1;
  }
  if (_Str != (char *)0x0) {
    sVar6 = strlen(_Str);
    FUN_1803f38c0(param_1,_Str,_Str + sVar6);
  }
  return;
}



/* ===== 1803d97d0 FUN_1803d97d0 ===== */

void FUN_1803d97d0(longlong param_1,float *param_2,float *param_3,float param_4,char *param_5,
                  char *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *_Str;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  size_t sVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res10;
  float local_res18 [4];
  ulonglong in_stack_ffffffffffffff18;
  undefined4 uVar20;
  undefined8 *puVar19;
  float local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  
  lVar6 = DAT_180ca0a50;
  pcVar14 = param_6;
  if (param_6 == (char *)0x0) {
    pcVar14 = param_5;
    if (param_5 != (char *)0xffffffffffffffff) {
      do {
        if ((*pcVar14 == '\0') || ((*pcVar14 == '#' && (pcVar14[1] == '#')))) break;
        pcVar14 = pcVar14 + 1;
      } while (pcVar14 != (char *)0xffffffffffffffff);
    }
  }
  if (param_7 == (undefined8 *)0x0) {
    if (param_5 == pcVar14) {
      local_a4 = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
      local_a8 = 0.0;
    }
    else {
      in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffffffff00000000;
      FUN_18040a2f0(&param_6,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                    *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,in_stack_ffffffffffffff18,
                    param_5,pcVar14,pcVar14,0);
      local_a4 = param_6._4_4_;
      local_a8 = (float)(int)((uint)((float)(int)param_6._0_4_ < param_6._0_4_) + (int)param_6._0_4_
                             );
    }
    pfVar9 = &local_a8;
  }
  else {
    pfVar9 = (float *)&local_a0;
    local_a0 = *param_7;
  }
  local_res10 = *(undefined8 *)pfVar9;
  if ((float)local_res10 <= *param_3 - *param_2) {
    param_6 = (char *)0x0;
    FUN_1803d9290(param_1,param_2,param_3,param_5,pcVar14,&local_res10,&param_6,0);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x38);
    param_7 = (undefined8 *)0x0;
    lVar5 = *(longlong *)(lVar4 + 0x18);
    uVar1 = *(undefined4 *)(lVar4 + 0x20);
    fVar18 = *(float *)(lVar4 + 0x24);
    piVar10 = (int *)FUN_180409a40(lVar5);
    uVar2 = *(ushort *)(lVar5 + 0x30);
    if ((*piVar10 <= (int)(uint)uVar2) ||
       (fVar16 = *(float *)(*(longlong *)(piVar10 + 2) + (ulonglong)uVar2 * 4), fVar16 < 0.0)) {
      fVar16 = (float)FUN_1804083d0(piVar10,(ulonglong)uVar2);
    }
    fVar17 = *param_3;
    if (*param_3 <= param_4) {
      fVar17 = param_4;
    }
    fVar18 = (fVar17 - fVar16 * fVar18) - *param_2;
    if (fVar18 <= DAT_1808ac34c) {
      fVar18 = DAT_1808ac34c;
    }
    FUN_18040a2f0(local_res18,lVar5,uVar1,fVar18,in_stack_ffffffffffffff18 & 0xffffffff00000000,
                  param_5,pcVar14,pcVar14,&param_7);
    param_6 = (char *)0x0;
    puVar19 = param_7;
    FUN_1803d9290(param_1,param_2,param_3,param_5,param_7,&local_res10,&param_6,0);
    uVar20 = (undefined4)((ulonglong)puVar19 >> 0x20);
    local_98 = *param_2;
    local_90 = *param_3;
    local_94 = param_2[1];
    local_8c = param_3[1];
    local_88 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
    uStack_84 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
    uStack_80 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
    param_6 = (char *)CONCAT44((float)(int)local_94,(float)(int)(local_98 + local_res18[0]));
    fStack_7c = *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar7 = FUN_1803d7f30(&local_88);
    FUN_18040a5e0(lVar5,param_1,uVar1,&param_6,CONCAT44(uVar20,uVar7),*(undefined2 *)(lVar5 + 0x30),
                  &local_98);
  }
  lVar4 = DAT_180ca0a50;
  if (*(char *)(lVar6 + 0x2868) != '\0') {
    pcVar15 = *(char **)(DAT_180ca0a50 + 0x2890);
    _Str = *(char **)(DAT_180ca0a50 + 0x2898);
    lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined8 *)(DAT_180ca0a50 + 0x2898) = 0;
    *(undefined8 *)(lVar4 + 0x2890) = 0;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = param_5;
      if (param_5 != (char *)0xffffffffffffffff) {
        do {
          if ((*pcVar14 == '\0') || ((*pcVar14 == '#' && (pcVar14[1] == '#')))) break;
          pcVar14 = pcVar14 + 1;
        } while (pcVar14 != (char *)0xffffffffffffffff);
      }
    }
    fVar18 = param_2[1];
    fVar16 = *(float *)(lVar4 + 0xce0);
    if (*(float *)(lVar4 + 0xce0) <= *(float *)(lVar4 + 0xcf0)) {
      fVar16 = *(float *)(lVar4 + 0xcf0);
    }
    fVar17 = *(float *)(lVar4 + 0x28a0);
    *(float *)(lVar4 + 0x28a0) = param_2[1];
    if (fVar16 + fVar17 + DAT_1808ac34c < fVar18) {
      FUN_1803f3880(&DAT_1806e6e50);
      *(undefined1 *)(lVar4 + 0x2869) = 1;
    }
    if (pcVar15 != (char *)0x0) {
      sVar11 = strlen(pcVar15);
      FUN_1803f38c0(param_2,pcVar15,pcVar15 + sVar11);
    }
    iVar3 = *(int *)(lVar6 + 0x1a0);
    iVar8 = *(int *)(lVar4 + 0x28a4);
    if (iVar3 < iVar8) {
      *(int *)(lVar4 + 0x28a4) = iVar3;
      iVar8 = iVar3;
    }
    iVar3 = *(int *)(lVar6 + 0x1a0);
    while( true ) {
      pcVar12 = (char *)FUN_180540ca0(param_5,10,(longlong)pcVar14 - (longlong)param_5);
      pcVar15 = pcVar14;
      if (pcVar12 != (char *)0x0) {
        pcVar15 = pcVar12;
      }
      if ((param_5 == pcVar15) && (pcVar15 == pcVar14)) break;
      iVar13 = 1;
      if (*(char *)(lVar4 + 0x2869) != '\0') {
        iVar13 = (iVar3 - iVar8) * 4;
      }
      FUN_1803f3880("%*s%.*s",iVar13,&DAT_18058b643,(int)pcVar15 - (int)param_5,param_5);
      *(undefined1 *)(lVar4 + 0x2869) = 0;
      if (*pcVar15 == '\n') {
        FUN_1803f3880(&DAT_1806e6e50);
        *(undefined1 *)(lVar4 + 0x2869) = 1;
      }
      if (pcVar15 == pcVar14) break;
      param_5 = pcVar15 + 1;
    }
    if (_Str != (char *)0x0) {
      sVar11 = strlen(_Str);
      FUN_1803f38c0(param_2,_Str,_Str + sVar11);
    }
  }
  return;
}



/* ===== 1803d9cb0 FUN_1803d9cb0 ===== */

void FUN_1803d9cb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  undefined4 param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_78;
  undefined8 local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  local_78 = param_2;
  local_70 = param_1;
  FUN_1803fe590(*(undefined8 *)(lVar2 + 0x2c8),&local_70,&local_78,param_3,param_5,0);
  if ((param_4 != '\0') && (fVar1 = *(float *)(lVar3 + 0xce8), 0.0 < fVar1)) {
    local_68 = (float)param_2 + DAT_1808ac34c;
    local_60 = (float)param_1 + DAT_1808ac34c;
    local_58 = *(undefined4 *)(DAT_180ca0a50 + 0xe40);
    uStack_54 = *(undefined4 *)(DAT_180ca0a50 + 0xe44);
    uStack_50 = *(undefined4 *)(DAT_180ca0a50 + 0xe48);
    fStack_4c = *(float *)(DAT_180ca0a50 + 0xe4c) * *(float *)(DAT_180ca0a50 + 0xc9c);
    local_64 = local_78._4_4_ + DAT_1808ac34c;
    local_5c = local_70._4_4_ + DAT_1808ac34c;
    uVar4 = FUN_1803d7f30(&local_58);
    FUN_1803fe480(*(undefined8 *)(lVar2 + 0x2c8),&local_60,&local_68,uVar4,param_5,fVar1,0);
    local_58 = *(undefined4 *)(DAT_180ca0a50 + 0xe30);
    uStack_54 = *(undefined4 *)(DAT_180ca0a50 + 0xe34);
    uStack_50 = *(undefined4 *)(DAT_180ca0a50 + 0xe38);
    fStack_4c = *(float *)(DAT_180ca0a50 + 0xe3c) * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar4 = FUN_1803d7f30(&local_58);
    FUN_1803fe480(*(undefined8 *)(lVar2 + 0x2c8),&local_70,&local_78,uVar4,param_5,fVar1,0);
  }
  return;
}



/* ===== 1803d9e80 FUN_1803d9e80 ===== */

void FUN_1803d9e80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  float local_res20;
  float local_res24;
  float local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  fVar1 = *(float *)(DAT_180ca0a50 + 0xce8);
  if (0.0 < fVar1) {
    local_40 = *(undefined4 *)(DAT_180ca0a50 + 0xe40);
    uStack_3c = *(undefined4 *)(DAT_180ca0a50 + 0xe44);
    uStack_38 = *(undefined4 *)(DAT_180ca0a50 + 0xe48);
    local_res20 = (float)param_2 + DAT_1808ac34c;
    local_58 = (float)param_1 + DAT_1808ac34c;
    fStack_34 = *(float *)(DAT_180ca0a50 + 0xe4c) * *(float *)(DAT_180ca0a50 + 0xc9c);
    lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    local_50._4_4_ = (float)((ulonglong)param_2 >> 0x20);
    local_res24 = local_50._4_4_ + DAT_1808ac34c;
    local_48._4_4_ = (float)((ulonglong)param_1 >> 0x20);
    local_54 = local_48._4_4_ + DAT_1808ac34c;
    local_50 = param_2;
    local_48 = param_1;
    uVar3 = FUN_1803d7f30(&local_40);
    FUN_1803fe480(*(undefined8 *)(lVar2 + 0x2c8),&local_58,&local_res20,uVar3,param_3,fVar1,0);
    local_40 = *(undefined4 *)(DAT_180ca0a50 + 0xe30);
    uStack_3c = *(undefined4 *)(DAT_180ca0a50 + 0xe34);
    uStack_38 = *(undefined4 *)(DAT_180ca0a50 + 0xe38);
    fStack_34 = *(float *)(DAT_180ca0a50 + 0xe3c) * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar3 = FUN_1803d7f30(&local_40);
    FUN_1803fe480(*(undefined8 *)(lVar2 + 0x2c8),&local_48,&local_50,uVar3,param_3,fVar1,0);
  }
  return;
}



/* ===== 1803d9fd0 FUN_1803d9fd0 ===== */

void FUN_1803d9fd0(float *param_1,int param_2,ulonglong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  
  fVar6 = DAT_1808ac1f4;
  if ((((param_2 == *(int *)(DAT_180ca0a50 + 0x2064)) &&
       ((*(char *)(DAT_180ca0a50 + 0x2060) != '\0' || ((param_3 & 4) != 0)))) &&
      ((param_2 != *(int *)(DAT_180ca0a50 + 0x1ee8) ||
       ((*(byte *)(DAT_180ca0a50 + 0x1eec) & 2) == 0)))) &&
     (lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8), *(char *)(lVar3 + 0x179) == '\0')) {
    if ((param_4 < 0.0) && ((param_3 & 8) != 0)) {
      param_4 = 0.0;
    }
    if (param_4 < 0.0) {
      param_4 = *(float *)(DAT_180ca0a50 + 0xce4);
    }
    fVar16 = *(float *)(DAT_180ca0a50 + 0x11d4) * DAT_1808ac428;
    fVar19 = *(float *)(lVar3 + 0x26c);
    fVar21 = *(float *)(lVar3 + 0x268);
    fVar17 = param_1[1];
    if (param_1[1] <= fVar19) {
      fVar17 = fVar19;
    }
    fVar1 = *(float *)(lVar3 + 0x274);
    fVar18 = *param_1;
    if (*param_1 <= fVar21) {
      fVar18 = fVar21;
    }
    fVar2 = *(float *)(lVar3 + 0x270);
    fVar20 = param_1[3];
    if (fVar1 <= param_1[3]) {
      fVar20 = fVar1;
    }
    fVar23 = param_1[2];
    if (fVar2 <= param_1[2]) {
      fVar23 = fVar2;
    }
    fVar22 = DAT_1808ac540;
    if (DAT_1808ac540 <= fVar16) {
      fVar22 = fVar16;
    }
    if ((param_3 & 2) == 0) {
      fVar16 = (float)(int)((float)(int)fVar22 * DAT_1808ac1f4 + DAT_1808ac658);
      fVar18 = fVar18 - fVar16;
      fVar17 = fVar17 - fVar16;
      fVar23 = fVar16 + fVar23;
      fVar16 = fVar16 + fVar20;
      if ((((fVar18 < fVar21) || (fVar17 < fVar19)) || (fVar2 < fVar23)) || (fVar1 < fVar16)) {
        lVar5 = *(longlong *)(lVar3 + 0x2c8);
        bVar8 = false;
        fVar19 = fVar18;
        if (fVar18 <= fVar23) {
          fVar19 = fVar23;
        }
        fVar21 = fVar17;
        if (fVar17 <= fVar16) {
          fVar21 = fVar16;
        }
        iVar10 = *(int *)(lVar5 + 0xa4);
        if (*(int *)(lVar5 + 0xa0) == iVar10) {
          iVar11 = *(int *)(lVar5 + 0xa0) + 1;
          if (iVar10 == 0) {
            iVar10 = 8;
          }
          else {
            iVar10 = iVar10 / 2 + iVar10;
          }
          if (iVar11 < iVar10) {
            iVar11 = iVar10;
          }
          FUN_1803f7030(lVar5 + 0xa0,iVar11);
        }
        lVar14 = (longlong)*(int *)(lVar5 + 0xa0);
        lVar4 = *(longlong *)(lVar5 + 0xa8);
        *(float *)(lVar4 + lVar14 * 0x10) = fVar18;
        *(float *)(lVar4 + 4 + lVar14 * 0x10) = fVar17;
        *(float *)(lVar4 + 8 + lVar14 * 0x10) = fVar19;
        *(float *)(lVar4 + 0xc + lVar14 * 0x10) = fVar21;
        *(int *)(lVar5 + 0xa0) = *(int *)(lVar5 + 0xa0) + 1;
        *(float *)(lVar5 + 0x60) = fVar18;
        *(float *)(lVar5 + 100) = fVar17;
        *(float *)(lVar5 + 0x68) = fVar19;
        *(float *)(lVar5 + 0x6c) = fVar21;
        FUN_1803fbff0(lVar5);
      }
      else {
        bVar8 = true;
      }
      local_c0 = *(float *)(DAT_180ca0a50 + 0x1170);
      fStack_bc = *(float *)(DAT_180ca0a50 + 0x1174);
      uStack_b8 = *(undefined4 *)(DAT_180ca0a50 + 0x1178);
      fStack_b4 = *(float *)(DAT_180ca0a50 + 0x117c) * *(float *)(DAT_180ca0a50 + 0xc9c);
      uVar9 = FUN_1803d7f30(&local_c0);
      if ((uVar9 & 0xff000000) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x2c8);
        local_c8 = fVar18 + fVar6;
        local_c4 = fVar17 + fVar6;
        if ((*(byte *)(lVar5 + 0x30) & 1) == 0) {
          fVar6 = DAT_1808ac1e0;
        }
        local_c0 = fVar23 - fVar6;
        fStack_bc = fVar16 - fVar6;
        FUN_1803fe160(lVar5,&local_c8,&local_c0,param_4,0);
        FUN_1803fc600(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),uVar9,
                      (float)(int)fVar22,0x200);
        *(undefined4 *)(lVar5 + 0x50) = 0;
      }
      if (!bVar8) {
        lVar3 = *(longlong *)(lVar3 + 0x2c8);
        iVar10 = *(int *)(lVar3 + 0xa0);
        iVar11 = iVar10 + -1;
        *(int *)(lVar3 + 0xa0) = iVar11;
        if (iVar11 == 0) {
          puVar12 = (undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x34);
        }
        else {
          puVar12 = (undefined8 *)((longlong)(iVar10 + -2) * 0x10 + *(longlong *)(lVar3 + 0xa8));
        }
        uVar7 = puVar12[1];
        *(undefined8 *)(lVar3 + 0x60) = *puVar12;
        *(undefined8 *)(lVar3 + 0x68) = uVar7;
        FUN_1803fbff0();
      }
    }
    else {
      local_c0 = *(float *)(DAT_180ca0a50 + 0x1170);
      fStack_bc = *(float *)(DAT_180ca0a50 + 0x1174);
      uStack_b8 = *(undefined4 *)(DAT_180ca0a50 + 0x1178);
      fStack_b4 = *(float *)(DAT_180ca0a50 + 0x117c) * *(float *)(DAT_180ca0a50 + 0xc9c);
      uVar9 = FUN_1803d7f30(&local_c0);
      if ((uVar9 & 0xff000000) != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x2c8);
        if ((*(byte *)(lVar3 + 0x30) & 1) == 0) {
          pfVar15 = &local_c0;
          local_c0 = fVar23 - DAT_1808ac1e0;
          fStack_bc = fVar20 - DAT_1808ac1e0;
          pfVar13 = &local_c8;
          local_c8 = fVar18 + DAT_1808ac1f4;
          local_c4 = fVar17 + DAT_1808ac1f4;
        }
        else {
          pfVar15 = &local_c8;
          pfVar13 = &local_c0;
          local_c8 = fVar23 - DAT_1808ac1f4;
          local_c4 = fVar20 - DAT_1808ac1f4;
          local_c0 = fVar18 + DAT_1808ac1f4;
          fStack_bc = fVar17 + DAT_1808ac1f4;
        }
        FUN_1803fe160(lVar3,pfVar13,pfVar15,param_4,0);
        FUN_1803fc600(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),uVar9,
                      (float)(int)fVar22,0x200);
        *(undefined4 *)(lVar3 + 0x50) = 0;
      }
    }
  }
  return;
}



/* ===== 1803da4c0 FUN_1803da4c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803da4c0(undefined8 param_1,float param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar28;
  float *pfVar27;
  float *pfVar29;
  ulonglong uVar30;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float local_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  lVar13 = DAT_180ca0a50;
  fVar12 = DAT_1808ac540;
  if (10 < param_3) {
    param_3 = 0;
  }
  plVar20 = *(longlong **)(DAT_180ca0a50 + 0x2058);
  pbVar6 = *(byte **)(DAT_180ca0a50 + 0x1228);
  plVar2 = plVar20 + *(int *)(DAT_180ca0a50 + 0x2050);
  local_138 = param_1;
  if (((longlong)*(int *)(DAT_180ca0a50 + 0x2050) & 0x1fffffffffffffffU) != 0) {
    do {
      if ((param_3 < 0xb) && ((*pbVar6 & 2) == 0)) {
        lVar16 = *(longlong *)(pbVar6 + 0x2b0);
        fVar26 = *(float *)(pbVar6 + 0x54);
        lVar19 = (longlong)
                 (*(int *)(*(longlong *)(lVar16 + 0x78) +
                          (ulonglong)(*(uint *)(lVar16 + 0xec) & 0x7ffff) * 4) << 0xc) >> 0xc;
        lVar15 = (longlong)(int)param_3;
        fVar4 = (float)(&DAT_1806c8dc8)[lVar15 * 6];
        fVar25 = local_138._4_4_ - (float)(&DAT_1806c8dd4)[lVar15 * 6];
        fVar5 = (float)(&DAT_1806c8dcc)[lVar15 * 6];
        fVar24 = (float)local_138 - (float)(&DAT_1806c8dd0)[lVar15 * 6];
        lVar7 = *plVar20;
        fVar23 = (float)*(ushort *)(*(longlong *)(lVar16 + 0x68) + lVar19 * 8) +
                 (float)(&DAT_1806c8dc0)[lVar15 * 6];
        fVar21 = (float)*(ushort *)(*(longlong *)(lVar16 + 0x68) + 2 + lVar19 * 8) +
                 (float)(&DAT_1806c8dc4)[lVar15 * 6];
        fVar22 = *(float *)(pbVar6 + 0x58) * fVar21;
        fVar21 = *(float *)(pbVar6 + 0x58) * (fVar21 + fVar5);
        _local_178 = CONCAT44(fVar22,fVar26 * fVar23);
        _local_168 = CONCAT44(fVar22,(fVar23 + _DAT_1808acb1c) * fVar26);
        _fStack_170 = CONCAT44(fVar21,(fVar23 + fVar4) * fVar26);
        _fStack_160 = CONCAT44(fVar21,(fVar23 + _DAT_1808acb1c + fVar4) * fVar26);
        if ((fVar25 < *(float *)(lVar7 + 0xc) + *(float *)(lVar7 + 0x14)) &&
           (((*(float *)(lVar7 + 0xc) < fVar25 + (fVar5 + fVar12) * param_2 &&
             (fVar24 < *(float *)(lVar7 + 8) + *(float *)(lVar7 + 0x10))) &&
            (fVar26 = fVar24 + (fVar4 + fVar12) * param_2, *(float *)(lVar7 + 8) < fVar26)))) {
          local_158 = fVar24;
          local_154 = fVar25;
          lVar16 = FUN_1803ddf50(lVar7,1,"##Foreground");
          uVar10 = *(undefined8 *)(pbVar6 + 0x28);
          uVar11 = *(undefined8 *)(pbVar6 + 0x30);
          iVar14 = *(int *)(lVar16 + 0xb4);
          piVar1 = (int *)(lVar16 + 0xb0);
          if (*piVar1 == iVar14) {
            iVar18 = *piVar1 + 1;
            if (iVar14 == 0) {
              iVar14 = 8;
            }
            else {
              iVar14 = iVar14 / 2 + iVar14;
            }
            if (iVar18 < iVar14) {
              iVar18 = iVar14;
            }
            FUN_1803f7030(piVar1,iVar18);
          }
          puVar17 = (undefined8 *)(*(longlong *)(lVar16 + 0xb8) + (longlong)*piVar1 * 0x10);
          *puVar17 = uVar10;
          puVar17[1] = uVar11;
          *piVar1 = *piVar1 + 1;
          *(undefined8 *)(lVar16 + 0x70) = uVar10;
          *(undefined8 *)(lVar16 + 0x78) = uVar11;
          FUN_1803fc0a0(lVar16);
          local_130 = (fVar4 + DAT_1808ac34c) * param_2 + fVar24;
          fVar21 = param_2 * 0.0 + fVar25;
          fVar22 = (fVar5 + 0.0) * param_2 + fVar25;
          local_128 = param_2 + fVar24;
          local_148 = uVar10;
          uStack_140 = uVar11;
          local_12c = fVar22;
          local_124 = fVar21;
          FUN_1803fea90(lVar16,&local_148,&local_128,&local_130,&local_168,&fStack_160,0x30000000);
          local_118 = param_2 + param_2 + fVar24;
          local_148 = uVar10;
          uStack_140 = uVar11;
          local_120 = fVar26;
          local_11c = fVar22;
          local_114 = fVar21;
          FUN_1803fea90(lVar16,&local_148,&local_118,&local_120,&local_168,&fStack_160,0x30000000);
          local_10c = fVar25 + fVar5 * param_2;
          fVar26 = fVar4 * param_2 + fVar24;
          local_148 = uVar10;
          uStack_140 = uVar11;
          local_110 = fVar26;
          FUN_1803fea90(lVar16,&local_148,&local_158,&local_110,&local_168,&fStack_160,0xff000000);
          pfVar29 = &fStack_170;
          local_104 = fVar5 * param_2 + fVar25;
          pfVar27 = &local_178;
          local_148 = uVar10;
          uStack_140 = uVar11;
          local_108 = fVar26;
          FUN_1803fea90(lVar16,&local_148,&local_158,&local_108,pfVar27,pfVar29,0xffffffff);
          uVar28 = (undefined4)((ulonglong)pfVar27 >> 0x20);
          if (param_3 - 8 < 2) {
            fVar26 = (float)FUN_180519fe0((float)*(double *)(lVar13 + 0x10) * DAT_1808ac750);
            uVar30 = (ulonglong)pfVar29 & 0xffffffff00000000;
            local_100 = param_2 * DAT_1808ac8e4 + fVar24;
            local_fc = param_2 * DAT_1808acda0 + fVar25;
            FUN_1803fddf0(lVar16,&local_100,param_2 * DAT_1808ac7ac,fVar26,
                          CONCAT44(uVar28,fVar26 + _DAT_1808ac76c),uVar30);
            FUN_1803fc600(lVar16,*(undefined8 *)(lVar16 + 0x58),*(undefined4 *)(lVar16 + 0x50),
                          0xffffffff,param_2 * DAT_1808ac658,uVar30 & 0xffffffff00000000);
            *(undefined4 *)(lVar16 + 0x50) = 0;
          }
          iVar18 = *piVar1;
          iVar14 = iVar18 + -1;
          *piVar1 = iVar14;
          if (iVar14 == 0) {
            local_f8 = 0;
            puVar17 = &local_f8;
            uStack_f0 = 0;
          }
          else {
            puVar3 = (undefined8 *)(*(longlong *)(lVar16 + 0xb8) + (longlong)(iVar18 + -2) * 0x10);
            puVar17 = &local_e8;
            local_e8 = *puVar3;
            uStack_e0 = puVar3[1];
          }
          uVar28 = *(undefined4 *)((longlong)puVar17 + 4);
          uVar8 = *(undefined4 *)(puVar17 + 1);
          uVar9 = *(undefined4 *)((longlong)puVar17 + 0xc);
          *(undefined4 *)(lVar16 + 0x70) = *(undefined4 *)puVar17;
          *(undefined4 *)(lVar16 + 0x74) = uVar28;
          *(undefined4 *)(lVar16 + 0x78) = uVar8;
          *(undefined4 *)(lVar16 + 0x7c) = uVar9;
          FUN_1803fc0a0(lVar16);
        }
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar2);
  }
  return;
}



/* ===== 1803daac0 FUN_1803daac0 ===== */

undefined8 * FUN_1803daac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *local_res10;
  longlong local_res18;
  undefined8 **local_res20;
  
  local_res10 = param_2;
  FUN_1803d6b10(param_1 + 5);
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  *(undefined2 *)(param_1 + 0x189) = 0x2e;
  FUN_1803d64f0(param_1 + 0x192);
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  FUN_1803fb5c0(param_1 + 0x243);
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  param_1[0x295] = 0;
  param_1[0x296] = 0;
  param_1[0x297] = 0;
  param_1[0x298] = 0;
  param_1[0x299] = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x2a5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x153c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1544) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1594) = 0;
  param_1[0x2bd] = 0;
  param_1[0x2be] = 0;
  *(undefined4 *)(param_1 + 0x2bf) = 0;
  puVar2 = (undefined8 *)((longlong)param_1 + 0x15fc);
  lVar4 = 0x9b;
  do {
    *puVar2 = 0xffffffffffffffff;
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  local_res10 = param_1 + 0x3a8;
  *(undefined4 *)((longlong)param_1 + 0x1e7c) = 0;
  *(undefined4 *)(param_1 + 0x3cf) = 0;
  param_1[0x3d0] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e8c) = 0;
  *(undefined4 *)(param_1 + 0x3d1) = 0;
  param_1[0x3d2] = 0;
  puVar2 = local_res10;
  for (lVar4 = 0x9b; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined2 *)puVar2 = 0xffff;
    puVar2 = (undefined8 *)((longlong)puVar2 + 2);
  }
  FUN_1803d6150(param_1 + 0x3cf);
  FUN_1803d6150(param_1 + 0x3d1);
  param_1[0x3d6] = 0;
  param_1[0x3d7] = 0;
  param_1[0x3d9] = 0;
  param_1[0x3da] = 0;
  param_1[0x3db] = 0;
  param_1[0x3dc] = 0;
  param_1[0x3d8] = 0xffffffffffffffff;
  param_1[0x3dd] = 0;
  param_1[0x3de] = 0;
  param_1[0x3df] = 0;
  param_1[0x3e0] = 0;
  param_1[0x3e1] = 0;
  param_1[0x3e2] = 0;
  param_1[0x3e3] = 0;
  param_1[0x3e4] = 0;
  param_1[0x3e5] = 0;
  param_1[0x3e6] = 0;
  param_1[999] = 0;
  param_1[1000] = 0;
  param_1[0x3e9] = 0;
  param_1[0x3ea] = 0;
  param_1[0x3eb] = 0;
  param_1[0x3ec] = 0;
  param_1[0x3ed] = 0;
  param_1[0x3ee] = 0;
  param_1[0x3ef] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3f1] = 0;
  param_1[0x3f2] = 0;
  param_1[0x3f3] = 0;
  param_1[0x3f4] = 0;
  param_1[0x3f5] = 0;
  param_1[0x3f6] = 0;
  param_1[0x3f8] = 0;
  param_1[0x3f9] = 0;
  param_1[0x3fa] = 0;
  param_1[0x3fb] = 0;
  param_1[0x3fc] = 0;
  param_1[0x3fd] = 0;
  param_1[0x3fe] = 0;
  param_1[0x3ff] = 0;
  param_1[0x400] = 0;
  param_1[0x401] = 0;
  param_1[0x402] = 0;
  param_1[0x403] = 0;
  param_1[0x404] = 0;
  param_1[0x405] = 0;
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  param_1[0x408] = 0;
  param_1[0x409] = 0;
  param_1[0x40a] = 0;
  param_1[0x40b] = 0;
  param_1[0x412] = 0;
  param_1[0x413] = 0;
  param_1[0x41c] = 0;
  param_1[0x41d] = 0;
  param_1[0x41a] = 0;
  param_1[0x41b] = 0;
  *(undefined4 *)(param_1 + 0x41e) = 0;
  param_1[0x420] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x20fc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x41f) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x20f4) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x2124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x212c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x213c) = 0;
  param_1[0x42c] = 0;
  param_1[0x42d] = 0;
  param_1[0x42a] = 0;
  param_1[0x42b] = 0;
  *(undefined4 *)(param_1 + 0x42e) = 0;
  param_1[0x430] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x217c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x42f) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x2174) = 0x7f7fffff;
  param_1[0x433] = 0;
  param_1[0x434] = 0;
  param_1[0x431] = 0;
  param_1[0x432] = 0;
  *(undefined4 *)(param_1 + 0x435) = 0;
  param_1[0x437] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x21b4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x436) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x21ac) = 0x7f7fffff;
  param_1[0x43a] = 0;
  param_1[0x43b] = 0;
  param_1[0x438] = 0;
  param_1[0x439] = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  param_1[0x43e] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x21ec) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x43d) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x21e4) = 0x7f7fffff;
  param_1[0x441] = 0;
  param_1[0x442] = 0;
  param_1[0x43f] = 0;
  param_1[0x440] = 0;
  *(undefined4 *)(param_1 + 0x443) = 0;
  param_1[0x445] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2224) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x444) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x221c) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x227c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22ac) = 0;
  param_1[0x454] = 0;
  *(undefined4 *)(param_1 + 0x455) = 0;
  param_1[0x457] = 0;
  param_1[0x458] = 0;
  param_1[0x459] = 0;
  param_1[0x45a] = 0;
  *(undefined2 *)(param_1 + 0x45b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22b4) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x22da) = 0;
  param_1[0x45c] = 0;
  param_1[0x45d] = 0;
  param_1[0x45e] = 0;
  param_1[0x45f] = 0;
  param_1[0x465] = 0;
  param_1[0x466] = 0;
  param_1[0x46a] = 0;
  param_1[0x46b] = 0;
  param_1[0x46e] = 0;
  param_1[0x46f] = 0;
  param_1[0x470] = 0;
  param_1[0x471] = 0;
  param_1[0x472] = 0;
  param_1[0x473] = 0;
  param_1[0x474] = 0;
  param_1[0x475] = 0;
  param_1[0x476] = 0;
  param_1[0x477] = 0;
  param_1[0x478] = 0;
  param_1[0x47a] = 0;
  param_1[0x47b] = 0;
  param_1[0x47c] = 0;
  param_1[0x47d] = 0;
  param_1[0x47e] = 0;
  param_1[0x47f] = 0;
  param_1[0x480] = 0;
  param_1[0x481] = 0;
  param_1[0x482] = 0;
  param_1[0x483] = 0;
  param_1[0x484] = 0;
  param_1[0x485] = 0;
  param_1[0x486] = 0;
  param_1[0x487] = 0;
  param_1[0x488] = 0;
  param_1[0x489] = 0;
  param_1[0x48a] = 0;
  param_1[0x48b] = 0;
  param_1[0x48c] = 0;
  param_1[0x48d] = 0;
  param_1[0x48e] = 0;
  param_1[0x48f] = 0;
  param_1[0x490] = 0;
  param_1[0x491] = 0;
  param_1[0x492] = 0;
  param_1[0x493] = 0;
  param_1[0x496] = 0;
  param_1[0x497] = 0;
  param_1[0x498] = 0;
  param_1[0x499] = 0;
  param_1[0x49a] = 0;
  param_1[0x49b] = 0;
  param_1[0x49c] = 0;
  param_1[0x4a1] = 0;
  puVar2 = param_1 + 0x4a2;
  *puVar2 = 0;
  param_1[0x4a3] = 0;
  param_1[0x4a4] = 0;
  param_1[0x4a5] = 0;
  param_1[0x4a6] = 0;
  param_1[0x4a7] = 0;
  param_1[0x4a8] = 0;
  param_1[0x4a9] = 0;
  param_1[0x4aa] = 0;
  param_1[0x4ab] = 0;
  param_1[0x4ac] = 0;
  param_1[0x4ad] = 0;
  param_1[0x4ae] = 0;
  param_1[0x4af] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4b1] = 0;
  local_res10 = puVar2;
  uVar3 = _malloc_base(0xa44);
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  param_1[0x4a3] = uVar3;
  FUN_180540170(uVar3,0,0xa44);
  param_1[0x4b2] = 0;
  param_1[0x4b3] = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  param_1[0x4b5] = 0;
  param_1[0x4b6] = 0;
  param_1[0x4b7] = 0;
  param_1[0x4b8] = 0;
  param_1[0x4b9] = 0;
  param_1[0x4ba] = 0;
  param_1[0x4bb] = 0;
  param_1[0x4bc] = 0;
  param_1[0x4bd] = 0;
  param_1[0x4be] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  param_1[0x4c4] = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0xffffffff;
  param_1[0x4cb] = 0;
  param_1[0x4cc] = 0;
  param_1[0x4cd] = 0;
  param_1[0x4ce] = 0;
  param_1[0x4cf] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  param_1[0x4d2] = 0;
  param_1[0x4d3] = 0;
  param_1[0x4d4] = 0;
  param_1[0x4d5] = 0;
  param_1[0x4dc] = 0;
  param_1[0x4dd] = 0;
  param_1[0x4de] = 0;
  param_1[0x4df] = 0;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  param_1[0x4e3] = 0;
  param_1[0x4e4] = 0;
  param_1[0x4e5] = 0;
  param_1[0x4e6] = 0;
  param_1[0x4e7] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4e9] = 0;
  param_1[0x4ea] = 0;
  param_1[0x4eb] = 0;
  param_1[0x4ec] = 0;
  param_1[0x4ed] = 0;
  param_1[0x4ee] = 0;
  *(undefined4 *)(param_1 + 0x4ef) = 0;
  *(undefined8 *)((longlong)param_1 + 0x277c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2784) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2794) = 0;
  param_1[0x4f3] = 0;
  *(undefined2 *)(param_1 + 0x4f4) = 0;
  param_1[0x4f5] = 0;
  param_1[0x4f6] = 0;
  param_1[0x4f7] = 0;
  param_1[0x4f8] = 0;
  param_1[0x4f9] = 0;
  param_1[0x4fa] = 0;
  param_1[0x4fb] = 0;
  param_1[0x4fc] = 0;
  param_1[0x4fd] = 0;
  param_1[0x4fe] = 0;
  param_1[0x510] = 0;
  param_1[0x511] = 0;
  param_1[0x518] = 0;
  param_1[0x51a] = 0;
  param_1[0x51b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28de) = 0;
  param_1[0x51f] = 0;
  param_1[0x520] = 0;
  param_1[0x521] = 0;
  param_1[0x522] = 0;
  *(undefined4 *)(param_1 + 0x523) = 0;
  *(undefined8 *)((longlong)param_1 + 0x293c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2944) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294c) = 0;
  *(undefined4 *)(param_1 + 0x52a) = 0x10100;
  *(undefined1 *)((longlong)param_1 + 0x2954) = 0;
  param_1[0x52b] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x52c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2964) = 0;
  *(undefined4 *)(param_1 + 0x52d) = 6;
  *(undefined2 *)((longlong)param_1 + 0x296c) = 0x100;
  param_1[0x52e] = 0;
  param_1[0x52f] = 0;
  param_1[0x530] = 0;
  param_1[0x531] = 0;
  param_1[0x532] = 0;
  param_1[0x533] = 0;
  param_1[0x534] = 0;
  param_1[0x535] = 0;
  *(undefined4 *)((longlong)param_1 + 0x29ac) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x535) = 1;
  *(undefined4 *)(param_1 + 0x536) = 0xff7fffff;
  *(undefined8 *)((longlong)param_1 + 0x29b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29dc) = 0;
  param_1[0x53c] = 0;
  param_1[0x53d] = 0;
  param_1[0x55f] = 0;
  param_1[0x560] = 0;
  param_1[0x21] = param_1;
  *puVar2 = param_1;
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x120c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1204) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  local_res18 = _malloc_base(0x3b8);
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  local_res20 = &local_res10;
  if (local_res18 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_180401ff0(local_res18);
  }
  param_1[0xc] = lVar4;
  *(undefined8 **)(lVar4 + 0x2d8) = param_1;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  *(undefined4 *)(param_1 + 0x292) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1494) = 1;
  param_1[0x29d] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a0] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  param_1[0x2a4] = 0;
  param_1[0x2a6] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2a7) = 0;
  param_1[0x2ab] = 0;
  param_1[0x2ac] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  *(undefined4 *)(param_1 + 0x2b1) = 0;
  *(undefined2 *)((longlong)param_1 + 0x158c) = 0xff00;
  *(undefined4 *)((longlong)param_1 + 0x1594) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x2b3) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x159c) = 0;
  param_1[0x2b4] = 0;
  *(undefined4 *)(param_1 + 0x2b2) = 0;
  *(undefined4 *)(param_1 + 0x2b5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15b4) = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b8] = 0;
  *(undefined2 *)(param_1 + 0x2b9) = 0;
  param_1[699] = 0xbff0000000000000;
  param_1[0x2ba] = 0xbff0000000000000;
  param_1[700] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0x3d3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ea4) = 0;
  *(undefined2 *)(param_1 + 0x3f7) = 0;
  param_1[0x40c] = 0;
  param_1[0x40d] = 0;
  param_1[0x410] = 0;
  param_1[0x40f] = 0;
  param_1[0x40e] = 0;
  param_1[0x415] = 0;
  param_1[0x416] = 0;
  *(undefined4 *)(param_1 + 0x411) = 0;
  param_1[0x414] = 0;
  *(undefined4 *)(param_1 + 0x417) = 2;
  param_1[0x418] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x419) = 0;
  *(undefined2 *)(param_1 + 0x421) = 0;
  *(undefined1 *)((longlong)param_1 + 0x210a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x211c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x423) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2234) = 0;
  *(undefined4 *)(param_1 + 0x446) = 0;
  *(undefined4 *)((longlong)param_1 + 0x223c) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0x1010000;
  uVar1 = 0x1200;
  if (*(char *)(param_1 + 0xf) != '\0') {
    uVar1 = 0x8200;
  }
  *(undefined4 *)((longlong)param_1 + 0x2244) = uVar1;
  uVar1 = 0x3200;
  if (*(char *)(param_1 + 0xf) != '\0') {
    uVar1 = 0xa200;
  }
  *(undefined4 *)(param_1 + 0x449) = uVar1;
  param_1[0x44c] = 0;
  param_1[1099] = 0;
  param_1[0x44a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x226c) = 0;
  *(undefined4 *)(param_1 + 0x44d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2274) = 0;
  *(undefined4 *)(param_1 + 0x44f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x228c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2291) = 0;
  *(undefined1 *)(param_1 + 0x452) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2294) = 0;
  param_1[0x453] = 0xffffffffffffffff;
  param_1[0x460] = 0;
  param_1[0x461] = 0;
  param_1[0x462] = 0;
  *(undefined4 *)(param_1 + 0x463) = 0;
  *(undefined4 *)((longlong)param_1 + 0x231c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x464) = 0;
  param_1[0x467] = 0;
  param_1[0x468] = 0;
  *(undefined4 *)(param_1 + 0x469) = 0;
  param_1[0x46c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x236c) = 0;
  param_1[0x479] = 0;
  param_1[0x494] = 0;
  *(undefined4 *)(param_1 + 0x495) = 0;
  param_1[0x49f] = 0;
  param_1[0x49d] = 0;
  param_1[0x49e] = 0;
  param_1[0x4a0] = 0;
  param_1[0x2aa] = &DAT_1806eb0d8;
  param_1[0x4c5] = 0;
  *(undefined4 *)(param_1 + 0x4c6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x263c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2654) = 0;
  *(undefined1 *)(param_1 + 0x4d6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x26b2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26bc) = 0;
  *(undefined2 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c4) = 0;
  param_1[0x4d9] = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x4da) = 0;
  param_1[0x4db] = 0;
  *(undefined8 *)((longlong)param_1 + 0x276c) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x2784) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x27a2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27a4) = 0;
  *(undefined4 *)(param_1 + 0x4ff) = 0;
  param_1[0x500] = 0;
  param_1[0x501] = 0;
  param_1[0x502] = 0;
  param_1[0x503] = 0;
  param_1[0x504] = 0;
  param_1[0x505] = 0;
  param_1[0x506] = 0;
  param_1[0x507] = 0;
  param_1[0x508] = 0;
  param_1[0x509] = 0;
  param_1[0x50a] = 0;
  param_1[0x50b] = 0;
  param_1[0x50c] = 0;
  *(undefined2 *)(param_1 + 0x50d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x286c) = 0;
  param_1[0x50e] = 0;
  param_1[0x513] = 0;
  param_1[0x512] = 0;
  param_1[0x50f] = 0;
  param_1[0x514] = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x28ac) = 2;
  *(undefined4 *)(param_1 + 0x515) = 2;
  param_1[0x516] = 0;
  param_1[0x517] = 0;
  *(undefined1 *)(param_1 + 0x519) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28cc) = 0;
  param_1[0x51d] = 0;
  *(undefined4 *)(param_1 + 0x51e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28f4) = 0x100001;
  *(undefined4 *)((longlong)param_1 + 0x1eac) = 0;
  param_1[0x524] = 0;
  *(undefined2 *)(param_1 + 0x525) = 0;
  *(undefined2 *)(param_1 + 0x526) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x2932) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2934) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fbc) = 0x3e;
  *(undefined4 *)(param_1 + 0x29e) = 0;
  *(undefined4 *)(param_1 + 0x46d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x292a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x292c) = 0x263;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  FUN_180540170(param_1 + 0x53e,0,0xf0);
  param_1[0x55c] = 0;
  *(undefined4 *)(param_1 + 0x55d) = 0;
  param_1[0x55e] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2aec) = 0xffffffff;
  param_1[0x561] = 0;
  param_1[0x562] = 0;
  param_1[0x563] = 0;
  param_1[0x564] = 0;
  param_1[0x565] = 0;
  param_1[0x566] = 0;
  param_1[0x567] = 0;
  param_1[0x568] = 0;
  return param_1;
}



/* ===== 1803db900 FUN_1803db900 ===== */

void FUN_1803db900(longlong param_1)

{
  FUN_1803f5870(param_1 + 0x148);
  FUN_1803f5870(param_1 + 0x138);
  return;
}



/* ===== 1803db940 FUN_1803db940 ===== */

void FUN_1803db940(longlong param_1)

{
  FUN_1803f5870(param_1 + 0x30);
  FUN_18007dea0(param_1 + 0x20);
  FUN_1803f5870(param_1);
  return;
}



/* ===== 1803db970 FUN_1803db970 ===== */

void FUN_1803db970(longlong param_1)

{
  FUN_1803f5870(param_1 + 0x28);
  FUN_1803f5870(param_1 + 0x18);
  FUN_1803f5870(param_1 + 8);
  return;
}



/* ===== 1803db9a0 FUN_1803db9a0 ===== */

void FUN_1803db9a0(longlong param_1)

{
  FUN_1803f5870(param_1 + 11000);
  FUN_1803f5870(param_1 + 0x2998);
  FUN_1803f5870(param_1 + 0x2988);
  FUN_1803f5870(param_1 + 0x2978);
  FUN_1803f5870(param_1 + 0x2908);
  FUN_1803f5870(param_1 + 0x28f8);
  FUN_1803f5870(param_1 + 0x2880);
  FUN_1803f5870(param_1 + 0x27e8);
  FUN_1803f5870(param_1 + 0x27d8);
  FUN_1803f5870(param_1 + 0x27c8);
  FUN_1803f5870(param_1 + 0x27b8);
  FUN_1803f5870(param_1 + 0x27a8);
  FUN_1803f5870(param_1 + 0x2790);
  FUN_18007dea0(param_1 + 0x26f0);
  FUN_1803f5870(param_1 + 0x26e0);
  FUN_1803f5870(param_1 + 0x25f0);
  FUN_18007dea0(param_1 + 0x25e0);
  FUN_1803f5870(param_1 + 0x25c0);
  FUN_1803f5870(param_1 + 0x25b0);
  FUN_1803f5870(param_1 + 0x2590);
  FUN_18041b920(param_1 + 0x2510);
  FUN_1803f5a70(param_1 + 0x24c0);
  FUN_1803f5870(param_1 + 0x24d0);
  FUN_1803f5870(param_1 + 0x24c0);
  FUN_1803f5870(param_1 + 0x24b0);
  FUN_1803f5870(param_1 + 0x2408);
  FUN_1803f5870(param_1 + 0x23f8);
  FUN_1803f5c30(param_1 + 0x23d0);
  FUN_1803f5870(param_1 + 0x23e0);
  FUN_1803f5870(param_1 + 0x23d0);
  FUN_1803f5870(param_1 + 0x23b8);
  FUN_1803f5870(param_1 + 0x23a8);
  FUN_1803f5d80(param_1 + 0x2380);
  FUN_1803f5870(param_1 + 0x2390);
  FUN_1803f5870(param_1 + 0x2380);
  FUN_1803f5870(param_1 + 0x2370);
  FUN_1803f5870(param_1 + 0x2350);
  FUN_1803f5870(param_1 + 9000);
  FUN_1803f5870(param_1 + 0x2090);
  FUN_1803f5870(param_1 + 0x2050);
  FUN_1803f5870(param_1 + 0x2040);
  FUN_1803f5870(param_1 + 0x2030);
  FUN_1803f5870(param_1 + 0x2020);
  FUN_1803f5870(param_1 + 0x2010);
  FUN_1803f5870(param_1 + 0x2000);
  FUN_1803f5870(param_1 + 0x1ff0);
  FUN_1803f5870(param_1 + 0x1fe0);
  FUN_1803f5870(param_1 + 0x1fd0);
  FUN_1803f5870(param_1 + 0x1fc0);
  FUN_1803f5870(param_1 + 0x1e88);
  FUN_1803f5870(param_1 + 0x1e78);
  FUN_1803f5870(param_1 + 0x14d8);
  FUN_1803f5870(param_1 + 0x14c8);
  FUN_1803f5870(param_1 + 0x14b8);
  FUN_1803f5870(param_1 + 0x14a8);
  FUN_1803f5870(param_1 + 0x1498);
  FUN_1803f5870(param_1 + 0x1480);
  FUN_1803f5870(param_1 + 0x1470);
  FUN_1803f5870(param_1 + 0x1270);
  FUN_1803f5870(param_1 + 0x1260);
  FUN_1803f5870(param_1 + 0x11e0);
  FUN_1803f5870(param_1 + 0xc80);
  FUN_18007dea0(param_1 + 0xbe0);
  return;
}



/* ===== 1803dbcc0 FUN_1803dbcc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803dbcc0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  short sVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong lVar11;
  char *pcVar12;
  int iVar13;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  char *local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined1 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  
  puVar1 = DAT_180ca0a50;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_128;
  local_ec = 0;
  local_e0 = 0;
  local_b0 = 0;
  local_f8 = "Window";
  uVar8 = 0xffffffff;
  pcVar12 = "Window";
  bVar3 = 0x57;
  do {
    pcVar12 = pcVar12 + 1;
    if (((bVar3 == 0x23) && (*pcVar12 == 0x23)) && (pcVar12[1] == 0x23)) {
      uVar8 = 0xffffffff;
      pcVar12 = pcVar12 + 2;
    }
    else {
      uVar8 = (ulonglong)
              ((uint)(uVar8 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar8 & 0xff ^ (ulonglong)bVar3) * 4));
    }
    bVar3 = *pcVar12;
  } while (bVar3 != 0);
  local_f0 = ~(uint)uVar8;
  local_e8 = &LAB_1803f4190;
  local_b8 = FUN_1803f41e0;
  local_d8 = FUN_1803f4310;
  local_d0 = FUN_1803f43e0;
  local_c8 = FUN_1803f4560;
  local_c0 = FUN_1803f45e0;
  FUN_1803f5900(DAT_180ca0a50 + 0x27b8,&local_f8);
  local_ec = 0;
  local_e0 = 0;
  local_b0 = 0;
  local_f8 = "Table";
  uVar8 = 0xffffffff;
  pcVar12 = "Table";
  bVar3 = 0x54;
  do {
    pcVar12 = pcVar12 + 1;
    if (((bVar3 == 0x23) && (*pcVar12 == 0x23)) && (pcVar12[1] == 0x23)) {
      uVar8 = 0xffffffff;
      pcVar12 = pcVar12 + 2;
    }
    else {
      uVar8 = (ulonglong)
              ((uint)(uVar8 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar8 & 0xff ^ (ulonglong)bVar3) * 4));
    }
    bVar3 = *pcVar12;
  } while (bVar3 != 0);
  local_f0 = ~(uint)uVar8;
  local_e8 = &LAB_180412da0;
  local_b8 = FUN_180412e00;
  local_d8 = FUN_180412ff0;
  local_d0 = FUN_180413050;
  local_c8 = (code *)&LAB_180412f90;
  local_c0 = FUN_1804133a0;
  FUN_1803f5900(DAT_180ca0a50 + 0x27b8,&local_f8);
  puVar2 = DAT_180ca0a50;
  *(undefined **)(DAT_180ca0a50 + 0x2808) = PTR_s_Dear_ImGui_1_93_0_WIP__19297__1806c2428;
  *(undefined **)(puVar2 + 0x2810) = PTR_s_Size_column_to_fit___SizeOne_1806c2438;
  *(undefined **)(puVar2 + 0x2818) = PTR_s_Size_all_columns_to_fit___SizeAl_1806c2448;
  *(undefined **)(puVar2 + 0x2820) = PTR_s_Size_all_columns_to_default___Si_1806c2458;
  *(undefined **)(puVar2 + 0x2828) = PTR_s_Reset_1806c2468;
  *(undefined **)(puVar2 + 0x2830) = PTR_s_Reset_order___ResetOrder_1806c2478;
  *(undefined **)(puVar2 + 0x2838) = PTR_s_Reset_visibility___ResetVisibili_1806c2488;
  *(undefined **)(puVar2 + 0x2840) = PTR_s__Main_menu_bar__1806c2498;
  *(undefined **)(puVar2 + 0x2848) = PTR_s__Popup__1806c24a8;
  *(undefined **)(puVar2 + 0x2850) = PTR_s__Untitled__1806c24b8;
  *(undefined **)(puVar2 + 0x2858) = PTR_s_Open___s__1806c24c8;
  *(undefined **)(puVar2 + 0x2860) = PTR_s_Copy_Link___CopyLink_1806c24d8;
  *(code **)(puVar1 + 0xc10) = FUN_1803f4bf0;
  *(code **)(puVar1 + 0xc18) = FUN_1803f4d40;
  *(code **)(puVar1 + 0xc28) = FUN_1803f4e10;
  *(code **)(puVar1 + 0xc38) = FUN_1803f4f80;
  local_a8 = FUN_180512a60(0);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  iVar4 = thunk_FUN_1805121e4(&local_80,&local_a8);
  puVar9 = &local_80;
  if (iVar4 != 0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (puVar9 != (undefined8 *)0x0) {
    *(int *)(puVar1 + 0xc4c) =
         (local_70._4_4_ * 100 + (int)local_70) * 100 + uStack_78._4_4_ + 0x121eb24;
  }
  puVar9 = (undefined8 *)_malloc_base(0xf0);
  if (DAT_180ca0a50 != (undefined1 *)0x0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  local_98 = local_108;
  local_a0 = puVar9;
  local_90 = puVar9;
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    local_88 = puVar9 + 0xc;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    *(undefined1 *)local_88 = 0;
    puVar9[0xd] = 0;
    *(undefined4 *)((longlong)puVar9 + 100) = 0;
    iVar4 = *(int *)((longlong)puVar9 + 0x74);
    if (iVar4 < 0) {
      iVar4 = iVar4 + iVar4 / 2;
      iVar13 = 0;
      if (0 < iVar4) {
        iVar13 = iVar4;
      }
      FUN_18000ba20(puVar9 + 0xe,iVar13);
    }
    *(undefined4 *)(puVar9 + 0xe) = 0;
    puVar9[0x12] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x13] = 0;
    puVar9[0x14] = 0;
    *(undefined4 *)(puVar9 + 0x15) = 0;
    puVar9[0x16] = 0;
    puVar9[0x17] = 0;
    puVar9[0x18] = 0;
    puVar9[0x19] = 0;
    puVar9[0x1a] = 0;
    puVar9[0x1b] = 0;
    puVar9[0x1c] = 0;
    puVar9[0x1d] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[10] = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar9 + 0x5c) = 0xbf800000;
    *(undefined4 *)(puVar9 + 0xb) = 0xbf800000;
  }
  *(undefined4 *)puVar9 = 0x11111111;
  iVar4 = *(int *)(puVar1 + 0x2054);
  if (*(int *)(puVar1 + 0x2050) == iVar4) {
    iVar13 = *(int *)(puVar1 + 0x2050) + 1;
    if (iVar4 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar4 / 2 + iVar4;
    }
    if (iVar13 < iVar5) {
      iVar13 = iVar5;
    }
    if (iVar4 < iVar13) {
      uVar6 = _malloc_base((longlong)iVar13 * 8);
      puVar2 = DAT_180ca0a50;
      if (DAT_180ca0a50 != (undefined1 *)0x0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(puVar1 + 0x2058) != 0) {
        FUN_180540530(uVar6,*(longlong *)(puVar1 + 0x2058),(longlong)*(int *)(puVar1 + 0x2050) << 3)
        ;
        lVar11 = *(longlong *)(puVar1 + 0x2058);
        if ((lVar11 != 0) && (puVar2 != (undefined1 *)0x0)) {
          piVar10 = (int *)(puVar2 + (longlong)*(short *)(puVar2 + 0x29bc) * 8 + 0x29c0);
          if (*piVar10 != *(int *)(puVar2 + 4)) {
            iVar4 = *(short *)(puVar2 + 0x29bc) + 1;
            sVar7 = (short)iVar4 + (short)(iVar4 / 6) * -6;
            *(short *)(puVar2 + 0x29bc) = sVar7;
            piVar10 = (int *)(puVar2 + (longlong)sVar7 * 8 + 0x29c0);
            *piVar10 = *(int *)(puVar2 + 4);
            *(undefined4 *)(puVar2 + (longlong)sVar7 * 8 + 0x29c4) = 0;
          }
          *(short *)((longlong)piVar10 + 6) = *(short *)((longlong)piVar10 + 6) + 1;
          *(int *)(puVar2 + 0x29b8) = *(int *)(puVar2 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar11);
      }
      *(undefined8 *)(puVar1 + 0x2058) = uVar6;
      *(int *)(puVar1 + 0x2054) = iVar13;
    }
  }
  *(undefined8 **)(*(longlong *)(puVar1 + 0x2058) + (longlong)*(int *)(puVar1 + 0x2050) * 8) =
       puVar9;
  *(int *)(puVar1 + 0x2050) = *(int *)(puVar1 + 0x2050) + 1;
  local_108[0] = 0;
  FUN_1803f6a20(puVar1 + 11000,0xc01,local_108);
  uVar8 = 0x200;
  do {
    iVar4 = (int)uVar8;
    if (((iVar4 - 0x200U < 0x3c) &&
        ((0xfffffffff001001U >> ((ulonglong)(iVar4 - 0x200U) & 0x3f) & 1) != 0)) ||
       ((iVar4 - 0x254U < 0x21 && ((0x17fff06ffU >> ((ulonglong)(iVar4 - 0x254U) & 0x3f) & 1) != 0))
       )) {
      lVar11 = (longlong)(uVar8 - 0x200) >> 5;
      *(uint *)(puVar1 + lVar11 * 4 + 0x15e8) =
           *(uint *)(puVar1 + lVar11 * 4 + 0x15e8) | 1 << (iVar4 - 0x200U & 0x1f);
    }
    uVar8 = (ulonglong)(iVar4 + 1U);
  } while ((int)(iVar4 + 1U) < 0x29b);
  *(undefined1 **)(puVar1 + 0x1280) = puVar1;
  FUN_1803e8390(*(undefined8 *)(puVar1 + 0x60));
  *puVar1 = 1;
  return;
}



/* ===== 1803dc2d0 FUN_1803dc2d0 ===== */

void FUN_1803dc2d0(void)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int *piVar14;
  longlong lVar15;
  char *pcVar16;
  longlong *plVar17;
  undefined8 local_res8 [4];
  
  pcVar6 = DAT_180ca0a50;
  if (*(longlong *)(DAT_180ca0a50 + 200) != 0) {
    FUN_1803ebc00("Forgot to shutdown Platform backend?");
  }
  if (*(longlong *)(pcVar6 + 0xd0) != 0) {
    FUN_1803ebc00("Forgot to shutdown Renderer backend?");
  }
  plVar17 = *(longlong **)(pcVar6 + 0x11e8);
  plVar2 = plVar17 + *(int *)(pcVar6 + 0x11e0);
  if (((longlong)*(int *)(pcVar6 + 0x11e0) & 0x1fffffffffffffffU) != 0) {
    do {
      pcVar16 = DAT_180ca0a50;
      lVar8 = *plVar17;
      puVar4 = *(undefined8 **)(lVar8 + 0x2a8);
      for (puVar12 = puVar4; puVar12 < puVar4 + *(int *)(lVar8 + 0x2a0); puVar12 = puVar12 + 1) {
        if ((char *)*puVar12 == DAT_180ca0a50 + 0x1218) {
          lVar15 = ((longlong)puVar12 - (longlong)puVar4 & 0xfffffffffffffff8U) + (longlong)puVar4;
          FUN_180540530(lVar15,lVar15 + 8,
                        ((longlong)*(int *)(lVar8 + 0x2a0) -
                        ((longlong)puVar12 - (longlong)puVar4 >> 3)) * 8 + -8);
          *(int *)(lVar8 + 0x2a0) = *(int *)(lVar8 + 0x2a0) + -1;
          break;
        }
      }
      plVar5 = *(longlong **)(pcVar16 + 0x11e8);
      for (plVar13 = plVar5; plVar13 < plVar5 + *(int *)(pcVar16 + 0x11e0); plVar13 = plVar13 + 1) {
        if (*plVar13 == lVar8) {
          lVar15 = (longlong)plVar5 + ((longlong)plVar13 - (longlong)plVar5 & 0xfffffffffffffff8U);
          FUN_180540530(lVar15,lVar15 + 8,
                        ((longlong)*(int *)(pcVar16 + 0x11e0) -
                        ((longlong)plVar13 - (longlong)plVar5 >> 3)) * 8 + -8);
          *(int *)(pcVar16 + 0x11e0) = *(int *)(pcVar16 + 0x11e0) + -1;
          break;
        }
      }
      *(int *)(lVar8 + 0x2d4) = *(int *)(lVar8 + 0x2d4) + -1;
      plVar13 = *(longlong **)(lVar8 + 0x48);
      plVar5 = plVar13 + *(int *)(lVar8 + 0x40);
      for (; plVar13 != plVar5; plVar13 = plVar13 + 1) {
        *(undefined2 *)(*plVar13 + 0x5c) = *(undefined2 *)(lVar8 + 0x2d4);
      }
      if ((*(char **)(lVar8 + 0x2d8) == pcVar6) && (*(int *)(lVar8 + 0x2d4) == 0)) {
        *(undefined2 *)(lVar8 + 0x50) = 0;
        FUN_180402350(lVar8);
        puVar12 = *(undefined8 **)(lVar8 + 0x48);
        puVar4 = puVar12 + *(int *)(lVar8 + 0x40);
        for (; puVar12 != puVar4; puVar12 = puVar12 + 1) {
          FUN_180401f30(*puVar12);
        }
        FUN_18040c2b0(lVar8 + 0x40);
        *(undefined8 *)(lVar8 + 0x38) = 0;
        FUN_1803f5870(lVar8 + 0x2a0);
        FUN_1803f5870(lVar8 + 0x78);
        FUN_1803f5870(lVar8 + 0x68);
        FUN_1803f5870(lVar8 + 0x40);
        pcVar16 = DAT_180ca0a50;
        if (DAT_180ca0a50 != (char *)0x0) {
          piVar1 = (int *)(DAT_180ca0a50 + 4);
          lVar15 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8;
          if (*(int *)(DAT_180ca0a50 + lVar15 + 0x29c0) != *piVar1) {
            iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
            sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
            *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
            lVar15 = (longlong)sVar9 * 8;
            *(int *)(pcVar16 + lVar15 + 0x29c0) = *piVar1;
            pcVar3 = pcVar16 + lVar15 + 0x29c4;
            pcVar3[0] = '\0';
            pcVar3[1] = '\0';
            pcVar3[2] = '\0';
            pcVar3[3] = '\0';
          }
          *(short *)(pcVar16 + lVar15 + 0x29c6) = *(short *)(pcVar16 + lVar15 + 0x29c6) + 1;
          *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar8);
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar2);
  }
  FUN_1803d6150(pcVar6 + 0x1260);
  if (*pcVar6 != '\0') {
    if ((pcVar6[0x27a2] != '\0') && (lVar8 = *(longlong *)(pcVar6 + 0x48), lVar8 != 0)) {
      pcVar16 = DAT_180ca0a50;
      pcVar16[0x27a4] = '\0';
      pcVar16[0x27a5] = '\0';
      pcVar16[0x27a6] = '\0';
      pcVar16[0x27a7] = '\0';
      local_res8[0] = 0;
      uVar7 = FUN_1803f3f90(local_res8);
      lVar8 = FUN_1803d7900(lVar8,&DAT_1808a8e8c);
      if (lVar8 != 0) {
        FUN_18051142c(uVar7,1,local_res8[0],lVar8);
        FUN_18051053c(lVar8);
      }
    }
    lVar15 = *(longlong *)(pcVar6 + 0x27f0);
    lVar8 = (longlong)*(int *)(pcVar6 + 0x27e8) * 0x20 + lVar15;
    if ((longlong)*(int *)(pcVar6 + 0x27e8) * 0x20 != 0) {
      do {
        if (*(int *)(lVar15 + 4) == 6) {
          (**(code **)(lVar15 + 0x10))(pcVar6,lVar15);
        }
        lVar15 = lVar15 + 0x20;
      } while (lVar15 != lVar8);
    }
    iVar10 = 0;
    if (0 < *(int *)(pcVar6 + 0x1498)) {
      do {
        lVar8 = *(longlong *)(*(longlong *)(pcVar6 + 0x14a0) + (longlong)iVar10 * 8);
        if (lVar8 != 0) {
          FUN_1803dd350(lVar8);
          pcVar16 = DAT_180ca0a50;
          if (DAT_180ca0a50 != (char *)0x0) {
            piVar1 = (int *)(DAT_180ca0a50 + 4);
            lVar15 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8;
            if (*(int *)(DAT_180ca0a50 + lVar15 + 0x29c0) != *piVar1) {
              iVar11 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
              sVar9 = (short)iVar11 + (short)(iVar11 / 6) * -6;
              *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
              lVar15 = (longlong)sVar9 * 8;
              *(int *)(pcVar16 + lVar15 + 0x29c0) = *piVar1;
              pcVar3 = pcVar16 + lVar15 + 0x29c4;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
            }
            *(short *)(pcVar16 + lVar15 + 0x29c6) = *(short *)(pcVar16 + lVar15 + 0x29c6) + 1;
            *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
          }
          thunk_FUN_1805277b0(lVar8);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(pcVar6 + 0x1498));
    }
    FUN_1803d6150(pcVar6 + 0x1498);
    FUN_1803d6150(pcVar6 + 0x14a8);
    FUN_1803d6150(pcVar6 + 0x14b8);
    pcVar6[0x14f8] = '\0';
    pcVar6[0x14f9] = '\0';
    pcVar6[0x14fa] = '\0';
    pcVar6[0x14fb] = '\0';
    pcVar6[0x14fc] = '\0';
    pcVar6[0x14fd] = '\0';
    pcVar6[0x14fe] = '\0';
    pcVar6[0x14ff] = '\0';
    lVar8 = *(longlong *)(pcVar6 + 0x14d0);
    if (lVar8 != 0) {
      pcVar6[0x14c8] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x14c9] = '\0';
      pcVar6[0x14ca] = '\0';
      pcVar6[0x14cb] = '\0';
      pcVar6[0x14cc] = '\0';
      pcVar6[0x14cd] = '\0';
      pcVar6[0x14ce] = '\0';
      pcVar6[0x14cf] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x14d0] = '\0';
      pcVar6[0x14d1] = '\0';
      pcVar6[0x14d2] = '\0';
      pcVar6[0x14d3] = '\0';
      pcVar6[0x14d4] = '\0';
      pcVar6[0x14d5] = '\0';
      pcVar6[0x14d6] = '\0';
      pcVar6[0x14d7] = '\0';
    }
    FUN_1803d6150(pcVar6 + 0x14d8);
    pcVar6[0x2068] = '\0';
    pcVar6[0x2069] = '\0';
    pcVar6[0x206a] = '\0';
    pcVar6[0x206b] = '\0';
    pcVar6[0x206c] = '\0';
    pcVar6[0x206d] = '\0';
    pcVar6[0x206e] = '\0';
    pcVar6[0x206f] = '\0';
    pcVar6[0x1508] = '\0';
    pcVar6[0x1509] = '\0';
    pcVar6[0x150a] = '\0';
    pcVar6[0x150b] = '\0';
    pcVar6[0x150c] = '\0';
    pcVar6[0x150d] = '\0';
    pcVar6[0x150e] = '\0';
    pcVar6[0x150f] = '\0';
    pcVar6[0x1500] = '\0';
    pcVar6[0x1501] = '\0';
    pcVar6[0x1502] = '\0';
    pcVar6[0x1503] = '\0';
    pcVar6[0x1504] = '\0';
    pcVar6[0x1505] = '\0';
    pcVar6[0x1506] = '\0';
    pcVar6[0x1507] = '\0';
    pcVar6[0x15a0] = '\0';
    pcVar6[0x15a1] = '\0';
    pcVar6[0x15a2] = '\0';
    pcVar6[0x15a3] = '\0';
    pcVar6[0x15a4] = '\0';
    pcVar6[0x15a5] = '\0';
    pcVar6[0x15a6] = '\0';
    pcVar6[0x15a7] = '\0';
    pcVar6[0x1518] = '\0';
    pcVar6[0x1519] = '\0';
    pcVar6[0x151a] = '\0';
    pcVar6[0x151b] = '\0';
    pcVar6[0x151c] = '\0';
    pcVar6[0x151d] = '\0';
    pcVar6[0x151e] = '\0';
    pcVar6[0x151f] = '\0';
    pcVar16 = pcVar6 + 0x1d40;
    for (lVar8 = 0x9b; lVar8 != 0; lVar8 = lVar8 + -1) {
      pcVar16[0] = -1;
      pcVar16[1] = -1;
      pcVar16 = pcVar16 + 2;
    }
    FUN_1803d6150(pcVar6 + 0x1e78);
    FUN_1803d6150(pcVar6 + 0x1e88);
    lVar8 = *(longlong *)(pcVar6 + 0x1fc8);
    if (lVar8 != 0) {
      pcVar6[0x1fc0] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x1fc1] = '\0';
      pcVar6[0x1fc2] = '\0';
      pcVar6[0x1fc3] = '\0';
      pcVar6[0x1fc4] = '\0';
      pcVar6[0x1fc5] = '\0';
      pcVar6[0x1fc6] = '\0';
      pcVar6[0x1fc7] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x1fc8] = '\0';
      pcVar6[0x1fc9] = '\0';
      pcVar6[0x1fca] = '\0';
      pcVar6[0x1fcb] = '\0';
      pcVar6[0x1fcc] = '\0';
      pcVar6[0x1fcd] = '\0';
      pcVar6[0x1fce] = '\0';
      pcVar6[0x1fcf] = '\0';
    }
    lVar8 = *(longlong *)(pcVar6 + 0x1fd8);
    if (lVar8 != 0) {
      pcVar6[0x1fd0] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x1fd1] = '\0';
      pcVar6[0x1fd2] = '\0';
      pcVar6[0x1fd3] = '\0';
      pcVar6[0x1fd4] = '\0';
      pcVar6[0x1fd5] = '\0';
      pcVar6[0x1fd6] = '\0';
      pcVar6[0x1fd7] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x1fd8] = '\0';
      pcVar6[0x1fd9] = '\0';
      pcVar6[0x1fda] = '\0';
      pcVar6[0x1fdb] = '\0';
      pcVar6[0x1fdc] = '\0';
      pcVar6[0x1fdd] = '\0';
      pcVar6[0x1fde] = '\0';
      pcVar6[0x1fdf] = '\0';
    }
    lVar8 = *(longlong *)(pcVar6 + 0x1fe8);
    if (lVar8 != 0) {
      pcVar6[0x1fe0] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x1fe1] = '\0';
      pcVar6[0x1fe2] = '\0';
      pcVar6[0x1fe3] = '\0';
      pcVar6[0x1fe4] = '\0';
      pcVar6[0x1fe5] = '\0';
      pcVar6[0x1fe6] = '\0';
      pcVar6[0x1fe7] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x1fe8] = '\0';
      pcVar6[0x1fe9] = '\0';
      pcVar6[0x1fea] = '\0';
      pcVar6[0x1feb] = '\0';
      pcVar6[0x1fec] = '\0';
      pcVar6[0x1fed] = '\0';
      pcVar6[0x1fee] = '\0';
      pcVar6[0x1fef] = '\0';
    }
    FUN_1803d6150(pcVar6 + 0x2020);
    FUN_1803d6150(pcVar6 + 0x2030);
    lVar8 = *(longlong *)(pcVar6 + 0x2048);
    if (lVar8 != 0) {
      pcVar6[0x2040] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x2041] = '\0';
      pcVar6[0x2042] = '\0';
      pcVar6[0x2043] = '\0';
      pcVar6[0x2044] = '\0';
      pcVar6[0x2045] = '\0';
      pcVar6[0x2046] = '\0';
      pcVar6[0x2047] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x2048] = '\0';
      pcVar6[0x2049] = '\0';
      pcVar6[0x204a] = '\0';
      pcVar6[0x204b] = '\0';
      pcVar6[0x204c] = '\0';
      pcVar6[0x204d] = '\0';
      pcVar6[0x204e] = '\0';
      pcVar6[0x204f] = '\0';
    }
    FUN_1803f5ea0(pcVar6 + 0x2050);
    FUN_1803f5c30(pcVar6 + 0x23d0);
    lVar8 = *(longlong *)(pcVar6 + 0x2400);
    if (lVar8 != 0) {
      pcVar6[0x23f8] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x23f9] = '\0';
      pcVar6[0x23fa] = '\0';
      pcVar6[0x23fb] = '\0';
      pcVar6[0x23fc] = '\0';
      pcVar6[0x23fd] = '\0';
      pcVar6[0x23fe] = '\0';
      pcVar6[0x23ff] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x2400] = '\0';
      pcVar6[0x2401] = '\0';
      pcVar6[0x2402] = '\0';
      pcVar6[0x2403] = '\0';
      pcVar6[0x2404] = '\0';
      pcVar6[0x2405] = '\0';
      pcVar6[0x2406] = '\0';
      pcVar6[0x2407] = '\0';
    }
    lVar8 = *(longlong *)(pcVar6 + 0x2410);
    if (lVar8 != 0) {
      pcVar6[0x2408] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x2409] = '\0';
      pcVar6[0x240a] = '\0';
      pcVar6[0x240b] = '\0';
      pcVar6[0x240c] = '\0';
      pcVar6[0x240d] = '\0';
      pcVar6[0x240e] = '\0';
      pcVar6[0x240f] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x2410] = '\0';
      pcVar6[0x2411] = '\0';
      pcVar6[0x2412] = '\0';
      pcVar6[0x2413] = '\0';
      pcVar6[0x2414] = '\0';
      pcVar6[0x2415] = '\0';
      pcVar6[0x2416] = '\0';
      pcVar6[0x2417] = '\0';
    }
    iVar10 = 0;
    if (0 < *(int *)(pcVar6 + 0x2350)) {
      do {
        FUN_1803f5870(*(longlong *)(pcVar6 + 0x2358) + ((longlong)iVar10 * 5 + 3) * 8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(pcVar6 + 0x2350));
    }
    lVar8 = *(longlong *)(pcVar6 + 0x2358);
    if (lVar8 != 0) {
      pcVar6[0x2350] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x2351] = '\0';
      pcVar6[0x2352] = '\0';
      pcVar6[0x2353] = '\0';
      pcVar6[0x2354] = '\0';
      pcVar6[0x2355] = '\0';
      pcVar6[0x2356] = '\0';
      pcVar6[0x2357] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x2358] = '\0';
      pcVar6[0x2359] = '\0';
      pcVar6[0x235a] = '\0';
      pcVar6[0x235b] = '\0';
      pcVar6[0x235c] = '\0';
      pcVar6[0x235d] = '\0';
      pcVar6[0x235e] = '\0';
      pcVar6[0x235f] = '\0';
    }
    FUN_1803f5d80(pcVar6 + 0x2380);
    iVar10 = 0;
    if (0 < *(int *)(pcVar6 + 0x2370)) {
      do {
        lVar15 = (longlong)iVar10 * 0xb0;
        lVar8 = *(longlong *)(pcVar6 + 0x2378);
        FUN_1804014e0(lVar8 + 0x50 + lVar15);
        FUN_1803f5870(lVar8 + 0x58 + lVar15);
        FUN_1803f5870(lVar8 + 0x20 + lVar15);
        FUN_1803f5870(lVar8 + 0x10 + lVar15);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(pcVar6 + 0x2370));
    }
    lVar8 = *(longlong *)(pcVar6 + 0x2378);
    if (lVar8 != 0) {
      pcVar6[0x2370] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x2371] = '\0';
      pcVar6[0x2372] = '\0';
      pcVar6[0x2373] = '\0';
      pcVar6[0x2374] = '\0';
      pcVar6[0x2375] = '\0';
      pcVar6[0x2376] = '\0';
      pcVar6[0x2377] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x2378] = '\0';
      pcVar6[0x2379] = '\0';
      pcVar6[0x237a] = '\0';
      pcVar6[0x237b] = '\0';
      pcVar6[0x237c] = '\0';
      pcVar6[0x237d] = '\0';
      pcVar6[0x237e] = '\0';
      pcVar6[0x237f] = '\0';
    }
    FUN_1803d6150(pcVar6 + 0x23b8);
    FUN_1803f5a70(pcVar6 + 0x24c0);
    FUN_1803f5b50(pcVar6 + 0x24b0);
    FUN_1803d6150(pcVar6 + 0x26e0);
    FUN_1803d6150(pcVar6 + 0x26f0);
    FUN_1803d6150(pcVar6 + 0x2538);
    FUN_1803d6150(pcVar6 + 0x2548);
    FUN_1803d6150(pcVar6 + 0x2590);
    pcVar6[0x25a0] = '\0';
    pcVar6[0x25a1] = '\0';
    pcVar6[0x25a2] = '\0';
    pcVar6[0x25a3] = '\0';
    pcVar6[0x25a8] = '\0';
    pcVar6[0x25a9] = '\0';
    pcVar6[0x25aa] = '\0';
    pcVar6[0x25ab] = '\0';
    pcVar6[0x25ac] = '\0';
    pcVar6[0x25ad] = '\0';
    pcVar6[0x25ae] = '\0';
    pcVar6[0x25af] = '\0';
    FUN_1803d6150(pcVar6 + 0x25b0);
    FUN_1803d6150(pcVar6 + 0x27c8);
    lVar8 = *(longlong *)(pcVar6 + 0x27c0);
    if (lVar8 != 0) {
      pcVar6[0x27b8] = '\0';
      pcVar16 = DAT_180ca0a50;
      pcVar6[0x27b9] = '\0';
      pcVar6[0x27ba] = '\0';
      pcVar6[0x27bb] = '\0';
      pcVar6[0x27bc] = '\0';
      pcVar6[0x27bd] = '\0';
      pcVar6[0x27be] = '\0';
      pcVar6[0x27bf] = '\0';
      if (DAT_180ca0a50 != (char *)0x0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar14 = (int *)(DAT_180ca0a50 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8 + 0x29c0)
        ;
        if (*piVar14 != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          piVar14 = (int *)(pcVar16 + (longlong)sVar9 * 8 + 0x29c0);
          *piVar14 = *piVar1;
          pcVar3 = pcVar16 + (longlong)sVar9 * 8 + 0x29c4;
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
        }
        *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
        *(int *)(pcVar16 + 0x29b8) = *(int *)(pcVar16 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar8);
      pcVar6[0x27c0] = '\0';
      pcVar6[0x27c1] = '\0';
      pcVar6[0x27c2] = '\0';
      pcVar6[0x27c3] = '\0';
      pcVar6[0x27c4] = '\0';
      pcVar6[0x27c5] = '\0';
      pcVar6[0x27c6] = '\0';
      pcVar6[0x27c7] = '\0';
    }
    lVar8 = *(longlong *)(pcVar6 + 0x2878);
    if (lVar8 != 0) {
      lVar15 = __acrt_iob_func(1);
      if (lVar8 != lVar15) {
        FUN_18051053c(lVar8);
      }
      pcVar6[0x2878] = '\0';
      pcVar6[0x2879] = '\0';
      pcVar6[0x287a] = '\0';
      pcVar6[0x287b] = '\0';
      pcVar6[0x287c] = '\0';
      pcVar6[0x287d] = '\0';
      pcVar6[0x287e] = '\0';
      pcVar6[0x287f] = '\0';
    }
    FUN_1803d6150(pcVar6 + 0x2880);
    FUN_1803d6150(pcVar6 + 0x28f8);
    FUN_1803d6150(pcVar6 + 0x2908);
    pcVar6[0x2918] = '\0';
    pcVar6[0x2919] = '\0';
    pcVar6[0x291a] = '\0';
    pcVar6[0x291b] = '\0';
    *pcVar6 = '\0';
  }
  return;
}



/* ===== 1803dcef0 FUN_1803dcef0 ===== */

longlong * FUN_1803dcef0(longlong *param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  byte *pbVar11;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  plVar1 = param_1 + 0x21;
  *plVar1 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  plVar2 = param_1 + 0x5a;
  FUN_1803fb8f0(plVar2,0);
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  FUN_180540170(param_1,0,0x438);
  *param_1 = param_2;
  sVar5 = strlen((char *)param_3);
  uVar6 = _malloc_base(sVar5 + 1);
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  lVar7 = FUN_180540530(uVar6,param_3,sVar5 + 1);
  param_1[1] = lVar7;
  sVar5 = strlen((char *)param_3);
  *(int *)(param_1 + 0x11) = (int)sVar5 + 1;
  uVar9 = 0xffffffff;
  uVar8 = 0xffffffff;
  bVar3 = *param_3;
  while (bVar3 != 0) {
    pbVar11 = param_3 + 1;
    if (((bVar3 == 0x23) && (*pbVar11 == 0x23)) && (param_3[2] == 0x23)) {
      uVar9 = 0xffffffff;
      pbVar11 = param_3 + 3;
    }
    else {
      uVar9 = (ulonglong)
              ((uint)(uVar9 >> 8) ^
              *(uint *)(&DAT_1806c25c0 + (uVar9 & 0xff ^ (ulonglong)bVar3) * 4));
    }
    uVar8 = (uint)uVar9;
    param_3 = pbVar11;
    bVar3 = *pbVar11;
  }
  *(uint *)(param_1 + 2) = ~uVar8;
  iVar4 = *(int *)((longlong)param_1 + 0x10c);
  if ((int)*plVar1 == iVar4) {
    iVar10 = (int)*plVar1 + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar10 < iVar4) {
      iVar10 = iVar4;
    }
    FUN_18007e1d0(plVar1,iVar10);
  }
  *(int *)(param_1[0x22] + (longlong)(int)*plVar1 * 4) = (int)param_1[2];
  lVar7 = *plVar1;
  *(int *)plVar1 = (int)lVar7 + 1;
  iVar4 = FUN_1803d7830("#MOVE",0,*(undefined4 *)(param_1[0x22] + (longlong)(int)lVar7 * 4));
  if (*(int *)(*param_1 + 0x155c) == iVar4) {
    FUN_1803f5630(iVar4,0xb,"#MOVE");
  }
  *(int *)((longlong)param_1 + 0x8c) = iVar4;
  *(undefined4 *)(param_1 + 0x15) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x16) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1d) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x20) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1f) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0xffffffff;
  param_1[0x59] = (longlong)plVar2;
  param_1[0x75] = param_1[1];
  FUN_1803fba70(plVar2,*param_1 + 0x1218);
  *(undefined4 *)(param_1 + 0x84) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x83) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x7f7fffff;
  return param_1;
}



/* ===== 1803dd310 FUN_1803dd310 ===== */

void FUN_1803dd310(longlong param_1)

{
  FUN_1803f5870(param_1 + 0xf0);
  FUN_1803f5870(param_1 + 0xe0);
  FUN_1803f5870(param_1 + 0x98);
  return;
}



/* ===== 1803dd350 FUN_1803dd350 ===== */

void FUN_1803dd350(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar6 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar5 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar5 != *piVar1) {
        iVar4 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar3;
        piVar5 = (int *)(lVar6 + 0x29c0 + (longlong)sVar3 * 8);
        *piVar5 = *piVar1;
        *(undefined4 *)(lVar6 + 0x29c4 + (longlong)sVar3 * 8) = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar6 + 0x29b8) = *(int *)(lVar6 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar2);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2a8)) {
    do {
      lVar6 = (longlong)iVar4 * 0x88;
      lVar2 = *(longlong *)(param_1 + 0x2b0);
      FUN_1804014e0(lVar2 + 0x70 + lVar6);
      FUN_1803f5870(lVar2 + 0x78 + lVar6);
      FUN_1803f5870(lVar2 + 0x60 + lVar6);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x2a8));
  }
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    lVar6 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar5 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar5 != *piVar1) {
        iVar4 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar3;
        piVar5 = (int *)(lVar6 + 0x29c0 + (longlong)sVar3 * 8);
        *piVar5 = *piVar1;
        *(undefined4 *)(lVar6 + 0x29c4 + (longlong)sVar3 * 8) = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar6 + 0x29b8) = *(int *)(lVar6 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar2);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  FUN_1803fb9a0(param_1 + 0x2d0);
  FUN_1803f5870(param_1 + 0x2a8);
  FUN_1803f5870(param_1 + 0x298);
  FUN_1803f5870(param_1 + 0x208);
  FUN_1803f5870(param_1 + 0x1f8);
  FUN_1803f5870(param_1 + 0x1b0);
  FUN_18007dea0(param_1 + 0x108);
  return;
}



/* ===== 1803dd530 FUN_1803dd530 ===== */

void FUN_1803dd530(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  lVar2 = DAT_180ca0a50;
  *(longlong *)(DAT_180ca0a50 + 0x14f8) = param_1;
  if (param_1 == 0) {
    *(undefined8 *)(lVar2 + 0x28e8) = 0;
  }
  else {
    *(longlong *)(lVar2 + 0x28e8) =
         (longlong)(*(int *)(lVar2 + 0x14c8) + -1) * 0x88 + *(longlong *)(lVar2 + 0x14d0) + 0x58;
    if (*(int *)(param_1 + 0x1d0) != -1) {
      *(longlong *)(lVar2 + 0x2360) =
           (longlong)*(int *)(param_1 + 0x1d0) * 0x250 + *(longlong *)(lVar2 + 0x2388);
      *(undefined4 *)(lVar2 + 0x1210) = 0x3f800000;
      goto LAB_1803dd5c5;
    }
  }
  *(undefined8 *)(lVar2 + 0x2360) = 0;
  *(undefined4 *)(lVar2 + 0x1210) = 0x3f800000;
  if (param_1 == 0) {
    return;
  }
LAB_1803dd5c5:
  if ((*(byte *)(lVar2 + 0x2c) & 0x10) != 0) {
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x18);
    if (fVar4 == 0.0) {
      fVar4 = *(float *)(lVar2 + 0x38);
    }
    *(float *)(lVar2 + 0x120c) = fVar4;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xd1);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  FUN_1803e8770(0);
  lVar3 = DAT_180ca0a50;
  *(undefined1 *)(param_1 + 0xd1) = uVar1;
  lVar2 = *(longlong *)(lVar3 + 0x14f8);
  if ((*(longlong *)(lVar3 + 0x2360) == 0) && (*(longlong *)(lVar2 + 0x1c8) == 0)) {
    *(undefined1 *)(lVar2 + 0x178) = 1;
    return;
  }
  *(undefined1 *)(lVar2 + 0x178) = 0;
  return;
}



/* ===== 1803dd660 FUN_1803dd660 ===== */

void FUN_1803dd660(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  
  lVar3 = DAT_180ca0a50;
  iVar2 = *(int *)(DAT_180ca0a50 + 0x1578);
  if (iVar2 != 0) {
    piVar1 = (int *)(DAT_180ca0a50 + 0x1ee8);
    *(int *)(DAT_180ca0a50 + 0x15ac) = iVar2;
    iVar7 = *(int *)(lVar3 + 4);
    if (*piVar1 != iVar2) {
      iVar7 = *(int *)(lVar3 + 4) + 1;
    }
    *(int *)(lVar3 + 0x15b0) = iVar7;
    *(undefined1 *)(lVar3 + 0x15b4) = *(undefined1 *)(lVar3 + 0x158a);
    *(bool *)(lVar3 + 0x15b5) = *(int *)(lVar3 + 0x157c) == iVar2;
    if (*(int *)(lVar3 + 0x2524) == iVar2) {
      FUN_18041c160();
    }
    if ((*(longlong *)(lVar3 + 0x1518) != 0) &&
       (*(int *)(lVar3 + 0x1578) == *(int *)(*(longlong *)(lVar3 + 0x1518) + 0x8c))) {
      if ((*(byte *)(lVar3 + 0x28f4) & 2) != 0) {
        FUN_1803f5060("SetActiveID() cancel MovingWindow\n");
      }
      *(undefined8 *)(DAT_180ca0a50 + 0x1518) = 0;
    }
  }
  iVar2 = *(int *)(lVar3 + 0x1578);
  *(bool *)(lVar3 + 0x1584) = iVar2 != param_1;
  if (iVar2 != param_1) {
    if ((*(byte *)(lVar3 + 0x28f4) & 2) != 0) {
      if (*(longlong *)(lVar3 + 0x15a0) == 0) {
        puVar8 = &DAT_18058b643;
      }
      else {
        puVar8 = *(undefined1 **)(*(longlong *)(lVar3 + 0x15a0) + 8);
      }
      if (param_2 == 0) {
        puVar6 = &DAT_18058b643;
        iVar7 = 0x14;
      }
      else {
        sVar5 = strlen(*(char **)(param_2 + 8));
        puVar6 = *(undefined1 **)(param_2 + 8);
        iVar7 = 0x14 - (int)sVar5;
        if (iVar7 < 1) {
          iVar7 = 0;
        }
      }
      FUN_1803f5060("SetActiveID() 0x%08X in \"%s\"%*s(previously 0x%08X in \"%s\")\n",param_1,
                    puVar6,iVar7,&DAT_18058b643,iVar2,puVar8);
    }
    *(undefined4 *)(lVar3 + 0x1580) = 0;
    *(undefined2 *)(lVar3 + 0x1589) = 0;
    *(undefined1 *)(lVar3 + 0x158d) = 0xff;
    if (param_1 != 0) {
      *(int *)(lVar3 + 0x15c0) = param_1;
      *(undefined4 *)(lVar3 + 0x15c4) = 0;
    }
  }
  *(longlong *)(lVar3 + 0x15a0) = param_2;
  *(int *)(lVar3 + 0x1578) = param_1;
  *(undefined2 *)(lVar3 + 0x1587) = 0;
  *(undefined2 *)(lVar3 + 0x158b) = 0;
  *(undefined4 *)(lVar3 + 0x1590) = 0;
  if (param_1 != 0) {
    *(int *)(lVar3 + 0x157c) = param_1;
    if ((*(int *)(lVar3 + 0x207c) == param_1) || (uVar4 = 1, *(int *)(lVar3 + 0x2234) == param_1)) {
      uVar4 = *(undefined4 *)(lVar3 + 0x20b8);
    }
    *(undefined4 *)(lVar3 + 0x159c) = uVar4;
  }
  *(undefined1 *)(lVar3 + 0x1e9c) = 0;
  *(undefined4 *)(lVar3 + 0x1e98) = 0;
  return;
}



/* ===== 1803dd850 FUN_1803dd850 ===== */

void FUN_1803dd850(int param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = DAT_180ca0a50;
  uVar2 = *(uint *)(DAT_180ca0a50 + 0x1ef0);
  puVar1 = (uint *)(DAT_180ca0a50 + 0x1eec);
  *(uint *)(DAT_180ca0a50 + 0x1ef0) = uVar2 | 0x800;
  if ((*puVar1 & 0x10000) == 0) {
    *(uint *)(lVar3 + 0x1ef0) = uVar2 | 0x804;
    if ((*(int *)(lVar3 + 0x1578) == param_1) || (*(int *)(lVar3 + 0x1578) == 0)) {
      *(undefined2 *)(lVar3 + 0x158a) = 0x101;
      *(undefined1 *)(lVar3 + 0x1577) = 1;
    }
    if (*(int *)(lVar3 + 0x15ac) == param_1) {
      *(undefined1 *)(lVar3 + 0x15b4) = 1;
    }
  }
  return;
}



/* ===== 1803dd8c0 FUN_1803dd8c0 ===== */

undefined8 FUN_1803dd8c0(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_180ca0a50;
  if (((((*(longlong *)(DAT_180ca0a50 + 0x2068) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x2068) + 0x3c0), lVar1 != 0)) &&
       (*(char *)(lVar1 + 0xcd) != '\0')) &&
      (lVar2 = *(longlong *)(param_1 + 0x3c0), lVar1 != lVar2)) &&
     ((((*(uint *)(lVar1 + 0x14) >> 0x1b & 1) != 0 ||
       (((*(uint *)(lVar1 + 0x14) >> 0x1a & 1) != 0 && ((param_2 & 0x20) == 0)))) &&
      (*(longlong *)(lVar2 + 0x3c0) != lVar1)))) {
    while (lVar2 != lVar1) {
      lVar2 = *(longlong *)(lVar2 + 0x3b8);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



/* ===== 1803dd930 FUN_1803dd930 ===== */

ulonglong FUN_1803dd930(uint param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *in_RAX;
  uint uVar5;
  byte *pbVar6;
  longlong lVar7;
  float fVar8;
  undefined8 local_18;
  byte local_10 [8];
  
  lVar4 = DAT_180ca0a50;
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if ((param_1 & 0xfffc005f) != 0) {
    in_RAX = (byte *)FUN_1803ebc00("Invalid flags for IsItemHovered()!");
  }
  lVar7 = DAT_180ca0a50;
  if (((*(char *)(lVar4 + 0x2061) == '\0') || (*(char *)(lVar4 + 0x2060) == '\0')) ||
     ((param_1 >> 0xb & 1) != 0)) {
    if ((*(uint *)(lVar4 + 0x1ef0) & 1) == 0) goto LAB_1803ddbd8;
    if ((param_1 >> 0xc & 1) != 0) {
      uVar5 = *(uint *)(lVar4 + 0x11cc) & 0xfffe3fff;
      if ((param_1 & 0x1c000) == 0) {
        uVar5 = *(uint *)(lVar4 + 0x11cc);
      }
      param_1 = param_1 | uVar5;
    }
    if ((*(longlong *)(lVar4 + 0x1500) != lVar3) &&
       (in_RAX = (byte *)(ulonglong)(param_1 & 0x200),
       (*(uint *)(lVar4 + 0x1ef0) & 0x80) == 0 && (param_1 & 0x200) == 0)) goto LAB_1803ddbd8;
    uVar5 = *(uint *)(lVar4 + 0x1ee8);
    if (-1 < (char)param_1) {
      uVar2 = *(uint *)(lVar4 + 0x1578);
      in_RAX = (byte *)(ulonglong)uVar2;
      if ((((uVar2 != 0) && (uVar2 != uVar5)) &&
          ((*(char *)(lVar4 + 0x1587) == '\0' && (*(char *)(lVar4 + 0x158c) == '\0')))) &&
         ((uVar2 != *(uint *)(lVar3 + 0x8c) ||
          ((uVar5 != 0 && (*(uint *)(lVar4 + 0x1590) != uVar5)))))) goto LAB_1803ddbd8;
    }
    in_RAX = (byte *)FUN_1803dd8c0(lVar3,param_1);
    if (((char)in_RAX == '\0') && ((*(uint *)(lVar4 + 0x1eec) & 0x2000) == 0)) goto LAB_1803ddbd8;
    uVar2 = *(uint *)(lVar4 + 0x1eec);
    in_RAX = (byte *)(ulonglong)uVar2;
    if (((((uVar2 & 0x40) != 0) && ((param_1 >> 10 & 1) == 0)) ||
        ((uVar5 == *(uint *)(lVar3 + 0x8c) && (*(char *)(lVar3 + 0xce) != '\0')))) ||
       (((((uVar2 >> 0xe & 1) != 0 && (uVar5 != 0)) && ((param_1 >> 8 & 1) == 0)) &&
        (*(uint *)(lVar4 + 0x1564) != uVar5)))) goto LAB_1803ddbd8;
  }
  else {
    uVar5 = *(uint *)(DAT_180ca0a50 + 0x2064);
    in_RAX = (byte *)(ulonglong)uVar5;
    if (((uVar5 != *(uint *)(DAT_180ca0a50 + 0x1ee8)) || (uVar5 == 0)) ||
       (((*(byte *)(lVar4 + 0x1eec) & 0x40) != 0 && ((param_1 >> 10 & 1) == 0))))
    goto LAB_1803ddbd8;
    if ((param_1 >> 0xc & 1) != 0) {
      uVar5 = *(uint *)(lVar4 + 0x11d0) & 0xfffe3fff;
      if ((param_1 & 0x1c000) == 0) {
        uVar5 = *(uint *)(lVar4 + 0x11d0);
      }
      in_RAX = (byte *)(ulonglong)uVar5;
      param_1 = param_1 | uVar5;
    }
  }
  if ((param_1 >> 0x10 & 1) == 0) {
    if ((param_1 >> 0xf & 1) != 0) {
      fVar8 = *(float *)(lVar7 + 0x11c4);
      goto LAB_1803ddafb;
    }
    fVar8 = 0.0;
LAB_1803ddb08:
    if ((param_1 >> 0xd & 1) == 0) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  else {
    fVar8 = *(float *)(lVar7 + 0x11c8);
LAB_1803ddafb:
    if (fVar8 <= 0.0) goto LAB_1803ddb08;
  }
  uVar5 = *(uint *)(lVar4 + 0x1ee8);
  if (uVar5 == 0) {
    pbVar6 = (byte *)&local_18;
    local_18 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x1ef4) >> 0x20) -
                        (float)((ulonglong)*(undefined8 *)(lVar3 + 0x128) >> 0x20),
                        (float)*(undefined8 *)(lVar4 + 0x1ef4) -
                        (float)*(undefined8 *)(lVar3 + 0x128));
    uVar5 = ~*(uint *)(*(longlong *)(lVar3 + 0x110) + -4 + (longlong)*(int *)(lVar3 + 0x108) * 4);
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      in_RAX = local_10;
      uVar5 = uVar5 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)(uVar5 & 0xff) ^ (ulonglong)bVar1) * 4);
    } while (pbVar6 < in_RAX);
    uVar5 = ~uVar5;
  }
  if (((param_1 >> 0x11 & 1) != 0) && (*(uint *)(lVar4 + 0x24ec) != uVar5)) {
    *(undefined4 *)(lVar4 + 0x24f0) = 0;
  }
  *(uint *)(lVar4 + 0x24e8) = uVar5;
  if (((param_1 >> 0xd & 1) == 0) || (*(uint *)(lVar4 + 0x24f8) == uVar5)) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),
                    fVar8 < *(float *)(lVar4 + 0x24f0) || fVar8 == *(float *)(lVar4 + 0x24f0));
  }
LAB_1803ddbd8:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



/* ===== 1803ddbf0 FUN_1803ddbf0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1803ddbf0(undefined8 *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_res20;
  undefined8 local_48 [4];
  
  lVar3 = DAT_180ca0a50;
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  lVar8 = lVar3;
  if ((((param_2 != 0) && (*(int *)(DAT_180ca0a50 + 0x1564) == param_2)) && ((param_3 & 0x20) == 0))
     && (*(int *)(DAT_180ca0a50 + 0x1568) = *(int *)(DAT_180ca0a50 + 0x1568) + 1,
        *(int *)(lVar3 + 0x1558) == param_2)) {
    local_res20 = CONCAT44((float)((ulonglong)param_1[1] >> 0x20) + DAT_1808adc30._4_4_,
                           (float)param_1[1] + (float)DAT_1808adc30);
    local_48[0] = CONCAT44((float)((ulonglong)*param_1 >> 0x20) - DAT_1808adc30._4_4_,
                           (float)*param_1 - (float)DAT_1808adc30);
    FUN_1803fe480(*(undefined8 *)(lVar6 + 0x2c8),local_48,&local_res20,0xff0000ff,0,DAT_1808ac540,0)
    ;
    lVar8 = DAT_180ca0a50;
  }
  if (*(longlong *)(lVar3 + 0x1500) == lVar6) {
    uVar5 = 1;
    cVar4 = FUN_1803e9740(param_1,param_1 + 1);
    if (((cVar4 != '\0') &&
        (((*(int *)(lVar3 + 0x1560) == 0 || (*(int *)(lVar3 + 0x1560) == param_2)) ||
         (*(char *)(lVar3 + 0x1574) != '\0')))) &&
       (((*(int *)(lVar3 + 0x1578) == 0 || (*(int *)(lVar3 + 0x1578) == param_2)) ||
        ((*(char *)(lVar3 + 0x1587) != '\0' || (*(char *)(lVar3 + 0x158c) != '\0')))))) {
      if (((((((param_3 >> 0xd & 1) == 0) && (*(longlong *)(lVar8 + 0x2068) != 0)) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0x2068) + 0x3c0), lVar1 != 0)) &&
           ((*(char *)(lVar1 + 0xcd) != '\0' &&
            (lVar6 = *(longlong *)(lVar6 + 0x3c0), lVar1 != lVar6)))) &&
          (((*(uint *)(lVar1 + 0x14) >> 0x1b & 1) != 0 ||
           ((*(uint *)(lVar1 + 0x14) >> 0x1a & 1) != 0)))) &&
         (*(longlong *)(lVar6 + 0x3c0) != lVar1)) {
        do {
          if (lVar6 == lVar1) goto LAB_1803ddd6c;
          lVar6 = *(longlong *)(lVar6 + 0x3b8);
        } while (lVar6 != 0);
      }
      else {
LAB_1803ddd6c:
        if (param_2 != 0) {
          if (((*(char *)(lVar3 + 0x2290) != '\0') && (*(int *)(lVar3 + 0x22ac) == param_2)) &&
             ((*(byte *)(lVar3 + 0x2294) & 2) == 0)) {
            return false;
          }
          *(int *)(lVar8 + 0x1560) = param_2;
          *(undefined1 *)(lVar8 + 0x1574) = 0;
          if (*(int *)(lVar8 + 0x1564) != param_2) {
            *(undefined8 *)(lVar8 + 0x156c) = 0;
          }
          if (((param_3 >> 0xe & 1) != 0) &&
             (*(undefined1 *)(lVar3 + 0x1574) = uVar5, *(int *)(lVar3 + 0x1564) != param_2)) {
            return false;
          }
          if (((param_2 == *(int *)(lVar3 + 0x1ee8)) && ((*(uint *)(lVar3 + 0x1ef0) & 0x400) != 0))
             && (*(int *)(lVar3 + 0x1578) != param_2)) {
            cVar4 = FUN_1803dd930(0x11000);
            if (cVar4 != '\0') {
              uVar7 = FUN_1803e8c30(*(undefined4 *)(lVar3 + 0x1f34));
              FUN_1803ed810(&DAT_1806d3198,uVar7);
            }
            lVar8 = DAT_180ca0a50;
          }
        }
        if ((param_3 & 0x40) == 0) {
          if (param_2 != 0) {
            if ((*(char *)(lVar3 + 0x2931) != '\0') && (*(int *)(lVar3 + 0x1564) == param_2)) {
              uVar7 = FUN_1803ddf50(**(undefined8 **)(lVar8 + 0x2058),1,"##Foreground");
              FUN_1803fe480(uVar7,param_1,param_1 + 1,0xff00ffff,0,DAT_1808ac34c,0);
            }
            if (*(int *)(lVar3 + 0x2934) == param_2) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          if (*(char *)(lVar3 + 0x2061) == '\0') {
            return true;
          }
          return (param_3 >> 0xf & 1) != 0;
        }
        if ((*(int *)(lVar3 + 0x1578) == param_2) && (param_2 != 0)) {
          FUN_1803dd660(0,0);
        }
      }
      *(undefined1 *)(lVar3 + 0x1575) = 1;
    }
  }
  return false;
}



/* ===== 1803ddee0 FUN_1803ddee0 ===== */

void FUN_1803ddee0(int *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  short *psVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  
  lVar2 = (longlong)(short)param_1[2];
  if (param_1[lVar2 * 2 + 3] != param_2) {
    iVar4 = (short)param_1[2] + 1;
    sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
    *(short *)(param_1 + 2) = sVar3;
    lVar2 = (longlong)sVar3;
    param_1[lVar2 * 2 + 4] = 0;
    param_1[lVar2 * 2 + 3] = param_2;
  }
  if (param_4 == -1) {
    psVar1 = (short *)(lVar2 * 8 + 0x12 + (longlong)param_1);
    *psVar1 = *psVar1 + 1;
    param_1[1] = param_1[1] + 1;
    return;
  }
  *(short *)(param_1 + lVar2 * 2 + 4) = (short)param_1[lVar2 * 2 + 4] + 1;
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 1803ddf50 FUN_1803ddf50 ===== */

longlong FUN_1803ddf50(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 *local_res20;
  
  lVar5 = DAT_180ca0a50;
  lVar7 = *(longlong *)(param_1 + 0x40 + param_2 * 8);
  if (lVar7 == 0) {
    local_res10 = _malloc_base(0xe0);
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    local_res20 = local_res8;
    if (local_res10 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1803fb8f0(local_res10,lVar5 + 0x1218);
    }
    *(undefined8 *)(lVar7 + 0xd8) = param_3;
    *(longlong *)(param_1 + 0x40 + param_2 * 8) = lVar7;
  }
  if (*(int *)(param_1 + 0x50 + param_2 * 4) != *(int *)(lVar5 + 4)) {
    FUN_1803fbb30(lVar7);
    fVar2 = *(float *)(param_1 + 0x18);
    *(float *)(lVar7 + 0xd0) = DAT_1808ac34c / fVar2;
    *(float *)(lVar7 + 0xd4) = fVar2;
    uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + 0x28);
    uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + 0x30);
    iVar6 = *(int *)(lVar7 + 0xb4);
    if (*(int *)(lVar7 + 0xb0) == iVar6) {
      iVar8 = *(int *)(lVar7 + 0xb0) + 1;
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar8 < iVar6) {
        iVar8 = iVar6;
      }
      FUN_1803f7030(lVar7 + 0xb0,iVar8);
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar7 + 0xb8) + (longlong)*(int *)(lVar7 + 0xb0) * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(int *)(lVar7 + 0xb0) = *(int *)(lVar7 + 0xb0) + 1;
    *(undefined8 *)(lVar7 + 0x70) = uVar3;
    *(undefined8 *)(lVar7 + 0x78) = uVar4;
    FUN_1803fc0a0(lVar7);
    local_res10 = CONCAT44(*(float *)(param_1 + 0x14) + *(float *)(param_1 + 0xc),
                           *(float *)(param_1 + 0x10) + *(float *)(param_1 + 8));
    FUN_1803fc200(lVar7,(float *)(param_1 + 8),&local_res10,0);
    *(undefined4 *)(param_1 + 0x50 + param_2 * 4) = *(undefined4 *)(lVar5 + 4);
    *(float *)(param_1 + 0x58 + param_2 * 4) = (float)*(double *)(lVar5 + 0x10);
  }
  return lVar7;
}



/* ===== 1803de0f0 FUN_1803de0f0 ===== */

void FUN_1803de0f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_180ca0a50;
  FUN_1803ef030(param_1,0);
  FUN_1803dd660(*(undefined4 *)(param_1 + 0x8c),param_1);
  if (*(char *)(lVar2 + 0x76) != '\0') {
    *(undefined1 *)(lVar2 + 0x2060) = 0;
  }
  lVar3 = DAT_180ca0a50;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x3c0) + 0x28);
  *(undefined1 *)(lVar2 + 0x1588) = 1;
  *(ulonglong *)(lVar2 + 0x1594) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 0xaf0) >> 0x20) -
                (float)((ulonglong)uVar1 >> 0x20),
                (float)*(undefined8 *)(lVar2 + 0xaf0) - (float)uVar1);
  *(undefined4 *)(lVar3 + 0x1e98) = 0xf;
  *(undefined1 *)(lVar3 + 0x1e9c) = 1;
  *(bool *)(lVar3 + 0x20c9) = *(char *)(lVar3 + 0x20ca) != '\0';
  *(undefined2 *)(lVar3 + 0x2108) = 0;
  if (((*(byte *)(param_1 + 0x14) & 4) == 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x3c0) + 0x14) & 4) == 0)) {
    *(longlong *)(lVar2 + 0x1518) = param_1;
  }
  return;
}



/* ===== 1803de1b0 FUN_1803de1b0 ===== */

void FUN_1803de1b0(void)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar8 = DAT_180ca0a50;
  if (*(int *)(DAT_180ca0a50 + 0x1578) != 0) {
    return;
  }
  piVar1 = (int *)(DAT_180ca0a50 + 0x1560);
  if ((*piVar1 != 0) && (*(char *)(DAT_180ca0a50 + 0x1575) == '\0')) {
    return;
  }
  lVar12 = *(longlong *)(DAT_180ca0a50 + 0x2068);
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0xd3) != '\0')) {
    return;
  }
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x1500);
  cVar5 = FUN_1803e9690(0,0,0xffffffff);
  lVar10 = lVar8;
  if (cVar5 != '\0') {
    if (lVar2 == 0) {
      lVar11 = 0;
LAB_1803de282:
      bVar3 = false;
    }
    else {
      lVar11 = *(longlong *)(lVar2 + 0x3c0);
      if ((lVar11 == 0) || ((*(uint *)(lVar11 + 0x14) & 0x4000000) == 0)) goto LAB_1803de282;
      if (0 < *(int *)(lVar8 + 0x2020)) {
        uVar7 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar8 + 0x2028) + uVar7 * 0x58) == *(int *)(lVar11 + 0x94)) &&
             (*(char *)(*(longlong *)(lVar8 + 0x2028) + 0x34 + uVar7 * 0x58) == '\0'))
          goto LAB_1803de282;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < *(int *)(lVar8 + 0x2020));
      }
      bVar3 = true;
    }
    if ((*(char *)(lVar8 + 0x2108) == '\0') || ((*(uint *)(lVar8 + 0x210c) & 0x200) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (lVar2 == 0) {
      if (lVar12 != 0) {
        FUN_1803ef030(0,2);
        lVar10 = DAT_180ca0a50;
      }
    }
    else if (!bVar3 && !bVar4) {
      FUN_1803de0f0(lVar2);
      if (((*(byte *)(lVar2 + 0xf0) & 1) == 0) && ((*(byte *)(lVar11 + 0x14) & 1) == 0)) {
        if ((*(float *)(lVar8 + 0xaf0) < *(float *)(lVar11 + 0x28)) ||
           (((*(float *)(lVar8 + 0xaf4) < *(float *)(lVar11 + 0x2c) ||
             (*(float *)(lVar11 + 0x28) + *(float *)(lVar11 + 0x38) <= *(float *)(lVar8 + 0xaf0)))
            || (*(float *)(lVar11 + 0x2c) + *(float *)(lVar11 + 0x68) <= *(float *)(lVar8 + 0xaf4)))
           )) {
          *(undefined8 *)(lVar8 + 0x1518) = 0;
        }
      }
      lVar10 = DAT_180ca0a50;
      if (*(char *)(lVar8 + 0x1575) != '\0') {
        *(int *)(lVar8 + 0x1590) = *piVar1;
        *(undefined8 *)(lVar8 + 0x1518) = 0;
        lVar10 = DAT_180ca0a50;
      }
    }
  }
  if (*piVar1 != 0) {
    return;
  }
  uVar6 = 1;
  cVar5 = FUN_1803e9690(1,0,0xffffffff);
  if (cVar5 == '\0') {
    return;
  }
  uVar9 = *(int *)(lVar10 + 0x2020) - uVar6;
  uVar7 = (ulonglong)uVar9;
  if (-1 < (int)uVar9) {
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar10 + 0x2028) + 8 + uVar7 * 0x58);
      if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x14) & 0x8000000) != 0)) goto LAB_1803de3b0;
      uVar9 = (int)uVar7 - uVar6;
      uVar7 = (ulonglong)uVar9;
    } while (-1 < (int)uVar9);
  }
  lVar8 = 0;
LAB_1803de3b0:
  if (lVar2 != 0) {
    if (lVar8 == 0) goto LAB_1803de406;
    uVar9 = (*(uint *)(lVar2 + 0x14) >> 0x19 & uVar6) - (*(uint *)(lVar8 + 0x14) >> 0x19 & uVar6);
    uVar7 = (ulonglong)uVar9;
    if (uVar9 == 0) {
      uVar9 = *(int *)(lVar10 + 0x1498) - uVar6;
      uVar7 = (ulonglong)uVar9;
      if (-1 < (int)uVar9) {
        do {
          lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x14a0) + uVar7 * 8);
          if (lVar12 == lVar2) goto LAB_1803de406;
        } while ((lVar12 != lVar8) &&
                (uVar9 = (int)uVar7 - uVar6, uVar7 = (ulonglong)uVar9, -1 < (int)uVar9));
      }
    }
    else if (0 < (int)uVar9) goto LAB_1803de406;
  }
  uVar6 = 0;
LAB_1803de406:
  if (uVar6 != 0) {
    lVar8 = lVar2;
  }
  FUN_1803edf20(lVar8,CONCAT71((int7)(uVar7 >> 8),1));
  return;
}



