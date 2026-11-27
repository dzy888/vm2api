// 00571ea0 <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>

/* WARNING: Switch with 1 destination removed at 0x005720b9 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 unaff_R14;
  longlong lVar5;
  undefined8 unaff_R15;
  longlong lVar6;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[9] != -1) && (param_1[9] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[0xc] != -1) && (param_1[0xc] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[0xf] != -1) && (param_1[0xf] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[0x12] != -1) && (param_1[0x12] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  lVar3 = param_1[0x15];
  if ((lVar3 != -1) && (lVar3 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar5 = param_1[8];
  if (lVar5 != 0) {
    lVar6 = param_1[7] + 0x20;
    do {
      if (*(longlong *)(lVar6 + -0x20) != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      lVar3 = *(longlong *)(lVar6 + -8);
      if (lVar3 != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      lVar6 = lVar6 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[6] != 0) {
    lVar3 = param_1[6] * 0x30;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x2d,lVar3);
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::AcpMcpServerSpec>>
            (param_1 + 0x18);
  plVar1 = (longlong *)param_1[0x36];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x36);
    }
  }
  if ((param_1[0x24] != -1) && (param_1[0x24] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)param_1[0x33];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)param_1[0x34];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)param_1[0x35];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  lVar3 = param_1[0x35];
  plVar1 = *(longlong **)(lVar3 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  puVar2 = PTR_drop_slow_007990d0;
  if (*(longlong *)(lVar3 + 0x28) != 0) {
    puVar4 = *(undefined8 **)(lVar3 + 0x20);
    lVar5 = 1 - *(longlong *)(lVar3 + 0x28);
    do {
      plVar1 = (longlong *)*puVar4;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar2)();
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1);
  }
  if (*(longlong *)(lVar3 + 0x18) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8,param_5,param_6,unaff_R14,unaff_R15);
  }
  if (lVar3 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar3 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


