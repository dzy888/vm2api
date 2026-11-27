// 00764100 fmt

/* <&core[c0acaeba6ab4c2e0]::panic::location::Location as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    */

void __rustcall
<&core[c0acaeba6ab4c2e0]::panic::location::Location_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (longlong *param_1)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  code *local_30;
  undefined4 *local_28;
  undefined *local_20;
  undefined4 *local_18;
  undefined *local_10;
  
  local_18 = (undefined4 *)*param_1;
  local_48 = *local_18;
  uStack_44 = local_18[1];
  uStack_40 = local_18[2];
  uStack_3c = local_18[3];
  local_28 = local_18 + 4;
  local_18 = local_18 + 5;
  local_38 = &local_48;
  local_30 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
  local_20 = PTR_fmt_00799470;
  local_10 = PTR_fmt_00799470;
  (*(code *)PTR_write_007994b0)(&local_38,&DAT_0018c339);
  return;
}


