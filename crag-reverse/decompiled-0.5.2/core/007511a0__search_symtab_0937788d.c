// 007511a0 search_symtab

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::search_symtab */

undefined8 __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::search_symtab
          (longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar6 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (uVar6 != 1) {
    uVar2 = 0;
    uVar7 = uVar6;
    do {
      uVar3 = uVar2 + (uVar7 >> 1);
      if (param_2 < *(ulonglong *)(lVar1 + uVar3 * 0x18)) {
        uVar3 = uVar2;
      }
      uVar7 = uVar7 - (uVar7 >> 1);
      uVar2 = uVar3;
    } while (1 < uVar7);
  }
  uVar2 = *(ulonglong *)(lVar1 + uVar3 * 0x18);
  if (uVar2 != param_2) {
    lVar4 = uVar3 + (uVar2 < param_2);
    if (lVar4 == 0) {
      return 0;
    }
    uVar3 = lVar4 - 1;
  }
  if ((((uVar3 < uVar6) && (uVar6 = *(ulonglong *)(lVar1 + uVar3 * 0x18), uVar6 <= param_2)) &&
      (lVar1 = lVar1 + uVar3 * 0x18, param_2 <= uVar6 + *(longlong *)(lVar1 + 8))) &&
     ((*(longlong *)(param_1 + 0x58) != 0 &&
      (uVar6 = (ulonglong)*(uint *)(lVar1 + 0x10), !CARRY8(uVar6,*(ulonglong *)(param_1 + 0x68))))))
  {
    uVar5 = (*(code *)PTR_read_bytes_at_until_0079abf8)
                      (*(undefined8 *)(param_1 + 0x70),uVar6 + *(ulonglong *)(param_1 + 0x68),0);
    return uVar5;
  }
  return 0;
}


