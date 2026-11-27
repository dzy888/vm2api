// 001a3610 fmt

/* WARNING: Switch with 1 destination removed at 0x001a364a */
/* <getrandom[6c7f7f5c828d4481]::error::Error as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<getrandom[6c7f7f5c828d4481]::error::Error_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (uint *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  uint local_14;
  uint *local_10;
  undefined *local_8;
  
  local_14 = *param_1;
  if (0x80000000 < local_14) {
    local_14 = -local_14;
    local_10 = &local_14;
    local_8 = PTR_fmt_00219f70;
    (*(code *)PTR_write_0021a2e0)(&local_10,&DAT_00115c29);
    return;
  }
  if (local_14 - 0x10000 < 3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0020b90e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (UNRECOVERED_JUMPTABLE,
               *(undefined8 *)(&DAT_00119bb0 + (ulonglong)(local_14 - 0x10000) * 8));
    return;
  }
  local_10 = &local_14;
  local_8 = PTR_fmt_00219f70;
  (*(code *)PTR_write_0021a2e0)(&local_10,&DAT_00114b5e);
  return;
}


