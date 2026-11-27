// 006812a0 close_anthropic_block

/* <craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::close_anthropic_block */

void __rustcall
<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::close_anthropic_block
          (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [24];
  
  if (*(char *)(param_1 + 0x12d) == '\0') {
    return;
  }
  local_50 = 0;
  local_40 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x65707974;
    local_68 = 4;
    local_58 = 4;
    local_60 = puVar8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar7 = s_content_block_stop_001a4dcb._12_4_;
    uVar6 = s_content_block_stop_001a4dcb._8_4_;
    uVar5 = s_content_block_stop_001a4dcb._4_4_;
    if (pcVar9 == (char *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006814e0;
    }
    *(undefined4 *)pcVar9 = s_content_block_stop_001a4dcb._0_4_;
    *(undefined4 *)(pcVar9 + 4) = uVar5;
    *(undefined4 *)(pcVar9 + 8) = uVar6;
    *(undefined4 *)(pcVar9 + 0xc) = uVar7;
    pcVar9[0x10] = 'o';
    pcVar9[0x11] = 'p';
    local_a8 = (char *)CONCAT71(local_a8._1_7_,3);
    uStack_a0 = (undefined *)0x12;
    uStack_90 = 0x12;
    local_98 = pcVar9;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_88,&local_50,&local_68,&local_a8);
    if (local_88[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_88)
      ;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar8 + 1) = 0x78;
      *puVar8 = 0x65646e69;
      local_68 = 5;
      local_58 = 5;
      lVar1 = *(longlong *)(param_1 + 0x118);
      local_a8 = (char *)CONCAT71(local_a8._1_7_,2);
      uStack_a0 = (undefined *)0x0;
      local_98 = (char *)lVar1;
      local_60 = puVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_88,&local_50,&local_68,&local_a8);
      if (local_88[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_88);
      }
      local_80 = (undefined4)local_50;
      uStack_7c = local_50._4_4_;
      uStack_78 = uStack_48;
      uStack_74 = uStack_44;
      local_70 = local_40;
      local_88[0] = '\x05';
      uStack_a0 = PTR_fmt_00799758;
      local_a8 = local_88;
      (*(code *)PTR_format_inner_00799048)((undefined4)local_50,&local_a8);
      (*(code *)PTR_from_00799298)();
      lVar2 = param_2[2];
      if (lVar2 == *param_2) {
        (*(code *)PTR_grow_one_0079a3a0)();
      }
      lVar3 = param_2[1];
      puVar8 = (undefined4 *)(lVar3 + 0x10 + lVar2 * 0x20);
      *puVar8 = (undefined4)local_98;
      puVar8[1] = local_98._4_4_;
      puVar8[2] = (undefined4)uStack_90;
      puVar8[3] = uStack_90._4_4_;
      puVar8 = (undefined4 *)(lVar3 + lVar2 * 0x20);
      *puVar8 = (undefined4)local_a8;
      puVar8[1] = local_a8._4_4_;
      puVar8[2] = (undefined4)uStack_a0;
      puVar8[3] = uStack_a0._4_4_;
      param_2[2] = lVar2 + 1;
      *(longlong *)(param_1 + 0x118) = lVar1 + 1;
      *(undefined1 *)(param_1 + 0x12d) = 0;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (local_88,local_38);
      return;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_006814e0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


