// 007052e0 unset_waker_after_complete

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::unset_waker_after_complete */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::unset_waker_after_complete
          (ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar3 = *param_1;
  do {
    uVar4 = uVar3 & 0xffffffffffffffef;
    LOCK();
    uVar1 = *param_1;
    bVar5 = uVar3 == uVar1;
    if (bVar5) {
      *param_1 = uVar4;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  if ((uVar3 & 2) == 0) {
    (*(code *)PTR_panic_00799338)
              (uVar4,&anon_c153c4d816f71af2accb98944a80e600_46_llvm_2617760850115737065);
  }
  else if ((uVar3 & 0x10) != 0) {
    return uVar3 & 0xffffffffffffffef;
  }
  (*(code *)PTR_panic_00799338)();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}


