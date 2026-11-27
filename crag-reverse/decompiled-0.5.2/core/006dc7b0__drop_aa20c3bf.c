// 006dc7b0 drop

/* WARNING: Switch with 1 destination removed at 0x006dc81c */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR_drop_slow_007990d0;
  puVar5 = *(undefined8 **)(param_1 + 8);
  uVar3 = *(longlong *)(param_1 + 0x18) - (longlong)puVar5;
  if (uVar3 != 0) {
    lVar4 = 1 - (uVar3 >> 3);
    do {
      plVar1 = (longlong *)*puVar5;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar2)();
      }
      puVar5 = puVar5 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


