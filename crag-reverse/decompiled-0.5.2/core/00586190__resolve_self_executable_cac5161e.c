// 00586190 resolve_self_executable

/* craggemini_core[66f3c71560d70857]::guard_exec::resolve_self_executable */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::guard_exec::resolve_self_executable
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_28;
  
  uVar2 = (*(code *)PTR_getenv_00799c98)(param_4,0x14);
  if (local_50 == -1) {
LAB_00586200:
    uVar2 = (*(code *)PTR_getenv_00799c98)(uVar2,0x18);
    if (local_50 != -1) {
      cVar1 = (*(code *)PTR_is_absolute_00799b58)();
      uVar2 = extraout_XMM0_Da_01;
      if ((cVar1 != '\0') &&
         (cVar1 = (*(code *)PTR_is_file_00799348)(), uVar2 = extraout_XMM0_Da_02, cVar1 != '\0'))
      goto LAB_0058624c;
      if (local_50 != 0) {
        uVar2 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
      }
    }
    (*(code *)PTR_getenv_00799c98)(uVar2,0x16);
    if (local_38 != -1) {
      uVar2 = (*(code *)PTR__join_00799210)("craggemini",local_28,10);
      if (local_38 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
      }
      cVar1 = (*(code *)PTR_is_absolute_00799b58)();
      uVar2 = extraout_XMM0_Da_03;
      if ((cVar1 != '\0') &&
         (cVar1 = (*(code *)PTR_is_file_00799348)(), uVar2 = extraout_XMM0_Da_04, cVar1 != '\0')) {
        param_1[2] = local_40;
        *param_1 = local_50;
        param_1[1] = lStack_48;
        return param_1;
      }
      if (local_50 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
      }
    }
    (*(code *)PTR_current_exe_00799ea0)();
  }
  else {
    cVar1 = (*(code *)PTR_is_absolute_00799b58)();
    uVar2 = extraout_XMM0_Da;
    if ((cVar1 == '\0') ||
       (cVar1 = (*(code *)PTR_is_file_00799348)(), uVar2 = extraout_XMM0_Da_00, cVar1 == '\0')) {
      if (local_50 != 0) {
        uVar2 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
      }
      goto LAB_00586200;
    }
LAB_0058624c:
    *param_1 = local_50;
    param_1[1] = lStack_48;
    param_1[2] = local_40;
  }
  return param_1;
}


