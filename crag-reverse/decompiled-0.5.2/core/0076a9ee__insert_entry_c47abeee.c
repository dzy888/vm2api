// 0076a9ee insert_entry

/* <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u64,
   gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::insert_entry */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>
::insert_entry(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if (param_2[2] == 0) {
    plVar2 = (longlong *)*param_2;
    lVar1 = (*(code *)PTR_new_uninit_in_0079b1e0)();
    *(undefined8 *)(lVar1 + 0x4d0) = 0;
    *(undefined2 *)(lVar1 + 0x532) = 0;
    *plVar2 = lVar1;
    plVar2[1] = 0;
    (*(code *)PTR_push_with_handle_0079b270)(param_3,param_2[1]);
  }
  else {
    (*(code *)
      PTR_<alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::insert_entry::_closure_0_>_0079b230
    )(param_3,param_2[1],param_2);
    plVar2 = (longlong *)*param_2;
  }
  plVar2[2] = plVar2[2] + 1;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  param_1[2] = local_30;
  param_1[3] = plVar2;
  return param_1;
}


