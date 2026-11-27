// 006b3410 fmt

/* WARNING: Switch with 1 destination removed at 0x006b3454 */
/* <&core[c0acaeba6ab4c2e0]::option::Option<usize> as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&core[c0acaeba6ab4c2e0]::option::Option<usize>as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int *local_8;
  
  if (*(int *)*param_1 == 1) {
    local_8 = (int *)*param_1 + 2;
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&local_8,4,&DAT_00792140);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,4);
  return;
}


