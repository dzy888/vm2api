// 0039b0c0 <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::remove_kv::{closure#0},alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::remove_leaf_kv::<<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::remove_kv::{closure#0},
   alloc[12e961f32105355]::alloc::Global> */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
::remove_leaf_kv::
<<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
          (undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 *local_78;
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
  
  puVar5 = PTR_memmove_00799258;
  lVar9 = *param_2;
  uVar7 = param_2[2];
  uVar2 = *(ushort *)(lVar9 + 0x272);
  local_58 = *(undefined8 *)(lVar9 + 0x178 + uVar7 * 0x18);
  puVar1 = (undefined4 *)(lVar9 + 0x168 + uVar7 * 0x18);
  local_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  local_78 = param_3;
  local_70 = param_1;
  (*(code *)PTR_memmove_00799258)(local_58,(~uVar7 + (ulonglong)uVar2) * 0x18);
  puVar1 = (undefined4 *)(lVar9 + uVar7 * 0x20);
  uStack_50 = *puVar1;
  uStack_4c = puVar1[1];
  uStack_48 = puVar1[2];
  uStack_44 = puVar1[3];
  puVar1 = (undefined4 *)(lVar9 + 0x10 + uVar7 * 0x20);
  uStack_40 = *puVar1;
  uStack_3c = puVar1[1];
  uStack_38 = puVar1[2];
  uStack_34 = puVar1[3];
  (*(code *)puVar5)(uStack_50,(~uVar7 + (ulonglong)uVar2) * 0x20);
  *(ushort *)(lVar9 + 0x272) = uVar2 - 1;
  lVar10 = param_2[1];
  if (4 < (ushort)(uVar2 - 1)) goto LAB_0039b2fb;
  lVar3 = *(longlong *)(lVar9 + 0x160);
  if (lVar3 == 0) {
LAB_0039b2c5:
    local_c8 = lVar9;
    local_c0 = lVar10;
    local_b8 = uVar7;
  }
  else {
    local_a8 = lVar10 + 1;
    uVar8 = (ulonglong)*(ushort *)(lVar9 + 0x270);
    local_b0 = lVar3;
    local_90 = lVar10;
    local_80 = lVar10;
    if (uVar8 == 0) {
      if (*(short *)(lVar3 + 0x272) == 0) {
        (*(code *)PTR_panic_fmt_007991a8)
                  (local_a8,&
                            PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00787ee8
                  );
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      local_88 = *(longlong *)(lVar3 + 0x280);
      local_a0 = 0;
      local_98 = lVar9;
      if (0xb < (uint)uVar2 + (uint)*(ushort *)(local_88 + 0x272)) {
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::bulk_steal_right(&local_b0,1);
        goto LAB_0039b2c5;
      }
      <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
                (&local_c8,&local_b0,0,uVar7);
    }
    else {
      local_98 = *(longlong *)(lVar3 + 0x270 + uVar8 * 8);
      local_a0 = uVar8 - 1;
      local_88 = lVar9;
      if (0xb < (uint)uVar2 + (uint)*(ushort *)(local_98 + 0x272)) {
        <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::bulk_steal_left(&local_b0,1);
        uVar7 = uVar7 + 1;
        goto LAB_0039b2c5;
      }
      <alloc[12e961f32105355]::collections::btree::node::BalancingContext<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::merge_tracking_child_edge::<alloc[12e961f32105355]::alloc::Global>
                (&local_c8,&local_b0,1,uVar7);
    }
  }
  uVar7 = local_b8;
  lVar10 = local_c0;
  lVar9 = local_c8;
  if ((*(longlong *)(local_c8 + 0x160) != 0) &&
     (cVar6 = <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
              ::fix_node_and_affected_ancestors::<alloc[12e961f32105355]::alloc::Global>
                        (*(longlong *)(local_c8 + 0x160),local_c0 + 1), cVar6 == '\0')) {
    *local_78 = 1;
  }
LAB_0039b2fb:
  local_70[6] = CONCAT44(uStack_34,uStack_38);
  local_70[4] = CONCAT44(uStack_44,uStack_48);
  local_70[5] = CONCAT44(uStack_3c,uStack_40);
  local_70[2] = local_58;
  local_70[3] = CONCAT44(uStack_4c,uStack_50);
  *local_70 = CONCAT44(uStack_64,local_68);
  local_70[1] = CONCAT44(uStack_5c,uStack_60);
  local_70[7] = lVar9;
  local_70[8] = lVar10;
  local_70[9] = uVar7;
  return;
}


