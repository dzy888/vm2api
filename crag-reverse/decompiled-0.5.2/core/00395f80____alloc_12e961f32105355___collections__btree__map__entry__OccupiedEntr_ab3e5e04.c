// 00395f80 <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::remove_kv::{closure#0},alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value,
   alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::remove_kv_tracking::<<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::remove_kv::{closure#0},
   alloc[12e961f32105355]::alloc::Global> */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
::remove_kv_tracking::
<<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
          (undefined8 *param_1,longlong *param_2)

{
  ushort *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_60 [11];
  
  lVar12 = param_2[1];
  if (lVar12 == 0) {
    lStack_b0 = 0;
    local_b8 = *param_2;
    local_a8 = param_2[2];
    <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
    ::remove_leaf_kv::
    <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
              (param_1,&local_b8);
    return param_1;
  }
  local_60[0] = *(longlong *)(*param_2 + 0x278 + param_2[2] * 8);
  uVar10 = lVar12 - 1;
  if (uVar10 != 0) {
    if ((uVar10 & 7) != 0) {
      uVar13 = 0;
      do {
        local_60[0] = *(longlong *)
                       (local_60[0] + 0x278 + (ulonglong)*(ushort *)(local_60[0] + 0x272) * 8);
        uVar13 = uVar13 + 1;
      } while ((uVar10 & 7) != uVar13);
      uVar10 = uVar10 - uVar13;
    }
    if (6 < lVar12 - 2U) {
      do {
        lVar12 = *(longlong *)
                  (local_60[0] + 0x278 + (ulonglong)*(ushort *)(local_60[0] + 0x272) * 8);
        lVar12 = *(longlong *)(lVar12 + 0x278 + (ulonglong)*(ushort *)(lVar12 + 0x272) * 8);
        lVar12 = *(longlong *)(lVar12 + 0x278 + (ulonglong)*(ushort *)(lVar12 + 0x272) * 8);
        lVar12 = *(longlong *)(lVar12 + 0x278 + (ulonglong)*(ushort *)(lVar12 + 0x272) * 8);
        lVar12 = *(longlong *)(lVar12 + 0x278 + (ulonglong)*(ushort *)(lVar12 + 0x272) * 8);
        lVar12 = *(longlong *)(lVar12 + 0x278 + (ulonglong)*(ushort *)(lVar12 + 0x272) * 8);
        lVar12 = *(longlong *)(lVar12 + 0x278 + (ulonglong)*(ushort *)(lVar12 + 0x272) * 8);
        local_60[0] = *(longlong *)(lVar12 + 0x278 + (ulonglong)*(ushort *)(lVar12 + 0x272) * 8);
        uVar10 = uVar10 - 8;
      } while (uVar10 != 0);
    }
  }
  local_60[2] = (ulonglong)*(ushort *)(local_60[0] + 0x272) - 1;
  local_60[1] = 0;
  <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
  ::remove_leaf_kv::
  <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
            (&local_b8,local_60);
  if (*(ushort *)(local_80 + 0x272) <= local_70) {
    do {
      puVar1 = (ushort *)(local_80 + 0x270);
      local_70 = (ulonglong)*puVar1;
      local_80 = *(longlong *)(local_80 + 0x160);
      local_78 = local_78 + 1;
    } while (*(ushort *)(local_80 + 0x272) <= *puVar1);
  }
  lVar12 = local_70 * 0x20;
  uVar3 = *(undefined8 *)(local_80 + 0x178 + local_70 * 0x18);
  puVar2 = (undefined8 *)(local_80 + 0x168 + local_70 * 0x18);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  plVar11 = (longlong *)(local_80 + 0x168 + local_70 * 0x18);
  *plVar11 = local_b8;
  plVar11[1] = lStack_b0;
  *(longlong *)(local_80 + 0x178 + local_70 * 0x18) = local_a8;
  uVar6 = *(undefined8 *)(local_80 + lVar12);
  uVar7 = ((undefined8 *)(local_80 + lVar12))[1];
  puVar2 = (undefined8 *)(local_80 + 0x10 + lVar12);
  uVar8 = *puVar2;
  uVar9 = puVar2[1];
  *(undefined8 *)(local_80 + lVar12) = uStack_a0;
  ((undefined8 *)(local_80 + lVar12))[1] = local_98;
  puVar2 = (undefined8 *)(local_80 + 0x10 + lVar12);
  *puVar2 = uStack_90;
  puVar2[1] = local_88;
  if (local_78 == 0) {
    lVar12 = local_70 + 1;
  }
  else {
    plVar11 = (longlong *)(local_80 + local_70 * 8 + 0x280);
    uVar10 = local_78;
    if ((local_78 & 7) != 0) {
      uVar10 = 0;
      do {
        local_80 = *plVar11;
        plVar11 = (longlong *)(local_80 + 0x278);
        uVar10 = uVar10 + 1;
      } while ((local_78 & 7) != uVar10);
      uVar10 = local_78 - uVar10;
    }
    lVar12 = 0;
    if (7 < local_78) {
      do {
        lVar12 = 0;
        local_80 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(*plVar11 + 0x278) + 0x278) + 0x278) + 0x278
                          ) + 0x278) + 0x278) + 0x278);
        plVar11 = (longlong *)(local_80 + 0x278);
        uVar10 = uVar10 - 8;
      } while (uVar10 != 0);
    }
  }
  param_1[6] = uVar9;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[2] = uVar3;
  param_1[3] = uVar6;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[7] = local_80;
  param_1[8] = 0;
  param_1[9] = lVar12;
  return param_1;
}


