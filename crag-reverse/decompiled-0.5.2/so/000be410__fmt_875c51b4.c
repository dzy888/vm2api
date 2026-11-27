// 000be410 fmt

/* <core[c0acaeba6ab4c2e0]::io::error::ErrorKind as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<core[c0acaeba6ab4c2e0]::io::error::ErrorKind_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (byte *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000be43a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (UNRECOVERED_JUMPTABLE,*(undefined8 *)(&DAT_00018f30 + (ulonglong)*param_1 * 8));
  return;
}


