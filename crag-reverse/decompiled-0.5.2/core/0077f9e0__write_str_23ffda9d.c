// 0077f9e0 write_str

/* <core[c0acaeba6ab4c2e0]::fmt::builders::PadAdapter as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::fmt::builders::PadAdapter_as_core[c0acaeba6ab4c2e0]::fmt::Write>::write_str
          (longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 8);
  uVar12 = 0;
  bVar5 = false;
  uVar13 = 0;
  do {
    if (bVar5) {
      return 0;
    }
    if (param_3 < uVar12) {
    }
    else {
      do {
        uVar7 = param_3 - uVar12;
        lVar1 = param_2 + uVar12;
        if (0xf < uVar7) {
          uVar11 = (lVar1 + 7U & 0xfffffffffffffff8) - lVar1;
          if (uVar11 == 0) {
            uVar11 = 0;
          }
          else {
            uVar8 = 0;
            do {
              if (*(char *)(lVar1 + uVar8) == '\n') goto LAB_0077fbc0;
              uVar8 = uVar8 + 1;
            } while (uVar11 != uVar8);
            uVar8 = uVar11;
            if (uVar7 - 0x10 < uVar11) goto joined_r0x0077fbaa;
          }
          lVar9 = param_2 + 8 + uVar12;
          do {
            uVar4 = *(ulonglong *)(lVar9 + -8 + uVar11);
            uVar10 = *(ulonglong *)(lVar9 + uVar11) ^ 0xa0a0a0a0a0a0a0a;
            uVar8 = uVar11;
            if (((0x101010101010100 - (uVar4 ^ 0xa0a0a0a0a0a0a0a) | uVar4) & 0x8080808080808080 &
                (0x101010101010100 - uVar10 | uVar10)) != 0x8080808080808080) break;
            uVar11 = uVar11 + 0x10;
            uVar8 = uVar11;
          } while (uVar11 <= uVar7 - 0x10);
joined_r0x0077fbaa:
          do {
            if (uVar7 == uVar8) goto LAB_0077fbf0;
            if (*(char *)(lVar1 + uVar8) == '\n') goto LAB_0077fbc0;
            uVar8 = uVar8 + 1;
          } while( true );
        }
        if (param_3 == uVar12) {
LAB_0077fbf0:
          uVar12 = param_3;
          break;
        }
        uVar8 = 0;
        while (*(char *)(lVar1 + uVar8) != '\n') {
          uVar8 = uVar8 + 1;
          if (uVar7 == uVar8) goto LAB_0077fbf0;
        }
LAB_0077fbc0:
        uVar7 = uVar12 + uVar8 + 1;
        if ((uVar12 + uVar8 < param_3) && (*(char *)(uVar8 + lVar1) == '\n')) {
          bVar5 = false;
          uVar11 = uVar7;
          uVar12 = uVar7;
          goto LAB_0077fc06;
        }
        uVar12 = uVar7;
      } while (uVar7 <= param_3);
    }
    bVar5 = true;
    uVar7 = param_3;
    uVar11 = uVar13;
    if (param_3 == uVar13) {
      return 0;
    }
LAB_0077fc06:
    if ((*pcVar2 != '\0') && (cVar6 = (**(code **)(lVar3 + 0x18))(), cVar6 != '\0')) {
      return 1;
    }
    if (uVar7 == uVar13) {
      bVar14 = false;
    }
    else {
      bVar14 = *(char *)(param_2 + -1 + uVar7) == '\n';
    }
    *pcVar2 = bVar14;
    cVar6 = (**(code **)(lVar3 + 0x18))(pcVar2,uVar7 - uVar13);
    uVar13 = uVar11;
    if (cVar6 != '\0') {
      return 1;
    }
  } while( true );
}


