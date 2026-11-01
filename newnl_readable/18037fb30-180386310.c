/* ===== 18037fb30 FUN_18037fb30 ===== */

TypeDescriptor * FUN_18037fb30(void)

{
  return &`class_std::function<unsigned_char___cdecl(void)>___cdecl_Concurrency::details::_MakeVoidToUnitFunc(std::function<void___cdecl(void)>_const&___ptr64)'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 18037fb40 FUN_18037fb40 ===== */

ulonglong FUN_18037fb40(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cb0();
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  return uVar1 & 0xffffffffffffff00;
}



/* ===== 18037fb60 FUN_18037fb60 ===== */

undefined8 * FUN_18037fb60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1804ecaa0(0x48);
  *puVar1 = std::
            _Func_impl_no_alloc<`class_std::function<unsigned_char___cdecl(void)>___cdecl_Concurrency::details::_MakeVoidToUnitFunc(std::function<void___cdecl(void)>_const&___ptr64)'::`2'::<lambda_1>,unsigned_char>
            ::vftable;
  puVar1[8] = 0;
  if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
    uVar2 = (**(code **)**(undefined8 **)(param_1 + 0x40))();
    puVar1[8] = uVar2;
  }
  return puVar1;
}



/* ===== 18037fbc0 FUN_18037fbc0 ===== */

TypeDescriptor * FUN_18037fbc0(void)

{
  return &`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'
          ::__l5::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 18037fbd0 FUN_18037fbd0 ===== */

void FUN_18037fbd0(longlong param_1)

{
  FUN_180372700(param_1 + 8);
  return;
}



/* ===== 18037fbe0 FUN_18037fbe0 ===== */

undefined8 * FUN_18037fbe0(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>,void>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



/* ===== 18037fc00 FUN_18037fc00 ===== */

void FUN_18037fc00(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (param_2 == '\0') {
    return;
  }
  thunk_FUN_1803d64e0(param_1,0x20);
  return;
}



/* ===== 18037fc80 FUN_18037fc80 ===== */

TypeDescriptor * FUN_18037fc80(void)

{
  return &`public:___cdecl_`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
          ::__l8::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 18037fc90 FUN_18037fc90 ===== */

void FUN_18037fc90(longlong param_1)

{
  FUN_1803724d0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),0xffffffff);
  return;
}



/* ===== 18037fcb0 FUN_18037fcb0 ===== */

undefined8 * FUN_18037fcb0(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'::`8'::<lambda_1>,void>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_2;
}



/* ===== 18037fcf0 FUN_18037fcf0 ===== */

undefined8 * FUN_18037fcf0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'::`8'::<lambda_1>,void>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}



/* ===== 18037fd30 FUN_18037fd30 ===== */

void FUN_18037fd30(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  
  plVar8 = DAT_181108178;
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_180029d30(&DAT_181108188,2L << (bVar10 & 0x3f),DAT_181108178);
  DAT_1811081a0 = lVar11 - 1;
  DAT_1811081a8 = lVar11;
  plVar7 = (longlong *)*DAT_181108178;
  lVar11 = DAT_181108188;
joined_r0x00018037fdac:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_181108188 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_1811081a0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_181108188 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_181108188;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if (plVar7[2] != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
      plVar7 = plVar1;
      lVar11 = DAT_181108188;
    }
    do {
      if (plVar2 == plVar3) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_181108188;
        goto joined_r0x00018037fdac;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
    lVar11 = *plVar3;
    puVar4 = (undefined8 *)plVar7[1];
    *puVar4 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar11;
    puVar5 = *(undefined8 **)(lVar11 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar11 + 8) = plVar2;
    plVar1[1] = (longlong)puVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar1;
    lVar11 = DAT_181108188;
  } while( true );
}



/* ===== 18037ff30 FUN_18037ff30 ===== */

void FUN_18037ff30(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  
  plVar8 = DAT_181108078;
  for (lVar11 = 0x3f; 0xfffffffffffffffU >> lVar11 == 0; lVar11 = lVar11 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar11 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar9 = param_2 - 1 | 1;
  lVar11 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  bVar10 = (char)lVar11 + 1;
  lVar11 = 1L << (bVar10 & 0x3f);
  FUN_180029a30(&DAT_181108088,2L << (bVar10 & 0x3f),DAT_181108078);
  DAT_1811080a0 = lVar11 - 1;
  DAT_1811080a8 = lVar11;
  plVar7 = (longlong *)*DAT_181108078;
  lVar11 = DAT_181108088;
joined_r0x00018037ffac:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_181108088 = lVar11;
          return;
        }
        plVar1 = (longlong *)*plVar7;
        uVar9 = (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_1811080a0;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_181108088 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_181108088;
      }
      plVar3 = *(longlong **)(lVar11 + 8 + uVar9 * 0x10);
      if (plVar7[2] != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
      plVar7 = plVar1;
      lVar11 = DAT_181108088;
    }
    do {
      if (plVar2 == plVar3) {
        puVar4 = (undefined8 *)plVar7[1];
        *puVar4 = plVar1;
        puVar5 = (undefined8 *)plVar1[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar1[1] = (longlong)puVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_181108088;
        goto joined_r0x00018037ffac;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
    lVar11 = *plVar3;
    puVar4 = (undefined8 *)plVar7[1];
    *puVar4 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar11;
    puVar5 = *(undefined8 **)(lVar11 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar11 + 8) = plVar2;
    plVar1[1] = (longlong)puVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar1;
    lVar11 = DAT_181108088;
  } while( true );
}



/* ===== 180380130 FUN_180380130 ===== */

void FUN_180380130(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x21];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x1a);
    param_1[0x21] = 0;
  }
  *param_1 = std::_Associated_state<int>::vftable;
  if ((*(char *)((longlong)param_1 + 0xc1) != '\0') && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
    FUN_1804eb360(param_1 + 4);
  }
  FUN_1804eb8c0(param_1 + 2);
  return;
}



/* ===== 1803801a0 FUN_1803801a0 ===== */

undefined8 * FUN_1803801a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = std::_Task_async_state<void>::vftable;
  if (param_1[0x22] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180371e20();
  }
  FUN_180372330();
  plVar4 = (longlong *)param_1[0x23];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  FUN_180380130(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x120);
  }
  return param_1;
}



/* ===== 180380230 FUN_180380230 ===== */

void FUN_180380230(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  FUN_18037e4f0(param_1);
  return;
}



/* ===== 180380280 FUN_180380280 ===== */

undefined8 * FUN_180380280(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::vftable;
  if (param_1[0x2e] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180371e20();
  }
  FUN_180372330();
  plVar4 = (longlong *)param_1[0x2f];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x2d];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != param_1 + 0x26);
    param_1[0x2d] = 0;
  }
  FUN_18037e4f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x180);
  }
  return param_1;
}



/* ===== 180380340 FUN_180380340 ===== */

void FUN_180380340(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar5 = param_2;
  if (param_2 < lVar6) {
    do {
      cVar3 = FUN_180023470(param_1 + 0xb0 + lVar5 * 0x90,param_1 + 0x68 + lVar5 * 0x90);
      lVar2 = lVar5 * 9;
      lVar4 = param_1 + lVar5 * 0x48;
      lVar5 = ((longlong)cVar3 >> 0x3f) + (lVar5 + 1) * 2;
      lVar1 = param_1 + lVar5 * 0x48;
      FUN_18002ba60(lVar4,lVar1);
      FUN_18002ba60(param_1 + (lVar2 + 4) * 8,param_1 + 0x20 + lVar5 * 0x48);
      *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
    } while (lVar5 < lVar6);
  }
  if ((lVar5 == lVar6) && ((param_3 & 1) == 0)) {
    lVar5 = param_1 + lVar5 * 0x48;
    FUN_18002ba60(lVar5,param_1 + -0x48 + param_3 * 0x48);
    FUN_18002ba60(lVar5 + 0x20,param_1 + -0x28 + param_3 * 0x48);
    *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(param_1 + -8 + param_3 * 0x48);
    lVar5 = param_3 - 1;
  }
  if (param_2 < lVar5) {
    do {
      lVar4 = lVar5 + -1 >> 1;
      lVar6 = param_1 + lVar4 * 0x48;
      cVar3 = FUN_180023470(lVar6 + 0x20,param_4 + 0x20);
      if (-1 < cVar3) break;
      lVar1 = param_1 + lVar4 * 0x48;
      lVar2 = param_1 + lVar5 * 0x48;
      FUN_18002ba60(lVar2,lVar1);
      FUN_18002ba60(param_1 + 0x20 + lVar5 * 0x48,lVar6 + 0x20);
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
      lVar5 = lVar4;
    } while (param_2 < lVar4);
  }
  param_1 = param_1 + lVar5 * 0x48;
  FUN_18002ba60(param_1,param_4);
  FUN_18002ba60(param_1 + 0x20,param_4 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  return;
}



/* ===== 1803804f0 FUN_1803804f0 ===== */

void FUN_1803804f0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (param_3 - param_1 >> 3) * -0x71c71c71c71c71c7;
  if (lVar2 < 0x29) {
    cVar1 = FUN_180023470(param_2 + 0x20,param_1 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(param_2,param_1);
    }
    cVar1 = FUN_180023470(param_3 + 0x20,param_2 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(param_3,param_2);
      cVar1 = FUN_180023470(param_2 + 0x20,param_1 + 0x20);
      if (cVar1 < '\0') {
        FUN_18026f040(param_2,param_1);
        return;
      }
    }
  }
  else {
    lVar3 = lVar2 + 1 >> 3;
    lVar2 = lVar3 * 0x48 + param_1;
    lVar5 = lVar3 * 0x90 + param_1;
    cVar1 = FUN_180023470(lVar2 + 0x20,param_1 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar2,param_1);
    }
    cVar1 = FUN_180023470(lVar5 + 0x20,lVar2 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar5,lVar2);
      cVar1 = FUN_180023470(lVar2 + 0x20,param_1 + 0x20);
      if (cVar1 < '\0') {
        FUN_18026f040(lVar2,param_1);
      }
    }
    lVar4 = param_2 + lVar3 * -0x48;
    lVar5 = lVar3 * 0x48 + param_2;
    cVar1 = FUN_180023470(param_2 + 0x20,lVar4 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(param_2,lVar4);
    }
    cVar1 = FUN_180023470(lVar5 + 0x20,param_2 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar5,param_2);
      cVar1 = FUN_180023470(param_2 + 0x20,lVar4 + 0x20);
      if (cVar1 < '\0') {
        FUN_18026f040(param_2,lVar4);
      }
    }
    lVar4 = param_3 + lVar3 * -0x90;
    lVar5 = param_3 + lVar3 * -0x48;
    cVar1 = FUN_180023470(lVar5 + 0x20,lVar4 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar5,lVar4);
    }
    cVar1 = FUN_180023470(param_3 + 0x20,lVar5 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(param_3,lVar5);
      cVar1 = FUN_180023470(lVar5 + 0x20,lVar4 + 0x20);
      if (cVar1 < '\0') {
        FUN_18026f040(lVar5,lVar4);
      }
    }
    cVar1 = FUN_180023470(param_2 + 0x20,lVar2 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(param_2,lVar2);
    }
    cVar1 = FUN_180023470(lVar5 + 0x20,param_2 + 0x20);
    if (cVar1 < '\0') {
      FUN_18026f040(lVar5,param_2);
      cVar1 = FUN_180023470(param_2 + 0x20,lVar2 + 0x20);
      if (cVar1 < '\0') {
        FUN_18026f040(param_2,lVar2);
      }
    }
  }
  return;
}



/* ===== 180380740 FUN_180380740 ===== */

void FUN_180380740(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = param_3;
  while (((param_2 < uVar4 && (cVar3 = FUN_180023470(uVar4 - 0x28,uVar4 + 0x20), -1 < cVar3)) &&
         (cVar3 = FUN_180023470(uVar4 + 0x20,uVar4 - 0x28), -1 < cVar3))) {
    uVar4 = uVar4 - 0x48;
  }
  do {
    uVar7 = param_3 + 0x48;
    uVar2 = uVar7;
    uVar5 = uVar4;
    if ((param_4 <= uVar7) || (cVar3 = FUN_180023470(param_3 + 0x68,uVar4 + 0x20), cVar3 < '\0'))
    break;
    cVar3 = FUN_180023470(uVar4 + 0x20,param_3 + 0x68);
    param_3 = uVar7;
  } while (-1 < cVar3);
joined_r0x0001803807d4:
  do {
    if (param_4 <= uVar2) {
joined_r0x000180380822:
      for (; param_2 < uVar4; uVar4 = uVar4 - 0x48) {
        cVar3 = FUN_180023470(uVar4 - 0x28,uVar5 + 0x20);
        if (-1 < cVar3) {
          cVar3 = FUN_180023470(uVar5 + 0x20,uVar4 - 0x28);
          if (cVar3 < '\0') break;
          if (uVar4 != uVar5) {
            FUN_18026f040(uVar5 - 0x48,uVar4 - 0x48);
          }
          uVar5 = uVar5 - 0x48;
        }
      }
      if ((uVar4 == param_2) && (uVar2 == param_4)) {
        *param_1 = uVar5;
        param_1[1] = uVar7;
        return;
      }
      if (uVar4 == param_2) {
        if (uVar7 != uVar2) {
          FUN_18026f040(uVar5,uVar7);
        }
        uVar7 = uVar7 + 0x48;
        FUN_18026f040(uVar5,uVar2);
        uVar2 = uVar2 + 0x48;
        uVar5 = uVar5 + 0x48;
      }
      else {
        uVar1 = uVar4 - 0x48;
        if (uVar2 == param_4) {
          uVar6 = uVar5 - 0x48;
          if (uVar5 != uVar4) {
            FUN_18026f040(uVar1,uVar6);
          }
          uVar7 = uVar7 - 0x48;
          FUN_18026f040(uVar6,uVar7);
          uVar4 = uVar1;
          uVar5 = uVar6;
        }
        else {
          FUN_18026f040(uVar2,uVar1);
          uVar2 = uVar2 + 0x48;
          uVar4 = uVar1;
        }
      }
      goto joined_r0x0001803807d4;
    }
    cVar3 = FUN_180023470(uVar5 + 0x20,uVar2 + 0x20);
    if (-1 < cVar3) {
      cVar3 = FUN_180023470(uVar2 + 0x20,uVar5 + 0x20);
      if (cVar3 < '\0') goto joined_r0x000180380822;
      if (uVar7 != uVar2) {
        FUN_18026f040(uVar7,uVar2);
      }
      uVar7 = uVar7 + 0x48;
    }
    uVar2 = uVar2 + 0x48;
  } while( true );
}



/* ===== 180380940 FUN_180380940 ===== */

longlong FUN_180380940(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  while (lVar2 = param_2, lVar1 = param_3, lVar2 != param_1) {
    param_2 = lVar2 + -0x60;
    param_3 = lVar1 + -0x60;
    FUN_18002ba60(param_3,param_2);
    FUN_18002ba60(lVar1 + -0x40,lVar2 + -0x40);
    *(undefined4 *)(lVar1 + -0x20) = *(undefined4 *)(lVar2 + -0x20);
    *(undefined1 *)(lVar1 + -0x1c) = *(undefined1 *)(lVar2 + -0x1c);
    if (lVar1 != lVar2) {
      FUN_18037e6d0(lVar1 + -0x18);
      *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
      *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined8 *)(lVar2 + -8) = 0;
    }
  }
  return lVar1;
}



/* ===== 180380a20 FUN_180380a20 ===== */

void FUN_180380a20(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = param_3 - 1;
  lVar7 = lVar5 >> 1;
  lVar8 = param_2;
  if (param_2 < lVar7) {
    do {
      cVar1 = FUN_180023470(param_1 + 0xe0 + lVar8 * 0xc0,param_1 + 0x80 + lVar8 * 0xc0);
      lVar6 = lVar8 * 0x60;
      lVar8 = ((longlong)cVar1 >> 0x3f) + (lVar8 + 1) * 2;
      lVar3 = lVar8 * 0x60;
      lVar2 = lVar6 + param_1;
      lVar4 = lVar3 + param_1;
      FUN_18002ba60(lVar2,lVar4);
      FUN_18002ba60(param_1 + 0x20 + lVar6,param_1 + 0x20 + lVar3);
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar4 + 0x40);
      *(undefined1 *)(lVar2 + 0x44) = *(undefined1 *)(lVar4 + 0x44);
      if (lVar6 != lVar3) {
        FUN_18037e6d0();
        *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar4 + 0x48);
        *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
        *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar4 + 0x58);
        *(undefined8 *)(lVar4 + 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x50) = 0;
        *(undefined8 *)(lVar4 + 0x58) = 0;
      }
    } while (lVar8 < lVar7);
  }
  if ((lVar8 == lVar7) && ((param_3 & 1) == 0)) {
    lVar4 = param_3 * 0x60;
    lVar2 = lVar8 * 0x60 + param_1;
    lVar7 = param_1 + -0x60 + lVar4;
    FUN_18002ba60(lVar2,lVar7);
    FUN_18002ba60(lVar2 + 0x20,param_1 + -0x40 + lVar4);
    *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar4 + -0x20 + param_1);
    *(undefined1 *)(lVar2 + 0x44) = *(undefined1 *)(lVar4 + -0x1c + param_1);
    lVar8 = lVar5;
    if (lVar2 != lVar7) {
      FUN_18037e6d0(lVar2 + 0x48);
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar4 + -0x18 + param_1);
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar4 + -0x10 + param_1);
      *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(lVar4 + -8 + param_1);
      *(undefined8 *)(lVar4 + -0x18 + param_1) = 0;
      *(undefined8 *)(lVar4 + -0x10 + param_1) = 0;
      *(undefined8 *)(lVar4 + -8 + param_1) = 0;
    }
  }
  while (param_2 < lVar8) {
    lVar5 = lVar8 + -1 >> 1;
    lVar7 = lVar5 * 0x60;
    cVar1 = FUN_180023470(param_1 + 0x20 + lVar7,param_4 + 0x20);
    if (-1 < cVar1) break;
    FUN_1803760d0(lVar8 * 0x60 + param_1,lVar7 + param_1);
    lVar8 = lVar5;
  }
  param_1 = lVar8 * 0x60 + param_1;
  FUN_18002ba60(param_1,param_4);
  FUN_18002ba60(param_1 + 0x20,param_4 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_4 + 0x44);
  if (param_1 != param_4) {
    FUN_18037e6d0(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_4 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x58);
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined8 *)(param_4 + 0x50) = 0;
    *(undefined8 *)(param_4 + 0x58) = 0;
  }
  return;
}



/* ===== 180380cb0 FUN_180380cb0 ===== */

void FUN_180380cb0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (param_3 - param_1 >> 5) * -0x5555555555555555;
  if (lVar2 < 0x29) {
    cVar1 = FUN_180023470(param_2 + 0x20,param_1 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(param_2,param_1);
    }
    cVar1 = FUN_180023470(param_3 + 0x20,param_2 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(param_3,param_2);
      cVar1 = FUN_180023470(param_2 + 0x20,param_1 + 0x20);
      if (cVar1 < '\0') {
        FUN_180381df0(param_2,param_1);
        return;
      }
    }
  }
  else {
    lVar3 = lVar2 + 1 >> 3;
    lVar5 = lVar3 * 0x60;
    lVar2 = lVar5 + param_1;
    cVar1 = FUN_180023470(lVar2 + 0x20,param_1 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(lVar2,param_1);
    }
    cVar1 = FUN_180023470((lVar3 * 0xc0 | 0x20U) + param_1,lVar2 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(lVar3 * 0xc0 + param_1,lVar2);
      cVar1 = FUN_180023470(lVar2 + 0x20,param_1 + 0x20);
      if (cVar1 < '\0') {
        FUN_180381df0(lVar2,param_1);
      }
    }
    lVar4 = param_2 + lVar3 * -0x60;
    cVar1 = FUN_180023470(param_2 + 0x20,lVar4 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(param_2,lVar4);
    }
    cVar1 = FUN_180023470(param_2 + 0x20 + lVar5,param_2 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(lVar5 + param_2,param_2);
      cVar1 = FUN_180023470(param_2 + 0x20,lVar4 + 0x20);
      if (cVar1 < '\0') {
        FUN_180381df0(param_2,lVar4);
      }
    }
    lVar5 = param_3 + lVar3 * -0x60;
    lVar3 = param_3 + lVar3 * -0xc0;
    cVar1 = FUN_180023470(lVar5 + 0x20,lVar3 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(lVar5,lVar3);
    }
    cVar1 = FUN_180023470(param_3 + 0x20,lVar5 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(param_3,lVar5);
      cVar1 = FUN_180023470(lVar5 + 0x20,lVar3 + 0x20);
      if (cVar1 < '\0') {
        FUN_180381df0(lVar5,lVar3);
      }
    }
    cVar1 = FUN_180023470(param_2 + 0x20,lVar2 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(param_2,lVar2);
    }
    cVar1 = FUN_180023470(lVar5 + 0x20,param_2 + 0x20);
    if (cVar1 < '\0') {
      FUN_180381df0(lVar5,param_2);
      cVar1 = FUN_180023470(param_2 + 0x20,lVar2 + 0x20);
      if (cVar1 < '\0') {
        FUN_180381df0(param_2,lVar2);
      }
    }
  }
  return;
}



/* ===== 180380f00 FUN_180380f00 ===== */

void FUN_180380f00(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = param_3;
  while (((param_2 < uVar4 && (cVar3 = FUN_180023470(uVar4 - 0x40,uVar4 + 0x20), -1 < cVar3)) &&
         (cVar3 = FUN_180023470(uVar4 + 0x20,uVar4 - 0x40), -1 < cVar3))) {
    uVar4 = uVar4 - 0x60;
  }
  do {
    uVar7 = param_3 + 0x60;
    uVar2 = uVar7;
    uVar5 = uVar4;
    if ((param_4 <= uVar7) || (cVar3 = FUN_180023470(param_3 + 0x80,uVar4 + 0x20), cVar3 < '\0'))
    break;
    cVar3 = FUN_180023470(uVar4 + 0x20,param_3 + 0x80);
    param_3 = uVar7;
  } while (-1 < cVar3);
joined_r0x000180380f94:
  do {
    if (param_4 <= uVar2) {
joined_r0x000180380fe2:
      for (; param_2 < uVar4; uVar4 = uVar4 - 0x60) {
        cVar3 = FUN_180023470(uVar4 - 0x40,uVar5 + 0x20);
        if (-1 < cVar3) {
          cVar3 = FUN_180023470(uVar5 + 0x20,uVar4 - 0x40);
          if (cVar3 < '\0') break;
          if (uVar4 != uVar5) {
            FUN_180381df0(uVar5 - 0x60,uVar4 - 0x60);
          }
          uVar5 = uVar5 - 0x60;
        }
      }
      if ((uVar4 == param_2) && (uVar2 == param_4)) {
        *param_1 = uVar5;
        param_1[1] = uVar7;
        return;
      }
      if (uVar4 == param_2) {
        if (uVar7 != uVar2) {
          FUN_180381df0(uVar5,uVar7);
        }
        uVar7 = uVar7 + 0x60;
        FUN_180381df0(uVar5,uVar2);
        uVar2 = uVar2 + 0x60;
        uVar5 = uVar5 + 0x60;
      }
      else {
        uVar1 = uVar4 - 0x60;
        if (uVar2 == param_4) {
          uVar6 = uVar5 - 0x60;
          if (uVar5 != uVar4) {
            FUN_180381df0(uVar1,uVar6);
          }
          uVar7 = uVar7 - 0x60;
          FUN_180381df0(uVar6,uVar7);
          uVar4 = uVar1;
          uVar5 = uVar6;
        }
        else {
          FUN_180381df0(uVar2,uVar1);
          uVar2 = uVar2 + 0x60;
          uVar4 = uVar1;
        }
      }
      goto joined_r0x000180380f94;
    }
    cVar3 = FUN_180023470(uVar5 + 0x20,uVar2 + 0x20);
    if (-1 < cVar3) {
      cVar3 = FUN_180023470(uVar2 + 0x20,uVar5 + 0x20);
      if (cVar3 < '\0') goto joined_r0x000180380fe2;
      if (uVar7 != uVar2) {
        FUN_180381df0(uVar7,uVar2);
      }
      uVar7 = uVar7 + 0x60;
    }
    uVar2 = uVar2 + 0x60;
  } while( true );
}



/* ===== 180381100 FUN_180381100 ===== */

undefined8 * FUN_180381100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = 1;
  *param_1 = std::_Associated_state<int>::vftable;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_1804ec0b0();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  *param_1 = std::_Packaged_state<void___cdecl(void)>::vftable;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  param_1[0x21] = 0;
  param_1[0x1a] =
       std::
       _Func_impl_no_alloc<std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>,void>
       ::vftable;
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar3;
  param_1[0x1d] = uVar2;
  param_1[0x1e] = param_2[3];
  param_1[0x21] = param_1 + 0x1a;
  return param_1;
}



/* ===== 180381220 FUN_180381220 ===== */

undefined8 FUN_180381220(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_3 + 0x30) = 1;
  *(undefined8 *)(param_3 + 0x38) = unaff_retaddr;
  if ((undefined8 *)(param_3 + 0x40) != &local_28) {
    FUN_18025d1c0((undefined8 *)(param_3 + 0x40),0,0);
  }
  FUN_1800132b0(&local_28);
  FUN_1803820b0(param_1,param_2,param_3);
  FUN_180372b70(param_3);
  return param_1;
}



/* ===== 1803812b0 FUN_1803812b0 ===== */

undefined8 * FUN_1803812b0(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = std::_Associated_state<skybox::_anon_13F7984E::compile_result>::vftable;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0x69) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6f) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xf;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1804ec0b0();
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x122) = 0;
  param_1[0x25] = 0;
  *param_1 = std::_Packaged_state<struct_skybox::_anon_13F7984E::compile_result___cdecl(void)>::
             vftable;
  param_1[0x2d] = 0;
  puVar2 = (undefined8 *)FUN_1804ecaa0(0x58);
  *puVar2 = std::
            _Func_impl_no_alloc<std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>,skybox::_anon_13F7984E::compile_result>
            ::vftable;
  *(undefined1 *)(puVar2 + 1) = *param_2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  puVar2[2] = *(undefined8 *)(param_2 + 8);
  puVar2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puVar2[4] = *(undefined8 *)(param_2 + 0x18);
  puVar2[5] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xf;
  param_2[8] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  puVar2[6] = *(undefined8 *)(param_2 + 0x28);
  puVar2[7] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  puVar2[8] = *(undefined8 *)(param_2 + 0x38);
  puVar2[9] = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0xf;
  param_2[0x28] = 0;
  puVar2[10] = *(undefined8 *)(param_2 + 0x48);
  param_1[0x2d] = puVar2;
  return param_1;
}



/* ===== 180381470 FUN_180381470 ===== */

undefined8 FUN_180381470(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 unaff_retaddr;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_3 + 0x30) = 1;
  *(undefined8 *)(param_3 + 0x38) = unaff_retaddr;
  if ((undefined8 *)(param_3 + 0x40) != &local_28) {
    FUN_18025d1c0((undefined8 *)(param_3 + 0x40),0,0);
  }
  FUN_1800132b0(&local_28);
  FUN_180382290(param_1,param_2,param_3);
  FUN_180372b70(param_3);
  return param_1;
}



/* ===== 180381500 FUN_180381500 ===== */

undefined8 * FUN_180381500(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
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
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)param_3 + 0x44) = *(undefined1 *)((longlong)param_1 + 0x44);
    uVar1 = param_1[0xb];
    uVar2 = param_1[10];
    uVar3 = param_1[9];
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_3[9] = uVar3;
    param_3[10] = uVar2;
    param_3[0xb] = uVar1;
    param_3 = param_3 + 0xc;
  }
  return param_3;
}



/* ===== 1803815d0 FUN_1803815d0 ===== */

undefined8 * FUN_1803815d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 10) {
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
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)param_3 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x44);
    *(undefined4 *)(param_3 + 9) = *(undefined4 *)(param_1 + 9);
    param_3 = param_3 + 10;
  }
  return param_3;
}



/* ===== 180381670 FUN_180381670 ===== */

void FUN_180381670(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018038167a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10,0);
  return;
}



/* ===== 180381680 FUN_180381680 ===== */

TypeDescriptor * FUN_180381680(void)

{
  return &`public:_virtual_bool___cdecl_Concurrency::details::_Task_impl<unsigned_char>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<Concurrency::details::_ExceptionHolder>_const&___ptr64)___ptr64'
          ::__l34::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180381690 FUN_180381690 ===== */

void FUN_180381690(longlong param_1)

{
  FUN_1803728b0(*(undefined8 *)(param_1 + 8));
  return;
}



/* ===== 1803816a0 FUN_1803816a0 ===== */

undefined8 * FUN_1803816a0(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<`public:_virtual_bool___cdecl_Concurrency::details::_Task_impl<unsigned_char>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<Concurrency::details::_ExceptionHolder>_const&___ptr64)___ptr64'::`34'::<lambda_1>,void>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



/* ===== 1803816c0 FUN_1803816c0 ===== */

void FUN_1803816c0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}



/* ===== 1803816f0 FUN_1803816f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803816f0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  char local_90;
  longlong *local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [32];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)param_1[0x2d];
  local_88 = param_1;
  if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cb0();
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,local_78);
  local_98 = param_1 + 0x10;
  local_90 = 0;
  iVar2 = FUN_1804e4d70();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0xcc) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_90 = '\x01';
  if (*(char *)((longlong)param_1 + 0x121) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(3);
  }
  FUN_18002ba60(param_1 + 2,local_78);
  FUN_180081c90(param_1 + 6,local_58);
  FUN_18002ba60(param_1 + 9,local_40);
  *(undefined1 *)(param_1 + 0xd) = local_20;
  (**(code **)(*param_1 + 0x28))(param_1,&local_98,0);
  if (local_90 != '\0') {
    FUN_1804e4e90(local_98);
  }
  FUN_18000f890(local_40);
  FUN_180081c30(local_58);
  FUN_18000f890(local_78);
  return;
}



/* ===== 180381840 FUN_180381840 ===== */

void FUN_180381840(longlong *param_1)

{
  int iVar1;
  longlong *local_18;
  char local_10;
  
  if ((longlong *)param_1[0x21] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cb0();
  }
  (**(code **)(*(longlong *)param_1[0x21] + 0x10))();
  local_18 = param_1 + 4;
  local_10 = 0;
  iVar1 = FUN_1804e4d70();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_10 = '\x01';
  if (*(char *)((longlong)param_1 + 0xc1) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(3);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  (**(code **)(*param_1 + 0x28))(param_1,&local_18,0);
  if (local_10 != '\0') {
    FUN_1804e4e90(local_18);
  }
  return;
}



/* ===== 1803818f0 FUN_1803818f0 ===== */

void FUN_1803818f0(undefined8 param_1,ulonglong param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong _Size;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  
  plVar9 = DAT_181108128;
  for (lVar17 = 0x3f; 0xfffffffffffffffU >> lVar17 == 0; lVar17 = lVar17 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar17 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("invalid hash bucket count");
  }
  uVar11 = param_2 - 1 | 1;
  lVar17 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
    }
  }
  bVar13 = (char)lVar17 + 1;
  lVar17 = 1L << (bVar13 & 0x3f);
  FUN_180029d30(&DAT_181108138,2L << (bVar13 & 0x3f),DAT_181108128);
  DAT_181108150 = lVar17 - 1;
  DAT_181108158 = lVar17;
  plVar8 = (longlong *)*DAT_181108128;
joined_r0x00018038197a:
  do {
    while( true ) {
      if (plVar8 == plVar9) {
        return;
      }
      uVar11 = plVar8[5];
      plVar18 = plVar8 + 2;
      plVar3 = (longlong *)*plVar8;
      _Size = plVar8[4];
      uVar12 = 0xcbf29ce484222325;
      if (0xf < uVar11) {
        plVar18 = (longlong *)plVar8[2];
      }
      uVar15 = 0;
      if (_Size != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar18 + uVar15);
          uVar15 = uVar15 + 1;
          uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
        } while (uVar15 < _Size);
      }
      uVar12 = uVar12 & DAT_181108150;
      plVar18 = *(longlong **)(DAT_181108138 + uVar12 * 0x10);
      puVar2 = (undefined8 *)(DAT_181108138 + uVar12 * 0x10);
      lVar17 = DAT_181108138 + uVar12 * 0x10;
      if (plVar18 != plVar9) break;
      *puVar2 = plVar8;
      *(longlong **)(lVar17 + 8) = plVar8;
      plVar8 = plVar3;
    }
    plVar4 = *(longlong **)(lVar17 + 8);
    plVar16 = plVar4 + 2;
    if (0xf < (ulonglong)plVar4[5]) {
      plVar16 = (longlong *)*plVar16;
    }
    plVar14 = plVar8 + 2;
    if (0xf < uVar11) {
      plVar14 = (longlong *)plVar8[2];
    }
    if (_Size != plVar4[4]) {
joined_r0x000180381a83:
      while (plVar18 != plVar4) {
        plVar4 = (longlong *)plVar4[1];
        plVar16 = plVar4 + 2;
        if (0xf < (ulonglong)plVar4[5]) {
          plVar16 = (longlong *)*plVar16;
        }
        if (uVar11 < 0x10) {
          plVar14 = plVar8 + 2;
        }
        else {
          plVar14 = (longlong *)plVar8[2];
        }
        if (_Size == plVar4[4]) {
          if ((_Size == 0) || (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 == 0)) {
            lVar17 = *plVar4;
            puVar2 = (undefined8 *)plVar8[1];
            *puVar2 = plVar3;
            plVar18 = (longlong *)plVar3[1];
            *plVar18 = lVar17;
            puVar5 = *(undefined8 **)(lVar17 + 8);
            *puVar5 = plVar8;
            *(longlong **)(lVar17 + 8) = plVar18;
            plVar3[1] = (longlong)puVar2;
            plVar8[1] = (longlong)puVar5;
            plVar8 = plVar3;
            goto joined_r0x00018038197a;
          }
          uVar11 = plVar8[5];
        }
      }
      puVar5 = (undefined8 *)plVar8[1];
      *puVar5 = plVar3;
      puVar6 = (undefined8 *)plVar3[1];
      *puVar6 = plVar4;
      puVar7 = (undefined8 *)plVar4[1];
      *puVar7 = plVar8;
      plVar4[1] = (longlong)puVar6;
      plVar3[1] = (longlong)puVar5;
      plVar8[1] = (longlong)puVar7;
      *puVar2 = plVar8;
      plVar8 = plVar3;
      goto joined_r0x00018038197a;
    }
    if ((_Size != 0) && (iVar10 = memcmp(plVar14,plVar16,_Size), iVar10 != 0)) {
      uVar11 = plVar8[5];
      goto joined_r0x000180381a83;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != plVar8) {
      puVar2 = (undefined8 *)plVar8[1];
      *puVar2 = plVar3;
      puVar5 = (undefined8 *)plVar3[1];
      *puVar5 = plVar4;
      puVar6 = (undefined8 *)plVar4[1];
      *puVar6 = plVar8;
      plVar4[1] = (longlong)puVar5;
      plVar3[1] = (longlong)puVar2;
      plVar8[1] = (longlong)puVar6;
    }
    *(longlong **)(lVar17 + 8) = plVar8;
    plVar8 = plVar3;
  } while( true );
}



/* ===== 180381b70 FUN_180381b70 ===== */

void FUN_180381b70(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x50) {
    FUN_18000f890(lVar4 + 0x20);
    FUN_18000f890(lVar4);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x50;
  if (0xfff < uVar3) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    if ((*(longlong *)(param_1 + 8) - lVar4) - 8U < 0x20) {
      thunk_FUN_1803d64e0(lVar4,uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0();
  return;
}



/* ===== 180381c20 FUN_180381c20 ===== */

void FUN_180381c20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  if (lVar3 == 0) goto LAB_180381cd5;
  lVar2 = param_1[1];
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x50) {
    FUN_18000f890(lVar3 + 0x20);
    FUN_18000f890(lVar3);
  }
  lVar3 = *param_1;
  lVar2 = lVar3;
  if ((ulonglong)((param_1[2] - lVar3 >> 4) << 4) < 0x1000) {
LAB_180381cca:
    puVar5 = puVar4;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + -8);
    if (0x1f < (lVar3 - lVar2) - 8U) {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar4 = auStack_30;
      goto LAB_180381cca;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x180381cd5;
  thunk_FUN_1803d64e0(lVar2);
LAB_180381cd5:
  *param_1 = param_2;
  param_1[1] = param_3 * 0x50 + param_2;
  param_1[2] = param_4 * 0x50 + param_2;
  return;
}



/* ===== 180381d10 FUN_180381d10 ===== */

undefined8 FUN_180381d10(undefined8 param_1,ulonglong param_2)

{
  FUN_180380130();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x110);
  }
  return param_1;
}



/* ===== 180381d50 FUN_180381d50 ===== */

longlong FUN_180381d50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  FUN_18037e4f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x170);
  }
  return param_1;
}



/* ===== 180381dc0 FUN_180381dc0 ===== */

undefined8 * FUN_180381dc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<Concurrency::details::_Task_impl<unsigned_char>_>::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x1c8);
  }
  return param_1;
}



/* ===== 180381df0 FUN_180381df0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180381df0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_98 = *param_1;
  uStack_90 = param_1[1];
  local_88 = param_1[2];
  uStack_80 = param_1[3];
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_78 = param_1[4];
  local_60 = param_1[7];
  uStack_70 = param_1[5];
  uStack_68 = *(undefined4 *)(param_1 + 6);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x34);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  local_58 = *(undefined4 *)(param_1 + 8);
  local_48 = param_1[10];
  uStack_40 = param_1[0xb];
  local_54 = *(undefined1 *)((longlong)param_1 + 0x44);
  local_50 = param_1[9];
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  FUN_18002ba60(*(undefined4 *)(param_1 + 5),param_2);
  FUN_18002ba60(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
  if (param_1 != param_2) {
    FUN_18037e6d0(param_1 + 9);
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  puVar1 = param_2 + 9;
  FUN_18002ba60(param_2,&local_98);
  FUN_18002ba60(param_2 + 4,&local_78);
  *(undefined4 *)(param_2 + 8) = local_58;
  *(undefined1 *)((longlong)param_2 + 0x44) = local_54;
  if (puVar1 != &local_50) {
    FUN_18037e6d0(puVar1);
    *puVar1 = local_50;
    param_2[10] = local_48;
    param_2[0xb] = uStack_40;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
  }
  FUN_18037e6d0(&local_50);
  FUN_18000f890(&local_78);
  FUN_18000f890(&local_98);
  return;
}



/* ===== 180381fa0 FUN_180381fa0 ===== */

undefined8 FUN_180381fa0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = FUN_1804eb010();
    lVar2 = FUN_1804eaff0();
    if (lVar1 == 10000000) {
      lVar2 = lVar2 * 100;
    }
    else {
      if (lVar1 == 24000000) {
        lVar3 = (lVar2 * 2) / 3;
        lVar2 = lVar2 * 0x29;
      }
      else {
        lVar3 = ((lVar2 % lVar1) * 1000000000) / lVar1;
        lVar2 = (lVar2 / lVar1) * 1000000000;
      }
      lVar2 = lVar3 + lVar2;
    }
    if ((param_3 == lVar2) || (param_3 < lVar2)) {
      return 1;
    }
    lVar2 = param_3 - lVar2;
    if (lVar2 < 0x4e94914f0001) {
      uVar5 = lVar2 / 1000000;
      if ((longlong)(uVar5 * 1000000) < lVar2) {
        uVar5 = uVar5 + 1;
      }
    }
    else {
      uVar5 = 86400000;
    }
    uVar4 = FUN_1804ec5f0(param_1,*param_2,uVar5 & 0xffffffff);
  } while ((int)uVar4 != 0);
  return uVar4;
}



/* ===== 1803820b0 FUN_1803820b0 ===== */

longlong * FUN_1803820b0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = param_3[2];
  plVar3 = (longlong *)param_3[3];
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x2;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar7 = plVar3;
  }
  FUN_18037caf0(0,plVar7,&local_68);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  cVar2 = *(char *)(param_3 + 6);
  if (cVar2 == '\0') {
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    puVar6 = (undefined8 *)((longlong)register0x00000020 + -0x48);
  }
  else {
    puVar6 = (undefined8 *)FUN_180371fc0(&local_68,param_3 + 7);
  }
  puVar4 = (undefined8 *)*param_1;
  puVar4[0x28] = *puVar6;
  if (puVar4 != puVar6 + -0x28) {
    FUN_18025d1c0(puVar4 + 0x29,puVar6[1],(longlong)(puVar6[2] - puVar6[1]) >> 3);
  }
  if (cVar2 == '\0') {
    FUN_1800132b0(&local_40);
  }
  else {
    FUN_1800132b0(&uStack_60);
  }
  *(undefined1 *)(*param_1 + 0xc) = 0;
  *(undefined1 *)(*param_1 + 0xd) = 0;
  _guard_check_icall(*param_1 + 0x160,0);
  lVar5 = *param_1;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x20);
  *puVar6 = Concurrency::details::
            _PPLTaskHandle<unsigned_char,Concurrency::task<unsigned_char>::_InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<void>::_Task_async_state<void><std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>(std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_TaskProcHandle>
            ::vftable;
  puVar6[1] = 0;
  puVar6[2] = 0;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[1] = *param_1;
  puVar6[2] = param_1[1];
  *puVar6 = Concurrency::task<unsigned_char>::
            _InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<void>::_Task_async_state<void><std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>(std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>
            ::vftable;
  puVar6[3] = param_2;
  FUN_1803724d0(lVar5,puVar6,0);
  return param_1;
}



/* ===== 180382290 FUN_180382290 ===== */

longlong * FUN_180382290(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = param_3[2];
  plVar3 = (longlong *)param_3[3];
  if (plVar3 == (longlong *)0x0) {
    plVar7 = (longlong *)0x2;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar7 = plVar3;
  }
  FUN_18037caf0(0,plVar7,&local_68);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  cVar2 = *(char *)(param_3 + 6);
  if (cVar2 == '\0') {
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    puVar6 = (undefined8 *)((longlong)register0x00000020 + -0x48);
  }
  else {
    puVar6 = (undefined8 *)FUN_180371fc0(&local_68,param_3 + 7);
  }
  puVar4 = (undefined8 *)*param_1;
  puVar4[0x28] = *puVar6;
  if (puVar4 != puVar6 + -0x28) {
    FUN_18025d1c0(puVar4 + 0x29,puVar6[1],(longlong)(puVar6[2] - puVar6[1]) >> 3);
  }
  if (cVar2 == '\0') {
    FUN_1800132b0(&local_40);
  }
  else {
    FUN_1800132b0(&uStack_60);
  }
  *(undefined1 *)(*param_1 + 0xc) = 0;
  *(undefined1 *)(*param_1 + 0xd) = 0;
  _guard_check_icall(*param_1 + 0x160,0);
  lVar5 = *param_1;
  puVar6 = (undefined8 *)FUN_1804ecaa0(0x20);
  *puVar6 = Concurrency::details::
            _PPLTaskHandle<unsigned_char,Concurrency::task<unsigned_char>::_InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::_Task_async_state<skybox::_anon_13F7984E::compile_result><std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>_>(std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_TaskProcHandle>
            ::vftable;
  puVar6[1] = 0;
  puVar6[2] = 0;
  if (param_1[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[1] = *param_1;
  puVar6[2] = param_1[1];
  *puVar6 = Concurrency::task<unsigned_char>::
            _InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::_Task_async_state<skybox::_anon_13F7984E::compile_result><std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>_>(std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>
            ::vftable;
  puVar6[3] = param_2;
  FUN_1803724d0(lVar5,puVar6,0);
  return param_1;
}



/* ===== 180382470 FUN_180382470 ===== */

void FUN_180382470(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  longlong *local_18;
  char local_10;
  
  local_18 = param_1 + 0x10;
  local_10 = 0;
  iVar1 = FUN_1804e4d70();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)((longlong)param_1 + 0xcc) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_10 = '\x01';
  local_28 = 0;
  uStack_20 = 0;
  FUN_1804ec080(&local_28,param_2);
  if (*(char *)((longlong)param_1 + 0x121) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180372cb0(3);
  }
  FUN_1804ebfe0(param_1 + 0xe,&local_28);
  (**(code **)(*param_1 + 0x28))(param_1,&local_18,0);
  FUN_1804eb8c0(&local_28);
  if (local_10 != '\0') {
    FUN_1804e4e90(local_18);
  }
  FUN_1804eb8c0(param_2);
  return;
}



/* ===== 180382560 FUN_180382560 ===== */

undefined8 * FUN_180382560(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_3[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_28 = *param_3;
  local_20 = param_3[1];
  local_18 = param_3[2];
  FUN_180372090(param_1,param_2,&local_28);
  *param_1 = Concurrency::details::_Task_impl<unsigned_char>::vftable;
  param_1[0x36] = 0;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    return param_1;
  }
  LOCK();
  plVar2 = plVar4 + 1;
  lVar5 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar5 == 1) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  return param_1;
}



/* ===== 180382620 FUN_180382620 ===== */

void FUN_180382620(longlong param_1,char param_2)

{
  FUN_18000f890(param_1 + 0x30);
  FUN_18000f890(param_1 + 0x10);
  if (param_2 != '\0') {
    thunk_FUN_1803d64e0(param_1,0x58);
  }
  return;
}



/* ===== 180382660 FUN_180382660 ===== */

TypeDescriptor * FUN_180382660(void)

{
  return &std::
          _Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>
          ::RTTI_Type_Descriptor;
}



/* ===== 180382670 FUN_180382670 ===== */

undefined8 FUN_180382670(longlong param_1,undefined8 param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_50 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xf;
  local_30 = *(undefined4 *)(param_1 + 0x30);
  uStack_2c = *(undefined4 *)(param_1 + 0x34);
  uStack_28 = *(undefined4 *)(param_1 + 0x38);
  uStack_24 = *(undefined4 *)(param_1 + 0x3c);
  local_20 = *(undefined4 *)(param_1 + 0x40);
  uStack_1c = *(undefined4 *)(param_1 + 0x44);
  uStack_18 = *(undefined4 *)(param_1 + 0x48);
  uStack_14 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  (**(code **)(param_1 + 0x50))(param_2,&local_30,&local_50,*(undefined1 *)(param_1 + 8));
  return param_2;
}



/* ===== 1803826f0 FUN_1803826f0 ===== */

void FUN_1803826f0(longlong param_1)

{
  code *pcVar1;
  
  FUN_180382820(param_1 + 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180382700 FUN_180382700 ===== */

void FUN_180382700(longlong param_1,char param_2)

{
  FUN_1800288b0(param_1 + 8);
  if (param_2 != '\0') {
    thunk_FUN_1803d64e0(param_1,0x28);
  }
  return;
}



/* ===== 180382740 FUN_180382740 ===== */

TypeDescriptor * FUN_180382740(void)

{
  return &std::
          _Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>
          ::RTTI_Type_Descriptor;
}



/* ===== 180382750 FUN_180382750 ===== */

void FUN_180382750(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  (**(code **)(param_1 + 0x20))(&local_28);
  return;
}



/* ===== 180382790 FUN_180382790 ===== */

undefined8 * FUN_180382790(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = std::
             _Func_impl_no_alloc<std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>,void>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar3;
  param_2[3] = uVar2;
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  return param_2;
}



/* ===== 1803827d0 FUN_1803827d0 ===== */

void FUN_1803827d0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_18000d730(0x28);
  FUN_180382850(uVar2,param_1 + 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 1803827f0 FUN_1803827f0 ===== */

undefined8 * FUN_1803827f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  return param_1;
}



/* ===== 180382820 FUN_180382820 ===== */

void FUN_180382820(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_18000fb70(0x58);
  uVar2 = FUN_18000d730(0x58,uVar2);
  FUN_180382d40(uVar2,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180382850 FUN_180382850 ===== */

void FUN_180382850(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = std::
             _Func_impl_no_alloc<std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>,void>
             ::vftable;
  FUN_180382d60(param_1 + 1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180382870 FUN_180382870 ===== */

void FUN_180382870(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined **local_a8;
  undefined8 local_a0;
  undefined ***local_70;
  undefined1 local_68 [64];
  
  plVar1 = (longlong *)(param_1 + 8);
  cVar5 = FUN_180382d70(*plVar1);
  if (cVar5 == '\0') {
    plVar1 = (longlong *)*plVar1;
    (**(code **)(*plVar1 + 8))(plVar1,1,0,0,plVar1 + 2);
    return;
  }
  lVar2 = *plVar1;
  local_a8 = std::
             _Func_impl_no_alloc<`public:___cdecl_std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::_Task_async_state<skybox::_anon_13F7984E::compile_result><std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>_>(std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>&&___ptr64)___ptr64'::`2'::<lambda_1>,void>
             ::vftable;
  local_a0 = *(undefined8 *)(param_1 + 0x18);
  local_70 = &local_a8;
  plVar7 = (longlong *)FUN_180372a70(local_68,&local_a8);
  lVar3 = *plVar1;
  _guard_check_icall(lVar3 + 0x160);
  if ((longlong *)plVar7[7] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cb0();
  }
  uVar6 = (**(code **)(*(longlong *)plVar7[7] + 0x10))();
  _guard_check_icall(lVar3 + 0x160);
  plVar4 = (longlong *)plVar7[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar7);
    plVar7[7] = 0;
  }
  FUN_18037e640(lVar2,uVar6);
  _guard_check_icall(*plVar1 + 0x160);
  return;
}



/* ===== 1803829a0 FUN_1803829a0 ===== */

void FUN_1803829a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = Concurrency::details::
             _PPLTaskHandle<unsigned_char,Concurrency::task<unsigned_char>::_InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::_Task_async_state<skybox::_anon_13F7984E::compile_result><std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>_>(std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_TaskProcHandle>
             ::vftable;
  _guard_check_icall(param_1[1] + 0x160);
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  *param_1 = Concurrency::details::_TaskProcHandle::vftable;
  return;
}



/* ===== 180382a20 FUN_180382a20 ===== */

void FUN_180382a20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined **local_a8;
  undefined8 local_a0;
  undefined ***local_70;
  undefined1 local_68 [64];
  
  plVar1 = (longlong *)(param_1 + 8);
  cVar5 = FUN_180382d70(*plVar1);
  if (cVar5 == '\0') {
    plVar1 = (longlong *)*plVar1;
    (**(code **)(*plVar1 + 8))(plVar1,1,0,0,plVar1 + 2);
    return;
  }
  lVar2 = *plVar1;
  local_a8 = std::
             _Func_impl_no_alloc<`public:___cdecl_std::_Task_async_state<void>::_Task_async_state<void><std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>(std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,void>
             ::vftable;
  local_a0 = *(undefined8 *)(param_1 + 0x18);
  local_70 = &local_a8;
  plVar7 = (longlong *)FUN_180372a70(local_68,&local_a8);
  lVar3 = *plVar1;
  _guard_check_icall(lVar3 + 0x160);
  if ((longlong *)plVar7[7] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cb0();
  }
  uVar6 = (**(code **)(*(longlong *)plVar7[7] + 0x10))();
  _guard_check_icall(lVar3 + 0x160);
  plVar4 = (longlong *)plVar7[7];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar7);
    plVar7[7] = 0;
  }
  FUN_18037e640(lVar2,uVar6);
  _guard_check_icall(*plVar1 + 0x160);
  return;
}



/* ===== 180382b50 FUN_180382b50 ===== */

void FUN_180382b50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = Concurrency::details::
             _PPLTaskHandle<unsigned_char,Concurrency::task<unsigned_char>::_InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<void>::_Task_async_state<void><std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>(std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_TaskProcHandle>
             ::vftable;
  _guard_check_icall(param_1[1] + 0x160);
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  *param_1 = Concurrency::details::_TaskProcHandle::vftable;
  return;
}



/* ===== 180382bd0 FUN_180382bd0 ===== */

undefined1 * FUN_180382bd0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  param_2[8] = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xf;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0xf;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



/* ===== 180382c40 FUN_180382c40 ===== */

undefined8 FUN_180382c40(undefined8 param_1,ulonglong param_2)

{
  FUN_1803829a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x18);
  }
  return param_1;
}



/* ===== 180382c80 FUN_180382c80 ===== */

undefined8 * FUN_180382c80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Concurrency::task<unsigned_char>::
             _InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::_Task_async_state<skybox::_anon_13F7984E::compile_result><std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>_>(std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>
             ::vftable;
  FUN_1803829a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x20);
  }
  return param_1;
}



/* ===== 180382cc0 FUN_180382cc0 ===== */

undefined8 FUN_180382cc0(undefined8 param_1,ulonglong param_2)

{
  FUN_180382b50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x18);
  }
  return param_1;
}



/* ===== 180382d00 FUN_180382d00 ===== */

undefined8 * FUN_180382d00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Concurrency::task<unsigned_char>::
             _InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<void>::_Task_async_state<void><std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>(std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>
             ::vftable;
  FUN_180382b50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1803d64e0(param_1,0x20);
  }
  return param_1;
}



/* ===== 180382d40 FUN_180382d40 ===== */

void FUN_180382d40(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = std::
             _Func_impl_no_alloc<std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>,skybox::_anon_13F7984E::compile_result>
             ::vftable;
  FUN_180382df0(param_1 + 1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== 180382d60 FUN_180382d60 ===== */

bool FUN_180382d60(void)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_1803827f0();
  lVar3 = 5;
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)();
  iVar2 = FUN_1804e4d70(lVar3 + 0x20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(lVar3 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)(lVar3 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 != 2) {
    *(undefined4 *)(lVar3 + 8) = 1;
  }
  FUN_1804e4e90(lVar3 + 0x20);
  return iVar2 != 2;
}



/* ===== 180382d70 FUN_180382d70 ===== */

bool FUN_180382d70(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(param_1 + 0x20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (*(int *)(param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 2) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  FUN_1804e4e90(param_1 + 0x20);
  return iVar1 != 2;
}



/* ===== 180382df0 FUN_180382df0 ===== */

TypeDescriptor * FUN_180382df0(void)

{
  code *pcVar1;
  
  FUN_180382bd0();
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  return &`public:___cdecl_std::_Task_async_state<void>::_Task_async_state<void><std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>(std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180382e00 FUN_180382e00 ===== */

TypeDescriptor * FUN_180382e00(void)

{
  return &`public:___cdecl_std::_Task_async_state<void>::_Task_async_state<void><std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>(std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180382e10 FUN_180382e10 ===== */

void FUN_180382e10(longlong param_1)

{
  FUN_180381840(*(undefined8 *)(param_1 + 8));
  return;
}



/* ===== 180382e20 FUN_180382e20 ===== */

undefined8 * FUN_180382e20(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<`public:___cdecl_std::_Task_async_state<void>::_Task_async_state<void><std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>_>(std::_Fake_no_copy_callable_adapter<void_(__cdecl&)(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>),std::vector<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,class_std::allocator<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,void>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



/* ===== 180382e40 FUN_180382e40 ===== */

TypeDescriptor * FUN_180382e40(void)

{
  return &`public:___cdecl_std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::_Task_async_state<skybox::_anon_13F7984E::compile_result><std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>_>(std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>&&___ptr64)___ptr64'
          ::__l2::<lambda_1>::RTTI_Type_Descriptor;
}



/* ===== 180382e50 FUN_180382e50 ===== */

void FUN_180382e50(longlong param_1)

{
  FUN_1803816f0(*(undefined8 *)(param_1 + 8));
  return;
}



/* ===== 180382e60 FUN_180382e60 ===== */

undefined8 * FUN_180382e60(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<`public:___cdecl_std::_Task_async_state<skybox::_anon_13F7984E::compile_result>::_Task_async_state<skybox::_anon_13F7984E::compile_result><std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>_>(std::_Fake_no_copy_callable_adapter<struct_skybox::_anon_13F7984E::compile_result_(__cdecl&)(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,bool),std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>,bool>&&___ptr64)___ptr64'::`2'::<lambda_1>,void>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



/* ===== 180382e80 FUN_180382e80 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180382e80(void)

{
  LARGE_INTEGER local_res8 [4];
  
  if (DAT_1811162d8 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1811162d8);
    QueryPerformanceCounter((LARGE_INTEGER *)&DAT_1811162e8);
  }
  local_res8[0].QuadPart = 0;
  QueryPerformanceCounter(local_res8);
  return (double)(local_res8[0].QuadPart - _DAT_1811162e8) / (double)DAT_1811162d8;
}



/* ===== 180382ef0 FUN_180382ef0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_180382ef0(float *param_1,float *param_2)

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
  bool bVar13;
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
  
  fVar1 = param_1[6];
  fVar2 = param_1[5];
  fVar3 = param_1[0xb];
  fVar4 = param_1[10];
  fVar5 = param_1[1];
  fVar6 = param_1[7];
  fVar7 = param_1[0xe];
  fVar8 = param_1[0xf];
  fVar9 = param_1[9];
  fVar10 = param_1[0xd];
  fVar21 = param_1[8] * fVar6;
  fVar25 = param_1[0xc] * fVar1;
  fVar22 = param_1[0xc] * fVar6;
  fVar24 = param_1[8] * fVar1;
  fVar20 = param_1[4] * fVar3;
  fVar27 = (((fVar2 * fVar4 * fVar8 - fVar3 * fVar2 * fVar7) - fVar1 * fVar9 * fVar8) +
            fVar6 * fVar9 * fVar7 + fVar10 * fVar1 * fVar3) - fVar10 * fVar6 * fVar4;
  fVar26 = param_1[4] * fVar4;
  fVar28 = ((((fVar20 * fVar7 - fVar26 * fVar8) + fVar24 * fVar8) - fVar21 * fVar7) - fVar25 * fVar3
           ) + fVar22 * fVar4;
  fVar11 = param_1[2];
  fVar12 = *param_1;
  fVar29 = (((param_1[4] * fVar9 * fVar8 - fVar20 * fVar10) - param_1[8] * fVar2 * fVar8) +
            fVar21 * fVar10 + param_1[0xc] * fVar2 * fVar3) - fVar22 * fVar9;
  fVar22 = ((((fVar26 * fVar10 - param_1[4] * fVar9 * fVar7) + param_1[8] * fVar2 * fVar7) -
            fVar24 * fVar10) - param_1[0xc] * fVar2 * fVar4) + fVar25 * fVar9;
  fVar20 = param_1[3];
  fVar21 = fVar5 * fVar28 + fVar12 * fVar27 + fVar11 * fVar29 + fVar20 * fVar22;
  bVar13 = ((uint)fVar21 & 0x7f800000) != 0x7f800000;
  if ((!bVar13) || ((float)((uint)fVar21 & _DAT_1808ade90) < DAT_1808abf50)) {
    bVar13 = false;
  }
  else {
    fVar24 = param_1[0xc];
    fVar25 = param_1[8];
    fVar26 = fVar11 * fVar24;
    fVar32 = fVar20 * fVar24;
    fVar14 = fVar20 * fVar25;
    fVar15 = fVar11 * fVar25;
    fVar24 = fVar5 * fVar24;
    fVar25 = fVar5 * fVar25;
    fVar23 = param_1[2] * fVar2;
    fVar30 = param_1[3] * param_1[4];
    fVar33 = param_1[2] * param_1[4];
    fVar16 = *param_1 * fVar1;
    fVar19 = *param_1 * fVar2;
    fVar17 = fVar5 * param_1[4];
    fVar18 = DAT_1808ac34c / fVar21;
    fVar31 = *param_1 * fVar6;
    *param_2 = fVar27 * fVar18;
    param_2[1] = (((((fVar5 * fVar3 * fVar7 - fVar5 * fVar4 * fVar8) + fVar11 * fVar9 * fVar8) -
                   fVar20 * fVar9 * fVar7) - fVar11 * fVar10 * fVar3) + fVar20 * fVar10 * fVar4) *
                 fVar18;
    param_2[2] = ((((fVar5 * fVar1 * fVar8 - fVar5 * fVar6 * fVar7) - fVar23 * fVar8) +
                   fVar20 * fVar2 * fVar7 + fVar11 * fVar10 * fVar6) - fVar20 * fVar10 * fVar1) *
                 fVar18;
    param_2[3] = (((((fVar5 * fVar6 * fVar4 - fVar5 * fVar1 * fVar3) + fVar23 * fVar3) -
                   fVar20 * fVar2 * fVar4) - fVar11 * fVar9 * fVar6) + fVar20 * fVar9 * fVar1) *
                 fVar18;
    param_2[4] = fVar28 * fVar18;
    param_2[5] = ((((fVar12 * fVar4 * fVar8 - fVar12 * fVar3 * fVar7) - fVar15 * fVar8) +
                   fVar14 * fVar7 + fVar26 * fVar3) - fVar32 * fVar4) * fVar18;
    param_2[6] = (((((fVar31 * fVar7 - fVar16 * fVar8) + fVar33 * fVar8) - fVar30 * fVar7) -
                  fVar26 * fVar6) + fVar32 * fVar1) * fVar18;
    param_2[7] = ((((fVar16 * fVar3 - fVar31 * fVar4) - fVar33 * fVar3) + fVar30 * fVar4 +
                  fVar15 * fVar6) - fVar14 * fVar1) * fVar18;
    param_2[8] = fVar29 * fVar18;
    param_2[9] = (((((fVar12 * fVar3 * fVar10 - fVar12 * fVar9 * fVar8) + fVar25 * fVar8) -
                   fVar14 * fVar10) - fVar24 * fVar3) + fVar32 * fVar9) * fVar18;
    param_2[10] = ((((fVar19 * fVar8 - fVar31 * fVar10) - fVar17 * fVar8) + fVar30 * fVar10 +
                   fVar24 * fVar6) - fVar32 * fVar2) * fVar18;
    param_2[0xb] = (((((fVar31 * fVar9 - fVar19 * fVar3) + fVar17 * fVar3) - fVar30 * fVar9) -
                    fVar25 * fVar6) + fVar14 * fVar2) * fVar18;
    param_2[0xc] = fVar22 * fVar18;
    param_2[0xd] = ((((fVar12 * fVar9 * fVar7 - fVar12 * fVar4 * fVar10) - fVar25 * fVar7) +
                     fVar15 * fVar10 + fVar24 * fVar4) - fVar26 * fVar9) * fVar18;
    param_2[0xe] = (((((fVar16 * fVar10 - fVar19 * fVar7) + fVar17 * fVar7) - fVar33 * fVar10) -
                    fVar24 * fVar1) + fVar26 * fVar2) * fVar18;
    param_2[0xf] = ((((fVar19 * fVar4 - fVar16 * fVar9) - fVar17 * fVar4) + fVar33 * fVar9 +
                    fVar25 * fVar1) - fVar15 * fVar2) * fVar18;
  }
  return CONCAT31((int3)(((uint)fVar21 & 0x7f800000) >> 8),bVar13);
}



/* ===== 180383890 FUN_180383890 ===== */

void FUN_180383890(longlong param_1,float *param_2,longlong param_3)

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
  longlong lVar16;
  longlong lVar17;
  
  fVar1 = *param_2;
  fVar2 = param_2[4];
  fVar3 = param_2[8];
  fVar4 = param_2[0xc];
  fVar5 = param_2[5];
  fVar6 = param_2[1];
  fVar7 = param_2[9];
  fVar8 = param_2[0xd];
  fVar9 = param_2[6];
  fVar10 = param_2[2];
  fVar11 = param_2[10];
  lVar16 = 0;
  do {
    lVar17 = lVar16 + 1;
    *(float *)(param_3 + lVar16 * 0x10) =
         fVar1 * *(float *)(param_1 + lVar16 * 0x10) + 0.0 +
         fVar2 * *(float *)(param_1 + 4 + lVar16 * 0x10) +
         fVar3 * *(float *)(param_1 + 8 + lVar16 * 0x10) +
         fVar4 * *(float *)(param_1 + 0xc + lVar16 * 0x10);
    fVar12 = param_2[0xe];
    *(float *)(param_3 + 4 + lVar16 * 0x10) =
         fVar5 * *(float *)(param_1 + 4 + lVar16 * 0x10) +
         fVar6 * *(float *)(param_1 + lVar16 * 0x10) + 0.0 +
         fVar7 * *(float *)(param_1 + 8 + lVar16 * 0x10) +
         fVar8 * *(float *)(param_1 + 0xc + lVar16 * 0x10);
    fVar13 = param_2[7];
    fVar14 = param_2[3];
    fVar15 = param_2[0xf];
    *(float *)(param_3 + 8 + lVar16 * 0x10) =
         fVar9 * *(float *)(param_1 + 4 + lVar16 * 0x10) +
         fVar10 * *(float *)(param_1 + lVar16 * 0x10) + 0.0 +
         fVar11 * *(float *)(param_1 + 8 + lVar16 * 0x10) +
         fVar12 * *(float *)(param_1 + 0xc + lVar16 * 0x10);
    *(float *)(param_3 + 0xc + lVar16 * 0x10) =
         fVar13 * *(float *)(param_1 + 4 + lVar16 * 0x10) +
         fVar14 * *(float *)(param_1 + lVar16 * 0x10) + 0.0 +
         param_2[0xb] * *(float *)(param_1 + 8 + lVar16 * 0x10) +
         fVar15 * *(float *)(param_1 + 0xc + lVar16 * 0x10);
    lVar16 = lVar17;
  } while (lVar17 != 4);
  return;
}



/* ===== 180383a60 FUN_180383a60 ===== */

bool FUN_180383a60(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x38);
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar4 < DAT_1808abf68) {
    return true;
  }
  return (fVar1 * *(float *)(param_1 + 0x24) + fVar2 * *(float *)(param_1 + 0x20) +
         fVar3 * *(float *)(param_1 + 0x28)) / fVar4 < DAT_1808ac1f4;
}



/* ===== 180383ad0 FUN_180383ad0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180383ad0(float *param_1,float *param_2)

{
  double dVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  ulonglong uStack_190;
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
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  uVar2 = _DAT_1808ade90;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_218;
  dVar1 = *(double *)(param_2 + 0x20) - *(double *)(param_1 + 0x20);
  if ((dVar1 < DAT_1808ac220) || (DAT_1808ac420 <= dVar1)) {
    LOCK();
    PTR_s_not_installed_1809f7838 = s_frame_time_out_of_range_18088fbb0;
    UNLOCK();
    return 0;
  }
  uVar8 = 0;
  do {
    uVar6 = 0;
    do {
      if (((uint)param_2[(uVar8 + 4) * 4 + uVar6] & 0x7f800000) == 0x7f800000) {
        return 0;
      }
      fVar10 = param_1[(uVar8 + 4) * 4 + uVar6];
      if (((uint)fVar10 & 0x7f800000) == 0x7f800000) {
        return 0;
      }
      if (((float)((uint)fVar10 & _DAT_1808ade90) + DAT_1808ac34c) * DAT_1808abfc8 <
          (float)((uint)(param_2[(uVar8 + 4) * 4 + uVar6] - fVar10) & _DAT_1808ade90)) {
        pcVar4 = "projection changed";
        goto LAB_180383ded;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < 4);
    uVar5 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar5;
    if (3 < (int)uVar5) {
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      cVar3 = FUN_180382ef0(param_2,&local_178);
      if ((cVar3 != '\0') && (cVar3 = FUN_180382ef0(param_1,&local_138), cVar3 != '\0')) {
        fVar10 = (uStack_160._4_4_ - uStack_120._4_4_) * (uStack_160._4_4_ - uStack_120._4_4_) +
                 (uStack_170._4_4_ - uStack_130._4_4_) * (uStack_170._4_4_ - uStack_130._4_4_) +
                 (uStack_150._4_4_ - uStack_110._4_4_) * (uStack_150._4_4_ - uStack_110._4_4_);
        if ((((uint)fVar10 & 0x7f800000) == 0x7f800000) || (_DAT_1808accb0 < fVar10)) {
          pcVar4 = "camera teleported";
        }
        else if (param_2[10] * param_1[10] +
                 param_2[9] * param_1[9] +
                 param_2[8] * param_1[8] +
                 param_2[6] * param_1[6] +
                 param_2[5] * param_1[5] +
                 param_2[4] * param_1[4] +
                 param_2[2] * param_1[2] + param_2[1] * param_1[1] + *param_2 * *param_1 + 0.0 <
                 DAT_1808ac5d4) {
          pcVar4 = "rotation too fast";
        }
        else {
          if (DAT_1808abf8c < (float)((uint)(param_2[10] - param_1[10]) & uVar2) ||
              (DAT_1808abf8c < (float)((uint)(param_2[9] - param_1[9]) & uVar2) ||
              (DAT_1808abf8c < (float)((uint)(param_2[8] - param_1[8]) & uVar2) ||
              (DAT_1808abf8c < (float)((uint)(param_2[6] - param_1[6]) & uVar2) ||
              (DAT_1808abf8c < (float)((uint)(param_2[5] - param_1[5]) & uVar2) ||
              (DAT_1808abf8c < (float)((uint)(param_2[4] - param_1[4]) & uVar2) ||
              (DAT_1808abf8c < (float)((uint)(param_2[2] - param_1[2]) & uVar2) ||
              (DAT_1808abf8c < (float)((uint)(param_2[1] - param_1[1]) & uVar2) ||
              DAT_1808abf8c < (float)((uint)(*param_2 - *param_1) & uVar2))))))))) {
            local_1f8 = *(undefined8 *)param_2;
            local_1e8 = *(undefined8 *)(param_2 + 4);
            local_1d8 = *(undefined8 *)(param_2 + 8);
            uStack_1f0 = *(ulonglong *)(param_2 + 2) & 0xffffffff;
            local_1c8 = *(undefined8 *)(param_2 + 0xc);
            uStack_1c0 = *(undefined8 *)(param_2 + 0xe);
            pfVar7 = param_2 + 0x10;
            uStack_1e0 = *(ulonglong *)(param_2 + 6) & 0xffffffff;
            local_1b8 = *(undefined8 *)param_1;
            uStack_1d0 = *(ulonglong *)(param_2 + 10) & 0xffffffff;
            local_1a8 = *(undefined8 *)(param_1 + 4);
            local_198 = *(undefined8 *)(param_1 + 8);
            uStack_1b0 = *(ulonglong *)(param_1 + 2) & 0xffffffff;
            local_188 = *(undefined8 *)(param_1 + 0xc);
            uStack_180 = *(undefined8 *)(param_1 + 0xe);
            uStack_1a0 = *(ulonglong *)(param_1 + 6) & 0xffffffff;
            local_f8 = 0;
            uStack_f0 = 0;
            uStack_190 = *(ulonglong *)(param_1 + 10) & 0xffffffff;
            local_e8 = 0;
            uStack_e0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_48 = 0;
            uStack_40 = 0;
            uVar9 = FUN_180383890(pfVar7,&local_1f8,&local_f8);
            FUN_180383890(uVar9,&local_1b8,&local_78);
            local_b8 = 0;
            uStack_b0 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            uStack_80 = 0;
            cVar3 = FUN_180382ef0(&local_f8,&local_b8);
            if (cVar3 == '\0') {
              return 0;
            }
            cVar3 = FUN_180382ef0(pfVar7,&DAT_181108260);
            if (cVar3 == '\0') {
              return 0;
            }
            FUN_180383890(&local_78,&local_b8,&DAT_181108760);
            DAT_1811085b0 = (float)(DAT_1808ac328 / dVar1);
            DAT_180cd10bc = FUN_180383a60(pfVar7);
            return 1;
          }
          pcVar4 = "camera still";
        }
LAB_180383ded:
        LOCK();
        UNLOCK();
        PTR_s_not_installed_1809f7838 = pcVar4;
      }
      return 0;
    }
  } while( true );
}



/* ===== 180383fc0 FUN_180383fc0 ===== */

undefined8 FUN_180383fc0(undefined4 param_1)

{
  switch(param_1) {
  case 0x13:
  case 0x14:
    return 0x13;
  default:
    return 0;
  case 0x27:
  case 0x28:
  case 0x29:
    return 0x27;
  case 0x2c:
  case 0x2d:
    return 0x2c;
  case 0x35:
  case 0x37:
    return 0x35;
  }
}



/* ===== 180384040 FUN_180384040 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180384040(longlong *param_1,longlong *param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_108;
  if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    return 0;
  }
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  (**(code **)(*param_1 + 0x40))(0,&local_c8);
  if ((local_c8._4_4_ - 4U & 0xfffffffd) != 0) {
    return 0;
  }
  local_e8 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x38))(param_1,&local_e8);
  if (local_e8 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    local_d8 = (longlong *)0x0;
    (**(code **)*local_e8)(local_e8,&DAT_18058a4c0,&local_d8);
    (**(code **)(*local_e8 + 0x10))();
    plVar3 = local_d8;
  }
  local_e0 = (longlong *)0x0;
  (**(code **)(*param_2 + 0x38))(param_2,&local_e0);
  if (local_e0 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    local_d0 = (longlong *)0x0;
    (**(code **)*local_e0)(local_e0,&DAT_18058a4c0,&local_d0);
    (**(code **)(*local_e0 + 0x10))();
    plVar4 = local_d0;
  }
  if ((plVar3 == (longlong *)0x0) || (plVar4 == (longlong *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((int)local_c8 - 2U & 0xffffffe7) != 0) || (iVar9 = 2, (int)local_c8 == 0x12)) {
    iVar9 = 0;
  }
  if (bVar1) {
    local_70 = 0;
    uStack_68 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_80);
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_b0);
    if (DAT_181108568 <= (uint)local_80) {
      DAT_181108750 = (int)local_c8;
      DAT_1811085c0 = (undefined4)local_a0;
      DAT_181108568 = (uint)local_80;
      DAT_1811086a0 = local_80._4_4_;
    }
    if ((((((iVar9 != 0) && ((uint)local_80 == (uint)local_b0)) &&
          (local_80._4_4_ == local_b0._4_4_)) &&
         ((0x13f < (uint)local_80 && (199 < local_80._4_4_)))) &&
        ((uStack_78._4_4_ == 1 &&
         ((uStack_a8._4_4_ == 1 &&
          (uVar5 = (uint)local_80, uVar6 = local_80._4_4_, uVar8 = (int)local_c8,
          uVar7 = (undefined4)local_a0, iVar2 = FUN_180383fc0(local_a0 & 0xffffffff), iVar2 != 0))))
        )) && (plVar3 != DAT_1811082b0)) {
      bVar1 = true;
      *param_3 = uVar5;
      *param_4 = uVar6;
      DAT_181108724 = local_70._4_4_;
      DAT_1811085c4 = uVar7;
      DAT_1811086f8 = uVar8;
      goto LAB_180384261;
    }
  }
  bVar1 = false;
LAB_180384261:
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (bVar1) {
    return iVar9;
  }
  return 0;
}



/* ===== 1803842c0 FUN_1803842c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1803842c0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint7 uVar15;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  char *pcVar16;
  undefined8 ****ppppuVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  char *local_e8;
  undefined4 local_e0;
  undefined8 ****local_d8;
  undefined8 ****local_c0;
  longlong lStack_b8;
  longlong local_b0;
  ulonglong uStack_a8;
  undefined8 ****local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  puVar19 = auStack_108;
  local_48 = DAT_180919500 ^ (ulonglong)auStack_108;
  uVar15 = (uint7)(local_48 >> 8);
  if ((DAT_1811086f0 != (longlong *)0x0) && (DAT_181108700 != (longlong *)0x0)) {
    lVar14 = CONCAT71(uVar15,1);
    puVar19 = auStack_108;
    goto LAB_1803847cb;
  }
  if (DAT_180cd1104 != '\0') {
    lVar14 = (ulonglong)uVar15 << 8;
    goto LAB_1803847cb;
  }
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0xf;
  local_a0 = (undefined8 ****)0x0;
  local_d8 = &local_a0;
  local_e0 = 0x8000;
  local_e8 = "vs_5_0";
  plVar9 = (longlong *)
           FUN_18036e5f0("\nstruct vs_output {\n    float4 position : SV_Position;\n    float2 uv : TEXCOORD0;\n};\n\nvs_output vs_main(uint id : SV_VertexID) {\n    vs_output output;\n    float2 uv = float2((id << 1) & 2, id & 2);\n    output.uv = uv;\n    output.position = float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);\n    return output;\n}\n"
                         ,0x143,"neverlose_blur_vs","vs_main");
  local_80 = (char *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = (char *)FUN_18000fb70(0x20);
  uVar5 = s__define_MULTISAMPLE_1_180890678._8_4_;
  uVar4 = s__define_MULTISAMPLE_1_180890678._4_4_;
  local_70 = 0x16;
  local_68 = 0x1f;
  uVar2 = CONCAT22(s__define_MULTISAMPLE_1_180890678._14_2_,s__define_MULTISAMPLE_1_180890678._12_2_
                  );
  *(undefined4 *)local_80 = s__define_MULTISAMPLE_1_180890678._0_4_;
  *(undefined4 *)(local_80 + 4) = uVar4;
  *(undefined4 *)(local_80 + 8) = uVar5;
  *(undefined4 *)(local_80 + 0xc) = uVar2;
  *(ulonglong *)(local_80 + 0xe) =
       CONCAT62(s__define_MULTISAMPLE_1_180890678._16_6_,s__define_MULTISAMPLE_1_180890678._14_2_);
  local_80[0x16] = '\0';
  plVar10 = (longlong *)
            FUN_1800134a0(&local_80,
                          "\ncbuffer blur_constants : register(b0) {\n    row_major float4x4 current_to_previous;\n    row_major float4x4 inverse_projection;\n    float4 size;\n    float4 params;\n};\n\nTexture2D scene_color : register(t0);\n#ifdef MULTISAMPLE\nTexture2DMS<float> scene_depth : register(t1);\n#else\nTexture2D<float> scene_depth : register(t1);\n#endif\nSamplerState linear_clamp : register(s0);\n\nfloat load_depth(int2 pixel) {\n#ifdef MULTISAMPLE\n    float depth = params.w > 0.5 ? 0.0 : 1.0;\n    uint count = (uint)params.z;\n    for (uint i = 0; i < count; i++) {\n        float value = scene_depth.Load(pixel, i);\n        depth = params.w > 0.5 ? max(depth, value) : min(depth, value);\n    }\n    return depth;\n#else\n    return scene_depth.Load(int3(pixel, 0));\n#endif\n}\n\nbool is_far(float depth) {\n    return params.w > 0.5 ? depth <= 0.0 : depth >= 1.0;\n}\n\nfloat4 ndc_of(float2 pixel, float depth) {\n    float2 uv = pixel * size.zw;\n    return float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), depth, 1.0);\n}\n\nfloat view_depth(float4 ndc) {\n    return abs(dot(inverse_projection[2], ndc)) / max(abs(dot(inverse_projection[3], ndc)), 1e-8);\n}\n\nfloat4 ps_main(float4 position : SV_Position, float2 unused : TEXCOORD0) : SV_Target {\n    float2 pixel = position.xy;\n    float4 base = scene_color.SampleLevel(linear_clamp, pixel * size.zw, 0);\n    float depth = load_depth(int2(pixel));\n    float4 ndc = ndc_of(pixel, depth);\n    float4 previous = mul(current_to_previous, ndc);\n\n    [branch]\n    if (previous.w <= 1e-6 || any(isnan(previous)) || any(isinf(previous))) return base;\n\n    float2 previous_pixel = (previous.xy / previous.w * float2(0.5, -0.5) + 0.5) * size.xy;\n    float2 velocity = (previous_pixel - pixel) * params.x;\n    float speed = length(velocity);\n\n    [branch]\n    if (isnan(speed) || isinf(speed) || speed < 0.5) return base;\n\n    velocity *= min(params.y / speed, 1.0);\n    int samples = clamp((int)ceil(min(speed, params.y)) + 1, 2, 32);\n    float last = (float)(samples - 1);\n    float center = view_depth(ndc);\n    bool sky = is_far(depth);\n    f..." /* TRUNCATED STRING LITERAL */
                          ,0xa4e);
  local_c0 = (undefined8 ****)*plVar10;
  lStack_b8 = plVar10[1];
  local_b0 = plVar10[2];
  uStack_a8 = plVar10[3];
  plVar10[2] = 0;
  plVar10[3] = 0xf;
  *(undefined1 *)plVar10 = 0;
  if (local_68 < 0x10) {
LAB_18038442d:
    puVar19 = auStack_108;
    local_70 = 0;
    local_68 = 0xf;
    local_80 = (char *)((ulonglong)local_80 & 0xffffffffffffff00);
    if (plVar9 == (longlong *)0x0) goto LAB_1803844d1;
    local_d8 = &local_a0;
    local_e0 = 0x8000;
    local_e8 = "ps_5_0";
    plVar10 = (longlong *)
              FUN_18036e5f0("\ncbuffer blur_constants : register(b0) {\n    row_major float4x4 current_to_previous;\n    row_major float4x4 inverse_projection;\n    float4 size;\n    float4 params;\n};\n\nTexture2D scene_color : register(t0);\n#ifdef MULTISAMPLE\nTexture2DMS<float> scene_depth : register(t1);\n#else\nTexture2D<float> scene_depth : register(t1);\n#endif\nSamplerState linear_clamp : register(s0);\n\nfloat load_depth(int2 pixel) {\n#ifdef MULTISAMPLE\n    float depth = params.w > 0.5 ? 0.0 : 1.0;\n    uint count = (uint)params.z;\n    for (uint i = 0; i < count; i++) {\n        float value = scene_depth.Load(pixel, i);\n        depth = params.w > 0.5 ? max(depth, value) : min(depth, value);\n    }\n    return depth;\n#else\n    return scene_depth.Load(int3(pixel, 0));\n#endif\n}\n\nbool is_far(float depth) {\n    return params.w > 0.5 ? depth <= 0.0 : depth >= 1.0;\n}\n\nfloat4 ndc_of(float2 pixel, float depth) {\n    float2 uv = pixel * size.zw;\n    return float4(uv * float2(2.0, -2.0) + float2(-1.0, 1.0), depth, 1.0);\n}\n\nfloat view_depth(float4 ndc) {\n    return abs(dot(inverse_projection[2], ndc)) / max(abs(dot(inverse_projection[3], ndc)), 1e-8);\n}\n\nfloat4 ps_main(float4 position : SV_Position, float2 unused : TEXCOORD0) : SV_Target {\n    float2 pixel = position.xy;\n    float4 base = scene_color.SampleLevel(linear_clamp, pixel * size.zw, 0);\n    float depth = load_depth(int2(pixel));\n    float4 ndc = ndc_of(pixel, depth);\n    float4 previous = mul(current_to_previous, ndc);\n\n    [branch]\n    if (previous.w <= 1e-6 || any(isnan(previous)) || any(isinf(previous))) return base;\n\n    float2 previous_pixel = (previous.xy / previous.w * float2(0.5, -0.5) + 0.5) * size.xy;\n    float2 velocity = (previous_pixel - pixel) * params.x;\n    float speed = length(velocity);\n\n    [branch]\n    if (isnan(speed) || isinf(speed) || speed < 0.5) return base;\n\n    velocity *= min(params.y / speed, 1.0);\n    int samples = clamp((int)ceil(min(speed, params.y)) + 1, 2, 32);\n    float last = (float)(samples - 1);\n    float center = view_depth(ndc);\n    bool sky = is_far(depth);\n    f..." /* TRUNCATED STRING LITERAL */
                            ,0xa4e,"neverlose_blur","ps_main");
    puVar19 = auStack_108;
    if (plVar10 == (longlong *)0x0) goto LAB_1803844d4;
    ppppuVar17 = &local_c0;
    if (0xf < uStack_a8) {
      ppppuVar17 = local_c0;
    }
    local_d8 = &local_a0;
    local_e0 = 0x8000;
    local_e8 = "ps_5_0";
    plVar11 = (longlong *)FUN_18036e5f0(ppppuVar17,local_b0,"neverlose_blur_ms","ps_main");
    puVar19 = auStack_108;
LAB_1803844e9:
    if (plVar11 == (longlong *)0x0) goto LAB_1803845c0;
    lVar14 = *DAT_1811085b8;
    pcVar1 = *(code **)(*plVar9 + 0x20);
    *(undefined8 *)(puVar19 + -8) = 0x180384505;
    uVar12 = (*pcVar1)(plVar9);
    pcVar1 = *(code **)(*plVar9 + 0x18);
    *(undefined8 *)(puVar19 + -8) = 0x180384511;
    uVar13 = (*pcVar1)(plVar9);
    *(longlong ***)(puVar19 + 0x20) = &DAT_1811082a8;
    pcVar1 = *(code **)(lVar14 + 0x60);
    *(undefined8 *)(puVar19 + -8) = 0x180384530;
    iVar8 = (*pcVar1)(DAT_1811085b8,uVar13,uVar12,0);
    if (iVar8 < 0) goto LAB_1803845c0;
    lVar14 = *DAT_1811085b8;
    pcVar1 = *(code **)(*plVar10 + 0x20);
    *(undefined8 *)(puVar19 + -8) = 0x18038454b;
    uVar12 = (*pcVar1)(plVar10);
    pcVar1 = *(code **)(*plVar10 + 0x18);
    *(undefined8 *)(puVar19 + -8) = 0x180384557;
    uVar13 = (*pcVar1)(plVar10);
    *(longlong ***)(puVar19 + 0x20) = &DAT_1811086f0;
    pcVar1 = *(code **)(lVar14 + 0x78);
    *(undefined8 *)(puVar19 + -8) = 0x180384576;
    iVar8 = (*pcVar1)(DAT_1811085b8,uVar13,uVar12,0);
    if (iVar8 < 0) goto LAB_1803845c0;
    lVar14 = *DAT_1811085b8;
    pcVar1 = *(code **)(*plVar11 + 0x20);
    *(undefined8 *)(puVar19 + -8) = 0x18038458d;
    uVar12 = (*pcVar1)(plVar11);
    pcVar1 = *(code **)(*plVar11 + 0x18);
    *(undefined8 *)(puVar19 + -8) = 0x180384599;
    uVar13 = (*pcVar1)(plVar11);
    *(longlong ***)(puVar19 + 0x20) = &DAT_181108700;
    pcVar1 = *(code **)(lVar14 + 0x78);
    *(undefined8 *)(puVar19 + -8) = 0x1803845b8;
    iVar8 = (*pcVar1)(DAT_1811085b8,uVar13,uVar12,0);
    if (iVar8 < 0) goto LAB_1803845c0;
    bVar6 = true;
LAB_1803845c7:
    bVar3 = bVar6;
    pcVar1 = *(code **)(*plVar9 + 0x10);
    *(undefined8 *)(puVar19 + -8) = 0x1803845d0;
    (*pcVar1)(plVar9);
  }
  else {
    uVar18 = local_68 + 1;
    pcVar16 = local_80;
    if (uVar18 < 0x1000) {
LAB_180384428:
      thunk_FUN_1803d64e0(pcVar16,uVar18);
      goto LAB_18038442d;
    }
    pcVar16 = *(char **)(local_80 + -8);
    if (local_80 + (-8 - (longlong)pcVar16) < (char *)0x20) {
      uVar18 = local_68 + 0x28;
      goto LAB_180384428;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar19 = auStack_100;
LAB_1803844d1:
    plVar10 = (longlong *)0x0;
LAB_1803844d4:
    plVar11 = (longlong *)0x0;
    if ((plVar9 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) goto LAB_1803844e9;
LAB_1803845c0:
    bVar3 = false;
    bVar6 = false;
    if (plVar9 != (longlong *)0x0) goto LAB_1803845c7;
  }
  if (plVar10 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plVar10 + 0x10);
    *(undefined8 *)(puVar19 + -8) = 0x1803845de;
    (*pcVar1)(plVar10);
  }
  if (plVar11 != (longlong *)0x0) {
    pcVar1 = *(code **)(*plVar11 + 0x10);
    *(undefined8 *)(puVar19 + -8) = 0x1803845ec;
    (*pcVar1)(plVar11);
  }
  local_50 = 0;
  local_60 = 0xa0;
  local_5c = 2;
  local_58 = 4;
  local_54 = 0x10000;
  if (bVar3) {
    pcVar1 = *(code **)(*DAT_1811085b8 + 0x18);
    *(undefined8 *)(puVar19 + -8) = 0x18038462b;
    iVar8 = (*pcVar1)(DAT_1811085b8,&local_60,0,&DAT_1811082a0);
    if (iVar8 < 0) goto LAB_18038464d;
    *(undefined8 *)(puVar19 + -8) = 0x180384642;
    cVar7 = FUN_18036e1f0(&DAT_181108730,DAT_1811085b8);
    if (cVar7 == '\0') goto LAB_18038464d;
    lVar14 = 1;
  }
  else {
LAB_18038464d:
    if (DAT_1811082a8 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_1811082a8 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x18038465f;
      (*pcVar1)();
      DAT_1811082a8 = (longlong *)0x0;
    }
    if (DAT_1811086f0 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_1811086f0 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x180384678;
      (*pcVar1)();
      DAT_1811086f0 = (longlong *)0x0;
    }
    if (DAT_181108700 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_181108700 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x180384691;
      (*pcVar1)();
      DAT_181108700 = (longlong *)0x0;
    }
    if (DAT_1811082a0 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_1811082a0 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x1803846aa;
      (*pcVar1)();
      DAT_1811082a0 = (longlong *)0x0;
    }
    if (DAT_181108748 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_181108748 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x1803846c3;
      (*pcVar1)();
      DAT_181108748 = (longlong *)0x0;
    }
    if (DAT_181108740 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_181108740 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x1803846dc;
      (*pcVar1)();
      DAT_181108740 = (longlong *)0x0;
    }
    if (DAT_181108738 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_181108738 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x1803846f5;
      (*pcVar1)();
      DAT_181108738 = (longlong *)0x0;
    }
    if (DAT_181108730 != (longlong *)0x0) {
      pcVar1 = *(code **)(*DAT_181108730 + 0x10);
      *(undefined8 *)(puVar19 + -8) = 0x18038470e;
      (*pcVar1)();
      DAT_181108730 = (longlong *)0x0;
    }
    ppppuVar17 = &local_a0;
    if (0xf < local_88) {
      ppppuVar17 = local_a0;
    }
    *(undefined8 *)(puVar19 + -8) = 0x180384733;
    FUN_180029840(&DAT_1809f7890,ppppuVar17,local_90);
    LOCK();
    PTR_s_not_installed_1809f7838 = s_failed_to_create_blur_shaders_180890658;
    UNLOCK();
    DAT_180cd1104 = '\x01';
    lVar14 = 0;
  }
  if (0xf < uStack_a8) {
    uVar18 = uStack_a8 + 1;
    ppppuVar17 = local_c0;
    if (0xfff < uVar18) {
      ppppuVar17 = (undefined8 ****)local_c0[-1];
      if (0x1f < (ulonglong)((longlong)local_c0 + (-8 - (longlong)ppppuVar17))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        goto LAB_1803847f0;
      }
      uVar18 = uStack_a8 + 0x28;
    }
    *(undefined8 *)(puVar19 + -8) = 0x180384781;
    thunk_FUN_1803d64e0(ppppuVar17,uVar18);
  }
  local_b0 = 0;
  uStack_a8 = 0xf;
  local_c0 = (undefined8 ****)((ulonglong)local_c0 & 0xffffffffffffff00);
  if (0xf < local_88) {
    uVar18 = local_88 + 1;
    ppppuVar17 = local_a0;
    if (0xfff < uVar18) {
      ppppuVar17 = (undefined8 ****)local_a0[-1];
      if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppuVar17))) {
LAB_1803847f0:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        lVar14 = (*pcVar1)();
        return lVar14;
      }
      uVar18 = local_88 + 0x28;
    }
    *(undefined8 *)(puVar19 + -8) = 0x1803847c8;
    thunk_FUN_1803d64e0(ppppuVar17,uVar18);
  }
LAB_1803847cb:
  *(undefined8 *)(puVar19 + -8) = 0x1803847d7;
  return lVar14;
}



/* ===== 180384800 FUN_180384800 ===== */

void FUN_180384800(longlong *param_1)

{
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  return;
}



/* ===== 180384860 FUN_180384860 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180384860(longlong *param_1,int *param_2,int param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_98;
  if (param_5 == '\0') {
    uVar3 = 1;
  }
  else {
    uVar3 = param_2[5];
  }
  if ((((*param_1 == 0) || ((int)param_1[2] != *param_2)) ||
      (*(int *)((longlong)param_1 + 0x14) != param_2[1])) ||
     (((int)param_1[4] != param_3 || (*(uint *)((longlong)param_1 + 0x24) != uVar3)))) {
    FUN_180384800();
    local_60 = *param_2;
    iStack_5c = param_2[1];
    local_3c = 0;
    uStack_58 = 1;
    uStack_54 = 1;
    if (param_5 == '\0') {
      iStack_48 = 0;
    }
    else {
      iStack_48 = param_2[6];
    }
    uStack_44 = 0;
    local_40 = 8;
    local_50 = param_3;
    uStack_4c = uVar3;
    iVar1 = (**(code **)(*DAT_1811085b8 + 0x28))(DAT_1811085b8,&local_60,0,param_1);
    if ((-1 < iVar1) && (*param_1 != 0)) {
      local_70 = 0;
      uStack_68 = 0;
      if (uVar3 < 2) {
        local_74 = 4;
        local_70 = 0x100000000;
      }
      else {
        local_74 = 6;
      }
      local_78 = param_4;
      iVar1 = (**(code **)(*DAT_1811085b8 + 0x38))(DAT_1811085b8,*param_1,&local_78,param_1 + 1);
      if ((-1 < iVar1) && (param_1[1] != 0)) {
        param_1[2] = CONCAT44(iStack_5c,local_60);
        param_1[3] = CONCAT44(uStack_54,uStack_58);
        param_1[4] = CONCAT44(uStack_4c,local_50);
        param_1[5] = CONCAT44(uStack_44,iStack_48);
        *(ulonglong *)((longlong)param_1 + 0x2c) = CONCAT44(local_40,uStack_44);
        *(undefined8 *)((longlong)param_1 + 0x34) = local_3c;
        goto LAB_18038499d;
      }
      FUN_180384800(param_1);
    }
    uVar2 = 0;
  }
  else {
LAB_18038499d:
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== 1803849d0 FUN_1803849d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1803849d0(longlong *param_1)

{
  longlong lVar1;
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
  double dVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined *puVar18;
  char *pcVar19;
  ulonglong *puVar20;
  undefined *puVar21;
  double *pdVar22;
  float *pfVar23;
  double *pdVar24;
  float *pfVar25;
  longlong *plVar26;
  longlong *plVar27;
  undefined8 uVar28;
  float *pfVar29;
  longlong lVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auStack_5b8 [32];
  float local_598;
  undefined4 **local_590;
  undefined8 local_588;
  undefined8 local_580;
  bool local_578;
  float local_574;
  float local_570 [2];
  longlong *local_568;
  longlong *local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  double local_538 [3];
  undefined8 local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  int local_508 [6];
  undefined4 *local_4f0;
  undefined8 uStack_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined8 uStack_49c;
  undefined4 local_488 [2];
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined1 local_3f8 [384];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  int local_218;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined8 uStack_1c4;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStack_5b8;
  puVar18 = (undefined *)(longlong)(int)DAT_1809ebfb8;
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pfVar29 = (float *)&DAT_18093d004;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar30 = (longlong)puVar18 * 0x614;
    puVar18 = &DAT_18093d618;
    pfVar29 = (float *)(&DAT_18093d618 + lVar30);
  }
  else {
    pfVar29 = (float *)&DAT_18093ca30;
  }
  if (DAT_1811081c0 == (longlong *)0x0) {
    return puVar18;
  }
  if (DAT_1811081c8 == (longlong *)0x0) {
    return puVar18;
  }
  if (DAT_1809619e0 == 0) {
    return puVar18;
  }
  puVar18 = (undefined *)FUN_1803842c0();
  if ((char)puVar18 == '\0') {
    return puVar18;
  }
  dVar31 = (double)FUN_180382e80();
  if (DAT_1808ac458 < dVar31 - _DAT_181108728) {
    DAT_180cd1107 = '\0';
  }
  uVar40 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar43 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  local_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  _DAT_181108728 = dVar31;
  iVar15 = FUN_1804e4d70(&DAT_1809f78b0);
  lVar30 = _DAT_181108558;
  dVar13 = _DAT_181108550;
  uVar12 = uRam0000000181108528;
  uVar11 = _DAT_181108520;
  uVar10 = uRam0000000181108518;
  uVar9 = _DAT_181108510;
  uVar8 = uRam0000000181108508;
  uVar7 = _DAT_181108500;
  uVar6 = uRam00000001811084f8;
  uVar5 = _DAT_1811084f0;
  uVar4 = uRam00000001811084e8;
  uVar3 = _DAT_1811084e0;
  uVar2 = uRam00000001811084d8;
  uVar28 = _DAT_1811084d0;
  if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f78fc == 0x7fffffff) {
    DAT_1809f78fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  local_548 = _DAT_181108530;
  uStack_540 = uRam0000000181108538;
  local_558 = _DAT_181108540;
  uStack_550 = uRam0000000181108548;
  FUN_1804e4e90(&DAT_1809f78b0);
  lVar1 = DAT_181108258;
  fVar39 = DAT_1808ac34c;
  if (lVar30 == 0) {
    puVar20 = (ulonglong *)FUN_1802010e0(&local_118,DAT_1809619e0);
    local_228 = *puVar20;
    uStack_220 = puVar20[1];
    local_218 = (int)puVar20[2];
    iStack_214 = *(int *)((longlong)puVar20 + 0x14);
    uStack_210 = (undefined4)puVar20[3];
    uStack_20c = *(undefined4 *)((longlong)puVar20 + 0x1c);
    fVar33 = *(float *)(puVar20 + 4);
    fVar34 = *(float *)((longlong)puVar20 + 0x24);
    fVar36 = *(float *)(puVar20 + 5);
    uStack_1fc = *(undefined4 *)((longlong)puVar20 + 0x2c);
    fVar35 = *(float *)(puVar20 + 6);
    fVar37 = *(float *)((longlong)puVar20 + 0x34);
    fVar38 = *(float *)(puVar20 + 7);
    uStack_1ec = *(undefined4 *)((longlong)puVar20 + 0x3c);
    local_208 = fVar33;
    fStack_204 = fVar34;
    fStack_200 = fVar36;
    local_1f8 = fVar35;
    fStack_1f4 = fVar37;
    fStack_1f0 = fVar38;
    if (DAT_180cd1107 == '\0') {
      puVar21 = (undefined *)FUN_180382ef0(&local_228,&DAT_1811087e0);
      puVar18 = PTR_s_not_installed_1809f7838;
      if ((char)puVar21 == '\0') {
        return puVar21;
      }
      LOCK();
      PTR_s_not_installed_1809f7838 = s_warming_up_1808907c0;
      UNLOCK();
      DAT_180cd1106 = 0;
      DAT_180cd1107 = 1;
      _DAT_181108560 = dVar31;
      _DAT_1811085d0 = local_228;
      uRam00000001811085d8 = uStack_220;
      _DAT_1811085e0 = CONCAT44(iStack_214,local_218);
      uRam00000001811085e8 = CONCAT44(uStack_20c,uStack_210);
      _DAT_1811085f0 = CONCAT44(fStack_204,local_208);
      uRam00000001811085f8 = CONCAT44(uStack_1fc,fStack_200);
      _DAT_181108600 = CONCAT44(fStack_1f4,local_1f8);
      uRam0000000181108608 = CONCAT44(uStack_1ec,fStack_1f0);
      return puVar18;
    }
    iVar15 = memcmp(&local_228,&DAT_1811085d0,0x40);
    if (iVar15 == 0) {
      if (DAT_180cd1106 == '\0') {
        return (undefined *)0x0;
      }
      if (DAT_1808ac3f0 < dVar31 - _DAT_181108560) {
        return (undefined *)0x0;
      }
    }
    else {
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      cVar14 = FUN_180382ef0(&local_228,&local_118);
      puVar18 = PTR_s_not_installed_1809f7838;
      if (cVar14 == '\0') {
        LOCK();
        PTR_s_not_installed_1809f7838 = s_bad_view_matrix_180890788;
        UNLOCK();
        return puVar18;
      }
      FUN_180383890(&DAT_1811085d0,&local_118,&DAT_1811086b0);
      _DAT_1811087f0 = local_108;
      uRam00000001811087f8 = uStack_100;
      local_538[1] = dVar31 - _DAT_181108560;
      _DAT_1811087e0 = local_118;
      uRam00000001811087e8 = uStack_110;
      _DAT_181108800 = local_f8;
      uRam0000000181108808 = uStack_f0;
      DAT_180cd1106 = '\x01';
      local_538[0] = DAT_1808ac2a0;
      pdVar24 = local_538;
      if (DAT_1808ac2a0 <= local_538[1]) {
        pdVar24 = local_538 + 1;
      }
      _DAT_1811085e0 = CONCAT44(iStack_214,local_218);
      uRam00000001811085e8 = CONCAT44(uStack_20c,uStack_210);
      local_538[2] = DAT_1808ac420;
      pdVar22 = local_538 + 2;
      if (local_538[1] <= DAT_1808ac420) {
        pdVar22 = pdVar24;
      }
      _DAT_181108810 = (undefined4)local_e8;
      uRam0000000181108814 = local_e8._4_4_;
      uRam0000000181108818 = (undefined4)uStack_e0;
      uRam000000018110881c = uStack_e0._4_4_;
      _DAT_1811085d0 = local_228;
      uRam00000001811085d8 = uStack_220;
      DAT_1809f7830 = *pdVar22;
      _DAT_1811085f0 = CONCAT44(fStack_204,local_208);
      uRam00000001811085f8 = CONCAT44(uStack_1fc,fStack_200);
      _DAT_181108600 = CONCAT44(fStack_1f4,local_1f8);
      uRam0000000181108608 = CONCAT44(uStack_1ec,fStack_1f0);
      fVar33 = local_208;
      fVar34 = fStack_204;
      fVar36 = fStack_200;
      fVar35 = local_1f8;
      fVar37 = fStack_1f4;
      fVar38 = fStack_1f0;
      _DAT_181108560 = dVar31;
    }
    uStack_14c = 0x3f800000;
    fVar32 = fVar35 * fVar35 + fVar37 * fVar37 + fVar38 * fVar38;
    if (DAT_1808abf68 <= fVar32) {
      local_578 = (fVar33 * fVar35 + fVar34 * fVar37 + fVar36 * fVar38) / fVar32 < DAT_1808ac1f4;
    }
    else {
      local_578 = true;
    }
    pcVar19 = "view matrix fallback";
    fVar33 = (float)(DAT_1808ac328 / DAT_1809f7830);
    uVar44 = _DAT_181108810;
    uVar45 = uRam0000000181108814;
    uVar46 = uRam0000000181108818;
    uVar47 = uRam000000018110881c;
    uVar48 = _DAT_1811086b0;
    uVar49 = uRam00000001811086b4;
    uVar50 = uRam00000001811086b8;
    uVar51 = uRam00000001811086bc;
    uVar52 = _DAT_1811086c0;
    uVar53 = uRam00000001811086c4;
    uVar54 = uRam00000001811086c8;
    uVar55 = uRam00000001811086cc;
    uVar56 = _DAT_1811086d0;
    uVar57 = uRam00000001811086d4;
    uVar58 = uRam00000001811086d8;
    uVar59 = uRam00000001811086dc;
    uVar60 = _DAT_1811086e0;
    uVar61 = uRam00000001811086e4;
    uVar62 = uRam00000001811086e8;
    uVar63 = uRam00000001811086ec;
  }
  else {
    if (lVar30 == DAT_181108258) {
      puVar18 = (undefined *)(ulonglong)DAT_180cd10bf;
    }
    else {
      _DAT_181108610 = _DAT_1811081d0;
      uRam0000000181108618 = uRam00000001811081d8;
      _DAT_181108630 = _DAT_1811081f0;
      uRam0000000181108638 = uRam00000001811081f8;
      _DAT_181108620 = _DAT_1811081e0;
      uRam0000000181108628 = uRam00000001811081e8;
      _DAT_181108650 = _DAT_181108210;
      uRam0000000181108658 = uRam0000000181108218;
      _DAT_181108670 = CONCAT44(uRam0000000181108234,_DAT_181108230);
      uRam0000000181108678 = CONCAT44(uRam000000018110823c,uRam0000000181108238);
      _DAT_181108640 = _DAT_181108200;
      uRam0000000181108648 = uRam0000000181108208;
      _DAT_181108660 = _DAT_181108220;
      uRam0000000181108668 = uRam0000000181108228;
      _DAT_181108680 = CONCAT44(uRam0000000181108244,_DAT_181108240);
      uRam0000000181108688 = CONCAT44(uRam000000018110824c,uRam0000000181108248);
      _DAT_181108690 = _DAT_181108250;
      lRam0000000181108698 = DAT_181108258;
      _DAT_1811081d0 = uVar28;
      uRam00000001811081d8 = uVar2;
      _DAT_1811081e0 = uVar3;
      uRam00000001811081e8 = uVar4;
      _DAT_1811081f0 = uVar5;
      uRam00000001811081f8 = uVar6;
      _DAT_181108200 = uVar7;
      uRam0000000181108208 = uVar8;
      _DAT_181108210 = uVar9;
      uRam0000000181108218 = uVar10;
      _DAT_181108220 = uVar11;
      uRam0000000181108228 = uVar12;
      _DAT_181108240 = (undefined4)local_558;
      uRam0000000181108244 = local_558._4_4_;
      uRam0000000181108248 = (undefined4)uStack_550;
      uRam000000018110824c = uStack_550._4_4_;
      _DAT_181108250 = dVar13;
      DAT_181108258 = lVar30;
      _DAT_181108230 = (undefined4)local_548;
      uRam0000000181108234 = local_548._4_4_;
      uRam0000000181108238 = (undefined4)uStack_540;
      uRam000000018110823c = uStack_540._4_4_;
      if ((lVar1 == 0) || (cVar14 = FUN_180383ad0(&DAT_181108610,&DAT_1811081d0), cVar14 == '\0')) {
        puVar18 = (undefined *)0x0;
        DAT_180cd10bf = 0;
      }
      else {
        puVar18 = (undefined *)0x1;
        DAT_180cd10bf = 1;
      }
    }
    if ((char)puVar18 == '\0') {
      return puVar18;
    }
    if (DAT_1808ac420 < dVar31 - _DAT_181108250) {
      return puVar18;
    }
    pcVar19 = "game views";
    local_168 = _DAT_181108270;
    uStack_160 = uRam0000000181108278;
    uStack_14c = DAT_18110828c;
    uStack_15c = _DAT_18110827c;
    local_158 = uRam0000000181108280;
    uStack_154 = (undefined4)uRam0000000181108284;
    uStack_150 = (undefined4)((ulonglong)uRam0000000181108284 >> 0x20);
    local_578 = (bool)DAT_180cd10bc;
    fVar33 = DAT_1811085b0;
    uVar40 = _DAT_181108260;
    uVar41 = uRam0000000181108264;
    uVar42 = uRam0000000181108268;
    uVar43 = uRam000000018110826c;
    uVar44 = _DAT_181108290;
    uVar45 = uRam0000000181108294;
    uVar46 = uRam0000000181108298;
    uVar47 = uRam000000018110829c;
    uVar48 = _DAT_181108760;
    uVar49 = uRam0000000181108764;
    uVar50 = uRam0000000181108768;
    uVar51 = uRam000000018110876c;
    uVar52 = _DAT_181108770;
    uVar53 = uRam0000000181108774;
    uVar54 = uRam0000000181108778;
    uVar55 = uRam000000018110877c;
    uVar56 = _DAT_181108780;
    uVar57 = uRam0000000181108784;
    uVar58 = uRam0000000181108788;
    uVar59 = uRam000000018110878c;
    uVar60 = _DAT_181108790;
    uVar61 = uRam0000000181108794;
    uVar62 = uRam0000000181108798;
    uVar63 = uRam000000018110879c;
  }
  LOCK();
  UNLOCK();
  if (DAT_1811081c0 == (longlong *)0x0) {
    puVar18 = PTR_DAT_1809f7828;
    plVar26 = (longlong *)0x0;
    PTR_DAT_1809f7828 = pcVar19;
  }
  else {
    local_568 = (longlong *)0x0;
    PTR_DAT_1809f7828 = pcVar19;
    puVar18 = (undefined *)(**(code **)(*DAT_1811081c0 + 0x38))(DAT_1811081c0,&local_568);
    if (local_568 == (longlong *)0x0) {
      plVar26 = (longlong *)0x0;
    }
    else {
      local_558 = (longlong *)0x0;
      (**(code **)*local_568)(local_568,&DAT_18058a4c0,&local_558);
      puVar18 = (undefined *)(**(code **)(*local_568 + 0x10))();
      plVar26 = local_558;
    }
  }
  if (DAT_1811081c8 == (longlong *)0x0) {
    plVar27 = (longlong *)0x0;
  }
  else {
    local_560 = (longlong *)0x0;
    puVar18 = (undefined *)(**(code **)(*DAT_1811081c8 + 0x38))(DAT_1811081c8,&local_560);
    if (local_560 == (longlong *)0x0) {
      plVar27 = (longlong *)0x0;
    }
    else {
      local_548 = (longlong *)0x0;
      (**(code **)*local_560)(local_560,&DAT_18058a4c0,&local_548);
      puVar18 = (undefined *)(**(code **)(*local_560 + 0x10))();
      plVar27 = local_548;
    }
  }
  if (plVar26 == (longlong *)0x0) {
    if (plVar27 == (longlong *)0x0) {
      return puVar18;
    }
    puVar18 = (undefined *)(**(code **)(*plVar27 + 0x10))(plVar27);
    return puVar18;
  }
  if (plVar27 == (longlong *)0x0) {
    puVar18 = (undefined *)(**(code **)(*plVar26 + 0x10))(plVar26);
    return puVar18;
  }
  local_510 = 0;
  local_520 = 0;
  uStack_518 = 0;
  (**(code **)(*DAT_1811081c0 + 0x40))(DAT_1811081c0,&local_520);
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  uStack_4a4 = 0;
  uStack_4a0 = 0;
  uStack_49c = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_4c0 = 0;
  uStack_4b8 = 0;
  (**(code **)(*plVar26 + 0x50))(plVar26,&local_1e8);
  (**(code **)(*plVar27 + 0x50))(plVar27,&local_4c0);
  iVar16 = FUN_180383fc0(local_4b0 & 0xffffffff);
  iVar15 = (int)local_520;
  if ((((DAT_181108570 == 0) || (DAT_181108580 != (int)local_1e8)) ||
      (DAT_181108584 != local_1e8._4_4_)) ||
     ((DAT_181108590 != (int)local_520 || (DAT_181108594 != 1)))) {
    FUN_180384800(&DAT_181108570);
    fStack_204 = 0.0;
    fStack_200 = 0.0;
    local_228 = local_1e8;
    uStack_220 = 0x100000001;
    local_218 = iVar15;
    iStack_214 = 1;
    uStack_210 = 0;
    uStack_20c = 0;
    local_208 = 1.12104e-44;
    iVar17 = (**(code **)(*DAT_1811085b8 + 0x28))(DAT_1811085b8,&local_228,0,&DAT_181108570);
    if ((iVar17 < 0) || (DAT_181108570 == 0)) goto LAB_18038578b;
    local_508[1] = 4;
    local_508[2] = 0;
    local_508[4] = 0;
    local_508[5] = 0;
    local_508[0] = iVar15;
    local_508[3] = 1;
    iVar15 = (**(code **)(*DAT_1811085b8 + 0x38))
                       (DAT_1811085b8,DAT_181108570,local_508,&DAT_181108578);
    if ((iVar15 < 0) || (DAT_181108578 == 0)) {
      FUN_180384800(&DAT_181108570);
      goto LAB_18038578b;
    }
    DAT_181108580 = (int)local_228;
    DAT_181108584 = local_228._4_4_;
    _DAT_181108588 = (undefined4)uStack_220;
    _DAT_18110858c = uStack_220._4_4_;
    DAT_181108590 = local_218;
    DAT_181108594 = iStack_214;
    _DAT_181108598 = uStack_210;
    _DAT_18110859c = uStack_20c;
    _DAT_1811085a0 = local_208;
    _DAT_1811085a4 = CONCAT44(fStack_200,fStack_204);
  }
  if (iVar16 == 0x13) {
    uVar28 = 0x15;
  }
  else if (iVar16 == 0x27) {
    uVar28 = 0x29;
  }
  else if (iVar16 == 0x2c) {
    uVar28 = 0x2e;
  }
  else {
    uVar28 = 0x38;
    if (iVar16 != 0x35) {
      uVar28 = 0;
    }
  }
  local_598 = (float)CONCAT31(local_598._1_3_,1);
  cVar14 = FUN_180384860(&DAT_1811087a0,&local_4c0,iVar16,uVar28);
  if (cVar14 != '\0') {
    if (local_1d8._4_4_ < 2) {
      (**(code **)(*param_1 + 0x178))(param_1,DAT_181108570,plVar26);
    }
    else {
      local_590 = (undefined4 **)CONCAT44(local_590._4_4_,(int)local_520);
      local_598 = 0.0;
      (**(code **)(*param_1 + 0x1c8))(param_1,DAT_181108570,0,plVar26);
    }
    (**(code **)(*param_1 + 0x178))(param_1,DAT_1811087a0,plVar27);
    (**(code **)(*plVar26 + 0x10))(plVar26);
    (**(code **)(*plVar27 + 0x10))(plVar27);
    local_570[0] = 1.0;
    local_574 = 0.0;
    fVar36 = (float)(local_1e8 & 0xffffffff);
    fVar34 = (float)(local_1e8 >> 0x20);
    fStack_130 = fVar39 / fVar36;
    local_138 = fVar36;
    fStack_134 = fVar34;
    pfVar25 = &local_574;
    if (0.0 <= *pfVar29) {
      pfVar25 = pfVar29;
    }
    fStack_12c = fVar39 / fVar34;
    pfVar23 = local_570;
    if (*pfVar29 <= fVar39) {
      pfVar23 = pfVar25;
    }
    fStack_124 = (fVar34 * DAT_1808aca7c) / DAT_1808acc48;
    local_128 = fVar33 * *pfVar23;
    fStack_120 = (float)(longlong)(local_4b0 >> 0x20);
    if (local_578 == false) {
      fVar39 = 0.0;
    }
    if (0.0 < local_128) {
      local_590 = &local_4f0;
      local_598 = 0.0;
      local_4f0 = (undefined4 *)0x0;
      uStack_4e8 = 0;
      fStack_11c = fVar39;
      iVar15 = (**(code **)(*param_1 + 0x70))(param_1,DAT_1811082a0,0,4);
      if (iVar15 < 0) {
        pcVar19 = "constant buffer map failed";
      }
      else {
        *local_4f0 = uVar48;
        local_4f0[1] = uVar49;
        local_4f0[2] = uVar50;
        local_4f0[3] = uVar51;
        local_4f0[4] = uVar52;
        local_4f0[5] = uVar53;
        local_4f0[6] = uVar54;
        local_4f0[7] = uVar55;
        local_4f0[8] = uVar56;
        local_4f0[9] = uVar57;
        local_4f0[10] = uVar58;
        local_4f0[0xb] = uVar59;
        local_4f0[0xc] = uVar60;
        local_4f0[0xd] = uVar61;
        local_4f0[0xe] = uVar62;
        local_4f0[0xf] = uVar63;
        local_4f0[0x10] = uVar40;
        local_4f0[0x11] = uVar41;
        local_4f0[0x12] = uVar42;
        local_4f0[0x13] = uVar43;
        *(undefined8 *)(local_4f0 + 0x14) = local_168;
        *(ulonglong *)(local_4f0 + 0x16) = CONCAT44(uStack_15c,uStack_160);
        *(ulonglong *)(local_4f0 + 0x18) = CONCAT44(uStack_154,local_158);
        *(ulonglong *)(local_4f0 + 0x1a) = CONCAT44(uStack_14c,uStack_150);
        local_4f0[0x1c] = uVar44;
        local_4f0[0x1d] = uVar45;
        local_4f0[0x1e] = uVar46;
        local_4f0[0x1f] = uVar47;
        *(ulonglong *)(local_4f0 + 0x20) = CONCAT44(fStack_134,local_138);
        *(ulonglong *)(local_4f0 + 0x22) = CONCAT44(fStack_12c,fStack_130);
        local_4f0[0x24] = local_128;
        local_4f0[0x25] = fStack_124;
        local_4f0[0x26] = fStack_120;
        local_4f0[0x27] = fStack_11c;
        (**(code **)(*param_1 + 0x78))(param_1,DAT_1811082a0,0);
        local_488[0] = 0;
        local_478 = 0;
        uStack_470 = 0;
        local_468 = 0;
        uStack_460 = 0;
        local_458 = 0;
        uStack_450 = 0;
        local_448 = 0;
        uStack_440 = 0;
        local_438 = 0;
        uStack_430 = 0;
        local_420 = 0;
        uStack_418 = 0;
        local_480 = 0;
        local_428 = 0;
        local_410 = 0;
        local_408 = 0;
        local_400 = 0;
        local_3fc = 0x10;
        FUN_180540170(local_3f8,0,0x180);
        local_238 = 0;
        local_278 = 0;
        uStack_270 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_248 = 0;
        uStack_240 = 0;
        FUN_18036dda0(local_488,param_1);
        local_588 = DAT_1811086f0;
        if (1 < local_4b0._4_4_) {
          local_588 = DAT_181108700;
        }
        local_580 = DAT_1811082a0;
        local_590 = (undefined4 **)DAT_1811082a8;
        local_598 = fVar34;
        FUN_18036e3d0(&DAT_181108730,param_1,DAT_1811081c0,fVar36);
        local_4e0 = DAT_181108578;
        local_4d8 = DAT_1811087a8;
        (**(code **)(*param_1 + 0x40))(param_1,0,2,&local_4e0);
        (**(code **)(*param_1 + 0x68))(param_1,3,0);
        local_4d0 = 0;
        uStack_4c8 = 0;
        (**(code **)(*param_1 + 0x40))(param_1,0,2,&local_4d0);
        FUN_18036df30(local_488,param_1);
        LOCK();
        DAT_181108820 = DAT_181108820 + 1;
        UNLOCK();
        pcVar19 = "active";
      }
      LOCK();
      UNLOCK();
      puVar18 = PTR_s_not_installed_1809f7838;
      PTR_s_not_installed_1809f7838 = pcVar19;
      return puVar18;
    }
    return (undefined *)(local_4b0 >> 0x20);
  }
LAB_18038578b:
  LOCK();
  PTR_s_not_installed_1809f7838 = s_failed_to_create_scene_copies_180890748;
  UNLOCK();
  (**(code **)(*plVar26 + 0x10))(plVar26);
  puVar18 = (undefined *)(**(code **)(*plVar27 + 0x10))(plVar27);
  return puVar18;
}



/* ===== 180385800 FUN_180385800 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180385800(longlong param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_b8;
  bVar7 = param_1 != DAT_181108710;
  piVar5 = &DAT_181108708;
  if (!bVar7) {
    piVar5 = &DAT_1811086a4;
  }
  LOCK();
  *piVar5 = *piVar5 + 1;
  UNLOCK();
  if (param_2 == 0) {
    return;
  }
  if (param_3 == (longlong *)0x0) {
    return;
  }
  param_3 = (longlong *)*param_3;
  if (param_3 == (longlong *)0x0) {
    return;
  }
  local_78 = &DAT_1809f7840;
  iVar3 = FUN_1804e4d70(&DAT_1809f7840);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f788c == 0x7fffffff) {
    DAT_1809f788c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (param_4 != (longlong *)0x0) {
    local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
    local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
    iVar3 = FUN_180384040(param_3,param_4,&local_90,&local_98);
    if (iVar3 != 0) {
      if (DAT_180cd1105 == '\0') {
        DAT_1811084c4 = 0;
      }
      if (DAT_1811084c4 <= iVar3) {
        DAT_180cd1105 = '\x01';
        DAT_181108718 = (int)local_90;
        DAT_18110871c = (int)local_98;
        DAT_1811084c4 = iVar3;
        if (DAT_1811081c0 != param_3) {
          if (DAT_1811081c0 != (longlong *)0x0) {
            (**(code **)(*DAT_1811081c0 + 0x10))();
          }
          DAT_1811081c0 = param_3;
          (**(code **)(*param_3 + 8))(param_3);
        }
        if (DAT_1811081c8 != param_4) {
          if (DAT_1811081c8 != (longlong *)0x0) {
            (**(code **)(*DAT_1811081c8 + 0x10))();
          }
          DAT_1811081c8 = param_4;
          (**(code **)(*param_4 + 8))(param_4);
        }
      }
      LOCK();
      DAT_1811084c0 = DAT_1811084c0 + 1;
      UNLOCK();
      goto LAB_180385b2b;
    }
  }
  plVar1 = DAT_1811082b0;
  if (DAT_1811082b0 == (longlong *)0x0) {
LAB_18038599f:
    bVar8 = false;
  }
  else {
    local_98 = (longlong *)0x0;
    (**(code **)(*param_3 + 0x38))(param_3,&local_98);
    bVar8 = local_98 != plVar1;
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    if (bVar8) goto LAB_18038599f;
    bVar8 = true;
    LOCK();
    DAT_1811081b8 = DAT_1811081b8 + 1;
    UNLOCK();
  }
  if ((DAT_180cd1105 == '\0') || (DAT_1811081c0 == (longlong *)0x0)) goto LAB_180385b2b;
  if (!bVar8) {
    if (param_4 != (longlong *)0x0) goto LAB_180385b2b;
    local_98 = (longlong *)0x0;
    (**(code **)(*param_3 + 0x38))(param_3,&local_98);
    if (local_98 == (longlong *)0x0) {
LAB_180385abd:
      bVar8 = false;
    }
    else {
      local_88 = (longlong *)0x0;
      (**(code **)*local_98)(local_98,&DAT_18058a4c0,&local_88);
      (**(code **)(*local_98 + 0x10))();
      plVar1 = local_88;
      if (local_88 == (longlong *)0x0) goto LAB_180385abd;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      (**(code **)(*local_88 + 0x50))(local_88,&local_70);
      if (DAT_1811081c0 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
LAB_180385a85:
        if ((((int)local_70 != DAT_181108718) || (local_70._4_4_ != DAT_18110871c)) ||
           (uStack_68._4_4_ != 1)) goto LAB_180385aa5;
        bVar8 = true;
      }
      else {
        local_90 = (longlong *)0x0;
        (**(code **)(*DAT_1811081c0 + 0x38))(DAT_1811081c0,&local_90);
        if (local_90 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
          goto LAB_180385a85;
        }
        local_80 = (longlong *)0x0;
        (**(code **)*local_90)(local_90,&DAT_18058a4c0,&local_80);
        (**(code **)(*local_90 + 0x10))();
        plVar6 = local_80;
        if (plVar1 != local_80) goto LAB_180385a85;
LAB_180385aa5:
        bVar8 = false;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    if (!bVar8) goto LAB_180385b2b;
  }
  DAT_180cd1105 = '\0';
  LOCK();
  DAT_18110856c = DAT_18110856c + 1;
  UNLOCK();
  LOCK();
  UNLOCK();
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar4 = &DAT_18093d000;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar4 = &DAT_18093d614 + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    pcVar4 = &DAT_18093ca2c;
  }
  DAT_180cd10bd = bVar7;
  if (*pcVar4 != '\0') {
    FUN_1803849d0(param_1);
  }
  cVar2 = FUN_180365e00();
  if (cVar2 != '\0') {
    FUN_1803660d0(extraout_XMM0_Da,param_1);
  }
LAB_180385b2b:
  FUN_1804e4e90(&DAT_1809f7840);
  return;
}



/* ===== 180385b80 FUN_180385b80 ===== */

void FUN_180385b80(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  
  if (DAT_180cd10be != '\0') {
    if ((param_1 == DAT_181108710) && (DAT_180cd1108 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (!bVar2 && *(char *)(lVar1 + 0x12) == '\0') {
      if (DAT_1809ebfb8 == 0xfffffffe) {
        pcVar4 = &DAT_18093d000;
      }
      else if (DAT_1809ebfb8 < 0x30) {
        pcVar4 = &DAT_18093d614 + (longlong)(int)DAT_1809ebfb8 * 0x614;
      }
      else {
        pcVar4 = &DAT_18093ca2c;
      }
      if ((*pcVar4 != '\0') || (cVar3 = FUN_180365e00(), cVar3 != '\0')) {
        *(undefined1 *)(lVar1 + 0x12) = 1;
        FUN_180385800(param_1,param_2,param_3);
        *(undefined1 *)(lVar1 + 0x12) = 0;
      }
    }
  }
  return;
}



/* ===== 180385c50 FUN_180385c50 ===== */

void FUN_180385c50(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  FUN_180385b80();
  if (((param_2 != 0xffffffff) && (DAT_180cd1306 != '\0')) && (param_3 != 0)) {
    uVar3 = param_2;
    if (8 < param_2) {
      uVar3 = 8;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        if (*(longlong *)(param_3 + uVar2 * 8) != 0) {
          FUN_1803ba710();
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  (*DAT_1811081b0)(param_1,param_2,param_3,param_4);
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180385ce0 FUN_180385ce0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180385ce0(void)

{
  char cVar1;
  char *pcVar2;
  ULONGLONG UVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  char *pcVar6;
  ULONGLONG UVar7;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  LOCK();
  DAT_180cd1108 = 0;
  UNLOCK();
  pcVar6 = &DAT_18093d000;
  if (DAT_1809ebfb8 == 0xfffffffe) {
    pcVar2 = &DAT_18093d000;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    pcVar2 = &DAT_18093d614 + (longlong)(int)DAT_1809ebfb8 * 0x614;
  }
  else {
    pcVar2 = &DAT_18093ca2c;
  }
  if (((*pcVar2 == '\0') && (cVar1 = FUN_180365e00(), cVar1 == '\0')) && (DAT_180cd10be != '\0')) {
    LOCK();
    PTR_s_not_installed_1809f7838 = s_disabled_1806f0ad8;
    UNLOCK();
  }
  UVar3 = GetTickCount64();
  if (DAT_1809ebfb8 != 0xfffffffe) {
    if (DAT_1809ebfb8 < 0x30) {
      pcVar6 = &DAT_18093d614 + (longlong)(int)DAT_1809ebfb8 * 0x614;
    }
    else {
      pcVar6 = &DAT_18093ca2c;
    }
  }
  UVar7 = UVar3;
  if ((*pcVar6 == '\0') && (cVar1 = FUN_180365e00(), cVar1 == '\0')) {
    return;
  }
  if (4999 < UVar7 - _DAT_1811162e0) {
    puVar4 = &DAT_1809f7890;
    if (0xf < DAT_1809f78a8) {
      puVar4 = DAT_1809f7890;
    }
    pcVar6 = "";
    puVar5 = &DAT_1806e6a94;
    if (DAT_1809f78a0 == 0) {
      puVar5 = (undefined2 *)&DAT_18058b643;
    }
    if (DAT_180cd10bd != '\0') {
      pcVar6 = " (deferred)";
    }
    _DAT_1811162e0 = UVar7;
    snprintf(&DAT_1811082c0,0x200,
             "matrices %s  view updates %d\ncalls imm %d def %d  scenes %d  bb binds %d  triggers %d%s\nscene fmt %d depth fmt %d msaa %u  %ux%u\nlargest pair fmt %d depth %d %ux%u%s%s"
             ,PTR_DAT_1809f7828,DAT_181108720,CONCAT44(uVar8,DAT_1811086a4),DAT_181108708,
             CONCAT44(uVar9,DAT_1811084c0),DAT_1811081b8,DAT_18110856c,pcVar6,DAT_1811086f8,
             DAT_1811085c4,DAT_181108724,DAT_181108718,DAT_18110871c,DAT_181108750,DAT_1811085c0,
             DAT_181108568,DAT_1811086a0,puVar5,puVar4);
    if (DAT_1809ebfb8 == 0xfffffffe) {
      pcVar6 = &DAT_18093d000;
    }
    else if (DAT_1809ebfb8 < 0x30) {
      pcVar6 = &DAT_18093d614 + (longlong)(int)DAT_1809ebfb8 * 0x614;
    }
    else {
      pcVar6 = &DAT_18093ca2c;
    }
    puVar4 = &DAT_1809f7660;
    if (0xf < DAT_1809f7678) {
      puVar4 = DAT_1809f7660;
    }
    FUN_1802b2870("wl_world.log","[%llu] motion blur %s | applied %d | postfx %s | blur on %d\n%s\n"
                  ,UVar3,PTR_s_not_installed_1809f7838,DAT_181108820,puVar4,*pcVar6 != '\0',
                  &DAT_1811082c0);
  }
  return;
}



/* ===== 180386030 FUN_180386030 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180386030(void)

{
  int iVar1;
  
  iVar1 = FUN_1804e4d70(&DAT_1809f7840);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809f788c == 0x7fffffff) {
    DAT_1809f788c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if (DAT_1811082b0 != (longlong *)0x0) {
    (**(code **)(*DAT_1811082b0 + 0x10))();
    DAT_1811082b0 = (longlong *)0x0;
  }
  if (DAT_1811081c0 != (longlong *)0x0) {
    (**(code **)(*DAT_1811081c0 + 0x10))();
    DAT_1811081c0 = (longlong *)0x0;
  }
  if (DAT_1811081c8 != (longlong *)0x0) {
    (**(code **)(*DAT_1811081c8 + 0x10))();
    DAT_1811081c8 = (longlong *)0x0;
  }
  if (DAT_181108578 != (longlong *)0x0) {
    (**(code **)(*DAT_181108578 + 0x10))();
    DAT_181108578 = (longlong *)0x0;
  }
  if (DAT_181108570 != (longlong *)0x0) {
    (**(code **)(*DAT_181108570 + 0x10))();
    DAT_181108570 = (longlong *)0x0;
  }
  _DAT_181108580 = 0;
  _DAT_181108588 = 0;
  DAT_181108590 = 0;
  DAT_181108594 = 0;
  _DAT_181108598 = 0;
  _DAT_18110859c = 0;
  _DAT_1811085a4 = 0;
  if (DAT_1811087a8 != (longlong *)0x0) {
    (**(code **)(*DAT_1811087a8 + 0x10))();
    DAT_1811087a8 = (longlong *)0x0;
  }
  if (DAT_1811087a0 != (longlong *)0x0) {
    (**(code **)(*DAT_1811087a0 + 0x10))();
    DAT_1811087a0 = (longlong *)0x0;
  }
  _DAT_1811087b0 = 0;
  uRam00000001811087b8 = 0;
  _DAT_1811087c0 = 0;
  uRam00000001811087c4 = 0;
  uRam00000001811087c8 = 0;
  _DAT_1811087cc = 0;
  uRam00000001811087d4 = 0;
  DAT_180cd1105 = 0;
  DAT_180cd1107 = 0;
  FUN_1804e4e90(&DAT_1809f7840);
  return;
}



/* ===== 1803861b0 FUN_1803861b0 ===== */

undefined4 FUN_1803861b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = 0xffffffff;
  (*DAT_180962088)(param_1,local_res18,param_2,8,0,0,0,0);
  return local_res18[0];
}



/* ===== 180386200 FUN_180386200 ===== */

void FUN_180386200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (DAT_1809620b0 != (code *)0x0) {
    local_18 = 0x7f7fffff;
    local_14 = 0x7f7fffff;
    local_10 = 0x7f7fffff;
    (*DAT_1809620b0)(param_1,param_2,2,param_4,1,0,&local_18,1,0);
  }
  return;
}



/* ===== 180386260 FUN_180386260 ===== */

void FUN_180386260(void)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180962080 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18000f3a0();
  }
  iVar1 = DAT_1809f7900;
  DAT_1809f7900 = 0xffffffff;
  if ((iVar1 != -1) && (lVar2 != 0)) {
    FUN_18007eb70(lVar2);
  }
  iVar1 = DAT_1809f7904;
  DAT_1809f7904 = 0xffffffff;
  if ((iVar1 != -1) && (lVar2 != 0)) {
    FUN_18007eb70(lVar2);
  }
  iVar1 = DAT_1809f70bc;
  LOCK();
  DAT_1809f70bc = 0xffffffff;
  UNLOCK();
  DAT_1809f7178 = 0xffffffff;
  if ((iVar1 == -1) || (lVar2 == 0)) {
    return;
  }
  FUN_18007eb70(lVar2);
  return;
}



/* ===== 180386310 FUN_180386310 ===== */

char * FUN_180386310(void)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float **ppfVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 uVar15;
  float **ppfVar16;
  float *pfVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *local_res8;
  float *local_res10;
  char *local_res18;
  char *local_res20;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined8 local_a8;
  float local_a0;
  int local_98 [2];
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_70 [48];
  
  if (((DAT_180cd110b == '\0') && (DAT_1809620c0 != 0)) && (lVar7 = FUN_18000f3a0(), lVar7 != 0)) {
    DAT_180cd110b = FUN_180273b60("round_start",&LAB_180386300);
  }
  if (DAT_180cd110a != '\0') {
LAB_180386abd:
    pcVar18 = (char *)FUN_180386260();
    return pcVar18;
  }
  if (DAT_1809ebfb8 == 0xfffffffe) {
    local_res8 = (float *)&DAT_18093d014;
    local_res18 = &DAT_18093d02c;
    local_res10 = (float *)&DAT_18093d018;
    pcVar18 = &DAT_18093d008;
    local_res20 = &DAT_18093d02d;
    piVar14 = (int *)&DAT_18093d00c;
    local_b8 = (float **)&DAT_18093d024;
    pfVar17 = (float *)&DAT_18093d010;
    local_a8 = (float **)&DAT_18093d028;
    ppfVar16 = (float **)&DAT_18093d020;
  }
  else if (DAT_1809ebfb8 < 0x30) {
    lVar7 = (longlong)(int)DAT_1809ebfb8 * 0x614;
    local_res8 = (float *)(&DAT_18093d628 + lVar7);
    pcVar18 = &DAT_18093d61c + lVar7;
    local_res10 = (float *)(&DAT_18093d62c + lVar7);
    piVar14 = (int *)(&DAT_18093d620 + lVar7);
    local_res20 = &DAT_18093d641 + lVar7;
    local_res18 = &DAT_18093d640 + lVar7;
    local_b8 = (float **)(&DAT_18093d638 + lVar7);
    pfVar17 = (float *)(&DAT_18093d624 + lVar7);
    ppfVar16 = (float **)(&DAT_18093d634 + lVar7);
    local_a8 = (float **)(&DAT_18093d63c + lVar7);
  }
  else {
    local_res8 = (float *)&DAT_18093ca40;
    pcVar18 = &DAT_18093ca34;
    local_res10 = (float *)&DAT_18093ca44;
    piVar14 = &DAT_18093ca38;
    local_res18 = &DAT_18093ca58;
    pfVar17 = (float *)&DAT_18093ca3c;
    local_res20 = &DAT_18093ca59;
    ppfVar16 = (float **)&DAT_18093ca4c;
    local_b8 = (float **)&DAT_18093ca50;
    local_a8 = (float **)&DAT_18093ca54;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_d8);
    DAT_181108a00 = CONCAT44(fStack_d4,local_d8);
    DAT_1811089f8 = FUN_1803a0c50(&local_d8);
    DAT_180cd1304 = '\x01';
  }
  lVar7 = DAT_1811089f8;
  local_98[1] = 3;
  local_98[0] = 0;
  piVar11 = local_98;
  if (-1 < *piVar14) {
    piVar11 = piVar14;
  }
  piVar12 = local_98 + 1;
  if (*piVar14 < 4) {
    piVar12 = piVar11;
  }
  if ((*pcVar18 == '\0') || (DAT_1811089f8 == 0)) goto LAB_180386abd;
  iVar1 = *piVar12;
  lVar13 = (longlong)iVar1;
  cVar4 = FUN_1803a10a0();
  cVar3 = DAT_180cd1109;
  if (cVar4 == '\0') goto LAB_180386abd;
  LOCK();
  DAT_180cd1109 = 0;
  UNLOCK();
  if ((cVar3 != '\0') || (pcVar18 = (char *)0x0, DAT_1809f7178 != iVar1)) {
    pcVar18 = (char *)FUN_180386260();
  }
  if (DAT_180962080 == 0) {
    return pcVar18;
  }
  pcVar18 = (char *)FUN_18000f3a0();
  if (pcVar18 == (char *)0x0) {
    return (char *)0x0;
  }
  if (DAT_180962088 == 0) {
    return pcVar18;
  }
  if (DAT_180962090 == 0) {
    return pcVar18;
  }
  if (DAT_1809f70bc == 0xffffffff) {
    if ((&DAT_181108824)[lVar13] == '\0') {
      uVar5 = FUN_1802080c0((&PTR_s_particles_dev_materials_test_bur_1806a8fb0)[lVar13 * 4]);
      (&DAT_181108824)[lVar13] = uVar5;
    }
    uVar6 = FUN_1803861b0(pcVar18,(&PTR_s_particles_dev_materials_test_bur_1806a8fb0)[lVar13 * 4]);
    LOCK();
    pcVar10 = (char *)(ulonglong)DAT_1809f70bc;
    UNLOCK();
    if (uVar6 == 0xffffffff) {
      DAT_1809f70bc = uVar6;
      return pcVar10;
    }
    DAT_1809f70bc = uVar6;
    DAT_1809f7178 = iVar1;
    if (iVar1 == 1) {
      FUN_180386200(pcVar18,uVar6);
    }
  }
  uVar6 = DAT_1809f70bc;
  if (DAT_180ca09f8 == 0) {
LAB_1803866ce:
    fVar19 = 0.0;
    local_c8 = 0;
    local_c0 = 0.0;
  }
  else {
    lVar13 = FUN_18000f3a0(lVar7 + (ulonglong)DAT_180ca09f8);
    if ((lVar13 == 0) || (DAT_180ca0950 == 0)) goto LAB_1803866ce;
    puVar8 = (undefined8 *)FUN_1800111b0(&local_d8,lVar13 + (ulonglong)DAT_180ca0950);
    local_c0 = *(float *)(puVar8 + 1);
    local_c8._4_4_ = (float)((ulonglong)*puVar8 >> 0x20);
    fVar19 = local_c8._4_4_;
    local_c8 = *puVar8;
  }
  local_90 = *pfVar17 * DAT_1808acb94;
  local_8c = *local_res8 * DAT_1808acb94;
  local_88 = *local_res10 * DAT_1808acb94;
  if (iVar1 != 1) {
    fVar19 = *(float *)ppfVar16;
    uVar2 = (ulonglong)local_res8 >> 0x20;
    local_res8 = (float *)(uVar2 << 0x20);
    if (iVar1 == 3) {
      fStack_d4 = 0.0;
      fStack_d0 = 0.0;
      ppfVar9 = &local_res8;
      if (0.0 <= fVar19) {
        ppfVar9 = ppfVar16;
      }
      if (DAT_1808ac658 < fVar19) {
        ppfVar9 = (float **)&DAT_1806a90a0;
      }
      local_d8 = *(float *)ppfVar9;
      FUN_18007e970(pcVar18,uVar6,0,&local_c8);
      FUN_18007e970(pcVar18,uVar6,5,&local_90);
      pfVar17 = &local_d8;
      uVar15 = 6;
    }
    else {
      ppfVar9 = &local_res8;
      if (0.0 <= fVar19) {
        ppfVar9 = ppfVar16;
      }
      if (DAT_1808ac658 < fVar19) {
        ppfVar9 = (float **)&DAT_1806a90a0;
      }
      local_80 = *(float *)ppfVar9;
      ppfVar16 = &local_res8;
      if (0.0 <= *(float *)local_b8) {
        ppfVar16 = local_b8;
      }
      local_res8 = (float *)(uVar2 << 0x20);
      if (DAT_1808ac658 < *(float *)local_b8) {
        ppfVar16 = (float **)&DAT_1806a90a0;
      }
      local_7c = *(float *)ppfVar16;
      ppfVar16 = &local_res8;
      if (0.0 <= *(float *)local_a8) {
        ppfVar16 = local_a8;
      }
      local_res8 = (float *)(uVar2 << 0x20);
      if (DAT_1808ac658 < *(float *)local_a8) {
        ppfVar16 = (float **)&DAT_1806a90a0;
      }
      local_78 = *(float *)ppfVar16;
      FUN_18007e970(pcVar18,uVar6,0,&local_c8);
      FUN_18007e970(pcVar18,uVar6,1,&local_90);
      pfVar17 = &local_80;
      uVar15 = 3;
    }
    goto LAB_1803869cf;
  }
  local_a0 = local_c0 + DAT_1808acb90;
  local_a8 = (float **)CONCAT44(fVar19 + 0.0,(float)local_c8 + 0.0);
  if (DAT_180ca09f8 == 0) {
LAB_180386781:
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  else {
    lVar7 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + lVar7);
    if ((lVar7 == 0) || (DAT_180ca0950 == 0)) goto LAB_180386781;
    pfVar17 = (float *)FUN_1800111b0(local_70,lVar7 + (ulonglong)DAT_180ca0950);
    fVar19 = *pfVar17;
    fVar20 = pfVar17[1];
    fVar21 = pfVar17[2];
  }
  local_res8 = (float *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_b8._4_4_ = 0;
  uStack_b0 = 0;
  fStack_d0 = fVar21 + DAT_1808acab0 + DAT_1808acb08;
  local_d8 = fVar19 + 0.0 + 0.0;
  fStack_d4 = fVar20 + 0.0 + 0.0;
  ppfVar9 = &local_res8;
  if (0.0 <= *(float *)ppfVar16) {
    ppfVar9 = ppfVar16;
  }
  if (DAT_1808ac658 < *(float *)ppfVar16) {
    ppfVar9 = (float **)&DAT_1806a90a0;
  }
  local_b8._0_4_ = *(float *)ppfVar9;
  FUN_18007e970(pcVar18,uVar6,0,&local_a8);
  FUN_18007e970(pcVar18,uVar6,1,&local_90);
  FUN_18007e970(pcVar18,uVar6,3,&local_b8);
  iVar1 = DAT_1809f7900;
  if (*local_res18 == '\0') {
    DAT_1809f7900 = -1;
    if (iVar1 != -1) {
      FUN_18007eb70(pcVar18);
    }
  }
  else {
    if (DAT_1809f7900 == -1) {
      if (DAT_180ce97a4 == '\0') {
        DAT_180ce97a4 = FUN_1802080c0("particles/rain_fx/rain_mist.vpcf");
      }
      DAT_1809f7900 = FUN_1803861b0(pcVar18,"particles/rain_fx/rain_mist.vpcf");
      if (DAT_1809f7900 == -1) goto LAB_1803868c1;
    }
    FUN_18007e970(pcVar18,DAT_1809f7900,0,&local_d8);
    FUN_18007e970(pcVar18,DAT_1809f7900,1,&local_d8);
  }
LAB_1803868c1:
  uVar6 = DAT_1809f7904;
  if (*local_res20 == '\0') {
    DAT_1809f7904 = 0xffffffff;
    if (uVar6 == 0xffffffff) {
      DAT_1809f7904 = 0xffffffff;
      return local_res20;
    }
    pcVar18 = (char *)FUN_18007eb70(pcVar18);
    return pcVar18;
  }
  pcVar10 = (char *)(ulonglong)DAT_1809f7904;
  if (DAT_1809f7904 == 0xffffffff) {
    if (DAT_180ce97a5 == '\0') {
      DAT_180ce97a5 = FUN_1802080c0("particles/rain_fx/rain_puddle_ripples.vpcf");
    }
    pcVar10 = (char *)FUN_1803861b0(pcVar18,"particles/rain_fx/rain_puddle_ripples.vpcf");
    DAT_1809f7904 = (uint)pcVar10;
    if (DAT_1809f7904 == 0xffffffff) {
      return pcVar10;
    }
  }
  FUN_18007e970(pcVar18,(ulonglong)pcVar10 & 0xffffffff,0,&local_c8);
  pfVar17 = (float *)&local_c8;
  uVar15 = 1;
  uVar6 = DAT_1809f7904;
LAB_1803869cf:
  pcVar18 = (char *)FUN_18007e970(pcVar18,uVar6,uVar15,pfVar17);
  return pcVar18;
}



