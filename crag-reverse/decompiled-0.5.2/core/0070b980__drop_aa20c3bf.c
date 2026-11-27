// 0070b980 drop

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int *unaff_RBX;
  
  if (*param_1 == 1) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&
                       PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_007956b8
              );
  }
  else {
    unaff_RBX = param_1;
    if (*(longlong *)(param_1 + 4) == 0) {
      param_1[4] = -1;
      param_1[5] = -1;
      lVar2 = *(longlong *)(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        LOCK();
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
        *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) = lVar2;
        UNLOCK();
        if (lVar1 != 0) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>(lVar1);
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
        }
        <tokio[d7d91d38da47d894]::sync::notify::Notify>::notify_with_strategy
                  (*(undefined8 *)(param_1 + 0x10),0);
        lVar2 = *(longlong *)(param_1 + 4) + 1;
      }
      *(longlong *)(param_1 + 4) = lVar2;
      return;
    }
  }
  (*(code *)PTR_panic_already_borrowed_007997b0)();
  (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  *(longlong *)(unaff_RBX + 4) = *(longlong *)(unaff_RBX + 4) + 1;
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


