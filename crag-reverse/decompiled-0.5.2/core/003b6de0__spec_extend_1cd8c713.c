// 003b6de0 spec_extend

/* WARNING: Switch with 1 destination removed at 0x003b6e75 */
/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)> as
   alloc[12e961f32105355]::vec::spec_extend::SpecExtend<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String),
   alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)>>>::spec_extend */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>>>
::spec_extend(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = ((ulonglong)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 8)) >> 4) *
          -0x5555555555555555;
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < uVar2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,uVar2,8,0x30);
    lVar1 = param_1[2];
  }
  else if (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_2 + 8)) goto LAB_003b6e47;
  (*(code *)PTR_memcpy_00799008)();
LAB_003b6e47:
  param_1[2] = lVar1 + uVar2;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


