// 00073ca0 fmt

/* WARNING: Switch with 1 destination removed at 0x00073cd1 */
/* <serde_json[dc3825464c436029]::error::JsonUnexpected as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<serde_json[dc3825464c436029]::error::JsonUnexpected_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (char *param_1,longlong param_2)

{
  ulonglong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  bool bVar3;
  char *local_48;
  longlong local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*param_1 == '\x03') {
    uVar1 = *(ulonglong *)(param_1 + 8);
    if ((uVar1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      local_40 = (*(code *)PTR_write_to_zmij_buffer_000c3dc0)();
      local_40 = local_40 - (longlong)&local_28;
      local_48 = (char *)&local_28;
    }
    else {
      pcVar2 = "-inf";
      if ((longlong)uVar1 >= 0) {
        pcVar2 = "inf";
      }
      bVar3 = (uVar1 & 0xfffffffffffff) == 0;
      local_40 = 3;
      if (bVar3) {
        local_40 = (ulonglong)((longlong)uVar1 < 0) + 3;
      }
      local_48 = "NaN";
      if (bVar3) {
        local_48 = pcVar2;
      }
    }
    local_38 = (undefined1 *)&local_48;
    local_30 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    (*(code *)PTR_write_000c3f70)(&local_38,&DAT_00009897);
    return;
  }
  if (*param_1 == '\a') {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,4);
    return;
  }
  local_18 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)param_1;
  uStack_20 = *(undefined8 *)(param_1 + 8);
  (*(code *)PTR_fmt_000c4000)();
  return;
}


