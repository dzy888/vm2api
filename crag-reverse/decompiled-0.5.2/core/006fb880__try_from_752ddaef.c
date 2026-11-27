// 006fb880 try_from

/* <tokio[d7d91d38da47d894]::process::imp::ChildStdin as
   core[c0acaeba6ab4c2e0]::convert::TryFrom<std[6c98fd8553dbae28]::process::ChildStdin>>::try_from
    */

longlong * __rustcall
<tokio[d7d91d38da47d894]::process::imp::ChildStdin_as_core[c0acaeba6ab4c2e0]::convert::TryFrom<std[6c98fd8553dbae28]::process::ChildStdin>>
::try_from(longlong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined4 local_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  uVar1 = (*(code *)PTR_from_0079a9b0)();
  uVar2 = (*(code *)PTR_fcntl_00799e68)();
  if (uVar2 == 0xffffffff) {
    puVar5 = (uint *)(*(code *)PTR___errno_location_007990a0)();
    uVar6 = (ulonglong)*puVar5;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_4a510ad2c2ece6409108a5920cec5cc2_2_llvm_1700297362806677381) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
  }
  else {
    uVar6 = (ulonglong)(uVar2 | 0x800);
    iVar3 = (*(code *)PTR_fcntl_00799e68)();
    if (iVar3 != -1) {
      uVar4 = (*(code *)PTR_current_00799480)();
      local_34 = uVar1;
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::
      new_with_interest_and_handle::<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>
                (&local_30,&local_34,2,uVar4,uVar6,
                 &anon_4a510ad2c2ece6409108a5920cec5cc2_33_llvm_1700297362806677381);
      if (local_30 == 2) {
        (*(code *)PTR_close_00799030)();
        param_1[1] = local_28;
        *param_1 = 2;
        return param_1;
      }
      *param_1 = local_30;
      param_1[1] = local_28;
      param_1[2] = local_20;
      *(undefined4 *)(param_1 + 3) = local_34;
      return param_1;
    }
    puVar5 = (uint *)(*(code *)PTR___errno_location_007990a0)();
    uVar6 = (ulonglong)*puVar5;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_4a510ad2c2ece6409108a5920cec5cc2_2_llvm_1700297362806677381) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
  }
  param_1[1] = uVar6 << 0x20 | 2;
  *param_1 = 2;
  (*(code *)PTR_close_00799030)();
  return param_1;
}


