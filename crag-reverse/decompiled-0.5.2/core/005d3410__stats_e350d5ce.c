// 005d3410 stats

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::stats */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::stats
          (undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  ulonglong extraout_RDX;
  ulonglong extraout_RDX_00;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined8 uStack_4f;
  undefined8 local_47;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  LOCK();
  bVar12 = *(int *)(param_2 + 0x2d8) == 0;
  if (bVar12) {
    *(int *)(param_2 + 0x2d8) = 1;
  }
  UNLOCK();
  if (!bVar12) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar7 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(param_2 + 0x2dc) == '\0') {
      local_130 = *(undefined8 *)(param_2 + 0x2f8);
LAB_005d3494:
      if (((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0) &&
         (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
        *(undefined1 *)(param_2 + 0x2dc) = 1;
      }
      goto LAB_005d34a1;
    }
LAB_005d3470:
    if (((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(param_2 + 0x2dc) = 1;
    }
  }
  else {
    cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (*(char *)(param_2 + 0x2dc) == '\0') {
      local_130 = *(undefined8 *)(param_2 + 0x2f8);
      if (cVar9 == '\0') goto LAB_005d34a1;
      goto LAB_005d3494;
    }
    if (cVar9 != '\0') goto LAB_005d3470;
  }
  local_130 = 0;
LAB_005d34a1:
  LOCK();
  iVar2 = *(int *)(param_2 + 0x2d8);
  *(int *)(param_2 + 0x2d8) = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  piVar1 = (int *)(param_2 + 0x238);
  LOCK();
  bVar12 = *(int *)(param_2 + 0x238) == 0;
  if (bVar12) {
    *(int *)(param_2 + 0x238) = 1;
  }
  UNLOCK();
  if (bVar12) {
    uVar11 = *(ulonglong *)puVar7;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar11 = *(ulonglong *)puVar7;
  }
  if ((uVar11 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = *(char *)(param_2 + 0x23c);
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar9 = *(char *)(param_2 + 0x23c);
  }
  if (cVar9 == '\0') {
    lVar10 = (*(code *)PTR_elapsed_00799270)();
    if ((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) {
      param_3 = param_3 & 0xffffffff;
      cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      if (cVar9 == '\0') {
        *(undefined1 *)(param_2 + 0x23c) = 1;
      }
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      param_3 = param_3 & 0xffffffff;
      (*(code *)PTR_wake_00799010)();
    }
    local_138 = (param_3 & 0xffffffff) / 1000000 + lVar10 * 1000;
  }
  else {
    if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(param_2 + 0x23c) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    local_138 = 0;
  }
  piVar1 = (int *)(param_2 + 0x250);
  LOCK();
  bVar12 = *(int *)(param_2 + 0x250) == 0;
  if (bVar12) {
    *(int *)(param_2 + 0x250) = 1;
  }
  UNLOCK();
  if (bVar12) {
    uVar11 = *(ulonglong *)puVar7;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar11 = *(ulonglong *)puVar7;
  }
  if ((uVar11 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = *(char *)(param_2 + 0x254);
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
    cVar9 = *(char *)(param_2 + 0x254);
  }
  if (cVar9 == '\0') {
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities_as_core[c0acaeba6ab4c2e0]::clone::Clone>
    ::clone(&local_98,param_2 + 600);
    uVar11 = extraout_RDX_00;
    if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(param_2 + 0x254) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    uStack_ef = uStack_87;
    uStack_e8 = uStack_80;
    uStack_e7 = (undefined7)uStack_7f;
    local_e0 = (undefined1)((ulonglong)uStack_7f >> 0x38);
    uStack_df = (undefined7)local_77;
    uStack_d8 = (undefined1)((ulonglong)local_77 >> 0x38);
    uStack_d7 = (undefined7)uStack_6f;
    local_d0 = (undefined1)((ulonglong)uStack_6f >> 0x38);
    uStack_cf = (undefined7)local_67;
    uStack_c8 = (undefined1)((ulonglong)local_67 >> 0x38);
    uStack_c7 = (undefined7)uStack_5f;
    local_c0 = (undefined1)((ulonglong)uStack_5f >> 0x38);
    uStack_bf = (undefined7)local_57;
    uStack_b8 = (undefined1)((ulonglong)local_57 >> 0x38);
    uStack_b7 = (undefined7)uStack_4f;
    local_b0 = (undefined1)((ulonglong)uStack_4f >> 0x38);
    uStack_af = (undefined7)local_47;
    uStack_a8 = (undefined1)((ulonglong)local_47 >> 0x38);
    uStack_a7 = uStack_3f;
    local_a0 = uStack_38;
    uStack_9f = uStack_37;
    local_100 = local_98;
    uStack_fc = uStack_94;
    uStack_f8 = uStack_90;
    uStack_f4 = uStack_8c;
    local_f0 = local_88;
  }
  else {
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities_as_core[c0acaeba6ab4c2e0]::clone::Clone>
    ::clone(&local_100,param_2 + 0x198);
    uVar11 = extraout_RDX;
    if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
      *(undefined1 *)(param_2 + 0x254) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  uVar4 = *(undefined4 *)(param_2 + 0x5b0);
  cVar9 = *(char *)(*(longlong *)(param_2 + 0x230) + 0x10);
  cVar3 = *(char *)(param_2 + 0x5b4);
  uVar5 = *(undefined8 *)(param_2 + 0x348);
  uVar6 = *(undefined8 *)(param_2 + 0x350);
  if ((*(uint *)(param_2 + 0x5b0) < 2) || (*(char *)(*(longlong *)(param_2 + 0x230) + 0x10) == '\0')
     ) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar11;
    auVar13 = auVar13 << 0x40;
  }
  else {
    auVar13 = craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at
                        ("/",1,*(undefined4 *)(param_2 + 0x5b0));
    local_128 = auVar13._8_8_;
  }
  uVar11 = auVar13._8_8_;
  lVar10 = (*(code *)PTR_elapsed_00799270)();
  param_1[0x14] = CONCAT71(uStack_9f,local_a0);
  param_1[0x12] = CONCAT71(uStack_af,local_b0);
  param_1[0x13] = CONCAT71(uStack_a7,uStack_a8);
  param_1[0x10] = CONCAT71(uStack_bf,local_c0);
  param_1[0x11] = CONCAT71(uStack_b7,uStack_b8);
  param_1[0xe] = CONCAT71(uStack_cf,local_d0);
  param_1[0xf] = CONCAT71(uStack_c7,uStack_c8);
  param_1[0xc] = CONCAT71(uStack_df,local_e0);
  param_1[0xd] = CONCAT71(uStack_d7,uStack_d8);
  param_1[10] = CONCAT71(uStack_ef,local_f0);
  param_1[0xb] = CONCAT71(uStack_e7,uStack_e8);
  param_1[8] = CONCAT44(uStack_fc,local_100);
  param_1[9] = CONCAT44(uStack_f4,uStack_f8);
  param_1[2] = local_118;
  param_1[3] = uStack_110;
  param_1[4] = local_108;
  *(bool *)((longlong)param_1 + 0xd4) = cVar9 != '\0';
  param_1[5] = CONCAT44(uStack_94,local_98);
  param_1[6] = CONCAT44(uStack_8c,uStack_90);
  param_1[7] = CONCAT71(uStack_87,local_88);
  *(undefined4 *)(param_1 + 0x1a) = uVar4;
  *(bool *)((longlong)param_1 + 0xd5) = cVar3 != '\0';
  param_1[0x15] = uVar5;
  param_1[0x16] = local_130;
  param_1[0x17] = uVar6;
  *param_1 = auVar13._0_8_;
  param_1[1] = local_128;
  param_1[0x18] = (uVar11 & 0xffffffff) / 1000000 + lVar10 * 1000;
  param_1[0x19] = local_138;
  return param_1;
}


