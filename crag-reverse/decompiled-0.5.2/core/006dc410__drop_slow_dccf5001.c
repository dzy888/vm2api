// 006dc410 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* <alloc[12e961f32105355]::sync::Arc<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  puVar3 = PTR_drop_slow_007990d0;
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    puVar4 = *(undefined8 **)(lVar1 + 0x20);
    lVar5 = 1 - *(longlong *)(lVar1 + 0x28);
    do {
      plVar2 = (longlong *)*puVar4;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)puVar3)();
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1);
  }
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


