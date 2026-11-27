// 003b3e60 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list::{closure#0}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list::{closure#0}>>>
::from_iter(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong local_c0;
  undefined8 *puStack_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  char local_70;
  undefined4 uStack_6f;
  undefined3 uStack_6b;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  undefined1 local_60;
  undefined3 uStack_5f;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_50 = param_2 + 8;
  puVar4 = *(undefined8 **)(param_2 + 2);
  puVar3 = *(undefined8 **)(param_2 + 6);
  if (puVar4 != puVar3) {
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *(undefined8 **)(param_2 + 2) = puVar4;
      <&mut<craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,)>>
      ::call_mut(&local_a8,&local_50,uVar1);
      if ((char)local_a8 != -1) {
        uStack_6f = CONCAT13((undefined1)uStack_a4,local_a8._1_3_);
        uStack_6b = uStack_a4._1_3_;
        uStack_68 = (undefined1)uStack_a0;
        uStack_67 = CONCAT13(uStack_a0._4_1_,uStack_a0._1_3_);
        uStack_63 = uStack_a0._5_3_;
        local_60 = (undefined1)uStack_98;
        uStack_5f = (undefined3)((uint)uStack_98 >> 8);
        uStack_5c = uStack_94;
        uStack_58 = (undefined4)local_90;
        uStack_54 = local_90._4_4_;
        local_70 = (char)local_a8;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puStack_b8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puStack_b8 == (undefined8 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puStack_b8[2] = CONCAT44(uStack_5c,CONCAT31(uStack_5f,local_60));
        puStack_b8[3] = CONCAT44(uStack_54,uStack_58);
        *puStack_b8 = CONCAT35(uStack_6b,CONCAT41(uStack_6f,local_70));
        puStack_b8[1] = CONCAT35(uStack_63,CONCAT41(uStack_67,uStack_68));
        local_c0 = 4;
        local_b0 = 1;
        local_88 = *(undefined8 *)(param_2 + 8);
        local_a8 = *param_2;
        uStack_a4 = param_2[1];
        puVar4 = *(undefined8 **)(param_2 + 2);
        local_90 = *(undefined8 **)(param_2 + 6);
        uStack_98 = (undefined4)*(undefined8 *)(param_2 + 4);
        uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
        local_78 = &local_88;
        local_80 = puStack_b8;
        uStack_a0 = *(undefined8 **)(param_2 + 2);
        if (puVar4 == local_90) goto LAB_003b405b;
        lVar5 = 1;
        puVar3 = local_90;
        goto LAB_003b3fa0;
      }
    } while (puVar4 != puVar3);
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_2);
  return param_1;
LAB_003b3fa0:
  uVar1 = *puVar4;
  puVar4 = puVar4 + 1;
  uStack_a0 = puVar4;
  <&mut<craggemini_core[66f3c71560d70857]::pool::PoolManager>::accounts_list::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,)>>
  ::call_mut(&local_70,&local_78,uVar1);
  if (local_70 == -1) {
    if (puVar4 == puVar3) goto LAB_003b405b;
    goto LAB_003b3fa0;
  }
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  local_50._4_4_ = CONCAT31(uStack_6b,(char)((uint)uStack_6f >> 0x18));
  uStack_48 = CONCAT31((int3)uStack_67,uStack_68);
  uStack_44 = CONCAT31(uStack_63,(char)((uint)uStack_67 >> 0x18));
  uStack_40 = CONCAT31(uStack_5f,local_60);
  local_50._0_4_ = CONCAT31((int3)uStack_6f,local_70);
  puVar4 = uStack_a0;
  if (lVar5 == local_c0) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_c0,lVar5,1,8,0x20);
    local_80 = puStack_b8;
    puVar4 = uStack_a0;
  }
  local_80[lVar5 * 4 + 2] = CONCAT44(uStack_3c,uStack_40);
  (local_80 + lVar5 * 4 + 2)[1] = CONCAT44(uStack_34,uStack_38);
  puVar3 = local_80 + lVar5 * 4;
  *(undefined4 *)puVar3 = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar3 + 4) = local_50._4_4_;
  *(undefined4 *)(puVar3 + 1) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_44;
  lVar5 = lVar5 + 1;
  local_78 = &local_88;
  puVar3 = local_90;
  local_b0 = lVar5;
  uStack_a0 = puVar4;
  if (puVar4 == local_90) {
LAB_003b405b:
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_a8);
    param_1[2] = local_b0;
    *param_1 = local_c0;
    param_1[1] = (longlong)puStack_b8;
    return param_1;
  }
  goto LAB_003b3fa0;
}


