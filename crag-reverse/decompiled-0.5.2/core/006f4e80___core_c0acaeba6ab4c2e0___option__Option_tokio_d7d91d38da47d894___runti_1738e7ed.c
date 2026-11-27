// 006f4e80 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  
  puVar2 = (ulonglong *)*param_1;
  if (puVar2 != (ulonglong *)0x0) {
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 - 0x40;
    UNLOCK();
    if (uVar1 >> 6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x006f4ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar2[2] + 0x10))();
      return;
    }
    if (uVar1 >> 6 == 0) {
      (*(code *)PTR_panic_00799338)
                (param_4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


