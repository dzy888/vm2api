// 00037c10 compose_system_prompt

/* agy_bridge[64a9e9deac6c45ce]::compose_system_prompt */

void __rustcall
agy_bridge[64a9e9deac6c45ce]::compose_system_prompt
          (longlong *param_1,char param_2,longlong param_3,longlong param_4,longlong param_5,
          undefined8 param_6)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong extraout_RDX;
  longlong unaff_R14;
  undefined1 auVar4 [16];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  code *local_48;
  longlong *local_40;
  code *local_38;
  
  local_70 = param_3;
  local_68 = param_4;
  if (param_5 == 0) {
    local_60 = 0;
  }
  else {
    auVar4 = <str>::trim_matches::<<char>::is_whitespace>(param_5,param_6);
    unaff_R14 = auVar4._8_8_;
    local_60 = auVar4._0_8_;
  }
  cVar2 = unaff_R14 == 0 || local_60 == 0;
  if (param_2 == '\0') {
LAB_00037c87:
    if (cVar2 != '\0') {
      *param_1 = -1;
      return;
    }
    local_58 = unaff_R14;
    <str>::trim_matches::<<char>::is_whitespace>(param_3,param_4);
    if (extraout_RDX != 0) {
      local_50 = &local_70;
      local_48 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_40 = &local_60;
      local_38 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      (*(code *)PTR_format_inner_000c3b78)(local_40,&local_50);
      return;
    }
    if (unaff_R14 < 0) {
      param_4 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      param_4 = 1;
      lVar3 = (*(code *)PTR___rust_alloc_000c3a90)();
      if (lVar3 != 0) {
        (*(code *)PTR_memcpy_000c3aa8)();
        *param_1 = unaff_R14;
        param_1[1] = lVar3;
        goto LAB_00037d3a;
      }
    }
    (*(code *)PTR_handle_error_000c3a98)();
LAB_00037d30:
    unaff_R14 = 0;
  }
  else {
    param_4 = 1;
    param_3 = local_60;
    if (unaff_R14 == 0 || local_60 == 0) {
      param_3 = 1;
    }
    if (local_60 != 0) {
      local_60 = unaff_R14;
    }
    if (local_60 < 0) {
      cVar2 = (*(code *)PTR_handle_error_000c3a98)();
      goto LAB_00037c87;
    }
    if (local_60 == 0) goto LAB_00037d30;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    param_4 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (param_4 == 0) {
      (*(code *)PTR_handle_error_000c3a98)();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)PTR_memcpy_000c3aa8)();
  }
  *param_1 = unaff_R14;
  param_1[1] = param_4;
LAB_00037d3a:
  param_1[2] = unaff_R14;
  return;
}


