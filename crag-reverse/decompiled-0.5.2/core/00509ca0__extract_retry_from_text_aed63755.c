// 00509ca0 extract_retry_from_text

/* craggemini_core[66f3c71560d70857]::protocol::extract_retry_from_text */

void __rustcall
craggemini_core[66f3c71560d70857]::protocol::extract_retry_from_text
          (ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *unaff_RBX;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  ulonglong local_158;
  byte *local_150;
  ulonglong local_148;
  byte *local_140;
  ulonglong local_138;
  ulonglong local_130;
  longlong local_120 [2];
  undefined *local_110;
  longlong local_108;
  char *local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  int local_b0 [2];
  longlong local_a8;
  int local_98 [2];
  longlong local_90;
  
  (*(code *)PTR_new_00799a18)("quotaResetTimeStamp:",param_3,0x14);
  <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_98,local_120);
  if (local_98[0] == 1) {
    uVar11 = local_90 + 0x14;
    if (uVar11 != 0) {
      if (uVar11 < param_3) {
        if (-0x41 < *(char *)(param_2 + uVar11)) goto LAB_00509d27;
      }
      else if (param_3 == uVar11) goto LAB_00509d27;
      goto LAB_00509f92;
    }
LAB_00509d27:
    pbVar12 = (byte *)(uVar11 + param_2);
    pbVar6 = pbVar12;
    pbVar10 = (byte *)0x0;
    while (unaff_RBX = (byte *)(param_3 - uVar11), pbVar6 != (byte *)(param_2 + param_3)) {
      bVar13 = *pbVar6;
      uVar8 = (uint)bVar13;
      if ((char)bVar13 < '\0') {
        if (bVar13 < 0xe0) {
          pbVar5 = pbVar6 + 2;
          uVar8 = (uVar8 & 0x1f) << 6 | pbVar6[1] & 0x3f;
        }
        else {
          uVar9 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (bVar13 < 0xf0) {
            pbVar5 = pbVar6 + 3;
            uVar8 = uVar9 | (uVar8 & 0x1f) << 0xc;
          }
          else {
            pbVar5 = pbVar6 + 4;
            uVar8 = pbVar6[3] & 0x3f | uVar9 << 6 | (uVar8 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar5 = pbVar6 + 1;
      }
      unaff_RBX = pbVar10;
      if ((uVar8 < 0x21) && ((0x100003e00U >> ((ulonglong)uVar8 & 0x3f) & 1) != 0)) break;
      if (0x84 < uVar8) {
        uVar9 = uVar8 >> 8;
        if (uVar9 < 0x20) {
          if (uVar9 == 0) {
            bVar13 = PTR_WHITESPACE_MAP_00799868[uVar8 & 0xff];
          }
          else {
            if (uVar9 != 0x16) goto LAB_00509e85;
            bVar13 = uVar8 == 0x1680;
          }
        }
        else if (uVar9 == 0x20) {
          bVar13 = (byte)PTR_WHITESPACE_MAP_00799868[uVar8 & 0xff] >> 1;
        }
        else {
          if (uVar9 != 0x30) goto LAB_00509e85;
          bVar13 = uVar8 == 0x3000;
        }
        if ((bVar13 & 1) != 0) break;
      }
LAB_00509e85:
      if (((uVar8 - 0x22 < 0x3c) &&
          ((0x800000000000421U >> ((ulonglong)(uVar8 - 0x22) & 0x3f) & 1) != 0)) ||
         (lVar4 = (longlong)pbVar10 - (longlong)pbVar6, pbVar6 = pbVar5, pbVar10 = pbVar5 + lVar4,
         uVar8 == 0x7d)) break;
    }
    if ((unaff_RBX == (byte *)0x0) ||
       (lVar4 = parse_rfc3339_unix_secs(pbVar12,unaff_RBX), lVar4 != 1)) goto LAB_00509f31;
    if (-1 < (longlong)unaff_RBX) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_158 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_158 != 0) {
        (*(code *)PTR_memcpy_00799008)();
        auVar14 = parse_retry_after_ms(pbVar12,unaff_RBX);
        local_130 = auVar14._8_8_;
        local_148 = auVar14._0_8_;
        local_140 = unaff_RBX;
        goto LAB_00509f3a;
      }
    }
LAB_0050a16f:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0050a62c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_00509f31:
  local_140 = (byte *)0xffffffffffffffff;
  local_148 = 0;
LAB_00509f3a:
  (*(code *)PTR_new_00799a18)("quotaResetTimeStamp\":\"",param_3,0x16);
  <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_98,local_120);
  if (local_98[0] == 1) {
    uVar11 = local_90 + 0x16;
    if (uVar11 != 0) {
      if (uVar11 < param_3) {
        if (*(char *)(param_2 + uVar11) < -0x40) {
LAB_00509f92:
          (*(code *)PTR_slice_error_fail_00799408)(param_3,uVar11,&PTR_s_src_protocol_rs_0078cf50);
          goto LAB_0050a62c;
        }
      }
      else if (param_3 != uVar11) goto LAB_00509f92;
    }
    pbVar12 = (byte *)(uVar11 + param_2);
    pbVar6 = pbVar12;
    pbVar10 = (byte *)0x0;
    while (local_150 = (byte *)(param_3 - uVar11), pbVar6 != (byte *)(param_2 + param_3)) {
      bVar13 = *pbVar6;
      uVar8 = (uint)bVar13;
      if ((char)bVar13 < '\0') {
        if (bVar13 < 0xe0) {
          pbVar5 = pbVar6 + 2;
          uVar8 = (uVar8 & 0x1f) << 6 | pbVar6[1] & 0x3f;
        }
        else {
          uVar9 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (bVar13 < 0xf0) {
            pbVar5 = pbVar6 + 3;
            uVar8 = uVar9 | (uVar8 & 0x1f) << 0xc;
          }
          else {
            pbVar5 = pbVar6 + 4;
            uVar8 = pbVar6[3] & 0x3f | uVar9 << 6 | (uVar8 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar5 = pbVar6 + 1;
      }
      local_150 = pbVar10;
      if ((uVar8 < 0x21) && ((0x100003e00U >> ((ulonglong)uVar8 & 0x3f) & 1) != 0)) break;
      if (0x84 < uVar8) {
        uVar9 = uVar8 >> 8;
        if (uVar9 < 0x20) {
          if (uVar9 == 0) {
            bVar13 = PTR_WHITESPACE_MAP_00799868[uVar8 & 0xff];
          }
          else {
            if (uVar9 != 0x16) goto LAB_0050a123;
            bVar13 = uVar8 == 0x1680;
          }
        }
        else if (uVar9 == 0x20) {
          bVar13 = (byte)PTR_WHITESPACE_MAP_00799868[uVar8 & 0xff] >> 1;
        }
        else {
          if (uVar9 != 0x30) goto LAB_0050a123;
          bVar13 = uVar8 == 0x3000;
        }
        if ((bVar13 & 1) != 0) break;
      }
LAB_0050a123:
      if (((uVar8 - 0x22 < 0x3c) &&
          ((0x800000000000421U >> ((ulonglong)(uVar8 - 0x22) & 0x3f) & 1) != 0)) ||
         (lVar4 = (longlong)pbVar10 - (longlong)pbVar6, pbVar6 = pbVar5, pbVar10 = pbVar5 + lVar4,
         uVar8 == 0x7d)) break;
    }
    if ((local_150 != (byte *)0x0) &&
       (lVar4 = parse_rfc3339_unix_secs(pbVar12,local_150), lVar4 == 1)) {
      if (-1 < (longlong)local_150) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_138 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_138 != 0) {
          (*(code *)PTR_memcpy_00799008)();
          if (local_140 != (byte *)0xffffffffffffffff) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          auVar14 = parse_retry_after_ms(pbVar12);
          uVar11 = auVar14._8_8_;
          if (auVar14._0_8_ == 1) {
            if (local_130 < uVar11) {
              local_130 = uVar11;
            }
            if ((local_148 & 1) == 0) {
              local_130 = uVar11;
            }
            local_148 = 1;
          }
          local_140 = local_150;
          goto LAB_0050a239;
        }
      }
      goto LAB_0050a16f;
    }
  }
  local_138 = local_158;
  local_150 = unaff_RBX;
LAB_0050a239:
  local_120[1] = 6;
  local_110 = &DAT_00182980;
  local_108 = 0x10;
  local_100 = "retryDelay:";
  local_f8 = 0xb;
  local_f0 = "Resets in ";
  local_e8 = 10;
  local_e0 = "resets in ";
  local_d8 = 10;
  local_d0 = "Retry-After:";
  local_c8 = 0xc;
  local_c0 = "retry-after:";
  local_b8 = 0xc;
  lVar4 = 0;
  do {
    lVar7 = lVar4 + 1;
    lVar2 = local_120[lVar4 * 2 + 3];
    local_120[0] = lVar7;
    (*(code *)PTR_new_00799a18)(local_120[lVar4 * 2 + 2],param_3,lVar2);
    <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_b0,local_98);
    if (local_b0[0] == 1) {
      uVar11 = lVar2 + local_a8;
      if (uVar11 != 0) {
        if (uVar11 < param_3) {
          if (*(char *)(param_2 + uVar11) < -0x40) {
LAB_0050a60e:
            (*(code *)PTR_slice_error_fail_00799408)(param_3,uVar11,&PTR_s_src_protocol_rs_0078cf38)
            ;
            goto LAB_0050a62c;
          }
        }
        else if (param_3 != uVar11) goto LAB_0050a60e;
      }
      auVar14 = ::<str>::trim_start_matches::<<char>::is_whitespace>
                          (uVar11 + param_2,param_3 - uVar11);
      pbVar12 = auVar14._0_8_;
      pbVar6 = pbVar12;
      pbVar10 = (byte *)0x0;
      while (pbVar5 = pbVar10, pbVar6 != auVar14._8_8_ + (longlong)pbVar12) {
        bVar13 = *pbVar6;
        uVar8 = (uint)bVar13;
        if ((char)bVar13 < '\0') {
          if (bVar13 < 0xe0) {
            pbVar10 = pbVar6 + 2;
            uVar8 = (uVar8 & 0x1f) << 6 | pbVar6[1] & 0x3f;
          }
          else {
            uVar9 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
            if (bVar13 < 0xf0) {
              pbVar10 = pbVar6 + 3;
              uVar8 = uVar9 | (uVar8 & 0x1f) << 0xc;
            }
            else {
              pbVar10 = pbVar6 + 4;
              uVar8 = pbVar6[3] & 0x3f | uVar9 << 6 | (uVar8 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar10 = pbVar6 + 1;
        }
        if ((uVar8 < 0x21) && ((0x100003e00U >> ((ulonglong)uVar8 & 0x3f) & 1) != 0))
        goto LAB_0050a51b;
        if (0x84 < uVar8) {
          uVar9 = uVar8 >> 8;
          if (uVar9 < 0x20) {
            if (uVar9 == 0) {
              bVar13 = PTR_WHITESPACE_MAP_00799868[uVar8 & 0xff];
joined_r0x0050a4de:
              if ((bVar13 & 1) != 0) goto LAB_0050a51b;
            }
            else if ((uVar9 == 0x16) && (uVar8 == 0x1680)) goto LAB_0050a51b;
          }
          else {
            if (uVar9 == 0x20) {
              bVar13 = (byte)PTR_WHITESPACE_MAP_00799868[uVar8 & 0xff] >> 1;
              goto joined_r0x0050a4de;
            }
            if ((uVar9 == 0x30) && (uVar8 == 0x3000)) goto LAB_0050a51b;
          }
        }
        if (((uVar8 - 0x22 < 0x3c) &&
            ((0x800000002000421U >> ((ulonglong)(uVar8 - 0x22) & 0x3f) & 1) != 0)) ||
           (lVar4 = (longlong)pbVar5 - (longlong)pbVar6, pbVar6 = pbVar10, pbVar10 = pbVar10 + lVar4
           , uVar8 == 0x7d)) goto LAB_0050a51b;
      }
      pbVar5 = auVar14._8_8_;
LAB_0050a51b:
      do {
        if (pbVar5 == (byte *)0x0) break;
        pbVar5 = pbVar12 + (longlong)pbVar5;
        uVar8 = (uint)(char)pbVar5[-1];
        if ((int)uVar8 < 0) {
          bVar13 = pbVar5[-2];
          if ((char)bVar13 < -0x40) {
            bVar1 = pbVar5[-3];
            if ((char)bVar1 < -0x40) {
              pbVar6 = pbVar5 + -4;
              uVar9 = bVar1 & 0x3f | (pbVar5[-4] & 7) << 6;
            }
            else {
              pbVar6 = pbVar5 + -3;
              uVar9 = bVar1 & 0xf;
            }
            uVar9 = bVar13 & 0x3f | uVar9 << 6;
          }
          else {
            pbVar6 = pbVar5 + -2;
            uVar9 = bVar13 & 0x1f;
          }
          pbVar5 = pbVar6 + -(longlong)pbVar12;
          if ((uVar8 & 0x3f | uVar9 << 6) != 0x2e) break;
          goto LAB_0050a51b;
        }
        pbVar5 = pbVar5 + (-1 - (longlong)pbVar12);
      } while (uVar8 == 0x2e);
      auVar14 = parse_retry_after_ms(pbVar12);
      uVar11 = auVar14._8_8_;
      if (auVar14._0_8_ == 1) {
        if (local_130 < uVar11) {
          local_130 = uVar11;
        }
        if ((local_148 & 1) == 0) {
          local_130 = uVar11;
        }
        local_148 = 1;
      }
    }
    lVar4 = lVar7;
    if (lVar7 == 6) {
      param_1[2] = (ulonglong)local_140;
      param_1[3] = local_138;
      param_1[4] = (ulonglong)local_150;
      *param_1 = local_148;
      param_1[1] = local_130;
      return;
    }
  } while( true );
}


