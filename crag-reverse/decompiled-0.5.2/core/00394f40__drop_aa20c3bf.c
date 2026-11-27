// 00394f40 drop

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = param_1[2];
    uVar3 = *param_1;
    puVar4 = (ulonglong *)param_1[1];
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = 0;
    }
    lVar11 = uVar2 - uVar6;
    uVar12 = uVar3 - lVar11;
    lVar14 = uVar1 - uVar12;
    bVar15 = lVar14 != 0;
    if (uVar1 < uVar12) {
      lVar14 = 0;
    }
    uVar13 = lVar11 + uVar1;
    if (uVar1 >= uVar12 && bVar15) {
      uVar13 = uVar3;
    }
    lVar11 = uVar13 - lVar11;
    if (lVar11 != 0) {
      lVar9 = uVar2 * 0x50 + uVar6 * -0x50;
      do {
        if (*(ulonglong *)((longlong)puVar4 + lVar9) < 3) {
          lVar5 = 0x18;
          lVar8 = 0x10;
          lVar10 = 8;
LAB_00395054:
          (**(code **)(*(longlong *)((longlong)puVar4 + lVar9 + lVar10) + 0x20))
                    (lVar8 + (longlong)puVar4,*(undefined8 *)((longlong)puVar4 + lVar9 + lVar5));
        }
        else if ((int)*(ulonglong *)((longlong)puVar4 + lVar9) != 3) {
          lVar5 = 0x28;
          lVar8 = 0x20;
          lVar10 = 0x18;
          goto LAB_00395054;
        }
        lVar9 = lVar9 + 0x50;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (uVar12 < uVar1) {
      do {
        if (*puVar4 < 3) {
          lVar11 = 0x18;
          uVar7 = 0x10;
          lVar9 = 8;
LAB_00394fc4:
          (**(code **)(*(longlong *)((longlong)puVar4 + lVar9) + 0x20))
                    (uVar7,*(undefined8 *)((longlong)puVar4 + lVar11));
        }
        else if ((int)*puVar4 != 3) {
          lVar11 = 0x28;
          uVar7 = 0x20;
          lVar9 = 0x18;
          goto LAB_00394fc4;
        }
        lVar14 = lVar14 + -1;
        puVar4 = puVar4 + 10;
      } while (lVar14 != 0);
    }
  }
  return;
}


