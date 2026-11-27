// 005cb190 {closure#14}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::parse_tools_and_config::{closure#14} */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_tools_and_config::_closure_14_(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar2 = _UNK_0019e063;
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar3[2] = _DAT_0019e05b;
  puVar3[3] = uVar2;
  uVar2 = _UNK_0019e053;
  *puVar3 = _DAT_0019e04b;
  puVar3[1] = uVar2;
  *(undefined8 *)((longlong)puVar3 + 0x1d) = 0x7463656a626f206e;
  *param_1 = 0x25;
  param_1[1] = puVar3;
  param_1[2] = 0x25;
  return;
}


