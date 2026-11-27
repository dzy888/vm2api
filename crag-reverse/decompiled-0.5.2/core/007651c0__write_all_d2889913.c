// 007651c0 write_all

/* <alloc[12e961f32105355]::vec::Vec<u8> as std[6c98fd8553dbae28]::io::Write>::write_all */

undefined8 __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_std[6c98fd8553dbae28]::io::Write>::write_all
          (longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < param_3) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_007651f5;
  (*(code *)PTR_memcpy_00799008)();
LAB_007651f5:
  param_1[2] = lVar1 + param_3;
  return 0;
}


