// 0075f5a0 glibc_version

/* std[6c98fd8553dbae28]::sys::pal::unix::conf::glibc_version */

void __rustcall std[6c98fd8553dbae28]::sys::pal::unix::conf::glibc_version(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  char *pcVar13;
  bool bVar14;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90 [2];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined1 local_40;
  byte local_38;
  char cStack_37;
  
  uVar4 = (*(code *)PTR_gnu_get_libc_version_0079b0e8)();
  (*(code *)PTR_strlen_0079aa38)();
  (*(code *)PTR_to_str_0079b0f0)();
  if (local_a8 == 1) {
    *param_1 = 0;
    return;
  }
  local_78 = 0;
  local_70 = local_98;
  local_68 = local_a0;
  local_58 = 0;
  local_48 = 0x2e0000002e;
  local_40 = 1;
  local_38 = 1;
  cStack_37 = '\0';
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match();
  lVar9 = local_68;
  if (local_90[0] == 1) {
    uVar8 = local_88 - local_78;
joined_r0x0075f6b6:
    bVar14 = true;
    if (uVar8 != 0) {
      pcVar13 = (char *)(local_a0 + local_78);
      bVar14 = true;
      if (uVar8 == 1) {
        cVar3 = *pcVar13;
        if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_0075f6bd;
      }
      else {
        cVar3 = *pcVar13;
      }
      uVar10 = (ulonglong)(cVar3 == '+');
      if (uVar8 - uVar10 < 0x11) {
        if (uVar8 == uVar10) {
          uVar4 = 0;
          bVar14 = false;
        }
        else {
          uVar4 = 0;
          lVar5 = 0;
          do {
            bVar14 = 9 < (byte)pcVar13[lVar5 + uVar10] - 0x30;
            if (bVar14) break;
            uVar4 = (ulonglong)((byte)pcVar13[lVar5 + uVar10] - 0x30) + uVar4 * 10;
            lVar5 = lVar5 + 1;
          } while (lVar5 != uVar8 + -uVar10);
        }
      }
      else {
        uVar4 = 0;
        lVar5 = 0;
        while ((bVar14 = lVar5 != uVar8 + -uVar10, bVar14 &&
               (auVar1._8_8_ = 0, auVar1._0_8_ = uVar4, uVar7 = SUB168(auVar1 * ZEXT816(10),0),
               SUB168(auVar1 * ZEXT816(10),8) == 0))) {
          uVar12 = (byte)pcVar13[lVar5 + uVar10] - 0x30;
          uVar4 = uVar7 + uVar12;
          if ((9 < uVar12) || (lVar5 = lVar5 + 1, CARRY8(uVar7,(ulonglong)uVar12))) break;
        }
      }
    }
  }
  else {
    local_80 = local_78;
    if (cStack_37 == '\0') {
      cStack_37 = '\x01';
      uVar8 = local_70 - local_78;
      local_a0 = local_68;
      if ((uVar8 != 0 | local_38) == 1) goto joined_r0x0075f6b6;
    }
    bVar14 = true;
  }
LAB_0075f6bd:
  local_78 = local_80;
  if ((local_48._4_4_ != -1) && (cStack_37 == '\0')) {
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_90);
    if (local_90[0] == 1) {
      uVar8 = local_88 - local_78;
      local_68 = lVar9;
    }
    else if ((cStack_37 != '\0') || (uVar8 = local_70 - local_78, (uVar8 != 0 | local_38) != 1))
    goto LAB_0075f6c9;
    if (uVar8 == 0) {
      uVar11 = 0;
      goto LAB_0075f6cb;
    }
    pcVar13 = (char *)(local_68 + local_78);
    if (uVar8 == 1) {
      cVar3 = *pcVar13;
      uVar11 = 0;
      if ((cVar3 == '+') || (cVar3 == '-')) goto LAB_0075f6cb;
    }
    else {
      cVar3 = *pcVar13;
    }
    uVar10 = (ulonglong)(cVar3 == '+');
    if (0x10 < uVar8 - uVar10) {
      uVar11 = 0;
      lVar9 = 0;
      uVar7 = 0;
      while( true ) {
        if (lVar9 == uVar8 + -uVar10) goto LAB_0075f8ff;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        uVar6 = SUB168(auVar2 * ZEXT816(10),0);
        if (SUB168(auVar2 * ZEXT816(10),8) != 0) break;
        uVar12 = (byte)pcVar13[lVar9 + uVar10] - 0x30;
        uVar7 = uVar6 + uVar12;
        if ((9 < uVar12) || (lVar9 = lVar9 + 1, CARRY8(uVar6,(ulonglong)uVar12))) break;
      }
      goto LAB_0075f6cb;
    }
    if (uVar8 == uVar10) {
      uVar7 = 0;
    }
    else {
      uVar11 = 0;
      lVar9 = 0;
      uVar7 = 0;
      do {
        if (9 < (byte)pcVar13[lVar9 + uVar10] - 0x30) goto LAB_0075f6cb;
        uVar7 = (ulonglong)((byte)pcVar13[lVar9 + uVar10] - 0x30) + uVar7 * 10;
        lVar9 = lVar9 + 1;
      } while (lVar9 != uVar8 + -uVar10);
    }
LAB_0075f8ff:
    if (!bVar14) {
      param_1[1] = uVar4;
      param_1[2] = uVar7;
      uVar11 = 1;
      goto LAB_0075f6cb;
    }
  }
LAB_0075f6c9:
  uVar11 = 0;
LAB_0075f6cb:
  *param_1 = uVar11;
  return;
}


