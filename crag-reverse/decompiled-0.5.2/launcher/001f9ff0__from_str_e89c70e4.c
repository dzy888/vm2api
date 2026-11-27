// 001f9ff0 from_str

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
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar15;
  bool bVar16;
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
            lVar14 = lVar2;
            goto LAB_001fa090;
          }
          break;
        }
        bVar16 = lVar2 != param_3;
        lVar2 = lVar2 + 1;
      } while (bVar16);
    }
  }
  goto LAB_001fa2e4;
  while( true ) {
    lVar14 = lVar14 + 1;
    lVar12 = lVar2;
    if (param_3 == lVar14) break;
LAB_001fa090:
    lVar12 = lVar14;
    if (local_78[lVar14] != ' ') break;
  }
  if (param_3 - lVar12 != 0) {
    lVar14 = 1 - (param_3 - lVar12);
    lVar11 = 0;
    pcVar5 = local_78 + lVar12;
    do {
      pcVar9 = pcVar5 + 1;
      if (*pcVar5 == ' ') {
        if ((lVar11 != 0) && (lVar14 != 0)) {
          pcVar5 = pcVar9;
          lVar12 = -lVar14;
          goto LAB_001fa105;
        }
        break;
      }
      lVar14 = lVar14 + 1;
      lVar11 = lVar11 + -1;
      pcVar5 = pcVar9;
    } while (lVar14 != 1);
  }
  goto LAB_001fa2e4;
  while( true ) {
    pcVar5 = pcVar5 + 1;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) break;
LAB_001fa105:
    if (*pcVar5 != ' ') goto LAB_001fa118;
  }
  pcVar5 = pcVar9;
  lVar12 = -lVar14;
LAB_001fa118:
  if (lVar12 != 0) {
    lVar14 = 1;
    do {
      if (pcVar5[lVar14 + -1] == ' ') {
        if ((lVar14 + -1 != 0) && (lVar11 = lVar14, lVar12 != lVar14)) goto LAB_001fa167;
        break;
      }
      bVar16 = lVar14 != lVar12;
      lVar14 = lVar14 + 1;
    } while (bVar16);
  }
  goto LAB_001fa2e4;
  while( true ) {
    lVar11 = lVar11 + 1;
    lVar10 = lVar14;
    if (lVar12 == lVar11) break;
LAB_001fa167:
    lVar10 = lVar11;
    if (pcVar5[lVar11] != ' ') break;
  }
  if (lVar12 - lVar10 != 0) {
    lVar12 = 1 - (lVar12 - lVar10);
    lVar11 = 0;
    pcVar9 = pcVar5 + lVar10;
    do {
      pcVar3 = pcVar9 + 1;
      if (*pcVar9 == ' ') {
        if ((lVar11 != 0) && (lVar12 != 0)) {
          pcVar9 = pcVar3;
          uVar13 = -lVar12;
          goto LAB_001fa1d7;
        }
        break;
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + -1;
      pcVar9 = pcVar3;
    } while (lVar12 != 1);
  }
  goto LAB_001fa2e4;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) break;
LAB_001fa1d7:
    if (*pcVar9 != ' ') goto LAB_001fa1ea;
  }
  pcVar9 = pcVar3;
  uVar13 = -lVar12;
LAB_001fa1ea:
  if (uVar13 == 0) goto LAB_001fa2e4;
  lVar12 = 0;
  uVar4 = 0;
  do {
    if (pcVar9[uVar4] == ' ') {
      if (uVar4 == 0) goto LAB_001fa2e4;
      pbVar15 = (byte *)(pcVar9 + uVar4 + 1);
      pbVar7 = pbVar15;
      if (uVar13 - 1 == uVar4) goto LAB_001fa261;
      lVar12 = ~uVar4 + uVar13;
      pbVar7 = (byte *)(pcVar9 + uVar13);
      goto LAB_001fa245;
    }
    uVar4 = uVar4 + 1;
  } while (uVar13 != uVar4);
  pbVar15 = (byte *)0x1;
  goto LAB_001fa264;
  while( true ) {
    pbVar15 = pbVar15 + 1;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) break;
LAB_001fa245:
    if ((0x20 < (ulonglong)*pbVar15) || ((0x100003600U >> ((ulonglong)*pbVar15 & 0x3f) & 1) == 0))
    goto LAB_001fa264;
  }
LAB_001fa261:
  lVar12 = 0;
  pbVar15 = pbVar7;
LAB_001fa264:
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
      if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_001fa2e4;
    }
    else {
      cVar6 = *local_38;
    }
    uVar13 = (ulonglong)(cVar6 == '+');
    if (local_88 - uVar13 < 0x11) {
      if (local_88 == uVar13) {
        local_40 = 0;
      }
      else {
        local_40 = 0;
        lVar11 = 0;
        do {
          bVar1 = local_38[lVar11 + uVar13];
          uVar8 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar8 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar8) goto LAB_001fa2e4;
          local_40 = (ulonglong)uVar8 | local_40 << 4;
          lVar11 = lVar11 + 1;
        } while (lVar11 != local_88 + -uVar13);
      }
LAB_001fa407:
      if (~local_80 + lVar2 != 0) {
        if (~local_80 + lVar2 == 1) {
          cVar6 = local_38[local_80];
          if ((cVar6 == '+') || (cVar6 == '-')) goto LAB_001fa2e4;
        }
        else {
          cVar6 = local_38[local_80];
        }
        uVar13 = (ulonglong)(cVar6 == '+');
        lVar11 = -uVar13;
        if (((lVar11 - local_80) + lVar2) - 1 < 0x11) {
          if ((lVar11 - local_80) + lVar2 == 1) {
            uVar13 = 0;
          }
          else {
            local_38 = local_38 + uVar13;
            uVar13 = 0;
            do {
              bVar1 = local_38[local_80];
              uVar8 = bVar1 - 0x30;
              if (0x39 < bVar1) {
                uVar8 = (bVar1 - 0x41 & 0xffffffdf) + 10;
              }
              if (0xf < uVar8) goto LAB_001fa2e4;
              uVar13 = (ulonglong)uVar8 | uVar13 << 4;
              local_80 = local_80 + 1;
            } while ((lVar11 + lVar2) - 1U != local_80);
          }
LAB_001fa521:
          <u64>::from_ascii_radix(&local_78,pcVar5,lVar14 + -1);
          lVar2 = local_70;
          if ((char)local_78 != '\x01') {
            <u8_as<[_]>::to_vec_in::ConvertVec>::to_vec::<alloc[12e961f32105355]::alloc::Global>
                      (&local_a8,pbVar15,lVar12);
            local_48[2] = local_98;
            *local_48 = local_a8;
            local_48[1] = uStack_a0;
            local_48[3] = local_40;
            local_48[4] = uVar13;
            local_48[5] = lVar2;
            return;
          }
        }
        else {
          local_38 = local_38 + uVar13;
          uVar13 = 0;
          do {
            if ((lVar11 + lVar2) - 1U == local_80) goto LAB_001fa521;
            if (0xfffffffffffffff < uVar13) break;
            uVar4 = uVar13 * 0x10;
            bVar1 = local_38[local_80];
            uVar8 = bVar1 - 0x30;
            if (0x39 < bVar1) {
              uVar8 = (bVar1 - 0x41 & 0xffffffdf) + 10;
            }
            uVar13 = uVar8 + uVar4;
            local_80 = local_80 + 1;
          } while (!CARRY8((ulonglong)uVar8,uVar4) && uVar8 < 0x10);
        }
      }
    }
    else {
      local_40 = 0;
      lVar11 = 0;
      do {
        if (lVar11 == local_88 + -uVar13) goto LAB_001fa407;
        if (0xfffffffffffffff < local_40) break;
        uVar4 = local_40 * 0x10;
        bVar1 = local_38[lVar11 + uVar13];
        uVar8 = bVar1 - 0x30;
        if (0x39 < bVar1) {
          uVar8 = (bVar1 - 0x41 & 0xffffffdf) + 10;
        }
        local_40 = uVar8 + uVar4;
        lVar11 = lVar11 + 1;
      } while (!CARRY8((ulonglong)uVar8,uVar4) && uVar8 < 0x10);
    }
  }
LAB_001fa2e4:
  local_48[1] = "invalid map entry";
  local_48[2] = 0x11;
  *local_48 = 0xffffffffffffffff;
  return;
}


