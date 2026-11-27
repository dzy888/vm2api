// 006d96d0 fmt

/* WARNING: Switch with 1 destination removed at 0x006d96e8 */
/* <serde[8f836fbdfa2c5b5d]::private::de::content::ExpectedInMap as
   serde_core[48776c27239fa21f]::de::Expected>::fmt */

void __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ExpectedInMap_as_serde_core[48776c27239fa21f]::de::Expected>
::fmt(longlong *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *local_10;
  undefined *local_8;
  
  if (*param_1 == 1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,0x10);
    return;
  }
  local_8 = PTR_fmt_007991f0;
  local_10 = param_1;
  (*(code *)PTR_write_007994b0)(&local_10,&DAT_001868e4);
  return;
}


