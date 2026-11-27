// 00196b60 fmt

/* WARNING: Switch with 1 destination removed at 0x00196ba3 */
/* <&core[c0acaeba6ab4c2e0]::option::Option<u8> as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&core[c0acaeba6ab4c2e0]::option::Option<u8>as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char *local_8;
  
  if (*(char *)*param_1 == '\x01') {
    local_8 = (char *)*param_1 + 1;
    (*(code *)PTR_debug_tuple_field1_finish_0021a308)(&local_8,4,&DAT_002163c8);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0020b90e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,4);
  return;
}


