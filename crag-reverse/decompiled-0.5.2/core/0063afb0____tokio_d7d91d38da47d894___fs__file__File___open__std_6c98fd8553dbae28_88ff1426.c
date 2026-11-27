// 0063afb0 <<tokio[d7d91d38da47d894]::fs::file::File>::open<&std[6c98fd8553dbae28]::path::Path>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::fs::file::File>::open<&std[6c98fd8553dbae28]::path::Path>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::fs::file::File>::open<&std[6c98fd8553dbae28]::path::Path>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xc9) == '\x03') {
    if (((*(char *)(param_1 + 0xc0) == '\x03') && (*(char *)(param_1 + 0xb8) == '\x03')) &&
       (*(char *)(param_1 + 0xb0) == '\x03')) {
      if (*(char *)(param_1 + 0xa8) == '\x03') {
        cVar1 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar1 != '\0') {
          (*(code *)PTR_drop_join_handle_slow_00799088)();
        }
      }
      else if ((*(char *)(param_1 + 0xa8) == '\0') && (*(longlong *)(param_1 + 0x78) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
    }
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}


