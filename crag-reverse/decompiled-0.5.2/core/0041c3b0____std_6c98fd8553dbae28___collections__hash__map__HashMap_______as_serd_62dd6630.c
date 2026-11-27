// 0041c3b0 <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_map::<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,
   _, _> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,
   std[6c98fd8553dbae28]::hash::random::RandomState>> */

longlong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_map::
<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  ulonglong uVar9;
  longlong in_FS_OFFSET;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 local_199;
  longlong local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  int iStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  local_190 = param_1;
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    lVar6 = *(longlong *)(param_2 + 0x18);
    do {
      uVar5 = uVar5 + 1;
      bVar3 = *(byte *)(lVar6 + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 != 0x7b) {
          lVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_199,&DAT_0078a0e0);
          goto LAB_0041c89f;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          local_188 = 0x18;
          goto LAB_0041c418;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar5;
        local_118 = 1;
        local_120 = param_2;
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_e8 = *(longlong *)(in_FS_OFFSET + -0x38);
          lVar6 = *(longlong *)(in_FS_OFFSET + -0x30);
        }
        else {
          local_e8 = (*(code *)PTR_hashmap_random_keys_00799248)();
          *(longlong *)(in_FS_OFFSET + -0x38) = local_e8;
          *(longlong *)(in_FS_OFFSET + -0x30) = lVar6;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(longlong *)(in_FS_OFFSET + -0x38) = local_e8 + 1;
        <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
        <alloc[12e961f32105355]::alloc::Global>(&local_188,0x80,0);
        local_f8 = CONCAT44(iStack_174,local_178);
        uStack_f0 = CONCAT44(uStack_16c,uStack_170);
        local_108 = (int)local_188;
        uStack_104 = local_188._4_4_;
        uStack_100 = uStack_180;
        uStack_fc = uStack_17c;
        pcVar8 = (code *)PTR_parse_str_007998f8;
        lStack_e0 = lVar6;
        goto LAB_0041c4c6;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  local_188 = 5;
LAB_0041c418:
  lVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_188);
  goto LAB_0041c8a7;
LAB_0041c4c6:
  uVar10 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
           ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                     (&local_188,&local_120);
  lVar6 = local_120;
  if ((char)local_188 != '\x01') {
    if (local_188._1_1_ != '\x01') {
      local_d8 = CONCAT44(uStack_104,local_108);
      lVar7 = CONCAT44(uStack_fc,uStack_100);
      local_58 = local_f8;
      uStack_50 = uStack_f0;
      local_48 = local_e8;
      uStack_40 = lStack_e0;
      goto LAB_0041c788;
    }
    plVar2 = (longlong *)(local_120 + 0x18);
    *(longlong *)(local_120 + 0x28) = *(longlong *)(local_120 + 0x28) + 1;
    *(undefined8 *)(local_120 + 0x10) = 0;
    (*pcVar8)(uVar10,local_120);
    lVar7 = CONCAT44(uStack_17c,uStack_180);
    if ((int)local_188 == 2) goto LAB_0041c779;
    lVar4 = CONCAT44(iStack_174,local_178);
    if (iStack_174 < 0) {
LAB_0041c72d:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (lVar4 == 0) {
      local_198 = 1;
    }
    else {
      local_110 = param_2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar7 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar7 == 0) goto LAB_0041c72d;
      local_198 = lVar7;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar4);
      param_2 = local_110;
    }
    uVar5 = *(ulonglong *)(lVar6 + 0x28);
    if (*(ulonglong *)(lVar6 + 0x20) <= uVar5) {
LAB_0041c73b:
      local_d8 = 3;
      lVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(lVar6,&local_d8);
      uVar10 = extraout_XMM0_Da_00;
joined_r0x0041c86d:
      if (lVar4 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
      goto LAB_0041c779;
    }
    lVar7 = *plVar2;
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar9 = (ulonglong)*(byte *)(lVar7 + -1 + uVar5);
      if (0x3a < uVar9) goto LAB_0041c918;
      if ((0x100002600U >> (uVar9 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lVar6 + 0x28) = uVar5;
      if (uVar5 == *(ulonglong *)(lVar6 + 0x20)) goto LAB_0041c73b;
    }
    if (uVar9 != 0x3a) {
LAB_0041c918:
      local_d8 = 6;
      lVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(lVar6,&local_d8);
      uVar10 = extraout_XMM0_Da_01;
      goto joined_r0x0041c86d;
    }
    *(ulonglong *)(lVar6 + 0x28) = uVar5;
    uVar10 = deserialize_struct::
             <<craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                       (&local_188,lVar6);
    if (local_188 == -2) {
      lVar7 = CONCAT44(uStack_17c,uStack_180);
      goto joined_r0x0041c86d;
    }
    local_78 = local_128;
    local_88 = local_138;
    uStack_80 = uStack_130;
    local_98 = local_148;
    uStack_90 = uStack_140;
    local_a8 = (undefined4)local_158;
    uStack_a4 = local_158._4_4_;
    uStack_a0 = uStack_150;
    uStack_9c = uStack_14c;
    local_b8 = local_168;
    uStack_b4 = uStack_164;
    uStack_b0 = uStack_160;
    uStack_ac = uStack_15c;
    local_c8 = local_178;
    iStack_c4 = iStack_174;
    uStack_c0 = uStack_170;
    uStack_bc = uStack_16c;
    local_d8 = local_188;
    local_68 = local_198;
    uVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::insert(&local_188,&local_108,local_70,&local_d8);
    lVar6 = local_188;
    pcVar8 = (code *)PTR_parse_str_007998f8;
    if (local_188 != -2) {
      if ((CONCAT44(uStack_14c,uStack_150) != 0) &&
         (CONCAT44(uStack_14c,uStack_150) * 0x21 != -0x31)) {
        uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,0x10);
      }
      if ((lVar6 != -1) && (lVar6 != 0)) {
        uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
      if ((CONCAT44(uStack_16c,uStack_170) != -1) && (CONCAT44(uStack_16c,uStack_170) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
    }
    goto LAB_0041c4c6;
  }
  lVar7 = CONCAT44(uStack_17c,uStack_180);
LAB_0041c779:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_108);
  local_d8 = 0;
LAB_0041c788:
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  local_c8 = (undefined4)local_58;
  iStack_c4 = local_58._4_4_;
  uStack_c0 = (undefined4)uStack_50;
  uStack_bc = uStack_50._4_4_;
  local_b8 = (undefined4)local_48;
  uStack_b4 = local_48._4_4_;
  uStack_b0 = (undefined4)uStack_40;
  uStack_ac = uStack_40._4_4_;
  uStack_d0 = lVar7;
  lVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::end_map(param_2);
  lVar6 = uStack_d0;
  local_168 = local_b8;
  uStack_164 = uStack_b4;
  uStack_160 = uStack_b0;
  uStack_15c = uStack_ac;
  local_178 = local_c8;
  iStack_174 = iStack_c4;
  uStack_170 = uStack_c0;
  uStack_16c = uStack_bc;
  local_188 = local_d8;
  uStack_180 = (undefined4)uStack_d0;
  uStack_17c = uStack_d0._4_4_;
  local_158 = lVar7;
  if (local_d8 == 0) {
    if (lVar7 != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(lVar7);
      goto LAB_0041c89c;
    }
  }
  else {
    if (lVar7 == 0) {
      local_190[4] = CONCAT44(uStack_b4,local_b8);
      local_190[5] = CONCAT44(uStack_ac,uStack_b0);
      local_190[2] = CONCAT44(iStack_c4,local_c8);
      local_190[3] = CONCAT44(uStack_bc,uStack_c0);
      *local_190 = local_d8;
      local_190[1] = uStack_d0;
      return local_190;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_188);
    lVar6 = lVar7;
LAB_0041c89c:
  }
LAB_0041c89f:
  lVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (lVar6,param_2);
LAB_0041c8a7:
  local_190[1] = lVar6;
  *local_190 = 0;
  return local_190;
}


