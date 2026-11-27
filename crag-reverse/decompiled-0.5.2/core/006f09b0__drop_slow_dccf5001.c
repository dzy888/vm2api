// 006f09b0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006f0bab */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  if ((*(longlong *)(lVar2 + 0x3d0) != -1) && (*(longlong *)(lVar2 + 0x3d0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar5 = PTR_drop_slow_00799658;
  puVar4 = PTR_drop_slow_00799650;
  lVar8 = *(longlong *)(lVar2 + 0x1c8);
  if (lVar8 != 0) {
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x1c0) + 8);
    do {
      plVar3 = (longlong *)puVar6[-1];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)puVar4)();
        plVar3 = (longlong *)*puVar6;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar1 = *plVar3;
        UNLOCK();
      }
      else {
        plVar3 = (longlong *)*puVar6;
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar1 = *plVar3;
        UNLOCK();
      }
      if (lVar1 == 0) {
        (*(code *)puVar5)();
      }
      puVar6 = puVar6 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (*(longlong *)(lVar2 + 0x1f8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (*(longlong *)(lVar2 + 0x188) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  lVar8 = *(longlong *)(lVar2 + 0x1b0);
  lVar1 = *(longlong *)(lVar2 + 0x1b8);
  for (lVar7 = 0; lVar1 != lVar7; lVar7 = lVar7 + 1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
              (*(undefined8 *)(lVar8 + lVar7 * 8));
  }
  lVar8 = 0;
  if (*(longlong *)(lVar2 + 0x1a8) != 0) {
    lVar8 = *(longlong *)(lVar2 + 0x1a8) << 3;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::config::Config>
            (lVar2 + 0x228,lVar8);
  lVar8 = 0;
  if (*(longlong *)(lVar2 + 0x1d8) != 0) {
    lVar8 = *(longlong *)(lVar2 + 0x1d8) << 7;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,0x80);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Handle>
            (lVar2 + 0x338,lVar8);
  plVar3 = *(longlong **)(lVar2 + 0x330);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_00799af8)();
  }
  plVar3 = *(longlong **)(lVar2 + 0x300);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0x310);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar3 = (longlong *)(lVar2 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,0x80);
      return;
    }
  }
  return;
}


