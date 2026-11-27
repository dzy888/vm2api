// 007418c0 spawn

/* WARNING: Removing unreachable block (ram,0x0074236a) */
/* WARNING: Removing unreachable block (ram,0x00741eff) */
/* <std[6c98fd8553dbae28]::sys::process::unix::common::Command>::spawn */

void __rustcall
<std[6c98fd8553dbae28]::sys::process::unix::common::Command>::spawn
          (undefined4 *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  uint uVar17;
  code *pcVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined1 auVar21 [16];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 local_100;
  ulonglong local_f8;
  code *local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  undefined8 local_98 [2];
  int local_84;
  uint local_80;
  int local_7c;
  int iStack_78;
  uint uStack_74;
  undefined4 *local_70;
  uint local_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  int iStack_44;
  undefined8 local_40;
  undefined4 local_34;
  
  plVar20 = &local_a0;
  capture_env(plVar20);
  if (*(char *)(param_2 + 0xc0) != '\0') {
    *(undefined ***)(param_1 + 2) = &PTR_DAT_007968a0;
    *param_1 = 1;
    goto LAB_0074225f;
  }
  local_70 = param_1;
  setup_io(&local_2d8,param_2,param_3);
  lVar13 = local_a0;
  if ((int)local_2d8 == 1) {
    *(code **)(local_70 + 2) = uStack_2d0;
    *local_70 = 1;
    goto LAB_0074225f;
  }
  local_68 = (uint)local_2c8;
  uStack_64 = local_2c8._4_4_;
  uStack_60 = uStack_2c0;
  uStack_5c = uStack_2bc;
  local_58 = local_2b8;
  local_7c = local_2d8._4_4_;
  iStack_78 = (int)uStack_2d0;
  uStack_74 = (uint)((ulonglong)uStack_2d0 >> 0x20);
  if (*(int *)(param_2 + 0x30) == 0 && *(int *)(param_2 + 0x38) == 0) {
    if ((*(char *)(param_2 + 0x79) != '\0') || (*(char *)(param_2 + 0x78) != '\0')) {
      uVar9 = *(longlong *)(param_2 + 0x88) - 1;
      if (uVar9 < 0x10) {
        if (*(longlong *)(param_2 + 0x88) != 1) {
          uVar19 = 0;
          do {
            if (*(char *)(*(longlong *)(param_2 + 0x80) + uVar19) == '/') goto LAB_007419a1;
            uVar19 = uVar19 + 1;
          } while (uVar9 != uVar19);
        }
      }
      else {
        lVar10 = (*(code *)PTR_memchr_aligned_00799490)();
        if (lVar10 == 1) goto LAB_007419a1;
      }
      goto LAB_00741e89;
    }
LAB_007419a1:
    if (((*(longlong *)(param_2 + 0x28) != 0) || (*(longlong *)(param_2 + 0xb0) != 0)) ||
       (*(longlong *)(param_2 + 0xa0) != 0)) goto LAB_00741e89;
    cVar4 = *(char *)(param_2 + 0xc1);
    if (cVar4 == '\0') {
LAB_00741b6b:
      std[6c98fd8553dbae28]::sys::pal::unix::conf::glibc_version(&local_2d8);
      if ((char)local_2d8 != '\0') {
        bVar2 = uStack_2d0 < (code *)0x2;
        if (uStack_2d0 == (code *)0x2) {
          bVar2 = local_2c8 < 0x18;
        }
        if (!bVar2) {
          puVar1 = *(undefined4 **)(param_2 + 0x90);
          if (puVar1 == (undefined4 *)0x0) {
            pcVar18 = (code *)0x0;
          }
          else {
            pcVar18 = (code *)PTR_posix_spawn_file_actions_addchdir_np_0079ae18;
            if (PTR_posix_spawn_file_actions_addchdir_np_0079ae18 == (undefined *)0x0) {
              pcVar18 = (code *)PTR_posix_spawn_file_actions_addchdir_0079ae20;
            }
            param_1 = puVar1;
            if (pcVar18 == (code *)0x0) goto LAB_00741e89;
          }
          local_34 = CONCAT31(local_34._1_3_,cVar4);
          local_84 = *(int *)(param_2 + 0x40);
          uVar8 = *(uint *)(param_2 + 0x44);
          param_1 = (undefined4 *)(ulonglong)uVar8;
          local_b0 = pcVar18;
          local_a8 = puVar1;
          uVar17 = (*(code *)PTR_posix_spawnattr_init_0079ae28)();
          if (uVar17 != 0) {
            if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
              (*(code *)PTR_set_functions_inner_007990c0)();
            }
            pcVar18 = (code *)((ulonglong)uVar17 << 0x20 | 2);
            goto LAB_00741eaa;
          }
          local_80 = uVar8;
          uVar17 = (*(code *)PTR_posix_spawn_file_actions_init_0079ae30)();
          if (uVar17 != 0) {
            if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
              (*(code *)PTR_set_functions_inner_007990c0)();
            }
            pcVar18 = (code *)((ulonglong)uVar17 << 0x20 | 2);
            iVar6 = -1;
            goto LAB_00741e6c;
          }
          uVar5 = extraout_XMM0_Da_01;
          if ((local_68 == 0) ||
             (uVar17 = (*(code *)PTR_posix_spawn_file_actions_adddup2_0079ae38)
                                 (extraout_XMM0_Da_01,0), uVar5 = extraout_XMM0_Da_02, uVar17 == 0))
          {
            if ((uStack_60 == 0) ||
               (uVar17 = (*(code *)PTR_posix_spawn_file_actions_adddup2_0079ae38)(uVar5,1),
               uVar5 = extraout_XMM0_Da_03, uVar17 == 0)) {
              if (((uint)local_58 == 0) ||
                 (uVar17 = (*(code *)PTR_posix_spawn_file_actions_adddup2_0079ae38)(uVar5,2),
                 uVar17 == 0)) {
                if ((local_b0 == (code *)0x0) || (uVar17 = (*local_b0)(), uVar17 == 0)) {
                  if (local_84 == 0) {
                    param_1 = (undefined4 *)0x0;
                  }
                  else {
                    uVar17 = (*(code *)PTR_posix_spawnattr_setpgroup_0079ae40)();
                    if (uVar17 != 0) {
                      uVar9 = (ulonglong)uVar17;
                      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
                        (*(code *)PTR_set_functions_inner_007990c0)();
                      }
                      goto LAB_00741e51;
                    }
                    param_1 = (undefined4 *)CONCAT62((uint6)(ushort)(uVar8 >> 0x10),2);
                  }
                  if (std[6c98fd8553dbae28]::sys::pal::unix::ON_BROKEN_PIPE_USED == '\0') {
                    uVar5 = (*(code *)PTR_sigemptyset_0079ae68)();
                    std[6c98fd8553dbae28]::sys::pal::unix::cvt::<i32>(&local_50,uVar5);
                    if ((int)local_50 != 1) {
                      uVar5 = (*(code *)PTR_sigaddset_0079ae70)();
                      std[6c98fd8553dbae28]::sys::pal::unix::cvt::<i32>(&local_50,uVar5);
                      if ((int)local_50 != 1) {
                        uVar8 = (*(code *)PTR_posix_spawnattr_setsigdefault_0079ae88)();
                        if (uVar8 != 0) {
                          uVar9 = (ulonglong)uVar8;
                          if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438)
                          {
                            (*(code *)PTR_set_functions_inner_007990c0)();
                          }
                          goto LAB_00741e51;
                        }
                        param_1 = (undefined4 *)(ulonglong)((uint)param_1 & 0xffff | 4);
                        goto LAB_00741e0f;
                      }
                    }
                    pcVar18 = (code *)CONCAT44(iStack_44,iStack_48);
                    goto LAB_00741e59;
                  }
LAB_00741e0f:
                  uVar8 = (*(code *)PTR_posix_spawnattr_setflags_0079ae48)();
                  if (uVar8 == 0) {
                    if (std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK < 0x3ffffffe) {
                      std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK =
                           std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK + 1;
                      LOCK();
                      UNLOCK();
                    }
                    else {
                      (*(code *)PTR_read_contended_0079ad80)();
                    }
                    if (lVar13 == -1) {
                      puVar14 = (undefined8 *)PTR_environ_0079ae78;
                    }
                    else {
                      puVar14 = local_98;
                    }
                    if (((char)local_34 != '\0') && (posix_spawn::PIDFD_SUPPORTED == '\x01')) {
                      local_40 = CONCAT44(local_40._4_4_,0xffffffff);
                      if (PTR_pidfd_spawnp_0079ae10 == (undefined *)0x0) {
                        (*(code *)PTR_unwrap_failed_00799278)();
                      }
                      else {
                        uVar15 = *(undefined8 *)(param_2 + 0x80);
                        uVar8 = (*(code *)PTR_pidfd_spawnp_0079ae10)
                                          (&local_2d8,&local_100,*(undefined8 *)(param_2 + 8));
                        uVar9 = local_40;
                        if (uVar8 != 0) {
                          param_1 = (undefined4 *)(ulonglong)uVar8;
                          if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438)
                          {
                            (*(code *)PTR_set_functions_inner_007990c0)();
                          }
                          pcVar18 = (code *)((longlong)param_1 << 0x20 | 2);
                          iVar6 = -1;
                          if (uVar8 != 0x26) goto LAB_00742548;
                          posix_spawn::PIDFD_SUPPORTED = '\x02';
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                                    (0x2600000002,uVar15);
                          iVar6 = 2;
                          goto LAB_00742548;
                        }
                        iVar6 = (uint)local_40;
                        if ((uint)local_40 != -1) {
                          <std[6c98fd8553dbae28]::sys::process::unix::pidfd::PidFd>::pid
                                    (&local_180,local_40 & 0xffffffff);
                          if ((int)local_180 == 1) {
                            local_50 = local_178;
                            uVar5 = ::<core[c0acaeba6ab4c2e0]::io::error::Error>::kind();
                            pcVar18 = (code *)(*(code *)PTR_<&str>_007991e8)(uVar5,0x40);
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <core[c0acaeba6ab4c2e0]::io::error::Error>(&local_50,&DAT_001c01c3);
                            goto LAB_0074253c;
                          }
                          uVar19 = 0xffffffff;
                          if (-1 < iVar6) {
                            uVar19 = uVar9 & 0xffffffff;
                          }
                          pcVar18 = (code *)(uVar19 << 0x20 | local_180 >> 0x20);
                          iVar6 = 0;
                          goto LAB_00742548;
                        }
                        (*(code *)PTR_expect_failed_00799440)
                                  (extraout_XMM0_Da_04,
                                   &PTR_s__rustc_48a229ceaefd4985c50990b14_007972d8);
                      }
LAB_00742988:
                    /* WARNING: Does not return */
                      pcVar18 = (code *)invalidInstructionException();
                      (*pcVar18)();
                    }
                    local_178 = (code *)0xffffffff00000000;
                    local_180 = local_180 & 0xffffffff00000000;
                    uVar8 = (*(code *)PTR_posix_spawnp_0079ae80)
                                      (&local_2d8,&local_100,*(undefined8 *)(param_2 + 8),*puVar14);
                    pcVar18 = local_178;
                    if (uVar8 != 0) {
                      uVar9 = (ulonglong)uVar8;
                      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438)
                      goto LAB_0074292a;
                      goto LAB_00742529;
                    }
                    iVar6 = (int)local_180;
                    param_1 = (undefined4 *)(local_180 >> 0x20);
                    LOCK();
                    uVar8 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
                    UNLOCK();
                    uVar17 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
                    std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK = uVar8;
                    if (SBORROW4(0,uVar17 & 0xbfffffff)) {
                      (*(code *)PTR_wake_writer_or_readers_0079a7c8)();
                    }
                    (*(code *)PTR_posix_spawn_file_actions_destroy_0079ae50)();
                    (*(code *)PTR_posix_spawnattr_destroy_0079ae58)();
                    if (iVar6 != -1) goto LAB_00741e7f;
                    goto LAB_00741eaa;
                  }
                  uVar9 = (ulonglong)uVar8;
                  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
                    (*(code *)PTR_set_functions_inner_007990c0)();
                  }
                }
                else {
                  uVar9 = (ulonglong)uVar17;
                  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
                    (*(code *)PTR_set_functions_inner_007990c0)();
                  }
                }
              }
              else {
                uVar9 = (ulonglong)uVar17;
                if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
                  (*(code *)PTR_set_functions_inner_007990c0)();
                }
              }
            }
            else {
              uVar9 = (ulonglong)uVar17;
              if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
                (*(code *)PTR_set_functions_inner_007990c0)();
              }
            }
          }
          else {
            uVar9 = (ulonglong)uVar17;
            if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
              (*(code *)PTR_set_functions_inner_007990c0)();
            }
          }
LAB_00741e51:
          pcVar18 = (code *)(uVar9 << 0x20 | 2);
LAB_00741e59:
          iVar6 = -1;
          goto LAB_00741e5f;
        }
      }
      goto LAB_00741e89;
    }
    if (posix_spawn::PIDFD_SUPPORTED == '\x02') goto LAB_00741e89;
    if (posix_spawn::PIDFD_SUPPORTED != '\0') goto LAB_00741b6b;
    local_34 = CONCAT31(local_34._1_3_,cVar4);
    uVar5 = (*(code *)PTR_getpid_00799ef0)();
    uVar9 = (*(code *)PTR_syscall_00799e60)(extraout_XMM0_Da,0);
    if (uVar9 != 0xffffffffffffffff) {
      if ((int)uVar9 == -1) {
        (*(code *)PTR_expect_failed_00799440)
                  (extraout_XMM0_Da_00,&PTR_s__rustc_48a229ceaefd4985c50990b14_007972d8);
        goto LAB_00742988;
      }
      if (PTR_pidfd_spawnp_0079ae10 != (undefined *)0x0) {
        <std[6c98fd8553dbae28]::sys::process::unix::pidfd::PidFd>::pid
                  (&local_2d8,uVar9 & 0xffffffff);
        pcVar18 = local_2d8;
        if ((int)local_2d8 != 1) {
          iVar6 = local_2d8._4_4_;
          local_50 = (code *)CONCAT44(local_50._4_4_,local_2d8._4_4_);
          iVar7 = (*(code *)PTR_getpid_00799ef0)();
          local_100 = CONCAT44(local_100._4_4_,iVar7);
          if (iVar6 != iVar7) {
            (*(code *)PTR_<u32,u32>_00799798)
                      (&DAT_001c01b7,&local_100,0x19,
                       &PTR_s__rustc_48a229ceaefd4985c50990b14_00796870);
            goto LAB_00742988;
          }
          (*(code *)PTR_close_00799030)();
          param_1 = (undefined4 *)CONCAT71((uint7)(uint3)((ulonglong)pcVar18 >> 0x28),1);
          cVar4 = (char)local_34;
          goto LAB_00741b65;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr,core[c0acaeba6ab4c2e0]::io::error::Error>>
                  (1,uStack_2d0);
      }
      (*(code *)PTR_close_00799030)();
      posix_spawn::PIDFD_SUPPORTED = '\x02';
      goto LAB_00741e89;
    }
    puVar11 = (uint *)(*(code *)PTR___errno_location_007990a0)();
    uVar8 = *puVar11;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    pcVar18 = (code *)((longlong)(int)uVar8 << 0x20 | 2);
    local_180 = CONCAT44(local_180._4_4_,1);
    local_178 = pcVar18;
    if ((0x18 < uVar8) || ((0x1801000U >> (uVar8 & 0x1f) & 1) == 0)) {
      param_1 = (undefined4 *)CONCAT71((int7)(int3)(uVar8 >> 8),3);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                (&local_178,uVar5);
      cVar4 = (char)local_34;
LAB_00741b65:
      posix_spawn::PIDFD_SUPPORTED = (char)param_1;
      goto LAB_00741b6b;
    }
LAB_00741eaa:
    *(code **)(local_70 + 2) = pcVar18;
    *local_70 = 1;
    if (local_68 < 2) {
      if (1 < uStack_60) goto LAB_00742057;
LAB_00741ecc:
    }
    else {
      (*(code *)PTR_close_00799030)();
      if (uStack_60 < 2) goto LAB_00741ecc;
LAB_00742057:
      (*(code *)PTR_close_00799030)();
    }
    if (1 < (uint)local_58) {
      (*(code *)PTR_close_00799030)();
    }
    goto LAB_00742235;
  }
LAB_00741e89:
  do {
    <std[6c98fd8553dbae28]::sys::net::connection::socket::unix::Socket>::new_pair(&local_2d8,5);
    if ((int)local_2d8 == 1) {
      pcVar18 = uStack_2d0;
      goto LAB_00741eaa;
    }
    local_34 = local_2d8._4_4_;
    uVar9 = (ulonglong)uStack_2d0 & 0xffffffff;
    if (std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK < 0x3ffffffe) {
      std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK =
           std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK + 1;
      LOCK();
      UNLOCK();
    }
    else {
      (*(code *)PTR_read_contended_0079ad80)();
    }
    iVar6 = (*(code *)PTR_fork_0079ae60)();
    if (iVar6 == -1) {
      piVar12 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar6 = *piVar12;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      *(ulonglong *)(local_70 + 2) = (longlong)iVar6 << 0x20 | 2;
      *local_70 = 1;
      LOCK();
      uVar8 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
      UNLOCK();
      uVar17 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
      std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK = uVar8;
      if (SBORROW4(0,uVar17 & 0xbfffffff)) {
        (*(code *)PTR_wake_writer_or_readers_0079a7c8)();
      }
      (*(code *)PTR_close_00799030)();
      bVar2 = true;
      goto LAB_007421e9;
    }
    if (iVar6 != 0) {
      iVar7 = -1;
      LOCK();
      uVar8 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
      UNLOCK();
      uVar17 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
      std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK = uVar8;
      if (SBORROW4(0,uVar17 & 0xbfffffff)) {
        (*(code *)PTR_wake_writer_or_readers_0079a7c8)();
      }
      (*(code *)PTR_close_00799030)();
      if (*(char *)(param_2 + 0xc1) == '\x01') {
        iVar7 = recv_pidfd(local_34);
      }
      iStack_44 = -1;
      if (-1 < iVar7) {
        iStack_44 = iVar7;
      }
      local_50 = (code *)((ulonglong)local_50 & 0xffffffff00000000);
      local_40 = 0;
      iStack_48 = iVar6;
      uVar9 = (*(code *)PTR_recv_0079aa70)(0,8);
      if (uVar9 != 0xffffffffffffffff) goto LAB_007420e3;
      piVar12 = (int *)(*(code *)PTR___errno_location_007990a0)();
      puVar3 = PTR_recv_0079aa70;
      goto LAB_00741fd0;
    }
    LOCK();
    *(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 =
         *(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 | 0x8000000000000000;
    UNLOCK();
    (*(code *)PTR_close_00799030)();
    if (*(char *)(param_2 + 0xc1) != '\0') {
      send_pidfd(uVar9);
    }
    if (local_a0 == -1) {
      plVar20 = (longlong *)0x0;
    }
    local_180 = do_exec(param_2,&local_68,plVar20);
    uVar17 = (uint)local_180 & 3;
    uVar8 = 0x16000000;
    if ((1 < uVar17) && (uVar17 == 2)) {
      uVar8 = (uint)(local_180 >> 0x20);
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
    }
    local_2d8 = (code *)CONCAT44(0x58454f4e,uVar8);
    auVar21 = <std[6c98fd8553dbae28]::sys::net::connection::socket::unix::Socket>::write
                        (uVar9,&local_2d8,8);
    if (auVar21._0_8_ == 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<isize,core[c0acaeba6ab4c2e0]::io::error::Error>>
                (0,auVar21._8_8_);
      (*(code *)PTR__exit_0079ae90)();
      return;
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<isize,core[c0acaeba6ab4c2e0]::io::error::Error>>
              (auVar21._0_8_,auVar21._8_8_);
    uVar15 = <std[6c98fd8553dbae28]::sys::stdio::unix::Stderr_as_std[6c98fd8553dbae28]::io::Write>::
             write_all();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>(uVar15);
    (*(code *)PTR_abort_00799748)();
LAB_0074292a:
    (*(code *)PTR_set_functions_inner_007990c0)();
LAB_00742529:
    pcVar18 = (code *)(uVar9 << 0x20 | 2);
    if (local_178._4_4_ != -1) {
LAB_0074253c:
      (*(code *)PTR_close_00799030)();
    }
    iVar6 = -1;
LAB_00742548:
    LOCK();
    uVar8 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
    UNLOCK();
    uVar17 = std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK - 1;
    std[6c98fd8553dbae28]::sys::env::unix::ENV_LOCK = uVar8;
    if (SBORROW4(0,uVar17 & 0xbfffffff)) {
      (*(code *)PTR_wake_writer_or_readers_0079a7c8)();
    }
LAB_00741e5f:
    (*(code *)PTR_posix_spawn_file_actions_destroy_0079ae50)();
LAB_00741e6c:
    (*(code *)PTR_posix_spawnattr_destroy_0079ae58)();
    if (iVar6 == -1) goto LAB_00741eaa;
LAB_00741e7f:
  } while (iVar6 == 2);
  local_70[7] = uStack_74;
  *(ulonglong *)(local_70 + 5) = CONCAT44(iStack_78,local_7c);
  local_70[1] = iVar6;
  local_70[2] = (int)param_1;
  *(code **)(local_70 + 3) = pcVar18;
  *local_70 = 0;
  if (local_68 < 2) {
    if (1 < uStack_60) goto LAB_007422cd;
LAB_007422b6:
  }
  else {
    (*(code *)PTR_close_00799030)();
    if (uStack_60 < 2) goto LAB_007422b6;
LAB_007422cd:
    (*(code *)PTR_close_00799030)();
  }
  if ((uint)local_58 < 2) goto LAB_0074225f;
  goto LAB_00742259;
  while (uVar9 = (*(code *)puVar3)(0,8), uVar9 == 0xffffffffffffffff) {
LAB_00741fd0:
    iVar6 = *piVar12;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    uVar9 = (longlong)iVar6 << 0x20 | 2;
    local_100 = 1;
    local_f8 = uVar9;
    lVar13 = (*(code *)PTR_get_os_functions_007992e0)();
    cVar4 = (**(code **)(lVar13 + 0x10))();
    if (cVar4 == '\0') {
      local_180 = uVar9;
      <std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::wait(&local_2d8,&local_50);
      if ((char)local_2d8 == '\0') {
        uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr,core[c0acaeba6ab4c2e0]::io::error::Error>>
                          (0,uStack_2d0);
        local_2d8 = (code *)&local_180;
        uStack_2d0 = (code *)PTR_fmt_007994c0;
        ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00796918;
      }
      else {
        uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr,core[c0acaeba6ab4c2e0]::io::error::Error>>
                          (1,uStack_2d0);
        ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00796930;
      }
      (*(code *)PTR_panic_fmt_007991a8)(uVar5,ppuVar16);
      goto LAB_00742988;
    }
  }
LAB_007420e3:
  local_100 = 0;
  local_f8 = uVar9;
  if (uVar9 != 0) {
    if (uVar9 == 8) {
      local_180 = (longlong)&local_40 + 4;
      local_178 = (code *)&DAT_00000004;
      if (local_40._4_4_ != 0x58454f4e) {
        uStack_2d0 = <[u8;8:usize]as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt;
        local_2d8 = (code *)&local_40;
        (*(code *)PTR_<[u8_4:usize],&[u8]>_0079ac58)
                  (&DAT_00189ff6,&local_180,&local_2d8,
                   &PTR_s__rustc_48a229ceaefd4985c50990b14_007968d0);
        goto LAB_00742988;
      }
      uVar8 = (uint)local_40;
      <std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::wait(&local_2d8,&local_50);
      if ((char)local_2d8 == '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr,core[c0acaeba6ab4c2e0]::io::error::Error>>
                  (0,uStack_2d0);
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
        *(ulonglong *)(local_70 + 2) =
             (ulonglong)
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) <<
             0x20 | 2;
        *local_70 = 1;
        bVar2 = true;
        if (iStack_44 != -1) {
          (*(code *)PTR_close_00799030)();
        }
        goto LAB_007421e9;
      }
      uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr,core[c0acaeba6ab4c2e0]::io::error::Error>>
                        (1,uStack_2d0);
      ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_007968b8;
    }
    else {
      <std[6c98fd8553dbae28]::sys::process::unix::unix::Process>::wait(&local_2d8,&local_50);
      if ((char)local_2d8 == '\0') {
        uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr,core[c0acaeba6ab4c2e0]::io::error::Error>>
                          (0,uStack_2d0);
        ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_007968e8;
      }
      else {
        uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::os::unix::net::addr::SocketAddr,core[c0acaeba6ab4c2e0]::io::error::Error>>
                          (1,uStack_2d0);
        ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00796900;
      }
    }
    (*(code *)PTR_panic_fmt_007991a8)(uVar5,ppuVar16);
    goto LAB_00742988;
  }
  local_2d8 = local_50;
  uStack_2d0 = (code *)CONCAT44(iStack_44,iStack_48);
  uStack_2c0 = uStack_74;
  local_2c8 = CONCAT44(iStack_78,local_7c);
  local_70[1] = (int)local_50;
  local_70[2] = local_50._4_4_;
  local_70[3] = iStack_48;
  local_70[4] = iStack_44;
  local_70[4] = iStack_44;
  *(ulonglong *)(local_70 + 5) = local_2c8;
  local_70[7] = uStack_74;
  *local_70 = 0;
  bVar2 = false;
LAB_007421e9:
  (*(code *)PTR_close_00799030)();
  if (local_68 < 2) {
    if (1 < uStack_60) goto LAB_00742219;
LAB_007421fe:
  }
  else {
    (*(code *)PTR_close_00799030)();
    if (uStack_60 < 2) goto LAB_007421fe;
LAB_00742219:
    (*(code *)PTR_close_00799030)();
  }
  if (1 < (uint)local_58) {
    (*(code *)PTR_close_00799030)();
  }
  if (!bVar2) goto LAB_0074225f;
LAB_00742235:
  if (local_7c != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (iStack_78 != -1) {
    (*(code *)PTR_close_00799030)();
  }
  if (uStack_74 == 0xffffffff) goto LAB_0074225f;
LAB_00742259:
  (*(code *)PTR_close_00799030)();
LAB_0074225f:
  if (local_a0 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <std[6c98fd8553dbae28]::sys::process::unix::common::cstring_array::CStringArray>(&local_a0);
  }
  return;
}


