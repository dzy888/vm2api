// 004b8570 update_active_slot_meta

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::update_active_slot_meta */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::update_active_slot_meta
          (longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  char (*pacVar3) [4];
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  bool bVar18;
  byte bVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong local_70;
  byte bStack_68;
  undefined7 uStack_67;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  LOCK();
  bVar18 = *(int *)(param_1 + 0x490) == 0;
  if (bVar18) {
    *(int *)(param_1 + 0x490) = 1;
  }
  UNLOCK();
  local_50 = param_2;
  if (!bVar18) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar9 = 0;
    cVar10 = *(char *)(param_1 + 0x494);
  }
  else {
    bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar9 = bVar9 ^ 1;
    cVar10 = *(char *)(param_1 + 0x494);
  }
  if (cVar10 != '\0') {
    local_70 = param_1 + 0x490;
    bStack_68 = bVar9;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
               ,&local_70,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bb08);
    goto LAB_004b8a21;
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    local_58 = param_1 + 0x490;
    uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&u64>(param_1 + 0x550,&local_50);
    lVar17 = *(longlong *)(param_1 + 0x530);
    bVar19 = (byte)(uVar11 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar13 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(param_1 + 0x538);
      auVar24 = *(undefined1 (*) [16])(lVar17 + uVar11);
      auVar26[0] = -(auVar24[0] == auVar21[0]);
      auVar26[1] = -(auVar24[1] == auVar21[1]);
      auVar26[2] = -(auVar24[2] == auVar21[2]);
      auVar26[3] = -(auVar24[3] == auVar21[3]);
      auVar26[4] = -(auVar24[4] == auVar21[4]);
      auVar26[5] = -(auVar24[5] == auVar21[5]);
      auVar26[6] = -(auVar24[6] == auVar21[6]);
      auVar26[7] = -(auVar24[7] == auVar21[7]);
      auVar26[8] = -(auVar24[8] == auVar21[0]);
      auVar26[9] = -(auVar24[9] == auVar21[1]);
      auVar26[10] = -(auVar24[10] == auVar21[2]);
      auVar26[0xb] = -(auVar24[0xb] == auVar21[3]);
      auVar26[0xc] = -(auVar24[0xc] == auVar21[4]);
      auVar26[0xd] = -(auVar24[0xd] == auVar21[5]);
      auVar26[0xe] = -(auVar24[0xe] == auVar21[6]);
      auVar26[0xf] = -(auVar24[0xf] == auVar21[7]);
      uVar16 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar14 = (uVar7 + uVar11 & *(ulonglong *)(param_1 + 0x538)) * -0xe0;
        if (param_2 == *(longlong *)(lVar17 + -0xe0 + lVar14)) {
          (*(code *)PTR_clone_00798fd0)();
          lVar17 = lVar17 + lVar14;
          local_38 = local_60;
          uStack_40 = CONCAT71(uStack_67,bStack_68);
          local_48 = local_70;
          if ((*(longlong *)(lVar17 + -0x78) != -1) && (*(longlong *)(lVar17 + -0x78) != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          *(undefined8 *)(lVar17 + -0x68) = local_38;
          *(longlong *)(lVar17 + -0x78) = local_48;
          *(undefined8 *)(lVar17 + -0x70) = uStack_40;
          uVar2 = *(undefined4 *)(param_3 + 0x840);
          *(undefined4 *)(lVar17 + -0x48) = 1;
          *(undefined4 *)(lVar17 + -0x44) = uVar2;
          uVar20 = (*(code *)PTR_clone_00798fd0)();
          if (*(longlong *)(lVar17 + -0xc0) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
          }
          *(undefined8 *)(lVar17 + -0xb0) = local_60;
          *(longlong *)(lVar17 + -0xc0) = local_70;
          *(ulonglong *)(lVar17 + -0xb8) = CONCAT71(uStack_67,bStack_68);
          uVar20 = (*(code *)PTR_clone_00798fd0)();
          if (*(longlong *)(lVar17 + -0xa8) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
          }
          *(undefined8 *)(lVar17 + -0x98) = local_60;
          *(longlong *)(lVar17 + -0xa8) = local_70;
          *(ulonglong *)(lVar17 + -0xa0) = CONCAT71(uStack_67,bStack_68);
          uVar20 = (*(code *)PTR_clone_00798fd0)();
          if (*(longlong *)(lVar17 + -0x90) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
          }
          *(undefined8 *)(lVar17 + -0x80) = local_60;
          *(longlong *)(lVar17 + -0x90) = local_70;
          *(ulonglong *)(lVar17 + -0x88) = CONCAT71(uStack_67,bStack_68);
          if (*(longlong *)(param_3 + 0x150) != 0x11) {
            pcVar12 = "inline_socket_v1";
            uVar20 = 0x10;
            goto LAB_004b891e;
          }
          pcVar12 = *(char **)(param_3 + 0x148);
          auVar21[0] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0] ==
                        *pcVar12);
          auVar21[1] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[1] ==
                        pcVar12[1]);
          auVar21[2] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[2] ==
                        pcVar12[2]);
          auVar21[3] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[3] ==
                        pcVar12[3]);
          auVar21[4] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[4] ==
                        pcVar12[4]);
          auVar21[5] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[5] ==
                        pcVar12[5]);
          auVar21[6] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[6] ==
                        pcVar12[6]);
          auVar21[7] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[7] ==
                        pcVar12[7]);
          auVar21[8] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[8] ==
                        pcVar12[8]);
          auVar21[9] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[9] ==
                        pcVar12[9]);
          auVar21[10] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[10] ==
                         pcVar12[10]);
          auVar21[0xb] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xb]
                          == pcVar12[0xb]);
          auVar21[0xc] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xc]
                          == pcVar12[0xc]);
          auVar21[0xd] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xd]
                          == pcVar12[0xd]);
          auVar21[0xe] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xe]
                          == pcVar12[0xe]);
          auVar21[0xf] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0xf]
                          == pcVar12[0xf]);
          auVar24[0] = -(s_3_001a503a[0] == pcVar12[0x10]);
          auVar24[1] = 0xff;
          auVar24[2] = 0xff;
          auVar24[3] = 0xff;
          auVar24[4] = 0xff;
          auVar24[5] = 0xff;
          auVar24[6] = 0xff;
          auVar24[7] = 0xff;
          auVar24[8] = 0xff;
          auVar24[9] = 0xff;
          auVar24[10] = 0xff;
          auVar24[0xb] = 0xff;
          auVar24[0xc] = 0xff;
          auVar24[0xd] = 0xff;
          auVar24[0xe] = 0xff;
          auVar24[0xf] = 0xff;
          auVar24 = auVar24 & auVar21;
          if (((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) &&
             ((int)*(undefined8 *)(param_3 + 0x80) != 2)) {
            pcVar12 = "memfd_ring_v2";
            uVar20 = 0xd;
            goto LAB_004b891e;
          }
          auVar22[0] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0] ==
                        *pcVar12);
          auVar22[1] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[1] ==
                        pcVar12[1]);
          auVar22[2] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[2] ==
                        pcVar12[2]);
          auVar22[3] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[3] ==
                        pcVar12[3]);
          auVar22[4] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[4] ==
                        pcVar12[4]);
          auVar22[5] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[5] ==
                        pcVar12[5]);
          auVar22[6] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[6] ==
                        pcVar12[6]);
          auVar22[7] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[7] ==
                        pcVar12[7]);
          auVar22[8] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[8] ==
                        pcVar12[8]);
          auVar22[9] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[9] ==
                        pcVar12[9]);
          auVar22[10] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[10] ==
                         pcVar12[10]);
          auVar22[0xb] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xb]
                          == pcVar12[0xb]);
          auVar22[0xc] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xc]
                          == pcVar12[0xc]);
          auVar22[0xd] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xd]
                          == pcVar12[0xd]);
          auVar22[0xe] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xe]
                          == pcVar12[0xe]);
          auVar22[0xf] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0xf]
                          == pcVar12[0xf]);
          auVar25[0] = -(s_2_001a504b[0] == pcVar12[0x10]);
          auVar25[1] = 0xff;
          auVar25[2] = 0xff;
          auVar25[3] = 0xff;
          auVar25[4] = 0xff;
          auVar25[5] = 0xff;
          auVar25[6] = 0xff;
          auVar25[7] = 0xff;
          auVar25[8] = 0xff;
          auVar25[9] = 0xff;
          auVar25[10] = 0xff;
          auVar25[0xb] = 0xff;
          auVar25[0xc] = 0xff;
          auVar25[0xd] = 0xff;
          auVar25[0xe] = 0xff;
          auVar25[0xf] = 0xff;
          auVar25 = auVar25 & auVar22;
          pcVar12 = "inline_socket_v1";
          uVar20 = 0x10;
          if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) != 0xffff) goto LAB_004b891e;
          if (*(longlong *)(param_3 + 0xe8) == 0) goto LAB_004b8916;
          lVar13 = 0;
          goto LAB_004b88e9;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar23[0] = -(auVar24[0] == -1);
      auVar23[1] = -(auVar24[1] == -1);
      auVar23[2] = -(auVar24[2] == -1);
      auVar23[3] = -(auVar24[3] == -1);
      auVar23[4] = -(auVar24[4] == -1);
      auVar23[5] = -(auVar24[5] == -1);
      auVar23[6] = -(auVar24[6] == -1);
      auVar23[7] = -(auVar24[7] == -1);
      auVar23[8] = -(auVar24[8] == -1);
      auVar23[9] = -(auVar24[9] == -1);
      auVar23[10] = -(auVar24[10] == -1);
      auVar23[0xb] = -(auVar24[0xb] == -1);
      auVar23[0xc] = -(auVar24[0xc] == -1);
      auVar23[0xd] = -(auVar24[0xd] == -1);
      auVar23[0xe] = -(auVar24[0xe] == -1);
      auVar23[0xf] = -(auVar24[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar11 = uVar11 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  goto LAB_004b8992;
LAB_004b8916:
  uVar20 = 0xb;
  pcVar12 = "file_shm_v1";
  goto LAB_004b891e;
  while (lVar13 = lVar13 + 0x18, *(longlong *)(param_3 + 0xe8) * 0x18 != lVar13) {
LAB_004b88e9:
    if ((*(longlong *)(*(longlong *)(param_3 + 0xe0) + 0x10 + lVar13) == 6) &&
       (pacVar3 = *(char (**) [4])(*(longlong *)(param_3 + 0xe0) + 8 + lVar13),
       *(char (*) [2])pacVar3[1] == s_v1_001a4a46 &&
       *pacVar3 == anon_d3057478e380898db632effa827bd31f_84_llvm_2674179329317868992))
    goto LAB_004b8916;
  }
LAB_004b891e:
  *(char **)(lVar17 + -0x30) = pcVar12;
  *(undefined8 *)(lVar17 + -0x28) = uVar20;
  plVar4 = *(longlong **)(param_3 + 0x808);
  LOCK();
  lVar13 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  if (*plVar4 != 0 && SCARRY8(lVar13,1) == *plVar4 < 0) {
    plVar5 = *(longlong **)(lVar17 + -0x10);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
        drop_slow((undefined8 *)(lVar17 + -0x10));
      }
    }
    *(undefined8 *)(lVar17 + -0x10) = plVar4;
    plVar4 = *(longlong **)(param_3 + 0x820);
    LOCK();
    lVar13 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 != 0 && SCARRY8(lVar13,1) == *plVar4 < 0) {
      plVar5 = *(longlong **)(lVar17 + -8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>
          ::drop_slow((undefined8 *)(lVar17 + -8));
        }
      }
      *(undefined8 *)(lVar17 + -8) = plVar4;
LAB_004b8992:
      if (((bVar9 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
        *(undefined1 *)(param_1 + 0x494) = 1;
      }
      LOCK();
      iVar1 = *(int *)(param_1 + 0x490);
      *(int *)(param_1 + 0x490) = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      return;
    }
  }
LAB_004b8a21:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


