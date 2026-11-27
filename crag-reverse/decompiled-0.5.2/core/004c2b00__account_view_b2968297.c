// 004c2b00 account_view

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::account_view */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::account_view
          (undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 extraout_EDX;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_90 = param_4;
  local_68 = param_1;
  <craggemini_core[66f3c71560d70857]::binding::BoundAccount>::summary(&local_88,param_3);
  LOCK();
  bVar12 = *(int *)(param_2 + 0x270) == 0;
  if (bVar12) {
    *(int *)(param_2 + 0x270) = 1;
  }
  UNLOCK();
  if (!bVar12) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
  }
  uVar8 = <craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>::slot_rss_soft_limit_bytes
                    (param_2 + 0x278);
  if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(param_2 + 0x274) = 1;
  }
  LOCK();
  iVar2 = *(int *)(param_2 + 0x270);
  *(int *)(param_2 + 0x270) = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  <craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit
            (&local_60,local_90,uVar8);
  local_38 = extraout_EDX;
  local_40 = (*(code *)PTR_now_007993f0)();
  (*(code *)PTR_duration_since_007993f8)(0,0);
  if ((char)local_b0 == '\0') {
    lVar11 = (ulonglong)local_a0 / 1000000 + CONCAT44(uStack_a4,uStack_a8) * 1000;
  }
  else {
    lVar11 = 0;
  }
  uVar13 = <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::status
                     (&local_b0,*(longlong *)(param_2 + 0x178) + 0x10,param_3);
  puVar9 = (undefined4 *)(*(code *)PTR_index_or_insert_007992f8)(uVar13,&local_88);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(puVar9,5);
  puVar9[4] = local_a0;
  puVar9[5] = uStack_9c;
  puVar9[6] = uStack_98;
  puVar9[7] = uStack_94;
  *puVar9 = (undefined4)local_b0;
  puVar9[1] = local_b0._4_4_;
  puVar9[2] = uStack_a8;
  puVar9[3] = uStack_a4;
  uVar13 = craggemini_core[66f3c71560d70857]::credential::credential_health
                     (&local_b0,*(undefined8 *)(param_3 + 0x110),*(undefined8 *)(param_3 + 0x118));
  puVar9 = (undefined4 *)(*(code *)PTR_index_or_insert_007992f8)(uVar13,&local_88);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(puVar9,10);
  puVar9[4] = local_a0;
  puVar9[5] = uStack_9c;
  puVar9[6] = uStack_98;
  puVar9[7] = uStack_94;
  *puVar9 = (undefined4)local_b0;
  puVar9[1] = local_b0._4_4_;
  puVar9[2] = uStack_a8;
  puVar9[3] = uStack_a4;
  lVar3 = *(longlong *)(param_2 + 0x188);
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar12 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar12) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar12) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar7 = *(char *)(lVar3 + 0x14);
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    cVar7 = *(char *)(lVar3 + 0x14);
  }
  if (cVar7 != '\0') {
    uVar5 = (uint)uStack_a8 >> 8;
    uStack_a8 = CONCAT31((int3)uVar5,bVar6);
    local_b0 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b550
               ,&local_b0,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bbe0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar13 = <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::account_summary
                     (&local_b0,lVar3 + 0x18,*(undefined8 *)(param_3 + 0xe0),
                      *(undefined8 *)(param_3 + 0xe8),lVar11);
  puVar9 = (undefined4 *)(*(code *)PTR_index_or_insert_007992f8)(uVar13,&local_88);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(puVar9,9);
  puVar9[4] = local_a0;
  puVar9[5] = uStack_9c;
  puVar9[6] = uStack_98;
  puVar9[7] = uStack_94;
  *puVar9 = (undefined4)local_b0;
  puVar9[1] = local_b0._4_4_;
  puVar9[2] = uStack_a8;
  puVar9[3] = uStack_a4;
  if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(lVar3 + 0x14) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  uVar13 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::scoring_summary
                     (&local_b0,local_90,lVar11);
  puVar9 = (undefined4 *)(*(code *)PTR_index_or_insert_007992f8)(uVar13,&local_88);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(puVar9,7);
  puVar9[4] = local_a0;
  puVar9[5] = uStack_9c;
  puVar9[6] = uStack_98;
  puVar9[7] = uStack_94;
  *puVar9 = (undefined4)local_b0;
  puVar9[1] = local_b0._4_4_;
  puVar9[2] = uStack_a8;
  puVar9[3] = uStack_a4;
  puVar10 = (undefined8 *)(*(code *)PTR_index_or_insert_007992f8)((undefined4)local_b0,&local_88);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(puVar10,4);
  puVar10[2] = local_50;
  puVar10[3] = uStack_48;
  *puVar10 = local_60;
  puVar10[1] = uStack_58;
  local_68[2] = local_78;
  local_68[3] = uStack_70;
  *local_68 = local_88;
  local_68[1] = uStack_80;
  return;
}


