// 006e24b0 <tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::blocking::sharded::Shard>>

/* WARNING: Switch with 1 destination removed at 0x006e24de */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::blocking::sharded::Shard>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::blocking::sharded::Shard>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop((longlong *)(param_1 + 8));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


