// 0048b410 synthesize_subagent_sse

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::subagents::synthesize_subagent_sse */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::subagents::synthesize_subagent_sse
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          longlong param_5,int param_6,undefined4 param_7,longlong param_8,longlong param_9,
          longlong param_10,longlong param_11,longlong param_12,longlong param_13)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined1 *local_138;
  undefined *puStack_130;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  
  local_e8 = 0;
  local_d8 = 0;
  local_88 = param_1;
  local_80 = param_4;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)puVar3 + 4) = 0x74;
    *(undefined4 *)puVar3 = 0x6e657665;
    local_118 = 5;
    local_108 = 5;
    puStack_110 = puVar3;
    if (param_3 < 0) {
LAB_0048b4a3:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0048bf1b;
    }
    if (param_3 == 0) {
      lVar4 = 1;
    }
    else {
      local_ec = param_6;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 == 0) goto LAB_0048b4a3;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_3);
      param_6 = local_ec;
    }
    local_158 = CONCAT31(local_158._1_3_,3);
    uStack_150 = (undefined4)param_3;
    uStack_14c = (undefined4)((ulonglong)param_3 >> 0x20);
    uStack_148 = (undefined4)lVar4;
    uStack_144 = (undefined4)((ulonglong)lVar4 >> 0x20);
    uStack_140 = (undefined7)param_3;
    uStack_139 = (undefined1)((ulonglong)param_3 >> 0x38);
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_138,&local_e8,&local_118,&local_158);
    if ((char)local_138 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_138);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0x746e656761627573;
      *(undefined4 *)((longlong)puVar3 + 7) = 0x64695f74;
      local_118 = 0xb;
      local_108 = 0xb;
      puStack_110 = puVar3;
      if (param_5 < 0) {
LAB_0048b592:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0048bf1b;
      }
      if (param_5 == 0) {
        lVar4 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar4 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar4 == 0) goto LAB_0048b592;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,param_5);
      }
      local_158 = CONCAT31(local_158._1_3_,3);
      uStack_150 = (undefined4)param_5;
      uStack_14c = (undefined4)((ulonglong)param_5 >> 0x20);
      uStack_148 = (undefined4)lVar4;
      uStack_144 = (undefined4)((ulonglong)lVar4 >> 0x20);
      uStack_140 = (undefined7)param_5;
      uStack_139 = (undefined1)((ulonglong)param_5 >> 0x38);
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_138,&local_e8,&local_118,&local_158);
      if ((char)local_138 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_138);
      }
      if (param_6 == 1) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar3 == (undefined8 *)0x0) goto LAB_0048bec8;
        *puVar3 = 0x695f6d6165727473;
        *(undefined1 *)(puVar3 + 1) = 100;
        local_118 = 9;
        local_108 = 9;
        local_158 = CONCAT31(local_158._1_3_,2);
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = param_7;
        uStack_144 = 0;
        puStack_110 = puVar3;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_138,&local_e8,&local_118,&local_158);
        if ((char)local_138 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_138);
        }
      }
      if (param_8 != 0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar3 == (undefined8 *)0x0) goto LAB_0048bec8;
        *puVar3 = 0x6d616e5f65707974;
        *(undefined1 *)(puVar3 + 1) = 0x65;
        local_118 = 9;
        local_108 = 9;
        puStack_110 = puVar3;
        if (param_9 < 0) {
LAB_0048b72f:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0048bf1b;
        }
        if (param_9 == 0) {
          lVar4 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar4 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar4 == 0) goto LAB_0048b72f;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,param_9);
        }
        local_158 = CONCAT31(local_158._1_3_,3);
        uStack_150 = (undefined4)param_9;
        uStack_14c = (undefined4)((ulonglong)param_9 >> 0x20);
        uStack_148 = (undefined4)lVar4;
        uStack_144 = (undefined4)((ulonglong)lVar4 >> 0x20);
        uStack_140 = (undefined7)param_9;
        uStack_139 = (undefined1)((ulonglong)param_9 >> 0x38);
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_138,&local_e8,&local_118,&local_158);
        if ((char)local_138 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_138);
        }
      }
      if (param_10 != 0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar3 == (undefined8 *)0x0) goto LAB_0048bec8;
        *(undefined4 *)puVar3 = 0x656c6f72;
        local_118 = 4;
        local_108 = 4;
        puStack_110 = puVar3;
        if (param_11 < 0) {
LAB_0048b81c:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0048bf1b;
        }
        if (param_11 == 0) {
          lVar4 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar4 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar4 == 0) goto LAB_0048b81c;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,param_11);
        }
        local_158 = CONCAT31(local_158._1_3_,3);
        uStack_150 = (undefined4)param_11;
        uStack_14c = (undefined4)((ulonglong)param_11 >> 0x20);
        uStack_148 = (undefined4)lVar4;
        uStack_144 = (undefined4)((ulonglong)lVar4 >> 0x20);
        uStack_140 = (undefined7)param_11;
        uStack_139 = (undefined1)((ulonglong)param_11 >> 0x38);
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_138,&local_e8,&local_118,&local_158);
        if ((char)local_138 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_138);
        }
      }
      if (param_12 != 0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar3 == (undefined8 *)0x0) goto LAB_0048bec8;
        *(undefined1 *)((longlong)puVar3 + 4) = 0x61;
        *(undefined4 *)puVar3 = 0x746c6564;
        local_118 = 5;
        local_108 = 5;
        puStack_110 = puVar3;
        if (param_13 < 0) {
LAB_0048b90d:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0048bf1b;
        }
        if (param_13 == 0) {
          lVar4 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar4 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar4 == 0) goto LAB_0048b90d;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,param_13);
        }
        local_158 = CONCAT31(local_158._1_3_,3);
        uStack_150 = (undefined4)param_13;
        uStack_14c = (undefined4)((ulonglong)param_13 >> 0x20);
        uStack_148 = (undefined4)lVar4;
        uStack_144 = (undefined4)((ulonglong)lVar4 >> 0x20);
        uStack_140 = (undefined7)param_13;
        uStack_139 = (undefined1)((ulonglong)param_13 >> 0x38);
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_138,&local_e8,&local_118,&local_158);
        if ((char)local_138 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_138);
        }
      }
      local_b8 = 0;
      local_a8 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar3 == (undefined8 *)0x0) {
LAB_0048bed8:
        (*(code *)PTR_handle_error_00798ff0)();
      }
      else {
        *puVar3 = 0x74616469646e6163;
        *(undefined2 *)(puVar3 + 1) = 0x7365;
        local_78 = 10;
        local_68 = 10;
        local_70 = puVar3;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar5 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar5 == (undefined1 *)0x0) {
          (*(code *)PTR_handle_alloc_error_007991d8)();
          goto LAB_0048bf1b;
        }
        local_a0 = 0;
        local_90 = 0;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined1 *)((longlong)puVar3 + 4) = 0x78;
          *(undefined4 *)puVar3 = 0x65646e69;
          local_118 = 5;
          local_108 = 5;
          local_158 = CONCAT31(local_158._1_3_,2);
          uStack_150 = 0;
          uStack_14c = 0;
          uStack_148 = 0;
          uStack_144 = 0;
          puStack_110 = puVar3;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_138,&local_a0,&local_118,&local_158);
          if ((char)local_138 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_138);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar6 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar6 != (undefined4 *)0x0) {
            *(undefined4 *)((longlong)puVar6 + 3) = 0x746e6574;
            *puVar6 = 0x746e6f63;
            local_60 = 7;
            local_50 = 7;
            local_d0 = 0;
            local_c0 = 0;
            local_58 = puVar6;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar3 != (undefined8 *)0x0) {
              *(undefined4 *)puVar3 = 0x656c6f72;
              local_118 = 4;
              local_108 = 4;
              puStack_110 = puVar3;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar6 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar6 == (undefined4 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0048bf1b;
              }
              *(undefined1 *)(puVar6 + 1) = 0x6c;
              *puVar6 = 0x65646f6d;
              local_158 = CONCAT31(local_158._1_3_,3);
              uStack_150 = 5;
              uStack_14c = 0;
              uStack_148 = SUB84(puVar6,0);
              uStack_144 = (undefined4)((ulonglong)puVar6 >> 0x20);
              uStack_140 = 5;
              uStack_139 = 0;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_138,&local_d0,&local_118,&local_158);
              if ((char)local_138 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_138);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar3 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar3 + 4) = 0x73;
                *(undefined4 *)puVar3 = 0x74726170;
                local_118 = 5;
                local_108 = 5;
                uStack_150 = 0;
                uStack_14c = 0;
                uStack_148 = 8;
                uStack_144 = 0;
                uStack_140 = 0;
                uStack_139 = 0;
                local_158 = CONCAT31(local_158._1_3_,4);
                puStack_110 = puVar3;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_138,&local_d0,&local_118,&local_158);
                if ((char)local_138 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_138);
                }
                uStack_150 = (undefined4)local_d0;
                uStack_14c = local_d0._4_4_;
                uStack_148 = (undefined4)uStack_c8;
                uStack_144 = uStack_c8._4_4_;
                uStack_140 = (undefined7)local_c0;
                uStack_139 = (undefined1)((ulonglong)local_c0 >> 0x38);
                local_158 = CONCAT31(local_158._1_3_,5);
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_138,&local_a0,&local_60,&local_158);
                if ((char)local_138 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_138);
                }
                uStack_154._3_1_ = (undefined1)local_a0;
                uStack_150 = (undefined4)((ulonglong)local_a0 >> 8);
                uStack_14c._0_3_ = (undefined3)((ulonglong)local_a0 >> 0x28);
                uStack_14c._3_1_ = (undefined1)uStack_98;
                *puVar5 = 5;
                *(undefined8 *)(puVar5 + 0x10) = uStack_98;
                *(undefined8 *)(puVar5 + 0x18) = local_90;
                *(undefined4 *)(puVar5 + 1) = local_158;
                *(undefined4 *)(puVar5 + 5) = uStack_154;
                *(undefined4 *)(puVar5 + 9) = uStack_150;
                *(undefined4 *)(puVar5 + 0xd) = uStack_14c;
                uStack_150 = 1;
                uStack_14c = 0;
                uStack_148 = SUB84(puVar5,0);
                uStack_144 = (undefined4)((ulonglong)puVar5 >> 0x20);
                uStack_140 = 1;
                uStack_139 = 0;
                local_158 = CONCAT31(local_158._1_3_,4);
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_138,&local_b8,&local_78,&local_158);
                if ((char)local_138 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_138);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                uVar2 = _UNK_00195b99;
                if (puVar3 != (undefined8 *)0x0) {
                  *puVar3 = _DAT_00195b91;
                  puVar3[1] = uVar2;
                  *(undefined2 *)(puVar3 + 2) = 0x746e;
                  local_d0 = 0x12;
                  local_c0 = 0x12;
                  uStack_140 = (undefined7)local_d8;
                  uStack_139 = (undefined1)((ulonglong)local_d8 >> 0x38);
                  uStack_150 = (undefined4)local_e8;
                  uStack_14c = local_e8._4_4_;
                  uStack_148 = uStack_e0;
                  uStack_144 = uStack_dc;
                  local_158 = CONCAT31(local_158._1_3_,5);
                  uStack_c8 = puVar3;
                  <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                  ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                            (&local_138,&local_158);
                  if ((char)local_138 != -1) {
                    uStack_100 = uStack_120;
                    uStack_fc = uStack_11c;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_138,&local_b8,&local_d0,&local_118);
                    if ((char)local_138 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_138);
                    }
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_158);
                    uVar2 = local_88;
                    uStack_150 = (undefined4)local_b8;
                    uStack_14c = local_b8._4_4_;
                    uStack_148 = uStack_b0;
                    uStack_144 = uStack_ac;
                    uStack_140 = (undefined7)local_a8;
                    uStack_139 = (undefined1)((ulonglong)local_a8 >> 0x38);
                    local_158 = CONCAT31(local_158._1_3_,5);
                    puStack_130 = PTR_fmt_00799758;
                    local_138 = (undefined1 *)&local_158;
                    (*(code *)PTR_format_inner_00799048)((undefined4)local_b8,&local_138);
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_158,&DAT_00186728);
                    return uVar2;
                  }
                  local_118 = puStack_130;
                  (*(code *)PTR_unwrap_failed_00799028)
                            (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078acd0,&local_118,
                             &PTR_s_src_subagents_rs_0078ad88);
                  goto LAB_0048bf1b;
                }
                goto LAB_0048bed8;
              }
            }
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0048bf1b;
          }
        }
        (*(code *)PTR_handle_error_00798ff0)();
      }
      goto LAB_0048bf1b;
    }
  }
LAB_0048bec8:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0048bf1b:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


