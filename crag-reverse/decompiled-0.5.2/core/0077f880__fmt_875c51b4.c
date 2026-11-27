// 0077f880 fmt

/* <u128 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall <u128_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 local_3f [39];
  
  lVar1 = <u128>::_fmt_inner(*param_1,param_1[1],local_3f,0x27);
  (*(code *)PTR_pad_integral_0079b388)(0,1,local_3f + lVar1,0x27 - lVar1);
  return;
}


