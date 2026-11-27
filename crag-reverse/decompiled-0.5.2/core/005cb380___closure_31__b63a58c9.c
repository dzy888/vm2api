// 005cb380 {closure#31}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::parse_tools_and_config::{closure#31} */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_tools_and_config::_closure_31_(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar2 = _UNK_0019e11c;
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar3[2] = _DAT_0019e114;
  puVar3[3] = uVar2;
  uVar2 = _UNK_0019e10c;
  *puVar3 = _DAT_0019e104;
  puVar3[1] = uVar2;
  *(undefined1 *)(puVar3 + 4) = 0x65;
  *param_1 = 0x21;
  param_1[1] = puVar3;
  param_1[2] = 0x21;
  return;
}


