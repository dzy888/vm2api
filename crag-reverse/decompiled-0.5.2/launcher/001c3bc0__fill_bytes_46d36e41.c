// 001c3bc0 fill_bytes

/* <rand_core[a93d0ec15b502e2b]::os::OsRng as rand_core[a93d0ec15b502e2b]::RngCore>::fill_bytes */

void __rustcall
<rand_core[a93d0ec15b502e2b]::os::OsRng_as_rand_core[a93d0ec15b502e2b]::RngCore>::fill_bytes
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  int local_14;
  int *local_10;
  undefined *local_8;
  
  if (param_3 != 0) {
    local_14 = (*(code *)PTR_getrandom_inner_0021a678)();
    if (local_14 != 0) {
      local_10 = &local_14;
      local_8 = PTR_fmt_0021a668;
      (*(code *)PTR_panic_fmt_0021a010)(param_4,&PTR_s__vendor_rand_core_0_6_4_src_os_r_002170e0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}


