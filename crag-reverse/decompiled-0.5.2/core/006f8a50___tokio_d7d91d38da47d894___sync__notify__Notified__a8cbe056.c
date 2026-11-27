// 006f8a50 <tokio[d7d91d38da47d894]::sync::notify::Notified>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::notify::Notified> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::notify::Notified>
          (undefined8 *param_1)

{
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_30 = *param_1;
  local_28 = param_1 + 7;
  local_20 = param_1 + 1;
  local_18 = param_1 + 2;
  <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified(&local_30);
  if (param_1[4] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f8a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[4] + 0x18))();
  return;
}


