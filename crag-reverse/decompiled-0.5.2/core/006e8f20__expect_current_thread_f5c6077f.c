// 006e8f20 expect_current_thread

/* <tokio[d7d91d38da47d894]::runtime::scheduler::Context>::expect_current_thread */

int * __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::Context>::expect_current_thread
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  
  if (*param_1 == 1) {
    (*(code *)PTR_panic_fmt_007991a8)(param_4,param_2);
    pcVar1 = (code *)swi(3);
    piVar2 = (int *)(*pcVar1)();
    return piVar2;
  }
  return param_1 + 2;
}


