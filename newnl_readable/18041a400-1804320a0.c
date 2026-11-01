/* ===== 18041a400 FUN_18041a400 ===== */

void FUN_18041a400(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = param_2[2];
  iVar2 = param_2[1];
  if (iVar2 != iVar3) {
    if (iVar1 < iVar2) {
      param_2[1] = iVar1;
      iVar2 = iVar1;
    }
    if (iVar1 < iVar3) {
      param_2[2] = iVar1;
      iVar3 = iVar1;
    }
    if (iVar2 == iVar3) {
      *param_2 = iVar2;
    }
  }
  if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  if (iVar2 != iVar3) {
    if (iVar2 < iVar3) {
      FUN_18041a320(param_1,param_2,iVar2,iVar3 - iVar2);
      param_2[2] = param_2[1];
      *param_2 = param_2[1];
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    }
    FUN_18041a320(param_1,param_2,iVar3,iVar2 - iVar3);
    param_2[1] = param_2[2];
    *param_2 = param_2[2];
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}



/* ===== 18041a490 FUN_18041a490 ===== */

void FUN_18041a490(longlong param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar20;
  float fVar21;
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_98 [8];
  float local_90 [3];
  int local_84;
  int local_80;
  int local_7c;
  
  local_res18[0] = 1;
LAB_18041a4e0:
  if ((int)param_3 < 0x600001) {
    if (param_3 == 0x600000) {
      iVar6 = param_2[2];
      iVar15 = param_2[1];
      iVar7 = *(int *)(param_1 + 0x18);
      if (iVar15 != iVar6) {
        if (iVar7 < iVar15) {
          param_2[1] = iVar7;
          iVar15 = iVar7;
        }
        if (iVar7 < iVar6) {
          param_2[2] = iVar7;
          iVar6 = iVar7;
        }
        if (iVar15 == iVar6) {
          *param_2 = iVar15;
        }
      }
      iVar16 = *param_2;
      if (iVar7 < iVar16) {
        *param_2 = iVar7;
        iVar16 = iVar7;
      }
      if (iVar15 == iVar6) {
        param_2[2] = iVar16;
        param_2[1] = iVar16;
        iVar6 = iVar16;
      }
      else {
        *param_2 = iVar6;
      }
      if (iVar6 < 1) goto LAB_18041a8fb;
      uVar10 = *(ulonglong *)(param_1 + 0x20);
      uVar11 = (longlong)iVar6 + uVar10;
      goto joined_r0x00018041a8d2;
    }
    switch(param_3) {
    case 0x200000:
      iVar6 = param_2[2];
      iVar7 = param_2[1];
      bVar18 = SBORROW4(iVar7,iVar6);
      iVar15 = iVar7 - iVar6;
      bVar17 = iVar7 == iVar6;
      if (!bVar17) goto LAB_18041a6b3;
      if (*param_2 < 1) goto LAB_18041b0da;
      uVar11 = *(ulonglong *)(param_1 + 0x20);
      uVar10 = uVar11 + (longlong)*param_2;
      goto joined_r0x00018041a5df;
    case 0x200001:
      iVar6 = param_2[2];
      iVar15 = param_2[1];
      if (iVar15 == iVar6) {
        iVar6 = *param_2;
        iVar7 = *(int *)(param_1 + 0x18);
        if (iVar6 < iVar7) {
          iVar7 = FUN_1803d7c80(local_res18,*(longlong *)(param_1 + 0x20) + (longlong)iVar6,
                                *(longlong *)(param_1 + 0x20) + (longlong)iVar7);
          iVar7 = iVar7 + iVar6;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        iVar15 = param_2[1];
        iVar16 = param_2[2];
        *param_2 = iVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (iVar15 == iVar16) goto LAB_18041a63f;
        if (iVar6 < iVar15) {
          param_2[1] = iVar6;
          iVar15 = iVar6;
        }
        if (iVar6 < iVar16) {
          param_2[2] = iVar6;
          iVar16 = iVar6;
        }
        if (iVar15 != iVar16) goto LAB_18041a63f;
        *param_2 = iVar15;
      }
      else {
        if (iVar6 < iVar15) {
          param_2[2] = iVar15;
          param_2[1] = iVar6;
          iVar7 = iVar15;
          iVar15 = iVar6;
        }
        else {
          iVar7 = iVar6;
        }
        iVar6 = *(int *)(param_1 + 0x18);
        if (iVar6 < iVar15) {
          iVar15 = iVar6;
        }
        if (iVar6 < iVar7) {
          param_2[2] = iVar6;
          iVar7 = iVar6;
        }
        if (iVar15 == iVar7) {
          *param_2 = iVar15;
        }
        param_2[1] = iVar7;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        *param_2 = iVar7;
        iVar6 = *(int *)(param_1 + 0x18);
LAB_18041a63f:
        iVar15 = iVar7;
      }
      if (iVar6 < iVar15) {
        *param_2 = iVar6;
      }
      goto LAB_18041b0da;
    case 0x200002:
    case 0x20000e:
      goto switchD_18041a513_caseD_200002;
    case 0x200003:
    case 0x20000f:
      goto switchD_18041a513_caseD_200003;
    case 0x200004:
      iVar6 = param_2[2];
      iVar15 = param_2[1];
      iVar7 = *(int *)(param_1 + 0x18);
      if (iVar15 != iVar6) {
        if (iVar7 < iVar15) {
          param_2[1] = iVar7;
          iVar15 = iVar7;
        }
        if (iVar7 < iVar6) {
          param_2[2] = iVar7;
          iVar6 = iVar7;
        }
        if (iVar15 == iVar6) {
          *param_2 = iVar15;
        }
      }
      iVar16 = *param_2;
      if (iVar7 < iVar16) {
        *param_2 = iVar7;
        iVar16 = iVar7;
      }
      if (iVar15 == iVar6) {
        iVar7 = FUN_1804199f0(param_1,param_2,iVar16);
      }
      else if (iVar6 < iVar15) {
        param_2[1] = iVar6;
        *param_2 = iVar6;
        param_2[2] = iVar6;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        iVar7 = FUN_1804199f0(param_1,param_2);
      }
      else {
        *param_2 = iVar15;
        param_2[2] = iVar15;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        iVar7 = FUN_1804199f0(param_1,param_2,iVar15);
      }
      break;
    case 0x200005:
      iVar6 = param_2[2];
      iVar15 = param_2[1];
      iVar7 = *(int *)(param_1 + 0x18);
      if (iVar15 != iVar6) {
        if (iVar7 < iVar15) {
          param_2[1] = iVar7;
          iVar15 = iVar7;
        }
        if (iVar7 < iVar6) {
          param_2[2] = iVar7;
          iVar6 = iVar7;
        }
        if (iVar15 == iVar6) {
          *param_2 = iVar15;
        }
      }
      iVar16 = *param_2;
      if (iVar7 < iVar16) {
        *param_2 = iVar7;
        iVar16 = iVar7;
      }
      if (iVar15 != iVar6) {
        if (iVar6 < iVar15) {
          param_2[2] = iVar15;
          param_2[1] = iVar6;
          iVar6 = iVar15;
        }
        iVar15 = *(int *)(param_1 + 0x18);
        if (iVar15 < iVar6) {
          param_2[2] = iVar15;
          iVar6 = iVar15;
        }
        *param_2 = iVar6;
        param_2[1] = iVar6;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        iVar16 = iVar6;
      }
      iVar7 = FUN_180419b50(param_1,param_2,iVar16);
      break;
    case 0x200006:
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200007:
      *param_2 = *(int *)(param_1 + 0x18);
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200008:
      goto switchD_18041a513_caseD_200008;
    case 0x200009:
      goto switchD_18041a513_caseD_200009;
    case 0x20000a:
      FUN_18041b410(param_1,param_2);
      goto LAB_18041b0da;
    case 0x20000b:
      FUN_18041b670(param_1,param_2);
      goto LAB_18041b0da;
    case 0x20000c:
      iVar6 = param_2[2];
      iVar7 = param_2[1];
      bVar18 = SBORROW4(iVar7,iVar6);
      iVar15 = iVar7 - iVar6;
      bVar17 = false;
      if (iVar7 == iVar6) {
        iVar6 = FUN_180419700(param_1,*param_2);
LAB_18041a6ce:
        iVar15 = param_2[2];
        iVar7 = param_2[1];
        *param_2 = iVar6;
        iVar16 = *(int *)(param_1 + 0x18);
        if (iVar7 != iVar15) {
          if (iVar16 < iVar7) {
            param_2[1] = iVar16;
            iVar7 = iVar16;
          }
          if (iVar16 < iVar15) goto LAB_18041a6ed;
          goto LAB_18041a6f3;
        }
        goto LAB_18041a6fc;
      }
LAB_18041a6b3:
      if (!(bVar17 || bVar18 != iVar15 < 0)) {
        param_2[1] = iVar6;
        iVar7 = iVar6;
      }
      goto LAB_18041b0d5;
    case 0x20000d:
      iVar6 = param_2[2];
      iVar15 = param_2[1];
      if (iVar15 == iVar6) {
        iVar6 = FUN_180419940(param_1,*param_2);
        goto LAB_18041a6ce;
      }
      if (iVar6 < iVar15) {
        param_2[2] = iVar15;
        param_2[1] = iVar6;
        iVar7 = iVar15;
        iVar15 = iVar6;
      }
      else {
        iVar7 = iVar6;
      }
      iVar6 = *(int *)(param_1 + 0x18);
      if (iVar6 < iVar15) {
        iVar15 = iVar6;
      }
      if (iVar6 < iVar7) {
        param_2[2] = iVar6;
        iVar7 = iVar6;
      }
      if (iVar15 == iVar7) {
        *param_2 = iVar15;
      }
      param_2[1] = iVar7;
      break;
    default:
      goto switchD_18041a513_default;
    }
  }
  else {
    switch(param_3) {
    case 0x600001:
      if (param_2[1] == param_2[2]) {
        param_2[2] = *param_2;
        param_2[1] = *param_2;
        piVar13 = param_2;
      }
      else {
        *param_2 = param_2[2];
        piVar13 = param_2 + 2;
      }
      iVar6 = *piVar13;
      iVar15 = *(int *)(param_1 + 0x18);
      if (iVar6 < iVar15) {
        iVar15 = FUN_1803d7c80(local_res18,*(longlong *)(param_1 + 0x20) + (longlong)iVar6,
                               *(longlong *)(param_1 + 0x20) + (longlong)iVar15);
        iVar15 = iVar15 + iVar6;
      }
      else {
        iVar15 = iVar15 + 1;
      }
      param_2[2] = iVar15;
      if (param_2[1] != iVar15) {
        iVar6 = *(int *)(param_1 + 0x18);
        if (iVar6 < param_2[1]) {
          param_2[1] = iVar6;
        }
        if (iVar6 < iVar15) {
          param_2[2] = iVar6;
          *param_2 = iVar6;
          goto LAB_18041b0da;
        }
      }
      *param_2 = iVar15;
      goto LAB_18041b0da;
    case 0x600002:
    case 0x60000e:
switchD_18041a513_caseD_200002:
      if ((param_3 & 0xffbfffff) == 0x20000e) {
        local_res18[0] = param_2[4];
      }
      else if (*(char *)((longlong)param_2 + 0x17) != '\0') {
        param_3 = param_3 & 0x400000 | 0x200000;
        goto LAB_18041a4e0;
      }
      iVar7 = local_res18[0];
      iVar6 = param_2[2];
      piVar13 = param_2 + 2;
      iVar15 = param_2[1];
      if ((param_3 & 0x400000) == 0) {
        if (iVar15 == iVar6) {
          iVar15 = *param_2;
        }
        else if (iVar6 < iVar15) {
          param_2[1] = iVar6;
          *param_2 = iVar6;
          *piVar13 = iVar6;
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
          iVar15 = iVar6;
        }
        else {
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
          *param_2 = iVar15;
          *piVar13 = iVar15;
        }
        iVar6 = *(int *)(param_1 + 0x18);
      }
      else {
        if (iVar15 == iVar6) {
          *piVar13 = *param_2;
          param_2[1] = *param_2;
          piVar5 = param_2;
          piVar13 = param_2;
        }
        else {
          *param_2 = iVar6;
          piVar5 = param_2 + 1;
        }
        iVar16 = *piVar13;
        iVar14 = *piVar5;
        iVar15 = *piVar13;
        iVar6 = *(int *)(param_1 + 0x18);
        if (iVar14 != iVar16) {
          if (iVar6 < iVar14) {
            param_2[1] = iVar6;
            iVar14 = iVar6;
          }
          if (iVar6 < iVar16) {
            param_2[2] = iVar6;
            iVar16 = iVar6;
          }
          if (iVar14 == iVar16) {
            *param_2 = iVar14;
            iVar15 = iVar14;
            goto LAB_18041ab71;
          }
        }
      }
      if (iVar6 < iVar15) {
        *param_2 = iVar6;
        iVar15 = iVar6;
      }
LAB_18041ab71:
      FUN_18041a0e0(local_90,param_1,iVar15,*(undefined1 *)((longlong)param_2 + 0x17));
      fVar4 = local_90[0];
      fVar3 = DAT_1808acda0;
      local_res20[0] = 0;
      if (iVar7 < 1) {
        return;
      }
      iVar6 = local_7c;
      iVar15 = local_84;
      do {
        iVar16 = iVar6;
        iVar7 = local_res20[0];
        if (*(char *)((longlong)param_2 + 0x16) == '\0') {
          fVar21 = fVar4;
        }
        else {
          fVar21 = (float)param_2[7];
        }
        if (iVar16 == iVar15) {
          return;
        }
        *param_2 = iVar16;
        FUN_180419510(local_90,param_1,iVar16);
        iVar6 = local_7c;
        iVar14 = 0;
        fVar20 = local_90[0];
        if (0 < local_7c) {
          do {
            fVar19 = (float)FUN_180419480(param_1,iVar16,iVar14);
            iVar7 = *(int *)(param_1 + 0x18);
            iVar8 = *param_2;
            if (iVar8 < iVar7) {
              iVar7 = FUN_1803d7c80(local_98,*(longlong *)(param_1 + 0x20) + (longlong)iVar8,
                                    *(longlong *)(param_1 + 0x20) + (longlong)iVar7);
              iVar7 = iVar7 + iVar8;
              fVar19 = extraout_XMM0_Da_00;
            }
            else {
              iVar7 = iVar7 + 1;
            }
            if ((fVar19 == fVar3) || (fVar21 < fVar20 + fVar19)) break;
            iVar14 = iVar14 + (iVar7 - *param_2);
            *param_2 = iVar7;
            fVar20 = fVar20 + fVar19;
          } while (iVar14 < iVar6);
          iVar7 = local_res20[0];
        }
        iVar6 = param_2[2];
        iVar14 = param_2[1];
        iVar8 = *(int *)(param_1 + 0x18);
        if (iVar14 != iVar6) {
          if (iVar8 < iVar14) {
            param_2[1] = iVar8;
            iVar14 = iVar8;
          }
          if (iVar8 < iVar6) {
            param_2[2] = iVar8;
            iVar6 = iVar8;
          }
          if (iVar14 == iVar6) {
            *param_2 = iVar14;
          }
        }
        iVar6 = *param_2;
        if (iVar8 < iVar6) {
          *param_2 = iVar8;
          iVar6 = iVar8;
        }
        if (iVar6 == iVar15) {
          *(undefined1 *)(param_1 + 0x77) = 1;
        }
        else if (iVar6 == iVar16) {
          *(undefined1 *)(param_1 + 0x77) = 0;
        }
        param_2[7] = (int)fVar21;
        *(undefined1 *)((longlong)param_2 + 0x16) = 1;
        if ((param_3 & 0x400000) != 0) {
          param_2[2] = *param_2;
        }
        if (iVar16 < 1) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulonglong)(iVar16 - 1U);
          if (0 < (int)(iVar16 - 1U)) {
            do {
              uVar11 = *(ulonglong *)(param_1 + 0x20);
              uVar12 = uVar10 + uVar11;
              do {
                if (uVar12 <= uVar11) {
                  uVar12 = uVar11;
                  break;
                }
                pbVar1 = (byte *)(uVar12 - 1);
                uVar12 = uVar12 - 1;
              } while ((*pbVar1 & 0xc0) == 0x80);
              uVar9 = (int)uVar12 - (int)uVar11;
            } while ((*(char *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar9) != '\n') &&
                    (uVar10 = (ulonglong)uVar9, 0 < (int)uVar9));
          }
        }
        iVar6 = FUN_1804199f0(param_1,param_2,uVar10);
        local_res20[0] = iVar7 + 1;
        iVar15 = iVar16;
        if (local_res18[0] <= local_res20[0]) {
          return;
        }
      } while( true );
    case 0x600003:
    case 0x60000f:
switchD_18041a513_caseD_200003:
      if ((param_3 & 0xffbfffff) == 0x20000f) {
        local_res18[0] = param_2[4];
      }
      else if (*(char *)((longlong)param_2 + 0x17) != '\0') goto code_r0x00018041a559;
      iVar7 = local_res18[0];
      iVar6 = param_2[2];
      piVar13 = param_2 + 2;
      iVar15 = param_2[1];
      if ((param_3 & 0x400000) == 0) {
        if (iVar15 == iVar6) {
          iVar16 = *param_2;
        }
        else {
          if (iVar6 < iVar15) {
            *piVar13 = iVar15;
            param_2[1] = iVar6;
            iVar16 = iVar15;
            iVar15 = iVar6;
          }
          else {
            iVar16 = iVar6;
          }
          iVar6 = *(int *)(param_1 + 0x18);
          if (iVar6 < iVar15) {
            iVar15 = iVar6;
          }
          if (iVar6 < iVar16) {
            param_2[2] = iVar6;
            iVar16 = iVar6;
          }
          if (iVar15 == iVar16) {
            *param_2 = iVar15;
          }
          *param_2 = iVar16;
          param_2[1] = iVar16;
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        }
        iVar6 = *(int *)(param_1 + 0x18);
      }
      else {
        if (iVar15 == iVar6) {
          *piVar13 = *param_2;
          param_2[1] = *param_2;
          piVar5 = param_2;
          piVar13 = param_2;
        }
        else {
          *param_2 = iVar6;
          piVar5 = param_2 + 1;
        }
        iVar16 = *piVar13;
        iVar15 = *piVar13;
        iVar14 = *piVar5;
        iVar6 = *(int *)(param_1 + 0x18);
        if (iVar14 != iVar15) {
          if (iVar6 < iVar14) {
            param_2[1] = iVar6;
            iVar14 = iVar6;
          }
          if (iVar6 < iVar15) {
            param_2[2] = iVar6;
            iVar15 = iVar6;
          }
          if (iVar14 == iVar15) {
            *param_2 = iVar14;
            iVar16 = iVar14;
            goto LAB_18041a96e;
          }
        }
      }
      if (iVar6 < iVar16) {
        *param_2 = iVar6;
        iVar16 = iVar6;
      }
LAB_18041a96e:
      FUN_18041a0e0(local_90,param_1,iVar16,*(undefined1 *)((longlong)param_2 + 0x17));
      fVar4 = local_90[0];
      fVar3 = DAT_1808acda0;
      iVar6 = 0;
      if (iVar7 < 1) {
        return;
      }
      iVar15 = local_80;
      iVar16 = local_84;
      do {
        if (*(char *)((longlong)param_2 + 0x16) == '\0') {
          fVar21 = fVar4;
        }
        else {
          fVar21 = (float)param_2[7];
        }
        if (iVar15 == 0) {
          return;
        }
        iVar16 = iVar16 + iVar15;
        *param_2 = iVar16;
        FUN_180419510(local_90,param_1,iVar16);
        iVar15 = local_7c;
        iVar14 = 0;
        fVar20 = local_90[0];
        if (0 < local_7c) {
          do {
            fVar19 = (float)FUN_180419480(param_1,iVar16,iVar14);
            iVar7 = *(int *)(param_1 + 0x18);
            iVar8 = *param_2;
            if (iVar8 < iVar7) {
              iVar7 = FUN_1803d7c80(local_res20,*(longlong *)(param_1 + 0x20) + (longlong)iVar8,
                                    *(longlong *)(param_1 + 0x20) + (longlong)iVar7);
              iVar7 = iVar7 + iVar8;
              fVar19 = extraout_XMM0_Da;
            }
            else {
              iVar7 = iVar7 + 1;
            }
            if ((fVar19 == fVar3) || (fVar21 < fVar20 + fVar19)) break;
            iVar14 = iVar14 + (iVar7 - *param_2);
            *param_2 = iVar7;
            fVar20 = fVar20 + fVar19;
          } while (iVar14 < iVar15);
          iVar7 = local_res18[0];
        }
        iVar14 = param_2[2];
        iVar8 = param_2[1];
        iVar2 = *(int *)(param_1 + 0x18);
        if (iVar8 != iVar14) {
          if (iVar2 < iVar8) {
            param_2[1] = iVar2;
            iVar8 = iVar2;
          }
          if (iVar2 < iVar14) {
            param_2[2] = iVar2;
            iVar14 = iVar2;
          }
          if (iVar8 == iVar14) {
            *param_2 = iVar8;
          }
        }
        iVar14 = *param_2;
        if (iVar2 < iVar14) {
          *param_2 = iVar2;
          iVar14 = iVar2;
        }
        if (iVar14 == iVar16) {
          *(undefined1 *)(param_1 + 0x77) = 0;
        }
        param_2[7] = (int)fVar21;
        *(undefined1 *)((longlong)param_2 + 0x16) = 1;
        if ((param_3 & 0x400000) != 0) {
          param_2[2] = *param_2;
        }
        iVar6 = iVar6 + 1;
        if (iVar7 <= iVar6) {
          return;
        }
      } while( true );
    case 0x600004:
      iVar6 = param_2[2];
      iVar15 = param_2[1];
      iVar7 = *(int *)(param_1 + 0x18);
      if (iVar15 != iVar6) {
        if (iVar7 < iVar15) {
          param_2[1] = iVar7;
          iVar15 = iVar7;
        }
        if (iVar7 < iVar6) {
          param_2[2] = iVar7;
          iVar6 = iVar7;
        }
        if (iVar15 == iVar6) {
          *param_2 = iVar15;
        }
      }
      iVar16 = *param_2;
      if (iVar7 < iVar16) {
        *param_2 = iVar7;
        iVar16 = iVar7;
      }
      if (iVar15 == iVar6) {
        param_2[2] = iVar16;
        param_2[1] = iVar16;
        iVar7 = FUN_1804199f0(param_1,param_2);
      }
      else {
        *param_2 = iVar6;
        iVar7 = FUN_1804199f0(param_1,param_2,iVar6);
      }
      break;
    case 0x600005:
      iVar6 = param_2[2];
      iVar15 = param_2[1];
      iVar7 = *(int *)(param_1 + 0x18);
      if (iVar15 != iVar6) {
        if (iVar7 < iVar15) {
          param_2[1] = iVar7;
          iVar15 = iVar7;
        }
        if (iVar7 < iVar6) {
          param_2[2] = iVar7;
          iVar6 = iVar7;
        }
        if (iVar15 == iVar6) {
          *param_2 = iVar15;
        }
      }
      iVar16 = *param_2;
      if (iVar7 < iVar16) {
        *param_2 = iVar7;
        iVar16 = iVar7;
      }
      if (iVar15 == iVar6) {
        param_2[2] = iVar16;
        param_2[1] = iVar16;
        iVar6 = iVar16;
      }
      else {
        *param_2 = iVar6;
      }
      iVar7 = FUN_180419b50(param_1,param_2,iVar6);
      break;
    case 0x600006:
      if (param_2[1] == param_2[2]) {
        param_2[1] = *param_2;
      }
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x600007:
      if (param_2[1] == param_2[2]) {
        param_2[2] = *param_2;
        param_2[1] = *param_2;
        iVar7 = *(int *)(param_1 + 0x18);
      }
      else {
        *param_2 = param_2[2];
        iVar7 = *(int *)(param_1 + 0x18);
      }
      break;
    case 0x600008:
switchD_18041a513_caseD_200008:
      iVar7 = param_2[2];
      iVar6 = param_2[1];
      iVar15 = *(int *)(param_1 + 0x18);
      if (iVar6 != iVar7) {
        if (iVar15 < iVar6) {
          param_2[1] = iVar15;
          iVar6 = iVar15;
        }
        if (iVar15 < iVar7) {
          param_2[2] = iVar15;
          iVar7 = iVar15;
        }
        if (iVar6 == iVar7) {
          *param_2 = iVar6;
        }
        if (iVar15 < *param_2) {
          *param_2 = iVar15;
        }
        goto LAB_18041af20;
      }
      iVar6 = *param_2;
      if (iVar6 < iVar15) {
        iVar15 = FUN_1803d7c80(local_res18,*(longlong *)(param_1 + 0x20) + (longlong)iVar6,
                               *(longlong *)(param_1 + 0x20) + (longlong)iVar15);
        FUN_18041a320(param_1,param_2,*param_2,(iVar15 + iVar6) - *param_2);
      }
      goto LAB_18041b0da;
    case 0x600009:
switchD_18041a513_caseD_200009:
      iVar7 = param_2[2];
      iVar6 = param_2[1];
      iVar15 = *(int *)(param_1 + 0x18);
      if (iVar6 == iVar7) {
        iVar6 = *param_2;
        if (iVar15 < iVar6) {
          *param_2 = iVar15;
          iVar6 = iVar15;
        }
        if (iVar6 < 1) goto LAB_18041b0da;
        uVar10 = *(ulonglong *)(param_1 + 0x20);
        uVar11 = (longlong)iVar6 + uVar10;
        if (uVar11 <= uVar10) goto LAB_18041afb5;
        goto LAB_18041afa0;
      }
      if (iVar15 < iVar6) {
        param_2[1] = iVar15;
        iVar6 = iVar15;
      }
      if (iVar15 < iVar7) {
        param_2[2] = iVar15;
        iVar7 = iVar15;
      }
      if (iVar6 == iVar7) {
        *param_2 = iVar6;
      }
      if (iVar15 < *param_2) {
        *param_2 = iVar15;
      }
LAB_18041af20:
      if (iVar6 != iVar7) {
        if (iVar6 < iVar7) {
          FUN_18041a320(param_1,param_2,iVar6,iVar7 - iVar6);
          param_2[2] = param_2[1];
          iVar7 = param_2[1];
        }
        else {
          FUN_18041a320(param_1,param_2,iVar7,iVar6 - iVar7);
          param_2[1] = param_2[2];
          iVar7 = param_2[2];
        }
        goto LAB_18041b0d8;
      }
      goto LAB_18041b0da;
    default:
      goto switchD_18041a513_default;
    case 0x60000c:
      if (param_2[1] == param_2[2]) {
        param_2[2] = *param_2;
        param_2[1] = *param_2;
      }
      iVar6 = FUN_180419700(param_1,*param_2);
      iVar7 = param_2[1];
      *param_2 = iVar6;
      param_2[2] = iVar6;
      iVar16 = *(int *)(param_1 + 0x18);
      if (iVar7 == iVar6) goto LAB_18041a6fc;
      if (iVar16 < iVar7) {
        param_2[1] = iVar16;
        iVar7 = iVar16;
      }
      if (iVar16 < iVar6) {
        param_2[2] = iVar16;
        iVar15 = iVar16;
      }
      else {
        iVar15 = iVar6;
      }
      if (iVar7 != iVar15) goto LAB_18041a6fc;
      *param_2 = iVar7;
      goto LAB_18041a6fe;
    case 0x60000d:
      if (param_2[1] == param_2[2]) {
        param_2[2] = *param_2;
        param_2[1] = *param_2;
      }
      iVar15 = FUN_180419940(param_1,*param_2);
      iVar7 = param_2[1];
      *param_2 = iVar15;
      param_2[2] = iVar15;
      iVar16 = *(int *)(param_1 + 0x18);
      iVar6 = iVar15;
      if (iVar7 != iVar15) {
        if (iVar16 < iVar7) {
          param_2[1] = iVar16;
          iVar7 = iVar16;
        }
        if (iVar16 < iVar15) {
LAB_18041a6ed:
          iVar15 = iVar16;
          param_2[2] = iVar15;
          iVar16 = iVar15;
        }
LAB_18041a6f3:
        if (iVar7 == iVar15) {
          *param_2 = iVar7;
          goto LAB_18041a6fe;
        }
      }
LAB_18041a6fc:
      iVar7 = iVar6;
LAB_18041a6fe:
      if (iVar16 < iVar7) {
        *param_2 = iVar16;
      }
      goto switchD_18041a513_default;
    }
LAB_18041b0d5:
    param_2[2] = iVar7;
  }
LAB_18041b0d8:
  *param_2 = iVar7;
  goto LAB_18041b0da;
  while( true ) {
    pbVar1 = (byte *)(uVar11 - 1);
    uVar11 = uVar11 - 1;
    if ((*pbVar1 & 0xc0) != 0x80) break;
joined_r0x00018041a8d2:
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
      break;
    }
  }
  iVar6 = (int)uVar11 - *(int *)(param_1 + 0x20);
  param_2[2] = iVar6;
LAB_18041a8fb:
  *param_2 = iVar6;
  goto LAB_18041b0da;
  while( true ) {
    pbVar1 = (byte *)(uVar10 - 1);
    uVar10 = uVar10 - 1;
    if ((*pbVar1 & 0xc0) != 0x80) break;
joined_r0x00018041a5df:
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
      break;
    }
  }
  *param_2 = (int)uVar10 - *(int *)(param_1 + 0x20);
  goto LAB_18041b0da;
code_r0x00018041a559:
  param_3 = param_3 & 0x400000 | 0x200001;
  goto LAB_18041a4e0;
  while (uVar10 < uVar11) {
LAB_18041afa0:
    pbVar1 = (byte *)(uVar11 - 1);
    uVar11 = uVar11 - 1;
    if ((*pbVar1 & 0xc0) != 0x80) {
      iVar6 = *param_2;
      goto LAB_18041afb8;
    }
  }
  iVar6 = *param_2;
LAB_18041afb5:
  uVar11 = uVar10;
LAB_18041afb8:
  iVar15 = (int)uVar11 - *(int *)(param_1 + 0x20);
  FUN_18041a320(param_1,param_2,iVar15,iVar6 - iVar15);
  *param_2 = iVar15;
LAB_18041b0da:
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
switchD_18041a513_default:
  return;
}



/* ===== 18041b1b0 FUN_18041b1b0 ===== */

void FUN_18041b1b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  sVar3 = *(short *)(param_1 + 0xa18);
  if (sVar3 < 1) {
    return;
  }
  if (-1 < *(int *)(param_1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) - iVar1;
    FUN_180540530(param_1 + 0x630,param_1 + 0x630 + (longlong)iVar1,
                  (longlong)*(int *)(param_1 + 0xa1c));
    sVar3 = *(short *)(param_1 + 0xa18);
    iVar4 = 0;
    if (0 < sVar3) {
      do {
        iVar2 = *(int *)(param_1 + 0xc + (longlong)iVar4 * 0x10);
        if (-1 < iVar2) {
          *(int *)(param_1 + 0xc + (longlong)iVar4 * 0x10) = iVar2 - iVar1;
        }
        sVar3 = *(short *)(param_1 + 0xa18);
        iVar4 = iVar4 + 1;
      } while (iVar4 < sVar3);
    }
  }
  *(short *)(param_1 + 0xa18) = sVar3 + -1;
  FUN_180540530(param_1,param_1 + 0x10,(longlong)(short)(sVar3 + -1) << 4);
  return;
}



/* ===== 18041b260 FUN_18041b260 ===== */

longlong FUN_18041b260(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  
  *(undefined2 *)(param_1 + 0xa1a) = 99;
  *(undefined4 *)(param_1 + 0xa20) = 999;
  if (*(short *)(param_1 + 0xa18) == 99) {
    FUN_18041b1b0();
  }
  if (999 < param_3) {
    *(undefined2 *)(param_1 + 0xa18) = 0;
    *(undefined4 *)(param_1 + 0xa1c) = 0;
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0xa1c);
  if (999 < iVar4 + param_3) {
    do {
      sVar3 = *(short *)(param_1 + 0xa18);
      if (0 < sVar3) {
        if (-1 < *(int *)(param_1 + 0xc)) {
          iVar1 = *(int *)(param_1 + 4);
          *(int *)(param_1 + 0xa1c) = iVar4 - iVar1;
          FUN_180540530(param_1 + 0x630,param_1 + 0x630 + (longlong)iVar1,(longlong)(iVar4 - iVar1))
          ;
          sVar3 = *(short *)(param_1 + 0xa18);
          iVar4 = 0;
          if (0 < sVar3) {
            do {
              iVar2 = *(int *)(param_1 + 0xc + (longlong)iVar4 * 0x10);
              if (-1 < iVar2) {
                *(int *)(param_1 + 0xc + (longlong)iVar4 * 0x10) = iVar2 - iVar1;
              }
              sVar3 = *(short *)(param_1 + 0xa18);
              iVar4 = iVar4 + 1;
            } while (iVar4 < sVar3);
          }
        }
        *(short *)(param_1 + 0xa18) = sVar3 + -1;
        FUN_180540530(param_1,param_1 + 0x10,(longlong)(short)(sVar3 + -1) << 4);
      }
      iVar4 = *(int *)(param_1 + 0xa1c);
    } while (999 < iVar4 + param_3);
  }
  sVar3 = *(short *)(param_1 + 0xa18);
  *(short *)(param_1 + 0xa18) = sVar3 + 1;
  puVar5 = (undefined4 *)((longlong)sVar3 * 0x10 + param_1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = param_2;
    puVar5[1] = param_3;
    puVar5[2] = param_4;
    if (param_3 != 0) {
      puVar5[3] = *(undefined4 *)(param_1 + 0xa1c);
      *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) + param_3;
      return (longlong)(int)puVar5[3] + 0x630 + param_1;
    }
    puVar5[3] = 0xffffffff;
  }
  return 0;
}



/* ===== 18041b410 FUN_18041b410 ===== */

void FUN_18041b410(longlong param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  if ((short)param_2[0x28e] != 0) {
    lVar9 = (longlong)*(short *)((longlong)param_2 + 0xa3a);
    lVar7 = (longlong)(short)param_2[0x28e] + -1;
    iVar6 = param_2[lVar7 * 4 + 10];
    iVar2 = param_2[lVar7 * 4 + 8];
    iVar3 = param_2[lVar7 * 4 + 9];
    iVar4 = param_2[lVar7 * 4 + 0xb];
    param_2[lVar9 * 4 + 7] = -1;
    param_2[lVar9 * 4 + 5] = iVar6;
    param_2[lVar9 * 4 + 6] = iVar3;
    param_2[lVar9 * 4 + 4] = iVar2;
    if (iVar6 != 0) {
      if (param_2[0x28f] + iVar6 < 999) {
        iVar8 = param_2[0x290];
        if (iVar8 < param_2[0x28f] + iVar6) {
          do {
            if (*(short *)((longlong)param_2 + 0xa3a) == 99) {
              return;
            }
            if (*(short *)((longlong)param_2 + 0xa3a) < 99) {
              if (-1 < param_2[0x193]) {
                iVar10 = param_2[0x191];
                iVar8 = iVar8 + iVar10;
                param_2[0x290] = iVar8;
                FUN_180540530((longlong)param_2 + (longlong)iVar8 + 0x650,
                              (longlong)param_2 + ((longlong)iVar8 - (longlong)iVar10) + 0x650,
                              (longlong)(999 - iVar8));
                for (iVar8 = (int)*(short *)((longlong)param_2 + 0xa3a); iVar8 < 0x62;
                    iVar8 = iVar8 + 1) {
                  if (-1 < param_2[(longlong)iVar8 * 4 + 0xb]) {
                    param_2[(longlong)iVar8 * 4 + 0xb] = param_2[(longlong)iVar8 * 4 + 0xb] + iVar10
                    ;
                  }
                }
              }
              sVar1 = *(short *)((longlong)param_2 + 0xa3a);
              FUN_180540530(param_2 + (longlong)sVar1 * 4 + 0xc,param_2 + (longlong)sVar1 * 4 + 8,
                            (longlong)(0x62 - sVar1) << 4);
              *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + 1;
            }
            iVar8 = param_2[0x290];
          } while (iVar8 < param_2[0x28f] + iVar6);
        }
        sVar1 = *(short *)((longlong)param_2 + 0xa3a);
        iVar10 = 0;
        param_2[(longlong)sVar1 * 4 + 7] = iVar8 - iVar6;
        param_2[0x290] = param_2[0x290] - iVar6;
        if (0 < iVar6) {
          do {
            iVar8 = iVar10 + iVar2;
            iVar5 = param_2[(longlong)sVar1 * 4 + 7] + iVar10;
            iVar10 = iVar10 + 1;
            *(undefined1 *)((longlong)param_2 + (longlong)iVar5 + 0x650) =
                 *(undefined1 *)((longlong)iVar8 + *(longlong *)(param_1 + 0x20));
          } while (iVar10 < iVar6);
        }
      }
      else {
        param_2[lVar9 * 4 + 5] = 0;
      }
      lVar7 = (longlong)iVar2 + *(longlong *)(param_1 + 0x30);
      FUN_180540530(lVar7,lVar7 + iVar6,(longlong)(((*(int *)(param_1 + 0x18) - iVar2) - iVar6) + 1)
                   );
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar6;
      *(undefined2 *)(param_1 + 0x73) = 0x101;
    }
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = FUN_180419c70(param_1,iVar2,(longlong)param_2 + (longlong)iVar4 + 0x650,iVar3);
      param_2[0x28f] = param_2[0x28f] - iVar6;
    }
    *param_2 = iVar2 + iVar6;
    *(short *)(param_2 + 0x28e) = (short)param_2[0x28e] + -1;
    *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + -1;
  }
  return;
}



/* ===== 18041b670 FUN_18041b670 ===== */

void FUN_18041b670(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  lVar7 = (longlong)*(short *)((longlong)param_2 + 0xa3a);
  if (*(short *)((longlong)param_2 + 0xa3a) != 99) {
    lVar8 = (longlong)(short)param_2[0x28e];
    iVar6 = param_2[lVar7 * 4 + 10];
    iVar1 = param_2[lVar7 * 4 + 9];
    iVar2 = param_2[lVar7 * 4 + 0xb];
    iVar3 = param_2[lVar7 * 4 + 8];
    param_2[lVar8 * 4 + 9] = iVar6;
    param_2[lVar8 * 4 + 8] = iVar3;
    param_2[lVar8 * 4 + 0xb] = -1;
    param_2[lVar8 * 4 + 10] = iVar1;
    if (iVar6 != 0) {
      iVar9 = 0;
      if (param_2[0x290] < iVar6 + param_2[0x28f]) {
        param_2[lVar8 * 4 + 9] = 0;
        param_2[lVar8 * 4 + 10] = 0;
      }
      else {
        param_2[lVar8 * 4 + 0xb] = param_2[0x28f];
        param_2[0x28f] = param_2[0x28f] + iVar6;
        if (0 < param_2[lVar8 * 4 + 9]) {
          do {
            iVar4 = param_2[lVar8 * 4 + 8] + iVar9;
            iVar5 = param_2[lVar8 * 4 + 0xb] + iVar9;
            iVar9 = iVar9 + 1;
            *(undefined1 *)((longlong)param_2 + (longlong)iVar5 + 0x650) =
                 *(undefined1 *)((longlong)iVar4 + *(longlong *)(param_1 + 0x20));
          } while (iVar9 < param_2[lVar8 * 4 + 9]);
        }
      }
      lVar7 = (longlong)iVar3 + *(longlong *)(param_1 + 0x30);
      FUN_180540530(lVar7,lVar7 + iVar6,(longlong)(((*(int *)(param_1 + 0x18) - iVar3) - iVar6) + 1)
                   );
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar6;
      *(undefined2 *)(param_1 + 0x73) = 0x101;
    }
    iVar6 = 0;
    if (iVar1 != 0) {
      iVar6 = FUN_180419c70(param_1,iVar3,(longlong)param_2 + (longlong)iVar2 + 0x650,iVar1);
      param_2[0x290] = param_2[0x290] + iVar6;
    }
    *param_2 = iVar3 + iVar6;
    *(short *)(param_2 + 0x28e) = (short)param_2[0x28e] + 1;
    *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + 1;
  }
  return;
}



/* ===== 18041b7d0 FUN_18041b7d0 ===== */

void FUN_18041b7d0(longlong param_1,longlong param_2,int param_3,uint param_4,undefined4 param_5)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = FUN_18041b260(param_2 + 0x20,param_3,param_4,param_5);
  if ((uVar3 != 0) && (0 < (int)param_4)) {
    iVar4 = 0;
    if (0xf < param_4) {
      uVar6 = (longlong)(int)param_4 + -1 + uVar3;
      uVar1 = *(longlong *)(param_1 + 0x20) + (longlong)param_3;
      if ((((ulonglong)((longlong)(int)(param_3 + -1 + param_4) + *(longlong *)(param_1 + 0x20)) <
            uVar3) || (uVar6 < uVar1)) && ((param_1 + 0x20U < uVar3 || (uVar6 < param_1 + 0x20U))))
      {
        FUN_180540530(uVar3,uVar1,(longlong)(int)param_4);
        return;
      }
    }
    do {
      iVar2 = iVar4 + param_3;
      lVar5 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(uVar3 + lVar5) =
           *(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    } while (iVar4 < (int)param_4);
  }
  return;
}



/* ===== 18041b8a0 FUN_18041b8a0 ===== */

void FUN_18041b8a0(longlong param_1,int *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  FUN_18041b7d0(param_1,param_2,0,*(undefined4 *)(param_1 + 0x18),param_4);
  iVar1 = *(int *)(param_1 + 0x18);
  **(undefined1 **)(param_1 + 0x30) = (*(undefined1 **)(param_1 + 0x30))[iVar1];
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar1;
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  if (0 < param_4) {
    iVar1 = FUN_180419c70(param_1,0,param_3,param_4);
    if (0 < iVar1) {
      param_2[2] = param_4;
      param_2[1] = param_4;
      *param_2 = param_4;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
    }
  }
  return;
}



/* ===== 18041b920 FUN_18041b920 ===== */

void FUN_18041b920(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = DAT_180ca0a50;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
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
  FUN_1803f5870(param_1 + 0x48);
  FUN_1803f5870(param_1 + 0x38);
  FUN_1803f5870(param_1 + 0x28);
  return;
}



/* ===== 18041b9d0 FUN_18041b9d0 ===== */

void FUN_18041b9d0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  FUN_18041a490(param_1,*(undefined8 *)(param_1 + 8),param_2);
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0xbe99999a;
  uVar1 = (param_2 & 0xffbfffff) - 0x200000;
  if ((uVar1 < 0xd) && ((0x1251U >> (uVar1 & 0x1f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x77) = 0;
    return;
  }
  uVar1 = (param_2 & 0xffbfffff) - 0x200001;
  if ((uVar1 < 0xd) && ((0x10d1U >> (uVar1 & 0x1f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x77) = 1;
  }
  return;
}



/* ===== 18041ba50 FUN_18041ba50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041ba50(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  char local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_180919500 ^ (ulonglong)auStack_48;
  iVar2 = FUN_1803d7e10(local_28,param_2,param_2 & 0xffffffff);
  local_28[iVar2] = '\0';
  sVar3 = strlen(local_28);
  piVar1 = *(int **)(param_1 + 8);
  if ((local_28[0] == '\n') && (*(char *)((longlong)piVar1 + 0x17) != '\0')) goto LAB_18041bb5c;
  if (((char)piVar1[3] == '\0') || (piVar1[1] != piVar1[2])) {
LAB_18041bb1d:
    FUN_18041a400(param_1,piVar1);
    iVar2 = FUN_180419c70(param_1,*piVar1,local_28,sVar3 & 0xffffffff);
    if (iVar2 == 0) goto LAB_18041bb5c;
    FUN_18041b260(piVar1 + 8,*piVar1,0,iVar2);
    *piVar1 = *piVar1 + iVar2;
  }
  else {
    iVar2 = *piVar1;
    if (*(int *)(param_1 + 0x18) <= iVar2) goto LAB_18041bb1d;
    puVar4 = (undefined1 *)FUN_18041b260(piVar1 + 8,iVar2,1);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = *(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    }
    lVar5 = (longlong)*piVar1 + *(longlong *)(param_1 + 0x30);
    FUN_180540530(lVar5,lVar5 + 1,(longlong)(*(int *)(param_1 + 0x18) - *piVar1));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(undefined2 *)(param_1 + 0x73) = 0x101;
    iVar2 = FUN_180419c70(param_1,*piVar1,local_28,sVar3 & 0xffffffff);
    if (iVar2 == 0) goto LAB_18041bb5c;
    *piVar1 = *piVar1 + iVar2;
  }
  *(undefined1 *)((longlong)piVar1 + 0x16) = 0;
LAB_18041bb5c:
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0xbe99999a;
  return;
}



/* ===== 18041bb80 FUN_18041bb80 ===== */

void FUN_18041bb80(void)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = DAT_180ca0a50;
  lVar7 = FUN_1804098c0(*(undefined8 *)(DAT_180ca0a50 + 0x11f8),0x2a);
  lVar3 = *(longlong *)(lVar6 + 0x11f8);
  *(undefined4 *)(lVar6 + 0x2628) = *(undefined4 *)(*(longlong *)(lVar6 + 0x11f0) + 0x10);
  *(undefined4 *)(lVar6 + 0x2600) = *(undefined4 *)(lVar3 + 0x40);
  *(undefined4 *)(lVar6 + 0x25d0) = *(undefined4 *)(lVar3 + 0x10);
  uVar2 = *(undefined4 *)(lVar3 + 0x20);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar6 + 0x25e0);
  *(undefined4 *)(lVar6 + 0x25e0) = uVar2;
  uVar2 = *(undefined4 *)(lVar3 + 0x24);
  *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar6 + 0x25e4);
  *(undefined4 *)(lVar6 + 0x25e4) = uVar2;
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar6 + 0x25e8);
  *(undefined8 *)(lVar6 + 0x25e8) = uVar4;
  puVar5 = *(undefined4 **)(lVar6 + 0x11f8);
  uVar2 = *puVar5;
  *puVar5 = *(undefined4 *)(lVar6 + 0x25c0);
  *(undefined4 *)(lVar6 + 0x25c0) = uVar2;
  uVar2 = puVar5[1];
  puVar5[1] = *(undefined4 *)(lVar6 + 0x25c4);
  *(undefined4 *)(lVar6 + 0x25c4) = uVar2;
  uVar4 = *(undefined8 *)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(lVar6 + 0x25c8);
  *(undefined8 *)(lVar6 + 0x25c8) = uVar4;
  puVar1 = (uint *)(*(longlong *)(lVar6 + 0x11f0) + 0x10);
  *puVar1 = *puVar1 | 4;
  *(int *)(*(longlong *)(lVar6 + 0x11f8) + 0x40) =
       (int)((lVar7 - *(longlong *)(*(longlong *)(lVar6 + 0x11f8) + 0x38)) / 0x2c);
  *(undefined4 *)(*(longlong *)(lVar6 + 0x11f8) + 0x10) = *(undefined4 *)(lVar7 + 4);
  return;
}



/* ===== 18041bca0 FUN_18041bca0 ===== */

void FUN_18041bca0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar5 = DAT_180ca0a50;
  *(undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x11f0) + 0x10) =
       *(undefined4 *)(DAT_180ca0a50 + 0x2628);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x11f8) + 0x40) = *(undefined4 *)(lVar5 + 0x2600);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x11f8) + 0x10) = *(undefined4 *)(lVar5 + 0x25d0);
  lVar2 = *(longlong *)(lVar5 + 0x11f8);
  uVar1 = *(undefined4 *)(lVar5 + 0x25e0);
  *(undefined4 *)(lVar5 + 0x25e0) = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(lVar5 + 0x25e4);
  *(undefined4 *)(lVar5 + 0x25e4) = *(undefined4 *)(lVar2 + 0x24);
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  uVar3 = *(undefined8 *)(lVar5 + 0x25e8);
  *(undefined8 *)(lVar5 + 0x25e8) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  puVar4 = *(undefined4 **)(lVar5 + 0x11f8);
  uVar1 = *(undefined4 *)(lVar5 + 0x25c0);
  *(undefined4 *)(lVar5 + 0x25c0) = *puVar4;
  *puVar4 = uVar1;
  uVar1 = *(undefined4 *)(lVar5 + 0x25c4);
  *(undefined4 *)(lVar5 + 0x25c4) = puVar4[1];
  puVar4[1] = uVar1;
  uVar3 = *(undefined8 *)(lVar5 + 0x25c8);
  *(undefined8 *)(lVar5 + 0x25c8) = *(undefined8 *)(puVar4 + 2);
  *(undefined8 *)(puVar4 + 2) = uVar3;
  return;
}



/* ===== 18041bd70 FUN_18041bd70 ===== */

bool FUN_18041bd70(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  ushort local_38;
  undefined1 local_36;
  undefined8 local_35;
  undefined8 local_2d;
  undefined5 local_25;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined3 uStack_14;
  undefined1 local_11;
  
  local_4c = *(uint *)(param_2 + 0x10);
  bVar2 = true;
  uVar5 = *param_3;
  uVar6 = (ulonglong)uVar5;
  if (0x1f < uVar5) goto LAB_18041bdf8;
  uVar8 = local_4c & 0x4000000;
  if ((uVar5 == 10) && (uVar8 != 0)) {
    bVar2 = true;
LAB_18041bdb4:
    if ((param_6 == '\0') || (uVar8 != 0)) {
      if ((uVar5 != 10) || (uVar8 == 0)) goto LAB_18041bddd;
      goto LAB_18041bdeb;
    }
    uVar6 = 0x20;
    bVar2 = true;
    *param_3 = 0x20;
    bVar3 = false;
  }
  else {
    bVar2 = false;
    if (uVar5 == 10) goto LAB_18041bdb4;
LAB_18041bddd:
    bVar3 = false;
    if ((uVar5 == 9) && ((local_4c & 0x20) != 0)) {
LAB_18041bdeb:
      bVar3 = true;
    }
  }
  if (!bVar3 && !bVar2) {
    return false;
  }
  bVar2 = false;
LAB_18041bdf8:
  uVar5 = (uint)uVar6;
  if (param_6 == '\0') {
    if (uVar5 == 0x7f) {
      return false;
    }
    if (uVar5 - 0xe000 < 0x1900) {
      return false;
    }
  }
  if (0xffff < uVar5) {
    return false;
  }
  if ((bVar2) && ((local_4c & 0x1000001f) != 0)) {
    uVar8 = (uint)*(ushort *)(param_1 + 0xc48);
    if (((local_4c & 0x10000005) != 0) && ((uVar5 - 0x2c & 0xfffffffd) == 0)) {
      uVar6 = (ulonglong)uVar8;
    }
    uVar7 = uVar6;
    if (((local_4c & 7) != 0) &&
       (uVar7 = (ulonglong)((int)uVar6 - 0xfee0), 0x5d < (int)uVar6 - 0xff01U)) {
      uVar7 = uVar6;
    }
    uVar5 = (uint)uVar7;
    if ((((local_4c & 1) != 0) && (9 < uVar5 - 0x30)) && (uVar5 != uVar8)) {
      if (0x2f < uVar5) {
        return false;
      }
      if ((0xac0000000000U >> (uVar7 & 0x3f) & 1) == 0) {
        return false;
      }
    }
    if ((((local_4c & 4) != 0) && (9 < uVar5 - 0x30)) && (uVar5 != uVar8)) {
      if (0x3b < uVar5 - 0x2a) {
        return false;
      }
      if ((0x80000000800002bU >> ((ulonglong)(uVar5 - 0x2a) & 0x3f) & 1) == 0) {
        return false;
      }
    }
    if ((local_4c & 2) != 0) {
      if (0x36 < uVar5 - 0x30) {
        return false;
      }
      if ((0x7e0000007e03ffU >> ((ulonglong)(uVar5 - 0x30) & 0x3f) & 1) == 0) {
        return false;
      }
    }
    uVar6 = uVar7;
    if (((local_4c & 8) != 0) && (uVar6 = (ulonglong)(uVar5 - 0x20), 0x19 < uVar5 - 0x61)) {
      uVar6 = uVar7;
    }
    uVar5 = (uint)uVar6;
    if ((local_4c & 0x10) != 0) {
      if (uVar5 == 0x20) {
        return false;
      }
      if (uVar5 == 9) {
        return false;
      }
      if (uVar5 == 0x3000) {
        return false;
      }
    }
    *param_3 = uVar5;
  }
  if ((local_4c >> 0x15 & 1) == 0) {
    return true;
  }
  local_40 = *(int *)(param_2 + 0x14);
  local_48 = 0;
  local_3c = 0;
  local_35 = 0;
  local_2d = 0;
  local_25 = 0;
  uStack_14 = 0;
  local_11 = 0;
  local_58 = DAT_180ca0a50;
  local_50 = 0x200000;
  local_38 = (ushort)uVar6;
  if ((*(int *)(DAT_180ca0a50 + 0x1578) != local_40) ||
     (local_36 = 1, *(char *)(DAT_180ca0a50 + 0x1584) == '\0')) {
    local_36 = 0;
  }
  puVar1 = *(undefined4 **)(param_2 + 8);
  uStack_20 = *puVar1;
  uStack_1c = puVar1[1];
  uStack_18 = puVar1[2];
  iVar4 = (*(code *)0x0)(&local_58);
  if (iVar4 == 0) {
    *param_3 = (uint)local_38;
    return local_38 != 0;
  }
  return false;
}



/* ===== 18041c030 FUN_18041c030 ===== */

void FUN_18041c030(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_5;
  if (param_3 < param_5) {
    iVar5 = param_3;
  }
  uVar2 = 0;
  if (0 < iVar5) {
    do {
      if (*(char *)(param_2 + uVar2) != *(char *)(param_4 + uVar2)) break;
      uVar4 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar4;
    } while ((int)uVar4 < iVar5);
  }
  iVar5 = (int)uVar2;
  if ((iVar5 != param_3) || (iVar5 != param_5)) {
    while( true ) {
      param_3 = param_3 + -1;
      param_5 = param_5 + -1;
      if (param_3 < iVar5) break;
      if ((param_5 < iVar5) || (*(char *)(param_2 + param_3) != *(char *)(param_4 + param_5)))
      break;
    }
    uVar4 = (param_3 - iVar5) + 1;
    if (((0 < (param_5 - iVar5) + 1) || (0 < (int)uVar4)) &&
       ((uVar2 = FUN_18041b260(*(longlong *)(param_1 + 8) + 0x20,uVar2), uVar2 != 0 &&
        (0 < (int)uVar4)))) {
      iVar6 = 0;
      if ((uVar4 < 0x10) ||
         ((uVar2 <= (ulonglong)(param_3 + param_2) &&
          ((ulonglong)(iVar5 + param_2) <= (longlong)(param_3 - iVar5) + uVar2)))) {
        do {
          iVar1 = iVar6 + iVar5;
          lVar3 = (longlong)iVar6;
          iVar6 = iVar6 + 1;
          *(undefined1 *)(uVar2 + lVar3) = *(undefined1 *)(param_2 + iVar1);
        } while (iVar6 < (int)uVar4);
      }
      else {
        FUN_180540530(uVar2,iVar5 + param_2,(longlong)(int)uVar4);
      }
    }
  }
  return;
}



/* ===== 18041c160 FUN_18041c160 ===== */

void FUN_18041c160(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = DAT_180ca0a50;
  if ((((param_1 != 0) && (piVar1 = (int *)(DAT_180ca0a50 + 0x2524), *piVar1 == param_1)) &&
      (*(int *)(DAT_180ca0a50 + 0x1578) == param_1)) && (*(char *)(DAT_180ca0a50 + 0x2583) != '\0'))
  {
    *(undefined1 *)(DAT_180ca0a50 + 0x2583) = 0;
    *(int *)(lVar3 + 0x25a8) = *piVar1;
    *(int *)(lVar3 + 0x25ac) = *(int *)(lVar3 + 4) + 1;
    iVar4 = *(int *)(lVar3 + 0x25b4);
    if ((*(uint *)(lVar3 + 0x2520) & 0x200) != 0) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + iVar4 / 2;
        iVar5 = 0;
        if (0 < iVar4) {
          iVar5 = iVar4;
        }
        FUN_1803f6920(lVar3 + 0x25b0,iVar5);
      }
      *(undefined4 *)(lVar3 + 0x25b0) = 0;
      return;
    }
    iVar5 = *(int *)(lVar3 + 0x2528) + 1;
    if (iVar4 < iVar5) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      iVar2 = iVar5;
      if (iVar5 < iVar4) {
        iVar2 = iVar4;
      }
      FUN_1803f6920(lVar3 + 0x25b0,iVar2);
    }
    *(int *)(lVar3 + 0x25b0) = iVar5;
    FUN_180540530(*(undefined8 *)(lVar3 + 0x25b8),*(undefined8 *)(lVar3 + 0x2540),
                  (longlong)(*(int *)(lVar3 + 0x2528) + 1));
  }
  return;
}



/* ===== 18041c280 FUN_18041c280 ===== */

int FUN_18041c280(uint param_1,int *param_2,char *param_3,char *param_4,undefined4 param_5,
                 int param_6,undefined8 *param_7)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  lVar4 = DAT_180ca0a50;
  iVar2 = 0;
  bVar1 = false;
  iVar9 = 8;
  iVar8 = (int)param_3;
  pcVar3 = param_3;
  if ((param_1 >> 0x18 & 1) == 0) {
    if (param_4 == (char *)0x0) {
      while( true ) {
        iVar6 = iVar2 + 1;
        if (iVar2 <= param_6) {
          iVar2 = param_2[1];
          if (*param_2 == iVar2) {
            iVar7 = *param_2 + 1;
            if (iVar2 == 0) {
              iVar2 = 8;
            }
            else {
              iVar2 = iVar2 / 2 + iVar2;
            }
            if (iVar7 < iVar2) {
              iVar7 = iVar2;
            }
            FUN_18007e1d0(param_2,iVar7);
          }
          *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar3 - iVar8;
          *param_2 = *param_2 + 1;
        }
        lVar4 = FUN_1804ef420(pcVar3,10);
        if (lVar4 == 0) break;
        pcVar3 = (char *)(lVar4 + 1);
        iVar2 = iVar6;
      }
      sVar5 = strlen(pcVar3);
      pcVar3 = pcVar3 + sVar5;
      bVar1 = true;
    }
    else {
      while (iVar6 = iVar2, pcVar3 < param_4) {
        iVar6 = iVar2 + 1;
        if (iVar2 <= param_6) {
          iVar2 = param_2[1];
          if (*param_2 == iVar2) {
            iVar7 = *param_2 + 1;
            if (iVar2 == 0) {
              iVar2 = 8;
            }
            else {
              iVar2 = iVar2 / 2 + iVar2;
            }
            if (iVar7 < iVar2) {
              iVar7 = iVar2;
            }
            FUN_18007e1d0(param_2,iVar7);
          }
          *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar3 - iVar8;
          *param_2 = *param_2 + 1;
        }
        lVar4 = FUN_180540ca0(pcVar3,10,(longlong)param_4 - (longlong)pcVar3);
        if (lVar4 == 0) {
          pcVar3 = param_4;
          break;
        }
        iVar2 = iVar6;
        pcVar3 = (char *)(lVar4 + 1);
      }
    }
  }
  else {
    while (pcVar3 < param_4) {
      iVar6 = iVar2 + 1;
      if (iVar2 <= param_6) {
        iVar2 = param_2[1];
        if (*param_2 == iVar2) {
          iVar7 = *param_2 + 1;
          if (iVar2 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar2 / 2 + iVar2;
          }
          if (iVar7 < iVar2) {
            iVar7 = iVar2;
          }
          FUN_18007e1d0(param_2,iVar7);
        }
        *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)pcVar3 - iVar8;
        *param_2 = *param_2 + 1;
      }
      pcVar3 = (char *)FUN_18040a0d0(*(undefined8 *)(lVar4 + 0x11f0),*(undefined4 *)(lVar4 + 0x1200)
                                     ,pcVar3,param_4,param_5,2);
      iVar2 = iVar6;
      if (*pcVar3 == '\n') {
        pcVar3 = pcVar3 + 1;
      }
    }
    bVar1 = false;
    iVar6 = iVar2;
  }
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = pcVar3;
    param_4 = pcVar3;
  }
  if (iVar6 == 0) {
    iVar2 = param_2[1];
    if (*param_2 == iVar2) {
      iVar6 = *param_2 + 1;
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      FUN_18007e1d0(param_2,iVar6);
    }
    iVar6 = 1;
    *(undefined4 *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = 0;
    *param_2 = *param_2 + 1;
  }
  if (((param_3 < param_4) && (param_4[-1] == '\n')) && (!bVar1)) {
    if (iVar6 <= param_6) {
      iVar2 = param_2[1];
      if (*param_2 == iVar2) {
        iVar7 = *param_2 + 1;
        if (iVar2 != 0) {
          iVar9 = iVar2 + iVar2 / 2;
        }
        if (iVar7 < iVar9) {
          iVar7 = iVar9;
        }
        FUN_18007e1d0(param_2,iVar7);
      }
      *(int *)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 4) = (int)param_4 - iVar8;
      *param_2 = *param_2 + 1;
    }
    iVar6 = iVar6 + 1;
  }
  return iVar6;
}



/* ===== 18041c570 FUN_18041c570 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18041c570(char *******param_1,char *******param_2,char *******param_3,uint param_4,
                       undefined8 *param_5,uint param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  char cVar16;
  byte bVar17;
  char cVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  ulonglong uVar24;
  size_t sVar25;
  longlong lVar26;
  char *pcVar27;
  char *******pppppppcVar28;
  char *******pppppppcVar29;
  short sVar30;
  undefined4 uVar31;
  longlong lVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  int *piVar35;
  int iVar36;
  char *******pppppppcVar37;
  uint uVar38;
  char *******pppppppcVar39;
  char **ppcVar40;
  longlong lVar41;
  char cVar42;
  byte bVar43;
  longlong *plVar44;
  char *******_Str;
  longlong lVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStack_348 [32];
  char *******local_328;
  char *******local_320;
  char *******local_318;
  char *******local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  byte local_2e8;
  byte local_2e7;
  char local_2e6;
  byte local_2e5;
  char local_2e4;
  char local_2e3;
  byte local_2e2;
  uint local_2e0;
  uint local_2dc;
  char local_2d8;
  uint local_2d4;
  uint local_2d0;
  char local_2cc;
  float local_2c8;
  float local_2c4;
  char *******local_2c0;
  char local_2b8;
  char local_2b7;
  byte local_2b6;
  char local_2b5;
  char local_2b4;
  char local_2b3;
  char local_2b2;
  undefined8 local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  longlong local_290;
  char local_288;
  uint local_284;
  float local_280;
  undefined8 local_278;
  int *local_270;
  float local_268;
  undefined8 local_260;
  longlong local_258;
  float local_250;
  undefined8 uStack_24c;
  undefined8 uStack_244;
  uint local_238;
  longlong *local_230;
  float local_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  uint *local_208;
  undefined8 local_200;
  undefined4 *local_1f8;
  undefined8 *local_1f0;
  undefined4 local_1e8;
  float local_1e4;
  longlong local_1e0;
  float local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined8 local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  undefined2 local_1a8;
  undefined1 local_1a6;
  char local_1a5;
  undefined4 uStack_1a4;
  undefined3 uStack_1a0;
  undefined5 local_19d;
  int iStack_198;
  undefined4 uStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  undefined3 uStack_184;
  undefined1 local_181;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  char *******pppppppcStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  char *******local_128;
  char *******local_120;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined4 local_104;
  char *local_100;
  ulonglong local_f8;
  
  lVar12 = DAT_180ca0a50;
  local_f8 = DAT_180919500 ^ (ulonglong)auStack_348;
  uVar24 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar24 + 0xce) = 1;
  lVar26 = *(longlong *)(lVar12 + 0x14f8);
  if (*(char *)(lVar26 + 0xd1) != '\0') goto LAB_18041c9eb;
  uVar38 = param_6 & 0x4000000;
  local_2e0 = uVar38;
  local_2c4 = (float)param_4;
  local_2c0 = param_3;
  local_278 = param_2;
  local_1e0 = lVar26;
  local_128 = param_1;
  if (uVar38 != 0) {
    FUN_1803ec9c0();
  }
  uVar19 = FUN_1803e8900(lVar26,param_1);
  fVar57 = DAT_1808acda0;
  fVar56 = DAT_1808acd08;
  local_120 = param_1;
  if (param_1 != (char *******)0xffffffffffffffff) {
    while (*(char *)local_120 != '\0') {
      if (((*(char *)local_120 == '#') && (*(char *)((longlong)local_120 + 1) == '#')) ||
         (local_120 = (char *******)((longlong)local_120 + 1),
         local_120 == (char *******)0xffffffffffffffff)) break;
    }
  }
  local_2d4 = uVar19;
  if (param_1 == local_120) {
    fVar49 = 0.0;
    local_2b0._4_4_ = *(float *)(DAT_180ca0a50 + 0x1200);
  }
  else {
    local_2f8 = 0;
    local_308 = 0;
    local_328 = (char *******)CONCAT44(local_328._4_4_,DAT_1808acda0);
    local_320 = param_1;
    local_318 = local_120;
    local_310 = local_120;
    FUN_18040a2f0(&local_2b0,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                  *(float *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08);
    fVar49 = (float)(int)((uint)((float)(int)(float)local_2b0 < (float)local_2b0) +
                         (int)(float)local_2b0);
  }
  fVar54 = 0.0;
  if (uVar38 != 0) {
    local_2b0._4_4_ = *(float *)(lVar12 + 0x1200) * DAT_1808ac838;
  }
  fVar22 = *(float *)(lVar12 + 0xce0);
  local_1e4 = fVar49;
  uVar46 = FUN_1803ec830();
  FUN_1803ec8b0(&local_200,*param_5,uVar46,fVar22 + fVar22 + local_2b0._4_4_);
  fVar22 = local_200._4_4_;
  if (fVar49 <= 0.0) {
    fVar49 = 0.0;
  }
  else {
    fVar49 = fVar49 + *(float *)(lVar12 + 0xcf4);
  }
  fVar23 = *(float *)(lVar26 + 0x118);
  fVar50 = *(float *)(lVar26 + 0x11c);
  fVar48 = (float)local_200;
  local_220 = fVar23 + (float)local_200;
  fStack_21c = local_200._4_4_ + fVar50;
  local_20c = local_200._4_4_ + fVar50;
  local_210 = fVar23 + fVar49 + (float)local_200;
  local_268 = (float)local_200;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  pppppppcStack_150 = (char *******)0x0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  plVar44 = (longlong *)&DAT_00000008;
  bVar7 = true;
  local_2b0 = CONCAT44(local_20c - fVar50,local_210 - fVar23);
  local_214 = fVar50;
  local_228 = fVar23;
  fStack_224 = fVar50;
  local_218 = fVar23;
  if (uVar38 != 0) {
    FUN_1803ec550(&local_2b0);
    if (((*(uint *)(lVar12 + 0x25a8) != uVar19) && (*(uint *)(lVar12 + 0x1578) != uVar19)) &&
       (uVar19 != *(uint *)(lVar12 + 0x207c))) {
      bVar7 = false;
    }
    cVar16 = FUN_1803ec2f0(&local_218,uVar19,&local_228,0x100000);
    if (cVar16 != '\0' || bVar7) {
      uVar46 = SUB164(*(undefined1 (*) [16])(lVar12 + 0x1ee8),4);
      uVar5 = SUB164(*(undefined1 (*) [16])(lVar12 + 0x1ee8),8);
      local_168 = *(undefined8 *)(lVar12 + 0x1ef8);
      uStack_160 = *(ulonglong *)(lVar12 + 0x1f00);
      local_158 = *(undefined8 *)(lVar12 + 0x1f08);
      pppppppcStack_150 = *(char ********)(lVar12 + 0x1f10);
      local_148 = *(undefined8 *)(lVar12 + 0x1f18);
      uStack_140 = *(undefined8 *)(lVar12 + 0x1f20);
      local_138 = *(undefined8 *)(lVar12 + 0x1f28);
      uStack_130 = *(undefined8 *)(lVar12 + 0x1f30);
      *(float *)(lVar26 + 0x118) = fVar23;
      *(float *)(lVar26 + 0x11c) = fVar50;
      uVar38 = *(uint *)(lVar12 + 0x207c);
      if (((uVar38 == uVar19) && (((byte)*(undefined4 *)(lVar12 + 0x2088) & 0x28) == 8)) &&
         ((param_6 & 0x20) != 0)) {
        *(undefined4 *)(lVar12 + 0x207c) = 0;
        uVar38 = 0;
      }
      if (*(uint *)(lVar12 + 0x1578) == uVar19) {
        *(undefined4 *)(lVar12 + 0x207c) = 0;
      }
      lVar26 = DAT_180ca0a50;
      local_250 = 4.2039e-45;
      uStack_24c = *(undefined8 *)(DAT_180ca0a50 + 0xe10);
      uStack_244 = *(undefined8 *)(DAT_180ca0a50 + 0xe18);
      FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_250);
      if (*(int *)(lVar26 + 0x1fbc) != 3) {
        uVar33 = *(undefined8 *)(lVar12 + 0xe58);
        *(undefined8 *)(lVar26 + 0xe10) = *(undefined8 *)(lVar12 + 0xe50);
        *(undefined8 *)(lVar26 + 0xe18) = uVar33;
      }
      FUN_1803d8870(7);
      FUN_1803d8870(8);
      local_2b0 = 0;
      FUN_1803d89a0(2,&local_2b0);
      local_2b0 = CONCAT44(fStack_21c - fStack_224,local_220 - local_228);
      local_328 = (char *******)CONCAT44(local_328._4_4_,4);
      cVar16 = FUN_1803e1800(local_128,local_2d4,&local_2b0,1);
      *(uint *)(lVar12 + 0x207c) = uVar38;
      FUN_1803d8a40(3);
      FUN_1803d87f0(1);
      if (cVar16 != '\0' || bVar7) {
        lVar26 = *(longlong *)(lVar12 + 0x14f8);
        *(ushort *)(lVar26 + 0x176) =
             *(ushort *)(lVar26 + 0x176) | (ushort)(1 << (*(uint *)(lVar26 + 0x170) & 0x1f));
        *(float *)(lVar26 + 0x118) = *(float *)(lVar12 + 0xcdc) + *(float *)(lVar26 + 0x118);
        *(float *)(lVar26 + 0x11c) = *(float *)(lVar12 + 0xce0) + *(float *)(lVar26 + 0x11c);
        local_268 = fVar48 - *(float *)(lVar26 + 0xc0);
        *(uint *)(lVar12 + 0x1ee8) = local_2d4;
        *(undefined4 *)(lVar12 + 0x1eec) = uVar46;
        *(uint *)(lVar12 + 0x1ef0) = uVar5;
        fVar49 = local_268;
        local_290 = lVar26;
        local_238 = uVar5;
        local_1e8 = uVar46;
        uVar19 = local_2d4;
        goto LAB_18041cb29;
      }
      FUN_1803e1bc0();
    }
    uVar24 = FUN_1803ecb10();
LAB_18041c9eb:
    return uVar24 & 0xffffffffffffff00;
  }
  local_290 = lVar26;
  FUN_1803ec550(&local_2b0);
  if (((param_6 >> 0x1b & 1) == 0) &&
     (uVar24 = FUN_1803ec2f0(&local_218,uVar19,&local_228,0x100000), (char)uVar24 == '\0'))
  goto LAB_18041c9eb;
  local_238 = (uint)uStack_170;
  local_1e8 = local_178._4_4_;
  fVar49 = fVar48;
LAB_18041cb29:
  bVar17 = FUN_1803ddbf0(&local_228,uVar19,*(uint *)(lVar12 + 0x1eec) | 0x8000);
  lVar41 = local_290;
  if (bVar17 == 0) {
    local_2c8 = 0.0;
  }
  else {
    *(undefined4 *)(DAT_180ca0a50 + 0x2500) = 1;
    local_2c8 = 0.0;
    if (*(char *)(lVar12 + 0x2061) == '\0') {
      local_2c8 = (float)(uint)bVar17;
    }
  }
  if ((uVar19 == 0) || (*(uint *)(DAT_180ca0a50 + 0x2524) != uVar19)) {
    lVar45 = 0;
    local_100 = (char *)0x76;
    local_208 = (uint *)&DAT_00000010;
    local_1f8 = (undefined4 *)&DAT_00000018;
    local_1f0 = (undefined8 *)&DAT_00000030;
    local_270 = (int *)&DAT_00000028;
    local_2a8 = (int *)&DAT_0000002c;
    local_260 = (undefined4 *)&DAT_00000078;
    local_230 = (longlong *)0x7c;
  }
  else {
    lVar45 = DAT_180ca0a50 + 0x2510;
    local_100 = (char *)(DAT_180ca0a50 + 0x2586);
    plVar44 = (longlong *)(DAT_180ca0a50 + 0x2518);
    local_208 = (uint *)(DAT_180ca0a50 + 0x2520);
    local_1f8 = (undefined4 *)(DAT_180ca0a50 + 0x2528);
    local_1f0 = (undefined8 *)(DAT_180ca0a50 + 0x2540);
    local_270 = (int *)(DAT_180ca0a50 + 0x2538);
    local_2a8 = (int *)(DAT_180ca0a50 + 0x253c);
    local_260 = (undefined4 *)(DAT_180ca0a50 + 0x2588);
    local_230 = (longlong *)(DAT_180ca0a50 + 0x258c);
  }
  local_294 = 7.17465e-43;
  local_2d0 = param_6 | 0x200;
  if ((*(uint *)(lVar12 + 0x1eec) >> 0xb & 1) == 0) {
    local_2d0 = param_6;
  }
  local_2dc = local_2d0 & 0x200;
  local_284 = local_2d0 & 0x400;
  local_298 = (float)(*(uint *)(lVar12 + 0x1eec) & 0x200);
  local_280 = (float)(local_2d0 & 0x1000000);
  if (local_280 == 0.0) {
    fVar23 = 0.0;
  }
  else {
    if (*(char *)(lVar26 + 0xc9) == '\0') {
      fVar50 = (float)(*(uint *)(lVar12 + 0xd14) ^ DAT_1808adec0);
    }
    else {
      fVar50 = 0.0;
    }
    lVar26 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if ((*(longlong *)(lVar26 + 0x1c8) != 0) ||
       (lVar32 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
      lVar32 = 0x250;
    }
    fVar50 = fVar50 + (*(float *)(lVar32 + lVar26) - *(float *)(lVar26 + 0x118));
    fVar23 = DAT_1808ac34c;
    if (DAT_1808ac34c <= fVar50) {
      fVar23 = fVar50;
    }
  }
  if ((SUB41(local_2c8,0) == '\0') || (*(char *)(lVar12 + 0xb40) == '\0')) {
    local_2e7 = '\0';
  }
  else {
    local_2e7 = '\x01';
  }
  if ((*(uint *)(lVar12 + 0x1578) == uVar19) ||
     (local_2e4 = '\x01', *(uint *)(lVar12 + 0x207c) != uVar19)) {
    local_2e4 = '\0';
  }
  uVar38 = *(uint *)(lVar12 + 0x262c);
  if ((local_2e7 == '\0') &&
     (((*(uint *)(lVar12 + 0x1578) != 0 || ((local_2d0 >> 0x1b & 1) == 0)) ||
      (*(uint *)(lVar12 + 0x25a8) == uVar19)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_2b0 = lVar45;
  local_1d8 = fVar23;
  local_1d0 = plVar44;
  if ((local_2e0 == 0) || (lVar45 == 0)) {
    iVar21 = 0;
    if ((local_2e0 != 0) && (iVar20 = 0, lVar45 != 0)) goto LAB_18041cd8f;
LAB_18041cda4:
    bVar8 = false;
    if ((local_2e0 != 0) && (lVar45 != 0)) goto LAB_18041cdb0;
LAB_18041cdc9:
    local_2e8 = '\0';
    if (local_2e0 == 0) {
      local_2e8 = '\0';
      fVar50 = fVar56;
    }
    else {
      fVar50 = *(float *)(lVar41 + 0x9c);
    }
  }
  else {
    iVar20 = FUN_1803e8900();
LAB_18041cd8f:
    iVar21 = iVar20;
    if (*(int *)(lVar12 + 0x1578) != 0) goto LAB_18041cda4;
    if (*(int *)(lVar12 + 0x15a8) != iVar21) goto LAB_18041cda4;
    bVar8 = true;
LAB_18041cdb0:
    if (*(int *)(lVar12 + 0x1578) != iVar21) goto LAB_18041cdc9;
    local_2e8 = '\x01';
    fVar50 = *(float *)(lVar41 + 0x9c);
  }
  if ((lVar45 == 0) || (*local_100 == '\0')) {
    bVar9 = false;
    if (lVar45 != 0) goto LAB_18041ce04;
LAB_18041ce1d:
    bVar10 = false;
    if (lVar45 != 0) goto LAB_18041ce25;
LAB_18041ce38:
    bVar11 = false;
  }
  else {
    bVar9 = true;
LAB_18041ce04:
    if ((bool)*(char *)(*plVar44 + 0x17) == (local_2e0 == 0)) goto LAB_18041ce1d;
    bVar10 = true;
LAB_18041ce25:
    if (((local_2d0 ^ *local_208) & 0x200) == 0) goto LAB_18041ce38;
    bVar11 = true;
  }
  if (((bVar7 || local_2e4 != '\0') || (uVar38 == local_2d4)) || (bVar8)) {
    local_2e3 = '\x01';
    local_2e2 = 0;
  }
  else {
    local_2e3 = '\0';
    local_2e2 = 1;
  }
  if (bVar9) {
    sVar25 = strlen((char *)local_2c0);
    puVar15 = local_1f0;
    puVar2 = local_1f8;
    *local_100 = '\0';
    local_328 = (char *******)CONCAT44(local_328._4_4_,(int)sVar25);
    FUN_18041c030(lVar45,*local_1f0,*local_1f8);
    piVar3 = local_270;
    iVar20 = (int)local_2c4 + 1;
    iVar21 = *local_2a8;
    if (iVar21 < iVar20) {
      if (iVar21 == 0) {
        iVar21 = 8;
      }
      else {
        iVar21 = iVar21 / 2 + iVar21;
      }
      iVar36 = iVar20;
      if (iVar20 < iVar21) {
        iVar36 = iVar21;
      }
      FUN_1803f6920(local_270,iVar36);
    }
    *piVar3 = iVar20;
    *puVar2 = (int)sVar25;
    FUN_180540530(*puVar15,local_2c0);
    *(undefined4 *)(*local_1d0 + 4) = *local_260;
    *(int *)(*local_1d0 + 8) = (int)*local_230;
    *(undefined4 *)*local_1d0 = ((undefined4 *)*local_1d0)[2];
LAB_18041cf24:
    bVar8 = false;
    uVar38 = local_2d4;
  }
  else {
    if (((local_2e3 == '\0') || (*(uint *)(lVar12 + 0x1578) == local_2d4)) &&
       ((!bVar10 && (!bVar11)))) goto LAB_18041cf24;
    lVar45 = lVar12 + 0x2510;
    *(undefined4 *)(lVar12 + 0x257c) = 0xbe99999a;
    local_2b0 = lVar45;
    if (((*(uint *)(lVar12 + 0x2524) != local_2d4) &&
        (*(uint *)(lVar12 + 0x2524) == *(uint *)(lVar12 + 0x1578))) &&
       ((local_2e3 != '\0' && (*(uint *)(lVar12 + 0x1578) != local_2d4)))) {
      FUN_18041c160();
    }
    sVar25 = strlen((char *)local_2c0);
    iVar21 = (int)sVar25;
    if (bVar8) {
      pppppppcVar28 = local_2c0;
    }
    else {
      iVar36 = iVar21 + 1;
      iVar20 = *(int *)(lVar12 + 0x254c);
      if (iVar20 < iVar36) {
        if (iVar20 == 0) {
          iVar20 = 8;
        }
        else {
          iVar20 = iVar20 / 2 + iVar20;
        }
        iVar6 = iVar36;
        if (iVar36 < iVar20) {
          iVar6 = iVar20;
        }
        FUN_1803f6920(lVar12 + 0x2548,iVar6);
      }
      pppppppcVar28 = local_2c0;
      *(int *)(lVar12 + 0x2548) = iVar36;
      FUN_180540530(*(undefined8 *)(lVar12 + 0x2550),local_2c0,(longlong)iVar36);
    }
    if (((*(uint *)(lVar12 + 0x2524) != local_2d4) || (bVar10)) ||
       ((bVar7 = true, !bVar11 &&
        (((*(int *)(lVar12 + 0x2528) != iVar21 || (*(char **)(lVar12 + 0x2540) == (char *)0x0)) ||
         (iVar20 = strncmp(*(char **)(lVar12 + 0x2540),(char *)pppppppcVar28,sVar25 & 0xffffffff),
         iVar20 != 0)))))) {
      bVar7 = false;
    }
    uVar38 = local_2d4;
    *(uint *)(lVar12 + 0x2524) = local_2d4;
    *(int *)(lVar12 + 0x2528) = iVar21;
    *(undefined1 *)(lVar12 + 0x2583) = 0;
    if (local_2dc == 0) {
      iVar20 = (int)local_2c4 + 1;
      iVar21 = *(int *)(lVar12 + 0x253c);
      if (iVar21 < iVar20) {
        if (iVar21 == 0) {
          iVar21 = 8;
        }
        else {
          iVar21 = iVar21 / 2 + iVar21;
        }
        iVar36 = iVar20;
        if (iVar20 < iVar21) {
          iVar36 = iVar21;
        }
        FUN_1803f6920(lVar12 + 0x2538,iVar36);
      }
      pppppppcVar28 = local_2c0;
      *(int *)(lVar12 + 0x2538) = iVar20;
      FUN_180540530(*(undefined8 *)(lVar12 + 0x2540),local_2c0,
                    (longlong)(*(int *)(lVar12 + 0x2528) + 1));
    }
    bVar8 = false;
    *(undefined8 *)(lVar12 + 0x256c) = 0;
    if ((local_2d0 >> 0x11 & 1) != 0) {
      if (pppppppcVar28 == (char *******)0x0) {
        fVar56 = 0.0;
      }
      else {
        local_2f8 = 0;
        local_308 = 0;
        local_310 = (char *******)0x0;
        local_318 = (char *******)0x0;
        local_328 = (char *******)CONCAT44(local_328._4_4_,fVar57);
        local_320 = pppppppcVar28;
        FUN_18040a2f0(&local_230,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                      *(undefined4 *)(DAT_180ca0a50 + 0x1200),fVar56);
        fVar56 = (float)(int)((uint)((float)(int)local_230._0_4_ < local_230._0_4_) +
                             (int)local_230._0_4_);
      }
      fVar48 = *(float *)(lVar12 + 0xcdc) + *(float *)(lVar12 + 0xcdc) + (fVar56 - fVar48);
      fVar56 = 0.0;
      if (0.0 <= fVar48) {
        fVar56 = fVar48;
      }
      *(float *)(lVar12 + 0x256c) = fVar56 + *(float *)(lVar12 + 0x256c);
    }
    if (!bVar7) {
      puVar2 = *(undefined4 **)(lVar12 + 0x2518);
      *(undefined8 *)(puVar2 + 0x28e) = 0x630000;
      puVar2[0x290] = 999;
      *(undefined8 *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      *(undefined2 *)((longlong)puVar2 + 0x15) = 1;
      puVar2[7] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      *(bool *)((longlong)puVar2 + 0x17) = local_2e0 == 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      puVar2[4] = 0;
    }
    if (local_2e0 == 0) {
      if (((local_2d0 >> 0xc & 1) != 0) || (local_298 != 0.0)) {
        bVar8 = true;
      }
      if ((local_2e4 != '\0') && ((!bVar7 || ((*(byte *)(lVar12 + 0x2088) & 4) == 0)))) {
        bVar8 = true;
      }
      if ((local_2e7 != '\0') && (*(char *)(lVar12 + 300) != '\0')) {
        bVar8 = true;
      }
    }
    if ((local_2d0 >> 0xb & 1) != 0) {
      *(undefined1 *)(*(longlong *)(lVar12 + 0x2518) + 0xc) = 1;
    }
  }
  lVar26 = local_1e0;
  bVar17 = local_2e7;
  cVar16 = *(char *)(lVar12 + 0x78);
  local_2b8 = cVar16;
  if ((local_2e3 == '\0') || (*(uint *)(lVar12 + 0x1578) == uVar38)) {
    cVar42 = local_2e4;
  }
  else {
    FUN_1803dd660(uVar38,local_1e0);
    FUN_1803ef530(uVar38,lVar26);
    FUN_1803ef030(lVar26,0);
    cVar42 = local_2e4;
    if (local_2e4 != '\0') {
      FUN_1803ef360();
    }
  }
  if (*(uint *)(lVar12 + 0x1578) == uVar38) {
    local_118 = _DAT_1808ad850;
    local_108 = 0x207;
    local_104 = 0x208;
    ppcVar40 = (char **)local_118;
    do {
      FUN_1803eb2a0(*(undefined4 *)ppcVar40,uVar38);
      lVar26 = DAT_180ca0a50;
      ppcVar40 = (char **)((longlong)ppcVar40 + 4);
    } while (ppcVar40 != &local_100);
    if (bVar17 != '\0') {
      *(uint *)(DAT_180ca0a50 + 0x1cc0) = uVar38;
      *(uint *)(lVar26 + 0x1cbc) = uVar38;
      *(undefined2 *)(lVar26 + 0x1cc4) = 0;
    }
    uVar19 = *(uint *)(lVar12 + 0x1e98);
    *(uint *)(lVar12 + 0x1e98) = uVar19 | 3;
    if ((local_2e0 != 0) || ((local_2d0 & 0x80000) != 0)) {
      *(uint *)(lVar12 + 0x1e98) = uVar19 | 0xf;
      lVar26 = DAT_180ca0a50;
      *(uint *)(DAT_180ca0a50 + 0x1624) = uVar38;
      *(uint *)(lVar26 + 0x1620) = uVar38;
      *(undefined2 *)(lVar26 + 0x1628) = 0;
      *(uint *)(lVar26 + 0x1630) = uVar38;
      *(uint *)(lVar26 + 0x162c) = uVar38;
      *(undefined2 *)(lVar26 + 0x1634) = 0;
      if (local_2e0 != 0) {
        *(uint *)(lVar26 + 0x163c) = uVar38;
        *(uint *)(lVar26 + 0x1638) = uVar38;
        *(undefined2 *)(lVar26 + 0x1640) = 0;
        *(uint *)(lVar26 + 0x1648) = uVar38;
        *(uint *)(lVar26 + 0x1644) = uVar38;
        *(undefined2 *)(lVar26 + 0x164c) = 0;
      }
    }
    lVar26 = DAT_180ca0a50;
    if (cVar16 != '\0') {
      *(uint *)(DAT_180ca0a50 + 0x1d2c) = uVar38;
      *(uint *)(lVar26 + 0x1d28) = uVar38;
      *(undefined2 *)(lVar26 + 0x1d30) = 0;
    }
    if ((local_2e0 != 0) && (lVar45 != 0)) {
      *(undefined4 *)(lVar45 + 0x60) = *(undefined4 *)(local_290 + 0x9c);
    }
    if (local_2dc == 0) {
      if (lVar45 != 0) goto LAB_18041d3da;
    }
    else if (lVar45 != 0) {
      sVar25 = strlen((char *)local_2c0);
      *(int *)(lVar45 + 0x18) = (int)sVar25;
LAB_18041d3da:
      iVar21 = **(int **)(lVar45 + 8);
      iVar20 = *(int *)(lVar45 + 0x18);
      if (iVar21 < *(int *)(lVar45 + 0x18)) {
        iVar20 = iVar21;
      }
      **(int **)(lVar45 + 8) = iVar20;
      iVar21 = *(int *)(*(longlong *)(lVar45 + 8) + 4);
      iVar20 = *(int *)(lVar45 + 0x18);
      if (iVar21 < *(int *)(lVar45 + 0x18)) {
        iVar20 = iVar21;
      }
      *(int *)(*(longlong *)(lVar45 + 8) + 4) = iVar20;
      iVar21 = *(int *)(*(longlong *)(lVar45 + 8) + 8);
      iVar20 = *(int *)(lVar45 + 0x18);
      if (iVar21 < *(int *)(lVar45 + 0x18)) {
        iVar20 = iVar21;
      }
      *(int *)(*(longlong *)(lVar45 + 8) + 8) = iVar20;
      goto LAB_18041d418;
    }
  }
  else {
    if (lVar45 == 0) goto LAB_18041d42b;
LAB_18041d418:
    pppppppcVar28 = local_2c0;
    if (local_2dc == 0) {
      pppppppcVar28 = *(char ********)(lVar45 + 0x30);
    }
    *(char ********)(lVar45 + 0x20) = pppppppcVar28;
  }
LAB_18041d42b:
  if ((*(uint *)(lVar12 + 0x1578) == uVar38) && (lVar45 == 0)) {
    FUN_1803dd660(0,0);
  }
  if (*(uint *)(lVar12 + 0x1578) == uVar38) {
    uVar19 = 0;
    if (*(char *)(lVar12 + 0xb40) != '\0') {
      uVar19 = (uint)local_2e2;
    }
    local_2a8 = (int *)CONCAT44(local_2a8._4_4_,uVar19);
    local_2e6 = '\x01';
  }
  else {
    if (lVar45 != 0) {
      uVar19 = 0;
      local_2a8 = (int *)((ulonglong)local_2a8._4_4_ << 0x20);
      if (local_2e8 != '\0') {
        local_2e6 = '\x01';
        goto LAB_18041d485;
      }
    }
    local_2e6 = '\0';
    uVar19 = 0;
    local_2a8 = (int *)((ulonglong)local_2a8 & 0xffffffff00000000);
  }
LAB_18041d485:
  if ((lVar45 == 0) ||
     (((*(int *)(*(longlong *)(lVar45 + 8) + 4) == *(int *)(*(longlong *)(lVar45 + 8) + 8) &&
       (!bVar8)) || (local_2e6 == '\0')))) {
    local_2e5 = 0;
    if ((local_2e6 != '\0') || (local_2e5 = 0, *(uint *)(lVar12 + 0x1578) == uVar38))
    goto LAB_18041d4c0;
LAB_18041d4d0:
    local_2d8 = '\0';
  }
  else {
    local_2e5 = 1;
LAB_18041d4c0:
    if ((local_2dc != 0) || (lVar45 == 0)) goto LAB_18041d4d0;
    local_2d8 = '\x01';
  }
  if (local_278 == (char *******)0x0) {
LAB_18041d4f7:
    local_2e4 = '\0';
  }
  else {
    if (local_2d8 == '\0') {
      pppppppcVar28 = local_2c0;
    }
    else {
      pppppppcVar28 = *(char ********)(lVar45 + 0x30);
    }
    if (*(char *)pppppppcVar28 != '\0' || local_298 != 0.0) goto LAB_18041d4f7;
    local_2e4 = '\x01';
  }
  if ((local_284 != 0) && (local_2e4 == '\0')) {
    FUN_18041bb80();
  }
  fVar56 = local_228;
  if ((lVar45 != 0) && (*(uint *)(lVar45 + 0x14) == uVar38)) {
    *(uint *)(lVar45 + 0x10) = local_2d0;
    *(undefined2 *)(lVar45 + 0x74) = 0;
    if ((local_280 != 0.0) && (*(float *)(lVar45 + 0x68) != fVar23)) {
      *(undefined1 *)(lVar45 + 0x71) = 1;
      *(float *)(lVar45 + 0x68) = fVar23;
      local_2e6 = '\x01';
    }
  }
  fVar48 = DAT_1808ac1f4;
  local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_228);
  cVar18 = (char)uVar19;
  if (*(uint *)(lVar12 + 0x1578) == uVar38) {
    *(float *)(lVar45 + 0x58) = local_2c4;
    *(float *)(lVar45 + 0x68) = fVar23;
    *(bool *)(lVar12 + 0x1587) = *(char *)(lVar12 + 0x118) == '\0';
    if (local_2e0 == 0) {
      fVar52 = *(float *)(lVar12 + 0x1200) * fVar48;
    }
    else {
      fVar52 = *(float *)(lVar12 + 0x114) - *(float *)(local_290 + 0x11c);
    }
    if (bVar8) {
      *(undefined4 *)(*(longlong *)(lVar45 + 8) + 4) = 0;
      *(undefined4 *)(*(longlong *)(lVar45 + 8) + 8) = *(undefined4 *)(lVar45 + 0x18);
      **(undefined4 **)(lVar45 + 8) = (*(undefined4 **)(lVar45 + 8))[2];
      *(undefined1 *)(*(longlong *)(lVar45 + 8) + 0x16) = 0;
      *(undefined1 *)(lVar45 + 0x72) = 1;
LAB_18041d7f1:
      if (*(char *)(lVar12 + 0x118) == '\0') {
        *(undefined1 *)(lVar45 + 0x72) = 0;
      }
    }
    else {
      fVar53 = ((*(float *)(lVar12 + 0x110) - local_228) - *(float *)(lVar12 + 0xcdc)) +
               *(float *)(lVar45 + 0x5c);
      if (((SUB41(local_2c8,0) == '\0') || (*(ushort *)(lVar12 + 0xb4a) < 2)) ||
         (*(char *)(lVar12 + 0x12d) != '\0')) {
        cVar18 = *(char *)(lVar45 + 0x72);
        if ((*(char *)(lVar12 + 0xb40) == '\0') || (cVar18 != '\0')) {
          if ((*(char *)(lVar12 + 0x118) == '\0') || (cVar18 != '\0')) goto LAB_18041d7ed;
          if ((*(float *)(lVar12 + 0xfc) != 0.0) || (*(float *)(lVar12 + 0x100) != 0.0)) {
            FUN_18041a060(lVar45,*(undefined8 *)(lVar45 + 8),fVar53,fVar52);
            *(undefined1 *)(lVar45 + 0x70) = 1;
            goto LAB_18041d7dc;
          }
        }
        else if (SUB41(local_2c8,0) != '\0') {
          if (*(char *)(lVar12 + 0x12d) == '\0') {
            FUN_180419ff0(lVar45,*(undefined8 *)(lVar45 + 8));
          }
          else {
            FUN_18041a060(lVar45,*(undefined8 *)(lVar45 + 8),fVar53,fVar52);
          }
LAB_18041d7dc:
          cVar18 = *(char *)(lVar45 + 0x72);
          *(undefined4 *)(lVar45 + 0x6c) = 0xbe99999a;
          goto LAB_18041d7ed;
        }
      }
      else {
        FUN_180419ff0(lVar45,*(undefined8 *)(lVar45 + 8));
        piVar3 = *(int **)(lVar45 + 8);
        iVar21 = *piVar3;
        if ((*(short *)(lVar12 + 0xb4a) - 2U & 1) == 0) {
          if ((iVar21 == 0) ||
             (*(char *)((longlong)iVar21 + -1 + *(longlong *)(lVar45 + 0x20)) == '\n')) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if ((piVar3[1] != piVar3[2]) || (!bVar7)) {
            FUN_18041b9d0(lVar45,0x20000c);
          }
          puVar2 = *(undefined4 **)(lVar45 + 8);
          if (puVar2[1] == puVar2[2]) {
            puVar2[2] = *puVar2;
            puVar2[1] = *puVar2;
          }
          uVar46 = FUN_1804197a0(lVar45,**(undefined4 **)(lVar45 + 8));
          **(undefined4 **)(lVar45 + 8) = uVar46;
          (*(undefined4 **)(lVar45 + 8))[2] = **(undefined4 **)(lVar45 + 8);
          piVar3 = *(int **)(lVar45 + 8);
          iVar21 = *(int *)(lVar45 + 0x18);
          iVar20 = piVar3[2];
          iVar36 = piVar3[1];
          if (iVar36 != iVar20) {
            if (iVar21 < iVar36) {
              piVar3[1] = iVar21;
              iVar36 = iVar21;
            }
            if (iVar21 < iVar20) {
              piVar3[2] = iVar21;
              iVar20 = iVar21;
            }
            if (iVar36 == iVar20) {
              *piVar3 = iVar36;
            }
          }
          if (*piVar3 <= iVar21) goto LAB_18041d75f;
          *piVar3 = iVar21;
          *(undefined4 *)(lVar45 + 0x6c) = 0xbe99999a;
          cVar18 = *(char *)(lVar45 + 0x72);
        }
        else {
          cVar18 = *(char *)((longlong)iVar21 + *(longlong *)(lVar45 + 0x20));
          *(undefined4 *)(lVar45 + 0x68) = 0;
          FUN_18041b9d0(lVar45,0x200004);
          FUN_18041b9d0(lVar45,0x600005);
          FUN_18041b9d0(lVar45,0x600001);
          *(float *)(lVar45 + 0x68) = fVar23;
          if ((cVar18 != '\n') && (local_2e0 != 0)) {
            lVar26 = *(longlong *)(lVar45 + 8);
            uVar46 = *(undefined4 *)(lVar26 + 4);
            *(undefined4 *)(lVar26 + 4) = *(undefined4 *)(lVar26 + 8);
            *(undefined4 *)(lVar26 + 8) = uVar46;
            **(undefined4 **)(lVar45 + 8) = (*(undefined4 **)(lVar45 + 8))[2];
          }
          *(undefined1 *)(lVar45 + 0x70) = 0;
LAB_18041d75f:
          *(undefined4 *)(lVar45 + 0x6c) = 0xbe99999a;
          cVar18 = *(char *)(lVar45 + 0x72);
        }
LAB_18041d7ed:
        if (cVar18 != '\0') goto LAB_18041d7f1;
      }
    }
    if ((((local_2d0 & 0x20) != 0) && (local_2dc == 0)) &&
       (cVar18 = FUN_1803eb460(0x200,1,uVar38), cVar18 != '\0')) {
      local_2c8 = 1.26117e-44;
      local_320 = (char *******)((ulonglong)local_320 & 0xffffffffffffff00);
      cVar18 = FUN_18041bd70(lVar12,lVar45,&local_2c8);
      if (cVar18 != '\0') {
        FUN_18041ba50(lVar45,local_2c8);
      }
    }
    bVar17 = local_2e5;
    if (((*(char *)(lVar12 + 300) == '\0') || (*(char *)(lVar12 + 0x12e) != '\0')) &&
       ((cVar16 == '\0' || (*(char *)(lVar12 + 300) == '\0')))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (0 < *(int *)(lVar12 + 0xbe0)) {
      if ((!bVar7) && (local_2dc == 0 && cVar42 == '\0')) {
        iVar21 = 0;
        do {
          local_2c8 = (float)(uint)*(ushort *)(*(longlong *)(lVar12 + 0xbe8) + (longlong)iVar21 * 2)
          ;
          if (local_2c8 != 1.26117e-44) {
            local_320 = (char *******)((ulonglong)local_320 & 0xffffffffffffff00);
            cVar16 = FUN_18041bd70(lVar12,lVar45,&local_2c8);
            if (cVar16 != '\0') {
              FUN_18041ba50(lVar45);
            }
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < *(int *)(lVar12 + 0xbe0));
        cVar16 = local_2b8;
      }
      local_2e5 = bVar17;
      if (*(int *)(lVar12 + 0xbe4) < 0) {
        FUN_1803f6b20(lVar12 + 0xbe0);
      }
      *(undefined4 *)(lVar12 + 0xbe0) = 0;
    }
    cVar18 = (char)local_2a8;
  }
  bVar7 = false;
  local_2e3 = '\0';
  if (((*(uint *)(lVar12 + 0x1578) == uVar38) && (*(char *)(lVar12 + 0x1584) == '\0')) &&
     (cVar18 == '\0')) {
    uVar19 = local_2d0 & 0x10000;
    iVar20 = (int)((fVar22 - *(float *)(lVar12 + 0xce0)) / *(float *)(lVar12 + 0x1200));
    iVar21 = 1;
    if (0 < iVar20) {
      iVar21 = iVar20;
    }
    local_270 = (int *)CONCAT44(local_270._4_4_,iVar21);
    *(int *)(*(longlong *)(lVar45 + 8) + 0x10) = iVar21;
    local_2e7 = *(char *)(lVar12 + 0x12d);
    local_2c8 = (float)(-(uint)(local_2e7 != '\0') & 0x400000);
    lVar26 = 0x12e;
    if (cVar16 == '\0') {
      lVar26 = 300;
    }
    local_2e8 = *(char *)(lVar26 + lVar12);
    uVar46 = 0x200007;
    if (((cVar16 == '\0') || (*(char *)(lVar12 + 300) == '\0')) ||
       ((*(char *)(lVar12 + 0x12f) != '\0' || (*(char *)(lVar12 + 0x12e) != '\0')))) {
      local_2cc = '\0';
      uVar31 = 0x200002;
      uVar46 = 0x200003;
    }
    else {
      local_2cc = '\x01';
      uVar31 = 0x200006;
    }
    local_208 = (uint *)CONCAT44(local_208._4_4_,uVar46);
    local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,uVar31);
    cVar16 = FUN_1803eb460(0x1239,1,uVar38);
    if (((cVar16 == '\0') && (cVar16 = FUN_1803eb460(0x220a,1,uVar38), cVar16 == '\0')) ||
       ((local_2dc != 0 || local_284 != 0 ||
        ((local_2e0 != 0 &&
         (*(int *)(*(longlong *)(lVar45 + 8) + 4) == *(int *)(*(longlong *)(lVar45 + 8) + 8))))))) {
      local_2e2 = 0;
    }
    else {
      local_2e2 = 1;
    }
    uVar14 = local_284;
    uVar13 = local_2dc;
    uVar5 = local_2e0;
    cVar16 = FUN_1803eb460(0x1224,0,uVar38);
    if ((((cVar16 == '\0') && (cVar16 = FUN_1803eb460(0x1209,0,uVar38), cVar16 == '\0')) ||
        (uVar14 != 0)) ||
       ((uVar5 != 0 &&
        (*(int *)(*(longlong *)(lVar45 + 8) + 4) == *(int *)(*(longlong *)(lVar45 + 8) + 8))))) {
      local_2b3 = '\0';
    }
    else {
      local_2b3 = '\x01';
    }
    cVar16 = FUN_1803eb460(0x1237,1,uVar38);
    if (((cVar16 == '\0') && (cVar16 = FUN_1803eb460(0x2209,1,uVar38), cVar16 == '\0')) ||
       (local_2b2 = '\x01', uVar13 != 0)) {
      local_2b2 = '\0';
    }
    cVar16 = FUN_1803eb460(0x123b,1,uVar38);
    if ((cVar16 == '\0') || (uVar13 != 0 || uVar19 != 0)) {
      local_2b5 = '\0';
      local_100 = (char *)CONCAT44(local_100._4_4_,0x20000b);
    }
    else {
      local_2b5 = '\x01';
      local_100 = (char *)CONCAT44(local_100._4_4_,0x20000a);
    }
    cVar16 = FUN_1803eb460(0x123a,1,uVar38);
    if (((cVar16 == '\0') && (cVar16 = FUN_1803eb460(0x323b,1,uVar38), cVar16 == '\0')) ||
       (local_2b4 = '\x01', uVar13 != 0 || uVar19 != 0)) {
      local_2b4 = '\0';
    }
    local_288 = FUN_1803eb460(0x1222,0,uVar38);
    if (((*(byte *)(lVar12 + 0x28) & 2) == 0) || ((*(byte *)(lVar12 + 0x2c) & 1) == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    cVar16 = FUN_1803eb460(0x20d,1,uVar38);
    if (cVar16 == '\0') {
      cVar16 = FUN_1803eb460(0x273,1,uVar38);
      local_2b7 = '\0';
      if (cVar16 != '\0') goto LAB_18041db8c;
    }
    else {
LAB_18041db8c:
      local_2b7 = '\x01';
    }
    cVar16 = FUN_1803eb460(0x120d,1,uVar38);
    if ((cVar16 == '\0') && (cVar16 = FUN_1803eb460(0x1273,1,uVar38), cVar16 == '\0')) {
      local_2b6 = 0;
    }
    else {
      local_2b6 = 1;
    }
    cVar16 = FUN_1803eb460(0x220d,1,uVar38);
    if ((cVar16 == '\0') && (cVar16 = FUN_1803eb460(0x2273,1,uVar38), cVar16 == '\0')) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar7) {
      uVar33 = 0x27d;
      if (*(char *)(lVar12 + 0x71) != '\0') {
        uVar33 = 0x27b;
      }
      cVar16 = FUN_1803e9470(uVar33,0,0);
      if (cVar16 == '\0') goto LAB_18041dc1a;
      bVar9 = true;
    }
    else {
LAB_18041dc1a:
      bVar9 = false;
    }
    cVar16 = FUN_1803eb460(0x20e,1,local_2d4);
    if (cVar16 == '\0') {
      if (bVar7) {
        uVar46 = 0x27b;
        if (*(char *)(lVar12 + 0x71) != '\0') {
          uVar46 = 0x27d;
        }
        cVar16 = FUN_1803eb460(uVar46,1,local_2d4);
        if (cVar16 != '\0') goto LAB_18041dc67;
      }
      bVar7 = false;
    }
    else {
LAB_18041dc67:
      bVar7 = true;
    }
    cVar16 = FUN_1803e9470(0x201,1,0);
    if ((cVar16 != '\0') || (cVar16 = FUN_1803e9470(0x202,1,0), cVar16 != '\0')) {
      if (local_2cc == '\0') {
      }
      goto LAB_18041dca2;
    }
    cVar16 = FUN_1803e9470(0x203,1,0);
    uVar38 = local_2e0;
    if ((cVar16 == '\0') || (local_2e0 == 0)) {
      cVar16 = FUN_1803e9470(0x204,1,0);
      if ((cVar16 != '\0') && (uVar38 != 0)) {
        if (*(char *)(lVar12 + 300) == '\0') goto LAB_18041dca2;
        fVar53 = *(float *)(local_290 + 0x9c) + *(float *)(lVar12 + 0x1200);
        fVar52 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xa4);
        if (fVar52 <= fVar53) {
          fVar53 = fVar52;
        }
        *(float *)(local_290 + 0xac) = fVar53;
        *(undefined4 *)(local_290 + 0xb4) = 0;
        *(undefined4 *)(local_290 + 0xbc) = 0;
        local_2e7 = 0;
        goto LAB_18041dcb4;
      }
      cVar16 = FUN_1803e9470(0x205,1,0);
      if ((cVar16 != '\0') && (uVar38 != 0)) {
        FUN_18041b9d0(lVar45);
        fVar50 = fVar50 - (float)(int)local_270._0_4_ * *(float *)(lVar12 + 0x1200);
LAB_18041dcaa:
        local_2e7 = 0;
        goto LAB_18041dcb4;
      }
      cVar16 = FUN_1803e9470(0x206,1,0);
      if ((cVar16 != '\0') && (uVar38 != 0)) {
        FUN_18041b9d0(lVar45);
        fVar50 = fVar50 + (float)(int)local_270._0_4_ * *(float *)(lVar12 + 0x1200);
        goto LAB_18041dcaa;
      }
      cVar16 = FUN_1803e9470(0x207,1,0);
      if ((cVar16 != '\0') || (cVar16 = FUN_1803e9470(0x208,1,0), cVar16 != '\0')) {
LAB_18041dca2:
        FUN_18041b9d0(lVar45);
        goto LAB_18041dcaa;
      }
      cVar16 = FUN_1803e9470(0x20a,1,0);
      bVar17 = local_2e2;
      if ((cVar16 != '\0') && (local_2dc == 0 && local_2e2 == 0)) {
        if ((*(int *)(*(longlong *)(lVar45 + 8) + 4) == *(int *)(*(longlong *)(lVar45 + 8) + 8)) &&
           (local_2e8 != '\0')) {
          FUN_18041b9d0(lVar45,0x60000d);
        }
        goto LAB_18041dca2;
      }
      cVar16 = FUN_1803e9470(0x20b,1,0);
      bVar43 = local_2e5;
      if ((cVar16 != '\0') && (local_2dc == 0)) {
        if (*(int *)(*(longlong *)(lVar45 + 8) + 4) == *(int *)(*(longlong *)(lVar45 + 8) + 8)) {
          if (local_2e8 == '\0') {
            if ((((local_2b8 == '\0') || (*(char *)(lVar12 + 300) == '\0')) ||
                (*(char *)(lVar12 + 0x12e) != '\0')) || (*(char *)(lVar12 + 0x12f) != '\0'))
            goto LAB_18041dca2;
            uVar33 = 0x600004;
          }
          else {
            uVar33 = 0x60000c;
          }
          FUN_18041b9d0(lVar45,uVar33);
        }
        goto LAB_18041dca2;
      }
      if (!((local_2b7 != '\0' || local_2b6 != 0) || (bVar8 || bVar9))) {
        if (bVar7) {
          if ((local_2d0 & 0x80) == 0) {
            local_2a8 = (int *)CONCAT71(local_2a8._1_7_,1);
            local_2e6 = '\0';
            local_2e5 = 0;
            bVar7 = true;
            local_2e3 = '\x01';
            local_2e8 = 0;
            local_2e7 = 0;
          }
          else if (**(char **)(lVar45 + 0x30) == '\0') {
            local_2a8 = (int *)CONCAT71(local_2a8._1_7_,1);
            local_2e6 = '\0';
            local_2e5 = 0;
            bVar7 = false;
            local_2e3 = '\0';
            local_2e8 = 0;
            local_2e7 = 0;
          }
          else {
            bVar7 = true;
            local_2e3 = '\x01';
            local_2e8 = 0;
            local_2e7 = 0;
          }
          goto LAB_18041dcc2;
        }
        if (local_2b5 != '\0' || local_2b4 != '\0') {
          FUN_18041b9d0(lVar45);
          (*(undefined4 **)(lVar45 + 8))[2] = **(undefined4 **)(lVar45 + 8);
          *(undefined4 *)(*(longlong *)(lVar45 + 8) + 4) =
               *(undefined4 *)(*(longlong *)(lVar45 + 8) + 8);
          goto LAB_18041dcaa;
        }
        if (local_288 != '\0') {
          *(undefined4 *)(*(longlong *)(lVar45 + 8) + 4) = 0;
          *(undefined4 *)(*(longlong *)(lVar45 + 8) + 8) = *(undefined4 *)(lVar45 + 0x18);
          **(undefined4 **)(lVar45 + 8) = (*(undefined4 **)(lVar45 + 8))[2];
          *(undefined1 *)(*(longlong *)(lVar45 + 8) + 0x16) = 0;
          *(undefined1 *)(lVar45 + 0x70) = 1;
          goto LAB_18041dcaa;
        }
        if (bVar17 == 0 && local_2b3 == '\0') {
          if (((local_2b2 != '\0') && (*(code **)(DAT_180ca0a50 + 0xc10) != (code *)0x0)) &&
             (pcVar27 = (char *)(**(code **)(DAT_180ca0a50 + 0xc10))(), pcVar27 != (char *)0x0)) {
            sVar25 = strlen(pcVar27);
            plVar44 = (longlong *)(pcVar27 + (int)sVar25);
            local_260 = (undefined4 *)0x0;
            local_258 = 0;
            local_230 = plVar44;
            FUN_1803f6920(&local_260);
            cVar16 = *pcVar27;
            iVar21 = local_260._4_4_;
            iVar20 = (int)(float)local_260;
            lVar26 = local_258;
            while (cVar16 != '\0') {
              iVar36 = FUN_1803d7c80(&local_270,pcVar27,plVar44);
              pcVar27 = pcVar27 + iVar36;
              local_320 = (char *******)CONCAT71(local_320._1_7_,1);
              cVar16 = FUN_18041bd70(lVar12,lVar45,&local_270);
              if (cVar16 != '\0') {
                iVar36 = FUN_1803d7e10(&local_100);
                *(undefined1 *)((longlong)&local_100 + (longlong)iVar36) = 0;
                sVar25 = strlen((char *)&local_100);
                iVar20 = iVar20 + (int)sVar25;
                if (iVar21 < iVar20) {
                  if (iVar21 == 0) {
                    iVar21 = 8;
                  }
                  else {
                    iVar21 = iVar21 / 2 + iVar21;
                  }
                  iVar36 = iVar20;
                  if (iVar20 < iVar21) {
                    iVar36 = iVar21;
                  }
                  FUN_1803f6920(&local_260,iVar36);
                  lVar26 = local_258;
                  iVar21 = local_260._4_4_;
                }
                local_260 = (undefined4 *)CONCAT44(local_260._4_4_,iVar20);
                FUN_180540530(((longlong)iVar20 - (longlong)(int)sVar25) + lVar26);
                plVar44 = local_230;
              }
              cVar16 = *pcVar27;
            }
            if (0 < iVar20) {
              if (iVar20 == iVar21) {
                if (iVar21 == 0) {
                  iVar21 = 8;
                }
                else {
                  iVar21 = iVar21 / 2 + iVar21;
                }
                iVar36 = iVar20 + 1;
                if (iVar20 + 1 < iVar21) {
                  iVar36 = iVar21;
                }
                FUN_1803f6920(&local_260,iVar36);
                lVar26 = local_258;
                iVar20 = (int)(float)local_260;
              }
              *(undefined1 *)(iVar20 + lVar26) = 0;
              local_260 = (undefined4 *)CONCAT44(local_260._4_4_,iVar20 + 1);
              piVar3 = *(int **)(lVar45 + 8);
              iVar21 = *(int *)(lVar45 + 0x18);
              iVar20 = piVar3[2];
              iVar36 = piVar3[1];
              if (iVar36 != iVar20) {
                if (iVar21 < iVar36) {
                  piVar3[1] = iVar21;
                  iVar36 = iVar21;
                }
                if (iVar21 < iVar20) {
                  piVar3[2] = iVar21;
                  iVar20 = iVar21;
                }
                if (iVar36 == iVar20) {
                  *piVar3 = iVar36;
                }
              }
              if (iVar21 < *piVar3) {
                *piVar3 = iVar21;
              }
              FUN_18041a400(lVar45,piVar3);
              iVar21 = FUN_180419c70(lVar45,*piVar3,lVar26);
              if (iVar21 != 0) {
                FUN_18041b260(piVar3 + 8,*piVar3,0);
                *piVar3 = *piVar3 + iVar21;
                *(undefined1 *)((longlong)piVar3 + 0x16) = 0;
              }
              *(undefined1 *)(lVar45 + 0x70) = 1;
            }
            lVar41 = DAT_180ca0a50;
            if (lVar26 != 0) {
              if (DAT_180ca0a50 != 0) {
                piVar3 = (int *)(DAT_180ca0a50 + 4);
                piVar35 = (int *)(DAT_180ca0a50 + 0x29c0 +
                                 (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
                if (*piVar35 != *piVar3) {
                  iVar21 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
                  sVar30 = (short)iVar21 + (short)(iVar21 / 6) * -6;
                  *(short *)(DAT_180ca0a50 + 0x29bc) = sVar30;
                  piVar35 = (int *)(lVar41 + 0x29c0 + (longlong)sVar30 * 8);
                  *piVar35 = *piVar3;
                  *(undefined4 *)(lVar41 + 0x29c4 + (longlong)sVar30 * 8) = 0;
                }
                *(short *)((longlong)piVar35 + 6) = *(short *)((longlong)piVar35 + 6) + 1;
                *(int *)(lVar41 + 0x29b8) = *(int *)(lVar41 + 0x29b8) + 1;
              }
              thunk_FUN_1805277b0(lVar26);
            }
          }
          goto LAB_18041dcaa;
        }
        local_2e8 = 0;
        local_2e7 = 0;
        if (*(longlong *)(lVar12 + 0xc18) != 0) {
          iVar21 = *(int *)(*(longlong *)(lVar45 + 8) + 8);
          iVar20 = *(int *)(*(longlong *)(lVar45 + 8) + 4);
          if (iVar20 == iVar21) {
            iVar36 = *(int *)(lVar45 + 0x18);
            iVar20 = 0;
          }
          else if (iVar20 < iVar21) {
            iVar36 = iVar21;
          }
          else {
            iVar36 = iVar20;
            iVar20 = iVar21;
          }
          iVar36 = iVar36 - iVar20;
          FUN_1803f6920(lVar12 + 11000,iVar36 + 1);
          FUN_180540530(*(undefined8 *)(lVar12 + 0x2b00),
                        (longlong)iVar20 + *(longlong *)(lVar45 + 0x20),(longlong)iVar36);
          *(undefined1 *)((longlong)iVar36 + *(longlong *)(lVar12 + 0x2b00)) = 0;
          if (*(code **)(DAT_180ca0a50 + 0xc18) != (code *)0x0) {
            (**(code **)(DAT_180ca0a50 + 0xc18))();
          }
        }
        if (bVar17 != 0) {
          lVar26 = *(longlong *)(lVar45 + 8);
          if (*(int *)(lVar26 + 4) == *(int *)(lVar26 + 8)) {
            *(undefined4 *)(lVar26 + 4) = 0;
            *(undefined4 *)(*(longlong *)(lVar45 + 8) + 8) = *(undefined4 *)(lVar45 + 0x18);
            **(undefined4 **)(lVar45 + 8) = (*(undefined4 **)(lVar45 + 8))[2];
            *(undefined1 *)(*(longlong *)(lVar45 + 8) + 0x16) = 0;
          }
          *(undefined1 *)(lVar45 + 0x70) = 1;
          lVar26 = *(longlong *)(lVar45 + 8);
          if (*(int *)(lVar26 + 4) != *(int *)(lVar26 + 8)) {
            FUN_18041a400(lVar45);
            *(undefined1 *)(lVar26 + 0x16) = 0;
          }
        }
        goto LAB_18041dcba;
      }
      if (((uVar38 != 0) && (!bVar9)) &&
         (((bVar8 || ((local_2b7 != '\0' && ((local_2d0 & 0x100) == 0)))) ||
          ((local_2b6 != 0 && ((local_2d0 & 0x100) != 0)))))) {
        if (local_2dc == 0) {
          local_100 = (char *)CONCAT44(local_100._4_4_,10);
          local_320 = (char *******)((ulonglong)local_320 & 0xffffffffffffff00);
          cVar16 = FUN_18041bd70(lVar12,lVar45,&local_100);
          if (cVar16 != '\0') {
            FUN_18041ba50(lVar45);
          }
        }
        goto LAB_18041dcaa;
      }
      local_2a8 = (int *)CONCAT71(local_2a8._1_7_,1);
      local_2e7 = 1;
      if (((*(char *)(lVar12 + 0x7b) == '\0') || (uVar38 != 0)) || (local_2b6 != 0))
      goto LAB_18041dcb4;
      local_2e8 = local_2b6;
      bVar7 = false;
      if (!bVar8) {
        *(undefined4 *)(*(longlong *)(lVar45 + 8) + 4) = 0;
        *(undefined4 *)(*(longlong *)(lVar45 + 8) + 8) = *(undefined4 *)(lVar45 + 0x18);
        **(undefined4 **)(lVar45 + 8) = (*(undefined4 **)(lVar45 + 8))[2];
        *(undefined1 *)(*(longlong *)(lVar45 + 8) + 0x16) = 0;
        *(uint *)(lVar12 + 0x262c) = local_2d4;
      }
    }
    else {
      if (*(char *)(lVar12 + 300) == '\0') goto LAB_18041dca2;
      fVar52 = *(float *)(local_290 + 0x9c) - *(float *)(lVar12 + 0x1200);
      if (fVar52 <= 0.0) {
        fVar52 = 0.0;
      }
      *(float *)(local_290 + 0xac) = fVar52;
      *(undefined4 *)(local_290 + 0xb4) = 0;
      *(undefined4 *)(local_290 + 0xbc) = 0;
      local_2e7 = 0;
LAB_18041dcb4:
      local_2e8 = 0;
      bVar43 = local_2e5;
LAB_18041dcba:
      bVar7 = false;
      local_2e5 = bVar43;
    }
LAB_18041dcc2:
    if ((*(int *)(*(longlong *)(lVar45 + 8) + 4) != *(int *)(*(longlong *)(lVar45 + 8) + 8)) &&
       (local_2e6 != '\0')) {
      local_2e5 = local_2e5 | 1;
    }
  }
  else {
    local_2e7 = 0;
    local_2e8 = 0;
  }
  uVar19 = local_2d0;
  uVar38 = local_2d4;
  pcVar27 = (char *)0x0;
  iVar21 = 0;
  if (*(uint *)(lVar12 + 0x1578) == local_2d4) {
    if ((bVar7) && (local_2dc == 0)) {
      if ((char)local_2d0 < '\0') {
        local_2e8 = 1;
        puVar2 = *(undefined4 **)(lVar45 + 8);
        local_328 = (char *******)((ulonglong)local_328 & 0xffffffff00000000);
        FUN_18041b7d0(lVar45,puVar2,0);
        iVar20 = *(int *)(lVar45 + 0x18);
        **(undefined1 **)(lVar45 + 0x30) = (*(undefined1 **)(lVar45 + 0x30))[iVar20];
        *(undefined2 *)(lVar45 + 0x73) = 0x101;
        *(int *)(lVar45 + 0x18) = *(int *)(lVar45 + 0x18) - iVar20;
        *(undefined8 *)(puVar2 + 1) = 0;
        *puVar2 = 0;
        pcVar27 = "";
      }
      else {
        pcVar4 = *(char **)(lVar45 + 0x40);
        iVar20 = strcmp(*(char **)(lVar45 + 0x30),pcVar4);
        if (iVar20 != 0) {
          iVar21 = *(int *)(lVar45 + 0x38) + -1;
          local_2e8 = 1;
          FUN_18041b8a0(lVar45,*(undefined8 *)(lVar45 + 8),pcVar4);
          pcVar27 = pcVar4;
        }
      }
    }
    if ((uVar19 & 0x9c0000) != 0) {
      uVar46 = 0x40000;
      if (((uVar19 & 0x40000) == 0) || (cVar16 = FUN_1803eb460(0x200,0,uVar38), cVar16 == '\0')) {
        if ((uVar19 >> 0x13 & 1) == 0) {
LAB_18041e681:
          local_294 = 0.0;
          uVar46 = 0x800000;
          if (((uVar19 & 0x800000) == 0) || (*(char *)(lVar45 + 0x74) == '\0')) {
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_18041e895;
            uVar46 = 0x100000;
          }
        }
        else {
          cVar16 = FUN_1803e9470(0x203,1,0);
          if (cVar16 == '\0') {
            cVar16 = FUN_1803e9470(0x204,1,0);
            if (cVar16 == '\0') goto LAB_18041e681;
            uVar46 = 0x80000;
            local_294 = 7.2307e-43;
          }
          else {
            uVar46 = 0x80000;
            local_294 = 7.21669e-43;
          }
        }
      }
      local_1ac = 0;
      local_1a8 = 0;
      local_1a5 = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      local_19d = 0;
      iStack_198 = 0;
      uStack_194 = 0;
      iStack_190 = 0;
      iStack_18c = 0;
      iStack_188 = 0;
      uStack_184 = 0;
      local_181 = 0;
      local_1c8 = lVar12;
      local_1b0 = uVar38;
      local_1bc = uVar19;
      if ((*(int *)(lVar12 + 0x1578) != *(int *)(lVar45 + 0x14)) ||
         (local_1a6 = 1, *(char *)(lVar12 + 0x1584) == '\0')) {
        local_1a6 = 0;
      }
      local_1b8 = 0;
      pppppppcVar28 = local_2c0;
      if (local_2dc == 0) {
        pppppppcVar28 = *(char ********)(lVar45 + 0x30);
      }
      iVar36 = *(int *)(lVar45 + 0x18) + 1;
      iVar20 = *(int *)(lVar45 + 0x4c);
      local_1c0 = uVar46;
      if (iVar20 < iVar36) {
        if (iVar20 == 0) {
          iVar20 = 8;
        }
        else {
          iVar20 = iVar20 / 2 + iVar20;
        }
        iVar6 = iVar36;
        if (iVar36 < iVar20) {
          iVar6 = iVar20;
        }
        FUN_1803f6920(lVar45 + 0x48,iVar6);
      }
      *(int *)(lVar45 + 0x48) = iVar36;
      FUN_180540530(*(undefined8 *)(lVar45 + 0x50),pppppppcVar28,
                    (longlong)(*(int *)(lVar45 + 0x18) + 1));
      local_1ac = local_294;
      uStack_1a0 = SUB83(pppppppcVar28,0);
      local_19d = (undefined5)((ulonglong)pppppppcVar28 >> 0x18);
      iStack_198 = *(int *)(lVar45 + 0x18);
      uStack_194 = *(undefined4 *)(lVar45 + 0x58);
      local_1a5 = '\0';
      piVar3 = *(int **)(lVar45 + 8);
      iStack_190 = *piVar3;
      iStack_18c = piVar3[1];
      iStack_188 = piVar3[2];
      (*(code *)0x0)(&local_1c8);
      if ((local_1a5 != '\0') || (iStack_190 != **(int **)(lVar45 + 8))) {
        *(undefined1 *)(lVar45 + 0x70) = 1;
      }
      if (iStack_190 < 0) {
        iVar20 = 0;
      }
      else {
        iVar20 = iStack_190;
        if (iStack_198 < iStack_190) {
          iVar20 = iStack_198;
        }
      }
      **(int **)(lVar45 + 8) = iVar20;
      if (iStack_18c < 0) {
        iVar20 = 0;
      }
      else {
        iVar20 = iStack_18c;
        if (iStack_198 < iStack_18c) {
          iVar20 = iStack_198;
        }
      }
      *(int *)(*(longlong *)(lVar45 + 8) + 4) = iVar20;
      if (iStack_188 < 0) {
        iVar20 = 0;
      }
      else {
        iVar20 = iStack_188;
        if (iStack_198 < iStack_188) {
          iVar20 = iStack_198;
        }
      }
      *(int *)(*(longlong *)(lVar45 + 8) + 8) = iVar20;
      if (local_1a5 != '\0') {
        local_328 = (char *******)CONCAT44(local_328._4_4_,iStack_198);
        FUN_18041c030(lVar45,*(undefined8 *)(lVar45 + 0x50),*(int *)(lVar45 + 0x48) + -1);
        *(int *)(lVar45 + 0x18) = iStack_198;
        *(undefined2 *)(lVar45 + 0x73) = 0x101;
        *(undefined4 *)(lVar45 + 0x6c) = 0xbe99999a;
      }
    }
LAB_18041e895:
    uVar38 = local_2dc;
    bVar17 = local_2e7;
    if (local_2dc != 0) goto LAB_18041e8db;
    if ((*(byte *)(lVar12 + 0x1eec) & 0x80) != 0) {
      pcVar4 = *(char **)(lVar45 + 0x20);
      iVar20 = strcmp(pcVar4,(char *)local_2c0);
      if ((iVar20 != 0) ||
         ((local_298 != 0.0 && ((*(char *)(lVar45 + 0x74) != '\0' || (local_2e7 != 0)))))) {
        iVar21 = *(int *)(lVar45 + 0x18);
        local_2e8 = 1;
        pcVar27 = pcVar4;
      }
      goto LAB_18041e8db;
    }
    cVar16 = (char)local_2a8;
    if ((local_2e7 == 0 && cVar16 == '\0') && (local_2e3 == '\0')) {
LAB_18041e94e:
      local_2e8 = 0;
      pcVar27 = (char *)0x0;
      iVar21 = 0;
    }
    else {
      pcVar27 = *(char **)(lVar45 + 0x20);
      iVar21 = strcmp(pcVar27,(char *)local_2c0);
      if ((iVar21 == 0) && ((local_298 == 0.0 || (bVar17 == 0)))) goto LAB_18041e94e;
      local_2e8 = 1;
      iVar21 = *(int *)(lVar45 + 0x18);
    }
  }
  else {
LAB_18041e8db:
    cVar16 = (char)local_2a8;
    uVar38 = local_2dc;
  }
  uVar19 = local_2d4;
  if (*(uint *)(lVar12 + 0x25a8) == local_2d4) {
    if (*(uint *)(lVar12 + 0x1578) == local_2d4) {
      uVar5 = local_2d0 & 0x8000000;
joined_r0x00018041e990:
      if (uVar5 != 0) {
LAB_18041e992:
        if (uVar38 == 0) {
          pcVar4 = *(char **)(lVar12 + 0x25b8);
          iVar20 = strcmp(pcVar4,(char *)local_2c0);
          if (iVar20 != 0) {
            iVar21 = *(int *)(lVar12 + 0x25b0) + -1;
            local_2e8 = 1;
            pcVar27 = pcVar4;
          }
        }
      }
    }
    else {
      if ((*(uint *)(DAT_180ca0a50 + 0x1ef0) & 0x20) != 0) {
        uVar5 = *(uint *)(DAT_180ca0a50 + 0x1ef0) >> 6 & 1;
        goto joined_r0x00018041e990;
      }
      if (((*(int *)(DAT_180ca0a50 + 0x15ac) == *(int *)(DAT_180ca0a50 + 0x1ee8)) &&
          (*(int *)(DAT_180ca0a50 + 0x1ee8) != 0)) &&
         (*(int *)(DAT_180ca0a50 + 4) <= *(int *)(DAT_180ca0a50 + 0x15b0))) goto LAB_18041e992;
    }
    *(undefined4 *)(lVar12 + 0x25a8) = 0;
  }
  if (pcVar27 != (char *)0x0) {
    if ((local_2d0 >> 0x16 & 1) == 0) {
    }
    else {
      uStack_140 = 0;
      local_138 = 0;
      local_178 = lVar12;
      uStack_160 = (ulonglong)uVar19;
      uStack_170 = CONCAT44(local_2d0,0x400000);
      if (((lVar45 == 0) || (*(int *)(lVar12 + 0x1578) != *(int *)(lVar45 + 0x14))) ||
         (local_158 = 0x10000, *(char *)(lVar12 + 0x1584) == '\0')) {
        local_158 = 0;
      }
      pppppppcStack_150 = local_2c0;
      fVar52 = (float)(iVar21 + 1U);
      if ((int)(iVar21 + 1U) <= (int)local_2c4) {
        fVar52 = local_2c4;
      }
      local_148 = CONCAT44(fVar52,iVar21);
      local_168 = 0;
      (*(code *)0x0)(&local_178);
      local_2c0 = pppppppcStack_150;
      iVar21 = local_148._4_4_ - 1;
      local_2c4 = (float)local_148._4_4_;
      if ((int)local_148 < (int)(local_148._4_4_ - 1)) {
        iVar21 = (int)local_148;
      }
    }
    pppppppcVar28 = local_2c0;
    if ((int)(iVar21 + 1U) < (int)local_2c4) {
      local_2c4 = (float)(iVar21 + 1U);
    }
    if (local_2c4 != 0.0) {
      if (1 < (uint)local_2c4) {
        strncpy((char *)local_2c0,pcVar27,(ulonglong)((int)local_2c4 - 1));
      }
      *(undefined1 *)((longlong)pppppppcVar28 + (longlong)(int)local_2c4 + -1) = 0;
    }
  }
  if ((*(uint *)(lVar12 + 0x1578) == uVar19) && (cVar16 != '\0')) {
    *(undefined1 *)(lVar45 + 0x73) = 0;
    FUN_1803dd660(0,0);
  }
  if (local_2e0 == 0) {
    FUN_1803d9fd0(&local_228,uVar19,0,fVar57);
    local_250 = *(float *)(DAT_180ca0a50 + 0xe50);
    uStack_24c = *(undefined8 *)(DAT_180ca0a50 + 0xe54);
    uStack_244 = CONCAT44((int)((ulonglong)uStack_244 >> 0x20),
                          *(float *)(DAT_180ca0a50 + 0xe5c) * *(float *)(DAT_180ca0a50 + 0xc9c));
    uVar46 = FUN_1803d7f30(&local_250);
    local_328 = (char *******)CONCAT44(local_328._4_4_,*(undefined4 *)(lVar12 + 0xce4));
    FUN_1803d9cb0(CONCAT44(fStack_224,local_228),CONCAT44(fStack_21c,local_220),uVar46);
    local_2a0 = fVar56 + *(float *)(lVar12 + 0xcdc);
    local_29c = fStack_224 + *(float *)(lVar12 + 0xce0);
    local_214 = fStack_224;
    fVar49 = fVar56 + fVar49;
    fVar57 = fVar22 + fStack_224;
  }
  else {
    local_29c = *(float *)(local_290 + 0x11c);
    local_2a0 = *(float *)(local_290 + 0x118);
    fVar49 = fVar56 + fVar49;
    if (fVar56 <= *(float *)(local_290 + 0x268)) {
      fVar56 = *(float *)(local_290 + 0x268);
    }
    local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,fVar56);
    local_214 = fStack_224;
    if (fStack_224 <= *(float *)(local_290 + 0x26c)) {
      local_214 = *(float *)(local_290 + 0x26c);
    }
    if (*(float *)(local_290 + 0x270) <= fVar49) {
      fVar49 = *(float *)(local_290 + 0x270);
    }
    fVar57 = fVar22 + fStack_224;
    if (*(float *)(local_290 + 0x274) <= fVar22 + fStack_224) {
      fVar57 = *(float *)(local_290 + 0x274);
    }
  }
  fVar52 = local_214;
  pppppppcVar28 = local_278;
  fVar22 = local_298;
  local_208 = (uint *)CONCAT44(local_208._4_4_,fVar49);
  if (local_2d8 == '\0') {
    _Str = local_2c0;
  }
  else {
    _Str = *(char ********)(lVar45 + 0x30);
  }
  if (local_278 == (char *******)0x0) {
LAB_18041ec6b:
    cVar16 = '\0';
  }
  else {
    pppppppcVar39 = local_2c0;
    if (local_2d8 != '\0') {
      pppppppcVar39 = *(char ********)(lVar45 + 0x30);
    }
    if (*(char *)pppppppcVar39 != '\0' || local_298 != 0.0) goto LAB_18041ec6b;
    cVar16 = '\x01';
  }
  local_294 = local_214;
  local_218 = fVar56;
  local_210 = fVar49;
  local_20c = fVar57;
  if (cVar16 != local_2e4) {
    if ((local_284 == 0) || (local_2e4 != '\0')) {
      local_2e4 = cVar16;
      if (local_284 == 0) goto LAB_18041ecad;
    }
    else {
      FUN_18041bca0();
      local_2e4 = cVar16;
    }
    if (local_2e4 == '\0') {
      FUN_18041bb80();
    }
  }
LAB_18041ecad:
  if (((fVar22 == 0.0) || (uVar38 = *(uint *)(lVar12 + 0x1578), uVar38 == uVar19)) ||
     (pcVar27 != (char *)0x0)) {
    local_2d8 = '\0';
    uVar38 = *(uint *)(lVar12 + 0x1578);
LAB_18041ecf6:
    if (local_2e4 != '\0') {
      sVar25 = strlen((char *)pppppppcVar28);
      pppppppcVar37 = (char *******)((longlong)pppppppcVar28 + sVar25);
      _Str = pppppppcVar28;
      goto LAB_18041ed4a;
    }
    if ((local_2e6 != '\0' || local_2e5 != 0) || (uVar38 == uVar19)) {
      pppppppcVar37 = (char *******)((longlong)_Str + (longlong)*(int *)(lVar45 + 0x18));
      goto LAB_18041ed4a;
    }
    if ((local_2e0 == 0) || (local_280 != 0.0)) {
      sVar25 = strlen((char *)_Str);
      pppppppcVar37 = (char *******)((longlong)_Str + sVar25);
      goto LAB_18041ed4a;
    }
    local_2c0 = (char *******)0x0;
LAB_18041ed64:
    pppppppcVar37 = local_2c0;
    fVar22 = (float)(int)((fVar52 - local_29c) / *(float *)(lVar12 + 0x1200));
    fVar56 = 0.0;
    if (-1 < (int)fVar22) {
      fVar56 = fVar22;
    }
    local_2c4 = fVar56;
    fVar22 = (float)FUN_18053ef70((fVar57 - local_29c) / *(float *)(lVar12 + 0x1200));
    if ((int)fVar56 <= (int)fVar22) {
      fVar56 = (float)(int)fVar22;
    }
  }
  else {
    local_2d8 = '\x01';
    pppppppcVar39 = *(char ********)(lVar12 + 0x1550);
    if (pppppppcVar39 == (char *******)0x0) goto LAB_18041ecf6;
    sVar25 = strlen((char *)pppppppcVar39);
    pppppppcVar37 = (char *******)((longlong)pppppppcVar39 + sVar25);
    local_2e5 = 0;
    local_2e6 = '\0';
    _Str = pppppppcVar39;
LAB_18041ed4a:
    local_2c4 = 0.0;
    fVar56 = 1.4013e-45;
    local_2c0 = pppppppcVar37;
    if (local_2e0 != 0) goto LAB_18041ed64;
  }
  iVar21 = *(int *)(lVar12 + 0x2594);
  if (iVar21 < 0) {
    iVar21 = iVar21 + iVar21 / 2;
    iVar20 = 0;
    if (0 < iVar21) {
      iVar20 = iVar21;
    }
    FUN_18007e1d0(lVar12 + 0x2590,iVar20);
  }
  *(undefined4 *)(lVar12 + 0x2590) = 0;
  local_280 = 1.4013e-45;
  if (local_2e0 == 0) {
    fVar22 = 1.4013e-45;
  }
  else {
    if ((lVar45 == 0) ||
       (((*(char *)(lVar45 + 0x70) == '\0' || (local_2e6 == '\0')) &&
        ((*(char *)(lVar45 + 0x71) == '\0' || ((local_2e6 == '\0' && (local_2e5 == 0)))))))) {
      iVar21 = (int)fVar56 + 1;
    }
    else {
      iVar21 = 0x7fffffff;
    }
    local_318 = (char *******)&local_2c0;
    if (pppppppcVar37 != (char *******)0x0) {
      local_318 = (char *******)0x0;
    }
    local_320 = (char *******)CONCAT44(local_320._4_4_,iVar21);
    local_328 = (char *******)CONCAT44(local_328._4_4_,fVar23);
    fVar22 = (float)FUN_18041c280(local_2d0,(undefined4 *)(lVar12 + 0x2590),_Str,pppppppcVar37);
    pppppppcVar37 = local_2c0;
  }
  *(int *)(lVar12 + 0x25a0) = (int)pppppppcVar37 - (int)_Str;
  fVar23 = fVar22;
  if ((int)fVar56 < (int)fVar22) {
    fVar23 = fVar56;
  }
  fVar56 = *(float *)(lVar12 + 0x1200) * (float)(int)fVar22;
  local_298 = fVar56;
  local_280 = fVar23;
  if ((local_2e6 == '\0') || (lVar45 == 0)) {
    fVar53 = 0.0;
    local_270 = (int *)((ulonglong)local_270 & 0xffffffff00000000);
    fVar55 = 0.0;
  }
  else {
    iVar21 = **(int **)(lVar45 + 8);
    local_318 = (char *******)((longlong)_Str + (longlong)iVar21);
    piVar3 = *(int **)(lVar12 + 0x2598);
    iVar20 = *(int *)(lVar12 + 0x2590);
    uVar24 = (longlong)iVar20;
    piVar35 = piVar3;
    if (iVar20 != 0) {
      do {
        uVar34 = uVar24 >> 1;
        if (piVar35[uVar34] < iVar21) {
          piVar35 = piVar35 + uVar34 + 1;
          uVar34 = uVar24 + (-1 - uVar34);
        }
        uVar24 = uVar34;
      } while (uVar34 != 0);
    }
    if (piVar3 < piVar35) {
      if (((piVar35 == piVar3 + iVar20) || (*piVar35 != iVar21)) ||
         ((0.0 < *(float *)(lVar45 + 0x68) &&
          (((*(char *)(lVar45 + 0x77) == '\x01' && (*(char *)((longlong)local_318 + -1) != '\n')) &&
           (*(char *)((longlong)local_318 + -1) != '\0')))))) {
        piVar35 = piVar35 + -1;
        goto LAB_18041ef45;
      }
LAB_18041ef4b:
      iVar20 = (int)((longlong)piVar35 - (longlong)piVar3 >> 2);
    }
    else {
LAB_18041ef45:
      if (piVar35 != piVar3) goto LAB_18041ef4b;
      iVar20 = 0;
    }
    if (*(int *)(lVar12 + 0x2590) == 0) {
      iVar36 = 0;
    }
    else {
      iVar36 = piVar3[iVar20];
    }
    local_320 = (char *******)((longlong)_Str + (longlong)iVar36);
    local_2f8 = 2;
    local_308 = 0;
    local_328 = (char *******)CONCAT44(local_328._4_4_,*(undefined4 *)(lVar12 + 0x2578));
    local_310 = pppppppcVar37;
    FUN_18040a2f0(&local_278,*(undefined8 *)(lVar12 + 0x11f0),(longlong)iVar21,DAT_1808acd08);
    local_270 = (int *)CONCAT44(local_270._4_4_,(float)local_278);
    fVar55 = (float)(iVar20 + 1) * *(float *)(lVar12 + 0x1200);
    fVar53 = (float)local_278;
  }
  lVar26 = DAT_180ca0a50;
  local_100 = (char *)CONCAT44(local_100._4_4_,fVar55);
  if (local_2d8 == '\0') {
    uVar24 = (ulonglong)(local_2e4 != '\0');
  }
  else {
    uVar24 = 1;
  }
  pfVar1 = (float *)(DAT_180ca0a50 + 0xc90 + (uVar24 + 0x15) * 0x10);
  local_250 = *pfVar1;
  uStack_24c = *(undefined8 *)(pfVar1 + 1);
  uStack_244._4_4_ = (undefined4)((ulonglong)uStack_244 >> 0x20);
  uStack_244._0_4_ = pfVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
  lVar41 = lVar12;
  cVar16 = local_2e6;
  uVar46 = FUN_1803d7f30(&local_250);
  local_2a8 = (int *)CONCAT44(local_2a8._4_4_,uVar46);
  if ((cVar16 != '\0') || (cVar42 = '\0', local_2e5 != 0)) {
    *(float *)(lVar45 + 100) = fVar22;
    fVar54 = fVar50;
    if ((cVar16 != '\0') && (*(char *)(lVar45 + 0x70) != '\0')) {
      if ((local_2d0 & 0x8000) == 0) {
        if (*(float *)(lVar45 + 0x5c) <= fVar53) {
          fVar47 = fVar53 - (local_268 - *(float *)(lVar12 + 0xcdc));
          if (fVar47 < *(float *)(lVar45 + 0x5c)) goto LAB_18041f0e1;
          fVar47 = fVar47 + local_268 * DAT_1808ac140;
        }
        else {
          fVar51 = fVar53 - local_268 * DAT_1808ac140;
          fVar47 = 0.0;
          if (0.0 <= fVar51) {
            fVar47 = fVar51;
          }
        }
        *(float *)(lVar45 + 0x5c) = (float)(int)fVar47;
      }
      else {
        *(undefined4 *)(lVar45 + 0x5c) = 0;
      }
LAB_18041f0e1:
      if (local_2e0 != 0) {
        fVar47 = fVar55 - *(float *)(lVar41 + 0x1200);
        if (fVar47 < fVar50) {
          fVar54 = 0.0;
          if (0.0 <= fVar47) {
            fVar54 = fVar47;
          }
          *(undefined1 *)(lVar45 + 0x70) = 0;
          goto LAB_18041f146;
        }
        fVar47 = *(float *)(lVar12 + 0xce0) + *(float *)(lVar12 + 0xce0);
        if (fVar50 <= fVar55 - (local_200._4_4_ - fVar47)) {
          fVar54 = (fVar55 - local_200._4_4_) + fVar47;
        }
      }
      *(undefined1 *)(lVar45 + 0x70) = 0;
    }
LAB_18041f146:
    if (*(char *)(lVar45 + 0x71) != '\0') {
      if (local_2e0 != 0) {
        fVar54 = (fVar55 - *(float *)(lVar41 + 0x1200)) -
                 (local_200._4_4_ * fVar48 - *(float *)(lVar12 + 0xce0));
      }
      *(undefined1 *)(lVar45 + 0x71) = 0;
      local_2e6 = '\0';
    }
    if (fVar54 != fVar50) {
      if (0.0 <= fVar54) {
        fVar23 = (*(float *)(lVar12 + 0xce0) + *(float *)(lVar12 + 0xce0) + fVar56) -
                 local_200._4_4_;
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        if (fVar54 <= fVar23) {
          fVar23 = fVar54;
        }
      }
      else {
        fVar23 = 0.0;
      }
      local_29c = local_29c + (*(float *)(local_290 + 0x9c) - fVar23);
      *(float *)(local_290 + 0x9c) = fVar23;
      fVar23 = (float)(int)((fVar52 - local_29c) / *(float *)(lVar41 + 0x1200));
      fVar54 = 0.0;
      if (-1 < (int)fVar23) {
        fVar54 = fVar23;
      }
      local_2c4 = fVar54;
      fVar23 = (float)FUN_18053ef70((fVar57 - local_29c) / *(float *)(lVar41 + 0x1200));
      if ((int)fVar54 <= (int)fVar23) {
        fVar54 = (float)(int)fVar23;
      }
      fVar23 = fVar22;
      if ((int)fVar54 < (int)fVar22) {
        fVar23 = fVar54;
      }
      local_280 = fVar23;
    }
    fVar54 = *(float *)(lVar45 + 0x5c);
    cVar42 = local_2e6;
    if (local_2e5 != 0) {
      if (local_2e6 == '\0') {
        fVar22 = DAT_1808ac21c;
      }
      else {
        fVar22 = DAT_1808ac34c;
      }
      local_250 = *(float *)(lVar26 + 0x1120);
      uStack_24c = *(undefined8 *)(lVar26 + 0x1124);
      uStack_244._0_4_ = *(float *)(lVar26 + 0x112c) * fVar22 * *(float *)(lVar26 + 0xc9c);
      uVar46 = FUN_1803d7f30(&local_250);
      uVar38 = local_2e0;
      local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,uVar46);
      if (local_2e0 == 0) {
        fVar22 = DAT_1808acda0;
        fVar50 = DAT_1808ac540;
      }
      else {
        fVar22 = 0.0;
        fVar50 = 0.0;
      }
      piVar3 = *(int **)(lVar12 + 0x11f8);
      if (*piVar3 < 0x21) {
LAB_18041f2d3:
        fVar48 = (float)FUN_1804083d0(piVar3,0x20);
        cVar42 = local_2e6;
      }
      else {
        fVar48 = *(float *)(*(longlong *)(piVar3 + 2) + 0x80);
        if (fVar48 < 0.0) goto LAB_18041f2d3;
      }
      fVar52 = local_294;
      fVar48 = fVar48 * DAT_1808ac1f4;
      iVar20 = *(int *)(*(longlong *)(lVar45 + 8) + 8);
      iVar21 = *(int *)(*(longlong *)(lVar45 + 8) + 4);
      iVar36 = iVar20;
      if (iVar21 < iVar20) {
        iVar36 = iVar21;
      }
      local_230 = (longlong *)(longlong)iVar36;
      if (iVar20 <= iVar21) {
        iVar20 = iVar21;
      }
      pppppppcVar28 = (char *******)((longlong)_Str + (longlong)iVar20);
      local_268 = local_2c4;
      if ((int)local_2c4 < (int)fVar23) {
        local_2c0 = (char *******)((longlong)_Str + 1);
        fVar56 = local_1f0._0_4_;
        do {
          if (*(int *)(lVar12 + 0x2590) == 0) {
            iVar21 = 0;
          }
          else {
            iVar21 = *(int *)((longlong)(int)local_268 * 4 + *(longlong *)(lVar12 + 0x2598));
          }
          local_1d0 = (longlong *)(longlong)iVar21;
          local_200 = (char *******)((longlong)local_1d0 + (longlong)_Str);
          local_2c8 = (float)((int)local_268 + 1);
          if ((int)local_2c8 < *(int *)(lVar12 + 0x2590)) {
            iVar21 = *(int *)(*(longlong *)(lVar12 + 0x2598) + 4 + (longlong)(int)local_268 * 4) +
                     -1;
          }
          else {
            iVar21 = *(int *)(lVar12 + 0x25a0);
          }
          pppppppcVar39 = (char *******)((longlong)_Str + (longlong)iVar21);
          if ((pppppppcVar39 < pppppppcVar37) && (*(char *)pppppppcVar39 != '\n')) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          pppppppcVar39 = local_2c0;
          if (!bVar7) {
            pppppppcVar39 = _Str;
          }
          pppppppcVar39 = (char *******)((longlong)pppppppcVar39 + (longlong)iVar21);
          plVar44 = local_1d0;
          if (local_200 < (char *******)((longlong)local_230 + (longlong)_Str)) {
            plVar44 = local_230;
          }
          pppppppcVar29 = pppppppcVar39;
          if (pppppppcVar28 < pppppppcVar39) {
            pppppppcVar29 = pppppppcVar28;
          }
          if ((char *******)((longlong)_Str + (longlong)plVar44) < pppppppcVar29) {
            local_2f8 = 0;
            local_308 = 0;
            local_328 = (char *******)CONCAT44(local_328._4_4_,DAT_1808acda0);
            local_320 = (char *******)((longlong)_Str + (longlong)plVar44);
            local_318 = pppppppcVar29;
            local_310 = pppppppcVar29;
            FUN_18040a2f0(&local_278,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                          *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08);
            fVar23 = (float)(int)((uint)((float)(int)(float)local_278 < (float)local_278) +
                                 (int)(float)local_278);
            local_278 = (char *******)CONCAT44(local_278._4_4_,fVar23);
            fVar23 = fVar23 + 0.0;
          }
          else {
            fVar23 = 0.0;
          }
          if ((((char *******)((longlong)local_230 + (longlong)_Str) <= pppppppcVar39) &&
              (pppppppcVar39 < pppppppcVar28)) && (!bVar7)) {
            fVar23 = fVar23 + (float)(int)fVar48;
          }
          if (fVar23 != 0.0) {
            if (local_1d0 == plVar44) {
              fVar53 = 0.0;
            }
            else {
              local_2f8 = 0;
              local_308 = 0;
              local_328 = (char *******)CONCAT44(local_328._4_4_,DAT_1808acda0);
              local_320 = local_200;
              local_318 = (char *******)((longlong)_Str + (longlong)plVar44);
              local_310 = (char *******)((longlong)_Str + (longlong)plVar44);
              FUN_18040a2f0(&local_260,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                            *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08);
              fVar53 = (float)(int)((uint)((float)(int)(float)local_260 < (float)local_260) +
                                   (int)(float)local_260);
              local_260 = (undefined4 *)CONCAT44(local_260._4_4_,fVar53);
            }
            fVar53 = (local_2a0 - fVar54) + fVar53;
            fVar55 = (float)(int)local_268 * *(float *)(lVar12 + 0x1200) + (local_29c - 0.0);
            local_250 = fVar53;
            if (fVar53 <= fVar56) {
              local_250 = fVar56;
            }
            fVar47 = fVar55 + fVar22;
            if (fVar47 <= fVar52) {
              fVar47 = fVar52;
            }
            fVar51 = fVar53 + fVar23;
            if (fVar49 <= fVar53 + fVar23) {
              fVar51 = fVar49;
            }
            uStack_24c = CONCAT44(fVar51,fVar47);
            uStack_244._0_4_ = fVar55 + fVar50 + *(float *)(lVar12 + 0x1200);
            if (fVar57 <= (float)uStack_244) {
              uStack_244._0_4_ = fVar57;
            }
            local_320 = (char *******)((ulonglong)local_320 & 0xffffffff00000000);
            local_328 = (char *******)((ulonglong)local_328 & 0xffffffff00000000);
            FUN_1803fe590(*(undefined8 *)(local_290 + 0x2c8),&local_250,(longlong)&uStack_24c + 4,
                          (ulonglong)local_1f8 & 0xffffffff);
          }
          local_268 = local_2c8;
        } while ((int)local_2c8 < (int)local_280);
        lVar45 = local_2b0;
        fVar53 = local_270._0_4_;
        fVar56 = local_298;
        uVar38 = local_2e0;
        fVar23 = local_280;
        cVar42 = local_2e6;
        fVar55 = local_100._0_4_;
      }
      goto LAB_18041f603;
    }
  }
  uVar38 = local_2e0;
LAB_18041f603:
  fVar22 = local_220;
  fVar49 = local_2c4;
  if (((*(uint *)(lVar12 + 0x1578) != local_2d4) && ((local_2d0 & 0x20000) != 0)) &&
     (cVar42 == '\0' && local_2e5 == 0)) {
    if (_Str == (char *******)0x0) {
      fVar50 = 0.0;
    }
    else {
      local_2f8 = 0;
      local_308 = 0;
      local_310 = (char *******)0x0;
      local_318 = (char *******)0x0;
      local_328 = (char *******)CONCAT44(local_328._4_4_,DAT_1808acda0);
      local_320 = _Str;
      FUN_18040a2f0(&local_278,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                    *(undefined4 *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08);
      fVar50 = (float)(int)((uint)((float)(int)(float)local_278 < (float)local_278) +
                           (int)(float)local_278);
    }
    fVar50 = (fVar22 - fVar50) - *(float *)(lVar12 + 0xcdc);
    if (fVar50 <= local_2a0) {
      local_2a0 = fVar50;
    }
  }
  lVar26 = local_290;
  if (((uVar38 != 0) || ((longlong)pppppppcVar37 - (longlong)_Str < 0x200000)) &&
     ((((ulonglong)local_2a8 & 0xff000000) != 0 && ((int)fVar49 < (int)fVar23)))) {
    if ((int)fVar23 < *(int *)(lVar12 + 0x2590)) {
      iVar21 = *(int *)(*(longlong *)(lVar12 + 0x2598) + (longlong)(int)fVar23 * 4) + -1;
    }
    else {
      iVar21 = *(int *)(lVar12 + 0x25a0);
    }
    local_310 = (char *******)((longlong)_Str + (longlong)iVar21);
    if (*(int *)(lVar12 + 0x2590) == 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = *(int *)(*(longlong *)(lVar12 + 0x2598) + (longlong)(int)fVar49 * 4);
    }
    local_278 = (char *******)
                CONCAT44((local_29c - 0.0) + (float)(int)fVar49 * *(float *)(lVar12 + 0x1200),
                         (local_2a0 - fVar54) + 0.0);
    local_318 = (char *******)((longlong)_Str + (longlong)iVar21);
    local_300 = 3;
    local_308 = CONCAT44(local_308._4_4_,local_1d8);
    local_320 = (char *******)&local_218;
    local_328 = (char *******)CONCAT44(local_328._4_4_,(undefined4)local_2a8);
    FUN_18040a900(*(undefined8 *)(lVar12 + 0x11f0),*(undefined8 *)(local_290 + 0x2c8),lVar12,
                  &local_278);
  }
  if (local_2e6 != '\0') {
    fVar49 = *(float *)(lVar45 + 0x6c) + *(float *)(lVar12 + 0x40);
    *(float *)(lVar45 + 0x6c) = fVar49;
    if (((*(char *)(lVar12 + 0x7a) == '\0') || (fVar49 <= 0.0)) ||
       (fVar49 = (float)FUN_180519fe0(), fVar49 <= DAT_1808ac294)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    fVar49 = DAT_1808ac1f4;
    fVar54 = (float)(int)((local_2a0 + fVar53) - fVar54);
    fVar23 = (float)(int)((local_29c + fVar55) - 0.0);
    if (((bVar7) && (fVar50 = fVar23 - DAT_1808ac428, local_294 < fVar50)) &&
       ((fVar48 = (fVar23 - *(float *)(lVar12 + 0x1200)) + DAT_1808ac1f4, fVar48 < fVar57 &&
        ((local_1f0._0_4_ < fVar54 + DAT_1808ac34c && (fVar54 < local_208._0_4_)))))) {
      local_250 = *(float *)(DAT_180ca0a50 + 0x1000);
      uStack_24c = *(undefined8 *)(DAT_180ca0a50 + 0x1004);
      uStack_244._0_4_ = *(float *)(DAT_180ca0a50 + 0x100c) * *(float *)(DAT_180ca0a50 + 0xc9c);
      uVar38 = FUN_1803d7f30(&local_250);
      if ((uVar38 & 0xff000000) != 0) {
        local_250 = fVar54 + fVar49;
        uStack_24c = CONCAT44(local_250,fVar48 + fVar49);
        uStack_244._0_4_ = fVar50 + fVar49;
        local_320 = (char *******)((ulonglong)local_320 & 0xffffffff00000000);
        local_328 = (char *******)CONCAT44(local_328._4_4_,*(undefined4 *)(lVar12 + 0xd98));
        FUN_1803fc600(*(undefined8 *)(lVar26 + 0x2c8),&local_250,2,uVar38);
      }
    }
    if ((local_2dc == 0) && (*(uint *)(lVar12 + 0x1578) == local_2d4)) {
      *(undefined2 *)(lVar12 + 0x2768) = 0x101;
      *(float *)(lVar12 + 0x276c) = fVar54 - DAT_1808ac34c;
      *(float *)(lVar12 + 0x2770) = fVar23 - *(float *)(lVar12 + 0x1200);
      *(float *)(lVar12 + 0x2774) = *(float *)(lVar12 + 0x1200);
      *(undefined4 *)(lVar12 + 0x2778) = **(undefined4 **)(local_1e0 + 0x20);
    }
  }
  uVar38 = local_2d4;
  cVar16 = local_2e4;
  uVar19 = local_284;
  if ((local_284 != 0) && (local_2e4 == '\0')) {
    FUN_18041bca0();
  }
  if (local_2e0 != 0) {
    local_1e0 = (ulonglong)(uint)(fVar56 + *(float *)(lVar12 + 0xce0)) << 0x20;
    FUN_1804174f0(&local_1e0);
    *(uint *)(lVar12 + 0x1eb4) = *(uint *)(lVar12 + 0x1eb4) | 0x100001;
    FUN_1803e1bc0();
    local_238 = local_238 | *(uint *)(lVar12 + 0x1ef0) & 0x80;
    FUN_1803ecb10();
    if ((*(int *)(lVar12 + 0x1ee8) == 0) ||
       (iVar21 = FUN_1803e8900(lVar26,"#SCROLLY"), *(int *)(lVar12 + 0x1ee8) != iVar21)) {
      *(uint *)(lVar12 + 0x1ee8) = uVar38;
      *(undefined4 *)(lVar12 + 0x1eec) = local_1e8;
      *(uint *)(lVar12 + 0x1ef0) = local_238;
    }
    uVar19 = local_284;
  }
  if ((lVar45 != 0) && (local_2dc != 0)) {
    *(undefined8 *)(lVar45 + 0x20) = 0;
  }
  lVar26 = DAT_180ca0a50;
  if ((*(char *)(lVar12 + 0x2868) != '\0') && ((uVar19 == 0 || (cVar16 != '\0')))) {
    lVar41 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined8 *)(DAT_180ca0a50 + 0x2898) = 0;
    *(undefined8 *)(lVar26 + 0x2890) = 0;
    if ((pppppppcVar37 == (char *******)0x0) &&
       (pppppppcVar37 = _Str, _Str != (char *******)0xffffffffffffffff)) {
      while (*(char *)pppppppcVar37 != '\0') {
        if (((*(char *)pppppppcVar37 == '#') && (*(char *)((longlong)pppppppcVar37 + 1) == '#')) ||
           (pppppppcVar37 = (char *******)((longlong)pppppppcVar37 + 1),
           pppppppcVar37 == (char *******)0xffffffffffffffff)) break;
      }
    }
    fVar56 = *(float *)(lVar26 + 0xce0);
    if (*(float *)(lVar26 + 0xce0) <= *(float *)(lVar26 + 0xcf0)) {
      fVar56 = *(float *)(lVar26 + 0xcf0);
    }
    fVar56 = fVar56 + *(float *)(lVar26 + 0x28a0) + DAT_1808ac34c;
    *(float *)(lVar26 + 0x28a0) = local_29c;
    if (fVar56 < local_29c) {
      FUN_1803f3880(&DAT_1806e6e50);
      *(undefined1 *)(lVar26 + 0x2869) = 1;
    }
    FUN_1803f38c0(&local_2a0,&DAT_1806dfff8,&DAT_1806dfff9);
    iVar21 = *(int *)(lVar41 + 0x1a0);
    iVar20 = *(int *)(lVar26 + 0x28a4);
    if (iVar21 < iVar20) {
      *(int *)(lVar26 + 0x28a4) = iVar21;
      iVar20 = iVar21;
    }
    iVar21 = *(int *)(lVar41 + 0x1a0);
    while( true ) {
      pppppppcVar39 = (char *******)FUN_180540ca0(_Str,10,(longlong)pppppppcVar37 - (longlong)_Str);
      pppppppcVar28 = pppppppcVar37;
      if (pppppppcVar39 != (char *******)0x0) {
        pppppppcVar28 = pppppppcVar39;
      }
      if ((_Str == pppppppcVar28) && (pppppppcVar28 == pppppppcVar37)) break;
      iVar36 = 1;
      if (*(char *)(lVar26 + 0x2869) != '\0') {
        iVar36 = (iVar21 - iVar20) * 4;
      }
      local_328 = _Str;
      FUN_1803f3880("%*s%.*s",iVar36,&DAT_18058b643,(int)pppppppcVar28 - (int)_Str);
      *(undefined1 *)(lVar26 + 0x2869) = 0;
      if (*(char *)pppppppcVar28 == '\n') {
        FUN_1803f3880(&DAT_1806e6e50);
        *(undefined1 *)(lVar26 + 0x2869) = 1;
      }
      if (pppppppcVar28 == pppppppcVar37) break;
      _Str = (char *******)((longlong)pppppppcVar28 + 1);
    }
    FUN_1803f38c0(&local_2a0,&DAT_1806e0010,&DAT_1806e0011);
    lVar45 = local_2b0;
  }
  if (0.0 < local_1e4) {
    FUN_1803d8ca0(CONCAT44(fStack_224 + *(float *)(lVar12 + 0xce0),
                           fVar22 + *(float *)(lVar12 + 0xcf4)),local_128,local_120,0);
  }
  uVar24 = (ulonglong)local_2e7;
  if ((lVar45 != 0) && (local_2e7 != 0)) {
    *(undefined1 *)(lVar45 + 0x75) = 1;
  }
  uVar34 = (ulonglong)local_2e8;
  if (local_2e8 != 0) {
    FUN_1803dd850(local_2d4);
  }
  if ((local_2d0 & 0x40) == 0) {
    return uVar34 & 0xffffffff;
  }
  return uVar24 & 0xff;
}



/* ===== 18041fc80 FUN_18041fc80 ===== */

void FUN_18041fc80(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  lVar8 = DAT_180ca0a50;
  fVar10 = DAT_1808ac1f4;
  fVar18 = *(float *)(param_1 + 0x20);
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  fVar19 = *(float *)(param_1 + 0x18);
  if (*(float *)(param_1 + 0x18) <= *(float *)(lVar6 + 0x26c)) {
    fVar19 = *(float *)(lVar6 + 0x26c);
  }
  if ((*(uint *)(param_1 + 4) & 0x80000) != 0) {
    fVar17 = *(float *)(lVar6 + 0x11c);
    if (*(longlong *)(DAT_180ca0a50 + 0x2360) == 0) {
      fVar16 = fVar17;
    }
    else {
      fVar16 = *(float *)(*(longlong *)(DAT_180ca0a50 + 0x2360) + 0x80);
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
    }
    fVar17 = (float)(int)((fVar16 - *(float *)(DAT_180ca0a50 + 0xcf0)) -
                         *(float *)(DAT_180ca0a50 + 0x1200) * DAT_1808ac1f4);
    if (*(float *)(DAT_180ca0a50 + 0xcf0) + *(float *)(DAT_180ca0a50 + 0xd68) + fVar18 < fVar17) {
      fVar18 = fVar17;
    }
  }
  if (*(float *)(lVar6 + 0x274) <= fVar18) {
    fVar18 = *(float *)(lVar6 + 0x274);
  }
  if (fVar19 < fVar18) {
    fVar17 = *(float *)(param_1 + 0x1c);
    if ((*(short *)(param_1 + 0x24) != -1) &&
       (lVar15 = *(longlong *)(DAT_180ca0a50 + 0x2360), (*(uint *)(lVar15 + 4) & 0x100000) == 0)) {
      lVar7 = *(longlong *)(lVar15 + 0x18);
      lVar14 = (longlong)*(short *)(param_1 + 0x24) * 0x78;
      lVar13 = *(longlong *)(lVar6 + 0x2c8);
      puVar1 = (undefined8 *)(lVar14 + 0x24 + lVar7);
      uVar9 = puVar1[1];
      uVar2 = *(undefined4 *)(lVar14 + 0x24 + lVar7);
      uVar3 = *(undefined4 *)(lVar14 + 0x28 + lVar7);
      uVar4 = *(undefined4 *)(lVar14 + 0x2c + lVar7);
      uVar5 = *(undefined4 *)(lVar14 + 0x30 + lVar7);
      *(undefined8 *)(lVar6 + 0x268) = *puVar1;
      *(undefined8 *)(lVar6 + 0x270) = uVar9;
      *(undefined4 *)(lVar13 + 0x60) = uVar2;
      *(undefined4 *)(lVar13 + 100) = uVar3;
      *(undefined4 *)(lVar13 + 0x68) = uVar4;
      *(undefined4 *)(lVar13 + 0x6c) = uVar5;
      lVar13 = *(longlong *)(*(longlong *)(lVar6 + 0x2c8) + 0xa8);
      lVar12 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x2c8) + 0xa0) + -1;
      *(undefined4 *)(lVar13 + lVar12 * 0x10) = uVar2;
      *(undefined4 *)(lVar13 + 4 + lVar12 * 0x10) = uVar3;
      *(undefined4 *)(lVar13 + 8 + lVar12 * 0x10) = uVar4;
      *(undefined4 *)(lVar13 + 0xc + lVar12 * 0x10) = uVar5;
      FUN_180401a80(*(undefined8 *)(lVar15 + 0x1a0),*(undefined8 *)(lVar6 + 0x2c8),
                    *(undefined2 *)(lVar14 + 100 + lVar7));
    }
    local_58 = *(float *)(DAT_180ca0a50 + 0x1130);
    fStack_54 = *(float *)(DAT_180ca0a50 + 0x1134);
    fStack_50 = *(float *)(DAT_180ca0a50 + 0x1138);
    fStack_4c = *(float *)(DAT_180ca0a50 + 0x113c) * *(float *)(DAT_180ca0a50 + 0xc9c);
    lVar15 = DAT_180ca0a50;
    uVar11 = FUN_1803d7f30(&local_58);
    if ((uVar11 & 0xff000000) != 0) {
      fStack_54 = fVar19 + fVar10;
      fStack_4c = fVar18 + fVar10;
      local_58 = (float)(int)fVar17 + fVar10;
      fStack_50 = local_58;
      FUN_1803fc600(*(undefined8 *)(lVar6 + 0x2c8),&local_58,2,uVar11,*(undefined4 *)(lVar8 + 0xd64)
                    ,0);
      lVar15 = DAT_180ca0a50;
    }
    if (((*(short *)(param_1 + 0x24) != -1) &&
        (lVar6 = *(longlong *)(lVar15 + 0x2360), (*(uint *)(lVar6 + 4) & 0x100000) == 0)) &&
       (*(int *)(lVar6 + 0x74) != -1)) {
      lVar8 = *(longlong *)(lVar15 + 0x14f8);
      lVar15 = *(longlong *)(lVar6 + 0x18);
      lVar12 = (longlong)*(int *)(lVar6 + 0x74) * 0x78;
      lVar7 = *(longlong *)(lVar8 + 0x2c8);
      puVar1 = (undefined8 *)(lVar12 + 0x24 + lVar15);
      uVar9 = puVar1[1];
      uVar2 = *(undefined4 *)(lVar12 + 0x24 + lVar15);
      uVar3 = *(undefined4 *)(lVar12 + 0x28 + lVar15);
      uVar4 = *(undefined4 *)(lVar12 + 0x2c + lVar15);
      uVar5 = *(undefined4 *)(lVar12 + 0x30 + lVar15);
      *(undefined8 *)(lVar8 + 0x268) = *puVar1;
      *(undefined8 *)(lVar8 + 0x270) = uVar9;
      *(undefined4 *)(lVar7 + 0x60) = uVar2;
      *(undefined4 *)(lVar7 + 100) = uVar3;
      *(undefined4 *)(lVar7 + 0x68) = uVar4;
      *(undefined4 *)(lVar7 + 0x6c) = uVar5;
      lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x2c8) + 0xa8);
      lVar13 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x2c8) + 0xa0) + -1;
      *(undefined4 *)(lVar7 + lVar13 * 0x10) = uVar2;
      *(undefined4 *)(lVar7 + 4 + lVar13 * 0x10) = uVar3;
      *(undefined4 *)(lVar7 + 8 + lVar13 * 0x10) = uVar4;
      *(undefined4 *)(lVar7 + 0xc + lVar13 * 0x10) = uVar5;
      FUN_180401a80(*(undefined8 *)(lVar6 + 0x1a0),*(undefined8 *)(lVar8 + 0x2c8),
                    *(undefined2 *)(lVar12 + 100 + lVar15));
    }
  }
  return;
}



/* ===== 18041ffb0 FUN_18041ffb0 ===== */

void FUN_18041ffb0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  lVar7 = DAT_180ca0a50;
  lVar4 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(lVar4 + 0xce) = 1;
  lVar5 = *(longlong *)(lVar7 + 0x14f8);
  fVar12 = *(float *)(lVar5 + 0x15c) - *(float *)(lVar7 + 0xd0c);
  *(float *)(lVar5 + 0x15c) = fVar12;
  *(float *)(lVar5 + 0x118) = fVar12 + *(float *)(lVar5 + 0x28) + *(float *)(lVar5 + 0x160);
  *(int *)(lVar4 + 0x1a0) = *(int *)(lVar4 + 0x1a0) + -1;
  uVar11 = 1 << ((byte)*(uint *)(lVar4 + 0x1a0) & 0x1f);
  if (0x1f < *(uint *)(lVar4 + 0x1a0)) {
    uVar11 = 0;
  }
  if ((*(uint *)(lVar4 + 0x1a4) & uVar11) != 0) {
    lVar6 = *(longlong *)(lVar7 + 0x2048);
    lVar9 = (longlong)*(int *)(lVar7 + 0x2040);
    lVar5 = lVar6 + lVar9 * 0x28;
    if ((((((*(uint *)(lVar6 + -0x24 + lVar9 * 0x28) & 0x20000) != 0) &&
          (*(char *)(lVar7 + 0x2063) != '\0')) && (*(int *)(lVar7 + 0x2118) == 0)) &&
        ((*(longlong *)(lVar7 + 0x2068) == lVar4 && (*(char *)(lVar7 + 0x2109) != '\0')))) &&
       ((*(int *)(lVar7 + 0x2158) == 0 && (*(int *)(lVar7 + 0x21c8) == 0)))) {
      *(undefined1 *)(lVar7 + 0x2109) = 0;
      uVar3 = *(undefined4 *)(lVar5 + -0x28);
      *(undefined4 *)(lVar7 + 0x1ee8) = uVar3;
      uVar10 = *(uint *)(lVar6 + -0x20 + lVar9 * 0x28) & 0xffdfffff;
      *(uint *)(lVar7 + 0x1eec) = uVar10;
      puVar1 = (undefined8 *)(lVar6 + -0x1c + lVar9 * 0x28);
      uVar2 = puVar1[1];
      *(undefined8 *)(lVar7 + 0x1f04) = *puVar1;
      *(undefined8 *)(lVar7 + 0x1f0c) = uVar2;
      *(longlong *)(lVar7 + 0x2150) = *(longlong *)(lVar7 + 0x14f8);
      *(undefined4 *)(lVar7 + 0x2158) = uVar3;
      *(undefined4 *)(lVar7 + 0x215c) = *(undefined4 *)(lVar7 + 0x1ea4);
      *(uint *)(lVar7 + 0x2170) = uVar10;
      uVar2 = *(undefined8 *)(*(longlong *)(lVar7 + 0x14f8) + 0x128);
      fVar12 = (float)uVar2;
      fVar13 = (float)((ulonglong)uVar2 >> 0x20);
      *(ulonglong *)(lVar7 + 0x2160) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar7 + 0x1f04) >> 0x20) - fVar13,
                    (float)*(undefined8 *)(lVar7 + 0x1f04) - fVar12);
      *(ulonglong *)(lVar7 + 0x2168) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar7 + 0x1f0c) >> 0x20) - fVar13,
                    (float)*(undefined8 *)(lVar7 + 0x1f0c) - fVar12);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x2068) + 0x3d8) + 0x41c +
       (longlong)*(int *)(lVar7 + 0x2074) * 8) = 0x7f7fffff;
      if ((*(char *)(lVar7 + 0x2109) == '\0') && (*(char *)(lVar7 + 0x20ca) == '\0')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(lVar7 + 0x20c9) = uVar8;
    }
    if ((*(float *)(lVar6 + -0xc + lVar9 * 0x28) != DAT_1808acd08) &&
       (*(float *)(lVar4 + 0x26c) <= *(float *)(lVar4 + 0x11c))) {
      FUN_18041fc80(lVar5 + -0x28);
    }
    *(int *)(lVar7 + 0x2040) = *(int *)(lVar7 + 0x2040) + -1;
    *(ulonglong *)(lVar4 + 0x1a4) =
         CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar4 + 0x1a4) >> 0x20) & ~uVar11,
                  (uint)*(undefined8 *)(lVar4 + 0x1a4) & ~uVar11);
  }
  FUN_1803e8b00();
  return;
}



/* ===== 1804201d0 FUN_1804201d0 ===== */

ulonglong FUN_1804201d0(char *param_1,char param_2,uint param_3,float *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char local_res10 [8];
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar19;
  char *in_stack_fffffffffffffec0;
  char local_108;
  char local_107;
  char local_106;
  byte local_105;
  char local_104 [4];
  int local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  uint local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  
  lVar6 = DAT_180ca0a50;
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  uVar11 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar11 + 0xce) = 1;
  lVar3 = *(longlong *)(lVar6 + 0x14f8);
  if (*(char *)(lVar3 + 0xd1) != '\0') {
LAB_180420a0d:
    return uVar11 & 0xffffffffffffff00;
  }
  local_res10[0] = param_2;
  iVar8 = FUN_1803e8900(lVar3,param_1);
  pcVar12 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar12 != '\0') {
      if (((*pcVar12 == '#') && (pcVar12[1] == '#')) ||
         (pcVar12 = pcVar12 + 1, pcVar12 == (char *)0xffffffffffffffff)) break;
    }
  }
  fVar16 = 0.0;
  local_100 = iVar8;
  if (param_1 == pcVar12) {
    fVar15 = 0.0;
    local_cc = *(float *)(DAT_180ca0a50 + 0x1200);
  }
  else {
    in_stack_fffffffffffffec0 = param_1;
    FUN_18040a2f0(&local_d0,*(undefined8 *)(DAT_180ca0a50 + 0x11f0));
    fVar15 = (float)(int)((uint)((float)(int)local_d0 < local_d0) + (int)local_d0);
  }
  fVar18 = local_cc;
  if (param_4[1] != 0.0) {
    fVar18 = param_4[1];
  }
  fVar17 = *param_4;
  if (*param_4 == 0.0) {
    fVar17 = fVar15;
  }
  fStack_c4 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x118) >> 0x20) + *(float *)(lVar3 + 0x150)
  ;
  local_c8 = (float)*(undefined8 *)(lVar3 + 0x118);
  local_d0 = fVar17;
  local_ac = local_cc;
  local_cc = fVar18;
  local_b0 = fVar15;
  FUN_1803ec550(&local_d0,0);
  local_bc = (float)(param_3 & 2);
  if ((param_3 & 2) == 0) {
    local_f8 = local_c8;
  }
  else {
    local_f8 = *(float *)(lVar3 + 600);
  }
  lVar10 = 0x260;
  if ((param_3 & 2) == 0) {
    lVar10 = 0x250;
  }
  if (((*param_4 == 0.0) || ((param_3 >> 0x18 & 1) != 0)) &&
     (fVar14 = *(float *)(lVar3 + lVar10) - local_f8, fVar17 = fVar15, fVar15 <= fVar14)) {
    fVar17 = fVar14;
  }
  local_f4 = fStack_c4;
  local_f0 = fVar17 + local_f8;
  local_ec = fVar18 + fStack_c4;
  if ((param_3 >> 0x1a & 1) == 0) {
    if ((param_3 & 2) == 0) {
      fVar16 = *(float *)(lVar6 + 0xcec);
    }
    local_f8 = local_f8 - (float)(int)(fVar16 * DAT_1808ac1f4);
    fVar15 = (float)(int)(*(float *)(lVar6 + 0xcf0) * DAT_1808ac1f4);
    local_f0 = (fVar16 - (float)(int)(fVar16 * DAT_1808ac1f4)) + local_f0;
    local_f4 = fStack_c4 - fVar15;
    local_ec = (*(float *)(lVar6 + 0xcf0) - fVar15) + local_ec;
  }
  local_c0 = param_3 & 8;
  bVar7 = -((param_3 & 8) != 0) & 0x40;
  if ((param_3 & 2) == 0) {
    uVar11 = FUN_1803ec2f0(&local_f8,iVar8,0,bVar7);
  }
  else {
    uVar9 = *(undefined4 *)(lVar3 + 0x268);
    uVar2 = *(undefined4 *)(lVar3 + 0x270);
    *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(lVar3 + 600);
    *(undefined4 *)(lVar3 + 0x270) = *(undefined4 *)(lVar3 + 0x260);
    uVar11 = FUN_1803ec2f0(&local_f8,iVar8,0,bVar7);
    *(undefined4 *)(lVar3 + 0x268) = uVar9;
    *(undefined4 *)(lVar3 + 0x270) = uVar2;
  }
  fVar16 = (float)(*(uint *)(lVar6 + 0x1eec) & 0x400000);
  local_106 = (char)uVar11;
  if ((local_106 == '\0') &&
     (((fVar16 == 0.0 || (*(char *)(lVar6 + 0x2448) == '\0')) ||
      ((*(float *)(lVar6 + 0x2458) <= local_f4 ||
       (((local_ec < *(float *)(lVar6 + 0x2450) || local_ec == *(float *)(lVar6 + 0x2450) ||
         (*(float *)(lVar6 + 0x2454) <= local_f8)) ||
        (local_f0 < *(float *)(lVar6 + 0x244c) || local_f0 == *(float *)(lVar6 + 0x244c)))))))))
  goto LAB_180420a0d;
  local_d0 = (float)(*(uint *)(lVar6 + 0x1ea8) & 0x40);
  local_d8 = fVar16;
  if ((local_c0 != 0) && (local_d0 == 0.0)) {
    FUN_1803e7920();
  }
  if ((param_3 & 2) != 0) {
    if (*(longlong *)(lVar6 + 0x2360) == 0) {
      if (*(longlong *)(lVar3 + 0x1c8) != 0) {
        FUN_180413b00();
      }
    }
    else {
      FUN_180410360();
    }
    *(uint *)(lVar6 + 0x1ef0) = *(uint *)(lVar6 + 0x1ef0) | 0x200;
    uVar13 = *(undefined8 *)(lVar3 + 0x270);
    *(undefined8 *)(lVar6 + 0x1f24) = *(undefined8 *)(lVar3 + 0x268);
    *(undefined8 *)(lVar6 + 0x1f2c) = uVar13;
  }
  fVar15 = 0.0;
  fVar14 = 0.0;
  local_e8 = 0.0;
  if ((param_3 >> 0x14 & 1) != 0) {
    fVar15 = 1.83671e-40;
    local_e8 = 1.83671e-40;
    fVar14 = 1.83671e-40;
  }
  if ((param_3 >> 0x1b & 1) != 0) {
    fVar14 = (float)((uint)fVar14 | 0x100000);
    fVar15 = fVar14;
    local_e8 = fVar14;
  }
  if ((param_3 >> 0x16 & 1) != 0) {
    fVar14 = (float)((uint)fVar14 | 0x10);
    fVar15 = fVar14;
    local_e8 = fVar14;
  }
  if ((param_3 >> 0x17 & 1) != 0) {
    fVar14 = (float)((uint)fVar14 | 0x80);
    fVar15 = fVar14;
    local_e8 = fVar14;
  }
  if ((param_3 & 4) != 0) {
    fVar14 = (float)((uint)fVar14 | 0x120);
    fVar15 = fVar14;
    local_e8 = fVar14;
  }
  if (((param_3 & 0x10) != 0) || ((*(uint *)(lVar6 + 0x1eec) & 0x4000) != 0)) {
    fVar15 = (float)((uint)fVar14 | 0x1000);
    local_e8 = fVar15;
  }
  if (fVar16 == 0.0) {
    uVar13 = CONCAT44(uVar19,fVar15);
    bVar7 = FUN_180415270(&local_f8,iVar8,&local_107,local_104,uVar13);
    uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if (((((param_3 & 0x40) == 0) || (*(int *)(lVar6 + 0x2234) == 0)) ||
        (*(int *)(lVar6 + 0x2238) != *(int *)(lVar6 + 0x1ea4))) ||
       ((*(int *)(lVar6 + 0x2234) != iVar8 || ((*(uint *)(lVar6 + 0x223c) & 0x1000) != 0)))) {
      local_108 = param_2;
      goto LAB_180420714;
    }
    bVar7 = 1;
    local_108 = '\x01';
    bVar4 = true;
LAB_180420732:
    bVar5 = bVar4;
    if ((*(char *)(lVar6 + 0x2061) == '\0') &&
       ((*(longlong *)(lVar6 + 0x2068) == lVar3 &&
        (*(int *)(lVar6 + 0x2074) == *(int *)(lVar3 + 0x170))))) {
      local_e8 = local_f8 - *(float *)(lVar3 + 0x128);
      local_e4 = local_f4 - *(float *)(lVar3 + 300);
      local_e0 = local_f0 - *(float *)(lVar3 + 0x128);
      local_dc = local_ec - *(float *)(lVar3 + 300);
      FUN_1803ef480(local_100,*(int *)(lVar3 + 0x170),*(undefined4 *)(lVar6 + 0x1ea4),&local_e8);
      if (*(char *)(lVar6 + 0x76) != '\0') {
        *(undefined1 *)(lVar6 + 0x2060) = 0;
      }
    }
    iVar8 = local_100;
    if (bVar7 != 0) {
      FUN_1803dd850(local_100);
    }
  }
  else {
    FUN_180421630(iVar8,local_res10,&local_e8);
    uVar13 = CONCAT44(uVar19,local_e8);
    local_105 = FUN_180415270(&local_f8,iVar8,&local_107,local_104,uVar13);
    uVar19 = (undefined4)((ulonglong)uVar13 >> 0x20);
    FUN_180421740(iVar8,local_res10,&local_105);
    local_108 = local_res10[0];
    bVar7 = local_105;
LAB_180420714:
    bVar5 = false;
    bVar4 = false;
    if ((bVar7 != 0) || ((local_107 != '\0' && ((param_3 >> 0x19 & 1) != 0)))) goto LAB_180420732;
    iVar8 = local_100;
  }
  fVar16 = local_d8;
  if (local_108 != param_2) {
    *(uint *)(lVar6 + 0x1ef0) = *(uint *)(lVar6 + 0x1ef0) | 8;
  }
  if ((*(int *)(lVar6 + 0x1578) == iVar8) && (*(char *)(lVar6 + 0x1584) != '\0')) {
    *(char *)(lVar6 + 0x1585) = param_2;
    if ((param_2 == '\0') ||
       ((local_d8 != 0.0 && (*(char *)(*(longlong *)(lVar6 + 0x24a0) + 0x57) == '\0')))) {
      *(undefined1 *)(lVar6 + 0x1586) = 0;
    }
    else {
      *(undefined1 *)(lVar6 + 0x1586) = 1;
    }
  }
  if (local_106 == '\0') goto LAB_18042094e;
  if (local_107 == '\0' && (param_3 & 0x20) == 0) {
    bVar4 = false;
    lVar10 = 0x19;
    if (local_108 != '\0') goto LAB_180420873;
  }
  else {
    bVar4 = true;
    lVar10 = 0x1a;
LAB_180420873:
    if ((local_104[0] != '\0') && (bVar4)) {
      lVar10 = 0x1b;
    }
    local_d4 = local_ec;
    local_e4 = local_f4;
    puVar1 = (undefined4 *)(DAT_180ca0a50 + 0xc90 + (lVar10 + 0x15) * 0x10);
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    fStack_9c = (float)puVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
    local_d8 = local_f0;
    local_e8 = local_f8;
    lVar10 = DAT_180ca0a50;
    uVar9 = FUN_1803d7f30(&local_a8);
    FUN_1803fe590(*(undefined8 *)(*(longlong *)(lVar10 + 0x14f8) + 0x2c8),&local_e8,&local_d8,uVar9,
                  CONCAT44(uVar19,*(undefined4 *)(lVar6 + 0xd70)),
                  (ulonglong)in_stack_fffffffffffffec0 & 0xffffffff00000000);
    iVar8 = local_100;
  }
  if (*(int *)(lVar6 + 0x2064) == iVar8) {
    uVar13 = 6;
    if (fVar16 == 0.0) {
      uVar13 = 2;
    }
    FUN_1803d9fd0(&local_f8,iVar8,uVar13);
  }
LAB_18042094e:
  if (local_bc != 0.0) {
    if (*(longlong *)(lVar6 + 0x2360) == 0) {
      if (*(longlong *)(lVar3 + 0x1c8) != 0) {
        FUN_180413bc0();
      }
    }
    else {
      FUN_180410420();
    }
  }
  if (local_106 != '\0') {
    local_b8 = fVar18 + fStack_c4;
    local_bc = fVar17 + local_c8;
    if (*(float *)(lVar3 + 0x250) <= fVar17 + local_c8) {
      local_bc = *(float *)(lVar3 + 0x250);
    }
    FUN_1803d9560(&local_c8,&local_bc,param_1,pcVar12,&local_b0,lVar6 + 0xd90,&local_f8);
  }
  if ((((bVar7 != 0) && (!bVar5)) && ((*(uint *)(lVar3 + 0x14) & 0x4000000) != 0)) &&
     (((param_3 & 1) == 0 && ((*(byte *)(lVar6 + 0x1eec) & 0x10) != 0)))) {
    FUN_1803ee1f0();
  }
  if ((local_c0 != 0) && (local_d0 == 0.0)) {
    FUN_1803e79e0();
  }
  return (ulonglong)bVar7;
}



/* ===== 180420a40 FUN_180420a40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180420a40(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = DAT_180ca0a50;
  fVar9 = DAT_1808acda0;
  fVar2 = DAT_1808ac34c;
  fVar6 = param_3[2];
  fVar5 = *(float *)(DAT_180ca0a50 + 0x110);
  if (((((fVar6 < fVar5) || (fVar6 = *param_3, fVar5 < fVar6)) &&
       (fVar5 = fVar5 - fVar6, fVar5 != 0.0)) &&
      ((fVar6 = *(float *)(param_2 + 0x98), 0.0 <= fVar5 || (0.0 <= fVar6)))) &&
     ((fVar5 <= 0.0 || (fVar6 < *(float *)(param_2 + 0xa0))))) {
    fVar1 = *(float *)(DAT_180ca0a50 + 0x1200);
    fVar8 = ((float)((uint)fVar5 & _DAT_1808ade90) - fVar1) / (fVar1 * DAT_1808ac750 - fVar1);
    if (0.0 <= fVar8) {
      fVar7 = DAT_1808ac34c;
      if (fVar8 <= DAT_1808ac34c) {
        fVar7 = fVar8;
      }
    }
    else {
      fVar7 = 0.0;
    }
    if (0.0 <= fVar5) {
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = DAT_1808ac34c;
      }
    }
    else {
      fVar5 = DAT_1808acda0;
    }
    fVar5 = (fVar7 * DAT_1808ac658 + DAT_1808ac34c) * fVar1 * DAT_1808aca28 * fVar5 *
            *(float *)(DAT_180ca0a50 + 0x40) + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x20) = fVar5;
    iVar4 = (int)fVar5;
    if ((fVar5 < 0.0) && ((float)iVar4 != fVar5)) {
      iVar4 = iVar4 + -1;
    }
    fVar5 = (float)iVar4;
    if (fVar5 != 0.0) {
      *(undefined4 *)(param_2 + 0xb0) = 0;
      *(undefined4 *)(param_2 + 0xb8) = 0;
      *(float *)(param_2 + 0xa8) = fVar5 + fVar6;
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) - fVar5;
    }
  }
  fVar6 = *(float *)(lVar3 + 0x114);
  fVar5 = param_3[3];
  if ((((fVar5 < fVar6) || (fVar5 = param_3[1], fVar6 < fVar5)) &&
      (fVar6 = fVar6 - fVar5, fVar6 != 0.0)) &&
     (((fVar5 = *(float *)(param_2 + 0x9c), 0.0 <= fVar6 || (0.0 <= fVar5)) &&
      ((fVar6 <= 0.0 || (fVar5 < *(float *)(param_2 + 0xa4))))))) {
    fVar1 = *(float *)(lVar3 + 0x1200);
    fVar8 = ((float)((uint)fVar6 & _DAT_1808ade90) - fVar1) / (fVar1 * DAT_1808ac750 - fVar1);
    if (0.0 <= fVar8) {
      fVar7 = fVar2;
      if (fVar8 <= fVar2) {
        fVar7 = fVar8;
      }
    }
    else {
      fVar7 = 0.0;
    }
    if (0.0 <= fVar6) {
      if (fVar6 <= 0.0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = fVar2;
      }
    }
    fVar6 = (fVar7 * DAT_1808ac658 + fVar2) * fVar1 * DAT_1808aca28 * fVar9 *
            *(float *)(lVar3 + 0x40) + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar6;
    iVar4 = (int)fVar6;
    if ((fVar6 < 0.0) && ((float)iVar4 != fVar6)) {
      iVar4 = iVar4 + -1;
    }
    fVar6 = (float)iVar4;
    if (fVar6 != 0.0) {
      *(float *)(param_2 + 0xac) = fVar6 + fVar5;
      *(undefined4 *)(param_2 + 0xb4) = 0;
      *(undefined4 *)(param_2 + 0xbc) = 0;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - fVar6;
    }
  }
  return;
}



/* ===== 180420ce0 FUN_180420ce0 ===== */

void FUN_180420ce0(float *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  
  lVar2 = DAT_180ca0a50;
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(DAT_180ca0a50 + 0x2448) = 0;
  fVar9 = *(float *)(lVar2 + 0x114);
  fVar7 = param_1[1];
  if ((param_1[1] <= fVar9) && (fVar7 = param_1[3], fVar9 <= param_1[3])) {
    fVar7 = fVar9;
  }
  fVar9 = *(float *)(lVar2 + 0x110);
  fVar6 = *param_1;
  if ((*param_1 <= fVar9) && (fVar6 = param_1[2], fVar9 <= param_1[2])) {
    fVar6 = fVar9;
  }
  fVar9 = *(float *)(lVar1 + 300);
  *(float *)(lVar2 + 0x2430) = fVar6 - *(float *)(lVar1 + 0x128);
  *(float *)(lVar2 + 0x2434) = fVar7 - fVar9;
  fVar9 = *(float *)(lVar2 + 0x2498);
  if (param_1[3] <= *(float *)(lVar2 + 0x2498)) {
    fVar9 = param_1[3];
  }
  fVar7 = *(float *)(lVar2 + 0x2494);
  if (param_1[2] <= *(float *)(lVar2 + 0x2494)) {
    fVar7 = param_1[2];
  }
  fVar6 = *(float *)(lVar2 + 0x2490);
  if (*(float *)(lVar2 + 0x2490) <= param_1[1]) {
    fVar6 = param_1[1];
  }
  fVar8 = *(float *)(lVar2 + 0x248c);
  if (*(float *)(lVar2 + 0x248c) <= *param_1) {
    fVar8 = *param_1;
  }
  uVar5 = *(int *)(lVar1 + 0x1b0) - 1;
  local_a8 = fVar8;
  fStack_a4 = fVar6;
  fStack_a0 = fVar7;
  fStack_9c = fVar9;
  if (-1 < (int)uVar5) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x1b8) + (ulonglong)uVar5 * 8);
      if ((*(char *)(lVar4 + 0xcc) != '\0') && (*(char *)(lVar4 + 0xd4) == '\0')) {
        lVar4 = FUN_1803e1e10(lVar4);
        goto LAB_180420e12;
      }
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  lVar4 = lVar1;
LAB_180420e12:
  local_98 = *(undefined4 *)(lVar2 + 0xfb0);
  uStack_94 = *(undefined4 *)(lVar2 + 0xfb4);
  uStack_90 = *(undefined4 *)(lVar2 + 0xfb8);
  fStack_8c = *(float *)(lVar2 + 0xfbc) * *(float *)(lVar2 + 0xc9c) * DAT_1808ac154;
  uVar3 = FUN_1803d7f30(&local_98);
  FUN_1803fe590(*(undefined8 *)(lVar4 + 0x2c8),&local_a8,&fStack_a0,uVar3,0,0);
  local_98 = *(undefined4 *)(DAT_180ca0a50 + 0x1170);
  uStack_94 = *(undefined4 *)(DAT_180ca0a50 + 0x1174);
  uStack_90 = *(undefined4 *)(DAT_180ca0a50 + 0x1178);
  fStack_8c = *(float *)(DAT_180ca0a50 + 0x117c) * *(float *)(DAT_180ca0a50 + 0xc9c);
  uVar5 = FUN_1803d7f30(&local_98);
  if ((uVar5 & 0xff000000) != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x2c8);
    local_res18 = fVar8 + DAT_1808ac1f4;
    local_res1c = fVar6 + DAT_1808ac1f4;
    local_resc = DAT_1808ac1f4;
    if ((*(byte *)(lVar4 + 0x30) & 1) == 0) {
      local_resc = DAT_1808ac1e0;
    }
    local_res8 = fVar7 - local_resc;
    local_resc = fVar9 - local_resc;
    FUN_1803fe160(lVar4,&local_res18,&local_res8,0,0);
    FUN_1803fc600(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar5,
                  DAT_1808ac34c,0x200);
    *(undefined4 *)(lVar4 + 0x50) = 0;
  }
  if ((param_2 & 0x900) == 0x800) {
    fStack_9c = (float)(*(uint *)(lVar2 + 0x1200) ^ DAT_1808adec0);
    local_a8 = *param_1 - fStack_9c;
    fStack_a4 = param_1[1] - fStack_9c;
    fStack_a0 = param_1[2] + fStack_9c;
    fStack_9c = param_1[3] + fStack_9c;
    if ((((*(float *)(lVar2 + 0x110) < local_a8) || (*(float *)(lVar2 + 0x114) < fStack_a4)) ||
        (fStack_a0 <= *(float *)(lVar2 + 0x110))) || (fStack_9c <= *(float *)(lVar2 + 0x114))) {
      FUN_180420a40(lVar2 + 0x2418,lVar1,&local_a8);
    }
  }
  return;
}



/* ===== 180421010 FUN_180421010 ===== */

void FUN_180421010(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  lVar2 = DAT_180ca0a50;
  piVar4 = *(int **)(param_2 + 2);
  piVar1 = piVar4 + (longlong)*param_2 * 6;
  if ((longlong)*param_2 * 0x18 != 0) {
    do {
      iVar3 = *piVar4;
      if (iVar3 == 1) {
        if ((*(byte *)(lVar2 + 0x28f4) & 0x40) == 0) {
          iVar3 = 1;
        }
        else {
          pcVar5 = "Clear";
          if ((char)piVar4[1] != '\0') {
            pcVar5 = "SelectAll";
          }
          FUN_1803f5060("[selection] %s: Request: SetAll %d (= %s)\n","EndMultiSelect",
                        (char)piVar4[1],pcVar5);
          iVar3 = *piVar4;
        }
      }
      if ((iVar3 == 2) && ((*(byte *)(lVar2 + 0x28f4) & 0x40) != 0)) {
        FUN_1803f5060("[selection] %s: Request: SetRange %I64d..%I64d (0x%I64X..0x%I64X) = %d (dir %d)\n"
                      ,"EndMultiSelect",*(undefined8 *)(piVar4 + 2),*(undefined8 *)(piVar4 + 4),
                      *(undefined8 *)(piVar4 + 2),*(undefined8 *)(piVar4 + 4),(char)piVar4[1],
                      (int)*(char *)((longlong)piVar4 + 5));
      }
      piVar4 = piVar4 + 6;
    } while (piVar4 != piVar1);
  }
  return;
}



/* ===== 180421100 FUN_180421100 ===== */

undefined4 * FUN_180421100(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  lVar5 = DAT_180ca0a50;
  puVar2 = *(undefined4 **)(DAT_180ca0a50 + 0x24a0);
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  lVar4 = *(longlong *)(puVar2 + 10);
  if (puVar2[0xc] != *(int *)(DAT_180ca0a50 + 0x1ea4)) {
    FUN_1803ebc00("EndMultiSelect() FocusScope mismatch!");
  }
  if ((puVar2[0xd] & 0x1000) == 0) {
    fVar10 = *(float *)(lVar3 + 0x238) + *(float *)(lVar3 + 0x80);
    fVar11 = *(float *)(lVar3 + 0x23c) + *(float *)(lVar3 + 0x84);
    fVar13 = *(float *)(lVar3 + 0x240);
    fVar12 = *(float *)(lVar3 + 0x244);
    if (fVar13 <= fVar10) {
      fVar10 = fVar13;
    }
    if (fVar12 <= fVar11) {
      fVar11 = fVar12;
    }
  }
  else {
    fVar10 = (float)puVar2[0xe];
    fVar11 = (float)puVar2[0xf];
    fVar13 = *(float *)(lVar3 + 0x130);
    if (*(float *)(lVar3 + 0x130) <= fVar10) {
      fVar13 = fVar10;
    }
    fVar12 = *(float *)(lVar3 + 0x134);
    if (*(float *)(lVar3 + 0x134) <= fVar11) {
      fVar12 = fVar11;
    }
  }
  local_58 = fVar10;
  local_54 = fVar11;
  local_50 = fVar13;
  local_4c = fVar12;
  if (*(char *)((longlong)puVar2 + 0x52) != '\0') {
    if ((*(char *)((longlong)puVar2 + 0x21) != '\0') ||
       ((*(char *)((longlong)puVar2 + 0x55) == '\0' && (*(longlong *)(puVar2 + 4) != -1)))) {
      if ((*(byte *)(lVar5 + 0x28f4) & 0x40) != 0) {
        FUN_1803f5060("[selection] EndMultiSelect: Reset RangeSrcItem.\n");
      }
      *(undefined8 *)(lVar4 + 0x18) = 0xffffffffffffffff;
    }
    if ((*(char *)(puVar2 + 0x15) == '\0') && (*(longlong *)(lVar4 + 0x20) != -1)) {
      if ((*(byte *)(lVar5 + 0x28f4) & 0x40) != 0) {
        FUN_1803f5060("[selection] EndMultiSelect: Reset NavIdItem.\n");
      }
      *(undefined8 *)(lVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined1 *)(lVar4 + 0x15) = 0xff;
    }
    if (((((puVar2[0xd] & 0xc0) != 0) && (puVar2[0x12] != 0)) &&
        (*(int *)(DAT_180ca0a50 + 0x2418) == puVar2[0x12])) &&
       (*(char *)(DAT_180ca0a50 + 0x241c) != '\0')) {
      FUN_180420ce0(&local_58);
      fVar10 = local_58;
      fVar11 = local_54;
      fVar12 = local_4c;
      fVar13 = local_50;
    }
  }
  if (*(char *)((longlong)puVar2 + 0x51) == '\0') {
    iVar7 = puVar2[1];
    if (iVar7 < 0) {
      iVar7 = iVar7 + iVar7 / 2;
      iVar8 = 0;
      if (0 < iVar7) {
        iVar8 = iVar7;
      }
      FUN_180424ff0(puVar2,iVar8);
    }
    *puVar2 = 0;
  }
  if (((((*(float *)(lVar3 + 0x228) <= *(float *)(lVar5 + 0x110)) &&
        (*(float *)(lVar3 + 0x22c) <= *(float *)(lVar5 + 0x114))) &&
       ((*(float *)(lVar5 + 0x110) < *(float *)(lVar3 + 0x230) &&
        ((*(float *)(lVar5 + 0x114) < *(float *)(lVar3 + 0x234) &&
         (cVar6 = FUN_1803e7af0(1), lVar4 = DAT_180ca0a50, cVar6 != '\0')))))) &&
      ((((uint)puVar2[0xd] >> 0xc & 1) == 0 ||
       ((((fVar10 <= *(float *)(lVar5 + 0x110) && (fVar11 <= *(float *)(lVar5 + 0x114))) &&
         (*(float *)(lVar5 + 0x110) < fVar13)) && (*(float *)(lVar5 + 0x114) < fVar12)))))) &&
     ((*(int *)(lVar5 + 0x1560) == 0 && (*(int *)(lVar5 + 0x1578) == 0)))) {
    if ((((puVar2[0xd] & 0xc0) != 0) &&
        ((*(char *)(lVar5 + 0x241c) == '\0' && (*(char *)(lVar5 + 0x241d) == '\0')))) &&
       (*(short *)(lVar5 + 0xb4a) == 1)) {
      *(undefined4 *)(DAT_180ca0a50 + 0x2418) = puVar2[0x12];
      *(undefined2 *)(lVar4 + 0x241d) = 0x101;
      *(undefined1 *)(lVar4 + 0x241f) = 1;
      *(undefined2 *)(lVar4 + 0x2424) = *(undefined2 *)(lVar4 + 0x130);
      uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 0x14f8) + 0x128);
      fVar10 = (float)*(undefined8 *)(lVar4 + 0x110) - (float)uVar1;
      fVar11 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x110) >> 0x20) -
               (float)((ulonglong)uVar1 >> 0x20);
      *(undefined8 *)(lVar4 + 0x2438) = 0;
      *(float *)(lVar4 + 0x2428) = fVar10;
      *(float *)(lVar4 + 0x242c) = fVar11;
      *(float *)(lVar4 + 0x2430) = fVar10;
      *(float *)(lVar4 + 0x2434) = fVar11;
      FUN_1803ef030(lVar3,2);
      lVar4 = DAT_180ca0a50;
      iVar7 = puVar2[0x12];
      *(int *)(DAT_180ca0a50 + 0x1560) = iVar7;
      *(undefined1 *)(lVar4 + 0x1574) = 0;
      if ((iVar7 != 0) && (*(int *)(lVar4 + 0x1564) != iVar7)) {
        *(undefined8 *)(lVar4 + 0x156c) = 0;
      }
      if ((puVar2[0xd] & 0x1000) != 0) {
        local_58 = *(float *)(lVar5 + 0x110);
        local_54 = *(float *)(lVar5 + 0x114);
        local_50 = local_58;
        local_4c = local_54;
        FUN_1803ef480(0,0,puVar2[0xc],&local_58);
      }
    }
    if (((((puVar2[0xd] & 0x400) != 0) && (*(char *)(DAT_180ca0a50 + 0xb5e) != '\0')) &&
        (*(char *)(DAT_180ca0a50 + 0x1cc4) == '\0')) &&
       ((*(float *)(DAT_180ca0a50 + 0xbc4) <
         *(float *)(DAT_180ca0a50 + 0xa0) * *(float *)(DAT_180ca0a50 + 0xa0) &&
        (*(int *)(lVar5 + 0x130) == 0)))) {
      FUN_180421da0(puVar2);
    }
  }
  lVar4 = DAT_180ca0a50;
  if ((puVar2[0xd] & 0x10000) != 0) {
    *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
    if (((*(longlong *)(lVar4 + 0x2068) == *(longlong *)(lVar4 + 0x14f8)) &&
        (*(char *)(lVar4 + 0x2109) != '\0')) &&
       (*(int *)(lVar4 + 0x2074) == *(int *)(*(longlong *)(lVar4 + 0x14f8) + 0x170))) {
      *(uint *)(lVar4 + 0x210c) = *(uint *)(lVar4 + 0x210c) & 0xfffffff4;
      *(uint *)(lVar4 + 0x210c) = *(uint *)(lVar4 + 0x210c) | 4;
    }
  }
  if ((*(longlong *)(lVar5 + 0x2360) != 0) &&
     (*(char *)(*(longlong *)(lVar5 + 0x2360) + 0x23a) != '\0')) {
    FUN_18040f810();
  }
  lVar4 = DAT_180ca0a50;
  fVar10 = (float)puVar2[0x11];
  if ((float)puVar2[0x11] <= *(float *)(lVar3 + 0x134)) {
    fVar10 = *(float *)(lVar3 + 0x134);
  }
  fVar11 = (float)puVar2[0x10];
  if ((float)puVar2[0x10] <= *(float *)(lVar3 + 0x130)) {
    fVar11 = *(float *)(lVar3 + 0x130);
  }
  *(float *)(lVar3 + 0x134) = fVar10;
  *(float *)(lVar3 + 0x130) = fVar11;
  iVar7 = *(int *)(lVar4 + 0x1ff0);
  if (*(short *)(*(longlong *)(lVar4 + 0x28e8) + 0xc) < iVar7) {
    *(int *)(lVar4 + 0x1ff0) = iVar7 + -1;
    if (iVar7 + -1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(*(longlong *)(lVar4 + 0x1ff8) + (longlong)(iVar7 + -2) * 8);
    }
    *(undefined4 *)(lVar4 + 0x1ea4) = uVar9;
  }
  else {
    fVar11 = (float)FUN_1803ebc00("Calling PopFocusScope() too many times!");
  }
  if ((*(byte *)(lVar5 + 0x28f4) & 0x40) != 0) {
    FUN_180421010(fVar11,puVar2);
  }
  *(undefined8 *)(puVar2 + 0xc) = 0;
  iVar8 = *(int *)(lVar5 + 0x24a8);
  iVar7 = iVar8 + -1;
  *(int *)(lVar5 + 0x24a8) = iVar7;
  if (iVar7 < 1) {
    *(undefined8 *)(lVar5 + 0x24a0) = 0;
  }
  else {
    *(longlong *)(lVar5 + 0x24a0) = (longlong)(iVar8 + -2) * 0x58 + *(longlong *)(lVar5 + 0x24b8);
  }
  return puVar2;
}



/* ===== 180421630 FUN_180421630 ===== */

void FUN_180421630(int param_1,char *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  
  lVar5 = DAT_180ca0a50;
  cVar6 = *param_2;
  lVar1 = *(longlong *)(DAT_180ca0a50 + 0x24a0);
  if (*(char *)(lVar1 + 0x52) != '\0') {
    if (*(char *)(lVar1 + 0x50) != -1) {
      cVar6 = *(char *)(lVar1 + 0x50) == '\x01';
    }
    if (*(char *)(lVar1 + 0x53) != '\0') {
      lVar2 = *(longlong *)(lVar1 + 0x28);
      lVar3 = *(longlong *)(DAT_180ca0a50 + 0x1ec0);
      if ((*(char *)(lVar1 + 0x56) == '\0') && (*(int *)(DAT_180ca0a50 + 0x2234) == param_1)) {
        *(undefined1 *)(lVar1 + 0x56) = 1;
        if (*(longlong *)(lVar2 + 0x18) == -1) {
          *(longlong *)(lVar2 + 0x18) = lVar3;
          *(bool *)(lVar2 + 0x14) = cVar6 != '\0';
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (((*(longlong *)(lVar2 + 0x18) == lVar3) || (bVar4)) ||
         (*(char *)(lVar1 + 0x55) != *(char *)(lVar1 + 0x56))) {
        cVar6 = *(char *)(lVar2 + 0x14) != '\0';
      }
      else if (((*(uint *)(lVar1 + 0x4c) & 0x1000) == 0) && ((*(byte *)(lVar1 + 0x34) & 0x10) == 0))
      {
        cVar6 = '\0';
      }
    }
    *param_2 = cVar6;
  }
  if (param_3 != (uint *)0x0) {
    if (((*(uint *)(lVar1 + 0x34) >> 0xe & 1) == 0) &&
       (((*(uint *)(lVar1 + 0x34) >> 0xf & 1) != 0 ||
        ((cVar6 != '\0' &&
         ((*(int *)(lVar5 + 0x1578) != param_1 || (*(char *)(lVar5 + 0x1589) == '\0')))))))) {
      *param_3 = *param_3 & 0xffffffcf | 0x80020;
      return;
    }
    *param_3 = *param_3 & 0xffffffcf | 0x80010;
  }
  return;
}



/* ===== 180421740 FUN_180421740 ===== */

void FUN_180421740(int param_1,char *param_2,char *param_3)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  char local_86;
  undefined2 local_72;
  
  lVar8 = DAT_180ca0a50;
  cVar21 = *param_2;
  lVar15 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  piVar3 = *(int **)(DAT_180ca0a50 + 0x24a0);
  cVar11 = *param_3;
  lVar4 = *(longlong *)(piVar3 + 10);
  if (cVar11 != '\0') {
    *(undefined1 *)((longlong)piVar3 + 0x52) = 1;
  }
  local_86 = '\0';
  if ((*(byte *)(lVar8 + 0x1ef0) & 1) != 0) {
    local_86 = FUN_1803dd930(0x20);
  }
  if ((*(char *)((longlong)piVar3 + 0x52) == '\0') && (local_86 == '\0')) {
    return;
  }
  uVar2 = piVar3[0xd];
  lVar5 = *(longlong *)(lVar8 + 0x1ec0);
  uVar17 = piVar3[0x13] & 0x1000;
  bVar18 = uVar17 != 0;
  uVar16 = piVar3[0x13] & 0x2000;
  bVar19 = uVar16 != 0;
  bVar20 = false;
  if (*(int *)(lVar8 + 0x2064) == param_1) {
    bVar20 = *(longlong *)(lVar4 + 0x18) == -1;
  }
  if (*(char *)((longlong)piVar3 + 0x51) == '\0') {
    if (piVar3[1] < 0) {
      FUN_180424ff0(piVar3);
    }
    *piVar3 = 0;
    *(undefined1 *)((longlong)piVar3 + 0x51) = 1;
  }
  if (*(int *)(lVar8 + 0x2234) == param_1) {
    if ((uVar2 & 8) == 0) {
      if (uVar17 == 0) {
        cVar21 = '\x01';
        cVar11 = '\x01';
      }
      else if (uVar16 != 0) {
        cVar11 = '\x01';
      }
      goto LAB_1804218a4;
    }
    if (uVar16 != 0) {
      cVar11 = '\x01';
      goto LAB_1804218a4;
    }
    if (uVar17 != 0) goto LAB_1804218a4;
LAB_1804218a9:
    *(longlong *)(lVar4 + 0x18) = lVar5;
    *(char *)(lVar4 + 0x14) = cVar21;
  }
  else {
LAB_1804218a4:
    if (bVar20) goto LAB_1804218a9;
  }
  if (((piVar3[0x12] != 0) && (*(int *)(DAT_180ca0a50 + 0x2418) == piVar3[0x12])) &&
     (*(char *)(DAT_180ca0a50 + 0x241c) != '\0')) {
    fVar23 = *(float *)(lVar8 + 0x1ef4);
    fVar24 = *(float *)(lVar8 + 0x1efc);
    fVar1 = *(float *)(lVar8 + 0x1f00);
    if (((*(char *)(lVar15 + 0x178) == '\0') && (lVar6 = *(longlong *)(lVar8 + 0x2360), lVar6 != 0))
       && (*(int *)(lVar6 + 0x74) != -1)) {
      lVar13 = (longlong)*(int *)(lVar6 + 0x74) * 0x78;
      if ((*(uint *)(lVar8 + 0x1eec) & 0x200) == 0) {
        fVar26 = *(float *)(lVar15 + 0x268);
        fVar27 = *(float *)(lVar15 + 0x270);
      }
      else {
        fVar26 = *(float *)(lVar8 + 0x1f24);
        fVar27 = *(float *)(lVar8 + 0x1f2c);
      }
      fVar22 = *(float *)(lVar13 + 8 + *(longlong *)(lVar6 + 0x18));
      fVar25 = *(float *)(lVar13 + 0xc + *(longlong *)(lVar6 + 0x18));
      if (fVar26 != fVar27) {
        if (fVar26 <= fVar22) {
          fVar22 = fVar26;
        }
        if (fVar25 <= fVar27) {
          fVar25 = fVar27;
        }
      }
      if (fVar25 <= fVar24) {
        fVar24 = fVar25;
      }
      if (fVar23 <= fVar22) {
        fVar23 = fVar22;
      }
    }
    if (((*(float *)(DAT_180ca0a50 + 0x2498) < *(float *)(lVar8 + 0x1ef8) ||
          *(float *)(DAT_180ca0a50 + 0x2498) == *(float *)(lVar8 + 0x1ef8)) ||
        (fVar1 < *(float *)(DAT_180ca0a50 + 0x2490) || fVar1 == *(float *)(DAT_180ca0a50 + 0x2490)))
       || ((*(float *)(DAT_180ca0a50 + 0x2494) <= fVar23 ||
           (fVar24 < *(float *)(DAT_180ca0a50 + 0x248c) ||
            fVar24 == *(float *)(DAT_180ca0a50 + 0x248c))))) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if ((((*(float *)(DAT_180ca0a50 + 0x2488) < *(float *)(lVar8 + 0x1ef8) ||
           *(float *)(DAT_180ca0a50 + 0x2488) == *(float *)(lVar8 + 0x1ef8)) ||
         (fVar1 < *(float *)(DAT_180ca0a50 + 0x2480) || fVar1 == *(float *)(DAT_180ca0a50 + 0x2480))
         ) || (*(float *)(DAT_180ca0a50 + 0x2484) <= fVar23)) ||
       (fVar24 < *(float *)(DAT_180ca0a50 + 0x247c) || fVar24 == *(float *)(DAT_180ca0a50 + 0x247c))
       ) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar20) {
      if ((!bVar7) && (cVar21 == '\0')) {
LAB_180421a13:
        if ((*(int *)(lVar4 + 0x10) < 1) && (*(char *)(DAT_180ca0a50 + 0x241f) != '\0')) {
          cVar11 = '\x01';
          *(undefined1 *)(DAT_180ca0a50 + 0x241f) = 0;
        }
        else {
          iVar10 = piVar3[1];
          cVar21 = cVar21 == '\0';
          if (*piVar3 == iVar10) {
            iVar12 = *piVar3 + 1;
            if (iVar10 == 0) {
              iVar10 = 8;
            }
            else {
              iVar10 = iVar10 / 2 + iVar10;
            }
            if (iVar12 < iVar10) {
              iVar12 = iVar10;
            }
            FUN_180424ff0(piVar3,iVar12);
          }
          lVar13 = (longlong)*piVar3;
          lVar6 = *(longlong *)(piVar3 + 2);
          *(undefined4 *)(lVar6 + lVar13 * 0x18) = 2;
          *(char *)(lVar6 + 4 + lVar13 * 0x18) = cVar21;
          *(undefined1 *)(lVar6 + 5 + lVar13 * 0x18) = 1;
          *(undefined2 *)(lVar6 + 6 + lVar13 * 0x18) = local_72;
          *(longlong *)(lVar6 + 8 + lVar13 * 0x18) = lVar5;
          *(longlong *)(lVar6 + 0x10 + lVar13 * 0x18) = lVar5;
          *piVar3 = *piVar3 + 1;
        }
        iVar12 = *(int *)(lVar4 + 0x10) + 1;
        iVar10 = 1;
        if (0 < iVar12) {
          iVar10 = iVar12;
        }
        *(int *)(lVar4 + 0x10) = iVar10;
      }
    }
    else if (bVar7) goto LAB_180421a13;
  }
  if (((local_86 == '\0') || (iVar10 = param_1, cVar9 = FUN_1803e9690(1,0,0), cVar9 == '\0')) ||
     ((uVar2 & 0x20008) != 0)) {
    if (cVar11 != '\0') goto LAB_180421b56;
LAB_180421b6c:
    bVar20 = false;
  }
  else {
    if ((*(int *)(lVar8 + 0x1578) != 0) && (*(int *)(lVar8 + 0x1578) != iVar10)) {
      FUN_1803dd660(0,0);
    }
    FUN_1803ef530(param_1,lVar15);
    if (cVar11 == '\0') {
      if (cVar21 != '\0') goto LAB_180421b6c;
      cVar11 = '\x01';
      bVar18 = false;
      bVar19 = false;
    }
LAB_180421b56:
    if ((*(int *)(lVar8 + 0x207c) != param_1) || ((*(byte *)(lVar8 + 0x2088) & 1) == 0))
    goto LAB_180421b6c;
    bVar20 = true;
  }
  lVar15 = DAT_180ca0a50;
  if ((cVar11 == '\0') || ((bVar20 && (cVar21 != '\0')))) goto LAB_180421d27;
  if ((*(int *)(lVar8 + 0x2234) == param_1) || (iVar10 = 1, *(int *)(lVar8 + 0x207c) == param_1)) {
    iVar10 = *(int *)(lVar8 + 0x20b8);
  }
  if (((((uVar2 & 0xc0) != 0) && (*(char *)(lVar8 + 0x241c) == '\0')) &&
      (*(char *)(lVar8 + 0x241d) == '\0')) && ((iVar10 == 1 && (*(short *)(lVar8 + 0xb4a) == 1)))) {
    *(int *)(DAT_180ca0a50 + 0x2418) = piVar3[0x12];
    *(bool *)(lVar15 + 0x241e) = lVar5 == -1;
    *(bool *)(lVar15 + 0x241f) = lVar5 == -1;
    *(undefined1 *)(lVar15 + 0x241d) = 1;
    *(undefined2 *)(lVar15 + 0x2424) = *(undefined2 *)(lVar15 + 0x130);
    uVar14 = *(undefined8 *)(*(longlong *)(lVar15 + 0x14f8) + 0x128);
    fVar23 = (float)*(undefined8 *)(lVar15 + 0x110) - (float)uVar14;
    fVar24 = (float)((ulonglong)*(undefined8 *)(lVar15 + 0x110) >> 0x20) -
             (float)((ulonglong)uVar14 >> 0x20);
    *(undefined8 *)(lVar15 + 0x2438) = 0;
    *(float *)(lVar15 + 0x2428) = fVar23;
    *(float *)(lVar15 + 0x242c) = fVar24;
    *(float *)(lVar15 + 0x2430) = fVar23;
    *(float *)(lVar15 + 0x2434) = fVar24;
  }
  if ((uVar2 & 0x10) != 0) goto LAB_180421c86;
  if ((uVar2 & 1) == 0) {
    if (((iVar10 == 1) || (*(int *)(lVar8 + 0x207c) == param_1)) && (!bVar18)) {
      if (((uVar2 & 0x20) == 0) || (cVar21 == '\0')) goto LAB_180421c7e;
      goto LAB_180421c86;
    }
    if (1 < iVar10 - 2U) goto LAB_180421c86;
    if (!bVar19) goto LAB_180421ce7;
    if (!bVar18) goto LAB_180421c7e;
LAB_180421c97:
    lVar15 = *(longlong *)(lVar4 + 0x18);
    if (*(longlong *)(lVar4 + 0x18) == -1) {
      *(longlong *)(lVar4 + 0x18) = lVar5;
      lVar15 = lVar5;
    }
    if ((uVar2 >> 0x14 & 1) == 0) {
      if (bVar18) {
LAB_180421cb3:
        if (*(char *)(lVar4 + 0x14) != -1) {
          bVar20 = *(char *)(lVar4 + 0x14) != '\0';
          goto LAB_180421cce;
        }
      }
      bVar20 = true;
    }
    else {
      if (*(char *)((longlong)piVar3 + 0x53) != '\0') goto LAB_180421cb3;
      bVar20 = cVar21 == '\0';
    }
LAB_180421cce:
    uVar14 = 0xffffffff;
    if (*(char *)((longlong)piVar3 + 0x55) != '\0') {
      uVar14 = 1;
    }
  }
  else {
LAB_180421c7e:
    FUN_180421da0(piVar3);
LAB_180421c86:
    if ((bVar19) && ((uVar2 & 1) == 0)) goto LAB_180421c97;
LAB_180421ce7:
    if (((uVar2 >> 0x14 & 1) != 0) || (bVar18)) {
      cVar21 = cVar21 == '\0';
    }
    else {
      cVar21 = true;
    }
    *(longlong *)(lVar4 + 0x18) = lVar5;
    uVar14 = 1;
    lVar15 = lVar5;
    bVar20 = (bool)cVar21;
  }
  FUN_180421e30(piVar3,bVar20,uVar14,lVar15,lVar5);
LAB_180421d27:
  if (*(longlong *)(lVar4 + 0x18) == lVar5) {
    *(bool *)(lVar4 + 0x14) = cVar21 != '\0';
  }
  if (*(int *)(lVar8 + 0x2064) == param_1) {
    *(longlong *)(lVar4 + 0x20) = lVar5;
    *(bool *)(lVar4 + 0x15) = cVar21 != '\0';
  }
  if (*(longlong *)(lVar4 + 0x20) == lVar5) {
    *(undefined1 *)(piVar3 + 0x15) = 1;
  }
  *param_2 = cVar21;
  *param_3 = cVar11;
  return;
}



/* ===== 180421da0 FUN_180421da0 ===== */

void FUN_180421da0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined2 local_22;
  
  iVar1 = param_1[1];
  if (iVar1 < 0) {
    iVar1 = iVar1 / 2 + iVar1;
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    FUN_180424ff0(param_1,iVar4);
  }
  *param_1 = 0;
  if (param_1[1] == 0) {
    FUN_180424ff0(param_1,8);
  }
  lVar3 = (longlong)*param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  *(undefined4 *)(lVar2 + lVar3 * 0x18) = 1;
  *(undefined2 *)(lVar2 + 4 + lVar3 * 0x18) = 0;
  *(undefined2 *)(lVar2 + 6 + lVar3 * 0x18) = local_22;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0xffffffffffffffff;
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 180421e30 FUN_180421e30 ===== */

void FUN_180421e30(int *param_1,undefined1 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 local_42;
  
  iVar2 = param_1[1];
  uVar5 = param_5;
  if (0 < param_3) {
    uVar5 = param_4;
  }
  if (0 < param_3) {
    param_4 = param_5;
  }
  if (*param_1 == iVar2) {
    iVar4 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    FUN_180424ff0(param_1,iVar4);
  }
  lVar3 = (longlong)*param_1;
  lVar1 = *(longlong *)(param_1 + 2);
  *(undefined4 *)(lVar1 + lVar3 * 0x18) = 2;
  *(undefined1 *)(lVar1 + 4 + lVar3 * 0x18) = param_2;
  *(char *)(lVar1 + 5 + lVar3 * 0x18) = (char)param_3;
  *(undefined2 *)(lVar1 + 6 + lVar3 * 0x18) = local_42;
  *(undefined8 *)(lVar1 + 8 + lVar3 * 0x18) = uVar5;
  *(undefined8 *)(lVar1 + 0x10 + lVar3 * 0x18) = param_4;
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 180421ed0 FUN_180421ed0 ===== */

float FUN_180421ed0(uint *param_1,float param_2,float param_3,float param_4,float param_5)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  
  uVar4 = (ushort)(int)param_2;
  if ((ushort)(int)param_2 <= *(ushort *)((longlong)param_1 + 0x12)) {
    uVar4 = *(ushort *)((longlong)param_1 + 0x12);
  }
  *(ushort *)((longlong)param_1 + 0x12) = uVar4;
  uVar2 = (ushort)(int)param_3;
  if ((ushort)(int)param_3 <= (ushort)param_1[5]) {
    uVar2 = (ushort)param_1[5];
  }
  *(ushort *)(param_1 + 5) = uVar2;
  uVar6 = (ushort)(int)param_4;
  if ((ushort)(int)param_4 <= *(ushort *)((longlong)param_1 + 0x16)) {
    uVar6 = *(ushort *)((longlong)param_1 + 0x16);
  }
  *(ushort *)((longlong)param_1 + 0x16) = uVar6;
  uVar5 = (ushort)(int)param_5;
  if ((ushort)(int)param_5 <= (ushort)param_1[6]) {
    uVar5 = (ushort)param_1[6];
  }
  bVar7 = uVar4 != 0;
  *(ushort *)(param_1 + 6) = uVar5;
  if ((uVar4 != 0) && (uVar2 != 0)) {
    uVar4 = uVar4 + (short)param_1[2];
  }
  sVar3 = uVar2 + uVar4;
  if ((uVar2 != 0 || bVar7) && (uVar6 != 0)) {
    sVar3 = sVar3 + (short)param_1[2];
  }
  sVar3 = sVar3 + uVar6;
  if ((uVar6 != 0 || (uVar2 != 0 || bVar7)) && (uVar5 != 0)) {
    sVar3 = sVar3 + (short)param_1[2];
  }
  uVar5 = uVar5 + sVar3;
  param_1[1] = (uint)uVar5;
  uVar1 = (uint)uVar5;
  if ((uint)uVar5 <= *param_1) {
    uVar1 = *param_1;
  }
  return (float)uVar1;
}



/* ===== 180421fa0 FUN_180421fa0 ===== */

void FUN_180421fa0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar6 + 0x14f8);
  if (*(char *)(lVar5 + 0xd1) == '\0') {
    if ((((*(char *)(lVar6 + 0x2109) == '\0') || (*(int *)(lVar6 + 0x2158) != 0)) ||
        (*(int *)(lVar6 + 0x21c8) != 0)) ||
       ((1 < *(uint *)(lVar6 + 0x2118) ||
        (lVar8 = *(longlong *)(lVar6 + 0x2068), (*(uint *)(lVar8 + 0x14) & 0x10000000) == 0)))) {
      if ((*(longlong *)(lVar6 + 0x2068) == lVar5) &&
         ((*(char *)(lVar6 + 0x2109) != '\0' &&
          (*(int *)(lVar6 + 0x2074) == *(int *)(lVar5 + 0x170))))) {
        *(uint *)(lVar6 + 0x210c) = *(uint *)(lVar6 + 0x210c) & 0xfffffff4;
        *(uint *)(lVar6 + 0x210c) = *(uint *)(lVar6 + 0x210c) | 4;
      }
    }
    else {
      if (*(longlong *)(lVar8 + 0x3b0) == 0) {
        lVar7 = 0;
      }
      else {
        do {
          lVar7 = *(longlong *)(lVar8 + 0x3b0);
          if ((*(uint *)(lVar7 + 0x14) & 0x10000000) == 0) goto LAB_180422063;
          lVar8 = lVar7;
        } while (*(longlong *)(lVar7 + 0x3b0) != 0);
        lVar7 = 0;
      }
LAB_180422063:
      if (((lVar7 == lVar5) && (*(int *)(lVar8 + 0x1d8) == 0)) &&
         ((*(byte *)(lVar6 + 0x210c) & 0x80) == 0)) {
        FUN_1803ef030(lVar5,0);
        FUN_1803ef480(*(undefined4 *)(lVar5 + 0x3f4),1,0,lVar5 + 0x408);
        if (*(char *)(lVar6 + 0x2060) != '\0') {
          *(undefined1 *)(lVar6 + 0x2060) = 0;
          *(undefined1 *)(lVar6 + 0x20c8) = 2;
        }
        lVar8 = DAT_180ca0a50;
        uVar1 = *(uint *)(lVar6 + 0x210c);
        uVar2 = *(undefined4 *)(lVar6 + 0x2110);
        uVar3 = *(undefined4 *)(lVar6 + 0x2120);
        uVar4 = *(undefined4 *)(lVar6 + 0x2118);
        *(undefined2 *)(lVar6 + 0x2061) = 0x101;
        *(undefined2 *)(lVar8 + 0x2108) = 0;
        *(undefined1 *)(lVar8 + 0x210a) = 1;
        *(bool *)(lVar8 + 0x20c9) = *(char *)(lVar8 + 0x20ca) != '\0';
        *(uint *)(lVar8 + 0x210c) = uVar1 | 0x80;
        *(undefined4 *)(lVar8 + 0x2118) = uVar4;
        *(undefined4 *)(lVar8 + 0x2120) = uVar3;
        *(undefined4 *)(lVar8 + 0x2110) = uVar2;
      }
    }
    FUN_1803e0390();
    FUN_1803e8b00();
    *(float *)(lVar5 + 0x17c) = *(float *)(lVar5 + 0x118) - *(float *)(lVar5 + 0x28);
    lVar8 = (longlong)*(int *)(lVar6 + 0x2010) * 0x3c;
    lVar6 = *(longlong *)(lVar6 + 0x2018);
    uVar2 = *(undefined4 *)(lVar8 + -0x30 + lVar6);
    uVar3 = *(undefined4 *)(lVar8 + -0x2c + lVar6);
    *(undefined1 *)(lVar8 + -4 + lVar6) = 0;
    fVar10 = *(float *)(lVar5 + 0x130) - *(float *)(lVar5 + 0x98);
    fVar9 = *(float *)(lVar5 + 0x138);
    if (*(float *)(lVar5 + 0x138) <= fVar10) {
      fVar9 = fVar10;
    }
    *(float *)(lVar5 + 0x138) = fVar9;
    FUN_1803ecb10();
    *(undefined4 *)(lVar5 + 0x130) = uVar2;
    *(undefined4 *)(lVar5 + 0x134) = uVar3;
    *(undefined4 *)(lVar5 + 0x1d4) = 1;
    *(undefined1 *)(lVar5 + 0x158) = 0;
    *(undefined4 *)(lVar5 + 0x170) = 0;
    *(undefined1 *)(lVar5 + 0x17b) = 0;
  }
  return;
}



/* ===== 180422210 FUN_180422210 ===== */

ulonglong FUN_180422210(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar4 = (ulonglong)*(int *)(DAT_180ca0a50 + 0x2030);
  if ((*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) &&
     (uVar2 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8), (*(uint *)(uVar2 + 0x14) & 0x10000000) == 0))
  {
    lVar6 = uVar4 * 0x58;
    uVar1 = *(uint *)(lVar6 + 0x18 + *(longlong *)(DAT_180ca0a50 + 0x2028));
    uVar4 = (ulonglong)uVar1;
    if ((*(uint *)(uVar2 + 0x170) == uVar1) &&
       ((uVar4 = *(ulonglong *)(lVar6 + 8 + *(longlong *)(DAT_180ca0a50 + 0x2028)), uVar4 != 0 &&
        ((*(uint *)(uVar4 + 0x14) & 0x10000000) != 0)))) {
      uVar5 = uVar4;
      do {
        uVar3 = *(ulonglong *)(*(longlong *)(uVar5 + 0x3c0) + 0x3c8);
        bVar7 = uVar5 != uVar3;
        uVar5 = uVar3;
      } while (bVar7);
      if (uVar3 == uVar2) {
LAB_18042229a:
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      do {
        if (uVar4 == uVar2) goto LAB_18042229a;
      } while ((uVar4 != uVar3) && (uVar4 = *(ulonglong *)(uVar4 + 0x3b0), uVar4 != 0));
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 1804222a0 FUN_1804222a0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1804222a0(char *param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  float fVar24;
  longlong lVar25;
  char cVar26;
  undefined1 uVar27;
  byte bVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  longlong lVar33;
  longlong lVar34;
  int *piVar35;
  char *pcVar36;
  char cVar37;
  char cVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 local_res10;
  char local_res18;
  float local_res20;
  undefined4 local_res24;
  float local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  
  lVar25 = DAT_180ca0a50;
  uVar7 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar7 + 0xce) = 1;
  lVar8 = *(longlong *)(lVar25 + 0x14f8);
  if (*(char *)(lVar8 + 0xd1) != '\0') {
    return uVar7 & 0xffffffffffffff00;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  iVar29 = FUN_1803e8900(lVar8,param_1);
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar33 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(int *)(lVar33 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != iVar29) ||
       (*(char *)(lVar33 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_18042234a;
    bVar28 = 1;
  }
  else {
LAB_18042234a:
    bVar28 = 0;
  }
  piVar35 = *(int **)(lVar25 + 0x26f8);
  iVar6 = *(int *)(lVar25 + 0x26f0);
  uVar31 = 0x11020145;
  if ((*(uint *)(lVar8 + 0x14) & 0x10000000) == 0) {
    uVar31 = 0x10020145;
  }
  piVar1 = piVar35 + iVar6;
  for (; piVar35 < piVar1; piVar35 = piVar35 + 1) {
    if (*piVar35 == iVar29) {
      if (bVar28 == 0) {
        *(undefined4 *)(lVar25 + 0x1f38) = 0;
      }
      else {
        bVar28 = FUN_1803ee380(iVar29,param_1,uVar31);
      }
      goto LAB_180422d6e;
    }
  }
  iVar30 = *(int *)(lVar25 + 0x26f4);
  if (iVar6 == iVar30) {
    if (iVar30 == 0) {
      iVar30 = 8;
    }
    else {
      iVar30 = iVar30 / 2 + iVar30;
    }
    iVar9 = iVar6 + 1;
    if (iVar6 + 1 < iVar30) {
      iVar9 = iVar30;
    }
    FUN_18007e1d0(lVar25 + 0x26f0,iVar9);
  }
  lVar33 = DAT_180ca0a50;
  *(int *)(*(longlong *)(lVar25 + 0x26f8) + (longlong)*(int *)(lVar25 + 0x26f0) * 4) = iVar29;
  *(int *)(lVar25 + 0x26f0) = *(int *)(lVar25 + 0x26f0) + 1;
  fVar4 = DAT_1808acda0;
  pcVar36 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar36 != '\0') {
      if (((*pcVar36 == '#') && (pcVar36[1] == '#')) ||
         (pcVar36 = pcVar36 + 1, pcVar36 == (char *)0xffffffffffffffff)) break;
    }
  }
  uVar32 = *(undefined4 *)(lVar33 + 0x1200);
  if (param_1 == pcVar36) {
    fVar48 = 0.0;
  }
  else {
    FUN_18040a2f0(&local_res20,*(undefined8 *)(lVar33 + 0x11f0),uVar32,DAT_1808acd08,DAT_1808acda0,
                  param_1,pcVar36,pcVar36,0);
    fVar48 = (float)(int)((uint)((float)(int)local_res20 < local_res20) + (int)local_res20);
    uVar32 = local_res24;
  }
  local_res10 = CONCAT44(uVar32,fVar48);
  cVar26 = FUN_180422210();
  local_res20 = (float)CONCAT31(local_res20._1_3_,cVar26);
  if (cVar26 != '\0') {
    *(uint *)(lVar25 + 0x1eb4) = *(uint *)(lVar25 + 0x1eb4) | 0x2000;
  }
  local_f4 = *(float *)(lVar8 + 0x118);
  fVar48 = *(float *)(lVar8 + 0x11c);
  FUN_1803e89e0(param_1);
  if (param_3 == '\0') {
    FUN_1803e7920(1);
  }
  fVar43 = DAT_1808ac1f4;
  fVar24 = DAT_1808ac154;
  uVar2 = *(undefined4 *)(lVar25 + 0xd70);
  *(undefined4 *)(lVar25 + 0xd70) = *(undefined4 *)(lVar25 + 0xd6c);
  if (*(int *)(lVar8 + 0x1d4) == 0) {
    *(float *)(lVar8 + 0x118) =
         (float)(int)(*(float *)(lVar25 + 0xcec) * fVar43) + *(float *)(lVar8 + 0x118);
    FUN_1803d8900(0xe,*(float *)(lVar25 + 0xcec) + *(float *)(lVar25 + 0xcec));
    uVar5 = *(ushort *)(lVar8 + 400);
    fVar48 = fVar48 + *(float *)(lVar8 + 0x150);
    fVar42 = *(float *)(lVar8 + 0x118);
    uVar27 = FUN_1804201d0(&DAT_18058b643,bVar28,0x400001);
    lVar33 = DAT_180ca0a50;
    local_res10 = CONCAT71(local_res10._1_7_,uVar27);
    *(undefined **)(DAT_180ca0a50 + 0x2890) = &DAT_1806e05f8;
    *(undefined **)(lVar33 + 0x2898) = &DAT_1806e9114;
    FUN_1803d8ca0(CONCAT44(fVar48,(float)uVar5 + fVar42),param_1);
    FUN_1803d8a40(1);
    fVar39 = DAT_1808ac34c;
    local_f4 = local_f4 - DAT_1808ac34c;
    *(float *)(lVar8 + 0x118) =
         *(float *)(lVar8 + 0x118) - (float)(int)(*(float *)(lVar25 + 0xcec) * fVar43);
    fVar48 = (fVar48 - *(float *)(lVar25 + 0xce0)) + *(float *)(lVar8 + 0x6c);
    local_f4 = local_f4 - (float)(int)(*(float *)(lVar25 + 0xcec) * fVar43);
  }
  else {
    fVar42 = (float)(int)(*(float *)(lVar25 + 0x1200) * DAT_1808ac3c4);
    fVar39 = (float)FUN_180421ed0(lVar8 + 0x184);
    lVar33 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if ((*(longlong *)(lVar33 + 0x1c8) != 0) ||
       (lVar34 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
      lVar34 = 0x250;
    }
    fVar3 = *(float *)(lVar8 + 0x118);
    fVar48 = fVar48 + *(float *)(lVar8 + 0x150);
    local_res10 = CONCAT44(uVar32,fVar39);
    fVar39 = (*(float *)(lVar34 + lVar33) - *(float *)(lVar33 + 0x118)) - fVar39;
    fVar44 = 0.0;
    if (0.0 <= fVar39) {
      fVar44 = fVar39;
    }
    uVar27 = FUN_1804201d0(&DAT_18058b643,bVar28,0x1400001,&local_res10,fVar42);
    lVar33 = DAT_180ca0a50;
    local_res10 = CONCAT71(local_res10._1_7_,uVar27);
    *(undefined **)(DAT_180ca0a50 + 0x2898) = &DAT_1808a8f20;
    *(undefined1 **)(lVar33 + 0x2890) = &DAT_18058b643;
    FUN_1803d8ca0(CONCAT44(fVar48,(float)*(ushort *)(lVar8 + 400) + fVar3),param_1,pcVar36,0);
    local_e8 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
    uStack_e4 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
    uStack_e0 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
    fStack_dc = *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar5 = *(ushort *)(lVar8 + 0x194);
    fVar42 = *(float *)(lVar25 + 0x1200);
    uVar32 = FUN_1803d7f30(&local_e8);
    fVar39 = DAT_1808ac34c;
    FUN_18040b100(*(undefined8 *)(lVar8 + 0x2c8),
                  CONCAT44(fVar48,(float)uVar5 + fVar3 + fVar44 + fVar42 * fVar24),uVar32,1,
                  DAT_1808ac34c);
    fVar48 = fVar48 - *(float *)(lVar25 + 0xca8);
  }
  cVar26 = local_res18;
  *(undefined4 *)(lVar25 + 0xd70) = uVar2;
  if (local_res18 == '\0') {
    FUN_1803e79e0();
  }
  lVar33 = DAT_180ca0a50;
  if (((*(int *)(lVar25 + 0x1578) == iVar29) && (*(int *)(lVar25 + 0x1560) != iVar29)) &&
     ((*(int *)(lVar25 + 0x159c) == 1 &&
      ((*(char *)(DAT_180ca0a50 + 0x118) != '\0' &&
       (*(float *)(DAT_180ca0a50 + 0xa0) * *(float *)(DAT_180ca0a50 + 0xa0) <=
        *(float *)(DAT_180ca0a50 + 0xbc4))))))) {
    FUN_1803dd660(0,0);
    lVar33 = DAT_180ca0a50;
    *(undefined8 *)(DAT_180ca0a50 + 0x1cbc) = 0xffffffffffffffff;
    *(undefined2 *)(lVar33 + 0x1cc4) = 0;
  }
  if (((*(int *)(lVar25 + 0x1560) == iVar29) && (cVar26 != '\0')) &&
     (*(char *)(lVar25 + 0x2061) == '\0')) {
    bVar23 = true;
  }
  else {
    bVar23 = false;
  }
  bVar21 = false;
  bVar22 = false;
  cVar37 = '\0';
  cVar38 = '\0';
  if (*(int *)(lVar8 + 0x1d4) == 1) {
    bVar10 = false;
    if (((*(int *)(lVar25 + 0x2020) <= *(int *)(lVar25 + 0x2030)) ||
        (lVar34 = *(longlong *)(lVar25 + 0x2028) + (longlong)*(int *)(lVar25 + 0x2030) * 0x58,
        lVar34 == 0)) ||
       ((lVar34 = *(longlong *)(lVar34 + 8), lVar34 == 0 || (*(longlong *)(lVar34 + 0x3b0) != lVar8)
        ))) {
      lVar34 = 0;
    }
    if ((*(longlong *)(lVar25 + 0x1500) == lVar8) && (lVar34 != 0)) {
      fVar42 = *(float *)(lVar34 + 0x28);
      fVar3 = *(float *)(lVar25 + 0x1200);
      if (fVar42 < *(float *)(lVar8 + 0x28) || fVar42 == *(float *)(lVar8 + 0x28)) {
        fVar39 = fVar4;
      }
      fVar4 = *(float *)(lVar25 + 0x110);
      fVar44 = *(float *)(lVar25 + 0x114);
      fVar46 = fVar4 - *(float *)(lVar25 + 0xfc);
      fVar40 = fVar42 + *(float *)(lVar34 + 0x30);
      fVar47 = fVar44 - *(float *)(lVar25 + 0x100);
      if (0.0 < fVar39) {
        fVar40 = fVar42;
      }
      fVar41 = (float)((uint)(fVar46 - fVar40) & _DAT_1808ade90) * fVar24;
      fVar42 = fVar3 * fVar43;
      if ((fVar3 * fVar43 <= fVar41) &&
         (fVar42 = fVar3 * DAT_1808ac5e0, fVar41 <= fVar3 * DAT_1808ac5e0)) {
        fVar42 = fVar41;
      }
      fVar46 = fVar46 - fVar39 * fVar43;
      fVar41 = (*(float *)(lVar34 + 0x2c) - fVar42) - fVar47;
      fVar43 = (fVar42 + *(float *)(lVar34 + 0x2c) + *(float *)(lVar34 + 0x34)) - fVar47;
      fVar45 = fVar39 * fVar3 + fVar40;
      fVar42 = (float)((uint)fVar3 ^ DAT_1808adec0) * DAT_1808ac838;
      fVar40 = fVar39 * fVar3 + fVar40;
      if (fVar41 <= fVar42) {
        fVar41 = fVar42;
      }
      if (fVar3 * DAT_1808ac838 <= fVar43) {
        fVar43 = fVar3 * DAT_1808ac838;
      }
      fVar41 = fVar41 + fVar47;
      fVar43 = fVar43 + fVar47;
      bVar10 = (fVar4 - fVar45) * (fVar41 - fVar43) - (fVar44 - fVar43) * (fVar40 - fVar45) < 0.0;
      if (((fVar4 - fVar40) * (fVar47 - fVar41) - (fVar44 - fVar41) * (fVar46 - fVar40) < 0.0 ==
           bVar10) &&
         (bVar10 == (fVar4 - fVar46) * (fVar43 - fVar47) - (fVar44 - fVar47) * (fVar45 - fVar46) <
                    0.0)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
    }
    cVar38 = cVar37;
    if (bVar28 == 0) {
      if ((char)local_res10 == '\0') {
        if (bVar23) {
          if (bVar10) {
            if (fVar24 <= *(float *)(lVar25 + 0x156c)) {
              bVar21 = false;
              if (fVar24 <= *(float *)(lVar25 + 0x2504)) {
                bVar21 = true;
              }
            }
          }
          else {
            bVar21 = true;
          }
        }
      }
      else {
        bVar21 = true;
      }
    }
    else if ((((!bVar23) && (*(longlong *)(lVar25 + 0x1500) == lVar8)) && (!bVar10)) &&
            ((*(char *)(lVar25 + 0x2061) == '\0' && (*(int *)(lVar25 + 0x1578) == 0)))) {
      cVar38 = '\x01';
    }
    if ((*(int *)(lVar25 + 0x2064) == iVar29) && (*(int *)(lVar25 + 0x2118) == 1)) {
      *(undefined2 *)(lVar33 + 0x2108) = 0;
      *(bool *)(lVar33 + 0x20c9) = *(char *)(lVar33 + 0x20ca) != '\0';
      FUN_1803ef360();
      bVar21 = true;
      bVar22 = true;
    }
  }
  else {
    if (bVar28 == 0) {
      if ((char)local_res10 == '\0') goto LAB_180422c1f;
    }
    else {
      if ((char)local_res10 != '\0') {
        if (local_res20._0_1_ == '\0') goto LAB_180422c5c;
        cVar38 = '\x01';
        bVar28 = 0;
        goto LAB_180422c5f;
      }
LAB_180422c1f:
      if (((!bVar23) || (local_res20._0_1_ == '\0')) || (bVar28 != 0)) {
        if ((*(int *)(lVar25 + 0x2064) != iVar29) || (*(int *)(lVar25 + 0x2118) != 3))
        goto LAB_180422c5f;
        *(undefined2 *)(lVar33 + 0x2108) = 0;
        *(bool *)(lVar33 + 0x20c9) = *(char *)(lVar33 + 0x20ca) != '\0';
      }
    }
LAB_180422c5c:
    bVar21 = true;
  }
LAB_180422c5f:
  if (((cVar26 == '\0') || (cVar38 != '\0')) &&
     (*(int *)(lVar33 + 0x2030) < *(int *)(lVar33 + 0x2020))) {
    lVar34 = (longlong)*(int *)(lVar33 + 0x2030) * 0x58;
    if ((*(int *)(lVar34 + *(longlong *)(lVar33 + 0x2028)) == iVar29) &&
       (*(char *)(lVar34 + 0x34 + *(longlong *)(lVar33 + 0x2028)) == '\0')) {
      FUN_1803ee010(*(undefined4 *)(lVar25 + 0x2030),1);
    }
  }
  FUN_1803e8b00();
  if (bVar21) {
    if (*(int *)(lVar25 + 0x1578) == iVar29) {
      *(undefined1 *)(lVar25 + 0x1588) = 1;
    }
    lVar33 = DAT_180ca0a50;
    if ((bVar28 != 0) || (*(int *)(lVar25 + 0x2020) <= *(int *)(lVar25 + 0x2030))) {
      uVar32 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
      if ((*(byte *)(lVar33 + 0x28f4) & 8) != 0) {
        FUN_1803f5060("[popup] OpenPopup(\"%s\" -> 0x%08X)\n",param_1,uVar32);
      }
      FUN_1803ed9b0(uVar32,0x20);
      goto LAB_180422dec;
    }
    uVar31 = FUN_1803e8900(*(undefined8 *)(DAT_180ca0a50 + 0x14f8),param_1);
    if ((*(byte *)(lVar33 + 0x28f4) & 8) != 0) {
      FUN_1803f5060("[popup] OpenPopup(\"%s\" -> 0x%08X)\n",param_1,uVar31);
    }
    FUN_1803ed9b0(uVar31,0);
  }
  else if (bVar28 != 0) {
LAB_180422dec:
    lVar33 = DAT_180ca0a50;
    uVar11 = *(undefined8 *)(lVar25 + 0x1ee8);
    uVar12 = *(undefined8 *)(lVar25 + 0x1ef0);
    uVar13 = *(undefined8 *)(lVar25 + 0x1ef8);
    uVar14 = *(undefined8 *)(lVar25 + 0x1f00);
    uVar15 = *(undefined8 *)(lVar25 + 0x1f08);
    uVar16 = *(undefined8 *)(lVar25 + 0x1f10);
    uVar17 = *(undefined8 *)(lVar25 + 0x1f18);
    uVar18 = *(undefined8 *)(lVar25 + 0x1f20);
    uVar19 = *(undefined8 *)(lVar25 + 0x1f28);
    uVar20 = *(undefined8 *)(lVar25 + 0x1f30);
    *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
    *(float *)(lVar33 + 0x1f48) = local_f4;
    *(float *)(lVar33 + 0x1f4c) = fVar48;
    *(undefined8 *)(lVar33 + 0x1f50) = 0;
    *(undefined4 *)(lVar33 + 0x1f3c) = 1;
    FUN_1803d8870(7);
    bVar28 = FUN_1803ee380(iVar29,param_1,uVar31);
    FUN_1803d8a40(1);
    if (bVar28 != 0) {
      if (((bVar21) && (bVar22)) && (*(char *)(lVar25 + 0x20ca) == '\0')) {
        FUN_1803ef030(*(undefined8 *)(lVar25 + 0x14f8),2);
        FUN_1803f0510(*(undefined8 *)(lVar25 + 0x14f8),0);
      }
      *(undefined8 *)(lVar25 + 0x1ee8) = uVar11;
      *(undefined8 *)(lVar25 + 0x1ef0) = uVar12;
      *(undefined8 *)(lVar25 + 0x1ef8) = uVar13;
      *(undefined8 *)(lVar25 + 0x1f00) = uVar14;
      *(undefined8 *)(lVar25 + 0x1f08) = uVar15;
      *(undefined8 *)(lVar25 + 0x1f10) = uVar16;
      *(undefined8 *)(lVar25 + 0x1f18) = uVar17;
      *(undefined8 *)(lVar25 + 0x1f20) = uVar18;
      *(undefined8 *)(lVar25 + 0x1f28) = uVar19;
      *(undefined8 *)(lVar25 + 0x1f30) = uVar20;
      if (*(longlong *)(lVar25 + 0x1500) == lVar8) {
        *(uint *)(lVar25 + 0x1ef0) = *(uint *)(lVar25 + 0x1ef0) | 0x80;
      }
    }
    goto LAB_180422d6e;
  }
  *(undefined4 *)(lVar25 + 0x1f38) = 0;
LAB_180422d6e:
  return (ulonglong)bVar28;
}



/* ===== 180422f00 FUN_180422f00 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180422f00(char *param_1,undefined8 param_2,char *param_3,char param_4,char param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  char cVar11;
  byte bVar12;
  undefined4 uVar13;
  longlong lVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 local_res10;
  undefined4 local_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  
  lVar10 = DAT_180ca0a50;
  uVar5 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar5 + 0xce) = 1;
  uVar9 = DAT_1808acda0;
  uVar13 = DAT_1808acd08;
  lVar6 = *(longlong *)(lVar10 + 0x14f8);
  if (*(char *)(lVar6 + 0xd1) != '\0') {
    return uVar5 & 0xffffffffffffff00;
  }
  fVar1 = *(float *)(lVar6 + 0x118);
  fVar2 = *(float *)(lVar6 + 0x11c);
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      if (((*pcVar15 == '#') && (pcVar15[1] == '#')) ||
         (pcVar15 = pcVar15 + 1, pcVar15 == (char *)0xffffffffffffffff)) break;
    }
  }
  local_res10 = param_2;
  if (param_1 == pcVar15) {
    fVar18 = 0.0;
    uVar19 = *(undefined4 *)(lVar10 + 0x1200);
  }
  else {
    FUN_18040a2f0(&local_res10,*(undefined8 *)(lVar10 + 0x11f0),*(undefined4 *)(lVar10 + 0x1200),
                  DAT_1808acd08,DAT_1808acda0,param_1,pcVar15,pcVar15,0);
    fVar18 = (float)(int)((uint)((float)(int)(float)local_res10 < (float)local_res10) +
                         (int)(float)local_res10);
    uVar19 = local_res10._4_4_;
  }
  cVar11 = FUN_180422210();
  if (cVar11 != '\0') {
    *(uint *)(lVar10 + 0x1eb4) = *(uint *)(lVar10 + 0x1eb4) | 0x2000;
  }
  FUN_1803e89e0(param_1);
  if (param_5 == '\0') {
    FUN_1803e7920(1);
  }
  uVar3 = *(undefined4 *)(lVar10 + 0xd70);
  *(undefined4 *)(lVar10 + 0xd70) = *(undefined4 *)(lVar10 + 0xd6c);
  fVar16 = DAT_1808ac1f4;
  if (*(int *)(lVar6 + 0x1d4) == 0) {
    fVar1 = *(float *)(lVar6 + 0x150);
    fVar2 = *(float *)(lVar6 + 0x11c);
    fVar17 = (float)(int)(*(float *)(lVar10 + 0xcec) * DAT_1808ac1f4) + *(float *)(lVar6 + 0x118);
    *(float *)(lVar6 + 0x118) = fVar17;
    uVar4 = *(ushort *)(lVar6 + 400);
    FUN_1803d8900(0xe,*(float *)(lVar10 + 0xcec) + *(float *)(lVar10 + 0xcec));
    local_res10 = (ulonglong)(uint)fVar18;
    bVar12 = FUN_1804201d0(&DAT_18058b643,param_4,0x2800000,&local_res10);
    FUN_1803d8a40(1);
    if ((*(uint *)(lVar10 + 0x1ef0) & 0x100) != 0) {
      FUN_1803d8ca0(CONCAT44(fVar1 + fVar2,(float)uVar4 + fVar17),param_1,pcVar15,0);
    }
    *(float *)(lVar6 + 0x118) =
         *(float *)(lVar6 + 0x118) - (float)(int)(*(float *)(lVar10 + 0xcec) * fVar16);
  }
  else {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      fVar18 = 0.0;
    }
    else {
      FUN_18040a2f0(&local_res10,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                    *(undefined4 *)(DAT_180ca0a50 + 0x1200),uVar13,uVar9,param_3,0,0,0);
      fVar18 = (float)(int)((uint)((float)(int)(float)local_res10 < (float)local_res10) +
                           (int)(float)local_res10);
    }
    fVar16 = (float)(int)(*(float *)(lVar10 + 0x1200) * DAT_1808ac3c4);
    fVar17 = (float)FUN_180421ed0(lVar6 + 0x184);
    lVar7 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    if ((*(longlong *)(lVar7 + 0x1c8) != 0) ||
       (lVar14 = 0x280, *(longlong *)(DAT_180ca0a50 + 0x2360) != 0)) {
      lVar14 = 0x250;
    }
    fVar20 = *(float *)(lVar6 + 0x150);
    local_res10 = CONCAT44(uVar19,fVar17);
    fVar17 = (*(float *)(lVar14 + lVar7) - *(float *)(lVar7 + 0x118)) - fVar17;
    bVar12 = FUN_1804201d0(&DAT_18058b643,0,0x3800000,&local_res10,fVar16);
    if ((*(uint *)(lVar10 + 0x1ef0) & 0x100) != 0) {
      fVar20 = fVar20 + fVar2;
      fVar2 = 0.0;
      if (0.0 <= fVar17) {
        fVar2 = fVar17;
      }
      fVar16 = fVar20 + 0.0;
      FUN_1803d8ca0(CONCAT44(fVar16,(float)*(ushort *)(lVar6 + 400) + fVar1),param_1,pcVar15,0);
      lVar7 = DAT_180ca0a50;
      if (0.0 < fVar18) {
        local_d8 = 0;
        uStack_d4 = *(undefined8 *)(DAT_180ca0a50 + 0xde0);
        uStack_cc = *(undefined8 *)(DAT_180ca0a50 + 0xde8);
        FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_d8);
        if (*(int *)(lVar7 + 0x1fbc) != 0) {
          uVar8 = *(undefined8 *)(lVar10 + 0xdf8);
          *(undefined8 *)(lVar7 + 0xde0) = *(undefined8 *)(lVar10 + 0xdf0);
          *(undefined8 *)(lVar7 + 0xde8) = uVar8;
        }
        lVar7 = DAT_180ca0a50;
        *(undefined **)(DAT_180ca0a50 + 0x2890) = &DAT_1808a9b38;
        *(undefined **)(lVar7 + 0x2898) = &DAT_1806e1ac0;
        FUN_1803d8ca0(CONCAT44(fVar16,(float)*(ushort *)(lVar6 + 0x192) + fVar2 + fVar1),param_3,0,0
                     );
        FUN_1803d87f0(1);
      }
      if (param_4 != '\0') {
        fVar18 = *(float *)(lVar10 + 0x1200);
        local_d8 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
        uStack_d4 = *(undefined8 *)(DAT_180ca0a50 + 0xde4);
        fVar17 = fVar18 * _DAT_1808ac0dc * DAT_1808ac1f4;
        uVar4 = *(ushort *)(lVar6 + 0x194);
        uStack_cc = CONCAT44((int)((ulonglong)uStack_cc >> 0x20),
                             *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c));
        fVar16 = fVar18 * DAT_1808ac1b0;
        fVar18 = fVar18 * _DAT_1808ac2bc;
        uVar13 = FUN_1803d7f30(&local_d8);
        FUN_18040b2f0(*(undefined8 *)(lVar6 + 0x2c8),
                      CONCAT44(fVar17 + fVar20,(float)uVar4 + fVar2 + fVar16 + fVar1),uVar13,fVar18)
        ;
      }
    }
  }
  *(undefined4 *)(lVar10 + 0xd70) = uVar3;
  if ((((*(int *)(lVar10 + 0x1578) == *(int *)(lVar10 + 0x1ee8)) &&
       (*(int *)(lVar10 + 0x1560) != *(int *)(lVar10 + 0x1ee8))) && (*(int *)(lVar10 + 0x159c) == 1)
      ) && ((*(char *)(DAT_180ca0a50 + 0x118) != '\0' &&
            (*(float *)(DAT_180ca0a50 + 0xa0) * *(float *)(DAT_180ca0a50 + 0xa0) <=
             *(float *)(DAT_180ca0a50 + 0xbc4))))) {
    FUN_1803dd660(0,0);
    lVar6 = DAT_180ca0a50;
    *(undefined8 *)(DAT_180ca0a50 + 0x1cbc) = 0xffffffffffffffff;
    *(undefined2 *)(lVar6 + 0x1cc4) = 0;
  }
  if (param_5 == '\0') {
    FUN_1803e79e0();
  }
  FUN_1803e8b00();
  return (ulonglong)bVar12;
}



/* ===== 1804235e0 FUN_1804235e0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804235e0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  int *piVar11;
  float *pfVar12;
  longlong lVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined *puVar22;
  uint uVar23;
  int *piVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  uint uVar28;
  longlong lVar29;
  char cVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_f0;
  float afStack_e8 [2];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  int local_b8 [4];
  undefined1 local_a8 [24];
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  lVar29 = DAT_180ca0a50;
  fVar34 = *(float *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x83) = 0;
  fVar36 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  uVar20 = *(uint *)(param_1 + 8);
  *(float *)(param_1 + 0x48) = fVar36;
  bVar3 = false;
  uVar23 = 0;
  uVar28 = 0;
  local_f0 = 0;
  afStack_e8[0] = 0.0;
  afStack_e8[1] = 0.0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (0 < (int)uVar20) {
    do {
      lVar19 = *(longlong *)(param_1 + 0x10);
      lVar25 = (longlong)(int)uVar28 * 0x2c;
      if ((*(int *)(lVar19 + 8 + lVar25) < *(int *)(param_1 + 0x34)) ||
         (*(char *)(lVar19 + 0x28 + lVar25) != '\0')) {
        if (*(int *)(param_1 + 0x2c) == *(int *)(lVar19 + lVar25)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        if (*(int *)(param_1 + 0x20) == *(int *)(lVar19 + lVar25)) {
          *(undefined4 *)(param_1 + 0x20) = 0;
        }
        if (*(int *)(param_1 + 0x24) == *(int *)(lVar19 + lVar25)) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        if (uVar23 != uVar28) {
          puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar25);
          uVar5 = *puVar1;
          puVar2 = (undefined4 *)(lVar19 + 0x1c + lVar25);
          uStack_84 = *puVar2;
          uStack_80 = puVar2[1];
          uVar27 = puVar2[2];
          uVar4 = puVar2[3];
          uStack_7c = *(undefined8 *)(puVar2 + 2);
          lVar18 = (longlong)(int)uVar23 * 0x2c;
          uStack_88 = (undefined4)puVar1[1];
          uVar6 = ((undefined8 *)(lVar19 + lVar25))[1];
          local_90._0_4_ = (undefined4)uVar5;
          local_90._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined8 *)(lVar19 + lVar18) = *(undefined8 *)(lVar19 + lVar25);
          ((undefined8 *)(lVar19 + lVar18))[1] = uVar6;
          puVar2 = (undefined4 *)(lVar19 + 0x10 + lVar18);
          *puVar2 = (undefined4)local_90;
          puVar2[1] = local_90._4_4_;
          puVar2[2] = uStack_88;
          puVar2[3] = uStack_84;
          puVar2 = (undefined4 *)(lVar19 + 0x1c + lVar18);
          *puVar2 = uStack_84;
          puVar2[1] = uStack_80;
          puVar2[2] = uVar27;
          puVar2[3] = uVar4;
          local_90 = uVar5;
        }
        cVar30 = '\0';
        param_4 = (int *)((longlong)(int)uVar23 * 0x2c);
        lVar19 = 0;
        uVar20 = *(uint *)((longlong)param_4 + *(longlong *)(param_1 + 0x10) + 4);
        *(short *)((longlong)param_4 + *(longlong *)(param_1 + 0x10) + 0x26) = (short)uVar23;
        if ((uVar20 & 0x40) == 0) {
          cVar30 = ((uVar20 >> 7 & 1) != 0) + '\x01';
          lVar19 = (ulonglong)((uVar20 >> 7 & 1) != 0) + 1;
        }
        if (0 < (int)uVar23) {
          uVar20 = *(uint *)((longlong)param_4 + *(longlong *)(param_1 + 0x10) + -0x28);
          cVar10 = '\0';
          if ((uVar20 & 0x40) == 0) {
            cVar10 = ((uVar20 & 0x80) != 0) + '\x01';
          }
          if ((cVar30 == '\0') && (cVar10 != '\0')) {
            bVar3 = true;
          }
          if (cVar10 == '\x02') {
            if (cVar30 != '\x02') {
              bVar3 = true;
            }
            afStack_e8[lVar19 * 4 + -2] = (float)((int)afStack_e8[lVar19 * 4 + -2] + 1);
            uVar23 = uVar23 + 1;
            goto LAB_180423787;
          }
        }
        afStack_e8[lVar19 * 4 + -2] = (float)((int)afStack_e8[lVar19 * 4 + -2] + 1);
        uVar23 = uVar23 + 1;
      }
LAB_180423787:
      uVar20 = *(uint *)(param_1 + 8);
      uVar28 = uVar28 + 1;
    } while ((int)uVar28 < (int)uVar20);
  }
  if (uVar20 != uVar23) {
    if (*(int *)(param_1 + 0xc) < (int)uVar23) {
      FUN_180424ee0(param_1 + 8);
    }
    *(uint *)(param_1 + 8) = uVar23;
    uVar20 = uVar23;
  }
  if ((bVar3) && (1 < uVar20)) {
    param_4 = (int *)&LAB_180423590;
    FUN_180519150(*(undefined8 *)(param_1 + 0x10),(longlong)(int)uVar20,0x2c);
  }
  uVar26 = local_f0 & 0xffffffff;
  fVar38 = *(float *)(lVar29 + 0xcf4);
  if (((int)local_f0 < 1) || ((int)local_d0 + (int)local_e0 < 1)) {
    fVar35 = 0.0;
  }
  else {
    fVar35 = fVar38;
  }
  afStack_e8[1] = fVar35;
  if (((int)local_e0 < 1) || ((int)local_d0 < 1)) {
    fVar35 = 0.0;
  }
  else {
    fVar35 = fVar38;
  }
  iVar15 = *(int *)(param_1 + 0x28);
  uStack_d8 = CONCAT44(fVar35,(float)uStack_d8);
  iVar31 = 0;
  if (iVar15 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar31 = iVar15;
  }
  iVar15 = *(int *)(param_1 + 0x24);
  if (iVar15 != 0) {
    *(int *)(param_1 + 0x20) = iVar15;
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar31 = iVar15;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar15 = *(int *)(param_1 + 8);
    if (0 < iVar15) {
      uVar21 = 0;
      do {
        param_4 = (int *)(uVar21 * 0x2c + *(longlong *)(param_1 + 0x10));
        if (*param_4 == *(int *)(param_1 + 0x7c)) {
          if ((param_4[1] & 0x20U) == 0) {
            sVar14 = *(short *)(param_1 + 0x80);
            iVar17 = (int)sVar14;
            iVar32 = (int)uVar21 + iVar17;
            if ((-1 < iVar32) && (iVar32 < iVar15)) {
              piVar11 = (int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar32 * 0x2c);
              if (((piVar11[1] & 0x20U) == 0) &&
                 (((byte)param_4[1] & 0xc0) == ((byte)piVar11[1] & 0xc0))) {
                local_90 = *(undefined8 *)(param_4 + 4);
                uVar5 = *(undefined8 *)(param_4 + 7);
                uVar6 = *(undefined8 *)(param_4 + 9);
                uVar7 = *(undefined8 *)param_4;
                uVar8 = *(undefined8 *)(param_4 + 2);
                uStack_88 = (undefined4)*(undefined8 *)(param_4 + 6);
                if (sVar14 < 1) {
                  iVar17 = -iVar17;
                }
                uStack_84 = (undefined4)uVar5;
                uStack_80 = (undefined4)((ulonglong)uVar5 >> 0x20);
                piVar24 = param_4 + 0xb;
                if (sVar14 < 1) {
                  piVar24 = piVar11;
                  param_4 = piVar11 + 0xb;
                }
                uStack_7c = uVar6;
                FUN_180540530(param_4,piVar24,(longlong)iVar17 * 0x2c);
                *(undefined8 *)piVar11 = uVar7;
                *(undefined8 *)(piVar11 + 2) = uVar8;
                *(undefined8 *)(piVar11 + 4) = local_90;
                *(ulonglong *)(piVar11 + 6) = CONCAT44(uStack_84,uStack_88);
                *(undefined8 *)(piVar11 + 7) = uVar5;
                *(undefined8 *)(piVar11 + 9) = uVar6;
                if (((*(uint *)(param_1 + 0x18) & 0x400000) != 0) &&
                   (*(float *)(DAT_180ca0a50 + 0x27a4) <= 0.0)) {
                  *(undefined4 *)(DAT_180ca0a50 + 0x27a4) = *(undefined4 *)(DAT_180ca0a50 + 0x44);
                }
                uVar26 = local_f0 & 0xffffffff;
                iVar15 = *(int *)(param_1 + 0x7c);
                if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x20)) {
                  iVar15 = iVar31;
                }
                iVar31 = iVar15;
              }
            }
          }
          break;
        }
        uVar20 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
      } while ((int)uVar20 < iVar15);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  iVar15 = 8;
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    piVar11 = (int *)FUN_180424b90(param_1);
    if (piVar11 != (int *)0x0) {
      iVar31 = *piVar11;
      *(int *)(param_1 + 0x20) = iVar31;
    }
    uVar26 = local_f0 & 0xffffffff;
  }
  iVar17 = *(int *)(param_1 + 8);
  local_b8[1] = (int)local_d0 + (int)uVar26;
  iVar32 = *(int *)(lVar29 + 0x240c);
  local_b8[0] = 0;
  local_b8[2] = (int)uVar26;
  if (iVar32 < iVar17) {
    if (iVar32 != 0) {
      iVar15 = iVar32 + iVar32 / 2;
    }
    iVar16 = iVar17;
    if (iVar17 < iVar15) {
      iVar16 = iVar15;
    }
    if (iVar32 < iVar16) {
      piVar11 = (int *)((longlong)iVar16 * 0xc);
      local_c0 = _malloc_base(piVar11);
      lVar19 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
        param_4 = piVar11;
      }
      if (*(longlong *)(lVar29 + 0x2410) != 0) {
        FUN_180540530(local_c0,*(longlong *)(lVar29 + 0x2410),
                      (longlong)*(int *)(lVar29 + 0x2408) * 0xc);
        param_4 = *(int **)(lVar29 + 0x2410);
        if ((param_4 != (int *)0x0) && (lVar19 != 0)) {
          piVar11 = (int *)(lVar19 + 0x29c0 + (longlong)*(short *)(lVar19 + 0x29bc) * 8);
          if (*piVar11 != *(int *)(lVar19 + 4)) {
            iVar15 = *(short *)(lVar19 + 0x29bc) + 1;
            sVar14 = (short)iVar15 + (short)(iVar15 / 6) * -6;
            *(short *)(lVar19 + 0x29bc) = sVar14;
            piVar11 = (int *)(lVar19 + 0x29c0 + (longlong)sVar14 * 8);
            *piVar11 = *(int *)(lVar19 + 4);
            *(undefined4 *)(lVar19 + 0x29c4 + (longlong)sVar14 * 8) = 0;
          }
          *(short *)((longlong)piVar11 + 6) = *(short *)((longlong)piVar11 + 6) + 1;
          *(int *)(lVar19 + 0x29b8) = *(int *)(lVar19 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(param_4);
      }
      uVar26 = local_f0 & 0xffffffff;
      *(ulonglong *)(lVar29 + 0x2410) = local_c0;
      *(int *)(lVar29 + 0x240c) = iVar16;
    }
  }
  fVar35 = DAT_1808ac34c;
  *(int *)(lVar29 + 0x2408) = iVar17;
  if ((*(byte *)(param_1 + 0x18) & 0x80) == 0) {
    fVar39 = fVar35;
  }
  else {
    fVar39 = *(float *)(lVar29 + 0xd40);
  }
  iVar15 = *(int *)(param_1 + 8);
  uVar21 = (ulonglong)param_4 & 0xffffffffffffff00;
  piVar11 = (int *)0x0;
  local_c0 = CONCAT44(local_c0._4_4_,(int)uVar21);
  if (iVar15 < 1) {
    piVar11 = (int *)0x0;
  }
  else {
    iVar32 = 0;
    iVar17 = -1;
    do {
      piVar24 = (int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar32 * 0x2c);
      if (((piVar11 == (int *)0x0) || (piVar11[3] < piVar24[3])) && ((piVar24[1] & 0x200000U) == 0))
      {
        piVar11 = piVar24;
      }
      iVar15 = *piVar24;
      uVar21 = uVar21 & 0xff;
      if (iVar15 == *(int *)(param_1 + 0x20)) {
        uVar21 = 1;
      }
      local_c0 = CONCAT44(local_c0._4_4_,(int)uVar21);
      if ((iVar31 == 0) && (iVar31 = iVar15, *(int *)(lVar29 + 0x2234) != iVar15)) {
        iVar31 = 0;
      }
      if (piVar24[8] == -1) {
        puVar22 = &DAT_1808a8f18;
      }
      else {
        puVar22 = (undefined *)((longlong)piVar24[8] + *(longlong *)(param_1 + 0xa8));
      }
      pfVar12 = (float *)(piVar24 + 7);
      if ((float)piVar24[7] < 0.0) {
        pfVar12 = (float *)FUN_180424d80(local_a8,puVar22,(piVar24[1] & 0x100001U) != 0x100000);
        uVar21 = local_c0 & 0xffffffff;
      }
      fVar33 = *pfVar12;
      uVar20 = piVar24[1];
      piVar24[6] = (int)fVar33;
      if ((uVar20 >> 0x15 & 1) == 0) {
        if (fVar33 <= *(float *)(lVar29 + 0xd3c)) {
          fVar33 = *(float *)(lVar29 + 0xd3c);
        }
        piVar24[6] = (int)fVar33;
      }
      if ((uVar20 & 0x40) == 0) {
        iVar16 = ((uVar20 >> 7 & 1) != 0) + 1;
        lVar19 = (ulonglong)((uVar20 >> 7 & 1) != 0) + 1;
      }
      else {
        iVar16 = 0;
        lVar19 = 0;
      }
      if (iVar16 == iVar17) {
        fVar33 = fVar33 + fVar38;
        fVar37 = fVar38;
      }
      else {
        fVar33 = fVar33 + 0.0;
        fVar37 = 0.0;
      }
      iVar15 = local_b8[lVar19];
      lVar25 = (longlong)iVar15;
      afStack_e8[lVar19 * 4 + -1] = fVar33 + afStack_e8[lVar19 * 4 + -1];
      fVar33 = (float)piVar24[6];
      if (fVar39 <= (float)piVar24[6]) {
        fVar33 = fVar39;
      }
      afStack_e8[lVar19 * 4] = fVar33 + fVar37 + afStack_e8[lVar19 * 4];
      local_b8[lVar19] = iVar15 + 1;
      lVar19 = *(longlong *)(lVar29 + 0x2410);
      *(int *)(lVar19 + lVar25 * 0xc) = iVar32;
      iVar32 = iVar32 + 1;
      iVar15 = piVar24[6];
      *(int *)(lVar19 + 8 + lVar25 * 0xc) = iVar15;
      *(int *)(lVar19 + 4 + lVar25 * 0xc) = iVar15;
      fVar33 = (float)piVar24[6];
      if ((float)piVar24[6] <= fVar35) {
        fVar33 = fVar35;
      }
      piVar24[5] = (int)fVar33;
      iVar15 = *(int *)(param_1 + 8);
      iVar17 = iVar16;
    } while (iVar32 < iVar15);
    uVar26 = local_f0 & 0xffffffff;
  }
  uVar20 = *(uint *)(param_1 + 0x18);
  *(float *)(param_1 + 0x58) =
       local_f0._4_4_ + afStack_e8[1] + 0.0 + uStack_d8._4_4_ + local_e0._4_4_ +
       uStack_c8._4_4_ + local_d0._4_4_;
  bVar3 = false;
  if ((uVar20 & 0x280) == 0) {
LAB_180423d32:
    bVar9 = bVar3;
    fVar38 = afStack_e8[1] + afStack_e8[0] + 0.0 + uStack_d8._4_4_ + (float)uStack_d8 +
             uStack_c8._4_4_ + (float)uStack_c8;
  }
  else {
    bVar9 = true;
    bVar3 = true;
    if ((uVar20 & 0x200) == 0) goto LAB_180423d32;
    fVar38 = *(float *)(param_1 + 0x54);
  }
  if (((fVar38 <= *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) || (iVar15 < 2)) ||
     (((uVar20 & 0x10) != 0 || (!bVar9)))) {
    *(undefined1 *)(param_1 + 0x86) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x86) = 1;
    piVar24 = (int *)FUN_1804247f0(param_1);
    if (piVar24 != (int *)0x0) {
      if ((piVar24[1] & 0x200000U) == 0) {
        *(int *)(param_1 + 0x20) = *piVar24;
      }
      iVar31 = *piVar24;
    }
    uVar26 = local_f0 & 0xffffffff;
  }
  iVar15 = (int)uVar26;
  if ((iVar31 == 0) && (fVar36 < fVar34)) {
    iVar31 = *(int *)(param_1 + 0x20);
  }
  fVar34 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  fVar36 = local_d0._4_4_ + uStack_c8._4_4_ + local_f0._4_4_ + afStack_e8[1];
  bVar3 = fVar36 < fVar34;
  if (bVar3) {
    fVar36 = (uStack_d8._4_4_ + local_e0._4_4_) -
             ((fVar34 - (local_f0._4_4_ + afStack_e8[1])) - (local_d0._4_4_ + uStack_c8._4_4_));
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
  }
  else {
    fVar36 = fVar36 - fVar34;
  }
  if (fVar36 < fVar35) goto LAB_1804240c4;
  if ((*(uint *)(param_1 + 0x18) & 0x180) == 0) {
    if (bVar3) goto LAB_1804240c4;
LAB_180423e20:
    iVar17 = (int)local_d0 + iVar15;
    if (bVar3) {
      iVar32 = (int)local_d0 + iVar15;
    }
    else {
      iVar32 = 0;
    }
  }
  else {
    if (!bVar3) goto LAB_180423e20;
    iVar32 = (int)local_d0 + iVar15;
    iVar17 = (int)local_e0;
  }
  FUN_180418200(*(longlong *)(lVar29 + 0x2410) + (longlong)iVar32 * 0xc,iVar17,uVar26,fVar39);
  iVar15 = iVar32 + iVar17;
  if (iVar32 < iVar15) {
    if (3 < iVar17) {
      do {
        lVar19 = (longlong)iVar32;
        fVar34 = (float)(int)*(float *)(*(longlong *)(lVar29 + 0x2410) + 4 + lVar19 * 0xc);
        if (0.0 <= fVar34) {
          lVar25 = *(longlong *)(param_1 + 0x10);
          fVar36 = fVar35;
          if (fVar35 <= fVar34) {
            fVar36 = fVar34;
          }
          lVar18 = (longlong)*(int *)(*(longlong *)(lVar29 + 0x2410) + lVar19 * 0xc) * 0x2c;
          uVar20 = *(uint *)(lVar25 + 4 + lVar18);
          if ((uVar20 & 0x40) == 0) {
            lVar13 = (ulonglong)((uVar20 & 0x80) != 0) + 1;
          }
          else {
            lVar13 = 0;
          }
          afStack_e8[lVar13 * 4 + -1] =
               afStack_e8[lVar13 * 4 + -1] - (*(float *)(lVar25 + 0x14 + lVar18) - fVar36);
          *(float *)(lVar25 + 0x14 + lVar18) = fVar36;
        }
        fVar34 = (float)(int)*(float *)(*(longlong *)(lVar29 + 0x2410) + 0x10 + lVar19 * 0xc);
        if (0.0 <= fVar34) {
          lVar25 = *(longlong *)(param_1 + 0x10);
          fVar36 = fVar35;
          if (fVar35 <= fVar34) {
            fVar36 = fVar34;
          }
          lVar18 = (longlong)*(int *)(*(longlong *)(lVar29 + 0x2410) + 0xc + lVar19 * 0xc) * 0x2c;
          uVar20 = *(uint *)(lVar25 + 4 + lVar18);
          if ((uVar20 & 0x40) == 0) {
            lVar13 = (ulonglong)((uVar20 & 0x80) != 0) + 1;
          }
          else {
            lVar13 = 0;
          }
          afStack_e8[lVar13 * 4 + -1] =
               afStack_e8[lVar13 * 4 + -1] - (*(float *)(lVar25 + 0x14 + lVar18) - fVar36);
          *(float *)(lVar25 + 0x14 + lVar18) = fVar36;
        }
        fVar34 = (float)(int)*(float *)(*(longlong *)(lVar29 + 0x2410) + 0x1c + lVar19 * 0xc);
        if (0.0 <= fVar34) {
          lVar25 = *(longlong *)(param_1 + 0x10);
          fVar36 = fVar35;
          if (fVar35 <= fVar34) {
            fVar36 = fVar34;
          }
          lVar18 = (longlong)*(int *)(*(longlong *)(lVar29 + 0x2410) + 0x18 + lVar19 * 0xc) * 0x2c;
          uVar20 = *(uint *)(lVar25 + 4 + lVar18);
          if ((uVar20 & 0x40) == 0) {
            lVar13 = (ulonglong)((uVar20 & 0x80) != 0) + 1;
          }
          else {
            lVar13 = 0;
          }
          afStack_e8[lVar13 * 4 + -1] =
               afStack_e8[lVar13 * 4 + -1] - (*(float *)(lVar25 + 0x14 + lVar18) - fVar36);
          *(float *)(lVar25 + 0x14 + lVar18) = fVar36;
        }
        fVar34 = (float)(int)*(float *)(*(longlong *)(lVar29 + 0x2410) + 0x28 + lVar19 * 0xc);
        if (0.0 <= fVar34) {
          lVar25 = *(longlong *)(param_1 + 0x10);
          fVar36 = fVar35;
          if (fVar35 <= fVar34) {
            fVar36 = fVar34;
          }
          lVar19 = (longlong)*(int *)(*(longlong *)(lVar29 + 0x2410) + 0x24 + lVar19 * 0xc) * 0x2c;
          uVar20 = *(uint *)(lVar25 + 4 + lVar19);
          if ((uVar20 & 0x40) == 0) {
            lVar18 = (ulonglong)((uVar20 & 0x80) != 0) + 1;
          }
          else {
            lVar18 = 0;
          }
          afStack_e8[lVar18 * 4 + -1] =
               afStack_e8[lVar18 * 4 + -1] - (*(float *)(lVar25 + 0x14 + lVar19) - fVar36);
          *(float *)(lVar25 + 0x14 + lVar19) = fVar36;
        }
        iVar32 = iVar32 + 4;
      } while (iVar32 < iVar15 + -3);
      if (iVar15 <= iVar32) goto LAB_1804240bf;
    }
    do {
      fVar34 = (float)(int)*(float *)(*(longlong *)(lVar29 + 0x2410) + 4 + (longlong)iVar32 * 0xc);
      if (0.0 <= fVar34) {
        lVar19 = *(longlong *)(param_1 + 0x10);
        fVar36 = fVar35;
        if (fVar35 <= fVar34) {
          fVar36 = fVar34;
        }
        lVar25 = (longlong)*(int *)(*(longlong *)(lVar29 + 0x2410) + (longlong)iVar32 * 0xc) * 0x2c;
        uVar20 = *(uint *)(lVar19 + 4 + lVar25);
        if ((uVar20 & 0x40) == 0) {
          lVar18 = (ulonglong)((uVar20 & 0x80) != 0) + 1;
        }
        else {
          lVar18 = 0;
        }
        afStack_e8[lVar18 * 4 + -1] =
             afStack_e8[lVar18 * 4 + -1] - (*(float *)(lVar19 + 0x14 + lVar25) - fVar36);
        *(float *)(lVar19 + 0x14 + lVar25) = fVar36;
      }
      iVar32 = iVar32 + 1;
    } while (iVar32 < iVar15);
  }
LAB_1804240bf:
  iVar15 = (int)local_f0;
LAB_1804240c4:
  *(undefined4 *)(param_1 + 0x54) = 0;
  fVar34 = 0.0;
  iVar17 = 0;
  if (0 < iVar15) {
    do {
      lVar19 = *(longlong *)(param_1 + 0x10);
      lVar25 = (longlong)iVar17 * 0x2c;
      *(float *)(lVar19 + 0x10 + lVar25) = fVar34;
      *(undefined4 *)(lVar19 + 0x20 + lVar25) = 0xffffffff;
      if (iVar17 < (int)local_f0 + -1) {
        fVar36 = *(float *)(lVar29 + 0xcf4);
      }
      else {
        fVar36 = 0.0;
      }
      iVar17 = iVar17 + 1;
      fVar34 = fVar34 + fVar36 + *(float *)(lVar19 + 0x14 + lVar25);
      iVar15 = (int)local_f0;
    } while (iVar17 < (int)local_f0);
  }
  iVar17 = 0;
  fVar34 = fVar34 + afStack_e8[1];
  fVar36 = local_f0._4_4_ + afStack_e8[1];
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar36 + *(float *)(param_1 + 0x54);
  if (0 < (int)local_e0) {
    do {
      lVar25 = (longlong)(iVar17 + iVar15) * 0x2c;
      lVar19 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar19 + 0x10 + lVar25) = fVar34;
      *(undefined4 *)(lVar19 + 0x20 + lVar25) = 0xffffffff;
      if (iVar17 < (int)local_e0 + -1) {
        fVar36 = *(float *)(lVar29 + 0xcf4);
      }
      else {
        fVar36 = 0.0;
      }
      iVar17 = iVar17 + 1;
      fVar34 = fVar34 + fVar36 + *(float *)(lVar19 + 0x14 + lVar25);
    } while (iVar17 < (int)local_e0);
  }
  iVar17 = 0;
  fVar36 = uStack_d8._4_4_ + local_e0._4_4_;
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar36 + *(float *)(param_1 + 0x54);
  fVar38 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) - local_d0._4_4_;
  fVar36 = 0.0;
  if (0.0 <= fVar38) {
    fVar36 = fVar38;
  }
  if (uStack_d8._4_4_ + fVar34 <= fVar36) {
    fVar36 = uStack_d8._4_4_ + fVar34;
  }
  if (0 < (int)local_d0) {
    do {
      lVar25 = (longlong)(iVar17 + iVar15 + (int)local_e0) * 0x2c;
      lVar19 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar19 + 0x10 + lVar25) = fVar36;
      *(undefined4 *)(lVar19 + 0x20 + lVar25) = 0xffffffff;
      if (iVar17 < (int)local_d0 + -1) {
        fVar34 = *(float *)(lVar29 + 0xcf4);
      }
      else {
        fVar34 = 0.0;
      }
      iVar17 = iVar17 + 1;
      fVar36 = fVar36 + fVar34 + *(float *)(lVar19 + 0x14 + lVar25);
    } while (iVar17 < (int)local_d0);
  }
  fVar34 = uStack_c8._4_4_ + local_d0._4_4_;
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  *(float *)(param_1 + 0x54) = fVar34 + *(float *)(param_1 + 0x54);
  iVar15 = *(int *)(param_1 + 0xa4);
  if (iVar15 < 0) {
    iVar15 = iVar15 + iVar15 / 2;
    iVar17 = 0;
    if (0 < iVar15) {
      iVar17 = iVar15;
    }
    FUN_1803f6920(param_1 + 0xa0,iVar17);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (((char)local_c0 == '\0') && (*(int *)(lVar29 + 4) <= *(int *)(param_1 + 0x34) + 1)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar15 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) == 0) {
    if ((*(int *)(param_1 + 0x24) == 0) && (piVar11 != (int *)0x0)) {
      iVar31 = *piVar11;
      *(int *)(param_1 + 0x20) = iVar31;
      iVar15 = iVar31;
    }
    else {
      iVar15 = 0;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar15;
  *(undefined1 *)(param_1 + 0x84) = 0;
  if (iVar31 == 0) {
    if (*(char *)(param_1 + 0x86) != '\0') {
      fVar34 = *(float *)(param_1 + 0x38);
      lVar19 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      fVar36 = fVar34;
      if (fVar34 <= *(float *)(lVar19 + 0x268)) {
        fVar36 = *(float *)(lVar19 + 0x268);
      }
      if (fVar36 - *(float *)(DAT_180ca0a50 + 0xd04) <= *(float *)(DAT_180ca0a50 + 0x110)) {
        fVar36 = *(float *)(param_1 + 0x3c);
        if (*(float *)(param_1 + 0x3c) <= *(float *)(lVar19 + 0x26c)) {
          fVar36 = *(float *)(lVar19 + 0x26c);
        }
        if (fVar36 - *(float *)(DAT_180ca0a50 + 0xd08) <= *(float *)(DAT_180ca0a50 + 0x114)) {
          fVar36 = *(float *)(param_1 + 0x40);
          fVar38 = fVar36;
          if (*(float *)(lVar19 + 0x270) <= fVar36) {
            fVar38 = *(float *)(lVar19 + 0x270);
          }
          if (*(float *)(DAT_180ca0a50 + 0x110) < fVar38 + *(float *)(DAT_180ca0a50 + 0xd04)) {
            fVar38 = *(float *)(param_1 + 0x44);
            if (*(float *)(lVar19 + 0x274) <= *(float *)(param_1 + 0x44)) {
              fVar38 = *(float *)(lVar19 + 0x274);
            }
            if (*(float *)(DAT_180ca0a50 + 0x114) < fVar38 + *(float *)(DAT_180ca0a50 + 0xd08)) {
              if (((((*(longlong *)(DAT_180ca0a50 + 0x2068) == 0) ||
                    (lVar19 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x2068) + 0x3c0),
                    lVar19 == 0)) || (*(char *)(lVar19 + 0xcd) == '\0')) ||
                  (lVar25 = *(longlong *)(*(longlong *)(lVar29 + 0x14f8) + 0x3c0), lVar19 == lVar25)
                  ) || ((((*(uint *)(lVar19 + 0x14) >> 0x1b & 1) == 0 &&
                         ((*(uint *)(lVar19 + 0x14) >> 0x1a & 1) == 0)) ||
                        (*(longlong *)(lVar25 + 0x3c0) == lVar19)))) {
LAB_1804243f6:
                cVar30 = *(char *)(lVar29 + 0xb9a);
                uVar27 = *(undefined4 *)(param_1 + 0x1c);
                lVar19 = 0x120;
                if (cVar30 == '\0') {
                  lVar19 = 0x124;
                }
                cVar10 = FUN_1803eb1c0((cVar30 != '\0') + 0x295,uVar27);
                if ((cVar10 != '\0') && (fVar38 = *(float *)(lVar29 + lVar19), fVar38 != 0.0)) {
                  *(undefined4 *)(param_1 + 100) = 0;
                  fVar35 = *(float *)(param_1 + 0x54) - (fVar36 - fVar34);
                  fVar34 = *(float *)(param_1 + 0x60) -
                           (((((fVar36 - fVar34) - local_f0._4_4_) - local_d0._4_4_) -
                            uStack_d8._4_4_) * fVar38) / DAT_1808ac658;
                  if (fVar35 <= fVar34) {
                    fVar34 = fVar35;
                  }
                  if (fVar34 <= 0.0) {
                    fVar34 = 0.0;
                  }
                  *(float *)(param_1 + 0x60) = fVar34;
                }
                lVar19 = DAT_180ca0a50;
                lVar25 = 0x1cf8;
                if (cVar30 != '\0') {
                  lVar25 = 0x1d04;
                }
                *(undefined4 *)(lVar25 + 4 + DAT_180ca0a50) = uVar27;
                *(undefined4 *)(lVar25 + lVar19) = uVar27;
                *(undefined2 *)(lVar25 + 8 + lVar19) = 0;
              }
              else {
                do {
                  if (lVar25 == lVar19) goto LAB_1804243f6;
                  lVar25 = *(longlong *)(lVar25 + 0x3b8);
                } while (lVar25 != 0);
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_180424630(param_1,iVar31,&local_f0);
  }
  fVar36 = *(float *)(param_1 + 0x54) - (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38));
  fVar34 = *(float *)(param_1 + 0x5c);
  if (fVar36 <= *(float *)(param_1 + 0x5c)) {
    fVar34 = fVar36;
  }
  fVar38 = *(float *)(param_1 + 0x60);
  if (fVar36 <= *(float *)(param_1 + 0x60)) {
    fVar38 = fVar36;
  }
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  *(float *)(param_1 + 0x5c) = fVar34;
  *(float *)(param_1 + 0x60) = fVar38;
  if (fVar34 == fVar38) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    fVar35 = *(float *)(lVar29 + 0x1200) * DAT_1808acac0;
    fVar36 = *(float *)(param_1 + 0x68);
    if (*(float *)(param_1 + 0x68) <= fVar35) {
      fVar36 = fVar35;
    }
    fVar35 = (float)((uint)(fVar38 - fVar34) & _DAT_1808ade90) / DAT_1808ac154;
    if (fVar36 <= fVar35) {
      fVar36 = fVar35;
    }
    *(float *)(param_1 + 0x68) = fVar36;
    if ((*(int *)(param_1 + 0x34) + 1 < *(int *)(lVar29 + 4)) ||
       (*(float *)(lVar29 + 0x1200) * DAT_1808ac864 < *(float *)(param_1 + 100))) {
      fVar34 = fVar38;
    }
    else {
      fVar36 = fVar36 * *(float *)(lVar29 + 0x40);
      if (fVar38 <= fVar34) {
        if (fVar34 <= fVar38) {
        }
        else {
          fVar34 = fVar34 - fVar36;
          if (fVar34 <= fVar38) {
            fVar34 = fVar38;
          }
        }
      }
      else {
        fVar34 = fVar36 + fVar34;
        if (fVar38 <= fVar34) {
          fVar34 = fVar38;
        }
      }
    }
    *(float *)(param_1 + 0x5c) = fVar34;
  }
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x38) + local_f0._4_4_ + afStack_e8[1];
  *(float *)(param_1 + 0x70) = (*(float *)(param_1 + 0x40) - local_d0._4_4_) - uStack_d8._4_4_;
  lVar29 = *(longlong *)(lVar29 + 0x14f8);
  *(undefined8 *)(lVar29 + 0x118) = *(undefined8 *)(param_1 + 0x38);
  local_c0 = CONCAT44(*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x3c),
                      *(undefined4 *)(param_1 + 0x54));
  FUN_1803ec550(&local_c0,*(undefined4 *)(param_1 + 0x94));
  fVar36 = *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x38);
  fVar34 = *(float *)(lVar29 + 0x138);
  if (*(float *)(lVar29 + 0x138) <= fVar36) {
    fVar34 = fVar36;
  }
  *(float *)(lVar29 + 0x138) = fVar34;
  return;
}



/* ===== 180424630 FUN_180424630 ===== */

void FUN_180424630(longlong param_1,int param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_2 != 0) && (iVar2 = *(int *)(param_1 + 8), 0 < iVar2)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar4 = 0;
    while( true ) {
      uVar5 = (ulonglong)uVar4;
      if (*(int *)(lVar3 + uVar5 * 0x2c) == param_2) break;
      uVar4 = uVar4 + 1;
      if (iVar2 <= (int)uVar4) {
        return;
      }
    }
    uVar4 = *(uint *)(lVar3 + 4 + uVar5 * 0x2c);
    if ((uVar4 & 0x40) == 0) {
      if ((char)uVar4 < '\0') {
        uVar5 = (ulonglong)(param_3[4] + *param_3);
      }
    }
    else {
      uVar5 = (ulonglong)*param_3;
    }
    lVar7 = uVar5 * 0x2c + lVar3;
    if ((*(byte *)(lVar7 + 4) & 0xc0) == 0) {
      fVar10 = *(float *)(lVar7 + 0x14);
      fVar8 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x6c)) - fVar10;
      fVar12 = *(float *)(DAT_180ca0a50 + 0xcf4);
      if ((*(float *)(DAT_180ca0a50 + 0xcf4) <= fVar8) &&
         (fVar12 = *(float *)(DAT_180ca0a50 + 0x1200), fVar8 <= *(float *)(DAT_180ca0a50 + 0x1200)))
      {
        fVar12 = fVar8;
      }
      fVar8 = (float)param_3[1];
      fVar1 = (float)param_3[9];
      fVar13 = (float)param_3[7];
      iVar6 = (int)((lVar7 - lVar3) / 0x2c);
      if (*param_3 + -1 < iVar6) {
        fVar9 = (float)((uint)fVar12 ^ DAT_1808adec0);
      }
      else {
        fVar9 = 0.0;
      }
      fVar11 = *(float *)(lVar7 + 0x10) - fVar8;
      fVar9 = fVar9 + fVar11;
      if (iVar2 - param_3[8] <= iVar6 + 1) {
        fVar12 = DAT_1808ac34c;
      }
      *(undefined4 *)(param_1 + 100) = 0;
      fVar12 = fVar11 + fVar10 + fVar12;
      if ((fVar9 < *(float *)(param_1 + 0x60)) ||
         (fVar13 = (((*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) - fVar8) - fVar1) -
                   fVar13, fVar13 <= fVar12 - fVar9)) {
        fVar12 = *(float *)(param_1 + 0x5c) - fVar12;
        *(float *)(param_1 + 0x60) = fVar9;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        *(float *)(param_1 + 100) = fVar12;
      }
      else if (*(float *)(param_1 + 0x60) < fVar12 - fVar13) {
        *(float *)(param_1 + 0x60) = fVar12 - fVar13;
        fVar10 = (fVar9 - fVar13) - *(float *)(param_1 + 0x5c);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        *(float *)(param_1 + 100) = fVar10;
      }
    }
  }
  return;
}



/* ===== 1804247f0 FUN_1804247f0 ===== */

longlong FUN_1804247f0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  
  lVar7 = DAT_180ca0a50;
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar4 = *(undefined8 *)(DAT_180ca0a50 + 0xde0);
  uVar5 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
  fVar17 = *(float *)(DAT_180ca0a50 + 0xdec);
  fVar19 = *(float *)(DAT_180ca0a50 + 0x1200) - DAT_1808ac540;
  fVar18 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
           *(float *)(DAT_180ca0a50 + 0x1200);
  uVar1 = *(undefined4 *)(lVar6 + 0x118);
  local_e4 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
  uStack_e0 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
  uStack_dc = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
  uStack_d8 = *(undefined4 *)(DAT_180ca0a50 + 0xdec);
  local_e8 = 0;
  uVar2 = *(undefined4 *)(lVar6 + 0x11c);
  FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_e8);
  if (*(int *)(lVar7 + 0x1fbc) != 0) {
    fVar17 = fVar17 * DAT_1808ac1f4;
    *(undefined8 *)(lVar7 + 0xde0) = uVar4;
    *(undefined4 *)(lVar7 + 0xde8) = uVar5;
    *(float *)(lVar7 + 0xdec) = fVar17;
  }
  lVar15 = DAT_180ca0a50;
  local_e8 = 0x16;
  local_e4 = *(undefined4 *)(DAT_180ca0a50 + 0xf40);
  uStack_e0 = *(undefined4 *)(DAT_180ca0a50 + 0xf44);
  uStack_dc = *(undefined4 *)(DAT_180ca0a50 + 0xf48);
  uStack_d8 = *(undefined4 *)(DAT_180ca0a50 + 0xf4c);
  FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_e8);
  if (*(int *)(lVar15 + 0x1fbc) != 0x16) {
    *(undefined8 *)(lVar15 + 0xf40) = 0;
    *(undefined8 *)(lVar15 + 0xf48) = 0;
  }
  lVar15 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1ea8) = *(uint *)(DAT_180ca0a50 + 0x1ea8) | 10;
  iVar10 = *(int *)(lVar15 + 0x2004);
  uVar5 = *(undefined4 *)(lVar15 + 0x1ea8);
  if (*(int *)(lVar15 + 0x2000) == iVar10) {
    iVar13 = *(int *)(lVar15 + 0x2000) + 1;
    if (iVar10 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar10 / 2 + iVar10;
    }
    if (iVar13 < iVar10) {
      iVar13 = iVar10;
    }
    FUN_18007e1d0(lVar15 + 0x2000,iVar13);
  }
  *(undefined4 *)(*(longlong *)(lVar15 + 0x2008) + (longlong)*(int *)(lVar15 + 0x2000) * 4) = uVar5;
  *(int *)(lVar15 + 0x2000) = *(int *)(lVar15 + 0x2000) + 1;
  uVar5 = *(undefined4 *)(lVar7 + 0xa4);
  uVar3 = *(undefined4 *)(lVar7 + 0xa8);
  *(undefined4 *)(lVar7 + 0xa4) = 0x3e800000;
  *(undefined4 *)(lVar7 + 0xa8) = 0x3e4ccccd;
  fVar16 = *(float *)(param_1 + 0x40) - (fVar19 + fVar19);
  fVar17 = *(float *)(param_1 + 0x38);
  if (*(float *)(param_1 + 0x38) <= fVar16) {
    fVar17 = fVar16;
  }
  *(undefined4 *)(lVar6 + 0x11c) = *(undefined4 *)(param_1 + 0x3c);
  *(float *)(lVar6 + 0x118) = fVar17;
  bVar8 = FUN_180415f80(&DAT_1808a9b08,0,CONCAT44(fVar18,fVar19));
  iVar10 = 1;
  *(undefined4 *)(lVar6 + 0x11c) = *(undefined4 *)(param_1 + 0x3c);
  *(float *)(lVar6 + 0x118) = fVar17 + fVar19;
  cVar9 = FUN_180415f80(&DAT_1808a9b04,1,CONCAT44(fVar18,fVar19));
  lVar15 = DAT_180ca0a50;
  if (cVar9 == '\0') {
    iVar10 = (bVar8 ^ 1) - 1;
  }
  iVar13 = *(int *)(DAT_180ca0a50 + 0x2000);
  if (iVar13 < 2) {
    FUN_1803ebc00("Calling PopItemFlag() too many times!");
  }
  else {
    *(int *)(DAT_180ca0a50 + 0x2000) = iVar13 + -1;
    *(undefined4 *)(lVar15 + 0x1ea8) =
         *(undefined4 *)(*(longlong *)(lVar15 + 0x2008) + (longlong)(iVar13 + -2) * 4);
  }
  FUN_1803d87f0(2);
  *(undefined4 *)(lVar7 + 0xa8) = uVar3;
  lVar15 = 0;
  *(undefined4 *)(lVar7 + 0xa4) = uVar5;
  if (((iVar10 != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (iVar13 = *(int *)(param_1 + 8), 0 < iVar13)) {
    uVar12 = 0;
    do {
      if (*(int *)((ulonglong)uVar12 * 0x2c + *(longlong *)(param_1 + 0x10)) ==
          *(int *)(param_1 + 0x20)) {
        uVar14 = uVar12 + iVar10;
        while( true ) {
          if (((int)uVar14 < 0) || (uVar11 = uVar14, iVar13 <= (int)uVar14)) {
            uVar11 = uVar12;
          }
          lVar15 = (longlong)(int)uVar11 * 0x2c + *(longlong *)(param_1 + 0x10);
          if ((((*(uint *)(lVar15 + 4) & 0x200000) == 0) ||
              (uVar14 = uVar14 + iVar10, (int)uVar14 < 0)) || (iVar13 <= (int)uVar14)) break;
          uVar12 = uVar12 + iVar10;
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar13);
  }
  fVar17 = fVar19 + fVar19 + DAT_1808ac34c;
  *(undefined4 *)(lVar6 + 0x118) = uVar1;
  *(undefined4 *)(lVar6 + 0x11c) = uVar2;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - fVar17;
  return lVar15;
}



/* ===== 180424b90 FUN_180424b90 ===== */

int * FUN_180424b90(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  undefined8 local_res8 [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  lVar7 = DAT_180ca0a50;
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  fVar14 = *(float *)(DAT_180ca0a50 + 0xce0);
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  fVar2 = *(float *)(DAT_180ca0a50 + 0x1200);
  uVar3 = *(undefined4 *)(lVar6 + 0x118);
  *(float *)(lVar6 + 0x118) = *(float *)(param_1 + 0x38) - fVar14;
  uVar4 = *(undefined4 *)(lVar6 + 0x11c);
  *(undefined4 *)(lVar6 + 0x11c) = uVar1;
  local_98 = 0;
  *(float *)(param_1 + 0x38) = fVar14 + fVar2 + *(float *)(param_1 + 0x38);
  local_94 = *(undefined4 *)(lVar7 + 0xde0);
  uStack_90 = *(undefined4 *)(lVar7 + 0xde4);
  uStack_8c = *(undefined4 *)(lVar7 + 0xde8);
  uStack_88 = *(undefined4 *)(lVar7 + 0xdec);
  uVar1 = *(undefined4 *)(lVar7 + 0xde8);
  uVar5 = *(undefined8 *)(lVar7 + 0xde0);
  fVar14 = *(float *)(lVar7 + 0xdec);
  FUN_1803f64b0(lVar7 + 0x1fc0,&local_98);
  if (*(int *)(lVar7 + 0x1fbc) != 0) {
    fVar14 = fVar14 * DAT_1808ac1f4;
    *(undefined8 *)(lVar7 + 0xde0) = uVar5;
    *(undefined4 *)(lVar7 + 0xde8) = uVar1;
    *(float *)(lVar7 + 0xdec) = fVar14;
  }
  lVar7 = DAT_180ca0a50;
  local_98 = 0x16;
  local_94 = *(undefined4 *)(DAT_180ca0a50 + 0xf40);
  uStack_90 = *(undefined4 *)(DAT_180ca0a50 + 0xf44);
  uStack_8c = *(undefined4 *)(DAT_180ca0a50 + 0xf48);
  uStack_88 = *(undefined4 *)(DAT_180ca0a50 + 0xf4c);
  FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_98);
  if (*(int *)(lVar7 + 0x1fbc) != 0x16) {
    *(undefined8 *)(lVar7 + 0xf40) = 0;
    *(undefined8 *)(lVar7 + 0xf48) = 0;
  }
  cVar8 = FUN_180418650();
  FUN_1803d87f0(2);
  piVar11 = (int *)0x0;
  if (cVar8 != '\0') {
    iVar13 = 0;
    piVar12 = piVar11;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        piVar10 = (int *)((longlong)iVar13 * 0x2c + *(longlong *)(param_1 + 0x10));
        piVar11 = piVar12;
        if ((piVar10[1] & 0x200000U) == 0) {
          if (piVar10[8] == -1) {
            puVar9 = &DAT_1808a8f18;
          }
          else {
            puVar9 = (undefined *)((longlong)piVar10[8] + *(longlong *)(param_1 + 0xa8));
          }
          local_res8[0] = 0;
          cVar8 = FUN_1804201d0(puVar9,*(int *)(param_1 + 0x20) == *piVar10,0,local_res8);
          piVar11 = piVar10;
          if (cVar8 == '\0') {
            piVar11 = piVar12;
          }
        }
        iVar13 = iVar13 + 1;
        piVar12 = piVar11;
      } while (iVar13 < *(int *)(param_1 + 8));
    }
    FUN_180419090();
  }
  *(undefined4 *)(lVar6 + 0x118) = uVar3;
  *(undefined4 *)(lVar6 + 0x11c) = uVar4;
  return piVar11;
}



/* ===== 180424d80 FUN_180424d80 ===== */

float * FUN_180424d80(float *param_1,char *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  float local_resc;
  
  lVar1 = DAT_180ca0a50;
  pcVar3 = param_2;
  if (param_2 != (char *)0xffffffffffffffff) {
    while( true ) {
      if (*pcVar3 == '\0') break;
      if (((*pcVar3 == '#') && (pcVar3[1] == '#')) ||
         (pcVar3 = pcVar3 + 1, pcVar3 == (char *)0xffffffffffffffff)) break;
    }
  }
  if (param_2 == pcVar3) {
    fVar6 = 0.0;
    local_resc = *(float *)(DAT_180ca0a50 + 0x1200);
  }
  else {
    FUN_18040a2f0(&local_res8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),param_3,DAT_1808acd08,
                  DAT_1808acda0,param_2,pcVar3,pcVar3,0);
    fVar6 = (float)(int)((uint)((float)(int)local_res8 < local_res8) + (int)local_res8);
  }
  lVar2 = DAT_180ca0a50;
  fVar4 = *(float *)(lVar1 + 0xcdc);
  if (param_3 == '\0') {
    fVar5 = DAT_1808ac34c;
  }
  else {
    fVar5 = *(float *)(lVar1 + 0xcf4) + *(float *)(lVar1 + 0x1200);
  }
  param_1[1] = *(float *)(lVar1 + 0xce0) + *(float *)(lVar1 + 0xce0) + local_resc;
  fVar6 = fVar5 + fVar4 + fVar4 + fVar6;
  fVar4 = *(float *)(lVar2 + 0x1200) * DAT_1808ac950;
  if (fVar4 <= fVar6) {
    fVar6 = fVar4;
  }
  *param_1 = fVar6;
  return param_1;
}



/* ===== 180424ee0 FUN_180424ee0 ===== */

void FUN_180424ee0(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 0x2c);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x2c);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 180424ff0 FUN_180424ff0 ===== */

void FUN_180424ff0(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 0x18);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x18);
      lVar1 = *(longlong *)(param_1 + 2);
      if ((lVar1 != 0) && (lVar2 != 0)) {
        piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
        if (*piVar6 != *(int *)(lVar2 + 4)) {
          iVar5 = *(short *)(lVar2 + 0x29bc) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar2 + 0x29bc) = sVar4;
          piVar6 = (int *)(lVar2 + 0x29c0 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar2 + 4);
          *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar1);
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
    param_1[1] = param_2;
  }
  return;
}



/* ===== 180425110 FUN_180425110 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180425110(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  float **local_80;
  undefined4 local_78;
  undefined4 local_74;
  float *local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_a8;
  if (DAT_180ca0a50 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(DAT_180ca0a50 + 0xd0);
  }
  local_50 = 0;
  local_4c = 0x3f800000;
  local_60 = 0;
  local_58 = CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) *
                                   (float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) +
                                  _UNK_1808ad9f4),
                      (float)(int)((float)*(undefined8 *)(param_1 + 0x30) *
                                   (float)*(undefined8 *)(param_1 + 0x28) + _DAT_1808ad9f0));
  (**(code **)(*param_2 + 0x160))(param_2,1,&local_60);
  local_80 = local_70;
  local_88 = (undefined4 *)((ulonglong)local_88._4_4_ << 0x20);
  iVar4 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(lVar5 + 0x38),0,4);
  fVar3 = DAT_1808ac540;
  if (iVar4 == 0) {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar6 = fVar1 + *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x24);
    fVar7 = fVar2 + *(float *)(param_1 + 0x2c);
    *local_70[0] = DAT_1808ac540 / (fVar6 - fVar1);
    local_70[0][1] = 0.0;
    local_70[0][2] = 0.0;
    local_70[0][3] = 0.0;
    local_70[0][4] = 0.0;
    local_70[0][5] = fVar3 / (fVar2 - fVar7);
    local_70[0][6] = 0.0;
    local_70[0][7] = 0.0;
    local_70[0][8] = 0.0;
    local_70[0][9] = 0.0;
    local_70[0][10] = 0.5;
    local_70[0][0xb] = 0.0;
    local_70[0][0xc] = (fVar1 + fVar6) / (fVar1 - fVar6);
    local_70[0][0xd] = (fVar2 + fVar7) / (fVar7 - fVar2);
    local_70[0][0xe] = 0.5;
    local_70[0][0xf] = 1.0;
    (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar5 + 0x38),0);
  }
  local_74 = 0x14;
  local_78 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(lVar5 + 0x30));
  local_80 = (float **)&local_78;
  local_88 = &local_74;
  (**(code **)(*param_2 + 0x90))(param_2,0,1,lVar5 + 0x18);
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(lVar5 + 0x20),0x39,0);
  (**(code **)(*param_2 + 0xc0))(param_2,4);
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar5 + 0x28),0,0);
  (**(code **)(*param_2 + 0x38))(param_2,0,1,lVar5 + 0x38);
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined8 *)(lVar5 + 0x40),0,0);
  (**(code **)(*param_2 + 0x50))(param_2,0,1,lVar5 + 0x48);
  (**(code **)(*param_2 + 0xb8))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x1e0))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x200))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x228))(param_2,0,0,0);
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_2 + 0x118))(param_2,*(undefined8 *)(lVar5 + 0x60),&local_48,0xffffffff);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(lVar5 + 0x68),0);
  (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(lVar5 + 0x58));
  return;
}



/* ===== 180425460 FUN_180425460 ===== */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180425460(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  code *pcVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1c48 [32];
  undefined8 local_1c28;
  longlong *local_1c20;
  undefined8 *local_1c18;
  longlong local_1c10;
  undefined8 *local_1c08;
  undefined8 *local_1c00;
  longlong local_1bf8;
  undefined8 local_1bf0;
  undefined8 local_1be8;
  undefined8 local_1be0;
  longlong local_1bd8 [2];
  longlong local_1bc8 [2];
  undefined4 local_1bb8;
  undefined4 local_1bb4;
  undefined1 local_1bb0 [256];
  undefined1 local_1ab0 [384];
  longlong *local_1930;
  longlong *local_1928;
  undefined1 local_1920 [16];
  undefined4 local_1910;
  undefined4 local_190c;
  longlong *local_1908;
  longlong *local_1900;
  longlong *local_18f8;
  longlong *local_18f0;
  longlong *local_18e8;
  longlong *local_18e0;
  uint local_18d8;
  uint local_18d4;
  undefined4 local_18d0 [2];
  longlong local_18c8 [256];
  longlong local_10c8 [256];
  undefined1 local_8c8 [2048];
  undefined4 local_c8 [2];
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [4];
  undefined1 local_a0 [4];
  undefined4 local_9c;
  longlong *local_98 [2];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_180919500 ^ (ulonglong)auStack_1c48;
  if (*(float *)(param_1 + 0x28) <= 0.0) {
    return;
  }
  if (*(float *)(param_1 + 0x2c) <= 0.0) {
    return;
  }
  if (DAT_180ca0a50 == 0) {
    puVar21 = (undefined8 *)0x0;
  }
  else {
    puVar21 = *(undefined8 **)(DAT_180ca0a50 + 0xd0);
  }
  piVar8 = *(int **)(param_1 + 0x40);
  plVar9 = (longlong *)puVar21[1];
  local_1c10 = param_1;
  local_1c08 = puVar21;
  if (piVar8 != (int *)0x0) {
    plVar16 = *(longlong **)(piVar8 + 2);
    plVar2 = plVar16 + *piVar8;
    if (((longlong)*piVar8 & 0x1fffffffffffffffU) != 0) {
      do {
        if (*(int *)(*plVar16 + 4) != 0) {
          FUN_180425f50();
        }
        plVar16 = plVar16 + 1;
      } while (plVar16 != plVar2);
    }
  }
  if ((longlong *)puVar21[3] == (longlong *)0x0) {
LAB_180425546:
    local_88 = *(int *)(param_1 + 0xc) + 5000;
    local_78 = 0;
    *(int *)(puVar21 + 0xe) = local_88;
    local_84 = 2;
    local_80 = 1;
    local_7c = 0x10000;
    local_88 = local_88 * 0x14;
    iVar12 = (**(code **)(*(longlong *)*puVar21 + 0x18))
                       ((longlong *)*puVar21,&local_88,0,puVar21 + 3);
    if (iVar12 < 0) {
      return;
    }
  }
  else if (*(int *)(puVar21 + 0xe) < *(int *)(param_1 + 0xc)) {
    (**(code **)(*(longlong *)puVar21[3] + 0x10))();
    puVar21[3] = 0;
    goto LAB_180425546;
  }
  puVar1 = puVar21 + 4;
  if ((longlong *)puVar21[4] != (longlong *)0x0) {
    if (*(int *)(param_1 + 8) <= *(int *)((longlong)puVar21 + 0x74)) goto LAB_180425621;
    (**(code **)(*(longlong *)puVar21[4] + 0x10))();
    *puVar1 = 0;
  }
  local_88 = *(int *)(param_1 + 8) + 10000;
  *(int *)((longlong)puVar21 + 0x74) = local_88;
  local_88 = local_88 * 2;
  local_78 = 0;
  local_84 = 2;
  local_80 = 2;
  local_7c = 0x10000;
  iVar12 = (**(code **)(*(longlong *)*puVar21 + 0x18))((longlong *)*puVar21,&local_88,0,puVar1);
  if (iVar12 < 0) {
    return;
  }
LAB_180425621:
  local_1c20 = local_1bd8;
  local_1c28 = (undefined1 *)((ulonglong)local_1c28._4_4_ << 0x20);
  iVar12 = (**(code **)(*plVar9 + 0x70))(plVar9,puVar21[3],0,4);
  if (iVar12 == 0) {
    local_1c20 = local_1bc8;
    local_1c28 = (undefined1 *)((ulonglong)local_1c28 & 0xffffffff00000000);
    iVar12 = (**(code **)(*plVar9 + 0x70))(plVar9,*puVar1,0,4);
    if (iVar12 == 0) {
      plVar16 = *(longlong **)(param_1 + 0x18);
      plVar2 = plVar16 + *(int *)(param_1 + 0x10);
      lVar19 = local_1bc8[0];
      lVar22 = local_1bd8[0];
      if (((longlong)*(int *)(param_1 + 0x10) & 0x1fffffffffffffffU) != 0) {
        do {
          lVar10 = *plVar16;
          FUN_180540530(lVar22,*(undefined8 *)(lVar10 + 0x28),
                        (longlong)*(int *)(lVar10 + 0x20) * 0x14);
          FUN_180540530(lVar19,*(undefined8 *)(lVar10 + 0x18),(longlong)*(int *)(lVar10 + 0x10) * 2)
          ;
          plVar16 = plVar16 + 1;
          lVar19 = lVar19 + (longlong)*(int *)(lVar10 + 0x10) * 2;
          lVar22 = lVar22 + (longlong)*(int *)(lVar10 + 0x20) * 0x14;
        } while (plVar16 != plVar2);
        param_1 = local_1c10;
      }
      (**(code **)(*plVar9 + 0x78))(plVar9,puVar21[3],0);
      (**(code **)(*plVar9 + 0x78))(plVar9,puVar21[4],0);
      FUN_180540170(local_1bb0,0,0x1b20);
      local_1bb4 = 0x10;
      local_1bb8 = 0x10;
      (**(code **)(*plVar9 + 0x300))(plVar9,&local_1bb8,local_1bb0);
      (**(code **)(*plVar9 + 0x2f8))(plVar9,&local_1bb4,local_1ab0);
      (**(code **)(*plVar9 + 0x2f0))(plVar9,&local_1930);
      (**(code **)(*plVar9 + 0x2d8))(plVar9,&local_1928,local_1920,&local_1910);
      (**(code **)(*plVar9 + 0x2e0))(plVar9,&local_1908,&local_190c);
      (**(code **)(*plVar9 + 0x248))(plVar9,0,1,&local_1900);
      (**(code **)(*plVar9 + 600))(plVar9,0,1,&local_18f8);
      local_18d0[0] = 0x100;
      local_18d4 = 0x100;
      local_18d8 = 0x100;
      (**(code **)(*plVar9 + 0x250))(plVar9,&local_18f0,local_18c8,&local_18d8);
      (**(code **)(*plVar9 + 0x260))(plVar9,&local_18e8,local_10c8,&local_18d4);
      (**(code **)(*plVar9 + 0x240))(plVar9,0,1,&local_b0);
      (**(code **)(*plVar9 + 0x290))(plVar9,&local_18e0,local_8c8,local_18d0);
      (**(code **)(*plVar9 + 0x298))(plVar9,local_c8);
      (**(code **)(*plVar9 + 0x280))(plVar9,&local_c0,&local_9c,&local_a8);
      local_1c20 = (longlong *)local_a0;
      local_1c28 = local_a4;
      (**(code **)(*plVar9 + 0x278))(plVar9,0,1,&local_b8);
      (**(code **)(*plVar9 + 0x270))(plVar9,local_98);
      FUN_180425110(param_1,plVar9);
      local_1bf0 = *puVar21;
      iVar12 = 0;
      local_1be8 = puVar21[1];
      local_1be0 = puVar21[7];
      puVar21[0xf] = &local_1bf0;
      iVar20 = 0;
      local_1bf8 = DAT_180ca0a50;
      *(undefined8 **)(DAT_180ca0a50 + 0xc58) = &local_1bf0;
      local_1c18 = *(undefined8 **)(param_1 + 0x18);
      fVar4 = *(float *)(param_1 + 0x20);
      fVar5 = *(float *)(param_1 + 0x24);
      fVar6 = *(float *)(param_1 + 0x30);
      fVar7 = *(float *)(param_1 + 0x34);
      puVar21 = local_1c18 + *(int *)(param_1 + 0x10);
      local_1c00 = puVar21;
      if (((longlong)*(int *)(param_1 + 0x10) & 0x1fffffffffffffffU) != 0) {
        do {
          piVar8 = (int *)*local_1c18;
          iVar18 = 0;
          if (0 < *piVar8) {
            do {
              pfVar3 = (float *)(*(longlong *)(piVar8 + 2) + (longlong)iVar18 * 0x48);
              pcVar11 = *(code **)(*(longlong *)(piVar8 + 2) + 0x30 + (longlong)iVar18 * 0x48);
              if (pcVar11 == (code *)0x0) {
                fVar23 = (*pfVar3 - fVar4) * fVar6;
                fVar24 = (pfVar3[2] - fVar4) * fVar6;
                if (fVar23 < fVar24) {
                  fVar25 = (pfVar3[1] - fVar5) * fVar7;
                  fVar26 = (pfVar3[3] - fVar5) * fVar7;
                  if (fVar25 < fVar26) {
                    local_88 = (int)fVar23;
                    local_84 = (int)fVar25;
                    local_80 = (int)fVar24;
                    local_7c = (int)fVar26;
                    (**(code **)(*plVar9 + 0x168))(plVar9,1,&local_88);
                    pfVar13 = pfVar3;
                    if (*(float **)(pfVar3 + 4) != (float *)0x0) {
                      pfVar13 = *(float **)(pfVar3 + 4);
                    }
                    local_1c10 = *(longlong *)(pfVar13 + 6);
                    (**(code **)(*plVar9 + 0x40))(plVar9,0,1,&local_1c10);
                    (**(code **)(*plVar9 + 0x60))
                              (plVar9,pfVar3[10],(int)pfVar3[9] + iVar12,(int)pfVar3[8] + iVar20);
                  }
                }
              }
              else if (pcVar11 == _guard_check_icall) {
                FUN_180425110(param_1,plVar9);
              }
              else {
                (*pcVar11)(piVar8,pfVar3);
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 < *piVar8);
            puVar21 = local_1c00;
          }
          iVar12 = iVar12 + piVar8[4];
          local_1c18 = local_1c18 + 1;
          iVar20 = iVar20 + piVar8[8];
        } while (local_1c18 != puVar21);
      }
      local_1c08[0xf] = 0;
      *(undefined8 *)(local_1bf8 + 0xc58) = 0;
      (**(code **)(*plVar9 + 0x168))(plVar9,local_1bb8,local_1bb0);
      (**(code **)(*plVar9 + 0x160))(plVar9,local_1bb4,local_1ab0);
      (**(code **)(*plVar9 + 0x158))(plVar9,local_1930);
      if (local_1930 != (longlong *)0x0) {
        (**(code **)(*local_1930 + 0x10))();
      }
      (**(code **)(*plVar9 + 0x118))(plVar9,local_1928,local_1920,local_1910);
      if (local_1928 != (longlong *)0x0) {
        (**(code **)(*local_1928 + 0x10))();
      }
      (**(code **)(*plVar9 + 0x120))(plVar9,local_1908,local_190c);
      if (local_1908 != (longlong *)0x0) {
        (**(code **)(*local_1908 + 0x10))();
      }
      (**(code **)(*plVar9 + 0x40))(plVar9,0,1,&local_1900);
      if (local_1900 != (longlong *)0x0) {
        (**(code **)(*local_1900 + 0x10))();
      }
      (**(code **)(*plVar9 + 0x50))(plVar9,0,1,&local_18f8);
      if (local_18f8 != (longlong *)0x0) {
        (**(code **)(*local_18f8 + 0x10))();
      }
      (**(code **)(*plVar9 + 0x48))(plVar9,local_18f0,local_18c8,local_18d8);
      if (local_18f0 != (longlong *)0x0) {
        (**(code **)(*local_18f0 + 0x10))();
      }
      uVar17 = 0;
      uVar14 = local_18d8;
      if (local_18d8 != 0) {
        do {
          if ((longlong *)local_18c8[uVar17] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_18c8[uVar17] + 0x10))();
            uVar14 = local_18d8;
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
        } while (uVar15 < uVar14);
      }
      (**(code **)(*plVar9 + 0x58))(plVar9,local_18e8,local_10c8,local_18d4);
      if (local_18e8 != (longlong *)0x0) {
        (**(code **)(*local_18e8 + 0x10))();
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,0,1,&local_b0);
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
      (**(code **)(*plVar9 + 0xb8))(plVar9,local_18e0,local_8c8,local_18d0[0]);
      if (local_18e0 != (longlong *)0x0) {
        (**(code **)(*local_18e0 + 0x10))();
      }
      uVar17 = 0;
      uVar14 = local_18d4;
      if (local_18d4 != 0) {
        do {
          if ((longlong *)local_10c8[uVar17] != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_10c8[uVar17] + 0x10))();
            uVar14 = local_18d4;
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
        } while (uVar15 < uVar14);
      }
      (**(code **)(*plVar9 + 0xc0))(plVar9,local_c8[0]);
      (**(code **)(*plVar9 + 0x98))(plVar9,local_c0,local_9c,local_a8);
      if (local_c0 != (longlong *)0x0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      local_1c20 = (longlong *)local_a0;
      local_1c28 = local_a4;
      (**(code **)(*plVar9 + 0x90))(plVar9,0,1,&local_b8);
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      (**(code **)(*plVar9 + 0x88))(plVar9,local_98[0]);
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
    }
  }
  return;
}



/* ===== 180425e70 FUN_180425e70 ===== */

void FUN_180425e70(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)puVar3[1] + 0x10))();
    (**(code **)(*(longlong *)*puVar3 + 0x10))();
    lVar4 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar7 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar7 != *piVar1) {
        iVar6 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        lVar2 = DAT_180ca0a50 + 0x29c0;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar2 + (longlong)sVar5 * 8);
        *piVar7 = *piVar1;
        *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      piVar1 = (int *)(lVar4 + 0x29b8);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_1805277b0(puVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  if ((*(char *)(param_1 + 0x5f) == '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
    *(undefined4 *)(param_1 + 4) = 2;
  }
  return;
}



/* ===== 180425f50 FUN_180425f50 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180425f50(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  ulonglong local_80;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (DAT_180ca0a50 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = *(undefined8 **)(DAT_180ca0a50 + 0xd0);
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 2) {
    uVar5 = *(ulonglong *)(param_1 + 0x30);
    puVar6 = (undefined8 *)_malloc_base(0x10);
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
    }
    local_68 = *(int *)(param_1 + 0x24);
    local_64 = *(undefined4 *)(param_1 + 0x28);
    local_78 = local_68 * 4;
    local_54 = 1;
    local_44 = 0;
    local_60 = 1;
    local_5c = 1;
    local_58 = 0x1c;
    local_4c = 0;
    local_48 = 8;
    local_74 = 0;
    local_80 = uVar5;
    (**(code **)(*(longlong *)*puVar8 + 0x28))((longlong *)*puVar8,&local_68,&local_80,puVar6);
    local_88 = 0;
    local_98 = 0x1c;
    local_94 = 4;
    local_8c = local_60;
    (**(code **)(*(longlong *)*puVar8 + 0x38))((longlong *)*puVar8,*puVar6,&local_98,puVar6 + 1);
    *(undefined8 *)(param_1 + 0x18) = puVar6[1];
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined8 **)(param_1 + 8) = puVar6;
  }
  else if (iVar4 == 3) {
    puVar7 = *(ushort **)(param_1 + 0x50);
    puVar6 = *(undefined8 **)(param_1 + 8);
    puVar1 = puVar7 + (longlong)*(int *)(param_1 + 0x48) * 4;
    if (((longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffffU) != 0) {
      do {
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        local_74 = (uint)puVar7[2] + (uint)uVar2;
        local_70 = (uint)puVar7[3] + (uint)uVar3;
        local_b0 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x2c);
        local_80 = (ulonglong)CONCAT24(uVar3,(uint)uVar2);
        local_78 = 0;
        local_6c = 1;
        local_a8 = 0;
        local_b8 = (longlong)
                   (int)((*(int *)(param_1 + 0x24) * (uint)uVar3 + (uint)uVar2) *
                        *(int *)(param_1 + 0x2c)) + *(longlong *)(param_1 + 0x30);
        (**(code **)(*(longlong *)puVar8[1] + 0x180))((longlong *)puVar8[1],*puVar6,0,&local_80);
        puVar7 = puVar7 + 4;
      } while (puVar7 != puVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if ((iVar4 == 4) && (0 < *(int *)(param_1 + 0x58))) {
    FUN_180425e70();
  }
  return;
}



/* ===== 180426190 FUN_180426190 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180426190(void)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_238 [32];
  longlong *local_218;
  longlong *local_210;
  char *local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  longlong **local_1f0;
  undefined8 local_1e8;
  longlong *local_1d8;
  ulonglong local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined1 local_173 [235];
  char *local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  char *local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_238;
  if (DAT_180ca0a50 == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = *(longlong **)(DAT_180ca0a50 + 0xd0);
  }
  if (*plVar7 != 0) {
    FUN_1804265d0();
    local_1e8 = 0;
    local_1f0 = &local_1d8;
    local_1f8 = 0;
    local_200 = 0;
    local_208 = "vs_4_0";
    local_210 = (longlong *)&DAT_18075c0e4;
    local_218 = (longlong *)0x0;
    iVar2 = D3DCompile("cbuffer vertexBuffer : register(b0)             {              float4x4 ProjectionMatrix;             };            struct VS_INPUT            {              float2 pos : POSITION;              float4 col : COLOR0;              float2 uv  : TEXCOORD0;            };                        struct PS_INPUT            {              float4 pos : SV_POSITION;              float4 col : COLOR0;              float2 uv  : TEXCOORD0;            };                        PS_INPUT main(VS_INPUT input)            {              PS_INPUT output;              output.pos = mul( ProjectionMatrix, float4(input.pos.xy, 0.0f, 1.0f));              output.col = input.col;              output.uv  = input.uv;              return output;            }"
                       ,0x2df,0,0);
    if (-1 < iVar2) {
      plVar1 = (longlong *)*plVar7;
      lVar5 = *plVar1;
      uVar3 = (**(code **)(*local_1d8 + 0x20))();
      uVar4 = (**(code **)(*local_1d8 + 0x18))();
      local_218 = plVar7 + 5;
      iVar2 = (**(code **)(lVar5 + 0x60))(plVar1,uVar4,uVar3,0);
      if (iVar2 == 0) {
        plVar1 = (longlong *)*plVar7;
        local_88 = "POSITION";
        local_68 = "TEXCOORD";
        local_48 = "COLOR";
        local_80 = 0;
        local_7c = 0x10;
        local_74 = 0;
        local_6c = 0;
        local_60 = 0;
        local_5c = 0x10;
        local_54 = 8;
        local_4c = 0;
        local_40 = 0;
        local_3c = 0x1c;
        local_34 = 0x10;
        local_2c = 0;
        lVar5 = *plVar1;
        plVar6 = (longlong *)(**(code **)(*local_1d8 + 0x20))();
        uVar3 = (**(code **)(*local_1d8 + 0x18))();
        local_210 = plVar7 + 6;
        local_218 = plVar6;
        iVar2 = (**(code **)(lVar5 + 0x58))(plVar1,&local_88,3,uVar3);
        lVar5 = *local_1d8;
        if (iVar2 == 0) {
          (**(code **)(lVar5 + 0x10))();
          uStack_1c0 = 0;
          local_1d0 = 0x200000040;
          uStack_1c8 = 0x1000000000004;
          (**(code **)(*(longlong *)*plVar7 + 0x18))((longlong *)*plVar7,&local_1d0,0,plVar7 + 7);
          local_1e8 = 0;
          local_1f0 = &local_1d8;
          local_1f8 = 0;
          local_200 = 0;
          local_208 = "ps_4_0";
          local_210 = (longlong *)&DAT_18075c0e4;
          local_218 = (longlong *)0x0;
          iVar2 = D3DCompile("struct PS_INPUT            {            float4 pos : SV_POSITION;            float4 col : COLOR0;            float2 uv  : TEXCOORD0;            };            sampler sampler0;            Texture2D texture0;                        float4 main(PS_INPUT input) : SV_Target            {            float4 out_col = input.col * texture0.Sample(sampler0, input.uv);             return out_col;             }"
                             ,0x191,0,0);
          if (iVar2 < 0) {
            return 0;
          }
          plVar1 = (longlong *)*plVar7;
          lVar5 = *plVar1;
          uVar3 = (**(code **)(*local_1d8 + 0x20))();
          uVar4 = (**(code **)(*local_1d8 + 0x18))();
          local_218 = plVar7 + 8;
          iVar2 = (**(code **)(lVar5 + 0x78))(plVar1,uVar4,uVar3,0);
          lVar5 = *local_1d8;
          if (iVar2 == 0) {
            (**(code **)(lVar5 + 0x10))();
            local_194 = 0;
            FUN_180540170(local_173,0,0xe3);
            local_198 = 0;
            local_190 = 1;
            local_18c = 5;
            local_188 = _DAT_1808ad6f0;
            uStack_180 = _UNK_1808ad6f8;
            local_178 = 1;
            local_174 = 0xf;
            (**(code **)(*(longlong *)*plVar7 + 0xa0))((longlong *)*plVar7,&local_198,plVar7 + 0xc);
            uStack_1b0 = 0;
            uStack_1ac = 0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            local_1d0 = 0x100000003;
            local_1b4 = 1;
            local_1b8 = 1;
            (**(code **)(*(longlong *)*plVar7 + 0xb0))((longlong *)*plVar7,&local_1d0,plVar7 + 0xb);
            local_1d0 = _DAT_1808ad400;
            uStack_1c8 = _UNK_1808ad408;
            uStack_1b0 = (undefined4)_DAT_1808ad5e0;
            uStack_1ac = (undefined4)((ulonglong)_DAT_1808ad5e0 >> 0x20);
            uStack_1a8 = (undefined4)_UNK_1808ad5e8;
            uStack_1a4 = (undefined4)((ulonglong)_UNK_1808ad5e8 >> 0x20);
            local_1b4 = 1;
            local_1b8 = 1;
            uStack_1c0 = 0x100000000;
            uStack_1a0 = 8;
            (**(code **)(*(longlong *)*plVar7 + 0xa8))((longlong *)*plVar7,&local_1d0,plVar7 + 0xd);
            uStack_1c0 = 0;
            local_1b4 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            uStack_1a8 = 0;
            local_1b8 = 8;
            local_1d0 = _DAT_1808ad680;
            uStack_1c8 = _UNK_1808ad688;
            uStack_1a4 = 0;
            uStack_1a0 = 0;
            (**(code **)(*(longlong *)*plVar7 + 0xb8))((longlong *)*plVar7,&local_1d0,plVar7 + 9);
            local_1d0 = local_1d0 & 0xffffffff00000000;
            (**(code **)(*(longlong *)*plVar7 + 0xb8))((longlong *)*plVar7,&local_1d0,plVar7 + 10);
            return 1;
          }
        }
      }
      else {
        lVar5 = *local_1d8;
      }
      (**(code **)(lVar5 + 0x10))();
    }
  }
  return 0;
}



/* ===== 1804265d0 FUN_1804265d0 ===== */

void FUN_1804265d0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (DAT_180ca0a50 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)(DAT_180ca0a50 + 0xd0);
  }
  if (*plVar2 != 0) {
    plVar3 = *(longlong **)(DAT_180ca0a50 + 0xc88);
    plVar1 = plVar3 + *(int *)(DAT_180ca0a50 + 0xc80);
    if (((longlong)*(int *)(DAT_180ca0a50 + 0xc80) & 0x1fffffffffffffffU) != 0) {
      do {
        if (*(short *)(*plVar3 + 0x5c) == 1) {
          FUN_180425e70();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
    if ((longlong *)plVar2[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[9] + 0x10))();
      plVar2[9] = 0;
    }
    if ((longlong *)plVar2[10] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[10] + 0x10))();
      plVar2[10] = 0;
    }
    if ((longlong *)plVar2[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[4] + 0x10))();
      plVar2[4] = 0;
    }
    if ((longlong *)plVar2[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[3] + 0x10))();
      plVar2[3] = 0;
    }
    if ((longlong *)plVar2[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xc] + 0x10))();
      plVar2[0xc] = 0;
    }
    if ((longlong *)plVar2[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xd] + 0x10))();
      plVar2[0xd] = 0;
    }
    if ((longlong *)plVar2[0xb] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[0xb] + 0x10))();
      plVar2[0xb] = 0;
    }
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[8] + 0x10))();
      plVar2[8] = 0;
    }
    if ((longlong *)plVar2[7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[7] + 0x10))();
      plVar2[7] = 0;
    }
    if ((longlong *)plVar2[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[6] + 0x10))();
      plVar2[6] = 0;
    }
    if ((longlong *)plVar2[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[5] + 0x10))();
      plVar2[5] = 0;
    }
  }
  return;
}



/* ===== 180426730 FUN_180426730 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180426730(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  BOOL BVar3;
  int iVar4;
  undefined8 *puVar5;
  HKL pHVar6;
  HMODULE hModule;
  FARPROC pFVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [48];
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  char *local_38 [4];
  char *local_18;
  ulonglong local_10;
  
  lVar1 = DAT_180ca0a50;
  local_10 = DAT_180919500 ^ (ulonglong)auStack_78;
  BVar3 = QueryPerformanceFrequency(&local_48);
  if ((BVar3 == 0) || (BVar3 = QueryPerformanceCounter(&local_40), BVar3 == 0)) {
    return 0;
  }
  puVar5 = (undefined8 *)_malloc_base(0x58);
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
  }
  *(uint *)(lVar1 + 0x2c) = *(uint *)(lVar1 + 0x2c) | 6;
  *(char **)(lVar1 + 0xb8) = "imgui_impl_win32";
  *(undefined8 **)(lVar1 + 200) = puVar5;
  *puVar5 = param_1;
  *(_struct_19 *)(puVar5 + 4) = local_48.s;
  *(_struct_19 *)(puVar5 + 3) = local_40.s;
  *(undefined4 *)(puVar5 + 5) = 0xb;
  lVar1 = *(longlong *)(lVar1 + 200);
  pHVar6 = GetKeyboardLayout(0);
  iVar4 = GetLocaleInfoA((uint)((ulonglong)pHVar6 >> 0x10) & 0xffff,0x20001004,(LPSTR)(lVar1 + 0x2c)
                         ,4);
  if (iVar4 == 0) {
    *(undefined4 *)(lVar1 + 0x2c) = 0;
  }
  uVar9 = 0;
  uVar2 = *puVar5;
  lVar1 = **(longlong **)(DAT_180ca0a50 + 0x2058);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  local_38[0] = "xinput1_4.dll";
  local_38[1] = "xinput1_3.dll";
  local_38[2] = "xinput9_1_0.dll";
  local_38[3] = "xinput1_2.dll";
  local_18 = "xinput1_1.dll";
  *(undefined1 *)((longlong)puVar5 + 0x31) = 1;
  do {
    hModule = LoadLibraryA(local_38[uVar9]);
    if (hModule != (HMODULE)0x0) {
      puVar5[7] = hModule;
      pFVar7 = GetProcAddress(hModule,"XInputGetCapabilities");
      puVar5[8] = pFVar7;
      pFVar7 = GetProcAddress(hModule,"XInputGetState");
      puVar5[9] = pFVar7;
      return 1;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
  } while ((int)uVar8 < 5);
  return 1;
}



/* ===== 180426910 FUN_180426910 ===== */

undefined8 FUN_180426910(byte *param_1,int param_2)

{
  HCURSOR pHVar1;
  LPCWSTR lpCursorName;
  
  if ((*param_1 & 0x20) != 0) {
    return 0;
  }
  if ((param_2 == -1) || (param_1[0x65] != 0)) {
    SetCursor((HCURSOR)0x0);
    return 1;
  }
  lpCursorName = (LPCWSTR)0x7f00;
  switch(param_2) {
  case 1:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f01);
    SetCursor(pHVar1);
    return 1;
  case 2:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
    SetCursor(pHVar1);
    return 1;
  case 3:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f85);
    SetCursor(pHVar1);
    return 1;
  case 4:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f84);
    SetCursor(pHVar1);
    return 1;
  case 5:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f83);
    SetCursor(pHVar1);
    return 1;
  case 6:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f82);
    SetCursor(pHVar1);
    return 1;
  case 7:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f89);
    SetCursor(pHVar1);
    return 1;
  case 8:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f02);
    SetCursor(pHVar1);
    return 1;
  case 9:
    pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f8a);
    SetCursor(pHVar1);
    return 1;
  case 10:
    lpCursorName = (LPCWSTR)0x7f88;
  }
  pHVar1 = LoadCursorW((HINSTANCE)0x0,lpCursorName);
  SetCursor(pHVar1);
  return 1;
}



/* ===== 180426ac0 FUN_180426ac0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180426ac0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  int local_88;
  ushort local_84;
  byte local_82;
  byte local_81;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_180919500 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (*(char *)(lVar1 + 0x31) != '\0') {
    bVar5 = false;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if (*(code **)(lVar1 + 0x40) != (code *)0x0) {
      iVar3 = (**(code **)(lVar1 + 0x40))(0,1,&local_78);
      bVar5 = iVar3 == 0;
    }
    *(bool *)(lVar1 + 0x30) = bVar5;
    *(undefined1 *)(lVar1 + 0x31) = 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  if (((*(char *)(lVar1 + 0x30) != '\0') && (*(code **)(lVar1 + 0x48) != (code *)0x0)) &&
     (iVar3 = (**(code **)(lVar1 + 0x48))(0,&local_88), iVar3 == 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    fVar2 = DAT_1808ac34c;
    if ((*(int *)(lVar1 + 0x50) == 0) || (*(int *)(lVar1 + 0x50) != local_88)) {
      fVar11 = 0.0;
      *(int *)(lVar1 + 0x50) = local_88;
      if (*(char *)(param_1 + 0xbb5) != '\0') {
        bVar4 = (byte)local_84 >> 4 & 1;
        if (bVar4 == 0) {
          fVar9 = 0.0;
        }
        else {
          fVar9 = fVar2;
        }
        FUN_1803d6f60(param_1,0x278,bVar4,fVar9);
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          bVar4 = (byte)local_84 >> 5 & 1;
          if (bVar4 == 0) {
            fVar9 = 0.0;
          }
          else {
            fVar9 = fVar2;
          }
          FUN_1803d6f60(param_1,0x279,bVar4,fVar9);
          if (*(char *)(param_1 + 0xbb5) != '\0') {
            bVar4 = (byte)(local_84 >> 0xe);
            if ((bVar4 & 1) == 0) {
              fVar9 = 0.0;
            }
            else {
              fVar9 = fVar2;
            }
            FUN_1803d6f60(param_1,0x27a,bVar4 & 1,fVar9);
            if (*(char *)(param_1 + 0xbb5) != '\0') {
              bVar4 = (byte)(local_84 >> 0xd);
              if ((bVar4 & 1) == 0) {
                fVar9 = 0.0;
              }
              else {
                fVar9 = fVar2;
              }
              FUN_1803d6f60(param_1,0x27b,bVar4 & 1,fVar9);
              if (*(char *)(param_1 + 0xbb5) != '\0') {
                if ((short)local_84 < 0) {
                  fVar9 = fVar2;
                }
                else {
                  fVar9 = 0.0;
                }
                FUN_1803d6f60(param_1,0x27c,local_84 >> 0xf,fVar9);
                if (*(char *)(param_1 + 0xbb5) != '\0') {
                  bVar4 = (byte)(local_84 >> 0xc);
                  if ((bVar4 & 1) == 0) {
                    fVar9 = 0.0;
                  }
                  else {
                    fVar9 = fVar2;
                  }
                  FUN_1803d6f60(param_1,0x27d,bVar4 & 1,fVar9);
                  if (*(char *)(param_1 + 0xbb5) != '\0') {
                    bVar4 = (byte)local_84 >> 2 & 1;
                    if (bVar4 == 0) {
                      fVar9 = 0.0;
                    }
                    else {
                      fVar9 = fVar2;
                    }
                    FUN_1803d6f60(param_1,0x27e,bVar4,fVar9);
                    if (*(char *)(param_1 + 0xbb5) != '\0') {
                      bVar4 = (byte)local_84 >> 3 & 1;
                      if (bVar4 == 0) {
                        fVar9 = 0.0;
                      }
                      else {
                        fVar9 = fVar2;
                      }
                      FUN_1803d6f60(param_1,0x27f,bVar4,fVar9);
                      if (*(char *)(param_1 + 0xbb5) != '\0') {
                        if ((local_84 & 1) == 0) {
                          fVar9 = 0.0;
                        }
                        else {
                          fVar9 = fVar2;
                        }
                        FUN_1803d6f60(param_1,0x280,(byte)local_84 & 1,fVar9);
                        if (*(char *)(param_1 + 0xbb5) != '\0') {
                          bVar4 = (byte)local_84 >> 1 & 1;
                          if (bVar4 == 0) {
                            fVar9 = 0.0;
                          }
                          else {
                            fVar9 = fVar2;
                          }
                          FUN_1803d6f60(param_1,0x281,bVar4,fVar9);
                          if (*(char *)(param_1 + 0xbb5) != '\0') {
                            if ((local_84 & 0x100) == 0) {
                              fVar9 = 0.0;
                            }
                            else {
                              fVar9 = fVar2;
                            }
                            FUN_1803d6f60(param_1,0x282,(byte)(local_84 >> 8) & 1,fVar9);
                            if (*(char *)(param_1 + 0xbb5) != '\0') {
                              bVar4 = (byte)(local_84 >> 9);
                              if ((bVar4 & 1) == 0) {
                                fVar9 = 0.0;
                              }
                              else {
                                fVar9 = fVar2;
                              }
                              FUN_1803d6f60(param_1,0x283,bVar4 & 1,fVar9);
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
      fVar7 = DAT_1808acb78;
      fVar9 = DAT_1808ac0c0;
      fVar6 = (float)(int)(local_82 - 0x1e) / DAT_1808acb78;
      if (0.0 <= fVar6) {
        fVar8 = fVar2;
        if (fVar6 <= fVar2) {
          fVar8 = fVar6;
        }
      }
      else {
        fVar8 = 0.0;
      }
      FUN_1803d6f60(param_1,0x284,DAT_1808ac0c0 < fVar6,fVar8);
      fVar7 = (float)(int)(local_81 - 0x1e) / fVar7;
      if (0.0 <= fVar7) {
        fVar6 = fVar2;
        if (fVar7 <= fVar2) {
          fVar6 = fVar7;
        }
      }
      else {
        fVar6 = 0.0;
      }
      FUN_1803d6f60(param_1,0x285,fVar9 < fVar7,fVar6);
      if (*(char *)(param_1 + 0xbb5) != '\0') {
        bVar4 = (byte)local_84 >> 6 & 1;
        if (bVar4 == 0) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = fVar2;
        }
        FUN_1803d6f60(param_1,0x286,bVar4,fVar7);
        if (*(char *)(param_1 + 0xbb5) != '\0') {
          if ((char)-((char)(byte)local_84 >> 7) == '\0') {
            fVar7 = 0.0;
          }
          else {
            fVar7 = fVar2;
          }
          FUN_1803d6f60(param_1,0x287,-((char)(byte)local_84 >> 7),fVar7);
        }
      }
      fVar7 = DAT_1808ace98;
      fVar6 = (float)(local_80 + 0x1ea9) / DAT_1808ace98;
      if (0.0 <= fVar6) {
        fVar8 = fVar2;
        if (fVar6 <= fVar2) {
          fVar8 = fVar6;
        }
      }
      else {
        fVar8 = 0.0;
      }
      FUN_1803d6f60(param_1,0x288,fVar9 < fVar6,fVar8);
      fVar6 = DAT_1808acc9c;
      fVar8 = (float)(local_80 + -0x1ea9) / DAT_1808acc9c;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_1803d6f60(param_1,0x289,fVar9 < fVar8,fVar10);
      fVar8 = (float)(local_7e + -0x1ea9) / fVar6;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_1803d6f60(param_1,0x28a,fVar9 < fVar8,fVar10);
      fVar8 = (float)(local_7e + 0x1ea9) / fVar7;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_1803d6f60(param_1,0x28b,fVar9 < fVar8,fVar10);
      fVar8 = (float)(local_7c + 0x1ea9) / fVar7;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_1803d6f60(param_1,0x28c,fVar9 < fVar8,fVar10);
      fVar8 = (float)(local_7c + -0x1ea9) / fVar6;
      if (0.0 <= fVar8) {
        fVar10 = fVar2;
        if (fVar8 <= fVar2) {
          fVar10 = fVar8;
        }
      }
      else {
        fVar10 = 0.0;
      }
      FUN_1803d6f60(param_1,0x28d,fVar9 < fVar8,fVar10);
      fVar6 = (float)(local_7a + -0x1ea9) / fVar6;
      if (0.0 <= fVar6) {
        fVar8 = fVar2;
        if (fVar6 <= fVar2) {
          fVar8 = fVar6;
        }
      }
      else {
        fVar8 = 0.0;
      }
      FUN_1803d6f60(param_1,0x28e,fVar9 < fVar6,fVar8);
      fVar7 = (float)(local_7a + 0x1ea9) / fVar7;
      if ((0.0 <= fVar7) && (fVar11 = fVar2, fVar7 <= fVar2)) {
        fVar11 = fVar7;
      }
      FUN_1803d6f60(param_1,0x28f,fVar9 < fVar7,fVar11);
    }
  }
  return;
}



/* ===== 1804270e0 FUN_1804270e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804270e0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  SHORT SVar3;
  BOOL BVar4;
  HWND pHVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  tagPOINT local_38;
  tagPOINT local_30;
  LARGE_INTEGER local_28;
  tagRECT local_20;
  ulonglong local_10;
  
  lVar2 = DAT_180ca0a50;
  local_10 = DAT_180919500 ^ (ulonglong)auStack_58;
  if (DAT_180ca0a50 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = *(undefined8 **)(DAT_180ca0a50 + 200);
  }
  local_20.left = 0;
  local_20.top = 0;
  local_20.right = 0;
  local_20.bottom = 0;
  lVar7 = DAT_180ca0a50 + 0x28;
  GetClientRect((HWND)*puVar8,&local_20);
  local_28.QuadPart = 0;
  *(float *)(lVar2 + 0x30) = (float)(local_20.right - local_20.left);
  *(float *)(lVar2 + 0x34) = (float)(local_20.bottom - local_20.top);
  QueryPerformanceCounter(&local_28);
  *(float *)(lVar2 + 0x40) =
       (float)((double)(local_28.QuadPart - puVar8[3]) / (double)(longlong)puVar8[4]);
  *(_struct_19 *)(puVar8 + 3) = local_28.s;
  puVar1 = *(undefined8 **)(lVar2 + 200);
  pHVar5 = GetForegroundWindow();
  if (pHVar5 == (HWND)*puVar1) {
    if (*(char *)(lVar2 + 0xe3) != '\0') {
      local_38.x = (LONG)(float)*(undefined8 *)(lVar2 + 0x110);
      local_38.y = (LONG)(float)((ulonglong)*(undefined8 *)(lVar2 + 0x110) >> 0x20);
      BVar4 = ClientToScreen((HWND)*puVar1,&local_38);
      if (BVar4 != 0) {
        SetCursorPos(local_38.x,local_38.y);
      }
      if (*(char *)(lVar2 + 0xe3) != '\0') goto LAB_180427235;
    }
    if (*(int *)(puVar1 + 2) == 0) {
      BVar4 = GetCursorPos(&local_30);
      if (BVar4 != 0) {
        BVar4 = ScreenToClient((HWND)*puVar1,&local_30);
        if (BVar4 != 0) {
          FUN_1803d7170(lVar7);
        }
      }
    }
  }
LAB_180427235:
  if ((*(char *)(DAT_180ca0a50 + 0x234) != '\0') && (*(char *)(DAT_180ca0a50 + 0x16c4) == '\0')) {
    SVar3 = GetKeyState(0xa0);
    if ((-1 < SVar3) && (*(char *)(lVar2 + 0xbdd) != '\0')) {
      FUN_1803d6f60(lVar7,0x210,0,0);
    }
  }
  if ((*(char *)(DAT_180ca0a50 + 0x274) != '\0') && (*(char *)(DAT_180ca0a50 + 0x16f4) == '\0')) {
    SVar3 = GetKeyState(0xa1);
    if ((-1 < SVar3) && (*(char *)(lVar2 + 0xbdd) != '\0')) {
      FUN_1803d6f60(lVar7,0x214,0,0);
    }
  }
  if ((*(char *)(DAT_180ca0a50 + 0x254) != '\0') && (*(char *)(DAT_180ca0a50 + 0x16dc) == '\0')) {
    SVar3 = GetKeyState(0x5b);
    if ((-1 < SVar3) && (*(char *)(lVar2 + 0xbdd) != '\0')) {
      FUN_1803d6f60(lVar7,0x212,0,0);
    }
  }
  if ((*(char *)(DAT_180ca0a50 + 0x294) != '\0') && (*(char *)(DAT_180ca0a50 + 0x170c) == '\0')) {
    SVar3 = GetKeyState(0x5c);
    if ((-1 < SVar3) && (*(char *)(lVar2 + 0xbdd) != '\0')) {
      FUN_1803d6f60(lVar7,0x216,0,0);
    }
  }
  if (*(char *)(lVar2 + 0x8d) == '\0') {
    iVar6 = *(int *)(DAT_180ca0a50 + 0x2500);
  }
  else {
    iVar6 = -1;
  }
  if (*(int *)(puVar8 + 5) != iVar6) {
    *(int *)(puVar8 + 5) = iVar6;
    FUN_180426910(lVar7);
  }
  FUN_180426ac0(lVar7);
  return;
}



/* ===== 1804273a0 FUN_1804273a0 ===== */

undefined8 FUN_1804273a0(longlong param_1,undefined8 param_2)

{
  if ((param_1 == 0xd) && (((ushort)((ulonglong)param_2 >> 0x10) >> 8 & 1) != 0)) {
    return 0x273;
  }
  switch(param_1) {
  case 8:
    return 0x20b;
  case 9:
    return 0x200;
  case 0xd:
    return 0x20d;
  case 0x13:
    return 0x263;
  case 0x14:
    return 0x25f;
  case 0x1b:
    return 0x20e;
  case 0x20:
    return 0x20c;
  case 0x21:
    return 0x205;
  case 0x22:
    return 0x206;
  case 0x23:
    return 0x208;
  case 0x24:
    return 0x207;
  case 0x25:
    return 0x201;
  case 0x26:
    return 0x203;
  case 0x27:
    return 0x202;
  case 0x28:
    return 0x204;
  case 0x2c:
    return 0x262;
  case 0x2d:
    return 0x209;
  case 0x2e:
    return 0x20a;
  case 0x30:
    return 0x218;
  case 0x31:
    return 0x219;
  case 0x32:
    return 0x21a;
  case 0x33:
    return 0x21b;
  case 0x34:
    return 0x21c;
  case 0x35:
    return 0x21d;
  case 0x36:
    return 0x21e;
  case 0x37:
    return 0x21f;
  case 0x38:
    return 0x220;
  case 0x39:
    return 0x221;
  case 0x41:
    return 0x222;
  case 0x42:
    return 0x223;
  case 0x43:
    return 0x224;
  case 0x44:
    return 0x225;
  case 0x45:
    return 0x226;
  case 0x46:
    return 0x227;
  case 0x47:
    return 0x228;
  case 0x48:
    return 0x229;
  case 0x49:
    return 0x22a;
  case 0x4a:
    return 0x22b;
  case 0x4b:
    return 0x22c;
  case 0x4c:
    return 0x22d;
  case 0x4d:
    return 0x22e;
  case 0x4e:
    return 0x22f;
  case 0x4f:
    return 0x230;
  case 0x50:
    return 0x231;
  case 0x51:
    return 0x232;
  case 0x52:
    return 0x233;
  case 0x53:
    return 0x234;
  case 0x54:
    return 0x235;
  case 0x55:
    return 0x236;
  case 0x56:
    return 0x237;
  case 0x57:
    return 0x238;
  case 0x58:
    return 0x239;
  case 0x59:
    return 0x23a;
  case 0x5a:
    return 0x23b;
  case 0x5b:
    return 0x212;
  case 0x5c:
    return 0x216;
  case 0x5d:
    return 0x217;
  case 0x60:
    return 0x264;
  case 0x61:
    return 0x265;
  case 0x62:
    return 0x266;
  case 99:
    return 0x267;
  case 100:
    return 0x268;
  case 0x65:
    return 0x269;
  case 0x66:
    return 0x26a;
  case 0x67:
    return 0x26b;
  case 0x68:
    return 0x26c;
  case 0x69:
    return 0x26d;
  case 0x6a:
    return 0x270;
  case 0x6b:
    return 0x272;
  case 0x6d:
    return 0x271;
  case 0x6e:
    return 0x26e;
  case 0x6f:
    return 0x26f;
  case 0x70:
    return 0x23c;
  case 0x71:
    return 0x23d;
  case 0x72:
    return 0x23e;
  case 0x73:
    return 0x23f;
  case 0x74:
    return 0x240;
  case 0x75:
    return 0x241;
  case 0x76:
    return 0x242;
  case 0x77:
    return 0x243;
  case 0x78:
    return 0x244;
  case 0x79:
    return 0x245;
  case 0x7a:
    return 0x246;
  case 0x7b:
    return 0x247;
  case 0x7c:
    return 0x248;
  case 0x7d:
    return 0x249;
  case 0x7e:
    return 0x24a;
  case 0x7f:
    return 0x24b;
  case 0x80:
    return 0x24c;
  case 0x81:
    return 0x24d;
  case 0x82:
    return 0x24e;
  case 0x83:
    return 0x24f;
  case 0x84:
    return 0x250;
  case 0x85:
    return 0x251;
  case 0x86:
    return 0x252;
  case 0x87:
    return 0x253;
  case 0x90:
    return 0x261;
  case 0x91:
    return 0x260;
  case 0xa0:
    return 0x210;
  case 0xa1:
    return 0x214;
  case 0xa2:
    return 0x20f;
  case 0xa3:
    return 0x213;
  case 0xa4:
    return 0x211;
  case 0xa5:
    return 0x215;
  case 0xa6:
    return 0x275;
  case 0xa7:
    return 0x276;
  case 0xbc:
switchD_1804273e2_caseD_bc:
    return 0x255;
  case 0xbe:
switchD_1804273e2_caseD_be:
    return 599;
  }
  switch((uint)((ulonglong)param_2 >> 0x10) & 0xff) {
  case 0xc:
    return 0x256;
  case 0xd:
    return 0x25a;
  default:
    return 0;
  case 0x1a:
    return 0x25b;
  case 0x1b:
    return 0x25d;
  case 0x27:
    return 0x259;
  case 0x28:
    return 0x254;
  case 0x29:
    return 0x25e;
  case 0x2b:
    return 0x25c;
  case 0x33:
    goto switchD_1804273e2_caseD_bc;
  case 0x34:
    goto switchD_1804273e2_caseD_be;
  case 0x35:
    return 600;
  case 0x56:
    return 0x277;
  }
}



/* ===== 1804279c0 FUN_1804279c0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_1804279c0(HWND param_1,uint param_2,ulonglong param_3,ulonglong param_4,longlong param_5
                     )

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  SHORT SVar5;
  int iVar6;
  int iVar7;
  BOOL BVar8;
  uint uVar9;
  HKL pHVar10;
  LRESULT LVar11;
  ulonglong uVar12;
  HWND pHVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  char cVar17;
  short sVar18;
  uint uVar19;
  char cVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  ulonglong local_res18;
  ulonglong local_res20;
  tagPOINT local_88;
  tagTRACKMOUSEEVENT local_80;
  tagTRACKMOUSEEVENT local_68;
  undefined4 local_50;
  
  lVar4 = param_5;
  lVar3 = *(longlong *)(param_5 + 0xa0);
  if (lVar3 == 0) {
    return 0;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 < 0x201) {
    if (param_2 == 0x200) {
LAB_18042806c:
      uVar12 = GetMessageExtraInfo();
      if ((uVar12 & 0xffffff80) == 0xff515700) {
        param_5._0_2_ = L'\x02';
      }
      else {
        param_5._0_2_ = (WCHAR)((uVar12 & 0xffffff80) == 0xff515780);
      }
      param_5._2_2_ = 0;
      *(HWND *)(lVar3 + 8) = param_1;
      iVar7 = (param_2 != 0x200) + 1;
      if (*(int *)(lVar3 + 0x10) != iVar7) {
        local_80.cbSize = 0x18;
        local_80.dwFlags = 0x80000000;
        local_68.dwFlags = 2;
        if (param_2 != 0x200) {
          local_68.dwFlags = 0x12;
        }
        local_80.dwHoverTime = 0;
        local_68.cbSize = 0x18;
        local_68.hwndTrack._0_4_ = (int)param_1;
        local_68.hwndTrack._4_4_ = (uint)((ulonglong)param_1 >> 0x20);
        local_68.dwHoverTime = 0;
        local_80.hwndTrack = param_1;
        if (*(int *)(lVar3 + 0x10) != 0) {
          TrackMouseEvent(&local_80);
        }
        TrackMouseEvent(&local_68);
        *(int *)(lVar3 + 0x10) = iVar7;
      }
      local_88.x = (LONG)(short)local_res20;
      local_88.y = (LONG)(short)(local_res20 >> 0x10);
      if (param_2 == 0xa0) {
        ScreenToClient(param_1,&local_88);
      }
      *(uint *)(*(longlong *)(lVar4 + 0xe0) + 0x1490) = CONCAT22(param_5._2_2_,(WCHAR)param_5);
      FUN_1803d7170(lVar4);
      return 0;
    }
    if (param_2 < 8) {
      if (param_2 == 7) {
LAB_180427b4a:
        lVar4 = *(longlong *)(param_5 + 0xe0);
        piVar1 = (int *)(lVar4 + 0x1470);
        iVar7 = *piVar1;
        uVar14 = iVar7 - 1;
        if (-1 < (int)uVar14) {
          do {
            if (*(int *)((ulonglong)uVar14 * 0x1c + *(longlong *)(lVar4 + 0x1478)) == 6) {
              cVar20 = *(char *)((ulonglong)uVar14 * 0x1c + 0xc + *(longlong *)(lVar4 + 0x1478));
              goto LAB_180427b99;
            }
            uVar14 = uVar14 - 1;
          } while (-1 < (int)uVar14);
        }
        cVar20 = *(char *)(lVar4 + 0xbdc) == '\0';
LAB_180427b99:
        if (((bool)cVar20 != (param_2 == 7)) &&
           ((*(char *)(param_5 + 0x8d) == '\0' || (param_2 == 7)))) {
          local_68.hwndTrack._0_4_ = *(int *)(lVar4 + 0x1494);
          *(int *)(lVar4 + 0x1494) = (int)local_68.hwndTrack + 1;
          iVar6 = *(int *)(lVar4 + 0x1474);
          local_68.cbSize = 6;
          local_68.dwFlags = 0;
          local_68.dwHoverTime = 0;
          local_68._20_4_ = 0;
          local_50 = 0;
          local_68.hwndTrack._4_4_ = (uint)(param_2 == 7);
          if (iVar7 == iVar6) {
            if (iVar6 == 0) {
              iVar6 = 8;
            }
            else {
              iVar6 = iVar6 / 2 + iVar6;
            }
            iVar15 = iVar7 + 1;
            if (iVar7 + 1 < iVar6) {
              iVar15 = iVar6;
            }
            FUN_1803f6e00(piVar1,iVar15);
          }
          iVar7 = *piVar1;
          lVar4 = *(longlong *)(lVar4 + 0x1478);
          puVar2 = (undefined8 *)((longlong)iVar7 * 0x1c + lVar4);
          *puVar2 = local_68._0_8_;
          puVar2[1] = CONCAT44(local_68.hwndTrack._4_4_,(int)local_68.hwndTrack);
          puVar2 = (undefined8 *)((longlong)iVar7 * 0x1c + 0xc + lVar4);
          *puVar2 = CONCAT44(local_68.dwHoverTime,local_68.hwndTrack._4_4_);
          puVar2[1] = CONCAT44(local_50,local_68._20_4_);
          *piVar1 = *piVar1 + 1;
        }
        *(undefined4 *)(lVar3 + 0x50) = 0;
        return 0;
      }
      if (param_2 != 2) {
        return 0;
      }
      if (*(HWND *)(lVar3 + 8) != param_1) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x10) == 0) {
        return 0;
      }
      local_80.dwHoverTime = 0;
      local_80.cbSize = 0x18;
      local_80.dwFlags = 0x80000000;
      local_80.hwndTrack = param_1;
      TrackMouseEvent(&local_80);
      goto LAB_1804281b5;
    }
    if (param_2 < 0x102) {
      if (param_2 != 0x101) {
        if (param_2 == 8) goto LAB_180427b4a;
        if (param_2 == 0x20) {
          if ((short)param_4 != 1) {
            return 0;
          }
          cVar20 = FUN_180426910(param_5,*(undefined4 *)(lVar3 + 0x28));
          if (cVar20 == '\0') {
            return 0;
          }
          return 1;
        }
        if (param_2 == 0x51) {
          pHVar10 = GetKeyboardLayout(0);
          iVar7 = GetLocaleInfoA((uint)((ulonglong)pHVar10 >> 0x10) & 0xffff,0x20001004,
                                 (LPSTR)(lVar3 + 0x2c),4);
          if (iVar7 == 0) {
            *(undefined4 *)(lVar3 + 0x2c) = 0;
            return 0;
          }
          return 0;
        }
        if (param_2 == 0xa0) goto LAB_18042806c;
        if (param_2 != 0x100) {
          return 0;
        }
        goto LAB_180427aa3;
      }
LAB_180427c89:
      cVar20 = '\0';
    }
    else {
      if (param_2 == 0x102) {
        BVar8 = IsWindowUnicode(param_1);
        if (BVar8 != 0) {
          if (local_res18 - 1 < 0xffff) {
            FUN_1803d6e10(lVar4);
            return 0;
          }
          return 0;
        }
        param_5._0_2_ = L'\0';
        MultiByteToWideChar(*(UINT *)(lVar3 + 0x2c),1,(LPCSTR)&local_res18,2,(LPWSTR)&param_5,1);
        if ((WCHAR)param_5 == L'\0') {
          return 0;
        }
        if (*(char *)(lVar4 + 0xbb5) == '\0') {
          return 0;
        }
        lVar3 = *(longlong *)(lVar4 + 0xe0);
        local_68.hwndTrack._4_4_ = (uint)(ushort)(WCHAR)param_5;
        local_68.dwHoverTime = 0;
        local_68._20_4_ = 0;
        local_50 = 0;
        local_68.hwndTrack._0_4_ = *(int *)(lVar3 + 0x1494);
        *(int *)(lVar3 + 0x1494) = (int)local_68.hwndTrack + 1;
        iVar7 = *(int *)(lVar3 + 0x1474);
        local_68.cbSize = 5;
        local_68.dwFlags = 2;
        if (*(int *)(lVar3 + 0x1470) == iVar7) {
          iVar6 = *(int *)(lVar3 + 0x1470) + 1;
          if (iVar7 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = iVar7 / 2 + iVar7;
          }
          if (iVar6 < iVar7) {
            iVar6 = iVar7;
          }
          FUN_1803f6e00(lVar3 + 0x1470,iVar6);
        }
        lVar16 = (longlong)*(int *)(lVar3 + 0x1470) * 0x1c;
        lVar4 = *(longlong *)(lVar3 + 0x1478);
        puVar2 = (undefined8 *)(lVar16 + lVar4);
        *puVar2 = local_68._0_8_;
        puVar2[1] = CONCAT44(local_68.hwndTrack._4_4_,(int)local_68.hwndTrack);
        puVar2 = (undefined8 *)(lVar16 + 0xc + lVar4);
        *puVar2 = CONCAT44(local_68.dwHoverTime,local_68.hwndTrack._4_4_);
        puVar2[1] = CONCAT44(local_50,local_68._20_4_);
        *(int *)(lVar3 + 0x1470) = *(int *)(lVar3 + 0x1470) + 1;
        return 0;
      }
      if ((param_2 != 0x104) && (param_2 != 0x105)) {
        if (param_2 != 0x10f) {
          return 0;
        }
        LVar11 = DefWindowProcW(param_1,0x10f,param_3,param_4);
        if ((param_4 >> 0xb & 1) == 0) {
          return LVar11;
        }
        return 1;
      }
      if (param_2 != 0x104) goto LAB_180427c89;
LAB_180427aa3:
      cVar20 = '\x01';
    }
    if (0xff < param_3) {
      return 0;
    }
    SVar5 = GetKeyState(0x11);
    uVar24 = DAT_1808ac34c;
    if (*(char *)(lVar4 + 0xbb5) != '\0') {
      if (SVar5 < 0) {
        uVar23 = DAT_1808ac34c;
      }
      else {
        uVar23 = 0;
      }
      FUN_1803d6f60(lVar4,0x1000,(byte)((ushort)SVar5 >> 0xf),uVar23);
    }
    SVar5 = GetKeyState(0x10);
    if (*(char *)(lVar4 + 0xbb5) != '\0') {
      if (SVar5 < 0) {
        uVar23 = uVar24;
      }
      else {
        uVar23 = 0;
      }
      FUN_1803d6f60(lVar4,0x2000,(byte)((ushort)SVar5 >> 0xf),uVar23);
    }
    SVar5 = GetKeyState(0x12);
    if (*(char *)(lVar4 + 0xbb5) != '\0') {
      if (SVar5 < 0) {
        uVar23 = uVar24;
      }
      else {
        uVar23 = 0;
      }
      FUN_1803d6f60(lVar4,0x4000,(byte)((ushort)SVar5 >> 0xf),uVar23);
    }
    SVar5 = GetKeyState(0x5b);
    if ((SVar5 < 0) || (SVar5 = GetKeyState(0x5c), SVar5 < 0)) {
      cVar17 = '\x01';
    }
    else {
      cVar17 = '\0';
    }
    if (*(char *)(lVar4 + 0xbb5) != '\0') {
      if (cVar17 == '\0') {
        uVar23 = 0;
      }
      else {
        uVar23 = uVar24;
      }
      FUN_1803d6f60(lVar4,0x8000,cVar17,uVar23);
    }
    uVar12 = local_res18;
    iVar7 = FUN_1804273a0(local_res18,param_4);
    if (iVar7 == 0x262) {
      if (cVar20 == '\0') {
        if (*(char *)(lVar4 + 0xbb5) == '\0') goto LAB_180427dbd;
        FUN_1803d6f60(lVar4,0x262,1,uVar24);
      }
    }
    else if (iVar7 == 0) goto LAB_180427dbd;
    if (*(char *)(lVar4 + 0xbb5) != '\0') {
      if (cVar20 == '\0') {
        uVar23 = 0;
      }
      else {
        uVar23 = uVar24;
      }
      FUN_1803d6f60(lVar4,iVar7,cVar20,uVar23);
    }
LAB_180427dbd:
    iVar7 = (int)uVar12;
    if (iVar7 == 0x10) {
      SVar5 = GetKeyState(0xa0);
      if (((char)-(char)(SVar5 >> 0xf) == cVar20) && (*(char *)(lVar4 + 0xbb5) != '\0')) {
        if (cVar20 == '\0') {
          uVar23 = 0;
        }
        else {
          uVar23 = uVar24;
        }
        FUN_1803d6f60(lVar4,0x210,cVar20,uVar23);
      }
      SVar5 = GetKeyState(0xa1);
      if ((char)-(char)(SVar5 >> 0xf) != cVar20) {
        return 0;
      }
      if (*(char *)(lVar4 + 0xbb5) == '\0') {
        return 0;
      }
      if (cVar20 == '\0') {
        uVar24 = 0;
      }
      FUN_1803d6f60(lVar4,0x214,cVar20,uVar24);
      return 0;
    }
    if (iVar7 == 0x11) {
      SVar5 = GetKeyState(0xa2);
      if (((char)-(char)(SVar5 >> 0xf) == cVar20) && (*(char *)(lVar4 + 0xbb5) != '\0')) {
        if (cVar20 == '\0') {
          uVar23 = 0;
        }
        else {
          uVar23 = uVar24;
        }
        FUN_1803d6f60(lVar4,0x20f,cVar20,uVar23);
      }
      SVar5 = GetKeyState(0xa3);
      if ((char)-(char)(SVar5 >> 0xf) != cVar20) {
        return 0;
      }
      if (*(char *)(lVar4 + 0xbb5) == '\0') {
        return 0;
      }
      if (cVar20 == '\0') {
        uVar24 = 0;
      }
      FUN_1803d6f60(lVar4,0x213,cVar20,uVar24);
      return 0;
    }
    if (iVar7 != 0x12) {
      return 0;
    }
    SVar5 = GetKeyState(0xa4);
    if (((char)-(char)(SVar5 >> 0xf) == cVar20) && (*(char *)(lVar4 + 0xbb5) != '\0')) {
      if (cVar20 == '\0') {
        uVar23 = 0;
      }
      else {
        uVar23 = uVar24;
      }
      FUN_1803d6f60(lVar4,0x211,cVar20,uVar23);
    }
    SVar5 = GetKeyState(0xa5);
    if ((char)-(char)(SVar5 >> 0xf) != cVar20) {
      return 0;
    }
    if (*(char *)(lVar4 + 0xbb5) == '\0') {
      return 0;
    }
    if (cVar20 == '\0') {
      uVar24 = 0;
    }
    FUN_1803d6f60(lVar4,0x215,cVar20,uVar24);
    return 0;
  }
  sVar18 = (short)(param_3 >> 0x10);
  switch(param_2) {
  case 0x201:
  case 0x203:
  case 0x204:
  case 0x206:
  case 0x207:
  case 0x209:
  case 0x20b:
  case 0x20d:
    uVar12 = GetMessageExtraInfo();
    if ((uVar12 & 0xffffff80) == 0xff515700) {
      param_5._0_2_ = L'\x02';
    }
    else {
      param_5._0_2_ = (WCHAR)((uVar12 & 0xffffff80) == 0xff515780);
    }
    param_5._2_2_ = 0;
    if ((param_2 == 0x204) || (iVar7 = 0, param_2 == 0x206)) {
      iVar7 = 1;
    }
    if ((param_2 - 0x207 & 0xfffffffd) == 0) {
      iVar7 = 2;
    }
    if ((param_2 - 0x20b & 0xfffffffd) == 0) {
      iVar7 = ((short)(local_res18 >> 0x10) != 1) + 3;
    }
    pHVar13 = GetCapture();
    iVar6 = *(int *)(lVar3 + 0x14);
    if (iVar6 == 0) {
LAB_180428279:
      if (pHVar13 == (HWND)0x0) {
        SetCapture(param_1);
      }
    }
    else {
      if (pHVar13 != param_1) {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        iVar6 = 0;
      }
      if (iVar6 == 0) goto LAB_180428279;
    }
    *(uint *)(lVar3 + 0x14) = *(uint *)(lVar3 + 0x14) | 1 << iVar7;
    *(uint *)(*(longlong *)(lVar4 + 0xe0) + 0x1490) = CONCAT22(param_5._2_2_,(WCHAR)param_5);
    FUN_1803d7300(lVar4,iVar7,1);
    break;
  case 0x202:
  case 0x205:
  case 0x208:
  case 0x20c:
    uVar12 = GetMessageExtraInfo();
    if ((uVar12 & 0xffffff80) == 0xff515700) {
      uVar14 = 2;
    }
    else {
      uVar14 = (uint)((uVar12 & 0xffffff80) == 0xff515780);
    }
    uVar19 = 2;
    if ((param_2 != 0x208) && (uVar19 = (uint)(param_2 == 0x205), param_2 == 0x20c)) {
      uVar19 = ((short)(local_res18 >> 0x10) != 1) + 3;
    }
    uVar9 = *(uint *)(lVar3 + 0x14) & ~(1 << uVar19);
    *(uint *)(lVar3 + 0x14) = uVar9;
    if ((uVar9 == 0) && (pHVar13 = GetCapture(), pHVar13 == param_1)) {
      ReleaseCapture();
    }
    *(uint *)(*(longlong *)(lVar4 + 0xe0) + 0x1490) = uVar14;
    FUN_1803d7300(lVar4,uVar19,0);
    break;
  case 0x20a:
    FUN_1803d7520(param_5,0x180000000,(float)(int)sVar18 / DAT_1808acb18);
    break;
  case 0x20e:
    auVar21._0_4_ = (float)((uint)(float)(int)sVar18 ^ DAT_1808adec0);
    auVar21._4_4_ = _UNK_1808adec4;
    auVar21._8_4_ = _UNK_1808adec8;
    auVar21._12_4_ = _UNK_1808adecc;
    auVar22._4_12_ = auVar21._4_12_;
    auVar22._0_4_ = auVar21._0_4_ / DAT_1808acb18;
    FUN_1803d7520(param_5,auVar22._0_8_);
    break;
  case 0x219:
    if ((int)param_3 == 7) {
      *(undefined1 *)(lVar3 + 0x31) = 1;
    }
    break;
  case 0x286:
    BVar8 = IsWindowUnicode(param_1);
    if (BVar8 == 0) {
      BVar8 = IsDBCSLeadByte((BYTE)(local_res18 >> 8));
      if (BVar8 != 0) {
        local_res18 = (ulonglong)(ushort)((short)local_res18 << 8) | local_res18 >> 8 & 0xff;
      }
      param_5._0_2_ = L'\0';
      MultiByteToWideChar(*(UINT *)(lVar3 + 0x2c),1,(LPCSTR)&local_res18,2,(LPWSTR)&param_5,1);
      FUN_1803d6e10(lVar4,(WCHAR)param_5);
      return 1;
    }
    break;
  case 0x2a2:
  case 0x2a3:
    if (*(int *)(lVar3 + 0x10) != (param_2 != 0x2a3) + 1) {
      return 0;
    }
    if (*(HWND *)(lVar3 + 8) == param_1) {
LAB_1804281b5:
      *(undefined8 *)(lVar3 + 8) = 0;
    }
    *(undefined4 *)(lVar3 + 0x10) = 0;
    FUN_1803d7170(lVar4);
  }
  return 0;
}



/* ===== 180428530 FUN_180428530 ===== */

undefined8 * FUN_180428530(undefined8 *param_1)

{
  SIZE_T SVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *lpAddress;
  ulonglong uVar4;
  uint uVar5;
  PVOID pvVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  _SYSTEM_INFO local_78;
  _MEMORY_BASIC_INFORMATION local_48;
  
  GetSystemInfo(&local_78);
  if (param_1 < (undefined8 *)0x40000001) {
    puVar8 = local_78.lpMinimumApplicationAddress;
  }
  else {
    puVar8 = param_1 + -0x8000000;
    if (param_1 + -0x8000000 <= local_78.lpMinimumApplicationAddress) {
      puVar8 = local_78.lpMinimumApplicationAddress;
    }
  }
  puVar9 = param_1 + 0x8000000;
  if (local_78.lpMaximumApplicationAddress <= param_1 + 0x8000000) {
    puVar9 = local_78.lpMaximumApplicationAddress;
  }
  puVar9 = (undefined8 *)((longlong)puVar9 - 0xfff);
  for (puVar3 = DAT_1811118a8; puVar2 = (undefined8 *)0x0, lpAddress = param_1,
      puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    if (((puVar8 <= puVar3) && (puVar3 < puVar9)) && (puVar3[1] != 0)) {
      return puVar3;
    }
  }
  do {
    puVar3 = puVar2;
    if (lpAddress < puVar8) goto joined_r0x000180428635;
    pvVar6 = (PVOID)(ulonglong)local_78.dwAllocationGranularity;
    lpAddress = (undefined8 *)
                ((longlong)lpAddress +
                (-(longlong)pvVar6 - (ulonglong)lpAddress % (ulonglong)pvVar6));
    while( true ) {
      if ((lpAddress < puVar8) || (SVar1 = VirtualQuery(lpAddress,&local_48,0x30), SVar1 == 0))
      goto joined_r0x00018042862c;
      if (local_48.State == 0x10000) break;
      if (local_48.AllocationBase < pvVar6) goto joined_r0x00018042862c;
      lpAddress = (undefined8 *)((longlong)local_48.AllocationBase - (longlong)pvVar6);
    }
    if (lpAddress == (undefined8 *)0x0) goto joined_r0x00018042862c;
    puVar2 = VirtualAlloc(lpAddress,0x1000,0x3000,0x40);
  } while (puVar2 == (undefined8 *)0x0);
LAB_180428723:
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar8 = puVar2 + 8;
  puVar9 = (undefined8 *)0x0;
  do {
    puVar3 = puVar8;
    *puVar3 = puVar9;
    puVar2[1] = puVar3;
    puVar8 = puVar3 + 8;
    puVar9 = puVar3;
  } while ((ulonglong)((longlong)(puVar3 + 8) - (longlong)puVar2) < 0xfc1);
  *puVar2 = DAT_1811118a8;
  DAT_1811118a8 = puVar2;
  return puVar2;
joined_r0x00018042862c:
  while (puVar3 = (undefined8 *)0x0, puVar2 == (undefined8 *)0x0) {
joined_r0x000180428635:
    if (puVar9 < param_1) {
      return puVar3;
    }
    uVar4 = (ulonglong)local_78.dwAllocationGranularity;
    param_1 = (undefined8 *)
              (((ulonglong)local_78.dwAllocationGranularity -
               (ulonglong)param_1 % (ulonglong)local_78.dwAllocationGranularity) + (longlong)param_1
              );
    if (puVar9 < param_1) {
      return puVar3;
    }
    uVar5 = local_78.dwAllocationGranularity - 1;
    while( true ) {
      SVar1 = VirtualQuery(param_1,&local_48,0x30);
      if (SVar1 == 0) {
        return puVar3;
      }
      if (local_48.State == 0x10000) break;
      uVar7 = uVar5 + local_48.RegionSize + (longlong)local_48.BaseAddress;
      param_1 = (undefined8 *)(uVar7 - uVar7 % uVar4);
      if (puVar9 < param_1) {
        return puVar3;
      }
    }
    if (param_1 == (undefined8 *)0x0) {
      return puVar3;
    }
    puVar2 = VirtualAlloc(param_1,0x1000,0x3000,0x40);
  }
  goto LAB_180428723;
}



/* ===== 180428790 FUN_180428790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180428790(HANDLE param_1,uint param_2,int param_3)

{
  BOOL BVar1;
  DWORD64 *pDVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  DWORD64 DVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_518 [32];
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_518;
  local_4f8.ContextFlags = 0x100001;
  BVar1 = GetThreadContext(param_1,&local_4f8);
  if (BVar1 != 0) {
    uVar7 = DAT_1811118c4;
    if (param_2 != 0xffffffff) {
      uVar7 = param_2 + 1;
    }
    uVar8 = 0;
    if (param_2 != 0xffffffff) {
      uVar8 = param_2;
    }
    if (uVar8 < uVar7) {
      do {
        pDVar2 = (DWORD64 *)(DAT_1811118b8 + (ulonglong)uVar8 * 0x38);
        if (param_3 == 0) {
          bVar3 = 0;
        }
        else if (param_3 == 1) {
          bVar3 = 1;
        }
        else {
          bVar3 = (byte)pDVar2[4] >> 2 & 1;
        }
        if (((byte)pDVar2[4] >> 1 & 1) != bVar3) {
          if (bVar3 == 0) {
            if ((((byte)pDVar2[4] & 1) == 0) || (DVar6 = *pDVar2, local_4f8.Rip != DVar6 - 5)) {
              uVar9 = *(uint *)((longlong)pDVar2 + 0x24) & 0xf;
              if (uVar9 != 0) {
                uVar5 = 0;
                do {
                  if (local_4f8.Rip ==
                      (ulonglong)*(byte *)((longlong)pDVar2 + uVar5 + 0x30) + pDVar2[2]) {
                    DVar6 = (ulonglong)*(byte *)((longlong)pDVar2 + uVar5 + 0x28) + *pDVar2;
                    goto LAB_180428886;
                  }
                  uVar4 = (int)uVar5 + 1;
                  uVar5 = (ulonglong)uVar4;
                } while (uVar4 < uVar9);
              }
              if (local_4f8.Rip != pDVar2[1]) goto LAB_180428884;
              DVar6 = *pDVar2;
            }
          }
          else {
            uVar9 = *(uint *)((longlong)pDVar2 + 0x24) & 0xf;
            if (uVar9 != 0) {
              uVar5 = 0;
              do {
                if (local_4f8.Rip == (ulonglong)*(byte *)((longlong)pDVar2 + uVar5 + 0x28) + *pDVar2
                   ) {
                  DVar6 = (ulonglong)*(byte *)((longlong)pDVar2 + uVar5 + 0x30) + pDVar2[2];
                  goto LAB_180428886;
                }
                uVar4 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar4;
              } while (uVar4 < uVar9);
            }
LAB_180428884:
            DVar6 = 0;
          }
LAB_180428886:
          if (DVar6 != 0) {
            local_4f8.Rip = DVar6;
            SetThreadContext(param_1,&local_4f8);
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
  }
  return;
}



/* ===== 180428950 FUN_180428950 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180428950(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE hHeap;
  int iVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  LPVOID lpMem;
  uint uVar4;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  DWORD local_60;
  DWORD local_5c;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  pvVar3 = (HANDLE)CreateToolhelp32Snapshot(4,0);
  if (pvVar3 != (HANDLE)0xffffffffffffffff) {
    local_68[0] = 0x1c;
    iVar1 = Thread32First(pvVar3,local_68);
    if (iVar1 != 0) {
      do {
        if (((0xf < local_68[0]) && (DVar2 = GetCurrentProcessId(), local_5c == DVar2)) &&
           (DVar2 = GetCurrentThreadId(), hHeap = DAT_1811118b0, local_60 != DVar2)) {
          lpMem = (LPVOID)*param_1;
          if (lpMem == (LPVOID)0x0) {
            *(undefined4 *)(param_1 + 1) = 0x80;
            lpMem = HeapAlloc(hHeap,0,0x200);
            *param_1 = (longlong)lpMem;
            if (lpMem == (LPVOID)0x0) goto LAB_180428a79;
          }
          else if (*(uint *)(param_1 + 1) <= *(uint *)((longlong)param_1 + 0xc)) {
            uVar4 = *(uint *)(param_1 + 1) * 2;
            *(uint *)(param_1 + 1) = uVar4;
            lpMem = HeapReAlloc(hHeap,0,lpMem,(ulonglong)uVar4 << 2);
            if (lpMem == (LPVOID)0x0) goto LAB_180428a79;
            *param_1 = (longlong)lpMem;
          }
          *(DWORD *)((longlong)lpMem + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 4) = local_60
          ;
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
        }
        local_68[0] = 0x1c;
        iVar1 = Thread32Next(pvVar3,local_68);
      } while (iVar1 != 0);
      DVar2 = GetLastError();
      if (DVar2 == 0x12) {
        CloseHandle(pvVar3);
        if ((*param_1 != 0) && (uVar4 = 0, *(int *)((longlong)param_1 + 0xc) != 0)) {
          do {
            pvVar3 = OpenThread(0x5a,0,*(DWORD *)(*param_1 + (ulonglong)uVar4 * 4));
            if (pvVar3 == (HANDLE)0x0) {
LAB_180428b2b:
              *(undefined4 *)(*param_1 + (ulonglong)uVar4 * 4) = 0;
            }
            else {
              DVar2 = SuspendThread(pvVar3);
              if (DVar2 == 0xffffffff) {
                CloseHandle(pvVar3);
                goto LAB_180428b2b;
              }
              FUN_180428790(pvVar3,param_2,param_3);
              CloseHandle(pvVar3);
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)((longlong)param_1 + 0xc));
        }
        return 0;
      }
LAB_180428a79:
      if ((LPVOID)*param_1 != (LPVOID)0x0) {
        HeapFree(DAT_1811118b0,0,(LPVOID)*param_1);
        *param_1 = 0;
      }
    }
    CloseHandle(pvVar3);
  }
  return 9;
}



/* ===== 180428b70 FUN_180428b70 ===== */

undefined8 FUN_180428b70(ulonglong param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  BOOL BVar4;
  HANDLE hProcess;
  undefined4 *lpAddress;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong dwSize;
  DWORD local_res8 [8];
  
  lVar2 = DAT_1811118b8;
  lVar5 = (param_1 & 0xffffffff) * 0x38;
  puVar1 = *(undefined4 **)(lVar5 + DAT_1811118b8);
  bVar3 = *(byte *)(lVar5 + 0x20 + DAT_1811118b8) & 1;
  puVar6 = (undefined4 *)((longlong)puVar1 + -5);
  if (bVar3 == 0) {
    puVar6 = puVar1;
  }
  dwSize = (ulonglong)bVar3 * 2 | 5;
  lpAddress = (undefined4 *)((longlong)puVar1 + -5);
  if (bVar3 == 0) {
    lpAddress = puVar1;
  }
  BVar4 = VirtualProtect(lpAddress,dwSize,0x40,local_res8);
  if (BVar4 == 0) {
    return 10;
  }
  if (param_2 == 0) {
    bVar3 = *(byte *)(lVar5 + 0x20 + lVar2);
    *lpAddress = *(undefined4 *)(lVar5 + 0x18 + lVar2);
    if ((bVar3 & 1) == 0) {
      *(undefined1 *)(lpAddress + 1) = *(undefined1 *)(lVar5 + 0x1c + lVar2);
    }
    else {
      *(undefined2 *)(lpAddress + 1) = *(undefined2 *)(lVar5 + 0x1c + lVar2);
      *(undefined1 *)((longlong)lpAddress + 6) = *(undefined1 *)(lVar5 + 0x1e + lVar2);
    }
  }
  else {
    *(undefined1 *)lpAddress = 0xe9;
    *(int *)((longlong)lpAddress + 1) = (*(int *)(lVar5 + 8 + lVar2) - (int)puVar6) + -5;
    if ((*(byte *)(lVar5 + 0x20 + lVar2) & 1) != 0) {
      **(undefined2 **)(lVar5 + lVar2) = 0xf9eb;
    }
  }
  VirtualProtect(lpAddress,dwSize,local_res8[0],local_res8);
  hProcess = GetCurrentProcess();
  FlushInstructionCache(hProcess,lpAddress,dwSize);
  bVar3 = *(byte *)(lVar5 + 0x20 + lVar2);
  bVar3 = ((char)param_2 * '\x02' ^ bVar3) & 2 ^ bVar3;
  *(byte *)(lVar5 + 0x20 + lVar2) = ((char)param_2 << 2 ^ bVar3) & 4 ^ bVar3;
  return 0;
}



/* ===== 180428c90 FUN_180428c90 ===== */

ulonglong FUN_180428c90(uint param_1)

{
  DWORD dwThreadId;
  uint uVar1;
  ulonglong uVar2;
  HANDLE hThread;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  LPVOID local_18;
  uint local_c;
  
  uVar2 = 0;
  uVar3 = 0;
  if (DAT_1811118c4 != 0) {
    while (uVar1 = (uint)uVar3, (*(byte *)(uVar3 * 0x38 + 0x20 + DAT_1811118b8) >> 1 & 1) == param_1
          ) {
      uVar3 = (ulonglong)(uVar1 + 1);
      if (DAT_1811118c4 <= uVar1 + 1) {
        return 0;
      }
    }
    if (uVar1 != 0xffffffff) {
      uVar2 = FUN_180428950(&local_18,0xffffffff,param_1 != 0);
      uVar4 = uVar2 & 0xffffffff;
      if ((int)uVar2 == 0) {
        uVar2 = uVar4;
        uVar5 = DAT_1811118c4;
        if (uVar1 < DAT_1811118c4) {
          do {
            if ((*(byte *)(uVar3 * 0x38 + 0x20 + DAT_1811118b8) >> 1 & 1) != param_1) {
              uVar1 = FUN_180428b70(uVar3,param_1);
              uVar2 = (ulonglong)uVar1;
              if (uVar1 != 0) break;
              uVar5 = DAT_1811118c4;
            }
            uVar1 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar1;
          } while (uVar1 < uVar5);
        }
        if (local_18 != (LPVOID)0x0) {
          uVar3 = 0;
          if (local_c != 0) {
            do {
              dwThreadId = *(DWORD *)((longlong)local_18 + uVar3 * 4);
              if ((dwThreadId != 0) &&
                 (hThread = OpenThread(0x5a,0,dwThreadId), hThread != (HANDLE)0x0)) {
                ResumeThread(hThread);
                CloseHandle(hThread);
              }
              uVar1 = (int)uVar3 + 1;
              uVar3 = (ulonglong)uVar1;
            } while (uVar1 < local_c);
          }
          HeapFree(DAT_1811118b0,0,local_18);
        }
      }
    }
  }
  return uVar2;
}



/* ===== 180428df0 FUN_180428df0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180428df0(undefined4 *param_1,LPCVOID param_2,ulonglong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *lpAddress;
  int iVar3;
  SIZE_T SVar4;
  longlong lVar5;
  LPVOID pvVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  SIZE_T local_58;
  DWORD local_50;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  uVar8 = 0;
  LOCK();
  bVar11 = DAT_1811118c8 == 0;
  if (bVar11) {
    DAT_1811118c8 = 1;
  }
  UNLOCK();
  while (!bVar11) {
    Sleep((uint)(0x1f < uVar8));
    uVar8 = uVar8 + 1;
    LOCK();
    bVar11 = DAT_1811118c8 == 0;
    if (bVar11) {
      DAT_1811118c8 = 1;
    }
    UNLOCK();
  }
  if (DAT_1811118b0 == (HANDLE)0x0) {
    uVar9 = 2;
    goto LAB_180429118;
  }
  SVar4 = VirtualQuery(param_1,(PMEMORY_BASIC_INFORMATION)local_70,0x30);
  if ((((SVar4 == 0) || (local_50 != 0x1000)) || ((local_4c & 0xf0) == 0)) ||
     (((SVar4 = VirtualQuery(param_2,(PMEMORY_BASIC_INFORMATION)local_70,0x30), SVar4 == 0 ||
       (local_50 != 0x1000)) || ((local_4c & 0xf0) == 0)))) {
    uVar9 = 7;
    goto LAB_180429118;
  }
  uVar8 = 0;
  if (DAT_1811118c4 != 0) {
    do {
      if (param_1 == *(undefined4 **)(uVar8 * 0x38 + (longlong)DAT_1811118b8)) {
        if ((int)uVar8 != -1) {
          uVar9 = 3;
          goto LAB_180429118;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < DAT_1811118c4);
  }
  lVar5 = FUN_180428530();
  if (lVar5 != 0) {
    puVar2 = *(undefined8 **)(lVar5 + 8);
    uVar9 = *puVar2;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
    *(undefined8 *)(lVar5 + 8) = uVar9;
    if (puVar2 != (undefined8 *)0x0) {
      local_70._0_8_ = param_1;
      local_70._8_8_ = param_2;
      local_70._16_8_ = puVar2;
      iVar3 = FUN_1804295f0(local_70);
      if (iVar3 == 0) {
        uVar9 = 8;
      }
      else {
        if (DAT_1811118b8 == (LPVOID)0x0) {
          DAT_1811118c0 = 0x20;
          DAT_1811118b8 = HeapAlloc(DAT_1811118b0,0,0x700);
          if (DAT_1811118b8 != (LPVOID)0x0) goto LAB_180428fe4;
        }
        else {
          if (DAT_1811118c0 <= DAT_1811118c4) {
            pvVar6 = HeapReAlloc(DAT_1811118b0,0,DAT_1811118b8,(ulonglong)(DAT_1811118c0 * 2) * 0x38
                                );
            if (pvVar6 == (LPVOID)0x0) goto LAB_180428f78;
            DAT_1811118c0 = DAT_1811118c0 * 2;
            DAT_1811118b8 = pvVar6;
          }
LAB_180428fe4:
          uVar8 = (ulonglong)DAT_1811118c4;
          DAT_1811118c4 = DAT_1811118c4 + 1;
          puVar10 = (undefined8 *)(uVar8 * 0x38 + (longlong)DAT_1811118b8);
          if (puVar10 != (undefined8 *)0x0) {
            uVar9 = 0;
            *(uint *)((longlong)puVar10 + 0x24) = *(uint *)((longlong)puVar10 + 0x24) & 0xfffffff0;
            *puVar10 = local_70._0_8_;
            puVar10[1] = local_58;
            puVar10[2] = local_70._16_8_;
            *(uint *)((longlong)puVar10 + 0x24) =
                 *(uint *)((longlong)puVar10 + 0x24) | local_4c & 0xf;
            puVar10[5] = local_48;
            puVar10[6] = local_40;
            *(byte *)(puVar10 + 4) = *(byte *)(puVar10 + 4) & 0xf8 | (byte)local_50 & 1;
            if (local_50 == 0) {
              *(undefined4 *)(puVar10 + 3) = *param_1;
              *(undefined1 *)((longlong)puVar10 + 0x1c) = *(undefined1 *)(param_1 + 1);
            }
            else {
              *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)param_1 + -5);
              *(undefined2 *)((longlong)puVar10 + 0x1c) = *(undefined2 *)((longlong)param_1 + -1);
              *(undefined1 *)((longlong)puVar10 + 0x1e) = *(undefined1 *)((longlong)param_1 + 1);
            }
            if (param_3 != (ulonglong *)0x0) {
              *param_3 = local_70._16_8_;
            }
            goto LAB_180429118;
          }
        }
LAB_180428f78:
        uVar9 = 9;
      }
      puVar10 = (undefined8 *)0x0;
      for (lpAddress = DAT_1811118a8; lpAddress != (undefined8 *)0x0;
          lpAddress = (undefined8 *)*lpAddress) {
        if (lpAddress == (undefined8 *)((ulonglong)puVar2 & 0xfffffffffffff000)) {
          *puVar2 = lpAddress[1];
          piVar1 = (int *)(lpAddress + 2);
          *piVar1 = *piVar1 + -1;
          lpAddress[1] = puVar2;
          if (*piVar1 == 0) {
            if (puVar10 == (undefined8 *)0x0) {
              DAT_1811118a8 = (undefined8 *)*lpAddress;
              VirtualFree(lpAddress,0,0x8000);
            }
            else {
              *puVar10 = (undefined8 *)*lpAddress;
              VirtualFree(lpAddress,0,0x8000);
            }
          }
          break;
        }
        puVar10 = lpAddress;
      }
      goto LAB_180429118;
    }
  }
  uVar9 = 9;
LAB_180429118:
  LOCK();
  DAT_1811118c8 = 0;
  UNLOCK();
  return uVar9;
}



/* ===== 180429140 FUN_180429140 ===== */

int FUN_180429140(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  DWORD dwThreadId;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *lpAddress;
  int iVar10;
  HANDLE hThread;
  LPVOID pvVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  LPVOID local_38;
  uint local_2c;
  
  uVar14 = 0;
  LOCK();
  bVar17 = DAT_1811118c8 == 0;
  if (bVar17) {
    DAT_1811118c8 = 1;
  }
  UNLOCK();
  while (!bVar17) {
    Sleep((uint)(0x1f < uVar14));
    uVar14 = uVar14 + 1;
    LOCK();
    bVar17 = DAT_1811118c8 == 0;
    if (bVar17) {
      DAT_1811118c8 = 1;
    }
    UNLOCK();
  }
  if (DAT_1811118b0 == (HANDLE)0x0) {
    iVar10 = 2;
  }
  else {
    uVar14 = 0;
    if (DAT_1811118c4 == 0) {
LAB_1804291c2:
      iVar10 = 4;
    }
    else {
      while( true ) {
        uVar13 = (uint)uVar14;
        lVar15 = uVar14 * 0x38;
        if (param_1 == *(longlong *)((longlong)DAT_1811118b8 + lVar15)) break;
        uVar14 = (ulonglong)(uVar13 + 1);
        if (DAT_1811118c4 <= uVar13 + 1) goto LAB_1804291c2;
      }
      if (uVar13 == 0xffffffff) goto LAB_1804291c2;
      iVar10 = 0;
      if ((*(byte *)((longlong)DAT_1811118b8 + lVar15 + 0x20) & 2) == 0) goto LAB_180429290;
      iVar10 = FUN_180428950(&local_38,uVar14,0);
      if (iVar10 != 0) goto LAB_180429390;
      iVar10 = FUN_180428b70(uVar14,0);
      if (local_38 != (LPVOID)0x0) {
        uVar14 = 0;
        if (local_2c != 0) {
          do {
            dwThreadId = *(DWORD *)((longlong)local_38 + uVar14 * 4);
            if ((dwThreadId != 0) &&
               (hThread = OpenThread(0x5a,0,dwThreadId), hThread != (HANDLE)0x0)) {
              ResumeThread(hThread);
              CloseHandle(hThread);
            }
            uVar16 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar16;
          } while (uVar16 < local_2c);
        }
        HeapFree(DAT_1811118b0,0,local_38);
      }
      if (iVar10 == 0) {
LAB_180429290:
        uVar16 = DAT_1811118c4;
        pvVar11 = DAT_1811118b8;
        puVar5 = *(undefined8 **)((longlong)DAT_1811118b8 + lVar15 + 0x10);
        puVar2 = (undefined8 *)0x0;
        lpAddress = DAT_1811118a8;
        do {
          if (lpAddress == (undefined8 *)0x0) {
LAB_180429302:
            DAT_1811118c4 = uVar16 - 1;
            if (uVar13 < DAT_1811118c4) {
              lVar12 = (ulonglong)DAT_1811118c4 * 0x38;
              uVar9 = ((undefined8 *)(lVar12 + (longlong)pvVar11))[1];
              *(undefined8 *)((longlong)pvVar11 + lVar15) =
                   *(undefined8 *)(lVar12 + (longlong)pvVar11);
              ((undefined8 *)((longlong)pvVar11 + lVar15))[1] = uVar9;
              puVar5 = (undefined8 *)(lVar12 + 0x10 + (longlong)pvVar11);
              uVar9 = puVar5[1];
              puVar2 = (undefined8 *)((longlong)pvVar11 + lVar15 + 0x10);
              *puVar2 = *puVar5;
              puVar2[1] = uVar9;
              puVar3 = (undefined4 *)(lVar12 + 0x20 + (longlong)pvVar11);
              uVar6 = puVar3[1];
              uVar7 = puVar3[2];
              uVar8 = puVar3[3];
              puVar4 = (undefined4 *)((longlong)pvVar11 + lVar15 + 0x20);
              *puVar4 = *puVar3;
              puVar4[1] = uVar6;
              puVar4[2] = uVar7;
              puVar4[3] = uVar8;
              *(undefined8 *)((longlong)pvVar11 + lVar15 + 0x30) =
                   *(undefined8 *)(lVar12 + 0x30 + (longlong)pvVar11);
              pvVar11 = DAT_1811118b8;
            }
            if (((0x1f < DAT_1811118c0 >> 1) && (DAT_1811118c4 <= DAT_1811118c0 >> 1)) &&
               (pvVar11 = HeapReAlloc(DAT_1811118b0,0,pvVar11,(ulonglong)(DAT_1811118c0 >> 1) * 0x38
                                     ), pvVar11 != (LPVOID)0x0)) {
              DAT_1811118c0 = DAT_1811118c0 >> 1;
              DAT_1811118b8 = pvVar11;
            }
            break;
          }
          if (lpAddress == (undefined8 *)((ulonglong)puVar5 & 0xfffffffffffff000)) {
            *puVar5 = lpAddress[1];
            piVar1 = (int *)(lpAddress + 2);
            *piVar1 = *piVar1 + -1;
            lpAddress[1] = puVar5;
            if (*piVar1 == 0) {
              if (puVar2 == (undefined8 *)0x0) {
                DAT_1811118a8 = (undefined8 *)*lpAddress;
              }
              else {
                *puVar2 = (undefined8 *)*lpAddress;
              }
              VirtualFree(lpAddress,0,0x8000);
              pvVar11 = DAT_1811118b8;
              uVar16 = DAT_1811118c4;
            }
            goto LAB_180429302;
          }
          puVar2 = lpAddress;
          lpAddress = (undefined8 *)*lpAddress;
        } while( true );
      }
    }
  }
LAB_180429390:
  LOCK();
  DAT_1811118c8 = 0;
  UNLOCK();
  return iVar10;
}



/* ===== 1804293b0 FUN_1804293b0 ===== */

int FUN_1804293b0(longlong param_1,uint param_2)

{
  DWORD dwThreadId;
  int iVar1;
  HANDLE hThread;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  LPVOID local_38;
  uint local_2c;
  
  uVar3 = 0;
  LOCK();
  bVar4 = DAT_1811118c8 == 0;
  if (bVar4) {
    DAT_1811118c8 = 1;
  }
  UNLOCK();
  while (!bVar4) {
    Sleep((uint)(0x1f < uVar3));
    uVar3 = uVar3 + 1;
    LOCK();
    bVar4 = DAT_1811118c8 == 0;
    if (bVar4) {
      DAT_1811118c8 = 1;
    }
    UNLOCK();
  }
  if (DAT_1811118b0 == (HANDLE)0x0) {
    iVar1 = 2;
  }
  else if (param_1 == 0) {
    iVar1 = FUN_180428c90(param_2);
  }
  else {
    uVar3 = 0;
    if (DAT_1811118c4 != 0) {
      do {
        if (param_1 == *(longlong *)(uVar3 * 0x38 + DAT_1811118b8)) {
          if ((int)uVar3 != -1) {
            if ((*(byte *)(uVar3 * 0x38 + 0x20 + DAT_1811118b8) >> 1 & 1) == param_2) {
              iVar1 = 6 - (uint)(param_2 != 0);
            }
            else {
              iVar1 = FUN_180428950(&local_38,uVar3,1);
              if ((iVar1 == 0) && (iVar1 = FUN_180428b70(uVar3,param_2), local_38 != (LPVOID)0x0)) {
                uVar3 = 0;
                if (local_2c != 0) {
                  do {
                    dwThreadId = *(DWORD *)((longlong)local_38 + uVar3 * 4);
                    if ((dwThreadId != 0) &&
                       (hThread = OpenThread(0x5a,0,dwThreadId), hThread != (HANDLE)0x0)) {
                      ResumeThread(hThread);
                      CloseHandle(hThread);
                    }
                    uVar2 = (int)uVar3 + 1;
                    uVar3 = (ulonglong)uVar2;
                  } while (uVar2 < local_2c);
                }
                HeapFree(DAT_1811118b0,0,local_38);
              }
            }
            goto LAB_1804294eb;
          }
          break;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < DAT_1811118c4);
    }
    iVar1 = 4;
  }
LAB_1804294eb:
  LOCK();
  DAT_1811118c8 = 0;
  UNLOCK();
  return iVar1;
}



/* ===== 180429510 FUN_180429510 ===== */

char * FUN_180429510(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "MH_OK";
  case 1:
    return "MH_ERROR_ALREADY_INITIALIZED";
  case 2:
    return "MH_ERROR_NOT_INITIALIZED";
  case 3:
    return "MH_ERROR_ALREADY_CREATED";
  case 4:
    return "MH_ERROR_NOT_CREATED";
  case 5:
    return "MH_ERROR_ENABLED";
  case 6:
    return "MH_ERROR_DISABLED";
  case 7:
    return "MH_ERROR_NOT_EXECUTABLE";
  case 8:
    return "MH_ERROR_UNSUPPORTED_FUNCTION";
  case 9:
    return "MH_ERROR_MEMORY_ALLOC";
  case 10:
    return "MH_ERROR_MEMORY_PROTECT";
  case 0xb:
    return "MH_ERROR_MODULE_NOT_FOUND";
  case 0xc:
    return "MH_ERROR_FUNCTION_NOT_FOUND";
  case 0xffffffff:
    return "MH_UNKNOWN";
  default:
    return "(unknown)";
  }
}



/* ===== 1804295f0 FUN_1804295f0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1804295f0(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  SIZE_T SVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  byte bVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  byte local_c8;
  byte local_c7;
  _MEMORY_BASIC_INFORMATION local_c0;
  undefined2 local_90;
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined4 uStack_88;
  undefined2 uStack_84;
  ulonglong local_80;
  ulonglong *local_78;
  undefined2 local_70;
  undefined4 local_6e;
  undefined2 local_6a;
  undefined8 local_68;
  ulonglong local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_180919500 ^ (ulonglong)auStack_e8;
  local_70 = 0x15ff;
  uVar2 = 0;
  local_6e = 2;
  local_c8 = 0;
  local_c7 = 0;
  puVar14 = (ulonglong *)0x0;
  local_6a = 0x8eb;
  bVar15 = false;
  local_68 = (undefined1 *)0x0;
  local_90 = 0x25ff;
  uStack_8e = 0;
  uStack_8a = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0x25ff0e70;
  local_78 = (ulonglong *)0x0;
  param_1[4] = 0;
  do {
    lVar3 = param_1[2];
    bVar10 = (byte)uVar2;
    puVar9 = (ulonglong *)(uVar2 + *param_1);
    uVar2 = FUN_180429a20(puVar9,&local_c0);
    uVar2 = uVar2 & 0xffffffff;
    if (((uint)local_c0._33_4_ >> 0xc & 1) != 0) {
      return 0;
    }
    uVar13 = (ulonglong)local_c7;
    if (bVar10 < 5) {
      if ((local_c0.AllocationBase._5_1_ & 199) == 5) {
        puVar11 = puVar9;
        puVar7 = local_60;
        for (uVar6 = uVar2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(char *)puVar7 = (char)*puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          puVar7 = (ulonglong *)((longlong)puVar7 + 1);
        }
        bVar15 = false;
        *(uint *)((longlong)local_60 +
                 ((ulonglong)(byte)local_c0.BaseAddress -
                 (ulonglong)((uint)local_c0._33_4_ >> 2 & 0xf)) + -4) =
             ((int)puVar9 - ((int)lVar3 + (uint)local_c7)) + local_c0._29_4_;
        puVar11 = local_60;
        if (local_c0.AllocationBase._3_1_ == 0xff) {
          bVar15 = local_c0.AllocationBase._7_1_ == '\x04';
        }
LAB_180429865:
        bVar10 = local_c8;
LAB_180429869:
      }
      else if (local_c0.AllocationBase._3_1_ == 0xe8) {
        uVar2 = 0x10;
        local_68 = (undefined1 *)
                   ((longlong)puVar9 +
                   (ulonglong)(byte)local_c0.BaseAddress + (longlong)(int)local_c0._21_4_);
        puVar11 = (ulonglong *)&local_70;
      }
      else {
        puVar11 = puVar9;
        if ((local_c0.AllocationBase._3_1_ & 0xfd) == 0xe9) {
          lVar3 = (longlong)(char)local_c0._21_1_;
          if (local_c0.AllocationBase._3_1_ != 0xeb) {
            lVar3 = (longlong)(int)local_c0._21_4_;
          }
          puVar7 = (ulonglong *)((longlong)puVar9 + lVar3 + (ulonglong)(byte)local_c0.BaseAddress);
          if ((puVar7 < (ulonglong *)*param_1) || ((ulonglong *)(*param_1 + 5) <= puVar7)) {
            bVar15 = puVar14 <= puVar9;
            uStack_8a = SUB82(puVar7,0);
            uStack_88 = (undefined4)((ulonglong)puVar7 >> 0x10);
            uStack_84 = (undefined2)((ulonglong)puVar7 >> 0x30);
            puVar11 = (ulonglong *)&local_90;
            uVar2 = 0xe;
          }
          else if (puVar14 < puVar7) {
            puVar14 = puVar7;
          }
          goto LAB_180429869;
        }
        if ((((local_c0.AllocationBase._3_1_ & 0xf0) == 0x70) ||
            ((local_c0.AllocationBase._3_1_ & 0xfc) == 0xe0)) ||
           ((local_c0.AllocationBase._4_1_ & 0xf0) == 0x80)) {
          if (((local_c0.AllocationBase._3_1_ & 0xf0) == 0x70) ||
             (lVar3 = (longlong)(int)local_c0._21_4_, (local_c0.AllocationBase._3_1_ & 0xfc) == 0xe0
             )) {
            lVar3 = (longlong)(char)local_c0._21_1_;
          }
          puVar7 = (ulonglong *)((longlong)puVar9 + lVar3 + (ulonglong)(byte)local_c0.BaseAddress);
          if ((puVar7 < (ulonglong *)*param_1) || ((ulonglong *)(*param_1 + 5) <= puVar7)) {
            if ((local_c0.AllocationBase._3_1_ & 0xfc) == 0xe0) {
              return 0;
            }
            bVar10 = local_c0.AllocationBase._3_1_;
            if (local_c0.AllocationBase._3_1_ == 0xf) {
              bVar10 = local_c0.AllocationBase._4_1_;
            }
            local_78 = puVar7;
            puVar11 = &local_80;
            local_80 = CONCAT71(local_80._1_7_,bVar10) & 0xffffffffffffff0f ^ 0x71;
            uVar2 = 0x10;
          }
          else {
            if (puVar7 <= puVar14) {
              puVar7 = puVar14;
            }
            puVar14 = puVar7;
          }
          goto LAB_180429865;
        }
        bVar10 = local_c8;
        if ((local_c0.AllocationBase._3_1_ & 0xfe) == 0xc2) {
          bVar15 = puVar14 <= puVar9;
        }
      }
    }
    else {
      uStack_8a = SUB82(puVar9,0);
      uStack_88 = (undefined4)((ulonglong)puVar9 >> 0x10);
      uStack_84 = (undefined2)((ulonglong)puVar9 >> 0x30);
      bVar15 = true;
      uVar2 = 0xe;
      puVar11 = (ulonglong *)&local_90;
    }
    if ((puVar9 < puVar14) && ((uint)uVar2 != (uint)(byte)local_c0.BaseAddress)) {
      return 0;
    }
    if (0x32 < (uint)uVar2 + (uint)local_c7) {
      return 0;
    }
    if (7 < *(uint *)((longlong)param_1 + 0x24)) {
      return 0;
    }
    *(byte *)((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x28) = bVar10;
    *(byte *)((longlong)param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x24) + 0x30) = local_c7;
    local_c7 = local_c7 + (char)uVar2;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    puVar12 = (undefined1 *)(param_1[2] + uVar13);
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar12 = (char)*puVar11;
      puVar11 = (ulonglong *)((longlong)puVar11 + 1);
      puVar12 = puVar12 + 1;
    }
    local_c8 = (byte)local_c0.BaseAddress + local_c8;
    uVar2 = (ulonglong)local_c8;
  } while (!bVar15);
  if (local_c8 < 5) {
    lVar3 = *param_1;
    cVar1 = *(char *)(lVar3 + uVar2);
    if (((cVar1 != '\0') && (cVar1 != -0x70)) && (cVar1 != -0x34)) {
LAB_18042992b:
      if (local_c8 < 2) {
        if (((cVar1 != '\0') && (cVar1 != -0x70)) && (cVar1 != -0x34)) {
          return 0;
        }
        if (1 < 2 - local_c8) {
          uVar5 = 1;
          do {
            if (*(char *)(lVar3 + uVar2 + (ulonglong)uVar5) != cVar1) {
              return 0;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 2 - local_c8);
        }
      }
      SVar4 = VirtualQuery((LPCVOID)(lVar3 + -5),&local_c0,0x30);
      if (SVar4 != 0) {
        if ((CONCAT31(local_c0.State._1_3_,(undefined1)local_c0.State) == 0x1000) &&
           ((local_c0._33_4_ & 0xf0000000) != 0)) {
          cVar1 = *(char *)(*param_1 + -5);
          if ((cVar1 == '\0') || ((cVar1 == -0x70 || (cVar1 == -0x34)))) {
            uVar5 = 1;
            do {
              if (*(char *)(*param_1 + -5 + (ulonglong)uVar5) != cVar1) {
                return 0;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < 5);
            *(undefined4 *)(param_1 + 4) = 1;
            goto LAB_1804299c9;
          }
        }
      }
      return 0;
    }
    uVar5 = 1;
    if (1 < 5 - local_c8) {
      do {
        if (*(char *)(lVar3 + uVar2 + (ulonglong)uVar5) != cVar1) goto LAB_18042992b;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 5 - local_c8);
    }
  }
LAB_1804299c9:
  lVar3 = param_1[1];
  uStack_8a = (undefined2)lVar3;
  uStack_88 = (undefined4)((ulonglong)lVar3 >> 0x10);
  uStack_84 = (undefined2)((ulonglong)lVar3 >> 0x30);
  puVar8 = (undefined8 *)((ulonglong)local_c7 + param_1[2]);
  param_1[3] = (longlong)puVar8;
  *puVar8 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,local_90));
  *(undefined4 *)(puVar8 + 1) = uStack_88;
  *(undefined2 *)((longlong)puVar8 + 0xc) = uStack_84;
  return 1;
}



/* ===== 180429a20 FUN_180429a20 ===== */

char FUN_180429a20(byte *param_1,char *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  char cVar18;
  byte bVar19;
  longlong lVar20;
  byte *pbVar21;
  byte *pbVar22;
  char cVar23;
  ulonglong uVar24;
  char *pcVar25;
  byte *pbVar26;
  byte bVar27;
  ulonglong uVar28;
  undefined *puVar29;
  byte bVar30;
  byte bVar31;
  byte *pbVar32;
  char local_res8;
  char local_res18;
  
  bVar16 = 0;
  bVar8 = 0;
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[8] = '\0';
  cVar18 = '\x0f';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  pbVar22 = param_1;
  uVar28 = 0;
  do {
    bVar1 = *pbVar22;
    uVar24 = (ulonglong)bVar1;
    pbVar21 = pbVar22 + 1;
    switch(bVar1) {
    case 0x26:
    case 0x2e:
    case 0x36:
    case 0x3e:
    case 100:
    case 0x65:
      bVar16 = bVar16 | 0x40;
      param_2[3] = bVar1;
      uVar24 = 0;
      break;
    default:
      if ((bVar1 & 0xf0) != 0x40) {
        bVar5 = false;
        uVar12 = (uint)bVar16 << 0x17;
        cVar18 = '\0';
        pbVar32 = param_1 + 0xf;
        bVar9 = 1;
        bVar7 = false;
        if (bVar16 == 0) {
          bVar16 = 0;
        }
        local_res18 = '\0';
        *(uint *)(param_2 + 0x21) = uVar12;
        if (bVar8 == 0) {
          bVar8 = 1;
        }
        bVar27 = (byte)uVar28;
        if (bVar27 == 0) {
LAB_180429bdb:
          cVar23 = '\x01';
        }
        else {
          uVar12 = uVar12 | 0x40000000;
          param_2[6] = bVar27;
          *(uint *)(param_2 + 0x21) = uVar12;
          param_2[7] = bVar27 >> 3 & 1;
          param_2[8] = bVar27 >> 2 & 1;
          param_2[9] = bVar27 >> 1 & 1;
          param_2[10] = bVar27 & 1;
          if (((uVar28 & 8) == 0) || ((bVar1 & 0xf8) != 0xb8)) goto LAB_180429bdb;
          cVar18 = '\x01';
          local_res18 = '\x01';
          cVar23 = '\x02';
        }
        if (((byte)(bVar1 + 0x3c) < 2) || (bVar1 == 0x62)) {
LAB_180429f13:
          param_2[0xb] = bVar1;
          lVar10 = (longlong)pbVar32 - (longlong)pbVar21;
          if (bVar1 == 0xc5) {
            if (lVar10 < 3) goto LAB_180429b15;
            lVar20 = 2;
            lVar10 = 3;
          }
          else if (bVar1 == 0x62) {
            if (lVar10 < 5) goto LAB_180429b15;
            lVar20 = 4;
            bVar9 = *pbVar21 & 7;
            lVar10 = 5;
          }
          else {
            if (lVar10 < 4) goto LAB_180429b15;
            lVar20 = 3;
            bVar9 = *pbVar21 & 0x1f;
            lVar10 = 4;
          }
          bVar30 = pbVar22[lVar20];
          uVar17 = (uint)bVar30;
          pbVar21 = pbVar22 + lVar10;
          param_2[0xc] = bVar30;
          if ((bVar27 != 0) || ((bVar16 & 0x2e) != 0)) {
            uVar12 = uVar12 | 0x3000;
            *(uint *)(param_2 + 0x21) = uVar12;
          }
          bVar16 = bVar16 & 0xf7;
          bVar27 = 1;
          if (bVar1 == 0x8f) {
            if (bVar9 == 8) {
LAB_18042a03d:
              bVar27 = 3;
            }
            else if (bVar9 != 9) {
              if (bVar9 == 10) {
                bVar27 = 0x11;
              }
              else {
                *(uint *)(param_2 + 0x21) = uVar12 | 0x3000;
              }
            }
          }
          else if (bVar9 == 1) {
            if ((((byte)(bVar30 + 0x90) < 4) || (bVar30 == 0xc2)) || ((byte)(bVar30 + 0x3c) < 3))
            goto LAB_18042a03d;
            if (bVar1 != 0x62) {
              if (bVar30 == 0x77) {
                bVar27 = 0;
              }
              else if ((byte)(bVar30 + 0x7c) < 2) {
                bVar27 = 0x40;
              }
            }
          }
          else if (bVar9 != 2) {
            if (bVar9 == 3) goto LAB_18042a03d;
            if ((bVar9 == 5) || (bVar9 == 6)) {
              if (bVar1 == 0x62) {
                if ((bVar9 == 5) &&
                   ((((bVar30 < 0x28 && ((0xc000000500U >> ((ulonglong)bVar30 & 0x3f) & 1) != 0)) ||
                     (((byte)(bVar30 - 0x56) < 0x12 &&
                      ((0x30003U >> (bVar30 - 0x56 & 0x1f) & 1) != 0)))) || (bVar30 == 0xc2))))
                goto LAB_18042a03d;
              }
              else {
                *(uint *)(param_2 + 0x21) = uVar12 | 0x3000;
              }
            }
            else {
              *(uint *)(param_2 + 0x21) = uVar12 | 0x3000;
            }
          }
          bVar6 = true;
          cVar18 = '\0';
LAB_18042a045:
LAB_18042a04a:
          uVar12 = 1;
          pbVar22 = pbVar21;
          if ((bVar27 & 1) != 0) {
            uVar13 = *(uint *)(param_2 + 0x21);
            *(uint *)(param_2 + 0x21) = uVar13 | 1;
            if (0 < (longlong)pbVar32 - (longlong)pbVar21) {
              bVar1 = *pbVar21;
              param_2[0xd] = bVar1;
              bVar31 = bVar1 >> 3 & 7;
              bVar30 = bVar1 >> 6;
              param_2[0xe] = bVar30;
              bVar9 = bVar1 & 7;
              param_2[0xf] = bVar31;
              pbVar22 = pbVar21 + 1;
              param_2[0x10] = bVar9;
              if ((cVar18 != '\0') && ((char)(cVar18 << bVar31) < '\0')) {
                uVar12 = 0x3001;
                *(uint *)(param_2 + 0x21) = uVar13 | 0x3001;
              }
              if (bVar6) goto LAB_18042a371;
              uVar12 = uVar12 | uVar13;
              bVar19 = (byte)uVar17;
              if (((!bVar7) && (0xd8 < bVar19)) && (bVar19 < 0xe0)) {
                if (bVar30 == 3) {
                  cVar18 = (&DAT_180962324)
                           [(ulonglong)bVar31 + (ulonglong)(uVar17 + 0x27 & 0xff) * 8];
                  bVar11 = bVar9;
                }
                else {
                  cVar18 = (&DAT_18096231d)[uVar17 + 0x27 & 0xff];
                  bVar11 = bVar31;
                }
                if ((char)(cVar18 << bVar11) < '\0') {
                  uVar12 = uVar12 | 0x3000;
                  *(uint *)(param_2 + 0x21) = uVar12;
                }
              }
              if ((bVar16 & 0x20) == 0) goto LAB_18042a215;
              if (bVar30 == 3) {
                *(uint *)(param_2 + 0x21) = uVar12 | 0x9000;
                goto LAB_18042a215;
              }
              if (bVar7) {
                pcVar14 = &DAT_1809623e6;
                pcVar25 = &DAT_1809623f8;
                uVar12 = uVar17;
              }
              else {
                pcVar14 = &DAT_1809623ce;
                uVar12 = (uint)(bVar19 & 0xfe);
                pcVar25 = &DAT_1809623e6;
              }
              goto LAB_18042a1f0;
            }
            goto LAB_180429b15;
          }
        }
        else {
          if (bVar1 == 0x8f) {
            if ((pbVar21 < pbVar32) && ((*pbVar21 & 0x18) != 0)) goto LAB_180429f13;
LAB_180429c11:
            param_2[0xb] = bVar1;
            local_res18 = cVar18;
            if (bVar1 != 0xf) {
LAB_180429db7:
              puVar29 = &DAT_180962220;
              if ((0x9f < (byte)uVar24) && ((byte)uVar24 < 0xa4)) {
                local_res18 = cVar18 + '\x01';
                if ((bVar16 & 0x10) != 0) {
                  local_res18 = cVar18;
                }
                bVar16 = bVar16 & 0xf7;
              }
              goto LAB_180429de9;
            }
            if (0 < (longlong)pbVar32 - (longlong)pbVar21) {
              bVar1 = *pbVar21;
              uVar24 = (ulonglong)bVar1;
              bVar5 = true;
              pbVar21 = pbVar22 + 2;
              param_2[0xc] = bVar1;
              bVar7 = true;
              if ((bVar1 - 0x38 & 0xfd) != 0) {
                puVar29 = &DAT_18096226a;
                goto LAB_180429de9;
              }
              if (1 < (longlong)pbVar32 - (longlong)pbVar21) {
                uVar17 = (uint)*pbVar21;
                pbVar21 = pbVar22 + 3;
                bVar27 = 1;
                if (bVar1 == 0x3a) {
                  bVar27 = 3;
                }
                if ((bVar16 & 0x20) != 0) {
                  *(uint *)(param_2 + 0x21) = uVar12 | 0x9000;
                }
                bVar6 = true;
                cVar18 = '\0';
                goto LAB_18042a04a;
              }
            }
            goto LAB_180429b15;
          }
          if (bVar1 != 0xd5) goto LAB_180429c11;
          if ((longlong)pbVar32 - (longlong)pbVar21 < 2) goto LAB_180429b15;
          bVar1 = *pbVar21;
          bVar9 = pbVar22[2];
          uVar24 = (ulonglong)bVar9;
          pbVar21 = pbVar22 + 3;
          uVar17 = 0x80000000;
          *(uint *)(param_2 + 0x21) = uVar12 | 0x80000000;
          if (bVar27 != 0) {
            uVar17 = 0x80003000;
            *(uint *)(param_2 + 0x21) = uVar12 | 0x80003000;
          }
          param_2[7] = bVar1 >> 3 & 1;
          param_2[8] = bVar1 >> 2 & 1;
          param_2[9] = bVar1 >> 1 & 1;
          param_2[10] = bVar1 & 1;
          if (-1 < (char)bVar1) {
            if ((((((bVar9 == 0xf) || ((bVar9 & 0xf0) == 0x40)) || (bVar9 == 0x26)) ||
                 (((byte)(bVar9 - 0x2e) < 0x3a &&
                  ((0x3c0000000010101U >> ((ulonglong)(bVar9 - 0x2e) & 0x3f) & 1) != 0)))) ||
                (bVar9 == 0xf0)) || ((byte)(bVar9 + 0xe) < 2)) {
              uVar17 = 0x80003000;
              *(uint *)(param_2 + 0x21) = uVar12 | 0x80003000;
            }
            uVar12 = uVar17 | uVar12;
            param_2[0xb] = bVar9;
            if ((bVar1 & 8) != 0) {
              if ((bVar9 & 0xf8) == 0xb8) {
                cVar18 = cVar23;
                local_res18 = cVar23;
              }
            }
            goto LAB_180429db7;
          }
          bVar5 = true;
          param_2[0xb] = -0x2b;
          bVar7 = true;
          puVar29 = &DAT_18096226a;
          param_2[0xc] = bVar9;
          uVar12 = uVar17 | uVar12;
LAB_180429de9:
          cVar23 = (char)uVar24;
          bVar6 = false;
          uVar17 = (uint)uVar24;
          bVar27 = puVar29[(uint)(byte)puVar29[uVar24 >> 2] + (uVar17 & 3)];
          if (bVar27 != 0xff) {
            if ((char)bVar27 < '\0') {
              uVar13 = (uint)bVar27;
              bVar27 = (byte)*(undefined2 *)(puVar29 + (uVar13 & 0x7f));
              cVar18 = (char)((ushort)*(undefined2 *)(puVar29 + (uVar13 & 0x7f)) >> 8);
            }
            else {
              cVar18 = '\0';
            }
            if (!bVar5) goto LAB_18042a045;
LAB_180429eb5:
            if ((s_____AI____LB________ODS___DWC____18096235c
                 [(uint)(byte)s_____AI____LB________ODS___DWC____18096235c[uVar24 >> 2] +
                  (uVar17 & 3)] & bVar8) != 0) {
              if ((cVar23 == '+') && ((bVar8 & 6) != 0)) goto LAB_18042a045;
              *(uint *)(param_2 + 0x21) = uVar12 | 0x3000;
            }
            if ((uVar17 + 0x88 & 0xbe) != 0) goto LAB_18042a045;
            if (cVar23 != -0x47) {
              bVar27 = bVar27 | 1;
            }
            goto LAB_18042a04a;
          }
          bVar27 = 0;
          if (bVar5) {
            if (cVar23 != '\v') {
              if (cVar23 == '7') {
                if (bVar8 == 1) {
                  cVar18 = '\0';
                  goto LAB_180429eb5;
                }
LAB_180429e4c:
                uVar12 = uVar12 | 0x3000;
                *(uint *)(param_2 + 0x21) = uVar12;
                if ((uVar17 & 0xfffffffd) != 0x24) goto LAB_180429e61;
              }
              else if (((1 < (byte)(cVar23 + 0x5aU)) && (cVar23 != -0x47)) && (cVar23 != -1))
              goto LAB_180429e4c;
              bVar27 = 1;
            }
LAB_180429e61:
            cVar18 = '\0';
            goto LAB_180429eb5;
          }
          pbVar22 = pbVar21;
          if (1 < (byte)(cVar23 + 0x62U)) {
            *(uint *)(param_2 + 0x21) = uVar12 | 0x3000;
          }
        }
        if ((bVar16 & 0x20) != 0) {
          *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x9000;
        }
        goto LAB_18042a44a;
      }
      break;
    case 0x66:
      bVar16 = bVar16 | 8;
      param_2[4] = bVar1;
      if (bVar8 == 0) {
        bVar8 = 8;
      }
      uVar24 = 0;
      break;
    case 0x67:
      bVar16 = bVar16 | 0x10;
      param_2[5] = bVar1;
      uVar24 = 0;
      break;
    case 0xf0:
      bVar16 = bVar16 | 0x20;
      param_2[2] = bVar1;
      uVar24 = 0;
      break;
    case 0xf2:
      bVar16 = bVar16 | 2;
      param_2[1] = bVar1;
      uVar24 = 0;
      bVar8 = 2;
      break;
    case 0xf3:
      bVar16 = bVar16 | 4;
      param_2[1] = bVar1;
      uVar24 = 0;
      bVar8 = 4;
    }
    cVar18 = cVar18 + -1;
    pbVar22 = pbVar21;
    uVar28 = uVar24;
  } while (cVar18 != '\0');
  goto LAB_180429b15;
  while (pcVar14 = pcVar14 + 2, pcVar14 != pcVar25) {
LAB_18042a1f0:
    if (*pcVar14 == (char)uVar12) {
      if (-1 < (char)(pcVar14[1] << bVar31)) goto LAB_18042a215;
      break;
    }
  }
  *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x9000;
LAB_18042a215:
  if (bVar7) {
    if (uVar17 == 0x20) {
LAB_18042a23f:
      bVar30 = 3;
      if ((0x20 < (bVar1 & 0x38)) || ((bVar1 & 0x38) == 8)) goto LAB_18042a312;
    }
    else {
      if (uVar17 != 0x21) {
        if (uVar17 == 0x22) goto LAB_18042a23f;
        if (uVar17 != 0x23) goto LAB_18042a272;
      }
      bVar30 = 3;
    }
LAB_18042a322:
    if ((bVar19 == 0x78) && ((bVar8 & 10) != 0)) {
      bVar27 = bVar27 | 4;
    }
  }
  else {
    if (uVar17 == 0x8c) {
LAB_18042a30e:
      if (0x28 < (bVar1 & 0x38)) {
LAB_18042a312:
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x11000;
LAB_18042a31a:
        if (bVar7) goto LAB_18042a322;
      }
    }
    else {
      if (uVar17 == 0x8e) {
        if ((bVar1 & 0x38) == 8) goto LAB_18042a312;
        goto LAB_18042a30e;
      }
LAB_18042a272:
      if (bVar30 == 3) {
        pbVar15 = &DAT_180962407;
        pbVar26 = &DAT_180962431;
        if (!bVar7) {
          pbVar26 = &DAT_180962407;
          pbVar15 = &DAT_1809623f8;
        }
        for (; pbVar15 != pbVar26; pbVar15 = pbVar15 + 3) {
          if (*pbVar15 == bVar19) {
            if (((pbVar15[1] & bVar8) != 0) && (-1 < (char)(pbVar15[2] << bVar31)))
            goto LAB_18042a312;
            break;
          }
        }
        goto LAB_18042a31a;
      }
      if (bVar7) {
        if (uVar17 == 0x50) {
LAB_18042a2e6:
          if ((bVar8 & 9) == 0) goto LAB_18042a322;
        }
        else if (uVar17 != 0xc5) {
          if (uVar17 == 0xd6) {
            if ((bVar8 & 6) != 0) goto LAB_18042a312;
          }
          else if ((uVar17 == 0xd7) || (uVar17 == 0xf7)) goto LAB_18042a2e6;
          goto LAB_18042a322;
        }
        goto LAB_18042a312;
      }
    }
    if ((bVar1 & 0x38) < 9) {
      if (bVar19 == 0xf6) {
        bVar27 = bVar27 | 2;
      }
      else {
        if (bVar19 != 0xf7) goto LAB_18042a355;
        bVar27 = bVar27 | 0x10;
      }
    }
    else {
LAB_18042a355:
      if ((bVar19 == 199) && ((bVar1 & 0x38) == 0x38)) {
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x200;
      }
    }
  }
LAB_18042a371:
  if (bVar30 == 0) {
    bVar8 = 0;
    if (bVar9 == 5) {
      bVar8 = 4;
    }
  }
  else if (bVar30 == 1) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
    if (bVar30 == 2) {
      bVar8 = 4;
    }
  }
  if ((bVar30 == 3) || (bVar9 != 4)) {
LAB_18042a3fe:
    if (bVar8 != 0) goto LAB_18042a403;
  }
  else {
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 2;
    if ((longlong)pbVar32 - (longlong)pbVar22 < 1) goto LAB_180429b15;
    bVar1 = *pbVar22;
    pbVar22 = pbVar21 + 2;
    param_2[0x12] = bVar1 >> 6;
    param_2[0x11] = bVar1;
    param_2[0x13] = bVar1 >> 3 & 7;
    param_2[0x14] = bVar1 & 7;
    if (((bVar1 & 7) != 5) || ((bVar30 & 1) != 0)) goto LAB_18042a3fe;
    bVar8 = 4;
LAB_18042a403:
    if ((longlong)pbVar32 - (longlong)pbVar22 < (longlong)(ulonglong)bVar8) goto LAB_180429b15;
    if (bVar8 == 1) {
      param_2[0x1d] = *pbVar22;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x40;
      pbVar22 = pbVar22 + 1;
    }
    else {
      *(undefined4 *)(param_2 + 0x1d) = *(undefined4 *)pbVar22;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x100;
      pbVar22 = pbVar22 + bVar8;
    }
  }
LAB_18042a44a:
  local_res8 = (char)param_1;
  if ((bVar27 & 0x10) == 0) goto LAB_18042a4f8;
  if ((bVar27 & 0x40) == 0) {
    if (local_res18 == '\0') {
      if (((bVar16 & 8) == 0) || (param_2[7] != '\0')) {
        if ((longlong)pbVar32 - (longlong)pbVar22 < 4) goto LAB_180429b15;
        uVar3 = *(undefined4 *)pbVar22;
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x10;
        pbVar22 = pbVar22 + 4;
        *(undefined4 *)(param_2 + 0x15) = uVar3;
        goto LAB_18042a4f8;
      }
LAB_18042a4fe:
      if ((longlong)pbVar32 - (longlong)pbVar22 < 2) goto LAB_180429b15;
      uVar2 = *(undefined2 *)pbVar22;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 8;
      *(undefined2 *)(param_2 + 0x15) = uVar2;
      pbVar22 = pbVar22 + 2;
    }
    else {
      if ((longlong)pbVar32 - (longlong)pbVar22 < 8) goto LAB_180429b15;
      uVar4 = *(undefined8 *)pbVar22;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x20;
      *(undefined8 *)(param_2 + 0x15) = uVar4;
      pbVar22 = pbVar22 + 8;
LAB_18042a4f8:
      if ((bVar27 & 4) != 0) goto LAB_18042a4fe;
    }
    if ((bVar27 & 2) != 0) {
      if ((longlong)pbVar32 - (longlong)pbVar22 < 1) goto LAB_180429b15;
      uVar12 = *(uint *)(param_2 + 0x21);
      *(uint *)(param_2 + 0x21) = uVar12 | 4;
      bVar16 = *pbVar22;
      pbVar22 = pbVar22 + 1;
      if ((uVar12 & 8) == 0) {
        param_2[0x15] = bVar16;
      }
      else {
        param_2[0x1d] = bVar16;
      }
    }
    if ((bVar27 & 0x40) == 0) {
      if ((bVar27 & 0x20) == 0) {
LAB_18042a5b6:
        local_res8 = (char)pbVar22 - local_res8;
        *param_2 = local_res8;
        return local_res8;
      }
      if (0 < (longlong)pbVar32 - (longlong)pbVar22) {
        bVar16 = *pbVar22;
        *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x204;
        param_2[0x15] = bVar16;
        pbVar22 = pbVar22 + 1;
        goto LAB_18042a5b6;
      }
      goto LAB_180429b15;
    }
  }
  else if (((bVar16 & 8) != 0) && (param_2[7] == '\0')) {
    if (1 < (longlong)pbVar32 - (longlong)pbVar22) {
      uVar2 = *(undefined2 *)pbVar22;
      *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x208;
      local_res8 = ((char)pbVar22 + '\x02') - local_res8;
      *(undefined2 *)(param_2 + 0x15) = uVar2;
      *param_2 = local_res8;
      return local_res8;
    }
    goto LAB_180429b15;
  }
  if (3 < (longlong)pbVar32 - (longlong)pbVar22) {
    uVar3 = *(undefined4 *)pbVar22;
    *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x210;
    local_res8 = ((char)pbVar22 + '\x04') - local_res8;
    *(undefined4 *)(param_2 + 0x15) = uVar3;
    *param_2 = local_res8;
    return local_res8;
  }
LAB_180429b15:
  *(uint *)(param_2 + 0x21) = *(uint *)(param_2 + 0x21) | 0x5000;
  *param_2 = '\x0f';
  return '\x0f';
}



/* ===== 18042a6c0 FUN_18042a6c0 ===== */

float * FUN_18042a6c0(float *param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  fVar6 = param_3 * param_3 + param_4 * param_4 + param_2 * param_2;
  if (fVar6 < 0.0) {
    fVar4 = (float)FUN_18051af10(fVar6);
  }
  else {
    fVar4 = SQRT(fVar6);
  }
  if ((fVar4 < DAT_1808abf54) || (DAT_1808accfc < fVar4)) {
    if (fVar6 == 0.0) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
    else {
      dVar1 = (double)param_2;
      dVar2 = (double)param_3;
      dVar3 = (double)param_4;
      dVar5 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
      if (dVar5 < 0.0) {
        dVar5 = (double)FUN_18051ff20(dVar5);
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      dVar5 = DAT_1808ac500 / dVar5;
      *param_1 = (float)(dVar1 * dVar5);
      param_1[1] = (float)(dVar2 * dVar5);
      param_1[2] = (float)(dVar3 * dVar5);
    }
  }
  else {
    fVar4 = DAT_1808ac34c / fVar4;
    *param_1 = fVar4 * param_2;
    param_1[1] = fVar4 * param_3;
    param_1[2] = fVar4 * param_4;
  }
  return param_1;
}



/* ===== 18042a830 FUN_18042a830 ===== */

float * FUN_18042a830(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_2 = param_2 * DAT_1808ac014;
  param_3 = param_3 * DAT_1808ac014;
  param_4 = param_4 * DAT_1808ac014;
  fVar1 = (float)FUN_180517790(param_2);
  fVar2 = (float)FUN_180517200(param_2);
  fVar3 = (float)FUN_180517790(param_3);
  fVar4 = (float)FUN_180517200(param_3);
  fVar5 = (float)FUN_180517790(param_4);
  fVar6 = (float)FUN_180517200(param_4);
  param_1[9] = fVar1;
  *param_1 = fVar4 * fVar2;
  fVar7 = (float)((uint)fVar1 ^ DAT_1808adec0);
  param_1[1] = fVar3 * fVar2;
  param_1[2] = fVar7;
  param_1[3] = fVar5 * fVar1 * fVar4 - fVar6 * fVar3;
  param_1[5] = fVar5 * fVar2;
  param_1[6] = fVar6 * fVar1 * fVar4 + fVar5 * fVar3;
  param_1[4] = fVar5 * fVar1 * fVar3 + fVar6 * fVar4;
  param_1[8] = fVar6 * fVar2;
  param_1[7] = fVar6 * fVar1 * fVar3 - fVar5 * fVar4;
  return param_1;
}



/* ===== 18042a9a0 FUN_18042a9a0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18042a9a0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             float *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_f8 [16];
  undefined8 local_b8;
  float afStack_b0 [14];
  ulonglong local_78;
  
  local_78 = DAT_180919500 ^ (ulonglong)auStack_138;
  fVar9 = 0.0;
  local_100 = 0;
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_f8[2] = 0.0;
  local_f8[3] = 0.0;
  local_f8[4] = 0.0;
  local_f8[5] = 0.0;
  local_f8[6] = 0.0;
  local_f8[7] = 0.0;
  local_f8[8] = 0.0;
  local_f8[9] = 0.0;
  local_f8[10] = 0.0;
  local_f8[0xb] = 0.0;
  local_f8[0xc] = 0.0;
  local_f8[0xd] = 0.0;
  local_f8[0xe] = 0.0;
  local_f8[0xf] = 0.0;
  local_b8 = 0;
  afStack_b0[0] = 0.0;
  afStack_b0[1] = 0.0;
  afStack_b0[2] = 0.0;
  afStack_b0[3] = 0.0;
  afStack_b0[4] = 0.0;
  afStack_b0[5] = 0.0;
  afStack_b0[6] = 0.0;
  afStack_b0[7] = 0.0;
  afStack_b0[8] = 0.0;
  afStack_b0[9] = 0.0;
  afStack_b0[10] = 0.0;
  afStack_b0[0xb] = 0.0;
  afStack_b0[0xc] = 0.0;
  afStack_b0[0xd] = 0.0;
  local_108 = param_3;
  local_104 = param_4;
  uVar2 = (*(code *)param_2[1])(*param_2,&local_108,*(undefined4 *)(param_1 + 0x20));
  local_118 = &local_b8;
  FUN_18042b280(param_1,param_2,uVar2,local_f8);
  *param_5 = local_f8[0];
  param_5[1] = (float)local_b8;
  iVar1 = *(int *)(param_1 + 0x3c);
  fVar10 = local_f8[0];
  fVar11 = (float)local_b8;
  if (1 < iVar1) {
    iVar4 = 0;
    fVar6 = 0.0;
    if (iVar1 < 4) goto LAB_18042aad1;
    iVar3 = iVar4;
    do {
      iVar4 = iVar3 + 4;
      fVar9 = fVar9 + local_f8[iVar3] + local_f8[(longlong)iVar3 + 1] +
              local_f8[(longlong)iVar3 + 2] + local_f8[(longlong)iVar3 + 3];
      fVar6 = fVar6 + local_f8[(longlong)iVar3 + 0x10] + afStack_b0[(longlong)iVar3 + -1] +
              afStack_b0[iVar3] + afStack_b0[(longlong)iVar3 + 1];
      iVar3 = iVar4;
    } while (iVar4 < iVar1 + -3);
    for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
LAB_18042aad1:
      fVar9 = fVar9 + local_f8[iVar4];
      fVar6 = fVar6 + local_f8[(longlong)iVar4 + 0x10];
    }
    iVar4 = 0;
    fVar8 = DAT_1808acd08;
    do {
      fVar5 = local_f8[iVar4] - (DAT_1808ac34c / (float)iVar1) * fVar9;
      fVar7 = local_f8[(longlong)iVar4 + 0x10] - (DAT_1808ac34c / (float)iVar1) * fVar6;
      fVar5 = fVar7 * fVar7 + fVar5 * fVar5;
      if (fVar5 < fVar8) {
        fVar8 = fVar5;
        fVar10 = local_f8[iVar4];
        fVar11 = local_f8[(longlong)iVar4 + 0x10];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
    *param_5 = fVar10;
    param_5[1] = fVar11;
  }
  fVar11 = fVar11 * fVar11;
  fVar9 = fVar11 + fVar10 * fVar10;
  if (fVar9 < 0.0) {
    FUN_18051af10();
    fVar9 = extraout_XMM0_Da;
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  fVar10 = fVar10 * fVar10 + DAT_1808ac34c;
  param_5[2] = fVar9;
  fVar10 = fVar10 + fVar11;
  if (fVar10 < 0.0) {
    FUN_18051af10();
    fVar10 = extraout_XMM0_Da_00;
  }
  else {
    fVar10 = SQRT(fVar10);
  }
  fVar11 = fVar11 + DAT_1808ac34c;
  param_5[3] = fVar10;
  if (fVar11 < 0.0) {
    FUN_18051af10();
    fVar11 = extraout_XMM0_Da_01;
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  param_5[4] = fVar11;
  return 1;
}



/* ===== 18042ac20 FUN_18042ac20 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042ac20(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180919500 ^ (ulonglong)auStack_c8;
  local_a8 = &local_98;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  FUN_18042a9a0();
  pfVar1 = (float *)FUN_18042a830(local_80,param_3,param_4,param_5);
  puVar2 = (undefined4 *)
           FUN_18042a6c0(&local_98,
                         (*pfVar1 - (float)local_98 * pfVar1[3]) + local_98._4_4_ * pfVar1[6],
                         (pfVar1[1] - (float)local_98 * pfVar1[4]) + local_98._4_4_ * pfVar1[7],
                         (pfVar1[2] - (float)local_98 * pfVar1[5]) + local_98._4_4_ * pfVar1[8]);
  local_54 = puVar2[1];
  local_50 = puVar2[2];
  local_58 = *puVar2;
  (*(code *)param_2[3])(*param_2,&local_58);
  return;
}



/* ===== 18042ad50 FUN_18042ad50 ===== */

int FUN_18042ad50(int *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if ((iVar1 < 1) || (param_1[1] == 0)) {
    iVar1 = -iVar1;
    uVar3 = 0x27;
    lVar2 = 0x27;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    do {
      iVar1 = iVar1 * 0x41a7 + (iVar1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar3 < 0x20) {
        param_1[lVar2 + 2] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar3 < 0x21) {
        param_1[lVar2 + 1] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar3 < 0x22) {
        param_1[lVar2] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar3 < 0x23) {
        param_1[lVar2 + -1] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar3 < 0x24) {
        param_1[lVar2 + -2] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar3 < 0x25) {
        param_1[lVar2 + -3] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar3 < 0x26) {
        param_1[lVar2 + -4] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      if (uVar3 < 0x27) {
        param_1[lVar2 + -5] = iVar1;
      }
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -6] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -7] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -8] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -9] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -10] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -0xb] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -0xc] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -0xd] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -0xe] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -0xf] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -0x10] = iVar1;
      iVar1 = *param_1 * 0x41a7 + (*param_1 / 0x1f31d) * -0x7fffffff;
      *param_1 = iVar1;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0x7fffffff;
        *param_1 = iVar1;
      }
      param_1[lVar2 + -0x11] = iVar1;
      lVar2 = lVar2 + -0x14;
      uVar3 = uVar3 - 0x14;
      iVar1 = *param_1;
    } while (-1 < (int)uVar3);
    param_1[1] = param_1[2];
  }
  iVar1 = iVar1 * 0x41a7 + (iVar1 / 0x1f31d) * -0x7fffffff;
  *param_1 = iVar1;
  if (iVar1 < 0) {
    *param_1 = iVar1 + 0x7fffffff;
  }
  lVar2 = (longlong)((int)(param_1[1] + (param_1[1] >> 0x1f & 0x3ffffffU)) >> 0x1a);
  param_1[1] = param_1[lVar2 + 2];
  param_1[lVar2 + 2] = *param_1;
  return param_1[1];
}



/* ===== 18042b280 FUN_18042b280 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042b280(longlong param_1,undefined8 *param_2,int param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_218 [32];
  undefined4 *local_1f8;
  float *local_1f0;
  float local_1e8;
  undefined4 local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [256];
  ulonglong local_c8;
  
  local_c8 = DAT_180919500 ^ (ulonglong)auStack_218;
  local_1d0 = param_5;
  local_1d8 = param_4;
  FUN_180540170(local_1c8,0,0x100);
  (*(code *)param_2[5])(local_1c8,0);
  (*(code *)param_2[5])(local_1c8,param_3 + 1);
  uVar4 = DAT_1808ac7d0;
  fVar3 = DAT_1808ac34c;
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((*(short *)(param_1 + 0x34) == 0x40) && (*(int *)(param_1 + 0x38) == 1)) {
    bVar5 = true;
  }
  else {
    bVar2 = false;
    bVar5 = false;
    if ((*(short *)(param_1 + 0x34) == 0x1c) &&
       (*(float *)(param_1 + 0x48) <= DAT_1808ac658 && DAT_1808ac658 != *(float *)(param_1 + 0x48)))
    {
      bVar5 = true;
      goto LAB_18042b31f;
    }
  }
  bVar2 = bVar5;
  bVar5 = false;
LAB_18042b31f:
  uVar8 = 0;
  fVar12 = 0.0;
  fVar11 = 0.0;
  local_1e0 = (longlong)((int)*(float *)(param_1 + 0x48) * iVar1);
  if (0 < iVar1) {
    do {
      if (((int)uVar8 == 0) || (*(char *)(param_1 + 0x5a) != '\0')) {
        fVar9 = (float)(*(code *)param_2[6])(local_1c8,0,fVar3);
        (*(code *)param_2[6])(local_1c8,0,uVar4);
        if (bVar2) {
          fVar9 = fVar3 - fVar9 * fVar9;
        }
        else if (bVar5) {
          iVar6 = 2;
          do {
            fVar12 = (float)iVar6;
            fVar9 = fVar9 * fVar9;
            iVar6 = iVar6 + -1;
          } while (*(float *)(param_1 + 0x48) < fVar12);
          fVar9 = fVar3 - fVar9;
        }
        if (*(char *)(param_1 + 0x58) != '\0') {
          fVar9 = fVar3;
        }
        fVar9 = fVar9 * *(float *)(param_1 + 0x40);
        fVar12 = (float)FUN_180517200();
        fVar12 = fVar12 * fVar9;
        fVar11 = (float)FUN_180517790();
        fVar11 = fVar11 * fVar9;
      }
      local_1e8 = 0.0;
      local_1e4 = 0;
      if (*(char *)(param_1 + 0x5a) == '\0') {
        local_1e8 = (float)(*(code *)param_2[6])(local_1c8,0,fVar3);
        local_1e4 = (*(code *)param_2[6])(local_1c8,0,uVar4);
      }
      else if ((iVar1 == 1) || (0x3f < (longlong)(uVar8 + local_1e0))) {
        local_1e4 = (*(code *)param_2[6])(local_1c8,0,uVar4);
        local_1e8 = (float)(*(code *)param_2[6])(local_1c8,0,fVar3);
      }
      else {
        local_1f0 = &local_1e8;
        local_1f8 = &local_1e4;
        (*(code *)param_2[2])
                  (*param_2,*(undefined2 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
      }
      if (bVar2) {
        local_1e8 = fVar3 - local_1e8 * local_1e8;
      }
      else if (bVar5) {
        iVar6 = 2;
        do {
          fVar9 = (float)iVar6;
          local_1e8 = local_1e8 * local_1e8;
          iVar6 = iVar6 + -1;
        } while (*(float *)(param_1 + 0x48) < fVar9);
        local_1e8 = fVar3 - local_1e8;
      }
      fVar9 = local_1e8;
      if (*(char *)(param_1 + 0x58) != '\0') {
        local_1e8 = 1.0;
        fVar9 = fVar3;
      }
      if (*(char *)(param_1 + 0x59) != '\0') {
        local_1e4 = 0x3fc90fdb;
      }
      fVar9 = fVar9 * *(float *)(param_1 + 0x44);
      fVar10 = (float)FUN_180517200();
      *(float *)(local_1d8 + uVar8 * 4) = fVar10 * fVar9 + fVar12;
      fVar10 = (float)FUN_180517790();
      *(float *)(local_1d0 + uVar8 * 4) = fVar10 * fVar9 + fVar11;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar1);
  }
  return;
}



/* ===== 18042b640 FUN_18042b640 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18042b640(int *param_1,undefined8 *param_2,float *param_3)

{
  double dVar1;
  float fVar2;
  uint uVar3;
  char cVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float extraout_XMM0_Da;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar16;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  char local_2a8 [4];
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  undefined8 local_218;
  float local_210;
  float local_208 [2];
  double local_200;
  float local_1f8 [2];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  float *local_1a8;
  undefined8 *local_1a0;
  char *local_198;
  float *local_188;
  float *local_180;
  int *local_178;
  int **local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  float *local_158;
  undefined8 *local_150;
  char *local_148;
  int *local_138;
  float *local_130;
  int *local_128;
  float *local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  float local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_180919500 ^ (ulonglong)auStack_2d8;
  if (*param_1 == 0) {
    return 1;
  }
  if ((param_1[0xf] - 1U < 0x10) &&
     (((short)param_1[0xd] != 0x1c || (DAT_1808acea8 < (float)param_1[0x12])))) {
    puVar5 = (undefined8 *)
             FUN_18042a6c0(&local_1d8,(float)param_1[2] - (float)param_1[5],
                           (float)param_1[3] - (float)param_1[6],
                           (float)param_1[4] - (float)param_1[7]);
    fVar11 = DAT_1808acbd0;
    fVar12 = DAT_1808acba8;
    fVar45 = DAT_1808acb58;
    fVar44 = DAT_1808ac680;
    fVar53 = 0.0;
    uVar14 = *puVar5;
    local_218._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
    local_210 = *(float *)(puVar5 + 1);
    local_218 = uVar14;
    if ((local_218._4_4_ == 0.0) && ((float)uVar14 == 0.0)) {
      if (local_210 <= 0.0) {
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
        fVar49 = 0.0;
        uVar50 = 0;
        uVar51 = 0;
        uVar52 = 0;
        fVar43 = DAT_1808acaf4;
      }
      else {
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
        fVar49 = 0.0;
        uVar50 = 0;
        uVar51 = 0;
        uVar52 = 0;
        fVar43 = DAT_1808acba8;
      }
    }
    else {
      uVar14 = FUN_180516b00();
      uVar50 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uVar51 = (undefined4)extraout_XMM0_Qb;
      uVar52 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      if (local_218._4_4_ * local_218._4_4_ + (float)local_218 * (float)local_218 < 0.0) {
        FUN_18051af10();
      }
      uVar15 = FUN_180516b00();
      uVar46 = (undefined4)((ulonglong)uVar15 >> 0x20);
      uVar47 = (undefined4)extraout_XMM0_Qb_00;
      uVar48 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      fVar49 = ((float)uVar14 * fVar45) / fVar44;
      fVar43 = ((float)uVar15 * fVar45) / fVar44;
      if (fVar43 < 0.0) {
        fVar43 = fVar43 + fVar11;
      }
      if (fVar49 < 0.0) {
        fVar49 = fVar49 + fVar11;
      }
    }
    fVar2 = DAT_1808ac1f4;
    fVar13 = DAT_1808abfd0;
    auVar26._4_4_ = uVar46;
    auVar26._0_4_ = fVar43;
    auVar26._8_4_ = uVar47;
    auVar26._12_4_ = uVar48;
    auVar17._4_12_ = auVar26._4_12_;
    auVar17._0_4_ = fVar43 * DAT_1808abfd0 + DAT_1808ac1f4;
    fVar9 = (float)FUN_18053f0d0(auVar17._0_8_);
    fVar43 = fVar43 - fVar9 * fVar11;
    auVar18._4_4_ = uVar50;
    auVar18._0_4_ = fVar49;
    auVar18._8_4_ = uVar51;
    auVar18._12_4_ = uVar52;
    auVar19._4_12_ = auVar18._4_12_;
    auVar19._0_4_ = fVar49 * fVar13 + fVar2;
    local_2a0 = fVar43;
    fVar10 = (float)FUN_18053f0d0(auVar19._0_8_);
    fVar9 = DAT_1808aca94;
    local_234 = (float)param_1[0x13];
    local_230 = (float)param_1[0x14];
    local_220 = (float)param_1[0x15];
    fVar49 = fVar49 - fVar10 * fVar11;
    local_294 = fVar49;
    if (*param_1 == 1) {
      if (((char)param_1[1] == '\0') && (*(char *)((longlong)param_1 + 5) == '\0')) {
        uVar14 = (*(code *)param_2[4])(*param_2,CONCAT44(uVar46,fVar43));
        fVar43 = (float)uVar14;
        uVar46 = (undefined4)((ulonglong)uVar14 >> 0x20);
        fVar49 = (float)(*(code *)param_2[4])(*param_2,CONCAT44(uVar50,fVar49));
      }
      else {
        fVar43 = fVar43 - local_234;
        fVar49 = fVar49 - local_230;
      }
      if ((char)param_1[1] == '\0') {
        fVar53 = 0.0 - local_220;
      }
      local_2b8 = (undefined8 *)CONCAT44(local_2b8._4_4_,fVar53 + local_220);
      cVar4 = FUN_18042ac20(param_1,param_2,CONCAT44(uVar46,fVar43 + local_234),fVar49 + local_230);
      if (cVar4 != '\0') {
        *param_3 = fVar43;
        param_3[1] = fVar49;
        param_3[2] = fVar53;
        return 1;
      }
    }
    else {
      local_f8 = 0;
      local_f0 = 0.0;
      local_2a8[0] = '\0';
      if (((char)param_1[1] == '\0') && (*(char *)((longlong)param_1 + 5) == '\0')) {
        local_138 = &local_1c8;
        local_208[0] = (float)param_1[0xc] + DAT_1808ac864;
        local_1f8[0] = local_208[0] / _DAT_1808ac170;
        local_130 = local_1f8;
        lVar7 = 0;
        local_120 = local_208;
        local_23c = fVar49 * DAT_1808ac014;
        local_284 = local_2a0 * DAT_1808ac014;
        local_1c8 = param_1[5];
        local_1c4 = param_1[6];
        local_1d8 = param_1[9];
        local_1c0 = param_1[7];
        local_1d0 = param_1[0xb];
        local_1d4 = param_1[10];
        fVar44 = DAT_1808ac34c;
        local_128 = &local_1d8;
        do {
          local_270 = (float)(&DAT_1806c9d30)[lVar7];
          lVar8 = 0;
          do {
            fVar12 = local_2a0;
            uVar3 = _DAT_1808ade90;
            local_26c = (float)(&DAT_1806c9d30)[lVar8];
            local_2b8 = &local_268;
            local_258 = 0.0;
            local_268 = 0;
            uStack_260 = 0;
            FUN_18042a9a0(param_1,param_2,local_26c,local_270);
            local_188 = &local_26c;
            local_180 = &local_270;
            local_170 = &local_138;
            local_168 = &local_268;
            local_160 = &local_218;
            local_158 = &local_238;
            local_150 = &local_f8;
            local_148 = local_2a8;
            local_238 = 0.001;
            local_178 = param_1;
            fVar11 = (float)FUN_180516b00();
            fVar53 = (float)FUN_18053ed70();
            uVar50 = (*(code *)param_2[4])(*param_2,fVar11 * fVar9);
            uVar14 = (*(code *)param_2[4])(*param_2,local_294);
            uVar15 = (*(code *)param_2[4])(*param_2,fVar53 * fVar9 + fVar12);
            FUN_18042d100(&local_188,uVar15,uVar14,uVar50);
            if ((float)uStack_260 < fVar44) {
              fVar11 = (float)FUN_180516b00();
              fVar53 = (float)FUN_18053ed70();
              uVar50 = (*(code *)param_2[4])(*param_2,fVar11 * fVar9 + fVar45);
              uVar14 = (*(code *)param_2[4])(*param_2,local_294);
              uVar15 = (*(code *)param_2[4])(*param_2,fVar12 - fVar53 * fVar9);
              FUN_18042d100(&local_188,uVar15,uVar14,uVar50);
            }
            fVar11 = (float)FUN_180517200();
            fVar12 = DAT_1808abfa0;
            if (DAT_1808abfa0 <= (float)((uint)fVar11 & uVar3)) {
              fVar53 = (float)FUN_180516b00();
              fVar11 = (float)FUN_18053ed70((float)uStack_260 / fVar11);
              uVar50 = (*(code *)param_2[4])(*param_2,fVar53 * fVar9);
              uVar14 = (*(code *)param_2[4])(*param_2,fVar11 * fVar9 + local_294);
              uVar15 = (*(code *)param_2[4])(*param_2,local_2a0);
              FUN_18042d100(&local_188,uVar15,uVar14,uVar50);
            }
            fVar11 = (float)FUN_180517200();
            if ((float)((uint)fVar11 & uVar3) < fVar12) {
              fVar12 = local_2a0;
            }
            else {
              fVar12 = (float)FUN_180516b00();
              fVar11 = (float)FUN_18053ed70((float)uStack_260 / fVar11);
              uVar50 = (*(code *)param_2[4])(*param_2,fVar12 * fVar9 + fVar45);
              uVar14 = (*(code *)param_2[4])(*param_2,local_294 - fVar11 * fVar9);
              fVar12 = local_2a0;
              uVar15 = (*(code *)param_2[4])(*param_2,local_2a0);
              FUN_18042d100(&local_188,uVar15,uVar14,uVar50);
            }
            fVar11 = (float)FUN_180517790();
            if ((float)((uint)((fVar11 * uStack_260._4_4_) / local_258) & uVar3) <= fVar44) {
              fVar11 = (float)FUN_18051acf0();
              fVar53 = (float)FUN_18053ed70();
              FUN_180517790();
              FUN_180517200();
              fVar43 = (float)FUN_180516b00();
              uVar50 = (*(code *)param_2[4])(*param_2,0);
              uVar14 = (*(code *)param_2[4])(*param_2,(fVar43 + local_23c) * fVar9);
              uVar15 = (*(code *)param_2[4])(*param_2,(fVar11 + fVar53) * fVar9);
              FUN_18042d100(&local_188,uVar15,uVar14,uVar50);
            }
            fVar11 = local_268._4_4_;
            local_298 = local_294;
            fVar43 = (float)((uint)(float)local_268 ^ DAT_1808adec0);
            local_2a4 = 0.0;
            fVar53 = (float)local_268 * (float)local_268 + local_268._4_4_ * local_268._4_4_ +
                     fVar44;
            local_280 = fVar12;
            if (fVar53 < 0.0) {
              fVar49 = (float)FUN_18051af10();
            }
            else {
              fVar49 = SQRT(fVar53);
            }
            dVar40 = DAT_1808ac500;
            if ((fVar49 < DAT_1808abf54) || (DAT_1808accfc < fVar49)) {
              if (fVar53 == 0.0) {
                fVar43 = 0.0;
                fVar11 = 0.0;
                fVar49 = 0.0;
              }
              else {
                dVar16 = (double)fVar43;
                dVar1 = (double)fVar11;
                dVar42 = dVar16 * dVar16 + DAT_1808ac500 + dVar1 * dVar1;
                if (dVar42 < 0.0) {
                  dVar42 = (double)FUN_18051ff20();
                }
                else {
                  dVar42 = SQRT(dVar42);
                }
                dVar40 = dVar40 / dVar42;
                fVar49 = (float)dVar40;
                fVar43 = (float)(dVar16 * dVar40);
                fVar11 = (float)(dVar40 * dVar1);
              }
            }
            else {
              fVar49 = fVar44 / fVar49;
              fVar43 = fVar49 * fVar43;
              fVar11 = fVar49 * fVar11;
            }
            local_288 = (float)FUN_18053eb30();
            fVar53 = fVar43 - fVar49 * 0.0;
            fVar49 = fVar49 * 0.0 - fVar11;
            fVar43 = fVar11 * 0.0 + fVar43 * DAT_1808acd10;
            fVar11 = fVar53 * fVar53 + fVar49 * fVar49 + fVar43 * fVar43;
            if (fVar11 < 0.0) {
              fVar13 = (float)FUN_18051af10();
            }
            else {
              fVar13 = SQRT(fVar11);
            }
            if ((fVar13 < DAT_1808abf54) || (DAT_1808accfc < fVar13)) {
              if (fVar11 != 0.0) {
                dVar1 = (double)fVar49;
                dVar40 = (double)fVar43;
                dVar16 = (double)fVar53;
                dVar42 = dVar1 * dVar1 + dVar40 * dVar40 + dVar16 * dVar16;
                if (dVar42 < 0.0) {
                  dVar42 = (double)FUN_18051ff20();
                }
                else {
                  dVar42 = SQRT(dVar42);
                }
                dVar41 = DAT_1808ac500 / dVar42;
                fVar43 = (float)(dVar40 * dVar41);
                dVar40 = DAT_1808accc0;
                if (dVar42 <= DAT_1808accc0) {
                  dVar40 = dVar42;
                }
                fVar12 = (float)(dVar16 * dVar41);
                fVar13 = (float)dVar40;
                fVar49 = (float)(dVar1 * dVar41);
                goto LAB_18042bff4;
              }
LAB_18042c383:
              uVar51 = 0;
              uVar50 = 0;
              fVar11 = local_298;
            }
            else {
              fVar12 = fVar44 / fVar13;
              fVar43 = fVar12 * fVar43;
              fVar49 = fVar12 * fVar49;
              fVar12 = fVar12 * fVar53;
LAB_18042bff4:
              if (fVar13 < DAT_1808abf6c) {
                fVar12 = local_280;
                goto LAB_18042c383;
              }
              fVar11 = (float)FUN_180517790();
              local_228 = (float)FUN_180517200();
              local_22c = fVar44 - local_228;
              local_28c = fVar49 * fVar43 * local_22c;
              local_274 = local_28c - fVar11 * fVar12;
              local_28c = fVar11 * fVar12 + local_28c;
              local_200 = (double)CONCAT44(local_200._4_4_,fVar11 * fVar43);
              fVar44 = fVar43 * fVar43 * local_22c + local_228;
              local_278 = fVar49 * fVar49 * local_22c + local_228;
              local_250 = fVar12 * fVar43 * local_22c;
              local_290 = local_250 - fVar11 * fVar49;
              local_240 = fVar12 * fVar49 * local_22c;
              local_298 = fVar11 * fVar43 + local_240;
              local_248 = fVar44;
              pfVar6 = (float *)FUN_18042a830(&local_1b8,local_2a0,local_294,0);
              local_224 = *pfVar6;
              local_280 = pfVar6[6];
              local_27c = pfVar6[8];
              local_288 = pfVar6[1];
              local_244 = pfVar6[7];
              local_29c = pfVar6[9];
              local_24c = pfVar6[3] * local_28c + local_224 * fVar44 + local_280 * local_290;
              local_2a4 = pfVar6[4] * local_28c + local_288 * fVar44 + local_244 * local_290;
              fVar44 = local_2a4 * local_2a4 + local_24c * local_24c;
              if (fVar44 < 0.0) {
                fVar44 = (float)FUN_18051af10();
              }
              else {
                fVar44 = SQRT(fVar44);
              }
              if (fVar44 <= DAT_1808abfbc) {
                local_2a4 = 0.0;
                uVar14 = FUN_180516b00();
                uVar50 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar15 = FUN_180516b00();
                uVar51 = (undefined4)((ulonglong)uVar15 >> 0x20);
                fVar12 = (float)uVar15 * fVar9;
                fVar11 = (float)uVar14 * fVar9;
                fVar44 = DAT_1808ac34c;
              }
              else {
                uVar14 = FUN_180516b00();
                uVar50 = (undefined4)((ulonglong)uVar14 >> 0x20);
                uVar15 = FUN_180516b00();
                uVar51 = (undefined4)((ulonglong)uVar15 >> 0x20);
                local_2a4 = (float)FUN_180516b00();
                local_2a4 = local_2a4 * fVar9;
                fVar12 = (float)uVar15 * fVar9;
                fVar11 = (float)uVar14 * fVar9;
                fVar44 = DAT_1808ac34c;
              }
            }
            uVar52 = (*(code *)param_2[4])(*param_2,local_2a4);
            uVar14 = (*(code *)param_2[4])(*param_2,CONCAT44(uVar50,fVar11));
            uVar15 = (*(code *)param_2[4])(*param_2,CONCAT44(uVar51,fVar12));
            FUN_18042d100(&local_188,uVar15,uVar14,uVar52);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 3);
          lVar7 = lVar7 + 1;
          if (lVar7 == 3) {
            if (local_2a8[0] == '\0') {
              return 0;
            }
            local_2b8 = (undefined8 *)CONCAT44(local_2b8._4_4_,local_f0 + local_220);
            cVar4 = FUN_18042ac20(param_1,param_2,(float)local_f8 + local_234,
                                  local_f8._4_4_ + local_230);
            if (cVar4 == '\0') {
              return 0;
            }
            *(undefined8 *)param_3 = local_f8;
            param_3[2] = local_f0;
            return 1;
          }
        } while( true );
      }
      pfVar6 = (float *)FUN_18042a830(&local_1b8,CONCAT44(uVar46,fVar43),CONCAT44(uVar50,fVar49),0);
      local_270 = DAT_1808ac34c;
      local_28c = 0.0;
      local_248 = *pfVar6;
      local_240 = pfVar6[1];
      local_274 = pfVar6[2];
      local_24c = pfVar6[3];
      local_27c = pfVar6[4];
      local_298 = pfVar6[5];
      local_244 = pfVar6[6];
      local_250 = pfVar6[7];
      local_278 = pfVar6[8];
      local_1b8 = &local_1f0;
      local_1b0 = &local_218;
      local_1a8 = &local_280;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_1a0 = &local_f8;
      local_284 = (float)param_1[0x11] + (float)param_1[0x10];
      local_198 = local_2a8;
      local_280 = 0.001;
      local_1e0 = 0;
      do {
        local_26c = 0.0;
        local_200 = (double)local_28c;
        local_224 = (local_28c + fVar44) * DAT_1808aca94;
        do {
          fVar53 = local_26c;
          fVar43 = (float)FUN_180517200();
          fVar49 = fVar43 * fVar53 * local_284 * DAT_1808ac2cc;
          fVar43 = (float)FUN_180517790();
          fVar53 = fVar43 * fVar53 * local_284 * DAT_1808ac2cc;
          pfVar6 = (float *)FUN_18042a6c0(local_118,
                                          (local_248 - local_24c * fVar49) + local_244 * fVar53,
                                          (local_240 - local_27c * fVar49) + local_250 * fVar53,
                                          (local_274 - local_298 * fVar49) + local_278 * fVar53);
          fVar53 = pfVar6[1];
          fVar43 = *pfVar6;
          if ((fVar53 == 0.0) && (fVar43 == 0.0)) {
            if (pfVar6[2] <= 0.0) {
              uVar46 = 0;
              uVar47 = 0;
              uVar48 = 0;
              fVar53 = 0.0;
              uVar50 = 0;
              uVar51 = 0;
              uVar52 = 0;
              fVar12 = DAT_1808acaf4;
            }
            else {
              uVar46 = 0;
              uVar47 = 0;
              uVar48 = 0;
              fVar53 = 0.0;
              uVar50 = 0;
              uVar51 = 0;
              uVar52 = 0;
            }
          }
          else {
            uVar14 = FUN_180516b00();
            uVar50 = (undefined4)((ulonglong)uVar14 >> 0x20);
            uVar51 = (undefined4)extraout_XMM0_Qb_01;
            uVar52 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
            if (fVar43 * fVar43 + fVar53 * fVar53 < 0.0) {
              FUN_18051af10();
            }
            uVar15 = FUN_180516b00();
            uVar46 = (undefined4)((ulonglong)uVar15 >> 0x20);
            uVar47 = (undefined4)extraout_XMM0_Qb_02;
            uVar48 = (undefined4)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
            fVar53 = ((float)uVar14 * fVar45) / fVar44;
            fVar12 = ((float)uVar15 * fVar45) / fVar44;
            if (fVar12 < 0.0) {
              fVar12 = fVar12 + fVar11;
            }
            if (fVar53 < 0.0) {
              fVar53 = fVar53 + fVar11;
            }
          }
          auVar20._4_4_ = uVar46;
          auVar20._0_4_ = fVar12;
          auVar20._8_4_ = uVar47;
          auVar20._12_4_ = uVar48;
          auVar21._4_12_ = auVar20._4_12_;
          auVar21._0_4_ = fVar12 * fVar13 + fVar2;
          fVar44 = (float)FUN_18053f0d0(auVar21._0_8_);
          fVar12 = fVar12 - fVar44 * fVar11;
          auVar22._4_4_ = uVar50;
          auVar22._0_4_ = fVar53;
          auVar22._8_4_ = uVar51;
          auVar22._12_4_ = uVar52;
          auVar23._4_12_ = auVar22._4_12_;
          auVar23._0_4_ = fVar53 * fVar13 + fVar2;
          fVar44 = (float)FUN_18053f0d0(auVar23._0_8_);
          local_2b8 = &local_1f0;
          fVar53 = fVar53 - fVar44 * fVar11;
          FUN_18042a9a0(param_1,param_2,CONCAT44(uVar46,fVar12),fVar53);
          dVar40 = (double)FUN_18051a340((double)local_1f0._4_4_,(double)(float)local_1f0);
          fVar44 = local_224;
          fVar43 = (float)((dVar40 * _DAT_1808ac6d8) / DAT_1808ac588);
          uVar14 = FUN_180519fe0(fVar43 - local_224,fVar11);
          auVar54._8_4_ = (int)extraout_XMM0_Qb_03;
          auVar54._0_8_ = uVar14;
          auVar54._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
          local_2a4 = (float)uVar14;
          if (fVar43 <= fVar44) {
            fVar44 = fVar11;
            if (local_2a4 <= DAT_1808ace7c) goto LAB_18042c7b7;
          }
          else {
            fVar44 = DAT_1808ace80;
            if (fVar45 <= local_2a4) {
LAB_18042c7b7:
              auVar54._0_4_ = local_2a4 + fVar44;
              local_2a4 = auVar54._0_4_;
            }
          }
          pfVar6 = (float *)FUN_18042a830(&local_188,CONCAT44(uVar46,fVar12),CONCAT44(uVar50,fVar53)
                                          ,auVar54._0_4_);
          fVar43 = (float)local_1f0;
          fVar49 = local_1f0._4_4_;
          pfVar6 = (float *)FUN_18042a6c0(local_108,
                                          (*pfVar6 - (float)local_1f0 * pfVar6[3]) +
                                          local_1f0._4_4_ * pfVar6[6],
                                          (pfVar6[1] - (float)local_1f0 * pfVar6[4]) +
                                          local_1f0._4_4_ * pfVar6[7],
                                          (pfVar6[2] - (float)local_1f0 * pfVar6[5]) +
                                          local_1f0._4_4_ * pfVar6[8]);
          local_22c = pfVar6[1];
          local_288 = pfVar6[2];
          fVar44 = *pfVar6;
          FUN_18053eb30(local_22c * local_218._4_4_ + local_288 * local_210 +
                        fVar44 * (float)local_218);
          if (DAT_1808ac000 <= extraout_XMM0_Da) {
            fVar13 = DAT_1808abfd0;
          }
          else {
            if (extraout_XMM0_Da < local_270) {
              local_270 = extraout_XMM0_Da;
              cVar4 = FUN_18042cfc0(&local_1b8,CONCAT44(uVar46,fVar12),CONCAT44(uVar50,fVar53),
                                    auVar54._0_4_);
              if (cVar4 != '\0') break;
              fVar49 = local_1f0._4_4_;
              fVar43 = (float)local_1f0;
            }
            fVar13 = DAT_1808abfd0;
            auVar24._4_4_ = uVar46;
            auVar24._0_4_ = fVar12;
            auVar24._8_4_ = uVar47;
            auVar24._12_4_ = uVar48;
            auVar25._4_12_ = auVar24._4_12_;
            auVar25._0_4_ = fVar12 * DAT_1808abfd0 + fVar2;
            fVar9 = (float)FUN_18053f0d0(auVar25._0_8_);
            fVar9 = fVar12 - fVar9 * fVar11;
            if (fVar9 <= fVar45) {
              auVar26 = ZEXT416((uint)DAT_1808ace7c);
              if (DAT_1808ace7c <= fVar9) {
                auVar26 = ZEXT416((uint)fVar9);
              }
            }
            else {
              auVar26 = ZEXT416((uint)fVar45);
            }
            auVar27._4_12_ = auVar26._4_12_;
            auVar27._0_4_ = auVar26._0_4_ + auVar26._0_4_;
            local_29c = (float)FUN_18053f0d0(auVar27._0_8_);
            local_29c = local_29c * fVar2;
            auVar28._4_4_ = uVar50;
            auVar28._0_4_ = fVar53;
            auVar28._8_4_ = uVar51;
            auVar28._12_4_ = uVar52;
            auVar29._4_12_ = auVar28._4_12_;
            auVar29._0_4_ = fVar53 * fVar13 + fVar2;
            fVar13 = (float)FUN_18053f0d0(auVar29._0_8_);
            fVar13 = fVar53 - fVar13 * fVar11;
            if (fVar13 <= fVar45) {
              auVar26 = ZEXT416((uint)DAT_1808ace7c);
              if (DAT_1808ace7c <= fVar13) {
                auVar26 = ZEXT416((uint)fVar13);
              }
            }
            else {
              auVar26 = ZEXT416((uint)fVar45);
            }
            auVar30._4_12_ = auVar26._4_12_;
            auVar30._0_4_ = auVar26._0_4_ + auVar26._0_4_;
            local_290 = (float)FUN_18053f0d0(auVar30._0_8_);
            local_23c = local_29c + DAT_1808ac1e8;
            local_290 = local_290 * fVar2;
            local_238 = local_290 + DAT_1808ac1e8;
            dVar40 = (double)fVar49 * (double)fVar49 + (double)fVar43 * (double)fVar43;
            if (dVar40 < 0.0) {
              dVar40 = (double)FUN_18051ff20();
            }
            else {
              dVar40 = SQRT(dVar40);
            }
            dVar16 = (double)FUN_180519a60();
            fVar49 = (float)(dVar16 * dVar40);
            dVar16 = (double)FUN_1805194f0();
            fVar43 = (float)(dVar16 * dVar40);
            pfVar6 = (float *)FUN_18042a6c0(&local_268,
                                            (local_248 - fVar49 * local_24c) + fVar43 * local_244,
                                            (local_240 - fVar49 * local_27c) + fVar43 * local_250,
                                            (local_274 - fVar49 * local_298) + fVar43 * local_278);
            fVar43 = pfVar6[1];
            local_228 = pfVar6[2];
            fVar49 = *pfVar6;
            if ((fVar43 == 0.0) && (fVar49 == 0.0)) {
              if (local_228 <= 0.0) {
                uVar46 = 0;
                uVar47 = 0;
                uVar48 = 0;
                fVar49 = 0.0;
                uVar50 = 0;
                uVar51 = 0;
                uVar52 = 0;
                fVar43 = DAT_1808acaf4;
              }
              else {
                uVar46 = 0;
                uVar47 = 0;
                uVar48 = 0;
                fVar49 = 0.0;
                uVar50 = 0;
                uVar51 = 0;
                uVar52 = 0;
                fVar43 = DAT_1808acba8;
              }
            }
            else {
              uVar14 = FUN_180516b00();
              uVar50 = (undefined4)((ulonglong)uVar14 >> 0x20);
              uVar51 = (undefined4)extraout_XMM0_Qb_04;
              uVar52 = (undefined4)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
              if (fVar49 * fVar49 + fVar43 * fVar43 < 0.0) {
                FUN_18051af10();
              }
              uVar15 = FUN_180516b00();
              uVar46 = (undefined4)((ulonglong)uVar15 >> 0x20);
              uVar47 = (undefined4)extraout_XMM0_Qb_05;
              uVar48 = (undefined4)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
              fVar49 = ((float)uVar14 * fVar45) / DAT_1808ac680;
              fVar43 = ((float)uVar15 * fVar45) / DAT_1808ac680;
              if (fVar43 < 0.0) {
                fVar43 = fVar43 + fVar11;
              }
              if (fVar49 < 0.0) {
                fVar49 = fVar49 + fVar11;
              }
            }
            auVar31._4_4_ = uVar46;
            auVar31._0_4_ = fVar43;
            auVar31._8_4_ = uVar47;
            auVar31._12_4_ = uVar48;
            auVar32._4_12_ = auVar31._4_12_;
            auVar32._0_4_ = fVar43 * DAT_1808abfd0 + fVar2;
            fVar13 = (float)FUN_18053f0d0(auVar32._0_8_);
            auVar26 = ZEXT416((uint)local_23c);
            fVar43 = fVar43 - fVar13 * fVar11;
            if ((fVar43 <= local_23c) && (auVar26 = ZEXT416((uint)local_29c), local_29c <= fVar43))
            {
              auVar26 = ZEXT416((uint)fVar43);
            }
            auVar33._4_4_ = uVar50;
            auVar33._0_4_ = fVar49;
            auVar33._8_4_ = uVar51;
            auVar33._12_4_ = uVar52;
            auVar34._4_12_ = auVar33._4_12_;
            auVar34._0_4_ = fVar49 * DAT_1808abfd0 + fVar2;
            fVar13 = (float)FUN_18053f0d0(auVar34._0_8_);
            fVar43 = DAT_1808abfd0;
            fVar49 = fVar49 - fVar13 * fVar11;
            fVar13 = local_238;
            if ((fVar49 <= local_238) && (fVar13 = local_290, local_290 <= fVar49)) {
              fVar13 = fVar49;
            }
            auVar35._4_12_ = auVar26._4_12_;
            auVar35._0_4_ = auVar26._0_4_ * DAT_1808abfd0 + fVar2;
            fVar49 = (float)FUN_18053f0d0(auVar35._0_8_);
            fVar49 = auVar26._0_4_ - fVar49 * fVar11;
            if (fVar49 <= fVar45) {
              auVar17 = ZEXT416((uint)DAT_1808ace7c);
              if (DAT_1808ace7c <= fVar49) {
                auVar17 = ZEXT416((uint)fVar49);
              }
            }
            else {
              auVar17 = ZEXT416((uint)fVar45);
            }
            auVar36._4_12_ = auVar17._4_12_;
            auVar36._0_4_ = auVar17._0_4_ + auVar17._0_4_;
            fVar49 = (float)FUN_18053f0d0(auVar36._0_8_);
            if (fVar49 * fVar2 == local_29c) {
              fVar43 = (float)FUN_18053f0d0(fVar13 * fVar43 + fVar2);
              fVar43 = fVar13 - fVar43 * fVar11;
              if (fVar43 <= fVar45) {
                auVar17 = ZEXT416((uint)DAT_1808ace7c);
                if (DAT_1808ace7c <= fVar43) {
                  auVar17 = ZEXT416((uint)fVar43);
                }
              }
              else {
                auVar17 = ZEXT416((uint)fVar45);
              }
              auVar37._4_12_ = auVar17._4_12_;
              auVar37._0_4_ = auVar17._0_4_ + auVar17._0_4_;
              fVar43 = (float)FUN_18053f0d0(auVar37._0_8_);
              if ((fVar43 * fVar2 == local_290) &&
                 (cVar4 = FUN_18042cfc0(&local_1b8,auVar26._0_8_,fVar13,local_2a4), cVar4 != '\0'))
              break;
            }
            fVar43 = local_22c;
            if ((local_22c == 0.0) && (fVar44 == 0.0)) {
              if (local_288 <= 0.0) {
                fVar43 = 0.0;
                fVar44 = DAT_1808acaf4;
              }
              else {
                fVar43 = 0.0;
                fVar44 = DAT_1808acba8;
              }
            }
            else {
              fVar49 = (float)FUN_180516b00();
              if (fVar44 * fVar44 + fVar43 * fVar43 < 0.0) {
                FUN_18051af10();
              }
              fVar44 = (float)FUN_180516b00();
              fVar44 = (fVar44 * fVar45) / DAT_1808ac680;
              fVar43 = (fVar49 * fVar45) / DAT_1808ac680;
              if (fVar44 < 0.0) {
                fVar44 = fVar44 + fVar11;
              }
              if (fVar43 < 0.0) {
                fVar43 = fVar43 + fVar11;
              }
            }
            fVar13 = DAT_1808abfd0;
            fVar12 = (local_2a0 - fVar44) + fVar12;
            fVar53 = (local_294 - fVar43) + fVar53;
            fVar43 = (float)FUN_18053f0d0(fVar12 * DAT_1808abfd0 + fVar2);
            fVar44 = local_29c;
            fVar12 = fVar12 - fVar43 * fVar11;
            fVar43 = local_23c;
            if ((fVar12 <= local_23c) && (fVar43 = local_29c, local_29c <= fVar12)) {
              fVar43 = fVar12;
            }
            fVar49 = (float)FUN_18053f0d0(fVar53 * fVar13 + fVar2);
            fVar12 = local_290;
            fVar53 = fVar53 - fVar49 * fVar11;
            fVar49 = local_238;
            if ((fVar53 <= local_238) && (fVar49 = local_290, local_290 <= fVar53)) {
              fVar49 = fVar53;
            }
            fVar53 = (float)FUN_18053f0d0(fVar43 * fVar13 + fVar2);
            fVar53 = fVar43 - fVar53 * fVar11;
            if (fVar53 <= fVar45) {
              auVar26 = ZEXT416((uint)DAT_1808ace7c);
              if (DAT_1808ace7c <= fVar53) {
                auVar26 = ZEXT416((uint)fVar53);
              }
            }
            else {
              auVar26 = ZEXT416((uint)fVar45);
            }
            auVar38._4_12_ = auVar26._4_12_;
            auVar38._0_4_ = auVar26._0_4_ + auVar26._0_4_;
            FUN_18053f0d0(auVar38._0_8_);
            if (extraout_XMM0_Da_00 * fVar2 == fVar44) {
              fVar44 = (float)FUN_18053f0d0(fVar49 * fVar13 + fVar2);
              fVar44 = fVar49 - fVar44 * fVar11;
              if (fVar44 <= fVar45) {
                auVar26 = ZEXT416((uint)DAT_1808ace7c);
                if (DAT_1808ace7c <= fVar44) {
                  auVar26 = ZEXT416((uint)fVar44);
                }
              }
              else {
                auVar26 = ZEXT416((uint)fVar45);
              }
              auVar39._4_12_ = auVar26._4_12_;
              auVar39._0_4_ = auVar26._0_4_ + auVar26._0_4_;
              FUN_18053f0d0(auVar39._0_8_);
              if ((extraout_XMM0_Da_01 * fVar2 == fVar12) &&
                 (cVar4 = FUN_18042cfc0(&local_1b8,fVar43,fVar49,local_2a4), cVar4 != '\0')) break;
            }
          }
          local_26c = local_26c + DAT_1808ac090;
          fVar12 = DAT_1808acba8;
          fVar44 = DAT_1808ac680;
        } while (local_26c < DAT_1808ac34c);
        local_28c = local_28c + _DAT_1808ac0b8;
        fVar12 = DAT_1808acba8;
        fVar13 = DAT_1808abfd0;
        fVar44 = DAT_1808ac680;
      } while (local_28c < DAT_1808ac7d0);
      if (local_2a8[0] != '\0') {
        fVar45 = local_f8._4_4_ - local_230;
        fVar12 = local_f0 - local_220;
        fVar44 = (float)local_f8 - local_234;
        local_2b8 = (undefined8 *)CONCAT44(local_2b8._4_4_,fVar12 + local_220);
        cVar4 = FUN_18042ac20(param_1,param_2,fVar44 + local_234,fVar45 + local_230);
        if (cVar4 != '\0') {
          *param_3 = fVar44;
          param_3[1] = fVar45;
          param_3[2] = fVar12;
          return 1;
        }
      }
    }
  }
  return 0;
}



/* ===== 18042cfc0 FUN_18042cfc0 ===== */

ulonglong FUN_18042cfc0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                       )

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 local_88 [16];
  undefined1 local_78 [112];
  
  pfVar3 = (float *)FUN_18042a830(local_78);
  fVar1 = *(float *)*param_1;
  fVar6 = ((float *)*param_1)[1];
  pfVar4 = (float *)FUN_18042a6c0(local_88,(*pfVar3 - fVar1 * pfVar3[3]) + fVar6 * pfVar3[6],
                                  (pfVar3[1] - fVar1 * pfVar3[4]) + fVar6 * pfVar3[7],
                                  (pfVar3[2] - fVar1 * pfVar3[5]) + fVar6 * pfVar3[8]);
  fVar1 = DAT_1808abf60;
  pfVar3 = (float *)param_1[1];
  fVar6 = (pfVar3[1] - pfVar4[1]) * (pfVar3[1] - pfVar4[1]) +
          (*pfVar3 - *pfVar4) * (*pfVar3 - *pfVar4) +
          (pfVar3[2] - pfVar4[2]) * (pfVar3[2] - pfVar4[2]);
  if (fVar6 < *(float *)param_1[2]) {
    puVar2 = (undefined4 *)param_1[3];
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    *(undefined1 *)param_1[4] = 1;
    pfVar3 = (float *)param_1[2];
    *pfVar3 = fVar6;
    uVar5 = CONCAT71((int7)((ulonglong)pfVar3 >> 8),fVar6 < fVar1);
  }
  else {
    uVar5 = (ulonglong)param_1[2] & 0xffffffffffffff00;
  }
  return uVar5;
}



/* ===== 18042d100 FUN_18042d100 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18042d100(undefined8 *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_e8 [16];
  undefined1 local_d8 [208];
  
  fVar1 = DAT_1808ac1f4;
  fVar7 = DAT_1808abfd0;
  fVar6 = (float)FUN_18053f0d0(param_2 * DAT_1808abfd0 + DAT_1808ac1f4);
  fVar11 = DAT_1808ace7c;
  fVar14 = DAT_1808acbd0;
  fVar12 = DAT_1808acb58;
  fVar6 = param_2 - fVar6 * DAT_1808acbd0;
  if (fVar6 <= DAT_1808acb58) {
    fVar13 = DAT_1808ace7c;
    if (DAT_1808ace7c <= fVar6) {
      fVar13 = fVar6;
    }
  }
  else {
    fVar13 = DAT_1808acb58;
  }
  fVar6 = (float)FUN_18053f0d0(fVar13 + fVar13);
  if (fVar6 * fVar1 == *(float *)*param_1) {
    fVar7 = (float)FUN_18053f0d0(param_3 * fVar7 + fVar1);
    fVar7 = param_3 - fVar7 * fVar14;
    if ((fVar7 <= fVar12) && (fVar12 = fVar11, fVar11 <= fVar7)) {
      fVar12 = fVar7;
    }
    fVar7 = (float)FUN_18053f0d0(fVar12 + fVar12);
    if (fVar7 * fVar1 == *(float *)param_1[1]) {
      pfVar4 = (float *)FUN_18042a830(local_d8,param_2,param_3,param_4);
      fVar7 = *pfVar4;
      fVar1 = pfVar4[1];
      fVar12 = pfVar4[2];
      if (*(char *)(param_1[2] + 6) == '\0') {
        puVar2 = (undefined8 *)param_1[3];
        pfVar5 = (float *)*puVar2;
        pfVar3 = (float *)puVar2[2];
        fVar14 = *pfVar3;
        fVar11 = *(float *)puVar2[1];
        fVar6 = pfVar3[1];
        fVar13 = pfVar3[2];
        fVar9 = fVar14 - (*pfVar5 - fVar11 * fVar7);
        fVar10 = fVar13 - (fVar11 * pfVar4[9] + pfVar5[2]);
        fVar8 = fVar6 - (pfVar5[1] - fVar11 * fVar1);
        fVar11 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
        if (fVar11 < 0.0) {
          fVar11 = (float)FUN_18051af10(fVar11);
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        if (fVar10 * fVar12 + fVar8 * fVar1 + fVar9 * fVar7 < fVar11 * _DAT_1808ac2e4) {
          return;
        }
        fVar6 = fVar6 - pfVar5[1];
        fVar13 = fVar13 - pfVar5[2];
        fVar14 = fVar14 - *pfVar5;
        fVar11 = fVar13 * fVar13 + fVar6 * fVar6 + fVar14 * fVar14;
        if (fVar11 < 0.0) {
          fVar11 = (float)FUN_18051af10(fVar11);
        }
        else {
          fVar11 = SQRT(fVar11);
        }
        if ((*(float *)puVar2[3] < fVar11) &&
           (fVar11 * _DAT_1808ac170 <=
            (float)((uint)(fVar13 * fVar12 + fVar6 * fVar1 + fVar14 * fVar7) ^ DAT_1808adec0))) {
          return;
        }
      }
      fVar14 = *(float *)param_1[4];
      fVar11 = ((float *)param_1[4])[1];
      pfVar5 = (float *)FUN_18042a6c0(local_e8,(fVar7 - fVar14 * pfVar4[3]) + fVar11 * pfVar4[6],
                                      (fVar1 - fVar14 * pfVar4[4]) + fVar11 * pfVar4[7],
                                      (fVar12 - fVar14 * pfVar4[5]) + fVar11 * pfVar4[8]);
      pfVar4 = (float *)param_1[5];
      fVar7 = (pfVar5[1] - pfVar4[1]) * (pfVar5[1] - pfVar4[1]) +
              (*pfVar5 - *pfVar4) * (*pfVar5 - *pfVar4) +
              (pfVar5[2] - pfVar4[2]) * (pfVar5[2] - pfVar4[2]);
      if (fVar7 < *(float *)param_1[6]) {
        pfVar4 = (float *)param_1[7];
        *pfVar4 = param_2;
        pfVar4[1] = param_3;
        pfVar4[2] = param_4;
        *(undefined1 *)param_1[8] = 1;
        *(float *)param_1[6] = fVar7;
      }
    }
  }
  return;
}



/* ===== 18042d510 FUN_18042d510 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18042d510(undefined8 param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  ulonglong uVar3;
  
  if (DAT_1811118f0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018042d527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*DAT_1811118f0)();
    return uVar3;
  }
  iVar1 = FUN_18042ad50();
  fVar2 = DAT_1808ac344;
  if ((float)iVar1 * _DAT_1808abf70 <= DAT_1808ac344) {
    fVar2 = (float)iVar1 * _DAT_1808abf70;
  }
  return (ulonglong)(uint)(fVar2 * (param_3 - param_2) + param_2);
}



/* ===== 18042d560 FUN_18042d560 ===== */

undefined8
FUN_18042d560(undefined2 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  (*DAT_1811118e8)(DAT_1811118e0,param_1,param_2,param_3,param_4,param_5);
  return 1;
}



/* ===== 18042d5a0 FUN_18042d5a0 ===== */

void FUN_18042d5a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  if (DAT_180961ca0 == (code *)0x0) {
    return;
  }
  (*DAT_180961ca0)(0,&local_18);
  return;
}



/* ===== 18042d5e0 FUN_18042d5e0 ===== */

void FUN_18042d5e0(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  bool bVar2;
  
  if ((DAT_1811118e8 != 0) &&
     (cVar1 = FUN_18042d560(param_2,param_3,param_4,param_5,param_6), cVar1 != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  bVar2 = DAT_180cd1ac5 == '\0';
  *param_5 = 0;
  *param_6 = 0;
  if (bVar2) {
    DAT_180cd1ac5 = '\x01';
    FUN_1802b2560(
                 "[solve] spread pattern lookup unavailable: no Remove Spread shots with pattern pellets"
                 );
  }
  return;
}



/* ===== 18042d660 FUN_18042d660 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042d660(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180919500 ^ (ulonglong)auStack_98;
  lVar1 = param_1[1];
  local_1c = 0;
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  local_58 = *puVar2;
  local_50 = *(undefined4 *)((longlong)puVar2 + 0x6c);
  local_4c = puVar2[0xe];
  uStack_44 = puVar2[0xf];
  local_60 = *(undefined4 *)(param_2 + 1);
  local_3c = puVar2[0x10];
  uStack_34 = puVar2[0x11];
  local_78 = &local_68;
  local_2c = *(undefined4 *)(puVar2 + 0x12);
  uStack_28 = *(undefined4 *)((longlong)puVar2 + 0x94);
  uStack_24 = *(undefined4 *)(puVar2 + 0x13);
  uStack_20 = *(undefined4 *)((longlong)puVar2 + 0x9c);
  local_68 = *param_2;
  FUN_18046e360(*param_1 + 0x100,&local_58,*(longlong *)(lVar1 + 0x28) + 0x80,
                *(undefined8 *)(lVar1 + 0x18));
  return;
}



/* ===== 18042d730 FUN_18042d730 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18042d730(undefined1 *param_1,int param_2,undefined8 param_3,undefined8 *param_4,
                       undefined8 *param_5,undefined1 param_6)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  HMODULE hModule;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  char *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  code *local_120;
  code *local_118;
  code *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  code *local_f8;
  int local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  undefined2 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  uVar6 = DAT_180919500 ^ (ulonglong)auStack_178;
  if (param_2 == 0) {
    return CONCAT71((int7)(uVar6 >> 8),1);
  }
  local_148 = param_3;
  local_78 = uVar6;
  if ((DAT_180cd1b2c == '\0') && (DAT_1811089f0 != 0)) {
    DAT_180cd1b2c = '\x01';
    DAT_1811118d4 = FUN_18038eaf0("CCSWeaponBaseVData","m_nNumBullets");
    DAT_1811118d0 = FUN_18038eaf0("C_BaseEntity","m_pGameSceneNode");
    uVar6 = FUN_18038eaf0("CGameSceneNode","m_flAbsScale");
    DAT_1811118cc = (uint)uVar6;
  }
  if (DAT_180cd1ac6 == '\0') {
    DAT_180cd1ac6 = '\x01';
    hModule = GetModuleHandleA("tier0.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1811118d8 =
           GetProcAddress(hModule,
                          "?SetSeed@?$CUniformRandomStreamImpl@VCThreadNullMutex@@@@QEAAXH@Z");
      DAT_1811118f0 =
           GetProcAddress(hModule,
                          "?RandomFloat@?$CUniformRandomStreamImpl@VCThreadNullMutex@@@@QEAAMMM@Z");
    }
    if ((DAT_1811118d8 == (FARPROC)0x0) || (pcVar10 = "ok", DAT_1811118f0 == (FARPROC)0x0)) {
      pcVar10 = "MISSING (plain ran1 used)";
    }
    uVar6 = FUN_1802b2560("[solve] tier0 CUniformRandomStream %s",pcVar10);
  }
  if ((DAT_180cd1b2d == '\0') && (DAT_180961ca8 != (char *)0x0)) {
    DAT_180cd1b2d = '\x01';
    pcVar10 = DAT_180961ca8;
    while( true ) {
      if (((DAT_180961ca8 + 0x600 <= pcVar10) || ((char *)0x7ffffffefffe < pcVar10 + -0x10000)) ||
         ((char *)0x7ffffffefffe < pcVar10 + -0xfff1)) goto LAB_18042d904;
      if ((((*pcVar10 == 'H') && (pcVar10[1] == -0x73)) &&
          ((pcVar10[2] == '\r' && ((pcVar10[7] == 'E' && (pcVar10[8] == '\x03')))))) &&
         ((pcVar10[9] == -0x34 && (pcVar10[10] == -0x18)))) break;
      pcVar10 = pcVar10 + 1;
    }
    DAT_1811118e0 = pcVar10 + (longlong)*(int *)(pcVar10 + 3) + 7;
    DAT_1811118e8 = pcVar10 + (longlong)*(int *)(pcVar10 + 0xb) + 0xf;
LAB_18042d904:
    pcVar10 = "NOT FOUND";
    if (DAT_1811118e8 != (char *)0x0) {
      pcVar10 = "ok";
    }
    uVar6 = FUN_1802b2560("[solve] spread pattern lookup %s",pcVar10);
  }
  puVar7 = (undefined8 *)param_4[3];
  if (((puVar7 == (undefined8 *)0x0) || (param_4[2] == 0)) || (lVar1 = param_4[5], lVar1 == 0))
  goto LAB_18042d95d;
  if (DAT_180961ca0 == 0) {
    if (DAT_180cd1ac7 == '\0') {
      DAT_180cd1ac7 = '\x01';
      uVar6 = FUN_1802b2560("[solve] game seed function missing: no Remove Spread shots");
    }
    goto LAB_18042d95d;
  }
  local_ac = 1;
  local_b8 = 0.0;
  local_b4 = 0;
  local_b0 = 0;
  local_a4 = 0;
  local_9c = 0;
  local_94 = 0;
  local_90 = 0;
  local_8e = 0;
  local_e4 = *param_1;
  local_e3 = param_1[1];
  local_c8 = 0;
  uStack_c0 = 0;
  local_e0 = *param_4;
  local_d8 = *(undefined4 *)(param_4 + 1);
  local_e2 = param_6;
  local_d4 = *puVar7;
  local_cc = *(undefined4 *)(puVar7 + 1);
  uVar14 = 0;
  local_e8 = param_2;
  uVar6 = FUN_180447e30(param_1 + 0x10);
  local_b4 = *(undefined2 *)(param_1 + 0x7c8);
  local_b0 = *(undefined4 *)(param_1 + 0x7a0);
  local_c8 = CONCAT44(local_c8._4_4_,(int)uVar6);
  local_158 = uVar6;
  if (((*(longlong *)(param_1 + 0x7c0) == 0) || (DAT_1811118d4 == 0)) ||
     (0x7ffffffefffe < (*(longlong *)(param_1 + 0x7c0) + (ulonglong)DAT_1811118d4) - 0x10000)) {
    local_ac = local_ac & 0xffffffff00000000;
  }
  else {
    uVar5 = FUN_180011200();
    local_ac = CONCAT44(local_ac._4_4_,uVar5);
  }
  uVar5 = FUN_18047d4f0(param_1 + 0x768);
  local_ac = CONCAT44(uVar5,(undefined4)local_ac);
  FUN_18047d090();
  uVar9 = *(uint *)(param_1 + 0x7a0);
  if (1 < uVar9) {
    uVar9 = 0;
  }
  if ((*(longlong *)(param_1 + 0x7c0) != 0) && (DAT_1811142d0 != 0)) {
    uVar14 = FUN_18000f3d0((ulonglong)(uVar9 * 4) + *(longlong *)(param_1 + 0x7c0) +
                           (ulonglong)DAT_1811142d0);
  }
  local_a4 = CONCAT44(*(undefined4 *)(param_1 + 0x794),uVar14);
  puVar7 = (undefined8 *)FUN_18045a980(&local_158,param_1 + 0x10,uVar6 & 0xffffffff,local_158._4_4_)
  ;
  fVar11 = DAT_1808ac34c;
  local_94 = *(undefined4 *)(puVar7 + 1);
  local_9c = *puVar7;
  if (((((DAT_1811118d0 != 0) && (uVar6 = (ulonglong)DAT_1811118cc, DAT_1811118cc != 0)) &&
       (*(longlong *)param_4[2] != 0)) &&
      (((*(longlong *)param_4[2] + (ulonglong)DAT_1811118d0) - 0x10000 < 0x7ffffffeffff &&
       (lVar8 = FUN_18000f3a0(), lVar8 != 0)))) && ((lVar8 + uVar6) - 0x10000 < 0x7ffffffeffff)) {
    fVar11 = (float)FUN_18000f3d0();
  }
  fVar2 = DAT_1808ac1f4;
  local_c8 = CONCAT44((*(float *)(lVar1 + 0x2c) + *(float *)(lVar1 + 0x20)) * DAT_1808ac1f4 * fVar11
                      + *(float *)(lVar1 + 0x14),(undefined4)local_c8);
  uStack_c0 = CONCAT44((*(float *)(lVar1 + 0x34) + *(float *)(lVar1 + 0x28)) * DAT_1808ac1f4 *
                       fVar11 + *(float *)(lVar1 + 0x1c),
                       (*(float *)(lVar1 + 0x30) + *(float *)(lVar1 + 0x24)) * DAT_1808ac1f4 *
                       fVar11 + *(float *)(lVar1 + 0x18));
  fVar11 = *(float *)(lVar1 + 0x30) - *(float *)(lVar1 + 0x24);
  fVar13 = *(float *)(lVar1 + 0x34) - *(float *)(lVar1 + 0x28);
  fVar12 = *(float *)(lVar1 + 0x2c) - *(float *)(lVar1 + 0x20);
  fVar11 = fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12;
  if (fVar11 < 0.0) {
    fVar11 = (float)FUN_18051af10(fVar11);
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  local_b8 = fVar11 * fVar2;
  if (DAT_180c3ac58 == 0) {
    if (DAT_180c3ac60 == '\0') {
      DAT_180c3ac58 = FUN_180264b70(PTR_s_weapon_debug_max_inaccuracy_180c3ac50);
      DAT_180c3ac60 = DAT_180c3ac58 == 0;
      if (DAT_180c3ac58 != 0) goto LAB_18042dcce;
    }
LAB_18042dcde:
    uVar4 = 0;
  }
  else {
LAB_18042dcce:
    cVar3 = FUN_180264d70(DAT_180c3ac58);
    if (cVar3 == '\0') goto LAB_18042dcde;
    uVar4 = 1;
  }
  local_90 = CONCAT11(local_90._1_1_,uVar4);
  if (DAT_180c3ac70 == 0) {
    if (DAT_180c3ac78 == '\0') {
      DAT_180c3ac70 = FUN_180264b70(PTR_s_weapon_debug_inaccuracy_only_up_180c3ac68);
      DAT_180c3ac78 = DAT_180c3ac70 == 0;
      if (DAT_180c3ac70 != 0) goto LAB_18042dd19;
    }
LAB_18042dd29:
    uVar4 = 0;
  }
  else {
LAB_18042dd19:
    cVar3 = FUN_180264d70(DAT_180c3ac70);
    if (cVar3 == '\0') goto LAB_18042dd29;
    uVar4 = 1;
  }
  local_90 = CONCAT11(uVar4,(undefined1)local_90);
  if (DAT_180c3ac88 == 0) {
    if (DAT_180c3ac90 == '\0') {
      DAT_180c3ac88 = FUN_180264b70(PTR_s_weapon_accuracy_shotgun_spread_p_180c3ac80);
      DAT_180c3ac90 = DAT_180c3ac88 == 0;
      if (DAT_180c3ac88 != 0) goto LAB_18042dd64;
    }
LAB_18042dd74:
    local_8e = 0;
  }
  else {
LAB_18042dd64:
    cVar3 = FUN_180264d70(DAT_180c3ac88);
    if (cVar3 == '\0') goto LAB_18042dd74;
    local_8e = 1;
  }
  local_140 = local_148;
  local_128 = &local_140;
  local_120 = FUN_18042d5a0;
  local_118 = FUN_18042d5e0;
  local_110 = FUN_18042d660;
  local_108 = &LAB_18042d720;
  local_100 = &LAB_18042d4e0;
  local_f8 = FUN_18042d510;
  local_88 = 0;
  local_80 = 0;
  local_130 = '\0';
  local_138 = param_4;
  uVar6 = FUN_18042b640(&local_e8,&local_128,&local_88);
  if (((char)uVar6 != '\0') && (local_130 == '\0')) {
    *param_5 = local_88;
    *(undefined4 *)(param_5 + 1) = local_80;
    *(undefined1 *)((longlong)param_5 + 0xc) = 1;
    return CONCAT71((uint7)(uint3)((uint)local_80 >> 8),1);
  }
LAB_18042d95d:
  return uVar6 & 0xffffffffffffff00;
}



/* ===== 18042de30 FUN_18042de30 ===== */

void FUN_18042de30(void)

{
  if ((DAT_181111940 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181111940 = '\x01';
    DAT_181111944 = FUN_18038eaf0("C_BaseEntity","m_fFlags");
    DAT_181111948 = FUN_18038eaf0("C_BaseEntity","m_vecAbsVelocity");
    DAT_18111194c = FUN_18038eaf0("CCSWeaponBaseVData","m_WeaponType");
    DAT_181111950 = FUN_18038eaf0("C_CSPlayerPawn","m_angEyeAngles");
    if (DAT_181111950 == 0) {
      DAT_181111950 = FUN_18038eaf0("C_CSPlayerPawnBase","m_angEyeAngles");
    }
    DAT_181111954 = FUN_18038eaf0("C_BaseModelEntity","m_vecViewOffset");
    DAT_181111958 = FUN_18038eaf0("C_BasePlayerPawn","m_hController");
  }
  return;
}



/* ===== 18042df10 FUN_18042df10 ===== */

void FUN_18042df10(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 local_18 [16];
  
  puVar5 = (undefined8 *)
           FUN_18047da70(local_18,param_2 + 0x758,*(undefined4 *)(param_1 + 0x60),
                         *(undefined1 *)(param_1 + 0x52));
  uVar3 = *(undefined2 *)((longlong)puVar5 + 0xd);
  uVar4 = *(undefined4 *)(puVar5 + 1);
  cVar1 = *(char *)((longlong)puVar5 + 0xc);
  uVar2 = *(undefined1 *)((longlong)puVar5 + 0xf);
  *(undefined8 *)(param_1 + 0x2098) = *puVar5;
  *(undefined2 *)(param_1 + 0x20a5) = uVar3;
  *(undefined4 *)(param_1 + 0x20a0) = uVar4;
  *(undefined1 *)(param_1 + 0x20a7) = uVar2;
  *(char *)(param_1 + 0x20a4) = cVar1;
  *(char *)(param_1 + 0x78) = cVar1;
  if (((*(short *)(param_2 + 0x7b8) != 0x1f) && (*(char *)(param_1 + 0x75) == '\0')) &&
     (*(int *)(param_1 + 0x60) != 2)) {
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x50) != '\0')) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x18);
      return;
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x14);
  }
  return;
}



/* ===== 18042dfd0 FUN_18042dfd0 ===== */

undefined8 * FUN_18042dfd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
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
  param_1[0x19] = 0;
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(uint *)((longlong)param_1 + 0x14) = (uint)(*(longlong *)(param_2 + 0x30) != 0);
  if (*(longlong *)(param_2 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 4000);
    *(undefined4 *)((longlong)param_1 + 0x1c) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfa4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfa8);
    *(undefined4 *)((longlong)param_1 + 0x24) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfac);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfb0);
    *(undefined4 *)((longlong)param_1 + 0x2c) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfb4);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfb8);
    *(undefined4 *)((longlong)param_1 + 0x34) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfbc);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfc0);
    *(undefined4 *)((longlong)param_1 + 0x3c) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfc4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfc8);
    *(undefined4 *)((longlong)param_1 + 0x44) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfcc);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfd0);
    *(undefined4 *)((longlong)param_1 + 0x4c) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfd4);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfd8);
    *(undefined4 *)((longlong)param_1 + 0x54) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfdc);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfe0);
    *(undefined4 *)((longlong)param_1 + 0x5c) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfe4);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0xfe8);
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(*(longlong *)(param_2 + 0x30) + 0x1004);
  }
  return param_1;
}



/* ===== 18042e190 FUN_18042e190 ===== */

void FUN_18042e190(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_18042de30();
  if ((param_3 == 0) || (DAT_181111958 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_180011200(param_3 + (ulonglong)DAT_181111958);
  }
  uVar2 = uVar2 & 0x7fff;
  *(uint *)(param_2 + 8) = uVar2;
  lVar1 = DAT_181112368;
  lVar3 = DAT_181112370 - DAT_181112368;
  *(undefined1 *)(param_2 + 0xd8) = param_4;
  if ((int)uVar2 < (int)(lVar3 >> 4) * -0x194be3ab) {
    *(ulonglong *)(param_2 + 0xd0) = (ulonglong)uVar2 * 0xfd0 + lVar1;
    return;
  }
  *(undefined8 *)(param_2 + 0xd0) = 0;
  return;
}



/* ===== 18042e250 FUN_18042e250 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042e250(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined1 local_12a;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  ulonglong local_68;
  
  local_68 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) != 0))
  {
    local_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_174 = 0;
    uStack_170 = 0;
    local_1b8 = 0;
    local_130 = 0;
    local_12c = 0;
    local_17c = *(undefined4 *)(param_1 + 0x10);
    local_94 = *(uint *)(param_1 + 0x14);
    local_138 = (ulonglong)local_94 << 0x20;
    local_12a = *(undefined1 *)(param_1 + 0x19);
    local_128 = *(undefined4 *)(param_1 + 0xfec);
    local_124 = *(undefined4 *)(param_1 + 0xff0);
    local_120 = *(undefined4 *)(param_1 + 0xff4);
    local_11c = *(undefined4 *)(param_1 + 0xff8);
    local_118 = *(undefined1 *)(param_1 + 0x1001);
    local_117 = *(undefined1 *)(param_1 + 0x1002);
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_8c = 0;
    local_dc = local_17c;
    local_8a = local_12a;
    local_88 = local_128;
    local_84 = local_124;
    local_80 = local_120;
    local_7c = local_11c;
    local_78 = local_118;
    local_77 = local_117;
    FUN_180011610(&uStack_150);
    FUN_180200b70(&local_168);
    local_1c8 = param_1 + 0x7e0;
    FUN_18045cc00(param_1 + 0x20,&local_108,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),
                  param_2);
    FUN_180011610(&local_b0);
    FUN_180200b70(&local_c8);
  }
  return;
}



/* ===== 18042e480 FUN_18042e480 ===== */

int FUN_18042e480(int param_1,float param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = 0.0;
  if (*(longlong *)(param_4 + 4) == 0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = *(float *)(*(longlong *)(param_4 + 4) + 0x68);
  }
  fVar9 = fVar9 - param_4[0x14];
  pfVar1 = *(float **)(param_4 + 6);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (pfVar1 == (float *)0x0) {
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar5 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
  }
  fVar5 = (param_4[2] - fVar8) * (param_4[2] - fVar8) + (param_4[1] - fVar7) * (param_4[1] - fVar7)
          + (*param_4 - fVar5) * (*param_4 - fVar5);
  if (fVar5 < 0.0) {
    fVar5 = (float)FUN_18051af10(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  fVar5 = (float)FUN_180502150(fVar5 * param_2);
  auVar6 = roundss(ZEXT816(0),
                   ZEXT416((uint)(fVar9 / (fVar5 * (float)param_1 * *(float *)(param_3 + 0x78)))),10
                  );
  iVar4 = (int)auVar6._0_4_;
  iVar3 = 0;
  if (0 < iVar4) {
    iVar3 = iVar4;
  }
  iVar2 = 8;
  if (iVar4 < 8) {
    iVar2 = iVar3 + 1;
  }
  return iVar2;
}



/* ===== 18042e580 FUN_18042e580 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18042e580(longlong param_1,char param_2,float *param_3,longlong param_4,int param_5,
                       ulonglong *param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  short sVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar19;
  ulonglong *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulonglong local_1f8;
  undefined4 local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  uint uStack_1d4;
  undefined4 uStack_1d0;
  float fStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  uint local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  longlong lStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined1 local_b8 [144];
  
  uVar15 = FUN_18042de30();
  if ((param_2 == '\0') || (param_3 == (float *)0x0)) {
    return uVar15 & 0xffffffffffffff00;
  }
  *(undefined8 *)(param_1 + 0x1928) = 0;
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined2 *)(param_1 + 0x1948) = 0;
  *(undefined2 *)(param_1 + 0x1880) = 0;
  if (*(longlong *)(param_1 + 0x1850) != *(longlong *)(param_1 + 0x1858)) {
    *(longlong *)(param_1 + 0x1858) = *(longlong *)(param_1 + 0x1850);
  }
  if (*(longlong *)(param_1 + 0x1868) != *(longlong *)(param_1 + 0x1870)) {
    *(longlong *)(param_1 + 0x1870) = *(longlong *)(param_1 + 0x1868);
  }
  if (*(longlong *)(param_1 + 0x1910) != *(longlong *)(param_1 + 0x1918)) {
    *(longlong *)(param_1 + 0x1918) = *(longlong *)(param_1 + 0x1910);
  }
  fVar3 = param_3[3];
  pfVar1 = param_3 + 0x1d6;
  fVar4 = param_3[4];
  *pfVar1 = 0.0;
  param_3[3] = 0.0;
  param_3[4] = 0.0;
  param_3[0x1d7] = 0.0;
  param_3[0x1d8] = param_3[5];
  FUN_18042df10(param_1,param_3);
  *(undefined8 *)(param_1 + 0x189c) = *(undefined8 *)param_3;
  *(float *)(param_1 + 0x18a4) = param_3[2];
  if ((*(char *)(param_1 + 0xd0) == '\0') || (*(int *)(param_1 + 0x60) != 2)) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  *(undefined1 *)(param_1 + 0x18b4) = uVar13;
  uVar13 = FUN_180474850(param_3,0,*(undefined1 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x1880) = uVar13;
  if (param_4 == 0) {
    fVar24 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
  }
  else {
    fVar24 = *(float *)(param_4 + 0x30);
    fVar28 = *(float *)(param_4 + 0x34);
    fVar29 = *(float *)(param_4 + 0x38);
  }
  lVar23 = 0;
  local_18c = 0;
  iStack_1dc = param_5 + 1;
  local_1b8 = 0;
  local_1ac = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_1d4 = uStack_1d4 & 0xffffff00;
  uStack_1d0 = 0;
  local_1e8 = (*param_3 - fVar24) * DAT_1808ac3c4 + fVar24 + param_3[9];
  fStack_1e0 = (param_3[2] - fVar29) * DAT_1808ac3c4 + fVar29 + param_3[0xb];
  fStack_1e4 = (param_3[1] - fVar28) * DAT_1808ac3c4 + fVar28 + param_3[10];
  fStack_1cc = 0.0;
  iStack_1d8 = iStack_1dc;
  if ((*(int *)(param_1 + 0x60) != 2) && (*(short *)(param_3 + 0x1ee) != 0x1f)) {
    FUN_18047d090();
    fVar24 = param_3[0x1e4];
    if (1 < (uint)fVar24) {
      fVar24 = 0.0;
    }
    if ((*(longlong *)(param_3 + 0x1ec) == 0) || (DAT_1811142d0 == 0)) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = (float)FUN_18000f3d0((ulonglong)(uint)((int)fVar24 * 4) +
                                    *(longlong *)(param_3 + 0x1ec) + (ulonglong)DAT_1811142d0);
    }
    fStack_1cc = (float)FUN_18047d4f0(pfVar1);
    fStack_1cc = fStack_1cc + fVar24;
  }
  local_1c8 = 0;
  uStack_1c0 = (ulonglong)uStack_1c0._5_3_ << 0x28;
  local_1b0 = 0;
  local_1a4 = local_1a4 & 0xffffff00;
  local_19c = 0;
  local_198 = 0;
  local_190 = 0;
  FUN_18043a500(param_1 + 0x1868,&local_1e8);
  cVar5 = *(char *)(param_1 + 0x78);
  sVar6 = *(short *)(param_3 + 0x1ee);
  if (cVar5 == '\0') {
    fVar24 = DAT_1808ac1b0;
  }
  else {
    fVar24 = DAT_1808ac118;
  }
  if (sVar6 == 9) {
    fVar28 = DAT_1808ac254;
  }
  else {
    if (sVar6 != 0x28) {
      if ((sVar6 == 0xb) || (fVar28 = DAT_1808ac1b0, sVar6 == 0x26)) {
        fVar24 = DAT_1808ac1f4;
        fVar28 = DAT_1808ac1f4;
        if (cVar5 != '\0') {
          fVar24 = DAT_1808ac118;
        }
      }
      goto LAB_18042e8a8;
    }
    fVar28 = DAT_1808ac21c;
  }
  fVar24 = fVar28;
  if (cVar5 != '\0') {
    fVar24 = DAT_1808ac140;
  }
LAB_18042e8a8:
  if ((param_6 != (ulonglong *)0x0) && (uVar15 = *param_6, uVar15 != 0)) {
    local_1f8 = uVar15;
    lVar16 = FUN_1803a08e0(&local_1f8);
    if ((lVar16 != 0) &&
       ((*(longlong *)(param_1 + 0xaf8) != 0 &&
        (lVar17 = FUN_18000f3a0(*(longlong *)(param_1 + 0xaf8) + 0x10), lVar17 != 0)))) {
      uVar14 = FUN_180011200(lVar17 + 0x10);
      uVar12 = _UNK_1808ad368;
      uVar11 = _DAT_1808ad360;
      if ((int)(uVar14 & 0x7fff) < (int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab) {
        lVar23 = (ulonglong)(uVar14 & 0x7fff) * 0xfd0 + DAT_181112368;
      }
      if (lVar23 != 0) {
        *(longlong *)(param_1 + 0x1840) = lVar16;
        iStack_1dc = 0;
        iStack_1d8 = 0;
        local_1e8 = 100.0;
        uStack_1d4 = 0;
        uStack_1d0 = 2;
        *(undefined4 *)(param_1 + 0x18b8) = 0x42c80000;
        *(float *)(param_1 + 0x18bc) = fVar24;
        *(float *)(param_1 + 0x18c0) = fVar28;
        *(undefined4 *)(param_1 + 0x18c4) = 0;
        fStack_1cc = -1.0;
        *(undefined8 *)(param_1 + 0x18c8) = 0;
        *(undefined8 *)(param_1 + 0x18d0) = 0xbf80000000000002;
        local_1c8 = CONCAT62(local_1c8._2_6_,0x100);
        local_1c8 = CONCAT44(4,(undefined4)local_1c8);
        uStack_1c0 = 100;
        *(undefined4 *)(param_1 + 0x18d8) = (undefined4)local_1c8;
        *(undefined4 *)(param_1 + 0x18dc) = 4;
        *(undefined4 *)(param_1 + 0x18e0) = 100;
        *(undefined4 *)(param_1 + 0x18e4) = 0;
        *(undefined4 *)(param_1 + 0x1848) = *(undefined4 *)(param_1 + 0xb04);
        uVar14 = DAT_181111954;
        uVar18 = (ulonglong)DAT_181111954;
        uStack_1a8 = 0;
        local_1a4 = 0x7ffff;
        *(ulonglong *)(param_1 + 0x1830) = uVar15;
        *(undefined8 *)(param_1 + 0x18e8) = uVar11;
        *(undefined8 *)(param_1 + 0x18f0) = uVar12;
        *(undefined8 *)(param_1 + 0x18f8) = 0x7ffff00000000;
        if (uVar14 == 0) {
          fVar28 = 0.0;
          fVar29 = 0.0;
          fVar30 = 0.0;
        }
        else {
          pfVar19 = (float *)FUN_1800111b0(&local_1f8,uVar15 + uVar18);
          fVar28 = *pfVar19;
          fVar29 = pfVar19[1];
          fVar30 = pfVar19[2];
        }
        if (((DAT_180ca09f8 == 0) || (lVar16 = FUN_18000f3a0(uVar15 + DAT_180ca09f8), lVar16 == 0))
           || (DAT_180ca0950 == 0)) {
          fVar31 = 0.0;
          fVar25 = 0.0;
          fVar26 = 0.0;
        }
        else {
          pfVar19 = (float *)FUN_1800111b0(&local_1f8,lVar16 + (ulonglong)DAT_180ca0950);
          fVar31 = *pfVar19;
          fVar25 = pfVar19[1];
          fVar26 = pfVar19[2];
        }
        *(float *)(param_1 + 0x1884) = fVar31 + fVar28;
        *(float *)(param_1 + 0x1888) = fVar25 + fVar29;
        *(float *)(param_1 + 0x188c) = fVar26 + fVar30;
        fVar31 = *(float *)(param_1 + 0xa4) - (fVar31 + fVar28);
        fVar29 = (float)*(undefined8 *)(param_1 + 0xa8) - (float)*(undefined8 *)(param_1 + 0x1888);
        fVar30 = (float)((ulonglong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) -
                 (float)((ulonglong)*(undefined8 *)(param_1 + 0x1888) >> 0x20);
        fVar28 = fVar30 * fVar30 + fVar29 * fVar29 + fVar31 * fVar31;
        if (fVar28 < 0.0) {
          fVar25 = (float)FUN_18051af10(fVar28);
        }
        else {
          fVar25 = SQRT(fVar28);
        }
        if ((fVar25 < DAT_1808abf54) || (DAT_1808accfc < fVar25)) {
          if (fVar28 == 0.0) {
            *(undefined8 *)(param_1 + 0x1890) = 0;
            *(undefined4 *)(param_1 + 0x1898) = 0;
          }
          else {
            dVar9 = (double)fVar29;
            dVar8 = (double)fVar31;
            dVar10 = (double)fVar30;
            dVar27 = dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10;
            if (dVar27 < 0.0) {
              dVar27 = (double)FUN_18051ff20(SUB84(dVar27,0));
            }
            else {
              dVar27 = SQRT(dVar27);
            }
            dVar27 = DAT_1808ac500 / dVar27;
            *(float *)(param_1 + 0x1890) = (float)(dVar27 * dVar8);
            *(float *)(param_1 + 0x1894) = (float)(dVar27 * dVar9);
            *(float *)(param_1 + 0x1898) = (float)(dVar27 * dVar10);
          }
        }
        else {
          fVar25 = DAT_1808ac34c / fVar25;
          *(ulonglong *)(param_1 + 0x1894) = CONCAT44(fVar25 * fVar30,fVar25 * fVar29);
          *(float *)(param_1 + 0x1890) = fVar25 * fVar31;
        }
        if (DAT_181111950 == 0) {
          local_1f8 = 0;
          local_1f0 = 0;
        }
        else {
          puVar20 = (ulonglong *)FUN_1800111b0(local_b8,uVar15 + DAT_181111950);
          local_1f8 = *puVar20;
          local_1f0 = (undefined4)puVar20[1];
        }
        *(ulonglong *)(param_1 + 0x18a8) = local_1f8;
        *(undefined4 *)(param_1 + 0x18b0) = local_1f0;
        FUN_18042e190((int)local_1f8,param_1 + 0x1830,uVar15,0);
        puVar21 = *(undefined8 **)(param_1 + 0x1858);
        puVar7 = *(undefined8 **)(param_1 + 0x1850);
        if (puVar7 != puVar21) {
          *(undefined8 **)(param_1 + 0x1858) = puVar7;
          puVar21 = puVar7;
        }
        uStack_124 = uStack_124 & 0xffffff00;
        uStack_120 = 0;
        local_188 = *(undefined8 *)(param_1 + 0xaf0);
        uStack_174 = 1;
        local_178 = CONCAT31(local_178._1_3_,1);
        local_140 = 0;
        uStack_138 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        local_150 = 0;
        uStack_148 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        local_128 = 0;
        lStack_180 = lVar23;
        if (puVar21 == *(undefined8 **)(param_1 + 0x1860)) {
          local_1f8 = 0x13b13b13b13b13b;
          lVar23 = ((longlong)puVar21 - *(longlong *)(param_1 + 0x1850)) / 0xd0;
          if (lVar23 == 0x13b13b13b13b13b) {
                    /* WARNING: Subroutine does not return */
            FUN_1800118d0();
          }
          uVar15 = ((longlong)*(undefined8 **)(param_1 + 0x1860) - *(longlong *)(param_1 + 0x1850)
                   >> 4) * 0x4ec4ec4ec4ec4ec5;
          if (uVar15 <= 0x13b13b13b13b13b - (uVar15 >> 1)) {
            uVar15 = (uVar15 >> 1) + uVar15;
            uVar18 = lVar23 + 1U;
            if (lVar23 + 1U <= uVar15) {
              uVar18 = uVar15;
            }
            if (0x13b13b13b13b13b < uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_18000d840();
            }
            local_1f8 = uVar18;
          }
          lVar17 = FUN_18000fb70(local_1f8 * 0xd0);
          lVar16 = lVar23 * 0xd0;
          *(undefined8 *)(lVar16 + lVar17) = local_188;
          ((undefined8 *)(lVar16 + lVar17))[1] = lStack_180;
          puVar7 = (undefined8 *)(lVar16 + 0x10 + lVar17);
          *puVar7 = CONCAT44(uStack_174,local_178);
          puVar7[1] = uStack_170;
          puVar7 = (undefined8 *)(lVar16 + 0x20 + lVar17);
          *puVar7 = uStack_168;
          puVar7[1] = uStack_160;
          puVar7 = (undefined8 *)(lVar16 + 0x30 + lVar17);
          *puVar7 = uStack_158;
          puVar7[1] = local_150;
          puVar7 = (undefined8 *)(lVar16 + 0x40 + lVar17);
          *puVar7 = uStack_148;
          puVar7[1] = local_140;
          puVar2 = (undefined4 *)(lVar16 + 0x50 + lVar17);
          *puVar2 = uStack_138;
          puVar2[1] = uStack_134;
          puVar2[2] = uStack_130;
          puVar2[3] = uStack_12c;
          puVar2 = (undefined4 *)(lVar16 + 0x60 + lVar17);
          *puVar2 = local_128;
          puVar2[1] = uStack_124;
          puVar2[2] = (undefined4)uStack_120;
          puVar2[3] = uStack_120._4_4_;
          puVar7 = (undefined8 *)(lVar16 + 0x70 + lVar17);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = (undefined8 *)(lVar16 + 0x80 + lVar17);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = (undefined8 *)(lVar16 + 0x90 + lVar17);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = (undefined8 *)(lVar16 + 0xa0 + lVar17);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = (undefined8 *)(lVar16 + 0xb0 + lVar17);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = (undefined8 *)(lVar16 + 0xc0 + lVar17);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7 = *(undefined8 **)(param_1 + 0x1850);
          if (puVar21 == *(undefined8 **)(param_1 + 0x1858)) {
            lVar22 = (longlong)*(undefined8 **)(param_1 + 0x1858) - (longlong)puVar7;
            lVar16 = lVar17;
            puVar21 = puVar7;
          }
          else {
            FUN_180540530(lVar17,puVar7,(longlong)puVar21 - (longlong)puVar7);
            lVar16 = lVar17 + 0xd0 + lVar16;
            lVar22 = *(longlong *)(param_1 + 0x1858) - (longlong)puVar21;
          }
          FUN_180540530(lVar16,puVar21,lVar22);
          FUN_18043b180(param_1 + 0x1850,lVar17,lVar23 + 1,local_1f8);
        }
        else {
          *puVar21 = local_188;
          puVar21[1] = lVar23;
          puVar21[2] = CONCAT44(1,local_178);
          puVar21[3] = 0;
          puVar21[4] = 0;
          puVar21[5] = 0;
          puVar21[6] = 0;
          puVar21[7] = 0;
          puVar21[8] = 0;
          puVar21[9] = 0;
          puVar21[10] = 0;
          puVar21[0xb] = 0;
          *(undefined4 *)(puVar21 + 0xc) = 0;
          *(uint *)((longlong)puVar21 + 100) = uStack_124;
          *(undefined4 *)(puVar21 + 0xd) = 0;
          *(undefined4 *)((longlong)puVar21 + 0x6c) = 0;
          puVar21[0xe] = 0;
          puVar21[0xf] = 0;
          puVar21[0x10] = 0;
          puVar21[0x11] = 0;
          puVar21[0x12] = 0;
          puVar21[0x13] = 0;
          puVar21[0x14] = 0;
          puVar21[0x15] = 0;
          puVar21[0x16] = 0;
          puVar21[0x17] = 0;
          puVar21[0x18] = 0;
          puVar21[0x19] = 0;
          *(longlong *)(param_1 + 0x1858) = *(longlong *)(param_1 + 0x1858) + 0xd0;
        }
        lVar23 = FUN_1804460e0(param_1 + 0x1830,param_1 + 0x1ed0);
        if (((lVar23 != 0) && (*(longlong *)(lVar23 + 0x10) != 0)) &&
           (fVar28 = *(float *)(*(longlong *)(lVar23 + 0x10) + 0x6c),
           fVar28 < *(float *)(lVar23 + 0xc) || fVar28 == *(float *)(lVar23 + 0xc))) {
          fVar28 = *(float *)(lVar23 + 0x44);
          param_3[0x1d8] = param_3[5];
          param_3[3] = fVar3;
          param_3[4] = fVar4;
          *pfVar1 = fVar3;
          param_3[0x1d7] = fVar4;
          return (ulonglong)CONCAT31((int3)((uint)param_3[5] >> 8),fVar24 <= fVar28);
        }
      }
    }
  }
  param_3[3] = fVar3;
  param_3[4] = fVar4;
  *pfVar1 = fVar3;
  param_3[0x1d7] = fVar4;
  param_3[0x1d8] = param_3[5];
  return (ulonglong)(uint3)((uint)param_3[5] >> 8) << 8;
}



/* ===== 18042eff0 FUN_18042eff0 ===== */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_18042eff0(longlong param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  int iVar22;
  short sVar23;
  char cVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined8 in_stack_fffffffffffffd58;
  undefined4 uVar32;
  undefined8 uVar31;
  undefined8 in_stack_fffffffffffffd60;
  undefined4 uVar34;
  undefined8 uVar33;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  longlong local_250;
  longlong local_248;
  int local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [304];
  
  uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffd58 >> 0x20);
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffd60 >> 0x20);
  FUN_18042de30();
  uVar8 = DAT_1808acda0;
  fVar28 = DAT_1808ac34c;
  if (*(short *)(param_1 + 0x1160) == 0x1f) {
    return false;
  }
  if ((*(char *)(param_1 + 0x5c) == '\0') && (*(char *)(param_1 + 0x5d) == '\0')) {
    return false;
  }
  if (*(char *)(param_1 + 0x7a) != '\0') {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    return false;
  }
  lVar17 = plVar4[1];
  if (lVar17 == 0) {
    return false;
  }
  iVar3 = *(int *)(lVar17 + 0x10);
  if (iVar3 < 0) {
    return false;
  }
  if ((int)(DAT_181111da8 - DAT_181111da0 >> 6) <= iVar3) {
    return false;
  }
  lVar25 = (longlong)iVar3 * 0x40 + DAT_181111da0;
  if (*(int *)(lVar25 + 0x18) != 2) {
    return false;
  }
  if (*(int **)(param_2 + 0x28) == (int *)0x0) {
    return false;
  }
  iVar3 = *(int *)(param_3 + 0x24);
  local_240 = **(int **)(param_2 + 0x28) + (*(int *)(param_1 + 0x84) - iVar3);
  if ((DAT_1808ac34c <= *(float *)(param_2 + 0x48)) && (local_240 < 1)) {
    return false;
  }
  lVar5 = *(longlong *)(lVar25 + 0x30);
  local_250 = lVar17;
  local_248 = lVar25;
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    lVar17 = FUN_18000f3a0(*(longlong *)(param_1 + 0xaf8) + 0x10);
    if (lVar17 != 0) {
      uVar14 = FUN_180011200(lVar17 + 0x10);
      lVar17 = local_250;
      if ((int)(uVar14 & 0x7fff) < (int)(DAT_181112370 - DAT_181112368 >> 4) * -0x194be3ab) {
        lVar25 = (ulonglong)(uVar14 & 0x7fff) * 0xfd0 + DAT_181112368;
        if (lVar25 != 0) {
          iVar15 = iVar3 + 1;
          if (*(int *)(local_250 + 0x10) < *(int *)(lVar25 + 0x10)) {
            iVar15 = iVar3;
          }
          iVar22 = (iVar3 + 1) - *(int *)(local_250 + 0x48);
          if (iVar15 < iVar22) {
            iVar22 = iVar15;
          }
          if (*(int *)(lVar25 + 0xf10) == 0) {
            iVar15 = 0;
          }
          else {
            uVar14 = *(uint *)(lVar25 + 0xf14) & 0x8000000f;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
            }
            uVar14 = uVar14 + 0x10 & 0x8000000f;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xfffffff0) + 1;
            }
            iVar15 = *(int *)((longlong)(int)uVar14 * 0xe8 + 0x90 + lVar25);
          }
          if (iVar15 < iVar22) {
            FUN_1801fd810(&DAT_180c3cf70);
            _DAT_180c3d0c8 = 0x11;
            if (DAT_180c3d0b8 != 0) {
              if (((DAT_181112110 == 0) ||
                  (0x7ffffffefffe < (DAT_180c3d0b8 + (ulonglong)DAT_181112110) - 0x10000)) ||
                 (iVar15 = FUN_180011200(), 0xfffffffd < iVar15 - 1U)) {
                _DAT_180c3d0c0 = 0;
              }
              else {
                puVar18 = (undefined8 *)FUN_1803a0940(&local_298);
                _DAT_180c3d0c0 = *puVar18;
              }
            }
            FUN_1804624c0(&DAT_180c3cf70);
            FUN_180463020(&DAT_180c3cf70);
            uVar9 = local_298._4_4_;
            _DAT_180c3d6c0 = *(undefined4 *)(param_1 + 0x10f8);
            uStack_280 = &LAB_180431cd0;
            if (*(undefined1 **)(param_1 + 0x21b8) != (undefined1 *)0x0) {
              uStack_280 = *(undefined1 **)(param_1 + 0x21b8);
            }
            if (*(char *)(param_1 + 0x2130) == '\0') {
              local_278 = 0;
              uStack_270 = 0;
            }
            else {
              local_278 = param_1 + 0x20b0;
              uStack_270 = param_1 + 0xe0;
            }
            local_298._0_4_ = (int)CONCAT41(local_298._4_4_,*(undefined1 *)(param_1 + 0x76)) << 0x18
            ;
            local_298._6_2_ = SUB42(uVar9,2);
            local_298._0_6_ =
                 CONCAT15(*(undefined1 *)(param_1 + 0xd0),
                          CONCAT14(*(undefined1 *)(param_1 + 0x77),(int)local_298));
            uVar31 = local_298;
            uStack_290 = (undefined8 *)CONCAT44(uStack_290._4_4_,*(undefined4 *)(param_1 + 0x60));
            uVar33 = CONCAT44(uVar34,uVar8);
            local_288 = FUN_180436b00;
            local_298._0_2_ =
                 CONCAT11(*(undefined1 *)(param_1 + 0x51),*(undefined1 *)(param_1 + 0x52));
            local_298._3_5_ = SUB85(uVar31,3);
            local_298._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x54),(undefined2)local_298);
            uVar31 = CONCAT44(uVar32,iVar22 - *(int *)(param_1 + 0xac8));
            FUN_18045d020(&local_298,&DAT_180c3cf70,param_1 + 0x2138,1,uVar31,uVar33);
            uVar32 = (undefined4)((ulonglong)uVar31 >> 0x20);
            uVar34 = (undefined4)((ulonglong)uVar33 >> 0x20);
            local_298 = CONCAT44(DAT_180c3cf74,DAT_180c3cf70);
            uStack_290 = (undefined8 *)CONCAT44(DAT_180c3d0b4,DAT_180c3cf78);
            local_288 = (code *)CONCAT44(DAT_180c3d0d8,DAT_180c3d0cc);
            lVar19 = FUN_18046abb0(lVar25);
            lVar25 = local_248;
            if (lVar19 != 0) {
              *(undefined1 *)(lVar19 + 0xd) = 1;
            }
            goto LAB_18042f3ed;
          }
        }
        lVar25 = local_248;
        goto LAB_18042f3ed;
      }
    }
    lVar17 = local_250;
  }
LAB_18042f3ed:
  puVar18 = (undefined8 *)(param_1 + 0x21c0);
  if (param_3 != puVar18) {
    FUN_180466580(puVar18,param_3,0x11);
  }
  uStack_270 = 0;
  *(undefined2 *)(param_1 + 0x1530) = 0;
  *(undefined8 *)(param_1 + 0x15d8) = 0;
  *(undefined8 *)(param_1 + 0x14e0) = 0;
  *(undefined2 *)(param_1 + 0x15f8) = 0;
  if (*(longlong *)(param_1 + 0x1500) != *(longlong *)(param_1 + 0x1508)) {
    *(longlong *)(param_1 + 0x1508) = *(longlong *)(param_1 + 0x1500);
  }
  if (*(longlong *)(param_1 + 0x1518) != *(longlong *)(param_1 + 0x1520)) {
    *(longlong *)(param_1 + 0x1520) = *(longlong *)(param_1 + 0x1518);
  }
  if (*(longlong *)(param_1 + 0x15c0) != *(longlong *)(param_1 + 0x15c8)) {
    *(longlong *)(param_1 + 0x15c8) = *(longlong *)(param_1 + 0x15c0);
  }
  uStack_280 = &LAB_180431cd0;
  if (*(undefined1 **)(param_1 + 0x21b8) != (undefined1 *)0x0) {
    uStack_280 = *(undefined1 **)(param_1 + 0x21b8);
  }
  if (*(char *)(param_1 + 0x2130) == '\0') {
    local_278 = 0;
  }
  else {
    local_278 = param_1 + 0x20b0;
    uStack_270 = param_1 + 0xe0;
  }
  uStack_290 = (undefined8 *)CONCAT44(uStack_290._4_4_,*(undefined4 *)(param_1 + 0x60));
  local_288 = FUN_180436b00;
  local_298._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x51),*(undefined1 *)(param_1 + 0x52));
  local_298 = CONCAT62(CONCAT24(local_298._6_2_,
                                CONCAT13(*(undefined1 *)(param_1 + 0xd0),
                                         CONCAT12(*(undefined1 *)(param_1 + 0x77),
                                                  CONCAT11(*(undefined1 *)(param_1 + 0x76),
                                                           *(undefined1 *)(param_1 + 0x54))))),
                       (undefined2)local_298);
  FUN_18045d020(&local_298,puVar18,param_1 + 0x2138,0,
                CONCAT44(uVar32,*(undefined4 *)(param_1 + 0x58)),CONCAT44(uVar34,uVar8));
  lVar19 = uStack_270;
  puVar10 = uStack_280;
  uVar31 = local_298;
  local_298._0_3_ = CONCAT21(local_298._1_2_,*(undefined1 *)(param_1 + 0x40));
  local_298._3_1_ = SUB81(uVar31,3);
  local_298 = CONCAT44(*(undefined4 *)(param_1 + 0xb04),(int)local_298);
  uStack_290 = &DAT_1809f35b8;
  local_288 = *(code **)(param_1 + 0x90c);
  uStack_280._7_1_ = SUB81(puVar10,7);
  uStack_280._0_7_ =
       CONCAT16(*(undefined1 *)(param_1 + 0xd0),
                CONCAT15(*(undefined1 *)(param_1 + 0x56),
                         CONCAT14(*(undefined1 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x60))));
  local_278 = CONCAT44(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 4));
  uStack_270._0_5_ = CONCAT41(uStack_270._1_4_,*(undefined1 *)(param_1 + 0x24));
  uStack_270._5_2_ = SUB82(lVar19,5);
  uStack_270._7_1_ = SUB81(lVar19,7);
  lVar19 = param_1 + 0x1518;
  FUN_180446ee0(&local_298,puVar18,1,0,lVar19);
  uVar14 = (uint)((ulonglong)lVar19 >> 0x20);
  FUN_18042df10(param_1,puVar18);
  *(undefined8 *)(param_1 + 0x154c) = *puVar18;
  *(undefined4 *)(param_1 + 0x1554) = *(undefined4 *)(param_1 + 0x21c8);
  if ((*(char *)(param_1 + 0xd0) == '\0') || (*(int *)(param_1 + 0x60) != 2)) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  *(undefined1 *)(param_1 + 0x1564) = uVar11;
  uVar11 = FUN_180474850(puVar18,0,*(undefined1 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x1530) = uVar11;
  if (lVar5 != 0) {
    FUN_18042e250(lVar5,*(undefined4 *)(param_1 + 0x231c));
  }
  if (*(char *)(lVar25 + 0x28) != '\0') {
    puVar20 = (undefined4 *)FUN_18042dfd0(local_168,lVar25);
    local_228 = *(undefined8 *)(puVar20 + 4);
    uStack_220 = *(undefined8 *)(puVar20 + 6);
    local_218 = *(undefined8 *)(puVar20 + 8);
    uStack_210 = *(undefined8 *)(puVar20 + 10);
    local_238 = *puVar20;
    uStack_234 = puVar20[1];
    uStack_230 = puVar20[2];
    uStack_22c = puVar20[3];
    local_208 = *(undefined8 *)(puVar20 + 0xc);
    uStack_200 = *(undefined8 *)(puVar20 + 0xe);
    local_1f8 = *(undefined8 *)(puVar20 + 0x10);
    uStack_1f0 = *(undefined8 *)(puVar20 + 0x12);
    local_1e8 = *(undefined8 *)(puVar20 + 0x14);
    uStack_1e0 = *(undefined8 *)(puVar20 + 0x16);
    local_1d8 = *(undefined8 *)(puVar20 + 0x18);
    uStack_1d0 = *(undefined8 *)(puVar20 + 0x1a);
    local_1c8 = *(undefined8 *)(puVar20 + 0x1c);
    uStack_1c0 = *(undefined8 *)(puVar20 + 0x1e);
    local_1b8 = *(undefined8 *)(puVar20 + 0x20);
    uStack_1b0 = *(undefined8 *)(puVar20 + 0x22);
    local_1a8 = *(undefined8 *)(puVar20 + 0x24);
    uStack_1a0 = *(undefined8 *)(puVar20 + 0x26);
    local_198 = *(undefined8 *)(puVar20 + 0x28);
    uStack_190 = *(undefined8 *)(puVar20 + 0x2a);
    local_188 = puVar20[0x2c];
    uStack_184 = puVar20[0x2d];
    uStack_180 = puVar20[0x2e];
    uStack_17c = puVar20[0x2f];
    local_178 = *(undefined8 *)(puVar20 + 0x30);
    uStack_170 = *(undefined8 *)(puVar20 + 0x32);
    FUN_18043a730(param_1 + 0x1500,&local_238);
  }
  *(undefined4 *)(param_1 + 0x14f8) = *(undefined4 *)(param_1 + 0xb04);
  *(undefined8 *)(param_1 + 0x14e0) = *(undefined8 *)(param_1 + 0xaf0);
  *(undefined8 *)(param_1 + 0x14f0) = *(undefined8 *)(param_1 + 0x1150);
  uVar16 = *(uint *)(param_1 + 0x60);
  local_268 = *(undefined4 *)(param_1 + 0x2c);
  uStack_264 = *(undefined4 *)(param_1 + 0x28);
  uStack_260 = *(undefined4 *)(param_1 + 0x30);
  uStack_25c = *(undefined4 *)(param_1 + 0x34);
  local_278._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x24));
  local_278 = CONCAT44(*(undefined4 *)(param_1 + 0x3c),(undefined4)local_278);
  uStack_270 = CONCAT44(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x38));
  local_258 = *(undefined4 *)(param_1 + 0x48);
  uStack_254 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x1568) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x156c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x1570) = *(undefined4 *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x1574) = uVar16;
  *(undefined4 *)(param_1 + 0x1578) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x157c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1580) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x1584) = *(undefined4 *)(param_1 + 0xc);
  local_288 = (code *)CONCAT44(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  uStack_280 = (undefined1 *)CONCAT44(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4));
  *(longlong *)(param_1 + 0x1588) = local_278;
  *(longlong *)(param_1 + 0x1590) = uStack_270;
  *(undefined4 *)(param_1 + 0x1598) = local_268;
  *(undefined4 *)(param_1 + 0x159c) = uStack_264;
  *(undefined4 *)(param_1 + 0x15a0) = uStack_260;
  *(undefined4 *)(param_1 + 0x15a4) = uStack_25c;
  *(ulonglong *)(param_1 + 0x15a8) = CONCAT44(uStack_254,local_258);
  *(undefined8 *)(param_1 + 0x1534) = *(undefined8 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x153c) = *(undefined4 *)(param_1 + 0xac);
  *(undefined8 *)(param_1 + 0x1540) = *(undefined8 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x1548) = *(undefined4 *)(param_1 + 0xa0);
  plVar6 = *(longlong **)(param_1 + 0x1170);
  if (plVar6 == (longlong *)0x0) {
    local_298 = 0;
    uStack_290 = (undefined8 *)((ulonglong)uVar16 << 0x20);
  }
  else {
    local_298 = *plVar6;
    uStack_290 = (undefined8 *)CONCAT44(uVar16,(int)plVar6[1]);
  }
  *(longlong *)(param_1 + 0x1558) = local_298;
  *(undefined4 *)(param_1 + 0x1560) = (undefined4)uStack_290;
  FUN_18042e190((int)local_298,param_1 + 0x14e0,*(undefined8 *)(param_1 + 0xaf0),1);
  lVar25 = FUN_1804460e0(param_1 + 0x14e0,param_1 + 0x1ed0);
  if (lVar25 == 0) {
    return false;
  }
  lVar19 = *(longlong *)(lVar25 + 0x10);
  if (lVar19 == 0) {
    return false;
  }
  fVar29 = *(float *)(lVar25 + 0xc);
  if (fVar29 < *(float *)(lVar19 + 0x6c)) {
    return false;
  }
  if (*(float *)(lVar25 + 0x44) <= *(float *)(param_1 + 0x4c) &&
      *(float *)(param_1 + 0x4c) != *(float *)(lVar25 + 0x44)) {
    return false;
  }
  fVar27 = *(float *)(param_2 + 0xc);
  cVar24 = '\0';
  local_248 = 0;
  if (lVar5 == 0) goto LAB_18042fbc0;
  fVar1 = *(float *)(lVar19 + 0x68);
  fVar2 = *(float *)(plVar4 + 0xd);
  FUN_18042e250(lVar5,*(undefined4 *)(lVar5 + 0xff4));
  if ((*(longlong *)(lVar5 + 8) != 0) && (*(int *)(lVar5 + 0x93c) == *(int *)(lVar5 + 0xff4))) {
    local_248 = lVar5 + 0x7e0;
    if (*(longlong *)(lVar5 + 0xf90) != 0) {
      if (DAT_18111194c == 0) {
        sVar23 = *(short *)(lVar5 + 0xf98);
LAB_18042f9b0:
        if (sVar23 == 0x1f) goto LAB_18042f9b7;
      }
      else {
        iVar15 = FUN_180011200(*(longlong *)(lVar5 + 0xf90) + (ulonglong)DAT_18111194c);
        sVar23 = *(short *)(lVar5 + 0xf98);
        if (5 < iVar15 - 1U) goto LAB_18042f9b0;
LAB_18042f9b7:
        if (0 < *(int *)(lVar5 + 0xb54)) {
          lVar17 = FUN_180474460(*(undefined4 *)(lVar5 + 0x93c));
          if ((int)lVar17 == *(int *)(lVar5 + 0xb34)) {
            local_298._4_4_ = (float)((ulonglong)lVar17 >> 0x20);
            bVar7 = *(float *)(lVar5 + 0xb38) <= local_298._4_4_;
          }
          else {
            bVar7 = *(int *)(lVar5 + 0xb34) <= (int)lVar17;
          }
          local_298 = lVar17;
          if ((bVar7) || (sVar23 == 0x40)) {
            cVar24 = '\x01';
          }
        }
      }
      lVar17 = local_250;
    }
  }
  if ((((*(int *)(lVar17 + 0x44) != 0) || (param_4 == '\0')) || (4 < *(int *)(param_1 + 0x84))) ||
     ((*(int *)(param_1 + 0x60) != 0 || (cVar24 == '\0')))) goto LAB_18042fbc0;
  local_298 = *plVar4;
  if ((DAT_181111944 == 0) ||
     (uVar21 = FUN_180011220(local_298 + (ulonglong)DAT_181111944), (uVar21 & 1) == 0)) {
    if (((DAT_181111948 == 0) ||
        (fVar26 = (float)FUN_18000f3d0((ulonglong)DAT_181111948 + 8 + local_298), fVar26 <= 0.0)) ||
       (*(char *)(lVar5 + 0x1000) == '\0')) goto LAB_18042fbc0;
    auVar30 = roundss(ZEXT816(0),
                      ZEXT416((uint)(fVar26 / (*(float *)(param_3 + 0x5d) * DAT_1808ac00c))),10);
    uVar16 = (uint)auVar30._0_4_;
    if (1 < uVar16) goto LAB_18042fbc0;
  }
  else {
    uVar16 = *(uint *)(lVar5 + 0xffc);
  }
  if (0 < (int)uVar16) {
    iVar22 = *(int *)(lVar5 + 0xfec) + uVar16;
    iVar15 = (uint)(*(char *)(lVar5 + 0x1003) == '\0') + iVar3;
    if (-1 < iVar22 - iVar15) {
      fVar26 = fVar2;
      if (fVar27 <= fVar2) {
        fVar26 = fVar27;
      }
      if (fVar26 < fVar2) {
        if (iVar22 == iVar15) {
          *(undefined4 *)(param_1 + 0x48) = 1;
          return false;
        }
        fVar27 = fVar1;
        if (fVar29 <= fVar1) {
          fVar27 = fVar29;
        }
        lVar5 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + 8);
        if (((((lVar5 == 0) || (*(int *)(lVar5 + 0x44) == 0)) && (*(longlong *)(lVar25 + 0x20) != 0)
             ) && ((*(byte *)(*(longlong *)(lVar25 + 0x20) + 0x39) & 0xfe) == 2)) ||
           ((fVar1 <= fVar27 || (fVar28 <= *(float *)(lVar25 + 0x30))))) {
          bVar12 = FUN_18042e580(param_1,cVar24,local_248,lVar17,CONCAT44(uVar14,iVar3),plVar4);
          return (bool)(bVar12 ^ 1);
        }
      }
    }
  }
LAB_18042fbc0:
  cVar13 = FUN_180442e40(param_1 + 0x14e0,lVar25,param_2,*(undefined1 *)(param_1 + 0x15a8),
                         (ulonglong)uVar14 << 0x20);
  if ((cVar13 == '\0') ||
     (cVar13 = FUN_18042e580(param_1,cVar24,local_248,lVar17,iVar3,plVar4), cVar13 != '\0')) {
    return false;
  }
  uVar14 = FUN_18042e480(*(undefined4 *)(param_1 + 0x15e0));
  uVar16 = FUN_18042e480(*(undefined4 *)(param_1 + 0x15e0));
  if ((*(char *)(param_1 + 0x5c) == '\0') ||
     ((uVar16 <= uVar14 &&
      ((*(float *)(lVar25 + 0x48) <= DAT_1808ac154 ||
       (*(float *)(lVar25 + 0x48) - *(float *)(param_2 + 0x48) <= DAT_1808ac0c0)))))) {
    if (*(char *)(param_1 + 0x5d) == '\0') {
      return false;
    }
    fVar29 = *(float *)(param_2 + 0x44);
    if ((*(float *)(lVar25 + 0x44) < fVar28) || (fVar28 <= fVar29)) {
      if ((cVar24 == '\0') ||
         (*(float *)(plVar4 + 0xd) < *(float *)((longlong)plVar4 + 0x6c) ||
          *(float *)(plVar4 + 0xd) == *(float *)((longlong)plVar4 + 0x6c))) {
        fVar28 = DAT_1808ac370;
      }
      else {
        fVar28 = DAT_1808ac378;
      }
      if (fVar29 <= DAT_1808ac000) {
        fVar29 = DAT_1808ac000;
      }
      if (*(float *)(lVar25 + 0x44) / fVar29 <= fVar28) {
        if (local_240 < 1) {
          return false;
        }
        if (*(int **)(lVar25 + 0x28) == (int *)0x0) {
          return false;
        }
        if ((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x231c)) + **(int **)(lVar25 + 0x28) <
            local_240) {
          return DAT_1808ac294 < *(float *)(param_2 + 0x48);
        }
        return false;
      }
    }
  }
  return true;
}



/* ===== 18042fd10 FUN_18042fd10 ===== */

void FUN_18042fd10(void)

{
  if ((DAT_181111928 == '\0') && (DAT_1811089f0 != 0)) {
    DAT_181111928 = '\x01';
    DAT_18111192c = FUN_18038eaf0("C_BaseEntity","m_pCollision");
    DAT_181111930 = FUN_18038eaf0("CCollisionProperty","m_collisionAttribute");
    DAT_181111934 = FUN_18038eaf0("CCollisionProperty","m_usSolidFlags");
    DAT_181111938 = FUN_18038eaf0("C_BaseEntity","m_hOwnerEntity");
  }
  return;
}



/* ===== 18042fda0 FUN_18042fda0 ===== */

undefined8 FUN_18042fda0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (DAT_1809619d0 != 0) {
    lVar2 = FUN_18000f3a0();
    if (lVar2 != 0) {
      lVar2 = FUN_18000f3a0((ulonglong)(param_1 >> 6 & 0x1f8) + lVar2 + 0x10);
      if (lVar2 != 0) {
        lVar2 = (ulonglong)(param_1 & 0x1ff) * 0x70 + lVar2;
        uVar1 = FUN_180011200(lVar2 + 0x10);
        if ((uVar1 & 0x7fff) == (param_1 & 0x7fff)) {
          uVar3 = FUN_18000f3a0(lVar2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



/* ===== 18042fe30 FUN_18042fe30 ===== */

uint FUN_18042fe30(longlong param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((param_1 != 0) && (DAT_18111192c != 0)) {
    lVar4 = FUN_18000f3a0(param_1 + (ulonglong)DAT_18111192c);
    if (lVar4 != 0) {
      uVar5 = FUN_180011220((ulonglong)DAT_181111934 + lVar4);
      if ((uVar5 & 4) == 0) {
        iVar2 = FUN_180011200((ulonglong)DAT_181111938 + param_1);
        if (iVar2 != -1) {
          lVar4 = FUN_18042fda0(iVar2);
          if (lVar4 != 0) {
            lVar4 = FUN_18000f3a0(lVar4 + 0x10);
            uVar3 = FUN_180011200(lVar4 + 0x10);
            sVar1 = FUN_180011200(lVar4 + 0x30);
            uVar6 = uVar3 - (ushort)(sVar1 << 0xf);
            return (uVar6 ^ uVar3) & 0x7fff ^ uVar6;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



/* ===== 18042fee0 FUN_18042fee0 ===== */

void FUN_18042fee0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  (*param_1)(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* ===== 18042ff30 FUN_18042ff30 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18042ff30(longlong param_1)

{
  float fVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined ***local_1c0;
  undefined1 *local_1b8;
  undefined **local_198;
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
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_10f;
  undefined8 local_107;
  undefined4 local_ff;
  undefined2 local_fb;
  undefined1 local_f9;
  undefined1 local_f8 [48];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_4c;
  undefined4 local_44;
  undefined2 local_40;
  char local_3d;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_1e8;
  FUN_18042fd10();
  uStack_160 = 0xb;
  local_198 = &PTR_FUN_180c3c7a0;
  local_168 = 0xf00ffff00000000;
  uStack_190 = *(undefined8 *)(param_1 + 0x98);
  uVar3 = 0;
  uStack_150 = 0;
  local_158 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_178 = _DAT_1808adf90;
  uStack_170 = _UNK_1808adf98;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    lVar6 = FUN_18000f3a0(*(longlong *)(param_1 + 0x148) + 0x10);
    uVar4 = FUN_180011200(lVar6 + 0x10);
    sVar2 = FUN_180011200(lVar6 + 0x30);
    uVar8 = uVar4 - (ushort)(sVar2 << 0xf);
    local_178 = CONCAT44(local_178._4_4_,(uVar8 ^ uVar4) & 0x7fff ^ uVar8);
    if (DAT_18111192c == 0) {
      uVar3 = 0;
    }
    else {
      lVar6 = FUN_18000f3a0((ulonglong)DAT_18111192c + *(longlong *)(param_1 + 0x148));
      uVar3 = 0;
      if (lVar6 != 0) {
        uVar3 = FUN_180011440((ulonglong)DAT_181111930 + 0x28 + lVar6);
      }
    }
  }
  local_168 = CONCAT62(local_168._2_6_,uVar3);
  uVar5 = FUN_18042fe30(*(undefined8 *)(param_1 + 0x148));
  local_120 = 0;
  local_118 = 0;
  local_10f = 0;
  local_107 = 0;
  local_ff = 0;
  local_fb = 0;
  local_f9 = 0;
  uStack_170 = CONCAT44(uStack_170._4_4_,uVar5);
  uStack_180 = 0x40000;
  uStack_160._0_2_ = CONCAT11(0x4b,(undefined1)uStack_160);
  local_188 = 0x40000;
  if (*(char *)(param_1 + 0x200) == '\0') {
    local_124 = DAT_1808acad0;
  }
  else {
    local_124 = DAT_1808aca88;
  }
  local_138 = _DAT_1808addc0;
  uStack_130 = _UNK_1808addc8;
  local_128 = 0x41800000;
  local_110 = 2;
  FUN_180540170(local_f8,0,0xc0);
  fVar1 = DAT_1808ac34c;
  uVar7 = 0xffffffffffffffff;
  local_c8 = _DAT_1808adae0;
  uStack_c0 = _UNK_1808adae8;
  local_b8 = _DAT_1808adae0;
  uStack_b0 = _UNK_1808adae8;
  local_44 = 0xffffffff;
  local_40 = 0xffff;
  local_4c = 1.0;
  if ((DAT_180961f48 != 0) && (DAT_180961f40 != 0)) {
    lVar6 = FUN_18000f3a0();
    uVar7 = 0;
    if (lVar6 != 0) {
      local_1b8 = local_f8;
      local_1c0 = &local_198;
      local_1c8 = param_1;
      uVar7 = FUN_18042fee0(DAT_180961f48,lVar6,&local_138,param_1);
    }
  }
  if (local_3d == '\0') {
    uVar7 = (ulonglong)CONCAT31((int3)((uint)local_4c >> 8),fVar1 <= local_4c);
  }
  else {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  return uVar7;
}



/* ===== 1804301d0 FUN_1804301d0 ===== */

void FUN_1804301d0(int param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  bool bVar7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  float fVar15;
  float local_78;
  uint uStack_74;
  undefined8 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined1 uStack_36;
  uint5 uStack_35;
  
  if (param_1 != 2) {
    uVar12 = *(ulonglong *)(param_3 + 8);
    uVar5 = *(ulonglong *)(param_3 + 0x18);
    if (((((uVar12 | uVar5) & 0x2001) == 0) && (0 < *(int *)(param_2 + 0x374))) &&
       (*(char *)(param_2 + 0x794) == '\0')) {
      iVar2 = *(int *)(param_2 + 0x15c);
      uVar14 = uVar12 & 0xffffffffffffd7fe;
      *(ulonglong *)(param_3 + 8) = uVar14;
      *(ulonglong *)(param_3 + 0x18) = uVar5 & 0xfffffffffffff7fe;
      if (*(char *)(param_2 + 0x37e) == '\0') {
        if (iVar2 == *(int *)(param_2 + 0x354)) {
          bVar7 = 0.0 < *(float *)(param_2 + 0x358);
        }
        else {
          bVar7 = iVar2 < *(int *)(param_2 + 0x354);
        }
        if (!bVar7) {
          *(ulonglong *)(param_3 + 8) = uVar14 | 1;
        }
      }
      else {
        iVar3 = *(int *)(param_2 + 0x364);
        fVar1 = *(float *)(param_2 + 0x368);
        if (iVar2 == iVar3) {
          bVar7 = 0.0 < fVar1;
        }
        else {
          bVar7 = iVar2 < iVar3;
        }
        uVar9 = local_58._1_3_;
        uVar10 = local_48._1_3_;
        uVar8 = local_68._1_3_;
        if ((bVar7) || ((iVar3 != iVar2 && ((iVar3 != iVar2 + -1 || (fVar1 <= 0.0)))))) {
          iVar4 = *(int *)(param_2 + 0x35c);
          fVar15 = *(float *)(param_2 + 0x360);
          if (iVar2 == iVar4) {
            bVar7 = 0.0 < fVar15;
          }
          else {
            bVar7 = iVar2 < iVar4;
          }
          if ((bVar7) || ((iVar4 != iVar2 && ((iVar4 != iVar2 + -1 || (fVar15 <= 0.0)))))) {
            if (iVar2 == iVar3) {
              bVar7 = 0.0 < fVar1;
            }
            else {
              bVar7 = iVar2 < iVar3;
            }
            if (bVar7) {
              uVar11 = *(ulonglong *)(param_3 + 0x10) | 1;
              *(ulonglong *)(param_3 + 8) = uVar14 | 1;
              uVar12 = uVar5 & 0xfffffffffffff7ff | 1;
            }
            else {
              if (iVar2 == iVar4) {
                bVar7 = 0.0 < fVar15;
              }
              else {
                bVar7 = iVar2 < iVar4;
              }
              if (!bVar7) {
                return;
              }
              uVar11 = *(ulonglong *)(param_3 + 0x10) | 0x800;
              *(ulonglong *)(param_3 + 8) = uVar12 | 0x800;
              uVar12 = uVar5 & 0xfffffffffffffffe | 0x800;
            }
            *(ulonglong *)(param_3 + 0x18) = uVar12;
            *(ulonglong *)(param_3 + 0x10) = uVar11;
            return;
          }
          plVar6 = *(longlong **)(param_3 + 0x48);
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = (uint)local_58._1_3_ << 8;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = (uint)local_48._1_3_ << 8;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          local_38 = 0;
          uStack_36 = 0;
          uStack_70 = 0x800;
          local_68 = (uint)local_68._1_3_ << 8;
          local_78 = 0.0;
          if (plVar6 == *(longlong **)(param_3 + 0x50)) {
            FUN_18008c530(param_3 + 0x40,plVar6,&local_78);
          }
          else {
            *plVar6 = (ulonglong)uStack_74 << 0x20;
            plVar6[1] = 0x800;
            plVar6[2] = (ulonglong)uVar8 << 8;
            plVar6[3] = 0;
            plVar6[4] = (ulonglong)uVar9 << 8;
            plVar6[5] = 0;
            plVar6[6] = (ulonglong)uVar10 << 8;
            plVar6[7] = 0;
            plVar6[8] = (ulonglong)uStack_35 << 0x18;
            *(longlong *)(param_3 + 0x48) = *(longlong *)(param_3 + 0x48) + 0x48;
          }
          *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) & 0xfffffffffffff7ff;
          *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) | 1;
          puVar13 = *(undefined8 **)(param_3 + 0x48);
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = local_58 & 0xffffff00;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = local_48 & 0xffffff00;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          local_38 = 0;
          uStack_36 = 0;
          uStack_70 = 1;
          local_68 = CONCAT31(local_68._1_3_,1);
          local_78 = 0.984375;
          if (puVar13 == *(undefined8 **)(param_3 + 0x50)) {
            FUN_18008c530(param_3 + 0x40,puVar13,&local_78);
          }
          else {
            *puVar13 = CONCAT44(uStack_74,0x3f7c0000);
            puVar13[1] = 1;
            puVar13[2] = (ulonglong)local_68;
            puVar13[3] = 0;
            puVar13[4] = (ulonglong)local_58;
            puVar13[5] = 0;
            puVar13[6] = (ulonglong)local_48;
            puVar13[7] = 0;
            puVar13[8] = (ulonglong)uStack_35 << 0x18;
            *(longlong *)(param_3 + 0x48) = *(longlong *)(param_3 + 0x48) + 0x48;
          }
          puVar13 = *(undefined8 **)(param_3 + 0x48);
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = local_58 & 0xffffff00;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = local_48 & 0xffffff00;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          local_38 = 0;
          uStack_36 = 0;
          uStack_70 = 1;
          local_68 = CONCAT31(local_68._1_3_,1);
          local_78 = 1.0;
          if (puVar13 == *(undefined8 **)(param_3 + 0x50)) {
            FUN_18008c530(param_3 + 0x40,puVar13,&local_78);
            return;
          }
        }
        else {
          plVar6 = *(longlong **)(param_3 + 0x48);
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = (uint)local_58._1_3_ << 8;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = (uint)local_48._1_3_ << 8;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          local_38 = 0;
          uStack_36 = 0;
          uStack_70 = 0x800;
          local_68 = CONCAT31(local_68._1_3_,1);
          local_78 = 0.0;
          if (plVar6 == *(longlong **)(param_3 + 0x50)) {
            FUN_18008c530(param_3 + 0x40,plVar6,&local_78);
          }
          else {
            *plVar6 = (ulonglong)uStack_74 << 0x20;
            plVar6[1] = 0x800;
            plVar6[2] = (ulonglong)local_68;
            plVar6[3] = 0;
            plVar6[4] = (ulonglong)uVar9 << 8;
            plVar6[5] = 0;
            plVar6[6] = (ulonglong)uVar10 << 8;
            plVar6[7] = 0;
            plVar6[8] = (ulonglong)uStack_35 << 0x18;
            *(longlong *)(param_3 + 0x48) = *(longlong *)(param_3 + 0x48) + 0x48;
          }
          *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) & 0xfffffffffffffffe;
          *(ulonglong *)(param_3 + 8) = *(ulonglong *)(param_3 + 8) | 0x800;
          if ((iVar3 == iVar2) && (fVar1 == 0.0)) {
            local_78 = DAT_1808ac34c;
          }
          else {
            fVar15 = (fVar1 + DAT_1808accc8) - DAT_1808accc8;
            if (fVar15 <= fVar1) {
              local_78 = fVar15;
            }
            else {
              local_78 = 0.0;
              if (0.0 <= fVar15 - DAT_1808ac00c) {
                local_78 = fVar15 - DAT_1808ac00c;
              }
            }
          }
          puVar13 = *(undefined8 **)(param_3 + 0x48);
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = 0;
          local_58 = local_58 & 0xffffff00;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = local_48 & 0xffffff00;
          uStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          local_38 = 0;
          uStack_36 = 0;
          uStack_70 = 1;
          local_68 = local_68 & 0xffffff00;
          if (puVar13 == *(undefined8 **)(param_3 + 0x50)) {
            FUN_18008c530(param_3 + 0x40,puVar13,&local_78);
            return;
          }
        }
        *puVar13 = CONCAT44(uStack_74,local_78);
        puVar13[1] = 1;
        puVar13[2] = (ulonglong)local_68;
        puVar13[3] = 0;
        puVar13[4] = (ulonglong)local_58;
        puVar13[5] = 0;
        puVar13[6] = (ulonglong)local_48;
        puVar13[7] = 0;
        puVar13[8] = (ulonglong)uStack_35 << 0x18;
        *(longlong *)(param_3 + 0x48) = *(longlong *)(param_3 + 0x48) + 0x48;
      }
    }
  }
  return;
}



/* ===== 180430660 FUN_180430660 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180430660(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  
  FUN_18042fd10();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_180c3c7a0;
  uVar1 = _UNK_1808adf98;
  param_1[4] = _DAT_1808adf90;
  param_1[5] = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x32) = 0xffff0000;
  *(undefined2 *)((longlong)param_1 + 0x36) = 0xf00;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 7) = 0xb;
  param_1[1] = *(undefined8 *)(param_2 + 0x98);
  uVar4 = 0;
  if (*(longlong *)(param_2 + 0x148) != 0) {
    lVar7 = FUN_18000f3a0(*(longlong *)(param_2 + 0x148) + 0x10);
    uVar5 = FUN_180011200(lVar7 + 0x10);
    sVar3 = FUN_180011200(lVar7 + 0x30);
    uVar2 = DAT_18111192c;
    uVar8 = uVar5 - (ushort)(sVar3 << 0xf);
    *(uint *)(param_1 + 4) = (uVar8 ^ uVar5) & 0x7fff ^ uVar8;
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar7 = FUN_18000f3a0((ulonglong)uVar2 + *(longlong *)(param_2 + 0x148));
      uVar4 = 0;
      if (lVar7 != 0) {
        uVar4 = FUN_180011440((ulonglong)DAT_181111930 + 0x28 + lVar7);
      }
    }
  }
  *(undefined2 *)(param_1 + 6) = uVar4;
  uVar6 = FUN_18042fe30(*(undefined8 *)(param_2 + 0x148));
  *(undefined4 *)(param_1 + 5) = uVar6;
  param_1[3] = 0x40000;
  *(undefined1 *)((longlong)param_1 + 0x39) = 0x4b;
  param_1[2] = 0;
  return;
}



/* ===== 180430790 FUN_180430790 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180430790(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char cVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_a8 [64];
  undefined1 local_68 [24];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x7c) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1188) & 4) != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x1170);
  *(ulonglong *)(lVar2 + 0x28) = *(ulonglong *)(lVar2 + 0x28) | 4;
  cVar11 = *(char *)(param_1 + 0x7a);
  if (*(char *)(param_1 + 0x10f4) != '\0') {
    if ((*(float *)(param_1 + 0xd34) == 0.0) || (*(char *)(param_1 + 0xd2b) == '\0')) {
      if ((*(char *)(param_1 + 0xd28) != '\0') && ((*(ushort *)(lVar2 + 0x28) & 0x801) == 0)) {
        cVar11 = '\x01';
      }
    }
    else {
      cVar11 = '\x01';
    }
  }
  if ((*(byte *)(param_1 + 0xa10) & 1) == 0) goto LAB_1804309fe;
  *(undefined8 *)(lVar2 + 0xc) = *(undefined8 *)(param_1 + 0x2164);
  *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_1 + 0x216c);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x21a8);
  *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_1 + 0x21b0);
  if ((*(char *)(param_1 + 0x7a) != '\0') &&
     ((((*(float *)(param_1 + 0x390c) != *(float *)(lVar2 + 0xc) ||
        (*(float *)(param_1 + 0x3910) != *(float *)(lVar2 + 0x10))) ||
       (*(float *)(param_1 + 0x3914) != *(float *)(lVar2 + 0x14))) ||
      (((*(float *)(param_1 + 0x3918) != *(float *)(lVar2 + 0x18) ||
        (*(float *)(param_1 + 0x391c) != *(float *)(lVar2 + 0x1c))) ||
       (*(float *)(param_1 + 0x3920) != *(float *)(lVar2 + 0x20))))))) {
    *(undefined8 *)(lVar2 + 0xc) = *(undefined8 *)(param_1 + 0x390c);
    *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_1 + 0x3914);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x3918);
    *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_1 + 0x3920);
    puVar3 = *(undefined8 **)(lVar2 + 0x40);
    puVar10 = *(undefined8 **)(lVar2 + 0x38);
    if (puVar10 != puVar3) {
      do {
        if (*(char *)(puVar10 + 8) != '\0') break;
        puVar10 = puVar10 + 9;
      } while (puVar10 != puVar3);
      if (puVar10 != puVar3) {
        puVar8 = puVar10 + 9;
        if (puVar8 != puVar3) {
          do {
            if (*(char *)(puVar8 + 8) == '\0') {
              uVar7 = puVar8[1];
              *puVar10 = *puVar8;
              puVar10[1] = uVar7;
              uVar7 = puVar8[3];
              puVar10[2] = puVar8[2];
              puVar10[3] = uVar7;
              uVar7 = puVar8[5];
              puVar10[4] = puVar8[4];
              puVar10[5] = uVar7;
              uVar4 = *(undefined4 *)((longlong)puVar8 + 0x34);
              uVar5 = *(undefined4 *)(puVar8 + 7);
              uVar6 = *(undefined4 *)((longlong)puVar8 + 0x3c);
              *(undefined4 *)(puVar10 + 6) = *(undefined4 *)(puVar8 + 6);
              *(undefined4 *)((longlong)puVar10 + 0x34) = uVar4;
              *(undefined4 *)(puVar10 + 7) = uVar5;
              *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar6;
              puVar10[8] = puVar8[8];
              puVar10 = puVar10 + 9;
            }
            puVar8 = puVar8 + 9;
          } while (puVar8 != puVar3);
          if (puVar10 == puVar3) goto LAB_18043097d;
        }
        lVar9 = *(longlong *)(lVar2 + 0x40) - (longlong)puVar3;
        FUN_180540530(puVar10,puVar3,lVar9);
        *(longlong *)(lVar2 + 0x40) = lVar9 + (longlong)puVar10;
      }
    }
  }
LAB_18043097d:
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x54) = 0;
  if (*(char *)(param_1 + 0x51) != '\0') {
    local_b8 = 0;
    FUN_18045a7d0(local_a8,lVar2,**(undefined8 **)(param_1 + 0x1178),*(undefined4 *)(param_1 + 0xbc)
                 );
    FUN_18045bbe0(param_1 + 0x9a8,local_a8,0,*(char *)(param_1 + 0xd0) == '\0');
    FUN_18045a8e0(local_a8,lVar2,*(undefined8 *)(param_1 + 0x1178));
    FUN_180011610(local_50);
    FUN_180200b70(local_68);
  }
  *(undefined1 *)(param_1 + 0x54) = uVar1;
LAB_1804309fe:
  if (cVar11 != '\0') {
    *(ulonglong *)(lVar2 + 0x28) = *(ulonglong *)(lVar2 + 0x28) & 0xfffffffffffffffb;
    **(ulonglong **)(param_1 + 0x1178) = **(ulonglong **)(param_1 + 0x1178) & 0xfffffffffffffffb;
  }
  return;
}



/* ===== 180430a40 FUN_180430a40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180430a40(longlong param_1,undefined4 param_2,float param_3,float *param_4,
                      longlong param_5)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  float *pfVar16;
  longlong *plVar17;
  float fVar18;
  longlong *plVar19;
  undefined1 uVar20;
  ulonglong *puVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  int iVar31;
  float fVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar35 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar36 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar38 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 uVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float local_res8;
  undefined8 local_308;
  undefined8 uStack_300;
  float local_2f8;
  uint uStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined1 local_2e8;
  undefined1 uStack_2e7;
  undefined2 uStack_2e6;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  uint local_2d8;
  undefined4 uStack_2d4;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  undefined2 uStack_2c8;
  undefined1 uStack_2c6;
  undefined1 uStack_2c5;
  uint uStack_2c4;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  ulonglong local_290;
  undefined8 local_288;
  ulonglong local_280;
  undefined8 uStack_278;
  float local_270;
  uint uStack_26c;
  float fStack_268;
  float fStack_264;
  undefined8 local_260;
  longlong lStack_258;
  undefined8 local_250;
  ulonglong uStack_248;
  longlong local_240;
  longlong lStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
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
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [288];
  
  FUN_180466580(&DAT_180c3c7b0,param_1 + 0x9a8,param_2);
  fVar18 = DAT_1808acda0;
  fVar3 = DAT_1808ac34c;
  if (DAT_1811119c8 != DAT_1811119d0) {
    DAT_1811119d0 = DAT_1811119c8;
  }
  fVar26 = DAT_180c3c9f0;
  if (DAT_180c3c9f0 < 0.0) {
    do {
      FUN_180431870(&DAT_180c3d730,param_1 + 0x2138);
      puVar29 = DAT_180c3d778;
      fVar1 = *param_4;
      _DAT_180c3d738 = _DAT_180c3d738 & 0xfffffffffffffffb;
      _DAT_180c3d748 = _DAT_180c3d748 & 0xfffffffffffffffb;
      if (((((DAT_180c3d75c != fVar1) || (DAT_180c3d760 != param_4[1])) ||
           (DAT_180c3d764 != param_4[2])) ||
          ((DAT_180c3d7a0 != param_4[3] || (DAT_180c3d7a4 != param_4[4])))) ||
         (DAT_180c3d7a8 != param_4[5])) {
        DAT_180c3d760 = param_4[1];
        DAT_180c3d7a0 = param_4[3];
        DAT_180c3d764 = param_4[2];
        DAT_180c3d7a8 = param_4[5];
        DAT_180c3d7a4 = param_4[4];
        puVar30 = DAT_180c3d770;
        DAT_180c3d75c = fVar1;
        if (DAT_180c3d770 != DAT_180c3d778) {
          do {
            if ((char)puVar30[8] != '\0') break;
            puVar30 = puVar30 + 9;
          } while (puVar30 != DAT_180c3d778);
          if (puVar30 != DAT_180c3d778) {
            puVar21 = puVar30 + 9;
            if (puVar21 != DAT_180c3d778) {
              do {
                if ((char)puVar21[8] == '\0') {
                  uVar23 = puVar21[1];
                  *puVar30 = *puVar21;
                  puVar30[1] = uVar23;
                  uVar23 = puVar21[3];
                  puVar30[2] = puVar21[2];
                  puVar30[3] = uVar23;
                  uVar23 = puVar21[5];
                  puVar30[4] = puVar21[4];
                  puVar30[5] = uVar23;
                  uVar4 = *(undefined4 *)((longlong)puVar21 + 0x34);
                  uVar23 = puVar21[7];
                  uVar2 = *(undefined4 *)((longlong)puVar21 + 0x3c);
                  *(int *)(puVar30 + 6) = (int)puVar21[6];
                  *(undefined4 *)((longlong)puVar30 + 0x34) = uVar4;
                  *(int *)(puVar30 + 7) = (int)uVar23;
                  *(undefined4 *)((longlong)puVar30 + 0x3c) = uVar2;
                  puVar30[8] = puVar21[8];
                  puVar30 = puVar30 + 9;
                }
                puVar21 = puVar21 + 9;
              } while (puVar21 != puVar29);
              if (puVar30 == puVar29) goto LAB_180430c8b;
            }
            lVar28 = (longlong)DAT_180c3d778 - (longlong)puVar29;
            FUN_180540530(puVar30,puVar29,lVar28);
            DAT_180c3d778 = (ulonglong *)((longlong)puVar30 + lVar28);
          }
        }
      }
LAB_180430c8b:
      if (*(char *)(param_1 + 0x51) != '\0') {
        uVar20 = *(undefined1 *)(param_1 + 0x54);
        if (((*(char *)(param_1 + 0x76) != '\0') && ((DAT_180c3c818 & 1) != 0)) &&
           (0x10 < (int)DAT_180c3c90c - _DAT_180c3ca34)) {
          uVar20 = 0;
        }
        FUN_18045bbe0(&DAT_180c3c7b0,&DAT_180c3d730,uVar20,*(char *)(param_1 + 0xd0) == '\0');
      }
      if (*(short *)(param_1 + 0x1160) == 0x40) {
        if (*(code **)(param_1 + 0x21b8) == (code *)0x0) {
          FUN_1804301d0(*(undefined4 *)(param_1 + 0x60),&DAT_180c3c7b0,&DAT_180c3d730);
        }
        else {
          (**(code **)(param_1 + 0x21b8))();
        }
      }
      if (*(char *)(param_1 + 0x24) == '\0') {
        local_290 = 4;
        puVar29 = &local_290;
        local_288 = 2;
        do {
          puVar30 = DAT_180c3d778;
          if (0x1f < (ulonglong)
                     (((longlong)DAT_180c3d778 - (longlong)DAT_180c3d770 >> 3) * -0x71c71c71c71c71c7
                     )) break;
          uVar23 = *puVar29;
          if ((uVar23 & (DAT_180c3c928 ^ _DAT_180c3d738)) != 0) {
            bVar6 = false;
            puVar21 = DAT_180c3d770;
            if (DAT_180c3d770 != DAT_180c3d778) {
              do {
                if (puVar21[1] == uVar23) {
                  bVar6 = true;
                }
                puVar21 = puVar21 + 9;
              } while (puVar21 != DAT_180c3d778);
              if (bVar6) {
                if (uVar23 == 4) goto LAB_180430e47;
                break;
              }
            }
            local_2f8 = (float)CONCAT31(local_2f8._1_3_,(_DAT_180c3d738 & uVar23) != 0);
            local_308 = local_308 & 0xffffffff00000000;
            uStack_2f4 = 0;
            fStack_2f0 = 0.0;
            fStack_2ec = 0.0;
            local_2e8 = 0;
            uStack_2e4 = 0;
            uStack_2e0 = 0;
            uStack_2dc = 0;
            local_2d8 = local_2d8 & 0xffffff00;
            uStack_2d4 = 0;
            uStack_2d0 = 0;
            uStack_2cc = 0;
            uStack_2c8 = 0;
            uStack_2c6 = 0;
            uStack_300 = uVar23;
            if (DAT_180c3d778 == DAT_180c3d780) {
              FUN_18008c530(&DAT_180c3d770,DAT_180c3d778,&local_308);
            }
            else {
              *DAT_180c3d778 = local_308;
              puVar30[1] = uVar23;
              puVar30[2] = (ulonglong)(uint)local_2f8;
              puVar30[3] = 0;
              puVar30[4] = (ulonglong)CONCAT21(uStack_2e6,uStack_2e7) << 8;
              puVar30[5] = 0;
              puVar30[6] = (ulonglong)local_2d8;
              puVar30[7] = 0;
              puVar30[8] = (ulonglong)CONCAT41(uStack_2c4,uStack_2c5) << 0x18;
              DAT_180c3d778 = DAT_180c3d778 + 9;
            }
          }
LAB_180430e47:
          puVar29 = puVar29 + 1;
        } while (puVar29 != &local_280);
      }
      auVar35._0_8_ = FUN_18045ad20(&DAT_180c3c7b0,&DAT_180c3d730);
      fVar1 = DAT_180c3c9f0;
      auVar35._8_8_ = extraout_XMM0_Qb;
      if (DAT_180c3c9f0 <= fVar26) break;
      if (*(short *)(param_1 + 0x1160) == 0x40) {
        fVar26 = *(float *)(param_1 + 0xb10);
        auVar35 = ZEXT416((uint)fVar26);
        iVar25 = *(int *)(param_1 + 0xb04);
        if ((fVar26 < 0.0) || (fVar3 <= fVar26)) {
          local_res8 = 0.0;
          auVar35._0_8_ = FUN_180512fd0();
          auVar35._8_8_ = extraout_XMM0_Qb_00;
          fVar26 = (float)auVar35._0_8_;
          if (fVar26 < 0.0) {
            auVar35._0_4_ = fVar26 + fVar3;
            if (auVar35._0_4_ < fVar3) {
              local_res8 = fVar18 + 0.0;
            }
            else {
              auVar35 = ZEXT816(0);
            }
          }
          iVar25 = iVar25 + (int)local_res8;
        }
        if (iVar25 == *(int *)(param_1 + 0xd0c)) {
          bVar6 = auVar35._0_4_ < *(float *)(param_1 + 0xd10);
        }
        else {
          bVar6 = iVar25 < *(int *)(param_1 + 0xd0c);
        }
        if (!bVar6) {
          if (iVar25 == *(int *)(param_1 + 0xcfc)) {
            bVar6 = auVar35._0_4_ < *(float *)(param_1 + 0xd00);
          }
          else {
            bVar6 = iVar25 < *(int *)(param_1 + 0xcfc);
          }
          if (!bVar6) goto LAB_180430f21;
        }
      }
      else {
LAB_180430f21:
        fVar26 = (float)(DAT_180c3c8d0 - *(int *)(param_1 + 0xac8));
        local_294 = 0.0;
        local_29c = fVar26;
        if ((*(int *)(param_1 + 0x60) == 2) || (DAT_180c3cf68 == 0x1f)) {
          auVar35 = ZEXT816(0);
        }
        else {
          FUN_18047d090();
          uVar27 = DAT_180c3cf40;
          if (1 < DAT_180c3cf40) {
            uVar27 = 0;
          }
          if ((DAT_180c3cf60 == 0) || (DAT_1811142d0 == 0)) {
            fVar32 = 0.0;
          }
          else {
            fVar32 = (float)FUN_18000f3d0(DAT_180c3cf60 +
                                          (ulonglong)DAT_1811142d0 + (ulonglong)(uVar27 * 4));
          }
          auVar36._0_8_ = FUN_18047d4f0(&DAT_180c3cf08);
          auVar36._8_8_ = extraout_XMM0_Qb_01;
          auVar35._4_12_ = auVar36._4_12_;
          auVar35._0_4_ = (float)auVar36._0_8_ + fVar32;
          local_294 = auVar35._0_4_;
        }
        pfVar16 = DAT_1811119d0;
        fVar32 = DAT_180c3c90c;
        local_2a8 = DAT_180c3c7d4 + DAT_180c3c7b0;
        local_2a4 = DAT_180c3c7d8 + DAT_180c3c7b4;
        local_2a0 = DAT_180c3c7dc + DAT_180c3c7b8;
        local_298 = DAT_180c3c90c;
        if (DAT_1811119d0 == DAT_1811119d8) {
          auVar35._0_8_ = FUN_18043ab60();
          auVar35._8_8_ = extraout_XMM0_Qb_02;
        }
        else {
          *DAT_1811119d0 = local_2a8;
          pfVar16[1] = local_2a4;
          pfVar16[2] = local_2a0;
          pfVar16[3] = fVar26;
          pfVar16[4] = fVar32;
          pfVar16[5] = auVar35._0_4_;
          DAT_1811119d0 = DAT_1811119d0 + 6;
        }
      }
      fVar26 = fVar1;
    } while (DAT_180c3c9f0 < 0.0);
    if (DAT_1811119c8 != DAT_1811119d0) {
      *(undefined2 *)(param_1 + 0x1bd0) = 0;
      *(undefined8 *)(param_1 + 0x1c78) = 0;
      *(undefined8 *)(param_1 + 0x1b80) = 0;
      *(undefined2 *)(param_1 + 0x1c98) = 0;
      if (*(longlong *)(param_1 + 0x1ba0) != *(longlong *)(param_1 + 0x1ba8)) {
        *(longlong *)(param_1 + 0x1ba8) = *(longlong *)(param_1 + 0x1ba0);
      }
      if (*(longlong *)(param_1 + 0x1bb8) != *(longlong *)(param_1 + 0x1bc0)) {
        *(longlong *)(param_1 + 0x1bc0) = *(longlong *)(param_1 + 0x1bb8);
      }
      if (*(longlong *)(param_1 + 0x1c60) != *(longlong *)(param_1 + 0x1c68)) {
        *(longlong *)(param_1 + 0x1c68) = *(longlong *)(param_1 + 0x1c60);
      }
      uStack_2f4 = uStack_2f4 & 0xffffff00;
      uStack_2b0 = 0;
      uStack_2cc = 0;
      uStack_2c8 = 0;
      uStack_2c6 = 0;
      uStack_2c5 = 0;
      local_280 = *(ulonglong *)(DAT_1811119d0 + -6);
      fStack_2ec = DAT_1811119d0[-1];
      local_2f8 = DAT_1811119d0[-2];
      auVar7._4_8_ = auVar35._8_8_;
      auVar7._0_4_ = local_308._4_4_;
      auVar37._0_8_ = auVar7._0_8_ << 0x20;
      auVar37._8_4_ = DAT_1811119d0[-4];
      auVar37._12_4_ = local_2f8;
      fStack_2f0 = (float)(int)DAT_1811119d0[-3];
      uStack_2e0 = 0;
      local_2d8 = 0;
      uStack_2d4 = 0;
      local_2e8 = 0;
      uStack_2e7 = 0;
      uStack_2e6 = 0;
      uStack_2e4 = 0;
      uStack_2dc = uStack_2dc & 0xffffff00;
      uStack_300 = auVar37._8_8_;
      uStack_2d0 = uStack_2d0 & 0xffffff00;
      uStack_2c0 = 0;
      uStack_2c4 = uStack_2c4 & 0xffffff00;
      uStack_2bc = uStack_2bc & 0xffffff00;
      local_2b8 = 0;
      uStack_26c = uStack_2f4;
      uStack_248 = (ulonglong)uStack_2d0;
      lStack_258 = (ulonglong)uStack_2dc << 0x20;
      local_250 = 0;
      local_260 = 0;
      local_240 = (ulonglong)uStack_2c4 << 0x20;
      lStack_238 = (ulonglong)uStack_2bc << 0x20;
      local_230 = 0;
      uStack_22c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      local_308 = local_280;
      uStack_278 = uStack_300;
      local_270 = local_2f8;
      fStack_268 = fStack_2f0;
      fStack_264 = fStack_2ec;
      FUN_18043a500(param_1 + 0x1bb8);
      uVar23 = ((longlong)DAT_1811119d0 - (longlong)DAT_1811119c8 >> 3) * -0x5555555555555555;
      if (1 < uVar23) {
        uStack_2f4 = uStack_2f4 & 0xffffff00;
        uVar23 = (ulonglong)(longlong)*(int *)(param_1 + 0xbc) % (uVar23 - 1);
        uStack_2cc = 0;
        uStack_2c8 = 0;
        uStack_2c6 = 0;
        uStack_2c5 = 0;
        uStack_2b0 = 0;
        uStack_2e0 = 0;
        local_2d8 = 0;
        uStack_2d4 = 0;
        local_2e8 = 0;
        uStack_2e7 = 0;
        uStack_2e6 = 0;
        uStack_2e4 = 0;
        local_280 = *(ulonglong *)(DAT_1811119c8 + uVar23 * 6);
        fStack_2ec = DAT_1811119c8[uVar23 * 6 + 5];
        local_2f8 = DAT_1811119c8[uVar23 * 6 + 4];
        auVar8._4_8_ = extraout_XMM0_Qb_03;
        auVar8._0_4_ = local_308._4_4_;
        auVar38._0_8_ = auVar8._0_8_ << 0x20;
        auVar38._8_4_ = DAT_1811119c8[uVar23 * 6 + 2];
        auVar38._12_4_ = local_2f8;
        fStack_2f0 = (float)(int)DAT_1811119c8[uVar23 * 6 + 3];
        uStack_2dc = uStack_2dc & 0xffffff00;
        uStack_2d0 = uStack_2d0 & 0xffffff00;
        uStack_2c0 = 0;
        uStack_2c4 = uStack_2c4 & 0xffffff00;
        uStack_300 = auVar38._8_8_;
        uStack_2bc = uStack_2bc & 0xffffff00;
        local_2b8 = 0;
        uStack_26c = uStack_2f4;
        uStack_248 = (ulonglong)uStack_2d0;
        lStack_258 = (ulonglong)uStack_2dc << 0x20;
        local_250 = 0;
        local_260 = 0;
        local_240 = (ulonglong)uStack_2c4 << 0x20;
        lStack_238 = (ulonglong)uStack_2bc << 0x20;
        local_230 = 0;
        uStack_22c = 0;
        uStack_228 = 0;
        uStack_224 = 0;
        local_308 = local_280;
        uStack_278 = uStack_300;
        local_270 = local_2f8;
        fStack_268 = fStack_2f0;
        fStack_264 = fStack_2ec;
        FUN_18043a500(param_1 + 0x1bb8,&local_280);
        if ((param_3 != DAT_1811119c8[uVar23 * 6 + 4]) &&
           (pfVar16 = DAT_1811119c8, param_3 != DAT_1811119d0[-2])) {
          for (; pfVar16 != DAT_1811119d0; pfVar16 = pfVar16 + 6) {
            fVar3 = pfVar16[4];
            if (fVar3 == param_3) {
              local_280 = *(ulonglong *)pfVar16;
              fStack_2ec = pfVar16[5];
              uStack_2b0 = 0;
              auVar9._4_8_ = extraout_XMM0_Qb_04;
              auVar9._0_4_ = local_308._4_4_;
              auVar39._0_8_ = auVar9._0_8_ << 0x20;
              auVar39._8_4_ = pfVar16[2];
              auVar39._12_4_ = fVar3;
              uStack_2f4 = uStack_2f4 & 0xffffff00;
              fStack_2f0 = (float)(int)pfVar16[3];
              uStack_2cc = 0;
              uStack_2c8 = 0;
              uStack_2c6 = 0;
              uStack_2c5 = 0;
              uStack_2e0 = 0;
              local_2d8 = 0;
              uStack_2d4 = 0;
              local_2e8 = 0;
              uStack_2e7 = 0;
              uStack_2e6 = 0;
              uStack_2e4 = 0;
              uStack_300 = auVar39._8_8_;
              uStack_2dc = uStack_2dc & 0xffffff00;
              uStack_2d0 = uStack_2d0 & 0xffffff00;
              uStack_2c0 = 0;
              uStack_2c4 = uStack_2c4 & 0xffffff00;
              uStack_2bc = uStack_2bc & 0xffffff00;
              local_2b8 = 0;
              uStack_26c = uStack_2f4;
              uStack_248 = (ulonglong)uStack_2d0;
              lStack_258 = (ulonglong)uStack_2dc << 0x20;
              local_250 = 0;
              local_260 = 0;
              local_240 = (ulonglong)uStack_2c4 << 0x20;
              lStack_238 = (ulonglong)uStack_2bc << 0x20;
              local_230 = 0;
              uStack_22c = 0;
              uStack_228 = 0;
              uStack_224 = 0;
              local_308 = local_280;
              local_2f8 = fVar3;
              uStack_278 = uStack_300;
              local_270 = fVar3;
              fStack_268 = fStack_2f0;
              fStack_264 = fStack_2ec;
              FUN_18043a500(param_1 + 0x1bb8,&local_280);
              break;
            }
          }
        }
      }
      iVar25 = DAT_181111d9c;
      uVar27 = 0;
      if (0 < DAT_181111d9c) {
        do {
          if (2 < uVar27) break;
          uVar23 = (ulonglong)uVar27;
          if ((&DAT_180c87458)[uVar23 * 0x201] != 0) {
            iVar24 = (*(int *)(&DAT_180c88440 + uVar23 * 0x1008) - *(int *)(param_1 + 0xac8)) +
                     DAT_180c3c8d0;
            iVar31 = (int)((float)(int)(&DAT_180c8843c)[uVar23 * 0x402] + *(float *)(param_1 + 0x1c)
                          );
            if (iVar31 < (int)DAT_180c3c90c + -0xc) {
              iVar31 = (int)DAT_180c3c90c + -0xc;
            }
            if (iVar31 <= iVar24) {
              iVar24 = iVar31;
            }
            FUN_18042e250(&DAT_180c87450 + uVar23 * 0x402,iVar24);
          }
          uVar27 = uVar27 + 1;
        } while ((int)uVar27 < iVar25);
      }
      FUN_18042df10(param_1,&DAT_180c3c7b0);
      *(float *)(param_1 + 0x1bec) = DAT_180c3c7b0;
      *(float *)(param_1 + 0x1bf0) = DAT_180c3c7b4;
      *(float *)(param_1 + 0x1bf4) = DAT_180c3c7b8;
      if ((*(char *)(param_1 + 0xd0) == '\0') || (*(int *)(param_1 + 0x60) != 2)) {
        uVar20 = 1;
      }
      else {
        uVar20 = 0;
      }
      *(undefined1 *)(param_1 + 0x1c04) = uVar20;
      uVar20 = FUN_180474850(&DAT_180c3c7b0,0,*(undefined1 *)(param_1 + 8));
      *(undefined1 *)(param_1 + 0x1bd0) = uVar20;
      plVar19 = DAT_181111dd8;
      uVar45 = extraout_XMM0_Qb_05;
      plVar17 = DAT_181111dd0;
      if (param_5 == 0) {
        for (; plVar17 != plVar19; plVar17 = plVar17 + 1) {
          if ((*plVar17 != 0) && (*(char *)(*plVar17 + 0x28) != '\0')) {
            pauVar22 = (undefined1 (*) [16])FUN_18042dfd0(local_148);
            local_208 = *(undefined8 *)pauVar22[1];
            uStack_200 = *(undefined8 *)(pauVar22[1] + 8);
            local_1f8 = *(undefined8 *)pauVar22[2];
            uStack_1f0 = *(undefined8 *)(pauVar22[2] + 8);
            local_218 = *pauVar22;
            local_1e8 = *(undefined8 *)pauVar22[3];
            uStack_1e0 = *(undefined8 *)(pauVar22[3] + 8);
            local_1d8 = *(undefined8 *)pauVar22[4];
            uStack_1d0 = *(undefined8 *)(pauVar22[4] + 8);
            local_1c8 = *(undefined8 *)pauVar22[5];
            uStack_1c0 = *(undefined8 *)(pauVar22[5] + 8);
            local_1b8 = *(undefined8 *)pauVar22[6];
            uStack_1b0 = *(undefined8 *)(pauVar22[6] + 8);
            local_1a8 = *(undefined8 *)pauVar22[7];
            uStack_1a0 = *(undefined8 *)(pauVar22[7] + 8);
            local_198 = *(undefined8 *)pauVar22[8];
            uStack_190 = *(undefined8 *)(pauVar22[8] + 8);
            local_188 = *(undefined8 *)pauVar22[9];
            uStack_180 = *(undefined8 *)(pauVar22[9] + 8);
            local_178 = *(undefined8 *)pauVar22[10];
            uStack_170 = *(undefined8 *)(pauVar22[10] + 8);
            local_168 = *(undefined8 *)pauVar22[0xb];
            uStack_160 = *(undefined8 *)(pauVar22[0xb] + 8);
            local_158 = *(undefined4 *)pauVar22[0xc];
            uStack_154 = *(undefined4 *)(pauVar22[0xc] + 4);
            uStack_150 = *(undefined4 *)(pauVar22[0xc] + 8);
            uStack_14c = *(undefined4 *)(pauVar22[0xc] + 0xc);
            FUN_18043a730(param_1 + 0x1ba0,local_218);
            uVar45 = extraout_XMM0_Qb_07;
          }
        }
      }
      else if (*(char *)(param_5 + 0x28) != '\0') {
        pauVar22 = (undefined1 (*) [16])FUN_18042dfd0(local_148);
        local_208 = *(undefined8 *)pauVar22[1];
        uStack_200 = *(undefined8 *)(pauVar22[1] + 8);
        local_1f8 = *(undefined8 *)pauVar22[2];
        uStack_1f0 = *(undefined8 *)(pauVar22[2] + 8);
        local_218 = *pauVar22;
        local_1e8 = *(undefined8 *)pauVar22[3];
        uStack_1e0 = *(undefined8 *)(pauVar22[3] + 8);
        local_1d8 = *(undefined8 *)pauVar22[4];
        uStack_1d0 = *(undefined8 *)(pauVar22[4] + 8);
        local_1c8 = *(undefined8 *)pauVar22[5];
        uStack_1c0 = *(undefined8 *)(pauVar22[5] + 8);
        local_1b8 = *(undefined8 *)pauVar22[6];
        uStack_1b0 = *(undefined8 *)(pauVar22[6] + 8);
        local_1a8 = *(undefined8 *)pauVar22[7];
        uStack_1a0 = *(undefined8 *)(pauVar22[7] + 8);
        local_198 = *(undefined8 *)pauVar22[8];
        uStack_190 = *(undefined8 *)(pauVar22[8] + 8);
        local_188 = *(undefined8 *)pauVar22[9];
        uStack_180 = *(undefined8 *)(pauVar22[9] + 8);
        local_178 = *(undefined8 *)pauVar22[10];
        uStack_170 = *(undefined8 *)(pauVar22[10] + 8);
        local_168 = *(undefined8 *)pauVar22[0xb];
        uStack_160 = *(undefined8 *)(pauVar22[0xb] + 8);
        local_158 = *(undefined4 *)pauVar22[0xc];
        uStack_154 = *(undefined4 *)(pauVar22[0xc] + 4);
        uStack_150 = *(undefined4 *)(pauVar22[0xc] + 8);
        uStack_14c = *(undefined4 *)(pauVar22[0xc] + 0xc);
        FUN_18043a730(param_1 + 0x1ba0,local_218);
        uVar45 = extraout_XMM0_Qb_06;
      }
      *(undefined4 *)(param_1 + 0x1b98) = *(undefined4 *)(param_1 + 0xb04);
      *(undefined8 *)(param_1 + 0x1b80) = *(undefined8 *)(param_1 + 0xaf0);
      *(undefined8 *)(param_1 + 0x1b90) = *(undefined8 *)(param_1 + 0x1150);
      uVar4 = *(undefined4 *)(param_1 + 0x60);
      uStack_300 = CONCAT44(uVar4,(undefined4)uStack_300);
      local_2f8 = *(float *)(param_1 + 0x20);
      auVar10._4_8_ = uVar45;
      auVar10._0_4_ = local_308._4_4_;
      auVar40._0_8_ = auVar10._0_8_ << 0x20;
      auVar40._8_4_ = (undefined4)uStack_300;
      auVar40._12_4_ = uVar4;
      fStack_2f0 = *(float *)(param_1 + 4);
      local_2e8 = *(undefined1 *)(param_1 + 0x24);
      uStack_2e7 = *(undefined1 *)(param_1 + 0x40);
      auVar11._4_8_ = auVar40._8_8_;
      auVar11._0_4_ = *(undefined4 *)(param_1 + 0x10);
      auVar41._0_8_ = auVar11._0_8_ << 0x20;
      auVar41._8_4_ = (undefined4)uStack_300;
      auVar41._12_4_ = uVar4;
      uStack_2e4 = *(undefined4 *)(param_1 + 0x3c);
      uStack_2e0 = *(undefined4 *)(param_1 + 0x38);
      auVar12._4_8_ = auVar41._8_8_;
      auVar12._0_4_ = *(undefined4 *)(param_1 + 0x10);
      auVar33._0_8_ = auVar12._0_8_ << 0x20;
      auVar33._8_4_ = *(undefined4 *)(param_1 + 0x4c);
      uStack_2dc = *(undefined4 *)(param_1 + 0x44);
      auVar42._0_8_ = auVar33._4_8_;
      auVar42._8_4_ = *(undefined4 *)(param_1 + 0x14);
      auVar42._12_4_ = uVar4;
      uVar4 = *(undefined4 *)(param_1 + 0x48);
      uStack_2c8 = (undefined2)uVar4;
      uStack_2c6 = (undefined1)((uint)uVar4 >> 0x10);
      uStack_2c5 = (undefined1)((uint)uVar4 >> 0x18);
      uStack_2c4 = *(undefined4 *)(param_1 + 100);
      *(undefined1 (*) [16])(param_1 + 0x1c08) = auVar42;
      auVar15._4_4_ = uStack_2f4;
      auVar15._0_4_ = local_2f8;
      auVar15._8_4_ = fStack_2f0;
      auVar15._12_4_ = fStack_2ec;
      auVar13._4_8_ = auVar15._8_8_;
      auVar13._0_4_ = local_2f8;
      auVar43._0_8_ = auVar13._0_8_ << 0x20;
      auVar43._8_4_ = fStack_2f0;
      auVar43._12_4_ = fStack_2ec;
      auVar14._4_8_ = auVar43._8_8_;
      auVar14._0_4_ = local_2f8;
      auVar34._0_8_ = auVar14._0_8_ << 0x20;
      auVar34._8_4_ = *(undefined4 *)(param_1 + 0x1c);
      auVar44._0_8_ = auVar34._4_8_;
      auVar44._8_4_ = fStack_2f0;
      auVar44._12_4_ = *(undefined4 *)(param_1 + 0xc);
      *(undefined1 (*) [16])(param_1 + 0x1c18) = auVar44;
      *(ulonglong *)(param_1 + 0x1c28) =
           CONCAT44(uStack_2e4,CONCAT22(uStack_2e6,CONCAT11(uStack_2e7,local_2e8)));
      *(ulonglong *)(param_1 + 0x1c30) = CONCAT44(uStack_2dc,uStack_2e0);
      *(undefined4 *)(param_1 + 0x1c38) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x1c3c) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x1c40) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x1c44) = *(undefined4 *)(param_1 + 0x34);
      *(ulonglong *)(param_1 + 0x1c48) = CONCAT44(uStack_2c4,uVar4);
      *(undefined8 *)(param_1 + 0x1bd4) = *(undefined8 *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x1bdc) = *(undefined4 *)(param_1 + 0xac);
      *(undefined8 *)(param_1 + 0x1be0) = *(undefined8 *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0x1be8) = *(undefined4 *)(param_1 + 0xa0);
      puVar5 = *(undefined4 **)(param_1 + 0x1170);
      uVar4 = puVar5[1];
      uVar2 = puVar5[2];
      *(undefined4 *)(param_1 + 0x1bf8) = *puVar5;
      *(undefined4 *)(param_1 + 0x1bfc) = uVar4;
      *(undefined4 *)(param_1 + 0x1c00) = uVar2;
      FUN_18042e190();
      lVar28 = FUN_1804460e0(param_1 + 0x1b80,param_1 + 0x1ed0);
      if ((lVar28 != 0) &&
         (fVar3 = *(float *)(*(longlong *)(lVar28 + 0x10) + 0x6c),
         fVar3 < *(float *)(lVar28 + 0xc) || fVar3 == *(float *)(lVar28 + 0xc))) {
        if (*(float *)(param_1 + 0x4c) < *(float *)(lVar28 + 0x44) ||
            *(float *)(param_1 + 0x4c) == *(float *)(lVar28 + 0x44)) {
          return lVar28;
        }
        return 0;
      }
    }
  }
  return 0;
}



/* ===== 180431870 FUN_180431870 ===== */

undefined4 * FUN_180431870(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  if (param_1 != param_2) {
    FUN_1802009d0(param_1 + 0x10,*(longlong *)(param_2 + 0x10),
                  (*(longlong *)(param_2 + 0x12) - *(longlong *)(param_2 + 0x10) >> 3) *
                  -0x71c71c71c71c71c7);
    FUN_18025ce80(param_1 + 0x16,*(longlong *)(param_2 + 0x16),
                  (*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x16) >> 2) *
                  -0x5555555555555555);
  }
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x7e);
  return param_1;
}



/* ===== 180431960 FUN_180431960 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180431960(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_180919500 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if ((*(char *)(param_1 + 0x56) != '\0') && ((*(byte *)(param_1 + 0x1188) & 4) == 0)) {
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if ((*(char *)(param_1 + 0x71) != '\0') &&
       ((*(char *)(param_1 + 0x72) == '\0' && ((*(byte *)(param_1 + 0xa10) & 1) != 0)))) {
      cVar1 = *(char *)(param_1 + 0x7a);
      iVar2 = *(int *)(param_1 + 0xb04);
      if ((*(char *)(param_1 + 0x73) == '\0') ||
         ((*(short *)(param_1 + 0x1160) == 0x40 &&
          ((iVar2 < *(int *)(param_1 + 0xd0c) || (*(int *)(param_1 + 0xd0c) + 1 < iVar2)))))) {
        if ((cVar1 != '\0') && (iVar2 <= *(int *)(param_1 + 0x3928))) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          goto LAB_180431c9e;
        }
      }
      else if (((cVar1 != '\0') ||
               ((DAT_1808ac838 < *(float *)(param_1 + 0xbb0) ||
                 DAT_1808ac838 == *(float *)(param_1 + 0xbb0) && (*(char *)(param_1 + 0x78) != '\0')
                ))) && (cVar4 = FUN_18042ff30(param_1 + 0x9a8), cVar4 != '\0')) {
        if (cVar1 == '\0') {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + 0x3928);
        }
        if ((((*(int *)(param_1 + 0xa14) != -1) && (lVar5 = FUN_18042fda0(), lVar5 != 0)) &&
            (lVar5 = FUN_18000f3a0(lVar5), DAT_180ca0a58 != 0)) && (lVar5 == DAT_180ca0a58)) {
          uVar6 = 0;
        }
        local_68 = *(float *)(param_1 + 0x2164);
        fStack_64 = *(float *)(param_1 + 0x2168);
        fStack_60 = *(float *)(param_1 + 0x216c);
        local_50 = *(float *)(param_1 + 0x2164);
        fStack_4c = *(float *)(param_1 + 0x2168);
        fStack_48 = *(float *)(param_1 + 0x216c);
        fStack_5c = *(float *)(param_1 + 0x21a8);
        local_78 = 0;
        local_58 = *(undefined8 *)(param_1 + 0x21ac);
        local_40 = *(undefined8 *)(param_1 + 0x21ac);
        fStack_44 = fStack_5c;
        lVar5 = FUN_180430a40(param_1,uVar6 | 0x10,uVar7,&local_50);
        if ((lVar5 == 0) && (cVar1 != '\0')) {
          if ((((local_50 == *(float *)(param_1 + 0x390c)) &&
               ((fStack_4c == *(float *)(param_1 + 0x3910) &&
                (fStack_48 == *(float *)(param_1 + 0x3914))))) &&
              ((fStack_44 == *(float *)(param_1 + 0x3918) &&
               (((float)local_40 == *(float *)(param_1 + 0x391c) &&
                (local_40._4_4_ == *(float *)(param_1 + 0x3920))))))) ||
             ((iVar2 = *(int *)(param_1 + 0x3924), iVar2 < 0 ||
              (((ulonglong)(DAT_181111da8 - DAT_181111da0 >> 6) <= (ulonglong)(longlong)iVar2 ||
               (lVar5 = (longlong)iVar2 * 0x40, *(int *)(lVar5 + 0x18 + DAT_181111da0) != 2)))))) {
            *(undefined4 *)(param_1 + 0x7c) = 2;
            goto LAB_180431c7e;
          }
          local_78 = lVar5 + DAT_181111da0;
          local_68 = *(float *)(param_1 + 0x390c);
          fStack_64 = *(float *)(param_1 + 0x3910);
          fStack_60 = *(float *)(param_1 + 0x3914);
          fStack_5c = *(float *)(param_1 + 0x3918);
          local_58 = *(undefined8 *)(param_1 + 0x391c);
          lVar5 = FUN_180430a40(param_1,uVar6 | 0x10,uVar7,&local_68);
        }
        *(undefined4 *)(param_1 + 0x7c) = 2;
        if (lVar5 != 0) {
          *(undefined4 *)(param_1 + 0x7c) = 3;
          lVar3 = *(longlong *)(lVar5 + 0x10);
          *(undefined4 *)(param_1 + 0x391c) = (undefined4)local_58;
          *(float *)(param_1 + 0x390c) = local_68;
          *(float *)(param_1 + 0x3910) = fStack_64;
          *(float *)(param_1 + 0x3914) = fStack_60;
          *(float *)(param_1 + 0x3918) = fStack_5c;
          *(undefined4 *)(param_1 + 0x3920) = local_58._4_4_;
          lVar3 = *(longlong *)(lVar3 + 8);
          uVar7 = 0;
          if (lVar3 != 0) {
            uVar7 = *(undefined4 *)(lVar3 + 0x10);
          }
          *(undefined4 *)(param_1 + 0x3924) = uVar7;
          *(undefined4 *)(param_1 + 0x3928) = *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0xc);
          if (*(char *)(param_1 + 0x7a) == '\0') {
            *(undefined1 *)(param_1 + 0x7a) = 1;
          }
          goto LAB_180431c9e;
        }
      }
LAB_180431c7e:
      *(undefined1 *)(param_1 + 0x7a) = 0;
      goto LAB_180431c9e;
    }
  }
  *(undefined1 *)(param_1 + 0x7a) = 0;
LAB_180431c9e:
  FUN_180430790(param_1);
  return;
}



/* ===== 180431ce0 FUN_180431ce0 ===== */

void FUN_180431ce0(void)

{
  int iVar1;
  char **ppcVar2;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  char *local_10;
  
  if ((DAT_180c3aca0 == '\0') && (DAT_1811089f0 != 0)) {
    ppcVar2 = &local_88;
    local_88 = "C_BaseEntity";
    DAT_180c3aca0 = '\x01';
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pGameSceneNode");
      if (iVar1 != 0) goto LAB_180431d52;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_80);
    iVar1 = 0;
LAB_180431d52:
    local_80 = "CGameSceneNode";
    ppcVar2 = &local_80;
    DAT_180c3aca4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecOrigin");
      if (iVar1 != 0) goto LAB_180431d92;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_78);
    iVar1 = 0;
LAB_180431d92:
    ppcVar2 = &local_78;
    local_78 = "CGameSceneNode";
    DAT_180c3aca8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_angAbsRotation");
      if (iVar1 != 0) goto LAB_180431dc2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_70);
    iVar1 = 0;
LAB_180431dc2:
    ppcVar2 = &local_70;
    local_70 = "C_BaseModelEntity";
    DAT_180c3acac = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_Collision");
      if (iVar1 != 0) goto LAB_180431e02;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_68);
    iVar1 = 0;
LAB_180431e02:
    local_68 = "CCollisionProperty";
    ppcVar2 = &local_68;
    DAT_180c3acb0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecMins");
      if (iVar1 != 0) goto LAB_180431e42;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_60);
    iVar1 = 0;
LAB_180431e42:
    ppcVar2 = &local_60;
    local_60 = "CCollisionProperty";
    DAT_180c3acb4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_vecMaxs");
      if (iVar1 != 0) goto LAB_180431e72;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_58);
    iVar1 = 0;
LAB_180431e72:
    ppcVar2 = &local_58;
    local_58 = "C_BaseEntity";
    DAT_180c3acb8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_pCollision");
      if (iVar1 != 0) goto LAB_180431ea2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_50);
    iVar1 = 0;
LAB_180431ea2:
    ppcVar2 = &local_50;
    local_50 = "CCollisionProperty";
    DAT_180c3acbc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_collisionAttribute");
      if (iVar1 != 0) goto LAB_180431ed2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_48);
    iVar1 = 0;
LAB_180431ed2:
    ppcVar2 = &local_48;
    local_48 = "VPhysicsCollisionAttribute_t";
    DAT_180c3acc0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_nHierarchyId");
      if (iVar1 != 0) {
        DAT_180c3acc4 = iVar1;
        break;
      }
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_40);
    local_40 = "CCollisionProperty";
    ppcVar2 = &local_40;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_usSolidFlags");
      if (iVar1 != 0) goto LAB_180431f52;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_38);
    iVar1 = 0;
LAB_180431f52:
    ppcVar2 = &local_38;
    local_38 = "C_BaseEntity";
    DAT_180c3acc8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_hOwnerEntity");
      if (iVar1 != 0) goto LAB_180431f82;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_30);
    iVar1 = 0;
LAB_180431f82:
    ppcVar2 = &local_30;
    local_30 = "C_BaseEntity";
    DAT_180c3accc = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iTeamNum");
      if (iVar1 != 0) goto LAB_180431fb2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_28);
    iVar1 = 0;
LAB_180431fb2:
    local_28 = "C_BaseEntity";
    ppcVar2 = &local_28;
    DAT_180c3acd0 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_iHealth");
      if (iVar1 != 0) goto LAB_180431ff2;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_20);
    iVar1 = 0;
LAB_180431ff2:
    ppcVar2 = &local_18;
    local_18 = "C_CSPlayerPawn";
    local_10 = "C_CSPlayerPawnBase";
    DAT_180c3acd4 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_ArmorValue");
      if (iVar1 != 0) goto LAB_180432042;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != (char **)((longlong)register0x00000020 + -8));
    iVar1 = 0;
LAB_180432042:
    ppcVar2 = &local_20;
    local_20 = "CCSWeaponBaseVData";
    DAT_180c3acd8 = iVar1;
    do {
      iVar1 = FUN_18038eaf0(*ppcVar2,"m_flCycleTime");
      if (iVar1 != 0) goto LAB_180432082;
      ppcVar2 = ppcVar2 + 1;
    } while (ppcVar2 != &local_18);
    iVar1 = 0;
LAB_180432082:
    DAT_180c3acdc = iVar1;
  }
  return;
}



/* ===== 1804320a0 FUN_1804320a0 ===== */

undefined8 FUN_1804320a0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0xffffffff) && (DAT_1809619d0 != 0)) {
    lVar2 = FUN_18000f3a0();
    if (lVar2 != 0) {
      lVar2 = FUN_18000f3a0((ulonglong)(param_1 >> 6 & 0x1f8) + lVar2 + 0x10);
      if (lVar2 != 0) {
        lVar2 = (ulonglong)(param_1 & 0x1ff) * 0x70 + lVar2;
        uVar1 = FUN_180011200(lVar2 + 0x10);
        if ((uVar1 & 0x7fff) == (param_1 & 0x7fff)) {
          uVar3 = FUN_18000f3a0(lVar2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



