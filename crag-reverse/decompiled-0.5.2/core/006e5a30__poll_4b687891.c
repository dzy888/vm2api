// 006e5a30 poll

/* <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str, u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *unaff_R15;
  longlong *in_FS_OFFSET;
  undefined4 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = *param_2;
  *param_2 = -1;
  if (lVar2 == -1) {
    lVar3 = (*(code *)PTR_expect_failed_00799440)
                      (param_4,&anon_48246b2c7bc3818a1cbc30620defa29e_34_llvm_17816610714767121267);
    uVar4 = (uint)param_4;
LAB_006e5af5:
    if (uVar4 != 1) goto LAB_006e5a7d;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar3 + 0x48) = 0;
  }
  else {
    lVar3 = *in_FS_OFFSET + -0x138;
    bVar1 = *(byte *)(*in_FS_OFFSET + -0xf0);
    uVar4 = (uint)bVar1;
    unaff_R15 = param_1;
    if (bVar1 != 0) goto LAB_006e5af5;
  }
  *(undefined1 *)(lVar3 + 0x44) = 0;
LAB_006e5a7d:
  uVar5 = (*(code *)PTR_to_socket_addrs_0079a7a8)();
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
  }
  unaff_R15[3] = local_40;
  unaff_R15[4] = uStack_38;
  unaff_R15[1] = local_50;
  unaff_R15[2] = uStack_48;
  *unaff_R15 = 0;
  return unaff_R15;
}


