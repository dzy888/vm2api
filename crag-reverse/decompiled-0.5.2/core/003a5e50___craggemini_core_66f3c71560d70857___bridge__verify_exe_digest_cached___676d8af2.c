// 003a5e50 <craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003a5ffc */
/* WARNING: Switch with 1 destination removed at 0x003a6020 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::verify_exe_digest_cached::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  switch(*(undefined1 *)(param_1 + 0x221)) {
  case 3:
    if (*(char *)(param_1 + 0x2f1) != '\x03') {
      return;
    }
    if (((*(char *)(param_1 + 0x2e8) == '\x03') && (*(char *)(param_1 + 0x2e0) == '\x03')) &&
       (*(char *)(param_1 + 0x2d8) == '\x03')) {
      if (*(char *)(param_1 + 0x2d0) == '\x03') {
        <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0x2c8);
      }
      else if ((*(char *)(param_1 + 0x2d0) == '\0') && (*(longlong *)(param_1 + 0x2a0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a5e78::switchdataD_0019286c,1);
      }
    }
    *(undefined1 *)(param_1 + 0x2f0) = 0;
    return;
  case 4:
    if (*(char *)(param_1 + 0x248) == '\x03') {
      if (*(char *)(param_1 + 0x240) == '\x03') {
        cVar3 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar3 != '\0') {
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
        cVar3 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar3 != '\0') {
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
    goto switchD_003a5e78_default;
  }
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990f8)();
  }
  lVar2 = *(longlong *)(param_1 + 0x1d0);
  if (lVar2 == -2) {
    lVar2 = *(longlong *)(param_1 + 0x1d8);
    cVar3 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x20))();
      return;
    }
  }
  else if ((lVar2 != -1) && (lVar2 != 0)) {
    (*(code *)PTR_free_0079adc8)();
    return;
  }
switchD_003a5e78_default:
  return;
}


