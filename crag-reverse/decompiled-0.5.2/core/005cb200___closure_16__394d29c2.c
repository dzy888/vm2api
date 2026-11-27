// 005cb200 {closure#16}

/* craggemini_core[66f3c71560d70857]::tools::parse_tools_and_config::{closure#16} */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_tools_and_config::_closure_16_(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar3 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar2 = s_ion_missing_name_0018d0d0._8_8_;
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined8 *)(pcVar3 + 0x10) = s_ion_missing_name_0018d0d0._0_8_;
  *(undefined8 *)(pcVar3 + 0x18) = uVar2;
  uVar2 = s_functionDeclarat_0018d0c0._8_8_;
  *(undefined8 *)pcVar3 = s_functionDeclarat_0018d0c0._0_8_;
  *(undefined8 *)(pcVar3 + 8) = uVar2;
  *param_1 = 0x20;
  param_1[1] = pcVar3;
  param_1[2] = 0x20;
  return;
}


