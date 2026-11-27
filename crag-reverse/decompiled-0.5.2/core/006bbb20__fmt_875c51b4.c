// 006bbb20 fmt

/* WARNING: Switch with 1 destination removed at 0x006bbbaa */
/* <hyper[c4782d5b5c5e3493]::proto::h1::encode::Kind as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::encode::Kind_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *local_8;
  
  lVar1 = 0;
  if (*param_1 < -0x7ffffffffffffffe) {
    lVar1 = *param_1 + -0x7fffffffffffffff;
  }
  if (lVar1 == 0) {
    local_8 = param_1;
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&local_8,7,&DAT_00792b30);
    return;
  }
  if (lVar1 == 1) {
    local_8 = param_1 + 1;
    (*(code *)PTR_debug_tuple_field1_finish_007998d0)(&local_8,6,&DAT_00792b50);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,0xe);
  return;
}


