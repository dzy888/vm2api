// 0076b3b1 push

/* <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Internal>>::push */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Internal>>
::push(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  
  if (param_5 == param_1[1] + -1) {
    lVar2 = *param_1;
    uVar1 = *(ushort *)(lVar2 + 0x532);
    uVar5 = (ulonglong)uVar1;
    if (uVar5 < 0xb) {
      *(ushort *)(lVar2 + 0x532) = uVar1 + 1;
      *(undefined8 *)(lVar2 + 0x4d8 + uVar5 * 8) = param_2;
      puVar7 = (undefined8 *)(uVar5 * 0x70 + lVar2);
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *param_3;
        param_3 = param_3 + 1;
        puVar7 = puVar7 + 1;
      }
      *(longlong *)(lVar2 + 0x540 + uVar5 * 8) = param_4;
      *(longlong *)(param_4 + 0x4d0) = lVar2;
      *(ushort *)(param_4 + 0x530) = uVar1 + 1;
      return;
    }
    ppuVar6 = &PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00797700;
  }
  else {
    ppuVar6 = &PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_007976e8;
  }
  (*(code *)PTR_panic_00799338)(param_1[1] + -1,ppuVar6);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


