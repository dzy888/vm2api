// 006ee3a0 drop

/* <tokio[d7d91d38da47d894]::runtime::scheduler::inject::pop::Pop<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::inject::pop::Pop<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    puVar1 = (ulonglong *)*param_1;
    do {
      lVar4 = lVar4 + -1;
      puVar2 = (ulonglong *)*puVar1;
      if (puVar2 == (ulonglong *)0x0) {
LAB_006ee429:
        param_1[1] = lVar4;
        return;
      }
      uVar3 = puVar2[1];
      *puVar1 = uVar3;
      if (uVar3 == 0) {
        puVar1[1] = 0;
      }
      puVar2[1] = 0;
      param_1[1] = lVar4;
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x40;
      UNLOCK();
      if (uVar3 >> 6 == 1) {
        (**(code **)(puVar2[2] + 0x10))();
      }
      else if (uVar3 >> 6 == 0) {
        (*(code *)PTR_panic_00799338)
                  (param_4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
        goto LAB_006ee429;
      }
    } while (lVar4 != 0);
  }
  return;
}


