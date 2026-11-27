// 00158660 <<craggemini[b21da2d71f2da7a3]::license::host::HostGrant_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini[b21da2d71f2da7a3]::license::host::HostGrant
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini[b21da2d71f2da7a3]::license::host::HostGrant_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char (*pacVar9) [8];
  char (*pacVar10) [8];
  undefined4 unaff_EBP;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  undefined8 local_88;
  char (*local_80) [8];
  longlong local_78;
  undefined8 local_70;
  char (*local_68) [8];
  undefined8 *local_60;
  undefined1 local_51;
  char (*local_50) [8];
  undefined4 local_44;
  char *local_40;
  undefined1 local_38;
  
  uVar7 = *(ulonglong *)(param_2 + 0x28);
  if (uVar7 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar7 = uVar7 + 1;
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar7);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 == 0x5b) {
          pcVar1 = param_2 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar7;
            local_68 = (char (*) [8])CONCAT71(local_68._1_7_,1);
            local_70 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_88,&local_70);
            if ((char)local_88 == '\x01') goto LAB_001587cc;
            if (local_88._1_1_ == '\x01') {
              <craggemini[b21da2d71f2da7a3]::license::host::SlotLimit_as_serde_core[48776c27239fa21f]::de::Deserialize>
              ::deserialize::
              <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        (&local_88,local_70);
              if ((int)local_88 == 1) {
LAB_001587cc:
                pacVar10 = local_80;
              }
              else {
                unaff_EBP = local_88._4_4_;
                <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                ::next_element_seed::has_next_element::
                <serde_json[dc3825464c436029]::read::SliceRead>(&local_88,&local_70);
                if ((char)local_88 == '\x01') goto LAB_001587cc;
                if (local_88._1_1_ == '\x01') {
                  auVar13 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                            ::deserialize::
                            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                      (local_70);
                  pacVar10 = auVar13._8_8_;
                  if ((auVar13._0_8_ & 1) == 0) {
                    bVar5 = false;
                    goto LAB_001587d6;
                  }
                }
                else {
                  pacVar10 = (char (*) [8])
                             <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                             ::invalid_length(1,&PTR_DAT_00214fb0,&DAT_00214f40);
                }
              }
              bVar5 = true;
            }
            else {
              pacVar10 = (char (*) [8])
                         <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::invalid_length(0,&PTR_DAT_00214fb0,&DAT_00214f40);
              bVar5 = true;
            }
LAB_001587d6:
            param_2[0x38] = param_2[0x38] + '\x01';
            pacVar9 = (char (*) [8])
                      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::end_seq(param_2);
            goto joined_r0x001587e4;
          }
        }
        else {
          if (bVar3 != 0x7b) {
            pacVar9 = (char (*) [8])
                      <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_invalid_type(param_2,&local_51,&DAT_002151f0);
            goto LAB_00158bce;
          }
          pcVar1 = param_2 + 0x38;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar7;
            local_38 = 1;
            local_60 = param_1;
            local_40 = param_2;
            <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
            ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_88,&local_40);
            if ((char)local_88 != '\0') goto LAB_00158718;
            bVar5 = false;
            bVar6 = false;
            goto LAB_00158837;
          }
        }
        local_88 = (undefined8 *)0x18;
        goto LAB_001586c2;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar7;
    } while (uVar7 != *(ulonglong *)(param_2 + 0x20));
  }
  local_88 = (undefined8 *)0x5;
LAB_001586c2:
  uVar8 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_88);
  goto LAB_00158759;
LAB_00158837:
  do {
    pcVar1 = local_40;
    if (local_88._1_1_ != '\x01') {
      if (bVar5) {
        if (bVar6) {
          bVar5 = false;
LAB_00158a6e:
          pacVar10 = local_50;
          goto LAB_00158729;
        }
        local_70 = "expires_at";
        local_68 = (char (*) [8])0xa;
      }
      else {
        local_70 = "slots";
        local_68 = (char (*) [8])&DAT_00000005;
      }
      puVar12 = anon_aa8a284406637d3c026889b109c79dc6_27_llvm_9655133765307635171;
LAB_00158b26:
      local_88 = &local_70;
      local_80 = (char (*) [8])<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      pacVar10 = (char (*) [8])
                 <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                 ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>(puVar12,&local_88);
LAB_00158b2e:
      goto LAB_00158724;
    }
    plVar2 = (longlong *)(local_40 + 0x18);
    *(longlong *)(local_40 + 0x28) = *(longlong *)(local_40 + 0x28) + 1;
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    (*(code *)PTR_parse_str_00219c90)();
    pacVar10 = local_80;
    if ((int)local_88 == 2) goto LAB_00158724;
    if (local_78 != 5) {
      if ((local_78 == 10) &&
         (!(*(short *)local_80[1] != s_atslot_limitroster_001197b9._0_2_ ||
           *local_80 != anon_1b24917ebd097f132e7c2fe0e448a3c0_18_llvm_6508052046112256635))) {
        if (!bVar6) {
          uVar7 = *(ulonglong *)(pcVar1 + 0x28);
          if (uVar7 < *(ulonglong *)(pcVar1 + 0x20)) {
            lVar4 = *plVar2;
            while( true ) {
              uVar7 = uVar7 + 1;
              uVar11 = (ulonglong)*(byte *)(lVar4 + -1 + uVar7);
              if (0x3a < uVar11) goto LAB_00158a18;
              if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
              *(ulonglong *)(pcVar1 + 0x28) = uVar7;
              if (uVar7 == *(ulonglong *)(pcVar1 + 0x20)) goto LAB_0015897b;
            }
            if (uVar11 != 0x3a) {
LAB_00158a18:
              local_88 = (undefined8 *)0x6;
              goto LAB_00158983;
            }
            *(ulonglong *)(pcVar1 + 0x28) = uVar7;
            auVar13 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                      ::deserialize::
                      <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                                (pcVar1);
            local_50 = auVar13._8_8_;
            bVar6 = true;
            if ((auVar13._0_8_ & 1) == 0) goto LAB_00158820;
          }
          else {
LAB_0015897b:
            local_88 = (undefined8 *)0x3;
LAB_00158983:
            local_50 = (char (*) [8])
                       <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                       ::peek_error(pcVar1,&local_88);
          }
          bVar5 = true;
          goto LAB_00158a6e;
        }
        local_70 = "expires_at";
        local_68 = (char (*) [8])0xa;
LAB_00158b8c:
        puVar12 = anon_aa8a284406637d3c026889b109c79dc6_31_llvm_9655133765307635171;
        goto LAB_00158b26;
      }
LAB_00158b3a:
      pacVar10 = (char (*) [8])
                 <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                 ::unknown_field(local_80,local_78,
                                 &anon_1b24917ebd097f132e7c2fe0e448a3c0_24_llvm_6508052046112256635,
                                 2);
      goto LAB_00158724;
    }
    if ((*local_80)[4] != s_sgrantsvm_idmachine_id_hashdevic_001197d8[0] ||
        *(char (*) [4])*local_80 !=
        anon_1b24917ebd097f132e7c2fe0e448a3c0_23_llvm_6508052046112256635) goto LAB_00158b3a;
    if (bVar5) {
      local_70 = "slots";
      local_68 = (char (*) [8])&DAT_00000005;
      goto LAB_00158b8c;
    }
    uVar7 = *(ulonglong *)(pcVar1 + 0x28);
    if (*(ulonglong *)(pcVar1 + 0x20) <= uVar7) {
LAB_00158aa9:
      local_88 = (undefined8 *)0x3;
LAB_00158ab1:
      pacVar10 = (char (*) [8])
                 <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                 ::peek_error(pcVar1,&local_88);
      goto LAB_00158b2e;
    }
    lVar4 = *plVar2;
    while( true ) {
      uVar7 = uVar7 + 1;
      uVar11 = (ulonglong)*(byte *)(lVar4 + -1 + uVar7);
      if (0x3a < uVar11) goto LAB_00158bad;
      if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(pcVar1 + 0x28) = uVar7;
      if (uVar7 == *(ulonglong *)(pcVar1 + 0x20)) goto LAB_00158aa9;
    }
    if (uVar11 != 0x3a) {
LAB_00158bad:
      local_88 = (undefined8 *)0x6;
      goto LAB_00158ab1;
    }
    *(ulonglong *)(pcVar1 + 0x28) = uVar7;
    <craggemini[b21da2d71f2da7a3]::license::host::SlotLimit_as_serde_core[48776c27239fa21f]::de::Deserialize>
    ::deserialize::
    <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              (&local_70,pcVar1);
    if ((int)local_70 == 1) {
      pacVar10 = local_68;
      goto LAB_00158724;
    }
    local_44 = local_70._4_4_;
    bVar5 = true;
LAB_00158820:
    <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
    next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
              (&local_88,&local_40);
  } while ((char)local_88 == '\0');
LAB_00158718:
  pacVar10 = local_80;
LAB_00158724:
  bVar5 = true;
LAB_00158729:
  param_1 = local_60;
  param_2[0x38] = param_2[0x38] + '\x01';
  pacVar9 = (char (*) [8])
            <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::end_map(param_2);
  unaff_EBP = local_44;
joined_r0x001587e4:
  if (bVar5) {
    if (pacVar9 != (char (*) [8])0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pacVar9);
    }
  }
  else {
    if (pacVar9 == (char (*) [8])0x0) {
      param_1[1] = pacVar10;
      *(undefined4 *)(param_1 + 2) = unaff_EBP;
      uVar8 = 0;
      goto LAB_001587ff;
    }
LAB_00158bce:
    pacVar10 = pacVar9;
  }
  uVar8 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pacVar10,param_2);
LAB_00158759:
  param_1[1] = uVar8;
  uVar8 = 1;
LAB_001587ff:
  *param_1 = uVar8;
  return param_1;
}


