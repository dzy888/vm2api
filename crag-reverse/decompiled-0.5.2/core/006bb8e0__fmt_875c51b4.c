// 006bb8e0 fmt

/* WARNING: Switch with 1 destination removed at 0x006bb91c */
/* WARNING: Switch with 1 destination removed at 0x006bb934 */
/* WARNING: Switch with 1 destination removed at 0x006bb94c */
/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Writing as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Writing_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0x8000000000000002:
    uVar1 = 4;
    break;
  default:
    (*(code *)PTR_debug_tuple_0079a490)(4,"Body");
    (*(code *)PTR_field_0079a498)();
    (*(code *)PTR_finish_0079a4a0)();
    return;
  case 0x8000000000000004:
    uVar1 = 9;
    break;
  case 0x8000000000000005:
    uVar1 = 6;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,uVar1);
  return;
}


