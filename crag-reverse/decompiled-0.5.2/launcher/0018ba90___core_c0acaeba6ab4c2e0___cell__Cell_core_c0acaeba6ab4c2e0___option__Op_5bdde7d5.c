// 0018ba90 <core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>>

/* std[6c98fd8553dbae28]::sys::thread_local::native::lazy::destroy::<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>>
    */

undefined8 __rustcall
std[6c98fd8553dbae28]::sys::thread_local::native::lazy::destroy::
<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>>
          (undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 in_RAX;
  
  cVar1 = *(char *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = 2;
  if ((cVar1 == '\x01') && (plVar2 = (longlong *)*param_1, plVar2 != (longlong *)0x0)) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
      drop_slow();
    }
  }
  return in_RAX;
}


