// 0063d670 <craggemini_core[66f3c71560d70857]::bridge::Bridge>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::Bridge> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::Bridge>
          (longlong param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*(int *)(param_1 + 0x18) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd0) + 8;
    do {
      if (*(longlong *)(lVar4 + -8) != 0) {
        (*(code *)puVar2)();
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x120) != -1) && (*(longlong *)(param_1 + 0x120) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(int *)(param_1 + 0x70) != 2) {
    <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x70);
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x70);
    if (*(int *)(param_1 + 0x88) != -1) {
      (*(code *)PTR_close_00799030)();
    }
  }
  if (*(int *)(param_1 + 0x90) != 2) {
    <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x90);
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x90);
    if (*(int *)(param_1 + 0xa8) != -1) {
      (*(code *)PTR_close_00799030)();
    }
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xe8) + 8;
    do {
      if (*(longlong *)(lVar4 + -8) != 0) {
        (*(code *)puVar2)();
      }
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::protocol::FromBridge>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop((longlong *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x50) != 0) && (uVar1 = *(ulonglong *)(param_1 + 0x58), uVar1 != 0))
  {
    if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


