// 003ba2f0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GroundingChunk>,
   <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GroundingChunk>,<craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  code *pcVar12;
  code *pcVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  char local_178 [8];
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 *local_120;
  undefined8 local_118;
  ulonglong *local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  undefined2 *local_b0;
  char local_a8 [32];
  undefined8 local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined8 local_38;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3 - param_2;
  uVar10 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
  puVar11 = param_1;
  if ((ulonglong)(param_3 - param_2) < 0xbfffffffffffffd1) goto LAB_003ba33a;
  puVar11 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003ba33a:
    local_c8 = puVar11;
    uVar4 = uVar10 >> 5;
    if (param_3 == param_2) {
      uVar5 = 8;
      uVar10 = 0;
      goto LAB_003ba6ea;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar11 = (ulonglong *)&DAT_00000008;
    uVar5 = (*(code *)PTR___rust_alloc_00799000)();
  } while (uVar5 == 0);
  local_c0 = -uVar4;
  local_b8 = (undefined4 *)(uVar5 + 1);
  plVar14 = (longlong *)(param_2 + 0x28);
  lVar15 = 1;
  pcVar12 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
  pcVar13 = (code *)PTR___rust_alloc_00799000;
  while( true ) {
    local_140 = 0;
    local_130 = 0;
    (*pcVar12)();
    puVar6 = (undefined2 *)(*pcVar13)();
    if (puVar6 == (undefined2 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003ba740;
    }
    *(undefined1 *)(puVar6 + 1) = 0x62;
    *puVar6 = 0x6577;
    local_88 = 3;
    local_78 = 3;
    local_158 = 0;
    local_148 = 0;
    local_b0 = puVar6;
    local_80 = puVar6;
    (*pcVar12)();
    puVar7 = (undefined4 *)(*pcVar13)();
    if (puVar7 == (undefined4 *)0x0) break;
    *(undefined1 *)((longlong)puVar7 + 2) = 0x69;
    *(undefined2 *)puVar7 = 0x7275;
    local_128 = 3;
    local_118 = 3;
    lVar9 = plVar14[-3];
    local_120 = puVar7;
    if (lVar9 < 0) {
LAB_003ba6d5:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003ba740;
    }
    if (lVar9 == 0) {
      lVar8 = 1;
    }
    else {
      (*pcVar12)();
      lVar8 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar8 == 0) goto LAB_003ba6d5;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar9);
    }
    local_178[0] = '\x03';
    local_170 = lVar9;
    local_168 = lVar8;
    local_160 = lVar9;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_a8,&local_158,&local_128,local_178);
    puVar3 = PTR___rust_alloc_00799000;
    puVar2 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if (local_a8[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_a8)
      ;
    }
    (*(code *)puVar2)();
    puVar7 = (undefined4 *)(*(code *)puVar3)();
    if (puVar7 == (undefined4 *)0x0) break;
    *(undefined1 *)(puVar7 + 1) = 0x65;
    *puVar7 = 0x6c746974;
    local_128 = 5;
    local_118 = 5;
    lVar9 = *plVar14;
    local_120 = puVar7;
    if (lVar9 < 0) {
LAB_003ba712:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003ba740;
    }
    if (lVar9 == 0) {
      lVar8 = 1;
    }
    else {
      (*(code *)puVar2)();
      lVar8 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar8 == 0) goto LAB_003ba712;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar9);
    }
    local_178[0] = '\x03';
    local_170 = lVar9;
    local_168 = lVar8;
    local_160 = lVar9;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_a8,&local_158,&local_128,local_178);
    pcVar13 = (code *)PTR___rust_alloc_00799000;
    pcVar12 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if (local_a8[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_a8)
      ;
    }
    local_58 = local_148;
    local_68 = (undefined4)local_158;
    uStack_64 = local_158._4_4_;
    uStack_60 = uStack_150;
    uStack_5c = uStack_14c;
    local_70[0] = 5;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_178,&local_140,&local_88,local_70);
    puVar7 = local_b8;
    if (local_178[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (local_178);
    }
    local_38 = local_130;
    uStack_4b._3_1_ = (undefined1)local_140;
    uStack_47 = (undefined4)((ulonglong)local_140 >> 8);
    uStack_43._0_3_ = (undefined3)((ulonglong)local_140 >> 0x28);
    uStack_43._3_1_ = (undefined1)uStack_138;
    uStack_3f = (undefined7)((ulonglong)uStack_138 >> 8);
    *(undefined1 *)((longlong)puVar7 + -1) = 5;
    *puVar7 = uStack_4f;
    puVar7[1] = uStack_4b;
    puVar7[2] = uStack_47;
    puVar7[3] = uStack_43;
    *(undefined8 *)((longlong)puVar7 + 0xf) = uStack_138;
    *(undefined8 *)((longlong)puVar7 + 0x17) = local_130;
    lVar9 = local_c0 + lVar15;
    lVar15 = lVar15 + 1;
    local_b8 = puVar7 + 8;
    plVar14 = plVar14 + 6;
    if (lVar9 == 0) {
      uVar10 = uVar4;
LAB_003ba6ea:
      *local_c8 = uVar10;
      local_c8[1] = uVar5;
      local_c8[2] = uVar4;
      return local_c8;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_003ba740:
                    /* WARNING: Does not return */
  pcVar12 = (code *)invalidInstructionException();
  (*pcVar12)();
}


