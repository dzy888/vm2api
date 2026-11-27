// 0005c550 <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>

/* <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>
    */

void __rustcall
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::
<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>
          (undefined8 *param_1,undefined8 *param_2)

{
  char local_30;
  char cStack_2f;
  undefined6 uStack_2e;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>::
  next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>(&local_30);
  if (local_30 != '\x01') {
    if (cStack_2f == '\0') {
      *param_1 = 0xfffffffffffffffd;
      return;
    }
    <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_30,*param_2);
    if (CONCAT62(uStack_2e,CONCAT11(cStack_2f,local_30)) != -3) {
      param_1[2] = local_20;
      param_1[3] = uStack_18;
      *param_1 = CONCAT62(uStack_2e,CONCAT11(cStack_2f,local_30));
      param_1[1] = uStack_28;
      return;
    }
  }
  param_1[1] = uStack_28;
  *param_1 = 0xfffffffffffffffc;
  return;
}


