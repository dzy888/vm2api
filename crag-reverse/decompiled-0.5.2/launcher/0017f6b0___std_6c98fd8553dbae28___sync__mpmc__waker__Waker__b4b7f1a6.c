// 0017f6b0 <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>

/* WARNING: Switch with 1 destination removed at 0x0017f79d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[1];
  if (param_1[2] != 0) {
    lVar3 = 1 - param_1[2];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(lVar1 + lVar4);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar3 != 1);
  }
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,8);
  }
  lVar1 = param_1[4];
  if (param_1[5] != 0) {
    lVar3 = 1 - param_1[5];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(lVar1 + lVar4);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar3 != 1);
  }
  if (param_1[3] == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,8);
  return;
}


