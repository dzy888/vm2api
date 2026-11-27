// 006d8100 nanosecond

/* chrono[1cd233408897ab2f]::format::scan::nanosecond */

char * __rustcall
chrono[1cd233408897ab2f]::format::scan::nanosecond(char *param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  longlong lVar2;
  byte *pbVar3;
  char cVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  
  if (param_3 == (char *)0x0) {
    cVar4 = '\x04';
  }
  else {
    bVar8 = *param_2 - 0x30;
    cVar4 = '\x03';
    if (bVar8 < 10) {
      uVar5 = (ulonglong)bVar8;
      pcVar7 = param_3;
      pcVar6 = param_2;
      if (param_3 == (char *)0x1) {
LAB_006d8122:
        pcVar11 = param_3;
      }
      else {
        pcVar11 = (char *)0x1;
        if (9 < (byte)(param_2[1] - 0x30U)) goto LAB_006d828f;
        uVar13 = (uint)(byte)(param_2[1] - 0x30U) + (uint)bVar8 * 10;
        uVar5 = (ulonglong)uVar13;
        if (param_3 == (char *)0x2) goto LAB_006d8122;
        pcVar11 = (char *)0x2;
        if (9 < (byte)(param_2[2] - 0x30U)) goto LAB_006d828f;
        uVar13 = (uint)(byte)(param_2[2] - 0x30U) + uVar13 * 10;
        uVar5 = (ulonglong)uVar13;
        if (param_3 == (char *)0x3) goto LAB_006d8122;
        pcVar11 = (char *)0x3;
        if (9 < (byte)(param_2[3] - 0x30U)) goto LAB_006d828f;
        uVar13 = (uint)(byte)(param_2[3] - 0x30U) + uVar13 * 10;
        uVar5 = (ulonglong)uVar13;
        if (param_3 == &DAT_00000004) goto LAB_006d8122;
        pcVar11 = &DAT_00000004;
        if (9 < (byte)(param_2[4] - 0x30U)) goto LAB_006d828f;
        uVar13 = (uint)(byte)(param_2[4] - 0x30U) + uVar13 * 10;
        uVar5 = (ulonglong)uVar13;
        if (param_3 == &DAT_00000005) goto LAB_006d8122;
        pcVar11 = &DAT_00000005;
        if (9 < (byte)(param_2[5] - 0x30U)) goto LAB_006d828f;
        uVar13 = (uint)(byte)(param_2[5] - 0x30U) + uVar13 * 10;
        uVar5 = (ulonglong)uVar13;
        if (param_3 == &DAT_00000006) goto LAB_006d8122;
        pcVar11 = &DAT_00000006;
        if (9 < (byte)(param_2[6] - 0x30U)) goto LAB_006d828f;
        uVar13 = (uint)(byte)(param_2[6] - 0x30U) + uVar13 * 10;
        uVar5 = (ulonglong)uVar13;
        if (param_3 == &DAT_00000007) goto LAB_006d8122;
        pcVar11 = &DAT_00000007;
        if (9 < (byte)(param_2[7] - 0x30U)) goto LAB_006d828f;
        uVar13 = (uint)(byte)(param_2[7] - 0x30U) + uVar13 * 10;
        uVar5 = (ulonglong)uVar13;
        if (param_3 == &DAT_00000008) goto LAB_006d8122;
        pcVar11 = &DAT_00000008;
        if ((byte)(param_2[8] - 0x30U) < 10) {
          uVar5 = (ulonglong)((uint)(byte)(param_2[8] - 0x30U) + uVar13 * 10);
          pcVar11 = &DAT_00000009;
          if ((param_3 < (char *)0xa) || (-0x41 < param_2[9])) goto LAB_006d82a3;
          uVar5 = (*(code *)PTR_slice_error_fail_00799408)
                            (param_3,9,
                             &anon_e878a4a268567b5885bbc952a99f233f_21_llvm_2373342996317456824);
          pcVar6 = param_3;
          param_1 = param_2;
        }
LAB_006d828f:
        if ((pcVar7 <= pcVar11) || (pcVar6[(longlong)pcVar11] < -0x40)) {
          (*(code *)PTR_slice_error_fail_00799408)();
          pcVar1 = (code *)swi(3);
          pcVar6 = (char *)(*pcVar1)();
          return pcVar6;
        }
      }
LAB_006d82a3:
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)*(uint *)(&DAT_001b6084 + (longlong)pcVar11 * 4);
      if ((int)((ulonglong)lVar2 >> 0x20) == 0) {
        pbVar3 = (byte *)0x0;
        pbVar12 = (byte *)(pcVar6 + (longlong)pcVar11);
        do {
          pbVar10 = pbVar3;
          if (pbVar12 == (byte *)(pcVar6 + (longlong)pcVar7)) {
            pbVar10 = (byte *)(pcVar7 + -(longlong)pcVar11);
            break;
          }
          bVar8 = *pbVar12;
          uVar13 = (uint)bVar8;
          if ((char)bVar8 < '\0') {
            if (bVar8 < 0xe0) {
              pbVar14 = pbVar12 + 2;
              uVar13 = (uVar13 & 0x1f) << 6 | pbVar12[1] & 0x3f;
            }
            else {
              uVar9 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
              if (bVar8 < 0xf0) {
                pbVar14 = pbVar12 + 3;
                uVar13 = uVar9 | (uVar13 & 0x1f) << 0xc;
              }
              else {
                pbVar14 = pbVar12 + 4;
                uVar13 = pbVar12[3] & 0x3f | uVar9 << 6 | (uVar13 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar14 = pbVar12 + 1;
          }
          pbVar3 = pbVar14 + ((longlong)pbVar10 - (longlong)pbVar12);
          pbVar12 = pbVar14;
        } while (0xfffffff5 < uVar13 - 0x3a);
        *(char **)param_1 = pcVar6 + (longlong)pcVar11 + (longlong)pbVar10;
        *(longlong *)(param_1 + 8) = (longlong)(pcVar7 + -(longlong)pcVar11) - (longlong)pbVar10;
        *(int *)(param_1 + 0x10) = (int)lVar2;
        return param_1;
      }
      param_1[8] = '\0';
      goto LAB_006d812f;
    }
  }
  param_1[8] = cVar4;
LAB_006d812f:
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  return param_1;
}


