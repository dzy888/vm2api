// 00600220 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>

/* <&mut serde_json[dc3825464c436029]::value::de::SeqDeserializer as
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>
    */

void __rustcall
<&mut_serde_json[dc3825464c436029]::value::de::SeqDeserializer_as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>
          (undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  char local_38;
  undefined1 local_37;
  undefined8 local_30;
  char local_28;
  undefined4 local_27;
  undefined4 uStack_23;
  undefined4 uStack_1f;
  undefined3 uStack_1b;
  undefined1 uStack_18;
  undefined3 uStack_17;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar1 = *(char **)(param_2 + 8);
  if (pcVar1 != *(char **)(param_2 + 0x18)) {
    *(char **)(param_2 + 8) = pcVar1 + 0x20;
    local_28 = *pcVar1;
    if (local_28 != -1) {
      local_27 = *(undefined4 *)(pcVar1 + 1);
      uStack_23 = *(undefined4 *)(pcVar1 + 5);
      uStack_1f = *(undefined4 *)(pcVar1 + 9);
      uStack_14 = *(undefined4 *)(pcVar1 + 0x14);
      uStack_10 = *(undefined4 *)(pcVar1 + 0x18);
      uStack_c = *(undefined4 *)(pcVar1 + 0x1c);
      uStack_1b = (undefined3)*(undefined4 *)(pcVar1 + 0xd);
      uStack_18 = (undefined1)*(undefined4 *)(pcVar1 + 0x10);
      uStack_17 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x10) >> 8);
      if (local_28 == '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_28);
        local_37 = 2;
      }
      else {
        <craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>
        ::deserialize::<serde_json[dc3825464c436029]::value::Value>(&local_38,&local_28);
        if (local_38 != '\0') {
          *(undefined8 *)(param_1 + 8) = local_30;
          *param_1 = 1;
          return;
        }
      }
      param_1[1] = local_37;
      goto LAB_0060029e;
    }
  }
  param_1[1] = 0xff;
LAB_0060029e:
  *param_1 = 0;
  return;
}


