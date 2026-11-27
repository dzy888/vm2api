// 00707840 <tokio[d7d91d38da47d894]::runtime::scheduler::Context>

/* WARNING: Switch with 1 destination removed at 0x0070793e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::scheduler::Context> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::scheduler::Context>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>
                (*(longlong *)(param_1 + 0x18));
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    lVar2 = *(longlong *)(param_1 + 0x30) + 8;
    for (lVar3 = *(longlong *)(param_1 + 0x38) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      plVar1 = (longlong *)(lVar2 + -8);
      lVar2 = lVar2 + 0x10;
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799670)();
    }
    <core[c0acaeba6ab4c2e0]::cell::RefCell<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>>>
              (*(undefined8 *)(param_1 + 0x18));
    lVar2 = *(longlong *)(param_1 + 0x30) + 8;
    for (lVar3 = *(longlong *)(param_1 + 0x38) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      plVar1 = (longlong *)(lVar2 + -8);
      lVar2 = lVar2 + 0x10;
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


