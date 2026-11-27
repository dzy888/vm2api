// 0016fb10 parse_http_body_value

/* craggemini[b21da2d71f2da7a3]::mcp_stdio::parse_http_body_value */

void __rustcall
craggemini[b21da2d71f2da7a3]::mcp_stdio::parse_http_body_value
          (undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auVar7 [16];
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  longlong *local_88;
  code *local_80;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    param_1[1] = 0;
    param_1[3] = 0;
    *(undefined1 *)param_1 = 5;
    return;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = param_2;
  local_e0 = param_3;
  uVar6 = serde_json[dc3825464c436029]::de::from_trait::
          <serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>
                    (&local_50,&local_e8);
  if (local_50 != -1) {
    param_1[2] = local_40;
    param_1[3] = uStack_38;
    *param_1 = CONCAT71(uStack_4f,local_50);
    param_1[1] = uStack_48;
    return;
  }
  local_a8 = uStack_48;
  (*(code *)PTR_from_utf8_lossy_00219e60)(uVar6,param_3);
  local_b0 = local_60;
  auVar7 = <str>::trim_matches::<<char>::is_whitespace>(local_60,local_58);
  uVar5 = auVar7._8_8_;
  lVar4 = auVar7._0_8_;
  if (uVar5 < 0x1001) {
    if (uVar5 == 0) {
      uVar5 = 0;
      local_f0 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      lVar4 = (*(code *)PTR___rust_alloc_00219c88)();
      if (lVar4 == 0) {
        (*(code *)PTR_handle_error_00219c78)();
        goto LAB_0016fefd;
      }
      (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Da,uVar5);
      local_f0 = uVar5;
    }
  }
  else {
    local_c0 = (undefined8 *)0x1000;
    do {
      if (-0x41 < *(char *)(lVar4 + (longlong)local_c0)) goto LAB_0016fc6a;
      if (-0x41 < *(char *)(lVar4 + -1 + (longlong)local_c0)) {
        local_c0 = (undefined8 *)((longlong)local_c0 + -1);
        goto LAB_0016fc6a;
      }
      if (-0x41 < *(char *)(lVar4 + -2 + (longlong)local_c0)) {
        local_c0 = (undefined8 *)((longlong)local_c0 + -2);
        goto LAB_0016fc6a;
      }
      if (-0x41 < *(char *)(lVar4 + -3 + (longlong)local_c0)) {
        local_c0 = (undefined8 *)((longlong)local_c0 + -3);
        goto LAB_0016fc6a;
      }
      local_c0 = (undefined8 *)((longlong)local_c0 + -4);
    } while (local_c0 != (undefined8 *)0x0);
    local_c0 = (undefined8 *)0x0;
LAB_0016fc6a:
    local_88 = &local_c8;
    local_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_c8 = lVar4;
    (*(code *)PTR_format_inner_00219db0)(local_c0,&local_88);
    local_f0 = local_e8;
    uVar5 = local_d8;
  }
  local_a0 = 0;
  local_90 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)puVar2 + 4) = 0x72;
    *(undefined4 *)puVar2 = 0x6f727265;
    local_c8 = 5;
    local_b8 = 5;
    local_c0 = puVar2;
    if ((longlong)uVar5 < 0) {
LAB_0016fd17:
      (*(code *)PTR_handle_error_00219c78)();
      goto LAB_0016fefd;
    }
    if (uVar5 == 0) {
      uVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      uVar3 = (*(code *)PTR___rust_alloc_00219c88)();
      if (uVar3 == 0) goto LAB_0016fd17;
      (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Da_00,uVar5);
    }
    local_e8 = CONCAT71(local_e8._1_7_,3);
    local_e0 = uVar5;
    local_d8 = uVar3;
    uStack_d0 = uVar5;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_88,&local_a0,&local_c8,&local_e8);
    if ((char)local_88 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_88);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar4 = 1;
    puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0x79646f625f776172;
      local_c8 = 8;
      local_b8 = 8;
      local_c0 = puVar2;
      if (uVar5 != 0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
        lVar4 = (*(code *)PTR___rust_alloc_00219c88)();
        if (lVar4 == 0) {
          (*(code *)PTR_handle_error_00219c78)();
          goto LAB_0016fefd;
        }
        (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Da_01,uVar5);
      }
      local_e8 = CONCAT71(local_e8._1_7_,3);
      local_e0 = uVar5;
      local_d8 = lVar4;
      uStack_d0 = uVar5;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_a0,&local_c8,&local_e8);
      if ((char)local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
      param_1[3] = local_90;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_a0;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_a0._4_4_;
      *(undefined4 *)(param_1 + 2) = uStack_98;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_94;
      *(undefined1 *)param_1 = 5;
      uVar6 = (undefined4)local_a0;
      if (local_f0 != 0) {
        uVar6 = (*(code *)PTR___rust_dealloc_00219c40)((undefined4)local_a0,1);
      }
      if (local_68 - 1U < 0xfffffffffffffffe) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar6,1);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (&local_a8);
      return;
    }
  }
  (*(code *)PTR_handle_error_00219c78)();
LAB_0016fefd:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


