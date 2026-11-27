// 006b20c0 set

/* <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::SenderDropGuard>::set */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::SenderDropGuard>::set
          (undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 1) != '\x02') {
    (*(code *)PTR_drop_007994d0)();
    plVar1 = (longlong *)*param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007994d8)();
    }
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}


