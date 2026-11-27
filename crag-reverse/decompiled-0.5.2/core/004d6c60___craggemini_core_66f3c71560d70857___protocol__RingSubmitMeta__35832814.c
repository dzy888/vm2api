// 004d6c60 <craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>

/* craggemini_core[66f3c71560d70857]::protocol::pack_ring_envelope::<craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>
    */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::protocol::pack_ring_envelope::
<craggemini_core[66f3c71560d70857]::protocol::RingSubmitMeta>
          (undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  undefined2 local_68;
  undefined8 **local_60;
  ulonglong local_58;
  int local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 *local_38;
  
  local_58 = param_4;
  local_48 = param_3;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004d6fe6;
  }
  local_80 = (undefined1 *)0x80;
  local_38 = &local_80;
  lVar3 = *(longlong *)(param_2 + 0x18);
  lVar4 = *(longlong *)(param_2 + 0x30);
  cVar1 = *(char *)(param_2 + 0x72);
  local_4c = *(int *)(param_2 + 0x68);
  cVar2 = *(char *)(param_2 + 0x73);
  local_40 = *(longlong *)(param_2 + 0x48);
  *puVar7 = 0x7b;
  local_70 = 1;
  local_68 = 0x100;
  local_60 = &local_38;
  uStack_78 = puVar7;
  puVar7 = (undefined1 *)
           <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
           ::serialize_entry::<str,alloc[12e961f32105355]::string::String>
                     (&local_68,"request_",10,param_2);
  uVar10 = extraout_XMM0_Da;
  if (puVar7 == (undefined1 *)0x0) {
    if ((char)local_68 == '\0') {
      puVar7 = (undefined1 *)
               <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
               ::serialize_entry::<str,bool>(&local_68,"allow_multi_attempt",0x13,param_2 + 0x70);
      uVar10 = extraout_XMM0_Da_01;
      if (puVar7 == (undefined1 *)0x0) {
        if ((char)local_68 != '\0') goto LAB_004d6d21;
        puVar7 = (undefined1 *)
                 <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                 ::serialize_entry::<str,bool>(&local_68,"allow_subagents",0xf,param_2 + 0x71);
        uVar10 = extraout_XMM0_Da_02;
        if (puVar7 == (undefined1 *)0x0) {
          if (lVar3 != -1) {
            if ((char)local_68 != '\0') goto LAB_004d6d21;
            puVar7 = (undefined1 *)
                     <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                     ::serialize_entry::
                     <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                               (&local_68,"expected_native_conversation_id",0x1f,param_2 + 0x18);
            uVar10 = extraout_XMM0_Da_03;
            if (puVar7 != (undefined1 *)0x0) goto LAB_004d6d4e;
          }
          if ((cVar1 == '\x02') ||
             (puVar7 = (undefined1 *)
                       <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                       ::serialize_field::
                       <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>
                                 (&local_68,param_2 + 0x72), uVar10 = extraout_XMM0_Da_04,
             puVar7 == (undefined1 *)0x0)) {
            if (lVar4 != -1) {
              if ((char)local_68 != '\0') goto LAB_004d6d21;
              puVar7 = (undefined1 *)
                       <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
                       ::serialize_entry::
                       <str,core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>
                                 (&local_68,"system_prompt",0xd,param_2 + 0x30);
              uVar10 = extraout_XMM0_Da_05;
              if (puVar7 != (undefined1 *)0x0) goto LAB_004d6d4e;
            }
            if ((((local_4c == 0) ||
                 (puVar7 = (undefined1 *)
                           <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                           ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<i32>>
                                     (&local_68,param_2 + 0x68), uVar10 = extraout_XMM0_Da_06,
                 puVar7 == (undefined1 *)0x0)) &&
                ((cVar2 == '\x02' ||
                 (puVar7 = (undefined1 *)
                           <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                           ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<bool>>
                                     (&local_68,param_2 + 0x73), uVar10 = extraout_XMM0_Da_07,
                 puVar7 == (undefined1 *)0x0)))) &&
               ((local_40 == -2 ||
                (puVar7 = (undefined1 *)
                          <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                          ::serialize_field::
                          <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::BridgeToolFilter>>
                                    (&local_68,param_2 + 0x48), uVar10 = extraout_XMM0_Da_08,
                puVar7 == (undefined1 *)0x0)))) {
              if (((local_68 & 1) == 0) && (local_68._1_1_ != '\0')) {
                <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice(*local_60,"}",1);
              }
              uVar9 = local_58;
              uVar6 = local_70;
              lVar3 = (longlong)local_80;
              puVar7 = uStack_78;
              if (local_80 == (undefined1 *)0xffffffffffffffff) goto LAB_004d6d68;
              uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                                 (&local_80,local_58 + local_70 + 4,0,1,1);
              puVar7 = uStack_78;
              if ((char)local_80 != '\0') {
LAB_004d6fe6:
                (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              local_80 = uStack_78;
              uStack_78 = (undefined1 *)local_70;
              local_70 = 0;
              if (puVar7 < &DAT_00000004) {
                uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (&local_80,0,4,1,1);
                uVar9 = local_58;
              }
              else {
                local_70 = 0;
              }
              *(int *)((longlong)uStack_78 + local_70) = (int)uVar6;
              uVar8 = local_70 + 4;
              local_70 = uVar8;
              if ((longlong)local_80 - uVar8 < uVar6) {
                uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (&local_80,uVar8,uVar6,1,1);
                uVar9 = local_58;
LAB_004d6f5d:
                uVar8 = local_70;
                uVar10 = (*(code *)PTR_memcpy_00799008)(uVar10,uVar6);
              }
              else if (uVar6 != 0) goto LAB_004d6f5d;
              uVar8 = uVar8 + uVar6;
              local_70 = uVar8;
              if ((longlong)local_80 - uVar8 < uVar9) {
                uVar10 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (&local_80,uVar8,uVar9,1,1);
                uVar9 = local_58;
              }
              else if (uVar9 == 0) goto LAB_004d6fa3;
              uVar8 = local_70;
              (*(code *)PTR_memcpy_00799008)(uVar10,uVar9);
LAB_004d6fa3:
              local_70 = uVar8 + uVar9;
              param_1[2] = local_70;
              *(undefined4 *)param_1 = (undefined4)local_80;
              *(undefined4 *)((longlong)param_1 + 4) = local_80._4_4_;
              *(undefined4 *)(param_1 + 1) = (undefined4)uStack_78;
              *(undefined4 *)((longlong)param_1 + 0xc) = uStack_78._4_4_;
              if (lVar3 == 0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)((undefined4)local_80,1);
              return param_1;
            }
          }
        }
      }
    }
    else {
LAB_004d6d21:
      puVar7 = (undefined1 *)(*(code *)PTR_invalid_raw_value_00799700)();
      uVar10 = extraout_XMM0_Da_00;
    }
  }
LAB_004d6d4e:
  if (local_80 != (undefined1 *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
  }
LAB_004d6d68:
  param_1[1] = puVar7;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


