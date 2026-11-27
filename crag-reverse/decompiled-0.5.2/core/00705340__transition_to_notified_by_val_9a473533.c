// 00705340 transition_to_notified_by_val

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_notified_by_val */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_notified_by_val
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar3 = *param_1;
  while ((uVar3 & 1) == 0) {
    uVar4 = (undefined7)(param_4 >> 8);
    if ((uVar3 & 6) == 0) {
      if ((longlong)uVar3 < 0) goto LAB_007053de;
      uVar5 = uVar3 + 0x44;
      param_4 = CONCAT71(uVar4,1);
    }
    else {
      if (uVar3 < 0x40) goto LAB_007053ac;
      uVar5 = uVar3 - 0x40;
      param_4 = CONCAT71(uVar4,(uVar5 < 0x40) * '\x02');
    }
LAB_00705350:
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
      return param_4 & 0xffffffff;
    }
  }
  if (uVar3 < 0x40) {
LAB_007053ac:
    (*(code *)PTR_panic_00799338)
              (param_4,&anon_c153c4d816f71af2accb98944a80e600_59_llvm_2617760850115737065);
  }
  else {
    uVar5 = (uVar3 | 4) - 0x40;
    if (0x3f < uVar5) {
      param_4 = 0;
      goto LAB_00705350;
    }
  }
  (*(code *)PTR_panic_00799338)();
LAB_007053de:
  (*(code *)PTR_panic_00799338)();
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}


