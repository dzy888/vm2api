// 0063cf60 <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  switch(*(undefined1 *)(param_1 + 0x221)) {
  case 3:
    if (*(char *)(param_1 + 0x2f1) != '\x03') {
      return;
    }
    if (((*(char *)(param_1 + 0x2e8) == '\x03') && (*(char *)(param_1 + 0x2e0) == '\x03')) &&
       (*(char *)(param_1 + 0x2d8) == '\x03')) {
      if (*(char *)(param_1 + 0x2d0) == '\x03') {
        cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar2 != '\0') {
          (*(code *)PTR_drop_join_handle_slow_00799088)();
        }
      }
      else if ((*(char *)(param_1 + 0x2d0) == '\0') && (*(longlong *)(param_1 + 0x2a0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0063cf88::switchdataD_001a1674,1);
      }
    }
    *(undefined1 *)(param_1 + 0x2f0) = 0;
    return;
  case 4:
    if (*(char *)(param_1 + 0x248) == '\x03') {
      if (*(char *)(param_1 + 0x240) == '\x03') {
        cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar2 != '\0') {
          (*(code *)PTR_drop_join_handle_slow_00799088)();
        }
      }
      else if (*(char *)(param_1 + 0x240) == '\0') {
        plVar1 = *(longlong **)(param_1 + 0x230);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_007990f8)();
        }
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x248) == '\x03') {
      if (*(char *)(param_1 + 0x240) == '\x03') {
        cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar2 != '\0') {
          (*(code *)PTR_drop_join_handle_slow_00799088)();
        }
      }
      else if (*(char *)(param_1 + 0x240) == '\0') {
        plVar1 = *(longlong **)(param_1 + 0x230);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_007990f8)();
        }
      }
    }
  case 5:
    if (*(longlong *)(param_1 + 0x208) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x220) = 0;
    break;
  default:
    return;
  }
  <tokio[d7d91d38da47d894]::fs::file::File>(param_1 + 0x1a0);
  return;
}


