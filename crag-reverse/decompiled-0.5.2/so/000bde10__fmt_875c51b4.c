// 000bde10 fmt

/* <isize as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
   <i64 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall <isize_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(longlong *param_1)

{
  longlong lVar1;
  undefined1 local_34 [20];
  
  lVar1 = -*param_1;
  if (lVar1 < 0) {
    lVar1 = *param_1;
  }
  lVar1 = <u64>::_fmt_inner(lVar1,local_34,0x14);
  (*(code *)PTR_pad_integral_000c4770)(0,1,local_34 + lVar1,0x14 - lVar1);
  return;
}


