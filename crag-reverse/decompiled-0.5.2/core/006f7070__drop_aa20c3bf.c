// 006f7070 drop

/* <tokio[d7d91d38da47d894]::process::imp::reap::Reaper<std[6c98fd8553dbae28]::process::Child,
   tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue,
   tokio[d7d91d38da47d894]::signal::unix::Signal> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
    */

void __rustcall
<tokio[d7d91d38da47d894]::process::imp::reap::Reaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue,tokio[d7d91d38da47d894]::signal::unix::Signal>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  int local_40;
  char local_3c;
  ulonglong local_38;
  int local_30;
  undefined4 local_2c;
  longlong lStack_28;
  undefined4 uStack_20;
  undefined8 local_1c;
  
  if (*(int *)(param_1 + 0x10) == 2) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&anon_d250138afc359909044a05a15195067d_57_llvm_15875357693395155123);
  }
  else {
    (*(code *)PTR_try_wait_0079a900)();
    if ((local_40 == 0) && (local_3c != '\0')) {
      return;
    }
    if (local_40 != 0) {
      if ((1 < ((uint)local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
        lStack_28 = local_38 - 1;
        local_30 = CONCAT31(local_30._1_3_,3);
        (*(code *)PTR_drop_00799040)();
      }
    }
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = 2;
    if (iVar1 != 2) {
      local_2c = *(undefined4 *)(param_1 + 0x14);
      lStack_28 = *(undefined8 *)(param_1 + 0x18);
      uStack_20 = *(undefined4 *)(param_1 + 0x20);
      local_1c = *(undefined8 *)(param_1 + 0x24);
      local_30 = iVar1;
      <tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueueImpl<std[6c98fd8553dbae28]::process::Child>>
      ::push_orphan(tokio[d7d91d38da47d894]::process::imp::get_orphan_queue::ORPHAN_QUEUE,&local_30)
      ;
      return;
    }
  }
  (*(code *)PTR_unwrap_failed_00799278)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


