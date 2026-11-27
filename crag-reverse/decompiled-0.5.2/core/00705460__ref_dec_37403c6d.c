// 00705460 ref_dec

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::ref_dec */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::ref_dec
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 - 0x40;
  UNLOCK();
  uVar3 = uVar1 >> 6;
  if (uVar3 == 0) {
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return CONCAT71((uint7)(uVar1 >> 0xe),uVar3 == 1);
}


