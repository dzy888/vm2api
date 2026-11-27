// 0049d7e0 <tokio[d7d91d38da47d894]::runtime::runtime::Runtime>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::runtime::Runtime> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::runtime::Runtime>
          (char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  (*(code *)PTR_drop_00799ae8)();
  if (*param_1 == '\0') {
    LOCK();
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x28) = 0;
    UNLOCK();
    if (lVar1 != 0) {
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>>
                ();
    }
  }
  if (param_1[0x30] == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x38);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x38);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>(param_1 + 0x40);
  return;
}


