// 006e5770 write_str

/* <tokio[d7d91d38da47d894]::runtime::runtime::display_eq::FormatEq as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::runtime::display_eq::FormatEq_as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_str(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((char)param_1[2] == '\0') {
    uVar1 = param_1[1];
    if (param_3 <= uVar1) {
      lVar2 = *param_1;
      iVar3 = (*(code *)PTR_bcmp_00799020)();
      if (iVar3 == 0) {
        *param_1 = lVar2 + param_3;
        param_1[1] = uVar1 - param_3;
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return 0;
}


