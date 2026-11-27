// 00780ac0 next

/* <core[c0acaeba6ab4c2e0]::str::lossy::Utf8Chunks as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

void __rustcall
<core[c0acaeba6ab4c2e0]::str::lossy::Utf8Chunks_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  
  uVar4 = param_2[1];
  if (uVar4 == 0) {
    *param_1 = 0;
    return;
  }
  lVar5 = *param_2;
  uVar7 = 0;
  do {
    bVar1 = *(byte *)(lVar5 + uVar7);
    uVar9 = (ulonglong)bVar1;
    uVar8 = uVar7 + 1;
    if ((char)bVar1 < '\0') {
      cVar2 = (&DAT_001c278e)[uVar9];
      if (cVar2 == '\x04') {
        pcVar10 = (char *)(lVar5 + uVar8);
        if (uVar4 <= uVar8) {
          pcVar10 = "";
        }
        cVar2 = *pcVar10;
        if (uVar9 == 0xf0) {
          if (0x2f < (byte)(cVar2 + 0x70U)) break;
        }
        else if (bVar1 == 0xf4) {
          if (-0x71 < cVar2) break;
        }
        else if ((2 < (byte)(bVar1 + 0xf)) || (-0x41 < cVar2)) break;
        uVar8 = uVar7 + 2;
        pcVar10 = (char *)(lVar5 + 2 + uVar7);
        if (uVar4 <= uVar8) {
          pcVar10 = "";
        }
        if (-0x41 < *pcVar10) break;
        uVar8 = uVar7 + 3;
        pcVar10 = (char *)(lVar5 + 3 + uVar7);
        if (uVar4 <= uVar8) {
          pcVar10 = "";
        }
        if (-0x41 < *pcVar10) break;
        uVar8 = uVar7 + 4;
      }
      else if (cVar2 == '\x03') {
        pbVar6 = (byte *)(lVar5 + uVar8);
        if (uVar4 <= uVar8) {
          pbVar6 = &DAT_001874f9;
        }
        bVar3 = *pbVar6;
        if (uVar9 == 0xe0) {
          if ((bVar3 & 0xe0) != 0xa0) break;
        }
        else if (bVar1 == 0xed) {
          if (-0x61 < (char)bVar3) break;
        }
        else if (((0xb < (byte)(bVar1 + 0x1f)) && ((bVar1 & 0xfe) != 0xee)) || (-0x41 < (char)bVar3)
                ) break;
        uVar8 = uVar7 + 2;
        pcVar10 = (char *)(lVar5 + 2 + uVar7);
        if (uVar4 <= uVar8) {
          pcVar10 = "";
        }
        if (-0x41 < *pcVar10) break;
        uVar8 = uVar7 + 3;
      }
      else {
        if (cVar2 != '\x02') break;
        pcVar10 = (char *)(lVar5 + uVar8);
        if (uVar4 <= uVar8) {
          pcVar10 = "";
        }
        if (-0x41 < *pcVar10) break;
        uVar8 = uVar7 + 2;
      }
    }
    uVar7 = uVar8;
    uVar8 = uVar7;
  } while (uVar7 < uVar4);
  *param_2 = lVar5 + uVar8;
  param_2[1] = uVar4 - uVar8;
  *param_1 = lVar5;
  param_1[1] = uVar7;
  param_1[2] = lVar5 + uVar7;
  param_1[3] = uVar8 - uVar7;
  return;
}


