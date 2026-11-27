// 0076f3e3 next

/* WARNING: Removing unreachable block (ram,0x0076f547) */
/* <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong unaff_R12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  
  if (*(char *)((longlong)param_1 + 0x41) == '\0') {
    uVar11 = param_1[2];
    uVar2 = param_1[3];
    uVar3 = param_1[5];
    uVar13 = param_1[4];
    if (uVar13 <= uVar3 && uVar3 <= uVar2) {
      uVar5 = param_1[7];
      uVar12 = (ulonglong)(byte)uVar5;
      cVar1 = *(char *)((longlong)param_1 + uVar12 + 0x2f);
      do {
        uVar7 = uVar3 - uVar13;
        if (uVar7 < 0x10) {
          uVar9 = 0;
          if (uVar7 != 0) {
            do {
              if (*(char *)(uVar11 + uVar13 + uVar9) == cVar1) {
                lVar8 = 1;
                uVar7 = uVar9;
                goto LAB_0076f48c;
              }
              uVar9 = uVar9 + 1;
            } while (uVar7 != uVar9);
            uVar9 = uVar7;
          }
          lVar8 = 0;
          uVar7 = uVar9;
        }
        else {
          lVar8 = (*(code *)PTR_memchr_aligned_00799490)();
        }
LAB_0076f48c:
        if (lVar8 != 1) {
          param_1[4] = uVar3;
          break;
        }
        uVar13 = uVar13 + uVar7 + 1;
        param_1[4] = uVar13;
        if ((uVar12 <= uVar13) && (uVar13 <= uVar2)) {
          if (4 < (byte)uVar5) {
            uVar11 = 4;
            (*(code *)PTR_slice_index_fail_007993c8)
                      (&PTR_s__rustc_48a229ceaefd4985c50990b14_00797bf8,4);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar11;
            return auVar4 << 0x40;
          }
          iVar6 = (*(code *)PTR_bcmp_00799020)();
          if (iVar6 == 0) {
            unaff_R12 = (uVar13 - uVar12) - *param_1;
            lVar8 = uVar11 + *param_1;
            *param_1 = uVar13;
            goto LAB_0076f4ff;
          }
        }
      } while (uVar13 <= uVar3);
    }
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    lVar10 = uVar11 + *param_1;
    unaff_R12 = param_1[1] - *param_1;
    lVar8 = 0;
    if (unaff_R12 != 0) {
      lVar8 = lVar10;
    }
    if ((char)param_1[8] != '\0') {
      lVar8 = lVar10;
    }
  }
  else {
    lVar8 = 0;
  }
LAB_0076f4ff:
  auVar14._8_8_ = unaff_R12;
  auVar14._0_8_ = lVar8;
  return auVar14;
}


