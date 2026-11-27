// 003afb80 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <bool as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

undefined1 * __rustcall
<bool_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (undefined1 *param_1,char *param_2)

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
  
  if (*param_2 == '\0') {
    param_1[1] = param_2[1];
    *param_1 = 0;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(param_2);
    return param_1;
  }
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)(param_2 + 4);
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  uStack_c = *(undefined4 *)(param_2 + 0x1c);
  uVar1 = ::
          <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
          ::invalid_type(&local_28,&local_29,
                         anon_2c3f00c6db51fc4e52b1607637b553f4_150_llvm_6489901693990513673);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  return param_1;
}


