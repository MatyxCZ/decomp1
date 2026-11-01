/* ===== 180016bc0 FUN_180016bc0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180016bc0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  bool bVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  puVar9 = auStack_78;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 4);
  *(undefined ***)(param_2 + 2) = &PTR_vftable_18091a158;
  if (lVar2 == 0) {
    *param_2 = 3;
    param_2[1] = local_58._4_4_;
    uVar4 = ((ulonglong)local_58 >> 0x28) << 8;
  }
  else {
    *param_2 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 7;
    local_58 = (undefined8 *)0x0;
    uVar8 = *(ulonglong *)(param_1 + 4);
    if (7 < uVar8) {
      if (0x7ffffffffffffffe < uVar8) goto LAB_180016e9a;
      uVar4 = uVar8 | 7;
      if (uVar4 < 0x7fffffffffffffff) {
        if (uVar4 < 10) {
          uVar4 = 10;
        }
        uVar8 = uVar4 + 1;
        if (0x7fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_18000d840();
        }
      }
      else {
        uVar8 = 0x7fffffffffffffff;
        uVar4 = 0x7ffffffffffffffe;
      }
      puVar5 = (undefined8 *)FUN_18000fb70(uVar8 * 2);
      *(undefined2 *)puVar5 = (undefined2)local_58;
      uVar8 = *(ulonglong *)(param_1 + 4);
      local_58 = puVar5;
      local_40 = uVar4;
    }
    local_48 = 0;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      param_1 = *(uint **)param_1;
    }
    puVar1 = (uint *)((longlong)param_1 + uVar8 * 2);
    for (puVar6 = (uint *)FUN_180013e50(param_1,puVar1);
        (puVar6 != puVar1 && (((short)*puVar6 == 0x5c || ((short)*puVar6 == 0x2f))));
        puVar6 = (uint *)((longlong)puVar6 + 2)) {
    }
    if ((((puVar6 != param_1) && (5 < (longlong)puVar1 - (longlong)puVar6)) &&
        ((*puVar6 & 0xffffffdf) - 0x3a0041 < 0x1a)) &&
       (((short)puVar6[1] == 0x5c || ((short)puVar6[1] == 0x2f)))) {
      puVar6 = puVar6 + 1;
    }
    FUN_180025260(&local_58,param_1,(longlong)puVar6 - (longlong)param_1 >> 1);
    uVar8 = 0;
    if (puVar6 == puVar1) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      do {
        puVar10 = puVar6;
        do {
          if (((short)*puVar10 != 0x5c) && ((short)*puVar10 != 0x2f)) break;
          puVar10 = (uint *)((longlong)puVar10 + 2);
        } while (puVar10 != puVar1);
        for (; ((puVar10 != puVar1 && ((short)*puVar10 != 0x5c)) && ((short)*puVar10 != 0x2f));
            puVar10 = (uint *)((longlong)puVar10 + 2)) {
        }
        FUN_180025260(&local_58,puVar6,(longlong)puVar10 - (longlong)puVar6 >> 1);
        puVar5 = &local_58;
        if (7 < local_40) {
          puVar5 = local_58;
        }
        uVar4 = FUN_1804e5650(puVar5);
        uVar7 = (uint)(uVar4 >> 0x20);
        if (uVar7 != 0) {
          if (uVar7 < 0x41) {
            if (((uVar7 != 0x40) && (uVar7 != 2)) && (uVar7 != 3)) {
              bVar11 = uVar7 == 0x35;
              goto LAB_180016df9;
            }
          }
          else if ((uVar7 != 0x7b) && (uVar7 != 0xa1)) {
            bVar11 = uVar7 == 0x10b;
LAB_180016df9:
            if (!bVar11) {
              uVar8 = uVar4 >> 0x20;
            }
          }
        }
        puVar6 = puVar10;
      } while (puVar10 != puVar1);
      if ((uVar7 != 0) && ((uint)uVar8 != 0)) {
        uVar7 = (uint)uVar8;
      }
    }
    *param_2 = uVar7;
    param_2[1] = local_58._4_4_;
    *(undefined ***)(param_2 + 2) = &PTR_vftable_18091a158;
    if (7 < local_40) {
      uVar8 = local_40 * 2 + 2;
      puVar5 = local_58;
      if (0xfff < uVar8) {
        puVar5 = (undefined8 *)local_58[-1];
        if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)puVar5))) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar9 = auStack_70;
LAB_180016e9a:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar9 + -8) = 0x180016e9f;
          FUN_180011990();
        }
        uVar8 = local_40 * 2 + 0x29;
      }
      thunk_FUN_1803d64e0(puVar5,uVar8);
    }
    uVar4 = uVar4 & 0xff;
  }
  return uVar4;
}



/* ===== 180016eb0 FUN_180016eb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180016eb0(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  ulonglong uVar6;
  undefined8 *****pppppuVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [24];
  undefined2 local_158;
  undefined1 local_148;
  undefined8 *local_140 [2];
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  ulonglong local_110;
  ulonglong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  ulonglong uStack_e8;
  undefined8 *****local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined8 *****local_c0 [2];
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *****local_78;
  longlong local_70;
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_178;
  *param_3 = 0;
  *(undefined ***)(param_3 + 2) = &PTR_vftable_18091a158;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 7;
  local_120 = (undefined8 *)0x0;
  local_140[0] = param_1;
  local_130 = param_3;
  uVar3 = FUN_1800168b0(&local_120);
  if (uVar3 == 0) {
    *(undefined4 *)param_1 = (undefined4)local_120;
    *(undefined4 *)((longlong)param_1 + 4) = local_120._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_118._4_4_;
    param_1[2] = local_110;
    param_1[3] = uStack_108;
    local_110 = 0;
    uStack_108 = 7;
    local_120 = (undefined8 *)((ulonglong)local_120 & 0xffffffffffff0000);
    goto LAB_1800174e0;
  }
  if (uVar3 < 0x41) {
    if (((uVar3 != 0x40) && (uVar3 != 2)) && (uVar3 != 3)) {
      bVar13 = uVar3 == 0x35;
LAB_180016f7b:
      if (!bVar13) {
        *param_3 = uVar3;
        param_3[1] = local_130._4_4_;
        *(undefined ***)(param_3 + 2) = &PTR_vftable_18091a158;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 7;
        *(undefined2 *)param_1 = 0;
        goto LAB_1800174e0;
      }
    }
  }
  else if ((uVar3 != 0x7b) && (uVar3 != 0xa1)) {
    bVar13 = uVar3 == 0x10b;
    goto LAB_180016f7b;
  }
  FUN_180014560(param_2,local_c0);
  pppppuVar7 = local_c0;
  if (7 < local_a8) {
    pppppuVar7 = local_c0[0];
  }
  psVar9 = (short *)((longlong)pppppuVar7 + local_b0 * 2);
  for (psVar5 = (short *)FUN_180013e50(pppppuVar7);
      (psVar5 != psVar9 && ((*psVar5 == 0x5c || (*psVar5 == 0x2f)))); psVar5 = psVar5 + 1) {
  }
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_180024d40(&local_100,pppppuVar7,(longlong)psVar5 - (longlong)pppppuVar7 >> 1);
  pppppuVar7 = local_c0;
  if (7 < local_a8) {
    pppppuVar7 = local_c0[0];
  }
  psVar9 = (short *)((longlong)pppppuVar7 + local_b0 * 2);
  for (psVar5 = (short *)FUN_180013e50();
      (psVar5 != psVar9 && ((*psVar5 == 0x5c || (*psVar5 == 0x2f)))); psVar5 = psVar5 + 1) {
  }
  local_e0 = (undefined8 *****)0x0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  FUN_180024d40(&local_e0,psVar5,(longlong)psVar9 - (longlong)psVar5 >> 1);
  bVar13 = true;
  FUN_180015ea0(&local_e0,&local_70);
  puVar10 = auStack_178;
  pppppuVar7 = &local_e0;
  if (7 < local_c8) {
    pppppuVar7 = local_e0;
  }
  lVar1 = (longlong)pppppuVar7 + local_d0 * 2;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 7;
  local_98 = 0;
  local_78 = &local_e0;
  local_a0 = lVar1;
  while (local_70 != lVar1) {
    iVar4 = 0;
    FUN_180013f60(&local_100,local_68);
    if (bVar13) {
      local_110 = 0;
      puVar8 = &local_120;
      if (7 < uStack_108) {
        puVar8 = local_120;
      }
      *(undefined2 *)puVar8 = 0;
      if (local_f0 != 0) {
        puVar8 = &local_100;
        if (7 < uStack_e8) {
          puVar8 = local_100;
        }
        uVar3 = FUN_1804e5b70(local_140,puVar8,0x80,0x2000000);
        uVar6 = local_110;
        if (uVar3 != 0) {
          FUN_1804e4fe0(local_140[0]);
LAB_180017328:
          if (uVar3 < 0x41) {
            if (((uVar3 != 0x40) && (uVar3 != 2)) && (uVar3 != 3)) {
              bVar13 = uVar3 == 0x35;
LAB_18001734f:
              if (!bVar13) {
                *local_130 = uVar3;
                local_130[1] = local_130._4_4_;
                *(undefined ***)(local_130 + 2) = &PTR_vftable_18091a158;
                param_1[2] = 0;
                param_1[3] = 0;
                *param_1 = 0;
                param_1[1] = 0;
                param_1[2] = 0;
                param_1[3] = 7;
                *(undefined2 *)param_1 = 0;
                FUN_1800289e0(&local_98);
                FUN_1800289e0(local_68);
                goto LAB_1800174c1;
              }
            }
          }
          else if ((uVar3 != 0x7b) && (uVar3 != 0xa1)) {
            bVar13 = uVar3 == 0x10b;
            goto LAB_18001734f;
          }
          bVar13 = false;
          goto LAB_180017475;
        }
        if (local_110 < 0x104) {
          uVar12 = 0x104 - local_110;
          if (uStack_108 - local_110 < uVar12) {
            local_158 = 0;
            FUN_180029680(&local_120,uVar12,local_148,uVar12);
          }
          else {
            local_110 = 0x104;
            puVar8 = &local_120;
            if (7 < uStack_108) {
              puVar8 = local_120;
            }
            if (uVar12 != 0) {
              puVar11 = (undefined2 *)((longlong)puVar8 + uVar6 * 2);
              for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
            }
            *(undefined2 *)(puVar8 + 0x41) = 0;
          }
        }
        else {
          local_110 = 0x104;
          puVar8 = &local_120;
          if (7 < uStack_108) {
            puVar8 = local_120;
          }
          *(undefined2 *)(puVar8 + 0x41) = 0;
        }
        do {
          while( true ) {
            uVar3 = (uint)local_110;
            puVar8 = &local_120;
            if (7 < uStack_108) {
              puVar8 = local_120;
            }
            uVar6 = FUN_1804e57f0(local_140[0],puVar8,local_110 & 0xffffffff,iVar4);
            if ((uint)uVar6 != 0) break;
            uVar3 = (uint)(uVar6 >> 0x20);
            if ((uVar3 != 3) || (iVar4 != 0)) {
              local_110 = 0;
              puVar8 = &local_120;
              if (7 < uStack_108) {
                puVar8 = local_120;
              }
              *(undefined2 *)puVar8 = 0;
              FUN_1804e4fe0(local_140[0]);
              if (uVar3 == 0) goto LAB_180017409;
              goto LAB_180017328;
            }
            iVar4 = 2;
          }
          FUN_1800246c0(&local_120,uVar6 & 0xffffffff,0);
        } while (uVar3 <= (uint)uVar6);
        FUN_1804e4fe0(local_140[0]);
        if (iVar4 == 0) {
          puVar8 = &local_120;
          if (7 < uStack_108) {
            puVar8 = local_120;
          }
          if (((local_110 < 6) || (iVar4 = FUN_180028bc0(puVar8,L"\\\\?\\",4), iVar4 != 0)) ||
             (0x19 < (*(uint *)(puVar8 + 1) & 0xffffffdf) - 0x3a0041)) {
            puVar8 = &local_120;
            if (7 < uStack_108) {
              puVar8 = local_120;
            }
            if ((7 < local_110) && (iVar4 = FUN_180028bc0(puVar8,L"\\\\?\\UNC\\",8), iVar4 == 0)) {
              if (local_110 < 2) goto LAB_18001756d;
              uVar6 = 6;
              if (local_110 - 2 < 6) {
                uVar6 = local_110 - 2;
              }
              puVar8 = &local_120;
              if (7 < uStack_108) {
                puVar8 = local_120;
              }
              uVar12 = local_110 - uVar6;
              FUN_180540530((undefined2 *)((longlong)puVar8 + 4),
                            (undefined2 *)((longlong)puVar8 + (uVar6 + 2) * 2),uVar12 * 2 + -2);
              local_110 = uVar12;
            }
          }
          else {
            uVar6 = 4;
            if (local_110 < 4) {
              uVar6 = local_110;
            }
            puVar8 = &local_120;
            if (7 < uStack_108) {
              puVar8 = local_120;
            }
            uVar12 = local_110 - uVar6;
            FUN_180540530(puVar8,(undefined2 *)((longlong)puVar8 + uVar6 * 2),uVar12 * 2 + 2);
            local_110 = uVar12;
          }
        }
        else {
          FUN_180025060(&local_120);
        }
      }
LAB_180017409:
      if (7 < uStack_e8) {
        uVar6 = uStack_e8 * 2 + 2;
        puVar8 = local_100;
        if (0xfff < uVar6) {
          puVar8 = (undefined8 *)local_100[-1];
          if (0x1f < (ulonglong)((longlong)local_100 + (-8 - (longlong)puVar8))) {
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar10 = auStack_170;
LAB_18001756d:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar10 + -8) = &UNK_180017572;
            FUN_18002a1a0();
          }
          uVar6 = uStack_e8 * 2 + 0x29;
        }
        thunk_FUN_1803d64e0(puVar8,uVar6);
      }
      local_100 = local_120;
      uStack_f8 = uStack_118;
      local_f0 = local_110;
      uStack_e8 = uStack_108;
      local_110 = 0;
      uStack_108 = 7;
      local_120 = (undefined8 *)((ulonglong)local_120 & 0xffffffffffff0000);
    }
LAB_180017475:
    FUN_180024520(&local_70);
  }
  FUN_1800289e0(&local_98);
  FUN_1800289e0(local_68);
  *(undefined4 *)param_1 = (undefined4)local_100;
  *(undefined4 *)((longlong)param_1 + 4) = local_100._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_f8._4_4_;
  param_1[2] = local_f0;
  param_1[3] = uStack_e8;
  local_f0 = 0;
  uStack_e8 = 7;
  local_100 = (undefined8 *)((ulonglong)local_100 & 0xffffffffffff0000);
LAB_1800174c1:
  FUN_1800289e0(&local_e0);
  FUN_1800289e0(&local_100);
  FUN_1800289e0(local_c0);
LAB_1800174e0:
  FUN_1800289e0(&local_120);
  return param_1;
}



/* ===== 180017580 FUN_180017580 ===== */

undefined8 FUN_180017580(longlong *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + (longlong)param_2 * 8))(param_1,param_3);
  return 1;
}



/* ===== 1800175a0 FUN_1800175a0 ===== */

undefined8 FUN_1800175a0(code *param_1,undefined8 param_2)

{
  (*param_1)(param_2);
  return 1;
}



/* ===== 1800175c0 FUN_1800175c0 ===== */

undefined8 FUN_1800175c0(code *param_1,undefined8 param_2,undefined8 param_3)

{
  (*param_1)(param_2,param_3);
  return 1;
}



/* ===== 1800175e0 FUN_1800175e0 ===== */

undefined8 FUN_1800175e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  LPCVOID lpAddress;
  SIZE_T SVar2;
  undefined8 uVar3;
  _MEMORY_BASIC_INFORMATION local_38;
  
  puVar1 = (undefined8 *)*param_1;
  lpAddress = (LPCVOID)*puVar1;
  local_38.BaseAddress = (PVOID)0x0;
  local_38.AllocationBase = (PVOID)0x0;
  local_38.AllocationProtect = 0;
  local_38._20_4_ = 0;
  local_38.RegionSize = 0;
  local_38.State = 0;
  local_38.Protect = 0;
  local_38.Type = 0;
  local_38._44_4_ = 0;
  if ((((lpAddress == (LPCVOID)0x0) || (SVar2 = VirtualQuery(lpAddress,&local_38,0x30), SVar2 == 0))
      || (local_38.State != 0x1000)) || ((local_38._32_8_ & 0xf000000000) == 0)) {
    return 0;
  }
  uVar3 = (*(code *)*puVar1)(param_1);
  return uVar3;
}



/* ===== 180017650 FUN_180017650 ===== */

undefined1 FUN_180017650(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) || (lVar1 = FUN_1804ef120(), lVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* ===== 180017680 FUN_180017680 ===== */

bool FUN_180017680(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,param_2);
  return iVar1 == 0;
}



/* ===== 1800176a0 FUN_1800176a0 ===== */

undefined8 FUN_1800176a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1 - 0x10000U < 0x7ffffffeffff) {
    lVar5 = FUN_18000f3a0(param_1 + -8);
    if (lVar5 - 0x10000U < 0x7ffffffeffff) {
      iVar2 = FUN_180011200(lVar5);
      if (iVar2 == 1) {
        uVar3 = FUN_180011200(lVar5 + 0x14);
        lVar8 = lVar5 - (ulonglong)uVar3;
        uVar3 = FUN_180011200(lVar5 + 0x10);
        uVar4 = FUN_180011200(lVar8 + 8 + (ulonglong)uVar3);
        uVar6 = FUN_180011200(lVar8 + 0xc + (ulonglong)uVar3);
        if (uVar4 - 1 < 0x40) {
          uVar7 = 0;
          if (uVar4 != 0) {
            do {
              uVar3 = FUN_180011200((uVar6 & 0xffffffff) + lVar8 + uVar7 * 4);
              uVar3 = FUN_180011200((ulonglong)uVar3 + lVar8);
              cVar1 = FUN_180017680((ulonglong)uVar3 + lVar8 + 0x10,param_2);
              if (cVar1 != '\0') {
                return 1;
              }
              uVar3 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar3;
            } while (uVar3 < uVar4);
          }
        }
      }
    }
  }
  return 0;
}



/* ===== 180017790 FUN_180017790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180017790(void)

{
  undefined4 uVar1;
  ULONGLONG UVar2;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_2b8;
  if ((DAT_180cc3e20 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cc3e20 = '\x01';
    DAT_180cc3e24 = FUN_18038eaf0("C_GradientFog","m_bIsEnabled");
    DAT_180cc3e28 = FUN_18038eaf0("C_GradientFog","m_fogColor");
    DAT_180cc3e2c = FUN_18038eaf0("C_GradientFog","m_flFogMaxOpacity");
    DAT_180cc3e30 = FUN_18038eaf0("C_GradientFog","m_flFogStartDistance");
    DAT_180cc3e34 = FUN_18038eaf0("C_GradientFog","m_flFogEndDistance");
    DAT_180cc3e38 = FUN_18038eaf0("C_GradientFog","m_flFogFalloffExponent");
    DAT_180cc3e3c = FUN_18038eaf0("C_GradientFog","m_bHeightFogEnabled");
    DAT_180cc3e40 = FUN_18038eaf0("C_GradientFog","m_flFogStartHeight");
    DAT_180cc3e44 = FUN_18038eaf0("C_GradientFog","m_flFogEndHeight");
    DAT_180cc3e48 = FUN_18038eaf0("C_GradientFog","m_flFogVerticalExponent");
    DAT_180cc3e4c = FUN_18038eaf0("C_EnvCubemapFog","m_bActive");
    DAT_180cc3e50 = FUN_18038eaf0("C_EnvSky","m_nFogType");
    DAT_180cc3e54 = FUN_18038eaf0("C_LightEntity","m_CLightComponent");
    DAT_180cc3e58 = FUN_18038eaf0("CLightComponent","m_bEnabled");
    DAT_180cc3e5c = FUN_18038eaf0("CLightComponent","m_Color");
    DAT_180cc3e60 = FUN_18038eaf0("C_BarnLight","m_bEnabled");
    DAT_180cc3e64 = FUN_18038eaf0("C_BarnLight","m_Color");
    DAT_180cc3e68 = FUN_18038eaf0("C_EnvCombinedLightProbeVolume","m_Entity_flBrightness");
    DAT_180cc3e6c = FUN_18038eaf0("CGameSceneNode","m_angAbsRotation");
    DAT_180cc3e70 = FUN_18038eaf0("C_BaseEntity","m_pCollision");
    uVar1 = FUN_18038eaf0("CCollisionProperty","m_collisionAttribute");
    DAT_180cc3e74 = uVar1;
    FUN_180540170(local_218,0,0x200);
    local_228 = DAT_180cc3e70;
    local_230 = DAT_180cc3e6c;
    local_238 = DAT_180cc3e68;
    local_240 = DAT_180cc3e64;
    local_248 = DAT_180cc3e60;
    local_250 = DAT_180cc3e5c;
    local_258 = DAT_180cc3e58;
    local_260 = DAT_180cc3e54;
    local_268 = DAT_180cc3e50;
    local_270 = DAT_180cc3e4c;
    local_278 = DAT_180cc3e38;
    local_280 = DAT_180cc3e34;
    local_288 = DAT_180cc3e30;
    local_290 = DAT_180cc3e2c;
    local_298 = DAT_180cc3e28;
    local_220 = uVar1;
    snprintf(local_218,0x200,
             "offsets | fog %x %x %x %x %x %x | cubemap %x | sky %x | light %x (%x %x) | barn %x %x | probe %x | rotation %x | collision %x %x"
             ,DAT_180cc3e24);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar2,local_218);
  }
  return;
}



/* ===== 180017b10 FUN_180017b10 ===== */

longlong * FUN_180017b10(longlong *param_1,longlong param_2,char *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  char local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = FUN_180011200(param_2 + 0x3c);
  lVar6 = (ulonglong)uVar3 + param_2;
  uVar1 = FUN_180011440(lVar6 + 6);
  uVar2 = FUN_180011440(lVar6 + 0x14);
  lVar6 = (ulonglong)uVar2 + lVar6;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar5 = (ulonglong)uVar2;
      local_30 = 0;
      local_38 = FUN_180011220(lVar6 + 0x18 + uVar5 * 0x28);
      local_37 = FUN_180011220(lVar6 + 0x19 + uVar5 * 0x28);
      local_36 = FUN_180011220(lVar6 + 0x1a + uVar5 * 0x28);
      local_35 = FUN_180011220(lVar6 + 0x1b + uVar5 * 0x28);
      local_34 = FUN_180011220(lVar6 + 0x1c + uVar5 * 0x28);
      local_33 = FUN_180011220(lVar6 + 0x1d + uVar5 * 0x28);
      local_32 = FUN_180011220(lVar6 + 0x1e + uVar5 * 0x28);
      local_31 = FUN_180011220(lVar6 + 0x1f + uVar5 * 0x28);
      iVar4 = strcmp(&local_38,param_3);
      if (iVar4 == 0) {
        uVar3 = FUN_180011200(lVar6 + 0x24 + uVar5 * 0x28);
        *param_1 = (ulonglong)uVar3 + param_2;
        uVar3 = FUN_180011200(lVar6 + 0x20 + uVar5 * 0x28);
        param_1[1] = (ulonglong)uVar3;
        return param_1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return param_1;
}



/* ===== 180017c70 FUN_180017c70 ===== */

void * FUN_180017c70(longlong *param_1,char *param_2)

{
  ulonglong _Size;
  char cVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  void *_Buf1;
  ulonglong uVar5;
  ulonglong uVar6;
  
  sVar4 = strlen(param_2);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    _Size = sVar4 + 1;
    if (_Size <= (ulonglong)param_1[1]) {
      uVar6 = (lVar2 - _Size) + param_1[1];
      uVar5 = lVar2 + 1;
      if (uVar5 < uVar6) {
        cVar1 = *param_2;
        do {
          _Buf1 = (void *)FUN_180540ca0(uVar5,(int)cVar1,uVar6 - uVar5);
          if (_Buf1 == (void *)0x0) {
            return (void *)0x0;
          }
          if ((*(char *)((longlong)_Buf1 + -1) == '\0') &&
             (iVar3 = memcmp(_Buf1,param_2,_Size), iVar3 == 0)) {
            return _Buf1;
          }
          uVar5 = (longlong)_Buf1 + 1;
        } while (uVar5 < uVar6);
      }
    }
  }
  return (void *)0x0;
}



/* ===== 180017d10 FUN_180017d10 ===== */

char * FUN_180017d10(longlong *param_1,longlong *param_2,char *param_3,char *param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  
  sVar7 = strlen(param_3);
  lVar3 = *param_2;
  if (lVar3 == 0) {
LAB_180017ee9:
    sVar7 = strlen(param_4);
    pcVar8 = (char *)0x0;
    if (lVar3 == 0) goto LAB_180017e29;
  }
  else {
    uVar1 = sVar7 + 1;
    uVar4 = param_2[1];
    if (uVar4 < uVar1) goto LAB_180017ee9;
    pcVar8 = (char *)(lVar3 + 1);
    pcVar11 = (char *)((lVar3 - uVar1) + uVar4);
    if (pcVar8 < pcVar11) {
      cVar2 = *param_3;
      do {
        pcVar8 = (char *)FUN_180540ca0(pcVar8,(int)cVar2,(longlong)pcVar11 - (longlong)pcVar8);
        if (pcVar8 == (char *)0x0) break;
        if ((pcVar8[-1] == '\0') && (iVar6 = memcmp(pcVar8,param_3,uVar1), iVar6 == 0))
        goto LAB_180017dbb;
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 < pcVar11);
    }
    pcVar8 = (char *)0x0;
LAB_180017dbb:
    sVar7 = strlen(param_4);
  }
  uVar4 = param_2[1];
  uVar1 = sVar7 + 1;
  if (uVar1 <= uVar4) {
    pcVar11 = (char *)(lVar3 + 1);
    pcVar10 = (char *)((uVar4 - uVar1) + lVar3);
    if (pcVar11 < pcVar10) {
      cVar2 = *param_4;
      do {
        pcVar11 = (char *)FUN_180540ca0(pcVar11,(int)cVar2,(longlong)pcVar10 - (longlong)pcVar11);
        if (pcVar11 == (char *)0x0) break;
        if ((pcVar11[-1] == '\0') && (iVar6 = memcmp(pcVar11,param_4,uVar1), iVar6 == 0))
        goto LAB_180017e2b;
        pcVar11 = pcVar11 + 1;
      } while (pcVar11 < pcVar10);
    }
  }
LAB_180017e29:
  pcVar11 = (char *)0x0;
LAB_180017e2b:
  if (((pcVar8 != (char *)0x0) && (pcVar11 != (char *)0x0)) && (lVar3 = *param_1, lVar3 != 0)) {
    for (pcVar10 = (char *)(lVar3 + 0x50); pcVar10 < (char *)(param_1[1] + -8 + lVar3);
        pcVar10 = pcVar10 + 1) {
      if (((*pcVar10 == 'H') && (pcVar10[1] == -0x73)) &&
         ((pcVar10[2] == '\x15' && (pcVar10 + (longlong)*(int *)(pcVar10 + 3) + 7 == pcVar11)))) {
        bVar5 = false;
        pcVar9 = pcVar10 + -0x50;
        pcVar12 = (char *)0x0;
        if (pcVar9 < pcVar10) {
          do {
            if (*pcVar9 == 'L') {
              if (((pcVar9[1] == -0x73) && (pcVar9[2] == '\x05')) &&
                 (pcVar9 + (longlong)*(int *)(pcVar9 + 3) + 7 == pcVar8)) {
                bVar5 = true;
              }
            }
            else if (((*pcVar9 == 'H') && (pcVar9[1] == -0x73)) && (pcVar9[2] == '\x05')) {
              pcVar12 = pcVar9 + (longlong)*(int *)(pcVar9 + 3) + 7;
            }
            pcVar9 = pcVar9 + 1;
          } while (pcVar9 < pcVar10);
          if ((bVar5) && (pcVar12 != (char *)0x0)) {
            if (*pcVar12 == -0x17) {
              pcVar12 = pcVar12 + (longlong)*(int *)(pcVar12 + 1) + 5;
            }
            return pcVar12;
          }
        }
      }
    }
  }
  return (char *)0x0;
}



/* ===== 180017f60 FUN_180017f60 ===== */

undefined1 FUN_180017f60(undefined8 param_1,undefined8 param_2)

{
  DAT_180ca3c30 = FUN_180017d10(param_1,param_2,"C_EnvSky","SkyStateChanged");
  DAT_180ca3c38 = FUN_180017d10(param_1,param_2,"C_BarnLight","RenderingChanged");
  return 1;
}



/* ===== 180017fc0 FUN_180017fc0 ===== */

undefined8 FUN_180017fc0(void)

{
  byte *pbVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  bool bVar9;
  longlong local_a8;
  longlong local_a0;
  byte *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  char *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_78 = "client.dll";
  uStack_70 = 10;
  local_38 = 0x806d2230;
  uStack_34 = 1;
  uStack_30 = 10;
  uStack_2c = 0;
  plVar3 = (longlong *)FUN_1801d1d70(&local_88,&local_38);
  local_a8 = *plVar3;
  local_a0 = plVar3[1];
  if ((local_a8 == 0) || (local_a0 == 0)) {
    uVar7 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_180017b10(&local_88,local_a8,".text");
    pbVar1 = (byte *)*puVar4;
    lVar6 = puVar4[1];
    local_68 = &DAT_1806d2f80;
    uStack_60 = 100;
    local_28 = 0x806d2f80;
    uStack_24 = 1;
    uStack_20 = 100;
    uStack_1c = 0;
    lVar5 = FUN_1801d1e00(&local_a8,&local_28);
    if (lVar5 != 0) {
      DAT_180962528 = (longlong)*(int *)(lVar5 + 3) + 7 + lVar5;
      DAT_180962540 = FUN_180011200(lVar5 + 0x1b);
      if (lVar5 == -0x1f) {
        DAT_180962530 = 0;
      }
      else {
        DAT_180962530 = (longlong)*(int *)(lVar5 + 0x22) + 0x26 + lVar5;
      }
      DAT_180962538 = FUN_1801d20d0(lVar5 + 0x26);
      pbVar8 = pbVar1 + lVar6 + -3;
      if ((byte *)(lVar5 + 0x90U) <= pbVar1 + lVar6 + -3) {
        pbVar8 = (byte *)(lVar5 + 0x90U);
      }
      local_98 = pbVar1;
      if (pbVar1 <= (byte *)(lVar5 + 0x2bU)) {
        local_98 = (byte *)(lVar5 + 0x2bU);
      }
      for (; local_98 < pbVar8; local_98 = local_98 + 1) {
        bVar9 = *local_98 < 0x48;
        if (((*local_98 == 0x48) && (bVar9 = local_98[1] < 0x8b, local_98[1] == 0x8b)) &&
           (bVar9 = local_98[2] < 0x99, local_98[2] == 0x99)) {
          uVar2 = 0;
        }
        else {
          uVar2 = -(uint)bVar9 | 1;
        }
        if (uVar2 == 0) {
          if (local_98 != (byte *)0x0) {
            DAT_180962544 = *(undefined4 *)(local_98 + 3);
          }
          break;
        }
      }
    }
    local_58 = &DAT_1806d2fe8;
    uStack_50 = 0x37;
    local_18 = 0x806d2fe8;
    uStack_14 = 1;
    uStack_10 = 0x37;
    uStack_c = 0;
    lVar6 = FUN_1801d1e00(&local_a8,&local_18);
    if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 3) + 7 + lVar6 == DAT_180962528)) {
      DAT_180962548 = FUN_180011200(lVar6 + 0x14);
    }
    local_48 = &DAT_1806d3020;
    uStack_40 = 0x81;
    local_88 = 0x806d3020;
    uStack_84 = 1;
    uStack_80 = 0x81;
    uStack_7c = 0;
    lVar6 = FUN_1801d1e00(&local_a8,&local_88);
    if (lVar6 != 0) {
      DAT_180962554 = FUN_180011200(lVar6 + 0xc);
      DAT_18096254c = FUN_180011200(lVar6 + 0x28);
      DAT_180962550 = FUN_180011200(lVar6 + 0x30);
    }
    uVar7 = 1;
  }
  return uVar7;
}



/* ===== 180018230 FUN_180018230 ===== */

undefined8 FUN_180018230(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0x806d30a8;
  uStack_24 = 1;
  uStack_20 = 0x13;
  uStack_1c = 0;
  plVar5 = (longlong *)FUN_1801d1d70(&local_18,&local_28);
  lVar1 = *plVar5;
  if ((lVar1 == 0) || (plVar5[1] == 0)) {
    return 0;
  }
  plVar5 = (longlong *)FUN_180017b10(&local_28,lVar1,".text");
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  puVar6 = (undefined4 *)FUN_180017b10(&local_18,lVar1,".rdata");
  local_18 = *puVar6;
  uStack_14 = puVar6[1];
  uStack_10 = puVar6[2];
  uStack_c = puVar6[3];
  pcVar7 = (char *)FUN_180017c70(&local_18,"colorcorrection_%p.vtex");
  if ((pcVar7 == (char *)0x0) || (lVar2 == 0)) {
    return 0;
  }
  pcVar8 = (char *)(lVar2 + 0x80);
  while( true ) {
    if ((char *)(lVar2 + -8 + lVar3) <= pcVar8) {
      return 1;
    }
    if ((((*pcVar8 == 'H') && (pcVar8[1] == -0x73)) && (pcVar8[2] == '\x15')) &&
       (pcVar8 + (longlong)*(int *)(pcVar8 + 3) + 7 == pcVar7)) break;
    pcVar8 = pcVar8 + 1;
  }
  iVar9 = DAT_180ca3c68;
  pcVar7 = pcVar8;
LAB_180018337:
  do {
    pcVar4 = pcVar7;
    pcVar7 = pcVar4 + -1;
    if (pcVar7 <= pcVar8 + -0x80) goto LAB_180018396;
    if (iVar9 == 0) {
      if (((*pcVar7 == 'L') && (*pcVar4 == -0x75)) && (pcVar4[1] == -0x47)) {
        iVar9 = *(int *)(pcVar4 + 2);
        DAT_180ca3c68 = iVar9;
      }
      if (iVar9 == 0) goto LAB_180018337;
    }
    if (((*pcVar7 == 'H') && (*pcVar4 == -0x75)) && (pcVar4[1] == '\x05')) {
      DAT_180ca3c58 = pcVar4 + (longlong)*(int *)(pcVar4 + 2) + 6;
LAB_180018396:
      pcVar7 = pcVar8;
      while( true ) {
        if (pcVar8 + 0xc0 <= pcVar7) {
          return 1;
        }
        if (((((*pcVar7 == 'L') && (pcVar7[1] == '9')) && (pcVar7[2] == '%')) &&
            ((pcVar7[7] == 't' && (pcVar7[9] == -0x10)))) &&
           ((pcVar7[10] == -1 && ((pcVar7[0xb] == 'J' && (pcVar7[0xc] == ' ')))))) break;
        pcVar7 = pcVar7 + 1;
      }
      DAT_180ca3c60 = pcVar7 + (longlong)*(int *)(pcVar7 + 3) + 7;
      return 1;
    }
  } while( true );
}



/* ===== 180018430 FUN_180018430 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_180018430(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  char *pcVar5;
  size_t sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_298 [32];
  char local_278;
  char local_277;
  char local_276;
  char local_275;
  char local_274;
  float local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  undefined4 local_248;
  float local_244;
  undefined4 local_240;
  char *local_238;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  char local_1f8;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  char local_1d0;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  float local_1bc;
  float fStack_1b8;
  undefined2 local_1b4;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  char local_1a4;
  char cStack_1a3;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  uint local_170;
  ulonglong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  float local_140;
  char local_13c;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  char local_108;
  ulonglong local_f8;
  
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_298;
  uVar8 = 0;
  local_238 = param_1;
  pcVar5 = (char *)FUN_1800f1c60();
  fVar14 = DAT_1808ac34c;
  local_1e4 = 100;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = (uint)uVar8;
  uVar7 = uVar8 & 0xffffffff;
  uStack_160 = 0;
  local_158 = _DAT_1808ad410;
  uStack_150 = _UNK_1808ad418;
  local_13c = (char)uVar7;
  local_168 = uVar8 & 0xff;
  local_140 = 1.0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 3;
  local_1f8 = *pcVar5;
  uVar15 = *(undefined4 *)(pcVar5 + 4);
  uVar16 = *(undefined4 *)(pcVar5 + 8);
  local_1f4 = *(undefined8 *)(pcVar5 + 4);
  uVar17 = *(undefined4 *)(pcVar5 + 0xc);
  uVar18 = *(undefined4 *)(pcVar5 + 0x10);
  uStack_1ec = *(undefined8 *)(pcVar5 + 0xc);
  if (*pcVar5 != (char)uVar8) {
    local_1e4 = *(undefined4 *)(pcVar5 + 0x14);
  }
  if ((*pcVar5 == '\0') || (pcVar5[0x18] == '\0')) {
    local_1e0 = uVar15;
    uStack_1dc = uVar16;
    uStack_1d8 = uVar17;
    uStack_1d4 = uVar18;
  }
  else {
    local_1e0 = *(undefined4 *)(pcVar5 + 0x1c);
    uStack_1dc = *(undefined4 *)(pcVar5 + 0x20);
    uStack_1d8 = *(undefined4 *)(pcVar5 + 0x24);
    uStack_1d4 = *(undefined4 *)(pcVar5 + 0x28);
  }
  local_278 = pcVar5[0x18c];
  local_268 = *(undefined4 *)(pcVar5 + 0x194);
  local_264 = *(undefined4 *)(pcVar5 + 0x198);
  local_260 = *(undefined4 *)(pcVar5 + 0x19c);
  uStack_1c4 = *(undefined8 *)(pcVar5 + 0x198);
  local_26c = *(undefined4 *)(pcVar5 + 400);
  local_1cc = *(undefined8 *)(pcVar5 + 400);
  local_1bc = (float)*(int *)(pcVar5 + 0x1a0) * DAT_1808aca80;
  if ((float)*(int *)(pcVar5 + 0x1a0) * DAT_1808aca80 <= DAT_1808abfbc) {
    local_1bc = DAT_1808abfbc;
  }
  local_25c = *(float *)(pcVar5 + 0x1a4);
  if (*(float *)(pcVar5 + 0x1a4) <= DAT_1808abfbc) {
    local_25c = DAT_1808abfbc;
  }
  local_277 = pcVar5[0x1a8];
  local_276 = pcVar5[0x1a9];
  local_1b4 = *(undefined2 *)(pcVar5 + 0x1a8);
  local_258 = (float)*(int *)(pcVar5 + 0x1ac) * DAT_1808ac750;
  local_254 = (float)*(int *)(pcVar5 + 0x1b0) * DAT_1808ac750;
  local_250 = *(float *)(pcVar5 + 0x1b4);
  if (*(float *)(pcVar5 + 0x1b4) <= DAT_1808abfbc) {
    local_250 = DAT_1808abfbc;
  }
  local_275 = pcVar5[0x364];
  cStack_1a3 = pcVar5[0x94];
  local_1d0 = local_278;
  local_1a8 = local_250;
  local_1a4 = local_275;
  local_1b0 = local_258;
  fStack_1ac = local_254;
  fStack_1b8 = local_25c;
  if (pcVar5[0x94] == '\0') {
    if (*pcVar5 != '\0') {
      cStack_1a3 = '\x01';
      local_1a0 = 0x3f0a8c153f098c7e;
      uStack_198 = _DAT_1808ad9d0;
      local_190 = _UNK_1808ad9d8;
      uStack_188 = _DAT_1808ad320;
      local_180 = _UNK_1808ad328;
      uStack_178 = 0x3f80000000000000;
      uVar7 = 7;
      local_170 = 7;
    }
  }
  else {
    local_1a0 = *(undefined8 *)(pcVar5 + 0x98);
    uStack_198 = *(undefined8 *)(pcVar5 + 0xa0);
    local_190 = *(undefined8 *)(pcVar5 + 0xa8);
    uStack_188 = *(undefined8 *)(pcVar5 + 0xb0);
    local_180 = *(undefined8 *)(pcVar5 + 0xb8);
    uStack_178 = *(undefined8 *)(pcVar5 + 0xc0);
    local_170 = *(uint *)(pcVar5 + 200);
    local_148 = uVar7;
    local_138 = uVar8;
    local_108 = local_13c;
    sVar6 = strlen(pcVar5 + 0xcc);
    FUN_180029840(&local_168,pcVar5 + 0xcc,sVar6);
    uVar7 = (ulonglong)local_170;
    local_276 = local_1b4._1_1_;
    local_277 = (char)local_1b4;
    local_260 = uStack_1c4._4_4_;
    local_264 = (undefined4)uStack_1c4;
    local_268 = local_1cc._4_4_;
    local_26c = (undefined4)local_1cc;
    uVar15 = (undefined4)local_1f4;
    uVar16 = local_1f4._4_4_;
    uVar17 = (undefined4)uStack_1ec;
    uVar18 = uStack_1ec._4_4_;
  }
  cVar1 = pcVar5[0x365];
  cVar2 = pcVar5[0x366];
  local_274 = pcVar5[0x367];
  uVar4 = *(undefined3 *)(pcVar5 + 0x365);
  cVar9 = pcVar5[0x5c];
  local_148._0_4_ = CONCAT13(cVar9,uVar4);
  uVar10 = *(undefined4 *)(pcVar5 + 0x80);
  local_148 = CONCAT44(uVar10,(uint)local_148);
  if (pcVar5[0x5c] == '\0') {
    local_140 = fVar14;
  }
  else {
    local_140 = (float)*(int *)(pcVar5 + 0x90) * DAT_1808ac000;
  }
  local_13c = pcVar5[0x84];
  local_240 = *(undefined4 *)(pcVar5 + 0x88);
  uVar3 = *(undefined4 *)(pcVar5 + 0x8c);
  local_138 = *(ulonglong *)(pcVar5 + 0x88);
  local_238 = (char *)CONCAT44(local_238._4_4_,uVar3);
  local_248 = *(undefined4 *)(pcVar5 + 100);
  uVar12 = *(undefined4 *)(pcVar5 + 0x68);
  uStack_128 = *(undefined8 *)(pcVar5 + 0x68);
  local_218 = ZEXT416(*(uint *)(pcVar5 + 0x6c));
  local_24c = *(undefined4 *)(pcVar5 + 0x60);
  local_130 = *(undefined8 *)(pcVar5 + 0x60);
  uVar19 = *(undefined4 *)(pcVar5 + 0x74);
  local_244 = *(float *)(pcVar5 + 0x78);
  local_270 = *(float *)(pcVar5 + 0x7c);
  uStack_118 = *(undefined8 *)(pcVar5 + 0x78);
  local_120 = *(undefined8 *)(pcVar5 + 0x70);
  local_208 = ZEXT416(*(uint *)(pcVar5 + 0x70));
  if ((pcVar5[0x5c] == '\0') && (*pcVar5 != '\0')) {
    cVar9 = '\x01';
    local_148._0_4_ = CONCAT13(1,uVar4);
    local_13c = '\0';
    uVar10 = 0;
    local_148 = (ulonglong)(uint)local_148;
    local_24c = 0;
    local_248 = 0;
    local_130 = 0;
    uStack_128 = CONCAT44(_UNK_1808adc14,_DAT_1808adc10);
    local_120 = CONCAT44(_UNK_1808adc1c,_UNK_1808adc18);
    local_244 = fVar14;
    uStack_118 = CONCAT44(fVar14,fVar14);
    local_208._4_4_ = _UNK_1808adc18;
    local_208._0_4_ = _UNK_1808adc18;
    local_208._8_4_ = _UNK_1808adc18;
    local_208._12_4_ = _UNK_1808adc18;
    local_218._4_4_ = _UNK_1808adc14;
    local_218._0_4_ = _UNK_1808adc14;
    local_218._8_4_ = _UNK_1808adc14;
    local_218._12_4_ = _UNK_1808adc14;
    uVar19 = _UNK_1808adc1c;
    uVar12 = _DAT_1808adc10;
  }
  else {
    fVar14 = local_270;
  }
  if (pcVar5[0x40] == '\0') {
    uVar11 = 3;
    if (*pcVar5 != '\0') {
      uVar11 = 0;
    }
  }
  else {
    uVar11 = *(undefined4 *)(pcVar5 + 0x44);
  }
  if (pcVar5[0x40] == '\0') {
    uVar13 = 0;
    if (*pcVar5 != '\0') {
      uVar13 = DAT_1808acd84;
    }
  }
  else {
    uVar13 = *(undefined4 *)(pcVar5 + 0x48);
  }
  local_110 = CONCAT44(uVar13,uVar11);
  local_108 = pcVar5[0x295];
  *param_1 = local_1f8;
  *(undefined4 *)(param_1 + 4) = uVar15;
  *(undefined4 *)(param_1 + 8) = uVar16;
  *(undefined4 *)(param_1 + 0xc) = uVar17;
  *(undefined4 *)(param_1 + 0x10) = uVar18;
  *(undefined4 *)(param_1 + 0x14) = local_1e4;
  *(undefined4 *)(param_1 + 0x18) = local_1e0;
  *(undefined4 *)(param_1 + 0x1c) = uStack_1dc;
  *(undefined4 *)(param_1 + 0x20) = uStack_1d8;
  *(undefined4 *)(param_1 + 0x24) = uStack_1d4;
  param_1[0x28] = local_1d0;
  *(undefined4 *)(param_1 + 0x2c) = local_26c;
  *(undefined4 *)(param_1 + 0x30) = local_268;
  *(undefined4 *)(param_1 + 0x34) = local_264;
  *(undefined4 *)(param_1 + 0x38) = local_260;
  *(float *)(param_1 + 0x3c) = local_1bc;
  *(float *)(param_1 + 0x40) = fStack_1b8;
  param_1[0x44] = local_277;
  param_1[0x45] = local_276;
  *(float *)(param_1 + 0x48) = local_1b0;
  *(float *)(param_1 + 0x4c) = fStack_1ac;
  *(float *)(param_1 + 0x50) = local_1a8;
  param_1[0x54] = local_1a4;
  param_1[0x55] = cStack_1a3;
  *(undefined8 *)(param_1 + 0x58) = local_1a0;
  *(undefined8 *)(param_1 + 0x60) = uStack_198;
  *(undefined8 *)(param_1 + 0x68) = local_190;
  *(undefined8 *)(param_1 + 0x70) = uStack_188;
  *(undefined8 *)(param_1 + 0x78) = local_180;
  *(undefined8 *)(param_1 + 0x80) = uStack_178;
  *(int *)(param_1 + 0x88) = (int)uVar7;
  *(ulonglong *)(param_1 + 0x90) = local_168;
  *(undefined8 *)(param_1 + 0x98) = uStack_160;
  *(undefined8 *)(param_1 + 0xa0) = local_158;
  *(undefined8 *)(param_1 + 0xa8) = uStack_150;
  local_158 = _DAT_1808ad410;
  uStack_150 = _UNK_1808ad418;
  local_168 = local_168 & 0xffffffffffffff00;
  param_1[0xb0] = cVar1;
  param_1[0xb1] = cVar2;
  param_1[0xb2] = local_274;
  param_1[0xb3] = cVar9;
  *(undefined4 *)(param_1 + 0xb4) = uVar10;
  *(float *)(param_1 + 0xb8) = local_140;
  param_1[0xbc] = local_13c;
  *(undefined4 *)(param_1 + 0xc0) = local_240;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 200) = local_24c;
  *(undefined4 *)(param_1 + 0xcc) = local_248;
  *(undefined4 *)(param_1 + 0xd0) = uVar12;
  *(undefined4 *)(param_1 + 0xd4) = local_218._0_4_;
  *(undefined4 *)(param_1 + 0xd8) = local_208._0_4_;
  *(undefined4 *)(param_1 + 0xdc) = uVar19;
  *(float *)(param_1 + 0xe0) = local_244;
  *(float *)(param_1 + 0xe4) = fVar14;
  *(undefined4 *)(param_1 + 0xe8) = uVar11;
  *(undefined4 *)(param_1 + 0xec) = uVar13;
  param_1[0xf0] = local_108;
  local_278 = local_1d0;
  local_275 = local_1a4;
  local_25c = fStack_1b8;
  local_258 = local_1b0;
  local_254 = fStack_1ac;
  local_250 = local_1a8;
  FUN_18000f890(&local_168);
  return param_1;
}



/* ===== 180018c80 FUN_180018c80 ===== */

uint FUN_180018c80(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float local_68 [8];
  float local_48;
  float local_44;
  float local_40 [2];
  float local_38;
  float local_34;
  float local_30 [2];
  float local_28 [8];
  
  local_68[2] = *param_1;
  local_40[0] = param_1[1];
  local_30[0] = param_1[2];
  local_68[6] = param_1[3];
  local_68[4] = 1.0;
  local_68[0] = 0.0;
  local_48 = 1.0;
  local_68[5] = 0.0;
  local_38 = 1.0;
  local_44 = 0.0;
  local_28[0] = 1.0;
  pfVar5 = local_68;
  if (0.0 <= local_68[2]) {
    pfVar5 = local_68 + 2;
  }
  local_34 = 0.0;
  pfVar1 = local_68 + 4;
  if (local_68[2] <= DAT_1808ac34c) {
    pfVar1 = pfVar5;
  }
  pfVar5 = local_68 + 5;
  if (0.0 <= local_68[6]) {
    pfVar5 = local_68 + 6;
  }
  pfVar2 = &local_48;
  if (local_68[6] <= DAT_1808ac34c) {
    pfVar2 = pfVar5;
  }
  pfVar5 = &local_44;
  if (0.0 <= local_40[0]) {
    pfVar5 = local_40;
  }
  pfVar3 = &local_38;
  if (local_40[0] <= DAT_1808ac34c) {
    pfVar3 = pfVar5;
  }
  pfVar5 = &local_34;
  if (0.0 <= local_30[0]) {
    pfVar5 = local_30;
  }
  pfVar4 = local_28;
  if (local_30[0] <= DAT_1808ac34c) {
    pfVar4 = pfVar5;
  }
  return (((int)(*pfVar4 * DAT_1808acb94) & 0xffU) << 8 | (int)(*pfVar3 * DAT_1808acb94) & 0xffU) <<
         8 | (int)(*pfVar2 * DAT_1808acb94) << 0x18 | (int)(*pfVar1 * DAT_1808acb94) & 0xffU;
}



/* ===== 180018dd0 FUN_180018dd0 ===== */

uint FUN_180018dd0(ulonglong param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint local_res10;
  
  uVar4 = DAT_180ca0c10 &
          ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff) *
              0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff) *
            0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
          0x100000001b3;
  lVar3 = *(longlong *)(DAT_180ca0bf8 + 8 + uVar4 * 0x10);
  if (lVar3 != DAT_180ca0be8) {
    uVar1 = *(ulonglong *)(lVar3 + 0x10);
    while (param_1 != uVar1) {
      if (lVar3 == *(longlong *)(DAT_180ca0bf8 + uVar4 * 0x10)) goto LAB_180018eb4;
      lVar3 = *(longlong *)(lVar3 + 8);
      uVar1 = *(ulonglong *)(lVar3 + 0x10);
    }
    if (lVar3 != 0) goto LAB_180018eb7;
  }
LAB_180018eb4:
  lVar3 = DAT_180ca0be8;
LAB_180018eb7:
  if (lVar3 != DAT_180ca0be8) {
    return *(uint *)(lVar3 + 0x18);
  }
  uVar5 = 0x80000000;
  local_res10 = 0x80000000;
  cVar2 = FUN_1800176a0(param_1,".?AVC_GradientFog@@");
  if (cVar2 != '\0') {
    uVar5 = 0x80000001;
    local_res10 = 0x80000001;
  }
  cVar2 = FUN_1800176a0(param_1,".?AVC_EnvCubemapFog@@");
  if (cVar2 != '\0') {
    uVar5 = uVar5 | 2;
    local_res10 = uVar5;
  }
  cVar2 = FUN_1800176a0(param_1,".?AVC_EnvSky@@");
  if (cVar2 != '\0') {
    uVar5 = uVar5 | 4;
    local_res10 = uVar5;
  }
  cVar2 = FUN_1800176a0(param_1,".?AVC_LightEntity@@");
  if (cVar2 != '\0') {
    uVar5 = uVar5 | 8;
    local_res10 = uVar5;
  }
  cVar2 = FUN_1800176a0(param_1,".?AVC_BarnLight@@");
  if (cVar2 != '\0') {
    uVar5 = uVar5 | 0x10;
    local_res10 = uVar5;
  }
  cVar2 = FUN_1800176a0(param_1,".?AVC_EnvCombinedLightProbeVolume@@");
  if (cVar2 != '\0') {
    local_res10 = uVar5 | 0x20;
  }
  if (0x1000 < DAT_180ca0bf0) {
    FUN_180023ae0(&DAT_180ca0be0);
  }
  FUN_180022730();
  return local_res10;
}



/* ===== 180018fb0 FUN_180018fb0 ===== */

undefined8 FUN_180018fb0(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)(*DAT_180cc3df0)(param_1,param_2,0);
  uVar2 = 0;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 0x3c) == 0x18) {
      uVar2 = (*DAT_180cc3df8)(pbVar1,&DAT_18058b643);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== 180018ff0 FUN_180018ff0 ===== */

undefined8 FUN_180018ff0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int local_res18 [4];
  
  local_res18[0] = 0;
  (**(code **)(*param_1 + 0x60))(param_1,local_res18);
  if (local_res18[0] == param_2) {
    plVar1 = (longlong *)param_1[6];
    if (plVar1 == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"default_ents");
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== 180019050 FUN_180019050 ===== */

bool FUN_180019050(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 local_res10 [24];
  
  uVar4 = DAT_180ca0a90 &
          ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff) *
              0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ param_1 >> 0x28 & 0xff) *
            0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ param_1 >> 0x38) *
          0x100000001b3;
  lVar2 = *(longlong *)(DAT_180ca0a78 + 8 + uVar4 * 0x10);
  if (lVar2 != DAT_180ca0a68) {
    uVar1 = *(ulonglong *)(lVar2 + 0x10);
    while (param_1 != uVar1) {
      if (lVar2 == *(longlong *)(DAT_180ca0a78 + uVar4 * 0x10)) goto LAB_180019134;
      lVar2 = *(longlong *)(lVar2 + 8);
      uVar1 = *(ulonglong *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) goto LAB_180019137;
  }
LAB_180019134:
  lVar2 = DAT_180ca0a68;
LAB_180019137:
  if ((lVar2 == DAT_180ca0a68) || (0xfffffffd < *(int *)(lVar2 + 0x18) - 1U)) {
    return false;
  }
  puVar3 = (ulonglong *)FUN_1803a0940(local_res10);
  return *puVar3 == param_1;
}



/* ===== 180019170 FUN_180019170 ===== */

undefined8 FUN_180019170(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_180ca0dda != '\0') {
    if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
      DAT_1811161d8 = '\x01';
      DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
    }
    uVar1 = DAT_1811161dc;
    if ((((param_1 != 0) && (DAT_1811161dc != 0)) &&
        (lVar3 = FUN_18000f3a0(param_1 + 0x10), lVar3 - 0x10000U < 0x7ffffffeffff)) &&
       ((lVar4 = FUN_18000f3a0(lVar3), lVar4 == param_1 &&
        (iVar2 = FUN_180011200((ulonglong)uVar1 + lVar3), iVar2 == DAT_18096258c)))) {
      return 1;
    }
  }
  return 0;
}



/* ===== 180019240 FUN_180019240 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180019240(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 **ppuVar17;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 *local_88 [7];
  undefined8 *local_50 [2];
  
  local_50[0] = (undefined8 *)(DAT_180919500 ^ (ulonglong)auStack_c8);
  if (DAT_180cc4110 != DAT_180cc4118) {
    DAT_180cc4118 = DAT_180cc4110;
  }
  if (DAT_180cc4080 != DAT_180cc4088) {
    DAT_180cc4088 = DAT_180cc4080;
  }
  if (DAT_180cc3f80 != DAT_180cc3f88) {
    DAT_180cc3f88 = DAT_180cc3f80;
  }
  if (DAT_180cc40e0 != DAT_180cc40e8) {
    DAT_180cc40e8 = DAT_180cc40e0;
  }
  if (DAT_180cc4020 != DAT_180cc4028) {
    DAT_180cc4028 = DAT_180cc4020;
  }
  if (DAT_180cc4068 != DAT_180cc4070) {
    DAT_180cc4070 = DAT_180cc4068;
  }
  if (DAT_180cc4050 != DAT_180cc4058) {
    DAT_180cc4058 = DAT_180cc4050;
  }
  FUN_1803a09f0(&local_a0);
  puVar14 = auStack_c8;
  puVar15 = auStack_c8;
  puVar10 = local_a0;
  if (local_a0 != local_98) {
    do {
      puVar12 = (undefined8 *)*puVar10;
      local_a8 = puVar12;
      lVar7 = FUN_18000f3a0(puVar12);
      if (lVar7 != 0) {
        lVar8 = FUN_1803a0710(puVar10);
        if ((lVar8 != 0) && (cVar4 = FUN_180017680(lVar8,"C_CSPlayerPawn"), cVar4 != '\0')) {
          FUN_1800242d0(&DAT_180cc4050,&local_a8);
        }
        uVar5 = FUN_180018dd0(lVar7);
        if ((uVar5 & 1) != 0) {
          FUN_1800242d0(&DAT_180cc4110,&local_a8);
        }
        if ((uVar5 & 2) != 0) {
          FUN_1800242d0(&DAT_180cc4080,&local_a8);
        }
        if ((uVar5 & 4) != 0) {
          FUN_1800242d0(&DAT_180cc3f80,&local_a8);
        }
        if (((uVar5 & 8) != 0) && (cVar4 = FUN_180019170(puVar12), cVar4 != '\0')) {
          FUN_1800242d0(&DAT_180cc40e0,&local_a8);
        }
        if (((uVar5 & 0x10) != 0) && (cVar4 = FUN_180019170(puVar12), cVar4 != '\0')) {
          FUN_1800242d0(&DAT_180cc4020,&local_a8);
        }
        if (((uVar5 & 0x20) != 0) && (cVar4 = FUN_180019170(puVar12), cVar4 != '\0')) {
          FUN_1800242d0(&DAT_180cc4068,&local_a8);
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != local_98);
  }
  puVar16 = auStack_c8;
  if (local_a0 == (undefined8 *)0x0) goto LAB_1800194a5;
  puVar10 = local_a0;
  if ((ulonglong)((local_90 - (longlong)local_a0 >> 3) * 8) < 0x1000) {
LAB_18001949d:
    puVar15 = puVar14;
  }
  else {
    puVar10 = (undefined8 *)local_a0[-1];
    puVar12 = (undefined8 *)((longlong)local_a0 + (-8 - (longlong)puVar10));
    if (&DAT_0000001f < puVar12) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar14 = auStack_c0;
      puVar10 = puVar12;
      goto LAB_18001949d;
    }
  }
  *(undefined8 *)(puVar15 + -8) = 0x1800194a5;
  thunk_FUN_1803d64e0(puVar10);
  puVar16 = puVar15;
LAB_1800194a5:
  puVar10 = DAT_180ca0a68;
  if (DAT_180ca0a70 != 0) {
    if (DAT_180ca0a70 < DAT_180ca0a98 >> 3) {
      uVar1 = *DAT_180ca0a68;
      *(undefined8 *)(puVar16 + -8) = 0x1800194e1;
      FUN_180027bd0(&DAT_180ca0a60,uVar1,DAT_180ca0a68);
    }
    else {
      *(undefined8 *)DAT_180ca0a68[1] = 0;
      puVar10 = (undefined8 *)*puVar10;
      while (puVar10 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)*puVar10;
        *(undefined8 *)(puVar16 + -8) = 0x18001950d;
        thunk_FUN_1803d64e0(puVar10,0x20);
        puVar10 = puVar12;
      }
      *DAT_180ca0a68 = DAT_180ca0a68;
      DAT_180ca0a68[1] = DAT_180ca0a68;
      DAT_180ca0a70 = 0;
      local_a8 = DAT_180ca0a68;
      *(undefined8 *)(puVar16 + -8) = 0x180019553;
      FUN_180026a10(DAT_180ca0a78,DAT_180ca0a80,&local_a8);
    }
  }
  local_88[0] = &DAT_180cc4110;
  local_88[1] = &DAT_180cc4080;
  local_88[2] = &DAT_180cc3f80;
  local_88[3] = &DAT_180cc40e0;
  local_88[4] = &DAT_180cc4020;
  local_88[5] = &DAT_180cc4068;
  local_88[6] = &DAT_180cc4050;
  ppuVar17 = local_88;
  do {
    puVar10 = (undefined8 *)(*ppuVar17)[1];
    for (puVar12 = (undefined8 *)**ppuVar17; puVar12 != puVar10; puVar12 = puVar12 + 1) {
      local_a8 = (undefined8 *)*puVar12;
      *(undefined8 *)(puVar16 + -8) = 0x1800195b0;
      lVar7 = FUN_18000f3a0(local_a8 + 2);
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        *(undefined8 *)(puVar16 + -8) = 0x1800195be;
        uVar6 = FUN_180011200(lVar7 + 0x10);
      }
      *(undefined8 *)(puVar16 + -8) = 0x1800195d2;
      plVar9 = (longlong *)FUN_1800272c0();
      *(undefined4 *)(*plVar9 + 0x18) = uVar6;
    }
    ppuVar17 = ppuVar17 + 1;
  } while (ppuVar17 != local_88 + 7);
  plVar9 = (longlong *)*DAT_180cc3fa8;
  if ((longlong *)*DAT_180cc3fa8 != DAT_180cc3fa8) {
    do {
      lVar7 = plVar9[2];
      *(undefined8 *)(puVar16 + -8) = 0x18001962c;
      lVar8 = thunk_FUN_1804e6f30(DAT_180cc4110,DAT_180cc4118,lVar7);
      lVar7 = DAT_180cc3fb8;
      plVar13 = DAT_180cc3fa8;
      if (lVar8 == DAT_180cc4118) {
        uVar11 = (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3 & DAT_180cc3fd0;
        plVar2 = *(longlong **)(DAT_180cc3fb8 + uVar11 * 0x10);
        if (*(longlong **)(DAT_180cc3fb8 + 8 + uVar11 * 0x10) == plVar9) {
          if (plVar2 == plVar9) {
            *(longlong **)(DAT_180cc3fb8 + uVar11 * 0x10) = DAT_180cc3fa8;
            *(longlong **)(lVar7 + 8 + uVar11 * 0x10) = plVar13;
          }
          else {
            *(longlong *)(DAT_180cc3fb8 + 8 + uVar11 * 0x10) = plVar9[1];
          }
        }
        else if (plVar2 == plVar9) {
          *(longlong *)(DAT_180cc3fb8 + uVar11 * 0x10) = *plVar9;
        }
        plVar13 = (longlong *)*plVar9;
        DAT_180cc3fb0 = DAT_180cc3fb0 + -1;
        *(longlong **)plVar9[1] = plVar13;
        plVar13[1] = plVar9[1];
        *(undefined8 *)(puVar16 + -8) = 0x180019701;
        thunk_FUN_1803d64e0(plVar9,0x48);
      }
      else {
        plVar13 = (longlong *)*plVar9;
      }
      plVar9 = plVar13;
    } while (plVar13 != DAT_180cc3fa8);
  }
  plVar9 = (longlong *)*DAT_180cc3f08;
  if ((longlong *)*DAT_180cc3f08 != DAT_180cc3f08) {
    do {
      lVar7 = plVar9[2];
      *(undefined8 *)(puVar16 + -8) = 0x180019747;
      lVar8 = thunk_FUN_1804e6f30(DAT_180cc4080,DAT_180cc4088,lVar7);
      lVar7 = DAT_180cc3f18;
      plVar13 = DAT_180cc3f08;
      if (lVar8 == DAT_180cc4088) {
        uVar11 = (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3 & DAT_180cc3f30;
        plVar2 = *(longlong **)(DAT_180cc3f18 + uVar11 * 0x10);
        if (*(longlong **)(DAT_180cc3f18 + 8 + uVar11 * 0x10) == plVar9) {
          if (plVar2 == plVar9) {
            *(longlong **)(DAT_180cc3f18 + uVar11 * 0x10) = DAT_180cc3f08;
            *(longlong **)(lVar7 + 8 + uVar11 * 0x10) = plVar13;
          }
          else {
            *(longlong *)(DAT_180cc3f18 + 8 + uVar11 * 0x10) = plVar9[1];
          }
        }
        else if (plVar2 == plVar9) {
          *(longlong *)(DAT_180cc3f18 + uVar11 * 0x10) = *plVar9;
        }
        plVar13 = (longlong *)*plVar9;
        DAT_180cc3f10 = DAT_180cc3f10 + -1;
        *(longlong **)plVar9[1] = plVar13;
        plVar13[1] = plVar9[1];
        *(undefined8 *)(puVar16 + -8) = 0x18001981c;
        thunk_FUN_1803d64e0(plVar9,0x20);
      }
      else {
        plVar13 = (longlong *)*plVar9;
      }
      plVar9 = plVar13;
    } while (plVar13 != DAT_180cc3f08);
  }
  plVar9 = (longlong *)*DAT_180cc40a8;
  if ((longlong *)*DAT_180cc40a8 != DAT_180cc40a8) {
    do {
      lVar7 = plVar9[2];
      *(undefined8 *)(puVar16 + -8) = 0x18001985b;
      lVar8 = thunk_FUN_1804e6f30(DAT_180cc3f80,DAT_180cc3f88,lVar7);
      lVar7 = DAT_180cc40b8;
      plVar13 = DAT_180cc40a8;
      if (lVar8 == DAT_180cc3f88) {
        uVar11 = (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3 & DAT_180cc40d0;
        plVar2 = *(longlong **)(DAT_180cc40b8 + uVar11 * 0x10);
        if (*(longlong **)(DAT_180cc40b8 + 8 + uVar11 * 0x10) == plVar9) {
          if (plVar2 == plVar9) {
            *(longlong **)(DAT_180cc40b8 + uVar11 * 0x10) = DAT_180cc40a8;
            *(longlong **)(lVar7 + 8 + uVar11 * 0x10) = plVar13;
          }
          else {
            *(longlong *)(DAT_180cc40b8 + 8 + uVar11 * 0x10) = plVar9[1];
          }
        }
        else if (plVar2 == plVar9) {
          *(longlong *)(DAT_180cc40b8 + uVar11 * 0x10) = *plVar9;
        }
        plVar13 = (longlong *)*plVar9;
        DAT_180cc40b0 = DAT_180cc40b0 + -1;
        *(longlong **)plVar9[1] = plVar13;
        plVar13[1] = plVar9[1];
        *(undefined8 *)(puVar16 + -8) = 0x180019930;
        thunk_FUN_1803d64e0(plVar9,0x20);
      }
      else {
        plVar13 = (longlong *)*plVar9;
      }
      plVar9 = plVar13;
    } while (plVar13 != DAT_180cc40a8);
  }
  plVar9 = (longlong *)*DAT_180cc3ec8;
  if (plVar9 != DAT_180cc3ec8) {
    do {
      lVar7 = plVar9[2];
      *(undefined8 *)(puVar16 + -8) = 0x180019977;
      lVar8 = thunk_FUN_1804e6f30(DAT_180cc40e0,DAT_180cc40e8,lVar7);
      lVar7 = DAT_180cc3ed8;
      plVar13 = DAT_180cc3ec8;
      if (lVar8 == DAT_180cc40e8) {
        uVar11 = (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3 & DAT_180cc3ef0;
        plVar2 = *(longlong **)(DAT_180cc3ed8 + uVar11 * 0x10);
        if (*(longlong **)(DAT_180cc3ed8 + 8 + uVar11 * 0x10) == plVar9) {
          if (plVar2 == plVar9) {
            *(longlong **)(DAT_180cc3ed8 + uVar11 * 0x10) = DAT_180cc3ec8;
            *(longlong **)(lVar7 + 8 + uVar11 * 0x10) = plVar13;
          }
          else {
            *(longlong *)(DAT_180cc3ed8 + 8 + uVar11 * 0x10) = plVar9[1];
          }
        }
        else if (plVar2 == plVar9) {
          *(longlong *)(DAT_180cc3ed8 + uVar11 * 0x10) = *plVar9;
        }
        plVar13 = (longlong *)*plVar9;
        DAT_180cc3ed0 = DAT_180cc3ed0 + -1;
        *(longlong **)plVar9[1] = plVar13;
        plVar13[1] = plVar9[1];
        *(undefined8 *)(puVar16 + -8) = 0x180019a4c;
        thunk_FUN_1803d64e0(plVar9,0x30);
      }
      else {
        plVar13 = (longlong *)*plVar9;
      }
      plVar9 = plVar13;
    } while (plVar13 != DAT_180cc3ec8);
  }
  plVar9 = (longlong *)*DAT_180cc3f48;
  if ((longlong *)*DAT_180cc3f48 != DAT_180cc3f48) {
    do {
      lVar7 = plVar9[2];
      *(undefined8 *)(puVar16 + -8) = 0x180019a8b;
      lVar8 = thunk_FUN_1804e6f30(DAT_180cc4020,DAT_180cc4028,lVar7);
      lVar7 = DAT_180cc3f58;
      plVar13 = DAT_180cc3f48;
      if (lVar8 == DAT_180cc4028) {
        uVar11 = (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3 & DAT_180cc3f70;
        plVar2 = *(longlong **)(DAT_180cc3f58 + uVar11 * 0x10);
        if (*(longlong **)(DAT_180cc3f58 + 8 + uVar11 * 0x10) == plVar9) {
          if (plVar2 == plVar9) {
            *(longlong **)(DAT_180cc3f58 + uVar11 * 0x10) = DAT_180cc3f48;
            *(longlong **)(lVar7 + 8 + uVar11 * 0x10) = plVar13;
          }
          else {
            *(longlong *)(DAT_180cc3f58 + 8 + uVar11 * 0x10) = plVar9[1];
          }
        }
        else if (plVar2 == plVar9) {
          *(longlong *)(DAT_180cc3f58 + uVar11 * 0x10) = *plVar9;
        }
        plVar13 = (longlong *)*plVar9;
        DAT_180cc3f50 = DAT_180cc3f50 + -1;
        *(longlong **)plVar9[1] = plVar13;
        plVar13[1] = plVar9[1];
        *(undefined8 *)(puVar16 + -8) = 0x180019b60;
        thunk_FUN_1803d64e0(plVar9,0x28);
      }
      else {
        plVar13 = (longlong *)*plVar9;
      }
      plVar9 = plVar13;
    } while (plVar13 != DAT_180cc3f48);
  }
  plVar9 = (longlong *)*DAT_180cc3fe8;
  if (plVar9 != DAT_180cc3fe8) {
    do {
      lVar7 = plVar9[2];
      *(undefined8 *)(puVar16 + -8) = 0x180019ba7;
      lVar8 = thunk_FUN_1804e6f30(DAT_180cc4068,DAT_180cc4070,lVar7);
      lVar7 = DAT_180cc3ff8;
      plVar13 = DAT_180cc3fe8;
      if (lVar8 == DAT_180cc4070) {
        uVar11 = (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3 & DAT_180cc4010;
        plVar2 = *(longlong **)(DAT_180cc3ff8 + uVar11 * 0x10);
        if (*(longlong **)(DAT_180cc3ff8 + 8 + uVar11 * 0x10) == plVar9) {
          if (plVar2 == plVar9) {
            *(longlong **)(DAT_180cc3ff8 + uVar11 * 0x10) = DAT_180cc3fe8;
            *(longlong **)(lVar7 + 8 + uVar11 * 0x10) = plVar13;
          }
          else {
            *(longlong *)(DAT_180cc3ff8 + 8 + uVar11 * 0x10) = plVar9[1];
          }
        }
        else if (plVar2 == plVar9) {
          *(longlong *)(DAT_180cc3ff8 + uVar11 * 0x10) = *plVar9;
        }
        plVar13 = (longlong *)*plVar9;
        DAT_180cc3ff0 = DAT_180cc3ff0 + -1;
        *(longlong **)plVar9[1] = plVar13;
        plVar13[1] = plVar9[1];
        *(undefined8 *)(puVar16 + -8) = 0x180019c7c;
        thunk_FUN_1803d64e0(plVar9,0x20);
      }
      else {
        plVar13 = (longlong *)*plVar9;
      }
      plVar9 = plVar13;
    } while (plVar13 != DAT_180cc3fe8);
  }
  *(undefined8 *)(puVar16 + -8) = 0x180019c9d;
  return;
}



/* ===== 180019cc0 FUN_180019cc0 ===== */

void FUN_180019cc0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x138))();
  return;
}



/* ===== 180019ce0 FUN_180019ce0 ===== */

undefined8 FUN_180019ce0(void)

{
  char cVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (DAT_180cf9f78 == 0) {
    hModule = GetModuleHandleA("engine2.dll");
    if (hModule == (HMODULE)0x0) {
      return 0;
    }
    pFVar2 = GetProcAddress(hModule,"CreateInterface");
    if (pFVar2 == (FARPROC)0x0) {
      return 0;
    }
    DAT_180cf9f78 = (*pFVar2)("Source2EngineToClient001",0);
    if (DAT_180cf9f78 == 0) {
      return 0;
    }
  }
  cVar1 = FUN_180019cc0(DAT_180cf9f78);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



/* ===== 180019d50 FUN_180019d50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180019d50(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined **local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_d8;
  lVar2 = *DAT_180961b38;
  if ((lVar2 == 0) || (plVar3 = (longlong *)*DAT_180961b40, plVar3 == (longlong *)0x0)) {
    lVar6 = 0;
  }
  else {
    lVar4 = (*DAT_180961b48)(lVar2,"env_gradient_fog",0);
    lVar6 = 0;
    if (lVar4 != 0) {
      lVar5 = (*DAT_180961b50)(0x38);
      lVar6 = 0;
      if (lVar5 != 0) {
        (*DAT_180961b60)(lVar5,lVar2 + 0xd50,3);
        *(short *)(lVar5 + 0x20) = *(short *)(lVar5 + 0x20) + 1;
        for (ppuVar8 = (undefined **)&DAT_180594080; local_98 = ppuVar8,
            ppuVar8 != &PTR_s_EnemyOnMap_180594230; ppuVar8 = ppuVar8 + 3) {
          lVar6 = (*DAT_180961b70)(lVar5,ppuVar8);
          if (lVar6 != 0) {
            (*DAT_180961b78)(lVar6,ppuVar8[2],2);
          }
        }
        uVar1 = *(undefined4 *)(lVar2 + 0x1fc0);
        puVar7 = (undefined8 *)&DAT_180593fe0;
        if (*(int *)(lVar2 + 0xc48) < 2) {
          puVar7 = (undefined8 *)(lVar2 + 0x1fd0);
        }
        local_78 = *puVar7;
        uStack_70 = puVar7[1];
        local_68 = *(undefined4 *)(puVar7 + 2);
        uStack_64 = *(undefined4 *)((longlong)puVar7 + 0x14);
        uStack_60 = *(undefined4 *)(puVar7 + 3);
        uStack_5c = *(undefined4 *)((longlong)puVar7 + 0x1c);
        local_58 = *(undefined4 *)(puVar7 + 4);
        uStack_54 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uStack_50 = *(undefined4 *)(puVar7 + 5);
        uStack_4c = *(undefined4 *)((longlong)puVar7 + 0x2c);
        local_a0 = 0;
        local_a8 = 0xffffffff;
        local_b0 = 0xffffffff;
        local_b8 = (undefined8 *)((ulonglong)local_b8 & 0xffffffff00000000);
        lVar6 = (*DAT_180961b98)(lVar2,uVar1,lVar4,&DAT_18058b643);
        if (lVar6 != 0) {
          lVar4 = *(longlong *)(lVar6 + 0x10);
          local_80 = 0x1ffffffffffff;
          local_b8 = &local_78;
          local_90 = lVar4;
          local_88 = lVar5;
          (**(code **)(*plVar3 + 0x118))(plVar3,uVar1,1,&local_90);
          if ((*(uint *)(lVar4 + 0x30) & 0x200) == 0) {
            (*DAT_180961ba0)(lVar2,lVar6,lVar5);
            (*DAT_180961ba8)(lVar2);
          }
        }
        *(short *)(lVar5 + 0x20) = *(short *)(lVar5 + 0x20) + -1;
        if (*(short *)(lVar5 + 0x20) < 1) {
          (*DAT_180961b68)(lVar5);
          (*DAT_180961b58)(lVar5,0x38);
        }
      }
    }
  }
  return lVar6;
}



/* ===== 180019f60 FUN_180019f60 ===== */

void FUN_180019f60(void)

{
  (*DAT_180961bc0)(DAT_180ca3c48);
  return;
}



/* ===== 180019f80 FUN_180019f80 ===== */

void FUN_180019f80(void)

{
  longlong *plVar1;
  ULONGLONG UVar2;
  undefined1 local_res8 [32];
  
  if ((DAT_180ca3c48 != 0) && (DAT_180962588 - 1U < 0xfffffffe)) {
    plVar1 = (longlong *)FUN_1803a0940(local_res8);
    if ((*plVar1 == DAT_180ca3c48) && (DAT_180961bc0 != 0)) {
      FUN_180019f60();
      UVar2 = GetTickCount64();
      FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar2,"fog spawn | released");
    }
  }
  DAT_180ca3c48 = 0;
  DAT_180962588 = 0xffffffff;
  DAT_180ca0ddd = 0;
  return;
}



/* ===== 18001a010 FUN_18001a010 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001a010(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ULONGLONG UVar6;
  char *pcVar7;
  undefined1 auStack_1a8 [32];
  int local_188;
  longlong local_178;
  longlong local_170 [3];
  undefined1 local_158 [160];
  char local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  iVar3 = -1;
  if (DAT_180ca3c48 != 0) {
    if ((DAT_180962588 - 1U < 0xfffffffe) &&
       (plVar4 = (longlong *)FUN_1803a0940(local_170), *plVar4 == DAT_180ca3c48)) {
      if (DAT_180ca3c48 != 0) {
        lVar5 = thunk_FUN_1804e6f30(DAT_180cc4110,DAT_180cc4118);
        if (lVar5 == DAT_180cc4118) {
          FUN_1800242d0(&DAT_180cc4110,&DAT_180ca3c48);
          iVar3 = DAT_180962588;
          plVar4 = (longlong *)FUN_1800272c0();
          *(int *)(*plVar4 + 0x18) = iVar3;
          return;
        }
        return;
      }
    }
    else {
      DAT_180ca3c48 = 0;
      DAT_180962588 = -1;
    }
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    return;
  }
  if (DAT_180cc4110 != DAT_180cc4118) {
    return;
  }
  cVar2 = FUN_180019ce0();
  cVar1 = DAT_180cd1304;
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_170);
    lVar5 = local_170[0];
  }
  else {
    lVar5 = DAT_181108a00;
  }
  if (lVar5 == 0) {
    return;
  }
  if (cVar1 == '\0') {
    FUN_1803a0b60(local_170);
    DAT_181108a00 = local_170[0];
    DAT_1811089f8 = FUN_1803a0c50(local_170);
    DAT_180cd1304 = '\x01';
  }
  if (DAT_1811089f8 == 0) {
    return;
  }
  if ((((((DAT_180961b38 == 0) || (DAT_180961b40 == 0)) || (DAT_180961b48 == 0)) ||
       (((DAT_180961b50 == 0 || (DAT_180961b58 == 0)) ||
        ((DAT_180961b60 == 0 || ((DAT_180961b68 == 0 || (DAT_180961b70 == 0)))))))) ||
      (DAT_180961b78 == 0)) ||
     (((DAT_180961b98 == 0 || (DAT_180961ba0 == 0)) || (DAT_180961ba8 == 0)))) {
    if (DAT_180ca0ddd != '\0') {
      DAT_180ca0ddd = 1;
      return;
    }
    UVar6 = GetTickCount64();
    pcVar7 = "fog spawn | spawner helpers MISSING";
  }
  else {
    local_178 = FUN_180019d50();
    if (local_178 != 0) {
      lVar5 = FUN_18000f3a0(local_178 + 0x10);
      if (lVar5 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_180011200(lVar5 + 0x10);
      }
    }
    local_188 = iVar3;
    if (((local_178 != 0) && (iVar3 - 1U < 0xfffffffe)) &&
       (plVar4 = (longlong *)FUN_1803a0940(local_170,iVar3), *plVar4 == local_178)) {
      DAT_180ca3c48 = local_178;
      DAT_180962588 = iVar3;
      FUN_1800242d0(&DAT_180cc4110,&local_178);
      plVar4 = (longlong *)FUN_1800272c0();
      *(int *)(*plVar4 + 0x18) = iVar3;
      FUN_180540170(local_158,0,0xa0);
      snprintf(local_158,0xa0,"fog spawn | env_gradient_fog %p handle %08X",local_178);
      UVar6 = GetTickCount64();
      FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar6,local_158);
      return;
    }
    lVar5 = local_178;
    if (DAT_180ca0ddd != '\0') {
      DAT_180ca0ddd = 1;
      return;
    }
    FUN_180540170(local_b8,0,0xa0);
    snprintf(local_b8,0xa0,"fog spawn | FAILED (entity %p handle %08X)",lVar5);
    UVar6 = GetTickCount64();
    pcVar7 = local_b8;
  }
  FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar6,pcVar7);
  DAT_180ca0ddd = 1;
  return;
}



/* ===== 18001a3b0 FUN_18001a3b0 ===== */

void FUN_18001a3b0(undefined4 param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 uVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  char cVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  char *in_RCX;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte bVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  byte bVar27;
  int *piVar28;
  bool bVar29;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar30;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float fVar31;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float fVar32;
  uint local_res10 [2];
  longlong local_res18;
  float local_res20 [2];
  int local_98 [2];
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  
  plVar4 = DAT_180cc4088;
  if (DAT_180cc3e4c != 0) {
    plVar2 = DAT_180cc4080;
    if ((in_RCX[0x28] == '\0') && (in_RCX[0x54] == '\0')) {
      bVar29 = *in_RCX == '\0';
    }
    else {
      bVar29 = false;
    }
    for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
      local_res18 = *plVar2;
      param_1 = FUN_180025410(param_1,&local_80,&local_res18);
      plVar5 = local_80;
      uVar19 = (ulonglong)DAT_180cc3e4c;
      if (local_78 != '\0') {
        uVar6 = FUN_180011220(uVar19 + local_res18);
        *(undefined1 *)(plVar5 + 3) = uVar6;
        param_1 = extraout_XMM0_Da;
      }
      if (bVar29) {
        if (*(char *)((longlong)plVar5 + 0x19) != '\0') {
          lVar23 = uVar19 + local_res18;
          cVar7 = FUN_180011220(lVar23);
          param_1 = extraout_XMM0_Da_01;
          if (cVar7 != (char)plVar5[3]) {
            param_1 = FUN_1800233d0(lVar23,plVar5 + 3);
          }
          *(undefined1 *)((longlong)plVar5 + 0x19) = 0;
        }
      }
      else {
        local_res10[0] = local_res10[0] & 0xffffff00;
        lVar23 = uVar19 + local_res18;
        cVar7 = FUN_180011220(lVar23);
        param_1 = extraout_XMM0_Da_00;
        if (cVar7 != '\0') {
          param_1 = FUN_1800233d0(lVar23,local_res10);
        }
        *(undefined1 *)((longlong)plVar5 + 0x19) = 1;
      }
    }
  }
  fVar30 = (float)FUN_18001a010(in_RCX);
  if (((((DAT_180cc3e24 != 0) && (DAT_180cc3e28 != 0)) && (DAT_180cc3e2c != 0)) &&
      ((DAT_180cc3e30 != 0 && (DAT_180cc3e34 != 0)))) && (DAT_180cc3e38 != 0)) {
    local_98[0] = FUN_180018c80(in_RCX + 0x2c);
    local_88 = DAT_180cc4110;
    local_80 = DAT_180cc4118;
    fVar30 = extraout_XMM0_Da_02;
    if (DAT_180cc4110 != DAT_180cc4118) {
      do {
        local_90 = *local_88;
        fVar30 = (float)FUN_180025700(fVar30,&local_70,&local_90);
        lVar23 = local_70;
        uVar3 = DAT_180cc3e44;
        uVar17 = DAT_180cc3e40;
        uVar22 = DAT_180cc3e3c;
        uVar26 = (ulonglong)DAT_180cc3e44;
        uVar24 = (ulonglong)DAT_180cc3e40;
        uVar25 = (ulonglong)DAT_180cc3e28;
        uVar19 = (ulonglong)DAT_180cc3e24;
        if (local_68 != '\0') {
          uVar6 = FUN_180011220(uVar19 + local_90);
          *(undefined1 *)(lVar23 + 0x18) = uVar6;
          uVar15 = FUN_180011200(uVar25 + local_90);
          uVar18 = (ulonglong)DAT_180cc3e2c;
          *(undefined4 *)(lVar23 + 0x1c) = uVar15;
          uVar15 = FUN_18000f3d0(uVar18 + local_90);
          uVar18 = (ulonglong)DAT_180cc3e30;
          *(undefined4 *)(lVar23 + 0x20) = uVar15;
          uVar15 = FUN_18000f3d0(uVar18 + local_90);
          uVar18 = (ulonglong)DAT_180cc3e34;
          *(undefined4 *)(lVar23 + 0x24) = uVar15;
          uVar15 = FUN_18000f3d0(uVar18 + local_90);
          uVar18 = (ulonglong)DAT_180cc3e38;
          *(undefined4 *)(lVar23 + 0x28) = uVar15;
          fVar30 = (float)FUN_18000f3d0(uVar18 + local_90);
          *(float *)(lVar23 + 0x2c) = fVar30;
          if (uVar22 != 0) {
            uVar6 = FUN_180011220((ulonglong)uVar22 + local_90);
            *(undefined1 *)(lVar23 + 0x30) = uVar6;
            fVar30 = extraout_XMM0_Da_03;
          }
          if (uVar17 != 0) {
            fVar30 = (float)FUN_18000f3d0(uVar24 + local_90);
            *(float *)(lVar23 + 0x34) = fVar30;
          }
          if (uVar3 != 0) {
            fVar30 = (float)FUN_18000f3d0(uVar26 + local_90);
            *(float *)(lVar23 + 0x38) = fVar30;
          }
          if (DAT_180cc3e48 != 0) {
            fVar30 = (float)FUN_18000f3d0((ulonglong)DAT_180cc3e48 + local_90);
            *(float *)(lVar23 + 0x3c) = fVar30;
          }
        }
        cVar7 = in_RCX[0x28];
        if (cVar7 == '\0') {
          if ((in_RCX[0x45] != '\0') || (*(char *)(lVar23 + 0x40) != '\0')) {
            cVar14 = *(char *)(lVar23 + 0x18);
            goto LAB_18001a65d;
          }
        }
        else {
          cVar14 = '\x01';
LAB_18001a65d:
          lVar20 = uVar19 + local_90;
          local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar14);
          local_res18 = CONCAT71(local_res18._1_7_,cVar14);
          cVar8 = FUN_180011220(lVar20);
          if (cVar8 == cVar14) {
            bVar21 = 0;
          }
          else {
            bVar21 = FUN_1800233d0(lVar20,&local_res18);
          }
          piVar28 = local_98;
          if (cVar7 == '\0') {
            piVar28 = (int *)(lVar23 + 0x1c);
          }
          lVar20 = uVar25 + local_90;
          iVar1 = *piVar28;
          iVar16 = FUN_180011200(lVar20);
          if (iVar16 == iVar1) {
            bVar9 = 0;
          }
          else {
            bVar9 = FUN_180013280(lVar20,piVar28);
          }
          if (cVar7 == '\0') {
            fVar30 = *(float *)(lVar23 + 0x20);
          }
          else {
            fVar30 = *(float *)(in_RCX + 0x38);
          }
          lVar20 = (ulonglong)DAT_180cc3e2c + local_90;
          local_res20[0] = fVar30;
          fVar31 = (float)FUN_18000f3d0(lVar20);
          if (fVar31 == fVar30) {
            bVar10 = 0;
          }
          else {
            bVar10 = FUN_180013280(lVar20,local_res20);
          }
          if (cVar7 == '\0') {
            fVar30 = *(float *)(lVar23 + 0x24);
          }
          else {
            fVar30 = 0.0;
          }
          lVar20 = (ulonglong)DAT_180cc3e30 + local_90;
          local_res20[0] = fVar30;
          fVar31 = (float)FUN_18000f3d0(lVar20);
          if (fVar31 == fVar30) {
            bVar11 = 0;
          }
          else {
            bVar11 = FUN_180013280(lVar20,local_res20);
          }
          if (cVar7 == '\0') {
            fVar30 = *(float *)(lVar23 + 0x28);
          }
          else {
            fVar30 = *(float *)(in_RCX + 0x3c);
          }
          lVar20 = (ulonglong)DAT_180cc3e34 + local_90;
          local_res20[0] = fVar30;
          fVar31 = (float)FUN_18000f3d0(lVar20);
          if (fVar31 == fVar30) {
            bVar12 = 0;
          }
          else {
            bVar12 = FUN_180013280(lVar20,local_res20);
          }
          if (cVar7 == '\0') {
            fVar31 = *(float *)(lVar23 + 0x2c);
          }
          else {
            fVar31 = *(float *)(in_RCX + 0x40);
          }
          lVar20 = (ulonglong)DAT_180cc3e38 + local_90;
          local_res20[0] = fVar31;
          fVar30 = (float)FUN_18000f3d0(lVar20);
          if (fVar30 == fVar31) {
            bVar27 = 0;
          }
          else {
            bVar27 = FUN_180013280(lVar20,local_res20);
            fVar30 = extraout_XMM0_Da_04;
          }
          bVar27 = bVar27 | bVar12 | bVar11 | bVar10 | bVar21 | bVar9;
          cVar14 = in_RCX[0x45];
          if (DAT_180cc3e3c != 0) {
            cVar8 = '\x01';
            if (cVar14 == '\0') {
              cVar8 = *(char *)(lVar23 + 0x30);
            }
            local_res20[0] = (float)CONCAT31(local_res20[0]._1_3_,cVar8);
            lVar20 = (ulonglong)DAT_180cc3e3c + local_90;
            cVar13 = FUN_180011220(lVar20);
            if (cVar13 == cVar8) {
              fVar30 = extraout_XMM0_Da_05;
            }
            else {
              bVar21 = FUN_1800233d0(lVar20,local_res20);
              bVar27 = bVar21 | bVar27;
              fVar30 = extraout_XMM0_Da_06;
            }
          }
          fVar31 = DAT_180cc3d70;
          if (DAT_180cc3e40 != 0) {
            if (cVar14 == '\0') {
              fVar32 = *(float *)(lVar23 + 0x34);
            }
            else {
              fVar32 = DAT_180cc3d70 + *(float *)(in_RCX + 0x48);
            }
            lVar20 = (ulonglong)DAT_180cc3e40 + local_90;
            local_res20[0] = fVar32;
            fVar30 = (float)FUN_18000f3d0(lVar20);
            if (fVar30 == fVar32) {
              bVar21 = 0;
            }
            else {
              bVar21 = FUN_180013280(lVar20,local_res20);
              fVar30 = extraout_XMM0_Da_07;
            }
            bVar27 = bVar27 | bVar21;
          }
          if (DAT_180cc3e44 != 0) {
            if (cVar14 == '\0') {
              fVar31 = *(float *)(lVar23 + 0x38);
            }
            else {
              fVar31 = fVar31 + *(float *)(in_RCX + 0x4c);
            }
            lVar20 = (ulonglong)DAT_180cc3e44 + local_90;
            local_res20[0] = fVar31;
            fVar30 = (float)FUN_18000f3d0(lVar20);
            if (fVar30 == fVar31) {
              bVar21 = 0;
            }
            else {
              bVar21 = FUN_180013280(lVar20,local_res20);
              fVar30 = extraout_XMM0_Da_08;
            }
            bVar27 = bVar27 | bVar21;
          }
          if (DAT_180cc3e48 != 0) {
            if (cVar14 == '\0') {
              fVar31 = *(float *)(lVar23 + 0x3c);
            }
            else {
              fVar31 = *(float *)(in_RCX + 0x50);
            }
            lVar20 = (ulonglong)DAT_180cc3e48 + local_90;
            local_res20[0] = fVar31;
            fVar30 = (float)FUN_18000f3d0(lVar20);
            if (fVar30 == fVar31) {
              bVar21 = 0;
            }
            else {
              bVar21 = FUN_180013280(lVar20,local_res20);
              fVar30 = extraout_XMM0_Da_09;
            }
            bVar27 = bVar27 | bVar21;
          }
          if (bVar27 != 0) {
            FUN_180017580(local_90,0xd,0);
            lVar20 = (ulonglong)DAT_180cc3e24 + local_90;
            cVar8 = FUN_180011220(lVar20);
            fVar30 = extraout_XMM0_Da_10;
            if (cVar8 != (char)local_res10[0]) {
              fVar30 = (float)FUN_1800233d0(lVar20,&local_res18);
            }
          }
          *(bool *)(lVar23 + 0x40) = cVar14 != '\0' || cVar7 != '\0';
        }
        local_88 = local_88 + 1;
      } while (local_88 != local_80);
    }
  }
  plVar4 = DAT_180cc3f88;
  if (DAT_180cc3e50 != 0) {
    plVar2 = DAT_180cc3f80;
    if ((in_RCX[0x28] == '\0') || (in_RCX[0x44] == '\0')) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    for (; plVar2 != plVar4; plVar2 = plVar2 + 1) {
      local_res18 = *plVar2;
      fVar30 = (float)FUN_180025a00(fVar30,&local_70,&local_res18);
      lVar23 = local_70;
      uVar19 = (ulonglong)DAT_180cc3e50;
      if (local_68 != '\0') {
        uVar15 = FUN_180011200(uVar19 + local_res18);
        *(undefined4 *)(lVar23 + 0x18) = uVar15;
        fVar30 = extraout_XMM0_Da_11;
      }
      if (cVar7 == '\0') {
        if (*(char *)(lVar23 + 0x1c) != '\0') {
          uVar22 = *(uint *)(lVar23 + 0x18);
          goto LAB_18001a9f9;
        }
      }
      else {
        uVar22 = 1;
LAB_18001a9f9:
        lVar20 = uVar19 + local_res18;
        local_res10[0] = uVar22;
        uVar17 = FUN_180011200(lVar20);
        fVar30 = extraout_XMM0_Da_12;
        if (uVar17 != uVar22) {
          cVar14 = FUN_180013280(lVar20,local_res10);
          fVar30 = extraout_XMM0_Da_13;
          if ((cVar14 != '\0') && (DAT_180ca3c30 != 0)) {
            fVar30 = (float)FUN_1800175a0(DAT_180ca3c30,local_res18);
          }
        }
        *(char *)(lVar23 + 0x1c) = cVar7;
      }
    }
  }
  return;
}



/* ===== 18001aa60 FUN_18001aa60 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_18001aa60(uint param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  auVar2._4_4_ = param_1;
  auVar2._0_4_ = param_1;
  auVar2._8_4_ = param_1;
  auVar2._12_4_ = param_1;
  if (DAT_1809194c8 < 5) {
    return ((int)((float)(param_1 >> 0x10 & 0xff) * param_2[2]) & 0xffU) << 0x10 |
           ((int)((float)(param_1 >> 8 & 0xff) * param_2[1]) & 0xffU) << 8 |
           (int)((float)(param_1 >> 0x18) * param_2[3]) << 0x18 |
           (int)((float)(param_1 & 0xff) * *param_2) & 0xffU;
  }
  auVar2 = vpsrlvd_avx2(auVar2,_DAT_1808ad7a0);
  uVar3 = auVar2._0_4_ & _DAT_1808ad830;
  uVar4 = auVar2._4_4_ & _UNK_1808ad834;
  uVar5 = auVar2._8_4_ & _UNK_1808ad838;
  uVar6 = auVar2._12_4_ & _UNK_1808ad83c;
  auVar1._0_4_ = (int)(((float)(uVar3 >> 8) * _DAT_1808ade40 + (float)(int)(_DAT_1808ad830 & uVar3))
                      * *param_2) & _DAT_1808ad830;
  auVar1._4_4_ = (int)(((float)(uVar4 >> 8) * _UNK_1808ade44 + (float)(int)(_UNK_1808ad834 & uVar4))
                      * param_2[1]) & _UNK_1808ad834;
  auVar1._8_4_ = (int)(((float)(uVar5 >> 8) * _UNK_1808ade48 + (float)(int)(_UNK_1808ad838 & uVar5))
                      * param_2[2]) & _UNK_1808ad838;
  auVar1._12_4_ =
       (int)(((float)(uVar6 >> 8) * _UNK_1808ade4c + (float)(int)(_UNK_1808ad83c & uVar6)) *
            param_2[3]) & _UNK_1808ad83c;
  auVar2 = vpsllvd_avx2(auVar1,_DAT_1808ad7a0);
  auVar2 = auVar2 | auVar2 >> 0x40;
  return auVar2._0_4_ | auVar2._4_4_;
}



/* ===== 18001ab60 FUN_18001ab60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001ab60(float param_1)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  float *pfVar16;
  longlong in_RCX;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  longlong lVar21;
  char cVar22;
  longlong *plVar23;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar24;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  undefined1 auStack_f8 [32];
  char local_d8;
  char local_d7 [7];
  longlong local_d0;
  float local_c8 [2];
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  float local_80;
  float local_7c;
  float local_78;
  ulonglong local_70;
  
  uVar3 = _DAT_1808ade90;
  fVar12 = DAT_1808acbd0;
  fVar2 = DAT_1808abf80;
  local_70 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if (((DAT_180cc3e54 != 0) && (DAT_180cc3e58 != 0)) && (DAT_180cc3e5c != 0)) {
    local_a8 = DAT_180cc40e0;
    local_b0 = DAT_180cc40e8;
    if (DAT_180cc40e0 != DAT_180cc40e8) {
      do {
        local_d0 = *local_a8;
        lVar13 = FUN_18000f3a0((ulonglong)DAT_180cc3e54 + local_d0);
        param_1 = extraout_XMM0_Da;
        if (lVar13 - 0x10000U < 0x7ffffffeffff) {
          if ((local_d0 == 0) || (DAT_180ca09f8 == 0)) {
            lVar14 = 0;
            fVar24 = extraout_XMM0_Da;
          }
          else {
            lVar14 = FUN_18000f3a0((ulonglong)DAT_180ca09f8 + local_d0);
            fVar24 = extraout_XMM0_Da_00;
          }
          param_1 = (float)FUN_180025cf0(fVar24,&local_c0,&local_d0);
          lVar6 = local_c0;
          uVar4 = DAT_180cc3e6c;
          uVar20 = (ulonglong)DAT_180cc3e6c;
          uVar18 = (ulonglong)DAT_180cc3e58;
          if (local_b8 != '\0') {
            uVar7 = FUN_180011220(uVar18 + lVar13);
            uVar17 = (ulonglong)DAT_180cc3e5c;
            *(undefined1 *)(lVar6 + 0x18) = uVar7;
            uVar10 = FUN_180011200(uVar17 + lVar13);
            *(undefined4 *)(lVar6 + 0x1c) = uVar10;
            param_1 = extraout_XMM0_Da_01;
            if ((lVar14 != 0) && (uVar4 != 0)) {
              puVar15 = (undefined4 *)FUN_1800111b0(local_a0,lVar14 + uVar20);
              param_1 = (float)puVar15[1];
              uVar10 = puVar15[2];
              uVar1 = *puVar15;
              *(float *)(lVar6 + 0x24) = param_1;
              *(undefined4 *)(lVar6 + 0x28) = uVar10;
              *(undefined4 *)(lVar6 + 0x20) = uVar1;
            }
          }
          if ((*(char *)(in_RCX + 0xb0) == '\0') && (*(char *)(in_RCX + 0xb3) == '\0')) {
            local_d8 = '\0';
            if (*(char *)(lVar6 + 0x2c) == '\0') goto LAB_18001aee5;
          }
          else {
            local_d8 = '\x01';
          }
          local_80 = *(float *)(lVar6 + 0x20);
          cVar22 = *(char *)(lVar6 + 0x18);
          local_c8[0] = *(float *)(lVar6 + 0x1c);
          local_7c = *(float *)(lVar6 + 0x24);
          local_78 = *(float *)(lVar6 + 0x28);
          if (*(char *)(in_RCX + 0xb0) == '\0') {
            local_d7[0] = cVar22;
            if (*(char *)(in_RCX + 0xb3) != '\0') {
              if (*(char *)(in_RCX + 0xbc) != '\0') {
                fVar11 = (float)*(int *)(in_RCX + 0xc0) + *(float *)(lVar6 + 0x20);
                fVar24 = (float)FUN_180519080(fVar11 / fVar12);
                local_80 = fVar11 - fVar24 * fVar12;
                fVar11 = (float)*(int *)(in_RCX + 0xc4) + *(float *)(lVar6 + 0x24);
                fVar24 = (float)FUN_180519080(fVar11 / fVar12);
                local_7c = fVar11 - fVar24 * fVar12;
                fVar24 = *(float *)(lVar6 + 0x28);
                fVar11 = (float)FUN_180519080(fVar24 / fVar12);
                local_78 = fVar24 - fVar11 * fVar12;
              }
              if (*(int *)(in_RCX + 0xb4) == 0) {
                local_c8[0] = (float)FUN_18001aa60(*(undefined4 *)(lVar6 + 0x1c),in_RCX + 200);
              }
              else {
                local_c8[0] = (float)FUN_180018c80(in_RCX + 200);
              }
            }
          }
          else {
            local_d7[0] = '\0';
            cVar22 = '\0';
          }
          fVar24 = local_c8[0];
          lVar21 = uVar18 + lVar13;
          cVar8 = FUN_180011220(lVar21);
          if (cVar8 == cVar22) {
            bVar9 = 0;
          }
          else {
            bVar9 = FUN_1800233d0(lVar21,local_d7);
          }
          uVar20 = (ulonglong)DAT_180cc3e5c;
          fVar11 = (float)FUN_180011200(uVar20 + lVar13);
          if (fVar11 == fVar24) {
            bVar19 = 0;
            param_1 = extraout_XMM0_Da_02;
          }
          else {
            bVar19 = FUN_180013280(uVar20 + lVar13,local_c8);
            param_1 = extraout_XMM0_Da_03;
          }
          bVar19 = bVar19 | bVar9;
          if ((((lVar14 != 0) && (DAT_180cc3e6c != 0)) && (DAT_180961bb8 != 0)) &&
             (((pfVar16 = (float *)FUN_1800111b0(local_90,lVar14 + (ulonglong)DAT_180cc3e6c),
               fVar2 < (float)((uint)(*pfVar16 - local_80) & uVar3) ||
               (fVar2 < (float)((uint)(pfVar16[1] - local_7c) & uVar3))) ||
              (param_1 = (float)((uint)(pfVar16[2] - local_78) & uVar3), fVar2 < param_1)))) {
            bVar9 = FUN_1800175c0(DAT_180961bb8,local_d0,&local_80);
            bVar19 = bVar19 | bVar9;
            param_1 = extraout_XMM0_Da_04;
          }
          if (bVar19 != 0) {
            param_1 = (float)FUN_180017580(local_d0,10,2);
          }
          *(char *)(lVar6 + 0x2c) = local_d8;
        }
LAB_18001aee5:
        local_a8 = local_a8 + 1;
      } while (local_a8 != local_b0);
    }
  }
  if ((DAT_180cc3e60 != 0) && (DAT_180cc3e64 != 0)) {
    local_b0 = DAT_180cc4028;
    plVar23 = DAT_180cc4020;
    if (DAT_180cc4020 != DAT_180cc4028) {
      do {
        local_d0 = *plVar23;
        param_1 = (float)FUN_180025fe0(param_1,&local_c0,&local_d0);
        lVar13 = local_c0;
        uVar20 = (ulonglong)DAT_180cc3e60;
        if (local_b8 != '\0') {
          uVar7 = FUN_180011220(uVar20 + local_d0);
          uVar18 = (ulonglong)DAT_180cc3e64;
          *(undefined1 *)(lVar13 + 0x18) = uVar7;
          uVar10 = FUN_180011200(uVar18 + local_d0);
          *(undefined4 *)(lVar13 + 0x1c) = uVar10;
          param_1 = extraout_XMM0_Da_05;
        }
        if ((*(char *)(in_RCX + 0xb2) == '\0') && (*(char *)(in_RCX + 0xb3) == '\0')) {
          uVar7 = 0;
          if (*(char *)(lVar13 + 0x20) != '\0') goto LAB_18001afbb;
        }
        else {
          uVar7 = 1;
LAB_18001afbb:
          cVar22 = *(char *)(lVar13 + 0x18);
          local_c8[0] = *(float *)(lVar13 + 0x1c);
          if (*(char *)(in_RCX + 0xb2) == '\0') {
            local_d8 = cVar22;
            if (*(char *)(in_RCX + 0xb3) != '\0') {
              if (*(int *)(in_RCX + 0xb4) == 0) {
                local_c8[0] = (float)FUN_18001aa60(local_c8[0],in_RCX + 0xd8);
              }
              else {
                local_c8[0] = (float)FUN_180018c80(in_RCX + 0xd8);
              }
            }
          }
          else {
            local_d8 = '\0';
            cVar22 = '\0';
          }
          fVar2 = local_c8[0];
          lVar14 = uVar20 + local_d0;
          cVar8 = FUN_180011220(lVar14);
          if (cVar8 == cVar22) {
            cVar22 = '\0';
          }
          else {
            cVar22 = FUN_1800233d0(lVar14,&local_d8);
          }
          lVar14 = (ulonglong)DAT_180cc3e64 + local_d0;
          fVar12 = (float)FUN_180011200(lVar14);
          if (fVar12 == fVar2) {
            cVar8 = '\0';
            param_1 = extraout_XMM0_Da_06;
          }
          else {
            cVar8 = FUN_180013280(lVar14,local_c8);
            param_1 = extraout_XMM0_Da_07;
          }
          if ((cVar22 != '\0' || cVar8 != '\0') &&
             (param_1 = (float)FUN_180017580(local_d0,10,2), DAT_180ca3c38 != 0)) {
            param_1 = (float)FUN_1800175a0(DAT_180ca3c38,local_d0);
          }
          *(undefined1 *)(lVar13 + 0x20) = uVar7;
        }
        plVar23 = plVar23 + 1;
      } while (plVar23 != local_b0);
    }
  }
  plVar5 = DAT_180cc4070;
  fVar2 = DAT_1808ac34c;
  plVar23 = DAT_180cc4068;
  if (DAT_180cc3e68 != 0) {
    for (; plVar23 != plVar5; plVar23 = plVar23 + 1) {
      local_d0 = *plVar23;
      param_1 = (float)FUN_1800262d0(param_1,&local_c0,&local_d0);
      lVar13 = local_c0;
      uVar20 = (ulonglong)DAT_180cc3e68;
      if (local_b8 != '\0') {
        param_1 = (float)FUN_18000f3d0(uVar20 + local_d0);
        *(float *)(lVar13 + 0x18) = param_1;
      }
      if (*(float *)(in_RCX + 0xb8) == fVar2) {
        uVar7 = 0;
        if (*(char *)(lVar13 + 0x1c) != '\0') goto LAB_18001b123;
      }
      else {
        uVar7 = 1;
LAB_18001b123:
        fVar12 = *(float *)(in_RCX + 0xb8) * *(float *)(lVar13 + 0x18);
        lVar14 = uVar20 + local_d0;
        local_c8[0] = fVar12;
        param_1 = (float)FUN_18000f3d0(lVar14);
        if (param_1 != fVar12) {
          cVar22 = FUN_180013280(lVar14,local_c8);
          param_1 = extraout_XMM0_Da_08;
          if (cVar22 != '\0') {
            param_1 = (float)FUN_180017580(local_d0,10,2);
          }
        }
        *(undefined1 *)(lVar13 + 0x1c) = uVar7;
      }
    }
  }
  return;
}



/* ===== 18001b1b0 FUN_18001b1b0 ===== */

void FUN_18001b1b0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  
  plVar5 = DAT_180cc3f08;
  uVar10 = DAT_180cc3e4c;
  plVar9 = (longlong *)*DAT_180cc3f08;
  if (plVar9 != DAT_180cc3f08) {
    uVar11 = (ulonglong)DAT_180cc3e4c;
    do {
      if ((*(char *)((longlong)plVar9 + 0x19) != '\0') && (uVar10 != 0)) {
        FUN_1800233d0(uVar11 + plVar9[2],plVar9 + 3);
      }
      *(undefined1 *)((longlong)plVar9 + 0x19) = 0;
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != plVar5);
  }
  plVar5 = DAT_180cc3fa8;
  plVar9 = (longlong *)*DAT_180cc3fa8;
  if (plVar9 != DAT_180cc3fa8) {
    uVar10 = DAT_180cc3e24;
    do {
      if ((char)plVar9[8] != '\0') {
        FUN_1800233d0((ulonglong)uVar10 + plVar9[2],plVar9 + 3);
        FUN_180013280((ulonglong)DAT_180cc3e28 + plVar9[2],(longlong)plVar9 + 0x1c);
        FUN_180013280((ulonglong)DAT_180cc3e2c + plVar9[2],plVar9 + 4);
        FUN_180013280((ulonglong)DAT_180cc3e30 + plVar9[2],(longlong)plVar9 + 0x24);
        FUN_180013280((ulonglong)DAT_180cc3e34 + plVar9[2],plVar9 + 5);
        FUN_180013280((ulonglong)DAT_180cc3e38 + plVar9[2],(longlong)plVar9 + 0x2c);
        FUN_180017580(plVar9[2],0xd,0);
        uVar10 = DAT_180cc3e24;
        FUN_1800233d0((ulonglong)DAT_180cc3e24 + plVar9[2],plVar9 + 3);
        *(undefined1 *)(plVar9 + 8) = 0;
      }
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != plVar5);
  }
  plVar5 = DAT_180cc40a8;
  plVar9 = (longlong *)*DAT_180cc40a8;
  if (plVar9 != DAT_180cc40a8) {
    lVar8 = DAT_180ca3c30;
    uVar10 = DAT_180cc3e50;
    do {
      if ((*(char *)((longlong)plVar9 + 0x1c) != '\0') && (uVar10 != 0)) {
        lVar1 = plVar9[2];
        iVar7 = FUN_180011200((ulonglong)uVar10 + lVar1);
        if ((iVar7 != (int)plVar9[3]) &&
           ((cVar6 = FUN_180013280((ulonglong)uVar10 + lVar1,plVar9 + 3), cVar6 != '\0' &&
            (lVar8 != 0)))) {
          FUN_1800175a0(lVar8,plVar9[2]);
          lVar8 = DAT_180ca3c30;
          uVar10 = DAT_180cc3e50;
        }
      }
      *(undefined1 *)((longlong)plVar9 + 0x1c) = 0;
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != plVar5);
  }
  puVar3 = DAT_180cc3ec8;
  puVar4 = DAT_180cc3f48;
  for (puVar2 = (undefined8 *)*DAT_180cc3ec8; DAT_180cc3f48 = puVar4, puVar2 != puVar3;
      puVar2 = (undefined8 *)*puVar2) {
    if (*(char *)((longlong)puVar2 + 0x2c) != '\0') {
      lVar8 = FUN_18000f3a0((ulonglong)DAT_180cc3e54 + puVar2[2]);
      if (lVar8 - 0x10000U < 0x7ffffffeffff) {
        FUN_1800233d0((ulonglong)DAT_180cc3e58 + lVar8,puVar2 + 3);
        FUN_180013280((ulonglong)DAT_180cc3e5c + lVar8,(longlong)puVar2 + 0x1c);
      }
      if (DAT_180961bb8 != 0) {
        FUN_1800175c0(DAT_180961bb8,puVar2[2],puVar2 + 4);
      }
      FUN_180017580(puVar2[2],10,2);
      *(undefined1 *)((longlong)puVar2 + 0x2c) = 0;
    }
    puVar4 = DAT_180cc3f48;
  }
  puVar3 = DAT_180cc3fe8;
  for (puVar2 = (undefined8 *)*puVar4; DAT_180cc3fe8 = puVar3, puVar2 != puVar4;
      puVar2 = (undefined8 *)*puVar2) {
    if (*(char *)(puVar2 + 4) != '\0') {
      FUN_1800233d0((ulonglong)DAT_180cc3e60 + puVar2[2],puVar2 + 3);
      FUN_180013280((ulonglong)DAT_180cc3e64 + puVar2[2],(longlong)puVar2 + 0x1c);
      FUN_180017580(puVar2[2],10,2);
      if (DAT_180ca3c38 != 0) {
        FUN_1800175a0(DAT_180ca3c38,puVar2[2]);
      }
      *(undefined1 *)(puVar2 + 4) = 0;
    }
    puVar3 = DAT_180cc3fe8;
  }
  for (puVar2 = (undefined8 *)*puVar3; puVar2 != puVar3; puVar2 = (undefined8 *)*puVar2) {
    if (*(char *)((longlong)puVar2 + 0x1c) != '\0') {
      FUN_180013280((ulonglong)DAT_180cc3e68 + puVar2[2],puVar2 + 3);
      FUN_180017580(puVar2[2],10,2);
      *(undefined1 *)((longlong)puVar2 + 0x1c) = 0;
    }
  }
  return;
}



/* ===== 18001b4c0 FUN_18001b4c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18001b4c0(undefined8 *param_1)

{
  ULONGLONG UVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_e8;
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    UVar1 = GetTickCount64();
    if (UVar1 < (ulonglong)param_1[4]) {
      lVar2 = 0;
    }
    else {
      param_1[4] = UVar1 + 1000;
      lVar2 = FUN_180264b70(*param_1);
      param_1[1] = lVar2;
      if (*(char *)((longlong)param_1 + 0x11) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x11) = 1;
        FUN_180540170(local_b8,0,0xa0);
        local_c8 = "MISSING";
        if (lVar2 != 0) {
          local_c8 = "found";
        }
        snprintf(local_b8,0xa0,"convar | %s %s",*param_1);
        UVar1 = GetTickCount64();
        FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar1,local_b8);
      }
      lVar2 = param_1[1];
    }
  }
  return lVar2;
}



/* ===== 18001b5c0 FUN_18001b5c0 ===== */

void FUN_18001b5c0(longlong param_1,char param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (((param_2 != '\0') || (*(char *)(param_1 + 0x10) != '\0')) &&
     (lVar3 = FUN_18001b4c0(), lVar3 != 0)) {
    if (param_2 == '\0') {
      FUN_180264d90(lVar3,*(undefined8 *)(param_1 + 0x18));
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    else {
      if (*(char *)(param_1 + 0x10) == '\0') {
        uVar1 = FUN_180264d70(lVar3);
        *(undefined8 *)(param_1 + 0x18) = uVar1;
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      iVar2 = FUN_180264d70(lVar3);
      if (iVar2 != param_3) {
        FUN_180264d90(lVar3,param_3);
        return;
      }
    }
  }
  return;
}



/* ===== 18001b670 FUN_18001b670 ===== */

void FUN_18001b670(char param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((param_1 != '\0') || (DAT_180962828 != '\0')) &&
     (lVar1 = FUN_18001b4c0(&PTR_s_lb_enable_baked_shadows_180962818), lVar1 != 0)) {
    if (param_1 == '\0') {
      FUN_180264d90(lVar1,DAT_180962830);
      DAT_180962828 = '\0';
    }
    else {
      if (DAT_180962828 == '\0') {
        DAT_180962830 = FUN_180264d70(lVar1);
        DAT_180962828 = '\x01';
      }
      uVar2 = FUN_180264d70(lVar1);
      if ((char)uVar2 != '\0') {
        FUN_180264d90(lVar1,uVar2 & 0xffffffffffffff00);
        return;
      }
    }
  }
  return;
}



/* ===== 18001b710 FUN_18001b710 ===== */

void FUN_18001b710(char param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((param_1 != '\0') || (DAT_180962570 != '\0')) &&
     (lVar1 = FUN_18001b4c0(&PTR_s_r_shadows_180962560), lVar1 != 0)) {
    if (param_1 == '\0') {
      FUN_180264d90(lVar1,DAT_180962578);
      DAT_180962570 = '\0';
    }
    else {
      if (DAT_180962570 == '\0') {
        DAT_180962578 = FUN_180264d70(lVar1);
        DAT_180962570 = '\x01';
      }
      uVar2 = FUN_180264d70(lVar1);
      if ((char)uVar2 != '\0') {
        FUN_180264d90(lVar1,uVar2 & 0xffffffffffffff00);
        return;
      }
    }
  }
  return;
}



/* ===== 18001b7b0 FUN_18001b7b0 ===== */

void FUN_18001b7b0(char param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  
  if ((((param_1 == '\0') || (1 < param_2 - 1U)) ||
      (lVar1 = FUN_18001b4c0(&PTR_s_r_dof2_radiusscale_1809625e0), lVar1 == 0)) ||
     (lVar1 = FUN_18001b4c0(&PTR_s_r_dof2_maxblursize_180962840), lVar1 == 0)) {
    cVar3 = '\0';
    if (DAT_1809625f0 == '\0') goto LAB_18001b885;
  }
  else {
    cVar3 = '\x01';
  }
  lVar1 = FUN_18001b4c0(&PTR_s_r_dof2_radiusscale_1809625e0);
  if (lVar1 != 0) {
    if (cVar3 == '\0') {
      FUN_180264d90(lVar1,DAT_1809625f8);
      DAT_1809625f0 = '\0';
    }
    else {
      if (DAT_1809625f0 == '\0') {
        DAT_1809625f8 = FUN_180264d70(lVar1);
        DAT_1809625f0 = '\x01';
      }
      uVar2 = FUN_180264d70(lVar1);
      if ((int)uVar2 != 0x3f000000) {
        FUN_180264d90(lVar1,uVar2 & 0xffffffff3f000000 | 0x3f000000);
      }
    }
  }
LAB_18001b885:
  if (param_2 == 1) {
    uVar4 = DAT_1808ac750;
  }
  else {
    uVar4 = DAT_1808ac710;
  }
  FUN_18001b5c0(&PTR_s_r_dof2_maxblursize_180962840,cVar3,uVar4);
  return;
}



/* ===== 18001b8c0 FUN_18001b8c0 ===== */

void FUN_18001b8c0(void)

{
  longlong lVar1;
  
  if (DAT_180962828 != '\0') {
    lVar1 = FUN_18001b4c0(&PTR_s_lb_enable_baked_shadows_180962818);
    if (lVar1 != 0) {
      FUN_180264d90(lVar1,DAT_180962830);
      DAT_180962828 = '\0';
    }
  }
  if (DAT_180962570 != '\0') {
    lVar1 = FUN_18001b4c0(&PTR_s_r_shadows_180962560);
    if (lVar1 != 0) {
      FUN_180264d90(lVar1,DAT_180962578);
      DAT_180962570 = '\0';
    }
  }
  if (DAT_1809625f0 != '\0') {
    lVar1 = FUN_18001b4c0(&PTR_s_r_dof2_radiusscale_1809625e0);
    if (lVar1 != 0) {
      FUN_180264d90(lVar1,DAT_1809625f8);
      DAT_1809625f0 = '\0';
    }
  }
  FUN_18001b5c0(&PTR_s_r_dof2_maxblursize_180962840,0,DAT_1808ac710);
  return;
}



/* ===== 18001b970 FUN_18001b970 ===== */

void FUN_18001b970(void)

{
  (*DAT_180962538)(*DAT_180962530,0);
  return;
}



/* ===== 18001b9a0 FUN_18001b9a0 ===== */

void FUN_18001b9a0(longlong *param_1)

{
  (**(code **)((ulonglong)(DAT_180962540 + 8) + *param_1))();
  return;
}



/* ===== 18001b9c0 FUN_18001b9c0 ===== */

void FUN_18001b9c0(longlong *param_1)

{
  (**(code **)((ulonglong)DAT_180962540 + *param_1))();
  return;
}



/* ===== 18001b9e0 FUN_18001b9e0 ===== */

void FUN_18001b9e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)((ulonglong)(DAT_180962544 + 8) + *param_1))
            (param_1,param_2,param_3,param_3 + 4,param_3 + 8,param_3 + 0xc,param_3 + 0x10);
  return;
}



/* ===== 18001ba40 FUN_18001ba40 ===== */

void FUN_18001ba40(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  (**(code **)((ulonglong)DAT_180962544 + *param_1))
            (param_3[2],param_3[3],*param_3,param_3[1],param_3[2],param_3[3],param_3[4]);
  return;
}



/* ===== 18001ba90 FUN_18001ba90 ===== */

void FUN_18001ba90(longlong *param_1)

{
  (**(code **)((ulonglong)DAT_180962548 + *param_1))();
  return;
}



/* ===== 18001bab0 FUN_18001bab0 ===== */

void FUN_18001bab0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  
  plVar3 = DAT_180cc4058;
  plVar2 = DAT_180cc4050;
  if (DAT_180962554 != 0) {
    for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
      lVar1 = *plVar2;
      cVar5 = FUN_180019050(lVar1);
      if (cVar5 != '\0') {
        if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
          DAT_1811161d8 = '\x01';
          DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
        }
        uVar4 = DAT_1811161dc;
        if ((((lVar1 != 0) && (DAT_1811161dc != 0)) &&
            (lVar7 = FUN_18000f3a0(lVar1 + 0x10), lVar7 - 0x10000U < 0x7ffffffeffff)) &&
           ((lVar8 = FUN_18000f3a0(lVar7), lVar8 == lVar1 &&
            (iVar6 = FUN_180011200((ulonglong)uVar4 + lVar7), iVar6 == 0)))) {
          local_res8[0] = 0;
          FUN_180013280((ulonglong)DAT_180962554 + lVar1,local_res8);
        }
      }
    }
  }
  return;
}



/* ===== 18001bbe0 FUN_18001bbe0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001bbe0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_180ca3ce1 != '\0') {
    if ((((DAT_18096255c != '\0') && (DAT_180ca3cd8 != 0)) &&
        (lVar1 = FUN_18000f3a0(DAT_180962528), lVar1 != 0)) &&
       (lVar2 = FUN_18001b970(), lVar2 == DAT_180ca3cd8)) {
      FUN_18001b9c0(lVar1,DAT_180ca3cd8,DAT_180ca3ce0);
      if (DAT_180ca3cd4 == '\0') {
        FUN_18001ba90(lVar1,DAT_180ca3cd8);
      }
      else {
        FUN_18001ba40(lVar1,DAT_180ca3cd8,&DAT_180ca3cc0);
      }
    }
    FUN_18001bab0();
    DAT_180ca3cd4 = '\0';
    DAT_180ca3cd8 = 0;
    _DAT_180ca3ce0 = 0;
  }
  DAT_180ca3ce2 = 0;
  return;
}



/* ===== 18001bca0 FUN_18001bca0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001bca0(char param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ULONGLONG UVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  uint local_1b8;
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  float local_1a0;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  undefined1 local_168 [256];
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1f8;
  lVar8 = FUN_1800f1c60();
  if (((param_1 == '\0') || (*(char *)(lVar8 + 0x2c4) == '\0')) || (DAT_18096255c == '\0')) {
LAB_18001c16d:
    FUN_18001bbe0();
    return;
  }
  lVar9 = FUN_18000f3a0(DAT_180962528);
  if (lVar9 == 0) {
    return;
  }
  lVar10 = FUN_18001b970();
  if (lVar10 == 0) goto LAB_18001c16d;
  if ((DAT_180ca3ce1 != '\0') && (DAT_180ca3cd8 != lVar10)) {
    FUN_18001bbe0();
  }
  bVar12 = DAT_180ca3ce1 == '\0';
  if (bVar12) {
    DAT_180ca3cd8 = lVar10;
    DAT_180ca3ce0 = FUN_18001b9a0(lVar9,lVar10);
    DAT_180ca3cd4 = FUN_18001b9e0(lVar9,lVar10,&DAT_180ca3cc0);
    DAT_180ca3ce1 = '\x01';
  }
  cVar5 = FUN_18001b9a0(lVar9,lVar10);
  if (cVar5 == '\0') {
    FUN_18001b9c0(lVar9,lVar10,1);
  }
  local_19c = 0;
  local_178 = 0.0;
  fVar14 = (float)(int)*(undefined8 *)(lVar8 + 0x2cc) * _DAT_1808ad8e0;
  fVar15 = (float)(int)((ulonglong)*(undefined8 *)(lVar8 + 0x2cc) >> 0x20) * _UNK_1808ad8e4;
  fVar13 = (float)*(int *)(lVar8 + 0x2c8) * DAT_1808ac000 + DAT_1808abf80;
  local_188 = 0;
  uStack_180 = 0;
  local_194 = CONCAT44(fVar15,fVar14);
  local_1a0 = fVar13;
  cVar6 = FUN_18001b9e0(lVar9,lVar10,&local_188);
  if (((cVar6 == '\0') || ((float)local_188 != fVar13)) ||
     ((local_188._4_4_ != 0.0 ||
      ((((float)uStack_180 != 0.0 || (uStack_180._4_4_ != fVar14)) || (local_178 != fVar15)))))) {
    FUN_18001ba40(lVar9,lVar10,&local_1a0);
  }
  else if (cVar5 != '\0' && !bVar12) goto LAB_18001be98;
  FUN_18001bab0();
LAB_18001be98:
  if (DAT_180ca3ce3 == '\0') {
    DAT_180ca3ce3 = '\x01';
    FUN_180540170(local_168,0,0x100);
    local_1d8 = (uint)DAT_180ca3cd4;
    local_1b8 = (uint)DAT_180ca3ce0;
    local_1c0 = (double)DAT_180ca3cd0;
    local_1c8 = (double)DAT_180ca3ccc;
    local_1d0 = (double)DAT_180ca3cc0;
    snprintf(local_168,0x100,
             "model wetness | world %p | map params saved %d (rain %.2f coverage %.2f drying %.2f) enabled %d"
             ,lVar10);
    UVar11 = GetTickCount64();
    FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar11,local_168);
  }
  if (DAT_180ca3ce2 != *(char *)(lVar8 + 0x2d4)) {
    DAT_180ca3ce2 = *(char *)(lVar8 + 0x2d4);
    FUN_18001bab0();
  }
  if (((*(char *)(lVar8 + 0x2d4) != '\0') && (DAT_18096254c != 0)) && (DAT_180962550 != 0)) {
    plVar1 = DAT_180cc4050;
    plVar2 = DAT_180cc4058;
    if ((DAT_180ca3ca8 == 0) && (DAT_1811089f0 != 0)) {
      DAT_180ca3ca8 = FUN_18038eaf0("CEntityIdentity","m_flags");
      plVar1 = DAT_180cc4050;
      plVar2 = DAT_180cc4058;
      if (DAT_180ca3ca8 == 0) {
        DAT_180ca3ca8 = DAT_180962558;
      }
    }
    while( true ) {
      plVar3 = DAT_180cc4058;
      bVar12 = plVar1 == DAT_180cc4058;
      DAT_180cc4058 = plVar2;
      if (bVar12) break;
      lVar8 = *plVar1;
      cVar5 = FUN_180019050(lVar8);
      if (cVar5 != '\0') {
        if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
          DAT_1811161d8 = '\x01';
          DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
        }
        uVar4 = DAT_1811161dc;
        if ((((((lVar8 != 0) && (DAT_1811161dc != 0)) &&
              (lVar9 = FUN_18000f3a0(lVar8 + 0x10), lVar9 - 0x10000U < 0x7ffffffeffff)) &&
             ((lVar10 = FUN_18000f3a0(lVar9), lVar10 == lVar8 &&
              (iVar7 = FUN_180011200((ulonglong)uVar4 + lVar9), iVar7 == 0)))) &&
            ((lVar9 = FUN_18000f3a0(lVar8 + 0x10), lVar9 != 0 &&
             ((cVar5 = FUN_180011220((ulonglong)DAT_180ca3ca8 + lVar9), -1 < cVar5 &&
              (DAT_180ca09f8 != 0)))))) &&
           (lVar9 = FUN_18000f3a0(lVar8 + (ulonglong)DAT_180ca09f8), lVar9 != 0)) {
          local_1a8[0] = 1;
          FUN_1800233d0((ulonglong)DAT_18096254c + lVar8,local_1a8);
          local_1a4 = 0x3f800000;
          FUN_180013280((ulonglong)DAT_180962550 + lVar8,&local_1a4);
        }
      }
      plVar1 = plVar1 + 1;
      plVar2 = DAT_180cc4058;
      DAT_180cc4058 = plVar3;
    }
  }
  return;
}



/* ===== 18001c180 FUN_18001c180 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001c180(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0 [200];
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [200];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  pcVar3 = DAT_180961d10;
  pcVar2 = DAT_180961d08;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_218;
  pcVar1 = *(code **)(*param_1 + 0x278);
  local_1f8 = 0;
  local_1f4 = 0xc00000c8;
  FUN_180540170(local_1f0,0,200);
  local_128 = 0;
  local_120 = 0;
  (*pcVar2)(&local_1f8,param_2);
  local_120 = 0x74616d76;
  (*pcVar3)(param_1,&local_1f8,&DAT_18058b643);
  local_118 = 0;
  local_114 = 0xc00000c8;
  FUN_180540170(local_110,0,200);
  local_48 = 0;
  local_40 = 0;
  (*pcVar2)(&local_118,param_2);
  local_40 = 0x74616d76;
  lVar4 = (*pcVar1)(param_1,&local_118,0);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
    UNLOCK();
  }
  return;
}



/* ===== 18001c2c0 FUN_18001c2c0 ===== */

void FUN_18001c2c0(longlong param_1)

{
  FUN_1800132b0(param_1 + 0x18);
  FUN_180023e20(param_1 + 8);
  return;
}



/* ===== 18001c2e0 FUN_18001c2e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_18001c2e0(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 local_d0;
  undefined1 local_c0 [32];
  char local_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_f8;
  local_d8 = param_1;
  FUN_180390a90(local_c0);
  if (local_a0 == '\0') {
    param_1[0x20] = '\0';
  }
  else {
    local_d8 = "skybox";
    local_d0 = 6;
    uVar3 = FUN_1804e5000();
    FUN_180013d60(local_78,uVar3,&local_d8);
    local_d8 = "materials";
    local_d0 = 9;
    uVar3 = FUN_1804e5000();
    FUN_180013d60(local_98,uVar3,&local_d8);
    uVar4 = FUN_180014f50(local_38,local_c0,local_98);
    puVar5 = (undefined4 *)FUN_180014f50(local_58,uVar4,local_78);
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
    uVar3 = puVar5[1];
    uVar1 = puVar5[2];
    uVar2 = puVar5[3];
    *(undefined4 *)param_1 = *puVar5;
    *(undefined4 *)(param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar3 = puVar5[5];
    uVar1 = puVar5[6];
    uVar2 = puVar5[7];
    *(undefined4 *)(param_1 + 0x10) = puVar5[4];
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined2 *)puVar5 = 0;
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 7;
    param_1[0x20] = '\x01';
    FUN_1800289e0(local_58);
    FUN_1800289e0(local_38);
    FUN_1800289e0(local_98);
    FUN_1800289e0(local_78);
    if (local_a0 != '\0') {
      FUN_1800289e0(local_c0);
    }
  }
  return param_1;
}



/* ===== 18001c440 FUN_18001c440 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001c440(void)

{
  short *psVar1;
  longlong *plVar2;
  int *piVar3;
  short *psVar4;
  char *_Str;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong *puVar8;
  int iVar9;
  undefined8 uVar10;
  short *psVar11;
  undefined8 *******pppppppuVar12;
  ulonglong *******pppppppuVar13;
  size_t sVar14;
  ulonglong ******ppppppuVar15;
  ULONGLONG UVar16;
  undefined8 *puVar17;
  ulonglong *******_Buf1;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  short *psVar24;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [24];
  undefined1 local_2a8;
  ulonglong local_2a0;
  ulonglong *puStack_298;
  ulonglong *local_290;
  int local_288;
  undefined4 local_284;
  undefined **local_280;
  longlong local_278;
  longlong *plStack_270;
  int local_260 [2];
  int local_258;
  undefined8 *******local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [32];
  char local_208;
  ulonglong *******local_200 [2];
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong ******local_1b8;
  ulonglong ******ppppppuStack_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 *******local_178 [2];
  ulonglong local_168;
  ulonglong local_160;
  undefined8 *******local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong local_140;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [160];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2c8;
  local_2a0 = 0;
  puStack_298 = (ulonglong *)0x0;
  local_290 = (ulonglong *)0x0;
  FUN_18001c2e0(local_228);
  if (local_208 != '\0') {
    uVar10 = FUN_180014350(local_228,&local_1d8);
    FUN_180014350(uVar10,local_118);
    FUN_1800289e0(&local_1d8);
    local_278 = 0;
    plStack_270 = (longlong *)0x0;
    iVar9 = FUN_1800225b0(&local_278,local_228,2);
    local_238 = 0;
    uStack_230 = 0;
    lVar7 = local_278;
    plVar6 = plStack_270;
    while ((local_278 = lVar7, plStack_270 = plVar6, iVar9 == 0 && (lVar7 != 0))) {
      FUN_180015fc0(lVar7,local_260,3);
      local_288 = local_258;
      local_284 = 0;
      local_280 = &PTR_vftable_18091a158;
      if (local_260[0] == 2) {
        puVar22 = (undefined8 *)(lVar7 + 0x20);
        if (*(ulonglong *)(lVar7 + 0x38) < 8) {
          puVar17 = puVar22;
        }
        else {
          puVar17 = (undefined8 *)*puVar22;
        }
        psVar4 = (short *)((longlong)puVar17 + *(longlong *)(lVar7 + 0x30) * 2);
        psVar24 = psVar4;
        for (psVar11 = (short *)FUN_180013e50(puVar17,psVar4); psVar11 != psVar4;
            psVar11 = psVar11 + 1) {
          if ((*psVar11 != 0x5c) && (*psVar11 != 0x2f)) goto LAB_18001c590;
        }
LAB_18001c5ab:
        local_158 = (undefined8 *******)0x0;
        uStack_150 = 0;
        local_148 = 0;
        local_140 = 0;
        FUN_180024d40(&local_158,psVar24,(longlong)psVar4 - (longlong)psVar24 >> 1);
        local_248 = &local_158;
        if (7 < local_140) {
          local_248 = local_158;
        }
        local_240 = local_148;
        FUN_180024c20(local_178,&local_248);
        FUN_1800289e0(&local_158);
        if (7 < local_168) {
          uVar18 = local_168 - 7;
          if (local_168 < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_18002a1a0();
          }
          sVar14 = 7;
          if (local_168 - uVar18 < 7) {
            sVar14 = local_168 - uVar18;
          }
          pppppppuVar12 = local_178;
          if (0xf < local_160) {
            pppppppuVar12 = local_178[0];
          }
          iVar9 = memcmp((void *)(uVar18 + (longlong)pppppppuVar12),".vmat_c",sVar14);
          if ((iVar9 == 0) && (6 < sVar14)) {
            FUN_180016eb0(local_138,puVar22,&local_288);
            if (local_288 == 0) {
              FUN_180016eb0(&local_1d8,local_118,&local_288);
              iVar9 = local_288;
              if (local_288 == 0) {
                FUN_1800151a0(local_138,&local_198,&local_1d8);
              }
              else {
                uStack_190 = 0;
                local_188 = 0;
                local_180 = 7;
                local_198 = 0;
              }
              FUN_1800289e0(&local_1d8);
            }
            else {
              uStack_190 = 0;
              local_188 = 0;
              local_180 = 7;
              local_198 = 0;
              iVar9 = local_288;
            }
            FUN_1800289e0(local_138);
            FUN_180022220(&local_198,local_200);
            FUN_1800289e0(&local_198);
            if ((iVar9 == 0) && (1 < local_1f0)) {
              uVar18 = local_1f0 - 2;
              if (local_1f0 < uVar18) {
                FUN_180028a50(local_200,uVar18 - local_1f0,0);
              }
              else {
                pppppppuVar13 = (ulonglong *******)local_200;
                if (0xf < local_1e8) {
                  pppppppuVar13 = local_200[0];
                }
                local_1f0 = uVar18;
                *(undefined1 *)((longlong)pppppppuVar13 + uVar18) = 0;
              }
              uVar23 = local_1e8;
              uVar18 = local_1f0;
              pppppppuVar13 = local_200[0];
              puVar22 = &DAT_180594010;
              do {
                _Str = (char *)*puVar22;
                if (_Str != (char *)0x0) {
                  sVar14 = strlen(_Str);
                  _Buf1 = (ulonglong *******)local_200;
                  if (0xf < uVar23) {
                    _Buf1 = pppppppuVar13;
                  }
                  if ((uVar18 == sVar14) &&
                     ((uVar18 == 0 || (iVar9 = memcmp(_Buf1,_Str,uVar18), iVar9 == 0))))
                  goto LAB_18001c952;
                }
                puVar22 = puVar22 + 1;
              } while (puVar22 != (undefined8 *)&DAT_180594080);
              local_1d8 = 0;
              uStack_1d0 = 0;
              local_1c8 = 0;
              local_1c0 = 0;
              uVar18 = local_168 - 7;
              if (local_168 < local_168 - 7) {
                uVar18 = local_168;
              }
              pppppppuVar12 = local_178;
              if (0xf < local_160) {
                pppppppuVar12 = local_178[0];
              }
              FUN_1800133a0(&local_1d8,pppppppuVar12,uVar18);
              uVar18 = local_1f0;
              local_1b8 = (ulonglong ******)0x0;
              ppppppuStack_1b0 = (ulonglong ******)0x0;
              local_1a8 = 0;
              local_1a0 = 0;
              pppppppuVar13 = (ulonglong *******)local_200;
              if (0xf < local_1e8) {
                pppppppuVar13 = local_200[0];
              }
              if (0x7fffffffffffffff < local_1f0) {
                    /* WARNING: Subroutine does not return */
                FUN_180011990();
              }
              if (local_1f0 < 0x10) {
                local_1a8 = local_1f0;
                uVar23 = 0xf;
                local_1a0 = 0xf;
                ppppppuVar15 = *pppppppuVar13;
                ppppppuStack_1b0 = pppppppuVar13[1];
                local_1b8 = ppppppuVar15;
              }
              else {
                uVar23 = local_1f0 | 0xf;
                if (uVar23 < 0x8000000000000000) {
                  if (uVar23 < 0x16) {
                    uVar23 = 0x16;
                  }
                }
                else {
                  uVar23 = 0x7fffffffffffffff;
                }
                ppppppuVar15 = (ulonglong ******)FUN_18000fb70(uVar23 + 1);
                local_1a8 = uVar18;
                local_1b8 = ppppppuVar15;
                local_1a0 = uVar23;
                FUN_180540530(ppppppuVar15,pppppppuVar13,uVar18 + 1);
              }
              if (puStack_298 == local_290) {
                FUN_180029340(&local_2a0,puStack_298,&local_1d8);
              }
              else {
                *puStack_298 = local_1d8;
                puStack_298[1] = uStack_1d0;
                puStack_298[2] = local_1c8;
                puStack_298[3] = local_1c0;
                local_1c8 = 0;
                local_1c0 = 0xf;
                local_1d8 = local_1d8 & 0xffffffffffffff00;
                puStack_298[4] = (ulonglong)ppppppuVar15;
                puStack_298[5] = (ulonglong)ppppppuStack_1b0;
                puStack_298[6] = uVar18;
                puStack_298[7] = uVar23;
                local_1a8 = 0;
                local_1a0 = 0xf;
                local_1b8 = (ulonglong ******)((ulonglong)local_1b8 & 0xffffffffffffff00);
                puStack_298 = puStack_298 + 8;
              }
              FUN_18000f890(&local_1b8);
              FUN_18000f890(&local_1d8);
              FUN_18000f890(local_200);
              FUN_18000f890(local_178);
              goto LAB_18001c965;
            }
LAB_18001c952:
            FUN_18000f890(local_200);
          }
        }
        FUN_18000f890(local_178);
      }
LAB_18001c965:
      local_288 = FUN_1800164b0(&local_278);
      local_284 = 0;
      local_280 = &PTR_vftable_18091a158;
      lVar7 = local_278;
      plVar6 = plStack_270;
      iVar9 = local_288;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar9 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    FUN_1800289e0(local_118);
  }
  puVar19 = auStack_2c8;
  puVar20 = auStack_2c8;
  if (local_208 != '\0') {
    FUN_1800289e0(local_228);
  }
  FUN_1800265c0(local_2a0,puStack_298,(longlong)((longlong)puStack_298 - local_2a0) >> 6,local_2a8);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cc3e00);
  FUN_180028940(&DAT_180cc4038);
  puVar8 = puStack_298;
  uVar18 = local_2a0;
  DAT_180cc4038 = local_2a0;
  DAT_180cc4040 = puStack_298;
  _DAT_180cc4048 = local_290;
  local_2a0 = 0;
  puStack_298 = (ulonglong *)0x0;
  local_290 = (ulonglong *)0x0;
  DAT_180ca0dd8 = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cc3e00);
  FUN_180540170(local_f8,0,0xa0);
  snprintf(local_f8,0xa0,"custom skyboxes | %zu found in csgo/materials/skybox",
           (longlong)((longlong)puVar8 - uVar18) >> 6);
  UVar16 = GetTickCount64();
  FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar16,local_f8);
  puVar8 = puStack_298;
  puVar21 = auStack_2c8;
  uVar18 = local_2a0;
  if (local_2a0 == 0) goto LAB_18001cb1e;
  for (; (ulonglong *)uVar18 != puVar8; uVar18 = uVar18 + 0x40) {
    FUN_18000f890(uVar18 + 0x20);
    FUN_18000f890(uVar18);
  }
  uVar18 = local_2a0;
  if (((longlong)local_290 - local_2a0 & 0xffffffffffffffc0) < 0x1000) {
LAB_18001cb16:
    puVar20 = puVar19;
  }
  else {
    uVar18 = *(ulonglong *)(local_2a0 - 8);
    uVar23 = (local_2a0 - uVar18) - 8;
    if (0x1f < uVar23) {
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar19 = auStack_2c0;
      uVar18 = uVar23;
      goto LAB_18001cb16;
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x18001cb1e;
  thunk_FUN_1803d64e0(uVar18);
  puVar21 = puVar20;
LAB_18001cb1e:
  *(undefined8 *)(puVar21 + -8) = 0x18001cb2d;
  return;
LAB_18001c590:
  psVar1 = psVar24 + -1;
  if (*psVar1 == 0x5c) goto LAB_18001c5ab;
  if ((*psVar1 == 0x2f) || (psVar24 = psVar1, psVar11 == psVar1)) goto LAB_18001c5ab;
  goto LAB_18001c590;
}



/* ===== 18001cb50 FUN_18001cb50 ===== */

void FUN_18001cb50(longlong param_1)

{
  FUN_18000f890(param_1 + 0x20);
  FUN_18000f890(param_1);
  return;
}



/* ===== 18001cb70 FUN_18001cb70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18001cb70(undefined8 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  INT_PTR IVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined1 local_168 [16];
  undefined1 local_158 [320];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_198;
  uVar3 = param_1[2];
  if (uVar3 != 0) {
    if ((ulonglong)param_1[3] < 0x10) {
      puVar11 = param_1;
    }
    else {
      puVar11 = (undefined8 *)*param_1;
    }
    uVar10 = 0;
    uVar12 = 0xcbf29ce484222325;
    if (uVar3 != 0) {
      do {
        pbVar2 = (byte *)((longlong)puVar11 + uVar10);
        uVar10 = uVar10 + 1;
        uVar12 = (uVar12 ^ *pbVar2) * 0x100000001b3;
      } while (uVar10 < uVar3);
    }
    lVar4 = FUN_1800268a0(&DAT_180ca0aa0,local_168,param_1,uVar12);
    lVar8 = DAT_180ca0aa8;
    if (*(longlong *)(lVar4 + 8) != 0) {
      lVar8 = *(longlong *)(lVar4 + 8);
    }
    if ((lVar8 != DAT_180ca0aa8) && (*(longlong *)(lVar8 + 0x30) != 0)) {
      return *(longlong *)(lVar8 + 0x30);
    }
    plVar5 = (longlong *)FUN_180026e60(&DAT_180ca0b60,local_168,param_1);
    lVar8 = *plVar5;
    if ((((*(int *)(lVar8 + 0x30) < 3) && (DAT_180961d08 != 0)) && (DAT_180961d10 != 0)) &&
       (((hModule = GetModuleHandleA("resourcesystem.dll"), hModule != (HMODULE)0x0 &&
         (pFVar6 = GetProcAddress(hModule,"CreateInterface"), pFVar6 != (FARPROC)0x0)) &&
        (IVar7 = (*pFVar6)("ResourceSystem013",0), IVar7 != 0)))) {
      piVar1 = (int *)(lVar8 + 0x30);
      *piVar1 = *piVar1 + 1;
      puVar11 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar11 = (undefined8 *)*param_1;
      }
      lVar8 = FUN_18001c180(IVar7,puVar11);
      plVar5 = (longlong *)FUN_180027090(&DAT_180ca0aa0,local_168,param_1);
      *(longlong *)(*plVar5 + 0x30) = lVar8;
      FUN_180540170(local_158,0,0x140);
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      local_178 = lVar8;
      snprintf(local_158,0x140,"custom skybox %s | binding %p",param_1);
      UVar9 = GetTickCount64();
      FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar9,local_158);
      return lVar8;
    }
  }
  return 0;
}



/* ===== 18001cd60 FUN_18001cd60 ===== */

longlong FUN_18001cd60(longlong *param_1)

{
  longlong local_res10 [3];
  
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = 0;
    (**(code **)(*param_1 + 0x110))(param_1,local_res10,"g_tSkyTexture");
    if (local_res10[0] != 0) {
      LOCK();
      *(int *)(local_res10[0] + 0x20) = *(int *)(local_res10[0] + 0x20) + 1;
      UNLOCK();
    }
  }
  return local_res10[0];
}



/* ===== 18001cdb0 FUN_18001cdb0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18001cdb0(undefined8 param_1)

{
  undefined8 uVar1;
  ULONGLONG UVar2;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158 [320];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_188;
  local_168 = FUN_1801d6450();
  uVar1 = 0;
  if (local_168 != 0) {
    uVar1 = FUN_18001cd60(local_168);
    FUN_180540170(local_158,0,0x140);
    local_160 = uVar1;
    snprintf(local_158,0x140,"skybox thumbnail %s | material %p texture %p",param_1);
    UVar2 = GetTickCount64();
    FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar2,local_158);
  }
  return uVar1;
}



/* ===== 18001ce80 FUN_18001ce80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18001ce80(undefined4 param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  HMODULE pHVar5;
  HANDLE pvVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char *param0;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStackY_208 [32];
  float local_1d4 [3];
  char *local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  int local_19c;
  char *local_198;
  ulonglong local_190;
  uint local_188 [2];
  char *local_180;
  uint local_178 [2];
  char *local_170;
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
  undefined1 local_e8 [160];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStackY_208;
  local_1a8 = param_1;
  if (DAT_180ca0e58 == '\0') {
    DAT_180ca0e58 = '\x01';
    pHVar5 = GetModuleHandleA("worldrenderer.dll");
    if (pHVar5 == (HMODULE)0x0) {
      local_1c8 = (char *)0x0;
      uStack_1c0 = 0;
    }
    else {
      local_1c8 = (char *)0x0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      pvVar6 = GetCurrentProcess();
      iVar3 = K32GetModuleInformation(pvVar6,pHVar5,&local_1c8,0x18);
      if (iVar3 == 0) {
        uStack_1c0 = 0;
        local_1c8 = (char *)0x0;
      }
      else {
        uStack_1c0 = uStack_1c0 & 0xffffffff;
      }
    }
    local_198 = 
    "48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 30 48 83 39 00 49 8B D8 48 8B FA 48 8B F1 0F 84";
    local_190 = 0x59;
    DAT_180cc3df0 = FUN_1801d1e00(&local_1c8,&local_198);
    pHVar5 = GetModuleHandleA("worldrenderer.dll");
    if (pHVar5 == (HMODULE)0x0) {
      local_190 = 0;
      local_198 = (char *)0x0;
    }
    else {
      local_1c8 = (char *)0x0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      pvVar6 = GetCurrentProcess();
      iVar3 = K32GetModuleInformation(pvVar6,pHVar5,&local_1c8,0x18);
      if (iVar3 == 0) {
        local_190 = 0;
        local_198 = (char *)0x0;
      }
      else {
        local_190 = uStack_1c0 & 0xffffffff;
        local_198 = local_1c8;
      }
    }
    local_1c8 = "4C 8B 09 4D 8B C1 49 C1 E8 02 41 8D 40 FA A8 DF";
    uStack_1c0 = 0x2f;
    DAT_180cc3df8 = FUN_1801d1e00(&local_198,&local_1c8);
    lVar8 = DAT_180cc3df0;
    if ((DAT_180cc3df0 == 0) || (DAT_180cc3df8 == 0)) {
      FUN_180540170(local_e8,0,0xa0);
      snprintf(local_e8,0xa0,"fog height: KeyValues3 helpers MISSING (find %p string %p)",lVar8);
      UVar7 = GetTickCount64();
      FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar7,local_e8);
    }
  }
  if ((((DAT_180cc3df0 != 0) && (DAT_180cc3df8 != 0)) && (DAT_180962528 != 0)) &&
     (lVar8 = FUN_18000f3a0(), lVar8 != 0)) {
    iVar3 = FUN_180011200(lVar8 + 0x90);
    local_19c = iVar3;
    local_198 = (char *)FUN_18000f3a0(lVar8 + 0x98);
    if ((iVar3 - 1U < 0x40) && (local_198 != (char *)0x0)) {
      fVar1 = 0.0;
      local_188[1] = 0xffffffff;
      local_178[1] = 0xffffffff;
      uVar14 = CONCAT31(CONCAT21(CONCAT11(s_classname_1806d3340[3],s_classname_1806d3340[2]),
                                 s_classname_1806d3340[1]),s_classname_1806d3340[0]) * 0x5bd1e995;
      uVar12 = CONCAT31(CONCAT21(CONCAT11(s_classname_1806d3340[7],s_classname_1806d3340[6]),
                                 s_classname_1806d3340[5]),s_classname_1806d3340[4]) * 0x5bd1e995;
      local_170 = "origin";
      uVar12 = ((uint)(byte)s_classname_1806d3340[8] ^
               (uVar12 >> 0x18 ^ uVar12) * 0x5bd1e995 ^
               ((uVar14 >> 0x18 ^ uVar14) * 0x5bd1e995 ^ 0xa993af5b) * 0x5bd1e995) * 0x5bd1e995;
      local_188[0] = (uVar12 >> 0xd ^ uVar12) * 0x5bd1e995;
      local_188[0] = local_188[0] >> 0xf ^ local_188[0];
      local_180 = "classname";
      uVar12 = CONCAT31(CONCAT21(CONCAT11(s_origin_1806d3364[3],s_origin_1806d3364[2]),
                                 s_origin_1806d3364[1]),s_origin_1806d3364[0]) * 0x5bd1e995;
      uVar12 = ((uint)(byte)s_origin_1806d3364[4] ^
               (uint)(byte)s_origin_1806d3364[5] << 8 ^
               (uVar12 >> 0x18 ^ uVar12) * 0x5bd1e995 ^ 0x4846ffa0) * 0x5bd1e995;
      local_178[0] = (uVar12 >> 0xd ^ uVar12) * 0x5bd1e995;
      local_178[0] = local_178[0] >> 0xf ^ local_178[0];
      iVar16 = 0;
      uVar15 = 0;
      bVar2 = false;
      if (0 < iVar3) {
        while( true ) {
          lVar8 = FUN_18000f3a0(local_198 + uVar15 * 8);
          if ((lVar8 != 0) && (lVar8 = FUN_180018ff0(lVar8,param_1), lVar8 != 0)) {
            bVar2 = true;
            iVar4 = FUN_180011200(lVar8);
            lVar8 = FUN_18000f3a0(lVar8 + 8);
            if ((iVar4 - 1U < 0x10000) && ((lVar8 != 0 && (uVar13 = 0, 0 < iVar4)))) {
              do {
                lVar9 = FUN_18000f3a0(lVar8 + uVar13 * 8);
                if ((lVar9 != 0) &&
                   ((lVar10 = FUN_180018fb0(lVar9,local_188), lVar10 != 0 &&
                    ((lVar11 = FUN_1804ef120(lVar10,"info_player_counterterrorist"), lVar11 != 0 ||
                     (lVar10 = FUN_1804ef120(lVar10,"info_player_terrorist"), lVar10 != 0)))))) {
                  param0 = (char *)FUN_180018fb0(lVar9,local_188 + 4);
                  local_1a0 = 0;
                  local_1a4 = 0;
                  local_1d4[0] = 0.0;
                  if ((param0 != (char *)0x0) &&
                     (iVar3 = sscanf(param0,"%f %f %f",(double *)&local_1a0,(double *)&local_1a4,
                                     (double *)local_1d4), iVar3 == 3)) {
                    iVar16 = iVar16 + 1;
                    fVar1 = fVar1 + local_1d4[0];
                  }
                }
                uVar12 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar12;
                iVar3 = local_19c;
              } while ((int)uVar12 < iVar4);
            }
          }
          uVar12 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar12;
          if (iVar3 <= (int)uVar12) break;
          param_1 = local_1a8;
        }
        if (bVar2) {
          DAT_180cc3d70 = 0.0;
          if ((0 < iVar16) && (((uint)(fVar1 / (float)iVar16) & 0x7f800000) != 0x7f800000)) {
            DAT_180cc3d70 = fVar1 / (float)iVar16;
          }
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
          local_f8 = 0;
          uStack_f0 = 0;
          snprintf(&local_168,0x80,"fog height: %d spawn points, base z %.1f",iVar16);
          UVar7 = GetTickCount64();
          FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar7,&local_168);
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ===== 18001d480 FUN_18001d480 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001d480(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  INT_PTR IVar8;
  undefined8 uVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_178;
  iVar13 = 1 - DAT_180ca3d60;
  lVar6 = (longlong)iVar13;
  (&DAT_180962880)[lVar6 * 0x90] = *param_1;
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  lVar11 = lVar6 * 0x90;
  *(undefined4 *)(&DAT_180962884 + lVar11) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(&DAT_180962888 + lVar11) = uVar5;
  *(undefined4 *)(&DAT_18096288c + lVar11) = uVar2;
  *(undefined4 *)(&DAT_180962890 + lVar11) = uVar3;
  uVar5 = FUN_180018c80();
  *(undefined4 *)(&DAT_180962894 + lVar6 * 0x90) = uVar5;
  *(undefined4 *)(&DAT_180962898 + lVar6 * 0x90) = *(undefined4 *)(param_1 + 0x14);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(&DAT_18096289c + lVar6 * 0x90) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(&DAT_1809628a4 + lVar6 * 0x90) = uVar9;
  (&DAT_1809628ac)[lVar6 * 0x90] = param_1[0x55];
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(&DAT_1809628b0 + lVar6 * 0x90) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(&DAT_1809628b8 + lVar6 * 0x90) = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(&DAT_1809628c0 + lVar6 * 0x90) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(&DAT_1809628c8 + lVar6 * 0x90) = uVar9;
  uVar5 = *(undefined4 *)(param_1 + 0x7c);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  lVar11 = lVar6 * 0x90;
  *(undefined4 *)(&DAT_1809628d0 + lVar11) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(&DAT_1809628d4 + lVar11) = uVar5;
  *(undefined4 *)(&DAT_1809628d8 + lVar11) = uVar2;
  *(undefined4 *)(&DAT_1809628dc + lVar11) = uVar3;
  if (param_1[0x55] == '\0') {
    lVar11 = 0;
  }
  else if (*(longlong *)(param_1 + 0xa0) == 0) {
    iVar1 = *(int *)(param_1 + 0x88);
    lVar12 = (longlong)iVar1;
    if (iVar1 - 1U < 0xd) {
      lVar11 = *(longlong *)(&DAT_180ca3cf0 + lVar12 * 8);
      if ((lVar11 != 0) || (2 < *(int *)(&DAT_180ca3bf8 + lVar12 * 4))) goto LAB_18001d6a5;
      if ((DAT_180961d08 != 0) &&
         ((((DAT_180961d10 != 0 &&
            (hModule = GetModuleHandleA("resourcesystem.dll"), hModule != (HMODULE)0x0)) &&
           (pFVar7 = GetProcAddress(hModule,"CreateInterface"), pFVar7 != (FARPROC)0x0)) &&
          (IVar8 = (*pFVar7)("ResourceSystem013",0), IVar8 != 0)))) {
        uVar9 = (&DAT_180594010)[lVar12];
        *(int *)(&DAT_180ca3bf8 + lVar12 * 4) = *(int *)(&DAT_180ca3bf8 + lVar12 * 4) + 1;
        uVar9 = FUN_18001c180(IVar8,uVar9);
        *(undefined8 *)(&DAT_180ca3cf0 + lVar12 * 8) = uVar9;
        FUN_180540170(local_148,0,0x100);
        local_158 = (&DAT_180594010)[lVar12];
        local_150 = uVar9;
        snprintf(local_148,0x100,"skybox %d %s | binding %p",iVar1);
        UVar10 = GetTickCount64();
        FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar10,local_148);
        lVar11 = *(longlong *)(&DAT_180ca3cf0 + lVar12 * 8);
        goto LAB_18001d6a5;
      }
    }
    lVar11 = 0;
  }
  else {
    lVar11 = FUN_18001cb70(param_1 + 0x90);
  }
LAB_18001d6a5:
  *(longlong *)(&DAT_1809628e0 + lVar6 * 0x90) = lVar11;
  (&DAT_1809628e8)[lVar6 * 0x90] = param_1[0x28];
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  lVar11 = lVar6 * 0x90;
  *(undefined4 *)(&DAT_1809628ec + lVar11) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(&DAT_1809628f0 + lVar11) = uVar5;
  *(undefined4 *)(&DAT_1809628f4 + lVar11) = uVar2;
  *(undefined4 *)(&DAT_1809628f8 + lVar11) = uVar3;
  (&DAT_1809628fc)[lVar6 * 0x90] = param_1[0x54];
  if (((param_1[0xb3] == '\0') && (param_1[0xb0] == '\0')) && (param_1[0xb2] == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  (&DAT_1809628fd)[lVar6 * 0x90] = uVar4;
  lVar11 = FUN_1800f1c60();
  (&DAT_1809628fe)[lVar6 * 0x90] = *(undefined1 *)(lVar11 + 0x1b8);
  (&DAT_1809628ff)[lVar6 * 0x90] = *(undefined1 *)(lVar11 + 0x234);
  (&DAT_180962900)[lVar6 * 0x90] = *(undefined1 *)(lVar11 + 0x295);
  (&DAT_180962901)[lVar6 * 0x90] = *(undefined1 *)(lVar11 + 0x2ac);
  if (*(char *)(lVar11 + 0x2ac) != '\0') {
    if (*(int *)(lVar11 + 0x2b0) == -1) {
      if ((DAT_180961a50 == 0) || (lVar12 = FUN_18000f3a0(), lVar12 == 0)) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = (float)FUN_18000f3d0(lVar12 + 0x30);
      }
      fVar14 = (float)FUN_180519fe0(fVar14 * DAT_1808ac934,DAT_1808acbd0);
    }
    else {
      fVar14 = (float)*(int *)(lVar11 + 0x2b0);
    }
    fVar14 = fVar14 * DAT_1808ac014;
    uVar5 = FUN_180517200(fVar14);
    *(undefined4 *)(&DAT_180962904 + lVar6 * 0x90) = uVar5;
    uVar5 = FUN_180517790(fVar14);
    *(undefined4 *)(&DAT_180962908 + lVar6 * 0x90) = uVar5;
    *(undefined4 *)(&DAT_18096290c + lVar6 * 0x90) = *(undefined4 *)(lVar11 + 0x2b4);
  }
  DAT_180ca3d60 = iVar13;
  return;
}



/* ===== 18001d820 FUN_18001d820 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001d820(void)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_2e8 [32];
  uint local_2c8;
  uint local_2c0;
  uint local_2b8;
  undefined4 local_2b0;
  uint local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_268 [2];
  char local_258 [4];
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  byte local_230;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 local_214;
  undefined1 local_213;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  byte local_204;
  byte local_203;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined8 ****local_1c8 [2];
  undefined8 local_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  byte local_1a5;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_2e8;
  if (DAT_180ca0dd9 != '\0') {
    if (DAT_180ca0ddf == '\0') {
      FUN_1800229b0();
      FUN_180022b60();
      FUN_180022d10();
      FUN_180022ec0();
      FUN_180023070();
      FUN_180023220();
      FUN_18001b1b0();
      FUN_180019f80();
      FUN_18001b8c0();
      FUN_18001bbe0();
      DAT_180ca0ddf = 1;
      return;
    }
    return;
  }
  FUN_180017790();
  FUN_180018430(local_258);
  DAT_180962810 = local_170;
  DAT_180962814 = local_16c;
  FUN_18001d480(local_258);
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_268);
    lVar8 = local_268[0];
  }
  else {
    lVar8 = DAT_181108a00;
  }
  if (lVar8 == 0) {
LAB_18001d981:
    iVar5 = 0;
    cVar4 = '\0';
  }
  else {
    if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
      DAT_1811161d8 = '\x01';
      DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
    }
    uVar12 = (ulonglong)DAT_1811161dc;
    if ((((lVar8 == 0) || (DAT_1811161dc == 0)) ||
        (lVar6 = FUN_18000f3a0(lVar8 + 0x10), 0x7ffffffefffe < lVar6 - 0x10000U)) ||
       (lVar7 = FUN_18000f3a0(lVar6), lVar7 != lVar8)) goto LAB_18001d981;
    iVar5 = FUN_180011200(uVar12 + lVar6);
    cVar4 = '\x01';
  }
  if (cVar4 == DAT_180ca0dda) {
    if (cVar4 != '\0') {
      if ((iVar5 != DAT_18096258c) || (lVar8 != DAT_180ca3cb0)) goto LAB_18001d9bc;
      goto LAB_18001db2f;
    }
LAB_18001dc0b:
    lVar8 = FUN_1800f1c60();
    if (cVar4 == '\0') {
      FUN_18001b670(*(undefined1 *)(lVar8 + 0x368));
      FUN_18001b710(*(undefined1 *)(lVar8 + 0x369));
      FUN_18001b7b0(0,*(undefined4 *)(lVar8 + 0x29c));
      FUN_18001bbe0();
      goto LAB_18001df3c;
    }
  }
  else {
LAB_18001d9bc:
    iVar13 = FUN_1804e4d70(&DAT_1809629f0);
    if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_180962a3c == 0x7fffffff) {
      DAT_180962a3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    FUN_180023d70(&DAT_180cc3e80);
    FUN_1804e4e90(&DAT_1809629f0);
    FUN_180019f80();
    if (DAT_180cc4110 != DAT_180cc4118) {
      DAT_180cc4118 = DAT_180cc4110;
    }
    if (DAT_180cc4080 != DAT_180cc4088) {
      DAT_180cc4088 = DAT_180cc4080;
    }
    if (DAT_180cc3f80 != DAT_180cc3f88) {
      DAT_180cc3f88 = DAT_180cc3f80;
    }
    if (DAT_180cc40e0 != DAT_180cc40e8) {
      DAT_180cc40e8 = DAT_180cc40e0;
    }
    if (DAT_180cc4020 != DAT_180cc4028) {
      DAT_180cc4028 = DAT_180cc4020;
    }
    if (DAT_180cc4068 != DAT_180cc4070) {
      DAT_180cc4070 = DAT_180cc4068;
    }
    if (DAT_180cc4050 != DAT_180cc4058) {
      DAT_180cc4058 = DAT_180cc4050;
    }
    FUN_180024220(&DAT_180cc3fa0);
    FUN_180024000(&DAT_180cc3f00);
    FUN_180024000(&DAT_180cc40a0);
    FUN_180024110(&DAT_180cc3ec0);
    FUN_180023d70(&DAT_180cc3f40);
    FUN_180024000(&DAT_180cc3fe0);
    DAT_180ca3cb0 = 0;
    if (cVar4 != '\0') {
      DAT_180ca3cb0 = lVar8;
    }
    DAT_180ca3cb8 = 0;
    DAT_180ca0ddb = '\0';
    DAT_180ca3c50 = 0;
    DAT_180cc3d70 = 0;
    DAT_18096258c = iVar5;
    DAT_180ca0dda = cVar4;
    if (cVar4 == '\0') goto LAB_18001dc0b;
LAB_18001db2f:
    if (DAT_180ca0ddb != '\0') goto LAB_18001dc0b;
    if (599 < DAT_180ca3c50) goto LAB_18001dc0b;
    iVar13 = DAT_180ca3c50 + 1;
    bVar14 = DAT_180ca3c50 != (DAT_180ca3c50 / 0x1e) * 0x1e;
    DAT_180ca3c50 = iVar13;
    if (bVar14) goto LAB_18001dc0b;
    DAT_180ca0ddb = FUN_18001ce80(iVar5);
    lVar8 = FUN_1800f1c60();
  }
  DAT_180ca3cb8 = DAT_180ca3cb8 + -1;
  if (DAT_180ca3cb8 < 1) {
    DAT_180ca3cb8 = 0x20;
    FUN_180019240();
  }
  FUN_1800229b0();
  FUN_180022b60();
  FUN_180022d10();
  FUN_180022ec0();
  FUN_180023070();
  FUN_180023220();
  FUN_18001a3b0(local_258);
  FUN_18001ab60(local_258);
  FUN_18001b670(*(undefined1 *)(lVar8 + 0x368));
  FUN_18001b710(*(undefined1 *)(lVar8 + 0x369));
  uVar1 = *(undefined4 *)(lVar8 + 0x29c);
  if ((*(char *)(lVar8 + 0x295) == '\0') || (cVar4 = FUN_180019ce0(), cVar4 == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  FUN_18001b7b0(uVar10,uVar1);
  FUN_18001bca0(1);
  bVar3 = local_203;
  bVar2 = local_204;
  if (((((DAT_180ca0dde == '\0') || (DAT_180962a68 != local_230)) || (DAT_180962a40 != local_258[0])
       ) || ((DAT_180962af3 != local_1a5 || (DAT_180962a95 != local_203)))) ||
     (DAT_180962a94 != local_204)) {
    FUN_180540170(local_158,0,0x100);
    local_278 = DAT_180cc4070 - DAT_180cc4068 >> 3;
    local_280 = DAT_180cc4028 - DAT_180cc4020 >> 3;
    local_288 = DAT_180cc40e8 - DAT_180cc40e0 >> 3;
    local_290 = DAT_180cc3f88 - DAT_180cc3f80 >> 3;
    local_298 = DAT_180cc4088 - DAT_180cc4080 >> 3;
    local_2a0 = DAT_180cc4118 - DAT_180cc4110 >> 3;
    local_2a8 = (uint)local_1a5;
    local_2b0 = local_1d0;
    local_2b8 = (uint)bVar3;
    local_2c0 = (uint)bVar2;
    local_2c8 = (uint)local_230;
    snprintf(local_158,0x100,
             "state | nightmode %d fog %d removal %d sky %d (box %d) sunlight %d | entities: fog %zu cubemap %zu sky %zu light %zu barn %zu probe %zu"
             ,local_258[0]);
    UVar9 = GetTickCount64();
    FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar9,local_158);
  }
  _DAT_180962a44 = local_254;
  uRam0000000180962a4c = uStack_24c;
  _DAT_180962a54 = local_244;
  _DAT_180962a58 = local_240;
  uRam0000000180962a60 = uStack_238;
  DAT_180962a68 = local_230;
  _DAT_180962a6c = local_22c;
  uRam0000000180962a74 = uStack_224;
  _DAT_180962a7c = local_21c;
  _DAT_180962a80 = local_218;
  DAT_180962a84 = local_214;
  DAT_180962a85 = local_213;
  _DAT_180962a88 = local_210;
  _DAT_180962a8c = local_20c;
  _DAT_180962a90 = local_208;
  _DAT_180962a98 = local_200;
  uRam0000000180962aa0 = uStack_1f8;
  _DAT_180962aa8 = local_1f0;
  uRam0000000180962aac = uStack_1ec;
  uRam0000000180962ab0 = uStack_1e8;
  uRam0000000180962ab4 = uStack_1e4;
  _DAT_180962ab8 = local_1e0;
  uRam0000000180962abc = uStack_1dc;
  uRam0000000180962ac0 = uStack_1d8;
  uRam0000000180962ac4 = uStack_1d4;
  _DAT_180962ac8 = local_1d0;
  ppppuVar11 = local_1c8;
  if (0xf < local_1b0) {
    ppppuVar11 = local_1c8[0];
  }
  DAT_180962a40 = local_258[0];
  DAT_180962a94 = local_204;
  DAT_180962a95 = local_203;
  FUN_180029840(&DAT_180962ad0,ppppuVar11,local_1b8);
  DAT_180962af0 = local_1a8;
  DAT_180962af1 = local_1a7;
  DAT_180962af2 = local_1a6;
  DAT_180962af3 = local_1a5;
  _DAT_180962af4 = local_1a4;
  _DAT_180962af8 = local_1a0;
  DAT_180962afc = local_19c;
  _DAT_180962b00 = local_198;
  _DAT_180962b04 = local_194;
  _DAT_180962b08 = local_190;
  uRam0000000180962b10 = uStack_188;
  _DAT_180962b18 = local_180;
  uRam0000000180962b20 = uStack_178;
  _DAT_180962b28 = local_170;
  _DAT_180962b2c = local_16c;
  DAT_180962b30 = local_168;
  DAT_180ca0dde = '\x01';
LAB_18001df3c:
  FUN_18000f890(local_1c8);
  return;
}



/* ===== 18001df90 FUN_18001df90 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18001df90(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
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
  float local_res8 [2];
  float local_res10 [4];
  float local_res20 [2];
  
  fVar1 = DAT_1808ac380;
  if (param_2 == 0 && param_3 == 0) {
    param_1[0] = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 1.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
    return param_1;
  }
  if ((float)param_2 * DAT_1808ac000 < 0.0) {
    fVar7 = DAT_1808acc5c;
  }
  else {
    fVar7 = DAT_1808acc8c;
  }
  fVar4 = fVar7 * fVar7;
  if (DAT_1808acc6c < fVar7) {
    fVar7 = (DAT_1808acce4 / fVar4 - DAT_1808accf8 / (fVar4 * fVar7)) + DAT_1808acb74 / fVar7 +
            _DAT_1808ac138;
    fVar4 = ((fVar7 * _DAT_1808ac668 * fVar7 * fVar7 - fVar7 * _DAT_1808ac79c * fVar7) +
            fVar7 * _DAT_1808ac6f4) - _DAT_1808ac190;
  }
  else {
    fVar7 = (DAT_1808acea0 / (fVar4 * fVar7) - DAT_1808accd4 / fVar4) + DAT_1808acc34 / fVar7 +
            _DAT_1808ac104;
    fVar4 = ((fVar7 * _DAT_1808acd98 * fVar7 * fVar7 - fVar7 * _DAT_1808ac408 * fVar7) +
            fVar7 * _DAT_1808ac568) - _DAT_1808ac0f8;
  }
  fVar12 = (float)((uint)((float)param_2 * DAT_1808ac000) & _DAT_1808ade90);
  local_res20[0] = 0.8;
  local_res10[0] = 0.1;
  fVar8 = (fVar7 - DAT_1808ac158) * fVar12 + DAT_1808ac158;
  fVar12 = (fVar4 - DAT_1808ac164) * fVar12 + DAT_1808ac164;
  fVar7 = (fVar12 * DAT_1808ac8b0 - (fVar8 + fVar8)) + DAT_1808ac658;
  fVar4 = (fVar8 * DAT_1808ac710) / fVar7;
  fVar8 = (fVar12 * DAT_1808ac7ac) / fVar7 - (float)param_3 * _DAT_1808abfa4;
  fVar7 = ((fVar4 + fVar4) - fVar8 * DAT_1808ac838) + DAT_1808ac710;
  local_res8[0] = (fVar8 + fVar8) / fVar7;
  fVar7 = (fVar4 * DAT_1808ac658) / fVar7;
  pfVar3 = local_res10;
  if (DAT_1808ac0c0 <= local_res8[0]) {
    pfVar3 = local_res8;
  }
  pfVar2 = local_res20;
  if (local_res8[0] <= DAT_1808ac294) {
    pfVar2 = pfVar3;
  }
  fVar4 = *pfVar2;
  fVar8 = fVar7 / fVar4;
  fVar4 = ((DAT_1808ac34c - fVar7) - fVar4) / fVar4;
  fVar7 = (fVar8 * _DAT_1808ac2c8 + _DAT_1808ac144 + fVar4 * _DAT_1808acd54) / _DAT_1808ac2ec;
  fVar21 = (fVar8 * _DAT_1808acd8c + _DAT_1808ac47c + fVar4 * _DAT_1808ac044) / _DAT_1808ac374;
  fVar4 = (fVar8 * _DAT_1808ac048 + _DAT_1808acd44 + fVar4 * _DAT_1808ac360) / _DAT_1808ac38c;
  fVar27 = fVar7 * _DAT_1808ac1c0 + 0.0 + 0.0;
  fVar29 = fVar7 * _DAT_1808ac1e4 + 0.0 + 0.0;
  fVar18 = fVar4 * _DAT_1808ac310 + 0.0;
  fVar23 = fVar7 * _DAT_1808ac038 + 0.0 + 0.0;
  fVar8 = fVar21 * _DAT_1808ac070 + 0.0 + 0.0;
  fVar7 = fVar4 * _DAT_1808ac024 + 0.0;
  fVar12 = fVar21 * _DAT_1808ac300 + 0.0 + 0.0;
  fVar21 = fVar21 * _DAT_1808ac02c + 0.0 + 0.0;
  fVar4 = fVar4 * _DAT_1808ac0a4 + 0.0;
  fVar25 = fVar27 * DAT_1808ac318 + fVar8 * DAT_1808acd50 + fVar7 * DAT_1808ac0ec;
  fVar22 = fVar29 * DAT_1808ac318 + fVar12 * DAT_1808acd50 + fVar4 * DAT_1808ac0ec;
  fVar24 = fVar23 * DAT_1808ac318 + fVar21 * DAT_1808acd50 + fVar18 * DAT_1808ac0ec;
  fVar19 = fVar27 * DAT_1808ac1c4 + fVar8 * DAT_1808ac1fc + fVar7 * DAT_1808ac060;
  fVar30 = fVar29 * DAT_1808ac1c4 + fVar12 * DAT_1808ac1fc + fVar4 * DAT_1808ac060;
  fVar28 = fVar23 * DAT_1808ac1c4 + fVar21 * DAT_1808ac1fc + fVar18 * DAT_1808ac060;
  fVar9 = fVar27 * DAT_1808acd24 + fVar8 * DAT_1808ac050 + fVar7 * DAT_1808ac304;
  fVar15 = fVar29 * DAT_1808acd24 + fVar12 * DAT_1808ac050 + fVar4 * DAT_1808ac304;
  fVar13 = fVar23 * DAT_1808acd24 + fVar21 * DAT_1808ac050 + fVar18 * DAT_1808ac304;
  fVar20 = fVar30 * DAT_1808acdac;
  fVar7 = fVar22 * DAT_1808ac68c;
  fVar21 = fVar15 * DAT_1808acd80;
  fVar4 = fVar24 * DAT_1808ac68c;
  fVar16 = fVar28 * DAT_1808acdac;
  fVar23 = fVar13 * DAT_1808acd80;
  fVar8 = fVar25 * DAT_1808acd9c;
  fVar14 = fVar19 * DAT_1808ac508;
  fVar17 = fVar30 * DAT_1808ac508;
  fVar27 = fVar9 * DAT_1808ac058;
  fVar12 = fVar22 * DAT_1808acd9c;
  fVar11 = fVar28 * DAT_1808ac508;
  fVar29 = fVar15 * DAT_1808ac058;
  fVar18 = fVar24 * DAT_1808acd9c;
  fVar5 = fVar13 * DAT_1808ac058;
  fVar6 = fVar19 * DAT_1808acd5c;
  fVar26 = fVar25 * DAT_1808ac06c;
  fVar22 = fVar22 * DAT_1808ac06c;
  fVar24 = fVar24 * DAT_1808ac06c;
  fVar10 = fVar9 * DAT_1808ac380;
  fVar30 = fVar30 * DAT_1808acd5c;
  fVar28 = fVar28 * DAT_1808acd5c;
  *param_1 = fVar19 * DAT_1808acdac + fVar25 * DAT_1808ac68c + fVar9 * DAT_1808acd80;
  param_1[1] = fVar20 + fVar7 + fVar21;
  param_1[2] = fVar16 + fVar4 + fVar23;
  param_1[3] = fVar14 + fVar8 + fVar27;
  param_1[4] = fVar17 + fVar12 + fVar29;
  param_1[5] = fVar11 + fVar18 + fVar5;
  param_1[6] = fVar6 + fVar26 + fVar10;
  param_1[7] = fVar30 + fVar22 + fVar15 * fVar1;
  param_1[8] = fVar28 + fVar24 + fVar13 * fVar1;
  return param_1;
}



/* ===== 18001e780 FUN_18001e780 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001e780(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                  undefined4 param_7,char param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  float *pfVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qb;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auStack_1a8 [32];
  int local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined1 local_140 [40];
  undefined8 local_118;
  float local_110;
  undefined1 local_10c [4];
  undefined8 local_108;
  float local_100;
  undefined1 local_fc [4];
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_1a8;
  pfVar11 = (float *)FUN_18001df90(local_140,param_6,param_7);
  fVar26 = DAT_1808ac000;
  local_178 = *pfVar11;
  local_174 = pfVar11[1];
  local_170 = pfVar11[2];
  local_16c = pfVar11[3];
  local_168 = pfVar11[4];
  local_164 = pfVar11[5];
  local_160 = pfVar11[6];
  local_15c = pfVar11[7];
  local_158 = pfVar11[8];
  local_17c = (float)param_3;
  local_180 = (float)param_2;
  local_154 = (float)FUN_180502150((float)param_1 * DAT_1808ac000);
  fVar9 = DAT_1808ac8d0;
  fVar8 = DAT_1808ac37c;
  fVar7 = DAT_1808ac34c;
  fVar6 = DAT_1808ac068;
  local_14c = (float)param_4 * fVar26 + DAT_1808ac34c;
  local_150 = (float)param_5 * fVar26;
  if ((param_4 == 0 && param_5 == 0) || (param_8 != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  puVar13 = &DAT_180ca3d70;
  local_188 = 0;
  fVar26 = DAT_1808ac9f4;
  uVar21 = DAT_1808ac5d0;
  do {
    iVar14 = 0;
    local_184 = (float)local_188 / fVar26;
    do {
      iVar12 = 0;
      local_148 = (float)iVar14 / fVar26;
      do {
        fVar27 = local_148;
        fVar18 = DAT_1808ac054;
        if (DAT_1808ac054 < (float)iVar12 / fVar26) {
          uVar16 = FUN_18051afb0();
          auVar19._8_4_ = (int)extraout_XMM0_Qb;
          auVar19._0_8_ = uVar16;
          auVar19._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        }
        else {
          auVar19 = ZEXT416((uint)(((float)iVar12 / fVar26) / fVar9));
        }
        if (fVar18 < fVar27) {
          fVar27 = (float)FUN_18051afb0((fVar27 + fVar6) / fVar8,uVar21);
        }
        else {
          fVar27 = fVar27 / fVar9;
        }
        if (fVar18 < local_184) {
          fVar26 = (float)FUN_18051afb0((local_184 + fVar6) / fVar8,uVar21);
        }
        else {
          fVar26 = local_184 / fVar9;
        }
        fVar17 = auVar19._0_4_;
        fVar18 = fVar27 * _DAT_1808ac270 + fVar17 * _DAT_1808ac124 + fVar26 * _DAT_1808ac098;
        if (0.0 <= fVar18) {
          fVar15 = fVar7;
          if (fVar18 <= fVar7) {
            fVar15 = fVar18;
          }
          if (DAT_1808abfdc < fVar15) {
            FUN_18051afb0();
          }
        }
        fVar15 = (float)FUN_180502150();
        fVar18 = DAT_1808abfdc;
        uVar21 = auVar19._4_4_;
        uVar22 = auVar19._8_4_;
        uVar23 = auVar19._12_4_;
        auVar24._4_12_ = auVar19._4_12_;
        auVar24._0_4_ = (fVar17 * local_178 + fVar27 * local_174 + fVar26 * local_170) * fVar15;
        auVar20._0_4_ = (fVar17 * local_160 + fVar27 * local_15c + fVar26 * local_158) * fVar15;
        auVar20._4_12_ = auVar24._4_12_;
        fVar15 = (fVar17 * local_16c + fVar27 * local_168 + fVar26 * local_164) * fVar15;
        auVar25 = auVar24;
        if (auVar24._0_4_ <= 0.0) {
          auVar1._12_4_ = 0;
          auVar1._0_12_ = auVar24._4_12_;
          auVar25 = auVar1 << 0x20;
        }
        if (auVar20._0_4_ <= 0.0) {
          auVar2._12_4_ = 0;
          auVar2._0_12_ = auVar24._4_12_;
          auVar20 = auVar2 << 0x20;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        local_f0 = auVar20._0_4_;
        local_f8 = CONCAT44(fVar15,auVar25._0_4_);
        if ((param_1 != 0) &&
           (fVar26 = fVar15 * _DAT_1808ac270 + auVar25._0_4_ * _DAT_1808ac124 +
                     auVar20._0_4_ * _DAT_1808ac098, DAT_1808abf8c < fVar26)) {
          fVar27 = fVar26;
          if (fVar7 <= fVar26) {
            fVar27 = fVar7;
          }
          if (DAT_1808abfdc < fVar27) {
            fVar27 = (float)FUN_18051afb0();
            fVar27 = fVar27 * fVar8 - fVar6;
          }
          else {
            fVar27 = fVar27 * fVar9;
          }
          fVar27 = (fVar27 - DAT_1808ac1f4) * local_154 + DAT_1808ac1f4;
          if (0.0 <= fVar27) {
            fVar17 = fVar7;
            if (fVar27 <= fVar7) {
              fVar17 = fVar27;
            }
            if (DAT_1808ac054 < fVar17) {
              fVar17 = (float)FUN_18051afb0();
            }
            else {
              fVar17 = fVar17 / fVar9;
            }
          }
          else {
            fVar17 = 0.0 / fVar9;
          }
          pfVar11 = (float *)&local_f8;
          do {
            *pfVar11 = (fVar17 / fVar26) * *pfVar11;
            pfVar11 = pfVar11 + 1;
          } while (pfVar11 != &local_ec);
          auVar20 = ZEXT416((uint)local_f0);
          uVar21 = 0;
          uVar22 = 0;
          uVar23 = 0;
          auVar25 = ZEXT416((uint)(float)local_f8);
          fVar15 = local_f8._4_4_;
        }
        fVar26 = auVar20._0_4_;
        fVar27 = fVar15 * _DAT_1808ac270 + auVar25._0_4_ * _DAT_1808ac124 + fVar26 * _DAT_1808ac098;
        if (fVar27 <= 0.0) {
          fVar27 = 0.0;
        }
        if (param_8 == '\0') {
          if (!bVar5) {
            uVar16 = CONCAT44(fVar15,auVar25._0_4_);
            local_118 = uVar16;
            local_110 = fVar26;
            local_f8 = uVar16;
            pfVar11 = (float *)FUN_1804e9c00(&local_118,local_10c);
            fVar17 = *pfVar11;
            local_108 = uVar16;
            local_100 = fVar26;
            pfVar11 = (float *)FUN_1804e9c90(&local_108,local_fc);
            fVar26 = fVar7;
            if (DAT_1808abf8c < fVar17) {
              fVar26 = fVar7 - (fVar17 - *pfVar11) / fVar17;
            }
            pfVar11 = (float *)&local_f8;
            fVar26 = (fVar26 * local_150 + fVar7) * local_14c;
            if (fVar26 <= 0.0) {
              fVar26 = 0.0;
            }
            do {
              *pfVar11 = (*pfVar11 - fVar27) * fVar26 + fVar27;
              pfVar11 = pfVar11 + 1;
            } while (pfVar11 != &local_ec);
            auVar20 = ZEXT416((uint)local_f0);
            auVar25 = ZEXT416((uint)(float)local_f8);
            fVar15 = local_f8._4_4_;
          }
        }
        else {
          auVar20._4_4_ = uVar21;
          auVar20._0_4_ = fVar27;
          auVar20._8_4_ = uVar22;
          auVar20._12_4_ = uVar23;
          auVar25._4_4_ = uVar21;
          auVar25._0_4_ = fVar27;
          auVar25._8_4_ = uVar22;
          auVar25._12_4_ = uVar23;
          fVar15 = fVar27;
        }
        if (auVar25._0_4_ <= 0.0) {
          auVar3._12_4_ = 0;
          auVar3._0_12_ = auVar25._4_12_;
          auVar25 = auVar3 << 0x20;
        }
        if ((auVar25._0_4_ <= fVar7) && (fVar18 < auVar25._0_4_)) {
          FUN_18051afb0();
        }
        uVar10 = FUN_1804f3280();
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        *puVar13 = uVar10;
        if ((fVar15 <= fVar7) && (fVar18 < fVar15)) {
          FUN_18051afb0();
        }
        uVar10 = FUN_1804f3280();
        if (auVar20._0_4_ <= 0.0) {
          auVar4._12_4_ = 0;
          auVar4._0_12_ = auVar20._4_12_;
          auVar20 = auVar4 << 0x20;
        }
        puVar13[1] = uVar10;
        if ((auVar20._0_4_ <= fVar7) && (fVar18 < auVar20._0_4_)) {
          FUN_18051afb0();
        }
        uVar10 = FUN_1804f3280();
        fVar26 = DAT_1808ac9f4;
        uVar21 = DAT_1808ac5d0;
        iVar12 = iVar12 + 1;
        puVar13[2] = uVar10;
        puVar13[3] = 0xff;
        puVar13 = puVar13 + 4;
      } while (iVar12 < 0x20);
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x20);
    local_188 = local_188 + 1;
  } while (local_188 < 0x20);
  return;
}



/* ===== 18001ef80 FUN_18001ef80 ===== */

undefined8 FUN_18001ef80(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res18 [2];
  
  plVar1 = (longlong *)*DAT_180ca3c58;
  if (plVar1 == (longlong *)0x0) {
    local_res18[0] = 0;
  }
  else {
    local_res18[0] = 0;
    (**(code **)((ulonglong)DAT_180ca3c68 + *plVar1))
              (plVar1,local_res18,param_1,0,param_2,param_2,&DAT_180ca3d70,0x20000,0);
  }
  return local_res18[0];
}



/* ===== 18001f000 FUN_18001f000 ===== */

undefined1 FUN_18001f000(longlong *param_1)

{
  undefined1 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) || ((*(byte *)(param_1 + 3) & 2) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* ===== 18001f020 FUN_18001f020 ===== */

void FUN_18001f020(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((param_1 != 0) && (DAT_180ca3c60 != (longlong *)0x0)) &&
     (plVar3 = (longlong *)*DAT_180ca3c60, plVar3 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x20);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    }
  }
  return;
}



/* ===== 18001f060 FUN_18001f060 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001f060(undefined4 *param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ULONGLONG UVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_278 [32];
  longlong local_258;
  undefined4 local_250;
  undefined4 local_248;
  char local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
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
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_278;
  if ((((DAT_1809627d0 == '\0') || (iVar2 = memcmp(&DAT_1809627d4,param_1,0x1c), iVar2 != 0)) ||
      (DAT_1809627f0 != param_2)) && (DAT_180ca3c6c != '\0')) {
    local_248 = param_1[6];
    local_250 = param_1[5];
    local_258 = CONCAT44(local_258._4_4_,param_1[4]);
    local_240 = param_2;
    FUN_18001e780(*param_1,param_1[1],param_1[2],param_1[3]);
    local_238 = 0x3f800000;
    uStack_1e8 = 0;
    _DAT_180962728 = &DAT_180ca3d70;
    _DAT_180962720 = 0x20000;
    local_1c0 = 0;
    local_1f0 = &DAT_3f8000003f800000;
    uStack_228 = 0;
    _DAT_180962724 = 0x20000;
    local_200 = 0;
    uStack_1f8 = 0x3f80000000000000;
    DAT_1809627f8 = DAT_1809627f8 + 1;
    uStack_1d8 = 0;
    local_1e0 = 1;
    uStack_218 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_230 = 0x1002000200020;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_220 = 0x50;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_258 = DAT_1809627f8;
    snprintf(&local_1b8,0x80,"neverwin_colorcorrection_%llx_%llu.vtex",&DAT_180962610);
    lVar3 = FUN_18001ef80(&local_1b8,&local_230);
    bVar1 = FUN_18001f000(lVar3);
    if (bVar1 == 0) {
      if (lVar3 != 0) {
        FUN_18001f020(lVar3);
      }
    }
    else {
      uVar5 = DAT_1809627c8 ^ 1;
      FUN_18001f020(*(undefined8 *)(&DAT_180962770 + uVar5 * 0x10));
      *(undefined **)(&DAT_180962768 + uVar5 * 0x10) = &DAT_180962610;
      *(longlong *)(&DAT_180962770 + uVar5 * 0x10) = lVar3;
      _DAT_1809627d4 = *param_1;
      uRam00000001809627d8 = param_1[1];
      uRam00000001809627dc = param_1[2];
      _DAT_1809627e0 = *(undefined8 *)(param_1 + 3);
      uRam00000001809627e8 = *(undefined8 *)(param_1 + 5);
      DAT_1809627d0 = '\x01';
      DAT_1809627c8 = uVar5;
      DAT_1809627f0 = param_2;
    }
    if (bVar1 != DAT_180962800) {
      DAT_180962800 = (uint)bVar1;
      FUN_180540170(local_138,0,0x100);
      pcVar6 = "FAILED";
      if (bVar1 != 0) {
        pcVar6 = "created";
      }
      local_258 = lVar3;
      snprintf(local_138,0x100,"color correction | LUT texture %s %p",pcVar6);
      UVar4 = GetTickCount64();
      FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar4,local_138);
      if (bVar1 == 0) {
        FUN_1802b2560("[error] ambience | color correction LUT texture not created");
      }
    }
  }
  return;
}



/* ===== 18001f340 FUN_18001f340 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001f340(void)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 uVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  float local_a8;
  int local_a0 [7];
  int local_84;
  longlong local_80 [15];
  
  local_80[7] = DAT_180919500 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_1800f1c60();
  if ((((*(char *)(lVar5 + 0x270) == '\0') && (*(char *)(lVar5 + 0x1b8) == '\0')) &&
      (*(char *)(lVar5 + 600) == '\0')) &&
     ((*(char *)(lVar5 + 0x234) == '\0' && (*(char *)(lVar5 + 0x36a) == '\0')))) {
    uVar7 = 0;
    bVar3 = false;
  }
  else {
    uVar7 = 1;
    bVar3 = true;
  }
  DAT_1809627c1 = *(undefined1 *)(lVar5 + 0x36a);
  if (bVar3) {
    plVar8 = local_80;
    local_80[0] = 0;
    local_80[1] = 0x40;
    local_80[2] = 0xcc;
    local_80[3] = 0xf4;
    local_80[4] = 0x120;
    local_80[5] = 0x121;
    local_80[6] = 0x144;
    do {
      lVar2 = *plVar8;
      plVar8 = plVar8 + 1;
      (&DAT_180962610)[lVar2] = 0;
      fVar1 = DAT_1808ac34c;
    } while (plVar8 != local_80 + 7);
    if (*(char *)(lVar5 + 0x270) != '\0') {
      DAT_180962610 = 1;
      _DAT_180962634 = 0;
      uRam000000018096263c = 0;
      _DAT_180962640 = 0;
      uRam0000000180962644 = 0;
      uRam0000000180962648 = 0;
      _DAT_180962614 = 0;
      if (*(int *)(lVar5 + 0x274) == 1) {
        local_a8 = 4.0;
        _DAT_180962618 = (undefined4)_DAT_1808ad970;
        uRam000000018096261c = (undefined4)((ulonglong)_DAT_1808ad970 >> 0x20);
        uRam0000000180962620 = (undefined4)_UNK_1808ad978;
        _DAT_180962624 = (undefined4)((ulonglong)_UNK_1808ad978 >> 0x20);
        _DAT_180962628 = 0x3ca3d70a;
        _DAT_18096262c = 0x3e99999a;
      }
      else {
        local_a8 = 1.5;
        _DAT_180962618 = (undefined4)_DAT_1808adb10;
        uRam000000018096261c = (undefined4)((ulonglong)_DAT_1808adb10 >> 0x20);
        uRam0000000180962620 = (undefined4)_UNK_1808adb18;
        _DAT_180962624 = (undefined4)((ulonglong)_UNK_1808adb18 >> 0x20);
        _DAT_180962628 = 0x3f800000;
        _DAT_18096262c = 0x3f800000;
      }
      _DAT_18096262c = CONCAT44(local_a8,_DAT_18096262c);
      cVar4 = *(char *)(lVar5 + 0x294);
      local_a0[0] = *(int *)(lVar5 + 0x278);
      local_a0[1] = *(undefined4 *)(lVar5 + 0x27c);
      local_a0[2] = *(undefined4 *)(lVar5 + 0x280);
      local_a0[3] = *(undefined4 *)(lVar5 + 0x284);
      local_a0[4] = *(undefined4 *)(lVar5 + 0x288);
      local_a0[5] = *(undefined4 *)(lVar5 + 0x28c);
      local_a0[6] = *(undefined4 *)(lVar5 + 0x290);
      piVar6 = local_a0;
      do {
        if ((cVar4 != '\0') || (*piVar6 != 0)) {
          cVar4 = '\x01';
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != &local_84);
      if (cVar4 != '\0') {
        FUN_18001f060(local_a0);
        cVar4 = FUN_18001f000(*(undefined8 *)(&DAT_180962770 + DAT_1809627c8 * 0x10));
        if (cVar4 != '\0') {
          _DAT_18096271c = 0x20;
          DAT_180962730 = 1;
        }
      }
    }
    if (*(char *)(lVar5 + 0x1b8) != '\0') {
      DAT_180962650 = 1;
      uRam000000018096266c = 0;
      _DAT_180962674 = 0;
      uRam000000018096267c = 0;
      _DAT_180962684 = 0;
      fVar12 = (float)*(int *)(lVar5 + 0x1bc);
      fVar10 = (float)((uint)fVar12 & _DAT_1808ade90) / DAT_1808acc3c;
      if (fVar1 <= fVar10) {
        fVar10 = fVar1;
      }
      if (fVar12 <= 0.0) {
        if (0.0 <= fVar12) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = DAT_1808acda0;
        }
      }
      else {
        fVar12 = fVar1;
      }
      _DAT_180962654 = (ulonglong)(uint)(fVar12 * DAT_1808acb08 * fVar10 * fVar10) << 0x20;
      fVar12 = (float)*(int *)(lVar5 + 0x1c0);
      fVar10 = (float)((uint)fVar12 & _DAT_1808ade90) / DAT_1808acc3c;
      if (fVar1 <= fVar10) {
        fVar10 = fVar1;
      }
      if (fVar12 <= 0.0) {
        if (0.0 <= fVar12) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = DAT_1808acda0;
        }
      }
      else {
        fVar12 = fVar1;
      }
      _DAT_18096265c =
           CONCAT44((float)*(int *)(lVar5 + 0x1c4) * DAT_1808ac000,
                    fVar12 * DAT_1808acb08 * fVar10 * fVar10);
      fVar10 = (float)*(int *)(lVar5 + 0x1c8);
      if (fVar10 < 0.0) {
        fVar12 = DAT_1808ac5e0;
      }
      else {
        fVar12 = DAT_1808acb08;
      }
      fVar11 = (float)((uint)fVar10 & _DAT_1808ade90) / (fVar12 * DAT_1808ac864);
      if (fVar1 <= fVar11) {
        fVar11 = fVar1;
      }
      if (fVar10 <= 0.0) {
        fVar9 = DAT_1808acda0;
        if (0.0 <= fVar10) {
          fVar9 = 0.0;
        }
      }
      else {
        fVar9 = fVar1;
      }
      if (0.0 <= (float)*(int *)(lVar5 + 0x1cc)) {
        local_a8 = (float)*(int *)(lVar5 + 0x1cc) / DAT_1808acc3c;
        if (fVar1 <= local_a8) {
          local_a8 = fVar1;
        }
        local_a8 = local_a8 * DAT_1808acb08 * local_a8;
      }
      else {
        local_a8 = 0.0;
      }
      _DAT_180962664 = CONCAT44(local_a8,fVar9 * fVar12 * fVar11 * fVar11);
      _DAT_1809626a4 = *(float *)(lVar5 + 0x1f0);
      _DAT_1809626a8 = _DAT_1809626a4 * *(float *)(lVar5 + 0x1ec);
      _DAT_1809626a0 = _DAT_1809626a4 * (float)*(undefined8 *)(lVar5 + 0x1e4);
      _DAT_1809626a4 = _DAT_1809626a4 * (float)((ulonglong)*(undefined8 *)(lVar5 + 0x1e4) >> 0x20);
      _DAT_18096268c =
           CONCAT44((float)*(int *)(lVar5 + 0x1d4) * DAT_1808ac000,
                    (float)*(int *)(lVar5 + 0x1d0) * DAT_1808ac000);
      fVar1 = *(float *)(lVar5 + 0x200);
      _DAT_1809626b4 = fVar1 * *(float *)(lVar5 + 0x1fc);
      _DAT_1809626ac =
           CONCAT44(fVar1 * (float)((ulonglong)*(undefined8 *)(lVar5 + 500) >> 0x20),
                    fVar1 * (float)*(undefined8 *)(lVar5 + 500));
      fRam00000001809626bc = *(float *)(lVar5 + 0x210);
      _DAT_1809626c0 = fRam00000001809626bc * *(float *)(lVar5 + 0x20c);
      _DAT_1809626b8 = fRam00000001809626bc * (float)*(undefined8 *)(lVar5 + 0x204);
      fRam00000001809626bc =
           fRam00000001809626bc * (float)((ulonglong)*(undefined8 *)(lVar5 + 0x204) >> 0x20);
      _DAT_180962694 =
           CONCAT44((float)*(int *)(lVar5 + 0x1dc) * DAT_1808ac000,
                    (float)*(int *)(lVar5 + 0x1d8) * DAT_1808ac000);
      fVar1 = *(float *)(lVar5 + 0x220);
      _DAT_1809626cc = fVar1 * *(float *)(lVar5 + 0x21c);
      _DAT_1809626c4 =
           CONCAT44(fVar1 * (float)((ulonglong)*(undefined8 *)(lVar5 + 0x214) >> 0x20),
                    fVar1 * (float)*(undefined8 *)(lVar5 + 0x214));
      _DAT_18096269c = (float)*(int *)(lVar5 + 0x1e0) * DAT_1808ac000;
      _DAT_1809626d4 = *(float *)(lVar5 + 0x230);
      _DAT_1809626d8 = _DAT_1809626d4 * *(float *)(lVar5 + 0x22c);
      _DAT_1809626d0 = _DAT_1809626d4 * (float)*(undefined8 *)(lVar5 + 0x224);
      _DAT_1809626d4 = _DAT_1809626d4 * (float)((ulonglong)*(undefined8 *)(lVar5 + 0x224) >> 0x20);
    }
    if (*(char *)(lVar5 + 600) != '\0') {
      DAT_180962704 = 1;
      _DAT_180962708 = (float)*(int *)(lVar5 + 0x25c) * _DAT_1808ad920;
      fRam000000018096270c = (float)*(int *)(lVar5 + 0x260) * _UNK_1808ad924;
      fRam0000000180962710 = (float)*(int *)(lVar5 + 0x264) * _UNK_1808ad928;
      fRam0000000180962714 = (float)*(int *)(lVar5 + 0x268) * _UNK_1808ad92c;
      _DAT_180962718 = (float)*(int *)(lVar5 + 0x26c) * DAT_1808ac0c0;
    }
    if (*(char *)(lVar5 + 0x234) != '\0') {
      DAT_1809626dc = 1;
      fVar1 = *(float *)(lVar5 + 0x244);
      _DAT_180962700 = fVar1 * *(float *)(lVar5 + 0x240);
      _DAT_1809626e4 = 0;
      _DAT_1809626e0 = (float)*(int *)(lVar5 + 0x248) * DAT_1808ac000;
      _DAT_1809626f4 = (float)*(int *)(lVar5 + 0x254) * DAT_1808ac000;
      _DAT_1809626ec =
           CONCAT44((float)(int)((ulonglong)*(undefined8 *)(lVar5 + 0x24c) >> 0x20) * _UNK_1808ad8e4
                    ,(float)(int)*(undefined8 *)(lVar5 + 0x24c) * _DAT_1808ad8e0);
      _DAT_1809626f8 =
           CONCAT44(fVar1 * (float)((ulonglong)*(undefined8 *)(lVar5 + 0x238) >> 0x20),
                    fVar1 * (float)*(undefined8 *)(lVar5 + 0x238));
    }
    *(undefined1 **)(&DAT_180962768 + DAT_1809627c8 * 0x10) = &DAT_180962610;
    _DAT_180962790 = &DAT_180962768 + DAT_1809627c8 * 0x10;
    DAT_1809627c0 = 1;
  }
  else {
    DAT_1809627c0 = uVar7;
  }
  return;
}



/* ===== 18001fa50 FUN_18001fa50 ===== */

void FUN_18001fa50(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x38))(param_1,&DAT_180962790,param_2);
  return;
}



/* ===== 18001fa70 FUN_18001fa70 ===== */

void FUN_18001fa70(longlong *param_1)

{
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* ===== 18001fa90 FUN_18001fa90 ===== */

undefined8 FUN_18001fa90(longlong param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  float local_74;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined4 local_68 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_6c = param_3;
  if ((param_1 == 0) || (DAT_1809627c0 == '\0')) {
    uVar9 = (*DAT_180ca3ce8)();
  }
  else {
    iVar4 = FUN_180011200(param_1 + 0x40);
    lVar7 = FUN_18000f3a0(param_1 + 0x48);
    if ((iVar4 < 1) || (lVar7 == 0)) {
      iVar4 = 4;
    }
    else {
      iVar4 = FUN_180011200(lVar7 + (ulonglong)(iVar4 - 1) * 4);
    }
    cVar3 = DAT_1809627c1;
    local_68[0] = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (DAT_1809627c1 != '\0') {
      local_68[0] = FUN_180011200(param_1 + 0xbc);
      uVar10 = 0;
      do {
        uVar2 = FUN_180011220(uVar10 + param_1 + 0x90);
        *(undefined1 *)((longlong)local_68 + uVar10 + 0x10) = uVar2;
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while ((int)uVar11 < 0x10);
      local_74 = 0.0;
      FUN_180013280(param_1 + 0xbc,&local_74);
      uVar10 = 0;
      do {
        local_70[0] = 0;
        FUN_1800233d0(uVar10 + param_1 + 0x90,local_70);
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
      } while ((int)uVar11 < 0x10);
      iVar5 = FUN_180011200(param_1 + 0x28);
      lVar7 = FUN_18000f3a0(param_1 + 0x30);
      if (((iVar5 - 1U < 0x1000) && (lVar7 != 0)) && (0 < iVar5)) {
        uVar10 = 0;
        do {
          lVar8 = FUN_18000f3a0(lVar7 + uVar10 * 8);
          if (lVar8 != 0) {
            iVar6 = FUN_180011200(lVar8 + 8);
            if (iVar6 == iVar4) {
              local_74 = (float)-iVar4;
              FUN_180013280(lVar8 + 8,&local_74);
            }
          }
          uVar11 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar11;
        } while ((int)uVar11 < iVar5);
      }
      param_3 = local_6c;
    }
    lVar7 = FUN_18001fa50(param_1,iVar4);
    if (lVar7 == 0) {
      uVar9 = (*DAT_180ca3ce8)(param_1,param_2,param_3);
    }
    else {
      local_74 = 1.0;
      FUN_180013280(lVar7 + 0xc,&local_74);
      uVar9 = (*DAT_180ca3ce8)(param_1,param_2,param_3);
      FUN_18001fa70(param_1,lVar7);
    }
    if (cVar3 != '\0') {
      iVar4 = FUN_180011200(param_1 + 0x28);
      lVar7 = FUN_18000f3a0(param_1 + 0x30);
      if (((iVar4 - 1U < 0x1000) && (lVar7 != 0)) && (uVar10 = 0, 0 < iVar4)) {
        do {
          lVar8 = FUN_18000f3a0(lVar7 + uVar10 * 8);
          if (lVar8 != 0) {
            iVar5 = FUN_180011200(lVar8 + 8);
            if (iVar5 < 0) {
              local_74 = (float)-iVar5;
              FUN_180013280(lVar8 + 8,&local_74);
            }
          }
          uVar11 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar11;
        } while ((int)uVar11 < iVar4);
      }
      FUN_180013280(param_1 + 0xbc,local_68);
      lVar7 = 0;
      do {
        FUN_1800233d0(param_1 + 0x90 + lVar7,(longlong)local_68 + lVar7 + 0x10);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x10);
    }
  }
  if (((param_2 != 0) && (1 < DAT_180962810 - 2U)) &&
     (cVar3 = FUN_180011220(param_2 + 0xd4), fVar1 = DAT_180962814, cVar3 != '\0')) {
    local_74 = (float)FUN_18000f3d0(param_2 + 0xec);
    local_74 = local_74 + fVar1;
    FUN_180013280(param_2 + 0xec,&local_74);
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return uVar9;
}



/* ===== 18001fda0 FUN_18001fda0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001fda0(longlong param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  LARGE_INTEGER *pLVar9;
  LARGE_INTEGER *pLVar10;
  LARGE_INTEGER LVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8 [2];
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  
  lVar5 = FUN_1800f1c60();
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    LVar11.s = local_res10.s;
  }
  else {
    LVar11.s = DAT_181108a00.s;
  }
  if ((*(char *)(lVar5 + 0x295) == '\0') || (LVar11.s == (_struct_19)0x0)) {
    DAT_180962868 = 1;
    return;
  }
  if (*(int *)(lVar5 + 0x298) == 0) {
    DAT_180962868 = '\x01';
    iVar4 = *(int *)(lVar5 + 0x2a0);
    if (iVar4 < 0x97) {
      iVar3 = 0;
      if (0 < iVar4) {
        iVar3 = iVar4;
      }
      fVar15 = (float)iVar3 * DAT_1808aca80;
    }
    else {
      fVar15 = DAT_1808acc7c;
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_1800111b0(&local_c0,(ulonglong)DAT_180961ff0 + param_1);
    local_d0 = *puVar6;
    local_c8 = *(float *)(puVar6 + 1);
    FUN_18000f3d0((ulonglong)DAT_180961ff4 + param_1);
    FUN_18000f3d0((ulonglong)DAT_180961ff4 + 4 + param_1);
    fVar14 = (float)FUN_180517200();
    fVar12 = (float)FUN_180517200();
    fVar15 = DAT_1808acc7c;
    local_a0 = fVar12 * fVar14 * DAT_1808acc7c + (float)local_d0;
    fVar12 = (float)FUN_180517790();
    local_9c = fVar12 * fVar14 * fVar15 + local_d0._4_4_;
    uVar13 = FUN_180517790();
    local_98 = (float)(uVar13 ^ DAT_1808adec0) * fVar15 + local_c8;
    if (DAT_180cd1304 == '\0') {
      FUN_1803a0b60(&local_res10);
      DAT_181108a00.s = local_res10.s;
      DAT_1811089f8 = FUN_1803a0c50(&local_res10);
      DAT_180cd1304 = '\x01';
    }
    fVar14 = DAT_1808ac34c;
    local_90 = _DAT_1808ad2c0;
    uStack_88 = _UNK_1808ad2c8;
    local_70 = 0;
    local_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_64 = 0;
    local_60 = 0x3f800000;
    if (DAT_180962868 == '\0') {
      fVar12 = DAT_180962870;
    }
    else {
      fVar12 = fVar15;
    }
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    cVar2 = FUN_1802aed00(&local_d0,&local_a0,&local_c0,&local_b0,DAT_1811089f8,0x1c1003,4,7,
                          &local_90,0);
    if (cVar2 != '\0') {
      if ((float)local_90 < fVar14) {
        if (local_64._1_1_ == '\0') {
          local_e0 = 1.0;
          local_e4 = 0.0;
          pfVar8 = &local_e4;
          if (0.0 <= (float)local_90) {
            pfVar8 = (float *)&local_90;
          }
          pfVar7 = &local_e0;
          if ((float)local_90 <= fVar14) {
            pfVar7 = pfVar8;
          }
          fVar12 = *pfVar7 * fVar15;
          if (*pfVar7 * fVar15 <= fVar14) {
            fVar12 = fVar14;
          }
        }
      }
    }
    local_res10.QuadPart = 0;
    local_res18.QuadPart = 0;
    DAT_180962870 = fVar12;
    QueryPerformanceCounter(&local_res10);
    QueryPerformanceFrequency(&local_res18);
    local_e8 = 0.0;
    if ((DAT_180962878 != (_struct_19)0x0) && (local_res18.QuadPart != 0)) {
      local_e8 = (float)((double)(local_res10.QuadPart - (longlong)DAT_180962878) /
                        (double)local_res18.QuadPart);
    }
    DAT_180962878 = local_res10.s;
    local_d8[0] = 0.1;
    local_dc = 0.0001;
    pfVar8 = &local_dc;
    if (DAT_1808abfa0 <= local_e8) {
      pfVar8 = &local_e8;
    }
    pfVar7 = local_d8;
    if (local_e8 <= DAT_1808ac0c0) {
      pfVar7 = pfVar8;
    }
    if (DAT_180962868 != '\0') {
      DAT_180962868 = '\0';
      DAT_18096286c = fVar12;
    }
    if (DAT_18096286c <= fVar12) {
      if (DAT_1808abf94 < fVar12 - DAT_18096286c) {
        iVar4 = 1;
        if (1 < *(int *)(lVar5 + 0x2a4)) {
          iVar4 = *(int *)(lVar5 + 0x2a4);
        }
        fVar14 = (float)iVar4 * *pfVar7 * (fVar12 - DAT_18096286c);
        if (fVar14 <= DAT_1808abf94) {
          fVar14 = DAT_1808abf94;
        }
        fVar1 = fVar14 + DAT_18096286c;
        if (fVar12 <= fVar14 + DAT_18096286c) {
          fVar1 = fVar12;
        }
        DAT_18096286c = fVar1;
      }
      fVar12 = DAT_18096286c;
    }
    local_res10._0_4_ = fVar12;
    local_res20.s.LowPart = 0x45ea6000;
    local_res18.QuadPart = local_res18.QuadPart & 0xffffffff00000000;
    pLVar10 = &local_res18;
    if (0.0 <= fVar12) {
      pLVar10 = &local_res10;
    }
    pLVar9 = &local_res20;
    if (fVar12 <= fVar15) {
      pLVar9 = pLVar10;
    }
    fVar15 = *(float *)&pLVar9->QuadPart;
    DAT_18096286c = fVar12;
  }
  iVar4 = *(int *)(lVar5 + 0x2a8);
  if (iVar4 < 0x97) {
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    fVar14 = (float)iVar3 * DAT_1808aca80 * DAT_1808ac1f4;
  }
  else {
    fVar14 = DAT_1808acc68;
  }
  local_res10.s.LowPart._0_1_ = 1;
  FUN_1800233d0(param_1 + 0x4d8,&local_res10);
  fVar12 = DAT_1808acc4c;
  local_res10.s.LowPart = (DWORD)((fVar15 - fVar14) - DAT_1808acc4c);
  FUN_180013280(param_1 + 0x4dc,&local_res10);
  local_res10.s.LowPart = (DWORD)(fVar15 - fVar14);
  FUN_180013280(param_1 + 0x4e0,&local_res10);
  local_res10.s.LowPart = (DWORD)(fVar14 + fVar15);
  FUN_180013280(param_1 + 0x4e4,&local_res10);
  local_res10.s.LowPart = (DWORD)(fVar14 + fVar15 + fVar12);
  FUN_180013280(param_1 + 0x4e8,&local_res10);
  local_res10.s.LowPart = 0x3f400000;
  FUN_180013280(param_1 + 0x4ec,&local_res10);
  return;
}



/* ===== 1800202f0 FUN_1800202f0 ===== */

void FUN_1800202f0(undefined8 param_1,longlong param_2)

{
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  (*DAT_180cc3e08)();
  if (param_2 != 0) {
    FUN_18001fda0(param_2);
    FUN_18001f340();
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 180020330 FUN_180020330 ===== */

undefined4 FUN_180020330(undefined8 *param_1,undefined8 param_2)

{
  BOOL BVar1;
  DWORD local_res18 [4];
  
  local_res18[0] = 0;
  BVar1 = VirtualProtect(param_1,8,4,local_res18);
  if (BVar1 == 0) {
    return 0;
  }
  *param_1 = param_2;
  VirtualProtect(param_1,8,local_res18[0],local_res18);
  return 1;
}



/* ===== 1800203a0 FUN_1800203a0 ===== */

char FUN_1800203a0(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  
  uVar4 = FUN_18000f3a0(param_1 + 0x18);
  if ((uVar4 == 0) || (lVar5 = FUN_18000f3a0(uVar4 + 0x10), lVar5 == 0)) {
    return '\0';
  }
  iVar3 = FUN_1804e4d70(&DAT_1809629f0);
  if (iVar3 != 0) goto LAB_1800205f3;
  if (DAT_180962a3c == 0x7fffffff) goto LAB_1800205fe;
  uVar9 = ((((((((uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar4 >> 8 & 0xff) *
                0x100000001b3 ^ uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar4 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x38) * 0x100000001b3 &
          DAT_180cc3eb0;
  lVar6 = *(longlong *)(DAT_180cc3e98 + 8 + uVar9 * 0x10);
  if (lVar6 == DAT_180cc3e88) {
LAB_1800204b9:
    lVar6 = DAT_180cc3e88;
  }
  else {
    uVar1 = *(ulonglong *)(lVar6 + 0x10);
    while (uVar4 != uVar1) {
      if (lVar6 == *(longlong *)(DAT_180cc3e98 + uVar9 * 0x10)) goto LAB_1800204b9;
      lVar6 = *(longlong *)(lVar6 + 8);
      uVar1 = *(ulonglong *)(lVar6 + 0x10);
    }
    if (lVar6 == 0) goto LAB_1800204b9;
  }
  if ((lVar6 != DAT_180cc3e88) && (*(longlong *)(lVar6 + 0x18) == lVar5)) {
    cVar2 = *(char *)(lVar6 + 0x20);
    FUN_1804e4e90(&DAT_1809629f0);
    return cVar2;
  }
  FUN_1804e4e90(&DAT_1809629f0);
  lVar6 = FUN_18000f3a0(lVar5 + 8);
  if ((((lVar6 == 0) || (lVar6 = FUN_18000f3a0(lVar6 + 8), lVar6 == 0)) ||
      (lVar6 = FUN_18000f3a0(lVar6), 0x7ffffffefffe < lVar6 - 0x10000U)) ||
     (cVar2 = FUN_180017650(lVar6,"skybox"), cVar2 == '\0')) {
    lVar6 = FUN_18000f3a0(param_1 + 0x20);
    cVar2 = '\0';
    if (lVar6 != 0) {
      uVar7 = FUN_1800175e0(lVar6);
      cVar2 = FUN_180017650(uVar7,"skybox");
    }
  }
  iVar3 = FUN_1804e4d70(&DAT_1809629f0);
  if (iVar3 == 0) {
    if (DAT_180962a3c != 0x7fffffff) {
      if (0x4000 < DAT_180cc3e90) {
        FUN_180023d70(&DAT_180cc3e80);
      }
      plVar8 = (longlong *)FUN_180026b70();
      lVar6 = *plVar8;
      *(longlong *)(lVar6 + 0x18) = lVar5;
      *(char *)(lVar6 + 0x20) = cVar2;
      *(undefined4 *)(lVar6 + 0x21) = local_1f;
      *(undefined2 *)(lVar6 + 0x25) = local_1b;
      *(undefined1 *)(lVar6 + 0x27) = local_19;
      FUN_1804e4e90(&DAT_1809629f0);
      return cVar2;
    }
LAB_1800205fe:
    DAT_180962a3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
LAB_1800205f3:
                    /* WARNING: Subroutine does not return */
  FUN_1804e4a90(5);
}



/* ===== 180020620 FUN_180020620 ===== */

undefined1 FUN_180020620(undefined8 param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  undefined8 local_res10;
  ulonglong local_res18;
  undefined *local_res20;
  undefined1 local_38 [16];
  
  uVar4 = FUN_18000f3a0();
  if (uVar4 == 0) {
    return 0;
  }
  local_res18 = uVar4;
  iVar3 = FUN_1804e4d70(&DAT_1809629a0);
  if (iVar3 != 0) goto LAB_180020855;
  if (DAT_1809629ec == 0x7fffffff) goto LAB_180020840;
  uVar6 = DAT_180ca0bd0 &
          ((((((((uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar4 >> 8 & 0xff) *
                0x100000001b3 ^ uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar4 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x38) * 0x100000001b3;
  lVar5 = *(longlong *)(DAT_180ca0bb8 + 8 + uVar6 * 0x10);
  if (lVar5 == DAT_180ca0ba8) {
LAB_18002074b:
    lVar5 = DAT_180ca0ba8;
  }
  else {
    uVar1 = *(ulonglong *)(lVar5 + 0x10);
    while (uVar4 != uVar1) {
      if (lVar5 == *(longlong *)(DAT_180ca0bb8 + uVar6 * 0x10)) goto LAB_18002074b;
      lVar5 = *(longlong *)(lVar5 + 8);
      uVar1 = *(ulonglong *)(lVar5 + 0x10);
    }
    if (lVar5 == 0) goto LAB_18002074b;
  }
  if (lVar5 == DAT_180ca0ba8) {
    FUN_1804e4e90(&DAT_1809629a0);
    local_res10 = param_1;
    lVar5 = FUN_1803a0710(&local_res10);
    cVar2 = FUN_1800176a0(uVar4,".?AVC_CS2HudModelAddon@@");
    if ((cVar2 == '\0') &&
       (cVar2 = FUN_1800176a0(uVar4,".?AVC_CS2WeaponModuleBase@@"), cVar2 == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    local_res10 = CONCAT71(local_res10._1_7_,uVar7);
    if ((lVar5 != 0) &&
       ((cVar2 = FUN_180017680(lVar5,"C_CSPlayerPawn"), cVar2 != '\0' ||
        (cVar2 = FUN_180017680(lVar5,"C_DynamicProp"), cVar2 != '\0')))) {
      local_res10 = CONCAT71(local_res10._1_7_,1);
      uVar7 = 1;
    }
    local_res20 = &DAT_1809629a0;
    iVar3 = FUN_1804e4d70(&DAT_1809629a0);
    if (iVar3 != 0) {
LAB_180020855:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809629ec == 0x7fffffff) {
LAB_180020840:
      DAT_1809629ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (0x1000 < DAT_180ca0bb0) {
      FUN_180023ae0(&DAT_180ca0ba0);
    }
    FUN_180023780(&DAT_180ca0ba0,local_38,&local_res18,&local_res10);
  }
  else {
    uVar7 = *(undefined1 *)(lVar5 + 0x18);
  }
  FUN_1804e4e90(&DAT_1809629a0);
  return uVar7;
}



/* ===== 180020860 FUN_180020860 ===== */

undefined1 FUN_180020860(ulonglong param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  ulonglong local_res10;
  ulonglong local_res18;
  undefined *local_res20;
  undefined1 local_38 [16];
  
  uVar4 = FUN_18000f3a0();
  if (uVar4 == 0) {
    return 0;
  }
  local_res18 = uVar4;
  iVar3 = FUN_1804e4d70(&DAT_180962590);
  if (iVar3 != 0) goto LAB_180020bfc;
  if (DAT_1809625dc == 0x7fffffff) goto LAB_180020be7;
  uVar6 = DAT_180ca0b50 &
          ((((((((uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar4 >> 8 & 0xff) *
                0x100000001b3 ^ uVar4 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x18 & 0xff) *
              0x100000001b3 ^ uVar4 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x28 & 0xff) *
            0x100000001b3 ^ uVar4 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar4 >> 0x38) * 0x100000001b3;
  lVar5 = *(longlong *)(DAT_180ca0b38 + 8 + uVar6 * 0x10);
  if (lVar5 == DAT_180ca0b28) {
LAB_180020998:
    lVar5 = DAT_180ca0b28;
  }
  else {
    uVar1 = *(ulonglong *)(lVar5 + 0x10);
    while (uVar4 != uVar1) {
      if (lVar5 == *(longlong *)(DAT_180ca0b38 + uVar6 * 0x10)) goto LAB_180020998;
      lVar5 = *(longlong *)(lVar5 + 8);
      uVar1 = *(ulonglong *)(lVar5 + 0x10);
    }
    if (lVar5 == 0) goto LAB_180020998;
  }
  if (lVar5 == DAT_180ca0b28) {
    FUN_1804e4e90(&DAT_180962590);
    cVar2 = FUN_1800176a0(uVar4,".?AVCBaseProp@@");
    local_res10 = CONCAT71(local_res10._1_7_,cVar2);
    if (cVar2 == '\0') {
      uVar7 = 0;
    }
    else {
      local_res10 = param_1;
      lVar5 = FUN_1803a0710(&local_res10);
      if ((((((lVar5 == 0) || (cVar2 = FUN_180017680(lVar5,"C_CSPlayerPawn"), cVar2 == '\0')) &&
            ((local_res10 = param_1, lVar5 = FUN_1803a0710(&local_res10), lVar5 == 0 ||
             (cVar2 = FUN_180017680(lVar5,"C_CSGO_PreviewPlayer"), cVar2 == '\0')))) &&
           ((cVar2 = FUN_1800176a0(uVar4,".?AVC_BasePlayerWeapon@@"), cVar2 == '\0' &&
            ((local_res10 = param_1, lVar5 = FUN_1803a0710(&local_res10), lVar5 == 0 ||
             (cVar2 = FUN_180017680(lVar5,"C_PlantedC4"), cVar2 == '\0')))))) &&
          (((local_res10 = param_1, lVar5 = FUN_1803a0710(&local_res10), lVar5 == 0 ||
            (cVar2 = FUN_180017680(lVar5,"C_WorldModelGloves"), cVar2 == '\0')) &&
           ((local_res10 = param_1, lVar5 = FUN_1803a0710(&local_res10), lVar5 == 0 ||
            (cVar2 = FUN_180017680(lVar5,"C_Multimeter"), cVar2 == '\0')))))) &&
         (((local_res10 = param_1, lVar5 = FUN_1803a0710(&local_res10), lVar5 == 0 ||
           (cVar2 = FUN_180017680(lVar5,"C_KeychainModule"), cVar2 == '\0')) &&
          ((((local_res10 = param_1, lVar5 = FUN_1803a0710(&local_res10), lVar5 == 0 ||
             (cVar2 = FUN_180017680(lVar5,"C_NametagModule"), cVar2 == '\0')) &&
            ((local_res10 = param_1, lVar5 = FUN_1803a0710(&local_res10), lVar5 == 0 ||
             (cVar2 = FUN_180017680(lVar5,"C_StattrakModule"), cVar2 == '\0')))) &&
           ((cVar2 = FUN_1800176a0(uVar4,".?AVC_CS2HudModelWeapon@@"), cVar2 == '\0' &&
            (((local_res10 = param_1, lVar5 = FUN_1803a0710(&local_res10), lVar5 == 0 ||
              (cVar2 = FUN_180017680(lVar5,"C_CS2HudModelArms"), cVar2 == '\0')) &&
             (cVar2 = FUN_1800176a0(uVar4,".?AVC_CS2HudModelAddon@@"), cVar2 == '\0')))))))))) {
        uVar7 = 1;
        local_res10 = CONCAT71(local_res10._1_7_,1);
      }
      else {
        uVar7 = 0;
        local_res10 = local_res10 & 0xffffffffffffff00;
      }
    }
    local_res20 = &DAT_180962590;
    iVar3 = FUN_1804e4d70(&DAT_180962590);
    if (iVar3 != 0) {
LAB_180020bfc:
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809625dc == 0x7fffffff) {
LAB_180020be7:
      DAT_1809625dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    if (0x1000 < DAT_180ca0b30) {
      FUN_180023ae0(&DAT_180ca0b20);
    }
    FUN_180023780(&DAT_180ca0b20,local_38,&local_res18,&local_res10);
  }
  else {
    uVar7 = *(undefined1 *)(lVar5 + 0x18);
  }
  FUN_1804e4e90(&DAT_180962590);
  return uVar7;
}



/* ===== 180020c10 FUN_180020c10 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180020c10(void)

{
  undefined8 *lpAddress;
  bool bVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  HMODULE pHVar5;
  HANDLE pvVar6;
  longlong *plVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  int local_350;
  int local_348;
  longlong local_340;
  undefined4 local_338;
  undefined4 local_330;
  undefined4 local_328;
  char *local_320;
  longlong local_318;
  int local_310;
  longlong local_308;
  char *local_300;
  char *local_2f8;
  ulonglong uStack_2f0;
  undefined8 local_2e8;
  DWORD local_2d8 [4];
  char *local_2c8;
  ulonglong uStack_2c0;
  undefined1 local_2b8 [384];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_378;
  if (DAT_180ca3c40 == '\0') {
    DAT_180ca3c40 = '\x01';
    pHVar5 = GetModuleHandleA("client.dll");
    if (pHVar5 != (HMODULE)0x0) {
      local_2f8 = (char *)0x0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      pvVar6 = GetCurrentProcess();
      iVar3 = K32GetModuleInformation(pvVar6,pHVar5,&local_2f8,0x18);
      pcVar10 = local_2f8;
      if (((iVar3 != 0) && (local_2f8 != (char *)0x0)) && ((int)uStack_2f0 != 0)) {
        plVar7 = (longlong *)FUN_180017b10(&local_2f8,local_2f8,".text");
        local_2c8 = (char *)*plVar7;
        uStack_2c0 = plVar7[1];
        plVar7 = (longlong *)FUN_180017b10(&local_2f8,pcVar10,".rdata");
        local_2f8 = (char *)*plVar7;
        uStack_2f0 = plVar7[1];
        FUN_180017f60(&local_2c8,&local_2f8);
      }
    }
    FUN_180540170(local_2b8,0,0x100);
    local_358 = (undefined8 *)DAT_180ca3c38;
    snprintf(local_2b8,0x100,"callbacks | SkyStateChanged %p | C_BarnLight RenderingChanged %p",
             DAT_180ca3c30);
    UVar8 = GetTickCount64();
    FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar8,local_2b8);
    if (DAT_180ca3c30 == 0) {
      FUN_1802b2560("[error] ambience | C_EnvSky SkyStateChanged not found");
    }
    if (DAT_180ca3c38 == 0) {
      FUN_1802b2560("[error] ambience | C_BarnLight RenderingChanged not found");
    }
  }
  FUN_180017fc0();
  if ((((DAT_180962528 == 0) || (DAT_180962530 == 0)) ||
      ((DAT_180962538 == 0 || ((DAT_180962540 == 0 || (DAT_180962544 != DAT_180962540 + 0x10))))))
     || ((DAT_180962548 != 0 && (DAT_180962548 != DAT_180962544 + 0x10)))) {
    DAT_18096255c = '\0';
  }
  else {
    DAT_18096255c = '\x01';
    if (DAT_180962548 == 0) {
      DAT_180962548 = DAT_180962544 + 0x10;
    }
  }
  FUN_180018230();
  local_310 = DAT_180ca3c68;
  local_308 = DAT_180ca3c60;
  local_318 = DAT_180ca3c58;
  if (((DAT_180ca3c58 == 0) || (DAT_180ca3c60 == 0)) || (DAT_180ca3c68 == 0)) {
    DAT_180ca3c6c = 0;
    bVar1 = false;
  }
  else {
    DAT_180ca3c6c = 1;
    bVar1 = true;
  }
  FUN_180540170(local_2b8,0,0x180);
  local_320 = "MISSING";
  local_300 = "MISSING";
  if (bVar1) {
    local_300 = "ok";
  }
  if (DAT_18096255c != '\0') {
    local_320 = "ok";
  }
  local_328 = DAT_180962554;
  local_330 = DAT_180962550;
  local_338 = DAT_18096254c;
  local_340 = DAT_180962538;
  local_348 = DAT_180962548;
  local_350 = DAT_180962544;
  local_358 = (undefined8 *)CONCAT44(local_358._4_4_,DAT_180962540);
  snprintf(local_2b8,0x180,
           "[ambience] model wetness: WorldRendererMgr %p slots +0x%x/+0x%x/+0x%x, world fn %p, pawn +0x%x/+0x%x/+0x%x -> %s | color correction LUT: render device %p +0x%x, handle utils %p -> %s"
           ,DAT_180962528);
  FUN_1802b2560(&DAT_1806d3198,local_2b8);
  UVar8 = GetTickCount64();
  FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar8,local_2b8);
  pHVar5 = GetModuleHandleA("materialsystem2.dll");
  if (pHVar5 == (HMODULE)0x0) {
LAB_180020fbc:
    FUN_1802b2560("[error] ambience | CPostProcessingState vtable not found");
LAB_180020fc8:
    uVar12 = 0;
  }
  else {
    local_2f8 = (char *)0x0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    pvVar6 = GetCurrentProcess();
    iVar3 = K32GetModuleInformation(pvVar6,pHVar5,&local_2f8,0x18);
    if (iVar3 == 0) goto LAB_180020fbc;
    uStack_2f0 = uStack_2f0 & 0xffffffff;
    if ((local_2f8 == (char *)0x0) || (uStack_2f0 == 0)) goto LAB_180020fbc;
    uStack_2c0 = 0x14;
    local_2c8 = "CPostProcessingState";
    lVar9 = FUN_1801d1f10(&local_2f8,&local_2c8);
    if (lVar9 == 0) goto LAB_180020fbc;
    DAT_180cc3e10 = FUN_18000f3a0(lVar9 + 0x30);
    if (DAT_180cc3e10 == 0) {
LAB_180020fa3:
      FUN_1802b2560("[error] ambience | CPostProcessingState blend hook failed");
      DAT_180cc3e10 = 0;
      goto LAB_180020fc8;
    }
    uVar12 = 1;
    iVar3 = FUN_180428df0(DAT_180cc3e10,FUN_18001fa90,&DAT_180ca3ce8);
    if (iVar3 != 0) goto LAB_180020fa3;
  }
  pHVar5 = GetModuleHandleA("client.dll");
  if (pHVar5 != (HMODULE)0x0) {
    local_2f8 = (char *)0x0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    pvVar6 = GetCurrentProcess();
    iVar3 = K32GetModuleInformation(pvVar6,pHVar5,&local_2f8,0x18);
    if (iVar3 != 0) {
      uStack_2c0 = uStack_2f0 & 0xffffffff;
      local_2c8 = local_2f8;
      if ((local_2f8 != (char *)0x0) && (uStack_2c0 != 0)) {
        uStack_2f0 = 0x12;
        local_2f8 = "ClientModeCSNormal";
        lVar9 = FUN_1801d1f10(&local_2c8,&local_2f8);
        if (lVar9 != 0) {
          lpAddress = (undefined8 *)(lVar9 + 0xd8);
          lVar9 = FUN_18000f3a0();
          bVar1 = false;
          uVar11 = 0;
          if (lVar9 != 0) {
LAB_180021080:
            do {
              if (0x5f < uVar11) goto LAB_1800210c8;
              if (bVar1) goto LAB_1800210cc;
              cVar2 = FUN_180011220();
              if (cVar2 == -0x78) {
                cVar2 = FUN_180011220();
                if (cVar2 == -0x7d) {
                  iVar3 = FUN_180011200();
                  if (iVar3 == 0x4d8) {
                    bVar1 = true;
                    uVar11 = uVar11 + 1;
                    goto LAB_180021080;
                  }
                }
              }
              bVar1 = false;
              uVar11 = uVar11 + 1;
            } while( true );
          }
          goto LAB_18002112a;
        }
      }
    }
  }
  pcVar10 = "[error] ambience | ClientMode vtable not found";
  goto LAB_180021144;
LAB_1800210c8:
  if (bVar1) {
LAB_1800210cc:
    local_2d8[0] = 0;
    DAT_180cc3e08 = lVar9;
    BVar4 = VirtualProtect(lpAddress,8,4,local_2d8);
    if (BVar4 == 0) {
      DAT_180cc3e08 = 0;
    }
    else {
      *lpAddress = FUN_1800202f0;
      VirtualProtect(lpAddress,8,local_2d8[0],local_2d8);
      DAT_180cc3d78 = lpAddress;
    }
  }
LAB_18002112a:
  if (DAT_180cc3d78 != (undefined8 *)0x0) goto LAB_18002114c;
  pcVar10 = "[error] ambience | ClientMode view set-up slot not verified";
LAB_180021144:
  FUN_1802b2560(pcVar10);
  uVar12 = 0;
LAB_18002114c:
  FUN_180540170(local_138,0,0x100);
  local_358 = DAT_180cc3d78;
  snprintf(local_138,0x100,"install | pp blend %p | view set-up slot %p",DAT_180cc3e10);
  UVar8 = GetTickCount64();
  FUN_1802b2870("wl_world.log","[%llu] [ambience] %s\n",UVar8,local_138);
  return uVar12;
}



/* ===== 1800211d0 FUN_1800211d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800211d0(longlong param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar25;
  uint uVar26;
  undefined1 auVar24 [16];
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined1 local_d0 [8];
  float fStack_c8;
  float fStack_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_180919500 ^ (ulonglong)auStack_f8;
  lVar19 = (longlong)DAT_180ca3d60;
  if ((((((&DAT_1809628ac)[lVar19 * 0x90] != '\0') || ((&DAT_1809628e8)[lVar19 * 0x90] != '\0')) ||
       ((&DAT_1809628fc)[lVar19 * 0x90] != '\0')) || ((&DAT_180962880)[lVar19 * 0x90] != '\0')) &&
     (((param_1 != 0 && (param_2 - 1U < 0x100000)) &&
      ((cVar17 = FUN_1800203a0(), iVar16 = DAT_1809194c8, fVar15 = _UNK_1808ade4c,
       fVar14 = _UNK_1808ade48, fVar13 = _UNK_1808ade44, fVar12 = _DAT_1808ade40,
       fVar11 = _UNK_1808ad8dc, fVar10 = _UNK_1808ad8d8, fVar9 = _UNK_1808ad8d4,
       fVar8 = _DAT_1808ad8d0, uVar7 = _UNK_1808ad83c, uVar6 = _UNK_1808ad838,
       uVar5 = _UNK_1808ad834, uVar4 = _DAT_1808ad830, auVar3 = _DAT_1808ad7a0,
       fVar2 = DAT_1808abfe4, cVar17 != '\0' && (uVar22 = 0, 0 < param_2)))))) {
    do {
      lVar20 = FUN_18000f3a0(param_1 + 0x20 + uVar22 * 0x70);
      if ((lVar20 != 0) && (lVar20 = FUN_1800175e0(lVar20), lVar20 != 0)) {
        lVar1 = uVar22 * 0x70 + param_1;
        uVar18 = FUN_180011200(lVar1 + 0x50);
        _local_d0 = ZEXT816(0);
        auVar24._4_4_ = uVar18;
        auVar24._0_4_ = uVar18;
        auVar24._8_4_ = uVar18;
        auVar24._12_4_ = uVar18;
        if (iVar16 < 5) {
          uVar21 = 0;
          do {
            *(float *)(local_d0 + uVar21 * 4) =
                 (float)(uVar18 >> ((char)uVar21 * '\b' & 0x1fU) & 0xff) * fVar2;
            uVar23 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar23;
          } while ((int)uVar23 < 4);
        }
        else {
          auVar24 = vpsrlvd_avx2(auVar24,auVar3);
          uVar23 = auVar24._0_4_ & uVar4;
          uVar25 = auVar24._4_4_ & uVar5;
          uVar26 = auVar24._8_4_ & uVar6;
          uVar27 = auVar24._12_4_ & uVar7;
          local_d0._4_4_ = ((float)(uVar25 >> 8) * fVar13 + (float)(int)(uVar5 & uVar25)) * fVar9;
          local_d0._0_4_ = ((float)(uVar23 >> 8) * fVar12 + (float)(int)(uVar4 & uVar23)) * fVar8;
          fStack_c8 = ((float)(uVar26 >> 8) * fVar14 + (float)(int)(uVar6 & uVar26)) * fVar10;
          fStack_c4 = ((float)(uVar27 >> 8) * fVar15 + (float)(int)(uVar7 & uVar27)) * fVar11;
        }
        fVar29 = (float)local_d0._0_4_;
        fVar30 = (float)local_d0._4_4_;
        fVar31 = fStack_c8;
        fVar28 = fStack_c4;
        cVar17 = FUN_180017650(lVar20,&DAT_1806d3d5c);
        if (cVar17 == '\0') {
          cVar17 = FUN_180017650(lVar20,"clouds");
          if (cVar17 == '\0') {
            cVar17 = FUN_180017650(lVar20);
            if (cVar17 == '\0') goto LAB_18002153f;
            if ((&DAT_1809628e8)[lVar19 * 0x90] == '\0') {
              if ((&DAT_1809628fc)[lVar19 * 0x90] == '\0') {
                if ((&DAT_180962880)[lVar19 * 0x90] != '\0') {
                  fVar29 = *(float *)(&DAT_180962884 + lVar19 * 0x90);
                  fVar30 = *(float *)(&DAT_180962888 + lVar19 * 0x90);
                  fVar31 = *(float *)(&DAT_18096288c + lVar19 * 0x90);
                  fVar28 = *(float *)(&DAT_180962890 + lVar19 * 0x90);
                }
              }
              else {
                fVar28 = 0.0;
              }
            }
            else {
              fVar29 = *(float *)(&DAT_1809628ec + lVar19 * 0x90);
              fVar30 = *(float *)(&DAT_1809628f0 + lVar19 * 0x90);
              fVar31 = *(float *)(&DAT_1809628f4 + lVar19 * 0x90);
              fVar28 = *(float *)(&DAT_1809628f8 + lVar19 * 0x90);
            }
          }
          else if ((&DAT_1809628ac)[lVar19 * 0x90] != '\0') {
            fVar29 = *(float *)(&DAT_1809628c0 + lVar19 * 0x90);
            fVar30 = *(float *)(&DAT_1809628c4 + lVar19 * 0x90);
            fVar31 = *(float *)(&DAT_1809628c8 + lVar19 * 0x90);
            fVar28 = *(float *)(&DAT_1809628cc + lVar19 * 0x90);
          }
        }
        else if ((&DAT_1809628ac)[lVar19 * 0x90] != '\0') {
          fVar29 = *(float *)(&DAT_1809628d0 + lVar19 * 0x90);
          fVar30 = *(float *)(&DAT_1809628d4 + lVar19 * 0x90);
          fVar31 = *(float *)(&DAT_1809628d8 + lVar19 * 0x90);
          fVar28 = *(float *)(&DAT_1809628dc + lVar19 * 0x90);
        }
        local_d8 = (int)((float)(uVar18 >> 0x18) * fVar28) << 0x18 |
                   ((int)((float)(uVar18 >> 0x10 & 0xff) * fVar31) & 0xffU) << 0x10 |
                   ((int)((float)(uVar18 >> 8 & 0xff) * fVar30) & 0xffU) << 8 |
                   (int)((float)(uVar18 & 0xff) * fVar29) & 0xffU;
        FUN_180013280(lVar1 + 0x50);
      }
LAB_18002153f:
      uVar18 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar18;
    } while ((int)uVar18 < param_2);
  }
  return;
}



/* ===== 1800215d0 FUN_1800215d0 ===== */

void FUN_1800215d0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_res10 [2];
  
  lVar4 = (longlong)DAT_180ca3d60;
  if (((((&DAT_180962880)[lVar4 * 0x90] != '\0') && (*(int *)(&DAT_180962894 + lVar4 * 0x90) != -1))
      && (param_1 != 0)) && (DAT_180961ce0 != 0)) {
    lVar5 = FUN_18000f3a0((ulonglong)DAT_180961978 + param_1);
    lVar6 = FUN_18000f3a0(DAT_180961ce0);
    if ((lVar5 != 0) && (lVar6 != 0)) {
      uVar7 = FUN_18000f3a0((ulonglong)DAT_180961984 + lVar6);
      uVar8 = FUN_18000f3a0((ulonglong)DAT_180961988 + lVar6);
      if ((uVar7 != 0) && (uVar7 < uVar8)) {
        iVar1 = FUN_180011200((ulonglong)DAT_18096197c + lVar5);
        uVar2 = FUN_180011200((ulonglong)DAT_180961980 + lVar5);
        if (((iVar1 - 1U < 0x100000) && (uVar2 < 0x400001)) && (uVar10 = 0, 0 < iVar1)) {
          do {
            lVar5 = (uVar10 + (longlong)(int)uVar2 << ((byte)DAT_18096198c & 0x3f)) + uVar7;
            if (uVar8 < (ulonglong)((1L << ((byte)DAT_18096198c & 0x3f)) + lVar5)) {
              return;
            }
            uVar3 = FUN_180011200(lVar5);
            uVar9 = *(uint *)(&DAT_180962894 + lVar4 * 0x90);
            local_res10[0] =
                 (((uVar9 >> 8 & 0xff) * (uVar3 >> 8 & 0xff)) / 0xff & 0xff) << 8 |
                 ((uVar9 >> 0x18) * (uVar3 >> 0x18)) / 0xff << 0x18 |
                 (((uVar9 >> 0x10 & 0xff) * (uVar3 >> 0x10 & 0xff)) / 0xff & 0xff) << 0x10 |
                 ((uVar9 & 0xff) * (uVar3 & 0xff)) / 0xff & 0xff;
            FUN_180013280(lVar5,local_res10);
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
          } while ((int)uVar9 < iVar1);
        }
      }
    }
  }
  return;
}



/* ===== 1800217f0 FUN_1800217f0 ===== */

void FUN_1800217f0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  uint local_res18;
  undefined4 uStackX_1c;
  
  lVar14 = (longlong)DAT_180ca3d60 * 0x90;
  if (((&DAT_180962880)[lVar14] != '\0') && (param_1 != 0)) {
    lVar7 = FUN_18000f3a0();
    iVar2 = FUN_180011200(param_1 + 0xc);
    if ((lVar7 != 0) && (((param_2 < iVar2 && (iVar2 < 0x100001)) && (-1 < param_2)))) {
      lVar7 = (longlong)param_2 * 0x70 + lVar7;
      cVar1 = FUN_1800203a0(lVar7);
      if (cVar1 == '\0') {
        lVar8 = FUN_18000f3a0(lVar7 + 0x18);
        if (((lVar8 != 0) && (lVar9 = FUN_18000f3a0(lVar8 + 0xb8), lVar9 != 0)) &&
           (uVar3 = FUN_180011200(lVar8 + 0xc0), uVar3 < 0xfffffffe)) {
          plVar10 = (longlong *)FUN_1803a0940(&local_res18,uVar3);
          lVar8 = *plVar10;
          if (((lVar8 != 0) && (lVar9 = FUN_18000f3a0(lVar8 + 0x10), lVar9 != 0)) &&
             (uVar4 = FUN_180011200(lVar9 + 0x10), (uVar4 & 0x7fff) == (uVar3 & 0x7fff))) {
            cVar1 = FUN_180020620(lVar8);
            if (cVar1 != '\0') {
              return;
            }
            if ((((DAT_180cc3e70 != 0) && (DAT_180cc3e74 != 0)) &&
                (lVar9 = FUN_18000f3a0((ulonglong)DAT_180cc3e70 + lVar8), lVar9 != 0)) &&
               (uVar11 = FUN_180011220((ulonglong)DAT_180cc3e74 + 9 + lVar9), (uVar11 & 0x10) != 0))
            {
              return;
            }
            if (DAT_180cd1304 == '\0') {
              FUN_1803a0b60(&local_res18);
              lVar9 = CONCAT44(uStackX_1c,local_res18);
            }
            else {
              lVar9 = DAT_181108a00;
            }
            if (lVar9 != 0) {
              if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
                DAT_1811161d8 = '\x01';
                DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
              }
              uVar3 = DAT_1811161dc;
              if (((lVar9 != 0) && (DAT_1811161dc != 0)) &&
                 ((lVar12 = FUN_18000f3a0(lVar9 + 0x10), lVar12 - 0x10000U < 0x7ffffffeffff &&
                  (lVar13 = FUN_18000f3a0(lVar12), lVar13 == lVar9)))) {
                iVar5 = FUN_180011200((ulonglong)uVar3 + lVar12);
                if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
                  DAT_1811161d8 = '\x01';
                  DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
                }
                uVar3 = DAT_1811161dc;
                if ((((DAT_1811161dc != 0) &&
                     (lVar9 = FUN_18000f3a0(lVar8 + 0x10), lVar9 - 0x10000U < 0x7ffffffeffff)) &&
                    (lVar12 = FUN_18000f3a0(lVar9), lVar12 == lVar8)) &&
                   (iVar6 = FUN_180011200((ulonglong)uVar3 + lVar9), iVar6 != iVar5)) {
                  return;
                }
              }
            }
          }
        }
        uVar11 = 0;
        fVar15 = (float)*(int *)(&DAT_180962898 + lVar14) * DAT_1808ac000;
        if (0 < iVar2 - param_2) {
          do {
            uVar3 = FUN_180011200(lVar7 + 0x50 + uVar11 * 0x70);
            local_res18 = (((int)((float)(uVar3 >> 0x10 & 0xff) *
                                 *(float *)(&DAT_1809628a4 + lVar14)) & 0xffU |
                           (int)((float)(uVar3 >> 0x18) * fVar15) << 8) << 8 |
                          (int)((float)(uVar3 >> 8 & 0xff) * *(float *)(&DAT_1809628a0 + lVar14)) &
                          0xffU) << 8 |
                          (int)((float)(uVar3 & 0xff) * *(float *)(&DAT_18096289c + lVar14)) & 0xffU
            ;
            FUN_180013280(lVar7 + 0x50 + uVar11 * 0x70,&local_res18);
            uVar3 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar3;
          } while ((int)uVar3 < iVar2 - param_2);
        }
      }
    }
  }
  return;
}



/* ===== 180021bd0 FUN_180021bd0 ===== */

undefined8 FUN_180021bd0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_res8;
  
  if (param_1 != 0) {
    lVar6 = FUN_18000f3a0();
    iVar2 = FUN_180011200(param_1 + 0xc);
    if ((((lVar6 != 0) && (param_2 < iVar2)) && (iVar2 < 0x100001)) && (-1 < param_2)) {
      lVar6 = (longlong)param_2 * 0x70 + lVar6;
      cVar1 = FUN_1800203a0(lVar6);
      if (cVar1 == '\0') {
        lVar6 = FUN_18000f3a0(lVar6 + 0x18);
        if (((lVar6 != 0) && (lVar7 = FUN_18000f3a0(lVar6 + 0xb8), lVar7 != 0)) &&
           (uVar3 = FUN_180011200(lVar6 + 0xc0), uVar3 < 0xfffffffe)) {
          plVar8 = (longlong *)FUN_1803a0940(&local_res8,uVar3);
          lVar6 = *plVar8;
          if (((lVar6 != 0) && (lVar7 = FUN_18000f3a0(lVar6 + 0x10), lVar7 != 0)) &&
             (uVar4 = FUN_180011200(lVar7 + 0x10), (uVar4 & 0x7fff) == (uVar3 & 0x7fff))) {
            cVar1 = FUN_180020620(lVar6);
            if (cVar1 != '\0') {
              return 0;
            }
            if ((((DAT_180cc3e70 != 0) && (uVar9 = (ulonglong)DAT_180cc3e74, DAT_180cc3e74 != 0)) &&
                (lVar7 = FUN_18000f3a0(lVar6 + (ulonglong)DAT_180cc3e70), lVar7 != 0)) &&
               (uVar9 = FUN_180011220(uVar9 + 9 + lVar7), (uVar9 & 0x10) != 0)) {
              return 0;
            }
            if (DAT_180cd1304 == '\0') {
              FUN_1803a0b60(&local_res8);
              plVar8 = local_res8;
            }
            else {
              plVar8 = DAT_181108a00;
            }
            if (plVar8 != (longlong *)0x0) {
              if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
                DAT_1811161d8 = '\x01';
                DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
              }
              cVar1 = DAT_1811161d8;
              if (((plVar8 != (longlong *)0x0) &&
                  (uVar9 = (ulonglong)DAT_1811161dc, DAT_1811161dc != 0)) &&
                 ((lVar7 = FUN_18000f3a0(plVar8 + 2), lVar7 - 0x10000U < 0x7ffffffeffff &&
                  (plVar10 = (longlong *)FUN_18000f3a0(lVar7), plVar10 == plVar8)))) {
                iVar2 = FUN_180011200(lVar7 + uVar9);
                if ((cVar1 == '\0') && (DAT_1811089f0 != 0)) {
                  DAT_1811161d8 = '\x01';
                  DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
                  uVar9 = (ulonglong)DAT_1811161dc;
                  if (DAT_1811161dc == 0) {
                    return 1;
                  }
                }
                lVar7 = FUN_18000f3a0(lVar6 + 0x10);
                if (((lVar7 - 0x10000U < 0x7ffffffeffff) &&
                    (lVar11 = FUN_18000f3a0(lVar7), lVar11 == lVar6)) &&
                   (iVar5 = FUN_180011200(uVar9 + lVar7), iVar5 != iVar2)) {
                  return 0;
                }
              }
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



/* ===== 180021e60 FUN_180021e60 ===== */

longlong FUN_180021e60(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_res8;
  
  if (((param_1 != 0) && (lVar6 = FUN_18000f3a0(param_1 + 0xb8), lVar6 != 0)) &&
     (uVar2 = FUN_180011200(param_1 + 0xc0), uVar2 < 0xfffffffe)) {
    plVar7 = (longlong *)FUN_1803a0940(&local_res8,uVar2);
    lVar6 = *plVar7;
    if (((lVar6 != 0) && (lVar8 = FUN_18000f3a0(lVar6 + 0x10), lVar8 != 0)) &&
       (uVar3 = FUN_180011200(lVar8 + 0x10), (uVar3 & 0x7fff) == (uVar2 & 0x7fff))) {
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&local_res8);
        lVar8 = local_res8;
      }
      else {
        lVar8 = DAT_181108a00;
      }
      if (lVar8 != 0) {
        if ((DAT_1811161d8 == '\0') && (DAT_1811089f0 != 0)) {
          DAT_1811161d8 = '\x01';
          DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
        }
        cVar1 = DAT_1811161d8;
        if ((((lVar8 != 0) && (uVar11 = (ulonglong)DAT_1811161dc, DAT_1811161dc != 0)) &&
            (lVar9 = FUN_18000f3a0(lVar8 + 0x10), lVar9 - 0x10000U < 0x7ffffffeffff)) &&
           (lVar10 = FUN_18000f3a0(lVar9), lVar10 == lVar8)) {
          iVar4 = FUN_180011200(lVar9 + uVar11);
          if ((cVar1 == '\0') && (DAT_1811089f0 != 0)) {
            DAT_1811161d8 = '\x01';
            DAT_1811161dc = FUN_18038eaf0("CEntityIdentity","m_worldGroupId");
            uVar11 = (ulonglong)DAT_1811161dc;
            if (DAT_1811161dc == 0) goto LAB_18002201a;
          }
          lVar8 = FUN_18000f3a0(lVar6 + 0x10);
          if (((lVar8 - 0x10000U < 0x7ffffffeffff) && (lVar9 = FUN_18000f3a0(lVar8), lVar9 == lVar6)
              ) && (iVar5 = FUN_180011200(uVar11 + lVar8), iVar5 != iVar4)) {
            return 0;
          }
        }
      }
LAB_18002201a:
      cVar1 = FUN_180020860(lVar6);
      lVar8 = 0;
      if (cVar1 != '\0') {
        lVar8 = lVar6;
      }
      return lVar8;
    }
  }
  return 0;
}



/* ===== 180022050 FUN_180022050 ===== */

void FUN_180022050(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  uint local_res20 [2];
  
  lVar5 = (longlong)DAT_180ca3d60 * 0x90;
  if (((((&DAT_180962880)[lVar5] != '\0') && (param_1 != 0)) && (param_2 != 0)) &&
     (((DAT_180cc3e70 == 0 || (DAT_180cc3e74 == 0)) ||
      ((lVar3 = FUN_18000f3a0(param_1 + (ulonglong)DAT_180cc3e70), lVar3 == 0 ||
       (uVar4 = FUN_180011220((ulonglong)DAT_180cc3e74 + 9 + lVar3), (uVar4 & 0x10) == 0)))))) {
    lVar3 = FUN_18000f3a0(param_2);
    iVar1 = FUN_180011200(param_2 + 0xc);
    if (((lVar3 != 0) && ((int)param_3 < iVar1)) && ((iVar1 < 0x100001 && (-1 < (int)param_3)))) {
      fVar6 = (float)*(int *)(&DAT_180962898 + lVar5) * DAT_1808ac000;
      do {
        uVar2 = FUN_180011200(lVar3 + 0x50 + (ulonglong)param_3 * 0x70);
        local_res20[0] =
             (((int)((float)(uVar2 >> 0x10 & 0xff) * *(float *)(&DAT_1809628a4 + lVar5)) & 0xffU |
              (int)((float)(uVar2 >> 0x18) * fVar6) << 8) << 8 |
             (int)((float)(uVar2 >> 8 & 0xff) * *(float *)(&DAT_1809628a0 + lVar5)) & 0xffU) << 8 |
             (int)((float)(uVar2 & 0xff) * *(float *)(&DAT_18096289c + lVar5)) & 0xffU;
        FUN_180013280(lVar3 + 0x50 + (ulonglong)param_3 * 0x70,local_res20);
        param_3 = param_3 + 1;
      } while ((int)param_3 < iVar1);
    }
  }
  return;
}



/* ===== 180022220 FUN_180022220 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *** FUN_180022220(longlong *param_1,undefined8 ***param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  undefined2 local_68;
  undefined1 local_58;
  undefined8 ****local_48;
  ulonglong local_40;
  undefined8 ****local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_88;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 7;
  local_38 = (undefined8 ****)0x0;
  uVar7 = param_1[2];
  local_48 = (undefined8 ****)param_2;
  if (uVar7 == 0) {
    local_38 = (undefined8 ****)0x0;
    local_28 = uVar7;
  }
  else {
    ppppuVar4 = &local_38;
    if (uVar7 < 8) {
      uVar5 = uVar7;
      local_28 = uVar7;
      do {
        *(undefined2 *)ppppuVar4 = 0;
        ppppuVar4 = (undefined8 ****)((longlong)ppppuVar4 + 2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      *(undefined2 *)((longlong)&local_38 + uVar7 * 2) = 0;
    }
    else {
      local_68 = 0;
      FUN_180029680(ppppuVar4,uVar7,local_58,uVar7);
    }
  }
  ppppuVar4 = &local_38;
  if (7 < local_20) {
    ppppuVar4 = local_38;
  }
  if ((ulonglong)param_1[3] < 8) {
    lVar6 = (longlong)param_1 + param_1[2] * 2;
  }
  else {
    plVar1 = param_1 + 2;
    param_1 = (longlong *)*param_1;
    lVar6 = (longlong)param_1 + *plVar1 * 2;
  }
  local_68 = 0x2f;
  FUN_1804e9ed0(param_1,lVar6,ppppuVar4,0x5c);
  local_48 = &local_38;
  if (7 < local_20) {
    local_48 = local_38;
  }
  local_40 = local_28;
  FUN_180024c20(param_2,&local_48);
  if (7 < local_20) {
    uVar7 = local_20 * 2 + 2;
    ppppuVar4 = local_38;
    if (0xfff < uVar7) {
      ppppuVar4 = (undefined8 ****)local_38[-1];
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)ppppuVar4))) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (undefined8 ***)uVar3;
      }
      uVar7 = local_20 * 2 + 0x29;
    }
    thunk_FUN_1803d64e0(ppppuVar4,uVar7);
  }
  return param_2;
}



/* ===== 1800223a0 FUN_1800223a0 ===== */

void FUN_1800223a0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong *puVar12;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar11 = auStack_58;
  uVar4 = param_1[3];
  if (uVar4 < param_2) {
    uVar10 = param_1[2];
    uVar9 = 0x7ffffffffffffffe;
    if (0x7ffffffffffffffe - uVar10 < param_2 - uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    uVar7 = param_2 | 7;
    if ((uVar7 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
      uVar2 = (uVar4 >> 1) + uVar4;
      uVar9 = uVar7;
      if (uVar7 < uVar2) {
        uVar9 = uVar2;
      }
      uVar7 = uVar9 + 1;
      if (0x7fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_18000d840();
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
    }
    uVar7 = FUN_18000fb70(uVar7 * 2);
    param_1[2] = param_2;
    param_1[3] = uVar9;
    lVar3 = uVar10 * 2 + 2;
    if (uVar4 < 8) {
      FUN_180540530(uVar7,param_1,lVar3);
      puVar11 = auStack_58;
      *param_1 = uVar7;
    }
    else {
      uVar10 = *param_1;
      FUN_180540530(uVar7,uVar10,lVar3);
      puVar11 = auStack_58;
      if (0xfff < uVar4 * 2 + 2) {
        plVar1 = (longlong *)(uVar10 - 8);
        uVar10 = (uVar10 - *plVar1) - 8;
        if (uVar10 < 0x20) {
          thunk_FUN_1803d64e0(*plVar1,uVar4 * 2 + 0x29);
          puVar11 = auStack_58;
          *param_1 = uVar7;
          goto LAB_1800224be;
        }
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar11 = auStack_50;
      }
      *(undefined8 *)(puVar11 + -8) = 0x1800224a8;
      thunk_FUN_1803d64e0(uVar10);
      *param_1 = uVar7;
    }
  }
  else {
    param_1[2] = param_2;
  }
LAB_1800224be:
  puVar12 = param_1;
  if (7 < param_1[3]) {
    puVar12 = (ulonglong *)*param_1;
  }
  lVar3 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(puVar11 + -8) = 0x1800224e1;
  FUN_180540530(puVar12,uVar5,lVar3 * 2);
  puVar8 = (undefined2 *)(lVar3 * 2 + (longlong)puVar12);
  if (*(char *)(param_3 + 2) != '\0') {
    *puVar8 = 0x5c;
    puVar8 = puVar8 + 1;
  }
  lVar3 = param_3[4];
  uVar5 = param_3[3];
  *(undefined8 *)(puVar11 + -8) = 0x180022505;
  FUN_180540530(puVar8,uVar5,lVar3 * 2);
  param_1[2] = param_2;
  if (7 < param_1[3]) {
    param_1 = (ulonglong *)*param_1;
  }
  *(undefined2 *)((longlong)param_1 + param_2 * 2) = 0;
  return;
}



/* ===== 180022540 FUN_180022540 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180022540(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_180024d40(&local_30,*param_2,param_2[1]);
  uVar1 = FUN_180013f60(param_1,&local_30);
  FUN_1800289e0(&local_30);
  return uVar1;
}



/* ===== 1800225b0 FUN_1800225b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1800225b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined1 local_2b8 [32];
  undefined8 local_298;
  undefined1 local_290 [592];
  char local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_2e8;
  FUN_180024980(local_2b8);
  local_298 = 0xffffffffffffffff;
  iVar5 = FUN_180016110(local_2b8,param_3,&local_298,local_290);
  local_3c = 0;
  if (iVar5 == 0) {
    local_40 = '\x01';
  }
  else {
    local_40 = '\0';
    if (iVar5 != 0x12) {
      local_3c = iVar5;
    }
  }
  local_3f = local_2c8._1_2_;
  local_3d = local_2c8._3_1_;
  if (local_40 != '\0') {
    puVar6 = (undefined8 *)FUN_1804ecaa0(0x78);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    *puVar6 = std::_Ref_count_obj2<std::filesystem::_Recursive_dir_enum_impl>::vftable;
    local_2c8 = puVar6;
    FUN_180016430(puVar6 + 2,local_2b8);
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)(puVar6 + 0xe) = param_3;
    *(undefined1 *)((longlong)puVar6 + 0x74) = 1;
    *param_1 = puVar6 + 2;
    plVar3 = (longlong *)param_1[1];
    param_1[1] = puVar6;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
  }
  iVar5 = local_3c;
  FUN_1804e56f0(local_298);
  FUN_1800289e0(local_2b8);
  return iVar5;
}



/* ===== 180022730 FUN_180022730 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180022730(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar5 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar4 = (undefined8 *)(DAT_180ca0c10 & uVar5);
  puVar3 = *(undefined8 **)(DAT_180ca0bf8 + 8 + (longlong)puVar4 * 0x10);
  puVar6 = DAT_180ca0be8;
  if (puVar3 != DAT_180ca0be8) {
    puVar4 = *(undefined8 **)(DAT_180ca0bf8 + (longlong)puVar4 * 0x10);
    lVar1 = puVar3[2];
    puVar6 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar1) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == puVar4) break;
      puVar6 = (undefined8 *)puVar6[1];
      lVar1 = puVar6[2];
    }
  }
  if (DAT_180ca0bf0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x20,puVar4,DAT_180ca0bf8,param_4,&DAT_180ca0be8,0);
  puVar3[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar3 + 3) = *param_4;
  if (_DAT_180ca0be0 < (float)(DAT_180ca0bf0 + 1) / (float)DAT_180ca0c18) {
    FUN_180027b20(&DAT_180ca0be0);
    puVar4 = *(undefined8 **)(DAT_180ca0bf8 + 8 + (DAT_180ca0c10 & uVar5) * 0x10);
    puVar6 = DAT_180ca0be8;
    if (puVar4 != DAT_180ca0be8) {
      lVar1 = puVar4[2];
      puVar6 = puVar4;
      while (puVar3[2] != lVar1) {
        if (puVar6 == *(undefined8 **)(DAT_180ca0bf8 + (DAT_180ca0c10 & uVar5) * 0x10))
        goto LAB_18002292a;
        puVar6 = (undefined8 *)puVar6[1];
        lVar1 = puVar6[2];
      }
      puVar6 = (undefined8 *)*puVar6;
    }
  }
LAB_18002292a:
  puVar4 = (undefined8 *)puVar6[1];
  DAT_180ca0bf0 = DAT_180ca0bf0 + 1;
  *puVar3 = puVar6;
  puVar3[1] = puVar4;
  *puVar4 = puVar3;
  puVar6[1] = puVar3;
  lVar1 = DAT_180ca0bf8;
  uVar5 = DAT_180ca0c10 & uVar5;
  puVar2 = *(undefined8 **)(DAT_180ca0bf8 + uVar5 * 0x10);
  if (puVar2 == DAT_180ca0be8) {
    *(undefined8 **)(DAT_180ca0bf8 + uVar5 * 0x10) = puVar3;
  }
  else {
    if (puVar2 == puVar6) {
      *(undefined8 **)(DAT_180ca0bf8 + uVar5 * 0x10) = puVar3;
      goto LAB_180022989;
    }
    if (*(undefined8 **)(DAT_180ca0bf8 + 8 + uVar5 * 0x10) != puVar4) goto LAB_180022989;
  }
  *(undefined8 **)(lVar1 + 8 + uVar5 * 0x10) = puVar3;
LAB_180022989:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800229b0 FUN_1800229b0 ===== */

void FUN_1800229b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  pbVar9 = DAT_180cc4110;
  if (DAT_180cc4110 != DAT_180cc4118) {
    do {
      cVar6 = FUN_180019050(*(undefined8 *)pbVar9);
      lVar4 = DAT_180cc3fb8;
      plVar5 = DAT_180cc3fa8;
      if (cVar6 == '\0') {
        uVar8 = DAT_180cc3fd0 &
                (((((((((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)pbVar9[1]) * 0x100000001b3 ^ (ulonglong)pbVar9[2]) * 0x100000001b3
                    ^ (ulonglong)pbVar9[3]) * 0x100000001b3 ^ (ulonglong)pbVar9[4]) * 0x100000001b3
                  ^ (ulonglong)pbVar9[5]) * 0x100000001b3 ^ (ulonglong)pbVar9[6]) * 0x100000001b3 ^
                (ulonglong)pbVar9[7]) * 0x100000001b3;
        plVar1 = *(longlong **)(DAT_180cc3fb8 + 8 + uVar8 * 0x10);
        if (plVar1 == DAT_180cc3fa8) {
LAB_180022ab1:
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar2 = plVar1[2];
          plVar7 = plVar1;
          while (*(longlong *)pbVar9 != lVar2) {
            if (plVar7 == *(longlong **)(DAT_180cc3fb8 + uVar8 * 0x10)) goto LAB_180022ab1;
            plVar7 = (longlong *)plVar7[1];
            lVar2 = plVar7[2];
          }
        }
        if (plVar7 != (longlong *)0x0) {
          plVar3 = *(longlong **)(DAT_180cc3fb8 + uVar8 * 0x10);
          if (plVar1 == plVar7) {
            if (plVar3 == plVar7) {
              *(longlong **)(DAT_180cc3fb8 + uVar8 * 0x10) = DAT_180cc3fa8;
              *(longlong **)(lVar4 + 8 + uVar8 * 0x10) = plVar5;
            }
            else {
              *(longlong *)(DAT_180cc3fb8 + 8 + uVar8 * 0x10) = plVar7[1];
            }
          }
          else if (plVar3 == plVar7) {
            *(longlong *)(DAT_180cc3fb8 + uVar8 * 0x10) = *plVar7;
          }
          lVar4 = *plVar7;
          DAT_180cc3fb0 = DAT_180cc3fb0 + -1;
          *(longlong *)plVar7[1] = lVar4;
          *(longlong *)(lVar4 + 8) = plVar7[1];
          thunk_FUN_1803d64e0(plVar7,0x48);
        }
        FUN_180540530(pbVar9,pbVar9 + 8,(longlong)DAT_180cc4118 - (longlong)(pbVar9 + 8));
        DAT_180cc4118 = DAT_180cc4118 + -8;
      }
      else {
        pbVar9 = pbVar9 + 8;
      }
    } while (pbVar9 != DAT_180cc4118);
  }
  return;
}



/* ===== 180022b60 FUN_180022b60 ===== */

void FUN_180022b60(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  pbVar9 = DAT_180cc4080;
  if (DAT_180cc4080 != DAT_180cc4088) {
    do {
      cVar6 = FUN_180019050(*(undefined8 *)pbVar9);
      lVar4 = DAT_180cc3f18;
      plVar5 = DAT_180cc3f08;
      if (cVar6 == '\0') {
        uVar8 = DAT_180cc3f30 &
                (((((((((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)pbVar9[1]) * 0x100000001b3 ^ (ulonglong)pbVar9[2]) * 0x100000001b3
                    ^ (ulonglong)pbVar9[3]) * 0x100000001b3 ^ (ulonglong)pbVar9[4]) * 0x100000001b3
                  ^ (ulonglong)pbVar9[5]) * 0x100000001b3 ^ (ulonglong)pbVar9[6]) * 0x100000001b3 ^
                (ulonglong)pbVar9[7]) * 0x100000001b3;
        plVar1 = *(longlong **)(DAT_180cc3f18 + 8 + uVar8 * 0x10);
        if (plVar1 == DAT_180cc3f08) {
LAB_180022c61:
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar2 = plVar1[2];
          plVar7 = plVar1;
          while (*(longlong *)pbVar9 != lVar2) {
            if (plVar7 == *(longlong **)(DAT_180cc3f18 + uVar8 * 0x10)) goto LAB_180022c61;
            plVar7 = (longlong *)plVar7[1];
            lVar2 = plVar7[2];
          }
        }
        if (plVar7 != (longlong *)0x0) {
          plVar3 = *(longlong **)(DAT_180cc3f18 + uVar8 * 0x10);
          if (plVar1 == plVar7) {
            if (plVar3 == plVar7) {
              *(longlong **)(DAT_180cc3f18 + uVar8 * 0x10) = DAT_180cc3f08;
              *(longlong **)(lVar4 + 8 + uVar8 * 0x10) = plVar5;
            }
            else {
              *(longlong *)(DAT_180cc3f18 + 8 + uVar8 * 0x10) = plVar7[1];
            }
          }
          else if (plVar3 == plVar7) {
            *(longlong *)(DAT_180cc3f18 + uVar8 * 0x10) = *plVar7;
          }
          lVar4 = *plVar7;
          DAT_180cc3f10 = DAT_180cc3f10 + -1;
          *(longlong *)plVar7[1] = lVar4;
          *(longlong *)(lVar4 + 8) = plVar7[1];
          thunk_FUN_1803d64e0(plVar7,0x20);
        }
        FUN_180540530(pbVar9,pbVar9 + 8,(longlong)DAT_180cc4088 - (longlong)(pbVar9 + 8));
        DAT_180cc4088 = DAT_180cc4088 + -8;
      }
      else {
        pbVar9 = pbVar9 + 8;
      }
    } while (pbVar9 != DAT_180cc4088);
  }
  return;
}



/* ===== 180022d10 FUN_180022d10 ===== */

void FUN_180022d10(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  pbVar9 = DAT_180cc3f80;
  if (DAT_180cc3f80 != DAT_180cc3f88) {
    do {
      cVar6 = FUN_180019050(*(undefined8 *)pbVar9);
      lVar4 = DAT_180cc40b8;
      plVar5 = DAT_180cc40a8;
      if (cVar6 == '\0') {
        uVar8 = DAT_180cc40d0 &
                (((((((((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)pbVar9[1]) * 0x100000001b3 ^ (ulonglong)pbVar9[2]) * 0x100000001b3
                    ^ (ulonglong)pbVar9[3]) * 0x100000001b3 ^ (ulonglong)pbVar9[4]) * 0x100000001b3
                  ^ (ulonglong)pbVar9[5]) * 0x100000001b3 ^ (ulonglong)pbVar9[6]) * 0x100000001b3 ^
                (ulonglong)pbVar9[7]) * 0x100000001b3;
        plVar1 = *(longlong **)(DAT_180cc40b8 + 8 + uVar8 * 0x10);
        if (plVar1 == DAT_180cc40a8) {
LAB_180022e11:
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar2 = plVar1[2];
          plVar7 = plVar1;
          while (*(longlong *)pbVar9 != lVar2) {
            if (plVar7 == *(longlong **)(DAT_180cc40b8 + uVar8 * 0x10)) goto LAB_180022e11;
            plVar7 = (longlong *)plVar7[1];
            lVar2 = plVar7[2];
          }
        }
        if (plVar7 != (longlong *)0x0) {
          plVar3 = *(longlong **)(DAT_180cc40b8 + uVar8 * 0x10);
          if (plVar1 == plVar7) {
            if (plVar3 == plVar7) {
              *(longlong **)(DAT_180cc40b8 + uVar8 * 0x10) = DAT_180cc40a8;
              *(longlong **)(lVar4 + 8 + uVar8 * 0x10) = plVar5;
            }
            else {
              *(longlong *)(DAT_180cc40b8 + 8 + uVar8 * 0x10) = plVar7[1];
            }
          }
          else if (plVar3 == plVar7) {
            *(longlong *)(DAT_180cc40b8 + uVar8 * 0x10) = *plVar7;
          }
          lVar4 = *plVar7;
          DAT_180cc40b0 = DAT_180cc40b0 + -1;
          *(longlong *)plVar7[1] = lVar4;
          *(longlong *)(lVar4 + 8) = plVar7[1];
          thunk_FUN_1803d64e0(plVar7,0x20);
        }
        FUN_180540530(pbVar9,pbVar9 + 8,(longlong)DAT_180cc3f88 - (longlong)(pbVar9 + 8));
        DAT_180cc3f88 = DAT_180cc3f88 + -8;
      }
      else {
        pbVar9 = pbVar9 + 8;
      }
    } while (pbVar9 != DAT_180cc3f88);
  }
  return;
}



/* ===== 180022ec0 FUN_180022ec0 ===== */

void FUN_180022ec0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  pbVar9 = DAT_180cc40e0;
  if (DAT_180cc40e0 != DAT_180cc40e8) {
    do {
      cVar6 = FUN_180019050(*(undefined8 *)pbVar9);
      lVar4 = DAT_180cc3ed8;
      plVar5 = DAT_180cc3ec8;
      if (cVar6 == '\0') {
        uVar8 = DAT_180cc3ef0 &
                (((((((((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)pbVar9[1]) * 0x100000001b3 ^ (ulonglong)pbVar9[2]) * 0x100000001b3
                    ^ (ulonglong)pbVar9[3]) * 0x100000001b3 ^ (ulonglong)pbVar9[4]) * 0x100000001b3
                  ^ (ulonglong)pbVar9[5]) * 0x100000001b3 ^ (ulonglong)pbVar9[6]) * 0x100000001b3 ^
                (ulonglong)pbVar9[7]) * 0x100000001b3;
        plVar1 = *(longlong **)(DAT_180cc3ed8 + 8 + uVar8 * 0x10);
        if (plVar1 == DAT_180cc3ec8) {
LAB_180022fc1:
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar2 = plVar1[2];
          plVar7 = plVar1;
          while (*(longlong *)pbVar9 != lVar2) {
            if (plVar7 == *(longlong **)(DAT_180cc3ed8 + uVar8 * 0x10)) goto LAB_180022fc1;
            plVar7 = (longlong *)plVar7[1];
            lVar2 = plVar7[2];
          }
        }
        if (plVar7 != (longlong *)0x0) {
          plVar3 = *(longlong **)(DAT_180cc3ed8 + uVar8 * 0x10);
          if (plVar1 == plVar7) {
            if (plVar3 == plVar7) {
              *(longlong **)(DAT_180cc3ed8 + uVar8 * 0x10) = DAT_180cc3ec8;
              *(longlong **)(lVar4 + 8 + uVar8 * 0x10) = plVar5;
            }
            else {
              *(longlong *)(DAT_180cc3ed8 + 8 + uVar8 * 0x10) = plVar7[1];
            }
          }
          else if (plVar3 == plVar7) {
            *(longlong *)(DAT_180cc3ed8 + uVar8 * 0x10) = *plVar7;
          }
          lVar4 = *plVar7;
          DAT_180cc3ed0 = DAT_180cc3ed0 + -1;
          *(longlong *)plVar7[1] = lVar4;
          *(longlong *)(lVar4 + 8) = plVar7[1];
          thunk_FUN_1803d64e0(plVar7,0x30);
        }
        FUN_180540530(pbVar9,pbVar9 + 8,(longlong)DAT_180cc40e8 - (longlong)(pbVar9 + 8));
        DAT_180cc40e8 = DAT_180cc40e8 + -8;
      }
      else {
        pbVar9 = pbVar9 + 8;
      }
    } while (pbVar9 != DAT_180cc40e8);
  }
  return;
}



/* ===== 180023070 FUN_180023070 ===== */

void FUN_180023070(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  pbVar9 = DAT_180cc4020;
  if (DAT_180cc4020 != DAT_180cc4028) {
    do {
      cVar6 = FUN_180019050(*(undefined8 *)pbVar9);
      lVar4 = DAT_180cc3f58;
      plVar5 = DAT_180cc3f48;
      if (cVar6 == '\0') {
        uVar8 = DAT_180cc3f70 &
                (((((((((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)pbVar9[1]) * 0x100000001b3 ^ (ulonglong)pbVar9[2]) * 0x100000001b3
                    ^ (ulonglong)pbVar9[3]) * 0x100000001b3 ^ (ulonglong)pbVar9[4]) * 0x100000001b3
                  ^ (ulonglong)pbVar9[5]) * 0x100000001b3 ^ (ulonglong)pbVar9[6]) * 0x100000001b3 ^
                (ulonglong)pbVar9[7]) * 0x100000001b3;
        plVar1 = *(longlong **)(DAT_180cc3f58 + 8 + uVar8 * 0x10);
        if (plVar1 == DAT_180cc3f48) {
LAB_180023171:
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar2 = plVar1[2];
          plVar7 = plVar1;
          while (*(longlong *)pbVar9 != lVar2) {
            if (plVar7 == *(longlong **)(DAT_180cc3f58 + uVar8 * 0x10)) goto LAB_180023171;
            plVar7 = (longlong *)plVar7[1];
            lVar2 = plVar7[2];
          }
        }
        if (plVar7 != (longlong *)0x0) {
          plVar3 = *(longlong **)(DAT_180cc3f58 + uVar8 * 0x10);
          if (plVar1 == plVar7) {
            if (plVar3 == plVar7) {
              *(longlong **)(DAT_180cc3f58 + uVar8 * 0x10) = DAT_180cc3f48;
              *(longlong **)(lVar4 + 8 + uVar8 * 0x10) = plVar5;
            }
            else {
              *(longlong *)(DAT_180cc3f58 + 8 + uVar8 * 0x10) = plVar7[1];
            }
          }
          else if (plVar3 == plVar7) {
            *(longlong *)(DAT_180cc3f58 + uVar8 * 0x10) = *plVar7;
          }
          lVar4 = *plVar7;
          DAT_180cc3f50 = DAT_180cc3f50 + -1;
          *(longlong *)plVar7[1] = lVar4;
          *(longlong *)(lVar4 + 8) = plVar7[1];
          thunk_FUN_1803d64e0(plVar7,0x28);
        }
        FUN_180540530(pbVar9,pbVar9 + 8,(longlong)DAT_180cc4028 - (longlong)(pbVar9 + 8));
        DAT_180cc4028 = DAT_180cc4028 + -8;
      }
      else {
        pbVar9 = pbVar9 + 8;
      }
    } while (pbVar9 != DAT_180cc4028);
  }
  return;
}



/* ===== 180023220 FUN_180023220 ===== */

void FUN_180023220(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  
  pbVar9 = DAT_180cc4068;
  if (DAT_180cc4068 != DAT_180cc4070) {
    do {
      cVar6 = FUN_180019050(*(undefined8 *)pbVar9);
      lVar4 = DAT_180cc3ff8;
      plVar5 = DAT_180cc3fe8;
      if (cVar6 == '\0') {
        uVar8 = DAT_180cc4010 &
                (((((((((ulonglong)*pbVar9 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)pbVar9[1]) * 0x100000001b3 ^ (ulonglong)pbVar9[2]) * 0x100000001b3
                    ^ (ulonglong)pbVar9[3]) * 0x100000001b3 ^ (ulonglong)pbVar9[4]) * 0x100000001b3
                  ^ (ulonglong)pbVar9[5]) * 0x100000001b3 ^ (ulonglong)pbVar9[6]) * 0x100000001b3 ^
                (ulonglong)pbVar9[7]) * 0x100000001b3;
        plVar1 = *(longlong **)(DAT_180cc3ff8 + 8 + uVar8 * 0x10);
        if (plVar1 == DAT_180cc3fe8) {
LAB_180023321:
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar2 = plVar1[2];
          plVar7 = plVar1;
          while (*(longlong *)pbVar9 != lVar2) {
            if (plVar7 == *(longlong **)(DAT_180cc3ff8 + uVar8 * 0x10)) goto LAB_180023321;
            plVar7 = (longlong *)plVar7[1];
            lVar2 = plVar7[2];
          }
        }
        if (plVar7 != (longlong *)0x0) {
          plVar3 = *(longlong **)(DAT_180cc3ff8 + uVar8 * 0x10);
          if (plVar1 == plVar7) {
            if (plVar3 == plVar7) {
              *(longlong **)(DAT_180cc3ff8 + uVar8 * 0x10) = DAT_180cc3fe8;
              *(longlong **)(lVar4 + 8 + uVar8 * 0x10) = plVar5;
            }
            else {
              *(longlong *)(DAT_180cc3ff8 + 8 + uVar8 * 0x10) = plVar7[1];
            }
          }
          else if (plVar3 == plVar7) {
            *(longlong *)(DAT_180cc3ff8 + uVar8 * 0x10) = *plVar7;
          }
          lVar4 = *plVar7;
          DAT_180cc3ff0 = DAT_180cc3ff0 + -1;
          *(longlong *)plVar7[1] = lVar4;
          *(longlong *)(lVar4 + 8) = plVar7[1];
          thunk_FUN_1803d64e0(plVar7,0x20);
        }
        FUN_180540530(pbVar9,pbVar9 + 8,(longlong)DAT_180cc4070 - (longlong)(pbVar9 + 8));
        DAT_180cc4070 = DAT_180cc4070 + -8;
      }
      else {
        pbVar9 = pbVar9 + 8;
      }
    } while (pbVar9 != DAT_180cc4070);
  }
  return;
}



/* ===== 1800233d0 FUN_1800233d0 ===== */

ulonglong FUN_1800233d0(undefined1 *param_1,undefined1 *param_2)

{
  if (param_1 + -0x10000 < (undefined1 *)0x7ffffffeffff) {
    *param_1 = *param_2;
    return 1;
  }
  return (ulonglong)(param_1 + -0x10000) & 0xffffffffffffff00;
}



/* ===== 180023400 FUN_180023400 ===== */

bool FUN_180023400(undefined8 *param_1,char *param_2)

{
  size_t _Size;
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  _Size = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (_Size != sVar2) {
    return false;
  }
  if (_Size == 0) {
    return true;
  }
  iVar1 = memcmp(param_1,param_2,_Size);
  return iVar1 == 0;
}



/* ===== 180023470 FUN_180023470 ===== */

/* WARNING: Removing unreachable block (ram,0x0001800234c1) */

ulonglong FUN_180023470(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong _Size;
  
  uVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar1;
  if (uVar3 < uVar1) {
    _Size = uVar3;
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  if (iVar2 == 0) {
    if (uVar1 < uVar3) {
      return 0xff;
    }
    if (uVar1 <= uVar3) {
      return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
    }
    iVar2 = 1;
  }
  uVar3 = 0xff;
  if (-1 < iVar2) {
    uVar3 = 1;
  }
  return uVar3;
}



/* ===== 180023500 FUN_180023500 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_180023500(undefined8 param_1,longlong *param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
  size_t _Size;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *local_58;
  longlong local_50;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar5 = 0;
  if (param_3[2] != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)(uVar5 + (longlong)puVar4)) * 0x100000001b3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1800268a0(&DAT_180ca0ae0,&local_58,param_3,uVar7);
  if (local_50 != 0) {
    *param_2 = local_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_180ca0af0 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_1804ecaa0(0x38);
  FUN_180024b50(puVar4 + 2,param_3);
  puVar4[6] = (longlong)*param_4;
  if (_DAT_180ca0ae0 < (float)(DAT_180ca0af0 + 1) / (float)DAT_180ca0b18) {
    FUN_1800280b0(&DAT_180ca0ae0);
    puVar6 = *(undefined8 **)(DAT_180ca0af8 + 8 + (DAT_180ca0b10 & uVar7) * 0x10);
    local_58 = DAT_180ca0ae8;
    if (puVar6 != DAT_180ca0ae8) {
      puVar1 = *(undefined8 **)(DAT_180ca0af8 + (DAT_180ca0b10 & uVar7) * 0x10);
      uVar5 = puVar4[5];
      _Size = puVar4[4];
      local_58 = puVar6;
      while( true ) {
        puVar6 = local_58 + 2;
        if (0xf < (ulonglong)local_58[5]) {
          puVar6 = (undefined8 *)*puVar6;
        }
        if (uVar5 < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == local_58[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar6,_Size), iVar3 == 0)))) break;
        if (local_58 == puVar1) goto LAB_1800236ef;
        local_58 = (undefined8 *)local_58[1];
      }
      local_58 = (undefined8 *)*local_58;
    }
  }
LAB_1800236ef:
  puVar6 = (undefined8 *)local_58[1];
  DAT_180ca0af0 = DAT_180ca0af0 + 1;
  *puVar4 = local_58;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  local_58[1] = puVar4;
  lVar2 = DAT_180ca0af8;
  uVar7 = DAT_180ca0b10 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180ca0af8 + uVar7 * 0x10);
  if (puVar1 == DAT_180ca0ae8) {
    *(undefined8 **)(DAT_180ca0af8 + uVar7 * 0x10) = puVar4;
  }
  else {
    if (puVar1 == local_58) {
      *(undefined8 **)(DAT_180ca0af8 + uVar7 * 0x10) = puVar4;
      goto LAB_180023749;
    }
    if (*(undefined8 **)(DAT_180ca0af8 + 8 + uVar7 * 0x10) != puVar6) goto LAB_180023749;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar4;
LAB_180023749:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 180023780 FUN_180023780 ===== */

undefined8 * FUN_180023780(float *param_1,undefined8 *param_2,byte *param_3,undefined1 *param_4)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(uVar7 & *(ulonglong *)(param_1 + 0xc));
  lVar2 = *(longlong *)(param_1 + 6);
  puVar5 = *(undefined8 **)(lVar2 + 8 + (longlong)puVar6 * 0x10);
  pfVar1 = param_1 + 2;
  puVar8 = *(undefined8 **)pfVar1;
  if (puVar5 != puVar8) {
    puVar6 = *(undefined8 **)(lVar2 + (longlong)puVar6 * 0x10);
    lVar3 = puVar5[2];
    puVar8 = puVar5;
    while( true ) {
      if (*(longlong *)param_3 == lVar3) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar3 = puVar8[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_1804ecaa0(0x20,puVar6,lVar2,param_4,pfVar1,0);
  puVar5[2] = *(undefined8 *)param_3;
  *(undefined1 *)(puVar5 + 3) = *param_4;
  fVar9 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar9 && fVar9 != *param_1) {
    FUN_180027b20(param_1);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)pfVar1;
    if (puVar6 != puVar8) {
      lVar2 = puVar6[2];
      puVar8 = puVar6;
      while (puVar5[2] != lVar2) {
        if (puVar8 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar7 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_180023958;
        puVar8 = (undefined8 *)puVar8[1];
        lVar2 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_180023958:
  puVar6 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar8;
  puVar5[1] = puVar6;
  *puVar6 = puVar5;
  puVar8[1] = puVar5;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar7 = *(ulonglong *)(param_1 + 0xc) & uVar7;
  puVar4 = *(undefined8 **)(lVar2 + uVar7 * 0x10);
  if (puVar4 == *(undefined8 **)pfVar1) {
    *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar5;
  }
  else {
    if (puVar4 == puVar8) {
      *(undefined8 **)(lVar2 + uVar7 * 0x10) = puVar5;
      goto LAB_1800239a8;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1800239a8;
  }
  *(undefined8 **)(lVar2 + 8 + uVar7 * 0x10) = puVar5;
LAB_1800239a8:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800239d0 FUN_1800239d0 ===== */

ulonglong FUN_1800239d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 + -0x2000 < (undefined8 *)0x7ffffffeffff) {
    uVar1 = *param_2;
    *param_1 = uVar1;
    return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  }
  return (ulonglong)(param_1 + -0x2000) & 0xffffffffffffff00;
}



