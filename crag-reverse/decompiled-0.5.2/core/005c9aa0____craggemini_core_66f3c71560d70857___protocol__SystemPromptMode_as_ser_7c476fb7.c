// 005c9aa0 <<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_enum::<<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_enum::
<<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined1 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90 [3];
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  undefined7 uStack_47;
  longlong local_40;
  longlong local_38;
  
  local_90[2] = *param_2;
  local_78 = param_2[1];
  local_90[0] = (ulonglong)(local_90[2] != 0);
  local_50 = 0;
  if (local_90[2] != 0) {
    local_50 = param_2[2];
  }
  local_90[1] = 0;
  local_68 = 0;
  local_70 = local_90[0];
  local_60 = local_90[2];
  local_58 = local_78;
  uVar8 = <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::dying_next(&local_f8,local_90);
  if ((local_f8 == 0) || (lVar3 = *(longlong *)(local_f8 + 0x168 + local_e8 * 0x18), lVar3 == -1)) {
    local_f8 = CONCAT71(local_f8._1_7_,0xb);
    uVar7 = (*(code *)PTR_invalid_value_007997e0)
                      (uVar8,anon_30b5cef53457a6ea696e8d7e9f6273d6_76_llvm_8436237269785592069);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *param_1 = 1;
    goto LAB_005c9ce9;
  }
  lVar4 = *(longlong *)(local_f8 + 0x170 + local_e8 * 0x18);
  lVar5 = *(longlong *)(local_f8 + 0x178 + local_e8 * 0x18);
  puVar1 = (undefined4 *)(local_f8 + local_e8 * 0x20);
  local_b8 = *puVar1;
  uStack_b4 = puVar1[1];
  uStack_b0 = puVar1[2];
  uStack_ac = puVar1[3];
  puVar1 = (undefined4 *)(local_f8 + 0x10 + local_e8 * 0x20);
  local_a8 = *puVar1;
  uStack_a4 = puVar1[1];
  uStack_a0 = puVar1[2];
  uStack_9c = puVar1[3];
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::dying_next(&local_48,local_90);
  lVar6 = CONCAT71(uStack_47,local_48);
  if (lVar6 != 0) {
    local_e8 = *(longlong *)(lVar6 + 0x178 + local_38 * 0x18);
    plVar2 = (longlong *)(lVar6 + 0x168 + local_38 * 0x18);
    local_f8 = *plVar2;
    lStack_f0 = plVar2[1];
    local_38 = local_38 * 0x20;
    puVar1 = (undefined4 *)(lVar6 + local_38);
    local_e0 = *puVar1;
    uStack_dc = puVar1[1];
    uStack_d8 = puVar1[2];
    uStack_d4 = puVar1[3];
    puVar1 = (undefined4 *)(lVar6 + 0x10 + local_38);
    local_d0 = *puVar1;
    uStack_cc = puVar1[1];
    uStack_c8 = puVar1[2];
    uStack_c4 = puVar1[3];
    if (local_f8 != -1) {
      if (local_f8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(local_38,1);
      }
      uVar8 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_e0);
      local_f8 = CONCAT71(local_f8._1_7_,0xb);
      uVar7 = (*(code *)PTR_invalid_value_007997e0)
                        (uVar8,anon_30b5cef53457a6ea696e8d7e9f6273d6_76_llvm_8436237269785592069);
      *(undefined8 *)(param_1 + 8) = uVar7;
      *param_1 = 1;
      uVar8 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_b8,&PTR_DAT_0078e230);
      if (lVar3 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
      }
      goto LAB_005c9ce9;
    }
  }
  local_e0 = local_b8;
  uStack_dc = uStack_b4;
  uStack_d8 = uStack_b0;
  uStack_d4 = uStack_ac;
  local_d0 = local_a8;
  uStack_cc = uStack_a4;
  uStack_c8 = uStack_a0;
  uStack_c4 = uStack_9c;
  local_f8 = lVar3;
  lStack_f0 = lVar4;
  local_e8 = lVar5;
  <serde_json[dc3825464c436029]::value::de::EnumDeserializer_as_serde_core[48776c27239fa21f]::de::EnumAccess>
  ::variant_seed::
  <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
            (&local_48,&local_f8);
  if (local_48 == '\0') {
    local_40 = (*(code *)PTR_unit_variant_00799c08)();
    if (local_40 == 0) {
      param_1[1] = 0;
      goto LAB_005c9ce5;
    }
  }
  else if ((local_48 != '\x02') &&
          (local_40 = (*(code *)PTR_unit_variant_00799c08)(), local_40 == 0)) {
    param_1[1] = 1;
LAB_005c9ce5:
    *param_1 = 0;
    goto LAB_005c9ce9;
  }
  *(longlong *)(param_1 + 8) = local_40;
  *param_1 = 1;
LAB_005c9ce9:
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(local_90);
  return param_1;
}


