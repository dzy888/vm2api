// 004730c0 <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>

/* WARNING: Switch with 1 destination removed at 0x00473140 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  
  puVar2 = PTR_drop_join_handle_slow_00799088;
  puVar1 = PTR_drop_join_handle_fast_00799080;
  for (lVar4 = param_1[2]; lVar4 != 0; lVar4 = lVar4 + -1) {
    cVar3 = (*(code *)puVar1)();
    if (cVar3 != '\0') {
      (*(code *)puVar2)();
    }
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


