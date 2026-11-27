// 00261930 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::maintain_acp_resident::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)(param_1 + 0xaf)) {
  case 3:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0xd0);
    if ((*(longlong *)(param_1 + 0xb8) != -1) && (*(longlong *)(param_1 + 0xb8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xac) = 0;
    plVar1 = *(longlong **)(param_1 + 0xb0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0xb0);
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x118) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                (param_1 + 0x120);
    }
    else if (*(char *)(param_1 + 0x118) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                (param_1 + 0x130);
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0xb8) != -1) && (*(longlong *)(param_1 + 0xb8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xab) = 0;
    plVar1 = *(longlong **)(param_1 + 0xb0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0xb0);
    }
    break;
  case 5:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
              (param_1 + 0xb0);
    break;
  case 6:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
              (param_1 + 0xb0);
    break;
  default:
    goto switchD_00261958_default;
  }
  if (*(longlong *)(param_1 + 0x28) != -2) {
    if (*(char *)(param_1 + 0xaa) != '\0') {
      plVar1 = *(longlong **)(param_1 + 0x20);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow();
      }
    }
    if (((*(char *)(param_1 + 0xa9) != '\0') && (*(longlong *)(param_1 + 0x28) != -1)) &&
       (*(longlong *)(param_1 + 0x28) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined2 *)(param_1 + 0xa9) = 0;
  *(undefined2 *)(param_1 + 0xad) = 0;
switchD_00261958_default:
  return;
}


