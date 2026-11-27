// 003a17d0 <craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#4}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy,
   craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#4}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::_closure_0_::_closure_1_>::_closure_0_::_closure_4_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x131) == '\x03') {
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
    }
    if ((((*(char *)(param_1 + 0xf8) == '\x03') && (*(char *)(param_1 + 0x80) == '\x03')) &&
        (*(char *)(param_1 + 0xf0) == '\x03')) && (*(char *)(param_1 + 0xe8) == '\x03')) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0xc0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003a1845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))();
        return;
      }
    }
  }
  return;
}


