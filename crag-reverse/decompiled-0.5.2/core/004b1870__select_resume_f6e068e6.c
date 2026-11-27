// 004b1870 select_resume

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::select_resume */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::select_resume
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  byte bVar12;
  char cVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  piVar1 = (int *)(param_2 + 0x150);
  LOCK();
  bVar17 = *(int *)(param_2 + 0x150) == 0;
  if (bVar17) {
    *(int *)(param_2 + 0x150) = 1;
  }
  UNLOCK();
  local_c8 = param_4;
  if (!bVar17) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
    cVar13 = *(char *)(param_2 + 0x154);
  }
  else {
    bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar12 = bVar12 ^ 1;
    cVar13 = *(char *)(param_2 + 0x154);
  }
  if (cVar13 == '\0') {
    <craggemini_core[66f3c71560d70857]::resume::SessionStore>::select_resume
              (&local_98,param_2 + 0x158,param_3,local_c8);
    if ((char)local_98 == -1) {
      <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
      <&str,alloc[12e961f32105355]::borrow::Cow<str>>
                (&local_108,0x194,"conversation_not_found",0x16,&uStack_90);
      local_78 = uStack_100;
      uVar7 = local_78;
      uStack_70 = local_f8;
      uVar8 = uStack_70;
      local_68 = uStack_f0;
      uVar9 = local_68;
      uStack_60 = uStack_e8;
      uVar10 = uStack_60;
      param_1[7] = local_d0;
      param_1[5] = local_e0;
      param_1[6] = uStack_d8;
      local_78._0_4_ = (undefined4)uStack_100;
      local_78._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
      uStack_70._0_4_ = (undefined4)local_f8;
      uStack_70._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
      local_68._0_4_ = (undefined4)uStack_f0;
      local_68._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
      uStack_60._0_4_ = (undefined4)uStack_e8;
      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_e8 >> 0x20);
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = (undefined4)uStack_70;
      uStack_4c = uStack_70._4_4_;
      local_48 = (undefined4)local_68;
      uStack_44 = local_68._4_4_;
      uStack_40 = (undefined4)uStack_60;
      uStack_3c = uStack_60._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)local_68;
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_68._4_4_;
      *(undefined4 *)(param_1 + 4) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_60._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_78;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_78._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_70._4_4_;
      *param_1 = local_108;
      local_78 = uVar7;
      uStack_70 = uVar8;
      local_68 = uVar9;
      uStack_60 = uVar10;
      if (((bVar12 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
        *(undefined1 *)(param_2 + 0x154) = 1;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
        return param_1;
      }
      return param_1;
    }
    local_b8 = local_98;
    uStack_b4 = uStack_94;
    uStack_b0 = uStack_90;
    uStack_ac = uStack_8c;
    local_a8 = local_88;
    uStack_a4 = uStack_84;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    if (((bVar12 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), local_98 = extraout_XMM0_Da_01,
       cVar13 == '\0')) {
      *(undefined1 *)(param_2 + 0x154) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      local_98 = (*(code *)PTR_wake_00799010)();
    }
    lVar3 = *(longlong *)(param_2 + 0x10);
    if (-1 < lVar3) {
      if (lVar3 == 0) {
        lVar14 = 1;
LAB_004b1a48:
        local_108 = (int *)CONCAT71(local_108._1_7_,3);
        uStack_100 = lVar3;
        local_f8 = lVar14;
        uStack_f0 = lVar3;
        puVar15 = (undefined4 *)(*(code *)PTR_index_or_insert_007992f8)(local_98,&local_b8);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (puVar15,10);
        puVar15[4] = (undefined4)local_f8;
        puVar15[5] = local_f8._4_4_;
        puVar15[6] = (undefined4)uStack_f0;
        puVar15[7] = uStack_f0._4_4_;
        *puVar15 = (undefined4)local_108;
        puVar15[1] = local_108._4_4_;
        puVar15[2] = (undefined4)uStack_100;
        puVar15[3] = uStack_100._4_4_;
        uVar11 = has_warm_conversation(param_2,param_3,local_c8);
        local_108._0_2_ = CONCAT11(uVar11,1);
        puVar16 = (undefined8 *)
                  (*(code *)PTR_index_or_insert_007992f8)(extraout_XMM0_Da_00,&local_b8);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (puVar16,0xd);
        puVar16[2] = local_f8;
        puVar16[3] = uStack_f0;
        *puVar16 = local_108;
        puVar16[1] = uStack_100;
        param_1[3] = CONCAT44(uStack_a4,local_a8);
        param_1[4] = CONCAT44(uStack_9c,uStack_a0);
        param_1[1] = CONCAT44(uStack_b4,local_b8);
        param_1[2] = CONCAT44(uStack_ac,uStack_b0);
        *param_1 = 0xfffffffffffffffe;
        return param_1;
      }
      local_c0 = *(undefined8 *)(param_2 + 8);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar14 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar14 != 0) {
        local_98 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar3);
        goto LAB_004b1a48;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    uVar5 = (ulonglong)uStack_100 >> 8;
    uStack_100 = CONCAT71((int7)uVar5,bVar12);
    local_108 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_572fb51faa0db1e51baf8d00d92dd3e9_189_llvm_7677212527096675952,&local_108,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b868);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


