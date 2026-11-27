// 005f3810 parse_native_image_gen_ccpa

/* craggemini_core[66f3c71560d70857]::tools::parse_native_image_gen_ccpa */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::tools::parse_native_image_gen_ccpa
          (longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  longlong extraout_RDX_01;
  code *pcVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined1 auVar15 [16];
  longlong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_a0 = 0;
  lStack_98 = 0;
  local_b0 = param_2;
  uStack_a8 = param_3;
  serde_json[dc3825464c436029]::de::from_trait::
  <serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>
            (&local_d8,&local_b0);
  if ((char)local_d8 == -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(&uStack_d0)
    ;
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return param_1;
  }
  local_48 = (undefined4)local_c8;
  uStack_44 = local_c8._4_4_;
  uStack_40 = uStack_c0;
  uStack_3c = uStack_bc;
  local_58 = local_d8;
  uStack_54 = uStack_d4;
  uStack_50 = uStack_d0;
  uStack_4c = uStack_cc;
  puVar6 = (undefined4 *)(*(code *)PTR_index_into_00799300)(local_d8,&local_58);
  puVar12 = &local_58;
  if (puVar6 != (undefined4 *)0x0) {
    puVar12 = puVar6;
  }
  pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,puVar12);
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x04')) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    goto LAB_005f3d10;
  }
  local_120 = 0;
  uStack_118 = 8;
  local_110 = 0;
  local_f0 = 0;
  local_e8 = 8;
  local_e0 = 0;
  uVar14 = extraout_XMM0_Da_00;
  if (*(longlong *)(pcVar7 + 0x18) == 0) {
LAB_005f3e1b:
    param_1[2] = local_110;
    *param_1 = local_120;
    param_1[1] = uStack_118;
  }
  else {
    lVar13 = *(longlong *)(pcVar7 + 0x10);
    local_60 = *(longlong *)(pcVar7 + 0x18) * 0x20 + lVar13;
    pcVar10 = (code *)PTR___rust_dealloc_00798fc8;
    do {
      lVar8 = (*(code *)PTR_index_into_00799300)(uVar14,lVar13);
      uVar14 = extraout_XMM0_Da_01;
      if ((((lVar8 != 0) &&
           (pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_01,lVar8),
           uVar14 = extraout_XMM0_Da_02, pcVar7 != (char *)0x0)) && (*pcVar7 == '\x04')) &&
         (*(longlong *)(pcVar7 + 0x18) != 0)) {
        lVar8 = *(longlong *)(pcVar7 + 0x10);
        local_68 = *(longlong *)(pcVar7 + 0x18) << 5;
        do {
          local_f8 = lVar8;
          pcVar7 = (char *)(*(code *)PTR_index_into_00799300)();
          uVar14 = extraout_XMM0_Da_03;
          if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\x03')) {
            uVar3 = *(undefined8 *)(pcVar7 + 0x10);
            uVar4 = *(undefined8 *)(pcVar7 + 0x18);
            uVar14 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar3,uVar4);
            if ((extraout_RDX == 0) ||
               (((pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar14,local_f8),
                 pcVar7 != (char *)0x0 && (*pcVar7 == '\x01')) &&
                (uVar14 = extraout_XMM0_Da_04, pcVar7[1] != '\0')))) goto LAB_005f3a91;
            uVar14 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar3,uVar4);
            if (-1 < extraout_RDX_00) {
              if (extraout_RDX_00 == 0) {
                local_100 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar8 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar8 == 0) goto LAB_005f3d5c;
                local_100 = lVar8;
                uVar14 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,extraout_RDX_00);
              }
              lVar8 = local_e0;
              if (local_e0 == local_f0) {
                uVar14 = (*(code *)PTR_grow_one_00799328)();
              }
              *(longlong *)(local_e8 + lVar8 * 0x18) = extraout_RDX_00;
              *(longlong *)(local_e8 + 8 + lVar8 * 0x18) = local_100;
              *(longlong *)(local_e8 + 0x10 + lVar8 * 0x18) = extraout_RDX_00;
              local_e0 = lVar8 + 1;
              goto LAB_005f3a91;
            }
LAB_005f3d5c:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_005f3e7e;
          }
LAB_005f3a91:
          lVar8 = (*(code *)PTR_index_into_00799300)(uVar14,local_f8);
          uVar14 = extraout_XMM0_Da_06;
          if ((lVar8 != 0) ||
             (lVar8 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_06,local_f8),
             uVar14 = extraout_XMM0_Da_07, lVar8 != 0)) {
            pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar14,lVar8);
            uVar14 = extraout_XMM0_Da_08;
            if ((pcVar7 == (char *)0x0) &&
               (pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_08,lVar8),
               uVar14 = extraout_XMM0_Da_09, pcVar7 == (char *)0x0)) {
              lVar11 = 9;
LAB_005f3b3f:
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              local_128 = (*(code *)PTR___rust_alloc_00799000)();
              if (local_128 == 0) goto LAB_005f3d5c;
              uVar14 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_10,lVar11);
            }
            else {
              lVar11 = 9;
              if (*pcVar7 != '\x03') goto LAB_005f3b3f;
              lVar11 = *(longlong *)(pcVar7 + 0x18);
              if (lVar11 < 0) goto LAB_005f3d5c;
              if (lVar11 != 0) goto LAB_005f3b3f;
              local_128 = 1;
              lVar11 = 0;
            }
            pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar14,lVar8);
            pcVar10 = (code *)PTR___rust_dealloc_00798fc8;
            uVar14 = extraout_XMM0_Da_11;
            if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\x03')) {
              uVar3 = *(undefined8 *)(pcVar7 + 0x10);
              uVar4 = *(undefined8 *)(pcVar7 + 0x18);
              uVar14 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar3,uVar4);
              if (extraout_RDX_01 != 0) {
                auVar15 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar3,uVar4);
                lVar8 = auVar15._8_8_;
                if (lVar8 < 0) {
LAB_005f3e6f:
                  (*(code *)PTR_handle_error_00798ff0)();
LAB_005f3e7e:
                    /* WARNING: Does not return */
                  pcVar10 = (code *)invalidInstructionException();
                  (*pcVar10)();
                }
                if (lVar8 == 0) {
                  lVar9 = 1;
                }
                else {
                  local_108 = auVar15._0_8_;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar9 = (*(code *)PTR___rust_alloc_00799000)();
                  if (lVar9 == 0) {
                    local_108 = lVar8;
                    goto LAB_005f3e6f;
                  }
                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_12,lVar8);
                }
                lVar5 = local_110;
                uStack_a8 = local_128;
                local_80 = 0xffffffffffffffff;
                local_108 = lVar9;
                local_b0 = lVar11;
                local_a0 = lVar11;
                lStack_98 = lVar8;
                local_90 = lVar9;
                lStack_88 = lVar8;
                if (local_110 == local_120) {
                  <alloc[12e961f32105355]::raw_vec::RawVec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>
                  ::grow_one(&local_120);
                }
                *(undefined8 *)(uStack_118 + 0x40 + lVar5 * 0x48) = local_70;
                puVar1 = (undefined8 *)(uStack_118 + 0x30 + lVar5 * 0x48);
                *puVar1 = local_80;
                puVar1[1] = uStack_78;
                plVar2 = (longlong *)(uStack_118 + 0x20 + lVar5 * 0x48);
                *plVar2 = local_90;
                plVar2[1] = lStack_88;
                plVar2 = (longlong *)(uStack_118 + 0x10 + lVar5 * 0x48);
                *plVar2 = local_a0;
                plVar2[1] = lStack_98;
                puVar12 = (undefined4 *)(uStack_118 + lVar5 * 0x48);
                *puVar12 = (undefined4)local_b0;
                puVar12[1] = local_b0._4_4_;
                puVar12[2] = (undefined4)uStack_a8;
                puVar12[3] = uStack_a8._4_4_;
                local_110 = lVar5 + 1;
                uVar14 = (undefined4)local_b0;
                goto LAB_005f3c1a;
              }
            }
            if (lVar11 != 0) {
              uVar14 = (*pcVar10)(uVar14,1);
            }
          }
LAB_005f3c1a:
          lVar8 = local_f8 + 0x20;
          local_68 = local_68 + -0x20;
        } while (local_68 != 0);
        local_68 = 0;
      }
      lVar8 = uStack_118;
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != local_60);
    if (local_e0 == 0) goto LAB_005f3e1b;
    if (local_110 == 0) {
      param_1[2] = 0;
      *(undefined4 *)param_1 = (undefined4)local_120;
      *(undefined4 *)((longlong)param_1 + 4) = local_120._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_118;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_118._4_4_;
      uVar14 = (undefined4)local_120;
LAB_005f3e91:
      lVar8 = local_e8 + 8;
      lVar13 = local_e0;
      do {
        if (*(longlong *)(lVar8 + -8) != 0) {
          uVar14 = (*pcVar10)(uVar14,1);
        }
        lVar8 = lVar8 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    else {
      alloc[12e961f32105355]::str::join_generic_copy::
      <str,u8,alloc[12e961f32105355]::string::String>(&local_b0,local_e8,local_e0,&DAT_0019ed35,1);
      local_c8 = local_a0;
      local_d8 = (undefined4)local_b0;
      uStack_d4 = local_b0._4_4_;
      uStack_d0 = (undefined4)uStack_a8;
      uStack_cc = uStack_a8._4_4_;
      if ((*(longlong *)(lVar8 + 0x30) != -1) && (*(longlong *)(lVar8 + 0x30) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_b0,1);
      }
      *(longlong *)(lVar8 + 0x40) = local_c8;
      *(ulonglong *)(lVar8 + 0x30) = CONCAT44(uStack_d4,local_d8);
      *(ulonglong *)(lVar8 + 0x38) = CONCAT44(uStack_cc,uStack_d0);
      param_1[2] = local_110;
      *(undefined4 *)param_1 = (undefined4)local_120;
      *(undefined4 *)((longlong)param_1 + 4) = local_120._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_118;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_118._4_4_;
      uVar14 = (undefined4)local_120;
      if (local_e0 != 0) goto LAB_005f3e91;
    }
  }
  if (local_f0 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,8);
  }
LAB_005f3d10:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_58);
  return param_1;
}


