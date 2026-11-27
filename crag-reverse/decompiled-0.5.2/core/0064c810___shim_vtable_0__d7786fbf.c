// 0064c810 {shim:vtable#0}

/* <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#6}
   as core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>::call_once::{shim:vtable#0} */

ulonglong __rustcall
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#6}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<()>>
::call_once::_shim_vtable_0_(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  
  if (*param_1 == 1) {
    uVar2 = craggemini_core[66f3c71560d70857]::guard::child_pre_exec_attach
                      (param_1[3],0,param_3,param_1[1],param_1[2],0);
    return uVar2;
  }
  iVar1 = (*(code *)PTR_setsid_00799ec8)();
  if (-1 < iVar1) {
    iVar1 = (*(code *)PTR_prctl_007991e0)();
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_getppid_00799ee8)();
      if (iVar1 == param_1[3]) {
        return 0;
      }
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 ==
          &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
        return 0x2000000002;
      }
      (*(code *)PTR_set_functions_inner_007990c0)();
      return 0x2000000002;
    }
  }
  piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar1 = *piVar3;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 ==
      &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
    return (longlong)iVar1 << 0x20 | 2;
  }
  (*(code *)PTR_set_functions_inner_007990c0)();
  return (longlong)iVar1 << 0x20 | 2;
}


