// 00580670 insert_entry

/* <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
::insert_entry(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2[4] == 0) {
    puVar5 = (undefined8 *)param_2[3];
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_30 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (local_30 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *local_30 = 0;
    *puVar5 = local_30;
    puVar5[1] = 0;
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar1 = param_2[2];
    *(undefined2 *)((longlong)local_30 + 0x112) = 1;
    local_30[1] = uVar3;
    local_30[2] = uVar4;
    local_30[3] = uVar1;
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
  }
  else {
    local_58 = param_2[6];
    local_68 = param_2[4];
    uStack_60 = param_2[5];
    local_38 = param_2[2];
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
    ::insert_recursing::
    <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::_closure_0_>
              (&local_30,&local_68,&local_48,param_2 + 3,param_2 + 7);
    puVar5 = (undefined8 *)param_2[3];
  }
  puVar5[2] = puVar5[2] + 1;
  uVar1 = param_2[3];
  *param_1 = local_30;
  *(undefined4 *)(param_1 + 1) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_24;
  *(undefined4 *)(param_1 + 2) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_1c;
  param_1[3] = uVar1;
  return param_1;
}


