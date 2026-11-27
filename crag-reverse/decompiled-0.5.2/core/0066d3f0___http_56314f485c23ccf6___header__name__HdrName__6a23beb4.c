// 0066d3f0 <http[56314f485c23ccf6]::header::name::HdrName>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* http[56314f485c23ccf6]::header::map::hash_elem_using::<http[56314f485c23ccf6]::header::name::HdrName>
    */

uint __rustcall
http[56314f485c23ccf6]::header::map::hash_elem_using::
<http[56314f485c23ccf6]::header::name::HdrName>(int *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  
  if (*param_1 != 2) {
    bVar9 = param_2[0x10];
    uVar10 = (bVar9 != 2 ^ 0x84222325) * 0xaef4a21;
    if (bVar9 == 2) {
      uVar10 = (*param_2 ^ 0x281a39c5) * 0xaef4a21;
    }
    else {
      pbVar14 = *(byte **)param_2;
      uVar11 = *(ulonglong *)(param_2 + 8);
      pbVar8 = pbVar14 + uVar11;
      if ((bVar9 & 1) == 0) {
        if (uVar11 != 0) {
          uVar12 = uVar11 & 3;
          if (uVar12 != 0) {
            do {
              uVar10 = ((byte)""[*pbVar14] ^ uVar10) * 0x1b3;
              pbVar14 = pbVar14 + 1;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (3 < uVar11) {
            do {
              uVar10 = ((uint)(byte)""[pbVar14[3]] ^
                       ((uint)(byte)""[pbVar14[2]] ^
                       ((uint)(byte)""[pbVar14[1]] ^ ((byte)""[*pbVar14] ^ uVar10) * 0x1b3) * 0x1b3)
                       * 0x1b3) * 0x1b3;
              pbVar14 = pbVar14 + 4;
            } while (pbVar14 != pbVar8);
          }
        }
      }
      else if (uVar11 != 0) {
        for (uVar12 = uVar11 & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
          bVar9 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          uVar10 = (bVar9 ^ uVar10) * 0x1b3;
        }
        if (7 < uVar11) {
          do {
            bVar9 = *pbVar14;
            pbVar1 = pbVar14 + 1;
            pbVar2 = pbVar14 + 2;
            pbVar3 = pbVar14 + 3;
            pbVar4 = pbVar14 + 4;
            pbVar5 = pbVar14 + 5;
            pbVar6 = pbVar14 + 6;
            pbVar7 = pbVar14 + 7;
            pbVar14 = pbVar14 + 8;
            uVar10 = ((uint)*pbVar7 ^
                     ((uint)*pbVar6 ^
                     ((uint)*pbVar5 ^
                     ((uint)*pbVar4 ^
                     ((uint)*pbVar3 ^
                     ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar9 ^ uVar10) * 0x1b3) * 0x1b3) * 0x1b3) *
                     0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
          } while (pbVar14 != pbVar8);
        }
      }
    }
    goto LAB_0066d5e3;
  }
  local_58 = *(undefined1 (*) [16])(param_1 + 2);
  auVar21._0_8_ = local_58._0_8_;
  auVar21._8_4_ = local_58._0_4_;
  auVar21._12_4_ = local_58._4_4_;
  local_78 = auVar21 ^ _DAT_00183170;
  auVar22._0_8_ = local_58._8_8_;
  auVar22._8_4_ = local_58._8_4_;
  auVar22._12_4_ = local_58._12_4_;
  local_68 = auVar22 ^ _DAT_00182bf0;
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  bVar9 = param_2[0x10];
  local_80 = (ulonglong)(bVar9 != 2);
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_78,&local_80,8);
  if (bVar9 == 2) {
    local_80 = (ulonglong)*param_2;
    puVar18 = &local_80;
    lVar15 = 8;
LAB_0066d4f0:
    <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
    ::write(local_78,puVar18,lVar15);
  }
  else {
    puVar18 = *(ulonglong **)param_2;
    lVar15 = *(longlong *)(param_2 + 8);
    if ((bVar9 & 1) != 0) goto LAB_0066d4f0;
    if (lVar15 != 0) {
      lVar17 = 0;
      do {
        local_80 = CONCAT71(local_80._1_7_,""[*(byte *)((longlong)puVar18 + lVar17)]);
        <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
        ::write(local_78,&local_80,1);
        lVar17 = lVar17 + 1;
      } while (lVar15 != lVar17);
    }
  }
  uVar20 = local_48._0_8_ << 0x38 | local_48._8_8_;
  uVar12 = local_68._8_8_ ^ uVar20;
  uVar19 = local_78._0_8_ + local_68._0_8_;
  uVar11 = (local_68._0_8_ << 0xd | (ulonglong)local_68._0_8_ >> 0x33) ^ uVar19;
  uVar13 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ local_78._8_8_ + uVar12;
  uVar16 = local_78._8_8_ + uVar12 + uVar11;
  uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar13;
  uVar11 = (uVar11 << 0x11 | uVar11 >> 0x2f) ^ uVar16;
  uVar12 = (uVar13 << 0x15 | uVar13 >> 0x2b) ^ uVar19;
  uVar19 = (uVar19 ^ uVar20) + uVar11;
  uVar13 = ((uVar16 << 0x20 | uVar16 >> 0x20) ^ 0xff) + uVar12;
  uVar11 = (uVar11 << 0xd | uVar11 >> 0x33) ^ uVar19;
  uVar12 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ uVar13;
  uVar13 = uVar13 + uVar11;
  uVar16 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar12;
  uVar11 = (uVar11 << 0x11 | uVar11 >> 0x2f) ^ uVar13;
  uVar12 = (uVar12 << 0x15 | uVar12 >> 0x2b) ^ uVar16;
  uVar16 = uVar16 + uVar11;
  uVar13 = (uVar13 << 0x20 | uVar13 >> 0x20) + uVar12;
  uVar11 = (uVar11 << 0xd | uVar11 >> 0x33) ^ uVar16;
  uVar12 = (uVar12 << 0x10 | uVar12 >> 0x30) ^ uVar13;
  uVar13 = uVar13 + uVar11;
  uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar12;
  uVar11 = (uVar11 << 0x11 | uVar11 >> 0x2f) ^ uVar13;
  uVar12 = (uVar12 << 0x15 | uVar12 >> 0x2b) ^ uVar16;
  lVar15 = (uVar13 << 0x20 | uVar13 >> 0x20) + uVar12;
  uVar11 = (uVar11 << 0xd | uVar11 >> 0x33) ^ uVar16 + uVar11;
  lVar17 = lVar15 + uVar11;
  uVar10 = (uint)((ulonglong)lVar17 >> 0x20) ^ (uint)lVar17 ^
           ((uint)(uVar12 >> 0x10) ^ (uint)((ulonglong)lVar15 >> 0x20)) >> 0xb ^
           (uint)(uVar11 >> 0x2f);
LAB_0066d5e3:
  return uVar10 & 0x7fff;
}


