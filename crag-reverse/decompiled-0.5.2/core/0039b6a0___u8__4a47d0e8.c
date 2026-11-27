// 0039b6a0 <u8>

/* alloc[12e961f32105355]::vec::from_elem::<u8> */

longlong * __rustcall
alloc[12e961f32105355]::vec::from_elem::<u8>
          (longlong *param_1,char param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (param_2 == '\0') {
    uVar2 = param_3 == 0;
    if (-1 < param_3) goto LAB_0039b6f5;
LAB_0039b6e6:
    uVar2 = true;
  }
  else {
    if (param_3 < 0) goto LAB_0039b6e6;
    if (param_3 == 0) {
      lVar1 = 1;
LAB_0039b71d:
      *param_1 = param_3;
      param_1[1] = lVar1;
      (*(code *)PTR_memset_00799090)(param_4,param_3);
      goto LAB_0039b73f;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar1 = (*(code *)PTR___rust_alloc_00799000)();
    uVar2 = lVar1 == 0;
    if (!(bool)uVar2) goto LAB_0039b71d;
  }
  while( true ) {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0039b6f5:
    if ((bool)uVar2) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar1 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
    if (lVar1 != 0) goto LAB_0039b738;
    uVar2 = true;
  }
  lVar1 = 1;
LAB_0039b738:
  *param_1 = param_3;
  param_1[1] = lVar1;
LAB_0039b73f:
  param_1[2] = param_3;
  return param_1;
}


