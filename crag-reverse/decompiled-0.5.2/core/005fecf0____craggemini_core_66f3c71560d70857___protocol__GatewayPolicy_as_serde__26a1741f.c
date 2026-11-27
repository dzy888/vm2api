// 005fecf0 <<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

longlong * __rustcall
<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserializer>::
deserialize_struct::
<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (longlong *param_1,char *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_89;
  longlong local_88;
  longlong local_80;
  char local_78;
  undefined4 local_77;
  undefined4 uStack_73;
  undefined4 uStack_6f;
  undefined3 uStack_6b;
  undefined1 uStack_68;
  undefined3 uStack_67;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  longlong local_38;
  
  if (*param_2 != '\x04') {
    if (*param_2 == '\x05') {
      <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::Deserializer>
      ::deserialize_any::
      <<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                (param_1,param_2 + 8);
      return param_1;
    }
    lVar5 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
            <serde_json[dc3825464c436029]::error::Error>(param_2,&local_89,&DAT_0078ed90);
    param_1[1] = lVar5;
    *param_1 = 2;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_2);
    return param_1;
  }
  local_48 = *(undefined8 *)(param_2 + 8);
  pcVar1 = *(char **)(param_2 + 0x10);
  lVar5 = *(longlong *)(param_2 + 0x18);
  local_40 = pcVar1 + lVar5 * 0x20;
  local_50 = pcVar1;
  local_58 = pcVar1;
  if (lVar5 == 0) {
LAB_005fee01:
    uVar6 = 0;
LAB_005fee03:
    local_80 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
               ::invalid_length(uVar6,&PTR_s_struct_GatewayPolicy_with_3_elem_0078ecf8,&DAT_0078eb58
                               );
  }
  else {
    local_50 = pcVar1 + 0x20;
    if (*pcVar1 == -1) goto LAB_005fee01;
    local_77 = *(undefined4 *)(pcVar1 + 1);
    uStack_73 = *(undefined4 *)(pcVar1 + 5);
    uStack_6f = *(undefined4 *)(pcVar1 + 9);
    uStack_64 = *(undefined4 *)(pcVar1 + 0x14);
    uStack_60 = *(undefined4 *)(pcVar1 + 0x18);
    uStack_5c = *(undefined4 *)(pcVar1 + 0x1c);
    uStack_6b = (undefined3)*(undefined4 *)(pcVar1 + 0xd);
    uStack_68 = (undefined1)*(undefined4 *)(pcVar1 + 0x10);
    uStack_67 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x10) >> 8);
    local_78 = *pcVar1;
    <core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<u64>>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
    ::deserialize::<serde_json[dc3825464c436029]::value::Value>(&local_88,&local_78);
    lVar2 = local_88;
    if (local_88 == 2) goto LAB_005fee16;
    uVar6 = 1;
    if (lVar5 == 1) goto LAB_005fee03;
    local_50 = pcVar1 + 0x40;
    if (pcVar1[0x20] == -1) goto LAB_005fee03;
    local_77 = *(undefined4 *)(pcVar1 + 0x21);
    uStack_73 = *(undefined4 *)(pcVar1 + 0x25);
    uStack_6f = *(undefined4 *)(pcVar1 + 0x29);
    uStack_64 = *(undefined4 *)(pcVar1 + 0x34);
    uStack_60 = *(undefined4 *)(pcVar1 + 0x38);
    uStack_5c = *(undefined4 *)(pcVar1 + 0x3c);
    uStack_6b = (undefined3)*(undefined4 *)(pcVar1 + 0x2d);
    uStack_68 = (undefined1)*(undefined4 *)(pcVar1 + 0x30);
    uStack_67 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x30) >> 8);
    local_38 = local_80;
    local_78 = pcVar1[0x20];
    <core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<u64>>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
    ::deserialize::<serde_json[dc3825464c436029]::value::Value>(&local_88,&local_78);
    lVar4 = local_80;
    lVar3 = local_88;
    if (local_88 != 2) {
      uVar6 = 2;
      if (lVar5 != 2) {
        local_50 = pcVar1 + 0x60;
        if (pcVar1[0x40] != -1) {
          local_77 = *(undefined4 *)(pcVar1 + 0x41);
          uStack_73 = *(undefined4 *)(pcVar1 + 0x45);
          uStack_6f = *(undefined4 *)(pcVar1 + 0x49);
          uStack_64 = *(undefined4 *)(pcVar1 + 0x54);
          uStack_60 = *(undefined4 *)(pcVar1 + 0x58);
          uStack_5c = *(undefined4 *)(pcVar1 + 0x5c);
          uStack_6b = (undefined3)*(undefined4 *)(pcVar1 + 0x4d);
          uStack_68 = (undefined1)*(undefined4 *)(pcVar1 + 0x50);
          uStack_67 = (undefined3)((uint)*(undefined4 *)(pcVar1 + 0x50) >> 8);
          local_78 = pcVar1[0x40];
          <core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<u64>>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
          ::deserialize::<serde_json[dc3825464c436029]::value::Value>(&local_88,&local_78);
          if (local_88 != 2) {
            *param_1 = lVar2;
            param_1[1] = local_38;
            param_1[2] = lVar3;
            param_1[3] = lVar4;
            param_1[4] = local_88;
            param_1[5] = local_80;
            if (lVar5 == 3) goto LAB_005fee21;
            local_80 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::invalid_length(lVar5,&PTR_s_fewer_elements_in_array_0078eb48,&DAT_0078eb58)
            ;
          }
          goto LAB_005fee16;
        }
      }
      goto LAB_005fee03;
    }
  }
LAB_005fee16:
  param_1[1] = local_80;
  *param_1 = 2;
LAB_005fee21:
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_58);
  return param_1;
}


