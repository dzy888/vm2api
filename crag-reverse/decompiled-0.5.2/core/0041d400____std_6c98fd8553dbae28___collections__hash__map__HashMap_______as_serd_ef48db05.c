// 0041d400 <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_map::<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,
   _, _> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,
   std[6c98fd8553dbae28]::hash::random::RandomState>> */

ulonglong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_map::
<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>>
          (ulonglong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  code *pcVar9;
  longlong in_FS_OFFSET;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 local_129;
  longlong local_128;
  ulonglong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_70 [8];
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  local_120 = param_1;
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    lVar8 = *(longlong *)(param_2 + 0x18);
    do {
      uVar5 = uVar5 + 1;
      bVar3 = *(byte *)(lVar8 + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 != 0x7b) {
          uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_129,&DAT_0078a140);
          goto LAB_0041d836;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          local_e8 = 0x18;
          goto LAB_0041d468;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar5;
        local_a8 = 1;
        local_b0 = param_2;
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_c8 = *(longlong *)(in_FS_OFFSET + -0x38);
          lVar8 = *(longlong *)(in_FS_OFFSET + -0x30);
        }
        else {
          local_c8 = (*(code *)PTR_hashmap_random_keys_00799248)();
          *(ulonglong *)(in_FS_OFFSET + -0x38) = local_c8;
          *(longlong *)(in_FS_OFFSET + -0x30) = lVar8;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(ulonglong *)(in_FS_OFFSET + -0x38) = local_c8 + 1;
        <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
        <alloc[12e961f32105355]::alloc::Global>(&local_118,0x40,0);
        local_d8 = CONCAT44(iStack_104,local_108);
        uStack_d0 = CONCAT44(uStack_fc,uStack_100);
        local_e8 = local_118;
        uStack_e0 = (undefined4)uStack_110;
        uStack_dc = uStack_110._4_4_;
        pcVar9 = (code *)PTR_parse_str_007998f8;
        uStack_c0 = lVar8;
        goto LAB_0041d50a;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  local_e8 = 5;
LAB_0041d468:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_e8);
  goto LAB_0041d83e;
LAB_0041d50a:
  uVar10 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
           ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                     (&local_118,&local_b0);
  lVar8 = local_b0;
  if ((char)local_118 != '\x01') {
    if (local_118._1_1_ != '\x01') {
      uStack_110 = CONCAT44(uStack_dc,uStack_e0);
      local_58 = local_d8;
      uStack_50 = uStack_d0;
      local_48 = local_c8;
      uStack_40 = uStack_c0;
      goto LAB_0041d73d;
    }
    plVar2 = (longlong *)(local_b0 + 0x18);
    *(longlong *)(local_b0 + 0x28) = *(longlong *)(local_b0 + 0x28) + 1;
    *(undefined8 *)(local_b0 + 0x10) = 0;
    (*pcVar9)(uVar10,local_b0);
    if ((int)local_118 == 2) goto LAB_0041d731;
    lVar4 = CONCAT44(iStack_104,local_108);
    if (iStack_104 < 0) {
LAB_0041d6e5:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (lVar4 == 0) {
      local_128 = 1;
    }
    else {
      local_a0 = param_2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar6 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar6 == 0) goto LAB_0041d6e5;
      local_128 = lVar6;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar4);
      param_2 = local_a0;
    }
    uVar5 = *(ulonglong *)(lVar8 + 0x28);
    if (*(ulonglong *)(lVar8 + 0x20) <= uVar5) {
LAB_0041d6f3:
      local_98 = 3;
      uStack_110 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_error(lVar8,&local_98);
      uVar10 = extraout_XMM0_Da_00;
joined_r0x0041d804:
      if (lVar4 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
      goto LAB_0041d731;
    }
    lVar6 = *plVar2;
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)*(byte *)(lVar6 + -1 + uVar5);
      if (0x3a < uVar7) goto LAB_0041d8af;
      if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lVar8 + 0x28) = uVar5;
      if (uVar5 == *(ulonglong *)(lVar8 + 0x20)) goto LAB_0041d6f3;
    }
    if (uVar7 != 0x3a) {
LAB_0041d8af:
      local_98 = 6;
      uStack_110 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_error(lVar8,&local_98);
      uVar10 = extraout_XMM0_Da_01;
      goto joined_r0x0041d804;
    }
    *(ulonglong *)(lVar8 + 0x28) = uVar5;
    uVar10 = deserialize_struct::
             <<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                       (&local_118,lVar8);
    if (local_118 == 0xfffffffffffffffe) goto joined_r0x0041d804;
    local_88 = local_108;
    iStack_84 = iStack_104;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    local_98 = local_118;
    uStack_90 = (undefined4)uStack_110;
    uStack_8c = uStack_110._4_4_;
    local_68 = local_128;
    uVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::insert(&local_118,&local_e8,local_70,&local_98);
    pcVar9 = (code *)PTR_parse_str_007998f8;
    if ((local_118 < 0xfffffffffffffffe) && (local_118 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
    }
    goto LAB_0041d50a;
  }
LAB_0041d731:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_e8);
  local_e8 = 0;
LAB_0041d73d:
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  local_108 = (undefined4)local_58;
  iStack_104 = local_58._4_4_;
  uStack_100 = (undefined4)uStack_50;
  uStack_fc = uStack_50._4_4_;
  local_f8 = (undefined4)local_48;
  uStack_f4 = local_48._4_4_;
  uStack_f0 = (undefined4)uStack_40;
  uStack_ec = uStack_40._4_4_;
  local_118 = local_e8;
  uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::end_map(param_2);
  uVar5 = uStack_110;
  local_c8 = CONCAT44(uStack_f4,local_f8);
  uStack_c0 = CONCAT44(uStack_ec,uStack_f0);
  local_d8 = CONCAT44(iStack_104,local_108);
  uStack_d0 = CONCAT44(uStack_fc,uStack_100);
  local_e8 = local_118;
  uStack_e0 = (undefined4)uStack_110;
  uStack_dc = uStack_110._4_4_;
  local_b8 = uVar7;
  if (local_118 == 0) {
    if (uVar7 != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(uVar7);
      goto LAB_0041d833;
    }
  }
  else {
    if (uVar7 == 0) {
      local_120[4] = local_c8;
      local_120[5] = uStack_c0;
      local_120[2] = local_d8;
      local_120[3] = uStack_d0;
      *local_120 = local_118;
      local_120[1] = uStack_110;
      return local_120;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_e8);
    uVar5 = uVar7;
LAB_0041d833:
  }
LAB_0041d836:
  uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (uVar5,param_2);
LAB_0041d83e:
  local_120[1] = uVar5;
  *local_120 = 0;
  return local_120;
}


