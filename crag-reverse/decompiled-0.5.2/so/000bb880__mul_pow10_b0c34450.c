// 000bb880 mul_pow10

/* WARNING: Type propagation algorithm not settling */
/* core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::dragon::mul_pow10 */

uint * __rustcall
core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::dragon::mul_pow10
          (uint *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (7 < param_2) {
    uVar6 = param_2 & 7;
    if (uVar6 != 0) {
      uVar7 = *(ulonglong *)(param_1 + 0x28);
      if (0x28 < uVar7) goto LAB_000bbcdc;
      if (uVar7 == 0) {
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        goto joined_r0x000bba1c;
      }
      uVar2 = (ulonglong)(*(uint *)(POW10 + uVar6 * 4) >> (sbyte)uVar6);
      uVar4 = uVar7 * 4 - 4;
      uVar8 = (uVar4 >> 2) + 1;
      uVar6 = (ulonglong)((uint)uVar8 & 3);
      puVar3 = param_1;
      if (uVar4 < 0xc) {
        uVar4 = 0;
LAB_000bbaec:
        uVar8 = 0;
        do {
          uVar5 = puVar3[uVar8] * uVar2 + uVar4;
          uVar4 = uVar5 >> 0x20;
          puVar3[uVar8] = (uint)uVar5;
          uVar8 = uVar8 + 1;
        } while (uVar6 != uVar8);
      }
      else {
        uVar8 = uVar8 & 0xfffffffffffffffc;
        uVar4 = 0;
        do {
          uVar4 = *puVar3 * uVar2 + uVar4;
          *puVar3 = (uint)uVar4;
          uVar4 = puVar3[1] * uVar2 + (uVar4 >> 0x20);
          puVar3[1] = (uint)uVar4;
          uVar4 = puVar3[2] * uVar2 + (uVar4 >> 0x20);
          puVar3[2] = (uint)uVar4;
          uVar4 = puVar3[3] * uVar2 + (uVar4 >> 0x20);
          puVar3[3] = (uint)uVar4;
          puVar3 = puVar3 + 4;
          uVar4 = uVar4 >> 0x20;
          uVar8 = uVar8 - 4;
        } while (uVar8 != 0);
        if (uVar6 != 0) goto LAB_000bbaec;
      }
      if (uVar4 != 0) {
        if (uVar7 == 0x28) goto LAB_000bbcf0;
        param_1[uVar7] = (uint)uVar4;
        uVar7 = uVar7 + 1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar7;
    }
joined_r0x000bba1c:
    if ((param_2 & 8) == 0) goto joined_r0x000bbc53;
    uVar7 = *(ulonglong *)(param_1 + 0x28);
    if (0x28 < uVar7) goto LAB_000bbcdc;
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar4 = uVar7 * 4 - 4;
      uVar6 = (uVar4 >> 2) + 1;
      uVar2 = (ulonglong)((uint)uVar6 & 3);
      puVar3 = param_1;
      if (uVar4 < 0xc) {
        uVar4 = 0;
LAB_000bbc02:
        uVar6 = 0;
        do {
          uVar8 = (ulonglong)puVar3[uVar6] * 0x5f5e1 + uVar4;
          uVar4 = uVar8 >> 0x20;
          puVar3[uVar6] = (uint)uVar8;
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
      }
      else {
        uVar6 = uVar6 & 0xfffffffffffffffc;
        uVar4 = 0;
        do {
          uVar4 = (ulonglong)*puVar3 * 0x5f5e1 + uVar4;
          *puVar3 = (uint)uVar4;
          uVar4 = (ulonglong)puVar3[1] * 0x5f5e1 + (uVar4 >> 0x20);
          puVar3[1] = (uint)uVar4;
          uVar4 = (ulonglong)puVar3[2] * 0x5f5e1 + (uVar4 >> 0x20);
          puVar3[2] = (uint)uVar4;
          uVar4 = (ulonglong)puVar3[3] * 0x5f5e1 + (uVar4 >> 0x20);
          puVar3[3] = (uint)uVar4;
          puVar3 = puVar3 + 4;
          uVar4 = uVar4 >> 0x20;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
        uVar6 = 0;
        if (uVar2 != 0) goto LAB_000bbc02;
      }
      if (uVar4 != 0) {
        if (uVar7 == 0x28) goto LAB_000bbcf0;
        param_1[uVar7] = (uint)uVar4;
        uVar7 = uVar7 + 1;
      }
    }
    *(ulonglong *)(param_1 + 0x28) = uVar7;
joined_r0x000bbc53:
    if ((param_2 & 0x10) != 0) {
      (*(code *)PTR_mul_digits_000c4760)(uVar6,2);
    }
    if ((param_2 & 0x20) != 0) {
      (*(code *)PTR_mul_digits_000c4760)();
    }
    if ((param_2 & 0x40) != 0) {
      (*(code *)PTR_mul_digits_000c4760)();
    }
    if ((char)param_2 < '\0') {
      (*(code *)PTR_mul_digits_000c4760)();
    }
    if ((param_2 & 0x100) != 0) {
      (*(code *)PTR_mul_digits_000c4760)();
    }
    (*(code *)PTR_mul_pow2_000c4768)();
    return param_1;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x28);
  if (0x28 < uVar6) {
LAB_000bbcdc:
    (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70,0x28);
    goto LAB_000bbcf0;
  }
  if (uVar6 == 0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    return param_1;
  }
  uVar7 = (ulonglong)*(uint *)(POW10 + param_2 * 4);
  uVar4 = uVar6 * 4 - 4;
  uVar8 = (uVar4 >> 2) + 1;
  uVar2 = (ulonglong)((uint)uVar8 & 3);
  puVar3 = param_1;
  if (uVar4 < 0xc) {
    uVar4 = 0;
LAB_000bb9bc:
    uVar8 = 0;
    do {
      uVar5 = puVar3[uVar8] * uVar7 + uVar4;
      uVar4 = uVar5 >> 0x20;
      puVar3[uVar8] = (uint)uVar5;
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
  }
  else {
    uVar8 = uVar8 & 0xfffffffffffffffc;
    uVar4 = 0;
    do {
      uVar4 = *puVar3 * uVar7 + uVar4;
      *puVar3 = (uint)uVar4;
      uVar4 = puVar3[1] * uVar7 + (uVar4 >> 0x20);
      puVar3[1] = (uint)uVar4;
      uVar4 = puVar3[2] * uVar7 + (uVar4 >> 0x20);
      puVar3[2] = (uint)uVar4;
      uVar4 = puVar3[3] * uVar7 + (uVar4 >> 0x20);
      puVar3[3] = (uint)uVar4;
      puVar3 = puVar3 + 4;
      uVar4 = uVar4 >> 0x20;
      uVar8 = uVar8 - 4;
    } while (uVar8 != 0);
    if (uVar2 != 0) goto LAB_000bb9bc;
  }
  if (uVar4 != 0) {
    if (uVar6 == 0x28) {
LAB_000bbcf0:
      (*(code *)PTR_panic_bounds_check_000c3dd8)();
      pcVar1 = (code *)swi(3);
      puVar3 = (uint *)(*pcVar1)();
      return puVar3;
    }
    param_1[uVar6] = (uint)uVar4;
    uVar6 = uVar6 + 1;
  }
  *(ulonglong *)(param_1 + 0x28) = uVar6;
  return param_1;
}


