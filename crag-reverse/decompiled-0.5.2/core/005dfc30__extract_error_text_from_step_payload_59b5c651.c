// 005dfc30 extract_error_text_from_step_payload

/* craggemini_core[66f3c71560d70857]::acp_backend::extract_error_text_from_step_payload */

void __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::extract_error_text_from_step_payload
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  char *pcVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  char *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  bool bVar19;
  uint uVar20;
  byte *pbVar21;
  longlong lVar22;
  char *pcVar23;
  ulonglong uVar24;
  longlong lVar25;
  bool bVar26;
  int iVar27;
  int extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar28;
  int extraout_XMM0_Da_02;
  int extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  int extraout_XMM0_Da_05;
  undefined1 auVar29 [16];
  char *local_158;
  char *local_150;
  longlong local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char *local_c0;
  char *local_b8;
  undefined2 local_b0;
  char *local_a8;
  int local_a0;
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
  ulonglong local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char *local_38;
  
  if (param_3 == 0) {
    *param_1 = -1;
    return;
  }
  iVar27 = (*(code *)PTR_from_utf8_lossy_00799b68)();
  pcVar23 = (char *)CONCAT44(uStack_8c,local_90);
  pcVar16 = (char *)0x4000;
  if (pcVar23 < (char *)0x4000) {
    pcVar16 = pcVar23;
  }
  if (pcVar23 == (char *)0x0) {
    local_158 = (char *)0x1;
    pcVar23 = (char *)0x0;
    lVar8 = CONCAT44(uStack_9c,local_a0);
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar7 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar7 == (char *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005e0728;
    }
    local_118 = (char *)0x0;
    pbVar18 = (byte *)CONCAT44(uStack_94,uStack_98);
    pbVar21 = (byte *)(pcVar23 + (longlong)pbVar18);
    bVar19 = true;
    pcVar23 = (char *)0x0;
    iVar27 = extraout_XMM0_Da;
    local_128 = pcVar16;
    uStack_120 = pcVar7;
    do {
      bVar3 = *pbVar18;
      uVar24 = (ulonglong)bVar3;
      if ((char)bVar3 < '\0') {
        uVar14 = bVar3 & 0x1f;
        pbVar1 = pbVar18 + 1;
        if (bVar3 < 0xe0) {
          pbVar18 = pbVar18 + 2;
          uVar20 = uVar14 << 6 | *pbVar1 & 0x3f;
          uVar24 = (ulonglong)uVar20;
          goto joined_r0x005dfe8b;
        }
        uVar20 = pbVar18[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar3 < 0xf0) {
          pbVar18 = pbVar18 + 3;
          uVar20 = uVar20 | uVar14 << 0xc;
        }
        else {
          pbVar1 = pbVar18 + 3;
          pbVar18 = pbVar18 + 4;
          uVar20 = *pbVar1 & 0x3f | uVar20 << 6 | (bVar3 & 7) << 0x12;
        }
        if (uVar20 != 0xfffd) {
          uVar24 = (ulonglong)uVar20;
          goto joined_r0x005dfe8b;
        }
        bVar26 = true;
        if (!bVar19) {
          if (local_128 == pcVar23) {
            iVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (&local_128,pcVar23,1,1,1);
            goto LAB_005dfd48;
          }
          goto LAB_005dfec6;
        }
      }
      else {
        pbVar18 = pbVar18 + 1;
        uVar20 = (uint)bVar3;
joined_r0x005dfe8b:
        if (uVar20 - 9 < 2) {
LAB_005dfdd2:
          if (local_128 == pcVar23) {
            iVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (&local_128,pcVar23,1,1,1);
          }
          uStack_120[(longlong)pcVar23] = (char)uVar20;
          lVar8 = 1;
LAB_005dfce0:
          bVar26 = uVar20 == 10;
          pcVar23 = pcVar23 + lVar8;
          pcVar7 = uStack_120;
        }
        else {
          uVar20 = (uint)uVar24;
          if (0x20 < uVar20 - 0x7f && 0x1f < uVar20) {
            if (uVar20 < 0x80) goto LAB_005dfdd2;
            uVar15 = 4 - (ulonglong)(uVar20 < 0x10000);
            if (uVar20 < 0x800) {
              uVar15 = 2;
            }
            if ((ulonglong)((longlong)local_128 - (longlong)pcVar23) < uVar15) {
              iVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (&local_128,pcVar23,uVar15,1,1);
            }
            bVar11 = (byte)uVar24 & 0x3f | 0x80;
            bVar3 = (byte)(uVar24 >> 6);
            if (uVar20 < 0x800) {
              uStack_120[(longlong)pcVar23] = bVar3 | 0xc0;
              (uStack_120 + 1)[(longlong)pcVar23] = bVar11;
              lVar8 = 2;
            }
            else {
              bVar13 = bVar3 & 0x3f | 0x80;
              bVar3 = (byte)(uVar24 >> 0xc);
              if (uVar20 < 0x10000) {
                uStack_120[(longlong)pcVar23] = bVar3 | 0xe0;
                (uStack_120 + 1)[(longlong)pcVar23] = bVar13;
                (uStack_120 + 2)[(longlong)pcVar23] = bVar11;
                lVar8 = 3;
              }
              else {
                uStack_120[(longlong)pcVar23] = (byte)(uVar24 >> 0x12) | 0xf0;
                (uStack_120 + 1)[(longlong)pcVar23] = bVar3 & 0x3f | 0x80;
                (uStack_120 + 2)[(longlong)pcVar23] = bVar13;
                (uStack_120 + 3)[(longlong)pcVar23] = bVar11;
                lVar8 = 4;
              }
            }
            goto LAB_005dfce0;
          }
          bVar26 = true;
          if (bVar19) goto LAB_005dfcf0;
          if (local_128 == pcVar23) {
            iVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (&local_128,pcVar23,1,1,1);
          }
LAB_005dfd48:
          pcVar7 = uStack_120;
LAB_005dfec6:
          bVar26 = true;
          pcVar7[(longlong)pcVar23] = '\n';
          pcVar23 = pcVar23 + 1;
        }
        local_118 = pcVar23;
      }
LAB_005dfcf0:
      bVar19 = bVar26;
    } while (pbVar18 != pbVar21);
    lVar8 = CONCAT44(uStack_9c,local_a0);
    pcVar16 = local_128;
    local_158 = uStack_120;
  }
  if (0 < lVar8) {
    iVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(iVar27,1);
  }
  if (pcVar23 != (char *)0x0) {
    local_38 = local_158 + 1;
    local_150 = (char *)0xffffffffffffffff;
    pcVar7 = (char *)0x0;
    do {
      if (pcVar7 != (char *)0x0) {
        if (pcVar7 < pcVar23) {
          if (local_158[(longlong)pcVar7] < -0x40) goto LAB_005e06ea;
        }
        else if (pcVar23 != pcVar7) {
LAB_005e06ea:
          (*(code *)PTR_slice_error_fail_00799408)
                    (pcVar23,pcVar7,&PTR_s_src_acp_backend_rs_0078e578);
          goto LAB_005e0728;
        }
      }
      uStack_120 = pcVar23 + -(longlong)pcVar7;
      local_128 = local_158 + (longlong)pcVar7;
      local_118 = (char *)0x0;
      uStack_100 = (char *)CONCAT71(uStack_100._1_7_,1);
      local_108 = (char *)0x7b0000007b;
      uStack_110 = uStack_120;
      iVar27 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
               ::next_match();
      if (local_a0 != 1) {
        *param_1 = (longlong)local_150;
        param_1[1] = local_140;
        param_1[2] = (longlong)local_a8;
        if (local_150 != (char *)0xffffffffffffffff) goto joined_r0x005e066f;
        local_128 = (char *)0x0;
        local_108 = (char *)0x0;
        local_f8 = 0xa0000000a;
        uStack_f0 = CONCAT31(uStack_f0._1_3_,1);
        local_e8 = local_e8 & 0xffffffffffff0000;
        uStack_120 = pcVar23;
        local_118 = local_158;
        uStack_110 = pcVar23;
        uStack_100 = pcVar23;
        goto LAB_005e03a0;
      }
      pcVar7 = pcVar7 + CONCAT44(uStack_94,uStack_98);
      if (pcVar23 < pcVar7) goto LAB_005e06aa;
      if (pcVar7 != pcVar23) {
        pcVar2 = local_158 + (longlong)pcVar7;
        bVar26 = false;
        lVar8 = 0;
        bVar19 = false;
        lVar22 = 0;
        pcVar9 = pcVar2;
        do {
          lVar25 = 0;
          lVar12 = lVar22;
          while (cVar6 = pcVar9[lVar25], !bVar26) {
            if (cVar6 == '\"') {
              bVar26 = true;
            }
            else {
              if (cVar6 == '{') {
                lVar8 = lVar8 + 1;
              }
              else if ((cVar6 == '}') &&
                      (bVar26 = lVar8 == 0, lVar8 = lVar8 + -1, bVar26 || lVar8 == 0)) {
                pcVar9 = pcVar7 + lVar22 + lVar25;
                if (pcVar9 < pcVar23) {
                  pcVar9 = pcVar7 + lVar12 + 1;
                  pcVar17 = (char *)(lVar22 + lVar25 + 1);
                  if ((pcVar7 <= pcVar17 + (longlong)pcVar7) &&
                     ((pcVar23 <= pcVar7 || pcVar7 == (char *)0x0 || (-0x41 < *pcVar2)))) {
                    if ((pcVar23 <= pcVar17 + (longlong)pcVar7) ||
                       (-0x41 < (local_38 + (longlong)pcVar7)[lVar25 + lVar22])) {
                      cVar6 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::
                              is_contained_in(&DAT_0019e7ab,7,pcVar2,pcVar17);
                      if (cVar6 == '\0') goto LAB_005e0020;
                      local_118 = (char *)0x0;
                      uStack_110 = (char *)0x0;
                      local_128 = pcVar2;
                      uStack_120 = pcVar17;
                      local_108 = pcVar2;
                      uStack_100 = pcVar17;
                      serde_json[dc3825464c436029]::de::from_trait::
                      <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                                (&local_a0,&local_128);
                      if ((char)local_a0 == -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::error::Error>(&uStack_98);
                        goto LAB_005e0020;
                      }
                      local_128 = (char *)CONCAT44(uStack_9c,local_a0);
                      uStack_120 = (char *)CONCAT44(uStack_94,uStack_98);
                      local_118 = (char *)CONCAT44(uStack_8c,local_90);
                      uStack_110 = (char *)CONCAT44(uStack_84,uStack_88);
                      if (((char)local_a0 == '\x05') &&
                         (lVar8 = (*(code *)PTR_index_into_00799300)(local_a0,&local_128),
                         lVar8 != 0)) {
                        if (pcVar17 == (char *)0x0) {
                          local_140 = 1;
                          uVar28 = extraout_XMM0_Da_00;
                        }
                        else {
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          local_140 = (*(code *)PTR___rust_alloc_00799000)();
                          if (local_140 == 0) {
                            (*(code *)PTR_handle_error_00798ff0)();
                            goto LAB_005e0728;
                          }
                          uVar28 = extraout_XMM0_Da_01;
                          if (pcVar17 != (char *)0x0) {
                            uVar28 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,pcVar17);
                          }
                        }
                        if (local_150 + -1 < (char *)0xfffffffffffffffe) {
                          (*(code *)PTR___rust_dealloc_00798fc8)(uVar28,1);
                        }
                        local_150 = pcVar17;
                        local_a8 = pcVar17;
                      }
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_128);
                      goto LAB_005e0020;
                    }
                    pcVar9 = pcVar7 + lVar25 + lVar22 + 1;
                  }
                }
                (*(code *)PTR_slice_error_fail_00799408)
                          (pcVar9,pcVar7,&PTR_s_src_acp_backend_rs_0078e590);
                goto LAB_005e0728;
              }
              bVar26 = false;
            }
            lVar5 = lVar25 + 1;
            lVar25 = lVar25 + 1;
            lVar12 = lVar12 + 1;
            if (pcVar9 + lVar5 == local_158 + (longlong)pcVar23) goto LAB_005e0020;
          }
          bVar26 = true;
          if (bVar19) {
LAB_005e0150:
            bVar19 = false;
          }
          else if (cVar6 == '\"') {
            bVar19 = false;
            bVar26 = false;
          }
          else {
            if (cVar6 != '\\') goto LAB_005e0150;
            bVar19 = true;
            bVar26 = true;
          }
          pcVar9 = pcVar9 + lVar25 + 1;
          lVar22 = lVar22 + lVar25 + 1;
        } while (pcVar9 != local_158 + (longlong)pcVar23);
      }
LAB_005e0020:
      pcVar7 = pcVar7 + 1;
    } while( true );
  }
LAB_005e0673:
  *param_1 = -1;
  goto joined_r0x005e066f;
LAB_005e06aa:
  (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s_src_acp_backend_rs_0078e5a8,pcVar23);
  goto LAB_005e0728;
  while( true ) {
    cVar6 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                      (&DAT_0019e9ea,2,uVar10,lVar8);
    iVar27 = extraout_XMM0_Da_03;
    if (cVar6 != '\0') break;
LAB_005e03a0:
    do {
      auVar29 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back_inclusive
                          (&local_128);
      lVar22 = auVar29._8_8_;
      lVar8 = auVar29._0_8_;
      if (lVar8 == 0) {
        (*(code *)PTR_new_00799a18)(&DAT_0019e9c9,pcVar23,10);
        local_c8 = local_40;
        local_d8 = local_50;
        uStack_d0 = uStack_48;
        local_e8 = local_60;
        lStack_e0 = lStack_58;
        local_f8 = CONCAT44(uStack_6c,local_70);
        uStack_f0 = uStack_68;
        uStack_ec = uStack_64;
        local_108 = (char *)CONCAT44(uStack_7c,local_80);
        uStack_100 = (char *)CONCAT44(uStack_74,uStack_78);
        local_118 = (char *)CONCAT44(uStack_8c,local_90);
        uStack_110 = (char *)CONCAT44(uStack_84,uStack_88);
        local_128 = (char *)CONCAT44(uStack_9c,local_a0);
        uStack_120 = (char *)CONCAT44(uStack_94,uStack_98);
        local_c0 = (char *)0x0;
        local_b0 = 1;
        local_b8 = pcVar23;
        <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
        ::next_match(&local_a0,&local_128);
        if (local_a0 == 1) {
          pcVar23 = local_c0 + lStack_58;
        }
        else if ((local_b0._1_1_ == '\0') && (((char)local_b0 == '\x01' || (local_b8 != local_c0))))
        {
          pcVar23 = local_c0 + lStack_e0;
        }
        else {
          pcVar23 = (char *)0x0;
        }
        if (pcVar23 == (char *)0x0) {
          pcVar23 = local_158;
        }
        auVar29 = ::<str>::trim_matches::<<char>::is_whitespace>(pcVar23);
        iVar27 = extraout_XMM0_Da_05;
        if (auVar29._8_8_ < 8) goto LAB_005e0673;
        uStack_120 = auVar29._0_8_ + auVar29._8_8_;
        local_118 = (char *)0x1000;
        local_128 = auVar29._0_8_;
        <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<char>>
        ::from_iter::
        <core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::str::iter::Chars>>
                  (&local_a0,&local_128);
        param_1[2] = CONCAT44(uStack_8c,local_90);
        *(int *)param_1 = local_a0;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_9c;
        *(undefined4 *)(param_1 + 1) = uStack_98;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_94;
        iVar27 = local_a0;
        goto joined_r0x005e066f;
      }
      if (lVar22 == 0) {
LAB_005e03e0:
        lVar12 = 0;
      }
      else {
        lVar12 = lVar22;
        if (*(char *)(lVar8 + -1 + lVar22) == '\n') {
          lVar12 = lVar22 + -1;
          if (lVar12 == 0) goto LAB_005e03e0;
          if (*(char *)(lVar8 + -2 + lVar22) == '\r') {
            lVar12 = lVar22 + -2;
          }
        }
      }
      auVar29 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar8,lVar12);
      lVar8 = auVar29._8_8_;
      uVar10 = auVar29._0_8_;
      cVar6 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                        (&DAT_0019e9d3,6,uVar10,lVar8);
      if (cVar6 != '\0') {
        cVar6 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                          (&DAT_0019e9d9,10,uVar10,lVar8);
        iVar27 = extraout_XMM0_Da_02;
        if (cVar6 != '\0') goto LAB_005e045f;
      }
      cVar6 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                        (&DAT_0019e9e3,7,uVar10,lVar8);
    } while (cVar6 == '\0');
  }
LAB_005e045f:
  if (lVar8 < 0) {
LAB_005e046b:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_005e0728:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (lVar8 == 0) {
    lVar22 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar22 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar22 == 0) goto LAB_005e046b;
    iVar27 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar8);
  }
  *param_1 = lVar8;
  param_1[1] = lVar22;
  param_1[2] = lVar8;
joined_r0x005e066f:
  if (pcVar16 != (char *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(iVar27,1);
  }
  return;
}


