// 00576c00 <tokio[d7d91d38da47d894]::process::imp::Child>

/* WARNING: Switch with 1 destination removed at 0x00576c96 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::imp::Child> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::imp::Child>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*param_1 != -1) {
    <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaperInner<std[6c98fd8553dbae28]::process::Child>>>
              (param_1);
    return;
  }
  <tokio[d7d91d38da47d894]::process::imp::reap::Reaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue,tokio[d7d91d38da47d894]::signal::unix::Signal>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 2);
  if (param_1[6] != 2) {
    if (param_1[9] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    if (param_1[10] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    if (param_1[0xb] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    if (param_1[0xc] != -1) {
      (*(code *)PTR_close_00799030)();
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 4);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
  return;
}


