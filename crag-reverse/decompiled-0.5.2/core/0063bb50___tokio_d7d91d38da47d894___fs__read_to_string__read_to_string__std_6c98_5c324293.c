// 0063bb50 <tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0063bb77 */
/* WARNING: Switch with 1 destination removed at 0x0063bb92 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x38) == '\x03') {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      lVar1 = *(longlong *)(param_1 + 0x28);
      cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))();
        return;
      }
    }
    else if ((*(char *)(param_1 + 0x30) == '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


