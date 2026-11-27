// 007415b0 recv_pidfd

/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::recv_pidfd */

undefined4 __rustcall <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::recv_pidfd(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  longlong local_98 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  puVar2 = PTR_recvmsg_0079aa60;
  puVar1 = PTR_get_os_functions_007992e0;
  uVar5 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_78 = 1;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  local_58 = &local_78;
  uStack_50 = 1;
  uStack_40 = 0x18;
  local_48 = local_98;
  while (lVar4 = (*(code *)puVar2)(uVar5,0x40000000), lVar4 == -1) {
    (*(code *)PTR___errno_location_007990a0)();
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    lVar4 = (*(code *)puVar1)();
    cVar3 = (**(code **)(lVar4 + 0x10))();
    uVar5 = extraout_XMM0_Da;
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
  }
  if (local_48 == (longlong *)0x0 || uStack_40 < 0x10) {
    return 0xffffffff;
  }
  if ((int)local_48[1] != 1) {
    return 0xffffffff;
  }
  if (*(int *)((longlong)local_48 + 0xc) != 1) {
    return 0xffffffff;
  }
  if (*local_48 == 0x14) {
    return (int)local_48[2];
  }
  return 0xffffffff;
}


