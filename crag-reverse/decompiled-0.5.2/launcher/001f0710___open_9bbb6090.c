// 001f0710 _open

/* WARNING: Removing unreachable block (ram,0x001f0788) */
/* <std[6c98fd8553dbae28]::fs::OpenOptions>::_open */

undefined4 * __rustcall
<std[6c98fd8553dbae28]::fs::OpenOptions>::_open
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined1 local_1d8 [384];
  int local_58;
  undefined8 local_50;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  undefined1 *local_30;
  
  local_40 = param_2;
  if (param_4 < 0x180) {
    (*(code *)PTR_memcpy_00219c60)(param_4,param_4);
    local_1d8[param_4] = 0;
    (*(code *)PTR_from_bytes_with_nul_0021a6e8)();
    if (local_58 != 1) {
      <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_38,local_50,param_2);
      goto joined_r0x001f07cd;
    }
    local_30 = &DAT_002175c0;
  }
  else {
    std[6c98fd8553dbae28]::sys::helpers::small_c_string::run_with_cstr_allocating::
    <std[6c98fd8553dbae28]::sys::fs::unix::File>
              (&local_38,param_3,param_4,&local_40,
               <std[6c98fd8553dbae28]::sys::fs::unix::File>::open::_closure_0_);
joined_r0x001f07cd:
    if (local_38 != 1) {
      param_1[1] = local_34;
      uVar1 = 0;
      goto LAB_001f07d7;
    }
  }
  *(undefined1 **)(param_1 + 2) = local_30;
  uVar1 = 1;
LAB_001f07d7:
  *param_1 = uVar1;
  return param_1;
}


