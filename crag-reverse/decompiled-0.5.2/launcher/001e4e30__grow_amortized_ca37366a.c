// 001e4e30 grow_amortized

/* <alloc[12e961f32105355]::raw_vec::RawVecInner<std[6c98fd8553dbae28]::alloc::System>>::grow_amortized
    */

ulonglong __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner<std[6c98fd8553dbae28]::alloc::System>>::grow_amortized
          (ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char local_30 [8];
  ulonglong local_28;
  
  uVar2 = *param_1 * 2;
  uVar1 = param_2 + 1U;
  if (param_2 + 1U <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  finish_grow(local_30,*param_1,param_1[1],uVar2);
  if (local_30[0] == '\0') {
    param_1[1] = local_28;
    *param_1 = uVar2;
    local_28 = 0xffffffffffffffff;
  }
  return local_28;
}


