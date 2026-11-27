// 003cfed0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x003cff36 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>>>
          (int *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 == 0) {
    if (0 < *(longlong *)(param_1 + 2)) {
LAB_003cff2d:
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  else if (*param_1 == 1) {
    if (*(longlong *)(param_1 + 2) == 0) {
      if ((char)param_1[4] == '\0') {
        (*(code *)PTR_close_00799030)();
        return;
      }
      if ((1 < ((uint)*(ulonglong *)(param_1 + 6) & 3) - 2) &&
         ((*(ulonglong *)(param_1 + 6) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    else if (*(longlong *)(param_1 + 4) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 6);
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
      if (puVar1[1] != 0) goto LAB_003cff2d;
    }
  }
  return;
}


