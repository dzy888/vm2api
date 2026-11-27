// 007030a0 try_wait

/* <tokio[d7d91d38da47d894]::process::Child>::try_wait */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::process::Child>::try_wait
          (undefined4 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 unaff_EBP;
  longlong unaff_R12;
  undefined4 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_3 + 0x60) == -2) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0x68);
    *param_2 = 0x100000000;
  }
  else {
    iVar3 = (int)*(longlong *)(param_3 + 0x60);
    if (iVar3 == -1) {
      if (*(int *)(param_3 + 0x78) == 2) {
LAB_00703222:
        uVar4 = (*(code *)PTR_expect_failed_00799440)
                          (param_1,&
                                   anon_4a510ad2c2ece6409108a5920cec5cc2_17_llvm_1700297362806677381
                          );
        if (*(longlong *)(unaff_R12 + 8) == 0) {
          *(undefined8 *)(param_3 + 0x60) = 0xfffffffffffffffe;
          *(undefined4 *)(param_3 + 0x68) = unaff_EBP;
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,*(undefined8 *)(unaff_R12 + 0x10));
        *(undefined8 *)(param_3 + 0x60) = 0xfffffffffffffffe;
        *(undefined4 *)(param_3 + 0x68) = unaff_EBP;
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      lVar1 = param_3 + 0x78;
      (*(code *)PTR_try_wait_0079a900)();
    }
    else {
      if (iVar3 == 2) {
        param_1 = (*(code *)PTR_expect_failed_00799440)
                            (param_1,&
                                     anon_4a510ad2c2ece6409108a5920cec5cc2_18_llvm_1700297362806677381
                            );
        goto LAB_00703222;
      }
      lVar1 = param_3 + 0x80;
      (*(code *)PTR_try_wait_0079a900)();
    }
    if (((char)local_38 == '\0') && ((char)uStack_34 != '\0')) {
      *(undefined1 *)(param_3 + 0xa0) = 0;
      if (*(longlong *)(param_3 + 0x60) != -2) {
        if ((int)*(longlong *)(param_3 + 0x60) == -1) {
          uVar4 = <tokio[d7d91d38da47d894]::process::imp::reap::Reaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue,tokio[d7d91d38da47d894]::signal::unix::Signal>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_3 + 0x68);
          if (*(int *)(param_3 + 0x78) != 2) {
            if (*(int *)(param_3 + 0x84) != -1) {
              uVar4 = (*(code *)PTR_close_00799030)();
            }
            if (*(int *)(param_3 + 0x88) != -1) {
              uVar4 = (*(code *)PTR_close_00799030)();
            }
            if (*(int *)(param_3 + 0x8c) != -1) {
              uVar4 = (*(code *)PTR_close_00799030)();
            }
            if (*(int *)(param_3 + 0x90) != -1) {
              uVar4 = (*(code *)PTR_close_00799030)();
            }
          }
          puVar2 = *(undefined8 **)(param_3 + 0x70);
          if ((code *)*puVar2 != (code *)0x0) {
            uVar4 = (*(code *)*puVar2)();
          }
          if (puVar2[1] != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,puVar2[2]);
          }
        }
        else {
          <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(param_3 + 0x60,lVar1);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaperInner<std[6c98fd8553dbae28]::process::Child>>>
                    (param_3 + 0x60);
        }
      }
      *(undefined8 *)(param_3 + 0x60) = 0xfffffffffffffffe;
      *(undefined4 *)(param_3 + 0x68) = uStack_30;
    }
    *param_2 = CONCAT44(uStack_34,local_38);
    param_2[1] = CONCAT44(uStack_2c,uStack_30);
  }
  return param_2;
}


