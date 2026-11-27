// 00063050 spec_extend

/* WARNING: Switch with 1 destination removed at 0x000630e5 */
/* <alloc[12e961f32105355]::vec::Vec<agy_bridge[64a9e9deac6c45ce]::Outbound> as
   alloc[12e961f32105355]::vec::spec_extend::SpecExtend<agy_bridge[64a9e9deac6c45ce]::Outbound,
   alloc[12e961f32105355]::vec::into_iter::IntoIter<agy_bridge[64a9e9deac6c45ce]::Outbound>>>::spec_extend
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<agy_bridge[64a9e9deac6c45ce]::Outbound>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<agy_bridge[64a9e9deac6c45ce]::Outbound,alloc[12e961f32105355]::vec::into_iter::IntoIter<agy_bridge[64a9e9deac6c45ce]::Outbound>>>
::spec_extend(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = ((ulonglong)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 8)) >> 4) *
          -0x3333333333333333;
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < uVar2) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar1,uVar2,8,0x50);
    lVar1 = param_1[2];
  }
  else if (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_2 + 8)) goto LAB_000630b7;
  (*(code *)PTR_memcpy_000c3aa8)();
LAB_000630b7:
  param_1[2] = lVar1 + uVar2;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)();
  return;
}


