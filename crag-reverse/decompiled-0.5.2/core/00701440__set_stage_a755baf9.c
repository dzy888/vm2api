// 00701440 set_stage

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::set_stage
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<str
   as tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::set_stage */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::set_stage(undefined4 param_1,longlong param_2,code *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  longlong *in_FS_OFFSET;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *in_FS_OFFSET;
  pcVar15 = param_3;
  if (*(char *)(lVar3 + -0xf0) != '\0') {
    if (*(char *)(lVar3 + -0xf0) != '\x01') {
      uVar16 = 0;
      iVar1 = *(int *)(param_2 + 0x18);
      goto joined_r0x007014d6;
    }
    pcVar15 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
              <tokio[d7d91d38da47d894]::runtime::context::Context>;
    param_1 = (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar3 + -0xf0) = 0;
  }
  uVar16 = *(undefined8 *)(lVar3 + -0x108);
  *(undefined8 *)(lVar3 + -0x108) = uVar2;
  iVar1 = *(int *)(param_2 + 0x18);
joined_r0x007014d6:
  if (iVar1 == 1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
              (param_2 + 0x20,pcVar15);
  }
  else if (((iVar1 == 0) && (*(longlong *)(param_2 + 0x20) != -1)) &&
          (*(longlong *)(param_2 + 0x20) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  uVar4 = *(undefined4 *)param_3;
  uVar5 = *(undefined4 *)(param_3 + 4);
  uVar6 = *(undefined4 *)(param_3 + 8);
  uVar7 = *(undefined4 *)(param_3 + 0xc);
  uVar8 = *(undefined4 *)(param_3 + 0x10);
  uVar9 = *(undefined4 *)(param_3 + 0x14);
  uVar10 = *(undefined4 *)(param_3 + 0x18);
  uVar11 = *(undefined4 *)(param_3 + 0x1c);
  uVar12 = *(undefined4 *)(param_3 + 0x24);
  uVar13 = *(undefined4 *)(param_3 + 0x28);
  uVar14 = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_2 + 0x3c) = uVar12;
  *(undefined4 *)(param_2 + 0x40) = uVar13;
  *(undefined4 *)(param_2 + 0x44) = uVar14;
  *(undefined4 *)(param_2 + 0x28) = uVar8;
  *(undefined4 *)(param_2 + 0x2c) = uVar9;
  *(undefined4 *)(param_2 + 0x30) = uVar10;
  *(undefined4 *)(param_2 + 0x34) = uVar11;
  *(undefined4 *)(param_2 + 0x18) = uVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x20) = uVar6;
  *(undefined4 *)(param_2 + 0x24) = uVar7;
  if (*(char *)(lVar3 + -0xf0) != '\0') {
    if (*(char *)(lVar3 + -0xf0) == '\x02') {
      return;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar3 + -0xf0) = 0;
  }
  *(undefined8 *)(lVar3 + -0x108) = uVar16;
  return;
}


