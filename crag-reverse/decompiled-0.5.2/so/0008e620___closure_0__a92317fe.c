// 0008e620 {closure#0}

/* std[6c98fd8553dbae28]::sys::env::unix::unsetenv::{closure#0} */

ulonglong __rustcall std[6c98fd8553dbae28]::sys::env::unix::unsetenv::_closure_0_(void)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  LOCK();
  bVar8 = ENV_LOCK == 0;
  if (bVar8) {
    ENV_LOCK = 0x3fffffff;
  }
  UNLOCK();
  if (!bVar8) {
    (*(code *)PTR_write_contended_000c41f8)();
  }
  puVar1 = PTR_GLOBAL_PANIC_COUNT_000c3ac8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
    bVar2 = bVar2 ^ 1;
  }
  iVar4 = (*(code *)PTR_unsetenv_000c4270)();
  if (iVar4 == -1) {
    piVar5 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar4 = *piVar5;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    uVar6 = (longlong)iVar4 << 0x20 | 2;
  }
  else {
    uVar6 = 0;
  }
  if (((bVar2 == 0) && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
     (cVar3 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar3 == '\0')) {
    DAT_000c6720 = 1;
  }
  LOCK();
  iVar4 = ENV_LOCK + -0x3fffffff;
  UNLOCK();
  uVar7 = ENV_LOCK + 0xc0000001;
  ENV_LOCK = iVar4;
  if (0x3fffffff < uVar7) {
    (*(code *)PTR_wake_writer_or_readers_000c4118)();
  }
  return uVar6;
}


