// 000aa775 split_leaf_data

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Internal>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::split_leaf_data
   <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::split_leaf_data */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Internal>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
::split_leaf_data(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 local_a8 [14];
  undefined8 local_38;
  
  lVar4 = *param_2;
  uVar1 = param_2[2];
  uVar7 = ~uVar1 + (ulonglong)*(ushort *)(lVar4 + 0x532);
  *(short *)(param_3 + 0x532) = (short)uVar7;
  local_38 = *(undefined8 *)(lVar4 + 0x4d8 + uVar1 * 8);
  puVar5 = (undefined8 *)(uVar1 * 0x70 + lVar4);
  puVar6 = local_a8;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (0xb < uVar7) {
    (*(code *)PTR_slice_index_fail_000c3bb0)
              (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_000c2408,0xb);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  (*(code *)PTR_memcpy_000c3aa8)(0,uVar7 * 8);
  (*(code *)PTR_memcpy_000c3aa8)();
  *(short *)(lVar4 + 0x532) = (short)uVar1;
  puVar5 = local_a8;
  puVar6 = param_1;
  for (lVar4 = 0xe; puVar6 = puVar6 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  *param_1 = local_38;
  return param_1;
}


