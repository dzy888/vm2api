// 00527740 reconcile_on_startup

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::reconcile_on_startup */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::reconcile_on_startup
          (longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  uint extraout_XMM0_Da;
  uint local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_64;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [3];
  
  (*(code *)PTR_now_00799478)();
  iVar14 = (int)local_a0 >> 0xd;
  iVar12 = iVar14 + -1;
  iVar10 = 0;
  if (iVar14 < 1) {
    iVar10 = (1U - iVar14) / 400 + 1;
    iVar12 = iVar12 + iVar10 * 400;
    iVar10 = iVar10 * -0x23ab1;
  }
  uVar11 = (uStack_98 & 0xffffffff) / 1000000 +
           ((longlong)
            (int)((((local_a0 >> 4 & 0x1ff) + iVar10) - iVar12 / 100) + (iVar12 * 0x5b5 >> 2) +
                  (iVar12 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)uStack_9c) * 1000;
  uVar9 = 0;
  if (0 < (longlong)uVar11) {
    uVar9 = uVar11;
  }
  (*(code *)PTR_now_00799478)();
  uVar17 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
           ::to_rfc3339(local_48,&local_a0);
  local_80 = 0;
  local_78 = 8;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar16 = *(longlong *)(param_2 + 0x38);
    lVar15 = *(longlong *)(param_2 + 0x40) * 0x280;
    lVar13 = 0;
    local_58 = param_2;
    local_50 = param_1;
    do {
      if (*(char *)(lVar16 + 0x27a) == '\x01') {
        local_64 = 1;
        if (*(longlong *)(lVar16 + 0x1d8) != -1) {
          uVar11 = 0;
          if (*(ulonglong *)(lVar16 + 0x208) <= uVar9) {
            uVar11 = uVar9 - *(ulonglong *)(lVar16 + 0x208);
          }
          if ((uVar11 < 0x493e1) && (local_64 = *(int *)(lVar16 + 0x210) + 1, local_64 == 0)) {
            local_64 = -1;
          }
        }
        *(undefined1 *)(lVar16 + 0x27a) = 3;
        local_88 = *(undefined8 *)(lVar16 + 0x1c0);
        local_60 = *(undefined8 *)(lVar16 + 0x1c8);
        uVar3 = *(undefined8 *)(lVar16 + 0x1d0);
        *(undefined8 *)(lVar16 + 0x1c0) = 0xffffffffffffffff;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        uVar6 = _UNK_00183c6c;
        uVar5 = _UNK_00183c68;
        uVar18 = _UNK_00183c64;
        if (puVar8 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *puVar8 = _DAT_00183c60;
        puVar8[1] = uVar18;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
        uVar2 = *(undefined1 *)(lVar16 + 0x279);
        lVar13 = *(longlong *)(lVar16 + 0x1d8);
        if (lVar13 != -1) {
          if ((*(longlong *)(lVar16 + 0x1f0) != -1) && (*(longlong *)(lVar16 + 0x1f0) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
          }
          if (lVar13 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
          }
        }
        *(undefined8 *)(lVar16 + 0x1d8) = 0x10;
        *(undefined4 **)(lVar16 + 0x1e0) = puVar8;
        *(undefined8 *)(lVar16 + 0x1e8) = 0x10;
        *(undefined8 *)(lVar16 + 0x1f0) = local_88;
        *(undefined8 *)(lVar16 + 0x1f8) = local_60;
        *(undefined8 *)(lVar16 + 0x200) = uVar3;
        *(ulonglong *)(lVar16 + 0x208) = uVar9;
        *(int *)(lVar16 + 0x210) = local_64;
        *(undefined1 *)(lVar16 + 0x214) = uVar2;
        *(undefined2 *)(lVar16 + 0x278) = 0;
        puVar7 = PTR_clone_00798fd0;
        uVar18 = (*(code *)PTR_clone_00798fd0)();
        if (*(longlong *)(lVar16 + 0x60) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
        }
        *(undefined8 *)(lVar16 + 0x70) = local_90;
        *(uint *)(lVar16 + 0x60) = local_a0;
        *(uint *)(lVar16 + 100) = uStack_9c;
        *(uint *)(lVar16 + 0x68) = (uint)uStack_98;
        *(uint *)(lVar16 + 0x6c) = uStack_98._4_4_;
        *(ulonglong *)(lVar16 + 0x260) = uVar9;
        (*(code *)puVar7)();
        lVar13 = local_70;
        if (local_70 == local_80) {
          (*(code *)PTR_grow_one_00799328)();
        }
        *(undefined8 *)(local_78 + 0x10 + lVar13 * 0x18) = local_90;
        puVar1 = (uint *)(local_78 + lVar13 * 0x18);
        *puVar1 = local_a0;
        puVar1[1] = uStack_9c;
        puVar1[2] = (uint)uStack_98;
        puVar1[3] = uStack_98._4_4_;
        lVar13 = lVar13 + 1;
        uVar17 = local_a0;
        local_70 = lVar13;
      }
      param_1 = local_50;
      lVar16 = lVar16 + 0x280;
      lVar15 = lVar15 + -0x280;
    } while (lVar15 != 0);
    if (lVar13 != 0) {
      uVar9 = persist(local_58);
      uVar17 = extraout_XMM0_Da;
      if (uVar9 != 0) {
        if ((1 < ((uint)uVar9 & 3) - 2) && ((uVar9 & 3) != 0)) {
          uStack_98 = uVar9 - 1;
          local_a0 = CONCAT31(local_a0._1_3_,3);
          uVar17 = (*(code *)PTR_drop_00799040)();
        }
      }
    }
  }
  param_1[2] = local_70;
  *param_1 = local_80;
  param_1[1] = local_78;
  if (local_48[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
  }
  return param_1;
}


