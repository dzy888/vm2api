// 006b7ac0 fmt

/* WARNING: Switch with 1 destination removed at 0x006b7afe */
/* <core[c0acaeba6ab4c2e0]::option::Option<bytes[e9829e187354639b]::bytes_mut::BytesMut> as
   core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<bytes[e9829e187354639b]::bytes_mut::BytesMut>as_core[c0acaeba6ab4c2e0]::fmt::Debug>
::fmt(longlong *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *local_8;
  
  if (*param_1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,4);
    return;
  }
  local_8 = param_1;
  (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&local_8,4,&DAT_00792838);
  return;
}


