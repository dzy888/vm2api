// 00701580 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(undefined4 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 *unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 uVar3;
  longlong unaff_R14;
  longlong unaff_R15;
  longlong *in_FS_OFFSET;
  char local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60 [12];
  
  if (*(int *)(param_3 + 0x18) == 0) {
    unaff_RBP = *(undefined8 *)(param_3 + 0x10);
    unaff_R15 = *in_FS_OFFSET + -0x138;
    bVar1 = *(byte *)(*in_FS_OFFSET + -0xf0);
    uVar2 = (uint)bVar1;
    unaff_RBX = param_2;
    unaff_R12 = param_4;
    unaff_R14 = param_3;
    if (bVar1 != 0) goto LAB_0070164b;
LAB_007015c4:
    uVar3 = *(undefined8 *)(unaff_R15 + 0x30);
    *(undefined8 *)(unaff_R15 + 0x30) = unaff_RBP;
  }
  else {
    uVar2 = (*(code *)PTR_panic_fmt_007991a8)
                      (param_1,&anon_8e901ac342272c81d7b37a6ae0143219_15_llvm_8038038081886927865);
LAB_0070164b:
    if (uVar2 == 1) {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(unaff_R15 + 0x48) = 0;
      goto LAB_007015c4;
    }
    uVar3 = 0;
  }
  <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
  ::poll(&local_88,unaff_R14 + 0x20,unaff_R12);
  if (*(char *)(unaff_R15 + 0x48) != '\0') {
    if (*(char *)(unaff_R15 + 0x48) == '\x02') goto LAB_007015ec;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(unaff_R15 + 0x48) = 0;
  }
  *(undefined8 *)(unaff_R15 + 0x30) = uVar3;
LAB_007015ec:
  if (local_88 == '\0') {
    local_60[0] = 2;
    set_stage(unaff_R14,local_60);
  }
  unaff_RBX[4] = local_68;
  unaff_RBX[2] = local_78;
  unaff_RBX[3] = uStack_70;
  *unaff_RBX = CONCAT71(uStack_87,local_88);
  unaff_RBX[1] = uStack_80;
  return unaff_RBX;
}


