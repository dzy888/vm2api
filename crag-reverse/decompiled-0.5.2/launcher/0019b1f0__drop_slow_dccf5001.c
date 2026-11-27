// 0019b1f0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x0019b20a */
/* <alloc[12e961f32105355]::sync::Arc<(std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<bool>,
   std[6c98fd8553dbae28]::sync::poison::condvar::Condvar)>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<(std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<bool>,std[6c98fd8553dbae28]::sync::poison::condvar::Condvar)>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*param_1 != -1) {
    LOCK();
    plVar1 = (longlong *)(*param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0021a8b8)(param_4,8);
      return;
    }
  }
  return;
}


