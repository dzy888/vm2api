// 00492d90 <&str>

/* craggemini_core[66f3c71560d70857]::invalid::<&str> */

void __rustcall
craggemini_core[66f3c71560d70857]::invalid::<&str>
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  
  uVar2 = param_2 == 0;
  if (-1 < param_2) goto LAB_00492db2;
  do {
    uVar2 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00492db2:
    if ((bool)uVar2) goto LAB_00492df0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar1 = (*(code *)PTR___rust_alloc_00799000)();
  } while (lVar1 == 0);
  (*(code *)PTR_memcpy_00799008)(param_4,param_2);
LAB_00492df0:
  (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
  return;
}


