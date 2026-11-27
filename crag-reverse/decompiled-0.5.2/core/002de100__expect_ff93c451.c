// 002de100 expect

/* <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::time::Instant>>,
   std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::time::Instant>>>>>::expect
    */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::time::Instant>>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::time::Instant>>>>>
::expect(int *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined8 local_18;
  undefined1 local_10;
  
  if (*param_1 == 1) {
    local_18 = *(undefined8 *)(param_1 + 2);
    local_10 = (undefined1)param_1[4];
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>>>>_00785cd0
               ,&local_18,param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  auVar2._9_7_ = 0;
  auVar2._0_9_ = *(unkuint9 *)(param_1 + 2);
  return auVar2;
}


