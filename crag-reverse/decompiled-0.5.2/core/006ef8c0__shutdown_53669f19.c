// 006ef8c0 shutdown

/* WARNING: Switch with 1 destination removed at 0x006ef90e */
/* <tokio[d7d91d38da47d894]::runtime::driver::Driver>::shutdown */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::driver::Driver>::shutdown
          (longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = param_1 + 1;
  if (*param_1 == 0) {
    if (*(int *)(param_2 + 0x90) == -1) {
      (*(code *)PTR_expect_failed_00799440)
                (0,&anon_cbe4ed91a1eb3280be5cbdd57023f5c1_30_llvm_17798946807444736387);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)(param_2 + 0x80) != '\0') {
      return;
    }
    LOCK();
    uVar1 = *(undefined1 *)(param_2 + 0x80);
    *(undefined1 *)(param_2 + 0x80) = 1;
    UNLOCK();
    <tokio[d7d91d38da47d894]::runtime::time::handle::Handle>::process_at_time
              (param_2 + 0x50,0xffffffffffffffff,param_3,uVar1);
    if (*plVar3 != -1) {
      <tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::shutdown(plVar3,param_2);
      return;
    }
    lVar4 = param_1[2];
  }
  else {
    if (*plVar3 != -1) {
      <tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::shutdown();
      return;
    }
    lVar4 = param_1[2];
  }
  LOCK();
  *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
  UNLOCK();
  (*(code *)PTR_syscall_00799e60)(0x7fffffff,0x81);
  return;
}


