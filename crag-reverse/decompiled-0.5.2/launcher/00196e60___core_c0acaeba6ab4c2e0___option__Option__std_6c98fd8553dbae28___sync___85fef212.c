// 00196e60 <core[c0acaeba6ab4c2e0]::option::Option<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x00196ead */
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
  int *piVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 10) != -2) {
    <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
              (param_1 + 5);
    piVar2 = (int *)*param_1;
    if (((*(char *)(param_1 + 1) == '\0') &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
       (cVar3 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar3 == '\0')) {
      *(undefined1 *)(piVar2 + 1) = 1;
    }
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_syscall_0021a0a0)(1,0x81);
      return;
    }
  }
  return;
}


