// 00705270 transition_to_terminal

/* <tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_terminal */

bool __rustcall
<tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_terminal
          (ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong *local_20;
  undefined *local_18;
  ulonglong *local_10;
  undefined *local_8;
  
  LOCK();
  local_28 = *param_1;
  *param_1 = *param_1 + param_2 * -0x40;
  UNLOCK();
  local_28 = local_28 >> 6;
  if (local_28 < param_2) {
    local_20 = &local_28;
    local_18 = PTR_fmt_007991f0;
    local_10 = &local_30;
    local_8 = PTR_fmt_007991f0;
    local_30 = param_2;
    (*(code *)PTR_panic_fmt_007991a8)
              (local_10,&anon_c153c4d816f71af2accb98944a80e600_42_llvm_2617760850115737065);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return (bool)uVar2;
  }
  return local_28 == param_2;
}


