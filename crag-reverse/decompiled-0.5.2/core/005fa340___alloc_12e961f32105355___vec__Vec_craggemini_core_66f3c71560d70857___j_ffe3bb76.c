// 005fa340 <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::journal::InterruptedJournalTurn>>

/* WARNING: Switch with 1 destination removed at 0x005fa3cb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::journal::InterruptedJournalTurn>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::journal::InterruptedJournalTurn>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = param_1[1] + 0x20;
    do {
      if (*(longlong *)(lVar2 + -0x20) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if ((*(longlong *)(lVar2 + -8) != -1) && (*(longlong *)(lVar2 + -8) != 0)) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


