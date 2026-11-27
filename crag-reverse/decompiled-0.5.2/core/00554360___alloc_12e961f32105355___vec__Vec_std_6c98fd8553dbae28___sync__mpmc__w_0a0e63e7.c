// 00554360 <alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>>

/* WARNING: Switch with 1 destination removed at 0x005543e9 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar3 = PTR_drop_slow_007995f0;
  lVar1 = param_1[1];
  if (param_1[2] != 0) {
    lVar5 = 1 - param_1[2];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)puVar3)();
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 != 1);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


