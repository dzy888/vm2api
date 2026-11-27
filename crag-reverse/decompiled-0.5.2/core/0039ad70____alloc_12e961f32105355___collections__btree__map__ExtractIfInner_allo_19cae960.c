// 0039ad70 <<alloc[12e961f32105355]::collections::btree::map::ExtractIfInner<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::ops::range::RangeFull>>::next<<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::retain<<craggemini_core[66f3c71560d70857]::schema::Projector>::project_node::{closure#0}>::{closure#0},alloc[12e961f32105355]::alloc::Global>::{closure#0},alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::remove_leaf_kv::<<alloc[12e961f32105355]::collections::btree::map::ExtractIfInner<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::ops::range::RangeFull>>::next<<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::retain<<craggemini_core[66f3c71560d70857]::schema::Projector>::project_node::{closure#0}>::{closure#0},
   alloc[12e961f32105355]::alloc::Global>::{closure#0}, alloc[12e961f32105355]::alloc::Global> */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
::remove_leaf_kv::
<<alloc[12e961f32105355]::collections::btree::map::ExtractIfInner<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::ops::range::RangeFull>>::next<<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::retain<<craggemini_core[66f3c71560d70857]::schema::Projector>::project_node::_closure_0_>::_closure_0_,alloc[12e961f32105355]::alloc::Global>::_closure_0_,alloc[12e961f32105355]::alloc::Global>
          (undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined *puVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 extraout_XMM0_Da;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar7 = PTR_memmove_00799258;
  lVar10 = *param_2;
  uVar12 = param_2[2];
  uVar3 = *(ushort *)(lVar10 + 0x272);
  local_58 = *(undefined8 *)(lVar10 + 0x178 + uVar12 * 0x18);
  puVar2 = (undefined4 *)(lVar10 + 0x168 + uVar12 * 0x18);
  local_68 = *puVar2;
  uStack_64 = puVar2[1];
  uStack_60 = puVar2[2];
  uStack_5c = puVar2[3];
  local_b0 = param_3;
  local_70 = param_1;
  (*(code *)PTR_memmove_00799258)(local_58,(~uVar12 + (ulonglong)uVar3) * 0x18);
  puVar2 = (undefined4 *)(lVar10 + uVar12 * 0x20);
  uStack_50 = *puVar2;
  uStack_4c = puVar2[1];
  uStack_48 = puVar2[2];
  uStack_44 = puVar2[3];
  puVar2 = (undefined4 *)(lVar10 + 0x10 + uVar12 * 0x20);
  uStack_40 = *puVar2;
  uStack_3c = puVar2[1];
  uStack_38 = puVar2[2];
  uStack_34 = puVar2[3];
  local_b8 = uVar12;
  (*(code *)puVar7)(uStack_50,(~uVar12 + (ulonglong)uVar3) * 0x20);
  uVar12 = local_b8;
  *(ushort *)(lVar10 + 0x272) = uVar3 - 1;
  lVar11 = param_2[1];
  if (4 < (ushort)(uVar3 - 1)) {
    goto LAB_0039b007;
  }
  lVar4 = *(longlong *)(lVar10 + 0x160);
  if (lVar4 == 0) {
    local_c0 = local_b8;
    local_d0 = lVar10;
    local_c8 = lVar11;
  }
  else {
    lVar1 = lVar11 + 1;
    uVar9 = (ulonglong)*(ushort *)(lVar10 + 0x270);
    if (uVar9 == 0) {
      if (*(short *)(lVar4 + 0x272) == 0) {
        (*(code *)PTR_panic_fmt_007991a8)
                  (lVar1,&
                         PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ee8
                  );
        goto LAB_0039b099;
      }
      local_80 = *(longlong *)(lVar4 + 0x280);
      local_98 = 0;
      local_90 = lVar10;
      if (0xb < (uint)uVar3 + (uint)*(ushort *)(local_80 + 0x272)) {
        local_a8 = lVar4;
        local_a0 = lVar1;
        local_88 = lVar11;
        local_78 = lVar11;
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::bulk_steal_right(&local_a8,1);
        goto LAB_0039af73;
      }
      local_a8 = lVar4;
      local_a0 = lVar1;
      local_88 = lVar11;
      local_78 = lVar11;
      <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
                (&local_d0,&local_a8,0,local_b8);
    }
    else {
      local_90 = *(longlong *)(lVar4 + 0x270 + uVar9 * 8);
      local_98 = uVar9 - 1;
      local_80 = lVar10;
      if ((uint)uVar3 + (uint)*(ushort *)(local_90 + 0x272) < 0xc) {
        local_a8 = lVar4;
        local_a0 = lVar1;
        local_88 = lVar11;
        local_78 = lVar11;
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
                  (&local_d0,&local_a8,1,local_b8);
      }
      else {
        local_a8 = lVar4;
        local_a0 = lVar1;
        local_88 = lVar11;
        local_78 = lVar11;
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::bulk_steal_left(&local_a8,1);
        uVar12 = uVar12 + 1;
LAB_0039af73:
        local_d0 = lVar10;
        local_c8 = lVar11;
        local_c0 = uVar12;
      }
    }
  }
  uVar12 = local_c0;
  lVar11 = local_c8;
  lVar10 = local_d0;
  if (*(longlong *)(local_d0 + 0x160) != 0) {
    cVar8 = <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
            ::fix_node_and_affected_ancestors::<alloc[12e961f32105355]::alloc::Global>
                      (*(longlong *)(local_d0 + 0x160),local_c8 + 1);
    if (cVar8 == '\0') {
      plVar5 = (longlong *)*local_b0;
      *local_b0 = 0;
      if (plVar5 == (longlong *)0x0) {
        (*(code *)PTR_unwrap_failed_00799278)();
      }
      else {
        if (plVar5[1] != 0) {
          lVar4 = *(longlong *)(*plVar5 + 0x278);
          *plVar5 = lVar4;
          plVar5[1] = plVar5[1] + -1;
          *(undefined8 *)(lVar4 + 0x160) = 0;
          (*(code *)PTR___rust_dealloc_00798fc8)(lVar4,8);
          *local_b0 = (longlong)plVar5;
          goto LAB_0039b007;
        }
        (*(code *)PTR_panic_00799338)
                  (extraout_XMM0_Da,
                   &anon_f98aad3bb3e6c606de146d8493d2cfe7_25_llvm_13619962878011216390);
      }
LAB_0039b099:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
  }
LAB_0039b007:
  local_70[6] = CONCAT44(uStack_34,uStack_38);
  local_70[4] = CONCAT44(uStack_44,uStack_48);
  local_70[5] = CONCAT44(uStack_3c,uStack_40);
  local_70[2] = local_58;
  local_70[3] = CONCAT44(uStack_4c,uStack_50);
  *local_70 = CONCAT44(uStack_64,local_68);
  local_70[1] = CONCAT44(uStack_5c,uStack_60);
  local_70[7] = lVar10;
  local_70[8] = lVar11;
  local_70[9] = uVar12;
  return;
}


