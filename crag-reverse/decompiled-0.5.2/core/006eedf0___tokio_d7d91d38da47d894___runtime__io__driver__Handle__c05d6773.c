// 006eedf0 <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::io::driver::Handle> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::io::driver::Handle>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  (*(code *)PTR_close_00799030)();
  puVar3 = PTR_drop_slow_00799150;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar5 = 1 - *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)puVar3)();
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar5 != 1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  (*(code *)PTR_close_00799030)();
  return;
}


