// 00614480 push_mut

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>::push_mut
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>::
push_mut(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>
    ::grow_one(param_1);
  }
  (*(code *)PTR_memcpy_00799008)(param_4,0x90);
  param_1[2] = lVar1 + 1;
  return;
}


