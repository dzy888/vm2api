// 0058f3f0 <core[c0acaeba6ab4c2e0]::option::Option<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd)>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,
   std[6c98fd8553dbae28]::os::fd::owned::OwnedFd, std[6c98fd8553dbae28]::os::fd::owned::OwnedFd)>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd)>>
          (int *param_1)

{
  undefined *puVar1;
  
  if (*param_1 == -1) {
    return;
  }
  <craggemini_core[66f3c71560d70857]::guard::GuardHandle>();
  puVar1 = PTR_close_00799030;
  (*(code *)PTR_close_00799030)();
  (*(code *)puVar1)();
  return;
}


