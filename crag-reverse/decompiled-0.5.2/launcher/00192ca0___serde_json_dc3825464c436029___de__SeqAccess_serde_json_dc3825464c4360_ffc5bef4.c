// 00192ca0 <serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>

/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::ContextAccount>
   as 
   serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
    */

longlong * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<craggemini[b21da2d71f2da7a3]::ContextAccount>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<serde_json[dc3825464c436029]::de::SeqAccess<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  char local_78;
  char cStack_77;
  undefined6 uStack_76;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_f0 = 0;
  lStack_e8 = 8;
  local_e0 = 0;
  local_d8 = param_1;
  local_d0 = param_2;
  local_c8 = param_3;
  while (uVar6 = <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
                 ::next_element_seed::has_next_element::
                 <serde_json[dc3825464c436029]::read::SliceRead>(&local_78,&local_d0),
        local_78 != '\x01') {
    if (cStack_77 != '\x01') {
      local_d8[2] = local_e0;
      *local_d8 = local_f0;
      local_d8[1] = lStack_e8;
      return local_d8;
    }
    uVar6 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_struct::
            <<craggemini[b21da2d71f2da7a3]::ContextAccount_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                      (&local_78,local_d0,"ContextAccount",0xe,
                       &anon_b04ad85f475f72582d80b81ac363002b_10_llvm_18301838290376532492,3);
    lVar4 = local_e0;
    local_c0 = CONCAT62(uStack_76,CONCAT11(cStack_77,local_78));
    if (local_c0 == -2) break;
    local_80 = local_38;
    local_90 = local_48;
    uStack_8c = uStack_44;
    uStack_88 = uStack_40;
    uStack_84 = uStack_3c;
    local_a0 = local_58;
    uStack_9c = uStack_54;
    uStack_98 = uStack_50;
    uStack_94 = uStack_4c;
    local_b0 = local_68;
    uStack_ac = uStack_64;
    uStack_a8 = uStack_60;
    uStack_a4 = uStack_5c;
    uStack_b8 = local_70;
    if (local_e0 == local_f0) {
      <alloc[12e961f32105355]::raw_vec::RawVec<craggemini[b21da2d71f2da7a3]::ContextAccount>>::
      grow_one(&local_f0);
    }
    *(undefined8 *)(lStack_e8 + 0x40 + lVar4 * 0x48) = local_80;
    puVar1 = (undefined4 *)(lStack_e8 + 0x30 + lVar4 * 0x48);
    *puVar1 = local_90;
    puVar1[1] = uStack_8c;
    puVar1[2] = uStack_88;
    puVar1[3] = uStack_84;
    puVar1 = (undefined4 *)(lStack_e8 + 0x20 + lVar4 * 0x48);
    *puVar1 = local_a0;
    puVar1[1] = uStack_9c;
    puVar1[2] = uStack_98;
    puVar1[3] = uStack_94;
    puVar1 = (undefined4 *)(lStack_e8 + 0x10 + lVar4 * 0x48);
    *puVar1 = local_b0;
    puVar1[1] = uStack_ac;
    puVar1[2] = uStack_a8;
    puVar1[3] = uStack_a4;
    puVar1 = (undefined4 *)(lStack_e8 + lVar4 * 0x48);
    *puVar1 = (undefined4)local_c0;
    puVar1[1] = local_c0._4_4_;
    puVar1[2] = (undefined4)uStack_b8;
    puVar1[3] = uStack_b8._4_4_;
    local_e0 = lVar4 + 1;
  }
  plVar3 = local_d8;
  local_d8[1] = local_70;
  *local_d8 = -1;
  puVar2 = PTR___rust_dealloc_00219c40;
  if (local_e0 != 0) {
    lVar5 = lStack_e8 + 0x38;
    lVar4 = local_e0;
    do {
      if ((*(longlong *)(lVar5 + -0x38) != -1) && (*(longlong *)(lVar5 + -0x38) != 0)) {
        uVar6 = (*(code *)puVar2)(uVar6,1);
      }
      if ((*(longlong *)(lVar5 + -0x20) != -1) && (*(longlong *)(lVar5 + -0x20) != 0)) {
        uVar6 = (*(code *)puVar2)(uVar6,1);
      }
      if ((*(longlong *)(lVar5 + -8) != -1) && (*(longlong *)(lVar5 + -8) != 0)) {
        uVar6 = (*(code *)puVar2)(uVar6,1);
      }
      lVar5 = lVar5 + 0x48;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (local_f0 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar6,8);
  }
  return plVar3;
}


