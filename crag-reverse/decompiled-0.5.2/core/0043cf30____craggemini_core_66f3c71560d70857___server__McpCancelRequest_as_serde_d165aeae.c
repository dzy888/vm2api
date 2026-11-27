// 0043cf30 <<craggemini_core[66f3c71560d70857]::server::McpCancelRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::server::McpCancelRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::server::McpCancelRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined8 *******param_2)

{
  undefined8 *******pppppppuVar1;
  byte bVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 *******unaff_RBX;
  undefined8 *******pppppppuVar8;
  ulonglong uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 local_98;
  code *local_90;
  undefined8 *******local_88;
  undefined8 *******local_80;
  undefined8 *local_78;
  undefined1 local_69;
  code *local_68;
  undefined8 *******local_60;
  code *local_58;
  undefined8 *******local_50;
  undefined8 *******local_48;
  undefined8 *******local_40;
  undefined1 local_38;
  
  ppppppuVar4 = param_2[5];
  if (ppppppuVar4 < param_2[4]) {
    do {
      ppppppuVar4 = (undefined8 ******)((longlong)ppppppuVar4 + 1);
      bVar2 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppuVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pppppppuVar10 = param_2 + 7;
          *(char *)pppppppuVar10 = *(char *)pppppppuVar10 + -1;
          if (*(char *)pppppppuVar10 != '\0') {
            param_2[5] = ppppppuVar4;
            local_58 = (code *)CONCAT71(local_58._1_7_,1);
            local_60 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_98,&local_60);
            if ((char)local_98 == '\x01') {
              pcVar6 = local_90;
LAB_0043d256:
              pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
            }
            else {
              if (local_98._1_1_ != '\x01') {
                pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                 ::invalid_length(0,&PTR_DAT_00789f90,&DAT_00789c78);
                goto LAB_0043d256;
              }
              deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                        (&local_98,local_60);
              pcVar6 = local_90;
              if (local_98 == (undefined8 *******)0xffffffffffffffff) goto LAB_0043d256;
              unaff_RBX = local_88;
              pppppppuVar10 = local_98;
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            pcVar7 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq(param_2);
            goto LAB_0043d269;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_69,&DAT_0078a7c0);
            goto LAB_0043d2c2;
          }
          pppppppuVar10 = param_2 + 7;
          *(char *)pppppppuVar10 = *(char *)pppppppuVar10 + -1;
          if (*(char *)pppppppuVar10 != '\0') {
            param_2[5] = ppppppuVar4;
            unaff_RBX = (undefined8 *******)PTR_parse_str_007998f8;
            local_38 = 1;
            local_80 = (undefined8 *******)0xffffffffffffffff;
            local_78 = param_1;
            local_40 = param_2;
            goto LAB_0043cff0;
          }
        }
        local_98 = (undefined8 *******)0x18;
        goto LAB_0043cf92;
      }
      param_2[5] = ppppppuVar4;
    } while (ppppppuVar4 != param_2[4]);
  }
  local_98 = (undefined8 *******)0x5;
LAB_0043cf92:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_98);
  goto LAB_0043d2cd;
  while (pcVar6 = (code *)<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
                          ::next_value::<serde_core[48776c27239fa21f]::de::ignored_any::IgnoredAny>
                                    (pppppppuVar10,pppppppuVar1), pcVar6 == (code *)0x0) {
LAB_0043cff0:
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_98,&local_40);
    pppppppuVar10 = local_40;
    if ((char)local_98 == '\x01') {
      pcVar6 = local_90;
      break;
    }
    if (local_98._1_1_ != '\x01') {
      if (local_80 == (undefined8 *******)0xffffffffffffffff) {
        local_60 = (undefined8 *******)&DAT_00194568;
        local_58 = (code *)&DAT_00000007;
        local_98 = &local_60;
        local_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        unaff_RBX = (undefined8 *******)0xffffffffffffffff;
        pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                   (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298
                                    ,&local_98);
        param_1 = local_78;
        goto LAB_0043d226;
      }
      unaff_RBX = local_48;
      param_1 = local_78;
      pppppppuVar10 = local_80;
      pcVar6 = local_68;
      goto LAB_0043d230;
    }
    pppppppuVar1 = local_40 + 3;
    local_40[5] = (undefined8 ******)((longlong)local_40[5] + 1);
    local_40[2] = (undefined8 ******)0x0;
    (*(code *)unaff_RBX)();
    param_1 = local_78;
    pppppppuVar8 = local_80;
    pcVar6 = local_90;
    if ((int)local_98 == 2) break;
    if ((local_88 == (undefined8 *******)&DAT_00000007) &&
       (*(int *)(local_90 + 3) == 0x64695f6c && *(int *)local_90 == 0x6c6c6163)) {
      if (local_80 != (undefined8 *******)0xffffffffffffffff) {
        local_60 = (undefined8 *******)&DAT_00194568;
        local_58 = (code *)&DAT_00000007;
        local_98 = &local_60;
        local_90 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                   (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                    ,&local_98);
        goto LAB_0043d19f;
      }
      ppppppuVar4 = pppppppuVar10[5];
      if (pppppppuVar10[4] <= ppppppuVar4) {
LAB_0043d2dc:
        local_98 = (undefined8 *******)0x3;
        unaff_RBX = (undefined8 *******)0xffffffffffffffff;
        pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pppppppuVar10,&local_98);
        param_1 = local_78;
        goto LAB_0043d226;
      }
      ppppppuVar3 = *pppppppuVar1;
      while( true ) {
        ppppppuVar4 = (undefined8 ******)((longlong)ppppppuVar4 + 1);
        uVar9 = (ulonglong)*(byte *)((longlong)ppppppuVar3 + -1 + (longlong)ppppppuVar4);
        if (0x3a < uVar9) goto LAB_0043d373;
        if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
        pppppppuVar10[5] = ppppppuVar4;
        if (ppppppuVar4 == pppppppuVar10[4]) goto LAB_0043d2dc;
      }
      if (uVar9 != 0x3a) {
LAB_0043d373:
        local_98 = (undefined8 *******)&DAT_00000006;
        unaff_RBX = (undefined8 *******)0xffffffffffffffff;
        pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(pppppppuVar10,&local_98);
        goto LAB_0043d226;
      }
      pppppppuVar10[5] = ppppppuVar4;
      deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                (&local_60,pppppppuVar10);
      local_68 = local_58;
      if (local_60 == (undefined8 *******)0xffffffffffffffff) {
        pcVar6 = local_58;
        goto LAB_0043d229;
      }
      local_80 = local_60;
      local_48 = local_50;
      goto LAB_0043cff0;
    }
  }
  pppppppuVar8 = unaff_RBX;
  param_1 = local_78;
  if (local_80 == (undefined8 *******)0xffffffffffffffff) {
LAB_0043d226:
LAB_0043d229:
    pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
  }
  else {
LAB_0043d19f:
    param_1 = local_78;
    unaff_RBX = pppppppuVar8;
    pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
    if (local_80 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_0043d230:
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  pcVar7 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map(param_2);
LAB_0043d269:
  if (pppppppuVar10 == (undefined8 *******)0xffffffffffffffff) {
    if (pcVar7 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar7);
    }
  }
  else {
    if (pcVar7 == (code *)0x0) {
      *param_1 = pppppppuVar10;
      param_1[1] = pcVar6;
      param_1[2] = unaff_RBX;
      return param_1;
    }
    pcVar6 = pcVar7;
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_0043d2c2:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar6,param_2);
LAB_0043d2cd:
  param_1[1] = uVar5;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


