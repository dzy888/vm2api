// 00580780 insert_entry

/* <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::insert_entry */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::insert_entry(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_2[4] == 0) {
    puVar5 = (undefined8 *)param_2[3];
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_38 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (local_38 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_38[0x2c] = 0;
    *puVar5 = local_38;
    puVar5[1] = 0;
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar1 = param_2[2];
    *(undefined2 *)((longlong)local_38 + 0x272) = 1;
    local_38[0x2d] = uVar3;
    local_38[0x2e] = uVar4;
    local_38[0x2f] = uVar1;
    uVar1 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *local_38 = *param_3;
    local_38[1] = uVar1;
    local_38[2] = uVar3;
    local_38[3] = uVar4;
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
  }
  else {
    local_68 = param_2[6];
    local_78 = param_2[4];
    uStack_70 = param_2[5];
    local_48 = param_2[2];
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
    ::insert_recursing::
    <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::insert_entry::_closure_0_>
              (&local_38,&local_78,&local_58,param_3,param_2 + 3,param_2 + 7);
    puVar5 = (undefined8 *)param_2[3];
  }
  puVar5[2] = puVar5[2] + 1;
  uVar1 = param_2[3];
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
  *(undefined4 *)(param_1 + 2) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_24;
  param_1[3] = uVar1;
  return param_1;
}


