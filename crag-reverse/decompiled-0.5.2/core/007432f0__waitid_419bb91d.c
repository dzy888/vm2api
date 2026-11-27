// 007432f0 waitid

/* <std[6c98fd8553dbae28]::sys::process::unix::pidfd::PidFd>::waitid */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::pidfd::PidFd>::waitid
          (undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  iVar2 = (*(code *)PTR_waitid_0079aed0)(param_3,&local_f8);
  if (iVar2 == -1) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    puVar1 = PTR_OS_FUNCTIONS_007990a8;
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    local_38 = (longlong)iVar2 << 0x20 | 2;
    if (iVar2 != 10) {
      *(ulonglong *)(param_1 + 2) = local_38;
      *param_1 = 1;
      return;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_40 = 0;
    local_78 = 8;
    iVar2 = (*(code *)PTR_ioctl_00799ed0)(0,&local_78);
    if (iVar2 != -1) {
      param_1[1] = 1;
      param_1[2] = local_40._4_4_;
      *param_1 = 0;
      return;
    }
    if (*(undefined ***)puVar1 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(undefined8 *)(param_1 + 2) = 0xa00000002;
    *param_1 = 1;
    return;
  }
  if ((int)local_e8 == 0) {
    uStack_e0._0_4_ = 0;
    lVar4 = 4;
    goto LAB_00743468;
  }
  switch((int)uStack_f0 + -1) {
  case 0:
    uStack_e0._0_4_ = (uint)uStack_e0 << 8;
    goto LAB_00743452;
  case 1:
    break;
  case 2:
    uStack_e0._0_4_ = (uint)uStack_e0 | 0x80;
    break;
  case 3:
  case 4:
    uStack_e0._0_4_ = (uint)uStack_e0 << 8 | 0x7f;
LAB_00743452:
    uStack_e0._0_4_ = (uint)uStack_e0 & 0xffff;
    break;
  case 5:
    uStack_e0._0_4_ = 0xffff;
    break;
  default:
    (*(code *)PTR_panic_fmt_007991a8)
              ((int)uStack_f0 + -1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796af8);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
              (&local_38,0xab);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  param_1[1] = 1;
  lVar4 = 8;
LAB_00743468:
  *(uint *)((longlong)param_1 + lVar4) = (uint)uStack_e0;
  *param_1 = 0;
  return;
}


