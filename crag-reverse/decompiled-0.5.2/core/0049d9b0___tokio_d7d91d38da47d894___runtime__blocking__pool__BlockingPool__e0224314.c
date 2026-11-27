// 0049d9b0 <tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>

/* WARNING: Switch with 1 destination removed at 0x0049da59 */
/* WARNING: Switch with 1 destination removed at 0x006efd1e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  (*(code *)PTR_drop_00799af0)();
  plVar2 = (longlong *)*param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_00799af8)();
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    uVar4 = *(ulonglong *)(lVar3 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar3 + 0x30);
      bVar5 = uVar4 == uVar1;
      if (bVar5) {
        *(ulonglong *)(lVar3 + 0x30) = uVar4 | 4;
      }
      else {
        uVar4 = uVar1;
      }
      UNLOCK();
    } while (!bVar5);
    if (((uint)uVar4 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x10))();
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar3 + 0x30) = *(ulonglong *)(lVar3 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar4 & 2) != 0) {
      *(undefined1 *)(lVar3 + 0x38) = 0;
    }
    plVar2 = (longlong *)param_1[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar3 = param_1[1];
        uVar4 = *(ulonglong *)(lVar3 + 0x30);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x18))();
        }
        if ((uVar4 & 8) != 0) {
          (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
        }
        if (lVar3 != -1) {
          LOCK();
          plVar2 = (longlong *)(lVar3 + 8);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_free_0079adc8)();
            return;
          }
        }
        return;
      }
    }
  }
  return;
}


