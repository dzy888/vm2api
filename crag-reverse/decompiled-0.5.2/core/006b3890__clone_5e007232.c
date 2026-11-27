// 006b3890 clone

/* <alloc[12e961f32105355]::boxed::Box<[u8]> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::boxed::Box<[u8]>as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = lVar1 == 0;
  if (-1 < lVar1) goto LAB_006b38b0;
  uVar3 = true;
  while( true ) {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_006b38b0:
    if ((bool)uVar3) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    uVar3 = lVar2 == 0;
    if (!(bool)uVar3) {
      (*(code *)PTR_memcpy_00799008)(param_4,lVar1);
LAB_006b38ee:
      auVar4._8_8_ = lVar1;
      auVar4._0_8_ = lVar2;
      return auVar4;
    }
  }
  lVar2 = 1;
  goto LAB_006b38ee;
}


