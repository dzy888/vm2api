// 006e9fa6 <core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>,core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>>

/* core[c0acaeba6ab4c2e0]::panicking::assert_failed::<core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>,
   core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>> */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::assert_failed::
<core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>,core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_8;
  
  local_8 = param_3;
  (*(code *)PTR_assert_failed_inner_0079a0b0)(&local_8,&DAT_007940d0,&DAT_007940d0,param_4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


