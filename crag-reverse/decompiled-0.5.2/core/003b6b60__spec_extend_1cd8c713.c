// 003b6b60 spec_extend

/* WARNING: Switch with 1 destination removed at 0x003b6be6 */
/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>
   as 
   alloc[12e961f32105355]::vec::spec_extend::SpecExtend<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult,
   alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>>::spec_extend
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult,alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>>
::spec_extend(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = ((ulonglong)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 8)) >> 3) *
          0x2e8ba2e8ba2e8ba3;
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < uVar2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,uVar2,8,0x58);
    lVar1 = param_1[2];
  }
  else if (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_2 + 8)) goto LAB_003b6bbc;
  (*(code *)PTR_memcpy_00799008)();
LAB_003b6bbc:
  param_1[2] = lVar1 + uVar2;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


