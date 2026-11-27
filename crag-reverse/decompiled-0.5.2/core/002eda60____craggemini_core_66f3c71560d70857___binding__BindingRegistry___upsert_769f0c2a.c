// 002eda60 <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::upsert::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::upsert::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::upsert::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x1bf1) == '\0') {
    <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>();
    return;
  }
  if (*(char *)(param_1 + 0x1bf1) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::_closure_0_>
              (param_1 + 0x3e0);
    *(undefined2 *)(param_1 + 0x1bf2) = 0;
    *(undefined1 *)(param_1 + 0x1bf4) = 0;
    return;
  }
  return;
}


