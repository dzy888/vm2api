// 006e6330 write_char

/* <tokio[d7d91d38da47d894]::runtime::runtime::display_eq::FormatEq as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::runtime::display_eq::FormatEq_as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_char(longlong *param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_2 < 0x80) {
    uVar5 = 1;
    cVar1 = (char)param_1[2];
  }
  else if (param_2 < 0x800) {
    param_4 = (ulonglong)(param_2 >> 6) | 0xc0;
    uVar5 = 2;
    cVar1 = (char)param_1[2];
  }
  else {
    param_4 = (ulonglong)(param_2 >> 6) & 0xffffffffffffff3f | 0x80;
    if (param_2 < 0x10000) {
      uVar5 = 3;
      cVar1 = (char)param_1[2];
    }
    else {
      uVar5 = 4;
      cVar1 = (char)param_1[2];
    }
  }
  if (cVar1 == '\0') {
    uVar2 = param_1[1];
    if (uVar5 <= uVar2) {
      lVar3 = *param_1;
      iVar4 = (*(code *)PTR_bcmp_00799020)(param_4,uVar5);
      if (iVar4 == 0) {
        *param_1 = lVar3 + uVar5;
        param_1[1] = uVar2 - uVar5;
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return 0;
}


