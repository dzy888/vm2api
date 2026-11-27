// 00705150 transition_to_running

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_running */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_running
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = *param_1;
  while ((uVar2 & 4) != 0) {
    if ((uVar2 & 3) == 0) {
      param_4 = CONCAT71((int7)((uVar2 & 0xffffffff) >> 8),(byte)(uVar2 & 0xffffffff) >> 5) &
                0xffffffffffffff01;
      LOCK();
      bVar3 = uVar2 == *param_1;
      if (bVar3) {
        *param_1 = (uVar2 & 0xfffffffffffffff8) + 1;
      }
      else {
        uVar2 = *param_1;
      }
      UNLOCK();
    }
    else {
      if (uVar2 < 0x40) goto LAB_007051b9;
      param_4 = CONCAT71((int7)(param_4 >> 8),uVar2 - 0x40 < 0x40) | 2;
      LOCK();
      bVar3 = uVar2 == *param_1;
      if (bVar3) {
        *param_1 = uVar2 - 0x40;
      }
      else {
        uVar2 = *param_1;
      }
      UNLOCK();
    }
    if (bVar3) {
      return param_4 & 0xffffffff;
    }
  }
  (*(code *)PTR_panic_00799338)
            (param_4,&anon_c153c4d816f71af2accb98944a80e600_21_llvm_2617760850115737065);
LAB_007051b9:
  (*(code *)PTR_panic_00799338)();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


