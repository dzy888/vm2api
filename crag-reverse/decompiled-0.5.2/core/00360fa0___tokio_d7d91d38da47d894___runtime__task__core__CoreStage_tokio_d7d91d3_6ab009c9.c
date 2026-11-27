// 00360fa0 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x00361010 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>>>
          (int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  if (*param_1 == 1) {
    if (*(longlong *)(param_1 + 2) == 0) {
      if ((char)param_1[4] == '\0') {
        (*(code *)PTR_close_00799030)();
        return;
      }
      if (((uint)*(ulonglong *)(param_1 + 6) & 3) - 2 < 2) {
        return;
      }
      if ((*(ulonglong *)(param_1 + 6) & 3) == 0) {
        return;
      }
      (*(code *)PTR_drop_00799040)();
      return;
    }
    if (*(longlong *)(param_1 + 4) == 0) {
      return;
    }
    puVar2 = *(undefined8 **)(param_1 + 6);
    pcVar3 = (code *)*puVar2;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    lVar1 = puVar2[1];
  }
  else {
    if (*param_1 != 0) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 2);
    if (lVar1 == -1) {
      return;
    }
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


