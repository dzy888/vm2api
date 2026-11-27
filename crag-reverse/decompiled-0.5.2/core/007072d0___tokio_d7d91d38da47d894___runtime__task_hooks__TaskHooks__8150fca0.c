// 007072d0 <tokio[d7d91d38da47d894]::runtime::task_hooks::TaskHooks>

/* WARNING: Switch with 1 destination removed at 0x006efb52 */
/* WARNING: Switch with 1 destination removed at 0x0070730b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task_hooks::TaskHooks>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task_hooks::TaskHooks>
          (undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar1 = param_1[2];
      puVar2 = (undefined8 *)param_1[3];
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


