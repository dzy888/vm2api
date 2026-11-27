// 004d47d0 drop

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
  uint local_38;
  
  if (*(int *)(param_1 + 0x10) == 2) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&anon_572fb51faa0db1e51baf8d00d92dd3e9_510_llvm_7677212527096675952);
  }
  else {
    (*(code *)PTR_try_wait_00799a70)();
    if ((local_40 == 0) && (local_3c != '\0')) {
      return;
    }
    if (local_40 != 0) {
      if ((1 < (local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = 2;
    if (iVar1 != 2) {
      (*(code *)PTR_push_orphan_00799a78)();
      return;
    }
  }
  (*(code *)PTR_unwrap_failed_00799278)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


