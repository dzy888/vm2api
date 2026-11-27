// 006bae40 <hyper[c4782d5b5c5e3493]::common::date::CACHED::__rust_std_internal_init_fn>

/* <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::RefCell<hyper[c4782d5b5c5e3493]::common::date::CachedDate>,
   !>>::get_or_init_slow::<hyper[c4782d5b5c5e3493]::common::date::CACHED::__rust_std_internal_init_fn>
    */

void __rustcall
<std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::RefCell<hyper[c4782d5b5c5e3493]::common::date::CachedDate>,!>>
::get_or_init_slow::<hyper[c4782d5b5c5e3493]::common::date::CACHED::__rust_std_internal_init_fn>
          (undefined8 *param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined4 local_8c;
  uint3 uStack_63;
  undefined8 *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 8) == '\0') {
    if ((param_2 == (byte *)0x0) ||
       (param_2[0] = 0, param_2[1] = 0, param_2[2] = 0, param_2[3] = 0, param_2[4] = 0,
       param_2[5] = 0, param_2[6] = 0, param_2[7] = 0, (*param_2 & 1) == 0)) {
      local_38 = param_3;
      local_40 = (*(code *)PTR_now_007993f0)();
      uVar2 = 0;
      (*(code *)PTR_duration_since_007993f8)(0,0);
      uVar3 = 0;
      if ((char)local_60 == '\0') {
        uVar3 = local_50;
      }
      local_48 = (*(code *)PTR_from_0079a4b8)();
      local_60 = &local_48;
      local_58 = PTR_fmt_0079a4c0;
      (*(code *)PTR_write_007994b0)
                (&local_60,&anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954);
      (*(code *)PTR_add_0079a4c8)
                (0,1,&anon_a0bdfe76b4b74febc0fe96214a8c0b42_10_llvm_14698491423915303612);
      uVar1 = 0;
      local_d8 = (*(code *)PTR_sub_0079a4d0)
                           (uVar3,0,&
                                    anon_a0bdfe76b4b74febc0fe96214a8c0b42_10_llvm_14698491423915303612
                           );
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = (ulonglong)uStack_63 << 0x28;
      uStack_d0 = CONCAT44(local_8c,uVar1);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 8);
      local_a8 = *(longlong *)(param_2 + 0x40);
      local_b8 = *(undefined8 *)(param_2 + 0x30);
      uStack_b0 = *(undefined8 *)(param_2 + 0x38);
      local_c8 = *(undefined8 *)(param_2 + 0x20);
      uStack_c0 = *(undefined8 *)(param_2 + 0x28);
      local_d8 = *(undefined8 *)(param_2 + 0x10);
      uStack_d0 = *(undefined8 *)(param_2 + 0x18);
    }
    *param_1 = uVar2;
    param_1[1] = local_d8;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_d0._4_4_;
    param_1[3] = local_c8;
    param_1[4] = uStack_c0;
    param_1[5] = local_b8;
    param_1[6] = uStack_b0;
    param_1[7] = local_a8;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}


