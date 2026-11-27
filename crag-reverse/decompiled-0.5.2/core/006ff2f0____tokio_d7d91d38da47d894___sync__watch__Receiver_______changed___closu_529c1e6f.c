// 006ff2f0 <<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>::changed::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>::changed::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>::changed::_closure_0_>(longlong param_1)

{
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if ((*(char *)(param_1 + 0x70) == '\x03') && (*(char *)(param_1 + 0x29) == '\x04')) {
    local_30 = *(undefined8 *)(param_1 + 0x30);
    local_28 = param_1 + 0x68;
    local_20 = param_1 + 0x38;
    local_18 = param_1 + 0x40;
    <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified(&local_30);
    if (*(longlong *)(param_1 + 0x50) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x50) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}


