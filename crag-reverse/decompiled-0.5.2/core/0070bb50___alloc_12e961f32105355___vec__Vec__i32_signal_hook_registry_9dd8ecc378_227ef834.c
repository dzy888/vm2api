// 0070bb50 <alloc[12e961f32105355]::vec::Vec<(i32,signal_hook_registry[9dd8ecc3788bb260]::Slot)>>

/* WARNING: Switch with 1 destination removed at 0x0070bbb0 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<(i32,
   signal_hook_registry[9dd8ecc3788bb260]::Slot)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<(i32,signal_hook_registry[9dd8ecc3788bb260]::Slot)>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1] + 8;
  for (lVar2 = param_1[2] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <alloc[12e961f32105355]::vec::Vec<(signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<_a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&_a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>)>>
              (lVar1);
    lVar1 = lVar1 + 0xc0;
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


