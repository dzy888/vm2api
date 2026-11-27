// 00432e10 <<craggemini_core[66f3c71560d70857]::resume::StickyConvBinding_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::resume::StickyConvBinding
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::resume::StickyConvBinding_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined8 *******param_2)

{
  byte bVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 *******unaff_R12;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  code *unaff_R13;
  undefined8 *******pppppppuVar11;
  undefined1 auVar12 [16];
  undefined8 local_a8;
  code *local_a0;
  undefined8 *******local_98;
  undefined8 *local_90;
  undefined1 local_81;
  code *local_80;
  undefined8 *******local_78;
  code *local_70;
  undefined8 *******local_68;
  code *local_60;
  ulonglong local_58;
  undefined8 *******local_50;
  undefined8 *******local_48;
  undefined8 *******local_40;
  undefined1 local_38;
  
  ppppppuVar3 = param_2[5];
  if (ppppppuVar3 < param_2[4]) {
    do {
      ppppppuVar3 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppuVar3);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          pppppppuVar11 = param_2 + 7;
          *(char *)pppppppuVar11 = *(char *)pppppppuVar11 + -1;
          if (*(char *)pppppppuVar11 != '\0') {
            param_2[5] = ppppppuVar3;
            local_70 = (code *)CONCAT71(local_70._1_7_,1);
            local_78 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_a8,&local_78);
            if ((char)local_a8 == '\x01') {
              pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
              pcVar5 = local_a0;
            }
            else if (local_a8._1_1_ == '\x01') {
              deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                        (&local_a8,local_78);
              pcVar5 = local_a0;
              pppppppuVar11 = local_a8;
              if (local_a8 == (undefined8 *******)0xffffffffffffffff) {
                pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
              }
              else {
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_a8,&local_78);
                unaff_R12 = local_98;
                if ((char)local_a8 == '\x01') {
                  unaff_R13 = local_a0;
                }
                else if (local_a8._1_1_ == '\x01') {
                  auVar12 = deserialize_u64::
                            <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                      (local_78);
                  unaff_R13 = auVar12._8_8_;
                  if ((auVar12._0_8_ & 1) == 0) goto LAB_00433373;
                }
                else {
                  unaff_R13 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                      ::invalid_length(1,&PTR_DAT_00789d50,&DAT_00789c78);
                }
                if (pppppppuVar11 != (undefined8 *******)0x0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(unaff_R13,1);
                }
                pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
                pcVar5 = unaff_R13;
              }
            }
            else {
              pcVar5 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                               ::invalid_length(0,&PTR_DAT_00789d50,&DAT_00789c78);
              pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
            }
LAB_00433373:
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            pcVar7 = pcVar6;
            if (pppppppuVar11 == (undefined8 *******)0xffffffffffffffff) goto LAB_0043345b;
            if (pcVar6 == (code *)0x0) goto LAB_00433437;
            if (pppppppuVar11 != (undefined8 *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
            goto LAB_0043346b;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_81,&DAT_0078a620);
            goto LAB_0043346b;
          }
          pppppppuVar11 = param_2 + 7;
          *(char *)pppppppuVar11 = *(char *)pppppppuVar11 + -1;
          if (*(char *)pppppppuVar11 != '\0') {
            param_2[5] = ppppppuVar3;
            local_38 = 1;
            local_58 = 0;
            local_50 = (undefined8 *******)&DAT_00194632;
            local_90 = param_1;
            local_40 = param_2;
            pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
            goto LAB_00432ef0;
          }
        }
        local_a8 = (undefined8 *******)0x18;
        goto LAB_00432e76;
      }
      param_2[5] = ppppppuVar3;
    } while (ppppppuVar3 != param_2[4]);
  }
  local_a8 = (undefined8 *******)0x5;
LAB_00432e76:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_a8);
  goto LAB_00433476;
LAB_00432ef0:
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_a8,&local_40);
  pppppppuVar9 = local_40;
  param_1 = local_90;
  if ((char)local_a8 == '\x01') {
    pcVar5 = local_a0;
    pppppppuVar9 = unaff_R12;
    goto LAB_004331e0;
  }
  if (local_a8._1_1_ != '\x01') {
    if (pppppppuVar10 != (undefined8 *******)0xffffffffffffffff) {
      if ((local_58 & 1) != 0) {
        pcVar5 = local_80;
        unaff_R12 = local_48;
        pppppppuVar11 = pppppppuVar10;
        goto LAB_0043341b;
      }
      local_78 = (undefined8 *******)&DAT_0019463c;
      local_70 = (code *)0xc;
      local_a8 = &local_78;
      local_a0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pcVar5 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                  ,&local_a8);
      pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
      unaff_R12 = pppppppuVar10;
      pppppppuVar9 = pppppppuVar10;
      if (pppppppuVar10 != (undefined8 *******)0x0) goto LAB_00433209;
      goto LAB_0043341b;
    }
    local_78 = (undefined8 *******)&DAT_00194632;
    local_70 = (code *)0xa;
    local_a8 = &local_78;
    local_a0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    pcVar5 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                     ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                               (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                                &local_a8);
    param_1 = local_90;
LAB_004332bd:
    unaff_R12 = pppppppuVar10;
    pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
    goto LAB_0043341b;
  }
  pppppppuVar11 = local_40 + 3;
  local_40[5] = (undefined8 ******)((longlong)local_40[5] + 1);
  local_40[2] = (undefined8 ******)0x0;
  (*(code *)PTR_parse_str_007998f8)();
  param_1 = local_90;
  pcVar5 = local_a0;
  if (local_a8 == (undefined8 *******)0x2) goto LAB_004331e0;
  unaff_R12 = pppppppuVar9;
  if (local_98 == (undefined8 *******)0xc) {
    if (*(int *)(local_a0 + 8) == 0x736d5f64 && *(longlong *)local_a0 == 0x6573755f7473616c) {
      if (local_58 != 0) {
        local_70 = (code *)0xc;
        local_50 = (undefined8 *******)&DAT_0019463c;
LAB_004334e2:
        local_78 = local_50;
        local_a8 = &local_78;
        local_a0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        pcVar5 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                   (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                    ,&local_a8);
        param_1 = local_90;
        goto LAB_004331ea;
      }
      ppppppuVar3 = pppppppuVar9[5];
      if (ppppppuVar3 < pppppppuVar9[4]) {
        ppppppuVar2 = *pppppppuVar11;
        do {
          ppppppuVar3 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
          uVar8 = (ulonglong)*(byte *)((longlong)ppppppuVar2 + -1 + (longlong)ppppppuVar3);
          if (0x3a < uVar8) {
LAB_00433084:
            local_a8 = (undefined8 *******)&DAT_00000006;
            local_60 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                               ::peek_error(pppppppuVar9,&local_a8);
            goto LAB_00433044;
          }
          if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) {
            if (uVar8 != 0x3a) goto LAB_00433084;
            pppppppuVar9[5] = ppppppuVar3;
            auVar12 = deserialize_u64::
                      <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                                (pppppppuVar9);
            goto LAB_0043306d;
          }
          pppppppuVar9[5] = ppppppuVar3;
        } while (ppppppuVar3 != pppppppuVar9[4]);
      }
      local_a8 = (undefined8 *******)0x3;
      local_60 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pppppppuVar9,&local_a8);
      param_1 = local_90;
LAB_00433044:
      auVar12._8_8_ = local_60;
      auVar12._0_8_ = 1;
LAB_0043306d:
      local_60 = auVar12._8_8_;
      if ((auVar12._0_8_ & 1) != 0) {
        pcVar5 = local_60;
        goto LAB_004331ea;
      }
      local_58 = 1;
      goto LAB_00432ef0;
    }
  }
  else if ((local_98 == (undefined8 *******)0xa) &&
          (*(short *)(local_a0 + 8) == 0x6469 && *(longlong *)local_a0 == 0x5f746e756f636361)) {
    if (pppppppuVar10 != (undefined8 *******)0xffffffffffffffff) {
      local_70 = (code *)0xa;
      goto LAB_004334e2;
    }
    ppppppuVar3 = pppppppuVar9[5];
    pppppppuVar10 = pppppppuVar9;
    if (ppppppuVar3 < pppppppuVar9[4]) {
      ppppppuVar2 = *pppppppuVar11;
      while( true ) {
        ppppppuVar3 = (undefined8 ******)((longlong)ppppppuVar3 + 1);
        uVar8 = (ulonglong)*(byte *)((longlong)ppppppuVar2 + -1 + (longlong)ppppppuVar3);
        if (0x3a < uVar8) goto LAB_0043352d;
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
        pppppppuVar9[5] = ppppppuVar3;
        if (ppppppuVar3 == pppppppuVar9[4]) goto LAB_004333de;
      }
      if (uVar8 != 0x3a) {
LAB_0043352d:
        local_a8 = (undefined8 *******)&DAT_00000006;
        pcVar5 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pppppppuVar9,&local_a8);
        goto LAB_004332bd;
      }
      pppppppuVar9[5] = ppppppuVar3;
      deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                (&local_78,pppppppuVar9);
      local_80 = local_70;
      if (local_78 == (undefined8 *******)0xffffffffffffffff) {
        pcVar5 = local_70;
        pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
        goto LAB_0043341b;
      }
      local_48 = local_68;
      pppppppuVar10 = local_78;
      goto LAB_00432ef0;
    }
LAB_004333de:
    local_a8 = (undefined8 *******)0x3;
    pcVar5 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_error(pppppppuVar9,&local_a8);
    param_1 = local_90;
    goto LAB_004332bd;
  }
  pcVar5 = (code *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                   ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                             (pppppppuVar9,pppppppuVar11);
  if (pcVar5 != (code *)0x0) goto LAB_004331e0;
  goto LAB_00432ef0;
LAB_004331e0:
  param_1 = local_90;
LAB_004331ea:
  unaff_R12 = pppppppuVar9;
  pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
  if ((undefined1 *)((longlong)pppppppuVar10 + -1) < (undefined1 *)0xfffffffffffffffe) {
LAB_00433209:
    (*(code *)PTR___rust_dealloc_00798fc8)();
    unaff_R12 = pppppppuVar9;
    pppppppuVar11 = (undefined8 *******)0xffffffffffffffff;
  }
LAB_0043341b:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
  pcVar7 = pcVar6;
  if (pppppppuVar11 == (undefined8 *******)0xffffffffffffffff) {
LAB_0043345b:
    pcVar6 = pcVar5;
    if (pcVar7 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar7);
    }
  }
  else {
    unaff_R13 = local_60;
    if (pcVar6 == (code *)0x0) {
LAB_00433437:
      param_1[2] = unaff_R12;
      param_1[3] = unaff_R13;
      *param_1 = pppppppuVar11;
      param_1[1] = pcVar5;
      return param_1;
    }
    if (pppppppuVar11 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
      param_1 = local_90;
    }
  }
LAB_0043346b:
  uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar6,param_2);
LAB_00433476:
  param_1[1] = uVar4;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


