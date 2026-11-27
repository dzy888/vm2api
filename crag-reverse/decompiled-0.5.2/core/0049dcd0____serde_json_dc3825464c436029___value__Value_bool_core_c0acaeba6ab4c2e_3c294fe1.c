// 0049dcd0 <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
          (longlong param_1)

{
  <serde_json[dc3825464c436029]::value::Value>();
  if (*(int *)(param_1 + 0x28) == -1) {
    return;
  }
  <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
            (param_1 + 0x28);
  return;
}


