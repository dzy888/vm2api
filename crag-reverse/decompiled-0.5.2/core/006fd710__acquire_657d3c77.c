// 006fd710 acquire

/* <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::acquire */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::acquire
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *local_10;
  undefined *local_8;
  
  if (param_3 >> 0x3d == 0) {
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = param_3;
    *param_1 = param_2;
    param_1[6] = param_3;
    *(undefined1 *)(param_1 + 7) = 0;
    return param_1;
  }
  local_10 = &anon_a54838b0e2c6049171e94f4eeb8260c4_25_llvm_5899425866962164388;
  local_8 = PTR_fmt_007991f0;
  puVar2 = (undefined8 *)
           (*(code *)PTR_panic_fmt_007991a8)
                     (param_4,&anon_a54838b0e2c6049171e94f4eeb8260c4_55_llvm_5899425866962164388);
  if (&local_10 == (undefined8 **)0x0) {
    return puVar2;
  }
  LOCK();
  bVar3 = anon_a54838b0e2c6049171e94f4eeb8260c4_26_llvm_5899425866962164388._0_4_ == 0;
  if (bVar3) {
    anon_a54838b0e2c6049171e94f4eeb8260c4_26_llvm_5899425866962164388._0_4_ = 1;
  }
  UNLOCK();
  if (!bVar3) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar1 = bVar1 ^ 1;
  }
  puVar2 = (undefined8 *)
           add_permits_locked(anon_a54838b0e2c6049171e94f4eeb8260c4_26_llvm_5899425866962164388,
                              &local_10,
                              anon_a54838b0e2c6049171e94f4eeb8260c4_26_llvm_5899425866962164388,
                              bVar1);
  return puVar2;
}


