// 0073c0e0 <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::heapsort::heapsort::<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,
   <[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,
   <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::{closure#3}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::heapsort::heapsort::
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym,<[std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::ParsedSym]>::sort_unstable_by_key<u64,<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::parse::_closure_3_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar8 = (param_2 >> 1) + param_2;
  do {
    do {
      if (uVar8 == 0) {
        return;
      }
      uVar8 = uVar8 - 1;
      uVar10 = uVar8 - param_2;
      if (uVar8 < param_2) {
        uVar3 = param_1[2];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar4 = param_1[uVar8 * 3 + 2];
        uVar7 = (param_1 + uVar8 * 3)[1];
        *param_1 = param_1[uVar8 * 3];
        param_1[1] = uVar7;
        param_1[2] = uVar4;
        param_1[uVar8 * 3 + 2] = uVar3;
        param_1[uVar8 * 3] = uVar5;
        (param_1 + uVar8 * 3)[1] = uVar6;
        uVar10 = 0;
      }
      uVar9 = uVar8;
      if (param_2 < uVar8) {
        uVar9 = param_2;
      }
      uVar11 = uVar10 * 2 + 1;
    } while (uVar9 <= uVar11);
    do {
      uVar13 = uVar10 * 2 + 2;
      uVar12 = uVar11;
      if (uVar13 < uVar9) {
        uVar12 = uVar11 + ((ulonglong)param_1[uVar11 * 3] < (ulonglong)param_1[uVar13 * 3]);
      }
      uVar11 = param_1[uVar10 * 3];
      if ((ulonglong)param_1[uVar12 * 3] <= uVar11) break;
      puVar1 = param_1 + uVar10 * 3;
      puVar2 = param_1 + uVar12 * 3;
      *puVar1 = param_1[uVar12 * 3];
      *puVar2 = uVar11;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar13 = puVar2[2];
      puVar1[1] = puVar2[1];
      puVar1[2] = uVar13;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      uVar11 = uVar12 * 2 + 1;
      uVar10 = uVar12;
    } while (uVar11 < uVar9);
  } while( true );
}


