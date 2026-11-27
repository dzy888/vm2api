// 006a22d0 build_native_failed_failure

/* craggemini_core[66f3c71560d70857]::bridge::build_native_failed_failure */

undefined4 * __rustcall
craggemini_core[66f3c71560d70857]::bridge::build_native_failed_failure
          (undefined4 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,int param_5,
          undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 *******pppppppuVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *******unaff_RBP;
  undefined8 *******unaff_R14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_03;
  undefined1 auVar12 [16];
  undefined8 *******pppppppuVar13;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 *******local_1b8;
  undefined8 *******local_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined8 *******local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined2 uStack_170;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  undefined4 uStack_16c;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 *******local_148;
  code *pcStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_110;
  undefined8 *******local_108;
  undefined8 *******pppppppuStack_100;
  undefined8 *******local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *******local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *******local_50;
  undefined8 local_48 [3];
  
  lVar1 = *param_3;
  local_160 = param_3;
  if (lVar1 == -1) {
    pppppppuVar8 = (undefined8 *******)0x0;
  }
  else {
    auVar12 = ::<str>::trim_matches::<<char>::is_whitespace>(param_3[1],param_3[2]);
    unaff_R14 = auVar12._8_8_;
    pppppppuVar8 = auVar12._0_8_;
    param_1 = extraout_XMM0_Da;
  }
  lVar2 = *param_4;
  if (lVar2 == -1) {
    pppppppuVar13 = (undefined8 *******)0x0;
LAB_006a25a9:
    if (unaff_R14 != (undefined8 *******)0x0 && pppppppuVar8 != (undefined8 *******)0x0) {
      local_108 = &local_1a8;
      pppppppuStack_100 = (undefined8 *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_1a8 = pppppppuVar8;
      pppppppuStack_1a0 = unaff_R14;
      (*(code *)PTR_format_inner_00799048)(param_1,&local_108);
      local_1c8 = (undefined8 *******)CONCAT44(uStack_5c,local_60);
      uStack_1c0 = (char *)CONCAT44(uStack_54,uStack_58);
      local_1b8 = local_50;
      bVar5 = true;
LAB_006a2634:
      bVar4 = false;
    }
    else {
      uStack_1c0 = "native turn failed";
      local_1b8 = (undefined8 *******)0x12;
      local_1c8 = (undefined8 *******)0xffffffffffffffff;
      bVar5 = true;
      bVar4 = true;
    }
LAB_006a2637:
    <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
    <&str,alloc[12e961f32105355]::borrow::Cow<str>>
              (&local_108,0x1f6,"native_failed",0xd,&local_1c8,param_7,param_4,pppppppuVar13);
    uVar11 = uStack_d0;
    uStack_d0 = CONCAT13(2,(undefined3)uStack_d0);
    uVar6 = uStack_d0;
    local_1a8 = local_108;
    pppppppuStack_1a0 = pppppppuStack_100;
    local_198 = local_f8;
    uStack_190 = (undefined4)uStack_f0;
    uStack_18c = uStack_f0._4_4_;
    local_188 = local_e8;
    uStack_184 = uStack_e4;
    uStack_180 = uStack_e0;
    uStack_17c = uStack_dc;
    local_178 = local_d8;
    uStack_d0._0_2_ = (undefined2)uVar11;
    uStack_170 = (undefined2)uStack_d0;
    uStack_d0._2_1_ = SUB41(uVar11,2);
    uStack_16e = uStack_d0._2_1_;
    uStack_16d = 2;
    uStack_16c = uStack_cc;
    uStack_d0 = uVar6;
    if (bVar4) {
      local_158 = (undefined8 *******)0xffffffffffffffff;
    }
    else {
      if ((longlong)unaff_R14 < 0) {
LAB_006a26f3:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_006a27bb;
      }
      if (unaff_R14 == (undefined8 *******)0x0) {
        pppppppuVar8 = (undefined8 *******)0x1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pppppppuVar8 = (undefined8 *******)(*(code *)PTR___rust_alloc_00799000)();
        if (pppppppuVar8 == (undefined8 *******)0x0) goto LAB_006a26f3;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,unaff_R14);
      }
      local_158 = unaff_R14;
      uStack_150 = pppppppuVar8;
      local_148 = unaff_R14;
    }
    <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_upstream_reason::
    <alloc[12e961f32105355]::string::String>(&local_108,&local_1a8,&local_158);
    if (bVar5) {
      local_1a8 = (undefined8 *******)0xffffffffffffffff;
    }
    else {
      if ((longlong)unaff_RBP < 0) {
LAB_006a27af:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_006a27bb:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (unaff_RBP == (undefined8 *******)0x0) {
        pppppppuVar8 = (undefined8 *******)0x1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pppppppuVar8 = (undefined8 *******)(*(code *)PTR___rust_alloc_00799000)();
        if (pppppppuVar8 == (undefined8 *******)0x0) goto LAB_006a27af;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,unaff_RBP);
      }
      local_1a8 = unaff_RBP;
      pppppppuStack_1a0 = pppppppuVar8;
      local_198 = unaff_RBP;
    }
    uVar11 = <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_stderr_excerpt
                       (param_2,&local_108,&local_1a8,param_5,param_6);
    if (lVar2 == -1) goto LAB_006a28e7;
  }
  else {
    local_110 = param_4[1];
    auVar12 = ::<str>::trim_matches::<<char>::is_whitespace>(local_110,param_4[2]);
    unaff_RBP = auVar12._8_8_;
    pppppppuVar13 = auVar12._0_8_;
    param_1 = extraout_XMM0_Da_00;
    if ((pppppppuVar13 == (undefined8 *******)0x0) || (unaff_RBP == (undefined8 *******)0x0))
    goto LAB_006a25a9;
    auVar12 = ::<str>::trim_matches::<<char>::is_whitespace>(pppppppuVar13,unaff_RBP);
    lVar10 = auVar12._8_8_;
    pcVar9 = auVar12._0_8_;
    if (((((lVar10 == 0) || (*pcVar9 != '{')) ||
         (cVar7 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                            ("\"error\"",7,pcVar9,lVar10), cVar7 == '\0')) &&
        ((cVar7 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                            ("Error ",6,pcVar9,lVar10), cVar7 == '\0' ||
         (cVar7 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                            (", Message: ",0xb,pcVar9,lVar10), cVar7 == '\0')))) &&
       ((cVar7 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                           (" (code ",7,pcVar9,lVar10), cVar7 == '\0' ||
        (cVar7 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                           ("):",2,pcVar9,lVar10), cVar7 == '\0')))) {
      if (unaff_R14 != (undefined8 *******)0x0 && pppppppuVar8 != (undefined8 *******)0x0) {
        local_108 = (undefined8 *******)&local_158;
        pppppppuStack_100 = (undefined8 *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_f8 = &local_1a8;
        uStack_f0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_1a8 = pppppppuVar13;
        pppppppuStack_1a0 = unaff_RBP;
        local_158 = pppppppuVar8;
        uStack_150 = unaff_R14;
        (*(code *)PTR_format_inner_00799048)(local_f8,&local_108);
        local_1c8 = (undefined8 *******)CONCAT44(uStack_74,local_78);
        uStack_1c0 = (char *)CONCAT44(uStack_6c,uStack_70);
        local_1b8 = local_68;
        bVar5 = false;
        goto LAB_006a2634;
      }
      if ((longlong)unaff_RBP < 0) {
LAB_006a274e:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_006a27bb;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar9 == (char *)0x0) goto LAB_006a274e;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,unaff_RBP);
      bVar4 = true;
      bVar5 = false;
      local_1c8 = unaff_RBP;
      uStack_1c0 = pcVar9;
      local_1b8 = unaff_RBP;
      goto LAB_006a2637;
    }
    local_108 = (undefined8 *******)0xffffffffffffffff;
    uStack_f0 = (code *)0xffffffffffffffff;
    local_d8 = 0xffffffffffffffff;
    local_c0 = 0xffffffffffffffff;
    local_a8 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    protocol::parse_upstream_error(&local_158,0,pppppppuVar13,unaff_RBP,&local_108);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>(&local_108);
    if (param_5 != 0) {
      local_d8 = local_128;
      uStack_d0 = (undefined4)uStack_120;
      uStack_cc = uStack_120._4_4_;
      local_e8 = (undefined4)local_138;
      uStack_e4 = local_138._4_4_;
      uStack_e0 = (undefined4)uStack_130;
      uStack_dc = uStack_130._4_4_;
      local_f8 = local_148;
      uStack_f0 = pcStack_140;
      local_108 = local_158;
      pppppppuStack_100 = uStack_150;
      local_48[0] = 0xffffffffffffffff;
      <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_stderr_excerpt
                (&local_1a8,&local_108,local_48,1,param_6);
      pcStack_140 = (code *)CONCAT44(uStack_18c,uStack_190);
      local_138 = CONCAT44(uStack_184,local_188);
      uStack_130 = CONCAT44(uStack_17c,uStack_180);
      uStack_120 = CONCAT44(uStack_16c,CONCAT13(uStack_16d,CONCAT12(uStack_16e,uStack_170)));
      local_158 = local_1a8;
      uStack_150 = pppppppuStack_1a0;
      local_148 = local_198;
      local_128 = local_178;
    }
    *(undefined8 *)(param_2 + 0xc) = local_128;
    *(undefined8 *)(param_2 + 0xe) = uStack_120;
    *(undefined8 *)(param_2 + 8) = local_138;
    *(undefined8 *)(param_2 + 10) = uStack_130;
    *(undefined8 ********)(param_2 + 4) = local_148;
    *(code **)(param_2 + 6) = pcStack_140;
    *param_2 = (undefined4)local_158;
    param_2[1] = local_158._4_4_;
    param_2[2] = (undefined4)uStack_150;
    param_2[3] = uStack_150._4_4_;
    uVar11 = (undefined4)local_158;
  }
  if (lVar2 != 0) {
    uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
  }
LAB_006a28e7:
  if ((lVar1 != -1) && (lVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
  }
  return param_2;
}


