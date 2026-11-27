// 006f3e40 new

/* <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,
   tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue>>::new */

longlong * __rustcall
<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaper<std[6c98fd8553dbae28]::process::Child,tokio[d7d91d38da47d894]::process::imp::GlobalOrphanQueue>>
::new(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Da;
  int local_3c;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  
  if (<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>::open::NO_PIDFD_SUPPORT == '\0')
  {
    uVar7 = 0x800;
    lVar4 = (*(code *)PTR_syscall_00799e60)(param_4,0x800);
    if (lVar4 != -1) {
      if ((int)lVar4 == -1) {
        (*(code *)PTR_expect_failed_00799440)
                  (extraout_XMM0_Da,
                   &anon_c49be660a078f24638188b28ebcb61a3_7_llvm_15508925077749842928);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar5 = (*(code *)PTR_current_00799480)();
      local_3c = (int)lVar4;
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::
      new_with_interest_and_handle::<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
                (&local_38,&local_3c,1,uVar5,uVar7,
                 &anon_c49be660a078f24638188b28ebcb61a3_22_llvm_15508925077749842928);
      if (local_38 != 2) {
        lVar4 = *param_2;
        lVar3 = param_2[1];
        uVar7 = *(undefined8 *)((longlong)param_2 + 0x14);
        *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)((longlong)param_2 + 0xc);
        *(undefined8 *)((longlong)param_1 + 0x34) = uVar7;
        param_1[4] = lVar4;
        param_1[5] = lVar3;
        *param_1 = local_38;
        param_1[1] = local_30;
        param_1[2] = local_28;
        *(int *)(param_1 + 3) = local_3c;
        return param_1;
      }
      (*(code *)PTR_close_00799030)();
      lVar4 = *param_2;
      lVar3 = param_2[1];
      uVar7 = *(undefined8 *)((longlong)param_2 + 0x14);
      *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x24) = uVar7;
      param_1[2] = lVar4;
      param_1[3] = lVar3;
      param_1[1] = local_30;
      goto LAB_006f3e77;
    }
    piVar6 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar6;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_c49be660a078f24638188b28ebcb61a3_2_llvm_15508925077749842928) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    if (iVar1 == 0x26) {
      <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>::open::NO_PIDFD_SUPPORT = '\x01';
    }
  }
  lVar4 = *param_2;
  lVar3 = param_2[1];
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar7;
  param_1[2] = lVar4;
  param_1[3] = lVar3;
  param_1[1] = 0;
LAB_006f3e77:
  *param_1 = -1;
  return param_1;
}


