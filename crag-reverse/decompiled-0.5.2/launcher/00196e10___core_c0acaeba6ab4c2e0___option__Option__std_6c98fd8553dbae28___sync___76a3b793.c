// 00196e10 <core[c0acaeba6ab4c2e0]::option::Option<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1}>>

/* WARNING: Switch with 1 destination removed at 0x00196e3b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::_closure_1_>>
          (int *param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  
  if (param_2 != 2) {
    if ((((param_2 & 1) == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
       (cVar2 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    LOCK();
    iVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_syscall_0021a0a0)(1,0x81);
      return;
    }
  }
  return;
}


