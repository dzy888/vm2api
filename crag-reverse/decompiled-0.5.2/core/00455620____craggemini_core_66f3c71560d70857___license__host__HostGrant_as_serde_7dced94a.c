// 00455620 <<craggemini_core[66f3c71560d70857]::license::host::HostGrant_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::license::host::HostGrant
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::license::host::HostGrant_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined4 unaff_EBP;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 auVar14 [16];
  undefined8 local_88;
  code *local_80;
  longlong local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 *local_60;
  undefined1 local_51;
  code *local_50;
  undefined4 local_44;
  undefined *local_40;
  undefined1 local_38;
  
  uVar8 = *(ulonglong *)(param_2 + 0x28);
  if (uVar8 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar8 = uVar8 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar8);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          pcVar1 = param_2 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar8;
            local_68 = (code *)CONCAT71(local_68._1_7_,1);
            local_70 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_88,&local_70);
            if ((char)local_88 == '\x01') goto LAB_0045578c;
            if (local_88._1_1_ == '\x01') {
              <craggemini_core[66f3c71560d70857]::license::host::SlotLimit_as_serde_core[48776c27239fa21f]::de::Deserialize>
              ::deserialize::
              <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        (&local_88,local_70);
              if ((int)local_88 == 1) {
LAB_0045578c:
                pcVar11 = local_80;
              }
              else {
                unaff_EBP = local_88._4_4_;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_88,&local_70);
                if ((char)local_88 == '\x01') goto LAB_0045578c;
                if (local_88._1_1_ == '\x01') {
                  auVar14 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                            ::deserialize::
                            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                      (local_70);
                  pcVar11 = auVar14._8_8_;
                  if ((auVar14._0_8_ & 1) == 0) {
                    bVar5 = false;
                    goto LAB_00455796;
                  }
                }
                else {
                  pcVar11 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                    ::invalid_length(1,&
                                                  PTR_s_struct_HostGrant_with_2_elements_0078a080,
                                                  &DAT_00789c78);
                }
              }
              bVar5 = true;
            }
            else {
              pcVar11 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                ::invalid_length(0,&PTR_s_struct_HostGrant_with_2_elements_0078a080,
                                                 &DAT_00789c78);
              bVar5 = true;
            }
LAB_00455796:
            param_2[0x38] = param_2[0x38] + '\x01';
            pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              ::end_seq(param_2);
            goto joined_r0x004557a4;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                              ::peek_invalid_type(param_2,&local_51,&DAT_0078a9c0);
            goto LAB_00455b8e;
          }
          pcVar1 = param_2 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar8;
            local_38 = 1;
            local_60 = param_1;
            local_40 = param_2;
            <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
            ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_88,&local_40);
            if ((char)local_88 != '\0') goto LAB_004556d8;
            bVar5 = false;
            bVar6 = false;
            goto LAB_004557f7;
          }
        }
        local_88 = (undefined8 *)0x18;
        goto LAB_00455682;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar8;
    } while (uVar8 != *(ulonglong *)(param_2 + 0x20));
  }
  local_88 = (undefined8 *)0x5;
LAB_00455682:
  uVar9 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_88);
  goto LAB_00455719;
LAB_004557f7:
  do {
    puVar7 = local_40;
    if (local_88._1_1_ != '\x01') {
      if (bVar5) {
        if (bVar6) {
          bVar5 = false;
LAB_00455a2e:
          pcVar11 = local_50;
          goto LAB_004556e9;
        }
        local_70 = &DAT_0019513a;
        local_68 = (code *)0xa;
      }
      else {
        local_70 = &DAT_0019531d;
        local_68 = (code *)&DAT_00000005;
      }
      puVar13 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298;
LAB_00455ae6:
      local_88 = &local_70;
      local_80 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar11 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>(puVar13,&local_88);
LAB_00455aee:
      goto LAB_004556e4;
    }
    plVar2 = (longlong *)(local_40 + 0x18);
    *(longlong *)(local_40 + 0x28) = *(longlong *)(local_40 + 0x28) + 1;
    *(undefined8 *)(local_40 + 0x10) = 0;
    (*(code *)PTR_parse_str_007998f8)();
    pcVar11 = local_80;
    if ((int)local_88 == 2) goto LAB_004556e4;
    if (local_78 != 5) {
      if ((local_78 == 10) &&
         (!(*(short *)(local_80 + 8) !=
            anon_30b5cef53457a6ea696e8d7e9f6273d6_40_llvm_8436237269785592069._8_2_ ||
           *(longlong *)local_80 !=
           anon_30b5cef53457a6ea696e8d7e9f6273d6_40_llvm_8436237269785592069._0_8_))) {
        if (!bVar6) {
          uVar8 = *(ulonglong *)(puVar7 + 0x28);
          if (uVar8 < *(ulonglong *)(puVar7 + 0x20)) {
            lVar4 = *plVar2;
            while( true ) {
              uVar8 = uVar8 + 1;
              uVar12 = (ulonglong)*(byte *)(lVar4 + -1 + uVar8);
              if (0x3a < uVar12) goto LAB_004559d8;
              if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
              *(ulonglong *)(puVar7 + 0x28) = uVar8;
              if (uVar8 == *(ulonglong *)(puVar7 + 0x20)) goto LAB_0045593b;
            }
            if (uVar12 != 0x3a) {
LAB_004559d8:
              local_88 = (undefined8 *)&DAT_00000006;
              goto LAB_00455943;
            }
            *(ulonglong *)(puVar7 + 0x28) = uVar8;
            auVar14 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                      ::deserialize::
                      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                (puVar7);
            local_50 = auVar14._8_8_;
            bVar6 = true;
            if ((auVar14._0_8_ & 1) == 0) goto LAB_004557e0;
          }
          else {
LAB_0045593b:
            local_88 = (undefined8 *)0x3;
LAB_00455943:
            local_50 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                               ::peek_error(puVar7,&local_88);
          }
          bVar5 = true;
          goto LAB_00455a2e;
        }
        local_70 = &DAT_0019513a;
        local_68 = (code *)0xa;
LAB_00455b4c:
        puVar13 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298;
        goto LAB_00455ae6;
      }
LAB_00455afa:
      pcVar11 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::unknown_field(local_80,local_78,
                                        &
                                        anon_30b5cef53457a6ea696e8d7e9f6273d6_46_llvm_8436237269785592069
                                        ,2);
      goto LAB_004556e4;
    }
    if (local_80[4] != anon_30b5cef53457a6ea696e8d7e9f6273d6_45_llvm_8436237269785592069._4_1_ ||
        *(int *)local_80 != (int)anon_30b5cef53457a6ea696e8d7e9f6273d6_45_llvm_8436237269785592069)
    goto LAB_00455afa;
    if (bVar5) {
      local_70 = &DAT_0019531d;
      local_68 = (code *)&DAT_00000005;
      goto LAB_00455b4c;
    }
    uVar8 = *(ulonglong *)(puVar7 + 0x28);
    if (*(ulonglong *)(puVar7 + 0x20) <= uVar8) {
LAB_00455a69:
      local_88 = (undefined8 *)0x3;
LAB_00455a71:
      pcVar11 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(puVar7,&local_88);
      goto LAB_00455aee;
    }
    lVar4 = *plVar2;
    while( true ) {
      uVar8 = uVar8 + 1;
      uVar12 = (ulonglong)*(byte *)(lVar4 + -1 + uVar8);
      if (0x3a < uVar12) goto LAB_00455b6d;
      if ((0x100002600U >> (uVar12 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(puVar7 + 0x28) = uVar8;
      if (uVar8 == *(ulonglong *)(puVar7 + 0x20)) goto LAB_00455a69;
    }
    if (uVar12 != 0x3a) {
LAB_00455b6d:
      local_88 = (undefined8 *)&DAT_00000006;
      goto LAB_00455a71;
    }
    *(ulonglong *)(puVar7 + 0x28) = uVar8;
    <craggemini_core[66f3c71560d70857]::license::host::SlotLimit_as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_70,puVar7);
    if ((int)local_70 == 1) {
      pcVar11 = local_68;
      goto LAB_004556e4;
    }
    local_44 = local_70._4_4_;
    bVar5 = true;
LAB_004557e0:
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_88,&local_40);
  } while ((char)local_88 == '\0');
LAB_004556d8:
  pcVar11 = local_80;
LAB_004556e4:
  bVar5 = true;
LAB_004556e9:
  param_1 = local_60;
  param_2[0x38] = param_2[0x38] + '\x01';
  pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::end_map(param_2);
  unaff_EBP = local_44;
joined_r0x004557a4:
  if (bVar5) {
    if (pcVar10 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar10);
    }
  }
  else {
    if (pcVar10 == (code *)0x0) {
      param_1[1] = pcVar11;
      *(undefined4 *)(param_1 + 2) = unaff_EBP;
      uVar9 = 0;
      goto LAB_004557bf;
    }
LAB_00455b8e:
    pcVar11 = pcVar10;
  }
  uVar9 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar11,param_2);
LAB_00455719:
  param_1[1] = uVar9;
  uVar9 = 1;
LAB_004557bf:
  *param_1 = uVar9;
  return param_1;
}


