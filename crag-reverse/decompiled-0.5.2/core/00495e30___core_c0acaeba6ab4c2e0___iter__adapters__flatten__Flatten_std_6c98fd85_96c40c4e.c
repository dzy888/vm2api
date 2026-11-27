// 00495e30 <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>

/* WARNING: Switch with 1 destination removed at 0x00495ec6 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((char)param_1[0xd] != '\x02') {
    plVar1 = (longlong *)param_1[0xc];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007997d0)();
    }
  }
  if ((*param_1 != 0) && (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007997d0)();
    }
    lVar2 = param_1[3];
    *(undefined1 *)param_1[2] = 0;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
  }
  if ((param_1[6] != 0) && (plVar1 = (longlong *)param_1[7], plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007997d0)();
    }
    lVar2 = param_1[9];
    *(undefined1 *)param_1[8] = 0;
    if (lVar2 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


