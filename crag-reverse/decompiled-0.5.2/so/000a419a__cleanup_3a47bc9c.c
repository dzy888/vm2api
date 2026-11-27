// 000a419a cleanup

/* std[6c98fd8553dbae28]::panicking::catch_unwind::cleanup */

undefined1  [16] __rustcall
std[6c98fd8553dbae28]::panicking::catch_unwind::cleanup
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_8_ = (*(code *)PTR___rust_panic_cleanup_000c3a80)();
  LOCK();
  *(longlong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 = *(longlong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 + -1;
  UNLOCK();
  lVar1 = __tls_get_addr();
  *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + -1;
  *(undefined1 *)(lVar1 + 0x48) = 0;
  auVar2._8_8_ = param_3;
  return auVar2;
}


