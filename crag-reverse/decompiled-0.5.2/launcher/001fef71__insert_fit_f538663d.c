// 001fef71 insert_fit

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Internal>,
   alloc[12e961f32105355]::collections::btree::node::marker::Edge>>::insert_fit */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Internal>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
::insert_fit(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 local_b8 [14];
  undefined8 local_48;
  undefined8 *local_40;
  int local_34;
  
  local_48 = param_4;
  lVar1 = *param_1;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)*(ushort *)(lVar1 + 0x532);
  local_34 = *(ushort *)(lVar1 + 0x532) + 1;
  if (uVar4 < lVar2 + 1U) {
    *(undefined8 *)(lVar1 + lVar2 * 8 + 0x4d8) = param_2;
    puVar5 = local_b8;
    for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    local_40 = param_3;
    (*(code *)PTR_memmove_00219fb0)(param_4,(uVar4 - lVar2) * 8);
    *(undefined8 *)(lVar1 + 0x4d8 + lVar2 * 8) = param_2;
    puVar5 = local_40;
    puVar6 = local_b8;
    for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    (*(code *)PTR_memmove_00219fb0)(0,(uVar4 - lVar2) * 0x70);
  }
  puVar5 = local_b8;
  puVar6 = (undefined8 *)(lVar2 * 0x70 + lVar1);
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (lVar2 + 2U < uVar4 + 2) {
    (*(code *)PTR_memmove_00219fb0)(lVar1 + 0x538,(uVar4 - lVar2) * 8);
  }
  *(undefined8 *)(lVar1 + 0x540 + lVar2 * 8) = local_48;
  *(short *)(lVar1 + 0x532) = (short)local_34;
  if (lVar2 + 1U < uVar4 + 2) {
    uVar7 = lVar2 - 1;
    do {
      lVar2 = *(longlong *)(lVar1 + 0x548 + uVar7 * 8);
      *(longlong *)(lVar2 + 0x4d0) = lVar1;
      *(short *)(lVar2 + 0x530) = (short)uVar7 + 2;
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
  return;
}


