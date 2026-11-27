// 001ff2e3 push_with_handle

/* <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Leaf>>::push_with_handle */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>>
::push_with_handle(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  lVar1 = *param_2;
  uVar5 = (ulonglong)*(ushort *)(lVar1 + 0x532);
  if (10 < uVar5) {
    (*(code *)PTR_panic_00219ca8)
              (param_4,&
                       PTR_anon_0a2e2ea1a26f4ece9c568db345fec2ca_0_llvm_16814989741381496278_002184e0
              );
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(ushort *)(lVar1 + 0x532) = *(ushort *)(lVar1 + 0x532) + 1;
  *(undefined8 *)(lVar1 + 0x4d8 + uVar5 * 8) = param_3;
  puVar4 = (undefined8 *)(uVar5 * 0x70 + lVar1);
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  lVar3 = param_2[1];
  *param_1 = lVar1;
  param_1[1] = lVar3;
  param_1[2] = uVar5;
  return;
}


