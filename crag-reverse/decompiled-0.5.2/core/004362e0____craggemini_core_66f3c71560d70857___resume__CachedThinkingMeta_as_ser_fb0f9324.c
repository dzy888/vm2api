// 004362e0 <<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char unaff_BPL;
  ulonglong uVar8;
  undefined8 *unaff_R12;
  undefined8 *puVar9;
  code *unaff_R15;
  bool bVar10;
  undefined1 auVar11 [16];
  char local_a9;
  undefined8 local_a0;
  code *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  undefined1 local_61;
  code *local_60;
  undefined8 *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_38;
  
  uVar5 = param_2[5];
  if (uVar5 < (ulonglong)param_2[4]) {
    do {
      uVar5 = uVar5 + 1;
      bVar3 = *(byte *)(param_2[3] + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          pcVar1 = (char *)(param_2 + 7);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            param_2[5] = uVar5;
            local_80 = (code *)CONCAT71(local_80._1_7_,1);
            local_88 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_a0,&local_88);
            if ((char)local_a0 == '\x01') goto LAB_00436752;
            if (local_a0._1_1_ == '\x01') {
              deserialize_enum::
              <<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                        (&local_a0,local_88);
              if ((char)local_a0 == '\x01') {
LAB_00436752:
                unaff_R15 = local_98;
                local_a9 = unaff_BPL;
                goto LAB_00436757;
              }
              local_a9 = local_a0._1_1_;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_a0,&local_88);
              unaff_BPL = local_a9;
              if ((char)local_a0 == '\x01') goto LAB_00436752;
              if (local_a0._1_1_ == '\x01') {
                <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
                ::deserialize::
                <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          (&local_a0,local_88);
                unaff_R15 = local_98;
                if (local_a0 == (undefined8 *)0xfffffffffffffffe) goto LAB_00436757;
                unaff_R12 = local_90;
                puVar9 = local_a0;
              }
              else {
                puVar9 = (undefined8 *)0xffffffffffffffff;
              }
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_a0,&local_88);
              if ((char)local_a0 == '\x01') {
                pcVar7 = local_98;
LAB_00436a21:
                local_70 = pcVar7;
                if (0 < (longlong)puVar9) {
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                }
                puVar9 = (undefined8 *)0xfffffffffffffffe;
                unaff_R15 = pcVar7;
              }
              else {
                if (local_a0._1_1_ != '\x01') {
                  pcVar7 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                   ::invalid_length(2,&PTR_DAT_00789d90,&DAT_00789c78);
                  goto LAB_00436a21;
                }
                auVar11 = deserialize_u64::
                          <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                    (local_88);
                pcVar7 = auVar11._8_8_;
                local_70 = pcVar7;
                if ((auVar11._0_8_ & 1) != 0) goto LAB_00436a21;
              }
            }
            else {
              unaff_R15 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                  ::invalid_length(0,&PTR_DAT_00789d90,&DAT_00789c78);
              local_a9 = unaff_BPL;
LAB_00436757:
              puVar9 = (undefined8 *)0xfffffffffffffffe;
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            pcVar7 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            if (puVar9 == (undefined8 *)0xfffffffffffffffe) goto LAB_004368de;
            if (pcVar7 == (code *)0x0) goto LAB_004367e5;
            if ((longlong)puVar9 < 1) goto LAB_004369ac;
            goto LAB_00436995;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pcVar7 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_61,&DAT_0078a6a0);
            goto LAB_004369ac;
          }
          pcVar1 = (char *)(param_2 + 7);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            param_2[5] = uVar5;
            local_38 = 1;
            local_a9 = -1;
            local_50 = 0;
            local_58 = (undefined8 *)&DAT_00194669;
            unaff_R12 = (undefined8 *)0xfffffffffffffffe;
            local_40 = param_2;
            goto LAB_004363ab;
          }
        }
        local_a0 = (undefined8 *)0x18;
        goto LAB_00436346;
      }
      param_2[5] = uVar5;
    } while (uVar5 != param_2[4]);
  }
  local_a0 = (undefined8 *)0x5;
LAB_00436346:
  uVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_a0);
  goto LAB_004369b7;
LAB_004363ab:
  local_60 = unaff_R15;
LAB_004363c0:
  do {
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_a0,&local_40);
    puVar9 = local_40;
    if ((char)local_a0 == '\x01') {
      unaff_R15 = local_98;
LAB_0043678c:
      bVar10 = true;
      goto LAB_00436794;
    }
    if (local_a0._1_1_ != '\x01') {
      if (local_a9 == -1) {
        local_88 = (undefined8 *)&DAT_00194669;
        local_80 = (code *)&DAT_00000006;
        local_a0 = &local_88;
        local_98 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        unaff_R15 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                            ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                      (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                       ,&local_a0);
        goto LAB_00436935;
      }
      bVar10 = unaff_R12 == (undefined8 *)0xfffffffffffffffe;
      puVar9 = unaff_R12;
      if (bVar10) {
        puVar9 = (undefined8 *)0xffffffffffffffff;
      }
      if ((local_50 & 1) != 0) {
        unaff_R12 = local_48;
        unaff_R15 = local_60;
        goto LAB_004367c6;
      }
      local_88 = (undefined8 *)&DAT_0019463c;
      local_80 = (code *)0xc;
      local_a0 = &local_88;
      local_98 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      unaff_R15 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                    (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                     ,&local_a0);
      if ((undefined1 *)((longlong)puVar9 + -1) < (undefined1 *)0xfffffffffffffffe) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      goto LAB_00436794;
    }
    plVar2 = local_40 + 3;
    local_40[5] = local_40[5] + 1;
    local_40[2] = 0;
    (*(code *)PTR_parse_str_007998f8)();
    unaff_R15 = local_98;
    if (local_a0 == (undefined8 *)0x2) goto LAB_0043678c;
    if (local_90 != (undefined8 *)0xc) {
      if (local_90 == (undefined8 *)0xa) {
        if (!(*(short *)(local_98 + 8) != 0x6469 || *(longlong *)local_98 != 0x5f746e756f636361))
        break;
      }
      else if ((local_90 == (undefined8 *)&DAT_00000006) &&
              (!(*(short *)(local_98 + 4) != 0x796c || *(int *)local_98 != 0x696d6166))) {
        if (local_a9 != -1) {
          local_80 = (code *)&DAT_00000006;
          goto LAB_00436b06;
        }
        uVar5 = puVar9[5];
        if (uVar5 < (ulonglong)puVar9[4]) {
          lVar4 = *plVar2;
          while( true ) {
            uVar5 = uVar5 + 1;
            uVar8 = (ulonglong)*(byte *)(lVar4 + -1 + uVar5);
            if (0x3a < uVar8) goto LAB_00436b68;
            if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
            puVar9[5] = uVar5;
            if (uVar5 == puVar9[4]) goto LAB_00436a81;
          }
          if (uVar8 == 0x3a) {
            puVar9[5] = uVar5;
            deserialize_enum::
            <<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_88,puVar9);
            if ((char)local_88 == '\x01') {
              bVar10 = true;
              unaff_R15 = local_80;
              goto LAB_00436794;
            }
            local_a9 = local_88._1_1_;
            goto LAB_004363c0;
          }
LAB_00436b68:
          local_a0 = (undefined8 *)&DAT_00000006;
          unaff_R15 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              ::peek_error(puVar9,&local_a0);
        }
        else {
LAB_00436a81:
          local_a0 = (undefined8 *)0x3;
          unaff_R15 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              ::peek_error(puVar9,&local_a0);
        }
        goto LAB_0043678c;
      }
LAB_00436520:
      unaff_R15 = (code *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                          ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                                    (puVar9,plVar2);
      if (unaff_R15 != (code *)0x0) goto LAB_0043678c;
      goto LAB_004363c0;
    }
    if (!(*(int *)(local_98 + 8) == 0x736d5f64 && *(longlong *)local_98 == 0x6573755f7473616c))
    goto LAB_00436520;
    if (local_50 != 0) {
      local_80 = (code *)0xc;
      local_58 = (undefined8 *)&DAT_0019463c;
      goto LAB_00436b06;
    }
    uVar5 = puVar9[5];
    if (uVar5 < (ulonglong)puVar9[4]) {
      lVar4 = *plVar2;
      do {
        uVar5 = uVar5 + 1;
        uVar8 = (ulonglong)*(byte *)(lVar4 + -1 + uVar5);
        if (0x3a < uVar8) {
LAB_00436625:
          local_a0 = (undefined8 *)&DAT_00000006;
          local_70 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_error(puVar9,&local_a0);
          goto LAB_004365ab;
        }
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) {
          if (uVar8 != 0x3a) goto LAB_00436625;
          puVar9[5] = uVar5;
          auVar11 = deserialize_u64::
                    <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                              (puVar9);
          goto LAB_0043660e;
        }
        puVar9[5] = uVar5;
      } while (uVar5 != puVar9[4]);
    }
    local_a0 = (undefined8 *)0x3;
    local_70 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_error(puVar9,&local_a0);
LAB_004365ab:
    auVar11._8_8_ = local_70;
    auVar11._0_8_ = 1;
LAB_0043660e:
    local_70 = auVar11._8_8_;
    if ((auVar11._0_8_ & 1) != 0) {
      bVar10 = true;
      unaff_R15 = local_70;
      goto LAB_00436794;
    }
    local_50 = 1;
  } while( true );
  if (unaff_R12 != (undefined8 *)0xfffffffffffffffe) {
    local_80 = (code *)0xa;
    local_58 = (undefined8 *)&DAT_00194632;
LAB_00436b06:
    local_88 = local_58;
    local_a0 = &local_88;
    local_98 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    unaff_R15 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                  (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                   ,&local_a0);
LAB_00436935:
    bVar10 = true;
LAB_00436794:
    puVar9 = (undefined8 *)0xfffffffffffffffe;
    if ((bool)((undefined1 *)((longlong)unaff_R12 + -1) < (undefined1 *)0xfffffffffffffffd & bVar10)
       ) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_004367c6;
  }
  uVar5 = puVar9[5];
  if (uVar5 < (ulonglong)puVar9[4]) {
    lVar4 = *plVar2;
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar8 = (ulonglong)*(byte *)(lVar4 + -1 + uVar5);
      if (0x3a < uVar8) goto LAB_00436b46;
      if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
      puVar9[5] = uVar5;
      if (uVar5 == puVar9[4]) goto LAB_00436a50;
    }
    if (uVar8 == 0x3a) {
      puVar9[5] = uVar5;
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Deserialize>
      ::deserialize::
      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                (&local_88,puVar9);
      unaff_R12 = local_88;
      unaff_R15 = local_80;
      if (local_88 == (undefined8 *)0xfffffffffffffffe) goto LAB_00436a70;
      local_48 = local_78;
      goto LAB_004363ab;
    }
LAB_00436b46:
    local_a0 = (undefined8 *)&DAT_00000006;
    unaff_R15 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(puVar9,&local_a0);
  }
  else {
LAB_00436a50:
    local_a0 = (undefined8 *)0x3;
    unaff_R15 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(puVar9,&local_a0);
  }
  unaff_R12 = (undefined8 *)0xfffffffffffffffe;
LAB_00436a70:
  puVar9 = (undefined8 *)0xfffffffffffffffe;
LAB_004367c6:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  pcVar7 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
  if (puVar9 == (undefined8 *)0xfffffffffffffffe) {
LAB_004368de:
    if (pcVar7 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar7);
    }
LAB_004369a9:
    pcVar7 = unaff_R15;
  }
  else {
    if (pcVar7 == (code *)0x0) {
LAB_004367e5:
      param_1[2] = unaff_R12;
      param_1[3] = local_70;
      *(char *)(param_1 + 4) = local_a9;
      *param_1 = puVar9;
      param_1[1] = unaff_R15;
      return param_1;
    }
    if ((undefined1 *)((longlong)puVar9 + -1) < (undefined1 *)0xfffffffffffffffe) {
LAB_00436995:
      (*(code *)PTR___rust_dealloc_00798fc8)();
      unaff_R15 = pcVar7;
      goto LAB_004369a9;
    }
  }
LAB_004369ac:
  uVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar7,param_2);
LAB_004369b7:
  param_1[1] = uVar6;
  *param_1 = 0xfffffffffffffffe;
  return param_1;
}


