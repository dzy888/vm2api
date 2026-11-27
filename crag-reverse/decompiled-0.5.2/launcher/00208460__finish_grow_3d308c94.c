// 00208460 finish_grow

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
    goto LAB_002084e3;
  }
  if (param_2 == 0) {
    if (param_4 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      lVar1 = (*(code *)PTR___rust_alloc_00219c88)();
      goto joined_r0x002084c1;
    }
    lVar1 = 1;
  }
  else {
    lVar1 = (*(code *)PTR___rust_realloc_0021a150)(param_4,1);
joined_r0x002084c1:
    if (lVar1 == 0) {
      param_1[1] = 1;
      lVar1 = 0x10;
      goto LAB_002084e3;
    }
  }
  param_1[1] = lVar1;
  lVar1 = 0x10;
  uVar2 = 0;
LAB_002084e3:
  *(longlong *)((longlong)param_1 + lVar1) = param_4;
  *param_1 = uVar2;
  return;
}


