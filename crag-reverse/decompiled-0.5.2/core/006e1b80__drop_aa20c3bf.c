// 006e1b80 drop

/* <tokio[d7d91d38da47d894]::sync::notify::Notified as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::notify::Notified_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (undefined8 *param_1)

{
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  undefined8 *local_8;
  
  local_20 = *param_1;
  local_18 = param_1 + 7;
  local_10 = param_1 + 1;
  local_8 = param_1 + 2;
  <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified(&local_20);
  return;
}


