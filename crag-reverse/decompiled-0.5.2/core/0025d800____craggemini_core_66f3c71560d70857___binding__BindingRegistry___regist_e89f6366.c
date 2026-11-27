// 0025d800 <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::register_batch::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0025d8cb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::register_batch::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::register_batch::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)((longlong)param_1 + 0x1ac1) == '\0') {
    lVar1 = param_1[1];
    for (lVar2 = param_1[2] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
      <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar1);
      lVar1 = lVar1 + 0x1a0;
    }
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x1ac1) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::_closure_0_>
              (param_1 + 0x56);
    <[(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,craggemini_core[66f3c71560d70857]::binding::ParsedProxy,std[6c98fd8553dbae28]::path::PathBuf)]>
              (param_1[0xc],((ulonglong)(param_1[0xe] - param_1[0xc]) >> 3) * 0x193d4bb7e327a977);
    if (param_1[0xd] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    *(undefined2 *)((longlong)param_1 + 0x1ac3) = 0;
  }
  return;
}


