// 006b2480 next_back

/* <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 in_R8;
  undefined8 in_R9;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    return 0;
  }
  if ((char)param_1[8] == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    auVar15 = next_back(param_1);
    if ((auVar15._0_8_ != 0) && (auVar15._8_8_ != 0)) {
      return auVar15._0_8_;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      return 0;
    }
  }
  puVar5 = PTR_memrchr_0079a040;
  lVar10 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  uVar12 = param_1[5];
  if (uVar12 <= uVar2 && uVar3 <= uVar12) {
    lVar7 = lVar10 + uVar3;
    uVar8 = (ulonglong)*(byte *)(param_1 + 7);
    uVar1 = uVar8 - 1;
    if (uVar8 < 5) {
      do {
        lVar11 = uVar12 - uVar3;
        lVar9 = (*(code *)PTR_memrchr_0079a040)();
        if (lVar9 != 1) goto LAB_006b262c;
        uVar12 = lVar11 + uVar3;
        uVar14 = uVar12 - uVar1;
        if (uVar1 <= uVar12) {
          uVar13 = uVar14 + uVar8;
          if ((uVar2 >= uVar13 && !CARRY8(uVar14,uVar8)) &&
             (iVar6 = (*(code *)PTR_bcmp_00799020)
                                (uVar2 < uVar13 || CARRY8(uVar14,uVar8),uVar8,in_R8,in_R9,lVar7),
             iVar6 == 0)) {
            param_1[5] = uVar14;
            param_1[1] = uVar14;
            return lVar10 + uVar13;
          }
        }
        param_1[5] = uVar12;
      } while ((uVar3 <= uVar12) && (uVar12 <= uVar2));
    }
    else {
      do {
        lVar9 = uVar12 - uVar3;
        lVar7 = (*(code *)puVar5)();
        if (lVar7 != 1) goto LAB_006b262c;
        uVar12 = lVar9 + uVar3;
        if ((uVar1 <= uVar12) &&
           ((uVar12 - uVar1) + uVar8 <= uVar2 && !CARRY8(uVar12 - uVar1,uVar8))) {
          (*(code *)PTR_slice_index_fail_007993c8)
                    (&PTR_s__rustc_48a229ceaefd4985c50990b14_00792108,4);
          pcVar4 = (code *)swi(3);
          lVar10 = (*pcVar4)();
          return lVar10;
        }
        param_1[5] = uVar12;
      } while ((uVar3 <= uVar12) && (uVar12 <= uVar2));
    }
  }
LAB_006b2630:
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return lVar10 + *param_1;
LAB_006b262c:
  param_1[5] = uVar3;
  goto LAB_006b2630;
}


