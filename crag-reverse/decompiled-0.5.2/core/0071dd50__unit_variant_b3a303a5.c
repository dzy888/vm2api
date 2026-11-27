// 0071dd50 unit_variant

/* <serde_json[dc3825464c436029]::value::de::VariantDeserializer as
   serde_core[48776c27239fa21f]::de::VariantAccess>::unit_variant */

undefined8 __rustcall
<serde_json[dc3825464c436029]::value::de::VariantDeserializer_as_serde_core[48776c27239fa21f]::de::VariantAccess>
::unit_variant(char *param_1)

{
  undefined8 uVar1;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*param_1 == -1) {
    return 0;
  }
  local_28 = *(undefined4 *)param_1;
  uStack_24 = *(undefined4 *)(param_1 + 4);
  uStack_20 = *(undefined4 *)(param_1 + 8);
  uStack_1c = *(undefined4 *)(param_1 + 0xc);
  local_18 = *(undefined4 *)(param_1 + 0x10);
  uStack_14 = *(undefined4 *)(param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *(undefined4 *)(param_1 + 0x1c);
  if ((char)local_28 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
            <serde_json[dc3825464c436029]::error::Error>(param_1,&local_29);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_28);
  return uVar1;
}


