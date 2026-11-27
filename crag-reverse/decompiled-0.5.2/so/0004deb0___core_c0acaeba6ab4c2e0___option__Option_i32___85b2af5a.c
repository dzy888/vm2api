// 0004deb0 <core[c0acaeba6ab4c2e0]::option::Option<i32>>

/* <&mut 
   serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<i32>>
    */

void __rustcall
<&mut_serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::<core[c0acaeba6ab4c2e0]::option::Option<i32>>(uint *param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  char local_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined3 uStack_47;
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
  
  pcVar1 = *(char **)(param_2 + 8);
  if (pcVar1 == *(char **)(param_2 + 0x18)) {
LAB_0004df19:
    param_1[0] = 0;
    param_1[1] = 2;
    return;
  }
  *(char **)(param_2 + 8) = pcVar1 + 0x20;
  local_58 = *pcVar1;
  if (local_58 == -1) goto LAB_0004df19;
  uStack_57 = *(undefined4 *)(pcVar1 + 1);
  uStack_53 = *(undefined4 *)(pcVar1 + 5);
  uStack_4f = *(undefined4 *)(pcVar1 + 9);
  uStack_4b = *(undefined4 *)(pcVar1 + 0xd);
  uStack_44 = *(undefined4 *)(pcVar1 + 0x14);
  uStack_40 = *(undefined4 *)(pcVar1 + 0x18);
  uStack_3c = *(undefined4 *)(pcVar1 + 0x1c);
  uStack_47 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x10) >> 8);
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
  if (local_58 != '\x10') {
    if (local_58 == '\x11') {
      uStack_53._3_1_ = (undefined1)((uint)uStack_53 >> 0x18);
      puVar2 = (undefined4 *)CONCAT35((undefined3)uStack_4b,CONCAT41(uStack_4f,uStack_53._3_1_));
      local_38 = *puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      local_28 = puVar2[4];
      uStack_24 = puVar2[5];
      uStack_20 = puVar2[6];
      uStack_1c = puVar2[7];
      uVar3 = <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<i32>as_serde_core[48776c27239fa21f]::de::Visitor>
              ::visit_some::
              <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                        (&local_68,&local_38);
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar3,8);
      goto joined_r0x0004df15;
    }
    if (local_58 != '\x12') {
      <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<i32>as_serde_core[48776c27239fa21f]::de::Visitor>
      ::visit_some::
      <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                (&local_68,&local_58);
      goto joined_r0x0004df15;
    }
  }
  local_68 = 0;
  uStack_64 = 0;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (&local_58);
joined_r0x0004df15:
  if ((char)local_68 == '\0') {
    *(ulonglong *)(param_1 + 1) = CONCAT44(local_60,uStack_64);
  }
  else {
    *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_5c,local_60);
  }
  *param_1 = (uint)((char)local_68 != '\0');
  return;
}


