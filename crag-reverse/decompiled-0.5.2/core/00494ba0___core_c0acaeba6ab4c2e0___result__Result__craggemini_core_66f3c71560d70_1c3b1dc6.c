// 00494ba0 <core[c0acaeba6ab4c2e0]::result::Result<(craggemini_core[66f3c71560d70857]::bridge::Bridge,u32),core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(craggemini_core[66f3c71560d70857]::bridge::Bridge,
   u32), core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(craggemini_core[66f3c71560d70857]::bridge::Bridge,u32),core[c0acaeba6ab4c2e0]::io::error::Error>>
          (int *param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 == 2) {
    if ((1 < ((uint)*(ulonglong *)(param_1 + 2) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 2) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    return;
  }
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (param_1[6] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  if (*(longlong *)(param_1 + 0xe) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x2c) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 0x36);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x34) + 8;
    do {
      if (*(longlong *)(lVar4 + -8) != 0) {
        (*(code *)puVar2)();
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x32) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x48) != -1) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[0x1c] != 2) {
    <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x1c);
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x1c);
    if (param_1[0x22] != -1) {
      (*(code *)PTR_close_00799030)();
    }
  }
  if (param_1[0x24] != 2) {
    <tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x24);
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x24);
    if (param_1[0x2a] != -1) {
      (*(code *)PTR_close_00799030)();
    }
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 0x3c);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x3a) + 8;
    do {
      if (*(longlong *)(lVar4 + -8) != 0) {
        (*(code *)puVar2)();
      }
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::protocol::FromBridge>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(longlong *)(param_1 + 0x14) != 0) && (uVar1 = *(ulonglong *)(param_1 + 0x16), uVar1 != 0))
  {
    if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


