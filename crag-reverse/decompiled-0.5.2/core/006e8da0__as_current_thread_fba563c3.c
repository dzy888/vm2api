// 006e8da0 as_current_thread

/* <tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::as_current_thread */

int * __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::as_current_thread
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  
  if (*param_1 == 1) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_1c7207ea9655bfcf55d918eab6d9918c_47_llvm_17559541839288726608);
    pcVar1 = (code *)swi(3);
    piVar2 = (int *)(*pcVar1)();
    return piVar2;
  }
  return param_1 + 2;
}


