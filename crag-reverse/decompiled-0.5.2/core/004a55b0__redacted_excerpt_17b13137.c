// 004a55b0 redacted_excerpt

/* WARNING: Type propagation algorithm not settling */
/* <craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>::redacted_excerpt */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>::redacted_excerpt
          (longlong *param_1,ulonglong *param_2)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte *pbVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  byte *local_90;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_48;
  byte *local_40;
  ulonglong local_38;
  
  uVar8 = param_2[3];
  if (uVar8 == 0) {
    *param_1 = -1;
    return param_1;
  }
  uVar14 = *param_2;
  uVar10 = uVar14;
  if (param_2[2] < uVar14) {
    uVar10 = 0;
  }
  lVar6 = param_2[2] - uVar10;
  uVar11 = uVar14 - lVar6;
  uVar10 = lVar6 + uVar8;
  if (uVar11 < uVar8) {
    uVar10 = uVar14;
  }
  local_98 = uVar8 - uVar11;
  if (uVar8 < uVar11) {
    local_98 = 0;
  }
  local_a0 = param_2[1];
  local_b0 = lVar6 + local_a0;
  local_a8 = uVar10 + local_a0;
  local_98 = local_98 + local_a0;
  <alloc[12e961f32105355]::vec::Vec<u8>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u8,core[c0acaeba6ab4c2e0]::iter::adapters::copied::Copied<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<u8>>>>
  ::from_iter(&local_60,&local_b0);
  (*(code *)PTR_from_utf8_lossy_00799b68)();
  local_90 = local_40;
  if ((longlong)local_38 < 0) {
LAB_004a5660:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    if (local_38 == 0) {
      lVar6 = 1;
      uVar8 = 0;
      local_b8 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar6 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar6 == 0) goto LAB_004a5660;
      local_b0 = local_38;
      local_a0 = 0;
      pbVar13 = local_90 + local_38;
      uVar8 = 0;
      pbVar15 = local_90;
      local_a8 = lVar6;
      do {
        bVar4 = *pbVar15;
        uVar5 = (uint)bVar4;
        if ((char)bVar4 < '\0') {
          pbVar1 = pbVar15 + 1;
          if (bVar4 < 0xe0) {
            pbVar15 = pbVar15 + 2;
            uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar12 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar4 < 0xf0) {
              pbVar15 = pbVar15 + 3;
              uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
            }
            else {
              pbVar1 = pbVar15 + 3;
              pbVar15 = pbVar15 + 4;
              uVar5 = *pbVar1 & 0x3f | uVar12 << 6 | (uVar5 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar15 = pbVar15 + 1;
        }
        if (uVar5 != 0xd) {
          if (uVar5 == 0x1b) {
            if (pbVar15 == pbVar13) break;
            bVar4 = *pbVar15;
            uVar5 = (uint)bVar4;
            if ((char)bVar4 < '\0') {
              pbVar1 = pbVar15 + 1;
              if (bVar4 < 0xe0) {
                pbVar15 = pbVar15 + 2;
                uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
              }
              else {
                uVar12 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                if (bVar4 < 0xf0) {
                  pbVar15 = pbVar15 + 3;
                  uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
                }
                else {
                  pbVar1 = pbVar15 + 3;
                  pbVar15 = pbVar15 + 4;
                  uVar5 = *pbVar1 & 0x3f | uVar12 << 6 | (uVar5 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar15 = pbVar15 + 1;
            }
            if (uVar5 == 0x5d) {
              uVar5 = 0xfffffffe;
              do {
                while (uVar5 == 0xfffffffe) {
                  if (pbVar15 == pbVar13) goto LAB_004a5700;
                  bVar4 = *pbVar15;
                  uVar5 = (uint)bVar4;
                  if ((char)bVar4 < '\0') {
                    pbVar1 = pbVar15 + 1;
                    if (bVar4 < 0xe0) {
                      pbVar15 = pbVar15 + 2;
                      uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
                      goto LAB_004a5a50;
                    }
                    uVar12 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                    if (bVar4 < 0xf0) {
                      pbVar15 = pbVar15 + 3;
                      uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
                    }
                    else {
                      pbVar1 = pbVar15 + 3;
                      pbVar15 = pbVar15 + 4;
                      uVar5 = *pbVar1 & 0x3f | uVar12 << 6 | (uVar5 & 7) << 0x12;
                    }
                  }
                  else {
                    pbVar15 = pbVar15 + 1;
                  }
                  if (uVar5 != 0x1b) goto LAB_004a59a0;
LAB_004a5a59:
                  uVar5 = 0xffffffff;
                  if (pbVar15 != pbVar13) {
                    bVar4 = *pbVar15;
                    uVar5 = (uint)bVar4;
                    if ((char)bVar4 < '\0') {
                      pbVar1 = pbVar15 + 1;
                      if (bVar4 < 0xe0) {
                        pbVar15 = pbVar15 + 2;
                        uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
                      }
                      else {
                        uVar12 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                        if (bVar4 < 0xf0) {
                          pbVar15 = pbVar15 + 3;
                          uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
                        }
                        else {
                          pbVar1 = pbVar15 + 3;
                          pbVar15 = pbVar15 + 4;
                          uVar5 = *pbVar1 & 0x3f | uVar12 << 6 | (uVar5 & 7) << 0x12;
                        }
                      }
                    }
                    else {
                      pbVar15 = pbVar15 + 1;
                    }
                    if (uVar5 == 0x5c) goto LAB_004a5700;
                  }
                }
                if (uVar5 == 0xffffffff) break;
LAB_004a5a50:
                if (uVar5 == 0x1b) goto LAB_004a5a59;
LAB_004a59a0:
                bVar16 = uVar5 != 7;
                uVar5 = 0xfffffffe;
              } while (bVar16);
            }
            else if (uVar5 == 0x5b) {
              do {
                if (pbVar15 == pbVar13) break;
                bVar4 = *pbVar15;
                uVar5 = (uint)bVar4;
                if ((char)bVar4 < '\0') {
                  pbVar1 = pbVar15 + 1;
                  if (bVar4 < 0xe0) {
                    pbVar15 = pbVar15 + 2;
                    uVar5 = (uVar5 & 0x1f) << 6 | *pbVar1 & 0x3f;
                  }
                  else {
                    uVar12 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                    if (bVar4 < 0xf0) {
                      pbVar15 = pbVar15 + 3;
                      uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
                    }
                    else {
                      pbVar1 = pbVar15 + 3;
                      pbVar15 = pbVar15 + 4;
                      uVar5 = *pbVar1 & 0x3f | uVar12 << 6 | (uVar5 & 7) << 0x12;
                    }
                  }
                }
                else {
                  pbVar15 = pbVar15 + 1;
                }
              } while (0x3e < uVar5 - 0x40);
            }
          }
          else if (uVar5 < 0x20) {
            if (uVar5 - 9 < 2) {
LAB_004a57f8:
              if (local_b0 == uVar8) {
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_b0,uVar8,1,1,1);
              }
              *(byte *)(local_a8 + uVar8) = (byte)uVar5;
              lVar3 = 1;
              lVar6 = local_a8;
LAB_004a56f0:
              uVar8 = uVar8 + lVar3;
              local_a0 = uVar8;
            }
          }
          else if (uVar5 - 0xa0 < 0xffffffdf) {
            if (uVar5 < 0x80) goto LAB_004a57f8;
            uVar14 = 4 - (ulonglong)(uVar5 < 0x10000);
            if (uVar5 < 0x800) {
              uVar14 = 2;
            }
            if (local_b0 - uVar8 < uVar14) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_b0,uVar8,uVar14,1,1);
              lVar6 = local_a8;
            }
            bVar4 = (byte)uVar5 & 0x3f | 0x80;
            bVar7 = (byte)(uVar5 >> 6);
            if (uVar5 < 0x800) {
              *(byte *)(lVar6 + uVar8) = bVar7 | 0xc0;
              *(byte *)(lVar6 + 1 + uVar8) = bVar4;
              lVar3 = 2;
            }
            else {
              bVar7 = bVar7 & 0x3f | 0x80;
              bVar9 = (byte)(uVar5 >> 0xc);
              if (uVar5 < 0x10000) {
                *(byte *)(lVar6 + uVar8) = bVar9 | 0xe0;
                *(byte *)(lVar6 + 1 + uVar8) = bVar7;
                *(byte *)(lVar6 + 2 + uVar8) = bVar4;
                lVar3 = 3;
              }
              else {
                *(byte *)(lVar6 + uVar8) = (byte)(uVar5 >> 0x12) | 0xf0;
                *(byte *)(lVar6 + 1 + uVar8) = bVar9 & 0x3f | 0x80;
                *(byte *)(lVar6 + 2 + uVar8) = bVar7;
                *(byte *)(lVar6 + 3 + uVar8) = bVar4;
                lVar3 = 4;
              }
            }
            goto LAB_004a56f0;
          }
        }
LAB_004a5700:
      } while (pbVar15 != pbVar13);
      local_b8 = local_b0;
      lVar6 = local_a8;
    }
    auVar17 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar6,uVar8);
    if (auVar17._8_8_ == 0) {
      *param_1 = -1;
      if (local_b8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (0 < local_48) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (local_60 == 0) {
        return param_1;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
      return param_1;
    }
    craggemini_core[66f3c71560d70857]::protocol::redact_error_secrets(&local_b0,auVar17._0_8_);
    uVar8 = local_a0;
    local_80 = local_58;
    local_78 = local_b0;
    uVar14 = local_a0;
    uVar10 = local_b0;
    lVar3 = local_a8;
    local_88 = lVar6;
    if (0x1000 < local_a0) {
      uVar10 = local_a0 - 0x1000;
      do {
        if (-0x41 < *(char *)(local_a8 + uVar10)) goto LAB_004a5c22;
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_a0);
      uVar10 = local_a0;
LAB_004a5c22:
      uVar14 = local_a0 - uVar10;
      if (uVar14 == 0) {
        lVar3 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar3 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar3 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_004a5e1a;
        }
      }
      if (uVar8 == uVar10) {
        uVar14 = 0;
        uVar10 = 0;
      }
      else {
        (*(code *)PTR_memcpy_00799008)();
        uVar10 = uVar14;
      }
    }
    auVar17 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar3,uVar14);
    lVar6 = auVar17._8_8_;
    if (lVar6 == 0) {
      *param_1 = -1;
joined_r0x004a5e01:
      if (uVar10 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (local_78 != 0 && uVar8 >= 0x1001) {
        (*(code *)PTR___rust_dealloc_00798fc8)(local_78 == 0 || uVar8 < 0x1001,1);
      }
      if (local_b8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (0 < local_48) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (local_60 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      return param_1;
    }
    if (-1 < lVar6) {
      local_70 = auVar17._0_8_;
      local_68 = param_1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar3 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar3 != 0) {
        (*(code *)PTR_memcpy_00799008)();
        *local_68 = lVar6;
        local_68[1] = lVar3;
        local_68[2] = lVar6;
        param_1 = local_68;
        goto joined_r0x004a5e01;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
LAB_004a5e1a:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


