// 00750060 set

/* WARNING: Switch with 1 destination removed at 0x00750169 */
/* <std[6c98fd8553dbae28]::sys::process::env::CommandEnv>::set */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::env::CommandEnv>::set
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  code *pcVar1;
  int *piVar2;
  longlong lVar3;
  longlong local_88 [3];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int *local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  
  lVar3 = 1;
  piVar2 = (int *)0x1;
  local_40 = param_4;
  if (param_3 != 0) {
    local_38 = param_1;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    piVar2 = (int *)(*(code *)PTR___rust_alloc_00799000)();
    if (piVar2 == (int *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0075018c;
    }
    (*(code *)PTR_memcpy_00799008)();
    param_1 = local_38;
    if (((param_3 == 4) && (*(char *)(local_38 + 0x19) == '\0')) && (*piVar2 == 0x48544150)) {
      *(undefined1 *)(local_38 + 0x19) = 1;
    }
  }
  local_58 = param_3;
  local_50 = piVar2;
  local_48 = param_3;
  if (param_5 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar3 == 0) {
LAB_0075018c:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (*(code *)PTR_memcpy_00799008)();
  }
  local_70 = param_5;
  local_68 = lVar3;
  local_60 = param_5;
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>
  ::insert(local_88,param_1,&local_58,&local_70);
  if (local_88[0] < 1) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


