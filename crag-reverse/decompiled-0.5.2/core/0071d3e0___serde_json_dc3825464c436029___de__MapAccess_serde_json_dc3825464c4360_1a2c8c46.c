// 0071d3e0 <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::StrRead>>

/* <<serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_map::<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::StrRead>>
    */

char * __rustcall
<<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_map::
<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::StrRead>>
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
  char local_e8;
  char cStack_e7;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [24];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_98 = param_2;
  local_90 = param_3;
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::StrRead>(&local_e8,&local_98);
  lVar2 = local_98;
  if (local_e8 == '\x01') {
    uVar4 = CONCAT44(uStack_dc,uStack_e0);
  }
  else {
    if (cStack_e7 != '\x01') {
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
    <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>
              (&local_e8,local_98);
    lVar1 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(cStack_e7,local_e8)));
    uVar4 = CONCAT44(uStack_dc,uStack_e0);
    if (lVar1 != -2) {
      if (lVar1 != -1) {
        local_88 = 0;
        local_78 = 0;
        uVar3 = *(ulonglong *)(lVar2 + 0x28);
        if (uVar3 < *(ulonglong *)(lVar2 + 0x20)) {
          do {
            uVar3 = uVar3 + 1;
            uVar5 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar3);
            if (0x3a < uVar5) {
LAB_0071d882:
              local_b8 = 6;
              uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                      ::peek_error(lVar2,&local_b8);
              uVar6 = extraout_XMM0_Da_03;
              goto LAB_0071d4e9;
            }
            if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
              if (uVar5 != 0x3a) goto LAB_0071d882;
              *(ulonglong *)(lVar2 + 0x28) = uVar3;
              uVar6 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
                      ::deserialize_any::
                      <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>
                                (param_1,lVar2);
              if (*param_1 == -1) goto LAB_0071d766;
              local_58 = *(undefined4 *)param_1;
              uStack_54 = *(undefined4 *)(param_1 + 4);
              uStack_50 = *(undefined4 *)(param_1 + 8);
              uStack_4c = *(undefined4 *)(param_1 + 0xc);
              local_48 = *(undefined4 *)(param_1 + 0x10);
              uStack_44 = *(undefined4 *)(param_1 + 0x14);
              uStack_40 = *(undefined4 *)(param_1 + 0x18);
              uStack_3c = *(undefined4 *)(param_1 + 0x1c);
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_e8,&local_88,local_70,&local_58);
              if (local_e8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_e8);
              }
              goto LAB_0071d650;
            }
            *(ulonglong *)(lVar2 + 0x28) = uVar3;
          } while (uVar3 != *(ulonglong *)(lVar2 + 0x20));
        }
        local_b8 = 3;
        uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
                ::peek_error(lVar2,&local_b8);
        uVar6 = extraout_XMM0_Da;
LAB_0071d4e9:
        *(undefined8 *)(param_1 + 8) = uVar4;
        *param_1 = -1;
LAB_0071d766:
        if (lVar1 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
        }
        goto LAB_0071d7c5;
      }
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
      if (uVar3 < *(ulonglong *)(lVar2 + 0x20)) {
        do {
          uVar3 = uVar3 + 1;
          uVar5 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar3);
          if (0x3a < uVar5) {
LAB_0071d875:
            local_e8 = '\x06';
            goto LAB_0071d563;
          }
          if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
            if (uVar5 != 0x3a) goto LAB_0071d875;
            *(ulonglong *)(lVar2 + 0x28) = uVar3;
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_str::<serde_json[dc3825464c436029]::raw::BoxedFromString>(&local_b8,lVar2)
            ;
            if (local_b8 != 0) {
              lVar2 = CONCAT44(uStack_ac,uStack_b0);
              local_e8 = (char)local_b8;
              cStack_e7 = (char)((ulonglong)local_b8 >> 8);
              uStack_e6 = (undefined2)((ulonglong)local_b8 >> 0x10);
              uStack_e4 = (undefined4)((ulonglong)local_b8 >> 0x20);
              uStack_d8 = 0;
              uStack_d4 = 0;
              uStack_d0 = 0;
              uStack_cc = 0;
              local_c8 = local_b8;
              serde_json[dc3825464c436029]::de::from_trait::
              <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                        (&local_b8,&local_e8);
              if ((char)local_b8 == -1) {
                uVar4 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::custom::<serde_json[dc3825464c436029]::error::Error>
                                  (CONCAT44(uStack_ac,uStack_b0));
                *(undefined8 *)(param_1 + 8) = uVar4;
                *param_1 = -1;
                local_b8._0_4_ = extraout_XMM0_Da_01;
              }
              else {
                *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_a4,local_a8);
                *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_9c,uStack_a0);
                *(undefined4 *)param_1 = (undefined4)local_b8;
                *(undefined4 *)(param_1 + 4) = local_b8._4_4_;
                *(undefined4 *)(param_1 + 8) = uStack_b0;
                *(undefined4 *)(param_1 + 0xc) = uStack_ac;
              }
              if (lVar2 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_b8,1);
              return param_1;
            }
            uVar4 = CONCAT44(uStack_ac,uStack_b0);
            goto LAB_0071d783;
          }
          *(ulonglong *)(lVar2 + 0x28) = uVar3;
        } while (uVar3 != *(ulonglong *)(lVar2 + 0x20));
      }
      local_e8 = '\x03';
LAB_0071d563:
      uStack_e4 = 0;
      uStack_e6 = 0;
      cStack_e7 = 0;
      uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
              ::peek_error(lVar2,&local_e8);
LAB_0071d783:
      *(undefined8 *)(param_1 + 8) = uVar4;
      goto LAB_0071d419;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
LAB_0071d419:
  *param_1 = -1;
  return param_1;
LAB_0071d650:
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::StrRead>(&local_e8,&local_98);
  lVar2 = local_98;
  if (local_e8 != '\x01') {
    if (cStack_e7 != '\x01') {
      uStack_e4._3_1_ = (undefined1)local_88;
      uStack_e0 = (undefined4)((ulonglong)local_88 >> 8);
      uStack_dc._0_3_ = (undefined3)((ulonglong)local_88 >> 0x28);
      uStack_dc._3_1_ = (undefined1)uStack_80;
      *param_1 = '\x05';
      *(ulonglong *)(param_1 + 1) =
           CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(cStack_e7,local_e8)));
      *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_dc,uStack_e0);
      *(undefined8 *)(param_1 + 0x10) = uStack_80;
      *(undefined8 *)(param_1 + 0x18) = local_78;
      return param_1;
    }
    <alloc[12e961f32105355]::string::String_as_serde_core[48776c27239fa21f]::de::Deserialize>::
    deserialize::
    <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::StrRead>>
              (&local_e8,local_98);
    lVar1 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(cStack_e7,local_e8)));
    uVar4 = CONCAT44(uStack_dc,uStack_e0);
    if (lVar1 == -1) goto LAB_0071d7be;
    uVar3 = *(ulonglong *)(lVar2 + 0x28);
    if (*(ulonglong *)(lVar2 + 0x20) <= uVar3) {
LAB_0071d78c:
      local_b8 = 3;
      uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
              ::peek_error(lVar2,&local_b8);
      uVar6 = extraout_XMM0_Da_00;
joined_r0x0071d84f:
      if (lVar1 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
      }
      goto LAB_0071d7be;
    }
    while( true ) {
      uVar3 = uVar3 + 1;
      uVar5 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar3);
      if (0x3a < uVar5) goto LAB_0071d85a;
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lVar2 + 0x28) = uVar3;
      if (uVar3 == *(ulonglong *)(lVar2 + 0x20)) goto LAB_0071d78c;
    }
    if (uVar5 != 0x3a) {
LAB_0071d85a:
      local_b8 = 6;
      uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>
              ::peek_error(lVar2,&local_b8);
      uVar6 = extraout_XMM0_Da_02;
      goto joined_r0x0071d84f;
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    uVar6 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_any::
            <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>
                      (&local_e8,lVar2);
    if (local_e8 == -1) {
      uVar4 = CONCAT44(uStack_dc,uStack_e0);
      goto joined_r0x0071d84f;
    }
    local_a8 = uStack_d8;
    uStack_a4 = uStack_d4;
    uStack_a0 = uStack_d0;
    uStack_9c = uStack_cc;
    local_b8 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(cStack_e7,local_e8)));
    uStack_b0 = uStack_e0;
    uStack_ac = uStack_dc;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_e8,&local_88,local_70,&local_b8);
    if (local_e8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_e8);
    }
    goto LAB_0071d650;
  }
  uVar4 = CONCAT44(uStack_dc,uStack_e0);
LAB_0071d7be:
  *(undefined8 *)(param_1 + 8) = uVar4;
  *param_1 = -1;
LAB_0071d7c5:
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_88);
  return param_1;
}


