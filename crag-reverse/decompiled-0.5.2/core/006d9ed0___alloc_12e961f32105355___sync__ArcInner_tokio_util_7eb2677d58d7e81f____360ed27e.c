// 006d9ed0 <alloc[12e961f32105355]::sync::ArcInner<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>

/* WARNING: Switch with 1 destination removed at 0x006d9f60 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::tree_node::TreeNode>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  puVar2 = PTR_drop_slow_007990d0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    lVar3 = 1 - *(longlong *)(param_1 + 0x28);
    do {
      plVar1 = (longlong *)*puVar4;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar2)();
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 1);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


