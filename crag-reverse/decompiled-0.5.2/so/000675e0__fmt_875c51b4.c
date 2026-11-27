// 000675e0 fmt

/* WARNING: Switch with 1 destination removed at 0x0006761e */
/* <std[6c98fd8553dbae28]::env::VarError as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<std[6c98fd8553dbae28]::env::VarError_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *local_8;
  
  if (*param_1 == -1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,10);
    return;
  }
  local_8 = param_1;
  (*(code *)PTR_debug_tuple_field1_finish_000c3f68)(&local_8,10,&DAT_000c0c80);
  return;
}


