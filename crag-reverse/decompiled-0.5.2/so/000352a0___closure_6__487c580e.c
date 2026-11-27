// 000352a0 {closure#6}

/* <agy_bridge[64a9e9deac6c45ce]::Runtime>::serve::{closure#6} */

undefined8 __rustcall
<agy_bridge[64a9e9deac6c45ce]::Runtime>::serve::_closure_6_
          (int *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR_<&str>_000c3b30)(param_4,0x15);
  if ((param_2 == '\0') &&
     ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) {
    cVar2 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_000c3ad0)();
    return uVar3;
  }
  return uVar3;
}


