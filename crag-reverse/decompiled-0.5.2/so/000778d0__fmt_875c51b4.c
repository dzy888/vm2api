// 000778d0 fmt

/* WARNING: Switch with 1 destination removed at 0x000778e8 */
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
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,0x10);
    return;
  }
  local_8 = PTR_fmt_000c3c58;
  local_10 = param_1;
  (*(code *)PTR_write_000c3f70)(&local_10,&DAT_00009cc3);
  return;
}


