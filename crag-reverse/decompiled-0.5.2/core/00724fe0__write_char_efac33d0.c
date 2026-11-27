// 00724fe0 write_char

/* WARNING: Switch with 1 destination removed at 0x00724fec */
/* <<serde_core[48776c27239fa21f]::de::WithDecimalPoint as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::LookForDecimalPoint as
   core[c0acaeba6ab4c2e0]::fmt::Write>::write_char */

void __rustcall
<<serde_core[48776c27239fa21f]::de::WithDecimalPoint_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::LookForDecimalPoint_as_core[c0acaeba6ab4c2e0]::fmt::Write>
::write_char(longlong *param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | param_2 == 0x2e;
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*param_1 + 8) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0078200e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}


