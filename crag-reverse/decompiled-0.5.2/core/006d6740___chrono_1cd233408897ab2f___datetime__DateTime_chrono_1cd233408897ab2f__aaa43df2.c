// 006d6740 <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>,<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset_as_chrono[1cd233408897ab2f]::offset::TimeZone>::from_local_datetime::{closure#0}>

/* <chrono[1cd233408897ab2f]::offset::LocalResult<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>>::and_then::<chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>,
   <chrono[1cd233408897ab2f]::offset::fixed::FixedOffset as
   chrono[1cd233408897ab2f]::offset::TimeZone>::from_local_datetime::{closure#0}> */

void __rustcall
<chrono[1cd233408897ab2f]::offset::LocalResult<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>>
::and_then::
<chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset>,<chrono[1cd233408897ab2f]::offset::fixed::FixedOffset_as_chrono[1cd233408897ab2f]::offset::TimeZone>::from_local_datetime::_closure_0_>
          (int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    iVar4 = param_2[1];
    uVar6 = *param_3;
    iVar14 = param_3[1] - iVar4;
    iVar16 = iVar14 / 0x15180 - iVar14 / -0x57400000;
    iVar14 = iVar14 + iVar16 * -0x15180;
    uVar7 = iVar14 >> 0x1f;
    iVar16 = iVar16 + uVar7;
    iVar14 = (uVar7 & 0x15180) + iVar14;
    uVar7 = param_3[2];
    lVar9 = 0x10;
    lVar11 = 0xc;
    lVar13 = 8;
    lVar3 = 4;
    iVar5 = (int)uVar6 >> 0xd;
    if (iVar16 == 1) {
      if ((uVar6 & 0x1ff8) < 0x16d1) {
        uVar6 = uVar6 & 0xffffe007 | (uVar6 & 0x1ff8) + 0x10;
      }
      else {
        iVar16 = 2;
        if (iVar5 - 0x3fffeU < 0xfff80002) goto LAB_006d6c20;
        iVar16 = (iVar5 + 1) % 400;
        uVar6 = (iVar5 + 1) * 0x2000 |
                (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                            [(iVar16 >> 0x1f & 400U) + iVar16] | 0x10;
      }
    }
    else if (iVar16 == -1) {
      if ((uVar6 & 0x1ff0) < 0x11) {
        iVar16 = 2;
        if (iVar5 < -0x3fffe) goto LAB_006d6c20;
        iVar15 = iVar5 + ((iVar5 + -1) / 400) * -400 + -1;
        if (""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                      [(iVar15 >> 0x1f & 400U) + iVar15] | 0x19f0) >> 3] == 0) goto LAB_006d6c20;
        uVar6 = ((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                       [(iVar15 >> 0x1f & 400U) + iVar15] | 0x19f0) +
                ""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                          [(iVar15 >> 0x1f & 400U) + iVar15] | 0x19f0) >> 3] * -8 |
                (iVar5 + -1) * 0x2000;
      }
      else {
        uVar6 = uVar6 & 0xffffe00f | (uVar6 & 0x1ff0) - 0x10;
      }
    }
LAB_006d6c0f:
    *(uint *)((longlong)param_1 + lVar3) = uVar6;
    *(int *)((longlong)param_1 + lVar13) = iVar14;
    *(uint *)((longlong)param_1 + lVar11) = uVar7;
    *(int *)((longlong)param_1 + lVar9) = iVar4;
  }
  else if (iVar1 == 1) {
    iVar5 = param_2[1];
    iVar4 = param_2[2];
    uVar6 = *param_3;
    iVar10 = param_3[1] - iVar5;
    iVar14 = iVar10 / 0x15180 - iVar10 / -0x57400000;
    iVar10 = iVar10 + iVar14 * -0x15180;
    uVar12 = iVar10 >> 0x1f;
    iVar14 = iVar14 + uVar12;
    iVar15 = (int)uVar6 >> 0xd;
    if (iVar14 == 1) {
      if ((uVar6 & 0x1ff8) < 0x16d1) {
        uVar2 = uVar6 & 0xffffe007 | (uVar6 & 0x1ff8) + 0x10;
      }
      else {
        uVar2 = 0;
        if (0xfff80001 < iVar15 - 0x3fffeU) {
          iVar14 = (iVar15 + 1) % 400;
          uVar2 = (iVar15 + 1) * 0x2000 |
                  (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                              [(iVar14 >> 0x1f & 400U) + iVar14] | 0x10;
        }
      }
    }
    else {
      uVar2 = uVar6;
      if (iVar14 == -1) {
        if ((uVar6 & 0x1ff0) < 0x11) {
          uVar2 = 0;
          if (-0x3ffff < iVar15) {
            iVar14 = iVar15 + ((iVar15 + -1) / 400) * -400 + -1;
            if (""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                          [(iVar14 >> 0x1f & 400U) + iVar14] | 0x19f0) >> 3] != 0) {
              uVar2 = ((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                             [(iVar14 >> 0x1f & 400U) + iVar14] | 0x19f0) +
                      ""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                                [(iVar14 >> 0x1f & 400U) + iVar14] | 0x19f0) >> 3] * -8 |
                      (iVar15 + -1) * 0x2000;
            }
          }
        }
        else {
          uVar2 = uVar6 & 0xffffe00f | (uVar6 & 0x1ff0) - 0x10;
        }
      }
    }
    uVar7 = param_3[2];
    iVar14 = param_3[1] - iVar4;
    iVar16 = iVar14 / 0x15180 - iVar14 / -0x57400000;
    iVar14 = iVar14 + iVar16 * -0x15180;
    uVar8 = iVar14 >> 0x1f;
    iVar16 = iVar16 + uVar8;
    if (iVar16 == 1) {
      if ((uVar6 & 0x1ff8) < 0x16d1) {
        uVar6 = uVar6 & 0xffffe007 | (uVar6 & 0x1ff8) + 0x10;
      }
      else {
        iVar16 = 2;
        if (iVar15 - 0x3fffeU < 0xfff80002) goto LAB_006d6c20;
        iVar16 = (iVar15 + 1) % 400;
        uVar6 = (iVar15 + 1) * 0x2000 |
                (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                            [(iVar16 >> 0x1f & 400U) + iVar16] | 0x10;
      }
    }
    else if (iVar16 == -1) {
      if ((uVar6 & 0x1ff0) < 0x11) {
        iVar16 = 2;
        if (iVar15 < -0x3fffe) goto LAB_006d6c20;
        iVar17 = iVar15 + ((iVar15 + -1) / 400) * -400 + -1;
        if (""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                      [(iVar17 >> 0x1f & 400U) + iVar17] | 0x19f0) >> 3] == 0) goto LAB_006d6c20;
        uVar6 = ((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                       [(iVar17 >> 0x1f & 400U) + iVar17] | 0x19f0) +
                ""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                          [(iVar17 >> 0x1f & 400U) + iVar17] | 0x19f0) >> 3] * -8 |
                (iVar15 + -1) * 0x2000;
      }
      else {
        uVar6 = uVar6 & 0xffffe00f | (uVar6 & 0x1ff0) - 0x10;
      }
    }
    if (uVar2 == 0) {
      iVar16 = 2;
      goto LAB_006d6c20;
    }
    iVar14 = (uVar8 & 0x15180) + iVar14;
    param_1[1] = uVar2;
    param_1[2] = (uVar12 & 0x15180) + iVar10;
    param_1[3] = uVar7;
    param_1[4] = iVar5;
    lVar9 = 0x20;
    lVar11 = 0x1c;
    lVar13 = 0x18;
    lVar3 = 0x14;
    goto LAB_006d6c0f;
  }
  iVar16 = iVar1;
LAB_006d6c20:
  *param_1 = iVar16;
  return;
}


