// 0018f890 <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>

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
  char local_e0;
  char cStack_df;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50;
  undefined1 local_48 [24];
  
  local_58 = param_2;
  local_50 = param_3;
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_e0,&local_58);
  lVar2 = local_58;
  if (local_e0 == '\x01') {
    uVar4 = CONCAT44(uStack_d4,uStack_d8);
  }
  else {
    if (cStack_df != '\x01') {
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
              (&local_e0,local_58);
    lVar1 = CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(cStack_df,local_e0)));
    uVar4 = CONCAT44(uStack_d4,uStack_d8);
    if (lVar1 != -2) {
      if (lVar1 != -1) {
        local_70 = 0;
        local_60 = 0;
        uVar3 = *(ulonglong *)(lVar2 + 0x28);
        if (uVar3 < *(ulonglong *)(lVar2 + 0x20)) {
          do {
            uVar3 = uVar3 + 1;
            uVar5 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar3);
            if (0x3a < uVar5) {
LAB_0018fdbe:
              local_98 = 6;
              uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(lVar2,&local_98);
              uVar6 = extraout_XMM0_Da_03;
              goto LAB_0018f9b1;
            }
            if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
              if (uVar5 != 0x3a) goto LAB_0018fdbe;
              *(ulonglong *)(lVar2 + 0x28) = uVar3;
              uVar6 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>
                      ::deserialize::
                      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                (param_1,lVar2);
              if (*param_1 == -1) goto LAB_0018fc33;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_e0,&local_70,local_48,param_1);
              if (local_e0 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_e0);
              }
              goto LAB_0018fb0c;
            }
            *(ulonglong *)(lVar2 + 0x28) = uVar3;
          } while (uVar3 != *(ulonglong *)(lVar2 + 0x20));
        }
        local_98 = 3;
        uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(lVar2,&local_98);
        uVar6 = extraout_XMM0_Da;
LAB_0018f9b1:
        *(undefined8 *)(param_1 + 8) = uVar4;
        *param_1 = -1;
LAB_0018fc33:
        if (lVar1 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar6,1);
        }
        goto joined_r0x0018fce3;
      }
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
      if (uVar3 < *(ulonglong *)(lVar2 + 0x20)) {
        do {
          uVar3 = uVar3 + 1;
          uVar5 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar3);
          if (0x3a < uVar5) {
LAB_0018fdb0:
            local_e0 = '\x06';
            goto LAB_0018fa2c;
          }
          if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
            if (uVar5 != 0x3a) goto LAB_0018fdb0;
            *(ulonglong *)(lVar2 + 0x28) = uVar3;
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_str::<serde_json[dc3825464c436029]::raw::BoxedFromString>(&local_98,lVar2)
            ;
            if (local_98 != 0) {
              lVar2 = CONCAT44(uStack_8c,uStack_90);
              local_e0 = (char)local_98;
              cStack_df = (char)((ulonglong)local_98 >> 8);
              uStack_de = (undefined2)((ulonglong)local_98 >> 0x10);
              uStack_dc = (undefined4)((ulonglong)local_98 >> 0x20);
              uStack_d0 = 0;
              uStack_cc = 0;
              uStack_c8 = 0;
              uStack_c4 = 0;
              local_c0 = local_98;
              serde_json[dc3825464c436029]::de::from_trait::
              <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                        (&local_98,&local_e0);
              if ((char)local_98 == -1) {
                uVar4 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::custom::<serde_json[dc3825464c436029]::error::Error>
                                  (CONCAT44(uStack_8c,uStack_90));
                *(undefined8 *)(param_1 + 8) = uVar4;
                *param_1 = -1;
                local_98._0_4_ = extraout_XMM0_Da_01;
              }
              else {
                *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_84,local_88);
                *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_7c,uStack_80);
                *(undefined4 *)param_1 = (undefined4)local_98;
                *(undefined4 *)(param_1 + 4) = local_98._4_4_;
                *(undefined4 *)(param_1 + 8) = uStack_90;
                *(undefined4 *)(param_1 + 0xc) = uStack_8c;
              }
              if (lVar2 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00219c40)((undefined4)local_98,1);
              return param_1;
            }
            uVar4 = CONCAT44(uStack_8c,uStack_90);
            goto LAB_0018fc99;
          }
          *(ulonglong *)(lVar2 + 0x28) = uVar3;
        } while (uVar3 != *(ulonglong *)(lVar2 + 0x20));
      }
      local_e0 = '\x03';
LAB_0018fa2c:
      uStack_dc = 0;
      uStack_de = 0;
      cStack_df = 0;
      uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(lVar2,&local_e0);
LAB_0018fc99:
      *(undefined8 *)(param_1 + 8) = uVar4;
      goto LAB_0018f8d5;
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
LAB_0018f8d5:
  *param_1 = -1;
  return param_1;
LAB_0018fb0c:
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_e0,&local_58);
  lVar2 = local_58;
  if (local_e0 != '\x01') {
    if (cStack_df != '\x01') {
      uStack_dc._3_1_ = (undefined1)local_70;
      uStack_d8 = (undefined4)((ulonglong)local_70 >> 8);
      uStack_d4._0_3_ = (undefined3)((ulonglong)local_70 >> 0x28);
      uStack_d4._3_1_ = (undefined1)uStack_68;
      *param_1 = '\x05';
      *(ulonglong *)(param_1 + 1) =
           CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(cStack_df,local_e0)));
      *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_d4,uStack_d8);
      *(undefined8 *)(param_1 + 0x10) = uStack_68;
      *(undefined8 *)(param_1 + 0x18) = local_60;
      return param_1;
    }
    <alloc[12e961f32105355]::string::String_as_serde_core[48776c27239fa21f]::de::Deserialize>::
    deserialize::
    <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_e0,local_58);
    lVar1 = CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(cStack_df,local_e0)));
    uVar4 = CONCAT44(uStack_d4,uStack_d8);
    if (lVar1 == -1) goto LAB_0018fcd4;
    uVar3 = *(ulonglong *)(lVar2 + 0x28);
    if (*(ulonglong *)(lVar2 + 0x20) <= uVar3) {
LAB_0018fca2:
      local_98 = 3;
      uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(lVar2,&local_98);
      uVar6 = extraout_XMM0_Da_00;
joined_r0x0018fd8a:
      if (lVar1 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)(uVar6,1);
      }
      goto LAB_0018fcd4;
    }
    while( true ) {
      uVar3 = uVar3 + 1;
      uVar5 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar3);
      if (0x3a < uVar5) goto LAB_0018fd95;
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lVar2 + 0x28) = uVar3;
      if (uVar3 == *(ulonglong *)(lVar2 + 0x20)) goto LAB_0018fca2;
    }
    if (uVar5 != 0x3a) {
LAB_0018fd95:
      local_98 = 6;
      uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(lVar2,&local_98);
      uVar6 = extraout_XMM0_Da_02;
      goto joined_r0x0018fd8a;
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    uVar6 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>
            ::deserialize::
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      (&local_e0,lVar2);
    if (local_e0 == -1) {
      uVar4 = CONCAT44(uStack_d4,uStack_d8);
      goto joined_r0x0018fd8a;
    }
    local_88 = uStack_d0;
    uStack_84 = uStack_cc;
    uStack_80 = uStack_c8;
    uStack_7c = uStack_c4;
    local_98 = CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(cStack_df,local_e0)));
    uStack_90 = uStack_d8;
    uStack_8c = uStack_d4;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_e0,&local_70,local_48,&local_98);
    if (local_e0 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_e0);
    }
    goto LAB_0018fb0c;
  }
  uVar4 = CONCAT44(uStack_d4,uStack_d8);
LAB_0018fcd4:
  *(undefined8 *)(param_1 + 8) = uVar4;
  *param_1 = -1;
joined_r0x0018fce3:
  if (local_70 == 0) {
    local_a0 = 0;
  }
  else {
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = (undefined4)local_70;
    uStack_cc = (undefined4)((ulonglong)local_70 >> 0x20);
    uStack_c8 = (undefined4)uStack_68;
    uStack_c4 = (undefined4)((ulonglong)uStack_68 >> 0x20);
    local_b8 = 0;
    local_a0 = local_60;
    local_b0 = local_70;
  }
  local_e0 = local_70 != 0;
  local_c0 = (ulonglong)(byte)local_e0;
  cStack_df = 0;
  uStack_de = 0;
  uStack_dc = 0;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            (&local_e0);
  return param_1;
}


