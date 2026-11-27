// 0004dfd0 <bool>

/* <&mut 
   serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>
   as serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<bool> */

void __rustcall
<&mut_serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<bool>(undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 local_31;
  char local_30;
  undefined4 local_2f;
  undefined4 uStack_2b;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined3 uStack_1f;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = *(char **)(param_2 + 8);
  if (pcVar1 == *(char **)(param_2 + 0x18)) {
LAB_0004e026:
    param_1[1] = 2;
  }
  else {
    *(char **)(param_2 + 8) = pcVar1 + 0x20;
    local_30 = *pcVar1;
    if (local_30 == -1) goto LAB_0004e026;
    local_2f = *(undefined4 *)(pcVar1 + 1);
    uStack_2b = *(undefined4 *)(pcVar1 + 5);
    uStack_27 = *(undefined4 *)(pcVar1 + 9);
    uStack_23 = *(undefined4 *)(pcVar1 + 0xd);
    uStack_1c = *(undefined4 *)(pcVar1 + 0x14);
    uStack_18 = *(undefined4 *)(pcVar1 + 0x18);
    uStack_14 = *(undefined4 *)(pcVar1 + 0x1c);
    uStack_1f = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x10) >> 8);
    *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
    if (local_30 != '\0') {
      uVar3 = <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
              ::invalid_type(&local_30,&local_31,
                             anon_2d8481ed190668a1c8db75e0b2a3e95f_42_llvm_17988842640040923845);
      *(undefined8 *)(param_1 + 8) = uVar3;
      uVar2 = 1;
      goto LAB_0004e02c;
    }
    uVar2 = (undefined1)local_2f;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(&local_30);
    param_1[1] = uVar2;
  }
  uVar2 = 0;
LAB_0004e02c:
  *param_1 = uVar2;
  return;
}


