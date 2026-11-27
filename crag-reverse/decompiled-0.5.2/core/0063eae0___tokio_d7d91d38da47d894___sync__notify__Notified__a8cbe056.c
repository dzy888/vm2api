// 0063eae0 <tokio[d7d91d38da47d894]::sync::notify::Notified>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::notify::Notified> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::notify::Notified>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0063eb01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))();
  return;
}


