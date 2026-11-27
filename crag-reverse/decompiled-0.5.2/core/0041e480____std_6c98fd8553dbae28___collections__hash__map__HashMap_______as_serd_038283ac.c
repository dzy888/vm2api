// 0041e480 <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_map::<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,
   _, _> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<craggemini_core[66f3c71560d70857]::resume::ModelFamily,
   craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,
   std[6c98fd8553dbae28]::hash::random::RandomState>> */

longlong * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_map::
<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong in_FS_OFFSET;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 local_f1;
  longlong *local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < *(ulonglong *)(param_2 + 0x20)) {
    lVar5 = *(longlong *)(param_2 + 0x18);
    do {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(lVar5 + -1 + uVar4);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 != 0x7b) {
          lVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_2,&local_f1,&DAT_0078a1a0);
          goto LAB_0041e7bd;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          local_e8 = 0x18;
          goto LAB_0041e4e6;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar4;
        local_90 = 1;
        local_f0 = param_1;
        local_98 = param_2;
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_c8 = *(longlong *)(in_FS_OFFSET + -0x38);
          lVar5 = *(longlong *)(in_FS_OFFSET + -0x30);
        }
        else {
          local_c8 = (*(code *)PTR_hashmap_random_keys_00799248)();
          *(longlong *)(in_FS_OFFSET + -0x38) = local_c8;
          *(longlong *)(in_FS_OFFSET + -0x30) = lVar5;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(longlong *)(in_FS_OFFSET + -0x38) = local_c8 + 1;
        <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
        <alloc[12e961f32105355]::alloc::Global>(&local_b8,0x20,0);
        local_e8 = local_b8;
        uStack_e0 = CONCAT44(uStack_ac,uStack_b0);
        local_d8 = local_a8;
        lStack_d0 = lStack_a0;
        lStack_c0 = lVar5;
        goto LAB_0041e57d;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != *(ulonglong *)(param_2 + 0x20));
  }
  local_e8 = 5;
LAB_0041e4e6:
  lVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_e8);
  goto LAB_0041e7c8;
LAB_0041e57d:
  uVar9 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
          ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                    (&local_b8,&local_98);
  lVar5 = local_98;
  if ((char)local_b8 == '\x01') goto LAB_0041e6a5;
  if (local_b8._1_1_ != '\x01') {
    local_88 = local_d8;
    lStack_80 = lStack_d0;
    local_78 = local_c8;
    lStack_70 = lStack_c0;
    lVar6 = local_e8;
    param_1 = local_f0;
    lVar8 = uStack_e0;
    goto LAB_0041e6e2;
  }
  uVar9 = deserialize_enum::
          <<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (&local_b8,local_98);
  if ((char)local_b8 == '\x01') goto LAB_0041e6a5;
  uVar4 = *(ulonglong *)(lVar5 + 0x28);
  if (*(ulonglong *)(lVar5 + 0x20) <= uVar4) {
LAB_0041e67b:
    local_b8 = 3;
    local_60 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(lVar5,&local_b8);
    uVar9 = extraout_XMM0_Da;
    param_1 = local_f0;
    goto joined_r0x0041e6b7;
  }
  uVar3 = local_b8._1_1_;
  while( true ) {
    uVar4 = uVar4 + 1;
    uVar7 = (ulonglong)*(byte *)(*(longlong *)(lVar5 + 0x18) + -1 + uVar4);
    if (0x3a < uVar7) goto LAB_0041e7d9;
    if ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0) break;
    *(ulonglong *)(lVar5 + 0x28) = uVar4;
    if (uVar4 == *(ulonglong *)(lVar5 + 0x20)) goto LAB_0041e67b;
  }
  if (uVar7 != 0x3a) {
LAB_0041e7d9:
    local_b8 = 6;
    local_60 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
               ::peek_error(lVar5,&local_b8);
    uVar9 = extraout_XMM0_Da_00;
    param_1 = local_f0;
    goto joined_r0x0041e6b7;
  }
  *(ulonglong *)(lVar5 + 0x28) = uVar4;
  uVar9 = deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (&local_60,lVar5);
  param_1 = local_f0;
  if ((char)uStack_4c == -1) goto joined_r0x0041e6b7;
  local_40 = local_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  local_48 = local_60;
  <hashbrown[b5c94476ffc33875]::map::HashMap<craggemini_core[66f3c71560d70857]::resume::ModelFamily,craggemini_core[66f3c71560d70857]::pool::FamilyCooldownEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::insert(&local_b8,&local_e8,uVar3,&local_48);
  goto LAB_0041e57d;
LAB_0041e6a5:
  param_1 = local_f0;
  local_60 = CONCAT44(uStack_ac,uStack_b0);
joined_r0x0041e6b7:
  local_f0 = param_1;
  if ((uStack_e0 != 0) && (uStack_e0 * 0x21 != -0x31)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,0x10);
  }
  lVar6 = 0;
  lVar8 = local_60;
LAB_0041e6e2:
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  local_d8 = local_88;
  lStack_d0 = lStack_80;
  local_c8 = local_78;
  lStack_c0 = lStack_70;
  local_e8 = lVar6;
  uStack_e0 = lVar8;
  lVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::end_map(param_2);
  if (lVar6 == 0) {
    if (lVar5 != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(lVar5);
    }
    lVar5 = lVar8;
  }
  else {
    if (lVar5 == 0) {
      param_1[4] = local_78;
      param_1[5] = lStack_70;
      param_1[2] = local_88;
      param_1[3] = lStack_80;
      *param_1 = lVar6;
      param_1[1] = lVar8;
      return param_1;
    }
    if ((lVar8 != 0) && (lVar8 * 0x21 != -0x31)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(lVar8 * 0x20,0x10);
    }
  }
LAB_0041e7bd:
  lVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (lVar5,param_2);
LAB_0041e7c8:
  param_1[1] = lVar5;
  *param_1 = 0;
  return param_1;
}


