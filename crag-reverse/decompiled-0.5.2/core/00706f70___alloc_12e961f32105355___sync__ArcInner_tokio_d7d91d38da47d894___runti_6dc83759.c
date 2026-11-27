// 00706f70 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>

/* WARNING: Switch with 1 destination removed at 0x006efb52 */
/* WARNING: Switch with 1 destination removed at 0x00707035 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x2d8);
  if ((lVar5 != -1) && (lVar5 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x140) * 0x18;
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <tokio[d7d91d38da47d894]::runtime::config::Config>(param_1 + 0x170,lVar5);
  <tokio[d7d91d38da47d894]::runtime::driver::Handle>(param_1 + 0x240);
  plVar3 = *(longlong **)(param_1 + 0x238);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_00799af8)();
  }
  plVar3 = *(longlong **)(param_1 + 0x200);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x210);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x210);
      puVar1 = *(undefined8 **)(param_1 + 0x218);
      uVar2 = puVar1[2];
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(uVar2 - 1 & 0xfffffffffffffff0);
      }
      if (lVar5 != -1) {
        LOCK();
        plVar3 = (longlong *)(lVar5 + 8);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          uVar4 = 8;
          if (8 < uVar2) {
            uVar4 = uVar2;
          }
          if ((-uVar4 & puVar1[1] + uVar4 + 0xf) != 0) {
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


