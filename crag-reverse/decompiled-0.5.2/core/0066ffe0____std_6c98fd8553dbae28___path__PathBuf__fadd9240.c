// 0066ffe0 <&std[6c98fd8553dbae28]::path::PathBuf>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[6c98fd8553dbae28]::hash::random::RandomState as
   core[c0acaeba6ab4c2e0]::hash::BuildHasher>::hash_one::<&std[6c98fd8553dbae28]::path::PathBuf> */

ulonglong __rustcall
<std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>::
hash_one::<&std[6c98fd8553dbae28]::path::PathBuf>(undefined1 (*param_1) [16],longlong param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  
  local_58 = *param_1;
  auVar11._0_8_ = local_58._0_8_;
  auVar11._8_4_ = local_58._0_4_;
  auVar11._12_4_ = local_58._4_4_;
  local_78 = auVar11 ^ _DAT_00183170;
  auVar12._0_8_ = local_58._8_8_;
  auVar12._8_4_ = local_58._8_4_;
  auVar12._12_4_ = local_58._12_4_;
  local_68 = auVar12 ^ _DAT_00182bf0;
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  pcVar2 = *(char **)(param_2 + 8);
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  uVar5 = 0;
  uVar9 = 0;
  if (uVar3 == 0) goto LAB_006701ea;
  if (uVar3 == 1) {
    uVar4 = 1;
    uVar9 = 0;
    uVar5 = 0;
    if (*pcVar2 != '/') goto LAB_006701ea;
    goto LAB_006701e2;
  }
  if (uVar3 == 2) {
    lVar10 = 1;
    uVar7 = 0;
    uVar9 = 0;
    uVar5 = 0;
    if (*pcVar2 != '/') goto LAB_00670165;
LAB_00670149:
    cVar1 = pcVar2[lVar10];
    if (uVar3 - lVar10 == 1) {
      lVar6 = 1;
      if (cVar1 != '.') {
LAB_00670181:
        lVar6 = 0;
      }
    }
    else if ((cVar1 != '.') || (lVar6 = 1, pcVar2[lVar10 + 1] != '/')) goto LAB_00670181;
    uVar5 = lVar6 + lVar10;
  }
  else {
    uVar5 = 0;
    uVar9 = 0;
    uVar7 = 0;
    do {
      if (pcVar2[uVar7] == '/') {
        if (uVar5 < uVar7) {
          uVar9 = (uVar9 - uVar5) + uVar7;
          uVar9 = uVar9 << 0x3e | uVar9 >> 2;
          <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
          ::write(local_78,pcVar2 + uVar5);
        }
        if (uVar3 - 2 == uVar7) {
          lVar10 = 1;
          if (pcVar2[uVar7 + 1] != '.') {
LAB_006700b0:
            lVar10 = 0;
          }
        }
        else if ((pcVar2[uVar7 + 1] != '.') || (lVar10 = 1, pcVar2[uVar7 + 2] != '/'))
        goto LAB_006700b0;
        uVar5 = lVar10 + uVar7 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 - 2 != uVar7);
    lVar10 = uVar3 - 1;
    if (pcVar2[uVar7] == '/') {
      if (uVar5 <= uVar3 - 3) {
        uVar9 = (uVar9 - uVar5) + uVar7;
        uVar9 = uVar9 << 0x3e | uVar9 >> 2;
        <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
        ::write(local_78,pcVar2 + uVar5,uVar7 - uVar5);
      }
      goto LAB_00670149;
    }
LAB_00670165:
    cVar1 = pcVar2[lVar10];
  }
  if (cVar1 != '/') goto LAB_006701ea;
  uVar4 = uVar7 + 2;
  if (uVar5 <= uVar7) {
    uVar9 = uVar9 + (lVar10 - uVar5);
    uVar9 = uVar9 << 0x3e | uVar9 >> 2;
    <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
    ::write(local_78,pcVar2 + uVar5,lVar10 - uVar5);
  }
  if (uVar3 - uVar4 == 1) {
    lVar10 = 1;
    if (pcVar2[uVar4] != '.') goto LAB_006701e2;
  }
  else {
    if (uVar3 == uVar4) {
      uVar4 = uVar3;
    }
    else if ((pcVar2[uVar4] == '.') && (lVar10 = 1, pcVar2[uVar7 + 3] == '/')) goto LAB_006701e4;
LAB_006701e2:
    lVar10 = 0;
  }
LAB_006701e4:
  uVar5 = uVar4 + lVar10;
LAB_006701ea:
  lVar10 = uVar3 - uVar5;
  if (uVar5 <= uVar3 && lVar10 != 0) {
    uVar9 = uVar9 + lVar10 << 0x3e | uVar9 + lVar10 >> 2;
    <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
    ::write(local_78,pcVar2 + uVar5,lVar10);
  }
  local_80 = uVar9;
  <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
  ::write(local_78,&local_80,8);
  uVar8 = local_48._0_8_ << 0x38 | local_48._8_8_;
  uVar5 = local_68._8_8_ ^ uVar8;
  uVar3 = local_78._0_8_ + local_68._0_8_;
  uVar4 = (local_68._0_8_ << 0xd | (ulonglong)local_68._0_8_ >> 0x33) ^ uVar3;
  uVar9 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ local_78._8_8_ + uVar5;
  uVar7 = local_78._8_8_ + uVar5 + uVar4;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar9;
  uVar4 = (uVar4 << 0x11 | uVar4 >> 0x2f) ^ uVar7;
  uVar5 = (uVar9 << 0x15 | uVar9 >> 0x2b) ^ uVar3;
  uVar3 = (uVar3 ^ uVar8) + uVar4;
  uVar7 = ((uVar7 << 0x20 | uVar7 >> 0x20) ^ 0xff) + uVar5;
  uVar9 = (uVar4 << 0xd | uVar4 >> 0x33) ^ uVar3;
  uVar5 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar7;
  uVar7 = uVar7 + uVar9;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar5;
  uVar9 = (uVar9 << 0x11 | uVar9 >> 0x2f) ^ uVar7;
  uVar5 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar3;
  uVar3 = uVar3 + uVar9;
  uVar4 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar5;
  uVar9 = (uVar9 << 0xd | uVar9 >> 0x33) ^ uVar3;
  uVar5 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar4;
  uVar4 = uVar4 + uVar9;
  uVar3 = (uVar3 << 0x20 | uVar3 >> 0x20) + uVar5;
  uVar9 = (uVar9 << 0x11 | uVar9 >> 0x2f) ^ uVar4;
  uVar5 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar3;
  uVar4 = (uVar4 << 0x20 | uVar4 >> 0x20) + uVar5;
  uVar9 = (uVar9 << 0xd | uVar9 >> 0x33) ^ uVar3 + uVar9;
  uVar3 = (uVar5 << 0x10 | uVar5 >> 0x30) ^ uVar4;
  uVar4 = uVar4 + uVar9;
  return (uVar4 << 0x20 | uVar4 >> 0x20) ^ (uVar9 << 0x11 | uVar9 >> 0x2f) ^
         (uVar3 << 0x15 | uVar3 >> 0x2b) ^ uVar4;
}


