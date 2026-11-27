// 005e4f80 push_client_tool

/* craggemini_core[66f3c71560d70857]::tools::push_client_tool */

void __rustcall
craggemini_core[66f3c71560d70857]::tools::push_client_tool
          (undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined3 *param_4,
          undefined8 *******param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined1 param_9)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined3 *puVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  code *local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined8 *****local_1a8;
  longlong local_1a0;
  undefined8 ******local_198;
  undefined8 *******local_190;
  undefined8 *******local_188;
  undefined8 ******ppppppuStack_180;
  undefined8 *******local_178;
  code *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined3 *local_120;
  longlong *local_118;
  undefined8 *******local_110;
  undefined8 local_108;
  undefined8 *******local_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 *******local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_1b0 = param_1;
  local_120 = param_4;
  local_118 = param_2;
  local_110 = param_5;
  local_108 = param_6;
  schema::sanitize_tool_name(&local_1a0,param_4,param_5);
  (*(code *)PTR_clone_00798fd0)();
  puVar4 = PTR_format_inner_00799048;
  puVar3 = PTR___rust_dealloc_00798fc8;
  local_1a8 = (undefined8 *****)0x1;
  while( true ) {
    (*(code *)PTR_clone_00798fd0)();
    cVar6 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
            ::insert(param_3,&local_100);
    if (cVar6 == '\0') break;
    local_188 = (undefined8 *******)&local_1a8;
    ppppppuStack_180 = (undefined8 ******)PTR_fmt_007991f0;
    (*(code *)puVar4)(extraout_XMM0_Da,&local_188);
    uVar11 = local_100._0_4_;
    local_188 = local_100;
    ppppppuStack_180 = ppppppuStack_f8;
    local_178 = local_f0;
    pppppppuVar8 = (undefined8 *******)(0x37 - (longlong)local_f0);
    if (&DAT_00000037 < local_f0) {
      pppppppuVar8 = (undefined8 *******)0x0;
    }
    pppppppuVar9 = pppppppuVar8;
    if (local_190 <= pppppppuVar8) {
      pppppppuVar9 = local_190;
    }
    if ((pppppppuVar9 != (undefined8 *******)0x0 && local_190 > pppppppuVar8) &&
       ((char)*(code *)((longlong)local_198 + (longlong)pppppppuVar9) < -0x40)) {
      (*(code *)PTR_slice_error_fail_00799408)(local_100._0_4_,0,&PTR_s_src_tools_rs_0078e890);
      goto LAB_005e5431;
    }
    local_1e8 = local_198;
    ppppppuStack_f8 = (undefined8 ******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_e8 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    ;
    uStack_1e0 = pppppppuVar9;
    local_100 = (undefined8 *******)&local_1e8;
    local_f0 = &local_188;
    uVar11 = (*(code *)puVar4)(uVar11,&local_100);
    if (CONCAT44(uStack_1c4,local_1c8) != 0) {
      (*(code *)puVar3)(uVar11,1);
    }
    local_1b8 = local_48;
    local_1a8 = (undefined8 *****)((longlong)local_1a8 + 1);
    local_1c8 = local_58;
    uStack_1c4 = uStack_54;
    uStack_1c0 = uStack_50;
    uStack_1bc = uStack_4c;
    if (local_188 != (undefined8 *******)0x0) {
      (*(code *)puVar3)(local_58,1);
    }
  }
  schema::project_tool_schema(&local_100,local_108,param_7,param_8,param_9);
  pppppppuVar9 = local_110;
  local_1e8 = ppppppuStack_f8;
  ppppppuVar7 = local_1e8;
  uStack_1e0 = local_f0;
  pppppppuVar8 = uStack_1e0;
  local_1d8 = local_e8;
  if (local_100 == (undefined8 *******)0xffffffffffffffff) {
    local_1b0[2] = local_e8;
    local_1e8._0_4_ = SUB84(ppppppuStack_f8,0);
    local_1e8._4_4_ = (undefined4)((ulonglong)ppppppuStack_f8 >> 0x20);
    uStack_1e0._0_4_ = SUB84(local_f0,0);
    uStack_1e0._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
    *(undefined4 *)local_1b0 = (undefined4)local_1e8;
    *(undefined4 *)((longlong)local_1b0 + 4) = local_1e8._4_4_;
    *(undefined4 *)(local_1b0 + 1) = (undefined4)uStack_1e0;
    *(undefined4 *)((longlong)local_1b0 + 0xc) = uStack_1e0._4_4_;
    uVar11 = (undefined4)local_1e8;
    if (CONCAT44(uStack_1c4,local_1c8) != 0) {
      local_1e8 = ppppppuVar7;
      uStack_1e0 = pppppppuVar8;
      uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(local_1b0,1);
    }
  }
  else {
    local_138 = (undefined4)local_b0;
    uStack_134 = local_b0._4_4_;
    uStack_130 = (undefined4)uStack_a8;
    uStack_12c = uStack_a8._4_4_;
    local_148 = (undefined4)local_c0;
    uStack_144 = local_c0._4_4_;
    uStack_140 = (undefined4)uStack_b8;
    uStack_13c = uStack_b8._4_4_;
    uStack_158 = (undefined4)local_d0;
    uStack_154 = local_d0._4_4_;
    uStack_150 = (undefined4)uStack_c8;
    uStack_14c = uStack_c8._4_4_;
    uStack_168 = uStack_e0;
    uStack_160 = uStack_d8;
    ppppppuStack_180 = ppppppuStack_f8;
    local_178 = local_f0;
    local_170 = local_e8;
    local_188 = local_100;
    local_40 = uStack_1c0;
    uStack_3c = uStack_1bc;
    uStack_38 = (undefined4)local_1b8;
    uStack_34 = local_1b8._4_4_;
    local_100 = (undefined8 *******)
                &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_488_llvm_10049508496007902178;
    ppppppuStack_f8 = (undefined8 ******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_f0 = (undefined8 *******)&local_40;
    local_e8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    puVar10 = &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_489_llvm_10049508496007902178;
    (*(code *)PTR_format_inner_00799048)
              (<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt,&local_100);
    if ((longlong)pppppppuVar9 < 0) {
LAB_005e526c:
      (*(code *)PTR_handle_error_00798ff0)();
LAB_005e5431:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (pppppppuVar9 == (undefined8 *******)0x0) {
      ppppppuVar7 = (undefined8 ******)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      ppppppuVar7 = (undefined8 ******)(*(code *)PTR___rust_alloc_00799000)();
      puVar10 = local_120;
      if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_005e526c;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,pppppppuVar9);
    }
    plVar5 = local_118;
    uStack_d8 = local_1b8;
    local_e8 = (code *)CONCAT44(uStack_1c4,local_1c8);
    uStack_e0 = CONCAT44(uStack_1bc,uStack_1c0);
    local_d0 = local_1e8;
    uStack_c8 = uStack_1e0;
    local_c0 = local_1d8;
    uStack_b8 = local_188;
    local_b0 = ppppppuStack_180;
    uStack_a8 = local_178;
    local_a0 = local_170;
    uStack_98 = uStack_168;
    uStack_88 = CONCAT44(uStack_154,uStack_158);
    local_90 = uStack_160;
    local_70 = CONCAT44(uStack_13c,uStack_140);
    uStack_68 = CONCAT44(uStack_134,local_138);
    local_80 = uStack_150;
    uStack_7c = uStack_14c;
    uStack_78 = local_148;
    uStack_74 = uStack_144;
    local_100 = pppppppuVar9;
    local_f0 = pppppppuVar9;
    local_60 = param_9;
    lVar1 = local_118[2];
    uVar11 = uStack_150;
    ppppppuStack_f8 = ppppppuVar7;
    if (lVar1 == *local_118) {
      uVar11 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::tools::ClientTool>>
               ::grow_one(local_118,puVar10);
    }
    uVar11 = (*(code *)PTR_memcpy_00799008)(uVar11,0xa8);
    plVar5[2] = lVar1 + 1;
    *local_1b0 = 0xffffffffffffffff;
  }
  if (local_1a0 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
  }
  return;
}


