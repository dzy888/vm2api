// 00438b30 <<craggemini_core[66f3c71560d70857]::server::LifecycleRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::server::LifecycleRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::server::LifecycleRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,undefined8 *******param_2)

{
  undefined8 *******pppppppuVar1;
  byte bVar2;
  undefined8 ******ppppppuVar3;
  bool bVar4;
  undefined8 ******ppppppuVar5;
  undefined8 uVar6;
  char (*pacVar7) [4];
  char (*pacVar8) [4];
  undefined8 *******unaff_RBX;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  undefined8 local_88;
  char (*local_80) [4];
  undefined8 *******local_78;
  undefined1 local_69;
  undefined8 *local_68;
  char (*local_60) [4];
  undefined8 *******local_58;
  char (*local_50) [4];
  undefined8 *******local_48;
  undefined8 *******local_40;
  undefined1 local_38;
  
  ppppppuVar5 = param_2[5];
  if (ppppppuVar5 < param_2[4]) {
    do {
      ppppppuVar5 = (undefined8 ******)((longlong)ppppppuVar5 + 1);
      bVar2 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppppuVar5);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pppppppuVar10 = param_2 + 7;
          *(char *)pppppppuVar10 = *(char *)pppppppuVar10 + -1;
          if (*(char *)pppppppuVar10 != '\0') {
            param_2[5] = ppppppuVar5;
            local_50 = (char (*) [4])CONCAT71(local_50._1_7_,1);
            local_58 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_88,&local_58);
            if ((char)local_88 == '\x01') {
              pacVar7 = local_80;
LAB_00438e5f:
              pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
            }
            else {
              if (local_88._1_1_ != '\x01') {
                pacVar7 = (char (*) [4])
                          <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                          ::invalid_length(0,&PTR_DAT_00789f30,&DAT_00789c78);
                goto LAB_00438e5f;
              }
              deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                        (&local_88,local_58);
              pacVar7 = local_80;
              if (local_88 == (undefined8 *******)0xffffffffffffffff) goto LAB_00438e5f;
              unaff_RBX = local_78;
              pppppppuVar10 = local_88;
            }
            *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
            pacVar8 = (char (*) [4])
                      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::end_seq(param_2);
            goto LAB_00438e72;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pacVar7 = (char (*) [4])
                      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_invalid_type(param_2,&local_69,&DAT_0078a700);
            goto LAB_00438ecb;
          }
          pppppppuVar10 = param_2 + 7;
          *(char *)pppppppuVar10 = *(char *)pppppppuVar10 + -1;
          if (*(char *)pppppppuVar10 != '\0') {
            param_2[5] = ppppppuVar5;
            local_38 = 1;
            pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
            local_68 = param_1;
            local_40 = param_2;
            goto LAB_00438bdb;
          }
        }
        local_88 = (undefined8 *******)0x18;
        goto LAB_00438b92;
      }
      param_2[5] = ppppppuVar5;
    } while (ppppppuVar5 != param_2[4]);
  }
  local_88 = (undefined8 *******)0x5;
LAB_00438b92:
  uVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_88);
  goto LAB_00438ed6;
LAB_00438bdb:
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_88,&local_40);
  pppppppuVar9 = local_40;
  pacVar7 = local_80;
  if ((char)local_88 == '\x01') goto joined_r0x00438f00;
  if (local_88._1_1_ != '\x01') {
    if (pppppppuVar10 == (undefined8 *******)0xffffffffffffffff) {
      local_58 = (undefined8 *******)&DAT_00194e92;
      local_50 = (char (*) [4])&DAT_00000006;
      local_88 = &local_58;
      local_80 = (char (*) [4])<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pacVar7 = (char (*) [4])
                <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                          (anon_d4d3cd51d1d91a17bb767b00236b3a9b_152_llvm_17589326713533067298,
                           &local_88);
      pppppppuVar9 = unaff_RBX;
      goto LAB_00438d64;
    }
    pacVar7 = local_60;
    goto LAB_00438d6e;
  }
  pppppppuVar1 = local_40 + 3;
  local_40[5] = (undefined8 ******)((longlong)local_40[5] + 1);
  local_40[2] = (undefined8 ******)0x0;
  (*(code *)PTR_parse_str_007998f8)();
  unaff_RBX = pppppppuVar9;
  if ((int)local_88 == 2) {
    pacVar7 = local_80;
    if (local_80 != (char (*) [4])0x0) goto joined_r0x00438f00;
  }
  else if ((local_78 != (undefined8 *******)&DAT_00000006) ||
          (*(char (*) [2])local_80[1] != s_on_0019fc0e ||
           *local_80 != anon_1b4a85c95499e1b671cf4fa96a1b6d0f_16_llvm_10049508496007902178)) {
    pacVar7 = (char (*) [4])
              <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::unknown_field(local_80,local_78,
                              &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_17_llvm_10049508496007902178,1)
    ;
    goto joined_r0x00438f00;
  }
  if (pppppppuVar10 != (undefined8 *******)0xffffffffffffffff) {
    local_58 = (undefined8 *******)&DAT_00194e92;
    local_50 = (char (*) [4])&DAT_00000006;
    local_88 = &local_58;
    local_80 = (char (*) [4])<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    pacVar7 = (char (*) [4])
              <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                        (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298,
                         &local_88);
    goto joined_r0x00438dce;
  }
  ppppppuVar5 = pppppppuVar9[5];
  if (pppppppuVar9[4] <= ppppppuVar5) {
LAB_00438d4a:
    local_88 = (undefined8 *******)0x3;
    pacVar7 = (char (*) [4])
              <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(pppppppuVar9,&local_88);
LAB_00438d64:
    goto LAB_00438d67;
  }
  ppppppuVar3 = *pppppppuVar1;
  while( true ) {
    ppppppuVar5 = (undefined8 ******)((longlong)ppppppuVar5 + 1);
    uVar11 = (ulonglong)*(byte *)((longlong)ppppppuVar3 + -1 + (longlong)ppppppuVar5);
    if (0x3a < uVar11) goto LAB_00438f5c;
    if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
    pppppppuVar9[5] = ppppppuVar5;
    if (ppppppuVar5 == pppppppuVar9[4]) goto LAB_00438d4a;
  }
  if (uVar11 != 0x3a) {
LAB_00438f5c:
    local_88 = (undefined8 *******)&DAT_00000006;
    pacVar7 = (char (*) [4])
              <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(pppppppuVar9,&local_88);
    goto LAB_00438d64;
  }
  pppppppuVar9[5] = ppppppuVar5;
  deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
            (&local_58,pppppppuVar9);
  local_60 = local_50;
  if (local_58 == (undefined8 *******)0xffffffffffffffff) {
    pacVar7 = local_50;
    goto LAB_00438d67;
  }
  unaff_RBX = local_48;
  pppppppuVar10 = local_58;
  goto LAB_00438bdb;
joined_r0x00438f00:
  pppppppuVar9 = unaff_RBX;
  if (pppppppuVar10 == (undefined8 *******)0xffffffffffffffff) {
LAB_00438d67:
    pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
    unaff_RBX = pppppppuVar9;
  }
  else {
joined_r0x00438dce:
    bVar4 = pppppppuVar10 != (undefined8 *******)0x0;
    pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
    unaff_RBX = pppppppuVar9;
    if (bVar4) {
      pppppppuVar10 = (undefined8 *******)0xffffffffffffffff;
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_00438d6e:
  param_1 = local_68;
  *(char *)(param_2 + 7) = *(char *)(param_2 + 7) + '\x01';
  pacVar8 = (char (*) [4])
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_map(param_2);
LAB_00438e72:
  if (pppppppuVar10 == (undefined8 *******)0xffffffffffffffff) {
    if (pacVar8 != (char (*) [4])0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pacVar8);
    }
  }
  else {
    if (pacVar8 == (char (*) [4])0x0) {
      *param_1 = pppppppuVar10;
      param_1[1] = pacVar7;
      param_1[2] = unaff_RBX;
      return param_1;
    }
    pacVar7 = pacVar8;
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_00438ecb:
  uVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pacVar7,param_2);
LAB_00438ed6:
  param_1[1] = uVar6;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


