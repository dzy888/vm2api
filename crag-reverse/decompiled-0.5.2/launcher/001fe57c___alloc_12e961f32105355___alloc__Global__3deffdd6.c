// 001fe57c <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::split::<alloc[12e961f32105355]::alloc::Global>
    */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
::split::<alloc[12e961f32105355]::alloc::Global>(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined8 local_98 [15];
  
  lVar3 = (*(code *)PTR_new_uninit_in_0021ac28)();
  *(undefined8 *)(lVar3 + 0x4d0) = 0;
  *(undefined2 *)(lVar3 + 0x532) = 0;
  (*(code *)PTR_split_leaf_data_0021ac88)(extraout_XMM0_Da,lVar3);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar5 = local_98;
  puVar6 = param_1;
  for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  param_1[0x11] = lVar3;
  param_1[0x12] = 0;
  return param_1;
}


