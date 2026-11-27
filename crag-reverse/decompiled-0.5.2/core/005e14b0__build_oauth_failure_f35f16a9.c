// 005e14b0 build_oauth_failure

/* craggemini_core[66f3c71560d70857]::oauth::build_oauth_failure */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::oauth::build_oauth_failure
          (undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4,undefined8 param_5,
          longlong param_6,undefined8 param_7,undefined8 param_8,uint param_9,undefined4 param_10)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_R14;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 local_14c;
  undefined8 local_148;
  longlong local_140;
  undefined4 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 *local_100;
  code *local_f8;
  undefined4 **local_f0;
  code *local_e8;
  undefined4 **local_e0;
  code *local_d8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  ushort local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_70 [59];
  undefined1 local_35;
  
  local_148 = param_5;
  local_140 = param_6;
  local_a0 = param_1;
  uVar5 = clean_pty_tail(&local_118,param_7,param_8);
  lVar4 = local_140;
  local_120 = param_3;
  if (CONCAT44(uStack_114,local_118) == -1) {
    local_98 = 0;
    if (param_9 == 1) {
      local_138 = (undefined4 *)CONCAT44(local_138._4_4_,param_10);
      local_100 = &local_148;
      local_f8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_f0 = &local_138;
      local_e8 = (code *)PTR_fmt_007999c0;
      (*(code *)PTR_format_inner_00799048)(uVar5,&local_100);
      lVar4 = unaff_R14;
    }
    else {
      if (local_140 < 0) {
LAB_005e16b0:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (local_140 == 0) {
        lVar2 = 1;
      }
      else {
        local_a8 = local_148;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar2 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar2 == 0) goto LAB_005e16b0;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar4);
      }
      local_c0 = lVar4;
      local_b0 = lVar4;
      local_b8 = lVar2;
    }
    uVar3 = 0;
  }
  else {
    uVar5 = classify_oauth_pty_reason(&local_98,CONCAT44(uStack_10c,uStack_110),local_108);
    if (local_98 == 0) {
      uVar3 = 0;
      lVar4 = unaff_R14;
    }
    else {
      param_2 = (uint)local_88;
      uVar3 = local_80;
      lVar4 = local_78;
      param_4 = local_90;
      local_120 = local_98;
    }
    local_138 = &local_118;
    if ((param_9 & 1) == 0) {
      local_100 = &local_148;
      local_f8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_f0 = &local_138;
      local_e8 = <&alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                 fmt;
      (*(code *)PTR_format_inner_00799048)(uVar5,&local_100);
    }
    else {
      local_14c = param_10;
      local_100 = &local_148;
      local_f8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_f0 = (undefined4 **)&local_14c;
      local_e8 = (code *)PTR_fmt_007999c0;
      local_e0 = &local_138;
      local_d8 = <&alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                 fmt;
      (*(code *)PTR_format_inner_00799048)(uVar5,&local_100);
    }
  }
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>(local_70,param_2,local_120,param_4,&local_c0);
  local_35 = 3;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_upstream_reason::<&str>
            (&local_100,local_70,uVar3,lVar4);
  uVar3 = local_a0;
  local_128 = local_108;
  uStack_130 = uStack_110;
  uStack_12c = uStack_10c;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_stderr_excerpt
            (local_a0,&local_100,&local_138,param_9,param_10);
  return uVar3;
}


