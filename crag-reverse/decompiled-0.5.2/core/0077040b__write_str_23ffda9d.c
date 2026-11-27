// 0077040b write_str

/* WARNING: Switch with 1 destination removed at 0x00770434 */
/* <rustc_demangle[a2bba03bad1b7f1a]::SizeLimitedFmtAdapter<&mut
   core[c0acaeba6ab4c2e0]::fmt::Formatter> as core[c0acaeba6ab4c2e0]::fmt::Write>::write_str */

undefined8 __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::SizeLimitedFmtAdapter<&mut_core[c0acaeba6ab4c2e0]::fmt::Formatter>as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_str(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  *param_1 = (ulonglong)((byte)(uVar1 < param_3 | (byte)uVar2) & 1);
  param_1[1] = uVar1 - param_3;
  if (uVar1 < param_3 || ((byte)uVar2 & 1) != 0) {
    return CONCAT71((int7)(uVar1 - param_3 >> 8),1);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1[2] + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return uVar3;
}


