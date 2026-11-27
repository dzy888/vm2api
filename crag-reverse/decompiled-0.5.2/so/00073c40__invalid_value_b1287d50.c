// 00073c40 invalid_value

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::invalid_value */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
invalid_value(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined *local_30;
  undefined1 *local_28;
  code *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  local_28 = (undefined1 *)&local_48;
  local_8 = *(undefined8 *)(param_1 + 4);
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  local_38 = &local_18;
  local_30 = PTR_fmt_000c3ff8;
  local_20 = <&dyn_serde_core[48776c27239fa21f]::de::Expected_as_core[c0acaeba6ab4c2e0]::fmt::Display>
             ::fmt;
  local_48 = param_2;
  local_40 = param_3;
  custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>(&DAT_0000ae78,&local_38);
  return;
}


