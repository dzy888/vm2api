// 003e8940 <tokio[d7d91d38da47d894]::sync::batch_semaphore::Acquire>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::batch_semaphore::Acquire>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::batch_semaphore::Acquire>
          (longlong param_1)

{
  (*(code *)PTR_drop_00799100)();
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003e8961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0x18))();
  return;
}


