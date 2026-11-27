// 0070d050 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<(i32,
   signal_hook_registry[9dd8ecc3788bb260]::Slot)>>::grow_one */

undefined8 __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<(i32,signal_hook_registry[9dd8ecc3788bb260]::Slot)>>::
grow_one(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::grow_amortized(param_1,*param_1,8,0xc0);
  if (lVar2 == -1) {
    return in_RAX;
  }
  (*(code *)PTR_handle_error_00798ff0)();
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}


