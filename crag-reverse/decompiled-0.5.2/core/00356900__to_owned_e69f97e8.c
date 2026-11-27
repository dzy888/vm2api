// 00356900 to_owned

/* <str as alloc[12e961f32105355]::borrow::ToOwned>::to_owned */

void __rustcall
<str_as_alloc[12e961f32105355]::borrow::ToOwned>::to_owned
          (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  uVar3 = param_3 == 0;
  if (-1 < param_3) goto LAB_00356920;
  uVar3 = true;
  plVar1 = (longlong *)0x0;
  while( true ) {
    param_1 = plVar1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00356920:
    if ((bool)uVar3) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    uVar3 = lVar2 == 0;
    plVar1 = (longlong *)0x1;
    if (!(bool)uVar3) {
      (*(code *)PTR_memcpy_00799008)(param_4,param_3);
LAB_00356964:
      *param_1 = param_3;
      param_1[1] = lVar2;
      param_1[2] = param_3;
      return;
    }
  }
  lVar2 = 1;
  goto LAB_00356964;
}


