// 00556ad0 <std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
          (char *param_1)

{
  if (*param_1 == '\0') {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 8);
  }
  else {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x30) == -1) {
    return;
  }
  <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
            (param_1 + 0x30);
  return;
}


