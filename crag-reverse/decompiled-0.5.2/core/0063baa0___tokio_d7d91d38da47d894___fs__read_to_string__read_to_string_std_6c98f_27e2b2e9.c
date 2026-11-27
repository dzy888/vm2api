// 0063baa0 <tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0063bacc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  
  if ((char)param_1[0xb] == '\x03') {
    if ((char)param_1[10] == '\x03') {
      cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar2 != '\0') {
        (*(code *)PTR_drop_join_handle_slow_00799088)();
      }
    }
    else if (((char)param_1[10] == '\0') && (param_1[6] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    lVar1 = param_1[3];
  }
  else {
    if ((char)param_1[0xb] != '\0') {
      return;
    }
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


