// 003c2f90 clone

/* <alloc[12e961f32105355]::vec::Vec<u8> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_core[c0acaeba6ab4c2e0]::clone::Clone>::clone
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar4 = lVar1 == 0;
  if (-1 < lVar1) goto LAB_003c2fb0;
  uVar4 = true;
  plVar2 = (longlong *)0x0;
  while( true ) {
    param_1 = plVar2;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003c2fb0:
    if ((bool)uVar4) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    uVar4 = lVar3 == 0;
    plVar2 = (longlong *)0x1;
    if (!(bool)uVar4) {
      *param_1 = lVar1;
      param_1[1] = lVar3;
      (*(code *)PTR_memcpy_00799008)(param_4,lVar1);
      param_1[2] = lVar1;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return param_1;
}


