// 0041e870 <<craggemini_core[66f3c71560d70857]::server::AccountUpsertRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_map::<<craggemini_core[66f3c71560d70857]::server::AccountUpsertRequest
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_map::
<<craggemini_core[66f3c71560d70857]::server::AccountUpsertRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  code *unaff_R15;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  byte local_59a;
  undefined1 local_599;
  longlong local_598;
  longlong local_590;
  longlong local_588;
  undefined8 *local_580;
  longlong local_578;
  code *local_570;
  code *local_568;
  longlong local_560;
  undefined1 local_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  code *pcStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530 [3];
  undefined8 local_518;
  undefined8 uStack_510;
  undefined4 local_508;
  int iStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  code *pcStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  code *local_370;
  undefined8 local_368;
  code *local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  byte local_1c8;
  undefined1 local_1c0 [400];
  
  uVar8 = *(ulonglong *)(param_2 + 0x28);
  local_580 = param_1;
  if (uVar8 < *(ulonglong *)(param_2 + 0x20)) {
    bVar13 = 0;
    do {
      uVar8 = uVar8 + 1;
      bVar4 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar8);
      if ((0x20 < (ulonglong)bVar4) || ((0x100002600U >> ((ulonglong)bVar4 & 0x3f) & 1) == 0)) {
        if (bVar4 != 0x7b) {
          pcVar11 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                            ::peek_invalid_type(param_2,&local_599,&DAT_0078a1c0);
          goto LAB_0041ee7f;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 != '\0') {
          *(ulonglong *)(param_2 + 0x28) = uVar8;
          local_558 = 1;
          local_598 = 0;
          local_590 = 8;
          local_588 = 0;
          local_59a = 2;
          local_578 = param_2;
          local_560 = param_2;
          goto LAB_0041e987;
        }
        local_518 = (undefined8 *)0x18;
        goto LAB_0041e8db;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar8;
    } while (uVar8 != *(ulonglong *)(param_2 + 0x20));
  }
  local_518 = (undefined8 *)0x5;
LAB_0041e8db:
  uVar9 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_518);
  goto LAB_0041ee87;
LAB_0041e987:
  uVar16 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
           ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                     (&local_518,&local_560);
  lVar5 = local_560;
  if ((char)local_518 == '\x01') goto LAB_0041ecca;
  if (local_518._1_1_ == '\0') {
    uVar16 = <serde[8f836fbdfa2c5b5d]::private::de::FlatMapDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
             ::deserialize_struct::
             <<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                       (&local_518,&local_598,&DAT_00194db2,0x14,&PTR_DAT_00789db0,0x17);
    pcVar11 = uStack_510;
    puVar15 = local_518;
    bVar13 = local_59a;
    if (local_518 == (undefined8 *)0xffffffffffffffff) goto LAB_0041ed74;
    (*(code *)PTR_memcpy_00799008)(uVar16,400);
    uVar16 = <alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::option::Option<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(&local_598,&local_508);
    bVar13 = local_59a & 1;
    goto LAB_0041ed85;
  }
  plVar2 = (longlong *)(local_560 + 0x18);
  *(longlong *)(local_560 + 0x28) = *(longlong *)(local_560 + 0x28) + 1;
  *(undefined8 *)(local_560 + 0x10) = 0;
  (*(code *)PTR_parse_str_007998f8)(uVar16,local_560);
  pcVar11 = uStack_510;
  if (local_518 == (undefined8 *)0x2) goto LAB_0041ed74;
  pcVar11 = (code *)CONCAT44(iStack_504,local_508);
  if (((ulonglong)local_518 & 1) == 0) {
    if ((pcVar11 == (code *)&DAT_0000000e) &&
       (*(longlong *)(uStack_510 + 6) == 0x6574617262696c61 &&
        *(longlong *)uStack_510 == 0x6c61635f6f747561)) {
LAB_0041ead9:
      cVar7 = -1;
    }
    else {
      cVar7 = '\r';
      unaff_R15 = uStack_510;
      local_570 = pcVar11;
    }
  }
  else {
    if (pcVar11 == (code *)&DAT_0000000e) {
      if (*(longlong *)(uStack_510 + 6) ==
          CONCAT62(s_alibrate_0019fc84._2_6_,s_alibrate_0019fc84._0_2_) &&
          *(longlong *)uStack_510 ==
          CONCAT26(s_alibrate_0019fc84._0_2_,
                   anon_1b4a85c95499e1b671cf4fa96a1b6d0f_59_llvm_10049508496007902178))
      goto LAB_0041ead9;
    }
    else {
      if (iStack_504 < 0) goto LAB_0041ec94;
      if (pcVar11 == (code *)0x0) {
        cVar7 = '\f';
        local_570 = (code *)0x1;
        local_568 = (code *)0x0;
        unaff_R15 = (code *)0x0;
        goto LAB_0041eadb;
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar10 = (code *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar10 == (code *)0x0) {
LAB_0041ec94:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    local_570 = pcVar10;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,pcVar11);
    cVar7 = '\f';
    unaff_R15 = pcVar11;
    local_568 = pcVar11;
  }
LAB_0041eadb:
  if (cVar7 != -1) {
    local_540 = local_570;
    uStack_538 = local_568;
    local_550 = CONCAT31(local_550._1_3_,cVar7);
    uVar8 = *(ulonglong *)(lVar5 + 0x28);
    pcStack_548 = unaff_R15;
    if (uVar8 < *(ulonglong *)(lVar5 + 0x20)) {
      lVar12 = *plVar2;
      while( true ) {
        uVar8 = uVar8 + 1;
        uVar14 = (ulonglong)*(byte *)(lVar12 + -1 + uVar8);
        if (0x3a < uVar14) goto LAB_0041eeb9;
        if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(lVar5 + 0x28) = uVar8;
        if (uVar8 == *(ulonglong *)(lVar5 + 0x20)) goto LAB_0041eca2;
      }
      if (uVar14 != 0x3a) {
LAB_0041eeb9:
        local_530[0] = 6;
        pcVar11 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          ::peek_error(lVar5,local_530);
        goto LAB_0041ecb8;
      }
      *(ulonglong *)(lVar5 + 0x28) = uVar8;
      __deserialize_content_v1::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>
                (&local_368,lVar5);
      lVar5 = local_588;
      if ((char)local_368 != -1) {
        local_4e8 = local_358;
        uStack_4e0 = uStack_350;
        local_518 = (undefined8 *)CONCAT44(uStack_54c,local_550);
        uStack_510 = pcStack_548;
        local_508 = (undefined4)local_540;
        iStack_504 = local_540._4_4_;
        uStack_500 = (undefined4)uStack_538;
        uStack_4fc = uStack_538._4_4_;
        local_4f8 = SUB84(local_368,0);
        pcStack_4f0 = local_360;
        uStack_4f4 = local_368._4_4_;
        if (local_588 == local_598) {
          <alloc[12e961f32105355]::raw_vec::RawVec<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>
          ::grow_one(&local_598);
        }
        lVar12 = lVar5 * 0x40;
        puVar15 = (undefined8 *)(local_590 + 0x30 + lVar12);
        *puVar15 = local_4e8;
        puVar15[1] = uStack_4e0;
        puVar15 = (undefined8 *)(local_590 + 0x20 + lVar12);
        *puVar15 = CONCAT44(uStack_4f4,local_4f8);
        puVar15[1] = pcStack_4f0;
        puVar15 = (undefined8 *)(local_590 + 0x10 + lVar12);
        *puVar15 = CONCAT44(iStack_504,local_508);
        puVar15[1] = CONCAT44(uStack_4fc,uStack_500);
        puVar3 = (undefined4 *)(local_590 + lVar12);
        *puVar3 = (undefined4)local_518;
        puVar3[1] = local_518._4_4_;
        puVar3[2] = (undefined4)uStack_510;
        puVar3[3] = uStack_510._4_4_;
        local_588 = lVar5 + 1;
        goto LAB_0041e987;
      }
      pcVar11 = local_360;
    }
    else {
LAB_0041eca2:
      local_530[0] = 3;
      pcVar11 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        ::peek_error(lVar5,local_530);
LAB_0041ecb8:
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <serde_core[48776c27239fa21f]::private::content::Content>(&local_550);
    goto LAB_0041ed74;
  }
  if (local_59a != 2) {
    local_368 = (undefined8 *)&DAT_0019466f;
    local_360 = (code *)&DAT_0000000e;
    local_518 = &local_368;
    uStack_510 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    pcVar11 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                      ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                 ,&local_518);
LAB_0041ed71:
    goto LAB_0041ed74;
  }
  uVar8 = *(ulonglong *)(lVar5 + 0x28);
  if (*(ulonglong *)(lVar5 + 0x20) <= uVar8) {
LAB_0041ed55:
    local_518 = (undefined8 *)0x3;
    pcVar11 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(lVar5,&local_518);
    goto LAB_0041ed71;
  }
  lVar12 = *plVar2;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar14 = (ulonglong)*(byte *)(lVar12 + -1 + uVar8);
    if (0x3a < uVar14) goto LAB_0041ef51;
    if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
    *(ulonglong *)(lVar5 + 0x28) = uVar8;
    if (uVar8 == *(ulonglong *)(lVar5 + 0x20)) goto LAB_0041ed55;
  }
  if (uVar14 != 0x3a) {
LAB_0041ef51:
    local_518 = (undefined8 *)&DAT_00000006;
    pcVar11 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(lVar5,&local_518);
    goto LAB_0041ed71;
  }
  *(ulonglong *)(lVar5 + 0x28) = uVar8;
  deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>(&local_368,lVar5);
  if ((char)local_368 == '\x01') {
    pcVar11 = local_360;
    goto LAB_0041ed74;
  }
  local_59a = local_368._1_1_;
  goto LAB_0041e987;
LAB_0041ecca:
  pcVar11 = uStack_510;
LAB_0041ed74:
  uVar16 = <alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::option::Option<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop(&local_598);
  puVar15 = (undefined8 *)0xffffffffffffffff;
LAB_0041ed85:
  if (local_598 != 0) {
    uVar16 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar16,8);
  }
  lVar5 = local_578;
  *(char *)(local_578 + 0x38) = *(char *)(local_578 + 0x38) + '\x01';
  local_368 = puVar15;
  local_360 = pcVar11;
  (*(code *)PTR_memcpy_00799008)(uVar16,400);
  local_1c8 = bVar13;
  pcVar10 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    ::end_map(lVar5,local_1c0);
  uVar16 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,0x1a8);
  pcVar11 = uStack_510;
  puVar6 = local_518;
  puVar15 = local_580;
  local_370 = pcVar10;
  if (local_518 == (undefined8 *)0xffffffffffffffff) {
    if (pcVar10 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (pcVar10,&local_368);
    }
  }
  else {
    if (pcVar10 == (code *)0x0) {
      (*(code *)PTR_memcpy_00799008)(uVar16,0x198);
      *puVar15 = puVar6;
      puVar15[1] = pcVar11;
      return puVar15;
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(&local_518);
    pcVar11 = pcVar10;
  }
  param_2 = local_578;
LAB_0041ee7f:
  uVar9 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar11,param_2);
LAB_0041ee87:
  local_580[1] = uVar9;
  *local_580 = 0xffffffffffffffff;
  return local_580;
}


