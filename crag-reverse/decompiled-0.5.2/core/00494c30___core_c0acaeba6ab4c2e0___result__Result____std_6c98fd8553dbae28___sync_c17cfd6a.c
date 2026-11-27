// 00494c30 <core[c0acaeba6ab4c2e0]::result::Result<(),std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(),
   std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(),std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>
          (longlong *param_1)

{
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 1);
    }
    else {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 1);
    }
    if ((int)param_1[6] != -1) {
      <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
      drop(param_1 + 6);
      return;
    }
  }
  return;
}


