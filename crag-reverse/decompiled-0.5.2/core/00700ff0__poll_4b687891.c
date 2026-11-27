// 00700ff0 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

undefined4 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 uVar5;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined8 unaff_R15;
  longlong *in_FS_OFFSET;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    unaff_R13 = param_1 + 0x20;
    unaff_RBP = *(undefined8 *)(param_1 + 0x10);
    unaff_RBX = *in_FS_OFFSET + -0x138;
    bVar1 = *(byte *)(*in_FS_OFFSET + -0xf0);
    uVar4 = (uint)bVar1;
    unaff_R14 = param_1;
    unaff_R15 = param_2;
    if (bVar1 != 0) goto LAB_007010bb;
LAB_00701032:
    uVar5 = *(undefined8 *)(unaff_RBX + 0x30);
    *(undefined8 *)(unaff_RBX + 0x30) = unaff_RBP;
  }
  else {
    uVar4 = (*(code *)PTR_panic_fmt_007991a8)
                      (param_4,&anon_8e901ac342272c81d7b37a6ae0143219_15_llvm_8038038081886927865);
LAB_007010bb:
    if (uVar4 == 1) {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(unaff_RBX + 0x48) = 0;
      goto LAB_00701032;
    }
    uVar5 = 0;
  }
  uVar3 = <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
          ::poll(unaff_R13,unaff_R15);
  if (*(char *)(unaff_RBX + 0x48) != '\0') {
    if (*(char *)(unaff_RBX + 0x48) == '\x02') {
      bVar2 = false;
      goto joined_r0x007010e3;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(unaff_RBX + 0x48) = 0;
  }
  *(undefined8 *)(unaff_RBX + 0x30) = uVar5;
  bVar2 = true;
joined_r0x007010e3:
  if ((char)uVar3 == '\0') {
    if (bVar2) {
      uVar5 = *(undefined8 *)(unaff_RBX + 0x30);
      *(undefined8 *)(unaff_RBX + 0x30) = *(undefined8 *)(unaff_R14 + 0x10);
    }
    else {
      uVar5 = 0;
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::_closure_0_>>>
              ((undefined4 *)(unaff_R14 + 0x18));
    *(undefined4 *)(unaff_R14 + 0x18) = 2;
    if (*(char *)(unaff_RBX + 0x48) != '\0') {
      if (*(char *)(unaff_RBX + 0x48) == '\x02') {
        return uVar3;
      }
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(unaff_RBX + 0x48) = 0;
    }
    *(undefined8 *)(unaff_RBX + 0x30) = uVar5;
  }
  return uVar3;
}


