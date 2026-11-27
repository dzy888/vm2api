// 007018e0 add_permit

/* <tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore as
   tokio[d7d91d38da47d894]::sync::mpsc::chan::Semaphore>::add_permit */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore_as_tokio[d7d91d38da47d894]::sync::mpsc::chan::Semaphore>
::add_permit(ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 - 2;
  UNLOCK();
  if (uVar1 < 2) {
    (*(code *)PTR_abort_00799748)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


