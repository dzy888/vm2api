// 00543880 format_messages_for_delta

/* WARNING: Removing unreachable block (ram,0x00543c39) */
/* WARNING: Switch with 1 destination removed at 0x00543bbe */
/* craggemini_core[66f3c71560d70857]::resume::format_messages_for_delta */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::resume::format_messages_for_delta
          (longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong extraout_RDX;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  longlong local_e0;
  undefined4 **local_d8;
  code *pcStack_d0;
  undefined8 **local_c8;
  longlong local_c0;
  undefined *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  code *local_90;
  undefined **local_88;
  code *local_80;
  longlong local_78;
  undefined *local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  
  puVar4 = PTR_format_inner_00799048;
  if (param_3 == 1) {
    if (*(longlong *)(param_2 + 0x58) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      if (lVar6 == 0) {
        lVar7 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar7 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar7 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          pcVar2 = (code *)swi(3);
          plVar5 = (longlong *)(*pcVar2)();
          return plVar5;
        }
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar6);
      }
      *param_1 = lVar6;
      param_1[1] = lVar7;
      param_1[2] = lVar6;
      return param_1;
    }
  }
  else {
    local_e0 = 0;
    if (param_3 == 0) {
      goto LAB_00543bcb;
    }
  }
  local_e0 = 0;
  local_60 = param_3 * 0x90 + param_2;
  local_68 = param_1;
  do {
    ::<str>::trim_matches::<<char>::is_whitespace>
              (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
    if (extraout_RDX != 0) {
      (*(code *)PTR_clone_00798fd0)();
      if (local_e0 == 0) {
        (*(code *)PTR_grow_one_00799328)();
      }
      *(undefined8 ***)(local_e0 * 0x18 + 0x18) = local_98;
      lVar6 = local_e0 * 0x18;
      *(undefined4 *)(lVar6 + 8) = (undefined4)local_a8;
      *(undefined4 *)(lVar6 + 0xc) = local_a8._4_4_;
      *(undefined4 *)(lVar6 + 0x10) = (undefined4)uStack_a0;
      *(undefined4 *)(lVar6 + 0x14) = uStack_a0._4_4_;
      local_e0 = local_e0 + 1;
    }
    local_c0 = param_2;
    if (*(longlong *)(param_2 + 0x58) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x58) * 0x58;
      lVar7 = *(longlong *)(param_2 + 0x50) + 0x30;
      do {
        if (*(longlong *)(lVar7 + -0x18) == -1) {
          local_40 = &anon_ec7f14c74815bf4c93b295cfd0665412_119_llvm_7806621557641746444;
          local_38 = 4;
          if (*(longlong *)(lVar7 + -0x30) != -1) goto LAB_00543a23;
LAB_00543a80:
          local_d8 = (undefined4 **)0x0;
          pcStack_d0 = (code *)0x1;
          local_c8 = (undefined8 **)0x0;
        }
        else {
          local_40 = *(undefined4 **)(lVar7 + -0x10);
          local_38 = *(undefined8 *)(lVar7 + -8);
          if (*(longlong *)(lVar7 + -0x30) == -1) goto LAB_00543a80;
LAB_00543a23:
          local_b0 = *(longlong *)(lVar7 + -0x20);
          if (local_b0 == 0) goto LAB_00543a80;
          local_b8 = *(undefined **)(lVar7 + -0x28);
          local_d8 = (undefined4 **)&local_b8;
          pcStack_d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          (*(code *)puVar4)(local_b8,&local_d8);
          local_d8 = local_a8;
          pcStack_d0 = uStack_a0;
          local_c8 = local_98;
        }
        bVar8 = *(char *)(lVar7 + 0x20) != '\0';
        local_b8 = (undefined *)0x1;
        if (bVar8) {
          local_b8 = &DAT_0019baca;
        }
        local_b0 = 0;
        if (bVar8) {
          local_b0 = 6;
        }
        local_a8 = &local_40;
        uStack_a0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_98 = &local_d8;
        local_90 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                   ::fmt;
        local_88 = &local_b8;
        local_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_70 = PTR_fmt_00799758;
        local_78 = lVar7;
        (*(code *)puVar4)(local_b0,&local_a8);
        if (local_e0 == 0) {
          (*(code *)PTR_grow_one_00799328)();
        }
        lVar3 = local_e0 * 3;
        *(undefined8 *)(local_e0 * 0x18 + 0x18) = local_48;
        lVar1 = local_e0 * 0x18;
        *(undefined4 *)(lVar1 + 8) = local_58;
        *(undefined4 *)(lVar1 + 0xc) = uStack_54;
        *(undefined4 *)(lVar1 + 0x10) = uStack_50;
        *(undefined4 *)(lVar1 + 0x14) = uStack_4c;
        local_e0 = local_e0 + 1;
        if (local_d8 != (undefined4 **)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(lVar3,1);
        }
        lVar7 = lVar7 + 0x58;
        lVar6 = lVar6 + -0x58;
      } while (lVar6 != 0);
    }
    param_2 = local_c0 + 0x90;
  } while (param_2 != local_60);
  param_1 = local_68;
LAB_00543bcb:
  alloc[12e961f32105355]::str::join_generic_copy::<str,u8,alloc[12e961f32105355]::string::String>
            (&local_a8,8,local_e0,
             &anon_ec7f14c74815bf4c93b295cfd0665412_166_llvm_7806621557641746444,1);
  param_1[2] = (longlong)local_98;
  *(undefined4 *)param_1 = (undefined4)local_a8;
  *(undefined4 *)((longlong)param_1 + 4) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_a0._4_4_;
  puVar4 = PTR___rust_dealloc_00798fc8;
  if (local_e0 != 0) {
    lVar6 = 0x10;
    uVar9 = (undefined4)local_a8;
    do {
      if (*(longlong *)(lVar6 + -8) != 0) {
        uVar9 = (*(code *)puVar4)(uVar9,1);
      }
      lVar6 = lVar6 + 0x18;
      local_e0 = local_e0 + -1;
    } while (local_e0 != 0);
  }
  return (longlong *)0x0;
}


