// 006fcad0 <tokio[d7d91d38da47d894]::runtime::scheduler::defer::Defer>

/* WARNING: Switch with 1 destination removed at 0x006fcb2d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::scheduler::defer::Defer>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::scheduler::defer::Defer>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10) + 8;
  for (lVar2 = *(longlong *)(param_1 + 0x18) + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + 0x10;
    (**(code **)(*plVar1 + 0x18))();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


