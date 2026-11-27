// 005f3f80 parse_native_web_search_ccpa

/* craggemini_core[66f3c71560d70857]::tools::parse_native_web_search_ccpa */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_native_web_search_ccpa
          (undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined1 auVar16 [16];
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined3 uStack_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_e8 = 0;
  lStack_e0 = 0;
  local_f8 = param_2;
  uStack_f0 = param_3;
  serde_json[dc3825464c436029]::de::from_trait::
  <serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>
            (&local_a8,&local_f8);
  if ((char)local_a8 == -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(&uStack_a0)
    ;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  uStack_4f = CONCAT13((undefined1)uStack_a4,local_a8._1_3_);
  uStack_4b = CONCAT13((undefined1)uStack_a0,uStack_a4._1_3_);
  uStack_47 = CONCAT13((undefined1)uStack_9c,uStack_a0._1_3_);
  uStack_43 = CONCAT13((undefined1)uStack_98,uStack_9c._1_3_);
  uStack_3f = (undefined3)((uint)(undefined4)uStack_98 >> 8);
  uStack_3c = uStack_98._4_4_;
  uStack_38 = (undefined4)uStack_90;
  uStack_34 = uStack_90._4_4_;
  local_50 = (char)local_a8;
  pcVar6 = (char *)(*(code *)PTR_index_into_00799300)(uStack_4f,&local_50);
  pcVar7 = &local_50;
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
  }
  pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,pcVar7);
  if (((pcVar7 != (char *)0x0) && (*pcVar7 == '\x04')) && (*(longlong *)(pcVar7 + 0x18) != 0)) {
    uVar14 = *(undefined8 *)(pcVar7 + 0x10);
    lVar8 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_00,uVar14);
    if ((lVar8 != 0) ||
       (lVar8 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_01,uVar14), lVar8 != 0)) {
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 8;
      uStack_9c = 0;
      uStack_98._0_4_ = 0;
      uStack_98._4_4_ = 0;
      uStack_90 = 0;
      local_88 = 8;
      lStack_80 = 0;
      lStack_78 = 0;
      lStack_70 = 8;
      local_68 = 0;
      pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(0,lVar8);
      uVar15 = extraout_XMM0_Da_02;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_02,lVar8);
        uVar15 = extraout_XMM0_Da_03;
        uStack_98 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
        if (pcVar7 != (char *)0x0) goto LAB_005f40f9;
      }
      else {
LAB_005f40f9:
        uStack_98 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
        if ((*pcVar7 == '\x04') &&
           (lVar9 = *(longlong *)(pcVar7 + 0x18),
           uStack_98 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_98), lVar9 != 0)) {
          lVar11 = *(longlong *)(pcVar7 + 0x10);
          lVar12 = 0;
          do {
            if (*(char *)(lVar11 + lVar12) == '\x03') {
              auVar16 = ::<str>::trim_matches::<<char>::is_whitespace>
                                  (*(undefined8 *)(lVar11 + 0x10 + lVar12),
                                   *(undefined8 *)(lVar11 + 0x18 + lVar12));
              lVar10 = auVar16._8_8_;
              uVar15 = extraout_XMM0_Da_04;
              if ((auVar16._0_8_ != 0) && (lVar10 != 0)) {
                if (lVar10 < 0) goto LAB_005f4761;
                local_60 = lVar8;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar8 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar8 == 0) goto LAB_005f4761;
                uVar15 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,lVar10);
                lVar4 = uStack_98;
                if (uStack_98 == CONCAT44(uStack_a4,local_a8)) {
                  uVar15 = (*(code *)PTR_grow_one_00799328)();
                }
                lVar5 = CONCAT44(uStack_9c,uStack_a0);
                *(longlong *)(lVar5 + lVar4 * 0x18) = lVar10;
                *(longlong *)(lVar5 + 8 + lVar4 * 0x18) = lVar8;
                *(longlong *)(lVar5 + 0x10 + lVar4 * 0x18) = lVar10;
                uStack_98 = lVar4 + 1;
                lVar8 = local_60;
              }
            }
            lVar12 = lVar12 + 0x20;
          } while (lVar9 * 0x20 != lVar12);
        }
      }
      pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar15,lVar8);
      uVar15 = extraout_XMM0_Da_06;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_06,lVar8);
        uVar15 = extraout_XMM0_Da_07;
        if (pcVar7 != (char *)0x0) goto LAB_005f425c;
      }
      else {
LAB_005f425c:
        if ((*pcVar7 == '\x04') && (*(longlong *)(pcVar7 + 0x18) != 0)) {
          lVar9 = *(longlong *)(pcVar7 + 0x10);
          lVar11 = *(longlong *)(pcVar7 + 0x18) << 5;
          do {
            local_58 = lVar9;
            lVar9 = (*(code *)PTR_index_into_00799300)();
            uVar15 = extraout_XMM0_Da_08;
            if (lVar9 != 0) {
              pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_08,lVar9);
              uVar14 = 1;
              if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x03')) {
                uVar13 = 0;
              }
              else {
                uVar14 = *(undefined8 *)(pcVar7 + 0x10);
                uVar13 = *(undefined8 *)(pcVar7 + 0x18);
              }
              uVar15 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar14,uVar13);
              if (extraout_RDX < 0) goto LAB_005f4761;
              if (extraout_RDX == 0) {
                lVar12 = 1;
              }
              else {
                local_60 = lVar8;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar12 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar12 == 0) goto LAB_005f4761;
                uVar15 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_09,extraout_RDX);
                lVar8 = local_60;
              }
              pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar15,lVar9);
              uVar14 = 1;
              if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x03')) {
                uVar13 = 0;
              }
              else {
                uVar14 = *(undefined8 *)(pcVar7 + 0x10);
                uVar13 = *(undefined8 *)(pcVar7 + 0x18);
              }
              uVar15 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar14,uVar13);
              if (extraout_RDX_00 < 0) {
LAB_005f47f4:
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_005f47ff;
              }
              if (extraout_RDX_00 == 0) {
                local_b0 = 1;
                if (extraout_RDX != 0) {
LAB_005f443c:
                  lVar9 = lStack_80;
                  local_d8 = local_b0;
                  local_f8 = extraout_RDX;
                  uStack_f0 = lVar12;
                  local_e8 = extraout_RDX;
                  lStack_e0 = extraout_RDX_00;
                  lStack_d0 = extraout_RDX_00;
                  if (lStack_80 == uStack_90) {
                    <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::tools::GroundingChunk>>
                    ::grow_one(&uStack_90);
                  }
                  lVar12 = lVar9 * 0x30;
                  plVar2 = (longlong *)(local_88 + 0x20 + lVar12);
                  *plVar2 = local_d8;
                  plVar2[1] = lStack_d0;
                  plVar2 = (longlong *)(local_88 + 0x10 + lVar12);
                  *plVar2 = local_e8;
                  plVar2[1] = lStack_e0;
                  puVar1 = (undefined4 *)(local_88 + lVar12);
                  *puVar1 = (undefined4)local_f8;
                  puVar1[1] = local_f8._4_4_;
                  puVar1[2] = (undefined4)uStack_f0;
                  puVar1[3] = uStack_f0._4_4_;
                  lStack_80 = lVar9 + 1;
                  uVar15 = (undefined4)local_f8;
                }
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar9 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar9 == 0) {
                  local_b0 = extraout_RDX_00;
                  goto LAB_005f47f4;
                }
                uVar15 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_10,extraout_RDX_00);
                local_b0 = lVar9;
                if (extraout_RDX != 0) goto LAB_005f443c;
                uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
              }
            }
            lVar9 = local_58 + 0x20;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
      }
      pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar15,lVar8);
      uVar15 = extraout_XMM0_Da_11;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_11,lVar8);
        uVar15 = extraout_XMM0_Da_12;
        uStack_98 = uStack_98;
        if (pcVar7 != (char *)0x0) goto LAB_005f44cf;
      }
      else {
LAB_005f44cf:
        uStack_98 = uStack_98;
        if ((*pcVar7 == '\x04') && (uStack_98 = uStack_98, *(longlong *)(pcVar7 + 0x18) != 0)) {
          lVar8 = *(longlong *)(pcVar7 + 0x10);
          lVar9 = *(longlong *)(pcVar7 + 0x18) << 5;
          do {
            lVar11 = (*(code *)PTR_index_into_00799300)(uVar15,lVar8);
            if (lVar11 == 0) {
              lVar10 = 1;
              lVar11 = 0;
              lVar12 = 0;
              local_100 = 0;
            }
            else {
              pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_13,lVar11);
              uVar15 = extraout_XMM0_Da_14;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_14,lVar11);
                uVar15 = extraout_XMM0_Da_15;
                if (pcVar7 != (char *)0x0) goto LAB_005f4593;
LAB_005f45a3:
                local_100 = 0;
              }
              else {
LAB_005f4593:
                if ((*pcVar7 != '\x02') || (*(longlong *)(pcVar7 + 8) != 0)) goto LAB_005f45a3;
                local_100 = *(longlong *)(pcVar7 + 0x10);
              }
              pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar15,lVar11);
              uVar15 = extraout_XMM0_Da_16;
              if (pcVar7 == (char *)0x0) {
                pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_16,lVar11);
                uVar15 = extraout_XMM0_Da_17;
                if (pcVar7 != (char *)0x0) goto LAB_005f45e0;
LAB_005f45f0:
                lVar12 = 0;
              }
              else {
LAB_005f45e0:
                if ((*pcVar7 != '\x02') || (*(longlong *)(pcVar7 + 8) != 0)) goto LAB_005f45f0;
                lVar12 = *(longlong *)(pcVar7 + 0x10);
              }
              pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar15,lVar11);
              if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\x03')) {
                lVar11 = *(longlong *)(pcVar7 + 0x18);
                if (lVar11 < 0) {
LAB_005f4761:
                  (*(code *)PTR_handle_error_00798ff0)();
LAB_005f47ff:
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                if (lVar11 != 0) {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar10 = (*(code *)PTR___rust_alloc_00799000)();
                  if (lVar10 != 0) {
                    (*(code *)PTR_memcpy_00799008)(lVar10,lVar11);
                    goto LAB_005f4686;
                  }
                  goto LAB_005f4761;
                }
              }
              lVar10 = 1;
              lVar11 = 0;
            }
LAB_005f4686:
            pcVar7 = (char *)(*(code *)PTR_index_into_00799300)();
            if (pcVar7 == (char *)0x0) {
              pcVar7 = (char *)(*(code *)PTR_index_into_00799300)();
              if (pcVar7 != (char *)0x0) goto LAB_005f46ba;
LAB_005f46e9:
              uStack_f0 = 8;
              local_f8 = 0;
              local_e8 = 0;
            }
            else {
LAB_005f46ba:
              if (*pcVar7 != '\x04') goto LAB_005f46e9;
              <alloc[12e961f32105355]::vec::Vec<usize>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<usize,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::tools::parse_native_web_search_ccpa::{closure#9}::{closure#0}>>>
              ::from_iter(&local_f8,*(longlong *)(pcVar7 + 0x10),
                          *(longlong *)(pcVar7 + 0x18) * 0x20 + *(longlong *)(pcVar7 + 0x10));
            }
            lVar4 = local_68;
            local_c8 = local_100;
            lVar5 = lVar11;
            lStack_e0 = local_f8;
            local_d8 = uStack_f0;
            lStack_d0 = local_e8;
            lStack_c0 = lVar12;
            if (local_68 == lStack_78) {
              local_f8 = lVar11;
              uStack_f0 = lVar10;
              local_e8 = lVar11;
              <alloc[12e961f32105355]::raw_vec::RawVec<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>
              ::grow_one(&lStack_78);
              lVar11 = local_f8;
              lVar10 = uStack_f0;
              lVar5 = local_e8;
            }
            local_e8 = lVar5;
            uStack_f0 = lVar10;
            local_f8 = lVar11;
            lVar8 = lVar8 + 0x20;
            lVar11 = lVar4 * 0x40;
            plVar2 = (longlong *)(lStack_70 + 0x30 + lVar11);
            *plVar2 = local_c8;
            plVar2[1] = lStack_c0;
            plVar2 = (longlong *)(lStack_70 + 0x20 + lVar11);
            *plVar2 = local_d8;
            plVar2[1] = lStack_d0;
            plVar2 = (longlong *)(lStack_70 + 0x10 + lVar11);
            *plVar2 = local_e8;
            plVar2[1] = lStack_e0;
            puVar1 = (undefined4 *)(lStack_70 + lVar11);
            *puVar1 = (undefined4)local_f8;
            puVar1[1] = local_f8._4_4_;
            puVar1[2] = (undefined4)uStack_f0;
            puVar1[3] = uStack_f0._4_4_;
            local_68 = lVar4 + 1;
            lVar9 = lVar9 + -0x20;
            uVar15 = (undefined4)local_f8;
          } while (lVar9 != 0);
        }
      }
      local_e8 = uStack_98;
      uStack_98 = local_e8;
      if ((local_e8 == 0) && (lStack_80 == 0)) {
        local_b8 = local_68;
        local_c8 = lStack_78;
        lStack_c0 = lStack_70;
        local_d8 = local_88;
        lStack_d0 = lStack_80;
        lStack_e0 = uStack_90;
        local_f8 = CONCAT44(uStack_a4,local_a8);
        uStack_f0 = CONCAT44(uStack_9c,uStack_a0);
        if (local_68 == 0) {
          *param_1 = 0xffffffffffffffff;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>(&local_f8);
          goto LAB_005f4122;
        }
      }
      lStack_c0 = lStack_70;
      local_c8 = lStack_78;
      lStack_d0 = lStack_80;
      local_d8 = local_88;
      lStack_e0 = uStack_90;
      local_b8 = local_68;
      uStack_f0 = CONCAT44(uStack_9c,uStack_a0);
      local_f8 = CONCAT44(uStack_a4,local_a8);
      param_1[8] = local_68;
      param_1[6] = lStack_78;
      param_1[7] = lStack_70;
      param_1[4] = local_88;
      param_1[5] = lStack_80;
      param_1[2] = local_e8;
      param_1[3] = uStack_90;
      *(undefined4 *)param_1 = local_a8;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_a4;
      *(undefined4 *)(param_1 + 1) = uStack_a0;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_9c;
      goto LAB_005f4122;
    }
  }
  *param_1 = 0xffffffffffffffff;
LAB_005f4122:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_50);
  return param_1;
}


