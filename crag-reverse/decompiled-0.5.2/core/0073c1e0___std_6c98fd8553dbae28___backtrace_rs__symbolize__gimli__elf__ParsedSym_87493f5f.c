// 0073c1e0 <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0073c5f5 */
/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::quicksort::quicksort::<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,
   <[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,
   <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::quicksort::quicksort::
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
          (ulonglong *param_1,ulonglong param_2,ulonglong *param_3,int param_4,undefined8 param_5)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  if (0x20 < param_2) {
    puVar14 = param_1;
LAB_0073c287:
    do {
      if (param_4 == 0) {
        uVar3 = (param_2 >> 1) + param_2;
        do {
          do {
            if (uVar3 == 0) {
              return;
            }
            uVar3 = uVar3 - 1;
            uVar6 = uVar3 - param_2;
            if (uVar3 < param_2) {
              uVar6 = puVar14[2];
              uVar9 = *puVar14;
              uVar10 = puVar14[1];
              uVar7 = puVar14[uVar3 * 3 + 2];
              uVar13 = (puVar14 + uVar3 * 3)[1];
              *puVar14 = puVar14[uVar3 * 3];
              puVar14[1] = uVar13;
              puVar14[2] = uVar7;
              puVar14[uVar3 * 3 + 2] = uVar6;
              puVar14[uVar3 * 3] = uVar9;
              (puVar14 + uVar3 * 3)[1] = uVar10;
              uVar6 = 0;
            }
            uVar7 = uVar3;
            if (param_2 < uVar3) {
              uVar7 = param_2;
            }
            uVar9 = uVar6 * 2 + 1;
          } while (uVar7 <= uVar9);
          do {
            uVar13 = uVar6 * 2 + 2;
            uVar10 = uVar9;
            if (uVar13 < uVar7) {
              uVar10 = uVar9 + (puVar14[uVar9 * 3] < puVar14[uVar13 * 3]);
            }
            uVar9 = puVar14[uVar6 * 3];
            if (puVar14[uVar10 * 3] <= uVar9) break;
            puVar5 = puVar14 + uVar6 * 3;
            puVar8 = puVar14 + uVar10 * 3;
            *puVar5 = puVar14[uVar10 * 3];
            *puVar8 = uVar9;
            uVar6 = puVar5[1];
            uVar9 = puVar5[2];
            uVar13 = puVar8[2];
            puVar5[1] = puVar8[1];
            puVar5[2] = uVar13;
            puVar8[1] = uVar6;
            puVar8[2] = uVar9;
            uVar9 = uVar10 * 2 + 1;
            uVar6 = uVar10;
          } while (uVar9 < uVar7);
        } while( true );
      }
      puVar5 = puVar14 + (param_2 >> 3) * 0xc;
      if (0x3f < param_2) {
        lVar4 = shared::pivot::median3_rec::
                <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
                          (puVar14,puVar5);
        lVar4 = lVar4 - (longlong)puVar14;
        if (param_3 != (ulonglong *)0x0) goto LAB_0073c30c;
LAB_0073c319:
        uVar3 = puVar14[2];
        uVar7 = *puVar14;
        uVar9 = puVar14[1];
        uVar6 = *(ulonglong *)((longlong)puVar14 + lVar4 + 0x10);
        uVar10 = ((ulonglong *)((longlong)puVar14 + lVar4))[1];
        *puVar14 = *(ulonglong *)((longlong)puVar14 + lVar4);
        puVar14[1] = uVar10;
        puVar14[2] = uVar6;
        *(ulonglong *)((longlong)puVar14 + lVar4 + 0x10) = uVar3;
        *(ulonglong *)((longlong)puVar14 + lVar4) = uVar7;
        ((ulonglong *)((longlong)puVar14 + lVar4))[1] = uVar9;
        local_38 = puVar14[5];
        local_48 = puVar14[3];
        uStack_40 = puVar14[4];
        puVar5 = puVar14 + 6;
        uVar3 = *puVar14;
        uVar6 = 0;
        lVar4 = param_2 * 0x18 + -0x30;
        lVar2 = param_2 * 0x18 + -0x48;
        do {
          lVar11 = lVar2;
          lVar12 = lVar4;
          uVar7 = *puVar5;
          uVar9 = puVar14[uVar6 * 3 + 5];
          uVar10 = (puVar14 + uVar6 * 3 + 3)[1];
          puVar5[-3] = puVar14[uVar6 * 3 + 3];
          puVar5[-2] = uVar10;
          puVar5[-1] = uVar9;
          puVar14[uVar6 * 3 + 5] = puVar5[2];
          uVar9 = puVar5[1];
          puVar14[uVar6 * 3 + 3] = *puVar5;
          (puVar14 + uVar6 * 3 + 3)[1] = uVar9;
          uVar6 = uVar6 + (uVar7 < uVar3);
          puVar5 = puVar5 + 3;
          lVar4 = lVar12 + -0x18;
          lVar2 = lVar11 + -0x18;
        } while (puVar5 < puVar14 + param_2 * 3);
        do {
          puVar8 = puVar5;
          if (lVar11 == 0) {
            puVar8 = &local_48;
          }
          uVar7 = *puVar8;
          uVar9 = puVar14[uVar6 * 3 + 3];
          uVar10 = (puVar14 + uVar6 * 3 + 3)[1];
          puVar5[-1] = puVar14[uVar6 * 3 + 5];
          puVar5[-3] = uVar9;
          puVar5[-2] = uVar10;
          puVar14[uVar6 * 3 + 5] = puVar8[2];
          uVar9 = puVar8[1];
          uVar7 = uVar6 + (uVar7 < uVar3);
          puVar14[uVar6 * 3 + 3] = *puVar8;
          (puVar14 + uVar6 * 3 + 3)[1] = uVar9;
          puVar5 = puVar5 + 3;
          lVar11 = lVar11 + -0x18;
          lVar12 = lVar12 + -0x18;
          uVar6 = uVar7;
        } while (lVar12 != 0);
        if (param_2 <= uVar7) {
LAB_0073c5df:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_38 = puVar14[2];
        uVar6 = *puVar14;
        uVar9 = puVar14[1];
        uVar3 = puVar14[uVar7 * 3 + 2];
        uVar10 = (puVar14 + uVar7 * 3)[1];
        *puVar14 = puVar14[uVar7 * 3];
        puVar14[1] = uVar10;
        puVar14[2] = uVar3;
        puVar14[uVar7 * 3 + 2] = local_38;
        local_48._0_4_ = (undefined4)uVar6;
        local_48._4_4_ = (undefined4)(uVar6 >> 0x20);
        uStack_40._0_4_ = (undefined4)uVar9;
        uStack_40._4_4_ = (undefined4)(uVar9 >> 0x20);
        puVar5 = puVar14 + uVar7 * 3;
        *(undefined4 *)puVar5 = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar5 + 4) = local_48._4_4_;
        *(undefined4 *)(puVar5 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_40._4_4_;
        param_1 = puVar14 + uVar7 * 3 + 3;
        param_2 = param_2 + ~uVar7;
        local_48 = uVar6;
        uStack_40 = uVar9;
        <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
                  (puVar14,uVar7,param_3,param_4 + -1,param_5);
        param_3 = puVar14 + uVar7 * 3;
        puVar14 = param_1;
        param_4 = param_4 + -1;
        if (param_2 < 0x21) break;
        goto LAB_0073c287;
      }
      uVar3 = *puVar14;
      uVar6 = *puVar5;
      uVar7 = puVar14[(param_2 >> 3) * 0x15];
      if (uVar6 < uVar7 != uVar3 < uVar6) {
        puVar5 = puVar14 + (param_2 >> 3) * 0x15;
      }
      if (uVar3 < uVar7 != uVar3 < uVar6) {
        puVar5 = puVar14;
      }
      lVar4 = (longlong)puVar5 - (longlong)puVar14;
      if (param_3 == (ulonglong *)0x0) goto LAB_0073c319;
LAB_0073c30c:
      if (*param_3 < *(ulonglong *)((longlong)puVar14 + lVar4)) goto LAB_0073c319;
      puVar5 = (ulonglong *)(lVar4 + (longlong)puVar14);
      uVar3 = puVar14[2];
      uVar7 = *puVar14;
      uVar9 = puVar14[1];
      uVar6 = puVar5[2];
      uVar10 = puVar5[1];
      *puVar14 = *puVar5;
      puVar14[1] = uVar10;
      puVar14[2] = uVar6;
      puVar5[2] = uVar3;
      *puVar5 = uVar7;
      puVar5[1] = uVar9;
      local_38 = puVar14[5];
      local_48 = puVar14[3];
      uStack_40 = puVar14[4];
      puVar5 = puVar14 + 6;
      uVar3 = *puVar14;
      uVar6 = 0;
      lVar4 = param_2 * 0x18 + -0x30;
      lVar2 = param_2 * 0x18 + -0x48;
      do {
        lVar11 = lVar2;
        lVar12 = lVar4;
        uVar7 = *puVar5;
        uVar9 = puVar14[uVar6 * 3 + 5];
        uVar10 = (puVar14 + uVar6 * 3 + 3)[1];
        puVar5[-3] = puVar14[uVar6 * 3 + 3];
        puVar5[-2] = uVar10;
        puVar5[-1] = uVar9;
        puVar14[uVar6 * 3 + 5] = puVar5[2];
        uVar9 = puVar5[1];
        puVar14[uVar6 * 3 + 3] = *puVar5;
        (puVar14 + uVar6 * 3 + 3)[1] = uVar9;
        uVar6 = (uVar6 + 1) - (ulonglong)(uVar3 < uVar7);
        puVar5 = puVar5 + 3;
        lVar4 = lVar12 + -0x18;
        lVar2 = lVar11 + -0x18;
      } while (puVar5 < puVar14 + param_2 * 3);
      do {
        puVar8 = puVar5;
        if (lVar11 == 0) {
          puVar8 = &local_48;
        }
        uVar7 = *puVar8;
        uVar9 = puVar14[uVar6 * 3 + 3];
        uVar10 = (puVar14 + uVar6 * 3 + 3)[1];
        puVar5[-1] = puVar14[uVar6 * 3 + 5];
        puVar5[-3] = uVar9;
        puVar5[-2] = uVar10;
        puVar14[uVar6 * 3 + 5] = puVar8[2];
        uVar9 = puVar8[1];
        uVar7 = (uVar6 + 1) - (ulonglong)(uVar3 < uVar7);
        puVar14[uVar6 * 3 + 3] = *puVar8;
        (puVar14 + uVar6 * 3 + 3)[1] = uVar9;
        puVar5 = puVar5 + 3;
        lVar11 = lVar11 + -0x18;
        lVar12 = lVar12 + -0x18;
        uVar6 = uVar7;
      } while (lVar12 != 0);
      if (param_2 <= uVar7) goto LAB_0073c5df;
      local_38 = puVar14[2];
      uVar6 = *puVar14;
      uVar9 = puVar14[1];
      uVar3 = puVar14[uVar7 * 3 + 2];
      uVar10 = (puVar14 + uVar7 * 3)[1];
      *puVar14 = puVar14[uVar7 * 3];
      puVar14[1] = uVar10;
      puVar14[2] = uVar3;
      puVar14[uVar7 * 3 + 2] = local_38;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)(uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar9;
      uStack_40._4_4_ = (undefined4)(uVar9 >> 0x20);
      puVar5 = puVar14 + uVar7 * 3;
      *(undefined4 *)puVar5 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar5 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar5 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_40._4_4_;
      param_2 = param_2 + ~uVar7;
      param_1 = puVar14 + uVar7 * 3 + 3;
      param_3 = (ulonglong *)0x0;
      puVar14 = param_1;
      local_48 = uVar6;
      uStack_40 = uVar9;
      param_4 = param_4 + -1;
    } while (0x20 < param_2);
  }
  shared::smallsort::small_sort_general::
  <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
            (param_1,param_2);
  return;
}


