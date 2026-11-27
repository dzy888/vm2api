// 006dfc70 next_seed

/* <tokio[d7d91d38da47d894]::util::rand::rt::RngSeedGenerator>::next_seed */

void __rustcall <tokio[d7d91d38da47d894]::util::rand::rt::RngSeedGenerator>::next_seed(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int *local_30;
  byte local_28;
  
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
    local_28 = 0;
    cVar4 = (char)param_1[1];
  }
  else {
    local_28 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_28 = local_28 ^ 1;
    cVar4 = (char)param_1[1];
  }
  if (cVar4 != '\0') {
    local_30 = param_1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_c4f639d01efbe85961be48d14333fbdc_21_llvm_17218896934804705305,&local_30,
               &anon_c4f639d01efbe85961be48d14333fbdc_27_llvm_17218896934804705305);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar5 = param_1[3];
  uVar6 = param_1[2] << 0x11 ^ param_1[2];
  uVar6 = uVar6 >> 7 ^ uVar5 >> 0x10 ^ uVar5 ^ uVar6;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar5 >> 7 ^ uVar5 ^ uVar6 ^ uVar6 >> 0x10;
  if (((local_28 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


