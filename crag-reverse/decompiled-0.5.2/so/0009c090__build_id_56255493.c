// 0009c090 build_id

/* <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::build_id */

char * __rustcall
<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::elf::Object>::build_id(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return (char *)0x0;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x30) * 0x40 + lVar6;
  do {
    if (*(int *)(lVar6 + 4) == 7) {
      uVar10 = *(ulonglong *)(lVar6 + 0x20);
      if (uVar10 == 0) {
        pcVar3 = Elf64_Ehdr_00000000.e_ident_magic_str;
        uVar9 = *(ulonglong *)(lVar6 + 0x30);
      }
      else {
        uVar9 = *(ulonglong *)(lVar6 + 0x18);
        if (*(ulonglong *)(param_1 + 0x20) - uVar9 < uVar10 ||
            *(ulonglong *)(param_1 + 0x20) < uVar9) goto LAB_0009c0d0;
        pcVar3 = (char *)(uVar9 + *(longlong *)(param_1 + 0x18));
        uVar9 = *(ulonglong *)(lVar6 + 0x30);
      }
      lVar5 = 4;
      if (((uVar9 < 5) || (lVar5 = 8, uVar9 == 8)) && (0xb < uVar10)) {
        while (uVar9 = (ulonglong)*(uint *)pcVar3, uVar9 <= uVar10 - 0xc) {
          uVar11 = lVar5 + 0xb + uVar9 & -lVar5;
          if ((uVar10 < uVar11) || (uVar10 - uVar11 < (ulonglong)*(uint *)(pcVar3 + 4))) break;
          uVar8 = lVar5 + -1 + uVar11 + (ulonglong)*(uint *)(pcVar3 + 4) & -lVar5;
          pcVar7 = pcVar3 + uVar8;
          uVar12 = uVar10 - uVar8;
          if (uVar10 < uVar8) {
            pcVar7 = Elf64_Ehdr_00000000.e_ident_magic_str;
            uVar12 = 0;
          }
          do {
            if (uVar9 == 0) goto LAB_0009c1f0;
            uVar1 = uVar9 - 1;
            lVar2 = uVar9 + 0xb;
            uVar9 = uVar1;
          } while (pcVar3[lVar2] == '\0');
          if (((uVar1 == 2) && (pcVar3[0xe] == 0x55 && *(short *)(pcVar3 + 0xc) == 0x4e47)) &&
             (*(uint *)(pcVar3 + 8) == 3)) {
            return pcVar3 + uVar11;
          }
LAB_0009c1f0:
          if ((uVar10 <= uVar8) || (pcVar3 = pcVar7, uVar10 = uVar12, uVar12 < 0xc)) break;
        }
      }
    }
LAB_0009c0d0:
    lVar6 = lVar6 + 0x40;
    if (lVar6 == lVar4) {
      return (char *)0x0;
    }
  } while( true );
}


