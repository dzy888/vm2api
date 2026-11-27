// 001f7e2a cleanup

/* std[6c98fd8553dbae28]::panicking::catch_unwind::cleanup */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::panicking::catch_unwind::cleanup
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *in_FS_OFFSET;
  undefined1 auVar3 [16];
  
  auVar3._0_8_ = (*(code *)PTR___rust_panic_cleanup_00219c30)();
  LOCK();
  *(longlong *)PTR_GLOBAL_PANIC_COUNT_00219d08 = *(longlong *)PTR_GLOBAL_PANIC_COUNT_00219d08 + -1;
  UNLOCK();
  lVar2 = *in_FS_OFFSET;
  plVar1 = (longlong *)(lVar2 + -0x48);
  *plVar1 = *plVar1 + -1;
  *(undefined1 *)(lVar2 + -0x40) = 0;
  auVar3._8_8_ = param_3;
  return auVar3;
}


