// 00193d90 invalid_length

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::invalid_length */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
invalid_length(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined *local_18;
  undefined8 *local_10;
  code *local_8;
  
  local_20 = (undefined1 *)&local_38;
  local_18 = PTR_fmt_00219e40;
  local_10 = &local_30;
  local_8 = <&dyn_serde_core[48776c27239fa21f]::de::Expected_as_core[c0acaeba6ab4c2e0]::fmt::Display>
            ::fmt;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
            (anon_aa8a284406637d3c026889b109c79dc6_30_llvm_9655133765307635171,&local_20);
  return;
}


