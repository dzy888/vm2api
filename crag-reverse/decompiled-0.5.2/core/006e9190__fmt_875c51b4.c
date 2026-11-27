// 006e9190 fmt

/* WARNING: Switch with 1 destination removed at 0x006e91a7 */
/* WARNING: Switch with 1 destination removed at 0x006e91bc */
/* <tokio[d7d91d38da47d894]::runtime::handle::TryCurrentError as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::handle::TryCurrentError_as_core[c0acaeba6ab4c2e0]::fmt::Display>
::fmt(char *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*param_1 == '\x01') {
    uVar1 = 0x3b;
  }
  else {
    uVar1 = 0x53;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar1);
  return;
}


