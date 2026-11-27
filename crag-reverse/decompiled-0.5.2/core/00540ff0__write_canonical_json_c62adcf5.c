// 00540ff0 write_canonical_json

/* craggemini_core[66f3c71560d70857]::resume::write_canonical_json */

void __rustcall
craggemini_core[66f3c71560d70857]::resume::write_canonical_json(byte *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong unaff_R13;
  longlong *local_d0;
  undefined1 local_c1;
  longlong local_c0;
  undefined1 *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 **local_70;
  undefined1 **local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 **local_48;
  longlong *local_40;
  ulonglong local_38;
  
  if (*param_1 < 4) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar8 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar8 != 0) {
      local_b8 = (undefined1 *)0x80;
      local_a8 = 0;
      local_48 = &local_b8;
      local_b0 = lVar8;
      local_58[0] = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                    ::serialize::
                    <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                              (param_1,&local_48);
      uVar7 = local_a8;
      puVar6 = local_b8;
      if (local_58[0] != 0) {
        if (local_b8 != (undefined1 *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
LAB_00541166:
        local_60 = 0xffffffffffffffff;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (local_58);
        return;
      }
      local_58[0] = local_b0;
      if (local_b8 == (undefined1 *)0xffffffffffffffff) goto LAB_00541166;
      lVar8 = param_2[2];
      if ((ulonglong)(*param_2 - lVar8) < local_a8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar8,local_a8,1,1);
      }
      else if (local_a8 == 0) goto LAB_00541140;
      (*(code *)PTR_memcpy_00799008)();
      lVar8 = param_2[2];
LAB_00541140:
      param_2[2] = lVar8 + uVar7;
      if (puVar6 == (undefined1 *)0x0) {
        return;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)();
      return;
    }
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00541714:
    core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
    <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)>>
              (local_d0,unaff_R13,&local_b8);
  }
  else {
    if (*param_1 == 4) {
      lVar8 = param_2[2];
      if (*param_2 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar8,1,1,1);
      }
      *(undefined1 *)(param_2[1] + lVar8) = 0x5b;
      lVar8 = lVar8 + 1;
      param_2[2] = lVar8;
      lVar9 = *(longlong *)(param_1 + 0x18);
      if (lVar9 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x10);
        write_canonical_json(lVar8,param_2);
        if (lVar9 != 1) {
          lVar9 = lVar9 * 0x20 + -0x20;
          do {
            lVar8 = lVar8 + 0x20;
            lVar3 = param_2[2];
            if (*param_2 == lVar3) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_2,lVar3,1,1,1);
            }
            *(undefined1 *)(param_2[1] + lVar3) = 0x2c;
            param_2[2] = lVar3 + 1;
            write_canonical_json(lVar8,param_2);
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        lVar8 = param_2[2];
      }
      if (*param_2 == lVar8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar8,1,1,1);
      }
      *(undefined1 *)(param_2[1] + lVar8) = 0x5d;
      param_2[2] = lVar8 + 1;
      return;
    }
    local_a8 = *(ulonglong *)(param_1 + 8);
    local_a0 = *(undefined8 *)(param_1 + 0x10);
    local_78 = 0;
    if (local_a8 != 0) {
      local_78 = *(undefined8 *)(param_1 + 0x18);
    }
    local_b8 = (undefined1 *)(ulonglong)(local_a8 != 0);
    local_b0 = 0;
    local_90 = 0;
    local_98 = local_b8;
    local_88 = local_a8;
    local_80 = local_a0;
    <alloc[12e961f32105355]::vec::Vec<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),serde_json[dc3825464c436029]::map::Iter>>
    ::from_iter(&local_48,&local_b8);
    local_d0 = local_40;
    local_b8 = &local_c1;
    unaff_R13 = local_38;
    if (1 < local_38) {
      if (0x14 < local_38) goto LAB_00541714;
      core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (local_40,local_38,1,&local_b8);
    }
  }
  lVar8 = param_2[2];
  if (*param_2 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_2,lVar8,1,1,1);
  }
  *(undefined1 *)(param_2[1] + lVar8) = 0x7b;
  param_2[2] = lVar8 + 1;
  local_70 = local_48;
  if (unaff_R13 == 0) goto LAB_00541597;
  lVar8 = local_d0[1];
  uVar1 = *(undefined8 *)(*local_d0 + 8);
  uVar2 = *(undefined8 *)(*local_d0 + 0x10);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar9 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar9 == 0) {
LAB_005416f2:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_b8 = &DAT_00000080;
  local_a8 = 0;
  local_68 = &local_b8;
  local_b0 = lVar9;
  serde_json[dc3825464c436029]::ser::format_escaped_str::
  <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
            (&local_68,1,uVar1,uVar2);
  uVar7 = local_a8;
  puVar6 = local_b8;
  if (local_b8 == (undefined1 *)0xffffffffffffffff) {
    local_58[0] = local_b0;
    local_60 = 0xffffffffffffffff;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(local_58);
  }
  else {
    lVar9 = param_2[2];
    if ((ulonglong)(*param_2 - lVar9) < local_a8) {
      local_c0 = local_b0;
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar9,local_a8,1,1);
LAB_005412e9:
      (*(code *)PTR_memcpy_00799008)();
      lVar9 = param_2[2];
    }
    else if (local_a8 != 0) goto LAB_005412e9;
    param_2[2] = lVar9 + uVar7;
    if (puVar6 != (undefined1 *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  lVar9 = param_2[2];
  if (*param_2 == lVar9) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_2,lVar9,1,1,1);
  }
  *(undefined1 *)(param_2[1] + lVar9) = 0x3a;
  param_2[2] = lVar9 + 1;
  write_canonical_json(lVar8,param_2);
  for (lVar8 = 0; unaff_R13 * 0x10 + -0x10 != lVar8; lVar8 = lVar8 + 0x10) {
    lVar9 = *(longlong *)((longlong)local_d0 + lVar8 + 0x10);
    uVar1 = *(undefined8 *)((longlong)local_d0 + lVar8 + 0x18);
    lVar3 = param_2[2];
    if (*param_2 == lVar3) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar3,1,1,1);
    }
    *(undefined1 *)(param_2[1] + lVar3) = 0x2c;
    param_2[2] = lVar3 + 1;
    uVar2 = *(undefined8 *)(lVar9 + 8);
    uVar4 = *(undefined8 *)(lVar9 + 0x10);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar9 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar9 == 0) goto LAB_005416f2;
    local_b8 = &DAT_00000080;
    local_a8 = 0;
    local_68 = &local_b8;
    local_b0 = lVar9;
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (&local_68,1,uVar2,uVar4);
    uVar7 = local_a8;
    puVar6 = local_b8;
    if (local_b8 == (undefined1 *)0xffffffffffffffff) {
      local_58[0] = local_b0;
      local_60 = 0xffffffffffffffff;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(local_58)
      ;
    }
    else {
      local_c0 = local_b0;
      lVar9 = param_2[2];
      if ((ulonglong)(*param_2 - lVar9) < local_a8) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar9,local_a8,1,1);
LAB_005414a7:
        (*(code *)PTR_memcpy_00799008)();
        lVar9 = param_2[2];
      }
      else if (local_a8 != 0) goto LAB_005414a7;
      param_2[2] = lVar9 + uVar7;
      if (puVar6 != (undefined1 *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    lVar9 = param_2[2];
    if (*param_2 == lVar9) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar9,1,1,1);
    }
    *(undefined1 *)(param_2[1] + lVar9) = 0x3a;
    param_2[2] = lVar9 + 1;
    write_canonical_json(uVar1,param_2);
  }
LAB_00541597:
  if (local_70 != (undefined1 **)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar8 = param_2[2];
  if (*param_2 == lVar8) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_2,lVar8,1,1,1);
  }
  *(undefined1 *)(param_2[1] + lVar8) = 0x7d;
  param_2[2] = lVar8 + 1;
  return;
}


