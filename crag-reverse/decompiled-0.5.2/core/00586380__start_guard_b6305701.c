// 00586380 start_guard

/* craggemini_core[66f3c71560d70857]::guard::start_guard */

undefined8 * __rustcall craggemini_core[66f3c71560d70857]::guard::start_guard(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  longlong *local_460;
  int local_458;
  undefined4 uStack_454;
  longlong *local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  int iStack_430;
  undefined4 uStack_42c;
  longlong *local_420;
  longlong local_418;
  longlong *local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  int iStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  longlong *local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined1 local_1b0;
  undefined4 local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined1 local_38;
  
  uVar12 = (*(code *)PTR_new_00799360)();
  local_1b0 = 0;
  uVar12 = (*(code *)PTR_arg_00799368)(uVar12,0x1a);
  uVar12 = (*(code *)PTR_arg_00799368)(uVar12,5);
  uVar12 = (*(code *)PTR_arg_00799368)(uVar12,1);
  (*(code *)PTR_arg_00799368)(uVar12,7);
  (*(code *)PTR_id_007993a8)();
  lVar10 = 10;
  uVar12 = (*(code *)PTR__fmt_00799ea8)();
  if (lVar10 < 0) {
LAB_00586436:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00586b23:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar10 != 0) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar6 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar6 == 0) goto LAB_00586436;
    uVar12 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar10);
  }
  uVar12 = (*(code *)PTR_arg_00799368)(uVar12,lVar10);
  if (lVar10 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
  }
  (*(code *)PTR_stdin_00799390)();
  (*(code *)PTR_stdout_00799398)();
  (*(code *)PTR_stderr_007993a0)();
  (*(code *)PTR_spawn_007993b0)();
  if ((int)local_320 != 1) {
    local_480 = local_320._4_4_;
    uStack_47c = (undefined4)uStack_318;
    uStack_478 = (undefined4)((ulonglong)uStack_318 >> 0x20);
    uStack_474 = local_310;
    uStack_470 = uStack_30c;
    uStack_46c = uStack_308;
    uStack_468 = CONCAT44(uStack_468._4_4_,uStack_304);
    uVar12 = (*(code *)PTR_build_child_007993b8)(uStack_318,&local_480);
    local_320 = CONCAT44(uStack_3c4,local_3c8);
    uStack_318 = CONCAT44(uStack_3bc,uStack_3c0);
    if (local_320 != -1) {
      (*(code *)PTR_memcpy_00799008)(uVar12,0x98);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Command>
                (&local_278,&local_3b8);
      local_3d8 = local_310;
      uStack_3d4 = uStack_30c;
      uStack_3d0 = uStack_308;
      uStack_3cc = uStack_304;
      local_3e8 = (int)local_320;
      uStack_3e4 = local_320._4_4_;
      uStack_3e0 = (undefined4)uStack_318;
      uStack_3dc = uStack_318._4_4_;
      local_320 = 2;
      local_438 = local_2f0;
      uStack_434 = uStack_2ec;
      iStack_430 = iStack_2e8;
      uStack_42c = uStack_2e4;
      local_448 = (undefined4)local_300;
      uStack_444 = local_300._4_4_;
      uStack_440 = uStack_2f8;
      uStack_43c = uStack_2f4;
      local_300 = 2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      lVar10 = local_2e0;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 1;
        plVar7[1] = 1;
        *(undefined4 *)(plVar7 + 2) = 0;
        *(undefined1 *)((longlong)plVar7 + 0x14) = 0;
        plVar7[3] = 0;
        plVar7[4] = 1;
        plVar7[5] = 0;
        local_2e0 = 2;
        local_460 = plVar7;
        if (lVar10 == 2) {
          lVar10 = 2;
          uVar8 = 0;
          local_2d8 = extraout_XMM0_Da_00;
        }
        else {
          local_480 = (undefined4)lVar10;
          uStack_47c = (undefined4)((ulonglong)lVar10 >> 0x20);
          uStack_478 = local_2d8;
          uStack_474 = uStack_2d4;
          uStack_470 = uStack_2d0;
          uStack_46c = uStack_2cc;
          uStack_468 = local_2c8;
          (*(code *)PTR_try_current_00799eb0)();
          if (local_458 == 2) {
            local_3f8 = local_2c8;
            local_408 = local_2d8;
            uStack_404 = uStack_2d4;
            uStack_400 = uStack_2d0;
            uStack_3fc = uStack_2cc;
            uVar8 = 0;
          }
          else {
            local_3b8 = uStack_470;
            uStack_3b4 = uStack_46c;
            iStack_3b0 = (int)uStack_468;
            uStack_3ac = uStack_468._4_4_;
            local_3c8 = local_480;
            uStack_3c4 = uStack_47c;
            uStack_3c0 = uStack_478;
            uStack_3bc = uStack_474;
            LOCK();
            lVar10 = *plVar7;
            *plVar7 = *plVar7 + 1;
            UNLOCK();
            if (*plVar7 == 0 || SCARRY8(lVar10,1) != *plVar7 < 0) goto LAB_00586b23;
            local_420 = plVar7;
            (*(code *)PTR_try_current_00799eb0)();
            plVar3 = uStack_270;
            lVar10 = local_278;
            puVar2 = PTR_NEXT_ID_00799878;
            if (local_278 == 2) {
              LOCK();
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                (*(code *)PTR_drop_slow_00799130)();
              }
              <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_3c8,8);
              if (iStack_3b0 != -1) {
                (*(code *)PTR_close_00799030)();
              }
              local_2d8 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>
                                    (&local_3c8);
              uVar8 = 0;
            }
            else {
              local_418 = local_278;
              local_410 = uStack_270;
              local_268 = local_3b8;
              uStack_264 = uStack_3b4;
              iStack_260 = iStack_3b0;
              uStack_25c = uStack_3ac;
              local_278 = CONCAT44(uStack_3c4,local_3c8);
              uStack_270 = (longlong *)CONCAT44(uStack_3bc,uStack_3c0);
              local_38 = 0;
              do {
                LOCK();
                lVar6 = *(longlong *)puVar2;
                *(longlong *)puVar2 = *(longlong *)puVar2 + 1;
                UNLOCK();
              } while (lVar6 == 0);
              local_258 = plVar7;
              uVar8 = ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
                      <craggemini_core[66f3c71560d70857]::guard::spawn_stderr_drainer::_closure_0_>
                                (&local_418,&local_278);
              LOCK();
              *plVar3 = *plVar3 + -1;
              UNLOCK();
              local_2d8 = extraout_XMM0_Da_01;
              if (lVar10 == 0) {
                if (*plVar3 == 0) {
                  local_2d8 = (*(code *)PTR_drop_slow_00799078)();
                }
              }
              else if (*plVar3 == 0) {
                local_2d8 = (*(code *)PTR_drop_slow_00799070)();
              }
            }
            lVar10 = 2;
            if (CONCAT44(uStack_454,local_458) != 2) {
              if (CONCAT44(uStack_454,local_458) == 0) {
                LOCK();
                *local_450 = *local_450 + -1;
                UNLOCK();
                if (*local_450 == 0) {
                  local_2d8 = (*(code *)PTR_drop_slow_00799078)();
                }
              }
              else {
                LOCK();
                *local_450 = *local_450 + -1;
                UNLOCK();
                if (*local_450 == 0) {
                  local_2d8 = (*(code *)PTR_drop_slow_00799070)();
                }
              }
            }
          }
        }
        plVar7 = local_460;
        (*(code *)PTR_memcpy_00799008)(local_2d8,0xa8);
        local_278 = CONCAT44(uStack_3e4,local_3e8);
        uStack_270 = (longlong *)CONCAT44(uStack_3dc,uStack_3e0);
        local_268 = local_3d8;
        uStack_264 = uStack_3d4;
        iStack_260 = uStack_3d0;
        uStack_25c = uStack_3cc;
        local_190 = 0;
        local_250 = local_408;
        uStack_24c = uStack_404;
        uStack_248 = uStack_400;
        uStack_244 = uStack_3fc;
        local_240 = local_3f8;
        local_258 = (longlong *)lVar10;
        local_188 = plVar7;
        local_180 = uVar8;
        if (local_278 != 2) {
          (*(code *)PTR_as_fd_00799eb8)();
          if (CONCAT44(uStack_444,local_448) == 2) {
            uVar8 = (*(code *)PTR_<&str>_007991e8)(2,0x22);
            param_1[1] = uVar8;
            *param_1 = 0xffffffffffffffff;
          }
          else {
            uStack_470 = local_438;
            uStack_46c = uStack_434;
            uStack_468 = CONCAT44(uStack_42c,iStack_430);
            local_480 = local_448;
            uStack_47c = uStack_444;
            uStack_478 = uStack_440;
            uStack_474 = uStack_43c;
            iVar4 = (*(code *)PTR_fcntl_00799e68)(CONCAT44(uStack_444,local_448),3);
            if (iVar4 < 0) {
              puVar9 = (uint *)(*(code *)PTR___errno_location_007990a0)();
              uVar11 = (ulonglong)*puVar9;
              if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_0078dd48) {
                (*(code *)PTR_set_functions_inner_007990c0)();
              }
            }
            else {
              uVar12 = (*(code *)PTR_as_fd_00799ec0)();
              iVar5 = (*(code *)PTR_fcntl_00799e68)(uVar12,3);
              if (-1 < iVar5) {
                local_3b8 = uStack_470;
                uStack_3b4 = uStack_46c;
                iStack_3b0 = (int)uStack_468;
                uStack_3ac = uStack_468._4_4_;
                local_3c8 = local_480;
                uStack_3c4 = uStack_47c;
                uStack_3c0 = uStack_478;
                uStack_3bc = uStack_474;
                <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                ::drop(&local_3c8,0x406);
                if (iStack_3b0 != -1) {
                  (*(code *)PTR_close_00799030)();
                }
                uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                         <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>
                                   (&local_3c8);
                (*(code *)PTR_memcpy_00799008)(uVar12,0x100);
                *(int *)(param_1 + 0x20) = iVar4;
                *(int *)((longlong)param_1 + 0x104) = iVar5;
                return param_1;
              }
              (*(code *)PTR_close_00799030)();
              puVar9 = (uint *)(*(code *)PTR___errno_location_007990a0)();
              uVar11 = (ulonglong)*puVar9;
              if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_0078dd48) {
                (*(code *)PTR_set_functions_inner_007990c0)();
              }
            }
            param_1[1] = uVar11 << 0x20 | 2;
            *param_1 = 0xffffffffffffffff;
            <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(&local_480,0x406);
            if ((int)uStack_468 != -1) {
              (*(code *)PTR_close_00799030)();
            }
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_480);
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(&local_278);
          return param_1;
        }
        uVar8 = (*(code *)PTR_<&str>_007991e8)(local_408,0x21);
        param_1[1] = uVar8;
        *param_1 = 0xffffffffffffffff;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>
                  (&local_278,"execution guard stdin unavailable");
        if (CONCAT44(uStack_444,local_448) == 2) {
          return param_1;
        }
        <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Receiver>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_448);
        if (iStack_430 != -1) {
          (*(code *)PTR_close_00799030)();
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(&local_448);
        return param_1;
      }
      (*(code *)PTR_handle_alloc_error_007991d8)();
      goto LAB_00586b23;
    }
  }
  param_1[1] = uStack_318;
  *param_1 = 0xffffffffffffffff;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Command>
            (&local_278,&local_278);
  return param_1;
}


