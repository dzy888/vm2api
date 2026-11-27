// 0019afc0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x0019afda */
/* <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::drop_slow
   <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<usize>>>::drop_slow
   <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<u64>>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::drop_slow
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*param_1 != -1) {
    LOCK();
    plVar1 = (longlong *)(*param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0021a8b8)(param_4,8);
      return;
    }
  }
  return;
}


