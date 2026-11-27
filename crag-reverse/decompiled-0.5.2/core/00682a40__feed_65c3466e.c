// 00682a40 feed

/* WARNING: Removing unreachable block (ram,0x00682c46) */
/* <craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::feed */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::feed
          (undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  ulonglong uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  char *pcVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong extraout_RDX;
  uint uVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined1 auVar22 [16];
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  int *local_160;
  longlong *local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong local_130;
  ulonglong local_120;
  undefined1 local_118 [16];
  longlong *local_108;
  undefined1 *puStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong *local_48;
  undefined1 *local_40;
  longlong local_38;
  
  if (*(char *)((longlong)param_2 + 0x129) != '\0') {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return param_1;
  }
  uVar21 = (*(code *)PTR_from_utf8_lossy_00799b68)();
  if ((char)param_2[0x15] == '\x03') {
    if ((longlong)local_120 < 0) {
LAB_00682aba:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00683451;
    }
    if (local_120 == 0) {
      lVar10 = 1;
      lVar17 = param_2[0xb];
      if (lVar17 == param_2[9]) {
LAB_00682b32:
        uVar21 = (*(code *)PTR_grow_one_00799328)();
      }
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar10 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar10 == 0) goto LAB_00682aba;
      uVar21 = (*(code *)PTR_memcpy_00799008)();
      lVar17 = param_2[0xb];
      if (lVar17 == param_2[9]) goto LAB_00682b32;
    }
    lVar4 = param_2[10];
    *(ulonglong *)(lVar4 + lVar17 * 0x18) = local_120;
    *(longlong *)(lVar4 + 8 + lVar17 * 0x18) = lVar10;
    *(ulonglong *)(lVar4 + 0x10 + lVar17 * 0x18) = local_120;
    param_2[0xb] = lVar17 + 1;
  }
  lVar17 = param_2[2];
  if ((ulonglong)(*param_2 - lVar17) < local_120) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_2,lVar17,local_120,1,1);
LAB_00682b71:
    uVar21 = (*(code *)PTR_memcpy_00799008)();
    lVar17 = param_2[2];
  }
  else if (local_120 != 0) goto LAB_00682b71;
  local_158 = param_2 + 0x15;
  piVar20 = (int *)(lVar17 + local_120);
  param_2[2] = (longlong)piVar20;
  local_1a0 = 0;
  uStack_198 = 8;
  local_190 = 0;
LAB_00682bb8:
  lVar17 = param_2[1];
  piVar13 = (int *)0x0;
LAB_00682bcf:
  uVar11 = (longlong)piVar20 - (longlong)piVar13;
  if (0xf < uVar11) {
    lVar10 = (*(code *)PTR_memchr_aligned_00799490)();
    uVar18 = uVar11;
    uVar21 = extraout_XMM0_Da;
    if (lVar10 == 1) goto LAB_00682c28;
    goto LAB_006830b9;
  }
  uVar18 = 0;
  if (uVar11 == 0) goto LAB_006830b9;
  while (*(char *)((longlong)piVar13 + uVar18 + lVar17) != '\n') {
    uVar18 = uVar18 + 1;
    if (uVar11 == uVar18) goto LAB_006830b9;
  }
LAB_00682c28:
  piVar1 = (int *)(uVar18 + (longlong)piVar13);
  if ((piVar20 <= piVar1) || (*(char *)(lVar17 + (longlong)piVar1) != '\n')) goto LAB_00682bc0;
  lVar17 = param_2[1];
  piVar20 = (int *)param_2[2];
  if (piVar1 != (int *)0x0) {
    if (piVar1 < piVar20) {
      if (*(char *)(lVar17 + (longlong)piVar1) < -0x40) {
LAB_00683439:
        (*(code *)PTR_slice_error_fail_00799408)(piVar1,0,&PTR_s_src_multiprotocol_rs_00791278);
        goto LAB_00683451;
      }
    }
    else if (piVar1 != piVar20) goto LAB_00683439;
  }
  piVar13 = piVar1;
  do {
    while( true ) {
      piVar12 = piVar13;
      if (piVar12 == (int *)0x0) {
        piVar13 = (int *)0x1;
        goto LAB_00682d3b;
      }
      uVar16 = (uint)*(char *)((longlong)piVar12 + lVar17 + -1);
      if (-1 < (int)uVar16) break;
      bVar2 = *(byte *)((longlong)piVar12 + lVar17 + -2);
      if ((char)bVar2 < -0x40) {
        bVar3 = *(byte *)((longlong)piVar12 + lVar17 + -3);
        if ((char)bVar3 < -0x40) {
          lVar10 = lVar17 + -4;
          uVar19 = bVar3 & 0x3f | (*(byte *)((longlong)piVar12 + lVar17 + -4) & 7) << 6;
        }
        else {
          lVar10 = lVar17 + -3;
          uVar19 = bVar3 & 0xf;
        }
        uVar19 = bVar2 & 0x3f | uVar19 << 6;
      }
      else {
        lVar10 = lVar17 + -2;
        uVar19 = bVar2 & 0x1f;
      }
      piVar13 = (int *)((longlong)piVar12 + (lVar10 - lVar17));
      if ((uVar16 & 0x3f | uVar19 << 6) != 0xd) goto LAB_00682cf8;
    }
    piVar13 = (int *)((longlong)piVar12 + -1);
  } while (uVar16 == 0xd);
LAB_00682cf8:
  if ((longlong)piVar12 < 0) {
LAB_00683104:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00683451;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  piVar13 = (int *)(*(code *)PTR___rust_alloc_00799000)();
  if (piVar13 == (int *)0x0) {
    local_160 = piVar12;
    goto LAB_00683104;
  }
  uVar21 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,piVar12);
  piVar20 = (int *)param_2[2];
LAB_00682d3b:
  if (piVar20 <= piVar1) {
    (*(code *)PTR_slice_index_fail_007993c8)
              (&anon_30b5cef53457a6ea696e8d7e9f6273d6_695_llvm_8436237269785592069);
    goto LAB_00683451;
  }
  local_f8._0_8_ = (longlong)piVar1 + 1;
  local_118._0_8_ = param_2[1];
  if ((piVar20 <= (ulonglong)local_f8._0_8_) ||
     (-0x41 < *(char *)(local_118._0_8_ + local_f8._0_8_))) {
    local_118._8_8_ = local_118._0_8_ + local_f8._0_8_;
    puStack_100 = (undefined1 *)0x0;
    local_108 = param_2;
    uVar21 = (*(code *)PTR_drop_0079a3a8)();
    auVar8._8_8_ = local_f8._8_8_;
    auVar8._0_8_ = local_f8._0_8_;
    auVar22._8_8_ = local_118._8_8_;
    auVar22._0_8_ = local_118._0_8_;
    local_160 = piVar13;
    if (piVar12 == (int *)0x0) {
      if ((param_2[0xf] != -1) && (param_2[0xf] != 0)) {
        uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      param_2[0xf] = -1;
      piVar20 = (int *)param_2[2];
    }
    else {
      if (&DAT_00000005 < piVar12) {
        if ((short)piVar13[1] == 0x3a74 && *piVar13 == 0x6e657665) {
          uVar21 = ::<str>::trim_matches::<<char>::is_whitespace>
                             ((undefined1 *)((longlong)piVar13 + 6),
                              (undefined1 *)((longlong)piVar12 + -6));
          if (extraout_RDX < 0) {
LAB_00683116:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_00683451;
          }
          if (extraout_RDX == 0) {
            local_1a8 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            local_1a8 = (*(code *)PTR___rust_alloc_00799000)();
            if (local_1a8 == 0) goto LAB_00683116;
            uVar21 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,extraout_RDX);
          }
          if ((param_2[0xf] != -1) && (param_2[0xf] != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
          }
          param_2[0xf] = extraout_RDX;
          param_2[0x10] = local_1a8;
          param_2[0x11] = extraout_RDX;
        }
        else {
LAB_00682e0f:
          local_118 = auVar22;
          local_f8 = auVar8;
          if ((char)piVar13[1] == ':' && *piVar13 == 0x61746164) {
            auVar22 = ::<str>::trim_matches::<<char>::is_whitespace>
                                ((undefined1 *)((longlong)piVar13 + 5),
                                 (undefined1 *)((longlong)piVar12 + -5));
            auVar9._8_8_ = local_f8._8_8_;
            auVar9._0_8_ = local_f8._0_8_;
            auVar7._8_8_ = local_118._8_8_;
            auVar7._0_8_ = local_118._0_8_;
            auVar22._8_8_ = auVar22._8_8_;
            piVar20 = auVar22._0_8_;
            if (((((param_2[0xf] != -1) && (param_2[0x11] == 5)) &&
                 (pbVar5 = (byte *)param_2[0x10],
                 (byte)(((byte)(*pbVar5 + 0xbf) < 0x1a) << 5 | *pbVar5) == 0x65)) &&
                (((byte)(((byte)(pbVar5[1] + 0xbf) < 0x1a) << 5 | pbVar5[1]) == 0x72 &&
                 ((byte)(((byte)(pbVar5[2] + 0xbf) < 0x1a) << 5 | pbVar5[2]) == 0x72)))) &&
               (((byte)(((byte)(pbVar5[3] + 0xbf) < 0x1a) << 5 | pbVar5[3]) == 0x6f &&
                ((byte)(((byte)(pbVar5[4] + 0xbf) < 0x1a) << 5 | pbVar5[4]) == 0x72)))) {
              local_108 = (longlong *)0x0;
              puStack_100 = (undefined1 *)0x0;
              local_118 = auVar22;
              local_f8 = auVar22;
              serde_json[dc3825464c436029]::de::from_trait::
              <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                        (&local_88,local_118);
              if ((char)local_88 == -1) {
                feed::_closure_1_(&local_188,piVar20,auVar22._8_8_);
              }
              else {
                local_178 = local_78;
                uStack_170 = lStack_70;
                local_188 = (undefined4)local_88;
                uStack_184 = local_88._4_4_;
                uStack_180 = (undefined4)uStack_80;
                uStack_17c = uStack_80._4_4_;
              }
              craggemini_core[66f3c71560d70857]::protocol::parse_upstream_sse_error
                        (local_118,&local_188);
              if (*(char *)((longlong)param_2 + 0x129) == '\0') {
                *(undefined1 *)((longlong)param_2 + 0x129) = 1;
                craggemini_core[66f3c71560d70857]::multiprotocol::render_sse_error_frame
                          (&local_150,local_158,local_118,param_2[4],param_2[5],(char)param_2[0x25])
                ;
                local_78 = CONCAT44(uStack_14c,local_150);
                local_88 = CONCAT44(uStack_144,uStack_148);
                lVar17 = CONCAT44(uStack_13c,local_140);
              }
              else {
                local_88 = 8;
                lVar17 = 0;
                local_78 = 0;
              }
              lStack_70 = lVar17 * 0x20 + local_88;
              uStack_80 = local_88;
              <alloc[12e961f32105355]::vec::Vec<bytes[e9829e187354639b]::bytes::Bytes>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<bytes[e9829e187354639b]::bytes::Bytes,alloc[12e961f32105355]::vec::into_iter::IntoIter<bytes[e9829e187354639b]::bytes::Bytes>>>
              ::spec_extend(&local_1a0,&local_88);
              param_1[2] = local_190;
              *(undefined4 *)param_1 = (undefined4)local_1a0;
              *(undefined4 *)((longlong)param_1 + 4) = local_1a0._4_4_;
              *(undefined4 *)(param_1 + 1) = (undefined4)uStack_198;
              *(undefined4 *)((longlong)param_1 + 0xc) = uStack_198._4_4_;
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::protocol::Failure>(local_118);
              uVar21 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <serde_json[dc3825464c436029]::value::Value>(&local_188);
              goto LAB_00683283;
            }
            if ((auVar22._8_8_ != (undefined1 *)0x0) &&
               ((auVar22._8_8_ != &DAT_00000006 ||
                (local_118 = auVar7, local_f8 = auVar9,
                (short)piVar20[1] != 0x5d45 || *piVar20 != 0x4e4f445b)))) {
              local_108 = (longlong *)0x0;
              puStack_100 = (undefined1 *)0x0;
              local_118 = auVar22;
              local_f8 = auVar22;
              serde_json[dc3825464c436029]::de::from_trait::
              <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                        (&local_150,local_118);
              if ((char)local_150 != -1) {
                local_178 = CONCAT44(uStack_13c,local_140);
                uStack_170 = CONCAT44(uStack_134,uStack_138);
                local_188 = local_150;
                uStack_184 = uStack_14c;
                uStack_180 = uStack_148;
                uStack_17c = uStack_144;
                puVar14 = (undefined4 *)(*(code *)PTR_index_into_00799300)(local_150,&local_188);
                if (puVar14 == (undefined4 *)0x0) {
                  puVar14 = &local_188;
                }
                pcVar15 = (char *)(*(code *)PTR_index_into_00799300)();
                if ((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) {
                  pcVar15 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_01,puVar14);
                  if ((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) {
                    process_payload(param_2,&local_188,&local_1a0);
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_150);
                    goto LAB_0068309a;
                  }
                }
                local_118._0_8_ = 0xffffffffffffffff;
                puStack_100 = (undefined1 *)0xffffffffffffffff;
                local_e8 = 0xffffffffffffffff;
                local_d0 = 0xffffffffffffffff;
                local_b8 = 0xffffffffffffffff;
                local_a0 = 0xffffffffffffffff;
                craggemini_core[66f3c71560d70857]::protocol::build_failure_from_error_json
                          (&local_88,0,&local_188,local_118,1);
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>(local_118);
                if (*(char *)((longlong)param_2 + 0x129) == '\0') {
                  *(undefined1 *)((longlong)param_2 + 0x129) = 1;
                  craggemini_core[66f3c71560d70857]::multiprotocol::render_sse_error_frame
                            (&local_48,local_158,&local_88,param_2[4],param_2[5],(char)param_2[0x25]
                            );
                }
                else {
                  local_40 = &DAT_00000008;
                  local_38 = 0;
                  local_48 = (longlong *)0x0;
                }
                puStack_100 = local_40 + local_38 * 0x20;
                local_118._0_8_ = local_40;
                local_118._8_8_ = local_40;
                local_108 = local_48;
                <alloc[12e961f32105355]::vec::Vec<bytes[e9829e187354639b]::bytes::Bytes>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<bytes[e9829e187354639b]::bytes::Bytes,alloc[12e961f32105355]::vec::into_iter::IntoIter<bytes[e9829e187354639b]::bytes::Bytes>>>
                ::spec_extend(&local_1a0,local_118);
                param_1[2] = local_190;
                *(undefined4 *)param_1 = (undefined4)local_1a0;
                *(undefined4 *)((longlong)param_1 + 4) = local_1a0._4_4_;
                *(undefined4 *)(param_1 + 1) = (undefined4)uStack_198;
                *(undefined4 *)((longlong)param_1 + 0xc) = uStack_198._4_4_;
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::protocol::Failure>(&local_88);
                uVar21 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                         <serde_json[dc3825464c436029]::value::Value>(&local_150);
LAB_00683283:
                uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
joined_r0x006830db:
                if (local_130 - 1U < 0xfffffffffffffffe) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
                  return param_1;
                }
                return param_1;
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                        (&uStack_148);
            }
          }
        }
LAB_0068309a:
        uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      else if (piVar12 != (int *)0x0) {
        if (piVar12 == (int *)&DAT_00000005) goto LAB_00682e0f;
        goto LAB_0068309a;
      }
      piVar20 = (int *)param_2[2];
    }
    goto LAB_00682bb8;
  }
  (*(code *)PTR_panic_00799338)(uVar21,&PTR_s_src_multiprotocol_rs_00791290);
LAB_00683451:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_00682bc0:
  piVar13 = (int *)((longlong)piVar13 + uVar18 + 1);
  if (piVar20 < piVar13) {
LAB_006830b9:
    param_1[2] = local_190;
    *(undefined4 *)param_1 = (undefined4)local_1a0;
    *(undefined4 *)((longlong)param_1 + 4) = local_1a0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_198;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_198._4_4_;
    uVar21 = (undefined4)local_1a0;
    goto joined_r0x006830db;
  }
  goto LAB_00682bcf;
}


