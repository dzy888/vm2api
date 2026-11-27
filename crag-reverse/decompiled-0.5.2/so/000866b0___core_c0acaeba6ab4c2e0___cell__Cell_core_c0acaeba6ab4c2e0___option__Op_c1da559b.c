// 000866b0 <core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<u8>>>>>>

/* WARNING: Switch with 1 destination removed at 0x000866c2 */
/* WARNING: Switch with 1 destination removed at 0x0009e1e1 */
/* std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<u8>>>>>>
    */

void __rustcall
std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<u8>>>>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 1) = 2;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
      }
      if (lVar2 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar2 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_free_000c4290)(param_4,8);
          return;
        }
      }
      return;
    }
  }
  return;
}


