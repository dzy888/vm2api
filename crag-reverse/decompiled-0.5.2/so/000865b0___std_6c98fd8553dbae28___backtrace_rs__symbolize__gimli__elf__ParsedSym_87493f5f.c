// 000865b0 <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::ipnsort::<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,
   <[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,
   <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::ipnsort::
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
          (ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  if (param_2 < 2) {
    return;
  }
  uVar1 = param_1[3];
  uVar8 = 2;
  if (uVar1 < *param_1) {
    if (param_2 != 2) {
      puVar10 = param_1 + 6;
      uVar11 = uVar1;
      do {
        uVar2 = *puVar10;
        if (uVar11 <= uVar2) goto LAB_000865ff;
        uVar8 = uVar8 + 1;
        puVar10 = puVar10 + 3;
        uVar11 = uVar2;
      } while (param_2 != uVar8);
      goto LAB_00086647;
    }
  }
  else if (param_2 != 2) {
    puVar10 = param_1 + 6;
    uVar11 = uVar1;
    do {
      uVar2 = *puVar10;
      if (uVar2 < uVar11) goto LAB_000865ff;
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 3;
      uVar11 = uVar2;
    } while (param_2 != uVar8);
    goto LAB_00086647;
  }
LAB_000865ff:
  if (uVar8 != param_2) {
    lVar4 = 0x3f;
    if ((param_2 | 1) != 0) {
      for (; (param_2 | 1) >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    quicksort::quicksort::
    <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
              (param_1,param_2,0,((uint)lVar4 ^ 0x3f) * 2 ^ 0x7e,param_3);
    return;
  }
LAB_00086647:
  if (uVar1 < *param_1) {
    lVar9 = 0;
    lVar4 = param_2 * 0x18;
    do {
      lVar7 = lVar4 + -0x18;
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar9);
      uVar5 = ((undefined8 *)((longlong)param_1 + lVar9))[1];
      uVar6 = ((undefined8 *)((longlong)param_1 + lVar7))[1];
      *(undefined8 *)((longlong)param_1 + lVar9) = *(undefined8 *)((longlong)param_1 + lVar7);
      ((undefined8 *)((longlong)param_1 + lVar9))[1] = uVar6;
      *(undefined8 *)((longlong)param_1 + lVar7) = uVar3;
      ((undefined8 *)((longlong)param_1 + lVar7))[1] = uVar5;
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar9 + 0x10);
      *(undefined8 *)((longlong)param_1 + lVar9 + 0x10) =
           *(undefined8 *)((longlong)param_1 + lVar4 + -8);
      *(undefined8 *)((longlong)param_1 + lVar4 + -8) = uVar3;
      lVar9 = lVar9 + 0x18;
      lVar4 = lVar7;
    } while ((param_2 * 4 & 0xfffffffffffffff8) * 3 != lVar9);
  }
  return;
}


