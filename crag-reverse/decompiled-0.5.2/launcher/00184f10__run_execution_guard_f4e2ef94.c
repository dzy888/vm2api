// 00184f10 run_execution_guard

/* WARNING: Removing unreachable block (ram,0x001c4266) */
/* WARNING: Switch with 1 destination removed at 0x0018561b */
/* WARNING: Switch with 1 destination removed at 0x001c42b1 */
/* craggemini[b21da2d71f2da7a3]::guard_exec::run_execution_guard */

ulonglong __rustcall
craggemini[b21da2d71f2da7a3]::guard_exec::run_execution_guard
          (undefined4 param_1,ulonglong param_2,ulonglong param_3)

{
  byte *pbVar1;
  code *pcVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong in_RAX;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  ulonglong unaff_RBX;
  byte bVar19;
  longlong *plVar20;
  ulonglong uVar21;
  byte bVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined1 auVar25 [16];
  undefined8 local_a0;
  int local_98;
  undefined2 uStack_94;
  short sStack_92;
  undefined4 local_90;
  undefined2 uStack_8c;
  ushort uStack_8a;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  char *pcStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  int *piStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_80 = param_3;
  if (param_3 == 0) {
LAB_001855fc:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar12 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar12 == 0) {
      uVar24 = (*(code *)PTR_handle_error_00219c78)();
      (*(code *)PTR___rust_dealloc_00219c40)(uVar24,1);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memcpy_00219c60)(extraout_XMM0_Da_06,0x2d);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar16 = (undefined8 *)(*(code *)PTR___rust_alloc_00219c88)();
    if (puVar16 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_00219eb0)();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *puVar16 = 0x2d;
    puVar16[1] = lVar12;
    puVar16[2] = 0x2d;
    lVar12 = (*(code *)PTR_custom_owner_from_box_0021a170)
                       (extraout_XMM0_Da_07,
                        &
                        PTR_<<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::error::Error_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>as_core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::string::String>>::from::StringError>_00218260
                       );
    return lVar12 + 1;
  }
  uVar21 = 0;
  bVar22 = 0;
  bVar19 = 0;
  local_88 = in_RAX;
  do {
    uVar24 = (*(code *)PTR_from_utf8_lossy_00219e60)
                       (param_1,*(undefined8 *)(param_2 + 0x10 + uVar21 * 0x18));
    piVar15 = (int *)CONCAT26(sStack_92,CONCAT24(uStack_94,local_98));
    lVar12 = CONCAT26(uStack_8a,CONCAT24(uStack_8c,local_90));
    if (lVar12 == 5) {
      if (((char)piVar15[1] != 'd' || *piVar15 != 0x69702d2d) || (local_80 <= (uVar21 | 1)))
      goto LAB_0018548f;
      param_1 = (*(code *)PTR_from_utf8_lossy_00219e60)
                          (0,*(undefined8 *)(param_2 + 0x10 + (uVar21 | 1) * 0x18));
      if (local_68 == 0) {
        uVar11 = 0;
        bVar22 = 1;
      }
      else {
        if (local_68 == 1) {
          cVar6 = *pcStack_70;
          uVar11 = 0;
          bVar22 = 1;
          if ((cVar6 == '+') || (cVar6 == '-')) goto joined_r0x00185470;
        }
        else {
          cVar6 = *pcStack_70;
        }
        uVar11 = (ulonglong)(cVar6 == '+');
        uVar17 = local_68 - uVar11;
        pbVar1 = (byte *)(pcStack_70 + uVar11);
        if (uVar17 < 9) {
          if (local_68 == uVar11) {
            uVar10 = 0;
          }
          else {
            uVar7 = *pbVar1 - 0x30;
            uVar10 = (ulonglong)uVar7;
            uVar11 = 0;
            bVar22 = 1;
            if (9 < uVar7) goto joined_r0x00185470;
            if (uVar17 != 1) {
              if (9 < pbVar1[1] - 0x30) goto joined_r0x00185470;
              uVar7 = (pbVar1[1] - 0x30) + uVar7 * 10;
              uVar10 = (ulonglong)uVar7;
              if (uVar17 != 2) {
                if (9 < pbVar1[2] - 0x30) goto joined_r0x00185470;
                uVar7 = (pbVar1[2] - 0x30) + uVar7 * 10;
                uVar10 = (ulonglong)uVar7;
                if (uVar17 != 3) {
                  if (9 < pbVar1[3] - 0x30) goto joined_r0x00185470;
                  uVar7 = (pbVar1[3] - 0x30) + uVar7 * 10;
                  uVar10 = (ulonglong)uVar7;
                  if (uVar17 != 4) {
                    if (9 < pbVar1[4] - 0x30) goto joined_r0x00185470;
                    uVar7 = (pbVar1[4] - 0x30) + uVar7 * 10;
                    uVar10 = (ulonglong)uVar7;
                    if (uVar17 != 5) {
                      if (9 < pbVar1[5] - 0x30) goto joined_r0x00185470;
                      uVar7 = (pbVar1[5] - 0x30) + uVar7 * 10;
                      uVar10 = (ulonglong)uVar7;
                      if (uVar17 != 6) {
                        if (9 < pbVar1[6] - 0x30) goto joined_r0x00185470;
                        uVar7 = (pbVar1[6] - 0x30) + uVar7 * 10;
                        uVar10 = (ulonglong)uVar7;
                        if (uVar17 != 7) {
                          if (9 < pbVar1[7] - 0x30) goto joined_r0x00185470;
                          uVar10 = (ulonglong)((pbVar1[7] - 0x30) + uVar7 * 10);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_001853e6:
          uVar11 = uVar10 << 0x20;
          bVar22 = 0;
        }
        else {
          uVar10 = 0;
          lVar12 = 0;
          do {
            if (lVar12 == local_68 - uVar11) goto LAB_001853e6;
            uVar7 = (uint)(uVar10 * 10);
            if (((int)(uVar10 * 10 >> 0x20) != 0) || (uVar8 = pbVar1[lVar12] - 0x30, 9 < uVar8)) {
              uVar11 = 0;
              bVar22 = 1;
              goto joined_r0x00185470;
            }
            lVar12 = lVar12 + 1;
            uVar10 = (ulonglong)(uVar8 + uVar7);
          } while (!CARRY4(uVar8,uVar7));
          uVar11 = 0;
          bVar22 = 1;
        }
      }
joined_r0x00185470:
      if (0 < local_78) {
        param_1 = (*(code *)PTR___rust_dealloc_00219c40)(param_1,1);
      }
      local_88 = uVar11 >> 0x20;
      bVar22 = bVar22 ^ 1;
    }
    else {
      if (((lVar12 != 7) ||
          (*(int *)((longlong)piVar15 + 3) != 0x72656e77 || *piVar15 != 0x776f2d2d)) ||
         (local_80 <= (uVar21 | 1))) {
LAB_0018548f:
        uVar21 = (*(code *)PTR_<&str>_00219e50)(uVar24,0x2c);
        if (local_a0 < 1) {
          return uVar21;
        }
        (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da,1);
        return uVar21;
      }
      param_1 = (*(code *)PTR_from_utf8_lossy_00219e60)
                          (0,*(undefined8 *)(param_2 + 0x10 + (uVar21 | 1) * 0x18));
      if (local_68 == 0) {
        uVar11 = 0;
        bVar19 = 1;
      }
      else {
        if (local_68 == 1) {
          cVar6 = *pcStack_70;
          uVar11 = 0;
          bVar19 = 1;
          if ((cVar6 == '+') || (cVar6 == '-')) goto joined_r0x0018548b;
        }
        else {
          cVar6 = *pcStack_70;
        }
        uVar11 = (ulonglong)(cVar6 == '+');
        uVar17 = local_68 - uVar11;
        pbVar1 = (byte *)(pcStack_70 + uVar11);
        if (uVar17 < 9) {
          if (local_68 == uVar11) {
            uVar10 = 0;
          }
          else {
            uVar7 = *pbVar1 - 0x30;
            uVar10 = (ulonglong)uVar7;
            uVar11 = 0;
            bVar19 = 1;
            if (9 < uVar7) goto joined_r0x0018548b;
            if (uVar17 != 1) {
              if (9 < pbVar1[1] - 0x30) goto joined_r0x0018548b;
              uVar7 = (pbVar1[1] - 0x30) + uVar7 * 10;
              uVar10 = (ulonglong)uVar7;
              if (uVar17 != 2) {
                if (9 < pbVar1[2] - 0x30) goto joined_r0x0018548b;
                uVar7 = (pbVar1[2] - 0x30) + uVar7 * 10;
                uVar10 = (ulonglong)uVar7;
                if (uVar17 != 3) {
                  if (9 < pbVar1[3] - 0x30) goto joined_r0x0018548b;
                  uVar7 = (pbVar1[3] - 0x30) + uVar7 * 10;
                  uVar10 = (ulonglong)uVar7;
                  if (uVar17 != 4) {
                    if (9 < pbVar1[4] - 0x30) goto joined_r0x0018548b;
                    uVar7 = (pbVar1[4] - 0x30) + uVar7 * 10;
                    uVar10 = (ulonglong)uVar7;
                    if (uVar17 != 5) {
                      if (9 < pbVar1[5] - 0x30) goto joined_r0x0018548b;
                      uVar7 = (pbVar1[5] - 0x30) + uVar7 * 10;
                      uVar10 = (ulonglong)uVar7;
                      if (uVar17 != 6) {
                        if (9 < pbVar1[6] - 0x30) goto joined_r0x0018548b;
                        uVar7 = (pbVar1[6] - 0x30) + uVar7 * 10;
                        uVar10 = (ulonglong)uVar7;
                        if (uVar17 != 7) {
                          if (9 < pbVar1[7] - 0x30) goto joined_r0x0018548b;
                          uVar10 = (ulonglong)((pbVar1[7] - 0x30) + uVar7 * 10);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00185422:
          uVar11 = uVar10 << 0x20;
          bVar19 = 0;
        }
        else {
          uVar10 = 0;
          lVar12 = 0;
          do {
            if (lVar12 == local_68 - uVar11) goto LAB_00185422;
            uVar7 = (uint)(uVar10 * 10);
            if (((int)(uVar10 * 10 >> 0x20) != 0) || (uVar8 = pbVar1[lVar12] - 0x30, 9 < uVar8)) {
              uVar11 = 0;
              bVar19 = 1;
              goto joined_r0x0018548b;
            }
            lVar12 = lVar12 + 1;
            uVar10 = (ulonglong)(uVar8 + uVar7);
          } while (!CARRY4(uVar8,uVar7));
          uVar11 = 0;
          bVar19 = 1;
        }
      }
joined_r0x0018548b:
      if (0 < local_78) {
        param_1 = (*(code *)PTR___rust_dealloc_00219c40)(param_1,1);
      }
      unaff_RBX = uVar11 >> 0x20;
      bVar19 = bVar19 ^ 1;
    }
    if (0 < local_a0) {
      param_1 = (*(code *)PTR___rust_dealloc_00219c40)(param_1,1);
    }
    uVar21 = uVar21 + 2;
  } while (uVar21 < local_80);
  if (!(bool)(bVar19 & 1 < (uint)unaff_RBX)) goto LAB_001855fc;
  lVar12 = (*(code *)PTR_syscall_0021a0a0)(param_1,0);
  if (lVar12 < 0) {
    piVar15 = (int *)(*(code *)PTR___errno_location_00219f18)();
    iVar9 = *piVar15;
    if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 !=
        &anon_16a3b356826a16bc04f9b830aca94c66_0_llvm_11779858384484307972) {
      (*(code *)PTR_set_functions_inner_00219f28)();
    }
    return (longlong)iVar9 << 0x20 | 2;
  }
  if ((int)lVar12 == -1) {
    (*(code *)PTR_expect_failed_0021a0e0)
              (extraout_XMM0_Da_00,&PTR_s_src_bin____guard_exec_rs_00215b78);
LAB_00185952:
    uVar24 = (*(code *)PTR_wake_00219d10)();
  }
  else {
    uVar18 = 1;
    (*(code *)PTR_fcntl_00219f30)();
    uVar24 = (*(code *)PTR_prctl_0021a0a8)();
    uVar21 = local_88;
    if ((bool)(bVar22 & (int)local_88 != 0)) {
LAB_00185542:
      local_88 = uVar21;
      lVar13 = (*(code *)PTR_syscall_0021a0a0)(uVar24,0);
      if (lVar13 < 0) {
        piVar15 = (int *)(*(code *)PTR___errno_location_00219f18)();
        iVar9 = *piVar15;
        if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 !=
            &anon_16a3b356826a16bc04f9b830aca94c66_0_llvm_11779858384484307972) {
          (*(code *)PTR_set_functions_inner_00219f28)();
        }
        param_2 = (longlong)iVar9 << 0x20 | 2;
        kill_process_group(local_88,uVar21 & 0xffffffff);
        if (iVar9 == 3) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                    (0x300000002);
          param_2 = 0;
        }
      }
      else {
        if ((int)lVar13 == -1) {
          (*(code *)PTR_expect_failed_0021a0e0)
                    (extraout_XMM0_Da_01,&PTR_s_src_bin____guard_exec_rs_00215b78);
LAB_001859b5:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        (*(code *)PTR_fcntl_00219f30)(extraout_XMM0_Da_01,1);
        local_78 = (*(code *)PTR_stdout_0021a0b0)();
        local_a0 = (*(code *)PTR_lock_0021a0b8)();
        lVar14 = (*(code *)PTR_write_all_0021a0c0)(extraout_XMM0_Da_02,6);
        if ((lVar14 == 0) && (lVar14 = (*(code *)PTR_flush_0021a0c8)(), lVar14 == 0)) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::io::stdio::StdoutLock>
                    (local_a0,"READY\n");
          (*(code *)PTR_stdin_00219e80)();
          local_a0 = CONCAT44(1,(int)lVar12);
          uStack_94 = 1;
          sStack_92 = 0;
          local_90 = 0;
          uStack_8c = 0x11;
          uStack_8a = 0;
          param_2 = 0;
          local_98 = (int)lVar13;
          do {
            while( true ) {
              plVar20 = (longlong *)0x3;
              iVar9 = (*(code *)PTR_ppoll_0021a0d0)(0,0);
              uVar5 = uStack_8a;
              sVar4 = sStack_92;
              if (iVar9 < 0) break;
              sVar3 = local_a0._6_2_;
              if ((uStack_8a & 1) != 0) {
                local_48 = 0;
                uStack_40 = 0;
                local_58 = 0;
                piStack_50 = (int *)0x0;
                local_68 = 0;
                uStack_60 = 0;
                local_78 = 0;
                pcStack_70 = (char *)0x0;
                plVar20 = &local_78;
                lVar12 = (*(code *)PTR_read_0021a0d8)();
                if (lVar12 < 1) goto LAB_00185918;
              }
              if ((sVar4 != 0 || sVar3 != 0) || (uVar5 & 0x38) != 0) goto LAB_00185918;
            }
            piVar15 = (int *)(*(code *)PTR___errno_location_00219f18)();
            iVar9 = *piVar15;
            if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 !=
                &anon_16a3b356826a16bc04f9b830aca94c66_0_llvm_11779858384484307972) {
              (*(code *)PTR_set_functions_inner_00219f28)();
            }
          } while (iVar9 == 4);
          param_2 = (longlong)iVar9 << 0x20 | 2;
LAB_00185918:
          kill_process_group(local_88,plVar20);
        }
        else {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                    (lVar14);
          kill_process_group(local_88);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::io::stdio::StdoutLock>
                    (local_a0);
          param_2 = 0;
        }
        (*(code *)PTR_close_00219d60)();
      }
      goto LAB_001857f2;
    }
    local_38 = (*(code *)PTR_stdin_00219e80)();
    local_a0 = 0;
    local_98 = 1;
    uStack_94 = 0;
    sStack_92 = 0;
    local_90 = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    piVar15 = (int *)(*(code *)PTR_lock_00219e88)();
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    lVar13 = (*(code *)PTR___rust_alloc_00219c88)();
    if (lVar13 == 0) {
      (*(code *)PTR_handle_error_00219c78)();
      goto LAB_001859b5;
    }
    pcStack_70 = (char *)0x2000;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = local_58 & 0xffffffffffffff00;
    local_48 = CONCAT71(local_48._1_7_,uVar18) & 0xffffffffffffff01;
    local_78 = lVar13;
    piStack_50 = piVar15;
    auVar25 = std[6c98fd8553dbae28]::io::append_to_string::
              <<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinLock>as_std[6c98fd8553dbae28]::io::BufRead>::read_line::_closure_0_>
                        (&local_a0,&local_78);
    param_2 = auVar25._8_8_;
    uVar24 = extraout_XMM0_Da_03;
    if ((auVar25._0_8_ & 1) == 0) {
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        auVar25 = <str>::trim_matches::<<char>::is_whitespace>
                            (CONCAT26(sStack_92,CONCAT24(uStack_94,local_98)),
                             CONCAT26(uStack_8a,CONCAT24(uStack_8c,local_90)));
        uVar11 = <u32>::from_ascii_radix(auVar25._0_8_,auVar25._8_8_);
        uVar21 = uVar11 >> 0x20;
        bVar23 = (uint)(uVar11 >> 0x20) < 2;
        if (!bVar23 && (uVar11 & 1) == 0) {
          uVar24 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinLock>>
                             (&local_78);
          if (local_a0 != 0) {
            uVar24 = (*(code *)PTR___rust_dealloc_00219c40)(uVar24,1);
          }
          goto LAB_00185542;
        }
        param_2 = (*(code *)PTR_<&str>_00219e50)(bVar23 | (byte)uVar11,0x2e);
        uVar24 = extraout_XMM0_Da_04;
      }
    }
    if (pcStack_70 != (char *)0x0) {
      uVar24 = (*(code *)PTR___rust_dealloc_00219c40)(uVar24,1);
    }
    piVar15 = piStack_50;
    if ((((char)local_48 == '\0') &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00219d18)(), uVar24 = extraout_XMM0_Da_05,
       cVar6 == '\0')) {
      *(undefined1 *)(piVar15 + 1) = 1;
    }
    LOCK();
    iVar9 = *piVar15;
    *piVar15 = 0;
    UNLOCK();
    if (iVar9 == 2) goto LAB_00185952;
  }
  if (local_a0 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar24,1);
  }
LAB_001857f2:
  (*(code *)PTR_close_00219d60)();
  return param_2;
}


