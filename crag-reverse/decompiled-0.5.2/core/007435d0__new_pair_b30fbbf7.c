// 007435d0 new_pair

/* <std[6c98fd8553dbae28]::sys::net::connection::socket::unix::Socket>::new_pair */

void __rustcall
<std[6c98fd8553dbae28]::sys::net::connection::socket::unix::Socket>::new_pair(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 local_20;
  
  local_20 = 0;
  iVar2 = (*(code *)PTR_socketpair_0079aa50)(&local_20,0);
  if (iVar2 == -1) {
    piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar2 = *piVar4;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar2 << 0x20 | 2;
    uVar3 = 1;
LAB_0074364f:
    *param_1 = uVar3;
    return;
  }
  if ((int)local_20 == -1) {
    (*(code *)PTR_expect_failed_00799440)();
  }
  else if (local_20._4_4_ != -1) {
    param_1[1] = (int)local_20;
    param_1[2] = local_20._4_4_;
    uVar3 = 0;
    goto LAB_0074364f;
  }
  (*(code *)PTR_expect_failed_00799440)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


