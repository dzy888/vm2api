// 004c2270 policy_view

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::policy_view */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::policy_view
          (undefined1 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  byte bVar12;
  char cVar13;
  char *pcVar14;
  bool bVar15;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  char local_37;
  undefined1 local_36;
  
  get_policy(&local_58);
  piVar1 = (int *)(param_2 + 0x1d0);
  LOCK();
  bVar15 = *(int *)(param_2 + 0x1d0) == 0;
  if (bVar15) {
    *(int *)(param_2 + 0x1d0) = 1;
  }
  UNLOCK();
  if (!bVar15) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar11 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
    cVar13 = *(char *)(param_2 + 0x1d4);
  }
  else {
    bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar12 = bVar12 ^ 1;
    cVar13 = *(char *)(param_2 + 0x1d4);
  }
  if (cVar13 == '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x208);
    uVar4 = *(undefined8 *)(param_2 + 0x238);
    if (((bVar12 == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
      *(undefined1 *)(param_2 + 0x1d4) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    local_70 = 0;
    local_60 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar14 != (char *)0x0) {
      builtin_strncpy(pcVar14,"strategy",8);
      local_d0 = 8;
      local_c0 = 8;
      local_c8 = pcVar14;
      <craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy_as_serde_core[48776c27239fa21f]::ser::Serialize>
      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_b8,&local_38);
      if ((char)local_b8 == -1) {
        local_98 = uStack_b0;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_98,
                   &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bbc8);
        goto LAB_004c2a87;
      }
      local_88 = (undefined4)local_a8;
      uStack_84 = local_a8._4_4_;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      local_98 = local_b8;
      uStack_90 = (undefined4)uStack_b0;
      uStack_8c = uStack_b0._4_4_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_b8,&local_70,&local_d0,&local_98);
      if ((char)local_b8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_b8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar14 != (char *)0x0) {
        builtin_strncpy(pcVar14,"max_accounts",0xc);
        local_d0 = 0xc;
        local_c0 = 0xc;
        local_b8 = (int *)CONCAT71(local_b8._1_7_,2);
        uStack_b0 = (int *)0x0;
        local_a8 = local_58;
        local_c8 = pcVar14;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_98,&local_70,&local_d0,&local_b8);
        if ((char)local_98 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_98);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar14 != (char *)0x0) {
          builtin_strncpy(pcVar14,"sticky_enabled",0xe);
          local_d0 = 0xe;
          local_c0 = 0xe;
          local_b8._0_2_ = CONCAT11(local_37,1);
          local_c8 = pcVar14;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_98,&local_70,&local_d0,&local_b8);
          if ((char)local_98 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_98);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar14 != (char *)0x0) {
            builtin_strncpy(pcVar14,"sticky_ttl_secs",0xf);
            local_d0 = 0xf;
            local_c0 = 0xf;
            local_b8 = (int *)CONCAT71(local_b8._1_7_,2);
            uStack_b0 = (int *)0x0;
            local_a8 = local_50;
            local_c8 = pcVar14;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_98,&local_70,&local_d0,&local_b8);
            if ((char)local_98 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_98);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar14 != (char *)0x0) {
              builtin_strncpy(pcVar14,"require_shm",0xb);
              local_d0 = 0xb;
              local_c0 = 0xb;
              local_b8._0_2_ = CONCAT11(local_36,1);
              local_c8 = pcVar14;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_98,&local_70,&local_d0,&local_b8);
              if ((char)local_98 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_98);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              uVar10 = s_ailure_thresholdcircuit_open_msm_001961f1._8_8_;
              if (pcVar14 != (char *)0x0) {
                *(ulonglong *)(pcVar14 + 9) =
                     CONCAT17(s_ailure_thresholdcircuit_open_msm_001961f1[7],
                              CONCAT43(s_ailure_thresholdcircuit_open_msm_001961f1._3_4_,
                                       s_ailure_thresholdcircuit_open_msm_001961f1._0_3_));
                *(undefined8 *)(pcVar14 + 0x11) = uVar10;
                uVar9 = s_ailure_thresholdcircuit_open_msm_001961f1._3_4_;
                uVar8 = ram0x001961f0;
                uVar7 = anon_572fb51faa0db1e51baf8d00d92dd3e9_51_llvm_7677212527096675952._4_4_;
                *(undefined4 *)pcVar14 =
                     anon_572fb51faa0db1e51baf8d00d92dd3e9_51_llvm_7677212527096675952._0_4_;
                *(undefined4 *)(pcVar14 + 4) = uVar7;
                *(undefined4 *)(pcVar14 + 8) = uVar8;
                *(undefined4 *)(pcVar14 + 0xc) = uVar9;
                local_d0 = 0x19;
                local_c0 = 0x19;
                local_b8 = (int *)CONCAT71(local_b8._1_7_,2);
                uStack_b0 = (int *)0x0;
                local_a8 = local_48;
                local_c8 = pcVar14;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_98,&local_70,&local_d0,&local_b8);
                if ((char)local_98 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_98);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar14 != (char *)0x0) {
                  builtin_strncpy(pcVar14,"circuit_open_ms",0xf);
                  local_d0 = 0xf;
                  local_c0 = 0xf;
                  local_b8 = (int *)CONCAT71(local_b8._1_7_,2);
                  uStack_b0 = (int *)0x0;
                  local_a8 = local_40;
                  local_c8 = pcVar14;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_98,&local_70,&local_d0,&local_b8);
                  if ((char)local_98 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_98);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                  uVar9 = s_sticky_bindings_count_00196f1c._12_4_;
                  uVar8 = s_sticky_bindings_count_00196f1c._8_4_;
                  uVar7 = s_sticky_bindings_count_00196f1c._4_4_;
                  if (pcVar14 != (char *)0x0) {
                    *(undefined4 *)pcVar14 = s_sticky_bindings_count_00196f1c._0_4_;
                    *(undefined4 *)(pcVar14 + 4) = uVar7;
                    *(undefined4 *)(pcVar14 + 8) = uVar8;
                    *(undefined4 *)(pcVar14 + 0xc) = uVar9;
                    pcVar14[0xd] = 'g';
                    pcVar14[0xe] = 's';
                    pcVar14[0xf] = '_';
                    pcVar14[0x10] = 'c';
                    pcVar14[0x11] = 'o';
                    pcVar14[0x12] = 'u';
                    pcVar14[0x13] = 'n';
                    pcVar14[0x14] = 't';
                    local_d0 = 0x15;
                    local_a8 = 0;
                    if (local_37 != '\0') {
                      local_a8 = uVar3;
                    }
                    local_c0 = 0x15;
                    local_b8 = (int *)CONCAT71(local_b8._1_7_,2);
                    uStack_b0 = (int *)0x0;
                    local_c8 = pcVar14;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_98,&local_70,&local_d0,&local_b8);
                    if ((char)local_98 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_98);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    uVar9 = s_sticky_responses_count_00196f31._12_4_;
                    uVar8 = s_sticky_responses_count_00196f31._8_4_;
                    uVar7 = s_sticky_responses_count_00196f31._4_4_;
                    if (pcVar14 != (char *)0x0) {
                      *(undefined4 *)pcVar14 = s_sticky_responses_count_00196f31._0_4_;
                      *(undefined4 *)(pcVar14 + 4) = uVar7;
                      *(undefined4 *)(pcVar14 + 8) = uVar8;
                      *(undefined4 *)(pcVar14 + 0xc) = uVar9;
                      pcVar14[0xe] = 'e';
                      pcVar14[0xf] = 's';
                      pcVar14[0x10] = '_';
                      pcVar14[0x11] = 'c';
                      pcVar14[0x12] = 'o';
                      pcVar14[0x13] = 'u';
                      pcVar14[0x14] = 'n';
                      pcVar14[0x15] = 't';
                      local_d0 = 0x16;
                      local_a8 = 0;
                      if (local_37 != '\0') {
                        local_a8 = uVar4;
                      }
                      local_c0 = 0x16;
                      local_b8 = (int *)CONCAT71(local_b8._1_7_,2);
                      uStack_b0 = (int *)0x0;
                      local_c8 = pcVar14;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_98,&local_70,&local_d0,&local_b8);
                      if ((char)local_98 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_98);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      uVar9 = anon_572fb51faa0db1e51baf8d00d92dd3e9_27_llvm_7677212527096675952.
                              _12_4_;
                      uVar8 = anon_572fb51faa0db1e51baf8d00d92dd3e9_27_llvm_7677212527096675952.
                              _8_4_;
                      uVar7 = anon_572fb51faa0db1e51baf8d00d92dd3e9_27_llvm_7677212527096675952.
                              _4_4_;
                      if (pcVar14 != (char *)0x0) {
                        *(undefined4 *)pcVar14 =
                             anon_572fb51faa0db1e51baf8d00d92dd3e9_27_llvm_7677212527096675952._0_4_
                        ;
                        *(undefined4 *)(pcVar14 + 4) = uVar7;
                        *(undefined4 *)(pcVar14 + 8) = uVar8;
                        *(undefined4 *)(pcVar14 + 0xc) = uVar9;
                        pcVar14[0x10] = 's';
                        local_d0 = 0x11;
                        local_c0 = 0x11;
                        local_a8 = *(undefined8 *)(param_2 + 0x158);
                        local_b8 = (int *)CONCAT71(local_b8._1_7_,2);
                        uStack_b0 = (int *)0x0;
                        local_c8 = pcVar14;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_98,&local_70,&local_d0,&local_b8);
                        if ((char)local_98 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_98);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pcVar14 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                        uVar9 = anon_572fb51faa0db1e51baf8d00d92dd3e9_28_llvm_7677212527096675952.
                                _12_4_;
                        uVar8 = anon_572fb51faa0db1e51baf8d00d92dd3e9_28_llvm_7677212527096675952.
                                _8_4_;
                        uVar7 = anon_572fb51faa0db1e51baf8d00d92dd3e9_28_llvm_7677212527096675952.
                                _4_4_;
                        if (pcVar14 != (char *)0x0) {
                          *(undefined4 *)pcVar14 =
                               anon_572fb51faa0db1e51baf8d00d92dd3e9_28_llvm_7677212527096675952.
                               _0_4_;
                          *(undefined4 *)(pcVar14 + 4) = uVar7;
                          *(undefined4 *)(pcVar14 + 8) = uVar8;
                          *(undefined4 *)(pcVar14 + 0xc) = uVar9;
                          pcVar14[0x10] = 'e';
                          pcVar14[0x11] = 's';
                          local_d0 = 0x12;
                          local_c0 = 0x12;
                          local_a8 = *(undefined8 *)(param_2 + 0x160);
                          local_b8 = (int *)CONCAT71(local_b8._1_7_,2);
                          uStack_b0 = (int *)0x0;
                          local_c8 = pcVar14;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_98,&local_70,&local_d0,&local_b8);
                          if ((char)local_98 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_98);
                          }
                          *(undefined8 *)(param_1 + 0x18) = local_60;
                          *(undefined8 *)(param_1 + 8) = local_70;
                          *(undefined8 *)(param_1 + 0x10) = uStack_68;
                          *param_1 = 5;
                          return param_1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    uVar6 = (ulonglong)uStack_b0 >> 8;
    uStack_b0 = (int *)CONCAT71((int7)uVar6,bVar12);
    local_b8 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b590
               ,&local_b8,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bbb0);
  }
LAB_004c2a87:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


