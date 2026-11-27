// 00707230 <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::time::InnerState>>

/* WARNING: Switch with 1 destination removed at 0x00707255 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::time::InnerState>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<()>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::blocking::pool::LockedInner>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedCoord>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::util::linked_list::LinkedList<tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::util::linked_list::LinkedList<tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::time::InnerState>>
          (int *param_1,ulonglong param_2)

{
  int iVar1;
  char cVar2;
  
  if ((((param_2 & 1) == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar2 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


