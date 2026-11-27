// 00782020 fmt

/* <u64 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
   <usize as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall <u64_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 local_2c [20];
  
  lVar1 = <u64>::_fmt_inner(*param_1,local_2c,0x14);
  (*(code *)PTR_pad_integral_0079b388)(0,1,local_2c + lVar1,0x14 - lVar1);
  return;
}


