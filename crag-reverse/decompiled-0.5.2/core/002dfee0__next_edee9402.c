// 002dfee0 next

/* <core[c0acaeba6ab4c2e0]::str::iter::Split<char> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::str::iter::Split<char>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong unaff_R12;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    lVar11 = 0;
    goto LAB_002e00ab;
  }
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[5];
  uVar13 = param_1[4];
  if (uVar13 <= uVar4 && uVar4 <= uVar3) {
    uVar10 = (ulonglong)(byte)param_1[7];
    cVar1 = *(char *)((longlong)param_1 + uVar10 + 0x2f);
    if (uVar10 < 5) {
      do {
        uVar7 = uVar4 - uVar13;
        if (uVar7 < 0x10) {
          uVar8 = 0;
          if (uVar7 == 0) goto LAB_002e0088;
          while (*(char *)(uVar13 + uVar2 + uVar8) != cVar1) {
            uVar8 = uVar8 + 1;
            if (uVar7 == uVar8) goto LAB_002e0088;
          }
        }
        else {
          lVar11 = (*(code *)PTR_memchr_aligned_00799490)();
          uVar8 = uVar7;
          if (lVar11 != 1) goto LAB_002e0088;
        }
        uVar13 = uVar13 + uVar8 + 1;
        param_1[4] = uVar13;
        if ((uVar13 <= uVar3 && uVar10 <= uVar13) &&
           (iVar6 = (*(code *)PTR_bcmp_00799020)(), iVar6 == 0)) {
          unaff_R12 = (uVar13 - uVar10) - *param_1;
          lVar11 = uVar2 + *param_1;
          *param_1 = uVar13;
          goto LAB_002e00ab;
        }
      } while (uVar13 <= uVar4);
    }
    else {
      do {
        uVar7 = uVar4 - uVar13;
        if (uVar7 < 0x10) {
          uVar8 = 0;
          if (uVar7 == 0) {
            lVar11 = 0;
            uVar7 = uVar8;
          }
          else {
            do {
              if (*(char *)(uVar13 + uVar2 + uVar8) == cVar1) {
                lVar11 = 1;
                uVar7 = uVar8;
                goto LAB_002e005f;
              }
              uVar8 = uVar8 + 1;
            } while (uVar7 != uVar8);
            lVar11 = 0;
          }
        }
        else {
          lVar11 = (*(code *)PTR_memchr_aligned_00799490)();
        }
LAB_002e005f:
        if (lVar11 != 1) goto LAB_002e0088;
        uVar13 = uVar13 + uVar7 + 1;
        param_1[4] = uVar13;
        if (uVar13 <= uVar3 && uVar10 <= uVar13) {
          uVar9 = 4;
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_s__rustc_48a229ceaefd4985c50990b14_00785ea0,4);
          pcVar5 = (code *)swi(3);
          auVar15._0_8_ = (*pcVar5)();
          auVar15._8_8_ = uVar9;
          return auVar15;
        }
      } while (uVar13 <= uVar4);
    }
  }
  goto LAB_002e008c;
LAB_002e0088:
  param_1[4] = uVar4;
LAB_002e008c:
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  lVar12 = uVar2 + *param_1;
  unaff_R12 = param_1[1] - *param_1;
  lVar11 = 0;
  if (unaff_R12 != 0) {
    lVar11 = lVar12;
  }
  if ((char)param_1[8] != '\0') {
    lVar11 = lVar12;
  }
LAB_002e00ab:
  auVar14._8_8_ = unaff_R12;
  auVar14._0_8_ = lVar11;
  return auVar14;
}


