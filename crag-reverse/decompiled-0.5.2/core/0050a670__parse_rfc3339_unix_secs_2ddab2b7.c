// 0050a670 parse_rfc3339_unix_secs

/* craggemini_core[66f3c71560d70857]::protocol::parse_rfc3339_unix_secs */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::protocol::parse_rfc3339_unix_secs
          (ulonglong param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined2 local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  byte local_58;
  char cStack_57;
  char local_50 [8];
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  
  local_d0._0_8_ = 0;
  local_b8._0_1_ = 1;
  local_c0 = 0x5400000054;
  local_e0 = param_1;
  local_d8 = param_2;
  local_d0._8_8_ = param_2;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(&local_98,&local_e0);
  if ((int)local_98 != 1) {
    local_d0._0_8_ = 0;
    local_b8._0_1_ = 1;
    local_c0 = 0x7400000074;
    local_e0 = param_1;
    local_d8 = param_2;
    local_d0._8_8_ = param_2;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_98,&local_e0);
    if ((int)local_98 != 1) {
      return 0;
    }
  }
  local_e8 = local_88;
  local_98 = 0;
  local_80 = local_90;
  local_78 = 0;
  local_70 = local_90;
  local_68 = 0x2d0000002d;
  local_60 = 1;
  local_58 = 1;
  cStack_57 = '\0';
  local_88 = param_1;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(&local_e0,&local_88);
  uVar7 = local_88;
  if ((int)local_e0 == 1) {
    uVar3 = local_d8 - local_98;
    lVar4 = local_d0._0_8_;
    uVar10 = param_1;
  }
  else {
    if (cStack_57 != '\0') {
      return 0;
    }
    cStack_57 = '\x01';
    uVar3 = local_90 - local_98;
    lVar4 = local_98;
    uVar10 = local_88;
    if ((uVar3 != 0 | local_58) != 1) {
      return 0;
    }
  }
  if (uVar3 == 0) {
    return 0;
  }
  pcVar6 = (char *)(local_98 + uVar10);
  if (uVar3 == 1) {
    cVar8 = *pcVar6;
    if (cVar8 == '+') {
      return 0;
    }
    if (cVar8 == '-') {
      return 0;
    }
    if (cVar8 != '-') goto LAB_0050a7d6;
LAB_0050a888:
    if (uVar3 < 0x11) {
      if (uVar3 == 1) {
        lVar11 = 0;
      }
      else {
        uVar10 = 1;
        lVar11 = 0;
        do {
          if (9 < (byte)pcVar6[uVar10] - 0x30) {
            return 0;
          }
          lVar11 = lVar11 * 10 - (ulonglong)((byte)pcVar6[uVar10] - 0x30);
          uVar10 = uVar10 + 1;
        } while (uVar3 != uVar10);
      }
    }
    else {
      uVar10 = 1;
      lVar11 = 0;
      do {
        lVar12 = lVar11 * 10;
        if (SEXT816(lVar12) != SEXT816(lVar11) * SEXT816(10)) {
          return 0;
        }
        uVar9 = (byte)pcVar6[uVar10] - 0x30;
        if (9 < uVar9) {
          return 0;
        }
        lVar11 = lVar12 - (ulonglong)uVar9;
        if (SBORROW8(lVar12,(ulonglong)uVar9)) {
          return 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
    }
  }
  else {
    cVar8 = *pcVar6;
    if (cVar8 == '-') goto LAB_0050a888;
LAB_0050a7d6:
    if (cVar8 == '+') {
      pcVar6 = pcVar6 + 1;
      uVar3 = uVar3 - 1;
    }
    lVar11 = 0;
    if (uVar3 < 0x10) {
      if (uVar3 != 0) {
        uVar10 = 0;
        do {
          if (9 < (byte)pcVar6[uVar10] - 0x30) {
            return 0;
          }
          lVar11 = (ulonglong)((byte)pcVar6[uVar10] - 0x30) + lVar11 * 10;
          uVar10 = uVar10 + 1;
        } while (uVar3 != uVar10);
      }
    }
    else {
      uVar10 = 0;
      do {
        lVar12 = lVar11 * 10;
        if (SEXT816(lVar12) != SEXT816(lVar11) * SEXT816(10)) {
          return 0;
        }
        uVar9 = (byte)pcVar6[uVar10] - 0x30;
        if (9 < uVar9) {
          return 0;
        }
        lVar11 = lVar12 + (ulonglong)uVar9;
        if (SCARRY8(lVar12,(ulonglong)uVar9)) {
          return 0;
        }
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
    }
  }
  if (cStack_57 != '\0') {
    return 0;
  }
  local_98 = lVar4;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(&local_e0,&local_88);
  uVar3 = local_88;
  if ((int)local_e0 == 1) {
    uVar10 = local_d8 - local_98;
    lVar4 = local_d0._0_8_;
  }
  else {
    if (cStack_57 != '\0') {
      return 0;
    }
    cStack_57 = '\x01';
    uVar10 = local_90 - local_98;
    lVar4 = local_98;
    uVar7 = local_88;
    if ((uVar10 != 0 | local_58) != 1) {
      return 0;
    }
  }
  if (uVar10 == 0) {
    return 0;
  }
  pcVar6 = (char *)(uVar7 + local_98);
  if (uVar10 == 1) {
    cVar8 = *pcVar6;
    if (cVar8 == '+') {
      return 0;
    }
    if (cVar8 == '-') {
      return 0;
    }
  }
  else {
    cVar8 = *pcVar6;
  }
  if (cVar8 == '-') {
    if (uVar10 < 0x11) {
      if (uVar10 == 1) {
        lVar12 = 0;
      }
      else {
        uVar7 = 1;
        lVar12 = 0;
        do {
          if (9 < (byte)pcVar6[uVar7] - 0x30) {
            return 0;
          }
          lVar12 = lVar12 * 10 - (ulonglong)((byte)pcVar6[uVar7] - 0x30);
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
    }
    else {
      uVar7 = 1;
      lVar12 = 0;
      do {
        lVar14 = lVar12 * 10;
        if (SEXT816(lVar14) != SEXT816(lVar12) * SEXT816(10)) {
          return 0;
        }
        uVar9 = (byte)pcVar6[uVar7] - 0x30;
        if (9 < uVar9) {
          return 0;
        }
        lVar12 = lVar14 - (ulonglong)uVar9;
        if (SBORROW8(lVar14,(ulonglong)uVar9)) {
          return 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
  }
  else {
    if (cVar8 == '+') {
      pcVar6 = pcVar6 + 1;
      uVar10 = uVar10 - 1;
    }
    lVar12 = 0;
    if (uVar10 < 0x10) {
      if (uVar10 != 0) {
        uVar7 = 0;
        do {
          if (9 < (byte)pcVar6[uVar7] - 0x30) {
            return 0;
          }
          lVar12 = (ulonglong)((byte)pcVar6[uVar7] - 0x30) + lVar12 * 10;
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
    }
    else {
      uVar7 = 0;
      do {
        lVar14 = lVar12 * 10;
        if (SEXT816(lVar14) != SEXT816(lVar12) * SEXT816(10)) {
          return 0;
        }
        uVar9 = (byte)pcVar6[uVar7] - 0x30;
        if (9 < uVar9) {
          return 0;
        }
        lVar12 = lVar14 + (ulonglong)uVar9;
        if (SCARRY8(lVar14,(ulonglong)uVar9)) {
          return 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
  }
  if (cStack_57 != '\0') {
    return 0;
  }
  local_98 = lVar4;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(&local_e0,&local_88);
  if ((int)local_e0 == 1) {
    uVar7 = local_d8 - local_98;
    lVar4 = local_d0._0_8_;
  }
  else {
    if (cStack_57 != '\0') {
      return 0;
    }
    cStack_57 = '\x01';
    uVar7 = local_90 - local_98;
    lVar4 = local_98;
    uVar3 = local_88;
    if ((uVar7 != 0 | local_58) != 1) {
      return 0;
    }
  }
  if (uVar7 == 0) {
    return 0;
  }
  pcVar6 = (char *)(uVar3 + local_98);
  if (uVar7 == 1) {
    cVar8 = *pcVar6;
    if (cVar8 == '+') {
      return 0;
    }
    if (cVar8 == '-') {
      return 0;
    }
  }
  else {
    cVar8 = *pcVar6;
  }
  if (cVar8 == '-') {
    if (uVar7 < 0x11) {
      if (uVar7 == 1) {
        lVar14 = 0;
      }
      else {
        uVar3 = 1;
        lVar14 = 0;
        do {
          if (9 < (byte)pcVar6[uVar3] - 0x30) {
            return 0;
          }
          lVar14 = lVar14 * 10 - (ulonglong)((byte)pcVar6[uVar3] - 0x30);
          uVar3 = uVar3 + 1;
        } while (uVar7 != uVar3);
      }
    }
    else {
      uVar3 = 1;
      lVar14 = 0;
      do {
        lVar13 = lVar14 * 10;
        if (SEXT816(lVar13) != SEXT816(lVar14) * SEXT816(10)) {
          return 0;
        }
        uVar9 = (byte)pcVar6[uVar3] - 0x30;
        if (9 < uVar9) {
          return 0;
        }
        lVar14 = lVar13 - (ulonglong)uVar9;
        if (SBORROW8(lVar13,(ulonglong)uVar9)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
    }
  }
  else {
    if (cVar8 == '+') {
      pcVar6 = pcVar6 + 1;
      uVar7 = uVar7 - 1;
    }
    lVar14 = 0;
    if (uVar7 < 0x10) {
      if (uVar7 != 0) {
        uVar3 = 0;
        do {
          if (9 < (byte)pcVar6[uVar3] - 0x30) {
            return 0;
          }
          lVar14 = (ulonglong)((byte)pcVar6[uVar3] - 0x30) + lVar14 * 10;
          uVar3 = uVar3 + 1;
        } while (uVar7 != uVar3);
      }
    }
    else {
      uVar3 = 0;
      do {
        lVar13 = lVar14 * 10;
        if (SEXT816(lVar13) != SEXT816(lVar14) * SEXT816(10)) {
          return 0;
        }
        uVar9 = (byte)pcVar6[uVar3] - 0x30;
        if (9 < uVar9) {
          return 0;
        }
        lVar14 = lVar13 + (ulonglong)uVar9;
        if (SCARRY8(lVar13,(ulonglong)uVar9)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
    }
  }
  local_98 = lVar4;
  lVar4 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_98);
  if (lVar4 != 0) {
    return 0;
  }
  lVar4 = param_1 + local_e8;
  uVar7 = param_2 - local_e8;
  if ((uVar7 != 0) && ((*(byte *)((param_1 - 1) + param_2) | 0x20) == 0x7a)) {
    uVar3 = uVar7 - 1;
    uVar7 = uVar3;
    local_d0._0_8_ = lVar4;
    goto LAB_0050ace0;
  }
  auVar15 = ::<str>::rfind::<[char_2:usize]>(lVar4);
  uVar3 = auVar15._8_8_;
  if ((auVar15._0_8_ & 1) == 0) {
    return 0;
  }
  uVar10 = uVar3 + 1;
  if ((uVar3 < uVar7) && ((uVar3 == 0 || (-0x41 < *(char *)(lVar4 + uVar3))))) {
    if (uVar7 == uVar10) {
LAB_0050afb4:
      cVar8 = *(char *)(lVar4 + uVar3);
      local_38 = lVar4;
      ::<str>::split_once::<char>(&local_e0,uVar10 + lVar4);
      uVar2 = local_d0._8_8_;
      uVar5 = local_d0._0_8_;
      if (local_e0 == 0) {
        return 0;
      }
      <i64>::from_ascii_radix(&local_e0,local_e0,local_d8);
      if ((char)local_e0 != '\0') {
        return 0;
      }
      local_40 = local_d8;
      <i64>::from_ascii_radix(&local_e0,uVar5,uVar2);
      if ((char)local_e0 == '\x01') {
        return 0;
      }
      if (0x3b < local_d8 || 0x17 < local_40) {
        return 0;
      }
      if (-0x41 < cVar8 || uVar3 == 0) {
        local_d0._0_8_ = local_38;
LAB_0050ace0:
        local_e0 = 0;
        local_c0 = 0;
        local_b0 = 0x2e0000002e;
        local_a8 = 1;
        local_a0 = 1;
        local_d8 = uVar3;
        local_d0._8_8_ = uVar3;
        local_b8 = uVar3;
        local_d0 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_e0,uVar7);
        local_d8 = local_d0._8_8_;
        if (local_d0._0_8_ != 0) {
          local_e0 = 0;
          local_c0 = 0;
          local_b0 = 0x3a0000003a;
          local_a8 = 1;
          local_a0 = 1;
          local_b8 = local_d8;
          lVar4 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_e0);
          if (lVar4 != 0) {
            <i64>::from_ascii_radix(local_50,lVar4);
            uVar7 = local_48;
            if (local_50[0] == '\0') {
              lVar4 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_e0);
              if (lVar4 != 0) {
                <i64>::from_ascii_radix(local_50,lVar4);
                uVar3 = local_48;
                if (local_50[0] == '\0') {
                  lVar4 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_e0);
                  if (lVar4 != 0) {
                    <i64>::from_ascii_radix(local_50,lVar4);
                    if (local_50[0] == '\0') {
                      lVar4 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next
                                        (&local_e0);
                      if ((((local_48 < 0x3d) && (uVar3 < 0x3c)) && (uVar7 < 0x18)) &&
                         (((lVar4 == 0 && (lVar14 - 1U < 0x1f)) &&
                          ((lVar12 - 1U < 0xc && (lVar11 - 0x7b2U < 0x83)))))) {
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return 0;
      }
      goto LAB_0050b0c7;
    }
    local_e8 = uVar7;
    if (*(char *)(lVar4 + uVar10) < -0x40) goto LAB_0050b099;
    if (uVar10 < uVar7) goto LAB_0050afb4;
  }
  else {
LAB_0050b099:
    (*(code *)PTR_slice_error_fail_00799408)(uVar10,uVar3,&PTR_s_src_protocol_rs_0078cf80);
  }
  (*(code *)PTR_slice_error_fail_00799408)(local_e8,uVar10,&PTR_s_src_protocol_rs_0078cf98);
LAB_0050b0c7:
  (*(code *)PTR_slice_error_fail_00799408)(uVar3,0,&PTR_s_src_protocol_rs_0078cfb0);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}


