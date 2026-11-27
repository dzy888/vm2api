// 006a0810 bridge_io_failure

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::bridge::bridge_io_failure */

longlong __rustcall
craggemini_core[66f3c71560d70857]::bridge::bridge_io_failure(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined **ppuVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  undefined1 local_f9;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 *local_e0;
  code *local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  longlong local_70;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = (code *)0x1;
  local_e0 = (undefined4 *)0x0;
  local_b8 = 0x60000020;
  local_c8 = &local_f0;
  uStack_c0 = &anon_d3057478e380898db632effa827bd31f_636_llvm_2674179329317868992;
  local_50 = param_2;
  cVar2 = (*(code *)PTR_fmt_007991d0)();
  if (cVar2 != '\0') {
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_d3057478e380898db632effa827bd31f_356_llvm_2674179329317868992,&local_f9,
               &anon_d3057478e380898db632effa827bd31f_639_llvm_2674179329317868992);
    goto LAB_006a0ba6;
  }
  local_78 = local_e0;
  local_88 = (undefined4)local_f0;
  uStack_84 = local_f0._4_4_;
  uStack_80 = (undefined4)uStack_e8;
  uStack_7c = uStack_e8._4_4_;
  uVar5 = (uint)param_2 & 3;
  local_f8 = param_2;
  local_58 = param_1;
  switch(uVar5) {
  case 0:
    if (*(char *)(param_2 + 0x10) == '\x15') goto LAB_006a08fd;
    goto LAB_006a0a05;
  case 1:
    cVar2 = *(char *)(param_2 + 0x1f);
    break;
  case 2:
    lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
    cVar2 = (**(code **)(lVar3 + 8))();
    break;
  case 3:
    cVar2 = (char)(param_2 >> 0x20);
  }
  if (cVar2 == '\x15') {
LAB_006a08fd:
    local_98 = _DAT_00791670;
    uStack_90 = _UNK_00791678;
    local_a8 = PTR_s_native_bridge_stream_invalid_00791660;
    uStack_a0 = _UNK_00791668;
    local_b8 = _DAT_00791650;
    uStack_b0 = _UNK_00791658;
    local_c8 = (undefined8 *)CONCAT44(_UNK_00791644,_DAT_00791640);
    uStack_c0 = (undefined **)CONCAT44(_UNK_0079164c,_UNK_00791648);
    pcVar8 = "native bridge stream invalid";
    uVar7 = 0x1c;
    local_68 = (undefined **)0x1a53d7;
    local_60 = 0xe;
    uVar9 = _DAT_00791640;
    if (local_78 == (undefined4 *)0x0) goto LAB_006a0a5e;
LAB_006a0956:
    local_f0 = &uStack_b0;
    uStack_e8 = <alloc[12e961f32105355]::borrow::Cow<str>as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                fmt;
    local_e0 = &local_88;
    local_d8 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    ;
    (*(code *)PTR_format_inner_00799048)(uVar9,&local_f0);
    lVar3 = local_b8;
    uVar6 = uStack_90 & 0xffff;
    local_68 = uStack_c0;
    local_60 = local_b8;
    uVar7 = local_38;
    pcVar8 = local_40;
    if (local_c8 != (undefined8 *)0xffffffffffffffff) {
      if (local_b8 < 0) {
LAB_006a09dd:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_006a0ba6:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (local_b8 == 0) {
        ppuVar4 = (undefined **)0x1;
      }
      else {
        local_cc = (uint)(ushort)uStack_90;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        ppuVar4 = (undefined **)(*(code *)PTR___rust_alloc_00799000)();
        if (ppuVar4 == (undefined **)0x0) goto LAB_006a09dd;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar3);
        uVar6 = (ulonglong)local_cc;
      }
      local_70 = lVar3;
      local_60 = lVar3;
      local_68 = ppuVar4;
      goto LAB_006a0ae7;
    }
  }
  else {
LAB_006a0a05:
    local_98 = _DAT_007916b0;
    uStack_90 = _UNK_007916b8;
    local_a8 = PTR_s_native_bridge_disconnected_007916a0;
    uStack_a0 = _UNK_007916a8;
    local_b8 = _DAT_00791690;
    uStack_b0 = _UNK_00791698;
    local_c8 = (undefined8 *)CONCAT44(_UNK_00791684,_DAT_00791680);
    uStack_c0 = (undefined **)CONCAT44(_UNK_0079168c,_UNK_00791688);
    pcVar8 = "native bridge disconnected";
    uVar7 = 0x1a;
    local_68 = (undefined **)0x1a5401;
    local_60 = 0x13;
    uVar9 = _DAT_00791680;
    if (local_78 != (undefined4 *)0x0) goto LAB_006a0956;
LAB_006a0a5e:
    uVar6 = CONCAT62((int6)((ulonglong)&local_c8 >> 0x10),0x1f6);
    local_48 = 0xffffffffffffffff;
  }
  local_70 = -1;
LAB_006a0ae7:
  lVar3 = local_58;
  local_f0 = (undefined8 *)local_48;
  uStack_e8 = (code *)pcVar8;
  local_e0 = (undefined4 *)uVar7;
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <alloc[12e961f32105355]::borrow::Cow<str>,alloc[12e961f32105355]::borrow::Cow<str>>
            (local_58,uVar6,&local_70,&local_f0);
  uVar6 = local_f8;
  *(undefined1 *)(lVar3 + 0x3b) = 5;
  uVar9 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <craggemini_core[66f3c71560d70857]::protocol::Failure>(&local_c8);
  if (CONCAT44(uStack_84,local_88) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
  }
  if ((1 < uVar5 - 2) && ((param_2 & 3) != 0)) {
    uStack_c0 = (undefined **)(uVar6 - 1);
    local_c8 = (undefined8 *)CONCAT71(local_c8._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return lVar3;
}


