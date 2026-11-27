// 00056660 <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_enum::<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined1 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_enum::
<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined1 *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined4 uVar7;
  char local_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined4 uStack_ff;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char local_e8;
  undefined8 local_e7;
  undefined4 local_df;
  undefined2 local_db;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined3 uStack_38;
  undefined4 uStack_35;
  undefined4 uStack_31;
  undefined4 uStack_2d;
  
  cVar2 = *param_2;
  if ((cVar2 == '\f') || (cVar2 == '\r')) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    local_f8 = *(undefined8 *)(param_2 + 0x10);
    uStack_f0 = *(undefined8 *)(param_2 + 0x18);
    local_108 = (char)*(undefined8 *)param_2;
    uStack_107 = (undefined7)((ulonglong)*(undefined8 *)param_2 >> 8);
    uStack_100 = (undefined1)uVar4;
    uStack_ff = (undefined4)((ulonglong)uVar4 >> 8);
    uStack_fb = (undefined2)((ulonglong)uVar4 >> 0x28);
    uStack_f9 = (undefined1)((ulonglong)uVar4 >> 0x38);
    uVar5 = 0xff;
    bVar6 = false;
LAB_000567ce:
    local_c8 = CONCAT71(uStack_107,local_108);
    uStack_c0 = CONCAT17(uStack_f9,CONCAT25(uStack_fb,CONCAT41(uStack_ff,uStack_100)));
    local_b8 = (undefined4)local_f8;
    uStack_b4 = local_f8._4_4_;
    uStack_b0 = (undefined4)uStack_f0;
    uStack_ac = uStack_f0._4_4_;
    local_a8 = CONCAT31((int3)local_48,uVar5);
    uStack_a4 = (undefined4)(CONCAT44(uStack_44,local_48) >> 0x18);
    uStack_a0._1_3_ = (undefined3)uStack_40;
    uStack_a0 = CONCAT31(uStack_a0._1_3_,(char)((uint)uStack_44 >> 0x18));
    uStack_9c = (undefined4)(CONCAT44(uStack_3c,uStack_40) >> 0x18);
    local_98 = CONCAT31(uStack_38,uStack_3c._3_1_);
    uStack_94 = uStack_35;
    uStack_90 = uStack_31;
    uStack_8c = uStack_2d;
    <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor_as_serde_core[48776c27239fa21f]::de::Visitor>
    ::visit_enum::
    <serde[8f836fbdfa2c5b5d]::private::de::content::EnumDeserializer<serde_json[dc3825464c436029]::error::Error>>
              (param_1,&local_c8);
    if (!bVar6 || cVar2 == '\x15') {
      return param_1;
    }
LAB_00056821:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(param_2);
    return param_1;
  }
  if (cVar2 != '\x15') {
    uVar7 = serde[8f836fbdfa2c5b5d]::private::de::content::content_unexpected(&local_c8,param_2);
    uVar4 = (*(code *)PTR_invalid_type_000c3b18)(uVar7,&DAT_000bfe60);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *param_1 = 1;
    goto LAB_00056821;
  }
  local_78 = *(undefined8 *)(param_2 + 8);
  local_88 = *(char **)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x18);
  local_70 = local_88 + lVar3 * 0x40;
  local_80 = local_88;
  if (lVar3 != 0) {
    pcVar1 = local_88 + 0x40;
    local_108 = *local_88;
    local_80 = pcVar1;
    if (local_108 != -1) {
      local_e7 = *(undefined8 *)(local_88 + 1);
      uVar4 = *(undefined8 *)(local_88 + 9);
      uStack_f0 = *(undefined8 *)(local_88 + 0x18);
      uStack_d7 = (undefined7)((ulonglong)*(undefined8 *)(local_88 + 0x10) >> 8);
      local_df = (undefined4)uVar4;
      local_db = (undefined2)((ulonglong)uVar4 >> 0x20);
      local_d9 = (undefined1)((ulonglong)uVar4 >> 0x30);
      local_d8 = (undefined1)((ulonglong)uVar4 >> 0x38);
      local_68 = *(undefined8 *)(local_88 + 0x20);
      uStack_60 = *(undefined8 *)(local_88 + 0x28);
      local_58 = *(undefined8 *)(local_88 + 0x30);
      uStack_50 = *(undefined8 *)(local_88 + 0x38);
      local_e8 = local_108;
      uStack_d0 = uStack_f0;
      if (lVar3 != 1) {
        local_80 = local_88 + 0x80;
        uStack_c0 = *(undefined8 *)(local_88 + 0x48);
        local_b8 = *(undefined4 *)(local_88 + 0x50);
        uStack_b4 = *(undefined4 *)(local_88 + 0x54);
        uStack_b0 = *(undefined4 *)(local_88 + 0x58);
        uStack_ac = *(undefined4 *)(local_88 + 0x5c);
        local_a8 = *(undefined4 *)(local_88 + 0x60);
        uStack_a4 = *(undefined4 *)(local_88 + 100);
        uStack_a0 = *(undefined4 *)(local_88 + 0x68);
        uStack_9c = *(undefined4 *)(local_88 + 0x6c);
        local_98 = *(undefined4 *)(local_88 + 0x70);
        uStack_94 = *(undefined4 *)(local_88 + 0x74);
        uStack_90 = *(undefined4 *)(local_88 + 0x78);
        uStack_8c = *(undefined4 *)(local_88 + 0x7c);
        local_c8._0_1_ = (char)*(undefined4 *)pcVar1;
        bVar6 = (char)local_c8 != -1;
        local_c8 = *(undefined8 *)pcVar1;
        if (bVar6) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <serde_core[48776c27239fa21f]::private::content::Content>(&local_c8);
          uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_core[48776c27239fa21f]::private::content::Content>(&local_a8);
          local_c8 = CONCAT71(local_c8._1_7_,0xb);
          uVar4 = (*(code *)PTR_invalid_value_000c3b28)(uVar7,&DAT_000bfe60);
          *(undefined8 *)(param_1 + 8) = uVar4;
          *param_1 = 1;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <serde_core[48776c27239fa21f]::private::content::Content>
                    (&local_68,&PTR_s_map_with_a_single_key_000bfee0);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <serde_core[48776c27239fa21f]::private::content::Content>(&local_e8);
          goto LAB_000568c2;
        }
      }
      local_f8 = CONCAT71(uStack_d7,local_d8);
      uStack_107 = (undefined7)local_e7;
      uStack_100 = (undefined1)((ulonglong)local_e7 >> 0x38);
      uStack_ff = local_df;
      uStack_fb = local_db;
      uStack_f9 = local_d9;
      uVar5 = (undefined1)local_68;
      local_48 = *(undefined4 *)(local_88 + 0x21);
      uStack_44 = *(undefined4 *)(local_88 + 0x25);
      uStack_40 = *(undefined4 *)(local_88 + 0x29);
      uStack_35 = *(undefined4 *)(local_88 + 0x34);
      uStack_31 = *(undefined4 *)(local_88 + 0x38);
      uStack_2d = *(undefined4 *)(local_88 + 0x3c);
      uStack_3c._0_3_ = (undefined3)*(undefined4 *)(local_88 + 0x2d);
      uStack_3c._3_1_ = (undefined1)*(undefined4 *)(local_88 + 0x30);
      uStack_38 = (undefined3)((uint)*(undefined4 *)(local_88 + 0x30) >> 8);
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_88);
      bVar6 = true;
      goto LAB_000567ce;
    }
  }
  local_c8 = CONCAT71(local_c8._1_7_,0xb);
  uVar4 = (*(code *)PTR_invalid_value_000c3b28)(lVar3,&DAT_000bfe60);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *param_1 = 1;
LAB_000568c2:
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_88);
  return param_1;
}


