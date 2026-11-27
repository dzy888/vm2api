// 0008d4b0 {closure#0}

/* <std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::initialize<std[6c98fd8553dbae28]::sys::random::linux::getrandom::{closure#0},
   core[c0acaeba6ab4c2e0]::io::error::Error>::{closure#0}>::{closure#0} */

void __rustcall
<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::initialize<std[6c98fd8553dbae28]::sys::random::linux::getrandom::{closure#0},core[c0acaeba6ab4c2e0]::io::error::Error>::{closure#0}>
::_closure_0_(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int local_58;
  undefined8 local_50;
  int local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined2 local_24;
  
  plVar1 = (longlong *)*param_1;
  puVar2 = (undefined4 *)*plVar1;
  puVar3 = (ulonglong *)plVar1[1];
  *plVar1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    (*(code *)PTR_unwrap_failed_000c3b08)();
    *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_30 = 0x1b600000000;
  local_24 = 0;
  local_28 = 1;
  (*(code *)PTR_from_bytes_with_nul_000c40a8)(param_4,0xd);
  if (local_58 == 1) {
    puVar5 = &DAT_000c1618;
    uVar4 = *puVar3;
  }
  else {
    <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_40,local_50,&local_30);
    if (local_40 != 1) {
      *puVar2 = local_3c;
      return;
    }
    uVar4 = *puVar3;
    puVar5 = local_38;
  }
  if (((uVar4 != 0) && (1 < ((uint)uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
    (*(code *)PTR_drop_000c3ae0)();
  }
  *puVar3 = (ulonglong)puVar5;
  *param_2 = 2;
  return;
}


