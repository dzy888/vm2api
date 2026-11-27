// 006fcee0 <tokio[d7d91d38da47d894]::runtime::context::Context>

/* std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::<tokio[d7d91d38da47d894]::runtime::context::Context>
    */

undefined8 __rustcall
std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
<tokio[d7d91d38da47d894]::runtime::context::Context>(longlong param_1)

{
  longlong *plVar1;
  undefined8 in_RAX;
  
  *(undefined1 *)(param_1 + 0x48) = 2;
  if (*(longlong *)(param_1 + 8) != 2) {
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
  }
  return in_RAX;
}


