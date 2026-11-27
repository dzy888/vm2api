// 0056e370 <craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0056e685 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x444) == '\0') {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x290) != -1) && (*(longlong *)(param_1 + 0x290) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x2a8) != -1) && (*(longlong *)(param_1 + 0x2a8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar2 = PTR___rust_dealloc_00798fc8;
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68) + 0x20;
      do {
        if (*(longlong *)(lVar4 + -0x20) != 0) {
          (*(code *)puVar2)(param_4,1);
        }
        if (*(longlong *)(lVar4 + -8) != 0) {
          (*(code *)puVar2)(param_4,1);
        }
        lVar4 = lVar4 + 0x30;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    if ((*(longlong *)(param_1 + 0x2c0) != -1) &&
       (<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                  (*(undefined8 *)(param_1 + 0x2c8),*(undefined8 *)(param_1 + 0x2d0)),
       *(longlong *)(param_1 + 0x2c0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x78);
    if ((*(longlong *)(param_1 + 0x2d8) != -1) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    lVar3 = *(longlong *)(param_1 + 0x2f0);
    if ((lVar3 != -1) && (lVar3 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar2 = PTR___rust_dealloc_00798fc8;
    lVar4 = *(longlong *)(param_1 + 600);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x250) + 8;
      do {
        lVar3 = *(longlong *)(lVar5 + -8);
        if (lVar3 != 0) {
          (*(code *)puVar2)(param_4,1);
        }
        lVar5 = lVar5 + 0x18;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*(longlong *)(param_1 + 0x248) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x248) * 0x18;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x260,lVar3);
    if ((*(longlong *)(param_1 + 0x308) != -1) && (*(longlong *)(param_1 + 0x308) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 800) != -1) && (*(longlong *)(param_1 + 800) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    lVar3 = *(longlong *)(param_1 + 0x338);
    if (lVar3 == -1) {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x444) != '\x03') {
      return;
    }
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x410) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x410) + 0x18))();
    }
    <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
              (param_1 + 0x3d8);
    *(undefined1 *)(param_1 + 0x446) = 0;
    plVar1 = *(longlong **)(param_1 + 0x3d0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_1 + 0x3d0);
    }
    <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard>(param_1 + 0x3c8);
    *(undefined8 *)(param_1 + 0x44d) = 0;
    *(undefined8 *)(param_1 + 0x447) = 0;
    lVar3 = *(longlong *)(param_1 + 0x368);
  }
  if (lVar3 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


