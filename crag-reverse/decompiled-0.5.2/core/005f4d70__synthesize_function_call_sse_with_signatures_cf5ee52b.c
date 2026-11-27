// 005f4d70 synthesize_function_call_sse_with_signatures

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::synthesize_function_call_sse_with_signatures */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::tools::synthesize_function_call_sse_with_signatures
          (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5,
          longlong param_6,longlong param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  char local_168;
  undefined1 uStack_167;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  
  local_80 = param_1;
  if (param_5 == 0) {
LAB_005f4dc4:
    local_a8 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_a8 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
    if (local_a8 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005f4dc4;
    }
  }
  uStack_160 = param_3 * 0x50 + param_2;
  local_168 = (char)param_2;
  uStack_167 = (undefined1)((ulonglong)param_2 >> 8);
  uStack_166 = (undefined2)((ulonglong)param_2 >> 0x10);
  uStack_164 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_150 = (undefined4)param_4;
  uStack_14c = (undefined4)((ulonglong)param_4 >> 0x20);
  local_140 = &local_b0;
  local_148 = param_5;
  local_b0 = param_5;
  local_a0 = param_5;
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::enumerate::Enumerate<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>>,craggemini_core[66f3c71560d70857]::tools::synthesize_function_call_sse_with_signatures::{closure#0}>>>
  ::from_iter(&local_c8,&local_168);
  local_78 = (undefined8 *)0x0;
  local_68 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar5 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005f560a;
  }
  *puVar5 = 0x74616469646e6163;
  *(undefined2 *)(puVar5 + 1) = 0x7365;
  local_60 = 10;
  local_50 = 10;
  local_58 = puVar5;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    goto LAB_005f560a;
  }
  local_98 = 0;
  local_88 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)puVar5 + 4) = 0x78;
    *(undefined4 *)puVar5 = 0x65646e69;
    local_118 = 5;
    uStack_108 = 5;
    local_168 = '\x02';
    uStack_160._0_4_ = 0;
    uStack_160._4_4_ = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    local_110 = puVar5;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_138,&local_98,&local_118,&local_168);
    if ((char)local_138 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_138);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 != (undefined4 *)0x0) {
      *(undefined4 *)((longlong)puVar7 + 3) = 0x746e6574;
      *puVar7 = 0x746e6f63;
      local_e0 = 7;
      local_d0 = 7;
      local_f8 = 0;
      local_e8 = 0;
      uStack_d8 = puVar7;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)puVar5 = 0x656c6f72;
        local_118 = 4;
        uStack_108 = 4;
        local_110 = puVar5;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar7 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005f560a;
        }
        *(undefined1 *)(puVar7 + 1) = 0x6c;
        *puVar7 = 0x65646f6d;
        local_168 = '\x03';
        uStack_160._0_4_ = 5;
        uStack_160._4_4_ = 0;
        uStack_158 = SUB84(puVar7,0);
        uStack_154 = (undefined4)((ulonglong)puVar7 >> 0x20);
        uStack_150 = 5;
        uStack_14c = 0;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_138,&local_f8,&local_118,&local_168);
        if ((char)local_138 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_138);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined1 *)((longlong)puVar5 + 4) = 0x73;
          *(undefined4 *)puVar5 = 0x74726170;
          local_118 = 5;
          uStack_108 = 5;
          local_110 = puVar5;
          <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
          ::collect_seq::
          <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                    (&local_168,&local_c8);
          if (local_168 == -1) {
            local_138 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                       &local_138,&PTR_s_src_tools_rs_0078e930);
            goto LAB_005f560a;
          }
          local_128 = uStack_158;
          uStack_124 = uStack_154;
          uStack_120 = uStack_150;
          uStack_11c = uStack_14c;
          local_138 = CONCAT44(uStack_164,CONCAT22(uStack_166,CONCAT11(uStack_167,local_168)));
          uStack_130 = (undefined4)uStack_160;
          uStack_12c = uStack_160._4_4_;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_168,&local_f8,&local_118,&local_138);
          if (local_168 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_168);
          }
          uStack_160._0_4_ = (undefined4)local_f8;
          uStack_160._4_4_ = local_f8._4_4_;
          uStack_158 = (undefined4)uStack_f0;
          uStack_154 = uStack_f0._4_4_;
          uStack_150 = (undefined4)local_e8;
          uStack_14c = (undefined4)((ulonglong)local_e8 >> 0x20);
          local_168 = '\x05';
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_138,&local_98,&local_e0,&local_168);
          if ((char)local_138 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_138);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar5 == (undefined8 *)0x0) goto LAB_005f55a6;
          *puVar5 = 0x65526873696e6966;
          *(undefined4 *)(puVar5 + 1) = 0x6e6f7361;
          local_118 = 0xc;
          uStack_108 = 0xc;
          local_110 = puVar5;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar7 == (undefined4 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005f560a;
          }
          *puVar7 = 0x504f5453;
          local_168 = '\x03';
          uStack_160._0_4_ = 4;
          uStack_160._4_4_ = 0;
          uStack_158 = SUB84(puVar7,0);
          uStack_154 = (undefined4)((ulonglong)puVar7 >> 0x20);
          uStack_150 = 4;
          uStack_14c = 0;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_138,&local_98,&local_118,&local_168);
          if ((char)local_138 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_138);
          }
          uStack_164._3_1_ = (undefined1)local_98;
          uStack_160._0_4_ = (undefined4)((ulonglong)local_98 >> 8);
          uStack_160._4_3_ = (undefined3)((ulonglong)local_98 >> 0x28);
          uStack_160._7_1_ = (undefined1)uStack_90;
          *puVar6 = 5;
          *(undefined8 *)(puVar6 + 0x10) = uStack_90;
          *(undefined8 *)(puVar6 + 0x18) = local_88;
          *(uint *)(puVar6 + 1) = CONCAT22(uStack_166,CONCAT11(uStack_167,local_168));
          *(undefined4 *)(puVar6 + 5) = uStack_164;
          *(undefined4 *)(puVar6 + 9) = (undefined4)uStack_160;
          *(undefined4 *)(puVar6 + 0xd) = uStack_160._4_4_;
          uStack_160._0_4_ = 1;
          uStack_160._4_4_ = 0;
          uStack_158 = SUB84(puVar6,0);
          uStack_154 = (undefined4)((ulonglong)puVar6 >> 0x20);
          uStack_150 = 1;
          uStack_14c = 0;
          local_168 = '\x04';
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_138,&local_78,&local_60,&local_168);
          if ((char)local_138 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_138);
          }
          local_110 = local_78;
          uStack_108 = CONCAT44(uStack_6c,uStack_70);
          local_100 = local_68;
          local_118 = CONCAT71(local_118._1_7_,5);
          uVar9 = local_78._0_4_;
          if (param_6 == 0) goto LAB_005f549c;
          local_e0 = 0;
          local_d0 = 0;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar5 != (undefined8 *)0x0) {
            *(undefined8 *)((longlong)puVar5 + 7) = 0x64695f6e6f697461;
            *puVar5 = 0x61737265766e6f63;
            local_f8 = 0xf;
            local_e8 = 0xf;
            uStack_f0 = puVar5;
            if (param_7 < 0) {
LAB_005f533b:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_005f560a;
            }
            if (param_7 == 0) {
              lVar8 = 1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              lVar8 = (*(code *)PTR___rust_alloc_00799000)();
              if (lVar8 == 0) goto LAB_005f533b;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_7);
            }
            local_168 = '\x03';
            uStack_160._0_4_ = (undefined4)param_7;
            uStack_160._4_4_ = (undefined4)((ulonglong)param_7 >> 0x20);
            uStack_158 = (undefined4)lVar8;
            uStack_154 = (undefined4)((ulonglong)lVar8 >> 0x20);
            uStack_150 = (undefined4)uStack_160;
            uStack_14c = uStack_160._4_4_;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_138,&local_e0,&local_f8,&local_168);
            if ((char)local_138 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_138);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            uVar3 = _UNK_0019ed52;
            uVar2 = _UNK_0019ed4e;
            uVar9 = _UNK_0019ed4a;
            if (puVar5 != (undefined8 *)0x0) {
              *(undefined4 *)puVar5 = _DAT_0019ed46;
              *(undefined4 *)((longlong)puVar5 + 4) = uVar9;
              *(undefined4 *)(puVar5 + 1) = uVar2;
              *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
              *(undefined8 *)((longlong)puVar5 + 0xd) = 0x73746c757365725f;
              local_f8 = 0x15;
              local_e8 = 0x15;
              local_168 = '\x01';
              uStack_167 = 1;
              uStack_f0 = puVar5;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_138,&local_e0,&local_f8,&local_168);
              if ((char)local_138 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_138);
              }
              uStack_160._0_4_ = (undefined4)local_e0;
              uStack_160._4_4_ = local_e0._4_4_;
              uStack_158 = (undefined4)uStack_d8;
              uStack_154 = uStack_d8._4_4_;
              uStack_150 = (undefined4)local_d0;
              uStack_14c = (undefined4)((ulonglong)local_d0 >> 0x20);
              local_168 = '\x05';
              puVar7 = (undefined4 *)
                       (*(code *)PTR_index_or_insert_007992f8)((undefined4)local_e0,&local_118);
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (puVar7,0xe);
              uVar9 = CONCAT22(uStack_166,CONCAT11(uStack_167,local_168));
              *(ulonglong *)(puVar7 + 4) = CONCAT44(uStack_154,uStack_158);
              *(ulonglong *)(puVar7 + 6) = CONCAT44(uStack_14c,uStack_150);
              *puVar7 = uVar9;
              puVar7[1] = uStack_164;
              puVar7[2] = (undefined4)uStack_160;
              puVar7[3] = uStack_160._4_4_;
LAB_005f549c:
              uVar4 = local_80;
              local_168 = (char)&local_118;
              uStack_167 = (undefined1)((ulonglong)&local_118 >> 8);
              uStack_166 = (undefined2)((ulonglong)&local_118 >> 0x10);
              uStack_164 = (undefined4)((ulonglong)&local_118 >> 0x20);
              uStack_160._0_4_ = SUB84(PTR_fmt_00799758,0);
              uStack_160._4_4_ = (undefined4)((ulonglong)PTR_fmt_00799758 >> 0x20);
              (*(code *)PTR_format_inner_00799048)(uVar9,&local_168);
              uVar9 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_118,&DAT_00186728);
              for (local_b8 = local_b8 + 1; local_b8 != 1; local_b8 = local_b8 + -1) {
                uVar9 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(local_c0);
                local_c0 = local_c0 + 0x20;
              }
              if (local_c8 != 0) {
                uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,8);
              }
              if (local_b0 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
              }
              return uVar4;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005f560a;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005f560a;
    }
  }
LAB_005f55a6:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005f560a:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


