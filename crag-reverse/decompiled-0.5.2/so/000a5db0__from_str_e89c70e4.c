// 000a5db0 from_str

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry as
   core[c0acaeba6ab4c2e0]::str::traits::FromStr>::from_str */

void __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::parse_running_mmaps::MapsEntry_as_core[c0acaeba6ab4c2e0]::str::traits::FromStr>
::from_str(undefined8 *param_1,char *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  char *pcVar14;
  bool bVar15;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_90 [8];
  ulonglong local_88;
  ulonglong local_80;
  char *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  char *local_38;
  
  local_48 = param_1;
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      if (param_2[lVar2] != ' ') {
        param_3 = param_3 - lVar2;
        local_78 = param_2 + lVar2;
        break;
      }
      lVar2 = lVar2 + 1;
      local_78 = param_2;
    } while (param_3 != lVar2);
    if (param_3 != 0) {
      lVar2 = 1;
      do {
        if (local_78[lVar2 + -1] == ' ') {
          local_70 = lVar2 + -1;
          if ((local_70 != 0) && (param_3 != lVar2)) {
            lVar13 = lVar2;
            goto LAB_000a5e50;
          }
          break;
        }
        bVar15 = lVar2 != param_3;
        lVar2 = lVar2 + 1;
      } while (bVar15);
    }
  }
  goto LAB_000a60a4;
  while( true ) {
    lVar13 = lVar13 + 1;
    lVar11 = lVar2;
    if (param_3 == lVar13) break;
LAB_000a5e50:
    lVar11 = lVar13;
    if (local_78[lVar13] != ' ') break;
  }
  if (param_3 - lVar11 != 0) {
    lVar13 = 1 - (param_3 - lVar11);
    lVar10 = 0;
    pcVar5 = local_78 + lVar11;
    do {
      pcVar8 = pcVar5 + 1;
      if (*pcVar5 == ' ') {
        if ((lVar10 != 0) && (lVar13 != 0)) {
          pcVar5 = pcVar8;
          lVar11 = -lVar13;
          goto LAB_000a5ec5;
        }
        break;
      }
      lVar13 = lVar13 + 1;
      lVar10 = lVar10 + -1;
      pcVar5 = pcVar8;
    } while (lVar13 != 1);
  }
  goto LAB_000a60a4;
  while( true ) {
    pcVar5 = pcVar5 + 1;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) break;
LAB_000a5ec5:
    if (*pcVar5 != ' ') goto LAB_000a5ed8;
  }
  pcVar5 = pcVar8;
  lVar11 = -lVar13;
LAB_000a5ed8:
  if (lVar11 != 0) {
    lVar13 = 1;
    do {
      if (pcVar5[lVar13 + -1] == ' ') {
        if ((lVar13 + -1 != 0) && (lVar10 = lVar13, lVar11 != lVar13)) goto LAB_000a5f27;
        break;
      }
      bVar15 = lVar13 != lVar11;
      lVar13 = lVar13 + 1;
    } while (bVar15);
  }
  goto LAB_000a60a4;
  while( true ) {
    lVar10 = lVar10 + 1;
    lVar9 = lVar13;
    if (lVar11 == lVar10) break;
LAB_000a5f27:
    lVar9 = lVar10;
    if (pcVar5[lVar10] != ' ') break;
  }
  if (lVar11 - lVar9 != 0) {
    lVar11 = 1 - (lVar11 - lVar9);
    lVar10 = 0;
    pcVar8 = pcVar5 + lVar9;
    do {
      pcVar3 = pcVar8 + 1;
      if (*pcVar8 == ' ') {
        if ((lVar10 != 0) && (lVar11 != 0)) {
          pcVar8 = pcVar3;
          uVar12 = -lVar11;
          goto LAB_000a5f97;
        }
        break;
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + -1;
      pcVar8 = pcVar3;
    } while (lVar11 != 1);
  }
  goto LAB_000a60a4;
  while( true ) {
    pcVar8 = pcVar8 + 1;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) break;
LAB_000a5f97:
    if (*pcVar8 != ' ') goto LAB_000a5faa;
  }
  pcVar8 = pcVar3;
  uVar12 = -lVar11;
LAB_000a5faa:
  if (uVar12 == 0) goto LAB_000a60a4;
  lVar11 = 0;
  uVar4 = 0;
  do {
    if (pcVar8[uVar4] == ' ') {
      if (uVar4 == 0) goto LAB_000a60a4;
      pcVar14 = pcVar8 + uVar4 + 1;
      pcVar3 = pcVar14;
      if (uVar12 - 1 == uVar4) goto LAB_000a6021;
      lVar11 = ~uVar4 + uVar12;
      pcVar3 = pcVar8 + uVar12;
      goto LAB_000a6005;
    }
    uVar4 = uVar4 + 1;
  } while (uVar12 != uVar4);
  pcVar14 = Elf64_Ehdr_00000000.e_ident_magic_str;
  goto LAB_000a6024;
  while( true ) {
    pcVar14 = pcVar14 + 1;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) break;
LAB_000a6005:
    if ((0x20 < (ulonglong)(byte)*pcVar14) ||
       ((0x100003600U >> ((ulonglong)(byte)*pcVar14 & 0x3f) & 1) == 0)) goto LAB_000a6024;
  }
LAB_000a6021:
  lVar11 = 0;
  pcVar14 = pcVar3;
LAB_000a6024:
  local_68 = 0;
  local_50 = 1;
  local_58 = 0x2d0000002d;
  local_60 = local_70;
  local_38 = local_78;
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_90,&local_78);
  if ((local_90[0] != '\0') && (local_88 != 0)) {
    if (local_88 == 1) {
      cVar6 = *local_38;
      if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_000a60a4;
    }
    else {
      cVar6 = *local_38;
    }
    uVar12 = (ulonglong)(cVar6 == '+');
    if (local_88 - uVar12 < 0x11) {
      if (local_88 == uVar12) {
        local_40 = 0;
      }
      else {
        local_40 = 0;
        lVar10 = 0;
        do {
          bVar1 = local_38[lVar10 + uVar12];
          uVar7 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar7 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar7) goto LAB_000a60a4;
          local_40 = (ulonglong)uVar7 | local_40 << 4;
          lVar10 = lVar10 + 1;
        } while (lVar10 != local_88 + -uVar12);
      }
LAB_000a61c7:
      if (~local_80 + lVar2 != 0) {
        if (~local_80 + lVar2 == 1) {
          cVar6 = local_38[local_80];
          if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_000a60a4;
        }
        else {
          cVar6 = local_38[local_80];
        }
        uVar12 = (ulonglong)(cVar6 == '+');
        lVar10 = -uVar12;
        if (((lVar10 - local_80) + lVar2) - 1 < 0x11) {
          if ((lVar10 - local_80) + lVar2 == 1) {
            uVar12 = 0;
          }
          else {
            local_38 = local_38 + uVar12;
            uVar12 = 0;
            do {
              bVar1 = local_38[local_80];
              uVar7 = bVar1 - 0x30;
              if (0x39 < bVar1) {
                uVar7 = (bVar1 - 0x41 & 0xffffffdf) + 10;
              }
              if (0xf < uVar7) goto LAB_000a60a4;
              uVar12 = (ulonglong)uVar7 | uVar12 << 4;
              local_80 = local_80 + 1;
            } while ((lVar10 + lVar2) - 1U != local_80);
          }
LAB_000a62e1:
          <u64>::from_ascii_radix(&local_78,pcVar5,lVar13 + -1);
          lVar2 = local_70;
          if ((char)local_78 != '\x01') {
            <u8_as<[_]>::to_vec_in::ConvertVec>::to_vec::<alloc[12e961f32105355]::alloc::Global>
                      (&local_a8,pcVar14,lVar11);
            local_48[2] = local_98;
            *local_48 = local_a8;
            local_48[1] = uStack_a0;
            local_48[3] = local_40;
            local_48[4] = uVar12;
            local_48[5] = lVar2;
            return;
          }
        }
        else {
          local_38 = local_38 + uVar12;
          uVar12 = 0;
          do {
            if ((lVar10 + lVar2) - 1U == local_80) goto LAB_000a62e1;
            if (0xfffffffffffffff < uVar12) break;
            uVar4 = uVar12 * 0x10;
            bVar1 = local_38[local_80];
            uVar7 = bVar1 - 0x30;
            if (0x39 < bVar1) {
              uVar7 = (bVar1 - 0x41 & 0xffffffdf) + 10;
            }
            uVar12 = uVar7 + uVar4;
            local_80 = local_80 + 1;
          } while (!CARRY8((ulonglong)uVar7,uVar4) && uVar7 < 0x10);
        }
      }
    }
    else {
      local_40 = 0;
      lVar10 = 0;
      do {
        if (lVar10 == local_88 + -uVar12) goto LAB_000a61c7;
        if (0xfffffffffffffff < local_40) break;
        uVar4 = local_40 * 0x10;
        bVar1 = local_38[lVar10 + uVar12];
        uVar7 = bVar1 - 0x30;
        if (0x39 < bVar1) {
          uVar7 = (bVar1 - 0x41 & 0xffffffdf) + 10;
        }
        local_40 = uVar7 + uVar4;
        lVar10 = lVar10 + 1;
      } while (!CARRY8((ulonglong)uVar7,uVar4) && uVar7 < 0x10);
    }
  }
LAB_000a60a4:
  local_48[1] = "invalid map entryEmptyInvalidDigitPosOverflowNegOverflowNotAPowerOfTwo";
  local_48[2] = 0x11;
  *local_48 = 0xffffffffffffffff;
  return;
}


