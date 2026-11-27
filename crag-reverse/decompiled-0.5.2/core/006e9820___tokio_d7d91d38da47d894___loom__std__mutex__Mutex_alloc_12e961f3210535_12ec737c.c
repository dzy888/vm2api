// 006e9820 <tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>>>

/* WARNING: Switch with 1 destination removed at 0x006e9871 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  for (lVar3 = 0; lVar2 != lVar3; lVar3 = lVar3 + 1) {
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
              (*(undefined8 *)(lVar1 + lVar3 * 8));
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


