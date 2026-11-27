// 0008f4b0 increment_num_running_threads

/* <std[6c98fd8553dbae28]::thread::scoped::ScopeData>::increment_num_running_threads */

void __rustcall
<std[6c98fd8553dbae28]::thread::scoped::ScopeData>::increment_num_running_threads(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) {
    overflow();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}


