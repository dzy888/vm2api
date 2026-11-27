// 00701e40 reregister

/* <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>>::reregister
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>>
::reregister(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *unaff_RBX;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined1 auVar7 [16];
  undefined1 local_38;
  undefined7 uStack_37;
  longlong local_30;
  longlong local_28;
  
  if ((int)param_1[3] == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    lVar2 = 0x240;
    if ((char)*param_1 != '\0') {
      lVar2 = 0x338;
    }
    unaff_RBX = param_1;
    if (*(int *)(param_1[1] + 0x44 + lVar2) != -1) {
      auVar7 = <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::deregister_source::
               <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
                         (param_1[1] + lVar2,param_1 + 2,param_1 + 3);
      uVar6 = auVar7._8_8_;
      uVar3 = auVar7._0_8_;
      if (uVar3 != 0) {
        uVar5 = (auVar7._0_4_ & 3) - 2;
        uVar6 = (ulonglong)uVar5;
        if ((1 < uVar5) && ((uVar3 & 3) != 0)) {
          local_30 = uVar3 - 1;
          local_38 = 3;
          (*(code *)PTR_drop_00799040)();
        }
      }
      uVar4 = (*(code *)PTR_current_00799480)();
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::
      new_with_interest_and_handle::<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
                (&local_38,param_1 + 3,param_2,uVar4,uVar6,
                 &anon_ed01ef58651a73351ccd2244bf431f77_6_llvm_1588049147593173555);
      lVar1 = local_30;
      lVar2 = CONCAT71(uStack_37,local_38);
      if (lVar2 != 2) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
        *param_1 = lVar2;
        param_1[1] = lVar1;
        param_1[2] = local_28;
        local_30 = 0;
      }
      return local_30;
    }
  }
  (*(code *)PTR_expect_failed_00799440)();
  *unaff_RBX = unaff_R15;
  unaff_RBX[1] = unaff_R14;
  unaff_RBX[2] = unaff_R12;
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume();
}


