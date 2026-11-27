// 000aa224 grow_amortized

/* <alloc[12e961f32105355]::raw_vec::RawVecInner>::grow_amortized */

ulonglong __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner>::grow_amortized
          (ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
          ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_38;
  ulonglong local_30;
  
  if ((param_5 != 0) && (!CARRY8(param_3,param_2))) {
    uVar1 = *param_1 * 2;
    if (*param_1 * 2 < param_3 + param_2) {
      uVar1 = param_3 + param_2;
    }
    uVar2 = 8;
    if (param_5 != 1) {
      uVar2 = (ulonglong)(param_5 < 0x401) * 3 + 1;
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    (*(code *)PTR_finish_grow_000c4670)(param_4,uVar2);
    if (local_38 != 1) {
      param_1[1] = local_30;
      *param_1 = uVar2;
      local_30 = 0xffffffffffffffff;
    }
    return local_30;
  }
  return 0;
}


