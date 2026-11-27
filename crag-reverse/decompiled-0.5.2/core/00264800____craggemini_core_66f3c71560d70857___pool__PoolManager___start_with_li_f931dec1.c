// 00264800 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00264a96 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  cVar1 = *(char *)(param_1 + 0x39a);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
    lVar4 = *(longlong *)(param_1 + 400);
    for (lVar5 = *(longlong *)(param_1 + 0x198) + 1; lVar5 != 1; lVar5 = lVar5 + -1) {
      <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar4);
      lVar4 = lVar4 + 0x1a0;
    }
    if (*(longlong *)(param_1 + 0x188) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    plVar2 = *(longlong **)(param_1 + 0x1a8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>
        ::drop_slow(param_1 + 0x1a8);
      }
    }
    (*(code *)PTR_drop_007990c8)();
    plVar2 = *(longlong **)(param_1 + 0x1a0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x1a0);
      plVar2 = *(longlong **)(lVar4 + 0x30);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
        }
      }
      puVar3 = PTR_drop_slow_007990d0;
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        puVar6 = *(undefined8 **)(lVar4 + 0x20);
        lVar5 = 1 - *(longlong *)(lVar4 + 0x28);
        do {
          plVar2 = (longlong *)*puVar6;
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)puVar3)();
          }
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 1);
      }
      if (*(longlong *)(lVar4 + 0x18) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8,param_5,param_6,unaff_R14,unaff_R15);
      }
      if (lVar4 != -1) {
        LOCK();
        plVar2 = (longlong *)(lVar4 + 8);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_free_0079adc8)(param_4,8);
          return;
        }
      }
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::register_batch::_closure_0_>
                (param_1 + 0x4c8);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x3560) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::scale_extended::_closure_0_>
                  (param_1 + 0x408);
      }
      plVar2 = *(longlong **)(param_1 + 0x3c8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(param_1 + 0x3c8);
      }
      plVar2 = *(longlong **)(param_1 + 0x3b8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x3b8);
      }
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x3568);
      plVar2 = *(longlong **)(param_1 + 0x3a8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::
        drop_slow(param_1 + 0x3a8);
      }
      (*(code *)PTR_drop_007990c8)();
      plVar2 = *(longlong **)(param_1 + 0x390);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_007990d0)();
      }
      *(undefined2 *)(param_1 + 0x3a3) = 0;
    }
    if (*(char *)(param_1 + 0x39e) != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x358);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>>
        ::drop_slow(param_1 + 0x358);
      }
    }
    *(undefined1 *)(param_1 + 0x39e) = 0;
    if (*(char *)(param_1 + 0x39f) != '\0') {
      <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>(param_1 + 0x440);
    }
    *(undefined1 *)(param_1 + 0x39f) = 0;
    if (*(char *)(param_1 + 0x3a0) != '\0') {
      <craggemini_core[66f3c71560d70857]::resume::SignatureCache>(param_1 + 0x1f90);
    }
    *(undefined1 *)(param_1 + 0x3a0) = 0;
    if (*(char *)(param_1 + 0x3a1) != '\0') {
      if (*(longlong *)(param_1 + 0x3a8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x3c0);
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x3f0);
    }
    *(undefined1 *)(param_1 + 0x3a1) = 0;
    (*(code *)PTR_drop_007990c8)();
    plVar2 = *(longlong **)(param_1 + 0x350);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    *(undefined2 *)(param_1 + 0x39b) = 0;
    if (*(char *)(param_1 + 0x3a2) != '\0') {
      <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x1c8);
    }
    *(undefined1 *)(param_1 + 0x3a2) = 0;
    *(undefined1 *)(param_1 + 0x39d) = 0;
  }
  return;
}


