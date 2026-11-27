// 001be950 overflowing_add_offset

/* <chrono[1cd233408897ab2f]::naive::datetime::NaiveDateTime>::overflowing_add_offset */

void __rustcall
<chrono[1cd233408897ab2f]::naive::datetime::NaiveDateTime>::overflowing_add_offset
          (uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  param_3 = param_3 + param_2[1];
  iVar5 = param_3 / 0x15180 - param_3 / -0x57400000;
  param_3 = param_3 + iVar5 * -0x15180;
  uVar2 = param_3 >> 0x1f;
  iVar5 = iVar5 + uVar2;
  uVar4 = *param_2;
  uVar1 = param_2[2];
  iVar3 = (int)uVar4 >> 0xd;
  if (iVar5 == 1) {
    if (0x16d0 < (uVar4 & 0x1ff8)) {
      uVar4 = 0x7fffe01f;
      if (0xfff80001 < iVar3 - 0x3fffeU) {
        iVar5 = (iVar3 + 1) % 400;
        uVar4 = (iVar3 + 1) * 0x2000 |
                (uint)(byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                            [(iVar5 >> 0x1f & 400U) + iVar5] | 0x10;
      }
      goto LAB_001be9d9;
    }
    uVar6 = (uVar4 & 0x1ff8) + 0x10;
    uVar4 = uVar4 & 0xffffe007;
  }
  else {
    if (iVar5 != -1) goto LAB_001be9d9;
    if ((uVar4 & 0x1ff0) < 0x11) {
      uVar4 = 0x800016e7;
      if (-0x3ffff < iVar3) {
        iVar5 = iVar3 + ((iVar3 + -1) / 400) * -400 + -1;
        if (""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                      [(iVar5 >> 0x1f & 400U) + iVar5] | 0x19f0) >> 3] != 0) {
          uVar4 = ((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                         [(iVar5 >> 0x1f & 400U) + iVar5] | 0x19f0) +
                  ""[((byte)anon_d722e35c9b1b1d1c2314433ae8498633_12_llvm_2013973091214785171
                            [(iVar5 >> 0x1f & 400U) + iVar5] | 0x19f0) >> 3] * -8 |
                  (iVar3 + -1) * 0x2000;
        }
      }
      goto LAB_001be9d9;
    }
    uVar6 = (uVar4 & 0x1ff0) - 0x10;
    uVar4 = uVar4 & 0xffffe00f;
  }
  uVar4 = uVar4 | uVar6;
LAB_001be9d9:
  *param_1 = uVar4;
  param_1[1] = (uVar2 & 0x15180) + param_3;
  param_1[2] = uVar1;
  return;
}


