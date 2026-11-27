// 00705240 transition_to_shutdown

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_shutdown */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_shutdown(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = (uVar2 & 3) == 0 | uVar2 | 0x20;
      uVar3 = uVar2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return CONCAT71((int7)(uVar3 >> 8),(uVar2 & 3) == 0);
}


