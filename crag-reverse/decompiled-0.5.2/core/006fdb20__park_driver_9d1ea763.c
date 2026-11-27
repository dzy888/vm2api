// 006fdb20 park_driver

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Inner>::park_driver */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Inner>::park_driver
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 unaff_RBX;
  ulonglong local_20;
  ulonglong *local_18;
  undefined *local_10;
  
  if (param_5 == 0 && param_4 == 0) {
    <tokio[d7d91d38da47d894]::runtime::driver::Driver>::park_timeout(param_2,param_3,0,0);
    return 0;
  }
  local_20 = 0;
  LOCK();
  uVar2 = *(ulonglong *)(param_1 + 8);
  if (uVar2 == 0) {
    *(ulonglong *)(param_1 + 8) = 2;
  }
  else {
    local_20 = uVar2;
  }
  UNLOCK();
  if (uVar2 == 0) {
    if (param_5 == -1) {
      <tokio[d7d91d38da47d894]::runtime::driver::Driver>::park(param_2,param_3);
    }
    else {
      <tokio[d7d91d38da47d894]::runtime::driver::Driver>::park_timeout
                (param_2,param_3,param_4,param_5);
    }
    LOCK();
    local_20 = *(ulonglong *)(param_1 + 8);
    *(ulonglong *)(param_1 + 8) = 0;
    UNLOCK();
    if ((local_20 & 0xfffffffffffffffe) == 2) {
      return 0;
    }
    local_18 = &local_20;
    local_10 = PTR_fmt_007991f0;
    local_20 = (*(code *)PTR_panic_fmt_007991a8)
                         (local_20 & 0xfffffffffffffffe,
                          &anon_a54838b0e2c6049171e94f4eeb8260c4_43_llvm_5899425866962164388);
  }
  else if (local_20 == 3) {
    LOCK();
    *(undefined8 *)(param_1 + 8) = 0;
    UNLOCK();
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
  }
  local_18 = &local_20;
  local_10 = PTR_fmt_007991f0;
  (*(code *)PTR_panic_fmt_007991a8)();
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}


