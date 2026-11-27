// 004c3540 accounts_list

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list
          (undefined1 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list
            (&local_b0,*(longlong *)(param_2 + 0x170) + 0x10);
  lVar3 = local_b0;
  uStack_98 = uStack_a8 + local_a0 * 8;
  local_b0 = uStack_a8;
  local_a0 = lVar3;
  local_90 = param_2;
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list::{closure#0}>>>
  ::from_iter(&local_88,&local_b0);
  local_70 = 0;
  local_60 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *puVar2 = 0x73746e756f636361;
    local_38 = 8;
    local_28 = 8;
    local_30 = puVar2;
    <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
    ::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
              (&local_b0,&local_88);
    if ((char)local_b0 != -1) {
      local_48 = (undefined4)local_a0;
      uStack_44 = local_a0._4_4_;
      uStack_40 = (undefined4)uStack_98;
      uStack_3c = uStack_98._4_4_;
      local_58 = local_b0;
      uStack_50 = (undefined4)uStack_a8;
      uStack_4c = uStack_a8._4_4_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_b0,&local_70,&local_38,&local_58);
      if ((char)local_b0 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_b0);
      }
      *(undefined8 *)(param_1 + 0x18) = local_60;
      *(undefined4 *)(param_1 + 8) = (undefined4)local_70;
      *(undefined4 *)(param_1 + 0xc) = local_70._4_4_;
      *(undefined4 *)(param_1 + 0x10) = uStack_68;
      *(undefined4 *)(param_1 + 0x14) = uStack_64;
      *param_1 = 5;
      lVar3 = local_80;
      uVar5 = (undefined4)local_70;
      for (lVar4 = local_78 + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
        uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (lVar3);
        lVar3 = lVar3 + 0x20;
      }
      if (local_88 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
      }
      return param_1;
    }
    local_58 = uStack_a8;
    (*(code *)PTR_unwrap_failed_00799028)
              (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_58,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bbf8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


