// 0016f830 parse_content_length

/* craggemini[b21da2d71f2da7a3]::mcp_stdio::parse_content_length */

undefined8 __rustcall
craggemini[b21da2d71f2da7a3]::mcp_stdio::parse_content_length(longlong param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  int local_60 [2];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_38 = 0;
  local_20 = 1;
  local_28 = 0x3a0000003a;
  local_48 = param_1;
  local_40 = param_2;
  local_30 = param_2;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_60,&local_48);
  if (local_60[0] == 1) {
    auVar9 = <str>::trim_matches::<<char>::is_whitespace>(param_1,local_58);
    auVar9._0_8_ = auVar9._0_8_;
    if (((((auVar9._8_8_ == 0xe) &&
          ((byte)(((byte)(*auVar9._0_8_ + 0xbf) < 0x1a) << 5 | *auVar9._0_8_) == 99)) &&
         ((byte)(((byte)(auVar9._0_8_[1] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[1]) == 0x6f)) &&
        ((((byte)(((byte)(auVar9._0_8_[2] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[2]) == 0x6e &&
          ((byte)(((byte)(auVar9._0_8_[3] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[3]) == 0x74)) &&
         (((byte)(((byte)(auVar9._0_8_[4] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[4]) == 0x65 &&
          (((byte)(((byte)(auVar9._0_8_[5] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[5]) == 0x6e &&
           ((byte)(((byte)(auVar9._0_8_[6] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[6]) == 0x74))))))))
       && (((byte)(((byte)(auVar9._0_8_[7] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[7]) == 0x2d &&
           ((((((byte)(((byte)(auVar9._0_8_[8] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[8]) == 0x6c &&
               ((byte)(((byte)(auVar9._0_8_[9] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[9]) == 0x65)) &&
              ((byte)(((byte)(auVar9._0_8_[10] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[10]) == 0x6e)) &&
             (((byte)(((byte)(auVar9._0_8_[0xb] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[0xb]) == 0x67 &&
              ((byte)(((byte)(auVar9._0_8_[0xc] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[0xc]) == 0x74)))
             ) && ((byte)(((byte)(auVar9._0_8_[0xd] + 0xbf) < 0x1a) << 5 | auVar9._0_8_[0xd]) ==
                   0x68)))))) {
      auVar9 = <str>::trim_matches::<<char>::is_whitespace>(param_1 + local_50,param_2 - local_50);
      uVar5 = auVar9._8_8_;
      pcVar1 = auVar9._0_8_;
      if (uVar5 == 0) {
        return 0;
      }
      if (uVar5 == 1) {
        cVar7 = *pcVar1;
        if (cVar7 == '+') {
          return 0;
        }
        if (cVar7 == '-') {
          return 0;
        }
      }
      else {
        cVar7 = *pcVar1;
      }
      uVar2 = (ulonglong)(cVar7 == '+');
      if (uVar5 - uVar2 < 0x11) {
        if (uVar5 != uVar2) {
          lVar3 = 0;
          do {
            if (9 < (byte)pcVar1[lVar3 + uVar2] - 0x30) {
              return 0;
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 != uVar5 + -uVar2);
        }
      }
      else {
        lVar3 = 0;
        uVar6 = 0;
        while (lVar3 != uVar5 + -uVar2) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar6;
          uVar4 = SUB168(auVar9 * ZEXT816(10),0);
          if (SUB168(auVar9 * ZEXT816(10),8) != 0) {
            return 0;
          }
          uVar8 = (byte)pcVar1[lVar3 + uVar2] - 0x30;
          uVar6 = uVar4 + uVar8;
          if (9 < uVar8) {
            return 0;
          }
          lVar3 = lVar3 + 1;
          if (CARRY8(uVar4,(ulonglong)uVar8)) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}


