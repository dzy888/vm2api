// 0004de30 <core[c0acaeba6ab4c2e0]::option::Option<bool>>

/* <&mut 
   serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<bool>>
    */

void __rustcall
<&mut_serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<core[c0acaeba6ab4c2e0]::option::Option<bool>>(undefined2 *param_1,longlong param_2)

{
  char *pcVar1;
  char local_38;
  undefined1 local_37;
  undefined8 local_30;
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
      ::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<bool>>
                (&local_38,&local_28);
      if (local_38 == '\0') {
        *(undefined1 *)((longlong)param_1 + 1) = local_37;
        *(undefined1 *)param_1 = 0;
        return;
      }
      *(undefined8 *)(param_1 + 4) = local_30;
      *(undefined1 *)param_1 = 1;
      return;
    }
  }
  *param_1 = 0xff00;
  return;
}


