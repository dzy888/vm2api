// 004b3d30 scoring_summary

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::scoring_summary */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::scoring_summary
          (undefined1 *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  char local_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  LOCK();
  bVar7 = *(int *)(param_2 + 0xf0) == 0;
  if (bVar7) {
    *(int *)(param_2 + 0xf0) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
    lVar5 = param_3 - *(ulonglong *)(param_2 + 0x118);
    if (*(ulonglong *)(param_2 + 0x118) <= param_3 && lVar5 != 0) {
LAB_004b3d8f:
      auVar9._8_4_ = (int)((ulonglong)lVar5 >> 0x20);
      auVar9._0_8_ = lVar5;
      auVar9._12_4_ = DAT_00182b10._4_4_;
      dVar10 = ((auVar9._8_8_ - _UNK_00182568) +
               ((double)CONCAT44((undefined4)DAT_00182b10,(int)lVar5) - _DAT_00182560)) /
               _s__00185460;
      auVar8._0_8_ = (dVar10 / _s__00185430) * _DAT_00183f40 + *(double *)(param_2 + 0xf8);
      auVar8._8_8_ = dVar10 * _UNK_00183f48 + *(double *)(param_2 + 0x100);
      auVar9 = minpd(auVar8,_s__00183ce0);
      *(undefined1 (*) [16])(param_2 + 0xf8) = auVar9;
      *(ulonglong *)(param_2 + 0x118) = param_3;
    }
  }
  else {
    bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar3 = bVar3 ^ 1;
    lVar5 = param_3 - *(ulonglong *)(param_2 + 0x118);
    if (*(ulonglong *)(param_2 + 0x118) <= param_3 && lVar5 != 0) goto LAB_004b3d8f;
  }
  local_48 = 0;
  local_38 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0x735f68746c616568;
    *(undefined4 *)(puVar6 + 1) = 0x65726f63;
    local_80 = 0xc;
    local_70 = 0xc;
    local_78 = puVar6;
    dVar10 = (double)(*(code *)PTR_round_00799ba8)(*(double *)(param_2 + 0xf8) * _s__001852b8);
    (*(code *)PTR_from_00799bb0)(dVar10 / _s__001852b8);
    if (local_a0 == -1) {
      local_68 = uStack_98;
      (*(code *)PTR_unwrap_failed_00799028)
                (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_68,
                 &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b680);
      goto LAB_004b4266;
    }
    local_68 = CONCAT71(uStack_9f,local_a0);
    local_58 = local_90;
    uStack_50 = uStack_88;
    uStack_60 = uStack_98;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_a0,&local_48,&local_80,&local_68);
    if (local_a0 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_a0);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined2 *)((longlong)puVar6 + 4) = 0x736e;
      *(undefined4 *)puVar6 = 0x656b6f74;
      local_80 = 6;
      local_70 = 6;
      local_78 = puVar6;
      dVar10 = (double)(*(code *)PTR_round_00799ba8)(*(double *)(param_2 + 0x100) * _s__001852b8);
      (*(code *)PTR_from_00799bb0)(dVar10 / _s__001852b8);
      if (local_a0 == -1) {
        local_68 = uStack_98;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_68,
                   &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b680);
        goto LAB_004b4266;
      }
      local_68 = CONCAT71(uStack_9f,local_a0);
      local_58 = local_90;
      uStack_50 = uStack_88;
      uStack_60 = uStack_98;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_a0,&local_48,&local_80,&local_68);
      if (local_a0 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_a0);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)puVar6 + 6) = 0x6e6f697463617266;
        *puVar6 = 0x72665f61746f7571;
        local_80 = 0xe;
        local_70 = 0xe;
        local_78 = puVar6;
        dVar10 = (double)(*(code *)PTR_round_00799ba8)(*(double *)(param_2 + 0x108) * DAT_001852c8);
        (*(code *)PTR_from_00799bb0)(dVar10 / DAT_001852c8);
        if (local_a0 == -1) {
          local_68 = uStack_98;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_68,
                     &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b680)
          ;
          goto LAB_004b4266;
        }
        local_68 = CONCAT71(uStack_9f,local_a0);
        local_58 = local_90;
        uStack_50 = uStack_88;
        uStack_60 = uStack_98;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_a0,&local_48,&local_80,&local_68);
        if (local_a0 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_a0);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0x6573755f7473616c;
          *(undefined4 *)(puVar6 + 1) = 0x736d5f64;
          local_80 = 0xc;
          local_70 = 0xc;
          local_90 = *(undefined8 *)(param_2 + 0x110);
          local_a0 = '\x02';
          uStack_98 = 0;
          local_78 = puVar6;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_68,&local_48,&local_80,&local_a0);
          if ((char)local_68 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_68);
          }
          *(undefined8 *)(param_1 + 0x18) = local_38;
          *(undefined8 *)(param_1 + 8) = local_48;
          *(undefined8 *)(param_1 + 0x10) = uStack_40;
          *param_1 = 5;
          if (((bVar3 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
            *(undefined1 *)(param_2 + 0xf4) = 1;
          }
          LOCK();
          iVar1 = *(int *)(param_2 + 0xf0);
          *(int *)(param_2 + 0xf0) = 0;
          UNLOCK();
          if (iVar1 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          return;
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004b4266:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


