// 0075a7b0 set_permissions

/* std[6c98fd8553dbae28]::sys::fs::set_permissions */

undefined1 * __rustcall
std[6c98fd8553dbae28]::sys::fs::set_permissions
          (undefined8 param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 local_1d8 [384];
  char local_58;
  undefined4 *local_40;
  undefined4 local_34;
  
  local_40 = &local_34;
  local_34 = param_3;
  if (param_2 < 0x180) {
    (*(code *)PTR_memcpy_00799008)(param_4,param_2);
    local_1d8[param_2] = 0;
    (*(code *)PTR_from_bytes_with_nul_0079abd0)();
    puVar1 = PTR_get_os_functions_007992e0;
    if (local_58 == '\0') {
      do {
        iVar3 = (*(code *)PTR_chmod_0079ad58)();
        if (iVar3 != -1) {
          return (undefined1 *)0x0;
        }
        piVar5 = (int *)(*(code *)PTR___errno_location_007990a0)();
        iVar3 = *piVar5;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        lVar6 = (*(code *)puVar1)();
        cVar2 = (**(code **)(lVar6 + 0x10))();
      } while (cVar2 != '\0');
      puVar4 = (undefined1 *)((longlong)iVar3 << 0x20 | 2);
    }
    else {
      puVar4 = &DAT_00796450;
    }
  }
  else {
    puVar4 = (undefined1 *)
             helpers::small_c_string::run_with_cstr_allocating::<()>
                       (param_1,param_2,&local_40,set_permissions::_closure_0_);
  }
  return puVar4;
}


