// 00603c80 rotate_in_place

/* <craggemini_core[66f3c71560d70857]::journal::Journal>::rotate_in_place */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::journal::Journal>::rotate_in_place(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar9;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  longlong local_c0;
  char *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  pcVar6 = *(char **)(param_1 + 0x50);
  lVar4 = (*(code *)PTR_set_len_0079a0d8)();
  if (lVar4 != 0) {
    return lVar4;
  }
  lVar8 = 0;
  lVar4 = (*(code *)PTR_seek_0079a058)(extraout_XMM0_Da,0);
  if (lVar4 == 1) {
    return lVar8;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  local_68 = 0;
  local_58 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar3 = s_rotated_from_bytes_001a0438._12_4_;
  uVar2 = s_rotated_from_bytes_001a0438._8_4_;
  uVar9 = s_rotated_from_bytes_001a0438._4_4_;
  if (pcVar5 == (char *)0x0) {
LAB_006045c6:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00604608;
  }
  *(undefined4 *)pcVar5 = s_rotated_from_bytes_001a0438._0_4_;
  *(undefined4 *)(pcVar5 + 4) = uVar9;
  *(undefined4 *)(pcVar5 + 8) = uVar2;
  *(undefined4 *)(pcVar5 + 0xc) = uVar3;
  pcVar5[0x10] = 'e';
  pcVar5[0x11] = 's';
  local_e8 = 0x12;
  local_d8 = 0x12;
  local_c8 = CONCAT71(local_c8._1_7_,2);
  local_c0 = 0;
  pcStack_e0 = pcVar5;
  local_b8 = pcVar6;
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::insert(&local_108,&local_68,&local_e8,&local_c8);
  if ((char)local_108 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_108)
    ;
  }
  if (*(longlong *)(param_1 + 0x18) != -1) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar3 = s_native_conversation_id_001a03ac._12_4_;
    uVar2 = s_native_conversation_id_001a03ac._8_4_;
    uVar9 = s_native_conversation_id_001a03ac._4_4_;
    if (pcVar6 == (char *)0x0) goto LAB_006045c6;
    *(undefined4 *)pcVar6 = s_native_conversation_id_001a03ac._0_4_;
    *(undefined4 *)(pcVar6 + 4) = uVar9;
    *(undefined4 *)(pcVar6 + 8) = uVar2;
    *(undefined4 *)(pcVar6 + 0xc) = uVar3;
    pcVar6[0xe] = 'a';
    pcVar6[0xf] = 't';
    pcVar6[0x10] = 'i';
    pcVar6[0x11] = 'o';
    pcVar6[0x12] = 'n';
    pcVar6[0x13] = '_';
    pcVar6[0x14] = 'i';
    pcVar6[0x15] = 'd';
    local_e8 = 0x16;
    local_d8 = 0x16;
    pcStack_e0 = pcVar6;
    if (lVar4 < 0) {
LAB_00603dec:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00604608;
    }
    if (lVar4 == 0) {
      pcVar6 = (char *)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar6 == (char *)0x0) goto LAB_00603dec;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar4);
    }
    local_c8 = CONCAT71(local_c8._1_7_,3);
    local_c0 = lVar4;
    local_b8 = pcVar6;
    local_b0 = lVar4;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_108,&local_68,&local_e8,&local_c8);
    if ((char)local_108 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_108);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != -1) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar3 = s_pending_request_id_001a03c2._12_4_;
    uVar2 = s_pending_request_id_001a03c2._8_4_;
    uVar9 = s_pending_request_id_001a03c2._4_4_;
    if (pcVar6 == (char *)0x0) goto LAB_006045c6;
    *(undefined4 *)pcVar6 = s_pending_request_id_001a03c2._0_4_;
    *(undefined4 *)(pcVar6 + 4) = uVar9;
    *(undefined4 *)(pcVar6 + 8) = uVar2;
    *(undefined4 *)(pcVar6 + 0xc) = uVar3;
    pcVar6[0x10] = 'i';
    pcVar6[0x11] = 'd';
    local_e8 = 0x12;
    local_d8 = 0x12;
    pcStack_e0 = pcVar6;
    if (lVar4 < 0) {
LAB_00603edc:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00604608;
    }
    if (lVar4 == 0) {
      pcVar6 = (char *)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar6 == (char *)0x0) goto LAB_00603edc;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar4);
    }
    local_c8 = CONCAT71(local_c8._1_7_,3);
    local_c0 = lVar4;
    local_b8 = pcVar6;
    local_b0 = lVar4;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_108,&local_68,&local_e8,&local_c8);
    if ((char)local_108 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_108);
    }
    if (*(char *)(param_1 + 100) != '\0') {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar6 == (char *)0x0) goto LAB_006045c6;
      builtin_strncpy(pcVar6,"provider_done",0xd);
      local_e8 = 0xd;
      local_d8 = 0xd;
      local_c8 = CONCAT62(local_c8._2_6_,0x101);
      pcStack_e0 = pcVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_108,&local_68,&local_e8,&local_c8);
      if ((char)local_108 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_108);
      }
    }
    if (*(char *)(param_1 + 0x65) != '\0') {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar6 == (char *)0x0) goto LAB_006045c6;
      builtin_strncpy(pcVar6,"tool_suspended",0xe);
      local_e8 = 0xe;
      local_d8 = 0xe;
      local_c8 = CONCAT62(local_c8._2_6_,0x101);
      pcStack_e0 = pcVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_108,&local_68,&local_e8,&local_c8);
      if ((char)local_108 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_108);
      }
    }
  }
  local_80 = 0;
  local_70 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcVar6 != (char *)0x0) {
    pcVar6[2] = 'q';
    pcVar6[0] = 's';
    pcVar6[1] = 'e';
    local_e8 = 3;
    local_d8 = 3;
    local_c8 = CONCAT71(local_c8._1_7_,2);
    local_c0 = 0;
    local_b8 = (char *)0x1;
    pcStack_e0 = pcVar6;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_108,&local_80,&local_e8,&local_c8);
    if ((char)local_108 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_108);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar6 != (char *)0x0) {
      builtin_strncpy(pcVar6,"session_id",10);
      local_e8 = 10;
      local_d8 = 10;
      lVar4 = *(longlong *)(param_1 + 0x10);
      pcStack_e0 = pcVar6;
      if (lVar4 < 0) {
LAB_0060417d:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00604608;
      }
      if (lVar4 == 0) {
        pcVar6 = (char *)0x1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar6 == (char *)0x0) goto LAB_0060417d;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar4);
      }
      local_c8 = CONCAT71(local_c8._1_7_,3);
      local_c0 = lVar4;
      local_b8 = pcVar6;
      local_b0 = lVar4;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_108,&local_80,&local_e8,&local_c8);
      if ((char)local_108 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_108);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar6 != (char *)0x0) {
        builtin_strncpy(pcVar6,"request_id",10);
        local_e8 = 10;
        local_d8 = 10;
        pcStack_e0 = pcVar6;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        uVar3 = s___journal_checkpoint___001a044a._12_4_;
        uVar2 = s___journal_checkpoint___001a044a._8_4_;
        uVar9 = s___journal_checkpoint___001a044a._4_4_;
        if (pcVar6 == (char *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00604608;
        }
        *(undefined4 *)pcVar6 = s___journal_checkpoint___001a044a._0_4_;
        *(undefined4 *)(pcVar6 + 4) = uVar9;
        *(undefined4 *)(pcVar6 + 8) = uVar2;
        *(undefined4 *)(pcVar6 + 0xc) = uVar3;
        pcVar6[0xe] = 'k';
        pcVar6[0xf] = 'p';
        pcVar6[0x10] = 'o';
        pcVar6[0x11] = 'i';
        pcVar6[0x12] = 'n';
        pcVar6[0x13] = 't';
        pcVar6[0x14] = '_';
        pcVar6[0x15] = '_';
        local_c8 = CONCAT71(local_c8._1_7_,3);
        local_c0 = 0x16;
        local_b0 = 0x16;
        local_b8 = pcVar6;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_108,&local_80,&local_e8,&local_c8);
        if ((char)local_108 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_108);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar6 != (char *)0x0) {
          builtin_strncpy(pcVar6,"type",4);
          local_e8 = 4;
          local_d8 = 4;
          pcStack_e0 = pcVar6;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0x696f706b63656863;
            *(undefined2 *)(puVar7 + 1) = 0x746e;
            local_c8 = CONCAT71(local_c8._1_7_,3);
            local_c0 = 10;
            local_b0 = 10;
            local_b8 = (char *)puVar7;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_108,&local_80,&local_e8,&local_c8);
            if ((char)local_108 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_108);
            }
            local_48 = (undefined4)local_80;
            uStack_44 = local_80._4_4_;
            uStack_40 = (undefined4)uStack_78;
            uStack_3c = uStack_78._4_4_;
            local_38 = local_70;
            local_50[0] = 5;
            local_88 = 0;
            if (local_68 != 0) {
              local_88 = local_58;
            }
            local_c8 = (ulonglong)(local_68 != 0);
            local_c0 = 0;
            local_b8 = (char *)local_68;
            local_b0 = local_60;
            local_a0 = 0;
            local_98 = local_68;
            local_90 = local_60;
            local_a8 = local_c8;
            while ((<alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::dying_next(&local_108,&local_c8), local_108 != 0 &&
                   (lVar4 = *(longlong *)(local_108 + 0x168 + local_f8 * 0x18), lVar4 != -1))) {
              lVar8 = local_108 + local_f8 * 0x18;
              uStack_78 = *(undefined8 *)(lVar8 + 0x170);
              local_70 = *(undefined8 *)(lVar8 + 0x178);
              puVar7 = (undefined8 *)(local_108 + local_f8 * 0x20);
              local_e8 = *puVar7;
              pcStack_e0 = (char *)puVar7[1];
              puVar7 = (undefined8 *)(local_108 + 0x10 + local_f8 * 0x20);
              local_d8 = *puVar7;
              uStack_d0 = *(undefined4 *)(puVar7 + 1);
              uStack_cc = *(undefined4 *)((longlong)puVar7 + 0xc);
              local_80 = lVar4;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_108,&local_48,&local_80,&local_e8);
              if ((char)local_108 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_108);
              }
            }
            <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(&local_c8);
            serde_json[dc3825464c436029]::ser::to_vec::<serde_json[dc3825464c436029]::value::Value>
                      (&local_c8,local_50);
            pcVar6 = local_b8;
            if (local_c8 == 0xffffffffffffffff) {
              lVar4 = (*(code *)PTR_from_007993d8)();
            }
            else {
              local_108 = local_c8;
              local_100 = local_c0;
              local_f8 = (ulonglong)local_b8;
              if (local_b8 == (char *)local_c8) {
                (*(code *)PTR_grow_one_007993d0)();
              }
              *(undefined1 *)(local_100 + (longlong)pcVar6) = 10;
              local_f8 = (longlong)pcVar6 + 1;
              lVar4 = <std[6c98fd8553dbae28]::fs::File_as_std[6c98fd8553dbae28]::io::Write>::
                      write_all(param_1 + 0x60,local_100,local_f8);
              uVar9 = extraout_XMM0_Da_03;
              if ((lVar4 == 0) &&
                 (lVar4 = (*(code *)PTR_sync_data_00799770)(), uVar9 = extraout_XMM0_Da_04,
                 lVar4 == 0)) {
                *(undefined8 *)(param_1 + 0x48) = 1;
                *(ulonglong *)(param_1 + 0x50) = local_f8;
                if (local_108 != 0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_04,1);
                }
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (local_50);
                return 0;
              }
              if (local_108 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
              }
            }
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_50);
            return lVar4;
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00604608;
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00604608:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


