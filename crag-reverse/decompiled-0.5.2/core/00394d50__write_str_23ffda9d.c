// 00394d50 write_str

/* <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

undefined8 __rustcall
<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Write>::write_str
          (longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < param_3) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00394d82;
  (*(code *)PTR_memcpy_00799008)();
LAB_00394d82:
  param_1[2] = lVar1 + param_3;
  return 0;
}


