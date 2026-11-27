// 006027e0 {closure#2}

/* craggemini_core[66f3c71560d70857]::server::parse_responses_item::{closure#2} */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_responses_item::_closure_2_(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar3 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar2 = s_em_missing_string__name__0019fef8._8_8_;
  if (pcVar3 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined8 *)(pcVar3 + 0x10) = s_em_missing_string__name__0019fef8._0_8_;
  *(undefined8 *)(pcVar3 + 0x18) = uVar2;
  uVar2 = s_function_call_it_0019fee8._8_8_;
  *(undefined8 *)pcVar3 = s_function_call_it_0019fee8._0_8_;
  *(undefined8 *)(pcVar3 + 8) = uVar2;
  pcVar3[0x20] = 'g';
  pcVar3[0x21] = ' ';
  pcVar3[0x22] = '\'';
  pcVar3[0x23] = 'n';
  pcVar3[0x24] = 'a';
  pcVar3[0x25] = 'm';
  pcVar3[0x26] = 'e';
  pcVar3[0x27] = '\'';
  *param_1 = 0x28;
  param_1[1] = pcVar3;
  param_1[2] = 0x28;
  return;
}


