// 000a0d40 getenv

/* WARNING: Removing unreachable block (ram,0x000a0db2) */
/* std[6c98fd8553dbae28]::sys::env::unix::getenv */

longlong * __rustcall
std[6c98fd8553dbae28]::sys::env::unix::getenv
          (longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined1 local_1d0 [8];
  undefined1 *local_1c8;
  int local_50;
  undefined8 local_48;
  longlong local_38;
  undefined1 *local_30;
  longlong lStack_28;
  
  if (param_3 < 0x180) {
    uVar1 = (*(code *)PTR_memcpy_000c3aa8)();
    local_1d0[param_3] = 0;
    (*(code *)PTR_from_bytes_with_nul_000c40a8)(uVar1,param_3 + 1);
    if (local_50 != 1) {
      getenv::_closure_0_(&local_38,local_1d0,local_48);
      goto joined_r0x000a0e19;
    }
    local_30 = &DAT_000c1618;
    local_38 = -2;
  }
  else {
    helpers::small_c_string::run_with_cstr_allocating::
    <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>
              (&local_38);
joined_r0x000a0e19:
    if (local_38 != -2) {
      param_1[1] = (longlong)local_30;
      param_1[2] = lStack_28;
      goto LAB_000a0e26;
    }
  }
  if ((1 < ((uint)local_30 & 3) - 2) && (((ulonglong)local_30 & 3) != 0)) {
    local_1c8 = local_30 + -1;
    local_1d0[0] = 3;
    (*(code *)PTR_drop_000c3ae0)();
  }
  local_38 = -1;
LAB_000a0e26:
  *param_1 = local_38;
  return param_1;
}


