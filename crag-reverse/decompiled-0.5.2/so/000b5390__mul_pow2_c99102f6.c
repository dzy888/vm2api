// 000b5390 mul_pow2

/* <core[c0acaeba6ab4c2e0]::num::imp::bignum::Big32x40>::mul_pow2 */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::num::imp::bignum::Big32x40>::mul_pow2
          (undefined4 param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  sbyte sVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  
  if (param_3 < 0x500) {
    uVar32 = param_3 >> 5;
    uVar29 = *(ulonglong *)(param_2 + 0xa0);
    if (uVar29 != 0) {
      uVar28 = uVar29;
      do {
        uVar28 = uVar28 - 1;
        if (0x28 < uVar29) goto LAB_000b5571;
        if (0x27 < uVar32 + uVar28) goto LAB_000b555c;
        *(undefined4 *)(param_2 + uVar32 * 4 + uVar28 * 4) = *(undefined4 *)(param_2 + uVar28 * 4);
      } while (uVar28 != 0);
    }
    uVar31 = (uint)param_3 & 0x1f;
    if (uVar32 != 0) {
      param_1 = (*(code *)PTR_memset_000c3cd8)(uVar29,uVar32 * 4);
    }
    lVar25 = *(longlong *)(param_2 + 0xa0);
    uVar29 = lVar25 + uVar32;
    if ((param_3 & 0x1f) == 0) goto LAB_000b552e;
    if (uVar29 - 1 < 0x28) {
      sVar9 = (sbyte)uVar31;
      uVar24 = *(uint *)(param_2 + -4 + uVar29 * 4) >> (-sVar9 & 0x1fU);
      uVar28 = uVar29;
      if (uVar24 != 0) {
        if (0x27 < uVar29) goto LAB_000b5571;
        *(uint *)(param_2 + uVar29 * 4) = uVar24;
        uVar28 = uVar29 + 1;
      }
      if (uVar32 + 1 < uVar29) {
        uVar24 = 0x20 - uVar31;
        uVar27 = lVar25 - 1;
        if (7 < uVar27) {
          uVar26 = uVar27 & 0xfffffffffffffff8;
          lVar25 = param_2 + uVar29 * 4;
          uVar29 = uVar29 - uVar26;
          lVar30 = 0;
          do {
            puVar1 = (uint *)(lVar25 + -0x24 + lVar30 * 4);
            uVar10 = *puVar1;
            uVar11 = puVar1[1];
            uVar12 = puVar1[2];
            uVar13 = puVar1[3];
            piVar2 = (int *)(lVar25 + -0x20 + lVar30 * 4);
            iVar14 = *piVar2;
            iVar15 = piVar2[1];
            iVar16 = piVar2[2];
            iVar17 = piVar2[3];
            puVar3 = (uint *)(lVar25 + -0x14 + lVar30 * 4);
            uVar18 = puVar3[1];
            uVar19 = puVar3[2];
            uVar20 = puVar3[3];
            piVar2 = (int *)(lVar25 + -0x10 + lVar30 * 4);
            iVar21 = piVar2[1];
            iVar22 = piVar2[2];
            iVar23 = piVar2[3];
            uVar7 = (ulonglong)uVar24;
            uVar5 = (ulonglong)uVar31;
            uVar8 = (ulonglong)uVar24;
            uVar6 = (ulonglong)uVar31;
            puVar1 = (uint *)(lVar25 + -0x10 + lVar30 * 4);
            *puVar1 = *piVar2 << uVar5 | *puVar3 >> uVar7;
            puVar1[1] = iVar21 << uVar5 | uVar18 >> uVar7;
            puVar1[2] = iVar22 << uVar5 | uVar19 >> uVar7;
            puVar1[3] = iVar23 << uVar5 | uVar20 >> uVar7;
            puVar1 = (uint *)(lVar25 + -0x20 + lVar30 * 4);
            *puVar1 = iVar14 << uVar6 | uVar10 >> uVar8;
            puVar1[1] = iVar15 << uVar6 | uVar11 >> uVar8;
            puVar1[2] = iVar16 << uVar6 | uVar12 >> uVar8;
            puVar1[3] = iVar17 << uVar6 | uVar13 >> uVar8;
            lVar30 = lVar30 + -8;
          } while (-lVar30 != uVar26);
          if (uVar27 == uVar26) goto LAB_000b5522;
        }
        do {
          *(uint *)(param_2 + -4 + uVar29 * 4) =
               *(uint *)(param_2 + -8 + uVar29 * 4) >> ((byte)uVar24 & 0x1f) |
               *(int *)(param_2 + -4 + uVar29 * 4) << sVar9;
          uVar29 = uVar29 - 1;
        } while (uVar32 + 1 < uVar29);
      }
LAB_000b5522:
      piVar2 = (int *)(param_2 + uVar32 * 4);
      *piVar2 = *piVar2 << sVar9;
      uVar29 = uVar28;
LAB_000b552e:
      *(ulonglong *)(param_2 + 0xa0) = uVar29;
      return param_2;
    }
  }
  else {
    param_1 = (*(code *)PTR_panic_000c3b00)
                        (param_5,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70);
  }
LAB_000b555c:
  param_1 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                      (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70);
LAB_000b5571:
  (*(code *)PTR_panic_bounds_check_000c3dd8)
            (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70);
  pcVar4 = (code *)swi(3);
  lVar25 = (*pcVar4)();
  return lVar25;
}


