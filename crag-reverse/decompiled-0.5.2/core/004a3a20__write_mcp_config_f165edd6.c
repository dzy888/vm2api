// 004a3a20 write_mcp_config

/* craggemini_core[66f3c71560d70857]::write_mcp_config */

undefined4 * __rustcall
craggemini_core[66f3c71560d70857]::write_mcp_config
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined8 local_628;
  undefined8 *local_620;
  undefined8 local_618;
  longlong *local_610;
  undefined *local_608;
  undefined8 local_5f0 [2];
  undefined8 local_5e0;
  undefined4 *local_5d8;
  longlong local_5d0;
  undefined4 *local_5c8;
  undefined4 *puStack_5c0;
  undefined4 *local_5b8;
  longlong local_300;
  undefined4 *local_2f8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  
  uVar8 = <craggemini_core[66f3c71560d70857]::Config>::load(&local_5d0,param_1,param_2);
  local_2f8 = local_5c8;
  local_300 = local_5d0;
  if (local_5d0 == 2) {
    return local_5c8;
  }
  (*(code *)PTR_memcpy_00799008)(uVar8,0x2c0);
  puVar4 = (undefined4 *)
           <craggemini_core[66f3c71560d70857]::Config>::validate(&local_300,&puStack_5c0);
  if ((puVar4 != (undefined4 *)0x0) ||
     (guard_exec::resolve_self_executable(&local_5d0), lVar2 = local_5d0, puVar4 = local_5c8,
     local_5d0 == -1)) {
LAB_004a3aa0:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::Config>(&local_300);
    return puVar4;
  }
  mcp::write_slot_mcp_config_files(&local_5d0,local_1c8,local_1c0,local_1c8,local_1c0,0);
  puVar4 = puStack_5c0;
  lVar3 = local_5d0;
  if (local_5d0 == -1) {
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(0xffffffffffffffff,1);
    }
    puVar4 = local_5c8;
    goto LAB_004a3aa0;
  }
  local_5f0[0] = 0;
  local_5e0 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0x666e6f635f70636d;
    *(undefined2 *)(puVar5 + 1) = 0x6769;
    local_628 = 10;
    local_618 = 10;
    local_620 = puVar5;
    (*(code *)PTR_from_utf8_00799468)(extraout_XMM0_Da,param_4);
    puVar7 = puStack_5c0;
    if ((int)local_5d0 == 1) {
      local_5d0 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
                  ::custom::<&str>("path contains invalid UTF-8 characters",0x26);
      (*(code *)PTR_unwrap_failed_00799028)
                (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_5d0,
                 &PTR_anon_125f69fd11b353bcd1ecfc92c9aa10c4_114_llvm_16783778792561144368_0078b470);
      goto LAB_004a4023;
    }
    if ((longlong)puStack_5c0 < 0) {
LAB_004a3c02:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004a4023;
    }
    if (puStack_5c0 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x1;
    }
    else {
      local_5d8 = puVar4;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar6 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar6 == (undefined4 *)0x0) goto LAB_004a3c02;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,puVar7);
      puVar4 = local_5d8;
    }
    local_5d0 = CONCAT71(local_5d0._1_7_,3);
    local_5c8 = puVar7;
    local_5b8 = puVar7;
    puStack_5c0 = puVar6;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_610,local_5f0,&local_628,&local_5d0);
    if ((char)local_610 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_610);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 == (undefined8 *)0x0) goto LAB_004a3f7a;
    *(undefined8 *)((longlong)puVar5 + 5) = 0x6769666e6f635f65;
    *puVar5 = 0x635f656764697262;
    local_628 = 0xd;
    local_618 = 0xd;
    local_620 = puVar5;
    (*(code *)PTR_from_utf8_00799468)(extraout_XMM0_Da_01,puVar4);
    puVar4 = puStack_5c0;
    if ((int)local_5d0 == 1) {
      local_5d0 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
                  ::custom::<&str>("path contains invalid UTF-8 characters",0x26);
      (*(code *)PTR_unwrap_failed_00799028)
                (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_5d0,
                 &PTR_anon_125f69fd11b353bcd1ecfc92c9aa10c4_114_llvm_16783778792561144368_0078b470);
      goto LAB_004a4023;
    }
    if ((longlong)puStack_5c0 < 0) {
LAB_004a3d67:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004a4023;
    }
    if (puStack_5c0 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined4 *)0x0) goto LAB_004a3d67;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,puVar4);
    }
    local_5d0 = CONCAT71(local_5d0._1_7_,3);
    local_5c8 = puVar4;
    local_5b8 = puVar4;
    puStack_5c0 = puVar7;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_610,local_5f0,&local_628,&local_5d0);
    if ((char)local_610 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_610);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined2 *)((longlong)puVar5 + 4) = 0x7265;
      *(undefined4 *)puVar5 = 0x76726573;
      local_628 = 6;
      local_618 = 6;
      local_620 = puVar5;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0x67617263;
        local_5d0 = CONCAT71(local_5d0._1_7_,3);
        local_5c8 = (undefined4 *)0x4;
        local_5b8 = (undefined4 *)0x4;
        puStack_5c0 = puVar4;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_610,local_5f0,&local_628,&local_5d0);
        if ((char)local_610 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_610);
        }
        local_5c8 = (undefined4 *)local_5f0[0];
        local_5b8 = (undefined4 *)local_5e0;
        local_5d0 = CONCAT71(local_5d0._1_7_,5);
        local_608 = PTR_fmt_00799758;
        local_610 = &local_5d0;
        (*(code *)PTR__print_00799b38)();
        uVar8 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_5d0,&local_610);
        if (lVar3 != 0) {
          uVar8 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
        }
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::Config>
                  (&local_300);
        return (undefined4 *)0;
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004a4023;
    }
  }
LAB_004a3f7a:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004a4023:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


