// 0070c030 register_unchecked_impl

/* signal_hook_registry[9dd8ecc3788bb260]::register_unchecked_impl */

undefined8 * __rustcall
signal_hook_registry[9dd8ecc3788bb260]::register_unchecked_impl
          (undefined4 param_1,undefined8 *param_2,int param_3,longlong *param_4,undefined8 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar21;
  byte local_2dc;
  longlong local_2a8;
  longlong local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  ulonglong local_288;
  longlong local_278;
  ulonglong *local_270;
  int *local_268;
  byte local_260;
  longlong *local_258;
  undefined8 local_250;
  undefined1 local_248 [16];
  ulonglong local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  code *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8 [22];
  int local_38;
  
  local_258 = param_4;
  local_250 = param_5;
  if (GLOBAL_INIT != 0) {
    local_180 = (code *)CONCAT71(local_180._1_7_,1);
    local_248._0_8_ = &local_180;
    param_1 = (*(code *)PTR_call_0079a178)
                        (&DAT_007956e8,local_248,&PTR_s__vendor_signal_hook_registry_1_4_007957e8);
  }
  lVar13 = GLOBAL_DATA;
  if (GLOBAL_DATA == 0) {
    (*(code *)PTR_expect_failed_00799440)(param_1,&PTR_s__vendor_signal_hook_registry_1_4_007957d0);
  }
  else {
    piVar11 = (int *)(GLOBAL_DATA + 0x20);
    LOCK();
    bVar18 = *(int *)(GLOBAL_DATA + 0x20) == 0;
    if (bVar18) {
      *(int *)(GLOBAL_DATA + 0x20) = 1;
    }
    UNLOCK();
    if (!bVar18) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      local_260 = 0;
    }
    else {
      local_260 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      local_260 = local_260 ^ 1;
    }
    puVar1 = *(ulonglong **)(lVar13 + 0x10);
    local_278 = lVar13;
    local_270 = puVar1;
    local_268 = piVar11;
    <alloc[12e961f32105355]::vec::Vec<(i32,signal_hook_registry[9dd8ecc3788bb260]::Slot)>as_core[c0acaeba6ab4c2e0]::clone::Clone>
    ::clone(local_248,puVar1[3],puVar1[4],*(undefined1 *)(lVar13 + 0x24));
    local_288 = local_238;
    local_298 = local_248._0_4_;
    uStack_294 = local_248._4_4_;
    uStack_290 = local_248._8_4_;
    uStack_28c = local_248._12_4_;
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    local_2a8 = uVar2 + 1;
    local_2a0 = uVar3 + (0xfffffffffffffffe < uVar2);
    lVar14 = local_238 * 0xc0;
    lVar17 = 0;
    do {
      if (lVar14 == lVar17) {
        piVar11 = (int *)(lVar13 + 0x48);
        LOCK();
        bVar18 = *(int *)(lVar13 + 0x48) == 0;
        if (bVar18) {
          *(int *)(lVar13 + 0x48) = 1;
        }
        UNLOCK();
        if (!bVar18) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          local_2dc = 0;
        }
        else {
          local_2dc = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          local_2dc = local_2dc ^ 1;
        }
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_248._0_8_ = 0;
        local_248._8_8_ = 0;
        local_1b8 = 0;
        iVar8 = (*(code *)PTR_sigaction_0079aa08)(0,local_248);
        uVar6 = local_248._0_8_;
        if (iVar8 == 0) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,0x90);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar10 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
            goto LAB_0070ca26;
          }
          *puVar10 = 1;
          puVar10[1] = uVar6;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,0x90);
          *(int *)(puVar10 + 0x14) = param_3;
          LOCK();
          *(undefined8 **)(lVar13 + 0x38) = puVar10;
          UNLOCK();
          bVar18 = *(longlong *)(lVar13 + 0x28) == 0;
          uVar15 = *(ulonglong *)(lVar13 + 0x30);
          bVar19 = uVar15 == 0;
          LOCK();
          *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
          UNLOCK();
          if (*(longlong *)(lVar13 + 0x28) != 0 || uVar15 != 0) {
            uVar16 = 1;
            do {
              if ((uVar16 & 0xf) == 0) {
                (*(code *)PTR_yield_now_00799b28)();
              }
              bVar20 = !bVar18;
              bVar18 = true;
              if (bVar20) {
                bVar18 = *(longlong *)(lVar13 + 0x28) == 0;
              }
              bVar20 = bVar19 == false;
              bVar19 = true;
              if (bVar20) {
                bVar19 = *(longlong *)(lVar13 + 0x30) == 0;
              }
              uVar15 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar18 & bVar19) & 0xffffffff;
              uVar16 = uVar16 + 1;
            } while ((bVar18 & bVar19) != 1);
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,8);
          if (((local_2dc == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
            *(undefined1 *)(lVar13 + 0x4c) = 1;
          }
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = 0;
          UNLOCK();
          if (iVar8 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          uStack_f0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_180 = handler;
          local_f8 = 0x10000004;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_228 = 0;
          uStack_220 = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_248._0_8_ = 0;
          local_248._8_8_ = 0;
          local_1b8 = 0;
          iVar8 = (*(code *)PTR_sigaction_0079aa08)(0,local_248);
          if (iVar8 == 0) {
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,0x98);
            local_e8[0] = 0;
            local_e8[1] = 0x10;
            local_e8[2] = 0;
            local_38 = param_3;
            local_248 = <signal_hook_registry[9dd8ecc3788bb260]::vec_map::VecMap<signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<'a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>>
                        ::insert(local_e8,uVar2,uVar3,param_4,param_5);
            plVar12 = local_248._0_8_;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *plVar12 = *plVar12 + -1;
              UNLOCK();
              if (*plVar12 == 0) {
                (*(code *)PTR_drop_slow_0079a9f0)();
              }
            }
            uVar15 = local_288;
            puVar5 = PTR_memcpy_00799008;
            uVar16 = 0xffffffffffffffff;
            lVar13 = 0;
            do {
              if (local_288 * 0xc0 == lVar13) {
                local_248._0_4_ = param_3;
                uVar21 = (*(code *)PTR_memcpy_00799008)(lVar13,0xb8);
                if (uVar15 == CONCAT44(uStack_294,local_298)) {
                  uVar21 = (*(code *)PTR_grow_one_0079aa10)();
                }
                (*(code *)PTR_memcpy_00799008)(uVar21,0xc0);
                local_288 = uVar15 + 1;
                goto LAB_0070c1c5;
              }
              uVar16 = uVar16 + 1;
              lVar17 = lVar13 + 0xc0;
              piVar11 = (int *)(CONCAT44(uStack_28c,uStack_290) + lVar13);
              lVar13 = lVar17;
            } while (*piVar11 != param_3);
            if (uVar16 < local_288) {
              uVar21 = (*(code *)PTR_memcpy_00799008)(lVar17,0xb8);
              (*(code *)puVar5)(uVar21,0xb8);
              if (local_248._0_8_ != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <alloc[12e961f32105355]::vec::Vec<(signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<_a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&_a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>)>>
                          (local_248,local_e8);
              }
              goto LAB_0070c1c5;
            }
            (*(code *)PTR_panic_bounds_check_00799520)
                      (lVar17,&PTR_s__vendor_signal_hook_registry_1_4_007957a0);
            goto LAB_0070ca26;
          }
          piVar11 = (int *)(*(code *)PTR___errno_location_007990a0)();
          iVar8 = *piVar11;
          uVar21 = extraout_XMM0_Da_04;
          if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00795788) {
            uVar21 = (*(code *)PTR_set_functions_inner_007990c0)();
          }
          param_2[1] = (longlong)iVar8 << 0x20 | 2;
          *param_2 = 1;
        }
        else {
          piVar9 = (int *)(*(code *)PTR___errno_location_007990a0)();
          iVar8 = *piVar9;
          uVar21 = extraout_XMM0_Da_01;
          if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00795788) {
            uVar21 = (*(code *)PTR_set_functions_inner_007990c0)();
          }
          param_2[1] = (longlong)iVar8 << 0x20 | 2;
          *param_2 = 1;
          if ((local_2dc == 0) &&
             ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
            cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            uVar21 = extraout_XMM0_Da_05;
            if (cVar7 == '\0') {
              *(undefined1 *)(lVar13 + 0x4c) = 1;
            }
          }
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = 0;
          UNLOCK();
          if (iVar8 == 2) {
            uVar21 = (*(code *)PTR_wake_00799010)();
          }
        }
        lVar13 = CONCAT44(uStack_28c,uStack_290) + 8;
        for (lVar17 = local_288 + 1; lVar17 != 1; lVar17 = lVar17 + -1) {
          uVar21 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <alloc[12e961f32105355]::vec::Vec<(signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<_a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&_a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>)>>
                             (lVar13);
          lVar13 = lVar13 + 0xc0;
        }
        if (CONCAT44(uStack_294,local_298) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,8);
        }
        piVar11 = local_268;
        if (((local_260 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
          *(undefined1 *)(piVar11 + 1) = 1;
        }
        LOCK();
        iVar8 = *piVar11;
        *piVar11 = 0;
        UNLOCK();
        if (iVar8 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        LOCK();
        *param_4 = *param_4 + -1;
        UNLOCK();
        if (*param_4 == 0) {
          (*(code *)PTR_drop_slow_0079a9f0)();
          return param_2;
        }
        return param_2;
      }
      piVar11 = (int *)(local_248._8_8_ + lVar17);
      lVar17 = lVar17 + 0xc0;
    } while (*piVar11 != param_3);
    uVar15 = 0xffffffffffffffff;
    lVar13 = local_248._8_8_ + -0xb8;
    do {
      if (lVar14 == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        goto LAB_0070ca26;
      }
      uVar15 = uVar15 + 1;
      lVar17 = lVar13 + 0xc0;
      lVar14 = lVar14 + -0xc0;
      piVar11 = (int *)(lVar13 + 0xb8);
      lVar13 = lVar17;
    } while (*piVar11 != param_3);
    if (uVar15 < local_238) {
      local_248 = <signal_hook_registry[9dd8ecc3788bb260]::vec_map::VecMap<signal_hook_registry[9dd8ecc3788bb260]::ActionId,alloc[12e961f32105355]::sync::Arc<dyn_for<'a>core[c0acaeba6ab4c2e0]::ops::function::Fn<(&'a_libc[744cd4d62be2923e]::new::glibc::sysdeps::unix::linux::bits::types::siginfo_t::siginfo_t,),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>>
                  ::insert(lVar17,uVar2,uVar3,param_4,param_5);
      plVar12 = local_248._0_8_;
      if (plVar12 == (longlong *)0x0) {
LAB_0070c1c5:
        <signal_hook_registry[9dd8ecc3788bb260]::half_lock::WriteGuard<signal_hook_registry[9dd8ecc3788bb260]::SignalData>>
        ::store(&local_278,&local_2a8);
        piVar11 = local_268;
        param_2[2] = uVar2;
        param_2[3] = uVar3;
        *(int *)(param_2 + 4) = param_3;
        *param_2 = 0;
        if ((local_260 == 0) &&
           ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
          cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          if (cVar7 == '\0') {
            *(undefined1 *)(piVar11 + 1) = 1;
          }
        }
        LOCK();
        iVar8 = *piVar11;
        *piVar11 = 0;
        UNLOCK();
        if (iVar8 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        return param_2;
      }
      LOCK();
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      uVar21 = extraout_XMM0_Da;
      if (*plVar12 == 0) {
        uVar21 = (*(code *)PTR_drop_slow_0079a9f0)();
      }
      (*(code *)PTR_panic_00799338)(uVar21,&PTR_s__vendor_signal_hook_registry_1_4_00795770);
    }
    else {
      (*(code *)PTR_panic_bounds_check_00799520)
                (lVar17,&PTR_s__vendor_signal_hook_registry_1_4_007957a0);
    }
  }
LAB_0070ca26:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


