// 001c37a0 write_str

/* WARNING: Switch with 1 destination removed at 0x001c3801 */
/* <<serde_core[48776c27239fa21f]::de::WithDecimalPoint as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::LookForDecimalPoint as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

void __rustcall
<<serde_core[48776c27239fa21f]::de::WithDecimalPoint_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::LookForDecimalPoint_as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_str(longlong *param_1,longlong param_2,ulonglong param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      bVar2 = false;
    }
    else {
      lVar1 = 0;
      do {
        bVar2 = *(char *)(param_2 + lVar1) == '.';
        if (bVar2) break;
        bVar3 = param_3 - 1 != lVar1;
        lVar1 = lVar1 + 1;
      } while (bVar3);
    }
  }
  else {
    lVar1 = (*(code *)PTR_memchr_aligned_00219d40)();
    bVar2 = lVar1 == 1;
  }
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | bVar2;
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*param_1 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0020b90e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_3);
  return;
}


