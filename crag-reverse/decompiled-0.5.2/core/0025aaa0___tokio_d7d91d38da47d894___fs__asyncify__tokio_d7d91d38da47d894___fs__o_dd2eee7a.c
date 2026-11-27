// 0025aaa0 <tokio[d7d91d38da47d894]::fs::asyncify<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0},std[6c98fd8553dbae28]::fs::File>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0025aac3 */
/* WARNING: Switch with 1 destination removed at 0x0025aadb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::fs::asyncify<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0},
   std[6c98fd8553dbae28]::fs::File>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::fs::asyncify<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_,std[6c98fd8553dbae28]::fs::File>::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  
  if ((char)param_1[6] == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if ((char)param_1[6] == '\x03') {
    lVar1 = param_1[5];
    cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))();
      return;
    }
  }
  return;
}


