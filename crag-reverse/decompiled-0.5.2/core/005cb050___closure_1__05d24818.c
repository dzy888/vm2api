// 005cb050 {closure#1}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::parse_tool_choice::{closure#1} */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_tool_choice::_closure_1_(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar2 = _UNK_0019df21;
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(ulonglong *)((longlong)puVar3 + 0xd) = CONCAT53(_UNK_0019df1c,_DAT_0019df19);
  *(undefined8 *)((longlong)puVar3 + 0x15) = uVar2;
  uVar2 = CONCAT35(_DAT_0019df19,_UNK_0019df14);
  *puVar3 = _DAT_0019df0c;
  puVar3[1] = uVar2;
  *param_1 = 0x1d;
  param_1[1] = puVar3;
  param_1[2] = 0x1d;
  return;
}


