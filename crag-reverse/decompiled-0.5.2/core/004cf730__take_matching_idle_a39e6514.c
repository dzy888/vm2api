// 004cf730 take_matching_idle

/* craggemini_core[66f3c71560d70857]::pool::take_matching_idle */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::pool::take_matching_idle
          (undefined8 *param_1,ulonglong *param_2,undefined8 param_3,longlong param_4,
          undefined8 param_5,longlong param_6,longlong param_7,longlong param_8,ulonglong *param_9,
          longlong *param_10)

{
  code *pcVar1;
  ulonglong *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong *puVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  ulonglong *local_3aa8;
  undefined8 uStack_3aa0;
  undefined8 local_3a98;
  undefined8 uStack_3a90;
  ulonglong *local_3a88;
  uint local_3a7c;
  longlong local_3a78;
  undefined8 *local_3a70;
  undefined8 local_3a68;
  longlong local_3a60;
  undefined8 local_3a58;
  ulonglong local_3a50;
  ulonglong local_3a48;
  ulonglong local_3a40;
  int local_3a38;
  char local_3a34;
  ulonglong local_3a30;
  undefined8 local_3a28;
  undefined8 uStack_3a20;
  undefined4 local_3a18;
  undefined4 uStack_3a14;
  undefined4 uStack_3a10;
  undefined4 uStack_3a0c;
  undefined8 local_31d8;
  undefined4 uStack_31d0;
  undefined4 uStack_31cc;
  undefined4 local_31c8;
  undefined4 uStack_31c4;
  undefined4 uStack_31c0;
  undefined4 uStack_31bc;
  longlong local_30f8;
  longlong local_30f0;
  undefined8 local_3030;
  longlong local_2b88;
  longlong local_2b70;
  longlong local_2af0;
  longlong local_2ae0;
  longlong local_2a58;
  longlong local_2990 [265];
  longlong local_2148 [35];
  undefined8 local_2030;
  longlong local_1900 [265];
  longlong local_10b8 [17];
  undefined8 local_1030;
  ulonglong local_870 [264];
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  puVar18 = (ulonglong *)param_2[3];
  lVar9 = param_6;
  if (puVar18 < (ulonglong *)0xf74e3fc22c701) goto LAB_004cf797;
  puVar4 = (undefined8 *)0x0;
  do {
    param_1 = puVar4;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = (ulonglong *)((longlong)puVar18 * 0x848);
    lVar9 = param_6;
LAB_004cf797:
    local_3a68 = param_5;
    local_3a60 = param_4;
    local_3a58 = param_3;
    if ((ulonglong *)((longlong)puVar18 * 0x848) == (ulonglong *)0x0) {
      uStack_3aa0 = 8;
      local_3aa8 = (ulonglong *)0x0;
      puVar12 = param_2;
      goto LAB_004cf7e2;
    }
    param_6 = lVar9;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uStack_3aa0 = (*(code *)PTR___rust_alloc_00799000)();
    puVar4 = (undefined8 *)&DAT_00000008;
  } while (uStack_3aa0 == 0);
  local_3aa8 = puVar18;
  puVar12 = (ulonglong *)&DAT_00000008;
LAB_004cf7e2:
  puVar3 = PTR_memcpy_00799008;
  uVar20 = 0;
  local_3a98 = (ulonglong *)0x0;
  uStack_3a90 = (ulonglong *)0x0;
  local_10b8[0] = 2;
  local_1900[0] = 2;
  local_2148[0] = 2;
  local_2990[0] = 2;
  local_3a88 = param_2;
  if (puVar18 != (ulonglong *)0x0) {
    local_3a50 = *param_2;
    local_3a48 = param_2[1];
    uVar10 = param_2[2];
    local_3a78 = lVar9;
    local_3a70 = param_1;
    do {
      uVar7 = local_3a50;
      if (uVar10 + 1 < local_3a50) {
        uVar7 = 0;
      }
      uVar7 = (uVar10 - uVar7) + 1;
      param_2[2] = uVar7;
      puVar18 = (ulonglong *)((longlong)puVar18 + -1);
      param_2[3] = (ulonglong)puVar18;
      puVar13 = *(ulonglong **)(local_3a48 + uVar10 * 0x848);
      uVar20 = (*(code *)puVar3)(uVar10 * 0x848,0x840);
      puVar12 = local_870;
      if (puVar13 == (ulonglong *)0x2) break;
      local_3a40 = uVar7;
      local_31d8 = puVar13;
      (*(code *)puVar3)();
      uVar20 = (*(code *)PTR_try_wait_00799320)();
      puVar12 = &local_3a28;
      if (local_3a38 == 0) {
        if (local_3a34 != '\0') goto LAB_004cf960;
        uVar20 = (*(code *)PTR_as_raw_fd_00799b70)();
        local_3a28 = (ulonglong *)CONCAT44(0x2001,uVar20);
        iVar6 = (*(code *)PTR_poll_00799b78)();
        uVar20 = extraout_XMM0_Da;
        if (((iVar6 < 0) || (((ulonglong)local_3a28 & 0x2038000000000000) != 0)) ||
           (local_2b88 != local_3a60)) goto LAB_004cf960;
        if (local_3a60 != 0) {
          lVar9 = 0;
          do {
            (*(code *)PTR_<u8>_00799268)();
            lVar9 = lVar9 + 1;
          } while (local_3a60 != lVar9);
        }
        cVar5 = (*(code *)PTR_<u8>_00799268)();
        lVar9 = local_3a78;
        param_2 = local_3a88;
        uVar20 = extraout_XMM0_Da_00;
        if (cVar5 == '\0') goto LAB_004cf960;
        if (local_30f0 != 0) {
          lVar17 = 0;
          do {
            if ((*(longlong *)(local_30f8 + 0x10 + lVar17) == 0xf) &&
               (plVar14 = *(longlong **)(local_30f8 + 8 + lVar17),
               *(longlong *)((longlong)plVar14 + 7) ==
               CONCAT71(s_ntrol_v1graceful_cancel_v1thinki_001a49ed._1_7_,
                        s_ntrol_v1graceful_cancel_v1thinki_001a49ed[0]) &&
               *plVar14 ==
               CONCAT17(s_ntrol_v1graceful_cancel_v1thinki_001a49ed[0],
                        anon_d3057478e380898db632effa827bd31f_78_llvm_2674179329317868992))) {
              uVar10 = CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
              goto LAB_004cfae8;
            }
            lVar17 = lVar17 + 0x18;
          } while (local_30f0 * 0x18 != lVar17);
        }
        uVar10 = 0;
LAB_004cfae8:
        uVar19 = (uint)uVar10;
        lVar17 = local_2b70;
        if ((local_2af0 == -1 || param_7 == 0) || (int)local_10b8[0] != 2) {
          if (local_2b70 != local_3a78 || (local_1900[0] != 2 || local_2af0 != -1))
          goto LAB_004cfc23;
          local_3a7c = uVar19;
          iVar6 = (*(code *)PTR_bcmp_00799020)(local_2b70,local_3a78);
          lVar17 = lVar9;
          uVar10 = (ulonglong)local_3a7c;
          uVar20 = extraout_XMM0_Da_01;
          if (iVar6 != 0) goto LAB_004cfc23;
          lVar17 = local_3a78;
          if (local_2a58 != -1) goto LAB_004cfc23;
          puVar12 = &local_31d8;
          uVar20 = (*(code *)puVar3)(local_3a78,0x848);
        }
        else {
          if (local_2ae0 == param_8) {
            iVar6 = (*(code *)PTR_bcmp_00799020)();
            lVar9 = local_3a78;
            lVar17 = local_2b70;
            uVar20 = extraout_XMM0_Da_02;
            if (iVar6 == 0) {
              if (local_2b70 == local_3a78) {
                local_3a7c = uVar19;
                iVar6 = (*(code *)PTR_bcmp_00799020)(local_2b70,local_3a78);
                lVar17 = lVar9;
                uVar10 = (ulonglong)local_3a7c;
                uVar20 = extraout_XMM0_Da_03;
                if (iVar6 == 0 || (char)local_3a7c != '\0') goto LAB_004cfd2e;
              }
              else {
                cVar5 = (char)uVar10;
                lVar9 = local_2b70;
                uVar10 = uVar10 & 0xffffffff;
                local_3a7c = uVar19;
                if (cVar5 != '\0') {
LAB_004cfd2e:
                  puVar12 = &local_31d8;
                  uVar20 = (*(code *)puVar3)(lVar9,0x848);
                  goto LAB_004cf9a3;
                }
              }
            }
          }
LAB_004cfc23:
          if (((int)local_2148[0] == 2) && (lVar17 == local_3a78)) {
            iVar6 = (*(code *)PTR_bcmp_00799020)(lVar17,local_3a78);
            uVar20 = extraout_XMM0_Da_04;
            if ((iVar6 != 0) || (local_2a58 != -1)) goto LAB_004cfc7c;
            if ((char)uVar10 != '\0') {
              puVar12 = &local_31d8;
              uVar20 = (*(code *)puVar3)(extraout_XMM0_Da_04,0x848);
              goto LAB_004cf9a3;
            }
          }
          else {
LAB_004cfc7c:
            if (((int)local_2990[0] == 2) && (!((char)uVar10 != '\x01' || local_2a58 != -1))) {
              puVar12 = &local_31d8;
              uVar20 = (*(code *)puVar3)(uVar20,0x848);
              goto LAB_004cf9a3;
            }
          }
          (*(code *)puVar3)(uVar20,0x848);
          if (uStack_3a90 == local_3aa8) {
            <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
            ::grow(&local_3aa8,&local_31d8);
          }
          uStack_3a90 = (ulonglong *)((longlong)uStack_3a90 + 1);
          uVar20 = (*(code *)puVar3)(local_3aa8,0x848);
        }
      }
      else {
        if ((1 < ((uint)local_3a30 & 3) - 2) && ((local_3a30 & 3) != 0)) {
          uStack_3a20 = local_3a30 - 1;
          local_3a28 = (ulonglong *)CONCAT71(local_3a28._1_7_,3);
          uVar20 = (*(code *)PTR_drop_00799040)();
        }
LAB_004cf960:
        uVar20 = (*(code *)puVar3)(uVar20,0x848);
        lVar9 = param_10[2];
        if (lVar9 == *param_10) {
          uVar20 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
                   ::grow_one(param_10,&local_31d8);
        }
        uVar20 = (*(code *)puVar3)(uVar20,0x848);
        param_10[2] = lVar9 + 1;
      }
LAB_004cf9a3:
      uVar10 = local_3a40;
    } while (puVar18 != (ulonglong *)0x0);
    param_1 = local_3a70;
    if ((int)local_10b8[0] != 2) {
      plVar14 = local_10b8;
      uVar20 = (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
      if ((int)local_1900[0] != 2) {
        (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
        if (uStack_3a90 == local_3aa8) {
          <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
          ::grow(&local_3aa8,local_1900);
        }
        puVar18 = (ulonglong *)((longlong)local_3a98 + -1);
        local_3a98 = (ulonglong *)((longlong)local_3aa8 + (longlong)puVar18);
        if (!CARRY8((ulonglong)local_3aa8,(ulonglong)puVar18)) {
          local_3a98 = puVar18;
        }
        uStack_3a90 = (ulonglong *)((longlong)uStack_3a90 + 1);
        plVar14 = local_1900;
        uVar20 = (*(code *)PTR_memcpy_00799008)(uStack_3a90,0x848);
      }
      if ((int)local_2148[0] != 2) {
        (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
        if (uStack_3a90 == local_3aa8) {
          <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
          ::grow(&local_3aa8,local_2148);
        }
        uStack_3a90 = (ulonglong *)((longlong)uStack_3a90 + 1);
        plVar14 = local_2148;
        uVar20 = (*(code *)PTR_memcpy_00799008)(local_3aa8,0x848);
      }
      if ((int)local_2990[0] != 2) {
        (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
        if (uStack_3a90 == local_3aa8) {
          <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
          ::grow(&local_3aa8,local_2990);
        }
        uStack_3a90 = (ulonglong *)((longlong)uStack_3a90 + 1);
        plVar14 = local_2990;
        (*(code *)PTR_memcpy_00799008)(local_3aa8,0x848);
      }
      local_3a18 = (undefined4)local_3a98;
      uStack_3a14 = local_3a98._4_4_;
      uStack_3a10 = (undefined4)uStack_3a90;
      uStack_3a0c = uStack_3a90._4_4_;
      local_3a28 = local_3aa8;
      uStack_3a20 = uStack_3aa0;
      uVar20 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(param_2,plVar14);
      if (*param_2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
      }
      *(undefined4 *)(param_2 + 2) = local_3a18;
      *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3a14;
      *(undefined4 *)(param_2 + 3) = uStack_3a10;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3a0c;
      *(undefined4 *)param_2 = (undefined4)local_3a28;
      *(undefined4 *)((longlong)param_2 + 4) = local_3a28._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_3a20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3a20._4_4_;
      param_1 = local_3a70;
      uVar20 = (undefined4)local_3a28;
      goto LAB_004d05f5;
    }
  }
  if ((int)local_1900[0] == 2) {
    if ((int)local_2148[0] == 2) {
      pcVar1 = (code *)PTR_memcpy_00799008;
      puVar18 = local_3aa8;
      puVar13 = local_3a98;
      puVar2 = uStack_3a90;
      if ((int)local_2990[0] == 2) {
joined_r0x004cfd99:
        do {
          local_3a70 = param_1;
          PTR_memcpy_00799008 = pcVar1;
          local_3aa8 = puVar18;
          local_3a98 = puVar13;
          uStack_3a90 = puVar2;
          if (puVar2 <= param_9) {
LAB_004d0618:
            local_3a18 = (undefined4)local_3a98;
            uStack_3a14 = local_3a98._4_4_;
            uStack_3a10 = (undefined4)uStack_3a90;
            uStack_3a0c = uStack_3a90._4_4_;
            local_3a28 = local_3aa8;
            uStack_3a20 = uStack_3aa0;
            uVar20 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                     ::drop(param_2,puVar12);
            puVar4 = local_3a70;
            if (*param_2 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
            }
            param_2[2] = CONCAT44(uStack_3a14,local_3a18);
            param_2[3] = CONCAT44(uStack_3a0c,uStack_3a10);
            *param_2 = (ulonglong)local_3a28;
            param_2[1] = uStack_3a20;
            *puVar4 = 2;
            return puVar4;
          }
          puVar12 = puVar18;
          if (puVar13 < puVar18) {
            puVar12 = (ulonglong *)0x0;
          }
          puVar15 = (ulonglong *)((longlong)puVar13 - (longlong)puVar12);
          puVar8 = (ulonglong *)((longlong)puVar18 - (longlong)puVar15);
          puVar16 = (ulonglong *)((longlong)puVar15 + (longlong)puVar2);
          if (puVar8 < puVar2) {
            puVar16 = puVar18;
          }
          lVar9 = (longlong)puVar2 - (longlong)puVar8;
          if (puVar2 < puVar8) {
            lVar9 = 0;
          }
          puVar11 = (ulonglong *)0x0;
          if (puVar15 != puVar16) {
            puVar16 = puVar8;
            if (puVar2 < puVar8) {
              puVar16 = puVar2;
            }
            puVar12 = (ulonglong *)
                      (uStack_3aa0 + (longlong)puVar13 * 0x848 + (longlong)puVar12 * -0x848 + 0x780)
            ;
            lVar17 = 0;
            puVar11 = (ulonglong *)0x0;
            do {
              if (*(longlong *)((longlong)puVar12 + lVar17) == -1) goto LAB_004cff5b;
              puVar11 = (ulonglong *)((longlong)puVar11 + 1);
              lVar17 = lVar17 + 0x848;
            } while ((longlong)puVar16 * 0x848 != lVar17);
          }
          if (puVar8 < puVar2) {
            lVar17 = 0;
            do {
              if (*(longlong *)(uStack_3aa0 + 0x780 + lVar17) == -1) goto LAB_004cff5b;
              puVar11 = (ulonglong *)((longlong)puVar11 + 1);
              lVar17 = lVar17 + 0x848;
            } while (lVar9 * 0x848 != lVar17);
          }
          puVar12 = (ulonglong *)0x0;
          if (puVar18 <= (ulonglong *)((longlong)puVar13 + 1)) {
            puVar12 = puVar18;
          }
          local_3a98 = (ulonglong *)((longlong)puVar13 + (1 - (longlong)puVar12));
          uStack_3a90 = (ulonglong *)((longlong)puVar2 + -1);
          lVar9 = (longlong)puVar13 * 0x848;
          puVar18 = *(ulonglong **)(uStack_3aa0 + lVar9);
          puVar12 = (ulonglong *)(uStack_3aa0 + lVar9 + 8);
          uVar20 = (*pcVar1)(lVar9,0x840);
          if (puVar18 == (ulonglong *)0x2) {
            param_2 = local_3a88;
            goto LAB_004d0618;
          }
          local_3a28 = puVar18;
          (*pcVar1)(uVar20,0x840);
          lVar9 = param_10[2];
          if (lVar9 == *param_10) {
            <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
            ::grow_one(param_10,puVar12);
          }
          *(ulonglong **)(param_10[1] + lVar9 * 0x848) = puVar18;
          puVar12 = &local_31d8;
          (*pcVar1)(lVar9 * 0x848,0x840);
          param_10[2] = lVar9 + 1;
          param_1 = local_3a70;
          param_2 = local_3a88;
          pcVar1 = (code *)PTR_memcpy_00799008;
          puVar18 = local_3aa8;
          puVar13 = local_3a98;
          puVar2 = uStack_3a90;
        } while( true );
      }
      (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
      local_31c8 = (undefined4)local_3a98;
      uStack_31c4 = local_3a98._4_4_;
      uStack_31c0 = (undefined4)uStack_3a90;
      uStack_31bc = uStack_3a90._4_4_;
      local_31d8 = local_3aa8;
      uStack_31d0 = (undefined4)uStack_3aa0;
      uStack_31cc = uStack_3aa0._4_4_;
      uVar20 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(param_2,local_2990);
      if (*param_2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
      }
      *(undefined4 *)(param_2 + 2) = local_31c8;
      *(undefined4 *)((longlong)param_2 + 0x14) = uStack_31c4;
      *(undefined4 *)(param_2 + 3) = uStack_31c0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_31bc;
      *(undefined4 *)param_2 = (undefined4)local_31d8;
      *(undefined4 *)((longlong)param_2 + 4) = local_31d8._4_4_;
      *(undefined4 *)(param_2 + 1) = uStack_31d0;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_31cc;
      uVar20 = (undefined4)local_31d8;
    }
    else {
      plVar14 = local_2148;
      uVar20 = (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
      if ((int)local_2990[0] != 2) {
        (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
        if (uStack_3a90 == local_3aa8) {
          <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
          ::grow(&local_3aa8,local_2990);
        }
        uStack_3a90 = (ulonglong *)((longlong)uStack_3a90 + 1);
        plVar14 = local_2990;
        (*(code *)PTR_memcpy_00799008)(local_3aa8,0x848);
      }
      local_3a18 = (undefined4)local_3a98;
      uStack_3a14 = local_3a98._4_4_;
      uStack_3a10 = (undefined4)uStack_3a90;
      uStack_3a0c = uStack_3a90._4_4_;
      local_3a28 = local_3aa8;
      uStack_3a20 = uStack_3aa0;
      uVar20 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(param_2,plVar14);
      if (*param_2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
      }
      *(undefined4 *)(param_2 + 2) = local_3a18;
      *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3a14;
      *(undefined4 *)(param_2 + 3) = uStack_3a10;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3a0c;
      *(undefined4 *)param_2 = (undefined4)local_3a28;
      *(undefined4 *)((longlong)param_2 + 4) = local_3a28._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_3a20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3a20._4_4_;
      uVar20 = (undefined4)local_3a28;
    }
  }
  else {
    plVar14 = local_1900;
    uVar20 = (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
    if ((int)local_2148[0] != 2) {
      (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
      if (uStack_3a90 == local_3aa8) {
        <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
        ::grow(&local_3aa8,local_2148);
      }
      puVar18 = (ulonglong *)((longlong)local_3a98 + -1);
      local_3a98 = (ulonglong *)((longlong)local_3aa8 + (longlong)puVar18);
      if (!CARRY8((ulonglong)local_3aa8,(ulonglong)puVar18)) {
        local_3a98 = puVar18;
      }
      uStack_3a90 = (ulonglong *)((longlong)uStack_3a90 + 1);
      plVar14 = local_2148;
      uVar20 = (*(code *)PTR_memcpy_00799008)(uStack_3a90,0x848);
    }
    if ((int)local_2990[0] != 2) {
      (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
      if (uStack_3a90 == local_3aa8) {
        <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
        ::grow(&local_3aa8,local_2990);
      }
      uStack_3a90 = (ulonglong *)((longlong)uStack_3a90 + 1);
      plVar14 = local_2990;
      (*(code *)PTR_memcpy_00799008)(local_3aa8,0x848);
    }
    local_3a18 = (undefined4)local_3a98;
    uStack_3a14 = local_3a98._4_4_;
    uStack_3a10 = (undefined4)uStack_3a90;
    uStack_3a0c = uStack_3a90._4_4_;
    local_3a28 = local_3aa8;
    uStack_3a20 = uStack_3aa0;
    uVar20 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(param_2,plVar14);
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
    }
    *(undefined4 *)(param_2 + 2) = local_3a18;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3a14;
    *(undefined4 *)(param_2 + 3) = uStack_3a10;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3a0c;
    *(undefined4 *)param_2 = (undefined4)local_3a28;
    *(undefined4 *)((longlong)param_2 + 4) = local_3a28._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_3a20;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3a20._4_4_;
    uVar20 = (undefined4)local_3a28;
  }
LAB_004d05f5:
  (*(code *)PTR_memcpy_00799008)(uVar20,0x848);
  return param_1;
LAB_004cff5b:
  param_1 = local_3a70;
  param_2 = local_3a88;
  if (puVar11 < puVar2) {
    puVar12 = (ulonglong *)0x0;
    if (puVar18 <= (ulonglong *)((longlong)puVar13 + (longlong)puVar11)) {
      puVar12 = puVar18;
    }
    puVar12 = (ulonglong *)(((longlong)puVar13 + (longlong)puVar11) - (longlong)puVar12);
    puVar16 = *(ulonglong **)(uStack_3aa0 + (longlong)puVar12 * 0x848);
    (*pcVar1)((longlong)puVar12 * 0x848,0x840);
    if ((ulonglong *)(~(ulonglong)puVar11 + (longlong)puVar2) < puVar11) {
      puVar13 = (ulonglong *)0x0;
      if (puVar18 <= (ulonglong *)((longlong)puVar12 + 1)) {
        puVar13 = puVar18;
      }
      puVar13 = (ulonglong *)((longlong)puVar12 + (1 - (longlong)puVar13));
      puVar11 = (ulonglong *)(~(ulonglong)puVar11 + (longlong)puVar2);
    }
    else {
      puVar12 = (ulonglong *)0x0;
      if (puVar18 <= (ulonglong *)((longlong)puVar13 + 1)) {
        puVar12 = puVar18;
      }
      puVar12 = (ulonglong *)((longlong)puVar13 + (1 - (longlong)puVar12));
      local_3a98 = puVar12;
    }
    uVar20 = <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
             ::wrap_copy(&local_3aa8,puVar13,puVar12,puVar11);
    uStack_3a90 = (ulonglong *)((longlong)puVar2 + -1);
    puVar12 = &local_3a28;
    uVar20 = (*(code *)PTR_memcpy_00799008)(uVar20,0x840);
    puVar3 = PTR_memcpy_00799008;
    param_1 = local_3a70;
    param_2 = local_3a88;
    pcVar1 = (code *)PTR_memcpy_00799008;
    puVar18 = local_3aa8;
    puVar13 = local_3a98;
    puVar2 = uStack_3a90;
    if (puVar16 != (ulonglong *)0x2) {
      local_3a28 = puVar16;
      (*(code *)PTR_memcpy_00799008)(uVar20,0x840);
      lVar9 = param_10[2];
      if (lVar9 == *param_10) {
        <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
        ::grow_one(param_10,&local_31d8);
      }
      *(ulonglong **)(param_10[1] + lVar9 * 0x848) = puVar16;
      puVar12 = &local_31d8;
      (*(code *)puVar3)(lVar9 * 0x848,0x840);
      param_10[2] = lVar9 + 1;
      param_1 = local_3a70;
      param_2 = local_3a88;
      pcVar1 = (code *)PTR_memcpy_00799008;
      puVar18 = local_3aa8;
      puVar13 = local_3a98;
      puVar2 = uStack_3a90;
    }
  }
  goto joined_r0x004cfd99;
}


