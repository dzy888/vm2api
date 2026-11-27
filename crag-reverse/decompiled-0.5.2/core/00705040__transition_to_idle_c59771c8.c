// 00705040 transition_to_idle

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_idle */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_idle
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined3 uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar3 = *param_1;
  do {
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR_panic_00799338)
                (param_4,&anon_c153c4d816f71af2accb98944a80e600_19_llvm_2617760850115737065);
LAB_007050fd:
      (*(code *)PTR_panic_00799338)();
LAB_00705116:
      (*(code *)PTR_panic_00799338)();
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    uVar4 = (undefined3)(param_4 >> 8);
    if ((uVar3 & 0x20) != 0) {
      param_4 = CONCAT31(uVar4,3);
      goto LAB_007050dd;
    }
    if ((uVar3 & 4) == 0) {
      if (uVar3 < 0x40) goto LAB_007050fd;
      uVar5 = (uVar3 & 0xffffffffffffffde) - 0x40;
      param_4 = CONCAT31(uVar4,(uVar5 < 0x40) * '\x02');
    }
    else {
      if ((longlong)uVar3 < 0) goto LAB_00705116;
      uVar5 = (uVar3 & 0xffffffffffffffde) + 0x40;
      param_4 = CONCAT31(uVar4,1);
    }
    LOCK();
    uVar1 = *param_1;
    bVar6 = uVar3 == uVar1;
    if (bVar6) {
      *param_1 = uVar5;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
    if (bVar6) {
LAB_007050dd:
      return (ulonglong)param_4;
    }
  } while( true );
}


