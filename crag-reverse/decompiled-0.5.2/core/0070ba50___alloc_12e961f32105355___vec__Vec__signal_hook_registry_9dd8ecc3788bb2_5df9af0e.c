// 0070ba50 <alloc[12e961f32105355]::vec::Vec<(signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<'a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>>

/* WARNING: Switch with 1 destination removed at 0x0070bad5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<(signal_hook_registry[9dd8ecc3788bb260]::ActionId,
   alloc[12e961f32105355]::sync::Arc<dyn for<'a> core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a
   libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),
   Output = ()> + core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<(signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<_a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&_a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>)>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar3 = PTR_drop_slow_0079a9f0;
  lVar1 = param_1[1];
  if (param_1[2] != 0) {
    lVar5 = 1 - param_1[2];
    lVar4 = 0x10;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)puVar3)();
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar5 != 1);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,0x10);
  return;
}


