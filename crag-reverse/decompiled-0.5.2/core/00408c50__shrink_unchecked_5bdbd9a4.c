// 00408c50 shrink_unchecked

/* <alloc[12e961f32105355]::raw_vec::RawVecInner>::shrink_unchecked */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner>::shrink_unchecked
          (longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong unaff_R14;
  undefined1 auVar2 [16];
  
  if ((param_4 != 0) && (*param_1 != 0)) {
    if (param_2 == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,param_3);
      param_1[1] = param_3;
    }
    else {
      param_4 = param_4 * param_2;
      lVar1 = (*(code *)PTR___rust_realloc_007997f0)(param_4,param_3);
      if (lVar1 == 0) goto LAB_00408cb4;
      param_1[1] = lVar1;
    }
    *param_1 = param_2;
    unaff_R14 = param_4;
  }
  param_4 = unaff_R14;
  param_3 = -1;
LAB_00408cb4:
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}


