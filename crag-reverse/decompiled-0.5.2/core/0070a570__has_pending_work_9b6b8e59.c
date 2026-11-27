// 0070a570 has_pending_work

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::has_pending_work */

bool __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::has_pending_work
          (longlong *param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_2 + 0x70) == 0) {
    if (0x7ffffffffffffffe < (ulonglong)param_1[3]) {
      (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
      pcVar1 = (code *)swi(3);
      uVar2 = (*pcVar1)();
      return (bool)uVar2;
    }
    if (param_1[6] == 0) {
      return *(char *)(*param_1 + 0x1d8) != '\0';
    }
  }
  return true;
}


