// 00635370 fmt

/* WARNING: Switch with 1 destination removed at 0x006353b3 */
/* <&core[c0acaeba6ab4c2e0]::option::Option<u8> as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&core[c0acaeba6ab4c2e0]::option::Option<u8>as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char *local_8;
  
  if (*(char *)*param_1 == '\x01') {
    local_8 = (char *)*param_1 + 1;
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&local_8,4,&DAT_0078f838);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,4);
  return;
}


