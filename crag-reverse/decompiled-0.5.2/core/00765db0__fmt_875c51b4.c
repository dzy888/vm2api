// 00765db0 fmt

/* WARNING: Switch with 1 destination removed at 0x00765dc2 */
/* <std[6c98fd8553dbae28]::panicking::begin_panic::Payload<&str> as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<std[6c98fd8553dbae28]::panicking::begin_panic::Payload<&str>as_core[c0acaeba6ab4c2e0]::fmt::Display>
::fmt(longlong *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 == 0) {
    (*(code *)PTR_abort_00799748)();
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_1[1]);
  return;
}


