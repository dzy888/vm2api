// 002e4250 <craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#7}>

/* <core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>,
   tokio[d7d91d38da47d894]::io::async_fd::AsyncFdRegisterError<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>>::map_err::<craggemini_core[66f3c71560d70857]::protocol::Failure,
   <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#7}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>,tokio[d7d91d38da47d894]::io::async_fd::AsyncFdRegisterError<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>>
::map_err::
<craggemini_core[66f3c71560d70857]::protocol::Failure,<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::_closure_0_::_closure_7_>
          (undefined4 param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  ulonglong local_90;
  undefined4 local_88;
  undefined1 local_80;
  longlong local_78;
  ulonglong *local_70;
  code *pcStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  undefined1 local_30 [24];
  
  puVar4 = PTR_kill_00799120;
  if ((int)*param_3 == 2) {
    local_90 = param_3[1];
    local_88 = (undefined4)param_3[2];
    if (1 < param_4) {
      (*(code *)PTR_kill_00799120)();
      param_1 = (*(code *)puVar4)();
    }
    local_70 = &local_90;
    pcStack_68 = <tokio[d7d91d38da47d894]::io::async_fd::AsyncFdRegisterError<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>as_core[c0acaeba6ab4c2e0]::fmt::Display>
                 ::fmt;
    (*(code *)PTR_format_inner_00799048)(param_1,&local_70);
    <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
    <&str,alloc[12e961f32105355]::borrow::Cow<str>>(&local_70,0x1f7,&DAT_00183310,0x10,local_30);
    (*(code *)PTR_close_00799030)();
    if ((1 < ((uint)local_90 & 3) - 2) && ((local_90 & 3) != 0)) {
      local_78 = local_90 - 1;
      local_80 = 3;
      (*(code *)PTR_drop_00799040)();
    }
    param_2[6] = local_40;
    param_2[7] = lStack_38;
    param_2[4] = local_50;
    param_2[5] = lStack_48;
    param_2[2] = local_60;
    param_2[3] = lStack_58;
    *param_2 = (longlong)local_70;
    param_2[1] = (longlong)pcStack_68;
  }
  else {
    lVar1 = *param_3;
    lVar2 = param_3[1];
    lVar3 = param_3[3];
    param_2[3] = param_3[2];
    param_2[4] = lVar3;
    param_2[1] = lVar1;
    param_2[2] = lVar2;
    *param_2 = -2;
  }
  return;
}


