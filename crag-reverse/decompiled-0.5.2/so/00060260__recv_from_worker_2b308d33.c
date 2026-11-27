// 00060260 recv_from_worker

/* <agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>::recv_from_worker */

undefined8 * __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::ShmRingClient>::recv_from_worker(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar21;
  char local_111;
  ulonglong *local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_100;
  undefined4 *local_f8;
  longlong local_f0;
  undefined4 local_e4;
  undefined8 *local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char **local_b8;
  undefined8 uStack_b0;
  ulonglong *local_a8;
  ulonglong uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_111 = '\0';
  local_d8 = &local_111;
  local_d0 = 1;
  local_e0 = param_1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  puVar8 = (ulonglong *)(*(code *)PTR___rust_alloc_zeroed_000c3b88)();
  puVar5 = PTR_recvmsg_000c3d80;
  puVar4 = PTR___errno_location_000c3cf0;
  puVar3 = PTR_get_os_functions_000c3c18;
  if (puVar8 == (ulonglong *)0x0) {
    (*(code *)PTR_handle_error_000c3a98)();
LAB_0006087a:
    (*(code *)PTR_handle_error_000c3a98)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar20 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_98 = (undefined *)0x0;
  local_b8 = &local_d8;
  uStack_b0 = 1;
  uStack_a0 = 0x28;
  local_110 = puVar8;
  local_a8 = puVar8;
  do {
    lVar9 = (*(code *)puVar5)(uVar20,0x40000000);
    if (-1 < lVar9) {
      uVar12 = 0x2e;
      if ((lVar9 == 1) && (local_111 == -0x5a)) {
        if (((ulonglong)local_98 & 8) == 0) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          local_f8 = (undefined4 *)(*(code *)PTR___rust_alloc_000c3a90)();
          if (local_f8 == (undefined4 *)0x0) goto LAB_0006087a;
          local_100 = 5;
          local_f0 = 0;
          puVar8 = (ulonglong *)(ulonglong)(uStack_a0 < 0x10);
          if (local_a8 == (ulonglong *)0x0 || uStack_a0 < 0x10) goto LAB_000605d9;
          lVar9 = 0;
          uVar17 = uStack_a0;
          puVar8 = local_a8;
          puVar18 = local_a8;
          goto LAB_000603f0;
        }
        uVar12 = 0x24;
      }
      puVar19 = (undefined4 *)(*(code *)PTR_<&str>_000c3b30)(extraout_XMM0_Da,uVar12);
      uVar20 = extraout_XMM0_Da_02;
      goto LAB_000605a2;
    }
    piVar10 = (int *)(*(code *)puVar4)();
    iVar7 = *piVar10;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
        &anon_babcb22509c8a1a9c6820558c700cea8_11_llvm_16528485329418314689) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    lVar9 = (*(code *)puVar3)();
    cVar6 = (**(code **)(lVar9 + 8))();
    uVar20 = extraout_XMM0_Da_00;
  } while (cVar6 == '#');
  puVar19 = (undefined4 *)((longlong)iVar7 << 0x20 | 2);
LAB_000605a2:
  (*(code *)PTR___rust_dealloc_000c3aa0)(uVar20,1);
LAB_000605b7:
  local_e0[1] = puVar19;
  *local_e0 = 0;
  return local_e0;
LAB_000603f0:
  if (((int)puVar18[1] == 1) && (*(int *)((longlong)puVar18 + 0xc) == 1)) {
    if (*puVar18 < 0x10) goto LAB_00060492;
    uVar14 = *puVar18 - 0x10 >> 2;
    if (uVar14 != 0) {
      uVar17 = 0;
      do {
        iVar7 = *(int *)((longlong)puVar18 + uVar17 * 4 + 0x10);
        if (-1 < iVar7) {
          if (lVar9 == local_100) {
            <alloc[12e961f32105355]::raw_vec::RawVec<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>
            ::grow_one(&local_100);
          }
          local_f8[lVar9] = iVar7;
          lVar9 = lVar9 + 1;
          local_f0 = lVar9;
        }
        uVar17 = uVar17 + 1;
      } while (uVar14 != uVar17);
      uVar17 = uStack_a0;
      puVar8 = local_a8;
    }
  }
  if ((((*puVar18 < 0x10) ||
       (puVar13 = (ulonglong *)((*puVar18 + 7 & 0xfffffffffffffff8) + (longlong)puVar18),
       puVar13 < puVar18)) || (puVar13 == (ulonglong *)0x0)) ||
     (puVar18 = puVar13, (ulonglong *)(uVar17 + (longlong)puVar8) < puVar13 + 2)) goto LAB_00060492;
  goto LAB_000603f0;
LAB_00060492:
  puVar19 = local_f8;
  lVar16 = local_100;
  if (lVar9 == 5) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(puVar8,1);
    if (lVar16 == -1) goto LAB_000605b7;
    local_108 = puVar19[4];
    local_104 = puVar19[3];
    uVar20 = puVar19[1];
    local_110 = (ulonglong *)CONCAT44(local_110._4_4_,puVar19[2]);
    local_f0 = 0;
    uVar1 = *puVar19;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (undefined *)0x0;
    uStack_90 = 0;
    local_a8 = (ulonglong *)0x0;
    uStack_a0 = 0;
    local_b8 = (char **)0x0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_100 = lVar16;
    local_f8 = puVar19;
    iVar7 = (*(code *)PTR_fstat_000c3d88)();
    puVar3 = local_98;
    if (iVar7 == 0) {
      uVar21 = extraout_XMM0_Da_01;
      if ((longlong)local_98 < 0) {
        uVar12 = 0x12;
      }
      else if (local_98 < &UNK_00021000) {
        uVar12 = 0x26;
      }
      else {
        plVar11 = (longlong *)(*(code *)PTR_mmap_000c3d90)(1,3,uVar1,0);
        if (plVar11 == (longlong *)0x0) {
          uVar12 = 0x1a;
          uVar21 = extraout_XMM0_Da_04;
        }
        else {
          if (plVar11 == (longlong *)0xffffffffffffffff) {
            piVar10 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
            lVar9 = (longlong)*piVar10;
            if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
                &anon_babcb22509c8a1a9c6820558c700cea8_11_llvm_16528485329418314689) {
              (*(code *)PTR_set_functions_inner_000c3d08)();
            }
            goto LAB_00060571;
          }
          local_e4 = uVar20;
          if (*plVar11 == 0x32304d4853594741) {
            uVar12 = 0x25;
            if ((int)plVar11[1] == 2) {
              uVar17 = (ulonglong)*(uint *)((longlong)plVar11 + 0x1c);
              if (*(uint *)((longlong)plVar11 + 0x1c) - 0x10000 < 0x3ff0001) {
                uVar14 = (ulonglong)*(uint *)((longlong)plVar11 + 0x14);
                uVar12 = 0x1c;
                if ((((*(uint *)((longlong)plVar11 + 0x14) - 0x10000 < 0x3ff0001) &&
                     ((int)plVar11[2] == 0x1000)) &&
                    ((uVar14 - 1 < (uVar14 ^ uVar14 - 1) &&
                     ((uVar17 - 1 < (uVar17 ^ uVar17 - 1) &&
                      (uVar15 = (ulonglong)*(uint *)(plVar11 + 3), uVar14 + 0x1000 == uVar15))))))
                   && ((undefined *)(uVar17 + uVar15) == puVar3)) {
                  *local_e0 = plVar11;
                  local_e0[1] = puVar3;
                  local_e0[2] = 0x1000;
                  local_e0[3] = uVar14;
                  local_e0[4] = uVar15;
                  local_e0[5] = uVar17;
                  *(undefined4 *)(local_e0 + 6) = uVar1;
                  *(undefined4 *)((longlong)local_e0 + 0x34) = uVar20;
                  *(undefined4 *)(local_e0 + 7) = local_110._0_4_;
                  *(undefined4 *)((longlong)local_e0 + 0x3c) = local_104;
                  *(undefined4 *)(local_e0 + 8) = local_108;
                  uVar20 = extraout_XMM0_Da_04;
                  goto LAB_00060831;
                }
              }
              else {
                uVar12 = 0x1c;
              }
            }
          }
          else {
            uVar12 = 0x25;
          }
          uVar21 = (*(code *)PTR_munmap_000c3ac0)();
        }
      }
      uVar17 = (*(code *)PTR_<&str>_000c3b30)(uVar21,uVar12);
    }
    else {
      piVar10 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
      lVar9 = (longlong)*piVar10;
      if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
          &anon_babcb22509c8a1a9c6820558c700cea8_11_llvm_16528485329418314689) {
        (*(code *)PTR_set_functions_inner_000c3d08)();
      }
LAB_00060571:
      uVar17 = lVar9 << 0x20 | 2;
    }
    local_e0[1] = uVar17;
    *local_e0 = 0;
    puVar3 = PTR_close_000c3ab8;
    (*(code *)PTR_close_000c3ab8)();
    (*(code *)puVar3)();
    (*(code *)puVar3)();
    (*(code *)puVar3)();
    uVar20 = (*(code *)puVar3)();
LAB_00060831:
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar20,4);
    return local_e0;
  }
LAB_000605d9:
  puVar19 = (undefined4 *)(*(code *)PTR_<&str>_000c3b30)(puVar8,0x26);
  lVar9 = local_f0;
  puVar3 = PTR_close_000c3ab8;
  uVar20 = extraout_XMM0_Da_03;
  if (local_f0 != 0) {
    lVar16 = 0;
    do {
      lVar16 = lVar16 + 1;
      uVar20 = (*(code *)puVar3)();
    } while (lVar9 != lVar16);
  }
  if (local_100 != 0) {
    uVar20 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar20,4);
  }
  goto LAB_000605a2;
}


