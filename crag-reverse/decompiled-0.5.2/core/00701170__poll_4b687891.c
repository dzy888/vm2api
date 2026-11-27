// 00701170 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(undefined4 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 uVar4;
  longlong unaff_R14;
  longlong unaff_R15;
  longlong *in_FS_OFFSET;
  int local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)(param_3 + 0x18) == 0) {
    unaff_RBP = *(undefined8 *)(param_3 + 0x10);
    unaff_R14 = *in_FS_OFFSET + -0x138;
    bVar1 = *(byte *)(*in_FS_OFFSET + -0xf0);
    uVar3 = (uint)bVar1;
    unaff_RBX = param_2;
    unaff_R12 = param_4;
    unaff_R15 = param_3;
    if (bVar1 != 0) goto LAB_0070126a;
LAB_007011b4:
    uVar4 = *(undefined8 *)(unaff_R14 + 0x30);
    *(undefined8 *)(unaff_R14 + 0x30) = unaff_RBP;
  }
  else {
    uVar3 = (*(code *)PTR_panic_fmt_007991a8)
                      (param_1,&anon_8e901ac342272c81d7b37a6ae0143219_15_llvm_8038038081886927865);
LAB_0070126a:
    if (uVar3 == 1) {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(unaff_R14 + 0x48) = 0;
      goto LAB_007011b4;
    }
    uVar4 = 0;
  }
  <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
  ::poll(&local_68,unaff_R15 + 0x20,unaff_R12);
  if (*(char *)(unaff_R14 + 0x48) == '\0') {
LAB_007011d8:
    *(undefined8 *)(unaff_R14 + 0x30) = uVar4;
    bVar2 = true;
  }
  else {
    if (*(char *)(unaff_R14 + 0x48) != '\x02') {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(unaff_R14 + 0x48) = 0;
      goto LAB_007011d8;
    }
    bVar2 = false;
  }
  if (local_68 != -1) {
    if (bVar2) {
      uVar4 = *(undefined8 *)(unaff_R14 + 0x30);
      *(undefined8 *)(unaff_R14 + 0x30) = *(undefined8 *)(unaff_R15 + 0x10);
    }
    else {
      uVar4 = 0;
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>>>
              ((undefined4 *)(unaff_R15 + 0x18));
    *(undefined4 *)(unaff_R15 + 0x18) = 2;
    if (*(char *)(unaff_R14 + 0x48) != '\0') {
      if (*(char *)(unaff_R14 + 0x48) == '\x02') goto LAB_0070121d;
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(unaff_R14 + 0x48) = 0;
    }
    *(undefined8 *)(unaff_R14 + 0x30) = uVar4;
  }
LAB_0070121d:
  unaff_RBX[6] = local_38;
  unaff_RBX[4] = local_48;
  unaff_RBX[5] = uStack_40;
  unaff_RBX[2] = local_58;
  unaff_RBX[3] = uStack_50;
  *unaff_RBX = CONCAT44(uStack_64,local_68);
  unaff_RBX[1] = uStack_60;
  return unaff_RBX;
}


