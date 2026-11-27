// 0061bc10 registry

/* <craggemini_core[66f3c71560d70857]::server::Runtime>::registry */

longlong __rustcall <craggemini_core[66f3c71560d70857]::server::Runtime>::registry(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  longlong local_20;
  byte local_18;
  
  LOCK();
  bVar3 = *(int *)(param_1 + 0x310) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x310) = 1;
  }
  UNLOCK();
  if (!bVar3) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_18 = 0;
    cVar1 = *(char *)(param_1 + 0x314);
  }
  else {
    local_18 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_18 = local_18 ^ 1;
    cVar1 = *(char *)(param_1 + 0x314);
  }
  if (cVar1 != '\0') {
    local_20 = param_1 + 0x310;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_20,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  return param_1 + 0x310;
}


