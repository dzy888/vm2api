// 0074a620 lock

/* <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<u8>>>::lock
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<u8>>>::lock
          (ulonglong *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  
  LOCK();
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_2 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar2 = bVar2 ^ 1;
  }
  iVar1 = param_2[1];
  param_1[1] = (ulonglong)param_2;
  *(byte *)(param_1 + 2) = bVar2;
  *param_1 = (ulonglong)((char)iVar1 != '\0');
  return;
}


