// 005545e0 <alloc[12e961f32105355]::sync::Weak<dyn_hyper[c4782d5b5c5e3493]::rt::timer::Timer+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync,&alloc[12e961f32105355]::alloc::Global>>

/* WARNING: Switch with 1 destination removed at 0x00554614 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::Weak<dyn
   hyper[c4782d5b5c5e3493]::rt::timer::Timer + core[c0acaeba6ab4c2e0]::marker::Send +
   core[c0acaeba6ab4c2e0]::marker::Sync, &alloc[12e961f32105355]::alloc::Global>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::Weak<dyn_hyper[c4782d5b5c5e3493]::rt::timer::Timer_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync,&alloc[12e961f32105355]::alloc::Global>>
          (longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_1 != -1) {
    LOCK();
    plVar1 = (longlong *)(param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar2 = 8;
      if (8 < *(ulonglong *)(param_2 + 0x10)) {
        uVar2 = *(ulonglong *)(param_2 + 0x10);
      }
      if ((-uVar2 & *(longlong *)(param_2 + 8) + uVar2 + 0xf) != 0) {
        (*(code *)PTR_free_0079adc8)();
        return;
      }
    }
  }
  return;
}


