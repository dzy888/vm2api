// 000a4570 fmt

/* <<std[6c98fd8553dbae28]::sys::backtrace::BacktraceLock>::print::DisplayBacktrace as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

undefined8 __rustcall
<<std[6c98fd8553dbae28]::sys::backtrace::BacktraceLock>::print::DisplayBacktrace_as_core[c0acaeba6ab4c2e0]::fmt::Display>
::fmt(char *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
     undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_00;
  uint local_e8;
  undefined *puVar8;
  longlong local_c0;
  uint local_b8;
  
  cVar3 = *param_1;
  (*(code *)PTR_current_dir_000c43f8)();
  if (local_c0 == -1) {
    uVar1 = local_b8 & 3;
    uVar5 = local_b8 & 3;
    local_b8 = local_e8;
    if ((1 < uVar5 - 2) && (uVar1 != 0)) {
      (*(code *)PTR_drop_000c3ae0)();
    }
  }
  cVar2 = (**(code **)(*(longlong *)(param_2 + 8) + 0x18))(local_b8,0x11);
  uVar7 = extraout_XMM0_Da;
  if (cVar2 == '\0') {
    puVar8 = &DAT_000c1d98;
    uVar7 = (*(code *)PTR__Unwind_Backtrace_000c4328)();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*(longlong *)(param_2 + 8) + 0x18))(uVar7,0x58,param_5,param_6,puVar8);
      uVar7 = extraout_XMM0_Da_00;
      if (cVar3 != '\0') goto LAB_000a46db;
    }
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
LAB_000a46db:
    uVar6 = 1;
    uVar4 = 1;
  }
  if (0 < local_c0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar7,1);
    uVar4 = uVar6;
  }
  return uVar4;
}


