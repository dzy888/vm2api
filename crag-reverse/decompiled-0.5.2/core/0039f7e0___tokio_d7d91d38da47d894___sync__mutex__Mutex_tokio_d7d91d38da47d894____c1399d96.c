// 0039f7e0 <tokio[d7d91d38da47d894]::sync::mutex::Mutex<tokio[d7d91d38da47d894]::fs::file::Inner>>

/* WARNING: Switch with 1 destination removed at 0x0039f807 */
/* WARNING: Switch with 1 destination removed at 0x0039f81c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::mutex::Mutex<tokio[d7d91d38da47d894]::fs::file::Inner>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::mutex::Mutex<tokio[d7d91d38da47d894]::fs::file::Inner>>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (1 < param_1 + 1U) {
    if (param_1 != -2) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
    cVar1 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_2 + 0x10) + 0x20))();
      return;
    }
  }
  return;
}


