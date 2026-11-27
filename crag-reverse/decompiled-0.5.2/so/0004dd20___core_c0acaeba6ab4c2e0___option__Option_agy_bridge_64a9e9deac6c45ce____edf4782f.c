// 0004dd20 <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>

/* <&mut 
   serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>
    */

void __rustcall
<&mut_serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::
<core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  char local_28;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined4 uStack_1f;
  undefined4 uStack_1b;
  undefined3 uStack_17;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar1 = *(char **)(param_2 + 8);
  if (pcVar1 != *(char **)(param_2 + 0x18)) {
    *(char **)(param_2 + 8) = pcVar1 + 0x20;
    local_28 = *pcVar1;
    if (local_28 != -1) {
      uStack_27 = *(undefined4 *)(pcVar1 + 1);
      uStack_23 = *(undefined4 *)(pcVar1 + 5);
      uStack_1f = *(undefined4 *)(pcVar1 + 9);
      uStack_1b = *(undefined4 *)(pcVar1 + 0xd);
      uStack_14 = *(undefined4 *)(pcVar1 + 0x14);
      uStack_10 = *(undefined4 *)(pcVar1 + 0x18);
      uStack_c = *(undefined4 *)(pcVar1 + 0x1c);
      uStack_17 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x10) >> 8);
      *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
      <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
      ::deserialize_option::
      <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>
                (&local_48,&local_28);
      if (local_48 == -3) {
        param_1[1] = lStack_40;
        *param_1 = -4;
        return;
      }
      param_1[2] = local_38;
      param_1[3] = lStack_30;
      *param_1 = local_48;
      param_1[1] = lStack_40;
      return;
    }
  }
  *param_1 = -3;
  return;
}


