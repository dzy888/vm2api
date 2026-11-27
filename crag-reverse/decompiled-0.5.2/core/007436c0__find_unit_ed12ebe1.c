// 007436c0 find_unit

/* <addr2line[f7adfda4b3430143]::Context<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::find_unit
    */

void __rustcall
<addr2line[f7adfda4b3430143]::Context<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::find_unit(undefined8 *param_1,longlong param_2,ulonglong param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_4 == '\0') {
    uVar6 = *(ulonglong *)(param_2 + 0x20);
    if (uVar6 == 0) goto LAB_007437ca;
    lVar2 = *(longlong *)(param_2 + 0x18);
    lVar4 = 0;
    lVar5 = lVar4;
    if (uVar6 != 1) {
      do {
        lVar4 = lVar5 + (uVar6 >> 1);
        if (param_3 < *(ulonglong *)(lVar2 + 0x1c0 + lVar4 * 0x230)) {
          lVar4 = lVar5;
        }
        uVar6 = uVar6 - (uVar6 >> 1);
        lVar5 = lVar4;
      } while (1 < uVar6);
    }
    uVar6 = *(ulonglong *)(lVar2 + 0x1c0 + lVar4 * 0x230);
    if ((uVar6 == param_3) || (lVar4 = lVar4 + (ulonglong)(uVar6 < param_3), lVar4 == 0))
    goto LAB_007437ca;
    pcVar3 = (char *)(lVar2 + lVar4 * 0x230 + -0x230);
    cVar1 = *pcVar3;
  }
  else {
    if ((param_4 != '\x01') || (uVar6 = *(ulonglong *)(param_2 + 0x30), uVar6 == 0))
    goto LAB_007437ca;
    lVar2 = *(longlong *)(param_2 + 0x28);
    lVar4 = 0;
    lVar5 = lVar4;
    if (uVar6 != 1) {
      do {
        lVar4 = lVar5 + (uVar6 >> 1);
        if (param_3 < *(ulonglong *)(lVar2 + 0x1c0 + lVar4 * 0x1c8)) {
          lVar4 = lVar5;
        }
        uVar6 = uVar6 - (uVar6 >> 1);
        lVar5 = lVar4;
      } while (1 < uVar6);
    }
    uVar6 = *(ulonglong *)(lVar2 + 0x1c0 + lVar4 * 0x1c8);
    if ((uVar6 == param_3) || (lVar4 = lVar4 + (ulonglong)(uVar6 < param_3), lVar4 == 0))
    goto LAB_007437ca;
    pcVar3 = (char *)(lVar2 + lVar4 * 0x1c8 + -0x1c8);
    cVar1 = *pcVar3;
  }
  if ((cVar1 == '\0') &&
     (uVar6 = param_3 - *(ulonglong *)(pcVar3 + 8), *(ulonglong *)(pcVar3 + 8) <= param_3)) {
    uVar7 = (*(longlong *)(pcVar3 + 0x38) - *(ulonglong *)(pcVar3 + 0x30)) +
            (ulonglong)(pcVar3[0x49] == '\b') * 8 + 4;
    if ((uVar7 <= uVar6) && (uVar6 - uVar7 < *(ulonglong *)(pcVar3 + 0x30))) {
      param_1[1] = pcVar3;
      param_1[2] = uVar6;
      *param_1 = 0;
      return;
    }
  }
LAB_007437ca:
  *(undefined1 *)(param_1 + 1) = 0x3a;
  *param_1 = 1;
  return;
}


