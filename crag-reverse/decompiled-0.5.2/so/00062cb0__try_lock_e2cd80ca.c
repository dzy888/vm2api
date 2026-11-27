// 00062cb0 try_lock

/* <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<agy_bridge[64a9e9deac6c45ce]::State>>::try_lock
    */

ulonglong * __rustcall
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<agy_bridge[64a9e9deac6c45ce]::State>>::try_lock
          (ulonglong *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  LOCK();
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_2 = 1;
  }
  UNLOCK();
  if (iVar1 == 0) {
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
      bVar2 = bVar2 ^ 1;
    }
    uVar3 = (ulonglong)((char)param_2[1] != '\0');
    param_1[1] = (ulonglong)param_2;
  }
  else {
    uVar3 = 1;
    bVar2 = 2;
  }
  *(byte *)(param_1 + 2) = bVar2;
  *param_1 = uVar3;
  return param_1;
}


