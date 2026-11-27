// 0049dac0 <tokio[d7d91d38da47d894]::runtime::blocking::shutdown::Receiver>

/* WARNING: Switch with 1 destination removed at 0x0049db49 */
/* WARNING: Switch with 1 destination removed at 0x006efd1e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::blocking::shutdown::Receiver>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::blocking::shutdown::Receiver>(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar4 = *(ulonglong *)(lVar2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar2 + 0x30);
      bVar5 = uVar4 == uVar1;
      if (bVar5) {
        *(ulonglong *)(lVar2 + 0x30) = uVar4 | 4;
      }
      else {
        uVar4 = uVar1;
      }
      UNLOCK();
    } while (!bVar5);
    if (((uint)uVar4 & 10) == 8) {
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x10))();
    }
    if (((uint)uVar4 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x30) = *(ulonglong *)(lVar2 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar4 & 2) != 0) {
      *(undefined1 *)(lVar2 + 0x38) = 0;
    }
    plVar3 = (longlong *)*param_1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        lVar2 = *param_1;
        uVar4 = *(ulonglong *)(lVar2 + 0x30);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x18))();
        }
        if ((uVar4 & 8) != 0) {
          (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))();
        }
        if (lVar2 != -1) {
          LOCK();
          plVar3 = (longlong *)(lVar2 + 8);
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
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


