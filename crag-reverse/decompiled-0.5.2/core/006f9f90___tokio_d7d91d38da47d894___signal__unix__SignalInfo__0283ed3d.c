// 006f9f90 <tokio[d7d91d38da47d894]::signal::unix::SignalInfo>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::signal::unix::SignalInfo> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>
          (longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  code *pcVar5;
  
  lVar4 = *param_1;
  LOCK();
  plVar2 = (longlong *)(lVar4 + 0x140);
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    LOCK();
    puVar3 = (ulonglong *)(lVar4 + 0x130);
    *puVar3 = *puVar3 | 1;
    UNLOCK();
    (*(code *)PTR_notify_waiters_0079a7c0)();
  }
  plVar2 = (longlong *)*param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_0079a760)();
  }
  uVar1 = (int)param_1[3] - 2;
  if ((uVar1 < 2) || ((int)param_1[3] == 0)) {
    return;
  }
  (*(code *)PTR_panic_fmt_007991a8)
            (uVar1,&anon_4a510ad2c2ece6409108a5920cec5cc2_6_llvm_1700297362806677381);
  uVar1 = (int)param_1[3] - 2;
  if ((uVar1 < 2) || ((int)param_1[3] == 0)) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  (*(code *)PTR_panic_fmt_007991a8)
            (uVar1,&anon_4a510ad2c2ece6409108a5920cec5cc2_6_llvm_1700297362806677381);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


