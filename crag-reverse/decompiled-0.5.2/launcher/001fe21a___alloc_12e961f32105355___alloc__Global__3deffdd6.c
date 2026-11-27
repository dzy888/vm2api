// 001fe21a <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Internal>,
   alloc[12e961f32105355]::collections::btree::node::marker::Edge>>::insert::<alloc[12e961f32105355]::alloc::Global>
    */

longlong __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Internal>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
::insert::<alloc[12e961f32105355]::alloc::Global>
          (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,longlong param_6)

{
  code *pcVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 auStack_88 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = param_2[1];
  local_38 = param_4;
  if (param_6 != local_48 + -1) {
    (*(code *)PTR_panic_00219ca8)
              (param_4,&
                       PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_00218438
              );
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_50 = *param_2;
  if (*(ushort *)(local_50 + 0x532) < 0xb) {
    (*(code *)PTR_insert_fit_0021ac68)(param_5,param_4);
    *(undefined8 *)(param_1 + 8) = 2;
  }
  else {
    uVar4 = param_2[2];
    if (uVar4 < 5) {
      local_40 = 4;
      bVar3 = 0;
    }
    else if (uVar4 == 5) {
      bVar3 = 0;
      local_40 = 5;
    }
    else if (uVar4 == 6) {
      bVar3 = 1;
      local_40 = 5;
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 - 7;
      bVar3 = 1;
      local_40 = 6;
    }
    (*(code *)PTR_<alloc[12e961f32105355]::alloc::Global>_0021ac70)();
    uVar2 = (ulonglong)bVar3;
    local_68 = auStack_88[uVar2 * 4];
    uStack_64 = auStack_88[uVar2 * 4 + 1];
    uStack_60 = auStack_88[uVar2 * 4 + 2];
    uStack_5c = auStack_88[uVar2 * 4 + 3];
    local_58 = uVar4;
    uVar5 = (*(code *)PTR_insert_fit_0021ac68)(param_5,local_38);
    (*(code *)PTR_memcpy_00219c60)(uVar5,0x98);
  }
  return param_1;
}


