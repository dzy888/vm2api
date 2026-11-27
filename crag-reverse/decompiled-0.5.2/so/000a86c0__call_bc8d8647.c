// 000a86c0 call

/* <std[6c98fd8553dbae28]::sys::fs::unix::stat as
   core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>::call */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sys::fs::unix::stat_as_core[c0acaeba6ab4c2e0]::ops::function::Fn<(&core[c0acaeba6ab4c2e0]::ffi::c_str::CStr,)>>
::call(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da;
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
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar3 = std[6c98fd8553dbae28]::sys::fs::unix::try_statx(&local_c8,0xffffff9c,param_3,0);
  if ((int)local_c8 == -1) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
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
    iVar1 = (*(code *)PTR_stat64_000c4448)();
    if (iVar1 == -1) {
      piVar2 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
      iVar1 = *piVar2;
      if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
        (*(code *)PTR_set_functions_inner_000c3d08)();
      }
      param_1[1] = (longlong)iVar1 << 0x20 | 2;
      *param_1 = 2;
    }
    else {
      (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da,0x90);
      *param_1 = 0;
    }
  }
  else {
    (*(code *)PTR_memcpy_000c3aa8)(uVar3,0xb0);
  }
  return param_1;
}


