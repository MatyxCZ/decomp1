/* ===== 180563920 FUN_180563920 ===== */

void FUN_180563920(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1801f3cf0(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



/* ===== 18056395c FUN_18056395c ===== */

undefined8 FUN_18056395c(void)

{
  FUN_1802b2560("[rage] angle table: out of memory");
  return 0;
}



/* ===== 1805639ac FUN_1805639ac ===== */

undefined8 FUN_1805639ac(void)

{
  return 0;
}



/* ===== 1805639d0 FUN_1805639d0 ===== */

undefined8 FUN_1805639d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 0xb0) + *(longlong *)(param_2 + 0x30) * 8;
  lVar3 = *(longlong *)(param_2 + 0x50);
  FUN_180477de0(lVar2,lVar2 + lVar3 * 8,*(undefined8 *)(param_2 + 0x38),
                *(undefined1 *)(param_2 + 0xb8));
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0xc0) + 0x10);
  *plVar1 = *plVar1 + lVar3;
  return 0;
}



/* ===== 180563c80 FUN_180563c80 ===== */

void FUN_180563c80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1804eb8c0(param_2 + 0x30);
  }
  return;
}



/* ===== 180563cb0 FUN_180563cb0 ===== */

void FUN_180563cb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1804eb8c0(param_2 + 0x30);
  }
  return;
}



/* ===== 180563ce0 FUN_180563ce0 ===== */

void FUN_180563ce0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_1804eb8c0(param_2 + 0x30);
  }
  return;
}



/* ===== 180563d10 FUN_180563d10 ===== */

void FUN_180563d10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_1804eb8c0(param_2 + 0x30);
  }
  return;
}



/* ===== 180563d40 FUN_180563d40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180563d40(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1805277b0(*(undefined8 *)(param_2 + 0x98));
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x20) = 8;
  LOCK();
  _DAT_1809192e8 = _DAT_1809192e8 + 1;
  UNLOCK();
  *(undefined **)(param_2 + 0x30) = &DAT_1809192f0;
  *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1809192e0;
  FUN_1804eb950(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_180013d00();
  }
  return 0;
}



/* ===== 180563dd0 FUN_180563dd0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180563dd0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  puVar3 = (undefined8 *)FUN_1804eedd0();
  piVar1 = (int *)*puVar3;
  if ((*piVar1 == -0x1fbcb0b3) || (*piVar1 == -0x1fbcbcae)) {
    thunk_FUN_1805277b0(*(undefined8 *)(param_2 + 0x98));
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x20) = 2;
    LOCK();
    _DAT_1809192e8 = _DAT_1809192e8 + 1;
    UNLOCK();
    *(undefined **)(param_2 + 0x30) = &DAT_1809192f0;
    *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1809192e0;
    FUN_1804eb950(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x20) = 0;
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_180013d00();
    }
    puVar5 = (undefined *)0x1804ebcec;
  }
  else if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
          ((piVar1[8] == 0x19930520 ||
           (((piVar1[8] == 0x19930521 || (piVar1[8] == 0x19930522)) || (piVar1[8] == 0x1994000))))))
  {
    lVar6 = (longlong)
            *(int *)((longlong)*(int *)(*(longlong *)(piVar1 + 0xc) + 0xc) + 4 +
                    *(longlong *)(piVar1 + 0xe)) + *(longlong *)(piVar1 + 0xe);
    uVar7 = (longlong)*(int *)(lVar6 + 0x14) + 0xb0;
    if (*(ulonglong *)(param_2 + 0x28) < uVar7) {
      thunk_FUN_1805277b0(*(undefined8 *)(param_2 + 0x98));
      lVar4 = _malloc_base(uVar7);
      *(longlong *)(param_2 + 0x98) = lVar4;
      if (lVar4 == 0) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x20) = 4;
        LOCK();
        DAT_1809193a8 = DAT_1809193a8 + 1;
        UNLOCK();
        *(undefined **)(param_2 + 0x30) = &DAT_1809193b0;
        *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1809193a0;
        FUN_1804eb950(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
        *(undefined4 *)(param_2 + 0x20) = 0;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          FUN_180013d00();
        }
        return &DAT_1804ebcfc;
      }
    }
    else {
      lVar4 = *(longlong *)(param_2 + 0x98);
    }
    FUN_1804ebe90(lVar4 + 0xb0,*(undefined8 *)(piVar1 + 10),lVar6,*(undefined8 *)(param_2 + 0x30));
    lVar6 = FUN_1804eb740(lVar4,piVar1);
    *(longlong *)(lVar6 + 0x38) = lVar4 + 0xb0;
    plVar2 = *(longlong **)(param_2 + 0x80);
    *plVar2 = lVar6 + 0x10;
    plVar2[1] = lVar6;
    puVar5 = &DAT_1804ebcfe;
  }
  else {
    FUN_1804ebd10(*(undefined8 *)(param_2 + 0x80),piVar1,*(undefined8 *)(param_2 + 0x98));
    puVar5 = &DAT_1804ebd02;
  }
  return puVar5;
}



/* ===== 180563fe0 FUN_180563fe0 ===== */

void FUN_180563fe0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1804eb8c0(param_2 + 0x28);
  }
  return;
}



/* ===== 180564020 FUN_180564020 ===== */

bool FUN_180564020(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



/* ===== 180564040 FUN_180564040 ===== */

void FUN_180564040(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1804ecf50(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),
                  *(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



/* ===== 180564070 FUN_180564070 ===== */

undefined4 FUN_180564070(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
  if (**(int **)(param_2 + 0x28) == -0x1f928c9d) {
    puVar2 = (undefined8 *)FUN_1804eedd0();
    *puVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    puVar2 = (undefined8 *)FUN_1804eedf0();
    *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180515f70();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



/* ===== 1805640d0 FUN_1805640d0 ===== */

void FUN_1805640d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1804ecf50(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
                  *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x70));
  }
  return;
}



/* ===== 180564100 FUN_180564100 ===== */

undefined8 FUN_180564100(void)

{
  return 0;
}



/* ===== 180564120 FUN_180564120 ===== */

void FUN_180564120(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\0') {
    FUN_1804ecf50(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x70),
                  *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x88));
  }
  return;
}



/* ===== 180564150 FUN_180564150 ===== */

void FUN_180564150(undefined8 param_1,longlong param_2)

{
  FUN_1804ecde0(*(undefined1 *)(param_2 + 0x60));
  return;
}



/* ===== 180564170 FUN_180564170 ===== */

void FUN_180564170(undefined8 param_1,longlong param_2)

{
  FUN_1804ecde0(*(undefined1 *)(param_2 + 0x20));
  return;
}



/* ===== 18056418a FUN_18056418a ===== */

void FUN_18056418a(void)

{
  FUN_1804ecce0();
  return;
}



/* ===== 1805641a0 FUN_1805641a0 ===== */

void FUN_1805641a0(undefined8 *param_1,longlong param_2)

{
  FUN_1804ecc50(*(undefined8 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 0x68),
                *(undefined8 *)(param_2 + 0x70),FUN_1804ed530,*(undefined4 *)*param_1,param_1);
  return;
}



/* ===== 1805641e0 FUN_1805641e0 ===== */

undefined4 FUN_1805641e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  lVar2 = *(longlong *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar3 = FUN_1804ef840();
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_1804ef840();
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  FUN_1804f1c50(**(undefined8 **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x88),
                *(undefined8 *)(param_2 + 0x90),lVar2,*(undefined8 *)(param_2 + 0xa0),0,0,1);
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



/* ===== 180564290 FUN_180564290 ===== */

undefined4 FUN_180564290(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  lVar2 = *(longlong *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  lVar3 = FUN_1804ef840();
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  lVar3 = FUN_1804ef840();
  *(undefined8 *)(lVar3 + 0x68) = uVar1;
  lVar3 = FUN_1804ef840();
  *(undefined4 *)(lVar3 + 0x78) = *(undefined4 *)(param_2 + 0xb8);
  FUN_1804f1c60(**(undefined8 **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x88),
                *(undefined8 *)(param_2 + 0x90),lVar2,*(undefined8 *)(param_2 + 0xa0),0,0,1);
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



/* ===== 180564350 FUN_180564350 ===== */

undefined4 FUN_180564350(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if (*(char *)(param_2 + 0x58) != '\0') {
    *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30);
    if (((**(int **)(param_2 + 0x28) == -0x1f928c9d) &&
        (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
       ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
        ((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521 ||
         (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))))) {
      lVar2 = FUN_1804ef840();
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
      lVar2 = FUN_1804ef840();
      *(undefined8 *)(lVar2 + 0x28) = uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_180515f70();
    }
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



/* ===== 1805643f0 FUN_1805643f0 ===== */

void FUN_1805643f0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  *(undefined4 *)(lVar1 + 0x78) = 0xfffffffe;
  return;
}



/* ===== 180564410 FUN_180564410 ===== */

void FUN_180564410(undefined8 param_1,longlong param_2)

{
  FUN_1804f23b0(param_1,*(undefined8 *)(param_2 + 0xd8),param_2 + 0x20);
  return;
}



/* ===== 180564431 FUN_180564431 ===== */

void FUN_180564431(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1804eea60(*(undefined8 *)(param_2 + 0x30));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = FUN_1804eecf0(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      __DestructExceptionObject(piVar1,1);
    }
  }
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x78);
  return;
}



/* ===== 1805644c0 FUN_1805644c0 ===== */

void FUN_1805644c0(_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  ExFilterRethrowFH4(param_1,*(EHExceptionRecord **)(param_2 + 0x28),*(int *)(param_2 + 0xf0),
                     (int *)(param_2 + 0x20));
  return;
}



/* ===== 1805644e5 FUN_1805644e5 ===== */

void FUN_1805644e5(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1804eea60(*(undefined8 *)(param_2 + 0x48));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0x28), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = FUN_1804eecf0(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      __DestructExceptionObject(piVar1,1);
    }
  }
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x78);
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x80);
  lVar2 = FUN_1804ef840();
  *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* ===== 180564580 FUN_180564580 ===== */

void FUN_180564580(void)

{
  FUN_1804eed60();
  return;
}



/* ===== 180564596 FUN_180564596 ===== */

void FUN_180564596(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_1804ef840();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}



/* ===== 1805645c0 FUN_1805645c0 ===== */

void FUN_1805645c0(void)

{
  FUN_1804eed60();
  return;
}



/* ===== 1805645d6 FUN_1805645d6 ===== */

void FUN_1805645d6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_1804ef840();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}



/* ===== 1805645f9 FUN_1805645f9 ===== */

void FUN_1805645f9(undefined8 param_1,longlong param_2)

{
  FUN_1805110b0(**(undefined8 **)(param_2 + 0x48));
  return;
}



/* ===== 180564614 FUN_180564614 ===== */

void FUN_180564614(undefined8 param_1,longlong param_2)

{
  FUN_1805110b0(*(undefined8 *)(param_2 + 0x58));
  return;
}



/* ===== 18056462e FUN_18056462e ===== */

void FUN_18056462e(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x98));
  return;
}



/* ===== 18056464b FUN_18056464b ===== */

void FUN_18056464b(undefined8 param_1,longlong param_2)

{
  FUN_1805110b0(*(undefined8 *)(param_2 + 0x40));
  return;
}



/* ===== 180564663 FUN_180564663 ===== */

void FUN_180564663(undefined8 param_1,longlong param_2)

{
  FUN_1805110b0(*(undefined8 *)(param_2 + 0x40));
  return;
}



/* ===== 18056467d FUN_18056467d ===== */

void FUN_18056467d(undefined8 param_1,longlong param_2)

{
  FUN_1805110b0(*(undefined8 *)(param_2 + 0x38));
  return;
}



/* ===== 180564695 FUN_180564695 ===== */

void FUN_180564695(undefined8 param_1,longlong param_2)

{
  FUN_1805110b0(*(undefined8 *)(param_2 + 0x60));
  return;
}



/* ===== 1805646ad FUN_1805646ad ===== */

void FUN_1805646ad(undefined8 *param_1)

{
  FUN_180523dc0(*(undefined4 *)*param_1,param_1);
  return;
}



/* ===== 1805646cb FUN_1805646cb ===== */

void FUN_1805646cb(void)

{
  __acrt_unlock(7);
  return;
}



/* ===== 1805646e4 FUN_1805646e4 ===== */

void FUN_1805646e4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_1805110b0(*(undefined8 *)(param_2 + 0x40));
  return;
}



/* ===== 18056470f FUN_18056470f ===== */

void FUN_18056470f(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x48));
  return;
}



/* ===== 180564729 FUN_180564729 ===== */

undefined4 FUN_180564729(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}



/* ===== 180564756 FUN_180564756 ===== */

void FUN_180564756(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x58));
  return;
}



/* ===== 180564770 FUN_180564770 ===== */

void FUN_180564770(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(longlong *)**(undefined8 **)(param_2 + 0x48) + 0x3a8);
  *puVar1 = *puVar1 & 0xffffffef;
  return;
}



/* ===== 1805647a0 FUN_1805647a0 ===== */

void FUN_1805647a0(void)

{
  __acrt_unlock(0);
  return;
}



/* ===== 1805647b6 FUN_1805647b6 ===== */

void FUN_1805647b6(void)

{
  __acrt_unlock(0);
  return;
}



/* ===== 1805647cc FUN_1805647cc ===== */

void FUN_1805647cc(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(**(undefined4 **)(param_2 + 0x48));
  return;
}



/* ===== 1805647e6 FUN_1805647e6 ===== */

void FUN_1805647e6(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(undefined4 *)(param_2 + 0x60));
  return;
}



/* ===== 1805647fd FUN_1805647fd ===== */

void FUN_1805647fd(void)

{
  __acrt_unlock(8);
  return;
}



/* ===== 180564816 FUN_180564816 ===== */

void FUN_180564816(undefined8 param_1,longlong param_2)

{
  __acrt_lowio_unlock_fh(*(undefined4 *)(param_2 + 0x40));
  return;
}



/* ===== 18056482d FUN_18056482d ===== */

void FUN_18056482d(void)

{
  __acrt_unlock(6);
  return;
}



/* ===== 180564850 FUN_180564850 ===== */

undefined8 FUN_180564850(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined8 **)(param_2 + 0x10) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 8) = iVar1;
  if ((iVar1 == -0x3ffffffb) || (iVar1 == -0x3fffffe3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 18056487d FUN_18056487d ===== */

void FUN_18056487d(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    __acrt_unlock(3);
  }
  return;
}



/* ===== 18056489e FUN_18056489e ===== */

void FUN_18056489e(void)

{
  __acrt_unlock(4);
  return;
}



/* ===== 1805648b7 FUN_1805648b7 ===== */

void FUN_1805648b7(undefined8 param_1,longlong param_2)

{
  __acrt_unlock(**(undefined4 **)(param_2 + 0x68));
  return;
}



/* ===== 1805648d1 FUN_1805648d1 ===== */

void FUN_1805648d1(void)

{
  __acrt_unlock(5);
  return;
}



/* ===== 1805648ea FUN_1805648ea ===== */

void FUN_1805648ea(void)

{
  __acrt_unlock(0xb);
  return;
}



/* ===== 180564903 FUN_180564903 ===== */

void FUN_180564903(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    if (*(int *)(param_2 + 0x44) != 0) {
      puVar1 = *(uint **)(param_2 + 0x80);
      *(byte *)((&DAT_180c9f990)[(longlong)(int)*puVar1 >> 6] + 0x38 +
               (ulonglong)(*puVar1 & 0x3f) * 0x48) =
           *(byte *)((&DAT_180c9f990)[(longlong)(int)*puVar1 >> 6] + 0x38 +
                    (ulonglong)(*puVar1 & 0x3f) * 0x48) & 0xfe;
    }
    __acrt_lowio_unlock_fh(**(undefined4 **)(param_2 + 0x80));
  }
  return;
}



/* ===== 180564980 _ctrlfp$filt$0 ===== */

/* Library Function - Single Match
    _ctrlfp$filt$0
   
   Library: Visual Studio 2005 Release */

undefined8 _ctrlfp_filt_0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)*param_1 == -0x3ffffffb) || (*(int *)*param_1 == -0x3fffffe3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== 1805649b0 FUN_1805649b0 ===== */

bool FUN_1805649b0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



/* ===== 1805649d0 FUN_1805649d0 ===== */

void FUN_1805649d0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ca1c08 == 0) {
    return;
  }
  lVar2 = DAT_180ca1c08;
  if (0xfff < (ulonglong)((DAT_180ca1c18 - DAT_180ca1c08 >> 2) * 4)) {
    lVar2 = *(longlong *)(DAT_180ca1c08 + -8);
    if ((DAT_180ca1c08 - lVar2) - 8U < 0x20) goto LAB_180564a2a;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180564a2a:
  *(undefined8 *)(puVar4 + -8) = 0x180564a32;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ca1c18 = 0;
  DAT_180ca1c10 = 0;
  DAT_180ca1c08 = 0;
  return;
}



/* ===== 180564a50 FUN_180564a50 ===== */

void FUN_180564a50(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ca1bf0 == 0) {
    return;
  }
  lVar2 = DAT_180ca1bf0;
  if (0xfff < (DAT_180ca1c00 - DAT_180ca1bf0 & 0xffffffffffffff80U)) {
    lVar2 = *(longlong *)(DAT_180ca1bf0 + -8);
    if ((DAT_180ca1bf0 - lVar2) - 8U < 0x20) goto LAB_180564a98;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180564a98:
  *(undefined8 *)(puVar4 + -8) = 0x180564a9d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ca1c00 = 0;
  DAT_180ca1bf8 = 0;
  DAT_180ca1bf0 = 0;
  return;
}



/* ===== 180564ac0 FUN_180564ac0 ===== */

void FUN_180564ac0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ca39f8 == 0) {
    return;
  }
  lVar2 = DAT_180ca39f8;
  if (0xfff < (ulonglong)((DAT_180ca3a08 - DAT_180ca39f8 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180ca39f8 + -8);
    if ((DAT_180ca39f8 - lVar2) - 8U < 0x20) goto LAB_180564b1a;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180564b1a:
  *(undefined8 *)(puVar4 + -8) = 0x180564b22;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ca3a08 = 0;
  DAT_180ca3a00 = 0;
  DAT_180ca39f8 = 0;
  return;
}



/* ===== 180564b40 FUN_180564b40 ===== */

void FUN_180564b40(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ca39e0 == 0) {
    return;
  }
  lVar2 = DAT_180ca39e0;
  if (0xfff < (DAT_180ca39f0 - DAT_180ca39e0 & 0xfffffffffffffff0U)) {
    lVar2 = *(longlong *)(DAT_180ca39e0 + -8);
    if ((DAT_180ca39e0 - lVar2) - 8U < 0x20) goto LAB_180564b88;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180564b88:
  *(undefined8 *)(puVar4 + -8) = 0x180564b8d;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ca39f0 = 0;
  DAT_180ca39e8 = 0;
  DAT_180ca39e0 = 0;
  return;
}



/* ===== 180564bc0 FUN_180564bc0 ===== */

void FUN_180564bc0(void)

{
  FUN_1800132b0(&DAT_180ca0bf8);
  FUN_180023a80(&DAT_180ca0be8);
  return;
}



/* ===== 180564c50 FUN_180564c50 ===== */

void FUN_180564c50(void)

{
  FUN_180023ca0(&DAT_180cc3fb8);
  FUN_1800241c0(&DAT_180cc3fa8);
  return;
}



/* ===== 180564c70 FUN_180564c70 ===== */

void FUN_180564c70(void)

{
  FUN_180023ca0(&DAT_180cc3f18);
  FUN_180023fa0(&DAT_180cc3f08);
  return;
}



/* ===== 180564c90 FUN_180564c90 ===== */

void FUN_180564c90(void)

{
  FUN_180023ca0(&DAT_180cc40b8);
  FUN_180023fa0(&DAT_180cc40a8);
  return;
}



/* ===== 180564cb0 FUN_180564cb0 ===== */

void FUN_180564cb0(void)

{
  FUN_180023ca0(&DAT_180cc3ed8);
  FUN_1800240b0(&DAT_180cc3ec8);
  return;
}



/* ===== 180564cd0 FUN_180564cd0 ===== */

void FUN_180564cd0(void)

{
  FUN_180023ca0(&DAT_180cc3f58);
  FUN_180023d10(&DAT_180cc3f48);
  return;
}



/* ===== 180564cf0 FUN_180564cf0 ===== */

void FUN_180564cf0(void)

{
  FUN_180023ca0(&DAT_180cc3ff8);
  FUN_180023fa0(&DAT_180cc3fe8);
  return;
}



/* ===== 180564d10 FUN_180564d10 ===== */

void FUN_180564d10(void)

{
  FUN_1800132b0(&DAT_180ca0a78);
  FUN_180023a80(&DAT_180ca0a68);
  return;
}



/* ===== 180564d40 FUN_180564d40 ===== */

void FUN_180564d40(void)

{
  FUN_1800132b0(&DAT_180ca0ab8);
  FUN_180023e20(&DAT_180ca0aa8);
  return;
}



/* ===== 180564d60 FUN_180564d60 ===== */

void FUN_180564d60(void)

{
  FUN_1800132b0(&DAT_180ca0b78);
  FUN_180023e20(&DAT_180ca0b68);
  return;
}



/* ===== 180564d80 FUN_180564d80 ===== */

void FUN_180564d80(void)

{
  FUN_1800132b0(&DAT_180ca0af8);
  FUN_180023e20(&DAT_180ca0ae8);
  return;
}



/* ===== 180564dc0 FUN_180564dc0 ===== */

void FUN_180564dc0(void)

{
  FUN_180023ca0(&DAT_180cc3e98);
  FUN_180023d10(&DAT_180cc3e88);
  return;
}



/* ===== 180564de0 FUN_180564de0 ===== */

void FUN_180564de0(void)

{
  FUN_1800132b0(&DAT_180ca0bb8);
  FUN_180023a80(&DAT_180ca0ba8);
  return;
}



/* ===== 180564e00 FUN_180564e00 ===== */

void FUN_180564e00(void)

{
  FUN_1800132b0(&DAT_180ca0b38);
  FUN_180023a80(&DAT_180ca0b28);
  return;
}



/* ===== 180564e20 FUN_180564e20 ===== */

void FUN_180564e20(void)

{
  FUN_180023ca0(&DAT_180ca0c38);
  FUN_1800332b0(&DAT_180ca0c28);
  return;
}



/* ===== 180564e40 FUN_180564e40 ===== */

void FUN_180564e40(void)

{
  FUN_180023ca0(&DAT_180ca0c78);
  FUN_1800332b0(&DAT_180ca0c68);
  return;
}



/* ===== 180564e70 FUN_180564e70 ===== */

void FUN_180564e70(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180cc4c60 == 0) {
    return;
  }
  lVar2 = DAT_180cc4c60;
  if (0xfff < (DAT_180cc4c70 - DAT_180cc4c60 & 0xffffffffffffffc0U)) {
    lVar2 = *(longlong *)(DAT_180cc4c60 + -8);
    if ((DAT_180cc4c60 - lVar2) - 8U < 0x20) goto LAB_180564eb8;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180564eb8:
  *(undefined8 *)(puVar4 + -8) = 0x180564ebd;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180cc4c70 = 0;
  DAT_180cc4c68 = 0;
  DAT_180cc4c60 = 0;
  return;
}



/* ===== 180564ee0 FUN_180564ee0 ===== */

void FUN_180564ee0(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ccf740 == 0) {
    return;
  }
  lVar2 = DAT_180ccf740;
  if (0xfff < (ulonglong)((DAT_180ccf750 - DAT_180ccf740 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180ccf740 + -8);
    if ((DAT_180ccf740 - lVar2) - 8U < 0x20) goto LAB_180564f3a;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180564f3a:
  *(undefined8 *)(puVar4 + -8) = 0x180564f42;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ccf750 = 0;
  DAT_180ccf748 = 0;
  DAT_180ccf740 = 0;
  return;
}



/* ===== 180564f60 FUN_180564f60 ===== */

void FUN_180564f60(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  puVar4 = auStack_28;
  if (DAT_180ccf6e8 == 0) {
    return;
  }
  lVar2 = DAT_180ccf6e8;
  if (0xfff < (ulonglong)((DAT_180ccf6f8 - DAT_180ccf6e8 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180ccf6e8 + -8);
    if ((DAT_180ccf6e8 - lVar2) - 8U < 0x20) goto LAB_180564fc2;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180564fc2:
  *(undefined8 *)(puVar4 + -8) = 0x180564fca;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ccf6f8 = 0;
  DAT_180ccf6f0 = 0;
  DAT_180ccf6e8 = 0;
  return;
}



/* ===== 180564ff0 FUN_180564ff0 ===== */

void FUN_180564ff0(void)

{
  FUN_180023ca0(&DAT_180ccf718);
  FUN_1800429f0(&DAT_180ccf708);
  return;
}



/* ===== 180565010 FUN_180565010 ===== */

void FUN_180565010(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180ccf5f0;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180ccf5e8;
  if (DAT_180ccf5e8 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x20) {
    FUN_180043290(uVar2 + 8);
  }
  uVar2 = DAT_180ccf5e8;
  if (0xfff < (DAT_180ccf5f8 - DAT_180ccf5e8 & 0xffffffffffffffe0)) {
    uVar2 = *(ulonglong *)(DAT_180ccf5e8 - 8);
    uVar3 = (DAT_180ccf5e8 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_18056508d;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_18056508d:
  *(undefined8 *)(puVar5 + -8) = 0x180565092;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180ccf5f8 = 0;
  DAT_180ccf5f0 = 0;
  DAT_180ccf5e8 = 0;
  return;
}



/* ===== 1805650b0 FUN_1805650b0 ===== */

void FUN_1805650b0(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180ccfa00;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180ccf9f8;
  if (DAT_180ccf9f8 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0xe0) {
    FUN_1800589f0(uVar2);
  }
  uVar2 = DAT_180ccf9f8;
  if (0xfff < (ulonglong)(((longlong)(DAT_180ccfa08 - DAT_180ccf9f8) >> 5) * 0x20)) {
    uVar2 = *(ulonglong *)(DAT_180ccf9f8 - 8);
    uVar3 = (DAT_180ccf9f8 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180565144;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180565144:
  *(undefined8 *)(puVar5 + -8) = 0x180565149;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180ccfa08 = 0;
  DAT_180ccfa00 = 0;
  DAT_180ccf9f8 = 0;
  return;
}



/* ===== 180565170 FUN_180565170 ===== */

void FUN_180565170(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180ccf9e8;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180ccf9e0;
  if (DAT_180ccf9e0 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x28) {
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_180ccf9e0;
  if (0xfff < (ulonglong)(((longlong)(DAT_180ccf9f0 - DAT_180ccf9e0) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180ccf9e0 - 8);
    uVar3 = (DAT_180ccf9e0 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_180565210;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_180565210:
  *(undefined8 *)(puVar5 + -8) = 0x180565215;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180ccf9f0 = 0;
  DAT_180ccf9e8 = 0;
  DAT_180ccf9e0 = 0;
  return;
}



/* ===== 180565240 FUN_180565240 ===== */

void FUN_180565240(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar4 = DAT_180ccfa98;
  puVar5 = auStack_28;
  puVar6 = auStack_28;
  plVar3 = DAT_180ccfa90;
  if (DAT_180ccfa90 == (longlong *)0x0) {
    return;
  }
  for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      FUN_1800769f0(lVar1);
      thunk_FUN_1803d64e0(lVar1,0x1c8);
    }
  }
  plVar3 = DAT_180ccfa90;
  if (0xfff < (ulonglong)((DAT_180ccfaa0 - (longlong)DAT_180ccfa90 >> 3) * 8)) {
    plVar3 = (longlong *)DAT_180ccfa90[-1];
    plVar4 = (longlong *)((longlong)DAT_180ccfa90 + (-8 - (longlong)plVar3));
    if (plVar4 <= &DAT_0000001f) goto LAB_1805652e7;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar5 = auStack_20;
    plVar3 = plVar4;
  }
  puVar6 = puVar5;
LAB_1805652e7:
  *(undefined8 *)(puVar6 + -8) = 0x1805652ec;
  thunk_FUN_1803d64e0(plVar3);
  DAT_180ccfaa0 = 0;
  DAT_180ccfa98 = (longlong *)0x0;
  DAT_180ccfa90 = (longlong *)0x0;
  return;
}



/* ===== 180565310 FUN_180565310 ===== */

void FUN_180565310(void)

{
  FUN_180076260(&DAT_180ca0ca0,&DAT_180ca0ca0,*(undefined8 *)(DAT_180ca0ca0 + 8));
  thunk_FUN_1803d64e0(DAT_180ca0ca0,0x88);
  return;
}



/* ===== 180565350 FUN_180565350 ===== */

void FUN_180565350(void)

{
  FUN_1804eced0(&DAT_180962e00,0x20,0x30,thunk_FUN_18000f890);
  return;
}



/* ===== 180565370 FUN_180565370 ===== */

void FUN_180565370(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180ccfab0;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180ccfaa8;
  if (DAT_180ccfaa8 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x30) {
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_180ccfaa8;
  if (0xfff < (ulonglong)(((longlong)(DAT_180ccfab8 - DAT_180ccfaa8) >> 4) << 4)) {
    uVar2 = *(ulonglong *)(DAT_180ccfaa8 - 8);
    uVar3 = (DAT_180ccfaa8 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_18056540c;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_18056540c:
  *(undefined8 *)(puVar5 + -8) = 0x180565411;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180ccfab8 = 0;
  DAT_180ccfab0 = 0;
  DAT_180ccfaa8 = 0;
  return;
}



/* ===== 180565450 FUN_180565450 ===== */

void FUN_180565450(void)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  uVar3 = DAT_180ccfac8;
  puVar4 = auStack_28;
  puVar5 = auStack_28;
  uVar2 = DAT_180ccfac0;
  if (DAT_180ccfac0 == 0) {
    return;
  }
  for (; uVar2 != uVar3; uVar2 = uVar2 + 0x28) {
    FUN_18000f890(uVar2);
  }
  uVar2 = DAT_180ccfac0;
  if (0xfff < (ulonglong)(((longlong)(DAT_180ccfad0 - DAT_180ccfac0) >> 3) * 8)) {
    uVar2 = *(ulonglong *)(DAT_180ccfac0 - 8);
    uVar3 = (DAT_180ccfac0 - uVar2) - 8;
    if (uVar3 < 0x20) goto LAB_1805654f0;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_20;
    uVar2 = uVar3;
  }
  puVar5 = puVar4;
LAB_1805654f0:
  *(undefined8 *)(puVar5 + -8) = 0x1805654f5;
  thunk_FUN_1803d64e0(uVar2);
  DAT_180ccfad0 = 0;
  DAT_180ccfac8 = 0;
  DAT_180ccfac0 = 0;
  return;
}



/* ===== 180565520 FUN_180565520 ===== */

void FUN_180565520(void)

{
  FUN_18000f890(&DAT_180963400);
  return;
}



/* ===== 180565540 FUN_180565540 ===== */

void FUN_180565540(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (DAT_180ca0cd0 != 0) {
    do {
      FUN_18000f890();
      DAT_180ca0cd0 = DAT_180ca0cd0 + -1;
    } while (DAT_180ca0cd0 != 0);
    DAT_180ca0cc8 = 0;
    DAT_180ca0cd0 = 0;
  }
  lVar3 = DAT_180ca0cb8;
  lVar6 = DAT_180ca0cc0;
  if (DAT_180ca0cb8 != 0) {
    while (0 < lVar6) {
      lVar1 = *(longlong *)(lVar3 + -8 + lVar6 * 8);
      lVar6 = lVar6 + -1;
      if (lVar1 != 0) {
        thunk_FUN_1803d64e0(lVar1,0x38);
        lVar3 = DAT_180ca0cb8;
      }
    }
    uVar5 = DAT_180ca0cc0 * 8;
    lVar6 = lVar3;
    if (0xfff < uVar5) {
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_1803d64e0(lVar6,uVar5);
    DAT_180ca0cb8 = 0;
    DAT_180ca0cc0 = 0;
  }
  uVar4 = DAT_180ca0cb0;
  DAT_180ca0cb0 = 0;
  thunk_FUN_1803d64e0(uVar4,0x10);
  return;
}



/* ===== 180565660 FUN_180565660 ===== */

void FUN_180565660(void)

{
  FUN_1800132b0(&DAT_180ca0cf8);
  FUN_180023a80(&DAT_180ca0ce8);
  return;
}



/* ===== 180565720 FUN_180565720 ===== */

void FUN_180565720(void)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  if (DAT_180ccfae8 == 0) {
    return;
  }
  FUN_180081a30(DAT_180ccfae8,DAT_180ccfaf0);
  puVar4 = auStack_28;
  lVar2 = DAT_180ccfae8;
  puVar3 = auStack_28;
  if (0xfff < (ulonglong)((DAT_180ccfaf8 - DAT_180ccfae8 >> 3) * 8)) {
    lVar2 = *(longlong *)(DAT_180ccfae8 + -8);
    if ((DAT_180ccfae8 - lVar2) - 8U < 0x20) goto LAB_180565783;
    lVar2 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  puVar4 = puVar3;
LAB_180565783:
  *(undefined8 *)(puVar4 + -8) = 0x18056578b;
  thunk_FUN_1803d64e0(lVar2);
  DAT_180ccfaf8 = 0;
  DAT_180ccfaf0 = 0;
  DAT_180ccfae8 = 0;
  return;
}



/* ===== 1805657b0 FUN_1805657b0 ===== */

void FUN_1805657b0(void)

{
  FUN_1800819d0(&DAT_180ca0d40,&DAT_180ca0d40,*(undefined8 *)(DAT_180ca0d40 + 8));
  thunk_FUN_1803d64e0(DAT_180ca0d40,0x40);
  return;
}



