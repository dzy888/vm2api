// 006fbc50 drop

/* <tokio[d7d91d38da47d894]::runtime::task::UnownedTask<tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::UnownedTask<tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  
  puVar2 = (ulonglong *)*param_1;
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = *puVar2 - 0x80;
  UNLOCK();
  if (uVar1 < 0x80) {
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_c153c4d816f71af2accb98944a80e600_36_llvm_2617760850115737065);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar1 < 0xc0) {
                    /* WARNING: Could not recover jumptable at 0x006fbc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar2[2] + 0x10))();
    return;
  }
  return;
}


