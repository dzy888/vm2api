// 0074b920 file_name

/* <std[6c98fd8553dbae28]::fs::DirEntry>::file_name */

longlong * __rustcall
<std[6c98fd8553dbae28]::fs::DirEntry>::file_name
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0x10) + -1;
  if (lVar4 == 0) {
    lVar2 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      pcVar1 = (code *)swi(3);
      plVar3 = (longlong *)(*pcVar1)();
      return plVar3;
    }
    (*(code *)PTR_memcpy_00799008)(param_4,lVar4);
  }
  *param_1 = lVar4;
  param_1[1] = lVar2;
  param_1[2] = lVar4;
  return param_1;
}


