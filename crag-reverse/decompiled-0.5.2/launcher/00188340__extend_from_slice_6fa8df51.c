// 00188340 extend_from_slice

/* <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice
          (longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < param_3) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00188372;
  (*(code *)PTR_memcpy_00219c60)();
LAB_00188372:
  param_1[2] = lVar1 + param_3;
  return;
}


