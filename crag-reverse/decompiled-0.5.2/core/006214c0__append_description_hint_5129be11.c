// 006214c0 append_description_hint

/* craggemini_core[66f3c71560d70857]::schema::append_description_hint */

void __rustcall
craggemini_core[66f3c71560d70857]::schema::append_description_hint
          (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong extraout_RDX;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 (*local_d8) [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined1 local_88 [2] [16];
  ulonglong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined1 local_40 [16];
  
  local_40 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  if (local_40._8_8_ == 0) {
    return;
  }
  lVar15 = *param_1;
  auVar4 = local_40;
  if (lVar15 != 0) {
    local_a8 = param_1[1];
    while( true ) {
      local_68 = (ulonglong)*(ushort *)(lVar15 + 0x272);
      uVar10 = (ulonglong)((uint)*(ushort *)(lVar15 + 0x272) * 8);
      lVar13 = uVar10 * 3;
      uVar12 = 0xffffffffffffffff;
      lVar7 = lVar15 + 0x168;
      puVar8 = (undefined8 *)(lVar15 + -8);
      local_60 = lVar15;
      local_b8 = auVar4;
      do {
        puVar14 = puVar8;
        if (lVar13 == 0) {
          uVar12 = local_68;
          auVar4 = local_b8;
          goto LAB_006215c8;
        }
        uVar11 = *(ulonglong *)(lVar7 + 0x10);
        lVar15 = uVar11 - 0xb;
        if (10 < uVar11) {
          uVar11 = 0xb;
        }
        iVar6 = (*(code *)PTR_memcmp_00799528)(uVar10,uVar11);
        lVar15 = -lVar15;
        if (iVar6 != 0) {
          lVar15 = (longlong)iVar6;
        }
        bVar9 = (0 < lVar15) - (lVar15 < 0);
        uVar10 = (ulonglong)bVar9;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + -0x18;
        lVar7 = lVar7 + 0x18;
        puVar8 = puVar14 + 4;
      } while (bVar9 == 1);
      auVar4 = local_b8;
      if (bVar9 == 0) break;
LAB_006215c8:
      if (local_a8 == 0) goto LAB_00621720;
      lVar15 = *(longlong *)(local_60 + 0x278 + uVar12 * 8);
      local_a8 = local_a8 + -1;
    }
    if (*(char *)(puVar14 + 1) == '\x03') {
      uVar1 = puVar14[3];
      uVar2 = puVar14[4];
      ::<str>::trim_matches::<<char>::is_whitespace>(uVar1,uVar2);
      auVar4 = local_b8;
      if (extraout_RDX != 0) {
        cVar5 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                          (local_b8._0_8_,local_b8._8_8_,uVar1,uVar2);
        if (cVar5 != '\0') {
          return;
        }
        local_88[0] = ::<str>::trim_matches::<<char>::is_whitespace>(uVar1,uVar2);
        local_d8 = local_88;
        local_d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        uStack_c8 = local_40;
        local_c0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        (*(code *)PTR_format_inner_00799048)(uStack_c8,&local_d8);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar8 == (undefined8 *)0x0) goto LAB_00621821;
        *puVar8 = 0x7470697263736564;
        *(undefined4 *)((longlong)puVar8 + 7) = 0x6e6f6974;
        local_a0 = 0xb;
        local_90 = 0xb;
        local_c0 = (code *)local_48;
        local_d0 = (code *)CONCAT44(uStack_54,local_58);
        uStack_c8 = (undefined1 *)CONCAT44(uStack_4c,uStack_50);
        local_d8 = (undefined1 (*) [16])CONCAT71(local_d8._1_7_,3);
        local_98 = puVar8;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_88,param_1,&local_a0,&local_d8);
        if (local_88[0][0] == -1) {
          return;
        }
        goto LAB_006217f5;
      }
    }
  }
LAB_00621720:
  local_b8 = auVar4;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar1 = local_b8._8_8_;
  if (puVar8 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00621821:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *puVar8 = 0x7470697263736564;
    *(undefined4 *)((longlong)puVar8 + 7) = 0x6e6f6974;
    local_a0 = 0xb;
    local_90 = 0xb;
    local_98 = puVar8;
    if (-1 < (longlong)local_b8._8_8_) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar15 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar15 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,uVar1);
        local_d0 = (code *)uVar1;
        local_c0 = (code *)uVar1;
        local_d8 = (undefined1 (*) [16])CONCAT71(local_d8._1_7_,3);
        uStack_c8 = (undefined1 *)lVar15;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_88,param_1,&local_a0,&local_d8);
        auVar4._8_8_ = local_88[0]._8_8_;
        auVar4._0_8_ = local_88[0]._0_8_;
        bVar16 = local_88[0][0] == -1;
        local_88[0] = auVar4;
        if (bVar16) {
          return;
        }
LAB_006217f5:
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_88);
        return;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


