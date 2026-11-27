// 004ee590 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>

/* <craggemini_core[66f3c71560d70857]::protocol::ToBridge as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>>> */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::protocol::ToBridge_as_serde_core[48776c27239fa21f]::ser::Serialize>
::serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
          (ulonglong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined2 local_60;
  longlong *local_58;
  char local_49;
  longlong *local_48;
  ulonglong local_40;
  int local_34;
  
  uVar3 = *param_1;
  local_58 = param_2;
  switch(uVar3 ^ 0x8000000000000000) {
  case 0:
    uVar3 = param_1[5];
    uVar4 = param_1[7];
    param_2 = (longlong *)*param_2;
    lVar7 = param_2[2];
    if (*param_2 == lVar7) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar7,1,1,1);
      lVar7 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + lVar7) = 0x7b;
    param_2[2] = lVar7 + 1;
    local_60 = 0x100;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,str>(&local_60,&DAT_0018e080,4,"attached",8);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') {
LAB_004eebc0:
      lVar7 = (*(code *)PTR_invalid_raw_value_00799700)();
      return lVar7;
    }
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,&DAT_00185108,8,param_1 + 1);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,"session_id",10,param_1 + 3);
    if (lVar7 != 0) {
      return lVar7;
    }
    if (uVar3 != 0) {
      if ((char)local_60 != '\0') goto LAB_004eebc0;
      lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                        (&local_60,"shm_path",8,param_1 + 5);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
    if (uVar4 == 0) goto LAB_004ee768;
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    pcVar8 = &DAT_001854f8;
    break;
  case 1:
    uVar4 = param_1[0xc];
    uVar3 = param_1[10];
    uVar6 = param_1[5];
    cVar1 = *(char *)((longlong)param_1 + 0x61);
    local_40 = param_1[1];
    plVar5 = (longlong *)*param_2;
    lVar7 = plVar5[2];
    if (*plVar5 == lVar7) {
      local_48 = param_2;
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar5,lVar7,1,1,1);
      lVar7 = plVar5[2];
      param_2 = local_48;
    }
    *(undefined1 *)(plVar5[1] + lVar7) = 0x7b;
    plVar5[2] = lVar7 + 1;
    local_60 = 0x100;
    local_58 = param_2;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,str>(&local_60,&DAT_0018e080,4,"submit",6);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,"request_",10,param_1 + 6);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,"text",4,param_1 + 8);
    if (lVar7 != 0) {
      return lVar7;
    }
    if (((char)uVar4 != '\x02') &&
       (lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::
                <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>
                          (&local_60,param_1 + 0xc), lVar7 != 0)) {
      return lVar7;
    }
    if (uVar3 != 0) {
      if ((char)local_60 != '\0') goto LAB_004eebc0;
      lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                        (&local_60,"system_prompt",0xd,param_1 + 10);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
    if (((int)uVar6 != 0) &&
       (lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<i32>>
                          (&local_60,param_1 + 5), lVar7 != 0)) {
      return lVar7;
    }
    if ((cVar1 != '\x02') &&
       (lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<bool>>
                          (&local_60,(longlong)param_1 + 0x61), lVar7 != 0)) {
      return lVar7;
    }
    if (local_40 == 0xfffffffffffffffe) goto LAB_004ee768;
    param_1 = param_1 + 1;
    goto LAB_004eecab;
  default:
    cVar1 = *(char *)((longlong)param_1 + 0x81);
    uVar4 = param_1[0xc];
    cVar2 = *(char *)((longlong)param_1 + 0x82);
    local_40 = param_1[0xe];
    local_34 = (int)param_1[4];
    local_49 = *(char *)((longlong)param_1 + 0x83);
    plVar5 = (longlong *)*param_2;
    lVar7 = plVar5[2];
    if (*plVar5 == lVar7) {
      local_48 = param_2;
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(plVar5,lVar7,1,1,1);
      lVar7 = plVar5[2];
      param_2 = local_48;
    }
    *(undefined1 *)(plVar5[1] + lVar7) = 0x7b;
    plVar5[2] = lVar7 + 1;
    local_60 = 0x100;
    local_58 = param_2;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,str>(&local_60,&DAT_0018e080,4,"submit_shm",10);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,"request_",10,param_1 + 5);
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
            ::serialize_field::<u64>(&local_60,param_1 + 9);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,u64>(&local_60,"offset",6,param_1 + 10);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,u64>(&local_60,"length",6,param_1 + 0xb);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,"sha256",6,param_1 + 7);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,bool>(&local_60,"allow_multi_attempt",0x13,param_1 + 0x10);
    if (lVar7 != 0) {
      return lVar7;
    }
    if (cVar1 != '\0') {
      if ((char)local_60 != '\0') goto LAB_004eebc0;
      lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,bool>
                        (&local_60,"allow_subagents",0xf,(longlong)param_1 + 0x81);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
    if (uVar4 != 0) {
      if ((char)local_60 != '\0') goto LAB_004eebc0;
      lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                        (&local_60,"expected_native_conversation_id",0x1f,param_1 + 0xc);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
    if ((cVar2 != '\x02') &&
       (lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::
                <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode>>
                          (&local_60,(longlong)param_1 + 0x82), lVar7 != 0)) {
      return lVar7;
    }
    if (local_40 != 0) {
      if ((char)local_60 != '\0') goto LAB_004eebc0;
      lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                        (&local_60,"system_prompt",0xd,param_1 + 0xe);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
    if ((local_34 != 0) &&
       (lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<i32>>
                          (&local_60,param_1 + 4), lVar7 != 0)) {
      return lVar7;
    }
    if ((local_49 != '\x02') &&
       (lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
                ::serialize_field::<core[c0acaeba6ab4c2e0]::option::Option<bool>>
                          (&local_60,(longlong)param_1 + 0x83), lVar7 != 0)) {
      return lVar7;
    }
    if (uVar3 == 0xfffffffffffffffe) goto LAB_004ee768;
LAB_004eecab:
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
            ::serialize_field::
            <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::protocol::BridgeToolFilter>>
                      (&local_60,param_1);
    goto LAB_004ee75f;
  case 3:
    uVar3 = param_1[5];
    uVar4 = param_1[7];
    param_2 = (longlong *)*param_2;
    lVar7 = param_2[2];
    if (*param_2 == lVar7) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar7,1,1,1);
      lVar7 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + lVar7) = 0x7b;
    param_2[2] = lVar7 + 1;
    local_60 = 0x100;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,str>(&local_60,&DAT_0018e080,4,"control",7);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,"control_id",10,param_1 + 1);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,"action",6,param_1 + 3);
    if (lVar7 != 0) {
      return lVar7;
    }
    if (uVar3 != 0) {
      if ((char)local_60 != '\0') goto LAB_004eebc0;
      lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
              ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                        (&local_60,"target_id",9,param_1 + 5);
      if (lVar7 != 0) {
        return lVar7;
      }
    }
    if (uVar4 == 0) goto LAB_004ee768;
    if ((char)local_60 != '\0') goto LAB_004eebc0;
    pcVar8 = "argumentEnvelope";
    break;
  case 4:
    param_2 = (longlong *)*param_2;
    lVar7 = param_2[2];
    if (*param_2 == lVar7) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar7,1,1,1);
      lVar7 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + lVar7) = 0x7b;
    param_2[2] = lVar7 + 1;
    local_60 = 0x100;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,str>(&local_60,&DAT_0018e080,4,"cancel",6);
    if (lVar7 != 0) {
      return lVar7;
    }
    if ((char)local_60 == '\x01') goto LAB_004eebc0;
    lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::<str,&str>(&local_60,"request_",10,param_1 + 1);
    goto LAB_004ee75f;
  }
  lVar7 = <serde_json[dc3825464c436029]::ser::Compound<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
          ::serialize_entry::<str,core[c0acaeba6ab4c2e0]::option::Option<&str>>
                    (&local_60,pcVar8,8,param_1 + 7);
LAB_004ee75f:
  if (lVar7 != 0) {
    return lVar7;
  }
LAB_004ee768:
  if (((local_60 & 1) == 0) && (local_60._1_1_ != '\0')) {
    <alloc[12e961f32105355]::vec::Vec<u8>>::extend_from_slice(*local_58,"}",1);
  }
  return 0;
}


