// 004a6190 recv

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *in_FS_OFFSET;
  bool bVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da;
  longlong *local_148;
  longlong *plStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 *puStack_108;
  longlong *local_100;
  longlong *plStack_f8;
  byte local_f0;
  undefined4 local_ef;
  undefined3 uStack_eb;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  
  uVar22 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = (longlong *)0x0;
  LOCK();
  bVar21 = (int)*param_2 == 0;
  if (bVar21) {
    *(int *)param_2 = 1;
  }
  UNLOCK();
  local_68 = param_3;
  local_60 = param_4;
  if (!bVar21) {
    uVar22 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)((longlong)param_2 + 4);
  }
  else {
    bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)((longlong)param_2 + 4);
    uVar22 = extraout_XMM0_Da;
  }
  if (cVar10 != '\0') {
    uVar6 = (ulonglong)plStack_140 >> 8;
    plStack_140 = (longlong *)CONCAT71((int7)uVar6,bVar9);
    local_148 = param_2;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
               ,&local_148,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b6e0);
    goto LAB_004a6841;
  }
  lVar14 = param_2[3];
  if (lVar14 != 0) {
    lVar20 = *in_FS_OFFSET;
    lVar4 = param_2[2];
    lVar16 = 1;
    lVar18 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar18);
      if (*(longlong *)(lVar5 + 0x28) != lVar20 + -200) {
        LOCK();
        bVar21 = *(longlong *)(lVar5 + 0x18) == 0;
        if (bVar21) {
          *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar4 + 8 + lVar18);
        }
        UNLOCK();
        if (bVar21) {
          lVar14 = *(longlong *)(lVar4 + 0x10 + lVar18);
          if (lVar14 != 0) {
            *(longlong *)(lVar5 + 0x20) = lVar14;
          }
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar5 + 0x10) + 0x28);
          iVar3 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          if (iVar3 == -1) {
            uVar22 = (*(code *)PTR_futex_wake_00799b60)();
          }
          local_a8 = lVar16 - 1;
          uVar6 = param_2[3];
          local_a0 = param_1;
          if (local_a8 < uVar6) {
            plVar19 = *(longlong **)(param_2[2] + lVar18);
            puVar2 = (undefined8 *)(param_2[2] + 8 + lVar18);
            local_e8 = (longlong *)*puVar2;
            plStack_e0 = (longlong *)puVar2[1];
            uVar22 = (*(code *)PTR_memmove_00799258)(*(undefined4 *)puVar2,(uVar6 - lVar16) * 0x18);
            param_2[3] = uVar6 - 1;
            if (plVar19 != (longlong *)0x0) {
              plStack_140 = local_e8;
              plStack_138 = plStack_e0;
              local_38 = plStack_e0;
              local_148 = plVar19;
              if (((bVar9 == 0) &&
                  ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
                 (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
                *(undefined1 *)((longlong)param_2 + 4) = 1;
              }
              puVar2 = local_a0;
              LOCK();
              lVar14 = *param_2;
              *(int *)param_2 = 0;
              UNLOCK();
              if ((int)lVar14 == 2) {
                (*(code *)PTR_wake_00799010)();
              }
              plVar19 = local_38;
              puVar8 = PTR_yield_now_00799b28;
              if (local_38 == (longlong *)0x0) {
                *(undefined1 *)puVar2 = 1;
                puVar2[5] = 0xfffffffffffffffe;
                LOCK();
                *local_148 = *local_148 + -1;
                UNLOCK();
                if (*local_148 != 0) {
                  return puVar2;
                }
                goto LAB_004a6661;
              }
              if (*(char *)((longlong)local_38 + 0x39) != '\0') {
                lVar14 = local_38[5];
                lVar20 = local_38[6];
                local_38[5] = -2;
                if (lVar14 == -2) goto LAB_004a6821;
                local_78 = local_38[4];
                local_98 = *local_38;
                uStack_90 = local_38[1];
                local_88 = local_38[2];
                lStack_80 = local_38[3];
                *(undefined1 *)(local_38 + 7) = 1;
                goto LAB_004a6622;
              }
              if ((char)local_38[7] != '\0') goto LAB_004a65d0;
              uVar17 = 0;
              uVar15 = 0;
              goto LAB_004a669e;
            }
          }
          (*(code *)PTR_assert_failed_00799718)
                    (uVar22,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b650);
          goto LAB_004a6841;
        }
      }
      lVar18 = lVar18 + 0x18;
      lVar16 = lVar16 + 1;
    } while (lVar14 * 0x18 != lVar18);
  }
  if ((char)param_2[0xd] != '\0') {
    *(undefined1 *)param_1 = 1;
    param_1[5] = 0xfffffffffffffffe;
    goto joined_r0x004a6564;
  }
  local_110 = &local_58;
  plVar19 = (longlong *)(*in_FS_OFFSET + -0x20);
  puStack_108 = &local_68;
  local_100 = param_2;
  plStack_f8 = param_2;
  local_f0 = bVar9;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar19 = (longlong *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (plVar19,0), plVar19 != (longlong *)0x0)) {
    lVar14 = *plVar19;
    *plVar19 = 0;
    if (lVar14 == 0) {
      plVar19 = (longlong *)(*(code *)PTR_new_007995e8)();
      puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
      local_f0 = 2;
      local_148 = &local_58;
      local_128 = CONCAT71(local_128._1_7_,bVar9);
      plStack_140 = &local_68;
      plStack_138 = param_2;
      plStack_130 = param_2;
      recv::_closure_1_(&local_e8,&local_148,plVar19);
      LOCK();
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (*plVar19 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
    }
    else {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      local_f0 = 2;
      local_e8 = local_110;
      plStack_e0 = puStack_108;
      local_d8 = local_100;
      plStack_d0 = plStack_f8;
      local_c8._0_5_ = CONCAT41(local_ef,bVar9);
      local_c8 = CONCAT44(CONCAT31(uStack_eb,local_ef._3_1_),(undefined4)local_c8);
      recv::_closure_1_(&local_148,&local_e8,lVar14);
      local_e8 = (longlong *)*plVar19;
      *plVar19 = lVar14;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        *local_e8 = *local_e8 + -1;
        UNLOCK();
        if (*local_e8 == 0) {
          (*(code *)PTR_drop_slow_007995f0)();
        }
      }
      local_e8 = local_148;
      plStack_e0 = plStack_140;
      local_d8 = plStack_138;
      plStack_d0 = plStack_130;
      local_c8 = local_128;
      uStack_c0 = lStack_120;
      local_b8 = local_118;
      puVar13 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
    }
    local_128 = local_c8;
    plStack_138 = local_d8;
    plStack_130 = plStack_d0;
    local_148 = local_e8;
    plStack_140 = plStack_e0;
    if (uStack_c0 == -3) goto LAB_004a6516;
    param_1[4] = local_c8;
    param_1[2] = local_d8;
    param_1[3] = plStack_d0;
    *param_1 = local_e8;
    param_1[1] = plStack_e0;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_c0._4_4_;
    *(undefined4 *)(param_1 + 6) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_b8._4_4_;
  }
  else {
LAB_004a6516:
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},core[c0acaeba6ab4c2e0]::result::Result<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>),std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>
    ::_closure_2_(param_1,&local_110);
  }
  if (local_f0 == 2) {
    return param_1;
  }
  bVar9 = local_f0 & 1;
  param_2 = plStack_f8;
joined_r0x004a6564:
  if (((bVar9 == 0) && ((*puVar13 & 0x7fffffffffffffff) != 0)) &&
     (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
    *(undefined1 *)((longlong)param_2 + 4) = 1;
  }
  LOCK();
  lVar14 = *param_2;
  *(int *)param_2 = 0;
  UNLOCK();
  if ((int)lVar14 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_1;
LAB_004a669e:
  do {
    if (uVar15 < 7) {
      if (uVar15 != 0) {
        uVar11 = uVar17 & 7;
        if (6 < uVar17 - 1) {
          uVar12 = uVar17 & 0xfffffff8;
          do {
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
          if (uVar11 == 0) goto LAB_004a6683;
        }
        do {
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    else {
      (*(code *)puVar8)();
    }
LAB_004a6683:
    iVar3 = uVar15 * 2;
    uVar15 = uVar15 + 1;
    uVar17 = uVar17 + iVar3 + 1;
  } while ((char)plVar19[7] == '\0');
LAB_004a65d0:
  lVar14 = plVar19[5];
  lVar20 = plVar19[6];
  plVar19[5] = -2;
  if (lVar14 != -2) {
    local_78 = plVar19[4];
    local_98 = *plVar19;
    uStack_90 = plVar19[1];
    local_88 = plVar19[2];
    lStack_80 = plVar19[3];
    (*(code *)PTR___rust_dealloc_00798fc8)((int)*plVar19,8);
LAB_004a6622:
    puVar2[4] = local_78;
    puVar2[2] = local_88;
    puVar2[3] = lStack_80;
    *(undefined4 *)puVar2 = (undefined4)local_98;
    *(undefined4 *)((longlong)puVar2 + 4) = local_98._4_4_;
    *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_90._4_4_;
    puVar2[5] = lVar14;
    puVar2[6] = lVar20;
    LOCK();
    *local_148 = *local_148 + -1;
    UNLOCK();
    if (*local_148 != 0) {
      return puVar2;
    }
LAB_004a6661:
    (*(code *)PTR_drop_slow_007995f0)();
    return puVar2;
  }
LAB_004a6821:
  (*(code *)PTR_unwrap_failed_00799278)();
LAB_004a6841:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}


