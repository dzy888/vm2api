// 006ff600 <tokio[d7d91d38da47d894]::runtime::task::core::Trailer>

/* WARNING: Switch with 1 destination removed at 0x006efb52 */
/* WARNING: Switch with 1 destination removed at 0x006ff634 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Trailer>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Trailer>
          (longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x20);
      puVar2 = *(undefined8 **)(param_1 + 0x28);
      uVar3 = puVar2[2];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar3 - 1 & 0xfffffffffffffff0);
      }
      if (lVar1 != -1) {
        LOCK();
        plVar4 = (longlong *)(lVar1 + 8);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          uVar5 = 8;
          if (8 < uVar3) {
            uVar5 = uVar3;
          }
          if ((-uVar5 & puVar2[1] + uVar5 + 0xf) != 0) {
            (*(code *)PTR_free_0079adc8)();
            return;
          }
        }
      }
      return;
    }
  }
  return;
}


