// 004effe0 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>>

/* <&mut 
   serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::SeqAccess>::next_element::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>>
    */

void __rustcall
<&mut_serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::SeqAccess>
::next_element::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>>
          (undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char local_e8;
  undefined4 uStack_e7;
  undefined4 uStack_e3;
  undefined4 uStack_df;
  undefined4 uStack_db;
  undefined3 uStack_d7;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a0;
  undefined8 local_98;
  
  pcVar1 = *(char **)(param_2 + 8);
  if (pcVar1 == *(char **)(param_2 + 0x18)) {
LAB_004f004e:
    *param_1 = 0xfffffffffffffffd;
    return;
  }
  *(char **)(param_2 + 8) = pcVar1 + 0x20;
  local_e8 = *pcVar1;
  if (local_e8 == -1) goto LAB_004f004e;
  uStack_e7 = *(undefined4 *)(pcVar1 + 1);
  uStack_e3 = *(undefined4 *)(pcVar1 + 5);
  uStack_df = *(undefined4 *)(pcVar1 + 9);
  uStack_db = *(undefined4 *)(pcVar1 + 0xd);
  uStack_d4 = *(undefined4 *)(pcVar1 + 0x14);
  uStack_d0 = *(undefined4 *)(pcVar1 + 0x18);
  uStack_cc = *(undefined4 *)(pcVar1 + 0x1c);
  uStack_d7 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x10) >> 8);
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 1;
  if (local_e8 == '\x10') {
LAB_004f0032:
    local_a0 = -2;
    uVar3 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <serde_core[48776c27239fa21f]::private::content::Content>(&local_e8);
  }
  else {
    if (local_e8 == '\x11') {
      uStack_e3._3_1_ = (undefined1)((uint)uStack_e3 >> 0x18);
      puVar2 = (undefined4 *)CONCAT35((undefined3)uStack_db,CONCAT41(uStack_df,uStack_e3._3_1_));
      local_c8 = *puVar2;
      uStack_c4 = puVar2[1];
      uStack_c0 = puVar2[2];
      uStack_bc = puVar2[3];
      local_b8 = puVar2[4];
      uStack_b4 = puVar2[5];
      uStack_b0 = puVar2[6];
      uStack_ac = puVar2[7];
      uVar3 = <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>as_serde_core[48776c27239fa21f]::de::Visitor>
              ::visit_some::
              <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                        (&local_a0,&local_c8);
      uVar3 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,8);
    }
    else {
      if (local_e8 == '\x12') goto LAB_004f0032;
      uVar3 = <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>as_serde_core[48776c27239fa21f]::de::Visitor>
              ::visit_some::
              <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                        (&local_a0,&local_e8);
    }
    if (local_a0 == -3) {
      param_1[1] = local_98;
      *param_1 = 0xfffffffffffffffc;
      return;
    }
  }
  (*(code *)PTR_memcpy_00799008)(uVar3,0x90);
  return;
}


