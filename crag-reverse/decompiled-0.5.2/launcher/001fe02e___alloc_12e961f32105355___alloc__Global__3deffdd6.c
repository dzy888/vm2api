// 001fe02e <alloc[12e961f32105355]::alloc::Global>

/* <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Owned,
   u64, gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,
   alloc[12e961f32105355]::collections::btree::node::marker::Internal>>::new_internal::<alloc[12e961f32105355]::alloc::Global>
    */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Owned,u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation,alloc[12e961f32105355]::collections::btree::node::marker::Internal>>
::new_internal::<alloc[12e961f32105355]::alloc::Global>(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_8_ = (*(code *)PTR_new_uninit_in_0021ac38)();
  *(undefined8 *)(auVar2._0_8_ + 0x4d0) = 0;
  *(undefined2 *)(auVar2._0_8_ + 0x532) = 0;
  *(longlong *)(auVar2._0_8_ + 0x538) = param_1;
  if (param_2 + 1 == 0) {
    (*(code *)PTR_unwrap_failed_00219e58)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(longlong *)(param_1 + 0x4d0) = auVar2._0_8_;
  *(undefined2 *)(param_1 + 0x530) = 0;
  auVar2._8_8_ = param_2 + 1;
  return auVar2;
}


