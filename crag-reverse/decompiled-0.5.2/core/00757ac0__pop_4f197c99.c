// 00757ac0 pop

/* <std[6c98fd8553dbae28]::path::PathBuf>::pop */

undefined8 __rustcall
<std[6c98fd8553dbae28]::path::PathBuf>::pop(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong local_a0 [7];
  ulonglong *local_68;
  undefined *local_60;
  undefined1 local_58;
  undefined2 local_30;
  undefined1 local_2e;
  
  pcVar1 = *(char **)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 == 0) {
    local_2e = false;
  }
  else {
    local_2e = *pcVar1 == '/';
  }
  local_58 = 0xff;
  local_30 = 0x201;
  local_68 = (ulonglong *)pcVar1;
  local_60 = (undefined *)uVar2;
  (*(code *)PTR_next_back_0079a1d8)();
  if ((0xf7 < (byte)((char)local_a0[0] - 7U)) ||
     (lVar5 = (*(code *)PTR_as_path_0079ac00)(), lVar5 == 0)) {
    return 0;
  }
  if (uVar2 < param_3) {
    return 1;
  }
  if (((param_3 != 0) && (param_3 != uVar2)) &&
     ((uVar2 <= param_3 || ((pcVar1[param_3 - 1] < '\0' && (pcVar1[param_3] < '\0')))))) {
    local_a0[0] = param_3;
    uVar4 = (*(code *)PTR_slow_path_0079afb0)();
    if ((char)uVar4 == '\0') {
      local_60 = PTR_fmt_007991f0;
      local_68 = local_a0;
      (*(code *)PTR_panic_fmt_007991a8)(uVar4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796738);
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  *(ulonglong *)(param_1 + 0x10) = param_3;
  return 1;
}


