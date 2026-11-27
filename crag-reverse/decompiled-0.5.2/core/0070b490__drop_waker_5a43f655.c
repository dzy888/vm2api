// 0070b490 drop_waker

/* tokio[d7d91d38da47d894]::runtime::task::waker::drop_waker */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::waker::drop_waker
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 - 0x40;
  UNLOCK();
  if (uVar1 >> 6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0070b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))();
    return;
  }
  if (uVar1 >> 6 == 0) {
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


