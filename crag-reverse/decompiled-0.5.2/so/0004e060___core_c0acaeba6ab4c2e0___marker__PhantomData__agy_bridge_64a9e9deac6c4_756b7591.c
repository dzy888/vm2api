// 0004e060 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::EnumDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::EnumDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,undefined1 *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  char local_70;
  undefined1 local_6f;
  undefined8 local_68;
  undefined1 local_59;
  undefined1 local_58;
  undefined6 uStack_57;
  undefined1 uStack_51;
  uint7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  
  pcVar1 = param_2 + 0x20;
  switch(*param_2) {
  case 1:
    bVar2 = param_2[1];
    if (bVar2 == 0) {
LAB_0004e170:
      local_6f = 0;
      goto LAB_0004e175;
    }
    if (bVar2 == 1) goto LAB_0004e131;
    uStack_50 = (uint7)bVar2;
    uStack_49 = 0;
    local_58 = 1;
    local_68 = (*(code *)PTR_invalid_value_000c3b28)
                         (&switchD_0004e098::switchdataD_0000c9b0,
                          anon_34149b187fc8a78ca9bac708ccea6bb6_37_llvm_9637358227933645321);
LAB_0004e238:
    local_70 = '\x01';
    break;
  default:
    local_68 = <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
               ::invalid_type(param_2,&local_59,0xc0000);
    local_70 = '\x01';
    goto LAB_0004e18a;
  case 4:
    lVar5 = *(longlong *)(param_2 + 8);
    if (lVar5 == 0) goto LAB_0004e170;
    if (lVar5 != 1) {
      uStack_50 = (uint7)lVar5;
      uStack_49 = (undefined1)((ulonglong)lVar5 >> 0x38);
      local_58 = 1;
      local_68 = (*(code *)PTR_invalid_value_000c3b28)
                           (&switchD_0004e098::switchdataD_0000c9b0,
                            anon_34149b187fc8a78ca9bac708ccea6bb6_37_llvm_9637358227933645321);
      goto LAB_0004e238;
    }
LAB_0004e131:
    local_6f = 1;
LAB_0004e175:
    local_70 = '\0';
    break;
  case 0xc:
    lVar5 = *(longlong *)(param_2 + 8);
    uVar6 = <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
            ::visit_str::<serde_json[dc3825464c436029]::error::Error>
                      (&local_70,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
    goto LAB_0004e151;
  case 0xd:
    <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_str::<serde_json[dc3825464c436029]::error::Error>
              (&local_70,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    break;
  case 0xe:
    lVar5 = *(longlong *)(param_2 + 8);
    uVar6 = <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
            ::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
                      (&local_70,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
LAB_0004e151:
    if (lVar5 != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar6,1);
    }
    goto joined_r0x0004e16c;
  case 0xf:
    <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_bytes::<serde_json[dc3825464c436029]::error::Error>
              (&local_70,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
joined_r0x0004e16c:
  if (local_70 == '\x01') {
LAB_0004e18a:
    cVar3 = *pcVar1;
    *(undefined8 *)(param_1 + 8) = local_68;
    *param_1 = 2;
    if (cVar3 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <serde_core[48776c27239fa21f]::private::content::Content>(pcVar1);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uStack_41 = (undefined1)*(undefined8 *)(param_2 + 0x30);
    uStack_40 = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 0x30) >> 8);
    uStack_39 = (undefined1)uVar4;
    uStack_51 = (undefined1)*(undefined8 *)pcVar1;
    uStack_50 = (uint7)((ulonglong)*(undefined8 *)pcVar1 >> 8);
    uStack_49 = (undefined1)*(undefined8 *)(param_2 + 0x28);
    uStack_48 = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 8);
    *param_1 = local_6f;
    *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_51,CONCAT61(uStack_57,local_58));
    *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_49,uStack_50);
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_41,uStack_48);
    *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_39,uStack_40);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
  return param_1;
}


