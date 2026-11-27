// 006fcf30 try_acquire

/* <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::try_acquire */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::try_acquire
          (longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (param_2 >> 0x3d != 0) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_a54838b0e2c6049171e94f4eeb8260c4_28_llvm_5899425866962164388);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x20);
  while( true ) {
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if (uVar3 < param_2 * 2) break;
    LOCK();
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    bVar5 = uVar3 == uVar1;
    if (bVar5) {
      *(ulonglong *)(param_1 + 0x20) = uVar3 + param_2 * -2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
    if (bVar5) {
      return CONCAT71((int7)(uVar3 >> 8),2);
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}


