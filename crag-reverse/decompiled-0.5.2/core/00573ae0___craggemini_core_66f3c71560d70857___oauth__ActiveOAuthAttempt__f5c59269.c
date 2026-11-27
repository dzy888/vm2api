// 00573ae0 <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  
  puVar2 = PTR_kill_00799120;
  if (1 < *(uint *)(param_1 + 0x268)) {
    (*(code *)PTR_kill_00799120)();
    (*(code *)puVar2)();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  plVar1 = *(longlong **)(param_1 + 0x260);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>>
    ::drop_slow(param_1 + 0x260);
  }
  <tokio[d7d91d38da47d894]::process::Child>(param_1);
  if (*(int *)(param_1 + 0xa8) == -1) {
    return;
  }
  <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xa8);
  return;
}


