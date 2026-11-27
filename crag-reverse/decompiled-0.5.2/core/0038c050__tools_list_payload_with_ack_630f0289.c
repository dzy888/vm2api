// 0038c050 tools_list_payload_with_ack

/* <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::tools_list_payload_with_ack */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::tools_list_payload_with_ack
          (undefined1 *param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  char cVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined4 uVar16;
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  int *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  *(undefined1 *)(param_2 + 0xa0) = 1;
  piVar1 = (int *)(param_2 + 0x60);
  LOCK();
  bVar15 = *(int *)(param_2 + 0x60) == 0;
  if (bVar15) {
    *(int *)(param_2 + 0x60) = 1;
  }
  UNLOCK();
  if (!bVar15) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = *(char *)(param_2 + 100);
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar9 = *(char *)(param_2 + 100);
  }
  if (cVar9 == '\0') {
    uVar4 = *(ulonglong *)(param_2 + 0x10);
    local_50 = param_1;
    <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>,<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::tools_list_payload_with_ack::{closure#0}>>>
    ::from_iter(&local_48,*(longlong *)(param_2 + 0x70),
                *(longlong *)(param_2 + 0x78) * 0x80 + *(longlong *)(param_2 + 0x70));
    if (((bVar8 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(param_2 + 100) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    local_b8 = local_38;
    local_c8 = local_48;
    uStack_c4 = uStack_44;
    uStack_c0 = uStack_40;
    uStack_bc = uStack_3c;
    if (param_3 != '\0') {
      uVar10 = *(ulonglong *)(param_2 + 0x18);
      do {
        uVar12 = uVar4;
        if (uVar4 < uVar10) {
          uVar12 = uVar10;
        }
        LOCK();
        uVar3 = *(ulonglong *)(param_2 + 0x18);
        bVar15 = uVar10 == uVar3;
        if (bVar15) {
          *(ulonglong *)(param_2 + 0x18) = uVar12;
        }
        else {
          uVar10 = uVar3;
        }
        UNLOCK();
      } while (!bVar15);
      (*(code *)PTR_notify_waiters_00799550)();
    }
    local_90 = 0;
    local_80 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = 0x6e6f697369766572;
      local_a8 = 8;
      local_98 = 8;
      local_e8 = (int *)CONCAT71(local_e8._1_7_,2);
      uStack_e0 = (int *)0x0;
      local_d8 = uVar4;
      local_a0 = puVar11;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_78,&local_90,&local_a8,&local_e8);
      if ((char)local_78 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_78);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined1 *)((longlong)puVar11 + 4) = 0x73;
        *(undefined4 *)puVar11 = 0x6c6f6f74;
        local_a8 = 5;
        local_98 = 5;
        local_a0 = puVar11;
        <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
        ::collect_seq::
        <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                  (&local_e8,&local_c8);
        if ((char)local_e8 != -1) {
          local_68 = (undefined4)local_d8;
          uStack_64 = local_d8._4_4_;
          uStack_60 = uStack_d0;
          uStack_5c = uStack_cc;
          local_78 = local_e8;
          uStack_70 = (undefined4)uStack_e0;
          uStack_6c = uStack_e0._4_4_;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_e8,&local_90,&local_a8,&local_78);
          if ((char)local_e8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_e8);
          }
          puVar7 = local_50;
          *(undefined8 *)(local_50 + 0x18) = local_80;
          *(undefined4 *)(local_50 + 8) = (undefined4)local_90;
          *(undefined4 *)(local_50 + 0xc) = local_90._4_4_;
          *(undefined4 *)(local_50 + 0x10) = uStack_88;
          *(undefined4 *)(local_50 + 0x14) = uStack_84;
          *local_50 = 5;
          lVar13 = CONCAT44(uStack_bc,uStack_c0);
          uVar16 = (undefined4)local_90;
          for (lVar14 = local_b8 + 1; lVar14 != 1; lVar14 = lVar14 + -1) {
            uVar16 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <serde_json[dc3825464c436029]::value::Value>(lVar13);
            lVar13 = lVar13 + 0x20;
          }
          if (CONCAT44(uStack_c4,local_c8) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,8);
          }
          return puVar7;
        }
        local_78 = uStack_e0;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_007877e0,&local_78,
                   &PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_007878f8);
        goto LAB_0038c3b1;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    uVar4 = (ulonglong)uStack_e0 >> 8;
    uStack_e0 = (int *)CONCAT71((int7)uVar4,bVar8);
    local_e8 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_869a44742910931491f4b62d80901a16_50_llvm_763634721200370616,&local_e8,
               &PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_007878e0);
  }
LAB_0038c3b1:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


