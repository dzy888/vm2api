// 000315c0 <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>>
          (longlong *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_close_000c3ab8;
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_close_000c3ab8)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)PTR_munmap_000c3ac0)();
  return;
}


