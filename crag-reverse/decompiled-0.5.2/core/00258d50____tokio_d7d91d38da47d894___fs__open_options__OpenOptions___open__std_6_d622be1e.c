// 00258d50 <<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::open<&std[6c98fd8553dbae28]::path::Path>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00258d8f */
/* WARNING: Switch with 1 destination removed at 0x00258dad */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::open<&std[6c98fd8553dbae28]::path::Path>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::open<&std[6c98fd8553dbae28]::path::Path>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  
  if (((*(char *)(param_1 + 0xa0) == '\x03') && (*(char *)(param_1 + 0x98) == '\x03')) &&
     (*(char *)(param_1 + 0x90) == '\x03')) {
    if (*(char *)(param_1 + 0x88) == '\x03') {
      lVar1 = *(longlong *)(param_1 + 0x80);
      cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))();
        return;
      }
    }
    else if ((*(char *)(param_1 + 0x88) == '\0') && (*(longlong *)(param_1 + 0x58) != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


