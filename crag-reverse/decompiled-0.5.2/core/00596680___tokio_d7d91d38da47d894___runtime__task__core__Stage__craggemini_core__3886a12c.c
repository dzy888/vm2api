// 00596680 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14}>>

/* WARNING: Switch with 1 destination removed at 0x005966d9 */
/* WARNING: Switch with 1 destination removed at 0x005967aa */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x630] == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x5e);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x5e);
      }
      plVar1 = *(longlong **)(param_1 + 0x60);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x60);
      }
      <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 2);
      (*(code *)PTR_drop_007990c8)();
    }
    else {
      if ((char)param_1[0x630] != '\x03') {
        return;
      }
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
                (param_1 + 0x66);
      plVar1 = *(longlong **)(param_1 + 0x5e);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x5e);
      }
      plVar1 = *(longlong **)(param_1 + 0x60);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x60);
      }
      <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 2);
      (*(code *)PTR_drop_007990c8)();
    }
    plVar1 = *(longlong **)(param_1 + 0x62);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 0x62);
      plVar1 = *(longlong **)(lVar2 + 0x30);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
        }
      }
      puVar3 = PTR_drop_slow_007990d0;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        puVar5 = *(undefined8 **)(lVar2 + 0x20);
        lVar6 = 1 - *(longlong *)(lVar2 + 0x28);
        do {
          plVar1 = (longlong *)*puVar5;
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)puVar3)();
          }
          puVar5 = puVar5 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 1);
      }
      if (*(longlong *)(lVar2 + 0x18) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8,param_5,param_6,unaff_R14,unaff_R15);
      }
      if (lVar2 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar2 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar4 = 8;
          goto __rustc_100742bb89c490cb____rust_dealloc;
        }
      }
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (*(longlong *)(param_1 + 4) != 0)) {
    puVar5 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)();
    }
    if (puVar5[1] != 0) {
      uVar4 = puVar5[2];
__rustc_100742bb89c490cb____rust_dealloc:
      (*(code *)PTR_free_0079adc8)(param_4,uVar4);
      return;
    }
  }
  return;
}


