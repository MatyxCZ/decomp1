/* ===== 180409940 FUN_180409940 ===== */

longlong FUN_180409940(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    if (uVar1 == 0xfffe) {
      return 0;
    }
    if (uVar1 != 0xffff) {
      return (ulonglong)uVar1 * 0x2c + *(longlong *)(param_1 + 0x38);
    }
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x8000000;
  lVar2 = FUN_180408100(param_1,param_2,0);
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xf7ffffff;
  return lVar2;
}



/* ===== 1804099b0 FUN_1804099b0 ===== */

undefined8 FUN_1804099b0(longlong param_1,undefined2 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x38) != 0) {
    param_2 = FUN_1803d8260((int *)(param_1 + 0x38),param_2,param_2);
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  plVar1 = plVar5 + *(int *)(param_1 + 0x20);
  if (((longlong)*(int *)(param_1 + 0x20) & 0x1fffffffffffffffU) != 0) {
    do {
      lVar4 = *(longlong *)(*plVar5 + 0x88);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(lVar2 + 0x2b8);
      }
      if (*(code **)(lVar4 + 0x28) != (code *)0x0) {
        cVar3 = (**(code **)(lVar4 + 0x28))(lVar2,*plVar5,param_2);
        if (cVar3 != '\0') {
          return 1;
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return 0;
}



/* ===== 180409a40 FUN_180409a40 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180409a40(longlong *param_1,float param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_a8 [32];
  uint local_88;
  uint local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  float local_64;
  float local_60;
  byte local_5c [4];
  ulonglong local_58;
  
  local_58 = DAT_180919500 ^ (ulonglong)auStack_a8;
  lVar3 = *param_1;
  fVar12 = (float)(int)(param_2 + DAT_1808ac1f4);
  if (param_3 < 0.0) {
    param_3 = *(float *)((longlong)param_1 + 0x14);
  }
  if (((lVar3 != 0) && (*(float *)(lVar3 + 0x14) == fVar12)) &&
     (*(float *)(lVar3 + 0x18) == param_3)) {
    return lVar3;
  }
  pbVar9 = (byte *)&local_68;
  uVar11 = 0xffffffff;
  lVar3 = param_1[1];
  local_64 = fVar12;
  lVar4 = *(longlong *)(lVar3 + 0x2b0);
  local_60 = param_3;
  local_68 = (int)param_1[3];
  do {
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    uVar10 = (uint)(uVar11 >> 8) ^
             *(uint *)(&DAT_1806c25c0 + (uVar11 & 0xff ^ (ulonglong)bVar1) * 4);
    uVar11 = (ulonglong)uVar10;
  } while (pbVar9 < local_5c);
  iVar2 = *(int *)(lVar4 + 0xd8);
  uVar10 = ~uVar10;
  puVar5 = *(uint **)(lVar4 + 0xe0);
  uVar11 = (longlong)iVar2;
  puVar6 = puVar5;
  if (iVar2 != 0) {
    do {
      uVar8 = uVar11 >> 1;
      if (puVar6[uVar8 * 4] < uVar10) {
        puVar6 = puVar6 + uVar8 * 4 + 4;
        uVar8 = uVar11 + (-1 - uVar8);
      }
      uVar11 = uVar8;
    } while (uVar8 != 0);
  }
  if ((puVar6 == puVar5 + (longlong)iVar2 * 4) || (*puVar6 != uVar10)) {
    local_70 = 0;
    local_78[0] = uVar10;
    puVar6 = (uint *)FUN_1803f6880(lVar4 + 0xd8,puVar6,local_78);
  }
  lVar7 = *(longlong *)(puVar6 + 2);
  if (lVar7 == 0) {
    if (((*(byte *)(param_1 + 2) & 8) == 0) && (*(char *)(lVar3 + 0x50) == '\0')) {
LAB_180409bd0:
      local_88 = uVar10;
      lVar7 = FUN_180405160(lVar3,param_1,fVar12,param_3);
      *(longlong *)(puVar6 + 2) = lVar7;
      if (lVar7 == 0) {
LAB_180409bfd:
        lVar7 = 0;
        goto LAB_180409c1f;
      }
    }
    else {
      lVar7 = FUN_1804054a0(lVar3,param_1,fVar12,param_3);
      if (lVar7 == 0) {
        if (*(char *)(lVar3 + 0x50) == '\0') goto LAB_180409bd0;
        goto LAB_180409bfd;
      }
    }
  }
  *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(lVar4 + 0xa4);
  *param_1 = lVar7;
LAB_180409c1f:
  return lVar7;
}



/* ===== 180409c40 FUN_180409c40 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180409c40(void)

{
  uint uVar1;
  int iVar2;
  sbyte sVar3;
  char *pcVar4;
  uint uVar5;
  uint local_res8 [2];
  
  if ((_DAT_181111880 & 0x3000000) == 0) {
    uVar5 = 0;
    do {
      (&DAT_181111878)[uVar5 >> 4] = (&DAT_181111878)[uVar5 >> 4] & 0xfffffffc | 2;
      uVar1 = uVar5 + 1 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xfffffff3 | 8;
      uVar1 = uVar5 + 2 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xffffffcf | 0x20;
      uVar1 = uVar5 + 3 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xffffff3f | 0x80;
      uVar1 = uVar5 + 4 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xfffffcff | 0x200;
      uVar1 = uVar5 + 5 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xfffff3ff | 0x800;
      uVar1 = uVar5 + 6 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xffffcfff | 0x2000;
      uVar1 = uVar5 + 7 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xffff3fff | 0x8000;
      uVar1 = uVar5 + 8 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xfffcffff | 0x20000;
      uVar1 = uVar5 + 9 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xfff3ffff | 0x80000;
      uVar1 = uVar5 + 10 >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xffcfffff | 0x200000;
      uVar1 = uVar5 + 0xb >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xff3fffff | 0x800000;
      uVar1 = uVar5 + 0xc >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xfcffffff | 0x2000000;
      uVar1 = uVar5 + 0xd >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xf3ffffff | 0x8000000;
      uVar1 = uVar5 + 0xe >> 4;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0xcfffffff | 0x20000000;
      uVar1 = uVar5 + 0xf >> 4;
      uVar5 = uVar5 + 0x10;
      (&DAT_181111878)[uVar1] = (&DAT_181111878)[uVar1] & 0x3fffffff | 0x80000000;
    } while (uVar5 < 0x80);
    pcVar4 = " \t";
    do {
      iVar2 = FUN_1803d7c80(local_res8,pcVar4,&DAT_1808a9566);
      pcVar4 = pcVar4 + iVar2;
      (&DAT_181111878)[local_res8[0] >> 4] =
           (&DAT_181111878)[local_res8[0] >> 4] & ~(3 << ((byte)local_res8[0] & 0xf) * '\x02');
    } while (*pcVar4 != '\0');
    pcVar4 = ".,;!?\"";
    do {
      iVar2 = FUN_1803d7c80(local_res8,pcVar4,&DAT_1808a9562);
      pcVar4 = pcVar4 + iVar2;
      sVar3 = ((byte)local_res8[0] & 0xf) * '\x02';
      (&DAT_181111878)[local_res8[0] >> 4] =
           (&DAT_181111878)[local_res8[0] >> 4] & ~(3 << sVar3) | 1 << sVar3;
    } while (*pcVar4 != '\0');
    DAT_181111868 = DAT_181111868 & 0xc0000000 | 0x2aaaaa94;
  }
  return;
}



/* ===== 18040a0d0 FUN_18040a0d0 ===== */

char * FUN_18040a0d0(undefined8 param_1,float param_2,char *param_3,char *param_4,float param_5,
                    uint param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 in_RDX;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar3 = (uint *)FUN_180409a40(param_1,in_RDX,DAT_1808acda0);
  uVar6 = 2;
  uVar8 = param_6 & 2;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = param_5 / (param_2 / (float)puVar3[5]);
  fVar11 = 0.0;
  pcVar5 = param_3;
  pcVar7 = param_3;
  if (param_3 < param_4) {
    do {
      param_5 = (float)(int)*pcVar7;
      if ((uint)param_5 < 0x80) {
        lVar9 = 1;
      }
      else {
        iVar2 = FUN_1803d7c80(&param_5,pcVar7,param_4);
        lVar9 = (longlong)iVar2;
      }
      uVar1 = (uint)param_5;
      if ((uint)param_5 < 0x20) {
        if (param_5 == 1.4013e-44) {
          return pcVar7;
        }
        if (param_5 != 1.82169e-44) goto LAB_18040a1ae;
      }
      else {
LAB_18040a1ae:
        if ((*puVar3 <= (uint)param_5) ||
           (fVar10 = *(float *)(*(longlong *)(puVar3 + 2) + (ulonglong)(uint)param_5 * 4),
           fVar10 < 0.0)) {
          fVar10 = (float)FUN_1804083d0(puVar3,(uint)param_5 & 0xffff);
        }
        if (uVar1 < 0x80) {
          uVar4 = (&DAT_181111878)[uVar1 >> 4];
LAB_18040a1fa:
          uVar4 = uVar4 >> ((byte)uVar1 & 0xf) * '\x02' & 3;
          if (uVar4 != 0) goto LAB_18040a229;
          if ((uVar6 != 0) && (uVar8 == 0)) {
            fVar12 = fVar12 + fVar11;
            fVar11 = 0.0;
            pcVar5 = pcVar7;
          }
          fVar13 = fVar13 + fVar10;
        }
        else {
          if (uVar1 - 0x3000 < 0x10) {
            uVar4 = DAT_181111868;
            goto LAB_18040a1fa;
          }
          uVar4 = 2;
LAB_18040a229:
          if (uVar6 == 1) {
            if ((uVar4 != 1) && (9 < uVar1 - 0x30)) {
LAB_18040a245:
              fVar11 = fVar11 + fVar13;
              fVar13 = 0.0;
              fVar12 = fVar12 + fVar11;
              fVar11 = 0.0;
              pcVar5 = pcVar7;
            }
          }
          else if ((uVar6 == 0) && (uVar8 != 0)) goto LAB_18040a245;
          fVar11 = fVar11 + fVar10;
        }
        if (fVar14 < fVar11 + fVar13 + fVar12) {
          if (fVar11 + fVar13 <= fVar14) {
            return pcVar5;
          }
          break;
        }
        uVar6 = uVar4;
      }
      pcVar7 = pcVar7 + lVar9;
    } while (pcVar7 < param_4);
    if (pcVar7 == param_3) {
      param_5 = 0.0;
      iVar2 = FUN_1803d7c80(&param_5,pcVar7,param_4);
      return pcVar7 + iVar2;
    }
  }
  return pcVar7;
}



/* ===== 18040a2f0 FUN_18040a2f0 ===== */

float * FUN_18040a2f0(float *param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                     char *param_6,char *param_7,char *param_8,longlong *param_9,undefined8 param_10
                     ,uint param_11)

{
  float fVar1;
  int iVar2;
  size_t sVar3;
  uint *puVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_res18 [4];
  
  if (param_8 == (char *)0x0) {
    sVar3 = strlen(param_6);
    param_8 = param_6 + sVar3;
  }
  if (param_7 == (char *)0x0) {
    param_7 = param_8;
  }
  puVar4 = (uint *)FUN_180409a40(param_2,param_3,DAT_1808acda0);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  if (param_6 < param_7) {
    pcVar5 = (char *)0x0;
    fVar1 = (float)puVar4[5];
    fVar10 = 0.0;
    do {
      if (param_5 <= 0.0) {
LAB_18040a483:
        local_res18[0] = (uint)*param_6;
        if (local_res18[0] < 0x80) {
          lVar6 = 1;
        }
        else {
          iVar2 = FUN_1803d7c80(local_res18,param_6,param_8);
          lVar6 = (longlong)iVar2;
        }
        pcVar7 = param_6 + lVar6;
        if (local_res18[0] == 10) {
          fVar8 = *param_1;
          if (*param_1 <= fVar10) {
            fVar8 = fVar10;
          }
          fVar9 = 0.0;
          *param_1 = fVar8;
          param_1[1] = param_3 + param_1[1];
          param_6 = pcVar7;
          fVar10 = fVar9;
          if ((param_11 & 4) != 0) break;
        }
        else {
          fVar9 = fVar10;
          if (local_res18[0] != 0xd) {
            if ((*puVar4 <= local_res18[0]) ||
               (fVar9 = *(float *)(*(longlong *)(puVar4 + 2) + (ulonglong)local_res18[0] * 4),
               fVar9 < 0.0)) {
              fVar9 = (float)FUN_1804083d0(puVar4);
            }
            fVar9 = fVar9 * (param_3 / fVar1) + fVar10;
            if (param_4 <= fVar9) break;
          }
        }
      }
      else {
        if (pcVar5 == (char *)0x0) {
          pcVar5 = (char *)FUN_18040a0d0(param_2,param_3,param_6,param_8,param_5 - fVar10,param_11);
        }
        if (param_6 < pcVar5) goto LAB_18040a483;
        if (*param_1 <= fVar10 && fVar10 != *param_1) {
          *param_1 = fVar10;
        }
        fVar9 = 0.0;
        param_1[1] = param_3 + param_1[1];
        if ((param_11 & 2) == 0) {
          for (; param_6 < param_8; param_6 = param_6 + 1) {
            if ((*param_6 != ' ') && (*param_6 != '\t')) goto LAB_18040a46b;
          }
        }
        else if (param_6 < param_8) {
LAB_18040a46b:
          if (*param_6 == '\n') {
            param_6 = param_6 + 1;
          }
        }
        fVar10 = fVar9;
        if ((param_11 & 4) != 0) break;
        pcVar5 = (char *)0x0;
        pcVar7 = param_6;
      }
      param_6 = pcVar7;
      fVar10 = fVar9;
    } while (pcVar7 < param_7);
    if (*param_1 <= fVar10 && fVar10 != *param_1) {
      *param_1 = fVar10;
    }
    if (fVar10 <= 0.0) goto LAB_18040a573;
  }
  else {
LAB_18040a573:
    if (param_1[1] != 0.0) goto LAB_18040a58a;
  }
  param_1[1] = param_3 + param_1[1];
LAB_18040a58a:
  if (param_9 != (longlong *)0x0) {
    *param_9 = (longlong)param_6;
  }
  return param_1;
}



/* ===== 18040a5e0 FUN_18040a5e0 ===== */

void FUN_18040a5e0(undefined8 param_1,longlong param_2,float param_3,float *param_4,uint param_5,
                  undefined2 param_6,float *param_7)

{
  float fVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  lVar2 = FUN_180409a40(param_1,param_2,DAT_1808acda0);
  puVar3 = (uint *)FUN_1804098c0(lVar2,param_6);
  if ((puVar3 != (uint *)0x0) && ((*puVar3 & 2) != 0)) {
    uVar4 = param_5 | 0xffffff;
    if ((*puVar3 & 1) == 0) {
      uVar4 = param_5;
    }
    if (param_3 < 0.0) {
      fVar12 = DAT_1808ac34c;
    }
    else {
      fVar12 = param_3 / *(float *)(lVar2 + 0x14);
    }
    fVar5 = *param_4;
    fVar6 = param_4[1];
    if ((*(byte *)(param_2 + 0x30) & 0x10) == 0) {
      fVar5 = (float)(int)fVar5;
      fVar6 = (float)(int)fVar6;
    }
    fVar9 = fVar12 * (float)puVar3[2] + fVar5;
    fVar5 = fVar12 * (float)puVar3[4] + fVar5;
    if ((param_7 == (float *)0x0) ||
       ((fVar9 < param_7[2] || fVar9 == param_7[2] && (*param_7 <= fVar5)))) {
      fVar10 = fVar12 * (float)puVar3[3] + fVar6;
      fVar11 = (float)puVar3[9];
      fVar6 = fVar12 * (float)puVar3[5] + fVar6;
      fVar12 = (float)puVar3[8];
      fVar8 = (float)puVar3[7];
      fVar7 = (float)puVar3[6];
      if (param_7 != (float *)0x0) {
        fVar1 = *param_7;
        if (fVar9 < fVar1) {
          fVar7 = (DAT_1808ac34c - (fVar5 - fVar1) / (fVar5 - fVar9)) * (fVar12 - fVar7) + fVar7;
          fVar9 = fVar1;
        }
        fVar1 = param_7[1];
        if (fVar10 < fVar1) {
          fVar8 = (DAT_1808ac34c - (fVar6 - fVar1) / (fVar6 - fVar10)) * (fVar11 - fVar8) + fVar8;
          fVar10 = fVar1;
        }
        fVar1 = param_7[2];
        if (fVar1 < fVar5) {
          fVar12 = ((fVar1 - fVar9) / (fVar5 - fVar9)) * (fVar12 - fVar7) + fVar7;
          fVar5 = fVar1;
        }
        fVar1 = param_7[3];
        if (fVar1 < fVar6) {
          fVar11 = ((fVar1 - fVar10) / (fVar6 - fVar10)) * (fVar11 - fVar8) + fVar8;
          fVar6 = fVar1;
        }
        if (fVar6 <= fVar10) {
          return;
        }
      }
      FUN_1803fc3a0(param_2,6,4);
      local_a8 = fVar12;
      local_a4 = fVar11;
      local_a0 = fVar7;
      local_9c = fVar8;
      local_98 = fVar5;
      local_94 = fVar6;
      local_90 = fVar9;
      local_8c = fVar10;
      FUN_1803fc4a0(param_2,&local_90,&local_98,&local_a0,&local_a8,uVar4);
    }
  }
  return;
}



/* ===== 18040a900 FUN_18040a900 ===== */

void FUN_18040a900(undefined8 param_1,int *param_2,float param_3,float *param_4,float param_5,
                  float *param_6,char *param_7,char *param_8,float param_9,uint param_10)

{
  int *piVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  size_t sVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  uint *puVar15;
  int iVar16;
  float *pfVar17;
  char *pcVar18;
  short *psVar19;
  int iVar20;
  bool bVar21;
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
  float fVar34;
  uint local_118;
  uint local_114;
  uint local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  
  fVar32 = param_4[1];
  if (fVar32 < param_6[3] || fVar32 == param_6[3]) {
    local_110 = param_10 & 1;
    fVar33 = *param_4;
    local_114 = param_10 & 2;
    local_10c = (float)((uint)param_5 | 0xffffff);
    bVar5 = param_9 <= 0.0;
    do {
      uVar4 = local_114;
      if ((*(byte *)(param_2 + 0xc) & 0x10) == 0) {
        fVar33 = (float)(int)fVar33;
        fVar32 = (float)(int)fVar32;
      }
      pcVar13 = param_8;
      if (param_8 == (char *)0x0) {
        sVar8 = strlen(param_7);
        pcVar13 = param_7 + sVar8;
      }
      lVar9 = FUN_180409a40(param_1,param_3,DAT_1808acda0);
      fVar30 = *(float *)(lVar9 + 0x14);
      pcVar11 = param_7;
      if (param_3 + fVar32 < param_6[1]) {
        do {
          if (pcVar13 <= pcVar11) break;
          pcVar10 = (char *)FUN_180540ca0(pcVar11,10,(longlong)pcVar13 - (longlong)pcVar11);
          if (bVar5) {
            pcVar11 = pcVar10 + 1;
            if (pcVar10 == (char *)0x0) {
              pcVar11 = pcVar13;
            }
          }
          else {
            pcVar18 = pcVar13;
            if (pcVar10 != (char *)0x0) {
              pcVar18 = pcVar10;
            }
            pcVar11 = (char *)FUN_18040a0d0(param_1,param_3,pcVar11,pcVar18,param_9,param_10);
            if (uVar4 == 0) {
              for (; pcVar11 < pcVar13; pcVar11 = pcVar11 + 1) {
                if ((*pcVar11 != ' ') && (*pcVar11 != '\t')) goto LAB_18040aad6;
              }
            }
            else {
LAB_18040aad6:
              if ((pcVar11 < pcVar13) && (*pcVar11 == '\n')) {
                pcVar11 = pcVar11 + 1;
              }
            }
          }
          fVar32 = fVar32 + param_3;
        } while (param_3 + fVar32 < param_6[1]);
      }
      param_8 = pcVar13;
      if ((10000 < (longlong)pcVar13 - (longlong)pcVar11) && (bVar5)) {
        fVar34 = param_6[3];
        param_8 = pcVar11;
        fVar27 = fVar32;
        while ((fVar27 < fVar34 && (param_8 < pcVar13))) {
          lVar12 = FUN_180540ca0(param_8,10,(longlong)pcVar13 - (longlong)param_8);
          if (lVar12 == 0) {
            param_8 = pcVar13;
          }
          else {
            param_8 = (char *)(lVar12 + 1);
          }
          fVar27 = fVar27 + param_3;
        }
      }
      if (pcVar11 == param_8) {
        return;
      }
      local_fc = (int)param_8 - (int)pcVar11;
      fVar30 = param_3 / fVar30;
      local_f8 = local_fc * 4;
      local_fc = local_fc * 6;
      local_f4 = param_2[4] + local_fc;
      local_108 = fVar30;
      local_104 = fVar33;
      FUN_1803fc3a0(param_2,local_fc,local_f8);
      local_100 = *param_2;
      pfVar17 = *(float **)(param_2 + 0x10);
      psVar19 = *(short **)(param_2 + 0x12);
      iVar20 = param_2[0xd];
      pcVar13 = (char *)0x0;
      fVar34 = fVar33;
      if (pcVar11 < param_8) {
        do {
          if (bVar5) {
LAB_18040aca2:
            local_118 = (uint)*pcVar11;
            if (local_118 < 0x80) {
              pcVar11 = pcVar11 + 1;
            }
            else {
              iVar7 = FUN_1803d7c80(&local_118,pcVar11,param_8);
              pcVar11 = pcVar11 + iVar7;
            }
            if (local_118 < 0x20) {
              if (local_118 == 10) {
                fVar32 = param_3 + fVar32;
                if (param_6[3] <= fVar32 && fVar32 != param_6[3]) break;
              }
              else {
                fVar33 = fVar34;
                if (local_118 != 0xd) goto LAB_18040ad05;
              }
            }
            else {
LAB_18040ad05:
              uVar14 = (ulonglong)local_118 & 0xffff;
              if (uVar14 < (ulonglong)(longlong)*(int *)(lVar9 + 0x20)) {
                uVar3 = *(ushort *)(*(longlong *)(lVar9 + 0x28) + uVar14 * 2);
                uVar14 = (ulonglong)uVar3;
                if (uVar3 == 0xfffe) goto LAB_18040ad43;
                if (uVar3 == 0xffff) goto LAB_18040ad33;
LAB_18040ad4b:
                puVar15 = (uint *)(uVar14 * 0x2c + *(longlong *)(lVar9 + 0x38));
              }
              else {
LAB_18040ad33:
                puVar15 = (uint *)FUN_180408100(lVar9,(ulonglong)local_118,0);
                if (puVar15 == (uint *)0x0) {
LAB_18040ad43:
                  uVar14 = (ulonglong)*(int *)(lVar9 + 0x40);
                  goto LAB_18040ad4b;
                }
              }
              uVar4 = *puVar15;
              fVar33 = (float)puVar15[1];
              if ((uVar4 & 2) != 0) {
                fVar27 = param_6[2];
                fVar25 = fVar30 * (float)puVar15[2] + fVar34;
                if (fVar25 <= fVar27) {
                  fVar2 = *param_6;
                  fVar24 = fVar30 * (float)puVar15[4] + fVar34;
                  if (fVar2 <= fVar24) {
                    fVar22 = (float)puVar15[6];
                    fVar28 = fVar30 * (float)puVar15[3] + fVar32;
                    fVar23 = (float)puVar15[7];
                    fVar31 = (float)puVar15[8];
                    fVar26 = fVar30 * (float)puVar15[5] + fVar32;
                    fVar29 = (float)puVar15[9];
                    if ((char)local_110 != '\0') {
                      if (fVar25 < fVar2) {
                        fVar22 = (DAT_1808ac34c - (fVar24 - fVar2) / (fVar24 - fVar25)) *
                                 (fVar31 - fVar22) + fVar22;
                        fVar25 = fVar2;
                      }
                      fVar2 = param_6[1];
                      if (fVar28 < fVar2) {
                        fVar23 = (DAT_1808ac34c - (fVar26 - fVar2) / (fVar26 - fVar28)) *
                                 (fVar29 - fVar23) + fVar23;
                        fVar28 = fVar2;
                      }
                      if (fVar27 < fVar24) {
                        fVar31 = ((fVar27 - fVar25) / (fVar24 - fVar25)) * (fVar31 - fVar22) +
                                 fVar22;
                        fVar24 = fVar27;
                      }
                      fVar27 = param_6[3];
                      if (fVar27 < fVar26) {
                        fVar29 = ((fVar27 - fVar28) / (fVar26 - fVar28)) * (fVar29 - fVar23) +
                                 fVar23;
                        fVar26 = fVar27;
                      }
                      if (fVar26 <= fVar28) goto LAB_18040af74;
                    }
                    *pfVar17 = fVar25;
                    fVar27 = param_5;
                    if ((uVar4 & 1) != 0) {
                      fVar27 = local_10c;
                    }
                    pfVar17[4] = fVar27;
                    pfVar17[9] = fVar27;
                    pfVar17[0xe] = fVar27;
                    pfVar17[0x13] = fVar27;
                    sVar6 = (short)iVar20;
                    pfVar17[1] = fVar28;
                    pfVar17[2] = fVar22;
                    pfVar17[3] = fVar23;
                    pfVar17[5] = fVar24;
                    pfVar17[6] = fVar28;
                    pfVar17[7] = fVar31;
                    pfVar17[8] = fVar23;
                    pfVar17[10] = fVar24;
                    pfVar17[0xb] = fVar26;
                    pfVar17[0xc] = fVar31;
                    pfVar17[0xd] = fVar29;
                    pfVar17[0xf] = fVar25;
                    pfVar17[0x10] = fVar26;
                    pfVar17[0x11] = fVar22;
                    pfVar17[0x12] = fVar29;
                    pfVar17 = pfVar17 + 0x14;
                    psVar19[1] = sVar6 + 1;
                    psVar19[2] = sVar6 + 2;
                    psVar19[4] = sVar6 + 2;
                    *psVar19 = sVar6;
                    psVar19[3] = sVar6;
                    iVar20 = iVar20 + 4;
                    psVar19[5] = sVar6 + 3;
                    psVar19 = psVar19 + 6;
                  }
                }
              }
LAB_18040af74:
              fVar33 = fVar34 + fVar30 * fVar33;
            }
LAB_18040af79:
            bVar21 = pcVar11 < param_8;
            fVar34 = fVar33;
          }
          else {
            if (pcVar13 == (char *)0x0) {
              pcVar13 = (char *)FUN_18040a0d0(param_1,param_3,pcVar11,param_8,
                                              param_9 - (fVar34 - fVar33),param_10);
            }
            if (pcVar11 < pcVar13) goto LAB_18040aca2;
            fVar32 = param_3 + fVar32;
            if (param_6[3] <= fVar32 && fVar32 != param_6[3]) break;
            pcVar13 = (char *)0x0;
            fVar34 = fVar33;
            if (local_114 != 0) {
LAB_18040ac88:
              bVar21 = pcVar11 < param_8;
              if (!bVar21) goto LAB_18040af7c;
              if (*pcVar11 == '\n') {
                pcVar11 = pcVar11 + 1;
              }
              goto LAB_18040af79;
            }
            bVar21 = false;
            if (pcVar11 < param_8) {
              do {
                if ((*pcVar11 != ' ') && (*pcVar11 != '\t')) goto LAB_18040ac88;
                pcVar11 = pcVar11 + 1;
              } while (pcVar11 < param_8);
              goto LAB_18040af79;
            }
          }
LAB_18040af7c:
          fVar33 = local_104;
          fVar30 = local_108;
        } while (bVar21);
      }
      iVar7 = *param_2;
      if (local_100 == iVar7) {
        param_2[8] = (int)((longlong)pfVar17 - *(longlong *)(param_2 + 10) >> 2) * -0x33333333;
        iVar16 = (int)((longlong)psVar19 - *(longlong *)(param_2 + 6) >> 1);
        param_2[4] = iVar16;
        piVar1 = (int *)(*(longlong *)(param_2 + 2) + 0x28 + ((longlong)iVar7 + -1) * 0x48);
        *piVar1 = *piVar1 + (iVar16 - local_f4);
        *(float **)(param_2 + 0x10) = pfVar17;
        *(short **)(param_2 + 0x12) = psVar19;
        param_2[0xd] = iVar20;
        return;
      }
      *param_2 = iVar7 + -1;
      piVar1 = (int *)(*(longlong *)(param_2 + 2) + 0x28 + (longlong)(iVar7 + -2) * 0x48);
      *piVar1 = *piVar1 - local_fc;
      param_2[4] = param_2[4] - local_fc;
      param_2[8] = param_2[8] - local_f8;
      FUN_1803fbe60(param_2);
      fVar32 = param_4[1];
      fVar33 = *param_4;
    } while (fVar32 < param_6[3] || fVar32 == param_6[3]);
  }
  return;
}



/* ===== 18040b100 FUN_18040b100 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18040b100(longlong param_1,undefined8 param_2,uint param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res8;
  float fStackX_c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
  fVar1 = fVar2 * DAT_1808ac1f4;
  fVar4 = (float)param_2 + fVar1;
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  fVar2 = fVar2 * DAT_1808ac1b0 * param_5;
  fStackX_c = fStackX_c + fVar1 * param_5;
  if (param_4 == 0) {
    fVar2 = (float)((uint)fVar2 ^ DAT_1808adec0);
  }
  else if (param_4 != 1) {
    if ((param_4 == 2) || (param_4 == 3)) {
      if (param_4 == 2) {
        fVar2 = (float)((uint)fVar2 ^ DAT_1808adec0);
      }
      local_3c = fVar2 * _DAT_1808acd88;
      fVar1 = fVar2 * DAT_1808ac27c;
      local_40 = fVar2 * _DAT_1808ac2bc;
      fVar3 = fVar2 * 0.0;
      local_48 = fVar2 * _DAT_1808acd94;
      local_44 = local_3c;
    }
    else {
      fVar1 = 0.0;
      local_40 = 0.0;
      local_3c = 0.0;
      fVar3 = 0.0;
      local_48 = 0.0;
      local_44 = 0.0;
    }
    goto LAB_18040b220;
  }
  local_40 = fVar2 * _DAT_1808acd88;
  fVar3 = fVar2 * DAT_1808ac27c;
  local_44 = fVar2 * _DAT_1808ac2bc;
  local_3c = fVar2 * _DAT_1808acd94;
  fVar1 = fVar2 * 0.0;
  local_48 = local_40;
LAB_18040b220:
  local_40 = fVar4 + local_40;
  local_3c = fStackX_c + local_3c;
  local_44 = fStackX_c + local_44;
  local_48 = fVar4 + local_48;
  _local_res8 = CONCAT44(fStackX_c + fVar1,fVar4 + fVar3);
  if ((param_3 & 0xff000000) != 0) {
    FUN_18000b9c0(param_1 + 0x50,&local_res8);
    FUN_18000b9c0(param_1 + 0x50,&local_48);
    FUN_18000b9c0(param_1 + 0x50,&local_40);
    FUN_1803fd460(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_3);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* ===== 18040b2f0 FUN_18040b2f0 ===== */

void FUN_18040b2f0(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res8;
  float fStackX_c;
  
  fVar4 = param_4 / DAT_1808ac750;
  if (param_4 / DAT_1808ac750 <= DAT_1808ac34c) {
    fVar4 = DAT_1808ac34c;
  }
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  param_4 = param_4 - fVar4 * DAT_1808ac1f4;
  fVar2 = param_4 / DAT_1808ac658;
  fVar1 = fVar4 * DAT_1808ac140 + (float)param_2 + fVar2;
  fVar3 = (fVar4 * DAT_1808ac140 + fStackX_c + param_4) - fVar2 * DAT_1808ac1f4;
  _local_res8 = CONCAT44(fVar3 - fVar2,fVar1 - fVar2);
  FUN_18000b9c0(param_1 + 0x50,&local_res8);
  _local_res8 = CONCAT44(fVar3,fVar1);
  FUN_18000b9c0(param_1 + 0x50,&local_res8);
  _local_res8 = CONCAT44(fVar3 - (fVar2 + fVar2),fVar2 + fVar2 + fVar1);
  FUN_18000b9c0(param_1 + 0x50,&local_res8);
  FUN_1803fc600(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_3,
                fVar4,0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* ===== 18040b460 FUN_18040b460 ===== */

byte * FUN_18040b460(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  bVar2 = *param_1;
  if (0x1f < bVar2) {
    pbVar1 = param_1 + 1;
    if (bVar2 < 0x80) {
      if (bVar2 < 0x40) {
        puVar4 = DAT_1811118a0 + (bVar2 - 0x1f);
        if (puVar4 <= DAT_181111870) {
          if (pbVar1 < DAT_181111860) {
            puVar4 = DAT_181111870 + 1;
          }
          else {
            FUN_180540530(DAT_1811118a0,pbVar1,bVar2 - 0x1f);
          }
        }
        DAT_1811118a0 = puVar4;
        return param_1 + ((ulonglong)*param_1 - 0x1e);
      }
      uVar5 = param_1[2] + 1;
      if (DAT_181111870 < DAT_1811118a0 + uVar5) {
        DAT_1811118a0 = DAT_1811118a0 + uVar5;
        return param_1 + 3;
      }
      puVar4 = DAT_1811118a0 + ((ulonglong)bVar2 * -0x100 - (ulonglong)*pbVar1) + 0x3fff;
      if (puVar4 < DAT_181111898) {
        DAT_1811118a0 = DAT_181111870 + 1;
        return param_1 + 3;
      }
      do {
        uVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        *DAT_1811118a0 = uVar3;
        DAT_1811118a0 = DAT_1811118a0 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return param_1 + 3;
    }
    uVar5 = bVar2 - 0x7f;
    if (DAT_181111870 < DAT_1811118a0 + uVar5) {
      DAT_1811118a0 = DAT_1811118a0 + uVar5;
      return param_1 + 2;
    }
    puVar4 = DAT_1811118a0 + (-1 - (ulonglong)*pbVar1);
    if (puVar4 < DAT_181111898) {
      DAT_1811118a0 = DAT_181111870 + 1;
      return param_1 + 2;
    }
    if (uVar5 != 0) {
      do {
        uVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        *DAT_1811118a0 = uVar3;
        DAT_1811118a0 = DAT_1811118a0 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    return param_1 + 2;
  }
  if (0x17 < bVar2) {
    uVar5 = param_1[3] + 1;
    if (DAT_181111870 < DAT_1811118a0 + uVar5) {
      DAT_1811118a0 = DAT_1811118a0 + uVar5;
      return param_1 + 4;
    }
    puVar4 = DAT_1811118a0 +
             ((ulonglong)CONCAT11(bVar2,param_1[1]) * -0x100 - (ulonglong)param_1[2]) + 0x17ffff;
    if (puVar4 < DAT_181111898) {
      DAT_1811118a0 = DAT_181111870 + 1;
      return param_1 + 4;
    }
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *DAT_1811118a0 = uVar3;
      DAT_1811118a0 = DAT_1811118a0 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return param_1 + 4;
  }
  if (0xf < bVar2) {
    uVar5 = CONCAT11(param_1[3],param_1[4]) + 1;
    if (DAT_181111870 < DAT_1811118a0 + uVar5) {
      DAT_1811118a0 = DAT_1811118a0 + uVar5;
      return param_1 + 5;
    }
    puVar4 = DAT_1811118a0 +
             ((ulonglong)CONCAT11(bVar2,param_1[1]) * -0x100 - (ulonglong)param_1[2]) + 0xfffff;
    if (puVar4 < DAT_181111898) {
      DAT_1811118a0 = DAT_181111870 + 1;
      return param_1 + 5;
    }
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *DAT_1811118a0 = uVar3;
      DAT_1811118a0 = DAT_1811118a0 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return param_1 + 5;
  }
  if (7 < bVar2) {
    puVar4 = DAT_1811118a0 + (CONCAT11(bVar2,param_1[1]) - 0x7ff);
    if (puVar4 <= DAT_181111870) {
      if (param_1 + 2 < DAT_181111860) {
        puVar4 = DAT_181111870 + 1;
      }
      else {
        FUN_180540530();
      }
    }
    DAT_1811118a0 = puVar4;
    return param_1 + ((ulonglong)CONCAT11(*param_1,param_1[1]) - 0x7fd);
  }
  if (bVar2 == 7) {
    puVar4 = DAT_1811118a0 + (ulonglong)CONCAT11(param_1[1],param_1[2]) + 1;
    if (puVar4 <= DAT_181111870) {
      if (param_1 + 3 < DAT_181111860) {
        puVar4 = DAT_181111870 + 1;
      }
      else {
        FUN_180540530();
      }
    }
    DAT_1811118a0 = puVar4;
    return param_1 + (ulonglong)CONCAT11(param_1[1],param_1[2]) + 4;
  }
  if (bVar2 == 6) {
    uVar5 = param_1[4] + 1;
    if (DAT_181111870 < DAT_1811118a0 + uVar5) {
      DAT_1811118a0 = DAT_1811118a0 + uVar5;
      return param_1 + 5;
    }
    puVar4 = DAT_1811118a0 +
             ((ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100 - (ulonglong)param_1[3]) + -1;
    if (puVar4 < DAT_181111898) {
      DAT_1811118a0 = DAT_181111870 + 1;
      return param_1 + 5;
    }
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *DAT_1811118a0 = uVar3;
      DAT_1811118a0 = DAT_1811118a0 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return param_1 + 5;
  }
  if (bVar2 == 4) {
    uVar5 = CONCAT11(param_1[4],param_1[5]) + 1;
    if (DAT_181111870 < DAT_1811118a0 + uVar5) {
      DAT_1811118a0 = DAT_1811118a0 + uVar5;
      return param_1 + 6;
    }
    puVar4 = DAT_1811118a0 +
             ((ulonglong)CONCAT11(param_1[1],param_1[2]) * -0x100 - (ulonglong)param_1[3]) + -1;
    if (puVar4 < DAT_181111898) {
      DAT_1811118a0 = DAT_181111870 + 1;
      return param_1 + 6;
    }
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *DAT_1811118a0 = uVar3;
      DAT_1811118a0 = DAT_1811118a0 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    param_1 = param_1 + 6;
  }
  return param_1;
}



/* ===== 18040ba20 FUN_18040ba20 ===== */

uint FUN_18040ba20(byte *param_1,undefined1 *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  char *local_res10;
  
  if ((CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]) == 0x57bc0000) &&
     (CONCAT31(CONCAT21(CONCAT11(param_2[4],param_2[5]),param_2[6]),param_2[7]) == 0)) {
    uVar7 = (uint)(byte)param_2[8] << 0x18 | (uint)(byte)param_2[9] << 0x10 |
            (uint)(byte)param_2[10] << 8 | (uint)(byte)param_2[0xb];
    pbVar5 = param_1 + uVar7;
    DAT_181111860 = param_2;
    DAT_181111870 = pbVar5;
    DAT_181111898 = param_1;
    DAT_1811118a0 = param_1;
    local_res10 = (char *)FUN_18040b460(param_2 + 0x10);
    pcVar11 = local_res10;
    if (local_res10 != param_2 + 0x10) {
      do {
        if (pbVar5 < DAT_1811118a0) {
          return 0;
        }
        local_res10 = (char *)FUN_18040b460(pcVar11);
        bVar18 = local_res10 != pcVar11;
        pcVar11 = local_res10;
      } while (bVar18);
    }
    if (((*local_res10 == '\x05') && (local_res10[1] == -6)) && (DAT_1811118a0 == pbVar5)) {
      uVar14 = 0;
      uVar15 = 1;
      uVar13 = uVar7;
      uVar6 = uVar7 % 0x15b0;
      while (uVar13 != 0) {
        uVar17 = 0;
        uVar16 = uVar17;
        if (7 < uVar6) {
          do {
            pbVar5 = param_1 + 1;
            pbVar2 = param_1 + 3;
            uVar17 = uVar16 + 8;
            pbVar3 = param_1 + 5;
            iVar9 = *param_1 + uVar15;
            iVar12 = (uint)param_1[2] + (uint)*pbVar5 + iVar9;
            iVar10 = (uint)param_1[4] + (uint)*pbVar2 + iVar12;
            iVar8 = (uint)param_1[6] + (uint)*pbVar3 + iVar10;
            pbVar4 = param_1 + 7;
            param_1 = param_1 + 8;
            uVar15 = (uint)*pbVar4 + iVar8;
            uVar1 = uVar16 + 0xf;
            uVar14 = uVar14 + (uint)*pbVar4 + (iVar8 + iVar10 + iVar12 + iVar9) * 2 + (uint)*pbVar3
                              + (uint)*pbVar2 + (uint)*pbVar5;
            uVar16 = uVar17;
          } while (uVar1 < uVar6);
        }
        if (uVar17 < uVar6) {
          iVar8 = 0;
          iVar9 = 0;
          if (uVar6 - uVar17 < 2) {
LAB_18040bc35:
            uVar15 = uVar15 + *param_1;
            uVar14 = uVar14 + uVar15;
            param_1 = param_1 + 1;
          }
          else {
            do {
              uVar17 = uVar17 + 2;
              iVar10 = *param_1 + uVar15;
              uVar15 = (uint)param_1[1] + iVar10;
              iVar8 = iVar8 + iVar10;
              iVar9 = iVar9 + uVar15;
              param_1 = param_1 + 2;
            } while (uVar17 < uVar6 - 1);
            if (uVar17 < uVar6) goto LAB_18040bc35;
          }
          uVar14 = uVar14 + iVar9 + iVar8;
        }
        uVar15 = uVar15 % 0xfff1;
        uVar14 = uVar14 % 0xfff1;
        uVar13 = uVar13 - uVar6;
        uVar6 = 0x15b0;
      }
      if (uVar14 * 0x10000 + uVar15 ==
          ((uint)(byte)local_res10[2] << 0x18 | (uint)(byte)local_res10[3] << 0x10 |
           (uint)(byte)local_res10[4] << 8 | (uint)(byte)local_res10[5])) {
        return uVar7;
      }
    }
  }
  return 0;
}



/* ===== 18040bcf0 FUN_18040bcf0 ===== */

void FUN_18040bcf0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[1] != 0) {
      FUN_1804059d0(param_1[1],param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
    *param_1 = 0;
    FUN_1803f5870(param_1 + 7);
    FUN_1803f5870(param_1 + 4);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar5 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar5 != *piVar1) {
        iVar4 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar3;
        piVar5 = (int *)(lVar2 + 0x29c0 + (longlong)sVar3 * 8);
        *piVar5 = *piVar1;
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar3 * 8) = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(param_1);
  }
  return;
}



/* ===== 18040bdb0 FUN_18040bdb0 ===== */

void FUN_18040bdb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  short sVar9;
  int iVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  uVar6 = (ulonglong)*(int *)(param_1 + 8);
  plVar2 = plVar8 + uVar6;
  if ((uVar6 & 0x1fffffffffffffff) != 0) {
    do {
      lVar5 = DAT_180ca0a50;
      lVar4 = *plVar8;
      if ((lVar4 != 0) && (DAT_180ca0a50 != 0)) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        lVar7 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8;
        if (*(int *)(DAT_180ca0a50 + 0x29c0 + lVar7) != *piVar1) {
          iVar10 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar9;
          lVar7 = (longlong)sVar9 * 8;
          *(int *)(lVar7 + 0x29c0 + lVar5) = *piVar1;
          *(undefined4 *)(lVar7 + 0x29c4 + lVar5) = 0;
        }
        psVar3 = (short *)(lVar7 + 0x29c6 + lVar5);
        *psVar3 = *psVar3 + 1;
        *(int *)(lVar5 + 0x29b8) = *(int *)(lVar5 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar4);
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
  }
  FUN_1803f5870((int *)(param_1 + 8));
  return;
}



/* ===== 18040be90 FUN_18040be90 ===== */

void FUN_18040be90(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar6 = param_1[1];
  if (param_2 <= iVar6) {
    *param_1 = param_2;
    return;
  }
  if (iVar6 == 0) {
    iVar3 = 8;
  }
  else {
    iVar3 = iVar6 / 2 + iVar6;
  }
  iVar8 = param_2;
  if (param_2 < iVar3) {
    iVar8 = iVar3;
  }
  if (iVar8 <= iVar6) {
    *param_1 = param_2;
    return;
  }
  uVar4 = _malloc_base((longlong)iVar8 * 4);
  lVar2 = DAT_180ca0a50;
  if (DAT_180ca0a50 != 0) {
    FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_180540530(uVar4,*(longlong *)(param_1 + 2),(longlong)*param_1 << 2);
    lVar1 = *(longlong *)(param_1 + 2);
    if ((lVar1 != 0) && (lVar2 != 0)) {
      piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
      if (*piVar7 != *(int *)(lVar2 + 4)) {
        iVar6 = *(short *)(lVar2 + 0x29bc) + 1;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(lVar2 + 0x29bc) = sVar5;
        piVar7 = (int *)(lVar2 + 0x29c0 + (longlong)sVar5 * 8);
        *piVar7 = *(int *)(lVar2 + 4);
        *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar5 * 8) = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar1);
  }
  *(undefined8 *)(param_1 + 2) = uVar4;
  param_1[1] = iVar8;
  *param_1 = param_2;
  return;
}



/* ===== 18040bfe0 FUN_18040bfe0 ===== */

void FUN_18040bfe0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  iVar3 = param_1[1];
  if (iVar3 < param_2) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    iVar2 = param_2;
    if (param_2 < iVar3) {
      iVar2 = iVar3;
    }
    FUN_18007e1d0(param_1,iVar2);
  }
  iVar3 = *param_1;
  if (iVar3 < param_2) {
    if ((uint)(param_2 - iVar3) < 4) goto LAB_18040c0d0;
    piVar7 = (int *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 4);
    piVar1 = (int *)(*(longlong *)(param_1 + 2) + (longlong)(param_2 + -1) * 4);
    if ((piVar7 <= param_1 + 2) && (param_1 + 2 <= piVar1)) goto LAB_18040c0d0;
    if ((piVar7 <= param_3) && (param_3 <= piVar1)) goto LAB_18040c0d0;
    iVar2 = *param_3;
    uVar8 = param_2 - iVar3 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    uVar4 = ((param_2 - uVar8) - iVar3) + 3;
    uVar6 = 1;
    if (iVar3 < (int)(param_2 - uVar8)) {
      uVar6 = uVar4 >> 2;
    }
    iVar3 = iVar3 + uVar6 * 4;
    for (uVar5 = (ulonglong)((longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 3U)) >> 2) << 4) / 4;
        uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar7 = iVar2;
      piVar7 = piVar7 + 1;
    }
    for (; iVar3 < param_2; iVar3 = iVar3 + 1) {
LAB_18040c0d0:
      *(int *)(*(longlong *)(param_1 + 2) + (longlong)iVar3 * 4) = *param_3;
    }
  }
  *param_1 = param_2;
  return;
}



/* ===== 18040c100 FUN_18040c100 ===== */

void FUN_18040c100(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  
  iVar9 = param_1[1];
  if (*param_1 == iVar9) {
    iVar12 = *param_1 + 1;
    if (iVar9 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar9 / 2 + iVar9;
    }
    if (iVar12 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar9 < iVar12) {
      uVar7 = _malloc_base((longlong)iVar12 * 0xa0);
      lVar2 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_180540530(uVar7,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xa0);
        lVar10 = *(longlong *)(param_1 + 2);
        if ((lVar10 != 0) && (lVar2 != 0)) {
          piVar11 = (int *)(lVar2 + 0x29c0 + (longlong)*(short *)(lVar2 + 0x29bc) * 8);
          if (*piVar11 != *(int *)(lVar2 + 4)) {
            iVar9 = *(short *)(lVar2 + 0x29bc) + 1;
            sVar8 = (short)iVar9 + (short)(iVar9 / 6) * -6;
            *(short *)(lVar2 + 0x29bc) = sVar8;
            piVar11 = (int *)(lVar2 + 0x29c0 + (longlong)sVar8 * 8);
            *piVar11 = *(int *)(lVar2 + 4);
            *(undefined4 *)(lVar2 + 0x29c4 + (longlong)sVar8 * 8) = 0;
          }
          *(short *)((longlong)piVar11 + 6) = *(short *)((longlong)piVar11 + 6) + 1;
          *(int *)(lVar2 + 0x29b8) = *(int *)(lVar2 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar10);
      }
      *(undefined8 *)(param_1 + 2) = uVar7;
      param_1[1] = iVar12;
    }
  }
  uVar7 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  lVar2 = *(longlong *)(param_1 + 2);
  lVar10 = (longlong)*param_1 * 0xa0;
  *(undefined8 *)(lVar10 + lVar2) = *param_2;
  ((undefined8 *)(lVar10 + lVar2))[1] = uVar7;
  uVar7 = param_2[4];
  uVar5 = param_2[5];
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar2);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar2);
  *puVar1 = uVar7;
  puVar1[1] = uVar5;
  uVar7 = param_2[8];
  uVar5 = param_2[9];
  puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar2);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  puVar1 = (undefined8 *)(lVar10 + 0x40 + lVar2);
  *puVar1 = uVar7;
  puVar1[1] = uVar5;
  uVar7 = param_2[0xc];
  uVar5 = param_2[0xd];
  puVar1 = (undefined8 *)(lVar10 + 0x50 + lVar2);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  puVar1 = (undefined8 *)(lVar10 + 0x60 + lVar2);
  *puVar1 = uVar7;
  puVar1[1] = uVar5;
  uVar7 = param_2[0x10];
  uVar5 = param_2[0x11];
  puVar1 = (undefined8 *)(lVar10 + 0x70 + lVar2);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar3 = param_2[0x12];
  uVar4 = param_2[0x13];
  puVar1 = (undefined8 *)(lVar10 + 0x80 + lVar2);
  *puVar1 = uVar7;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar10 + 0x90 + lVar2);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *param_1 = *param_1 + 1;
  return;
}



/* ===== 18040c2b0 FUN_18040c2b0 ===== */

void FUN_18040c2b0(int *param_1)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  
  iVar7 = 0;
  if (0 < *param_1) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar7 * 8);
      if (lVar3 != 0) {
        FUN_180401f30(lVar3);
        FUN_1803f5870(lVar3 + 0x48);
        lVar4 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          piVar1 = (int *)(DAT_180ca0a50 + 4);
          lVar5 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8;
          if (*(int *)(DAT_180ca0a50 + 0x29c0 + lVar5) != *piVar1) {
            iVar9 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
            sVar8 = (short)iVar9 + (short)(iVar9 / 6) * -6;
            *(short *)(DAT_180ca0a50 + 0x29bc) = sVar8;
            lVar5 = (longlong)sVar8 * 8;
            *(int *)(lVar5 + 0x29c0 + lVar4) = *piVar1;
            *(undefined4 *)(lVar5 + 0x29c4 + lVar4) = 0;
          }
          psVar2 = (short *)(lVar5 + 0x29c6 + lVar4);
          *psVar2 = *psVar2 + 1;
          *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
        }
        thunk_FUN_1805277b0(lVar3);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_1);
  }
  lVar3 = *(longlong *)(param_1 + 2);
  if (lVar3 != 0) {
    param_1[0] = 0;
    lVar4 = DAT_180ca0a50;
    param_1[1] = 0;
    if (DAT_180ca0a50 != 0) {
      piVar1 = (int *)(DAT_180ca0a50 + 4);
      piVar6 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
      if (*piVar6 != *piVar1) {
        iVar7 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar8 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar8;
        piVar6 = (int *)(lVar4 + 0x29c0 + (longlong)sVar8 * 8);
        *piVar6 = *piVar1;
        *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar8 * 8) = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar4 + 0x29b8) = *(int *)(lVar4 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0(lVar3);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* ===== 18040c430 FUN_18040c430 ===== */

void FUN_18040c430(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  
  lVar4 = DAT_180ca0a50;
  if (*(int *)(param_1 + 4) < param_2) {
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) {
      if (DAT_180ca0a50 != 0) {
        piVar1 = (int *)(DAT_180ca0a50 + 4);
        piVar8 = (int *)(DAT_180ca0a50 + 0x29c0 + (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) * 8);
        if (*piVar8 != *piVar1) {
          iVar7 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
          lVar2 = DAT_180ca0a50 + 0x29c0;
          sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
          *(short *)(DAT_180ca0a50 + 0x29bc) = sVar6;
          piVar8 = (int *)(lVar2 + (longlong)sVar6 * 8);
          *piVar8 = *piVar1;
          *(undefined4 *)(lVar4 + 0x29c4 + (longlong)sVar6 * 8) = 0;
        }
        *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
        piVar1 = (int *)(lVar4 + 0x29b8);
        *piVar1 = *piVar1 + 1;
      }
      thunk_FUN_1805277b0(lVar3);
    }
    uVar5 = _malloc_base((longlong)param_2 * 8);
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}



/* ===== 18040c520 FUN_18040c520 ===== */

void FUN_18040c520(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 << 5);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 << 5);
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



/* ===== 18040c630 FUN_18040c630 ===== */

void FUN_18040c630(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = param_2 + 0x1fU & 0xffffffe0;
  iVar9 = (int)((*(int *)(param_1 + 4) >> 0x1f & 0x1fU) + *(int *)(param_1 + 4)) >> 5;
  iVar2 = (int)(uVar10 + ((int)(param_2 + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
  if (iVar9 < iVar2) {
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 < iVar2) {
      if (iVar6 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar6 / 2 + iVar6;
      }
      iVar11 = iVar2;
      if (iVar2 < iVar3) {
        iVar11 = iVar3;
      }
      if (iVar6 < iVar11) {
        uVar4 = _malloc_base((longlong)iVar11 * 8);
        lVar8 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
        }
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_180540530(uVar4,*(longlong *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) << 3);
          lVar1 = *(longlong *)(param_1 + 0x10);
          if ((lVar1 != 0) && (lVar8 != 0)) {
            piVar7 = (int *)(lVar8 + 0x29c0 + (longlong)*(short *)(lVar8 + 0x29bc) * 8);
            if (*piVar7 != *(int *)(lVar8 + 4)) {
              iVar6 = *(short *)(lVar8 + 0x29bc) + 1;
              sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
              *(short *)(lVar8 + 0x29bc) = sVar5;
              piVar7 = (int *)(lVar8 + 0x29c0 + (longlong)sVar5 * 8);
              *piVar7 = *(int *)(lVar8 + 4);
              *(undefined4 *)(lVar8 + 0x29c4 + (longlong)sVar5 * 8) = 0;
            }
            *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
            *(int *)(lVar8 + 0x29b8) = *(int *)(lVar8 + 0x29b8) + 1;
          }
          thunk_FUN_1805277b0(lVar1);
        }
        *(undefined8 *)(param_1 + 0x10) = uVar4;
        *(int *)(param_1 + 0xc) = iVar11;
      }
    }
    *(int *)(param_1 + 8) = iVar2;
    do {
      uVar4 = _malloc_base(0xd00);
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
      }
      lVar8 = (longlong)iVar9;
      iVar9 = iVar9 + 1;
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8 * 8) = uVar4;
    } while (iVar9 < iVar2);
    *(uint *)(param_1 + 4) = uVar10;
  }
  return;
}



/* ===== 18040c7e0 FUN_18040c7e0 ===== */

void FUN_18040c7e0(longlong param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  short sVar9;
  bool bVar10;
  
  if (*(short *)(param_1 + 0x78) == 0) {
    if ((*(short *)(param_1 + 0x212) != -1) && (*(float *)(param_1 + 0xdc) != DAT_1808acd08)) {
      FUN_1804101d0((int)*(short *)(param_1 + 0x212));
    }
    sVar2 = *(short *)(param_1 + 0x210);
    *(undefined2 *)(param_1 + 0x214) = *(undefined2 *)(param_1 + 0x212);
    *(undefined4 *)(param_1 + 0xdc) = 0x7f7fffff;
    *(undefined2 *)(param_1 + 0x212) = 0xffff;
    if (sVar2 != -1) {
      FUN_1804101d0((longlong)sVar2,
                    *(undefined4 *)((longlong)sVar2 * 0x78 + 0x14 + *(longlong *)(param_1 + 0x18)));
      *(undefined2 *)(param_1 + 0x210) = 0xffff;
    }
  }
  if (*(short *)(param_1 + 0x78) == 0) {
    *(undefined2 *)(param_1 + 0x218) = *(undefined2 *)(param_1 + 0x216);
    *(undefined2 *)(param_1 + 0x216) = 0xffff;
    if (*(short *)(param_1 + 0x21a) != -1) {
      sVar2 = *(short *)(param_1 + 0x21c);
      if (sVar2 != -1) {
        lVar8 = (longlong)*(short *)(param_1 + 0x21a) * 0x78;
        sVar3 = *(short *)(lVar8 + 0x5a + *(longlong *)(param_1 + 0x18));
        if (sVar3 != sVar2) {
          sVar9 = 1;
          *(short *)(lVar8 + 0x5a + *(longlong *)(param_1 + 0x18)) = sVar2;
          iVar7 = 1;
          if (sVar2 < sVar3) {
            iVar7 = -1;
            sVar9 = -1;
          }
          iVar6 = iVar7 + sVar3;
          do {
            lVar8 = (longlong)iVar6;
            iVar6 = iVar6 + iVar7;
            psVar1 = (short *)(*(longlong *)(param_1 + 0x18) + 0x5a +
                              (longlong)*(short *)(*(longlong *)(param_1 + 0x28) + lVar8 * 2) * 0x78
                              );
            *psVar1 = *psVar1 - sVar9;
          } while (iVar6 != iVar7 + sVar2);
          iVar7 = 0;
          if (0 < *(int *)(param_1 + 0x6c)) {
            do {
              *(short *)(*(longlong *)(param_1 + 0x28) +
                        (longlong)
                        *(short *)(*(longlong *)(param_1 + 0x18) + 0x5a + (longlong)iVar7 * 0x78) *
                        2) = (short)iVar7;
              iVar7 = iVar7 + 1;
            } while (iVar7 < *(int *)(param_1 + 0x6c));
          }
          *(undefined1 *)(param_1 + 0x242) = 1;
        }
        *(undefined2 *)(param_1 + 0x21c) = 0xffff;
      }
    }
    if (*(int *)(DAT_180ca0a50 + 0x1578) == 0) {
      *(undefined2 *)(param_1 + 0x21a) = 0xffff;
    }
  }
  if (*(char *)(param_1 + 0x246) != '\0') {
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        *(short *)(*(longlong *)(param_1 + 0x18) + 0x5a + (longlong)iVar7 * 0x78) = (short)iVar7;
        *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 2) = (short)iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x6c));
    }
    *(undefined1 *)(param_1 + 0x246) = 0;
    *(undefined1 *)(param_1 + 0x242) = 1;
  }
  if (*(char *)(param_1 + 0x247) != '\0') {
    pbVar4 = *(byte **)(param_1 + 0x20);
    for (pbVar5 = *(byte **)(param_1 + 0x18); pbVar5 != pbVar4; pbVar5 = pbVar5 + 0x78) {
      bVar10 = (*pbVar5 & 2) == 0;
      pbVar5[0x6c] = bVar10;
      pbVar5[0x6b] = bVar10;
    }
    *(undefined1 *)(param_1 + 0x247) = 0;
    *(undefined1 *)(param_1 + 0x242) = 1;
  }
  return;
}



/* ===== 18040ca00 FUN_18040ca00 ===== */

int FUN_18040ca00(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 0) {
    param_3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x6c) + -1;
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
  }
  if (param_2 == param_3) {
    return param_3;
  }
  iVar1 = (int)*(short *)(param_1 + 0x22c);
  if (0 < *(short *)(param_1 + 0x22c)) {
    if (param_2 < iVar1) {
      iVar2 = iVar1 + -1;
      if (param_3 < iVar1 + -1) {
        iVar2 = param_3;
      }
      param_3 = iVar2;
    }
    else {
      if (iVar1 <= param_3) {
        iVar1 = param_3;
      }
      param_3 = iVar1;
    }
  }
  iVar2 = -1;
  iVar1 = param_2;
  if (param_2 < param_3) {
    iVar2 = 1;
  }
  do {
    if ((param_3 <= param_2) || (param_3 < iVar1)) {
      if (param_2 <= param_3) {
        return param_3;
      }
      if (iVar1 < param_3) {
        return param_3;
      }
    }
    if ((*(byte *)((longlong)*(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 2) * 0x78
                  + *(longlong *)(param_1 + 0x18)) & 0x40) != 0) {
      iVar2 = iVar1 - iVar2;
      if (iVar1 == param_2) {
        iVar2 = param_2;
      }
      return iVar2;
    }
    iVar1 = iVar1 + iVar2;
  } while( true );
}



/* ===== 18040cac0 FUN_18040cac0 ===== */

void FUN_18040cac0(longlong param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  
  if ((param_3 & 0x18) == 0) {
    if (((*(uint *)(param_1 + 4) & 0xe000) - 0x2000 & 0xffffdfff) == 0) {
      param_3 = param_3 | 0x10;
    }
    else {
      param_3 = param_3 | 8;
    }
  }
  uVar5 = param_3 | 0x20;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    uVar5 = param_3;
  }
  uVar2 = uVar5 | 0x200;
  if ((uVar5 & 0xc00) != 0xc00) {
    uVar2 = uVar5;
  }
  if ((uVar2 & 0x30000) == 0) {
    lVar3 = (longlong)param_2 - *(longlong *)(param_1 + 0x18);
    lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
    uVar5 = 0x20000;
    if ((int)(lVar3 >> 6) == (int)(lVar3 >> 0x3f)) {
      uVar5 = 0x10000;
    }
    uVar2 = uVar5 | uVar2;
  }
  *param_2 = *param_2 & 0xf000000;
  *param_2 = *param_2 | uVar2;
  *(byte *)(param_2 + 0x1d) = (byte)param_2[0x1d] & 3;
  *(undefined1 *)((longlong)param_2 + 0x75) = 0;
  if ((*(byte *)(param_1 + 4) & 8) != 0) {
    uVar5 = 0;
    bVar1 = 0;
    if (((uVar2 & 0x4000) != 0) && ((uVar2 >> 10 & 1) == 0)) {
      bVar1 = 2;
      uVar5 = 1;
    }
    if (((uVar2 & 0x8000) == 0) || ((uVar2 >> 0xb & 1) != 0)) {
      uVar7 = uVar5;
    }
    else {
      bVar1 = bVar1 | 4;
      uVar7 = 2 << (char)uVar5 * '\x02' | uVar5;
      uVar5 = uVar5 + 1;
    }
    bVar6 = (byte)uVar7;
    if ((uVar2 & 0x4400) == 0) {
      bVar1 = bVar1 | 2;
      bVar6 = bVar6 | (byte)(1 << uVar5 * 2);
      uVar5 = uVar5 + 1;
    }
    if ((uVar2 & 0x8800) == 0) {
      bVar1 = bVar1 | 4;
      bVar6 = bVar6 | (byte)(2 << (char)uVar5 * '\x02');
      uVar5 = uVar5 + 1;
    }
    bVar4 = (byte)uVar5;
    if (((*(uint *)(param_1 + 4) & 0x8000000) != 0) || (uVar5 == 0)) {
      bVar1 = bVar1 | 1;
      bVar4 = bVar4 + 1;
    }
    uVar5 = param_2[0x1d];
    bVar1 = (byte)uVar5 | bVar1 << 4;
    bVar4 = (bVar4 & 3) << 2 | bVar1;
    *(byte *)((longlong)param_2 + 0x75) = bVar6;
    *(byte *)(param_2 + 0x1d) = bVar4;
    if ((*(short *)((longlong)param_2 + 0x62) != -1) &&
       (((bVar1 >> 4) >> ((byte)uVar5 & 3) & 1) == 0)) {
      *(byte *)(param_2 + 0x1d) = (bVar4 ^ bVar6) & 3 ^ bVar4;
      *(undefined1 *)(param_1 + 0x23d) = 1;
    }
  }
  return;
}



/* ===== 18040cc70 FUN_18040cc70 ===== */

void FUN_18040cc70(uint *param_1)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  byte bVar14;
  char cVar15;
  undefined1 uVar16;
  char cVar17;
  char cVar18;
  short sVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  int *piVar26;
  uint *puVar27;
  ulonglong uVar28;
  uint *puVar29;
  longlong lVar30;
  char *pcVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  short sVar35;
  short sVar36;
  uint uVar37;
  float fVar38;
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
  float fVar49;
  float fVar50;
  uint local_f8;
  float local_f4;
  uint local_f0;
  float local_ec;
  
  lVar13 = DAT_180ca0a50;
  lVar23 = *(longlong *)(param_1 + 4);
  uVar22 = param_1[0x1b];
  if (0 < *(int *)(lVar23 + 0x20)) {
    FUN_18040f2f0();
  }
  lVar34 = DAT_180ca0a50;
  uVar28 = 0;
  if (*(longlong *)(lVar23 + 0x30) != 0) {
    if (DAT_180ca0a50 != 0) {
      iVar25 = *(int *)(DAT_180ca0a50 + 4);
      lVar30 = (longlong)*(short *)(DAT_180ca0a50 + 0x29bc) + 0x538;
      piVar26 = (int *)(DAT_180ca0a50 + lVar30 * 8);
      if (*(int *)(DAT_180ca0a50 + lVar30 * 8) != iVar25) {
        iVar20 = *(short *)(DAT_180ca0a50 + 0x29bc) + 1;
        sVar19 = (short)iVar20 + (short)(iVar20 / 6) * -6;
        *(short *)(DAT_180ca0a50 + 0x29bc) = sVar19;
        *(undefined4 *)(lVar34 + 0x29c4 + (longlong)sVar19 * 8) = 0;
        piVar26 = (int *)(lVar34 + ((longlong)sVar19 + 0x538) * 8);
        *piVar26 = iVar25;
      }
      *(short *)((longlong)piVar26 + 6) = *(short *)((longlong)piVar26 + 6) + 1;
      *(int *)(lVar34 + 0x29b8) = *(int *)(lVar34 + 0x29b8) + 1;
    }
    thunk_FUN_1805277b0();
    *(undefined8 *)(lVar23 + 0x30) = 0;
    *(undefined8 *)(lVar23 + 0x40) = 0;
    *(undefined8 *)(lVar23 + 0x38) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x241) != '\0') {
    FUN_180412a00();
  }
  fVar41 = DAT_1808acda0;
  if ((*(char *)((longlong)param_1 + 0x23b) != '\0') ||
     (*(char *)((longlong)param_1 + 0x241) != '\0')) {
    puVar27 = *(uint **)(param_1 + 8);
    for (puVar29 = *(uint **)(param_1 + 6); puVar29 != puVar27; puVar29 = puVar29 + 0x1e) {
      if (*(char *)((longlong)param_1 + 0x241) == '\0') {
        uVar32 = -(uint)((*(byte *)((longlong)puVar29 + 0x71) & 2) != 0);
LAB_18040cdfa:
        uVar33 = *puVar29;
        if ((uVar32 & 1) != 0) goto LAB_18040ce03;
      }
      else {
        if ((*(byte *)((longlong)puVar29 + 0x71) & 4) != 0) {
          uVar32 = ~param_1[0x18];
          goto LAB_18040cdfa;
        }
        uVar33 = *puVar29;
        uVar32 = 0xffffffff;
LAB_18040ce03:
        fVar40 = (float)puVar29[8];
        if (((uVar33 & 0x10) == 0) || (fVar40 <= 0.0)) {
          fVar49 = fVar41;
        }
        else {
          fVar49 = fVar40;
        }
        puVar29[4] = (uint)fVar49;
        if ((fVar40 <= 0.0) || ((uVar33 & 8) == 0)) {
          fVar49 = fVar41;
        }
        else {
          fVar49 = fVar40;
        }
        puVar29[7] = (uint)fVar49;
        if (0.0 < fVar40) {
          *(byte *)((longlong)puVar29 + 0x73) = *(byte *)((longlong)puVar29 + 0x73) & 0xf0;
        }
      }
      if ((uVar32 & 2) != 0) {
        if ((param_1[1] & 2) == 0) {
          lVar23 = SUB168(SEXT816(-0x7777777777777777) *
                          SEXT816((longlong)puVar29 - *(longlong *)(param_1 + 6)),8) +
                   ((longlong)puVar29 - *(longlong *)(param_1 + 6));
          sVar19 = (short)(lVar23 >> 6) - (short)(lVar23 >> 0x3f);
        }
        else {
          sVar19 = -1;
        }
        *(short *)((longlong)puVar29 + 0x5a) = sVar19;
      }
      if ((uVar32 & 4) != 0) {
        bVar14 = ~(byte)(uVar33 >> 1) & 1;
        *(byte *)(puVar29 + 0x1b) = bVar14;
        *(byte *)((longlong)puVar29 + 0x6b) = bVar14;
      }
      if ((uVar32 & 8) != 0) {
        bVar14 = 0;
        *(ushort *)((longlong)puVar29 + 0x62) = ((uVar33 & 4) != 0) - 1;
        if ((uVar33 & 4) != 0) {
          bVar14 = ((uVar33 >> 0xf & 1) != 0) + 1;
        }
        *(byte *)(puVar29 + 0x1d) = (byte)puVar29[0x1d] & 0xfc;
        *(byte *)(puVar29 + 0x1d) = (byte)puVar29[0x1d] | bVar14;
      }
    }
    FUN_180412cc0(param_1);
    *(undefined1 *)((longlong)param_1 + 0x241) = 0;
  }
  FUN_18040c7e0(param_1);
  fVar41 = (float)param_1[0x39];
  fVar40 = *(float *)(lVar13 + 0x1200);
  if ((fVar41 != 0.0) && (fVar41 != fVar40)) {
    fVar49 = fVar40 / fVar41;
    if ((*(uint *)(lVar13 + 0x28f4) & 0x1000) != 0) {
      FUN_1803f5060("[table] 0x%08X RefScale %.3f -> %.3f, scaling width by %.3f\n",*param_1,
                    (double)fVar41,(double)fVar40,(double)fVar49);
    }
    iVar25 = 0;
    if (3 < (int)uVar22) {
      do {
        lVar23 = (longlong)iVar25 * 0x78;
        iVar25 = iVar25 + 4;
        *(float *)(*(longlong *)(param_1 + 6) + 0x10 + lVar23) =
             fVar49 * *(float *)(*(longlong *)(param_1 + 6) + 0x10 + lVar23);
        *(float *)(lVar23 + 0x88 + *(longlong *)(param_1 + 6)) =
             fVar49 * *(float *)(lVar23 + 0x88 + *(longlong *)(param_1 + 6));
        *(float *)(lVar23 + 0x100 + *(longlong *)(param_1 + 6)) =
             fVar49 * *(float *)(lVar23 + 0x100 + *(longlong *)(param_1 + 6));
        *(float *)(lVar23 + 0x178 + *(longlong *)(param_1 + 6)) =
             fVar49 * *(float *)(lVar23 + 0x178 + *(longlong *)(param_1 + 6));
      } while (iVar25 < (int)(uVar22 - 3));
    }
    for (; iVar25 < (int)uVar22; iVar25 = iVar25 + 1) {
      *(float *)(*(longlong *)(param_1 + 6) + 0x10 + (longlong)iVar25 * 0x78) =
           fVar49 * *(float *)(*(longlong *)(param_1 + 6) + 0x10 + (longlong)iVar25 * 0x78);
    }
  }
  uVar32 = param_1[1];
  param_1[0x39] = (uint)fVar40;
  *(undefined2 *)((longlong)param_1 + 0x243) = 0x101;
  lVar23 = (longlong)((int)(uVar22 + 0x1f) >> 5) * 4;
  *(undefined2 *)((longlong)param_1 + 0x202) = 0;
  FUN_180540170(*(undefined8 *)(param_1 + 0x14),0,lVar23);
  FUN_180540170(*(undefined8 *)(param_1 + 0x12),0,lVar23);
  fVar40 = DAT_1808ac34c;
  *(undefined2 *)((longlong)param_1 + 0x21e) = 0xffff;
  bVar9 = false;
  bVar6 = false;
  sVar19 = 0;
  sVar35 = 0;
  bVar10 = false;
  iVar25 = 0;
  uVar33 = 0xffffffff;
  fVar50 = 0.0;
  fVar49 = 0.0;
  fVar41 = fVar40;
  if (fVar40 <= *(float *)(lVar13 + 0xcdc)) {
    fVar41 = *(float *)(lVar13 + 0xcdc);
  }
  param_1[0x2e] = (uint)fVar41;
  sVar36 = 0;
  if (0 < (int)uVar22) {
    do {
      sVar4 = *(short *)(*(longlong *)(param_1 + 10) + uVar28 * 2);
      puVar27 = (uint *)((longlong)sVar4 * 0x78 + *(longlong *)(param_1 + 6));
      sVar35 = sVar36;
      if (*(short *)((longlong)param_1 + 0x206) <= sVar4) {
        FUN_18040cac0(param_1,puVar27,0);
        *(undefined2 *)(puVar27 + 0x16) = 0xffff;
        puVar27[0xd] = 0;
        puVar27[0xe] = 0;
        puVar27[8] = 0xbf800000;
        sVar35 = sVar19;
      }
      uVar37 = *puVar27;
      if (((param_1[1] & 4) == 0) || ((char)uVar37 < '\0')) {
        *(byte *)(puVar27 + 0x1b) = 1;
      }
      if (*(byte *)((longlong)puVar27 + 0x6b) != (byte)puVar27[0x1b]) {
        *(byte *)((longlong)puVar27 + 0x6b) = (byte)puVar27[0x1b];
        *(undefined1 *)((longlong)param_1 + 0x242) = 1;
        uVar37 = *puVar27;
      }
      if ((*(byte *)((longlong)puVar27 + 0x6b) == 0) || ((uVar37 & 1) != 0)) {
        bVar14 = 0;
        uVar21 = 0;
      }
      else {
        bVar14 = 1;
        uVar21 = 1;
      }
      *(byte *)((longlong)puVar27 + 0x71) = *(byte *)((longlong)puVar27 + 0x71) & 0xfd;
      *(byte *)((longlong)puVar27 + 0x6a) = bVar14;
      if (uVar21 != (~(uVar37 >> 1) & 1)) {
        *(undefined1 *)(param_1 + 0x91) = 0;
        bVar14 = *(byte *)((longlong)puVar27 + 0x6a);
      }
      uVar37 = (uint)sVar4;
      if (uVar37 != (uint)uVar28) {
        *(undefined1 *)((longlong)param_1 + 0x243) = 0;
        bVar14 = *(byte *)((longlong)puVar27 + 0x6a);
      }
      if ((*(short *)((longlong)puVar27 + 0x62) != -1) && (bVar14 == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23d) = 1;
        bVar14 = *(byte *)((longlong)puVar27 + 0x6a);
      }
      if ((0 < *(short *)((longlong)puVar27 + 0x62)) && ((param_1[1] & 0x4000000) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23d) = 1;
        bVar14 = *(byte *)((longlong)puVar27 + 0x6a);
      }
      if ((*puVar27 & 0x10) == 0) {
        fVar41 = (float)puVar27[7];
        fVar43 = (float)puVar27[7];
      }
      else {
        fVar41 = (float)puVar27[4];
        fVar43 = (float)puVar27[4];
      }
      if (fVar43 <= 0.0 && fVar41 != 0.0) {
        *(byte *)((longlong)puVar27 + 0x73) = 0x77;
      }
      if (bVar14 == 0) {
        *(undefined2 *)(puVar27 + 0x17) = 0xffff;
      }
      else {
        *(short *)((longlong)puVar27 + 0x5e) = (short)uVar33;
        *(undefined2 *)(puVar27 + 0x18) = 0xffff;
        if (uVar33 == 0xffffffff) {
          *(short *)((longlong)param_1 + 0x21e) = sVar4;
        }
        else {
          *(short *)(*(longlong *)(param_1 + 6) + 0x60 + (longlong)(int)uVar33 * 0x78) = sVar4;
        }
        sVar36 = *(short *)((longlong)param_1 + 0x202);
        lVar34 = (longlong)sVar4 >> 5;
        *(short *)((longlong)param_1 + 0x202) = sVar36 + 1;
        *(short *)(puVar27 + 0x17) = sVar36;
        *(uint *)(*(longlong *)(param_1 + 0x14) + lVar34 * 4) =
             *(uint *)(*(longlong *)(param_1 + 0x14) + lVar34 * 4) | 1 << (uVar37 & 0x1f);
        lVar34 = (longlong)*(short *)((longlong)puVar27 + 0x5a) >> 5;
        *(uint *)(*(longlong *)(param_1 + 0x12) + lVar34 * 4) =
             *(uint *)(*(longlong *)(param_1 + 0x12) + lVar34 * 4) |
             1 << ((int)*(short *)((longlong)puVar27 + 0x5a) & 0x1fU);
        if (((*(byte *)((longlong)puVar27 + 0x71) & 1) == 0) && ((short)param_1[0x1e] == 0)) {
          fVar41 = (float)puVar27[0x12];
          if ((float)puVar27[0x12] <= (float)puVar27[0x13]) {
            fVar41 = (float)puVar27[0x13];
          }
          uVar33 = *puVar27;
          fVar41 = fVar41 - (float)puVar27[0xf];
          if ((uVar33 >> 0xd & 1) == 0) {
            fVar43 = (float)puVar27[0x15] - (float)puVar27[0xf];
            if (fVar41 <= fVar43) {
              fVar41 = fVar43;
            }
          }
          if ((uVar33 & 0x10) != 0) {
            if ((0.0 < (float)puVar27[8]) && (((param_1[1] & 1) == 0 || ((uVar33 & 0x20) != 0)))) {
              fVar41 = (float)puVar27[8];
            }
          }
          if (fVar41 <= (float)param_1[0x2e]) {
            fVar41 = (float)param_1[0x2e];
          }
          puVar27[5] = (uint)fVar41;
        }
        uVar21 = *puVar27;
        if ((uVar21 & 0x20) == 0) {
          bVar10 = true;
        }
        if ((((uVar21 & 0x10) != 0) && (0.0 < (float)puVar27[8])) && ((uVar21 & 0x20) != 0)) {
          puVar27[5] = puVar27[8];
        }
        fVar41 = (float)puVar27[5];
        bVar6 = bVar9;
        if ((*(byte *)((longlong)puVar27 + 0x73) & 0xf) != 0) {
          bVar6 = true;
        }
        uVar33 = uVar37;
        bVar9 = bVar6;
        if ((uVar21 & 8) == 0) {
          sVar35 = sVar35 + 1;
          if (fVar49 <= fVar41) {
            fVar49 = fVar41;
          }
          sVar19 = sVar35;
        }
        else {
          fVar50 = fVar50 + fVar41;
          iVar25 = iVar25 + 1;
        }
      }
      uVar37 = (uint)uVar28 + 1;
      uVar28 = (ulonglong)uVar37;
      sVar36 = sVar35;
    } while ((int)uVar37 < (int)uVar22);
  }
  if (((param_1[1] & 8) != 0) && ((short)param_1[0x80] == 0 && (param_1[1] & 0x8000000) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x23d) = 1;
  }
  *(short *)(param_1 + 0x88) = (short)uVar33;
  if (bVar6) {
    if (*(longlong *)(param_1 + 0x60) != *(longlong *)(param_1 + 0x62)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x62) + 0xd1) = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x242) = 1;
  }
  uVar33 = 0;
  *(undefined4 *)((longlong)param_1 + 0x222) = 0xffffffff;
  fVar41 = DAT_1808ac710;
  fVar43 = 0.0;
  fVar48 = 0.0;
  if (0 < (int)uVar22) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (ulonglong)(uVar33 >> 5) * 4) >>
           (uVar33 & 0x1f) & 1) != 0) {
        lVar30 = (ulonglong)uVar33 * 0x78;
        lVar34 = *(longlong *)(param_1 + 6);
        uVar37 = *(uint *)(lVar30 + lVar34) & 0x20;
        if ((*(uint *)(lVar30 + lVar34) & 0x10) == 0) {
          if ((((*(byte *)(lVar30 + 0x73 + lVar34) & 0xf) != 0) ||
              (fVar45 = *(float *)(lVar30 + 0x1c + lVar34), fVar45 < 0.0)) || (uVar37 != 0)) {
            fVar45 = *(float *)(lVar30 + 0x20 + lVar34);
            if (fVar45 <= 0.0) {
              if ((uVar32 & 0xe000) == 0x6000) {
                fVar45 = (*(float *)(lVar30 + 0x14 + lVar34) / fVar50) * (float)iVar25;
                *(float *)(lVar30 + 0x1c + lVar34) = fVar45;
              }
              else {
                *(undefined4 *)(lVar30 + 0x1c + lVar34) = 0x3f800000;
                fVar45 = fVar40;
              }
            }
            else {
              *(float *)(lVar30 + 0x1c + lVar34) = fVar45;
            }
          }
          fVar48 = fVar48 + fVar45;
          if ((*(short *)((longlong)param_1 + 0x222) == -1) ||
             (*(short *)(lVar30 + 0x5a + lVar34) <
              *(short *)(*(longlong *)(param_1 + 6) + 0x5a +
                        (longlong)*(short *)((longlong)param_1 + 0x222) * 0x78))) {
            *(short *)((longlong)param_1 + 0x222) = (short)uVar33;
          }
          if (((short)param_1[0x89] == -1) ||
             (*(short *)(*(longlong *)(param_1 + 6) + 0x5a + (longlong)(short)param_1[0x89] * 0x78)
              < *(short *)(lVar30 + 0x5a + lVar34))) {
            *(short *)(param_1 + 0x89) = (short)uVar33;
          }
        }
        else {
          fVar45 = *(float *)(lVar30 + 0x14 + lVar34);
          if (((uVar32 & 0xe000) == 0x4000) &&
             (((*(byte *)(lVar30 + 0x73 + lVar34) & 0xf) != 0 || (uVar37 != 0)))) {
            fVar45 = fVar49;
          }
          bVar14 = *(byte *)(lVar30 + 0x73 + lVar34) & 0xf;
          if (bVar14 == 0) {
            if ((uVar37 != 0) && (*(char *)(lVar30 + 0x6f + lVar34) != '\0')) {
              *(float *)(lVar30 + 0x10 + lVar34) = fVar45;
            }
          }
          else {
            *(float *)(lVar30 + 0x10 + lVar34) = fVar45;
            if (((1 < bVar14) && (*(char *)((longlong)param_1 + 0x23b) != '\0')) &&
               ((*(byte *)(lVar30 + 0x71 + lVar34) & 1) == 0)) {
              if (fVar45 <= (float)param_1[0x2e] * fVar41) {
                fVar45 = (float)param_1[0x2e] * fVar41;
              }
              *(float *)(lVar30 + 0x10 + lVar34) = fVar45;
              fVar43 = fVar43 + fVar45;
              goto LAB_18040d53a;
            }
          }
          fVar43 = fVar43 + *(float *)(lVar30 + 0x10 + lVar34);
        }
LAB_18040d53a:
        pbVar1 = (byte *)(lVar30 + 0x71 + lVar34);
        *pbVar1 = *pbVar1 & 0xfe;
        fVar43 = fVar43 + (float)param_1[0x30] + (float)param_1[0x30];
      }
      uVar33 = uVar33 + 1;
    } while ((int)uVar33 < (int)uVar22);
  }
  fVar41 = (float)param_1[0x44];
  fVar49 = (float)param_1[0x45];
  *(short *)(param_1 + 0x81) = sVar35;
  param_1[0x36] = (uint)fVar48;
  fVar50 = DAT_1808ac000;
  fVar45 = ((float)param_1[0x32] + (float)param_1[0x31]) *
           (float)(*(short *)((longlong)param_1 + 0x202) + -1) +
           (float)param_1[0x2f] + (float)param_1[0x2f];
  if ((*(char *)((longlong)param_1 + 0x24d) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x62) + 0xc9) != '\0')) {
    fVar39 = 0.0;
  }
  else {
    fVar39 = *(float *)(lVar13 + 0xd14);
  }
  if (((param_1[1] & 0x1000000) == 0) || ((float)param_1[0x33] != 0.0)) {
    fVar38 = (float)param_1[0x46] - fVar41;
  }
  else {
    fVar38 = (float)param_1[0x4a] - (float)param_1[0x48];
  }
  iVar25 = 0;
  fVar47 = fVar40;
  if (fVar40 <= fVar38 - fVar39) {
    fVar47 = fVar38 - fVar39;
  }
  fVar43 = (fVar47 - fVar45) - fVar43;
  param_1[0x34] =
       (uint)(((float)param_1[0x30] + (float)param_1[0x30]) *
              (float)(int)*(short *)((longlong)param_1 + 0x202) + fVar45);
  fVar45 = fVar43;
  if ((int)uVar22 < 4) {
    if (0 < (int)uVar22) {
      uVar32 = 1;
      goto LAB_18040d966;
    }
  }
  else {
    uVar32 = 1;
    do {
      lVar34 = (longlong)iVar25;
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar34 >> 5) * 4) & uVar32) != 0) {
        lVar30 = *(longlong *)(param_1 + 6);
        lVar24 = lVar34 * 0x78;
        if ((*(uint *)(lVar24 + lVar30) & 8) != 0) {
          fVar39 = (*(float *)(lVar24 + 0x1c + lVar30) / fVar48) * fVar43;
          if (fVar39 <= (float)param_1[0x2e]) {
            fVar39 = (float)param_1[0x2e];
          }
          *(float *)(lVar24 + 0x10 + lVar30) = (float)(int)(fVar39 + fVar50);
          fVar45 = fVar45 - (float)(int)(fVar39 + fVar50);
        }
        if ((*(short *)(lVar24 + 0x60 + lVar30) == -1) &&
           (*(short *)((longlong)param_1 + 0x222) != -1)) {
          *(uint *)(lVar24 + lVar30) = *(uint *)(lVar24 + lVar30) | 0x40000000;
        }
        fVar39 = *(float *)(lVar24 + 0x10 + lVar30);
        if (fVar39 <= (float)param_1[0x2e]) {
          fVar39 = (float)param_1[0x2e];
        }
        *(float *)(lVar24 + 4 + lVar30) = (float)(int)fVar39;
        param_1[0x34] = (uint)((float)(int)fVar39 + (float)param_1[0x34]);
      }
      lVar30 = lVar34 * 0x78;
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar34 + 1 >> 5) * 4) & uVar32 << 1) != 0) {
        lVar24 = *(longlong *)(param_1 + 6);
        uVar33 = *(uint *)(lVar30 + 0x78 + lVar24);
        if ((uVar33 & 8) != 0) {
          fVar39 = (*(float *)(lVar30 + 0x94 + lVar24) / fVar48) * fVar43;
          if (fVar39 <= (float)param_1[0x2e]) {
            fVar39 = (float)param_1[0x2e];
          }
          *(float *)(lVar30 + 0x88 + lVar24) = (float)(int)(fVar39 + fVar50);
          fVar45 = fVar45 - (float)(int)(fVar39 + fVar50);
        }
        if ((*(short *)(lVar30 + 0xd8 + lVar24) == -1) &&
           (*(short *)((longlong)param_1 + 0x222) != -1)) {
          *(uint *)(lVar30 + 0x78 + lVar24) = uVar33 | 0x40000000;
        }
        fVar39 = *(float *)(lVar24 + 0x88 + lVar30);
        if (fVar39 <= (float)param_1[0x2e]) {
          fVar39 = (float)param_1[0x2e];
        }
        *(float *)(lVar30 + 0x7c + lVar24) = (float)(int)fVar39;
        param_1[0x34] = (uint)((float)(int)fVar39 + (float)param_1[0x34]);
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar34 + 2 >> 5) * 4) & uVar32 << 2) != 0) {
        lVar24 = *(longlong *)(param_1 + 6);
        uVar33 = *(uint *)(lVar30 + 0xf0 + lVar24);
        if ((uVar33 & 8) != 0) {
          fVar39 = (*(float *)(lVar30 + 0x10c + lVar24) / fVar48) * fVar43;
          if (fVar39 <= (float)param_1[0x2e]) {
            fVar39 = (float)param_1[0x2e];
          }
          *(float *)(lVar30 + 0x100 + lVar24) = (float)(int)(fVar39 + fVar50);
          fVar45 = fVar45 - (float)(int)(fVar39 + fVar50);
        }
        if ((*(short *)(lVar30 + 0x150 + lVar24) == -1) &&
           (*(short *)((longlong)param_1 + 0x222) != -1)) {
          *(uint *)(lVar30 + 0xf0 + lVar24) = uVar33 | 0x40000000;
        }
        fVar39 = *(float *)(lVar24 + 0x100 + lVar30);
        if (fVar39 <= (float)param_1[0x2e]) {
          fVar39 = (float)param_1[0x2e];
        }
        *(float *)(lVar30 + 0xf4 + lVar24) = (float)(int)fVar39;
        param_1[0x34] = (uint)((float)(int)fVar39 + (float)param_1[0x34]);
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + (lVar34 + 3 >> 5) * 4) & uVar32 << 3) != 0) {
        lVar34 = *(longlong *)(param_1 + 6);
        uVar33 = *(uint *)(lVar30 + 0x168 + lVar34);
        if ((uVar33 & 8) != 0) {
          fVar39 = (*(float *)(lVar30 + 0x184 + lVar34) / fVar48) * fVar43;
          if (fVar39 <= (float)param_1[0x2e]) {
            fVar39 = (float)param_1[0x2e];
          }
          *(float *)(lVar30 + 0x178 + lVar34) = (float)(int)(fVar39 + fVar50);
          fVar45 = fVar45 - (float)(int)(fVar39 + fVar50);
        }
        if ((*(short *)(lVar30 + 0x1c8 + lVar34) == -1) &&
           (*(short *)((longlong)param_1 + 0x222) != -1)) {
          *(uint *)(lVar30 + 0x168 + lVar34) = uVar33 | 0x40000000;
        }
        fVar39 = *(float *)(lVar34 + 0x178 + lVar30);
        if (fVar39 <= (float)param_1[0x2e]) {
          fVar39 = (float)param_1[0x2e];
        }
        *(float *)(lVar30 + 0x16c + lVar34) = (float)(int)fVar39;
        param_1[0x34] = (uint)((float)(int)fVar39 + (float)param_1[0x34]);
      }
      uVar32 = uVar32 << 4 | uVar32 >> 0x1c;
      iVar25 = iVar25 + 4;
    } while (iVar25 < (int)(uVar22 - 3));
    while( true ) {
      if ((int)uVar22 <= iVar25) break;
LAB_18040d966:
      if ((*(uint *)(*(longlong *)(param_1 + 0x14) + ((longlong)iVar25 >> 5) * 4) & uVar32) != 0) {
        lVar30 = (longlong)iVar25 * 0x78;
        lVar34 = *(longlong *)(param_1 + 6);
        if ((*(uint *)(lVar30 + lVar34) & 8) != 0) {
          fVar39 = (*(float *)(lVar30 + 0x1c + lVar34) / fVar48) * fVar43;
          if (fVar39 <= (float)param_1[0x2e]) {
            fVar39 = (float)param_1[0x2e];
          }
          *(float *)(lVar30 + 0x10 + lVar34) = (float)(int)(fVar39 + fVar50);
          fVar45 = fVar45 - (float)(int)(fVar39 + fVar50);
        }
        if ((*(short *)(lVar30 + 0x60 + lVar34) == -1) &&
           (*(short *)((longlong)param_1 + 0x222) != -1)) {
          *(uint *)(lVar30 + lVar34) = *(uint *)(lVar30 + lVar34) | 0x40000000;
        }
        fVar39 = *(float *)(lVar30 + 0x10 + lVar34);
        if (fVar39 <= (float)param_1[0x2e]) {
          fVar39 = (float)param_1[0x2e];
        }
        *(float *)(lVar30 + 4 + lVar34) = (float)(int)fVar39;
        param_1[0x34] = (uint)((float)(int)fVar39 + (float)param_1[0x34]);
      }
      uVar32 = uVar32 << 1 | (uint)((int)uVar32 < 0);
      iVar25 = iVar25 + 1;
    }
  }
  if (((fVar40 <= fVar45) && ((param_1[1] & 0x80000) == 0)) && (uVar32 = uVar22, 0.0 < fVar48)) {
    while ((uVar32 = uVar32 - 1, fVar40 <= fVar45 && (-1 < (int)uVar32))) {
      if ((*(uint *)(*(longlong *)(param_1 + 0x12) + ((longlong)(int)uVar32 >> 5) * 4) >>
           (uVar32 & 0x1f) & 1) != 0) {
        lVar30 = (longlong)*(short *)(*(longlong *)(param_1 + 10) + (longlong)(int)uVar32 * 2) *
                 0x78;
        lVar34 = *(longlong *)(param_1 + 6);
        if ((*(byte *)(lVar34 + lVar30) & 8) != 0) {
          fVar45 = fVar45 - fVar40;
          *(float *)(lVar34 + 0x10 + lVar30) = *(float *)(lVar34 + 0x10 + lVar30) + fVar40;
          *(float *)(lVar34 + 4 + lVar30) = *(float *)(lVar34 + 4 + lVar30) + fVar40;
        }
      }
    }
  }
  if ((short)param_1[0x1e] == 0) {
    puVar27 = param_1 + 0x6a;
  }
  else {
    puVar27 = (uint *)(*(longlong *)(param_1 + 0x72) + (longlong)((short)param_1[0x1e] + -1) * 0x18)
    ;
  }
  puVar27[4] = puVar27[5];
  puVar27[5] = 0xffffffff;
  local_f4 = (float)param_1[0x3d];
  *(undefined4 *)((longlong)param_1 + 0x20a) = 0xffffffff;
  uVar5 = *(undefined4 *)(lVar13 + 0x1578);
  local_f0 = param_1[0x3e];
  local_ec = (float)param_1[0x3f];
  if ((float)param_1[0x3f] <= local_f4 + (float)puVar27[1]) {
    local_ec = local_f4 + (float)puVar27[1];
  }
  local_f8 = param_1[0x3c];
  *(undefined4 *)(lVar13 + 0x1578) = 0;
  cVar15 = FUN_1803ddbf0(&local_f8,0,0);
  fVar40 = *(float *)(lVar13 + 0x110);
  *(undefined4 *)(lVar13 + 0x1578) = uVar5;
  if (0.0 < (float)param_1[0x3a]) {
    fVar50 = *(float *)(lVar13 + 0x114);
    if (((float)param_1[0x3d] <= fVar50) &&
       (fVar43 = (float)param_1[0x3a] + (float)param_1[0x3d], fVar50 <= fVar43)) {
      fVar40 = (float)(int)((fVar43 - fVar50) * (float)param_1[0x3b]) + fVar40;
    }
  }
  bVar6 = 0 < *(short *)((longlong)param_1 + 0x22e);
  fVar50 = fVar41;
  if (0 < *(short *)((longlong)param_1 + 0x22e)) {
    fVar50 = (float)param_1[0x3c];
  }
  fVar43 = (float)param_1[0x2f];
  fVar48 = (float)param_1[0x31];
  fVar45 = (float)param_1[0x48];
  fVar39 = (float)param_1[0x49];
  fVar38 = (float)param_1[0x4a];
  fVar47 = (float)param_1[0x4b];
  FUN_180540170(*(undefined8 *)(param_1 + 0x16),0,lVar23);
  fVar12 = DAT_1808acd08;
  fVar11 = DAT_1808ac230;
  if ((int)uVar22 < 1) {
LAB_18040e115:
    *(undefined1 *)
     ((longlong)*(short *)((longlong)param_1 + 0x21e) * 0x78 + 0x6f + *(longlong *)(param_1 + 6)) =
         1;
    *(undefined1 *)
     ((longlong)*(short *)((longlong)param_1 + 0x21e) * 0x78 + 0x70 + *(longlong *)(param_1 + 6)) =
         0;
  }
  else {
    bVar9 = false;
    uVar28 = 0;
    uVar32 = 1;
    fVar48 = (fVar43 + fVar50) - fVar48;
    do {
      lVar23 = *(longlong *)(param_1 + 6);
      iVar25 = (int)uVar28;
      sVar19 = *(short *)(*(longlong *)(param_1 + 10) + uVar28 * 2);
      uVar16 = 1;
      lVar34 = (longlong)sVar19 * 0x78;
      if (*(short *)((longlong)param_1 + 0x22a) < 1) {
        uVar16 = (undefined1)param_1[0x8e];
      }
      *(undefined1 *)(lVar34 + 0x72 + lVar23) = uVar16;
      if ((bVar6) && (*(short *)((longlong)param_1 + 0x22e) == iVar25)) {
        bVar6 = false;
        fVar48 = fVar48 + (fVar41 - (float)param_1[0x3c]);
      }
      *(uint *)(lVar34 + lVar23) = *(uint *)(lVar34 + lVar23) & 0xf0ffffff;
      uVar33 = *(uint *)(*(longlong *)(param_1 + 0x12) + (uVar28 >> 5) * 4);
      *(float *)(lVar34 + 8 + lVar23) = fVar48;
      if ((uVar32 & uVar33) == 0) {
        *(undefined4 *)(lVar34 + 4 + lVar23) = 0;
        *(float *)(lVar34 + 0x3c + lVar23) = fVar48;
        *(float *)(lVar34 + 0xc + lVar23) = fVar48;
        if (fVar39 <= fVar49) {
          fVar50 = fVar47;
          if (fVar49 <= fVar47) {
            fVar50 = fVar49;
          }
        }
        else {
          fVar50 = fVar39;
        }
        if (fVar45 <= fVar48) {
          fVar43 = fVar38;
          if (fVar48 <= fVar38) {
            fVar43 = fVar48;
          }
        }
        else {
          fVar43 = fVar45;
        }
        *(float *)(lVar34 + 0x24 + lVar23) = fVar43;
        *(float *)(lVar34 + 0x28 + lVar23) = fVar50;
        if (fVar39 <= fVar12) {
          fVar50 = fVar47;
          if (fVar12 <= fVar47) {
            fVar50 = fVar12;
          }
        }
        else {
          fVar50 = fVar39;
        }
        if (fVar45 <= fVar48) {
          fVar43 = fVar38;
          if (fVar48 <= fVar38) {
            fVar43 = fVar48;
          }
        }
        else {
          fVar43 = fVar45;
        }
        *(float *)(lVar34 + 0x2c + lVar23) = fVar43;
        *(float *)(lVar34 + 0x30 + lVar23) = fVar50;
        *(undefined2 *)(lVar34 + 0x6e + lVar23) = 0;
        *(undefined1 *)(lVar34 + 0x6d + lVar23) = 0;
        *(undefined1 *)(lVar34 + 0x70 + lVar23) = 1;
        *(undefined4 *)(lVar34 + 0x44 + lVar23) = 0x3f800000;
      }
      else {
        fVar50 = (float)param_1[0x30];
        fVar43 = (float)param_1[0x32];
        lVar30 = *(longlong *)(param_1 + 6);
        fVar44 = fVar50 + fVar50 + (float)param_1[0x2e] + (float)param_1[0x31] + fVar43;
        fVar42 = fVar12;
        if ((param_1[1] >> 0x18 & 1) == 0) {
          if ((param_1[1] >> 0x12 & 1) == 0) {
            fVar42 = (((((float)param_1[0x46] -
                        (float)(((int)*(short *)((longlong)param_1 + 0x202) -
                                (int)*(short *)(lVar34 + 0x5c + lVar30)) + -1) * fVar44) -
                       *(float *)(lVar34 + 8 + lVar30)) - fVar43) - (fVar50 + fVar50)) -
                     (float)param_1[0x2f];
          }
        }
        else {
          sVar35 = *(short *)(lVar34 + 0x5a + lVar30);
          if (sVar35 < (short)param_1[0x8b]) {
            fVar42 = (((((float)param_1[0x4a] -
                        (float)((int)(short)param_1[0x8b] - (int)sVar35) * fVar44) -
                       *(float *)(lVar34 + 8 + lVar30)) - (float)param_1[0x2f]) - fVar50) - fVar43;
          }
        }
        fVar50 = *(float *)(lVar34 + 4 + lVar23);
        fVar43 = *(float *)(lVar34 + 0x10 + lVar23);
        if (fVar42 <= fVar50) {
          fVar50 = fVar42;
        }
        fVar44 = *(float *)(lVar34 + 0x3c + lVar23);
        *(float *)(lVar34 + 0x18 + lVar23) = fVar42;
        *(float *)(lVar34 + 4 + lVar23) = fVar50;
        if ((float)param_1[0x2e] <= fVar43) {
          fVar43 = (float)param_1[0x2e];
        }
        if (fVar50 <= fVar43) {
          fVar50 = fVar43;
        }
        *(float *)(lVar34 + 4 + lVar23) = fVar50;
        fVar46 = fVar50 + fVar48 + (float)param_1[0x31] + (float)param_1[0x32] +
                 (float)param_1[0x30] + (float)param_1[0x30];
        *(float *)(lVar34 + 0xc + lVar23) = fVar46;
        *(float *)(lVar34 + 0x3c + lVar23) = fVar48 + (float)param_1[0x30] + (float)param_1[0x31];
        fVar43 = (float)param_1[0x30];
        fVar42 = (float)param_1[0x32];
        *(float *)(lVar34 + 0x44 + lVar23) = (float)(int)(fVar50 * fVar11);
        *(float *)(lVar34 + 0x40 + lVar23) = (fVar46 - fVar43) - fVar42;
        if (fVar39 <= fVar49) {
          fVar50 = fVar47;
          if (fVar49 <= fVar47) {
            fVar50 = fVar49;
          }
        }
        else {
          fVar50 = fVar39;
        }
        if (fVar45 <= fVar48) {
          fVar43 = fVar38;
          if (fVar48 <= fVar38) {
            fVar43 = fVar48;
          }
        }
        else {
          fVar43 = fVar45;
        }
        *(float *)(lVar34 + 0x24 + lVar23) = fVar43;
        *(float *)(lVar34 + 0x28 + lVar23) = fVar50;
        if (fVar39 <= fVar12) {
          fVar50 = fVar47;
          if (fVar12 <= fVar47) {
            fVar50 = fVar12;
          }
        }
        else {
          fVar50 = fVar39;
        }
        if (fVar45 <= fVar46) {
          fVar42 = fVar38;
          if (fVar46 <= fVar38) {
            fVar42 = fVar46;
          }
        }
        else {
          fVar42 = fVar45;
        }
        *(float *)(lVar34 + 0x2c + lVar23) = fVar42;
        *(float *)(lVar34 + 0x30 + lVar23) = fVar50;
        *(undefined1 *)(lVar34 + 0x6e + lVar23) = 1;
        bVar7 = fVar43 < fVar42;
        *(bool *)(lVar34 + 0x6d + lVar23) = bVar7;
        if (bVar7) {
          lVar30 = (longlong)sVar19 >> 5;
          *(uint *)(*(longlong *)(param_1 + 0x16) + lVar30 * 4) =
               *(uint *)(*(longlong *)(param_1 + 0x16) + lVar30 * 4) | 1 << ((int)sVar19 & 0x1fU);
LAB_18040df87:
          cVar18 = '\x01';
        }
        else {
          bVar14 = *(byte *)(lVar34 + 0x73 + lVar23);
          if ((bVar14 & 0xf) != 0 || bVar14 >> 4 != 0) goto LAB_18040df87;
          cVar18 = '\0';
        }
        *(char *)(lVar34 + 0x6f + lVar23) = cVar18;
        if ((*(char *)(lVar34 + 0x6a + lVar23) == '\0') ||
           (*(char *)((longlong)param_1 + 0x24f) != '\0')) {
          cVar17 = '\x01';
        }
        else {
          cVar17 = '\0';
        }
        *(char *)(lVar34 + 0x70 + lVar23) = cVar17;
        if ((cVar18 != '\0') && (cVar17 == '\0')) {
          bVar9 = true;
        }
        uVar33 = *(uint *)(lVar34 + lVar23);
        *(uint *)(lVar34 + lVar23) = uVar33 | 0x1000000;
        if (bVar7) {
          uVar21 = 0x7000000;
          *(uint *)(lVar34 + lVar23) = uVar33 | 0x3000000;
          uVar37 = 0x3000000;
        }
        else {
          uVar37 = 0x1000000;
          uVar21 = 0x5000000;
        }
        if (*(short *)(lVar34 + 0x62 + lVar23) != -1) {
          *(uint *)(lVar34 + lVar23) = uVar21 | uVar33;
          uVar37 = uVar21;
        }
        if (((cVar15 != '\0') && (*(float *)(lVar34 + 0x24 + lVar23) <= fVar40)) &&
           (fVar40 < *(float *)(lVar34 + 0x2c + lVar23))) {
          *(uint *)(lVar34 + lVar23) = uVar37 | uVar33 | 0x8000000;
          *(short *)((longlong)param_1 + 0x20a) = sVar19;
        }
        fVar50 = *(float *)(lVar34 + 0x3c + lVar23);
        if ((short)param_1[0x1e] == 0) {
          pfVar3 = (float *)(lVar34 + 0x48 + lVar23);
          *pfVar3 = fVar50;
          pfVar3[1] = fVar50;
          pfVar3[2] = fVar50;
          pfVar3[3] = fVar50;
        }
        else {
          pfVar3 = (float *)(lVar34 + 0x48 + lVar23);
          fVar43 = pfVar3[1];
          fVar42 = pfVar3[2];
          fVar46 = pfVar3[3];
          fVar50 = fVar50 - fVar44;
          pfVar2 = (float *)(lVar34 + 0x48 + lVar23);
          *pfVar2 = *pfVar3 + fVar50;
          pfVar2[1] = fVar43 + fVar50;
          pfVar2[2] = fVar42 + fVar50;
          pfVar2[3] = fVar46 + fVar50;
        }
        if ((*(char *)((longlong)param_1 + 0x24f) == '\0') && ((short)param_1[0x1e] == 0)) {
          bVar14 = *(byte *)(lVar34 + 0x73 + lVar23);
          *(byte *)(lVar34 + 0x73 + lVar23) = (bVar14 & 0xf0) >> 1 & 0x70 | bVar14 >> 1 & 7;
        }
        if (iVar25 < *(short *)((longlong)param_1 + 0x22e)) {
          fVar50 = *(float *)(lVar34 + 0xc + lVar23) + DAT_1808ac34c;
          if ((fVar45 <= fVar50) && (fVar45 = fVar38, fVar50 <= fVar38)) {
            fVar45 = fVar50;
          }
        }
        fVar48 = fVar48 + (float)param_1[0x31] + *(float *)(lVar34 + 4 + lVar23) +
                          (float)param_1[0x32] + (float)param_1[0x30] + (float)param_1[0x30];
      }
      uVar28 = (ulonglong)(iVar25 + 1U);
      uVar32 = uVar32 << 1 | (uint)((int)uVar32 < 0);
    } while ((int)(iVar25 + 1U) < (int)uVar22);
    if (!bVar9) goto LAB_18040e115;
  }
  fVar41 = *(float *)((longlong)(short)param_1[0x88] * 0x78 + 0x2c + *(longlong *)(param_1 + 6));
  fVar49 = (float)param_1[0x44];
  if ((float)param_1[0x44] <= fVar41) {
    fVar49 = fVar41;
  }
  if (((cVar15 != '\0') && (*(short *)((longlong)param_1 + 0x20a) == -1)) && (fVar49 <= fVar40)) {
    *(short *)((longlong)param_1 + 0x20a) = (short)uVar22;
  }
  if ((!bVar10) && ((param_1[1] & 1) != 0)) {
    param_1[1] = param_1[1] & 0xfffffffe;
  }
  *(bool *)((longlong)param_1 + 0x24a) = *(int *)(lVar13 + 0x157c) != 0;
  if ((short)param_1[0x89] != -1) {
    param_1[1] = param_1[1] & 0xfffeffff;
  }
  if ((param_1[1] & 0x10000) != 0) {
    fVar41 = (float)param_1[0x4a];
    if (fVar49 <= (float)param_1[0x4a]) {
      fVar41 = fVar49;
    }
    param_1[0x46] = (uint)fVar49;
    param_1[0x3e] = (uint)fVar49;
    param_1[0x4a] = (uint)fVar41;
  }
  lVar23 = *(longlong *)(param_1 + 0x62);
  uVar8 = *(undefined8 *)(param_1 + 0x46);
  *(undefined8 *)(lVar23 + 600) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(lVar23 + 0x260) = uVar8;
  param_1[0x2b] = param_1[0x48];
  param_1[0x2c] = param_1[0x4a];
  if ((param_1[1] >> 0x11 & 1) == 0) {
    if ((param_1[1] >> 0x19 & 1) == 0) {
      fVar41 = (float)param_1[0x3f];
    }
    else {
      fVar41 = 0.0;
    }
    fVar40 = *(float *)(*(longlong *)(param_1 + 0x62) + 0x284);
    if (*(float *)(*(longlong *)(param_1 + 0x62) + 0x284) <= fVar41) {
      fVar40 = fVar41;
    }
  }
  else {
    fVar40 = (float)param_1[0x3f];
  }
  lVar23 = *(longlong *)(param_1 + 0x62);
  fVar40 = fVar40 - *(float *)(lVar13 + 0xd00);
  fVar41 = *(float *)(lVar23 + 0x24c);
  if ((*(float *)(lVar23 + 0x24c) <= fVar40) &&
     (fVar41 = *(float *)(lVar23 + 0x254), fVar40 <= *(float *)(lVar23 + 0x254))) {
    fVar41 = fVar40;
  }
  *(float *)(lVar23 + 0x254) = fVar41;
  FUN_1804104e0(param_1);
  if ((param_1[1] & 1) != 0) {
    FUN_18040e560(param_1);
  }
  puVar27[2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x239) = 1;
  *(undefined1 *)((longlong)param_1 + 0x23e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20e) = 0xffff;
  if (((*(char *)((longlong)param_1 + 0x23f) == '\0') ||
      (sVar19 = *(short *)((longlong)param_1 + 0x226), sVar19 == -1)) ||
     (*(short *)((longlong)param_1 + 0x7a) != (short)param_1[0x1e])) {
    if ((param_1[1] & 0x10000000) == 0) goto LAB_18040e31a;
    sVar19 = *(short *)((longlong)param_1 + 0x20a);
    if ((((sVar19 == -1) || ((int)sVar19 == uVar22)) || ((short)param_1[0x83] != -1)) ||
       (((*(int *)(lVar13 + 0x1578) != 0 && (*(char *)((longlong)param_1 + 0x24b) == '\0')) &&
        (*(char *)(lVar13 + 0x2290) == '\0')))) goto LAB_18040e31a;
  }
  *(short *)((longlong)param_1 + 0x20e) = sVar19;
LAB_18040e31a:
  if ((((char)param_1[0x90] == '\0') && (*(char *)((longlong)param_1 + 0x23f) != '\0')) &&
     ((short)param_1[0x1e] == *(short *)((longlong)param_1 + 0x7a))) {
    pcVar31 = "##ContextMenu";
    bVar14 = 0x23;
    uVar22 = ~*param_1;
    do {
      pcVar31 = pcVar31 + 1;
      if (((bVar14 == 0x23) && (*pcVar31 == 0x23)) && (pcVar31[1] == 0x23)) {
        pcVar31 = pcVar31 + 2;
        uVar22 = ~*param_1;
      }
      else {
        uVar22 = uVar22 >> 8 ^
                 *(uint *)(&DAT_1806c25c0 + ((ulonglong)uVar22 & 0xff ^ (ulonglong)bVar14) * 4);
      }
      bVar14 = *pcVar31;
    } while (bVar14 != 0);
    cVar15 = FUN_1803ee2d0(~uVar22,0x141);
    if (cVar15 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x23f) = 0;
    }
    else {
      FUN_180411de0(param_1,param_1[1]);
      FUN_1803ee480();
    }
  }
  if ((*(char *)((longlong)param_1 + 0x23d) != '\0') && ((param_1[1] & 8) != 0)) {
    FUN_1804117e0(param_1);
  }
  if (0 < (short)param_1[0x8b]) {
    *(float *)(*(longlong *)(param_1 + 0x62) + 0x80) =
         *(float *)((longlong)
                    *(short *)(*(longlong *)(param_1 + 10) + -2 + (longlong)(short)param_1[0x8b] * 2
                              ) * 0x78 + 0xc + *(longlong *)(param_1 + 6)) - (float)param_1[0x3c];
  }
  if (0 < (short)param_1[0x8a]) {
    *(uint *)(*(longlong *)(param_1 + 0x62) + 0x84) = puVar27[3];
  }
  puVar27[3] = 0;
  lVar23 = *(longlong *)(param_1 + 0x62);
  if ((((*(longlong *)(lVar13 + 0x2440) == lVar23) && (*(char *)(lVar13 + 0x2448) != '\0')) &&
      (*(float *)(lVar13 + 0x244c) < *(float *)(lVar13 + 0x2454) ||
       *(float *)(lVar13 + 0x244c) == *(float *)(lVar13 + 0x2454))) &&
     ((*(float *)(lVar13 + 0x2450) < *(float *)(lVar13 + 0x2458) ||
       *(float *)(lVar13 + 0x2450) == *(float *)(lVar13 + 0x2458) &&
      (iVar25 = 0, 0 < (int)param_1[0x1b])))) {
    do {
      lVar30 = (longlong)iVar25 * 0x78;
      lVar34 = *(longlong *)(param_1 + 6);
      if ((((*(char *)(lVar34 + 0x6f + lVar30) == '\0') &&
           (((float)param_1[0x45] <= *(float *)(lVar13 + 0x2458) &&
             *(float *)(lVar13 + 0x2458) != (float)param_1[0x45] &&
            (*(float *)(lVar13 + 0x2450) <= fVar12 && fVar12 != *(float *)(lVar13 + 0x2450))))) &&
          (pfVar3 = (float *)(lVar34 + 8 + lVar30),
          *pfVar3 <= *(float *)(lVar13 + 0x2454) && *(float *)(lVar13 + 0x2454) != *pfVar3)) &&
         (fVar41 = *(float *)(lVar34 + 0xc + lVar30),
         *(float *)(lVar13 + 0x244c) <= fVar41 && fVar41 != *(float *)(lVar13 + 0x244c))) {
        *(undefined1 *)(lVar34 + 0x6f + lVar30) = 1;
      }
      iVar25 = iVar25 + 1;
    } while (iVar25 < (int)param_1[0x1b]);
  }
  if ((param_1[1] & 0x100000) == 0) {
    FUN_1803fc200(*(undefined8 *)(lVar23 + 0x2c8),lVar23 + 0x238,lVar23 + 0x240,0);
  }
  else {
    FUN_180401a80(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar23 + 0x2c8),2);
  }
  return;
}



/* ===== 18040e560 FUN_18040e560 ===== */

void FUN_18040e560(longlong param_1)

{
  byte *pbVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char local_res8 [8];
  char local_res10 [8];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  
  lVar7 = DAT_180ca0a50;
  uVar6 = DAT_1808aceb0;
  fVar5 = DAT_1808ac080;
  if (*(short *)(param_1 + 0x78) == 0) {
    lVar11 = param_1 + 0x1a8;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x1c8) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
  }
  lVar9 = 0xf4;
  if (*(short *)(param_1 + 0x22a) < 1) {
    lVar9 = 0x114;
  }
  uVar12 = 0;
  fVar17 = (float)(int)(*(float *)(DAT_180ca0a50 + 0x1210) * DAT_1808ac710);
  fVar16 = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + lVar9);
  fVar2 = *(float *)(lVar11 + 8);
  fVar13 = (fVar16 + *(float *)(lVar11 + 4)) - *(float *)(param_1 + 0xe8);
  fVar15 = *(float *)(param_1 + 0xfc);
  if (*(float *)(param_1 + 0xfc) <= fVar13) {
    fVar15 = fVar13;
  }
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x48) + ((longlong)(int)uVar12 >> 5) * 4) >>
           (uVar12 & 0x1f) & 1) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x18);
        sVar3 = *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar12 * 2);
        lVar9 = (longlong)sVar3 * 0x78;
        if ((*(uint *)(lVar11 + lVar9) & 0x40000020) == 0) {
          if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
            local_8c = fVar15;
          }
          else {
            local_8c = fVar16 + fVar2;
            if (*(char *)(param_1 + 0x23e) == '\0') goto LAB_18040e845;
          }
          if ((*(char *)(lVar11 + 0x6d + lVar9) != '\0') || (*(short *)(param_1 + 0x214) == sVar3))
          {
            if (*(short *)(param_1 + 0x78) == 0) {
              piVar10 = (int *)(param_1 + 0x1a8);
            }
            else {
              piVar10 = (int *)(*(longlong *)(param_1 + 0x1c8) +
                               (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18);
            }
            local_90 = *(float *)(lVar11 + 0xc + lVar9);
            iVar4 = *piVar10;
            local_98 = local_90 - fVar17;
            local_90 = local_90 + fVar17;
            local_94 = fVar16;
            FUN_1803ec2f0(&local_98,sVar3 + iVar4 + 1,0,2);
            local_res10[0] = '\0';
            local_res8[0] = '\0';
            cVar8 = FUN_180415270(&local_98,sVar3 + iVar4 + 1,local_res10,local_res8,0x40910);
            lVar11 = DAT_180ca0a50;
            if (((cVar8 == '\0') || (*(short *)(DAT_180ca0a50 + 0xb4a) != 2)) ||
               (*(char *)(DAT_180ca0a50 + 0x1cc4) != '\0')) {
              if (local_res8[0] != '\0') {
                if (*(short *)(param_1 + 0x214) == -1) {
                  if (*(short *)(param_1 + 0x220) == -1) {
                    uVar14 = uVar6;
                  }
                  else {
                    uVar14 = *(undefined4 *)
                              (*(longlong *)(param_1 + 0x18) + 0xc +
                              (longlong)*(short *)(param_1 + 0x220) * 0x78);
                  }
                  *(undefined4 *)(param_1 + 0xe0) = uVar14;
                }
                *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
                *(short *)(param_1 + 0x212) = sVar3;
              }
            }
            else {
              lVar11 = *(longlong *)(param_1 + 0x18);
              if (*(char *)(lVar11 + 0x6a + lVar9) != '\0') {
                pbVar1 = (byte *)(lVar11 + 0x73 + lVar9);
                *pbVar1 = *pbVar1 & 0xf;
                pbVar1 = (byte *)(lVar11 + 0x73 + lVar9);
                *pbVar1 = *pbVar1 | 0x10;
                *(short *)(param_1 + 0x210) = sVar3;
              }
              FUN_1803dd660(0);
              local_res8[0] = '\0';
              lVar11 = DAT_180ca0a50;
            }
            if (((local_res10[0] != '\0') && (fVar5 < *(float *)(lVar7 + 0x156c))) ||
               (local_res8[0] != '\0')) {
              *(short *)(param_1 + 0x20c) = sVar3;
              *(undefined4 *)(lVar11 + 0x2500) = 4;
            }
          }
        }
      }
LAB_18040e845:
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(param_1 + 0x6c));
  }
  return;
}



/* ===== 18040e8a0 FUN_18040e8a0 ===== */

void FUN_18040e8a0(void)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 uVar14;
  char cVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  undefined4 uVar20;
  longlong lVar21;
  int *piVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_res8;
  
  lVar13 = DAT_180ca0a50;
  lVar21 = *(longlong *)(DAT_180ca0a50 + 0x2360);
  if (lVar21 == 0) {
    FUN_1803ebc00("EndTable() call should only be done while in BeginTable() scope!");
    return;
  }
  if (*(char *)(lVar21 + 0x239) == '\0') {
    FUN_18040cc70(lVar21);
  }
  uVar23 = *(uint *)(lVar21 + 4);
  lVar8 = *(longlong *)(lVar21 + 0x188);
  lVar9 = *(longlong *)(lVar21 + 0x180);
  lVar10 = *(longlong *)(lVar21 + 0x10);
  if (*(char *)(lVar21 + 0x23a) != '\0') {
    FUN_18040f810(lVar21);
  }
  if ((((((uVar23 & 0x20) != 0) && (*(short *)(lVar21 + 0x20a) != -1)) &&
       (*(int *)(DAT_180ca0a50 + 0x1560) == 0)) &&
      ((*(int *)(DAT_180ca0a50 + 0x1564) == 0 && (*(char *)(DAT_180ca0a50 + 0xb5f) != '\0')))) &&
     (*(char *)(DAT_180ca0a50 + 0x1cd0) == '\0')) {
    FUN_180411a10();
  }
  if (*(short *)(lVar21 + 0x78) == 0) {
    piVar22 = (int *)(lVar21 + 0x1a8);
  }
  else {
    piVar22 = (int *)(*(longlong *)(lVar21 + 0x1c8) +
                     (longlong)(*(short *)(lVar21 + 0x78) + -1) * 0x18);
  }
  *(undefined8 *)(lVar8 + 0x148) = *(undefined8 *)(lVar10 + 0x88);
  *(undefined8 *)(lVar8 + 0x140) = *(undefined8 *)(lVar10 + 0x90);
  *(undefined8 *)(lVar8 + 0x130) = *(undefined8 *)(lVar10 + 0x98);
  fVar24 = (float)FUN_18053ef70();
  if (lVar8 == lVar9) {
    if ((uVar23 >> 0x11 & 1) == 0) {
      fVar25 = *(float *)(lVar21 + 0xfc);
      if (*(float *)(lVar21 + 0xfc) <= fVar24) {
        fVar25 = fVar24;
      }
      *(float *)(lVar21 + 0x10c) = fVar25;
      *(float *)(lVar21 + 0xfc) = fVar25;
    }
  }
  else {
    *(float *)(lVar8 + 0x134) = fVar24;
  }
  fVar25 = *(float *)(lVar21 + 0xfc);
  fVar30 = 0.0;
  fVar28 = *(float *)(lVar21 + 0x11c);
  if (*(float *)(lVar21 + 0x11c) <= fVar25) {
    fVar28 = fVar25;
  }
  *(float *)(lVar21 + 0x11c) = fVar28;
  piVar22[1] = (int)(fVar25 - *(float *)(lVar21 + 0xf4));
  if ((*(uint *)(lVar21 + 4) >> 0x18 & 1) != 0) {
    if ((*(uint *)(lVar21 + 4) >> 10 & 1) == 0) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = DAT_1808ac34c;
    }
    fVar28 = *(float *)(lVar8 + 0x130);
    if ((*(short *)(lVar21 + 0x220) != -1) &&
       (fVar25 = (*(float *)((longlong)*(short *)(lVar21 + 0x220) * 0x78 + 0x40 +
                            *(longlong *)(lVar21 + 0x18)) + *(float *)(lVar21 + 0xc0) +
                 *(float *)(lVar21 + 0xbc)) - fVar25, fVar28 <= fVar25)) {
      fVar28 = fVar25;
    }
    if ((*(short *)(lVar21 + 0x212) != -1) && (fVar28 <= *(float *)(lVar21 + 0xe0))) {
      fVar28 = *(float *)(lVar21 + 0xe0);
    }
    *(float *)(lVar8 + 0x130) = fVar28 + *(float *)(*(longlong *)(lVar21 + 0x10) + 0xc);
  }
  if ((uVar23 >> 0x14 & 1) == 0) {
    lVar11 = *(longlong *)(lVar8 + 0x2c8);
    iVar6 = *(int *)(lVar11 + 0xa0);
    iVar16 = iVar6 + -1;
    *(int *)(lVar11 + 0xa0) = iVar16;
    if (iVar16 == 0) {
      puVar17 = (undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x34);
    }
    else {
      puVar17 = (undefined8 *)((longlong)(iVar6 + -2) * 0x10 + *(longlong *)(lVar11 + 0xa8));
    }
    uVar12 = puVar17[1];
    *(undefined8 *)(lVar11 + 0x60) = *puVar17;
    *(undefined8 *)(lVar11 + 0x68) = uVar12;
    FUN_1803fbff0();
  }
  lVar18 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x2c8) + 0xa0);
  lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0x2c8) + 0xa8);
  uVar20 = *(undefined4 *)(lVar11 + -0xc + lVar18 * 0x10);
  uVar2 = *(undefined4 *)(lVar11 + -8 + lVar18 * 0x10);
  uVar3 = *(undefined4 *)(lVar11 + -4 + lVar18 * 0x10);
  *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(lVar11 + -0x10 + lVar18 * 0x10);
  *(undefined4 *)(lVar8 + 0x26c) = uVar20;
  *(undefined4 *)(lVar8 + 0x270) = uVar2;
  *(undefined4 *)(lVar8 + 0x274) = uVar3;
  if ((uVar23 & 0x780) != 0) {
    FUN_180410fc0(lVar21);
  }
  uVar12 = *(undefined8 *)(lVar21 + 0x1a0);
  FUN_180401a80(uVar12,*(undefined8 *)(lVar8 + 0x2c8),0);
  if ((*(uint *)(lVar21 + 4) & 0x100000) == 0) {
    FUN_180410690(lVar21);
  }
  FUN_1804016a0(uVar12,*(undefined8 *)(lVar8 + 0x2c8));
  fVar29 = 0.0;
  fVar28 = 0.0;
  fVar25 = 0.0;
  if (0 < *(int *)(lVar21 + 0x6c)) {
    uVar23 = 0;
    do {
      if ((*(uint *)(*(longlong *)(lVar21 + 0x50) + ((longlong)(int)uVar23 >> 5) * 4) >>
           (uVar23 & 0x1f) & 1) != 0) {
        lVar11 = *(longlong *)(lVar21 + 0x18);
        lVar18 = (longlong)(int)uVar23 * 0x78;
        uVar7 = *(uint *)(lVar11 + lVar18);
        uVar19 = uVar7 & 0x10;
        if ((uVar19 == 0) || ((uVar7 & 0x20) != 0)) {
          fVar26 = *(float *)(lVar11 + 0x48 + lVar18);
          fVar27 = *(float *)(lVar11 + 0x3c + lVar18);
          fVar4 = *(float *)(lVar11 + 0x4c + lVar18);
          if (fVar26 <= fVar4) {
            fVar26 = fVar4;
          }
          fVar26 = fVar26 - fVar27;
          if (((uVar7 >> 0xd & 1) == 0) &&
             (fVar27 = *(float *)(lVar11 + 0x54 + lVar18) - fVar27, fVar26 <= fVar27)) {
            fVar26 = fVar27;
          }
          if (((uVar19 != 0) && (fVar27 = *(float *)(lVar11 + 0x20 + lVar18), 0.0 < fVar27)) &&
             (((*(byte *)(lVar21 + 4) & 1) == 0 || ((uVar7 & 0x20) != 0)))) {
            fVar26 = fVar27;
          }
          if (fVar26 <= *(float *)(lVar21 + 0xb8)) {
            fVar26 = *(float *)(lVar21 + 0xb8);
          }
          if (uVar19 == 0) {
            fVar28 = fVar28 + fVar26;
          }
          else {
            fVar29 = fVar29 + fVar26;
          }
        }
        else {
          fVar26 = *(float *)(lVar11 + 0x10 + lVar18);
          fVar29 = fVar29 + fVar26;
        }
        if ((((byte)uVar7 & 0x28) == 0x28) &&
           (fVar26 = fVar26 / (*(float *)(lVar11 + 0x1c + lVar18) / *(float *)(lVar21 + 0xd8)),
           fVar25 <= fVar26)) {
          fVar25 = fVar26;
        }
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < *(int *)(lVar21 + 0x6c));
  }
  if (fVar28 <= fVar25) {
    fVar28 = fVar25;
  }
  fVar25 = *(float *)(lVar21 + 0xc0) + *(float *)(lVar21 + 0xc0);
  *(float *)(lVar21 + 0xd4) =
       (*(float *)(lVar21 + 200) + *(float *)(lVar21 + 0xc4)) *
       (float)(*(short *)(lVar21 + 0x202) + -1) +
       *(float *)(lVar21 + 0xbc) + *(float *)(lVar21 + 0xbc) +
       (float)(int)*(short *)(lVar21 + 0x202) * fVar25 + fVar29 + fVar28;
  if (((*(uint *)(lVar21 + 4) & 0x1000000) == 0) && (lVar8 != lVar9)) {
    *(undefined4 *)(lVar8 + 0x98) = 0;
  }
  else if ((*(short *)(lVar21 + 0x214) != -1) &&
          (((*(short *)(lVar21 + 0x212) == -1 && (*(char *)(lVar8 + 200) != '\0')) &&
           (*(short *)(lVar21 + 0x7a) == *(short *)(lVar21 + 0x78))))) {
    fVar25 = fVar25 + *(float *)(lVar21 + 0xb8);
    fVar28 = *(float *)((longlong)*(short *)(lVar21 + 0x214) * 0x78 + 0xc +
                       *(longlong *)(lVar21 + 0x18));
    if (*(float *)(lVar21 + 0x120) <= fVar28) {
      if (fVar28 < *(float *)(lVar21 + 0x128) || fVar28 == *(float *)(lVar21 + 0x128))
      goto LAB_18040edd0;
      fVar25 = (fVar28 - *(float *)(lVar8 + 0x28)) + fVar25;
    }
    else {
      fVar25 = (fVar28 - *(float *)(lVar8 + 0x28)) - fVar25;
    }
    *(undefined4 *)(lVar8 + 0xb8) = 0;
    *(undefined4 *)(lVar8 + 0xb0) = 0x3f800000;
    *(float *)(lVar8 + 0xa8) =
         (float)(int)(((fVar25 - *(float *)(lVar8 + 0x70)) - *(float *)(lVar8 + 0x80)) +
                     *(float *)(lVar8 + 0x98));
  }
LAB_18040edd0:
  if ((*(short *)(lVar21 + 0x212) != -1) && (*(short *)(lVar21 + 0x78) == *(short *)(lVar21 + 0x7a))
     ) {
    *(float *)(lVar21 + 0xdc) =
         (float)(int)(((((*(float *)(lVar13 + 0x110) - *(float *)(lVar13 + 0x1594)) +
                        (float)(int)(*(float *)(lVar13 + 0x1210) * DAT_1808ac710)) -
                       *(float *)((longlong)*(short *)(lVar21 + 0x212) * 0x78 + 8 +
                                 *(longlong *)(lVar21 + 0x18))) - *(float *)(lVar21 + 0xc4)) -
                     (*(float *)(lVar21 + 0xc0) + *(float *)(lVar21 + 0xc0)));
  }
  if ((*(int *)(lVar13 + 0x157c) == 0) || (*(char *)(lVar21 + 0x24a) != '\0')) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  *(undefined1 *)(lVar21 + 0x24b) = uVar14;
  if (*(int *)(*(longlong *)(lVar8 + 0x110) + -4 + (longlong)*(int *)(lVar8 + 0x108) * 4) !=
      *piVar22) {
    FUN_1803ebc00("Mismatching PushID/PopID!");
  }
  if (*(int *)(lVar9 + 0x1f8) < *(int *)(lVar10 + 0xa8)) {
    FUN_1803ebc00("Too many PopItemWidth!");
  }
  if (0 < *(short *)(lVar21 + 0x78)) {
    FUN_1803e8b00();
  }
  FUN_1803e8b00();
  fVar25 = *(float *)(lVar9 + 0x130);
  pfVar1 = (float *)(lVar21 + 0xf0);
  fVar28 = *(float *)(lVar9 + 0x134);
  uVar12 = *(undefined8 *)(lVar10 + 0x70);
  *(undefined8 *)(lVar8 + 0x248) = *(undefined8 *)(lVar10 + 0x68);
  *(undefined8 *)(lVar8 + 0x250) = uVar12;
  uVar20 = *(undefined4 *)(lVar10 + 0x7c);
  uVar2 = *(undefined4 *)(lVar10 + 0x80);
  uVar3 = *(undefined4 *)(lVar10 + 0x84);
  *(undefined4 *)(lVar8 + 600) = *(undefined4 *)(lVar10 + 0x78);
  *(undefined4 *)(lVar8 + 0x25c) = uVar20;
  *(undefined4 *)(lVar8 + 0x260) = uVar2;
  *(undefined4 *)(lVar8 + 0x264) = uVar3;
  *(undefined1 *)(lVar8 + 0xd1) = *(undefined1 *)(lVar21 + 0x24f);
  *(undefined8 *)(lVar9 + 0x118) = *(undefined8 *)pfVar1;
  *(undefined4 *)(lVar9 + 0x1e8) = *(undefined4 *)(lVar10 + 0xa4);
  *(undefined4 *)(lVar9 + 0x1f8) = *(undefined4 *)(lVar10 + 0xa8);
  *(undefined4 *)(lVar9 + 0x160) = *(undefined4 *)(lVar10 + 0xa0);
  if (lVar8 == lVar9) {
    *(int *)(lVar8 + 0x1a0) = *(int *)(lVar8 + 0x1a0) + -1;
    local_res8 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar21 + 0xf8) >> 0x20) -
                          (float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20),
                          (float)*(undefined8 *)(lVar21 + 0xf8) - (float)*(undefined8 *)pfVar1);
    FUN_1803ec550(&local_res8,DAT_1808acda0);
    lVar18 = DAT_180ca0a50;
    uVar23 = *(uint *)(DAT_180ca0a50 + 0x1eb4);
    uVar7 = *(uint *)(DAT_180ca0a50 + 0x1ea8);
    *(undefined4 *)(DAT_180ca0a50 + 0x1ee8) = 0;
    uVar12 = *(undefined8 *)(lVar21 + 0xf8);
    *(undefined8 *)(lVar18 + 0x1ef4) = *(undefined8 *)pfVar1;
    *(undefined8 *)(lVar18 + 0x1efc) = uVar12;
    fVar29 = *pfVar1;
    uVar20 = *(undefined4 *)(lVar21 + 0xf4);
    uVar2 = *(undefined4 *)(lVar21 + 0xf8);
    uVar3 = *(undefined4 *)(lVar21 + 0xfc);
    *(uint *)(lVar18 + 0x1eec) = uVar23 | uVar7;
    lVar11 = *(longlong *)(lVar18 + 0x14f8);
    *(float *)(lVar18 + 0x1f04) = fVar29;
    *(undefined4 *)(lVar18 + 0x1f08) = uVar20;
    *(undefined4 *)(lVar18 + 0x1f0c) = uVar2;
    *(undefined4 *)(lVar18 + 0x1f10) = uVar3;
    *(undefined4 *)(lVar18 + 0x1ef0) = 0;
    *(undefined8 *)(lVar18 + 0x1eb0) = 0;
    if ((((*(float *)(lVar21 + 0xfc) < *(float *)(lVar11 + 0x26c) ||
           *(float *)(lVar21 + 0xfc) == *(float *)(lVar11 + 0x26c)) ||
         (*(float *)(lVar11 + 0x274) < *(float *)(lVar21 + 0xf4) ||
          *(float *)(lVar11 + 0x274) == *(float *)(lVar21 + 0xf4))) ||
        (*(float *)(lVar21 + 0xf8) < *(float *)(lVar11 + 0x268) ||
         *(float *)(lVar21 + 0xf8) == *(float *)(lVar11 + 0x268))) ||
       (*(float *)(lVar11 + 0x270) < *pfVar1 || *(float *)(lVar11 + 0x270) == *pfVar1)) {
      if (*(char *)(lVar18 + 0x1576) == '\0') goto LAB_18040f08c;
      uVar23 = 0;
    }
    else {
      uVar23 = 0x100;
      *(undefined4 *)(lVar18 + 0x1ef0) = 0x100;
    }
    cVar15 = FUN_1803e9740(pfVar1,lVar21 + 0xf8,1);
    if (cVar15 != '\0') {
      *(uint *)(lVar18 + 0x1ef0) = uVar23 | 1;
    }
  }
  else {
    uVar5 = *(ushort *)(lVar8 + 0x174);
    *(ushort *)(lVar8 + 0x174) = uVar5 | (ushort)(1 << ((int)*(char *)(lVar21 + 0x238) & 0x1fU));
    *(undefined8 *)(lVar13 + 0x2360) = 0;
    FUN_1803e1bc0();
    *(longlong *)(lVar13 + 0x2360) = lVar21;
    *(ushort *)(lVar8 + 0x174) = uVar5;
  }
LAB_18040f08c:
  if ((*(uint *)(lVar21 + 4) & 0x10000) == 0) {
    if (0.0 < *(float *)(lVar10 + 0x48)) {
      if (fVar25 <= *(float *)(lVar21 + 0xf8)) {
        fVar25 = *(float *)(lVar21 + 0xf8);
      }
    }
    else {
      if (lVar8 == lVar9) {
        fVar29 = 0.0;
      }
      else {
        fVar29 = *(float *)(lVar8 + 0xc0);
      }
      fVar27 = fVar29 + *(float *)(*(longlong *)(lVar21 + 0x10) + 0xc) +
               *(float *)(lVar21 + 0xd4) + *pfVar1;
      fVar26 = fVar27 - *(float *)(lVar10 + 0x48);
      fVar29 = *(float *)(lVar9 + 0x138);
      if (*(float *)(lVar9 + 0x138) <= fVar26) {
        fVar29 = fVar26;
      }
      *(float *)(lVar9 + 0x138) = fVar29;
      fVar29 = *(float *)(lVar21 + 0xf8);
      if (fVar27 <= *(float *)(lVar21 + 0xf8)) {
        fVar29 = fVar27;
      }
      if (fVar25 <= fVar29) {
        fVar25 = fVar29;
      }
    }
  }
  else {
    fVar29 = *(float *)(lVar21 + 0xd4) + *pfVar1;
    if (fVar25 <= fVar29) {
      fVar25 = fVar29;
    }
  }
  *(float *)(lVar9 + 0x130) = fVar25;
  if (0.0 < *(float *)(lVar10 + 0x4c)) {
    if (fVar28 <= *(float *)(lVar21 + 0xfc)) {
      fVar28 = *(float *)(lVar21 + 0xfc);
    }
  }
  else {
    if (lVar8 == lVar9) {
      fVar25 = *(float *)(lVar21 + 0x104);
    }
    else {
      fVar30 = *(float *)(lVar8 + 0xc4);
      fVar25 = *(float *)(lVar8 + 300);
    }
    fVar30 = fVar30 + (fVar24 - fVar25) + *(float *)(lVar21 + 0xf4);
    fVar25 = fVar30 - *(float *)(lVar10 + 0x4c);
    fVar24 = *(float *)(lVar9 + 0x13c);
    if (*(float *)(lVar9 + 0x13c) <= fVar25) {
      fVar24 = fVar25;
    }
    *(float *)(lVar9 + 0x13c) = fVar24;
    fVar24 = *(float *)(lVar21 + 0xfc);
    if (fVar30 <= *(float *)(lVar21 + 0xfc)) {
      fVar24 = fVar30;
    }
    if (fVar28 <= fVar24) {
      fVar28 = fVar24;
    }
  }
  *(float *)(lVar9 + 0x134) = fVar28;
  if (*(char *)(lVar21 + 0x242) != '\0') {
    FUN_1804127d0(lVar21);
  }
  *(undefined1 *)(lVar21 + 0x23b) = 0;
  iVar16 = *(int *)(lVar13 + 0x236c);
  iVar6 = iVar16 + -1;
  *(int *)(lVar13 + 0x236c) = iVar6;
  if (((iVar6 < 1) ||
      (piVar22 = (int *)((longlong)(iVar16 + -2) * 0xb0 + *(longlong *)(lVar13 + 0x2378)),
      piVar22 == (int *)0x0)) || (*piVar22 != *(int *)(lVar9 + 0x10))) {
    *(undefined8 *)(lVar13 + 0x2360) = 0;
  }
  else {
    lVar21 = (longlong)piVar22[1] * 0x250 + *(longlong *)(lVar13 + 0x2388);
    *(longlong *)(lVar13 + 0x2360) = lVar21;
    if (lVar21 != 0) {
      *(int **)(lVar21 + 0x10) = piVar22;
      *(int **)(*(longlong *)(lVar13 + 0x2360) + 0x1a0) = piVar22 + 0x14;
    }
  }
  lVar21 = DAT_180ca0a50;
  if (*(longlong *)(lVar13 + 0x2360) == 0) {
    uVar20 = 0xffffffff;
  }
  else {
    uVar20 = (undefined4)((*(longlong *)(lVar13 + 0x2360) - *(longlong *)(lVar13 + 0x2388)) / 0x250)
    ;
  }
  *(undefined4 *)(lVar9 + 0x1d0) = uVar20;
  lVar13 = *(longlong *)(lVar21 + 0x14f8);
  if ((*(longlong *)(lVar21 + 0x2360) == 0) && (*(longlong *)(lVar13 + 0x1c8) == 0)) {
    *(undefined1 *)(lVar13 + 0x178) = 1;
    return;
  }
  *(undefined1 *)(lVar13 + 0x178) = 0;
  return;
}



/* ===== 18040f2f0 FUN_18040f2f0 ===== */

void FUN_18040f2f0(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  longlong lVar35;
  longlong *plVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined4 *puVar40;
  longlong lVar41;
  uint uVar42;
  int *piVar43;
  undefined1 *puVar44;
  int iVar45;
  undefined8 *puVar46;
  longlong *plVar47;
  undefined4 uVar48;
  
  lVar35 = DAT_180ca0a50;
  lVar15 = *(longlong *)(param_1 + 4);
  if ((*(uint *)(DAT_180ca0a50 + 0x28f4) & 0x1000) != 0) {
    FUN_1803f5060("[table] Reconcile columns for table 0x%08X\n",*param_1);
  }
  lVar41 = *(longlong *)(param_1 + 4);
  piVar3 = (int *)(lVar15 + 0x20);
  lVar37 = *(longlong *)(lVar41 + 0x38);
  lVar39 = *(longlong *)(lVar41 + 0x40);
  plVar1 = (longlong *)(param_1 + 6);
  piVar43 = *(int **)(lVar15 + 0x28);
  plVar47 = plVar1;
  if (lVar37 != lVar39) {
    plVar47 = (longlong *)(lVar41 + 0x38);
  }
  iVar45 = 0;
  piVar2 = piVar43 + (longlong)*piVar3 * 0x24;
  if ((longlong)*piVar3 * 0x90 != 0) {
    do {
      if (*piVar43 != 0) {
        puVar46 = (undefined8 *)*plVar47;
        plVar36 = (longlong *)(param_1 + 8);
        if (lVar37 != lVar39) {
          plVar36 = (longlong *)(lVar41 + 0x40);
        }
        for (; puVar46 != (undefined8 *)*plVar36; puVar46 = puVar46 + 0xf) {
          if ((*(int *)((longlong)puVar46 + 0x34) == *piVar43) &&
             ((*(byte *)((longlong)puVar46 + 0x71) & 8) != 0)) {
            pbVar4 = (byte *)(*plVar1 + 0x71 + (longlong)(short)piVar43[5] * 0x78);
            *pbVar4 = *pbVar4 & 0xef;
            *(byte *)((longlong)puVar46 + 0x71) = *(byte *)((longlong)puVar46 + 0x71) & 0xf7;
            lVar38 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)puVar46 - *plVar47),8)
                     + ((longlong)puVar46 - *plVar47);
            *(short *)((longlong)piVar43 + 0x16) = (short)(lVar38 >> 6) - (short)(lVar38 >> 0x3f);
            iVar45 = iVar45 + 1;
            uVar8 = puVar46[1];
            *(undefined8 *)(piVar43 + 6) = *puVar46;
            *(undefined8 *)(piVar43 + 8) = uVar8;
            uVar8 = puVar46[3];
            *(undefined8 *)(piVar43 + 10) = puVar46[2];
            *(undefined8 *)(piVar43 + 0xc) = uVar8;
            uVar8 = puVar46[5];
            *(undefined8 *)(piVar43 + 0xe) = puVar46[4];
            *(undefined8 *)(piVar43 + 0x10) = uVar8;
            uVar8 = puVar46[7];
            *(undefined8 *)(piVar43 + 0x12) = puVar46[6];
            *(undefined8 *)(piVar43 + 0x14) = uVar8;
            uVar8 = puVar46[9];
            *(undefined8 *)(piVar43 + 0x16) = puVar46[8];
            *(undefined8 *)(piVar43 + 0x18) = uVar8;
            uVar8 = puVar46[0xb];
            *(undefined8 *)(piVar43 + 0x1a) = puVar46[10];
            *(undefined8 *)(piVar43 + 0x1c) = uVar8;
            iVar12 = *(int *)((longlong)puVar46 + 100);
            iVar17 = *(int *)(puVar46 + 0xd);
            iVar18 = *(int *)((longlong)puVar46 + 0x6c);
            piVar43[0x1e] = *(int *)(puVar46 + 0xc);
            piVar43[0x1f] = iVar12;
            piVar43[0x20] = iVar17;
            piVar43[0x21] = iVar18;
            *(undefined8 *)(piVar43 + 0x22) = puVar46[0xe];
            break;
          }
        }
      }
      piVar43 = piVar43 + 0x24;
    } while (piVar43 != piVar2);
  }
  if (iVar45 != *piVar3) {
    puVar46 = (undefined8 *)*plVar47;
    plVar36 = (longlong *)(param_1 + 8);
    if (lVar37 != lVar39) {
      plVar36 = (longlong *)(lVar41 + 0x40);
    }
    puVar16 = (undefined8 *)*plVar36;
    if (puVar46 != puVar16) {
      iVar45 = 0;
      do {
        if ((*(byte *)((longlong)puVar46 + 0x71) & 8) != 0) {
          iVar12 = *piVar3;
          if (iVar45 < iVar12) {
            do {
              if (*(short *)(*(longlong *)(lVar15 + 0x28) + 0x16 + (longlong)iVar45 * 0x90) == -1)
              goto LAB_18040f511;
              iVar45 = iVar45 + 1;
            } while (iVar45 < iVar12);
          }
          if (iVar45 == iVar12) break;
LAB_18040f511:
          lVar41 = *(longlong *)(lVar15 + 0x28);
          lVar37 = (longlong)iVar45;
          pbVar4 = (byte *)(*plVar1 + 0x71 +
                           (longlong)*(short *)(lVar41 + 0x14 + lVar37 * 0x90) * 0x78);
          *pbVar4 = *pbVar4 & 0xef;
          *(byte *)((longlong)puVar46 + 0x71) = *(byte *)((longlong)puVar46 + 0x71) & 0xf7;
          lVar39 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)puVar46 - *plVar47),8) +
                   ((longlong)puVar46 - *plVar47);
          *(short *)(lVar41 + 0x16 + lVar37 * 0x90) = (short)(lVar39 >> 6) - (short)(lVar39 >> 0x3f)
          ;
          uVar8 = puVar46[1];
          puVar5 = (undefined8 *)(lVar41 + 0x18 + lVar37 * 0x90);
          *puVar5 = *puVar46;
          puVar5[1] = uVar8;
          uVar8 = puVar46[3];
          puVar5 = (undefined8 *)(lVar41 + 0x28 + lVar37 * 0x90);
          *puVar5 = puVar46[2];
          puVar5[1] = uVar8;
          uVar8 = puVar46[5];
          puVar5 = (undefined8 *)(lVar41 + 0x38 + lVar37 * 0x90);
          *puVar5 = puVar46[4];
          puVar5[1] = uVar8;
          uVar8 = puVar46[7];
          puVar5 = (undefined8 *)(lVar41 + 0x48 + lVar37 * 0x90);
          *puVar5 = puVar46[6];
          puVar5[1] = uVar8;
          uVar8 = puVar46[9];
          puVar5 = (undefined8 *)(lVar41 + 0x58 + lVar37 * 0x90);
          *puVar5 = puVar46[8];
          puVar5[1] = uVar8;
          uVar8 = puVar46[0xb];
          puVar5 = (undefined8 *)(lVar41 + 0x68 + lVar37 * 0x90);
          *puVar5 = puVar46[10];
          puVar5[1] = uVar8;
          uVar13 = *(undefined4 *)((longlong)puVar46 + 100);
          uVar14 = *(undefined4 *)(puVar46 + 0xd);
          uVar48 = *(undefined4 *)((longlong)puVar46 + 0x6c);
          puVar6 = (undefined4 *)(lVar41 + 0x78 + lVar37 * 0x90);
          *puVar6 = *(undefined4 *)(puVar46 + 0xc);
          puVar6[1] = uVar13;
          puVar6[2] = uVar14;
          puVar6[3] = uVar48;
          *(undefined8 *)(lVar41 + 0x88 + lVar37 * 0x90) = puVar46[0xe];
        }
        puVar46 = puVar46 + 0xf;
      } while (puVar46 != puVar16);
    }
  }
  puVar40 = *(undefined4 **)(lVar15 + 0x28);
  puVar6 = puVar40 + (longlong)*piVar3 * 0x24;
  if ((longlong)*piVar3 * 0x90 != 0) {
    do {
      uVar28 = *(undefined8 *)(puVar40 + 8);
      uVar13 = puVar40[10];
      uVar14 = puVar40[0xb];
      uVar48 = puVar40[0xc];
      uVar19 = puVar40[0xd];
      uVar20 = puVar40[0xe];
      uVar21 = puVar40[0xf];
      uVar22 = puVar40[0x10];
      uVar23 = puVar40[0x11];
      uVar24 = puVar40[0x12];
      uVar25 = puVar40[0x13];
      uVar26 = puVar40[0x14];
      uVar27 = puVar40[0x15];
      uVar29 = *(undefined8 *)(puVar40 + 0x16);
      uVar30 = *(undefined8 *)(puVar40 + 0x18);
      uVar31 = *(undefined8 *)(puVar40 + 0x1a);
      uVar32 = *(undefined8 *)(puVar40 + 0x1c);
      uVar33 = *(undefined8 *)(puVar40 + 0x1e);
      uVar34 = *(undefined8 *)(puVar40 + 0x20);
      uVar8 = *(undefined8 *)(puVar40 + 0x22);
      lVar37 = (longlong)*(short *)(puVar40 + 5) * 0x78;
      lVar41 = *(longlong *)(param_1 + 6);
      *(undefined8 *)(lVar37 + lVar41) = *(undefined8 *)(puVar40 + 6);
      ((undefined8 *)(lVar37 + lVar41))[1] = uVar28;
      puVar7 = (undefined4 *)(lVar37 + 0x10 + lVar41);
      *puVar7 = uVar13;
      puVar7[1] = uVar14;
      puVar7[2] = uVar48;
      puVar7[3] = uVar19;
      puVar7 = (undefined4 *)(lVar37 + 0x20 + lVar41);
      *puVar7 = uVar20;
      puVar7[1] = uVar21;
      puVar7[2] = uVar22;
      puVar7[3] = uVar23;
      puVar7 = (undefined4 *)(lVar37 + 0x30 + lVar41);
      *puVar7 = uVar24;
      puVar7[1] = uVar25;
      puVar7[2] = uVar26;
      puVar7[3] = uVar27;
      puVar46 = (undefined8 *)(lVar37 + 0x40 + lVar41);
      *puVar46 = uVar29;
      puVar46[1] = uVar30;
      puVar46 = (undefined8 *)(lVar37 + 0x50 + lVar41);
      *puVar46 = uVar31;
      puVar46[1] = uVar32;
      puVar46 = (undefined8 *)(lVar37 + 0x60 + lVar41);
      *puVar46 = uVar33;
      puVar46[1] = uVar34;
      *(undefined8 *)(lVar37 + 0x70 + lVar41) = uVar8;
      uVar42 = puVar40[2];
      if (((*(char *)((longlong)param_1 + 0x249) == '\0') || ((uVar42 & 0x1000018) != 0)) ||
         ((float)puVar40[3] <= 0.0)) {
        uVar13 = puVar40[4];
        uVar9 = *(undefined2 *)(puVar40 + 1);
        uVar14 = *puVar40;
        lVar41 = (longlong)*(short *)(puVar40 + 5) * 0x78 + *(longlong *)(param_1 + 6);
        if ((((uVar42 & 0x18) == 0) && (0.0 < (float)puVar40[3])) &&
           (((param_1[1] & 0xe000) - 0x2000 & 0xffffdfff) == 0)) {
          uVar42 = uVar42 | 0x10;
        }
        if ((uVar42 >> 0x12 & 1) != 0) {
          uVar42 = uVar42 | 0x1000;
          *(short *)(param_1 + 0x82) = *(short *)(param_1 + 0x82) + 1;
        }
        uVar48 = FUN_18040cac0(param_1,lVar41,uVar42);
        *(undefined4 *)(lVar41 + 0x34) = uVar14;
        *(undefined4 *)(lVar41 + 0x20) = uVar48;
        *(undefined4 *)(lVar41 + 0x38) = uVar13;
        *(undefined2 *)(lVar41 + 0x58) = uVar9;
      }
      else {
        FUN_1803ebc00(
                     "TableSetupColumn(): can only specify width/weight if sizing policy is set explicitly in either Table or Column."
                     );
      }
      if ((*(uint *)(lVar35 + 0x28f4) & 0x1000) != 0) {
        sVar10 = *(short *)(puVar40 + 5);
        if ((*(char *)((longlong)param_1 + 0x239) == '\0') &&
           (*(short *)((longlong)param_1 + 0x206) <= sVar10)) {
          puVar44 = &DAT_18058b643;
        }
        else {
          sVar11 = *(short *)(*(longlong *)(param_1 + 6) + 0x58 + (longlong)sVar10 * 0x78);
          if (sVar11 == -1) {
            puVar44 = &DAT_18058b643;
          }
          else {
            puVar44 = (undefined1 *)((longlong)sVar11 + *(longlong *)(param_1 + 0x66));
          }
        }
        FUN_1803f5060("[table] - old %d -> new %d \"%s\"\n",
                      (int)*(short *)((longlong)puVar40 + 0x16),(int)sVar10,puVar44);
      }
      puVar40 = puVar40 + 0x24;
    } while (puVar40 != puVar6);
  }
  FUN_180412cc0(param_1);
  *(undefined1 *)((longlong)param_1 + 0x242) = 1;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  iVar45 = *(int *)(lVar15 + 0x24);
  if (iVar45 < 0) {
    iVar45 = iVar45 + iVar45 / 2;
    iVar12 = 0;
    if (0 < iVar45) {
      iVar12 = iVar45;
    }
    FUN_180414250(piVar3,iVar12);
  }
  *piVar3 = 0;
  return;
}



/* ===== 18040f810 FUN_18040f810 ===== */

void FUN_18040f810(longlong param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  longlong lVar11;
  char *_Str;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  size_t sVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  char *pcVar21;
  int iVar22;
  char *pcVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  char *pcVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  char *in_stack_ffffffffffffff48;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  lVar17 = DAT_180ca0a50;
  lVar11 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (*(int *)(param_1 + 0x74) != -1) {
    FUN_1804100c0();
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  lVar18 = DAT_180ca0a50;
  if (*(char *)(lVar17 + 0x2868) != '\0') {
    pcVar28 = "|";
    pcVar23 = "|";
    pcVar21 = *(char **)(DAT_180ca0a50 + 0x2890);
    _Str = *(char **)(DAT_180ca0a50 + 0x2898);
    lVar19 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined8 *)(DAT_180ca0a50 + 0x2898) = 0;
    *(undefined8 *)(lVar18 + 0x2890) = 0;
    while (*pcVar23 != '\0') {
      if (((*pcVar23 == '#') && (pcVar23[1] == '#')) ||
         (pcVar23 = pcVar23 + 1, pcVar23 == (char *)0xffffffffffffffff)) break;
    }
    if (pcVar21 != (char *)0x0) {
      sVar15 = strlen(pcVar21);
      FUN_1803f38c0(0,pcVar21,pcVar21 + sVar15);
    }
    iVar25 = *(int *)(lVar19 + 0x1a0);
    iVar26 = *(int *)(lVar18 + 0x28a4);
    if (iVar25 < iVar26) {
      *(int *)(lVar18 + 0x28a4) = iVar25;
      iVar26 = iVar25;
    }
    iVar25 = *(int *)(lVar19 + 0x1a0);
    while( true ) {
      pcVar16 = (char *)FUN_180540ca0(pcVar28,10);
      pcVar21 = pcVar23;
      if (pcVar16 != (char *)0x0) {
        pcVar21 = pcVar16;
      }
      if ((pcVar28 == pcVar21) && (pcVar21 == pcVar23)) break;
      iVar22 = 1;
      if (*(char *)(lVar18 + 0x2869) != '\0') {
        iVar22 = (iVar25 - iVar26) * 4;
      }
      FUN_1803f3880("%*s%.*s",iVar22,&DAT_18058b643,(int)pcVar21 - (int)pcVar28,pcVar28);
      *(undefined1 *)(lVar18 + 0x2869) = 0;
      in_stack_ffffffffffffff48 = pcVar28;
      if (*pcVar21 == '\n') {
        FUN_1803f3880(&DAT_1806e6e50);
        *(undefined1 *)(lVar18 + 0x2869) = 1;
        in_stack_ffffffffffffff48 = pcVar28;
      }
      if (pcVar21 == pcVar23) break;
      pcVar28 = pcVar21 + 1;
    }
    if (_Str != (char *)0x0) {
      strlen(_Str);
      FUN_1803f38c0(0,_Str);
    }
  }
  *(undefined4 *)(lVar11 + 0x11c) = *(undefined4 *)(param_1 + 0x80);
  iVar26 = (int)*(short *)(param_1 + 0x22a);
  fVar3 = *(float *)(param_1 + 0x7c);
  fVar4 = *(float *)(param_1 + 0x80);
  iVar25 = *(int *)(param_1 + 0x70) + 1;
  sVar9 = *(short *)(param_1 + 0x228);
  if (*(short *)(param_1 + 0x78) == 0) {
    lVar18 = param_1 + 0x1a8;
  }
  else {
    lVar18 = *(longlong *)(param_1 + 0x1c8) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
  }
  if (((*(byte *)(param_1 + 0x94) & 1) != 0) &&
     ((*(int *)(param_1 + 0x70) == 0 || ((*(uint *)(param_1 + 0x94) & 0x10000) != 0)))) {
    *(float *)(lVar18 + 8) = (fVar4 - fVar3) + *(float *)(lVar18 + 8);
  }
  fVar30 = DAT_1808ac34c;
  if ((*(float *)(param_1 + 0x124) <= fVar4) && (fVar3 <= *(float *)(param_1 + 300))) {
    if ((*(short *)(param_1 + 0x20a) != -1) &&
       (((fVar31 = *(float *)(lVar17 + 0x114), fVar3 <= fVar31 && (fVar31 < fVar4)) &&
        (*(int *)(lVar18 + 0x14) < 0)))) {
      *(undefined4 *)(lVar18 + 0x14) = *(undefined4 *)(param_1 + 0x70);
    }
    iVar22 = *(int *)(param_1 + 0x9c);
    iVar27 = iVar26;
    if ((iVar22 == 0x1000000) && (iVar22 = 0, (*(byte *)(param_1 + 4) & 0x40) != 0)) {
      pfVar2 = (float *)(DAT_180ca0a50 + 0xc90 +
                        ((ulonglong)(*(uint *)(param_1 + 0x98) & 1) + 0x46) * 0x10);
      local_a8 = *pfVar2;
      fStack_a4 = pfVar2[1];
      fStack_a0 = pfVar2[2];
      fStack_9c = pfVar2[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
      iVar22 = FUN_1803d7f30(&local_a8);
    }
    iVar20 = *(int *)(param_1 + 0xa0);
    if (iVar20 == 0x1000000) {
      iVar20 = 0;
    }
    uVar29 = 0;
    if ((0 < *(int *)(param_1 + 0x70)) && ((*(byte *)(param_1 + 4) & 0x80) != 0)) {
      if ((*(uint *)(param_1 + 0x94) & 0x10000) == 0) {
        uVar29 = *(uint *)(param_1 + 0xa8);
      }
      else {
        uVar29 = *(uint *)(param_1 + 0xa4);
      }
    }
    sVar10 = *(short *)(param_1 + 0x230);
    if ((((uVar29 != 0 || iVar20 != 0) || iVar22 != 0) || (iVar25 == iVar27)) || (-1 < sVar10)) {
      if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
        lVar17 = *(longlong *)(lVar11 + 0x2c8);
        uVar5 = *(undefined4 *)(param_1 + 0x144);
        uVar6 = *(undefined4 *)(param_1 + 0x148);
        uVar7 = *(undefined4 *)(param_1 + 0x14c);
        *(undefined4 *)(lVar17 + 0x60) = *(undefined4 *)(param_1 + 0x140);
        *(undefined4 *)(lVar17 + 100) = uVar5;
        *(undefined4 *)(lVar17 + 0x68) = uVar6;
        *(undefined4 *)(lVar17 + 0x6c) = uVar7;
      }
      FUN_180401a80(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar11 + 0x2c8));
    }
    if ((iVar22 != 0) || (iVar20 != 0)) {
      local_a8 = *(float *)(param_1 + 0x110);
      if (*(float *)(param_1 + 0x110) <= *(float *)(param_1 + 0x130)) {
        local_a8 = *(float *)(param_1 + 0x130);
      }
      fVar31 = fVar3;
      if (fVar3 <= *(float *)(param_1 + 0x134)) {
        fVar31 = *(float *)(param_1 + 0x134);
      }
      fVar32 = fVar4;
      if (*(float *)(param_1 + 0x13c) <= fVar4) {
        fVar32 = *(float *)(param_1 + 0x13c);
      }
      fStack_a0 = *(float *)(param_1 + 0x118);
      if (*(float *)(param_1 + 0x138) <= *(float *)(param_1 + 0x118)) {
        fStack_a0 = *(float *)(param_1 + 0x138);
      }
      fStack_a4 = fVar31;
      fStack_9c = fVar32;
      if ((iVar22 != 0) && (fVar31 < fVar32)) {
        in_stack_ffffffffffffff48 =
             (char *)((ulonglong)in_stack_ffffffffffffff48 & 0xffffffff00000000);
        FUN_1803fe590(*(undefined8 *)(lVar11 + 0x2c8),&local_a8,&fStack_a0,iVar22,
                      in_stack_ffffffffffffff48,0);
      }
      if ((iVar20 != 0) && (fVar31 < fVar32)) {
        in_stack_ffffffffffffff48 =
             (char *)((ulonglong)in_stack_ffffffffffffff48 & 0xffffffff00000000);
        FUN_1803fe590(*(undefined8 *)(lVar11 + 0x2c8),&local_a8,&fStack_a0,iVar20,
                      in_stack_ffffffffffffff48,0);
      }
    }
    if (-1 < sVar10) {
      puVar24 = *(undefined4 **)(param_1 + 0x38);
      puVar1 = puVar24 + (longlong)*(short *)(param_1 + 0x230) * 2;
      for (; puVar24 <= puVar1; puVar24 = puVar24 + 2) {
        fStack_a4 = *(float *)(param_1 + 0x7c);
        if (*(float *)(param_1 + 0x7c) <= *(float *)(param_1 + 0x134)) {
          fStack_a4 = *(float *)(param_1 + 0x134);
        }
        fStack_9c = *(float *)(param_1 + 0x80);
        if (*(float *)(param_1 + 0x13c) <= *(float *)(param_1 + 0x80)) {
          fStack_9c = *(float *)(param_1 + 0x13c);
        }
        lVar19 = (longlong)*(short *)(puVar24 + 1) * 0x78;
        lVar17 = *(longlong *)(param_1 + 0x18);
        fVar31 = *(float *)(lVar17 + 0xc + lVar19);
        local_a8 = *(float *)(lVar17 + 8 + lVar19);
        fStack_a0 = fVar31;
        if (*(float *)(param_1 + 0x118) <= fVar31) {
          fStack_a0 = *(float *)(param_1 + 0x118);
        }
        if (local_a8 <= *(float *)(param_1 + 0x110)) {
          local_a8 = *(float *)(param_1 + 0x110);
        }
        if (*(float *)(param_1 + 0x138) <= fStack_a0) {
          fStack_a0 = *(float *)(param_1 + 0x138);
        }
        if (local_a8 <= *(float *)(param_1 + 0x130)) {
          local_a8 = *(float *)(param_1 + 0x130);
        }
        if (fVar31 <= fStack_a0) {
          fStack_a0 = fVar31;
        }
        fVar31 = *(float *)(lVar17 + 0x24 + lVar19);
        if (local_a8 <= fVar31) {
          local_a8 = fVar31;
        }
        if (fStack_a4 < fStack_9c) {
          in_stack_ffffffffffffff48 =
               (char *)((ulonglong)in_stack_ffffffffffffff48 & 0xffffffff00000000);
          FUN_1803fe590(*(undefined8 *)(lVar11 + 0x2c8),&local_a8,&fStack_a0,*puVar24,
                        in_stack_ffffffffffffff48,0);
        }
      }
    }
    fVar31 = DAT_1808ac1f4;
    if ((((uVar29 != 0) && (*(float *)(param_1 + 0x134) <= fVar3)) &&
        (fVar3 < *(float *)(param_1 + 0x13c))) && ((uVar29 & 0xff000000) != 0)) {
      fStack_a4 = fVar3 + DAT_1808ac1f4;
      local_a8 = *(float *)(param_1 + 0xac) + DAT_1808ac1f4;
      fStack_a0 = *(float *)(param_1 + 0xb0) + DAT_1808ac1f4;
      fStack_9c = fStack_a4;
      FUN_1803fc600(*(undefined8 *)(lVar11 + 0x2c8),&local_a8,2,uVar29,fVar30,0);
    }
    if (((iVar25 == iVar26) && (*(float *)(param_1 + 0x134) <= fVar4)) &&
       ((fVar4 < *(float *)(param_1 + 0x13c) && ((*(uint *)(param_1 + 0xa4) & 0xff000000) != 0)))) {
      fStack_a4 = fVar4 + fVar31;
      local_a8 = *(float *)(param_1 + 0xac) + fVar31;
      fStack_a0 = *(float *)(param_1 + 0xb0) + fVar31;
      fStack_9c = fStack_a4;
      FUN_1803fc600(*(undefined8 *)(lVar11 + 0x2c8),&local_a8,2,*(uint *)(param_1 + 0xa4),fVar30,0);
    }
  }
  if (iVar25 == sVar9) {
    iVar22 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        lVar17 = (longlong)iVar22;
        iVar22 = iVar22 + 1;
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x72 + lVar17 * 0x78) =
             *(undefined1 *)(param_1 + 0x238);
      } while (iVar22 < *(int *)(param_1 + 0x6c));
    }
    fVar30 = *(float *)(param_1 + 0x80) + fVar30;
    if (fVar30 <= *(float *)(param_1 + 0x124)) {
      fVar30 = *(float *)(param_1 + 0x124);
    }
    *(float *)(lVar18 + 0xc) = fVar30 - *(float *)(param_1 + 0xf4);
    if (iVar25 == iVar26) {
      fVar3 = *(float *)(param_1 + 300);
      iVar25 = 0;
      if (fVar3 <= fVar30) {
        fVar30 = fVar3;
      }
      *(float *)(param_1 + 0x15c) = fVar3;
      *(float *)(param_1 + 0x13c) = fVar3;
      *(undefined1 *)(param_1 + 0x248) = 1;
      *(undefined2 *)(param_1 + 0x234) = *(undefined2 *)(param_1 + 0x236);
      *(float *)(param_1 + 0x154) = fVar30;
      *(float *)(param_1 + 0x134) = fVar30;
      fVar3 = *(float *)(param_1 + 0x80);
      fVar4 = *(float *)(param_1 + 0x7c);
      fVar30 = (fVar3 + *(float *)(param_1 + 0x114)) - *(float *)(param_1 + 0xf4);
      *(float *)(lVar11 + 0x11c) = fVar30;
      *(float *)(param_1 + 0x80) = fVar30;
      *(float *)(param_1 + 0x7c) = fVar30 - (fVar3 - fVar4);
      if (0 < *(int *)(param_1 + 0x6c)) {
        do {
          lVar17 = *(longlong *)(param_1 + 0x18);
          lVar18 = (longlong)iVar25;
          iVar25 = iVar25 + 1;
          lVar18 = lVar18 * 0x78;
          *(undefined2 *)(lVar17 + 100 + lVar18) = *(undefined2 *)(lVar17 + 0x68 + lVar18);
          *(undefined4 *)(lVar17 + 0x28 + lVar18) = *(undefined4 *)(param_1 + 0x154);
        } while (iVar25 < *(int *)(param_1 + 0x6c));
      }
      lVar17 = *(longlong *)(param_1 + 0x18);
      uVar5 = *(undefined4 *)(lVar17 + 0x24);
      uVar6 = *(undefined4 *)(lVar17 + 0x28);
      uVar7 = *(undefined4 *)(lVar17 + 0x2c);
      uVar8 = *(undefined4 *)(lVar17 + 0x30);
      uVar12 = *(undefined4 *)(lVar17 + 0x28);
      uVar13 = *(undefined4 *)(lVar17 + 0x2c);
      uVar14 = *(undefined4 *)(lVar17 + 0x30);
      lVar18 = *(longlong *)(lVar11 + 0x2c8);
      *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(lVar17 + 0x24);
      *(undefined4 *)(lVar11 + 0x26c) = uVar12;
      *(undefined4 *)(lVar11 + 0x270) = uVar13;
      *(undefined4 *)(lVar11 + 0x274) = uVar14;
      *(undefined4 *)(lVar18 + 0x60) = uVar5;
      *(undefined4 *)(lVar18 + 100) = uVar6;
      *(undefined4 *)(lVar18 + 0x68) = uVar7;
      *(undefined4 *)(lVar18 + 0x6c) = uVar8;
      lVar17 = *(longlong *)(*(longlong *)(lVar11 + 0x2c8) + 0xa8);
      lVar18 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x2c8) + 0xa0) + -1;
      *(undefined4 *)(lVar17 + lVar18 * 0x10) = uVar5;
      *(undefined4 *)(lVar17 + 4 + lVar18 * 0x10) = uVar6;
      *(undefined4 *)(lVar17 + 8 + lVar18 * 0x10) = uVar7;
      *(undefined4 *)(lVar17 + 0xc + lVar18 * 0x10) = uVar8;
      FUN_180401a80(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar11 + 0x2c8),
                    *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 100));
    }
  }
  *(undefined1 *)(param_1 + 0x23a) = 0;
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  return;
}



/* ===== 1804100c0 FUN_1804100c0 ===== */

void FUN_1804100c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  lVar3 = (longlong)*(int *)(param_1 + 0x74) * 0x78 + *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x159) != '\0') {
    lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined1 *)(lVar2 + 0x159) = 0;
    if (((*(float *)(lVar2 + 0x130) < *(float *)(lVar2 + 0x118)) ||
        (*(float *)(lVar2 + 0x134) < *(float *)(lVar2 + 0x11c))) &&
       (*(char *)(lVar2 + 0xd1) == '\0')) {
      FUN_1803ebc00(
                   "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                   );
    }
  }
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    lVar2 = 0x4c;
    if (*(char *)(param_1 + 0x248) == '\0') {
      lVar2 = 0x48;
    }
  }
  else {
    lVar2 = 0x50;
  }
  fVar4 = *(float *)(lVar2 + lVar3);
  if (*(float *)(lVar2 + lVar3) <= *(float *)(lVar1 + 0x130)) {
    fVar4 = *(float *)(lVar1 + 0x130);
  }
  *(float *)(lVar2 + lVar3) = fVar4;
  if (*(char *)(lVar3 + 0x6a) != '\0') {
    fVar5 = *(float *)(lVar1 + 0x134) + *(float *)(param_1 + 0x88);
    fVar4 = *(float *)(param_1 + 0x80);
    if (*(float *)(param_1 + 0x80) <= fVar5) {
      fVar4 = fVar5;
    }
    *(float *)(param_1 + 0x80) = fVar4;
  }
  *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(lVar1 + 0x1e8);
  fVar4 = *(float *)(param_1 + 0x8c);
  if (*(float *)(param_1 + 0x8c) <= *(float *)(lVar1 + 0x154)) {
    fVar4 = *(float *)(lVar1 + 0x154);
  }
  *(float *)(param_1 + 0x8c) = fVar4;
  return;
}



/* ===== 1804101d0 FUN_1804101d0 ===== */

void FUN_1804101d0(int param_1,float param_2)

{
  float fVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x2360);
  lVar7 = (longlong)param_1 * 0x78;
  fVar11 = *(float *)(lVar3 + 0xb8);
  lVar4 = *(longlong *)(lVar3 + 0x18);
  fVar10 = fVar11;
  if (fVar11 <= param_2) {
    fVar1 = *(float *)(lVar7 + 0x18 + lVar4);
    if (fVar11 <= fVar1) {
      fVar10 = fVar1;
    }
    if (param_2 <= fVar10) {
      fVar10 = param_2;
    }
  }
  if ((*(float *)(lVar7 + 4 + lVar4) != fVar10) &&
     (fVar1 = *(float *)(lVar7 + 0x10 + lVar4), fVar1 != fVar10)) {
    sVar2 = *(short *)(lVar7 + 0x60 + lVar4);
    if (sVar2 == -1) {
      puVar9 = (uint *)0x0;
    }
    else {
      puVar9 = (uint *)((longlong)sVar2 * 0x78 + lVar4);
    }
    if ((*(byte *)(lVar7 + lVar4) & 0x10) == 0) {
      if (puVar9 == (uint *)0x0) {
        sVar2 = *(short *)(lVar7 + 0x5e + lVar4);
        if (sVar2 == -1) {
          return;
        }
        puVar9 = (uint *)((longlong)sVar2 * 0x78 + lVar4);
        if (puVar9 == (uint *)0x0) {
          return;
        }
      }
    }
    else if (((puVar9 == (uint *)0x0) || (*(short *)(lVar3 + 0x222) == -1)) ||
            (*(short *)(lVar7 + 0x5a + lVar4) <=
             *(short *)((longlong)*(short *)(lVar3 + 0x222) * 0x78 + 0x5a + lVar4))) {
      *(float *)(lVar7 + 0x10 + lVar4) = fVar10;
      *(undefined1 *)(lVar3 + 0x242) = 1;
      return;
    }
    fVar10 = (float)puVar9[4] - (fVar10 - fVar1);
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
    *(float *)(lVar7 + 0x10 + lVar4) = ((float)puVar9[4] + fVar1) - fVar10;
    puVar9[4] = (uint)fVar10;
    if ((((*(uint *)(lVar7 + lVar4) | *puVar9) & 8) != 0) && (0 < *(int *)(lVar3 + 0x6c))) {
      lVar4 = *(longlong *)(lVar3 + 0x18);
      fVar11 = 0.0;
      fVar10 = 0.0;
      uVar8 = 0;
      do {
        lVar7 = uVar8 * 0x78;
        if ((*(char *)(lVar4 + 0x6a + lVar7) != '\0') && ((*(byte *)(lVar4 + lVar7) & 8) != 0)) {
          fVar11 = fVar11 + *(float *)(lVar4 + 0x1c + lVar7);
          fVar10 = fVar10 + *(float *)(lVar4 + 0x10 + lVar7);
        }
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(lVar3 + 0x6c));
      iVar5 = 0;
      do {
        lVar7 = (longlong)iVar5 * 0x78;
        lVar4 = *(longlong *)(lVar3 + 0x18);
        if ((*(char *)(lVar4 + 0x6a + lVar7) != '\0') && ((*(byte *)(lVar4 + lVar7) & 8) != 0)) {
          *(float *)(lVar4 + 0x1c + lVar7) = (*(float *)(lVar4 + 0x10 + lVar7) / fVar10) * fVar11;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar3 + 0x6c));
    }
    *(undefined1 *)(lVar3 + 0x242) = 1;
  }
  return;
}



/* ===== 180410360 FUN_180410360 ===== */

void FUN_180410360(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x2360);
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar11 = *(undefined8 *)(lVar6 + 0x270);
  *(undefined8 *)(lVar5 + 0x170) = *(undefined8 *)(lVar6 + 0x268);
  *(undefined8 *)(lVar5 + 0x178) = uVar11;
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar8 = *(undefined4 *)(lVar5 + 0x154);
  uVar9 = *(undefined4 *)(lVar5 + 0x158);
  uVar10 = *(undefined4 *)(lVar5 + 0x15c);
  uVar1 = *(undefined4 *)(lVar5 + 0x150);
  uVar2 = *(undefined4 *)(lVar5 + 0x154);
  uVar3 = *(undefined4 *)(lVar5 + 0x158);
  uVar4 = *(undefined4 *)(lVar5 + 0x15c);
  *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(lVar5 + 0x150);
  *(undefined4 *)(lVar6 + 0x26c) = uVar8;
  *(undefined4 *)(lVar6 + 0x270) = uVar9;
  *(undefined4 *)(lVar6 + 0x274) = uVar10;
  *(undefined4 *)(lVar7 + 0x60) = uVar1;
  *(undefined4 *)(lVar7 + 100) = uVar2;
  *(undefined4 *)(lVar7 + 0x68) = uVar3;
  *(undefined4 *)(lVar7 + 0x6c) = uVar4;
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x2c8) + 0xa8);
  lVar12 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x2c8) + 0xa0) + -1;
  *(undefined4 *)(lVar7 + lVar12 * 0x10) = uVar1;
  *(undefined4 *)(lVar7 + 4 + lVar12 * 0x10) = uVar2;
  *(undefined4 *)(lVar7 + 8 + lVar12 * 0x10) = uVar3;
  *(undefined4 *)(lVar7 + 0xc + lVar12 * 0x10) = uVar4;
  FUN_180401a80(*(undefined8 *)(lVar5 + 0x1a0),*(undefined8 *)(lVar6 + 0x2c8),
                *(undefined2 *)(lVar5 + 0x234));
  return;
}



/* ===== 180410420 FUN_180410420 ===== */

void FUN_180410420(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x2360);
  lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar8 = *(undefined4 *)(lVar5 + 0x174);
  uVar9 = *(undefined4 *)(lVar5 + 0x178);
  uVar10 = *(undefined4 *)(lVar5 + 0x17c);
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar1 = *(undefined4 *)(lVar5 + 0x170);
  uVar2 = *(undefined4 *)(lVar5 + 0x174);
  uVar3 = *(undefined4 *)(lVar5 + 0x178);
  uVar4 = *(undefined4 *)(lVar5 + 0x17c);
  *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(lVar5 + 0x170);
  *(undefined4 *)(lVar6 + 0x26c) = uVar8;
  *(undefined4 *)(lVar6 + 0x270) = uVar9;
  *(undefined4 *)(lVar6 + 0x274) = uVar10;
  *(undefined4 *)(lVar7 + 0x60) = uVar1;
  *(undefined4 *)(lVar7 + 100) = uVar2;
  *(undefined4 *)(lVar7 + 0x68) = uVar3;
  *(undefined4 *)(lVar7 + 0x6c) = uVar4;
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x2c8) + 0xa8);
  lVar11 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x2c8) + 0xa0) + -1;
  *(undefined4 *)(lVar7 + lVar11 * 0x10) = uVar1;
  *(undefined4 *)(lVar7 + 4 + lVar11 * 0x10) = uVar2;
  *(undefined4 *)(lVar7 + 8 + lVar11 * 0x10) = uVar3;
  *(undefined4 *)(lVar7 + 0xc + lVar11 * 0x10) = uVar4;
  FUN_180401a80(*(undefined8 *)(lVar5 + 0x1a0),*(undefined8 *)(lVar6 + 0x2c8),
                *(undefined2 *)
                 ((longlong)*(int *)(lVar5 + 0x74) * 0x78 + 100 + *(longlong *)(lVar5 + 0x18)));
  return;
}



/* ===== 1804104e0 FUN_1804104e0 ===== */

void FUN_1804104e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  longlong lVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  
  sVar6 = 1;
  sVar10 = 1;
  if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
    sVar10 = *(short *)(param_1 + 0x202);
  }
  if (((int)*(short *)(param_1 + 0x202) < *(int *)(param_1 + 0x6c)) ||
     (iVar5 = memcmp(*(void **)(param_1 + 0x58),*(void **)(param_1 + 0x50),
                     (longlong)(*(int *)(param_1 + 0x6c) + 0x1f >> 5) << 2), iVar5 != 0)) {
    bVar3 = true;
    sVar9 = 2;
    sVar4 = 3;
  }
  else {
    bVar3 = false;
    sVar4 = 2;
    sVar9 = 1;
  }
  sVar8 = 2;
  sVar9 = sVar9 + sVar10;
  if (0 < *(short *)(param_1 + 0x22a)) {
    sVar9 = sVar4 + sVar10 * 2;
  }
  FUN_180401570();
  *(undefined2 *)(param_1 + 0x234) = 1;
  sVar4 = -1;
  if (bVar3) {
    sVar4 = sVar9;
  }
  *(short *)(param_1 + 0x232) = sVar4;
  if (0 < *(short *)(param_1 + 0x22a)) {
    sVar6 = sVar10 + 2;
  }
  iVar5 = 0;
  *(short *)(param_1 + 0x236) = sVar6;
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      lVar7 = (longlong)iVar5 * 0x78;
      if ((*(char *)(lVar1 + 0x6d + lVar7) == '\0') || (*(char *)(lVar1 + 0x6e + lVar7) == '\0')) {
        sVar6 = *(short *)(param_1 + 0x232);
        *(short *)(lVar1 + 0x68 + lVar7) = sVar6;
        *(short *)(lVar1 + 0x66 + lVar7) = sVar6;
      }
      else {
        *(short *)(lVar1 + 0x66 + lVar7) = sVar8;
        sVar6 = 0;
        if (0 < *(short *)(param_1 + 0x22a)) {
          sVar6 = sVar10 + 1;
        }
        *(short *)(lVar1 + 0x68 + lVar7) = sVar6 + sVar8;
        sVar4 = sVar8 + 1;
        if ((*(uint *)(param_1 + 4) & 0x100000) != 0) {
          sVar4 = sVar8;
        }
        sVar6 = sVar8;
        sVar8 = sVar4;
      }
      iVar5 = iVar5 + 1;
      *(short *)(lVar1 + 100 + lVar7) = sVar6;
    } while (iVar5 < *(int *)(param_1 + 0x6c));
  }
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x128);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x270);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x268);
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x168);
  return;
}



/* ===== 180410690 FUN_180410690 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180410690(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  ushort uVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong *puVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  byte bVar28;
  uint uVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  ulonglong *puVar33;
  int iVar34;
  uint *puVar35;
  longlong lVar36;
  longlong lVar37;
  float *pfVar38;
  float *pfVar39;
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  uint uVar42;
  uint uVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStack_198 [32];
  short local_178;
  short local_176;
  uint local_174;
  int local_170;
  int local_16c;
  int local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  float local_138 [4];
  int local_128 [2];
  ulonglong local_120 [3];
  undefined4 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  longlong local_c0;
  ulonglong local_b8;
  
  lVar27 = DAT_180ca0a50;
  local_b8 = DAT_180919500 ^ (ulonglong)auStack_198;
  local_176 = *(short *)(param_1 + 0x22e);
  uVar42 = 0;
  lVar36 = *(longlong *)(param_1 + 0x1a0);
  sVar9 = *(short *)(param_1 + 0x22a);
  local_150 = DAT_180ca0a50;
  local_16c = *(int *)(param_1 + 0x6c) * 2 + 0x23 >> 5;
  local_138[0] = 0.0;
  local_138[1] = 0.0;
  local_138[2] = 0.0;
  local_138[3] = 0.0;
  local_128[0] = 0;
  local_120[0] = 0;
  iVar32 = local_16c * 4;
  local_120[1] = 0;
  local_120[2] = 0;
  iVar31 = local_16c * 0x14;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_178 = sVar9;
  local_168 = iVar32;
  local_160 = lVar36;
  local_158 = param_1;
  FUN_1803f6920(DAT_180ca0a50 + 11000,iVar31);
  FUN_180540170(*(undefined8 *)(lVar27 + 0x2b00),0,(longlong)iVar31);
  lVar37 = local_150;
  lVar25 = local_160;
  local_148 = *(longlong *)(lVar27 + 0x2b00);
  if (DAT_1809194c8 < 2) {
    iVar31 = 0;
    do {
      iVar34 = iVar31 * iVar32;
      lVar27 = (longlong)iVar31;
      iVar31 = iVar31 + 1;
      local_120[lVar27 * 4] = iVar34 + local_148;
    } while (iVar31 < 4);
  }
  else {
    auVar51._8_8_ = 0;
    auVar51._0_8_ = DAT_1808ad670;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = CONCAT44(iVar32,iVar32);
    auVar45 = pmulld(auVar51,auVar45);
    auVar45 = pmovsxdq(in_XMM2,auVar45);
    local_100 = auVar45._8_8_ + local_148;
    local_120[0] = auVar45._0_8_ + local_148;
    auVar47._0_4_ = _DAT_1808ad650 + (int)DAT_1808ad670;
    auVar47._4_4_ = _UNK_1808ad654 + (int)(DAT_1808ad670 >> 0x20);
    auVar47._8_4_ = _UNK_1808ad658;
    auVar47._12_4_ = _UNK_1808ad65c;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = local_100;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = CONCAT44(iVar32,iVar32);
    auVar45 = pmulld(auVar47,auVar46);
    auVar45 = pmovsxdq(auVar49,auVar45);
    local_e0 = auVar45._0_8_ + local_148;
    local_c0 = auVar45._8_8_ + local_148;
  }
  if (0 < *(int *)(param_1 + 0x6c)) {
    local_174 = 0;
    uVar43 = 2;
    local_170 = (0 < sVar9) + 1;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x58) + ((longlong)(int)local_174 >> 5) * 4) >>
           (local_174 & 0x1f) & 1) != 0) {
        puVar35 = (uint *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)local_174 * 0x78);
        iVar32 = 0;
        do {
          lVar36 = *(longlong *)(lVar36 + 0x10);
          lVar27 = 0x66;
          if (iVar32 != 0) {
            lVar27 = 0x68;
          }
          uVar10 = *(ushort *)((longlong)puVar35 + lVar27);
          lVar27 = (ulonglong)uVar10 * 0x20;
          iVar31 = *(int *)(lVar27 + lVar36);
          if (0 < iVar31) {
            iVar34 = iVar31 + -1;
            lVar11 = *(longlong *)(lVar27 + 8 + lVar36);
            if ((*(int *)(lVar11 + 0x28 + (longlong)iVar34 * 0x48) == 0) &&
               (*(longlong *)(lVar11 + 0x30 + (longlong)iVar34 * 0x48) == 0)) {
              *(int *)(lVar27 + lVar36) = iVar34;
              iVar31 = iVar34;
            }
            if (iVar31 == 1) {
              if ((*puVar35 & 0x100) == 0) {
                if (local_178 < 1) {
                  fVar44 = (float)puVar35[0x13];
                  if ((float)puVar35[0x13] <= (float)puVar35[0x14]) {
                    fVar44 = (float)puVar35[0x14];
                  }
                }
                else if (iVar32 == 0) {
                  fVar44 = (float)puVar35[0x12];
                  if ((float)puVar35[0x12] <= (float)puVar35[0x14]) {
                    fVar44 = (float)puVar35[0x14];
                  }
                }
                else {
                  fVar44 = (float)puVar35[0x13];
                }
                if ((float)puVar35[0xb] <= fVar44 && fVar44 != (float)puVar35[0xb])
                goto LAB_180410a25;
              }
              if ((local_176 < 1) || ((int)*(short *)(param_1 + 0x22e) <= (int)local_174)) {
                uVar29 = 1;
              }
              else {
                uVar29 = 0;
              }
              if ((local_178 < 1) || (iVar32 != 0)) {
                uVar26 = 2;
              }
              else {
                uVar26 = 0;
              }
              uVar30 = (ulonglong)(uVar26 | uVar29);
              if (local_128[uVar30 * 8] == 0) {
                local_138[uVar30 * 8] = 3.4028235e+38;
                pfVar38 = local_138 + uVar30 * 8 + 2;
                local_138[uVar30 * 8 + 1] = 3.4028235e+38;
                pfVar39 = local_138 + uVar30 * 8 + 3;
                *pfVar38 = -3.4028235e+38;
                *pfVar39 = -3.4028235e+38;
              }
              else {
                pfVar38 = (float *)((longlong)local_138 + (uVar30 * 0x20 | 8));
                pfVar39 = (float *)((longlong)local_138 + (uVar30 * 0x20 | 0xc));
              }
              *(uint *)(local_120[uVar30 * 4] + (ulonglong)(uVar10 >> 5) * 4) =
                   *(uint *)(local_120[uVar30 * 4] + (ulonglong)(uVar10 >> 5) * 4) |
                   1 << (uVar10 & 0x1f);
              local_128[uVar30 * 8] = local_128[uVar30 * 8] + 1;
              pfVar12 = *(float **)(lVar27 + 8 + lVar36);
              fVar44 = pfVar12[1];
              fVar4 = pfVar12[2];
              fVar5 = pfVar12[3];
              if (*pfVar12 < local_138[uVar30 * 8]) {
                local_138[uVar30 * 8] = *pfVar12;
              }
              if (fVar44 < local_138[uVar30 * 8 + 1]) {
                local_138[uVar30 * 8 + 1] = fVar44;
              }
              if (*pfVar38 <= fVar4 && fVar4 != *pfVar38) {
                *pfVar38 = fVar4;
              }
              if (*pfVar39 <= fVar5 && fVar5 != *pfVar39) {
                *pfVar39 = fVar5;
              }
              uVar42 = uVar42 | 1 << (uVar26 | uVar29);
              param_1 = local_158;
            }
          }
LAB_180410a25:
          iVar32 = iVar32 + 1;
          lVar36 = local_160;
        } while (iVar32 < local_170);
        *(undefined2 *)(puVar35 + 0x19) = 0xffff;
      }
      local_174 = local_174 + 1;
    } while ((int)local_174 < *(int *)(param_1 + 0x6c));
    if (uVar42 != 0) {
      iVar31 = *(int *)(local_160 + 4) + -2;
      iVar32 = *(int *)(local_150 + 0x23bc);
      puVar33 = (ulonglong *)((local_16c << 4) + local_148);
      if (iVar32 < iVar31) {
        if (iVar32 == 0) {
          iVar32 = 8;
        }
        else {
          iVar32 = iVar32 / 2 + iVar32;
        }
        iVar34 = iVar31;
        if (iVar31 < iVar32) {
          iVar34 = iVar32;
        }
        FUN_18040c520(local_150 + 0x23b8,iVar34);
      }
      *(int *)(lVar37 + 0x23b8) = iVar31;
      pauVar41 = *(undefined1 (**) [16])(lVar37 + 0x23c0);
      iVar32 = *(int *)(lVar25 + 4) + -1;
      if (1 < iVar32) {
        do {
          lVar36 = (longlong)(int)uVar43;
          bVar14 = (byte)uVar43;
          bVar28 = (byte)iVar32 & 0x1f;
          if ((int)(uVar43 | 0x1f) < iVar32) {
            bVar28 = 0x1f;
          }
          uVar43 = uVar43 + 0x20 & 0xffffffe0;
          puVar35 = (uint *)((longlong)puVar33 + (lVar36 >> 5) * 4);
          *puVar35 = *puVar35 | (int)(1L << bVar28 + 1) - 1U & -(int)(1L << (bVar14 & 0x1f));
        } while ((int)uVar43 <= iVar32);
      }
      uVar30 = (ulonglong)(*(ushort *)(local_158 + 0x236) >> 5);
      *(uint *)((longlong)puVar33 + uVar30 * 4) =
           *(uint *)((longlong)puVar33 + uVar30 * 4) &
           ~(1 << (*(ushort *)(local_158 + 0x236) & 0x1f));
      fVar44 = *(float *)(local_158 + 0x160);
      fVar4 = *(float *)(local_158 + 0x164);
      fVar5 = *(float *)(local_158 + 0x168);
      fVar6 = *(float *)(local_158 + 0x16c);
      iVar32 = *(int *)(lVar25 + 4) - ((0 < local_178) + 2);
      uVar42 = 0;
LAB_180410bc0:
      do {
        lVar36 = (longlong)(int)uVar42;
        iVar31 = local_128[lVar36 * 8];
        if (iVar31 != 0) {
          fVar53 = local_138[lVar36 * 8];
          fVar54 = local_138[lVar36 * 8 + 1];
          fVar52 = local_138[lVar36 * 8 + 2];
          fVar50 = local_138[lVar36 * 8 + 3];
          if ((((uVar42 & 1) == 0) || (local_176 < 1)) && (fVar44 <= fVar53)) {
            fVar53 = fVar44;
          }
          if ((((uVar42 & 2) == 0) || (local_178 < 1)) && (fVar4 <= fVar54)) {
            fVar54 = fVar4;
          }
          if (((uVar42 & 1) != 0) && (fVar52 <= fVar5)) {
            fVar52 = fVar5;
          }
          if ((((uVar42 & 2) != 0) && ((*(uint *)(local_158 + 4) & 0x20000) == 0)) &&
             (fVar50 <= fVar6)) {
            fVar50 = fVar6;
          }
          iVar32 = iVar32 - iVar31;
          uVar43 = local_168 >> 2;
          if (0 < (int)uVar43) {
            iVar34 = 0;
            if (1 < uVar43) {
              puVar13 = (ulonglong *)local_120[lVar36 * 4];
              puVar1 = (ulonglong *)((longlong)puVar33 + (longlong)(int)(uVar43 - 1) * 4);
              if ((((ulonglong *)((longlong)puVar13 + (longlong)(int)(uVar43 - 1) * 4) < puVar33) ||
                  (puVar1 < puVar13)) &&
                 ((local_120 + lVar36 * 4 < puVar33 || (puVar1 < local_120 + lVar36 * 4)))) {
                if (uVar43 < 0x10) {
LAB_180410d1e:
                  uVar30 = local_120[lVar36 * 4];
                  uVar29 = uVar43 & 0x80000001;
                  if ((int)uVar29 < 0) {
                    uVar29 = (uVar29 - 1 | 0xfffffffe) + 1;
                  }
                  do {
                    lVar27 = (longlong)iVar34;
                    iVar34 = iVar34 + 2;
                    uVar7 = *(undefined8 *)((longlong)puVar33 + lVar27 * 4);
                    uVar8 = *(undefined8 *)(uVar30 + lVar27 * 4);
                    *(ulonglong *)((longlong)puVar33 + lVar27 * 4) =
                         CONCAT44(~(uint)((ulonglong)uVar8 >> 0x20) &
                                  (uint)((ulonglong)uVar7 >> 0x20),~(uint)uVar8 & (uint)uVar7);
                  } while (iVar34 < (int)(uVar43 - uVar29));
                }
                else {
                  uVar29 = uVar43 & 0x8000000f;
                  if ((int)uVar29 < 0) {
                    uVar29 = (uVar29 - 1 | 0xfffffff0) + 1;
                  }
                  do {
                    lVar27 = (longlong)iVar34;
                    iVar34 = iVar34 + 0x10;
                    puVar35 = (uint *)((longlong)puVar33 + lVar27 * 4);
                    uVar26 = puVar35[1];
                    uVar15 = puVar35[2];
                    uVar16 = puVar35[3];
                    puVar2 = (uint *)((longlong)puVar13 + lVar27 * 4);
                    uVar17 = puVar2[1];
                    uVar18 = puVar2[2];
                    uVar19 = puVar2[3];
                    puVar3 = (uint *)((longlong)puVar13 + lVar27 * 4 + 0x10);
                    uVar20 = *puVar3;
                    uVar21 = puVar3[1];
                    uVar22 = puVar3[2];
                    uVar23 = puVar3[3];
                    puVar3 = (uint *)((longlong)puVar33 + lVar27 * 4);
                    *puVar3 = ~*puVar2 & *puVar35;
                    puVar3[1] = ~uVar17 & uVar26;
                    puVar3[2] = ~uVar18 & uVar15;
                    puVar3[3] = ~uVar19 & uVar16;
                    puVar35 = (uint *)((longlong)puVar33 + lVar27 * 4 + 0x10);
                    uVar26 = puVar35[1];
                    uVar15 = puVar35[2];
                    uVar16 = puVar35[3];
                    puVar2 = (uint *)((longlong)puVar13 + lVar27 * 4 + 0x20);
                    uVar17 = *puVar2;
                    uVar18 = puVar2[1];
                    uVar19 = puVar2[2];
                    uVar24 = puVar2[3];
                    puVar2 = (uint *)((longlong)puVar33 + lVar27 * 4 + 0x10);
                    *puVar2 = ~uVar20 & *puVar35;
                    puVar2[1] = ~uVar21 & uVar26;
                    puVar2[2] = ~uVar22 & uVar15;
                    puVar2[3] = ~uVar23 & uVar16;
                    puVar35 = (uint *)((longlong)puVar33 + lVar27 * 4 + 0x20);
                    puVar2 = (uint *)((longlong)puVar13 + lVar27 * 4 + 0x30);
                    uVar26 = *puVar2;
                    uVar15 = puVar2[1];
                    uVar16 = puVar2[2];
                    uVar20 = puVar2[3];
                    auVar48._0_4_ = ~uVar17 & *puVar35;
                    auVar48._4_4_ = ~uVar18 & puVar35[1];
                    auVar48._8_4_ = ~uVar19 & puVar35[2];
                    auVar48._12_4_ = ~uVar24 & puVar35[3];
                    *(undefined1 (*) [16])((longlong)puVar33 + lVar27 * 4 + 0x20) = auVar48;
                    auVar45 = *(undefined1 (*) [16])((longlong)puVar33 + lVar27 * 4 + 0x30);
                    puVar35 = (uint *)((longlong)puVar33 + lVar27 * 4 + 0x30);
                    *puVar35 = ~uVar26 & auVar45._0_4_;
                    puVar35[1] = ~uVar15 & auVar45._4_4_;
                    puVar35[2] = ~uVar16 & auVar45._8_4_;
                    puVar35[3] = ~uVar20 & auVar45._12_4_;
                  } while (iVar34 < (int)(uVar43 - uVar29));
                  if (1 < uVar43 % 0x10) goto LAB_180410d1e;
                }
                if ((int)uVar43 <= iVar34) goto LAB_180410d88;
              }
            }
            do {
              lVar27 = (longlong)iVar34;
              iVar34 = iVar34 + 1;
              puVar35 = (uint *)((longlong)puVar33 + lVar27 * 4);
              *puVar35 = *puVar35 & ~*(uint *)(local_120[lVar36 * 4] + lVar27 * 4);
            } while (iVar34 < (int)uVar43);
          }
LAB_180410d88:
          uVar43 = 0;
          pauVar40 = pauVar41;
          if (0 < *(int *)(lVar25 + 4)) {
            do {
              pauVar41 = pauVar40;
              if (iVar31 == 0) break;
              lVar27 = (longlong)(int)uVar43 >> 5;
              uVar29 = *(uint *)(local_120[lVar36 * 4] + lVar27 * 4);
              if ((uVar29 >> (uVar43 & 0x1f) & 1) != 0) {
                lVar37 = (longlong)(int)uVar43 * 0x20;
                *(uint *)(local_120[lVar36 * 4] + lVar27 * 4) = uVar29 & ~(1 << (uVar43 & 0x1f));
                iVar31 = iVar31 + -1;
                lVar27 = *(longlong *)(lVar25 + 0x10);
                pfVar38 = *(float **)(lVar37 + 8 + lVar27);
                *pfVar38 = fVar53;
                pfVar38[1] = fVar54;
                pfVar38[2] = fVar52;
                pfVar38[3] = fVar50;
                pauVar41 = pauVar40 + 2;
                *pauVar40 = *(undefined1 (*) [16])(lVar37 + lVar27);
                pauVar40[1] = *(undefined1 (*) [16])(lVar37 + 0x10 + lVar27);
              }
              uVar43 = uVar43 + 1;
              pauVar40 = pauVar41;
            } while ((int)uVar43 < *(int *)(lVar25 + 4));
          }
        }
        if (uVar42 == 1) {
          if (0 < local_178) {
            lVar36 = *(longlong *)(lVar25 + 0x10);
            lVar27 = (ulonglong)*(ushort *)(local_158 + 0x236) * 0x20;
            *pauVar41 = *(undefined1 (*) [16])(lVar36 + lVar27);
            pauVar41[1] = *(undefined1 (*) [16])(lVar36 + 0x10 + lVar27);
            pauVar41 = pauVar41 + 2;
          }
          uVar42 = 2;
          goto LAB_180410bc0;
        }
        uVar42 = uVar42 + 1;
      } while ((int)uVar42 < 4);
      iVar31 = *(int *)(lVar25 + 4);
      if (0 < iVar31) {
        uVar42 = 0;
        do {
          if (iVar32 == 0) break;
          pauVar40 = pauVar41;
          if ((*(uint *)((longlong)puVar33 + ((longlong)(int)uVar42 >> 5) * 4) >> (uVar42 & 0x1f) &
              1) != 0) {
            lVar36 = *(longlong *)(lVar25 + 0x10);
            lVar27 = (longlong)(int)uVar42 * 0x20;
            pauVar40 = pauVar41 + 2;
            iVar32 = iVar32 + -1;
            *pauVar41 = *(undefined1 (*) [16])(lVar36 + lVar27);
            pauVar41[1] = *(undefined1 (*) [16])(lVar36 + 0x10 + lVar27);
          }
          iVar31 = *(int *)(lVar25 + 4);
          uVar42 = uVar42 + 1;
          pauVar41 = pauVar40;
        } while ((int)uVar42 < iVar31);
      }
      FUN_180540530(*(longlong *)(lVar25 + 0x10) + 0x40,*(undefined8 *)(local_150 + 0x23c0),
                    (longlong)(iVar31 + -2) << 5);
    }
  }
  return;
}



/* ===== 180410f20 FUN_180410f20 ===== */

ulonglong FUN_180410f20(longlong param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
  if ((*(short *)(param_1 + 0x212) == param_3) &&
     (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78))) {
    lVar3 = 0x330;
  }
  else {
    lVar3 = 800;
    if (*(short *)(param_1 + 0x20c) != param_3) {
      if (((int)*(short *)(param_1 + 0x22e) == param_2 + 1) ||
         ((*(uint *)(param_1 + 4) & 0x1800) != 0)) {
        return (ulonglong)*(uint *)(param_1 + 0xa4);
      }
      return (ulonglong)*(uint *)(param_1 + 0xa8);
    }
  }
  puVar1 = (undefined4 *)(lVar3 + 0xc90 + DAT_180ca0a50);
  local_18 = *puVar1;
  uStack_14 = puVar1[1];
  uStack_10 = puVar1[2];
  fStack_c = (float)puVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
  uVar2 = FUN_1803d7f30(&local_18);
  return uVar2;
}



/* ===== 180410fc0 FUN_180410fc0 ===== */

void FUN_180410fc0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  
  lVar6 = *(longlong *)(param_1 + 0x180);
  if (*(float *)(lVar6 + 0x274) < *(float *)(param_1 + 0xf4) ||
      *(float *)(lVar6 + 0x274) == *(float *)(param_1 + 0xf4)) {
    return;
  }
  if (*(float *)(param_1 + 0xfc) < *(float *)(lVar6 + 0x26c) ||
      *(float *)(param_1 + 0xfc) == *(float *)(lVar6 + 0x26c)) {
    return;
  }
  if (*(float *)(lVar6 + 0x270) < *(float *)(param_1 + 0xf0) ||
      *(float *)(lVar6 + 0x270) == *(float *)(param_1 + 0xf0)) {
    return;
  }
  if (*(float *)(param_1 + 0xf8) < *(float *)(lVar6 + 0x268) ||
      *(float *)(param_1 + 0xf8) == *(float *)(lVar6 + 0x268)) {
    return;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x2c8);
  FUN_180401a80(*(undefined8 *)(param_1 + 0x1a0),lVar6,0);
  FUN_1803fc200(lVar6,param_1 + 0x140,param_1 + 0x148);
  fVar12 = DAT_1808ac34c;
  fVar11 = DAT_1808ac1f4;
  if (*(short *)(param_1 + 0x78) == 0) {
    lVar16 = param_1 + 0x1a8;
  }
  else {
    lVar16 = *(longlong *)(param_1 + 0x1c8) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
  }
  if ((*(uint *)(param_1 + 4) >> 8 & 1) == 0) {
    fVar19 = 0.0;
  }
  else {
    fVar19 = DAT_1808ac34c;
  }
  fVar2 = *(float *)(param_1 + 0x10c);
  lVar14 = 0x104;
  if (*(short *)(param_1 + 0x22a) < 1) {
    lVar14 = 0x114;
  }
  fVar18 = *(float *)(param_1 + lVar14) + *(float *)(param_1 + 0xe8);
  fVar21 = *(float *)(param_1 + 0x104);
  if (*(float *)(param_1 + 0x104) <= fVar18) {
    fVar21 = fVar18;
  }
  fVar21 = fVar21 + fVar19;
  if (*(char *)(param_1 + 0x23e) == '\0') {
    fVar19 = fVar21;
  }
  else {
    fVar18 = *(float *)(param_1 + lVar14) + *(float *)(lVar16 + 8);
    fVar19 = fVar2;
    if (fVar18 <= fVar2) {
      fVar19 = fVar18;
    }
  }
  if (((*(uint *)(param_1 + 4) >> 9 & 1) != 0) && (0 < *(int *)(param_1 + 0x6c))) {
    uVar17 = 0;
    fVar18 = fVar21 + DAT_1808ac1f4;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x48) + ((longlong)(int)uVar17 >> 5) * 4) >>
           (uVar17 & 0x1f) & 1) != 0) {
        lVar16 = *(longlong *)(param_1 + 0x18);
        sVar4 = *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar17 * 2);
        lVar14 = (longlong)sVar4 * 0x78;
        if ((*(short *)(param_1 + 0x212) == sVar4) &&
           (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78))) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        fVar3 = *(float *)(lVar16 + 0xc + lVar14);
        if (((fVar3 < *(float *)(param_1 + 0x128) || fVar3 == *(float *)(param_1 + 0x128)) ||
            (bVar10)) &&
           ((((*(short *)(lVar16 + 0x60 + lVar14) != -1 ||
              ((*(uint *)(lVar16 + lVar14) & 0x40000020) == 0)) ||
             (((*(uint *)(param_1 + 4) & 0xe000) == 0x4000 &&
              ((*(uint *)(param_1 + 4) >> 0x10 & 1) == 0)))) &&
            (*(float *)(lVar16 + 0x24 + lVar14) < fVar3)))) {
          fVar20 = fVar2;
          if ((((int)*(short *)(param_1 + 0x22e) != uVar17 + 1) &&
              (((*(uint *)(param_1 + 4) >> 0xc & 1) == 0 ||
               ((*(short *)(param_1 + 0x20c) != sVar4 && (!bVar10)))))) &&
             ((*(uint *)(param_1 + 4) & 0x1800) != 0)) {
            fVar20 = fVar19;
          }
          if ((fVar21 < fVar20) &&
             (uVar13 = FUN_180410f20(param_1,uVar17,(longlong)sVar4 & 0xffffffff),
             (uVar13 & 0xff000000) != 0)) {
            local_a8 = fVar3 + fVar11;
            local_9c = fVar20 + fVar11;
            local_a4 = fVar18;
            local_a0 = local_a8;
            FUN_1803fc600(lVar6,&local_a8,2,uVar13,fVar12,0);
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < *(int *)(param_1 + 0x6c));
  }
  uVar17 = *(uint *)(param_1 + 4);
  if ((uVar17 & 0x500) != 0) {
    fVar19 = *(float *)(param_1 + 0xf0);
    fVar2 = *(float *)(param_1 + 0xf4);
    fVar21 = *(float *)(param_1 + 0xf8);
    fVar18 = *(float *)(param_1 + 0xfc);
    uVar13 = *(uint *)(param_1 + 0xa4);
    if ((uVar17 & 0x500) == 0x500) {
      if ((uVar13 & 0xff000000) != 0) {
        local_res10 = fVar19 + fVar11;
        local_res14 = fVar2 + fVar11;
        local_resc = fVar11;
        if ((*(byte *)(lVar6 + 0x30) & 1) == 0) {
          local_resc = DAT_1808ac1e0;
        }
        local_res8 = fVar21 - local_resc;
        local_resc = fVar18 - local_resc;
        FUN_1803fe160(lVar6,&local_res10,&local_res8,0,0);
        FUN_1803fc600(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar13,
                      fVar12,0x200);
        *(undefined4 *)(lVar6 + 0x50) = 0;
      }
    }
    else {
      if ((uVar17 >> 10 & 1) == 0) {
        if (((uVar17 >> 8 & 1) == 0) || ((uVar13 & 0xff000000) == 0)) goto LAB_1804114b6;
        local_a4 = fVar2 + fVar11;
        local_a0 = fVar21 + fVar11;
        local_a8 = fVar19 + fVar11;
        local_9c = local_a4;
        FUN_1803fc600(lVar6,&local_a8,2,uVar13,fVar12,0);
        fVar18 = (fVar18 - fVar12) + fVar11;
        local_a8 = fVar19 + fVar11;
        local_a4 = fVar18;
      }
      else {
        if ((uVar13 & 0xff000000) == 0) goto LAB_1804114b6;
        local_a8 = fVar19 + fVar11;
        fVar18 = fVar18 + fVar11;
        local_a4 = fVar2 + fVar11;
        local_a0 = local_a8;
        local_9c = fVar18;
        FUN_1803fc600(lVar6,&local_a8,2,uVar13,fVar12,0);
        local_a8 = fVar21 + fVar11;
        local_a4 = fVar2 + fVar11;
      }
      local_a0 = fVar21 + fVar11;
      local_9c = fVar18;
      FUN_1803fc600(lVar6,&local_a8,2,uVar13,fVar12,0);
    }
  }
LAB_1804114b6:
  if (((((*(byte *)(param_1 + 4) & 0x80) != 0) &&
       (fVar19 = *(float *)(param_1 + 0x80), fVar19 < *(float *)(param_1 + 0xfc))) &&
      (*(float *)(param_1 + 0x134) <= fVar19)) &&
     ((fVar19 < *(float *)(param_1 + 0x13c) && ((*(uint *)(param_1 + 0xa8) & 0xff000000) != 0)))) {
    local_a4 = fVar19 + fVar11;
    local_a8 = *(float *)(param_1 + 0xac) + fVar11;
    local_a0 = *(float *)(param_1 + 0xb0) + fVar11;
    local_9c = local_a4;
    FUN_1803fc600(lVar6,&local_a8,2,*(uint *)(param_1 + 0xa8),fVar12,0);
  }
  iVar5 = *(int *)(lVar6 + 0xa0);
  iVar1 = iVar5 + -1;
  *(int *)(lVar6 + 0xa0) = iVar1;
  if (iVar1 == 0) {
    puVar15 = (undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x34);
  }
  else {
    puVar15 = (undefined4 *)((longlong)(iVar5 + -2) * 0x10 + *(longlong *)(lVar6 + 0xa8));
  }
  uVar7 = puVar15[1];
  uVar8 = puVar15[2];
  uVar9 = puVar15[3];
  *(undefined4 *)(lVar6 + 0x60) = *puVar15;
  *(undefined4 *)(lVar6 + 100) = uVar7;
  *(undefined4 *)(lVar6 + 0x68) = uVar8;
  *(undefined4 *)(lVar6 + 0x6c) = uVar9;
  FUN_1803fbff0(lVar6);
  return;
}



/* ===== 1804115e0 FUN_1804115e0 ===== */

void FUN_1804115e0(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  iVar12 = *(int *)(param_1 + 0x6c);
  iVar8 = 0;
  if (iVar12 < 1) {
    lVar7 = 1;
    lVar6 = 1;
  }
  else {
    uVar11 = 0;
    iVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x18);
      lVar6 = (longlong)iVar10 * 0x78;
      sVar3 = *(short *)(lVar7 + 0x62 + lVar6);
      if (sVar3 != -1) {
        if (*(char *)(lVar7 + 0x6a + lVar6) == '\0') {
          *(undefined2 *)(lVar7 + 0x62 + lVar6) = 0xffff;
          sVar3 = -1;
          iVar12 = *(int *)(param_1 + 0x6c);
        }
        if (sVar3 != -1) {
          iVar8 = iVar8 + 1;
          uVar11 = uVar11 | 1L << ((longlong)sVar3 & 0x3fU);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar12);
    lVar7 = 1L << ((byte)iVar8 & 0x3f);
    lVar6 = uVar11 + 1;
    if ((1 < iVar8) && ((*(uint *)(param_1 + 4) & 0x4000000) == 0)) {
      bVar2 = true;
      goto LAB_180411689;
    }
  }
  bVar2 = false;
LAB_180411689:
  plVar9 = (longlong *)(param_1 + 0x18);
  if (((lVar7 == lVar6) && (!bVar2)) || (iVar8 < 1)) {
    if (((iVar8 == 0) && ((*(uint *)(param_1 + 4) & 0x8000000) == 0)) &&
       (0 < *(int *)(param_1 + 0x6c))) {
      lVar7 = *(longlong *)(param_1 + 0x18);
      uVar11 = 0;
      do {
        lVar6 = uVar11 * 0x78;
        if ((*(char *)(lVar6 + 0x6a + lVar7) != '\0') && ((*(uint *)(lVar6 + lVar7) & 0x200) == 0))
        {
          iVar8 = 1;
          *(undefined2 *)(lVar6 + 0x62 + lVar7) = 0;
          bVar1 = *(byte *)(lVar6 + 0x74 + lVar7);
          *(byte *)(lVar6 + 0x74 + lVar7) = (bVar1 ^ *(byte *)(lVar6 + 0x75 + lVar7)) & 3 ^ bVar1;
          break;
        }
        uVar5 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(param_1 + 0x6c));
    }
  }
  else {
    iVar12 = 0;
    uVar11 = 0;
    do {
      uVar4 = 0;
      uVar5 = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x6c)) {
        do {
          if ((uVar11 >> ((ulonglong)uVar4 & 0x3f) & 1) == 0) {
            sVar3 = *(short *)(*plVar9 + 0x62 + (ulonglong)uVar4 * 0x78);
            if ((sVar3 != -1) &&
               ((uVar5 == 0xffffffff ||
                (sVar3 < *(short *)(*plVar9 + 0x62 + (longlong)(int)uVar5 * 0x78))))) {
              uVar5 = uVar4;
            }
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < *(int *)(param_1 + 0x6c));
      }
      uVar11 = uVar11 | 1L << ((longlong)(int)uVar5 & 0x3fU);
      *(short *)(*plVar9 + 0x62 + (longlong)(int)uVar5 * 0x78) = (short)iVar12;
      if (bVar2) {
        uVar4 = 0;
        iVar8 = 1;
        if (0 < *(int *)(param_1 + 0x6c)) {
          do {
            if (uVar4 != uVar5) {
              *(undefined2 *)(*plVar9 + 0x62 + (longlong)(int)uVar4 * 0x78) = 0xffff;
            }
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < *(int *)(param_1 + 0x6c));
        }
        break;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar8);
  }
  *(short *)(param_1 + 0x200) = (short)iVar8;
  return;
}



/* ===== 1804117e0 FUN_1804117e0 ===== */

void FUN_1804117e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  cVar1 = *(char *)(param_1 + 0x23d);
  if (cVar1 != '\0') {
    FUN_1804115e0();
    iVar7 = *(int *)(param_1 + 0x1e4);
    iVar10 = 0;
    if (1 < *(short *)(param_1 + 0x200)) {
      iVar10 = (int)*(short *)(param_1 + 0x200);
    }
    if (iVar7 < iVar10) {
      if (iVar7 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar7 / 2 + iVar7;
      }
      iVar9 = iVar10;
      if (iVar10 < iVar3) {
        iVar9 = iVar3;
      }
      if (iVar7 < iVar9) {
        uVar4 = _malloc_base((longlong)iVar9 * 0xc);
        lVar11 = DAT_180ca0a50;
        if (DAT_180ca0a50 != 0) {
          FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
        }
        if (*(longlong *)(param_1 + 0x1e8) != 0) {
          FUN_180540530(uVar4,*(longlong *)(param_1 + 0x1e8),
                        (longlong)*(int *)(param_1 + 0x1e0) * 0xc);
          lVar2 = *(longlong *)(param_1 + 0x1e8);
          if ((lVar2 != 0) && (lVar11 != 0)) {
            piVar8 = (int *)(lVar11 + 0x29c0 + (longlong)*(short *)(lVar11 + 0x29bc) * 8);
            if (*piVar8 != *(int *)(lVar11 + 4)) {
              iVar7 = *(short *)(lVar11 + 0x29bc) + 1;
              sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
              *(short *)(lVar11 + 0x29bc) = sVar6;
              piVar8 = (int *)(lVar11 + 0x29c0 + (longlong)sVar6 * 8);
              *piVar8 = *(int *)(lVar11 + 4);
              *(undefined4 *)(lVar11 + 0x29c4 + (longlong)sVar6 * 8) = 0;
            }
            *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
            *(int *)(lVar11 + 0x29b8) = *(int *)(lVar11 + 0x29b8) + 1;
          }
          thunk_FUN_1805277b0(lVar2);
        }
        *(undefined8 *)(param_1 + 0x1e8) = uVar4;
        *(int *)(param_1 + 0x1e4) = iVar9;
      }
    }
    *(int *)(param_1 + 0x1e0) = iVar10;
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    *(undefined1 *)(param_1 + 0x23d) = 0;
  }
  if (*(short *)(param_1 + 0x200) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + 0x1d0;
    if (*(short *)(param_1 + 0x200) != 1) {
      lVar11 = *(longlong *)(param_1 + 0x1e8);
    }
  }
  if (((cVar1 != '\0') && (lVar11 != 0)) && (iVar7 = 0, 0 < *(int *)(param_1 + 0x6c))) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar12 = (longlong)iVar7 * 0x78;
      sVar6 = *(short *)(lVar2 + 0x62 + lVar12);
      lVar5 = (longlong)sVar6;
      if (sVar6 != -1) {
        *(undefined4 *)(lVar11 + lVar5 * 0xc) = *(undefined4 *)(lVar2 + 0x38 + lVar12);
        *(short *)(lVar11 + 4 + lVar5 * 0xc) = (short)iVar7;
        *(undefined2 *)(lVar11 + 6 + lVar5 * 0xc) = *(undefined2 *)(lVar2 + 0x62 + lVar12);
        *(byte *)(lVar11 + 8 + lVar5 * 0xc) = *(byte *)(lVar2 + 0x74 + lVar12) & 3;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x6c));
  }
  *(int *)(param_1 + 0x1f8) = (int)*(short *)(param_1 + 0x200);
  *(longlong *)(param_1 + 0x1f0) = lVar11;
  return;
}



/* ===== 180411a10 FUN_180411a10 ===== */

void FUN_180411a10(uint param_1)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(DAT_180ca0a50 + 0x2360);
  if (param_1 == 0xffffffff) {
    param_1 = 0xffffffff;
    if (puVar1[0x1d] != 0xffffffff) {
      param_1 = puVar1[0x1d];
    }
  }
  if (param_1 == puVar1[0x1b]) {
    param_1 = 0xffffffff;
  }
  if ((puVar1[1] & 7) == 0) {
    return;
  }
  *(short *)((longlong)puVar1 + 0x226) = (short)param_1;
  *(short *)((longlong)puVar1 + 0x7a) = (short)puVar1[0x1e];
  *(undefined1 *)((longlong)puVar1 + 0x23f) = 1;
  pcVar2 = "##ContextMenu";
  bVar3 = 0x23;
  uVar4 = ~*puVar1;
  do {
    pcVar2 = pcVar2 + 1;
    if (((bVar3 == 0x23) && (*pcVar2 == 0x23)) && (pcVar2[1] == 0x23)) {
      pcVar2 = pcVar2 + 2;
      uVar4 = ~*puVar1;
    }
    else {
      uVar4 = uVar4 >> 8 ^
              *(uint *)(&DAT_1806c25c0 + ((ulonglong)uVar4 & 0xff ^ (ulonglong)bVar3) * 4);
    }
    bVar3 = *pcVar2;
  } while (bVar3 != 0);
  FUN_1803ed9b0(~uVar4,0);
  return;
}



/* ===== 180411ac0 FUN_180411ac0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180411ac0(char *param_1,char param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8;
  undefined4 local_resc;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  
  lVar8 = DAT_180ca0a50;
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  pcVar13 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar13 != '\0') {
      if (((*pcVar13 == '#') && (pcVar13[1] == '#')) ||
         (pcVar13 = pcVar13 + 1, pcVar13 == (char *)0xffffffffffffffff)) break;
    }
  }
  uVar12 = *(undefined4 *)(DAT_180ca0a50 + 0x1200);
  if (param_1 != pcVar13) {
    FUN_18040a2f0(&local_res8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),param_3,DAT_1808acd08,
                  DAT_1808acda0,param_1,pcVar13,pcVar13,0);
    uVar12 = local_resc;
  }
  lVar9 = DAT_180ca0a50;
  fVar17 = (float)(int)(*(float *)(lVar8 + 0x1200) * DAT_1808ac3c4);
  fVar18 = (float)FUN_180421ed0(lVar5 + 0x184,0);
  lVar6 = *(longlong *)(lVar9 + 0x14f8);
  if ((*(longlong *)(lVar6 + 0x1c8) != 0) || (lVar14 = 0x280, *(longlong *)(lVar9 + 0x2360) != 0)) {
    lVar14 = 0x250;
  }
  fVar1 = *(float *)(lVar5 + 0x118);
  fVar2 = *(float *)(lVar5 + 0x150);
  fVar3 = *(float *)(lVar5 + 0x11c);
  fVar19 = (*(float *)(lVar14 + lVar6) - *(float *)(lVar6 + 0x118)) - fVar18;
  iVar11 = FUN_1803e8900(lVar6,param_1);
  uVar16 = 0x1800020;
  if (*(int *)(lVar8 + 0x1578) == iVar11) {
    if (*(char *)(lVar8 + 0x158a) != '\0') {
      bVar7 = true;
      goto LAB_180411c8f;
    }
  }
  else {
    uVar16 = 0x1800000;
  }
  bVar7 = false;
LAB_180411c8f:
  FUN_1803e7920((byte)param_3 ^ 1);
  local_res8 = fVar18;
  local_resc = uVar12;
  cVar10 = FUN_1804201d0(param_1,0,uVar16,&local_res8,fVar17);
  if ((cVar10 == '\0') || (bVar7)) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  if (((*(uint *)(lVar8 + 0x1ef0) & 0x100) != 0) && (param_2 != '\0')) {
    fVar17 = 0.0;
    if (0.0 <= fVar19) {
      fVar17 = fVar19;
    }
    fVar18 = *(float *)(lVar8 + 0x1200);
    fVar19 = fVar18 * DAT_1808ac1b0;
    local_a8 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
    uStack_a4 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
    uStack_a0 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
    fStack_9c = *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar4 = *(ushort *)(lVar5 + 0x194);
    fVar20 = fVar18 * _DAT_1808ac2bc;
    fVar18 = fVar18 * _DAT_1808ac0dc * DAT_1808ac1f4;
    uVar12 = FUN_1803d7f30(&local_a8);
    FUN_18040b2f0(*(undefined8 *)(lVar5 + 0x2c8),
                  CONCAT44(fVar18 + fVar2 + fVar3,(float)uVar4 + fVar17 + fVar19 + fVar1),uVar12,
                  fVar20);
  }
  FUN_1803e79e0();
  return uVar15;
}



/* ===== 180411de0 FUN_180411de0 ===== */

void FUN_180411de0(longlong param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  longlong lVar13;
  char *pcVar14;
  char *pcVar15;
  byte bVar16;
  int iVar17;
  undefined1 uVar18;
  byte bVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  
  lVar7 = DAT_180ca0a50;
  if (*(char *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xd1) != '\0') {
    return;
  }
  sVar3 = *(short *)(param_1 + 0x226);
  bVar21 = false;
  if ((sVar3 < 0) || (iVar9 = (int)sVar3, *(int *)(param_1 + 0x6c) <= iVar9)) {
    iVar9 = -1;
  }
  else if (iVar9 != -1) {
    pbVar12 = (byte *)((longlong)sVar3 * 0x78 + *(longlong *)(param_1 + 0x18));
    goto LAB_180411e4f;
  }
  pbVar12 = (byte *)0x0;
LAB_180411e4f:
  if ((param_2 & 1) != 0) {
    if (pbVar12 != (byte *)0x0) {
      if (((*pbVar12 & 0x20) == 0) && (pbVar12[0x6a] != 0)) {
        uVar18 = 1;
      }
      else {
        uVar18 = 0;
      }
      pcVar15 = *(char **)(DAT_180ca0a50 + 0x2810);
      pcVar14 = "*Missing Text*";
      if (pcVar15 != (char *)0x0) {
        pcVar14 = pcVar15;
      }
      cVar8 = FUN_180422f00(pcVar14,pcVar15,0,0,uVar18);
      if (cVar8 != '\0') {
        lVar13 = (longlong)iVar9 * 0x78;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if (*(char *)(lVar13 + 0x6a + lVar6) != '\0') {
          pbVar12 = (byte *)(lVar13 + 0x73 + lVar6);
          *pbVar12 = *pbVar12 & 0xf;
          pbVar12 = (byte *)(lVar13 + 0x73 + lVar6);
          *pbVar12 = *pbVar12 | 0x10;
          *(short *)(param_1 + 0x210) = (short)iVar9;
        }
      }
    }
    cVar8 = FUN_180422f00();
    if ((cVar8 != '\0') && (iVar9 = 0, 0 < *(int *)(param_1 + 0x6c))) {
      do {
        lVar13 = (longlong)iVar9 * 0x78;
        lVar6 = *(longlong *)(param_1 + 0x18);
        if ((*(char *)(lVar6 + 0x6a + lVar13) != '\0') || ((*(byte *)(lVar6 + lVar13) & 8) != 0)) {
          *(undefined1 *)(lVar6 + 0x73 + lVar13) = 0x12;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x6c));
    }
    bVar21 = true;
  }
  if ((param_2 & 6) != 0) {
    pcVar15 = "*Missing Text*";
    if (*(char **)(DAT_180ca0a50 + 0x2828) != (char *)0x0) {
      pcVar15 = *(char **)(DAT_180ca0a50 + 0x2828);
    }
    cVar8 = FUN_1804222a0(pcVar15,0,1);
    if (cVar8 != '\0') {
      if ((param_2 & 2) != 0) {
        pcVar15 = *(char **)(DAT_180ca0a50 + 0x2830);
        pcVar14 = "*Missing Text*";
        if (pcVar15 != (char *)0x0) {
          pcVar14 = pcVar15;
        }
        cVar8 = FUN_180422f00(pcVar14,pcVar15,0,0,*(char *)(param_1 + 0x243) == '\0');
        if (cVar8 != '\0') {
          *(undefined1 *)(param_1 + 0x246) = 1;
        }
      }
      if ((param_2 & 4) != 0) {
        pcVar15 = *(char **)(DAT_180ca0a50 + 0x2838);
        pcVar14 = "*Missing Text*";
        if (pcVar15 != (char *)0x0) {
          pcVar14 = pcVar15;
        }
        cVar8 = FUN_180422f00(pcVar14,pcVar15,0,0,*(char *)(param_1 + 0x244) == '\0');
        if (cVar8 != '\0') {
          *(undefined1 *)(param_1 + 0x247) = 1;
        }
      }
      lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
      if ((*(uint *)(lVar6 + 0x14) & 0x14000000) == 0x14000000) {
        if ((((((*(short *)(lVar6 + 0xda) == *(short *)(lVar6 + 0xdc)) &&
               (*(int *)(DAT_180ca0a50 + 0x2118) == 0)) &&
              (*(char *)(DAT_180ca0a50 + 0x2109) != '\0')) &&
             ((*(int *)(DAT_180ca0a50 + 0x2158) == 0 && (*(int *)(DAT_180ca0a50 + 0x21c8) == 0))))
            && (*(longlong *)(DAT_180ca0a50 + 0x2068) != 0)) &&
           ((*(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x2068) + 0x3d8) == lVar6 &&
            (*(int *)(*(longlong *)(lVar6 + 0x3b0) + 0x1d4) == 1)))) {
          FUN_1803ee010(*(int *)(DAT_180ca0a50 + 0x2030) + -1,
                        CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
          lVar6 = DAT_180ca0a50;
          pcVar15 = (char *)(DAT_180ca0a50 + 0x20ca);
          *(undefined2 *)(DAT_180ca0a50 + 0x2108) = 0;
          *(bool *)(lVar6 + 0x20c9) = *pcVar15 != '\0';
        }
        FUN_1803ee480();
      }
      else {
        FUN_1803ebc00("Calling EndMenu() in wrong window!");
      }
    }
  }
  if ((param_2 & 4) != 0) {
    if ((bVar21) && (lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8), *(char *)(lVar6 + 0xd1) == '\0')
       ) {
      iVar9 = *(int *)(lVar6 + 0x1d4);
      iVar10 = 2 - (uint)(iVar9 != 0);
      if (*(longlong *)(lVar6 + 0x1c8) != 0) {
        bVar21 = iVar9 != 0;
        iVar9 = -iVar9;
        iVar10 = 6 - (uint)bVar21;
      }
      fVar23 = *(float *)(DAT_180ca0a50 + 0xd9c);
      if (*(float *)(DAT_180ca0a50 + 0xd9c) <= DAT_1808ac34c) {
        fVar23 = DAT_1808ac34c;
      }
      FUN_1804176f0(iVar10,fVar23,iVar9);
    }
    if ((((*(int *)(lVar7 + 0x1578) == 0) ||
         (*(longlong *)(lVar7 + 0x15a0) != *(longlong *)(lVar7 + 0x14f8))) ||
        (*(short *)(param_1 + 0x21a) == -1)) || (*(char *)(lVar7 + 0x158a) == '\0')) {
      iVar10 = *(int *)(param_1 + 0x6c) + -1;
      bVar21 = false;
      iVar9 = 0;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x6c) + -1;
      bVar21 = true;
      iVar9 = 0;
      if (iVar10 < 0) {
        iVar9 = iVar10;
      }
      sVar3 = *(short *)((longlong)*(short *)(param_1 + 0x21a) * 0x78 + 0x5a +
                        *(longlong *)(param_1 + 0x18));
      iVar10 = (int)sVar3;
      if (iVar10 != iVar9) {
        sVar4 = *(short *)(param_1 + 0x22c);
        iVar11 = (int)sVar4;
        if (0 < sVar4) {
          if (sVar3 < sVar4) {
            iVar20 = iVar11 + -1;
            if (iVar9 < iVar11 + -1) {
              iVar20 = iVar9;
            }
          }
          else {
            iVar20 = iVar11;
            if (iVar11 <= iVar9) {
              iVar20 = iVar9;
            }
          }
          iVar9 = iVar20;
        }
        iVar20 = -1;
        iVar11 = iVar10;
        if (iVar10 < iVar9) {
          iVar20 = 1;
        }
        while( true ) {
          if (((iVar9 <= iVar10) || (iVar9 < iVar11)) && ((iVar10 <= iVar9 || (iVar11 < iVar9))))
          goto LAB_18041221a;
          if ((*(byte *)(*(longlong *)(param_1 + 0x18) +
                        (longlong)*(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11 * 2) *
                        0x78) & 0x40) != 0) break;
          iVar11 = iVar11 + iVar20;
        }
        iVar9 = iVar11 - iVar20;
        if (iVar11 == iVar10) {
          iVar9 = iVar10;
        }
      }
LAB_18041221a:
      iVar10 = FUN_18040ca00(param_1,iVar10,*(int *)(param_1 + 0x6c) + -1);
    }
    lVar6 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1ea8) = *(uint *)(DAT_180ca0a50 + 0x1ea8) & 0xffffffef;
    iVar11 = *(int *)(lVar6 + 0x2004);
    uVar5 = *(undefined4 *)(lVar6 + 0x1ea8);
    if (*(int *)(lVar6 + 0x2000) == iVar11) {
      iVar20 = *(int *)(lVar6 + 0x2000) + 1;
      if (iVar11 == 0) {
        iVar11 = 8;
      }
      else {
        iVar11 = iVar11 / 2 + iVar11;
      }
      if (iVar20 < iVar11) {
        iVar20 = iVar11;
      }
      FUN_18007e1d0(lVar6 + 0x2000,iVar20);
    }
    *(undefined4 *)(*(longlong *)(lVar6 + 0x2008) + (longlong)*(int *)(lVar6 + 0x2000) * 4) = uVar5;
    iVar11 = 0;
    *(int *)(lVar6 + 0x2000) = *(int *)(lVar6 + 0x2000) + 1;
    fVar23 = DAT_1808ac1f4;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x18);
        sVar3 = *(short *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11 * 2);
        lVar13 = (longlong)sVar3 * 0x78;
        if ((*(uint *)(lVar6 + lVar13) & 1) == 0) {
          if ((*(char *)(param_1 + 0x239) == '\0') && (*(short *)(param_1 + 0x206) <= sVar3)) {
            pcVar15 = "";
LAB_18041233e:
            if (*pcVar15 == '\0') goto LAB_180412343;
          }
          else {
            sVar4 = *(short *)(lVar6 + 0x58 + lVar13);
            if (sVar4 == -1) {
              pcVar15 = "";
              goto LAB_18041233e;
            }
            pcVar15 = (char *)((longlong)sVar4 + *(longlong *)(param_1 + 0x198));
            if (pcVar15 != (char *)0x0) goto LAB_18041233e;
LAB_180412343:
            pcVar15 = "<Unknown>";
          }
          cVar8 = *(char *)(lVar6 + 0x6b + lVar13);
          bVar16 = ~(byte)(*(uint *)(lVar6 + lVar13) >> 7) & 1;
          if (cVar8 == '\0') {
            bVar19 = bVar16;
          }
          else {
            bVar19 = 0;
            if (1 < *(short *)(param_1 + 0x202)) {
              bVar19 = bVar16;
            }
          }
          if ((bVar21) &&
             ((iVar20 = (int)*(short *)(lVar6 + 0x5a + lVar13), iVar20 < iVar9 || (iVar10 < iVar20))
             )) {
            bVar19 = 0;
          }
          cVar8 = FUN_180411ac0(pcVar15,cVar8,bVar19);
          if (cVar8 != '\0') {
            *(bool *)(lVar6 + 0x6c + lVar13) = *(char *)(lVar6 + 0x6b + lVar13) == '\0';
          }
          if ((((*(int *)(DAT_180ca0a50 + 0x1578) != 0) &&
               (*(int *)(DAT_180ca0a50 + 0x1578) == *(int *)(DAT_180ca0a50 + 0x1ee8))) &&
              (*(char *)(DAT_180ca0a50 + 0x118) != '\0')) &&
             (((*(float *)(DAT_180ca0a50 + 0xa0) * *(float *)(DAT_180ca0a50 + 0xa0) <=
                *(float *)(DAT_180ca0a50 + 0xbc4) && (*(int *)(lVar7 + 0x159c) == 1)) &&
              ((*(byte *)(param_1 + 4) & 2) != 0)))) {
            *(undefined1 *)(lVar7 + 0x158a) = 1;
            *(short *)(param_1 + 0x21a) = sVar3;
            cVar8 = FUN_1803dd930(0);
            if (cVar8 == '\0') {
              fVar1 = *(float *)(lVar7 + 0x1ef8);
              fVar2 = *(float *)(lVar7 + 0x1f00);
              fVar22 = *(float *)(lVar7 + 0x114);
              iVar20 = 1;
              if (fVar22 < (fVar1 + fVar2) * fVar23) {
                iVar20 = -1;
              }
              if (iVar20 < 0) {
                fVar22 = fVar1 - fVar22;
              }
              else {
                fVar22 = fVar22 - fVar2;
              }
              FUN_18053ef70(fVar22 / (fVar2 - fVar1));
              iVar17 = (int)*(short *)(*(longlong *)(param_1 + 0x18) + 0x5a + lVar13);
              *(short *)(param_1 + 0x21a) = sVar3;
              *(undefined2 *)(param_1 + 0x21c) = 0xffff;
              iVar20 = FUN_18040ca00(param_1,iVar17);
              if ((*(char *)(param_1 + 0x239) == '\0') || (iVar20 != iVar17)) {
                *(short *)(param_1 + 0x21c) = (short)iVar20;
              }
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x6c));
    }
    lVar7 = DAT_180ca0a50;
    iVar9 = *(int *)(DAT_180ca0a50 + 0x2000);
    if (iVar9 < 2) {
      FUN_1803ebc00("Calling PopItemFlag() too many times!");
    }
    else {
      *(int *)(DAT_180ca0a50 + 0x2000) = iVar9 + -1;
      *(undefined4 *)(lVar7 + 0x1ea8) =
           *(undefined4 *)(*(longlong *)(lVar7 + 0x2008) + (longlong)(iVar9 + -2) * 4);
    }
  }
  return;
}



/* ===== 180412560 FUN_180412560 ===== */

void FUN_180412560(undefined8 *param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  puVar2 = (undefined8 *)((longlong)param_1 + 0x14);
  iVar1 = 0;
  if (3 < param_4) {
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)puVar2 + 0xc) = 0xffff;
        *(byte *)((longlong)puVar2 + 0xe) = *(byte *)((longlong)puVar2 + 0xe) & 0xcc | 0xc;
      }
      if (puVar2 + 2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 2) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 3) = 0xffffffff;
        *(undefined2 *)((longlong)puVar2 + 0x1c) = 0xffff;
        *(byte *)((longlong)puVar2 + 0x1e) = *(byte *)((longlong)puVar2 + 0x1e) & 0xcc | 0xc;
      }
      if (puVar2 + 4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 4) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
        *(undefined4 *)(puVar2 + 5) = 0xffffffff;
        *(undefined2 *)((longlong)puVar2 + 0x2c) = 0xffff;
        *(byte *)((longlong)puVar2 + 0x2e) = *(byte *)((longlong)puVar2 + 0x2e) & 0xcc | 0xc;
      }
      if (puVar2 + 6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar2 + 6) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
        *(undefined4 *)(puVar2 + 7) = 0xffffffff;
        *(undefined2 *)((longlong)puVar2 + 0x3c) = 0xffff;
        *(byte *)((longlong)puVar2 + 0x3e) = *(byte *)((longlong)puVar2 + 0x3e) & 0xcc | 0xc;
      }
      puVar2 = puVar2 + 8;
      iVar1 = iVar1 + 4;
    } while (iVar1 < param_4 + -3);
  }
  for (; iVar1 < param_4; iVar1 = iVar1 + 1) {
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar2 + 0xc) = 0xffff;
      *(byte *)((longlong)puVar2 + 0xe) = *(byte *)((longlong)puVar2 + 0xe) & 0xcc | 0xc;
    }
    puVar2 = puVar2 + 2;
  }
  *(byte *)((longlong)param_1 + 0x12) = *(byte *)((longlong)param_1 + 0x12) | 1;
  *(undefined4 *)param_1 = param_2;
  *(undefined2 *)((longlong)param_1 + 0xc) = param_3;
  *(short *)((longlong)param_1 + 0xe) = (short)param_4;
  return;
}



/* ===== 1804126a0 FUN_1804126a0 ===== */

int * FUN_1804126a0(int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar2 = DAT_180ca0a50;
  piVar1 = (int *)(*(longlong *)(DAT_180ca0a50 + 0x27e0) + 4);
  piVar4 = (int *)0x0;
  if (*(longlong *)(DAT_180ca0a50 + 0x27e0) != 0) {
    piVar4 = piVar1;
  }
  do {
    if (piVar4 == (int *)0x0) {
LAB_180412725:
      iVar5 = *(int *)(lVar2 + 0x27dc);
      iVar7 = param_2 * 0x10 + 0x18;
      lVar9 = (longlong)*(int *)(lVar2 + 0x27d8);
      iVar8 = iVar7 + *(int *)(lVar2 + 0x27d8);
      if (iVar5 < iVar8) {
        if (iVar5 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar5 / 2 + iVar5;
        }
        iVar3 = iVar8;
        if (iVar8 < iVar5) {
          iVar3 = iVar5;
        }
        FUN_1803f6920(lVar2 + 0x27d8,iVar3);
      }
      *(int *)(lVar2 + 0x27d8) = iVar8;
      *(int *)(lVar9 + *(longlong *)(lVar2 + 0x27e0)) = iVar7;
      lVar2 = *(longlong *)(lVar2 + 0x27e0);
      FUN_180412560(lVar2 + 4 + lVar9,param_1,param_2,param_2);
      return (int *)(lVar9 + 4 + lVar2);
    }
    if (*piVar4 == param_1) {
      if (param_2 <= *(short *)((longlong)piVar4 + 0xe)) {
        FUN_180412560(piVar4,param_1,param_2);
        return piVar4;
      }
      *piVar4 = 0;
      goto LAB_180412725;
    }
    piVar6 = (int *)((longlong)piVar4[-1] + (longlong)piVar4);
    piVar4 = (int *)0x0;
    if (piVar6 != (int *)((longlong)*(int *)(DAT_180ca0a50 + 0x27d8) + (longlong)piVar1)) {
      piVar4 = piVar6;
    }
  } while( true );
}



/* ===== 1804127d0 FUN_1804127d0 ===== */

void FUN_1804127d0(undefined4 *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  float *pfVar13;
  undefined4 uVar14;
  
  *(undefined1 *)((longlong)param_1 + 0x242) = 0;
  lVar5 = DAT_180ca0a50;
  if ((*(byte *)(param_1 + 1) & 0x10) != 0) {
    return;
  }
  if ((param_1[0x19] == -1) ||
     (puVar10 = (undefined4 *)(*(longlong *)(DAT_180ca0a50 + 0x27e0) + (longlong)(int)param_1[0x19])
     , puVar10 == (undefined4 *)0x0)) {
    iVar12 = param_1[0x1b];
  }
  else {
    iVar12 = param_1[0x1b];
    if (*(short *)((longlong)puVar10 + 0xe) < iVar12) {
      *puVar10 = 0;
      puVar10 = (undefined4 *)0x0;
      iVar12 = param_1[0x1b];
    }
    lVar8 = lVar5;
    if (puVar10 != (undefined4 *)0x0) goto LAB_18041286d;
  }
  puVar10 = (undefined4 *)FUN_1804126a0(*param_1,iVar12);
  lVar8 = DAT_180ca0a50;
  param_1[0x19] = (int)puVar10 - *(int *)(lVar5 + 0x27e0);
LAB_18041286d:
  piVar9 = param_1 + 0x1b;
  pfVar13 = (float *)(puVar10 + 5);
  *(short *)(puVar10 + 3) = (short)*piVar9;
  bVar3 = false;
  bVar2 = false;
  iVar12 = 0;
  *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(lVar5 + 0x27a0);
  puVar11 = *(uint **)(param_1 + 6);
  puVar10[1] = 0;
  if (*piVar9 < 1) {
    uVar7 = 0;
  }
  else {
    do {
      lVar5 = 0x1c;
      if ((*puVar11 & 8) == 0) {
        lVar5 = 0x10;
      }
      fVar1 = *(float *)((longlong)puVar11 + lVar5);
      pfVar13[1] = (float)puVar11[0xd];
      *pfVar13 = fVar1;
      *(short *)(pfVar13 + 2) = (short)iVar12;
      *(undefined2 *)((longlong)pfVar13 + 10) = *(undefined2 *)((longlong)puVar11 + 0x5a);
      *(undefined2 *)(pfVar13 + 3) = *(undefined2 *)((longlong)puVar11 + 0x62);
      bVar6 = (*(byte *)((longlong)pfVar13 + 0xe) ^ (byte)puVar11[0x1d]) & 3 ^
              *(byte *)((longlong)pfVar13 + 0xe);
      *(byte *)((longlong)pfVar13 + 0xe) = bVar6;
      bVar4 = *(byte *)((longlong)puVar11 + 0x6b) << 2;
      bVar4 = (bVar4 ^ bVar6) & 0xf3 ^ bVar4;
      *(byte *)((longlong)pfVar13 + 0xe) = bVar4;
      *(byte *)((longlong)pfVar13 + 0xe) = (bVar4 ^ (char)(*puVar11 >> 3) << 4) & 0x10 ^ bVar4;
      bVar2 = bVar3;
      if ((*puVar11 & 8) == 0) {
        bVar2 = true;
      }
      if (fVar1 != (float)puVar11[8]) {
        puVar10[1] = puVar10[1] | 1;
      }
      if (*(short *)((longlong)puVar11 + 0x5a) != iVar12) {
        puVar10[1] = puVar10[1] | 2;
      }
      if (*(short *)((longlong)puVar11 + 0x62) != -1) {
        puVar10[1] = puVar10[1] | 8;
      }
      if (*(byte *)((longlong)puVar11 + 0x6b) != (~(byte)(*puVar11 >> 1) & 1)) {
        puVar10[1] = puVar10[1] | 4;
      }
      iVar12 = iVar12 + 1;
      puVar11 = puVar11 + 0x1e;
      pfVar13 = pfVar13 + 4;
      bVar3 = bVar2;
    } while (iVar12 < *piVar9);
    uVar7 = puVar10[1];
  }
  if ((*(byte *)(param_1 + 1) & 8) != 0) {
    uVar7 = uVar7 | 10;
    puVar10[1] = uVar7;
  }
  puVar10[1] = param_1[1] & uVar7;
  if (bVar2) {
    uVar14 = param_1[0x39];
  }
  else {
    uVar14 = 0;
  }
  puVar10[2] = uVar14;
  if (*(float *)(lVar8 + 0x27a4) <= 0.0) {
    *(undefined4 *)(lVar8 + 0x27a4) = *(undefined4 *)(lVar8 + 0x44);
  }
  return;
}



/* ===== 180412a00 FUN_180412a00 ===== */

void FUN_180412a00(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar10 = *(longlong *)(param_1 + 0x20);
  for (lVar2 = *(longlong *)(param_1 + 0x18); lVar2 != lVar10; lVar2 = lVar2 + 0x78) {
    *(byte *)(lVar2 + 0x71) = *(byte *)(lVar2 + 0x71) & 0xfb;
  }
  if ((*(int *)(param_1 + 100) != -1) &&
     (lVar10 = *(longlong *)(DAT_180ca0a50 + 0x27e0) + (longlong)*(int *)(param_1 + 100),
     lVar10 != 0)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        if (*(short *)(lVar10 + 0xc) <= iVar7) break;
        lVar6 = (longlong)iVar7 * 0x10;
        lVar2 = (longlong)iVar7 * 0x78 + *(longlong *)(param_1 + 0x18);
        if (*(int *)(lVar10 + 0x18 + lVar6) != *(int *)(lVar2 + 0x34)) break;
        FUN_180412bd0(lVar2,lVar6 + 0x14 + lVar10,*(undefined4 *)(lVar10 + 4));
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x6c));
    }
    if (iVar7 != *(short *)(lVar10 + 0xc)) {
      iVar5 = iVar7;
      if (iVar7 < *(short *)(lVar10 + 0xc)) {
        do {
          iVar4 = iVar5 + 1;
          pbVar1 = (byte *)(lVar10 + 0x22 + (longlong)iVar5 * 0x10);
          *pbVar1 = *pbVar1 & 0xdf;
          iVar5 = iVar4;
        } while (iVar4 < *(short *)(lVar10 + 0xc));
      }
      lVar2 = *(longlong *)(param_1 + 0x20);
      for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar2; lVar6 = lVar6 + 0x78) {
        if ((*(int *)(lVar6 + 0x34) != 0) && ((*(byte *)(lVar6 + 0x71) & 4) == 0)) {
          for (iVar5 = iVar7; iVar5 < *(short *)(lVar10 + 0xc); iVar5 = iVar5 + 1) {
            lVar3 = (longlong)iVar5 * 0x10;
            if ((*(int *)(lVar10 + 0x18 + lVar3) == *(int *)(lVar6 + 0x34)) &&
               ((*(byte *)(lVar10 + 0x22 + lVar3) & 0x20) == 0)) {
              FUN_180412bd0(lVar6,lVar10 + 0x14 + lVar3,*(undefined4 *)(lVar10 + 4));
              break;
            }
          }
        }
      }
      if (iVar7 < *(short *)(lVar10 + 0xc)) {
        uVar9 = 0;
        do {
          if ((*(byte *)(lVar10 + 0x22 + (longlong)iVar7 * 0x10) & 0x20) == 0) {
            if (*(int *)(param_1 + 0x6c) <= (int)uVar9) {
              return;
            }
            while( true ) {
              lVar2 = (longlong)(int)uVar9 * 0x78 + *(longlong *)(param_1 + 0x18);
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
              if ((*(byte *)(lVar2 + 0x71) & 4) == 0) break;
              if (*(int *)(param_1 + 0x6c) <= (int)uVar8) {
                return;
              }
            }
            FUN_180412bd0(lVar2,lVar10 + 0x14 + (longlong)iVar7 * 0x10,*(undefined4 *)(lVar10 + 4));
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(short *)(lVar10 + 0xc));
      }
    }
  }
  return;
}



/* ===== 180412bd0 FUN_180412bd0 ===== */

void FUN_180412bd0(longlong param_1,undefined4 *param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  *(byte *)(param_1 + 0x71) = *(byte *)(param_1 + 0x71) | 4;
  bVar1 = *(byte *)((longlong)param_2 + 0xe);
  *(byte *)((longlong)param_2 + 0xe) = bVar1 | 0x20;
  if ((param_3 & 1) != 0) {
    if ((bVar1 & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = *param_2;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = *param_2;
    }
    *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) & 0xf0;
  }
  lVar3 = 10;
  if ((param_3 & 2) == 0) {
    lVar3 = 8;
  }
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(lVar3 + (longlong)param_2);
  if (((param_3 & 4) != 0) &&
     (cVar2 = (char)(*(char *)((longlong)param_2 + 0xe) << 4) >> 6, cVar2 != -1)) {
    *(bool *)(param_1 + 0x6c) = cVar2 == '\x01';
    *(bool *)(param_1 + 0x6b) = cVar2 == '\x01';
  }
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_2 + 3);
  *(byte *)(param_1 + 0x74) =
       (*(byte *)(param_1 + 0x74) ^ *(byte *)((longlong)param_2 + 0xe)) & 3 ^
       *(byte *)(param_1 + 0x74);
  return;
}



/* ===== 180412cc0 FUN_180412cc0 ===== */

void FUN_180412cc0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = DAT_180ca0a50;
  FUN_1803f6920();
  uVar2 = *(uint *)(param_1 + 0x6c);
  iVar4 = 0;
  lVar1 = *(longlong *)(lVar1 + 0x2b00);
  if (0 < (int)uVar2) {
    do {
      lVar3 = (longlong)iVar4;
      *(short *)(lVar1 + lVar3 * 0x10) = (short)iVar4;
      iVar4 = iVar4 + 1;
      *(longlong *)(lVar1 + 8 + lVar3 * 0x10) = param_1;
      uVar2 = *(uint *)(param_1 + 0x6c);
    } while (iVar4 < (int)uVar2);
  }
  if (1 < uVar2) {
    FUN_180519150(lVar1,(longlong)(int)uVar2,0x10,&LAB_180412c70);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    do {
      *(short *)(*(longlong *)(param_1 + 0x18) + 0x5a +
                (longlong)*(short *)(lVar1 + (longlong)iVar4 * 0x10) * 0x78) = (short)iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x6c));
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      do {
        *(short *)(*(longlong *)(param_1 + 0x28) +
                  (longlong)
                  *(short *)(*(longlong *)(param_1 + 0x18) + 0x5a + (longlong)iVar4 * 0x78) * 2) =
             (short)iVar4;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x6c));
    }
  }
  return;
}



/* ===== 180412e00 FUN_180412e00 ===== */

void FUN_180412e00(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x2390) != 0) {
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x2398) + 8 + (longlong)iVar5 * 0x10);
      if ((iVar2 != -1) &&
         (lVar6 = (longlong)iVar2 * 0x250 + *(longlong *)(param_1 + 0x2388), lVar6 != 0)) {
        *(undefined4 *)(lVar6 + 100) = 0xffffffff;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != *(int *)(param_1 + 0x2390));
  }
  puVar4 = (undefined4 *)0x0;
  if (*(longlong *)(param_1 + 0x27e0) != 0) {
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x27e0) + 4);
  }
  do {
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(ushort *)(puVar4 + 4);
    if ((((uVar1 & 0x7f) == 0) || ((uVar1 & 0x780) == 0)) || (uVar1 < 0x800)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (*(int *)(param_3 + 0xc) == 0) {
LAB_180412f1a:
      if ((*(char *)(param_3 + 8) == '\0') || (bVar3)) {
        if ((*(char *)(param_3 + 10) != '\0') || ((*(char *)(param_3 + 0xb) != '\0' && (!bVar3)))) {
          *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(param_1 + 0x27a0);
        }
      }
      else {
        *puVar4 = 0;
      }
    }
    else {
      if ((((uVar1 & 0x7f) == 0) || ((uVar1 >> 7 & 0xf) == 0)) || (uVar1 >> 0xb == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = (uVar1 >> 0xb) + 20000000 + ((uVar1 >> 7 & 0xf) + (uVar1 & 0x7f) * 100) * 100;
      }
      if (*(int *)(param_3 + 0xc) <= iVar5) goto LAB_180412f1a;
      *puVar4 = 0;
    }
    puVar7 = (undefined4 *)((longlong)(int)puVar4[-1] + (longlong)puVar4);
    puVar4 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)
                  (*(longlong *)(param_1 + 0x27e0) + 4 + (longlong)*(int *)(param_1 + 0x27d8))) {
      puVar4 = puVar7;
    }
  } while( true );
}



/* ===== 180412ff0 FUN_180412ff0 ===== */

undefined8 FUN_180412ff0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_res20 [2];
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  local_res20[0] = 0;
  iVar1 = sscanf(param_3,"0x%08X,%d",local_18,local_res20);
  if ((iVar1 < 2) || (0x1fe < local_res20[0] - 1U)) {
    return 0;
  }
  uVar2 = FUN_1804126a0(local_18[0]);
  return uVar2;
}



/* ===== 180413050 FUN_180413050 ===== */

void FUN_180413050(undefined8 param_1,undefined8 param_2,longlong param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  uchar local_res18 [16];
  int *param4;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  local_28 = 0;
  local_24 = 0;
  iVar2 = sscanf(param_4,"RefScale=%f",(double *)&local_20);
  if (iVar2 == 1) {
    *(undefined4 *)(param_3 + 8) = local_20;
    return;
  }
  iVar2 = sscanf(param_4,"LastUsed=%d",&local_24);
  if (iVar2 == 1) {
    sVar4 = (short)(local_24 / 100);
    sVar3 = (short)(local_24 / 10000);
    *(ushort *)(param_3 + 0x10) =
         ((short)local_24 + sVar4 * -4) * 0x800 | sVar3 + 0x30U & 0x7f |
         (sVar4 + sVar3 * -100 & 0xfU) << 7;
    return;
  }
  iVar2 = sscanf(param_4,"Column %d%n",&local_1c,&local_28);
  if (((iVar2 == 1) && (-1 < local_1c)) && (local_1c < *(short *)(param_3 + 0xc))) {
    for (param_4 = param_4 + local_28; (*param_4 == ' ' || (*param_4 == '\t'));
        param_4 = param_4 + 1) {
    }
    local_res18[0] = '\0';
    lVar5 = (longlong)local_1c * 0x10;
    *(short *)(lVar5 + 0x1c + param_3) = (short)local_1c;
    iVar2 = sscanf(param_4,"UserID=0x%08X%n",&local_24,&local_28);
    if (iVar2 == 1) {
      for (param_4 = param_4 + local_28; (*param_4 == ' ' || (*param_4 == '\t'));
          param_4 = param_4 + 1) {
      }
    }
    iVar2 = sscanf(param_4,"Width=%d%n",&local_24,&local_28);
    if (iVar2 == 1) {
      for (param_4 = param_4 + local_28; (*param_4 == ' ' || (*param_4 == '\t'));
          param_4 = param_4 + 1) {
      }
      pbVar1 = (byte *)(lVar5 + 0x22 + param_3);
      *pbVar1 = *pbVar1 & 0xef;
      *(float *)(lVar5 + 0x14 + param_3) = (float)local_24;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
    }
    iVar2 = sscanf(param_4,"Weight=%f%n",(double *)&local_20,&local_28);
    if (iVar2 == 1) {
      for (param_4 = param_4 + local_28; (*param_4 == ' ' || (*param_4 == '\t'));
          param_4 = param_4 + 1) {
      }
      pbVar1 = (byte *)(lVar5 + 0x22 + param_3);
      *pbVar1 = *pbVar1 | 0x10;
      *(undefined4 *)(lVar5 + 0x14 + param_3) = local_20;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
    }
    iVar2 = sscanf(param_4,"Visible=%d%n",&local_24,&local_28);
    if (iVar2 == 1) {
      for (param_4 = param_4 + local_28; (*param_4 == ' ' || (*param_4 == '\t'));
          param_4 = param_4 + 1) {
      }
      *(byte *)(lVar5 + 0x22 + param_3) =
           ((byte)local_24 & 3) << 2 | *(byte *)(lVar5 + 0x22 + param_3) & 0xf3;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 4;
    }
    iVar2 = sscanf(param_4,"Order=%d%n",&local_24,&local_28);
    if (iVar2 == 1) {
      for (param_4 = param_4 + local_28; (*param_4 == ' ' || (*param_4 == '\t'));
          param_4 = param_4 + 1) {
      }
      *(undefined2 *)(lVar5 + 0x1e + param_3) = (undefined2)local_24;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 2;
    }
    param4 = &local_28;
    iVar2 = sscanf(param_4,"Sort=%d%c%n",&local_24,local_res18,param4);
    if (iVar2 == 2) {
      for (param_4 = param_4 + local_28; (*param_4 == ' ' || (*param_4 == '\t'));
          param_4 = param_4 + 1) {
      }
      *(undefined2 *)(lVar5 + 0x20 + param_3) = (undefined2)local_24;
      *(byte *)(lVar5 + 0x22 + param_3) =
           (local_res18[0] == '^') + 1U | *(byte *)(lVar5 + 0x22 + param_3) & 0xfc;
      *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 8;
    }
    iVar2 = sscanf(param_4,"ID=0x%08X%n",&local_24,&local_28,param4);
    if (iVar2 == 1) {
      *(int *)(lVar5 + 0x18 + param_3) = local_24;
    }
  }
  return;
}



/* ===== 1804133a0 FUN_1804133a0 ===== */

void FUN_1804133a0(longlong param_1,undefined8 *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  
  piVar4 = (int *)0x0;
  if (*(longlong *)(param_1 + 0x27e0) != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x27e0) + 4);
  }
  while (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
      uVar2 = piVar4[1];
      iVar7 = (short)piVar4[3] * 0x32;
      iVar11 = *param_3 + -1 + iVar7;
      if (*param_3 == 0) {
        iVar11 = iVar7;
      }
      FUN_1803f6920(param_3,iVar11 + 0x1e);
      FUN_1803d85d0(param_3,"[%s][0x%08X,%d]\n",*param_2,*piVar4,(int)(short)piVar4[3]);
      if ((float)piVar4[2] != 0.0) {
        FUN_1803d85d0(param_3,"RefScale=%g\n",(double)(float)piVar4[2]);
      }
      iVar11 = 0;
      pfVar8 = (float *)(piVar4 + 5);
      if (0 < (short)piVar4[3]) {
        do {
          if (((uVar2 & 1) != 0 || ((uVar2 & 4) != 0 || (uVar2 & 2) != 0)) ||
             (((uVar2 & 8) != 0 && (*(short *)(pfVar8 + 3) != -1)))) {
            FUN_1803d85d0(param_3,"Column %-2d",iVar11);
            if (((uVar2 & 1) != 0) &&
               (((*(byte *)((longlong)pfVar8 + 0xe) & 0x10) == 0 ||
                (FUN_1803d85d0(param_3," Weight=%.4f",(double)*pfVar8),
                (*(byte *)((longlong)pfVar8 + 0xe) & 0x10) == 0)))) {
              FUN_1803d85d0(param_3," Width=%d",(int)*pfVar8);
            }
            if ((uVar2 & 4) != 0) {
              FUN_1803d85d0(param_3," Visible=%d",
                            (int)(char)(*(char *)((longlong)pfVar8 + 0xe) << 4) >> 6);
            }
            if ((uVar2 & 2) != 0) {
              FUN_1803d85d0(param_3," Order=%d",(int)*(short *)((longlong)pfVar8 + 10));
            }
            if (((uVar2 & 8) != 0) && (*(short *)(pfVar8 + 3) != -1)) {
              uVar10 = 0x5e;
              if ((*(byte *)((longlong)pfVar8 + 0xe) & 3) == 1) {
                uVar10 = 0x76;
              }
              FUN_1803d85d0(param_3," Sort=%d%c",(int)*(short *)(pfVar8 + 3),uVar10);
            }
            if (pfVar8[1] != 0.0) {
              FUN_1803d85d0(param_3," ID=0x%08X");
            }
            iVar7 = 1;
            if (*param_3 != 0) {
              iVar7 = *param_3;
            }
            iVar6 = iVar7 + 1;
            if (param_3[1] <= iVar6) {
              iVar5 = param_3[1] * 2;
              if (iVar5 < iVar6) {
                iVar5 = iVar6;
              }
              FUN_1803f6920(param_3,iVar5);
            }
            iVar5 = param_3[1];
            if (iVar5 < iVar6) {
              if (iVar5 == 0) {
                iVar5 = 8;
              }
              else {
                iVar5 = iVar5 / 2 + iVar5;
              }
              iVar3 = iVar6;
              if (iVar6 < iVar5) {
                iVar3 = iVar5;
              }
              FUN_1803f6920(param_3,iVar3);
            }
            *param_3 = iVar6;
            *(undefined1 *)(*(longlong *)(param_3 + 2) + -1 + (longlong)iVar7) = 10;
            *(undefined1 *)((longlong)iVar7 + *(longlong *)(param_3 + 2)) = 0;
          }
          iVar11 = iVar11 + 1;
          pfVar8 = pfVar8 + 4;
        } while (iVar11 < (short)piVar4[3]);
      }
      if (((*(char *)(param_1 + 0x85) != '\0') &&
          (uVar1 = *(ushort *)(piVar4 + 4), (uVar1 & 0x7f) != 0 && (uVar1 & 0x780) != 0)) &&
         (0x7ff < uVar1)) {
        FUN_1803d85d0(param_3,"LastUsed=%08d\n",
                      (uVar1 >> 0xb) + 20000000 + ((uVar1 >> 7 & 0xf) + (uVar1 & 0x7f) * 100) * 100)
        ;
      }
      iVar11 = 1;
      if (*param_3 != 0) {
        iVar11 = *param_3;
      }
      iVar7 = iVar11 + 1;
      if (param_3[1] <= iVar7) {
        iVar6 = param_3[1] * 2;
        if (iVar6 < iVar7) {
          iVar6 = iVar7;
        }
        FUN_1803f6920(param_3,iVar6);
      }
      iVar6 = param_3[1];
      if (iVar6 < iVar7) {
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        iVar5 = iVar7;
        if (iVar7 < iVar6) {
          iVar5 = iVar6;
        }
        FUN_1803f6920(param_3,iVar5);
      }
      *param_3 = iVar7;
      *(undefined1 *)(*(longlong *)(param_3 + 2) + -1 + (longlong)iVar11) = 10;
      *(undefined1 *)((longlong)iVar11 + *(longlong *)(param_3 + 2)) = 0;
    }
    piVar9 = (int *)((longlong)piVar4[-1] + (longlong)piVar4);
    piVar4 = (int *)0x0;
    if (piVar9 != (int *)(*(longlong *)(param_1 + 0x27e0) + 4 + (longlong)*(int *)(param_1 + 0x27d8)
                         )) {
      piVar4 = piVar9;
    }
  }
  return;
}



/* ===== 180413770 FUN_180413770 ===== */

void FUN_180413770(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 local_58;
  longlong local_50;
  
  lVar2 = DAT_180ca0a50;
  iVar8 = 0;
  lVar9 = *(longlong *)(DAT_180ca0a50 + 0x27e0);
  piVar7 = (int *)0x0;
  if (lVar9 != 0) {
    piVar7 = (int *)(lVar9 + 4);
  }
  if (piVar7 != (int *)0x0) {
    do {
      if (*piVar7 != 0) {
        iVar8 = iVar8 + 0x14 + (short)piVar7[3] * 0x10;
      }
      piVar6 = (int *)((longlong)piVar7[-1] + (longlong)piVar7);
      piVar7 = (int *)0x0;
      if (piVar6 != (int *)((longlong)*(int *)(DAT_180ca0a50 + 0x27d8) + 4 + lVar9)) {
        piVar7 = piVar6;
      }
    } while (piVar7 != (int *)0x0);
  }
  if (iVar8 != *(int *)(DAT_180ca0a50 + 0x27d8)) {
    local_58 = 0;
    iVar10 = 0;
    local_50 = 0;
    lVar9 = DAT_180ca0a50;
    iVar3 = 0;
    if (0 < iVar8) {
      lVar4 = _malloc_base((longlong)iVar8);
      lVar9 = DAT_180ca0a50;
      if (DAT_180ca0a50 != 0) {
        FUN_1803ddee0(DAT_180ca0a50 + 0x29b4);
      }
      local_58 = CONCAT44(iVar8,(undefined4)local_58);
      iVar3 = iVar8;
      local_50 = lVar4;
    }
    piVar7 = (int *)0x0;
    if (*(longlong *)(lVar2 + 0x27e0) != 0) {
      piVar7 = (int *)(*(longlong *)(lVar2 + 0x27e0) + 4);
    }
    lVar4 = local_50;
    if (piVar7 != (int *)0x0) {
      do {
        if (*piVar7 != 0) {
          lVar11 = (longlong)(short)piVar7[3] * 0x10;
          lVar9 = (longlong)iVar10;
          iVar8 = (int)lVar11 + 0x18;
          iVar10 = iVar8 + iVar10;
          if (iVar3 < iVar10) {
            if (iVar3 == 0) {
              iVar3 = 8;
            }
            else {
              iVar3 = iVar3 / 2 + iVar3;
            }
            iVar1 = iVar10;
            if (iVar10 < iVar3) {
              iVar1 = iVar3;
            }
            FUN_1803f6920(&local_58,iVar1);
            lVar4 = local_50;
            iVar3 = local_58._4_4_;
          }
          local_58 = CONCAT44(local_58._4_4_,iVar10);
          *(int *)(lVar9 + lVar4) = iVar8;
          FUN_180540530(lVar9 + 4 + lVar4,piVar7,lVar11 + 0x14);
        }
        piVar6 = (int *)((longlong)piVar7[-1] + (longlong)piVar7);
        piVar7 = (int *)0x0;
        if (piVar6 != (int *)(*(longlong *)(lVar2 + 0x27e0) + 4 + (longlong)*(int *)(lVar2 + 0x27d8)
                             )) {
          piVar7 = piVar6;
        }
      } while (piVar7 != (int *)0x0);
      lVar9 = DAT_180ca0a50;
    }
    *(int *)(lVar2 + 0x27d8) = iVar10;
    *(int *)(lVar2 + 0x27dc) = iVar3;
    lVar11 = *(longlong *)(lVar2 + 0x27e0);
    *(longlong *)(lVar2 + 0x27e0) = lVar4;
    iVar8 = 0;
    if (0 < *(int *)(lVar2 + 0x2390)) {
      do {
        iVar3 = *(int *)(*(longlong *)(lVar2 + 0x2398) + 8 + (longlong)iVar8 * 0x10);
        if ((iVar3 != -1) &&
           (lVar4 = (longlong)iVar3 * 0x250 + *(longlong *)(lVar2 + 0x2388), lVar4 != 0)) {
          *(undefined4 *)(lVar4 + 100) = 0xffffffff;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar2 + 0x2390));
    }
    if (lVar11 != 0) {
      if (lVar9 != 0) {
        piVar7 = (int *)(lVar9 + ((longlong)*(short *)(lVar9 + 0x29bc) + 0x538) * 8);
        if (*piVar7 != *(int *)(lVar9 + 4)) {
          iVar8 = *(short *)(lVar9 + 0x29bc) + 1;
          sVar5 = (short)iVar8 + (short)(iVar8 / 6) * -6;
          *(short *)(lVar9 + 0x29bc) = sVar5;
          piVar7 = (int *)(lVar9 + ((longlong)sVar5 + 0x538) * 8);
          *piVar7 = *(int *)(lVar9 + 4);
          *(undefined4 *)(lVar9 + 0x29c4 + (longlong)sVar5 * 8) = 0;
        }
        *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
        *(int *)(lVar9 + 0x29b8) = *(int *)(lVar9 + 0x29b8) + 1;
      }
      thunk_FUN_1805277b0(lVar11);
    }
  }
  return;
}



/* ===== 1804139f0 FUN_1804139f0 ===== */

void FUN_1804139f0(int param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = DAT_180ca0a50;
  while( true ) {
    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x14f8) + 0x1c8);
    if (param_1 < 0) {
      param_1 = *(int *)(lVar1 + 0xc);
    }
    if (((*(uint *)(lVar1 + 4) & 4) == 0) && (param_1 < *(int *)(lVar1 + 0x10) + -1)) {
      bVar3 = true;
      iVar5 = param_1;
      if (param_1 < 0) {
        iVar5 = *(int *)(lVar1 + 0xc);
      }
      lVar6 = (longlong)iVar5 * 0x1c;
      lVar2 = *(longlong *)(lVar1 + 0x68);
      if (*(char *)(lVar1 + 9) == '\0') {
        fVar8 = (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x14)) *
                (*(float *)(lVar6 + 0x1c + lVar2) - *(float *)(lVar6 + lVar2));
      }
      else {
        fVar8 = (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x14)) *
                (*(float *)(lVar6 + 0x20 + lVar2) - *(float *)(lVar6 + 4 + lVar2));
      }
    }
    else {
      bVar3 = false;
      fVar8 = 0.0;
    }
    if (((*(uint *)(lVar1 + 4) & 8) == 0) &&
       (fVar7 = *(float *)(lVar1 + 0x18) -
                (float)(*(int *)(lVar1 + 0x10) - param_1) * *(float *)(lVar4 + 0xd10),
       fVar7 <= param_2)) {
      param_2 = fVar7;
    }
    *(float *)((longlong)param_1 * 0x1c + *(longlong *)(lVar1 + 0x68)) =
         (param_2 - *(float *)(lVar1 + 0x14)) /
         (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x14));
    if (!bVar3) break;
    param_1 = param_1 + 1;
    fVar7 = *(float *)(lVar4 + 0xd10);
    if (*(float *)(lVar4 + 0xd10) <= fVar8) {
      fVar7 = fVar8;
    }
    param_2 = param_2 + fVar7;
  }
  return;
}



/* ===== 180413b00 FUN_180413b00 ===== */

void FUN_180413b00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  lVar6 = *(longlong *)(lVar5 + 0x1c8);
  if (*(int *)(lVar6 + 0x10) == 1) {
    return;
  }
  uVar11 = *(undefined8 *)(lVar5 + 0x270);
  *(undefined8 *)(lVar6 + 0x3c) = *(undefined8 *)(lVar5 + 0x268);
  *(undefined8 *)(lVar6 + 0x44) = uVar11;
  lVar7 = *(longlong *)(lVar5 + 0x2c8);
  uVar8 = *(undefined4 *)(lVar6 + 0x30);
  uVar9 = *(undefined4 *)(lVar6 + 0x34);
  uVar10 = *(undefined4 *)(lVar6 + 0x38);
  uVar1 = *(undefined4 *)(lVar6 + 0x2c);
  uVar2 = *(undefined4 *)(lVar6 + 0x30);
  uVar3 = *(undefined4 *)(lVar6 + 0x34);
  uVar4 = *(undefined4 *)(lVar6 + 0x38);
  *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(lVar6 + 0x2c);
  *(undefined4 *)(lVar5 + 0x26c) = uVar8;
  *(undefined4 *)(lVar5 + 0x270) = uVar9;
  *(undefined4 *)(lVar5 + 0x274) = uVar10;
  *(undefined4 *)(lVar7 + 0x60) = uVar1;
  *(undefined4 *)(lVar7 + 100) = uVar2;
  *(undefined4 *)(lVar7 + 0x68) = uVar3;
  *(undefined4 *)(lVar7 + 0x6c) = uVar4;
  lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x2c8) + 0xa8);
  lVar12 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x2c8) + 0xa0) + -1;
  *(undefined4 *)(lVar7 + lVar12 * 0x10) = uVar1;
  *(undefined4 *)(lVar7 + 4 + lVar12 * 0x10) = uVar2;
  *(undefined4 *)(lVar7 + 8 + lVar12 * 0x10) = uVar3;
  *(undefined4 *)(lVar7 + 0xc + lVar12 * 0x10) = uVar4;
  FUN_180401a80(lVar6 + 0x70,*(undefined8 *)(lVar5 + 0x2c8),0);
  return;
}



/* ===== 180413bc0 FUN_180413bc0 ===== */

void FUN_180413bc0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  lVar5 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  lVar6 = *(longlong *)(lVar5 + 0x1c8);
  if (*(int *)(lVar6 + 0x10) == 1) {
    return;
  }
  lVar7 = *(longlong *)(lVar5 + 0x2c8);
  uVar8 = *(undefined4 *)(lVar6 + 0x40);
  uVar9 = *(undefined4 *)(lVar6 + 0x44);
  uVar10 = *(undefined4 *)(lVar6 + 0x48);
  uVar1 = *(undefined4 *)(lVar6 + 0x3c);
  uVar2 = *(undefined4 *)(lVar6 + 0x40);
  uVar3 = *(undefined4 *)(lVar6 + 0x44);
  uVar4 = *(undefined4 *)(lVar6 + 0x48);
  *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(lVar6 + 0x3c);
  *(undefined4 *)(lVar5 + 0x26c) = uVar8;
  *(undefined4 *)(lVar5 + 0x270) = uVar9;
  *(undefined4 *)(lVar5 + 0x274) = uVar10;
  *(undefined4 *)(lVar7 + 0x60) = uVar1;
  *(undefined4 *)(lVar7 + 100) = uVar2;
  *(undefined4 *)(lVar7 + 0x68) = uVar3;
  *(undefined4 *)(lVar7 + 0x6c) = uVar4;
  lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x2c8) + 0xa8);
  lVar11 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x2c8) + 0xa0) + -1;
  *(undefined4 *)(lVar7 + lVar11 * 0x10) = uVar1;
  *(undefined4 *)(lVar7 + 4 + lVar11 * 0x10) = uVar2;
  *(undefined4 *)(lVar7 + 8 + lVar11 * 0x10) = uVar3;
  *(undefined4 *)(lVar7 + 0xc + lVar11 * 0x10) = uVar4;
  FUN_180401a80(lVar6 + 0x70,*(undefined8 *)(lVar5 + 0x2c8),*(int *)(lVar6 + 0xc) + 1);
  return;
}



/* ===== 180413c70 FUN_180413c70 ===== */

void FUN_180413c70(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  char local_res8 [8];
  char local_res10 [8];
  undefined1 local_res18;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  
  lVar14 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar14 + 0x14f8);
  iVar16 = *(int *)(lVar4 + 0x1f8);
  piVar5 = *(int **)(lVar4 + 0x1c8);
  if (iVar16 < 1) {
    FUN_1803ebc00("Calling PopItemWidth() too many times!");
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x200) + -4 + (longlong)iVar16 * 4);
    *(int *)(lVar4 + 0x1f8) = iVar16 + -1;
    *(undefined4 *)(lVar4 + 0x1e8) = uVar2;
  }
  if (1 < piVar5[4]) {
    FUN_1803e0390();
    FUN_1804016a0(piVar5 + 0x1c,*(undefined8 *)(lVar4 + 0x2c8));
  }
  fVar19 = (float)piVar5[8];
  if ((float)piVar5[8] <= *(float *)(lVar4 + 0x11c)) {
    fVar19 = *(float *)(lVar4 + 0x11c);
  }
  uVar3 = piVar5[1];
  piVar5[8] = (int)fVar19;
  *(float *)(lVar4 + 0x11c) = fVar19;
  if ((uVar3 & 0x10) == 0) {
    *(int *)(lVar4 + 0x130) = piVar5[10];
  }
  fVar10 = DAT_1808ac710;
  fVar9 = DAT_1808ac34c;
  fVar18 = DAT_1808ac1f4;
  local_res18 = 0;
  if ((((uVar3 & 1) == 0) && (*(char *)(lVar4 + 0xd1) == '\0')) && (1 < piVar5[4])) {
    if (*(float *)(lVar4 + 0x274) <= fVar19) {
      fVar19 = *(float *)(lVar4 + 0x274);
    }
    iVar16 = -1;
    iVar17 = 1;
    fVar22 = fVar19 + DAT_1808ac1f4;
    fVar23 = (float)piVar5[9];
    if ((float)piVar5[9] <= *(float *)(lVar4 + 0x26c)) {
      fVar23 = *(float *)(lVar4 + 0x26c);
    }
    fVar21 = fVar23 + DAT_1808ac34c + DAT_1808ac1f4;
    do {
      lVar6 = *(longlong *)(piVar5 + 0x1a);
      lVar15 = *(longlong *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x1c8);
      if (lVar15 == 0) {
        fVar20 = 0.0;
      }
      else {
        if (iVar17 < 0) {
          iVar12 = *(int *)(lVar15 + 0xc);
        }
        else {
          iVar12 = iVar17;
        }
        fVar20 = (*(float *)(lVar15 + 0x18) - *(float *)(lVar15 + 0x14)) *
                 *(float *)(*(longlong *)(lVar15 + 0x68) + (longlong)iVar12 * 0x1c) +
                 *(float *)(lVar15 + 0x14);
      }
      fVar20 = fVar20 + *(float *)(lVar4 + 0x28);
      iVar12 = *piVar5;
      local_f0 = (float)(int)(*(float *)(lVar14 + 0x1210) * fVar10);
      local_f8 = fVar20 - local_f0;
      local_f0 = local_f0 + fVar20;
      local_f4 = fVar23;
      local_ec = fVar19;
      cVar11 = FUN_1803ec2f0(&local_f8,iVar12 + iVar17,0,2);
      if (cVar11 != '\0') {
        local_res10[0] = '\0';
        local_res8[0] = '\0';
        if ((((uVar3 & 2) == 0) &&
            ((FUN_180415270(&local_f8,iVar12 + iVar17,local_res10,local_res8,0),
             local_res10[0] != '\0' || (local_res8[0] != '\0')))) &&
           (*(undefined4 *)(DAT_180ca0a50 + 0x2500) = 4, local_res8[0] != '\0')) {
          lVar15 = 0x1e;
          iVar12 = iVar17;
          if ((*(byte *)(lVar6 + 8 + (longlong)iVar17 * 0x1c) & 2) != 0) {
            iVar12 = iVar16;
          }
          iVar16 = iVar12;
        }
        else {
          lVar15 = (ulonglong)(local_res10[0] != '\0') + 0x1c;
        }
        puVar1 = (undefined4 *)(DAT_180ca0a50 + 0xde0 + lVar15 * 0x10);
        local_d8 = *puVar1;
        uStack_d4 = puVar1[1];
        uStack_d0 = puVar1[2];
        fStack_cc = (float)puVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
        uVar13 = FUN_1803d7f30(&local_d8);
        if ((uVar13 & 0xff000000) != 0) {
          local_e8 = (float)(int)fVar20 + fVar18;
          local_e4 = fVar21;
          local_e0 = local_e8;
          local_dc = fVar22;
          FUN_1803fc600(*(undefined8 *)(lVar4 + 0x2c8),&local_e8,2,uVar13,fVar9,0);
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < piVar5[4]);
    if (iVar16 == -1) {
      local_res18 = 0;
    }
    else {
      if ((*(char *)((longlong)piVar5 + 9) == '\0') && (iVar17 = 0, 0 < piVar5[4] + 1)) {
        do {
          lVar14 = (longlong)iVar17;
          iVar17 = iVar17 + 1;
          *(undefined4 *)(*(longlong *)(piVar5 + 0x1a) + 4 + lVar14 * 0x1c) =
               *(undefined4 *)(*(longlong *)(piVar5 + 0x1a) + lVar14 * 0x1c);
        } while (iVar17 < piVar5[4] + 1);
      }
      lVar6 = DAT_180ca0a50;
      *(undefined1 *)((longlong)piVar5 + 9) = 1;
      local_res18 = 1;
      lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x14f8) + 0x1c8);
      fVar19 = ((*(float *)(lVar6 + 0x110) - *(float *)(lVar6 + 0x1594)) +
               (float)(int)(*(float *)(lVar6 + 0x1210) * fVar10)) -
               *(float *)(*(longlong *)(lVar6 + 0x14f8) + 0x28);
      if (lVar14 == 0) {
        fVar18 = 0.0;
      }
      else {
        iVar17 = iVar16 + -1;
        if (iVar17 < 0) {
          iVar17 = *(int *)(lVar14 + 0xc);
        }
        fVar18 = (*(float *)(lVar14 + 0x18) - *(float *)(lVar14 + 0x14)) *
                 *(float *)((longlong)iVar17 * 0x1c + *(longlong *)(lVar14 + 0x68)) +
                 *(float *)(lVar14 + 0x14);
      }
      fVar18 = *(float *)(lVar6 + 0xd10) + fVar18;
      if (fVar19 <= fVar18) {
        fVar19 = fVar18;
      }
      if ((*(byte *)(piVar5 + 1) & 4) != 0) {
        if (lVar14 == 0) {
          fVar18 = 0.0;
        }
        else {
          iVar17 = iVar16 + 1;
          if (iVar17 < 0) {
            iVar17 = *(int *)(lVar14 + 0xc);
          }
          fVar18 = (*(float *)(lVar14 + 0x18) - *(float *)(lVar14 + 0x14)) *
                   *(float *)((longlong)iVar17 * 0x1c + *(longlong *)(lVar14 + 0x68)) +
                   *(float *)(lVar14 + 0x14);
        }
        fVar18 = fVar18 - *(float *)(lVar6 + 0xd10);
        if (fVar18 <= fVar19) {
          fVar19 = fVar18;
        }
      }
      FUN_1804139f0(iVar16,lVar14,fVar19);
    }
  }
  *(undefined1 *)((longlong)piVar5 + 9) = local_res18;
  *(undefined8 *)(lVar4 + 0x248) = *(undefined8 *)(lVar4 + 600);
  *(undefined8 *)(lVar4 + 0x250) = *(undefined8 *)(lVar4 + 0x260);
  uVar7 = *(undefined8 *)(piVar5 + 0x13);
  uVar8 = *(undefined8 *)(piVar5 + 0x15);
  *(undefined8 *)(lVar4 + 0x1c8) = 0;
  *(undefined4 *)(lVar4 + 0x160) = 0;
  *(undefined8 *)(lVar4 + 600) = uVar7;
  *(undefined8 *)(lVar4 + 0x260) = uVar8;
  lVar14 = DAT_180ca0a50;
  *(float *)(lVar4 + 0x118) =
       (float)(int)(*(float *)(lVar4 + 0x15c) + *(float *)(lVar4 + 0x28) + 0.0);
  lVar4 = *(longlong *)(lVar14 + 0x14f8);
  if ((*(longlong *)(lVar14 + 0x2360) == 0) && (*(longlong *)(lVar4 + 0x1c8) == 0)) {
    *(undefined1 *)(lVar4 + 0x178) = 1;
    return;
  }
  *(undefined1 *)(lVar4 + 0x178) = 0;
  return;
}



/* ===== 180414250 FUN_180414250 ===== */

void FUN_180414250(int *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1[1] < param_2) {
    uVar3 = _malloc_base((longlong)param_2 * 0x90);
    lVar2 = DAT_180ca0a50;
    if (DAT_180ca0a50 != 0) {
      FUN_1803ddee0(DAT_180ca0a50 + 0x29b4,*(undefined4 *)(DAT_180ca0a50 + 4));
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_180540530(uVar3,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x90);
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



/* ===== 180414370 FUN_180414370 ===== */

void FUN_180414370(char *param_1,char *param_2,ulonglong param_3)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  size_t sVar4;
  char *pcVar5;
  char *_Str;
  char *pcVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res20;
  float local_res24;
  float fStack_f4;
  float local_f0;
  float local_ec;
  undefined1 local_e8 [8];
  undefined1 auStack_e0 [168];
  
  lVar8 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar8 + 0x14f8);
  if (*(char *)(lVar2 + 0xd1) != '\0') {
    return;
  }
  _Str = "";
  pcVar6 = "";
  if (param_1 != param_2) {
    _Str = param_1;
    pcVar6 = param_2;
  }
  if (pcVar6 == (char *)0x0) {
    sVar4 = strlen(_Str);
    pcVar6 = _Str + sVar4;
  }
  uVar7 = DAT_1808acda0;
  fVar14 = DAT_1808acd08;
  fVar13 = *(float *)(lVar2 + 0x1f0);
  fVar16 = *(float *)(lVar2 + 0x150) + *(float *)(lVar2 + 0x11c);
  fVar1 = *(float *)(lVar2 + 0x118);
  local_res20 = fVar16;
  if ((longlong)pcVar6 - (longlong)_Str < 0x7d1) {
    if (0.0 <= fVar13) goto LAB_180414957;
  }
  else {
    if (0.0 > fVar13) {
      fVar12 = 0.0;
      fVar13 = *(float *)(lVar8 + 0x1200);
      local_f0 = 0.0;
      fStack_f4 = fVar16;
      if ((*(char *)(lVar8 + 0x2868) == '\0') &&
         (iVar9 = (int)((*(float *)(lVar2 + 0x26c) - fVar16) / fVar13), 0 < iVar9)) {
        iVar10 = 0;
        if (_Str < pcVar6) {
          do {
            if (iVar9 <= iVar10) break;
            pcVar5 = (char *)FUN_180540ca0(_Str,10,pcVar6 + -(longlong)_Str);
            if (pcVar5 == (char *)0x0) {
              pcVar5 = pcVar6;
            }
            if ((param_3 & 1) == 0) {
              if (_Str == pcVar5) {
                fVar15 = 0.0;
              }
              else {
                FUN_18040a2f0(local_e8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                              *(undefined4 *)(DAT_180ca0a50 + 0x1200),fVar14,uVar7,_Str,pcVar5,
                              pcVar5,0);
                fVar15 = (float)(int)((uint)((float)(int)(float)local_e8._0_4_ <
                                            (float)local_e8._0_4_) + (int)(float)local_e8._0_4_);
                local_e8._0_4_ = fVar15;
              }
              if (fVar12 <= fVar15) {
                fVar12 = fVar15;
              }
              local_f0 = fVar12;
            }
            _Str = pcVar5 + 1;
            iVar10 = iVar10 + 1;
          } while (_Str < pcVar6);
        }
        fStack_f4 = (float)iVar10 * fVar13 + fVar16;
      }
      uVar7 = DAT_1808acda0;
      if (_Str < pcVar6) {
        fVar15 = fStack_f4;
        fVar16 = fStack_f4;
        do {
          lVar8 = DAT_180ca0a50;
          fVar16 = fVar13 + fVar16;
          lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
          if (((((fVar16 < *(float *)(lVar2 + 0x26c) || fVar16 == *(float *)(lVar2 + 0x26c)) ||
                (*(float *)(lVar2 + 0x274) <= fVar15)) ||
               (fVar1 + fVar14 < *(float *)(lVar2 + 0x268) ||
                fVar1 + fVar14 == *(float *)(lVar2 + 0x268))) ||
              (*(float *)(lVar2 + 0x270) <= fVar1)) && (*(char *)(DAT_180ca0a50 + 0x1576) == '\0'))
          break;
          pcVar5 = (char *)FUN_180540ca0(_Str,10,(longlong)pcVar6 - (longlong)_Str);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = pcVar6;
          }
          if (_Str == pcVar5) {
            fVar11 = 0.0;
          }
          else {
            FUN_18040a2f0(local_e8,*(undefined8 *)(lVar8 + 0x11f0),*(undefined4 *)(lVar8 + 0x1200),
                          fVar14,uVar7,_Str,pcVar5,pcVar5,0);
            fVar11 = (float)(int)((uint)((float)(int)(float)local_e8._0_4_ < (float)local_e8._0_4_)
                                 + (int)(float)local_e8._0_4_);
            local_e8._0_4_ = fVar11;
          }
          if (fVar12 <= fVar11) {
            fVar12 = fVar11;
          }
          local_f0 = fVar12;
          FUN_1803d8ca0(CONCAT44(fStack_f4,fVar1),_Str,pcVar5,0);
          fStack_f4 = fStack_f4 + fVar13;
          _Str = pcVar5 + 1;
          fVar15 = fVar15 + fVar13;
        } while (_Str < pcVar6);
        uVar7 = DAT_1808acda0;
        iVar9 = 0;
        if (_Str < pcVar6) {
          do {
            pcVar5 = (char *)FUN_180540ca0(_Str,10,pcVar6 + -(longlong)_Str);
            if (pcVar5 == (char *)0x0) {
              pcVar5 = pcVar6;
            }
            if ((param_3 & 1) == 0) {
              if (_Str == pcVar5) {
                fVar16 = 0.0;
              }
              else {
                FUN_18040a2f0(local_e8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                              *(undefined4 *)(DAT_180ca0a50 + 0x1200),fVar14,uVar7,_Str,pcVar5,
                              pcVar5,0);
                fVar16 = (float)(int)((uint)((float)(int)(float)local_e8._0_4_ <
                                            (float)local_e8._0_4_) + (int)(float)local_e8._0_4_);
                local_e8._0_4_ = fVar16;
              }
              if (fVar12 <= fVar16) {
                fVar12 = fVar16;
              }
              local_f0 = fVar12;
            }
            _Str = pcVar5 + 1;
            iVar9 = iVar9 + 1;
          } while (_Str < pcVar6);
        }
        fStack_f4 = fStack_f4 + (float)iVar9 * fVar13;
        fVar16 = local_res20;
      }
      local_ec = fStack_f4 - fVar16;
      fVar12 = fVar1 + fVar12;
      fVar13 = fVar16 + local_ec;
      FUN_1803ec550(&local_f0,0);
      lVar8 = DAT_180ca0a50;
      *(uint *)(DAT_180ca0a50 + 0x1eec) =
           *(uint *)(DAT_180ca0a50 + 0x1eb4) | *(uint *)(DAT_180ca0a50 + 0x1ea8);
      lVar2 = *(longlong *)(lVar8 + 0x14f8);
      local_e8._4_4_ = fVar16;
      local_e8._0_4_ = fVar1;
      *(undefined4 *)(lVar8 + 0x1ee8) = 0;
      register0x00001208 = fVar12;
      register0x0000120c = fVar13;
      *(undefined1 (*) [16])(lVar8 + 0x1ef4) = _local_e8;
      *(undefined4 *)(lVar8 + 0x1ef0) = 0;
      *(undefined1 (*) [16])(lVar8 + 0x1f04) = _local_e8;
      *(undefined8 *)(lVar8 + 0x1eb0) = 0;
      if (((fVar13 < *(float *)(lVar2 + 0x26c) || fVar13 == *(float *)(lVar2 + 0x26c)) ||
          (*(float *)(lVar2 + 0x274) <= fVar16)) ||
         ((fVar12 < *(float *)(lVar2 + 0x268) || fVar12 == *(float *)(lVar2 + 0x268) ||
          (*(float *)(lVar2 + 0x270) <= fVar1)))) {
        if (*(char *)(lVar8 + 0x1576) == '\0') {
          return;
        }
        uVar7 = 1;
      }
      else {
        *(undefined4 *)(lVar8 + 0x1ef0) = 0x100;
        uVar7 = 0x101;
      }
      cVar3 = FUN_1803e9740(local_e8,auStack_e0,1);
      if (cVar3 == '\0') {
        return;
      }
      *(undefined4 *)(lVar8 + 0x1ef0) = uVar7;
      return;
    }
LAB_180414957:
    if (0.0 <= fVar13) {
      if (fVar13 == 0.0) {
        fVar14 = *(float *)(lVar2 + 0x250) - fVar1;
        if (fVar14 <= DAT_1808ac34c) {
          fVar14 = DAT_1808ac34c;
        }
      }
      else if (fVar13 <= 0.0) {
        fVar14 = fVar13 - fVar1;
        if (fVar13 - fVar1 <= DAT_1808ac34c) {
          fVar14 = DAT_1808ac34c;
        }
      }
      else {
        fVar14 = ((*(float *)(lVar2 + 0x28) - *(float *)(lVar2 + 0x98)) + fVar13) - fVar1;
        if (fVar14 <= DAT_1808ac34c) {
          fVar14 = DAT_1808ac34c;
        }
      }
      goto LAB_1804149b7;
    }
  }
  fVar14 = 0.0;
LAB_1804149b7:
  if (_Str == pcVar6) {
    local_res20 = 0.0;
    local_e8._4_4_ = *(float *)(lVar8 + 0x1200);
  }
  else {
    FUN_18040a2f0(local_e8,*(undefined8 *)(lVar8 + 0x11f0),*(float *)(lVar8 + 0x1200),DAT_1808acd08,
                  fVar14,_Str,pcVar6,pcVar6,0);
    local_res20 = (float)(int)((uint)((float)(int)(float)local_e8._0_4_ < (float)local_e8._0_4_) +
                              (int)(float)local_e8._0_4_);
  }
  fVar12 = (float)local_e8._4_4_ + fVar16;
  fVar13 = local_res20 + fVar1;
  local_res24 = (float)local_e8._4_4_;
  FUN_1803ec550(&local_res20,0);
  lVar8 = DAT_180ca0a50;
  *(uint *)(DAT_180ca0a50 + 0x1eec) =
       *(uint *)(DAT_180ca0a50 + 0x1eb4) | *(uint *)(DAT_180ca0a50 + 0x1ea8);
  lVar2 = *(longlong *)(lVar8 + 0x14f8);
  register0x000013c8 = fVar13;
  local_e8 = CONCAT44(fVar16,fVar1);
  register0x000013cc = fVar12;
  *(undefined1 (*) [16])(lVar8 + 0x1ef4) = _local_e8;
  *(undefined4 *)(lVar8 + 0x1ee8) = 0;
  *(undefined1 (*) [16])(lVar8 + 0x1f04) = _local_e8;
  *(undefined4 *)(lVar8 + 0x1ef0) = 0;
  *(undefined8 *)(lVar8 + 0x1eb0) = 0;
  if (((fVar12 < *(float *)(lVar2 + 0x26c) || fVar12 == *(float *)(lVar2 + 0x26c)) ||
      (*(float *)(lVar2 + 0x274) <= fVar16)) ||
     ((fVar13 < *(float *)(lVar2 + 0x268) || fVar13 == *(float *)(lVar2 + 0x268) ||
      (*(float *)(lVar2 + 0x270) <= fVar1)))) {
    if (*(char *)(lVar8 + 0x1576) == '\0') {
      return;
    }
    uVar7 = 1;
  }
  else {
    *(undefined4 *)(lVar8 + 0x1ef0) = 0x100;
    uVar7 = 0x101;
  }
  cVar3 = FUN_1803e9740(local_e8,auStack_e0,1);
  if (cVar3 != '\0') {
    *(undefined4 *)(lVar8 + 0x1ef0) = uVar7;
  }
  FUN_1803d8fb0(CONCAT44(fVar16,fVar1),_Str,pcVar6,fVar14);
  return;
}



/* ===== 180414bb0 FUN_180414bb0 ===== */

void FUN_180414bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x14f8) + 0xd1) == '\0') {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1803d76b0(local_10,&local_18,param_1,&local_res10);
    FUN_180414370(local_10[0],local_18,1);
  }
  return;
}



/* ===== 180414c20 FUN_180414c20 ===== */

void FUN_180414c20(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  lVar4 = DAT_180ca0a50;
  local_48 = 0;
  local_44 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
  uStack_40 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
  uStack_3c = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
  uStack_38 = *(undefined4 *)(DAT_180ca0a50 + 0xdec);
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_48);
  if (*(int *)(lVar4 + 0x1fbc) != 0) {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    *(undefined4 *)(lVar4 + 0xde0) = *param_1;
    *(undefined4 *)(lVar4 + 0xde4) = uVar1;
    *(undefined4 *)(lVar4 + 0xde8) = uVar2;
    *(undefined4 *)(lVar4 + 0xdec) = uVar3;
  }
  lVar4 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar4 + 0x14f8) + 0xd1) == '\0') {
    FUN_1803d76b0(&local_50,&local_58,param_2,&local_res18);
    FUN_180414370(local_50,local_58,1);
  }
  FUN_1803d87f0(1);
  return;
}



/* ===== 180414ce0 FUN_180414ce0 ===== */

void FUN_180414ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  lVar1 = DAT_180ca0a50;
  local_38 = 0;
  local_34 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
  uStack_30 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
  uStack_2c = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
  uStack_28 = *(undefined4 *)(DAT_180ca0a50 + 0xdec);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1803f64b0(DAT_180ca0a50 + 0x1fc0,&local_38);
  if (*(int *)(lVar1 + 0x1fbc) != 0) {
    *(undefined4 *)(lVar1 + 0xde0) = *(undefined4 *)(lVar1 + 0xdf0);
    *(undefined4 *)(lVar1 + 0xde4) = *(undefined4 *)(lVar1 + 0xdf4);
    *(undefined4 *)(lVar1 + 0xde8) = *(undefined4 *)(lVar1 + 0xdf8);
    *(undefined4 *)(lVar1 + 0xdec) = *(undefined4 *)(lVar1 + 0xdfc);
  }
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x14f8) + 0xd1) == '\0') {
    FUN_1803d76b0(&local_40,&local_48,param_1,&local_res10);
    FUN_180414370(local_40,local_48,1);
  }
  FUN_1803d87f0(1);
  return;
}



/* ===== 180414db0 FUN_180414db0 ===== */

void FUN_180414db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  
  pfVar1 = (float *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0x1f0);
  bVar4 = *pfVar1 != 0.0;
  bVar5 = *pfVar1 <= 0.0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (bVar5 && bVar4) {
    FUN_1803e7a50();
  }
  lVar6 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar6 + 0x14f8) + 0xd1) == '\0') {
    FUN_1803d76b0(&local_20,&local_28,param_1,&local_res10);
    FUN_180414370(local_20,local_28,1);
    lVar6 = DAT_180ca0a50;
  }
  if (bVar5 && bVar4) {
    lVar6 = *(longlong *)(lVar6 + 0x14f8);
    iVar2 = *(int *)(lVar6 + 0x208);
    if (iVar2 < 1) {
      FUN_1803ebc00("Calling PopTextWrapPos() too many times!");
      return;
    }
    uVar3 = *(undefined4 *)(*(longlong *)(lVar6 + 0x210) + -4 + (longlong)iVar2 * 4);
    *(int *)(lVar6 + 0x208) = iVar2 + -1;
    *(undefined4 *)(lVar6 + 0x1f0) = uVar3;
  }
  return;
}



/* ===== 180414ea0 FUN_180414ea0 ===== */

void FUN_180414ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_180414ed0(param_1,&local_res10);
  return;
}



/* ===== 180414ed0 FUN_180414ed0 ===== */

void FUN_180414ed0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res18;
  float fStackX_1c;
  longlong local_res20;
  undefined1 local_78 [96];
  
  lVar5 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar5 + 0x14f8);
  if (*(char *)(lVar2 + 0xd1) != '\0') {
    return;
  }
  FUN_1803d76b0(&local_res20,&local_res18,param_1,param_2);
  lVar4 = CONCAT44(fStackX_1c,local_res18);
  fVar12 = *(float *)(DAT_180ca0a50 + 0x1200);
  if (local_res20 != lVar4) {
    FUN_18040a2f0(&local_res18,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                  *(float *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,DAT_1808acda0,local_res20,lVar4,
                  lVar4,0);
    fVar10 = (float)(int)((uint)((float)(int)local_res18 < local_res18) + (int)local_res18);
    fVar12 = fStackX_1c;
    if (0.0 < fVar10) {
      fVar10 = *(float *)(lVar5 + 0xcdc) + *(float *)(lVar5 + 0xcdc) + fVar10;
      goto LAB_180414fff;
    }
  }
  fVar10 = 0.0;
LAB_180414fff:
  fVar10 = fVar10 + *(float *)(lVar5 + 0x1200);
  fVar1 = *(float *)(lVar2 + 0x118);
  fVar11 = *(float *)(lVar2 + 0x150) + *(float *)(lVar2 + 0x11c);
  local_res18 = fVar10;
  fStackX_1c = fVar12;
  FUN_1803ec550(&local_res18,0);
  lVar9 = DAT_180ca0a50;
  fVar12 = fVar12 + fVar11;
  fVar10 = fVar1 + fVar10;
  *(uint *)(DAT_180ca0a50 + 0x1eec) =
       *(uint *)(DAT_180ca0a50 + 0x1eb4) | *(uint *)(DAT_180ca0a50 + 0x1ea8);
  lVar3 = *(longlong *)(lVar9 + 0x14f8);
  local_78._4_4_ = fVar11;
  local_78._0_4_ = fVar1;
  *(undefined4 *)(lVar9 + 0x1ee8) = 0;
  local_78._8_4_ = fVar10;
  local_78._12_4_ = fVar12;
  *(undefined1 (*) [16])(lVar9 + 0x1ef4) = (undefined1  [16])local_78._0_16_;
  *(undefined4 *)(lVar9 + 0x1ef0) = 0;
  *(undefined1 (*) [16])(lVar9 + 0x1f04) = (undefined1  [16])local_78._0_16_;
  *(undefined8 *)(lVar9 + 0x1eb0) = 0;
  if ((((fVar12 < *(float *)(lVar3 + 0x26c) || fVar12 == *(float *)(lVar3 + 0x26c)) ||
       (*(float *)(lVar3 + 0x274) <= fVar11)) ||
      (fVar10 < *(float *)(lVar3 + 0x268) || fVar10 == *(float *)(lVar3 + 0x268))) ||
     (*(float *)(lVar3 + 0x270) <= fVar1)) {
    if (*(char *)(lVar9 + 0x1576) == '\0') {
      return;
    }
    uVar7 = 1;
  }
  else {
    *(undefined4 *)(lVar9 + 0x1ef0) = 0x100;
    uVar7 = 0x101;
  }
  cVar6 = FUN_1803e9740(local_78,local_78 + 8,1);
  if (cVar6 != '\0') {
    *(undefined4 *)(lVar9 + 0x1ef0) = uVar7;
  }
  local_78._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar9 + 0xde0),0);
  local_78._12_4_ = *(float *)(lVar9 + 0xdec) * *(float *)(lVar9 + 0xc9c);
  uVar7 = FUN_1803d7f30(local_78);
  fStackX_1c = *(float *)(lVar5 + 0x1200) * DAT_1808ac1f4;
  local_res18 = fVar1 + fStackX_1c + *(float *)(lVar5 + 0xcdc);
  fStackX_1c = fVar11 + fStackX_1c;
  fVar12 = *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x2c8) + 0x38) + 0x20);
  if (DAT_1808ac964 <= fVar12) {
    uVar8 = 0;
    if (fVar12 < DAT_1808aca54) {
      uVar8 = 0xc;
    }
  }
  else {
    uVar8 = 8;
  }
  FUN_1803fe9d0(*(longlong *)(lVar2 + 0x2c8),&local_res18,fVar12 * DAT_1808ac118,uVar7,uVar8);
  FUN_1803d8ca0(CONCAT44(fVar11 + 0.0,
                         *(float *)(lVar5 + 0xcdc) + *(float *)(lVar5 + 0xcdc) +
                         *(float *)(lVar5 + 0x1200) + fVar1),local_res20,lVar4,0);
  return;
}



/* ===== 180415270 FUN_180415270 ===== */

char FUN_180415270(undefined8 *param_1,uint param_2,char *param_3,undefined1 *param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char cVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  
  lVar5 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar12 = *(longlong *)(lVar5 + 0x14f8);
  lVar11 = 0x1eec;
  if (*(uint *)(lVar5 + 0x1ee8) != param_2) {
    lVar11 = 0x1ea8;
  }
  uVar3 = *(uint *)(lVar11 + lVar5);
  uVar13 = param_5 | 0x440000;
  if ((uVar3 >> 0x11 & 1) == 0) {
    uVar13 = param_5;
  }
  uVar15 = uVar13 | 1;
  if ((uVar13 & 7) != 0) {
    uVar15 = uVar13;
  }
  if ((uVar15 & 0x3f0) == 0) {
    uVar13 = 0x20;
    if ((uVar3 & 8) != 0) {
      uVar13 = 0x10;
    }
    uVar15 = uVar13 | uVar15;
  }
  lVar11 = *(longlong *)(lVar5 + 0x1500);
  if ((((uVar15 >> 0xb & 1) == 0) || (lVar11 == 0)) ||
     (*(longlong *)(lVar11 + 0x3c0) != *(longlong *)(lVar12 + 0x3c0))) {
    bVar25 = false;
  }
  else {
    bVar25 = true;
    *(longlong *)(lVar5 + 0x1500) = lVar12;
  }
  cVar22 = '\0';
  cVar7 = FUN_1803ddbf0(param_1,param_2);
  if (*(char *)(lVar5 + 0x2290) != '\0') {
    if (((uVar15 >> 9 & 1) != 0) && ((*(byte *)(lVar5 + 0x2294) & 4) == 0)) {
      cVar8 = FUN_1803dd930(0x80);
      lVar6 = DAT_180ca0a50;
      if (cVar8 != '\0') {
        *(uint *)(DAT_180ca0a50 + 0x1560) = param_2;
        *(undefined1 *)(lVar6 + 0x1574) = 0;
        if ((param_2 != 0) && (*(uint *)(lVar6 + 0x1564) != param_2)) {
          *(undefined8 *)(lVar6 + 0x156c) = 0;
        }
        cVar7 = '\x01';
        if ((*(float *)(lVar5 + 0x156c) - *(float *)(lVar5 + 0x40) <= DAT_1808ac254) &&
           (DAT_1808ac254 <= *(float *)(lVar5 + 0x156c))) {
          *(uint *)(lVar5 + 0x2320) = param_2;
          cVar22 = '\x01';
          FUN_1803ef030(lVar12,0);
          cVar7 = '\x01';
        }
      }
    }
    if ((*(uint *)(lVar5 + 0x2318) == param_2) && ((*(uint *)(lVar5 + 0x230c) & 0x2000) != 0)) {
      cVar7 = '\x01';
    }
  }
  if (bVar25) {
    *(longlong *)(lVar5 + 0x1500) = lVar11;
  }
  uVar20 = (ulonglong)param_2;
  iVar24 = -1;
  if ((uVar15 >> 0x15 & 1) != 0) {
    uVar20 = 0;
  }
  cVar8 = '\0';
  if (cVar7 != '\0') {
    iVar18 = -1;
    iVar23 = -1;
    uVar21 = uVar20;
    if ((uVar15 & 1) != 0) {
      bVar9 = FUN_1803e9690(0,0,uVar20);
      iVar18 = bVar9 - 1;
      if ((*(char *)(DAT_180ca0a50 + 0xb5e) != '\0') &&
         (cVar8 = FUN_1803eb1c0(0x290,uVar21 & 0xffffffff), cVar8 != '\0')) {
        iVar23 = 0;
      }
    }
    if ((uVar15 & 2) != 0) {
      iVar19 = 1;
      cVar8 = FUN_1803e9690(1,0,uVar21 & 0xffffffff);
      if ((cVar8 != '\0') && (iVar18 == -1)) {
        iVar18 = iVar19;
      }
      if (*(char *)(DAT_180ca0a50 + 0xb5f) != '\0') {
        cVar8 = FUN_1803eb1c0(0x291,uVar21 & 0xffffffff);
        if ((cVar8 != '\0') && (iVar23 == -1)) {
          iVar23 = iVar19;
        }
      }
    }
    if ((uVar15 & 4) != 0) {
      iVar19 = 2;
      cVar8 = FUN_1803e9690(2,0,uVar21 & 0xffffffff);
      if ((cVar8 != '\0') && (iVar18 == -1)) {
        iVar18 = iVar19;
      }
      if (*(char *)(DAT_180ca0a50 + 0xb60) != '\0') {
        cVar8 = FUN_1803eb1c0(0x292,uVar21 & 0xffffffff);
        if ((cVar8 != '\0') && (iVar23 == -1)) {
          iVar23 = iVar19;
        }
      }
    }
    cVar8 = cVar7;
    if (((uVar15 >> 0x10 & 1) == 0) ||
       (((*(char *)(lVar5 + 300) == '\0' && (*(char *)(lVar5 + 0x12d) == '\0')) &&
        (*(char *)(lVar5 + 0x12e) == '\0')))) {
      if ((iVar18 == -1) || (*(uint *)(lVar5 + 0x1578) == param_2)) {
        if ((char)uVar15 < '\0') goto LAB_180415668;
      }
      else {
        if ((uVar15 >> 0x14 & 1) == 0) {
          FUN_1803eb2a0(iVar18 + 0x290,param_2);
        }
        uVar16 = (undefined1)iVar18;
        if ((uVar15 & 0x60) != 0) {
          FUN_1803dd660(param_2,lVar12);
          *(undefined1 *)(lVar5 + 0x158d) = uVar16;
          if ((uVar15 >> 0x12 & 1) == 0) {
            FUN_1803ef530(param_2,lVar12);
            uVar14 = 0;
          }
          else {
            if ((uVar15 >> 0x16 & 1) != 0) goto LAB_1804155dc;
            uVar14 = 1;
          }
          FUN_1803ef030(lVar12,uVar14);
        }
LAB_1804155dc:
        if (((uVar15 & 0x10) != 0) ||
           (((uVar15 >> 8 & 1) != 0 && (*(short *)(lVar5 + 0xb4a + (longlong)iVar18 * 2) == 2)))) {
          cVar22 = '\x01';
          lVar11 = lVar12;
          if ((uVar15 >> 0x11 & 1) != 0) {
            lVar11 = 0;
          }
          uVar13 = 0;
          if ((uVar15 >> 0x11 & 1) == 0) {
            uVar13 = param_2;
          }
          FUN_1803dd660(uVar13,lVar11);
          *(undefined1 *)(lVar5 + 0x158d) = uVar16;
          if ((uVar15 >> 0x12 & 1) == 0) {
            FUN_1803ef530(param_2,lVar12);
            uVar14 = 0;
          }
          else {
            if ((uVar15 >> 0x16 & 1) != 0) goto LAB_180415645;
            uVar14 = 1;
          }
          FUN_1803ef030(lVar12,uVar14);
        }
LAB_180415645:
        if ((char)uVar15 < '\0') {
          if ((uVar15 >> 0x11 & 1) == 0) {
            FUN_1803dd660(param_2,lVar12);
          }
          *(undefined1 *)(lVar5 + 0x158d) = uVar16;
LAB_180415668:
          if (iVar23 != -1) {
            if (((uVar3 & 8) == 0) ||
               (*(float *)(lVar5 + 0xbb0 + (longlong)iVar23 * 4) < *(float *)(lVar5 + 0xa4))) {
              cVar22 = '\x01';
            }
            if ((uVar15 >> 0x12 & 1) == 0) {
              FUN_1803ef530(param_2,lVar12);
            }
            FUN_1803dd660(0,0);
          }
        }
      }
      if ((*(uint *)(lVar5 + 0x1578) != param_2) || ((uVar3 & 8) == 0)) goto LAB_18041572a;
      lVar11 = (longlong)*(char *)(lVar5 + 0x158d);
      if ((*(float *)(lVar5 + 0xb9c + lVar11 * 4) <= 0.0) ||
         ((*(char *)(lVar11 + 0x118 + DAT_180ca0a50) == '\0' ||
          (fVar1 = *(float *)(DAT_180ca0a50 + 0xb9c + lVar11 * 4), fVar1 < 0.0))))
      goto LAB_18041572a;
      if (fVar1 == 0.0) goto LAB_18041576d;
      fVar27 = *(float *)(DAT_180ca0a50 + 0xa4);
      if ((fVar1 <= fVar27) || (fVar26 = fVar1 - *(float *)(DAT_180ca0a50 + 0x40), fVar1 <= fVar26))
      goto LAB_18041572a;
      fVar2 = *(float *)(DAT_180ca0a50 + 0xa8);
      if (0.0 < fVar2) {
        if (fVar27 <= fVar26) {
          iVar23 = (int)((fVar26 - fVar27) / fVar2);
        }
        else {
          iVar23 = -1;
        }
        if (0 < (int)((fVar1 - fVar27) / fVar2) - iVar23) goto LAB_18041576d;
        goto LAB_18041572a;
      }
      if (fVar27 <= fVar26) goto LAB_18041572a;
LAB_18041576d:
      cVar10 = FUN_1803eb1c0(*(char *)(lVar5 + 0x158d) + 0x290,uVar20);
      if (cVar10 == '\0') goto LAB_18041572a;
      cVar22 = '\x01';
    }
    else {
LAB_18041572a:
      if (cVar22 == '\0') goto LAB_18041578c;
    }
    if (*(char *)(lVar5 + 0x76) != '\0') {
      *(undefined1 *)(lVar5 + 0x2060) = 0;
    }
  }
LAB_18041578c:
  if ((uVar3 & 0x40) != 0) goto LAB_1804158ec;
  if (((*(uint *)(lVar5 + 0x2064) == param_2) && (*(char *)(lVar5 + 0x2060) != '\0')) &&
     (*(char *)(lVar5 + 0x2061) != '\0')) {
    cVar7 = cVar8;
    if ((uVar15 >> 0x13 & 1) == 0) {
      cVar7 = '\x01';
    }
  }
  if (*(uint *)(lVar5 + 0x2080) != param_2) goto LAB_1804158ec;
  bVar25 = *(uint *)(lVar5 + 0x2084) == param_2;
  if ((!bVar25) && ((uVar3 & 8) != 0)) {
    lVar11 = 0x908;
    if (*(char *)(lVar5 + 0x71) != '\0') {
      lVar11 = 0x8e8;
    }
    fVar1 = *(float *)(DAT_180ca0a50 + 0x1f8);
    if (*(float *)(DAT_180ca0a50 + 0x1f8) <= *(float *)(DAT_180ca0a50 + 0x208)) {
      fVar1 = *(float *)(DAT_180ca0a50 + 0x208);
    }
    if (fVar1 <= *(float *)(lVar11 + DAT_180ca0a50)) {
      fVar1 = *(float *)(lVar11 + DAT_180ca0a50);
    }
    if (fVar1 == 0.0) {
      iVar24 = 1;
    }
    else {
      fVar27 = fVar1 - *(float *)(lVar5 + 0x40);
      if (fVar27 < fVar1) {
        fVar26 = *(float *)(lVar5 + 0xa8);
        fVar2 = *(float *)(lVar5 + 0xa4);
        if (0.0 < fVar26) {
          if (fVar2 <= fVar27) {
            iVar23 = (int)((fVar27 - fVar2) / fVar26);
          }
          else {
            iVar23 = -1;
          }
          if (fVar2 <= fVar1) {
            iVar24 = (int)((fVar1 - fVar2) / fVar26);
          }
          iVar24 = iVar24 - iVar23;
        }
        else {
          if ((fVar2 <= fVar27) || (fVar1 < fVar2)) goto LAB_180415844;
          iVar24 = 1;
        }
      }
      else {
LAB_180415844:
        iVar24 = 0;
      }
    }
    bVar25 = 0 < iVar24;
  }
  if ((*(uint *)(lVar5 + 0x207c) != param_2) && (!bVar25)) goto LAB_1804158ec;
  cVar22 = '\x01';
  FUN_1803dd660(param_2,lVar12);
  *(undefined4 *)(lVar5 + 0x159c) = *(undefined4 *)(lVar5 + 0x20b8);
  if ((uVar15 >> 0x12 & 1) == 0) {
    if ((*(byte *)(lVar5 + 0x2088) & 0x10) == 0) {
      FUN_1803ef530(param_2,lVar12);
      goto LAB_1804158dc;
    }
  }
  else {
LAB_1804158dc:
    if ((*(byte *)(lVar5 + 0x2088) & 0x10) == 0) goto LAB_1804158ec;
  }
  *(undefined1 *)(lVar5 + 0x158c) = 1;
LAB_1804158ec:
  uVar17 = 0;
  uVar16 = 0;
  if (*(uint *)(lVar5 + 0x1578) == param_2) {
    if (*(int *)(lVar5 + 0x159c) == 1) {
      if (*(char *)(lVar5 + 0x1584) != '\0') {
        *(ulonglong *)(lVar5 + 0x1594) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar5 + 0x110) >> 0x20) -
                      (float)((ulonglong)*param_1 >> 0x20),
                      (float)*(undefined8 *)(lVar5 + 0x110) - (float)*param_1);
      }
      lVar12 = (longlong)*(char *)(lVar5 + 0x158d);
      iVar24 = (int)*(char *)(lVar5 + 0x158d);
      if (iVar24 == -1) {
        FUN_1803dd660(0,0);
      }
      else if ((*(char *)(lVar12 + 0x118 + DAT_180ca0a50) == '\0') ||
              (cVar8 = FUN_1803eb1c0(iVar24 + 0x290,uVar20), cVar8 == '\0')) {
        if ((((cVar7 != '\0') && ((uVar15 & 0x20) != 0)) || ((uVar15 & 0x40) != 0)) &&
           (*(char *)(lVar5 + 0x2290) == '\0')) {
          if ((((uVar15 >> 8 & 1) == 0) || (*(char *)(lVar12 + 0xb5e + lVar5) == '\0')) ||
             (*(short *)(lVar5 + 0xb54 + lVar12 * 2) != 2)) {
            bVar25 = false;
          }
          else {
            bVar25 = true;
          }
          if (((uVar3 & 8) == 0) ||
             (*(float *)(lVar5 + 0xbb0 + lVar12 * 4) < *(float *)(lVar5 + 0xa4))) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar25 && !bVar4) {
            cVar8 = FUN_1803eb1c0(iVar24 + 0x290,uVar20 & 0xffffffff);
            if (cVar8 != '\0') {
              cVar22 = '\x01';
            }
          }
        }
        FUN_1803dd660(0,0);
      }
      else {
        uVar17 = 1;
      }
      uVar16 = uVar17;
      if (((uVar15 >> 0x12 & 1) == 0) && (*(char *)(lVar5 + 0x76) != '\0')) {
        *(undefined1 *)(lVar5 + 0x2060) = 0;
      }
    }
    else {
      uVar16 = uVar17;
      if (*(int *)(lVar5 + 0x159c) - 2U < 2) {
        if (*(uint *)(lVar5 + 0x2080) == param_2) {
          uVar16 = 1;
        }
        else {
          FUN_1803dd660(0,0);
        }
      }
    }
    if (cVar22 != '\0') {
      *(undefined1 *)(lVar5 + 0x1589) = 1;
    }
  }
  if ((*(uint *)(lVar5 + 0x20a0) == param_2) && ((uVar3 & 0x40) == 0)) {
    cVar7 = '\x01';
  }
  if (param_3 != (char *)0x0) {
    *param_3 = cVar7;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar16;
  }
  return cVar22;
}



/* ===== 180415ad0 FUN_180415ad0 ===== */

ulonglong FUN_180415ad0(char *param_1,undefined8 *param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  float fVar10;
  char local_res20 [8];
  undefined8 in_stack_ffffffffffffff08;
  undefined8 uVar11;
  undefined4 uVar12;
  char local_b8 [8];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  lVar3 = DAT_180ca0a50;
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  uVar7 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar7 + 0xce) = 1;
  lVar8 = *(longlong *)(lVar3 + 0x14f8);
  if (*(char *)(lVar8 + 0xd1) == '\0') {
    uVar5 = FUN_1803e8900(lVar8,param_1);
    uVar6 = DAT_1808acda0;
    pcVar9 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar9 != '\0') {
        if (((*pcVar9 == '#') && (pcVar9[1] == '#')) ||
           (pcVar9 = pcVar9 + 1, pcVar9 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (param_1 == pcVar9) {
      local_b0 = 0.0;
      local_ac = *(float *)(DAT_180ca0a50 + 0x1200);
    }
    else {
      uVar11 = CONCAT44(uVar12,DAT_1808acda0);
      FUN_18040a2f0(&local_a8,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                    *(float *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,uVar11,param_1,pcVar9,pcVar9,0)
      ;
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
      local_b0 = (float)(int)((uint)((float)(int)local_a8 < local_a8) + (int)local_a8);
      local_ac = local_a4;
    }
    fVar2 = *(float *)(lVar8 + 0x118);
    fVar10 = *(float *)(lVar8 + 0x11c);
    if ((param_3 >> 0xf & 1) != 0) {
      if (*(float *)(lVar3 + 0xce0) < *(float *)(lVar8 + 0x150)) {
        fVar10 = (*(float *)(lVar8 + 0x150) - *(float *)(lVar3 + 0xce0)) + fVar10;
      }
    }
    FUN_1803ec8b0(&local_a8,*param_2,
                  *(float *)(lVar3 + 0xcdc) + *(float *)(lVar3 + 0xcdc) + local_b0,
                  *(float *)(lVar3 + 0xce0) + *(float *)(lVar3 + 0xce0) + local_ac);
    fStack_84 = local_a4 + fVar10;
    local_88 = fVar2 + local_a8;
    local_90 = fVar2;
    fStack_8c = fVar10;
    FUN_1803ec550(&local_a8,*(undefined4 *)(lVar3 + 0xce0));
    uVar7 = FUN_1803ec2f0(&local_90,uVar5,0,0);
    if ((char)uVar7 != '\0') {
      uVar11 = CONCAT44(uVar12,param_3);
      bVar4 = FUN_180415270(&local_90,uVar5,local_res20,local_b8,uVar11);
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if ((local_b8[0] == '\0') || (local_res20[0] == '\0')) {
        lVar8 = (ulonglong)(local_res20[0] != '\0') + 0x16;
      }
      else {
        lVar8 = 0x18;
      }
      pfVar1 = (float *)(DAT_180ca0a50 + 0xc90 + (lVar8 + 0x15) * 0x10);
      local_a0 = *pfVar1;
      fStack_9c = pfVar1[1];
      fStack_98 = pfVar1[2];
      fStack_94 = pfVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
      FUN_1803d9fd0(&local_90,uVar5,0,uVar6);
      uVar6 = FUN_1803d7f30(&local_a0);
      FUN_1803d9cb0(CONCAT44(fStack_8c,local_90),CONCAT44(fStack_84,local_88),uVar6,1,
                    CONCAT44(uVar12,*(undefined4 *)(lVar3 + 0xce4)));
      lVar8 = DAT_180ca0a50;
      if (*(char *)(lVar3 + 0x2868) != '\0') {
        *(undefined **)(DAT_180ca0a50 + 0x2890) = &DAT_1806e05f8;
        *(undefined **)(lVar8 + 0x2898) = &DAT_1806e9114;
      }
      local_a8 = local_88 - *(float *)(lVar3 + 0xcdc);
      local_a4 = fStack_84 - *(float *)(lVar3 + 0xce0);
      local_a0 = local_90 + *(float *)(lVar3 + 0xcdc);
      fStack_9c = fStack_8c + *(float *)(lVar3 + 0xce0);
      FUN_1803d9560(&local_a0,&local_a8,param_1,pcVar9,&local_b0,lVar3 + 0xd88,&local_90);
      return (ulonglong)bVar4;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



/* ===== 180415e30 FUN_180415e30 ===== */

ulonglong FUN_180415e30(undefined8 param_1,float *param_2,ulonglong param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  undefined1 local_res20 [8];
  undefined1 local_28 [8];
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  
  lVar1 = DAT_180ca0a50;
  uVar4 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar4 + 0xce) = 1;
  lVar1 = *(longlong *)(lVar1 + 0x14f8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    fVar6 = param_2[1];
    if (param_2[1] == 0.0) {
      fVar6 = DAT_1808acd14;
    }
    fVar5 = DAT_1808acd14;
    if (*param_2 != 0.0) {
      fVar5 = *param_2;
    }
    FUN_1803ec8b0(&local_20,CONCAT44(fVar6,fVar5),0,0);
    uVar3 = FUN_1803e8900(lVar1,param_1);
    local_18 = *(float *)(lVar1 + 0x118);
    local_c = local_1c + *(float *)(lVar1 + 0x11c);
    local_14 = *(undefined4 *)(lVar1 + 0x11c);
    local_10 = local_18 + local_20;
    FUN_1803ec550(&local_20,DAT_1808acda0);
    uVar4 = FUN_1803ec2f0(&local_18,uVar3,0,~((uint)(param_3 >> 2) & 0x3fffffff) & 2);
    if ((char)uVar4 != '\0') {
      bVar2 = FUN_180415270(&local_18,uVar3,local_28,local_res20,(int)param_3);
      FUN_1803d9fd0(&local_18,uVar3,0,DAT_1808acda0);
      return (ulonglong)bVar2;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



/* ===== 180415f80 FUN_180415f80 ===== */

ulonglong FUN_180415f80(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_res20 [2];
  char local_98 [8];
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  
  lVar3 = DAT_180ca0a50;
  uVar6 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar6 + 0xce) = 1;
  lVar2 = *(longlong *)(lVar3 + 0x14f8);
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    local_res20[0] = param_4;
    local_90 = param_3;
    uVar5 = FUN_1803e8900(lVar2,param_1);
    local_88 = *(float *)(lVar2 + 0x118);
    fVar10 = local_90._4_4_;
    fStack_7c = local_90._4_4_ + *(float *)(lVar2 + 0x11c);
    local_80 = local_88 + (float)param_3;
    fStack_84 = *(float *)(lVar2 + 0x11c);
    if (local_90._4_4_ <
        *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) +
        *(float *)(DAT_180ca0a50 + 0x1200)) {
      uVar8 = DAT_1808acda0;
    }
    else {
      uVar8 = *(undefined4 *)(lVar3 + 0xce0);
    }
    FUN_1803ec550(&local_90,uVar8);
    uVar6 = FUN_1803ec2f0(&local_88,uVar5,0,0);
    if ((char)uVar6 != '\0') {
      bVar4 = FUN_180415270(&local_88,uVar5,local_res20,local_98,0x10);
      if ((local_98[0] == '\0') || ((char)local_res20[0] == '\0')) {
        lVar7 = (ulonglong)((char)local_res20[0] != '\0') + 0x16;
      }
      else {
        lVar7 = 0x18;
      }
      puVar1 = (undefined4 *)(DAT_180ca0a50 + 0xc90 + (lVar7 + 0x15) * 0x10);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      fStack_6c = (float)puVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
      local_68 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
      uStack_64 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
      uStack_60 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
      fStack_5c = *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c);
      FUN_1803d9fd0(&local_88,uVar5,0);
      uVar5 = FUN_1803d7f30(&local_78);
      FUN_1803d9cb0(CONCAT44(fStack_84,local_88),CONCAT44(fStack_7c,local_80),uVar5,1,
                    *(undefined4 *)(lVar3 + 0xce4));
      fVar9 = ((float)param_3 - *(float *)(lVar3 + 0x1200)) * DAT_1808ac1f4;
      fVar11 = (fVar10 - *(float *)(lVar3 + 0x1200)) * DAT_1808ac1f4;
      fVar10 = 0.0;
      if (0.0 <= fVar9) {
        fVar10 = fVar9;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar11) {
        fVar9 = fVar11;
      }
      fVar10 = local_88 + fVar10;
      fVar9 = fStack_84 + fVar9;
      uVar5 = FUN_1803d7f30(&local_68);
      FUN_18040b100(*(undefined8 *)(lVar2 + 0x2c8),CONCAT44(fVar9,fVar10),uVar5,param_2,
                    DAT_1808ac34c);
      return (ulonglong)bVar4;
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



/* ===== 1804161f0 FUN_1804161f0 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1804161f0(undefined4 param_1,float *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char local_res10 [8];
  char local_res18 [8];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  
  lVar3 = DAT_180ca0a50;
  fVar9 = *param_2;
  lVar2 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  fVar14 = param_2[1];
  fVar11 = *(float *)(DAT_180ca0a50 + 0x1200) + fVar9;
  fVar13 = fVar14 + *(float *)(DAT_180ca0a50 + 0x1200);
  local_b8 = fVar9;
  local_b4 = fVar14;
  local_b0 = fVar11;
  local_ac = fVar13;
  if (((*(float *)(lVar2 + 0x224) - *(float *)(lVar2 + 0x21c)) *
      (*(float *)(lVar2 + 0x220) - *(float *)(lVar2 + 0x218))) /
      ((fVar11 - fVar9) * (fVar13 - fVar14)) < DAT_1808ac428) {
    local_b0 = (float)(int)((fVar11 - fVar9) * DAT_1808acd64);
    local_b8 = fVar9 - local_b0;
    local_ac = (float)(int)((fVar13 - fVar14) * DAT_1808acd64);
    local_b4 = fVar14 - local_ac;
    local_b0 = fVar11 + local_b0;
    local_ac = fVar13 + local_ac;
  }
  local_a8 = fVar9;
  local_a4 = fVar14;
  local_a0 = fVar11;
  local_9c = fVar13;
  cVar4 = FUN_1803ec2f0(&local_b8,param_1,0,0);
  uVar7 = FUN_180415270(&local_b8,param_1,local_res18,local_res10,0);
  if (cVar4 != '\0') {
    lVar8 = 0x2c0;
    if (local_res10[0] != '\0') {
      lVar8 = 0x2d0;
    }
    puVar1 = (undefined4 *)(lVar8 + 0xc90 + DAT_180ca0a50);
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    fStack_8c = (float)puVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
    if (local_res18[0] != '\0') {
      uVar5 = FUN_1803d7f30(&local_98);
      FUN_1803fe590(*(undefined8 *)(lVar2 + 0x2c8),&local_a8,&local_a0,uVar5,0,0);
    }
    FUN_1803d9fd0(&local_a8,param_1,2);
    local_98 = *(undefined4 *)(DAT_180ca0a50 + 0xde0);
    uStack_94 = *(undefined4 *)(DAT_180ca0a50 + 0xde4);
    uStack_90 = *(undefined4 *)(DAT_180ca0a50 + 0xde8);
    fStack_8c = *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c);
    uVar6 = FUN_1803d7f30(&local_98);
    if ((uVar6 & 0xff000000) != 0) {
      fVar12 = (fVar11 + fVar9) * DAT_1808ac1f4 - DAT_1808ac1f4;
      fVar10 = *(float *)(lVar3 + 0x1200) * DAT_1808ac1f4 * _DAT_1808ac258 - DAT_1808ac34c;
      fVar14 = (fVar13 + fVar14) * DAT_1808ac1f4 - DAT_1808ac1f4;
      fVar11 = (float)(int)*(float *)(lVar3 + 0x11d4);
      fVar9 = fVar12 + fVar10 + DAT_1808ac1f4;
      fVar13 = fVar10 + fVar14 + DAT_1808ac1f4;
      fVar12 = fVar12 + (float)((uint)fVar10 ^ DAT_1808adec0) + DAT_1808ac1f4;
      fVar14 = (float)((uint)fVar10 ^ DAT_1808adec0) + fVar14 + DAT_1808ac1f4;
      local_a8 = fVar9;
      local_a4 = fVar13;
      local_a0 = fVar12;
      local_9c = fVar14;
      FUN_1803fc600(*(undefined8 *)(lVar2 + 0x2c8),&local_a8,2,uVar6,fVar11,0);
      local_a8 = fVar9;
      local_a4 = fVar14;
      local_a0 = fVar12;
      local_9c = fVar13;
      FUN_1803fc600(*(undefined8 *)(lVar2 + 0x2c8),&local_a8,2,uVar6,fVar11,0);
    }
    uVar7 = uVar7 & 0xff;
  }
  return uVar7;
}



/* ===== 180416590 FUN_180416590 ===== */

void FUN_180416590(int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_res10 [3];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  lVar8 = DAT_180ca0a50;
  pcVar13 = "#SCROLLY";
  lVar3 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  uVar14 = (ulonglong)param_1;
  if (param_1 == 0) {
    pcVar13 = "#SCROLLX";
  }
  uVar9 = FUN_1803e8900(lVar3,pcVar13);
  fVar1 = *(float *)(lVar3 + 0x28);
  fVar2 = *(float *)(lVar3 + 0x2c);
  fVar17 = fVar1 + *(float *)(lVar3 + 0x30);
  fVar18 = fVar2 + *(float *)(lVar3 + 0x34);
  fVar16 = (float)(int)(*(float *)(lVar3 + 100) * DAT_1808ac1f4 + DAT_1808ac1f4);
  if ((*(uint *)(lVar3 + 0x14) >> 10 & 1) == 0) {
    if ((*(uint *)(lVar3 + 0x14) & 1) == 0) {
      local_74 = 0.0;
    }
    else {
      local_74 = fVar16;
    }
  }
  else {
    local_74 = (float)(int)(*(float *)(DAT_180ca0a50 + 0xce8) * DAT_1808ac1f4 + DAT_1808ac1f4);
  }
  if (param_1 == 0) {
    local_6c = fVar18 - fVar16;
    local_70 = *(float *)(lVar3 + 0x230) - fVar16;
    fVar15 = local_6c - *(float *)(lVar3 + 0xc4);
    local_74 = fVar2 + fVar16;
    if (fVar2 + fVar16 <= fVar15) {
      local_74 = fVar15;
    }
    local_78 = fVar16 + *(float *)(lVar3 + 0x228);
  }
  else {
    local_74 = local_74 + *(float *)(lVar3 + 0x22c);
    local_70 = fVar17 - fVar16;
    local_6c = *(float *)(lVar3 + 0x234) - fVar16;
    fVar16 = local_70 - *(float *)(lVar3 + 0xc0 + (uVar14 ^ 1) * 4);
    local_78 = fVar1;
    if (fVar1 <= fVar16) {
      local_78 = fVar16;
    }
  }
  fVar16 = *(float *)(lVar8 + 0xcb0);
  bVar4 = fVar1 + fVar16 < local_78;
  bVar5 = fVar17 - fVar16 <= local_70;
  bVar6 = fVar2 + fVar16 < local_74;
  bVar7 = local_6c < fVar18 - fVar16;
  if ((bVar6) || (bVar4)) {
    uVar11 = 0;
    if (!bVar6) goto LAB_18041672e;
LAB_18041673f:
    uVar10 = 0;
    uVar12 = 0x40;
  }
  else {
    uVar11 = 0x10;
LAB_18041672e:
    if (!bVar5) goto LAB_18041673f;
    uVar10 = 0x20;
    uVar12 = 0x60;
  }
  if ((bVar7) || (bVar4)) {
    uVar12 = uVar10 | uVar11;
    if (!bVar7) goto LAB_18041675d;
  }
  else {
    uVar12 = uVar12 | uVar11;
LAB_18041675d:
    uVar11 = 0x180;
    if (bVar5) goto LAB_18041676c;
  }
  uVar11 = 0x100;
LAB_18041676c:
  fVar1 = *(float *)(lVar3 + 0x58 + uVar14 * 4);
  local_res10[0] = (longlong)*(float *)(lVar3 + 0x98 + uVar14 * 4);
  FUN_180416810(&local_78,uVar9,param_1,local_res10,
                (longlong)
                (*(float *)(lVar3 + 0x230 + uVar14 * 4) - *(float *)(lVar3 + 0x228 + uVar14 * 4)),
                (longlong)(fVar1 + fVar1 + *(float *)(lVar3 + 0x40 + uVar14 * 4)),uVar12 | uVar11);
  *(float *)(lVar3 + 0x98 + uVar14 * 4) = (float)local_res10[0];
  return;
}



/* ===== 180416810 FUN_180416810 ===== */

ulonglong FUN_180416810(float *param_1,undefined4 param_2,uint param_3,longlong *param_4,
                       longlong param_5,longlong param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
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
  byte local_128;
  char local_127;
  char local_126;
  float local_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  float local_110 [4];
  float local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0 [21];
  
  lVar3 = DAT_180ca0a50;
  fVar22 = DAT_1808ac34c;
  local_120 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  puVar8 = (undefined1 *)register0x00000020;
  if (((*(char *)(local_120 + 0xd1) != '\0') || (fVar16 = param_1[2] - *param_1, fVar16 <= 0.0)) ||
     (fVar18 = param_1[3] - param_1[1], fVar18 <= 0.0)) {
LAB_180416ec0:
    return (ulonglong)puVar8 & 0xffffffffffffff00;
  }
  fVar25 = DAT_1808ac34c;
  if ((param_3 == 1) && (fVar18 < fVar16)) {
    fVar21 = fVar16 + fVar16;
    if (fVar16 + fVar16 <= DAT_1808ac34c) {
      fVar21 = DAT_1808ac34c;
    }
    fVar21 = fVar18 / fVar21;
    if (0.0 <= fVar21) {
      if (fVar21 <= DAT_1808ac34c) {
        fVar25 = fVar21;
      }
    }
    else {
      fVar25 = 0.0;
    }
    if (fVar25 <= 0.0) goto LAB_180416ec0;
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  local_126 = DAT_1808ac34c <= fVar25;
  fVar18 = *(float *)(DAT_180ca0a50 + 0xd1c);
  if (fVar16 * DAT_1808ac1f4 <= *(float *)(DAT_180ca0a50 + 0xd1c)) {
    fVar18 = fVar16 * DAT_1808ac1f4;
  }
  puVar8 = (undefined1 *)(ulonglong)(uint)(int)fVar18;
  fVar18 = (float)((uint)(float)(int)fVar18 ^ DAT_1808adec0);
  fVar21 = *param_1 - fVar18;
  fVar26 = param_1[1] - fVar18;
  fVar16 = param_1[2] + fVar18;
  fVar18 = param_1[3] + fVar18;
  local_110[0] = fVar21;
  local_110[1] = fVar26;
  local_110[2] = fVar16;
  local_110[3] = fVar18;
  if (param_3 == 0) {
    fVar23 = fVar16 - fVar21;
  }
  else {
    fVar23 = fVar18 - fVar26;
  }
  if (fVar23 < DAT_1808ac34c) goto LAB_180416ec0;
  lVar10 = param_5;
  if (param_5 <= param_6) {
    lVar10 = param_6;
  }
  lVar13 = (longlong)(int)param_3;
  lVar9 = 1;
  if (0 < lVar10) {
    lVar9 = lVar10;
  }
  local_100[0] = fVar16 - fVar21;
  local_100[1] = fVar18 - fVar26;
  fVar14 = local_100[lVar13];
  if (*(float *)(DAT_180ca0a50 + 0xd20) <= local_100[lVar13]) {
    fVar14 = *(float *)(DAT_180ca0a50 + 0xd20);
  }
  local_100[0] = (float)param_5;
  fVar19 = ((float)param_5 / (float)lVar9) * fVar23;
  if ((fVar14 <= fVar19) && (fVar14 = fVar23, fVar19 <= fVar23)) {
    fVar14 = fVar19;
  }
  fVar19 = *(float *)(DAT_180ca0a50 + 0xcb0);
  local_e8 = *(undefined8 *)param_1;
  uStack_e0 = *(undefined8 *)(param_1 + 2);
  fVar24 = (float)(int)fVar14;
  local_d8 = *(undefined8 *)(*(longlong *)(local_120 + 0x3c0) + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(local_120 + 0x3c0) + 0x30);
  local_f8 = *(undefined8 *)(*(longlong *)(local_120 + 0x20) + 8);
  local_d0[0] = CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)local_d8 >> 0x20),
                         (float)uVar2 + (float)local_d8);
  uVar2 = *(undefined8 *)(*(longlong *)(local_120 + 0x20) + 0x10);
  lVar10 = (longlong)(int)(param_3 ^ 1);
  fVar14 = *(float *)((longlong)local_d0 + lVar10 * 4 + -8);
  uStack_f0 = CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)local_f8 >> 0x20),
                       (float)uVar2 + (float)local_f8);
  if (((fVar14 == local_100[lVar10 + 2]) &&
      (fVar20 = *(float *)((longlong)local_d0 + lVar10 * 4 + -0x18), fVar14 < fVar20)) &&
     (fVar20 - fVar19 <= fVar14)) {
    *(float *)((longlong)local_d0 + lVar10 * 4 + -0x18) = fVar14;
  }
  fVar14 = *(float *)((longlong)local_d0 + lVar10 * 4);
  if (((fVar14 == *(float *)((longlong)local_d0 + lVar10 * 4 + -0x20)) &&
      (fVar20 = *(float *)((longlong)local_d0 + lVar10 * 4 + -0x10), fVar20 < fVar14)) &&
     (fVar14 <= fVar20 + fVar19)) {
    *(float *)((longlong)local_d0 + lVar10 * 4 + -0x10) = fVar14;
  }
  local_128 = 0;
  local_127 = '\0';
  FUN_1803ec2f0(param_1,param_2,0,2);
  FUN_180415270(&local_e8,param_2,&local_127,&local_128,0x40000);
  bVar4 = local_128;
  param_6 = param_6 - param_5;
  if (param_6 < 2) {
    param_6 = 1;
  }
  local_124 = (float)param_6;
  fVar14 = (float)*param_4 / local_124;
  if (0.0 <= fVar14) {
    fVar19 = fVar22;
    if (fVar14 <= fVar22) {
      fVar19 = fVar14;
    }
  }
  else {
    fVar19 = 0.0;
  }
  fVar14 = fVar23 - fVar24;
  fVar19 = (fVar19 * fVar14) / fVar23;
  if (((local_128 == 0) || (local_126 == '\0')) || (fVar20 = fVar24 / fVar23, fVar22 <= fVar20))
  goto LAB_180416d33;
  fVar15 = (*(float *)(lVar3 + 0x110 + lVar13 * 4) - local_110[lVar13]) / fVar23;
  if (0.0 <= fVar15) {
    fVar17 = fVar22;
    if (fVar15 <= fVar22) {
      fVar17 = fVar15;
    }
  }
  else {
    fVar17 = 0.0;
  }
  if (fVar19 <= fVar17) {
    uVar6 = (uint)(fVar20 + fVar19 < fVar17);
  }
  else {
    uVar6 = 0xffffffff;
  }
  if (*(char *)(lVar3 + 0x1584) != '\0') {
    if (((*(char *)(lVar3 + 0x84) == '\0') || (*(char *)(lVar3 + 0x12d) != '\0')) || (uVar6 == 0)) {
      *(undefined2 *)(lVar3 + 0x26b2) = 0;
      if ((uVar6 != 0) || (*(char *)(lVar3 + 0x12d) != '\0')) goto LAB_180416c1f;
      fVar19 = (fVar17 - fVar19) - fVar20 * DAT_1808ac1f4;
    }
    else {
      *(short *)(lVar3 + 0x26b2) = (short)uVar6;
LAB_180416c1f:
      fVar19 = 0.0;
    }
    *(float *)(lVar3 + 0x26b4) = fVar19;
  }
  uVar12 = (uint)*(short *)(lVar3 + 0x26b2);
  if (*(short *)(lVar3 + 0x26b2) == 0) {
    fVar19 = ((fVar17 - *(float *)(lVar3 + 0x26b4)) - fVar20 * DAT_1808ac1f4) / (fVar22 - fVar20);
    if (0.0 <= fVar19) {
      fVar20 = fVar22;
      if (fVar19 <= fVar22) {
        fVar20 = fVar19;
      }
    }
    else {
      fVar20 = 0.0;
    }
    *param_4 = (longlong)(fVar20 * local_124);
  }
  else {
    cVar5 = FUN_1803e9690(0,1,0);
    if ((cVar5 != '\0') && (uVar6 == uVar12)) {
      fVar19 = fVar22;
      if ((float)(int)uVar12 <= 0.0) {
        fVar19 = DAT_1808acda0;
      }
      lVar10 = (longlong)(local_100[0] * fVar19) + *param_4;
      if (lVar10 < 0) {
        lVar10 = 0;
      }
      else if (param_6 < lVar10) {
        lVar10 = param_6;
      }
      *param_4 = lVar10;
    }
  }
  fVar19 = (float)*param_4 / local_124;
  if (0.0 <= fVar19) {
    if (fVar19 <= fVar22) {
      fVar22 = fVar19;
    }
  }
  else {
    fVar22 = 0.0;
  }
  fVar19 = (fVar22 * fVar14) / fVar23;
LAB_180416d33:
  local_f8 = *(undefined8 *)(DAT_180ca0a50 + 0xec0);
  fVar22 = *(float *)(DAT_180ca0a50 + 0xc9c);
  uStack_f0 = CONCAT44(*(float *)(DAT_180ca0a50 + 0xecc) * fVar22,
                       *(undefined4 *)(DAT_180ca0a50 + 0xec8));
  lVar10 = DAT_180ca0a50;
  uVar6 = FUN_1803d7f30(&local_f8);
  uVar11 = (ulonglong)uVar6;
  if (bVar4 == 0) {
    lVar9 = (ulonglong)(local_127 != '\0') + 0xf;
  }
  else {
    lVar9 = 0x11;
  }
  puVar1 = (undefined8 *)(lVar10 + (lVar9 + 0xde) * 0x10);
  local_f8 = *puVar1;
  uStack_f0 = CONCAT44(*(float *)((longlong)puVar1 + 0xc) * fVar22 * fVar25,
                       *(undefined4 *)(puVar1 + 1));
  uVar7 = FUN_1803d7f30(&local_f8);
  lVar10 = local_120;
  FUN_1803fe590(*(undefined8 *)(local_120 + 0x2c8),param_1,param_1 + 2,uVar11 & 0xffffffff,
                *(undefined4 *)(local_120 + 0x60),param_7);
  if (param_3 == 0) {
    local_114 = local_110[3];
    fVar21 = (fVar16 - fVar21) * fVar19 + fVar21;
    local_118 = fVar24 + fVar21;
    local_120 = CONCAT44(fVar26,fVar21);
  }
  else {
    local_118 = local_110[2];
    fVar26 = (fVar18 - fVar26) * fVar19 + fVar26;
    local_114 = fVar24 + fVar26;
    local_120 = CONCAT44(fVar26,fVar21);
  }
  FUN_1803fe590(*(undefined8 *)(lVar10 + 0x2c8),&local_120,&local_118,uVar7,
                *(undefined4 *)(lVar3 + 0xd18),0);
  return (ulonglong)local_128;
}



/* ===== 180416f00 FUN_180416f00 ===== */

ulonglong FUN_180416f00(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  char local_res10 [8];
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  ulonglong in_stack_fffffffffffffee8;
  float *pfVar13;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  
  lVar2 = DAT_180ca0a50;
  uVar7 = *(ulonglong *)(DAT_180ca0a50 + 0x14f8);
  *(undefined1 *)(uVar7 + 0xce) = 1;
  lVar1 = *(longlong *)(lVar2 + 0x14f8);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    local_res8 = param_1;
    uVar4 = FUN_1803e8900(lVar1,"read FAQ \"About ID Stack System\"");
    uVar6 = DAT_1808acda0;
    pcVar8 = "read FAQ \"About ID Stack System\"";
    while (*pcVar8 != '\0') {
      if (((*pcVar8 == '#') && (pcVar8[1] == '#')) ||
         (pcVar8 = pcVar8 + 1, pcVar8 == (char *)0xffffffffffffffff)) break;
    }
    fVar11 = *(float *)(lVar1 + 0x118);
    fVar12 = *(float *)(lVar1 + 0x150) + *(float *)(lVar1 + 0x11c);
    if (pcVar8 == "read FAQ \"About ID Stack System\"") {
      local_res18 = 0.0;
      local_res24 = *(float *)(DAT_180ca0a50 + 0x1200);
    }
    else {
      in_stack_fffffffffffffee8 = CONCAT44((int)(in_stack_fffffffffffffee8 >> 0x20),DAT_1808acda0);
      FUN_18040a2f0(&local_res20,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                    *(float *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,in_stack_fffffffffffffee8,
                    "read FAQ \"About ID Stack System\"",pcVar8,pcVar8,0);
      local_res18 = (float)(int)((uint)((float)(int)local_res20 < local_res20) + (int)local_res20);
    }
    local_c0 = local_res18 + fVar11;
    local_bc = local_res24 + fVar12;
    local_res1c = local_res24;
    local_c8 = fVar11;
    fStack_c4 = fVar12;
    FUN_1803ec550(&local_res18);
    uVar7 = FUN_1803ec2f0(&local_c8,uVar4,0,0);
    if ((char)uVar7 != '\0') {
      bVar3 = FUN_180415270(&local_c8,uVar4,&local_res8,local_res10,
                            in_stack_fffffffffffffee8 & 0xffffffff00000000);
      FUN_1803d9fd0(&local_c8,uVar4,0,uVar6);
      lVar10 = DAT_180ca0a50;
      if ((char)local_res8 != '\0') {
        *(undefined4 *)(DAT_180ca0a50 + 0x2500) = 7;
      }
      local_d8 = *(float *)(lVar2 + 0x1110);
      local_d4 = *(float *)(lVar2 + 0x1114);
      local_d0 = *(float *)(lVar2 + 0x1118);
      local_cc = *(float *)(lVar2 + 0x111c);
      local_b8 = local_d8;
      fStack_b4 = local_d4;
      fStack_b0 = local_d0;
      fStack_ac = local_cc;
      if ((local_res10[0] != '\0') || ((char)local_res8 != '\0')) {
        FUN_180519fe0();
      }
      FUN_1803d80a0();
      pfVar13 = &local_d0;
      uVar6 = (undefined4)((ulonglong)&local_d4 >> 0x20);
      FUN_1803d80a0();
      fVar11 = *(float *)(*(longlong *)(lVar2 + 0x11f8) + 0x48) * *(float *)(lVar2 + 0x1208) *
               DAT_1808ac118;
      iVar9 = (int)fVar11;
      if ((fVar11 < 0.0) && ((float)iVar9 != fVar11)) {
        iVar9 = iVar9 + -1;
      }
      local_a4 = local_d4;
      local_9c = local_cc * *(float *)(lVar10 + 0xc9c);
      local_a8 = local_d8;
      local_a0 = local_d0;
      uVar5 = FUN_1803d7f30(&local_a8);
      if ((uVar5 & 0xff000000) != 0) {
        local_a8 = local_c8 + DAT_1808ac1f4;
        local_a0 = local_c0 + DAT_1808ac1f4;
        local_a4 = (float)iVar9 + local_bc + DAT_1808ac1f4;
        local_9c = local_a4;
        FUN_1803fc600(*(undefined8 *)(lVar1 + 0x2c8),&local_a8,2,uVar5,
                      CONCAT44(uVar6,(float)(int)*(float *)(lVar2 + 0x11d4)),
                      (ulonglong)pfVar13 & 0xffffffff00000000);
        lVar10 = DAT_180ca0a50;
      }
      local_d4 = fStack_b4;
      local_cc = fStack_ac * *(float *)(lVar10 + 0xc9c);
      local_d8 = local_b8;
      local_d0 = fStack_b0;
      uVar6 = FUN_1803d7f30(&local_d8);
      FUN_1803d8730(0,uVar6);
      FUN_1803d8ca0(CONCAT44(fStack_c4,local_c8),"read FAQ \"About ID Stack System\"",pcVar8,0);
      FUN_1803d87f0(1);
      return (ulonglong)bVar3;
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



/* ===== 1804173e0 FUN_1804173e0 ===== */

char FUN_1804173e0(void)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar3 = DAT_180ca0a50;
  cVar4 = FUN_180416f00();
  if ((cVar4 != '\0') && (pcVar2 = *(code **)(lVar3 + 0xc28), pcVar2 != (code *)0x0)) {
    (*pcVar2)(lVar3,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
  }
  pcVar6 = "*Missing Text*";
  if (*(char **)(DAT_180ca0a50 + 0x2858) != (char *)0x0) {
    pcVar6 = *(char **)(DAT_180ca0a50 + 0x2858);
  }
  FUN_1803ed8c0(pcVar6,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
  if (*(char *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xd1) == '\0') {
    uVar1 = *(undefined4 *)(DAT_180ca0a50 + 0x1ee8);
    cVar5 = FUN_1803ee540();
    if (cVar5 != '\0') {
      FUN_1803ed9b0(uVar1,0);
    }
    cVar5 = FUN_1803ee2d0(uVar1,0x141);
    if (cVar5 != '\0') {
      pcVar6 = *(char **)(DAT_180ca0a50 + 0x2860);
      pcVar7 = "*Missing Text*";
      if (pcVar6 != (char *)0x0) {
        pcVar7 = pcVar6;
      }
      cVar5 = FUN_180422f00(pcVar7,pcVar6,0,0,1);
      if (cVar5 != '\0') {
        if (*(code **)(DAT_180ca0a50 + 0xc18) != (code *)0x0) {
          (**(code **)(DAT_180ca0a50 + 0xc18))
                    (DAT_180ca0a50,
                     "https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
        }
      }
      FUN_1803ee480();
    }
  }
  return cVar4;
}



/* ===== 1804174f0 FUN_1804174f0 ===== */

void FUN_1804174f0(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar5 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x14f8);
  if (*(char *)(lVar5 + 0xd1) == '\0') {
    fVar9 = (float)*param_1;
    fVar10 = (float)*(undefined8 *)(lVar5 + 0x118) + fVar9;
    fVar11 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x118) >> 0x20) +
             (float)((ulonglong)*param_1 >> 0x20);
    fVar1 = *(float *)(lVar5 + 0x118);
    fVar2 = *(float *)(lVar5 + 0x11c);
    FUN_1803ec550(fVar9,DAT_1808acda0);
    lVar7 = DAT_180ca0a50;
    uVar3 = *(uint *)(DAT_180ca0a50 + 0x1eb4);
    uVar4 = *(uint *)(DAT_180ca0a50 + 0x1ea8);
    *(float *)(DAT_180ca0a50 + 0x1ef4) = fVar1;
    *(float *)(lVar7 + 0x1ef8) = fVar2;
    *(float *)(lVar7 + 0x1efc) = fVar10;
    *(float *)(lVar7 + 0x1f00) = fVar11;
    *(uint *)(lVar7 + 0x1eec) = uVar3 | uVar4;
    lVar5 = *(longlong *)(lVar7 + 0x14f8);
    *(float *)(lVar7 + 0x1f04) = fVar1;
    *(float *)(lVar7 + 0x1f08) = fVar2;
    *(float *)(lVar7 + 0x1f0c) = fVar10;
    *(float *)(lVar7 + 0x1f10) = fVar11;
    *(undefined4 *)(lVar7 + 0x1ee8) = 0;
    *(undefined4 *)(lVar7 + 0x1ef0) = 0;
    *(undefined8 *)(lVar7 + 0x1eb0) = 0;
    if ((((fVar11 < *(float *)(lVar5 + 0x26c) || fVar11 == *(float *)(lVar5 + 0x26c)) ||
         (*(float *)(lVar5 + 0x274) <= fVar2)) ||
        (fVar10 < *(float *)(lVar5 + 0x268) || fVar10 == *(float *)(lVar5 + 0x268))) ||
       (*(float *)(lVar5 + 0x270) <= fVar1)) {
      if (*(char *)(lVar7 + 0x1576) == '\0') {
        return;
      }
      uVar8 = 1;
    }
    else {
      *(undefined4 *)(lVar7 + 0x1ef0) = 0x100;
      uVar8 = 0x101;
    }
    local_48 = fVar1;
    fStack_44 = fVar2;
    fStack_40 = fVar10;
    fStack_3c = fVar11;
    cVar6 = FUN_1803e9740(&local_48,&fStack_40,1);
    if (cVar6 != '\0') {
      *(undefined4 *)(lVar7 + 0x1ef0) = uVar8;
    }
  }
  return;
}



/* ===== 180417650 FUN_180417650 ===== */

void FUN_180417650(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong local_res8 [4];
  
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar2 = *(longlong *)(lVar1 + 0x14f8);
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    uVar3 = *(undefined4 *)(lVar2 + 0x1d4);
    *(undefined4 *)(lVar2 + 0x1d4) = 1;
    *(undefined1 *)(lVar2 + 0x158) = 0;
    if (*(float *)(lVar2 + 0x144) <= 0.0) {
      local_res8[0] = (ulonglong)*(uint *)(lVar1 + 0x1200) << 0x20;
    }
    else {
      local_res8[0] = 0;
    }
    FUN_1803ec550(local_res8,DAT_1808acda0);
    *(undefined4 *)(lVar2 + 0x1d4) = uVar3;
  }
  return;
}



/* ===== 1804176f0 FUN_1804176f0 ===== */

void FUN_1804176f0(ulonglong param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *_Str;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  size_t sVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  longlong lVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res18;
  float local_res1c;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff48;
  uint uVar21;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  
  lVar6 = DAT_180ca0a50;
  uVar21 = (uint)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar6 + 0x14f8);
  if (*(char *)(lVar4 + 0xd1) != '\0') {
    return;
  }
  if ((param_1 & 2) != 0) {
    fVar20 = *(float *)(lVar4 + 0x118);
    fVar19 = fVar20 + param_2;
    fVar18 = *(float *)(lVar4 + 0x11c);
    local_res1c = 0.0;
    fVar17 = fVar18 + *(float *)(lVar4 + 0x144);
    local_res18 = param_2;
    FUN_1803ec550(&local_res18,DAT_1808acda0);
    lVar15 = DAT_180ca0a50;
    *(uint *)(DAT_180ca0a50 + 0x1eec) =
         *(uint *)(DAT_180ca0a50 + 0x1eb4) | *(uint *)(DAT_180ca0a50 + 0x1ea8);
    lVar5 = *(longlong *)(lVar15 + 0x14f8);
    *(undefined4 *)(lVar15 + 0x1ee8) = 0;
    *(float *)(lVar15 + 0x1ef4) = fVar20;
    *(float *)(lVar15 + 0x1ef8) = fVar18;
    *(float *)(lVar15 + 0x1efc) = fVar19;
    *(float *)(lVar15 + 0x1f00) = fVar17;
    *(undefined4 *)(lVar15 + 0x1ef0) = 0;
    *(float *)(lVar15 + 0x1f04) = fVar20;
    *(float *)(lVar15 + 0x1f08) = fVar18;
    *(float *)(lVar15 + 0x1f0c) = fVar19;
    *(float *)(lVar15 + 0x1f10) = fVar17;
    *(undefined8 *)(lVar15 + 0x1eb0) = 0;
    if ((((fVar17 < *(float *)(lVar5 + 0x26c) || fVar17 == *(float *)(lVar5 + 0x26c)) ||
         (*(float *)(lVar5 + 0x274) <= fVar18)) ||
        (fVar19 < *(float *)(lVar5 + 0x268) || fVar19 == *(float *)(lVar5 + 0x268))) ||
       (*(float *)(lVar5 + 0x270) <= fVar20)) {
      if (*(char *)(lVar15 + 0x1576) == '\0') {
        return;
      }
      uVar8 = 1;
    }
    else {
      *(undefined4 *)(lVar15 + 0x1ef0) = 0x100;
      uVar8 = 0x101;
    }
    local_a8 = fVar20;
    fStack_a4 = fVar18;
    fStack_a0 = fVar19;
    fStack_9c = fVar17;
    cVar7 = FUN_1803e9740(&local_a8,&fStack_a0,1);
    if (cVar7 != '\0') {
      *(undefined4 *)(lVar15 + 0x1ef0) = uVar8;
    }
    local_98 = *(undefined4 *)(lVar15 + 4000);
    uStack_94 = *(undefined4 *)(lVar15 + 0xfa4);
    uStack_90 = *(undefined4 *)(lVar15 + 0xfa8);
    fStack_8c = *(float *)(lVar15 + 0xfac) * *(float *)(lVar15 + 0xc9c);
    uVar8 = FUN_1803d7f30(&local_98);
    FUN_1803fe590(*(undefined8 *)(lVar4 + 0x2c8),&local_a8,&fStack_a0,uVar8,
                  (ulonglong)uVar21 << 0x20,0);
    if (*(char *)(lVar6 + 0x2868) == '\0') {
      return;
    }
    FUN_1803f3880(&DAT_1808a9974);
    return;
  }
  if ((param_1 & 1) == 0) {
    return;
  }
  fVar20 = *(float *)(lVar4 + 0x118);
  fVar18 = *(float *)(lVar4 + 0x250);
  if ((param_1 & 4) == 0) {
    local_res20 = 0;
  }
  else {
    local_res20 = *(longlong *)(lVar4 + 0x1c8);
    if (local_res20 != 0) {
      fVar20 = *(float *)(lVar4 + 0x28) + *(float *)(lVar4 + 0x15c);
      fVar18 = *(float *)(lVar4 + 0x28) + *(float *)(lVar4 + 0x30);
      FUN_180413b00();
    }
  }
  fStack_a4 = *(float *)(lVar4 + 0x11c);
  fStack_9c = fStack_a4 + param_2;
  local_res18 = 0.0;
  local_res1c = param_2;
  local_a8 = fVar20;
  fStack_a0 = fVar18;
  FUN_1803ec550(&local_res18,DAT_1808acda0);
  lVar15 = DAT_180ca0a50;
  uVar1 = *(uint *)(DAT_180ca0a50 + 0x1eb4);
  uVar2 = *(uint *)(DAT_180ca0a50 + 0x1ea8);
  *(undefined4 *)(DAT_180ca0a50 + 0x1ee8) = 0;
  *(ulonglong *)(lVar15 + 0x1ef4) = CONCAT44(fStack_a4,local_a8);
  *(ulonglong *)(lVar15 + 0x1efc) = CONCAT44(fStack_9c,fStack_a0);
  *(uint *)(lVar15 + 0x1eec) = uVar1 | uVar2;
  lVar5 = *(longlong *)(lVar15 + 0x14f8);
  *(float *)(lVar15 + 0x1f04) = local_a8;
  *(float *)(lVar15 + 0x1f08) = fStack_a4;
  *(float *)(lVar15 + 0x1f0c) = fStack_a0;
  *(float *)(lVar15 + 0x1f10) = fStack_9c;
  *(undefined4 *)(lVar15 + 0x1ef0) = 0;
  *(undefined8 *)(lVar15 + 0x1eb0) = 0;
  if (((fStack_9c < *(float *)(lVar5 + 0x26c) || fStack_9c == *(float *)(lVar5 + 0x26c)) ||
      (*(float *)(lVar5 + 0x274) <= fStack_a4)) ||
     ((fStack_a0 < *(float *)(lVar5 + 0x268) || fStack_a0 == *(float *)(lVar5 + 0x268) ||
      (*(float *)(lVar5 + 0x270) <= local_a8)))) {
    if (*(char *)(lVar15 + 0x1576) == '\0') goto LAB_180417c7c;
    uVar8 = 1;
  }
  else {
    *(undefined4 *)(lVar15 + 0x1ef0) = 0x100;
    uVar8 = 0x101;
  }
  cVar7 = FUN_1803e9740(&local_a8,&fStack_a0,1);
  if (cVar7 != '\0') {
    *(undefined4 *)(lVar15 + 0x1ef0) = uVar8;
  }
  local_98 = *(undefined4 *)(lVar15 + 4000);
  uStack_94 = *(undefined4 *)(lVar15 + 0xfa4);
  uStack_90 = *(undefined4 *)(lVar15 + 0xfa8);
  fStack_8c = *(float *)(lVar15 + 0xfac) * *(float *)(lVar15 + 0xc9c);
  uVar8 = FUN_1803d7f30(&local_98);
  FUN_1803fe590(*(undefined8 *)(lVar4 + 0x2c8),&local_a8,&fStack_a0,uVar8,(ulonglong)uVar21 << 0x20,
                0);
  lVar5 = DAT_180ca0a50;
  if (*(char *)(lVar6 + 0x2868) != '\0') {
    pcVar16 = "--------------------------------\n";
    pcVar14 = *(char **)(DAT_180ca0a50 + 0x2890);
    _Str = *(char **)(DAT_180ca0a50 + 0x2898);
    lVar6 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
    *(undefined8 *)(DAT_180ca0a50 + 0x2898) = 0;
    *(undefined8 *)(lVar5 + 0x2890) = 0;
    pcVar13 = "--------------------------------\n";
    do {
      if ((*pcVar13 == '\0') || ((*pcVar13 == '#' && (pcVar13[1] == '#')))) break;
      pcVar13 = pcVar13 + 1;
    } while (pcVar13 != (char *)0xffffffffffffffff);
    fVar20 = *(float *)(lVar5 + 0xce0);
    if (*(float *)(lVar5 + 0xce0) <= *(float *)(lVar5 + 0xcf0)) {
      fVar20 = *(float *)(lVar5 + 0xcf0);
    }
    fVar18 = *(float *)(lVar5 + 0x28a0);
    *(float *)(lVar5 + 0x28a0) = fStack_a4;
    if (fVar20 + fVar18 + DAT_1808ac34c < fStack_a4) {
      FUN_1803f3880(&DAT_1806e6e50);
      *(undefined1 *)(lVar5 + 0x2869) = 1;
    }
    if (pcVar14 != (char *)0x0) {
      sVar10 = strlen(pcVar14);
      FUN_1803f38c0(&local_a8,pcVar14,pcVar14 + sVar10);
    }
    iVar3 = *(int *)(lVar6 + 0x1a0);
    iVar9 = *(int *)(lVar5 + 0x28a4);
    if (iVar3 < iVar9) {
      *(int *)(lVar5 + 0x28a4) = iVar3;
      iVar9 = iVar3;
    }
    iVar3 = *(int *)(lVar6 + 0x1a0);
    while( true ) {
      pcVar11 = (char *)FUN_180540ca0(pcVar16,10,(longlong)pcVar13 - (longlong)pcVar16);
      pcVar14 = pcVar13;
      if (pcVar11 != (char *)0x0) {
        pcVar14 = pcVar11;
      }
      if ((pcVar16 == pcVar14) && (pcVar14 == pcVar13)) break;
      iVar12 = 1;
      if (*(char *)(lVar5 + 0x2869) != '\0') {
        iVar12 = (iVar3 - iVar9) * 4;
      }
      FUN_1803f3880("%*s%.*s",iVar12,&DAT_18058b643,(int)pcVar14 - (int)pcVar16,pcVar16);
      *(undefined1 *)(lVar5 + 0x2869) = 0;
      if (*pcVar14 == '\n') {
        FUN_1803f3880(&DAT_1806e6e50);
        *(undefined1 *)(lVar5 + 0x2869) = 1;
      }
      if (pcVar14 == pcVar13) break;
      pcVar16 = pcVar14 + 1;
    }
    if (_Str != (char *)0x0) {
      sVar10 = strlen(_Str);
      FUN_1803f38c0(&local_a8,_Str,_Str + sVar10);
    }
  }
LAB_180417c7c:
  lVar6 = local_res20;
  if (local_res20 != 0) {
    FUN_180413bc0();
    *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar4 + 0x11c);
  }
  return;
}



/* ===== 180417ca0 FUN_180417ca0 ===== */

void FUN_180417ca0(undefined8 param_1,ulonglong param_2,ulonglong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res10;
  float local_res14;
  float local_res20;
  undefined8 in_stack_fffffffffffffeb8;
  undefined8 uVar17;
  undefined4 uVar18;
  ulonglong in_stack_fffffffffffffec0;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar6 = DAT_180ca0a50;
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  lVar4 = *(longlong *)(DAT_180ca0a50 + 0x14f8);
  if (param_2 == param_3) {
    fVar15 = 0.0;
    local_res14 = *(float *)(DAT_180ca0a50 + 0x1200);
  }
  else {
    uVar17 = CONCAT44(uVar18,DAT_1808acda0);
    in_stack_fffffffffffffec0 = param_2;
    FUN_18040a2f0(&local_res10,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),
                  *(float *)(DAT_180ca0a50 + 0x1200),DAT_1808acd08,uVar17,param_2,param_3,param_3,0)
    ;
    uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
    fVar15 = (float)(int)((uint)((float)(int)local_res10 < local_res10) + (int)local_res10);
  }
  fVar13 = DAT_1808ac33c;
  fVar14 = *(float *)(lVar6 + 0xdac);
  fVar1 = *(float *)(lVar4 + 0x11c);
  local_res20 = fVar14 + fVar14;
  fVar2 = *(float *)(lVar6 + 0xda0);
  fVar3 = *(float *)(lVar4 + 0x118);
  local_f4 = *(float *)(lVar6 + 0xdb0) + *(float *)(lVar6 + 0xdb0) + local_res14;
  local_f8 = fVar15 + param_4 + local_res20;
  if (local_f4 <= fVar2) {
    local_f4 = fVar2;
  }
  fStack_e0 = *(float *)(lVar4 + 0x250);
  fStack_dc = local_f4 + fVar1;
  local_res10 = (float)(int)(((fStack_dc - fVar1) - local_res14) * *(float *)(lVar6 + 0xda8) +
                            DAT_1808ac33c);
  local_108 = fVar15;
  local_104 = local_res14;
  local_e8 = fVar3;
  fStack_e4 = fVar1;
  FUN_1803ec550(&local_f8);
  cVar10 = FUN_1803ec2f0(&local_e8,0,0,0);
  fVar9 = fStack_dc;
  fVar8 = fStack_e0;
  lVar7 = DAT_180ca0a50;
  fVar5 = DAT_1808ac1f4;
  if (cVar10 != '\0') {
    fVar12 = (fStack_e0 - fVar3) - local_res20;
    fVar16 = (float)(int)((fStack_dc + fStack_e4) * DAT_1808ac1f4 + fVar13);
    fVar13 = 0.0;
    if (0.0 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar13 = ((fVar13 - fVar15) - param_4) * *(float *)(lVar6 + 0xda4);
    local_100 = 0.0;
    if (0.0 <= fVar13) {
      local_100 = fVar13;
    }
    local_100 = fVar3 + fVar14 + local_100;
    local_fc = local_res10 + fVar1;
    *(float *)(lVar4 + 0x120) = fVar15 + local_100;
    local_e8 = *(float *)(lVar7 + 4000);
    fStack_e4 = *(float *)(lVar7 + 0xfa4);
    fStack_e0 = *(float *)(lVar7 + 0xfa8);
    fStack_dc = *(float *)(lVar7 + 0xfac) * *(float *)(lVar7 + 0xc9c);
    uVar11 = FUN_1803d7f30(&local_e8);
    if (fVar15 <= 0.0) {
      if (*(char *)(lVar6 + 0x2868) != '\0') {
        FUN_1803f3880(&DAT_1808a98e4);
      }
      if ((0.0 < fVar2) && ((uVar11 & 0xff000000) != 0)) {
        fStack_e4 = fVar16 + fVar5;
        local_e8 = fVar3 + fVar5;
        fStack_e0 = fVar8 + fVar5;
        fStack_dc = fStack_e4;
        FUN_1803fc600(*(undefined8 *)(lVar4 + 0x2c8),&local_e8,2,uVar11,CONCAT44(uVar18,fVar2),
                      in_stack_fffffffffffffec0 & 0xffffffff00000000);
      }
    }
    else {
      fVar14 = local_100 - *(float *)(lVar6 + 0xcec);
      fVar15 = local_100 + fVar15 + param_4 + *(float *)(lVar6 + 0xcec);
      if (((fVar3 < fVar14) && (0.0 < fVar2)) && ((uVar11 & 0xff000000) != 0)) {
        local_e8 = fVar3 + fVar5;
        in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffff00000000;
        fStack_e4 = fVar16 + fVar5;
        uVar17 = CONCAT44(uVar18,fVar2);
        fStack_e0 = fVar14 + fVar5;
        fStack_dc = fStack_e4;
        FUN_1803fc600(*(undefined8 *)(lVar4 + 0x2c8),&local_e8,2,uVar11,uVar17,
                      in_stack_fffffffffffffec0);
        uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
      }
      if (((fVar15 < fVar8) && (0.0 < fVar2)) && ((uVar11 & 0xff000000) != 0)) {
        local_f4 = fVar16 + fVar5;
        local_f0 = fVar8 + fVar5;
        local_f8 = fVar15 + fVar5;
        local_ec = local_f4;
        FUN_1803fc600(*(undefined8 *)(lVar4 + 0x2c8),&local_f8,2,uVar11,CONCAT44(uVar18,fVar2),
                      in_stack_fffffffffffffec0 & 0xffffffff00000000);
      }
      lVar7 = DAT_180ca0a50;
      if (*(char *)(lVar6 + 0x2868) != '\0') {
        *(undefined **)(DAT_180ca0a50 + 0x2890) = &DAT_1808a98e4;
        *(undefined8 *)(lVar7 + 0x2898) = 0;
      }
      local_res14 = fVar9 + *(float *)(lVar6 + 0xcf0);
      local_res10 = fVar8;
      FUN_1803d97d0(*(undefined8 *)(lVar4 + 0x2c8),&local_100,&local_res10,fVar8,param_2,param_3,
                    &local_108);
    }
  }
  return;
}



/* ===== 180418180 FUN_180418180 ===== */

void FUN_180418180(char *param_1)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = DAT_180ca0a50;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x14f8) + 0xd1) != '\0') {
    return;
  }
  pcVar2 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar2 != '\0') {
      if (((*pcVar2 == '#') && (pcVar2[1] == '#')) ||
         (pcVar2 = pcVar2 + 1, pcVar2 == (char *)0xffffffffffffffff)) break;
    }
  }
  FUN_180417ca0(param_1,param_1,pcVar2,0);
  return;
}



/* ===== 180418200 FUN_180418200 ===== */

void FUN_180418200(longlong param_1,uint param_2,float param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_2 == 1) {
    if (0.0 <= *(float *)(param_1 + 4)) {
      param_3 = *(float *)(param_1 + 4) - param_3;
      if (param_3 <= param_4) {
        param_3 = param_4;
      }
      *(float *)(param_1 + 4) = param_3;
    }
  }
  else {
    if (1 < param_2) {
      FUN_180519150(param_1,(longlong)(int)param_2,0xc,&LAB_1804181e0);
    }
    fVar1 = DAT_1808ac34c;
    fVar13 = DAT_1808abfbc;
    if (DAT_1808abfbc < param_3) {
      iVar3 = 1;
      do {
        if ((int)param_2 <= iVar3) break;
        fVar12 = *(float *)(param_1 + 4);
        do {
          fVar9 = *(float *)(param_1 + 4 + (longlong)iVar3 * 0xc);
          if (fVar9 < fVar12) {
            if (0.0 <= fVar9) goto LAB_1804182d4;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)param_2);
        fVar9 = fVar1;
LAB_1804182d4:
        fVar10 = fVar12 - param_4;
        if (fVar12 - fVar9 <= fVar12 - param_4) {
          fVar10 = fVar12 - fVar9;
        }
        if (fVar10 <= 0.0) break;
        iVar4 = 0;
        fVar12 = param_3 / (float)iVar3;
        if (fVar10 <= param_3 / (float)iVar3) {
          fVar12 = fVar10;
        }
        if (3 < iVar3) {
          do {
            lVar2 = (longlong)iVar4;
            iVar4 = iVar4 + 4;
            fVar9 = *(float *)(param_1 + 4 + lVar2 * 0xc);
            fVar5 = fVar9 - param_4;
            fVar10 = fVar12;
            if (fVar5 <= fVar12) {
              fVar10 = fVar5;
            }
            *(float *)(param_1 + 4 + lVar2 * 0xc) = fVar9 - fVar10;
            fVar9 = *(float *)(param_1 + 0x10 + lVar2 * 0xc);
            fVar6 = fVar9 - param_4;
            fVar5 = fVar12;
            if (fVar6 <= fVar12) {
              fVar5 = fVar6;
            }
            *(float *)(param_1 + 0x10 + lVar2 * 0xc) = fVar9 - fVar5;
            fVar9 = *(float *)(param_1 + 0x1c + lVar2 * 0xc);
            fVar7 = fVar9 - param_4;
            fVar6 = fVar12;
            if (fVar7 <= fVar12) {
              fVar6 = fVar7;
            }
            *(float *)(param_1 + 0x1c + lVar2 * 0xc) = fVar9 - fVar6;
            fVar9 = *(float *)(param_1 + 0x28 + lVar2 * 0xc);
            fVar8 = fVar9 - param_4;
            fVar7 = fVar12;
            if (fVar8 <= fVar12) {
              fVar7 = fVar8;
            }
            param_3 = (((param_3 - fVar10) - fVar5) - fVar6) - fVar7;
            *(float *)(param_1 + 0x28 + lVar2 * 0xc) = fVar9 - fVar7;
          } while (iVar4 < iVar3 + -3);
        }
        while (iVar4 < iVar3) {
          lVar2 = (longlong)iVar4;
          iVar4 = iVar4 + 1;
          fVar9 = *(float *)(param_1 + 4 + lVar2 * 0xc);
          fVar5 = fVar9 - param_4;
          fVar10 = fVar12;
          if (fVar5 <= fVar12) {
            fVar10 = fVar5;
          }
          param_3 = param_3 - fVar10;
          *(float *)(param_1 + 4 + lVar2 * 0xc) = fVar9 - fVar10;
        }
      } while (fVar13 < param_3);
    }
    iVar3 = 0;
    fVar13 = 0.0;
    if (3 < (int)param_2) {
      do {
        lVar2 = (longlong)iVar3;
        iVar3 = iVar3 + 4;
        fVar12 = *(float *)(param_1 + 4 + lVar2 * 0xc);
        fVar9 = *(float *)(param_1 + 0x10 + lVar2 * 0xc);
        fVar10 = *(float *)(param_1 + 0x1c + lVar2 * 0xc);
        fVar5 = *(float *)(param_1 + 0x28 + lVar2 * 0xc);
        fVar6 = (float)(int)fVar12;
        *(float *)(param_1 + 4 + lVar2 * 0xc) = fVar6;
        fVar7 = (float)(int)fVar9;
        *(float *)(param_1 + 0x10 + lVar2 * 0xc) = fVar7;
        fVar8 = (float)(int)fVar10;
        *(float *)(param_1 + 0x1c + lVar2 * 0xc) = fVar8;
        fVar11 = (float)(int)fVar5;
        *(float *)(param_1 + 0x28 + lVar2 * 0xc) = fVar11;
        fVar13 = (fVar5 - fVar11) + (fVar10 - fVar8) + (fVar9 - fVar7) + (fVar12 - fVar6) + fVar13;
      } while (iVar3 < (int)(param_2 - 3));
    }
    for (; iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
      fVar12 = *(float *)(param_1 + 4 + (longlong)iVar3 * 0xc);
      fVar9 = (float)(int)fVar12;
      *(float *)(param_1 + 4 + (longlong)iVar3 * 0xc) = fVar9;
      fVar13 = fVar13 + (fVar12 - fVar9);
    }
    while (0.0 < fVar13) {
      iVar3 = 0;
      if (3 < (int)param_2) {
        do {
          if (fVar13 <= 0.0) {
            return;
          }
          lVar2 = (longlong)iVar3;
          fVar12 = *(float *)(param_1 + 4 + lVar2 * 0xc);
          fVar9 = *(float *)(param_1 + 8 + lVar2 * 0xc) - fVar12;
          if (fVar1 <= fVar9) {
            fVar9 = fVar1;
          }
          *(float *)(param_1 + 4 + lVar2 * 0xc) = fVar12 + fVar9;
          if (fVar13 - fVar9 <= 0.0) {
            return;
          }
          fVar12 = *(float *)(param_1 + 0x10 + lVar2 * 0xc);
          fVar10 = *(float *)(param_1 + 0x14 + lVar2 * 0xc) - fVar12;
          if (fVar1 <= fVar10) {
            fVar10 = fVar1;
          }
          fVar13 = (fVar13 - fVar9) - fVar10;
          *(float *)(param_1 + 0x10 + lVar2 * 0xc) = fVar12 + fVar10;
          if (fVar13 <= 0.0) {
            return;
          }
          fVar12 = *(float *)(param_1 + 0x1c + lVar2 * 0xc);
          fVar9 = *(float *)(param_1 + 0x20 + lVar2 * 0xc) - fVar12;
          if (fVar1 <= fVar9) {
            fVar9 = fVar1;
          }
          fVar13 = fVar13 - fVar9;
          *(float *)(param_1 + 0x1c + lVar2 * 0xc) = fVar12 + fVar9;
          if (fVar13 <= 0.0) {
            return;
          }
          fVar12 = *(float *)(param_1 + 0x28 + lVar2 * 0xc);
          iVar3 = iVar3 + 4;
          fVar9 = *(float *)(param_1 + 0x2c + lVar2 * 0xc) - fVar12;
          if (fVar1 <= fVar9) {
            fVar9 = fVar1;
          }
          fVar13 = fVar13 - fVar9;
          *(float *)(param_1 + 0x28 + lVar2 * 0xc) = fVar12 + fVar9;
        } while (iVar3 < (int)(param_2 - 3));
      }
      while (iVar3 < (int)param_2) {
        if (fVar13 <= 0.0) {
          return;
        }
        lVar2 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        fVar12 = *(float *)(param_1 + 4 + lVar2 * 0xc);
        fVar9 = *(float *)(param_1 + 8 + lVar2 * 0xc) - fVar12;
        if (fVar1 <= fVar9) {
          fVar9 = fVar1;
        }
        fVar13 = fVar13 - fVar9;
        *(float *)(param_1 + 4 + lVar2 * 0xc) = fVar12 + fVar9;
      }
    }
  }
  return;
}



/* ===== 180418650 FUN_180418650 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180418650(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_res10;
  undefined4 local_res18 [2];
  float local_res20;
  float local_res24;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar18;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  
  lVar5 = DAT_180ca0a50;
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  uVar2 = *(uint *)(lVar5 + 0x1f38);
  uVar9 = (ulonglong)uVar2;
  lVar3 = *(longlong *)(lVar5 + 0x14f8);
  *(undefined4 *)(lVar5 + 0x1f38) = 0;
  if (*(char *)(lVar3 + 0xd1) != '\0') goto LAB_180418bd0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  uVar7 = FUN_1803e8900(lVar3,&DAT_1808a9b00);
  uVar14 = DAT_1808acda0;
  pcVar12 = "##v";
  fVar15 = *(float *)(DAT_180ca0a50 + 0x1200);
  fVar16 = *(float *)(DAT_180ca0a50 + 0xce0) + *(float *)(DAT_180ca0a50 + 0xce0) + fVar15;
  while (*pcVar12 != '\0') {
    if (((*pcVar12 == '#') && (pcVar12[1] == '#')) ||
       (pcVar12 = pcVar12 + 1, pcVar12 == (char *)0xffffffffffffffff)) break;
  }
  if (pcVar12 == "##v") {
    fVar17 = 0.0;
    local_res24 = fVar15;
  }
  else {
    uVar18 = 1;
    FUN_18040a2f0(&local_res20,*(undefined8 *)(DAT_180ca0a50 + 0x11f0),fVar15,DAT_1808acd08,
                  DAT_1808acda0,&DAT_1808a9b00,pcVar12,pcVar12,0);
    fVar17 = (float)(int)((uint)((float)(int)local_res20 < local_res20) + (int)local_res20);
  }
  local_b8 = *(float *)(lVar3 + 0x118);
  fVar15 = *(float *)(lVar5 + 0xce0);
  local_a0 = local_b8 + fVar16;
  fStack_9c = fVar15 + fVar15 + local_res24 + *(float *)(lVar3 + 0x11c);
  fStack_b4 = *(float *)(lVar3 + 0x11c);
  if (fVar17 <= 0.0) {
    fStack_b0 = 0.0;
  }
  else {
    fStack_b0 = fVar17 + *(float *)(lVar5 + 0xcf4);
  }
  fStack_b0 = local_a0 + fStack_b0;
  fStack_ac = fStack_9c + 0.0;
  local_res20 = fStack_b0 - local_b8;
  local_res24 = fStack_ac - fStack_b4;
  local_a8 = local_b8;
  fStack_a4 = fStack_b4;
  FUN_1803ec550(&local_res20,fVar15);
  uVar9 = FUN_1803ec2f0(&local_b8,uVar7,&local_a8,0);
  if ((char)uVar9 == '\0') goto LAB_180418bd0;
  cVar6 = FUN_180415270(&local_a8,uVar7,local_res18,&local_res10,0);
  pcVar10 = "##ComboPopup";
  uVar9 = 0x23;
  uVar13 = ~uVar7;
  do {
    pcVar10 = pcVar10 + 1;
    if ((((char)uVar9 == '#') && (*pcVar10 == 0x23)) && (pcVar10[1] == 0x23)) {
      pcVar10 = pcVar10 + 2;
      uVar13 = ~uVar7;
    }
    else {
      uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_1806c25c0 + ((ulonglong)uVar13 & 0xff ^ uVar9) * 4);
    }
    uVar9 = (ulonglong)(byte)*pcVar10;
  } while (*pcVar10 != 0);
  uVar13 = ~uVar13;
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar11 = (longlong)*(int *)(DAT_180ca0a50 + 0x2030) * 0x58;
    if ((*(uint *)(lVar11 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != uVar13) ||
       (*(char *)(lVar11 + 0x34 + *(longlong *)(DAT_180ca0a50 + 0x2028)) != '\0'))
    goto LAB_180418903;
    bVar4 = true;
  }
  else {
LAB_180418903:
    bVar4 = false;
  }
  if (cVar6 == '\0') {
    fVar15 = local_a8;
    if (local_a8 <= local_a0 - fVar16) {
      fVar15 = local_a0 - fVar16;
    }
    FUN_1803d9fd0(&local_a8,uVar7,0,uVar14);
    if (bVar4) goto LAB_180418976;
    lVar11 = 0x2b0;
    if ((char)local_res18[0] != '\0') goto LAB_180418976;
  }
  else {
    if (!bVar4) {
      FUN_1803ed9b0(uVar13,0);
      bVar4 = true;
    }
    fVar15 = local_a8;
    if (local_a8 <= local_a0 - fVar16) {
      fVar15 = local_a0 - fVar16;
    }
    FUN_1803d9fd0(&local_a8,uVar7,0,uVar14);
LAB_180418976:
    lVar11 = 0x2c0;
  }
  pfVar1 = (float *)(lVar11 + 0xc90 + DAT_180ca0a50);
  local_c8 = *pfVar1;
  fStack_c4 = pfVar1[1];
  fStack_c0 = pfVar1[2];
  fStack_bc = pfVar1[3] * *(float *)(DAT_180ca0a50 + 0xc9c);
  local_b8 = *(float *)(DAT_180ca0a50 + 0xde0);
  fStack_b4 = *(float *)(DAT_180ca0a50 + 0xde4);
  fStack_b0 = *(float *)(DAT_180ca0a50 + 0xde8);
  fStack_ac = *(float *)(DAT_180ca0a50 + 0xdec) * *(float *)(DAT_180ca0a50 + 0xc9c);
  uVar7 = FUN_1803d7f30(&local_b8);
  local_res24 = fStack_a4;
  uVar14 = 0xa0;
  if (!NAN(fVar16)) {
    uVar14 = 0xf0;
  }
  local_res20 = fVar15;
  uVar8 = FUN_1803d7f30(&local_c8);
  FUN_1803fe590(*(undefined8 *)(lVar3 + 0x2c8),&local_res20,&local_a0,uVar8,
                *(undefined4 *)(lVar5 + 0xce4),CONCAT44(uVar18,uVar14));
  if ((fVar15 + fVar16) - *(float *)(lVar5 + 0xcdc) <= local_a0) {
    lVar3 = *(longlong *)(lVar3 + 0x2c8);
    fVar16 = *(float *)(*(longlong *)(lVar3 + 0x38) + 0x20);
    local_res20 = fVar16 * DAT_1808ac1f4;
    fVar16 = fVar16 * DAT_1808ac1b0;
    local_res24 = *(float *)(lVar5 + 0xce0) + fStack_a4 + local_res20;
    local_res20 = *(float *)(lVar5 + 0xce0) + fVar15 + local_res20;
    local_b8 = local_res20 + fVar16 * _DAT_1808ac2bc;
    fStack_c4 = local_res24 + fVar16 * _DAT_1808acd88;
    local_c8 = local_res20 + fVar16 * _DAT_1808acd94;
    local_res24 = local_res24 + fVar16 * DAT_1808ac27c;
    local_res20 = fVar16 * 0.0 + local_res20;
    fStack_b4 = fStack_c4;
    if ((uVar7 & 0xff000000) != 0) {
      FUN_18000b9c0(lVar3 + 0x50,&local_res20);
      FUN_18000b9c0(lVar3 + 0x50,&local_c8);
      FUN_18000b9c0(lVar3 + 0x50,&local_b8);
      FUN_1803fd460(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),uVar7);
      *(undefined4 *)(lVar3 + 0x50) = 0;
    }
  }
  uVar9 = FUN_1803d9e80(CONCAT44(fStack_a4,local_a8),CONCAT44(fStack_9c,local_a0),
                        *(undefined4 *)(lVar5 + 0xce4));
  *(undefined8 *)(lVar5 + 0x2668) = 0;
  *(undefined8 *)(lVar5 + 0x2670) = 0;
  if (0.0 < fVar17) {
    uVar9 = FUN_1803d8ca0(CONCAT44(fStack_a4 + *(float *)(lVar5 + 0xce0),
                                   local_a0 + *(float *)(lVar5 + 0xcf4)),&DAT_1808a9b00,pcVar12,0);
  }
  if (bVar4) {
    *(uint *)(lVar5 + 0x1f38) = uVar2;
    uVar9 = FUN_180418c00(uVar13,&local_a8,0x50);
    return uVar9;
  }
LAB_180418bd0:
  return uVar9 & 0xffffffffffffff00;
}



/* ===== 180418c00 FUN_180418c00 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180418c00(int param_1,float *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 local_a0 [16];
  byte local_90;
  byte local_8f [15];
  ulonglong local_80;
  
  lVar3 = DAT_180ca0a50;
  local_80 = DAT_180919500 ^ (ulonglong)auStack_d8;
  uVar9 = (ulonglong)*(int *)(DAT_180ca0a50 + 0x2030);
  if (*(int *)(DAT_180ca0a50 + 0x2030) < *(int *)(DAT_180ca0a50 + 0x2020)) {
    lVar13 = uVar9 * 0x58;
    uVar9 = *(ulonglong *)(DAT_180ca0a50 + 0x2028);
    if ((*(int *)(lVar13 + uVar9) == param_1) && (*(char *)(lVar13 + 0x34 + uVar9) == '\0')) {
      uVar10 = *(uint *)(DAT_180ca0a50 + 0x1f38);
      fVar15 = param_2[2] - *param_2;
      if ((uVar10 & 0x10) == 0) {
        uVar4 = param_3 | 4;
        if ((param_3 & 0x1e) != 0) {
          uVar4 = param_3;
        }
        param_3 = uVar4;
        if ((param_3 & 4) == 0) {
          if ((param_3 & 2) == 0) {
            iVar6 = -1;
            if ((param_3 & 8) != 0) {
              iVar6 = 0x14;
            }
          }
          else {
            iVar6 = 4;
          }
        }
        else {
          iVar6 = 8;
        }
        fVar18 = DAT_1808acd08;
        if ((((((uVar10 & 2) == 0) || (fVar16 = 0.0, *(float *)(DAT_180ca0a50 + 0x1f58) <= 0.0)) &&
             (fVar16 = fVar15, (uVar10 & 2) == 0)) || (*(float *)(DAT_180ca0a50 + 0x1f5c) <= 0.0))
           && (0 < iVar6)) {
          fVar18 = ((*(float *)(DAT_180ca0a50 + 0xcf0) + *(float *)(DAT_180ca0a50 + 0x1200)) *
                    (float)iVar6 - *(float *)(DAT_180ca0a50 + 0xcf0)) +
                   *(float *)(DAT_180ca0a50 + 0xca8) + *(float *)(DAT_180ca0a50 + 0xca8);
        }
        *(uint *)(DAT_180ca0a50 + 0x1f38) = uVar10 | 0x10;
        *(float *)(lVar3 + 0x1f84) = fVar16;
        *(undefined4 *)(lVar3 + 0x1f88) = 0;
        *(undefined4 *)(lVar3 + 0x1f8c) = 0x7f7fffff;
        *(float *)(lVar3 + 0x1f90) = fVar18;
        *(undefined8 *)(lVar3 + 0x1f98) = 0;
        *(undefined8 *)(lVar3 + 0x1fa0) = 0;
      }
      else {
        fVar18 = *(float *)(DAT_180ca0a50 + 0x1f84);
        if (*(float *)(DAT_180ca0a50 + 0x1f84) <= fVar15) {
          fVar18 = fVar15;
        }
        *(float *)(DAT_180ca0a50 + 0x1f84) = fVar18;
      }
      FUN_1803d7610(&local_90,0x10,"##Combo_%02d",*(undefined4 *)(lVar3 + 0x2640));
      uVar9 = 0xffffffff;
      uVar10 = 0xffffffff;
      pbVar14 = local_8f;
      while (local_90 != 0) {
        if (((local_90 == 0x23) && (*pbVar14 == 0x23)) && (pbVar14[1] == 0x23)) {
          uVar9 = 0xffffffff;
          pbVar14 = pbVar14 + 2;
        }
        else {
          uVar9 = (ulonglong)
                  ((uint)(uVar9 >> 8) ^
                  *(uint *)(&DAT_1806c25c0 + (uVar9 & 0xff ^ (ulonglong)local_90) * 4));
        }
        uVar10 = (uint)uVar9;
        local_90 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      }
      lVar13 = FUN_1803e1e50(~uVar10);
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0xcd) != '\0')) {
        local_b8 = 0;
        lVar12 = lVar13;
        FUN_1803e24d0(lVar13,&local_b0,&local_b8);
        FUN_1803e25f0(&local_b0,lVar12,&local_b8,0xffffffff);
        FUN_1803e2390(&local_b8,lVar13,&local_b0);
        uVar7 = 3;
        if ((param_3 & 1) != 0) {
          uVar7 = 0;
        }
        *(undefined4 *)(lVar13 + 0xe4) = uVar7;
        FUN_1803ee8d0();
        iVar6 = *(int *)(lVar13 + 0xe4);
        fVar15 = *param_2;
        fVar18 = param_2[3];
        iVar11 = -(uint)(iVar6 != -1);
        local_a0 = _DAT_1808ad620;
        do {
          if (iVar11 == -1) {
            iVar8 = iVar6;
LAB_180418edb:
            fVar16 = fVar15;
            fVar17 = fVar18;
            if (iVar8 != 3) {
              if (iVar8 == 1) {
LAB_180418f18:
                fVar17 = param_2[1] - local_b8._4_4_;
              }
              else if (iVar8 == 0) {
                fVar16 = param_2[2] - (float)local_b8;
              }
              else {
                fVar16 = 0.0;
                fVar17 = 0.0;
                if (iVar8 == 2) {
                  fVar16 = param_2[2] - (float)local_b8;
                  goto LAB_180418f18;
                }
              }
            }
            if ((((local_b0 <= fVar16) && (local_ac <= fVar17)) &&
                (fVar16 + (float)local_b8 <= local_a8)) && (fVar17 + local_b8._4_4_ <= local_a4)) {
              *(int *)(lVar13 + 0xe4) = iVar8;
              goto LAB_180418f8b;
            }
          }
          else {
            iVar8 = *(int *)(local_a0 + (longlong)iVar11 * 4);
            if (iVar8 != iVar6) goto LAB_180418edb;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 4);
        *(undefined4 *)(lVar13 + 0xe4) = 0xffffffff;
        fVar17 = fVar15 + (float)local_b8;
        if (local_a8 <= fVar15 + (float)local_b8) {
          fVar17 = local_a8;
        }
        fVar15 = fVar18 + local_b8._4_4_;
        if (local_a4 <= fVar18 + local_b8._4_4_) {
          fVar15 = local_a4;
        }
        fVar16 = fVar17 - (float)local_b8;
        if (fVar17 - (float)local_b8 <= local_b0) {
          fVar16 = local_b0;
        }
        fVar17 = fVar15 - local_b8._4_4_;
        if (fVar15 - local_b8._4_4_ <= local_ac) {
          fVar17 = local_ac;
        }
LAB_180418f8b:
        lVar13 = DAT_180ca0a50;
        *(uint *)(DAT_180ca0a50 + 0x1f38) = *(uint *)(DAT_180ca0a50 + 0x1f38) | 1;
        *(float *)(lVar13 + 0x1f48) = fVar16;
        *(float *)(lVar13 + 0x1f4c) = fVar17;
        *(undefined8 *)(lVar13 + 0x1f50) = 0;
        *(undefined4 *)(lVar13 + 0x1f3c) = 1;
      }
      FUN_1803d8900(2,*(undefined4 *)(lVar3 + 0xcdc));
      cVar5 = FUN_1803e4f20(&local_90,0,0x4000147);
      FUN_1803d8a40(1);
      if (cVar5 != '\0') {
        *(int *)(lVar3 + 0x2640) = *(int *)(lVar3 + 0x2640) + 1;
        uVar2 = *(undefined8 *)(lVar3 + 0x2670);
        lVar13 = *(longlong *)(lVar3 + 0x14d0);
        puVar1 = (undefined8 *)(((longlong)*(int *)(lVar3 + 0x14c8) + -1) * 0x88 + 0x74 + lVar13);
        *puVar1 = *(undefined8 *)(lVar3 + 0x2668);
        puVar1[1] = uVar2;
        return CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
      }
      uVar9 = FUN_1803ee480();
      goto LAB_18041906e;
    }
  }
  *(undefined4 *)(DAT_180ca0a50 + 0x1f38) = 0;
LAB_18041906e:
  return uVar9 & 0xffffffffffffff00;
}



/* ===== 180419090 FUN_180419090 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180419090(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  
  lVar5 = DAT_180ca0a50;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_48;
  *(int *)(DAT_180ca0a50 + 0x2640) = *(int *)(DAT_180ca0a50 + 0x2640) + -1;
  puVar1 = (undefined4 *)
           (((longlong)*(int *)(lVar5 + 0x14c8) + -1) * 0x88 + 0x74 + *(longlong *)(lVar5 + 0x14d0))
  ;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(lVar5 + 0x2668) = *puVar1;
  *(undefined4 *)(lVar5 + 0x266c) = uVar2;
  *(undefined4 *)(lVar5 + 0x2670) = uVar3;
  *(undefined4 *)(lVar5 + 0x2674) = uVar4;
  FUN_1803d7610(local_28,0x10,"##Combo_%02d",*(undefined4 *)(lVar5 + 0x2640));
  iVar6 = strcmp(*(char **)(*(longlong *)(lVar5 + 0x14f8) + 8),local_28);
  if (iVar6 == 0) {
    FUN_1803ee480();
    return;
  }
  FUN_1803ebc00("Calling EndCombo() in wrong window!");
  return;
}



/* ===== 180419150 FUN_180419150 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180419150(char *param_1,undefined8 param_2,uint *param_3,byte *param_4,uint *param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined4 extraout_var;
  byte *pbVar11;
  undefined1 auStack_68 [32];
  byte local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_180919500 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  for (; (cVar1 = *param_1, cVar1 == ' ' || (cVar1 == '\t')); param_1 = param_1 + 1) {
  }
  if (cVar1 == '\0') {
    uVar9 = 0;
    if (param_5 == (uint *)0x0) {
LAB_180419254:
      return uVar9 & 0xffffffffffffff00;
    }
    uVar4 = *param_5;
    uVar9 = (ulonglong)uVar4;
    *param_3 = uVar4;
  }
  else {
    pbVar11 = local_48;
    pbVar10 = (byte *)FUN_180419280(param_4);
    bVar5 = false;
    while (bVar7 = bVar5, param_4 < pbVar10) {
      bVar2 = *param_4;
      param_4 = param_4 + 1;
      if (((bVar7) || (0x39 < bVar2)) ||
         (bVar5 = false, (0x3ff480800000000U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0)) {
        if (((byte)(bVar2 + 0x9f) < 0x1a) || ((byte)(bVar2 + 0xbf) < 0x1a)) {
          bVar6 = 1;
        }
        else {
          bVar6 = 0;
        }
        bVar5 = (bool)(bVar7 | bVar6);
        if ((0x3b < (byte)((int)(char)bVar2 - 0x24U)) ||
           ((0x800000000000009U >> ((ulonglong)((int)(char)bVar2 - 0x24U) & 0x3f) & 1) == 0)) {
          *pbVar11 = bVar2;
          pbVar11 = pbVar11 + 1;
        }
      }
    }
    *pbVar11 = 0;
    pbVar11 = local_48;
    if (local_48[0] == 0) {
      pbVar11 = PTR_DAT_1806c9c48;
    }
    iVar8 = sscanf(param_1,(char *)pbVar11,param_3);
    uVar9 = CONCAT44(extraout_var,iVar8);
    if (iVar8 < 1) goto LAB_180419254;
    uVar4 = *param_3;
  }
  return CONCAT71((int7)(uVar9 >> 8),uVar3 != uVar4);
}



/* ===== 180419280 FUN_180419280 ===== */

char * FUN_180419280(char *param_1)

{
  char cVar1;
  
  if (*param_1 != '%') {
    return param_1;
  }
  cVar1 = '%';
  while (((0x19 < (byte)(cVar1 + 0xbfU) || ((1 << (cVar1 + 0xbfU & 0x1f) & 0x900U) != 0)) &&
         ((0x19 < (byte)(cVar1 + 0x9fU) || ((1 << (cVar1 + 0x9fU & 0x1f) & 0x2480a80U) != 0))))) {
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar1 == '\0') {
      return param_1;
    }
  }
  return param_1 + 1;
}



/* ===== 1804192e0 FUN_1804192e0 ===== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1804192e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  lVar2 = DAT_180ca0a50;
  local_18 = DAT_180919500 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(*(longlong *)(DAT_180ca0a50 + 0x14f8) + 0xce) = 1;
  if (*(char *)(*(ulonglong *)(lVar2 + 0x14f8) + 0xd1) != '\0') {
    return *(ulonglong *)(lVar2 + 0x14f8) & 0xffffffffffffff00;
  }
  FUN_1803d7610(local_58,0x40,PTR_DAT_1806c9c40,*param_3);
  *(uint *)(lVar2 + 0x1eb4) = *(uint *)(lVar2 + 0x1eb4) | 0x10000;
  local_88 = local_68;
  local_68[0] = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0x10001000;
  FUN_18041c570("##value",0,local_58,0x40);
  uVar4 = 0;
  if ((*(uint *)(lVar2 + 0x1eec) & 0x100) == 0) {
    if (*(int *)(lVar2 + 0x15ac) != *(int *)(lVar2 + 0x1ee8)) goto LAB_1804193e1;
  }
  else if ((*(uint *)(lVar2 + 0x1ef0) & 0x800) == 0) goto LAB_1804193e1;
  local_88 = (undefined8 *)0x0;
  bVar3 = FUN_180419150(local_58);
  uVar4 = (ulonglong)bVar3;
LAB_1804193e1:
  uVar1 = *(uint *)(lVar2 + 0x1eec);
  if (((((uVar1 >> 9 & 1) != 0) && (*(int *)(lVar2 + 0x1ee8) != 0)) &&
      (*(int *)(DAT_180ca0a50 + 0x2524) == *(int *)(lVar2 + 0x1ee8))) && (DAT_180ca0a50 != -0x2510))
  {
    if ((uVar1 >> 8 & 1) == 0) {
      bVar3 = *(byte *)(DAT_180ca0a50 + 0x2585);
    }
    else {
      bVar3 = *(byte *)(DAT_180ca0a50 + 0x2584) | *(byte *)(DAT_180ca0a50 + 0x2585);
    }
    uVar4 = (ulonglong)(byte)((byte)uVar4 | bVar3);
  }
  *(uint *)(lVar2 + 0x1eec) = uVar1 & 0xfffeffff;
  if ((char)uVar4 != '\0') {
    FUN_1803dd850(*(undefined4 *)(lVar2 + 0x1ee8));
  }
  return uVar4 & 0xff;
}



/* ===== 180419480 FUN_180419480 ===== */

float FUN_180419480(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  float fVar3;
  uint local_res10 [6];
  
  FUN_1803d7c80(local_res10,(longlong)param_2 + param_1[4] + (longlong)param_3,
                (longlong)(int)param_1[3] + param_1[4]);
  if ((short)local_res10[0] == 10) {
    return DAT_1808acda0;
  }
  lVar1 = *param_1;
  piVar2 = *(int **)(lVar1 + 0x11f8);
  if ((int)(local_res10[0] & 0xffff) < *piVar2) {
    fVar3 = *(float *)(*(longlong *)(piVar2 + 2) + ((ulonglong)local_res10[0] & 0xffff) * 4);
    if (0.0 <= fVar3) goto LAB_1804194f3;
  }
  fVar3 = (float)FUN_1804083d0(piVar2);
LAB_1804194f3:
  return fVar3 * *(float *)(lVar1 + 0x1208);
}



/* ===== 180419510 FUN_180419510 ===== */

void FUN_180419510(undefined4 *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  
  lVar1 = param_2[4];
  lVar2 = *param_2;
  lVar3 = (int)param_2[3] + lVar1;
  local_res10 = 0;
  FUN_18040a2f0(&local_res8,*(undefined8 *)(lVar2 + 0x11f0),*(undefined4 *)(lVar2 + 0x1200),
                DAT_1808acd08,*(undefined4 *)(lVar2 + 0x2578),lVar1 + param_3,lVar3,lVar3,
                &local_res10);
  param_1[5] = ((int)local_res10 - (int)lVar1) - param_3;
  param_1[1] = local_res8;
  param_1[2] = local_resc;
  param_1[4] = local_resc;
  *param_1 = 0;
  param_1[3] = 0;
  return;
}



/* ===== 1804195e0 FUN_1804195e0 ===== */

undefined8 FUN_1804195e0(longlong param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  int local_res8 [2];
  int local_res18 [4];
  
  if (((*(uint *)(param_1 + 0x10) & 0x400) == 0) && (0 < param_2)) {
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    uVar9 = (longlong)param_2 + uVar2;
    do {
      if (uVar9 <= uVar2) {
        uVar9 = uVar2;
        break;
      }
      pbVar1 = (byte *)(uVar9 - 1);
      uVar9 = uVar9 - 1;
    } while ((*pbVar1 & 0xc0) == 0x80);
    FUN_1803d7c80(local_res18,(longlong)param_2 + uVar2,(longlong)*(int *)(param_1 + 0x18) + uVar2);
    FUN_1803d7c80(local_res8,uVar9);
    if (((local_res8[0] == 0x20) || (local_res8[0] == 9)) || (local_res8[0] == 0x3000)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    piVar8 = &DAT_1808a9b70;
    piVar7 = &DAT_1808a9b70;
    do {
      if (local_res8[0] == *piVar7) {
        bVar4 = true;
        goto LAB_1804196a3;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)&DAT_1808a9be4);
    bVar4 = false;
LAB_1804196a3:
    if (((local_res18[0] == 0x20) || (local_res18[0] == 9)) || (local_res18[0] == 0x3000)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    do {
      if (local_res18[0] == *piVar8) {
        bVar6 = true;
        goto LAB_1804196d3;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)&DAT_1808a9be4);
    bVar6 = false;
LAB_1804196d3:
    if ((bVar3) || (bVar4)) {
      if (!bVar6) {
        if (bVar5) {
          return 0;
        }
        return 1;
      }
    }
    else if (!bVar6) {
      return 0;
    }
    if (!bVar4) {
      return 1;
    }
  }
  return 0;
}



/* ===== 180419700 FUN_180419700 ===== */

uint FUN_180419700(longlong param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_2 < 1) {
LAB_180419780:
    uVar4 = 0xffffffff;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    uVar5 = (longlong)param_2 + uVar2;
    do {
      if (uVar5 <= uVar2) {
        uVar5 = uVar2;
        break;
      }
      pbVar1 = (byte *)(uVar5 - 1);
      uVar5 = uVar5 - 1;
    } while ((*pbVar1 & 0xc0) == 0x80);
    uVar4 = (int)uVar5 - *(int *)(param_1 + 0x20);
    while ((-1 < (int)uVar4 && (iVar3 = FUN_1804195e0(param_1,uVar4), iVar3 == 0))) {
      if (uVar4 == 0) goto LAB_180419780;
      uVar2 = *(ulonglong *)(param_1 + 0x20);
      uVar5 = uVar4 + uVar2;
      do {
        if (uVar5 <= uVar2) {
          uVar5 = uVar2;
          break;
        }
        pbVar1 = (byte *)(uVar5 - 1);
        uVar5 = uVar5 - 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
      uVar4 = (int)uVar5 - *(int *)(param_1 + 0x20);
    }
  }
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== 1804197a0 FUN_1804197a0 ===== */

int FUN_1804197a0(longlong param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (param_2 < iVar2) {
    iVar8 = FUN_1803d7c80(local_res10,*(longlong *)(param_1 + 0x20) + (longlong)param_2,
                          *(longlong *)(param_1 + 0x20) + (longlong)iVar2);
    param_2 = param_2 + iVar8;
  }
  else {
    param_2 = iVar2 + 1;
  }
  iVar8 = param_2 - iVar2;
  if (param_2 < iVar2) {
    do {
      if (((*(uint *)(param_1 + 0x10) & 0x400) == 0) && (0 < param_2)) {
        uVar3 = *(ulonglong *)(param_1 + 0x20);
        uVar10 = (longlong)param_2 + uVar3;
        do {
          if (uVar10 <= uVar3) break;
          pbVar1 = (byte *)(uVar10 - 1);
          uVar10 = uVar10 - 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
        FUN_1803d7c80(local_res10,(longlong)param_2 + uVar3,
                      (longlong)*(int *)(param_1 + 0x18) + uVar3);
        FUN_1803d7c80(local_res8);
        if (((local_res10[0] == 0x20) || (local_res10[0] == 9)) || (local_res10[0] == 0x3000)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        piVar9 = &DAT_1808a9b70;
        do {
          if (local_res10[0] == *piVar9) {
            bVar6 = true;
            goto LAB_1804198a5;
          }
          piVar9 = piVar9 + 1;
        } while (piVar9 != (int *)&DAT_1808a9be4);
        bVar6 = false;
LAB_1804198a5:
        if (((local_res8[0] == 0x20) || (local_res8[0] == 9)) || (local_res8[0] == 0x3000)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        piVar9 = &DAT_1808a9b70;
        do {
          if (local_res8[0] == *piVar9) {
            bVar5 = true;
            goto LAB_1804198d7;
          }
          piVar9 = piVar9 + 1;
        } while (piVar9 != (int *)&DAT_1808a9be4);
        bVar5 = false;
LAB_1804198d7:
        if (bVar4) {
          if (!bVar5) {
            bVar6 = bVar7;
          }
        }
        else if (!bVar5) goto LAB_1804198ed;
        if (!bVar6) break;
      }
LAB_1804198ed:
      iVar8 = *(int *)(param_1 + 0x18);
      if (param_2 < iVar8) {
        iVar8 = FUN_1803d7c80(local_res18,(longlong)param_2 + *(longlong *)(param_1 + 0x20),
                              *(longlong *)(param_1 + 0x20) + (longlong)iVar8);
        param_2 = param_2 + iVar8;
      }
      else {
        param_2 = iVar8 + 1;
      }
    } while (param_2 < iVar2);
    iVar8 = param_2 - iVar2;
  }
  if (param_2 != iVar2 && SBORROW4(param_2,iVar2) == iVar8 < 0) {
    param_2 = iVar2;
  }
  return param_2;
}



/* ===== 180419940 FUN_180419940 ===== */

ulonglong FUN_180419940(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  if (*(char *)(*param_1 + 0x78) != '\0') {
    uVar3 = FUN_1804197a0(param_1,param_2);
    return uVar3;
  }
  iVar2 = (int)param_1[3];
  if (param_2 < iVar2) {
    iVar2 = FUN_1803d7c80(local_res8,param_1[4] + (longlong)param_2,param_1[4] + (longlong)iVar2);
    uVar4 = param_2 + iVar2;
  }
  else {
    uVar4 = iVar2 + 1;
  }
  uVar1 = *(uint *)(param_1 + 3);
  iVar2 = uVar4 - uVar1;
  if ((int)uVar4 < (int)uVar1) {
    do {
      iVar2 = FUN_1804195e0(param_1,uVar4);
      if (iVar2 != 0) break;
      iVar2 = (int)param_1[3];
      if ((int)uVar4 < iVar2) {
        iVar2 = FUN_1803d7c80(local_res8,(longlong)(int)uVar4 + param_1[4],
                              param_1[4] + (longlong)iVar2);
        uVar4 = uVar4 + iVar2;
      }
      else {
        uVar4 = iVar2 + 1;
      }
    } while ((int)uVar4 < (int)uVar1);
    iVar2 = uVar4 - uVar1;
  }
  if (uVar4 != uVar1 && SBORROW4(uVar4,uVar1) == iVar2 < 0) {
    uVar4 = uVar1;
  }
  return (ulonglong)uVar4;
}



/* ===== 1804199f0 FUN_1804199f0 ===== */

ulonglong FUN_1804199f0(longlong *param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  
  uVar12 = (ulonglong)param_3;
  if (*(char *)(param_2 + 0x17) != '\0') {
    return 0;
  }
  if (0.0 < *(float *)(param_1 + 0xd)) {
    lVar3 = *param_1;
    pcVar4 = (char *)param_1[4];
    pcVar2 = pcVar4 + uVar12;
    pcVar11 = pcVar2;
    do {
      pcVar6 = pcVar11;
      if (pcVar6 <= pcVar4) break;
      pcVar11 = pcVar6 + -1;
    } while (pcVar6[-1] != '\n');
    lVar7 = param_1[3];
    pcVar11 = pcVar6;
    do {
      pcVar8 = (char *)FUN_18040a0d0(*(undefined8 *)(lVar3 + 0x11f0),*(undefined4 *)(lVar3 + 0x1200)
                                     ,pcVar11,pcVar4 + (int)lVar7,(int)param_1[0xd],2);
      if (pcVar11 == pcVar2) {
LAB_180419b44:
        return (ulonglong)(uint)((int)pcVar6 - (int)param_1[4]);
      }
      if (pcVar8 == pcVar2) {
        if (*(char *)(uVar12 + param_1[6]) == '\n') goto LAB_180419b3d;
        if (*(char *)((longlong)param_1 + 0x77) == '\0') goto LAB_180419b44;
      }
      if (pcVar2 <= pcVar8) {
LAB_180419b3d:
        return (ulonglong)(uint)((int)pcVar11 - (int)param_1[4]);
      }
      pcVar11 = pcVar8 + 1;
      if (*pcVar8 != '\n') {
        pcVar11 = pcVar8;
      }
    } while (pcVar6 <= pcVar11);
  }
  if (0 < param_3) {
    uVar5 = param_1[4];
    do {
      uVar10 = (uVar12 & 0xffffffff) + uVar5;
      do {
        if (uVar10 <= uVar5) {
          uVar10 = uVar5;
          break;
        }
        pbVar1 = (byte *)(uVar10 - 1);
        uVar10 = uVar10 - 1;
      } while ((*pbVar1 & 0xc0) == 0x80);
      uVar9 = (int)uVar10 - (int)uVar5;
    } while ((*(char *)(uVar5 + (longlong)(int)uVar9) != '\n') &&
            (uVar12 = (ulonglong)uVar9, 0 < (int)uVar9));
  }
  return uVar12 & 0xffffffff;
}



/* ===== 180419b50 FUN_180419b50 ===== */

ulonglong FUN_180419b50(longlong *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  uVar1 = *(uint *)(param_1 + 3);
  uVar10 = (ulonglong)param_3;
  if (*(char *)(param_2 + 0x17) != '\0') {
    return (ulonglong)uVar1;
  }
  if (0.0 < *(float *)(param_1 + 0xd)) {
    pcVar2 = (char *)param_1[4];
    lVar3 = *param_1;
    pcVar7 = pcVar2 + uVar10;
    pcVar4 = pcVar7;
    do {
      pcVar6 = pcVar4;
      if (pcVar6 <= pcVar2) break;
      pcVar4 = pcVar6 + -1;
    } while (pcVar6[-1] != '\n');
    while (pcVar6 < pcVar2 + (int)uVar1) {
      pcVar6 = (char *)FUN_18040a0d0(*(undefined8 *)(lVar3 + 0x11f0),*(undefined4 *)(lVar3 + 0x1200)
                                     ,pcVar6,pcVar2 + (int)uVar1,(int)param_1[0xd],2);
      uVar10 = (ulonglong)(uint)((int)pcVar6 - (int)param_1[4]);
      if ((pcVar6 == pcVar7) && (*(char *)((longlong)param_1 + 0x77) != '\0')) break;
      if (pcVar7 < pcVar6) goto LAB_180419c50;
      if (*pcVar6 == '\n') {
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  uVar9 = (uint)uVar10;
  while ((int)uVar9 < (int)uVar1) {
    iVar8 = (int)uVar10;
    pcVar7 = (char *)((longlong)iVar8 + param_1[4]);
    if (*pcVar7 == '\n') break;
    iVar5 = (int)param_1[3];
    if (iVar8 < iVar5) {
      iVar5 = FUN_1803d7c80(local_res8,pcVar7,param_1[4] + (longlong)iVar5);
      uVar9 = iVar8 + iVar5;
    }
    else {
      uVar9 = iVar5 + 1;
    }
    uVar10 = (ulonglong)uVar9;
  }
LAB_180419c50:
  return uVar10 & 0xffffffff;
}



/* ===== 180419c70 FUN_180419c70 ===== */

int FUN_180419c70(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar7 = (longlong)(int)param_2;
  uVar6 = *(uint *)(param_1 + 0x10) & 0x400000;
  if ((uVar6 == 0) && (iVar5 = *(int *)(param_1 + 0x58) + ~uVar1, iVar5 < param_4)) {
    param_4 = FUN_1803d7ec0(param_3,param_4 + param_3,iVar5 + param_3);
    param_4 = param_4 - (int)param_3;
  }
  if (param_4 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x28) < (int)(uVar1 + 1 + param_4)) && (uVar6 != 0)) {
    iVar5 = param_4;
    if (param_4 < 0x20) {
      iVar5 = 0x20;
    }
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar5 = iVar5 + 1 + uVar1;
    if (iVar4 < iVar5) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      iVar3 = iVar5;
      if (iVar5 < iVar4) {
        iVar3 = iVar4;
      }
      FUN_1803f6920(param_1 + 0x28,iVar3);
    }
    *(int *)(param_1 + 0x28) = iVar5;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (param_2 != uVar1) {
    FUN_180540530(param_4 + lVar7 + lVar2,lVar7 + lVar2,(longlong)(int)(uVar1 - param_2));
  }
  FUN_180540530(lVar7 + lVar2,param_3,(longlong)param_4);
  iVar5 = *(int *)(param_1 + 0x18) + param_4;
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  *(int *)(param_1 + 0x18) = iVar5;
  *(undefined1 *)((longlong)iVar5 + *(longlong *)(param_1 + 0x30)) = 0;
  return param_4;
}



/* ===== 180419d90 FUN_180419d90 ===== */

int FUN_180419d90(longlong *param_1,float param_2,float param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  float local_res20;
  float local_res24;
  
  iVar8 = (int)param_1[3];
  *param_4 = 0;
  uVar3 = DAT_1808acd08;
  fVar10 = 0.0;
  iVar4 = 0;
  if (iVar8 < 1) {
LAB_180419ebc:
    *param_4 = 1;
  }
  else {
    while( true ) {
      lVar1 = *param_1;
      lVar2 = param_1[4];
      lVar5 = (int)param_1[3] + lVar2;
      local_res8 = 0;
      FUN_18040a2f0(&local_res20,*(undefined8 *)(lVar1 + 0x11f0),*(undefined4 *)(lVar1 + 0x1200),
                    uVar3,*(undefined4 *)(lVar1 + 0x2578),iVar4 + lVar2,lVar5,lVar5,&local_res8);
      iVar7 = (int)local_res8 - (int)lVar2;
      if (iVar7 - iVar4 < 1) {
        return iVar8;
      }
      if ((iVar4 == 0) && (param_3 < fVar10 + 0.0)) {
        return 0;
      }
      fVar10 = local_res24 + fVar10;
      if (param_3 < fVar10) break;
      iVar4 = iVar7;
      if (iVar8 <= iVar7) goto LAB_180419ebc;
    }
    if (iVar8 <= iVar4) goto LAB_180419ebc;
    if (param_2 < 0.0) {
      return iVar4;
    }
    if (local_res20 <= param_2) goto LAB_180419f72;
    iVar6 = 0;
    fVar10 = 0.0;
    while( true ) {
      fVar9 = (float)FUN_180419480(param_1,iVar4,iVar6);
      iVar8 = iVar4 + iVar6;
      if (param_2 < fVar9 + fVar10) break;
      iVar6 = (int)param_1[3];
      if (iVar8 < iVar6) {
        iVar6 = FUN_1803d7c80(&local_res8,(longlong)iVar8 + param_1[4],param_1[4] + (longlong)iVar6)
        ;
        iVar6 = iVar6 + iVar8;
      }
      else {
        iVar6 = iVar6 + 1;
      }
      iVar6 = iVar6 - iVar4;
      fVar10 = fVar9 + fVar10;
      if (iVar7 - iVar4 <= iVar6) {
LAB_180419f72:
        lVar1 = param_1[4];
        *param_4 = 1;
        if (*(char *)((longlong)iVar7 + -1 + lVar1) == '\n') {
          iVar7 = iVar7 + -1;
        }
        return iVar7;
      }
    }
    fVar9 = fVar9 * DAT_1808ac1f4;
    *param_4 = (uint)(iVar6 != 0);
    if (fVar9 + fVar10 <= param_2) {
      iVar4 = (int)param_1[3];
      if (iVar8 < iVar4) {
        iVar4 = FUN_1803d7c80(&local_res8,(longlong)iVar8 + param_1[4],param_1[4] + (longlong)iVar4)
        ;
        return iVar4 + iVar8;
      }
      return iVar4 + 1;
    }
  }
  return iVar8;
}



/* ===== 180419ff0 FUN_180419ff0 ===== */

void FUN_180419ff0(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_res8 [2];
  undefined1 local_38 [12];
  undefined4 local_2c;
  
  if (*(char *)((longlong)param_2 + 0x17) != '\0') {
    FUN_180419510(local_38,param_1,0);
    param_4 = local_2c;
  }
  uVar1 = FUN_180419d90(param_1,param_3,param_4,local_res8);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  *(bool *)(param_1 + 0x77) = local_res8[0] != 0;
  return;
}



/* ===== 18041a060 FUN_18041a060 ===== */

void FUN_18041a060(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_res8 [2];
  undefined1 local_38 [12];
  undefined4 local_2c;
  
  if (*(char *)((longlong)param_2 + 0x17) != '\0') {
    FUN_180419510(local_38,param_1,0);
    param_4 = local_2c;
  }
  if (param_2[1] == param_2[2]) {
    param_2[1] = *param_2;
  }
  uVar1 = FUN_180419d90(param_1,param_3,param_4,local_res8);
  param_2[2] = uVar1;
  *param_2 = uVar1;
  *(bool *)(param_1 + 0x77) = local_res8[0] != 0;
  return;
}



/* ===== 18041a0e0 FUN_18041a0e0 ===== */

void FUN_18041a0e0(float *param_1,longlong *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  fVar2 = *(float *)(param_2 + 3);
  if ((param_3 == fVar2) && (param_4 != 0)) {
    FUN_180419510(&local_68,param_2,0);
    param_1[1] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = fVar2;
    param_1[2] = local_58 - local_5c;
    *param_1 = local_64;
    return;
  }
  iVar7 = 0;
  param_1[1] = 0.0;
  FUN_180419510(&local_68,param_2,0);
  fVar9 = 0.0;
  fVar8 = 0.0;
  fVar1 = local_54;
  while( true ) {
    fVar6 = fVar9;
    if ((((int)param_3 < (int)fVar1) ||
        ((((*(char *)((longlong)param_2 + 0x77) == '\x01' && (0 < *(int *)param_2[1])) &&
          (*(int *)param_2[1] == (int)local_54 + (int)fVar6)) &&
         (*(char *)(param_2[4] + -1 + (longlong)((int)local_54 + (int)fVar6)) != '\n')))) ||
       (((fVar9 = (float)((int)local_54 + (int)fVar6), fVar9 == fVar2 && (0 < (int)fVar2)) &&
        (*(char *)(param_2[4] + -1 + (longlong)(int)fVar2) != '\n')))) goto LAB_18041a1f6;
    param_1[1] = local_60 + param_1[1];
    fVar8 = fVar6;
    if (fVar9 == fVar2) break;
    FUN_180419510(&local_68,param_2);
    fVar1 = (float)((int)local_54 + (int)fVar9);
  }
  local_54 = 0.0;
  fVar6 = fVar9;
LAB_18041a1f6:
  param_1[3] = fVar6;
  param_1[4] = local_54;
  param_1[5] = fVar8;
  param_1[2] = local_58 - local_5c;
  *param_1 = local_68;
  fVar2 = DAT_1808acda0;
  if ((int)fVar6 < (int)param_3) {
    do {
      FUN_1803d7c80(local_res18,(longlong)iVar7 + (longlong)(int)fVar6 + param_2[4],
                    (longlong)(int)param_2[3] + param_2[4]);
      if ((short)local_res18[0] == 10) {
        fVar9 = fVar2;
      }
      else {
        lVar3 = *param_2;
        piVar4 = *(int **)(lVar3 + 0x11f8);
        if ((*piVar4 <= (int)(local_res18[0] & 0xffff)) ||
           (fVar9 = *(float *)(*(longlong *)(piVar4 + 2) + ((ulonglong)local_res18[0] & 0xffff) * 4)
           , fVar9 < 0.0)) {
          fVar9 = (float)FUN_1804083d0(piVar4);
        }
        fVar9 = fVar9 * *(float *)(lVar3 + 0x1208);
      }
      iVar7 = (int)fVar6 + iVar7;
      *param_1 = fVar9 + *param_1;
      iVar5 = (int)param_2[3];
      if (iVar7 < iVar5) {
        iVar5 = FUN_1803d7c80(local_res10,(longlong)iVar7 + param_2[4],param_2[4] + (longlong)iVar5)
        ;
        iVar5 = iVar5 + iVar7;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar7 = iVar5 - (int)fVar6;
    } while (iVar5 < (int)param_3);
  }
  return;
}



/* ===== 18041a320 FUN_18041a320 ===== */

void FUN_18041a320(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar5 = (longlong)(int)param_4;
  uVar3 = FUN_18041b260(param_2 + 0x20,param_3,param_4,0);
  if ((uVar3 != 0) && (0 < (int)param_4)) {
    iVar7 = 0;
    if (0xf < param_4) {
      uVar6 = lVar5 + -1 + uVar3;
      uVar1 = *(longlong *)(param_1 + 0x20) + (longlong)param_3;
      if ((((ulonglong)((longlong)(int)(param_3 + -1 + param_4) + *(longlong *)(param_1 + 0x20)) <
            uVar3) || (uVar6 < uVar1)) && ((param_1 + 0x20U < uVar3 || (uVar6 < param_1 + 0x20U))))
      {
        FUN_180540530(uVar3,uVar1,lVar5);
        goto LAB_18041a3c5;
      }
    }
    do {
      iVar2 = iVar7 + param_3;
      lVar4 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      *(undefined1 *)(uVar3 + lVar4) =
           *(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    } while (iVar7 < (int)param_4);
  }
LAB_18041a3c5:
  lVar4 = (longlong)param_3 + *(longlong *)(param_1 + 0x30);
  FUN_180540530(lVar4,lVar4 + lVar5,
                (longlong)(int)(((*(int *)(param_1 + 0x18) - param_3) - param_4) + 1));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_4;
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  *(undefined1 *)(param_2 + 0x16) = 0;
  return;
}



