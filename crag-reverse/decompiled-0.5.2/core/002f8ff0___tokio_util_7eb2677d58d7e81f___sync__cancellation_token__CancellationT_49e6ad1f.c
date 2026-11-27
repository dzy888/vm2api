// 002f8ff0 <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken>

/* WARNING: Switch with 1 destination removed at 0x002f9010 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 unaff_R14;
  
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  lVar2 = *param_1;
  plVar1 = *(longlong **)(lVar2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  puVar3 = PTR_drop_slow_007990d0;
  if (*(longlong *)(lVar2 + 0x28) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    lVar5 = 1 - *(longlong *)(lVar2 + 0x28);
    do {
      plVar1 = (longlong *)*puVar4;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar3)();
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1);
  }
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8,param_5,param_6,unaff_R14);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


