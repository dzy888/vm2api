// 005cf700 send_notify

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::send_notify */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::send_notify
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
          undefined8 param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  
  local_50[0] = 0;
  local_40 = 0;
  local_98 = param_5;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)((longlong)puVar2 + 3) = 0x6370726e;
    *puVar2 = 0x6e6f736a;
    local_90 = 7;
    local_80 = 7;
    local_88 = puVar2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 == (undefined2 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005cfa0f;
    }
    *(undefined1 *)(puVar3 + 1) = 0x30;
    *puVar3 = 0x2e32;
    local_b8 = CONCAT31(local_b8._1_3_,3);
    uStack_b0 = 3;
    uStack_a0 = 3;
    local_a8 = puVar3;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_78,local_50,&local_90,&local_b8);
    if ((char)local_78 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_78);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined2 *)(puVar2 + 1) = 0x646f;
      *puVar2 = 0x6874656d;
      local_90 = 6;
      local_80 = 6;
      local_88 = puVar2;
      if (param_4 < 0) {
LAB_005cf83c:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_005cfa0f;
      }
      if (param_4 == 0) {
        puVar3 = (undefined2 *)0x1;
      }
      else {
        local_38 = param_1;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar3 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar3 == (undefined2 *)0x0) goto LAB_005cf83c;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_4);
        param_1 = local_38;
      }
      local_b8 = CONCAT31(local_b8._1_3_,3);
      uStack_b0 = param_4;
      local_a8 = puVar3;
      uStack_a0 = param_4;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_78,local_50,&local_90,&local_b8);
      if ((char)local_78 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_78);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar2 + 1) = 0x736d;
        *puVar2 = 0x61726170;
        local_90 = 6;
        local_80 = 6;
        local_88 = puVar2;
        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_b8,local_98);
        if ((char)local_b8 != -1) {
          local_68 = (undefined4)local_a8;
          uStack_64 = local_a8._4_4_;
          uStack_60 = (undefined4)uStack_a0;
          uStack_5c = uStack_a0._4_4_;
          local_78 = CONCAT44(uStack_b4,local_b8);
          uStack_70 = (undefined4)uStack_b0;
          uStack_6c = uStack_b0._4_4_;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_b8,local_50,&local_90,&local_78);
          if ((char)local_b8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_b8);
          }
          uStack_b0 = local_50[0];
          uStack_a0 = local_40;
          local_b8 = CONCAT31(local_b8._1_3_,5);
          send_raw_json(param_1,param_2,&local_b8);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_b8);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_98);
          return param_1;
        }
        local_78 = uStack_b0;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,&local_78,
                   &PTR_s_src_acp_backend_rs_0078e490);
        goto LAB_005cfa0f;
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005cfa0f:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


