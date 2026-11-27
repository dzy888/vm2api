// 003c3440 drop

/* WARNING: Switch with 1 destination removed at 0x003c34c1 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  
  puVar2 = PTR_drop_join_handle_slow_00799088;
  puVar1 = PTR_drop_join_handle_fast_00799080;
  uVar4 = *(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar4 = uVar4 >> 3;
    do {
      cVar3 = (*(code *)puVar1)();
      if (cVar3 != '\0') {
        (*(code *)puVar2)();
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


