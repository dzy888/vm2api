// 006fd490 new

/* <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::new */

undefined4 * __rustcall
<tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::new
          (undefined4 param_1,undefined4 *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if (param_3 >> 0x3d == 0) {
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 6) = 0;
    *(ulonglong *)(param_2 + 8) = param_3 * 2;
    return param_2;
  }
  (*(code *)PTR_panic_fmt_007991a8)
            (param_1,&anon_a54838b0e2c6049171e94f4eeb8260c4_36_llvm_5899425866962164388);
  pcVar1 = (code *)swi(3);
  puVar2 = (undefined4 *)(*pcVar1)();
  return puVar2;
}


