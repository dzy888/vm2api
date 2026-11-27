// 004f3f60 <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<u32>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<u32>>
    */

uint * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<u32>>
          (uint *param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_48;
  uint local_44;
  undefined8 local_40;
  int local_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  cVar1 = *param_2;
  if (cVar1 != '\x10') {
    if (cVar1 == '\x11') {
      piVar2 = *(int **)(param_2 + 8);
      local_38 = *piVar2;
      uStack_34 = piVar2[1];
      iStack_30 = piVar2[2];
      iStack_2c = piVar2[3];
      local_28 = piVar2[4];
      iStack_24 = piVar2[5];
      iStack_20 = piVar2[6];
      iStack_1c = piVar2[7];
      uVar3 = <u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::
              <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                        (&local_48,&local_38);
      if (local_48 != 1) {
        param_1[1] = 1;
        param_1[2] = local_44;
      }
      else {
        *(undefined8 *)(param_1 + 2) = local_40;
      }
      *param_1 = (uint)(local_48 == 1);
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,8);
      return param_1;
    }
    if (cVar1 != '\x12') {
      <u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::
      <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                (&local_38);
      if (local_38 != 1) {
        param_1[1] = 1;
        param_1[2] = uStack_34;
      }
      else {
        *(ulonglong *)(param_1 + 2) = CONCAT44(iStack_2c,iStack_30);
      }
      *param_1 = (uint)(local_38 == 1);
      return param_1;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  return param_1;
}


