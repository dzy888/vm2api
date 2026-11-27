// 006e9290 <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>>

/* WARNING: Switch with 1 destination removed at 0x006e92b8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


