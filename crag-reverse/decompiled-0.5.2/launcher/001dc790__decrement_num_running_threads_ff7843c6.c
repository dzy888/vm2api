// 001dc790 decrement_num_running_threads

/* <std[6c98fd8553dbae28]::thread::scoped::ScopeData>::decrement_num_running_threads */

void __rustcall
<std[6c98fd8553dbae28]::thread::scoped::ScopeData>::decrement_num_running_threads
          (longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  LOCK();
  plVar1 = param_1 + 1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    LOCK();
    iVar2 = *(int *)(*param_1 + 0x28);
    *(int *)(*param_1 + 0x28) = 1;
    UNLOCK();
    if (iVar2 == -1) {
      (*(code *)PTR_syscall_0021a0a0)(1,0x81);
      return;
    }
  }
  return;
}


