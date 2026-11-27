// 006f43d0 get_peer_cred

/* tokio[d7d91d38da47d894]::net::unix::ucred::impl_linux::get_peer_cred */

undefined4 * __rustcall
tokio[d7d91d38da47d894]::net::unix::ucred::impl_linux::get_peer_cred
          (undefined4 *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong unaff_R14;
  int local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(int *)(param_2 + 0x18) == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    local_20 = 0;
    local_18 = 0;
    local_24 = 0xc;
    iVar1 = (*(code *)PTR_getsockopt_0079a8e8)(&local_20,0x11,&local_24);
    if ((iVar1 == 0) && (local_24 == 0xc)) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 1) = local_20;
      param_1[3] = local_18;
      return param_1;
    }
    piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
    unaff_R14 = (longlong)*piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 ==
        &anon_c49be660a078f24638188b28ebcb61a3_2_llvm_15508925077749842928) goto LAB_006f445b;
  }
  (*(code *)PTR_set_functions_inner_007990c0)();
LAB_006f445b:
  *(ulonglong *)(param_1 + 2) = unaff_R14 << 0x20 | 2;
  *param_1 = 2;
  return param_1;
}


