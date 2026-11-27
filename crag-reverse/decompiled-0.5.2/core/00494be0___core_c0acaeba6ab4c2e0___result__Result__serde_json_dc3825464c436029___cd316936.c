// 00494be0 <core[c0acaeba6ab4c2e0]::result::Result<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>),std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(serde_json[dc3825464c436029]::value::Value,
   bool, core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>),
   std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>),std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>
          (longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != -2) {
    <serde_json[dc3825464c436029]::value::Value>();
    if ((int)lVar1 != -1) {
      <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
      drop(param_1 + 0x28);
      return;
    }
  }
  return;
}


