// 006d7da0 <chrono[1cd233408897ab2f]::format::parse::parse_rfc3339::{closure#0}>

/* chrono[1cd233408897ab2f]::format::scan::timezone_offset::<chrono[1cd233408897ab2f]::format::parse::parse_rfc3339::{closure#0}>
    */

byte * __rustcall
chrono[1cd233408897ab2f]::format::scan::timezone_offset::
<chrono[1cd233408897ab2f]::format::parse::parse_rfc3339::_closure_0_>
          (byte *param_1,byte *param_2,byte *param_3,byte param_4,char param_5,byte *param_6)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined **ppuVar11;
  uint uVar12;
  
  pbVar6 = param_3;
  if ((param_3 != (byte *)0x0 & param_4) == 0) {
    if (param_3 != (byte *)0x0) {
      bVar4 = *param_2;
      goto LAB_006d7def;
    }
    goto LAB_006d7ffe;
  }
  bVar4 = *param_2;
  if ((bVar4 | 0x20) == 0x7a) {
    if ((param_3 < (byte *)0x2) || (-0x41 < (char)param_2[1])) {
      *(byte **)param_1 = param_2 + 1;
      *(byte **)(param_1 + 8) = param_3 + -1;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      return param_1;
    }
    ppuVar11 = &PTR_anon_e878a4a268567b5885bbc952a99f233f_0_llvm_2373342996317456824_00793480;
LAB_006d8093:
    (*(code *)PTR_slice_error_fail_00799408)(pbVar6,1,ppuVar11);
LAB_006d80a7:
    (*(code *)PTR_slice_error_fail_00799408)();
LAB_006d80bf:
    (*(code *)PTR_slice_error_fail_00799408)
              (param_6,1,&anon_e878a4a268567b5885bbc952a99f233f_20_llvm_2373342996317456824);
LAB_006d80de:
    (*(code *)PTR_slice_error_fail_00799408)
              (param_6,2,
               &PTR_anon_e878a4a268567b5885bbc952a99f233f_0_llvm_2373342996317456824_007934f8);
    pcVar1 = (code *)swi(3);
    pbVar6 = (byte *)(*pcVar1)();
    return pbVar6;
  }
LAB_006d7def:
  uVar12 = (uint)bVar4;
  pbVar9 = param_2;
  if (-1 < (char)bVar4) {
joined_r0x006d7df9:
    if (uVar12 == 0x2b) goto LAB_006d7ed3;
LAB_006d7e59:
    if (uVar12 == 0x2d) {
LAB_006d7ea1:
      bVar2 = true;
      if ((pbVar6 != (byte *)0x1) && ((char)pbVar9[1] < -0x40)) {
        ppuVar11 = &PTR_anon_e878a4a268567b5885bbc952a99f233f_0_llvm_2373342996317456824_007934b0;
        goto LAB_006d8093;
      }
      goto LAB_006d7f06;
    }
    if ((uVar12 == 0x2212) && ((char)param_6 != '\0')) {
      if (param_3 < &DAT_00000004) {
        if (param_3 != (byte *)0x3) goto LAB_006d7e86;
      }
      else if ((char)param_2[3] < -0x40) {
LAB_006d7e86:
        param_5 = -0x38;
        pbVar6 = (byte *)0x3;
        (*(code *)PTR_slice_error_fail_00799408)();
        pbVar9 = param_3;
        param_1 = param_2;
        goto LAB_006d7ea1;
      }
      bVar2 = true;
      lVar5 = 3;
      pbVar6 = param_3 + -3;
      goto joined_r0x006d7fd6;
    }
LAB_006d806e:
    param_1[8] = 3;
    goto LAB_006d8072;
  }
  bVar3 = bVar4 & 0x1f;
  if (bVar4 < 0xe0) {
    uVar12 = (uint)bVar3 << 6 | param_2[1] & 0x3f;
  }
  else {
    uVar12 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
    if (0xef < bVar4) {
      uVar12 = (bVar3 & 7) << 0x12 | param_2[3] & 0x3f | uVar12 << 6;
      goto joined_r0x006d7df9;
    }
    uVar12 = (uint)bVar3 << 0xc | uVar12;
  }
  if (uVar12 != 0x2b) goto LAB_006d7e59;
LAB_006d7ed3:
  if (param_3 == (byte *)0x1) {
    bVar4 = 4;
  }
  else {
    if ((char)param_2[1] < -0x40) {
      ppuVar11 = &PTR_anon_e878a4a268567b5885bbc952a99f233f_0_llvm_2373342996317456824_00793498;
      goto LAB_006d8093;
    }
    bVar2 = false;
LAB_006d7f06:
    lVar5 = 1;
    pbVar6 = pbVar6 + -1;
joined_r0x006d7fd6:
    bVar4 = 4;
    if ((byte *)0x1 < pbVar6) {
      pbVar9 = pbVar9 + lVar5;
      bVar4 = 3;
      if ((byte)(pbVar9[1] - 0x30) < 10 && (byte)(*pbVar9 - 0x30) < 10) {
        bVar4 = 4;
        if (pbVar6 != (byte *)0x2) {
          bVar3 = pbVar9[2];
          param_6 = (byte *)(ulonglong)bVar3;
          if ((char)bVar3 < -0x40) goto LAB_006d80a7;
          bVar4 = 3;
          if (bVar3 == 0x3a) {
            param_6 = pbVar6 + -2;
            pbVar10 = pbVar9 + 3;
            if (param_6 == (byte *)0x1) {
              if (param_5 != '\0') {
                iVar7 = 0;
                pbVar6 = (byte *)0x0;
LAB_006d7f7b:
                iVar7 = (uint)(byte)((pbVar9[1] + *pbVar9 * '\n') - 0x10) * 0xe10 + iVar7;
                iVar8 = -iVar7;
                if (!bVar2) {
                  iVar8 = iVar7;
                }
                *(byte **)param_1 = pbVar10;
                *(byte **)(param_1 + 8) = pbVar6;
                *(int *)(param_1 + 0x10) = iVar8;
                return param_1;
              }
            }
            else {
              bVar4 = *pbVar10;
              if ((char)bVar4 < -0x40) goto LAB_006d80bf;
              param_6 = pbVar6 + -3;
              if ((byte *)0x1 < param_6) {
                bVar3 = pbVar9[4];
                if ((byte)(bVar4 - 0x30) < 6) {
                  if ((byte)(bVar3 - 0x30) < 10) {
                    if ((param_6 == (byte *)0x2) || (-0x41 < (char)pbVar9[5])) {
                      iVar7 = (uint)(byte)((bVar4 * '\n' + bVar3) - 0x10) * 0x3c;
                      pbVar6 = pbVar6 + -5;
                      pbVar10 = pbVar9 + 5;
                      goto LAB_006d7f7b;
                    }
                    goto LAB_006d80de;
                  }
                }
                else if ((byte)(bVar4 - 0x36) < 4 && (byte)(bVar3 - 0x30) < 10) {
                  param_1[8] = 0;
                  goto LAB_006d8072;
                }
                goto LAB_006d806e;
              }
            }
LAB_006d7ffe:
            param_1[8] = 4;
            goto LAB_006d8072;
          }
        }
        param_1[8] = bVar4;
        goto LAB_006d8072;
      }
    }
  }
  param_1[8] = bVar4;
LAB_006d8072:
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}


