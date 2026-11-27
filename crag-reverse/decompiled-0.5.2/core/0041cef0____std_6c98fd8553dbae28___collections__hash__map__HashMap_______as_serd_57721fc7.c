// 0041cef0 <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_map::<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,
   _, _> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,
   std[6c98fd8553dbae28]::hash::random::RandomState>> */

longlong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_map::
<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  code *pcVar8;
  longlong in_FS_OFFSET;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 local_129;
  longlong local_128;
  longlong *local_120;
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
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
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
  
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  local_120 = param_1;
  if (uVar3 < *(ulonglong *)(param_2 + 0x20)) {
    lVar4 = *(longlong *)(param_2 + 0x18);
    do {
      uVar3 = uVar3 + 1;
      bVar2 = *(byte *)(lVar4 + -1 + uVar3);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 != 0x7b) {
          lVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_129,&DAT_0078a120);
          goto LAB_0041d311;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          local_e8 = 0x18;
          goto LAB_0041cf58;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        local_a0 = 1;
        local_a8 = param_2;
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_c8 = *(longlong *)(in_FS_OFFSET + -0x38);
          lVar4 = *(longlong *)(in_FS_OFFSET + -0x30);
        }
        else {
          local_c8 = (*(code *)PTR_hashmap_random_keys_00799248)();
          *(longlong *)(in_FS_OFFSET + -0x38) = local_c8;
          *(longlong *)(in_FS_OFFSET + -0x30) = lVar4;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(longlong *)(in_FS_OFFSET + -0x38) = local_c8 + 1;
        <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
        <alloc[12e961f32105355]::alloc::Global>(&local_118,0x38,0);
        local_d8 = CONCAT44(iStack_104,local_108);
        uStack_d0 = CONCAT44(uStack_fc,uStack_100);
        local_e8 = local_118;
        uStack_e0 = (undefined4)uStack_110;
        uStack_dc = uStack_110._4_4_;
        pcVar8 = (code *)PTR_parse_str_007998f8;
        uStack_c0 = lVar4;
        goto LAB_0041cffa;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != *(ulonglong *)(param_2 + 0x20));
  }
  local_e8 = 5;
LAB_0041cf58:
  lVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_e8);
  goto LAB_0041d319;
LAB_0041cffa:
  uVar9 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
          ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                    (&local_118,&local_a8);
  lVar4 = local_a8;
  if ((char)local_118 != '\x01') {
    if (local_118._1_1_ != '\x01') {
      uStack_110 = CONCAT44(uStack_dc,uStack_e0);
      local_58 = local_d8;
      uStack_50 = uStack_d0;
      local_48 = local_c8;
      uStack_40 = uStack_c0;
      goto LAB_0041d218;
    }
    *(longlong *)(local_a8 + 0x28) = *(longlong *)(local_a8 + 0x28) + 1;
    *(undefined8 *)(local_a8 + 0x10) = 0;
    (*pcVar8)(uVar9,local_a8);
    if ((int)local_118 == 2) goto LAB_0041d20c;
    lVar6 = CONCAT44(iStack_104,local_108);
    if (iStack_104 < 0) {
LAB_0041d1c0:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (lVar6 == 0) {
      local_128 = 1;
    }
    else {
      local_b0 = param_2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar5 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar5 == 0) goto LAB_0041d1c0;
      local_128 = lVar5;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar6);
      param_2 = local_b0;
    }
    uVar3 = *(ulonglong *)(lVar4 + 0x28);
    if (*(ulonglong *)(lVar4 + 0x20) <= uVar3) {
LAB_0041d1ce:
      local_98 = 3;
      uStack_110 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_error(lVar4,&local_98);
      uVar9 = extraout_XMM0_Da_00;
joined_r0x0041d2df:
      if (lVar6 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
      }
      goto LAB_0041d20c;
    }
    while( true ) {
      uVar3 = uVar3 + 1;
      uVar7 = (ulonglong)*(byte *)(*(longlong *)(lVar4 + 0x18) + -1 + uVar3);
      if (0x3a < uVar7) goto LAB_0041d38a;
      if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lVar4 + 0x28) = uVar3;
      if (uVar3 == *(ulonglong *)(lVar4 + 0x20)) goto LAB_0041d1ce;
    }
    if (uVar7 != 0x3a) {
LAB_0041d38a:
      local_98 = 6;
      uStack_110 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_error(lVar4,&local_98);
      uVar9 = extraout_XMM0_Da_01;
      goto joined_r0x0041d2df;
    }
    *(ulonglong *)(lVar4 + 0x28) = uVar3;
    uVar9 = deserialize_struct::
            <<craggemini_core[66f3c71560d70857]::resume::StickyConvBinding_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_118,lVar4);
    if (local_118 == -1) goto joined_r0x0041d2df;
    local_88 = local_108;
    iStack_84 = iStack_104;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    local_98 = local_118;
    uStack_90 = (undefined4)uStack_110;
    uStack_8c = uStack_110._4_4_;
    local_68 = local_128;
    uVar9 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
            ::insert(&local_118,&local_e8,local_70,&local_98);
    pcVar8 = (code *)PTR_parse_str_007998f8;
    if ((local_118 != -1) && (local_118 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
    }
    goto LAB_0041cffa;
  }
LAB_0041d20c:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_e8);
  local_e8 = 0;
LAB_0041d218:
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
  lVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::end_map(param_2);
  lVar4 = uStack_110;
  local_c8 = CONCAT44(uStack_f4,local_f8);
  uStack_c0 = CONCAT44(uStack_ec,uStack_f0);
  local_d8 = CONCAT44(iStack_104,local_108);
  uStack_d0 = CONCAT44(uStack_fc,uStack_100);
  local_e8 = local_118;
  uStack_e0 = (undefined4)uStack_110;
  uStack_dc = uStack_110._4_4_;
  local_b8 = lVar6;
  if (local_118 == 0) {
    if (lVar6 != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(lVar6);
      goto LAB_0041d30e;
    }
  }
  else {
    if (lVar6 == 0) {
      local_120[4] = local_c8;
      local_120[5] = uStack_c0;
      local_120[2] = local_d8;
      local_120[3] = uStack_d0;
      *local_120 = local_118;
      local_120[1] = uStack_110;
      return local_120;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_e8);
    lVar4 = lVar6;
LAB_0041d30e:
  }
LAB_0041d311:
  lVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (lVar4,param_2);
LAB_0041d319:
  local_120[1] = lVar4;
  *local_120 = 0;
  return local_120;
}


