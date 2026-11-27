// 00493ff0 <core[c0acaeba6ab4c2e0]::option::Option<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x0049405f */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::_closure_0_>>
          (undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  
  lVar2 = param_1[10];
  if (lVar2 != -2) {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 5);
    if ((int)lVar2 != -1) {
      <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
      drop(param_1 + 10);
    }
    piVar3 = (int *)*param_1;
    if (((*(char *)(param_1 + 1) == '\0') &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


