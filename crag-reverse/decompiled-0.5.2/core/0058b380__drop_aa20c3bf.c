// 0058b380 drop

/* WARNING: Switch with 1 destination removed at 0x0058b39a */
/* <alloc[12e961f32105355]::sync::Weak<craggemini_core[66f3c71560d70857]::pool::PoolManager> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::sync::Weak<craggemini_core[66f3c71560d70857]::pool::PoolManager>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*param_1 != -1) {
    LOCK();
    plVar1 = (longlong *)(*param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


