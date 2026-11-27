// 004cc700 clear_calibration_backoff

/* WARNING: Switch with 1 destination removed at 0x004cc7cb */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::clear_calibration_backoff */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::clear_calibration_backoff
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 auStack_48 [24];
  
  LOCK();
  bVar5 = *(int *)(param_1 + 0x308) == 0;
  if (bVar5) {
    *(int *)(param_1 + 0x308) = 1;
  }
  UNLOCK();
  if (!bVar5) {
    (*(code *)PTR_lock_contended_00798fe0)(param_3,param_2);
  }
  puVar2 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)(param_3,param_2);
    bVar3 = bVar3 ^ 1;
  }
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(std[6c98fd8553dbae28]::time::Instant,u32),std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::remove::<str>(auStack_48,param_1 + 0x310,param_2,param_3);
  if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 0x30c) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0x308);
  *(int *)(param_1 + 0x308) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


