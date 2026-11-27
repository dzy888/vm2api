// 00581870 read

/* <craggemini_core[66f3c71560d70857]::license::files::HostDir>::read */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::license::files::HostDir>::read
          (undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
          ulonglong param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  ulonglong local_90;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  
  uVar2 = craggemini_core[66f3c71560d70857]::license::files::open_read_at(*param_2,param_3,param_4);
  if ((uVar2 & 1) != 0) {
    *(char *)(param_1 + 1) = (char)(uVar2 >> 8);
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  local_144 = (undefined4)(uVar2 >> 0x20);
  (*(code *)PTR_metadata_00799b30)();
  uVar2 = local_90;
  if ((int)local_e0 == 2) {
    if ((1 < ((uint)local_d8 & 3) - 2) && ((local_d8 & 3) != 0)) {
      uStack_138 = local_d8 - 1;
      local_140 = CONCAT71(local_140._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  else if (((local_90 <= param_5) && (local_b0 == 1)) && ((local_a8 & 0xf012) == 0x8000)) {
    (*(code *)PTR_metadata_00799b30)();
    if ((int)local_e0 != 2) {
      if ((longlong)uVar2 < 0) {
LAB_005819aa:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_f8 = local_c0;
      local_100 = local_b8;
      local_108 = local_90;
      local_110 = local_68;
      local_118 = local_60;
      local_120 = local_58;
      local_128 = local_50;
      if (uVar2 == 0) {
        uStack_138 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uStack_138 = (*(code *)PTR___rust_alloc_00799000)();
        if (uStack_138 == 0) goto LAB_005819aa;
      }
      local_e0 = &local_144;
      local_140 = uVar2;
      local_130 = 0;
      local_d8 = param_5 + 1;
      local_f0 = 0;
      local_d0 = local_d8;
      auVar4 = std[6c98fd8553dbae28]::io::append_to_string::
               <std[6c98fd8553dbae28]::io::default_read_to_string<core[c0acaeba6ab4c2e0]::io::util::Take<&std[6c98fd8553dbae28]::fs::File>>::_closure_0_>
                         (&local_140,&local_e0,&local_f0);
      uVar3 = extraout_XMM0_Da;
      if (auVar4._0_8_ == 1) {
        if ((1 < (auVar4._8_4_ & 3) - 2) && ((auVar4._8_8_ & 3) != 0)) {
          local_e8 = auVar4._8_8_ - 1;
          local_f0 = CONCAT71(local_f0._1_7_,3);
          uVar3 = (*(code *)PTR_drop_00799040)();
        }
LAB_00581abc:
        *(undefined1 *)(param_1 + 1) = 3;
        *param_1 = 0xffffffffffffffff;
      }
      else {
        if (param_5 < local_130) goto LAB_00581abc;
        uVar3 = fingerprint(&local_e0,param_2,param_3,param_4);
        if ((char)local_e0 != '\x01') {
          if (((((local_f8 == local_d8) && (local_100 == local_d0)) &&
               ((local_108 == local_c8 && ((local_110 == local_c0 && (local_118 == local_b8)))))) &&
              (local_120 == local_b0)) && (local_128 == CONCAT44(uStack_a4,local_a8))) {
            param_1[2] = local_130;
            *(undefined4 *)param_1 = (undefined4)local_140;
            *(undefined4 *)((longlong)param_1 + 4) = local_140._4_4_;
            *(undefined4 *)(param_1 + 1) = (undefined4)uStack_138;
            *(undefined4 *)((longlong)param_1 + 0xc) = uStack_138._4_4_;
            param_1[3] = local_f8;
            param_1[4] = local_100;
            param_1[5] = local_108;
            param_1[6] = local_110;
            param_1[7] = local_118;
            param_1[8] = local_120;
            param_1[9] = local_128;
            goto LAB_00581984;
          }
          goto LAB_00581abc;
        }
        *(undefined1 *)(param_1 + 1) = local_e0._1_1_;
        *param_1 = 0xffffffffffffffff;
      }
      if (local_140 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
      }
      goto LAB_00581984;
    }
    if ((1 < ((uint)local_d8 & 3) - 2) && ((local_d8 & 3) != 0)) {
      uStack_138 = local_d8 - 1;
      local_140 = CONCAT71(local_140._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  *(undefined1 *)(param_1 + 1) = 3;
  *param_1 = 0xffffffffffffffff;
LAB_00581984:
  (*(code *)PTR_close_00799030)();
  return param_1;
}


