// 003c5740 <craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#3}>

/* <core[c0acaeba6ab4c2e0]::result::Result<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,
   std[6c98fd8553dbae28]::os::fd::owned::OwnedFd, std[6c98fd8553dbae28]::os::fd::owned::OwnedFd),
   core[c0acaeba6ab4c2e0]::io::error::Error>>::map_err::<craggemini_core[66f3c71560d70857]::protocol::Failure,
   <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#3}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<(craggemini_core[66f3c71560d70857]::guard::GuardHandle,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd,std[6c98fd8553dbae28]::os::fd::owned::OwnedFd),core[c0acaeba6ab4c2e0]::io::error::Error>>
::map_err::
<craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_3_>
          (undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong local_78;
  undefined1 *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined1 local_30;
  longlong local_28;
  undefined1 local_20 [24];
  
  local_70 = (undefined1 *)&local_78;
  if (*param_2 != -1) {
    (*(code *)PTR_memcpy_00799008)(param_4,0x108);
    return;
  }
  local_78 = *(ulonglong *)(param_2 + 2);
  puStack_68 = PTR_fmt_007991d0;
  (*(code *)PTR_format_inner_00799048)(param_4,&local_70);
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
  <&str,alloc[12e961f32105355]::borrow::Cow<str>>
            (&local_70,0x1f7,"slot_guard_error/v1/images/edits",0x10,local_20);
  local_35 = 4;
  if ((1 < ((uint)local_78 & 3) - 2) && ((local_78 & 3) != 0)) {
    local_28 = local_78 - 1;
    local_30 = 3;
    (*(code *)PTR_drop_00799040)();
  }
  param_1[7] = local_40;
  *(undefined2 *)(param_1 + 8) = local_38;
  *(undefined1 *)((longlong)param_1 + 0x42) = local_36;
  *(undefined1 *)((longlong)param_1 + 0x43) = local_35;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_34;
  param_1[5] = local_50;
  param_1[6] = uStack_48;
  param_1[3] = local_60;
  param_1[4] = uStack_58;
  param_1[1] = local_70;
  param_1[2] = puStack_68;
  *param_1 = 0xffffffffffffffff;
  return;
}


