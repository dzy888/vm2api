// 00707ea0 {closure#0}

/* signal_hook_registry[9dd8ecc3788bb260]::register::<tokio[d7d91d38da47d894]::signal::unix::signal_enable::{closure#0}::{closure#0}>::{closure#0}
    */

void __rustcall
signal_hook_registry[9dd8ecc3788bb260]::register::
<tokio[d7d91d38da47d894]::signal::unix::signal_enable::{closure#0}::{closure#0}>::_closure_0_
          (longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(*param_1 + 8);
  uVar2 = (longlong)(int)param_1[1] - 1;
  if (lVar1 != 0 && uVar2 < *(ulonglong *)(*param_1 + 0x10)) {
    LOCK();
    *(undefined1 *)(lVar1 + 8 + uVar2 * 0x20) = 1;
    UNLOCK();
  }
  uVar2 = 1;
  lVar1 = (*(code *)PTR_write_0079a8e0)();
  if (lVar1 != 0) {
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return;
}


