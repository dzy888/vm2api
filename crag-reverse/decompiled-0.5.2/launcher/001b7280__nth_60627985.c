// 001b7280 nth

/* <core[c0acaeba6ab4c2e0]::iter::adapters::rev::Rev<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,
   <curve25519_dalek[8828c522c30c513]::scalar::Scalar>::bits_le::{closure#0}>> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::nth */

undefined1 __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::rev::Rev<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<curve25519_dalek[8828c522c30c513]::scalar::Scalar>::bits_le::{closure#0}>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::nth(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  uVar2 = param_1[2];
  lVar5 = 0;
  uVar6 = 2;
  uVar1 = uVar2;
  while( true ) {
    uVar4 = uVar1;
    if (uVar4 <= (ulonglong)param_1[1]) {
      return 2;
    }
    uVar1 = uVar4 - 1;
    param_1[2] = uVar1;
    if (0x100 < uVar4) break;
    lVar5 = lVar5 + 1;
    if (param_2 == lVar5) {
      if ((ulonglong)param_1[1] < uVar1) {
        param_1[2] = uVar4 - 2;
        uVar6 = (*(byte *)(*param_1 + (uVar4 - 2 >> 3)) >>
                 ((uint)(byte)((char)uVar2 - 1) - (int)lVar5 & 7) & 1) != 0;
      }
      return uVar6;
    }
  }
  (*(code *)PTR_panic_bounds_check_0021a020)
            (uVar4 - 1 >> 3,&PTR_s__vendor_curve25519_dalek_4_1_3_s_00216da8);
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return uVar6;
}


