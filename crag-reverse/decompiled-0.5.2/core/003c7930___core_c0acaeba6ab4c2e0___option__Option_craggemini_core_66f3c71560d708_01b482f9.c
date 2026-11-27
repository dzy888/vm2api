// 003c7930 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::shm::ShmOwner>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::shm::ShmOwner>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::shm::ShmOwner>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == -1) {
    return;
  }
  <craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop();
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_munmap_007990b8)();
  return;
}


