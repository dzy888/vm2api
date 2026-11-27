// 004f3b90 <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<alloc[12e961f32105355]::string::String>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<alloc[12e961f32105355]::string::String>>
    */

undefined8 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_option::
<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<alloc[12e961f32105355]::string::String>>
          (undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  cVar1 = *param_2;
  if (cVar1 != '\x10') {
    if (cVar1 == '\x11') {
      puVar2 = *(undefined4 **)(param_2 + 8);
      local_48 = *puVar2;
      uStack_44 = puVar2[1];
      uStack_40 = puVar2[2];
      uStack_3c = puVar2[3];
      local_38 = puVar2[4];
      uStack_34 = puVar2[5];
      uStack_30 = puVar2[6];
      uStack_2c = puVar2[7];
      uVar3 = deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                        (&local_28,&local_48);
      if (CONCAT44(uStack_24,local_28) == -1) {
        param_1[1] = CONCAT44(uStack_1c,uStack_20);
        *param_1 = 0xfffffffffffffffe;
      }
      else {
        param_1[2] = local_18;
        *(undefined4 *)param_1 = local_28;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_24;
        *(undefined4 *)(param_1 + 1) = uStack_20;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1c;
        uVar3 = local_28;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,8);
      return param_1;
    }
    if (cVar1 != '\x12') {
      deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>(&local_48);
      if (CONCAT44(uStack_44,local_48) == -1) {
        param_1[1] = CONCAT44(uStack_3c,uStack_40);
        *param_1 = 0xfffffffffffffffe;
        return param_1;
      }
      param_1[2] = CONCAT44(uStack_34,local_38);
      *param_1 = CONCAT44(uStack_44,local_48);
      param_1[1] = CONCAT44(uStack_3c,uStack_40);
      return param_1;
    }
  }
  *param_1 = 0xffffffffffffffff;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  return param_1;
}


