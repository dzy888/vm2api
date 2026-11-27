// 006e92f0 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>

/* WARNING: Switch with 1 destination removed at 0x006e9459 */
/* WARNING: Switch with 1 destination removed at 0x006efb52 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(longlong *)(param_1 + 0x3d0) != -1) && (*(longlong *)(param_1 + 0x3d0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote]>>
            (*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  lVar1 = *(longlong *)(param_1 + 0x1b8);
  for (lVar7 = 0; lVar1 != lVar7; lVar7 = lVar7 + 1) {
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
              (*(undefined8 *)(lVar6 + lVar7 * 8));
  }
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1a8) << 3;
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <tokio[d7d91d38da47d894]::runtime::config::Config>(param_1 + 0x228,lVar6);
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1d8) << 7;
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <tokio[d7d91d38da47d894]::runtime::driver::Handle>(param_1 + 0x338,lVar6);
  plVar2 = *(longlong **)(param_1 + 0x330);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_00799af8)();
  }
  plVar2 = *(longlong **)(param_1 + 0x300);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x310);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar6 = *(longlong *)(param_1 + 0x310);
      puVar3 = *(undefined8 **)(param_1 + 0x318);
      uVar4 = puVar3[2];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar4 - 1 & 0xfffffffffffffff0);
      }
      if (lVar6 != -1) {
        LOCK();
        plVar2 = (longlong *)(lVar6 + 8);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          uVar5 = 8;
          if (8 < uVar4) {
            uVar5 = uVar4;
          }
          if ((-uVar5 & puVar3[1] + uVar5 + 0xf) != 0) {
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


