// 004c3e40 health_summary

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::health_summary */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::health_summary
          (undefined1 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  char (*pacVar3) [4];
  uint *****pppppuVar4;
  uint *****pppppuVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint *******pppppppuVar9;
  uint ******ppppppuVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint *******pppppppuVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint *******pppppppuVar21;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar22;
  undefined4 extraout_EDX_01;
  undefined1 (*pauVar23) [16];
  uint *******pppppppuVar24;
  longlong lVar25;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  undefined1 uVar28;
  undefined1 (*pauVar29) [16];
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  uint *******pppppppuVar35;
  uint *******pppppppuVar36;
  longlong lVar37;
  uint *******pppppppuVar38;
  uint *******pppppppuVar39;
  bool bVar40;
  bool bVar41;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint *******local_3f8;
  uint *******pppppppuStack_3f0;
  uint *******pppppppuStack_3e8;
  uint *******pppppppuStack_3e0;
  uint *******local_3d8;
  uint *******pppppppuStack_3d0;
  uint *******local_3c8;
  uint *******pppppppuStack_3c0;
  uint *******local_3b8;
  undefined8 local_3b0;
  uint *******pppppppuStack_3a8;
  uint *******pppppppuStack_3a0;
  uint *******pppppppuStack_398;
  undefined8 local_390;
  undefined8 local_388;
  uint *******local_380;
  uint *******local_378;
  undefined8 local_370;
  char local_361;
  longlong *local_360;
  uint *******local_358;
  uint ******local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  uint *******local_330;
  uint *******pppppppuStack_328;
  uint *******local_320;
  longlong local_318;
  uint *******local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  longlong local_2f0;
  uint *******local_2e8;
  longlong local_2e0;
  uint *******local_2d8;
  undefined4 local_2cc;
  uint *******local_2c8;
  uint *******local_2c0;
  uint *******local_2b8;
  uint *******pppppppuStack_2b0;
  uint *******local_2a8;
  uint *******local_2a0;
  undefined8 local_298;
  uint *******local_290;
  uint *******local_288;
  uint *******local_280;
  uint *******local_278;
  uint *******local_270;
  uint *******local_268;
  longlong *local_260;
  uint *******local_258;
  uint *******local_250;
  uint *******local_248;
  uint *******local_240;
  uint *******local_238;
  uint *******local_230;
  uint *******local_228;
  uint *******local_220;
  uint *******local_218;
  undefined8 local_210;
  uint *******local_208;
  uint *******local_200;
  uint *******local_1f8;
  uint *******local_1f0;
  uint *******local_1e8;
  uint *******local_1e0;
  uint *******local_1d8;
  longlong local_1d0;
  uint *******local_1c8;
  uint *******local_1c0;
  uint *******local_1b8;
  uint *******local_1b0;
  uint *******local_1a8;
  undefined1 *local_1a0;
  uint *******local_198;
  longlong *local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  uint *******local_168;
  uint *******local_160;
  uint *******local_158;
  uint *******local_150;
  uint *******local_148;
  uint *******local_140;
  uint *******local_138;
  uint *******local_130;
  undefined8 local_128;
  uint *******local_120;
  undefined8 local_118;
  undefined1 local_b0 [128];
  
  local_1a0 = param_1;
  uVar14 = sample_memory_snapshot(local_b0);
  local_220 = (uint *******)0x0;
  local_210 = 0;
  local_2e8 = (uint *******)0x0;
  local_2e0 = 8;
  local_2d8 = (uint *******)0x0;
  local_2cc = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  local_2f0 = param_2;
  <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list
            (&local_3b0,*(longlong *)(param_2 + 0x170) + 0x10);
  local_2a0 = pppppppuStack_3a8 + (longlong)pppppppuStack_3a0;
  local_2b8 = pppppppuStack_3a8;
  pppppppuStack_2b0 = pppppppuStack_3a8;
  local_2a8 = local_3b0;
  local_2cc = (undefined4)CONCAT71((int7)((ulonglong)local_3b0 >> 8),1);
  bVar40 = false;
  local_138 = local_2a0;
  if (pppppppuStack_3a0 != (uint *******)0x0) {
    lVar25 = 0;
    pppppppuVar38 = (uint *******)0x0;
    pppppppuVar35 = (uint *******)0x0;
    local_238 = (uint *******)0x0;
    local_240 = (uint *******)0x0;
    local_248 = (uint *******)0x0;
    local_250 = (uint *******)0x0;
    local_258 = (uint *******)0x0;
    local_230 = (uint *******)0x0;
    local_228 = (uint *******)0x0;
    local_1e8 = (uint *******)0x0;
    local_270 = (uint *******)0x0;
    local_290 = (uint *******)0x0;
    local_288 = (uint *******)0x0;
    local_280 = (uint *******)0x0;
    local_278 = (uint *******)0x0;
    local_1e0 = (uint *******)0x0;
    local_198 = (uint *******)0x0;
    local_1d8 = (uint *******)0x0;
    local_1d0 = 0;
    local_130 = pppppppuStack_3a8;
LAB_004c3ffe:
    pppppppuStack_2b0 = local_130 + 1;
    local_350 = *local_130;
    local_130 = pppppppuStack_2b0;
    plVar15 = (longlong *)get_pool(local_2f0,local_350[0x1e],local_350[0x1f]);
    if (plVar15 == (longlong *)0x0) goto LAB_004c6330;
    local_260 = plVar15 + 2;
    local_360 = plVar15;
    local_190 = plVar15;
    <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics(&local_3b0);
    local_1f8 = local_3b0;
    local_1f0 = pppppppuStack_3a8;
    local_1c8 = pppppppuStack_3a0;
    local_1b0 = pppppppuStack_398;
    local_1a8 = local_390;
    pppppppuVar38 = (uint *******)(local_360 + 0x55);
    LOCK();
    bVar40 = (int)local_360[0x55] == 0;
    if (bVar40) {
      *(int *)(local_360 + 0x55) = 1;
    }
    UNLOCK();
    if (!bVar40) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar12 = 0;
      cVar13 = *(char *)((longlong)local_360 + 0x2ac);
    }
    else {
      bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar12 = bVar12 ^ 1;
      cVar13 = *(char *)((longlong)local_360 + 0x2ac);
    }
    if (cVar13 == '\0') {
      uVar33 = local_360[0x5b];
      if (uVar33 == 0) {
        lVar25 = 0;
      }
      else {
        if (uVar33 == 1) {
          uVar18 = 0;
          lVar25 = 0;
        }
        else {
          plVar15 = (longlong *)(local_360[0x5a] + 0x20);
          uVar18 = 0;
          lVar25 = 0;
          do {
            lVar25 = ((lVar25 - (ulonglong)
                                (*(char *)(*(longlong *)(plVar15[-4] + 0x240) + 0x10) == '\0')) + 2)
                     - (ulonglong)(*(char *)(*(longlong *)(*plVar15 + 0x240) + 0x10) == '\0');
            uVar18 = uVar18 + 2;
            plVar15 = plVar15 + 8;
          } while ((uVar33 & 0xfffffffffffffffe) != uVar18);
          if ((uVar33 & 1) == 0) goto LAB_004c41ac;
        }
        lVar25 = (lVar25 + 1) -
                 (ulonglong)
                 (*(char *)(*(longlong *)(*(longlong *)(local_360[0x5a] + uVar18 * 0x20) + 0x240) +
                           0x10) == '\0');
      }
LAB_004c41ac:
      if (((bVar12 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
        *(undefined1 *)((longlong)local_360 + 0x2ac) = 1;
      }
      LOCK();
      uVar30 = *(uint *)pppppppuVar38;
      *(uint *)pppppppuVar38 = 0;
      UNLOCK();
      if (uVar30 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      pppppppuVar38 = (uint *******)(local_360 + 0x94);
      LOCK();
      bVar40 = (int)local_360[0x94] == 0;
      if (bVar40) {
        *(int *)(local_360 + 0x94) = 1;
      }
      UNLOCK();
      if (!bVar40) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar12 = 0;
        cVar13 = *(char *)((longlong)local_360 + 0x4a4);
      }
      else {
        bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar12 = bVar12 ^ 1;
        cVar13 = *(char *)((longlong)local_360 + 0x4a4);
      }
      if (cVar13 == '\0') {
        local_1c0 = (uint *******)local_360[0xb4];
        if (((bVar12 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
          *(undefined1 *)((longlong)local_360 + 0x4a4) = 1;
        }
        LOCK();
        uVar30 = *(uint *)pppppppuVar38;
        *(uint *)pppppppuVar38 = 0;
        UNLOCK();
        if (uVar30 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        local_1b8 = (uint *******)local_360[0xc];
        local_140 = (uint *******)local_360[0xe];
        pppppppuVar39 = (uint *******)(local_360 + 0x15);
        LOCK();
        bVar40 = (int)local_360[0x15] == 0;
        if (bVar40) {
          *(int *)(local_360 + 0x15) = 1;
        }
        UNLOCK();
        if (!bVar40) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          bVar12 = 0;
          cVar13 = *(char *)((longlong)local_360 + 0xac);
        }
        else {
          bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          bVar12 = bVar12 ^ 1;
          cVar13 = *(char *)((longlong)local_360 + 0xac);
        }
        if (cVar13 == '\0') {
          local_3b8 = pppppppuVar38;
          if (local_360[0x16] == -1) {
            local_268 = (uint *******)0xffffffffffffffff;
          }
          else {
            (*(code *)PTR_clone_00798fd0)();
            local_268 = local_3b0;
            local_208 = pppppppuStack_3a8;
            local_150 = pppppppuStack_3a0;
          }
          if (((bVar12 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
            *(undefined1 *)((longlong)local_360 + 0xac) = 1;
          }
          LOCK();
          uVar30 = *(uint *)pppppppuVar39;
          *(uint *)pppppppuVar39 = 0;
          UNLOCK();
          if (uVar30 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          local_361 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::is_circuit_open
                                (local_260);
          local_148 = (uint *******)local_360[0x1c];
          LOCK();
          bVar40 = (int)local_360[0x94] == 0;
          if (bVar40) {
            *(int *)(local_360 + 0x94) = 1;
          }
          UNLOCK();
          if (!bVar40) {
            (*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            uVar30 = 0;
            cVar13 = *(char *)((longlong)local_360 + 0x4a4);
            pppppppuVar38 = local_298;
          }
          else {
            uVar30 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            uVar30 = uVar30 ^ 1;
            cVar13 = *(char *)((longlong)local_360 + 0x4a4);
            pppppppuVar38 = local_298;
          }
          local_298._0_1_ = (char)uVar30;
          cVar11 = (char)local_298;
          if (cVar13 == '\0') {
            local_298 = (uint *******)CONCAT44((int)((ulonglong)pppppppuVar38 >> 0x20),uVar30);
            pppppppuVar38 = (uint *******)local_360[0x26];
            pppppppuVar39 = (uint *******)local_360[0x27];
            pppppppuVar27 = (uint *******)local_360[0x28];
            pppppppuVar26 = (uint *******)local_360[0x29];
            local_2c0 = (uint *******)local_360[0x2a];
            lVar17 = local_360[0xab];
            if (lVar17 == 0) {
              local_318 = 0;
              local_310 = (uint *******)0x0;
              local_358 = (uint *******)0x0;
            }
            else {
              pauVar23 = (undefined1 (*) [16])local_360[0xa8];
              auVar42 = *pauVar23;
              uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar42[0xf] >> 7) << 0xf);
              pauVar29 = pauVar23 + 1;
              local_358 = (uint *******)0x0;
              local_310 = (uint *******)0x0;
              local_318 = 0;
              do {
                if ((short)uVar30 == 0) {
                  do {
                    auVar42 = *pauVar29;
                    pauVar23 = pauVar23 + -0xe0;
                    pauVar29 = pauVar29 + 1;
                    uVar30 = (ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar30 == 0);
                }
                uVar7 = 0;
                for (uVar8 = uVar30; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar33 = (ulonglong)uVar7;
                uVar30 = uVar30 - 1 & uVar30;
                if (*(longlong *)pauVar23[uVar33 * -0xe + -1] != 0) {
                  lVar32 = *(longlong *)(*(longlong *)pauVar23[uVar33 * -0xe + -1] + 0x10);
                  bVar40 = CARRY8((ulonglong)pppppppuVar38,*(ulonglong *)(lVar32 + 0x140));
                  pppppppuVar38 =
                       (uint *******)((longlong)pppppppuVar38 + *(ulonglong *)(lVar32 + 0x140));
                  if (bVar40) {
                    pppppppuVar38 = (uint *******)0xffffffffffffffff;
                  }
                  bVar40 = CARRY8((ulonglong)pppppppuVar39,*(ulonglong *)(lVar32 + 0x148));
                  pppppppuVar39 =
                       (uint *******)((longlong)pppppppuVar39 + *(ulonglong *)(lVar32 + 0x148));
                  if (bVar40) {
                    pppppppuVar39 = (uint *******)0xffffffffffffffff;
                  }
                  bVar40 = CARRY8((ulonglong)pppppppuVar27,*(ulonglong *)(lVar32 + 0x150));
                  pppppppuVar27 =
                       (uint *******)((longlong)pppppppuVar27 + *(ulonglong *)(lVar32 + 0x150));
                  if (bVar40) {
                    pppppppuVar27 = (uint *******)0xffffffffffffffff;
                  }
                  bVar40 = CARRY8((ulonglong)pppppppuVar26,*(ulonglong *)(lVar32 + 0x158));
                  pppppppuVar26 =
                       (uint *******)((longlong)pppppppuVar26 + *(ulonglong *)(lVar32 + 0x158));
                  if (bVar40) {
                    pppppppuVar26 = (uint *******)0xffffffffffffffff;
                  }
                  bVar40 = CARRY8((ulonglong)local_2c0,*(ulonglong *)(lVar32 + 0x160));
                  local_2c0 = (uint *******)((longlong)local_2c0 + *(ulonglong *)(lVar32 + 0x160));
                  if (bVar40) {
                    local_2c0 = (uint *******)0xffffffffffffffff;
                  }
                  if (*(longlong *)(pauVar23[uVar33 * -0xe + -3] + 8) == 0xb) {
                    if (*(longlong *)((longlong)*(longlong **)pauVar23[uVar33 * -0xe + -3] + 3) !=
                        0x31765f6d68735f65 ||
                        **(longlong **)pauVar23[uVar33 * -0xe + -3] != 0x6d68735f656c6966)
                    goto LAB_004c44b6;
                    local_310 = (uint *******)((longlong)local_310 + 1);
                  }
                  else if ((*(longlong *)(pauVar23[uVar33 * -0xe + -3] + 8) == 0xd) &&
                          (*(longlong *)((longlong)*(longlong **)pauVar23[uVar33 * -0xe + -3] + 5)
                           == 0x32765f676e69725f &&
                           **(longlong **)pauVar23[uVar33 * -0xe + -3] == 0x69725f64666d656d)) {
                    local_358 = (uint *******)((longlong)local_358 + 1);
                  }
                  else {
LAB_004c44b6:
                    local_318 = local_318 + 1;
                  }
                }
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            uVar33 = local_360[0x98];
            if (uVar33 == 0) {
              lVar17 = 0;
              uVar18 = 0;
            }
            else {
              uVar18 = local_360[0x95];
              uVar31 = 0;
              if (uVar18 <= (ulonglong)local_360[0x97]) {
                uVar31 = uVar18;
              }
              lVar17 = local_360[0x97] - uVar31;
              lVar32 = uVar33 - (uVar18 - lVar17);
              if (uVar18 - lVar17 <= uVar33 && lVar32 != 0) goto LAB_004c4657;
              uVar18 = uVar33 + lVar17;
            }
            lVar32 = 0;
LAB_004c4657:
            local_1c0 = (uint *******)((longlong)local_1c0 + lVar25);
            lVar19 = local_360[0x96];
            lVar25 = lVar17 * 0x848 + lVar19;
            lVar17 = uVar18 * 0x848 + lVar19;
            lVar32 = lVar32 * 0x848 + lVar19;
            lVar37 = local_318;
LAB_004c46a0:
            if (lVar25 == lVar17) {
              bVar40 = lVar19 == lVar32;
              lVar20 = lVar25;
              lVar17 = lVar32;
              lVar32 = lVar25;
              if (bVar40) goto LAB_004c4860;
            }
            else {
              lVar20 = lVar19;
              lVar19 = lVar25;
            }
            lVar25 = lVar19 + 0x848;
            lVar34 = *(longlong *)(*(longlong *)(lVar19 + 0x808) + 0x10);
            bVar40 = CARRY8((ulonglong)pppppppuVar38,*(ulonglong *)(lVar34 + 0x140));
            pppppppuVar38 = (uint *******)((longlong)pppppppuVar38 + *(ulonglong *)(lVar34 + 0x140))
            ;
            if (bVar40) {
              pppppppuVar38 = (uint *******)0xffffffffffffffff;
            }
            bVar40 = CARRY8((ulonglong)pppppppuVar39,*(ulonglong *)(lVar34 + 0x148));
            pppppppuVar39 = (uint *******)((longlong)pppppppuVar39 + *(ulonglong *)(lVar34 + 0x148))
            ;
            if (bVar40) {
              pppppppuVar39 = (uint *******)0xffffffffffffffff;
            }
            bVar40 = CARRY8((ulonglong)pppppppuVar27,*(ulonglong *)(lVar34 + 0x150));
            pppppppuVar27 = (uint *******)((longlong)pppppppuVar27 + *(ulonglong *)(lVar34 + 0x150))
            ;
            if (bVar40) {
              pppppppuVar27 = (uint *******)0xffffffffffffffff;
            }
            bVar40 = CARRY8((ulonglong)pppppppuVar26,*(ulonglong *)(lVar34 + 0x158));
            pppppppuVar26 = (uint *******)((longlong)pppppppuVar26 + *(ulonglong *)(lVar34 + 0x158))
            ;
            if (bVar40) {
              pppppppuVar26 = (uint *******)0xffffffffffffffff;
            }
            bVar40 = CARRY8((ulonglong)local_2c0,*(ulonglong *)(lVar34 + 0x160));
            local_2c0 = (uint *******)((longlong)local_2c0 + *(ulonglong *)(lVar34 + 0x160));
            if (bVar40) {
              local_2c0 = (uint *******)0xffffffffffffffff;
            }
            if (*(longlong *)(lVar19 + 0x150) == 0x11) {
              pcVar2 = *(char **)(lVar19 + 0x148);
              auVar42[0] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[0]
                            == *pcVar2);
              auVar42[1] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[1]
                            == pcVar2[1]);
              auVar42[2] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[2]
                            == pcVar2[2]);
              auVar42[3] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[3]
                            == pcVar2[3]);
              auVar42[4] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[4]
                            == pcVar2[4]);
              auVar42[5] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[5]
                            == pcVar2[5]);
              auVar42[6] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[6]
                            == pcVar2[6]);
              auVar42[7] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[7]
                            == pcVar2[7]);
              auVar42[8] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[8]
                            == pcVar2[8]);
              auVar42[9] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[9]
                            == pcVar2[9]);
              auVar42[10] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992[10]
                             == pcVar2[10]);
              auVar42[0xb] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                               [0xb] == pcVar2[0xb]);
              auVar42[0xc] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                               [0xc] == pcVar2[0xc]);
              auVar42[0xd] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                               [0xd] == pcVar2[0xd]);
              auVar42[0xe] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                               [0xe] == pcVar2[0xe]);
              auVar42[0xf] = -(anon_d3057478e380898db632effa827bd31f_373_llvm_2674179329317868992
                               [0xf] == pcVar2[0xf]);
              auVar44[0] = -(s_3_001a503a[0] == pcVar2[0x10]);
              auVar44[1] = 0xff;
              auVar44[2] = 0xff;
              auVar44[3] = 0xff;
              auVar44[4] = 0xff;
              auVar44[5] = 0xff;
              auVar44[6] = 0xff;
              auVar44[7] = 0xff;
              auVar44[8] = 0xff;
              auVar44[9] = 0xff;
              auVar44[10] = 0xff;
              auVar44[0xb] = 0xff;
              auVar44[0xc] = 0xff;
              auVar44[0xd] = 0xff;
              auVar44[0xe] = 0xff;
              auVar44[0xf] = 0xff;
              auVar44 = auVar44 & auVar42;
              if (((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) == 0xffff) &&
                 ((int)*(undefined8 *)(lVar19 + 0x80) != 2)) {
                local_358 = (uint *******)((longlong)local_358 + 1);
                lVar19 = lVar20;
                goto LAB_004c46a0;
              }
              auVar43[0] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[0]
                            == *pcVar2);
              auVar43[1] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[1]
                            == pcVar2[1]);
              auVar43[2] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[2]
                            == pcVar2[2]);
              auVar43[3] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[3]
                            == pcVar2[3]);
              auVar43[4] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[4]
                            == pcVar2[4]);
              auVar43[5] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[5]
                            == pcVar2[5]);
              auVar43[6] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[6]
                            == pcVar2[6]);
              auVar43[7] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[7]
                            == pcVar2[7]);
              auVar43[8] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[8]
                            == pcVar2[8]);
              auVar43[9] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[9]
                            == pcVar2[9]);
              auVar43[10] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992[10]
                             == pcVar2[10]);
              auVar43[0xb] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                               [0xb] == pcVar2[0xb]);
              auVar43[0xc] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                               [0xc] == pcVar2[0xc]);
              auVar43[0xd] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                               [0xd] == pcVar2[0xd]);
              auVar43[0xe] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                               [0xe] == pcVar2[0xe]);
              auVar43[0xf] = -(anon_d3057478e380898db632effa827bd31f_374_llvm_2674179329317868992
                               [0xf] == pcVar2[0xf]);
              auVar45[0] = -(s_2_001a504b[0] == pcVar2[0x10]);
              auVar45[1] = 0xff;
              auVar45[2] = 0xff;
              auVar45[3] = 0xff;
              auVar45[4] = 0xff;
              auVar45[5] = 0xff;
              auVar45[6] = 0xff;
              auVar45[7] = 0xff;
              auVar45[8] = 0xff;
              auVar45[9] = 0xff;
              auVar45[10] = 0xff;
              auVar45[0xb] = 0xff;
              auVar45[0xc] = 0xff;
              auVar45[0xd] = 0xff;
              auVar45[0xe] = 0xff;
              auVar45[0xf] = 0xff;
              auVar45 = auVar45 & auVar43;
              if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) != 0xffff) goto LAB_004c468e;
              if (*(longlong *)(lVar19 + 0xe8) == 0) {
LAB_004c484a:
                local_310 = (uint *******)((longlong)local_310 + 1);
                lVar19 = lVar20;
                goto LAB_004c46a0;
              }
              lVar34 = 0;
              do {
                if ((*(longlong *)(*(longlong *)(lVar19 + 0xe0) + 0x10 + lVar34) == 6) &&
                   (pacVar3 = *(char (**) [4])(*(longlong *)(lVar19 + 0xe0) + 8 + lVar34),
                   *(char (*) [2])pacVar3[1] == s_v1_001a4a46 &&
                   *pacVar3 == anon_d3057478e380898db632effa827bd31f_84_llvm_2674179329317868992))
                goto LAB_004c484a;
                lVar34 = lVar34 + 0x18;
              } while (*(longlong *)(lVar19 + 0xe8) * 0x18 != lVar34);
            }
LAB_004c468e:
            lVar37 = lVar37 + 1;
            lVar19 = lVar20;
            goto LAB_004c46a0;
          }
          pppppppuStack_3a8._1_7_ = (undefined7)((ulonglong)pppppppuStack_3a8 >> 8);
          pppppppuStack_3a8 = (uint *******)CONCAT71(pppppppuStack_3a8._1_7_,(char)local_298);
          local_3b0 = local_3b8;
          local_298 = pppppppuVar38;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
                     ,&local_3b0,
                     &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078ba00)
          ;
        }
        else {
          pppppppuStack_3a8._1_7_ = (undefined7)((ulonglong)pppppppuStack_3a8 >> 8);
          pppppppuStack_3a8 = (uint *******)CONCAT71(pppppppuStack_3a8._1_7_,bVar12);
          local_3b0 = pppppppuVar39;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b4d0
                     ,&local_3b0,
                     &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc58)
          ;
        }
      }
      else {
        pppppppuStack_3a8._1_7_ = (undefined7)((ulonglong)pppppppuStack_3a8 >> 8);
        pppppppuStack_3a8 = (uint *******)CONCAT71(pppppppuStack_3a8._1_7_,bVar12);
        local_3b0 = pppppppuVar38;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&
                   PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
                   ,&local_3b0,
                   &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b850);
      }
    }
    else {
      pppppppuStack_3a8._1_7_ = (undefined7)((ulonglong)pppppppuStack_3a8 >> 8);
      pppppppuStack_3a8 = (uint *******)CONCAT71(pppppppuStack_3a8._1_7_,bVar12);
      local_3b0 = pppppppuVar38;
      (*(code *)PTR_unwrap_failed_00799028)
                (&
                 PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b510
                 ,&local_3b0,
                 &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b838);
    }
    goto LAB_004c7be7;
  }
  local_318 = 0;
  local_310 = (uint *******)0x0;
  local_2c8 = (uint *******)0x0;
  local_238 = (uint *******)0x0;
  local_240 = (uint *******)0x0;
  local_248 = (uint *******)0x0;
  local_250 = (uint *******)0x0;
  local_258 = (uint *******)0x0;
  local_230 = (uint *******)0x0;
  local_228 = (uint *******)0x0;
  pppppppuVar27 = (uint *******)0x0;
  local_270 = (uint *******)0x0;
  local_288 = (uint *******)0x0;
  local_280 = (uint *******)0x0;
  bVar41 = true;
  local_278 = (uint *******)0x0;
  pppppppuVar39 = (uint *******)0x0;
LAB_004c65e2:
  local_290 = pppppppuVar39;
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_2b8);
  pppppppuVar39 = (uint *******)((longlong)pppppppuVar39 + (longlong)local_270);
  cVar13 = (*(code *)PTR_is_cancelled_00799260)();
  if ((cVar13 == '\0') &&
     ((bool)(local_2d8 != (uint *******)0x0 & (bVar41 | pppppppuVar39 != (uint *******)0x0)))) {
    bVar41 = true;
    if (*(char *)(local_2f0 + 0x16b) != '\0') {
      bVar41 = bVar40;
    }
  }
  else {
    bVar41 = false;
  }
  policy_view(&local_188,local_2f0);
  local_330 = (uint *******)0x0;
  local_320 = (uint *******)0x0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
  if (pppppppuVar38 != (uint *******)0x0) {
    *(undefined4 *)((longlong)pppppppuVar38 + 3) = 0x64656c62;
    *(uint *)pppppppuVar38 = 0x62616e65;
    local_3f8 = (uint *******)&DAT_00000007;
    pppppppuStack_3e8 = (uint *******)&DAT_00000007;
    local_3b0._0_2_ = CONCAT11(local_2d8 != (uint *******)0x0,1);
    pppppppuStack_3f0 = pppppppuVar38;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
    if ((char)local_3d8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_3d8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
    if (pppppppuVar38 != (uint *******)0x0) {
      *(undefined1 *)((longlong)pppppppuVar38 + 4) = 0x79;
      *(uint *)pppppppuVar38 = 0x64616572;
      local_3f8 = (uint *******)&DAT_00000005;
      pppppppuStack_3e8 = (uint *******)&DAT_00000005;
      local_3b0._0_2_ = CONCAT11(bVar41,1);
      pppppppuStack_3f0 = pppppppuVar38;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
      if ((char)local_3d8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_3d8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
      if (pppppppuVar38 != (uint *******)0x0) {
        *(undefined4 *)((longlong)pppppppuVar38 + 3) = 0x646e656b;
        *(uint *)pppppppuVar38 = 0x6b636162;
        local_3f8 = (uint *******)&DAT_00000007;
        pppppppuStack_3e8 = (uint *******)&DAT_00000007;
        pppppppuVar35 = (uint *******)0xa;
        if (*(char *)(local_2f0 + 0x169) != '\0') {
          pppppppuVar35 = (uint *******)0x3;
        }
        pppppppuStack_3f0 = pppppppuVar38;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
        if (pppppppuVar38 == (uint *******)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_004c7be7;
        }
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_05,pppppppuVar35);
        local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,3);
        pppppppuStack_3a8 = pppppppuVar35;
        pppppppuStack_3a0 = pppppppuVar38;
        pppppppuStack_398 = pppppppuVar35;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
        if ((char)local_3d8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_3d8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
        if (pppppppuVar38 != (uint *******)0x0) {
          *(undefined8 *)((longlong)pppppppuVar38 + 5) = 0x746e756f635f746e;
          *pppppppuVar38 = (uint ******)0x5f746e756f636361;
          local_3f8 = (uint *******)&DAT_0000000d;
          pppppppuStack_3e8 = (uint *******)&DAT_0000000d;
          local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
          pppppppuStack_3a8 = (uint *******)0x0;
          pppppppuStack_3a0 = local_2d8;
          pppppppuStack_3f0 = pppppppuVar38;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
          if ((char)local_3d8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_3d8);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
          if (pppppppuVar38 != (uint *******)0x0) {
            *pppppppuVar38 = (uint ******)0x6f6363615f78616d;
            *(uint *)(pppppppuVar38 + 1) = 0x73746e75;
            local_2b8 = (uint *******)0xc;
            local_2a8 = (uint *******)0xc;
            pppppppuStack_2b0 = pppppppuVar38;
            get_policy(&local_3b0,local_2f0);
            local_3d8 = (uint *******)CONCAT71(local_3d8._1_7_,2);
            pppppppuStack_3d0 = (uint *******)0x0;
            local_3c8 = local_3b0;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_3f8,&local_330,&local_2b8,&local_3d8);
            if ((char)local_3f8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_3f8);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
            uVar14 = s_calibrated_accounts_00197053._8_8_;
            if (pppppppuVar38 != (uint *******)0x0) {
              *pppppppuVar38 = (uint ******)s_calibrated_accounts_00197053._0_8_;
              pppppppuVar38[1] = (uint ******)uVar14;
              *(undefined4 *)((longlong)pppppppuVar38 + 0xf) = 0x73746e75;
              local_3f8 = (uint *******)0x13;
              pppppppuStack_3e8 = (uint *******)0x13;
              local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
              pppppppuStack_3a8 = (uint *******)0x0;
              pppppppuStack_3a0 = local_228;
              pppppppuStack_3f0 = pppppppuVar38;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
              if ((char)local_3d8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_3d8);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
              uVar14 = s_circuit_open_accounts_00197066._8_8_;
              if (pppppppuVar38 != (uint *******)0x0) {
                *pppppppuVar38 = (uint ******)s_circuit_open_accounts_00197066._0_8_;
                pppppppuVar38[1] = (uint ******)uVar14;
                *(undefined8 *)((longlong)pppppppuVar38 + 0xd) = 0x73746e756f636361;
                local_3f8 = (uint *******)&DAT_00000015;
                pppppppuStack_3e8 = (uint *******)&DAT_00000015;
                local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                pppppppuStack_3a8 = (uint *******)0x0;
                pppppppuStack_3a0 = local_230;
                pppppppuStack_3f0 = pppppppuVar38;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
                if ((char)local_3d8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                uVar14 = s_total_max_concurrency_0019707b._8_8_;
                if (pppppppuVar38 != (uint *******)0x0) {
                  *pppppppuVar38 = (uint ******)s_total_max_concurrency_0019707b._0_8_;
                  pppppppuVar38[1] = (uint ******)uVar14;
                  *(undefined8 *)((longlong)pppppppuVar38 + 0xd) = 0x79636e6572727563;
                  local_3f8 = (uint *******)&DAT_00000015;
                  pppppppuStack_3e8 = (uint *******)&DAT_00000015;
                  local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                  pppppppuStack_3a8 = (uint *******)0x0;
                  pppppppuStack_3a0 = local_278;
                  pppppppuStack_3f0 = pppppppuVar38;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
                  if ((char)local_3d8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                  uVar14 = s_total_runnable_slots_00197090._8_8_;
                  if (pppppppuVar38 != (uint *******)0x0) {
                    *pppppppuVar38 = (uint ******)s_total_runnable_slots_00197090._0_8_;
                    pppppppuVar38[1] = (uint ******)uVar14;
                    *(uint *)(pppppppuVar38 + 2) = 0x73746f6c;
                    local_3f8 = (uint *******)0x14;
                    pppppppuStack_3e8 = (uint *******)0x14;
                    local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                    pppppppuStack_3a8 = (uint *******)0x0;
                    pppppppuStack_3a0 = local_280;
                    pppppppuStack_3f0 = pppppppuVar38;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
                    if ((char)local_3d8 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                    uVar14 = s_total_min_warm_slots_001970a4._8_8_;
                    if (pppppppuVar38 != (uint *******)0x0) {
                      *pppppppuVar38 = (uint ******)s_total_min_warm_slots_001970a4._0_8_;
                      pppppppuVar38[1] = (uint ******)uVar14;
                      *(uint *)(pppppppuVar38 + 2) = 0x73746f6c;
                      local_3f8 = (uint *******)0x14;
                      pppppppuStack_3e8 = (uint *******)0x14;
                      local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                      pppppppuStack_3a8 = (uint *******)0x0;
                      pppppppuStack_3a0 = local_288;
                      pppppppuStack_3f0 = pppppppuVar38;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
                      if ((char)local_3d8 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                      uVar14 = s_total_active_slots_001970b8._8_8_;
                      if (pppppppuVar38 != (uint *******)0x0) {
                        *pppppppuVar38 = (uint ******)s_total_active_slots_001970b8._0_8_;
                        pppppppuVar38[1] = (uint ******)uVar14;
                        *(undefined2 *)(pppppppuVar38 + 2) = 0x7374;
                        local_3f8 = (uint *******)0x12;
                        pppppppuStack_3e8 = (uint *******)0x12;
                        local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                        pppppppuStack_3a8 = (uint *******)0x0;
                        pppppppuStack_3a0 = local_290;
                        pppppppuStack_3f0 = pppppppuVar38;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
                        if ((char)local_3d8 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                        uVar14 = s_total_idle_slots_00184790._8_8_;
                        if (pppppppuVar38 != (uint *******)0x0) {
                          *pppppppuVar38 = (uint ******)s_total_idle_slots_00184790._0_8_;
                          pppppppuVar38[1] = (uint ******)uVar14;
                          local_3f8 = (uint *******)&DAT_00000010;
                          pppppppuStack_3e8 = (uint *******)&DAT_00000010;
                          local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                          pppppppuStack_3a8 = (uint *******)0x0;
                          pppppppuStack_3a0 = local_270;
                          pppppppuStack_3f0 = pppppppuVar38;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
                          if ((char)local_3d8 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                          }
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                          if (pppppppuVar38 != (uint *******)0x0) {
                            *pppppppuVar38 = (uint ******)0x6c735f6c61746f74;
                            *(undefined4 *)((longlong)pppppppuVar38 + 7) = 0x73746f6c;
                            local_3f8 = (uint *******)0xb;
                            pppppppuStack_3e8 = (uint *******)0xb;
                            local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                            pppppppuStack_3a8 = (uint *******)0x0;
                            pppppppuStack_3f0 = pppppppuVar38;
                            pppppppuStack_3a0 = pppppppuVar39;
                            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                            ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
                            if ((char)local_3d8 != -1) {
                              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                              <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                            }
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                            if (pppppppuVar38 != (uint *******)0x0) {
                              *pppppppuVar38 = (uint ******)0x75715f6c61746f74;
                              *(uint *)(pppppppuVar38 + 1) = 0x64657565;
                              local_3f8 = (uint *******)0xc;
                              pppppppuStack_3e8 = (uint *******)0xc;
                              local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                              pppppppuStack_3a8 = (uint *******)0x0;
                              pppppppuStack_3f0 = pppppppuVar38;
                              pppppppuStack_3a0 = pppppppuVar27;
                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                              ::insert(&local_3d8,&local_330,&local_3f8,&local_3b0);
                              if ((char)local_3d8 != -1) {
                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                              }
                              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                              pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                              if (pppppppuVar38 != (uint *******)0x0) {
                                *(undefined2 *)((longlong)pppppppuVar38 + 4) = 0x7972;
                                *(uint *)pppppppuVar38 = 0x6f6d656d;
                                local_3f8 = (uint *******)&DAT_00000006;
                                pppppppuStack_3e8 = (uint *******)&DAT_00000006;
                                pppppppuStack_3f0 = pppppppuVar38;
                                serde_json[dc3825464c436029]::value::to_value::
                                <&craggemini_core[66f3c71560d70857]::admission::MemorySnapshot>
                                          (&local_3b0,local_b0);
                                if ((char)local_3b0 == -1) {
                                  local_3d8 = pppppppuStack_3a8;
                                  (*(code *)PTR_unwrap_failed_00799028)
                                            (&
                                             PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610
                                             ,&local_3d8,
                                             &
                                             PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc40
                                            );
                                  goto LAB_004c7be7;
                                }
                                local_3c8 = pppppppuStack_3a0;
                                pppppppuStack_3c0 = pppppppuStack_398;
                                local_3d8 = local_3b0;
                                pppppppuStack_3d0 = pppppppuStack_3a8;
                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::insert(&local_3b0,&local_330,&local_3f8,&local_3d8);
                                if ((char)local_3b0 != -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::value::Value>(&local_3b0);
                                }
                                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                pppppppuVar38 = (uint *******)(*(code *)PTR___rust_alloc_00799000)()
                                ;
                                if (pppppppuVar38 != (uint *******)0x0) {
                                  *(undefined2 *)((longlong)pppppppuVar38 + 4) = 0x7963;
                                  *(uint *)pppppppuVar38 = 0x696c6f70;
                                  local_3f8 = (uint *******)&DAT_00000006;
                                  pppppppuStack_3e8 = (uint *******)&DAT_00000006;
                                  pppppppuStack_3f0 = pppppppuVar38;
                                  <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                                  ::serialize::
                                  <serde_json[dc3825464c436029]::value::ser::Serializer>
                                            (&local_3b0,&local_188);
                                  if ((char)local_3b0 == -1) {
                                    local_3d8 = pppppppuStack_3a8;
                                    (*(code *)PTR_unwrap_failed_00799028)
                                              (&
                                               PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610
                                               ,&local_3d8,
                                               &
                                               PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc40
                                              );
                                    goto LAB_004c7be7;
                                  }
                                  local_3c8 = pppppppuStack_3a0;
                                  pppppppuStack_3c0 = pppppppuStack_398;
                                  local_3d8 = local_3b0;
                                  pppppppuStack_3d0 = pppppppuStack_3a8;
                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                  ::insert(&local_3b0,&local_330,&local_3f8,&local_3d8);
                                  if ((char)local_3b0 != -1) {
                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                    <serde_json[dc3825464c436029]::value::Value>(&local_3b0);
                                  }
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                  plVar15 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
                                  if (plVar15 != (longlong *)0x0) {
                                    *(undefined8 *)((longlong)plVar15 + 6) = 0x73746174735f676e;
                                    *plVar15 = 0x676e69725f6d6873;
                                    local_348 = 0xe;
                                    local_338 = 0xe;
                                    local_2b8 = (uint *******)0x0;
                                    local_2a8 = (uint *******)0x0;
                                    local_340 = plVar15;
                                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                    pppppppuVar35 =
                                         (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                                    pppppppuVar38 = local_2c8;
                                    if (pppppppuVar35 != (uint *******)0x0) {
                                      *pppppppuVar35 = (uint ******)0x6d6172665f716572;
                                      *(undefined2 *)(pppppppuVar35 + 1) = 0x7365;
                                      local_3f8 = (uint *******)0xa;
                                      pppppppuStack_3e8 = (uint *******)0xa;
                                      local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                      pppppppuStack_3a8 = (uint *******)0x0;
                                      pppppppuStack_3a0 = local_238;
                                      pppppppuStack_3f0 = pppppppuVar35;
                                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                      ::insert(&local_3d8,&local_2b8,&local_3f8,&local_3b0);
                                      if ((char)local_3d8 != -1) {
                                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                        <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                                      }
                                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                      pppppppuVar35 =
                                           (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                                      if (pppppppuVar35 != (uint *******)0x0) {
                                        *pppppppuVar35 = (uint ******)0x6172665f70736572;
                                        *(undefined4 *)((longlong)pppppppuVar35 + 7) = 0x73656d61;
                                        local_3f8 = (uint *******)0xb;
                                        pppppppuStack_3e8 = (uint *******)0xb;
                                        local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                        pppppppuStack_3a8 = (uint *******)0x0;
                                        pppppppuStack_3a0 = local_240;
                                        pppppppuStack_3f0 = pppppppuVar35;
                                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                        ::insert(&local_3d8,&local_2b8,&local_3f8,&local_3b0);
                                        if ((char)local_3d8 != -1) {
                                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                          <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                                        }
                                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                  ();
                                        pppppppuVar35 =
                                             (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                                        if (pppppppuVar35 != (uint *******)0x0) {
                                          *pppppppuVar35 = (uint ******)0x657479625f716572;
                                          *(undefined1 *)(pppppppuVar35 + 1) = 0x73;
                                          local_3f8 = (uint *******)&DAT_00000009;
                                          pppppppuStack_3e8 = (uint *******)&DAT_00000009;
                                          local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                          pppppppuStack_3a8 = (uint *******)0x0;
                                          pppppppuStack_3a0 = local_248;
                                          pppppppuStack_3f0 = pppppppuVar35;
                                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                          ::insert(&local_3d8,&local_2b8,&local_3f8,&local_3b0);
                                          if ((char)local_3d8 != -1) {
                                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                            <serde_json[dc3825464c436029]::value::Value>(&local_3d8)
                                            ;
                                          }
                                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8
                                          )();
                                          pppppppuVar35 =
                                               (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                                          if (pppppppuVar35 != (uint *******)0x0) {
                                            *pppppppuVar35 = (uint ******)0x7479625f70736572;
                                            *(undefined2 *)(pppppppuVar35 + 1) = 0x7365;
                                            local_3f8 = (uint *******)0xa;
                                            pppppppuStack_3e8 = (uint *******)0xa;
                                            local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                            pppppppuStack_3a8 = (uint *******)0x0;
                                            pppppppuStack_3a0 = local_250;
                                            pppppppuStack_3f0 = pppppppuVar35;
                                            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                            ::insert(&local_3d8,&local_2b8,&local_3f8,&local_3b0);
                                            if ((char)local_3d8 != -1) {
                                              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                              <serde_json[dc3825464c436029]::value::Value>
                                                        (&local_3d8);
                                            }
                                            (*(code *)
                                              PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                            pppppppuVar35 =
                                                 (uint *******)
                                                 (*(code *)PTR___rust_alloc_00799000)();
                                            ppppppuVar10 = _UNK_001846b8;
                                            if (pppppppuVar35 != (uint *******)0x0) {
                                              *pppppppuVar35 = _DAT_001846b0;
                                              pppppppuVar35[1] = ppppppuVar10;
                                              local_3f8 = (uint *******)&DAT_00000010;
                                              pppppppuStack_3e8 = (uint *******)&DAT_00000010;
                                              local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                              pppppppuStack_3a8 = (uint *******)0x0;
                                              pppppppuStack_3a0 = local_258;
                                              pppppppuStack_3f0 = pppppppuVar35;
                                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                              ::insert(&local_3d8,&local_2b8,&local_3f8,&local_3b0);
                                              if ((char)local_3d8 != -1) {
                                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                <serde_json[dc3825464c436029]::value::Value>
                                                          (&local_3d8);
                                              }
                                              (*(code *)
                                                PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                              pppppppuVar35 =
                                                   (uint *******)
                                                   (*(code *)PTR___rust_alloc_00799000)();
                                              uVar14 = s_memfd_ring_slots_001842b0._8_8_;
                                              if (pppppppuVar35 != (uint *******)0x0) {
                                                *pppppppuVar35 =
                                                     (uint ******)s_memfd_ring_slots_001842b0._0_8_;
                                                pppppppuVar35[1] = (uint ******)uVar14;
                                                local_3f8 = (uint *******)&DAT_00000010;
                                                pppppppuStack_3e8 = (uint *******)&DAT_00000010;
                                                local_3b0 = (uint *******)
                                                            CONCAT71(local_3b0._1_7_,2);
                                                pppppppuStack_3a8 = (uint *******)0x0;
                                                pppppppuStack_3a0 = pppppppuVar38;
                                                pppppppuStack_3f0 = pppppppuVar35;
                                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                ::insert(&local_3d8,&local_2b8,&local_3f8,&local_3b0
                                                        );
                                                if ((char)local_3d8 != -1) {
                                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                  <serde_json[dc3825464c436029]::value::Value>
                                                            (&local_3d8);
                                                }
                                                (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                          ();
                                                pppppppuVar38 =
                                                     (uint *******)
                                                     (*(code *)PTR___rust_alloc_00799000)();
                                                if (pppppppuVar38 != (uint *******)0x0) {
                                                  *(undefined8 *)((longlong)pppppppuVar38 + 6) =
                                                       0x73746f6c735f6d68;
                                                  *pppppppuVar38 = (uint ******)0x6d68735f656c6966;
                                                  local_3f8 = (uint *******)&DAT_0000000e;
                                                  pppppppuStack_3e8 = (uint *******)&DAT_0000000e;
                                                  local_3b0 = (uint *******)
                                                              CONCAT71(local_3b0._1_7_,2);
                                                  pppppppuStack_3a8 = (uint *******)0x0;
                                                  pppppppuStack_3a0 = local_310;
                                                  pppppppuStack_3f0 = pppppppuVar38;
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_2b8,&local_3f8,
                                                           &local_3b0);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                            ();
                                                  pppppppuVar38 =
                                                       (uint *******)
                                                       (*(code *)PTR___rust_alloc_00799000)();
                                                  if (pppppppuVar38 != (uint *******)0x0) {
                                                    *pppppppuVar38 = (uint ******)0x735f656e696c6e69
                                                    ;
                                                    *(uint *)(pppppppuVar38 + 1) = 0x73746f6c;
                                                    local_3f8 = (uint *******)0xc;
                                                    pppppppuStack_3e8 = (uint *******)0xc;
                                                    local_3b0 = (uint *******)
                                                                CONCAT71(local_3b0._1_7_,2);
                                                    pppppppuStack_3a8 = (uint *******)0x0;
                                                    pppppppuStack_3a0 = (uint *******)local_318;
                                                    pppppppuStack_3f0 = pppppppuVar38;
                                                                                                        
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_2b8,&local_3f8,
                                                           &local_3b0);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  pppppppuStack_3a8 = local_2b8;
                                                  pppppppuStack_3a0 = pppppppuStack_2b0;
                                                  pppppppuStack_398 = local_2a8;
                                                  local_3b0 = (uint *******)
                                                              CONCAT71(local_3b0._1_7_,5);
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_330,&local_348,
                                                           &local_3b0);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                            ();
                                                  pppppppuVar38 =
                                                       (uint *******)
                                                       (*(code *)PTR___rust_alloc_00799000)();
                                                  if (pppppppuVar38 != (uint *******)0x0) {
                                                    *(uint *)pppppppuVar38 = 0x73646970;
                                                    local_2b8 = (uint *******)&DAT_00000004;
                                                    local_2a8 = (uint *******)&DAT_00000004;
                                                    local_370 = 0;
                                                    if (local_220 != (uint *******)0x0) {
                                                      local_370 = local_210;
                                                    }
                                                    local_3b0 = (uint *******)
                                                                (ulonglong)
                                                                (local_220 != (uint *******)0x0);
                                                    pppppppuStack_3a8 = (uint *******)0x0;
                                                    pppppppuStack_3a0 = local_220;
                                                    pppppppuStack_398 = local_218;
                                                    local_388 = 0;
                                                    local_380 = local_220;
                                                    local_378 = local_218;
                                                    local_390 = local_3b0;
                                                    pppppppuStack_2b0 = pppppppuVar38;
                                                                                                        
                                                  <alloc[12e961f32105355]::vec::Vec<u32>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u32,alloc[12e961f32105355]::collections::btree::set::IntoIter<u32>>>
                                                  ::from_iter(&local_3f8,&local_3b0);
                                                  <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
                                                  ::collect_seq::
                                                  <&alloc[12e961f32105355]::vec::Vec<u32>>
                                                            (&local_3b0,&local_3f8);
                                                  if ((char)local_3b0 == -1) {
                                                    local_3d8 = pppppppuStack_3a8;
                                                    (*(code *)PTR_unwrap_failed_00799028)
                                                              (&
                                                  PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610
                                                  ,&local_3d8,
                                                  &
                                                  PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc40
                                                  );
                                                  }
                                                  else {
                                                    local_3c8 = pppppppuStack_3a0;
                                                    pppppppuStack_3c0 = pppppppuStack_398;
                                                    local_3d8 = local_3b0;
                                                    pppppppuStack_3d0 = pppppppuStack_3a8;
                                                    uVar14 = 
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3b0,&local_330,&local_2b8,
                                                           &local_3d8);
                                                  if ((char)local_3b0 != -1) {
                                                    uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue
                                                             ::
                                                  <serde_json[dc3825464c436029]::value::Value>
                                                            (&local_3b0);
                                                  }
                                                  if (local_3f8 != (uint *******)0x0) {
                                                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,4)
                                                    ;
                                                  }
                                                  (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                            ();
                                                  pppppppuVar38 =
                                                       (uint *******)
                                                       (*(code *)PTR___rust_alloc_00799000)();
                                                  if (pppppppuVar38 == (uint *******)0x0) {
                                                    (*(code *)PTR_handle_error_00798ff0)();
                                                  }
                                                  else {
                                                    *pppppppuVar38 = (uint ******)0x73746e756f636361
                                                    ;
                                                    local_3f8 = (uint *******)&DAT_00000008;
                                                    pppppppuStack_3e8 = (uint *******)&DAT_00000008;
                                                    pppppppuStack_3f0 = pppppppuVar38;
                                                                                                        
                                                  <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
                                                  ::collect_seq::
                                                  <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                                                            (&local_3b0,&local_2e8);
                                                  if ((char)local_3b0 != -1) {
                                                    local_3c8 = pppppppuStack_3a0;
                                                    pppppppuStack_3c0 = pppppppuStack_398;
                                                    local_3d8 = local_3b0;
                                                    pppppppuStack_3d0 = pppppppuStack_3a8;
                                                                                                        
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3b0,&local_330,&local_3f8,
                                                           &local_3d8);
                                                  if ((char)local_3b0 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3b0);
                                                  }
                                                  *(uint ********)(local_1a0 + 0x18) = local_320;
                                                  *(uint ********)(local_1a0 + 8) = local_330;
                                                  *(uint ********)(local_1a0 + 0x10) =
                                                       pppppppuStack_328;
                                                  *local_1a0 = 5;
                                                  local_2cc = 0;
                                                  uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                                                                                      
                                                  <serde_json[dc3825464c436029]::value::Value>
                                                            (&local_188);
                                                  lVar25 = local_2e0;
                                                  for (lVar17 = (longlong)local_2d8 + 1; lVar17 != 1
                                                      ; lVar17 = lVar17 + -1) {
                                                    uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue
                                                             ::
                                                  <serde_json[dc3825464c436029]::value::Value>
                                                            (lVar25);
                                                  lVar25 = lVar25 + 0x20;
                                                  }
                                                  if (local_2e8 != (uint *******)0x0) {
                                                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,8)
                                                    ;
                                                  }
                                                  return local_1a0;
                                                  }
                                                  local_3d8 = pppppppuStack_3a8;
                                                  (*(code *)PTR_unwrap_failed_00799028)
                                                            (&
                                                  PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610
                                                  ,&local_3d8,
                                                  &
                                                  PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc40
                                                  );
                                                  }
                                                  }
                                                  goto LAB_004c7be7;
                                                  }
                                                  goto LAB_004c7b7f;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    (*(code *)PTR_handle_error_00798ff0)();
                                    goto LAB_004c7be7;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_004c7b7f:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004c7be7:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_004c4860:
  local_2c8 = pppppppuVar35;
  if (((cVar11 == '\0') &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
    *(undefined1 *)((longlong)local_360 + 0x4a4) = 1;
  }
  LOCK();
  uVar30 = *(uint *)local_3b8;
  *(uint *)local_3b8 = 0;
  UNLOCK();
  if (uVar30 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  bVar40 = CARRY8((ulonglong)local_238,(ulonglong)pppppppuVar38);
  local_238 = (uint *******)((longlong)local_238 + (longlong)pppppppuVar38);
  if (bVar40) {
    local_238 = (uint *******)0xffffffffffffffff;
  }
  bVar40 = CARRY8((ulonglong)local_240,(ulonglong)pppppppuVar39);
  local_240 = (uint *******)((longlong)local_240 + (longlong)pppppppuVar39);
  if (bVar40) {
    local_240 = (uint *******)0xffffffffffffffff;
  }
  bVar40 = CARRY8((ulonglong)local_248,(ulonglong)pppppppuVar27);
  local_248 = (uint *******)((longlong)local_248 + (longlong)pppppppuVar27);
  if (bVar40) {
    local_248 = (uint *******)0xffffffffffffffff;
  }
  bVar40 = CARRY8((ulonglong)local_250,(ulonglong)pppppppuVar26);
  local_250 = (uint *******)((longlong)local_250 + (longlong)pppppppuVar26);
  if (bVar40) {
    local_250 = (uint *******)0xffffffffffffffff;
  }
  bVar40 = CARRY8((ulonglong)local_258,(ulonglong)local_2c0);
  local_258 = (uint *******)((longlong)local_258 + (longlong)local_2c0);
  if (bVar40) {
    local_258 = (uint *******)0xffffffffffffffff;
  }
  pppppppuVar35 = (uint *******)((longlong)local_1e0 + 1);
  if (*(char *)(local_350 + 0x1c) != '\0') {
    local_1e0 = pppppppuVar35;
    local_228 = pppppppuVar35;
  }
  pppppppuVar35 = (uint *******)((longlong)local_198 + 1);
  if (local_361 != '\0') {
    local_198 = pppppppuVar35;
    local_230 = pppppppuVar35;
  }
  uVar14 = <craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_child_pids
                     (&local_3b0,local_260);
  local_200 = local_3b0;
  local_298 = pppppppuStack_3a8;
  local_318 = lVar37;
  if (pppppppuStack_3a0 != (uint *******)0x0) {
    pppppppuVar35 = (uint *******)((longlong)pppppppuStack_3a8 + (longlong)pppppppuStack_3a0 * 4);
    pppppppuVar16 = pppppppuStack_3a8;
    local_3b8 = pppppppuVar35;
LAB_004c4a47:
    uVar30 = *(uint *)pppppppuVar16;
    if (local_220 != (uint *******)0x0) {
      pppppppuVar36 = local_220;
      pppppppuVar21 = local_218;
      do {
        lVar25 = (ulonglong)*(ushort *)((longlong)pppppppuVar36 + 0x36) << 2;
        pppppppuVar24 = (uint *******)0xffffffffffffffff;
        do {
          pppppppuVar9 = (uint *******)(ulonglong)*(ushort *)((longlong)pppppppuVar36 + 0x36);
          if (lVar25 == 0) goto joined_r0x004c4aa7;
          uVar7 = *(uint *)((longlong)pppppppuVar36 + ((longlong)pppppppuVar24 + 3) * 4);
          pppppppuVar24 = (uint *******)((longlong)pppppppuVar24 + 1);
          lVar25 = lVar25 + -4;
        } while ((char)((uVar7 < uVar30) - (uVar30 < uVar7)) == '\x01');
        pppppppuVar9 = pppppppuVar24;
        if (uVar7 < uVar30 == uVar30 < uVar7) goto LAB_004c4a3a;
joined_r0x004c4aa7:
        if (pppppppuVar21 == (uint *******)0x0) goto LAB_004c4ab0;
        pppppppuVar21 = (uint *******)((longlong)pppppppuVar21 + -1);
        pppppppuVar36 = (uint *******)pppppppuVar36[(longlong)pppppppuVar9 + 7];
      } while( true );
    }
    local_390 = (uint *******)(ulonglong)uVar30;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pppppppuVar36 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
    if (pppppppuVar36 != (uint *******)0x0) {
      *pppppppuVar36 = (uint ******)0x0;
      local_218 = (uint *******)0x0;
      *(undefined2 *)((longlong)pppppppuVar36 + 0x36) = 1;
      *(uint *)(pppppppuVar36 + 1) = uVar30;
      pppppppuVar35 = (uint *******)&local_220;
      uVar14 = extraout_XMM0_Qa;
      local_220 = pppppppuVar36;
      goto LAB_004c4a31;
    }
    (*(code *)PTR_handle_alloc_error_007991d8)();
    goto LAB_004c7be7;
  }
LAB_004c4b20:
  if (local_200 != (uint *******)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,4);
  }
  local_308 = 0;
  local_2f8 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_3b8 = (uint *******)0xa;
  pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
  if (pppppppuVar35 != (uint *******)0x0) {
    pppppppuVar36 = (uint *******)((longlong)local_2c8 + (longlong)local_358);
    *pppppppuVar35 = (uint ******)0x5f746e756f636361;
    *(undefined2 *)(pppppppuVar35 + 1) = 0x6469;
    local_3f8 = (uint *******)0xa;
    pppppppuStack_3e8 = (uint *******)0xa;
    pppppppuVar16 = (uint *******)local_350[0x1f];
    pppppppuStack_3f0 = pppppppuVar35;
    local_358 = pppppppuVar35;
    if ((longlong)pppppppuVar16 < 0) {
LAB_004c6668:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004c7be7;
    }
    local_2c8 = pppppppuVar36;
    if (pppppppuVar16 == (uint *******)0x0) {
      pppppppuVar35 = (uint *******)0x1;
      local_318 = local_318 + local_1d0;
      local_310 = (uint *******)((longlong)local_310 + (longlong)local_1d8);
      local_290 = (uint *******)((longlong)local_290 + (longlong)local_1f8);
      local_288 = (uint *******)((longlong)local_288 + (longlong)local_1b8);
      local_280 = (uint *******)((longlong)local_280 + (longlong)local_1b0);
      local_278 = (uint *******)((longlong)local_278 + (longlong)local_1a8);
      local_270 = (uint *******)((longlong)local_270 + (longlong)local_1f0);
      local_1e8 = (uint *******)((longlong)local_1e8 + (longlong)local_1c8);
    }
    else {
      local_3b8 = (uint *******)local_350[0x1e];
      local_318 = local_318 + local_1d0;
      local_310 = (uint *******)((longlong)local_310 + (longlong)local_1d8);
      local_290 = (uint *******)((longlong)local_290 + (longlong)local_1f8);
      local_288 = (uint *******)((longlong)local_288 + (longlong)local_1b8);
      local_280 = (uint *******)((longlong)local_280 + (longlong)local_1b0);
      local_278 = (uint *******)((longlong)local_278 + (longlong)local_1a8);
      local_270 = (uint *******)((longlong)local_270 + (longlong)local_1f0);
      local_1e8 = (uint *******)((longlong)local_1e8 + (longlong)local_1c8);
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
      if (pppppppuVar35 == (uint *******)0x0) goto LAB_004c6668;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,pppppppuVar16);
    }
    local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,3);
    pppppppuStack_3a8 = pppppppuVar16;
    pppppppuStack_3a0 = pppppppuVar35;
    pppppppuStack_398 = pppppppuVar16;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
    if ((char)local_3d8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_3d8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_3b8 = (uint *******)&DAT_00000006;
    pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
    if (pppppppuVar35 != (uint *******)0x0) {
      *(undefined2 *)((longlong)pppppppuVar35 + 4) = 0x6469;
      *(uint *)pppppppuVar35 = 0x5f766e65;
      local_3f8 = (uint *******)&DAT_00000006;
      pppppppuStack_3e8 = (uint *******)&DAT_00000006;
      pppppppuVar16 = (uint *******)local_350[0x22];
      pppppppuStack_3f0 = pppppppuVar35;
      if ((longlong)pppppppuVar16 < 0) {
LAB_004c7867:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004c7be7;
      }
      if (pppppppuVar16 == (uint *******)0x0) {
        pppppppuVar35 = (uint *******)0x1;
      }
      else {
        local_358 = (uint *******)local_350[0x21];
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
        if (pppppppuVar35 == (uint *******)0x0) goto LAB_004c7867;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,pppppppuVar16);
      }
      local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,3);
      pppppppuStack_3a8 = pppppppuVar16;
      pppppppuStack_3a0 = pppppppuVar35;
      pppppppuStack_398 = pppppppuVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
      if ((char)local_3d8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_3d8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_3b8 = (uint *******)&DAT_00000008;
      pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
      if (pppppppuVar35 != (uint *******)0x0) {
        *pppppppuVar35 = (uint ******)0x64695f79786f7270;
        local_3f8 = (uint *******)&DAT_00000008;
        pppppppuStack_3e8 = (uint *******)&DAT_00000008;
        pppppppuVar16 = (uint *******)local_350[0x2b];
        pppppppuStack_3f0 = pppppppuVar35;
        if ((longlong)pppppppuVar16 < 0) {
LAB_004c7877:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_004c7be7;
        }
        if (pppppppuVar16 == (uint *******)0x0) {
          pppppppuVar35 = (uint *******)0x1;
        }
        else {
          local_358 = (uint *******)local_350[0x2a];
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
          if (pppppppuVar35 == (uint *******)0x0) goto LAB_004c7877;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_02,pppppppuVar16);
        }
        local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,3);
        pppppppuStack_3a8 = pppppppuVar16;
        pppppppuStack_3a0 = pppppppuVar35;
        pppppppuStack_398 = pppppppuVar16;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
        if ((char)local_3d8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_3d8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_3b8 = (uint *******)0xc;
        pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
        if (pppppppuVar35 != (uint *******)0x0) {
          *pppppppuVar35 = (uint ******)0x68735f79786f7270;
          *(uint *)(pppppppuVar35 + 1) = 0x36353261;
          local_3f8 = (uint *******)0xc;
          pppppppuStack_3e8 = (uint *******)0xc;
          pppppppuVar16 = (uint *******)local_350[0x56];
          pppppppuStack_3f0 = pppppppuVar35;
          if ((longlong)pppppppuVar16 < 0) {
LAB_004c7887:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_004c7be7;
          }
          if (pppppppuVar16 == (uint *******)0x0) {
            pppppppuVar35 = (uint *******)0x1;
          }
          else {
            local_358 = (uint *******)local_350[0x55];
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
            if (pppppppuVar35 == (uint *******)0x0) goto LAB_004c7887;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_03,pppppppuVar16);
          }
          local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,3);
          pppppppuStack_3a8 = pppppppuVar16;
          pppppppuStack_3a0 = pppppppuVar35;
          pppppppuStack_398 = pppppppuVar16;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
          if ((char)local_3d8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_3d8);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_3b8 = (uint *******)&DAT_00000010;
          pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
          uVar14 = s_proxy_calibrated_00183fb0._8_8_;
          if (pppppppuVar35 != (uint *******)0x0) {
            *pppppppuVar35 = (uint ******)s_proxy_calibrated_00183fb0._0_8_;
            pppppppuVar35[1] = (uint ******)uVar14;
            local_3f8 = (uint *******)&DAT_00000010;
            pppppppuStack_3e8 = (uint *******)&DAT_00000010;
            local_3b0._0_2_ = CONCAT11(*(undefined1 *)(local_350 + 0x1c),1);
            pppppppuStack_3f0 = pppppppuVar35;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
            if ((char)local_3d8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_3d8);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            local_3b8 = (uint *******)&DAT_00000007;
            pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
            if (pppppppuVar35 != (uint *******)0x0) {
              *(undefined4 *)((longlong)pppppppuVar35 + 3) = 0x64656c62;
              *(uint *)pppppppuVar35 = 0x62616e65;
              local_3f8 = (uint *******)&DAT_00000007;
              pppppppuStack_3e8 = (uint *******)&DAT_00000007;
              local_3b0._0_2_ = CONCAT11(*(undefined1 *)((longlong)local_350 + 0x283),1);
              pppppppuStack_3f0 = pppppppuVar35;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
              if ((char)local_3d8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_3d8);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              local_3b8 = (uint *******)&DAT_0000000f;
              pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
              if (pppppppuVar35 != (uint *******)0x0) {
                *(undefined8 *)((longlong)pppppppuVar35 + 7) = 0x79636e6572727563;
                *pppppppuVar35 = (uint ******)0x636e6f635f78616d;
                local_3f8 = (uint *******)&DAT_0000000f;
                pppppppuStack_3e8 = (uint *******)&DAT_0000000f;
                local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                pppppppuStack_3a8 = (uint *******)0x0;
                pppppppuStack_3a0 = local_1a8;
                pppppppuStack_3f0 = pppppppuVar35;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                if ((char)local_3d8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                local_3b8 = (uint *******)&DAT_0000000e;
                pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                if (pppppppuVar35 != (uint *******)0x0) {
                  *(undefined8 *)((longlong)pppppppuVar35 + 6) = 0x73746f6c735f656c;
                  *pppppppuVar35 = (uint ******)0x656c62616e6e7572;
                  local_3f8 = (uint *******)&DAT_0000000e;
                  pppppppuStack_3e8 = (uint *******)&DAT_0000000e;
                  local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                  pppppppuStack_3a8 = (uint *******)0x0;
                  pppppppuStack_3a0 = local_1b0;
                  pppppppuStack_3f0 = pppppppuVar35;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                  if ((char)local_3d8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  local_3b8 = (uint *******)&DAT_0000000e;
                  pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                  if (pppppppuVar35 != (uint *******)0x0) {
                    *(undefined8 *)((longlong)pppppppuVar35 + 6) = 0x73746f6c735f6d72;
                    *pppppppuVar35 = (uint ******)0x6d7261775f6e696d;
                    local_3f8 = (uint *******)&DAT_0000000e;
                    pppppppuStack_3e8 = (uint *******)&DAT_0000000e;
                    local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                    pppppppuStack_3a8 = (uint *******)0x0;
                    pppppppuStack_3a0 = local_1b8;
                    pppppppuStack_3f0 = pppppppuVar35;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                    if ((char)local_3d8 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    local_3b8 = (uint *******)0x12;
                    pppppppuVar35 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                    uVar14 = s_replenish_failures_00196e73._8_8_;
                    if (pppppppuVar35 != (uint *******)0x0) {
                      *pppppppuVar35 = (uint ******)s_replenish_failures_00196e73._0_8_;
                      pppppppuVar35[1] = (uint ******)uVar14;
                      *(undefined2 *)(pppppppuVar35 + 2) = 0x7365;
                      local_3f8 = (uint *******)0x12;
                      pppppppuStack_3e8 = (uint *******)0x12;
                      local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                      pppppppuStack_3a8 = (uint *******)0x0;
                      pppppppuStack_3a0 = local_140;
                      pppppppuStack_3f0 = pppppppuVar35;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_3d8,&local_308,&local_3f8);
                      if ((char)local_3d8 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      local_3b8 = (uint *******)0x14;
                      pppppppuVar16 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                      pppppppuVar35 = local_150;
                      uVar14 = s_last_replenish_error_00196e85._8_8_;
                      if (pppppppuVar16 != (uint *******)0x0) {
                        *pppppppuVar16 = (uint ******)s_last_replenish_error_00196e85._0_8_;
                        pppppppuVar16[1] = (uint ******)uVar14;
                        *(uint *)(pppppppuVar16 + 2) = 0x726f7272;
                        local_3f8 = (uint *******)0x14;
                        pppppppuStack_3e8 = (uint *******)0x14;
                        pppppppuStack_3f0 = pppppppuVar16;
                        local_358 = pppppppuVar16;
                        if (local_268 == (uint *******)0xffffffffffffffff) {
                          uVar28 = 0;
                        }
                        else {
                          if ((longlong)local_150 < 0) {
LAB_004c78f3:
                            (*(code *)PTR_handle_error_00798ff0)();
                            goto LAB_004c7be7;
                          }
                          uVar28 = 3;
                          if (local_150 == (uint *******)0x0) {
                            local_160 = (uint *******)0x1;
                            local_168 = (uint *******)0x0;
                            local_158 = (uint *******)0x0;
                          }
                          else {
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            pppppppuVar16 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                            if (pppppppuVar16 == (uint *******)0x0) goto LAB_004c78f3;
                            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_04,pppppppuVar35);
                            uVar28 = 3;
                            local_160 = pppppppuVar16;
                            local_168 = pppppppuVar35;
                            local_158 = pppppppuVar35;
                          }
                        }
                        local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,uVar28);
                        pppppppuStack_3a8 = local_158;
                        pppppppuStack_3a0 = local_160;
                        pppppppuStack_398 = local_168;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                        pppppppuVar35 = local_2c8;
                        if ((char)local_3d8 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        local_3b8 = (uint *******)0x14;
                        pppppppuVar16 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                        uVar14 = s_consecutive_failures_00196eb4._8_8_;
                        if (pppppppuVar16 != (uint *******)0x0) {
                          *pppppppuVar16 = (uint ******)s_consecutive_failures_00196eb4._0_8_;
                          pppppppuVar16[1] = (uint ******)uVar14;
                          *(uint *)(pppppppuVar16 + 2) = 0x73657275;
                          local_3f8 = (uint *******)0x14;
                          pppppppuStack_3e8 = (uint *******)0x14;
                          local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                          pppppppuStack_3a8 = (uint *******)0x0;
                          pppppppuStack_3a0 = local_148;
                          pppppppuStack_3f0 = pppppppuVar16;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                          if ((char)local_3d8 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                          }
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          local_3b8 = (uint *******)0xc;
                          pppppppuVar16 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                          if (pppppppuVar16 != (uint *******)0x0) {
                            *pppppppuVar16 = (uint ******)0x5f74697563726963;
                            *(uint *)(pppppppuVar16 + 1) = 0x6e65706f;
                            local_3f8 = (uint *******)0xc;
                            pppppppuStack_3e8 = (uint *******)0xc;
                            local_3b0._0_2_ = CONCAT11(local_361,1);
                            pppppppuStack_3f0 = pppppppuVar16;
                            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                            ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                            if ((char)local_3d8 != -1) {
                              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                              <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                            }
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            local_3b8 = (uint *******)0x14;
                            pppppppuVar16 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                            uVar14 = s_circuit_remaining_ms_00196ec8._8_8_;
                            if (pppppppuVar16 != (uint *******)0x0) {
                              *pppppppuVar16 = (uint ******)s_circuit_remaining_ms_00196ec8._0_8_;
                              pppppppuVar16[1] = (uint ******)uVar14;
                              *(uint *)(pppppppuVar16 + 2) = 0x736d5f67;
                              local_3f8 = (uint *******)0x14;
                              pppppppuStack_3e8 = (uint *******)0x14;
                              pppppppuStack_3f0 = pppppppuVar16;
                              pppppppuStack_3a0 =
                                   (uint *******)
                                   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::
                                   circuit_remaining_ms(local_260,1);
                              local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                              pppppppuStack_3a8 = (uint *******)0x0;
                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                              ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                              if ((char)local_3d8 != -1) {
                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                              }
                              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                              local_3b8 = (uint *******)0xc;
                              pppppppuVar16 = (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                              if (pppppppuVar16 != (uint *******)0x0) {
                                *pppppppuVar16 = (uint ******)0x735f657669746361;
                                *(uint *)(pppppppuVar16 + 1) = 0x73746f6c;
                                local_3f8 = (uint *******)0xc;
                                pppppppuStack_3e8 = (uint *******)0xc;
                                local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                pppppppuStack_3a8 = (uint *******)0x0;
                                pppppppuStack_3a0 = local_1f8;
                                pppppppuStack_3f0 = pppppppuVar16;
                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                                if ((char)local_3d8 != -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                                }
                                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                local_3b8 = (uint *******)0xa;
                                pppppppuVar16 = (uint *******)(*(code *)PTR___rust_alloc_00799000)()
                                ;
                                if (pppppppuVar16 != (uint *******)0x0) {
                                  *pppppppuVar16 = (uint ******)0x6f6c735f656c6469;
                                  *(undefined2 *)(pppppppuVar16 + 1) = 0x7374;
                                  local_3f8 = (uint *******)0xa;
                                  pppppppuStack_3e8 = (uint *******)0xa;
                                  local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                  pppppppuStack_3a8 = (uint *******)0x0;
                                  pppppppuStack_3a0 = local_1f0;
                                  pppppppuStack_3f0 = pppppppuVar16;
                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                  ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                                  if ((char)local_3d8 != -1) {
                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                    <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                                  }
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                  local_3b8 = (uint *******)0xb;
                                  pppppppuVar16 =
                                       (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                                  if (pppppppuVar16 != (uint *******)0x0) {
                                    *pppppppuVar16 = (uint ******)0x6c735f6c61746f74;
                                    *(undefined4 *)((longlong)pppppppuVar16 + 7) = 0x73746f6c;
                                    local_3f8 = (uint *******)0xb;
                                    pppppppuStack_3e8 = (uint *******)0xb;
                                    pppppppuStack_3a0 =
                                         (uint *******)((longlong)local_1f0 + (longlong)local_1f8);
                                    local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                    pppppppuStack_3a8 = (uint *******)0x0;
                                    pppppppuStack_3f0 = pppppppuVar16;
                                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                    ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                                    if ((char)local_3d8 != -1) {
                                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                      <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                                    }
                                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                    local_3b8 = (uint *******)&DAT_0000000d;
                                    pppppppuVar16 =
                                         (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                                    if (pppppppuVar16 != (uint *******)0x0) {
                                      *(undefined8 *)((longlong)pppppppuVar16 + 5) =
                                           0x73746f6c735f676e;
                                      *pppppppuVar16 = (uint ******)0x5f676e697661656c;
                                      local_3f8 = (uint *******)&DAT_0000000d;
                                      pppppppuStack_3e8 = (uint *******)&DAT_0000000d;
                                      local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                      pppppppuStack_3a8 = (uint *******)0x0;
                                      pppppppuStack_3a0 = local_1c0;
                                      pppppppuStack_3f0 = pppppppuVar16;
                                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                      ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                                      if ((char)local_3d8 != -1) {
                                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                        <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                                      }
                                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                      local_3b8 = (uint *******)&DAT_00000006;
                                      pppppppuVar16 =
                                           (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                                      if (pppppppuVar16 != (uint *******)0x0) {
                                        *(undefined2 *)((longlong)pppppppuVar16 + 4) = 0x6465;
                                        *(uint *)pppppppuVar16 = 0x75657571;
                                        local_3f8 = (uint *******)&DAT_00000006;
                                        pppppppuStack_3e8 = (uint *******)&DAT_00000006;
                                        local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                        pppppppuStack_3a8 = (uint *******)0x0;
                                        pppppppuStack_3a0 = local_1c8;
                                        pppppppuStack_3f0 = pppppppuVar16;
                                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                        ::insert(&local_3d8,&local_308,&local_3f8,&local_3b0);
                                        if ((char)local_3d8 != -1) {
                                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                          <serde_json[dc3825464c436029]::value::Value>(&local_3d8);
                                        }
                                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                  ();
                                        local_3b8 = (uint *******)&DAT_0000000e;
                                        pppppppuVar16 =
                                             (uint *******)(*(code *)PTR___rust_alloc_00799000)();
                                        if (pppppppuVar16 != (uint *******)0x0) {
                                          *(undefined8 *)((longlong)pppppppuVar16 + 6) =
                                               0x73746174735f676e;
                                          *pppppppuVar16 = (uint ******)0x676e69725f6d6873;
                                          local_128 = 0xe;
                                          local_118 = 0xe;
                                          local_330 = (uint *******)0x0;
                                          local_320 = (uint *******)0x0;
                                          local_358 = pppppppuVar16;
                                          local_120 = pppppppuVar16;
                                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8
                                          )();
                                          plVar15 = (longlong *)
                                                    (*(code *)PTR___rust_alloc_00799000)();
                                          if (plVar15 != (longlong *)0x0) {
                                            *plVar15 = 0x6d6172665f716572;
                                            *(undefined2 *)(plVar15 + 1) = 0x7365;
                                            local_348 = 10;
                                            local_338 = 10;
                                            local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                            pppppppuStack_3a8 = (uint *******)0x0;
                                            pppppppuStack_3a0 = pppppppuVar38;
                                            local_340 = plVar15;
                                            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                            ::insert(&local_3d8,&local_330,&local_348,&local_3b0);
                                            if ((char)local_3d8 != -1) {
                                              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                              <serde_json[dc3825464c436029]::value::Value>
                                                        (&local_3d8);
                                            }
                                            (*(code *)
                                              PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                            plVar15 = (longlong *)
                                                      (*(code *)PTR___rust_alloc_00799000)();
                                            if (plVar15 != (longlong *)0x0) {
                                              *plVar15 = 0x6172665f70736572;
                                              *(undefined4 *)((longlong)plVar15 + 7) = 0x73656d61;
                                              local_348 = 0xb;
                                              local_338 = 0xb;
                                              local_3b0 = (uint *******)CONCAT71(local_3b0._1_7_,2);
                                              pppppppuStack_3a8 = (uint *******)0x0;
                                              pppppppuStack_3a0 = pppppppuVar39;
                                              local_340 = plVar15;
                                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                              ::insert(&local_3d8,&local_330,&local_348,&local_3b0);
                                              if ((char)local_3d8 != -1) {
                                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                <serde_json[dc3825464c436029]::value::Value>
                                                          (&local_3d8);
                                              }
                                              (*(code *)
                                                PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                              plVar15 = (longlong *)
                                                        (*(code *)PTR___rust_alloc_00799000)();
                                              if (plVar15 != (longlong *)0x0) {
                                                *plVar15 = 0x657479625f716572;
                                                *(undefined1 *)(plVar15 + 1) = 0x73;
                                                local_348 = 9;
                                                local_338 = 9;
                                                local_3b0 = (uint *******)
                                                            CONCAT71(local_3b0._1_7_,2);
                                                pppppppuStack_3a8 = (uint *******)0x0;
                                                pppppppuStack_3a0 = pppppppuVar27;
                                                local_340 = plVar15;
                                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                ::insert(&local_3d8,&local_330,&local_348,&local_3b0
                                                        );
                                                if ((char)local_3d8 != -1) {
                                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                  <serde_json[dc3825464c436029]::value::Value>
                                                            (&local_3d8);
                                                }
                                                (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                          ();
                                                plVar15 = (longlong *)
                                                          (*(code *)PTR___rust_alloc_00799000)();
                                                if (plVar15 != (longlong *)0x0) {
                                                  *plVar15 = 0x7479625f70736572;
                                                  *(undefined2 *)(plVar15 + 1) = 0x7365;
                                                  local_348 = 10;
                                                  local_338 = 10;
                                                  local_3b0 = (uint *******)
                                                              CONCAT71(local_3b0._1_7_,2);
                                                  pppppppuStack_3a8 = (uint *******)0x0;
                                                  pppppppuStack_3a0 = pppppppuVar26;
                                                  local_340 = plVar15;
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_330,&local_348,
                                                           &local_3b0);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                            ();
                                                  plVar15 = (longlong *)
                                                            (*(code *)PTR___rust_alloc_00799000)();
                                                  ppppppuVar10 = _UNK_001846b8;
                                                  if (plVar15 != (longlong *)0x0) {
                                                    *plVar15 = (longlong)_DAT_001846b0;
                                                    plVar15[1] = (longlong)ppppppuVar10;
                                                    local_348 = 0x10;
                                                    local_338 = 0x10;
                                                    local_3b0 = (uint *******)
                                                                CONCAT71(local_3b0._1_7_,2);
                                                    pppppppuStack_3a8 = (uint *******)0x0;
                                                    pppppppuStack_3a0 = local_2c0;
                                                    local_340 = plVar15;
                                                                                                        
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_330,&local_348,
                                                           &local_3b0);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  pppppppuStack_3e0 = local_320;
                                                  pppppppuStack_3f0 = local_330;
                                                  pppppppuStack_3e8 = pppppppuStack_328;
                                                  local_3f8 = (uint *******)
                                                              CONCAT71(local_3f8._1_7_,5);
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3b0,&local_308,&local_128,
                                                           &local_3f8);
                                                  uVar22 = extraout_EDX;
                                                  if ((char)local_3b0 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3b0);
                                                    uVar22 = extraout_EDX_00;
                                                  }
                                                  (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                            ();
                                                  local_3b8 = (uint *******)&DAT_00000009;
                                                  plVar15 = (longlong *)
                                                            (*(code *)PTR___rust_alloc_00799000)();
                                                  if (plVar15 != (longlong *)0x0) {
                                                    *plVar15 = 0x6e776f646c6f6f63;
                                                    *(undefined1 *)(plVar15 + 1) = 0x73;
                                                    local_348 = 9;
                                                    local_338 = 9;
                                                    lVar25 = *(longlong *)(local_2f0 + 0x188);
                                                    pppppppuVar38 = (uint *******)(lVar25 + 0x10);
                                                    LOCK();
                                                    bVar40 = *(int *)(lVar25 + 0x10) == 0;
                                                    if (bVar40) {
                                                      *(int *)(lVar25 + 0x10) = 1;
                                                    }
                                                    UNLOCK();
                                                    local_340 = plVar15;
                                                    if (!bVar40) {
                                                      (*(code *)PTR_lock_contended_00798fe0)();
                                                    }
                                                    if ((*(ulonglong *)
                                                          PTR_GLOBAL_PANIC_COUNT_00798fd8 &
                                                        0x7fffffffffffffff) == 0) {
                                                      bVar12 = 0;
                                                      cVar13 = *(char *)(lVar25 + 0x14);
                                                    }
                                                    else {
                                                      bVar12 = (*(code *)
                                                  PTR_is_zero_slow_path_00798fe8)();
                                                  bVar12 = bVar12 ^ 1;
                                                  cVar13 = *(char *)(lVar25 + 0x14);
                                                  }
                                                  if (cVar13 != '\0') {
                                                    pppppppuStack_3a8._1_7_ =
                                                         (undefined7)
                                                         ((ulonglong)pppppppuStack_3a8 >> 8);
                                                    pppppppuStack_3a8 =
                                                         (uint *******)
                                                         CONCAT71(pppppppuStack_3a8._1_7_,bVar12);
                                                    local_3b0 = pppppppuVar38;
                                                    (*(code *)PTR_unwrap_failed_00799028)
                                                              (&
                                                  PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b550
                                                  ,&local_3b0,
                                                  &
                                                  PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc88
                                                  );
                                                  goto LAB_004c7be7;
                                                  }
                                                  pppppuVar4 = local_350[0x1e];
                                                  pppppuVar5 = local_350[0x1f];
                                                  local_3d8 = (uint *******)
                                                              (*(code *)PTR_now_007993f0)();
                                                  pppppppuStack_3d0 =
                                                       (uint *******)
                                                       CONCAT44(pppppppuStack_3d0._4_4_,uVar22);
                                                  (*(code *)PTR_duration_since_007993f8)(0,0);
                                                  <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>
                                                  ::account_summary(&local_3b0,lVar25 + 0x18,
                                                                    pppppuVar4,pppppuVar5);
                                                  <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                                                  ::serialize::
                                                  <serde_json[dc3825464c436029]::value::ser::Serializer>
                                                            (&local_3d8,&local_3b0);
                                                  if ((char)local_3d8 == -1) {
                                                    local_3f8 = pppppppuStack_3d0;
                                                    (*(code *)PTR_unwrap_failed_00799028)
                                                              (&
                                                  PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610
                                                  ,&local_3f8,
                                                  &
                                                  PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc70
                                                  );
                                                  goto LAB_004c7be7;
                                                  }
                                                  pppppppuStack_3e8 = local_3c8;
                                                  pppppppuStack_3e0 = pppppppuStack_3c0;
                                                  local_3f8 = local_3d8;
                                                  pppppppuStack_3f0 = pppppppuStack_3d0;
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_308,&local_348,
                                                           &local_3f8);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                  <serde_json[dc3825464c436029]::value::Value>
                                                            (&local_3b0);
                                                  uVar22 = extraout_EDX_01;
                                                  if (((bVar12 == 0) &&
                                                      ((*(ulonglong *)
                                                         PTR_GLOBAL_PANIC_COUNT_00798fd8 &
                                                       0x7fffffffffffffff) != 0)) &&
                                                     (cVar13 = (*(code *)
                                                  PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')
                                                  ) {
                                                    *(undefined1 *)(lVar25 + 0x14) = 1;
                                                  }
                                                  LOCK();
                                                  uVar30 = *(uint *)pppppppuVar38;
                                                  *(uint *)pppppppuVar38 = 0;
                                                  UNLOCK();
                                                  if (uVar30 == 2) {
                                                    (*(code *)PTR_wake_00799010)();
                                                  }
                                                  (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                            ();
                                                  local_3b8 = (uint *******)&DAT_00000007;
                                                  plVar15 = (longlong *)
                                                            (*(code *)PTR___rust_alloc_00799000)();
                                                  if (plVar15 != (longlong *)0x0) {
                                                    *(undefined4 *)((longlong)plVar15 + 3) =
                                                         0x676e6972;
                                                    *(undefined4 *)plVar15 = 0x726f6373;
                                                    local_348 = 7;
                                                    local_338 = 7;
                                                    local_340 = plVar15;
                                                    local_3d8 = (uint *******)
                                                                (*(code *)PTR_now_007993f0)();
                                                    pppppppuStack_3d0 =
                                                         (uint *******)
                                                         CONCAT44(pppppppuStack_3d0._4_4_,uVar22);
                                                    (*(code *)PTR_duration_since_007993f8)(0,0);
                                                    if ((char)local_3b0 == '\0') {
                                                      lVar25 = ((ulonglong)pppppppuStack_3a0 &
                                                               0xffffffff) / 1000000 +
                                                               (longlong)pppppppuStack_3a8 * 1000;
                                                    }
                                                    else {
                                                      lVar25 = 0;
                                                    }
                                                                                                        
                                                  <craggemini_core[66f3c71560d70857]::pool::AccountPool>
                                                  ::scoring_summary(&local_3b0,local_260,lVar25);
                                                  <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                                                  ::serialize::
                                                  <serde_json[dc3825464c436029]::value::ser::Serializer>
                                                            (&local_3d8,&local_3b0);
                                                  if ((char)local_3d8 == -1) {
                                                    local_3f8 = pppppppuStack_3d0;
                                                    (*(code *)PTR_unwrap_failed_00799028)
                                                              (&
                                                  PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610
                                                  ,&local_3f8,
                                                  &
                                                  PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc70
                                                  );
                                                  goto LAB_004c7be7;
                                                  }
                                                  pppppppuStack_3e8 = local_3c8;
                                                  pppppppuStack_3e0 = pppppppuStack_3c0;
                                                  local_3f8 = local_3d8;
                                                  pppppppuStack_3f0 = pppppppuStack_3d0;
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_308,&local_348,
                                                           &local_3f8);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                  <serde_json[dc3825464c436029]::value::Value>
                                                            (&local_3b0);
                                                  (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                            ();
                                                  local_3b8 = (uint *******)0xa;
                                                  plVar15 = (longlong *)
                                                            (*(code *)PTR___rust_alloc_00799000)();
                                                  if (plVar15 != (longlong *)0x0) {
                                                    *plVar15 = 0x69746e6564657263;
                                                    *(undefined2 *)(plVar15 + 1) = 0x6c61;
                                                    local_348 = 10;
                                                    local_338 = 10;
                                                    local_340 = plVar15;
                                                    craggemini_core[66f3c71560d70857]::credential::
                                                    credential_health(&local_3b0,local_350[0x24],
                                                                      local_350[0x25]);
                                                                                                        
                                                  <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                                                  ::serialize::
                                                  <serde_json[dc3825464c436029]::value::ser::Serializer>
                                                            (&local_3d8,&local_3b0);
                                                  if ((char)local_3d8 == -1) {
                                                    local_3f8 = pppppppuStack_3d0;
                                                    (*(code *)PTR_unwrap_failed_00799028)
                                                              (&
                                                  PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610
                                                  ,&local_3f8,
                                                  &
                                                  PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bc70
                                                  );
                                                  goto LAB_004c7be7;
                                                  }
                                                  pppppppuStack_3e8 = local_3c8;
                                                  pppppppuStack_3e0 = pppppppuStack_3c0;
                                                  local_3f8 = local_3d8;
                                                  pppppppuStack_3f0 = pppppppuStack_3d0;
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_308,&local_348,
                                                           &local_3f8);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                  <serde_json[dc3825464c436029]::value::Value>
                                                            (&local_3b0);
                                                  (*(code *)
                                                  PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                            ();
                                                  local_3b8 = (uint *******)0x13;
                                                  pppppppuVar38 =
                                                       (uint *******)
                                                       (*(code *)PTR___rust_alloc_00799000)();
                                                  uVar14 = s_proxied_connections_001970ca._8_8_;
                                                  if (pppppppuVar38 != (uint *******)0x0) {
                                                    *pppppppuVar38 =
                                                         (uint ******)
                                                         s_proxied_connections_001970ca._0_8_;
                                                    pppppppuVar38[1] = (uint ******)uVar14;
                                                    *(undefined4 *)((longlong)pppppppuVar38 + 0xf) =
                                                         0x736e6f69;
                                                    local_3f8 = (uint *******)0x13;
                                                    pppppppuStack_3e8 = (uint *******)0x13;
                                                    if (local_350[100] == (uint *****)0x0) {
                                                      pppppppuStack_3a0 = (uint *******)0x0;
                                                    }
                                                    else {
                                                      pppppppuStack_3a0 =
                                                           (uint *******)local_350[100][0x1e][2];
                                                    }
                                                    local_3b0 = (uint *******)
                                                                CONCAT71(local_3b0._1_7_,2);
                                                    pppppppuStack_3a8 = (uint *******)0x0;
                                                    pppppppuStack_3f0 = pppppppuVar38;
                                                                                                        
                                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                                  ::insert(&local_3d8,&local_308,&local_3f8,
                                                           &local_3b0);
                                                  if ((char)local_3d8 != -1) {
                                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                    <serde_json[dc3825464c436029]::value::Value>
                                                              (&local_3d8);
                                                  }
                                                  pppppppuVar39 = local_2d8;
                                                  uStack_170 = local_2f8;
                                                  uStack_180 = local_308;
                                                  uStack_178 = uStack_300;
                                                  local_188 = 5;
                                                  if (local_2d8 == local_2e8) {
                                                    (*(code *)PTR_grow_one_00799310)();
                                                  }
                                                  pppppppuVar38 = local_310;
                                                  lVar25 = local_318;
                                                  lVar17 = (longlong)pppppppuVar39 * 0x20;
                                                  puVar1 = (undefined8 *)(local_2e0 + 0x10 + lVar17)
                                                  ;
                                                  *puVar1 = uStack_178;
                                                  puVar1[1] = uStack_170;
                                                  *(undefined8 *)(local_2e0 + lVar17) =
                                                       CONCAT71(uStack_187,local_188);
                                                  ((undefined8 *)(local_2e0 + lVar17))[1] =
                                                       uStack_180;
                                                  local_2d8 = (uint *******)
                                                              ((longlong)pppppppuVar39 + 1);
                                                  if ((longlong)local_268 - 1U < 0xfffffffffffffffe)
                                                  {
                                                    (*(code *)PTR___rust_dealloc_00798fc8)(lVar17,1)
                                                    ;
                                                  }
                                                  LOCK();
                                                  *local_360 = *local_360 + -1;
                                                  UNLOCK();
                                                  if (*local_360 == 0) {
                                                                                                        
                                                  <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
                                                  ::drop_slow(&local_190);
                                                  }
                                                  local_1d0 = lVar25;
                                                  local_1d8 = pppppppuVar38;
LAB_004c6330:
                                                  LOCK();
                                                  *local_350 = (uint *****)
                                                               ((longlong)*local_350 + -1);
                                                  UNLOCK();
                                                  if (*local_350 == (uint *****)0x0) {
                                                                                                        
                                                  <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
                                                  ::drop_slow(&local_350);
                                                  }
                                                  if (local_130 == local_138) goto LAB_004c7895;
                                                  goto LAB_004c3ffe;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  goto LAB_004c7ba2;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          (*(code *)PTR_handle_error_00798ff0)();
                                          goto LAB_004c7be7;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_004c7ba2:
  (*(code *)PTR_handle_error_00798ff0)();
  goto LAB_004c7be7;
LAB_004c4ab0:
  local_3b0 = (uint *******)&local_220;
  pppppppuStack_3a0 = (uint *******)0x0;
  pppppppuStack_3d0 = (uint *******)0x0;
  local_3d8 = pppppppuVar36;
  local_3c8 = pppppppuVar9;
  pppppppuStack_3a8 = pppppppuVar36;
  pppppppuStack_398 = pppppppuVar9;
  local_390 = (uint *******)(ulonglong)uVar30;
  uVar14 = <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
           ::insert_recursing::
           <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::_closure_0_>
                     (&local_3f8,&local_3d8,uVar30,&local_3b0,(longlong)&local_390 + 4);
  pppppppuVar35 = local_3b0;
LAB_004c4a31:
  pppppppuVar35[2] = (uint ******)((longlong)pppppppuVar35[2] + 1);
  pppppppuVar35 = local_3b8;
LAB_004c4a3a:
  pppppppuVar16 = (uint *******)((longlong)pppppppuVar16 + 4);
  if (pppppppuVar16 == pppppppuVar35) goto LAB_004c4b20;
  goto LAB_004c4a47;
LAB_004c7895:
  bVar41 = local_288 == (uint *******)0x0;
  bVar40 = local_1e0 != (uint *******)0x0;
  pppppppuVar39 = local_290;
  pppppppuVar27 = local_1e8;
  local_318 = lVar25;
  local_310 = pppppppuVar38;
  local_2c8 = pppppppuVar35;
  goto LAB_004c65e2;
}


