// 006fceb0 <tokio[d7d91d38da47d894]::runtime::park::ParkThread>

/* std[6c98fd8553dbae28]::sys::thread_local::native::lazy::destroy::<tokio[d7d91d38da47d894]::runtime::park::ParkThread>
    */

undefined8 __rustcall
std[6c98fd8553dbae28]::sys::thread_local::native::lazy::destroy::
<tokio[d7d91d38da47d894]::runtime::park::ParkThread>(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 in_RAX;
  
  cVar1 = *(char *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = 2;
  if (cVar1 == '\x01') {
    plVar2 = (longlong *)*param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799668)();
    }
  }
  return in_RAX;
}


