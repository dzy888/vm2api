// 001fe365 <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::insert_entry::{closure#0}>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::Edge>>::insert_recursing::<alloc[12e961f32105355]::alloc::Global,
   <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u64,
   gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::insert_entry::{closure#0}> */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
::insert_recursing::
<alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::insert_entry::_closure_0_>
          (undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  longlong *in_R8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_190 [14];
  undefined8 local_120;
  int local_118 [28];
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  (*(code *)PTR_<alloc[12e961f32105355]::alloc::Global>_0021ac40)();
  lVar6 = local_a0;
  lVar5 = local_a8;
  uVar11 = local_120;
  puVar3 = PTR_<alloc[12e961f32105355]::alloc::Global>_0021ac60;
  if (local_118[0] == 2) {
    *param_1 = local_88;
    param_1[1] = uStack_80;
  }
  else {
    local_58 = in_R8;
    local_50 = param_1;
    piVar7 = local_118;
    puVar8 = local_190;
    for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = *(undefined8 *)piVar7;
      piVar7 = piVar7 + 2;
      puVar8 = puVar8 + 1;
    }
    local_48 = uStack_80;
    local_38 = local_88;
    local_40 = local_78;
    lVar4 = *(longlong *)(lVar5 + 0x4d0);
    uVar9 = local_98;
    uVar10 = local_90;
    if (lVar4 != 0) {
      do {
        local_68 = lVar6 + 1;
        local_60 = (ulonglong)*(ushort *)(lVar5 + 0x530);
        local_70 = lVar4;
        (*(code *)puVar3)(local_190,uVar11,local_98,local_90);
        lVar6 = local_a0;
        lVar5 = local_a8;
        uVar11 = local_120;
        if (local_118[0] == 2) goto LAB_001fe50f;
        piVar7 = local_118;
        puVar8 = local_190;
        for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar8 = *(undefined8 *)piVar7;
          piVar7 = piVar7 + 2;
          puVar8 = puVar8 + 1;
        }
        lVar4 = *(longlong *)(lVar5 + 0x4d0);
        uVar9 = local_98;
        uVar10 = local_90;
      } while (lVar4 != 0);
    }
    puVar8 = local_190;
    piVar7 = local_118;
    for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)piVar7 = *puVar8;
      puVar8 = puVar8 + 1;
      piVar7 = piVar7 + 2;
    }
    plVar1 = (longlong *)*local_58;
    if (*plVar1 == 0) {
      (*(code *)PTR_unwrap_failed_00219e58)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_70 = (*(code *)PTR_<alloc[12e961f32105355]::alloc::Global>_0021ac30)();
    *plVar1 = local_70;
    plVar1[1] = lVar6;
    (*(code *)PTR_push_0021ac80)(uVar9,local_118,uVar10);
LAB_001fe50f:
    *local_50 = local_38;
    local_50[1] = local_48;
    local_78 = local_40;
    param_1 = local_50;
  }
  param_1[2] = local_78;
  return param_1;
}


