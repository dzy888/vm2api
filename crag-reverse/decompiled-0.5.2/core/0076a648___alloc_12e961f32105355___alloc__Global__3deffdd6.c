// 0076a648 <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Internal>,
   alloc[12e961f32105355]::collections::btree::node::marker::KV>>::split::<alloc[12e961f32105355]::alloc::Global>
    */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Internal>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
::split::<alloc[12e961f32105355]::alloc::Global>(undefined8 *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 local_b0 [15];
  longlong local_38;
  
  local_38 = *param_2;
  uVar1 = *(ushort *)(local_38 + 0x532);
  lVar5 = (*(code *)PTR_new_uninit_in_0079b1f0)();
  *(undefined8 *)(lVar5 + 0x4d0) = 0;
  *(undefined2 *)(lVar5 + 0x532) = 0;
  (*(code *)PTR_split_leaf_data_0079b240)();
  lVar4 = local_38;
  uVar11 = (ulonglong)*(ushort *)(lVar5 + 0x532);
  if (uVar11 < 0xc) {
    lVar2 = param_2[2];
    if ((ulonglong)uVar1 - lVar2 == uVar11 + 1) {
      (*(code *)PTR_memcpy_00799008)(lVar2,(int)(uVar11 + 1) << 3);
      lVar2 = param_2[1];
      uVar6 = 0;
      do {
        uVar7 = uVar6 + (uVar6 < uVar11);
        lVar8 = *(longlong *)(lVar5 + 0x538 + uVar6 * 8);
        *(longlong *)(lVar8 + 0x4d0) = lVar5;
        *(short *)(lVar8 + 0x530) = (short)uVar6;
        if (uVar11 <= uVar6) break;
        uVar6 = uVar7;
      } while (uVar7 <= uVar11);
      puVar9 = local_b0;
      puVar10 = param_1;
      for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      param_1[0xf] = lVar4;
      param_1[0x10] = lVar2;
      param_1[0x11] = lVar5;
      param_1[0x12] = lVar2;
      return param_1;
    }
    (*(code *)PTR_panic_00799338)
              (lVar2,&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00797658
              );
  }
  else {
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_anon_8f9fb481ca6dde113ed424f4ae2d1b7e_0_llvm_18113579616407530955_00797640,0xc);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


