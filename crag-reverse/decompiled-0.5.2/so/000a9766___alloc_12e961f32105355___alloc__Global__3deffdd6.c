// 000a9766 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,
   alloc[12e961f32105355]::collections::btree::node::marker::Edge>>::insert::<alloc[12e961f32105355]::alloc::Global>
    */

longlong __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
::insert::<alloc[12e961f32105355]::alloc::Global>
          (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 auStack_b0 [8];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_60 = *param_2;
  if (*(ushort *)(local_60 + 0x532) < 0xb) {
    (*(code *)PTR_insert_fit_000c45f8)(param_4,param_3);
    *(undefined8 *)(param_1 + 8) = 2;
    *(undefined8 *)(param_1 + 0x98) = local_128;
    *(undefined8 *)(param_1 + 0xa0) = uStack_120;
    *(undefined8 *)(param_1 + 0xa8) = local_118;
  }
  else {
    uVar2 = param_2[2];
    if (uVar2 < 5) {
      local_50 = 4;
      bVar3 = 0;
    }
    else if (uVar2 == 5) {
      bVar3 = 0;
      local_50 = 5;
    }
    else if (uVar2 == 6) {
      local_50 = 5;
      bVar3 = 1;
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 - 7;
      local_50 = 6;
      bVar3 = 1;
    }
    local_58 = param_2[1];
    (*(code *)PTR_<alloc[12e961f32105355]::alloc::Global>_000c4600)();
    uVar1 = (ulonglong)bVar3;
    local_78 = auStack_b0[uVar1 * 4];
    uStack_74 = auStack_b0[uVar1 * 4 + 1];
    uStack_70 = auStack_b0[uVar1 * 4 + 2];
    uStack_6c = auStack_b0[uVar1 * 4 + 3];
    local_68 = uVar2;
    (*(code *)PTR_insert_fit_000c45f8)(param_4,param_3);
    local_48 = local_90;
    uStack_44 = uStack_8c;
    uStack_40 = uStack_88;
    uStack_3c = uStack_84;
    (*(code *)PTR_memcpy_000c3aa8)(local_90,0x98);
    *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_44,local_48);
    *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_3c,uStack_40);
    *(undefined8 *)(param_1 + 0xa8) = local_80;
  }
  return param_1;
}


