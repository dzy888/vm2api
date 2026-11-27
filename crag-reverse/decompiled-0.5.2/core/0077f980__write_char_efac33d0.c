// 0077f980 write_char

/* <core[c0acaeba6ab4c2e0]::fmt::builders::PadAdapter as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::fmt::builders::PadAdapter_as_core[c0acaeba6ab4c2e0]::fmt::Write>::
write_char(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  pcVar1 = *(char **)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  if (*pcVar1 != '\0') {
    cVar3 = (**(code **)(lVar2 + 0x18))(param_4,4);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  *pcVar1 = param_2 == 10;
                    /* WARNING: Could not recover jumptable at 0x0077f9dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(lVar2 + 0x20))();
  return uVar4;
}


