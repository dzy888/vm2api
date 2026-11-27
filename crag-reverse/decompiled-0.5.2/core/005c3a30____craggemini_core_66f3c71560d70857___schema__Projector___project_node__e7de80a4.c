// 005c3a30 <<craggemini_core[66f3c71560d70857]::schema::Projector>::project_node::{closure#3}>

/* <serde_json[dc3825464c436029]::map::Entry>::or_insert_with::<<craggemini_core[66f3c71560d70857]::schema::Projector>::project_node::{closure#3}>
    */

longlong __rustcall
<serde_json[dc3825464c436029]::map::Entry>::or_insert_with::
<<craggemini_core[66f3c71560d70857]::schema::Projector>::project_node::_closure_3_>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  undefined1 local_a8 [8];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88 [2];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  
  if (*param_1 == -1) {
    local_88[0] = param_1[1] + param_1[3] * 0x20;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 < 0) {
LAB_005c3a59:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (lVar1 == 0) {
      lVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar3 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar3 == 0) goto LAB_005c3a59;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar1);
    }
    local_a8[0] = 3;
    local_38 = param_1[6];
    local_68 = (undefined4)*param_1;
    uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_60 = (undefined4)param_1[1];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_58 = (undefined4)param_1[2];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_50 = (undefined4)param_1[3];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_48 = (undefined4)param_1[4];
    uStack_44 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_40 = (undefined4)param_1[5];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_a0 = lVar1;
    local_98 = lVar3;
    local_90 = lVar1;
    <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert_entry(local_88,&local_68,local_a8);
    local_88[0] = local_78 * 0x20 + local_88[0];
  }
  return local_88[0];
}


