// 002e41b0 <craggemini_core[66f3c71560d70857]::guard::GuardHandle,<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#7}>

/* <core[c0acaeba6ab4c2e0]::option::Option<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,
   std[6c98fd8553dbae28]::os::fd::owned::OwnedFd,
   std[6c98fd8553dbae28]::os::fd::owned::OwnedFd)>>::map::<craggemini_core[66f3c71560d70857]::guard::GuardHandle,
   <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#7}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd)>>
::map::
<craggemini_core[66f3c71560d70857]::guard::GuardHandle,<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_7_>
          (undefined8 *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (*param_2 == -1) {
    *param_1 = 0xffffffffffffffff;
    return;
  }
  uVar1 = param_3;
  if (param_3 < 2) {
    uVar1 = param_2[0x3b];
  }
  iVar6 = 1;
  if (param_3 < 2) {
    iVar6 = param_2[0x3a];
  }
  iVar2 = param_2[0x3d];
  iVar3 = param_2[0x3e];
  iVar4 = param_2[0x3f];
  *(int *)(param_1 + 0x1e) = param_2[0x3c];
  *(int *)((longlong)param_1 + 0xf4) = iVar2;
  *(int *)(param_1 + 0x1f) = iVar3;
  *(int *)((longlong)param_1 + 0xfc) = iVar4;
  puVar5 = PTR_close_00799030;
  (*(code *)PTR_close_00799030)();
  uVar7 = (*(code *)puVar5)();
  (*(code *)PTR_memcpy_00799008)(uVar7,0xe8);
  *(int *)(param_1 + 0x1d) = iVar6;
  *(uint *)((longlong)param_1 + 0xec) = uVar1;
  return;
}


