// 005fea00 <craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog::{closure#2}>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<&str> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::any::<craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog::{closure#2}>
    */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<&str>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::any::<craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog::_closure_2_>
          (longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  char cVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  plVar3 = (longlong *)param_1[1];
  if ((longlong *)*param_1 != plVar3) {
    lVar4 = *(longlong *)(param_2[2] + 8);
    uVar5 = *(ulonglong *)(param_2[2] + 0x10);
    lVar6 = *param_2;
    lVar7 = param_2[1];
    plVar13 = (longlong *)*param_1;
    do {
      plVar14 = plVar13 + 2;
      *param_1 = (longlong)plVar14;
      lVar8 = *plVar13;
      uVar9 = plVar13[1];
      if (uVar9 == uVar5) {
        if (uVar5 < 0x10) {
          uVar12 = 0;
          do {
            if (uVar5 == uVar12) {
              return 1;
            }
            pbVar1 = (byte *)(lVar8 + uVar12);
            bVar2 = *(byte *)(lVar4 + uVar12);
            uVar12 = uVar12 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2));
        }
        else {
          cVar11 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(lVar8,uVar5,lVar4,uVar5);
          if (cVar11 != '\0') {
            return 1;
          }
        }
      }
      if (uVar9 == *(ulonglong *)(lVar7 + 0x10)) {
        lVar10 = *(longlong *)(lVar7 + 8);
        if (uVar9 < 0x10) {
          uVar12 = 0;
          do {
            if (uVar9 == uVar12) {
              return 1;
            }
            pbVar1 = (byte *)(lVar8 + uVar12);
            bVar2 = *(byte *)(lVar10 + uVar12);
            uVar12 = uVar12 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2));
        }
        else {
          cVar11 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(lVar8,uVar9,lVar10,uVar9);
          if (cVar11 != '\0') {
            return 1;
          }
        }
      }
      if (uVar9 == *(ulonglong *)(lVar6 + 0x10)) {
        lVar10 = *(longlong *)(lVar6 + 8);
        if (uVar9 < 0x10) {
          uVar12 = 0;
          do {
            if (uVar9 == uVar12) {
              return 1;
            }
            pbVar1 = (byte *)(lVar8 + uVar12);
            bVar2 = *(byte *)(lVar10 + uVar12);
            uVar12 = uVar12 + 1;
          } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                   (byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2));
        }
        else {
          cVar11 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(lVar8,uVar9,lVar10,uVar9);
          if (cVar11 != '\0') {
            return 1;
          }
        }
      }
      plVar13 = plVar14;
    } while (plVar14 != plVar3);
  }
  return 0;
}


