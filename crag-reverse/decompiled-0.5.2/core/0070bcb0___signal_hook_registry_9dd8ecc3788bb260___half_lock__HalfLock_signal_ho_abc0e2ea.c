// 0070bcb0 <signal_hook_registry[9dd8ecc3788bb260]::half_lock::HalfLock<signal_hook_registry[9dd8ecc3788bb260]::SignalData>>

/* WARNING: Switch with 1 destination removed at 0x0070bcd5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<signal_hook_registry[9dd8ecc3788bb260]::half_lock::HalfLock<signal_hook_registry[9dd8ecc3788bb260]::SignalData>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<signal_hook_registry[9dd8ecc3788bb260]::half_lock::HalfLock<signal_hook_registry[9dd8ecc3788bb260]::SignalData>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::vec::Vec<(i32,signal_hook_registry[9dd8ecc3788bb260]::Slot)>>
            (*(longlong *)(param_1 + 0x10) + 0x10);
  (*(code *)PTR_free_0079adc8)(param_4,0x10);
  return;
}


