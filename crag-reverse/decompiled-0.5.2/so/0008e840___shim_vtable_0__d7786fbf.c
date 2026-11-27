// 0008e840 {shim:vtable#0}

/* <std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&mut core[c0acaeba6ab4c2e0]::fmt::Formatter,
   std[6c98fd8553dbae28]::backtrace_rs::types::BytesOrWideString)>>::call_once::{shim:vtable#0} */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&mut_core[c0acaeba6ab4c2e0]::fmt::Formatter,std[6c98fd8553dbae28]::backtrace_rs::types::BytesOrWideString)>>
::call_once::_shim_vtable_0_(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  lVar1 = *param_1;
  plVar3 = (longlong *)0x0;
  if (lVar1 != -1) {
    plVar3 = param_1;
  }
  uVar2 = std[6c98fd8553dbae28]::sys::backtrace::output_filename
                    (param_2,&local_38,(char)param_1[3],plVar3);
  if (0 < lVar1) {
    uVar2 = uVar2 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Da,1);
  }
  return uVar2;
}


