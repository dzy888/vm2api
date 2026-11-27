// 001f2350 current_exe

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
  
  (*(code *)PTR_from_bytes_with_nul_0021a6e8)(param_4,0xf);
  if (local_50 == 1) {
    puStack_30 = &DAT_002175c0;
    local_38 = -1;
                    /* WARNING: Could not recover jumptable at 0x001f23d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (longlong *)
             (*(code *)((longlong)&switchD_001f23ff::switchdataD_0012d940 +
                       (longlong)(int)switchD_001f23ff::switchdataD_0012d940))
                       ((code *)((longlong)&switchD_001f23ff::switchdataD_0012d940 +
                                (longlong)(int)switchD_001f23ff::switchdataD_0012d940));
    return plVar3;
  }
  sys::fs::unix::readlink(&local_38,local_48);
  if (local_38 == -1) {
    uVar1 = (ulonglong)puStack_30 & 3;
    uVar5 = (uint)puStack_30 & 3;
    switch(uVar5) {
    case 0:
      if (*(char *)((longlong)puStack_30 + 0x10) != '\0') goto LAB_001f2429;
      goto LAB_001f2452;
    case 1:
      cVar2 = *(char *)((longlong)puStack_30 + 0x1f);
      break;
    case 2:
      lVar4 = (*(code *)PTR_get_os_functions_0021a0e8)();
      cVar2 = (**(code **)(lVar4 + 8))();
      break;
    case 3:
      cVar2 = (char)((ulonglong)puStack_30 >> 0x20);
    }
    if (cVar2 == '\0') {
LAB_001f2452:
      param_1[1] = (longlong)&PTR_s_no__proc_self_exe_available__Is___00217eb8;
      *param_1 = -1;
      if (uVar5 - 2 < 2) {
        return param_1;
      }
      if (uVar1 == 0) {
        return param_1;
      }
      (*(code *)PTR_drop_00219c58)();
      return param_1;
    }
  }
LAB_001f2429:
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = (longlong)puStack_30;
  return param_1;
}


