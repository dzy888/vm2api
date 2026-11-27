// 000b3b00 finish_grow

/* <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
          (undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (param_4 < 0) {
    lVar1 = 8;
    param_4 = 0;
    goto LAB_000b3b83;
  }
  if (param_2 == 0) {
    if (param_4 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      lVar1 = (*(code *)PTR___rust_alloc_000c3a90)();
      goto joined_r0x000b3b61;
    }
    lVar1 = 1;
  }
  else {
    lVar1 = (*(code *)PTR___rust_realloc_000c3c40)(param_4,1);
joined_r0x000b3b61:
    if (lVar1 == 0) {
      param_1[1] = 1;
      lVar1 = 0x10;
      goto LAB_000b3b83;
    }
  }
  param_1[1] = lVar1;
  lVar1 = 0x10;
  uVar2 = 0;
LAB_000b3b83:
  *(longlong *)((longlong)param_1 + lVar1) = param_4;
  *param_1 = uVar2;
  return;
}


