// 00764190 fmt

/* <&mut dyn core[c0acaeba6ab4c2e0]::panic::PanicPayload as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<&mut_dyn_core[c0acaeba6ab4c2e0]::panic::PanicPayload_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0076419e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}


