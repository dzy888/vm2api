// 003becd0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(&str,
   &str)>, craggemini_core[66f3c71560d70857]::models::openai_models_list::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(&str,&str)>,craggemini_core[66f3c71560d70857]::models::openai_models_list::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  code *pcVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined4 extraout_XMM0_Da;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined1 local_118 [8];
  longlong local_110;
  undefined8 *local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong local_d8;
  char local_d0 [32];
  ulonglong local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined8 local_38;
  
  uVar7 = param_3 - param_2;
  puVar10 = param_1;
  local_f8 = param_2;
  if (uVar7 < 0x7ffffffffffffff9) goto LAB_003bed11;
  puVar10 = (ulonglong *)0x0;
  local_120 = uVar7;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003bed11:
    local_a8 = puVar10;
    uVar11 = uVar7 >> 5;
    if (param_3 == local_f8) {
      uVar4 = 8;
      local_b0 = 0;
      goto LAB_003bf116;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar10 = (ulonglong *)&DAT_00000008;
    local_120 = uVar7;
    uVar4 = (*(code *)PTR___rust_alloc_00799000)();
  } while (uVar4 == 0);
  local_a0 = -uVar11;
  lVar8 = 1;
  local_d8 = 0;
  pcVar9 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
  local_b0 = uVar11;
  do {
    puVar2 = PTR___rust_alloc_00799000;
    local_f0 = 0;
    local_e0 = 0;
    (*pcVar9)();
    puVar5 = (undefined8 *)(*(code *)puVar2)();
    if (puVar5 == (undefined8 *)0x0) goto LAB_003bf136;
    *(undefined2 *)puVar5 = 0x6469;
    local_138 = 2;
    local_128 = 2;
    lVar6 = *(longlong *)(local_f8 + 8 + local_d8);
    local_130 = puVar5;
    if (lVar6 < 0) {
LAB_003bf101:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003bf168;
    }
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar5 == (undefined8 *)0x0) goto LAB_003bf101;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar6);
    }
    local_118[0] = 3;
    local_110 = lVar6;
    local_108 = puVar5;
    local_100 = lVar6;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_d0,&local_f0,&local_138,local_118);
    puVar2 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if (local_d0[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_d0)
      ;
    }
    (*(code *)puVar2)();
    puVar3 = PTR___rust_alloc_00799000;
    puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 == (undefined8 *)0x0) goto LAB_003bf136;
    *(undefined2 *)((longlong)puVar5 + 4) = 0x7463;
    *(undefined4 *)puVar5 = 0x656a626f;
    local_138 = 6;
    local_128 = 6;
    local_130 = puVar5;
    (*(code *)puVar2)();
    puVar5 = (undefined8 *)(*(code *)puVar3)();
    if (puVar5 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003bf168;
    }
    *(undefined1 *)((longlong)puVar5 + 4) = 0x6c;
    *(undefined4 *)puVar5 = 0x65646f6d;
    local_118[0] = 3;
    local_110 = 5;
    local_100 = 5;
    local_108 = puVar5;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_d0,&local_f0,&local_138,local_118);
    if (local_d0[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_d0)
      ;
    }
    (*(code *)puVar2)();
    puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 == (undefined8 *)0x0) {
LAB_003bf136:
      (*(code *)PTR_handle_error_00798ff0)();
LAB_003bf168:
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    *(undefined4 *)((longlong)puVar5 + 3) = 0x64657461;
    *(undefined4 *)puVar5 = 0x61657263;
    local_138 = 7;
    local_128 = 7;
    local_118[0] = 2;
    local_110 = 0;
    local_108 = (undefined8 *)0x67b64b00;
    local_130 = puVar5;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_d0,&local_f0,&local_138,local_118);
    pcVar9 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if (local_d0[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_d0)
      ;
    }
    (*pcVar9)();
    puVar2 = PTR___rust_alloc_00799000;
    puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 == (undefined8 *)0x0) goto LAB_003bf136;
    *puVar5 = 0x79625f64656e776f;
    local_138 = 8;
    local_128 = 8;
    local_130 = puVar5;
    (*pcVar9)();
    puVar5 = (undefined8 *)(*(code *)puVar2)();
    if (puVar5 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003bf168;
    }
    *puVar5 = 0x696d656767617263;
    *(undefined2 *)(puVar5 + 1) = 0x696e;
    local_118[0] = 3;
    local_110 = 10;
    local_100 = 10;
    local_108 = puVar5;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_d0,&local_f0,&local_138,local_118);
    if (local_d0[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_d0)
      ;
    }
    local_38 = local_e0;
    uStack_4b._3_1_ = (undefined1)local_f0;
    uStack_47 = (undefined4)((ulonglong)local_f0 >> 8);
    uStack_43._0_3_ = (undefined3)((ulonglong)local_f0 >> 0x28);
    uStack_43._3_1_ = (undefined1)uStack_e8;
    uStack_3f = (undefined7)((ulonglong)uStack_e8 >> 8);
    *(undefined1 *)(uVar4 + local_d8) = 5;
    puVar1 = (undefined4 *)(uVar4 + 1 + local_d8);
    *puVar1 = uStack_4f;
    puVar1[1] = uStack_4b;
    puVar1[2] = uStack_47;
    puVar1[3] = uStack_43;
    puVar5 = (undefined8 *)(uVar4 + 0x10 + local_d8);
    *puVar5 = uStack_e8;
    puVar5[1] = local_e0;
    lVar6 = local_a0 + lVar8;
    lVar8 = lVar8 + 1;
    local_d8 = local_d8 + 0x20;
    if (lVar6 == 0) {
      uVar11 = local_b0;
LAB_003bf116:
      *local_a8 = local_b0;
      local_a8[1] = uVar4;
      local_a8[2] = uVar11;
      return local_a8;
    }
  } while( true );
}


