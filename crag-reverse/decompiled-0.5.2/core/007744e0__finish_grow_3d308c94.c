// 007744e0 finish_grow

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
    goto LAB_00774563;
  }
  if (param_2 == 0) {
    if (param_4 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar1 = (*(code *)PTR___rust_alloc_00799000)();
      goto joined_r0x00774541;
    }
    lVar1 = 1;
  }
  else {
    lVar1 = (*(code *)PTR___rust_realloc_007997f0)(param_4,1);
joined_r0x00774541:
    if (lVar1 == 0) {
      param_1[1] = 1;
      lVar1 = 0x10;
      goto LAB_00774563;
    }
  }
  param_1[1] = lVar1;
  lVar1 = 0x10;
  uVar2 = 0;
LAB_00774563:
  *(longlong *)((longlong)param_1 + lVar1) = param_4;
  *param_1 = uVar2;
  return;
}


