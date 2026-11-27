// 00751d30 build_id

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::build_id */

longlong __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::build_id(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x30) * 0x40 + lVar6;
  do {
    if (*(int *)(lVar6 + 4) == 7) {
      uVar10 = *(ulonglong *)(lVar6 + 0x20);
      if (uVar10 == 0) {
        puVar3 = (uint *)0x1;
        uVar9 = *(ulonglong *)(lVar6 + 0x30);
      }
      else {
        uVar9 = *(ulonglong *)(lVar6 + 0x18);
        if (*(ulonglong *)(param_1 + 0x20) - uVar9 < uVar10 ||
            *(ulonglong *)(param_1 + 0x20) < uVar9) goto LAB_00751d70;
        puVar3 = (uint *)(uVar9 + *(longlong *)(param_1 + 0x18));
        uVar9 = *(ulonglong *)(lVar6 + 0x30);
      }
      lVar5 = 4;
      if (((uVar9 < 5) || (lVar5 = 8, uVar9 == 8)) && (0xb < uVar10)) {
        while (uVar9 = (ulonglong)*puVar3, uVar9 <= uVar10 - 0xc) {
          uVar11 = lVar5 + 0xb + uVar9 & -lVar5;
          if ((uVar10 < uVar11) || (uVar10 - uVar11 < (ulonglong)puVar3[1])) break;
          uVar8 = lVar5 + -1 + uVar11 + (ulonglong)puVar3[1] & -lVar5;
          puVar7 = (uint *)((longlong)puVar3 + uVar8);
          uVar12 = uVar10 - uVar8;
          if (uVar10 < uVar8) {
            puVar7 = (uint *)0x1;
            uVar12 = 0;
          }
          do {
            if (uVar9 == 0) goto LAB_00751e90;
            uVar1 = uVar9 - 1;
            lVar2 = uVar9 + 0xb;
            uVar9 = uVar1;
          } while (*(char *)((longlong)puVar3 + lVar2) == '\0');
          if (((uVar1 == 2) &&
              (*(char *)((longlong)puVar3 + 0xe) == 'U' && (short)puVar3[3] == 0x4e47)) &&
             (puVar3[2] == 3)) {
            return (longlong)puVar3 + uVar11;
          }
LAB_00751e90:
          if ((uVar10 <= uVar8) || (puVar3 = puVar7, uVar10 = uVar12, uVar12 < 0xc)) break;
        }
      }
    }
LAB_00751d70:
    lVar6 = lVar6 + 0x40;
    if (lVar6 == lVar4) {
      return 0;
    }
  } while( true );
}


