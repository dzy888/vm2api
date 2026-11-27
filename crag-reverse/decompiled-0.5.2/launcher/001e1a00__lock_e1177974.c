// 001e1a00 lock

/* <std[6c98fd8553dbae28]::io::stdio::Stdin>::lock */

undefined1  [16] __rustcall <std[6c98fd8553dbae28]::io::stdio::Stdin>::lock(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  
  piVar2 = (int *)*param_1;
  LOCK();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    *piVar2 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00219d70)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    uVar4 = (ulonglong)uVar3 ^ 1;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = piVar2;
  return auVar5;
}


