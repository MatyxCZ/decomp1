/* ===== 1800d3d50 FUN_1800d3d50 ===== */

void FUN_1800d3d50(longlong param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180515f70();
  }
  return;
}



/* ===== 1800d3d70 FUN_1800d3d70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d3d70(void)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  double dVar5;
  HKEY pHVar6;
  double dVar7;
  HKEY pHVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  LSTATUS LVar11;
  BOOL BVar12;
  int iVar13;
  HMODULE pHVar14;
  FARPROC pFVar15;
  FARPROC pFVar16;
  FARPROC pFVar17;
  FARPROC pFVar18;
  ulonglong uVar19;
  INT_PTR IVar20;
  HKEY *ppHVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 uVar25;
  longlong *plVar26;
  HKEY *ppHVar27;
  undefined8 *****pppppuVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  uint uVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  char cVar37;
  DWORD DVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined8 uStackY_2c0;
  undefined1 auStackY_2b8 [8];
  undefined1 auStackY_2b0 [24];
  HKEY local_288;
  HKEY local_280;
  HKEY local_278;
  DWORD local_270 [2];
  HKEY local_268;
  FARPROC local_260;
  longlong local_258 [2];
  char local_248;
  undefined8 local_244;
  undefined8 local_23c;
  ulonglong local_230;
  ulonglong local_228;
  longlong local_220 [3];
  float local_208;
  longlong *local_1f8;
  undefined8 local_1f0;
  uint local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  FARPROC local_1b0;
  FARPROC local_1a8;
  FARPROC local_1a0;
  undefined8 *local_198;
  undefined8 *puStack_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *puStack_178;
  undefined8 *local_170;
  _SYSTEM_INFO local_168;
  undefined8 *****local_138;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong local_120;
  _MEMORYSTATUSEX local_118;
  ulonglong local_d8;
  
  local_d8 = DAT_180919500 ^ (ulonglong)auStackY_2b8;
  local_258[0] = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  pHVar14 = LoadLibraryW(L"pdh.dll");
  if (pHVar14 == (HMODULE)0x0) {
    local_1a8 = (FARPROC)0x0;
    local_260 = (FARPROC)0x0;
    local_1a0 = (FARPROC)0x0;
  }
  else {
    pFVar15 = GetProcAddress(pHVar14,"PdhOpenQueryW");
    pFVar16 = GetProcAddress(pHVar14,"PdhAddEnglishCounterW");
    pFVar17 = GetProcAddress(pHVar14,"PdhCollectQueryData");
    local_1a8 = pFVar17;
    pFVar18 = GetProcAddress(pHVar14,"PdhGetFormattedCounterArrayW");
    local_260 = pFVar18;
    local_1a0 = GetProcAddress(pHVar14,"PdhCloseQuery");
    if (((((pFVar15 != (FARPROC)0x0) && (pFVar16 != (FARPROC)0x0)) && (pFVar17 != (FARPROC)0x0)) &&
        ((pFVar18 != (FARPROC)0x0 && (local_1a0 != (FARPROC)0x0)))) &&
       (IVar20 = (*pFVar15)(0,0), (int)IVar20 == 0)) {
      IVar20 = (*pFVar16)(local_258[0],L"\\Processor Information(*)\\% Processor Performance",0,
                          &local_1e0);
      if ((int)IVar20 != 0) {
        local_1e0 = 0;
      }
      IVar20 = (*pFVar16)(local_258[0],L"\\GPU Engine(*)\\Utilization Percentage",0,&local_1d8);
      if ((int)IVar20 != 0) {
        local_1d8 = 0;
      }
      (*pFVar17)(local_258[0]);
      goto LAB_1800d3e0a;
    }
  }
  local_258[0] = 0;
LAB_1800d3e0a:
  puVar32 = auStackY_2b8;
  pHVar14 = GetModuleHandleW(L"ntdll.dll");
  if (pHVar14 == (HMODULE)0x0) {
    local_1b0 = (FARPROC)0x0;
  }
  else {
    local_1b0 = GetProcAddress(pHVar14,"NtQuerySystemInformation");
  }
  local_168.u.dwOemId = 0;
  local_168.dwPageSize = 0;
  local_168.lpMinimumApplicationAddress = (LPVOID)0x0;
  local_168.lpMaximumApplicationAddress = (LPVOID)0x0;
  local_168.dwActiveProcessorMask = 0;
  local_168.dwNumberOfProcessors = 0;
  local_168.dwProcessorType = 0;
  local_168.dwAllocationGranularity = 0;
  local_168.wProcessorLevel = 0;
  local_168.wProcessorRevision = 0;
  GetSystemInfo(&local_168);
  uVar19 = (ulonglong)local_168.dwNumberOfProcessors;
  if (local_168.dwNumberOfProcessors == 0) {
    uVar19 = 1;
  }
  iVar13 = (int)uVar19;
  local_198 = (undefined8 *)0x0;
  puStack_190 = (undefined8 *)0x0;
  local_188 = (undefined8 *)0x0;
  if (iVar13 != 0) {
    local_198 = (undefined8 *)FUN_18000fb70(uVar19 * 0x30);
    local_188 = local_198 + uVar19 * 6;
    puStack_190 = local_198;
    uVar30 = uVar19;
    if (iVar13 != 0) {
      do {
        *puStack_190 = 0;
        puStack_190[1] = 0;
        puStack_190[2] = 0;
        puStack_190[3] = 0;
        puStack_190[4] = 0;
        puStack_190[5] = 0;
        puStack_190 = puStack_190 + 6;
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
  }
  puVar36 = local_198;
  local_180 = (undefined8 *)0x0;
  puStack_178 = (undefined8 *)0x0;
  local_170 = (undefined8 *)0x0;
  if (iVar13 != 0) {
    local_180 = (undefined8 *)FUN_18000fb70(uVar19 * 0x30);
    local_170 = local_180 + uVar19 * 6;
    local_1d0 = local_180;
    if (iVar13 != 0) {
      do {
        *local_1d0 = 0;
        local_1d0[1] = 0;
        local_1d0[2] = 0;
        local_1d0[3] = 0;
        local_1d0[4] = 0;
        local_1d0[5] = 0;
        local_1d0 = local_1d0 + 6;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    puStack_178 = local_1d0;
  }
  puVar35 = puStack_178;
  puVar9 = local_180;
  local_280 = (HKEY)0x0;
  local_1d0 = puStack_178;
  LVar11 = RegOpenKeyExW((HKEY)0xffffffff80000002,
                         L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",0,0x20019,&local_280)
  ;
  if (LVar11 == 0) {
    local_278 = (HKEY)((ulonglong)local_278 & 0xffffffff00000000);
    local_270[0] = 4;
    LVar11 = RegQueryValueExW(local_280,L"~MHz",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)&local_278,
                              local_270);
    RegCloseKey(local_280);
    DVar38 = 0;
    if (LVar11 == 0) {
      DVar38 = (DWORD)local_278;
    }
  }
  else {
    DVar38 = 0;
  }
  dVar7 = DAT_1808ac6a8;
  pHVar6 = DAT_1808ac500;
  dVar5 = DAT_1808ac4a8;
  local_270[0] = DVar38;
  puVar33 = auStackY_2b8;
  if (DAT_180ca39d7 == '\0') {
LAB_1800d4cab:
    if (*(longlong *)(puVar33 + 0x60) != 0) {
      *(undefined8 *)(puVar33 + -8) = 0x1800d4cb8;
      (*local_1a0)();
    }
    *(undefined8 *)(puVar33 + -8) = 0x1800d4cc2;
    FUN_1800d5380(&local_180);
    *(undefined8 *)(puVar33 + -8) = 0x1800d4ccc;
    FUN_1800d5380(&local_198);
    *(undefined8 *)(puVar33 + -8) = 0x1800d4cdb;
    return;
  }
  cVar37 = '\0';
  local_1e8 = iVar13 * 0x30;
  uVar58 = (undefined4)DAT_1808acdb8;
  uVar59 = (undefined4)((ulonglong)DAT_1808acdb8 >> 0x20);
  do {
    uVar19 = (ulonglong)local_1e8;
    local_248 = '\0';
    local_244 = 0;
    local_23c = 0;
    local_230 = 0;
    local_228 = 0;
    local_220[0] = 0;
    local_220[1] = 0;
    local_220[2] = 0;
    local_208 = 0.0;
    local_118.ullTotalPhys = 0;
    local_118.ullAvailPhys = 0;
    local_118.ullTotalPageFile = 0;
    local_118.ullAvailPageFile = 0;
    local_118.ullTotalVirtual = 0;
    local_118.ullAvailVirtual = 0;
    local_118.ullAvailExtendedVirtual = 0;
    local_118.dwLength = 0x40;
    local_118.dwMemoryLoad = 0;
    BVar12 = GlobalMemoryStatusEx(&local_118);
    if (BVar12 != 0) {
      local_230 = local_118.ullTotalPhys >> 0x14;
      local_228 = local_118.ullAvailPhys >> 0x14;
    }
    if (local_1b0 != (FARPROC)0x0) {
      local_278 = (HKEY)((ulonglong)local_278 & 0xffffffff00000000);
      IVar20 = (*local_1b0)(8,puVar9,uVar19,&local_278);
      if (-1 < (int)IVar20) {
        if (0x2f < (DWORD)local_278) {
          uVar30 = ((longlong)puVar35 - (longlong)puVar9 >> 4) * -0x5555555555555555;
          uVar19 = ((ulonglong)local_278 & 0xffffffff) / 0x30;
          if (uVar30 < uVar19) {
            uVar19 = uVar30;
          }
          if (cVar37 != '\0') {
            dVar45 = 0.0;
            dVar50 = 0.0;
            FUN_1800d50c0(local_220);
            uVar31 = 0;
            dVar41 = 0.0;
            dVar46 = 0.0;
            lVar29 = local_244;
            if (3 < uVar19) {
              do {
                dVar41 = (double)(longlong)
                                 (((puVar9[uVar31 * 6 + 2] - puVar36[uVar31 * 6 + 2]) -
                                  puVar36[uVar31 * 6 + 1]) + puVar9[uVar31 * 6 + 1]);
                dVar46 = dVar41 - (double)(longlong)(puVar9[uVar31 * 6] - puVar36[uVar31 * 6]);
                if (dVar41 <= 0.0) {
                  fVar39 = 0.0;
                }
                else {
                  local_280 = pHVar6;
                  local_288 = (HKEY)0x0;
                  local_268 = (HKEY)(dVar46 / dVar41);
                  ppHVar27 = &local_288;
                  if (0.0 <= (double)local_268) {
                    ppHVar27 = &local_268;
                  }
                  ppHVar21 = &local_280;
                  if ((double)local_268 <= (double)pHVar6) {
                    ppHVar21 = ppHVar27;
                  }
                  fVar39 = (float)(double)*ppHVar21;
                }
                *(float *)(local_220[0] + uVar31 * 4) = fVar39;
                if (fVar39 <= local_244._4_4_) {
                  fVar39 = local_244._4_4_;
                }
                local_244 = CONCAT44(fVar39,(undefined4)local_244);
                dVar42 = (double)(longlong)
                                 (((puVar9[uVar31 * 6 + 8] - puVar36[uVar31 * 6 + 8]) -
                                  puVar36[uVar31 * 6 + 7]) + puVar9[uVar31 * 6 + 7]);
                dVar47 = dVar42 - (double)(longlong)
                                          (puVar9[uVar31 * 6 + 6] - puVar36[uVar31 * 6 + 6]);
                if (dVar42 <= 0.0) {
                  fVar40 = 0.0;
                }
                else {
                  local_280 = pHVar6;
                  local_288 = (HKEY)0x0;
                  local_268 = (HKEY)(dVar47 / dVar42);
                  ppHVar27 = &local_288;
                  if (0.0 <= (double)local_268) {
                    ppHVar27 = &local_268;
                  }
                  ppHVar21 = &local_280;
                  if ((double)local_268 <= (double)pHVar6) {
                    ppHVar21 = ppHVar27;
                  }
                  fVar40 = (float)(double)*ppHVar21;
                }
                *(float *)(local_220[0] + 4 + uVar31 * 4) = fVar40;
                if (fVar40 <= fVar39) {
                  fVar40 = fVar39;
                }
                local_244 = CONCAT44(fVar40,(undefined4)local_244);
                dVar43 = (double)(longlong)
                                 (((puVar9[uVar31 * 6 + 0xe] - puVar36[uVar31 * 6 + 0xe]) -
                                  puVar36[uVar31 * 6 + 0xd]) + puVar9[uVar31 * 6 + 0xd]);
                dVar48 = dVar43 - (double)(longlong)
                                          (puVar9[uVar31 * 6 + 0xc] - puVar36[uVar31 * 6 + 0xc]);
                if (dVar43 <= 0.0) {
                  fVar39 = 0.0;
                }
                else {
                  local_280 = pHVar6;
                  local_288 = (HKEY)0x0;
                  local_268 = (HKEY)(dVar48 / dVar43);
                  ppHVar27 = &local_288;
                  if (0.0 <= (double)local_268) {
                    ppHVar27 = &local_268;
                  }
                  ppHVar21 = &local_280;
                  if ((double)local_268 <= (double)pHVar6) {
                    ppHVar21 = ppHVar27;
                  }
                  fVar39 = (float)(double)*ppHVar21;
                }
                *(float *)(local_220[0] + 8 + uVar31 * 4) = fVar39;
                if (fVar39 <= fVar40) {
                  fVar39 = fVar40;
                }
                local_244 = CONCAT44(fVar39,(undefined4)local_244);
                dVar44 = (double)(longlong)
                                 (((puVar9[uVar31 * 6 + 0x14] - puVar36[uVar31 * 6 + 0x14]) -
                                  puVar36[uVar31 * 6 + 0x13]) + puVar9[uVar31 * 6 + 0x13]);
                dVar49 = dVar44 - (double)(longlong)
                                          (puVar9[uVar31 * 6 + 0x12] - puVar36[uVar31 * 6 + 0x12]);
                if (dVar44 <= 0.0) {
                  fVar40 = 0.0;
                }
                else {
                  local_280 = pHVar6;
                  local_288 = (HKEY)0x0;
                  local_268 = (HKEY)(dVar49 / dVar44);
                  ppHVar27 = &local_288;
                  if (0.0 <= (double)local_268) {
                    ppHVar27 = &local_268;
                  }
                  ppHVar21 = &local_280;
                  if ((double)local_268 <= (double)pHVar6) {
                    ppHVar21 = ppHVar27;
                  }
                  fVar40 = (float)(double)*ppHVar21;
                }
                *(float *)(local_220[0] + 0xc + uVar31 * 4) = fVar40;
                if (fVar40 <= fVar39) {
                  fVar40 = fVar39;
                }
                local_244 = CONCAT44(fVar40,(undefined4)local_244);
                dVar45 = dVar45 + dVar46 + dVar47 + dVar48 + dVar49;
                dVar50 = dVar50 + dVar41 + dVar42 + dVar43 + dVar44;
                uVar31 = uVar31 + 4;
                dVar41 = dVar45;
                dVar46 = dVar50;
                lVar29 = local_244;
              } while (uVar31 < uVar19 - 3);
            }
            for (; local_244._4_4_ = (float)((ulonglong)lVar29 >> 0x20), uVar31 < uVar19;
                uVar31 = uVar31 + 1) {
              dVar45 = (double)(longlong)
                               (((puVar9[uVar31 * 6 + 2] - puVar36[uVar31 * 6 + 2]) -
                                puVar36[uVar31 * 6 + 1]) + puVar9[uVar31 * 6 + 1]);
              dVar50 = dVar45 - (double)(longlong)(puVar9[uVar31 * 6] - puVar36[uVar31 * 6]);
              if (dVar45 <= 0.0) {
                fVar39 = 0.0;
              }
              else {
                local_280 = pHVar6;
                local_288 = (HKEY)0x0;
                local_268 = (HKEY)(dVar50 / dVar45);
                ppHVar27 = &local_288;
                if (0.0 <= (double)local_268) {
                  ppHVar27 = &local_268;
                }
                ppHVar21 = &local_280;
                if ((double)local_268 <= (double)pHVar6) {
                  ppHVar21 = ppHVar27;
                }
                fVar39 = (float)(double)*ppHVar21;
              }
              *(float *)(local_220[0] + uVar31 * 4) = fVar39;
              if (fVar39 <= local_244._4_4_) {
                fVar39 = local_244._4_4_;
              }
              local_244._0_4_ = (undefined4)lVar29;
              local_244 = CONCAT44(fVar39,(undefined4)local_244);
              dVar41 = dVar41 + dVar50;
              dVar46 = dVar46 + dVar45;
              lVar29 = local_244;
            }
            if (dVar46 <= 0.0) {
              local_244 = (ulonglong)(uint)local_244._4_4_ << 0x20;
            }
            else {
              local_288 = pHVar6;
              local_280 = (HKEY)0x0;
              local_268 = (HKEY)(dVar41 / dVar46);
              ppHVar27 = &local_280;
              if (0.0 <= (double)local_268) {
                ppHVar27 = &local_268;
              }
              ppHVar21 = &local_288;
              if ((double)local_268 <= (double)pHVar6) {
                ppHVar21 = ppHVar27;
              }
              local_244 = CONCAT44(local_244._4_4_,(float)(double)*ppHVar21);
            }
          }
          FUN_1800d51f0(&local_198,puVar9,uVar30);
          cVar37 = '\x01';
          puVar36 = local_198;
        }
      }
    }
    local_23c = CONCAT44(DVar38,DVar38);
    if (local_258[0] != 0) {
      IVar20 = (*local_1a8)();
      lVar29 = local_1e0;
      pFVar15 = local_260;
      if ((int)IVar20 == 0) {
        uVar53 = uVar58;
        uVar55 = uVar59;
        uVar56 = uVar58;
        uVar57 = uVar59;
        if (local_1e0 != 0) {
          local_278 = (HKEY)((ulonglong)local_278 & 0xffffffff00000000);
          local_288 = (HKEY)((ulonglong)local_288 & 0xffffffff00000000);
          IVar20 = (*local_260)(local_1e0,0x8200,&local_278,&local_288);
          pHVar8 = local_278;
          if ((int)IVar20 != -0x7ffff82e) goto LAB_1800d484c;
          if ((DWORD)local_278 == 0) goto LAB_1800d484c;
          uVar19 = (ulonglong)local_278 & 0xffffffff;
          local_1c8 = 0;
          lStack_1c0 = 0;
          local_1b8 = 0;
          lVar22 = FUN_18000fb70((ulonglong)local_278 & 0xffffffff);
          lVar1 = lVar22 + uVar19;
          local_1c8 = lVar22;
          local_1b8 = lVar1;
          FUN_180540170(lVar22,0,(ulonglong)pHVar8 & 0xffffffff);
          lStack_1c0 = lVar1;
          IVar20 = (*local_260)(lVar29,0x8200,&local_278,&local_288);
          lVar29 = lVar22;
          if ((int)IVar20 == 0) {
            uVar19 = 0;
            uVar52 = uVar58;
            uVar54 = uVar59;
            if ((uint)local_288 != 0) {
              do {
                uVar53 = uVar52;
                uVar55 = uVar54;
                if ((*(int *)(lVar22 + 8 + uVar19 * 0x18) == 0) &&
                   (lVar24 = *(longlong *)(lVar22 + uVar19 * 0x18), lVar24 != 0)) {
                  dVar45 = *(double *)(lVar22 + 0x10 + uVar19 * 0x18);
                  uVar51 = (undefined4)((ulonglong)dVar45 >> 0x20);
                  local_138 = (undefined8 *****)0x0;
                  uStack_130 = 0;
                  local_128 = 0;
                  local_120 = 0;
                  uVar23 = FUN_180512c70(lVar24);
                  FUN_180024d40(&local_138,lVar24,uVar23);
                  pppppuVar28 = &local_138;
                  if (7 < local_120) {
                    pppppuVar28 = local_138;
                  }
                  if ((local_128 == 6) &&
                     (iVar13 = FUN_180028bc0(pppppuVar28,L"_Total"), iVar13 == 0)) {
                    uVar56 = SUB84(dVar45,0);
                    uVar57 = uVar51;
                  }
                  else {
                    lVar24 = FUN_1800d4d40(&local_138,L"_Total");
                    if (lVar24 == -1) {
                      uVar53 = SUB84(dVar45,0);
                      uVar55 = uVar51;
                      if (dVar45 <= (double)CONCAT44(uVar54,uVar52)) {
                        uVar53 = uVar52;
                        uVar55 = uVar54;
                      }
                    }
                  }
                  if (7 < local_120) {
                    uVar30 = local_120 * 2 + 2;
                    pppppuVar28 = local_138;
                    if (0xfff < uVar30) {
                      pppppuVar28 = (undefined8 *****)local_138[-1];
                      if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)pppppuVar28))) {
                        pcVar3 = (code *)swi(0x29);
                        (*pcVar3)(5);
                        puVar33 = auStackY_2b0;
                        goto LAB_1800d4c96;
                      }
                      uVar30 = local_120 * 2 + 0x29;
                    }
                    thunk_FUN_1803d64e0(pppppuVar28,uVar30);
                  }
                }
                uVar34 = (int)uVar19 + 1;
                uVar19 = (ulonglong)uVar34;
                uVar52 = uVar53;
                uVar54 = uVar55;
              } while (uVar34 < (uint)local_288);
            }
            if (lVar22 != 0) {
              uVar19 = lVar1 - lVar22;
              if (0xfff < uVar19) {
                lVar29 = *(longlong *)(lVar22 + -8);
                puVar33 = auStackY_2b8;
                if (0x1f < (lVar22 - lVar29) - 8U) goto LAB_1800d4c96;
                uVar19 = uVar19 + 0x27;
              }
              goto LAB_1800d483c;
            }
LAB_1800d4844:
            pFVar15 = local_260;
            goto LAB_1800d484c;
          }
          if (lVar22 == 0) goto LAB_1800d4844;
          uVar19 = lVar1 - lVar22;
          if (uVar19 < 0x1000) {
LAB_1800d483c:
            thunk_FUN_1803d64e0(lVar29,uVar19);
            goto LAB_1800d4844;
          }
          lVar29 = *(longlong *)(lVar22 + -8);
          puVar33 = auStackY_2b8;
          if ((lVar22 - lVar29) - 8U < 0x20) {
            uVar19 = uVar19 + 0x27;
            goto LAB_1800d483c;
          }
LAB_1800d4c96:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar32 = puVar33 + 8;
LAB_1800d4c9d:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar33 = puVar32 + 8;
LAB_1800d4ca4:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar33 = puVar33 + 8;
          goto LAB_1800d4cab;
        }
LAB_1800d484c:
        if (0 < (int)local_270[0]) {
          if (0.0 <= (double)CONCAT44(uVar57,uVar56)) {
            local_23c = CONCAT44(local_23c._4_4_,
                                 (int)(((double)(int)local_270[0] * (double)CONCAT44(uVar57,uVar56))
                                       / dVar7 + dVar5));
          }
          if (0.0 <= (double)CONCAT44(uVar55,uVar53)) {
            local_23c = CONCAT44((int)(((double)(int)local_270[0] * (double)CONCAT44(uVar55,uVar53))
                                       / dVar7 + dVar5),(undefined4)local_23c);
          }
        }
        local_1f8 = (longlong *)0x0;
        local_1f0 = 0;
        local_1f8 = (longlong *)FUN_1804ecaa0(0x48);
        lVar29 = local_1d8;
        *local_1f8 = (longlong)local_1f8;
        local_1f8[1] = (longlong)local_1f8;
        local_1f8[2] = (longlong)local_1f8;
        *(undefined2 *)(local_1f8 + 3) = 0x101;
        local_280 = (HKEY)&local_1f8;
        if (local_1d8 != 0) {
          local_278 = (HKEY)((ulonglong)local_278 & 0xffffffff00000000);
          local_288 = (HKEY)((ulonglong)local_288 & 0xffffffff00000000);
          IVar20 = (*pFVar15)(local_1d8,0x8200,&local_278,&local_288);
          pHVar8 = local_278;
          if (((int)IVar20 == -0x7ffff82e) && ((DWORD)local_278 != 0)) {
            uVar19 = (ulonglong)local_278 & 0xffffffff;
            local_1c8 = 0;
            lStack_1c0 = 0;
            local_1b8 = 0;
            lVar22 = FUN_18000fb70((ulonglong)local_278 & 0xffffffff);
            lVar1 = lVar22 + uVar19;
            local_1c8 = lVar22;
            local_1b8 = lVar1;
            FUN_180540170(lVar22,0,(ulonglong)pHVar8 & 0xffffffff);
            lStack_1c0 = lVar1;
            IVar20 = (*local_260)(lVar29,0x8200,&local_278,&local_288);
            lVar29 = lVar22;
            if ((int)IVar20 == 0) {
              uVar19 = 0;
              if ((uint)local_288 != 0) {
                do {
                  if ((*(int *)(lVar22 + 8 + uVar19 * 0x18) == 0) &&
                     (lVar24 = *(longlong *)(lVar22 + uVar19 * 0x18), lVar24 != 0)) {
                    uVar23 = *(undefined8 *)(lVar22 + 0x10 + uVar19 * 0x18);
                    local_138 = (undefined8 *****)0x0;
                    uStack_130 = 0;
                    local_128 = 0;
                    local_120 = 0;
                    uVar25 = FUN_180512c70(lVar24);
                    FUN_180024d40(&local_138,lVar24,uVar25);
                    FUN_1800d4dd0(&local_280,&local_138,uVar23);
                    if (7 < local_120) {
                      uVar30 = local_120 * 2 + 2;
                      pppppuVar28 = local_138;
                      if (0xfff < uVar30) {
                        pppppuVar28 = (undefined8 *****)local_138[-1];
                        if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)pppppuVar28)))
                        goto LAB_1800d4c9d;
                        uVar30 = local_120 * 2 + 0x29;
                      }
                      thunk_FUN_1803d64e0(pppppuVar28,uVar30);
                    }
                  }
                  uVar34 = (int)uVar19 + 1;
                  uVar19 = (ulonglong)uVar34;
                } while (uVar34 < (uint)local_288);
              }
              if (lVar22 != 0) {
                uVar19 = lVar1 - lVar22;
                if (0xfff < uVar19) {
                  lVar29 = *(longlong *)(lVar22 + -8);
                  puVar33 = auStackY_2b8;
                  if (0x1f < (lVar22 - lVar29) - 8U) goto LAB_1800d4ca4;
                  uVar19 = uVar19 + 0x27;
                }
                goto LAB_1800d4ab8;
              }
            }
            else if (lVar22 != 0) {
              uVar19 = lVar1 - lVar22;
              if (0xfff < uVar19) {
                lVar29 = *(longlong *)(lVar22 + -8);
                puVar33 = auStackY_2b8;
                if (0x1f < (lVar22 - lVar29) - 8U) goto LAB_1800d4ca4;
                uVar19 = uVar19 + 0x27;
              }
LAB_1800d4ab8:
              thunk_FUN_1803d64e0(lVar29,uVar19);
            }
          }
        }
        cVar2 = *(char *)(*local_1f8 + 0x19);
        plVar4 = (longlong *)*local_1f8;
        dVar45 = 0.0;
        while (cVar2 == '\0') {
          dVar50 = (double)plVar4[8];
          if ((double)plVar4[8] <= dVar45) {
            dVar50 = dVar45;
          }
          plVar26 = (longlong *)plVar4[2];
          if (*(char *)((longlong)plVar26 + 0x19) == '\0') {
            cVar2 = *(char *)(*plVar26 + 0x19);
            while (cVar2 == '\0') {
              plVar26 = (longlong *)*plVar26;
              cVar2 = *(char *)(*plVar26 + 0x19);
            }
          }
          else {
            cVar2 = *(char *)(plVar4[1] + 0x19);
            plVar10 = (longlong *)plVar4[1];
            while ((plVar26 = plVar10, cVar2 == '\0' && (plVar4 == (longlong *)plVar26[2]))) {
              cVar2 = *(char *)(plVar26[1] + 0x19);
              plVar10 = (longlong *)plVar26[1];
              plVar4 = plVar26;
            }
          }
          plVar4 = plVar26;
          dVar45 = dVar50;
          cVar2 = *(char *)((longlong)plVar26 + 0x19);
        }
        local_278 = pHVar6;
        local_280 = (HKEY)0x0;
        local_268 = (HKEY)(dVar45 / dVar7);
        ppHVar27 = &local_280;
        if (0.0 <= (double)local_268) {
          ppHVar27 = &local_268;
        }
        ppHVar21 = &local_278;
        if ((double)local_268 <= (double)pHVar6) {
          ppHVar21 = ppHVar27;
        }
        local_208 = (float)(double)*ppHVar21;
        FUN_1800d5430(&local_1f8,&local_1f8,local_1f8[1]);
        thunk_FUN_1803d64e0(local_1f8,0x48);
        DVar38 = local_270[0];
      }
    }
    local_248 = cVar37;
    iVar13 = FUN_1804e4d70(&DAT_1809ebb70);
    if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(5);
    }
    if (DAT_1809ebbbc == 0x7fffffff) {
      DAT_1809ebbbc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1804e4a90(6);
    }
    DAT_180cd0de0 = local_248;
    DAT_180cd0de4 = (undefined4)local_244;
    DAT_180cd0de8 = local_244._4_4_;
    DAT_180cd0dec = (undefined4)local_23c;
    DAT_180cd0df0 = local_23c._4_4_;
    DAT_180cd0df8 = local_230;
    DAT_180cd0e00 = local_228;
    FUN_1800ccf00(&DAT_180cd0e08,local_220);
    DAT_180cd0e20 = local_208;
    FUN_1804e4e90(&DAT_1809ebb70);
    iVar13 = 0;
    do {
      if (DAT_180ca39d7 == '\0') break;
      Sleep(10);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 100);
    FUN_180068f30();
    puVar33 = auStackY_2b8;
    if (DAT_180ca39d7 == '\0') goto LAB_1800d4cab;
    puVar35 = local_1d0;
  } while( true );
}



/* ===== 1800d4d40 FUN_1800d4d40 ===== */

longlong FUN_1800d4d40(undefined8 *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = FUN_180512c70(param_2);
  puVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (uVar3 <= *puVar1) {
    if (uVar3 == 0) {
      return 0;
    }
    lVar2 = (longlong)param_1 + *puVar1 * 2;
    lVar4 = thunk_FUN_1804e94c0(param_1,lVar2,param_2,uVar3);
    if (lVar4 != lVar2) {
      return lVar4 - (longlong)param_1 >> 1;
    }
  }
  return -1;
}



/* ===== 1800d4dd0 FUN_1800d4dd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d4dd0(longlong *param_1,undefined8 *param_2,double param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  uint local_c8;
  longlong *local_b8;
  longlong *local_b0;
  ulonglong local_98 [4];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  puVar13 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar13 = (undefined8 *)*param_2;
  }
  uVar10 = 6;
  if (((ulonglong)param_2[2] < 6) ||
     (lVar12 = (longlong)puVar13 + param_2[2] * 2,
     lVar3 = thunk_FUN_1804e94c0(puVar13,lVar12,L"_luid_",6), lVar3 == lVar12)) {
    uVar4 = 0xfffffffffffffffe;
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = lVar3 - (longlong)puVar13 >> 1;
    uVar4 = lVar3 - (longlong)puVar13 & 0xfffffffffffffffe;
  }
  param_1 = (longlong *)*param_1;
  if (uVar7 == 0xffffffffffffffff) {
    puVar5 = (ulonglong *)FUN_180024980(local_78,param_2);
    uVar10 = 1;
    uVar15 = extraout_XMM0_Da;
  }
  else {
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    if ((ulonglong)param_2[2] < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18002a1a0();
    }
    lVar3 = param_2[2] - uVar7;
    lVar12 = -1;
    if (lVar3 != -1) {
      lVar12 = lVar3;
    }
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar15 = FUN_180024d40(local_98,uVar4 + (longlong)param_2,lVar12);
    puVar5 = local_98;
  }
  puVar9 = auStack_e8;
  plVar6 = (longlong *)*param_1;
  plVar14 = (longlong *)plVar6[1];
  plVar8 = plVar14;
  local_c8 = uVar10;
  if (*(char *)((longlong)plVar14 + 0x19) == '\0') {
    do {
      plVar14 = plVar8;
      cVar2 = FUN_1800d54d0(uVar15,plVar14 + 4,puVar5);
      if (cVar2 == '\0') {
        plVar8 = (longlong *)*plVar14;
        plVar6 = plVar14;
      }
      else {
        plVar8 = (longlong *)plVar14[2];
      }
      uVar11 = (uint)(cVar2 == '\0');
      uVar15 = extraout_XMM0_Da_00;
    } while (*(char *)((longlong)plVar8 + 0x19) == '\0');
  }
  else {
    uVar11 = 0;
  }
  if ((*(char *)((longlong)plVar6 + 0x19) != '\0') ||
     (cVar2 = FUN_1800d54d0(uVar15,puVar5,plVar6 + 4), cVar2 != '\0')) {
    if (param_1[1] == 0x38e38e38e38e38e) goto LAB_1800d5068;
    lVar12 = *param_1;
    local_b0 = (longlong *)0x0;
    local_b8 = param_1;
    plVar6 = (longlong *)FUN_1804ecaa0(0x48);
    local_b0 = plVar6;
    FUN_180024980(plVar6 + 4,puVar5);
    plVar6[8] = 0;
    *plVar6 = lVar12;
    plVar6[1] = lVar12;
    plVar6[2] = lVar12;
    *(undefined2 *)(plVar6 + 3) = 0;
    local_b0 = (longlong *)CONCAT44(local_b0._4_4_,uVar11);
    local_b8 = plVar14;
    plVar6 = (longlong *)FUN_1800774d0(param_1,&local_b8,plVar6);
  }
  plVar6[8] = (longlong)(param_3 + (double)plVar6[8]);
  if ((uVar10 & 2) != 0) {
    uVar10 = uVar10 & 0xfffffffd;
    if (7 < local_98[3]) {
      uVar4 = local_98[3] * 2 + 2;
      uVar7 = local_98[0];
      if (0xfff < uVar4) {
        uVar7 = *(ulonglong *)(local_98[0] - 8);
        if (0x1f < (local_98[0] - uVar7) - 8) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar9 = auStack_e0;
LAB_1800d5068:
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar9 + -8) = 0x1800d506d;
          FUN_18006dab0();
        }
        uVar4 = local_98[3] * 2 + 0x29;
      }
      thunk_FUN_1803d64e0(uVar7,uVar4);
    }
    local_98[2] = 0;
    local_98[3] = 7;
    local_98[0] = local_98[0] & 0xffffffffffff0000;
  }
  if ((uVar10 & 1) != 0) {
    FUN_1800289e0(local_78);
  }
  return;
}



/* ===== 1800d5080 FUN_1800d5080 ===== */

void FUN_1800d5080(longlong *param_1)

{
  FUN_1800d5430(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1803d64e0(*param_1,0x48);
  return;
}



/* ===== 1800d50c0 FUN_1800d50c0 ===== */

void FUN_1800d50c0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar5 = lVar1 - lVar2 >> 2;
  if (param_2 < uVar5) {
    param_1[1] = lVar2 + param_2 * 4;
  }
  else if (uVar5 < param_2) {
    uVar4 = param_1[2] - lVar2 >> 2;
    if (uVar4 < param_2) {
      if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_1800118d0();
      }
      uVar6 = 0x3fffffffffffffff;
      if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
        uVar6 = (uVar4 >> 1) + uVar4;
        if (uVar6 < param_2) {
          uVar6 = param_2;
        }
        else if (0x3fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_18000d840();
        }
      }
      lVar3 = FUN_18000fb70(uVar6 * 4);
      FUN_180540170(lVar3 + (lVar1 - lVar2 & 0xfffffffffffffffcU),0,(param_2 - uVar5) * 4);
      FUN_180540530(lVar3,*param_1,param_1[1] - *param_1);
      FUN_18006b9f0(param_1,lVar3,param_2,uVar6);
    }
    else {
      lVar2 = (param_2 - uVar5) * 4;
      FUN_180540170(lVar1,0,lVar2);
      param_1[1] = lVar2 + lVar1;
    }
  }
  return;
}



/* ===== 1800d51f0 FUN_1800d51f0 ===== */

void FUN_1800d51f0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  uVar9 = *param_1;
  uVar2 = ((longlong)(param_1[2] - uVar9) >> 4) * -0x5555555555555555;
  if (param_3 <= uVar2) {
    lVar5 = (longlong)(param_1[1] - uVar9) >> 4;
    if ((ulonglong)(lVar5 * -0x5555555555555555) < param_3) {
      FUN_180540530(uVar9,param_2,lVar5 * 0x10);
      uVar9 = param_1[1];
      lVar4 = (param_3 + lVar5 * 0x5555555555555555) * 0x30;
      FUN_180540530(uVar9,lVar5 * 0x10 + param_2,lVar4);
    }
    else {
      lVar4 = param_3 * 0x30;
      FUN_180540530(uVar9,param_2,lVar4);
    }
    goto LAB_1800d5350;
  }
  if (0x555555555555555 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  if (0x555555555555555 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x555555555555555;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  puVar8 = auStack_58;
  if (uVar9 != 0) {
    uVar3 = uVar9;
    if ((ulonglong)(((longlong)(param_1[2] - uVar9) >> 4) << 4) < 0x1000) {
LAB_1800d52a1:
      puVar7 = puVar6;
    }
    else {
      uVar3 = *(ulonglong *)(uVar9 - 8);
      uVar9 = (uVar9 - uVar3) - 8;
      if (0x1f < uVar9) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStack_50;
        uVar3 = uVar9;
        goto LAB_1800d52a1;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x1800d52a9;
    thunk_FUN_1803d64e0(uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar8 = puVar7;
  }
  if (0x555555555555555 < uVar2) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_1800d536a;
    FUN_18000d840();
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800d52cf;
  uVar9 = FUN_18000fb70(uVar2 * 0x30);
  *param_1 = uVar9;
  param_1[1] = uVar9;
  param_1[2] = uVar2 * 0x30 + uVar9;
  lVar4 = param_3 * 0x30;
  *(undefined8 *)(puVar8 + -8) = 0x1800d52f7;
  FUN_180540530(uVar9,param_2,lVar4);
LAB_1800d5350:
  param_1[1] = lVar4 + uVar9;
  return;
}



/* ===== 1800d5380 FUN_1800d5380 ===== */

void FUN_1800d5380(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  uVar4 = *param_1;
  if (uVar4 == 0) {
    return;
  }
  uVar3 = ((longlong)(param_1[2] - uVar4) >> 4) * 0x10;
  uVar2 = uVar4;
  if (0xfff < uVar3) {
    uVar2 = *(ulonglong *)(uVar4 - 8);
    uVar4 = (uVar4 - uVar2) - 8;
    if (uVar4 < 0x20) {
      uVar3 = uVar3 + 0x27;
      puVar5 = auStack_28;
    }
    else {
      uVar3 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar5 = auStack_20;
      uVar2 = uVar4;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1800d53e7;
  thunk_FUN_1803d64e0(uVar2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800d5400 FUN_1800d5400 ===== */

undefined8 FUN_1800d5400(undefined8 *param_1)

{
  (*(code *)*param_1)();
  FUN_1804eb180();
  thunk_FUN_1803d64e0(param_1,8);
  return 0;
}



/* ===== 1800d5430 FUN_1800d5430 ===== */

void FUN_1800d5430(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800d5430(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1800289e0(param_3 + 4);
    thunk_FUN_1803d64e0(param_3,0x48);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



/* ===== 1800d54d0 FUN_1800d54d0 ===== */

/* WARNING: Removing unreachable block (ram,0x0001800d552d) */

ulonglong FUN_1800d54d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar1 = param_3[2];
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar2 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar5 = uVar2;
  if (uVar1 < uVar2) {
    uVar5 = uVar1;
  }
  uVar5 = FUN_180028bc0(param_2,param_3,uVar5);
  iVar4 = (int)uVar5;
  if (iVar4 == 0) {
    if (uVar2 < uVar1) {
      return 1;
    }
    if (uVar2 <= uVar1) {
      return uVar5 & 0xffffffffffffff00;
    }
    iVar4 = 1;
  }
  bVar3 = 0xff;
  if (-1 < iVar4) {
    bVar3 = 0;
  }
  return (ulonglong)(bVar3 >> 7);
}



/* ===== 1800d5570 FUN_1800d5570 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800d5570(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  char **ppcVar9;
  undefined1 auStack_78 [32];
  size_t local_58;
  char *local_40;
  char *local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_40 = "weapon_";
  local_38 = "item_";
  ppcVar9 = &local_40;
  local_30 = param_2;
  do {
    pcVar8 = *ppcVar9;
    local_58 = strlen(pcVar8);
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      pcVar7 = param_2;
    }
    else {
      pcVar7 = *(char **)param_2;
    }
    lVar5 = FUN_180043210(pcVar7,*(undefined8 *)(param_2 + 0x10),0,pcVar8);
    if (lVar5 == 0) {
      sVar6 = strlen(pcVar8);
      uVar1 = *(ulonglong *)(param_2 + 0x10);
      if (uVar1 < sVar6) {
        sVar6 = uVar1;
      }
      if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
        pcVar8 = param_2;
      }
      else {
        pcVar8 = *(char **)param_2;
      }
      FUN_180540530(pcVar8,pcVar8 + sVar6);
      *(ulonglong *)(param_2 + 0x10) = uVar1 - sVar6;
    }
    ppcVar9 = ppcVar9 + 1;
  } while (ppcVar9 != &local_30);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_2 = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\x0f';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  FUN_18000f890(param_2);
  return param_1;
}



/* ===== 1800d56a0 FUN_1800d56a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1800d56a0(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined1 auStack_78 [32];
  size_t local_58;
  longlong *local_40;
  char *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_40 = (longlong *)0x1806de5e0;
  local_38 = "item_";
  pplVar9 = &local_40;
  local_30 = param_2;
  do {
    plVar5 = *pplVar9;
    local_58 = strlen((char *)plVar5);
    if ((ulonglong)param_2[3] < 0x10) {
      plVar7 = param_2;
    }
    else {
      plVar7 = (longlong *)*param_2;
    }
    lVar3 = FUN_180043210(plVar7,param_2[2],0,plVar5);
    if (lVar3 == 0) {
      sVar4 = strlen((char *)plVar5);
      uVar1 = param_2[2];
      if (uVar1 < sVar4) {
        sVar4 = uVar1;
      }
      if ((ulonglong)param_2[3] < 0x10) {
        plVar5 = param_2;
      }
      else {
        plVar5 = (longlong *)*param_2;
      }
      FUN_180540530(plVar5,sVar4 + (longlong)plVar5);
      param_2[2] = uVar1 - sVar4;
    }
    pplVar9 = pplVar9 + 1;
  } while (pplVar9 != &local_30);
  lVar3 = param_2[2];
  uVar1 = param_2[3];
  plVar5 = param_2;
  if (0xf < uVar1) {
    plVar5 = (longlong *)*param_2;
  }
  if (lVar3 == 0xb) {
    lVar8 = *plVar5 + -0x73746c7561737361;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(ushort *)(plVar5 + 1) - 0x6975, lVar8 == 0)) {
      lVar8 = (ulonglong)*(byte *)((longlong)plVar5 + 10) - 0x74;
    }
    if (lVar8 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0xf;
      param_1[5] = 0;
      param_1[6] = 0xf;
      param_1[7] = 0;
      *(undefined8 *)param_1 = s_kevlar___helmet_1806f04b8._0_8_;
      param_1[2] = s_kevlar___helmet_1806f04b8._8_4_;
      *(undefined2 *)(param_1 + 3) = s_kevlar___helmet_1806f04b8._12_2_;
      *(char *)((longlong)param_1 + 0xe) = s_kevlar___helmet_1806f04b8[0xe];
      *(undefined1 *)((longlong)param_1 + 0xf) = 0;
      goto LAB_1800d5d3b;
    }
  }
  plVar5 = param_2;
  if (0xf < uVar1) {
    plVar5 = (longlong *)*param_2;
  }
  if (lVar3 == 6) {
    iVar6 = (int)*plVar5 + -0x6c76656b;
    if (iVar6 == 0) {
      iVar6 = *(ushort *)((longlong)plVar5 + 4) - 0x7261;
    }
    if (iVar6 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 6;
      param_1[5] = 0;
      param_1[6] = 0xf;
      param_1[7] = 0;
      *param_1 = DAT_1806f04c8;
      *(undefined2 *)(param_1 + 1) = DAT_1806f04cc;
      *(undefined1 *)((longlong)param_1 + 6) = 0;
      goto LAB_1800d5d3b;
    }
  }
  plVar5 = param_2;
  if (0xf < uVar1) {
    plVar5 = (longlong *)*param_2;
  }
  if (lVar3 == 7) {
    iVar6 = (int)*plVar5 + -0x75666564;
    if ((iVar6 == 0) && (iVar6 = *(ushort *)((longlong)plVar5 + 4) - 0x6573, iVar6 == 0)) {
      iVar6 = *(byte *)((longlong)plVar5 + 6) - 0x72;
    }
    if (iVar6 != 0) goto LAB_1800d58a0;
LAB_1800d58d7:
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 10;
    param_1[5] = 0;
    param_1[6] = 0xf;
    param_1[7] = 0;
    *(undefined8 *)param_1 = s_defuse_kit_1806f04e8._0_8_;
    *(undefined2 *)(param_1 + 2) = s_defuse_kit_1806f04e8._8_2_;
    *(undefined1 *)((longlong)param_1 + 10) = 0;
  }
  else {
LAB_1800d58a0:
    plVar5 = param_2;
    if (0xf < uVar1) {
      plVar5 = (longlong *)*param_2;
    }
    if (lVar3 == 7) {
      iVar6 = (int)*plVar5 + -0x74747563;
      if ((iVar6 == 0) && (iVar6 = *(ushort *)((longlong)plVar5 + 4) - 0x7265, iVar6 == 0)) {
        iVar6 = *(byte *)((longlong)plVar5 + 6) - 0x73;
      }
      if (iVar6 == 0) goto LAB_1800d58d7;
    }
    plVar5 = param_2;
    if (0xf < uVar1) {
      plVar5 = (longlong *)*param_2;
    }
    if (lVar3 == 5) {
      iVar6 = (int)*plVar5 + -0x65736174;
      if (iVar6 == 0) {
        iVar6 = *(byte *)((longlong)plVar5 + 4) - 0x72;
      }
      if (iVar6 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 4;
        param_1[5] = 0;
        param_1[6] = 0xf;
        param_1[7] = 0;
        *param_1 = 0x7375657a;
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_1800d5d3b;
      }
    }
    plVar5 = param_2;
    if (0xf < uVar1) {
      plVar5 = (longlong *)*param_2;
    }
    if (lVar3 == 9) {
      lVar3 = *plVar5 + -0x64616e6572676568;
      if (lVar3 == 0) {
        lVar3 = (ulonglong)*(byte *)(plVar5 + 1) - 0x65;
      }
      if (lVar3 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 2;
        param_1[5] = 0;
        param_1[6] = 0xf;
        param_1[7] = 0;
        *(undefined2 *)param_1 = 0x6568;
        *(undefined1 *)((longlong)param_1 + 2) = 0;
        goto LAB_1800d5d3b;
      }
    }
    lVar3 = param_2[2];
    uVar1 = param_2[3];
    plVar5 = param_2;
    if (0xf < uVar1) {
      plVar5 = (longlong *)*param_2;
    }
    if (lVar3 == 0xc) {
      lVar8 = *plVar5 + -0x657267656b6f6d73;
      if (lVar8 == 0) {
        lVar8 = (ulonglong)*(uint *)(plVar5 + 1) - 0x6564616e;
      }
      if (lVar8 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 5;
        param_1[5] = 0;
        param_1[6] = 0xf;
        param_1[7] = 0;
        *param_1 = DAT_1806e7598;
        *(undefined1 *)(param_1 + 1) = DAT_1806e759c;
        *(undefined1 *)((longlong)param_1 + 5) = 0;
        goto LAB_1800d5d3b;
      }
    }
    plVar5 = param_2;
    if (0xf < uVar1) {
      plVar5 = (longlong *)*param_2;
    }
    if (lVar3 == 10) {
      lVar8 = *plVar5 + -0x616e657267636e69;
      if (lVar8 == 0) {
        lVar8 = (ulonglong)*(ushort *)(plVar5 + 1) - 0x6564;
      }
      if (lVar8 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 10;
        param_1[5] = 0;
        param_1[6] = 0xf;
        param_1[7] = 0;
        *(undefined8 *)param_1 = s_incendiary_1806f0508._0_8_;
        *(undefined2 *)(param_1 + 2) = s_incendiary_1806f0508._8_2_;
        *(undefined1 *)((longlong)param_1 + 10) = 0;
        goto LAB_1800d5d3b;
      }
    }
    plVar5 = param_2;
    if (0xf < uVar1) {
      plVar5 = (longlong *)*param_2;
    }
    if (lVar3 == 0xd) {
      lVar8 = *plVar5 + -0x6c69735f3161346d;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(plVar5 + 1) - 0x65636e65, lVar8 == 0)) {
        lVar8 = (ulonglong)*(byte *)((longlong)plVar5 + 0xc) - 0x72;
      }
      if (lVar8 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 6;
        param_1[5] = 0;
        param_1[6] = 0xf;
        param_1[7] = 0;
        *param_1 = DAT_1806f04f4;
        *(undefined2 *)(param_1 + 1) = DAT_1806f04f8;
        *(undefined1 *)((longlong)param_1 + 6) = 0;
        goto LAB_1800d5d3b;
      }
    }
    plVar5 = param_2;
    if (0xf < uVar1) {
      plVar5 = (longlong *)*param_2;
    }
    if ((lVar3 == 4) && ((int)*plVar5 == 0x3161346d)) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0xf;
      param_1[7] = 0;
      *param_1 = 0x3461346d;
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      lVar3 = param_2[2];
      uVar1 = param_2[3];
      plVar5 = param_2;
      if (0xf < uVar1) {
        plVar5 = (longlong *)*param_2;
      }
      if (lVar3 == 0xc) {
        lVar8 = *plVar5 + -0x656c69735f707375;
        if (lVar8 == 0) {
          lVar8 = (ulonglong)*(uint *)(plVar5 + 1) - 0x7265636e;
        }
        if (lVar8 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 5;
          param_1[5] = 0;
          param_1[6] = 0xf;
          param_1[7] = 0;
          *param_1 = DAT_1806f0528;
          *(undefined1 *)(param_1 + 1) = DAT_1806f052c;
          *(undefined1 *)((longlong)param_1 + 5) = 0;
          goto LAB_1800d5d3b;
        }
      }
      plVar5 = param_2;
      if (0xf < uVar1) {
        plVar5 = (longlong *)*param_2;
      }
      if (lVar3 == 7) {
        iVar6 = (int)*plVar5 + -0x32706b68;
        if ((iVar6 == 0) && (iVar6 = *(ushort *)((longlong)plVar5 + 4) - 0x3030, iVar6 == 0)) {
          iVar6 = *(byte *)((longlong)plVar5 + 6) - 0x30;
        }
        if (iVar6 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 5;
          param_1[5] = 0;
          param_1[6] = 0xf;
          param_1[7] = 0;
          *param_1 = DAT_1806f0560;
          *(undefined1 *)(param_1 + 1) = DAT_1806f0564;
          *(undefined1 *)((longlong)param_1 + 5) = 0;
          goto LAB_1800d5d3b;
        }
      }
      plVar5 = param_2;
      if (0xf < uVar1) {
        plVar5 = (longlong *)*param_2;
      }
      if (lVar3 == 6) {
        iVar6 = (int)*plVar5 + -0x67616564;
        if (iVar6 == 0) {
          iVar6 = *(ushort *)((longlong)plVar5 + 4) - 0x656c;
        }
        if (iVar6 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0xc;
          param_1[5] = 0;
          param_1[6] = 0xf;
          param_1[7] = 0;
          *(undefined8 *)param_1 = s_desert_eagle_1806f0548._0_8_;
          param_1[2] = s_desert_eagle_1806f0548._8_4_;
          *(undefined1 *)(param_1 + 3) = 0;
          goto LAB_1800d5d3b;
        }
      }
      plVar5 = param_2;
      if (0xf < uVar1) {
        plVar5 = (longlong *)*param_2;
      }
      if (lVar3 == 5) {
        iVar6 = (int)*plVar5 + -0x74696c65;
        if (iVar6 == 0) {
          iVar6 = *(byte *)((longlong)plVar5 + 4) - 0x65;
        }
        if (iVar6 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          param_1[4] = 0xd;
          param_1[5] = 0;
          param_1[6] = 0xf;
          param_1[7] = 0;
          *(undefined8 *)param_1 = s_dual_berettas_1806f0578._0_8_;
          param_1[2] = s_dual_berettas_1806f0578._8_4_;
          *(char *)(param_1 + 3) = s_dual_berettas_1806f0578[0xc];
          *(undefined1 *)((longlong)param_1 + 0xd) = 0;
          goto LAB_1800d5d3b;
        }
      }
      if ((ulonglong)param_2[3] < 0x10) {
        plVar5 = param_2;
      }
      else {
        plVar5 = (longlong *)*param_2;
      }
      if ((param_2[2] == 8) && (*plVar5 == 0x7265766c6f766572)) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 2;
        param_1[5] = 0;
        param_1[6] = 0xf;
        param_1[7] = 0;
        *(undefined2 *)param_1 = 0x3872;
        *(undefined1 *)((longlong)param_1 + 2) = 0;
      }
      else {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        iVar6 = *(int *)((longlong)param_2 + 4);
        lVar3 = param_2[1];
        iVar2 = *(int *)((longlong)param_2 + 0xc);
        *param_1 = (int)*param_2;
        param_1[1] = iVar6;
        param_1[2] = (int)lVar3;
        param_1[3] = iVar2;
        lVar3 = param_2[3];
        *(longlong *)(param_1 + 4) = param_2[2];
        *(longlong *)(param_1 + 6) = lVar3;
        *(undefined1 *)param_2 = 0;
        param_2[2] = 0;
        param_2[3] = 0xf;
      }
    }
  }
LAB_1800d5d3b:
  FUN_18000f890(param_2);
  return param_1;
}



/* ===== 1800d5d70 FUN_1800d5d70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d5d70(undefined8 param_1)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  uint uVar8;
  DWORD DVar9;
  char ****ppppcVar10;
  char ****ppppcVar11;
  undefined8 uVar12;
  char ****ppppcVar13;
  undefined4 *puVar14;
  char ****ppppcVar15;
  char ****ppppcVar16;
  char ****ppppcVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  char ****unaff_R15;
  float fVar21;
  undefined4 uVar22;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  char ****local_118;
  DWORD local_110;
  undefined4 uStack_10c;
  char ***local_108;
  char ***pppcStack_100;
  char ****local_f8;
  undefined8 local_f0;
  char ****local_e8;
  char ****local_e0;
  char ***pppcStack_d8;
  char ***local_d0;
  char ****local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  char ****local_78 [2];
  char ****local_68;
  ulonglong local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  puVar19 = auStack_138;
  local_38 = DAT_180919500 ^ (ulonglong)auStack_138;
  if ((DAT_180920e48 == '\0') && (DAT_180920eac == '\0')) goto LAB_1800d63f1;
  ppppcVar10 = (char ****)FUN_180273f90(param_1,"userid");
  puVar19 = auStack_138;
  if (ppppcVar10 == (char ****)0x0) goto LAB_1800d63f1;
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_110);
    ppppcVar11 = (char ****)CONCAT44(uStack_10c,local_110);
  }
  else {
    ppppcVar11 = DAT_181108a00;
  }
  puVar19 = auStack_138;
  if ((ppppcVar11 != (char ****)0x0) && (ppppcVar10 == ppppcVar11)) goto LAB_1800d63f1;
  fVar21 = (float)FUN_180273cc0(param_1,&DAT_1806e0c0c);
  uVar20 = (uint)fVar21;
  ppppcVar15 = (char ****)(ulonglong)uVar20;
  if ((ppppcVar11 == (char ****)0x0) || (DAT_180ca09f4 == 0)) {
    uVar8 = 0;
  }
  else {
    bVar7 = FUN_180011220((undefined1 *)((longlong)ppppcVar11 + (ulonglong)DAT_180ca09f4));
    uVar8 = (uint)bVar7;
  }
  puVar19 = auStack_138;
  if (uVar20 == uVar8) {
    cVar2 = DAT_180920e4a;
  }
  else {
    cVar2 = DAT_180920e49;
  }
  if (cVar2 == '\0') goto LAB_1800d63f1;
  FUN_180273d10(local_78,param_1,"weapon");
  puVar19 = auStack_138;
  if (local_68 != (char ****)0x0) {
    DVar9 = GetTickCount();
    for (puVar18 = DAT_180cd0e28; local_110 = DVar9, puVar18 != DAT_180cd0e30;
        puVar18 = puVar18 + 0xd) {
      if ((char ****)*puVar18 == ppppcVar10) {
        uVar12 = FUN_180024b50(&local_108,local_78);
        puVar14 = (undefined4 *)FUN_1800d56a0(local_58,uVar12);
        puVar1 = (undefined8 *)puVar18[7];
        if (puVar1 == (undefined8 *)puVar18[8]) {
          FUN_18009bb20(puVar18 + 6,puVar1,puVar14);
        }
        else {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          uVar22 = puVar14[1];
          uVar4 = puVar14[2];
          uVar5 = puVar14[3];
          *(undefined4 *)puVar1 = *puVar14;
          *(undefined4 *)((longlong)puVar1 + 4) = uVar22;
          *(undefined4 *)(puVar1 + 1) = uVar4;
          *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
          uVar12 = *(undefined8 *)(puVar14 + 6);
          puVar1[2] = *(undefined8 *)(puVar14 + 4);
          puVar1[3] = uVar12;
          *(undefined8 *)(puVar14 + 4) = 0;
          *(undefined8 *)(puVar14 + 6) = 0xf;
          *(undefined1 *)puVar14 = 0;
          puVar18[7] = puVar18[7] + 0x20;
        }
        FUN_18000f890(local_58);
        uVar12 = FUN_180024b50(local_58,local_78);
        puVar14 = (undefined4 *)FUN_1800d5570(&local_108,uVar12);
        puVar1 = (undefined8 *)puVar18[10];
        if (puVar1 == (undefined8 *)puVar18[0xb]) {
          FUN_18009bb20(puVar18 + 9,puVar1,puVar14);
        }
        else {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          uVar22 = puVar14[1];
          uVar4 = puVar14[2];
          uVar5 = puVar14[3];
          *(undefined4 *)puVar1 = *puVar14;
          *(undefined4 *)((longlong)puVar1 + 4) = uVar22;
          *(undefined4 *)(puVar1 + 1) = uVar4;
          *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
          uVar12 = *(undefined8 *)(puVar14 + 6);
          puVar1[2] = *(undefined8 *)(puVar14 + 4);
          puVar1[3] = uVar12;
          *(undefined8 *)(puVar14 + 4) = 0;
          *(undefined8 *)(puVar14 + 6) = 0xf;
          *(undefined1 *)puVar14 = 0;
          puVar18[10] = puVar18[10] + 0x20;
        }
        FUN_18000f890(&local_108);
        *(DWORD *)(puVar18 + 0xc) = DVar9;
        FUN_1800b0220(puVar18 + 1,puVar18[7] + -0x20);
        puVar19 = auStack_138;
        goto LAB_1800d63e8;
      }
    }
    pppcStack_d8 = (char ***)0x0;
    local_d0 = (char ***)0x0;
    local_c8 = (char ****)0xf;
    local_e0 = (char ****)0x0;
    local_c0 = 0;
    local_b8 = 0;
    puStack_b0 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    local_98 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    local_88 = 0;
    local_118 = ppppcVar10;
    local_e8 = ppppcVar10;
    ppppcVar11 = (char ****)FUN_1803a0620(&local_118,local_58);
    if (&local_e0 == (char *****)ppppcVar11) {
LAB_1800d5f83:
      FUN_18000f890(local_58);
      ppppcVar13 = local_c8;
      ppppcVar10 = (char ****)0x7fffffffffffffff;
      if (local_d0 == (char ***)0x0) {
        if (local_c8 < &DAT_00000007) {
          if ((char ****)(0x7fffffffffffffff - ((ulonglong)local_c8 >> 1)) < local_c8) {
            ppppcVar11 = (char ****)0x7fffffffffffffff;
          }
          else {
            ppppcVar17 = (char ****)(((ulonglong)local_c8 >> 1) + (longlong)local_c8);
            ppppcVar11 = (char ****)0xf;
            if ((char ****)0xf < ppppcVar17) {
              ppppcVar11 = ppppcVar17;
            }
          }
          unaff_R15 = (char ****)FUN_18000fb70((undefined1 *)((longlong)ppppcVar11 + 1));
          local_d0 = (char ***)0x7;
          *(undefined4 *)unaff_R15 = s_someone_1806e7908._0_4_;
          *(undefined2 *)((longlong)unaff_R15 + 4) = s_someone_1806e7908._4_2_;
          *(char *)((longlong)unaff_R15 + 6) = s_someone_1806e7908[6];
          *(char *)((longlong)unaff_R15 + 7) = '\0';
          local_c8 = ppppcVar11;
          if ((char ****)0xf < ppppcVar13) {
            ppppcVar17 = (char ****)((longlong)ppppcVar13 + 1);
            ppppcVar16 = local_e0;
            if ((char ****)0xfff < ppppcVar17) {
              ppppcVar16 = (char ****)local_e0[-1];
              if ((char *)0x1f < (char *)((longlong)local_e0 + (-8 - (longlong)ppppcVar16)))
              goto LAB_1800d6208;
              ppppcVar17 = ppppcVar13 + 5;
            }
            thunk_FUN_1803d64e0(ppppcVar16,ppppcVar17);
          }
          local_e0 = unaff_R15;
        }
        else {
          ppppcVar11 = (char ****)&local_e0;
          if ((char ****)0xf < local_c8) {
            ppppcVar11 = local_e0;
          }
          local_d0 = (char ***)0x7;
          FUN_180540530(ppppcVar11,"someone",7);
          *(char *)((longlong)ppppcVar11 + 7) = '\0';
        }
      }
      uVar12 = FUN_180024b50(local_58,local_78);
      uVar12 = FUN_1800d56a0(&local_108,uVar12);
      FUN_1800b0220(&local_e0,uVar12);
      FUN_18000f890(&local_108);
      puVar19 = auStack_138;
      local_108 = (char ***)0x0;
      pppcStack_100 = (char ***)0x0;
      local_f8 = (char ****)0x0;
      local_f0 = 0;
      unaff_R15 = (char ****)local_78;
      if (0xf < local_60) {
        unaff_R15 = local_78[0];
      }
      local_c0 = uVar20;
      if ((char ****)0x7fffffffffffffff < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      ppppcVar13 = (char ****)0x16;
      ppppcVar11 = local_68;
      puVar6 = auStack_138;
      ppppcVar15 = local_78[0];
      if ((char ****)0xf < local_68) goto LAB_1800d620f;
      local_f8 = local_68;
      local_f0 = 0xf;
      local_108 = *unaff_R15;
      pppcStack_100 = unaff_R15[1];
    }
    else {
      if (local_c8 < &DAT_00000010) {
LAB_1800d5f3e:
        local_e0 = (char ****)*ppppcVar11;
        pppcStack_d8 = ppppcVar11[1];
        local_d0 = ppppcVar11[2];
        local_c8 = (char ****)ppppcVar11[3];
        ppppcVar11[2] = (char ***)0x0;
        ppppcVar11[3] = (char ***)0xf;
        *(undefined1 *)ppppcVar11 = 0;
        goto LAB_1800d5f83;
      }
      ppppcVar17 = (char ****)((longlong)local_c8 + 1);
      ppppcVar13 = local_e0;
      if (ppppcVar17 < (char ****)0x1000) {
LAB_1800d5f39:
        thunk_FUN_1803d64e0(ppppcVar13,ppppcVar17);
        goto LAB_1800d5f3e;
      }
      ppppcVar13 = (char ****)local_e0[-1];
      if ((char *)((longlong)local_e0 + (-8 - (longlong)ppppcVar13)) < (char *)0x20) {
        ppppcVar17 = local_c8 + 5;
        goto LAB_1800d5f39;
      }
LAB_1800d6208:
      pcVar3 = (code *)swi(0x29);
      ppppcVar13 = (char ****)(*pcVar3)(5);
      puVar6 = auStack_130;
LAB_1800d620f:
      puVar19 = puVar6;
      ppppcVar17 = (char ****)((ulonglong)ppppcVar11 | 0xf);
      if (ppppcVar10 < ppppcVar17) {
        ppppcVar17 = ppppcVar10;
      }
      else if (ppppcVar17 < ppppcVar13) {
        ppppcVar17 = ppppcVar13;
      }
      *(undefined8 *)(puVar19 + -8) = 0x1800d6230;
      uVar12 = FUN_18000fb70((undefined1 *)((longlong)ppppcVar17 + 1));
      *(undefined8 *)(puVar19 + 0x30) = uVar12;
      *(char *****)(puVar19 + 0x40) = ppppcVar11;
      *(char *****)(puVar19 + 0x48) = ppppcVar17;
      *(undefined8 *)(puVar19 + -8) = 0x1800d624e;
      FUN_180540530(uVar12,unaff_R15,(undefined1 *)((longlong)ppppcVar11 + 1));
    }
    *(undefined8 *)(puVar19 + -8) = 0x1800d625c;
    puVar14 = (undefined4 *)FUN_1800d56a0(local_58,puVar19 + 0x30);
    if (puStack_b0 == local_a8) {
      *(undefined8 *)(puVar19 + -8) = 0x1800d62a5;
      FUN_18009bb20(&local_b8,puStack_b0,puVar14);
    }
    else {
      *puStack_b0 = 0;
      puStack_b0[1] = 0;
      puStack_b0[2] = 0;
      puStack_b0[3] = 0;
      uVar22 = puVar14[1];
      uVar4 = puVar14[2];
      uVar5 = puVar14[3];
      *(undefined4 *)puStack_b0 = *puVar14;
      *(undefined4 *)((longlong)puStack_b0 + 4) = uVar22;
      *(undefined4 *)(puStack_b0 + 1) = uVar4;
      *(undefined4 *)((longlong)puStack_b0 + 0xc) = uVar5;
      uVar12 = *(undefined8 *)(puVar14 + 6);
      puStack_b0[2] = *(undefined8 *)(puVar14 + 4);
      puStack_b0[3] = uVar12;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      puStack_b0 = puStack_b0 + 4;
    }
    *(undefined8 *)(puVar19 + -8) = 0x1800d62af;
    FUN_18000f890(local_58);
    *(undefined8 *)(puVar19 + 0x30) = 0;
    *(undefined8 *)(puVar19 + 0x38) = 0;
    *(undefined8 *)(puVar19 + 0x40) = 0;
    *(undefined8 *)(puVar19 + 0x48) = 0;
    ppppcVar13 = (char ****)local_78;
    if (0xf < local_60) {
      ppppcVar13 = ppppcVar15;
    }
    if (ppppcVar10 < ppppcVar11) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar19 + -8) = 0x1800d641e;
      FUN_180011990();
    }
    if (ppppcVar11 < (char ****)0x10) {
      *(char *****)(puVar19 + 0x40) = ppppcVar11;
      *(undefined8 *)(puVar19 + 0x48) = 0xf;
      uVar22 = *(undefined4 *)((longlong)ppppcVar13 + 4);
      uVar4 = *(undefined4 *)(ppppcVar13 + 1);
      uVar5 = *(undefined4 *)((longlong)ppppcVar13 + 0xc);
      *(undefined4 *)(puVar19 + 0x30) = *(undefined4 *)ppppcVar13;
      *(undefined4 *)(puVar19 + 0x34) = uVar22;
      *(undefined4 *)(puVar19 + 0x38) = uVar4;
      *(undefined4 *)(puVar19 + 0x3c) = uVar5;
    }
    else {
      ppppcVar15 = (char ****)((ulonglong)ppppcVar11 | 0xf);
      if ((ppppcVar15 <= ppppcVar10) && (ppppcVar10 = ppppcVar15, ppppcVar15 < (char ****)0x16)) {
        ppppcVar10 = (char ****)0x16;
      }
      *(undefined8 *)(puVar19 + -8) = 0x1800d631b;
      uVar12 = FUN_18000fb70((undefined1 *)((longlong)ppppcVar10 + 1));
      *(undefined8 *)(puVar19 + 0x30) = uVar12;
      *(char *****)(puVar19 + 0x40) = ppppcVar11;
      *(char *****)(puVar19 + 0x48) = ppppcVar10;
      *(undefined8 *)(puVar19 + -8) = 0x1800d6339;
      FUN_180540530(uVar12,ppppcVar13,(undefined1 *)((longlong)ppppcVar11 + 1));
    }
    *(undefined8 *)(puVar19 + -8) = 0x1800d6347;
    puVar14 = (undefined4 *)FUN_1800d5570(local_58,puVar19 + 0x30);
    if (local_98 == puStack_90) {
      *(undefined8 *)(puVar19 + -8) = 0x1800d6390;
      FUN_18009bb20(&uStack_a0,local_98,puVar14);
    }
    else {
      *local_98 = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      local_98[3] = 0;
      uVar22 = puVar14[1];
      uVar4 = puVar14[2];
      uVar5 = puVar14[3];
      *(undefined4 *)local_98 = *puVar14;
      *(undefined4 *)((longlong)local_98 + 4) = uVar22;
      *(undefined4 *)(local_98 + 1) = uVar4;
      *(undefined4 *)((longlong)local_98 + 0xc) = uVar5;
      uVar12 = *(undefined8 *)(puVar14 + 6);
      local_98[2] = *(undefined8 *)(puVar14 + 4);
      local_98[3] = uVar12;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      local_98 = local_98 + 4;
    }
    *(undefined8 *)(puVar19 + -8) = 0x1800d639a;
    uVar22 = FUN_18000f890(local_58);
    local_88 = *(undefined4 *)(puVar19 + 0x28);
    if (DAT_180cd0e30 == DAT_180cd0e38) {
      *(undefined8 *)(puVar19 + -8) = 0x1800d63ca;
      FUN_1800d6820(uVar22,DAT_180cd0e30,puVar19 + 0x50);
    }
    else {
      *(undefined8 *)(puVar19 + -8) = 0x1800d63bb;
      FUN_1800d6a20();
      DAT_180cd0e30 = DAT_180cd0e30 + 0xd;
    }
    *(undefined8 *)(puVar19 + -8) = 0x1800d63d4;
    FUN_1800288b0(&uStack_a0);
    *(undefined8 *)(puVar19 + -8) = 0x1800d63dd;
    FUN_1800288b0(&local_b8);
    *(undefined8 *)(puVar19 + -8) = 0x1800d63e7;
    FUN_18000f890(puVar19 + 0x58);
  }
LAB_1800d63e8:
  *(undefined8 *)(puVar19 + -8) = 0x1800d63f1;
  FUN_18000f890(local_78);
LAB_1800d63f1:
  *(undefined8 *)(puVar19 + -8) = 0x1800d63fd;
  return;
}



/* ===== 1800d6430 FUN_1800d6430 ===== */

void FUN_1800d6430(longlong param_1)

{
  FUN_1800288b0(param_1 + 0x48);
  FUN_1800288b0(param_1 + 0x30);
  FUN_18000f890(param_1 + 8);
  return;
}



/* ===== 1800d6460 FUN_1800d6460 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d6460(int param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  DWORD DVar3;
  longlong lVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *_Str;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  ulonglong uStack_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  puVar8 = DAT_180cd0e30;
  if (param_1 == 0xc) {
    local_50 = DAT_180919500 ^ (ulonglong)auStack_118;
    if ((DAT_180920e48 == '\0') && (DAT_180920eac == '\0')) {
      puVar12 = DAT_180cd0e28;
      if (DAT_180cd0e28 != DAT_180cd0e30) {
        do {
          FUN_1800288b0(puVar12 + 9);
          FUN_1800288b0(puVar12 + 6);
          FUN_18000f890(puVar12 + 1);
          puVar12 = puVar12 + 0xd;
        } while (puVar12 != puVar8);
        DAT_180cd0e30 = DAT_180cd0e28;
      }
    }
    else {
      if (((DAT_180ca3bc4 == '\0') && (DAT_1809620c0 != 0)) && (lVar4 = FUN_18000f3a0(), lVar4 != 0)
         ) {
        DAT_180ca3bc4 = FUN_180273b60("item_purchase",FUN_1800d5d70);
      }
      DVar3 = GetTickCount();
      puVar8 = DAT_180cd0e30;
      puVar12 = DAT_180cd0e28;
      if (DAT_180cd0e28 != DAT_180cd0e30) {
        do {
          if (DVar3 - *(int *)(puVar12 + 0xc) < 800) {
            puVar12 = puVar12 + 0xd;
          }
          else {
            uStack_c8 = 0;
            local_c0 = 0;
            local_b8 = 0xf;
            local_d0 = 0;
            puVar8 = (undefined8 *)puVar12[7];
            puVar13 = (undefined8 *)puVar12[6];
            if (puVar13 != puVar8) {
              do {
                if (local_c0 != 0) {
                  FUN_1800134a0(&local_d0,&DAT_1806f0594,2);
                }
                if ((ulonglong)puVar13[3] < 0x10) {
                  puVar9 = puVar13;
                }
                else {
                  puVar9 = (undefined8 *)*puVar13;
                }
                FUN_1800134a0(&local_d0,puVar9,puVar13[2]);
                puVar13 = puVar13 + 4;
              } while (puVar13 != puVar8);
            }
            if (DAT_180920e48 != '\0') {
              if (*(int *)(puVar12 + 5) == 2) {
                _Str = "[T] ";
              }
              else {
                _Str = "";
                if (*(int *)(puVar12 + 5) == 3) {
                  _Str = "[CT] ";
                }
              }
              local_b0 = 0;
              uStack_a8 = 0;
              local_a0 = 0;
              local_98 = 0;
              sVar5 = strlen(_Str);
              FUN_1800133a0(&local_b0,_Str,sVar5);
              uVar6 = FUN_1800667a0(local_70,&local_b0,puVar12 + 1);
              puVar7 = (ulonglong *)FUN_1800134a0(uVar6," bought ",8);
              local_f0 = *puVar7;
              uStack_e8 = puVar7[1];
              local_e0 = puVar7[2];
              uStack_d8 = puVar7[3];
              puVar7[2] = 0;
              puVar7[3] = 0xf;
              *(undefined1 *)puVar7 = 0;
              uVar6 = FUN_1800667a0(local_90,&local_f0,&local_d0);
              FUN_1800d84f0(uVar6,&DAT_180920e4b);
              FUN_18000f890(local_90);
              if (0xf < uStack_d8) {
                uVar10 = uStack_d8 + 1;
                uVar11 = local_f0;
                if (0xfff < uVar10) {
                  uVar11 = *(ulonglong *)(local_f0 - 8);
                  if (0x1f < (local_f0 - uVar11) - 8) {
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    goto LAB_1800d6816;
                  }
                  uVar10 = uStack_d8 + 0x28;
                }
                thunk_FUN_1803d64e0(uVar11,uVar10);
              }
              local_e0 = 0;
              uStack_d8 = 0xf;
              local_f0 = local_f0 & 0xffffffffffffff00;
              FUN_18000f890(local_70);
              if (0xf < local_98) {
                uVar11 = local_98 + 1;
                lVar4 = local_b0;
                if (0xfff < uVar11) {
                  lVar4 = *(longlong *)(local_b0 + -8);
                  if (0x1f < (local_b0 - lVar4) - 8U) {
LAB_1800d6816:
                    pcVar1 = (code *)swi(0x29);
                    (*pcVar1)(5);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  uVar11 = local_98 + 0x28;
                }
                thunk_FUN_1803d64e0(lVar4,uVar11);
              }
            }
            FUN_1800b05b0(puVar12 + 1,puVar12 + 9);
            puVar2 = DAT_180cd0e30;
            puVar8 = puVar12;
            puVar9 = DAT_180cd0e30;
            puVar13 = puVar12;
            while( true ) {
              puVar13 = puVar13 + 0xd;
              DAT_180cd0e30 = puVar9;
              if (puVar13 == puVar2) break;
              *puVar8 = *puVar13;
              FUN_18002ba60(puVar8 + 1,puVar13 + 1);
              *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar13 + 5);
              FUN_180067380(puVar8 + 6,puVar13 + 6);
              FUN_180067380(puVar8 + 9,puVar13 + 9);
              *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar13 + 0xc);
              puVar8 = puVar8 + 0xd;
              puVar9 = DAT_180cd0e30;
            }
            FUN_1800288b0(puVar9 + -4);
            FUN_1800288b0(puVar9 + -7);
            FUN_18000f890(puVar9 + -0xc);
            DAT_180cd0e30 = DAT_180cd0e30 + -0xd;
            FUN_18000f890(&local_d0);
            puVar8 = DAT_180cd0e30;
          }
        } while (puVar12 != puVar8);
      }
    }
  }
  return;
}



/* ===== 1800d6820 FUN_1800d6820 ===== */

longlong FUN_1800d6820(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  
  uVar6 = DAT_180cd0e28;
  lVar3 = ((longlong)(DAT_180cd0e30 - DAT_180cd0e28) >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar7 = 0x276276276276276;
  if (lVar3 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar3 + 1;
  uVar5 = ((longlong)(DAT_180cd0e38 - DAT_180cd0e28) >> 3) * 0x4ec4ec4ec4ec4ec5;
  if (uVar5 <= 0x276276276276276 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x276276276276276 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  lVar4 = FUN_18000fb70(uVar7 * 0x68);
  lVar11 = ((longlong)(param_2 - uVar6) / 0x68) * 0x68 + lVar4;
  lVar3 = lVar11 + 0x68;
  local_78 = &DAT_180cd0e28;
  local_70 = lVar4;
  local_68 = uVar7;
  local_60 = lVar3;
  local_58 = lVar3;
  FUN_1800d6a20(-((longlong)(param_2 - uVar6) >> 0x3f),lVar11,param_3);
  uVar6 = DAT_180cd0e28;
  lVar10 = lVar4;
  if (param_2 != DAT_180cd0e30) {
    FUN_1800d6a80(DAT_180cd0e28,param_2,lVar4);
    uVar6 = param_2;
    lVar10 = lVar3;
  }
  puVar8 = auStack_98;
  puVar9 = auStack_98;
  FUN_1800d6a80(uVar6,DAT_180cd0e30,lVar10);
  uVar5 = DAT_180cd0e30;
  uVar6 = DAT_180cd0e28;
  if (DAT_180cd0e28 == 0) goto LAB_1800d69da;
  for (; uVar6 != uVar5; uVar6 = uVar6 + 0x68) {
    FUN_1800288b0(uVar6 + 0x48);
    FUN_1800288b0(uVar6 + 0x30);
    FUN_18000f890(uVar6 + 8);
  }
  uVar6 = DAT_180cd0e28;
  if ((ulonglong)(((longlong)(DAT_180cd0e38 - DAT_180cd0e28) >> 3) * 8) < 0x1000) {
LAB_1800d69d2:
    puVar9 = puVar8;
  }
  else {
    uVar6 = *(ulonglong *)(DAT_180cd0e28 - 8);
    uVar5 = (DAT_180cd0e28 - uVar6) - 8;
    if (0x1f < uVar5) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar8 = auStack_90;
      uVar6 = uVar5;
      goto LAB_1800d69d2;
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x1800d69da;
  thunk_FUN_1803d64e0(uVar6);
LAB_1800d69da:
  DAT_180cd0e28 = lVar4;
  DAT_180cd0e30 = uVar1 * 0x68 + lVar4;
  DAT_180cd0e38 = lVar4 + uVar7 * 0x68;
  return lVar11;
}



/* ===== 1800d6a20 FUN_1800d6a20 ===== */

void FUN_1800d6a20(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_3;
  FUN_180024b50(param_2 + 1,param_3 + 1);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_3 + 5);
  FUN_18006d7e0(param_2 + 6,param_3 + 6);
  FUN_18006d7e0(param_2 + 9,param_3 + 9);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  return;
}



/* ===== 1800d6a80 FUN_1800d6a80 ===== */

undefined8 * FUN_1800d6a80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xd) {
    *param_3 = *param_1;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar1 = param_1[2];
    param_3[1] = param_1[1];
    param_3[2] = uVar1;
    uVar1 = param_1[4];
    param_3[3] = param_1[3];
    param_3[4] = uVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    param_1[4] = 0xf;
    *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 5);
    uVar1 = param_1[8];
    uVar2 = param_1[7];
    uVar3 = param_1[6];
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_3[6] = uVar3;
    param_3[7] = uVar2;
    param_3[8] = uVar1;
    uVar1 = param_1[9];
    uVar2 = param_1[0xb];
    uVar3 = param_1[10];
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_3[9] = uVar1;
    param_3[10] = uVar3;
    param_3[0xb] = uVar2;
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    param_3 = param_3 + 0xd;
  }
  return param_3;
}



/* ===== 1800d6b50 FUN_1800d6b50 ===== */

void FUN_1800d6b50(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  for (lVar4 = *(longlong *)(param_1 + 0x18); lVar4 != lVar1; lVar4 = lVar4 + 0x68) {
    FUN_1800288b0(lVar4 + 0x48);
    FUN_1800288b0(lVar4 + 0x30);
    FUN_18000f890(lVar4 + 8);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 0x68;
  lVar4 = *(longlong *)(param_1 + 8);
  if (0xfff < uVar3) {
    if ((lVar4 - *(longlong *)(lVar4 + -8)) - 8U < 0x20) {
      thunk_FUN_1803d64e0(*(longlong *)(lVar4 + -8),uVar3 + 0x27);
      return;
    }
    pcVar2 = (code *)swi(0x29);
    lVar4 = (*pcVar2)(5);
  }
  thunk_FUN_1803d64e0(lVar4);
  return;
}



/* ===== 1800d6c00 FUN_1800d6c00 ===== */

undefined8 FUN_1800d6c00(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (((DAT_180961fa0 != (code *)0x0) && (param_1 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(*DAT_180961fa0)(0), plVar2 != (longlong *)0x0)) {
    lVar4 = *plVar2;
    cVar1 = (**(code **)(lVar4 + 0x38))(plVar2);
    if (((cVar1 == '\0') && (cVar1 = (**(code **)(lVar4 + 0x48))(plVar2), cVar1 == '\0')) &&
       (lVar3 = (**(code **)(*param_1 + 0x208))(param_1), lVar3 != 0)) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 + 1;
        if (*(char *)(lVar3 + lVar5) != (&DAT_1806f05c0)[lVar5]) {
          lVar4 = (**(code **)(lVar4 + 8))(plVar2);
          if (lVar4 == 0) {
            return 0;
          }
          for (uVar7 = 0; (uVar7 < 0x200 && (*(char *)(uVar7 + lVar4) != '\0')); uVar7 = uVar7 + 1)
          {
          }
          if ((uVar7 == 0) || (0x1ff < uVar7)) {
            return 0;
          }
          FUN_180540530(param_2,lVar4,uVar7,param_4,uVar7);
          *(undefined1 *)(uVar7 + param_2) = 0;
          return 1;
        }
        lVar5 = lVar6;
      } while (lVar6 != 8);
    }
  }
  return 0;
}



/* ===== 1800d6d10 FUN_1800d6d10 ===== */

undefined8 FUN_1800d6d10(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x198))(param_1,0,param_2,0,0x7ff8000000000000,0);
  return 1;
}



/* ===== 1800d6d50 FUN_1800d6d50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d6d50(void)

{
  char cVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  longlong lVar4;
  size_t sVar5;
  undefined8 **_Buf1;
  undefined1 auStack_238 [32];
  char local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_238;
  FUN_180540170(local_218,0,0x200);
  lVar4 = DAT_180cd0e40;
  if (DAT_180cd0e40 == 0) {
    hModule = GetModuleHandleA("engine2.dll");
    lVar4 = 0;
    if (hModule != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(hModule,"CreateInterface");
      lVar4 = 0;
      if (pFVar3 != (FARPROC)0x0) {
        lVar4 = (*pFVar3)("Source2EngineToClient001",0);
        DAT_180cd0e40 = lVar4;
      }
    }
  }
  cVar1 = FUN_1800d6c00(lVar4,local_218);
  if (cVar1 != '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_180cd0e48);
    sVar5 = strlen(local_218);
    _Buf1 = &DAT_1809ebbd0;
    if (0xf < DAT_1809ebbe8) {
      _Buf1 = (undefined8 **)DAT_1809ebbd0;
    }
    if ((DAT_1809ebbe0 == sVar5) &&
       ((DAT_1809ebbe0 == 0 || (iVar2 = memcmp(_Buf1,local_218,DAT_1809ebbe0), iVar2 == 0)))) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cd0e48);
    }
    else {
      FUN_180029840(&DAT_1809ebbd0,local_218,sVar5);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180cd0e48);
      FUN_1802b2560("[retry] last server | %s",local_218);
    }
  }
  return;
}



/* ===== 1800d6ea0 FUN_1800d6ea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d6ea0(void)

{
  code *pcVar1;
  char cVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 **ppuVar6;
  undefined8 ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined8 ***local_58 [3];
  ulonglong local_40;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + 1;
  UNLOCK();
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0xf;
  local_38[0] = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180cd0e48);
  ppuVar6 = &DAT_1809ebbd0;
  if (0xf < DAT_1809ebbe8) {
    ppuVar6 = (undefined8 **)DAT_1809ebbd0;
  }
  FUN_180029840(local_38,ppuVar6,DAT_1809ebbe0);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180cd0e48);
  if (local_38[2] == 0) {
    FUN_1802b2560("[retry] no server to reconnect to");
    goto LAB_1800d6fe2;
  }
  FUN_180066a20(local_58,"connect ",local_38);
  if (DAT_180cd0e40 == 0) {
    hModule = GetModuleHandleA("engine2.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(hModule,"CreateInterface");
      if (pFVar3 != (FARPROC)0x0) {
        DAT_180cd0e40 = (*pFVar3)("Source2EngineToClient001",0);
        if (DAT_180cd0e40 != 0) goto LAB_1800d6f95;
      }
    }
LAB_1800d6fb9:
    pcVar4 = "[error] retry | engine client unavailable, \"%s\" not sent";
  }
  else {
LAB_1800d6f95:
    pppuVar7 = local_58;
    if (0xf < local_40) {
      pppuVar7 = local_58[0];
    }
    cVar2 = FUN_1800d6d10(DAT_180cd0e40,pppuVar7);
    pcVar4 = "[retry] %s";
    if (cVar2 == '\0') goto LAB_1800d6fb9;
  }
  pppuVar7 = local_58;
  if (0xf < local_40) {
    pppuVar7 = local_58[0];
  }
  FUN_1802b2560(pcVar4,pppuVar7);
  FUN_18000f890(local_58);
LAB_1800d6fe2:
  if (0xf < (ulonglong)local_38[3]) {
    uVar8 = local_38[3] + 1;
    lVar5 = local_38[0];
    if (0xfff < uVar8) {
      lVar5 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar5) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar8 = local_38[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar5,uVar8);
  }
  LOCK();
  DAT_180cd1aa0 = DAT_180cd1aa0 + -1;
  UNLOCK();
  return;
}



/* ===== 1800d7040 FUN_1800d7040 ===== */

void FUN_1800d7040(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  char *pcVar4;
  
  lVar1 = DAT_1809ebbc0;
  LOCK();
  DAT_1809ebbc0 = 0xffff;
  UNLOCK();
  if (lVar1 == 0xffff) {
    DAT_1809ebbc0 = 0xffff;
    return;
  }
  if ((DAT_1811160f0 != 0) ||
     (((hModule = GetModuleHandleA("tier0.dll"), hModule != (HMODULE)0x0 &&
       (pFVar3 = GetProcAddress(hModule,"CreateInterface"), pFVar3 != (FARPROC)0x0)) &&
      (DAT_1811160f0 = (*pFVar3)("VEngineCvar007",0), DAT_1811160f0 != 0)))) {
    cVar2 = FUN_180264b50(DAT_1811160f0,lVar1);
    pcVar4 = "[retry] console command removed | %s";
    if (cVar2 != '\0') goto LAB_1800d70c9;
  }
  pcVar4 = "[error] retry | console command removal faulted | %s";
LAB_1800d70c9:
  FUN_1802b2560(pcVar4,param_1);
  return;
}



/* ===== 1800d70e0 FUN_1800d70e0 ===== */

undefined8 FUN_1800d70e0(void)

{
  DAT_180cd0e54 = *(undefined4 *)(DAT_180cd0e60 + 0x30);
  return CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(DAT_180cd0e60 + 0x30) >> 8),1);
}



/* ===== 1800d7100 FUN_1800d7100 ===== */

undefined8 FUN_1800d7100(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_180cd0e60;
  *(undefined4 *)(DAT_180cd0e60 + 0x30) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



/* ===== 1800d7120 FUN_1800d7120 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800d7120(undefined8 *param_1,char ****param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  size_t sVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  char ****_Buf2;
  ulonglong uVar8;
  char ****ppppcVar9;
  undefined1 *puVar10;
  ulonglong unaff_RBP;
  ulonglong unaff_R14;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [32];
  ulonglong local_80 [4];
  char ****local_60;
  longlong lStack_58;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_180919500 ^ (ulonglong)auStack_a8;
  uVar6 = 0;
  puVar10 = auStack_a8;
  if ((param_2 == (char ****)0x0) || (puVar10 = auStack_a8, *(char *)param_2 == '\0')) {
LAB_1800d72c0:
    uVar6 = local_40 & 0xffffffffffffff00;
  }
  else {
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    sVar4 = strlen((char *)param_2);
    FUN_1800133a0(local_80,param_2,sVar4);
    plVar5 = (longlong *)FUN_1800134a0(local_80,&DAT_1806efc00,1);
    ppppcVar9 = (char ****)*plVar5;
    lStack_58 = plVar5[1];
    uVar8 = plVar5[2];
    uVar2 = plVar5[3];
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    *(undefined1 *)plVar5 = 0;
    local_60 = ppppcVar9;
    local_50 = uVar8;
    uStack_48 = uVar2;
    if (local_80[3] < 0x10) {
LAB_1800d7202:
      puVar10 = auStack_a8;
      local_80[2] = 0;
      local_80[3] = 0xf;
      local_80[0] = local_80[0] & 0xffffffffffffff00;
      _Buf2 = (char ****)&local_60;
      if (0xf < uVar2) {
        _Buf2 = ppppcVar9;
      }
      unaff_R14 = uVar8;
      if ((ulonglong)param_1[2] < uVar8) {
        unaff_R14 = param_1[2];
      }
      param_2 = ppppcVar9;
      unaff_RBP = uVar2;
      uVar6 = uVar8;
      if ((ulonglong)param_1[3] < 0x10) goto LAB_1800d7257;
      _Buf1 = (undefined8 *)*param_1;
      puVar10 = auStack_a8;
    }
    else {
      _Buf2 = (char ****)(local_80[3] + 1);
      uVar7 = local_80[0];
      if (_Buf2 < (char ****)0x1000) {
LAB_1800d71fd:
        thunk_FUN_1803d64e0(uVar7,_Buf2);
        goto LAB_1800d7202;
      }
      uVar7 = *(ulonglong *)(local_80[0] - 8);
      if ((local_80[0] - uVar7) - 8 < 0x20) {
        _Buf2 = (char ****)(local_80[3] + 0x28);
        goto LAB_1800d71fd;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar10 = auStack_a0;
LAB_1800d7257:
      _Buf1 = param_1;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800d7262;
    iVar3 = memcmp(_Buf1,_Buf2,unaff_R14);
    if ((iVar3 == 0) && (uVar6 <= unaff_R14)) {
      *(undefined8 *)(puVar10 + -8) = 0x1800d7278;
      FUN_180042b40(param_1,0,uVar6);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    if (unaff_RBP < 0x10) goto LAB_1800d72c2;
    uVar8 = unaff_RBP + 1;
    ppppcVar9 = param_2;
    if (0xfff < uVar8) {
      ppppcVar9 = (char ****)param_2[-1];
      if ((char *)0x1f < (char *)((longlong)param_2 + (-8 - (longlong)ppppcVar9))) {
        pcVar1 = (code *)swi(0x29);
        local_40 = (*pcVar1)(5);
        puVar10 = puVar10 + 8;
        goto LAB_1800d72c0;
      }
      uVar8 = unaff_RBP + 0x28;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800d72b3;
    thunk_FUN_1803d64e0(ppppcVar9,uVar8);
  }
LAB_1800d72c2:
  *(undefined8 *)(puVar10 + -8) = 0x1800d72cf;
  return uVar6;
}



/* ===== 1800d7300 FUN_1800d7300 ===== */

undefined8
FUN_1800d7300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 uVar2;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  FUN_180024b50();
  uVar2 = 1;
  local_res20 = 0;
  local_res18 = 0;
  local_30 = &local_res20;
  local_20 = &local_res18;
  ppuVar1 = &PTR_DAT_1805d46c0;
  local_28 = param_1;
  do {
    FUN_1800d73b0(&local_30,*ppuVar1,param_3,param_4,uVar2);
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != &PTR_DAT_1805d4890);
  ppuVar1 = &PTR_DAT_1805d4890;
  do {
    FUN_1800d73b0(&local_30,*ppuVar1,param_3,param_4,uVar2);
    ppuVar1 = ppuVar1 + 2;
  } while (ppuVar1 != &PTR_s_health_bar_1805d4a20);
  FUN_1800d7120(param_1,local_res18);
  return param_1;
}



/* ===== 1800d73b0 FUN_1800d73b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d73b0(undefined8 *param_1,char *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  size_t sVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  HMODULE hModule;
  FARPROC pFVar14;
  longlong lVar15;
  undefined8 ****ppppuVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 ****ppppuVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong unaff_RSI;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong unaff_R12;
  ulonglong *puVar24;
  undefined8 **ppuVar25;
  undefined8 auStack_1c0 [33];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  undefined8 *local_90;
  longlong local_88 [4];
  undefined8 ****local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_b8;
  uVar22 = 0;
  local_98 = 0;
  if (param_2 == (char *)0x0) {
    sVar9 = 0;
  }
  else {
    sVar9 = strlen(param_2);
  }
  if (*(ulonglong *)*param_1 < sVar9) {
    local_90 = (undefined8 *)param_1[1];
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    sVar10 = strlen(param_2);
    FUN_1800133a0(local_88,param_2,sVar10);
    local_98 = 1;
    puVar11 = (undefined8 *)FUN_1800134a0(local_88,&DAT_1806efc00,1);
    ppppuVar19 = (undefined8 ****)*puVar11;
    uStack_60 = puVar11[1];
    unaff_R12 = puVar11[2];
    uVar18 = puVar11[3];
    puVar11[2] = 0;
    puVar11[3] = 0xf;
    *(undefined1 *)puVar11 = 0;
    uVar22 = 7;
    ppppuVar16 = &local_68;
    if (0xf < uVar18) {
      ppppuVar16 = ppppuVar19;
    }
    unaff_RSI = sVar9 + 1;
    if ((ulonglong)local_90[2] < sVar9 + 1) {
      unaff_RSI = local_90[2];
    }
    puVar11 = local_90;
    if (0xf < (ulonglong)local_90[3]) {
      puVar11 = (undefined8 *)*local_90;
    }
    uVar23 = unaff_RSI;
    if (unaff_R12 < unaff_RSI) {
      uVar23 = unaff_R12;
    }
    local_68 = ppppuVar19;
    local_58 = unaff_R12;
    uStack_50 = uVar18;
    iVar8 = memcmp(puVar11,ppppuVar16,uVar23);
    if (((iVar8 != 0) || (unaff_RSI < unaff_R12)) || (unaff_R12 < unaff_RSI)) goto LAB_1800d74e5;
    uVar23 = CONCAT71((int7)(unaff_RSI >> 8),1);
  }
  else {
    ppppuVar19 = local_68;
    uVar18 = uStack_50;
LAB_1800d74e5:
    uVar23 = unaff_RSI & 0xffffffffffffff00;
  }
  ppppuVar16 = ppppuVar19;
  if (((uVar22 & 2) == 0) || (uVar22 = (ulonglong)((uint)uVar22 & 0xfffffffd), uVar18 < 0x10)) {
LAB_1800d7529:
    puVar20 = (ulonglong *)auStack_b8;
    if (((uVar22 & 1) == 0) || ((ulonglong)local_88[3] < 0x10)) goto LAB_1800d7568;
    uVar17 = local_88[3] + 1;
    lVar15 = local_88[0];
    if (0xfff < uVar17) {
      lVar15 = *(longlong *)(local_88[0] + -8);
      ppppuVar19 = ppppuVar16;
      if (0x1f < (local_88[0] - lVar15) - 8U) goto LAB_1800d75a9;
      uVar17 = local_88[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar15,uVar17);
LAB_1800d7568:
    if ((char)uVar23 != '\0') {
      *(size_t *)*param_1 = sVar9;
      *(char **)param_1[2] = param_2;
    }
    return;
  }
  uVar17 = uVar18 + 1;
  if (uVar17 < 0x1000) {
LAB_1800d7520:
    thunk_FUN_1803d64e0(ppppuVar16,uVar17);
    goto LAB_1800d7529;
  }
  ppppuVar16 = (undefined8 ****)ppppuVar19[-1];
  ppppuVar19 = (undefined8 ****)((longlong)ppppuVar19 + (-8 - (longlong)ppppuVar16));
  if (ppppuVar19 < &DAT_00000020) {
    uVar17 = uVar18 + 0x28;
    goto LAB_1800d7520;
  }
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar20 = (ulonglong *)auStack_b0;
LAB_1800d75a9:
  lVar15 = 5;
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)();
  uVar17 = DAT_1809ebc00;
  *puVar20 = sVar9;
  puVar20[-1] = (ulonglong)ppppuVar19;
  puVar20[-2] = uVar23;
  puVar20[-3] = uVar22;
  puVar20[-4] = unaff_R12;
  puVar20[-5] = uVar18;
  puVar20[-6] = (ulonglong)param_1;
  puVar20[-7] = (ulonglong)param_2;
  puVar20[-10] = DAT_180919500 ^ (ulonglong)(puVar20 + -0x20);
  bVar6 = false;
  *(undefined4 *)(puVar20 + -0x1c) = 0;
  if (*(longlong *)(lVar15 + 0x10) == 0) {
    puVar20[-0x12] = 0;
    puVar20[-0x11] = 0;
    puVar20[-0x10] = 0;
    puVar20[-0xf] = 0;
    ppuVar25 = &DAT_1809ebbf0;
    if (0xf < DAT_1809ebc08) {
      ppuVar25 = (undefined8 **)DAT_1809ebbf0;
    }
    if (0x7fffffffffffffff < DAT_1809ebc00) {
                    /* WARNING: Subroutine does not return */
      puVar20[-0x21] = (ulonglong)&UNK_1800d7c20;
      FUN_180011990();
    }
    if (DAT_1809ebc00 < 0x10) {
      puVar20[-0x10] = DAT_1809ebc00;
      puVar20[-0xf] = 0xf;
      uVar3 = *(undefined4 *)((longlong)ppuVar25 + 4);
      uVar4 = *(undefined4 *)(ppuVar25 + 1);
      uVar5 = *(undefined4 *)((longlong)ppuVar25 + 0xc);
      *(undefined4 *)(puVar20 + -0x12) = *(undefined4 *)ppuVar25;
      *(undefined4 *)((longlong)puVar20 + -0x8c) = uVar3;
      *(undefined4 *)(puVar20 + -0x11) = uVar4;
      *(undefined4 *)((longlong)puVar20 + -0x84) = uVar5;
    }
    else {
      uVar22 = DAT_1809ebc00 | 0xf;
      if (uVar22 < 0x8000000000000000) {
        if (uVar22 < 0x16) {
          uVar22 = 0x16;
        }
      }
      else {
        uVar22 = 0x7fffffffffffffff;
      }
      puVar20[-0x21] = 0x1800d767b;
      uVar18 = FUN_18000fb70(uVar22 + 1);
      puVar20[-0x12] = uVar18;
      puVar20[-0x10] = uVar17;
      puVar20[-0xf] = uVar22;
      puVar20[-0x21] = 0x1800d7696;
      FUN_180540530(uVar18,ppuVar25,uVar17 + 1);
    }
  }
  else {
    puVar20[-0x21] = 0x1800d76b5;
    uVar12 = FUN_180073a70(puVar20 + -0x1a,lVar15,&DAT_1806efc00);
    bVar6 = true;
    *(undefined4 *)(puVar20 + -0x1c) = 1;
    puVar20[-0x21] = 0x1800d76d2;
    FUN_1800667a0(puVar20 + -0x12,uVar12,&DAT_1809ebbf0);
  }
  if (bVar6) {
    puVar20[-0x21] = 0x1800d76e5;
    FUN_18000f890(puVar20 + -0x1a);
  }
  puVar20[-0x1a] = 0;
  puVar20[-0x19] = 0;
  puVar20[-0x18] = 0;
  puVar20[-0x17] = 0xf;
  *(undefined1 *)(puVar20 + -0x1a) = 0;
  *(undefined4 *)(puVar20 + -0x1c) = 2;
  puVar20[-0x21] = 0x1800d7711;
  FUN_180067510(puVar20 + -0x1a,puVar20[-0x10]);
  puVar24 = puVar20 + -0x12;
  if (0xf < puVar20[-0xf]) {
    puVar24 = (ulonglong *)puVar20[-0x12];
  }
  puVar20[-0x1b] = puVar20[-0x10] + (longlong)puVar24;
  puVar21 = puVar20 + -0x20;
  if (puVar24 != (ulonglong *)(puVar20[-0x10] + (longlong)puVar24)) {
    do {
      bVar1 = (byte)*puVar24;
      if ((bVar1 < 0x23) && ((0x400002400U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) {
        uVar22 = puVar20[-0x18];
        uVar18 = puVar20[-0x17];
        if (uVar18 <= uVar22) {
          puVar21 = puVar20 + -0x20;
          if (uVar22 != 0x7fffffffffffffff) {
            uVar23 = uVar22 + 1 | 0xf;
            if (uVar23 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (uVar18 >> 1) < uVar18) {
                uVar23 = 0x7fffffffffffffff;
              }
              else {
                uVar17 = (uVar18 >> 1) + uVar18;
                if (uVar23 < uVar17) {
                  uVar23 = uVar17;
                }
              }
            }
            else {
              uVar23 = 0x7fffffffffffffff;
            }
            puVar20[-0x21] = 0x1800d77e5;
            uVar17 = FUN_18000fb70(uVar23 + 1);
            puVar20[-0x18] = uVar22 + 1;
            puVar20[-0x17] = uVar23;
            if (0xf < uVar18) {
              uVar23 = puVar20[-0x1a];
              puVar20[-0x21] = 0x1800d7808;
              FUN_180540530(uVar17,uVar23,uVar22);
              *(undefined2 *)(uVar17 + uVar22) = 0x20;
              goto LAB_1800d780e;
            }
            puVar20[-0x21] = 0x1800d7854;
            FUN_180540530(uVar17,puVar20 + -0x1a,uVar22);
            *(undefined2 *)(uVar17 + uVar22) = 0x20;
            goto LAB_1800d79e1;
          }
          goto LAB_1800d7c15;
        }
        puVar20[-0x18] = uVar22 + 1;
        puVar21 = puVar20 + -0x1a;
        if (0xf < uVar18) {
          puVar21 = (ulonglong *)puVar20[-0x1a];
        }
        *(undefined2 *)((longlong)puVar21 + uVar22) = 0x20;
      }
      else {
        uVar22 = puVar20[-0x18];
        uVar18 = puVar20[-0x17];
        if (bVar1 == 0x3b) {
          if (uVar22 < uVar18) {
            puVar20[-0x18] = uVar22 + 1;
            puVar21 = puVar20 + -0x1a;
            if (0xf < uVar18) {
              puVar21 = (ulonglong *)puVar20[-0x1a];
            }
            *(undefined2 *)((longlong)puVar21 + uVar22) = 0x2c;
          }
          else {
            puVar21 = puVar20 + -0x20;
            if (uVar22 == 0x7fffffffffffffff) goto LAB_1800d7c15;
            uVar23 = uVar22 + 1 | 0xf;
            if (uVar23 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (uVar18 >> 1) < uVar18) {
                uVar23 = 0x7fffffffffffffff;
              }
              else {
                uVar17 = (uVar18 >> 1) + uVar18;
                if (uVar23 < uVar17) {
                  uVar23 = uVar17;
                }
              }
            }
            else {
              uVar23 = 0x7fffffffffffffff;
            }
            puVar20[-0x21] = 0x1800d78e5;
            uVar17 = FUN_18000fb70(uVar23 + 1);
            puVar20[-0x18] = uVar22 + 1;
            puVar20[-0x17] = uVar23;
            if (uVar18 < 0x10) {
              puVar20[-0x21] = 0x1800d791c;
              FUN_180540530(uVar17,puVar20 + -0x1a,uVar22);
              *(undefined2 *)(uVar17 + uVar22) = 0x2c;
            }
            else {
              uVar23 = puVar20[-0x1a];
              puVar20[-0x21] = 0x1800d7908;
              FUN_180540530(uVar17,uVar23,uVar22);
              *(undefined2 *)(uVar17 + uVar22) = 0x2c;
LAB_1800d780e:
              if (uVar18 + 1 < 0x1000) {
                puVar20[-0x21] = 0x1800d7846;
                thunk_FUN_1803d64e0(uVar23);
              }
              else {
                lVar15 = *(longlong *)(uVar23 - 8);
                if (0x1f < (uVar23 - lVar15) - 8) {
                  pcVar2 = (code *)swi(0x29);
                  (*pcVar2)(5);
                  puVar21 = puVar20 + -0x1f;
                  break;
                }
                puVar20[-0x21] = 0x1800d7839;
                thunk_FUN_1803d64e0(lVar15,uVar18 + 0x28);
              }
            }
LAB_1800d79e1:
            puVar20[-0x1a] = uVar17;
          }
        }
        else {
          if (uVar18 <= uVar22) {
            puVar21 = puVar20 + -0x20;
            if (uVar22 != 0x7fffffffffffffff) {
              uVar23 = uVar22 + 1 | 0xf;
              if (uVar23 < 0x8000000000000000) {
                if (0x7fffffffffffffff - (uVar18 >> 1) < uVar18) {
                  uVar23 = 0x7fffffffffffffff;
                }
                else {
                  uVar17 = (uVar18 >> 1) + uVar18;
                  if (uVar23 < uVar17) {
                    uVar23 = uVar17;
                  }
                }
              }
              else {
                uVar23 = 0x7fffffffffffffff;
              }
              puVar20[-0x21] = 0x1800d799e;
              uVar17 = FUN_18000fb70(uVar23 + 1);
              puVar20[-0x18] = uVar22 + 1;
              puVar20[-0x17] = uVar23;
              if (0xf < uVar18) {
                uVar23 = puVar20[-0x1a];
                puVar20[-0x21] = 0x1800d79c1;
                FUN_180540530(uVar17,uVar23,uVar22);
                *(byte *)(uVar17 + uVar22) = bVar1;
                *(undefined1 *)(uVar17 + 1 + uVar22) = 0;
                goto LAB_1800d780e;
              }
              puVar20[-0x21] = 0x1800d79d8;
              FUN_180540530(uVar17,puVar20 + -0x1a,uVar22);
              *(byte *)(uVar17 + uVar22) = bVar1;
              *(undefined1 *)(uVar17 + 1 + uVar22) = 0;
              goto LAB_1800d79e1;
            }
            goto LAB_1800d7c15;
          }
          puVar20[-0x18] = uVar22 + 1;
          puVar21 = puVar20 + -0x1a;
          if (0xf < uVar18) {
            puVar21 = (ulonglong *)puVar20[-0x1a];
          }
          *(byte *)((longlong)puVar21 + uVar22) = bVar1;
          *(undefined1 *)((longlong)puVar21 + uVar22 + 1) = 0;
        }
      }
      puVar24 = (ulonglong *)((longlong)puVar24 + 1);
      puVar21 = puVar20 + -0x20;
    } while (puVar24 != (ulonglong *)puVar20[-0x1b]);
  }
  *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7a26;
  uVar12 = FUN_180066ab0(puVar20 + -0xe,"setinfo name \"",puVar20 + -0x1a);
  *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7a3c;
  puVar13 = (undefined4 *)FUN_1800134a0(uVar12,&DAT_1806dfffc,1);
  puVar20[-0x16] = 0;
  puVar20[-0x15] = 0;
  puVar20[-0x14] = 0;
  puVar20[-0x13] = 0;
  uVar3 = puVar13[1];
  uVar4 = puVar13[2];
  uVar5 = puVar13[3];
  *(undefined4 *)(puVar20 + -0x16) = *puVar13;
  *(undefined4 *)((longlong)puVar20 + -0xac) = uVar3;
  *(undefined4 *)(puVar20 + -0x15) = uVar4;
  *(undefined4 *)((longlong)puVar20 + -0xa4) = uVar5;
  uVar22 = *(ulonglong *)(puVar13 + 6);
  puVar20[-0x14] = *(ulonglong *)(puVar13 + 4);
  puVar20[-0x13] = uVar22;
  *(undefined8 *)(puVar13 + 4) = 0;
  *(undefined8 *)(puVar13 + 6) = 0xf;
  *(undefined1 *)puVar13 = 0;
  *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7a72;
  FUN_18000f890(puVar20 + -0xe);
  uVar22 = puVar20[-0x17];
  if (0xf < uVar22) {
    uVar17 = uVar22 + 1;
    uVar18 = puVar20[-0x1a];
    uVar23 = uVar18;
    if (0xfff < uVar17) {
      uVar23 = *(ulonglong *)(uVar18 - 8);
      if (0x1f < (uVar18 - uVar23) - 8) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar21 = (ulonglong *)((longlong)puVar21 + 8);
        goto LAB_1800d7c0e;
      }
      uVar17 = uVar22 + 0x28;
    }
    *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7aae;
    thunk_FUN_1803d64e0(uVar23,uVar17);
  }
  puVar20[-0x18] = 0;
  puVar20[-0x17] = 0xf;
  *(undefined1 *)(puVar20 + -0x1a) = 0;
  ppuVar25 = &DAT_1809ebc10;
  if (0xf < DAT_1809ebc28) {
    ppuVar25 = (undefined8 **)DAT_1809ebc10;
  }
  sVar9 = puVar20[-0x14];
  uVar22 = puVar20[-0x13];
  puVar24 = puVar20 + -0x16;
  if (0xf < uVar22) {
    puVar24 = (ulonglong *)puVar20[-0x16];
  }
  if (sVar9 == DAT_1809ebc20) {
    if (sVar9 != 0) {
      *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7b01;
      iVar8 = memcmp(puVar24,ppuVar25,sVar9);
      if (iVar8 != 0) goto LAB_1800d7b09;
    }
  }
  else {
LAB_1800d7b09:
    puVar24 = puVar20 + -0x16;
    if (0xf < uVar22) {
      puVar24 = (ulonglong *)puVar20[-0x16];
    }
    if (DAT_180cf9f78 == 0) {
      *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7b2f;
      hModule = GetModuleHandleA("engine2.dll");
      if (hModule != (HMODULE)0x0) {
        *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7b44;
        pFVar14 = GetProcAddress(hModule,"CreateInterface");
        if (pFVar14 != (FARPROC)0x0) {
          *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7b54;
          DAT_180cf9f78 = (*pFVar14)("Source2EngineToClient001",0);
          uVar22 = puVar20[-0x13];
          if (DAT_180cf9f78 == 0) goto LAB_1800d7b9a;
          goto LAB_1800d7b64;
        }
      }
    }
    else {
LAB_1800d7b64:
      if (puVar24 == (ulonglong *)0x0) goto LAB_1800d7b9a;
      *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7b74;
      cVar7 = FUN_1800d6d10(DAT_180cf9f78,puVar24);
      if (cVar7 != '\0') {
        puVar24 = puVar20 + -0x16;
        if (0xf < puVar20[-0x13]) {
          puVar24 = (ulonglong *)puVar20[-0x16];
        }
        uVar22 = puVar20[-0x14];
        *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7b96;
        FUN_180029840(&DAT_1809ebc10,puVar24,uVar22);
      }
    }
    uVar22 = puVar20[-0x13];
  }
LAB_1800d7b9a:
  if (0xf < uVar22) {
    uVar18 = uVar22 + 1;
    uVar23 = puVar20[-0x16];
    uVar17 = uVar23;
    if (0xfff < uVar18) {
      uVar17 = *(ulonglong *)(uVar23 - 8);
      if (0x1f < (uVar23 - uVar17) - 8) {
LAB_1800d7c0e:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar21 = (ulonglong *)((longlong)puVar21 + 8);
LAB_1800d7c15:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7c1a;
        FUN_180011990();
      }
      uVar18 = uVar22 + 0x28;
    }
    *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7bce;
    thunk_FUN_1803d64e0(uVar17,uVar18);
  }
  puVar20[-0x14] = 0;
  puVar20[-0x13] = 0xf;
  *(undefined1 *)(puVar20 + -0x16) = 0;
  *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7be7;
  FUN_18000f890(puVar20 + -0x12);
  *(undefined8 *)((longlong)puVar21 + -8) = 0x1800d7bf3;
  return;
}



/* ===== 1800d75b0 FUN_1800d75b0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d75b0(longlong param_1)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  longlong *plVar13;
  HMODULE hModule;
  FARPROC pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  byte ****ppppbVar20;
  undefined8 **ppuVar21;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  undefined4 local_e8;
  byte ****local_e0;
  undefined8 ****local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 ****local_b8;
  longlong lStack_b0;
  size_t local_a8;
  ulonglong uStack_a0;
  byte ****local_98;
  undefined8 *puStack_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  uVar15 = DAT_1809ebc00;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_108;
  bVar7 = false;
  local_e8 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_98 = (byte ****)0x0;
    puStack_90 = (undefined8 *)0x0;
    local_88 = 0;
    local_80 = 0;
    ppuVar21 = &DAT_1809ebbf0;
    if (0xf < DAT_1809ebc08) {
      ppuVar21 = (undefined8 **)DAT_1809ebbf0;
    }
    if (0x7fffffffffffffff < DAT_1809ebc00) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    if (DAT_1809ebc00 < 0x10) {
      local_88 = DAT_1809ebc00;
      local_80 = 0xf;
      local_98 = (byte ****)*ppuVar21;
      puStack_90 = ppuVar21[1];
    }
    else {
      uVar16 = DAT_1809ebc00 | 0xf;
      if (uVar16 < 0x8000000000000000) {
        if (uVar16 < 0x16) {
          uVar16 = 0x16;
        }
      }
      else {
        uVar16 = 0x7fffffffffffffff;
      }
      local_98 = (byte ****)FUN_18000fb70(uVar16 + 1);
      local_88 = uVar15;
      local_80 = uVar16;
      FUN_180540530(local_98,ppuVar21,uVar15 + 1);
    }
  }
  else {
    uVar12 = FUN_180073a70(&local_d8,param_1,&DAT_1806efc00);
    bVar7 = true;
    local_e8 = 1;
    FUN_1800667a0(&local_98,uVar12,&DAT_1809ebbf0);
  }
  if (bVar7) {
    FUN_18000f890(&local_d8);
  }
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xf;
  local_d8 = (undefined8 ****)0x0;
  local_e8 = 2;
  FUN_180067510(&local_d8,local_88);
  puVar17 = auStack_108;
  ppppbVar20 = (byte ****)&local_98;
  if (0xf < local_80) {
    ppppbVar20 = local_98;
  }
  local_e0 = (byte ****)((longlong)ppppbVar20 + local_88);
  puVar18 = auStack_108;
  if (ppppbVar20 != local_e0) {
    do {
      uVar16 = local_c0;
      uVar15 = local_c8;
      bVar5 = *(byte *)ppppbVar20;
      if ((bVar5 < 0x23) && ((0x400002400U >> ((longlong)(char)bVar5 & 0x3fU) & 1) != 0)) {
        if (local_c0 <= local_c8) {
          puVar18 = auStack_108;
          if (local_c8 != 0x7fffffffffffffff) {
            uVar1 = local_c8 + 1;
            uVar19 = uVar1 | 0xf;
            if (uVar19 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (local_c0 >> 1) < local_c0) {
                uVar19 = 0x7fffffffffffffff;
              }
              else {
                uVar3 = (local_c0 >> 1) + local_c0;
                if (uVar19 < uVar3) {
                  uVar19 = uVar3;
                }
              }
            }
            else {
              uVar19 = 0x7fffffffffffffff;
            }
            ppppuVar10 = (undefined8 ****)FUN_18000fb70(uVar19 + 1);
            ppppuVar11 = local_d8;
            local_c8 = uVar1;
            local_c0 = uVar19;
            if (0xf < uVar16) {
              FUN_180540530(ppppuVar10,local_d8,uVar15);
              *(undefined2 *)((longlong)ppppuVar10 + uVar15) = 0x20;
              goto LAB_1800d780e;
            }
            FUN_180540530(ppppuVar10,&local_d8,uVar15);
            *(undefined2 *)((longlong)ppppuVar10 + uVar15) = 0x20;
            goto LAB_1800d79e1;
          }
          goto LAB_1800d7c15;
        }
        ppppuVar11 = &local_d8;
        if (0xf < local_c0) {
          ppppuVar11 = local_d8;
        }
        puVar2 = (undefined2 *)((longlong)ppppuVar11 + local_c8);
        local_c8 = local_c8 + 1;
        *puVar2 = 0x20;
      }
      else if (bVar5 == 0x3b) {
        if (local_c8 < local_c0) {
          ppppuVar11 = &local_d8;
          if (0xf < local_c0) {
            ppppuVar11 = local_d8;
          }
          puVar2 = (undefined2 *)((longlong)ppppuVar11 + local_c8);
          local_c8 = local_c8 + 1;
          *puVar2 = 0x2c;
        }
        else {
          puVar18 = auStack_108;
          if (local_c8 == 0x7fffffffffffffff) goto LAB_1800d7c15;
          uVar1 = local_c8 + 1;
          uVar19 = uVar1 | 0xf;
          if (uVar19 < 0x8000000000000000) {
            if (0x7fffffffffffffff - (local_c0 >> 1) < local_c0) {
              uVar19 = 0x7fffffffffffffff;
            }
            else {
              uVar3 = (local_c0 >> 1) + local_c0;
              if (uVar19 < uVar3) {
                uVar19 = uVar3;
              }
            }
          }
          else {
            uVar19 = 0x7fffffffffffffff;
          }
          ppppuVar10 = (undefined8 ****)FUN_18000fb70(uVar19 + 1);
          ppppuVar11 = local_d8;
          local_c8 = uVar1;
          local_c0 = uVar19;
          if (uVar16 < 0x10) {
            FUN_180540530(ppppuVar10,&local_d8,uVar15);
            *(undefined2 *)((longlong)ppppuVar10 + uVar15) = 0x2c;
          }
          else {
            FUN_180540530(ppppuVar10,local_d8,uVar15);
            *(undefined2 *)((longlong)ppppuVar10 + uVar15) = 0x2c;
LAB_1800d780e:
            if (uVar16 + 1 < 0x1000) {
              thunk_FUN_1803d64e0(ppppuVar11);
            }
            else {
              if (0x1f < (ulonglong)((longlong)ppppuVar11 + (-8 - (longlong)ppppuVar11[-1]))) {
                pcVar6 = (code *)swi(0x29);
                (*pcVar6)(5);
                puVar17 = auStack_100;
                break;
              }
              thunk_FUN_1803d64e0(ppppuVar11[-1],uVar16 + 0x28);
            }
          }
LAB_1800d79e1:
          local_d8 = ppppuVar10;
        }
      }
      else {
        if (local_c0 <= local_c8) {
          puVar18 = auStack_108;
          if (local_c8 != 0x7fffffffffffffff) {
            uVar1 = local_c8 + 1;
            uVar19 = uVar1 | 0xf;
            if (uVar19 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (local_c0 >> 1) < local_c0) {
                uVar19 = 0x7fffffffffffffff;
              }
              else {
                uVar3 = (local_c0 >> 1) + local_c0;
                if (uVar19 < uVar3) {
                  uVar19 = uVar3;
                }
              }
            }
            else {
              uVar19 = 0x7fffffffffffffff;
            }
            ppppuVar10 = (undefined8 ****)FUN_18000fb70(uVar19 + 1);
            ppppuVar11 = local_d8;
            local_c8 = uVar1;
            local_c0 = uVar19;
            if (0xf < uVar16) {
              FUN_180540530(ppppuVar10,local_d8,uVar15);
              *(byte *)((longlong)ppppuVar10 + uVar15) = bVar5;
              *(undefined1 *)((longlong)ppppuVar10 + uVar15 + 1) = 0;
              goto LAB_1800d780e;
            }
            FUN_180540530(ppppuVar10,&local_d8,uVar15);
            *(byte *)((longlong)ppppuVar10 + uVar15) = bVar5;
            *(undefined1 *)((longlong)ppppuVar10 + uVar15 + 1) = 0;
            goto LAB_1800d79e1;
          }
          goto LAB_1800d7c15;
        }
        ppppuVar11 = &local_d8;
        if (0xf < local_c0) {
          ppppuVar11 = local_d8;
        }
        pbVar4 = (byte *)((longlong)ppppuVar11 + local_c8);
        local_c8 = local_c8 + 1;
        *pbVar4 = bVar5;
        *(undefined1 *)((longlong)ppppuVar11 + uVar15 + 1) = 0;
      }
      ppppbVar20 = (byte ****)((longlong)ppppbVar20 + 1);
    } while (ppppbVar20 != local_e0);
    puVar18 = puVar17;
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800d7a26;
  uVar12 = FUN_180066ab0(local_78,"setinfo name \"",&local_d8);
  *(undefined8 *)(puVar18 + -8) = 0x1800d7a3c;
  plVar13 = (longlong *)FUN_1800134a0(uVar12,&DAT_1806dfffc,1);
  local_b8 = (undefined8 ****)*plVar13;
  lStack_b0 = plVar13[1];
  local_a8 = plVar13[2];
  uStack_a0 = plVar13[3];
  plVar13[2] = 0;
  plVar13[3] = 0xf;
  *(undefined1 *)plVar13 = 0;
  *(undefined8 *)(puVar18 + -8) = 0x1800d7a72;
  FUN_18000f890(local_78);
  if (0xf < local_c0) {
    uVar15 = local_c0 + 1;
    ppppuVar11 = local_d8;
    if (0xfff < uVar15) {
      ppppuVar11 = (undefined8 ****)local_d8[-1];
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)ppppuVar11))) {
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar18 = puVar18 + 8;
        goto LAB_1800d7c0e;
      }
      uVar15 = local_c0 + 0x28;
    }
    *(undefined8 *)(puVar18 + -8) = 0x1800d7aae;
    thunk_FUN_1803d64e0(ppppuVar11,uVar15);
  }
  uVar15 = uStack_a0;
  local_c8 = 0;
  local_c0 = 0xf;
  local_d8 = (undefined8 ****)((ulonglong)local_d8 & 0xffffffffffffff00);
  ppuVar21 = &DAT_1809ebc10;
  if (0xf < DAT_1809ebc28) {
    ppuVar21 = (undefined8 **)DAT_1809ebc10;
  }
  ppppuVar11 = &local_b8;
  if (0xf < uStack_a0) {
    ppppuVar11 = local_b8;
  }
  if (local_a8 == DAT_1809ebc20) {
    if (local_a8 != 0) {
      *(undefined8 *)(puVar18 + -8) = 0x1800d7b01;
      iVar9 = memcmp(ppppuVar11,ppuVar21,local_a8);
      if (iVar9 != 0) goto LAB_1800d7b09;
    }
  }
  else {
LAB_1800d7b09:
    ppppuVar11 = &local_b8;
    if (0xf < uVar15) {
      ppppuVar11 = local_b8;
    }
    if (DAT_180cf9f78 == 0) {
      *(undefined8 *)(puVar18 + -8) = 0x1800d7b2f;
      hModule = GetModuleHandleA("engine2.dll");
      if (hModule != (HMODULE)0x0) {
        *(undefined8 *)(puVar18 + -8) = 0x1800d7b44;
        pFVar14 = GetProcAddress(hModule,"CreateInterface");
        if (pFVar14 != (FARPROC)0x0) {
          *(undefined8 *)(puVar18 + -8) = 0x1800d7b54;
          DAT_180cf9f78 = (*pFVar14)("Source2EngineToClient001",0);
          uVar15 = uStack_a0;
          if (DAT_180cf9f78 == 0) goto LAB_1800d7b9a;
          goto LAB_1800d7b64;
        }
      }
    }
    else {
LAB_1800d7b64:
      if (ppppuVar11 == (undefined8 ****)0x0) goto LAB_1800d7b9a;
      *(undefined8 *)(puVar18 + -8) = 0x1800d7b74;
      cVar8 = FUN_1800d6d10(DAT_180cf9f78,ppppuVar11);
      if (cVar8 != '\0') {
        ppppuVar11 = &local_b8;
        if (0xf < uStack_a0) {
          ppppuVar11 = local_b8;
        }
        *(undefined8 *)(puVar18 + -8) = 0x1800d7b96;
        FUN_180029840(&DAT_1809ebc10,ppppuVar11,local_a8);
      }
    }
    uVar15 = uStack_a0;
  }
LAB_1800d7b9a:
  if (0xf < uVar15) {
    uVar16 = uVar15 + 1;
    ppppuVar11 = local_b8;
    if (0xfff < uVar16) {
      ppppuVar11 = (undefined8 ****)local_b8[-1];
      if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)ppppuVar11))) {
LAB_1800d7c0e:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar18 = puVar18 + 8;
LAB_1800d7c15:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar18 + -8) = 0x1800d7c1a;
        FUN_180011990();
      }
      uVar16 = uVar15 + 0x28;
    }
    *(undefined8 *)(puVar18 + -8) = 0x1800d7bce;
    thunk_FUN_1803d64e0(ppppuVar11,uVar16);
  }
  local_a8 = 0;
  uStack_a0 = 0xf;
  local_b8 = (undefined8 ****)((ulonglong)local_b8 & 0xffffffffffffff00);
  *(undefined8 *)(puVar18 + -8) = 0x1800d7be7;
  FUN_18000f890(&local_98);
  *(undefined8 *)(puVar18 + -8) = 0x1800d7bf3;
  return;
}



/* ===== 1800d7c30 FUN_1800d7c30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d7c30(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined8 in_RCX;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  longlong lStack_138;
  longlong alStack_130 [4];
  undefined8 ****appppuStack_110 [2];
  longlong lStack_100;
  ulonglong uStack_f8;
  char acStack_e8 [128];
  ulonglong uStack_68;
  undefined8 uStack_60;
  longlong local_38 [6];
  
  local_38[4] = DAT_180919500 ^ (ulonglong)(acStack_e8 + 0x90);
  if (DAT_180ca3caf == '\0') {
    return;
  }
  DAT_180ca3caf = 0;
  if (DAT_180ca3cac == '\0') goto LAB_1800d7cf8;
  DAT_1809ebc20 = 0;
  puVar3 = &DAT_1809ebc10;
  if (0xf < DAT_1809ebc28) {
    puVar3 = DAT_1809ebc10;
  }
  *(undefined1 *)puVar3 = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0xf;
  local_38[0] = 0;
  uStack_60 = 0x1800d7cbe;
  param_1 = FUN_1800d75b0(local_38);
  if ((ulonglong)local_38[3] < 0x10) goto LAB_1800d7cf8;
  uVar7 = local_38[3] + 1;
  lVar6 = local_38[0];
  if (0xfff < uVar7) {
    lVar6 = *(longlong *)(local_38[0] + -8);
    if (0x1f < (local_38[0] - lVar6) - 8U) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      uStack_68 = DAT_180919500 ^ (ulonglong)auStack_158;
      if (DAT_180ca3cbc == '\0') {
        if (DAT_180cd0e60 == 0) {
          DAT_180cd0e60 = FUN_180264b70(&DAT_18058b644);
          puVar10 = auStack_158;
          if (DAT_180cd0e60 == 0) goto LAB_1800d7fb1;
        }
        cVar2 = FUN_1800d70e0();
        puVar10 = auStack_158;
        if ((cVar2 == '\0') ||
           (cVar2 = FUN_1800d7100(extraout_XMM0_Da,0x8280), puVar10 = auStack_158, cVar2 == '\0'))
        goto LAB_1800d7fb1;
        DAT_180ca3cbc = '\x01';
        FUN_1802b2560("[clantag] name convar unlocked | flags 0x%X -> 0x%X",DAT_180cd0e54,0x8280);
      }
      if (DAT_180cd1304 == '\0') {
        FUN_1803a0b60(&lStack_138);
      }
      else {
        lStack_138 = DAT_181108a00;
      }
      puVar10 = auStack_158;
      if (lStack_138 == 0) goto LAB_1800d7fb1;
      if (DAT_180ca0a08 == 0) {
LAB_1800d7e9e:
        alStack_130[1] = 0;
        alStack_130[2] = 0;
        alStack_130[3] = 0xf;
        alStack_130[0] = 0;
      }
      else {
        acStack_e8[0] = '\0';
        acStack_e8[1] = '\0';
        acStack_e8[2] = '\0';
        acStack_e8[3] = '\0';
        acStack_e8[4] = '\0';
        acStack_e8[5] = '\0';
        acStack_e8[6] = '\0';
        acStack_e8[7] = '\0';
        acStack_e8[8] = '\0';
        acStack_e8[9] = '\0';
        acStack_e8[10] = '\0';
        acStack_e8[0xb] = '\0';
        acStack_e8[0xc] = '\0';
        acStack_e8[0xd] = '\0';
        acStack_e8[0xe] = '\0';
        acStack_e8[0xf] = '\0';
        acStack_e8[0x10] = '\0';
        acStack_e8[0x11] = '\0';
        acStack_e8[0x12] = '\0';
        acStack_e8[0x13] = '\0';
        acStack_e8[0x14] = '\0';
        acStack_e8[0x15] = '\0';
        acStack_e8[0x16] = '\0';
        acStack_e8[0x17] = '\0';
        acStack_e8[0x18] = '\0';
        acStack_e8[0x19] = '\0';
        acStack_e8[0x1a] = '\0';
        acStack_e8[0x1b] = '\0';
        acStack_e8[0x1c] = '\0';
        acStack_e8[0x1d] = '\0';
        acStack_e8[0x1e] = '\0';
        acStack_e8[0x1f] = '\0';
        acStack_e8[0x20] = '\0';
        acStack_e8[0x21] = '\0';
        acStack_e8[0x22] = '\0';
        acStack_e8[0x23] = '\0';
        acStack_e8[0x24] = '\0';
        acStack_e8[0x25] = '\0';
        acStack_e8[0x26] = '\0';
        acStack_e8[0x27] = '\0';
        acStack_e8[0x28] = '\0';
        acStack_e8[0x29] = '\0';
        acStack_e8[0x2a] = '\0';
        acStack_e8[0x2b] = '\0';
        acStack_e8[0x2c] = '\0';
        acStack_e8[0x2d] = '\0';
        acStack_e8[0x2e] = '\0';
        acStack_e8[0x2f] = '\0';
        acStack_e8[0x30] = '\0';
        acStack_e8[0x31] = '\0';
        acStack_e8[0x32] = '\0';
        acStack_e8[0x33] = '\0';
        acStack_e8[0x34] = '\0';
        acStack_e8[0x35] = '\0';
        acStack_e8[0x36] = '\0';
        acStack_e8[0x37] = '\0';
        acStack_e8[0x38] = '\0';
        acStack_e8[0x39] = '\0';
        acStack_e8[0x3a] = '\0';
        acStack_e8[0x3b] = '\0';
        acStack_e8[0x3c] = '\0';
        acStack_e8[0x3d] = '\0';
        acStack_e8[0x3e] = '\0';
        acStack_e8[0x3f] = '\0';
        acStack_e8[0x40] = '\0';
        acStack_e8[0x41] = '\0';
        acStack_e8[0x42] = '\0';
        acStack_e8[0x43] = '\0';
        acStack_e8[0x44] = '\0';
        acStack_e8[0x45] = '\0';
        acStack_e8[0x46] = '\0';
        acStack_e8[0x47] = '\0';
        acStack_e8[0x48] = '\0';
        acStack_e8[0x49] = '\0';
        acStack_e8[0x4a] = '\0';
        acStack_e8[0x4b] = '\0';
        acStack_e8[0x4c] = '\0';
        acStack_e8[0x4d] = '\0';
        acStack_e8[0x4e] = '\0';
        acStack_e8[0x4f] = '\0';
        acStack_e8[0x50] = '\0';
        acStack_e8[0x51] = '\0';
        acStack_e8[0x52] = '\0';
        acStack_e8[0x53] = '\0';
        acStack_e8[0x54] = '\0';
        acStack_e8[0x55] = '\0';
        acStack_e8[0x56] = '\0';
        acStack_e8[0x57] = '\0';
        acStack_e8[0x58] = '\0';
        acStack_e8[0x59] = '\0';
        acStack_e8[0x5a] = '\0';
        acStack_e8[0x5b] = '\0';
        acStack_e8[0x5c] = '\0';
        acStack_e8[0x5d] = '\0';
        acStack_e8[0x5e] = '\0';
        acStack_e8[0x5f] = '\0';
        acStack_e8[0x60] = '\0';
        acStack_e8[0x61] = '\0';
        acStack_e8[0x62] = '\0';
        acStack_e8[99] = '\0';
        acStack_e8[100] = '\0';
        acStack_e8[0x65] = '\0';
        acStack_e8[0x66] = '\0';
        acStack_e8[0x67] = '\0';
        acStack_e8[0x68] = '\0';
        acStack_e8[0x69] = '\0';
        acStack_e8[0x6a] = '\0';
        acStack_e8[0x6b] = '\0';
        acStack_e8[0x6c] = '\0';
        acStack_e8[0x6d] = '\0';
        acStack_e8[0x6e] = '\0';
        acStack_e8[0x6f] = '\0';
        acStack_e8[0x70] = '\0';
        acStack_e8[0x71] = '\0';
        acStack_e8[0x72] = '\0';
        acStack_e8[0x73] = '\0';
        acStack_e8[0x74] = '\0';
        acStack_e8[0x75] = '\0';
        acStack_e8[0x76] = '\0';
        acStack_e8[0x77] = '\0';
        acStack_e8[0x78] = '\0';
        acStack_e8[0x79] = '\0';
        acStack_e8[0x7a] = '\0';
        acStack_e8[0x7b] = '\0';
        acStack_e8[0x7c] = '\0';
        acStack_e8[0x7d] = '\0';
        acStack_e8[0x7e] = '\0';
        acStack_e8[0x7f] = '\0';
        uVar4 = FUN_18000f3a0((ulonglong)DAT_180ca0a08 + lStack_138);
        cVar2 = FUN_1803a05b0(uVar4,acStack_e8);
        if (cVar2 == '\0') goto LAB_1800d7e9e;
        alStack_130[0] = 0;
        alStack_130[1] = 0;
        alStack_130[2] = 0;
        alStack_130[3] = 0;
        sVar5 = strlen(acStack_e8);
        FUN_1800133a0(alStack_130,acStack_e8,sVar5);
      }
      FUN_1800d7300(appppuStack_110,alStack_130);
      if ((ulonglong)alStack_130[3] < 0x10) {
LAB_1800d7efe:
        puVar10 = auStack_158;
        if (lStack_100 == 0) {
          FUN_18000f890(appppuStack_110);
          puVar10 = auStack_158;
          goto LAB_1800d7fb1;
        }
      }
      else {
        uVar7 = alStack_130[3] + 1;
        lVar6 = alStack_130[0];
        if (uVar7 < 0x1000) {
LAB_1800d7ef9:
          thunk_FUN_1803d64e0(lVar6,uVar7);
          goto LAB_1800d7efe;
        }
        lVar6 = *(longlong *)(alStack_130[0] + -8);
        if ((alStack_130[0] - lVar6) - 8U < 0x20) {
          uVar7 = alStack_130[3] + 0x28;
          goto LAB_1800d7ef9;
        }
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar10 = auStack_150;
      }
      ppppuVar8 = appppuStack_110;
      if (0xf < uStack_f8) {
        ppppuVar8 = appppuStack_110[0];
      }
      *(undefined8 *)(puVar10 + -8) = 0x1800d7f39;
      FUN_180029840(&DAT_1809ebbf0,ppppuVar8);
      DAT_180ca3cac = '\x01';
      *(undefined8 *)(puVar10 + -8) = 0x1800d7f49;
      FUN_18000f890(appppuStack_110);
      DAT_180ca3caf = 1;
      DAT_180cd0e50 = (uint)(DAT_180920e28 == 1);
      DAT_180cd0e68 = 0;
      DAT_1809e9bc8 = 1;
      DAT_180cd0e58 = 0;
      puVar3 = &DAT_1809ebbf0;
      if (0xf < DAT_1809ebc08) {
        puVar3 = DAT_1809ebbf0;
      }
      pcVar9 = "neverlose.one";
      if (DAT_180cd0e50 == 1) {
        pcVar9 = "neverlose";
      }
      *(undefined8 *)(puVar10 + -8) = 0x1800d7fb1;
      FUN_1802b2560("[clantag] on | style %s | base name \"%s\"",pcVar9,puVar3);
LAB_1800d7fb1:
      *(undefined8 *)(puVar10 + -8) = 0x1800d7fbd;
      return;
    }
    uVar7 = local_38[3] + 0x28;
  }
  uStack_60 = 0x1800d7cf8;
  param_1 = thunk_FUN_1803d64e0(lVar6,uVar7);
LAB_1800d7cf8:
  if ((DAT_180ca3cbc != '\0') && (DAT_180cd0e60 != 0)) {
    uStack_60 = 0x1800d7d16;
    FUN_1800d7100(param_1,DAT_180cd0e54);
  }
  DAT_180ca3cbc = 0;
  DAT_180ca3cac = 0;
  DAT_1809ebc20 = 0;
  puVar3 = &DAT_1809ebc10;
  if (0xf < DAT_1809ebc28) {
    puVar3 = DAT_1809ebc10;
  }
  *(undefined1 *)puVar3 = 0;
  uStack_60 = 0x1800d7d51;
  FUN_1802b2560("[clantag] off | %s | name restored",in_RCX);
  return;
}



/* ===== 1800d7d70 FUN_1800d7d70 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d7d70(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 ***pppuVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  longlong local_e8;
  longlong local_e0 [4];
  undefined8 ***local_c0 [2];
  longlong local_b0;
  ulonglong local_a8;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_108;
  if (DAT_180ca3cbc == '\0') {
    if (DAT_180cd0e60 == 0) {
      DAT_180cd0e60 = FUN_180264b70(&DAT_18058b644);
      puVar10 = auStack_108;
      if (DAT_180cd0e60 == 0) goto LAB_1800d7fb1;
    }
    cVar2 = FUN_1800d70e0();
    puVar10 = auStack_108;
    if (cVar2 == '\0') goto LAB_1800d7fb1;
    cVar2 = FUN_1800d7100(extraout_XMM0_Da,0x8280);
    puVar10 = auStack_108;
    if (cVar2 == '\0') goto LAB_1800d7fb1;
    DAT_180ca3cbc = '\x01';
    FUN_1802b2560("[clantag] name convar unlocked | flags 0x%X -> 0x%X",DAT_180cd0e54,0x8280);
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_e8);
  }
  else {
    local_e8 = DAT_181108a00;
  }
  puVar10 = auStack_108;
  if (local_e8 == 0) goto LAB_1800d7fb1;
  if (DAT_180ca0a08 == 0) {
LAB_1800d7e9e:
    local_e0[1] = 0;
    local_e0[2] = 0;
    local_e0[3] = 0xf;
    local_e0[0] = 0;
  }
  else {
    local_98[0] = '\0';
    local_98[1] = '\0';
    local_98[2] = '\0';
    local_98[3] = '\0';
    local_98[4] = '\0';
    local_98[5] = '\0';
    local_98[6] = '\0';
    local_98[7] = '\0';
    local_98[8] = '\0';
    local_98[9] = '\0';
    local_98[10] = '\0';
    local_98[0xb] = '\0';
    local_98[0xc] = '\0';
    local_98[0xd] = '\0';
    local_98[0xe] = '\0';
    local_98[0xf] = '\0';
    local_98[0x10] = '\0';
    local_98[0x11] = '\0';
    local_98[0x12] = '\0';
    local_98[0x13] = '\0';
    local_98[0x14] = '\0';
    local_98[0x15] = '\0';
    local_98[0x16] = '\0';
    local_98[0x17] = '\0';
    local_98[0x18] = '\0';
    local_98[0x19] = '\0';
    local_98[0x1a] = '\0';
    local_98[0x1b] = '\0';
    local_98[0x1c] = '\0';
    local_98[0x1d] = '\0';
    local_98[0x1e] = '\0';
    local_98[0x1f] = '\0';
    local_98[0x20] = '\0';
    local_98[0x21] = '\0';
    local_98[0x22] = '\0';
    local_98[0x23] = '\0';
    local_98[0x24] = '\0';
    local_98[0x25] = '\0';
    local_98[0x26] = '\0';
    local_98[0x27] = '\0';
    local_98[0x28] = '\0';
    local_98[0x29] = '\0';
    local_98[0x2a] = '\0';
    local_98[0x2b] = '\0';
    local_98[0x2c] = '\0';
    local_98[0x2d] = '\0';
    local_98[0x2e] = '\0';
    local_98[0x2f] = '\0';
    local_98[0x30] = '\0';
    local_98[0x31] = '\0';
    local_98[0x32] = '\0';
    local_98[0x33] = '\0';
    local_98[0x34] = '\0';
    local_98[0x35] = '\0';
    local_98[0x36] = '\0';
    local_98[0x37] = '\0';
    local_98[0x38] = '\0';
    local_98[0x39] = '\0';
    local_98[0x3a] = '\0';
    local_98[0x3b] = '\0';
    local_98[0x3c] = '\0';
    local_98[0x3d] = '\0';
    local_98[0x3e] = '\0';
    local_98[0x3f] = '\0';
    local_98[0x40] = '\0';
    local_98[0x41] = '\0';
    local_98[0x42] = '\0';
    local_98[0x43] = '\0';
    local_98[0x44] = '\0';
    local_98[0x45] = '\0';
    local_98[0x46] = '\0';
    local_98[0x47] = '\0';
    local_98[0x48] = '\0';
    local_98[0x49] = '\0';
    local_98[0x4a] = '\0';
    local_98[0x4b] = '\0';
    local_98[0x4c] = '\0';
    local_98[0x4d] = '\0';
    local_98[0x4e] = '\0';
    local_98[0x4f] = '\0';
    local_98[0x50] = '\0';
    local_98[0x51] = '\0';
    local_98[0x52] = '\0';
    local_98[0x53] = '\0';
    local_98[0x54] = '\0';
    local_98[0x55] = '\0';
    local_98[0x56] = '\0';
    local_98[0x57] = '\0';
    local_98[0x58] = '\0';
    local_98[0x59] = '\0';
    local_98[0x5a] = '\0';
    local_98[0x5b] = '\0';
    local_98[0x5c] = '\0';
    local_98[0x5d] = '\0';
    local_98[0x5e] = '\0';
    local_98[0x5f] = '\0';
    local_98[0x60] = '\0';
    local_98[0x61] = '\0';
    local_98[0x62] = '\0';
    local_98[99] = '\0';
    local_98[100] = '\0';
    local_98[0x65] = '\0';
    local_98[0x66] = '\0';
    local_98[0x67] = '\0';
    local_98[0x68] = '\0';
    local_98[0x69] = '\0';
    local_98[0x6a] = '\0';
    local_98[0x6b] = '\0';
    local_98[0x6c] = '\0';
    local_98[0x6d] = '\0';
    local_98[0x6e] = '\0';
    local_98[0x6f] = '\0';
    local_98[0x70] = '\0';
    local_98[0x71] = '\0';
    local_98[0x72] = '\0';
    local_98[0x73] = '\0';
    local_98[0x74] = '\0';
    local_98[0x75] = '\0';
    local_98[0x76] = '\0';
    local_98[0x77] = '\0';
    local_98[0x78] = '\0';
    local_98[0x79] = '\0';
    local_98[0x7a] = '\0';
    local_98[0x7b] = '\0';
    local_98[0x7c] = '\0';
    local_98[0x7d] = '\0';
    local_98[0x7e] = '\0';
    local_98[0x7f] = '\0';
    uVar3 = FUN_18000f3a0((ulonglong)DAT_180ca0a08 + local_e8);
    cVar2 = FUN_1803a05b0(uVar3,local_98);
    if (cVar2 == '\0') goto LAB_1800d7e9e;
    local_e0[0] = 0;
    local_e0[1] = 0;
    local_e0[2] = 0;
    local_e0[3] = 0;
    sVar4 = strlen(local_98);
    FUN_1800133a0(local_e0,local_98,sVar4);
  }
  FUN_1800d7300(local_c0,local_e0);
  if ((ulonglong)local_e0[3] < 0x10) {
LAB_1800d7efe:
    puVar10 = auStack_108;
    if (local_b0 == 0) {
      FUN_18000f890(local_c0);
      puVar10 = auStack_108;
      goto LAB_1800d7fb1;
    }
  }
  else {
    uVar6 = local_e0[3] + 1;
    lVar5 = local_e0[0];
    if (uVar6 < 0x1000) {
LAB_1800d7ef9:
      thunk_FUN_1803d64e0(lVar5,uVar6);
      goto LAB_1800d7efe;
    }
    lVar5 = *(longlong *)(local_e0[0] + -8);
    if ((local_e0[0] - lVar5) - 8U < 0x20) {
      uVar6 = local_e0[3] + 0x28;
      goto LAB_1800d7ef9;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar10 = auStack_100;
  }
  pppuVar7 = local_c0;
  if (0xf < local_a8) {
    pppuVar7 = local_c0[0];
  }
  *(undefined8 *)(puVar10 + -8) = 0x1800d7f39;
  FUN_180029840(&DAT_1809ebbf0,pppuVar7);
  DAT_180ca3cac = 1;
  *(undefined8 *)(puVar10 + -8) = 0x1800d7f49;
  FUN_18000f890(local_c0);
  DAT_180ca3caf = 1;
  DAT_180cd0e50 = (uint)(DAT_180920e28 == 1);
  DAT_180cd0e68 = 0;
  DAT_1809e9bc8 = 1;
  DAT_180cd0e58 = 0;
  puVar9 = &DAT_1809ebbf0;
  if (0xf < DAT_1809ebc08) {
    puVar9 = DAT_1809ebbf0;
  }
  pcVar8 = "neverlose.one";
  if (DAT_180cd0e50 == 1) {
    pcVar8 = "neverlose";
  }
  *(undefined8 *)(puVar10 + -8) = 0x1800d7fb1;
  FUN_1802b2560("[clantag] on | style %s | base name \"%s\"",pcVar8,puVar9);
LAB_1800d7fb1:
  *(undefined8 *)(puVar10 + -8) = 0x1800d7fbd;
  return;
}



/* ===== 1800d7fe0 FUN_1800d7fe0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d7fe0(void)

{
  char *_Str;
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Db;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  uint local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  longlong local_90 [12];
  
  local_90[8] = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a0.QuadPart = 0;
  local_98.QuadPart = 0;
  QueryPerformanceCounter(&local_a0);
  QueryPerformanceFrequency(&local_98);
  puVar15 = auStack_c8;
  dVar3 = (double)local_a0.QuadPart;
  dVar2 = (double)local_98.QuadPart;
  if (dVar3 / dVar2 < DAT_180cd0e58) goto LAB_1800d81f7;
  if (DAT_180cd0e50 == 1) {
    ppuVar13 = &PTR_DAT_1805d4890;
    iVar17 = 0x18;
    puVar16 = &DAT_1805d4898;
  }
  else {
    ppuVar13 = &PTR_DAT_1805d46c0;
    iVar17 = 0x1c;
    puVar16 = &DAT_1805d46c8;
  }
  lVar6 = (longlong)DAT_180cd0e68;
  if ((DAT_180cd0e68 == 0) && (DAT_1809e9bc8 == -1)) {
    bVar4 = true;
    local_90[5] = 0;
    local_90[6] = 0;
    local_90[7] = 0xf;
    local_90[4] = 0;
    plVar9 = local_90 + 4;
    uVar12 = 1;
  }
  else {
    bVar4 = false;
    _Str = ppuVar13[lVar6 * 2];
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    sVar7 = strlen(_Str);
    FUN_1800133a0(local_90,_Str,sVar7);
    plVar9 = local_90;
    uVar12 = 2;
  }
  local_a8 = uVar12;
  FUN_1800d75b0(plVar9);
  if (((uVar12 & 2) == 0) || (uVar12 = uVar12 & 0xfffffffd, (ulonglong)local_90[3] < 0x10)) {
LAB_1800d8155:
    puVar14 = auStack_c8;
    if (((uVar12 & 1) != 0) && (0xf < (ulonglong)local_90[7])) {
      uVar11 = local_90[7] + 1;
      lVar10 = local_90[4];
      if (0xfff < uVar11) {
        lVar10 = *(longlong *)(local_90[4] + -8);
        if (0x1f < (local_90[4] - lVar10) - 8U) goto LAB_1800d81c3;
        uVar11 = local_90[7] + 0x28;
      }
      thunk_FUN_1803d64e0(lVar10,uVar11);
    }
    uVar18 = (undefined4)*(undefined8 *)(puVar16 + lVar6 * 0x10);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(puVar16 + lVar6 * 0x10) >> 0x20);
    puVar15 = auStack_c8;
    iVar5 = DAT_180cd0e68;
    iVar8 = DAT_1809e9bc8;
    if ((DAT_180cd0e68 != iVar17) || (puVar15 = auStack_c8, DAT_1809e9bc8 != 1)) goto LAB_1800d81ca;
    DAT_1809e9bc8 = -1;
    DAT_180cd0e68 = DAT_180cd0e68 + -1;
    puVar15 = auStack_c8;
  }
  else {
    uVar11 = local_90[3] + 1;
    lVar10 = local_90[0];
    if (uVar11 < 0x1000) {
LAB_1800d814f:
      thunk_FUN_1803d64e0(lVar10,uVar11);
      goto LAB_1800d8155;
    }
    lVar10 = *(longlong *)(local_90[0] + -8);
    if ((local_90[0] - lVar10) - 8U < 0x20) {
      uVar11 = local_90[3] + 0x28;
      goto LAB_1800d814f;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar14 = auStack_c0;
LAB_1800d81c3:
    iVar8 = 5;
    pcVar1 = (code *)swi(0x29);
    iVar5 = (*pcVar1)();
    puVar15 = puVar14 + 8;
    uVar18 = extraout_XMM0_Da;
    uVar19 = extraout_XMM0_Db;
LAB_1800d81ca:
    if (!bVar4) {
      DAT_180cd0e68 = iVar5 + iVar8;
    }
    else {
      uVar18 = (undefined4)DAT_1808ac500;
      uVar19 = (undefined4)((ulonglong)DAT_1808ac500 >> 0x20);
      DAT_1809e9bc8 = 1;
    }
  }
  DAT_180cd0e58 = (double)CONCAT44(uVar19,uVar18) + dVar3 / dVar2;
LAB_1800d81f7:
  *(undefined8 *)(puVar15 + -8) = 0x1800d8204;
  return;
}



/* ===== 1800d8220 FUN_1800d8220 ===== */

undefined8 * FUN_1800d8220(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pbVar2 = param_2;
  }
  else {
    pbVar2 = *(byte **)param_2;
  }
  pbVar3 = pbVar2 + *(longlong *)(param_2 + 0x10);
  for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
    bVar1 = *pbVar2;
    if (((0x3e < bVar1) || ((0x5800008400002400U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0)) &&
       (bVar1 != 0x5c)) {
      FUN_1800690a0(param_1);
    }
  }
  return param_1;
}



/* ===== 1800d82c0 FUN_1800d82c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d82c0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 ******ppppppuVar9;
  char *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_138 [40];
  undefined8 ******appppppuStack_110 [3];
  ulonglong uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [32];
  ulonglong uStack_b0;
  longlong alStack_a8 [4];
  undefined8 local_88;
  undefined8 ******local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong uStack_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)alStack_a8;
  if (DAT_180961ab0 == 0) {
    return;
  }
  uStack_b0 = 0x1800d82f5;
  lVar2 = FUN_18000f3a0();
  if (lVar2 == 0) {
    return;
  }
  uStack_b0 = 0x1800d8307;
  lVar2 = FUN_18000f3a0(lVar2 + 8);
  if (lVar2 == 0) {
    return;
  }
  uStack_b0 = 0x1800d831b;
  lVar3 = FUN_18000f3a0(lVar2);
  if (lVar3 == 0) {
    return;
  }
  uStack_b0 = 0x1800d832c;
  lVar3 = FUN_18000f3a0(lVar3);
  if (lVar3 == 0) {
    return;
  }
  if (DAT_180cd0e70 != lVar2) {
    uStack_b0 = 0x1800d8343;
    cVar1 = FUN_180200ed0();
    if (cVar1 == '\0') {
      return;
    }
    uStack_b0 = 0x1800d8350;
    lVar3 = FUN_180200ff0();
    if (lVar3 == 0) {
      return;
    }
    uStack_b0 = 0x1800d8364;
    lVar4 = FUN_18000f3a0(lVar3);
    if (lVar4 == 0) {
      return;
    }
    uStack_b0 = 0x1800d8379;
    pcVar5 = (code *)FUN_18000f3a0(lVar4 + 0x268);
    if (pcVar5 < DAT_180ceb448) {
      return;
    }
    if (DAT_180ceb440 <= pcVar5) {
      return;
    }
    local_88 = 1;
    uStack_b0 = 0x1800d83b2;
    (*pcVar5)(lVar3,lVar2,
              "\n(function () {\n    var root = $.GetContextPanel();\n    while (root && root.GetParent && root.GetParent()) root = root.GetParent();\n    if (!root) return;\n    var keep = root.Data();\n    var plain = function (text) { return String(text).replace(/[<>;\"\'\\\\]/g, \'\'); };\n    keep.wlLocal = function (token, arg) {\n        var text = token;\n        try { if (token && token.charAt(0) === \'#\') text = $.Localize(token); } catch (e) {}\n        var value = arg;\n        try { if (arg && arg.charAt(0) === \'#\') value = $.Localize(arg); } catch (e) {}\n        if (value) text = String(text).replace(\'%s1\', value);\n        return plain(text);\n    };\n    keep.wlSay = function (text, chat, console) {\n        if (console) { try { GameInterfaceAPI.ConsoleCommand(\'echo neverlose \\u00bb \' + plain(text)); } catch (e) {} }\n        if (!chat) return;\n        try {\n            var lines = root.FindChildTraverse(\'ChatLinesContainer\');\n            if (!lines) return;\n            var line = $.CreatePanel(\'Label\', lines, \'\', { class: \'chat-entry\', html: \'true\' });\n            if (!line) return;\n            line.html = true;\n            line.text = \"<font color=\'#96A4FF\'>neverlose</font> \\u00bb \" + plain(text);\n        } catch (e) {}\n    };\n    keep.wlVoteStart = function (chat, console, by) {\n        var text = \'\';\n        try {\n            var vote = root.FindChildTraverse(\'HudVote\');\n            var label = vote ? vote.FindChildTraverse(\'VoteDescLabel\') : null;\n            if (label && label.text) text = label.text;\n        } catch (e) {}\n        keep.wlSay(\'vote started\' + (text ? \': \' + plain(text) : \'\') + (by ? \' (by \' + by + \')\' : \'\'), chat, console);\n    };\n})();\n"
              ,&DAT_18070230d);
    DAT_180cd0e70 = lVar2;
  }
  uStack_b0 = 0x1800d83cd;
  uVar6 = FUN_180066a20(local_50,
                        "(function(){var r=$.GetContextPanel();while(r&&r.GetParent&&r.GetParent())r=r.GetParent();var k=r?r.Data():null;if(!k||!k.wlSay)return;"
                        ,param_1);
  uStack_b0 = 0x1800d83e3;
  puVar7 = (undefined8 *)FUN_1800134a0(uVar6,"})();",5);
  local_70 = (undefined8 ******)*puVar7;
  uStack_68 = puVar7[1];
  local_60 = puVar7[2];
  uStack_58 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  *(undefined1 *)puVar7 = 0;
  uStack_b0 = 0x1800d841f;
  FUN_18000f890(local_50);
  if (uStack_58 < 0x10) {
    ppppppuVar9 = &local_70;
LAB_1800d843b:
    uStack_b0 = 0x1800d8440;
    cVar1 = FUN_180200ed0();
    if (cVar1 != '\0') {
      uStack_b0 = 0x1800d8449;
      lVar3 = FUN_180200ff0();
      if (lVar3 != 0) {
        uStack_b0 = 0x1800d8459;
        lVar4 = FUN_18000f3a0(lVar3);
        if (lVar4 != 0) {
          uStack_b0 = 0x1800d846a;
          pcVar5 = (code *)FUN_18000f3a0(lVar4 + 0x268);
          if ((DAT_180ceb448 <= pcVar5) && (pcVar5 < DAT_180ceb440)) {
            local_88 = 1;
            uStack_b0 = 0x1800d8497;
            (*pcVar5)(lVar3,lVar2,ppppppuVar9,&DAT_18070230d);
          }
        }
      }
    }
  }
  else {
    ppppppuVar9 = local_70;
    if (local_70 != (undefined8 ******)0x0) goto LAB_1800d843b;
  }
  if (0xf < uStack_58) {
    pcVar10 = (char *)(uStack_58 + 1);
    ppppppuVar9 = local_70;
    if ((char *)0xfff < pcVar10) {
      ppppppuVar9 = (undefined8 ******)local_70[-1];
      if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)ppppppuVar9))) {
        uVar6 = 5;
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        uStack_b0 = DAT_180919500 ^ (ulonglong)auStack_138;
        if (((*pcVar10 != '\0') || (pcVar10[1] != '\0')) || (pcVar10[2] != '\0')) {
          alStack_a8[0] = lVar2;
          FUN_1800d8220(appppppuStack_110,uVar6);
          if (pcVar10[1] != '\0') {
            ppppppuVar9 = appppppuStack_110;
            if (0xf < uStack_f8) {
              ppppppuVar9 = appppppuStack_110[0];
            }
            FUN_1802b2560(&DAT_1806d3198,ppppppuVar9);
          }
          if (*pcVar10 != '\0') {
            if ((DAT_180961aa8 == 0) || (DAT_180961d40 == 0)) {
              uVar6 = FUN_180066a20(auStack_d0,"k.wlSay(\'",appppppuStack_110);
              puVar8 = (undefined4 *)FUN_1800134a0(uVar6,"\',true,false);",0xe);
              uStack_f0 = *puVar8;
              uStack_ec = puVar8[1];
              uStack_e8 = puVar8[2];
              uStack_e4 = puVar8[3];
              uStack_e0 = puVar8[4];
              uStack_dc = puVar8[5];
              uStack_d8 = puVar8[6];
              uStack_d4 = puVar8[7];
              *(undefined8 *)(puVar8 + 4) = 0;
              *(undefined8 *)(puVar8 + 6) = 0xf;
              *(undefined1 *)puVar8 = 0;
              FUN_1800d82c0(&uStack_f0);
              uVar12 = CONCAT44(uStack_d4,uStack_d8);
              if (0xf < uVar12) {
                uVar11 = uVar12 + 1;
                lVar3 = CONCAT44(uStack_ec,uStack_f0);
                lVar2 = lVar3;
                if (0xfff < uVar11) {
                  lVar2 = *(longlong *)(lVar3 + -8);
                  if (0x1f < (lVar3 - lVar2) - 8U) {
                    pcVar5 = (code *)swi(0x29);
                    (*pcVar5)(5);
                    goto LAB_1800d868d;
                  }
                  uVar11 = uVar12 + 0x28;
                }
                thunk_FUN_1803d64e0(lVar2,uVar11);
              }
              FUN_18000f890(auStack_d0);
            }
            else {
              ppppppuVar9 = appppppuStack_110;
              if (0xf < uStack_f8) {
                ppppppuVar9 = appppppuStack_110[0];
              }
              FUN_1802b2d80(&DAT_1806d3198,ppppppuVar9);
            }
          }
          if (0xf < uStack_f8) {
            uVar12 = uStack_f8 + 1;
            ppppppuVar9 = appppppuStack_110[0];
            if (0xfff < uVar12) {
              ppppppuVar9 = (undefined8 ******)appppppuStack_110[0][-1];
              if (0x1f < (ulonglong)((longlong)appppppuStack_110[0] + (-8 - (longlong)ppppppuVar9)))
              {
LAB_1800d868d:
                pcVar5 = (code *)swi(0x29);
                (*pcVar5)(5);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar12 = uStack_f8 + 0x28;
            }
            thunk_FUN_1803d64e0(ppppppuVar9,uVar12);
          }
        }
        return;
      }
      pcVar10 = (char *)(uStack_58 + 0x28);
    }
    uStack_b0 = 0x1800d84d0;
    thunk_FUN_1803d64e0(ppppppuVar9,pcVar10);
  }
  return;
}



/* ===== 1800d84f0 FUN_1800d84f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d84f0(undefined8 param_1,char *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [40];
  undefined8 ****local_70 [3];
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_98;
  if (((*param_2 != '\0') || (param_2[1] != '\0')) || (param_2[2] != '\0')) {
    FUN_1800d8220(local_70,param_1);
    if (param_2[1] != '\0') {
      ppppuVar6 = local_70;
      if (0xf < local_58) {
        ppppuVar6 = local_70[0];
      }
      FUN_1802b2560(&DAT_1806d3198,ppppuVar6);
    }
    if (*param_2 != '\0') {
      if ((DAT_180961aa8 == 0) || (DAT_180961d40 == 0)) {
        uVar3 = FUN_180066a20(local_30,"k.wlSay(\'",local_70);
        puVar4 = (undefined4 *)FUN_1800134a0(uVar3,"\',true,false);",0xe);
        local_50 = *puVar4;
        uStack_4c = puVar4[1];
        uStack_48 = puVar4[2];
        uStack_44 = puVar4[3];
        local_40 = puVar4[4];
        uStack_3c = puVar4[5];
        uStack_38 = puVar4[6];
        uStack_34 = puVar4[7];
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0xf;
        *(undefined1 *)puVar4 = 0;
        FUN_1800d82c0(&local_50);
        uVar8 = CONCAT44(uStack_34,uStack_38);
        if (0xf < uVar8) {
          uVar7 = uVar8 + 1;
          lVar2 = CONCAT44(uStack_4c,local_50);
          lVar5 = lVar2;
          if (0xfff < uVar7) {
            lVar5 = *(longlong *)(lVar2 + -8);
            if (0x1f < (lVar2 - lVar5) - 8U) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              goto LAB_1800d868d;
            }
            uVar7 = uVar8 + 0x28;
          }
          thunk_FUN_1803d64e0(lVar5,uVar7);
        }
        FUN_18000f890(local_30);
      }
      else {
        ppppuVar6 = local_70;
        if (0xf < local_58) {
          ppppuVar6 = local_70[0];
        }
        FUN_1802b2d80(&DAT_1806d3198,ppppuVar6);
      }
    }
    if (0xf < local_58) {
      uVar8 = local_58 + 1;
      ppppuVar6 = local_70[0];
      if (0xfff < uVar8) {
        ppppuVar6 = (undefined8 ****)local_70[0][-1];
        if (0x1f < (ulonglong)((longlong)local_70[0] + (-8 - (longlong)ppppuVar6))) {
LAB_1800d868d:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar8 = local_58 + 0x28;
      }
      thunk_FUN_1803d64e0(ppppuVar6,uVar8);
    }
  }
  return;
}



/* ===== 1800d86a0 FUN_1800d86a0 ===== */

undefined8 FUN_1800d86a0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
      pcVar1 = param_2;
    }
    else {
      pcVar1 = *(char **)param_2;
    }
    if (*pcVar1 == '#') {
      if (DAT_180cfc838 == 0) {
        hModule = GetModuleHandleA("localize.dll");
        if ((hModule == (HMODULE)0x0) ||
           (pFVar2 = GetProcAddress(hModule,"CreateInterface"), pFVar2 == (FARPROC)0x0)) {
          DAT_180cfc838 = 0;
        }
        else {
          DAT_180cfc838 = (*pFVar2)("Localize_001",0);
        }
      }
      FUN_1802777c0(param_1,param_2,param_2);
      return param_1;
    }
  }
  FUN_180024b50();
  return param_1;
}



/* ===== 1800d8750 FUN_1800d8750 ===== */

undefined8 *
FUN_1800d8750(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar6 = param_1[2];
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18002a1a0();
  }
  uVar3 = param_1[3];
  uVar4 = uVar6 - param_2;
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  if (param_3 == param_5) {
    if (uVar3 < 0x10) {
      puVar5 = param_1;
    }
    else {
      puVar5 = (undefined8 *)*param_1;
    }
    FUN_180540530((longlong)puVar5 + param_2,param_4,param_5);
  }
  else {
    lVar1 = (uVar4 - param_3) + 1;
    if (param_5 < param_3) {
      if (uVar3 < 0x10) {
        puVar5 = param_1;
      }
      else {
        puVar5 = (undefined8 *)*param_1;
      }
      lVar2 = (longlong)puVar5 + param_2;
      FUN_180540530(lVar2,param_4,param_5);
      FUN_180540530(lVar2 + param_5,param_3 + lVar2,lVar1);
      param_1[2] = (uVar6 - param_3) + param_5;
    }
    else {
      uVar4 = param_5 - param_3;
      if (uVar3 - uVar6 < uVar4) {
        param_1 = (undefined8 *)FUN_1800d8900(param_1,uVar4,lVar1,param_2,param_3,param_4,param_5);
      }
      else {
        param_1[2] = uVar6 + uVar4;
        if (uVar3 < 0x10) {
          puVar5 = param_1;
        }
        else {
          puVar5 = (undefined8 *)*param_1;
        }
        param_2 = (longlong)puVar5 + param_2;
        param_3 = param_3 + param_2;
        if ((param_2 < param_4 + param_5) && (param_4 <= uVar6 + (longlong)puVar5)) {
          if (param_4 < param_3) {
            uVar6 = param_3 - param_4;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = param_5;
        }
        FUN_180540530(param_3 + uVar4);
        FUN_180540530(param_2,param_4,uVar6);
        FUN_180540530(uVar6 + param_2,uVar6 + uVar4 + param_4,param_5 - uVar6);
      }
    }
  }
  return param_1;
}



/* ===== 1800d8900 FUN_1800d8900 ===== */

ulonglong *
FUN_1800d8900(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  uVar9 = param_1[2];
  if (0x7fffffffffffffff - uVar9 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180011990();
  }
  uVar5 = param_1[3];
  uVar7 = uVar9 + param_2 | 0xf;
  uVar8 = 0x7fffffffffffffff;
  if (((uVar7 < 0x8000000000000000) && (uVar5 <= 0x7fffffffffffffff - (uVar5 >> 1))) &&
     (uVar3 = (uVar5 >> 1) + uVar5, uVar8 = uVar7, uVar7 < uVar3)) {
    uVar8 = uVar3;
  }
  uVar7 = FUN_18000fb70(uVar8 + 1);
  param_1[3] = uVar8;
  param_1[2] = uVar9 + param_2;
  lVar4 = uVar7 + param_4;
  lVar1 = ((uVar9 - param_4) - param_5) + 1;
  if (uVar5 < 0x10) {
    FUN_180540530(uVar7,param_1,param_4);
    FUN_180540530(lVar4,param_6,param_7);
    FUN_180540530(lVar4 + param_7,(longlong)param_1 + param_5 + param_4,lVar1);
  }
  else {
    uVar9 = *param_1;
    FUN_180540530(uVar7,uVar9,param_4);
    FUN_180540530(lVar4,param_6,param_7);
    FUN_180540530(lVar4 + param_7,uVar9 + param_4 + param_5,lVar1);
    puVar10 = auStack_48;
    if (0xfff < uVar5 + 1) {
      plVar2 = (longlong *)(uVar9 - 8);
      uVar9 = (uVar9 - *plVar2) - 8;
      if (uVar9 < 0x20) {
        thunk_FUN_1803d64e0(*plVar2,uVar5 + 0x28);
        goto LAB_1800d8a49;
      }
      pcVar6 = (code *)swi(0x29);
      (*pcVar6)(5);
      puVar10 = auStack_40;
    }
    *(undefined8 *)(puVar10 + -8) = 0x1800d8a1c;
    thunk_FUN_1803d64e0(uVar9);
  }
LAB_1800d8a49:
  *param_1 = uVar7;
  return param_1;
}



/* ===== 1800d8a80 FUN_1800d8a80 ===== */

void FUN_1800d8a80(void)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((DAT_180cd0e88 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd0e8c = FUN_18038eaf0("C_VoteController","m_iActiveIssueIndex");
    DAT_180cd0e90 = FUN_18038eaf0("C_VoteController","m_iOnlyTeamToVote");
    DAT_180cd0e94 = FUN_18038eaf0("C_VoteController","m_nVoteOptionCount");
    DAT_180cd0e98 = FUN_18038eaf0("C_VoteController","m_nPotentialVotes");
    DAT_180cd0e9c = FUN_18038eaf0("C_VoteController","m_bIsYesNoVote");
    DAT_180cd0ea0 = FUN_18038eaf0("CBasePlayerController","m_steamID");
    DAT_180cd0e88 = '\x01';
    if ((DAT_180961db0 != 0) &&
       (uVar1 = DAT_180961db0 + 0x60, uVar4 = DAT_180961db0, DAT_180961db0 < uVar1)) {
      while (((cVar2 = FUN_180011220(uVar4), cVar2 != 'L' ||
              (cVar2 = FUN_180011220(uVar4 + 1), cVar2 != -0x73)) ||
             (cVar2 = FUN_180011220(uVar4 + 2), cVar2 != '\x05'))) {
        uVar4 = uVar4 + 1;
        if (uVar1 <= uVar4) {
          return;
        }
      }
      iVar3 = FUN_180011200(uVar4 + 3);
      DAT_180cd0ec0 = (longlong)iVar3 + 7 + uVar4;
    }
  }
  return;
}



/* ===== 1800d8bd0 FUN_1800d8bd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800d8bd0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 ***local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  uVar2 = FUN_18000f3a0(param_3 + param_2);
  uVar2 = uVar2 & 0xfffffffffffffffc;
  if (uVar2 - 0x10000 < 0x7ffffffeffff) {
    uVar3 = FUN_18000f3a0(uVar2 + 0x10);
    uVar4 = FUN_18000f3a0(uVar2 + 0x18);
    if (uVar3 - 1 < 0x100) {
      if (0xf < uVar4) {
        uVar2 = FUN_18000f3a0(uVar2);
      }
      FUN_1800969e0(&local_58,uVar3,0);
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          uVar1 = FUN_180011220(uVar4 + uVar2);
          pppuVar5 = &local_58;
          if (0xf < uStack_40) {
            pppuVar5 = local_58;
          }
          *(undefined1 *)((longlong)pppuVar5 + uVar4) = uVar1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      *param_1 = (longlong)local_58;
      param_1[1] = lStack_50;
      param_1[2] = local_48;
      param_1[3] = uStack_40;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}



/* ===== 1800d8d10 FUN_1800d8d10 ===== */

longlong * FUN_1800d8d10(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0x3f < param_2) {
    *param_1 = 0;
    return param_1;
  }
  param_2 = param_2 + 1;
  if (-1 < (int)param_2) {
    lVar1 = FUN_18000f3a0(DAT_1809619d0);
    if (lVar1 != 0) {
      lVar1 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                            (ulonglong)(uint)(((int)param_2 >> 9) * DAT_180961944) + lVar1);
      if (lVar1 - 0x10000U < 0xfffffffffffeffff) {
        lVar2 = FUN_18000f3a0((ulonglong)((param_2 & 0x1ff) * DAT_180961948) + lVar1);
        lVar1 = 0;
        if (lVar2 - 0x10000U < 0xfffffffffffeffff) {
          lVar1 = lVar2;
        }
        *param_1 = lVar1;
        return param_1;
      }
    }
  }
  *param_1 = 0;
  return param_1;
}



/* ===== 1800d8dd0 FUN_1800d8dd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1800d8dd0(char *param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong ****pppplVar3;
  ulonglong uVar4;
  longlong *****ppppplVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  uint local_b8;
  char *local_b0;
  longlong ****local_a8;
  longlong ****pppplStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong *****local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  if (param_2 == 99) {
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
    param_1[0x10] = '\x06';
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
    *(undefined4 *)param_1 = s_server_1806f130c._0_4_;
    *(undefined2 *)(param_1 + 4) = s_server_1806f130c._4_2_;
    param_1[6] = '\0';
    return param_1;
  }
  local_b0 = param_1;
  FUN_1800d8d10(&local_b0);
  if (local_b0 == (char *)0x0) {
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0xf;
    local_88 = (longlong *****)0x0;
  }
  else {
    FUN_1803a0620(&local_b0,&local_88);
  }
  uVar6 = local_78;
  puVar9 = auStack_d8;
  if (local_78 == 0) {
    uVar2 = FUN_18003a390(local_48,param_2);
    local_b8 = 2;
    pppplVar3 = (longlong ****)FUN_180066ab0(local_68,"slot ",uVar2);
    uVar7 = 6;
  }
  else {
    local_a8 = (longlong ****)0x0;
    pppplStack_a0 = (longlong ****)0x0;
    local_98 = 0;
    local_90 = 0;
    ppppplVar5 = (longlong *****)&local_88;
    if (0xf < local_70) {
      ppppplVar5 = local_88;
    }
    if (0x7fffffffffffffff < local_78) goto LAB_1800d902b;
    if (local_78 < 0x10) {
      local_90 = 0xf;
      local_a8 = *ppppplVar5;
      pppplStack_a0 = ppppplVar5[1];
      local_98 = local_78;
    }
    else {
      uVar4 = local_78 | 0xf;
      uVar10 = 0x7fffffffffffffff;
      if ((uVar4 < 0x8000000000000000) && (uVar10 = uVar4, uVar4 < 0x16)) {
        uVar10 = 0x16;
      }
      local_a8 = (longlong ****)FUN_18000fb70(uVar10 + 1);
      local_98 = uVar6;
      local_90 = uVar10;
      FUN_180540530(local_a8,ppppplVar5,uVar6 + 1);
    }
    pppplVar3 = (longlong ****)&local_a8;
    uVar7 = 8;
  }
  local_b8 = uVar7;
  FUN_180024b50(param_1,pppplVar3);
  if (((uVar7 & 8) == 0) || (uVar7 = uVar7 & 0xfffffff7, local_90 < 0x10)) {
LAB_1800d8f9e:
    if ((uVar7 & 4) != 0) {
      uVar7 = uVar7 & 0xfffffffb;
      FUN_18000f890(local_68);
    }
    if ((uVar7 & 2) != 0) {
      FUN_18000f890(local_48);
    }
    puVar8 = auStack_d8;
    if (local_70 < 0x10) {
      return param_1;
    }
    uVar6 = local_70 + 1;
    ppppplVar5 = local_88;
    if (uVar6 < 0x1000) {
LAB_1800d8ff1:
      thunk_FUN_1803d64e0(ppppplVar5,uVar6);
      return param_1;
    }
    ppppplVar5 = (longlong *****)local_88[-1];
    if ((ulonglong)((longlong)local_88 + (-8 - (longlong)ppppplVar5)) < 0x20) {
      uVar6 = local_70 + 0x28;
      goto LAB_1800d8ff1;
    }
  }
  else {
    uVar6 = local_90 + 1;
    pppplVar3 = local_a8;
    if (uVar6 < 0x1000) {
LAB_1800d8f98:
      thunk_FUN_1803d64e0(pppplVar3,uVar6);
      goto LAB_1800d8f9e;
    }
    pppplVar3 = (longlong ****)local_a8[-1];
    if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)pppplVar3)) < 0x20) {
      uVar6 = local_90 + 0x28;
      goto LAB_1800d8f98;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar8 = auStack_d0;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar9 = puVar8 + 8;
LAB_1800d902b:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_1800d9030;
  FUN_180011990();
}



/* ===== 1800d9040 FUN_1800d9040 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800d9040(undefined8 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined1 local_a8 [32];
  char local_88 [96];
  ulonglong local_28;
  
  lVar6 = DAT_180cd0ec0;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_b0 = param_1;
  if (DAT_180cd0ec0 != 0) {
    uVar5 = 0;
    do {
      lVar7 = uVar5 * 0x10 + lVar6;
      iVar2 = FUN_180011200(lVar7);
      if (iVar2 == param_2) {
        lVar7 = FUN_18000f3a0(lVar7 + 8);
        local_88[0] = '\0';
        local_88[1] = '\0';
        local_88[2] = '\0';
        local_88[3] = '\0';
        local_88[4] = '\0';
        local_88[5] = '\0';
        local_88[6] = '\0';
        local_88[7] = '\0';
        local_88[8] = '\0';
        local_88[9] = '\0';
        local_88[10] = '\0';
        local_88[0xb] = '\0';
        local_88[0xc] = '\0';
        local_88[0xd] = '\0';
        local_88[0xe] = '\0';
        local_88[0xf] = '\0';
        local_88[0x10] = '\0';
        local_88[0x11] = '\0';
        local_88[0x12] = '\0';
        local_88[0x13] = '\0';
        local_88[0x14] = '\0';
        local_88[0x15] = '\0';
        local_88[0x16] = '\0';
        local_88[0x17] = '\0';
        local_88[0x18] = '\0';
        local_88[0x19] = '\0';
        local_88[0x1a] = '\0';
        local_88[0x1b] = '\0';
        local_88[0x1c] = '\0';
        local_88[0x1d] = '\0';
        local_88[0x1e] = '\0';
        local_88[0x1f] = '\0';
        local_88[0x20] = '\0';
        local_88[0x21] = '\0';
        local_88[0x22] = '\0';
        local_88[0x23] = '\0';
        local_88[0x24] = '\0';
        local_88[0x25] = '\0';
        local_88[0x26] = '\0';
        local_88[0x27] = '\0';
        local_88[0x28] = '\0';
        local_88[0x29] = '\0';
        local_88[0x2a] = '\0';
        local_88[0x2b] = '\0';
        local_88[0x2c] = '\0';
        local_88[0x2d] = '\0';
        local_88[0x2e] = '\0';
        local_88[0x2f] = '\0';
        local_88[0x30] = '\0';
        local_88[0x31] = '\0';
        local_88[0x32] = '\0';
        local_88[0x33] = '\0';
        local_88[0x34] = '\0';
        local_88[0x35] = '\0';
        local_88[0x36] = '\0';
        local_88[0x37] = '\0';
        local_88[0x38] = '\0';
        local_88[0x39] = '\0';
        local_88[0x3a] = '\0';
        local_88[0x3b] = '\0';
        local_88[0x3c] = '\0';
        local_88[0x3d] = '\0';
        local_88[0x3e] = '\0';
        local_88[0x3f] = '\0';
        local_88[0x40] = '\0';
        local_88[0x41] = '\0';
        local_88[0x42] = '\0';
        local_88[0x43] = '\0';
        local_88[0x44] = '\0';
        local_88[0x45] = '\0';
        local_88[0x46] = '\0';
        local_88[0x47] = '\0';
        local_88[0x48] = '\0';
        local_88[0x49] = '\0';
        local_88[0x4a] = '\0';
        local_88[0x4b] = '\0';
        local_88[0x4c] = '\0';
        local_88[0x4d] = '\0';
        local_88[0x4e] = '\0';
        local_88[0x4f] = '\0';
        local_88[0x50] = '\0';
        local_88[0x51] = '\0';
        local_88[0x52] = '\0';
        local_88[0x53] = '\0';
        local_88[0x54] = '\0';
        local_88[0x55] = '\0';
        local_88[0x56] = '\0';
        local_88[0x57] = '\0';
        local_88[0x58] = '\0';
        local_88[0x59] = '\0';
        local_88[0x5a] = '\0';
        local_88[0x5b] = '\0';
        local_88[0x5c] = '\0';
        local_88[0x5d] = '\0';
        local_88[0x5e] = '\0';
        local_88[0x5f] = '\0';
        lVar6 = 0;
        if (lVar7 == 0) goto LAB_1800d9154;
        goto LAB_1800d9133;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x23);
  }
  uVar3 = FUN_18003a390(local_a8,param_2);
  FUN_180066ab0(param_1,"reason ",uVar3);
  FUN_18000f890(local_a8);
  return param_1;
  while (uVar5 = lVar6 + 2, lVar6 = lVar6 + 1, uVar5 < 0x60) {
LAB_1800d9133:
    cVar1 = FUN_180011220(lVar6 + lVar7);
    local_88[lVar6] = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_1800d9154:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar4 = strlen(local_88);
  FUN_1800133a0(param_1,local_88,sVar4);
  return param_1;
}



/* ===== 1800d9190 FUN_1800d9190 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d9190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 ****local_d0;
  ulonglong local_c8;
  undefined8 ****local_b0 [2];
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 ****local_90 [2];
  longlong local_80;
  ulonglong local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if (((DAT_180920e45 != '\0') || (DAT_180920e46 != '\0')) || (DAT_180920e47 != '\0')) {
    FUN_1800d86a0(local_b0);
    FUN_1800d86a0(local_90,param_3);
    if (local_80 != 0) {
      ppppuVar4 = local_b0;
      if (0xf < local_98) {
        ppppuVar4 = local_b0[0];
      }
      if (((2 < local_a0) &&
          (lVar1 = local_a0 + (longlong)ppppuVar4,
          lVar2 = thunk_FUN_1804e92d0(ppppuVar4,lVar1,&DAT_1806f1274,3), lVar2 != lVar1)) &&
         (lVar2 - (longlong)ppppuVar4 != -1)) {
        ppppuVar5 = local_90;
        if (0xf < local_78) {
          ppppuVar5 = local_90[0];
        }
        local_d8 = local_80;
        FUN_1800d8750(local_b0,lVar2 - (longlong)ppppuVar4,3,ppppuVar5);
      }
    }
    if (0x7fffffffffffffffU - *(longlong *)(param_1 + 0x10) < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_180011990();
    }
    local_d0 = local_b0;
    if (0xf < local_98) {
      local_d0 = local_b0[0];
    }
    local_c8 = local_a0;
    local_d8 = *(longlong *)(param_1 + 0x10);
    FUN_180069380(local_70);
    uVar3 = FUN_1800667a0(local_50,local_70,param_4);
    FUN_1800d84f0(uVar3,&DAT_180920e45);
    FUN_18000f890(local_50);
    FUN_18000f890(local_70);
    FUN_18000f890(local_90);
    FUN_18000f890(local_b0);
  }
  return;
}



/* ===== 1800d9350 FUN_1800d9350 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800d9350(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  ulonglong local_90 [4];
  undefined8 *local_70;
  ulonglong local_68 [4];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  puVar11 = auStack_b8;
  local_28 = DAT_180919500 ^ (ulonglong)auStack_b8;
  local_70 = param_1;
  local_98 = 0;
  if (DAT_180962433 != '\0') {
    if (param_2 == 0) {
      local_90[1] = 0;
      local_90[2] = 3;
      local_90[3] = 0xf;
      local_90[0] = (ulonglong)(uint3)DAT_1806f1308;
      puVar6 = local_90;
      bVar5 = true;
      bVar12 = false;
      bVar4 = false;
    }
    else {
      bVar12 = param_2 != 1;
      if (bVar12) {
        uVar7 = FUN_18003a390(local_48,param_2 + 1);
        local_98 = 2;
        puVar6 = (ulonglong *)FUN_180066ab0(local_68,"option ",uVar7);
      }
      else {
        local_68[1] = 0;
        local_68[2] = 2;
        local_68[3] = 0xf;
        local_68[0] = (ulonglong)DAT_1806e54ac;
        puVar6 = local_68;
      }
      bVar5 = false;
      bVar4 = true;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar2 = *(undefined4 *)((longlong)puVar6 + 4);
    uVar8 = puVar6[1];
    uVar3 = *(undefined4 *)((longlong)puVar6 + 0xc);
    *(int *)param_1 = (int)*puVar6;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(int *)(param_1 + 1) = (int)uVar8;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    uVar2 = *(undefined4 *)((longlong)puVar6 + 0x14);
    uVar8 = puVar6[3];
    uVar3 = *(undefined4 *)((longlong)puVar6 + 0x1c);
    *(int *)(param_1 + 2) = (int)puVar6[2];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
    *(int *)(param_1 + 3) = (int)uVar8;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    *(undefined1 *)puVar6 = 0;
    if (!bVar4) {
LAB_1800d94a1:
      if (bVar12) {
        FUN_18000f890(local_48);
      }
      puVar10 = auStack_b8;
      puVar11 = auStack_b8;
      if ((!bVar5) || (puVar11 = auStack_b8, local_90[3] < 0x10)) goto LAB_1800d9527;
      uVar9 = local_90[3] + 1;
      uVar8 = local_90[0];
      if (0xfff < uVar9) {
        uVar8 = *(ulonglong *)(local_90[0] - 8);
        if (0x1f < (local_90[0] - uVar8) - 8) goto LAB_1800d94f8;
        uVar9 = local_90[3] + 0x28;
      }
      thunk_FUN_1803d64e0(uVar8,uVar9);
      puVar11 = auStack_b8;
      goto LAB_1800d9527;
    }
    if (local_68[3] < 0x10) {
LAB_1800d9491:
      local_68[2] = 0;
      local_68[3] = 0xf;
      local_68[0] = local_68[0] & 0xffffffffffffff00;
      goto LAB_1800d94a1;
    }
    uVar9 = local_68[3] + 1;
    uVar8 = local_68[0];
    if (uVar9 < 0x1000) {
LAB_1800d948c:
      thunk_FUN_1803d64e0(uVar8,uVar9);
      goto LAB_1800d9491;
    }
    uVar8 = *(ulonglong *)(local_68[0] - 8);
    if ((local_68[0] - uVar8) - 8 < 0x20) {
      uVar9 = local_68[3] + 0x28;
      goto LAB_1800d948c;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar10 = auStack_b0;
LAB_1800d94f8:
    param_2 = (int)uVar9;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar11 = puVar10 + 8;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1800d950a;
  uVar7 = FUN_18003a390(local_48,param_2 + 1);
  *(undefined8 *)(puVar11 + -8) = 0x1800d951d;
  FUN_180066ab0(param_1,"option ",uVar7);
  *(undefined8 *)(puVar11 + -8) = 0x1800d9527;
  FUN_18000f890(local_48);
LAB_1800d9527:
  *(undefined8 *)(puVar11 + -8) = 0x1800d9536;
  return param_1;
}



/* ===== 1800d9550 FUN_1800d9550 ===== */

void FUN_1800d9550(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = DAT_180cd0ee8;
  lVar2 = DAT_180cd0ee0;
  if (DAT_180cd0ee0 != DAT_180cd0ee8) {
    do {
      FUN_1800d84f0(lVar2,&DAT_180920e45);
      lVar1 = DAT_180cd0ee8;
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != lVar3);
    lVar3 = DAT_180cd0ee0;
    if (DAT_180cd0ee0 != DAT_180cd0ee8) {
      do {
        FUN_18000f890(lVar3);
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != lVar1);
      DAT_180cd0ee8 = DAT_180cd0ee0;
    }
  }
  return;
}



/* ===== 1800d95d0 FUN_1800d95d0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1800d95d0(char *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [32];
  char *local_50;
  undefined8 ****local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  if (((*param_2 != 0) && (DAT_180ca0a04 != 0)) &&
     (cVar5 = FUN_180011220(*param_2 + (ulonglong)DAT_180ca0a04), cVar5 != '\0')) {
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
    param_1[0x10] = '\x03';
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
    *(short *)param_1 = (short)DAT_1806f1340;
    param_1[2] = (char)((uint)DAT_1806f1340 >> 0x10);
    param_1[3] = '\0';
    return param_1;
  }
  if (*param_2 == 0) {
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0xf;
    local_48 = (undefined8 ****)0x0;
  }
  else {
    FUN_1803a0620(param_2,&local_48);
  }
  uVar9 = local_38;
  puVar10 = auStack_78;
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
  if (local_38 == 0) {
    param_1[0x10] = '\a';
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
    *(undefined4 *)param_1 = s_someone_1806e7908._0_4_;
    *(undefined2 *)(param_1 + 4) = s_someone_1806e7908._4_2_;
    param_1[6] = s_someone_1806e7908[6];
    param_1[7] = '\0';
  }
  else {
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
    ppppuVar8 = &local_48;
    if (0xf < local_30) {
      ppppuVar8 = local_48;
    }
    if (0x7fffffffffffffff < local_38) goto LAB_1800d97ac;
    if (local_38 < 0x10) {
      *(ulonglong *)(param_1 + 0x10) = local_38;
      param_1[0x18] = '\x0f';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      uVar2 = *(undefined4 *)((longlong)ppppuVar8 + 4);
      uVar3 = *(undefined4 *)(ppppuVar8 + 1);
      uVar4 = *(undefined4 *)((longlong)ppppuVar8 + 0xc);
      *(undefined4 *)param_1 = *(undefined4 *)ppppuVar8;
      *(undefined4 *)(param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined4 *)(param_1 + 0xc) = uVar4;
    }
    else {
      uVar6 = local_38 | 0xf;
      uVar11 = 0x7fffffffffffffff;
      if ((uVar6 < 0x8000000000000000) && (uVar11 = uVar6, uVar6 < 0x16)) {
        uVar11 = 0x16;
      }
      uVar7 = FUN_18000fb70(uVar11 + 1);
      *(undefined8 *)param_1 = uVar7;
      *(ulonglong *)(param_1 + 0x10) = uVar9;
      *(ulonglong *)(param_1 + 0x18) = uVar11;
      FUN_180540530(uVar7,ppppuVar8,uVar9 + 1);
    }
  }
  if (0xf < local_30) {
    uVar9 = local_30 + 1;
    ppppuVar8 = local_48;
    if (0xfff < uVar9) {
      ppppuVar8 = (undefined8 ****)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppuVar8))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar10 = auStack_70;
LAB_1800d97ac:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar10 + -8) = &UNK_1800d97b1;
        FUN_180011990();
      }
      uVar9 = local_30 + 0x28;
    }
    thunk_FUN_1803d64e0(ppppuVar8,uVar9);
  }
  return param_1;
}



/* ===== 1800d97c0 FUN_1800d97c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d97c0(undefined8 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char *****pppppcVar6;
  char *****pppppcVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  size_t sVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  char ****ppppcVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  char ****ppppcVar18;
  char *_Str;
  undefined1 *puVar19;
  undefined1 *puVar20;
  char *****pppppcVar21;
  uint uVar22;
  int iVar23;
  char ****ppppcVar24;
  float fVar25;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  ulonglong local_1a8;
  char ****local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  ulonglong local_188;
  char *****local_180;
  char ****ppppcStack_178;
  char ****local_170;
  char ****local_168;
  int local_160 [2];
  ulonglong local_158 [2];
  char *****local_148;
  ulonglong uStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  char *****local_128;
  char *****pppppcStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  puVar20 = auStack_1c8;
  local_58 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  pppppcVar7 = (char *****)0x0;
  local_1a8 = local_1a8 & 0xffffffff00000000;
  if ((DAT_180920e44 == '\0') && (DAT_180920ec0 == '\0')) goto LAB_1800d9e56;
  uVar5 = FUN_180273f90(param_1,"userid");
  ppppcStack_178 = (char ****)0x0;
  ppppcVar18 = (char ****)0x0;
  local_170 = (char ****)0x0;
  ppppcVar24 = (char ****)0xf;
  local_168 = (char ****)0xf;
  local_180 = (char *****)0x0;
  local_160[0] = 0;
  local_160[1] = 0;
  if (uVar5 == 0) {
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0xf;
    local_1a0 = (char ****)0x0;
    pppppcVar6 = &local_1a0;
    uVar17 = 2;
  }
  else {
    local_1a8 = uVar5;
    pppppcVar6 = (char *****)FUN_1803a0620(&local_1a8,&local_138);
    uVar17 = 1;
  }
  if (&local_180 == (char ******)pppppcVar6) {
    pppppcVar21 = local_180;
  }
  else {
    pppppcVar21 = (char *****)*pppppcVar6;
    local_180 = pppppcVar21;
    ppppcStack_178 = pppppcVar6[1];
    ppppcVar18 = pppppcVar6[2];
    local_170 = ppppcVar18;
    ppppcVar24 = pppppcVar6[3];
    local_168 = ppppcVar24;
    pppppcVar6[2] = (char ****)0x0;
    pppppcVar6[3] = (char ****)0xf;
    *(undefined1 *)pppppcVar6 = 0;
  }
  uVar22 = uVar17;
  local_1a8._0_4_ = uVar17;
  if ((uVar17 & 2) == 0) {
LAB_1800d991a:
    if ((uVar22 & 1) != 0) {
      uVar22 = uVar22 & 0xfffffffe;
      local_1a8._0_4_ = uVar22;
      FUN_18000f890(&local_138);
    }
    if (ppppcVar18 == (char ****)0x0) {
      if (ppppcVar24 < (char ****)0x7) {
        ppppcVar18 = (char ****)0x7fffffffffffffff;
        if (ppppcVar24 <= (char ****)(0x7fffffffffffffff - ((ulonglong)ppppcVar24 >> 1))) {
          ppppcVar14 = (char ****)((longlong)ppppcVar24 + ((ulonglong)ppppcVar24 >> 1));
          ppppcVar18 = (char ****)0xf;
          if ((char ****)0xf < ppppcVar14) {
            ppppcVar18 = ppppcVar14;
          }
        }
        pppppcVar7 = (char *****)FUN_18000fb70((longlong)ppppcVar18 + 1);
        local_170 = (char ****)0x7;
        *(undefined4 *)pppppcVar7 = s_someone_1806e7908._0_4_;
        *(undefined2 *)((longlong)pppppcVar7 + 4) = s_someone_1806e7908._4_2_;
        *(char *)((longlong)pppppcVar7 + 6) = s_someone_1806e7908[6];
        *(char *)((longlong)pppppcVar7 + 7) = '\0';
        local_168 = ppppcVar18;
        if ((char ****)0xf < ppppcVar24) {
          ppppcVar14 = (char ****)((longlong)ppppcVar24 + 1);
          pppppcVar6 = pppppcVar21;
          if ((char ****)0xfff < ppppcVar14) {
            pppppcVar6 = (char *****)pppppcVar21[-1];
            if ((char *)0x1f < (char *)((longlong)pppppcVar21 + (-8 - (longlong)pppppcVar6)))
            goto LAB_1800d9aa1;
            ppppcVar14 = ppppcVar24 + 5;
          }
          thunk_FUN_1803d64e0(pppppcVar6,ppppcVar14);
        }
        local_180 = pppppcVar7;
      }
      else {
        pppppcVar7 = (char *****)&local_180;
        if ((char ****)0xf < ppppcVar24) {
          pppppcVar7 = pppppcVar21;
        }
        local_170 = (char ****)0x7;
        FUN_180540530(pppppcVar7,"someone",7);
        *(char *)((longlong)pppppcVar7 + 7) = '\0';
      }
    }
    pppppcVar7 = (char *****)0x0;
    fVar25 = (float)FUN_180273cc0(param_1,"vote_option");
    uVar17 = (uint)fVar25;
    ppppcVar18 = (char ****)(ulonglong)uVar17;
    local_160[1] = uVar17;
    fVar25 = (float)FUN_180273cc0(param_1,&DAT_1806e0c0c);
    puVar20 = auStack_1c8;
    puVar19 = auStack_1c8;
    local_160[0] = (int)fVar25;
    if (DAT_180920ec0 != '\0') {
      if (DAT_180962433 != '\0') {
        if (uVar17 != 0) goto LAB_1800d9aa8;
        local_158[1] = 0;
        local_148 = (char *****)0x3;
        uStack_140 = 0xf;
        local_158[0] = (ulonglong)(uint3)DAT_1806f1308;
        puVar12 = local_158;
        uVar22 = 4;
        puVar20 = auStack_1c8;
        goto LAB_1800d9b04;
      }
      uVar8 = FUN_18003a390(local_98,uVar17 + 1);
      uVar22 = uVar22 | 0x20;
      local_1a8._0_4_ = uVar22;
      FUN_180066ab0(&local_138,"option ",uVar8);
      puVar20 = auStack_1c8;
      goto LAB_1800d9b5b;
    }
LAB_1800d9c86:
    ppppcVar18 = DAT_180cd0ed0;
    if (DAT_180920e44 != '\0') {
      if (DAT_180cd0ed0 == DAT_180cd0ed8) goto LAB_1800d9ccf;
      *(undefined8 *)(puVar20 + -8) = 0x1800d9cb0;
      FUN_180024b50(DAT_180cd0ed0,puVar20 + 0x48);
      iVar23 = *(int *)(puVar20 + 0x68);
      *(int *)(ppppcVar18 + 4) = iVar23;
      uVar1 = *(undefined4 *)(puVar20 + 0x6c);
      *(undefined4 *)((longlong)ppppcVar18 + 0x24) = uVar1;
      DAT_180cd0ed0 = DAT_180cd0ed0 + 5;
      goto LAB_1800d9ce4;
    }
  }
  else {
    uVar22 = uVar17 & 0xfffffffd;
    local_1a8._0_4_ = uVar17 & 0xfffffffd;
    if (local_188 < 0x10) goto LAB_1800d991a;
    uVar16 = local_188 + 1;
    ppppcVar14 = local_1a0;
    if (uVar16 < 0x1000) {
LAB_1800d9915:
      thunk_FUN_1803d64e0(ppppcVar14,uVar16);
      goto LAB_1800d991a;
    }
    ppppcVar14 = (char ****)local_1a0[-1];
    if ((ulonglong)((longlong)local_1a0 + (-8 - (longlong)ppppcVar14)) < 0x20) {
      uVar16 = local_188 + 0x28;
      goto LAB_1800d9915;
    }
LAB_1800d9aa1:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar19 = auStack_1c0;
LAB_1800d9aa8:
    if ((int)ppppcVar18 == 1) {
      uStack_110 = 0;
      local_108 = 2;
      uStack_100 = 0xf;
      local_118 = (ulonglong)DAT_1806e54ac;
      puVar12 = &local_118;
    }
    else {
      *(undefined8 *)(puVar19 + -8) = 0x1800d9ae5;
      uVar8 = FUN_18003a390(local_78,(int)ppppcVar18 + 1);
      uVar22 = uVar22 | 8;
      *(uint *)(puVar19 + 0x20) = uVar22;
      *(undefined8 *)(puVar19 + -8) = 0x1800d9b00;
      puVar12 = (ulonglong *)FUN_180066ab0(&local_118,"option ",uVar8);
    }
    uVar22 = uVar22 | 0x10;
    puVar20 = puVar19;
LAB_1800d9b04:
    local_138 = 0;
    uStack_130 = 0;
    local_128 = pppppcVar7;
    pppppcStack_120 = pppppcVar7;
    local_138 = *puVar12;
    uStack_130 = puVar12[1];
    local_128 = (char *****)puVar12[2];
    pppppcStack_120 = (char *****)puVar12[3];
    puVar12[2] = (ulonglong)pppppcVar7;
    puVar12[3] = 0xf;
    *(undefined1 *)puVar12 = 0;
LAB_1800d9b5b:
    if ((uVar22 & 0x20) != 0) {
      uVar22 = uVar22 & 0xffffffdf;
      *(undefined8 *)(puVar20 + -8) = 0x1800d9b6d;
      FUN_18000f890(local_98);
    }
    if ((uVar22 & 0x10) != 0) {
      uVar22 = uVar22 & 0xffffffef;
      *(undefined8 *)(puVar20 + -8) = 0x1800d9b80;
      FUN_18000f890(&local_118);
    }
    if ((uVar22 & 8) != 0) {
      uVar22 = uVar22 & 0xfffffff7;
      *(undefined8 *)(puVar20 + -8) = 0x1800d9b93;
      FUN_18000f890(local_78);
    }
    if ((uVar22 & 4) != 0) {
      *(undefined8 *)(puVar20 + -8) = 0x1800d9ba4;
      FUN_18000f890(puVar20 + 0x70);
    }
    *(ulonglong *)(puVar20 + 0x20) = uVar5;
    *(undefined8 *)(puVar20 + -8) = 0x1800d9bb7;
    uVar8 = FUN_1800d95d0(local_b8,puVar20 + 0x20);
    *(undefined8 *)(puVar20 + -8) = 0x1800d9bcd;
    puVar9 = (undefined4 *)FUN_1800134a0(uVar8," voted ",7);
    *(undefined8 *)(puVar20 + 0x70) = 0;
    *(undefined8 *)(puVar20 + 0x78) = 0;
    uVar1 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    *(undefined4 *)(puVar20 + 0x70) = *puVar9;
    *(undefined4 *)(puVar20 + 0x74) = uVar1;
    *(undefined4 *)(puVar20 + 0x78) = uVar3;
    *(undefined4 *)(puVar20 + 0x7c) = uVar4;
    local_148 = *(char ******)(puVar9 + 4);
    uStack_140 = *(ulonglong *)(puVar9 + 6);
    *(char ******)(puVar9 + 4) = pppppcVar7;
    *(undefined8 *)(puVar9 + 6) = 0xf;
    *(undefined1 *)puVar9 = 0;
    *(undefined8 *)(puVar20 + -8) = 0x1800d9c0e;
    uVar8 = FUN_1800667a0(local_d8,puVar20 + 0x70,&local_138);
    *(undefined8 *)(puVar20 + -8) = 0x1800d9c1f;
    FUN_1800b09f0(4,uVar8,0);
    *(undefined8 *)(puVar20 + -8) = 0x1800d9c29;
    FUN_18000f890(local_d8);
    if (uStack_140 < 0x10) {
LAB_1800d9c62:
      uStack_140 = 0xf;
      puVar20[0x70] = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800d9c7c;
      local_148 = pppppcVar7;
      FUN_18000f890(local_b8);
      *(undefined8 *)(puVar20 + -8) = 0x1800d9c86;
      fVar25 = (float)FUN_18000f890(&local_138);
      goto LAB_1800d9c86;
    }
    uVar5 = uStack_140 + 1;
    lVar13 = *(longlong *)(puVar20 + 0x70);
    lVar15 = lVar13;
    if (uVar5 < 0x1000) {
LAB_1800d9c5d:
      *(undefined8 *)(puVar20 + -8) = 0x1800d9c62;
      thunk_FUN_1803d64e0(lVar15,uVar5);
      goto LAB_1800d9c62;
    }
    lVar15 = *(longlong *)(lVar13 + -8);
    if ((lVar13 - lVar15) - 8U < 0x20) {
      uVar5 = uStack_140 + 0x28;
      goto LAB_1800d9c5d;
    }
    pcVar2 = (code *)swi(0x29);
    fVar25 = (float)(*pcVar2)(5);
    puVar20 = puVar20 + 8;
LAB_1800d9ccf:
    *(undefined8 *)(puVar20 + -8) = 0x1800d9cdc;
    FUN_1800dced0(fVar25,ppppcVar18,puVar20 + 0x48);
    uVar1 = *(undefined4 *)(puVar20 + 0x6c);
    iVar23 = *(int *)(puVar20 + 0x68);
LAB_1800d9ce4:
    *(undefined8 *)(puVar20 + -8) = 0x1800d9ced;
    uVar8 = FUN_1800d9350(local_d8,uVar1);
    if (iVar23 == 2) {
      _Str = "[T] ";
    }
    else {
      _Str = "";
      if (iVar23 == 3) {
        _Str = "[CT] ";
      }
    }
    local_138 = 0;
    uStack_130 = 0;
    *(undefined8 *)(puVar20 + -8) = 0x1800d9d2a;
    local_128 = pppppcVar7;
    pppppcStack_120 = pppppcVar7;
    sVar10 = strlen(_Str);
    *(undefined8 *)(puVar20 + -8) = 0x1800d9d39;
    FUN_1800133a0(&local_138,_Str,sVar10);
    *(undefined8 *)(puVar20 + -8) = 0x1800d9d4c;
    uVar11 = FUN_1800667a0(local_b8,&local_138,puVar20 + 0x48);
    *(undefined8 *)(puVar20 + -8) = 0x1800d9d62;
    puVar12 = (ulonglong *)FUN_1800134a0(uVar11," voted ",7);
    local_118 = *puVar12;
    uStack_110 = puVar12[1];
    local_108 = puVar12[2];
    uStack_100 = puVar12[3];
    puVar12[2] = (ulonglong)pppppcVar7;
    puVar12[3] = 0xf;
    *(undefined1 *)puVar12 = 0;
    *(undefined8 *)(puVar20 + -8) = 0x1800d9d90;
    FUN_180066820(local_f8,&local_118,uVar8);
    if (uStack_100 < 0x10) {
LAB_1800d9dc9:
      *(undefined8 *)(puVar20 + -8) = 0x1800d9dd2;
      FUN_18000f890(local_b8);
      *(undefined8 *)(puVar20 + -8) = 0x1800d9ddc;
      FUN_18000f890(&local_138);
      *(undefined8 *)(puVar20 + -8) = 0x1800d9de6;
      FUN_18000f890(local_d8);
      if (DAT_180ca3cbd == '\0') {
        lVar13 = DAT_180cd0ee8;
        if (DAT_180cd0ee8 == DAT_180cd0ef0) goto LAB_1800d9e1c;
        *(undefined8 *)(puVar20 + -8) = 0x1800d9e0b;
        FUN_180024b50(DAT_180cd0ee8,local_f8);
        DAT_180cd0ee8 = DAT_180cd0ee8 + 0x20;
      }
      else {
        *(undefined8 *)(puVar20 + -8) = 0x1800d9e41;
        FUN_1800d84f0(local_f8,&DAT_180920e45);
      }
    }
    else {
      uVar16 = uStack_100 + 1;
      uVar5 = local_118;
      if (uVar16 < 0x1000) {
LAB_1800d9dc3:
        *(undefined8 *)(puVar20 + -8) = 0x1800d9dc8;
        thunk_FUN_1803d64e0(uVar5,uVar16);
        goto LAB_1800d9dc9;
      }
      uVar5 = *(ulonglong *)(local_118 - 8);
      if ((local_118 - uVar5) - 8 < 0x20) {
        uVar16 = uStack_100 + 0x28;
        goto LAB_1800d9dc3;
      }
      pcVar2 = (code *)swi(0x29);
      lVar13 = (*pcVar2)(5);
      puVar20 = puVar20 + 8;
LAB_1800d9e1c:
      *(undefined8 *)(puVar20 + -8) = 0x1800d9e2f;
      FUN_180028f00(&DAT_180cd0ee0,lVar13,local_f8);
    }
    *(undefined8 *)(puVar20 + -8) = 0x1800d9e4b;
    FUN_18000f890(local_f8);
  }
  *(undefined8 *)(puVar20 + -8) = 0x1800d9e56;
  FUN_18000f890(puVar20 + 0x48);
LAB_1800d9e56:
  *(undefined8 *)(puVar20 + -8) = 0x1800d9e62;
  return;
}



/* ===== 1800d9e80 FUN_1800d9e80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d9e80(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong local_50 [4];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  local_58 = local_58 & 0xffffffff00000000;
  if ((DAT_180920e44 == '\0') && (DAT_180920ec0 == '\0')) {
    return;
  }
  uVar5 = FUN_180273f90(param_1,"initiator");
  if (uVar5 == 0) {
    local_50[2] = 0;
    local_50[1] = 0;
    local_50[0] = 0;
    plVar6 = local_50;
    local_50[3] = 0xf;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_58 = uVar5;
    plVar6 = (longlong *)FUN_1803a0620(&local_58,local_30);
    if (plVar6 == &DAT_1809ebc30) goto LAB_1800d9fe9;
    bVar4 = true;
    bVar3 = false;
  }
  if (0xf < DAT_1809ebc48) {
    lVar2 = CONCAT44(DAT_1809ebc30._4_4_,(undefined4)DAT_1809ebc30);
    uVar5 = DAT_1809ebc48 + 1;
    lVar7 = lVar2;
    if (0xfff < uVar5) {
      lVar7 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar7) - 8U) goto LAB_1800da016;
      uVar5 = DAT_1809ebc48 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar5);
  }
  DAT_1809ebc30._0_4_ = (undefined4)*plVar6;
  DAT_1809ebc30._4_4_ = *(undefined4 *)((longlong)plVar6 + 4);
  uRam00000001809ebc38 = (undefined4)plVar6[1];
  uRam00000001809ebc3c = *(undefined4 *)((longlong)plVar6 + 0xc);
  DAT_1809ebc40 = plVar6[2];
  DAT_1809ebc48 = plVar6[3];
  plVar6[2] = 0;
  plVar6[3] = 0xf;
  *(undefined1 *)plVar6 = 0;
  if ((bVar3) && (0xf < (ulonglong)local_50[3])) {
    uVar5 = local_50[3] + 1;
    lVar7 = local_50[0];
    if (0xfff < uVar5) {
      lVar7 = *(longlong *)(local_50[0] + -8);
      if (0x1f < (local_50[0] - lVar7) - 8U) {
LAB_1800da016:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_50[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar7,uVar5);
  }
  if (!bVar4) {
    return;
  }
LAB_1800d9fe9:
  FUN_18000f890(local_30);
  return;
}



/* ===== 1800da020 FUN_1800da020 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800da020(undefined8 *param_1)

{
  size_t _Size;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  size_t sVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *_Buf1;
  undefined8 ***pppuVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 *local_78;
  undefined8 ***local_70 [2];
  size_t local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_98 = 1;
  local_78 = param_1;
  FUN_1803a13a0();
  if (local_90 != local_88) {
    plVar13 = local_90;
    uVar11 = DAT_180ca09f4;
    do {
      lVar8 = plVar13[1];
      if (((lVar8 == 0) && (lVar8 = *plVar13, lVar8 == 0)) || (uVar11 == 0)) {
        uVar9 = 0;
      }
      else {
        bVar6 = FUN_180011220((ulonglong)uVar11 + lVar8);
        uVar9 = (uint)bVar6;
      }
      if ((uVar9 - 2 < 2) && (((int)DAT_1809ebb18 < 2 || (uVar9 == DAT_1809ebb18)))) {
        FUN_1803a0620(plVar13,local_70);
        uVar5 = local_58;
        sVar4 = local_60;
        pppuVar3 = local_70[0];
        puVar2 = DAT_180cd0ed0;
        bVar1 = false;
        puVar12 = DAT_180cd0ec8;
        if (DAT_180cd0ec8 == DAT_180cd0ed0) {
LAB_1800da15a:
          if (sVar4 != 0) {
            if (param_1[2] != 0) {
              FUN_1800134a0(param_1,&DAT_1806f0594,2);
            }
            pppuVar10 = local_70;
            if (0xf < uVar5) {
              pppuVar10 = pppuVar3;
            }
            FUN_1800134a0(param_1,pppuVar10,sVar4);
          }
        }
        else {
          do {
            if (bVar1) {
LAB_1800da14b:
              bVar1 = true;
            }
            else {
              pppuVar10 = local_70;
              if (0xf < uVar5) {
                pppuVar10 = pppuVar3;
              }
              _Size = puVar12[2];
              if ((ulonglong)puVar12[3] < 0x10) {
                _Buf1 = puVar12;
              }
              else {
                _Buf1 = (undefined8 *)*puVar12;
              }
              if (_Size == sVar4) {
                if (_Size != 0) {
                  iVar7 = memcmp(_Buf1,pppuVar10,_Size);
                  if (iVar7 != 0) goto LAB_1800da147;
                }
                goto LAB_1800da14b;
              }
LAB_1800da147:
              bVar1 = false;
            }
            puVar12 = puVar12 + 5;
          } while (puVar12 != puVar2);
          if (!bVar1) goto LAB_1800da15a;
        }
        FUN_18000f890();
        uVar11 = DAT_180ca09f4;
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != local_88);
  }
  FUN_1800244c0(&local_90);
  return param_1;
}



/* ===== 1800da1e0 FUN_1800da1e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800da1e0(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  size_t sVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [32];
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  ulonglong local_160 [2];
  char local_150 [8];
  char local_148 [4];
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [16];
  longlong local_80;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  puVar16 = DAT_180cd0ed0;
  puVar18 = auStack_198;
  local_30 = DAT_180919500 ^ (ulonglong)auStack_198;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xf;
  local_f0 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_f8 = 0xf;
  local_110 = 0;
  for (puVar7 = DAT_180cd0ec8; puVar7 != puVar16; puVar7 = puVar7 + 5) {
    puVar3 = &local_f0;
    if (*(int *)((longlong)puVar7 + 0x24) == 0) {
      lVar10 = local_e0;
    }
    else {
      lVar10 = local_100;
      puVar3 = &local_110;
    }
    if (lVar10 != 0) {
      FUN_1800134a0(puVar3,&DAT_1806f0594,2);
    }
    if ((ulonglong)puVar7[3] < 0x10) {
      puVar12 = puVar7;
    }
    else {
      puVar12 = (undefined8 *)*puVar7;
    }
    FUN_1800134a0(puVar3,puVar12,puVar7[2]);
  }
  local_140 = 0xc;
  local_138 = 0xf;
  local_144 = 0;
  local_150 = (char  [8])s_vote_ended__1806f1348._0_8_;
  local_148 = (char  [4])s_vote_ended__1806f1348._8_4_;
  if (DAT_180962433 == '\0') {
LAB_1800da431:
    iVar19 = 0;
    do {
      if ((&DAT_180cd0ea8)[iVar19] != 0) {
        *(undefined8 *)(puVar18 + -8) = 0x1800da458;
        uVar4 = FUN_18003a390(puVar18 + 0x68);
        *(undefined8 *)(puVar18 + -8) = 0x1800da467;
        uVar5 = FUN_18003a390(local_70,iVar19 + 1);
        *(undefined8 *)(puVar18 + -8) = 0x1800da47b;
        uVar5 = FUN_180066ab0(local_50,"option ",uVar5);
        *(undefined8 *)(puVar18 + -8) = 0x1800da491;
        puVar6 = (undefined4 *)FUN_1800134a0(uVar5,&DAT_1806dfa2c,2);
        local_d0 = *puVar6;
        uStack_cc = puVar6[1];
        uStack_c8 = puVar6[2];
        uStack_c4 = puVar6[3];
        local_c0 = *(undefined8 *)(puVar6 + 4);
        uStack_b8 = *(undefined8 *)(puVar6 + 6);
        *(undefined8 *)(puVar6 + 4) = 0;
        *(undefined8 *)(puVar6 + 6) = 0xf;
        *(undefined1 *)puVar6 = 0;
        *(undefined8 *)(puVar18 + -8) = 0x1800da4bf;
        uVar4 = FUN_180066820(local_b0,&local_d0,uVar4);
        *(undefined8 *)(puVar18 + -8) = 0x1800da4d5;
        plVar8 = (longlong *)FUN_1800134a0(uVar4,&DAT_1806efc00,1);
        puVar2 = (undefined1 *)*plVar8;
        lVar10 = plVar8[1];
        *(undefined1 **)(puVar18 + 0x28) = puVar2;
        *(longlong *)(puVar18 + 0x30) = lVar10;
        lVar10 = plVar8[2];
        uVar13 = plVar8[3];
        *(longlong *)(puVar18 + 0x38) = lVar10;
        *(ulonglong *)(puVar18 + 0x40) = uVar13;
        plVar8[2] = 0;
        plVar8[3] = 0xf;
        *(undefined1 *)plVar8 = 0;
        puVar14 = puVar18 + 0x28;
        if (0xf < uVar13) {
          puVar14 = puVar2;
        }
        *(undefined8 *)(puVar18 + -8) = 0x1800da520;
        FUN_1800134a0(puVar18 + 0x48,puVar14,lVar10);
        uVar13 = *(ulonglong *)(puVar18 + 0x40);
        if (0xf < uVar13) {
          uVar15 = uVar13 + 1;
          lVar10 = *(longlong *)(puVar18 + 0x28);
          lVar11 = lVar10;
          if (0xfff < uVar15) {
            lVar11 = *(longlong *)(lVar10 + -8);
            if (0x1f < (lVar10 - lVar11) - 8U) {
              pcVar1 = (code *)swi(0x29);
              puVar7 = (undefined8 *)(*pcVar1)(5);
              puVar18 = puVar18 + 8;
              goto LAB_1800da5a4;
            }
            uVar15 = uVar13 + 0x28;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1800da55a;
          thunk_FUN_1803d64e0(lVar11,uVar15);
        }
        *(undefined8 *)(puVar18 + -8) = 0x1800da564;
        FUN_18000f890(local_b0);
        *(undefined8 *)(puVar18 + -8) = 0x1800da56e;
        FUN_18000f890(&local_d0);
        *(undefined8 *)(puVar18 + -8) = 0x1800da578;
        FUN_18000f890(local_50);
        *(undefined8 *)(puVar18 + -8) = 0x1800da582;
        FUN_18000f890(local_70);
        *(undefined8 *)(puVar18 + -8) = 0x1800da58d;
        FUN_18000f890(puVar18 + 0x68);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < 5);
  }
  else {
    uVar4 = FUN_18003a390(local_b0,DAT_180cd0eac);
    uVar5 = FUN_18003a390(local_50,DAT_180cd0ea8);
    uVar5 = FUN_180066ab0(local_70,&DAT_1806f138c,uVar5);
    puVar6 = (undefined4 *)FUN_1800134a0(uVar5,", no ",5);
    local_170._0_4_ = *puVar6;
    local_170._4_4_ = puVar6[1];
    uStack_168 = puVar6[2];
    uStack_164 = puVar6[3];
    local_160[0] = *(ulonglong *)(puVar6 + 4);
    local_160[1] = *(ulonglong *)(puVar6 + 6);
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    puVar7 = (undefined8 *)FUN_180066820(&local_d0,&local_170,uVar4);
    if ((ulonglong)puVar7[3] < 0x10) {
      puVar16 = puVar7;
    }
    else {
      puVar16 = (undefined8 *)*puVar7;
    }
    FUN_1800134a0(local_150,puVar16,puVar7[2]);
    FUN_18000f890(&local_d0);
    if (0xf < local_160[1]) {
      uVar13 = local_160[1] + 1;
      lVar11 = CONCAT44(local_170._4_4_,(undefined4)local_170);
      lVar10 = lVar11;
      if (0xfff < uVar13) {
        lVar10 = *(longlong *)(lVar11 + -8);
        if (0x1f < (lVar11 - lVar10) - 8U) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar18 = auStack_190;
          goto LAB_1800da431;
        }
        uVar13 = local_160[1] + 0x28;
      }
      thunk_FUN_1803d64e0(lVar10,uVar13);
    }
    FUN_18000f890(local_70);
    FUN_18000f890(local_50);
    FUN_18000f890(local_b0);
    puVar18 = auStack_198;
  }
  if (0 < DAT_180cd0e84) {
    *(undefined8 *)(puVar18 + -8) = 0x1800da401;
    uVar4 = FUN_18003a390(local_b0);
    *(undefined8 *)(puVar18 + -8) = 0x1800da416;
    puVar7 = (undefined8 *)FUN_180066ab0(puVar18 + 0x68,&DAT_1806f1394,uVar4);
    if ((ulonglong)puVar7[3] < 0x10) {
LAB_1800da5a4:
      puVar16 = puVar7;
    }
    else {
      puVar16 = (undefined8 *)*puVar7;
    }
    uVar4 = puVar7[2];
    *(undefined8 *)(puVar18 + -8) = 0x1800da5b5;
    FUN_1800134a0(puVar18 + 0x48,puVar16,uVar4);
    *(undefined8 *)(puVar18 + -8) = 0x1800da5c0;
    FUN_18000f890(puVar18 + 0x68);
    *(undefined8 *)(puVar18 + -8) = 0x1800da5ca;
    FUN_18000f890(local_b0);
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800da5db;
  FUN_1800d84f0(puVar18 + 0x48,&DAT_180920e45);
  if (local_e0 != 0) {
    pcVar17 = "option 1: ";
    if (DAT_180962433 != '\0') {
      pcVar17 = "yes: ";
    }
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined8 *)(puVar18 + 0x30) = 0;
    *(undefined8 *)(puVar18 + 0x38) = 0;
    *(undefined8 *)(puVar18 + 0x40) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x1800da615;
    sVar9 = strlen(pcVar17);
    *(undefined8 *)(puVar18 + -8) = 0x1800da625;
    FUN_1800133a0(puVar18 + 0x28,pcVar17,sVar9);
    *(undefined8 *)(puVar18 + -8) = 0x1800da639;
    uVar4 = FUN_1800667a0(puVar18 + 0x68,puVar18 + 0x28,&local_f0);
    *(undefined8 *)(puVar18 + -8) = 0x1800da649;
    FUN_1800d84f0(uVar4,&DAT_180920e45);
    *(undefined8 *)(puVar18 + -8) = 0x1800da654;
    FUN_18000f890(puVar18 + 0x68);
    *(undefined8 *)(puVar18 + -8) = 0x1800da65f;
    FUN_18000f890(puVar18 + 0x28);
  }
  if (local_100 != 0) {
    pcVar17 = "others: ";
    if (DAT_180962433 != '\0') {
      pcVar17 = "no: ";
    }
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined8 *)(puVar18 + 0x30) = 0;
    *(undefined8 *)(puVar18 + 0x38) = 0;
    *(undefined8 *)(puVar18 + 0x40) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x1800da699;
    sVar9 = strlen(pcVar17);
    *(undefined8 *)(puVar18 + -8) = 0x1800da6a9;
    FUN_1800133a0(puVar18 + 0x28,pcVar17,sVar9);
    *(undefined8 *)(puVar18 + -8) = 0x1800da6bd;
    uVar4 = FUN_1800667a0(puVar18 + 0x68,puVar18 + 0x28,&local_110);
    *(undefined8 *)(puVar18 + -8) = 0x1800da6cd;
    FUN_1800d84f0(uVar4,&DAT_180920e45);
    *(undefined8 *)(puVar18 + -8) = 0x1800da6d8;
    FUN_18000f890(puVar18 + 0x68);
    *(undefined8 *)(puVar18 + -8) = 0x1800da6e3;
    FUN_18000f890(puVar18 + 0x28);
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800da6ec;
  FUN_1800da020(local_90);
  if (local_80 != 0) {
    *(undefined8 *)(puVar18 + -8) = 0x1800da709;
    uVar4 = FUN_180066a20(puVar18 + 0x68,"didn\'t vote: ",local_90);
    *(undefined8 *)(puVar18 + -8) = 0x1800da719;
    FUN_1800d84f0(uVar4,&DAT_180920e45);
    *(undefined8 *)(puVar18 + -8) = 0x1800da724;
    FUN_18000f890(puVar18 + 0x68);
  }
  *(undefined8 *)(puVar18 + -8) = 0x1800da72e;
  FUN_18000f890(local_90);
  *(undefined8 *)(puVar18 + -8) = 0x1800da739;
  FUN_18000f890(puVar18 + 0x48);
  *(undefined8 *)(puVar18 + -8) = 0x1800da743;
  FUN_18000f890(&local_110);
  *(undefined8 *)(puVar18 + -8) = 0x1800da74d;
  FUN_18000f890(&local_f0);
  *(undefined8 *)(puVar18 + -8) = 0x1800da759;
  return;
}



/* ===== 1800da770 FUN_1800da770 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1800da770(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  size_t sVar13;
  undefined8 *puVar14;
  longlong ******pppppplVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  char *_Str;
  undefined1 *puVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *******pppppppuVar22;
  longlong *******ppppppplVar23;
  ulonglong uVar24;
  undefined8 uStack_270;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  ulonglong local_248 [4];
  uint local_228 [2];
  int local_220 [2];
  longlong local_218;
  longlong ******local_210 [2];
  ulonglong local_200 [2];
  undefined8 local_1f0;
  longlong alStack_1e8 [3];
  undefined8 *******local_1d0 [2];
  ulonglong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  longlong lStack_1a8;
  ulonglong local_1a0;
  ulonglong uStack_198;
  undefined1 local_190 [32];
  undefined1 local_170 [32];
  longlong local_150 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong *******local_f0 [2];
  ulonglong local_e0;
  ulonglong local_d8;
  undefined8 *******local_d0 [2];
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 ******local_b0 [2];
  longlong local_a0;
  undefined8 *******local_90 [2];
  ulonglong local_80;
  ulonglong local_78;
  undefined1 local_70 [32];
  ulonglong local_50;
  
  if (param_1 == 0) {
    return;
  }
  puVar20 = auStack_268;
  local_50 = DAT_180919500 ^ (ulonglong)auStack_268;
  uVar19 = 0;
  local_228[0] = 0;
  if ((DAT_180920e44 == '\0') && (DAT_180920ec0 == '\0')) goto LAB_1800dbba9;
  FUN_1800d8a80();
  iVar2 = FUN_180011200(param_1 + 0x60);
  local_218._0_4_ = iVar2;
  uVar3 = FUN_180011200(param_1 + 100);
  local_220[1] = uVar3;
  iVar4 = FUN_180011200(param_1 + 0x6c);
  local_220[0] = iVar4;
  uVar5 = FUN_180011200(param_1 + 0x40);
  if ((uVar5 >> 7 & 1) == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = FUN_180011200(param_1 + 0x70);
  }
  FUN_1800d8bd0(local_b0,param_1,0x48);
  FUN_1800d8bd0(local_f0,param_1,0x50);
  FUN_1800d8bd0(local_d0,param_1,0x58);
  puVar20 = auStack_268;
  if (DAT_180920ec0 == '\0') {
LAB_1800db75d:
    uVar19 = 0;
    pppppppuVar22 = (undefined8 *******)0x7fffffffffffffff;
    if (DAT_180920e44 != '\0') {
      local_150[5] = 0;
      local_150[6] = 0;
      local_150[7] = 0xf;
      local_150[4] = 0;
      if (-1 < iVar6) {
        *(undefined8 *)(puVar20 + -8) = 0x1800db797;
        FUN_1800d8d10(puVar20 + 0x50,iVar6);
        *(undefined8 *)(puVar20 + -8) = 0x1800db7a3;
        uVar8 = FUN_1800d8dd0(local_170,iVar6);
        *(undefined8 *)(puVar20 + -8) = 0x1800db7b7;
        puVar11 = (ulonglong *)FUN_180066ab0(local_190," | target ",uVar8);
        if ((ulonglong *)(local_150 + 4) != puVar11) {
          if (0xf < (ulonglong)local_150[7]) {
            uVar17 = local_150[7] + 1;
            uVar24 = local_150[4];
            if (0xfff < uVar17) {
              uVar24 = *(ulonglong *)(local_150[4] - 8);
              if (0x1f < (local_150[4] - uVar24) - 8) goto LAB_1800dba52;
              uVar17 = local_150[7] + 0x28;
            }
            *(undefined8 *)(puVar20 + -8) = 0x1800db7fe;
            thunk_FUN_1803d64e0(uVar24,uVar17);
          }
          local_150[4] = *puVar11;
          local_150[5] = puVar11[1];
          local_150[6] = puVar11[2];
          local_150[7] = puVar11[3];
          puVar11[2] = 0;
          puVar11[3] = 0xf;
          *(undefined1 *)puVar11 = 0;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800db835;
        FUN_18000f890(local_190);
        *(undefined8 *)(puVar20 + -8) = 0x1800db83f;
        FUN_18000f890(local_170);
        if ((*(longlong *)(puVar20 + 0x50) != 0) && (DAT_180cd0ea0 != 0)) {
          *(undefined8 *)(puVar20 + -8) = 0x1800db863;
          lVar12 = FUN_18000f3a0((ulonglong)DAT_180cd0ea0 + *(longlong *)(puVar20 + 0x50));
          if (lVar12 != 0) {
            *(undefined8 *)(puVar20 + -8) = 0x1800db878;
            uVar8 = FUN_18004e4f0(local_170,lVar12);
            *(undefined8 *)(puVar20 + -8) = 0x1800db88c;
            uVar8 = FUN_180066ab0(local_190,&DAT_1806e7944,uVar8);
            *(undefined8 *)(puVar20 + -8) = 0x1800db8a2;
            plVar9 = (longlong *)FUN_1800134a0(uVar8,&DAT_1806e1ac0,1);
            puVar10 = (undefined1 *)*plVar9;
            lVar12 = plVar9[1];
            *(undefined1 **)(puVar20 + 0x78) = puVar10;
            *(longlong *)(puVar20 + 0x80) = lVar12;
            alStack_1e8[1] = plVar9[2];
            alStack_1e8[2] = plVar9[3];
            plVar9[2] = 0;
            plVar9[3] = 0xf;
            *(undefined1 *)plVar9 = 0;
            puVar7 = puVar20 + 0x78;
            if (0xf < (ulonglong)alStack_1e8[2]) {
              puVar7 = puVar10;
            }
            *(undefined8 *)(puVar20 + -8) = 0x1800db8eb;
            FUN_1800134a0(local_150 + 4,puVar7,alStack_1e8[1]);
            if (0xf < (ulonglong)alStack_1e8[2]) {
              uVar24 = alStack_1e8[2] + 1;
              lVar12 = *(longlong *)(puVar20 + 0x78);
              lVar16 = lVar12;
              if (0xfff < uVar24) {
                lVar16 = *(longlong *)(lVar12 + -8);
                if (0x1f < (lVar12 - lVar16) - 8U) goto LAB_1800dba59;
                uVar24 = alStack_1e8[2] + 0x28;
              }
              *(undefined8 *)(puVar20 + -8) = 0x1800db928;
              thunk_FUN_1803d64e0(lVar16,uVar24);
            }
            *(undefined8 *)(puVar20 + -8) = 0x1800db932;
            FUN_18000f890(local_190);
            *(undefined8 *)(puVar20 + -8) = 0x1800db93c;
            FUN_18000f890(local_170);
          }
        }
      }
      *(undefined8 *)(puVar20 + -8) = 0x1800db947;
      uVar8 = FUN_1800d8dd0(local_190,iVar4);
      *(undefined8 *)(puVar20 + -8) = 0x1800db95e;
      FUN_180066ab0(local_90," | by ",uVar8);
      *(undefined8 *)(puVar20 + -8) = 0x1800db968;
      FUN_18000f890(local_190);
      *(undefined8 *)(puVar20 + -8) = 0x1800db974;
      uVar8 = FUN_18003a390(local_170,uVar3);
      *(undefined8 *)(puVar20 + -8) = 0x1800db98b;
      FUN_180066ab0(local_70," | type ",uVar8);
      *(undefined8 *)(puVar20 + -8) = 0x1800db995;
      FUN_18000f890(local_170);
      if (local_a0 == 0) {
        pppppppuVar22 = local_d0;
        if (0xf < local_b8) {
          pppppppuVar22 = local_d0[0];
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800db9c9;
        FUN_180029840(local_b0,pppppppuVar22,local_c0);
      }
      if (0x7fffffffffffffffU - local_150[6] < local_80) goto LAB_1800dbbd3;
      pppppppuVar22 = local_90;
      if (0xf < local_78) {
        pppppppuVar22 = local_90[0];
      }
      *(ulonglong *)(puVar20 + 0x30) = local_80;
      *(undefined8 ********)(puVar20 + 0x28) = pppppppuVar22;
      *(longlong *)(puVar20 + 0x20) = local_150[6];
      *(undefined8 *)(puVar20 + -8) = 0x1800dba1d;
      FUN_180069380(&local_110);
      *(undefined8 *)(puVar20 + -8) = 0x1800dba32;
      pppppppuVar22 = (undefined8 *******)FUN_1800667a0(local_190,&local_110,local_70);
      if (iVar2 != 2) goto LAB_1800dba60;
      _Str = "[T] ";
LAB_1800dba76:
      *(undefined8 *)(puVar20 + 0x78) = 0;
      *(undefined8 *)(puVar20 + 0x80) = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800dba8e;
      alStack_1e8[1] = uVar19;
      alStack_1e8[2] = uVar19;
      sVar13 = strlen(_Str);
      *(undefined8 *)(puVar20 + -8) = 0x1800dba9e;
      FUN_1800133a0(puVar20 + 0x78,_Str,sVar13);
      *(undefined8 *)(puVar20 + -8) = 0x1800dbab6;
      puVar14 = (undefined8 *)FUN_1800134a0(puVar20 + 0x78,"vote started: ",0xe);
      uVar8 = puVar14[1];
      *(undefined8 *)(puVar20 + 0x58) = *puVar14;
      *(undefined8 *)(puVar20 + 0x60) = uVar8;
      uVar8 = puVar14[3];
      *(undefined8 *)(puVar20 + 0x68) = puVar14[2];
      *(undefined8 *)(puVar20 + 0x70) = uVar8;
      puVar14[2] = uVar19;
      puVar14[3] = 0xf;
      *(undefined1 *)puVar14 = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800dbaee;
      FUN_1800d9190(puVar20 + 0x58,local_b0,local_f0,pppppppuVar22);
      *(undefined8 *)(puVar20 + -8) = 0x1800dbaf9;
      FUN_18000f890(puVar20 + 0x58);
      *(undefined8 *)(puVar20 + -8) = 0x1800dbb04;
      FUN_18000f890(puVar20 + 0x78);
      *(undefined8 *)(puVar20 + -8) = 0x1800dbb0e;
      FUN_18000f890(local_190);
      *(undefined8 *)(puVar20 + -8) = 0x1800dbb18;
      FUN_18000f890(&local_110);
      DAT_180ca3cbd = 1;
      *(undefined8 *)(puVar20 + -8) = 0x1800dbb24;
      FUN_1800d9550();
      *(undefined8 *)(puVar20 + -8) = 0x1800dbb31;
      FUN_18000f890(local_70);
      *(undefined8 *)(puVar20 + -8) = 0x1800dbb3e;
      FUN_18000f890(local_90);
      if (0xf < (ulonglong)local_150[7]) {
        uVar17 = local_150[7] + 1;
        uVar24 = local_150[4];
        if (0xfff < uVar17) {
          uVar24 = *(ulonglong *)(local_150[4] - 8);
          if (0x1f < (local_150[4] - uVar24) - 8) goto LAB_1800dbbcc;
          uVar17 = local_150[7] + 0x28;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800dbb76;
        thunk_FUN_1803d64e0(uVar24,uVar17);
      }
      local_150[7] = 0xf;
      local_150[4] = local_150[4] & 0xffffffffffffff00;
      local_150[6] = uVar19;
    }
    *(undefined8 *)(puVar20 + -8) = 0x1800dbb92;
    FUN_18000f890(local_d0);
    *(undefined8 *)(puVar20 + -8) = 0x1800dbb9c;
    FUN_18000f890(local_f0);
    *(undefined8 *)(puVar20 + -8) = 0x1800dbba9;
    FUN_18000f890(local_b0);
LAB_1800dbba9:
    *(undefined8 *)(puVar20 + -8) = 0x1800dbbb8;
    return;
  }
  local_150[1] = 0;
  local_150[2] = 1;
  local_150[3] = 0xf;
  local_150[0] = 7;
  pppppppuVar22 = local_d0;
  if (local_a0 != 0) {
    pppppppuVar22 = local_b0;
  }
  FUN_180024b50(local_1d0,pppppppuVar22);
  pppppppuVar22 = (undefined8 *******)0x6;
  if (iVar4 == 99) {
    uStack_108 = 0;
    local_100 = 6;
    local_f8 = 0xf;
    local_110 = (ulonglong)CONCAT24(s_Server_1806f131c._4_2_,s_Server_1806f131c._0_4_);
  }
  else {
    uVar8 = FUN_1800d8d10(local_228,iVar4);
    FUN_1800d95d0(&local_110,uVar8);
  }
  puVar20 = auStack_268;
  local_228[0] = 4;
  lStack_1a8 = 0;
  local_1a0 = 0;
  uVar24 = 0xf;
  uStack_198 = 0xf;
  local_1b0 = 0;
  pppppppuVar21 = local_1d0;
  if (0xf < local_1b8) {
    pppppppuVar21 = local_1d0[0];
  }
  if (local_1c0 < 4) {
LAB_1800dab69:
    pppppppuVar21 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar21 = local_1d0[0];
    }
    if (10 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar21);
      *(undefined8 *)(puVar20 + -8) = 0x1800dab97;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar21,puVar10,"changelevel",0xb);
      if ((puVar7 == puVar10) || ((longlong)puVar7 - (longlong)pppppppuVar21 == -1))
      goto LAB_1800dabb1;
LAB_1800dabf9:
      *(undefined8 *)(puVar20 + -8) = 0x1800dac0e;
      uVar8 = FUN_180073a70(puVar20 + 0x58,&local_110," called a vote to change the map to");
      *(undefined8 *)(puVar20 + -8) = 0x1800dac20;
      uVar8 = FUN_1800667a0(puVar20 + 0x78,uVar8,local_150);
      *(undefined8 *)(puVar20 + -8) = 0x1800dac31;
      uVar8 = FUN_1800667a0(local_170,uVar8,local_f0);
      *(undefined8 *)(puVar20 + -8) = 0x1800dac42;
      plVar9 = (longlong *)FUN_1800667a0(local_190,uVar8,local_150);
      if (&local_1b0 != plVar9) {
        local_1b0 = *plVar9;
        lStack_1a8 = plVar9[1];
        uVar19 = plVar9[2];
        uVar24 = plVar9[3];
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        local_1a0 = uVar19;
        uStack_198 = uVar24;
      }
      *(undefined8 *)(puVar20 + -8) = 0x1800dac89;
      FUN_18000f890(local_190);
      *(undefined8 *)(puVar20 + -8) = 0x1800dac93;
      FUN_18000f890(local_170);
      *(undefined8 *)(puVar20 + -8) = 0x1800dac9e;
      FUN_18000f890(puVar20 + 0x78);
LAB_1800db669:
      puVar14 = (undefined8 *)(puVar20 + 0x58);
LAB_1800db66e:
      *(undefined8 *)(puVar20 + -8) = 0x1800db673;
      FUN_18000f890(puVar14);
      puVar10 = puVar20;
      goto LAB_1800db673;
    }
LAB_1800dabb1:
    pppppppuVar21 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar21 = local_1d0[0];
    }
    if (8 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar21);
      *(undefined8 *)(puVar20 + -8) = 0x1800dabe3;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar21,puVar10,"nextlevel",9);
      if ((puVar7 != puVar10) && ((longlong)puVar7 - (longlong)pppppppuVar21 != -1))
      goto LAB_1800dabf9;
    }
    pppppppuVar21 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar21 = local_1d0[0];
    }
    if (8 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar21);
      *(undefined8 *)(puVar20 + -8) = 0x1800dace2;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar21,puVar10,"surrender",9);
      if ((puVar7 != puVar10) && ((longlong)puVar7 - (longlong)pppppppuVar21 != -1)) {
        *(undefined8 *)(puVar20 + -8) = 0x1800dad0d;
        uVar8 = FUN_180073a70(puVar20 + 0x78,&local_110," called a vote to");
        *(undefined8 *)(puVar20 + -8) = 0x1800dad1e;
        uVar8 = FUN_1800667a0(local_170,uVar8,local_150);
        *(undefined8 *)(puVar20 + -8) = 0x1800dad34;
        puVar14 = (undefined8 *)FUN_1800134a0(uVar8,"surrender",9);
        *(undefined8 *)(puVar20 + 0x58) = 0;
        *(undefined8 *)(puVar20 + 0x60) = 0;
        *(undefined8 *)(puVar20 + 0x68) = 0;
        *(undefined8 *)(puVar20 + 0x70) = 0;
        uVar8 = puVar14[1];
        *(undefined8 *)(puVar20 + 0x58) = *puVar14;
        *(undefined8 *)(puVar20 + 0x60) = uVar8;
        uVar8 = puVar14[3];
        *(undefined8 *)(puVar20 + 0x68) = puVar14[2];
        *(undefined8 *)(puVar20 + 0x70) = uVar8;
        puVar14[2] = 0;
        puVar14[3] = 0xf;
        *(undefined1 *)puVar14 = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800dad79;
        plVar9 = (longlong *)FUN_1800667a0(local_190,puVar20 + 0x58,local_150);
        if (&local_1b0 != plVar9) {
          local_1b0 = *plVar9;
          lStack_1a8 = plVar9[1];
          uVar19 = plVar9[2];
          uVar24 = plVar9[3];
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
          local_1a0 = uVar19;
          uStack_198 = uVar24;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800dadbb;
        FUN_18000f890(local_190);
        uVar17 = *(ulonglong *)(puVar20 + 0x70);
        if (0xf < uVar17) {
          uVar18 = uVar17 + 1;
          lVar12 = *(longlong *)(puVar20 + 0x58);
          lVar16 = lVar12;
          if (0xfff < uVar18) {
            lVar16 = *(longlong *)(lVar12 + -8);
            if (0x1f < (lVar12 - lVar16) - 8U) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar20 = puVar20 + 8;
              goto LAB_1800dae2f;
            }
            uVar18 = uVar17 + 0x28;
          }
          *(undefined8 *)(puVar20 + -8) = 0x1800dadf5;
          thunk_FUN_1803d64e0(lVar16,uVar18);
        }
        *(undefined8 *)(puVar20 + 0x68) = 0;
        *(undefined8 *)(puVar20 + 0x70) = 0xf;
        puVar20[0x58] = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800dae11;
        FUN_18000f890(local_170);
        puVar14 = (undefined8 *)(puVar20 + 0x78);
        goto LAB_1800db66e;
      }
    }
LAB_1800dae2f:
    pppppppuVar21 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar21 = local_1d0[0];
    }
    if (6 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar21);
      *(undefined8 *)(puVar20 + -8) = 0x1800dae61;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar21,puVar10,"unpause",7);
      if ((puVar7 != puVar10) && ((longlong)puVar7 - (longlong)pppppppuVar21 != -1)) {
        *(undefined8 *)(puVar20 + -8) = 0x1800dae8c;
        uVar8 = FUN_180073a70(puVar20 + 0x58,&local_110," called a vote to");
        *(undefined8 *)(puVar20 + -8) = 0x1800dae9d;
        uVar8 = FUN_1800667a0(local_170,uVar8,local_150);
        *(undefined8 *)(puVar20 + -8) = 0x1800daeb3;
        puVar14 = (undefined8 *)FUN_1800134a0(uVar8,"unpause match",0xd);
        *(undefined8 *)(puVar20 + 0x78) = 0;
        *(undefined8 *)(puVar20 + 0x80) = 0;
        uVar8 = puVar14[1];
        *(undefined8 *)(puVar20 + 0x78) = *puVar14;
        *(undefined8 *)(puVar20 + 0x80) = uVar8;
        alStack_1e8[1] = puVar14[2];
        alStack_1e8[2] = puVar14[3];
        puVar14[2] = 0;
        puVar14[3] = 0xf;
        *(undefined1 *)puVar14 = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800daef5;
        plVar9 = (longlong *)FUN_1800667a0(local_190,puVar20 + 0x78,local_150);
        if (&local_1b0 != plVar9) {
          local_1b0 = *plVar9;
          lStack_1a8 = plVar9[1];
          uVar19 = plVar9[2];
          uVar24 = plVar9[3];
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
          local_1a0 = uVar19;
          uStack_198 = uVar24;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800daf37;
        FUN_18000f890(local_190);
        *(undefined8 *)(puVar20 + -8) = 0x1800daf42;
        FUN_18000f890(puVar20 + 0x78);
        *(undefined8 *)(puVar20 + -8) = 0x1800daf4c;
        FUN_18000f890(local_170);
        goto LAB_1800db669;
      }
    }
    pppppppuVar21 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar21 = local_1d0[0];
    }
    if (4 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar21);
      *(undefined8 *)(puVar20 + -8) = 0x1800daf90;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar21,puVar10,"pause",5);
      if ((puVar7 != puVar10) && ((longlong)puVar7 - (longlong)pppppppuVar21 != -1)) {
        *(undefined8 *)(puVar20 + -8) = 0x1800dafbb;
        uVar8 = FUN_180073a70(puVar20 + 0x58,&local_110," called a vote to");
        *(undefined8 *)(puVar20 + -8) = 0x1800dafcc;
        uVar8 = FUN_1800667a0(local_170,uVar8,local_150);
        *(undefined8 *)(puVar20 + -8) = 0x1800dafe2;
        puVar14 = (undefined8 *)FUN_1800134a0(uVar8,"pause match",0xb);
        *(undefined8 *)(puVar20 + 0x78) = 0;
        *(undefined8 *)(puVar20 + 0x80) = 0;
        uVar8 = puVar14[1];
        *(undefined8 *)(puVar20 + 0x78) = *puVar14;
        *(undefined8 *)(puVar20 + 0x80) = uVar8;
        alStack_1e8[1] = puVar14[2];
        alStack_1e8[2] = puVar14[3];
        puVar14[2] = 0;
        puVar14[3] = 0xf;
        *(undefined1 *)puVar14 = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800db024;
        plVar9 = (longlong *)FUN_1800667a0(local_190,puVar20 + 0x78,local_150);
        if (&local_1b0 != plVar9) {
          local_1b0 = *plVar9;
          lStack_1a8 = plVar9[1];
          uVar19 = plVar9[2];
          uVar24 = plVar9[3];
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
          local_1a0 = uVar19;
          uStack_198 = uVar24;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800db066;
        FUN_18000f890(local_190);
        *(undefined8 *)(puVar20 + -8) = 0x1800db071;
        FUN_18000f890(puVar20 + 0x78);
        *(undefined8 *)(puVar20 + -8) = 0x1800db07b;
        FUN_18000f890(local_170);
        goto LAB_1800db669;
      }
    }
    pppppppuVar21 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar21 = local_1d0[0];
    }
    if (5 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar21);
      *(undefined8 *)(puVar20 + -8) = 0x1800db0bc;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar21,puVar10,"backup",pppppppuVar22);
      if ((puVar7 != puVar10) && ((longlong)puVar7 - (longlong)pppppppuVar21 != -1)) {
        *(undefined8 *)(puVar20 + -8) = 0x1800db0e7;
        uVar8 = FUN_180073a70(puVar20 + 0x58,&local_110," called a vote to");
        *(undefined8 *)(puVar20 + -8) = 0x1800db0f8;
        uVar8 = FUN_1800667a0(local_170,uVar8,local_150);
        *(undefined8 *)(puVar20 + -8) = 0x1800db10e;
        puVar14 = (undefined8 *)FUN_1800134a0(uVar8,"load backup",0xb);
        *(undefined8 *)(puVar20 + 0x78) = 0;
        *(undefined8 *)(puVar20 + 0x80) = 0;
        uVar8 = puVar14[1];
        *(undefined8 *)(puVar20 + 0x78) = *puVar14;
        *(undefined8 *)(puVar20 + 0x80) = uVar8;
        alStack_1e8[1] = puVar14[2];
        alStack_1e8[2] = puVar14[3];
        puVar14[2] = 0;
        puVar14[3] = 0xf;
        *(undefined1 *)puVar14 = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800db150;
        plVar9 = (longlong *)FUN_1800667a0(local_190,puVar20 + 0x78,local_150);
        if (&local_1b0 != plVar9) {
          local_1b0 = *plVar9;
          lStack_1a8 = plVar9[1];
          uVar19 = plVar9[2];
          uVar24 = plVar9[3];
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
          local_1a0 = uVar19;
          uStack_198 = uVar24;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800db192;
        FUN_18000f890(local_190);
        *(undefined8 *)(puVar20 + -8) = 0x1800db19d;
        FUN_18000f890(puVar20 + 0x78);
        *(undefined8 *)(puVar20 + -8) = 0x1800db1a7;
        FUN_18000f890(local_170);
        goto LAB_1800db669;
      }
    }
    pppppppuVar22 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar22 = local_1d0[0];
    }
    if (8 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar22);
      *(undefined8 *)(puVar20 + -8) = 0x1800db1e7;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar22,puVar10,"not_ready",9);
      if ((puVar7 == puVar10) || ((longlong)puVar7 - (longlong)pppppppuVar22 == -1))
      goto LAB_1800db205;
LAB_1800db295:
      *(undefined8 *)(puVar20 + -8) = 0x1800db2aa;
      uVar8 = FUN_180073a70(puVar20 + 0x78,&local_110," called a vote to");
      *(undefined8 *)(puVar20 + -8) = 0x1800db2bb;
      uVar8 = FUN_1800667a0(local_170,uVar8,local_150);
      *(undefined8 *)(puVar20 + -8) = 0x1800db2d1;
      puVar14 = (undefined8 *)FUN_1800134a0(uVar8,"unready for match",0x11);
      *(undefined8 *)(puVar20 + 0x58) = 0;
      *(undefined8 *)(puVar20 + 0x60) = 0;
      *(undefined8 *)(puVar20 + 0x68) = 0;
      *(undefined8 *)(puVar20 + 0x70) = 0;
      uVar8 = puVar14[1];
      *(undefined8 *)(puVar20 + 0x58) = *puVar14;
      *(undefined8 *)(puVar20 + 0x60) = uVar8;
      uVar8 = puVar14[3];
      *(undefined8 *)(puVar20 + 0x68) = puVar14[2];
      *(undefined8 *)(puVar20 + 0x70) = uVar8;
      puVar14[2] = 0;
      puVar14[3] = 0xf;
      *(undefined1 *)puVar14 = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800db316;
      plVar9 = (longlong *)FUN_1800667a0(local_190,puVar20 + 0x58,local_150);
      if (&local_1b0 != plVar9) {
        local_1b0 = *plVar9;
        lStack_1a8 = plVar9[1];
        uVar19 = plVar9[2];
        uVar24 = plVar9[3];
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        local_1a0 = uVar19;
        uStack_198 = uVar24;
      }
      *(undefined8 *)(puVar20 + -8) = 0x1800db358;
      FUN_18000f890(local_190);
      uVar17 = *(ulonglong *)(puVar20 + 0x70);
      if (0xf < uVar17) {
        uVar18 = uVar17 + 1;
        lVar12 = *(longlong *)(puVar20 + 0x58);
        lVar16 = lVar12;
        if (0xfff < uVar18) {
          lVar16 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar16) - 8U) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar20 = puVar20 + 8;
            goto LAB_1800db3cc;
          }
          uVar18 = uVar17 + 0x28;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800db392;
        thunk_FUN_1803d64e0(lVar16,uVar18);
      }
      *(undefined8 *)(puVar20 + 0x68) = 0;
      *(undefined8 *)(puVar20 + 0x70) = 0xf;
      puVar20[0x58] = 0;
      *(undefined8 *)(puVar20 + -8) = 0x1800db3ae;
      FUN_18000f890(local_170);
      puVar14 = (undefined8 *)(puVar20 + 0x78);
      goto LAB_1800db66e;
    }
LAB_1800db205:
    pppppppuVar22 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar22 = local_1d0[0];
    }
    if (7 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar22);
      *(undefined8 *)(puVar20 + -8) = 0x1800db233;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar22,puVar10,"notready",8);
      if ((puVar7 != puVar10) && ((longlong)puVar7 - (longlong)pppppppuVar22 != -1))
      goto LAB_1800db295;
    }
    pppppppuVar22 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar22 = local_1d0[0];
    }
    if (6 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar22);
      *(undefined8 *)(puVar20 + -8) = 0x1800db27f;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar22,puVar10,"unready",7);
      if ((puVar7 != puVar10) && ((longlong)puVar7 - (longlong)pppppppuVar22 != -1))
      goto LAB_1800db295;
    }
LAB_1800db3cc:
    pppppppuVar22 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar22 = local_1d0[0];
    }
    if (4 < local_1c0) {
      puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar22);
      *(undefined8 *)(puVar20 + -8) = 0x1800db3fe;
      puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar22,puVar10,"ready",5);
      if ((puVar7 != puVar10) && ((longlong)puVar7 - (longlong)pppppppuVar22 != -1)) {
        *(undefined8 *)(puVar20 + -8) = 0x1800db429;
        uVar8 = FUN_180073a70(puVar20 + 0x78,&local_110," called a vote to");
        *(undefined8 *)(puVar20 + -8) = 0x1800db43a;
        uVar8 = FUN_1800667a0(local_170,uVar8,local_150);
        *(undefined8 *)(puVar20 + -8) = 0x1800db450;
        puVar14 = (undefined8 *)FUN_1800134a0(uVar8,"ready for match",0xf);
        *(undefined8 *)(puVar20 + 0x58) = 0;
        *(undefined8 *)(puVar20 + 0x60) = 0;
        *(undefined8 *)(puVar20 + 0x68) = 0;
        *(undefined8 *)(puVar20 + 0x70) = 0;
        uVar8 = puVar14[1];
        *(undefined8 *)(puVar20 + 0x58) = *puVar14;
        *(undefined8 *)(puVar20 + 0x60) = uVar8;
        uVar8 = puVar14[3];
        *(undefined8 *)(puVar20 + 0x68) = puVar14[2];
        *(undefined8 *)(puVar20 + 0x70) = uVar8;
        puVar14[2] = 0;
        puVar14[3] = 0xf;
        *(undefined1 *)puVar14 = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800db495;
        plVar9 = (longlong *)FUN_1800667a0(local_190,puVar20 + 0x58,local_150);
        if (&local_1b0 != plVar9) {
          local_1b0 = *plVar9;
          lStack_1a8 = plVar9[1];
          uVar19 = plVar9[2];
          uVar24 = plVar9[3];
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
          local_1a0 = uVar19;
          uStack_198 = uVar24;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800db4d7;
        FUN_18000f890(local_190);
        uVar17 = *(ulonglong *)(puVar20 + 0x70);
        if (0xf < uVar17) {
          uVar18 = uVar17 + 1;
          lVar12 = *(longlong *)(puVar20 + 0x58);
          lVar16 = lVar12;
          if (0xfff < uVar18) {
            lVar16 = *(longlong *)(lVar12 + -8);
            if (0x1f < (lVar12 - lVar16) - 8U) {
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              puVar20 = puVar20 + 8;
              goto LAB_1800db54b;
            }
            uVar18 = uVar17 + 0x28;
          }
          *(undefined8 *)(puVar20 + -8) = 0x1800db511;
          thunk_FUN_1803d64e0(lVar16,uVar18);
        }
        *(undefined8 *)(puVar20 + 0x68) = 0;
        *(undefined8 *)(puVar20 + 0x70) = 0xf;
        puVar20[0x58] = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800db52d;
        FUN_18000f890(local_170);
        puVar14 = (undefined8 *)(puVar20 + 0x78);
        goto LAB_1800db66e;
      }
    }
LAB_1800db54b:
    pppppppuVar22 = local_1d0;
    if (0xf < local_1b8) {
      pppppppuVar22 = local_1d0[0];
    }
    if (6 < local_1c0) {
      *(undefined8 *)(puVar20 + -8) = 0x1800db57d;
      puVar10 = (undefined1 *)
                thunk_FUN_1804e92d0(pppppppuVar22,
                                    (undefined1 *)(local_1c0 + (longlong)pppppppuVar22),"timeout",7)
      ;
      if ((puVar10 != (undefined1 *)(local_1c0 + (longlong)pppppppuVar22)) &&
         ((longlong)puVar10 - (longlong)pppppppuVar22 != -1)) {
        *(undefined8 *)(puVar20 + -8) = 0x1800db5a8;
        uVar8 = FUN_180073a70(puVar20 + 0x58,&local_110," called a vote to");
        *(undefined8 *)(puVar20 + -8) = 0x1800db5b9;
        uVar8 = FUN_1800667a0(local_170,uVar8,local_150);
        *(undefined8 *)(puVar20 + -8) = 0x1800db5cf;
        puVar14 = (undefined8 *)FUN_1800134a0(uVar8,"start timeout",0xd);
        *(undefined8 *)(puVar20 + 0x78) = 0;
        *(undefined8 *)(puVar20 + 0x80) = 0;
        uVar8 = puVar14[1];
        *(undefined8 *)(puVar20 + 0x78) = *puVar14;
        *(undefined8 *)(puVar20 + 0x80) = uVar8;
        alStack_1e8[1] = puVar14[2];
        alStack_1e8[2] = puVar14[3];
        puVar14[2] = 0;
        puVar14[3] = 0xf;
        *(undefined1 *)puVar14 = 0;
        *(undefined8 *)(puVar20 + -8) = 0x1800db611;
        plVar9 = (longlong *)FUN_1800667a0(local_190,puVar20 + 0x78,local_150);
        if (&local_1b0 != plVar9) {
          local_1b0 = *plVar9;
          lStack_1a8 = plVar9[1];
          uVar19 = plVar9[2];
          uVar24 = plVar9[3];
          plVar9[2] = 0;
          plVar9[3] = 0xf;
          *(undefined1 *)plVar9 = 0;
          local_1a0 = uVar19;
          uStack_198 = uVar24;
        }
        *(undefined8 *)(puVar20 + -8) = 0x1800db653;
        FUN_18000f890(local_190);
        *(undefined8 *)(puVar20 + -8) = 0x1800db65e;
        FUN_18000f890(puVar20 + 0x78);
        *(undefined8 *)(puVar20 + -8) = 0x1800db668;
        FUN_18000f890(local_170);
        goto LAB_1800db669;
      }
    }
  }
  else {
    puVar10 = (undefined1 *)(local_1c0 + (longlong)pppppppuVar21);
    puVar7 = (undefined1 *)thunk_FUN_1804e92d0(pppppppuVar21,puVar10,&DAT_1806f13b0,4);
    puVar20 = auStack_268;
    if ((puVar7 == puVar10) ||
       (puVar20 = auStack_268, (longlong)puVar7 - (longlong)pppppppuVar21 == -1))
    goto LAB_1800dab69;
    if (iVar6 < 0) {
      local_210[0] = (longlong ******)0x0;
      local_210[1] = (longlong ******)0x0;
      local_200[0] = 0;
      local_200[1] = 0;
      ppppppplVar23 = (longlong *******)local_f0;
      if (0xf < local_d8) {
        ppppppplVar23 = local_f0[0];
      }
      if (0x7fffffffffffffff < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_180011990();
      }
      if (local_e0 < 0x10) {
        local_200[0] = local_e0;
        local_200[1] = 0xf;
        local_210[0] = *ppppppplVar23;
        local_210[1] = ppppppplVar23[1];
      }
      else {
        uVar17 = local_e0 | 0xf;
        if (uVar17 < 0x8000000000000000) {
          if (uVar17 < 0x16) {
            uVar17 = 0x16;
          }
        }
        else {
          uVar17 = 0x7fffffffffffffff;
        }
        local_210[0] = (longlong ******)FUN_18000fb70(uVar17 + 1);
        local_200[0] = local_e0;
        local_200[1] = uVar17;
        FUN_180540530(local_210[0],ppppppplVar23,local_e0 + 1);
      }
      pppppplVar15 = (longlong ******)local_210;
      iVar2 = (int)local_218;
    }
    else {
      if (iVar6 == 99) {
        alStack_1e8[0] = 0;
        alStack_1e8[1] = 6;
        alStack_1e8[2] = 0xf;
        local_1f0 = (longlong *****)
                    (ulonglong)CONCAT24(s_Server_1806f131c._4_2_,s_Server_1806f131c._0_4_);
      }
      else {
        uVar8 = FUN_1800d8d10(&local_218,iVar6);
        FUN_1800d95d0(&local_1f0,uVar8);
      }
      pppppplVar15 = (longlong ******)&local_1f0;
      pppppppuVar22 = (undefined8 *******)&DAT_00000025;
    }
    local_228[0] = (uint)pppppppuVar22;
    uVar8 = FUN_180073a70(local_190,&local_110," called a vote to kick ");
    plVar9 = (longlong *)FUN_1800667a0(local_170,uVar8,pppppplVar15);
    if (&local_1b0 != plVar9) {
      local_1b0 = *plVar9;
      lStack_1a8 = plVar9[1];
      uVar19 = plVar9[2];
      uVar24 = plVar9[3];
      plVar9[2] = 0;
      plVar9[3] = 0xf;
      *(undefined1 *)plVar9 = 0;
      local_1a0 = uVar19;
      uStack_198 = uVar24;
    }
    FUN_18000f890(local_170);
    FUN_18000f890(local_190);
    if ((((ulonglong)pppppppuVar22 & 2) != 0) &&
       (pppppppuVar22 = (undefined8 *******)(ulonglong)((uint)pppppppuVar22 & 0xfffffffd),
       0xf < local_200[1])) {
      uVar17 = local_200[1] + 1;
      pppppplVar15 = local_210[0];
      if (0xfff < uVar17) {
        pppppplVar15 = (longlong ******)local_210[0][-1];
        if (0x1f < (ulonglong)((longlong)local_210[0] + (-8 - (longlong)pppppplVar15))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar20 = auStack_260;
          goto LAB_1800dab69;
        }
        uVar17 = local_200[1] + 0x28;
      }
      thunk_FUN_1803d64e0(pppppplVar15,uVar17);
    }
    puVar20 = auStack_268;
    puVar10 = auStack_268;
    if (((ulonglong)pppppppuVar22 & 1) != 0) {
      puVar14 = &local_1f0;
      goto LAB_1800db66e;
    }
LAB_1800db673:
    puVar20 = puVar10;
    if (uVar19 != 0) {
      *(undefined8 *)(puVar20 + -8) = 0x1800db689;
      FUN_1800b09f0(4,&local_1b0,0);
      uVar24 = uStack_198;
    }
  }
  if (0xf < uVar24) {
    uVar17 = uVar24 + 1;
    lVar12 = local_1b0;
    if (uVar17 < 0x1000) {
LAB_1800db6c0:
      *(undefined8 *)(puVar20 + -8) = 0x1800db6c5;
      thunk_FUN_1803d64e0(lVar12,uVar17);
      goto LAB_1800db6c6;
    }
    lVar12 = *(longlong *)(local_1b0 + -8);
    if ((local_1b0 - lVar12) - 8U < 0x20) {
      uVar17 = uVar24 + 0x28;
      goto LAB_1800db6c0;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar20 = puVar20 + 8;
LAB_1800dba4b:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar20 = puVar20 + 8;
LAB_1800dba52:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar20 = puVar20 + 8;
LAB_1800dba59:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar20 = puVar20 + 8;
LAB_1800dba60:
    _Str = "";
    if (iVar2 == 3) {
      _Str = "[CT] ";
    }
    goto LAB_1800dba76;
  }
LAB_1800db6c6:
  if (0xf < local_f8) {
    uVar17 = local_f8 + 1;
    uVar24 = local_110;
    if (0xfff < uVar17) {
      uVar24 = *(ulonglong *)(local_110 - 8);
      if (0x1f < (local_110 - uVar24) - 8) goto LAB_1800dba4b;
      uVar17 = local_f8 + 0x28;
    }
    *(undefined8 *)(puVar20 + -8) = 0x1800db701;
    thunk_FUN_1803d64e0(uVar24,uVar17);
  }
  *(undefined8 *)(puVar20 + -8) = 0x1800db70b;
  FUN_18000f890(local_1d0);
  if ((ulonglong)local_150[3] < 0x10) {
LAB_1800db747:
    uVar3 = *(undefined4 *)(puVar20 + 0x4c);
    iVar4 = *(int *)(puVar20 + 0x48);
    goto LAB_1800db75d;
  }
  uVar19 = local_150[3] + 1;
  lVar12 = local_150[0];
  if (uVar19 < 0x1000) {
LAB_1800db742:
    *(undefined8 *)(puVar20 + -8) = 0x1800db747;
    thunk_FUN_1803d64e0(lVar12,uVar19);
    goto LAB_1800db747;
  }
  lVar12 = *(longlong *)(local_150[0] + -8);
  if ((local_150[0] - lVar12) - 8U < 0x20) {
    uVar19 = local_150[3] + 0x28;
    goto LAB_1800db742;
  }
LAB_1800dbbcc:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar20 = puVar20 + 8;
LAB_1800dbbd3:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar20 + -8) = 0x1800dbbd8;
  FUN_180011990();
}



/* ===== 1800dbbe0 FUN_1800dbbe0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800dbbe0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  size_t sVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *_Str;
  undefined1 *puVar8;
  int unaff_EDI;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [32];
  undefined8 local_d0;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong local_b0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  if (param_1 == 0) {
    return;
  }
  local_30 = DAT_180919500 ^ (ulonglong)auStack_f8;
  if (DAT_180920ec0 == '\0') {
LAB_1800dbc8f:
    puVar8 = auStack_f8;
    if (DAT_180920e44 == '\0') goto LAB_1800dbe4e;
    unaff_EDI = FUN_180011200(param_1 + 0x58);
    FUN_1800d8bd0(local_50,param_1,0x48);
    FUN_1800d8bd0(local_70,param_1,0x50);
    puVar8 = auStack_f8;
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    local_b0[1] = 0;
    local_b0[2] = 0;
    local_b0[3] = 0xf;
    local_b0[0] = 0;
    if (unaff_EDI != 2) goto LAB_1800dbcf9;
    _Str = "[T] ";
    puVar8 = auStack_f8;
  }
  else {
    uStack_c4 = 0;
    local_c0 = 0xb;
    local_b8 = 0xf;
    local_d0._0_4_ = s_Vote_passed_1806f1528._0_4_;
    local_d0._4_4_ = CONCAT13(s_Vote_passed_1806f1528[7],s_Vote_passed_1806f1528._4_3_);
    uStack_c8 = (uint)s_Vote_passed_1806f1528._7_4_ >> 8;
    FUN_1800b09f0(4,&local_d0,0);
    if (local_b8 < 0x10) goto LAB_1800dbc8f;
    uVar6 = local_b8 + 1;
    lVar2 = CONCAT44(local_d0._4_4_,(uint)local_d0);
    lVar5 = lVar2;
    if (uVar6 < 0x1000) {
LAB_1800dbc8a:
      thunk_FUN_1803d64e0(lVar5,uVar6);
      goto LAB_1800dbc8f;
    }
    lVar5 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar5) - 8U < 0x20) {
      uVar6 = local_b8 + 0x28;
      goto LAB_1800dbc8a;
    }
    pcVar1 = (code *)swi(0x29);
    local_d0 = (*pcVar1)(5);
    puVar8 = auStack_f0;
    uStack_c8 = extraout_XMM0_Dc;
    uStack_c4 = extraout_XMM0_Dd;
LAB_1800dbcf9:
    _Str = "";
    if (unaff_EDI == 3) {
      _Str = "[CT] ";
    }
  }
  local_c0 = 0;
  local_b8 = 0;
  *(undefined8 *)(puVar8 + -8) = 0x1800dbd22;
  sVar3 = strlen(_Str);
  *(undefined8 *)(puVar8 + -8) = 0x1800dbd31;
  FUN_1800133a0(&local_d0,_Str,sVar3);
  *(undefined8 *)(puVar8 + -8) = 0x1800dbd48;
  puVar4 = (undefined4 *)FUN_1800134a0(&local_d0,"vote passed: ",0xd);
  local_90 = *puVar4;
  uStack_8c = puVar4[1];
  uStack_88 = puVar4[2];
  uStack_84 = puVar4[3];
  local_80 = puVar4[4];
  uStack_7c = puVar4[5];
  uStack_78 = puVar4[6];
  uStack_74 = puVar4[7];
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 6) = 0xf;
  *(undefined1 *)puVar4 = 0;
  *(undefined8 *)(puVar8 + -8) = 0x1800dbd7b;
  FUN_1800d9190(&local_90,local_50,local_70,local_b0);
  uVar6 = CONCAT44(uStack_74,uStack_78);
  if (0xf < uVar6) {
    uVar7 = uVar6 + 1;
    lVar2 = CONCAT44(uStack_8c,local_90);
    lVar5 = lVar2;
    if (uVar7 < 0x1000) {
LAB_1800dbdb2:
      *(undefined8 *)(puVar8 + -8) = 0x1800dbdb7;
      thunk_FUN_1803d64e0(lVar5,uVar7);
      goto LAB_1800dbdb8;
    }
    lVar5 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar5) - 8U < 0x20) {
      uVar7 = uVar6 + 0x28;
      goto LAB_1800dbdb2;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800dbe6d:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    uVar6 = local_d0;
LAB_1800dbe74:
    pcVar1 = (code *)swi(0x29);
    local_d0 = uVar6;
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1800dbdb8:
  uVar6 = local_d0;
  if (0xf < local_b8) {
    uVar7 = local_b8 + 1;
    if (0xfff < uVar7) {
      uVar6 = *(ulonglong *)(local_d0 - 8);
      if (0x1f < (local_d0 - uVar6) - 8) goto LAB_1800dbe6d;
      uVar7 = local_b8 + 0x28;
    }
    *(undefined8 *)(puVar8 + -8) = 0x1800dbdf3;
    thunk_FUN_1803d64e0(uVar6,uVar7);
    uVar6 = local_d0;
  }
  local_d0._4_4_ = (undefined4)(uVar6 >> 0x20);
  local_d0._0_4_ = (uint)uVar6;
  local_c0 = 0;
  local_b8 = 0xf;
  local_d0._0_4_ = (uint)local_d0 & 0xffffff00;
  if (0xf < (ulonglong)local_b0[3]) {
    uVar7 = local_b0[3] + 1;
    lVar5 = local_b0[0];
    if (0xfff < uVar7) {
      lVar5 = *(longlong *)(local_b0[0] + -8);
      uVar6 = uVar6 & 0xffffffffffffff00;
      if (0x1f < (local_b0[0] - lVar5) - 8U) goto LAB_1800dbe74;
      uVar7 = local_b0[3] + 0x28;
    }
    *(undefined8 *)(puVar8 + -8) = 0x1800dbe3a;
    thunk_FUN_1803d64e0(lVar5,uVar7);
  }
  *(undefined8 *)(puVar8 + -8) = 0x1800dbe44;
  FUN_18000f890(local_70);
  *(undefined8 *)(puVar8 + -8) = 0x1800dbe4e;
  FUN_18000f890(local_50);
LAB_1800dbe4e:
  *(undefined8 *)(puVar8 + -8) = 0x1800dbe5a;
  return;
}



/* ===== 1800dbe80 FUN_1800dbe80 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800dbe80(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  size_t sVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *_Str;
  undefined1 *puVar13;
  undefined8 unaff_RSI;
  int unaff_EDI;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [32];
  char local_100;
  undefined6 uStack_ff;
  char acStack_f9 [17];
  ulonglong local_e8;
  ulonglong uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  if (param_1 == 0) {
    return;
  }
  local_20 = DAT_180919500 ^ (ulonglong)auStack_128;
  if (DAT_180920ec0 == '\0') {
LAB_1800dbf4b:
    puVar13 = auStack_128;
    if (DAT_180920e44 == '\0') goto LAB_1800dc1c4;
    FUN_1800d8a80();
    unaff_EDI = FUN_180011200(param_1 + 0x48);
    uVar4 = FUN_180011200(param_1 + 0x4c);
    uVar5 = FUN_18003a390(local_40,uVar4);
    uVar5 = FUN_180066ab0(local_60," (reason ",uVar5);
    plVar6 = (longlong *)FUN_1800134a0(uVar5,&DAT_1806e1ac0,1);
    local_a0 = *plVar6;
    lStack_98 = plVar6[1];
    local_90 = (undefined4)plVar6[2];
    uStack_8c = *(undefined4 *)((longlong)plVar6 + 0x14);
    uStack_88 = (undefined4)plVar6[3];
    uStack_84 = *(undefined4 *)((longlong)plVar6 + 0x1c);
    plVar6[2] = 0;
    plVar6[3] = 0xf;
    *(undefined1 *)plVar6 = 0;
    uStack_ff = 0;
    acStack_f9[0] = '\0';
    acStack_f9[1] = '\0';
    acStack_f9[2] = '\0';
    acStack_f9[3] = '\0';
    acStack_f9[4] = 0;
    acStack_f9[5] = '\0';
    acStack_f9[6] = '\0';
    acStack_f9[7] = '\0';
    acStack_f9[8] = '\0';
    acStack_f9[9] = '\0';
    acStack_f9[10] = '\0';
    acStack_f9[0xb] = '\0';
    acStack_f9[0xc] = '\0';
    acStack_f9[0xd] = '\0';
    acStack_f9[0xe] = '\0';
    acStack_f9[0xf] = '\0';
    acStack_f9[0x10] = '\0';
    local_e8 = 0xf;
    local_100 = '\0';
    unaff_RSI = FUN_1800d9040(local_80,uVar4);
    puVar13 = auStack_128;
    if (unaff_EDI != 2) goto LAB_1800dc004;
    _Str = "[T] ";
    puVar13 = auStack_128;
  }
  else {
    acStack_f9[5] = '\0';
    acStack_f9[6] = '\0';
    acStack_f9[7] = '\0';
    acStack_f9[8] = '\0';
    acStack_f9[9] = '\v';
    acStack_f9[10] = '\0';
    acStack_f9[0xb] = '\0';
    acStack_f9[0xc] = '\0';
    acStack_f9[0xd] = '\0';
    acStack_f9[0xe] = '\0';
    acStack_f9[0xf] = '\0';
    acStack_f9[0x10] = '\0';
    local_e8 = 0xf;
    local_100 = s_Vote_failed_1806f1580[0];
    uStack_ff = s_Vote_failed_1806f1580._1_6_;
    acStack_f9._0_4_ = s_Vote_failed_1806f1580._7_4_;
    acStack_f9[4] = 0;
    FUN_1800b09f0(4,&local_100,0);
    if (local_e8 < 0x10) goto LAB_1800dbf4b;
    uVar11 = local_e8 + 1;
    lVar9 = CONCAT17(acStack_f9[0],CONCAT61(uStack_ff,local_100));
    lVar10 = lVar9;
    if (uVar11 < 0x1000) {
LAB_1800dbf46:
      thunk_FUN_1803d64e0(lVar10,uVar11);
      goto LAB_1800dbf4b;
    }
    lVar10 = *(longlong *)(lVar9 + -8);
    if ((lVar9 - lVar10) - 8U < 0x20) {
      uVar11 = local_e8 + 0x28;
      goto LAB_1800dbf46;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar13 = auStack_120;
LAB_1800dc004:
    _Str = "";
    if (unaff_EDI == 3) {
      _Str = "[CT] ";
    }
  }
  *(undefined8 *)(puVar13 + 0x48) = 0;
  *(undefined8 *)(puVar13 + 0x50) = 0;
  *(undefined8 *)(puVar13 + 0x58) = 0;
  *(undefined8 *)(puVar13 + 0x60) = 0;
  *(undefined8 *)(puVar13 + -8) = 0x1800dc033;
  sVar7 = strlen(_Str);
  *(undefined8 *)(puVar13 + -8) = 0x1800dc043;
  FUN_1800133a0(puVar13 + 0x48,_Str,sVar7);
  *(undefined8 *)(puVar13 + -8) = 0x1800dc05b;
  puVar8 = (undefined4 *)FUN_1800134a0(puVar13 + 0x48,"vote failed: ",0xd);
  uVar4 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[3];
  *(undefined4 *)(puVar13 + 0x68) = *puVar8;
  *(undefined4 *)(puVar13 + 0x6c) = uVar4;
  *(undefined4 *)(puVar13 + 0x70) = uVar2;
  *(undefined4 *)(puVar13 + 0x74) = uVar3;
  uVar4 = puVar8[5];
  uVar2 = puVar8[6];
  uVar3 = puVar8[7];
  *(undefined4 *)(puVar13 + 0x78) = puVar8[4];
  *(undefined4 *)(puVar13 + 0x7c) = uVar4;
  *(undefined4 *)(puVar13 + 0x80) = uVar2;
  *(undefined4 *)(puVar13 + 0x84) = uVar3;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0xf;
  *(undefined1 *)puVar8 = 0;
  *(undefined8 *)(puVar13 + -8) = 0x1800dc091;
  FUN_1800d9190(puVar13 + 0x68,unaff_RSI,puVar13 + 0x28,&local_a0);
  if (0xf < uStack_a8) {
    uVar11 = uStack_a8 + 1;
    lVar10 = *(longlong *)(puVar13 + 0x68);
    lVar9 = lVar10;
    if (uVar11 < 0x1000) {
LAB_1800dc0c9:
      *(undefined8 *)(puVar13 + -8) = 0x1800dc0ce;
      thunk_FUN_1803d64e0(lVar9,uVar11);
      goto LAB_1800dc0cf;
    }
    lVar9 = *(longlong *)(lVar10 + -8);
    if ((lVar10 - lVar9) - 8U < 0x20) {
      uVar11 = uStack_a8 + 0x28;
      goto LAB_1800dc0c9;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800dc1ef:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800dc1f6:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800dc1fd:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1800dc0cf:
  uVar11 = *(ulonglong *)(puVar13 + 0x60);
  if (0xf < uVar11) {
    uVar12 = uVar11 + 1;
    lVar10 = *(longlong *)(puVar13 + 0x48);
    lVar9 = lVar10;
    if (0xfff < uVar12) {
      lVar9 = *(longlong *)(lVar10 + -8);
      if (0x1f < (lVar10 - lVar9) - 8U) goto LAB_1800dc1ef;
      uVar12 = uVar11 + 0x28;
    }
    *(undefined8 *)(puVar13 + -8) = 0x1800dc10c;
    thunk_FUN_1803d64e0(lVar9,uVar12);
  }
  *(undefined8 *)(puVar13 + 0x58) = 0;
  *(undefined8 *)(puVar13 + 0x60) = 0xf;
  puVar13[0x48] = 0;
  *(undefined8 *)(puVar13 + -8) = 0x1800dc128;
  FUN_18000f890(local_80);
  uVar11 = *(ulonglong *)(puVar13 + 0x40);
  if (0xf < uVar11) {
    uVar12 = uVar11 + 1;
    lVar10 = *(longlong *)(puVar13 + 0x28);
    lVar9 = lVar10;
    if (0xfff < uVar12) {
      lVar9 = *(longlong *)(lVar10 + -8);
      if (0x1f < (lVar10 - lVar9) - 8U) goto LAB_1800dc1f6;
      uVar12 = uVar11 + 0x28;
    }
    *(undefined8 *)(puVar13 + -8) = 0x1800dc166;
    thunk_FUN_1803d64e0(lVar9,uVar12);
  }
  *(undefined8 *)(puVar13 + 0x38) = 0;
  *(undefined8 *)(puVar13 + 0x40) = 0xf;
  puVar13[0x28] = 0;
  uVar11 = CONCAT44(uStack_84,uStack_88);
  if (0xf < uVar11) {
    uVar12 = uVar11 + 1;
    lVar10 = local_a0;
    if (0xfff < uVar12) {
      lVar10 = *(longlong *)(local_a0 + -8);
      if (0x1f < (local_a0 - lVar10) - 8U) goto LAB_1800dc1fd;
      uVar12 = uVar11 + 0x28;
    }
    *(undefined8 *)(puVar13 + -8) = 0x1800dc1b0;
    thunk_FUN_1803d64e0(lVar10,uVar12);
  }
  *(undefined8 *)(puVar13 + -8) = 0x1800dc1ba;
  FUN_18000f890(local_60);
  *(undefined8 *)(puVar13 + -8) = 0x1800dc1c4;
  FUN_18000f890(local_40);
LAB_1800dc1c4:
  *(undefined8 *)(puVar13 + -8) = 0x1800dc1d0;
  return;
}



/* ===== 1800dc210 FUN_1800dc210 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800dc210(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  char *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  ulonglong local_188;
  longlong local_180 [4];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  ulonglong uStack_128;
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  if (param_1 == 0) {
    return;
  }
  local_40 = DAT_180919500 ^ (ulonglong)auStack_1c8;
  local_1a8 = 0;
  if (DAT_180920e44 == '\0') {
    return;
  }
  FUN_1800d8a80();
  uVar5 = FUN_180011200(param_1 + 0x48);
  iVar6 = FUN_180011200(param_1 + 0x4c);
  if (iVar6 < 1) {
    local_180[1] = 0;
    local_180[2] = 0;
    local_180[3] = 0xf;
    local_180[0] = 0;
    plVar16 = local_180;
    uVar14 = 8;
  }
  else {
    uVar7 = FUN_18003a390(local_60,iVar6);
    local_1a8 = 1;
    uVar7 = FUN_180066ab0(local_80,&DAT_1806f0594,uVar7);
    local_1a8 = 3;
    puVar8 = (undefined4 *)FUN_1800134a0(uVar7,&DAT_1806f15b0,1);
    local_140 = *puVar8;
    uStack_13c = puVar8[1];
    uStack_138 = puVar8[2];
    uStack_134 = puVar8[3];
    local_130 = *(undefined8 *)(puVar8 + 4);
    uStack_128 = *(ulonglong *)(puVar8 + 6);
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0xf;
    *(undefined1 *)puVar8 = 0;
    plVar16 = (longlong *)&local_140;
    uVar14 = 0x27;
  }
  local_1a8 = uVar14;
  uVar7 = FUN_18003a390(local_a0,uVar5);
  uVar7 = FUN_180066ab0(local_c0," (reason ",uVar7);
  uVar7 = FUN_180066820(local_e0,uVar7,plVar16);
  puVar8 = (undefined4 *)FUN_1800134a0(uVar7,&DAT_1806e1ac0,1);
  local_160 = *puVar8;
  uStack_15c = puVar8[1];
  uStack_158 = puVar8[2];
  uStack_154 = puVar8[3];
  local_150 = puVar8[4];
  uStack_14c = puVar8[5];
  uStack_148 = puVar8[6];
  uStack_144 = puVar8[7];
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0xf;
  *(undefined1 *)puVar8 = 0;
  uVar15 = uVar14 | 0x10;
  local_1a8 = uVar15;
  uVar7 = FUN_18003a390(local_100,iVar6);
  uVar9 = FUN_1800d9040(local_120,uVar5);
  local_1a0 = (char *)0x0;
  uStack_198 = 0;
  local_1a0 = (char *)FUN_18000fb70(0x20);
  uVar4 = s_vote_call_refused__1806f15b8._12_4_;
  uVar3 = s_vote_call_refused__1806f15b8._8_4_;
  uVar5 = s_vote_call_refused__1806f15b8._4_4_;
  local_190 = 0x13;
  local_188 = 0x1f;
  *(undefined4 *)local_1a0 = s_vote_call_refused__1806f15b8._0_4_;
  *(undefined4 *)(local_1a0 + 4) = uVar5;
  *(undefined4 *)(local_1a0 + 8) = uVar3;
  *(undefined4 *)(local_1a0 + 0xc) = uVar4;
  *(uint *)(local_1a0 + 0xf) =
       CONCAT31(s_vote_call_refused__1806f15b8._16_3_,s_vote_call_refused__1806f15b8[0xf]);
  local_1a0[0x13] = '\0';
  FUN_1800d9190(&local_1a0,uVar9,uVar7,&local_160);
  if (0xf < local_188) {
    uVar12 = local_188 + 1;
    pcVar10 = local_1a0;
    if (uVar12 < 0x1000) {
LAB_1800dc428:
      thunk_FUN_1803d64e0(pcVar10,uVar12);
      goto LAB_1800dc42e;
    }
    pcVar10 = *(char **)(local_1a0 + -8);
    if (local_1a0 + (-8 - (longlong)pcVar10) < (char *)0x20) {
      uVar12 = local_188 + 0x28;
      goto LAB_1800dc428;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800dc56d:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800dc574:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
LAB_1800dc57b:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1800dc42e:
  FUN_18000f890(local_120);
  FUN_18000f890(local_100);
  uVar12 = CONCAT44(uStack_144,uStack_148);
  if (0xf < uVar12) {
    uVar13 = uVar12 + 1;
    lVar2 = CONCAT44(uStack_15c,local_160);
    lVar11 = lVar2;
    if (0xfff < uVar13) {
      lVar11 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar11) - 8U) goto LAB_1800dc56d;
      uVar13 = uVar12 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar11,uVar13);
  }
  FUN_18000f890(local_e0);
  FUN_18000f890(local_c0);
  FUN_18000f890(local_a0);
  if (((uVar14 & 8) != 0) && (uVar15 = uVar14 & 0xfffffff7, 0xf < (ulonglong)local_180[3])) {
    uVar12 = local_180[3] + 1;
    lVar11 = local_180[0];
    if (0xfff < uVar12) {
      lVar11 = *(longlong *)(local_180[0] + -8);
      if (0x1f < (local_180[0] - lVar11) - 8U) goto LAB_1800dc574;
      uVar12 = local_180[3] + 0x28;
    }
    thunk_FUN_1803d64e0(lVar11,uVar12);
  }
  if (((uVar15 & 4) != 0) && (uVar15 = uVar15 & 0xfffffffb, 0xf < uStack_128)) {
    uVar12 = uStack_128 + 1;
    lVar2 = CONCAT44(uStack_13c,local_140);
    lVar11 = lVar2;
    if (0xfff < uVar12) {
      lVar11 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar11) - 8U) goto LAB_1800dc57b;
      uVar12 = uStack_128 + 0x28;
    }
    thunk_FUN_1803d64e0(lVar11,uVar12);
  }
  if ((uVar15 & 2) != 0) {
    uVar15 = uVar15 & 0xfffffffd;
    FUN_18000f890(local_80);
  }
  if ((uVar15 & 1) != 0) {
    FUN_18000f890(local_60);
  }
  return;
}



/* ===== 1800dc590 FUN_1800dc590 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800dc590(int param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  longlong ******pppppplVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *******ppppppplVar11;
  byte *pbVar12;
  longlong *******ppppppplVar13;
  size_t sVar14;
  ulonglong *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  char *pcVar27;
  byte *pbVar28;
  uint unaff_R14D;
  ulonglong uVar29;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined4 local_138;
  byte *local_130;
  uint local_128;
  ulonglong local_120;
  longlong *******local_118;
  longlong *******ppppppplStack_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  if (param_1 != 0xc) {
    return;
  }
  local_58 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_138 = 0;
  if (((DAT_180920e44 == '\0') && (DAT_180920ec0 == '\0')) ||
     (cVar6 = FUN_1803a10a0(), cVar6 == '\0')) {
    lVar9 = DAT_180cd0ed0;
    DAT_1809e9bcc = 0xffffffff;
    DAT_180ca3cbd = '\0';
    lVar20 = DAT_180cd0ec8;
    if (DAT_180cd0ec8 != DAT_180cd0ed0) {
      do {
        FUN_18000f890(lVar20);
        lVar20 = lVar20 + 0x28;
      } while (lVar20 != lVar9);
      DAT_180cd0ed0 = DAT_180cd0ec8;
    }
    lVar9 = DAT_180cd0ee8;
    lVar20 = DAT_180cd0ee0;
    puVar25 = auStack_158;
    if (DAT_180cd0ee0 != DAT_180cd0ee8) {
      do {
        FUN_18000f890(lVar20);
        lVar20 = lVar20 + 0x20;
      } while (lVar20 != lVar9);
      DAT_180cd0ee8 = DAT_180cd0ee0;
      puVar25 = auStack_158;
    }
    goto LAB_1800dcea3;
  }
  FUN_1800d8a80();
  if ((DAT_1809620c0 != 0) && (lVar9 = FUN_18000f3a0(), lVar9 != 0)) {
    if (DAT_180ca3cbf == '\0') {
      DAT_180ca3cbf = FUN_180273b60("vote_cast",FUN_1800d97c0);
    }
    if (DAT_180ca3cbe == '\0') {
      DAT_180ca3cbe = FUN_180273b60("vote_started",FUN_1800d9e80);
    }
  }
  puVar26 = auStack_158;
  puVar22 = auStack_158;
  puVar23 = auStack_158;
  puVar24 = auStack_158;
  DVar7 = GetTickCount();
  if ((DAT_180cd0e78 == (longlong ******)0x0) || (999 < DVar7 - _DAT_180cd0ea4)) {
    DAT_180cd0e78 = (longlong ******)0x0;
    _DAT_180cd0ea4 = DVar7;
    FUN_1803a09f0(&local_118);
    ppppppplVar11 = ppppppplStack_110;
    uVar4 = DAT_18096196c;
    if (local_118 != ppppppplStack_110) {
      uVar18 = (ulonglong)DAT_180961974;
      uVar29 = (ulonglong)DAT_180961970;
      uVar19 = (ulonglong)DAT_18096196c;
      uVar21 = (ulonglong)DAT_180961968;
      ppppppplVar13 = local_118;
      do {
        unaff_R14D = uVar4;
        if (((((*ppppppplVar13 != (longlong ******)0x0) &&
              (lVar9 = FUN_18000f3a0((longlong)*ppppppplVar13 + uVar21), lVar9 != 0)) &&
             (lVar9 = FUN_18000f3a0(lVar9 + uVar19), lVar9 != 0)) &&
            ((lVar9 = FUN_18000f3a0(lVar9 + uVar29), lVar9 != 0 &&
             (pcVar10 = (char *)FUN_18000f3a0(lVar9 + uVar18),
             pcVar10 + -0x10000 < (char *)0x7ffffffeffff)))) &&
           ((pcVar10 != (char *)0x0 && (iVar8 = strcmp(pcVar10,"C_VoteController"), iVar8 == 0)))) {
          DAT_180cd0e78 = *ppppppplVar13;
          break;
        }
        ppppppplVar13 = ppppppplVar13 + 1;
      } while (ppppppplVar13 != ppppppplVar11);
    }
    uVar29 = 0;
    if (local_118 == (longlong *******)0x0) goto LAB_1800dc80a;
    uVar18 = ((longlong)(local_108 - (longlong)local_118) >> 3) * 8;
    if (uVar18 < 0x1000) {
      ppppppplVar11 = local_118;
LAB_1800dc7fb:
      thunk_FUN_1803d64e0(ppppppplVar11,uVar18);
      goto LAB_1800dc80a;
    }
    puVar25 = auStack_158;
    if ((ulonglong)((longlong)local_118 + (-8 - (longlong)local_118[-1])) < 0x20) {
      uVar18 = uVar18 + 0x27;
      ppppppplVar11 = (longlong *******)local_118[-1];
      goto LAB_1800dc7fb;
    }
    goto LAB_1800dce27;
  }
LAB_1800dc80a:
  uVar4 = DAT_180cd0e9c;
  pppppplVar5 = DAT_180cd0e78;
  uVar29 = 0;
  puVar25 = auStack_158;
  if (DAT_180cd0e78 == (longlong ******)0x0) goto LAB_1800dcea3;
  uVar18 = (ulonglong)DAT_180cd0e8c;
  puVar25 = auStack_158;
  if (DAT_180cd0e8c == 0) goto LAB_1800dcea3;
  uVar19 = (ulonglong)DAT_180cd0e9c;
  if (DAT_180cd0e9c != 0) {
    DAT_180962433 = FUN_180011220((longlong)DAT_180cd0e78 + uVar19);
  }
  puVar25 = auStack_158;
  if (DAT_180920e44 == '\0') goto LAB_1800dcea3;
  unaff_R14D = FUN_180011200((longlong)pppppplVar5 + uVar18);
  local_128 = unaff_R14D;
  if (unaff_R14D == 0xffffffff) {
LAB_1800dc90f:
    DVar7 = GetTickCount();
    if (unaff_R14D != 0xffffffff) goto LAB_1800dc91f;
LAB_1800dce2e:
    if (DAT_1809e9bcc != 0xffffffff) {
      *(undefined8 *)(puVar26 + -8) = 0x1800dce3c;
      FUN_1800d9550();
      *(undefined8 *)(puVar26 + -8) = 0x1800dce41;
      FUN_1800da1e0();
      lVar9 = DAT_180cd0ed0;
      lVar20 = DAT_180cd0ec8;
      if (DAT_180cd0ec8 != DAT_180cd0ed0) {
        do {
          *(undefined8 *)(puVar26 + -8) = 0x1800dce5c;
          FUN_18000f890(lVar20);
          lVar20 = lVar20 + 0x28;
        } while (lVar20 != lVar9);
        DAT_180cd0ed0 = DAT_180cd0ec8;
      }
      pbVar28 = (byte *)&DAT_1809ebc30;
      if (0xf < DAT_1809ebc48) {
        pbVar28 = DAT_1809ebc30;
      }
      DAT_1809ebc40 = uVar29;
      *pbVar28 = 0;
      DAT_180ca3cbd = '\0';
    }
  }
  else {
    if (DAT_180cd0e94 != 0) {
      uVar18 = (ulonglong)DAT_180cd0e94;
      DAT_180cd0ea8 = FUN_180011200((ulonglong)DAT_180cd0e94 + (longlong)pppppplVar5);
      DAT_180cd0eac = FUN_180011200(uVar18 + 4 + (longlong)pppppplVar5);
      _DAT_180cd0eb0 = FUN_180011200(uVar18 + 8 + (longlong)pppppplVar5);
      _DAT_180cd0eb4 = FUN_180011200(uVar18 + 0xc + (longlong)pppppplVar5);
      _DAT_180cd0eb8 = FUN_180011200(uVar18 + 0x10 + (longlong)pppppplVar5);
    }
    if (DAT_180cd0e98 != 0) {
      DAT_180cd0e84 = FUN_180011200((longlong)pppppplVar5 + (ulonglong)DAT_180cd0e98);
    }
    if (uVar4 != 0) {
      DAT_180962433 = FUN_180011220((longlong)pppppplVar5 + uVar19);
    }
    if (DAT_180cd0e90 == 0) goto LAB_1800dc90f;
    DAT_1809ebb18 = FUN_180011200((longlong)pppppplVar5 + (ulonglong)DAT_180cd0e90);
    DVar7 = GetTickCount();
LAB_1800dc91f:
    if (DAT_1809e9bcc == 0xffffffff) {
      DAT_180cd0e80 = DVar7;
    }
    puVar26 = auStack_158;
    if ((DAT_180ca3cbd == '\0') && (puVar26 = auStack_158, 499 < DVar7 - DAT_180cd0e80)) {
      ppppppplStack_110 = (longlong *******)0x0;
      uVar18 = 0;
      local_108 = 0;
      local_100 = 0xf;
      local_118 = (longlong *******)0x0;
      local_138 = 1;
      pbVar28 = (byte *)&DAT_1809ebc30;
      if (0xf < DAT_1809ebc48) {
        pbVar28 = DAT_1809ebc30;
      }
      pbVar12 = pbVar28 + DAT_1809ebc40;
      local_130 = pbVar12;
      if (pbVar28 != pbVar12) {
        ppppppplVar11 = (longlong *******)0x0;
        uVar19 = 0xf;
        do {
          bVar2 = *pbVar28;
          uVar29 = (ulonglong)(char)bVar2;
          uVar21 = uVar19;
          if (bVar2 < 0x3f) {
            pbVar12 = local_130;
            if ((0x5800008400002400U >> (uVar29 & 0x3f) & 1) == 0) goto LAB_1800dc9ea;
          }
          else {
LAB_1800dc9ea:
            if (bVar2 != 0x5c) {
              if (uVar18 < uVar19) {
                local_108 = uVar18 + 1;
                ppppppplVar13 = (longlong *******)&local_118;
                if (0xf < uVar19) {
                  ppppppplVar13 = ppppppplVar11;
                }
                *(byte *)((longlong)ppppppplVar13 + uVar18) = bVar2;
                *(undefined1 *)((longlong)ppppppplVar13 + uVar18 + 1) = 0;
                uVar18 = local_108;
                uVar21 = local_100;
              }
              else {
                if (uVar18 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  FUN_180011990();
                }
                local_120 = uVar18 + 1;
                uVar21 = local_120 | 0xf;
                if (uVar21 < 0x8000000000000000) {
                  if (0x7fffffffffffffff - (uVar19 >> 1) < uVar19) {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar1 = (uVar19 >> 1) + uVar19;
                    if (uVar21 < uVar1) {
                      uVar21 = uVar1;
                    }
                  }
                }
                else {
                  uVar21 = 0x7fffffffffffffff;
                }
                ppppppplVar13 = (longlong *******)FUN_18000fb70(uVar21 + 1);
                local_108 = local_120;
                local_100 = uVar21;
                if (uVar19 < 0x10) {
                  FUN_180540530(ppppppplVar13,&local_118,uVar18);
                  *(byte *)((longlong)ppppppplVar13 + uVar18) = bVar2;
                  *(undefined1 *)((longlong)ppppppplVar13 + uVar18 + 1) = 0;
                }
                else {
                  FUN_180540530(ppppppplVar13,ppppppplVar11,uVar18);
                  *(byte *)((longlong)ppppppplVar13 + uVar18) = bVar2;
                  *(undefined1 *)((longlong)ppppppplVar13 + uVar18 + 1) = 0;
                  if (uVar19 + 1 < 0x1000) {
                    thunk_FUN_1803d64e0(ppppppplVar11);
                  }
                  else {
                    if (0x1f < (ulonglong)
                               ((longlong)ppppppplVar11 + (-8 - (longlong)ppppppplVar11[-1])))
                    goto LAB_1800dce12;
                    thunk_FUN_1803d64e0(ppppppplVar11[-1],uVar19 + 0x28);
                  }
                }
                uVar18 = local_120;
                local_118 = ppppppplVar13;
              }
              pbVar12 = local_130;
              ppppppplVar11 = local_118;
            }
          }
          pbVar28 = pbVar28 + 1;
          uVar19 = uVar21;
        } while (pbVar28 != pbVar12);
        unaff_R14D = local_128;
      }
      ppppppplVar13 = (longlong *******)(ulonglong)unaff_R14D;
      uVar29 = 0;
      pcVar10 = "false";
      pcVar27 = "false";
      if (DAT_180920e46 != '\0') {
        pcVar27 = "true";
      }
      if (DAT_180920e45 != '\0') {
        pcVar10 = "true";
      }
      local_d8 = 0;
      lStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      sVar14 = strlen(pcVar10);
      FUN_1800133a0(&local_d8,pcVar10,sVar14);
      puVar15 = (ulonglong *)FUN_1800134a0(&local_d8,&DAT_1806f1258,1);
      local_f8 = *puVar15;
      uStack_f0 = puVar15[1];
      local_e8 = puVar15[2];
      uStack_e0 = puVar15[3];
      puVar15[2] = 0;
      puVar15[3] = 0xf;
      *(undefined1 *)puVar15 = 0;
      local_138 = 5;
      FUN_180042850(local_b8,&local_f8,pcVar27);
      local_138 = 7;
      if (0xf < uStack_e0) {
        uVar19 = uStack_e0 + 1;
        uVar18 = local_f8;
        if (uVar19 < 0x1000) {
LAB_1800dcc2a:
          thunk_FUN_1803d64e0(uVar18,uVar19);
          goto LAB_1800dcc2f;
        }
        uVar18 = *(ulonglong *)(local_f8 - 8);
        if ((local_f8 - uVar18) - 8 < 0x20) {
          uVar19 = uStack_e0 + 0x28;
          goto LAB_1800dcc2a;
        }
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar22 = auStack_150;
LAB_1800dce12:
        unaff_R14D = (uint)ppppppplVar13;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar23 = puVar22 + 8;
LAB_1800dce19:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar24 = puVar23 + 8;
LAB_1800dce20:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar25 = puVar24 + 8;
LAB_1800dce27:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar26 = puVar25 + 8;
        goto LAB_1800dce2e;
      }
LAB_1800dcc2f:
      local_e8 = 0;
      uStack_e0 = 0xf;
      local_f8 = local_f8 & 0xffffffffffffff00;
      if (0xf < uStack_c0) {
        uVar18 = uStack_c0 + 1;
        lVar9 = local_d8;
        if (0xfff < uVar18) {
          lVar9 = *(longlong *)(local_d8 + -8);
          puVar22 = auStack_158;
          if (0x1f < (local_d8 - lVar9) - 8U) goto LAB_1800dce12;
          uVar18 = uStack_c0 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar9,uVar18);
      }
      uVar16 = FUN_180066ab0(local_78,"if(k.wlVoteStart)k.wlVoteStart(",local_b8);
      puVar15 = (ulonglong *)FUN_1800134a0(uVar16,&DAT_1806f15cc,2);
      local_f8 = *puVar15;
      uStack_f0 = puVar15[1];
      local_e8 = puVar15[2];
      uStack_e0 = puVar15[3];
      puVar15[2] = 0;
      puVar15[3] = 0xf;
      *(undefined1 *)puVar15 = 0;
      local_138 = 0xf;
      uVar16 = FUN_180066820(local_98,&local_f8,&local_118);
      plVar17 = (longlong *)FUN_1800134a0(uVar16,&DAT_1806e0a84,3);
      local_d8 = *plVar17;
      lStack_d0 = plVar17[1];
      local_c8 = plVar17[2];
      uStack_c0 = plVar17[3];
      plVar17[2] = 0;
      plVar17[3] = 0xf;
      *(undefined1 *)plVar17 = 0;
      local_138 = 0x1f;
      FUN_1800d82c0(&local_d8);
      if (0xf < uStack_c0) {
        uVar18 = uStack_c0 + 1;
        lVar9 = local_d8;
        if (0xfff < uVar18) {
          lVar9 = *(longlong *)(local_d8 + -8);
          if (0x1f < (local_d8 - lVar9) - 8U) goto LAB_1800dce19;
          uVar18 = uStack_c0 + 0x28;
        }
        thunk_FUN_1803d64e0(lVar9,uVar18);
      }
      FUN_18000f890(local_98);
      if (0xf < uStack_e0) {
        uVar19 = uStack_e0 + 1;
        uVar18 = local_f8;
        if (0xfff < uVar19) {
          uVar18 = *(ulonglong *)(local_f8 - 8);
          if (0x1f < (local_f8 - uVar18) - 8) goto LAB_1800dce20;
          uVar19 = uStack_e0 + 0x28;
        }
        thunk_FUN_1803d64e0(uVar18,uVar19);
      }
      FUN_18000f890(local_78);
      FUN_18000f890(local_b8);
      if (0xf < local_100) {
        uVar18 = local_100 + 1;
        ppppppplVar11 = local_118;
        if (0xfff < uVar18) {
          ppppppplVar11 = (longlong *******)local_118[-1];
          puVar25 = auStack_158;
          if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)ppppppplVar11)))
          goto LAB_1800dce27;
          uVar18 = local_100 + 0x28;
        }
        thunk_FUN_1803d64e0(ppppppplVar11,uVar18);
      }
      DAT_180ca3cbd = '\x01';
      FUN_1800d9550();
      puVar26 = auStack_158;
    }
  }
  puVar25 = puVar26;
  DAT_1809e9bcc = unaff_R14D;
LAB_1800dcea3:
  *(undefined8 *)(puVar25 + -8) = 0x1800dceaf;
  return;
}



/* ===== 1800dced0 FUN_1800dced0 ===== */

undefined8 * FUN_1800dced0(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  puVar14 = (undefined4 *)DAT_180cd0ec8;
  lVar11 = ((longlong)DAT_180cd0ed0 - (longlong)DAT_180cd0ec8 >> 3) * -0x3333333333333333;
  uVar17 = 0x666666666666666;
  if (lVar11 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar1 = lVar11 + 1;
  uVar13 = ((longlong)DAT_180cd0ed8 - (longlong)DAT_180cd0ec8 >> 3) * -0x3333333333333333;
  if (uVar13 <= 0x666666666666666 - (uVar13 >> 1)) {
    uVar13 = (uVar13 >> 1) + uVar13;
    uVar17 = uVar1;
    if (uVar1 <= uVar13) {
      uVar17 = uVar13;
    }
    if (0x666666666666666 < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar12 = (undefined8 *)FUN_18000fb70(uVar17 * 0x28);
  puVar3 = puVar12 + (((longlong)param_2 - (longlong)puVar14) / 0x28) * 5;
  puVar2 = puVar3 + 5;
  local_78 = &DAT_180cd0ec8;
  local_70 = puVar12;
  local_68 = uVar17;
  local_60 = puVar2;
  local_58 = puVar2;
  FUN_180024b50(puVar3);
  puVar15 = auStack_98;
  puVar16 = auStack_98;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  puVar10 = (undefined4 *)DAT_180cd0ed0;
  puVar9 = puVar12;
  puVar14 = (undefined4 *)DAT_180cd0ec8;
  if ((undefined8 *)param_2 == DAT_180cd0ed0) {
    for (; puVar14 != puVar10; puVar14 = puVar14 + 10) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar14[1];
      uVar6 = puVar14[2];
      uVar7 = puVar14[3];
      *(undefined4 *)puVar9 = *puVar14;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar14 + 6);
      puVar9[2] = *(undefined8 *)(puVar14 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      *(undefined4 *)(puVar9 + 4) = puVar14[8];
      *(undefined4 *)((longlong)puVar9 + 0x24) = puVar14[9];
      puVar9 = puVar9 + 5;
    }
  }
  else {
    for (; DAT_180cd0ed0 = (undefined8 *)puVar10, puVar14 != param_2; puVar14 = puVar14 + 10) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar14[1];
      uVar6 = puVar14[2];
      uVar7 = puVar14[3];
      *(undefined4 *)puVar9 = *puVar14;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar14 + 6);
      puVar9[2] = *(undefined8 *)(puVar14 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      *(undefined4 *)(puVar9 + 4) = puVar14[8];
      *(undefined4 *)((longlong)puVar9 + 0x24) = puVar14[9];
      puVar9 = puVar9 + 5;
      puVar10 = (undefined4 *)DAT_180cd0ed0;
    }
    for (; param_2 != puVar10; param_2 = param_2 + 10) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      *(undefined4 *)puVar2 = *param_2;
      *(undefined4 *)((longlong)puVar2 + 4) = uVar5;
      *(undefined4 *)(puVar2 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(param_2 + 6);
      puVar2[2] = *(undefined8 *)(param_2 + 4);
      puVar2[3] = uVar8;
      *(undefined8 *)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 6) = 0xf;
      *(undefined1 *)param_2 = 0;
      *(undefined4 *)(puVar2 + 4) = param_2[8];
      *(undefined4 *)((longlong)puVar2 + 0x24) = param_2[9];
      puVar2 = puVar2 + 5;
    }
  }
  puVar10 = (undefined4 *)DAT_180cd0ed0;
  puVar14 = (undefined4 *)DAT_180cd0ec8;
  if (DAT_180cd0ec8 == (undefined8 *)0x0) goto LAB_1800dd192;
  for (; puVar14 != puVar10; puVar14 = puVar14 + 10) {
    FUN_18000f890(puVar14);
  }
  puVar14 = (undefined4 *)DAT_180cd0ec8;
  if ((ulonglong)(((longlong)DAT_180cd0ed8 - (longlong)DAT_180cd0ec8 >> 3) * 8) < 0x1000) {
LAB_1800dd187:
    puVar16 = puVar15;
  }
  else {
    puVar14 = *(undefined4 **)((longlong)DAT_180cd0ec8 + -8);
    if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_180cd0ec8 + (-8 - (longlong)puVar14))) {
      puVar14 = (undefined4 *)&DAT_00000005;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar15 = auStack_90;
      goto LAB_1800dd187;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x1800dd192;
  thunk_FUN_1803d64e0(puVar14);
LAB_1800dd192:
  DAT_180cd0ec8 = puVar12;
  DAT_180cd0ed0 = puVar12 + uVar1 * 5;
  DAT_180cd0ed8 = puVar12 + uVar17 * 5;
  return puVar3;
}



/* ===== 1800dd1e0 FUN_1800dd1e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800dd1e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong local_res8 [4];
  
  if (param_1 == 0) {
    DAT_180ca3d64 = 0;
    return;
  }
  if (DAT_180920e25 == '\0') {
    DAT_180ca3d64 = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    DAT_180ca3d64 = 0;
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(local_res8);
    DAT_181108a00 = local_res8[0];
    DAT_1811089f8 = FUN_1803a0c50(local_res8);
    DAT_180cd1304 = '\x01';
  }
  lVar7 = DAT_1811089f8;
  if (DAT_1811089f8 == 0) {
    DAT_180ca3d64 = 0;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_180ca3d64 = 0;
    return;
  }
  iVar4 = FUN_180011200(DAT_1811089f8 + (ulonglong)DAT_180ca09f0);
  lVar1 = DAT_181108a00;
  if (999 < iVar4 - 1U) {
    DAT_180ca3d64 = 0;
    return;
  }
  if ((DAT_180cd0ef8 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd0efc = FUN_18038eaf0("CCSWeaponBaseVData","m_bIsFullAuto");
    DAT_180cd0f00 = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_180cd0ef8 = '\x01';
  }
  if (((DAT_180ca0a0c == 0) || (uVar10 = (ulonglong)DAT_180ca0a10, DAT_180ca0a10 == 0)) ||
     (lVar7 = FUN_18000f3a0(lVar7 + (ulonglong)DAT_180ca0a0c), lVar7 == 0)) {
    lVar7 = 0;
LAB_1800dd34a:
    if (lVar7 == 0) {
      DAT_180ca3d64 = 0;
      return;
    }
    sVar3 = 0;
  }
  else {
    uVar5 = FUN_180011200(lVar7 + uVar10);
    plVar8 = (longlong *)FUN_1803a0940(local_res8,uVar5);
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      DAT_180ca3d64 = 0;
      return;
    }
    if (((DAT_1809619a4 == 0) || (DAT_1809619a8 == 0)) || (DAT_180961998 == 0)) goto LAB_1800dd34a;
    sVar3 = FUN_180011440((ulonglong)DAT_1809619a4 +
                          (ulonglong)DAT_1809619a8 + lVar7 + (ulonglong)DAT_180961998);
  }
  if (((sVar3 != 0x40) && (uVar10 = (ulonglong)DAT_180cd0efc, DAT_180cd0efc != 0)) &&
     ((uVar11 = (ulonglong)DAT_180cd0f00, DAT_180cd0f00 != 0 &&
      ((((DAT_1809619a0 != 0 &&
         (lVar9 = FUN_18000f3a0((ulonglong)DAT_1809619a0 + (ulonglong)DAT_1809619c0 + lVar7),
         lVar9 != 0)) && (iVar4 = FUN_180011200(lVar9 + uVar11), (iVar4 - 1U & 0xfffffff8) == 0)) &&
       ((iVar4 != 7 && (cVar2 = FUN_180011220(lVar9 + uVar10), cVar2 == '\0')))))))) {
    if ((DAT_180961990 != 0) && (iVar4 = FUN_180011200(lVar7 + (ulonglong)DAT_180961990), iVar4 < 1)
       ) {
LAB_1800dd424:
      *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffffffe;
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
      uVar12 = *(uint *)(param_1 + 100) & _UNK_1808adf74;
      uVar13 = *(uint *)(param_1 + 0x68) & _UNK_1808adf78;
      uVar14 = *(uint *)(param_1 + 0x6c) & _UNK_1808adf7c;
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & _DAT_1808adf70;
      *(uint *)(param_1 + 100) = uVar12;
      *(uint *)(param_1 + 0x68) = uVar13;
      *(uint *)(param_1 + 0x6c) = uVar14;
      DAT_180ca3d64 = 1;
      return;
    }
    uVar10 = (ulonglong)DAT_18096199c;
    if (((DAT_18096199c != 0) && (DAT_180ca09b8 != 0)) && (lVar1 != 0)) {
      iVar4 = FUN_180011200(lVar1 + (ulonglong)DAT_180ca09b8);
      iVar6 = FUN_180011200(lVar7 + uVar10);
      if (iVar4 + 1 < iVar6) goto LAB_1800dd424;
    }
    if (DAT_180ca3d64 == '\0') {
      return;
    }
    uVar10 = *(ulonglong *)(param_1 + 0x68) | _UNK_1808ad3a8;
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | _DAT_1808ad3a0;
    *(ulonglong *)(param_1 + 0x68) = uVar10;
    if (0 < *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x30) + -1;
    }
  }
  DAT_180ca3d64 = 0;
  return;
}



/* ===== 1800dd490 FUN_1800dd490 ===== */

void FUN_1800dd490(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  
  if ((DAT_180cd0f50 == '\0') &&
     (hModule = GetModuleHandleA("steam_api64.dll"), hModule != (HMODULE)0x0)) {
    DAT_180cd0f50 = '\x01';
    pFVar1 = GetProcAddress(hModule,"SteamAPI_SteamFriends_v018");
    pFVar2 = GetProcAddress(hModule,"SteamAPI_SteamUtils_v010");
    pFVar3 = GetProcAddress(hModule,"SteamAPI_SteamUser_v023");
    if (pFVar1 == (FARPROC)0x0) {
      DAT_180cd0f58 = 0;
    }
    else {
      DAT_180cd0f58 = (*pFVar1)();
    }
    if (pFVar2 == (FARPROC)0x0) {
      DAT_180cd0f60 = 0;
    }
    else {
      DAT_180cd0f60 = (*pFVar2)();
    }
    if (pFVar3 == (FARPROC)0x0) {
      DAT_180cd0f68 = 0;
    }
    else {
      DAT_180cd0f68 = (*pFVar3)();
    }
    DAT_180cd0f70 = GetProcAddress(hModule,"SteamAPI_ISteamFriends_GetMediumFriendAvatar");
    DAT_180cd0f78 = GetProcAddress(hModule,"SteamAPI_ISteamFriends_RequestUserInformation");
    DAT_180cd0f80 = GetProcAddress(hModule,"SteamAPI_ISteamUtils_GetImageSize");
    DAT_180cd0f88 = GetProcAddress(hModule,"SteamAPI_ISteamUtils_GetImageRGBA");
    DAT_180cd0f90 = GetProcAddress(hModule,"SteamAPI_ISteamUser_GetSteamID");
  }
  return;
}



/* ===== 1800dd5f0 FUN_1800dd5f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800dd5f0(undefined4 param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  uint local_a8;
  uint local_a4;
  longlong *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  int local_88;
  undefined4 local_84;
  ulonglong local_80;
  longlong lStack_78;
  longlong local_70;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_a4 = 0;
  cVar3 = (*DAT_180cd0f80)(DAT_180cd0f60,param_1,&local_a8,&local_a4);
  puVar7 = auStack_c8;
  if ((((cVar3 == '\0') || (local_a8 == 0)) || (local_a4 == 0)) ||
     ((0x100 < local_a8 || (0x100 < local_a4)))) {
    uVar8 = 0;
    goto LAB_1800dd803;
  }
  uVar10 = (ulonglong)local_a4 * (ulonglong)local_a8 * 4;
  local_80 = 0;
  lStack_78 = 0;
  lVar9 = 0;
  local_70 = 0;
  if (uVar10 == 0) {
    uVar5 = 0;
  }
  else {
    if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_1800118d0();
    }
    uVar5 = FUN_18000fb70(uVar10);
    lVar9 = uVar5 + uVar10;
    local_80 = uVar5;
    local_70 = lVar9;
    FUN_180540170(uVar5,0,uVar10);
    lStack_78 = uVar5 + uVar10;
  }
  cVar3 = (*DAT_180cd0f88)(DAT_180cd0f60,param_1,uVar5,(int)lStack_78 - (int)uVar5);
  plVar1 = DAT_1811079e0;
  if ((cVar3 == '\0') || (DAT_1811079e0 == (longlong *)0x0)) {
LAB_1800dd7b4:
    uVar8 = 0;
  }
  else {
    local_54 = 1;
    local_44 = 0;
    local_68 = local_a8;
    local_64 = local_a4;
    local_60 = 1;
    local_5c = 1;
    local_58 = 0x1c;
    local_4c = 1;
    local_48 = 8;
    local_84 = 0;
    local_88 = local_a8 * 4;
    local_a0 = (longlong *)0x0;
    local_90 = uVar5;
    iVar4 = (**(code **)(*DAT_1811079e0 + 0x28))(DAT_1811079e0,&local_68,&local_90,&local_a0);
    if ((iVar4 < 0) || (local_a0 == (longlong *)0x0)) goto LAB_1800dd7b4;
    local_98 = 0;
    iVar4 = (**(code **)(*plVar1 + 0x38))(plVar1,local_a0,0,&local_98);
    if (iVar4 < 0) {
      local_98 = 0;
    }
    (**(code **)(*local_a0 + 0x10))();
    uVar8 = local_98;
  }
  puVar6 = auStack_c8;
  puVar7 = auStack_c8;
  if (uVar5 != 0) {
    uVar10 = lVar9 - uVar5;
    if (0xfff < uVar10) {
      plVar1 = (longlong *)(uVar5 - 8);
      uVar5 = (uVar5 - *plVar1) - 8;
      if (uVar5 < 0x20) {
        thunk_FUN_1803d64e0(*plVar1,uVar10 + 0x27);
        puVar7 = auStack_c8;
        goto LAB_1800dd803;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar6 = auStack_c0;
    }
    *(undefined8 *)(puVar6 + -8) = 0x1800dd7fc;
    thunk_FUN_1803d64e0(uVar5,uVar10);
    puVar7 = puVar6;
  }
LAB_1800dd803:
  *(undefined8 *)(puVar7 + -8) = 0x1800dd80f;
  return uVar8;
}



/* ===== 1800dd840 FUN_1800dd840 ===== */

void FUN_1800dd840(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_res8;
  
  plVar5 = DAT_180cd0f18;
  plVar4 = DAT_180cd0f18;
  for (plVar1 = (longlong *)*DAT_180cd0f18; DAT_180cd0f18 = plVar4, plVar1 != plVar5;
      plVar1 = (longlong *)*plVar1) {
    if ((longlong *)plVar1[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[3] + 0x10))();
    }
    plVar4 = DAT_180cd0f18;
  }
  if (DAT_180cd0f20 != 0) {
    if (DAT_180cd0f20 < DAT_180cd0f48 >> 3) {
      FUN_1800283d0(&DAT_180cd0f10,*plVar4,plVar4);
      return;
    }
    *(undefined8 *)plVar4[1] = 0;
    puVar3 = (undefined8 *)*plVar4;
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar3;
      thunk_FUN_1803d64e0(puVar3,0x30);
      puVar3 = puVar2;
    }
    *DAT_180cd0f18 = (longlong)DAT_180cd0f18;
    DAT_180cd0f18[1] = (longlong)DAT_180cd0f18;
    local_res8 = DAT_180cd0f18;
    DAT_180cd0f20 = 0;
    FUN_180026ac0(DAT_180cd0f28,DAT_180cd0f30,&local_res8);
  }
  return;
}



/* ===== 1800dd940 FUN_1800dd940 ===== */

longlong FUN_1800dd940(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  DWORD DVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (((((param_1 != 0) && (FUN_1800dd490(), DAT_180cd0f58 != 0)) && (DAT_180cd0f60 != 0)) &&
      ((DAT_180cd0f70 != (code *)0x0 && (DAT_180cd0f80 != 0)))) && (DAT_180cd0f88 != 0)) {
    if (0x7f < DAT_180cd0f20) {
      uVar7 = DAT_180cd0f40 &
              ((((((((param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_1 >> 8 & 0xff) *
                    0x100000001b3 ^ param_1 >> 0x10 & 0xff) * 0x100000001b3 ^ param_1 >> 0x18 & 0xff
                  ) * 0x100000001b3 ^ param_1 >> 0x20 & 0xff) * 0x100000001b3 ^
                param_1 >> 0x28 & 0xff) * 0x100000001b3 ^ param_1 >> 0x30 & 0xff) * 0x100000001b3 ^
              param_1 >> 0x38) * 0x100000001b3;
      lVar1 = *(longlong *)(DAT_180cd0f28 + 8 + uVar7 * 0x10);
      if (lVar1 == DAT_180cd0f18) {
LAB_1800dda68:
        FUN_1800dd840();
      }
      else {
        uVar2 = *(ulonglong *)(lVar1 + 0x10);
        while (param_1 != uVar2) {
          if (lVar1 == *(longlong *)(DAT_180cd0f28 + uVar7 * 0x10)) goto LAB_1800dda68;
          lVar1 = *(longlong *)(lVar1 + 8);
          uVar2 = *(ulonglong *)(lVar1 + 0x10);
        }
      }
    }
    plVar5 = (longlong *)FUN_1800ddb20();
    lVar1 = *plVar5;
    DVar3 = GetTickCount();
    lVar6 = DAT_180cd0f58;
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      return *(longlong *)(lVar1 + 0x18);
    }
    if ((*(int *)(lVar1 + 0x24) == 0) || (-1 < (int)(DVar3 - *(int *)(lVar1 + 0x24)))) {
      *(DWORD *)(lVar1 + 0x24) = DVar3 + 1000;
      iVar4 = (*DAT_180cd0f70)(lVar6,param_1);
      if (1 < iVar4 + 1U) {
        lVar6 = FUN_1800dd5f0(iVar4);
        *(longlong *)(lVar1 + 0x18) = lVar6;
        *(int *)(lVar1 + 0x28) = iVar4;
        return lVar6;
      }
      if ((*(char *)(lVar1 + 0x20) == '\0') && (DAT_180cd0f78 != (code *)0x0)) {
        (*DAT_180cd0f78)(DAT_180cd0f58,param_1,0);
        *(undefined1 *)(lVar1 + 0x20) = 1;
      }
    }
  }
  return 0;
}



/* ===== 1800ddb10 thunk_FUN_1800dd840 ===== */

void thunk_FUN_1800dd840(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plStackX_8;
  
  plVar5 = DAT_180cd0f18;
  plVar4 = DAT_180cd0f18;
  for (plVar1 = (longlong *)*DAT_180cd0f18; DAT_180cd0f18 = plVar4, plVar1 != plVar5;
      plVar1 = (longlong *)*plVar1) {
    if ((longlong *)plVar1[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[3] + 0x10))();
    }
    plVar4 = DAT_180cd0f18;
  }
  if (DAT_180cd0f20 != 0) {
    if (DAT_180cd0f20 < DAT_180cd0f48 >> 3) {
      FUN_1800283d0(&DAT_180cd0f10,*plVar4,plVar4);
      return;
    }
    *(undefined8 *)plVar4[1] = 0;
    puVar3 = (undefined8 *)*plVar4;
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar3;
      thunk_FUN_1803d64e0(puVar3,0x30);
      puVar3 = puVar2;
    }
    *DAT_180cd0f18 = (longlong)DAT_180cd0f18;
    DAT_180cd0f18[1] = (longlong)DAT_180cd0f18;
    plStackX_8 = DAT_180cd0f18;
    DAT_180cd0f20 = 0;
    FUN_180026ac0(DAT_180cd0f28,DAT_180cd0f30,&plStackX_8);
  }
  return;
}



/* ===== 1800ddb20 FUN_1800ddb20 ===== */

undefined8 * FUN_1800ddb20(undefined8 param_1,undefined8 *param_2,byte *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar7 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar6 = (undefined8 *)(DAT_180cd0f40 & uVar7);
  puVar3 = *(undefined8 **)(DAT_180cd0f28 + 8 + (longlong)puVar6 * 0x10);
  puVar8 = DAT_180cd0f18;
  if (puVar3 != DAT_180cd0f18) {
    puVar6 = *(undefined8 **)(DAT_180cd0f28 + (longlong)puVar6 * 0x10);
    lVar4 = puVar3[2];
    puVar8 = puVar3;
    while( true ) {
      if (*(longlong *)param_3 == lVar4) {
        *param_2 = puVar8;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar8 == puVar6) break;
      puVar8 = (undefined8 *)puVar8[1];
      lVar4 = puVar8[2];
    }
  }
  if (DAT_180cd0f20 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4cd0("unordered_map/set too long");
  }
  puVar3 = (undefined8 *)FUN_1804ecaa0(0x30,puVar6,DAT_180cd0f28,param_4,&DAT_180cd0f18,0);
  puVar3[2] = *(undefined8 *)param_3;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  uVar2 = DAT_180cd0f48;
  if (DAT_180cd0f10 < (float)(DAT_180cd0f20 + 1) / (float)DAT_180cd0f48) {
    fVar10 = (float)FUN_18053ef70((float)(DAT_180cd0f20 + 1) / DAT_180cd0f10);
    lVar4 = 0;
    if ((DAT_1808acd00 <= fVar10) && (fVar10 = fVar10 - DAT_1808acd00, fVar10 < DAT_1808acd00)) {
      lVar4 = -0x8000000000000000;
    }
    uVar5 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar4)) {
      uVar5 = (longlong)fVar10 + lVar4;
    }
    uVar9 = uVar2;
    if ((uVar2 < uVar5) && ((0x1ff < uVar2 || (uVar9 = uVar2 * 8, uVar2 * 8 < uVar5)))) {
      uVar9 = uVar5;
    }
    FUN_1800dde10(uVar5,uVar9);
    puVar6 = *(undefined8 **)(DAT_180cd0f28 + 8 + (DAT_180cd0f40 & uVar7) * 0x10);
    puVar8 = DAT_180cd0f18;
    if (puVar6 != DAT_180cd0f18) {
      lVar4 = puVar6[2];
      puVar8 = puVar6;
      while (puVar3[2] != lVar4) {
        if (puVar8 == *(undefined8 **)(DAT_180cd0f28 + (DAT_180cd0f40 & uVar7) * 0x10))
        goto LAB_1800ddd89;
        puVar8 = (undefined8 *)puVar8[1];
        lVar4 = puVar8[2];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_1800ddd89:
  puVar6 = (undefined8 *)puVar8[1];
  DAT_180cd0f20 = DAT_180cd0f20 + 1;
  *puVar3 = puVar8;
  puVar3[1] = puVar6;
  *puVar6 = puVar3;
  puVar8[1] = puVar3;
  lVar4 = DAT_180cd0f28;
  uVar7 = DAT_180cd0f40 & uVar7;
  puVar1 = *(undefined8 **)(DAT_180cd0f28 + uVar7 * 0x10);
  if (puVar1 == DAT_180cd0f18) {
    *(undefined8 **)(DAT_180cd0f28 + uVar7 * 0x10) = puVar3;
  }
  else {
    if (puVar1 == puVar8) {
      *(undefined8 **)(DAT_180cd0f28 + uVar7 * 0x10) = puVar3;
      goto LAB_1800ddde8;
    }
    if (*(undefined8 **)(DAT_180cd0f28 + 8 + uVar7 * 0x10) != puVar6) goto LAB_1800ddde8;
  }
  *(undefined8 **)(lVar4 + 8 + uVar7 * 0x10) = puVar3;
LAB_1800ddde8:
  *param_2 = puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



/* ===== 1800dde10 FUN_1800dde10 ===== */

void FUN_1800dde10(undefined8 param_1,ulonglong param_2)

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
  
  plVar8 = DAT_180cd0f18;
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
  FUN_180029d30(&DAT_180cd0f28,2L << (bVar10 & 0x3f),DAT_180cd0f18);
  DAT_180cd0f40 = lVar11 - 1;
  DAT_180cd0f48 = lVar11;
  plVar7 = (longlong *)*DAT_180cd0f18;
  lVar11 = DAT_180cd0f28;
joined_r0x0001800dde8c:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar8) {
          DAT_180cd0f28 = lVar11;
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
                (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3 & DAT_180cd0f40;
        plVar2 = *(longlong **)(lVar11 + uVar9 * 0x10);
        DAT_180cd0f28 = lVar11;
        if (plVar2 != plVar8) break;
        *(longlong **)(lVar11 + uVar9 * 0x10) = plVar7;
        *(longlong **)(lVar11 + 8 + uVar9 * 0x10) = plVar7;
        plVar7 = plVar1;
        lVar11 = DAT_180cd0f28;
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
      lVar11 = DAT_180cd0f28;
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
        lVar11 = DAT_180cd0f28;
        goto joined_r0x0001800dde8c;
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
    lVar11 = DAT_180cd0f28;
  } while( true );
}



/* ===== 1800de010 FUN_1800de010 ===== */

undefined8 FUN_1800de010(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *_Str1;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  iVar1 = DAT_180961948;
  if (DAT_180cd0fe4 != 0) {
    uVar6 = 0;
    uVar8 = (ulonglong)DAT_180961974;
    uVar9 = (ulonglong)DAT_180961970;
    uVar10 = (ulonglong)DAT_18096196c;
    uVar7 = (ulonglong)DAT_180961968;
    do {
      lVar3 = FUN_18000f3a0(DAT_1809619d0);
      if (lVar3 != 0) {
        lVar3 = FUN_18000f3a0((ulonglong)DAT_180961940 +
                              lVar3 + (ulonglong)((uVar6 >> 9) * DAT_180961944));
        if (lVar3 - 0x10000U < 0xfffffffffffeffff) {
          lVar3 = FUN_18000f3a0((ulonglong)((uVar6 & 0x1ff) * iVar1) + lVar3);
          if (lVar3 - 0x10000U < 0xfffffffffffeffff) {
            lVar4 = FUN_18000f3a0(lVar3 + uVar7);
            if (lVar4 != 0) {
              lVar4 = FUN_18000f3a0(lVar4 + uVar10);
              if (lVar4 != 0) {
                lVar4 = FUN_18000f3a0(lVar4 + uVar9);
                if (lVar4 != 0) {
                  _Str1 = (char *)FUN_18000f3a0(lVar4 + uVar8);
                  if (_Str1 + -0x10000 < (char *)0x7ffffffeffff) {
                    iVar2 = strcmp(_Str1,"C_CSGameRulesProxy");
                    if (iVar2 == 0) {
                      uVar5 = FUN_18000f3a0((ulonglong)DAT_180cd0fe4 + lVar3);
                      return uVar5;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x80);
  }
  return 0;
}



/* ===== 1800de160 FUN_1800de160 ===== */

undefined8 * FUN_1800de160(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_res20;
  uint local_38 [2];
  longlong local_30;
  
  uVar8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((DAT_180ca0a0c != 0) && (uVar6 = (ulonglong)DAT_180cd1014, DAT_180cd1014 != 0)) &&
     (lVar5 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + *param_2), lVar5 != 0)) {
    iVar3 = FUN_180011200(uVar6 + lVar5);
    lVar5 = FUN_18000f3a0(uVar6 + lVar5 + 8);
    if (((iVar3 - 1U < 0x40) && (lVar5 != 0)) && (0 < iVar3)) {
      do {
        uVar4 = FUN_180011200(lVar5 + uVar8 * 4);
        FUN_1803a0940(&local_res20,uVar4);
        lVar1 = local_res20;
        if (((local_res20 != 0) && (DAT_1809619a4 != 0)) &&
           ((DAT_1809619a8 != 0 && (DAT_180961998 != 0)))) {
          uVar2 = FUN_180011440((ulonglong)DAT_1809619a4 +
                                (ulonglong)DAT_1809619a8 + local_res20 + (ulonglong)DAT_180961998);
          local_38[0] = (uint)uVar2;
          local_30 = lVar1;
          FUN_1800df7c0(param_1,local_38);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < iVar3);
    }
  }
  return param_1;
}



/* ===== 1800de270 FUN_1800de270 ===== */

undefined8 * FUN_1800de270(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined4 local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  longlong local_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = 1;
  FUN_1800de160(&local_20);
  puVar4 = auStack_48;
  puVar5 = auStack_48;
  puVar2 = local_20;
  if (local_20 != local_18) {
    do {
      puVar3 = (undefined4 *)param_1[1];
      if (puVar3 == (undefined4 *)param_1[2]) {
        FUN_18006a410(param_1,puVar3,puVar2);
      }
      else {
        *puVar3 = *puVar2;
        param_1[1] = param_1[1] + 4;
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != local_18);
  }
  if (local_20 == (undefined4 *)0x0) {
    return param_1;
  }
  puVar2 = local_20;
  if (0xfff < (local_10 - (longlong)local_20 & 0xfffffffffffffff0U)) {
    puVar2 = *(undefined4 **)(local_20 + -2);
    puVar3 = (undefined4 *)((longlong)local_20 + (-8 - (longlong)puVar2));
    if (puVar3 <= &DAT_0000001f) goto LAB_1800de329;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = auStack_40;
    puVar2 = puVar3;
  }
  puVar5 = puVar4;
LAB_1800de329:
  *(undefined8 *)(puVar5 + -8) = 0x1800de32e;
  thunk_FUN_1803d64e0(puVar2);
  return param_1;
}



/* ===== 1800de350 FUN_1800de350 ===== */

uint FUN_1800de350(longlong *param_1,longlong *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined4 local_88;
  uint local_84;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  uint *local_60;
  uint *puStack_58;
  uint *local_50;
  
  uVar18 = DAT_180ca0a0c;
  uVar7 = 1;
  local_88 = 1;
  iVar5 = (int)param_2[1];
  if (iVar5 == 1) {
    if ((*param_1 == 0) || (DAT_180ca0a14 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_180011200(*param_1 + (ulonglong)DAT_180ca0a14);
    }
    uVar7 = (uint)(99 < iVar5);
  }
  else if (iVar5 == 2) {
    if ((((*param_1 == 0) || (DAT_180ca0a14 == 0)) ||
        (iVar5 = FUN_180011200((ulonglong)DAT_180ca0a14 + *param_1), iVar5 < 100)) ||
       (((DAT_180cd1008 == 0 || (uVar14 = (ulonglong)DAT_180cd100c, DAT_180cd100c == 0)) ||
        ((lVar8 = FUN_18000f3a0((ulonglong)DAT_180cd1008 + *param_1), lVar8 == 0 ||
         (cVar3 = FUN_180011220(lVar8 + uVar14), cVar3 == '\0')))))) {
      uVar7 = 0;
    }
  }
  else if (iVar5 == 3) {
    if (((DAT_180cd1008 == 0) || (uVar14 = (ulonglong)DAT_180cd1010, DAT_180cd1010 == 0)) ||
       ((lVar8 = FUN_18000f3a0((ulonglong)DAT_180cd1008 + *param_1), lVar8 == 0 ||
        (cVar3 = FUN_180011220(lVar8 + uVar14), cVar3 == '\0')))) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    local_60 = (uint *)0x0;
    puStack_58 = (uint *)0x0;
    local_50 = (uint *)0x0;
    local_88 = 1;
    puVar16 = auStack_a8;
    if (DAT_180ca0a0c != 0) {
      uVar14 = (ulonglong)DAT_180cd1014;
      puVar16 = auStack_a8;
      if (DAT_180cd1014 != 0) {
        lVar8 = FUN_18000f3a0((ulonglong)DAT_180ca0a0c + *param_1);
        puVar16 = auStack_a8;
        if (lVar8 != 0) {
          iVar5 = FUN_180011200(uVar14 + lVar8);
          local_80 = iVar5;
          local_70 = FUN_18000f3a0(uVar14 + lVar8 + 8);
          puVar15 = auStack_a8;
          puVar16 = auStack_a8;
          if (iVar5 - 1U < 0x40) {
            puVar16 = auStack_a8;
            if (local_70 != 0) {
              uVar14 = 0;
              uVar7 = 0;
              puVar16 = auStack_a8;
              if (0 < iVar5) {
                local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
                uVar18 = local_70._4_4_;
                do {
                  uVar17 = 0xfffffffffffffff;
                  uVar6 = FUN_180011200(local_70 + uVar14 * 4);
                  FUN_1803a0940(&local_78,uVar6);
                  lVar8 = local_78;
                  if (local_78 != 0) {
                    if (DAT_1809619a4 != 0) {
                      if (DAT_1809619a8 != 0) {
                        if (DAT_180961998 != 0) {
                          uVar4 = FUN_180011440((ulonglong)DAT_1809619a4 +
                                                (ulonglong)DAT_1809619a8 + local_78 +
                                                (ulonglong)DAT_180961998);
                          puVar10 = puStack_58;
                          local_84 = (uint)uVar4;
                          if (puStack_58 == local_50) {
                            uVar14 = (longlong)puStack_58 - (longlong)local_60;
                            lVar19 = (longlong)uVar14 >> 4;
                            if (lVar19 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              FUN_18000fb10();
                            }
                            uVar20 = lVar19 + 1;
                            uVar11 = (longlong)local_50 - (longlong)local_60 >> 4;
                            if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
                              uVar11 = (uVar11 >> 1) + uVar11;
                              uVar17 = uVar20;
                              if (uVar20 <= uVar11) {
                                uVar17 = uVar11;
                              }
                              if (0xfffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
                                FUN_18000d840();
                              }
                            }
                            puVar9 = (uint *)FUN_18000fb70(uVar17 * 0x10);
                            uVar14 = uVar14 & 0xfffffffffffffff0;
                            *(uint *)((longlong)puVar9 + uVar14) = local_84;
                            *(uint *)((longlong)puVar9 + uVar14 + 4) = uVar18;
                            *(longlong *)((longlong)puVar9 + uVar14 + 8) = lVar8;
                            if (puVar10 == puStack_58) {
                              lVar8 = (longlong)puStack_58 - (longlong)local_60;
                              puVar12 = puVar9;
                              puVar10 = local_60;
                            }
                            else {
                              FUN_180540530(puVar9,local_60,(longlong)puVar10 - (longlong)local_60);
                              lVar8 = (longlong)puStack_58 - (longlong)puVar10;
                              puVar12 = (uint *)(uVar14 + 0x10 + (longlong)puVar9);
                            }
                            FUN_180540530(puVar12,puVar10,lVar8);
                            if (local_60 != (uint *)0x0) {
                              uVar14 = (longlong)local_50 - (longlong)local_60 & 0xfffffffffffffff0;
                              if (uVar14 < 0x1000) {
                                puVar10 = local_60;
                              }
                              else {
                                if (0x1f < (ulonglong)
                                           ((longlong)local_60 +
                                           (-8 - (longlong)*(uint **)(local_60 + -2)))) {
                                  pcVar1 = (code *)swi(0x29);
                                  (*pcVar1)(5);
                                  puVar15 = auStack_a0;
                                  break;
                                }
                                uVar14 = uVar14 + 0x27;
                                puVar10 = *(uint **)(local_60 + -2);
                              }
                              thunk_FUN_1803d64e0(puVar10,uVar14);
                            }
                            puStack_58 = puVar9 + uVar20 * 4;
                            local_50 = puVar9 + uVar17 * 4;
                            local_60 = puVar9;
                            iVar5 = local_80;
                          }
                          else {
                            *puStack_58 = local_84;
                            puStack_58[1] = uVar18;
                            *(longlong *)(puStack_58 + 2) = lVar8;
                            puStack_58 = puStack_58 + 4;
                          }
                        }
                      }
                    }
                  }
                  uVar7 = uVar7 + 1;
                  uVar14 = (ulonglong)uVar7;
                } while ((int)uVar7 < iVar5);
                puVar16 = puVar15;
                uVar18 = DAT_180ca0a0c;
              }
            }
          }
        }
      }
    }
    puVar10 = puStack_58;
    uVar2 = DAT_180cd101c;
    uVar7 = 0;
    if (local_60 != puStack_58) {
      uVar17 = (ulonglong)DAT_180cd101c;
      uVar14 = (ulonglong)DAT_1809619a0;
      puVar9 = local_60;
      do {
        if ((*puVar9 == *(uint *)(*param_2 + 0x28 + (longlong)param_3 * 4)) ||
           ((uVar13 = *(uint *)(*param_2 + 0x30 + (longlong)param_3 * 4), uVar13 != 0 &&
            (*puVar9 == uVar13)))) {
          if (((*(int *)((longlong)param_2 + 0xc) < 2) ||
              (((DAT_180cd1018 == 0 || (uVar2 == 0)) || ((int)uVar14 == 0)))) || (uVar18 == 0)) {
LAB_1800de6fa:
            uVar13 = 1;
          }
          else {
            lVar8 = *(longlong *)(puVar9 + 2);
            *(undefined8 *)(puVar16 + -8) = 0x1800de689;
            lVar8 = FUN_18000f3a0(DAT_1809619c0 + uVar14 + lVar8);
            if (lVar8 == 0) {
LAB_1800de6eb:
              uVar14 = (ulonglong)DAT_1809619a0;
              goto LAB_1800de6fa;
            }
            *(undefined8 *)(puVar16 + -8) = 0x1800de697;
            cVar3 = FUN_180011220(lVar8 + uVar17);
            if (0x1e < (int)cVar3 - 1U) goto LAB_1800de6eb;
            lVar8 = *param_1;
            *(undefined8 *)(puVar16 + -8) = 0x1800de6b2;
            lVar8 = FUN_18000f3a0((ulonglong)uVar18 + lVar8);
            if (lVar8 == 0) goto LAB_1800de6eb;
            *(undefined8 *)(puVar16 + -8) = 0x1800de6cc;
            uVar4 = FUN_180011440(lVar8 + (ulonglong)DAT_180cd1018 + (longlong)cVar3 * 2);
            uVar13 = 1;
            if (uVar4 - 1 < 4) {
              uVar13 = (uint)uVar4;
            }
            uVar14 = (ulonglong)DAT_1809619a0;
          }
          uVar7 = uVar7 + uVar13;
        }
        puVar9 = puVar9 + 4;
      } while (puVar9 != puVar10);
    }
    if (local_60 != (uint *)0x0) {
      uVar14 = (longlong)local_50 - (longlong)local_60 & 0xfffffffffffffff0;
      puVar10 = local_60;
      if (0xfff < uVar14) {
        lVar8 = *(longlong *)(local_60 + -2);
        if ((ulonglong)((longlong)local_60 + (-8 - lVar8)) < 0x20) {
          *(undefined8 *)(puVar16 + -8) = 0x1800de743;
          thunk_FUN_1803d64e0(lVar8,uVar14 + 0x27);
          return uVar7;
        }
        pcVar1 = (code *)swi(0x29);
        puVar10 = (uint *)(*pcVar1)(5);
        puVar16 = puVar16 + 8;
      }
      *(undefined8 *)(puVar16 + -8) = 0x1800de75a;
      thunk_FUN_1803d64e0(puVar10);
    }
  }
  return uVar7;
}



/* ===== 1800de850 FUN_1800de850 ===== */

bool FUN_1800de850(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float extraout_XMM0_Da;
  
  if (*param_1 == 0) {
    return false;
  }
  if (DAT_180ca09f0 == 0) {
    return false;
  }
  iVar2 = FUN_180011200(*param_1 + (ulonglong)DAT_180ca09f0);
  if (999 < iVar2 - 1U) {
    return false;
  }
  if (DAT_180cd0ffc == 0) {
    return false;
  }
  cVar1 = FUN_180011220((ulonglong)DAT_180cd0ffc + *param_1);
  if (cVar1 == '\0') {
    return false;
  }
  lVar5 = FUN_1800de010();
  if (lVar5 == 0) {
    return false;
  }
  if (param_2 == 2) {
    uVar3 = DAT_180cd0ff4;
  }
  else {
    if (param_2 != 3) goto LAB_1800de8ed;
    uVar3 = DAT_180cd0ff8;
  }
  if ((uVar3 != 0) && (cVar1 = FUN_180011220(lVar5 + (ulonglong)uVar3), cVar1 != '\0')) {
    return false;
  }
LAB_1800de8ed:
  if ((DAT_180cd0fe8 != 0) &&
     (cVar1 = FUN_180011220(lVar5 + (ulonglong)DAT_180cd0fe8), cVar1 != '\0')) {
    return true;
  }
  if ((DAT_180cd0fec != 0) &&
     (cVar1 = FUN_180011220(lVar5 + (ulonglong)DAT_180cd0fec), cVar1 != '\0')) {
    return true;
  }
  if (DAT_180cd0ff0 == 0) {
    return true;
  }
  lVar6 = FUN_180264b70("mp_buytime");
  if ((lVar6 == 0) ||
     (fVar4 = (float)FUN_180264d70(lVar6), ((uint)fVar4 & 0x7f800000) == 0x7f800000)) {
    fVar4 = DAT_1808ac950;
  }
  if ((DAT_180961a50 == 0) || (lVar6 = FUN_18000f3a0(), lVar6 == 0)) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)FUN_18000f3d0(lVar6 + 0x30);
  }
  FUN_18000f3d0((ulonglong)DAT_180cd0ff0 + lVar5);
  return fVar7 - extraout_XMM0_Da < fVar4;
}



/* ===== 1800de9e0 FUN_1800de9e0 ===== */

undefined8 * FUN_1800de9e0(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 local_68;
  undefined **local_60;
  int local_58;
  int iStack_54;
  longlong local_50;
  
  puVar7 = auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_68 = 1;
  if (0xf < *(int *)(param_2 + 4) - 1U) goto LAB_1800deaf8;
  puVar7 = auStack_88;
  if (*(char *)(param_2 + 0x18) != '\0') {
    FUN_1800de270(&local_60,param_3);
    puVar5 = auStack_88;
    puVar6 = auStack_88;
    for (ppuVar4 = local_60; ppuVar4 != (undefined **)CONCAT44(iStack_54,local_58);
        ppuVar4 = (undefined **)((longlong)ppuVar4 + 4)) {
      ppuVar3 = (undefined **)
                thunk_FUN_1804e6e50(&DAT_1805dabe0,&PTR_s_defuse_kit_1805dac40,
                                    *(undefined4 *)ppuVar4);
      if (ppuVar3 != &PTR_s_defuse_kit_1805dac40) {
        bVar2 = true;
        goto LAB_1800dea75;
      }
    }
    bVar2 = false;
LAB_1800dea75:
    puVar7 = auStack_88;
    if (local_60 != (undefined **)0x0) {
      ppuVar4 = local_60;
      if ((ulonglong)((local_50 - (longlong)local_60 >> 2) * 4) < 0x1000) {
LAB_1800deabc:
        puVar6 = puVar5;
      }
      else {
        ppuVar4 = (undefined **)local_60[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_60 + (-8 - (longlong)ppuVar4))) {
          ppuVar4 = (undefined **)&DAT_00000005;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar5 = auStack_80;
          goto LAB_1800deabc;
        }
      }
      *(undefined8 *)(puVar6 + -8) = 0x1800deac7;
      thunk_FUN_1803d64e0(ppuVar4);
      puVar7 = puVar6;
    }
    if (bVar2) goto LAB_1800deaf8;
  }
  local_60 = &PTR_DAT_1805dad40 + (longlong)*(int *)(param_2 + 4) * 8;
  local_58 = 0;
  iStack_54 = 1;
  *(undefined8 *)(puVar7 + -8) = 0x1800deaf8;
  FUN_1800df7c0(param_1,&local_60);
LAB_1800deaf8:
  if (*(int *)(param_2 + 0xc) == 1) {
    local_60 = &PTR_DAT_1805daa20;
    local_58 = 1;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800deb23;
    FUN_1800df7c0(param_1,&local_60);
  }
  if (*(int *)(param_2 + 0xc) == 2) {
    local_60 = &PTR_s_helmet_1805dacc0;
    local_58 = 2;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800deb4e;
    FUN_1800df7c0(param_1,&local_60);
  }
  if (*(int *)(param_2 + 8) - 1U < 4) {
    local_60 = &PTR_DAT_1805daaa0 + (longlong)*(int *)(param_2 + 8) * 8;
    local_58 = 0;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800deb86;
    FUN_1800df7c0(param_1,&local_60);
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    local_60 = &PTR_DAT_1805dac80;
    local_58 = 0;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800debae;
    FUN_1800df7c0(param_1,&local_60);
  }
  if ((*(char *)(param_2 + 0x11) != '\0') || (*(char *)(param_2 + 0x12) != '\0')) {
    local_60 = &PTR_s_flash_1805daa60;
    local_58 = 0;
    iStack_54 = (*(char *)(param_2 + 0x12) != '\0') + 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800debe3;
    FUN_1800df7c0(param_1,&local_60);
  }
  if (*(char *)(param_2 + 0x13) != '\0') {
    local_60 = &PTR_DAT_1805dad00;
    local_58 = 0;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800dec0b;
    FUN_1800df7c0(param_1,&local_60);
  }
  if (*(char *)(param_2 + 0x14) != '\0') {
    local_60 = &PTR_s_molotov_1805da9e0;
    local_58 = 0;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800dec33;
    FUN_1800df7c0(param_1,&local_60);
  }
  if (*(char *)(param_2 + 0x15) != '\0') {
    local_60 = &PTR_DAT_1805da9a0;
    local_58 = 0;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800dec5b;
    FUN_1800df7c0(param_1,&local_60);
  }
  if ((*(char *)(param_2 + 0x16) != '\0') && (param_4 == 3)) {
    local_60 = &PTR_s_defuse_kit_1805dac40;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800dec89;
    local_58 = param_4;
    FUN_1800df7c0(param_1,&local_60);
  }
  if (*(char *)(param_2 + 0x17) != '\0') {
    local_60 = &PTR_DAT_1805da960;
    local_58 = 0;
    iStack_54 = 1;
    *(undefined8 *)(puVar7 + -8) = 0x1800decb1;
    FUN_1800df7c0(param_1,&local_60);
  }
  return param_1;
}



/* ===== 1800decd0 FUN_1800decd0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800decd0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *******pppppppuVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *******local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_180919500 ^ (ulonglong)auStack_88;
  if (DAT_180961ab0 == 0) {
    return;
  }
  lVar2 = FUN_18000f3a0();
  if (lVar2 == 0) {
    return;
  }
  lVar2 = FUN_18000f3a0(lVar2 + 8);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_18000f3a0(lVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar3 = FUN_18000f3a0(lVar3);
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  uVar4 = FUN_180066a20(local_30,"GameInterfaceAPI.ConsoleCommand(\'",param_1);
  puVar5 = (undefined8 *)FUN_1800134a0(uVar4,&DAT_1806e0a84,3);
  local_50 = (undefined8 *******)*puVar5;
  uStack_48 = puVar5[1];
  local_40 = puVar5[2];
  uStack_38 = puVar5[3];
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  FUN_18000f890(local_30);
  if (uStack_38 < 0x10) {
    pppppppuVar8 = &local_50;
  }
  else {
    pppppppuVar8 = local_50;
    if (local_50 == (undefined8 *******)0x0) goto LAB_1800dee38;
  }
  cVar1 = FUN_180200ed0();
  if ((((cVar1 != '\0') && (lVar3 = FUN_180200ff0(), lVar3 != 0)) &&
      (lVar6 = FUN_18000f3a0(lVar3), lVar6 != 0)) &&
     ((pcVar7 = (code *)FUN_18000f3a0(lVar6 + 0x268), DAT_180ceb448 <= pcVar7 &&
      (pcVar7 < DAT_180ceb440)))) {
    local_68 = 1;
    (*pcVar7)(lVar3,lVar2,pppppppuVar8,&DAT_18070230d);
  }
LAB_1800dee38:
  if (0xf < uStack_38) {
    uVar9 = uStack_38 + 1;
    pppppppuVar8 = local_50;
    if (0xfff < uVar9) {
      pppppppuVar8 = (undefined8 *******)local_50[-1];
      if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pppppppuVar8))) {
        pcVar7 = (code *)swi(0x29);
        (*pcVar7)(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = uStack_38 + 0x28;
    }
    thunk_FUN_1803d64e0(pppppppuVar8,uVar9);
  }
  return;
}



/* ===== 1800deea0 FUN_1800deea0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800deea0(longlong *param_1,longlong *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  size_t sVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ULONGLONG local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_98;
  lVar9 = (longlong)param_3;
  local_70 = GetTickCount64();
  if ((0 < DAT_180cd0fc8) && (local_70 - _DAT_180cd0fd0 < 400)) {
    return;
  }
  if (4 < DAT_180cd0fc8) {
    DAT_180cd0fa8 = 0;
    return;
  }
  if (((DAT_180cd1000 == 0) || (uVar7 = (ulonglong)DAT_180cd1004, DAT_180cd1004 == 0)) ||
     (lVar5 = FUN_18000f3a0((ulonglong)DAT_180cd1000 + *param_2), lVar5 == 0)) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_180011200(lVar5 + uVar7);
  }
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  local_68 = 0;
  local_78 = DAT_180cd0fb8;
  plVar8 = DAT_180cd0fb0;
  plVar10 = DAT_180cd0fb8;
  if (DAT_180cd0fb0 != DAT_180cd0fb8) {
    do {
      iVar3 = FUN_1800de350(param_1,plVar8,param_3);
      iVar3 = *(int *)((longlong)plVar8 + 0xc) - iVar3;
      if (0 < iVar3) {
        do {
          if (-1 < iVar2) {
            if ((((int)plVar8[1] == 2) && (*param_1 != 0)) &&
               ((DAT_180ca0a14 != 0 &&
                (iVar4 = FUN_180011200(*param_1 + (ulonglong)DAT_180ca0a14), 99 < iVar4)))) {
              iVar4 = *(int *)(*plVar8 + 0x38 + lVar9 * 4) - *(int *)(&DAT_1805daa58 + lVar9 * 4);
            }
            else {
              iVar4 = *(int *)(*plVar8 + 0x38 + lVar9 * 4);
            }
            if (iVar2 < iVar4) break;
            iVar2 = iVar2 - iVar4;
          }
          if (local_58 != 0) {
            FUN_1800134a0(&local_68,&DAT_1806f1958,2);
          }
          FUN_1800134a0(&local_68,&DAT_1806f195c,4);
          pcVar1 = *(char **)(*plVar8 + 8 + lVar9 * 8);
          sVar6 = strlen(pcVar1);
          FUN_1800134a0(&local_68,pcVar1,sVar6);
          pcVar1 = *(char **)(*plVar8 + 0x18 + lVar9 * 8);
          if (pcVar1 != (char *)0x0) {
            FUN_1800134a0(&local_68,"; buy ",6);
            sVar6 = strlen(pcVar1);
            FUN_1800134a0(&local_68,pcVar1,sVar6);
          }
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        plVar10 = local_78;
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar10);
    if (local_58 != 0) {
      FUN_1800decd0(&local_68);
      DAT_180cd0fc8 = DAT_180cd0fc8 + 1;
      _DAT_180cd0fd0 = local_70;
      goto LAB_1800df0c8;
    }
  }
  DAT_180cd0fa8 = 0;
LAB_1800df0c8:
  FUN_18000f890(&local_68);
  return;
}



/* ===== 1800df100 FUN_1800df100 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800df100(int param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  float fVar13;
  longlong local_res10;
  longlong local_res18 [2];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  char local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  
  if (param_1 != 0xc) {
    return;
  }
  if ((DAT_1809213c4 == '\0') || (DAT_180ca3d66 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  DAT_180ca3d66 = DAT_1809213c4;
  if (DAT_1809213c4 == '\0') {
    local_58[0] = DAT_1809213c4;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_50 = 0;
    uStack_48 = 0;
    DAT_180cd0fa8 = 0;
    FUN_1800df720(&DAT_180cd0fb0,&local_50);
    DAT_180cd0fc8 = local_38;
    _DAT_180cd0fd0 = local_30;
    FUN_1800df6b0(&local_50);
    DAT_180ca3d65 = 0;
    return;
  }
  if ((DAT_180cd0fe0 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd0fe4 = FUN_18038eaf0("C_CSGameRulesProxy","m_pGameRules");
    DAT_180cd0fe8 = FUN_18038eaf0("C_CSGameRules","m_bFreezePeriod");
    DAT_180cd0fec = FUN_18038eaf0("C_CSGameRules","m_bWarmupPeriod");
    DAT_180cd0ff0 = FUN_18038eaf0("C_CSGameRules","m_fRoundStartTime");
    DAT_180cd0ff4 = FUN_18038eaf0("C_CSGameRules","m_bTCantBuy");
    DAT_180cd0ff8 = FUN_18038eaf0("C_CSGameRules","m_bCTCantBuy");
    DAT_180cd0ffc = FUN_18038eaf0("C_CSPlayerPawn","m_bInBuyZone");
    DAT_180cd1000 = FUN_18038eaf0("CCSPlayerController","m_pInGameMoneyServices");
    DAT_180cd1004 = FUN_18038eaf0("CCSPlayerController_InGameMoneyServices","m_iAccount");
    DAT_180cd1008 = FUN_18038eaf0("C_BasePlayerPawn","m_pItemServices");
    DAT_180cd100c = FUN_18038eaf0("CCSPlayer_ItemServices","m_bHasHelmet");
    DAT_180cd1010 = FUN_18038eaf0("CCSPlayer_ItemServices","m_bHasDefuser");
    DAT_180cd1014 = FUN_18038eaf0("CPlayer_WeaponServices","m_hMyWeapons");
    DAT_180cd1018 = FUN_18038eaf0("CPlayer_WeaponServices","m_iAmmo");
    DAT_180cd101c = FUN_18038eaf0("CBasePlayerWeaponVData","m_nPrimaryAmmoType");
    DAT_180cd0fe0 = '\x01';
  }
  cVar3 = FUN_1803a10a0();
  if (cVar3 == '\0') {
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_50 = 0;
    uStack_48 = 0;
    DAT_180cd0fa8 = 0;
    local_58[0] = cVar3;
    FUN_1800df720(&DAT_180cd0fb0,&local_50);
    DAT_180cd0fc8 = local_38;
    _DAT_180cd0fd0 = local_30;
    FUN_1800df6b0(&local_50);
    _DAT_1809ebb1c = -1.0;
    DAT_180ca3d65 = 0;
    return;
  }
  if (DAT_180cd1304 == '\0') {
    FUN_1803a0b60(&local_res10);
    DAT_181108a00 = local_res10;
    local_res10 = FUN_1803a0c50(&local_res10);
    DAT_180cd1304 = '\x01';
  }
  else {
    local_res10 = DAT_1811089f8;
  }
  lVar8 = local_res10;
  local_res18[0] = DAT_181108a00;
  if (local_res10 == 0) {
    DAT_1811089f8 = local_res10;
    return;
  }
  if (DAT_181108a00 == 0) {
    DAT_1811089f8 = local_res10;
    return;
  }
  if (DAT_180ca09f0 == 0) {
    DAT_1811089f8 = local_res10;
    return;
  }
  DAT_1811089f8 = local_res10;
  iVar5 = FUN_180011200(local_res10 + (ulonglong)DAT_180ca09f0);
  if (999 < iVar5 - 1U) {
    return;
  }
  if (DAT_180ca09f4 == 0) {
    return;
  }
  bVar4 = FUN_180011220(lVar8 + (ulonglong)DAT_180ca09f4);
  if (1 < (byte)(bVar4 - 2)) {
    return;
  }
  lVar6 = FUN_1800de010();
  if ((lVar6 == 0) || (DAT_180cd0ff0 == 0)) {
    fVar13 = DAT_1808acda0;
  }
  else {
    fVar13 = (float)FUN_18000f3d0();
  }
  uVar12 = (uint)bVar4;
  if ((bVar2 || (fVar13 != _DAT_1809ebb1c || uVar12 != DAT_180cd0fa0)) || (lVar8 != DAT_180cd0f98))
  {
    DAT_180ca3d65 = '\x01';
  }
  _DAT_1809ebb1c = fVar13;
  DAT_180cd0f98 = lVar8;
  DAT_180cd0fa0 = uVar12;
  cVar3 = FUN_1800de850(&local_res10,uVar12);
  puVar11 = auStack_78;
  if (cVar3 == '\0') {
    local_40 = 0;
    local_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_30 = 0;
    DAT_180cd0fa8 = 0;
    local_58[0] = cVar3;
    FUN_1800df720(&DAT_180cd0fb0,&local_50);
    DAT_180cd0fc8 = local_38;
    _DAT_180cd0fd0 = local_30;
    FUN_1800df6b0(&local_50);
    return;
  }
  if (DAT_180ca3d65 == '\0') goto LAB_1800df668;
  DAT_180ca3d65 = '\0';
  local_58[0] = '\0';
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_30 = 0;
  DAT_180cd0fa8 = 0;
  FUN_1800df720(&DAT_180cd0fb0,&local_50);
  DAT_180cd0fc8 = local_38;
  _DAT_180cd0fd0 = local_30;
  FUN_1800df6b0(&local_50);
  plVar7 = (longlong *)FUN_1800de9e0(local_58,&DAT_1809213c4,&local_res10,uVar12);
  puVar11 = auStack_78;
  puVar9 = auStack_78;
  puVar10 = auStack_78;
  if (plVar7 != &DAT_180cd0fb0) {
    puVar11 = auStack_78;
    if (DAT_180cd0fb0 != 0) {
      lVar8 = DAT_180cd0fb0;
      if ((DAT_180cd0fc0 - DAT_180cd0fb0 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1800df5f7:
        puVar10 = puVar9;
      }
      else {
        lVar8 = *(longlong *)(DAT_180cd0fb0 + -8);
        if (0x1f < (DAT_180cd0fb0 - lVar8) - 8U) {
          lVar8 = 5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar9 = auStack_70;
          goto LAB_1800df5f7;
        }
      }
      *(undefined8 *)(puVar10 + -8) = 0x1800df602;
      thunk_FUN_1803d64e0(lVar8);
      puVar11 = puVar10;
    }
    DAT_180cd0fb0 = *plVar7;
    DAT_180cd0fb8 = plVar7[1];
    DAT_180cd0fc0 = plVar7[2];
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
  }
  *(undefined8 *)(puVar11 + -8) = 0x1800df648;
  FUN_1800df6b0(local_58);
  DAT_180cd0fa8 = DAT_180cd0fb0 != DAT_180cd0fb8;
LAB_1800df668:
  if (DAT_180cd0fa8 != '\0') {
    *(undefined8 *)(puVar11 + -8) = 0x1800df683;
    FUN_1800deea0(&local_res10,local_res18,bVar4 == 3);
  }
  return;
}



/* ===== 1800df6b0 FUN_1800df6b0 ===== */

void FUN_1800df6b0(longlong *param_1)

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
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if (0xfff < (param_1[2] - lVar2 & 0xfffffffffffffff0U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1800df6f6;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_1800df6f6:
  *(undefined8 *)(puVar5 + -8) = 0x1800df6fb;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800df710 thunk_FUN_1800df6b0 ===== */

void thunk_FUN_1800df6b0(longlong *param_1)

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
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if (0xfff < (param_1[2] - lVar2 & 0xfffffffffffffff0U)) {
    lVar3 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar3) - 8U < 0x20) goto LAB_1800df6f6;
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar4 = auStack_20;
  }
  lVar3 = lVar2;
  puVar5 = puVar4;
LAB_1800df6f6:
  *(undefined8 *)(puVar5 + -8) = 0x1800df6fb;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ===== 1800df720 FUN_1800df720 ===== */

longlong * FUN_1800df720(longlong *param_1,longlong *param_2)

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
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_1800df789;
  if ((param_1[2] - lVar2 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1800df776:
    lVar3 = lVar2;
    puVar5 = puVar4;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + -8);
    if (0x1f < (lVar2 - lVar3) - 8U) {
      pcVar1 = (code *)swi(0x29);
      lVar2 = (*pcVar1)(5);
      puVar4 = auStack_20;
      goto LAB_1800df776;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1800df77e;
  thunk_FUN_1803d64e0(lVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1800df789:
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}



/* ===== 1800df7c0 FUN_1800df7c0 ===== */

undefined4 * FUN_1800df7c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 != (undefined8 *)param_1[2]) {
    uVar6 = param_2[1];
    *puVar11 = *param_2;
    puVar11[1] = uVar6;
    puVar7 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 4);
    return puVar7;
  }
  uVar16 = 0xfffffffffffffff;
  uVar17 = (longlong)puVar11 - *param_1;
  lVar14 = (longlong)uVar17 >> 4;
  if (lVar14 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18000fb10();
  }
  uVar15 = lVar14 + 1;
  uVar8 = param_1[2] - *param_1 >> 4;
  if (uVar8 <= 0xfffffffffffffff - (uVar8 >> 1)) {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar16 = uVar15;
    if (uVar15 <= uVar8) {
      uVar16 = uVar8;
    }
    if (0xfffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18000d840();
    }
  }
  puVar7 = (undefined4 *)FUN_18000fb70(uVar16 * 0x10);
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 1);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar18 = (undefined4 *)((uVar17 & 0xfffffffffffffff0) + (longlong)puVar7);
  *puVar18 = *(undefined4 *)param_2;
  puVar18[1] = uVar3;
  puVar18[2] = uVar4;
  puVar18[3] = uVar5;
  puVar1 = (undefined8 *)*param_1;
  if (puVar11 == (undefined8 *)param_1[1]) {
    lVar14 = param_1[1] - (longlong)puVar1;
    puVar9 = puVar7;
    puVar11 = puVar1;
  }
  else {
    FUN_180540530(puVar7,puVar1,(longlong)puVar11 - (longlong)puVar1);
    puVar9 = puVar18 + 4;
    lVar14 = param_1[1] - (longlong)puVar11;
  }
  puVar12 = auStack_38;
  puVar13 = auStack_38;
  FUN_180540530(puVar9,puVar11,lVar14);
  lVar14 = *param_1;
  if (lVar14 == 0) goto LAB_1800df8f6;
  if ((param_1[2] - lVar14 & 0xfffffffffffffff0U) < 0x1000) {
LAB_1800df8ee:
    lVar10 = lVar14;
    puVar13 = puVar12;
  }
  else {
    lVar10 = *(longlong *)(lVar14 + -8);
    if (0x1f < (lVar14 - lVar10) - 8U) {
      pcVar2 = (code *)swi(0x29);
      lVar14 = (*pcVar2)(5);
      puVar12 = auStack_30;
      goto LAB_1800df8ee;
    }
  }
  *(undefined8 *)(puVar13 + -8) = 0x1800df8f6;
  thunk_FUN_1803d64e0(lVar10);
LAB_1800df8f6:
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar15 * 4);
  param_1[2] = (longlong)(puVar7 + uVar16 * 4);
  return puVar18;
}



/* ===== 1800df940 FUN_1800df940 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800df940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ULONGLONG UVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 *local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_258;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180540170(local_228,0,0x200);
  puVar1 = (ulonglong *)FUN_180013640();
  local_238 = 0;
  local_230 = &local_res10;
  FUN_180501904(*puVar1 | 2,local_228,0x200,param_1);
  UVar2 = GetTickCount64();
  FUN_1802b2870("wl_preview.log","[%llu] preview item | %s\n",UVar2,local_228);
  return;
}



/* ===== 1800dfa00 FUN_1800dfa00 ===== */

void FUN_1800dfa00(undefined2 param_1,undefined4 param_2,char param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pcVar1 = DAT_180961ae0;
  lVar2 = (*DAT_180961ad8)();
  if (lVar2 != 0) {
    uVar3 = 4;
    if (param_3 != '\0') {
      uVar3 = 9;
    }
    (*pcVar1)(lVar2,param_1,param_2,uVar3,0);
  }
  return;
}



/* ===== 1800dfa60 FUN_1800dfa60 ===== */

undefined1 FUN_1800dfa60(void)

{
  FUN_1802983f0();
  return 1;
}



/* ===== 1800dfa80 FUN_1800dfa80 ===== */

undefined1 FUN_1800dfa80(void)

{
  FUN_1802980b0();
  return 1;
}



/* ===== 1800dfaa0 FUN_1800dfaa0 ===== */

undefined1 FUN_1800dfaa0(void)

{
  FUN_1802986c0();
  return 1;
}



/* ===== 1800dfac0 FUN_1800dfac0 ===== */

undefined8 FUN_1800dfac0(longlong param_1,int param_2)

{
  if ((DAT_180cd011c != '\0') && (param_1 != 0)) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    FUN_180290960(param_1,"music id",param_2);
  }
  return 1;
}



/* ===== 1800dfb00 FUN_1800dfb00 ===== */

undefined1 FUN_1800dfb00(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    pcVar1 = "sticker slot 0 id";
  }
  else {
    FUN_180290960(param_1,"keychain slot 0 id",*param_3);
    FUN_180290960(param_1,"keychain slot 0 seed",param_3[1]);
    param_2 = param_3[5];
    if (param_2 < 1) {
      return 1;
    }
    pcVar1 = "keychain slot 0 sticker";
  }
  FUN_180290960(param_1,pcVar1,param_2);
  return 1;
}



/* ===== 1800dfb70 FUN_1800dfb70 ===== */

void FUN_1800dfb70(void)

{
  (*DAT_180961ae8)();
  return;
}



/* ===== 1800dfb90 FUN_1800dfb90 ===== */

longlong FUN_1800dfb90(void)

{
  ulonglong uVar1;
  int iVar2;
  HMODULE pHVar3;
  HANDLE pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  uVar5 = DAT_180961ae8;
  if (DAT_180ca3d67 != '\0') {
    return DAT_180cd1060;
  }
  DAT_180ca3d67 = 1;
  pHVar3 = GetModuleHandleA("client.dll");
  if (pHVar3 == (HMODULE)0x0) {
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar4 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    if (iVar2 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
    else {
      uVar6 = uStack_20 & 0xffffffff;
      lVar7 = local_28;
    }
  }
  if (((uVar5 == 0) || (lVar7 == 0)) || (uVar6 == 0)) {
    return 0;
  }
  uVar1 = uVar5 + 0x80;
  do {
    if (uVar1 <= uVar5) {
LAB_1800dfc7e:
      if (DAT_180cd1060 == 0) {
        FUN_1802b2560(
                     "[error] preview items | preview item table not found, cached ids are not checked"
                     );
      }
      return DAT_180cd1060;
    }
    iVar2 = FUN_180011200(uVar5);
    if (iVar2 == -0x3a7376b7) {
      iVar2 = FUN_180011200(uVar5 + 4);
      if ((0 < iVar2) && ((ulonglong)(longlong)iVar2 < uVar6)) {
        DAT_180cd1060 = iVar2 + lVar7;
      }
      goto LAB_1800dfc7e;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



/* ===== 1800dfcd0 FUN_1800dfcd0 ===== */

longlong FUN_1800dfcd0(undefined8 *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_18 [16];
  
  puVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar4 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (param_1[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar5 + uVar4);
      uVar4 = uVar4 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_1[2]);
  }
  lVar2 = FUN_1800e16c0(uVar4,local_18,param_1,uVar7);
  lVar6 = DAT_180cd1028;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar6 = *(longlong *)(lVar2 + 8);
  }
  if (lVar6 != DAT_180cd1028) {
    lVar3 = FUN_1800dfb90();
    lVar2 = *(longlong *)(lVar6 + 0x30);
    if (lVar3 == 0) {
      return lVar2;
    }
    if (lVar2 + 0x8000800080008000U < 1000) {
      lVar2 = FUN_18000f3a0(lVar3 + 0x4000400040000 + lVar2 * 8);
      if (lVar2 == *(longlong *)(lVar6 + 0x38)) {
        return *(longlong *)(lVar6 + 0x30);
      }
    }
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_1800df940("evicted by the game | %s | id %llu",param_1);
    FUN_1800e1070();
    DAT_180cd1068 = DAT_180cd1068 + 1;
  }
  return 0;
}



/* ===== 1800dfde0 FUN_1800dfde0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1800dfde0(void)

{
  int iVar1;
  ULONGLONG UVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar1 = FUN_1804e4d70(&DAT_1809ebc50);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebc9c == 0x7fffffff) {
    DAT_1809ebc9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  UVar2 = GetTickCount64();
  if ((499 < UVar2 - _DAT_180cd1070) &&
     (plVar6 = (longlong *)*DAT_180cd1028, _DAT_180cd1070 = UVar2, plVar6 != DAT_180cd1028)) {
    do {
      lVar3 = FUN_1800dfb90();
      if ((lVar3 == 0) ||
         ((plVar6[6] + 0x8000800080008000U < 1000 &&
          (lVar3 = FUN_18000f3a0(lVar3 + 0x4000400040000 + plVar6[6] * 8), lVar3 == plVar6[7])))) {
        plVar6 = (longlong *)*plVar6;
      }
      else {
        plVar5 = plVar6 + 2;
        if (0xf < (ulonglong)plVar6[5]) {
          plVar5 = (longlong *)*plVar5;
        }
        FUN_1800df940("evicted by the game | %s | id %llu",plVar5,plVar6[6]);
        puVar4 = (undefined8 *)FUN_1800e1070();
        plVar6 = (longlong *)*puVar4;
        DAT_180cd1068 = DAT_180cd1068 + 1;
      }
    } while (plVar6 != DAT_180cd1028);
  }
  lVar3 = DAT_180cd1068;
  FUN_1804e4e90(&DAT_1809ebc50);
  return lVar3;
}



/* ===== 1800dff20 FUN_1800dff20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800dff20(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_4c8 [32];
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  longlong local_480;
  undefined4 local_478;
  undefined4 local_470;
  double local_468;
  double local_460;
  double local_458;
  undefined4 local_450;
  undefined8 *local_440;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_4c8;
  local_440 = param_1;
  if (param_3 == 0) {
    FUN_18003a390();
  }
  else {
    FUN_180540170(local_438,0,0x400);
    local_450 = *(undefined4 *)(param_3 + 0x19c);
    local_480 = param_3 + 0x1c;
    local_470 = *(undefined4 *)(param_3 + 0x18c);
    local_458 = (double)*(float *)(param_3 + 0x198);
    local_460 = (double)*(float *)(param_3 + 0x194);
    local_468 = (double)*(float *)(param_3 + 400);
    local_498 = (double)*(float *)(param_3 + 0xc);
    local_478 = *(undefined4 *)(param_3 + 0x188);
    local_488 = (double)CONCAT44(local_488._4_4_,*(undefined4 *)(param_3 + 0x18));
    local_490 = (double)CONCAT44(local_490._4_4_,(uint)(*(char *)(param_3 + 0x14) != '\0'));
    local_4a0 = (double)CONCAT44(local_4a0._4_4_,*(undefined4 *)(param_3 + 0x10));
    local_4a8 = (double)CONCAT44(local_4a8._4_4_,*(undefined4 *)(param_3 + 8));
    uVar1 = snprintf(local_438,0x400,"%d|%d|%d|%.5f|%d|%d|%s|%d|%d|%.4f|%.4f|%.4f|%d",param_2);
    if (*(char *)(param_3 + 0x5c) != '\0') {
      pfVar4 = (float *)(param_3 + 0x60);
      if (param_3 != param_3 + 0x80) {
        do {
          if (0x3ff < uVar1) break;
          local_498 = (double)pfVar4[3];
          local_4a0 = (double)pfVar4[2];
          local_4a8 = (double)pfVar4[1];
          iVar2 = snprintf(local_438 + (int)uVar1,0x400 - (longlong)(int)uVar1,
                           "|c%.4f,%.4f,%.4f,%.4f",(double)*pfVar4);
          uVar1 = uVar1 + iVar2;
          pfVar4 = pfVar4 + 4;
        } while (pfVar4 != (float *)(param_3 + 0xe0));
      }
    }
    uVar5 = 0;
    do {
      if (0x3ff < uVar1) break;
      lVar6 = uVar5 * 0x1c;
      iVar2 = *(int *)(param_3 + 0xf8 + lVar6);
      if (iVar2 < 0) {
        iVar2 = (int)uVar5;
      }
      local_480 = CONCAT44(local_480._4_4_,iVar2);
      local_488 = (double)*(float *)(param_3 + 0xf4 + lVar6);
      local_490 = (double)*(float *)(param_3 + 0xf0 + lVar6);
      local_498 = (double)*(float *)(param_3 + 0xec + lVar6);
      local_4a0 = (double)*(float *)(param_3 + 0xe8 + lVar6);
      local_4a8 = (double)*(float *)(param_3 + 0xe4 + lVar6);
      iVar2 = snprintf(local_438 + (int)uVar1,0x400 - (longlong)(int)uVar1,
                       "|%d:%.4f:%.4f:%.3f:%.4f:%.4f:%d",*(undefined4 *)(param_3 + 0xe0 + lVar6));
      uVar1 = uVar1 + iVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar3 = strlen(local_438);
    FUN_1800133a0(param_1,local_438,sVar3);
  }
  return param_1;
}



/* ===== 1800e01f0 FUN_1800e01f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800e01f0(undefined8 *param_1,undefined4 *param_2)

{
  size_t sVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 *local_d8;
  undefined8 *local_c0;
  char local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  FUN_180540170(local_b8,0,0xa0);
  local_d8 = &DAT_18058b643;
  if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
    local_d8 = *(undefined1 **)(param_2 + 4);
  }
  local_e0 = param_2[2];
  local_e8 = param_2[1];
  snprintf(local_b8,0xa0,"pet|%d|%d|%d|%s",*param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_b8);
  FUN_1800133a0(param_1,local_b8,sVar1);
  return param_1;
}



/* ===== 1800e02c0 FUN_1800e02c0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1800e02c0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [4];
  undefined8 ****local_38 [2];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_78;
  if ((DAT_180961ad8 == 0) || (DAT_180961ae0 == 0)) {
    lVar3 = 0;
  }
  else {
    FUN_1800e01f0(local_38,param_1);
    ppppuVar5 = local_38;
    if (0xf < local_20) {
      ppppuVar5 = local_38[0];
    }
    uVar4 = 0;
    uVar6 = 0xcbf29ce484222325;
    if (local_28 != 0) {
      do {
        uVar6 = (uVar6 ^ *(byte *)((longlong)ppppuVar5 + uVar4)) * 0x100000001b3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_28);
    }
    lVar2 = FUN_1800268a0(&DAT_180ca0de0,local_58,local_38,uVar6);
    lVar3 = DAT_180ca0de8;
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar3 = *(longlong *)(lVar2 + 8);
    }
    if (lVar3 == DAT_180ca0de8) {
      if (((DAT_180ca0df0 < 900) &&
          (lVar3 = FUN_1800dfa00(0x1249,0,0), local_58[0] = lVar3, lVar3 != 0)) &&
         (cVar1 = FUN_1800dfa80(lVar3,param_1), cVar1 != '\0')) {
        FUN_1800e1170();
      }
      else {
        lVar3 = 0;
      }
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x30);
    }
    FUN_18000f890(local_38);
  }
  return lVar3;
}



/* ===== 1800e0410 FUN_1800e0410 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800e0410(undefined8 *param_1,undefined4 param_2,undefined4 *param_3)

{
  size_t sVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 *local_80;
  char local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_d8;
  local_98 = param_3[4];
  local_a0 = param_3[3];
  local_a8 = param_3[2];
  local_b0 = param_3[1];
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_b8 = *param_3;
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_80 = param_1;
  snprintf(local_78,0x60,"agent|%d|%d|%d|%d|%d|%d",param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = strlen(local_78);
  FUN_1800133a0(param_1,local_78,sVar1);
  return param_1;
}



/* ===== 1800e04f0 FUN_1800e04f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1800e04f0(int param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_88 = &DAT_1809ebc50;
  iVar3 = FUN_1804e4d70(&DAT_1809ebc50);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebc9c == 0x7fffffff) {
    DAT_1809ebc9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((((param_1 < 1) || (DAT_180961ad8 == 0)) || (DAT_180961ae0 == 0)) || (DAT_180961ae8 == 0)) {
    lVar5 = 0;
    goto LAB_1800e0648;
  }
  uVar4 = FUN_18003a390(local_50,param_1);
  FUN_180066ab0(local_70,"music|",uVar4);
  FUN_18000f890(local_50);
  lVar5 = FUN_1800dfcd0(local_70);
  if (lVar5 == 0) {
    lVar5 = FUN_1800dfb90();
    if ((lVar5 != 0) || (DAT_180cd1030 < 900)) {
      lVar6 = FUN_1800dfa00(DAT_1809f3618,0,0);
      if (lVar6 != 0) {
        cVar2 = FUN_1800dfac0(lVar6,param_1);
        if (cVar2 == '\0') {
          FUN_1800df940("dressing the music kit faulted | kit %d",param_1);
        }
        lVar5 = FUN_1800dfb70(lVar6);
        FUN_1800df940("music kit %d | view %p | id %llu",param_1,lVar6,lVar5);
        if (lVar5 != 0) {
          plVar7 = (longlong *)FUN_1800e1460();
          lVar1 = *plVar7;
          *(longlong *)(lVar1 + 0x30) = lVar5;
          *(longlong *)(lVar1 + 0x38) = lVar6;
        }
        goto LAB_1800e063a;
      }
    }
    lVar5 = 0;
  }
LAB_1800e063a:
  FUN_18000f890(local_70);
LAB_1800e0648:
  FUN_1804e4e90(&DAT_1809ebc50);
  return lVar5;
}



/* ===== 1800e0690 FUN_1800e0690 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1800e0690(int param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_180919500 ^ (ulonglong)auStack_a8;
  local_88 = &DAT_1809ebc50;
  iVar3 = FUN_1804e4d70(&DAT_1809ebc50);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebc9c == 0x7fffffff) {
    DAT_1809ebc9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((((param_1 < 1) || (DAT_180961ad8 == 0)) || (DAT_180961ae0 == 0)) || (DAT_180961ae8 == 0)) {
    lVar5 = 0;
    goto LAB_1800e07ea;
  }
  uVar4 = FUN_18003a390(local_50,param_1);
  FUN_180066ab0(local_70,"sticker tool|",uVar4);
  FUN_18000f890(local_50);
  lVar5 = FUN_1800dfcd0(local_70);
  if (lVar5 == 0) {
    lVar5 = FUN_1800dfb90();
    if ((lVar5 != 0) || (DAT_180cd1030 < 900)) {
      lVar6 = FUN_1800dfa00(0x4b9,0,0);
      if (lVar6 != 0) {
        cVar2 = FUN_1800dfb00(lVar6,param_1,0);
        if (cVar2 == '\0') {
          FUN_1800df940("dressing the sticker tool faulted | kit %d",param_1);
        }
        lVar5 = FUN_1800dfb70(lVar6);
        FUN_1800df940("sticker tool %d | view %p | id %llu",param_1,lVar6,lVar5);
        if (lVar5 != 0) {
          plVar7 = (longlong *)FUN_1800e1460();
          lVar1 = *plVar7;
          *(longlong *)(lVar1 + 0x30) = lVar5;
          *(longlong *)(lVar1 + 0x38) = lVar6;
        }
        goto LAB_1800e07dc;
      }
    }
    lVar5 = 0;
  }
LAB_1800e07dc:
  FUN_18000f890(local_70);
LAB_1800e07ea:
  FUN_1804e4e90(&DAT_1809ebc50);
  return lVar5;
}



/* ===== 1800e0830 FUN_1800e0830 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1800e0830(int *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  longlong local_138 [2];
  undefined *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_158;
  local_128 = &DAT_1809ebc50;
  iVar7 = FUN_1804e4d70(&DAT_1809ebc50);
  puVar16 = auStack_158;
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebc9c == 0x7fffffff) {
    DAT_1809ebc9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((((*param_1 < 1) || (DAT_180961ad8 == 0)) || (DAT_180961ae0 == 0)) || (DAT_180961ae8 == 0)) {
    lVar12 = 0;
    goto LAB_1800e0b0a;
  }
  lVar8 = FUN_18003a390(local_40,param_1[5]);
  uVar9 = FUN_18003a390(local_60,param_1[1]);
  uVar10 = FUN_18003a390(local_80,*param_1);
  uVar10 = FUN_180066ab0(local_a0,"charm tool|",uVar10);
  puVar11 = (undefined4 *)FUN_1800134a0(uVar10,&DAT_1806e9100,1);
  local_100 = *puVar11;
  uStack_fc = puVar11[1];
  uStack_f8 = puVar11[2];
  uStack_f4 = puVar11[3];
  local_f0 = puVar11[4];
  uStack_ec = puVar11[5];
  uStack_e8 = puVar11[6];
  uStack_e4 = puVar11[7];
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 0xf;
  *(undefined1 *)puVar11 = 0;
  uVar9 = FUN_180066820(local_c0,&local_100,uVar9);
  puVar11 = (undefined4 *)FUN_1800134a0(uVar9,&DAT_1806e9100,1);
  local_120 = *puVar11;
  uStack_11c = puVar11[1];
  uStack_118 = puVar11[2];
  uStack_114 = puVar11[3];
  local_110 = puVar11[4];
  uStack_10c = puVar11[5];
  uStack_108 = puVar11[6];
  uStack_104 = puVar11[7];
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 0xf;
  *(undefined1 *)puVar11 = 0;
  FUN_180066820(local_e0,&local_120,lVar8);
  uVar5 = CONCAT44(uStack_104,uStack_108);
  if (uVar5 < 0x10) {
LAB_1800e09ce:
    FUN_18000f890(local_c0);
    puVar15 = auStack_158;
    uVar5 = CONCAT44(uStack_e4,uStack_e8);
    if (0xf < uVar5) {
      uVar14 = uVar5 + 1;
      lVar3 = CONCAT44(uStack_fc,local_100);
      lVar12 = lVar3;
      if (0xfff < uVar14) {
        lVar12 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar12) - 8U) goto LAB_1800e0a8c;
        uVar14 = uVar5 + 0x28;
      }
      thunk_FUN_1803d64e0(lVar12,uVar14);
    }
    FUN_18000f890(local_a0);
    FUN_18000f890(local_80);
    FUN_18000f890(local_60);
    FUN_18000f890(local_40);
    lVar12 = FUN_1800dfcd0(local_e0);
    puVar16 = auStack_158;
    if (lVar12 == 0) {
      lVar12 = FUN_1800dfb90();
      if ((lVar12 != 0) || (DAT_180cd1030 < 900)) {
        lVar8 = FUN_1800dfa00(0x54b,0,0);
        puVar16 = auStack_158;
        if (lVar8 != 0) goto LAB_1800e0a93;
      }
      puVar16 = auStack_158;
      lVar12 = 0;
    }
  }
  else {
    uVar14 = uVar5 + 1;
    lVar3 = CONCAT44(uStack_11c,local_120);
    lVar12 = lVar3;
    if (uVar14 < 0x1000) {
LAB_1800e09c8:
      thunk_FUN_1803d64e0(lVar12,uVar14);
      goto LAB_1800e09ce;
    }
    lVar12 = *(longlong *)(lVar3 + -8);
    if ((lVar3 - lVar12) - 8U < 0x20) {
      uVar14 = uVar5 + 0x28;
      goto LAB_1800e09c8;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar15 = auStack_150;
LAB_1800e0a8c:
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar16 = puVar15 + 8;
LAB_1800e0a93:
    *(undefined8 *)(puVar16 + -8) = 0x1800e0aa0;
    cVar6 = FUN_1800dfb00(lVar8,0,param_1);
    if (cVar6 == '\0') {
      iVar7 = *param_1;
      *(undefined8 *)(puVar16 + -8) = 0x1800e0ab2;
      FUN_1800df940("dressing the charm tool faulted | charm %d",iVar7);
    }
    *(undefined8 *)(puVar16 + -8) = 0x1800e0aba;
    lVar12 = FUN_1800dfb70(lVar8);
    *(longlong *)(puVar16 + 0x28) = lVar12;
    *(longlong *)(puVar16 + 0x20) = lVar8;
    iVar7 = param_1[5];
    iVar1 = param_1[1];
    iVar2 = *param_1;
    *(undefined8 *)(puVar16 + -8) = 0x1800e0add;
    uVar17 = FUN_1800df940("charm tool %d | seed %d | sticker %d | view %p | id %llu",iVar2,iVar1,
                           iVar7);
    if (lVar12 != 0) {
      *(undefined8 *)(puVar16 + -8) = 0x1800e0af1;
      plVar13 = (longlong *)FUN_1800e1460(uVar17,puVar16 + 0x38,puVar16 + 0x78);
      lVar3 = *plVar13;
      *(longlong *)(lVar3 + 0x30) = lVar12;
      *(longlong *)(lVar3 + 0x38) = lVar8;
    }
  }
  *(undefined8 *)(puVar16 + -8) = 0x1800e0b06;
  FUN_18000f890(puVar16 + 0x78);
LAB_1800e0b0a:
  *(undefined8 *)(puVar16 + -8) = 0x1800e0b12;
  FUN_1804e4e90(&DAT_1809ebc50);
  *(undefined8 *)(puVar16 + -8) = 0x1800e0b21;
  return lVar12;
}



/* ===== 1800e0b60 FUN_1800e0b60 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001800e0e1f) */

longlong FUN_1800e0b60(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 ****ppppuVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auStack_3e8 [32];
  double local_3c8;
  int local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined *local_3a8;
  undefined1 local_3a0 [16];
  undefined8 local_390;
  float fStack_384;
  undefined8 ****local_1f0 [2];
  ulonglong local_1e0;
  ulonglong local_1d8;
  undefined8 local_1c8;
  float fStack_1bc;
  undefined1 local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_3e8;
  local_3a8 = &DAT_1809ebc50;
  iVar5 = FUN_1804e4d70(&DAT_1809ebc50);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(5);
  }
  if (DAT_1809ebc9c == 0x7fffffff) {
    DAT_1809ebc9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1804e4a90(6);
  }
  if ((((param_1 == 0) || (DAT_180961ad8 == 0)) || (DAT_180961ae0 == 0)) || (DAT_180961ae8 == 0)) {
    FUN_1800df940("functions missing | inventory %p | create %p | register %p");
    lVar6 = 0;
  }
  else {
    if (DAT_180cfca60 != DAT_180cfe674) {
      DAT_180cfe674 = DAT_180cfca60;
      FUN_180298530();
    }
    FUN_1800dff20(local_1f0,param_1,param_2);
    lVar6 = FUN_1800dfcd0(local_1f0);
    if ((lVar6 == 0) && ((lVar7 = FUN_1800dfb90(), lVar7 != 0 || (DAT_180cd1030 < 900)))) {
      lVar6 = 0;
      if ((param_2 == (undefined8 *)0x0) || (*(char *)((longlong)param_2 + 0x14) == '\0')) {
        uVar15 = 0;
        if (param_2 == (undefined8 *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = *(undefined4 *)(param_2 + 1);
        }
      }
      else {
        uVar15 = 1;
        uVar18 = *(undefined4 *)(param_2 + 1);
      }
      lVar7 = FUN_1800dfa00(param_1,uVar18,uVar15);
      if (lVar7 == 0) {
        FUN_1802b2560("[error] preview items | item view not created for %d",param_1);
      }
      else {
        if (param_2 == (undefined8 *)0x0) {
          FUN_180540170(local_e8,0,0xa8);
          lVar6 = FUN_1800dfb70(lVar7);
          fVar19 = 0.0;
          uVar18 = 0;
          uVar10 = 0;
          local_3c0 = 0;
        }
        else {
          lVar6 = 3;
          lVar16 = 3;
          puVar2 = param_2;
          puVar3 = &local_390;
          do {
            puVar11 = puVar3;
            puVar8 = puVar2;
            uVar15 = puVar8[1];
            *puVar11 = *puVar8;
            puVar11[1] = uVar15;
            uVar15 = puVar8[3];
            puVar11[2] = puVar8[2];
            puVar11[3] = uVar15;
            uVar15 = puVar8[5];
            puVar11[4] = puVar8[4];
            puVar11[5] = uVar15;
            uVar15 = puVar8[7];
            puVar11[6] = puVar8[6];
            puVar11[7] = uVar15;
            uVar15 = puVar8[9];
            puVar11[8] = puVar8[8];
            puVar11[9] = uVar15;
            uVar15 = puVar8[0xb];
            puVar11[10] = puVar8[10];
            puVar11[0xb] = uVar15;
            uVar15 = puVar8[0xd];
            puVar11[0xc] = puVar8[0xc];
            puVar11[0xd] = uVar15;
            uVar15 = puVar8[0xf];
            puVar11[0xe] = puVar8[0xe];
            puVar11[0xf] = uVar15;
            lVar16 = lVar16 + -1;
            puVar2 = puVar8 + 0x10;
            puVar3 = puVar11 + 0x10;
          } while (lVar16 != 0);
          uVar15 = puVar8[0x11];
          puVar11[0x10] = puVar8[0x10];
          puVar11[0x11] = uVar15;
          uVar15 = puVar8[0x13];
          puVar11[0x12] = puVar8[0x12];
          puVar11[0x13] = uVar15;
          puVar2 = &local_1c8;
          puVar3 = &local_390;
          do {
            puVar11 = puVar3;
            puVar8 = puVar2;
            uVar15 = puVar11[1];
            *puVar8 = *puVar11;
            puVar8[1] = uVar15;
            uVar15 = puVar11[3];
            puVar8[2] = puVar11[2];
            puVar8[3] = uVar15;
            uVar15 = puVar11[5];
            puVar8[4] = puVar11[4];
            puVar8[5] = uVar15;
            uVar15 = puVar11[7];
            puVar8[6] = puVar11[6];
            puVar8[7] = uVar15;
            uVar15 = puVar11[9];
            puVar8[8] = puVar11[8];
            puVar8[9] = uVar15;
            uVar15 = puVar11[0xb];
            puVar8[10] = puVar11[10];
            puVar8[0xb] = uVar15;
            uVar15 = puVar11[0xd];
            puVar8[0xc] = puVar11[0xc];
            puVar8[0xd] = uVar15;
            uVar15 = puVar11[0xf];
            puVar8[0xe] = puVar11[0xe];
            puVar8[0xf] = uVar15;
            lVar6 = lVar6 + -1;
            puVar2 = puVar8 + 0x10;
            puVar3 = puVar11 + 0x10;
          } while (lVar6 != 0);
          uVar18 = *(undefined4 *)((longlong)puVar11 + 0x84);
          uVar10 = *(undefined4 *)(puVar11 + 0x11);
          uVar1 = *(undefined4 *)((longlong)puVar11 + 0x8c);
          *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(puVar11 + 0x10);
          *(undefined4 *)((longlong)puVar8 + 0x84) = uVar18;
          *(undefined4 *)(puVar8 + 0x11) = uVar10;
          *(undefined4 *)((longlong)puVar8 + 0x8c) = uVar1;
          uVar18 = *(undefined4 *)((longlong)puVar11 + 0x94);
          uVar10 = *(undefined4 *)(puVar11 + 0x13);
          uVar1 = *(undefined4 *)((longlong)puVar11 + 0x9c);
          *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(puVar11 + 0x12);
          *(undefined4 *)((longlong)puVar8 + 0x94) = uVar18;
          *(undefined4 *)(puVar8 + 0x13) = uVar10;
          *(undefined4 *)((longlong)puVar8 + 0x9c) = uVar1;
          if (*(char *)((longlong)param_2 + 0x5c) != '\0') {
            ppppuVar17 = local_1f0;
            if (0xf < local_1d8) {
              ppppuVar17 = local_1f0[0];
            }
            uVar12 = 0xcbf29ce484222325;
            uVar13 = 0;
            if (local_1e0 != 0) {
              do {
                uVar12 = (uVar12 ^ *(byte *)((longlong)ppppuVar17 + uVar13)) * 0x100000001b3;
                uVar13 = uVar13 + 1;
              } while (uVar13 < local_1e0);
            }
            fVar19 = (float)(uVar12 % 0x3e5 + 1) * DAT_1808abf8c;
            fStack_1bc = fStack_384 + fVar19;
            if (DAT_1808ac34c < fStack_1bc) {
              fStack_1bc = fStack_384 - fVar19;
            }
          }
          cVar4 = FUN_1800dfa60(lVar7,&local_1c8);
          if (cVar4 == '\0') {
            FUN_1800df940("dressing the view faulted | def %d | kit %d",param_1,
                          *(undefined4 *)(param_2 + 1));
          }
          lVar6 = FUN_1800dfb70(lVar7);
          piVar14 = (int *)(param_2 + 0x1c);
          local_3c0 = 0;
          if (param_2 != param_2 + 0x15) {
            do {
              local_3c0 = local_3c0 + (uint)(0 < *piVar14);
              piVar14 = piVar14 + 7;
            } while (piVar14 != (int *)(param_2 + 0x31));
          }
          uVar18 = *(undefined4 *)(param_2 + 2);
          uVar10 = *(undefined4 *)(param_2 + 1);
          fVar19 = *(float *)((longlong)param_2 + 0xc);
        }
        local_3c8 = (double)fVar19;
        local_3b8 = lVar7;
        local_3b0 = lVar6;
        uVar18 = FUN_1800df940("def %d | kit %d | seed %d | wear %.4f | stickers %d | view %p | id %llu"
                               ,param_1,uVar10,uVar18);
        if (lVar6 != 0) {
          plVar9 = (longlong *)FUN_1800e1460(uVar18,local_3a0,local_1f0);
          lVar16 = *plVar9;
          *(longlong *)(lVar16 + 0x30) = lVar6;
          *(longlong *)(lVar16 + 0x38) = lVar7;
        }
      }
    }
    FUN_18000f890(local_1f0);
  }
  FUN_1804e4e90(&DAT_1809ebc50);
  return lVar6;
}



/* ===== 1800e0fd0 FUN_1800e0fd0 ===== */

void FUN_1800e0fd0(undefined8 *param_1)

{
  param_1[1] = 0x3f800000;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[8] = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  param_1[0xf] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  return;
}



