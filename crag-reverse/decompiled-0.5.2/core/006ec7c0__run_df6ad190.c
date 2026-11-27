// 006ec7c0 run

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Context>::run */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Context>::run
          (longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  undefined *puVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 extraout_EDX;
  uint uVar21;
  undefined4 uVar22;
  uint extraout_EDX_00;
  ulonglong extraout_RDX;
  ulonglong uVar23;
  ulonglong extraout_RDX_00;
  ulonglong extraout_RDX_01;
  ulonglong extraout_RDX_02;
  undefined8 *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  double extraout_XMM0_Qa;
  undefined8 uVar30;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  double dVar31;
  double dVar32;
  double extraout_XMM0_Qa_02;
  double extraout_XMM0_Qa_03;
  double extraout_XMM0_Qa_04;
  double extraout_XMM0_Qa_05;
  double extraout_XMM0_Qa_06;
  double extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  double extraout_XMM0_Qa_10;
  double extraout_XMM0_Qa_11;
  double extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  byte local_88;
  longlong *local_80;
  uint local_78;
  undefined4 local_74;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  uint local_44;
  longlong **local_40;
  undefined8 **local_38;
  
  *(byte *)(param_2 + 0xe) = *(byte *)(*(longlong *)(*param_1 + 0x10) + 0x284) ^ 1;
  lVar16 = (*(code *)PTR_now_00799250)();
  param_2[9] = lVar16;
  *(undefined4 *)(param_2 + 10) = param_3;
  lVar16 = (*(code *)PTR_now_00799250)();
  param_2[0xb] = lVar16;
  *(undefined4 *)(param_2 + 0xc) = param_3;
  param_2[4] = 0;
  if (*(char *)((longlong)param_2 + 0x72) == '\0') {
    local_38 = &local_70;
    local_40 = &local_80;
    dVar31 = extraout_XMM0_Qa;
LAB_006eccd0:
    do {
      uVar20 = (int)param_2[0xd] + 1;
      *(uint *)(param_2 + 0xd) = uVar20;
      lVar16 = *param_1;
      uVar21 = *(uint *)(*(longlong *)(lVar16 + 0x10) + 0x280);
      if (uVar21 == 0) {
        (*(code *)PTR_panic_const_rem_by_zero_007997d8)();
        goto LAB_006edb46;
      }
      uVar25 = (ulonglong)uVar20 % (ulonglong)uVar21;
      if ((int)uVar25 == 0) {
        if ((int)param_2[10] != -1) {
          local_70 = (undefined8 *)param_2[9];
          local_68 = (undefined8 *)CONCAT44(local_68._4_4_,(int)param_2[10]);
          uVar17 = (*(code *)PTR_elapsed_00799270)();
          auVar37._8_8_ = 0;
          auVar37._0_8_ = uVar17;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar25 & 0xffffffff;
          auVar9 = auVar37 * ZEXT816(1000000000) + auVar9;
          param_2[6] = param_2[6] + (-(ulonglong)(auVar9._8_8_ != 0) | auVar9._0_8_);
        }
        lVar16 = param_2[4];
        if (lVar16 != 0) {
          (*(code *)PTR_now_00799250)();
          uVar25 = param_2[0xb];
          uVar17 = (*(code *)PTR_sub_00799b10)((int)param_2[0xc],uVar25);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar17;
          dVar31 = (double)(*(code *)PTR___floattidf_0079a868)
                                     (uVar25 & 0xffffffff,
                                      SUB168(auVar5 * ZEXT816(1000000000),8) +
                                      (ulonglong)
                                      CARRY8(uVar25 & 0xffffffff,
                                             SUB168(auVar5 * ZEXT816(1000000000),0)));
          auVar34._8_4_ = (int)((ulonglong)lVar16 >> 0x20);
          auVar34._0_8_ = lVar16;
          auVar34._12_4_ = DAT_00182b10._4_4_;
          dVar33 = (double)CONCAT44((undefined4)DAT_00182b10,(int)lVar16) - _DAT_00182560;
          dVar36 = auVar34._8_8_ - _UNK_00182568;
          dVar32 = (double)(*(code *)PTR_pow_0079a870)(DAT_001853c8);
          param_2[5] = (longlong)
                       ((_s__00185250 - (_s__00185250 - dVar32)) * (double)param_2[5] +
                       (dVar31 / (dVar36 + dVar33)) * (_s__00185250 - dVar32));
        }
        param_2 = (longlong *)park_internal(param_1,param_2,0);
        <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>::maintenance
                  (param_2,*param_1 + 0x10);
        uVar22 = extraout_EDX;
        lVar16 = (*(code *)PTR_now_00799250)();
        param_2[9] = lVar16;
        *(undefined4 *)(param_2 + 10) = uVar22;
        lVar16 = (*(code *)PTR_now_00799250)();
        param_2[0xb] = lVar16;
        *(undefined4 *)(param_2 + 0xc) = uVar22;
        param_2[4] = 0;
        lVar16 = *param_1;
        dVar31 = extraout_XMM0_Qa_02;
      }
      uVar21 = *(uint *)((longlong)param_2 + 0x6c);
      if (uVar21 == 0) {
        (*(code *)PTR_panic_const_rem_by_zero_007997d8)();
        goto LAB_006edb46;
      }
      if (*(uint *)(param_2 + 0xd) % uVar21 == 0) {
        lVar16 = *(longlong *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x228) == 1) {
          uVar20 = *(uint *)(lVar16 + 0x22c);
        }
        else {
          dVar32 = 0.0;
          if (0.0 <= DAT_001853d0 / (double)param_2[5]) {
            dVar32 = DAT_001853d0 / (double)param_2[5];
          }
          dVar31 = _s__00185148;
          if (dVar32 <= _s__00185148) {
            dVar31 = dVar32;
          }
          uVar20 = (uint)(longlong)dVar31;
          if (uVar20 < 3) {
            uVar20 = 2;
          }
          if (0x7e < uVar20) {
            uVar20 = 0x7f;
          }
        }
        uVar15 = uVar20 - uVar21;
        if (uVar20 < uVar21) {
          uVar15 = uVar21 - uVar20;
        }
        if (2 < uVar15) {
          *(uint *)((longlong)param_2 + 0x6c) = uVar20;
        }
        if (*(longlong *)(lVar16 + 0xa0) != 0) {
          LOCK();
          bVar29 = *(int *)(lVar16 + 0x80) == 0;
          if (bVar29) {
            *(int *)(lVar16 + 0x80) = 1;
          }
          UNLOCK();
          if (!bVar29) {
            dVar31 = (double)(*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            bVar13 = 0;
          }
          else {
            bVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            bVar13 = bVar13 ^ 1;
            dVar31 = extraout_XMM0_Qa_10;
          }
          lVar28 = *(longlong *)(lVar16 + 0xa0);
          *(ulonglong *)(lVar16 + 0xa0) = lVar28 - (ulonglong)(lVar28 != 0);
          if ((lVar28 == 0) ||
             (puVar24 = *(undefined8 **)(lVar16 + 0x88), puVar24 == (undefined8 *)0x0)) {
            puVar24 = (undefined8 *)0x0;
          }
          else {
            lVar28 = puVar24[1];
            *(longlong *)(lVar16 + 0x88) = lVar28;
            if (lVar28 == 0) {
              *(undefined8 *)(lVar16 + 0x90) = 0;
              puVar24[1] = 0;
            }
            else {
              puVar24[1] = 0;
            }
          }
          if (((bVar13 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), dVar31 = extraout_XMM0_Qa_11,
             cVar14 == '\0')) {
            *(undefined1 *)(lVar16 + 0x84) = 1;
          }
          LOCK();
          iVar2 = *(int *)(lVar16 + 0x80);
          *(int *)(lVar16 + 0x80) = 0;
          UNLOCK();
          if (iVar2 == 2) {
            dVar31 = (double)(*(code *)PTR_wake_00799010)();
          }
          if (puVar24 != (undefined8 *)0x0) goto LAB_006ed2b0;
        }
        puVar24 = (undefined8 *)*param_2;
        *param_2 = 0;
        if (puVar24 != (undefined8 *)0x0) goto LAB_006ed2b0;
        uVar25 = param_2[3];
        uVar17 = *(ulonglong *)(uVar25 + 0x18);
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)(uVar17 >> 0x20));
        if (*(int *)(uVar25 + 0x20) != (int)uVar17) {
          do {
            uVar20 = (uint)uVar17 + 1;
            local_70 = (undefined8 *)CONCAT44(local_70._4_4_,uVar20);
            uVar21 = (uint)(uVar17 >> 0x20);
            if (uVar21 == (uint)uVar17) {
              LOCK();
              uVar18 = *(ulonglong *)(uVar25 + 0x18);
              bVar29 = uVar17 == uVar18;
              if (bVar29) {
                *(ulonglong *)(uVar25 + 0x18) = (ulonglong)uVar20 * 0x100000001;
                uVar18 = uVar17;
              }
              else {
              }
              UNLOCK();
            }
            else {
              if (uVar20 == uVar21) goto LAB_006eda18;
              LOCK();
              uVar18 = *(ulonglong *)(uVar25 + 0x18);
              bVar29 = uVar17 == uVar18;
              if (bVar29) {
                *(ulonglong *)(uVar25 + 0x18) = uVar17 & 0xffffffff00000000 | (ulonglong)uVar20;
                uVar18 = uVar17;
              }
              else {
              }
              UNLOCK();
            }
            if (bVar29) goto LAB_006ed1aa;
            local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)(uVar18 >> 0x20));
            uVar17 = uVar18;
          } while (*(int *)(uVar25 + 0x20) != (int)uVar18);
        }
      }
      else {
        puVar24 = (undefined8 *)*param_2;
        *param_2 = 0;
        if (puVar24 != (undefined8 *)0x0) goto LAB_006ed2b0;
        uVar25 = param_2[3];
        uVar17 = *(ulonglong *)(uVar25 + 0x18);
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)(uVar17 >> 0x20));
        if (*(int *)(uVar25 + 0x20) != (int)uVar17) {
          do {
            uVar20 = (uint)uVar17 + 1;
            local_70 = (undefined8 *)CONCAT44(local_70._4_4_,uVar20);
            uVar21 = (uint)(uVar17 >> 0x20);
            if (uVar21 == (uint)uVar17) {
              LOCK();
              uVar18 = *(ulonglong *)(uVar25 + 0x18);
              bVar29 = uVar17 == uVar18;
              if (bVar29) {
                *(ulonglong *)(uVar25 + 0x18) = (ulonglong)uVar20 * 0x100000001;
                uVar18 = uVar17;
              }
              else {
              }
              UNLOCK();
            }
            else {
              if (uVar20 == uVar21) goto LAB_006eda18;
              LOCK();
              uVar18 = *(ulonglong *)(uVar25 + 0x18);
              bVar29 = uVar17 == uVar18;
              if (bVar29) {
                *(ulonglong *)(uVar25 + 0x18) = uVar17 & 0xffffffff00000000 | (ulonglong)uVar20;
                uVar18 = uVar17;
              }
              else {
              }
              UNLOCK();
            }
            if (bVar29) goto LAB_006ed1aa;
            local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)(uVar18 >> 0x20));
            uVar17 = uVar18;
          } while (*(int *)(uVar25 + 0x20) != (int)uVar18);
        }
        if (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0xa0) == 0) goto LAB_006ed2db;
        uVar30 = *(undefined8 *)(param_2[3] + 0x18);
        iVar2 = *(int *)(param_2[3] + 0x20);
        uVar25 = *(ulonglong *)(*(longlong *)(lVar16 + 0x10) + 0xa0);
        lVar16 = *(longlong *)(lVar16 + 0x10);
        uVar17 = *(ulonglong *)(lVar16 + 0x1c8);
        if (uVar17 == 0) {
          (*(code *)PTR_panic_const_div_by_zero_00799f50)();
          goto LAB_006edb46;
        }
        LOCK();
        bVar29 = *(int *)(lVar16 + 0x80) == 0;
        if (bVar29) {
          *(int *)(lVar16 + 0x80) = 1;
        }
        UNLOCK();
        if (!bVar29) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          local_78 = 0;
        }
        else {
          local_78 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          local_78 = local_78 ^ 1;
        }
        if ((uVar25 | uVar17) >> 0x20 == 0) {
          uVar25 = (uVar25 & 0xffffffff) / (uVar17 & 0xffffffff);
        }
        else {
          uVar25 = uVar25 / uVar17;
        }
        uVar18 = 0x100 - (ulonglong)(uint)(iVar2 - (int)((ulonglong)uVar30 >> 0x20));
        uVar17 = uVar25 + 1;
        if (uVar18 < uVar25 + 1) {
          uVar17 = uVar18;
        }
        uVar17 = uVar17 + (uVar17 == 0);
        uVar25 = *(ulonglong *)(lVar16 + 0xa0);
        if (uVar25 <= uVar17) {
          uVar17 = uVar25;
        }
        plVar4 = (longlong *)(lVar16 + 0x88);
        if (0x7f < uVar17) {
          uVar17 = 0x80;
        }
        *(ulonglong *)(lVar16 + 0xa0) = uVar25 - uVar17;
        cVar14 = (char)local_78;
        if (uVar25 == 0) {
          local_70 = (undefined8 *)0x0;
          lVar28 = 0;
        }
        else {
          local_70 = (undefined8 *)*plVar4;
          if (local_70 != (undefined8 *)0x0) {
            lVar28 = local_70[1];
            *plVar4 = lVar28;
            if (lVar28 == 0) {
              *(undefined8 *)(lVar16 + 0x90) = 0;
            }
            local_70[1] = 0;
          }
          lVar28 = uVar17 - 1;
        }
        puVar24 = local_70;
        dVar31 = (double)<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
                         ::push_back::
                         <tokio[d7d91d38da47d894]::runtime::scheduler::inject::pop::Pop<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
                                   (param_2 + 3,plVar4,lVar28);
        uVar25 = extraout_RDX;
        if (((cVar14 == '\0') &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), dVar31 = extraout_XMM0_Qa_12,
           cVar14 == '\0')) {
          *(undefined1 *)(lVar16 + 0x84) = 1;
        }
        LOCK();
        iVar2 = *(int *)(lVar16 + 0x80);
        *(int *)(lVar16 + 0x80) = 0;
        UNLOCK();
        if (iVar2 == 2) {
          dVar31 = (double)(*(code *)PTR_wake_00799010)();
        }
        if (puVar24 != (undefined8 *)0x0) goto LAB_006ed2b0;
      }
LAB_006ed2db:
      uVar21 = (uint)uVar25;
      if ((int)param_2[10] != -1) {
        local_70 = (undefined8 *)param_2[9];
        local_68 = (undefined8 *)CONCAT44(local_68._4_4_,(int)param_2[10]);
        uVar17 = (*(code *)PTR_elapsed_00799270)();
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar17;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar25 & 0xffffffff;
        auVar10 = auVar6 * ZEXT816(1000000000) + auVar10;
        uVar21 = -auVar10._8_4_;
        param_2[6] = param_2[6] + (-(ulonglong)(auVar10._8_8_ != 0) | auVar10._0_8_);
        dVar31 = extraout_XMM0_Qa_04;
      }
      lVar16 = param_2[4];
      if (lVar16 != 0) {
        (*(code *)PTR_now_00799250)();
        uVar25 = param_2[0xb];
        uVar17 = (*(code *)PTR_sub_00799b10)((int)param_2[0xc]);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        uVar21 = SUB164(auVar7 * ZEXT816(1000000000),8) +
                 (uint)CARRY8(uVar25 & 0xffffffff,SUB168(auVar7 * ZEXT816(1000000000),0));
        dVar31 = (double)(*(code *)PTR___floattidf_0079a868)();
        auVar35._8_4_ = (int)((ulonglong)lVar16 >> 0x20);
        auVar35._0_8_ = lVar16;
        auVar35._12_4_ = DAT_00182b10._4_4_;
        dVar33 = (double)CONCAT44((undefined4)DAT_00182b10,(int)lVar16) - _DAT_00182560;
        dVar36 = auVar35._8_8_ - _UNK_00182568;
        dVar32 = (double)(*(code *)PTR_pow_0079a870)(DAT_001853c8);
        dVar31 = (_s__00185250 - (_s__00185250 - dVar32)) * (double)param_2[5] +
                 (dVar31 / (dVar36 + dVar33)) * (_s__00185250 - dVar32);
        param_2[5] = (longlong)dVar31;
      }
      lVar16 = *param_1;
      if (*(char *)((longlong)param_2 + 0x71) != '\0') {
LAB_006ed407:
        lVar28 = *(longlong *)(lVar16 + 0x10);
        uVar25 = *(ulonglong *)(lVar28 + 0x1c8);
        uVar20 = *(uint *)((longlong)param_2 + 0x14);
        uVar15 = *(uint *)(param_2 + 2) << 0x11 ^ *(uint *)(param_2 + 2);
        uVar21 = uVar20 >> 0x10 ^ uVar20 ^ uVar15;
        uVar15 = uVar15 >> 7 ^ uVar21;
        *(uint *)(param_2 + 2) = uVar20;
        *(uint *)((longlong)param_2 + 0x14) = uVar15;
        if (uVar25 != 0) {
          uVar18 = (uVar25 & 0xffffffff) * (ulonglong)(uVar15 + uVar20) >> 0x20;
          uVar17 = uVar25;
          do {
            if ((uVar18 | uVar25) >> 0x20 == 0) {
              uVar23 = (uVar18 & 0xffffffff) % (uVar25 & 0xffffffff);
              if (uVar23 != *(ulonglong *)(lVar16 + 0x18)) goto LAB_006ed48d;
            }
            else {
              uVar23 = uVar18 % uVar25;
              if (uVar23 != *(ulonglong *)(lVar16 + 0x18)) {
LAB_006ed48d:
                if (*(ulonglong *)(*(longlong *)(lVar16 + 0x10) + 0x1c8) <= uVar23) {
                  (*(code *)PTR_panic_bounds_check_00799520)
                            (dVar31,&
                                    PTR_anon_dbc6346551702d8f49f87a432b9dece2_7_llvm_7788165550271277997_00794150
                            );
                  goto LAB_006edb46;
                }
                auVar37 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Steal<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
                          ::steal_into(uVar23 * 0x10 +
                                       *(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x1c0),
                                       param_2 + 3,param_2 + 4);
                uVar23 = auVar37._8_8_;
                puVar24 = auVar37._0_8_;
                uVar21 = auVar37._8_4_;
                dVar31 = extraout_XMM0_Qa_05;
                if (puVar24 != (undefined8 *)0x0) goto LAB_006ed5af;
              }
            }
            uVar21 = (uint)uVar23;
            uVar18 = uVar18 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
          lVar28 = *(longlong *)(lVar16 + 0x10);
        }
        if (*(longlong *)(lVar28 + 0xa0) == 0) goto LAB_006ed5f5;
        LOCK();
        bVar29 = *(int *)(lVar28 + 0x80) == 0;
        if (bVar29) {
          *(int *)(lVar28 + 0x80) = 1;
        }
        UNLOCK();
        if (!bVar29) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          bVar13 = 0;
        }
        else {
          bVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          bVar13 = bVar13 ^ 1;
        }
        lVar16 = *(longlong *)(lVar28 + 0xa0);
        uVar25 = (ulonglong)(lVar16 != 0);
        *(ulonglong *)(lVar28 + 0xa0) = lVar16 - uVar25;
        if ((lVar16 == 0) ||
           (puVar24 = *(undefined8 **)(lVar28 + 0x88), puVar24 == (undefined8 *)0x0)) {
          puVar24 = (undefined8 *)0x0;
        }
        else {
          lVar16 = puVar24[1];
          *(longlong *)(lVar28 + 0x88) = lVar16;
          if (lVar16 == 0) {
            *(undefined8 *)(lVar28 + 0x90) = 0;
            puVar24[1] = 0;
          }
          else {
            puVar24[1] = 0;
          }
        }
        if (((bVar13 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar14 == '\0')) {
          *(undefined1 *)(lVar28 + 0x84) = 1;
        }
        uVar21 = (uint)uVar25;
        LOCK();
        iVar2 = *(int *)(lVar28 + 0x80);
        *(int *)(lVar28 + 0x80) = 0;
        UNLOCK();
        if (iVar2 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        if (puVar24 == (undefined8 *)0x0) goto LAB_006ed5f5;
LAB_006ed5af:
        puVar11 = PTR_now_00799250;
        local_70 = puVar24;
        lVar16 = (*(code *)PTR_now_00799250)();
        param_2[9] = lVar16;
        *(uint *)(param_2 + 10) = uVar21;
        lVar16 = (*(code *)puVar11)();
        param_2[0xb] = lVar16;
        *(uint *)(param_2 + 0xc) = uVar21;
        param_2[4] = 0;
        param_2 = (longlong *)run_task(param_1,puVar24,param_2);
        dVar31 = extraout_XMM0_Qa_06;
        if (param_2 == (longlong *)0x0) {
          return;
        }
        goto LAB_006ed2c9;
      }
      lVar28 = *(longlong *)(lVar16 + 0x10);
      if ((ulonglong)(((uint)*(undefined8 *)(lVar28 + 0x100) & 0xffff) * 2) <
          *(ulonglong *)(lVar28 + 0x108)) {
        LOCK();
        *(longlong *)(lVar28 + 0x100) = *(longlong *)(lVar28 + 0x100) + 1;
        UNLOCK();
        *(undefined1 *)((longlong)param_2 + 0x71) = 1;
        goto LAB_006ed407;
      }
      *(undefined1 *)((longlong)param_2 + 0x71) = 0;
LAB_006ed5f5:
      if (0x7ffffffffffffffe < (ulonglong)param_1[3]) {
        (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
        goto LAB_006edb46;
      }
      if (param_1[6] == 0) {
        lVar16 = *param_1;
        if (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x230) != 0) {
          lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x238);
          uVar21 = (int)*(undefined8 *)(lVar16 + 0x10) - 1U & 0xfffffff0;
          (**(code **)(lVar16 + 0x28))();
          lVar16 = *param_1;
        }
        if (((*param_2 == 0) &&
            (*(int *)(param_2[3] + 0x20) == (int)*(undefined8 *)(param_2[3] + 0x18))) &&
           (*(char *)((longlong)param_2 + 0x73) == '\0')) {
          cVar14 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
                   transition_worker_to_parked
                             (*(longlong *)(lVar16 + 0x10) + 0x100,
                              *(longlong *)(lVar16 + 0x10) + 0x80,*(undefined8 *)(lVar16 + 0x18),
                              *(undefined1 *)((longlong)param_2 + 0x71));
          *(undefined1 *)((longlong)param_2 + 0x71) = 0;
          uVar25 = extraout_RDX_00;
          if (cVar14 != '\0') {
            lVar16 = *(longlong *)(lVar16 + 0x10);
            if (*(longlong *)(lVar16 + 0x1c8) != 0) {
              uVar25 = 0;
              do {
                lVar28 = *(longlong *)(*(longlong *)(lVar16 + 0x1c0) + uVar25);
                if (*(int *)(lVar28 + 0x20) != (int)*(undefined8 *)(lVar28 + 0x18)) {
                  auVar37 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>
                            ::worker_to_notify(lVar16 + 0x100,lVar16 + 0x80);
                  uVar30 = extraout_XMM0_Qa_09;
                  goto LAB_006ed7c0;
                }
                uVar25 = uVar25 + 0x10;
              } while (*(longlong *)(lVar16 + 0x1c8) * 0x10 != uVar25);
            }
            if (*(longlong *)(lVar16 + 0xa0) != 0) {
              auVar37 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
                        worker_to_notify(lVar16 + 0x100,lVar16 + 0x80);
              uVar30 = extraout_XMM0_Qa_08;
LAB_006ed7c0:
              uVar25 = auVar37._8_8_;
              if (auVar37._0_8_ == 1) {
                if (*(ulonglong *)(lVar16 + 0x1c8) <= uVar25) {
                  (*(code *)PTR_panic_bounds_check_00799520)
                            (uVar30,&
                                    anon_dbc6346551702d8f49f87a432b9dece2_32_llvm_7788165550271277997
                            );
                  goto LAB_006edb46;
                }
                <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Unparker>::unpark
                          (*(longlong *)(lVar16 + 0x1c0) + uVar25 * 0x10 + 8,lVar16 + 0x338);
                uVar25 = extraout_RDX_01;
              }
            }
          }
          do {
            uVar21 = (uint)uVar25;
            if ((*(char *)((longlong)param_2 + 0x72) != '\0') ||
               (*(char *)((longlong)param_2 + 0x73) != '\0')) goto LAB_006ed666;
            lVar16 = param_2[7];
            param_2[7] = lVar16 + 1;
            lVar19 = param_2[8] + 1;
            param_2[8] = lVar19;
            lVar28 = *(longlong *)(*param_1 + 0x10);
            uVar25 = *(ulonglong *)(*param_1 + 0x18);
            if (*(ulonglong *)(lVar28 + 0x1d8) <= uVar25) {
              (*(code *)PTR_panic_bounds_check_00799520)
                        (lVar19,&
                                PTR_anon_dbc6346551702d8f49f87a432b9dece2_7_llvm_7788165550271277997_007942a0
                        );
              goto LAB_006edb46;
            }
            lVar28 = *(longlong *)(lVar28 + 0x1d0);
            lVar27 = uVar25 * 0x80;
            *(longlong *)(lVar28 + 0x10 + lVar27) = param_2[6];
            *(longlong *)(lVar28 + 0x20 + lVar27) = lVar16 + 1;
            *(longlong *)(lVar28 + 0x28 + lVar27) = lVar19;
            param_2 = (longlong *)park_internal(param_1,param_2,0xffffffff);
            param_2[8] = param_2[8] + 1;
            <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>::maintenance
                      (param_2,*param_1 + 0x10);
            lVar16 = *param_1;
            if (((*param_2 != 0) ||
                (*(int *)(param_2[3] + 0x20) != (int)*(undefined8 *)(param_2[3] + 0x18))) ||
               (*(char *)((longlong)param_2 + 0x73) != '\0')) {
              bVar13 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
                       unpark_worker_by_id(*(longlong *)(lVar16 + 0x10) + 0x100,
                                           *(longlong *)(lVar16 + 0x10) + 0x80,
                                           *(undefined8 *)(lVar16 + 0x18));
              *(byte *)((longlong)param_2 + 0x71) = bVar13 ^ 1;
              uVar21 = extraout_EDX_00;
              goto LAB_006ed666;
            }
            cVar14 = <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::
                     is_parked(*(longlong *)(lVar16 + 0x10) + 0x100,
                               *(longlong *)(lVar16 + 0x10) + 0x80,*(undefined8 *)(lVar16 + 0x18));
            uVar21 = (uint)extraout_RDX_02;
            uVar25 = extraout_RDX_02;
          } while (cVar14 != '\0');
          *(undefined1 *)((longlong)param_2 + 0x71) = 1;
        }
LAB_006ed666:
        auVar38._8_4_ = uVar21;
        auVar38._0_8_ = param_2;
        if (*(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x240) != 0) {
          lVar16 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x248);
          uVar21 = (int)*(undefined8 *)(lVar16 + 0x10) - 1U & 0xfffffff0;
          (**(code **)(lVar16 + 0x28))();
          auVar38._8_4_ = uVar21;
        }
      }
      else {
        auVar38 = park_internal(param_1,param_2,0);
      }
      uVar22 = auVar38._8_4_;
      param_2 = auVar38._0_8_;
      lVar16 = (*(code *)PTR_now_00799250)();
      param_2[9] = lVar16;
      *(undefined4 *)(param_2 + 10) = uVar22;
      lVar16 = (*(code *)PTR_now_00799250)();
      param_2[0xb] = lVar16;
      *(undefined4 *)(param_2 + 0xc) = uVar22;
      param_2[4] = 0;
      dVar31 = extraout_XMM0_Qa_07;
    } while (*(char *)((longlong)param_2 + 0x72) == '\0');
  }
LAB_006ec815:
  lVar16 = *param_1;
  lVar28 = *(longlong *)(lVar16 + 0x10);
  iVar2 = *(int *)(lVar28 + 0x210);
  uVar21 = *(uint *)((longlong)param_2 + 0x14);
  uVar20 = *(uint *)(param_2 + 2) << 0x11 ^ *(uint *)(param_2 + 2);
  uVar20 = uVar20 >> 7 ^ uVar21 >> 0x10 ^ uVar21 ^ uVar20;
  *(uint *)(param_2 + 2) = uVar21;
  *(uint *)((longlong)param_2 + 0x14) = uVar20;
  uVar30 = <tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
           ::close_and_shutdown_all
                     (lVar28 + 0x1f0,(ulonglong)(iVar2 + 1) * (ulonglong)(uVar20 + uVar21) >> 0x20);
  uVar25 = *(ulonglong *)(*(longlong *)(lVar16 + 0x10) + 0x1d8);
  if (uVar25 <= *(ulonglong *)(lVar16 + 0x18)) {
    (*(code *)PTR_panic_bounds_check_00799520)
              (uVar30,&PTR_anon_dbc6346551702d8f49f87a432b9dece2_7_llvm_7788165550271277997_00794180
              );
LAB_006edb46:
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  lVar28 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x1d0);
  lVar16 = *(ulonglong *)(lVar16 + 0x18) * 0x80;
  *(longlong *)(lVar28 + 0x10 + lVar16) = param_2[6];
  *(longlong *)(lVar28 + 0x20 + lVar16) = param_2[7];
  *(longlong *)(lVar28 + 0x28 + lVar16) = param_2[8];
  lVar16 = *(longlong *)(*param_1 + 0x10);
  LOCK();
  bVar29 = *(int *)(lVar16 + 0x1a0) == 0;
  if (bVar29) {
    *(int *)(lVar16 + 0x1a0) = 1;
  }
  UNLOCK();
  if (!bVar29) {
    uVar30 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_88 = local_88 ^ 1;
    uVar30 = extraout_XMM0_Qa_13;
  }
  lVar28 = *(longlong *)(lVar16 + 0x1b8);
  if (lVar28 == *(longlong *)(lVar16 + 0x1a8)) {
    uVar30 = (*(code *)PTR_grow_one_0079a7f8)();
  }
  *(longlong **)(*(longlong *)(lVar16 + 0x1b0) + lVar28 * 8) = param_2;
  lVar28 = lVar28 + 1;
  *(longlong *)(lVar16 + 0x1b8) = lVar28;
  if (lVar28 == *(longlong *)(lVar16 + 0x1c8)) {
    *(undefined8 *)(lVar16 + 0x1b8) = 0;
    local_70 = *(undefined8 **)(lVar16 + 0x1b0);
    local_68 = local_70 + lVar28;
    local_50 = 0;
    local_60 = lVar16 + 0x1a8;
    local_58 = lVar28;
    if (lVar28 != 0) {
LAB_006ec990:
      puVar24 = local_70 + 1;
      puVar3 = (undefined8 *)*local_70;
      plVar4 = (longlong *)puVar3[1];
      puVar3[1] = 0;
      local_70 = puVar24;
      if (plVar4 != (longlong *)0x0) {
        local_80 = plVar4;
LAB_006ec9c7:
        puVar26 = (ulonglong *)*puVar3;
        *puVar3 = 0;
        if (puVar26 == (ulonglong *)0x0) {
          lVar28 = puVar3[3];
          uVar25 = *(ulonglong *)(lVar28 + 0x18);
          local_74 = (undefined4)(uVar25 >> 0x20);
          if (*(int *)(lVar28 + 0x20) == (int)uVar25) goto LAB_006eca80;
          while( true ) {
            local_44 = (uint)uVar25 + 1;
            uVar21 = (uint)(uVar25 >> 0x20);
            if (uVar21 == (uint)uVar25) {
              LOCK();
              uVar17 = *(ulonglong *)(lVar28 + 0x18);
              bVar29 = uVar25 == uVar17;
              if (bVar29) {
                *(ulonglong *)(lVar28 + 0x18) = (ulonglong)local_44 * 0x100000001;
                uVar17 = uVar25;
              }
              else {
              }
              UNLOCK();
            }
            else {
              if (local_44 == uVar21) {
                (*(code *)PTR_<u32,u32>_00799798)(0,&local_44);
                goto LAB_006edb46;
              }
              LOCK();
              uVar17 = *(ulonglong *)(lVar28 + 0x18);
              bVar29 = uVar25 == uVar17;
              if (bVar29) {
                *(ulonglong *)(lVar28 + 0x18) = uVar25 & 0xffffffff00000000 | (ulonglong)local_44;
                uVar17 = uVar25;
              }
              else {
              }
              UNLOCK();
            }
            if (bVar29) break;
            local_74 = (undefined4)(uVar17 >> 0x20);
            uVar25 = uVar17;
            if (*(int *)(lVar28 + 0x20) == (int)uVar17) goto LAB_006eca80;
          }
          puVar26 = *(ulonglong **)(*(longlong *)(lVar28 + 0x10) + (uVar25 & 0xff) * 8);
        }
        LOCK();
        uVar25 = *puVar26;
        *puVar26 = *puVar26 - 0x40;
        UNLOCK();
        if (uVar25 >> 6 == 1) {
          uVar30 = (**(code **)(puVar26[2] + 0x10))();
        }
        else if (uVar25 >> 6 == 0) {
          (*(code *)PTR_panic_00799338)
                    (uVar30,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
          goto LAB_006edb46;
        }
        goto LAB_006ec9c7;
      }
      (*(code *)PTR_expect_failed_00799440)
                (puVar24,&
                         PTR_anon_dbc6346551702d8f49f87a432b9dece2_7_llvm_7788165550271277997_00794198
                );
      goto LAB_006edb46;
    }
LAB_006ecaf7:
    uVar30 = <alloc[12e961f32105355]::vec::drain::Drain<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(&local_70,uVar25);
    puVar12 = PTR_is_zero_slow_path_00798fe8;
    puVar11 = PTR_lock_contended_00798fe0;
    if (*(longlong *)(lVar16 + 0xa0) != 0) {
      piVar1 = (int *)(lVar16 + 0x80);
      do {
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 1;
        }
        UNLOCK();
        if (iVar2 != 0) {
          uVar30 = (*(code *)puVar11)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          bVar13 = 0;
        }
        else {
          bVar13 = (*(code *)puVar12)();
          bVar13 = bVar13 ^ 1;
          uVar30 = extraout_XMM0_Qa_00;
        }
        lVar28 = *(longlong *)(lVar16 + 0xa0);
        *(ulonglong *)(lVar16 + 0xa0) = lVar28 - (ulonglong)(lVar28 != 0);
        if ((lVar28 == 0) || (puVar26 = *(ulonglong **)(lVar16 + 0x88), puVar26 == (ulonglong *)0x0)
           ) {
          puVar26 = (ulonglong *)0x0;
        }
        else {
          uVar25 = puVar26[1];
          *(ulonglong *)(lVar16 + 0x88) = uVar25;
          if (uVar25 == 0) {
            *(undefined8 *)(lVar16 + 0x90) = 0;
            puVar26[1] = 0;
          }
          else {
            puVar26[1] = 0;
          }
        }
        if (((bVar13 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar14 = (*(code *)puVar12)(), uVar30 = extraout_XMM0_Qa_01, cVar14 == '\0')) {
          *(undefined1 *)(lVar16 + 0x84) = 1;
        }
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = 0;
        UNLOCK();
        if (iVar2 == 2) {
          uVar30 = (*(code *)PTR_wake_00799010)();
        }
        if (puVar26 == (ulonglong *)0x0) break;
        LOCK();
        uVar25 = *puVar26;
        *puVar26 = *puVar26 - 0x40;
        UNLOCK();
        if (uVar25 >> 6 == 1) {
          uVar30 = (**(code **)(puVar26[2] + 0x10))();
        }
        else if (uVar25 >> 6 == 0) {
          (*(code *)PTR_panic_00799338)
                    (uVar30,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
          goto LAB_006edb46;
        }
      } while (*(longlong *)(lVar16 + 0xa0) != 0);
    }
  }
  if (((local_88 == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar14 == '\0')) {
    *(undefined1 *)(lVar16 + 0x1a4) = 1;
  }
  LOCK();
  iVar2 = *(int *)(lVar16 + 0x1a0);
  *(int *)(lVar16 + 0x1a0) = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
LAB_006eda18:
  (*(code *)PTR_<u32,u32>_00799798)(0,local_38);
  goto LAB_006edb46;
LAB_006ed1aa:
  puVar24 = *(undefined8 **)(*(longlong *)(uVar25 + 0x10) + (uVar17 & 0xff) * 8);
LAB_006ed2b0:
  param_2 = (longlong *)run_task(param_1,puVar24,param_2);
  dVar31 = extraout_XMM0_Qa_03;
  if (param_2 == (longlong *)0x0) {
    return;
  }
LAB_006ed2c9:
  if (*(char *)((longlong)param_2 + 0x72) != '\0') goto LAB_006ec815;
  goto LAB_006eccd0;
LAB_006eca80:
  lVar28 = local_80[2];
  LOCK();
  bVar29 = *(char *)(lVar28 + 0x68) == '\0';
  if (bVar29) {
    *(char *)(lVar28 + 0x68) = '\x01';
  }
  UNLOCK();
  if (bVar29) {
    <tokio[d7d91d38da47d894]::runtime::driver::Driver>::shutdown(lVar28 + 0x10,lVar16 + 0x338);
    LOCK();
    *(undefined1 *)(lVar28 + 0x68) = 0;
    UNLOCK();
  }
  (*(code *)PTR_notify_all_00799d78)();
  LOCK();
  *local_80 = *local_80 + -1;
  UNLOCK();
  if (*local_80 == 0) {
    (*(code *)PTR_drop_slow_00799658)();
  }
  uVar30 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
           <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>(puVar3);
  uVar25 = 0x78;
  uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
  if (local_70 == local_68) goto LAB_006ecaf7;
  goto LAB_006ec990;
}


