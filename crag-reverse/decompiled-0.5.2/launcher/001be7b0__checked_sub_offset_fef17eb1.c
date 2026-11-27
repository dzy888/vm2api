// 001be7b0 checked_sub_offset

/* <chrono[1cd233408897ab2f]::naive::datetime::NaiveDateTime>::checked_sub_offset */

void __rustcall
<chrono[1cd233408897ab2f]::naive::datetime::NaiveDateTime>::checked_sub_offset
          (uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = *param_2;
  param_3 = param_2[1] - param_3;
  iVar5 = param_3 / 0x15180 - param_3 / -0x57400000;
  param_3 = param_3 + iVar5 * -0x15180;
  uVar4 = param_3 >> 0x1f;
  iVar5 = iVar5 + uVar4;
  uVar1 = param_2[2];
  iVar2 = (int)uVar3 >> 0xd;
  if (iVar5 == 1) {
    if ((uVar3 & 0x1ff8) < 0x16d1) {
      uVar3 = uVar3 & 0xffffe007 | (uVar3 & 0x1ff8) + 0x10;
    }
    else {
      if (iVar2 - 0x3fffeU < 0xfff80002) goto LAB_001be8e4;
      iVar5 = (iVar2 + 1) % 400;
      uVar3 = (iVar2 + 1) * 0x2000 |
              (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                          [(iVar5 >> 0x1f & 400U) + iVar5] | 0x10;
    }
  }
  else if (iVar5 == -1) {
    if ((uVar3 & 0x1ff0) < 0x11) {
      if (-0x3ffff < iVar2) {
        iVar5 = iVar2 + ((iVar2 + -1) / 400) * -400 + -1;
        if (""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                      [(iVar5 >> 0x1f & 400U) + iVar5] | 0x19f0) >> 3] != 0) {
          uVar3 = ((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                         [(iVar5 >> 0x1f & 400U) + iVar5] | 0x19f0) +
                  ""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                            [(iVar5 >> 0x1f & 400U) + iVar5] | 0x19f0) >> 3] * -8 |
                  (iVar2 + -1) * 0x2000;
          goto LAB_001be938;
        }
      }
LAB_001be8e4:
      *param_1 = 0;
      return;
    }
    uVar3 = uVar3 & 0xffffe00f | (uVar3 & 0x1ff0) - 0x10;
  }
LAB_001be938:
  *param_1 = uVar3;
  param_1[1] = (uVar4 & 0x15180) + param_3;
  param_1[2] = uVar1;
  return;
}


