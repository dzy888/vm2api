// 00720c80 or_insert

/* <serde_json[dc3825464c436029]::map::Entry>::or_insert */

longlong __rustcall
<serde_json[dc3825464c436029]::map::Entry>::or_insert(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  if (*param_1 == -1) {
    lVar1 = param_1[3];
    lVar2 = param_1[1];
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_2);
    return lVar1 * 0x20 + lVar2;
  }
  local_18 = param_1[6];
  local_48 = *param_1;
  lStack_40 = param_1[1];
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  local_28 = (undefined4)param_1[4];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_20 = (undefined4)param_1[5];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = param_2[4];
  uStack_74 = param_2[5];
  uStack_70 = param_2[6];
  uStack_6c = param_2[7];
  <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::insert_entry(local_68,&local_48,&local_88);
  return local_58 * 0x20 + local_68[0];
}


