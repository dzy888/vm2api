// 006dfde0 set_thread_id

/* WARNING: Switch with 1 destination removed at 0x006dfea1 */
/* <tokio[d7d91d38da47d894]::runtime::metrics::worker::WorkerMetrics>::set_thread_id */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::metrics::worker::WorkerMetrics>::set_thread_id
          (int *param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  int *local_28;
  byte local_20;
  
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_20 = 0;
    cVar4 = (char)param_1[1];
  }
  else {
    local_20 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_20 = local_20 ^ 1;
    cVar4 = (char)param_1[1];
  }
  if (cVar4 != '\0') {
    local_28 = param_1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_c4f639d01efbe85961be48d14333fbdc_20_llvm_17218896934804705305,&local_28,
               &anon_c4f639d01efbe85961be48d14333fbdc_29_llvm_17218896934804705305);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(undefined8 *)(param_1 + 2) = param_2;
  if (((local_20 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


