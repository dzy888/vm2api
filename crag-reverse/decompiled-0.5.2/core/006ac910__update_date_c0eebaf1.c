// 006ac910 update_date

/* <hyper[c4782d5b5c5e3493]::proto::h1::role::Server as
   hyper[c4782d5b5c5e3493]::proto::h1::Http1Transaction>::update_date */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::role::Server_as_hyper[c4782d5b5c5e3493]::proto::h1::Http1Transaction>
::update_date(void)

{
  longlong *plVar1;
  longlong *unaff_RBX;
  
  plVar1 = (longlong *)
           <hyper[c4782d5b5c5e3493]::common::date::CACHED::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::RefCell<hyper[c4782d5b5c5e3493]::common::date::CachedDate>>>,)>>
           ::call_once(0);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 == 0) {
      *plVar1 = -1;
      <hyper[c4782d5b5c5e3493]::common::date::CachedDate>::check(plVar1 + 1);
      *plVar1 = *plVar1 + 1;
      return;
    }
    (*(code *)PTR_panic_already_borrowed_007997b0)();
    unaff_RBX = plVar1;
  }
  (*(code *)PTR_panic_access_error_00799458)();
  *unaff_RBX = *unaff_RBX + 1;
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


