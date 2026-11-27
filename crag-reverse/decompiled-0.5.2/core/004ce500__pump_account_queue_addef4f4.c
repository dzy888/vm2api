// 004ce500 pump_account_queue

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::pool::pump_account_queue */

void __rustcall
craggemini_core[66f3c71560d70857]::pool::pump_account_queue
          (longlong param_1,longlong *param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  char (*pacVar2) [4];
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong lVar16;
  char *extraout_RDX;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ushort uVar21;
  longlong *plVar22;
  bool bVar23;
  byte bVar24;
  undefined8 uVar25;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  longlong *local_1b10;
  longlong local_1b08;
  longlong local_1af8;
  longlong *local_1af0;
  longlong *local_1ae8;
  longlong *local_1ae0;
  longlong *plStack_1ad8;
  longlong lStack_1ad0;
  longlong lStack_1ac8;
  longlong lStack_1ac0;
  longlong local_1ab8;
  undefined *puStack_1ab0;
  undefined4 local_1aa8;
  undefined4 uStack_1aa4;
  undefined4 uStack_1aa0;
  undefined4 uStack_1a9c;
  longlong local_1a98;
  longlong lStack_1a90;
  longlong *local_1a88;
  undefined8 uStack_1a80;
  longlong local_1a78;
  longlong *local_1a70;
  undefined4 local_1a64;
  longlong local_1a60;
  char *local_1a58;
  undefined8 local_1a50;
  longlong *local_1a48;
  longlong lStack_1a40;
  longlong local_1a38;
  longlong local_1a30;
  longlong local_1a28;
  longlong local_1a20;
  undefined8 local_1a18;
  undefined8 local_1a10;
  undefined8 uStack_1a08;
  undefined8 local_1a00;
  undefined8 local_19f8;
  undefined8 uStack_19f0;
  undefined8 local_19e8;
  longlong *local_19e0;
  longlong local_19d8;
  longlong local_19d0;
  char *local_19c8;
  longlong local_19c0;
  char *local_19b8;
  longlong local_19b0;
  longlong lStack_19a8;
  undefined8 local_19a0;
  longlong *local_1998;
  longlong local_1990;
  longlong local_1988;
  longlong *local_1980;
  longlong local_1978;
  longlong local_1970;
  uint local_1968;
  undefined4 local_1964;
  undefined8 local_1960;
  undefined4 local_1958;
  char *local_1950;
  undefined8 local_1948;
  longlong *local_1940;
  longlong *local_1938;
  longlong *local_1930;
  longlong *local_1928;
  longlong *local_1918;
  longlong *plStack_1910;
  longlong local_1908;
  longlong lStack_1900;
  longlong local_18f8;
  undefined *puStack_18f0;
  undefined8 local_18e8;
  undefined8 uStack_18e0;
  longlong local_18d8;
  longlong lStack_18d0;
  longlong *local_18c8;
  longlong *plStack_18c0;
  undefined8 local_18b8;
  longlong *local_10d0;
  longlong local_10c8;
  longlong lStack_10c0;
  undefined8 local_10b8;
  longlong local_10a8;
  undefined8 local_1090;
  undefined8 local_1030;
  int local_878;
  undefined4 uStack_874;
  undefined8 local_7f8;
  longlong local_798;
  longlong local_790;
  char *local_730;
  longlong local_728;
  longlong *local_70;
  longlong *local_58;
  undefined4 local_38;
  
  local_1030 = 0;
  if ((*(char *)(param_1 + 0x100) == '\0') && (*(longlong **)(param_1 + 0xb0) < param_2)) {
    local_1a50 = param_3;
    local_1a18 = param_5;
    do {
      if (*(longlong *)(param_1 + 0x38) == 0) {
        return;
      }
      lVar12 = *(longlong *)(param_1 + 0x30);
      uVar18 = *(ulonglong *)(param_1 + 0x20);
      lVar11 = *(longlong *)(param_1 + 0x28);
      if (lVar12 + 1U < uVar18) {
        uVar18 = 0;
      }
      lVar16 = (lVar12 - uVar18) + 1;
      *(longlong *)(param_1 + 0x30) = lVar16;
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -1;
      lVar12 = lVar12 * 0x68;
      local_1ae0 = *(longlong **)(lVar11 + lVar12);
      puVar1 = (undefined8 *)(lVar11 + 0x58 + lVar12);
      local_1a88 = (longlong *)*puVar1;
      uStack_1a80 = puVar1[1];
      plVar22 = (longlong *)(lVar11 + 0x48 + lVar12);
      local_1a98 = *plVar22;
      lStack_1a90 = plVar22[1];
      puVar1 = (undefined8 *)(lVar11 + 0x38 + lVar12);
      uVar25 = *puVar1;
      uVar6 = puVar1[1];
      plVar22 = (longlong *)(lVar11 + 0x28 + lVar12);
      local_1ab8 = *plVar22;
      puStack_1ab0 = (undefined *)plVar22[1];
      plVar22 = (longlong *)(lVar11 + 0x18 + lVar12);
      lStack_1ac8 = *plVar22;
      lStack_1ac0 = plVar22[1];
      plVar22 = (longlong *)(lVar11 + 8 + lVar12);
      plStack_1ad8 = (longlong *)*plVar22;
      lStack_1ad0 = plVar22[1];
      if (local_1ae0 == (longlong *)0xffffffffffffffff) {
        return;
      }
      local_18e8._0_4_ = (undefined4)uVar25;
      local_18e8._4_4_ = (undefined4)((ulonglong)uVar25 >> 0x20);
      uStack_18e0._0_4_ = (undefined4)uVar6;
      uStack_18e0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_1aa8 = (undefined4)local_18e8;
      uStack_1aa4 = local_18e8._4_4_;
      uStack_1aa0 = (undefined4)uStack_18e0;
      uStack_1a9c = uStack_18e0._4_4_;
      local_1918 = plStack_1ad8;
      plStack_1910 = (longlong *)lStack_1ad0;
      local_1908 = lStack_1ac8;
      lStack_1900 = lStack_1ac0;
      local_18f8 = local_1ab8;
      puStack_18f0 = puStack_1ab0;
      local_18e8 = (undefined *)uVar25;
      uStack_18e0 = uVar6;
      local_18d8 = local_1a98;
      lStack_18d0 = lStack_1a90;
      local_18c8 = local_1a88;
      plStack_18c0 = (longlong *)uStack_1a80;
      cVar8 = (*(code *)PTR_is_cancelled_00799260)();
      uVar20 = (uint)lVar16;
      if (cVar8 == '\0') {
        cVar8 = (*(code *)PTR_is_cancelled_00799260)();
        if (cVar8 == '\0') {
          lVar12 = (*(code *)PTR_now_00799250)();
          if (lVar12 == local_1a98) {
            if (uVar20 < (uint)lStack_1a90) {
LAB_004ce957:
              plVar22 = (longlong *)0x0;
LAB_004ce9de:
              local_1918 = plVar22;
              if (*(longlong *)(param_1 + 0xb0) == 0) {
                plVar13 = (longlong *)0x1;
              }
              else {
                uVar18 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                         ::hash_one::<&u64>(param_1 + 0xb8,&local_1918);
                bVar24 = (byte)(uVar18 >> 0x39);
                auVar26 = ZEXT216(CONCAT11(bVar24,bVar24));
                auVar26 = pshuflw(auVar26,auVar26,0);
                lVar12 = 0;
                while( true ) {
                  uVar18 = uVar18 & *(ulonglong *)(param_1 + 0xa0);
                  pcVar17 = (char *)(*(longlong *)(param_1 + 0x98) + uVar18);
                  auVar29[0] = -(*pcVar17 == auVar26[0]);
                  auVar29[1] = -(pcVar17[1] == auVar26[1]);
                  auVar29[2] = -(pcVar17[2] == auVar26[2]);
                  auVar29[3] = -(pcVar17[3] == auVar26[3]);
                  auVar29[4] = -(pcVar17[4] == auVar26[4]);
                  auVar29[5] = -(pcVar17[5] == auVar26[5]);
                  auVar29[6] = -(pcVar17[6] == auVar26[6]);
                  auVar29[7] = -(pcVar17[7] == auVar26[7]);
                  auVar29[8] = -(pcVar17[8] == auVar26[0]);
                  auVar29[9] = -(pcVar17[9] == auVar26[1]);
                  auVar29[10] = -(pcVar17[10] == auVar26[2]);
                  auVar29[0xb] = -(pcVar17[0xb] == auVar26[3]);
                  auVar29[0xc] = -(pcVar17[0xc] == auVar26[4]);
                  auVar29[0xd] = -(pcVar17[0xd] == auVar26[5]);
                  auVar29[0xe] = -(pcVar17[0xe] == auVar26[6]);
                  auVar29[0xf] = -(pcVar17[0xf] == auVar26[7]);
                  uVar21 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar29[0xf] >> 7) << 0xf;
                  uVar20 = (uint)uVar21;
                  while (uVar21 != 0) {
                    uVar4 = 0;
                    for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                      uVar4 = uVar4 + 1;
                    }
                    if (plVar22 ==
                        *(longlong **)
                         (*(longlong *)(param_1 + 0x98) + -0xe0 +
                         (uVar4 + uVar18 & *(ulonglong *)(param_1 + 0xa0)) * -0xe0)) {
                      plVar22 = (longlong *)((longlong)plVar22 + 1);
                      if (plVar22 == param_2) {
                        local_18b8 = uStack_1a80;
                        local_18c8 = (longlong *)lStack_1a90;
                        plStack_18c0 = local_1a88;
                        local_18d8 = CONCAT44(uStack_1a9c,uStack_1aa0);
                        lStack_18d0 = local_1a98;
                        local_18e8 = puStack_1ab0;
                        uStack_18e0 = CONCAT44(uStack_1aa4,local_1aa8);
                        local_18f8 = lStack_1ac0;
                        puStack_18f0 = (undefined *)local_1ab8;
                        local_1908 = lStack_1ad0;
                        lStack_1900 = lStack_1ac8;
                        local_1918 = local_1ae0;
                        plStack_1910 = plStack_1ad8;
                        uVar18 = *(ulonglong *)(param_1 + 0x20);
                        uVar14 = *(ulonglong *)(param_1 + 0x38);
                        if (uVar14 == uVar18) {
                          <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>>
                          ::grow(param_1 + 0x20);
                          uVar18 = *(ulonglong *)(param_1 + 0x20);
                          uVar14 = *(ulonglong *)(param_1 + 0x38);
                        }
                        lVar12 = *(longlong *)(param_1 + 0x28);
                        uVar19 = *(longlong *)(param_1 + 0x30) - 1;
                        uVar10 = uVar18 + uVar19;
                        if (!CARRY8(uVar18,uVar19)) {
                          uVar10 = uVar19;
                        }
                        *(ulonglong *)(param_1 + 0x30) = uVar10;
                        *(ulonglong *)(param_1 + 0x38) = uVar14 + 1;
                        lVar11 = uVar10 * 0x68;
                        *(longlong *)(lVar12 + lVar11) = (longlong)local_1918;
                        ((longlong *)(lVar12 + lVar11))[1] = (longlong)plStack_1910;
                        plVar22 = (longlong *)(lVar12 + 0x10 + lVar11);
                        *plVar22 = local_1908;
                        plVar22[1] = lStack_1900;
                        plVar22 = (longlong *)(lVar12 + 0x20 + lVar11);
                        *plVar22 = local_18f8;
                        plVar22[1] = (longlong)puStack_18f0;
                        plVar22 = (longlong *)(lVar12 + 0x30 + lVar11);
                        *plVar22 = (longlong)local_18e8;
                        plVar22[1] = uStack_18e0;
                        puVar1 = (undefined8 *)(lVar12 + 0x40 + lVar11);
                        *puVar1 = local_18d8;
                        puVar1[1] = lStack_18d0;
                        plVar22 = (longlong *)(lVar12 + 0x50 + lVar11);
                        *plVar22 = (longlong)local_18c8;
                        plVar22[1] = (longlong)plStack_18c0;
                        *(undefined8 *)(lVar12 + 0x60 + lVar11) = local_18b8;
                        return;
                      }
                      goto LAB_004ce9de;
                    }
                    uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
                    uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
                  }
                  auVar27[0] = -(*pcVar17 == -1);
                  auVar27[1] = -(pcVar17[1] == -1);
                  auVar27[2] = -(pcVar17[2] == -1);
                  auVar27[3] = -(pcVar17[3] == -1);
                  auVar27[4] = -(pcVar17[4] == -1);
                  auVar27[5] = -(pcVar17[5] == -1);
                  auVar27[6] = -(pcVar17[6] == -1);
                  auVar27[7] = -(pcVar17[7] == -1);
                  auVar27[8] = -(pcVar17[8] == -1);
                  auVar27[9] = -(pcVar17[9] == -1);
                  auVar27[10] = -(pcVar17[10] == -1);
                  auVar27[0xb] = -(pcVar17[0xb] == -1);
                  auVar27[0xc] = -(pcVar17[0xc] == -1);
                  auVar27[0xd] = -(pcVar17[0xd] == -1);
                  auVar27[0xe] = -(pcVar17[0xe] == -1);
                  auVar27[0xf] = -(pcVar17[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar27 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0
                      ) || auVar27[0xf] < '\0') break;
                  uVar18 = uVar18 + lVar12 + 0x10;
                  lVar12 = lVar12 + 0x10;
                }
                plVar13 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 1);
              }
              lVar12 = (longlong)param_2 - (longlong)plVar13;
              if (param_2 < plVar13) {
                lVar12 = 0;
              }
              uVar25 = 0;
              if (puStack_1ab0 != (undefined *)0xffffffffffffffff) {
                uVar25 = CONCAT44(uStack_1aa4,local_1aa8);
              }
              take_matching_idle(&local_878,param_1,local_1a50,param_4,lStack_1ac0,local_1ab8,uVar25
                                 ,CONCAT44(uStack_1a9c,uStack_1aa0),lVar12,local_1a18);
              pcVar17 = extraout_RDX;
              (*(code *)PTR_clone_00798fd0)();
              local_1b10 = (longlong *)0xffffffffffffffff;
              if (local_878 != 2) {
                (*(code *)PTR_clone_00798fd0)();
                local_1b10 = local_1918;
                local_1b08 = (longlong)plStack_1910;
                local_1a20 = local_1908;
              }
              (*(code *)PTR_clone_00798fd0)();
              bVar23 = CONCAT44(uStack_874,local_878) != 2;
              local_1a64 = local_38;
              if (bVar23) {
                (*(code *)PTR_clone_00798fd0)();
                local_1af0 = local_1918;
                local_1a78 = (longlong)plStack_1910;
                lVar12 = local_1a28;
                local_1a28 = local_1908;
              }
              else {
                local_1a78 = 1;
                local_1af0 = (longlong *)0x0;
                lVar12 = local_1a28;
                local_1a28 = 0;
              }
              if ((longlong)param_4 < 0) {
LAB_004cf313:
                local_1a28 = lVar12;
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_004cf330;
              }
              if (param_4 == (char *)0x0) {
                local_1af8 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                local_1af8 = (*(code *)PTR___rust_alloc_00799000)();
                lVar12 = local_1a28;
                if (local_1af8 == 0) goto LAB_004cf313;
                pcVar17 = param_4;
                (*(code *)PTR_memcpy_00799008)();
              }
              (*(code *)PTR_clone_00798fd0)();
              if (puStack_1ab0 == (undefined *)0xffffffffffffffff) {
                local_1ae8 = (longlong *)0xffffffffffffffff;
                if (local_878 != 2) goto LAB_004cedea;
LAB_004cedaf:
                local_1a70 = (longlong *)0x0;
                uVar25 = 8;
                local_1a58 = "spawning";
LAB_004cef33:
                plVar13 = (longlong *)0x0;
              }
              else {
                (*(code *)PTR_clone_00798fd0)();
                local_1ae8 = local_1918;
                local_1a60 = (longlong)plStack_1910;
                local_1a30 = local_1908;
                if (local_878 == 2) goto LAB_004cedaf;
LAB_004cedea:
                if (local_728 == 0x11) {
                  auVar26[0] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [0] == *local_730);
                  auVar26[1] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [1] == local_730[1]);
                  auVar26[2] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [2] == local_730[2]);
                  auVar26[3] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [3] == local_730[3]);
                  auVar26[4] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [4] == local_730[4]);
                  auVar26[5] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [5] == local_730[5]);
                  auVar26[6] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [6] == local_730[6]);
                  auVar26[7] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [7] == local_730[7]);
                  auVar26[8] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [8] == local_730[8]);
                  auVar26[9] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                 [9] == local_730[9]);
                  auVar26[10] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                  [10] == local_730[10]);
                  auVar26[0xb] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                   [0xb] == local_730[0xb]);
                  auVar26[0xc] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                   [0xc] == local_730[0xc]);
                  auVar26[0xd] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                   [0xd] == local_730[0xd]);
                  auVar26[0xe] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                   [0xe] == local_730[0xe]);
                  auVar26[0xf] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                                   [0xf] == local_730[0xf]);
                  auVar30[0] = -(s_3_001a503a[0] == local_730[0x10]);
                  auVar30[1] = 0xff;
                  auVar30[2] = 0xff;
                  auVar30[3] = 0xff;
                  auVar30[4] = 0xff;
                  auVar30[5] = 0xff;
                  auVar30[6] = 0xff;
                  auVar30[7] = 0xff;
                  auVar30[8] = 0xff;
                  auVar30[9] = 0xff;
                  auVar30[10] = 0xff;
                  auVar30[0xb] = 0xff;
                  auVar30[0xc] = 0xff;
                  auVar30[0xd] = 0xff;
                  auVar30[0xe] = 0xff;
                  auVar30[0xf] = 0xff;
                  auVar30 = auVar30 & auVar26;
                  if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) != 0xffff) {
LAB_004cee55:
                    auVar28[0] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [0] == *local_730);
                    auVar28[1] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [1] == local_730[1]);
                    auVar28[2] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [2] == local_730[2]);
                    auVar28[3] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [3] == local_730[3]);
                    auVar28[4] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [4] == local_730[4]);
                    auVar28[5] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [5] == local_730[5]);
                    auVar28[6] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [6] == local_730[6]);
                    auVar28[7] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [7] == local_730[7]);
                    auVar28[8] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [8] == local_730[8]);
                    auVar28[9] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                   [9] == local_730[9]);
                    auVar28[10] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                    [10] == local_730[10]);
                    auVar28[0xb] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                     [0xb] == local_730[0xb]);
                    auVar28[0xc] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                     [0xc] == local_730[0xc]);
                    auVar28[0xd] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                     [0xd] == local_730[0xd]);
                    auVar28[0xe] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                     [0xe] == local_730[0xe]);
                    auVar28[0xf] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                                     [0xf] == local_730[0xf]);
                    auVar31[0] = -(s_2_001a504b[0] == local_730[0x10]);
                    auVar31[1] = 0xff;
                    auVar31[2] = 0xff;
                    auVar31[3] = 0xff;
                    auVar31[4] = 0xff;
                    auVar31[5] = 0xff;
                    auVar31[6] = 0xff;
                    auVar31[7] = 0xff;
                    auVar31[8] = 0xff;
                    auVar31[9] = 0xff;
                    auVar31[10] = 0xff;
                    auVar31[0xb] = 0xff;
                    auVar31[0xc] = 0xff;
                    auVar31[0xd] = 0xff;
                    auVar31[0xe] = 0xff;
                    auVar31[0xf] = 0xff;
                    auVar31 = auVar31 & auVar28;
                    if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
                      if (local_790 == 0) {
LAB_004ceee1:
                        uVar25 = 0xb;
                        pcVar17 = "file_shm_v1";
                        goto LAB_004ceefb;
                      }
                      lVar12 = 0;
                      do {
                        if ((*(longlong *)(local_798 + 0x10 + lVar12) == 6) &&
                           (pacVar2 = *(char (**) [4])(local_798 + 8 + lVar12),
                           *(char (*) [2])pacVar2[1] == s_v1_001a4a46 &&
                           *pacVar2 ==
                           anon_d3057478e380898db632effa827bd31f_84_llvm_2674179329317868992))
                        goto LAB_004ceee1;
                        lVar12 = lVar12 + 0x18;
                      } while (local_790 * 0x18 != lVar12);
                    }
                    goto LAB_004ceef4;
                  }
                  uVar25 = 0xd;
                  pcVar17 = "memfd_ring_v2";
                  if ((int)local_7f8 == 2) goto LAB_004cee55;
                }
                else {
LAB_004ceef4:
                  uVar25 = 0x10;
                  pcVar17 = "inline_socket_v1";
                }
LAB_004ceefb:
                LOCK();
                lVar12 = *local_70;
                *local_70 = *local_70 + 1;
                UNLOCK();
                if (*local_70 == 0 || SCARRY8(lVar12,1) != *local_70 < 0) goto LAB_004cf330;
                local_1a70 = local_70;
                local_1a58 = pcVar17;
                if (CONCAT44(uStack_874,local_878) == 2) goto LAB_004cef33;
                LOCK();
                lVar12 = *local_58;
                *local_58 = *local_58 + 1;
                UNLOCK();
                if (*local_58 == 0 || SCARRY8(lVar12,1) != *local_58 < 0) goto LAB_004cf330;
                plVar13 = local_58;
              }
              plVar7 = local_1a70;
              uVar15 = SUB84(pcVar17,0);
              local_1918 = plVar13;
              uVar9 = (*(code *)PTR_now_00799250)();
              uVar6 = uStack_1a80;
              LOCK();
              lVar12 = *local_1a88;
              *local_1a88 = *local_1a88 + 1;
              UNLOCK();
              if (*local_1a88 == 0 || SCARRY8(lVar12,1) != *local_1a88 < 0) {
LAB_004cf330:
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              local_1998 = local_1b10;
              local_1990 = local_1b08;
              local_1988 = local_1a20;
              local_19e8 = local_1a00;
              local_19f8 = local_1a10;
              uStack_19f0 = uStack_1a08;
              local_1968 = (uint)bVar23;
              local_1964 = local_1a64;
              local_19d8 = local_1a78;
              local_19d0 = local_1a28;
              local_19c0 = local_1af8;
              local_19a0 = local_10b8;
              local_19b0 = local_10c8;
              lStack_19a8 = lStack_10c0;
              local_1980 = local_1ae8;
              local_1978 = local_1a60;
              local_1970 = local_1a30;
              local_1950 = local_1a58;
              local_1940 = local_1a88;
              local_19e0 = local_1af0;
              local_19c8 = param_4;
              local_19b8 = param_4;
              local_1960 = uVar9;
              local_1958 = uVar15;
              local_1948 = uVar25;
              local_1938 = plVar22;
              local_1930 = plVar7;
              local_1928 = plVar13;
              (*(code *)PTR_memcpy_00799008)(local_1a58,0x848);
              local_10d0 = plVar22;
              uVar25 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                       ::send(&local_10c8,uVar6,&local_1918);
              if (local_10c8 == -2) {
                (*(code *)PTR_memcpy_00799008)(uVar25,0xd8);
                <hashbrown[b5c94476ffc33875]::map::HashMap<usize,craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo,std[6c98fd8553dbae28]::hash::random::RandomState>>
                ::insert(&local_10c8,param_1 + 0x98,plVar22,&local_1918);
                if (local_10c8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo>(&local_10c8);
                }
                local_1908 = local_1a38;
                local_1918 = local_1a48;
                plStack_1910 = (longlong *)lStack_1a40;
                uVar25 = <craggemini_core[66f3c71560d70857]::admission::BoundedSeen>::insert
                                   (param_1 + 0x40,&local_1918);
              }
              else {
                if ((int)local_10c8 == -1) {
                  if ((lStack_10c0 != -1) && (lStack_10c0 != 0)) {
                    uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
                  }
                  if ((local_10a8 != -1) && (local_10a8 != 0)) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
                  }
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                            (local_1090);
                }
                else if ((int)local_10c8 != 2) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::pool::AgySlot>(&local_10c8);
                }
                local_1918 = (longlong *)
                             <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                             ::remove::<alloc[12e961f32105355]::string::String>
                                       (param_1 + 200,&local_1a48);
                if (local_1918 != (longlong *)0x0) {
                  LOCK();
                  *local_1918 = *local_1918 + -1;
                  UNLOCK();
                  if (*local_1918 == 0) {
                    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                    ::drop_slow(&local_1918);
                  }
                }
                uVar25 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                         <craggemini_core[66f3c71560d70857]::pool::ActiveSlotInfo>(&local_19f8);
                if (local_1a48 != (longlong *)0x0) {
                  uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
                }
              }
              goto LAB_004cf290;
            }
          }
          else if (lVar12 < local_1a98) goto LAB_004ce957;
          uStack_18e0 = _DAT_0078b920;
          local_18d8 = _UNK_0078b928;
          puStack_18f0 = PTR_s_native_queue_wait_timed_outcalle_0078b910;
          local_18e8 = (undefined *)_UNK_0078b918;
          lStack_1900 = _DAT_0078b900;
          local_18f8 = _UNK_0078b908;
          plStack_1910 = (longlong *)_DAT_0078b8f0;
          local_1908 = _UNK_0078b8f8;
          local_1918 = (longlong *)0xffffffffffffffff;
          uVar25 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                   ::send(&local_10c8,uStack_1a80,&local_1918);
          if (local_10c8 != -2) {
            if ((int)local_10c8 == -1) {
              if ((lStack_10c0 != -1) && (lStack_10c0 != 0)) {
                uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
              }
              if ((local_10a8 != -1) && (local_10a8 != 0)) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                        (local_1090);
            }
            else if ((int)local_10c8 != 2) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::pool::AgySlot>(&local_10c8);
            }
          }
          local_1918 = (longlong *)
                       <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                       ::remove::<alloc[12e961f32105355]::string::String>(param_1 + 200,&local_1ae0)
          ;
          uVar25 = extraout_XMM0_Qa_01;
          if (local_1918 != (longlong *)0x0) {
            LOCK();
            *local_1918 = *local_1918 + -1;
            UNLOCK();
            if (*local_1918 == 0) {
              uVar25 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                       ::drop_slow(&local_1918);
            }
          }
        }
        else {
          uStack_18e0 = _DAT_0078b960;
          local_18d8 = _UNK_0078b968;
          puStack_18f0 = PTR_s_caller_disconnected_0078b950;
          local_18e8 = (undefined *)_UNK_0078b958;
          lStack_1900 = _DAT_0078b940;
          local_18f8 = _UNK_0078b948;
          plStack_1910 = (longlong *)_DAT_0078b930;
          local_1908 = _UNK_0078b938;
          local_1918 = (longlong *)0xffffffffffffffff;
          uVar25 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                   ::send(&local_10c8,uStack_1a80,&local_1918);
          if (local_10c8 != -2) {
            if ((int)local_10c8 == -1) {
              if ((lStack_10c0 != -1) && (lStack_10c0 != 0)) {
                uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
              }
              if ((local_10a8 != -1) && (local_10a8 != 0)) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                        (local_1090);
            }
            else if ((int)local_10c8 != 2) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::pool::AgySlot>(&local_10c8);
            }
          }
          local_1918 = (longlong *)
                       <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                       ::remove::<alloc[12e961f32105355]::string::String>(param_1 + 200,&local_1ae0)
          ;
          uVar25 = extraout_XMM0_Qa_00;
          if (local_1918 != (longlong *)0x0) {
            LOCK();
            *local_1918 = *local_1918 + -1;
            UNLOCK();
            if (*local_1918 == 0) {
              uVar25 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                       ::drop_slow(&local_1918);
            }
          }
        }
      }
      else {
        uStack_18e0 = _DAT_0078b8c8;
        local_18d8 = _UNK_0078b8d0;
        puStack_18f0 = PTR_s_native_turn_cancelledqueue_timeo_0078b8b8;
        local_18e8 = (undefined *)_UNK_0078b8c0;
        lStack_1900 = _DAT_0078b8a8;
        local_18f8 = _UNK_0078b8b0;
        plStack_1910 = (longlong *)_DAT_0078b898;
        local_1908 = _UNK_0078b8a0;
        local_1918 = (longlong *)0xffffffffffffffff;
        uVar25 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                 ::send(&local_10c8,uStack_1a80,&local_1918);
        if (local_10c8 != -2) {
          if ((int)local_10c8 == -1) {
            if ((lStack_10c0 != -1) && (lStack_10c0 != 0)) {
              uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
            }
            if ((local_10a8 != -1) && (local_10a8 != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
            }
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                      (local_1090);
          }
          else if ((int)local_10c8 != 2) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini_core[66f3c71560d70857]::pool::AgySlot>(&local_10c8);
          }
        }
        local_1918 = (longlong *)
                     <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::remove::<alloc[12e961f32105355]::string::String>(param_1 + 200,&local_1ae0);
        uVar25 = extraout_XMM0_Qa;
        if (local_1918 != (longlong *)0x0) {
          LOCK();
          *local_1918 = *local_1918 + -1;
          UNLOCK();
          if (*local_1918 == 0) {
            uVar25 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                     ::drop_slow(&local_1918);
          }
        }
      }
LAB_004cf290:
      if (local_1ae0 != (longlong *)0x0) {
        uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
      }
      if (lStack_1ac8 != 0) {
        uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
      }
      if ((puStack_1ab0 != (undefined *)0xffffffffffffffff) && (puStack_1ab0 != (undefined *)0x0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
      }
      LOCK();
      *local_1a88 = *local_1a88 + -1;
      UNLOCK();
      if (*local_1a88 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(&local_1a88);
      }
    } while (*(longlong **)(param_1 + 0xb0) < param_2);
  }
  return;
}


