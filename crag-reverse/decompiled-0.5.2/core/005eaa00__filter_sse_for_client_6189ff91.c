// 005eaa00 filter_sse_for_client

/* craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client
          (undefined8 *param_1,undefined8 param_2,longlong param_3,byte *param_4,byte param_5,
          undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  byte *pbVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  byte local_152;
  byte local_151;
  uint local_150;
  uint local_14c;
  byte *local_148;
  undefined8 *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  byte *local_120;
  byte *local_118;
  byte *local_110;
  byte *pbStack_108;
  byte *local_100;
  byte *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  byte *local_78;
  longlong local_70;
  byte *local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_151 = param_5;
  uVar15 = ::<str>::replace::<&str>(&local_70);
  if ((local_60 < 2) || (*(short *)(local_68 + (local_60 - 2)) != 0xa0a)) {
    if (param_3 < 0) {
LAB_005eaa5a:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005eb280;
    }
    if (param_3 == 0) {
      lVar5 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar5 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar5 == 0) goto LAB_005eaa5a;
      uVar15 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_3);
    }
    param_1[3] = param_3;
    param_1[4] = lVar5;
    param_1[5] = param_3;
    *(undefined1 *)(param_1 + 6) = 0;
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    goto LAB_005eafab;
  }
  local_118 = (byte *)(local_60 - 2);
  local_138 = 0;
  local_130 = 8;
  local_128 = 0;
  local_120 = (byte *)0x0;
  local_148 = local_68;
  local_110 = local_68;
  local_100 = (byte *)0x0;
  local_f0 = 0xa0000000a;
  local_e8 = 1;
  local_e0 = 1;
  local_140 = param_1;
  pbStack_108 = local_118;
  local_f8 = local_118;
  local_b8 = param_2;
  local_ac = param_6;
  local_78 = param_4;
  do {
    pbVar13 = local_110;
    uVar15 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(&local_d8,&local_110);
    lVar5 = local_128;
    if ((int)local_d8 == 1) {
      uVar6 = uStack_d0 - (longlong)local_120;
      pbVar4 = local_c8;
    }
    else {
      if (local_e0._1_1_ != '\0') break;
      local_e0 = CONCAT11(1,(byte)local_e0);
      uVar6 = (longlong)local_118 - (longlong)local_120;
      pbVar4 = local_120;
      pbVar13 = local_110;
      if ((uVar6 != 0 | (byte)local_e0) != 1) break;
    }
    if ((4 < uVar6) &&
       (pbVar13 = pbVar13 + (longlong)local_120, pbVar13[4] == 0x3a && *(int *)pbVar13 == 0x61746164
       )) {
      pbVar3 = pbVar13 + 5;
      if (uVar6 - 5 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = uVar6 - 5;
        if (pbVar13[5] == 0x20) {
          pbVar3 = pbVar13 + 6;
          lVar9 = uVar6 - 6;
        }
      }
      local_120 = pbVar4;
      if (local_128 == local_138) {
        uVar15 = <alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                 ::grow_one(&local_138);
      }
      lVar11 = lVar5 * 0x10;
      *(byte **)(local_130 + lVar11) = pbVar3;
      *(longlong *)(local_130 + 8 + lVar11) = lVar9;
      local_128 = lVar5 + 1;
      pbVar4 = local_120;
    }
    local_120 = pbVar4;
  } while (local_e0._1_1_ == '\0');
  if (local_128 == 0) {
    if (param_3 < 0) goto LAB_005eafe7;
LAB_005eb020:
    if (param_3 == 0) {
      lVar5 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar5 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar5 == 0) goto LAB_005eafe7;
      uVar15 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_08,param_3);
    }
    local_140[3] = param_3;
    local_140[4] = lVar5;
    local_140[5] = param_3;
    *(undefined1 *)(local_140 + 6) = 0;
    *local_140 = 0;
    local_140[1] = 8;
    local_140[2] = 0;
    param_1 = local_140;
  }
  else {
    alloc[12e961f32105355]::str::join_generic_copy::<str,u8,&str>
              (&local_120,local_130,local_128,&DAT_0019ed35,1);
    local_f8 = local_110;
    local_100 = local_118;
    pbVar13 = local_120;
    local_120 = local_118;
    local_118 = local_110;
    local_110 = (byte *)0x0;
    pbStack_108 = (byte *)0x0;
    serde_json[dc3825464c436029]::de::from_trait::
    <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
              (&local_d8,&local_120);
    if ((byte)local_d8 == 0xff) {
      uVar15 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                         (&uStack_d0);
      if (pbVar13 != (byte *)0x0) {
        uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
      }
      if (-1 < param_3) goto LAB_005eb020;
LAB_005eafe7:
      (*(code *)PTR_handle_error_00798ff0)();
LAB_005eb280:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_98 = (undefined4)local_c8;
    uStack_94 = local_c8._4_4_;
    uStack_90 = uStack_c0;
    uStack_8c = uStack_bc;
    local_a8._0_4_ = (int)local_d8;
    local_a8._4_4_ = local_d8._4_4_;
    uStack_a0 = (undefined4)uStack_d0;
    uStack_9c = uStack_d0._4_4_;
    uVar15 = (int)local_d8;
    if (pbVar13 != (byte *)0x0) {
      uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)((int)local_d8,1);
    }
    puVar8 = &local_a8;
    pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar15,puVar8);
    uVar15 = extraout_XMM0_Da_00;
    if (((pcVar7 != (char *)0x0) && (*pcVar7 == '\x05')) &&
       (puVar8 = (undefined8 *)(*(code *)PTR_index_into_mut_0079a068)(extraout_XMM0_Da_00,&local_a8)
       , uVar15 = extraout_XMM0_Da_01, puVar8 == (undefined8 *)0x0)) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_005eb280;
    }
    local_152 = 0;
    local_d8 = 0;
    uStack_d0 = 8;
    local_c8 = (byte *)0x0;
    local_80 = (*(code *)PTR_index_into_00799300)(uVar15,puVar8);
    pcVar7 = (char *)(*(code *)PTR_index_into_mut_0079a068)(extraout_XMM0_Da_02,puVar8);
    if (((pcVar7 != (char *)0x0) && (*pcVar7 == '\x04')) && (*(longlong *)(pcVar7 + 0x18) != 0)) {
      pcVar14 = *(char **)(pcVar7 + 0x10);
      lVar5 = *(longlong *)(pcVar7 + 0x18) * 0x20;
      bVar2 = false;
      local_14c = 0;
      local_150 = 0;
      uVar15 = extraout_XMM0_Da_03;
LAB_005eae19:
      lVar5 = lVar5 + -0x20;
      lVar9 = (*(code *)PTR_index_into_00799300)(uVar15,pcVar14);
      if (lVar9 != 0) {
        bVar2 = true;
      }
      lVar9 = (*(code *)PTR_index_into_mut_0079a068)(extraout_XMM0_Da_04,pcVar14);
      uVar15 = extraout_XMM0_Da_05;
      if (((lVar9 != 0) &&
          (pcVar7 = (char *)(*(code *)PTR_index_into_mut_0079a068)(extraout_XMM0_Da_05,lVar9),
          uVar15 = extraout_XMM0_Da_06, pcVar7 != (char *)0x0)) && (*pcVar7 == '\x04')) {
        uVar6 = *(ulonglong *)(pcVar7 + 0x18);
        local_120 = local_78;
        local_118 = &local_152;
        local_110 = (byte *)&local_d8;
        pbStack_108 = &local_151;
        uVar15 = ::<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::
                 retain::
                 <craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client::_closure_1_>
                           (pcVar7 + 8,&local_120);
        local_14c = local_14c & 0xff;
        if (*(ulonglong *)(pcVar7 + 0x18) != 0) {
          local_14c = 1;
        }
        uVar12 = (uint)CONCAT71((int7)((ulonglong)pcVar7 >> 8),1);
        if (uVar6 <= *(ulonglong *)(pcVar7 + 0x18)) goto LAB_005eaef0;
LAB_005eaf10:
        if (*pcVar14 != '\x05') {
LAB_005eadfc:
          local_150 = uVar12;
          goto LAB_005eae03;
        }
LAB_005eaf2f:
        uVar15 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                 ::remove::<str>(&local_120,pcVar14 + 8,&DAT_0019e8d0,0xc);
        if ((char)local_120 == -1) goto LAB_005eadfc;
        uVar10 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>(&local_120);
        local_150 = (uint)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
        uVar15 = extraout_XMM0_Da_07;
        if (lVar5 == 0) goto LAB_005eb0ad;
LAB_005eae11:
        pcVar14 = pcVar14 + 0x20;
        goto LAB_005eae19;
      }
LAB_005eaef0:
      uVar12 = local_150;
      if (local_152 != 0) {
        if (*pcVar14 == '\x05') goto LAB_005eaf2f;
        goto LAB_005eadfc;
      }
      if ((local_151 & (byte)local_ac) != 0) goto LAB_005eaf10;
LAB_005eae03:
      if (lVar5 != 0) goto LAB_005eae11;
      if ((local_150 & 1) == 0) goto LAB_005eb0ec;
LAB_005eb0ad:
      puVar8 = local_140;
      if (local_80 == 0) {
        if (((local_14c & 1) != 0) || (uVar10 = 0xffffffffffffffff, bVar2)) goto LAB_005eb1c1;
      }
      else if (((local_14c & 1) != 0) || ((bVar2 || (uVar10 = 0xffffffffffffffff, local_152 == 0))))
      {
LAB_005eb1c1:
        local_120 = (byte *)&local_a8;
        local_118 = PTR_fmt_00799758;
        (*(code *)PTR_format_inner_00799048)(uVar15,&local_120);
        local_58 = local_40;
        uStack_50 = uStack_38;
        uVar10 = local_48;
      }
      puVar8[2] = local_c8;
      *puVar8 = local_d8;
      puVar8[1] = uStack_d0;
      puVar8[3] = uVar10;
      *(undefined4 *)(puVar8 + 4) = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar8 + 0x24) = local_58._4_4_;
      *(undefined4 *)(puVar8 + 5) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_50._4_4_;
      *(byte *)(puVar8 + 6) = local_152;
      uVar15 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                         (&local_a8);
      if (local_138 != 0) {
        uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,8);
      }
      param_1 = local_140;
      goto LAB_005eafab;
    }
LAB_005eb0ec:
    if (param_3 < 0) {
LAB_005eb0f4:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005eb280;
    }
    if (param_3 == 0) {
      lVar5 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar5 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar5 == 0) goto LAB_005eb0f4;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_09,param_3);
    }
    local_140[2] = local_c8;
    *(int *)local_140 = (int)local_d8;
    *(undefined4 *)((longlong)local_140 + 4) = local_d8._4_4_;
    *(undefined4 *)(local_140 + 1) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)local_140 + 0xc) = uStack_d0._4_4_;
    local_140[3] = param_3;
    local_140[4] = lVar5;
    local_140[5] = param_3;
    *(undefined1 *)(local_140 + 6) = 0;
    uVar15 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                       (&local_a8);
    param_1 = local_140;
  }
  local_140 = param_1;
  if (local_138 != 0) {
    uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,8);
  }
LAB_005eafab:
  if (local_70 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
  }
  return param_1;
}


