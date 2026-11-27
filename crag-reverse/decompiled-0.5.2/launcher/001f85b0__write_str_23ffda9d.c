// 001f85b0 write_str

/* <std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<alloc[12e961f32105355]::vec::Vec<u8>> as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

undefined8 __rustcall
<std[6c98fd8553dbae28]::io::default_write_fmt::Adapter<alloc[12e961f32105355]::vec::Vec<u8>>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_str(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  param_1 = (longlong *)*param_1;
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < param_3) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_001f85e5;
  (*(code *)PTR_memcpy_00219c60)();
LAB_001f85e5:
  param_1[2] = lVar1 + param_3;
  return 0;
}


