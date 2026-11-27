// 006b33c0 fmt

/* WARNING: Switch with 1 destination removed at 0x006b3401 */
/* <&core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>>
   as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>>as_core[c0acaeba6ab4c2e0]::fmt::Debug>
::fmt(undefined8 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *local_8;
  
  local_8 = (longlong *)*param_1;
  if (*local_8 == -1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,4);
    return;
  }
  (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&local_8,4,&DAT_00792120);
  return;
}


