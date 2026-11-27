// 005d9160 dispatch_acp_message

/* craggemini_core[66f3c71560d70857]::acp_backend::dispatch_acp_message */

void __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::dispatch_acp_message
          (undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined8 *puVar12;
  byte bVar13;
  char cVar14;
  char *pcVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  longlong lVar24;
  ushort uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined8 uVar28;
  byte bVar29;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 uVar30;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char local_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined4 uStack_11f;
  undefined2 uStack_11b;
  char cStack_119;
  undefined1 uStack_118;
  undefined4 uStack_117;
  undefined2 uStack_113;
  char cStack_111;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 local_f8;
  undefined1 uStack_f0;
  undefined4 uStack_ef;
  undefined2 uStack_eb;
  char cStack_e9;
  undefined8 *local_e8;
  undefined8 *puStack_e0;
  undefined8 *local_c8;
  undefined4 *puStack_c0;
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  undefined4 *puStack_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70 [2];
  undefined8 *local_60;
  longlong local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pcVar15 = (char *)(*(code *)PTR_index_into_00799300)(param_4,param_1);
  uVar28 = extraout_XMM0_Qa;
  if ((pcVar15 != (char *)0x0) &&
     ((lVar16 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa,param_1), lVar16 != 0 ||
      (lVar16 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_00,param_1),
      uVar28 = extraout_XMM0_Qa_01, lVar16 != 0)))) {
    local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8);
    if ((*pcVar15 == '\x02') &&
       (local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8),
       *(longlong *)(pcVar15 + 8) == 0)) {
      lVar16 = *(longlong *)(pcVar15 + 0x10);
      LOCK();
      iVar1 = *param_2;
      if (iVar1 == 0) {
        *param_2 = 1;
      }
      UNLOCK();
      local_58 = lVar16;
      if (iVar1 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar9 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar13 = 0;
        cVar14 = (char)param_2[1];
      }
      else {
        bVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar13 = bVar13 ^ 1;
        cVar14 = (char)param_2[1];
      }
      if (cVar14 == '\0') {
        uVar20 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&u64>(param_2 + 10,&local_58);
        lVar19 = *(longlong *)(param_2 + 2);
        uVar21 = *(ulonglong *)(param_2 + 4);
        bVar29 = (byte)(uVar20 >> 0x39);
        auVar31 = ZEXT216(CONCAT11(bVar29,bVar29));
        auVar31 = pshuflw(auVar31,auVar31,0);
        lVar24 = 0;
        while( true ) {
          uVar20 = uVar20 & uVar21;
          auVar32 = *(undefined1 (*) [16])(lVar19 + uVar20);
          auVar34[0] = -(auVar32[0] == auVar31[0]);
          auVar34[1] = -(auVar32[1] == auVar31[1]);
          auVar34[2] = -(auVar32[2] == auVar31[2]);
          auVar34[3] = -(auVar32[3] == auVar31[3]);
          auVar34[4] = -(auVar32[4] == auVar31[4]);
          auVar34[5] = -(auVar32[5] == auVar31[5]);
          auVar34[6] = -(auVar32[6] == auVar31[6]);
          auVar34[7] = -(auVar32[7] == auVar31[7]);
          auVar34[8] = -(auVar32[8] == auVar31[0]);
          auVar34[9] = -(auVar32[9] == auVar31[1]);
          auVar34[10] = -(auVar32[10] == auVar31[2]);
          auVar34[0xb] = -(auVar32[0xb] == auVar31[3]);
          auVar34[0xc] = -(auVar32[0xc] == auVar31[4]);
          auVar34[0xd] = -(auVar32[0xd] == auVar31[5]);
          auVar34[0xe] = -(auVar32[0xe] == auVar31[6]);
          auVar34[0xf] = -(auVar32[0xf] == auVar31[7]);
          uVar25 = (ushort)(SUB161(auVar34 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar34[0xf] >> 7) << 0xf;
          uVar23 = (uint)uVar25;
          while (uVar25 != 0) {
            uVar7 = 0;
            for (uVar8 = uVar23; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            uVar26 = uVar7 + uVar20 & uVar21;
            lVar27 = lVar19 + uVar26 * -0x10;
            if (lVar16 == *(longlong *)(lVar27 + -0x10)) {
              uVar21 = uVar26 - 0x10 & uVar21;
              pcVar15 = (char *)(lVar19 + uVar21);
              auVar31[0] = -(*pcVar15 == -1);
              auVar31[1] = -(pcVar15[1] == -1);
              auVar31[2] = -(pcVar15[2] == -1);
              auVar31[3] = -(pcVar15[3] == -1);
              auVar31[4] = -(pcVar15[4] == -1);
              auVar31[5] = -(pcVar15[5] == -1);
              auVar31[6] = -(pcVar15[6] == -1);
              auVar31[7] = -(pcVar15[7] == -1);
              auVar31[8] = -(pcVar15[8] == -1);
              auVar31[9] = -(pcVar15[9] == -1);
              auVar31[10] = -(pcVar15[10] == -1);
              auVar31[0xb] = -(pcVar15[0xb] == -1);
              auVar31[0xc] = -(pcVar15[0xc] == -1);
              auVar31[0xd] = -(pcVar15[0xd] == -1);
              auVar31[0xe] = -(pcVar15[0xe] == -1);
              auVar31[0xf] = -(pcVar15[0xf] == -1);
              uVar5 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
                      (ushort)(auVar31[0xf] >> 7) << 0xf;
              pcVar15 = (char *)(lVar19 + uVar26);
              auVar32[0] = -(*pcVar15 == -1);
              auVar32[1] = -(pcVar15[1] == -1);
              auVar32[2] = -(pcVar15[2] == -1);
              auVar32[3] = -(pcVar15[3] == -1);
              auVar32[4] = -(pcVar15[4] == -1);
              auVar32[5] = -(pcVar15[5] == -1);
              auVar32[6] = -(pcVar15[6] == -1);
              auVar32[7] = -(pcVar15[7] == -1);
              auVar32[8] = -(pcVar15[8] == -1);
              auVar32[9] = -(pcVar15[9] == -1);
              auVar32[10] = -(pcVar15[10] == -1);
              auVar32[0xb] = -(pcVar15[0xb] == -1);
              auVar32[0xc] = -(pcVar15[0xc] == -1);
              auVar32[0xd] = -(pcVar15[0xd] == -1);
              auVar32[0xe] = -(pcVar15[0xe] == -1);
              auVar32[0xf] = -(pcVar15[0xf] == -1);
              uVar25 = 0xf;
              if (uVar5 != 0) {
                for (; uVar5 >> uVar25 == 0; uVar25 = uVar25 - 1) {
                }
              }
              sVar6 = 0;
              for (uVar23 = (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(auVar32[0xf] >> 7) << 0xf) | 0x10000; (uVar23 & 1) == 0
                  ; uVar23 = uVar23 >> 1 | 0x80000000) {
                sVar6 = sVar6 + 1;
              }
              uVar22 = 0x80;
              if ((ushort)(sVar6 + (uVar25 ^ 0xf)) < 0x10) {
                *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 6) + 1;
                uVar22 = 0xff;
              }
              *(undefined1 *)(lVar19 + uVar26) = uVar22;
              *(undefined1 *)(lVar19 + 0x10 + uVar21) = uVar22;
              *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + -1;
              puVar3 = *(undefined8 **)(lVar27 + -8);
              local_a8 = puVar3;
              lVar16 = (*(code *)PTR_index_into_00799300)(lVar19,param_1);
              local_c8 = puVar3;
              if (lVar16 == 0) {
                lVar16 = (*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_10,param_1);
                if (lVar16 == 0) {
                  local_e8 = (undefined8 *)
                             CONCAT17(cStack_111,
                                      CONCAT25(uStack_113,CONCAT41(uStack_117,uStack_118)));
                  puStack_e0 = puStack_110;
                  local_f8._1_3_ = (uint3)uStack_127;
                  local_f8._0_4_ = (uint)local_f8._1_3_ << 8;
                  local_f8._4_4_ = (undefined4)((uint7)uStack_127 >> 0x18);
                  uStack_f0 = uStack_120;
                  uStack_ef = uStack_11f;
                  uStack_eb = uStack_11b;
                  cStack_e9 = cStack_119;
                }
                else {
                  <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>
                  ::clone(&local_128,lVar16);
                  local_e8 = (undefined8 *)
                             CONCAT17(cStack_111,
                                      CONCAT25(uStack_113,CONCAT41(uStack_117,uStack_118)));
                  puStack_e0 = puStack_110;
                  local_f8._0_4_ = (int)CONCAT71(uStack_127,local_128);
                  local_f8._4_4_ = (undefined4)((uint7)uStack_127 >> 0x18);
                  uStack_f0 = uStack_120;
                  uStack_ef = uStack_11f;
                  uStack_eb = uStack_11b;
                  cStack_e9 = cStack_119;
                  local_128 = '\0';
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_128);
                }
                uStack_120 = (char)local_f8;
                uStack_11f = (undefined4)CONCAT43(local_f8._4_4_,local_f8._1_3_);
                uStack_11b = (undefined2)((uint)local_f8._4_4_ >> 8);
                cStack_119 = (char)((uint)local_f8._4_4_ >> 0x18);
                uStack_118 = uStack_f0;
                uStack_117 = uStack_ef;
                uStack_113 = uStack_eb;
                cStack_111 = cStack_e9;
                puStack_110 = local_e8;
                puStack_108 = puStack_e0;
                local_128 = '\0';
                uStack_127 = 0;
                <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>
                ::send(&local_f8,puVar3,&local_128);
                if ((int)local_f8 != 2) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&uStack_f0);
                }
              }
              else {
                <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>
                ::clone(&local_f8,lVar16);
                puStack_110 = local_e8;
                puStack_108 = puStack_e0;
                uStack_120 = (undefined1)(int)local_f8;
                uStack_11f = (undefined4)(CONCAT44(local_f8._4_4_,(int)local_f8) >> 8);
                uStack_11b = (undefined2)((uint)local_f8._4_4_ >> 8);
                cStack_119 = (char)((uint)local_f8._4_4_ >> 0x18);
                uStack_118 = uStack_f0;
                uStack_117 = uStack_ef;
                uStack_113 = uStack_eb;
                cStack_111 = cStack_e9;
                local_128 = '\x01';
                uStack_127 = 0;
                <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>
                ::send(&local_f8,puVar3,&local_128);
                if ((int)local_f8 != 2) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&uStack_f0);
                }
              }
              if (((bVar13 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
                 (cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar14 == '\0')) {
                *(undefined1 *)(param_2 + 1) = 1;
              }
              LOCK();
              iVar1 = *param_2;
              *param_2 = 0;
              UNLOCK();
              local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8);
              if (iVar1 == 2) {
                (*(code *)PTR_wake_00799010)();
                local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8);
              }
              goto LAB_005d9cc1;
            }
            uVar25 = (ushort)(uVar23 - 1) & (ushort)uVar23;
            uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar25);
          }
          auVar33[0] = -(auVar32[0] == -1);
          auVar33[1] = -(auVar32[1] == -1);
          auVar33[2] = -(auVar32[2] == -1);
          auVar33[3] = -(auVar32[3] == -1);
          auVar33[4] = -(auVar32[4] == -1);
          auVar33[5] = -(auVar32[5] == -1);
          auVar33[6] = -(auVar32[6] == -1);
          auVar33[7] = -(auVar32[7] == -1);
          auVar33[8] = -(auVar32[8] == -1);
          auVar33[9] = -(auVar32[9] == -1);
          auVar33[10] = -(auVar32[10] == -1);
          auVar33[0xb] = -(auVar32[0xb] == -1);
          auVar33[0xc] = -(auVar32[0xc] == -1);
          auVar33[0xd] = -(auVar32[0xd] == -1);
          auVar33[0xe] = -(auVar32[0xe] == -1);
          auVar33[0xf] = -(auVar32[0xf] == -1);
          if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x2f,0) & 1) != 0) || (SUB161(auVar33 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
          uVar20 = uVar20 + lVar24 + 0x10;
          lVar24 = lVar24 + 0x10;
        }
        if (((bVar13 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
           (cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar14 == '\0')) {
          *(undefined1 *)(param_2 + 1) = 1;
        }
        LOCK();
        iVar1 = *param_2;
        *param_2 = 0;
        UNLOCK();
        local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8);
        if (iVar1 == 2) {
          (*(code *)PTR_wake_00799010)();
          local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8);
        }
      }
      else {
        if (((bVar13 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
           (cVar14 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar14 == '\0')) {
          *(undefined1 *)(param_2 + 1) = 1;
        }
        LOCK();
        iVar1 = *param_2;
        *param_2 = 0;
        UNLOCK();
        local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8);
        if (iVar1 == 2) {
          (*(code *)PTR_wake_00799010)();
          local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8);
        }
      }
    }
    goto LAB_005d9cc1;
  }
  lVar16 = (*(code *)PTR_index_into_00799300)(uVar28,param_1);
  pcVar15 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_02,param_1);
  if (((pcVar15 == (char *)0x0) || (lVar16 == 0)) || (*pcVar15 != '\x03')) {
    pcVar15 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_03,param_1);
    local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8);
    if (((pcVar15 != (char *)0x0) &&
        (local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8), *pcVar15 == '\x03')) &&
       ((local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8),
        *(longlong *)(pcVar15 + 0x18) == 0xe &&
        (uVar21 = **(ulonglong **)(pcVar15 + 0x10) ^ 0x2f6e6f6973736573,
        local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,(int)local_f8),
        *(longlong *)((longlong)*(ulonglong **)(pcVar15 + 0x10) + 6) == 0x6574616470752f6e &&
        uVar21 == 0)))) {
      lVar16 = (*(code *)PTR_index_into_00799300)(uVar21,param_1);
      if (lVar16 != 0) {
        pcVar15 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_05,lVar16);
        uVar28 = extraout_XMM0_Qa_06;
        if (pcVar15 == (char *)0x0) {
          pcVar15 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_06,lVar16);
          uVar28 = extraout_XMM0_Qa_07;
          if (pcVar15 == (char *)0x0) goto LAB_005d9cc1;
        }
        if (*pcVar15 == '\x03') {
          uVar30 = *(undefined8 *)(pcVar15 + 0x10);
          uVar2 = *(undefined8 *)(pcVar15 + 0x18);
          lVar19 = (*(code *)PTR_index_into_00799300)(uVar28,lVar16);
          if (lVar19 == 0) {
            <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>::
            clone(&local_c8,lVar16);
          }
          else {
            <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>::
            clone(&local_128,lVar19);
            local_c8 = (undefined8 *)CONCAT71(uStack_127,local_128);
            puStack_c0 = (undefined4 *)
                         CONCAT17(cStack_119,CONCAT25(uStack_11b,CONCAT41(uStack_11f,uStack_120)));
            local_b8 = (undefined8 *)
                       CONCAT17(cStack_111,CONCAT25(uStack_113,CONCAT41(uStack_117,uStack_118)));
            puStack_b0 = puStack_110;
          }
          <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::io::registration_set::Synced>>
          ::lock(&local_a8,param_3);
          puVar3 = local_98;
          puVar17 = puStack_a0;
          if ((char)local_a8 == '\0') {
            lVar16 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::get::<str>(puStack_a0 + 2,uVar30,uVar2);
            if (lVar16 != 0) {
              uStack_118 = SUB81(local_b8,0);
              uStack_117 = (undefined4)((ulonglong)local_b8 >> 8);
              uStack_113 = (undefined2)((ulonglong)local_b8 >> 0x28);
              cStack_111 = (char)((ulonglong)local_b8 >> 0x38);
              puStack_110 = puStack_b0;
              local_128 = (char)local_c8;
              uStack_127 = (undefined7)((ulonglong)local_c8 >> 8);
              uStack_120 = SUB81(puStack_c0,0);
              uStack_11f = (undefined4)((ulonglong)puStack_c0 >> 8);
              uStack_11b = (undefined2)((ulonglong)puStack_c0 >> 0x28);
              cStack_119 = (char)((ulonglong)puStack_c0 >> 0x38);
              <tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>>
              ::send(&local_f8,lVar16,&local_128);
              if ((char)local_f8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_f8);
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>>>
                        (puVar17,(ulonglong)puVar3 & 0xff);
              goto LAB_005d9cc1;
            }
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>>>
                      (puVar17,(ulonglong)puVar3 & 0xff);
          }
          else {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::time::Instant>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::time::Instant>>>>
                      (&local_a8);
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_c8);
        }
      }
    }
    goto LAB_005d9cc1;
  }
  local_40 = *(undefined8 *)(pcVar15 + 0x10);
  uStack_38 = *(undefined8 *)(pcVar15 + 0x18);
  local_70[0] = 0;
  local_60 = (undefined8 *)0x0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar17 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar17 == (undefined4 *)0x0) {
LAB_005d9d59:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005d9d89;
  }
  *(undefined4 *)((longlong)puVar17 + 3) = 0x6370726e;
  *puVar17 = 0x6e6f736a;
  local_c8 = (undefined8 *)&DAT_00000007;
  local_b8 = (undefined8 *)&DAT_00000007;
  puStack_c0 = puVar17;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar18 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar18 == (undefined2 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005d9d89;
  }
  *(undefined1 *)(puVar18 + 1) = 0x30;
  *puVar18 = 0x2e32;
  local_128 = '\x03';
  uStack_120 = 3;
  uStack_11f = 0;
  uStack_11b = 0;
  cStack_119 = '\0';
  uStack_118 = SUB81(puVar18,0);
  uStack_117 = (undefined4)((ulonglong)puVar18 >> 8);
  uStack_113 = (undefined2)((ulonglong)puVar18 >> 0x28);
  cStack_111 = (char)((ulonglong)puVar18 >> 0x38);
  puStack_110 = (undefined8 *)0x3;
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::insert(&local_f8,local_70,&local_c8,&local_128);
  if ((char)local_f8 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_f8);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar17 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar17 == (undefined4 *)0x0) goto LAB_005d9d59;
  *(undefined2 *)puVar17 = 0x6469;
  local_c8 = (undefined8 *)0x2;
  local_b8 = (undefined8 *)0x2;
  puStack_c0 = puVar17;
  <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>::
  serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_128,lVar16);
  if (local_128 == -1) {
    local_f8._0_4_ = (int)CONCAT41(uStack_11f,uStack_120);
    local_f8._4_4_ =
         (undefined4)
         (CONCAT17(cStack_119,CONCAT25(uStack_11b,CONCAT41(uStack_11f,uStack_120))) >> 0x20);
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,&local_f8,
               &PTR_s_src_acp_backend_rs_0078e560);
    goto LAB_005d9d89;
  }
  local_e8 = (undefined8 *)CONCAT17(cStack_111,CONCAT25(uStack_113,CONCAT41(uStack_117,uStack_118)))
  ;
  puStack_e0 = puStack_110;
  local_f8._0_4_ = (int)CONCAT71(uStack_127,local_128);
  local_f8._4_4_ = (undefined4)((uint7)uStack_127 >> 0x18);
  uStack_f0 = uStack_120;
  uStack_ef = uStack_11f;
  uStack_eb = uStack_11b;
  cStack_e9 = cStack_119;
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::insert(&local_128,local_70,&local_c8,&local_f8);
  if (local_128 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_128)
    ;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar17 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar17 == (undefined4 *)0x0) goto LAB_005d9d59;
  *(undefined1 *)(puVar17 + 1) = 0x72;
  *puVar17 = 0x6f727265;
  local_58 = 5;
  local_48 = 5;
  local_a8 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_50 = puVar17;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar17 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar17 != (undefined4 *)0x0) {
    *puVar17 = 0x65646f63;
    local_c8 = (undefined8 *)&DAT_00000004;
    local_b8 = (undefined8 *)&DAT_00000004;
    local_128 = '\x02';
    uStack_120 = 1;
    uStack_11f = 0;
    uStack_11b = 0;
    cStack_119 = '\0';
    uStack_118 = 0xa7;
    uStack_117 = 0xffffff80;
    uStack_113 = 0xffff;
    cStack_111 = -1;
    puStack_c0 = puVar17;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_f8,&local_a8,&local_c8,&local_128);
    if ((char)local_f8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_f8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar17 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar17 != (undefined4 *)0x0) {
      *(undefined4 *)((longlong)puVar17 + 3) = 0x65676173;
      *puVar17 = 0x7373656d;
      local_c8 = (undefined8 *)&DAT_00000007;
      local_b8 = (undefined8 *)&DAT_00000007;
      local_f8 = &local_40;
      uStack_f0 = 0x60;
      uStack_ef = 0x6354;
      uStack_eb = 0;
      cStack_e9 = '\0';
      puStack_c0 = puVar17;
      (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Qa_04,&local_f8);
      cVar14 = cStack_111;
      uVar11 = uStack_113;
      uVar10 = uStack_117;
      uVar22 = uStack_118;
      local_78 = CONCAT71(uStack_127,local_128);
      local_88 = CONCAT17(cStack_119,CONCAT25(uStack_11b,CONCAT41(uStack_11f,uStack_120)));
      lVar16 = CONCAT17(cStack_111,CONCAT25(uStack_113,CONCAT41(uStack_117,uStack_118)));
      if (cStack_111 < '\0') {
LAB_005d95b9:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_005d9d89;
      }
      local_80 = param_4;
      if (lVar16 == 0) {
        lVar19 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar19 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar19 == 0) goto LAB_005d95b9;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_08,lVar16);
      }
      local_128 = '\x03';
      uStack_120 = uVar22;
      uStack_11f = uVar10;
      uStack_11b = uVar11;
      cStack_119 = cVar14;
      uStack_118 = (undefined1)lVar19;
      uStack_117 = (undefined4)((ulonglong)lVar19 >> 8);
      uStack_113 = (undefined2)((ulonglong)lVar19 >> 0x28);
      cStack_111 = (char)((ulonglong)lVar19 >> 0x38);
      puStack_110 = (undefined8 *)lVar16;
      uVar30 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
               ::insert(&local_f8,&local_a8,&local_c8,&local_128);
      uVar28 = local_80;
      if ((char)local_f8 != -1) {
        uVar30 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>(&local_f8);
      }
      if (local_78 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
      }
      uStack_120 = SUB81(local_a8,0);
      uStack_11f = (undefined4)((ulonglong)local_a8 >> 8);
      uStack_11b = (undefined2)((ulonglong)local_a8 >> 0x28);
      cStack_119 = (char)((ulonglong)local_a8 >> 0x38);
      uStack_118 = SUB81(puStack_a0,0);
      uStack_117 = (undefined4)((ulonglong)puStack_a0 >> 8);
      uStack_113 = (undefined2)((ulonglong)puStack_a0 >> 0x28);
      cStack_111 = (char)((ulonglong)puStack_a0 >> 0x38);
      puStack_110 = local_98;
      local_128 = '\x05';
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_f8,local_70,&local_58,&local_128);
      if ((char)local_f8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_f8);
      }
      uStack_120 = (undefined1)local_70[0];
      uStack_11f = (undefined4)((ulonglong)local_70[0] >> 8);
      uStack_11b = (undefined2)((ulonglong)local_70[0] >> 0x28);
      cStack_119 = (char)((ulonglong)local_70[0] >> 0x38);
      uStack_118 = (undefined1)local_70[1];
      uStack_117 = (undefined4)((ulonglong)local_70[1] >> 8);
      uStack_113 = (undefined2)((ulonglong)local_70[1] >> 0x28);
      cStack_111 = (char)((ulonglong)local_70[1] >> 0x38);
      puStack_110 = local_60;
      local_128 = '\x05';
      serde_json[dc3825464c436029]::ser::to_vec::<serde_json[dc3825464c436029]::value::Value>
                (&local_f8,&local_128);
      puVar3 = local_e8;
      if (local_f8 == (undefined8 *)0xffffffffffffffff) {
        puStack_a0 = (undefined4 *)
                     CONCAT17(cStack_e9,CONCAT25(uStack_eb,CONCAT41(uStack_ef,uStack_f0)));
        local_a8 = (undefined8 *)0xffffffffffffffff;
LAB_005d98bd:
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (&puStack_a0);
      }
      else {
        local_98 = local_e8;
        local_a8 = local_f8;
        puStack_a0 = (undefined4 *)
                     CONCAT17(cStack_e9,CONCAT25(uStack_eb,CONCAT41(uStack_ef,uStack_f0)));
        if (local_f8 == (undefined8 *)0xffffffffffffffff) goto LAB_005d98bd;
        local_b8 = local_e8;
        local_c8 = local_a8;
        puStack_c0 = puStack_a0;
        if (local_f8 == local_e8) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_c8,local_e8,1,1,1);
          uVar28 = local_80;
        }
        puVar17 = puStack_c0;
        puVar12 = local_c8;
        *(undefined1 *)((longlong)puStack_c0 + (longlong)puVar3) = 10;
        cVar14 = (*(code *)PTR_try_acquire_00799318)();
        if (cVar14 == '\x02') {
          local_e8 = (undefined8 *)((longlong)puVar3 + 1);
          local_f8._0_4_ = (int)puVar12;
          local_f8._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
          uStack_f0 = SUB81(puVar17,0);
          uStack_ef = (undefined4)((ulonglong)puVar17 >> 8);
          uStack_eb = (undefined2)((ulonglong)puVar17 >> 0x28);
          cStack_e9 = (char)((ulonglong)puVar17 >> 0x38);
          <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
          ::send(uVar28,&local_f8);
        }
        else if (puVar12 != (undefined8 *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Qa_09,1);
        }
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_128);
LAB_005d9cc1:
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_1);
      return;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005d9d89:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


