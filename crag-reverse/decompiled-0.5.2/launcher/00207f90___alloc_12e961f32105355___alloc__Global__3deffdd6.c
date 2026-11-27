// 00207f90 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
    */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
<alloc[12e961f32105355]::alloc::Global>(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_30 [2];
  ulonglong local_28;
  
  if (CARRY8(param_2,param_3)) {
    (*(code *)PTR_handle_error_00219c78)();
  }
  else {
    uVar2 = *param_1 * 2;
    if (uVar2 < param_2 + param_3) {
      uVar2 = param_2 + param_3;
    }
    uVar3 = 8;
    if (8 < uVar2) {
      uVar3 = uVar2;
    }
    <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow(local_30,*param_1,param_1[1],uVar3);
    if (local_30[0] != 1) {
      param_1[1] = local_28;
      *param_1 = uVar3;
      return;
    }
  }
  (*(code *)PTR_handle_error_00219c78)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


