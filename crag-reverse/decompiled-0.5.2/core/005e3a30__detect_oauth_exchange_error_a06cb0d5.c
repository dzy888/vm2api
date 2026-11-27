// 005e3a30 detect_oauth_exchange_error

/* craggemini_core[66f3c71560d70857]::oauth::detect_oauth_exchange_error */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::oauth::detect_oauth_exchange_error(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 *local_128;
  code *local_120;
  undefined8 local_118;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 uStack_90;
  undefined5 uStack_8d;
  undefined1 local_88 [24];
  undefined1 local_70 [59];
  undefined1 local_35;
  
  clean_pty_tail(&local_138);
  if (local_138 == (undefined8 *)0xffffffffffffffff) {
    *param_1 = 0xfffffffffffffffe;
  }
  else {
    local_148 = (ulonglong)local_128;
    local_158 = (undefined4)local_138;
    uStack_154 = local_138._4_4_;
    uStack_150 = (undefined4)uStack_130;
    uStack_14c = uStack_130._4_4_;
    uVar6 = classify_oauth_pty_reason(&local_138,uStack_130);
    pcVar5 = local_120;
    puVar4 = local_128;
    uVar2 = uStack_130;
    lVar1 = (longlong)local_138;
    if (local_138 == (undefined8 *)0x0) {
      *param_1 = 0xfffffffffffffffe;
      if (CONCAT44(uStack_154,local_158) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
      }
    }
    else {
      uVar3 = (ushort)local_128;
      local_f8 = local_120;
      local_f0 = local_118;
      local_138 = &local_f8;
      uStack_130 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_120 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                  fmt;
      local_128 = (undefined1 *)&local_158;
      (*(code *)PTR_format_inner_00799048)(uVar6,&local_138);
      <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
      <&str,alloc[12e961f32105355]::borrow::Cow<str>>
                (local_70,(ulonglong)puVar4 & 0xffff,lVar1,uVar2,local_88);
      local_35 = 3;
      <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_upstream_reason::<&str>
                (&local_138,local_70,pcVar5,local_118);
      local_d8 = local_148;
      local_e8 = local_158;
      uStack_e4 = uStack_154;
      uStack_e0 = uStack_150;
      uStack_dc = uStack_14c;
      <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_stderr_excerpt
                (&local_c8,&local_138,&local_e8,0);
      param_1[6] = local_98;
      param_1[7] = CONCAT53(uStack_8d,CONCAT12(499 < uVar3,uStack_90));
      param_1[4] = local_a8;
      param_1[5] = uStack_a0;
      param_1[2] = local_b8;
      param_1[3] = uStack_b0;
      *param_1 = local_c8;
      param_1[1] = uStack_c0;
    }
  }
  return param_1;
}


