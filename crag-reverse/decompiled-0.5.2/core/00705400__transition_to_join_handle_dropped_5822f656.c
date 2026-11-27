// 00705400 transition_to_join_handle_dropped

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_join_handle_dropped */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_join_handle_dropped
          (ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar4 = *param_1;
  do {
    uVar3 = uVar4;
    if ((uVar3 & 8) == 0) {
      ppuVar5 = &anon_c153c4d816f71af2accb98944a80e600_25_llvm_2617760850115737065;
      (*(code *)PTR_panic_00799338)
                (0xffffffffffffffe5,
                 &anon_c153c4d816f71af2accb98944a80e600_25_llvm_2617760850115737065);
      pcVar2 = (code *)swi(3);
      auVar8._0_8_ = (*pcVar2)();
      auVar8._8_8_ = ppuVar5;
      return auVar8;
    }
    uVar6 = 0xfffffffffffffff7;
    if ((uVar3 & 2) == 0) {
      uVar6 = 0xffffffffffffffe5;
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar3 == uVar1) {
      *param_1 = uVar6 & uVar3;
      uVar4 = uVar3;
    }
    else {
      uVar4 = uVar1;
    }
    UNLOCK();
  } while (uVar3 != uVar1);
  auVar7._1_7_ = (undefined7)(uVar4 >> 8);
  auVar7[0] = (uVar6 & uVar3 & 0x10) == 0;
  auVar7._8_4_ = ((uint)uVar3 & 2) >> 1;
  auVar7._12_4_ = 0;
  return auVar7;
}


