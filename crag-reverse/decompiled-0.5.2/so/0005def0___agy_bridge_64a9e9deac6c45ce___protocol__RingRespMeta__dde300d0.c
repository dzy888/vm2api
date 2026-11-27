// 0005def0 <agy_bridge[64a9e9deac6c45ce]::protocol::RingRespMeta>

/* agy_bridge[64a9e9deac6c45ce]::protocol::pack_ring_envelope::<agy_bridge[64a9e9deac6c45ce]::protocol::RingRespMeta>
    */

undefined8 * __rustcall
agy_bridge[64a9e9deac6c45ce]::protocol::pack_ring_envelope::
<agy_bridge[64a9e9deac6c45ce]::protocol::RingRespMeta>
          (undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  undefined2 local_58;
  undefined8 **local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_48 = param_4;
  local_40 = param_3;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  uStack_68 = (undefined1 *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (uStack_68 == (undefined1 *)0x0) {
    uVar10 = (*(code *)PTR_handle_error_000c3a98)();
    if (local_70 != 0) {
      uVar10 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar10,1);
    }
    if (unaff_R15 != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar10,1);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_70 = 0x80;
  local_38 = &local_70;
  lVar8 = *(longlong *)(param_2 + 0x18);
  lVar6 = *(longlong *)(param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0x48);
  *uStack_68 = 0x7b;
  local_60 = 1;
  local_58 = 0x100;
  local_50 = &local_38;
  puVar5 = (undefined1 *)
           <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
           ::serialize_entry::<str,alloc[12e961f32105355]::string::String>(&local_58,"r",10,param_2)
  ;
  uVar10 = extraout_XMM0_Da;
  if (puVar5 == (undefined1 *)0x0) {
    if (lVar8 == -1) {
LAB_0005dfbe:
      if (lVar6 != -1) {
        if ((char)local_58 != '\0') goto LAB_0005dffa;
        puVar5 = (undefined1 *)
                 <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                 ::serialize_entry::
                 <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                           (&local_58,"tool",4,param_2 + 0x30);
        uVar10 = extraout_XMM0_Da_01;
        if (puVar5 != (undefined1 *)0x0) goto LAB_0005e003;
      }
      if (lVar1 != -1) {
        if ((char)local_58 != '\0') goto LAB_0005dffa;
        puVar5 = (undefined1 *)
                 <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                 ::serialize_entry::
                 <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                           (&local_58,"subagent_id",0xb,param_2 + 0x48);
        uVar10 = extraout_XMM0_Da_03;
        if (puVar5 != (undefined1 *)0x0) goto LAB_0005e003;
      }
      if (((local_58 & 1) == 0) && (local_58._1_1_ != '\0')) {
        plVar2 = *local_50;
        lVar8 = plVar2[2];
        if (*plVar2 == lVar8) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar2,lVar8,1,1,1);
          lVar8 = plVar2[2];
        }
        *(undefined1 *)(plVar2[1] + lVar8) = 0x7d;
        plVar2[2] = lVar8 + 1;
      }
      uVar4 = local_48;
      lVar8 = local_70;
      puVar5 = uStack_68;
      if (local_70 == -1) goto LAB_0005e01d;
      uVar9 = local_48 + local_60 + 4;
      if ((longlong)uVar9 < 0) {
LAB_0005e0bf:
        (*(code *)PTR_handle_error_000c3a98)();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar9 == 0) {
        local_70 = 0;
        uStack_68 = (undefined1 *)0x1;
        uVar7 = local_60;
LAB_0005e133:
        local_60 = 0;
        uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_70,0,4,1,1);
      }
      else {
        local_48 = local_60;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
        lVar6 = (*(code *)PTR___rust_alloc_000c3a90)();
        if (lVar6 == 0) goto LAB_0005e0bf;
        uVar7 = local_48;
        local_70 = uVar9;
        uStack_68 = (undefined1 *)lVar6;
        if (uVar9 < 4) goto LAB_0005e133;
        local_60 = 0;
        uVar10 = extraout_XMM0_Da_04;
      }
      *(int *)((longlong)uStack_68 + local_60) = (int)uVar7;
      uVar9 = local_60 + 4;
      local_60 = uVar9;
      if (local_70 - uVar9 < uVar7) {
        uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_70,uVar9,uVar7,1,1);
LAB_0005e17c:
        uVar9 = local_60;
        uVar10 = (*(code *)PTR_memcpy_000c3aa8)(uVar10,uVar7);
      }
      else if (uVar7 != 0) goto LAB_0005e17c;
      uVar9 = uVar9 + uVar7;
      local_60 = uVar9;
      if (local_70 - uVar9 < uVar4) {
        uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_70,uVar9,uVar4,1,1);
      }
      else if (uVar4 == 0) goto LAB_0005e1bf;
      uVar9 = local_60;
      (*(code *)PTR_memcpy_000c3aa8)(uVar10,uVar4);
LAB_0005e1bf:
      local_60 = uVar9 + uVar4;
      param_1[2] = local_60;
      *(undefined4 *)param_1 = (undefined4)local_70;
      *(undefined4 *)((longlong)param_1 + 4) = local_70._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_68._4_4_;
      if (lVar8 == 0) {
        return param_1;
      }
      (*(code *)PTR___rust_dealloc_000c3aa0)((undefined4)local_70,1);
      return param_1;
    }
    if ((char)local_58 == '\0') {
      puVar5 = (undefined1 *)
               <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
               ::serialize_entry::
               <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                         (&local_58,"attempt_id",10,param_2 + 0x18);
      uVar10 = extraout_XMM0_Da_00;
      if (puVar5 != (undefined1 *)0x0) goto LAB_0005e003;
      goto LAB_0005dfbe;
    }
LAB_0005dffa:
    puVar5 = (undefined1 *)(*(code *)PTR_invalid_raw_value_000c3d70)();
    uVar10 = extraout_XMM0_Da_02;
  }
LAB_0005e003:
  if (local_70 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar10,1);
  }
LAB_0005e01d:
  param_1[1] = puVar5;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


