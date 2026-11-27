// 00513840 <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#3},()>::{closure#1}>

/* WARNING: Switch with 1 destination removed at 0x0051386d */
/* WARNING: Switch with 1 destination removed at 0x006efc0d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#3},
   ()>::{closure#1}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_3_,()>::_closure_1_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_3_>();
  <std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x60);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x60);
  <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop((undefined8 *)(lVar2 + 0x10));
  plVar1 = *(longlong **)(lVar2 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799c38)();
    }
  }
  if ((*(longlong *)(lVar2 + 0x18) != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) {
    puVar3 = *(undefined8 **)(lVar2 + 0x28);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)();
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar3[2]);
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


