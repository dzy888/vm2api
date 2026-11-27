// 005fd540 <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <<serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_map::<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

char * __rustcall
<<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_map::
<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (char *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  char local_100;
  char cStack_ff;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  ulonglong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_88 = param_2;
  local_80 = param_3;
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_100,&local_88)
  ;
  lVar1 = local_88;
  if (local_100 == '\x01') {
    local_b0 = CONCAT44(uStack_f4,uStack_f8);
  }
  else {
    if (cStack_ff != '\x01') {
      *param_1 = '\x05';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      return param_1;
    }
    <serde_json[dc3825464c436029]::value::de::KeyClassifier_as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
    ::deserialize::
    <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_100,local_88);
    lVar2 = CONCAT44(uStack_fc,CONCAT22(uStack_fe,CONCAT11(cStack_ff,local_100)));
    local_b0 = CONCAT44(uStack_f4,uStack_f8);
    if (lVar2 != -2) {
      if (lVar2 != -1) {
        local_a0 = 0;
        local_90 = 0;
        uVar3 = *(ulonglong *)(lVar1 + 0x28);
        if (uVar3 < *(ulonglong *)(lVar1 + 0x20)) {
          do {
            uVar3 = uVar3 + 1;
            uVar5 = (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x18) + -1 + uVar3);
            if (0x3a < uVar5) {
LAB_005fda97:
              local_128 = 6;
              uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(lVar1,&local_128);
              uVar6 = extraout_XMM0_Da_03;
              goto LAB_005fd65b;
            }
            if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
              if (uVar5 != 0x3a) goto LAB_005fda97;
              *(ulonglong *)(lVar1 + 0x28) = uVar3;
              local_b8 = lVar2;
              uVar6 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>
                      ::deserialize::
                      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                (param_1,lVar1);
              if (*param_1 == -1) goto LAB_005fd900;
              local_58 = *(undefined4 *)param_1;
              uStack_54 = *(undefined4 *)(param_1 + 4);
              uStack_50 = *(undefined4 *)(param_1 + 8);
              uStack_4c = *(undefined4 *)(param_1 + 0xc);
              local_48 = *(undefined4 *)(param_1 + 0x10);
              uStack_44 = *(undefined4 *)(param_1 + 0x14);
              uStack_40 = *(undefined4 *)(param_1 + 0x18);
              uStack_3c = *(undefined4 *)(param_1 + 0x1c);
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_100,&local_a0,&local_b8,&local_58);
              if (local_100 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_100);
              }
              goto LAB_005fd7cb;
            }
            *(ulonglong *)(lVar1 + 0x28) = uVar3;
          } while (uVar3 != *(ulonglong *)(lVar1 + 0x20));
        }
        local_128 = 3;
        uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(lVar1,&local_128);
        uVar6 = extraout_XMM0_Da;
LAB_005fd65b:
        *(undefined8 *)(param_1 + 8) = uVar4;
        *param_1 = -1;
LAB_005fd900:
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
        }
        goto joined_r0x005fd9b6;
      }
      uVar3 = *(ulonglong *)(lVar1 + 0x28);
      if (uVar3 < *(ulonglong *)(lVar1 + 0x20)) {
        do {
          uVar3 = uVar3 + 1;
          uVar5 = (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x18) + -1 + uVar3);
          if (0x3a < uVar5) {
LAB_005fda89:
            local_100 = '\x06';
            goto LAB_005fd6d6;
          }
          if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
            if (uVar5 != 0x3a) goto LAB_005fda89;
            *(ulonglong *)(lVar1 + 0x28) = uVar3;
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_str::<serde_json[dc3825464c436029]::raw::BoxedFromString>
                      (&local_128,lVar1);
            if (local_128 != 0) {
              lVar1 = CONCAT44(uStack_11c,uStack_120);
              local_100 = (char)local_128;
              cStack_ff = (char)((ulonglong)local_128 >> 8);
              uStack_fe = (undefined2)((ulonglong)local_128 >> 0x10);
              uStack_fc = (undefined4)((ulonglong)local_128 >> 0x20);
              uStack_f0 = 0;
              uStack_e9 = 0;
              uStack_e8 = 0;
              uStack_e1 = 0;
              local_e0 = local_128;
              serde_json[dc3825464c436029]::de::from_trait::
              <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                        (&local_128,&local_100);
              if ((char)local_128 == -1) {
                uVar4 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::custom::<serde_json[dc3825464c436029]::error::Error>
                                  (CONCAT44(uStack_11c,uStack_120));
                *(undefined8 *)(param_1 + 8) = uVar4;
                *param_1 = -1;
                local_128._0_4_ = extraout_XMM0_Da_01;
              }
              else {
                *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_114,local_118);
                *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_10c,uStack_110);
                *(undefined4 *)param_1 = (undefined4)local_128;
                *(undefined4 *)(param_1 + 4) = local_128._4_4_;
                *(undefined4 *)(param_1 + 8) = uStack_120;
                *(undefined4 *)(param_1 + 0xc) = uStack_11c;
              }
              if (lVar1 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_128,1);
              return param_1;
            }
            uVar4 = CONCAT44(uStack_11c,uStack_120);
            goto LAB_005fd969;
          }
          *(ulonglong *)(lVar1 + 0x28) = uVar3;
        } while (uVar3 != *(ulonglong *)(lVar1 + 0x20));
      }
      local_100 = '\x03';
LAB_005fd6d6:
      uStack_fc = 0;
      uStack_fe = 0;
      cStack_ff = 0;
      uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(lVar1,&local_100);
LAB_005fd969:
      *(undefined8 *)(param_1 + 8) = uVar4;
      goto LAB_005fd585;
    }
  }
  *(undefined8 *)(param_1 + 8) = local_b0;
LAB_005fd585:
  *param_1 = -1;
  return param_1;
LAB_005fd7cb:
  <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
  ::next_key_seed::
  <core[c0acaeba6ab4c2e0]::marker::PhantomData<alloc[12e961f32105355]::string::String>>
            (&local_b8,&local_88);
  if (local_b8 != -2) {
    if (local_b8 == -1) {
LAB_005fda17:
      uStack_fc._3_1_ = (undefined1)local_a0;
      uStack_f8 = (undefined4)((ulonglong)local_a0 >> 8);
      uStack_f4._0_3_ = (undefined3)((ulonglong)local_a0 >> 0x28);
      uStack_f4._3_1_ = (undefined1)uStack_98;
      *param_1 = '\x05';
      *(ulonglong *)(param_1 + 1) =
           CONCAT44(uStack_fc,CONCAT22(uStack_fe,CONCAT11(cStack_ff,local_100)));
      *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_f4,uStack_f8);
      *(undefined8 *)(param_1 + 0x10) = uStack_98;
      *(undefined8 *)(param_1 + 0x18) = local_90;
      return param_1;
    }
    uVar3 = *(ulonglong *)(local_88 + 0x28);
    if (*(ulonglong *)(local_88 + 0x20) <= uVar3) {
LAB_005fd972:
      local_128 = 3;
      local_b0 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_error(local_88,&local_128);
      uVar6 = extraout_XMM0_Da_00;
joined_r0x005fda63:
      if (local_b8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
      }
      goto LAB_005fd9a4;
    }
    while( true ) {
      uVar3 = uVar3 + 1;
      uVar5 = (ulonglong)*(byte *)(*(longlong *)(local_88 + 0x18) + -1 + uVar3);
      if (0x3a < uVar5) goto LAB_005fda6e;
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(local_88 + 0x28) = uVar3;
      if (uVar3 == *(ulonglong *)(local_88 + 0x20)) goto LAB_005fd972;
    }
    if (uVar5 != 0x3a) {
LAB_005fda6e:
      local_128 = 6;
      local_b0 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_error(local_88,&local_128);
      uVar6 = extraout_XMM0_Da_02;
      goto joined_r0x005fda63;
    }
    *(ulonglong *)(local_88 + 0x28) = uVar3;
    uVar6 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>
            ::deserialize::
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      (&local_100);
    if (local_100 == -1) {
      local_b0 = CONCAT44(uStack_f4,uStack_f8);
      goto joined_r0x005fda63;
    }
    uStack_74 = uStack_fc;
    uStack_70 = uStack_f8;
    uStack_6c = uStack_f4;
    if (local_b8 == -1) goto LAB_005fda17;
    if (local_b8 == -2) goto LAB_005fd9a4;
    local_68 = (undefined4)uStack_f0;
    uStack_64 = (undefined4)(CONCAT17(uStack_e9,uStack_f0) >> 0x20);
    uStack_60 = (undefined4)uStack_e8;
    uStack_5c = (undefined4)(CONCAT17(uStack_e1,uStack_e8) >> 0x20);
    local_118 = local_68;
    uStack_114 = uStack_64;
    uStack_110 = uStack_60;
    uStack_10c = uStack_5c;
    local_128 = CONCAT44(uStack_fc,CONCAT22(uStack_fe,CONCAT11(cStack_ff,local_100)));
    uStack_120 = uStack_f8;
    uStack_11c = uStack_f4;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_100,&local_a0,&local_b8,&local_128);
    if (local_100 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_100);
    }
    goto LAB_005fd7cb;
  }
LAB_005fd9a4:
  *(undefined8 *)(param_1 + 8) = local_b0;
  *param_1 = -1;
joined_r0x005fd9b6:
  if (local_a0 == 0) {
    local_c0 = 0;
  }
  else {
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = (undefined7)local_a0;
    uStack_e9 = (undefined1)((ulonglong)local_a0 >> 0x38);
    uStack_e8 = (undefined7)uStack_98;
    uStack_e1 = (undefined1)((ulonglong)uStack_98 >> 0x38);
    local_d8 = 0;
    local_c0 = local_90;
    local_d0 = local_a0;
  }
  local_100 = local_a0 != 0;
  local_e0 = (ulonglong)(byte)local_100;
  cStack_ff = 0;
  uStack_fe = 0;
  uStack_fc = 0;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            (&local_100);
  return param_1;
}


