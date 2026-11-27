// 00492c10 unknown_field

/* <serde_json[dc3825464c436029]::error::Error as
   serde_core[48776c27239fa21f]::de::Error>::unknown_field */

void __rustcall
<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>::
unknown_field(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 *local_20;
  undefined *local_18;
  undefined8 local_10;
  longlong local_8;
  
  local_40 = param_1;
  local_38 = param_2;
  if (param_4 == 0) {
    local_30 = &local_40;
    local_28 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
              (&anon_d4d3cd51d1d91a17bb767b00236b3a9b_153_llvm_17589326713533067298,&local_30);
    return;
  }
  local_30 = &local_40;
  local_28 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_20 = &local_10;
  local_18 = PTR_fmt_00799aa8;
  local_10 = param_3;
  local_8 = param_4;
  custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
            (anon_d4d3cd51d1d91a17bb767b00236b3a9b_154_llvm_17589326713533067298,&local_30);
  return;
}


