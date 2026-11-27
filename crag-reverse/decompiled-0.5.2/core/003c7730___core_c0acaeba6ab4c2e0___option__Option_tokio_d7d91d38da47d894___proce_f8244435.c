// 003c7730 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaperInner<std[6c98fd8553dbae28]::process::Child>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaperInner<std[6c98fd8553dbae28]::process::Child>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::PidfdReaperInner<std[6c98fd8553dbae28]::process::Child>>>
          (int *param_1)

{
  if (*param_1 == 2) {
    return;
  }
  if (param_1[0xb] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (param_1[0xc] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (param_1[0xd] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (param_1[0xe] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1);
  if (param_1[6] != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  return;
}


