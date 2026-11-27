// 006f0dd0 fmt

/* <&core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64> as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
    */

void __rustcall
<&core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    (*(code *)PTR_fmt_0079a138)();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
    (*(code *)PTR_fmt_007991f8)();
    return;
  }
  (*(code *)PTR_fmt_0079a140)();
  return;
}


