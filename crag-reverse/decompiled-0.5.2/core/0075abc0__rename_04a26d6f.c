// 0075abc0 rename

/* std[6c98fd8553dbae28]::sys::fs::rename */

undefined1 * __rustcall
std[6c98fd8553dbae28]::sys::fs::rename
          (undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined1 local_378 [384];
  undefined1 local_1f8 [384];
  char local_78;
  char local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_38 = param_3;
  local_30 = param_4;
  if (param_2 < 0x180) {
    (*(code *)PTR_memcpy_00799008)(param_4,param_2);
    local_1f8[param_2] = 0;
    (*(code *)PTR_from_bytes_with_nul_0079abd0)();
    if (local_60 == '\0') {
      local_48 = local_58;
      local_40 = local_50;
      if (0x17f < param_4) {
        pcVar4 = rename::{closure#0}::_closure_0_;
        puVar5 = &local_48;
        param_2 = param_4;
        param_1 = param_3;
        goto LAB_0075acf6;
      }
      (*(code *)PTR_memcpy_00799008)();
      local_378[param_4] = 0;
      (*(code *)PTR_from_bytes_with_nul_0079abd0)();
      if (local_78 == '\0') {
        iVar1 = (*(code *)PTR_rename_0079acf8)();
        if (iVar1 != -1) {
          return (undefined1 *)0x0;
        }
        piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
        iVar1 = *piVar3;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        return (undefined1 *)((longlong)iVar1 << 0x20 | 2);
      }
    }
    puVar2 = &DAT_00796450;
  }
  else {
    pcVar4 = rename::_closure_0_;
    puVar5 = &local_38;
LAB_0075acf6:
    puVar2 = (undefined1 *)
             helpers::small_c_string::run_with_cstr_allocating::<()>(param_1,param_2,puVar5,pcVar4);
  }
  return puVar2;
}


