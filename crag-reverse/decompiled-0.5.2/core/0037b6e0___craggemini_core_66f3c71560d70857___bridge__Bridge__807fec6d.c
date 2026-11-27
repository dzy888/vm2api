// 0037b6e0 <craggemini_core[66f3c71560d70857]::bridge::Bridge>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::Bridge> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::Bridge>
          (longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar5;
  longlong lVar4;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
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
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar8 = *(longlong *)(param_1 + 0xd8);
  if (lVar8 != 0) {
    lVar9 = *(longlong *)(param_1 + 0xd0) + 8;
    do {
      if (*(longlong *)(lVar9 + -8) != 0) {
        (*(code *)puVar3)();
      }
      lVar9 = lVar9 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
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
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar8 = *(longlong *)(param_1 + 0xf0);
  if (lVar8 != 0) {
    lVar9 = *(longlong *)(param_1 + 0xe8) + 8;
    do {
      if (*(longlong *)(lVar9 + -8) != 0) {
        (*(code *)puVar3)();
      }
      lVar9 = lVar9 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  uVar1 = *(ulonglong *)(param_1 + 0x118);
  if (uVar1 != 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x100);
    lVar8 = *(longlong *)(param_1 + 0x108);
    uVar6 = uVar2;
    if (*(ulonglong *)(param_1 + 0x110) < uVar2) {
      uVar6 = 0;
    }
    lVar9 = *(ulonglong *)(param_1 + 0x110) - uVar6;
    uVar6 = uVar2 - lVar9;
    lVar7 = uVar1 - uVar6;
    bVar10 = lVar7 != 0;
    if (uVar1 < uVar6) {
      lVar7 = 0;
    }
    uVar5 = lVar9 + uVar1;
    if (uVar1 >= uVar6 && bVar10) {
      uVar5 = uVar2;
    }
    lVar4 = uVar5 - lVar9;
    if (lVar4 != 0) {
      lVar9 = lVar9 * 0x128 + lVar8;
      do {
        <craggemini_core[66f3c71560d70857]::protocol::FromBridge>(lVar9);
        lVar9 = lVar9 + 0x128;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (uVar6 < uVar1) {
      do {
        <craggemini_core[66f3c71560d70857]::protocol::FromBridge>(lVar8);
        lVar8 = lVar8 + 0x128;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
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


