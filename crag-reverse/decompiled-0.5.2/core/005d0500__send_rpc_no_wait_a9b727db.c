// 005d0500 send_rpc_no_wait

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::send_rpc_no_wait */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::send_rpc_no_wait
          (undefined1 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
          undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined3 uVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auVar18 [16];
  undefined8 local_168;
  undefined4 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60 [2];
  longlong local_50;
  
  LOCK();
  plVar10 = (longlong *)(param_2 + 0x2c0);
  local_118 = *plVar10;
  *plVar10 = *plVar10 + 1;
  UNLOCK();
  local_108 = 1;
  uStack_104 = 0;
  uStack_100 = 1;
  uStack_fc = 0;
  local_d8 = 0;
  uStack_d0 = 2;
  local_a0 = param_5;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar10 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar10 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    goto LAB_005d0ec4;
  }
  plVar10[10] = local_b8;
  plVar10[0xb] = lStack_b0;
  plVar10[8] = local_c8;
  plVar10[9] = lStack_c0;
  *(undefined4 *)(plVar10 + 6) = (undefined4)local_d8;
  *(undefined4 *)((longlong)plVar10 + 0x34) = local_d8._4_4_;
  *(undefined4 *)(plVar10 + 7) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)plVar10 + 0x3c) = uStack_d0._4_4_;
  *(undefined4 *)(plVar10 + 4) = (undefined4)local_e8;
  *(undefined4 *)((longlong)plVar10 + 0x24) = local_e8._4_4_;
  *(undefined4 *)(plVar10 + 5) = uStack_e0;
  *(undefined4 *)((longlong)plVar10 + 0x2c) = uStack_dc;
  *(undefined4 *)(plVar10 + 2) = uStack_f8;
  *(undefined4 *)((longlong)plVar10 + 0x14) = uStack_f4;
  *(undefined4 *)(plVar10 + 3) = uStack_f0;
  *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_ec;
  *(undefined4 *)plVar10 = local_108;
  *(undefined4 *)((longlong)plVar10 + 4) = uStack_104;
  *(undefined4 *)(plVar10 + 1) = uStack_100;
  *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_fc;
  LOCK();
  lVar13 = *plVar10;
  *plVar10 = *plVar10 + 1;
  UNLOCK();
  local_90 = param_3;
  if (*plVar10 == 0 || SCARRY8(lVar13,1) != *plVar10 < 0) goto LAB_005d0ec4;
  lVar13 = *(longlong *)(param_2 + 0x210);
  piVar1 = (int *)(lVar13 + 0x10);
  LOCK();
  bVar16 = *(int *)(lVar13 + 0x10) == 0;
  if (bVar16) {
    *(int *)(lVar13 + 0x10) = 1;
  }
  UNLOCK();
  local_110 = plVar10;
  local_98 = plVar10;
  local_88 = param_2;
  if (!bVar16) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    if (*(char *)(lVar13 + 0x14) == '\0') goto LAB_005d06d3;
LAB_005d0642:
    if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(lVar13 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    bVar16 = true;
    if (iVar2 == 2) {
      bVar16 = true;
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    if (*(char *)(lVar13 + 0x14) != '\0') goto LAB_005d0642;
LAB_005d06d3:
    local_a8 = param_1;
    auVar18 = <hashbrown[b5c94476ffc33875]::map::HashMap<u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>,std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::insert(lVar13 + 0x18,local_118,plVar10);
    plVar15 = auVar18._8_8_;
    local_108 = auVar18._0_4_;
    uStack_104 = auVar18._4_4_;
    uStack_100 = auVar18._8_4_;
    uStack_fc = auVar18._12_4_;
    if ((auVar18._0_8_ != 0) && (plVar15 != (longlong *)0x0)) {
      uVar9 = (*(code *)PTR_set_complete_00799058)();
      if ((uVar9 & 5) == 1) {
        (**(code **)(plVar15[4] + 0x10))();
      }
      LOCK();
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
        ::drop_slow(&uStack_100);
      }
    }
    param_1 = local_a8;
    if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(lVar13 + 0x14) = 1;
    }
    bVar16 = false;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
      bVar16 = false;
    }
  }
  local_150 = 0;
  local_140 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar11 != (undefined4 *)0x0) {
    *(undefined4 *)((longlong)puVar11 + 3) = 0x6370726e;
    *puVar11 = 0x6e6f736a;
    local_168 = 7;
    local_158 = 7;
    local_160 = puVar11;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar12 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar12 == (undefined2 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005d0ec4;
    }
    *(undefined1 *)(puVar12 + 1) = 0x30;
    *puVar12 = 0x2e32;
    local_108 = CONCAT31(local_108._1_3_,3);
    uStack_100 = 3;
    uStack_fc = 0;
    uStack_f8 = SUB84(puVar12,0);
    uStack_f4 = (undefined4)((ulonglong)puVar12 >> 0x20);
    uStack_f0 = 3;
    uStack_ec = 0;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_138,&local_150,&local_168,&local_108);
    if ((char)local_138 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_138);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar11 != (undefined4 *)0x0) {
      *(undefined2 *)puVar11 = 0x6469;
      local_168 = 2;
      local_158 = 2;
      local_108 = CONCAT31(local_108._1_3_,2);
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_f8 = (undefined4)local_118;
      uStack_f4 = (undefined4)((ulonglong)local_118 >> 0x20);
      local_160 = puVar11;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_138,&local_150,&local_168,&local_108);
      if ((char)local_138 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_138);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar11 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar11 + 1) = 0x646f;
        *puVar11 = 0x6874656d;
        local_168 = 6;
        local_158 = 6;
        local_160 = puVar11;
        if (param_4 < 0) {
LAB_005d0919:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005d0ec4;
        }
        if (param_4 == 0) {
          lVar13 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar13 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar13 == 0) goto LAB_005d0919;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_4);
        }
        local_108 = CONCAT31(local_108._1_3_,3);
        uStack_100 = (undefined4)param_4;
        uStack_fc = (undefined4)((ulonglong)param_4 >> 0x20);
        uStack_f8 = (undefined4)lVar13;
        uStack_f4 = (undefined4)((ulonglong)lVar13 >> 0x20);
        uStack_f0 = uStack_100;
        uStack_ec = uStack_fc;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_138,&local_150,&local_168,&local_108);
        if ((char)local_138 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_138);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar11 != (undefined4 *)0x0) {
          *(undefined2 *)(puVar11 + 1) = 0x736d;
          *puVar11 = 0x61726170;
          local_168 = 6;
          local_158 = 6;
          local_160 = puVar11;
          <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
          ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_108,local_a0);
          if ((char)local_108 == -1) {
            local_138 = CONCAT44(uStack_fc,uStack_100);
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                       &local_138,&PTR_s_src_acp_backend_rs_0078e4a8);
            goto LAB_005d0ec4;
          }
          local_128 = uStack_f8;
          uStack_124 = uStack_f4;
          uStack_120 = uStack_f0;
          uStack_11c = uStack_ec;
          local_138 = CONCAT44(uStack_104,local_108);
          uStack_130 = uStack_100;
          uStack_12c = uStack_fc;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_108,&local_150,&local_168,&local_138);
          if ((char)local_108 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_108);
          }
          lVar13 = local_88;
          local_78 = (undefined4)local_150;
          uStack_74 = local_150._4_4_;
          uStack_70 = uStack_148;
          uStack_6c = uStack_144;
          local_68 = local_140;
          local_80[0] = 5;
          send_raw_json(local_60,local_88,local_80);
          if (local_60[0] == -1) {
            *(longlong *)(param_1 + 8) = local_118;
            *(longlong **)(param_1 + 0x10) = plVar10;
            *param_1 = 0xff;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_80);
            if (!bVar16) goto LAB_005d0df3;
            uVar9 = (*(code *)PTR_set_complete_00799058)();
            if ((uVar9 & 5) == 1) {
              (**(code **)(plVar10[4] + 0x10))();
            }
LAB_005d0de3:
            LOCK();
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
              ::drop_slow(&local_110);
            }
LAB_005d0df3:
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_a0);
            return param_1;
          }
          cancel_pending_rpc(lVar13,local_118);
          local_150 = 0;
          local_140 = 0;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = 0x65646f63;
            local_168 = 4;
            local_158 = 4;
            local_108 = CONCAT31(local_108._1_3_,2);
            uStack_100 = 1;
            uStack_fc = 0;
            uStack_f8 = 0xffff8300;
            uStack_f4 = 0xffffffff;
            local_160 = puVar11;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_138,&local_150,&local_168,&local_108);
            if ((char)local_138 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_138);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar11 != (undefined4 *)0x0) {
              *(undefined4 *)((longlong)puVar11 + 3) = 0x65676173;
              *puVar11 = 0x7373656d;
              local_168 = 7;
              local_158 = 7;
              local_160 = puVar11;
              if (local_50 < 0) {
LAB_005d0bbf:
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_005d0ec4;
              }
              if (local_50 == 0) {
                lVar13 = 1;
              }
              else {
                local_a8 = param_1;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar13 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar13 == 0) goto LAB_005d0bbf;
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,local_50);
                param_1 = local_a8;
              }
              local_108 = CONCAT31(local_108._1_3_,3);
              uStack_100 = (undefined4)local_50;
              uStack_fc = (undefined4)((ulonglong)local_50 >> 0x20);
              uStack_f8 = (undefined4)lVar13;
              uStack_f4 = (undefined4)((ulonglong)lVar13 >> 0x20);
              uStack_f0 = uStack_100;
              uStack_ec = uStack_fc;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_138,&local_150,&local_168,&local_108);
              if ((char)local_138 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_138);
              }
              uStack_104._3_1_ = (undefined1)local_150;
              uStack_100 = (undefined4)((ulonglong)local_150 >> 8);
              uStack_fc._0_3_ = (undefined3)((ulonglong)local_150 >> 0x28);
              uStack_fc._3_1_ = (undefined1)uStack_148;
              uStack_f8 = (undefined4)(CONCAT44(uStack_144,uStack_148) >> 8);
              uVar5 = (undefined3)((uint)uStack_144 >> 8);
              uStack_f4._3_1_ = (undefined1)local_140;
              uStack_f4 = CONCAT13(uStack_f4._3_1_,uVar5);
              uStack_f0 = (undefined4)((ulonglong)local_140 >> 8);
              uStack_ec._0_3_ = (undefined3)((ulonglong)local_140 >> 0x28);
              *param_1 = 5;
              *(undefined4 *)(param_1 + 1) = local_108;
              *(undefined4 *)(param_1 + 5) = uStack_104;
              *(undefined4 *)(param_1 + 9) = uStack_100;
              *(undefined4 *)(param_1 + 0xd) = uStack_fc;
              *(ulonglong *)(param_1 + 0x10) = CONCAT35(uVar5,CONCAT41(uStack_f8,uStack_fc._3_1_));
              *(undefined8 *)(param_1 + 0x18) = local_140;
              if (local_60[0] != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(local_140,1);
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (local_80);
              uVar14 = plVar10[6];
              do {
                LOCK();
                uVar3 = plVar10[6];
                bVar17 = uVar14 == uVar3;
                if (bVar17) {
                  plVar10[6] = uVar14 | 4;
                }
                else {
                  uVar14 = uVar3;
                }
                UNLOCK();
              } while (!bVar17);
              if (((uint)uVar14 & 10) == 8) {
                (**(code **)(plVar10[2] + 0x10))();
              }
              if (((uint)uVar14 & 3) == 1) {
                LOCK();
                plVar10[6] = plVar10[6] & 0xfffffffffffffffe;
                UNLOCK();
                (*(code *)PTR_drop_task_00799060)();
              }
              if ((uVar14 & 2) != 0) {
                local_e8 = plVar10[0xb];
                local_108 = (undefined4)plVar10[7];
                uStack_104 = *(undefined4 *)((longlong)plVar10 + 0x3c);
                lVar13 = plVar10[7];
                uStack_100 = (undefined4)plVar10[8];
                uStack_fc = *(undefined4 *)((longlong)plVar10 + 0x44);
                uStack_f8 = (undefined4)plVar10[9];
                uStack_f4 = *(undefined4 *)((longlong)plVar10 + 0x4c);
                uStack_f0 = (undefined4)plVar10[10];
                uStack_ec = *(undefined4 *)((longlong)plVar10 + 0x54);
                plVar10[7] = 2;
                if (lVar13 != 2) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&uStack_100);
                }
              }
              LOCK();
              *plVar10 = *plVar10 + -1;
              UNLOCK();
              if (*plVar10 == 0) {
                <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                ::drop_slow(&local_98);
              }
              if (!bVar16) goto LAB_005d0df3;
              uVar9 = (*(code *)PTR_set_complete_00799058)();
              if ((uVar9 & 5) == 1) {
                (**(code **)(plVar10[4] + 0x10))();
              }
              goto LAB_005d0de3;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005d0ec4;
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005d0ec4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


