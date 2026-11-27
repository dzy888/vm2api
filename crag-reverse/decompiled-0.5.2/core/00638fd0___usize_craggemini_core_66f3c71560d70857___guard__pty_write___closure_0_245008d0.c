// 00638fd0 <usize,craggemini_core[66f3c71560d70857]::guard::pty_write::{closure#0}::{closure#0}>

/* <tokio[d7d91d38da47d894]::io::async_fd::AsyncFdReadyGuard<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>::try_io::<usize,
   craggemini_core[66f3c71560d70857]::guard::pty_write::{closure#0}::{closure#0}> */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::io::async_fd::AsyncFdReadyGuard<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>
::try_io::<usize,craggemini_core[66f3c71560d70857]::guard::pty_write::_closure_0_::_closure_0_>
          (longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_R12;
  undefined1 auVar6 [16];
  
  if (*(int *)(*param_1 + 0x18) == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_006390b5:
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  else {
    uVar2 = (*(code *)PTR_write_00799ef8)();
    if (-1 < (longlong)uVar2) {
      uVar5 = 0;
      goto LAB_00639099;
    }
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    unaff_R12 = (longlong)*piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) goto LAB_006390b5;
  }
  uVar2 = unaff_R12 << 0x20 | 2;
  lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
  cVar1 = (**(code **)(lVar4 + 8))();
  if (cVar1 == '\r') {
    cVar1 = *(char *)((longlong)param_1 + 0x12);
    *(undefined1 *)((longlong)param_1 + 0x12) = 2;
    uVar5 = 2;
    if (cVar1 != '\x02') {
      (*(code *)PTR_clear_readiness_0079a190)();
      uVar5 = 2;
    }
  }
  else {
    uVar5 = 1;
  }
LAB_00639099:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar5;
  return auVar6;
}


