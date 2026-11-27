// 003bf480 from_iter

/* <alloc[12e961f32105355]::vec::Vec<u8> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u8,
   core[c0acaeba6ab4c2e0]::iter::adapters::copied::Copied<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<u8>>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<u8>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u8,core[c0acaeba6ab4c2e0]::iter::adapters::copied::Copied<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<u8>>>>
::from_iter(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar4 = param_2[3];
  lVar5 = param_2[2];
  lVar13 = (lVar4 + lVar3) - (lVar5 + lVar2);
  uVar16 = lVar13 == 0;
  if (-1 < lVar13) goto LAB_003bf4b8;
  plVar9 = (longlong *)0x0;
  do {
    param_1 = plVar9;
    uVar16 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003bf4b8:
    lVar10 = 1;
    if ((bool)uVar16) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar10 = (*(code *)PTR___rust_alloc_00799000)();
    plVar9 = (longlong *)0x1;
  } while (lVar10 == 0);
  if (lVar2 == lVar3) {
    uVar15 = 0;
  }
  else {
    uVar15 = lVar3 - lVar2;
    uVar11 = 0;
    if (uVar15 < 4) goto LAB_003bf572;
    if ((ulonglong)(lVar10 - lVar2) < 0x20) goto LAB_003bf572;
    if (uVar15 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar11 = uVar15 & 0xffffffffffffffe0;
      uVar12 = 0;
      do {
        uVar6 = ((undefined8 *)(lVar2 + uVar12))[1];
        puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar12);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        *(undefined8 *)(lVar10 + uVar12) = *(undefined8 *)(lVar2 + uVar12);
        ((undefined8 *)(lVar10 + uVar12))[1] = uVar6;
        puVar1 = (undefined8 *)(lVar10 + 0x10 + uVar12);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        uVar12 = uVar12 + 0x20;
      } while (uVar11 != uVar12);
      if (uVar15 == uVar11) goto LAB_003bf582;
      uVar12 = uVar11;
      if ((uVar15 & 0x1c) == 0) goto LAB_003bf572;
    }
    uVar11 = uVar15 & 0xfffffffffffffffc;
    do {
      *(undefined4 *)(lVar10 + uVar12) = *(undefined4 *)(lVar2 + uVar12);
      uVar12 = uVar12 + 4;
    } while (uVar11 != uVar12);
    for (; uVar15 != uVar11; uVar11 = uVar11 + 1) {
LAB_003bf572:
      *(undefined1 *)(lVar10 + uVar11) = *(undefined1 *)(lVar2 + uVar11);
    }
  }
LAB_003bf582:
  if (lVar5 != lVar4) {
    uVar11 = lVar4 - lVar5;
    if ((0x1f < uVar11) && (0x1f < (uVar15 + lVar10) - lVar5)) {
      uVar12 = uVar11 & 0xffffffffffffffe0;
      lVar2 = uVar15 + lVar10;
      uVar15 = uVar15 + uVar12;
      uVar14 = 0;
      do {
        uVar6 = ((undefined8 *)(lVar5 + uVar14))[1];
        puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar14);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        puVar1 = (undefined8 *)(lVar2 + uVar14);
        *puVar1 = *(undefined8 *)(lVar5 + uVar14);
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar14);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        uVar14 = uVar14 + 0x20;
        if (uVar12 == uVar14) goto LAB_003bf5f0;
      } while( true );
    }
    uVar12 = 0;
    do {
      *(undefined1 *)(lVar10 + uVar15) = *(undefined1 *)(lVar5 + uVar12);
      uVar15 = uVar15 + 1;
      uVar12 = uVar12 + 1;
LAB_003bf5f0:
    } while (uVar11 != uVar12);
  }
  *param_1 = lVar13;
  param_1[1] = lVar10;
  param_1[2] = uVar15;
  return param_1;
}


