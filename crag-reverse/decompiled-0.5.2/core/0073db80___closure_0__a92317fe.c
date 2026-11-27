// 0073db80 {closure#0}

/* std[6c98fd8553dbae28]::sys::fs::rename::{closure#0} */

undefined1 * __rustcall
std[6c98fd8553dbae28]::sys::fs::rename::_closure_0_
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 local_1c8 [384];
  char local_48;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar1 = param_1[1];
  local_30 = param_2;
  local_28 = param_3;
  if (uVar1 < 0x180) {
    (*(code *)PTR_memcpy_00799008)(param_4,uVar1);
    local_1c8[uVar1] = 0;
    (*(code *)PTR_from_bytes_with_nul_0079abd0)();
    if (local_48 == '\0') {
      iVar2 = (*(code *)PTR_rename_0079acf8)();
      if (iVar2 == -1) {
        piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
        iVar2 = *piVar4;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        puVar3 = (undefined1 *)((longlong)iVar2 << 0x20 | 2);
      }
      else {
        puVar3 = (undefined1 *)0x0;
      }
    }
    else {
      puVar3 = &DAT_00796450;
    }
  }
  else {
    puVar3 = (undefined1 *)
             helpers::small_c_string::run_with_cstr_allocating::<()>
                       (*param_1,uVar1,&local_30,{closure#0}::_closure_0_);
  }
  return puVar3;
}


