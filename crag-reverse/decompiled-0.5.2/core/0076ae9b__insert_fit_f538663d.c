// 0076ae9b insert_fit

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::Edge>>::insert_fit */

longlong * __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
::insert_fit(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_b8 [14];
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  lVar2 = *param_2;
  lVar3 = param_2[2];
  uVar1 = *(ushort *)(lVar2 + 0x532);
  local_48 = param_2;
  if ((ulonglong)uVar1 < lVar3 + 1U) {
    *(undefined8 *)(lVar2 + lVar3 * 8 + 0x4d8) = param_3;
    puVar5 = local_b8;
    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    lVar7 = (ulonglong)uVar1 - lVar3;
    local_40 = param_3;
    local_38 = param_4;
    (*(code *)PTR_memmove_00799258)(lVar3 + 1U,lVar7 * 8);
    *(undefined8 *)(lVar2 + 0x4d8 + lVar3 * 8) = local_40;
    puVar5 = local_38;
    puVar6 = local_b8;
    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    (*(code *)PTR_memmove_00799258)(0,lVar7 * 0x70);
  }
  puVar5 = local_b8;
  puVar6 = (undefined8 *)(lVar3 * 0x70 + lVar2);
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(ushort *)(lVar2 + 0x532) = uVar1 + 1;
  lVar4 = local_48[1];
  *param_1 = lVar2;
  param_1[1] = lVar4;
  param_1[2] = lVar3;
  return param_1;
}


