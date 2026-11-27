// 000870e0 <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>

/* WARNING: Type propagation algorithm not settling */
/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general::<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,
   <[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,
   <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general::
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
          (ulonglong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong lVar22;
  ulonglong *puVar23;
  ulonglong auStack_540 [9];
  ulonglong auStack_4f8 [12];
  ulonglong local_498;
  ulonglong uStack_490;
  ulonglong local_488;
  ulonglong local_480;
  ulonglong uStack_478;
  ulonglong local_470;
  ulonglong local_48;
  ulonglong uStack_40;
  
  if (param_2 < 2) {
    return;
  }
  uVar9 = param_2 >> 1;
  if (param_2 < 8) {
    auStack_4f8[8] = param_1[2];
    auStack_4f8[6] = *param_1;
    auStack_4f8[7] = param_1[1];
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0xe) * 8 + 0x18) = param_1[uVar9 * 3 + 2];
    uVar15 = (param_1 + uVar9 * 3)[1];
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0xc) * 8 + 0x18) = param_1[uVar9 * 3];
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0xd) * 8 + 0x18) = uVar15;
    uVar15 = 1;
    uVar17 = param_2 - uVar9;
    if (uVar9 < 2) goto LAB_0008741d;
  }
  else {
    uVar17 = (ulonglong)(param_1[3] >= *param_1);
    uVar15 = (ulonglong)(param_1[3] < *param_1);
    puVar12 = param_1 + 6;
    if (param_1[9] < param_1[6]) {
      puVar12 = param_1 + 9;
    }
    puVar16 = param_1 + uVar17 * 3;
    puVar18 = param_1 + 9;
    if (param_1[9] < param_1[6]) {
      puVar18 = param_1 + 6;
    }
    puVar10 = puVar16;
    if (*puVar18 < param_1[uVar17 * 3]) {
      puVar10 = puVar12;
    }
    puVar14 = puVar12;
    puVar23 = param_1 + uVar15 * 3;
    if (*puVar12 < param_1[uVar15 * 3]) {
      puVar14 = puVar16;
      puVar23 = puVar12;
      puVar10 = param_1 + uVar15 * 3;
    }
    if (*puVar18 < param_1[uVar17 * 3]) {
      puVar14 = puVar18;
    }
    else {
      puVar16 = puVar18;
    }
    puVar12 = puVar14;
    if (*puVar14 < *puVar10) {
      puVar12 = puVar10;
      puVar10 = puVar14;
    }
    auStack_4f8[8] = puVar23[2];
    auStack_4f8[6] = *puVar23;
    auStack_4f8[7] = puVar23[1];
    auStack_4f8[0xb] = puVar10[2];
    auStack_4f8[9] = *puVar10;
    auStack_4f8[10] = puVar10[1];
    local_488 = puVar12[2];
    local_498 = *puVar12;
    uStack_490 = puVar12[1];
    uVar15 = (ulonglong)(param_1[uVar9 * 3 + 3] >= param_1[uVar9 * 3]);
    uVar17 = (ulonglong)(param_1[uVar9 * 3 + 3] < param_1[uVar9 * 3]);
    puVar12 = param_1 + uVar9 * 3 + uVar15 * 3;
    puVar10 = param_1 + uVar9 * 3 + 9;
    puVar18 = param_1 + uVar9 * 3 + 6;
    if (param_1[uVar9 * 3 + 9] < param_1[uVar9 * 3 + 6]) {
      puVar10 = param_1 + uVar9 * 3 + 6;
      puVar18 = param_1 + uVar9 * 3 + 9;
    }
    puVar23 = puVar12;
    if (*puVar10 < param_1[uVar9 * 3 + uVar15 * 3]) {
      puVar23 = puVar18;
    }
    puVar14 = param_1 + uVar9 * 3 + uVar17 * 3;
    if (*puVar18 < param_1[uVar9 * 3 + uVar17 * 3]) {
      puVar14 = puVar18;
      puVar23 = param_1 + uVar9 * 3 + uVar17 * 3;
    }
    if (*puVar18 < param_1[uVar9 * 3 + uVar17 * 3]) {
      puVar18 = puVar12;
    }
    if (*puVar10 < param_1[uVar9 * 3 + uVar15 * 3]) {
      puVar18 = puVar10;
    }
    else {
      puVar12 = puVar10;
    }
    local_470 = puVar16[2];
    puVar10 = puVar23;
    if (*puVar18 < *puVar23) {
      puVar10 = puVar18;
    }
    local_480 = *puVar16;
    uStack_478 = puVar16[1];
    if (*puVar18 < *puVar23) {
      puVar18 = puVar23;
    }
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0xe) * 8 + 0x18) = puVar14[2];
    uVar15 = puVar14[1];
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0xc) * 8 + 0x18) = *puVar14;
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0xd) * 8 + 0x18) = uVar15;
    uVar15 = puVar10[1];
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0xf) * 8 + 0x18) = *puVar10;
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0x10) * 8 + 0x18) = uVar15;
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0x11) * 8 + 0x18) = puVar10[2];
    uVar15 = puVar18[1];
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0x12) * 8 + 0x18) = *puVar18;
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0x13) * 8 + 0x18) = uVar15;
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0x14) * 8 + 0x18) = puVar18[2];
    uVar15 = puVar12[1];
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0x15) * 8 + 0x18) = *puVar12;
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0x16) * 8 + 0x18) = uVar15;
    *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0x17) * 8 + 0x18) = puVar12[2];
    uVar15 = 4;
    uVar17 = param_2 - uVar9;
    if (uVar9 < 5) goto LAB_0008741d;
  }
  lVar11 = (ulonglong)(uint)((int)uVar15 * 8) * 3;
  uVar19 = uVar15;
  do {
    uVar3 = (param_1 + uVar19 * 3)[1];
    *(ulonglong *)((longlong)auStack_540 + (uVar19 * 3 + 0xc) * 8 + 0x18) = param_1[uVar19 * 3];
    *(ulonglong *)((longlong)auStack_540 + (uVar19 * 3 + 0xd) * 8 + 0x18) = uVar3;
    *(ulonglong *)((longlong)auStack_540 + (uVar19 * 3 + 0xe) * 8 + 0x18) = param_1[uVar19 * 3 + 2];
    uVar3 = *(ulonglong *)((longlong)auStack_540 + (uVar19 * 3 + 0xc) * 8 + 0x18);
    if (uVar3 < *(ulonglong *)((longlong)auStack_540 + (uVar19 * 3 + 9) * 8 + 0x18)) {
      local_48 = param_1[uVar19 * 3 + 1];
      uStack_40 = param_1[uVar19 * 3 + 2];
      lVar20 = lVar11;
      do {
        lVar22 = lVar20;
        *(undefined8 *)((longlong)auStack_4f8 + lVar22 + 0x40U) =
             *(undefined8 *)((longlong)auStack_4f8 + lVar22 + 0x28U);
        *(undefined8 *)((longlong)auStack_4f8 + lVar22 + 0x30U) =
             *(undefined8 *)((longlong)auStack_4f8 + lVar22 + 0x18U);
        *(undefined8 *)((longlong)auStack_4f8 + lVar22 + 0x38U) =
             *(undefined8 *)((longlong)auStack_4f8 + lVar22 + 0x20U);
        if (lVar22 == 0x18) {
          puVar12 = (ulonglong *)((longlong)auStack_4f8 + 0x30);
          goto LAB_00087363;
        }
        lVar20 = lVar22 + -0x18;
      } while (uVar3 < *(ulonglong *)((longlong)auStack_4f8 + lVar22));
      puVar12 = (ulonglong *)((longlong)auStack_4f8 + lVar22 + 0x18U);
LAB_00087363:
      *puVar12 = uVar3;
      uVar3 = uStack_40;
      puVar12[1] = local_48;
      puVar12[2] = uVar3;
    }
    uVar19 = uVar19 + 1;
    lVar11 = lVar11 + 0x18;
  } while (uVar19 != uVar9);
LAB_0008741d:
  lVar11 = uVar9 * 0x18;
  puVar12 = (ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 0xc) * 8 + 0x18);
  if (uVar15 < uVar17) {
    lVar20 = (ulonglong)(uint)((int)uVar15 * 8) * 3;
    do {
      uVar19 = (param_1 + uVar9 * 3 + uVar15 * 3)[1];
      puVar12[uVar15 * 3] = param_1[uVar9 * 3 + uVar15 * 3];
      (puVar12 + uVar15 * 3)[1] = uVar19;
      *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + uVar15 * 3 + 0xe) * 8 + 0x18) =
           param_1[uVar9 * 3 + uVar15 * 3 + 2];
      uVar19 = puVar12[uVar15 * 3];
      if (uVar19 < *(ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + uVar15 * 3 + 9) * 8 + 0x18))
      {
        local_48 = param_1[uVar9 * 3 + uVar15 * 3 + 1];
        uStack_40 = param_1[uVar9 * 3 + uVar15 * 3 + 2];
        lVar22 = lVar20;
        do {
          *(undefined8 *)((longlong)auStack_4f8 + lVar22 + lVar11 + 0x40U) =
               *(undefined8 *)((longlong)auStack_4f8 + lVar22 + lVar11 + 0x28U);
          puVar2 = (undefined8 *)((longlong)auStack_4f8 + lVar22 + lVar11 + 0x18U);
          uVar7 = puVar2[1];
          *(undefined8 *)((longlong)puVar12 + lVar22) = *puVar2;
          ((undefined8 *)((longlong)puVar12 + lVar22))[1] = uVar7;
          if (lVar22 == 0x18) {
            puVar16 = puVar12;
            goto LAB_00087453;
          }
          lVar1 = lVar22 + -0x18;
          lVar8 = lVar22 + lVar11;
          lVar22 = lVar1;
        } while (uVar19 < *(ulonglong *)((longlong)auStack_4f8 + lVar8));
        puVar16 = (ulonglong *)(lVar1 + (longlong)puVar12);
LAB_00087453:
        *puVar16 = uVar19;
        uVar19 = uStack_40;
        puVar16[1] = local_48;
        puVar16[2] = uVar19;
      }
      uVar15 = uVar15 + 1;
      lVar20 = lVar20 + 0x18;
    } while (uVar15 != uVar17);
  }
  puVar18 = (ulonglong *)((longlong)auStack_540 + (param_2 * 3 + 9) * 8 + 0x18);
  puVar16 = (ulonglong *)((longlong)auStack_540 + (uVar9 * 3 + 9) * 8 + 0x18);
  puVar10 = (ulonglong *)((longlong)auStack_4f8 + 0x30);
  puVar23 = param_1 + param_2 * 3;
  do {
    puVar21 = param_1;
    uVar15 = *puVar12;
    uVar17 = *puVar10;
    puVar14 = puVar10;
    puVar13 = puVar10 + 3;
    if (uVar15 < uVar17) {
      puVar14 = puVar12;
      puVar13 = puVar10;
    }
    puVar10 = puVar13;
    puVar21[2] = puVar14[2];
    puVar13 = puVar12 + 3;
    if (uVar15 >= uVar17) {
      puVar13 = puVar12;
    }
    uVar15 = *puVar18;
    uVar17 = *puVar16;
    puVar12 = puVar18;
    if (uVar15 < uVar17) {
      puVar12 = puVar16;
    }
    uVar19 = puVar14[1];
    *puVar21 = *puVar14;
    puVar21[1] = uVar19;
    puVar23[-1] = puVar12[2];
    uVar5 = *(undefined4 *)((longlong)puVar12 + 4);
    uVar19 = puVar12[1];
    uVar6 = *(undefined4 *)((longlong)puVar12 + 0xc);
    *(int *)(puVar23 + -3) = (int)*puVar12;
    *(undefined4 *)((longlong)puVar23 + -0x14) = uVar5;
    *(int *)(puVar23 + -2) = (int)uVar19;
    *(undefined4 *)((longlong)puVar23 + -0xc) = uVar6;
    puVar18 = puVar18 + ((ulonglong)(uVar15 < uVar17) - 1) * 3;
    puVar16 = puVar16 + (ulonglong)(uVar15 < uVar17) * -3;
    uVar9 = uVar9 - 1;
    puVar12 = puVar13;
    param_1 = puVar21 + 3;
    puVar23 = puVar23 + -3;
  } while (uVar9 != 0);
  puVar16 = puVar16 + 3;
  puVar12 = puVar10;
  if ((param_2 & 1) != 0) {
    puVar12 = puVar13;
    if (puVar10 < puVar16) {
      puVar12 = puVar10;
    }
    puVar21[5] = puVar12[2];
    uVar5 = *(undefined4 *)((longlong)puVar12 + 4);
    uVar9 = puVar12[1];
    uVar6 = *(undefined4 *)((longlong)puVar12 + 0xc);
    *(int *)(puVar21 + 3) = (int)*puVar12;
    *(undefined4 *)((longlong)puVar21 + 0x1c) = uVar5;
    *(int *)(puVar21 + 4) = (int)uVar9;
    *(undefined4 *)((longlong)puVar21 + 0x24) = uVar6;
    puVar12 = puVar10 + 3;
    if (puVar10 >= puVar16) {
      puVar13 = puVar13 + 3;
      puVar12 = puVar10;
    }
  }
  if ((puVar12 != puVar16) || (puVar13 != puVar18 + 3)) {
    auStack_4f8[5] = 0x87607;
    (*(code *)PTR_panic_on_ord_violation_000c3fb0)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  return;
}


