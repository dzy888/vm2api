// 005cb0b0 {closure#11}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::parse_tools_and_config::{closure#11} */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_tools_and_config::_closure_11_(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar2 = _UNK_0019dff8;
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(ulonglong *)((longlong)puVar3 + 0x19) = CONCAT17(UNK_0019dff7,_DAT_0019dff0);
  *(undefined8 *)((longlong)puVar3 + 0x21) = uVar2;
  uVar2 = CONCAT71(_DAT_0019dff0,UNK_0019dfef);
  puVar3[2] = _DAT_0019dfe7;
  puVar3[3] = uVar2;
  uVar2 = _UNK_0019dfdf;
  *puVar3 = _DAT_0019dfd7;
  puVar3[1] = uVar2;
  *param_1 = 0x29;
  param_1[1] = puVar3;
  param_1[2] = 0x29;
  return;
}


