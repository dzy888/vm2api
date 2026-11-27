// 00362db0 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<craggemini_core[66f3c71560d70857]::guard::spawn_stderr_drainer::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x00362e35 */
/* WARNING: Switch with 1 destination removed at 0x00362e6f */
/* WARNING: Switch with 1 destination removed at 0x00757591 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<craggemini_core[66f3c71560d70857]::guard::spawn_stderr_drainer::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<craggemini_core[66f3c71560d70857]::guard::spawn_stderr_drainer::_closure_0_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      puVar2 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      if (puVar2[1] != 0) {
        uVar5 = puVar2[2];
__rustc_100742bb89c490cb____rust_dealloc:
        (*(code *)PTR_free_0079adc8)(param_4,uVar5);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    piVar1 = param_1 + 2;
    if ((char)param_1[0x92] == '\0') {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
      if (param_1[8] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(piVar1);
    }
    else {
      if ((char)param_1[0x92] != '\x03') {
        return;
      }
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
      if (param_1[8] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(piVar1);
    }
    plVar3 = *(longlong **)(param_1 + 10);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar4 = *(longlong *)(param_1 + 10);
      if (*(longlong *)(lVar4 + 0x18) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      if (lVar4 != -1) {
        LOCK();
        plVar3 = (longlong *)(lVar4 + 8);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          uVar5 = 8;
          goto __rustc_100742bb89c490cb____rust_dealloc;
        }
      }
      return;
    }
  }
  return;
}


