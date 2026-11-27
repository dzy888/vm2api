// 0061c430 ref_def_hint

/* craggemini_core[66f3c71560d70857]::schema::ref_def_hint */

void __rustcall
craggemini_core[66f3c71560d70857]::schema::ref_def_hint
          (undefined1 *param_1,char **param_2,code *param_3,longlong param_4,undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  undefined4 *puVar6;
  char **ppcVar7;
  undefined8 *puVar8;
  char **ppcVar9;
  char **ppcVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char **local_e8;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  char **local_c0;
  code *local_b8;
  char **local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  char **local_90;
  char **local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  
  local_a0 = (undefined1 *)0x0;
  local_80 = 0;
  local_70 = 0x2f0000002f;
  local_68 = 1;
  local_60 = 1;
  uStack_98 = param_3;
  local_90 = param_2;
  local_88 = (char **)param_3;
  local_78 = param_3;
  local_40 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back(&local_a0);
  pcVar4 = local_40._0_8_;
  if (((pcVar4 == (char *)0x0) || (local_40._8_8_ == 0)) ||
     ((local_40._8_8_ == 1 && (local_40._8_8_ = 1, local_40._0_8_ = pcVar4, *pcVar4 == '#')))) {
    local_40._8_8_ = 7;
    local_40._0_8_ = "unknown";
  }
  local_c0 = (char **)local_40;
  local_b8 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da,&local_c0);
  local_f8 = (undefined4)local_a0;
  uStack_f4 = local_a0._4_4_;
  uStack_f0 = (undefined4)uStack_98;
  uStack_ec = uStack_98._4_4_;
  local_e8 = local_90;
  if (param_4 == 0) {
LAB_0061c572:
    ppcVar10 = (char **)CONCAT44(uStack_f4,local_f8);
    bVar2 = false;
    ppcVar9 = local_e8;
  }
  else {
    auVar12 = ::<str>::trim_matches::<<char>::is_whitespace>(param_4,param_5);
    ppcVar9 = auVar12._8_8_;
    if (ppcVar9 == (char **)0x0) goto LAB_0061c572;
    cVar3 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                      (CONCAT44(uStack_ec,uStack_f0),local_e8,auVar12._0_8_,ppcVar9);
    if (cVar3 != '\0') {
      if (-1 < (longlong)ppcVar9) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar5 != 0) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,ppcVar9);
          bVar2 = true;
          ppcVar10 = ppcVar9;
          goto LAB_0061c638;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0061c87e;
    }
    local_a0 = local_d8;
    uStack_98 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_90 = (char **)&local_f8;
    local_88 = (char **)<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                        ::fmt;
    local_d8 = auVar12;
    (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da_00,&local_a0);
    bVar2 = true;
    ppcVar9 = local_b0;
    ppcVar10 = local_c0;
  }
LAB_0061c638:
  local_58 = 0;
  local_48 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x65707974;
    local_d8._0_8_ = 4;
    local_c8 = 4;
    local_d8._8_8_ = puVar6;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    ppcVar7 = (char **)(*(code *)PTR___rust_alloc_00799000)();
    if (ppcVar7 == (char **)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0061c87e;
    }
    *(undefined2 *)((longlong)ppcVar7 + 4) = 0x7463;
    *(undefined4 *)ppcVar7 = 0x656a626f;
    local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,3);
    uStack_98 = (code *)0x6;
    local_88 = (char **)0x6;
    local_90 = ppcVar7;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_c0,&local_58,local_d8,&local_a0);
    if ((char)local_c0 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_c0);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0x7470697263736564;
      *(undefined4 *)((longlong)puVar8 + 7) = 0x6e6f6974;
      local_d8._0_8_ = 0xb;
      local_c8 = 0xb;
      local_d8._8_8_ = puVar8;
      if (-1 < (longlong)ppcVar9) {
        if (ppcVar9 == (char **)0x0) {
          lVar5 = 1;
LAB_0061c7b4:
          local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,3);
          uStack_98 = (code *)ppcVar9;
          local_90 = (char **)lVar5;
          local_88 = ppcVar9;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_c0,&local_58,local_d8,&local_a0);
          if ((char)local_c0 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_c0);
          }
          *(undefined8 *)(param_1 + 0x18) = local_48;
          *(undefined4 *)(param_1 + 8) = (undefined4)local_58;
          *(undefined4 *)(param_1 + 0xc) = local_58._4_4_;
          *(undefined4 *)(param_1 + 0x10) = uStack_50;
          *(undefined4 *)(param_1 + 0x14) = uStack_4c;
          *param_1 = 5;
          uVar11 = (undefined4)local_58;
          if (ppcVar10 != (char **)0x0) {
            uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_58,1);
          }
          if ((bVar2) && (CONCAT44(uStack_f4,local_f8) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
          return;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar5 != 0) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,ppcVar9);
          goto LAB_0061c7b4;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0061c87e;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0061c87e:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


