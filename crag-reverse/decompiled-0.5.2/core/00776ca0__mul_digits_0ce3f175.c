// 00776ca0 mul_digits

/* <core[c0acaeba6ab4c2e0]::num::imp::bignum::Big32x40>::mul_digits */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::num::imp::bignum::Big32x40>::mul_digits
          (longlong param_1,int *param_2,ulonglong param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar17 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uVar4 = *(ulonglong *)(param_1 + 0xa0);
  if (uVar4 < param_3) {
    if (uVar4 < 0x29) {
      local_48 = param_3 + 1;
      local_50 = param_3 - 1;
      uVar15 = 0;
      uVar12 = 0;
      lVar10 = param_1;
      do {
        lVar14 = (longlong)&uStack_100 + uVar12 * 4 + 4;
        lVar13 = 0;
        uVar9 = uVar12;
        lVar16 = lVar10;
        do {
          uVar6 = uVar9;
          if (lVar16 == param_1 + uVar4 * 4) {
LAB_00776f64:
            uStack_100 = 0x776f79;
            (*(code *)PTR_memcpy_00799008)(0,0xa0);
            *(ulonglong *)(param_1 + 0xa0) = uVar15;
            return param_1;
          }
          lVar16 = lVar16 + 4;
          uVar8 = (ulonglong)*(uint *)(lVar10 + lVar13 * 4);
          lVar13 = lVar13 + 1;
          lVar14 = lVar14 + 4;
          uVar9 = uVar6 + 1;
        } while (uVar8 == 0);
        local_40 = uVar15;
        local_38 = uVar12;
        local_58 = uVar12 + lVar13;
        lVar10 = 0;
        uVar12 = 0;
        do {
          if (0x27 < uVar6) goto LAB_00776fd2;
          uVar11 = uVar12 + *(uint *)(lVar14 + lVar10) +
                   *(uint *)((longlong)param_2 + lVar10) * uVar8;
          uVar12 = uVar11 >> 0x20;
          *(int *)(lVar14 + lVar10) = (int)uVar11;
          uVar9 = local_38;
          uVar15 = local_40;
          lVar10 = lVar10 + 4;
          uVar6 = uVar6 + 1;
        } while (param_3 * 4 != lVar10);
        uVar6 = param_3;
        if (uVar12 != 0) {
          if (0x27 < local_50 + local_38 + lVar13) goto LAB_00776fac;
          *(int *)((longlong)&uStack_100 + lVar13 * 4 + (param_3 + local_38) * 4 + 4) =
               (int)(uVar11 >> 0x20);
          uVar6 = local_48;
        }
        uVar12 = (lVar13 + uVar9 + uVar6) - 1;
        if (uVar15 <= uVar12) {
          uVar15 = uVar12;
        }
        uVar12 = local_58;
        lVar10 = lVar16;
      } while( true );
    }
  }
  else if (uVar4 < 0x29) {
    piVar1 = param_2 + param_3;
    if (uVar4 == 0) {
      lVar10 = 0;
      uVar15 = 0;
      do {
        lVar14 = 0;
        piVar7 = param_2;
        do {
          if (piVar7 == piVar1) goto LAB_00776f64;
          param_2 = piVar7 + 1;
          lVar14 = lVar14 + -1;
          iVar3 = *piVar7;
          piVar7 = param_2;
        } while (iVar3 == 0);
        lVar10 = lVar10 - lVar14;
        if (uVar15 <= lVar10 - 1U) {
          uVar15 = lVar10 - 1U;
        }
      } while( true );
    }
    uVar15 = 0;
    uVar12 = 0;
    do {
      lVar10 = (longlong)&uStack_100 + uVar12 * 4 + 4;
      lVar14 = 0;
      uVar9 = uVar12;
      piVar7 = param_2;
      do {
        uVar6 = uVar9;
        if (piVar7 == piVar1) goto LAB_00776f64;
        piVar7 = piVar7 + 1;
        uVar2 = param_2[lVar14];
        lVar14 = lVar14 + 1;
        lVar10 = lVar10 + 4;
        uVar9 = uVar6 + 1;
      } while ((ulonglong)uVar2 == 0);
      local_40 = uVar15;
      local_38 = uVar12 + lVar14;
      lVar16 = 0;
      uVar9 = 0;
      do {
        if (0x27 < uVar6) goto LAB_00776fd2;
        uVar8 = uVar9 + *(uint *)(lVar10 + lVar16) +
                (ulonglong)*(uint *)(param_1 + lVar16) * (ulonglong)uVar2;
        uVar9 = uVar8 >> 0x20;
        *(int *)(lVar10 + lVar16) = (int)uVar8;
        uVar15 = local_40;
        lVar16 = lVar16 + 4;
        uVar6 = uVar6 + 1;
      } while (uVar4 * 4 != lVar16);
      uVar6 = uVar4;
      if (uVar9 != 0) {
        if (0x27 < (uVar4 - 1) + uVar12 + lVar14) goto LAB_00776fd2;
        *(int *)((longlong)&uStack_100 + lVar14 * 4 + (uVar4 + uVar12) * 4 + 4) =
             (int)(uVar8 >> 0x20);
        uVar6 = uVar4 + 1;
      }
      uVar12 = (lVar14 + uVar12 + uVar6) - 1;
      if (uVar15 <= uVar12) {
        uVar15 = uVar12;
      }
      uVar12 = local_38;
      param_2 = piVar7;
    } while( true );
  }
  uStack_100 = 0x776fac;
  uVar17 = (*(code *)PTR_slice_index_fail_007993c8)
                     (&PTR_s__rustc_48a229ceaefd4985c50990b14_00798360,0x28);
LAB_00776fac:
  uStack_100 = 0x776fc8;
  uVar17 = (*(code *)PTR_panic_bounds_check_00799520)
                     (uVar17,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798360);
LAB_00776fd2:
  uStack_100 = 0x776fe4;
  (*(code *)PTR_panic_bounds_check_00799520)
            (uVar17,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798360);
  pcVar5 = (code *)swi(3);
  lVar10 = (*pcVar5)();
  return lVar10;
}


