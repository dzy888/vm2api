// 0066d130 <http[56314f485c23ccf6]::header::name::HeaderName>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* http[56314f485c23ccf6]::header::map::hash_elem_using::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

uint __rustcall
http[56314f485c23ccf6]::header::map::hash_elem_using::
<http[56314f485c23ccf6]::header::name::HeaderName>(int *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  
  if (*param_1 == 2) {
    local_38 = *(undefined1 (*) [16])(param_1 + 2);
    auVar21._0_8_ = local_38._0_8_;
    auVar21._8_4_ = local_38._0_4_;
    auVar21._12_4_ = local_38._4_4_;
    local_58 = auVar21 ^ _DAT_00183170;
    auVar22._0_8_ = local_38._8_8_;
    auVar22._8_4_ = local_38._8_4_;
    auVar22._12_4_ = local_38._12_4_;
    local_48 = auVar22 ^ _DAT_00182bf0;
    local_28 = (undefined1  [16])0x0;
    local_18 = 0;
    lVar15 = *param_2;
    local_60 = (ulonglong)(lVar15 != 0);
    <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
    ::write(local_58,&local_60,8);
    if (lVar15 == 0) {
      local_60 = (ulonglong)*(byte *)(param_2 + 1);
      puVar18 = &local_60;
      lVar15 = 8;
    }
    else {
      puVar18 = (ulonglong *)param_2[1];
      lVar15 = param_2[2];
    }
    <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
    ::write(local_58,puVar18,lVar15);
    uVar20 = local_28._0_8_ << 0x38 | local_28._8_8_;
    uVar12 = local_48._8_8_ ^ uVar20;
    uVar19 = local_58._0_8_ + local_48._0_8_;
    uVar11 = (local_48._0_8_ << 0xd | (ulonglong)local_48._0_8_ >> 0x33) ^ uVar19;
    uVar13 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ local_58._8_8_ + uVar12;
    uVar14 = local_58._8_8_ + uVar12 + uVar11;
    uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar13;
    uVar11 = (uVar11 << 0x11 | uVar11 >> 0x2f) ^ uVar14;
    uVar12 = (uVar13 << 0x15 | uVar13 >> 0x2b) ^ uVar19;
    uVar19 = (uVar19 ^ uVar20) + uVar11;
    uVar13 = ((uVar14 << 0x20 | uVar14 >> 0x20) ^ 0xff) + uVar12;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x33) ^ uVar19;
    uVar12 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ uVar13;
    uVar13 = uVar13 + uVar11;
    uVar14 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar12;
    uVar11 = (uVar11 << 0x11 | uVar11 >> 0x2f) ^ uVar13;
    uVar12 = (uVar12 << 0x15 | uVar12 >> 0x2b) ^ uVar14;
    uVar14 = uVar14 + uVar11;
    uVar13 = (uVar13 << 0x20 | uVar13 >> 0x20) + uVar12;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x33) ^ uVar14;
    uVar12 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ uVar13;
    uVar13 = uVar13 + uVar11;
    uVar14 = (uVar14 << 0x20 | uVar14 >> 0x20) + uVar12;
    uVar11 = (uVar11 << 0x11 | uVar11 >> 0x2f) ^ uVar13;
    uVar12 = (uVar12 << 0x15 | uVar12 >> 0x2b) ^ uVar14;
    lVar15 = (uVar13 << 0x20 | uVar13 >> 0x20) + uVar12;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x33) ^ uVar14 + uVar11;
    lVar16 = lVar15 + uVar11;
    uVar10 = (uint)((ulonglong)lVar16 >> 0x20) ^ (uint)lVar16 ^
             ((uint)(uVar12 >> 0x10) ^ (uint)((ulonglong)lVar15 >> 0x20)) >> 0xb ^
             (uint)(uVar11 >> 0x2f);
  }
  else {
    uVar10 = (*param_2 != 0 ^ 0x84222325) * 0xaef4a21;
    if (*param_2 == 0) {
      uVar10 = (*(byte *)(param_2 + 1) ^ 0x281a39c5) * 0xaef4a21;
    }
    else {
      uVar11 = param_2[2];
      if (uVar11 != 0) {
        pbVar9 = (byte *)param_2[1];
        uVar12 = uVar11 & 7;
        pbVar17 = pbVar9;
        if (uVar12 != 0) {
          do {
            bVar8 = *pbVar17;
            pbVar17 = pbVar17 + 1;
            uVar10 = (bVar8 ^ uVar10) * 0x1b3;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (7 < uVar11) {
          do {
            bVar8 = *pbVar17;
            pbVar1 = pbVar17 + 1;
            pbVar2 = pbVar17 + 2;
            pbVar3 = pbVar17 + 3;
            pbVar4 = pbVar17 + 4;
            pbVar5 = pbVar17 + 5;
            pbVar6 = pbVar17 + 6;
            pbVar7 = pbVar17 + 7;
            pbVar17 = pbVar17 + 8;
            uVar10 = ((uint)*pbVar7 ^
                     ((uint)*pbVar6 ^
                     ((uint)*pbVar5 ^
                     ((uint)*pbVar4 ^
                     ((uint)*pbVar3 ^
                     ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar8 ^ uVar10) * 0x1b3) * 0x1b3) * 0x1b3) *
                     0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
          } while (pbVar17 != pbVar9 + uVar11);
        }
      }
    }
  }
  return uVar10 & 0x7fff;
}


