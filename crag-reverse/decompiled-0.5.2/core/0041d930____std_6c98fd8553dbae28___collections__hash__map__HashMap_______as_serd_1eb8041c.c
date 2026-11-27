// 0041d930 <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_map::<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,
   _, _> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,
   std[6c98fd8553dbae28]::hash::random::RandomState>> */

longlong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_map::
<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  code *pcVar9;
  longlong in_FS_OFFSET;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 local_159;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined1 local_70 [8];
  longlong local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  local_150 = param_1;
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    lVar6 = *(longlong *)(param_2 + 0x18);
    do {
      uVar5 = uVar5 + 1;
      bVar3 = *(byte *)(lVar6 + -1 + uVar5);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 != 0x7b) {
          lVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_159,&DAT_0078a160);
          goto LAB_0041dda3;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          local_148 = 0x18;
          goto LAB_0041d998;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar5;
        local_100 = 1;
        local_108 = param_2;
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_88 = *(longlong *)(in_FS_OFFSET + -0x38);
          lVar6 = *(longlong *)(in_FS_OFFSET + -0x30);
        }
        else {
          local_88 = (*(code *)PTR_hashmap_random_keys_00799248)();
          *(longlong *)(in_FS_OFFSET + -0x38) = local_88;
          *(longlong *)(in_FS_OFFSET + -0x30) = lVar6;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(longlong *)(in_FS_OFFSET + -0x38) = local_88 + 1;
        <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
        <alloc[12e961f32105355]::alloc::Global>(&local_148,0x58,0);
        local_98 = CONCAT44(iStack_134,local_138);
        uStack_90 = CONCAT44(uStack_12c,uStack_130);
        local_a8 = (int)local_148;
        uStack_a4 = local_148._4_4_;
        uStack_a0 = uStack_140;
        uStack_9c = uStack_13c;
        pcVar9 = (code *)PTR_parse_str_007998f8;
        lStack_80 = lVar6;
        goto LAB_0041da3d;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  local_148 = 5;
LAB_0041d998:
  lVar6 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_148);
  goto LAB_0041ddab;
LAB_0041da3d:
  uVar10 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
           ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                     (&local_148,&local_108);
  lVar6 = local_108;
  if ((char)local_148 != '\x01') {
    if (local_148._1_1_ != '\x01') {
      local_f8 = CONCAT44(uStack_a4,local_a8);
      lVar7 = CONCAT44(uStack_9c,uStack_a0);
      local_58 = local_98;
      uStack_50 = uStack_90;
      local_48 = local_88;
      uStack_40 = lStack_80;
      goto LAB_0041dc95;
    }
    plVar2 = (longlong *)(local_108 + 0x18);
    *(longlong *)(local_108 + 0x28) = *(longlong *)(local_108 + 0x28) + 1;
    *(undefined8 *)(local_108 + 0x10) = 0;
    (*pcVar9)(uVar10,local_108);
    lVar7 = CONCAT44(uStack_13c,uStack_140);
    if ((int)local_148 == 2) goto LAB_0041dc86;
    lVar4 = CONCAT44(iStack_134,local_138);
    if (iStack_134 < 0) {
LAB_0041dc40:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    if (lVar4 == 0) {
      local_158 = 1;
    }
    else {
      local_b0 = param_2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar7 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar7 == 0) goto LAB_0041dc40;
      local_158 = lVar7;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar4);
      param_2 = local_b0;
    }
    uVar5 = *(ulonglong *)(lVar6 + 0x28);
    if (*(ulonglong *)(lVar6 + 0x20) <= uVar5) {
LAB_0041dc4e:
      local_f8 = 3;
      lVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(lVar6,&local_f8);
      uVar10 = extraout_XMM0_Da_00;
joined_r0x0041dd71:
      if (lVar4 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
      goto LAB_0041dc86;
    }
    lVar7 = *plVar2;
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar8 = (ulonglong)*(byte *)(lVar7 + -1 + uVar5);
      if (0x3a < uVar8) goto LAB_0041de1c;
      if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lVar6 + 0x28) = uVar5;
      if (uVar5 == *(ulonglong *)(lVar6 + 0x20)) goto LAB_0041dc4e;
    }
    if (uVar8 != 0x3a) {
LAB_0041de1c:
      local_f8 = 6;
      lVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::peek_error(lVar6,&local_f8);
      uVar10 = extraout_XMM0_Da_01;
      goto joined_r0x0041dd71;
    }
    *(ulonglong *)(lVar6 + 0x28) = uVar5;
    uVar10 = deserialize_struct::
             <<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                       (&local_148,lVar6);
    if (local_148 == -1) {
      lVar7 = CONCAT44(uStack_13c,uStack_140);
      goto joined_r0x0041dd71;
    }
    local_c8 = (undefined4)local_118;
    uStack_c4 = local_118._4_4_;
    uStack_c0 = uStack_110;
    uStack_bc = uStack_10c;
    local_d8 = local_128;
    uStack_d4 = uStack_124;
    uStack_d0 = uStack_120;
    uStack_cc = uStack_11c;
    local_e8 = local_138;
    iStack_e4 = iStack_134;
    uStack_e0 = uStack_130;
    uStack_dc = uStack_12c;
    local_f8 = local_148;
    local_68 = local_158;
    uVar10 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::insert(&local_148,&local_a8,local_70,&local_f8);
    pcVar9 = (code *)PTR_parse_str_007998f8;
    if (local_148 != -1) {
      if (local_148 != 0) {
        uVar10 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
      if ((CONCAT44(uStack_12c,uStack_130) != -1) && (CONCAT44(uStack_12c,uStack_130) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
    }
    goto LAB_0041da3d;
  }
  lVar7 = CONCAT44(uStack_13c,uStack_140);
LAB_0041dc86:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_a8);
  local_f8 = 0;
LAB_0041dc95:
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  local_e8 = (undefined4)local_58;
  iStack_e4 = local_58._4_4_;
  uStack_e0 = (undefined4)uStack_50;
  uStack_dc = uStack_50._4_4_;
  local_d8 = (undefined4)local_48;
  uStack_d4 = local_48._4_4_;
  uStack_d0 = (undefined4)uStack_40;
  uStack_cc = uStack_40._4_4_;
  uStack_f0 = lVar7;
  lVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::end_map(param_2);
  lVar6 = uStack_f0;
  local_128 = local_d8;
  uStack_124 = uStack_d4;
  uStack_120 = uStack_d0;
  uStack_11c = uStack_cc;
  local_138 = local_e8;
  iStack_134 = iStack_e4;
  uStack_130 = uStack_e0;
  uStack_12c = uStack_dc;
  local_148 = local_f8;
  uStack_140 = (undefined4)uStack_f0;
  uStack_13c = uStack_f0._4_4_;
  local_118 = lVar7;
  if (local_f8 == 0) {
    if (lVar7 != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(lVar7);
      goto LAB_0041dda0;
    }
  }
  else {
    if (lVar7 == 0) {
      local_150[4] = CONCAT44(uStack_d4,local_d8);
      local_150[5] = CONCAT44(uStack_cc,uStack_d0);
      local_150[2] = CONCAT44(iStack_e4,local_e8);
      local_150[3] = CONCAT44(uStack_dc,uStack_e0);
      *local_150 = local_f8;
      local_150[1] = uStack_f0;
      return local_150;
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_148);
    lVar6 = lVar7;
LAB_0041dda0:
  }
LAB_0041dda3:
  lVar6 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (lVar6,param_2);
LAB_0041ddab:
  local_150[1] = lVar6;
  *local_150 = 0;
  return local_150;
}


