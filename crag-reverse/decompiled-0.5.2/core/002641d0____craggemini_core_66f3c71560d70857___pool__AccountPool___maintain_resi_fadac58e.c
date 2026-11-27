// 002641d0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_resident_with_limits::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_resident_with_limits::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_resident_with_limits::_closure_0_>
          (longlong param_1)

{
  switch(*(undefined1 *)(param_1 + 0x70)) {
  case 3:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::_closure_0_>
              (param_1 + 0x78);
    return;
  case 4:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::reap_idle::_closure_0_>(param_1 + 0x78)
    ;
    return;
  case 5:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::_closure_0_>
              (param_1 + 0x78);
    return;
  case 6:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::_closure_0_>
              (param_1 + 0x78);
    return;
  default:
    return;
  }
}


