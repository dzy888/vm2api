// 00628420 model_exists_in_catalog

/* craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog */

undefined4 __rustcall
craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar12 [16];
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  undefined8 local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  undefined4 *local_140;
  undefined1 local_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  auVar12 = ::<str>::trim_matches::<<char>::is_whitespace>(param_3,param_4);
  uVar8 = auVar12._8_8_;
  lVar5 = auVar12._0_8_;
  if ((uVar8 == 0) || (cVar3 = models::valid_requested_model_syntax(lVar5,uVar8), cVar3 == '\0')) {
    return 0;
  }
  cVar3 = models::models_compatible_for_single_slot(param_1,param_2,lVar5,uVar8);
  if (cVar3 != '\0') {
    return 1;
  }
  uVar11 = models::openai_models_list(local_138,param_1,param_2);
  lVar10 = 4;
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uVar11,local_138);
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x04')) {
    uVar4 = 0;
    goto LAB_00628710;
  }
  uVar11 = <alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog::{closure#0}>>>
           ::from_iter(&local_190,*(longlong *)(pcVar6 + 0x10),
                       *(longlong *)(pcVar6 + 0x18) * 0x20 + *(longlong *)(pcVar6 + 0x10));
  if (local_180 != 0) {
    if (uVar8 < 0x10) {
      plVar7 = local_188;
      do {
        if (plVar7[1] == uVar8) {
          uVar9 = 0;
          do {
            if (uVar8 == uVar9) goto LAB_00628554;
            pbVar1 = (byte *)(*plVar7 + uVar9);
            pbVar2 = (byte *)(lVar5 + uVar9);
            uVar9 = uVar9 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != local_188 + local_180 * 2);
    }
    else {
      lVar10 = 0;
      do {
        if ((*(ulonglong *)((longlong)local_188 + lVar10 + 8) == uVar8) &&
           (cVar3 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                              (*(undefined8 *)((longlong)local_188 + lVar10),uVar8,lVar5,uVar8),
           uVar11 = extraout_XMM0_Da, cVar3 != '\0')) goto LAB_00628554;
        lVar10 = lVar10 + 0x10;
      } while (local_180 * 0x10 != lVar10);
    }
  }
  local_178[0] = 0;
  local_168 = 0;
  models::resolve_model_and_thinking(&local_a0,lVar5,uVar8,param_1,param_2,local_178);
  if (CONCAT44(uStack_9c,local_a0) == -1) {
    uVar11 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(local_178);
    uVar4 = 0;
  }
  else {
    local_b8 = local_40;
    uStack_b0 = uStack_38;
    local_c8 = local_50;
    uStack_c0 = uStack_48;
    local_d8 = local_60;
    uStack_d0 = uStack_58;
    local_e8 = local_70;
    uStack_e4 = uStack_6c;
    uStack_e0 = uStack_68;
    uStack_dc = uStack_64;
    local_f8 = local_80;
    uStack_f4 = uStack_7c;
    uStack_f0 = uStack_78;
    uStack_ec = uStack_74;
    local_108 = local_90;
    uStack_104 = uStack_8c;
    uStack_100 = uStack_88;
    uStack_fc = uStack_84;
    local_118 = local_a0;
    uStack_114 = uStack_9c;
    uStack_110 = uStack_98;
    uStack_10c = uStack_94;
    local_140 = &local_e8;
    local_160 = local_188;
    local_148 = &uStack_100;
    local_150 = &local_118;
    local_158 = local_188 + local_180 * 2;
    uVar4 = <core[c0acaeba6ab4c2e0]::slice::iter::Iter<&str>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
            ::any::<craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog::_closure_2_>
                      (&local_160,&local_150);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::models::ResolvedModelThinking>(&local_a0);
    uVar11 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(local_178);
  }
LAB_006286f7:
  lVar10 = 0;
  if (local_190 != 0) {
    lVar10 = local_190 << 4;
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
  }
LAB_00628710:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
            (local_138,lVar10);
  return uVar4;
LAB_00628554:
  uVar4 = 1;
  goto LAB_006286f7;
}


