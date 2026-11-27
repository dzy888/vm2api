// 003cfdc0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x003cfe29 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_>>>
          (int *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*param_1 == 0) {
    if (0 < *(longlong *)(param_1 + 2)) {
LAB_003cfe20:
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  else if (*param_1 == 1) {
    if ((char)param_1[2] == '\0') {
      lVar3 = *(longlong *)(param_1 + 4);
      if (lVar3 == -1) {
        if (((uint)*(ulonglong *)(param_1 + 6) & 3) - 2 < 2) {
          return;
        }
        if ((*(ulonglong *)(param_1 + 6) & 3) == 0) {
          return;
        }
        (*(code *)PTR_drop_00799040)();
        return;
      }
    }
    else {
      if (*(longlong *)(param_1 + 6) == 0) {
        return;
      }
      puVar1 = *(undefined8 **)(param_1 + 8);
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
      lVar3 = puVar1[1];
    }
    if (lVar3 != 0) goto LAB_003cfe20;
  }
  return;
}


