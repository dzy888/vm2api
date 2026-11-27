// 0004eb30 <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::TaggedContentVisitor<<agy_bridge[64a9e9deac6c45ce]::Command
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field> as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_map::<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

char * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::TaggedContentVisitor<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_map::
<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (char *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  char cVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  undefined4 uStack_100;
  undefined3 uStack_fc;
  undefined8 local_f8;
  code *pcStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  code *pcStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_67;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_118 = 0;
  lStack_110 = 8;
  local_108 = 0;
  uVar7 = *param_2;
  pcVar5 = (code *)param_2[1];
  cVar11 = -1;
  local_98 = param_3;
  local_90 = param_4;
LAB_0004ebce:
  do {
    uVar13 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
             ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                       (&local_d8,&local_98);
    lVar10 = local_98;
    pcVar6 = uStack_d0;
    if ((char)local_d8 == '\x01') {
LAB_0004ee3c:
      *(code **)(param_1 + 8) = pcVar6;
      *param_1 = -1;
LAB_0004ee44:
      lVar8 = local_108;
      lVar10 = lStack_110;
      while (bVar12 = lVar8 != 0, lVar8 = lVar8 + -1, bVar12) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <serde_core[48776c27239fa21f]::private::content::Content>(lVar10);
        lVar1 = lVar10 + 0x20;
        lVar10 = lVar10 + 0x40;
        uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_core[48776c27239fa21f]::private::content::Content>(lVar1);
      }
      if (local_118 != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)(uVar13,8);
      }
      return param_1;
    }
    if (local_d8._1_1_ != '\x01') {
      if (cVar11 == -1) {
        local_d8 = (byte *)&local_f8;
        uStack_d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_f8 = uVar7;
        pcStack_f0 = pcVar5;
        uVar7 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                          (anon_9fa032a1d30ceca52b5a2d5222eaa356_12_llvm_10768355879922845107,
                           &local_d8);
        *(undefined8 *)(param_1 + 8) = uVar7;
        *param_1 = -1;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::vec::Vec<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>
                  (&local_118);
        return param_1;
      }
      local_60 = (undefined1)local_118;
      uStack_5f = (undefined7)((ulonglong)local_118 >> 8);
      uStack_58 = (undefined1)lStack_110;
      *param_1 = cVar11;
      param_1[8] = '\x15';
      *(ulonglong *)(param_1 + 9) = CONCAT17(local_60,uStack_67);
      *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_58,uStack_5f);
      *(longlong *)(param_1 + 0x18) = lStack_110;
      *(longlong *)(param_1 + 0x20) = local_108;
      return param_1;
    }
    uVar13 = <serde[8f836fbdfa2c5b5d]::private::de::content::TagOrContentVisitor_as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
             ::deserialize::
             <serde_json[dc3825464c436029]::de::MapKey<serde_json[dc3825464c436029]::read::SliceRead>>
                       (&local_d8,uVar7,pcVar5,local_98);
    pcVar6 = uStack_d0;
    if ((char)local_d8 == -2) goto LAB_0004ee3c;
    uStack_100 = local_d8._1_4_;
    uStack_fc = (undefined3)((ulonglong)local_d8 >> 0x28);
    local_48 = local_c8;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_c0;
    uStack_3c = uStack_bc;
    if ((char)local_d8 != -1) {
      local_88 = SUB84(local_d8,0);
      pcStack_80 = uStack_d0;
      local_78 = local_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      uVar4 = *(ulonglong *)(lVar10 + 0x28);
      uStack_84 = local_d8._4_4_;
      if (uVar4 < *(ulonglong *)(lVar10 + 0x20)) {
        while( true ) {
          uVar4 = uVar4 + 1;
          uVar9 = (ulonglong)*(byte *)(*(longlong *)(lVar10 + 0x18) + -1 + uVar4);
          if (0x3a < uVar9) goto LAB_0004ef07;
          if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(lVar10 + 0x28) = uVar4;
          if (uVar4 == *(ulonglong *)(lVar10 + 0x20)) goto LAB_0004edde;
        }
        if (uVar9 == 0x3a) {
          *(ulonglong *)(lVar10 + 0x28) = uVar4;
          uStack_84 = local_d8._4_4_;
          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::__deserialize_content_v1::
          <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>(&local_f8,lVar10);
          lVar10 = local_108;
          if ((byte)local_f8 != 0xff) {
            local_a8 = local_e8;
            uStack_a0 = uStack_e0;
            local_b8 = local_f8;
            pcStack_b0 = pcStack_f0;
            local_d8 = (byte *)CONCAT44(uStack_84,local_88);
            uStack_d0 = pcStack_80;
            local_c8 = local_78;
            uStack_c4 = uStack_74;
            uStack_c0 = uStack_70;
            uStack_bc = uStack_6c;
            if (local_108 == local_118) {
              <alloc[12e961f32105355]::raw_vec::RawVec<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>
              ::grow_one(&local_118);
            }
            lVar8 = lVar10 * 0x40;
            puVar3 = (undefined8 *)(lStack_110 + 0x30 + lVar8);
            *puVar3 = local_a8;
            puVar3[1] = uStack_a0;
            puVar3 = (undefined8 *)(lStack_110 + 0x20 + lVar8);
            *puVar3 = local_b8;
            puVar3[1] = pcStack_b0;
            puVar3 = (undefined8 *)(lStack_110 + 0x10 + lVar8);
            *puVar3 = CONCAT44(uStack_c4,local_c8);
            puVar3[1] = CONCAT44(uStack_bc,uStack_c0);
            puVar2 = (undefined4 *)(lStack_110 + lVar8);
            *puVar2 = (undefined4)local_d8;
            puVar2[1] = local_d8._4_4_;
            puVar2[2] = (undefined4)uStack_d0;
            puVar2[3] = uStack_d0._4_4_;
            local_108 = lVar10 + 1;
            goto LAB_0004ebce;
          }
          pcVar5 = pcStack_f0;
        }
        else {
LAB_0004ef07:
          local_d8 = &Elf64_Ehdr_00000000.e_ident_version;
          pcVar5 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                           ::peek_error(lVar10,&local_d8);
        }
      }
      else {
LAB_0004edde:
        local_d8 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2);
        pcVar5 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                         ::peek_error(lVar10,&local_d8);
      }
      *(code **)(param_1 + 8) = pcVar5;
      *param_1 = -1;
      uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <serde_core[48776c27239fa21f]::private::content::Content>(&local_88);
      goto LAB_0004ee44;
    }
    if (cVar11 != -1) {
      local_d8 = (byte *)&local_f8;
      uStack_d0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_f8 = uVar7;
      pcStack_f0 = pcVar5;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                 (anon_9fa032a1d30ceca52b5a2d5222eaa356_16_llvm_10768355879922845107
                                  ,&local_d8);
      uVar13 = extraout_XMM0_Da_00;
      goto LAB_0004ee3c;
    }
    uVar4 = *(ulonglong *)(lVar10 + 0x28);
    if (*(ulonglong *)(lVar10 + 0x20) <= uVar4) {
LAB_0004ee17:
      local_d8 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2);
      pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_error(lVar10,&local_d8);
      uVar13 = extraout_XMM0_Da;
      pcStack_f0 = pcVar6;
      goto LAB_0004ee3c;
    }
    while( true ) {
      uVar4 = uVar4 + 1;
      uVar9 = (ulonglong)*(byte *)(*(longlong *)(lVar10 + 0x18) + -1 + uVar4);
      if (0x3a < uVar9) goto LAB_0004ef5d;
      if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lVar10 + 0x28) = uVar4;
      if (uVar4 == *(ulonglong *)(lVar10 + 0x20)) goto LAB_0004ee17;
    }
    if (uVar9 != 0x3a) {
LAB_0004ef5d:
      local_d8 = &Elf64_Ehdr_00000000.e_ident_version;
      pcVar6 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_error(lVar10,&local_d8);
      uVar13 = extraout_XMM0_Da_01;
      pcStack_f0 = pcVar6;
      goto LAB_0004ee3c;
    }
    *(ulonglong *)(lVar10 + 0x28) = uVar4;
    uVar13 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
             ::deserialize::
             <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       (&local_f8,lVar10);
    pcVar6 = pcStack_f0;
    if ((byte)local_f8 == 1) goto LAB_0004ee3c;
    cVar11 = local_f8._1_1_;
  } while( true );
}


