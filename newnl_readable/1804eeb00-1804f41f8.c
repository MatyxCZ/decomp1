/* ===== 1804eeb00 FUN_1804eeb00 ===== */

void FUN_1804eeb00(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  return;
}



/* ===== 1804eeb20 FUN_1804eeb20 ===== */

void FUN_1804eeb20(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  return;
}



/* ===== 1804eeb40 FUN_1804eeb40 ===== */

void FUN_1804eeb40(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_res8[0] = param_2;
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_1804ef840();
  FUN_1804f1c50(param_1,local_res8,param_3,param_4,
                (ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60),0,0,0);
  return;
}



/* ===== 1804eebc0 FUN_1804eebc0 ===== */

void FUN_1804eebc0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffffa8;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  uVar1 = *(undefined8 *)(param_4 + 8);
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_38[0] = 0;
  local_res8 = param_2;
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = FUN_1804ef840();
  *(undefined8 *)(lVar2 + 0x68) = uVar1;
  lVar2 = FUN_1804ef840();
  FUN_1804edea0((ulonglong)**(uint **)(param_4 + 0x38) + *(longlong *)(lVar2 + 0x60),local_38,
                *(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10),
                in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  FUN_1804f1c60(param_1,&local_res8,param_3,param_4,local_38,0,0,0);
  return;
}



/* ===== 1804eec80 __DestructExceptionObject ===== */

/* Library Function - Single Match
    __DestructExceptionObject
   
   Library: Visual Studio 2019 Release */

void __DestructExceptionObject(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (**(longlong **)(param_1 + 10) != 0)) {
        (*(code *)PTR__guard_dispatch_icall_18056b850)();
      }
    }
    else {
      FUN_1804ebe60(*(undefined8 *)(param_1 + 10),
                    (longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe));
    }
  }
  return;
}



/* ===== 1804eecf0 FUN_1804eecf0 ===== */

undefined8 FUN_1804eecf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1804ef840();
  plVar1 = *(longlong **)(lVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}



/* ===== 1804eed30 FUN_1804eed30 ===== */

longlong FUN_1804eed30(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (iVar1 < 0) {
    return *param_2 + param_1;
  }
  return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) + (longlong)iVar1
         + *param_2 + param_1;
}



/* ===== 1804eed60 FUN_1804eed60 ===== */

undefined8 FUN_1804eed60(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    lVar4 = FUN_1804ef840();
    if (0 < *(int *)(lVar4 + 0x30)) {
      lVar4 = FUN_1804ef840();
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    lVar4 = FUN_1804ef840();
    *(int **)(lVar4 + 0x20) = piVar2;
    uVar3 = param_1[1];
    lVar4 = FUN_1804ef840();
    *(undefined8 *)(lVar4 + 0x28) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_180515f70();
  }
  return 0;
}



/* ===== 1804eedd0 FUN_1804eedd0 ===== */

longlong FUN_1804eedd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  return lVar1 + 0x20;
}



/* ===== 1804eedf0 FUN_1804eedf0 ===== */

longlong FUN_1804eedf0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef840();
  return lVar1 + 0x28;
}



/* ===== 1804eee10 Unwind@1804eee10 ===== */

void Unwind_1804eee10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_180515f70();
}



/* ===== 1804eee20 FUN_1804eee20 ===== */

undefined8
FUN_1804eee20(PEXCEPTION_RECORD param_1,PVOID param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_58;
  undefined8 local_50;
  
  __except_validate_context_record(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar1;
  uVar9 = *(uint *)(param_4 + 9);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVar9 < *puVar2) {
      do {
        if (((puVar2[(ulonglong)uVar9 * 4 + 1] <= uVar11) &&
            (uVar11 < puVar2[(ulonglong)uVar9 * 4 + 2])) && (puVar2[(ulonglong)uVar9 * 4 + 4] != 0))
        {
          if (puVar2[(ulonglong)uVar9 * 4 + 3] != 1) {
            iVar3 = (*(code *)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 3] + lVar1))
                              (&local_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_1804eef3b;
          }
          if (((param_1->ExceptionCode == 0xe06d7363) &&
              (PTR___DestructExceptionObject_180575bf8 != (undefined *)0x0)) &&
             (iVar3 = FUN_18053e680(&PTR___DestructExceptionObject_180575bf8), iVar3 != 0)) {
            (*(code *)PTR___DestructExceptionObject_180575bf8)(param_1,1);
          }
          FUN_1804f2ff0((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 4] + lVar1,param_2,1);
          RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 4] + lVar1),param_1,
                      (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                      (PUNWIND_HISTORY_TABLE)param_4[8]);
          FUN_1804f3020();
        }
LAB_1804eef3b:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar2);
    }
  }
  else {
    uVar10 = *puVar2;
    if (uVar9 < uVar10) {
      uVar7 = param_4[4] - lVar1;
      do {
        uVar4 = (ulonglong)uVar9;
        if ((puVar2[uVar4 * 4 + 1] <= uVar11) && (uVar11 < puVar2[uVar4 * 4 + 2])) {
          uVar8 = param_1->ExceptionFlags & 0x20;
          if (uVar8 != 0) {
            uVar6 = 0;
            if (uVar10 != 0) {
              do {
                if ((((puVar2[uVar6 * 4 + 1] <= uVar7) && (uVar7 < puVar2[uVar6 * 4 + 2])) &&
                    (puVar2[uVar6 * 4 + 4] == puVar2[uVar4 * 4 + 4])) &&
                   (puVar2[uVar6 * 4 + 3] == puVar2[uVar4 * 4 + 3])) break;
                uVar5 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar5;
              } while (uVar5 < uVar10);
            }
            if ((uint)uVar6 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar4 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVar9 + 1;
            (*(code *)((ulonglong)puVar2[uVar4 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar7 == puVar2[uVar4 * 4 + 4]) && (uVar8 != 0)) {
            return 1;
          }
        }
        uVar10 = *puVar2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return 1;
}



/* ===== 1804ef040 FUN_1804ef040 ===== */

void FUN_1804ef040(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  lVar2 = -1;
  do {
    lVar1 = lVar2;
    lVar2 = lVar1 + 1;
  } while (*(char *)(*param_1 + 1 + lVar1) != '\0');
  lVar2 = _malloc_base(lVar1 + 2);
  if (lVar2 != 0) {
    FUN_180526580(lVar2,lVar1 + 2,*param_1);
    *param_2 = lVar2;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  thunk_FUN_1805277b0(0);
  return;
}



/* ===== 1804ef0e0 FUN_1804ef0e0 ===== */

void FUN_1804ef0e0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  thunk_FUN_1805277b0(*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



/* ===== 1804ef120 FUN_1804ef120 ===== */

undefined1 (*) [16] FUN_1804ef120(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  
  bVar1 = (*param_2)[0];
  if (bVar1 == 0) {
    return param_1;
  }
  if (1 < DAT_1809194c8) {
    if (((uint)param_2 & 0xfff) < 0xff1) {
      auVar10 = *param_2;
    }
    else {
      auVar10 = ZEXT816(0);
      iVar7 = 4;
      pauVar4 = param_2;
      bVar6 = bVar1;
      do {
        auVar14._0_8_ = auVar10._1_8_;
        uVar5 = auVar10._8_8_ >> 8 | (ulonglong)bVar6 << 0x38;
        auVar14._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar15._0_8_ = auVar14._1_8_;
        uVar5 = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        auVar15._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar16._0_8_ = auVar15._1_8_;
        uVar5 = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        auVar16._8_8_ = uVar5;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        auVar10._0_8_ = auVar16._1_8_;
        auVar10._8_8_ = uVar5 >> 8 | (ulonglong)bVar6 << 0x38;
        if (bVar6 != 0) {
          bVar6 = (*(undefined1 (*) [16])(*pauVar4 + 1))[0];
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    do {
      while( true ) {
        uVar3 = (uint)param_1 & 0xfff;
        if (uVar3 < 0xff1) break;
        if ((*param_1)[0] == 0) {
          return (undefined1 (*) [16])0x0;
        }
        if ((*param_1)[0] == bVar1) goto LAB_1804ef365;
LAB_1804ef3be:
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
      }
      pcmpistri(auVar10,*param_1,0xc);
      if (uVar3 < 0xff1) {
        if (0xfef < uVar3) {
          return (undefined1 (*) [16])0x0;
        }
        iVar7 = pcmpistri(auVar10,*param_1,0xc);
        param_1 = (undefined1 (*) [16])(*param_1 + iVar7);
LAB_1804ef365:
        pauVar4 = param_1;
        pauVar8 = param_2;
LAB_1804ef370:
        do {
          if (((uint)pauVar4 & 0xfff) < 0xff1) {
            uVar5 = (ulonglong)((uint)pauVar8 & 0xfff);
            if (uVar5 < 0xff1) {
              pcmpistri(*pauVar8,*pauVar4,0xc);
              if (SBORROW8(uVar5,0xff0)) {
                if ((longlong)(uVar5 - 0xff0) < 0) {
                  return param_1;
                }
                pauVar4 = pauVar4 + 1;
                pauVar8 = pauVar8 + 1;
                goto LAB_1804ef370;
              }
              goto LAB_1804ef3be;
            }
          }
          if ((*pauVar8)[0] == '\0') {
            return param_1;
          }
          if ((*pauVar4)[0] != (*pauVar8)[0]) goto LAB_1804ef3be;
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        } while( true );
      }
      param_1 = param_1 + 1;
    } while( true );
  }
  auVar10 = pshuflw(in_XMM1,ZEXT216(CONCAT11(bVar1,bVar1)),0);
LAB_1804ef170:
  do {
    if (((uint)param_1 & 0xfff) < 0xff1) {
      cVar17 = auVar10[0];
      auVar9[0] = -((*param_1)[0] == cVar17);
      cVar18 = auVar10[1];
      auVar9[1] = -((*param_1)[1] == cVar18);
      cVar19 = auVar10[2];
      auVar9[2] = -((*param_1)[2] == cVar19);
      cVar20 = auVar10[3];
      auVar9[3] = -((*param_1)[3] == cVar20);
      auVar9[4] = -((*param_1)[4] == cVar17);
      auVar9[5] = -((*param_1)[5] == cVar18);
      auVar9[6] = -((*param_1)[6] == cVar19);
      auVar9[7] = -((*param_1)[7] == cVar20);
      auVar9[8] = -((*param_1)[8] == cVar17);
      auVar9[9] = -((*param_1)[9] == cVar18);
      auVar9[10] = -((*param_1)[10] == cVar19);
      auVar9[0xb] = -((*param_1)[0xb] == cVar20);
      auVar9[0xc] = -((*param_1)[0xc] == cVar17);
      auVar9[0xd] = -((*param_1)[0xd] == cVar18);
      auVar9[0xe] = -((*param_1)[0xe] == cVar19);
      auVar9[0xf] = -((*param_1)[0xf] == cVar20);
      auVar11[0] = -((*param_1)[0] == '\0');
      auVar11[1] = -((*param_1)[1] == '\0');
      auVar11[2] = -((*param_1)[2] == '\0');
      auVar11[3] = -((*param_1)[3] == '\0');
      auVar11[4] = -((*param_1)[4] == '\0');
      auVar11[5] = -((*param_1)[5] == '\0');
      auVar11[6] = -((*param_1)[6] == '\0');
      auVar11[7] = -((*param_1)[7] == '\0');
      auVar11[8] = -((*param_1)[8] == '\0');
      auVar11[9] = -((*param_1)[9] == '\0');
      auVar11[10] = -((*param_1)[10] == '\0');
      auVar11[0xb] = -((*param_1)[0xb] == '\0');
      auVar11[0xc] = -((*param_1)[0xc] == '\0');
      auVar11[0xd] = -((*param_1)[0xd] == '\0');
      auVar11[0xe] = -((*param_1)[0xe] == '\0');
      auVar11[0xf] = -((*param_1)[0xf] == '\0');
      auVar11 = auVar11 | auVar9;
      uVar2 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar11[0xf] >> 7) << 0xf;
      if (uVar2 == 0) {
        param_1 = param_1 + 1;
        goto LAB_1804ef170;
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      param_1 = (undefined1 (*) [16])(*param_1 + uVar3);
    }
    if ((*param_1)[0] == 0) {
      return (undefined1 (*) [16])0x0;
    }
    if (bVar1 == (*param_1)[0]) {
      pauVar4 = param_2;
      pauVar8 = param_1;
LAB_1804ef1c0:
      for (; (((uint)pauVar4 & 0xfff) < 0xff1 && (((uint)pauVar8 & 0xfff) < 0xff1));
          pauVar8 = pauVar8 + 1) {
        auVar12[0] = -((*pauVar4)[0] == '\0');
        auVar12[1] = -((*pauVar4)[1] == '\0');
        auVar12[2] = -((*pauVar4)[2] == '\0');
        auVar12[3] = -((*pauVar4)[3] == '\0');
        auVar12[4] = -((*pauVar4)[4] == '\0');
        auVar12[5] = -((*pauVar4)[5] == '\0');
        auVar12[6] = -((*pauVar4)[6] == '\0');
        auVar12[7] = -((*pauVar4)[7] == '\0');
        auVar12[8] = -((*pauVar4)[8] == '\0');
        auVar12[9] = -((*pauVar4)[9] == '\0');
        auVar12[10] = -((*pauVar4)[10] == '\0');
        auVar12[0xb] = -((*pauVar4)[0xb] == '\0');
        auVar12[0xc] = -((*pauVar4)[0xc] == '\0');
        auVar12[0xd] = -((*pauVar4)[0xd] == '\0');
        auVar12[0xe] = -((*pauVar4)[0xe] == '\0');
        auVar12[0xf] = -((*pauVar4)[0xf] == '\0');
        auVar13[0] = -((*pauVar4)[0] != (*pauVar8)[0]);
        auVar13[1] = -((*pauVar4)[1] != (*pauVar8)[1]);
        auVar13[2] = -((*pauVar4)[2] != (*pauVar8)[2]);
        auVar13[3] = -((*pauVar4)[3] != (*pauVar8)[3]);
        auVar13[4] = -((*pauVar4)[4] != (*pauVar8)[4]);
        auVar13[5] = -((*pauVar4)[5] != (*pauVar8)[5]);
        auVar13[6] = -((*pauVar4)[6] != (*pauVar8)[6]);
        auVar13[7] = -((*pauVar4)[7] != (*pauVar8)[7]);
        auVar13[8] = -((*pauVar4)[8] != (*pauVar8)[8]);
        auVar13[9] = -((*pauVar4)[9] != (*pauVar8)[9]);
        auVar13[10] = -((*pauVar4)[10] != (*pauVar8)[10]);
        auVar13[0xb] = -((*pauVar4)[0xb] != (*pauVar8)[0xb]);
        auVar13[0xc] = -((*pauVar4)[0xc] != (*pauVar8)[0xc]);
        auVar13[0xd] = -((*pauVar4)[0xd] != (*pauVar8)[0xd]);
        auVar13[0xe] = -((*pauVar4)[0xe] != (*pauVar8)[0xe]);
        auVar13[0xf] = -((*pauVar4)[0xf] != (*pauVar8)[0xf]);
        auVar13 = auVar13 | auVar12;
        uVar2 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf;
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + uVar3);
          pauVar4 = (undefined1 (*) [16])(*pauVar4 + uVar3);
          break;
        }
        pauVar4 = pauVar4 + 1;
      }
      if ((*pauVar4)[0] == '\0') {
        return param_1;
      }
      if ((*pauVar8)[0] == (*pauVar4)[0]) {
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
        pauVar4 = (undefined1 (*) [16])(*pauVar4 + 1);
        goto LAB_1804ef1c0;
      }
    }
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
  } while( true );
}



/* ===== 1804ef3f0 FUN_1804ef3f0 ===== */

undefined8 FUN_1804ef3f0(void)

{
  return DAT_180c9f510;
}



/* ===== 1804ef400 FUN_1804ef400 ===== */

void FUN_1804ef400(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef3f0();
  if (lVar1 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18056b850)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804ef420 FUN_1804ef420 ===== */

char * FUN_1804ef420(ulonglong param_1,char param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  
  pcVar17 = (char *)(param_1 & 0xfffffffffffffff0);
  auVar21 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
  auVar23[0] = -(*pcVar17 == '\0');
  auVar23[1] = -(pcVar17[1] == '\0');
  auVar23[2] = -(pcVar17[2] == '\0');
  auVar23[3] = -(pcVar17[3] == '\0');
  auVar23[4] = -(pcVar17[4] == '\0');
  auVar23[5] = -(pcVar17[5] == '\0');
  auVar23[6] = -(pcVar17[6] == '\0');
  auVar23[7] = -(pcVar17[7] == '\0');
  auVar23[8] = -(pcVar17[8] == '\0');
  auVar23[9] = -(pcVar17[9] == '\0');
  auVar23[10] = -(pcVar17[10] == '\0');
  auVar23[0xb] = -(pcVar17[0xb] == '\0');
  auVar23[0xc] = -(pcVar17[0xc] == '\0');
  auVar23[0xd] = -(pcVar17[0xd] == '\0');
  auVar23[0xe] = -(pcVar17[0xe] == '\0');
  auVar23[0xf] = -(pcVar17[0xf] == '\0');
  cVar24 = auVar21[0];
  auVar20[0] = -(*pcVar17 == cVar24);
  cVar25 = auVar21[1];
  auVar20[1] = -(pcVar17[1] == cVar25);
  cVar26 = auVar21[2];
  auVar20[2] = -(pcVar17[2] == cVar26);
  cVar27 = auVar21[3];
  auVar20[3] = -(pcVar17[3] == cVar27);
  auVar20[4] = -(pcVar17[4] == cVar24);
  auVar20[5] = -(pcVar17[5] == cVar25);
  auVar20[6] = -(pcVar17[6] == cVar26);
  auVar20[7] = -(pcVar17[7] == cVar27);
  auVar20[8] = -(pcVar17[8] == cVar24);
  auVar20[9] = -(pcVar17[9] == cVar25);
  auVar20[10] = -(pcVar17[10] == cVar26);
  auVar20[0xb] = -(pcVar17[0xb] == cVar27);
  auVar20[0xc] = -(pcVar17[0xc] == cVar24);
  auVar20[0xd] = -(pcVar17[0xd] == cVar25);
  auVar20[0xe] = -(pcVar17[0xe] == cVar26);
  auVar20[0xf] = -(pcVar17[0xf] == cVar27);
  auVar20 = auVar20 | auVar23;
  uVar19 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
  while (uVar19 == 0) {
    pcVar18 = pcVar17 + 0x10;
    pcVar2 = pcVar17 + 0x11;
    pcVar3 = pcVar17 + 0x12;
    pcVar4 = pcVar17 + 0x13;
    pcVar5 = pcVar17 + 0x14;
    pcVar6 = pcVar17 + 0x15;
    pcVar7 = pcVar17 + 0x16;
    pcVar8 = pcVar17 + 0x17;
    pcVar9 = pcVar17 + 0x18;
    pcVar10 = pcVar17 + 0x19;
    pcVar11 = pcVar17 + 0x1a;
    pcVar12 = pcVar17 + 0x1b;
    pcVar13 = pcVar17 + 0x1c;
    pcVar14 = pcVar17 + 0x1d;
    pcVar15 = pcVar17 + 0x1e;
    pcVar16 = pcVar17 + 0x1f;
    pcVar17 = pcVar17 + 0x10;
    auVar21[0] = -(*pcVar18 == '\0');
    auVar21[1] = -(*pcVar2 == '\0');
    auVar21[2] = -(*pcVar3 == '\0');
    auVar21[3] = -(*pcVar4 == '\0');
    auVar21[4] = -(*pcVar5 == '\0');
    auVar21[5] = -(*pcVar6 == '\0');
    auVar21[6] = -(*pcVar7 == '\0');
    auVar21[7] = -(*pcVar8 == '\0');
    auVar21[8] = -(*pcVar9 == '\0');
    auVar21[9] = -(*pcVar10 == '\0');
    auVar21[10] = -(*pcVar11 == '\0');
    auVar21[0xb] = -(*pcVar12 == '\0');
    auVar21[0xc] = -(*pcVar13 == '\0');
    auVar21[0xd] = -(*pcVar14 == '\0');
    auVar21[0xe] = -(*pcVar15 == '\0');
    auVar21[0xf] = -(*pcVar16 == '\0');
    auVar22[0] = -(*pcVar18 == cVar24);
    auVar22[1] = -(*pcVar2 == cVar25);
    auVar22[2] = -(*pcVar3 == cVar26);
    auVar22[3] = -(*pcVar4 == cVar27);
    auVar22[4] = -(*pcVar5 == cVar24);
    auVar22[5] = -(*pcVar6 == cVar25);
    auVar22[6] = -(*pcVar7 == cVar26);
    auVar22[7] = -(*pcVar8 == cVar27);
    auVar22[8] = -(*pcVar9 == cVar24);
    auVar22[9] = -(*pcVar10 == cVar25);
    auVar22[10] = -(*pcVar11 == cVar26);
    auVar22[0xb] = -(*pcVar12 == cVar27);
    auVar22[0xc] = -(*pcVar13 == cVar24);
    auVar22[0xd] = -(*pcVar14 == cVar25);
    auVar22[0xe] = -(*pcVar15 == cVar26);
    auVar22[0xf] = -(*pcVar16 == cVar27);
    auVar22 = auVar22 | auVar21;
    uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
  }
  uVar1 = 0;
  if (uVar19 != 0) {
    for (; (uVar19 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar18 = (char *)0x0;
  if (pcVar17[uVar1] == param_2) {
    pcVar18 = pcVar17 + uVar1;
  }
  return pcVar18;
}



/* ===== 1804ef4b0 FUN_1804ef4b0 ===== */

undefined1 (*) [16] FUN_1804ef4b0(undefined1 (*param_1) [16],byte param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  
  if (param_2 == 0) {
    pcVar3 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar12[0] = -(*pcVar3 == '\0');
    auVar12[1] = -(pcVar3[1] == '\0');
    auVar12[2] = -(pcVar3[2] == '\0');
    auVar12[3] = -(pcVar3[3] == '\0');
    auVar12[4] = -(pcVar3[4] == '\0');
    auVar12[5] = -(pcVar3[5] == '\0');
    auVar12[6] = -(pcVar3[6] == '\0');
    auVar12[7] = -(pcVar3[7] == '\0');
    auVar12[8] = -(pcVar3[8] == '\0');
    auVar12[9] = -(pcVar3[9] == '\0');
    auVar12[10] = -(pcVar3[10] == '\0');
    auVar12[0xb] = -(pcVar3[0xb] == '\0');
    auVar12[0xc] = -(pcVar3[0xc] == '\0');
    auVar12[0xd] = -(pcVar3[0xd] == '\0');
    auVar12[0xe] = -(pcVar3[0xe] == '\0');
    auVar12[0xf] = -(pcVar3[0xf] == '\0');
    uVar4 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar12[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    while (uVar4 == 0) {
      auVar9[0] = -(pcVar3[0x10] == '\0');
      auVar9[1] = -(pcVar3[0x11] == '\0');
      auVar9[2] = -(pcVar3[0x12] == '\0');
      auVar9[3] = -(pcVar3[0x13] == '\0');
      auVar9[4] = -(pcVar3[0x14] == '\0');
      auVar9[5] = -(pcVar3[0x15] == '\0');
      auVar9[6] = -(pcVar3[0x16] == '\0');
      auVar9[7] = -(pcVar3[0x17] == '\0');
      auVar9[8] = -(pcVar3[0x18] == '\0');
      auVar9[9] = -(pcVar3[0x19] == '\0');
      auVar9[10] = -(pcVar3[0x1a] == '\0');
      auVar9[0xb] = -(pcVar3[0x1b] == '\0');
      auVar9[0xc] = -(pcVar3[0x1c] == '\0');
      auVar9[0xd] = -(pcVar3[0x1d] == '\0');
      auVar9[0xe] = -(pcVar3[0x1e] == '\0');
      auVar9[0xf] = -(pcVar3[0x1f] == '\0');
      pcVar3 = pcVar3 + 0x10;
      uVar4 = (uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar9[0xf] >> 7) << 0xf);
    }
    uVar6 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    return (undefined1 (*) [16])(pcVar3 + uVar6);
  }
  pauVar5 = (undefined1 (*) [16])0x0;
  if (DAT_1809194c8 < 2) {
    pcVar3 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    uVar6 = -1 << ((byte)param_1 & 0xf);
    auVar12 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    auVar10[0] = -(*pcVar3 == '\0');
    auVar10[1] = -(pcVar3[1] == '\0');
    auVar10[2] = -(pcVar3[2] == '\0');
    auVar10[3] = -(pcVar3[3] == '\0');
    auVar10[4] = -(pcVar3[4] == '\0');
    auVar10[5] = -(pcVar3[5] == '\0');
    auVar10[6] = -(pcVar3[6] == '\0');
    auVar10[7] = -(pcVar3[7] == '\0');
    auVar10[8] = -(pcVar3[8] == '\0');
    auVar10[9] = -(pcVar3[9] == '\0');
    auVar10[10] = -(pcVar3[10] == '\0');
    auVar10[0xb] = -(pcVar3[0xb] == '\0');
    auVar10[0xc] = -(pcVar3[0xc] == '\0');
    auVar10[0xd] = -(pcVar3[0xd] == '\0');
    auVar10[0xe] = -(pcVar3[0xe] == '\0');
    auVar10[0xf] = -(pcVar3[0xf] == '\0');
    cVar15 = auVar12[0];
    auVar14[0] = -(*pcVar3 == cVar15);
    cVar16 = auVar12[1];
    auVar14[1] = -(pcVar3[1] == cVar16);
    cVar17 = auVar12[2];
    auVar14[2] = -(pcVar3[2] == cVar17);
    cVar18 = auVar12[3];
    auVar14[3] = -(pcVar3[3] == cVar18);
    auVar14[4] = -(pcVar3[4] == cVar15);
    auVar14[5] = -(pcVar3[5] == cVar16);
    auVar14[6] = -(pcVar3[6] == cVar17);
    auVar14[7] = -(pcVar3[7] == cVar18);
    auVar14[8] = -(pcVar3[8] == cVar15);
    auVar14[9] = -(pcVar3[9] == cVar16);
    auVar14[10] = -(pcVar3[10] == cVar17);
    auVar14[0xb] = -(pcVar3[0xb] == cVar18);
    auVar14[0xc] = -(pcVar3[0xc] == cVar15);
    auVar14[0xd] = -(pcVar3[0xd] == cVar16);
    auVar14[0xe] = -(pcVar3[0xe] == cVar17);
    auVar14[0xf] = -(pcVar3[0xf] == cVar18);
    uVar4 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar14[0xf] >> 7) << 0xf) & uVar6;
    uVar6 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
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
                    (ushort)(auVar10[0xf] >> 7) << 0xf) & uVar6;
    while (uVar6 == 0) {
      uVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      auVar13[0] = -(pcVar3[0x10] == '\0');
      auVar13[1] = -(pcVar3[0x11] == '\0');
      auVar13[2] = -(pcVar3[0x12] == '\0');
      auVar13[3] = -(pcVar3[0x13] == '\0');
      auVar13[4] = -(pcVar3[0x14] == '\0');
      auVar13[5] = -(pcVar3[0x15] == '\0');
      auVar13[6] = -(pcVar3[0x16] == '\0');
      auVar13[7] = -(pcVar3[0x17] == '\0');
      auVar13[8] = -(pcVar3[0x18] == '\0');
      auVar13[9] = -(pcVar3[0x19] == '\0');
      auVar13[10] = -(pcVar3[0x1a] == '\0');
      auVar13[0xb] = -(pcVar3[0x1b] == '\0');
      auVar13[0xc] = -(pcVar3[0x1c] == '\0');
      auVar13[0xd] = -(pcVar3[0x1d] == '\0');
      auVar13[0xe] = -(pcVar3[0x1e] == '\0');
      auVar13[0xf] = -(pcVar3[0x1f] == '\0');
      uVar6 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar13[0xf] >> 7) << 0xf);
      bVar8 = uVar4 != 0;
      auVar11[0] = -(pcVar3[0x10] == cVar15);
      auVar11[1] = -(pcVar3[0x11] == cVar16);
      auVar11[2] = -(pcVar3[0x12] == cVar17);
      auVar11[3] = -(pcVar3[0x13] == cVar18);
      auVar11[4] = -(pcVar3[0x14] == cVar15);
      auVar11[5] = -(pcVar3[0x15] == cVar16);
      auVar11[6] = -(pcVar3[0x16] == cVar17);
      auVar11[7] = -(pcVar3[0x17] == cVar18);
      auVar11[8] = -(pcVar3[0x18] == cVar15);
      auVar11[9] = -(pcVar3[0x19] == cVar16);
      auVar11[10] = -(pcVar3[0x1a] == cVar17);
      auVar11[0xb] = -(pcVar3[0x1b] == cVar18);
      auVar11[0xc] = -(pcVar3[0x1c] == cVar15);
      auVar11[0xd] = -(pcVar3[0x1d] == cVar16);
      auVar11[0xe] = -(pcVar3[0x1e] == cVar17);
      auVar11[0xf] = -(pcVar3[0x1f] == cVar18);
      uVar4 = (uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar11[0xf] >> 7) << 0xf);
      if (bVar8) {
        pauVar5 = (undefined1 (*) [16])(pcVar3 + uVar1);
      }
      pcVar3 = pcVar3 + 0x10;
    }
    uVar4 = (-uVar6 & uVar6) - 1 & uVar4;
    uVar6 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    if (uVar4 != 0) {
      pauVar5 = (undefined1 (*) [16])(pcVar3 + uVar6);
    }
  }
  else {
    for (; bVar8 = ((ulonglong)param_1 & 0xf) == 0, !bVar8;
        param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
      if ((*param_1)[0] == param_2) {
        pauVar5 = param_1;
      }
      if ((*param_1)[0] == 0) {
        return pauVar5;
      }
    }
    bVar7 = false;
    while( true ) {
      iVar2 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bVar7) {
        pauVar5 = (undefined1 (*) [16])(*param_1 + iVar2);
        bVar8 = pauVar5 == (undefined1 (*) [16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bVar8) break;
      bVar7 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar8 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return pauVar5;
}



/* ===== 1804ef5f0 FUN_1804ef5f0 ===== */

void FUN_1804ef5f0(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (*(code *)PTR__guard_dispatch_icall_18056b850)();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}



/* ===== 1804ef6a0 FUN_1804ef6a0 ===== */

undefined4 FUN_1804ef6a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804efa00();
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0x30);
}



/* ===== 1804ef6c0 FUN_1804ef6c0 ===== */

undefined1 FUN_1804ef6c0(void)

{
  char cVar1;
  
  cVar1 = FUN_1804f3070();
  if (cVar1 != '\0') {
    cVar1 = FUN_1804efa60();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1804f3100();
  }
  return 0;
}



/* ===== 1804ef6f0 FUN_1804ef6f0 ===== */

bool FUN_1804ef6f0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1804ef920();
  return lVar1 != 0;
}



/* ===== 1804ef710 FUN_1804ef710 ===== */

undefined1 FUN_1804ef710(void)

{
  FUN_1804ef7e0();
  return 1;
}



/* ===== 1804ef720 FUN_1804ef720 ===== */

undefined1 FUN_1804ef720(char param_1)

{
  if (param_1 == '\0') {
    FUN_1804efad0();
    FUN_1804f3100();
  }
  return 1;
}



/* ===== 1804ef740 FUN_1804ef740 ===== */

undefined1 FUN_1804ef740(void)

{
  FUN_1804efad0();
  return 1;
}



/* ===== 1804ef750 FUN_1804ef750 ===== */

uint FUN_1804ef750(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}



/* ===== 1804ef780 FUN_1804ef780 ===== */

void FUN_1804ef780(PSLIST_HEADER param_1)

{
  PSLIST_ENTRY p_Var1;
  PSLIST_ENTRY_conflict p_Var2;
  
  p_Var2 = InterlockedFlushSList(param_1);
  while (p_Var2 != (PSLIST_ENTRY_conflict)0x0) {
    p_Var1 = p_Var2->Next;
    thunk_FUN_1805277b0(p_Var2);
    p_Var2 = p_Var1;
  }
  return;
}



/* ===== 1804ef7e0 FUN_1804ef7e0 ===== */

void FUN_1804ef7e0(void)

{
  undefined *puVar1;
  
  if (DAT_180919550 != 0xffffffff) {
    puVar1 = FlsGetValue(DAT_180919550);
    FlsSetValue(DAT_180919550,(PVOID)0x0);
    if ((puVar1 != (undefined *)0x0) && (puVar1 != &DAT_180c9f490)) {
      thunk_FUN_1805277b0(puVar1);
      return;
    }
  }
  return;
}



/* ===== 1804ef840 FUN_1804ef840 ===== */

PVOID FUN_1804ef840(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_180919550 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_180919550);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_1804ef8d8:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_180919550,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = (PVOID)_calloc_base(1,0x80);
        if (lpFlsData == (PVOID)0x0) {
          FlsSetValue(DAT_180919550,(PVOID)0x0);
          lpFlsData = (PVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_180919550,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_1805277b0(0);
            goto LAB_1804ef8d8;
          }
          FlsSetValue(DAT_180919550,(PVOID)0x0);
        }
        thunk_FUN_1805277b0(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804ef920 FUN_1804ef920 ===== */

PVOID FUN_1804ef920(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID pvVar2;
  PVOID lpFlsData;
  PVOID pvVar3;
  
  if (DAT_180919550 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar2 = FlsGetValue(DAT_180919550);
  if (pvVar2 != (PVOID)0xffffffffffffffff) {
    if (pvVar2 != (PVOID)0x0) goto LAB_1804ef9d7;
    BVar1 = FlsSetValue(DAT_180919550,(PVOID)0xffffffffffffffff);
    if (BVar1 != 0) {
      lpFlsData = (PVOID)_calloc_base(1,0x80);
      if ((lpFlsData == (PVOID)0x0) || (BVar1 = FlsSetValue(DAT_180919550,lpFlsData), BVar1 == 0)) {
        FlsSetValue(DAT_180919550,(PVOID)0x0);
        pvVar2 = (PVOID)0x0;
        pvVar3 = lpFlsData;
      }
      else {
        *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
        pvVar3 = (PVOID)0x0;
        pvVar2 = lpFlsData;
      }
      thunk_FUN_1805277b0(pvVar3);
      goto LAB_1804ef9d7;
    }
  }
  pvVar2 = (PVOID)0x0;
LAB_1804ef9d7:
  SetLastError(dwErrCode);
  return pvVar2;
}



/* ===== 1804efa00 FUN_1804efa00 ===== */

PVOID FUN_1804efa00(void)

{
  DWORD dwErrCode;
  PVOID pvVar1;
  
  if (DAT_180919550 == 0xffffffff) {
    return (PVOID)0x0;
  }
  dwErrCode = GetLastError();
  pvVar1 = FlsGetValue(DAT_180919550);
  SetLastError(dwErrCode);
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  return pvVar1;
}



/* ===== 1804efa60 FUN_1804efa60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1804efa60(void)

{
  BOOL BVar1;
  
  DAT_180919550 = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_1804ef7c0);
  if (DAT_180919550 != 0xffffffff) {
    BVar1 = FlsSetValue(DAT_180919550,&DAT_180c9f490);
    if (BVar1 != 0) {
      _DAT_180c9f508 = 0xfffffffe;
      return 1;
    }
    if (DAT_180919550 != 0xffffffff) {
      FlsFree(DAT_180919550);
      DAT_180919550 = 0xffffffff;
    }
  }
  return 0;
}



/* ===== 1804efad0 FUN_1804efad0 ===== */

undefined1 FUN_1804efad0(void)

{
  if (DAT_180919550 != 0xffffffff) {
    FlsFree(DAT_180919550);
    DAT_180919550 = 0xffffffff;
  }
  return 1;
}



/* ===== 1804efb00 FUN_1804efb00 ===== */

int FUN_1804efb00(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVar2 != -2) {
    return iVar2;
  }
  uVar3 = param_2[1];
  lVar1 = uVar3 + (longlong)*(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVar5 = 0;
    do {
      if (*param_2 < (longlong)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_3 + 0x14));
    if ((int)uVar5 != 0) {
      return *(int *)(uVar3 + (ulonglong)((int)uVar5 - 1) * 8 + 4 +
                     (longlong)*(int *)(param_3 + 0x18));
    }
  }
  return -1;
}



/* ===== 1804efb90 GetUnwindTryBlock ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: static int __cdecl __FrameHandler3::GetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64)
    int __cdecl __GetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64)
   
   Library: Visual Studio */

undefined4 GetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1804ee1a0();
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}



/* ===== 1804efbc0 FUN_1804efbc0 ===== */

void FUN_1804efbc0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) = param_4;
  return;
}



/* ===== 1804efbd0 SetUnwindTryBlock ===== */

/* Library Function - Multiple Matches With Same Base Name
    public: static void __cdecl __FrameHandler3::SetUnwindTryBlock(unsigned __int64 * __ptr64,struct
   _xDISPATCHER_CONTEXT * __ptr64,struct _s_FuncInfo const * __ptr64,int)
    void __cdecl __SetUnwindTryBlock(unsigned __int64 * __ptr64,struct _xDISPATCHER_CONTEXT *
   __ptr64,struct _s_FuncInfo const * __ptr64,int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void SetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1804ee1a0();
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) < param_4) {
    *(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) = param_4;
  }
  return;
}



/* ===== 1804efc10 FUN_1804efc10 ===== */

undefined4 FUN_1804efc10(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar2 = param_2[1];
    lVar1 = uVar2 + (longlong)*(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (*param_2 < (longlong)*(int *)(lVar1 + uVar4 * 8) + uVar2) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (uVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804efc80 FUN_1804efc80 ===== */

int FUN_1804efc80(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    return -1;
  }
  uVar1 = param_2[1];
  uVar2 = *(byte *)(uVar1 + (longlong)iVar5) & 0xf;
  pbVar3 = (byte *)((uVar1 + (longlong)iVar5) - (longlong)(char)(&DAT_180575a98)[uVar2]);
  uVar2 = *(uint *)(pbVar3 + -4) >> ((&DAT_180575aa8)[uVar2] & 0x1f);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar7 = 0;
    iVar5 = -1;
    do {
      pbVar4 = pbVar3 + -(longlong)(char)(&DAT_180575a98)[*pbVar3 & 0xf];
      uVar7 = uVar7 + (*(uint *)(pbVar4 + -4) >> ((&DAT_180575aa8)[*pbVar3 & 0xf] & 0x1f));
      if (*param_2 < (ulonglong)uVar7 + *(uint *)param_2[2] + uVar1) break;
      uVar6 = uVar6 + 1;
      pbVar3 = pbVar4 + -(longlong)(char)(&DAT_180575a98)[*pbVar4 & 0xf];
      iVar5 = (*(uint *)(pbVar3 + -4) >> ((&DAT_180575aa8)[*pbVar4 & 0xf] & 0x1f)) - 1;
    } while (uVar6 < uVar2);
    if (uVar6 != 0) {
      return iVar5;
    }
  }
  return -1;
}



/* ===== 1804efd80 FUN_1804efd80 ===== */

undefined4 FUN_1804efd80(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = lVar2 + *(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar1 + uVar4 * 8) + lVar2)) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (lVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804efdf0 FUN_1804efdf0 ===== */

int FUN_1804efdf0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    lVar1 = *(longlong *)(param_2 + 8);
    uVar2 = *(byte *)(lVar1 + iVar3) & 0xf;
    pbVar4 = (byte *)((lVar1 + iVar3) - (longlong)(char)(&DAT_180575a98)[uVar2]);
    uVar2 = *(uint *)(pbVar4 + -4) >> ((&DAT_180575aa8)[uVar2] & 0x1f);
    if (uVar2 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      iVar3 = -1;
      do {
        pbVar5 = pbVar4 + -(longlong)(char)(&DAT_180575a98)[*pbVar4 & 0xf];
        uVar7 = uVar7 + (*(uint *)(pbVar5 + -4) >> ((&DAT_180575aa8)[*pbVar4 & 0xf] & 0x1f));
        if (param_3 < (ulonglong)uVar7 + (ulonglong)**(uint **)(param_2 + 0x10) + lVar1) break;
        uVar6 = uVar6 + 1;
        pbVar4 = pbVar5 + -(longlong)(char)(&DAT_180575a98)[*pbVar5 & 0xf];
        iVar3 = (*(uint *)(pbVar4 + -4) >> ((&DAT_180575aa8)[*pbVar5 & 0xf] & 0x1f)) - 1;
      } while (uVar6 < uVar2);
      if (uVar6 == 0) {
        iVar3 = -1;
      }
      return iVar3;
    }
  }
  return -1;
}



/* ===== 1804efee0 FUN_1804efee0 ===== */

char FUN_1804efee0(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar4 = FUN_1804eeac0(), lVar4 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1804eeac0();
      lVar4 = lVar4 + (int)uVar1;
    }
    if ((*(char *)(lVar4 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_180c9f480 != 0)) {
        lVar4 = (*(code *)PTR__guard_dispatch_icall_18056b850)();
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1804eed30(lVar4,param_4 + 8);
        *param_2 = lVar4;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar2 = *(int *)(param_4 + 0x18);
          if (iVar2 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_1804eeae0();
            lVar4 = lVar4 + iVar2;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (lVar4 != 0) {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0 ||
                (lVar4 = FUN_1804eeae0(), lVar4 + iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            return ((*param_4 & 4) != 0) + '\x01';
          }
          if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          iVar2 = *(int *)(param_4 + 0x14);
          uVar5 = FUN_1804eed30(lVar3,param_4 + 8);
          FUN_180540530(param_2,uVar5,(longlong)iVar2);
        }
        else {
          if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          FUN_180540530(param_2,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar4 = FUN_1804eed30(*param_2,param_4 + 8);
            *param_2 = lVar4;
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1804eed30(lVar4,param_4 + 8);
        *param_2 = lVar4;
      }
      return '\0';
    }
  }
  return '\0';
}



/* ===== 1804f00c0 FUN_1804f00c0 ===== */

char FUN_1804f00c0(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_3 + 8);
  if ((iVar1 != 0) && (lVar4 = FUN_1804eeac0(), lVar4 + iVar1 != 0)) {
    iVar1 = *(int *)(param_3 + 8);
    if (iVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1804eeac0();
      lVar4 = lVar4 + iVar1;
    }
    if ((*(char *)(lVar4 + 0x10) != '\0') &&
       ((*(uint *)(param_3 + 0xc) != 0 || (*(int *)(param_3 + 4) < 0)))) {
      uVar2 = *(uint *)(param_3 + 4);
      if (-1 < (int)uVar2) {
        param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
      }
      if ((((char)uVar2 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_180c9f480 != 0)) {
        lVar4 = (*(code *)PTR__guard_dispatch_icall_18056b850)();
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1804eed30(lVar4,param_4 + 8);
        *param_2 = lVar4;
      }
      else if ((uVar2 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar1 = *(int *)(param_4 + 0x18);
          if (iVar1 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_1804eeae0();
            lVar4 = lVar4 + iVar1;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (lVar4 != 0) {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar1 = *(int *)(param_4 + 0x18), iVar1 == 0 ||
                (lVar4 = FUN_1804eeae0(), lVar4 + iVar1 == 0)))) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            return ((*param_4 & 4) != 0) + '\x01';
          }
          if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          iVar1 = *(int *)(param_4 + 0x14);
          uVar5 = FUN_1804eed30(lVar3,param_4 + 8);
          FUN_180540530(param_2,uVar5,(longlong)iVar1);
        }
        else {
          if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          FUN_180540530(param_2,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar4 = FUN_1804eed30(*param_2,param_4 + 8);
            *param_2 = lVar4;
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *param_2 = lVar4;
        lVar4 = FUN_1804eed30(lVar4,param_4 + 8);
        *param_2 = lVar4;
      }
      return '\0';
    }
  }
  return '\0';
}



/* ===== 1804f02b0 FUN_1804f02b0 ===== */

void FUN_1804f02b0(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (-1 < *param_3) {
    param_2 = (longlong *)((longlong)param_3[2] + *param_2);
  }
  iVar1 = FUN_1804efee0();
  if (iVar1 == 1) {
    uVar2 = FUN_1804eed30(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1804eeae0();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1804ebe70(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_1804eed30(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1804eeae0();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1804ebe80(param_2,lVar3,uVar2,1);
  }
  return;
}



/* ===== 1804f0370 FUN_1804f0370 ===== */

void FUN_1804f0370(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (-1 < *(int *)(param_3 + 4)) {
    param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
  }
  iVar1 = FUN_1804f00c0();
  if (iVar1 == 1) {
    uVar2 = FUN_1804eed30(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1804eeae0();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1804ebe70(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_1804eed30(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1804eeae0();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1804ebe80(param_2,lVar3,uVar2,1);
  }
  return;
}



/* ===== 1804f0430 FUN_1804f0430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f0430(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint *param_5
                  ,char param_6,int param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_138 [32];
  uint *local_118;
  uint *local_110;
  int local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  longlong local_f0;
  char local_e8;
  int local_d8;
  uint local_d4;
  undefined8 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  int local_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  uint *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  uint local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_d0 = param_3;
  local_b8 = param_2;
  iVar4 = FUN_1804efc10(param_5,param_4);
  local_d8 = iVar4;
  FUN_1804ee1a0(param_2,param_4,param_5,&local_c8);
  iVar5 = GetUnwindTryBlock(param_2,param_4,param_5);
  if (iVar5 < iVar4) {
    FUN_1804efbc0(&local_c8,param_4,param_5,iVar4);
    SetUnwindTryBlock(param_2,param_4,param_5,iVar4);
  }
  else {
    iVar4 = GetUnwindTryBlock(param_2,param_4,param_5);
    local_d8 = iVar4;
  }
  if ((-2 < iVar4) && (iVar4 < (int)param_5[1])) {
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0xc) == 0))
       )) {
      lVar6 = FUN_1804ef840();
      if (*(longlong *)(lVar6 + 0x20) == 0) {
        return;
      }
      lVar6 = FUN_1804ef840();
      param_1 = *(int **)(lVar6 + 0x20);
      lVar6 = FUN_1804ef840();
      param_3 = *(undefined8 *)(lVar6 + 0x28);
      local_d0 = param_3;
      FUN_1804eeb20(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_1804f09d1;
      lVar6 = FUN_1804ef840();
      if (*(longlong *)(lVar6 + 0x38) != 0) {
        lVar6 = FUN_1804ef840();
        uVar7 = *(undefined8 *)(lVar6 + 0x38);
        lVar6 = FUN_1804ef840();
        *(undefined8 *)(lVar6 + 0x38) = 0;
        cVar3 = FUN_1804f2ab0(param_1,uVar7);
        if (cVar3 == '\0') {
          cVar3 = FUN_1804f2bc0(uVar7);
          if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180515f70();
          }
          __DestructExceptionObject(param_1,1);
          FUN_1804eb830(&local_70);
                    /* WARNING: Subroutine does not return */
          FUN_1804ef5f0(&local_70,&DAT_180915c68);
        }
        iVar4 = local_d8;
      }
    }
    local_98 = *(undefined8 *)(param_4 + 8);
    local_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,param_7);
        local_118 = param_5;
        FUN_1804ee2d0(&local_90,&local_a0,iVar4,param_4);
        local_c8 = local_90;
        local_d4 = local_88;
        if (local_88 < local_78) {
          do {
            lVar8 = local_90[1];
            lVar6 = (longlong)*(int *)(*local_90 + 0x10) + (ulonglong)local_88 * 0x14;
            local_bc = *(int *)(lVar6 + lVar8);
            if (local_bc <= iVar4) {
              if (iVar4 <= *(int *)(lVar6 + 4 + lVar8)) {
                local_c0 = *(undefined4 *)(lVar6 + 8 + lVar8);
                uVar11 = 0;
                uVar2 = *(uint *)(lVar6 + 0xc + lVar8);
                local_b0 = (longlong)*(int *)(lVar6 + 0x10 + lVar8) + *(longlong *)(param_4 + 8);
                local_d4 = local_88;
                if (uVar2 != 0) {
                  do {
                    puVar1 = (undefined4 *)(local_b0 + uVar11 * 0x14);
                    local_70 = *puVar1;
                    uStack_6c = puVar1[1];
                    uStack_68 = puVar1[2];
                    iStack_64 = puVar1[3];
                    local_60 = *(undefined4 *)(local_b0 + 0x10 + uVar11 * 0x14);
                    iVar4 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar6 = FUN_1804eeae0();
                    piVar9 = (int *)((longlong)iVar4 + lVar6 + 4);
                    iVar4 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar6 = FUN_1804eeae0();
                    iVar4 = *(int *)(lVar6 + iVar4);
                    local_88 = local_d4;
                    local_90 = local_c8;
                    while( true ) {
                      local_d4 = local_88;
                      local_c8 = local_90;
                      if (iVar4 < 1) break;
                      iVar5 = *piVar9;
                      lVar6 = FUN_1804eeae0();
                      lVar6 = iVar5 + lVar6;
                      iVar5 = FUN_1804f1560(&local_70,lVar6,*(undefined8 *)(param_1 + 0xc));
                      param_2 = local_b8;
                      if (iVar5 != 0) {
                        uVar7 = FUN_1804ee1a0(local_b8,param_4,param_5,local_a8);
                        if (lVar6 != 0) {
                          FUN_1804f02b0(param_1,uVar7,&local_70,lVar6);
                        }
                        lVar8 = (longlong)iStack_64;
                        lVar6 = FUN_1804eeac0();
                        local_118 = (uint *)(lVar6 + lVar8);
                        local_e8 = param_6;
                        local_f8 = &local_70;
                        local_100 = CONCAT44(local_100._4_4_,local_c0);
                        local_108 = local_bc;
                        local_110 = param_5;
                        local_f0 = param_4;
                        FUN_1804ee580(param_2,param_1,local_d0,uVar7);
                        local_90 = local_c8;
                        local_88 = local_d4;
                        iVar4 = local_d8;
                        goto LAB_1804f0826;
                      }
                      piVar9 = piVar9 + 1;
                      iVar4 = iVar4 + -1;
                      local_88 = local_d4;
                      local_90 = local_c8;
                    }
                    uVar10 = (int)uVar11 + 1;
                    uVar11 = (ulonglong)uVar10;
                  } while (uVar10 != uVar2);
                  iVar4 = local_d8;
                }
                param_2 = local_b8;
              }
            }
LAB_1804f0826:
            local_88 = local_88 + 1;
            local_d4 = local_88;
          } while (local_88 < local_78);
        }
      }
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVar2 = param_5[8], uVar2 != 0 && (lVar6 = FUN_1804eeac0(), lVar6 + (int)uVar2 != 0)) ||
          (((param_5[9] & 4) != 0 && (cVar3 = FUN_1804edfb0(param_4,param_5), cVar3 == '\0')))))) {
        if ((param_5[9] & 4) != 0) {
          lVar6 = FUN_1804ef840();
          *(int **)(lVar6 + 0x20) = param_1;
          lVar6 = FUN_1804ef840();
          *(undefined8 *)(lVar6 + 0x28) = local_d0;
                    /* WARNING: Subroutine does not return */
          FUN_180515f70();
        }
        uVar2 = param_5[8];
        if (uVar2 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_1804eeac0();
          lVar6 = (int)uVar2 + lVar6;
        }
        cVar3 = FUN_1804f2ab0(param_1,lVar6);
        if (cVar3 == '\0') {
          uVar7 = FUN_1804ee1a0(param_2,param_4,param_5,local_a8);
          local_e8 = param_6;
          local_f8 = (undefined4 *)0x0;
          local_100 = CONCAT44(local_100._4_4_,0xffffffff);
          local_108 = -1;
          local_110 = param_5;
          local_118 = (uint *)0x0;
          local_f0 = param_4;
          FUN_1804ee580(param_2,param_1,local_d0,uVar7);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != '\0') goto LAB_1804f09d1;
      local_100 = param_8;
      local_108 = param_7;
      local_110 = (uint *)CONCAT44(local_110._4_4_,iVar4);
      local_118 = param_5;
      FUN_1804f0f90(param_1,param_2,param_3,param_4);
    }
    lVar6 = FUN_1804ef840();
    if (*(longlong *)(lVar6 + 0x38) == 0) {
      return;
    }
  }
LAB_1804f09d1:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804f09e0 FUN_1804f09e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f09e0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5
                  ,char param_6,int param_7,undefined8 param_8)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auStack_1a8 [32];
  byte *local_188;
  byte *local_180;
  int local_178;
  undefined8 local_170;
  undefined1 *local_168;
  longlong local_160;
  char local_158;
  uint local_148;
  int local_144;
  undefined8 local_140;
  undefined4 local_138;
  int local_134;
  byte *local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  uint local_110;
  uint local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  int local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  local_130 = param_5;
  local_140 = param_3;
  local_120 = param_2;
  iVar5 = FUN_1804f2a00(param_2,param_4,param_5);
  local_144 = iVar5;
  if (-2 < iVar5) {
    if (*(int *)(param_5 + 8) == 0) {
      uVar9 = 0;
    }
    else {
      pbVar15 = (byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8));
      uVar9 = *pbVar15 & 0xf;
      uVar9 = *(uint *)(pbVar15 + (-4 - (longlong)(char)(&DAT_180575a98)[uVar9])) >>
              ((&DAT_180575aa8)[uVar9] & 0x1f);
    }
    if (iVar5 < (int)uVar9) {
      if ((((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) &&
         (*(longlong *)(param_1 + 0xc) == 0)) {
        lVar7 = FUN_1804ef840();
        if (*(longlong *)(lVar7 + 0x20) == 0) {
          return;
        }
        lVar7 = FUN_1804ef840();
        param_1 = *(int **)(lVar7 + 0x20);
        lVar7 = FUN_1804ef840();
        param_3 = *(undefined8 *)(lVar7 + 0x28);
        local_140 = param_3;
        FUN_1804eeb20(*(undefined8 *)(param_1 + 0xe));
        if ((param_1 == (int *)0x0) ||
           (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
            ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
        goto LAB_1804f0f8a;
        lVar7 = FUN_1804ef840();
        if (*(longlong *)(lVar7 + 0x38) != 0) {
          lVar7 = FUN_1804ef840();
          uVar3 = *(undefined8 *)(lVar7 + 0x38);
          lVar7 = FUN_1804ef840();
          *(undefined8 *)(lVar7 + 0x38) = 0;
          cVar4 = FUN_1804f2ab0(param_1,uVar3);
          if (cVar4 == '\0') {
            cVar4 = FUN_1804f2bc0(uVar3);
            if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_180515f70();
            }
            __DestructExceptionObject(param_1,1);
            FUN_1804eb830(&local_118);
                    /* WARNING: Subroutine does not return */
            FUN_1804ef5f0(&local_118,&DAT_180915c68);
          }
          param_3 = local_140;
        }
      }
      FUN_1804f1cc0(local_78,param_5,*(undefined8 *)(param_4 + 8));
      if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
        if (local_78[0] != 0) {
          local_180 = (byte *)CONCAT44(local_180._4_4_,param_7);
          local_188 = param_5;
          FUN_1804ee400(&local_118,local_78,iVar5,param_4);
          local_128 = local_118;
          local_148 = local_110;
          if (local_110 < local_100) {
            do {
              local_134 = *(int *)(local_118 + 0x18);
              local_148 = local_110;
              if ((local_134 <= iVar5) && (iVar5 <= *(int *)(local_118 + 0x1c))) {
                local_138 = *(undefined4 *)(local_118 + 0x20);
                uVar9 = 0;
                iVar6 = *(int *)(local_118 + 0x24);
                local_88 = *(longlong *)(param_4 + 8);
                local_c0 = 0;
                local_b8 = 0;
                local_b0 = 0;
                local_80 = **(undefined4 **)(param_4 + 0x10);
                local_ac = 0;
                local_a4 = 0;
                local_98 = 0;
                uStack_90 = 0;
                if (iVar6 == 0) {
                  local_c8[0] = 0;
                }
                else {
                  uVar14 = *(byte *)(local_88 + iVar6) & 0xf;
                  local_c0 = (local_88 - (char)(&DAT_180575a98)[uVar14]) + (longlong)iVar6;
                  local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_180575aa8)[uVar14] & 0x1f);
                  local_b8 = local_c0;
                  FUN_1804f2220(local_c8);
                }
                uVar14 = local_c8[0];
                if (local_c8[0] != 0) {
                  do {
                    local_f0 = local_b0;
                    local_ef = local_af;
                    local_ed = local_ad;
                    local_ec = (undefined4)local_ac;
                    local_e8 = local_ac._4_4_;
                    local_e4 = (undefined4)local_a4;
                    local_e0 = local_a4._4_4_;
                    local_dc = local_9c;
                    local_d8 = local_98;
                    local_d0 = uStack_90;
                    iVar5 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar7 = FUN_1804eeae0();
                    piVar13 = (int *)((longlong)iVar5 + lVar7 + 4);
                    iVar5 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar7 = FUN_1804eeae0();
                    for (iVar5 = *(int *)(lVar7 + iVar5); 0 < iVar5; iVar5 = iVar5 + -1) {
                      iVar6 = *piVar13;
                      lVar7 = FUN_1804eeae0();
                      lVar7 = iVar6 + lVar7;
                      iVar6 = FUN_1804f1690(&local_f0,lVar7,*(undefined8 *)(param_1 + 0xc));
                      uVar3 = local_120;
                      param_5 = local_130;
                      if (iVar6 != 0) {
                        uVar8 = FUN_1804ee2a0(local_120,param_4,local_130,local_f8);
                        if (lVar7 != 0) {
                          FUN_1804f0370(param_1,uVar8,&local_f0,lVar7);
                        }
                        lVar12 = (longlong)local_e0;
                        lVar7 = FUN_1804eeac0();
                        local_188 = (byte *)(lVar7 + lVar12);
                        local_158 = param_6;
                        local_168 = &local_f0;
                        local_170 = CONCAT44(local_170._4_4_,local_138);
                        local_178 = local_134;
                        local_180 = param_5;
                        local_160 = param_4;
                        FUN_1804ee6b0(uVar3,param_1,local_140,uVar8);
                        local_118 = local_128;
                        iVar5 = local_144;
                        goto LAB_1804f0d7a;
                      }
                      piVar13 = piVar13 + 1;
                    }
                    FUN_1804f2220(local_c8);
                    uVar9 = uVar9 + 1;
                  } while (uVar9 != uVar14);
                  local_118 = local_128;
                  local_110 = local_148;
                  iVar5 = local_144;
                }
                local_148 = local_110;
                param_5 = local_130;
              }
LAB_1804f0d7a:
              pbVar15 = *(byte **)(local_118 + 8);
              local_148 = local_148 + 1;
              lVar7 = (longlong)(char)(&DAT_180575a98)[*pbVar15 & 0xf];
              bVar1 = (&DAT_180575aa8)[*pbVar15 & 0xf];
              pbVar10 = pbVar15 + -lVar7;
              uVar9 = *(uint *)(pbVar10 + -4);
              *(byte **)(local_118 + 8) = pbVar10;
              *(uint *)(local_118 + 0x18) = uVar9 >> (bVar1 & 0x1f);
              cVar4 = (&DAT_180575a98)[*pbVar10 & 0xf];
              pbVar11 = pbVar15 + (-lVar7 - (longlong)cVar4);
              *(uint *)(local_118 + 0x1c) =
                   *(uint *)(pbVar11 + -4) >> ((&DAT_180575aa8)[*pbVar10 & 0xf] & 0x1f);
              *(byte **)(local_118 + 8) = pbVar11;
              pbVar15 = pbVar15 + ((-(longlong)cVar4 -
                                   (longlong)(char)(&DAT_180575a98)[*pbVar11 & 0xf]) - lVar7);
              *(uint *)(local_118 + 0x20) =
                   *(uint *)(pbVar15 + -4) >> ((&DAT_180575aa8)[*pbVar11 & 0xf] & 0x1f);
              *(byte **)(local_118 + 8) = pbVar15;
              uVar2 = *(undefined4 *)pbVar15;
              *(byte **)(local_118 + 8) = pbVar15 + 4;
              *(undefined4 *)(local_118 + 0x24) = uVar2;
              local_110 = local_148;
            } while (local_148 < local_100);
          }
        }
        if (((*param_5 & 0x40) != 0) && (cVar4 = FUN_1804ee020(param_4,param_5), cVar4 == '\0')) {
          lVar7 = FUN_1804ef840();
          *(int **)(lVar7 + 0x20) = param_1;
          lVar7 = FUN_1804ef840();
          *(undefined8 *)(lVar7 + 0x28) = local_140;
                    /* WARNING: Subroutine does not return */
          FUN_180515f70();
        }
      }
      else if (local_78[0] != 0) {
        if (param_6 != '\0') goto LAB_1804f0f8a;
        local_170 = param_8;
        local_178 = param_7;
        local_180 = (byte *)CONCAT44(local_180._4_4_,iVar5);
        local_188 = param_5;
        FUN_1804f11f0(param_1,param_2,param_3,param_4);
      }
      lVar7 = FUN_1804ef840();
      if (*(longlong *)(lVar7 + 0x38) == 0) {
        return;
      }
    }
  }
LAB_1804f0f8a:
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804f0f90 FUN_1804f0f90 ===== */

void FUN_1804f0f90(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  PVOID pvVar3;
  int iVar4;
  longlong lVar5;
  PVOID pvVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  int *piVar10;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar11;
  undefined1 local_70 [8];
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  uint local_40;
  
  if (*param_1 != -0x7ffffffd) {
    lVar5 = FUN_1804ef840();
    if (*(longlong *)(lVar5 + 0x10) != 0) {
      lVar5 = FUN_1804ef840();
      pvVar3 = *(PVOID *)(lVar5 + 0x10);
      pvVar6 = EncodePointer((PVOID)0x0);
      if ((((pvVar3 != pvVar6) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (iVar4 = FUN_1804ede00(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_6),
         in_stack_ffffffffffffff58 = param_8, iVar4 != 0)) {
        return;
      }
    }
    local_60 = *(undefined8 *)(param_4 + 8);
    local_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_1804ee2d0(&local_58,&local_68,param_6,param_4,param_5,param_7);
    uVar9 = local_50;
    if (local_50 < local_40) {
      do {
        piVar10 = (int *)((longlong)*(int *)(*local_58 + 0x10) + (ulonglong)uVar9 * 0x14 +
                         local_58[1]);
        iVar4 = *piVar10;
        if ((iVar4 <= param_6) && (param_6 <= piVar10[1])) {
          iVar1 = piVar10[2];
          pbVar8 = (byte *)(*(longlong *)(param_4 + 8) + -0x14 +
                           (longlong)piVar10[4] + (ulonglong)(uint)piVar10[3] * 0x14);
          iVar2 = *(int *)(pbVar8 + 4);
          if ((iVar2 != 0) && (lVar5 = FUN_1804eeac0(), lVar5 + iVar2 != 0)) {
            iVar2 = *(int *)(pbVar8 + 4);
            if (iVar2 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = FUN_1804eeac0();
              lVar5 = lVar5 + iVar2;
            }
            if (*(char *)(lVar5 + 0x10) != '\0') goto LAB_1804f119d;
          }
          uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
          if ((*pbVar8 & 0x40) == 0) {
            uVar7 = FUN_1804ee1a0(param_2,param_4,param_5,local_70);
            lVar5 = FUN_1804eeac0();
            in_stack_ffffffffffffff58 = CONCAT44(uVar11,iVar4);
            FUN_1804ee580(param_2,param_1,param_3,uVar7,*(int *)(pbVar8 + 0xc) + lVar5,param_5,
                          in_stack_ffffffffffffff58,iVar1,pbVar8,param_4,0);
          }
        }
LAB_1804f119d:
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_40);
    }
  }
  return;
}



/* ===== 1804f11f0 FUN_1804f11f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f11f0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  PVOID pvVar5;
  int iVar6;
  longlong lVar7;
  PVOID pvVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  int local_140;
  undefined1 *local_138;
  longlong local_130;
  undefined1 local_128;
  uint local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int *local_f8;
  longlong local_f0;
  uint local_e8;
  uint local_d8;
  undefined1 local_d0 [8];
  uint local_c8 [2];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  int local_78 [10];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_178;
  local_110 = param_8;
  if (*param_1 != -0x7ffffffd) {
    local_108 = param_3;
    local_100 = param_2;
    local_f8 = param_1;
    lVar7 = FUN_1804ef840();
    if (*(longlong *)(lVar7 + 0x10) != 0) {
      lVar7 = FUN_1804ef840();
      pvVar5 = *(PVOID *)(lVar7 + 0x10);
      pvVar8 = EncodePointer((PVOID)0x0);
      if (((pvVar5 != pvVar8) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) {
        local_140 = param_6;
        local_148 = local_110;
        local_150 = CONCAT44(local_150._4_4_,param_7);
        local_158 = param_5;
        iVar6 = FUN_1804ede50(param_1,param_2,local_108,param_4);
        if (iVar6 != 0) {
          return;
        }
      }
    }
    FUN_1804f1cc0(local_78,param_5,*(undefined8 *)(param_4 + 8));
    if (local_78[0] == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_150 = CONCAT44(local_150._4_4_,param_7);
    local_158 = param_5;
    FUN_1804ee400(&local_f0,local_78,param_6,param_4);
    local_118 = local_e8;
    if (local_e8 < local_d8) {
      do {
        lVar7 = 0;
        iVar6 = *(int *)(local_f0 + 0x18);
        if ((iVar6 <= param_6) && (param_6 <= *(int *)(local_f0 + 0x1c))) {
          iVar3 = *(int *)(local_f0 + 0x24);
          local_88 = *(longlong *)(param_4 + 8);
          local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)(local_f0 + 0x20));
          local_80 = **(undefined4 **)(param_4 + 0x10);
          local_c0 = 0;
          local_b8 = 0;
          local_b0[0] = 0;
          local_ac = 0;
          local_a4 = 0;
          local_98 = 0;
          uStack_90 = 0;
          if (iVar3 == 0) {
            local_c8[0] = 0;
          }
          else {
            uVar11 = *(byte *)(iVar3 + local_88) & 0xf;
            local_c0 = ((longlong)iVar3 - (longlong)(char)(&DAT_180575a98)[uVar11]) + local_88;
            local_c8[0] = *(uint *)(local_c0 + -4) >> ((&DAT_180575aa8)[uVar11] & 0x1f);
            local_b8 = local_c0;
            FUN_1804f2220(local_c8);
          }
          FUN_1804f2dd0(local_c8,0);
          FUN_1804f2dd0(local_c8,local_c8[0] - 1);
          lVar14 = (longlong)local_ac._4_4_;
          if ((local_ac._4_4_ != 0) && (lVar9 = FUN_1804eeac0(), lVar9 + lVar14 != 0)) {
            lVar14 = (longlong)local_ac._4_4_;
            if (local_ac._4_4_ != 0) {
              lVar7 = FUN_1804eeac0();
              lVar7 = lVar7 + lVar14;
            }
            if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_1804f1476;
          }
          if ((local_ac & 0x40) == 0) {
            uVar10 = FUN_1804ee2a0(local_100,param_4,param_5,local_d0);
            lVar7 = (longlong)local_a4._4_4_;
            local_158 = FUN_1804eeac0();
            local_138 = local_b0;
            local_158 = local_158 + lVar7;
            local_128 = 0;
            local_140 = (int)local_110;
            local_148 = CONCAT44(local_148._4_4_,iVar6);
            local_150 = param_5;
            local_130 = param_4;
            FUN_1804ee6b0(local_100,local_f8,local_108,uVar10);
          }
        }
LAB_1804f1476:
        pbVar15 = *(byte **)(local_f0 + 8);
        lVar7 = (longlong)(char)(&DAT_180575a98)[*pbVar15 & 0xf];
        bVar1 = (&DAT_180575aa8)[*pbVar15 & 0xf];
        pbVar12 = pbVar15 + -lVar7;
        uVar11 = *(uint *)(pbVar12 + -4);
        *(byte **)(local_f0 + 8) = pbVar12;
        *(uint *)(local_f0 + 0x18) = uVar11 >> (bVar1 & 0x1f);
        cVar2 = (&DAT_180575a98)[*pbVar12 & 0xf];
        pbVar13 = pbVar15 + (-lVar7 - (longlong)cVar2);
        *(uint *)(local_f0 + 0x1c) =
             *(uint *)(pbVar13 + -4) >> ((&DAT_180575aa8)[*pbVar12 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar13;
        pbVar15 = pbVar15 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_180575a98)[*pbVar13 & 0xf]) -
                            lVar7);
        *(uint *)(local_f0 + 0x20) =
             *(uint *)(pbVar15 + -4) >> ((&DAT_180575aa8)[*pbVar13 & 0xf] & 0x1f);
        *(byte **)(local_f0 + 8) = pbVar15;
        uVar4 = *(undefined4 *)pbVar15;
        *(byte **)(local_f0 + 8) = pbVar15 + 4;
        local_118 = local_118 + 1;
        *(undefined4 *)(local_f0 + 0x24) = uVar4;
      } while (local_118 < local_d8);
    }
  }
  return;
}



/* ===== 1804f1560 FUN_1804f1560 ===== */

undefined8 FUN_1804f1560(byte *param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_1804eeac0();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1804eeac0();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*param_1 & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1804eeac0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_1804eeae0();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1804eeac0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_1804eeae0();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*param_1 & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*param_1 & 2) != 0)))) {
    return 1;
  }
  return 0;
}



/* ===== 1804f1690 FUN_1804f1690 ===== */

undefined8 FUN_1804f1690(longlong param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_1804eeac0();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1804eeac0();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*(byte *)(param_1 + 4) & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1804eeac0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_1804eeae0();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1804eeac0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_1804eeae0();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*(byte *)(param_1 + 4) & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*(byte *)(param_1 + 4) & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*(byte *)(param_1 + 4) & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*(byte *)(param_1 + 4) & 2) != 0)))) {
    return 1;
  }
  return 0;
}



/* ===== 1804f17c0 FUN_1804f17c0 ===== */

undefined8
FUN_1804f17c0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  __except_validate_context_record(param_3);
  lVar3 = FUN_1804ef840();
  if ((*(int *)(lVar3 + 0x40) == 0) && (iVar2 = *param_1, iVar2 != -0x1f928c9d)) {
    if (iVar2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar5 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_1804f1819;
      }
    }
    else {
      bVar5 = iVar2 == -0x7fffffda;
LAB_1804f1819:
      if (bVar5) goto LAB_1804f1833;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((param_5[9] & 1) != 0)) {
      return 1;
    }
  }
LAB_1804f1833:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVar1 = param_5[8], uVar1 == 0)) ||
        (lVar3 = FUN_1804eeac0(), lVar3 + (int)uVar1 == 0)))) {
      if ((*param_5 & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5[9] & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        ((iVar2 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar2 != 0 &&
         (lVar3 = FUN_1804eeae0(), lVar3 + iVar2 != 0)))))) {
      uVar4 = (*(code *)PTR__guard_dispatch_icall_18056b850)
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                         CONCAT44(uVar7,(uint)param_8));
      return uVar4;
    }
    FUN_1804f0430(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar6,param_6),param_7);
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_1804f18cd:
    FUN_1804ee030(param_2,param_4,param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVar2 = FUN_1804efd80(param_5,param_4,*(undefined8 *)(param_4 + 0x20));
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_1804f2470(param_2,param_4,param_5,iVar2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_1804f18cd;
    if ((-2 < param_1[0xe]) && (param_1[0xe] < (int)param_5[1])) {
      FUN_1804f2470(*(undefined8 *)(param_1 + 10),param_4,param_5);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* ===== 1804f19f0 FUN_1804f19f0 ===== */

undefined8
FUN_1804f19f0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar9;
  int local_68 [14];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  __except_validate_context_record(param_3);
  lVar3 = FUN_1804ef840();
  if ((*(int *)(lVar3 + 0x40) == 0) && (iVar1 = *param_1, iVar1 != -0x1f928c9d)) {
    if (iVar1 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar7 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_1804f1a4c;
      }
    }
    else {
      bVar7 = iVar1 == -0x7fffffda;
LAB_1804f1a4c:
      if (bVar7) goto LAB_1804f1a57;
    }
    if ((*param_5 & 0x20) != 0) {
      return 1;
    }
  }
LAB_1804f1a57:
  if ((param_1[1] & 0x66U) == 0) {
    FUN_1804f1cc0(local_68,param_5,*(undefined8 *)(param_4 + 8));
    if ((local_68[0] != 0) || ((*param_5 & 0x40) != 0)) {
      if ((*param_1 == -0x1f928c9d) &&
         ((((2 < (uint)param_1[6] && (0x19930522 < (uint)param_1[8])) &&
           (iVar1 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar1 != 0)) &&
          (lVar3 = FUN_1804eeae0(), lVar3 + iVar1 != 0)))) {
        uVar4 = (*(code *)PTR__guard_dispatch_icall_18056b850)
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                           CONCAT44(uVar9,(uint)param_8));
        return uVar4;
      }
      FUN_1804f09e0(param_1,param_2,param_3,param_4,param_5,param_8,CONCAT44(uVar8,param_6),param_7)
      ;
    }
  }
  else if (((*(int *)(param_5 + 8) != 0) &&
           (pbVar6 = (byte *)(*(longlong *)(param_4 + 8) + (longlong)*(int *)(param_5 + 8)),
           uVar5 = *pbVar6 & 0xf,
           *(uint *)(pbVar6 + (-4 - (longlong)(char)(&DAT_180575a98)[uVar5])) >>
           ((&DAT_180575aa8)[uVar5] & 0x1f) != 0)) && (param_6 == 0)) {
    if ((param_1[1] & 0x20U) != 0) {
      if (*param_1 == -0x7fffffda) {
        iVar1 = FUN_1804efdf0(param_5,param_4,*(undefined8 *)(param_4 + 0x20));
        if ((-2 < iVar1) && (iVar2 = FUN_1804f2a70(param_4,param_5), iVar1 < iVar2)) {
          FUN_1804f2620(param_2,param_4,param_5,iVar1);
          return 1;
        }
LAB_1804f1c43:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*param_1 == -0x7fffffd7) {
        iVar1 = param_1[0xe];
        if ((-2 < iVar1) && (iVar2 = FUN_1804f2a70(param_4,param_5), iVar1 < iVar2)) {
          FUN_1804f2620(*(undefined8 *)(param_1 + 10),param_4,param_5,iVar1);
          return 1;
        }
        goto LAB_1804f1c43;
      }
    }
    FUN_1804ee160(param_2,param_4,param_5);
  }
  return 1;
}



/* ===== 1804f1c50 FUN_1804f1c50 ===== */

void FUN_1804f1c50(void)

{
  FUN_1804f17c0();
  return;
}



/* ===== 1804f1c60 FUN_1804f1c60 ===== */

undefined4 FUN_1804f1c60(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1804f19f0();
  lVar2 = FUN_1804ef840();
  *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
  return uVar1;
}



/* ===== 1804f1cc0 FUN_1804f1cc0 ===== */

uint * FUN_1804f1cc0(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    *param_1 = 0;
    return param_1;
  }
  pbVar3 = (byte *)(param_3 + *(int *)(param_2 + 0xc));
  *(byte **)(param_1 + 2) = pbVar3;
  bVar1 = (&DAT_180575aa8)[*pbVar3 & 0xf];
  pbVar3 = pbVar3 + -(longlong)(char)(&DAT_180575a98)[*pbVar3 & 0xf];
  uVar2 = *(uint *)(pbVar3 + -4);
  *(byte **)(param_1 + 2) = pbVar3;
  *param_1 = uVar2 >> (bVar1 & 0x1f);
  *(byte **)(param_1 + 4) = pbVar3;
  bVar1 = (&DAT_180575aa8)[*pbVar3 & 0xf];
  pbVar3 = pbVar3 + -(longlong)(char)(&DAT_180575a98)[*pbVar3 & 0xf];
  uVar2 = *(uint *)(pbVar3 + -4);
  *(byte **)(param_1 + 2) = pbVar3;
  param_1[6] = uVar2 >> (bVar1 & 0x1f);
  pbVar4 = pbVar3 + -(longlong)(char)(&DAT_180575a98)[*pbVar3 & 0xf];
  param_1[7] = *(uint *)(pbVar4 + -4) >> ((&DAT_180575aa8)[*pbVar3 & 0xf] & 0x1f);
  *(byte **)(param_1 + 2) = pbVar4;
  puVar5 = (uint *)(pbVar4 + -(longlong)(char)(&DAT_180575a98)[*pbVar4 & 0xf]);
  param_1[8] = puVar5[-1] >> ((&DAT_180575aa8)[*pbVar4 & 0xf] & 0x1f);
  *(uint **)(param_1 + 2) = puVar5;
  uVar2 = *puVar5;
  *(uint **)(param_1 + 2) = puVar5 + 1;
  param_1[9] = uVar2;
  return param_1;
}



/* ===== 1804f1db0 FUN_1804f1db0 ===== */

undefined8 FUN_1804f1db0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_48 [16];
  
  lVar6 = FUN_1804ef840();
  uVar1 = *(undefined8 *)(lVar6 + 0x28);
  lVar6 = FUN_1804ef840();
  uVar2 = *(undefined8 *)(lVar6 + 0x20);
  piVar3 = *(int **)(param_1 + 0x50);
  lVar6 = *(longlong *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x28);
  __except_validate_context_record(uVar8);
  lVar7 = FUN_1804ef840();
  *(int **)(lVar7 + 0x20) = piVar3;
  lVar7 = FUN_1804ef840();
  *(undefined8 *)(lVar7 + 0x28) = uVar8;
  lVar7 = FUN_1804ef840();
  uVar8 = _CreateFrameInfo(local_48,*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1804ef840();
  }
  uVar9 = _CallSettingFrame(uVar9,plVar4,0x100);
  FUN_1804eea60(uVar8);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (iVar5 = FUN_1804eecf0(*(undefined8 *)(piVar3 + 10)), iVar5 != 0)) {
    __DestructExceptionObject(piVar3,1);
  }
  lVar7 = FUN_1804ef840();
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  lVar7 = FUN_1804ef840();
  *(undefined8 *)(lVar7 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(lVar6 + 0x1c) + *plVar4) = 0xfffffffffffffffe;
  return uVar9;
}



/* ===== 1804f1fc0 FUN_1804f1fc0 ===== */

longlong FUN_1804f1fc0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong local_60 [2];
  undefined1 local_50 [24];
  
  lVar8 = FUN_1804ef840();
  uVar2 = *(undefined8 *)(lVar8 + 0x28);
  lVar8 = FUN_1804ef840();
  uVar3 = *(undefined8 *)(lVar8 + 0x20);
  piVar4 = *(int **)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  local_60[0] = *(longlong *)(param_1 + 0x48);
  local_60[1] = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  __except_validate_context_record(uVar9);
  lVar8 = FUN_1804ef840();
  *(int **)(lVar8 + 0x20) = piVar4;
  lVar8 = FUN_1804ef840();
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  lVar8 = FUN_1804ef840();
  uVar9 = _CreateFrameInfo(local_50,*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1804ef840();
  }
  lVar8 = FUN_1804f31d0(uVar5,uVar6,0x100);
  if ((lVar8 < 2) && (lVar8 = local_60[lVar8], lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_1804f3200(lVar8,uVar6);
  FUN_1804eea60(uVar9);
  if ((((*piVar4 == -0x1f928c9d) && (piVar4[6] == 4)) && (piVar4[8] + 0xe66cfae0U < 3)) &&
     (iVar7 = FUN_1804eecf0(*(undefined8 *)(piVar4 + 10)), iVar7 != 0)) {
    __DestructExceptionObject(piVar4,1);
  }
  lVar10 = FUN_1804ef840();
  *(undefined8 *)(lVar10 + 0x20) = uVar3;
  lVar10 = FUN_1804ef840();
  *(undefined8 *)(lVar10 + 0x28) = uVar2;
  lVar10 = FUN_1804ef840();
  *(undefined4 *)(lVar10 + 0x78) = uVar1;
  lVar10 = FUN_1804ef840();
  *(undefined4 *)(lVar10 + 0x78) = 0xfffffffe;
  return lVar8;
}



/* ===== 1804f2220 FUN_1804f2220 ===== */

void FUN_1804f2220(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  bVar1 = **(byte **)(param_1 + 8);
  pbVar6 = *(byte **)(param_1 + 8) + 1;
  *(byte *)(param_1 + 0x18) = bVar1;
  *(byte **)(param_1 + 8) = pbVar6;
  if ((bVar1 & 1) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180575a98)[bVar5 & 0xf];
    *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar6 + -4) >> ((&DAT_180575aa8)[bVar5 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar6;
  }
  if ((bVar1 & 2) != 0) {
    uVar2 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    *(byte **)(param_1 + 8) = pbVar6;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  if ((bVar1 & 4) != 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + -(longlong)(char)(&DAT_180575a98)[bVar5 & 0xf];
    *(uint *)(param_1 + 0x24) = *(uint *)(pbVar6 + -4) >> ((&DAT_180575aa8)[bVar5 & 0xf] & 0x1f);
    *(byte **)(param_1 + 8) = pbVar6;
  }
  pbVar7 = pbVar6 + 4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar6;
  bVar5 = bVar1 & 0x30;
  *(byte **)(param_1 + 8) = pbVar7;
  if ((bVar1 & 8) == 0) {
    if (bVar5 == 0x10) {
      bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(((longlong)pbVar7 - (longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar7 - (longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf];
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      return;
    }
    if (bVar5 == 0x20) {
      bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
      pbVar7 = pbVar7 + -(longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(pbVar7 + -4);
      *(byte **)(param_1 + 8) = pbVar7;
      *(ulonglong *)(param_1 + 0x30) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
      bVar1 = (&DAT_180575aa8)[*pbVar7 & 0xf];
      uVar4 = *(uint *)(((longlong)pbVar7 - (longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf]) + -4);
      *(longlong *)(param_1 + 8) =
           (longlong)pbVar7 - (longlong)(char)(&DAT_180575a98)[*pbVar7 & 0xf];
      *(ulonglong *)(param_1 + 0x38) =
           (ulonglong)(*(int *)(param_1 + 0x48) + (uVar4 >> (bVar1 & 0x1f)));
    }
  }
  else {
    if (bVar5 == 0x10) {
      iVar3 = *(int *)pbVar7;
      *(byte **)(param_1 + 8) = pbVar6 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      return;
    }
    if (bVar5 == 0x20) {
      iVar3 = *(int *)pbVar7;
      *(byte **)(param_1 + 8) = pbVar6 + 8;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      iVar3 = *(int *)(pbVar6 + 8);
      *(byte **)(param_1 + 8) = pbVar6 + 0xc;
      *(longlong *)(param_1 + 0x38) = (longlong)iVar3;
      return;
    }
  }
  return;
}



/* ===== 1804f23b0 FUN_1804f23b0 ===== */

undefined8 FUN_1804f23b0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      lVar2 = FUN_1804ef840();
      *(undefined4 *)(lVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}



/* ===== 1804f2440 ExFilterRethrowFH4 ===== */

/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1804f23b0(param_1,param_2,param_4);
  if (iVar1 == 0) {
    lVar2 = FUN_1804ef840();
    *(int *)(lVar2 + 0x78) = param_3;
  }
  return iVar1;
}



/* ===== 1804f2470 FUN_1804f2470 ===== */

void FUN_1804f2470(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar3 = FUN_1804eeac0();
  iVar2 = FUN_1804efb00(param_1,param_2,param_3);
  lVar4 = FUN_1804ef840();
  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = FUN_1804eeac0();
    lVar5 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar5 + lVar4);
    iVar1 = *(int *)(param_3 + 8);
    iVar6 = iVar2;
    lVar4 = FUN_1804eeac0();
    if (*(int *)(lVar4 + iVar1 + 4 + lVar5) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar4 = FUN_1804eeac0();
      iVar1 = *(int *)(lVar4 + iVar1 + 4 + lVar5);
      lVar4 = FUN_1804eeac0();
      if (lVar4 + iVar1 != 0) {
        FUN_1804efbc0(param_1,param_2,param_3,iVar2,iVar6);
        iVar1 = *(int *)(param_3 + 8);
        lVar4 = FUN_1804eeac0();
        if (*(int *)(lVar4 + iVar1 + 4 + lVar5) == 0) {
          lVar4 = 0;
        }
        else {
          iVar1 = *(int *)(param_3 + 8);
          lVar4 = FUN_1804eeac0();
          iVar1 = *(int *)(lVar4 + iVar1 + 4 + lVar5);
          lVar4 = FUN_1804eeac0();
          lVar4 = lVar4 + iVar1;
        }
        _CallSettingFrame(lVar4,param_1,0x103);
        FUN_1804eeb00(uVar3);
      }
    }
  }
  lVar4 = FUN_1804ef840();
  if (0 < *(int *)(lVar4 + 0x30)) {
    lVar4 = FUN_1804ef840();
    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_1804efbc0(param_1,param_2,param_3,iVar2);
  return;
}



/* ===== 1804f2620 FUN_1804f2620 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f2620(longlong *param_1,ulonglong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  int local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  ulonglong local_e0;
  int local_d8;
  uint *local_d0;
  byte *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong local_98;
  byte *local_90;
  uint *local_88;
  byte *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  byte *local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_138;
  local_108 = param_4;
  local_e0 = param_2;
  local_d8 = param_4;
  local_b8 = param_1;
  local_a0 = param_1;
  local_98 = param_2;
  uVar6 = FUN_1804eeac0();
  local_c0 = uVar6;
  iVar5 = FUN_1804f2a00(param_1,param_2,param_3);
  lVar7 = FUN_1804ef840();
  *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
  local_60 = (byte *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    local_68[0] = 0;
  }
  else {
    local_60 = (byte *)(*(longlong *)(param_2 + 8) + (longlong)*(int *)(param_3 + 8));
    uVar9 = *local_60 & 0xf;
    local_60 = local_60 + -(longlong)(char)(&DAT_180575a98)[uVar9];
    local_68[0] = *(uint *)(local_60 + -4) >> ((&DAT_180575aa8)[uVar9] & 0x1f);
  }
  local_f8 = local_68;
  local_88 = local_68;
  pbVar10 = local_60 + -1;
  bVar2 = false;
  bVar3 = false;
  iVar14 = 0;
  pbVar12 = local_60;
  pbVar8 = pbVar10;
  if (0 < (int)local_68[0]) {
    do {
      if (iVar14 == iVar5) {
        pbVar10 = pbVar12;
        bVar2 = true;
      }
      if (iVar14 == local_108) {
        pbVar8 = pbVar12;
        bVar3 = true;
      }
      if ((bVar2) && (bVar3)) break;
      pbVar11 = pbVar12 + -(longlong)(char)(&DAT_180575a98)[*pbVar12 & 0xf];
      uVar9 = *(uint *)(pbVar11 + -4) >> ((&DAT_180575aa8)[*pbVar12 & 0xf] & 0x1f);
      local_58 = CONCAT44(uVar9,uVar9 >> 2) & 0x3ffffffff;
      if ((uVar9 & 3) - 1 < 2) {
        pbVar12 = pbVar11 + (4 - (longlong)(char)(&DAT_180575a98)[pbVar11[4] & 0xf]);
        uStack_50 = CONCAT44(*(uint *)(pbVar12 + -4) >> ((&DAT_180575aa8)[pbVar11[4] & 0xf] & 0x1f),
                             *(undefined4 *)pbVar11);
      }
      else {
        pbVar12 = pbVar11;
        if ((uVar9 & 3) == 3) {
          pbVar12 = pbVar11 + 4;
          uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)pbVar11);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)local_68[0]);
    param_2 = local_e0;
  }
  uStack_f0 = pbVar10;
  local_b0 = param_1;
  local_a8 = uVar6;
  local_90 = pbVar8;
  local_80 = pbVar8;
  while( true ) {
    local_d0 = local_68;
    local_c8 = local_60;
    if ((pbVar10 < local_60) || (pbVar10 <= pbVar8)) break;
    FUN_1804f2c50(local_f8,&uStack_f0);
    puVar4 = local_f8;
    uVar9 = local_f8[5];
    uVar1 = local_f8[6];
    local_e0 = CONCAT44(local_e0._4_4_,local_f8[7]);
    uStack_f0._0_4_ = SUB84(pbVar10,0);
    uStack_f0._4_4_ = (undefined4)((ulonglong)pbVar10 >> 0x20);
    local_78 = (undefined4)local_f8;
    uStack_74 = local_f8._4_4_;
    uStack_70 = (undefined4)uStack_f0;
    uStack_6c = uStack_f0._4_4_;
    uStack_f0 = pbVar10;
    FUN_1804f2c50(local_f8,&uStack_f0);
    pbVar10 = pbVar10 + -(ulonglong)puVar4[4];
    local_118 = &local_f8;
    uStack_f0 = pbVar10;
    iVar5 = FUN_1804f2cf0(&local_88,local_108,&local_78);
    local_d0 = (uint *)CONCAT44(local_d0._4_4_,iVar5);
    local_e8 = 0;
    if (uVar9 != 0) {
      local_e8 = uVar1;
    }
    if (local_e8 != 0) {
      *(int *)(param_2 + 0x48) = iVar5 + 2;
      if (uVar9 - 1 < 2) {
        puVar13 = (undefined8 *)((local_e0 & 0xffffffff) + *local_b0);
        if (uVar9 == 2) {
          puVar13 = (undefined8 *)*puVar13;
        }
        _CallSettingFrameEncoded
                  (*(longlong *)(param_2 + 8) + (longlong)(int)local_e8,*local_b0,puVar13,0x103);
      }
      else {
        _CallSettingFrame(*(longlong *)(param_2 + 8) + (longlong)(int)local_e8,local_b8,0x103);
      }
      FUN_1804eeb00(local_c0);
    }
  }
  lVar7 = FUN_1804ef840(local_f8);
  if (0 < *(int *)(lVar7 + 0x30)) {
    lVar7 = FUN_1804ef840();
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
  }
  return;
}



/* ===== 1804f2a00 FUN_1804f2a00 ===== */

int FUN_1804f2a00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1804efc80(param_3);
  if (*(int *)(param_2 + 0x48) == 0) {
    lVar2 = FUN_1804ef840();
    if (*(int *)(lVar2 + 0x78) != -2) {
      lVar2 = FUN_1804ef840();
      iVar1 = *(int *)(lVar2 + 0x78);
      lVar2 = FUN_1804ef840();
      *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
    }
    return iVar1;
  }
  lVar2 = FUN_1804ef840();
  if (*(int *)(lVar2 + 0x78) != -2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(int *)(param_2 + 0x48) + -2;
}



/* ===== 1804f2a70 FUN_1804f2a70 ===== */

uint FUN_1804f2a70(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(int *)(param_2 + 8) == 0) {
    return 0;
  }
  pbVar2 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_2 + 8));
  uVar1 = *pbVar2 & 0xf;
  return *(uint *)(pbVar2 + (-4 - (longlong)(char)(&DAT_180575a98)[uVar1])) >>
         ((&DAT_180575aa8)[uVar1] & 0x1f);
}



/* ===== 1804f2ab0 FUN_1804f2ab0 ===== */

undefined1 FUN_1804f2ab0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_res10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = 0;
  iVar9 = 0;
  local_res10 = 0;
  if (0 < *param_2) {
    do {
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_1804eeae0();
      piVar8 = (int *)((longlong)iVar6 + lVar4 + 4);
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_1804eeae0();
      iVar6 = *(int *)(lVar4 + iVar6);
      if (0 < iVar6) {
        do {
          iVar3 = *piVar8;
          lVar4 = FUN_1804eeae0();
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          iVar1 = param_2[1];
          lVar5 = FUN_1804eeac0();
          iVar3 = FUN_1804f1560(lVar5 + (longlong)iVar9 * 0x14 + (longlong)iVar1,iVar3 + lVar4,uVar2
                               );
          if (iVar3 != 0) {
            uVar7 = 1;
            local_res10 = 1;
            goto LAB_1804f2b7c;
          }
          iVar6 = iVar6 + -1;
          piVar8 = piVar8 + 1;
        } while (0 < iVar6);
        uVar7 = local_res10;
      }
LAB_1804f2b7c:
      iVar9 = iVar9 + 1;
    } while (iVar9 < *param_2);
  }
  return uVar7;
}



/* ===== 1804f2bc0 FUN_1804f2bc0 ===== */

undefined8 FUN_1804f2bc0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar2 = FUN_1804eeac0();
      if (*(int *)(lVar2 + iVar1 + 4 + (longlong)iVar3 * 0x14) == 0) {
        lVar2 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar2 = FUN_1804eeac0();
        iVar1 = *(int *)(lVar2 + (longlong)iVar3 * 0x14 + 4 + (longlong)iVar1);
        lVar2 = FUN_1804eeac0();
        lVar2 = lVar2 + iVar1;
      }
      iVar1 = FUN_1804ef750(lVar2 + 8,0x180c9a798);
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return 0;
}



/* ===== 1804f2c50 FUN_1804f2c50 ===== */

void FUN_1804f2c50(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar3 = *(byte *)*param_2 & 0xf;
  lVar5 = *param_2 - (longlong)(char)(&DAT_180575a98)[uVar3];
  uVar3 = *(uint *)(lVar5 + -4) >> ((&DAT_180575aa8)[uVar3] & 0x1f);
  *param_2 = lVar5;
  uVar4 = uVar3 & 3;
  *(uint *)(param_1 + 0x10) = uVar3 >> 2;
  *(uint *)(param_1 + 0x14) = uVar4;
  if (uVar4 - 1 < 2) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar3 = *(byte *)*param_2 & 0xf;
    bVar1 = (&DAT_180575aa8)[uVar3];
    lVar5 = *param_2 - (longlong)(char)(&DAT_180575a98)[uVar3];
    uVar3 = *(uint *)(lVar5 + -4);
    *param_2 = lVar5;
    *(uint *)(param_1 + 0x1c) = uVar3 >> (bVar1 & 0x1f);
  }
  else if (uVar4 == 3) {
    uVar2 = *(undefined4 *)*param_2;
    *param_2 = (longlong)((undefined4 *)*param_2 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    return;
  }
  return;
}



/* ===== 1804f2cf0 FUN_1804f2cf0 ===== */

int FUN_1804f2cf0(undefined8 *param_1,int param_2,longlong param_3,int param_4,undefined8 *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_10;
  
  uVar1 = *(ulonglong *)(param_3 + 8);
  uVar2 = param_5[1];
  if ((uVar1 < uVar2) || (local_10 = param_1[1], uVar2 < local_10)) {
    return -1;
  }
  if ((longlong)(uVar2 - local_10) < (longlong)(uVar1 - uVar2)) {
    uVar3 = *param_1;
    param_4 = param_2;
    if (local_10 < uVar2) {
      do {
        FUN_1804f2c50(uVar3,&local_10);
        param_4 = param_4 + 1;
      } while (local_10 < (ulonglong)param_5[1]);
    }
  }
  else {
    uVar3 = *param_5;
    local_10 = uVar2;
    if (uVar2 < uVar1) {
      do {
        FUN_1804f2c50(uVar3,&local_10);
        param_4 = param_4 + -1;
      } while (local_10 < *(ulonglong *)(param_3 + 8));
    }
  }
  return param_4;
}



/* ===== 1804f2dd0 FUN_1804f2dd0 ===== */

void FUN_1804f2dd0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  FUN_1804f2220();
  uVar10 = 0;
  if (param_2 != 0) {
    do {
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      bVar2 = **(byte **)(param_1 + 8);
      pbVar9 = *(byte **)(param_1 + 8) + 1;
      *(byte *)(param_1 + 0x18) = bVar2;
      *(byte **)(param_1 + 8) = pbVar9;
      if ((bVar2 & 1) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(longlong)(char)(&DAT_180575a98)[bVar7 & 0xf];
        *(uint *)(param_1 + 0x1c) = *(uint *)(pbVar9 + -4) >> ((&DAT_180575aa8)[bVar7 & 0xf] & 0x1f)
        ;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      if ((bVar2 & 2) != 0) {
        uVar4 = *(undefined4 *)pbVar9;
        pbVar9 = pbVar9 + 4;
        *(byte **)(param_1 + 8) = pbVar9;
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      if ((bVar2 & 4) != 0) {
        bVar7 = *pbVar9;
        pbVar9 = pbVar9 + -(longlong)(char)(&DAT_180575a98)[bVar7 & 0xf];
        *(uint *)(param_1 + 0x24) = *(uint *)(pbVar9 + -4) >> ((&DAT_180575aa8)[bVar7 & 0xf] & 0x1f)
        ;
        *(byte **)(param_1 + 8) = pbVar9;
      }
      pbVar1 = pbVar9 + 4;
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)pbVar9;
      bVar7 = bVar2 & 0x30;
      *(byte **)(param_1 + 8) = pbVar1;
      if ((bVar2 & 8) == 0) {
        if (bVar7 == 0x10) {
          bVar2 = (&DAT_180575aa8)[*pbVar1 & 0xf];
          uVar6 = *(uint *)(((longlong)pbVar1 - (longlong)(char)(&DAT_180575a98)[*pbVar1 & 0xf]) +
                           -4);
          *(longlong *)(param_1 + 8) =
               (longlong)pbVar1 - (longlong)(char)(&DAT_180575a98)[*pbVar1 & 0xf];
          *(ulonglong *)(param_1 + 0x30) =
               (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
        }
        else if (bVar7 == 0x20) {
          cVar3 = (&DAT_180575a98)[*pbVar1 & 0xf];
          bVar2 = (&DAT_180575aa8)[*pbVar1 & 0xf];
          pbVar9 = pbVar1 + -(longlong)cVar3;
          uVar6 = *(uint *)(pbVar9 + -4);
          *(byte **)(param_1 + 8) = pbVar9;
          *(ulonglong *)(param_1 + 0x30) =
               (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          bVar2 = (&DAT_180575aa8)[*pbVar9 & 0xf];
          uVar6 = *(uint *)(pbVar1 + (-(longlong)cVar3 -
                                     (longlong)(char)(&DAT_180575a98)[*pbVar9 & 0xf]) + -4);
          *(byte **)(param_1 + 8) =
               pbVar1 + (-(longlong)cVar3 - (longlong)(char)(&DAT_180575a98)[*pbVar9 & 0xf]);
          uVar8 = (ulonglong)(*(int *)(param_1 + 0x48) + (uVar6 >> (bVar2 & 0x1f)));
          goto LAB_1804f2f90;
        }
      }
      else if (bVar7 == 0x10) {
        iVar5 = *(int *)pbVar1;
        *(byte **)(param_1 + 8) = pbVar9 + 8;
        *(longlong *)(param_1 + 0x30) = (longlong)iVar5;
      }
      else if (bVar7 == 0x20) {
        iVar5 = *(int *)pbVar1;
        *(byte **)(param_1 + 8) = pbVar9 + 8;
        *(longlong *)(param_1 + 0x30) = (longlong)iVar5;
        uVar8 = (ulonglong)*(int *)(pbVar9 + 8);
        *(byte **)(param_1 + 8) = pbVar9 + 0xc;
LAB_1804f2f90:
        *(ulonglong *)(param_1 + 0x38) = uVar8;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
  }
  return;
}



/* ===== 1804f2ff0 FUN_1804f2ff0 ===== */

void FUN_1804f2ff0(void)

{
  FUN_1804f3010();
  return;
}



/* ===== 1804f3010 FUN_1804f3010 ===== */

void FUN_1804f3010(void)

{
  return;
}



/* ===== 1804f3020 FUN_1804f3020 ===== */

void FUN_1804f3020(void)

{
  return;
}



/* ===== 1804f3030 __except_validate_context_record ===== */

/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_18056b840 != _guard_check_icall) {
    if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < *(ulonglong *)(param_1 + 0x98))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}



/* ===== 1804f3070 FUN_1804f3070 ===== */

undefined4 FUN_1804f3070(void)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_180c9f518 + uVar3 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar3 = (ulonglong)DAT_180c9f540;
      uVar2 = DAT_180c9f540;
      while (uVar2 != 0) {
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180c9f518 + uVar3 * 0x28));
        DAT_180c9f540 = DAT_180c9f540 - 1;
      }
      return 0;
    }
    DAT_180c9f540 = DAT_180c9f540 + 1;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return 1;
}



/* ===== 1804f3100 FUN_1804f3100 ===== */

undefined1 FUN_1804f3100(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_180c9f540;
  uVar1 = DAT_180c9f540;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180c9f518 + uVar2 * 0x28));
    DAT_180c9f540 = DAT_180c9f540 - 1;
  }
  return 1;
}



/* ===== 1804f3190 _CallSettingFrame ===== */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_1804f2ff0(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_1804f3020();
  FUN_1804f2ff0(uVar2,*param_2,2);
  return;
}



/* ===== 1804f31d0 FUN_1804f31d0 ===== */

void FUN_1804f31d0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1804f2ff0(param_1,*param_2);
  (*pcVar1)();
  FUN_1804f3020();
  return;
}



/* ===== 1804f3200 FUN_1804f3200 ===== */

void FUN_1804f3200(undefined8 param_1,undefined8 *param_2)

{
  FUN_1804f2ff0(param_1,*param_2,2);
  return;
}



/* ===== 1804f3230 _CallSettingFrameEncoded ===== */

/* Library Function - Single Match
    _CallSettingFrameEncoded
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void _CallSettingFrameEncoded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_1804f2ff0(param_1,param_2,param_4);
  (*pcVar1)(param_3);
  uVar2 = FUN_1804f3020();
  FUN_1804f2ff0(uVar2,param_2,2);
  return;
}



/* ===== 1804f3280 FUN_1804f3280 ===== */

int FUN_1804f3280(undefined4 param_1)

{
  short sVar1;
  float fVar2;
  
  sVar1 = FUN_1805266e0();
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      fVar2 = (float)FUN_180519080(param_1);
      if ((DAT_1808acea8 <= fVar2) && (fVar2 <= DAT_1808accf4)) {
        return (int)fVar2;
      }
    }
    FUN_180526a50(1);
  }
  return 0;
}



/* ===== 1804f32e4 operator()<> ===== */

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
  uVar1 = FUN_1804f7fc8(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1804f3324 operator()<> ===== */

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
  uVar1 = FUN_1804f8220(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1804f3364 operator()<> ===== */

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
  uVar1 = FUN_1804f8358(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1804f33a4 operator()<> ===== */

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
  uVar1 = FUN_1804f7d90(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1804f33e4 operator()<> ===== */

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
  uVar1 = FUN_1804f8104(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1804f3424 operator()<> ===== */

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
  uVar1 = FUN_1804f7eac(param_3);
  FUN_1805110b0(*param_4);
  return uVar1;
}



/* ===== 1804f3464 FUN_1804f3464 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1804f3464(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
                       longlong param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  longlong local_4e0;
  undefined1 *local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  undefined1 local_4c0;
  undefined4 local_4bf;
  undefined2 local_4bb;
  undefined1 local_4b9;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_508;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    *(undefined1 *)(param_5 + 0x30) = 1;
    local_4e0 = param_5;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    local_4e8 = 0;
    FUN_180527688(0,0,0,0);
    return 0xffffffff;
  }
  local_4bf = 0;
  local_4bb = 0;
  local_4b9 = 0;
  local_4c8 = 0;
  if (((param_1 & 2) != 0) || (local_4c0 = 0, param_2 == (undefined1 *)0x0)) {
    local_4c0 = 1;
  }
  local_4b0 = param_5;
  local_58 = &local_4d8;
  local_498 = 0;
  local_4a0 = param_6;
  local_494 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_4d8 = param_2;
  local_4d0 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_1804f95bc(&local_4b8);
  uVar2 = (ulonglong)iVar1;
  if (param_2 == (undefined1 *)0x0) goto LAB_1804f35c9;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if (param_3 == 0) goto LAB_1804f358e;
      if (local_4c8 == param_3) {
        uVar2 = 0xfffffffe;
LAB_1804f360c:
        param_2[param_3 - 1] = 0;
        goto LAB_1804f35c9;
      }
    }
    else {
      if (param_3 == 0) goto LAB_1804f35c9;
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_1804f35c9;
      }
      if (local_4c8 == param_3) goto LAB_1804f360c;
    }
LAB_1804f35c5:
    param_2[local_4c8] = 0;
  }
  else {
    if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_4c8 != param_3) goto LAB_1804f35c5;
      if ((iVar1 < 0) || (uVar2 <= param_3)) goto LAB_1804f35c9;
    }
LAB_1804f358e:
    uVar2 = 0xffffffff;
  }
LAB_1804f35c9:
  FUN_1805277b0(uStack_60);
  return uVar2 & 0xffffffff;
}



/* ===== 1804f3614 FUN_1804f3614 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1804f3614(ulonglong param_1,undefined2 *param_2,ulonglong param_3,longlong param_4,
                       longlong param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  longlong local_4e0;
  undefined2 *local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  undefined1 local_4c0;
  undefined4 local_4bf;
  undefined2 local_4bb;
  undefined1 local_4b9;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined1 local_480;
  undefined2 local_47e;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_508;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined2 *)0x0)))) {
    *(undefined1 *)(param_5 + 0x30) = 1;
    local_4e0 = param_5;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    local_4e8 = 0;
    FUN_180527688(0,0,0,0);
    return 0xffffffff;
  }
  local_4bf = 0;
  local_4bb = 0;
  local_4b9 = 0;
  local_4c8 = 0;
  if (((param_1 & 2) != 0) || (local_4c0 = 0, param_2 == (undefined2 *)0x0)) {
    local_4c0 = 1;
  }
  local_4b0 = param_5;
  local_58 = &local_4d8;
  local_498 = 0;
  local_4a0 = param_6;
  local_494 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_47e = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_4d8 = param_2;
  local_4d0 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_1804fa974(&local_4b8);
  uVar2 = (ulonglong)iVar1;
  if (param_2 == (undefined2 *)0x0) goto LAB_1804f377f;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if (param_3 == 0) goto LAB_1804f3742;
      if (local_4c8 == param_3) {
        uVar2 = 0xfffffffe;
LAB_1804f37c2:
        param_2[param_3 - 1] = 0;
        goto LAB_1804f377f;
      }
    }
    else {
      if (param_3 == 0) goto LAB_1804f377f;
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_1804f377f;
      }
      if (local_4c8 == param_3) goto LAB_1804f37c2;
    }
LAB_1804f377a:
    param_2[local_4c8] = 0;
  }
  else {
    if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_4c8 != param_3) goto LAB_1804f377a;
      if ((iVar1 < 0) || (uVar2 <= param_3)) goto LAB_1804f377f;
    }
LAB_1804f3742:
    uVar2 = 0xffffffff;
  }
LAB_1804f377f:
  FUN_1805277b0(uStack_60);
  return uVar2 & 0xffffffff;
}



/* ===== 1804f37cc FUN_1804f37cc ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1804f37cc(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
                       longlong param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_e88 [32];
  undefined8 local_e68;
  longlong local_e60;
  undefined1 *local_e58;
  ulonglong local_e50;
  ulonglong local_e48;
  undefined1 local_e40;
  undefined4 local_e3f;
  undefined2 local_e3b;
  undefined1 local_e39;
  ulonglong local_e38;
  longlong local_e30;
  longlong local_e28;
  undefined8 local_e20;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined8 local_e10;
  undefined4 local_e08;
  undefined2 local_e00;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined1 **local_9d8;
  undefined4 local_9d0;
  undefined8 local_9c8;
  longlong local_9c0;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e88;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    *(undefined1 *)(param_5 + 0x30) = 1;
    local_e60 = param_5;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    local_e68 = 0;
    FUN_180527688(0,0,0,0);
    return 0xffffffff;
  }
  local_e3f = 0;
  local_e3b = 0;
  local_e39 = 0;
  local_e48 = 0;
  if (((param_1 & 2) != 0) || (local_e40 = 0, param_2 == (undefined1 *)0x0)) {
    local_e40 = 1;
  }
  local_58 = 0xffffffff;
  local_54 = 0xffffffff;
  local_e30 = param_5;
  local_9d8 = &local_e58;
  local_e20 = param_6;
  local_e18 = 0;
  local_e14 = 0;
  local_e10 = 0;
  local_e08 = 0;
  local_e00 = 0;
  local_df0 = 0;
  local_dec = 0;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d0 = 0;
  local_9c8 = 0;
  local_e58 = param_2;
  local_e50 = param_3;
  local_e38 = param_1;
  local_e28 = param_4;
  local_9c0 = param_4;
  iVar1 = FUN_1804f9924(&local_e38);
  uVar2 = (ulonglong)iVar1;
  if (param_2 == (undefined1 *)0x0) goto LAB_1804f394d;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if (param_3 == 0) goto LAB_1804f3912;
      if (local_e48 == param_3) {
        uVar2 = 0xfffffffe;
LAB_1804f3990:
        param_2[param_3 - 1] = 0;
        goto LAB_1804f394d;
      }
    }
    else {
      if (param_3 == 0) goto LAB_1804f394d;
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_1804f394d;
      }
      if (local_e48 == param_3) goto LAB_1804f3990;
    }
LAB_1804f3949:
    param_2[local_e48] = 0;
  }
  else {
    if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_e48 != param_3) goto LAB_1804f3949;
      if ((iVar1 < 0) || (uVar2 <= param_3)) goto LAB_1804f394d;
    }
LAB_1804f3912:
    uVar2 = 0xffffffff;
  }
LAB_1804f394d:
  FUN_1805277b0(uStack_9e0);
  return uVar2 & 0xffffffff;
}



/* ===== 1804f3998 FUN_1804f3998 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1804f3998(ulonglong param_1,undefined2 *param_2,ulonglong param_3,longlong param_4,
                       longlong param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_e88 [32];
  undefined8 local_e68;
  longlong local_e60;
  undefined2 *local_e58;
  ulonglong local_e50;
  ulonglong local_e48;
  undefined1 local_e40;
  undefined4 local_e3f;
  undefined2 local_e3b;
  undefined1 local_e39;
  ulonglong local_e38;
  longlong local_e30;
  longlong local_e28;
  undefined8 local_e20;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined8 local_e10;
  undefined4 local_e08;
  undefined1 local_e00;
  undefined2 local_dfe;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined2 **local_9d8;
  undefined4 local_9d0;
  undefined8 local_9c8;
  longlong local_9c0;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_e88;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined2 *)0x0)))) {
    *(undefined1 *)(param_5 + 0x30) = 1;
    local_e60 = param_5;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    local_e68 = 0;
    FUN_180527688(0,0,0,0);
    return 0xffffffff;
  }
  local_e3f = 0;
  local_e3b = 0;
  local_e39 = 0;
  local_e48 = 0;
  if (((param_1 & 2) != 0) || (local_e40 = 0, param_2 == (undefined2 *)0x0)) {
    local_e40 = 1;
  }
  local_58 = 0xffffffff;
  local_54 = 0xffffffff;
  local_e30 = param_5;
  local_9d8 = &local_e58;
  local_e20 = param_6;
  local_e18 = 0;
  local_e14 = 0;
  local_e10 = 0;
  local_e08 = 0;
  local_e00 = 0;
  local_dfe = 0;
  local_df0 = 0;
  local_dec = 0;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d0 = 0;
  local_9c8 = 0;
  local_e58 = param_2;
  local_e50 = param_3;
  local_e38 = param_1;
  local_e28 = param_4;
  local_9c0 = param_4;
  iVar1 = FUN_1804fac30(&local_e38);
  uVar2 = (ulonglong)iVar1;
  if (param_2 == (undefined2 *)0x0) goto LAB_1804f3b1f;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if (param_3 == 0) goto LAB_1804f3ae2;
      if (local_e48 == param_3) {
        uVar2 = 0xfffffffe;
LAB_1804f3b62:
        param_2[param_3 - 1] = 0;
        goto LAB_1804f3b1f;
      }
    }
    else {
      if (param_3 == 0) goto LAB_1804f3b1f;
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_1804f3b1f;
      }
      if (local_e48 == param_3) goto LAB_1804f3b62;
    }
LAB_1804f3b1a:
    param_2[local_e48] = 0;
  }
  else {
    if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_e48 != param_3) goto LAB_1804f3b1a;
      if ((iVar1 < 0) || (uVar2 <= param_3)) goto LAB_1804f3b1f;
    }
LAB_1804f3ae2:
    uVar2 = 0xffffffff;
  }
LAB_1804f3b1f:
  FUN_1805277b0(uStack_9e0);
  return uVar2 & 0xffffffff;
}



/* ===== 1804f3b6c FUN_1804f3b6c ===== */

bool FUN_1804f3b6c(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 < 0x8000000000000000) {
    param_2 = param_2 * 2;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (param_2 < 0x401)) ||
       (param_2 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar2 = true;
    }
    else {
      lVar1 = _malloc_base(param_2);
      bVar2 = lVar1 != 0;
      if (bVar2) {
        FUN_1805277b0(*(undefined8 *)(param_1 + 0x408));
        *(longlong *)(param_1 + 0x408) = lVar1;
        *(ulonglong *)(param_1 + 0x400) = param_2;
      }
      FUN_1805277b0(0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar2 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar2;
}



/* ===== 1804f3c14 FUN_1804f3c14 ===== */

bool FUN_1804f3c14(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 < 0x4000000000000000) {
    param_2 = param_2 * 4;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (param_2 < 0x401)) ||
       (param_2 <= *(ulonglong *)(param_1 + 0x400))) {
      bVar2 = true;
    }
    else {
      lVar1 = _malloc_base(param_2);
      bVar2 = lVar1 != 0;
      if (bVar2) {
        FUN_1805277b0(*(undefined8 *)(param_1 + 0x408));
        *(longlong *)(param_1 + 0x408) = lVar1;
        *(ulonglong *)(param_1 + 0x400) = param_2;
      }
      FUN_1805277b0(0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar2 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar2;
}



/* ===== 1804f3cc0 FUN_1804f3cc0 ===== */

undefined8 FUN_1804f3cc0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    pcVar5 = *(char **)(param_1 + 0x18);
    *(char **)(param_1 + 0x18) = pcVar5 + 8;
    *param_2 = (longlong)*pcVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (longlong)**(char **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f3dcc FUN_1804f3dcc ===== */

undefined8 FUN_1804f3dcc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    pcVar5 = *(char **)(param_1 + 0x18);
    *(char **)(param_1 + 0x18) = pcVar5 + 8;
    *param_2 = (longlong)*pcVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (longlong)**(char **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f877c(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f3ed8 FUN_1804f3ed8 ===== */

undefined8 FUN_1804f3ed8(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    pbVar5 = *(byte **)(param_1 + 0x18);
    *(byte **)(param_1 + 0x18) = pbVar5 + 8;
    *param_2 = (ulonglong)*pbVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (ulonglong)**(byte **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f3fe0 FUN_1804f3fe0 ===== */

undefined8 FUN_1804f3fe0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    pbVar5 = *(byte **)(param_1 + 0x18);
    *(byte **)(param_1 + 0x18) = pbVar5 + 8;
    *param_2 = (ulonglong)*pbVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (ulonglong)**(byte **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f877c(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f40ec FUN_1804f40ec ===== */

undefined8 FUN_1804f40ec(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    psVar5 = *(short **)(param_1 + 0x18);
    *(short **)(param_1 + 0x18) = psVar5 + 4;
    *param_2 = (longlong)*psVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (longlong)**(short **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined1 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f8548(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



/* ===== 1804f41f8 FUN_1804f41f8 ===== */

undefined8 FUN_1804f41f8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  longlong lVar6;
  char cVar7;
  
  if (*(int *)(param_1 + 0x474) == 1) {
    psVar5 = *(short **)(param_1 + 0x18);
    *(short **)(param_1 + 0x18) = psVar5 + 4;
    *param_2 = (longlong)*psVar5;
    return 1;
  }
  uVar3 = *(uint *)(param_1 + 0xde4);
  if (99 < uVar3) {
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x30) = 1;
    *(undefined4 *)(lVar6 + 0x2c) = 0x16;
    FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
    return 0;
  }
  if (*(int *)(param_1 + 0x470) != 1) {
    *param_2 = (longlong)**(short **)(param_1 + 0x488 + (longlong)(int)uVar3 * 0x18);
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined2 *)(param_1 + 0x3a);
  piVar1 = (int *)(param_1 + ((longlong)(int)uVar3 * 3 + 0x90) * 8);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(undefined2 *)(piVar1 + 1) = uVar2;
    piVar1[4] = iVar4;
  }
  else {
    cVar7 = FUN_1804f877c(param_1,piVar1,1,uVar2,iVar4);
    if (cVar7 == '\0') {
      lVar6 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar6 + 0x30) = 1;
      *(undefined4 *)(lVar6 + 0x2c) = 0x16;
      FUN_180527688(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return 0;
    }
  }
  return 1;
}



