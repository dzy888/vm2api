// 007573a0 mkdir

/* <std[6c98fd8553dbae28]::sys::fs::unix::DirBuilder>::mkdir */

undefined1 * __rustcall
<std[6c98fd8553dbae28]::sys::fs::unix::DirBuilder>::mkdir
          (undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined1 local_1c0 [384];
  char local_40;
  undefined8 local_28;
  
  local_28 = param_1;
  if (param_3 < 0x180) {
    (*(code *)PTR_memcpy_00799008)();
    local_1c0[param_3] = 0;
    (*(code *)PTR_from_bytes_with_nul_0079abd0)();
    if (local_40 == '\0') {
      iVar1 = (*(code *)PTR_mkdir_0079ad30)();
      if (iVar1 == -1) {
        piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
        iVar1 = *piVar3;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        puVar2 = (undefined1 *)((longlong)iVar1 << 0x20 | 2);
      }
      else {
        puVar2 = (undefined1 *)0x0;
      }
    }
    else {
      puVar2 = &DAT_00796450;
    }
  }
  else {
    puVar2 = (undefined1 *)
             std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::<()>
                       (param_2,param_3,&local_28,mkdir::_closure_0_);
  }
  return puVar2;
}


