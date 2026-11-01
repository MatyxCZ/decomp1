/* ===== 18051142c FUN_18051142c ===== */

undefined8 FUN_18051142c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  uVar1 = FUN_18051117c();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 1805114d0 fgetpos ===== */

/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    iVar1 = -1;
  }
  else {
    lVar3 = FUN_180518f40();
    *_Pos = lVar3;
    iVar1 = (lVar3 != -1) - 1;
  }
  return iVar1;
}



/* ===== 18051151c operator()<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
   __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
   <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
   <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
   __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
   <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
   <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
   <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
     36 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4
operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  FUN_1805110a4(*param_2);
  uVar1 = FUN_18051155c(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 18051155c FUN_18051155c ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18051155c(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  uVar1 = *(ulonglong *)*param_1;
  FUN_180510248(*(undefined8 *)param_1[1],param_1[2]);
  __acrt_stdio_free_buffer_nolock(*(undefined8 *)param_1[1]);
  LOCK();
  *(uint *)(*(longlong *)param_1[1] + 0x14) = *(uint *)(*(longlong *)param_1[1] + 0x14) & 0xfffff81f
  ;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    lVar2 = *(longlong *)param_1[4];
    uVar4 = (undefined4)(uVar1 & 0xfffffffffffffffe);
    if (lVar2 == 0) {
      lVar2 = _calloc_base(uVar1 & 0xfffffffffffffffe,1);
      FUN_1805277b0(0);
      if (lVar2 == 0) {
        _DAT_180c9f558 = _DAT_180c9f558 + 1;
        return 0xffffffff;
      }
      plVar3 = *(longlong **)param_1[1];
      LOCK();
      *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x140;
      UNLOCK();
      *(undefined4 *)(plVar3 + 4) = uVar4;
      *plVar3 = lVar2;
      plVar3[1] = lVar2;
      goto LAB_18051162d;
    }
    plVar3 = *(longlong **)param_1[1];
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x180;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = uVar4;
  }
  else {
    plVar3 = *(longlong **)param_1[1];
    lVar2 = (longlong)plVar3 + 0x1c;
    LOCK();
    *(uint *)((longlong)plVar3 + 0x14) = *(uint *)((longlong)plVar3 + 0x14) | 0x400;
    UNLOCK();
    *(undefined4 *)(plVar3 + 4) = 2;
  }
  *plVar3 = lVar2;
  plVar3[1] = lVar2;
LAB_18051162d:
  *(undefined4 *)(plVar3 + 2) = 0;
  return 0;
}



/* ===== 180511644 FUN_180511644 ===== */

undefined4 FUN_180511644(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int local_res8 [2];
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_98 [2];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined4 local_6c;
  char local_68;
  undefined4 local_64;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  int *local_28;
  undefined8 *local_20;
  
  local_98[0] = 0;
  local_70 = DAT_180c9f7dc == 0;
  local_88 = 0;
  local_68 = '\0';
  local_60 = '\0';
  if ((bool)local_70) {
    local_80 = PTR_PTR_1809198b8._0_4_;
    uStack_7c = PTR_PTR_1809198b8._4_4_;
    uStack_78 = PTR_DAT_1809198c0._0_4_;
    uStack_74 = PTR_DAT_1809198c0._4_4_;
  }
  local_res8[0] = param_3;
  local_res10 = param_4;
  local_res20 = param_1;
  local_58 = param_2;
  if ((param_1 == 0) ||
     ((param_3 != 4 && (((param_3 != 0 && (param_3 != 0x40)) || (0x7ffffffd < param_4 - 2U)))))) {
    local_68 = '\x01';
    local_6c = 0x16;
    FUN_180527688(0,0,0,0,0,local_98);
    uVar2 = 0xffffffff;
  }
  else {
    local_40 = &local_res10;
    local_38 = &local_res20;
    local_30 = local_98;
    local_28 = local_res8;
    local_20 = &local_58;
    local_50 = param_1;
    local_48 = param_1;
    uVar2 = operator()<>(local_res18,&local_48,&local_40,&local_50);
  }
  uVar1 = local_6c;
  if (local_70 == '\x02') {
    *(uint *)(local_98[0] + 0x3a8) = *(uint *)(local_98[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_68 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_60 != '\0') {
    lVar3 = FUN_1804f84e0(local_98);
    *(undefined4 *)(lVar3 + 0x24) = local_64;
  }
  return uVar2;
}



/* ===== 180511780 FUN_180511780 ===== */

undefined8 FUN_180511780(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
  }
  return 0x7fffffff;
}



/* ===== 1805117b0 FUN_1805117b0 ===== */

void FUN_1805117b0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_180c9f7dc != 0) {
    FUN_180511820(param_1,param_2,0);
    return;
  }
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    FUN_180511780();
    return;
  }
  while( true ) {
    bVar1 = *param_1;
    uVar3 = (uint)bVar1;
    param_1 = param_1 + 1;
    bVar2 = *param_2;
    uVar4 = (uint)bVar2;
    param_2 = param_2 + 1;
    if ((uint)bVar1 != (uint)bVar2) {
      uVar3 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar3 = (uint)bVar1;
      }
      if (bVar2 - 0x41 < 0x1a) {
        uVar4 = bVar2 + 0x20;
      }
    }
    if (uVar3 != uVar4) break;
    if (uVar3 == 0) {
      return;
    }
  }
  return;
}



/* ===== 180511820 FUN_180511820 ===== */

int FUN_180511820(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong local_28;
  undefined *local_20;
  undefined8 uStack_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    return 0x7fffffff;
  }
  local_10 = '\0';
  if (param_3 == (undefined8 *)0x0) {
    if (DAT_180c9f7dc == 0) {
      local_20 = PTR_PTR_1809198b8;
      local_10 = '\0';
    }
    else {
      local_28 = FUN_180529860();
      local_20 = *(undefined **)(local_28 + 0x90);
      uStack_18 = *(undefined8 *)(local_28 + 0x88);
      __acrt_update_locale_info(local_28,&local_20);
      FUN_1805278dc(local_28,&uStack_18);
      if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = (undefined *)*param_3;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if (iVar2 != 0) break;
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}



/* ===== 180511940 thunk_FUN_1805277b0 ===== */

void thunk_FUN_1805277b0(LPVOID param_1)

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



/* ===== 180511948 FUN_180511948 ===== */

uint FUN_180511948(uint param_1,FILE *param_2)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
    uVar4 = _fileno(param_2);
    puVar6 = &DAT_1809198d0;
    if (uVar4 + 2 < 2) {
      puVar7 = &DAT_1809198d0;
    }
    else {
      puVar7 = (undefined *)
               ((&DAT_180c9f990)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
    }
    if (puVar7[0x39] == '\0') {
      if (1 < uVar4 + 2) {
        puVar6 = (undefined *)
                 ((&DAT_180c9f990)[(longlong)(int)uVar4 >> 6] + (ulonglong)(uVar4 & 0x3f) * 0x48);
      }
      if ((puVar6[0x3d] & 1) == 0) goto LAB_1805119f4;
    }
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = 0x16;
    FUN_180527740();
  }
  else {
LAB_1805119f4:
    if ((param_1 != 0xffffffff) &&
       ((((ulonglong)param_2->_base & 0x100000000) != 0 ||
        (((byte)*(undefined4 *)((longlong)&param_2->_base + 4) & 6) == 6)))) {
      if (*(longlong *)&param_2->_cnt == 0) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if (param_2->_ptr == *(char **)&param_2->_cnt) {
        if (*(int *)&param_2->_base != 0) {
          return 0xffffffff;
        }
        param_2->_ptr = param_2->_ptr + 1;
      }
      uVar4 = *(uint *)((longlong)&param_2->_base + 4);
      pcVar3 = param_2->_ptr;
      pcVar1 = pcVar3 + -1;
      param_2->_ptr = pcVar1;
      if ((uVar4 >> 0xc & 1) == 0) {
        *pcVar1 = (char)param_1;
      }
      else if (*pcVar1 != (char)param_1) {
        param_2->_ptr = pcVar3;
        return 0xffffffff;
      }
      *(int *)&param_2->_base = *(int *)&param_2->_base + 1;
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 & 0xfffffff7;
      UNLOCK();
      LOCK();
      puVar2 = (uint *)((longlong)&param_2->_base + 4);
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      return param_1 & 0xff;
    }
  }
  return 0xffffffff;
}



/* ===== 180511a68 ungetc ===== */

/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    iVar1 = -1;
  }
  else {
    FUN_1805110a4(_File);
    iVar1 = FUN_180511948(_Ch,_File);
    FUN_1805110b0(_File);
  }
  return iVar1;
}



/* ===== 180511ac0 fsetpos ===== */

/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    return -1;
  }
  iVar1 = FUN_1805120b0(_File,*_Pos,0);
  return iVar1;
}



/* ===== 180511af8 FUN_180511af8 ===== */

ulonglong FUN_180511af8(undefined1 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                       FILE *param_5)

{
  uint *puVar1;
  FILE *_File;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  _File = param_5;
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (param_1 == (undefined1 *)0x0) {
LAB_180511b31:
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
  }
  else {
    if ((param_5 == (FILE *)0x0) || (0xffffffffffffffff / param_3 < param_4)) {
      if (param_2 != 0xffffffffffffffff) {
        FUN_180540170(param_1,0,param_2);
      }
      if ((param_5 == (FILE *)0x0) || (0xffffffffffffffff / param_3 < param_4)) goto LAB_180511b31;
    }
    if (((ulonglong)param_5->_base & 0x4c000000000) == 0) {
      uVar4 = 0x1000;
    }
    else {
      uVar4 = (ulonglong)(uint)param_5->_charbuf;
    }
    param_5._0_4_ = (uint)uVar4;
    uVar6 = param_3 * param_4;
    uVar5 = param_2;
    puVar7 = param_1;
    while( true ) {
      if (uVar6 == 0) {
        return param_4;
      }
      if (((ulonglong)_File->_base & 0x4c000000000) == 0) break;
      uVar8 = *(uint *)&_File->_base;
      if (uVar8 == 0) break;
      if ((int)uVar8 < 0) {
LAB_180511d46:
        LOCK();
        puVar1 = (uint *)((longlong)&_File->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
LAB_180511d52:
        return (param_3 * param_4 - uVar6) / param_3;
      }
      if (uVar6 < (ulonglong)(longlong)(int)uVar8) {
        uVar8 = (uint)uVar6;
      }
      if (uVar5 < uVar8) goto LAB_180511d23;
      if (uVar8 != 0) {
        if (puVar7 != (undefined1 *)0x0) {
          if (_File->_ptr != (char *)0x0) {
            FUN_180540530(puVar7);
            goto LAB_180511c48;
          }
          FUN_180540170(puVar7,0,uVar5);
        }
        puVar3 = (undefined4 *)FUN_18051bfb0();
        *puVar3 = 0x16;
        FUN_180527740();
      }
LAB_180511c48:
      *(uint *)&_File->_base = *(int *)&_File->_base - uVar8;
      uVar4 = (ulonglong)uVar8;
      _File->_ptr = _File->_ptr + uVar8;
LAB_180511c61:
      uVar6 = uVar6 - uVar4;
      puVar7 = puVar7 + uVar4;
      uVar5 = uVar5 - uVar4;
LAB_180511d08:
      uVar4 = (ulonglong)(uint)param_5;
    }
    if (uVar6 < uVar4) {
      iVar2 = FUN_18052c1b4(_File);
      if (iVar2 == -1) goto LAB_180511d52;
      if (uVar5 != 0) {
        *puVar7 = (char)iVar2;
        uVar6 = uVar6 - 1;
        param_5._0_4_ = _File->_charbuf;
        puVar7 = puVar7 + 1;
        uVar5 = uVar5 - 1;
        goto LAB_180511d08;
      }
    }
    else {
      uVar9 = uVar6 & 0xffffffff;
      if (0x7fffffff < uVar6) {
        uVar9 = 0x7fffffff;
      }
      if ((int)uVar4 != 0) {
        uVar9 = (ulonglong)(uint)((int)uVar9 - (int)(uVar9 % uVar4));
      }
      if (uVar9 <= uVar5) {
        *(undefined4 *)&_File->_base = 0;
        _File->_ptr = *(char **)&_File->_cnt;
        iVar2 = _fileno(_File);
        iVar2 = FUN_18052d764(iVar2,puVar7,uVar9);
        if (iVar2 == 0) {
          LOCK();
          puVar1 = (uint *)((longlong)&_File->_base + 4);
          *puVar1 = *puVar1 | 8;
          UNLOCK();
          goto LAB_180511d52;
        }
        if (-1 < iVar2) {
          uVar4 = (ulonglong)iVar2;
          goto LAB_180511c61;
        }
        goto LAB_180511d46;
      }
    }
LAB_180511d23:
    if (param_2 != 0xffffffffffffffff) {
      FUN_180540170(param_1,0,param_2);
    }
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x22;
  }
  FUN_180527740();
  return 0;
}



/* ===== 180511d64 fread ===== */

/* Library Function - Single Match
    fread
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
  sVar1 = fread_s(_DstBuf,0xffffffffffffffff,_ElementSize,_Count,_File);
  return sVar1;
}



/* ===== 180511d84 fread_s ===== */

/* Library Function - Single Match
    fread_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File)

{
  undefined4 *puVar1;
  size_t sVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_1805110a4(_File);
      sVar2 = FUN_180511af8(_DstBuf,_DstSize,_ElementSize,_Count,_File);
      FUN_1805110b0(_File);
      return sVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_180540170(_DstBuf,0,_DstSize);
    }
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
  }
  return 0;
}



/* ===== 180511e2c FUN_180511e2c ===== */

undefined4 FUN_180511e2c(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (2 < param_3)) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_4);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_1805110a4();
    uVar1 = FUN_180511fc4(param_1,param_2,param_3,param_4);
    FUN_1805110b0(param_1);
  }
  return uVar1;
}



/* ===== 180511ec8 FUN_180511ec8 ===== */

ulonglong FUN_180511ec8(longlong *param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  
  if ((((param_3 != 2) &&
       (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
       (*(uint *)((longlong)param_1 + 0x14) & 0x4c0) != 0)) &&
      (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
      (*(uint *)((longlong)param_1 + 0x14) & 6) == 0)) && (0 < (int)param_1[2])) {
    uVar1 = *(uint *)(param_1 + 3);
    in_RAX = (longlong)(int)uVar1 >> 6;
    if ((-1 < *(char *)((&DAT_180c9f990)[in_RAX] + 0x38 + (ulonglong)(uVar1 & 0x3f) * 0x48)) &&
       (*(char *)((&DAT_180c9f990)[in_RAX] + 0x39 + (ulonglong)(uVar1 & 0x3f) * 0x48) == '\0')) {
      if (param_3 == 0) {
        in_RAX = FUN_18052de38(uVar1,0,1);
        if ((longlong)in_RAX < 0) goto LAB_180511fb0;
        lVar3 = in_RAX - (longlong)(int)param_1[2];
        in_RAX = param_2 - lVar3;
        iVar2 = (int)((longlong)param_2 >> 0x3f);
        if ((-iVar2 != -(int)(lVar3 >> 0x3f)) && (-(uint)(0x7fffffffffffffff < in_RAX) != iVar2))
        goto LAB_180511fb0;
        param_2 = in_RAX;
      }
      if ((param_1[1] - *param_1 <= (longlong)param_2) &&
         ((longlong)param_2 <= (longlong)(int)param_1[2])) {
        *param_1 = *param_1 + param_2;
        *(int *)(param_1 + 2) = (int)param_1[2] - (int)param_2;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_180511fb0:
  return in_RAX & 0xffffffffffffff00;
}



/* ===== 180511fc4 FUN_180511fc4 ===== */

int FUN_180511fc4(undefined8 *param_1,longlong param_2,int param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) == 0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    iVar2 = -1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffff7;
    UNLOCK();
    cVar1 = FUN_180511ec8();
    if (cVar1 == '\0') {
      if (param_3 == 1) {
        lVar3 = thunk_FUN_180518ab4(param_1,param_4);
        param_2 = param_2 + lVar3;
        param_3 = 0;
      }
      FUN_180510248(param_1,param_4);
      *param_1 = param_1[1];
      *(undefined4 *)(param_1 + 2) = 0;
      if ((*(uint *)((longlong)param_1 + 0x14) >> 2 & 1) == 0) {
        if ((((byte)*(undefined4 *)((longlong)param_1 + 0x14) & 0x41) == 0x41) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(undefined4 *)(param_1 + 4) = 0x200;
        }
      }
      else {
        LOCK();
        *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffffc;
        UNLOCK();
      }
      lVar3 = thunk_FUN_18052dce4(*(undefined4 *)(param_1 + 3),param_2,param_3,param_4);
      iVar2 = (lVar3 != -1) - 1;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== 1805120b0 FUN_1805120b0 ===== */

undefined4 FUN_1805120b0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  uVar1 = FUN_180511e2c();
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 180512148 FUN_180512148 ===== */

undefined4 FUN_180512148(undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
    param_1 = PTR_PTR_1809198b8._0_4_;
  }
  uVar1 = FUN_180511e2c(param_1,(longlong)param_2,param_3,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 1805121e4 FUN_1805121e4 ===== */

/* WARNING: Removing unreachable block (ram,0x0001805122d6) */
/* WARNING: Removing unreachable block (ram,0x0001805122e6) */
/* WARNING: Removing unreachable block (ram,0x000180512302) */
/* WARNING: Removing unreachable block (ram,0x000180512329) */
/* WARNING: Removing unreachable block (ram,0x000180512335) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1805121e4(tm *param_1,__int64 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_28 [2];
  
  uVar3 = _UNK_1808adf98;
  uVar1 = _DAT_1808adf90;
  if (param_1 != (tm *)0x0) {
    uVar2 = _UNK_1808adf94;
    param_1->tm_sec = _DAT_1808adf90;
    uVar4 = _UNK_1808adf98;
    param_1->tm_min = uVar2;
    _UNK_1808adf98 = (undefined4)uVar3;
    _UNK_1808adf9c = SUB84(uVar3,4);
    uVar2 = _UNK_1808adf9c;
    param_1->tm_hour = _UNK_1808adf98;
    _UNK_1808adf98 = uVar4;
    uVar4 = _DAT_1808adf90;
    param_1->tm_mday = uVar2;
    _DAT_1808adf90 = (undefined4)uVar1;
    _UNK_1808adf94 = SUB84(uVar1,4);
    uVar2 = _UNK_1808adf94;
    param_1->tm_mon = _DAT_1808adf90;
    _DAT_1808adf90 = uVar4;
    uVar4 = _UNK_1808adf98;
    param_1->tm_year = uVar2;
    _UNK_1808adf98 = (undefined4)uVar3;
    _UNK_1808adf9c = SUB84(uVar3,4);
    uVar2 = _UNK_1808adf9c;
    param_1->tm_wday = _UNK_1808adf98;
    _UNK_1808adf98 = uVar4;
    param_1->tm_yday = uVar2;
    param_1->tm_isdst = (int)uVar1;
    if (param_2 != (__int64 *)0x0) {
      if ((*param_2 < 0) || (0x793582aff < *param_2)) {
        puVar6 = (undefined4 *)FUN_18051bfb0();
        *puVar6 = 0x16;
        return 0x16;
      }
      __tzset();
      iVar5 = FUN_18052df54();
      if ((iVar5 != 0) ||
         ((iVar5 = FUN_18052df84(), iVar5 != 0 || (iVar5 = FUN_18052dfb4(), iVar5 != 0)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      local_28[0] = *param_2;
      if (local_28[0] - 0x3f481U < 0x7935041fe) {
        iVar5 = common_gmtime_s<__int64>(param_1,local_28);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      else {
        iVar5 = common_gmtime_s<__int64>(param_1,param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        lVar9 = (longlong)param_1->tm_sec;
        lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8) + lVar9;
        iVar5 = param_1->tm_sec + ((int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f)) * -0x3c;
        param_1->tm_sec = iVar5;
        if (iVar5 < 0) {
          lVar9 = lVar9 + -0x3c;
          param_1->tm_sec = iVar5 + 0x3c;
        }
        lVar9 = lVar9 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8);
        lVar9 = ((lVar9 >> 5) - (lVar9 >> 0x3f)) + (longlong)param_1->tm_min;
        lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8) + lVar9;
        iVar5 = (int)lVar9 + ((int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f)) * -0x3c;
        param_1->tm_min = iVar5;
        if (iVar5 < 0) {
          lVar9 = lVar9 + -0x3c;
          param_1->tm_min = iVar5 + 0x3c;
        }
        lVar9 = lVar9 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8);
        lVar9 = ((lVar9 >> 5) - (lVar9 >> 0x3f)) + (longlong)param_1->tm_hour;
        iVar5 = (int)lVar9 + (int)(lVar9 / 0x18) * -0x18;
        param_1->tm_hour = iVar5;
        if (iVar5 < 0) {
          lVar9 = lVar9 + -0x18;
          param_1->tm_hour = iVar5 + 0x18;
        }
        lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
        lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
        iVar5 = (int)lVar9;
        if (lVar9 < 1) {
          if (lVar9 < 0) {
            iVar7 = param_1->tm_mday + iVar5;
            param_1->tm_mday = iVar7;
            param_1->tm_wday = (param_1->tm_wday + 7 + iVar5) % 7;
            iVar5 = param_1->tm_yday + iVar5;
            if (iVar7 < 1) {
              param_1->tm_year = param_1->tm_year + -1;
              param_1->tm_mday = iVar7 + 0x1f;
              param_1->tm_yday = iVar5 + 0x16d;
              param_1->tm_mon = 0xb;
            }
            else {
              param_1->tm_yday = iVar5;
            }
          }
        }
        else {
          param_1->tm_mday = param_1->tm_mday + iVar5;
          param_1->tm_yday = param_1->tm_yday + iVar5;
          param_1->tm_wday = (param_1->tm_wday + iVar5) % 7;
        }
      }
      return 0;
    }
  }
  puVar6 = (undefined4 *)FUN_18051bfb0();
  *puVar6 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 1805124e4 thunk_FUN_1805121e4 ===== */

/* WARNING: Removing unreachable block (ram,0x0001805122d6) */
/* WARNING: Removing unreachable block (ram,0x0001805122e6) */
/* WARNING: Removing unreachable block (ram,0x000180512302) */
/* WARNING: Removing unreachable block (ram,0x000180512329) */
/* WARNING: Removing unreachable block (ram,0x000180512335) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_1805121e4(tm *param_1,__int64 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong alStack_28 [2];
  
  uVar3 = _UNK_1808adf98;
  uVar1 = _DAT_1808adf90;
  if (param_1 != (tm *)0x0) {
    uVar2 = _UNK_1808adf94;
    param_1->tm_sec = _DAT_1808adf90;
    uVar4 = _UNK_1808adf98;
    param_1->tm_min = uVar2;
    _UNK_1808adf98 = (undefined4)uVar3;
    _UNK_1808adf9c = SUB84(uVar3,4);
    uVar2 = _UNK_1808adf9c;
    param_1->tm_hour = _UNK_1808adf98;
    _UNK_1808adf98 = uVar4;
    uVar4 = _DAT_1808adf90;
    param_1->tm_mday = uVar2;
    _DAT_1808adf90 = (undefined4)uVar1;
    _UNK_1808adf94 = SUB84(uVar1,4);
    uVar2 = _UNK_1808adf94;
    param_1->tm_mon = _DAT_1808adf90;
    _DAT_1808adf90 = uVar4;
    uVar4 = _UNK_1808adf98;
    param_1->tm_year = uVar2;
    _UNK_1808adf98 = (undefined4)uVar3;
    _UNK_1808adf9c = SUB84(uVar3,4);
    uVar2 = _UNK_1808adf9c;
    param_1->tm_wday = _UNK_1808adf98;
    _UNK_1808adf98 = uVar4;
    param_1->tm_yday = uVar2;
    param_1->tm_isdst = (int)uVar1;
    if (param_2 != (__int64 *)0x0) {
      if ((*param_2 < 0) || (0x793582aff < *param_2)) {
        puVar6 = (undefined4 *)FUN_18051bfb0();
        *puVar6 = 0x16;
        return 0x16;
      }
      __tzset();
      iVar5 = FUN_18052df54();
      if ((iVar5 != 0) ||
         ((iVar5 = FUN_18052df84(), iVar5 != 0 || (iVar5 = FUN_18052dfb4(), iVar5 != 0)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      alStack_28[0] = *param_2;
      if (alStack_28[0] - 0x3f481U < 0x7935041fe) {
        iVar5 = common_gmtime_s<__int64>(param_1,alStack_28);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      else {
        iVar5 = common_gmtime_s<__int64>(param_1,param_2);
        if (iVar5 != 0) {
          return iVar5;
        }
        lVar9 = (longlong)param_1->tm_sec;
        lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8) + lVar9;
        iVar5 = param_1->tm_sec + ((int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f)) * -0x3c;
        param_1->tm_sec = iVar5;
        if (iVar5 < 0) {
          lVar9 = lVar9 + -0x3c;
          param_1->tm_sec = iVar5 + 0x3c;
        }
        lVar9 = lVar9 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8);
        lVar9 = ((lVar9 >> 5) - (lVar9 >> 0x3f)) + (longlong)param_1->tm_min;
        lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8) + lVar9;
        iVar5 = (int)lVar9 + ((int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f)) * -0x3c;
        param_1->tm_min = iVar5;
        if (iVar5 < 0) {
          lVar9 = lVar9 + -0x3c;
          param_1->tm_min = iVar5 + 0x3c;
        }
        lVar9 = lVar9 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8);
        lVar9 = ((lVar9 >> 5) - (lVar9 >> 0x3f)) + (longlong)param_1->tm_hour;
        iVar5 = (int)lVar9 + (int)(lVar9 / 0x18) * -0x18;
        param_1->tm_hour = iVar5;
        if (iVar5 < 0) {
          lVar9 = lVar9 + -0x18;
          param_1->tm_hour = iVar5 + 0x18;
        }
        lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
        lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
        iVar5 = (int)lVar9;
        if (lVar9 < 1) {
          if (lVar9 < 0) {
            iVar7 = param_1->tm_mday + iVar5;
            param_1->tm_mday = iVar7;
            param_1->tm_wday = (param_1->tm_wday + 7 + iVar5) % 7;
            iVar5 = param_1->tm_yday + iVar5;
            if (iVar7 < 1) {
              param_1->tm_year = param_1->tm_year + -1;
              param_1->tm_mday = iVar7 + 0x1f;
              param_1->tm_yday = iVar5 + 0x16d;
              param_1->tm_mon = 0xb;
            }
            else {
              param_1->tm_yday = iVar5;
            }
          }
        }
        else {
          param_1->tm_mday = param_1->tm_mday + iVar5;
          param_1->tm_yday = param_1->tm_yday + iVar5;
          param_1->tm_wday = (param_1->tm_wday + iVar5) % 7;
        }
      }
      return 0;
    }
  }
  puVar6 = (undefined4 *)FUN_18051bfb0();
  *puVar6 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 1805124f0 FUN_1805124f0 ===== */

undefined4 FUN_1805124f0(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_180512549;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_180512549;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      puVar2 = (undefined4 *)FUN_18051bfb0();
      *puVar2 = 0x22;
      FUN_180527740();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_180512549:
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 18051261c FUN_18051261c ===== */

uint FUN_18051261c(char *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_1 == (char *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_1805277b0(*(undefined8 *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_18052ee60(param_4,9,param_1,0xffffffff,0,0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_1805277b0(*(undefined8 *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          lVar3 = _malloc_base(uVar7 * 2);
          *(longlong *)(param_2 + 0x10) = lVar3;
          uVar6 = -(ulonglong)(lVar3 != 0) & uVar7;
          uVar5 = ~-(uint)(lVar3 != 0) & 0xc;
          if (lVar3 != 0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = lVar3 != 0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_18052ee60(param_4,9,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                              (int)uVar6);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18051bf40(DVar2);
      puVar4 = (uint *)FUN_18051bfb0();
      return *puVar4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_1805277b0(*(undefined8 *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      lVar3 = _malloc_base(2);
      *(longlong *)(param_2 + 0x10) = lVar3;
      uVar5 = ~-(uint)(lVar3 != 0) & 0xc;
      bVar8 = lVar3 != 0;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== 1805127bc FUN_1805127bc ===== */

undefined4 FUN_1805127bc(short *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 *puVar3;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_18052eef0(param_4,0,param_1,0xffffffff,0,0,0,0);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_180512810;
        }
        iVar1 = FUN_18052eef0(param_4,0,param_1,0xffffffff,*(undefined8 *)(param_2 + 0x10),
                              (int)*(ulonglong *)(param_2 + 0x18),0,0);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_18051bf40(DVar2);
      puVar3 = (undefined4 *)FUN_18051bfb0();
      return *puVar3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_180512810:
      puVar3 = (undefined4 *)FUN_18051bfb0();
      *puVar3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== 1805128d8 FUN_1805128d8 ===== */

undefined8
FUN_1805128d8(undefined1 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,__crt_locale_pointers *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  longlong local_a8;
  longlong local_a0;
  char local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  char local_60;
  undefined1 *local_58;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_a8,param_6);
  uVar1 = *(undefined4 *)(local_a0 + 0x18);
  if ((((param_1 == (undefined1 *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == 0)) ||
     (param_4 == 0)) {
    puVar3 = (undefined4 *)FUN_18051bfb0();
    *puVar3 = 0x16;
    FUN_180527740();
    uVar6 = 0;
  }
  else {
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = '\0';
    iVar2 = FUN_18051261c(param_3,&local_88,local_res8,uVar1);
    if (iVar2 == 0) {
      lVar4 = _malloc_base(param_2 * 2);
      if ((lVar4 == 0) ||
         (lVar5 = FUN_180523b1c(lVar4,param_2,local_78,param_4,param_5,param_6), lVar5 == 0)) {
        uVar6 = 0;
      }
      else {
        local_38 = 0;
        local_30 = 0;
        local_58 = param_1;
        local_50 = param_2;
        local_48 = param_1;
        local_40 = param_2;
        iVar2 = FUN_1805127bc(lVar4,&local_58,local_res8,uVar1);
        uVar6 = local_38;
        if (iVar2 != 0) {
          uVar6 = 0;
        }
      }
      FUN_1805277b0(lVar4);
    }
    else {
      uVar6 = 0;
    }
    if (local_60 != '\0') {
      FUN_1805277b0(local_78);
    }
  }
  if (local_90 != '\0') {
    *(uint *)(local_a8 + 0x3a8) = *(uint *)(local_a8 + 0x3a8) & 0xfffffffd;
  }
  return uVar6;
}



/* ===== 180512a44 FUN_180512a44 ===== */

void FUN_180512a44(void)

{
  FUN_1805128d8();
  return;
}



/* ===== 180512a60 FUN_180512a60 ===== */

longlong FUN_180512a60(longlong *param_1)

{
  longlong lVar1;
  _FILETIME local_res8 [4];
  
  local_res8[0].dwLowDateTime = 0;
  local_res8[0].dwHighDateTime = 0;
  GetSystemTimeAsFileTime(local_res8);
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) *
                 SEXT816((longlong)local_res8[0] + -0x19db1ded53e8000),8) +
          (longlong)local_res8[0] + -0x19db1ded53e8000;
  lVar1 = (lVar1 >> 0x17) - (lVar1 >> 0x3f);
  if (0x793582aff < lVar1) {
    lVar1 = -1;
  }
  if (param_1 != (longlong *)0x0) {
    *param_1 = lVar1;
  }
  return lVar1;
}



/* ===== 180512ae0 FUN_180512ae0 ===== */

ulonglong FUN_180512ae0(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  undefined1 (*pauVar4) [32];
  ulonglong uVar5;
  undefined1 auVar6 [16];
  
  if (4 < DAT_1809194c8) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0x20 - uVar3;
    }
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (pauVar2 = param_1;
        (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1;
    if (uVar3 == uVar5) {
      pauVar4 = (undefined1 (*) [32])
                ((longlong)pauVar2 +
                ((param_2 - uVar5) - (ulonglong)((uint)(param_2 - uVar5) & 0x1f)));
      while ((pauVar2 != pauVar4 &&
             (auVar1 = vpcmpeqb_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1;
    }
    return uVar3;
  }
  pauVar2 = param_1;
  if (DAT_1809194c8 < 1) {
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
  }
  else {
    uVar3 = (ulonglong)((uint)param_1 & 0xf);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = 0x10 - uVar3;
    }
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar5) && ((*pauVar2)[0] != '\0'));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1)) {
    }
    if ((longlong)pauVar2 - (longlong)param_1 != uVar5) {
      return (longlong)pauVar2 - (longlong)param_1;
    }
    pauVar4 = (undefined1 (*) [32])
              ((longlong)pauVar2 + ((param_2 - uVar5) - (ulonglong)((uint)(param_2 - uVar5) & 0xf)))
    ;
    while ((pauVar2 != pauVar4 &&
           (auVar6[0] = -((*pauVar2)[0] == '\0'), auVar6[1] = -((*pauVar2)[1] == '\0'),
           auVar6[2] = -((*pauVar2)[2] == '\0'), auVar6[3] = -((*pauVar2)[3] == '\0'),
           auVar6[4] = -((*pauVar2)[4] == '\0'), auVar6[5] = -((*pauVar2)[5] == '\0'),
           auVar6[6] = -((*pauVar2)[6] == '\0'), auVar6[7] = -((*pauVar2)[7] == '\0'),
           auVar6[8] = -((*pauVar2)[8] == '\0'), auVar6[9] = -((*pauVar2)[9] == '\0'),
           auVar6[10] = -((*pauVar2)[10] == '\0'), auVar6[0xb] = -((*pauVar2)[0xb] == '\0'),
           auVar6[0xc] = -((*pauVar2)[0xc] == '\0'), auVar6[0xd] = -((*pauVar2)[0xd] == '\0'),
           auVar6[0xe] = -((*pauVar2)[0xe] == '\0'), auVar6[0xf] = -((*pauVar2)[0xf] == '\0'),
           (((((((((((((((SUB161(auVar6 >> 7,0) & 1) == 0 && (SUB161(auVar6 >> 0xf,0) & 1) == 0) &&
                       (SUB161(auVar6 >> 0x17,0) & 1) == 0) && (SUB161(auVar6 >> 0x1f,0) & 1) == 0)
                     && (SUB161(auVar6 >> 0x27,0) & 1) == 0) && (SUB161(auVar6 >> 0x2f,0) & 1) == 0)
                   && (SUB161(auVar6 >> 0x37,0) & 1) == 0) && (SUB161(auVar6 >> 0x3f,0) & 1) == 0)
                 && (SUB161(auVar6 >> 0x47,0) & 1) == 0) && (SUB161(auVar6 >> 0x4f,0) & 1) == 0) &&
               (SUB161(auVar6 >> 0x57,0) & 1) == 0) && (SUB161(auVar6 >> 0x5f,0) & 1) == 0) &&
             (SUB161(auVar6 >> 0x67,0) & 1) == 0) && (SUB161(auVar6 >> 0x6f,0) & 1) == 0) &&
           (SUB161(auVar6 >> 0x77,0) & 1) == 0) && -1 < auVar6[0xf]))) {
      pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
    }
    if (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2)) {
      while ((*pauVar2)[0] != '\0') {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2)) {
          return (longlong)pauVar2 - (longlong)param_1;
        }
      }
    }
  }
  return (longlong)pauVar2 - (longlong)param_1;
}



/* ===== 180512c70 FUN_180512c70 ===== */

ulonglong FUN_180512c70(undefined1 (*param_1) [32])

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  if (DAT_1809194c8 < 5) {
    pauVar2 = param_1;
    if (DAT_1809194c8 < 1) {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
             (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar3 != uVar4 >> 1) {
        return uVar3;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
      while( true ) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar2 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar2 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar2 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar2 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar2 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar2 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar2 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar2 + 0xe) == 0);
        if ((((((((((((((((SUB161(auVar5 >> 7,0) & 1) != 0 || (SUB161(auVar5 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar5 >> 0x17,0) & 1) != 0) || (SUB161(auVar5 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar5 >> 0x27,0) & 1) != 0) || (SUB161(auVar5 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar5 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar5 >> 0x3f,0) & 1) != 0) || (SUB161(auVar5 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar5 >> 0x4f,0) & 1) != 0) || (SUB161(auVar5 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar5 >> 0x5f,0) & 1) != 0) || (SUB161(auVar5 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar5 >> 0x6f,0) & 1) != 0) || (auVar5._14_2_ >> 7 & 1) != 0) ||
            (auVar5._14_2_ & 0x8000) != 0) break;
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 0x10);
      }
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (((ulonglong)param_1 & 1) == 0) {
    uVar3 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = 0x20 - uVar3;
    }
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + (uVar4 >> 1) * 2) &&
           (*(short *)*pauVar2 != 0)); pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
    uVar3 = (longlong)pauVar2 - (longlong)param_1 >> 1;
    if (uVar3 != uVar4 >> 1) {
      return uVar3;
    }
    pauVar2 = (undefined1 (*) [32])(*param_1 + uVar3 * 2);
    while (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
          (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                       (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                            (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                           (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                          (SUB321(auVar1 >> 0x77,0) & 1) == 0) && SUB321(auVar1 >> 0x7f,0) == '\0')
                        && (SUB321(auVar1 >> 0x87,0) & 1) == 0) &&
                       (SUB321(auVar1 >> 0x8f,0) & 1) == 0) && (SUB321(auVar1 >> 0x97,0) & 1) == 0)
                     && (SUB321(auVar1 >> 0x9f,0) & 1) == 0) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0)
                   && (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                 && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
               (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
             (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
           (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
          -1 < auVar1[0x1f]) {
      pauVar2 = pauVar2 + 1;
    }
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    for (; *(short *)*pauVar2 != 0; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}



/* ===== 180512dc0 FUN_180512dc0 ===== */

ulonglong FUN_180512dc0(undefined1 (*param_1) [32],ulonglong param_2)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  short *psVar5;
  undefined1 auVar6 [16];
  
  if (4 < DAT_1809194c8) {
    if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0x1f);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x20 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (pauVar2 = param_1;
          (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      pauVar2 = (undefined1 (*) [32])(*param_1 + uVar4 * 2);
      while ((pauVar2 !=
              (undefined1 (*) [32])
              ((longlong)param_1 +
              (((param_2 - uVar3) - (ulonglong)((uint)(param_2 - uVar3) & 0x1f)) + uVar4) * 2) &&
             (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),*pauVar2),
             (((((((((((((((((((((((((((((((SUB321(auVar1 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar1 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar1 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar1 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar1 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar1 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar1 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar1 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar1 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar1 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar1 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar1 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar1 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar1 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar1 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar1 >> 0x7f,0) == '\0') && (SUB321(auVar1 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar1 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar1 >> 0x97,0) & 1) == 0) && (SUB321(auVar1 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar1 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar1 >> 0xaf,0) & 1) == 0) && (SUB321(auVar1 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar1 >> 0xbf,0) == '\0') && (SUB321(auVar1 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar1 >> 0xcf,0) & 1) == 0) && (SUB321(auVar1 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar1 >> 0xdf,0) & 1) == 0) && (SUB321(auVar1 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar1 >> 0xef,0) & 1) == 0) && (SUB321(auVar1 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar1[0x1f]))) {
        pauVar2 = pauVar2 + 1;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0))
          ; pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
    }
    else {
      pauVar2 = param_1;
      if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
        while (*(short *)*pauVar2 != 0) {
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2);
          if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
            return (longlong)pauVar2 - (longlong)param_1 >> 1;
          }
        }
      }
    }
    return (longlong)pauVar2 - (longlong)param_1 >> 1;
  }
  pauVar2 = param_1;
  if (DAT_1809194c8 < 1) {
    for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar2 != 0));
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
    }
  }
  else {
    if (((ulonglong)param_1 & 1) == 0) {
      uVar3 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = 0x10 - uVar3;
      }
      uVar3 = uVar4 >> 1;
      if (param_2 < uVar4 >> 1) {
        uVar3 = param_2;
      }
      for (; (pauVar2 != (undefined1 (*) [32])(*param_1 + uVar3 * 2) && (*(short *)*pauVar2 != 0));
          pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2)) {
      }
      uVar4 = (longlong)pauVar2 - (longlong)param_1 >> 1;
      if (uVar4 != uVar3) {
        return uVar4;
      }
      for (psVar5 = (short *)(*param_1 + uVar4 * 2);
          psVar5 != (short *)((longlong)param_1 +
                             (((param_2 - uVar3) - (ulonglong)((uint)(param_2 - uVar3) & 0xf)) +
                             uVar4) * 2); psVar5 = psVar5 + 8) {
        auVar6._0_2_ = -(ushort)(*psVar5 == 0);
        auVar6._2_2_ = -(ushort)(psVar5[1] == 0);
        auVar6._4_2_ = -(ushort)(psVar5[2] == 0);
        auVar6._6_2_ = -(ushort)(psVar5[3] == 0);
        auVar6._8_2_ = -(ushort)(psVar5[4] == 0);
        auVar6._10_2_ = -(ushort)(psVar5[5] == 0);
        auVar6._12_2_ = -(ushort)(psVar5[6] == 0);
        auVar6._14_2_ = -(ushort)(psVar5[7] == 0);
        if ((((((((((((((((SUB161(auVar6 >> 7,0) & 1) != 0 || (SUB161(auVar6 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar6 >> 0x17,0) & 1) != 0) || (SUB161(auVar6 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar6 >> 0x27,0) & 1) != 0) || (SUB161(auVar6 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar6 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar6 >> 0x3f,0) & 1) != 0) || (SUB161(auVar6 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar6 >> 0x4f,0) & 1) != 0) || (SUB161(auVar6 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar6 >> 0x5f,0) & 1) != 0) || (SUB161(auVar6 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar6 >> 0x6f,0) & 1) != 0) || (auVar6._14_2_ >> 7 & 1) != 0) ||
            (auVar6._14_2_ & 0x8000) != 0) break;
      }
      for (; (psVar5 != (short *)(*param_1 + param_2 * 2) && (*psVar5 != 0)); psVar5 = psVar5 + 1) {
      }
      return (longlong)psVar5 - (longlong)param_1 >> 1;
    }
    if (param_1 != (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
      while (*(short *)*pauVar2 != 0) {
        pauVar2 = (undefined1 (*) [32])(*pauVar2 + 2);
        if (pauVar2 == (undefined1 (*) [32])(*param_1 + param_2 * 2)) {
          return (longlong)pauVar2 - (longlong)param_1 >> 1;
        }
      }
    }
  }
  return (longlong)pauVar2 - (longlong)param_1 >> 1;
}



/* ===== 180512fd0 FUN_180512fd0 ===== */

float FUN_180512fd0(float param_1,float *param_2)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1 >> 0x17 & 0xff;
  if (uVar2 < 0x7f) {
    *param_2 = (float)((uint)param_1 & 0x80000000);
    return param_1;
  }
  if (0x95 < uVar2) {
    *param_2 = param_1;
    if ((uint)ABS(param_1) < 0x7f800001) {
      return (float)((uint)param_1 & 0x80000000);
    }
    return param_1 + param_1;
  }
  fVar1 = (float)(-1 << (0x96U - (char)((uint)param_1 >> 0x17) & 0x1f) & (uint)param_1);
  *param_2 = fVar1;
  if ((param_1 == fVar1) && (param_1 < 0.0)) {
    return DAT_1808acd10;
  }
  return param_1 - fVar1;
}



/* ===== 18051305c FUN_18051305c ===== */

uint FUN_18051305c(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  
  pcVar2 = (char *)*param_2;
  uVar11 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
LAB_1805130d1:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_1805130d1;
  }
  cVar12 = *pcVar2;
  *param_2 = (longlong)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1805002a0();
  }
  while (iVar5 = FUN_18050fc80(cVar12,8,param_1 + 0x18), iVar5 != 0) {
    cVar12 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  uVar10 = param_4 & 0xff | 2;
  if (cVar12 != '-') {
    uVar10 = param_4 & 0xff;
  }
  if ((cVar12 - 0x2bU & 0xfd) == 0) {
    cVar12 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar12 - 0x30U) < 10) {
      iVar5 = cVar12 + -0x30;
LAB_180513181:
      if (iVar5 != 0) goto LAB_1805131d2;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
      *param_2 = (longlong)(pcVar3 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar3;
        uVar13 = 8;
        if (param_3 != 0) {
          uVar13 = param_3;
        }
        uVar11 = (ulonglong)uVar13;
        if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
          puVar7 = (undefined4 *)FUN_18051bfb0();
          *puVar7 = 0x16;
          FUN_180527740();
        }
        goto LAB_1805131de;
      }
      cVar12 = pcVar3[1];
      *param_2 = (longlong)(pcVar3 + 2);
      uVar13 = 0x10;
    }
    else {
      if ((byte)(cVar12 + 0x9fU) < 0x1a) {
        iVar5 = cVar12 + -0x57;
        goto LAB_180513181;
      }
      if ((byte)(cVar12 + 0xbfU) < 0x1a) {
        iVar5 = cVar12 + -0x37;
        goto LAB_180513181;
      }
LAB_1805131d2:
      uVar13 = 10;
    }
    if (param_3 != 0) {
      uVar13 = param_3;
    }
    uVar11 = (ulonglong)uVar13;
  }
LAB_1805131de:
  uVar9 = 0xffffffff % uVar11;
  uVar13 = 0;
  while( true ) {
    if ((byte)(cVar12 - 0x30U) < 10) {
      uVar8 = (int)cVar12 - 0x30;
    }
    else if ((byte)(cVar12 + 0x9fU) < 0x1a) {
      uVar8 = (int)cVar12 - 0x57;
    }
    else if ((byte)(cVar12 + 0xbfU) < 0x1a) {
      uVar8 = (int)cVar12 - 0x37;
    }
    else {
      uVar8 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if ((uint)uVar11 <= uVar8) break;
    cVar12 = *pcVar3;
    uVar6 = uVar13 * (uint)uVar11;
    uVar8 = uVar6 + uVar8;
    uVar9 = (ulonglong)uVar8;
    *param_2 = (longlong)(pcVar3 + 1);
    uVar10 = uVar10 | (uint)(uVar8 < uVar6 || (uint)(0xffffffff / uVar11) < uVar13) << 2 | 8;
    uVar13 = uVar8;
  }
  *param_2 = (longlong)(pcVar3 + -1);
  if ((cVar12 != '\0') && (pcVar3[-1] != cVar12)) {
    puVar7 = (undefined4 *)FUN_18051bfb0(uVar8,uVar9);
    *puVar7 = 0x16;
    FUN_180527740();
  }
  if ((uVar10 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  if ((uVar10 & 4) == 0) {
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto LAB_1805132cd;
LAB_1805132ee:
      uVar13 = -uVar13;
      goto LAB_1805132cd;
    }
    if ((uVar10 & 2) == 0) {
      if (uVar13 < 0x80000000) goto LAB_1805132cd;
    }
    else if (uVar13 < 0x80000001) goto LAB_1805132ee;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((uVar10 & 1) != 0) {
    plVar4 = (longlong *)param_2[1];
    if ((uVar10 & 2) != 0) {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar4 == (longlong *)0x0) {
      return 0x7fffffff;
    }
    *plVar4 = *param_2;
    return 0x7fffffff;
  }
  uVar13 = 0xffffffff;
LAB_1805132cd:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar13;
}



/* ===== 180513338 FUN_180513338 ===== */

uint FUN_180513338(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  wint_t *pwVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  wint_t _C;
  uint uVar13;
  int local_a8;
  int local_a0;
  int local_98;
  int local_90;
  int local_88;
  int local_80;
  int local_78;
  int local_70;
  int local_68;
  int local_60;
  
  pwVar2 = (wint_t *)*param_2;
  uVar9 = (ulonglong)param_3;
  if (pwVar2 == (wint_t *)0x0) {
    puVar8 = (undefined4 *)FUN_18051bfb0();
    *puVar8 = 0x16;
    FUN_180527740();
LAB_1805133b5:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_1805133b5;
  }
  _C = *pwVar2;
  *param_2 = (longlong)(pwVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1805002a0();
  }
  while (iVar6 = iswctype(_C,8), iVar6 != 0) {
    _C = *(wint_t *)*param_2;
    *param_2 = (longlong)((wint_t *)*param_2 + 1);
  }
  uVar13 = param_4 & 0xff | 2;
  if (_C != 0x2d) {
    uVar13 = param_4 & 0xff;
  }
  if ((_C - 0x2b & 0xfffd) == 0) {
    _C = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
  }
  local_a8 = 0xae6;
  iVar6 = 0x30;
  local_a0 = 0xb66;
  local_98 = 0xc66;
  local_90 = 0xce6;
  local_88 = 0xd66;
  local_80 = 0xe50;
  local_78 = 0xed0;
  local_70 = 0xf20;
  local_68 = 0x1040;
  local_60 = 0x17e0;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1805137a5;
  if (_C < 0x30) goto LAB_1805136f6;
  if (_C < 0x3a) {
LAB_18051353b:
    iVar6 = (uint)_C - iVar6;
LAB_1805136f1:
    if (iVar6 == -1) goto LAB_1805136f6;
LAB_18051371c:
    if (iVar6 != 0) goto LAB_180513796;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar9 = 8;
      if (param_3 != 0) {
        uVar9 = (ulonglong)param_3;
      }
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        puVar8 = (undefined4 *)FUN_18051bfb0();
        *puVar8 = 0x16;
        FUN_180527740();
      }
      goto LAB_1805137a5;
    }
    _C = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar9 = 0x10;
  }
  else {
    if (_C < 0xff10) {
      if (0x65f < _C) {
        if (_C < 0x66a) {
          iVar6 = _C - 0x660;
          goto LAB_1805136f1;
        }
        if (0x6ef < _C) {
          if (_C < 0x6fa) {
            iVar6 = _C - 0x6f0;
            goto LAB_1805136f1;
          }
          if (0x965 < _C) {
            if (_C < 0x970) {
              iVar6 = _C - 0x966;
              goto LAB_1805136f1;
            }
            if (0x9e5 < _C) {
              if (_C < 0x9f0) {
                iVar6 = _C - 0x9e6;
                goto LAB_1805136f1;
              }
              if (0xa65 < _C) {
                if (_C < 0xa70) {
                  iVar6 = _C - 0xa66;
                  goto LAB_1805136f1;
                }
                iVar6 = 0xae6;
                if ((0xae5 < _C) &&
                   ((_C < 0xaf0 ||
                    ((iVar6 = 0xb66, 0xb65 < _C &&
                     ((_C < 0xb70 ||
                      ((iVar6 = 0xc66, 0xc65 < _C &&
                       ((_C < 0xc70 ||
                        ((iVar6 = 0xce6, 0xce5 < _C &&
                         ((_C < 0xcf0 ||
                          ((iVar6 = 0xd66, 0xd65 < _C &&
                           ((_C < 0xd70 ||
                            ((iVar6 = 0xe50, 0xe4f < _C &&
                             ((_C < 0xe5a ||
                              ((iVar6 = 0xed0, 0xecf < _C &&
                               ((_C < 0xeda ||
                                ((iVar6 = 0xf20, 0xf1f < _C &&
                                 ((_C < 0xf2a ||
                                  ((iVar6 = 0x1040, 0x103f < _C &&
                                   ((_C < 0x104a ||
                                    ((iVar6 = 0x17e0, 0x17df < _C &&
                                     ((_C < 0x17ea || (iVar6 = 0x1810, (ushort)(_C + 0xe7f0) < 10)))
                                     ))))))))))))))))))))))))))))))))))))) goto LAB_18051353b;
              }
            }
          }
        }
      }
    }
    else if (_C < 0xff1a) {
      iVar6 = _C - 0xff10;
      goto LAB_1805136f1;
    }
LAB_1805136f6:
    uVar10 = (uint)_C;
    if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
      if (_C - 0x61 < 0x1a) {
        uVar10 = _C - 0x20;
      }
      iVar6 = uVar10 - 0x37;
      goto LAB_18051371c;
    }
LAB_180513796:
    uVar9 = 10;
  }
  if (param_3 != 0) {
    uVar9 = (ulonglong)param_3;
  }
LAB_1805137a5:
  uVar12 = 0xffffffff % uVar9;
  uVar10 = 0;
  do {
    if (_C < 0x30) goto LAB_180513972;
    if (_C < 0x3a) {
      uVar11 = _C - 0x30;
LAB_18051396d:
      if (uVar11 == 0xffffffff) goto LAB_180513972;
    }
    else {
      if (_C < 0xff10) {
        if (0x65f < _C) {
          if (_C < 0x66a) {
            uVar11 = _C - 0x660;
            goto LAB_18051396d;
          }
          if (0x6ef < _C) {
            if (_C < 0x6fa) {
              uVar11 = _C - 0x6f0;
              goto LAB_18051396d;
            }
            if (0x965 < _C) {
              iVar6 = 0x966;
              if (_C < 0x970) {
LAB_180513839:
                uVar11 = (uint)_C - iVar6;
                goto LAB_18051396d;
              }
              if (0x9e5 < _C) {
                iVar6 = 0x9e6;
                if (_C < 0x9f0) goto LAB_180513839;
                if (0xa65 < _C) {
                  iVar6 = 0xa66;
                  if (_C < 0xa70) goto LAB_180513839;
                  if (0xae5 < _C) {
                    iVar6 = local_a8;
                    if (_C < 0xaf0) goto LAB_180513839;
                    if (0xb65 < _C) {
                      iVar6 = local_a0;
                      if (_C < 0xb70) goto LAB_180513839;
                      if (0xc65 < _C) {
                        iVar6 = local_98;
                        if (_C < 0xc70) goto LAB_180513839;
                        if (0xce5 < _C) {
                          iVar6 = local_90;
                          if (_C < 0xcf0) goto LAB_180513839;
                          if (0xd65 < _C) {
                            iVar6 = local_88;
                            if (_C < 0xd70) goto LAB_180513839;
                            if (0xe4f < _C) {
                              iVar6 = local_80;
                              if (_C < 0xe5a) goto LAB_180513839;
                              if (0xecf < _C) {
                                iVar6 = local_78;
                                if (_C < 0xeda) goto LAB_180513839;
                                if (0xf1f < _C) {
                                  iVar6 = local_70;
                                  if (_C < 0xf2a) goto LAB_180513839;
                                  if (0x103f < _C) {
                                    iVar6 = local_68;
                                    if (_C < 0x104a) goto LAB_180513839;
                                    if (0x17df < _C) {
                                      iVar6 = local_60;
                                      if (_C < 0x17ea) goto LAB_180513839;
                                      uVar12 = 0x1810;
                                      if ((ushort)(_C + 0xe7f0) < 10) {
                                        uVar11 = _C - 0x1810;
                                        goto LAB_18051396d;
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
                  }
                }
              }
            }
          }
        }
      }
      else if (_C < 0xff1a) {
        uVar11 = _C - 0xff10;
        goto LAB_18051396d;
      }
LAB_180513972:
      uVar11 = (uint)_C;
      if (((_C < 0x41) || (0x5a < _C)) && ((uVar11 < 0x61 || (0x7a < _C)))) {
        uVar11 = 0xffffffff;
      }
      else {
        if ((ushort)(_C - 0x61) < 0x1a) {
          uVar11 = uVar11 - 0x20;
        }
        uVar11 = uVar11 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if ((uint)uVar9 <= uVar11) break;
    _C = *puVar4;
    uVar7 = uVar10 * (uint)uVar9;
    uVar11 = uVar7 + uVar11;
    uVar12 = (ulonglong)uVar11;
    *param_2 = (longlong)(puVar4 + 1);
    uVar13 = uVar13 | (uint)(uVar11 < uVar7 || (uint)(0xffffffff / uVar9) < uVar10) << 2 | 8;
    uVar10 = uVar11;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((_C != 0) && (puVar4[-1] != _C)) {
    puVar8 = (undefined4 *)FUN_18051bfb0(uVar11,uVar12);
    *puVar8 = 0x16;
    FUN_180527740();
  }
  if ((uVar13 & 8) == 0) {
    *param_2 = (longlong)pwVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pwVar2;
    return 0;
  }
  if ((uVar13 & 4) == 0) {
    if ((uVar13 & 1) == 0) {
      if ((uVar13 & 2) == 0) goto LAB_180513a6f;
LAB_180513a8e:
      uVar10 = -uVar10;
      goto LAB_180513a6f;
    }
    if ((uVar13 & 2) == 0) {
      if (uVar10 < 0x80000000) goto LAB_180513a6f;
    }
    else if (uVar10 < 0x80000001) goto LAB_180513a8e;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((uVar13 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar13 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 == (longlong *)0x0) {
      return 0x7fffffff;
    }
    *plVar5 = *param_2;
    return 0x7fffffff;
  }
  uVar10 = 0xffffffff;
LAB_180513a6f:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar10;
}



/* ===== 180513ad4 FUN_180513ad4 ===== */

ulonglong FUN_180513ad4(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)0x0) {
    puVar8 = (undefined4 *)FUN_18051bfb0();
    *puVar8 = 0x16;
    FUN_180527740();
LAB_180513b49:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_180513b49;
  }
  cVar5 = *pcVar2;
  *param_2 = (longlong)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1805002a0();
  }
  while (iVar6 = FUN_18050fc80(cVar5,8,param_1 + 0x18), iVar6 != 0) {
    cVar5 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  bVar13 = param_4 | 2;
  if (cVar5 != '-') {
    bVar13 = param_4;
  }
  if ((cVar5 - 0x2bU & 0xfd) == 0) {
    cVar5 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) != 0) goto LAB_180513c5b;
  if ((byte)(cVar5 - 0x30U) < 10) {
    iVar6 = cVar5 + -0x30;
LAB_180513bfe:
    if (iVar6 != 0) goto LAB_180513c4f;
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *param_2 = (longlong)(pcVar3 + 1);
    if ((cVar1 + 0xa8U & 0xdf) != 0) {
      *param_2 = (longlong)pcVar3;
      uVar7 = 8;
      if (param_3 != 0) {
        uVar7 = param_3;
      }
      param_3 = uVar7;
      if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
        puVar8 = (undefined4 *)FUN_18051bfb0();
        *puVar8 = 0x16;
        FUN_180527740();
      }
      goto LAB_180513c5b;
    }
    cVar5 = pcVar3[1];
    *param_2 = (longlong)(pcVar3 + 2);
    uVar7 = 0x10;
  }
  else {
    if ((byte)(cVar5 + 0x9fU) < 0x1a) {
      iVar6 = cVar5 + -0x57;
      goto LAB_180513bfe;
    }
    if ((byte)(cVar5 + 0xbfU) < 0x1a) {
      iVar6 = cVar5 + -0x37;
      goto LAB_180513bfe;
    }
LAB_180513c4f:
    uVar7 = 10;
  }
  if (param_3 != 0) {
    uVar7 = param_3;
  }
  param_3 = uVar7;
LAB_180513c5b:
  uVar12 = (ulonglong)(int)param_3;
  uVar10 = 0xffffffffffffffff % uVar12;
  uVar11 = 0;
  while( true ) {
    if ((byte)(cVar5 - 0x30U) < 10) {
      uVar9 = (ulonglong)((int)cVar5 - 0x30);
    }
    else if ((byte)(cVar5 + 0x9fU) < 0x1a) {
      uVar9 = (ulonglong)((int)cVar5 - 0x57);
    }
    else if ((byte)(cVar5 + 0xbfU) < 0x1a) {
      uVar9 = (ulonglong)((int)cVar5 - 0x37);
    }
    else {
      uVar9 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if (param_3 <= (uint)uVar9) break;
    cVar5 = *pcVar3;
    uVar10 = uVar9 + uVar12 * uVar11;
    *param_2 = (longlong)(pcVar3 + 1);
    bVar13 = bVar13 | (uVar10 < uVar12 * uVar11 || 0xffffffffffffffff / uVar12 < uVar11) << 2 | 8U;
    uVar11 = uVar10;
  }
  *param_2 = (longlong)(pcVar3 + -1);
  if ((cVar5 != '\0') && (pcVar3[-1] != cVar5)) {
    puVar8 = (undefined4 *)FUN_18051bfb0(uVar9,uVar10);
    *puVar8 = 0x16;
    FUN_180527740();
  }
  if ((bVar13 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  cVar5 = FUN_1805022d0(bVar13,uVar11);
  if (cVar5 == '\0') {
    if ((bVar13 & 2) != 0) {
      uVar11 = -uVar11;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x22;
    if ((bVar13 & 1) != 0) {
      plVar4 = (longlong *)param_2[1];
      if ((bVar13 & 2) == 0) {
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *param_2;
      }
      return 0x8000000000000000;
    }
    uVar11 = 0xffffffffffffffff;
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
  }
  return uVar11;
}



/* ===== 180513db0 FUN_180513db0 ===== */

ulonglong FUN_180513db0(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  short sVar1;
  wint_t *pwVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  wint_t _C;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  int local_a8;
  int local_a0;
  int local_98;
  int local_90;
  int local_88;
  int local_80;
  int local_78;
  int local_70;
  int local_68;
  int local_60;
  
  pwVar2 = (wint_t *)*param_2;
  if (pwVar2 == (wint_t *)0x0) {
    puVar8 = (undefined4 *)FUN_18051bfb0();
    *puVar8 = 0x16;
    FUN_180527740();
LAB_180513e2d:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,param_1);
    goto LAB_180513e2d;
  }
  _C = *pwVar2;
  *param_2 = (longlong)(pwVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1805002a0();
  }
  while (iVar7 = iswctype(_C,8), iVar7 != 0) {
    _C = *(wint_t *)*param_2;
    *param_2 = (longlong)((wint_t *)*param_2 + 1);
  }
  bVar13 = param_4 | 2;
  if (_C != 0x2d) {
    bVar13 = param_4;
  }
  if ((_C - 0x2b & 0xfffd) == 0) {
    _C = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
  }
  local_a8 = 0xae6;
  iVar7 = 0x30;
  local_a0 = 0xb66;
  local_98 = 0xc66;
  local_90 = 0xce6;
  local_88 = 0xd66;
  local_80 = 0xe50;
  local_78 = 0xed0;
  local_70 = 0xf20;
  local_68 = 0x1040;
  local_60 = 0x17e0;
  if ((param_3 & 0xffffffef) != 0) goto LAB_18051420b;
  if (_C < 0x30) goto LAB_18051416e;
  if (_C < 0x3a) {
LAB_180513fb3:
    iVar7 = (uint)_C - iVar7;
LAB_180514169:
    if (iVar7 == -1) goto LAB_18051416e;
LAB_180514190:
    if (iVar7 != 0) goto LAB_1805141fc;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar9 = 8;
      if (param_3 != 0) {
        uVar9 = param_3;
      }
      param_3 = uVar9;
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        puVar8 = (undefined4 *)FUN_18051bfb0();
        *puVar8 = 0x16;
        FUN_180527740();
      }
      goto LAB_18051420b;
    }
    _C = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar9 = 0x10;
  }
  else {
    if (_C < 0xff10) {
      if (0x65f < _C) {
        if (_C < 0x66a) {
          iVar7 = _C - 0x660;
          goto LAB_180514169;
        }
        if (0x6ef < _C) {
          if (_C < 0x6fa) {
            iVar7 = _C - 0x6f0;
            goto LAB_180514169;
          }
          if (0x965 < _C) {
            if (_C < 0x970) {
              iVar7 = _C - 0x966;
              goto LAB_180514169;
            }
            if (0x9e5 < _C) {
              if (_C < 0x9f0) {
                iVar7 = _C - 0x9e6;
                goto LAB_180514169;
              }
              if (0xa65 < _C) {
                if (_C < 0xa70) {
                  iVar7 = _C - 0xa66;
                  goto LAB_180514169;
                }
                iVar7 = 0xae6;
                if ((0xae5 < _C) &&
                   ((_C < 0xaf0 ||
                    ((iVar7 = 0xb66, 0xb65 < _C &&
                     ((_C < 0xb70 ||
                      ((iVar7 = 0xc66, 0xc65 < _C &&
                       ((_C < 0xc70 ||
                        ((iVar7 = 0xce6, 0xce5 < _C &&
                         ((_C < 0xcf0 ||
                          ((iVar7 = 0xd66, 0xd65 < _C &&
                           ((_C < 0xd70 ||
                            ((iVar7 = 0xe50, 0xe4f < _C &&
                             ((_C < 0xe5a ||
                              ((iVar7 = 0xed0, 0xecf < _C &&
                               ((_C < 0xeda ||
                                ((iVar7 = 0xf20, 0xf1f < _C &&
                                 ((_C < 0xf2a ||
                                  ((iVar7 = 0x1040, 0x103f < _C &&
                                   ((_C < 0x104a ||
                                    ((iVar7 = 0x17e0, 0x17df < _C &&
                                     ((_C < 0x17ea || (iVar7 = 0x1810, (ushort)(_C + 0xe7f0) < 10)))
                                     ))))))))))))))))))))))))))))))))))))) goto LAB_180513fb3;
              }
            }
          }
        }
      }
    }
    else if (_C < 0xff1a) {
      iVar7 = _C - 0xff10;
      goto LAB_180514169;
    }
LAB_18051416e:
    uVar9 = (uint)_C;
    if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
      if (_C - 0x61 < 0x1a) {
        uVar9 = _C - 0x20;
      }
      iVar7 = uVar9 - 0x37;
      goto LAB_180514190;
    }
LAB_1805141fc:
    uVar9 = 10;
  }
  if (param_3 != 0) {
    uVar9 = param_3;
  }
  param_3 = uVar9;
LAB_18051420b:
  uVar14 = (ulonglong)(int)param_3;
  uVar11 = 0xffffffffffffffff % uVar14;
  uVar12 = 0;
  do {
    if (_C < 0x30) goto LAB_1805143d5;
    if (_C < 0x3a) {
      uVar10 = (ulonglong)(_C - 0x30);
LAB_1805143d0:
      if ((int)uVar10 == -1) goto LAB_1805143d5;
    }
    else {
      if (_C < 0xff10) {
        if (0x65f < _C) {
          if (_C < 0x66a) {
            uVar10 = (ulonglong)(_C - 0x660);
            goto LAB_1805143d0;
          }
          if (0x6ef < _C) {
            iVar7 = 0x6f0;
            if (_C < 0x6fa) {
LAB_180514284:
              uVar10 = (ulonglong)((uint)_C - iVar7);
              goto LAB_1805143d0;
            }
            if (0x965 < _C) {
              iVar7 = 0x966;
              if (_C < 0x970) goto LAB_180514284;
              if (0x9e5 < _C) {
                iVar7 = 0x9e6;
                if (_C < 0x9f0) goto LAB_180514284;
                if (0xa65 < _C) {
                  iVar7 = 0xa66;
                  if (_C < 0xa70) goto LAB_180514284;
                  if (0xae5 < _C) {
                    iVar7 = local_a8;
                    if (_C < 0xaf0) goto LAB_180514284;
                    if (0xb65 < _C) {
                      iVar7 = local_a0;
                      if (_C < 0xb70) goto LAB_180514284;
                      if (0xc65 < _C) {
                        iVar7 = local_98;
                        if (_C < 0xc70) goto LAB_180514284;
                        if (0xce5 < _C) {
                          iVar7 = local_90;
                          if (_C < 0xcf0) goto LAB_180514284;
                          if (0xd65 < _C) {
                            iVar7 = local_88;
                            if (_C < 0xd70) goto LAB_180514284;
                            if (0xe4f < _C) {
                              iVar7 = local_80;
                              if (_C < 0xe5a) goto LAB_180514284;
                              if (0xecf < _C) {
                                iVar7 = local_78;
                                if (_C < 0xeda) goto LAB_180514284;
                                if (0xf1f < _C) {
                                  iVar7 = local_70;
                                  if (_C < 0xf2a) goto LAB_180514284;
                                  if (0x103f < _C) {
                                    iVar7 = local_68;
                                    if (_C < 0x104a) goto LAB_180514284;
                                    if (0x17df < _C) {
                                      iVar7 = local_60;
                                      if (_C < 0x17ea) goto LAB_180514284;
                                      uVar11 = 0x1810;
                                      if ((ushort)(_C + 0xe7f0) < 10) {
                                        uVar10 = (ulonglong)(_C - 0x1810);
                                        goto LAB_1805143d0;
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
                  }
                }
              }
            }
          }
        }
      }
      else if (_C < 0xff1a) {
        uVar10 = (ulonglong)(_C - 0xff10);
        goto LAB_1805143d0;
      }
LAB_1805143d5:
      uVar9 = (uint)_C;
      if (((_C < 0x41) || (0x5a < _C)) && ((uVar9 < 0x61 || (0x7a < _C)))) {
        uVar10 = 0xffffffff;
      }
      else {
        if ((ushort)(_C - 0x61) < 0x1a) {
          uVar9 = uVar9 - 0x20;
        }
        uVar10 = (ulonglong)(uVar9 - 0x37);
      }
    }
    puVar4 = (ushort *)*param_2;
    if (param_3 <= (uint)uVar10) {
      *param_2 = (longlong)(puVar4 + -1);
      if ((_C != 0) && (puVar4[-1] != _C)) {
        puVar8 = (undefined4 *)FUN_18051bfb0(uVar10,uVar11);
        *puVar8 = 0x16;
        FUN_180527740();
      }
      if ((bVar13 & 8) == 0) {
        *param_2 = (longlong)pwVar2;
        if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
          return 0;
        }
        *(undefined8 *)param_2[1] = pwVar2;
        return 0;
      }
      cVar6 = FUN_1805022d0(bVar13,uVar12);
      if (cVar6 == '\0') {
        if ((bVar13 & 2) != 0) {
          uVar12 = -uVar12;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x30) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 0x22;
        if ((bVar13 & 1) != 0) {
          plVar5 = (longlong *)param_2[1];
          if ((bVar13 & 2) == 0) {
            if (plVar5 != (longlong *)0x0) {
              *plVar5 = *param_2;
            }
            return 0x7fffffffffffffff;
          }
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = *param_2;
          }
          return 0x8000000000000000;
        }
        uVar12 = 0xffffffffffffffff;
      }
      if ((longlong *)param_2[1] != (longlong *)0x0) {
        *(longlong *)param_2[1] = *param_2;
      }
      return uVar12;
    }
    _C = *puVar4;
    uVar11 = uVar10 + uVar14 * uVar12;
    *param_2 = (longlong)(puVar4 + 1);
    bVar13 = bVar13 | (uVar11 < uVar14 * uVar12 || 0xffffffffffffffff / uVar14 < uVar12) << 2 | 8U;
    uVar12 = uVar11;
  } while( true );
}



/* ===== 180514534 FUN_180514534 ===== */

undefined4 FUN_180514534(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  local_50 = 0;
  local_58 = param_1;
  uVar1 = FUN_180513338(local_48,&local_58,10,1);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 1805145e4 FUN_1805145e4 ===== */

undefined4 FUN_1805145e4(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  local_50 = 0;
  local_58 = param_1;
  uVar1 = FUN_18051305c(local_48,&local_58,10,1);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 180514694 common_atof_l<> ===== */

/* Library Function - Multiple Matches With Same Base Name
    double __cdecl common_atof_l<char>(char const * __ptr64 const,struct __crt_locale_pointers *
   __ptr64 const)
    double __cdecl common_atof_l<wchar_t>(wchar_t const * __ptr64 const,struct __crt_locale_pointers
   * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 common_atof_l<>(longlong param_1,__crt_locale_pointers *param_2)

{
  undefined4 *puVar1;
  undefined8 local_res8 [4];
  longlong local_38 [2];
  longlong local_28;
  undefined1 local_20 [16];
  char local_10;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
    local_res8[0] = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    local_38[1] = 0;
    local_res8[0] = 0;
    local_38[0] = param_1;
    parse_floating_point<>(local_20,local_38,local_res8);
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return local_res8[0];
}



/* ===== 180514708 parse_floating_point<> ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<char>,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<wchar_t>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<wchar_t>,double * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 parse_floating_point<>(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1805147a8(param_1,param_2,local_328);
    uVar3 = FUN_180507104(uVar1,local_328,param_3);
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
  return uVar3;
}



/* ===== 1805147a8 FUN_1805147a8 ===== */

ulonglong FUN_1805147a8(longlong *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  char cVar10;
  int *piVar11;
  char *pcVar12;
  byte bVar13;
  int local_res10 [2];
  int *local_res18;
  
  pcVar12 = (char *)*param_2;
  local_res18 = param_3;
  if (pcVar12 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
    return 7;
  }
  cVar10 = *pcVar12;
  *param_2 = (longlong)(pcVar12 + 1);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar10);
  iVar5 = FUN_18050fc80();
  if (iVar5 != 0) {
    do {
      cVar10 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar10);
      iVar5 = FUN_18050fc80();
    } while (iVar5 != 0);
  }
  *(bool *)(param_3 + 0xc2) = cVar10 == '-';
  if ((cVar10 == '-') || (cVar10 == '+')) {
    cVar10 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar10);
  }
  if ((cVar10 == 'I') || (cVar10 == 'i')) {
    uVar9 = FUN_180514c6c(local_res10,param_2,pcVar12);
    return uVar9;
  }
  if ((cVar10 + 0xb2U & 0xdf) == 0) {
    uVar9 = FUN_180514db0(local_res10,param_2,pcVar12);
    return uVar9;
  }
  bVar13 = 0;
  if (cVar10 == '0') {
    pcVar8 = (char *)*param_2;
    cVar2 = *pcVar8;
    *param_2 = (longlong)(pcVar8 + 1);
    if ((cVar2 + 0xa8U & 0xdf) == 0) {
      cVar10 = pcVar8[1];
      *param_2 = (longlong)(pcVar8 + 2);
      bVar13 = 1;
      pcVar12 = pcVar8;
    }
    else {
      *param_2 = (longlong)pcVar8;
      if ((cVar2 != '\0') && (*pcVar8 != cVar2)) {
        puVar7 = (undefined4 *)FUN_18051bfb0();
        *puVar7 = 0x16;
        FUN_180527740();
      }
    }
  }
  param_3 = param_3 + 2;
  local_res10[0] = 0;
  bVar3 = false;
  if (cVar10 == '0') {
    bVar3 = true;
    do {
      cVar10 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
    } while (cVar10 == '0');
  }
  piVar11 = param_3;
  while( true ) {
    if ((byte)(cVar10 - 0x30U) < 10) {
      uVar6 = (int)cVar10 - 0x30;
    }
    else if ((byte)(cVar10 + 0x9fU) < 0x1a) {
      uVar6 = (int)cVar10 - 0x57;
    }
    else if ((byte)(cVar10 + 0xbfU) < 0x1a) {
      uVar6 = (int)cVar10 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if ((-(uint)(bVar13 != 0) & 6) + 9 < uVar6) break;
    bVar3 = true;
    if (piVar11 != local_res18 + 0xc2) {
      *(char *)piVar11 = (char)uVar6;
      piVar11 = (int *)((longlong)piVar11 + 1);
    }
    local_res10[0] = local_res10[0] + 1;
    cVar10 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if (cVar10 == *(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    cVar10 = *(char *)*param_2;
    pcVar8 = (char *)*param_2 + 1;
    *param_2 = (longlong)pcVar8;
    if ((piVar11 == param_3) && (cVar10 == '0')) {
      bVar3 = true;
      do {
        cVar10 = *pcVar8;
        local_res10[0] = local_res10[0] + -1;
        pcVar8 = pcVar8 + 1;
        *param_2 = (longlong)pcVar8;
      } while (cVar10 == '0');
    }
    while( true ) {
      if ((cVar10 < '0') || ('9' < cVar10)) {
        if ((byte)(cVar10 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar10 - 0x57;
        }
        else if ((byte)(cVar10 + 0xbfU) < 0x1a) {
          uVar6 = (int)cVar10 - 0x37;
        }
        else {
          uVar6 = 0xffffffff;
        }
      }
      else {
        uVar6 = (int)cVar10 - 0x30;
      }
      if ((-(uint)(bVar13 != 0) & 6) + 9 < uVar6) break;
      bVar3 = true;
      if (piVar11 != local_res18 + 0xc2) {
        *(char *)piVar11 = (char)uVar6;
        piVar11 = (int *)((longlong)piVar11 + 1);
      }
      cVar10 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
    }
  }
  pcVar8 = (char *)(*param_2 + -1);
  *param_2 = (longlong)pcVar8;
  if (!bVar3) {
    if ((cVar10 != '\0') && (*pcVar8 != cVar10)) {
      puVar7 = (undefined4 *)FUN_18051bfb0();
      *puVar7 = 0x16;
      FUN_180527740();
    }
    *param_2 = (longlong)pcVar12;
    if (bVar13 == 0) {
      return 7;
    }
    return 2;
  }
  if ((cVar10 != '\0') && (*pcVar8 != cVar10)) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
  }
  pcVar8 = (char *)*param_2;
  cVar10 = *pcVar8;
  pcVar12 = pcVar8 + 1;
  *param_2 = (longlong)pcVar12;
  if (cVar10 == 'E') {
LAB_180514a81:
    bVar4 = bVar13 ^ 1;
  }
  else if (cVar10 == 'P') {
LAB_180514a7c:
    bVar4 = bVar13;
  }
  else {
    if (cVar10 == 'e') goto LAB_180514a81;
    bVar4 = 0;
    if (cVar10 == 'p') goto LAB_180514a7c;
  }
  iVar5 = 0;
  if (bVar4 != 0) {
    cVar2 = *pcVar12;
    pcVar12 = pcVar8 + 2;
    *param_2 = (longlong)pcVar12;
    if ((cVar2 == '+') || (cVar10 = cVar2, cVar2 == '-')) {
      cVar10 = *pcVar12;
      pcVar12 = pcVar8 + 3;
      *param_2 = (longlong)pcVar12;
    }
    bVar3 = false;
    if (cVar10 != '0') goto LAB_180514ae3;
    do {
      cVar10 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *param_2 = (longlong)pcVar12;
    } while (cVar10 == '0');
    while( true ) {
      bVar3 = true;
LAB_180514ae3:
      if ((cVar10 < '0') || ('9' < cVar10)) {
        if ((byte)(cVar10 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar10 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar10 + 0xbfU)) goto LAB_180514b33;
          uVar6 = (int)cVar10 - 0x37;
        }
      }
      else {
        uVar6 = (int)cVar10 - 0x30;
      }
      if (9 < uVar6) goto LAB_180514b33;
      bVar3 = true;
      iVar5 = uVar6 + iVar5 * 10;
      if (0x1450 < iVar5) break;
      cVar10 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *param_2 = (longlong)pcVar12;
    }
    iVar5 = 0x1451;
LAB_180514b33:
    do {
      if ((byte)(cVar10 - 0x30U) < 10) {
        uVar6 = (int)cVar10 - 0x30;
      }
      else if ((byte)(cVar10 + 0x9fU) < 0x1a) {
        uVar6 = (int)cVar10 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar10 + 0xbfU)) goto LAB_180514b70;
        uVar6 = (int)cVar10 - 0x37;
      }
      if (9 < uVar6) goto LAB_180514b70;
      cVar10 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *param_2 = (longlong)pcVar12;
    } while( true );
  }
LAB_180514ba6:
  *param_2 = (longlong)(pcVar12 + -1);
  if ((cVar10 != '\0') && (pcVar12[-1] != cVar10)) {
    puVar7 = (undefined4 *)FUN_18051bfb0();
    *puVar7 = 0x16;
    FUN_180527740();
  }
  if (piVar11 != param_3) {
    do {
      piVar1 = (int *)((longlong)piVar11 + -1);
      if (*(char *)piVar1 != '\0') break;
      piVar11 = piVar1;
    } while (piVar1 != param_3);
    if (piVar11 != param_3) {
      if (0x1450 < iVar5) {
        return 9;
      }
      if (-0x1451 < iVar5) {
        iVar5 = iVar5 + ((-(uint)(bVar13 != 0) & 3) + 1) * local_res10[0];
        if (0x1450 < iVar5) {
          return 9;
        }
        if (-0x1451 < iVar5) {
          *local_res18 = iVar5;
          local_res18[1] = (int)piVar11 - (int)param_3;
          return (ulonglong)bVar13;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_180514b70:
  if (cVar2 == '-') {
    iVar5 = -iVar5;
  }
  if (!bVar3) {
    *param_2 = (longlong)(pcVar12 + -1);
    if ((cVar10 != '\0') && (pcVar12[-1] != cVar10)) {
      puVar7 = (undefined4 *)FUN_18051bfb0();
      *puVar7 = 0x16;
      FUN_180527740();
    }
    *param_2 = (longlong)pcVar8;
    pcVar12 = pcVar8 + 1;
    cVar10 = *pcVar8;
  }
  goto LAB_180514ba6;
}



/* ===== 180514c6c FUN_180514c6c ===== */

undefined8 FUN_180514c6c(char *param_1,longlong *param_2,char *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  uVar4 = 3;
  while ((cVar2 = *param_1, cVar2 == (&DAT_180577a1c)[lVar3] || (cVar2 == (&DAT_180577a20)[lVar3])))
  {
    lVar3 = lVar3 + 1;
    cVar2 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar2;
    if (lVar3 == 3) {
      lVar3 = *param_2;
      *param_2 = lVar3 + -1;
      if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
        puVar1 = (undefined4 *)FUN_18051bfb0();
        *puVar1 = 0x16;
        FUN_180527740();
      }
      param_3 = (char *)*param_2;
      lVar3 = 0;
      cVar2 = *param_3;
      *param_2 = (longlong)(param_3 + 1);
      *param_1 = cVar2;
      while ((cVar2 == "INITY"[lVar3] || (cVar2 == "inity"[lVar3]))) {
        lVar3 = lVar3 + 1;
        cVar2 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *param_1 = cVar2;
        if (lVar3 == 5) {
          lVar3 = *param_2;
          *param_2 = lVar3 + -1;
          if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
            puVar1 = (undefined4 *)FUN_18051bfb0();
            *puVar1 = 0x16;
            FUN_180527740();
          }
          return 3;
        }
      }
      *param_2 = *param_2 + -1;
      if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
        puVar1 = (undefined4 *)FUN_18051bfb0();
        *puVar1 = 0x16;
        FUN_180527740();
      }
LAB_180514da6:
      *param_1 = '\0';
      *param_2 = (longlong)param_3;
      return uVar4;
    }
  }
  *param_2 = *param_2 + -1;
  if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
  }
  uVar4 = 7;
  goto LAB_180514da6;
}



/* ===== 180514db0 FUN_180514db0 ===== */

/* WARNING: Removing unreachable block (ram,0x000180514f7a) */

undefined8 FUN_180514db0(char *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  
  lVar1 = 0;
  do {
    lVar8 = lVar1;
    cVar3 = *param_1;
    if ((cVar3 != (&DAT_180577a34)[lVar8]) && (cVar3 != (&DAT_180577a38)[lVar8])) {
      *param_2 = *param_2 + -1;
      if ((cVar3 != '\0') && (*(char *)*param_2 != cVar3)) {
        puVar6 = (undefined4 *)FUN_18051bfb0();
        *puVar6 = 0x16;
        FUN_180527740();
      }
      uVar7 = 7;
      goto LAB_180514f8f;
    }
    cVar3 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar3;
    lVar1 = lVar8 + 1;
  } while (lVar8 + 1 != 3);
  lVar1 = *param_2;
  iVar9 = (int)lVar8 + 0x14;
  *param_2 = lVar1 + -1;
  if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
    piVar5 = (int *)FUN_18051bfb0();
    *piVar5 = iVar9;
    FUN_180527740();
  }
  param_3 = (char *)*param_2;
  cVar3 = *param_3;
  *param_2 = (longlong)(param_3 + 1);
  *param_1 = cVar3;
  pcVar2 = (char *)*param_2;
  if (cVar3 == '(') {
    cVar3 = *pcVar2;
    *param_2 = (longlong)(pcVar2 + 1);
    *param_1 = cVar3;
    cVar3 = FUN_180514fe4(param_1,param_2);
    if (cVar3 != '\0') {
      lVar1 = *param_2;
      cVar3 = *param_1;
      *param_2 = lVar1 + -1;
      if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
        piVar5 = (int *)FUN_18051bfb0();
        *piVar5 = iVar9;
        FUN_180527740();
      }
      return 5;
    }
    cVar4 = FUN_180514f9c(param_1,param_2);
    cVar3 = *param_1;
    if (cVar4 != '\0') {
      lVar1 = *param_2;
      *param_2 = lVar1 + -1;
      if ((cVar3 != '\0') && (*(char *)(lVar1 + -1) != cVar3)) {
        piVar5 = (int *)FUN_18051bfb0();
        *piVar5 = iVar9;
        FUN_180527740();
      }
      return 6;
    }
    if (cVar3 != ')') {
      do {
        if (cVar3 == '\0') {
          *param_2 = *param_2 + -1;
LAB_180514f8a:
          uVar7 = 4;
LAB_180514f8f:
          *param_1 = '\0';
          *param_2 = (longlong)param_3;
          return uVar7;
        }
        if ((((9 < (byte)(cVar3 - 0x30U)) && (0x19 < (byte)(cVar3 + 0x9fU))) &&
            (0x19 < (byte)(cVar3 + 0xbfU))) && (cVar3 != '_')) {
          *param_2 = *param_2 + -1;
          if (*(char *)*param_2 != cVar3) {
            piVar5 = (int *)FUN_18051bfb0();
            *piVar5 = iVar9;
            FUN_180527740();
          }
          goto LAB_180514f8a;
        }
        cVar3 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *param_1 = cVar3;
      } while (cVar3 != ')');
    }
  }
  else {
    *param_2 = (longlong)(pcVar2 + -1);
    if ((cVar3 != '\0') && (pcVar2[-1] != cVar3)) {
      piVar5 = (int *)FUN_18051bfb0();
      *piVar5 = iVar9;
      FUN_180527740();
    }
    *param_1 = '\0';
    *param_2 = (longlong)param_3;
  }
  return 4;
}



/* ===== 180514f9c FUN_180514f9c ===== */

undefined8 FUN_180514f9c(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_180577a4c)[lVar3]) && (cVar1 != (&DAT_180577a50)[lVar3]))
    goto LAB_180514fdd;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 4);
  uVar2 = 1;
LAB_180514fdd:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
}



/* ===== 180514fe4 FUN_180514fe4 ===== */

undefined8 FUN_180514fe4(char *param_1,undefined8 *param_2)

{
  char cVar1;
  char *in_RAX;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_180577a3c)[lVar3]) && (cVar1 != (&DAT_180577a44)[lVar3]))
    goto LAB_180515025;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 5);
  uVar2 = 1;
LAB_180515025:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2);
}



/* ===== 18051502c FUN_18051502c ===== */

void FUN_18051502c(undefined8 param_1)

{
  common_atof_l<>(param_1,0);
  return;
}



/* ===== 180515040 _calloc_base ===== */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_180c9ffc8,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_18053a330();
    } while ((iVar1 != 0) && (iVar1 = FUN_180523cb0(dwBytes), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}



/* ===== 180515050 FUN_180515050 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180515050(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulonglong local_38 [7];
  
  bVar2 = *param_2;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  while (bVar2 != 0) {
    pbVar1 = (byte *)((longlong)local_38 + ((longlong)(int)(uint)bVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  iVar3 = 0;
  local_38[0] = local_38[0] | 1;
  bVar2 = *(byte *)((longlong)local_38 + (ulonglong)(*param_1 >> 3)) >> (*param_1 & 7);
  while ((bVar2 & 1) == 0) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + 1;
    bVar2 = *(byte *)((longlong)local_38 + (ulonglong)(*pbVar1 >> 3)) >> (*pbVar1 & 7);
  }
  return (longlong)iVar3;
}



/* ===== 180515100 FUN_180515100 ===== */

/* WARNING: Removing unreachable block (ram,0x0001805153b5) */
/* WARNING: Removing unreachable block (ram,0x0001805153ae) */
/* WARNING: Removing unreachable block (ram,0x0001805153a7) */
/* WARNING: Removing unreachable block (ram,0x0001805153a0) */
/* WARNING: Removing unreachable block (ram,0x000180515399) */
/* WARNING: Removing unreachable block (ram,0x000180515392) */
/* WARNING: Removing unreachable block (ram,0x00018051538b) */
/* WARNING: Removing unreachable block (ram,0x000180515384) */
/* WARNING: Removing unreachable block (ram,0x00018051537d) */
/* WARNING: Removing unreachable block (ram,0x000180515376) */
/* WARNING: Removing unreachable block (ram,0x00018051536f) */
/* WARNING: Removing unreachable block (ram,0x000180515368) */
/* WARNING: Removing unreachable block (ram,0x000180515361) */
/* WARNING: Removing unreachable block (ram,0x00018051535a) */
/* WARNING: Removing unreachable block (ram,0x000180515353) */
/* WARNING: Removing unreachable block (ram,0x000180515209) */
/* WARNING: Removing unreachable block (ram,0x000180515218) */
/* WARNING: Removing unreachable block (ram,0x000180515227) */
/* WARNING: Removing unreachable block (ram,0x000180515236) */
/* WARNING: Removing unreachable block (ram,0x000180515245) */
/* WARNING: Removing unreachable block (ram,0x000180515251) */
/* WARNING: Removing unreachable block (ram,0x00018051525d) */
/* WARNING: Removing unreachable block (ram,0x000180515269) */
/* WARNING: Removing unreachable block (ram,0x000180515275) */
/* WARNING: Removing unreachable block (ram,0x000180515281) */
/* WARNING: Removing unreachable block (ram,0x00018051528d) */
/* WARNING: Removing unreachable block (ram,0x000180515299) */
/* WARNING: Removing unreachable block (ram,0x0001805152a5) */
/* WARNING: Removing unreachable block (ram,0x0001805152b1) */
/* WARNING: Removing unreachable block (ram,0x0001805152bd) */

longlong FUN_180515100(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  ulonglong uVar22;
  undefined1 auVar23 [16];
  longlong lVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  undefined1 auVar36 [16];
  
  uVar22 = (ulonglong)((uint)param_2 & 0xf);
  pauVar21 = (undefined1 (*) [16])(param_2 - uVar22);
  lVar20 = 0;
  auVar34 = *pauVar21;
  switch(uVar22) {
  case 1:
    auVar34 = auVar34 >> 8;
    break;
  case 2:
    auVar34 = auVar34 >> 0x10;
    break;
  case 3:
    auVar34 = auVar34 >> 0x18;
    break;
  case 4:
    auVar34 = auVar34 >> 0x20;
    break;
  case 5:
    auVar34 = auVar34 >> 0x28;
    break;
  case 6:
    auVar34 = auVar34 >> 0x30;
    break;
  case 7:
    auVar34 = auVar34 >> 0x38;
    break;
  case 8:
    auVar34 = auVar34 >> 0x40;
    break;
  case 9:
    auVar34 = auVar34 >> 0x48;
    break;
  case 10:
    auVar34 = auVar34 >> 0x50;
    break;
  case 0xb:
    auVar34 = auVar34 >> 0x58;
    break;
  case 0xc:
    auVar34 = auVar34 >> 0x60;
    break;
  case 0xd:
    auVar34 = auVar34 >> 0x68;
    break;
  case 0xe:
    auVar34 = auVar34 >> 0x70;
    break;
  case 0xf:
    auVar34 = auVar34 >> 0x78;
  }
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
  uVar4 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
  if (uVar4 == 0) {
    if (uVar22 == 0) {
      if ((*pauVar21)[1] != '\0') {
        lVar20 = FUN_180515050();
        return lVar20;
      }
      goto LAB_1805153c2;
    }
  }
  else {
    uVar3 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    lVar26 = auVar34._8_8_;
    switch(-uVar3) {
    case 0:
      auVar34 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar27._0_8_ = auVar34._0_8_ << 8;
      auVar27._8_8_ = lVar26 << 8 | auVar34._0_8_ >> 0x38;
      auVar34 = auVar27 >> 8;
      break;
    case 0xfffffff2:
      auVar28._0_8_ = auVar34._0_8_ << 0x10;
      auVar28._8_8_ = lVar26 << 0x10 | auVar34._0_8_ >> 0x30;
      auVar34 = auVar28 >> 0x10;
      break;
    case 0xfffffff3:
      auVar29._0_8_ = auVar34._0_8_ << 0x18;
      auVar29._8_8_ = lVar26 << 0x18 | auVar34._0_8_ >> 0x28;
      auVar34 = auVar29 >> 0x18;
      break;
    case 0xfffffff4:
      auVar30._0_8_ = auVar34._0_8_ << 0x20;
      auVar30._8_8_ = lVar26 << 0x20 | auVar34._0_8_ >> 0x20;
      auVar34 = auVar30 >> 0x20;
      break;
    case 0xfffffff5:
      auVar31._0_8_ = auVar34._0_8_ << 0x28;
      auVar31._8_8_ = lVar26 << 0x28 | auVar34._0_8_ >> 0x18;
      auVar34 = auVar31 >> 0x28;
      break;
    case 0xfffffff6:
      auVar32._0_8_ = auVar34._0_8_ << 0x30;
      auVar32._8_8_ = lVar26 << 0x30 | auVar34._0_8_ >> 0x10;
      auVar34 = auVar32 >> 0x30;
      break;
    case 0xfffffff7:
      auVar33._0_8_ = auVar34._0_8_ << 0x38;
      auVar33._8_8_ = lVar26 << 0x38 | auVar34._0_8_ >> 8;
      auVar34 = auVar33 >> 0x38;
      break;
    case 0xfffffff8:
      auVar34._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar34._0_8_ << 8;
      auVar34 = (auVar5 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar34._0_8_ << 0x10;
      auVar34 = (auVar6 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar34._0_8_ << 0x18;
      auVar34 = (auVar7 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar34._0_8_ << 0x20;
      auVar34 = (auVar8 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar34._0_8_ << 0x28;
      auVar34 = (auVar9 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar34._0_8_ << 0x30;
      auVar34 = (auVar10 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar34._0_8_ << 0x38;
      auVar34 = (auVar11 << 0x40) >> 0x78;
    }
    if (uVar22 == 0 || (ulonglong)uVar3 < 0x10 - uVar22) goto LAB_1805153c2;
  }
  auVar36 = pauVar21[1];
  auVar24[0] = -(auVar36[0] == '\0');
  auVar24[1] = -(auVar36[1] == '\0');
  auVar24[2] = -(auVar36[2] == '\0');
  auVar24[3] = -(auVar36[3] == '\0');
  auVar24[4] = -(auVar36[4] == '\0');
  auVar24[5] = -(auVar36[5] == '\0');
  auVar24[6] = -(auVar36[6] == '\0');
  lVar26 = auVar36._8_8_;
  auVar24[7] = -(auVar36[7] == '\0');
  auVar24[8] = -(auVar36[8] == '\0');
  auVar24[9] = -(auVar36[9] == '\0');
  auVar24[10] = -(auVar36[10] == '\0');
  auVar24[0xb] = -(auVar36[0xb] == '\0');
  auVar24[0xc] = -(auVar36[0xc] == '\0');
  auVar24[0xd] = -(auVar36[0xd] == '\0');
  auVar24[0xe] = -(auVar36[0xe] == '\0');
  auVar24[0xf] = -(auVar36[0xf] == '\0');
  uVar4 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  uVar35 = auVar36._0_8_;
  if (uVar4 != 0) {
    uVar3 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    if ((uVar3 - uVar22) + 0x10 < 0x11) {
      switch(-uVar3) {
      case 0:
        auVar36 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar36._0_8_ = uVar35 << 8;
        auVar36._8_8_ = lVar26 << 8 | uVar35 >> 0x38;
        break;
      case 0xfffffff2:
        auVar36._0_8_ = uVar35 << 0x10;
        auVar36._8_8_ = lVar26 << 0x10 | uVar35 >> 0x30;
        break;
      case 0xfffffff3:
        auVar36._0_8_ = uVar35 << 0x18;
        auVar36._8_8_ = lVar26 << 0x18 | uVar35 >> 0x28;
        break;
      case 0xfffffff4:
        auVar36._0_8_ = uVar35 << 0x20;
        auVar36._8_8_ = lVar26 << 0x20 | uVar35 >> 0x20;
        break;
      case 0xfffffff5:
        auVar36._0_8_ = uVar35 << 0x28;
        auVar36._8_8_ = lVar26 << 0x28 | uVar35 >> 0x18;
        break;
      case 0xfffffff6:
        auVar36._0_8_ = uVar35 << 0x30;
        auVar36._8_8_ = lVar26 << 0x30 | uVar35 >> 0x10;
        break;
      case 0xfffffff7:
        auVar36._0_8_ = uVar35 << 0x38;
        auVar36._8_8_ = lVar26 << 0x38 | uVar35 >> 8;
        break;
      case 0xfffffff8:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar35;
        auVar36 = auVar12 << 0x40;
        break;
      case 0xfffffff9:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar35 << 8;
        auVar36 = auVar13 << 0x40;
        break;
      case 0xfffffffa:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar35 << 0x10;
        auVar36 = auVar14 << 0x40;
        break;
      case 0xfffffffb:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar35 << 0x18;
        auVar36 = auVar15 << 0x40;
        break;
      case 0xfffffffc:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar35 << 0x20;
        auVar36 = auVar16 << 0x40;
        break;
      case 0xfffffffd:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar35 << 0x28;
        auVar36 = auVar17 << 0x40;
        break;
      case 0xfffffffe:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar35 << 0x30;
        auVar36 = auVar18 << 0x40;
        break;
      case 0xffffffff:
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar35 << 0x38;
        auVar36 = auVar19 << 0x40;
      }
      auVar34 = auVar34 | auVar36;
LAB_1805153c2:
      cVar2 = *param_1;
      while ((cVar2 != '\0' &&
             (auVar25[0] = -(cVar2 == auVar34[0]), auVar25[1] = -(cVar2 == auVar34[1]),
             auVar25[2] = -(cVar2 == auVar34[2]), auVar25[3] = -(cVar2 == auVar34[3]),
             auVar25[4] = -(cVar2 == auVar34[4]), auVar25[5] = -(cVar2 == auVar34[5]),
             auVar25[6] = -(cVar2 == auVar34[6]), auVar25[7] = -(cVar2 == auVar34[7]),
             auVar25[8] = -(cVar2 == auVar34[8]), auVar25[9] = -(cVar2 == auVar34[9]),
             auVar25[10] = -(cVar2 == auVar34[10]), auVar25[0xb] = -(cVar2 == auVar34[0xb]),
             auVar25[0xc] = -(cVar2 == auVar34[0xc]), auVar25[0xd] = -(cVar2 == auVar34[0xd]),
             auVar25[0xe] = -(cVar2 == auVar34[0xe]), auVar25[0xf] = -(cVar2 == auVar34[0xf]),
             (((((((((((((((SUB161(auVar25 >> 7,0) & 1) == 0 && (SUB161(auVar25 >> 0xf,0) & 1) == 0)
                         && (SUB161(auVar25 >> 0x17,0) & 1) == 0) &&
                        (SUB161(auVar25 >> 0x1f,0) & 1) == 0) &&
                       (SUB161(auVar25 >> 0x27,0) & 1) == 0) && (SUB161(auVar25 >> 0x2f,0) & 1) == 0
                      ) && (SUB161(auVar25 >> 0x37,0) & 1) == 0) &&
                    (SUB161(auVar25 >> 0x3f,0) & 1) == 0) && (SUB161(auVar25 >> 0x47,0) & 1) == 0)
                  && (SUB161(auVar25 >> 0x4f,0) & 1) == 0) && (SUB161(auVar25 >> 0x57,0) & 1) == 0)
                && (SUB161(auVar25 >> 0x5f,0) & 1) == 0) && (SUB161(auVar25 >> 0x67,0) & 1) == 0) &&
              (SUB161(auVar25 >> 0x6f,0) & 1) == 0) && (SUB161(auVar25 >> 0x77,0) & 1) == 0) &&
             -1 < auVar25[0xf]))) {
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        lVar20 = lVar20 + 1;
        cVar2 = *pcVar1;
      }
      return lVar20;
    }
  }
  lVar20 = FUN_180515050(param_1,param_2);
  return lVar20;
}



/* ===== 1805154d0 FUN_1805154d0 ===== */

undefined8 FUN_1805154d0(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = FUN_180529860();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  __acrt_update_locale_info(lVar1,local_res8);
  return *(undefined8 *)(local_res8[0] + 0xf8);
}



/* ===== 180515504 FUN_180515504 ===== */

undefined4 FUN_180515504(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_18051305c(local_48,&local_58,param_3,1);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 1805155b8 FUN_1805155b8 ===== */

undefined8 FUN_1805155b8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_180513ad4(local_48,&local_58,param_3,1);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 18051566c FUN_18051566c ===== */

undefined4 FUN_18051566c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_18051305c(local_48,&local_58,param_3,0);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 180515720 FUN_180515720 ===== */

undefined8 FUN_180515720(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_180513ad4(local_48,&local_58,param_3,0);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 1805157d4 FUN_1805157d4 ===== */

undefined4 FUN_1805157d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_180513338(local_48,&local_58,param_3,1);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 180515888 FUN_180515888 ===== */

undefined8 FUN_180515888(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180c9f7dc == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1809198b8._0_4_;
    uStack_2c = PTR_PTR_1809198b8._4_4_;
    uStack_28 = PTR_DAT_1809198c0._0_4_;
    uStack_24 = PTR_DAT_1809198c0._4_4_;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_180513db0(local_48,&local_58,param_3,0);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_1804f84e0(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== 180515940 FUN_180515940 ===== */

ulonglong FUN_180515940(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 in_XMM0 [16];
  
  dVar3 = in_XMM0._0_8_;
  if (dVar3 == 0.0) {
    *param_2 = 0;
    return 0;
  }
  if ((((ulonglong)dVar3 & 0x7ff0000000000000) != 0) || (((ulonglong)dVar3 & 0xfffffffffffff) == 0))
  {
    *param_2 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
    return (ulonglong)dVar3 & 0xbfefffffffffffff | 0x3fe0000000000000;
  }
  uVar2 = (ulonglong)dVar3 & 0xfffffffffffff;
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar2 = uVar2 << (0x34U - (char)lVar1 & 0x3f) & 0xffefffffffffffff;
  *param_2 = (int)lVar1 + -0x431;
  if (dVar3 < 0.0) {
    uVar2 = uVar2 | 0x8000000000000000;
  }
  return uVar2 & 0xbfefffffffffffff | 0x3fe0000000000000;
}



/* ===== 180515a40 FUN_180515a40 ===== */

double FUN_180515a40(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  
  dVar4 = in_XMM0._0_8_;
  if (param_2 == (int *)0x0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    return 0.0;
  }
  if (((ulonglong)dVar4 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    *param_2 = -1;
    if ((((longlong)dVar4 + 0x10000000000000U & 0x7fffffffffffffff) != 0) &&
       (((ulonglong)dVar4 & 0x7ff8000000000000) != 0x7ff8000000000000)) {
      FUN_18052eff0(0x1f80,0xffc0);
      dVar4 = (double)FUN_180526720(8);
      return dVar4;
    }
  }
  else {
    if (dVar4 == 0.0) {
      *param_2 = 0;
      return dVar4;
    }
    if ((((ulonglong)dVar4 & 0x7ff0000000000000) == 0) &&
       (((ulonglong)dVar4 & 0xfffffffffffff) != 0)) {
      uVar3 = (ulonglong)dVar4 & 0xfffffffffffff;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar3 = uVar3 << (0x34U - (char)lVar1 & 0x3f) & 0xffefffffffffffff;
      *param_2 = (int)lVar1 + -0x431;
      if (dVar4 < 0.0) {
        uVar3 = uVar3 | 0x8000000000000000;
      }
      return (double)(uVar3 & 0xbfefffffffffffff | 0x3fe0000000000000);
    }
    dVar4 = (double)((ulonglong)dVar4 & 0xbfefffffffffffff | 0x3fe0000000000000);
    *param_2 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
  }
  return dVar4;
}



/* ===== 180515c10 FUN_180515c10 ===== */

undefined4 FUN_180515c10(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_180515c73;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_180515c73;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      psVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *psVar4 = 0;
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = 0;
        return 0x50;
      }
      *param_1 = 0;
      puVar2 = (undefined4 *)FUN_18051bfb0();
      *puVar2 = 0x22;
      FUN_180527740();
      return 0x22;
    }
    *param_1 = 0;
  }
LAB_180515c73:
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 0x16;
  FUN_180527740();
  return 0x16;
}



/* ===== 180515d54 FUN_180515d54 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180515d54(undefined8 *param_1)

{
  DWORD dwExitCode;
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    dwExitCode = GetLastError();
                    /* WARNING: Subroutine does not return */
    ExitThread(dwExitCode);
  }
  lVar3 = FUN_180529860();
  *(undefined8 **)(lVar3 + 0x3c0) = param_1;
  iVar1 = FUN_18052f0c0();
  if (iVar1 == 2) {
    iVar1 = FUN_18052ccf0(1);
    *(bool *)(param_1 + 4) = iVar1 == 0;
  }
  uVar2 = (*(code *)*param_1)(param_1[1]);
  uVar2 = FUN_180515f64(uVar2);
  FUN_18051c3c0(uVar2);
  return;
}



/* ===== 180515dbc common_end_thread ===== */

/* Library Function - Single Match
    void __cdecl common_end_thread(unsigned int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl common_end_thread(uint param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1805298c0();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x3c0), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x20) != '\0') {
      FUN_18052cd40();
    }
    if ((longlong)*(HANDLE *)(lVar1 + 0x10) - 1U < 0xfffffffffffffffe) {
      CloseHandle(*(HANDLE *)(lVar1 + 0x10));
    }
    if ((undefined1 *)((longlong)&(*(HMODULE *)(lVar1 + 0x18))[-1].unused + 3U) <
        (undefined1 *)0xfffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
      FreeLibraryAndExitThread(*(HMODULE *)(lVar1 + 0x18),param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(param_1);
}



/* ===== 180515e20 FUN_180515e20 ===== */

undefined8 * FUN_180515e20(LPCWSTR param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_calloc_base(1);
  FUN_1805277b0(0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    GetModuleHandleExW(4,param_1,(HMODULE *)(puVar1 + 3));
  }
  return puVar1;
}



/* ===== 180515e84 FUN_180515e84 ===== */

HANDLE FUN_180515e84(LPSECURITY_ATTRIBUTES param_1,ulonglong param_2,longlong param_3,
                    undefined8 param_4,DWORD param_5,DWORD *param_6)

{
  DWORD DVar1;
  undefined4 *puVar2;
  LPVOID lpParameter;
  HANDLE pvVar3;
  DWORD local_res18 [2];
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    pvVar3 = (HANDLE)0x0;
  }
  else {
    lpParameter = (LPVOID)FUN_180515e20(param_3,param_4);
    pvVar3 = (HANDLE)0x0;
    if (lpParameter != (LPVOID)0x0) {
      local_res18[0] = 0;
      pvVar3 = CreateThread(param_1,param_2 & 0xffffffff,FUN_180515d54,lpParameter,param_5,
                            local_res18);
      if (pvVar3 == (HANDLE)0x0) {
        DVar1 = GetLastError();
        FUN_18051bf40(DVar1);
        if (*(HANDLE *)((longlong)lpParameter + 0x10) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)((longlong)lpParameter + 0x10));
        }
        if (*(HMODULE *)((longlong)lpParameter + 0x18) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)((longlong)lpParameter + 0x18));
        }
        FUN_1805277b0(lpParameter);
        pvVar3 = (HANDLE)0x0;
      }
      else if (param_6 != (DWORD *)0x0) {
        *param_6 = local_res18[0];
      }
    }
  }
  return pvVar3;
}



/* ===== 180515f64 FUN_180515f64 ===== */

void FUN_180515f64(uint param_1)

{
  code *pcVar1;
  
  common_end_thread(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180515f70 FUN_180515f70 ===== */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180515f70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180529860();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 180515f90 FUN_180515f90 ===== */

undefined8 FUN_180515f90(wchar_t *param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  HANDLE hObject;
  undefined8 uVar4;
  int local_res10 [2];
  undefined4 uVar5;
  
  if (param_2 != (int *)0x0) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    if (param_1 != (wchar_t *)0x0) {
      uVar5 = 0;
      hObject = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        cVar1 = FUN_180516524(param_1);
        if (cVar1 == '\0') {
          FUN_18051bf40(2);
        }
        else {
          uVar2 = convert_to_stat_mode(0x10,param_1);
          local_res10[0] = 0;
          *(ushort *)((longlong)param_2 + 6) = uVar2;
          *(undefined2 *)(param_2 + 2) = 1;
          cVar1 = FUN_1805164c4(param_1,local_res10);
          if (cVar1 != '\0') {
            param_2[4] = local_res10[0] + -1;
            *param_2 = local_res10[0] + -1;
            uVar4 = thunk_FUN_18052f7d4(0x7bc,1,1,0,0,0,CONCAT44(uVar5,0xffffffff));
            *(undefined8 *)(param_2 + 10) = uVar4;
            *(undefined8 *)(param_2 + 8) = uVar4;
            *(undefined8 *)(param_2 + 0xc) = uVar4;
            return 0;
          }
        }
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        return 0xffffffff;
      }
      cVar1 = FUN_180516130(param_1,0xffffffff,hObject,param_2);
      if (cVar1 == '\0') {
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        CloseHandle(hObject);
        return 0xffffffff;
      }
      CloseHandle(hObject);
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_18051bf8c();
  *puVar3 = 0;
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 0x16;
  FUN_180527740();
  return 0xffffffff;
}



/* ===== 180516130 FUN_180516130 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180516130(wchar_t *param_1,int param_2,HANDLE param_3,int *param_4)

{
  ushort uVar1;
  DWORD DVar2;
  BOOL BVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  uint uVar7;
  longlong lVar8;
  undefined1 auStackY_a8 [32];
  DWORD local_78 [2];
  _BY_HANDLE_FILE_INFORMATION local_70;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStackY_a8;
  DVar2 = GetFileType(param_3);
  uVar7 = DVar2 & 0xffff7fff;
  if (uVar7 == 1) {
    *(undefined2 *)(param_4 + 2) = 1;
    if (param_1 != (wchar_t *)0x0) {
      local_78[0] = 0;
      puVar4 = (undefined4 *)FUN_1805164c4(param_1,local_78);
      if ((char)puVar4 == '\0') goto LAB_180516253;
      param_4[4] = local_78[0] - 1;
      *param_4 = local_78[0] - 1;
    }
    local_70.dwFileAttributes = 0;
    local_70.ftCreationTime.dwLowDateTime = 0;
    local_70.ftCreationTime.dwHighDateTime = 0;
    local_70.ftLastAccessTime.dwLowDateTime = 0;
    local_70.nFileIndexLow = 0;
    local_70.ftLastAccessTime.dwHighDateTime = 0;
    local_70.ftLastWriteTime.dwLowDateTime = 0;
    local_70.ftLastWriteTime.dwHighDateTime = 0;
    local_70.dwVolumeSerialNumber = 0;
    local_70.nFileSizeHigh = 0;
    local_70.nFileSizeLow = 0;
    local_70.nNumberOfLinks = 0;
    local_70.nFileIndexHigh = 0;
    BVar3 = GetFileInformationByHandle(param_3,&local_70);
    if (BVar3 == 0) {
LAB_180516257:
      DVar2 = GetLastError();
      puVar4 = (undefined4 *)FUN_18051bf40(DVar2);
LAB_180516253:
      return (ulonglong)puVar4 & 0xffffffffffffff00;
    }
    uVar1 = convert_to_stat_mode(local_70.dwFileAttributes,param_1);
    *(ushort *)((longlong)param_4 + 6) = uVar1;
    uVar5 = FUN_1805162e0(CONCAT44(local_70.ftLastWriteTime.dwHighDateTime,
                                   local_70.ftLastWriteTime.dwLowDateTime),0);
    *(undefined8 *)(param_4 + 10) = uVar5;
    uVar5 = FUN_1805162e0(CONCAT44(local_70.ftLastAccessTime.dwHighDateTime,
                                   local_70.ftLastAccessTime.dwLowDateTime),uVar5);
    *(undefined8 *)(param_4 + 8) = uVar5;
    uVar5 = FUN_1805162e0(CONCAT44(local_70.ftCreationTime.dwHighDateTime,
                                   local_70.ftCreationTime.dwLowDateTime),
                          *(undefined8 *)(param_4 + 10));
    *(undefined8 *)(param_4 + 0xc) = uVar5;
    param_4[6] = 0;
    param_4[7] = 0;
    if (0x7fffffff < local_70.nFileSizeHigh) {
      puVar4 = (undefined4 *)FUN_18051bfb0();
      *puVar4 = 0x84;
      goto LAB_180516253;
    }
    uVar6 = (ulonglong)local_70.nFileSizeLow;
    lVar8 = CONCAT44(local_70.nFileSizeHigh,local_70.nFileSizeLow);
  }
  else {
    if (1 < uVar7 - 2) {
      if ((DVar2 & 0xffff7fff) == 0) {
        puVar4 = (undefined4 *)FUN_18051bfb0();
        *puVar4 = 9;
        goto LAB_180516253;
      }
      goto LAB_180516257;
    }
    *(undefined2 *)(param_4 + 2) = 1;
    uVar6 = 0x1000;
    param_4[4] = param_2;
    *param_4 = param_2;
    if (uVar7 == 2) {
      uVar6 = 0x2000;
    }
    *(short *)((longlong)param_4 + 6) = (short)uVar6;
    if (uVar7 == 2) goto LAB_1805162b9;
    local_78[0] = 0;
    BVar3 = PeekNamedPipe(param_3,(LPVOID)0x0,0,(LPDWORD)0x0,local_78,(LPDWORD)0x0);
    uVar6 = CONCAT44(extraout_var,BVar3);
    if (BVar3 == 0) goto LAB_1805162b9;
    lVar8 = (longlong)(int)local_78[0];
  }
  *(longlong *)(param_4 + 6) = lVar8;
LAB_1805162b9:
  return CONCAT71((int7)(uVar6 >> 8),1);
}



/* ===== 1805162e0 FUN_1805162e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1805162e0(FILETIME param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_50;
  undefined4 local_48;
  FILETIME local_38;
  _SYSTEMTIME local_30;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  if ((param_1.dwLowDateTime != 0) || (param_1.dwHighDateTime != 0)) {
    local_20.wYear = 0;
    local_20.wMonth = 0;
    local_20.wDayOfWeek = 0;
    local_20.wDay = 0;
    local_20.wHour = 0;
    local_20.wMinute = 0;
    local_20.wSecond = 0;
    local_20.wMilliseconds = 0;
    local_30.wYear = 0;
    local_30.wMonth = 0;
    local_30.wDayOfWeek = 0;
    local_30.wDay = 0;
    local_30.wHour = 0;
    local_30.wMinute = 0;
    local_30.wSecond = 0;
    local_30.wMilliseconds = 0;
    local_38 = param_1;
    BVar1 = FileTimeToSystemTime(&local_38,&local_20);
    if ((BVar1 != 0) &&
       (BVar1 = SystemTimeToTzSpecificLocalTime((TIME_ZONE_INFORMATION *)0x0,&local_20,&local_30),
       BVar1 != 0)) {
      local_48 = 0xffffffff;
      local_50 = (uint)local_30.wSecond;
      local_58 = (uint)local_30.wMinute;
      uVar2 = thunk_FUN_18052f7d4((ulonglong)local_30.wYear,local_30.wMonth,local_30.wDay,
                                  (ulonglong)local_30.wHour);
      return uVar2;
    }
    param_2 = 0xffffffffffffffff;
  }
  return param_2;
}



/* ===== 180516388 convert_to_stat_mode ===== */

/* Library Function - Single Match
    unsigned short __cdecl convert_to_stat_mode(int,wchar_t const * __ptr64 const)
   
   Library: Visual Studio 2019 Release */

ushort __cdecl convert_to_stat_mode(int param_1,wchar_t *param_2)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  ushort uVar7;
  
  bVar2 = true;
  if (((uint)param_1 >> 4 & 1) == 0) {
    if (param_2 != (wchar_t *)0x0) {
      if (((0x19 < (ushort)(*param_2 + L'﾿')) &&
          (((ushort)*param_2 < 0x61 || (0x7a < (ushort)*param_2)))) ||
         (bVar1 = true, param_2[1] != L':')) {
        bVar1 = false;
      }
      pwVar6 = param_2;
      if (bVar1) {
        pwVar6 = param_2 + 2;
      }
      if ((*pwVar6 == L'\0') || (((*pwVar6 == L'\\' || (*pwVar6 == L'/')) && (pwVar6[1] == L'\0'))))
      goto LAB_180516406;
    }
    uVar7 = 0x8100;
  }
  else {
LAB_180516406:
    uVar7 = 0x4140;
  }
  uVar7 = ~((short)param_1 << 7) & 0x80U | uVar7;
  if (param_2 != (wchar_t *)0x0) {
    lVar5 = FUN_18053e870(param_2,0x2e);
    if (lVar5 != 0) {
      iVar4 = FUN_18052f5e0(lVar5,L".exe");
      if (iVar4 == 0) goto LAB_180516484;
      iVar4 = FUN_18052f5e0(lVar5,L".cmd");
      if (iVar4 == 0) goto LAB_180516484;
      iVar4 = FUN_18052f5e0(lVar5,L".bat");
      if (iVar4 == 0) goto LAB_180516484;
      iVar4 = FUN_18052f5e0(lVar5,L".com");
      if (iVar4 == 0) goto LAB_180516484;
    }
  }
  bVar2 = false;
LAB_180516484:
  uVar3 = uVar7 | 0x40;
  if (!bVar2) {
    uVar3 = uVar7;
  }
  return uVar3 >> 6 & 7 | uVar3 >> 3 & 0x38 | uVar3;
}



/* ===== 1805164c4 FUN_1805164c4 ===== */

ulonglong FUN_1805164c4(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  uint uVar4;
  
  *param_2 = 0;
  uVar1 = *param_1;
  uVar4 = (uint)uVar1;
  if (((uVar1 - 0x41 < 0x1a) || (uVar1 - 0x61 < 0x1a)) && (param_1[1] == 0x3a)) {
    if (param_1[2] == 0) {
      uVar3 = FUN_18051bf40(2);
      return uVar3 & 0xffffffffffffff00;
    }
    if (uVar1 - 0x41 < 0x1a) {
      uVar4 = uVar1 + 0x20;
    }
    uVar3 = (ulonglong)(uVar4 - 0x60);
  }
  else {
    iVar2 = _getdrive();
    uVar3 = CONCAT44(extraout_var,iVar2);
  }
  *param_2 = (int)uVar3;
  return CONCAT71((int7)(uVar3 >> 8),1);
}



/* ===== 180516524 FUN_180516524 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_180516524(LPCWSTR param_1)

{
  undefined4 uVar1;
  short sVar2;
  UINT UVar3;
  longlong lVar4;
  undefined4 *puVar5;
  short *psVar6;
  int *piVar7;
  short *psVar8;
  ulonglong uVar9;
  undefined1 auStack_268 [48];
  undefined1 local_238 [528];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_268;
  lVar4 = FUN_18052f520(param_1,&DAT_180577aa8);
  if (lVar4 == 0) {
    return false;
  }
  psVar8 = (short *)0x0;
  puVar5 = (undefined4 *)FUN_18051bfb0();
  uVar1 = *puVar5;
  puVar5 = (undefined4 *)FUN_18051bfb0();
  *puVar5 = 0;
  psVar6 = (short *)FUN_18052f46c(local_238,param_1,0x104);
  if (psVar6 == (short *)0x0) {
    piVar7 = (int *)FUN_18051bfb0();
    if (*piVar7 != 0x22) goto LAB_180516697;
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = uVar1;
    psVar8 = (short *)FUN_18052f46c(0,param_1,0);
    psVar6 = psVar8;
    if (psVar8 == (short *)0x0) goto LAB_180516697;
  }
  else {
    puVar5 = (undefined4 *)FUN_18051bfb0();
    *puVar5 = uVar1;
  }
  uVar9 = 0xffffffffffffffff;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (psVar6[lVar4] != 0);
  if (lVar4 == 3) {
LAB_180516679:
    UVar3 = GetDriveTypeW(param_1);
    thunk_FUN_1805277b0(psVar8);
    return 1 < UVar3;
  }
  do {
    uVar9 = uVar9 + 1;
  } while (psVar6[uVar9] != 0);
  if ((((4 < uVar9) && ((*psVar6 == 0x5c || (*psVar6 == 0x2f)))) &&
      ((psVar6[1] == 0x5c || (psVar6[1] == 0x2f)))) && ((psVar6[2] != 0x5c && (psVar6[2] != 0x2f))))
  {
    for (psVar6 = psVar6 + 3; ((sVar2 = *psVar6, sVar2 != 0 && (sVar2 != 0x5c)) && (sVar2 != 0x2f));
        psVar6 = psVar6 + 1) {
    }
    if (sVar2 != 0) {
      psVar6 = psVar6 + 1;
      sVar2 = *psVar6;
      if (sVar2 != 0) {
        do {
          if ((sVar2 == 0x5c) || (sVar2 == 0x2f)) break;
          psVar6 = psVar6 + 1;
          sVar2 = *psVar6;
        } while (sVar2 != 0);
        if ((sVar2 == 0) || (psVar6[1] == 0)) goto LAB_180516679;
      }
    }
  }
LAB_180516697:
  thunk_FUN_1805277b0(psVar8);
  return false;
}



/* ===== 1805166cc thunk_FUN_180515f90 ===== */

undefined8 thunk_FUN_180515f90(wchar_t *param_1,int *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  HANDLE hObject;
  undefined8 uVar4;
  int aiStackX_10 [2];
  undefined4 uVar5;
  
  if (param_2 != (int *)0x0) {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    if (param_1 != (wchar_t *)0x0) {
      uVar5 = 0;
      hObject = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        cVar1 = FUN_180516524(param_1);
        if (cVar1 == '\0') {
          FUN_18051bf40(2);
        }
        else {
          uVar2 = convert_to_stat_mode(0x10,param_1);
          aiStackX_10[0] = 0;
          *(ushort *)((longlong)param_2 + 6) = uVar2;
          *(undefined2 *)(param_2 + 2) = 1;
          cVar1 = FUN_1805164c4(param_1,aiStackX_10);
          if (cVar1 != '\0') {
            param_2[4] = aiStackX_10[0] + -1;
            *param_2 = aiStackX_10[0] + -1;
            uVar4 = thunk_FUN_18052f7d4(0x7bc,1,1,0,0,0,CONCAT44(uVar5,0xffffffff));
            *(undefined8 *)(param_2 + 10) = uVar4;
            *(undefined8 *)(param_2 + 8) = uVar4;
            *(undefined8 *)(param_2 + 0xc) = uVar4;
            return 0;
          }
        }
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        return 0xffffffff;
      }
      cVar1 = FUN_180516130(param_1,0xffffffff,hObject,param_2);
      if (cVar1 == '\0') {
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        CloseHandle(hObject);
        return 0xffffffff;
      }
      CloseHandle(hObject);
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_18051bf8c();
  *puVar3 = 0;
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 0x16;
  FUN_180527740();
  return 0xffffffff;
}



/* ===== 1805166e0 FUN_1805166e0 ===== */

int FUN_1805166e0(undefined4 param_1)

{
  short sVar1;
  double dVar2;
  
  sVar1 = FUN_180526600();
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      dVar2 = (double)FUN_1805190d0(param_1);
      if ((DAT_1808ace48 <= dVar2) && (dVar2 <= DAT_1808ac9c8)) {
        return (int)dVar2;
      }
    }
    FUN_180526a50(1);
  }
  return 0;
}



/* ===== 180516750 FUN_180516750 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180516750(ulonglong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double local_18;
  
  fVar8 = (float)param_1;
  dVar11 = (double)fVar8;
  dVar12 = (double)param_2;
  dVar6 = ABS(dVar11);
  uVar2 = (uint)((ulonglong)dVar11 >> 0x34) & 0x7ff;
  dVar7 = ABS(dVar12);
  uVar4 = (uint)((ulonglong)dVar12 >> 0x34) & 0x7ff;
  if (uVar2 == 0) {
LAB_180516a55:
    if (uVar2 < 0x7ff) {
      if (0x7fe < uVar4) {
        if (((ulonglong)dVar12 & 0xfffffffffffff) == 0) {
          return param_1;
        }
        uVar3 = FUN_18052fdd0(param_2);
        return uVar3;
      }
      if ((uVar2 == 0) && (uVar4 != 0)) {
        return param_1;
      }
      goto LAB_180516ab5;
    }
  }
  else if (uVar2 < 0x7ff) {
    if (uVar4 - 1 < 0x7fe) {
      if (dVar6 == dVar7) {
        return (ulonglong)(uint)(float)(double)((ulonglong)dVar11 & 0x8000000000000000);
      }
      if ((ulonglong)dVar6 < (ulonglong)dVar7) {
        if (dVar7 * DAT_1808ac4a8 < dVar6) {
          dVar6 = dVar6 - dVar7;
        }
        if (fVar8 < 0.0) {
          dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ DAT_1808adeb0._4_4_,
                                   SUB84(dVar6,0) ^ (uint)DAT_1808adeb0);
        }
        return (ulonglong)(uint)(float)dVar6;
      }
      if (uVar4 < uVar2) {
        iVar5 = 0;
        iVar1 = (int)(uVar2 - uVar4) / 0x18;
        dVar7 = dVar7 * (double)((longlong)(iVar1 * 0x18 + 0x3ff) << 0x34);
        if (7 < iVar1) {
          uVar2 = (iVar1 - 8U >> 3) + 1;
          uVar3 = (ulonglong)uVar2;
          iVar5 = uVar2 * 8;
          do {
            dVar11 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar11 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar11) * dVar11;
            dVar11 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar11 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar11) * dVar11;
            dVar11 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar11 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar11) * dVar11;
            dVar11 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar11 * 5.9604644775390625e-08;
            dVar6 = dVar6 - (double)(int)(dVar6 / dVar11) * dVar11;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        if (iVar5 < iVar1) {
          uVar3 = (ulonglong)(uint)(iVar1 - iVar5);
          do {
            dVar11 = (double)(int)(dVar6 / dVar7) * dVar7;
            dVar7 = dVar7 * 5.9604644775390625e-08;
            dVar6 = dVar6 - dVar11;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      local_18 = dVar6 - (double)(int)(dVar6 / dVar7) * dVar7;
      if ((dVar7 * DAT_1808ac4a8 < local_18) ||
         ((local_18 == dVar7 * DAT_1808ac4a8 && (((int)(dVar6 / dVar7) & 1U) != 0)))) {
        local_18 = local_18 - dVar7;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_18;
      if (fVar8 < 0.0) {
        auVar9._0_4_ = SUB84(local_18,0) ^ (uint)DAT_1808adeb0;
        auVar9._4_4_ = (uint)((ulonglong)local_18 >> 0x20) ^ DAT_1808adeb0._4_4_;
        auVar9._8_4_ = _UNK_1808adeb8;
        auVar9._12_4_ = _UNK_1808adebc;
      }
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = (float)auVar9._0_8_;
      return auVar10._0_8_;
    }
    goto LAB_180516a55;
  }
  if (((ulonglong)dVar11 & 0xfffffffffffff) != 0) {
    uVar3 = FUN_18052fdd0(param_1 & 0xffffffff);
    return uVar3;
  }
LAB_180516ab5:
  uVar3 = FUN_18052fc70("remainderf",6,0xffc00000,1,8,0x21,fVar8,param_2,2);
  return uVar3;
}



/* ===== 180516b00 FUN_180516b00 ===== */

ulonglong FUN_180516b00(float param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar8;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  
  if (((byte)DAT_180c9fd94 & 3) != 3) {
    uVar8 = FUN_180516b20();
    return uVar8;
  }
  auVar25._0_8_ = (double)param_2;
  auVar25._8_8_ = in_XMM1_Qb;
  auVar27 = ZEXT1664(auVar25);
  auVar21._0_8_ = (double)param_1;
  auVar21._8_8_ = in_XMM0_Qb;
  auVar24 = ZEXT1664(auVar21);
  iVar5 = ((uint)((ulonglong)auVar21._0_8_ >> 0x34) & 0x7ff) -
          ((uint)((ulonglong)auVar25._0_8_ >> 0x34) & 0x7ff);
  dVar7 = ABS(auVar25._0_8_);
  dVar4 = ABS(auVar21._0_8_);
  if ((0x7ff0000000000000 < (ulonglong)dVar7) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar4)) {
    auVar14._4_12_ = ZEXT812(0);
    auVar14._0_4_ = param_2;
    uVar8 = FUN_18053bea0(0,auVar14._0_8_,0);
    return uVar8;
  }
  if (dVar4 == 0.0) {
    if (-1 < (longlong)auVar25._0_8_) {
      auVar9._4_12_ = auVar21._4_12_;
      auVar9._0_4_ = param_1;
      return auVar9._0_8_;
    }
LAB_18052fe89:
    FUN_18052f090(0x20);
    if ((longlong)auVar21._0_8_ < 0) {
      uVar8 = (ulonglong)DAT_180578290;
    }
    else {
      uVar8 = (ulonglong)DAT_1808ac680;
    }
  }
  else {
    auVar23 = auVar21;
    auVar14 = auVar25;
    if (dVar7 == 0.0) {
      FUN_18052f090();
      auVar14 = auVar27._0_16_;
      auVar23 = auVar24._0_16_;
      if (-1 < (longlong)auVar21._0_8_) goto LAB_18052fedb;
    }
    else {
LAB_18052fedb:
      if (iVar5 < 0x1b) {
        dVar20 = auVar23._0_8_;
        dVar15 = auVar14._0_8_;
        if ((iVar5 < -0xd) && (-1 < (longlong)auVar25._0_8_)) {
          if (-0x97 < iVar5) {
            if (-0x7f < iVar5) {
              auVar11._0_8_ = dVar20 / dVar15;
              auVar11._8_8_ = auVar23._8_8_;
              auVar12._0_4_ = (float)auVar11._0_8_;
              auVar12._4_12_ = auVar11._4_12_;
              return auVar12._0_8_;
            }
            dVar15 = (dVar20 * 1.2676506002282294e+30) / dVar15;
            uVar3 = (uint)((ulonglong)ABS(dVar15) >> 0x20);
            uVar2 = uVar3 >> 0x14;
            uVar3 = uVar3 >> 0x14;
            if (uVar2 < 0x65) {
              if ((int)(0x65 - uVar2) < 0x37) {
                uVar8 = ((ulonglong)dVar15 & 0x1fffffffffffff | 0x10000000000000) >>
                        (100 - (ulonglong)uVar3 & 0x3f);
                uVar8 = (uVar8 >> 1) + (ulonglong)((uint)uVar8 & 1);
              }
              else {
                uVar8 = 0;
              }
            }
            else {
              uVar8 = (ulonglong)uVar3 - 100 << 0x34 | (ulonglong)dVar15 & 0xfffffffffffff;
            }
            uVar6 = (ulonglong)dVar15 & 0x8000000000000000 | uVar8;
            auVar24 = ZEXT864(uVar6);
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar6;
            if ((uVar8 & 0x7ff0000000000000) == 0) {
              FUN_18052f090(0x30);
              auVar22 = auVar24._0_16_;
            }
            auVar10._0_4_ = (float)auVar22._0_8_;
            auVar10._4_12_ = auVar22._4_12_;
            return auVar10._0_8_;
          }
          FUN_18052f090(0x30);
          if ((longlong)auVar21._0_8_ < 0) {
            return (ulonglong)DAT_1808acd10;
          }
          return 0;
        }
        if ((-0x1b < iVar5) || (-1 < (longlong)auVar25._0_8_)) {
          if ((dVar4 != INFINITY) || (dVar7 != INFINITY)) {
            auVar26 = auVar14;
            if ((longlong)auVar25._0_8_ < 0) {
              auVar26._0_8_ = (ulonglong)dVar15 ^ DAT_1808adeb0;
              auVar26._8_8_ = auVar14._8_8_;
            }
            if ((longlong)auVar21._0_8_ < 0) {
              auVar23._0_8_ = (ulonglong)dVar20 ^ DAT_1808adeb0;
            }
            bVar1 = auVar26._0_8_ < auVar23._0_8_;
            auVar16._0_8_ = -(ulonglong)!bVar1;
            auVar16._8_8_ = 0xffffffffffffffff;
            auVar14 = vblendvpd_avx(auVar26,auVar23,auVar16);
            auVar17._0_8_ = -(ulonglong)!bVar1;
            auVar17._8_8_ = 0xffffffffffffffff;
            auVar23 = vblendvpd_avx(auVar23,auVar26,auVar17);
            dVar4 = auVar23._0_8_;
            dVar7 = auVar14._0_8_;
            auVar18._0_8_ = dVar7 / dVar4;
            auVar18._8_8_ = auVar14._8_8_;
            if (auVar18._0_8_ <= DAT_180578248) {
              if (DAT_1808ac220 <= auVar18._0_8_) {
                dVar4 = auVar18._0_8_ * auVar18._0_8_;
                auVar18._0_8_ =
                     -(dVar4 * auVar18._0_8_ *
                      (-(dVar4 * (-(dVar4 * DAT_180578250) + DAT_180578258)) + DAT_180578268)) +
                     auVar18._0_8_;
              }
            }
            else {
              uVar3 = (uint)(auVar18._0_8_ * DAT_180578280 + DAT_1808ac4a8);
              dVar15 = (double)uVar3;
              dVar4 = (dVar7 * DAT_180578280 - dVar4 * dVar15) /
                      (dVar7 * dVar15 + dVar4 * DAT_180578280);
              auVar18._0_8_ =
                   -(dVar4 * dVar4 * dVar4 * DAT_180578260) +
                   dVar4 + *(double *)(&DAT_18057de30 + (ulonglong)(uVar3 - 0x10) * 8);
              auVar18._8_8_ = 0;
            }
            if (bVar1) {
              dVar4 = auVar18._0_8_;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = DAT_180578270 - dVar4;
            }
            if ((longlong)auVar25._0_8_ < 0) {
              dVar4 = auVar18._0_8_;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = DAT_1808ac588 - dVar4;
            }
            auVar19 = auVar18;
            if ((longlong)auVar21._0_8_ < 0) {
              auVar19._0_8_ = auVar18._0_8_ ^ DAT_1808adeb0;
              auVar19._8_8_ = auVar18._8_8_;
            }
            auVar13._0_4_ = (float)auVar19._0_8_;
            auVar13._4_12_ = auVar19._4_12_;
            return auVar13._0_8_;
          }
          FUN_18052f090(0x20);
          if (-1 < (longlong)auVar25._0_8_) {
            if ((longlong)auVar21._0_8_ < 0) {
              return (ulonglong)DAT_180578288;
            }
            return (ulonglong)DAT_1808ac28c;
          }
          if ((longlong)auVar21._0_8_ < 0) {
            return (ulonglong)DAT_18057828c;
          }
          return (ulonglong)DAT_180578278;
        }
        goto LAB_18052fe89;
      }
      FUN_18052f090(0x20);
      if (-1 < (longlong)auVar21._0_8_) {
        return (ulonglong)DAT_1808ac440;
      }
    }
    uVar8 = (ulonglong)DAT_1808acdb0;
  }
  return uVar8;
}



/* ===== 180516b20 FUN_180516b20 ===== */

ulonglong FUN_180516b20(float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  
  dVar7 = (double)param_2;
  uVar1 = (uint)((ulonglong)dVar7 >> 0x20);
  dVar12 = (double)param_1;
  uVar2 = (uint)((ulonglong)dVar12 >> 0x20);
  iVar4 = (uVar2 >> 0x14 & 0x7ff) - (uVar1 >> 0x14 & 0x7ff);
  dVar5 = ABS(dVar7);
  dVar3 = ABS(dVar12);
  if ((0x7ff0000000000000 < (ulonglong)dVar5) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar3)) {
    uVar6 = FUN_18052fdd0(param_2);
    return uVar6;
  }
  if (dVar3 == 0.0) {
    if ((longlong)dVar7 < 0) {
joined_r0x000180516d55:
      if ((longlong)dVar12 < 0) {
        FUN_18052f090(0x20);
        return (ulonglong)DAT_180578290;
      }
      FUN_18052f090(0x20);
      return (ulonglong)DAT_1808ac680;
    }
LAB_180516d32:
    return (ulonglong)(uint)(float)dVar12;
  }
  if (dVar5 == 0.0) {
    if ((longlong)dVar12 < 0) goto LAB_180516c0e;
    FUN_18052f090(0x20);
  }
  if (0x1a < iVar4) {
    if (-1 < (longlong)dVar12) {
      FUN_18052f090(0x20);
      return (ulonglong)DAT_1808ac440;
    }
LAB_180516c0e:
    FUN_18052f090(0x20);
    return (ulonglong)DAT_1808acdb0;
  }
  if ((iVar4 < -0xd) && (-1 < (longlong)dVar7)) {
    if (iVar4 < -0x96) {
      FUN_18052f090(0x30);
      if ((longlong)dVar12 < 0) {
        return (ulonglong)DAT_1808acd10;
      }
      return 0;
    }
    if (-0x7f < iVar4) {
      return (ulonglong)(uint)(float)(dVar12 / dVar7);
    }
    dVar7 = (dVar12 * 1.2676506002282294e+30) / dVar7;
    uVar2 = (uint)((ulonglong)ABS(dVar7) >> 0x20);
    uVar1 = uVar2 >> 0x14;
    if (uVar1 < 0x65) {
      if ((int)(0x65 - (uVar2 >> 0x14)) < 0x37) {
        uVar6 = ((ulonglong)dVar7 & 0x1fffffffffffff | 0x10000000000000) >>
                (100U - (char)uVar1 & 0x3f);
        uVar6 = (uVar6 >> 1) + (ulonglong)((uint)uVar6 & 1);
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = (ulonglong)uVar1 - 100 << 0x34 | (ulonglong)dVar7 & 0xfffffffffffff;
    }
    dVar12 = (double)((ulonglong)dVar7 & 0x8000000000000000 | uVar6);
    if ((uVar6 & 0x7ff0000000000000) == 0) {
      FUN_18052f090(0x30);
    }
    goto LAB_180516d32;
  }
  if ((iVar4 < -0x1a) && ((longlong)dVar7 < 0)) goto joined_r0x000180516d55;
  if ((dVar3 == INFINITY) && (dVar5 == INFINITY)) {
    FUN_18052f090(0x20);
    if (-1 < (longlong)dVar7) {
      if ((longlong)dVar12 < 0) {
        return (ulonglong)DAT_180578288;
      }
      return (ulonglong)DAT_1808ac28c;
    }
    if ((longlong)dVar12 < 0) {
      return (ulonglong)DAT_18057828c;
    }
    return (ulonglong)DAT_180578278;
  }
  uVar10 = (uint)DAT_1808adeb0;
  uVar11 = (uint)((ulonglong)DAT_1808adeb0 >> 0x20);
  dVar3 = dVar7;
  if ((longlong)dVar7 < 0) {
    dVar3 = (double)CONCAT44(uVar1 ^ uVar11,SUB84(dVar7,0) ^ uVar10);
  }
  dVar5 = dVar12;
  if ((longlong)dVar12 < 0) {
    dVar5 = (double)CONCAT44(uVar2 ^ uVar11,SUB84(dVar12,0) ^ uVar10);
  }
  dVar13 = dVar5;
  dVar8 = dVar3;
  if (dVar3 < dVar5) {
    dVar13 = dVar3;
    dVar8 = dVar5;
  }
  dVar9 = dVar13 / dVar8;
  if (dVar9 <= DAT_180578248) {
    if (dVar9 < DAT_1808ac220) goto LAB_180516ebb;
    dVar8 = dVar9 * dVar9;
    dVar8 = (DAT_180578268 - (DAT_180578258 - dVar8 * DAT_180578250) * dVar8) * dVar8 * dVar9;
  }
  else {
    uVar2 = (uint)(dVar9 * DAT_180578280 + DAT_1808ac4a8);
    dVar9 = (double)uVar2;
    dVar8 = (dVar13 * DAT_180578280 - dVar9 * dVar8) / (dVar9 * dVar13 + dVar8 * DAT_180578280);
    dVar9 = dVar8 + *(double *)(&DAT_180577ac0 + (ulonglong)(uVar2 - 0x10) * 8);
    dVar8 = dVar8 * dVar8 * dVar8 * DAT_180578260;
  }
  dVar9 = dVar9 - dVar8;
LAB_180516ebb:
  if (dVar3 < dVar5) {
    dVar9 = DAT_180578270 - dVar9;
  }
  if ((longlong)dVar7 < 0) {
    dVar9 = DAT_1808ac588 - dVar9;
  }
  if ((longlong)dVar12 < 0) {
    dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar11,SUB84(dVar9,0) ^ uVar10);
  }
  return (ulonglong)(uint)(float)dVar9;
}



/* ===== 180516f20 FUN_180516f20 ===== */

ulonglong FUN_180516f20(ulonglong param_1,ulonglong param_2)

{
  return param_1 & 0x7fffffffffffffff | (param_2 >> 0x20 & 0x80000000) << 0x20;
}



/* ===== 180516f60 FUN_180516f60 ===== */

undefined8 FUN_180516f60(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined8 in_RCX;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 in_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  fVar1 = ABS(param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar5 = FUN_1805305a0(in_RCX,param_2,0);
    return uVar5;
  }
  auVar6._0_8_ = (double)param_1;
  auVar6._8_8_ = in_XMM0_Qb;
  dVar3 = ABS(auVar6._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    uVar4 = 0;
  }
  else if ((uint)fVar1 < 0x48f42400) {
    uVar4 = (uint)(dVar3 * DAT_1805782c0 + DAT_1805782b0);
    dVar8 = (double)(int)uVar4;
    dVar10 = dVar3 - DAT_1805782f0 * dVar8;
    dVar9 = dVar10 - DAT_180578300 * dVar8;
    uVar2 = (ulonglong)ABS(dVar9) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar3 >> 0x34) - uVar2)) {
      dVar9 = dVar10 - DAT_180578310 * dVar8;
      dVar9 = dVar9 - (DAT_180578320 * dVar8 - ((dVar10 - dVar9) - DAT_180578310 * dVar8));
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar9;
    if (uVar2 < 0x3f2) {
      if (uVar2 < 0x3df) {
        if ((uVar4 & 1) == 0) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = DAT_1805782a0;
        }
      }
      else if ((uVar4 & 1) == 0) {
        auVar6._0_8_ = DAT_1805782a0 - dVar9 * dVar9 * DAT_1805782b0;
        auVar6._8_8_ = 0;
      }
      else {
        auVar6._0_8_ = dVar9 - DAT_1805782d0 * dVar9 * dVar9 * dVar9;
        auVar6._8_8_ = 0;
      }
      goto LAB_1805171d4;
    }
  }
  else {
    uVar4 = FUN_1805301c0(dVar3,auVar6._0_8_,1,param_4,auVar6._0_8_);
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVar3 = auVar6._0_8_;
  dVar9 = dVar3 * dVar3;
  if ((uVar4 & 1) == 0) {
    auVar6._0_8_ = DAT_18057e750 * dVar9 + DAT_1805782a0 +
                   ((DAT_18057e770 * dVar9 + DAT_18057e768) * dVar9 * dVar9 +
                   DAT_18057e760 * dVar9 + DAT_18057e758) * dVar9 * dVar9;
    auVar6._8_8_ = 0;
  }
  else {
    auVar6._0_8_ = dVar3 + ((DAT_18057e798 * dVar9 + DAT_18057e790) * dVar9 * dVar9 +
                           DAT_18057e788 * dVar9 + DAT_18057e780) * dVar3 * dVar9;
  }
LAB_1805171d4:
  if ((uVar4 + 1 & 2) != 0) {
    dVar3 = auVar6._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = 0.0 - dVar3;
  }
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)auVar6._0_8_;
  return auVar7._0_8_;
}



/* ===== 180517200 FUN_180517200 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180517200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  float fVar4;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 uVar13;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 in_ZMM2 [64];
  ulonglong uVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 in_ZMM4 [64];
  double dVar24;
  
  fVar4 = in_ZMM0._0_4_;
  auVar7._8_56_ = in_ZMM0._8_56_;
  auVar8._16_48_ = in_ZMM0._16_48_;
  auVar22._16_48_ = in_ZMM4._16_48_;
  if (DAT_180c9fd94 != 0) {
    fVar1 = ABS(fVar4);
    if (0x7f7fffff < (uint)fVar1) {
      uVar21 = FUN_1805305a0();
      return uVar21;
    }
    dVar24 = (double)fVar4;
    dVar2 = ABS(dVar24);
    if (0x3f490fdb < (uint)fVar1) {
      if ((uint)fVar1 < 0x4f490fdb) {
        auVar14._0_4_ =
             (int)((double)((ulonglong)dVar2 & _DAT_180578350) * DAT_1805782c0 + DAT_1805782b0);
        auVar14._4_4_ = (int)_UNK_1805782c8;
        auVar14._8_8_ = 0;
        auVar14 = vpmovsxdq_avx(auVar14);
        uVar21 = auVar14._0_8_ & _DAT_180578360;
        auVar14 = vshufps_avx(auVar14,auVar14,8);
        auVar14 = vcvtdq2pd_avx(auVar14);
        dVar24 = (-(auVar14._0_8_ * DAT_1805782f0) + dVar2) - auVar14._0_8_ * DAT_180578300;
        uVar13 = 0;
      }
      else if ((uint)fVar1 < 0x4f490fdb) {
        uVar21 = FUN_180530500(dVar2);
        dVar24 = extraout_XMM0_Qa_00;
        uVar13 = extraout_XMM0_Qb;
      }
      else {
        uVar21 = FUN_180530310();
        dVar24 = extraout_XMM0_Qa_01;
        uVar13 = extraout_XMM0_Qb_00;
      }
      if ((uVar21 & 1) == 0) {
        dVar24 = dVar24 * dVar24;
        dVar24 = (dVar24 * (dVar24 * (dVar24 * DAT_18057e770 + DAT_18057e768) + DAT_18057e760) +
                 DAT_18057e758) * dVar24 * dVar24 + (DAT_1805782a0 - dVar24 * DAT_1805782b0);
        uVar13 = 0;
      }
      else {
        dVar2 = dVar24 * dVar24;
        dVar24 = (dVar2 * (dVar2 * (dVar2 * DAT_18057e798 + DAT_18057e790) + DAT_18057e788) +
                 DAT_18057e780) * dVar24 * dVar2 + dVar24;
      }
      auVar5._0_8_ = (double)((ulonglong)dVar24 ^ (uVar21 + 1 >> 1) << 0x3f);
      auVar5._8_8_ = uVar13;
      auVar6._0_4_ = (float)auVar5._0_8_;
      auVar6._4_12_ = auVar5._4_12_;
      return auVar6._0_8_;
    }
    if (0x3bffffff < (uint)fVar1) {
      dVar24 = dVar24 * dVar24;
      dVar24 = (dVar24 * (dVar24 * (dVar24 * DAT_18057e770 + DAT_18057e768) + DAT_18057e760) +
               DAT_18057e758) * dVar24 * dVar24 + (DAT_1805782a0 - dVar24 * DAT_1805782b0);
      return CONCAT44((int)((ulonglong)dVar24 >> 0x20),(float)dVar24);
    }
    if ((uint)fVar1 < 0x39000000) {
      return (ulonglong)DAT_1805783a8;
    }
    dVar24 = -(dVar24 * dVar24 * DAT_1805782b0) + DAT_1805782a0;
    return CONCAT44((int)((ulonglong)dVar24 >> 0x20),(float)dVar24);
  }
  auVar16._16_48_ = in_ZMM2._16_48_;
  auVar16._0_16_ = ZEXT816(0);
  fVar1 = ABS(fVar4);
  if (0x7f7fffff < (uint)fVar1) {
    uVar21 = FUN_1805305a0();
    return uVar21;
  }
  auVar7._0_8_ = (double)fVar4;
  dVar24 = ABS(auVar7._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    auVar15._8_8_ = in_ZMM0._8_8_;
    auVar15._0_8_ = auVar7._0_8_;
    auVar15._16_48_ = auVar16._16_48_;
    auVar16._8_56_ = auVar15._8_56_;
    auVar16._0_8_ = auVar7._0_8_ * auVar7._0_8_;
    uVar3 = 0;
  }
  else {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = dVar24;
    if ((uint)fVar1 < 0x48f42400) {
      uVar3 = (uint)(dVar24 * DAT_1805782c0 + DAT_1805782b0);
      auVar16._0_8_ = (double)(int)uVar3;
      auVar16._8_8_ = 0;
      auVar23._8_56_ = auVar22._8_56_;
      auVar23._0_8_ = dVar24 - DAT_1805782f0 * auVar16._0_8_;
      auVar8._0_16_ = auVar23._0_16_;
      auVar7._8_56_ = auVar8._8_56_;
      auVar7._0_8_ = auVar23._0_8_ - DAT_180578300 * auVar16._0_8_;
      uVar21 = (ulonglong)ABS(auVar7._0_8_) >> 0x34;
      if (0xf < (longlong)(((ulonglong)dVar24 >> 0x34) - uVar21)) {
        dVar24 = auVar23._0_8_ - DAT_180578310 * auVar16._0_8_;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dVar24;
        auVar9._16_48_ = auVar8._16_48_;
        auVar7._8_56_ = auVar9._8_56_;
        auVar7._0_8_ = dVar24 - (DAT_180578320 * auVar16._0_8_ -
                                ((auVar23._0_8_ - dVar24) - DAT_180578310 * auVar16._0_8_));
      }
      if (uVar21 < 0x3f2) {
        auVar10._16_48_ = auVar7._16_48_;
        if (uVar21 < 0x3df) {
          if ((uVar3 & 1) == 0) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = DAT_1805782a0;
            auVar7._16_48_ = auVar10._16_48_;
          }
        }
        else {
          dVar24 = auVar7._0_8_;
          auVar17._0_16_ = auVar7._0_16_;
          auVar17._16_48_ = auVar16._16_48_;
          auVar16._8_56_ = auVar17._8_56_;
          auVar16._0_8_ = dVar24 * dVar24;
          if ((uVar3 & 1) == 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = DAT_1805782a0;
            auVar16._0_8_ = auVar16._0_8_ * DAT_1805782b0;
            auVar7._8_56_ = auVar10._8_56_;
            auVar7._0_8_ = DAT_1805782a0 - auVar16._0_8_;
          }
          else {
            auVar7._0_8_ = dVar24 - DAT_1805782d0 * dVar24 * auVar16._0_8_;
          }
        }
        goto LAB_1805171d4;
      }
    }
    else {
      uVar3 = FUN_1805301c0(param_1,auVar7._0_8_,1,param_4,auVar7._0_8_);
      auVar7._8_56_ = extraout_var;
      auVar7._0_8_ = (double)extraout_XMM0_Qa;
    }
  }
  dVar24 = auVar7._0_8_;
  auVar18._16_48_ = auVar16._16_48_;
  auVar18._0_16_ = auVar7._0_16_;
  auVar16._8_56_ = auVar18._8_56_;
  auVar16._0_8_ = dVar24 * dVar24;
  if ((uVar3 & 1) == 0) {
    auVar11._16_48_ = auVar7._16_48_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = DAT_18057e750;
    auVar7._8_56_ = auVar11._8_56_;
    auVar7._0_8_ = DAT_18057e750 * auVar16._0_8_ + DAT_1805782a0 +
                   ((DAT_18057e770 * auVar16._0_8_ + DAT_18057e768) * auVar16._0_8_ * auVar16._0_8_
                   + DAT_18057e760 * auVar16._0_8_ + DAT_18057e758) * auVar16._0_8_ * auVar16._0_8_;
  }
  else {
    auVar7._0_8_ = dVar24 + ((DAT_18057e798 * auVar16._0_8_ + DAT_18057e790) *
                             auVar16._0_8_ * auVar16._0_8_ +
                            DAT_18057e788 * auVar16._0_8_ + DAT_18057e780) * dVar24 * auVar16._0_8_;
  }
LAB_1805171d4:
  if ((uVar3 + 1 & 2) != 0) {
    auVar19._16_48_ = auVar16._16_48_;
    auVar19._0_16_ = ZEXT816(0);
    auVar20._8_56_ = auVar19._8_56_;
    auVar20._0_8_ = 0.0 - auVar7._0_8_;
    auVar7._0_16_ = auVar20._0_16_;
  }
  auVar12._4_60_ = auVar7._4_60_;
  auVar12._0_4_ = (float)auVar7._0_8_;
  return auVar12._0_8_;
}



/* ===== 180517420 FUN_180517420 ===== */

undefined8 FUN_180517420(undefined8 param_1)

{
  float fVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint local_38 [2];
  undefined1 local_30 [48];
  
  fVar1 = ABS((float)param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar6 = FUN_180530700();
    return uVar6;
  }
  dVar7 = (double)(float)param_1;
  dVar3 = ABS(dVar7);
  if ((uint)fVar1 < 0x3f490fdc) {
    if ((uint)fVar1 < 0x3c000000) {
      if ((uint)fVar1 < 0x39000000) {
        return param_1;
      }
      dVar7 = dVar7 - dVar7 * dVar7 * dVar7 * DAT_180578430;
    }
    else {
      dVar3 = dVar7 * dVar7;
      dVar7 = dVar7 + ((DAT_18057e798 * dVar3 + DAT_18057e790) * dVar3 * dVar3 +
                      DAT_18057e788 * dVar3 + DAT_18057e780) * dVar7 * dVar3;
    }
    goto LAB_180517776;
  }
  bVar5 = dVar7 != dVar3;
  if (bVar5) {
    dVar7 = 0.0 - dVar7;
  }
  if ((uint)fVar1 < 0x4b742400) {
    local_38[0] = (uint)(dVar7 * DAT_180578410 + DAT_180578400);
    dVar8 = (double)(int)local_38[0];
    dVar9 = dVar7 - DAT_180578420 * dVar8;
    dVar7 = dVar9 - DAT_180578440 * dVar8;
    uVar2 = (ulonglong)ABS(dVar7) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar3 >> 0x34) - uVar2)) {
      dVar7 = dVar9 - DAT_180578450 * dVar8;
      dVar7 = dVar7 - (DAT_180578460 * dVar8 - ((dVar9 - dVar7) - DAT_180578450 * dVar8));
    }
    if (0x3f1 < uVar2) goto LAB_18051769e;
    if (uVar2 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        dVar7 = DAT_1805783e0;
      }
    }
    else if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 - DAT_180578430 * dVar7 * dVar7 * dVar7;
    }
    else {
      dVar7 = DAT_1805783e0 - dVar7 * dVar7 * DAT_180578400;
    }
  }
  else {
    dVar7 = (double)__remainder_piby2d2f_forC(dVar7,local_30,local_38);
LAB_18051769e:
    dVar3 = dVar7 * dVar7;
    if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 + ((DAT_18057e798 * dVar3 + DAT_18057e790) * dVar3 * dVar3 +
                      DAT_18057e788 * dVar3 + DAT_18057e780) * dVar7 * dVar3;
    }
    else {
      dVar7 = DAT_18057e750 * dVar3 + DAT_1805783e0 +
              ((DAT_18057e770 * dVar3 + DAT_18057e768) * dVar3 * dVar3 +
              DAT_18057e760 * dVar3 + DAT_18057e758) * dVar3 * dVar3;
    }
  }
  uVar4 = (uint)bVar5;
  if ((local_38[0] >> 1 & uVar4) == 0 && (~(local_38[0] >> 1) & ~uVar4 & 1) == 0) {
    dVar7 = 0.0 - dVar7;
  }
LAB_180517776:
  return CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7);
}



/* ===== 180517790 FUN_180517790 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180517790(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar24;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 extraout_var [56];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar39 [16];
  double dVar38;
  undefined1 auVar40 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 in_ZMM4 [64];
  double dVar44;
  uint auStack_38 [2];
  undefined1 auStack_30 [48];
  
  fVar23 = in_ZMM0._0_4_;
  auVar42._16_48_ = in_ZMM4._16_48_;
  auVar29._16_48_ = in_ZMM0._16_48_;
  if (DAT_180c9fd94 != 0) {
    fVar9 = ABS(fVar23);
    if (0x7f7fffff < (uint)fVar9) {
      uVar24 = FUN_180530700();
      return uVar24;
    }
    dVar44 = (double)fVar23;
    dVar18 = ABS(dVar44);
    if ((uint)fVar9 < 0x3f490fdc) {
      if ((uint)fVar9 < 0x3c000000) {
        if ((uint)fVar9 < 0x39000000) {
          return in_ZMM0._0_8_;
        }
        auVar25._0_8_ = -(dVar44 * dVar44 * dVar44 * DAT_180578430) + dVar44;
        auVar25._8_8_ = 0;
      }
      else {
        dVar18 = dVar44 * dVar44;
        auVar25._8_8_ = in_ZMM0._8_8_;
        auVar25._0_8_ =
             (dVar18 * (dVar18 * (dVar18 * DAT_18057e798 + DAT_18057e790) + DAT_18057e788) +
             DAT_18057e780) * dVar44 * dVar18 + dVar44;
      }
    }
    else {
      if ((uint)fVar9 < 0x4b800456) {
        auVar39._0_4_ = (int)(dVar18 * DAT_180578410 + DAT_180578400);
        auVar39._4_4_ = (int)_UNK_180578418;
        auVar39._8_8_ = 0;
        auVar7 = vpmovsxdq_avx(auVar39);
        auVar41._0_8_ = auVar7._0_8_ & _DAT_1805783f0;
        auVar41._8_8_ = auVar7._8_8_ & _UNK_1805783f8;
        auVar7 = vshufps_avx(auVar7,auVar7,8);
        auVar7 = vcvtdq2pd_avx(auVar7);
        dVar18 = (-(auVar7._0_8_ * DAT_180578420) + dVar18) - auVar7._0_8_ * DAT_180578440;
      }
      else {
        uVar22 = ((ulonglong)dVar18 >> 0x34) - 0x3ff;
        lVar19 = -((uVar22 >> 3) - 0x86);
        uVar14 = (ulonglong)dVar44 & 0xfffffffffffff | 0x10000000000000;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(&DAT_18057e7a0 + lVar19);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = SUB168(auVar7 * auVar4,8);
        uVar10 = SUB168(auVar7 * auVar4,0);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(&UNK_18057e7a8 + lVar19);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar22 = uVar22 & 7;
        auVar8 = auVar2 * auVar5 + auVar8;
        uVar11 = auVar8._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(&UNK_18057e7b0 + lVar19);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar20 = auVar8._8_8_ + SUB168(auVar3 * auVar6,0);
        uVar17 = 0;
        bVar13 = (byte)(0x36 - uVar22) & 0x3f;
        uVar14 = uVar20 >> bVar13;
        bVar1 = (bool)(((0x36 - uVar22 & 0x3f) != 0) * ((uVar20 >> bVar13 - 1 & 1) != 0));
        if (bVar1) {
          uVar20 = ~uVar20;
          uVar11 = ~uVar11;
          uVar10 = ~uVar10;
          uVar17 = 0x8000000000000000;
        }
        auVar41 = ZEXT416((int)uVar14 + (uint)bVar1 & 3);
        sVar12 = (char)uVar22 + 10;
        uVar14 = (uVar20 << sVar12) >> sVar12;
        lVar15 = uVar22 - 0x36;
        lVar19 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar20 = uVar11;
        if (uVar14 == 0) {
          lVar19 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          lVar15 = uVar22 - 0x76;
          uVar20 = uVar10;
          uVar14 = uVar11;
        }
        lVar16 = lVar19 + -0x34;
        if (lVar16 < 0) {
          bVar13 = -(byte)lVar16;
          uVar14 = uVar14 << (bVar13 & 0x3f) | uVar20 >> (-(bVar13 - 0x40) & 0x3f);
        }
        else if (lVar16 != 0) {
          uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
        }
        dVar18 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar19 + 0x3ff << 0x34) *
                 DAT_180578490;
      }
      uVar10 = auVar41._0_8_;
      if ((uVar10 & 1) == 1) {
        dVar18 = dVar18 * dVar18;
        dVar18 = (dVar18 * (dVar18 * (dVar18 * DAT_18057e770 + DAT_18057e768) + DAT_18057e760) +
                 DAT_18057e758) * dVar18 * dVar18 + dVar18 * DAT_18057e750 + DAT_1805783e0;
        uVar11 = _UNK_1805783e8;
      }
      else {
        dVar38 = dVar18 * dVar18;
        dVar18 = (dVar38 * (dVar38 * (dVar38 * DAT_18057e798 + DAT_18057e790) + DAT_18057e788) +
                 DAT_18057e780) * dVar18 * dVar38 + dVar18;
        uVar11 = 0;
      }
      auVar25._0_8_ =
           (double)(~(ulonglong)dVar44 & _DAT_1805783c0 ^
                   (ulonglong)dVar18 ^
                   ~-(ulonglong)(uVar10 == _DAT_180578480 || uVar10 == _DAT_1805783f0) &
                   _DAT_1805783c0);
      auVar25._8_8_ =
           ~in_ZMM0._8_8_ & _UNK_1805783c8 ^
           uVar11 ^ ~-(ulonglong)
                      (auVar41._8_8_ == _UNK_180578488 || auVar41._8_8_ == _UNK_1805783f8) &
                    _UNK_1805783c8;
    }
    auVar26._0_4_ = (float)auVar25._0_8_;
    auVar26._4_12_ = auVar25._4_12_;
    return auVar26._0_8_;
  }
  auVar30._16_48_ = in_ZMM2._16_48_;
  auVar30._0_16_ = ZEXT816(0);
  fVar9 = ABS(fVar23);
  if (0x7f7fffff < (uint)fVar9) {
    uVar24 = FUN_180530700();
    return uVar24;
  }
  auVar27._8_56_ = in_ZMM0._8_56_;
  auVar27._0_8_ = (double)fVar23;
  dVar18 = ABS(auVar27._0_8_);
  auVar40._8_56_ = auVar30._8_56_;
  if ((uint)fVar9 < 0x3f490fdc) {
    if ((uint)fVar9 < 0x3c000000) {
      if ((uint)fVar9 < 0x39000000) {
        return in_ZMM0._0_8_;
      }
      auVar28._0_8_ = auVar27._0_8_ - auVar27._0_8_ * auVar27._0_8_ * auVar27._0_8_ * DAT_180578430;
      auVar28._8_56_ = auVar27._8_56_;
    }
    else {
      dVar18 = auVar27._0_8_ * auVar27._0_8_;
      auVar28._0_8_ =
           auVar27._0_8_ +
           ((DAT_18057e798 * dVar18 + DAT_18057e790) * dVar18 * dVar18 +
           DAT_18057e788 * dVar18 + DAT_18057e780) * auVar27._0_8_ * dVar18;
      auVar28._8_56_ = auVar27._8_56_;
    }
    goto LAB_180517776;
  }
  auVar30 = auVar27;
  if (auVar27._0_8_ != dVar18) {
    auVar40._0_8_ = 0.0 - auVar27._0_8_;
    auVar29._0_16_ = auVar40._0_16_;
    auVar30 = auVar29;
  }
  dVar44 = auVar30._0_8_;
  if ((uint)fVar9 < 0x4b742400) {
    auVar42._0_16_ = auVar30._0_16_;
    auStack_38[0] = (uint)(dVar44 * DAT_180578410 + DAT_180578400);
    auVar31._16_48_ = auVar30._16_48_;
    dVar38 = (double)(int)auStack_38[0];
    auVar43._8_56_ = auVar42._8_56_;
    auVar43._0_8_ = dVar44 - DAT_180578420 * dVar38;
    auVar31._0_16_ = auVar43._0_16_;
    auVar32._8_56_ = auVar31._8_56_;
    auVar32._0_8_ = auVar43._0_8_ - DAT_180578440 * dVar38;
    uVar10 = (ulonglong)ABS(auVar32._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar18 >> 0x34) - uVar10)) {
      dVar44 = auVar43._0_8_ - DAT_180578450 * dVar38;
      auVar33._8_8_ = auVar30._8_8_;
      auVar33._0_8_ = dVar44;
      auVar33._16_48_ = auVar31._16_48_;
      auVar32._8_56_ = auVar33._8_56_;
      auVar32._0_8_ =
           dVar44 - (DAT_180578460 * dVar38 - ((auVar43._0_8_ - dVar44) - DAT_180578450 * dVar38));
    }
    if (0x3f1 < uVar10) goto LAB_18051769e;
    auVar34._16_48_ = auVar32._16_48_;
    if (uVar10 < 0x3df) {
      if ((auStack_38[0] & 1) != 0) {
        auVar32._8_8_ = 0;
        auVar32._0_8_ = DAT_1805783e0;
        auVar32._16_48_ = auVar34._16_48_;
      }
    }
    else {
      dVar44 = auVar32._0_8_;
      if ((auStack_38[0] & 1) == 0) {
        auVar32._0_8_ = dVar44 - DAT_180578430 * dVar44 * dVar44 * dVar44;
      }
      else {
        auVar34._8_8_ = 0;
        auVar34._0_8_ = DAT_1805783e0;
        auVar32._8_56_ = auVar34._8_56_;
        auVar32._0_8_ = DAT_1805783e0 - dVar44 * dVar44 * DAT_180578400;
      }
    }
  }
  else {
    auVar32._0_8_ = (double)__remainder_piby2d2f_forC(dVar44,auStack_30,auStack_38);
    auVar32._8_56_ = extraout_var;
LAB_18051769e:
    dVar44 = auVar32._0_8_;
    dVar38 = dVar44 * dVar44;
    if ((auStack_38[0] & 1) == 0) {
      auVar32._0_8_ =
           dVar44 + ((DAT_18057e798 * dVar38 + DAT_18057e790) * dVar38 * dVar38 +
                    DAT_18057e788 * dVar38 + DAT_18057e780) * dVar44 * dVar38;
    }
    else {
      auVar35._16_48_ = auVar32._16_48_;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = DAT_18057e750;
      auVar32._8_56_ = auVar35._8_56_;
      auVar32._0_8_ =
           DAT_18057e750 * dVar38 + DAT_1805783e0 +
           ((DAT_18057e770 * dVar38 + DAT_18057e768) * dVar38 * dVar38 +
           DAT_18057e760 * dVar38 + DAT_18057e758) * dVar38 * dVar38;
    }
  }
  uVar21 = (uint)(auVar27._0_8_ != dVar18);
  auVar28 = auVar32;
  if ((auStack_38[0] >> 1 & uVar21) == 0 && (~(auStack_38[0] >> 1) & ~uVar21 & 1) == 0) {
    auVar36._16_48_ = auVar32._16_48_;
    auVar36._0_16_ = ZEXT816(0);
    auVar28._8_56_ = auVar36._8_56_;
    auVar28._0_8_ = 0.0 - auVar32._0_8_;
  }
LAB_180517776:
  auVar37._4_60_ = auVar28._4_60_;
  auVar37._0_4_ = (float)auVar28._0_8_;
  return auVar37._0_8_;
}



/* ===== 180517ae0 _malloc_base ===== */

LPVOID _malloc_base(ulonglong param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_180c9ffc8,0,param_1);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_18053a330();
    } while ((iVar1 != 0) && (iVar1 = FUN_180523cb0(param_1), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}



/* ===== 180517ae8 __acrt_lowio_create_handle_array ===== */

/* Library Function - Single Match
    __acrt_lowio_create_handle_array
   
   Library: Visual Studio 2019 Release */

undefined8 * __acrt_lowio_create_handle_array(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = (undefined8 *)_calloc_base(0x40);
  puVar5 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3 != puVar3 + 0x240) {
      puVar5 = puVar3 + 6;
      do {
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + -6),4000,0);
        puVar5[-1] = 0xffffffffffffffff;
        puVar4 = (undefined1 *)((longlong)puVar5 + 0xe);
        *(byte *)((longlong)puVar5 + 0xd) = *(byte *)((longlong)puVar5 + 0xd) & 0xf8;
        uVar2 = 0;
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0xa0a0000;
        *(undefined1 *)((longlong)puVar5 + 0xc) = 10;
        do {
          *puVar4 = 0;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 < 5);
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 9;
      } while (puVar1 != puVar3 + 0x240);
    }
    puVar5 = puVar3;
  }
  FUN_1805277b0(0);
  return puVar5;
}



/* ===== 180517b90 __acrt_lowio_destroy_handle_array ===== */

/* Library Function - Single Match
    __acrt_lowio_destroy_handle_array
   
   Library: Visual Studio 2019 Release */

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_1805277b0(param_1);
  }
  return;
}



/* ===== 180517be0 __acrt_lowio_ensure_fh_exists ===== */

/* Library Function - Single Match
    __acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2019 Release */

undefined4 __acrt_lowio_ensure_fh_exists(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (param_1 < 0x2000) {
    uVar5 = 0;
    __acrt_lock(7);
    lVar4 = 0;
    iVar1 = DAT_180c9fd90;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_180c9f990)[lVar4] == 0) {
        lVar3 = __acrt_lowio_create_handle_array();
        (&DAT_180c9f990)[lVar4] = lVar3;
        if (lVar3 == 0) {
          uVar5 = 0xc;
          break;
        }
        iVar1 = DAT_180c9fd90 + 0x40;
        DAT_180c9fd90 = iVar1;
      }
      lVar4 = lVar4 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 9;
    FUN_180527740();
    uVar5 = 9;
  }
  return uVar5;
}



/* ===== 180517c88 __acrt_lowio_lock_fh ===== */

/* Library Function - Single Match
    __acrt_lowio_lock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_lock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180517ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}



/* ===== 180517cb0 FUN_180517cb0 ===== */

undefined8 FUN_180517cb0(uint param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180c9fd90)) {
    if (*(longlong *)
         ((&DAT_180c9f990)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
         (ulonglong)(param_1 & 0x3f) * 0x48) == -1) {
      iVar1 = FUN_1805309cc();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180517d31;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_180517d31:
      *(HANDLE *)
       ((&DAT_180c9f990)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
       (ulonglong)(param_1 & 0x3f) * 0x48) = param_2;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_18051bfb0();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_18051bf8c();
  *puVar2 = 0;
  return 0xffffffff;
}



/* ===== 180517d70 __acrt_lowio_unlock_fh ===== */

/* Library Function - Single Match
    __acrt_lowio_unlock_fh
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lowio_unlock_fh(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180517d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_180c9f990)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}



/* ===== 180517d98 _alloc_osfhnd ===== */

/* Library Function - Single Match
    _alloc_osfhnd
   
   Library: Visual Studio 2019 Release */

int __cdecl _alloc_osfhnd(void)

{
  LPCRITICAL_SECTION p_Var1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  __acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_180517eaf:
      __acrt_unlock(7);
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_180c9f990)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      lVar2 = __acrt_lowio_create_handle_array();
      (&DAT_180c9f990)[iVar4] = lVar2;
      if (lVar2 != 0) {
        DAT_180c9fd90 = DAT_180c9fd90 + 0x40;
        uVar3 = iVar4 << 6;
        __acrt_lowio_lock_fh(uVar3);
        *(undefined1 *)((&DAT_180c9f990)[(longlong)(int)uVar3 >> 6] + 0x38) = 1;
      }
      goto LAB_180517eaf;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
          uVar3 = (int)(((longlong)lpCriticalSection - (longlong)p_Var1) / 0x48) + iVar4 * 0x40;
          *(undefined1 *)
           ((&DAT_180c9f990)[(longlong)(int)uVar3 >> 6] + 0x38 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               1;
          *(undefined8 *)
           ((&DAT_180c9f990)[(longlong)(int)uVar3 >> 6] + 0x28 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_180517eaf;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



/* ===== 180517ed8 FUN_180517ed8 ===== */

undefined8 FUN_180517ed8(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_180c9fd90)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_180c9f990)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_180c9f990)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_1805309cc();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_180517f58;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_180517f58:
      *(undefined8 *)
       ((&DAT_180c9f990)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = (undefined4 *)FUN_18051bfb0();
  *puVar3 = 9;
  puVar3 = (undefined4 *)FUN_18051bf8c();
  *puVar3 = 0;
  return 0xffffffff;
}



/* ===== 180517f94 FUN_180517f94 ===== */

undefined8 FUN_180517f94(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_18051bf8c();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_180c9fd90)) {
      if ((*(byte *)((&DAT_180c9f990)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_180c9f990)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_18051bf8c();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 9;
    FUN_180527740();
  }
  return 0xffffffffffffffff;
}



/* ===== 18051800c common_fsopen<char> ===== */

/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<char>(char const * __ptr64 const,char const *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong local_res8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
  }
  else if (*param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
  }
  else {
    FUN_18052baa0(&local_res8);
    if (local_res8 != 0) {
      p_Var2 = (_iobuf *)FUN_180530f9c(param_1,param_2,param_3,local_res8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_1805110b0(local_res8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}



/* ===== 1805180c8 common_fsopen<wchar_t> ===== */

/* Library Function - Single Match
    struct _iobuf * __ptr64 __cdecl common_fsopen<wchar_t>(wchar_t const * __ptr64 const,wchar_t
   const * __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong local_res8;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
  }
  else if (*param_1 == L'\0') {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
  }
  else {
    FUN_18052baa0(&local_res8);
    if (local_res8 != 0) {
      p_Var2 = (_iobuf *)FUN_180531038(param_1,param_2,param_3,local_res8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(local_res8);
      }
      FUN_1805110b0(local_res8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}



/* ===== 180518194 common_fsopen<char> ===== */

_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong lStackX_8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
  }
  else if (*param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
  }
  else {
    FUN_18052baa0(&lStackX_8);
    if (lStackX_8 != 0) {
      p_Var2 = (_iobuf *)FUN_180530f9c(param_1,param_2,param_3,lStackX_8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(lStackX_8);
      }
      FUN_1805110b0(lStackX_8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}



/* ===== 18051819c FUN_18051819c ===== */

void FUN_18051819c(wchar_t *param_1,wchar_t *param_2)

{
  common_fsopen<wchar_t>(param_1,param_2,0x40);
  return;
}



/* ===== 1805181a8 common_fsopen<wchar_t> ===== */

_iobuf * __cdecl common_fsopen<wchar_t>(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong lStackX_8;
  
  if (((param_1 == (wchar_t *)0x0) || (param_2 == (wchar_t *)0x0)) || (*param_2 == L'\0')) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
    FUN_180527740();
  }
  else if (*param_1 == L'\0') {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x16;
  }
  else {
    FUN_18052baa0(&lStackX_8);
    if (lStackX_8 != 0) {
      p_Var2 = (_iobuf *)FUN_180531038(param_1,param_2,param_3,lStackX_8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(lStackX_8);
      }
      FUN_1805110b0(lStackX_8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_18051bfb0();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}



/* ===== 1805181b0 FUN_1805181b0 ===== */

void FUN_1805181b0(char *param_1,char *param_2)

{
  common_fsopen<char>(param_1,param_2,0x40);
  return;
}



/* ===== 1805181bc fopen_s ===== */

/* Library Function - Single Match
    fopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl fopen_s(FILE **_File,char *_Filename,char *_Mode)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  errno_t *peVar3;
  errno_t eVar4;
  
  eVar4 = 0;
  if (_File == (FILE **)0x0) {
    puVar1 = (undefined4 *)FUN_18051bfb0();
    eVar4 = 0x16;
    *puVar1 = 0x16;
    FUN_180527740();
  }
  else {
    p_Var2 = common_fsopen<char>(_Filename,_Mode,0x80);
    *_File = p_Var2;
    if (p_Var2 == (_iobuf *)0x0) {
      peVar3 = (errno_t *)FUN_18051bfb0();
      eVar4 = *peVar3;
    }
  }
  return eVar4;
}



/* ===== 180518214 _fileno ===== */

/* Library Function - Single Match
    _fileno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _fileno(FILE *_File)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_18051bfb0();
    *puVar2 = 0x16;
    FUN_180527740();
    iVar1 = -1;
  }
  else {
    iVar1 = _File->_flag;
  }
  return iVar1;
}



/* ===== 180518240 FUN_180518240 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180518240(undefined4 param_1)

{
  short sVar1;
  double dVar2;
  
  sVar1 = FUN_180526600();
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      dVar2 = (double)FUN_1805190d0(param_1);
      if ((_DAT_1805784f0 <= dVar2) && (dVar2 <= DAT_1808acbe8)) {
        return (longlong)dVar2;
      }
    }
    FUN_180526a50(1);
  }
  return 0;
}



