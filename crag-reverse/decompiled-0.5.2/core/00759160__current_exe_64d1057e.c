// 00759160 current_exe

/* std[6c98fd8553dbae28]::env::current_exe */

longlong * __rustcall
std[6c98fd8553dbae28]::env::current_exe
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int local_50;
  undefined8 local_48;
  longlong local_38;
  undefined1 *puStack_30;
  longlong local_28;
  
  (*(code *)PTR_from_bytes_with_nul_0079abd0)(param_4,0xf);
  if (local_50 == 1) {
    puStack_30 = &DAT_00796450;
    local_38 = -1;
                    /* WARNING: Could not recover jumptable at 0x007591e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (longlong *)
             (*(code *)((longlong)&switchD_0075920f::switchdataD_001bf38c +
                       (longlong)(int)switchD_0075920f::switchdataD_001bf38c))
                       ((code *)((longlong)&switchD_0075920f::switchdataD_001bf38c +
                                (longlong)(int)switchD_0075920f::switchdataD_001bf38c));
    return plVar3;
  }
  sys::fs::unix::readlink(&local_38,local_48);
  if (local_38 == -1) {
    uVar1 = (ulonglong)puStack_30 & 3;
    uVar5 = (uint)puStack_30 & 3;
    switch(uVar5) {
    case 0:
      if (*(char *)((longlong)puStack_30 + 0x10) != '\0') goto LAB_00759239;
      goto LAB_00759262;
    case 1:
      cVar2 = *(char *)((longlong)puStack_30 + 0x1f);
      break;
    case 2:
      lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar2 = (**(code **)(lVar4 + 8))();
      break;
    case 3:
      cVar2 = (char)((ulonglong)puStack_30 >> 0x20);
    }
    if (cVar2 == '\0') {
LAB_00759262:
      param_1[1] = (longlong)&PTR_s_no__proc_self_exe_available__Is___00796f08;
      *param_1 = -1;
      if (uVar5 - 2 < 2) {
        return param_1;
      }
      if (uVar1 == 0) {
        return param_1;
      }
      (*(code *)PTR_drop_00799040)();
      return param_1;
    }
  }
LAB_00759239:
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = (longlong)puStack_30;
  return param_1;
}


