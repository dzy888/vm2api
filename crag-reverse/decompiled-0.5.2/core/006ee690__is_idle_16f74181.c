// 006ee690 is_idle

/* <tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore as
   tokio[d7d91d38da47d894]::sync::mpsc::chan::Semaphore>::is_idle */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore_as_tokio[d7d91d38da47d894]::sync::mpsc::chan::Semaphore>
::is_idle(longlong param_1)

{
  return CONCAT71((uint7)(*(ulonglong *)(param_1 + 0x20) >> 9),
                  *(ulonglong *)(param_1 + 0x20) >> 1 == *(ulonglong *)(param_1 + 0x28));
}


