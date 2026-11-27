// 00600130 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::value::de::EnumDeserializer as
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::de::EnumDeserializer_as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  char local_60;
  undefined1 local_5f;
  undefined8 local_58;
  undefined7 uStack_4f;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  
  plVar1 = param_2 + 3;
  lVar2 = *param_2;
  uVar3 = <<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
          ::visit_str::<serde_json[dc3825464c436029]::error::Error>(&local_60,param_2[1],param_2[2])
  ;
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
  }
  if (local_60 == '\x01') {
    lVar2 = *plVar1;
    *(undefined8 *)(param_1 + 8) = local_58;
    *param_1 = 2;
    if ((char)lVar2 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(plVar1);
    }
  }
  else {
    lVar2 = param_2[6];
    local_38 = (undefined1)param_2[5];
    uStack_37 = (undefined7)((ulonglong)param_2[5] >> 8);
    uStack_30 = (undefined1)lVar2;
    local_48 = (undefined1)*plVar1;
    uStack_47 = (undefined7)((ulonglong)*plVar1 >> 8);
    uStack_40 = (undefined1)param_2[4];
    uStack_3f = (undefined7)((ulonglong)param_2[4] >> 8);
    *param_1 = local_5f;
    *(ulonglong *)(param_1 + 1) = CONCAT17(local_48,uStack_4f);
    *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_40,uStack_47);
    *(ulonglong *)(param_1 + 0x11) = CONCAT17(local_38,uStack_3f);
    *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_30,uStack_37);
    *(longlong *)(param_1 + 0x20) = lVar2;
  }
  return param_1;
}


