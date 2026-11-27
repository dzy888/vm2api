// 000b6c70 new

/* <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher>::new */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher>::new
          (undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          longlong param_5,ulonglong param_6)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar16;
  
  if (param_6 == 0) {
    param_2[9] = param_3;
    param_2[10] = param_4;
    param_2[0xb] = param_5;
    param_2[0xc] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = param_4;
    *(undefined2 *)(param_2 + 3) = 0x101;
    *(undefined1 *)((longlong)param_2 + 0x1a) = 0;
    return param_2;
  }
  if (param_6 == 1) {
    uVar15 = 1;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 1;
  }
  else {
    uVar10 = 1;
    uVar14 = 0;
    uVar15 = 1;
    uVar11 = 0;
    uVar7 = 1;
    do {
      while( true ) {
        if (param_6 <= uVar11 + uVar14) goto LAB_000b71a1;
        bVar1 = *(byte *)(param_5 + uVar11 + uVar14);
        if (bVar1 <= *(byte *)(param_5 + uVar7)) break;
        uVar10 = uVar10 + uVar14 + 1;
        uVar15 = uVar10 - uVar11;
LAB_000b6d0c:
        uVar14 = 0;
        uVar7 = uVar10;
        if (param_6 <= uVar10) goto LAB_000b6d6e;
      }
      if (*(byte *)(param_5 + uVar7) != bVar1) {
        uVar15 = 1;
        uVar11 = uVar10;
        uVar10 = uVar10 + 1;
        goto LAB_000b6d0c;
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == uVar15) {
        uVar7 = uVar14;
        uVar14 = 0;
      }
      else {
        uVar7 = 0;
      }
      uVar10 = uVar10 + uVar7;
      uVar7 = uVar10 + uVar14;
    } while (uVar10 + uVar14 < param_6);
LAB_000b6d6e:
    uVar12 = 1;
    uVar14 = 0;
    uVar9 = 1;
    uVar10 = 0;
    uVar7 = 1;
    do {
      while( true ) {
        if (param_6 <= uVar14 + uVar10) goto LAB_000b71a1;
        bVar1 = *(byte *)(param_5 + uVar14 + uVar10);
        if (*(byte *)(param_5 + uVar7) <= bVar1) break;
        uVar14 = uVar12 + uVar14 + 1;
        uVar9 = uVar14 - uVar10;
LAB_000b6d9c:
        uVar12 = uVar14;
        uVar14 = 0;
        uVar7 = uVar12;
        if (param_6 <= uVar12) goto LAB_000b6e00;
      }
      if (*(byte *)(param_5 + uVar7) != bVar1) {
        uVar9 = 1;
        uVar14 = uVar12 + 1;
        uVar10 = uVar12;
        goto LAB_000b6d9c;
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == uVar9) {
        uVar7 = uVar14;
        uVar14 = 0;
      }
      else {
        uVar7 = 0;
      }
      uVar12 = uVar12 + uVar7;
      uVar7 = uVar12 + uVar14;
    } while (uVar12 + uVar14 < param_6);
  }
LAB_000b6e00:
  if (uVar10 < uVar11) {
    uVar9 = uVar15;
    uVar10 = uVar11;
  }
  if (param_6 < uVar10) {
    (*(code *)PTR_slice_index_fail_000c3bb0)
              (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3018,param_6);
LAB_000b718e:
    param_1 = (*(code *)PTR_slice_index_fail_000c3bb0)
                        (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3000,param_6);
LAB_000b71a1:
    uVar16 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                       (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2fb8);
LAB_000b71b1:
    uVar16 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                       (uVar16,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2fd0);
LAB_000b71c1:
    (*(code *)PTR_panic_bounds_check_000c3dd8)
              (uVar16,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2fe8);
    pcVar3 = (code *)swi(3);
    puVar8 = (undefined8 *)(*pcVar3)();
    return puVar8;
  }
  if ((CARRY8(uVar9,uVar10)) || (param_6 < uVar9 + uVar10)) goto LAB_000b718e;
  iVar4 = (*(code *)PTR_bcmp_000c3b80)();
  if (iVar4 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    uVar11 = 0;
    uVar7 = 1;
    do {
      while( true ) {
        uVar16 = extraout_XMM0_Da;
        if (param_6 <= uVar7 + uVar14) goto LAB_000b6f2e;
        uVar12 = (param_6 - uVar14) + ~uVar7;
        if (param_6 <= uVar12) goto LAB_000b71b1;
        uVar5 = ((param_6 - 1) - uVar14) - uVar11;
        if (param_6 <= uVar5) goto LAB_000b71c1;
        bVar1 = *(byte *)(param_5 + uVar5);
        bVar2 = *(byte *)(param_5 + uVar12);
        if (bVar1 <= bVar2) break;
        uVar7 = uVar14 + uVar7 + 1;
        uVar15 = uVar7 - uVar11;
        uVar14 = 0;
LAB_000b6f1c:
        if (uVar15 == uVar9) goto LAB_000b6f2e;
      }
      if (bVar2 == bVar1) {
        uVar14 = uVar14 + 1;
        if (uVar14 == uVar15) {
          uVar12 = uVar14;
          uVar14 = 0;
        }
        else {
          uVar12 = 0;
        }
        uVar7 = uVar12 + uVar7;
        goto LAB_000b6f1c;
      }
      uVar15 = 1;
      uVar14 = 0;
      uVar11 = uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar9 != 1);
LAB_000b6f2e:
    uVar12 = 1;
    uVar14 = 0;
    uVar7 = 0;
    uVar15 = 1;
    do {
      while( true ) {
        if (param_6 <= uVar15 + uVar14) goto LAB_000b6fee;
        uVar5 = (param_6 - uVar14) + ~uVar15;
        if (param_6 <= uVar5) goto LAB_000b71b1;
        uVar6 = ((param_6 - 1) - uVar14) - uVar7;
        if (param_6 <= uVar6) goto LAB_000b71c1;
        bVar1 = *(byte *)(param_5 + uVar6);
        bVar2 = *(byte *)(param_5 + uVar5);
        if (bVar2 <= bVar1) break;
        uVar15 = uVar14 + uVar15 + 1;
        uVar12 = uVar15 - uVar7;
        uVar14 = 0;
LAB_000b6fdc:
        if (uVar12 == uVar9) goto LAB_000b6fee;
      }
      if (bVar2 == bVar1) {
        uVar14 = uVar14 + 1;
        if (uVar14 == uVar12) {
          uVar5 = uVar14;
          uVar14 = 0;
        }
        else {
          uVar5 = 0;
        }
        uVar15 = uVar5 + uVar15;
        goto LAB_000b6fdc;
      }
      uVar12 = 1;
      uVar14 = 0;
      uVar7 = uVar15;
      uVar15 = uVar15 + 1;
    } while (uVar9 != 1);
LAB_000b6fee:
    if (uVar11 < uVar7) {
      uVar11 = uVar7;
    }
    uVar11 = param_6 - uVar11;
    uVar14 = param_6;
    if (uVar9 == 0) {
      uVar13 = 0;
      uVar7 = 0;
      uVar9 = 0;
      goto LAB_000b7124;
    }
    uVar15 = (ulonglong)((uint)uVar9 & 3);
    if (uVar9 < 4) {
      uVar12 = 0;
      uVar7 = 0;
LAB_000b7105:
      uVar5 = 0;
      do {
        uVar7 = uVar7 | 1L << ((ulonglong)*(byte *)(uVar12 + param_5 + uVar5) & 0x3f);
        uVar5 = uVar5 + 1;
      } while (uVar15 != uVar5);
    }
    else {
      uVar12 = 0;
      uVar7 = 0;
      do {
        uVar7 = uVar7 | 1L << ((ulonglong)*(byte *)(param_5 + uVar12) & 0x3f) |
                1L << ((ulonglong)*(byte *)(param_5 + 1 + uVar12) & 0x3f) |
                1L << ((ulonglong)*(byte *)(param_5 + 2 + uVar12) & 0x3f) |
                1L << ((ulonglong)*(byte *)(param_5 + 3 + uVar12) & 0x3f);
        uVar12 = uVar12 + 4;
      } while ((uVar9 & 0xfffffffffffffffc) != uVar12);
      if (uVar15 != 0) goto LAB_000b7105;
    }
    uVar13 = 0;
    goto LAB_000b7124;
  }
  uVar14 = (ulonglong)((uint)param_6 & 3);
  if (param_6 - 1 < 3) {
    uVar11 = 0;
    uVar7 = 0;
LAB_000b7075:
    uVar15 = 0;
    do {
      uVar7 = uVar7 | 1L << ((ulonglong)*(byte *)(uVar11 + param_5 + uVar15) & 0x3f);
      uVar15 = uVar15 + 1;
    } while (uVar14 != uVar15);
  }
  else {
    uVar11 = 0;
    uVar7 = 0;
    do {
      uVar7 = uVar7 | 1L << ((ulonglong)*(byte *)(param_5 + uVar11) & 0x3f) |
              1L << ((ulonglong)*(byte *)(param_5 + 1 + uVar11) & 0x3f) |
              1L << ((ulonglong)*(byte *)(param_5 + 2 + uVar11) & 0x3f) |
              1L << ((ulonglong)*(byte *)(param_5 + 3 + uVar11) & 0x3f);
      uVar11 = uVar11 + 4;
    } while ((param_6 & 0xfffffffffffffffc) != uVar11);
    if (uVar14 != 0) goto LAB_000b7075;
  }
  uVar9 = param_6 - uVar10;
  if (param_6 - uVar10 <= uVar10) {
    uVar9 = uVar10;
  }
  uVar9 = uVar9 + 1;
  uVar13 = 0xffffffffffffffff;
  uVar11 = uVar10;
  uVar14 = 0xffffffffffffffff;
LAB_000b7124:
  param_2[9] = param_3;
  param_2[10] = param_4;
  param_2[0xb] = param_5;
  param_2[0xc] = param_6;
  *param_2 = 1;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar9;
  param_2[4] = uVar7;
  param_2[5] = 0;
  param_2[6] = param_4;
  param_2[7] = uVar13;
  param_2[8] = uVar14;
  return param_2;
}


