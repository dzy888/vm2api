// 0054ffe0 next_match

/* <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher as
   core[c0acaeba6ab4c2e0]::str::pattern::Searcher>::next_match */

void __rustcall
<core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
::next_match(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  uVar11 = param_2[2];
  if (uVar3 < uVar11 || uVar2 < uVar3) {
    uVar9 = 0;
  }
  else {
    lVar4 = *param_2;
    uVar12 = (ulonglong)*(byte *)(param_2 + 5);
    cVar1 = *(char *)((longlong)param_2 + uVar12 + 0x1f);
    if (uVar12 < 5) {
      do {
        uVar7 = uVar3 - uVar11;
        if (uVar7 < 0x10) {
          uVar10 = 0;
          if (uVar7 == 0) goto LAB_005501b2;
          while (*(char *)(lVar4 + uVar11 + uVar10) != cVar1) {
            uVar10 = uVar10 + 1;
            if (uVar7 == uVar10) goto LAB_005501b2;
          }
        }
        else {
          lVar8 = (*(code *)PTR_memchr_aligned_00799490)();
          uVar10 = uVar7;
          if (lVar8 != 1) goto LAB_005501b2;
        }
        uVar11 = uVar11 + uVar10 + 1;
        param_2[2] = uVar11;
        if ((uVar11 <= uVar2 && uVar12 <= uVar11) &&
           (iVar6 = (*(code *)PTR_bcmp_00799020)(), iVar6 == 0)) {
          param_1[1] = uVar11 - uVar12;
          param_1[2] = uVar11;
          uVar9 = 1;
          goto LAB_005501bd;
        }
      } while (uVar11 <= uVar3);
      uVar9 = 0;
    }
    else {
      do {
        uVar7 = uVar3 - uVar11;
        if (uVar7 < 0x10) {
          uVar10 = 0;
          if (uVar7 == 0) {
            lVar8 = 0;
            uVar7 = uVar10;
          }
          else {
            do {
              if (*(char *)(lVar4 + uVar11 + uVar10) == cVar1) {
                lVar8 = 1;
                uVar7 = uVar10;
                goto LAB_0055017f;
              }
              uVar10 = uVar10 + 1;
            } while (uVar7 != uVar10);
            lVar8 = 0;
          }
        }
        else {
          lVar8 = (*(code *)PTR_memchr_aligned_00799490)();
        }
LAB_0055017f:
        if (lVar8 != 1) goto LAB_005501b2;
        uVar11 = uVar11 + uVar7 + 1;
        param_2[2] = uVar11;
        if (uVar11 <= uVar2 && uVar12 <= uVar11) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_s__rustc_48a229ceaefd4985c50990b14_0078d9f0,4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = 0;
      } while (uVar11 <= uVar3);
    }
  }
LAB_005501bd:
  *param_1 = uVar9;
  return;
LAB_005501b2:
  param_2[2] = uVar3;
  uVar9 = 0;
  goto LAB_005501bd;
}


