// 003bdd70 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)>,
   <craggemini_core[66f3c71560d70857]::acp_backend::AcpMcpServerSpec>::to_acp_json::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>,<craggemini_core[66f3c71560d70857]::acp_backend::AcpMcpServerSpec>::to_acp_json::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  ulonglong *puVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 *local_c0;
  char local_b8 [33];
  undefined4 uStack_97;
  undefined4 uStack_93;
  undefined4 uStack_8f;
  undefined4 uStack_8b;
  undefined7 uStack_87;
  undefined8 local_80;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3 - param_2;
  uVar8 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
  puVar12 = param_1;
  if ((ulonglong)(param_3 - param_2) < 0xbfffffffffffffd1) goto LAB_003bddbb;
  puVar12 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003bddbb:
    local_d0 = puVar12;
    uVar3 = uVar8 >> 5;
    if (param_3 == param_2) {
      uVar4 = 8;
      uVar8 = 0;
      goto LAB_003be0ab;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar12 = (ulonglong *)&DAT_00000008;
    uVar4 = (*(code *)PTR___rust_alloc_00799000)();
  } while (uVar4 == 0);
  local_c8 = -uVar3;
  local_c0 = (undefined4 *)(uVar4 + 1);
  plVar10 = (longlong *)(param_2 + 0x28);
  lVar9 = 1;
  pcVar11 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
  while( true ) {
    puVar2 = PTR___rust_alloc_00799000;
    local_120 = 0;
    local_110 = 0;
    (*pcVar11)();
    puVar5 = (undefined4 *)(*(code *)puVar2)();
    if (puVar5 == (undefined4 *)0x0) break;
    *puVar5 = 0x656d616e;
    local_108 = 4;
    local_f8 = 4;
    lVar7 = plVar10[-3];
    local_100 = puVar5;
    if (lVar7 < 0) {
LAB_003be096:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003be0ee;
    }
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar6 = (*(code *)puVar2)();
      if (lVar6 == 0) goto LAB_003be096;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar7);
    }
    local_f0[0] = 3;
    local_e8 = lVar7;
    local_e0 = lVar6;
    local_d8 = lVar7;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_b8,&local_120,&local_108,local_f0);
    puVar2 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if (local_b8[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_b8)
      ;
    }
    (*(code *)puVar2)();
    puVar2 = PTR___rust_alloc_00799000;
    puVar5 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 == (undefined4 *)0x0) break;
    *(undefined1 *)(puVar5 + 1) = 0x65;
    *puVar5 = 0x756c6176;
    local_108 = 5;
    local_f8 = 5;
    lVar7 = *plVar10;
    local_100 = puVar5;
    if (lVar7 < 0) {
LAB_003be0d2:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_003be0ee;
    }
    if (lVar7 == 0) {
      lVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar6 = (*(code *)puVar2)();
      if (lVar6 == 0) goto LAB_003be0d2;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar7);
    }
    local_f0[0] = 3;
    local_e8 = lVar7;
    local_e0 = lVar6;
    local_d8 = lVar7;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_b8,&local_120,&local_108,local_f0);
    puVar5 = local_c0;
    pcVar11 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    if (local_b8[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_b8)
      ;
    }
    local_80 = local_110;
    uStack_93._3_1_ = (undefined1)local_120;
    uStack_8f = (undefined4)((ulonglong)local_120 >> 8);
    uStack_8b._0_3_ = (undefined3)((ulonglong)local_120 >> 0x28);
    uStack_8b._3_1_ = (undefined1)uStack_118;
    uStack_87 = (undefined7)((ulonglong)uStack_118 >> 8);
    *(undefined1 *)((longlong)puVar5 + -1) = 5;
    *puVar5 = uStack_97;
    puVar5[1] = uStack_93;
    puVar5[2] = uStack_8f;
    puVar5[3] = uStack_8b;
    *(undefined8 *)((longlong)puVar5 + 0xf) = uStack_118;
    *(undefined8 *)((longlong)puVar5 + 0x17) = local_110;
    lVar7 = local_c8 + lVar9;
    lVar9 = lVar9 + 1;
    local_c0 = puVar5 + 8;
    plVar10 = plVar10 + 6;
    if (lVar7 == 0) {
      uVar8 = uVar3;
LAB_003be0ab:
      *local_d0 = uVar8;
      local_d0[1] = uVar4;
      local_d0[2] = uVar3;
      return local_d0;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_003be0ee:
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}


