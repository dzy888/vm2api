// 005c80a0 <<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_any::<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_any::
<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 unaff_R12;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  char local_d0;
  uint uStack_cf;
  undefined4 uStack_cb;
  undefined4 uStack_c7;
  uint uStack_c3;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98 [3];
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  uint local_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  uint uStack_43;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_a0 = param_2[2];
  local_98[2] = *param_2;
  local_80 = param_2[1];
  local_98[0] = (ulonglong)(local_98[2] != 0);
  local_58 = local_a0;
  if (local_98[2] == 0) {
    local_58 = 0;
  }
  local_98[1] = 0;
  local_70 = 0;
  local_50 = -1;
  local_d8 = (undefined *)0x2;
  local_e0 = (undefined *)0x2;
  puVar5 = (undefined *)0x2;
  local_78 = local_98[0];
  local_68 = local_98[2];
  local_60 = local_80;
LAB_005c8150:
  do {
    <serde_json[dc3825464c436029]::value::de::MapDeserializer_as_serde_core[48776c27239fa21f]::de::MapAccess>
    ::next_key_seed::
    <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
              (&local_d0,local_98);
    cVar1 = local_50;
    if (local_d0 == '\x01') {
      uVar2 = CONCAT35((undefined3)uStack_c3,CONCAT41(uStack_c7,uStack_cb._3_1_));
LAB_005c8335:
      param_1[1] = uVar2;
      *param_1 = 2;
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(local_98);
LAB_005c834a:
      if (local_50 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_50);
      }
      return param_1;
    }
    if ((char)uStack_cf != '\0') {
      if ((uStack_cf & 0xff) == 1) {
        if (local_e0 == (undefined *)0x2) {
          local_50 = -1;
          if (cVar1 == -1) {
            uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
                    ::custom::<&str>(anon_1b4a85c95499e1b671cf4fa96a1b6d0f_88_llvm_10049508496007902178
                                     ,0x10);
            goto LAB_005c8335;
          }
          local_d0 = cVar1;
          uStack_bc = uStack_3c;
          uStack_b8 = uStack_38;
          uStack_b4 = uStack_34;
          uStack_cf = local_4f;
          uStack_cb = uStack_4b;
          uStack_c7 = uStack_47;
          uStack_c3 = uStack_43;
          <core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<u64>>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
          ::deserialize::<serde_json[dc3825464c436029]::value::Value>(&local_f0,&local_d0);
          local_e0 = local_f0;
          uVar2 = local_e8;
          if (local_f0 == (undefined *)0x2) goto LAB_005c8335;
          local_b0 = local_e8;
          goto LAB_005c8150;
        }
        local_e8 = 0x15;
        local_f0 = &DAT_0019dd50;
      }
      else {
        if ((uStack_cf & 0xff) != 2) {
          if (puVar5 == (undefined *)0x2) {
            puVar5 = (undefined *)0x0;
          }
          puVar4 = local_e0;
          if (local_e0 == (undefined *)0x2) {
            puVar4 = (undefined *)0x0;
          }
          puVar3 = local_d8;
          if (local_d8 == (undefined *)0x2) {
            puVar3 = (undefined *)0x0;
          }
          *param_1 = puVar5;
          param_1[1] = unaff_R12;
          param_1[2] = puVar4;
          param_1[3] = local_b0;
          param_1[4] = puVar3;
          param_1[5] = local_a8;
          if (local_58 != 0) {
            uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                    ::invalid_length(local_a0,&
                                              anon_30b5cef53457a6ea696e8d7e9f6273d6_75_llvm_8436237269785592069
                                     ,
                                     anon_30b5cef53457a6ea696e8d7e9f6273d6_76_llvm_8436237269785592069
                                    );
            param_1[1] = uVar2;
            *param_1 = 2;
          }
          <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(local_98);
          goto LAB_005c834a;
        }
        if (local_d8 == (undefined *)0x2) {
          local_50 = -1;
          if (cVar1 == -1) {
            uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
                    ::custom::<&str>(anon_1b4a85c95499e1b671cf4fa96a1b6d0f_88_llvm_10049508496007902178
                                     ,0x10);
            goto LAB_005c8335;
          }
          local_d0 = cVar1;
          uStack_bc = uStack_3c;
          uStack_b8 = uStack_38;
          uStack_b4 = uStack_34;
          uStack_cf = local_4f;
          uStack_cb = uStack_4b;
          uStack_c7 = uStack_47;
          uStack_c3 = uStack_43;
          <core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<u64>>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
          ::deserialize::<serde_json[dc3825464c436029]::value::Value>(&local_f0,&local_d0);
          local_d8 = local_f0;
          uVar2 = local_e8;
          if (local_f0 == (undefined *)0x2) goto LAB_005c8335;
          local_a8 = local_e8;
          goto LAB_005c8150;
        }
        local_e8 = 0x16;
        local_f0 = &DAT_0019dd65;
      }
LAB_005c83a7:
      local_d0 = (char)&local_f0;
      uStack_cf = (uint)((ulonglong)&local_f0 >> 8);
      uStack_cb = CONCAT13(0x60,(int3)((ulonglong)&local_f0 >> 0x28));
      uStack_c7 = 0x6354;
      uStack_c3 = uStack_c3 & 0xff000000;
      uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_d0);
      goto LAB_005c8335;
    }
    if (puVar5 != (undefined *)0x2) {
      local_e8 = 0xd;
      local_f0 = &DAT_0019dd43;
      goto LAB_005c83a7;
    }
    local_50 = -1;
    if (cVar1 == -1) {
      uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
              ::custom::<&str>(anon_1b4a85c95499e1b671cf4fa96a1b6d0f_88_llvm_10049508496007902178,
                               0x10);
      goto LAB_005c8335;
    }
    local_d0 = cVar1;
    uStack_bc = uStack_3c;
    uStack_b8 = uStack_38;
    uStack_b4 = uStack_34;
    uStack_cf = local_4f;
    uStack_cb = uStack_4b;
    uStack_c7 = uStack_47;
    uStack_c3 = uStack_43;
    <core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<u64>>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
    ::deserialize::<serde_json[dc3825464c436029]::value::Value>(&local_f0,&local_d0);
    uVar2 = local_e8;
    if (local_f0 == (undefined *)0x2) goto LAB_005c8335;
    puVar5 = local_f0;
    unaff_R12 = local_e8;
  } while( true );
}


