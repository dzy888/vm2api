// 00507c80 redact_error_secrets

/* WARNING: Removing unreachable block (ram,0x00508874) */
/* WARNING: Removing unreachable block (ram,0x0050885d) */
/* WARNING: Type propagation algorithm not settling */
/* craggemini_core[66f3c71560d70857]::protocol::redact_error_secrets */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::protocol::redact_error_secrets
          (undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong *unaff_RBP;
  ulonglong *puVar17;
  byte bVar18;
  longlong lVar19;
  byte bVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  undefined1 auVar27 [16];
  longlong local_100;
  ulonglong *local_f8;
  longlong lStack_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  byte local_d1;
  undefined **local_d0;
  ulonglong *local_c8;
  undefined **local_c0;
  byte *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  longlong local_88;
  longlong local_80;
  byte *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  byte local_50 [8];
  undefined **local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if (param_3 != (ulonglong *)0x0) {
    if ((longlong)param_3 < 0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      local_b0 = param_1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      param_1 = (undefined8 *)0x1;
      lStack_f0 = (*(code *)PTR___rust_alloc_00799000)();
      if (lStack_f0 != 0) {
        local_e8 = (ulonglong *)0x0;
        local_98 = (byte *)((longlong)param_3 + -1);
        local_a0 = (byte *)((longlong)param_2 + 1);
        local_c0 = &PTR_s_src_protocol_rs_0078ced8;
        local_d0 = &PTR_s_src_protocol_rs_0078cdd0;
        local_a8 = 0;
        puVar7 = (ulonglong *)0x0;
        local_100 = lStack_f0;
        local_f8 = param_3;
        local_e0 = param_3;
LAB_00507db0:
        puVar16 = puVar7;
        puVar17 = unaff_RBP;
        do {
          puVar23 = param_3;
          puVar24 = param_2;
          if (puVar16 != (ulonglong *)0x0) {
            if ((char)*(byte *)((longlong)param_2 + (longlong)puVar16) < -0x40) {
LAB_005096bf:
              (*(code *)PTR_slice_error_fail_00799408)(param_3,puVar16,local_d0);
              goto LAB_00509704;
            }
            puVar24 = (ulonglong *)((longlong)param_2 + (longlong)puVar16);
            puVar23 = (ulonglong *)((longlong)param_3 - (longlong)puVar16);
            bVar5 = *(byte *)((longlong)puVar24 + -1);
            if (((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
               ((0x32 < bVar5 - 0x2d ||
                ((0x4000000002007U >> ((ulonglong)(bVar5 - 0x2d) & 0x3f) & 1) == 0))))
            goto LAB_00507e30;
LAB_0050819c:
            puVar7 = (ulonglong *)((longlong)puVar16 + -1);
            if (param_3 <= puVar7) goto LAB_0050968d;
            bVar5 = *(byte *)((longlong)param_2 + (longlong)puVar7);
            unaff_RBP = puVar17;
            if (((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
               ((0x32 < bVar5 - 0x2d ||
                ((0x4000000002007U >> ((ulonglong)(bVar5 - 0x2d) & 0x3f) & 1) == 0))))
            goto LAB_005082b0;
            if (param_3 <= puVar7) goto LAB_0050968d;
LAB_005081f1:
            bVar5 = *(byte *)((longlong)param_2 + (longlong)((longlong)puVar16 + -1));
            if (((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
               ((0x32 < bVar5 - 0x2d ||
                ((0x4000000002007U >> ((ulonglong)(bVar5 - 0x2d) & 0x3f) & 1) == 0))))
            goto LAB_00508521;
            bVar5 = *(byte *)((longlong)param_2 + (longlong)puVar16);
            if (bVar5 == 0x2f) goto LAB_0050823d;
            goto LAB_00508f10;
          }
LAB_00507e30:
          if (&DAT_00000006 < puVar23) {
            if ((((puVar23 == (ulonglong *)&DAT_00000007) ||
                 (-0x41 < (char)((byte *)((longlong)param_2 + 7))[(longlong)puVar16])) &&
                (bVar5 = (byte)*puVar24, (byte)(((byte)(bVar5 + 0xbf) < 0x1a) << 5 | bVar5) == 0x62)
                ) && (bVar9 = *(byte *)((longlong)puVar24 + 1),
                     (byte)(((byte)(bVar9 + 0xbf) < 0x1a) << 5 | bVar9) == 0x65)) {
              bVar12 = *(byte *)((longlong)puVar24 + 2);
              puVar17 = (ulonglong *)(ulonglong)bVar12;
              if ((((byte)(((byte)(bVar12 + 0xbf) < 0x1a) << 5 | bVar12) != 0x61) ||
                  (bVar12 = *(byte *)((longlong)puVar24 + 3),
                  (byte)(((byte)(bVar12 + 0xbf) < 0x1a) << 5 | bVar12) != 0x72)) ||
                 ((bVar18 = *(byte *)((longlong)puVar24 + 4),
                  (byte)(((byte)(bVar18 + 0xbf) < 0x1a) << 5 | bVar18) != 0x65 ||
                  ((bVar20 = *(byte *)((longlong)puVar24 + 5),
                   (byte)(((byte)(bVar20 + 0xbf) < 0x1a) << 5 | bVar20) != 0x72 ||
                   ((byte)(((byte)(*(byte *)((longlong)puVar24 + 6) + 0xbf) < 0x1a) << 5 |
                          *(byte *)((longlong)puVar24 + 6)) != 0x20)))))) goto LAB_00507f50;
LAB_00508033:
              if (((((puVar23 == (ulonglong *)&DAT_00000007) ||
                    (unaff_RBP = (ulonglong *)&DAT_00000005,
                    -0x41 < (char)((byte *)((longlong)param_2 + 7))[(longlong)puVar16])) &&
                   ((unaff_RBP = (ulonglong *)&DAT_00000005,
                    (byte)(((byte)(bVar5 + 0xbf) < 0x1a) << 5 | bVar5) == 0x62 &&
                    (((byte)(((byte)(bVar9 + 0xbf) < 0x1a) << 5 | bVar9) == 0x65 &&
                     ((byte)(((byte)((byte)puVar17 + 0xbf) < 0x1a) << 5 | (byte)puVar17) == 0x61))))
                   )) && ((byte)(((byte)(bVar12 + 0xbf) < 0x1a) << 5 | bVar12) == 0x72)) &&
                 (((byte)(((byte)(bVar18 + 0xbf) < 0x1a) << 5 | bVar18) == 0x65 &&
                  ((byte)(((byte)(bVar20 + 0xbf) < 0x1a) << 5 | bVar20) == 0x72)))) {
                unaff_RBP = (ulonglong *)
                            ((ulonglong)
                             ((byte)(((byte)(*(byte *)((longlong)puVar24 + 6) + 0xbf) < 0x1a) << 5 |
                                    *(byte *)((longlong)puVar24 + 6)) == 0x20) + 5);
              }
LAB_005080f7:
              puVar11 = (uint *)((longlong)unaff_RBP + (longlong)puVar16);
              puVar15 = (ulonglong *)puVar11;
              if (puVar11 < param_3) {
                do {
                  if (*(byte *)((longlong)param_2 + (longlong)puVar15) != 0x20) goto LAB_00508121;
                  puVar15 = (ulonglong *)((longlong)puVar15 + 1);
                } while (puVar15 < param_3);
              }
              else {
LAB_00508121:
                puVar7 = puVar15;
                if (puVar15 < param_3) {
                  do {
                    bVar5 = *(byte *)((longlong)param_2 + (longlong)puVar7);
                    if ((((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
                        ((0x34 < bVar5 - 0x2b ||
                         ((0x1000000004001dU >> ((ulonglong)(bVar5 - 0x2b) & 0x3f) & 1) == 0)))) &&
                       (bVar5 != 0x7e)) goto LAB_0050817c;
                    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
                  } while (param_3 != puVar7);
                  puVar7 = param_3;
LAB_0050817c:
                  if (puVar15 < puVar7) {
                    if (((puVar11 < puVar16) || (param_3 < puVar11)) ||
                       (((puVar16 != (ulonglong *)0x0 &&
                         ((char)*(byte *)((longlong)param_2 + (longlong)puVar16) < -0x40)) ||
                        (((ulonglong *)puVar11 != param_3 &&
                         ((char)*(byte *)((longlong)param_2 + (longlong)puVar11) < -0x40)))))) {
                      local_d0 = &PTR_s_src_protocol_rs_0078cf20;
                      param_3 = (ulonglong *)puVar11;
                      goto LAB_005096bf;
                    }
                    if ((ulonglong *)((longlong)local_f8 - (longlong)local_e8) < unaff_RBP) {
                      puVar11 = (uint *)0x0;
                      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                      do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                (&local_f8,local_e8,unaff_RBP,1,1);
                      local_100 = lStack_f0;
                    }
                    else {
                    }
                    puVar17 = local_f8;
                    local_c8 = local_e8;
                    (*(code *)PTR_memcpy_00799008)();
                    local_e8 = (ulonglong *)((longlong)local_c8 + (longlong)unaff_RBP);
                    if ((ulonglong)((longlong)puVar17 - (longlong)local_e8) < 0xb) {
                      puVar11 = (uint *)0x0;
                      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                      do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                (&local_f8,local_e8,0xb,1,1);
                      local_100 = lStack_f0;
                    }
                    pbVar1 = (byte *)((longlong)local_e8 + local_100);
                    pbVar1[0] = 0x20;
                    pbVar1[1] = 0x5b;
                    pbVar1[2] = 0x72;
                    pbVar1[3] = 0x65;
                    pbVar1[4] = 100;
                    pbVar1[5] = 0x61;
                    pbVar1[6] = 99;
                    pbVar1[7] = 0x74;
                    pbVar1 = (byte *)((longlong)local_e8 + local_100 + 7);
                    pbVar1[0] = 0x74;
                    pbVar1[1] = 0x65;
                    pbVar1[2] = 100;
                    pbVar1[3] = 0x5d;
                    local_e8 = (ulonglong *)((longlong)local_e8 + 0xb);
                    goto LAB_00509376;
                  }
                }
              }
            }
            else {
LAB_00507f50:
              if (-0x41 < (char)((byte *)((longlong)param_2 + 6))[(longlong)puVar16])
              goto LAB_00507f61;
            }
          }
          else if (puVar23 == (ulonglong *)&DAT_00000006) {
LAB_00507f61:
            bVar5 = (byte)*puVar24;
            if (((byte)(((byte)(bVar5 + 0xbf) < 0x1a) << 5 | bVar5) == 0x62) &&
               (bVar9 = *(byte *)((longlong)puVar24 + 1),
               (byte)(((byte)(bVar9 + 0xbf) < 0x1a) << 5 | bVar9) == 0x61)) {
              bVar12 = *(byte *)((longlong)puVar24 + 2);
              puVar17 = (ulonglong *)(ulonglong)bVar12;
              if (((byte)(((byte)(bVar12 + 0xbf) < 0x1a) << 5 | bVar12) == 0x73) &&
                 (((bVar12 = *(byte *)((longlong)puVar24 + 3),
                   (byte)(((byte)(bVar12 + 0xbf) < 0x1a) << 5 | bVar12) == 0x69 &&
                   (bVar18 = *(byte *)((longlong)puVar24 + 4),
                   (byte)(((byte)(bVar18 + 0xbf) < 0x1a) << 5 | bVar18) == 99)) &&
                  (bVar20 = *(byte *)((longlong)puVar24 + 5),
                  (byte)(((byte)(bVar20 + 0xbf) < 0x1a) << 5 | bVar20) == 0x20)))) {
                unaff_RBP = (ulonglong *)&DAT_00000005;
                if (&DAT_00000006 < puVar23) goto LAB_00508033;
                goto LAB_005080f7;
              }
            }
          }
          unaff_RBP = puVar17;
          if (puVar16 != (ulonglong *)0x0) goto LAB_0050819c;
LAB_005082b0:
          if (&DAT_00000004 < puVar23) {
            if (*(byte *)((longlong)puVar24 + 4) != 0x2e || (uint)*puVar24 != 0x39326179)
            goto LAB_005082db;
            puVar17 = (ulonglong *)0xc;
joined_r0x00508494:
            puVar7 = puVar16;
            if (puVar16 < param_3) {
              do {
                bVar5 = *(byte *)((longlong)param_2 + (longlong)puVar7);
                if ((((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
                    ((0x34 < bVar5 - 0x2b ||
                     ((0x1000000004001dU >> ((ulonglong)(bVar5 - 0x2b) & 0x3f) & 1) == 0)))) &&
                   (bVar5 != 0x7e)) goto LAB_005084f4;
                puVar7 = (ulonglong *)((longlong)puVar7 + 1);
              } while (param_3 != puVar7);
              puVar7 = param_3;
            }
LAB_005084f4:
            puVar11 = (uint *)((longlong)puVar7 - (longlong)puVar16);
            if (puVar17 <= puVar11) {
              if ((ulonglong)((longlong)local_f8 - (longlong)local_e8) < 10) {
                puVar11 = (uint *)0x0;
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_f8,local_e8,10,1,1);
                local_100 = lStack_f0;
              }
              pbVar1 = (byte *)(local_100 + (longlong)local_e8);
              pbVar1[0] = 0x5b;
              pbVar1[1] = 0x72;
              pbVar1[2] = 0x65;
              pbVar1[3] = 100;
              pbVar1[4] = 0x61;
              pbVar1[5] = 99;
              pbVar1[6] = 0x74;
              pbVar1[7] = 0x65;
              pbVar1 = (byte *)(local_100 + 8 + (longlong)local_e8);
              pbVar1[0] = 100;
              pbVar1[1] = 0x5d;
              local_e8 = (ulonglong *)((longlong)local_e8 + 10);
              goto LAB_00509376;
            }
          }
          else if ((ulonglong *)0x2 < puVar23) {
LAB_005082db:
            if (*(byte *)((longlong)puVar24 + 2) == 0x2f && (short)*puVar24 == 0x2f31) {
              puVar17 = (ulonglong *)0xa;
            }
            else if ((puVar23 < &DAT_00000004) || ((uint)*puVar24 != 0x617a4941)) {
              if (*(byte *)((longlong)puVar24 + 2) != 0x2d || (short)*puVar24 != 0x6b73)
              goto LAB_00508505;
              puVar17 = (ulonglong *)&DAT_00000010;
            }
            else {
              puVar17 = (ulonglong *)0x14;
            }
            goto joined_r0x00508494;
          }
LAB_00508505:
          if (puVar16 != (ulonglong *)0x0) {
            if ((ulonglong *)((longlong)puVar16 + -1) < param_3) goto LAB_005081f1;
LAB_0050968d:
            (*(code *)PTR_panic_bounds_check_00799520)();
            goto LAB_00509704;
          }
LAB_00508521:
          local_68 = 2;
          local_60 = &PTR_s_a_0078cde8;
          local_58 = 10;
          local_50[0] = 1;
          local_48 = &PTR_s_tokenkey_0078ce88;
          local_40 = 2;
          local_38 = 0;
          local_78 = (byte *)((longlong)puVar16 + 1);
          local_88 = (longlong)local_98 - (longlong)puVar16;
          local_90 = local_a0 + (longlong)puVar16;
          local_b8 = (byte *)((longlong)param_2 + (longlong)puVar16);
          lVar19 = 0;
          local_c8 = local_e8;
          do {
            local_70 = lVar19 + 1;
            local_d1 = local_50[lVar19 * 0x18];
            if (local_d1 == 2) break;
            local_80 = local_70;
            if (*(longlong *)(local_50 + lVar19 * 0x18 + -8) != 0) {
              ppuVar21 = (&local_60)[lVar19 * 3];
              ppuVar22 = ppuVar21 + *(longlong *)(local_50 + lVar19 * 0x18 + -8) * 2;
LAB_0050865d:
              puVar17 = (ulonglong *)ppuVar21[1];
              if (puVar17 <= puVar23) {
                if (puVar17 == (ulonglong *)0x0) {
LAB_005086c0:
                  puVar7 = (ulonglong *)0x0;
                  do {
                    if (puVar17 == puVar7) {
                      if ((ulonglong *)((longlong)puVar16 + (longlong)puVar17) < local_e0)
                      goto LAB_00508723;
                      break;
                    }
                    pbVar1 = (byte *)((longlong)puVar24 + (longlong)puVar7);
                    bVar5 = (*ppuVar21)[(longlong)puVar7];
                    puVar7 = (ulonglong *)((longlong)puVar7 + 1);
                  } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                           (byte)(((byte)(bVar5 + 0xbf) < 0x1a) << 5 | bVar5));
                }
                else if ((puVar23 <= puVar17) ||
                        (-0x41 < (char)*(byte *)((longlong)puVar24 + (longlong)puVar17))) {
                  if (puVar17 < &DAT_00000010) goto LAB_005086c0;
                  cVar4 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                                    (puVar24,puVar17,*ppuVar21,puVar17);
                  if (((ulonglong *)((longlong)puVar16 + (longlong)puVar17) < local_e0) &&
                     (cVar4 != '\0')) {
LAB_00508723:
                    puVar15 = (ulonglong *)(local_78 + (longlong)puVar17);
                    lVar19 = 1;
                    puVar7 = (ulonglong *)((longlong)puVar16 + (longlong)puVar17);
                    do {
                      bVar5 = *(byte *)((longlong)param_2 + (longlong)puVar7);
                      if (bVar5 != 0x20) {
                        if (bVar5 == 0x3d) goto LAB_00508780;
                        if ((bVar5 == 0x3a & local_d1) != 0) goto LAB_00508780;
                        break;
                      }
                      puVar7 = (ulonglong *)((longlong)puVar7 + 1);
                      puVar15 = (ulonglong *)((longlong)puVar15 + 1);
                      lVar19 = lVar19 + 1;
                    } while (puVar7 < local_e0);
                  }
                }
              }
              goto LAB_00508650;
            }
LAB_005085c0:
            lVar19 = 1;
          } while (local_80 != 2);
          bVar5 = *(byte *)((longlong)param_2 + (longlong)puVar16);
          param_3 = local_e0;
          if (bVar5 != 0x2f) goto LAB_00508f10;
LAB_0050823d:
          if ((puVar16 == (ulonglong *)0x0) ||
             (((bVar9 = ((byte *)((longlong)param_2 + -1))[(longlong)puVar16],
               9 < (byte)(bVar9 - 0x30) && (0x19 < (byte)((bVar9 & 0xdf) + 0xbf))) &&
              ((0x32 < bVar9 - 0x2d ||
               ((0x4000000002007U >> ((ulonglong)(bVar9 - 0x2d) & 0x3f) & 1) == 0)))))) {
            if (&DAT_00000005 < puVar23) {
              uVar13 = (uint)*puVar24 ^ 0x6d6f682f;
              puVar11 = (uint *)(ulonglong)uVar13;
              if ((*(short *)((longlong)puVar24 + 4) != 0x2f65 || uVar13 != 0) &&
                 (uVar13 = (uint)*puVar24 ^ 0x6f6f722f, puVar11 = (uint *)(ulonglong)uVar13,
                 *(short *)((longlong)puVar24 + 4) != 0x2f74 || uVar13 != 0)) goto LAB_00508377;
            }
            else {
              if (puVar23 != (ulonglong *)&DAT_00000005) goto LAB_00508f10;
LAB_00508377:
              uVar13 = (uint)*puVar24 ^ 0x706d742f;
              puVar11 = (uint *)(ulonglong)uVar13;
              if (((((*(byte *)((longlong)puVar24 + 4) != 0x2f || uVar13 != 0) &&
                    (uVar13 = (uint)*puVar24 ^ 0x7261762f, puVar11 = (uint *)(ulonglong)uVar13,
                    *(byte *)((longlong)puVar24 + 4) != 0x2f || uVar13 != 0)) &&
                   (uVar13 = (uint)*puVar24 ^ 0x6374652f, puVar11 = (uint *)(ulonglong)uVar13,
                   *(byte *)((longlong)puVar24 + 4) != 0x2f || uVar13 != 0)) &&
                  (uVar13 = (uint)*puVar24 ^ 0x746e6d2f, puVar11 = (uint *)(ulonglong)uVar13,
                  *(byte *)((longlong)puVar24 + 4) != 0x2f || uVar13 != 0)) &&
                 (((puVar23 < &DAT_00000007 ||
                   ((uVar13 = (uint)*puVar24 ^ 0x6573552f, puVar11 = (uint *)(ulonglong)uVar13,
                    *(int *)((longlong)puVar24 + 3) != 0x2f737265 || uVar13 != 0 &&
                    ((puVar23 < &DAT_00000009 ||
                     (puVar11 = (uint *)(*puVar24 ^ 0x657461766972702f),
                     (byte)puVar24[1] != 0x2f || (ulonglong *)puVar11 != (ulonglong *)0x0)))))) &&
                  (uVar13 = (uint)*puVar24 ^ 0x74706f2f, puVar11 = (uint *)(ulonglong)uVar13,
                  *(byte *)((longlong)puVar24 + 4) != 0x2f || uVar13 != 0)))) {
                if (&DAT_00000006 <= puVar23) {
                  uVar13 = (uint)*puVar24 ^ 0x6f72702f;
                  puVar11 = (uint *)(ulonglong)uVar13;
                  if (!(*(short *)((longlong)puVar24 + 4) != 0x2f63 || uVar13 != 0))
                  goto LAB_00509300;
                }
LAB_00508f10:
                if (puVar16 != (ulonglong *)0x0) goto LAB_00508f18;
                goto LAB_00508f60;
              }
            }
LAB_00509300:
            if (param_3 <= puVar16) goto switchD_00509337_caseD_9;
            goto LAB_0050931c;
          }
LAB_00508f18:
          if (param_3 <= (ulonglong *)((longlong)puVar16 + -1)) goto LAB_0050968d;
          bVar9 = *(byte *)((longlong)param_2 + (longlong)puVar16 + -1);
          puVar11 = (uint *)(ulonglong)bVar9;
          if ((((byte)(bVar9 - 0x30) < 10) || ((byte)((bVar9 & 0xdf) + 0xbf) < 0x1a)) ||
             ((puVar11 = (uint *)(ulonglong)(bVar9 - 0x2d), bVar9 - 0x2d < 0x33 &&
              ((0x4000000002007U >> ((ulonglong)puVar11 & 0x3f) & 1) != 0)))) {
LAB_00508fc0:
            if (puVar23 == (ulonglong *)0x0) {
              (*(code *)PTR_expect_failed_00799440)(puVar11,&PTR_s_src_protocol_rs_0078cf08);
LAB_00509704:
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
LAB_00508f60:
            puVar11 = (uint *)((longlong)puVar16 + 3);
            if ((puVar11 <= param_3) && ((byte)((bVar5 & 0xdf) + 0xbf) < 0x1a)) {
              if (param_3 <= (ulonglong *)((longlong)puVar16 + 1)) {
LAB_005096f4:
                (*(code *)PTR_panic_bounds_check_00799520)(puVar11,local_c0);
                goto LAB_00509704;
              }
              if (*(byte *)((longlong)param_2 + (longlong)puVar16 + 1) == 0x3a) {
                if (param_3 <= (ulonglong *)((longlong)puVar16 + 2)) {
                  local_c0 = &PTR_s_src_protocol_rs_0078cef0;
                  goto LAB_005096f4;
                }
                if (*(byte *)((longlong)param_2 + (longlong)puVar16 + 2) == 0x5c) goto LAB_0050938b;
              }
            }
            if (puVar23 < &DAT_00000007) goto LAB_00508fc0;
            uVar13 = *(uint *)((longlong)puVar24 + 3) ^ 0x5c246c73 | (uint)*puVar24 ^ 0x73775c5c;
            puVar11 = (uint *)(ulonglong)uVar13;
            if ((uVar13 == 0) ||
               ((&DAT_0000000f < puVar23 &&
                (auVar27[0] = -((byte)*puVar24 == DAT_00183880),
                auVar27[1] = -(*(byte *)((longlong)puVar24 + 1) == UNK_00183881),
                auVar27[2] = -(*(byte *)((longlong)puVar24 + 2) == UNK_00183882),
                auVar27[3] = -(*(byte *)((longlong)puVar24 + 3) == UNK_00183883),
                auVar27[4] = -(*(byte *)((longlong)puVar24 + 4) == UNK_00183884),
                auVar27[5] = -(*(byte *)((longlong)puVar24 + 5) == UNK_00183885),
                auVar27[6] = -(*(byte *)((longlong)puVar24 + 6) == UNK_00183886),
                auVar27[7] = -(*(byte *)((longlong)puVar24 + 7) == UNK_00183887),
                auVar27[8] = -((byte)puVar24[1] == UNK_00183888),
                auVar27[9] = -(*(byte *)((longlong)puVar24 + 9) == UNK_00183889),
                auVar27[10] = -(*(byte *)((longlong)puVar24 + 10) == UNK_0018388a),
                auVar27[0xb] = -(*(byte *)((longlong)puVar24 + 0xb) == UNK_0018388b),
                auVar27[0xc] = -(*(byte *)((longlong)puVar24 + 0xc) == UNK_0018388c),
                auVar27[0xd] = -(*(byte *)((longlong)puVar24 + 0xd) == UNK_0018388d),
                auVar27[0xe] = -(*(byte *)((longlong)puVar24 + 0xe) == UNK_0018388e),
                auVar27[0xf] = -(*(byte *)((longlong)puVar24 + 0xf) == UNK_0018388f),
                (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff)))) goto LAB_0050938b;
          }
          puVar17 = local_e8;
          bVar5 = (byte)*puVar24;
          uVar13 = (uint)bVar5;
          if ((char)bVar5 < '\0') {
            uVar6 = bVar5 & 0x1f;
            uVar13 = *(byte *)((longlong)puVar24 + 1) & 0x3f;
            if (bVar5 < 0xe0) {
              uVar13 = uVar6 << 6 | uVar13;
            }
            else {
              uVar13 = *(byte *)((longlong)puVar24 + 2) & 0x3f | uVar13 << 6;
              if (bVar5 < 0xf0) {
                uVar13 = uVar13 | uVar6 << 0xc;
              }
              else {
                uVar13 = *(byte *)((longlong)puVar24 + 3) & 0x3f | uVar13 << 6 | (bVar5 & 7) << 0x12
                ;
              }
            }
            if (uVar13 < 0x80) goto LAB_00509060;
            uVar25 = 4 - (ulonglong)(uVar13 < 0x10000);
            uVar14 = uVar25;
            if (uVar13 < 0x800) {
              uVar14 = 2;
            }
            if ((ulonglong)((longlong)local_f8 - (longlong)local_e8) < uVar14) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_f8,local_e8,uVar14,1,1);
            }
            bVar5 = (byte)uVar13 & 0x3f | 0x80;
            bVar9 = (byte)(uVar13 >> 6);
            if (uVar13 < 0x800) {
              *(byte *)(lStack_f0 + (longlong)puVar17) = bVar9 | 0xc0;
              *(byte *)(lStack_f0 + 1 + (longlong)puVar17) = bVar5;
              local_e8 = (ulonglong *)((longlong)puVar17 + 2);
              uVar25 = 2;
            }
            else {
              bVar9 = bVar9 & 0x3f | 0x80;
              bVar12 = (byte)(uVar13 >> 0xc);
              if (uVar13 < 0x10000) {
                bVar12 = bVar12 | 0xe0;
                lVar19 = 3;
                bVar18 = bVar9;
              }
              else {
                bVar18 = bVar12 & 0x3f | 0x80;
                bVar12 = (byte)(uVar13 >> 0x12) | 0xf0;
                *(byte *)(lStack_f0 + 3 + (longlong)puVar17) = bVar5;
                lVar19 = 4;
                bVar5 = bVar9;
              }
              *(byte *)(lStack_f0 + (longlong)puVar17) = bVar12;
              *(byte *)(lStack_f0 + 1 + (longlong)puVar17) = bVar18;
              *(byte *)(lStack_f0 + 2 + (longlong)puVar17) = bVar5;
              local_e8 = (ulonglong *)((longlong)puVar17 + lVar19);
            }
          }
          else {
LAB_00509060:
            if (local_f8 == local_e8) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_f8,local_f8,1,1,1);
            }
            *(byte *)(lStack_f0 + (longlong)puVar17) = (byte)uVar13;
            puVar17 = (ulonglong *)((longlong)puVar17 + 1);
            uVar25 = 1;
            local_e8 = puVar17;
          }
          puVar16 = (ulonglong *)((longlong)puVar16 + uVar25);
          local_100 = lStack_f0;
          if (param_3 <= puVar16) goto LAB_0050961f;
        } while( true );
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
  while( true ) {
    bVar5 = *(byte *)((longlong)param_2 + (longlong)puVar26);
    unaff_RBP = (ulonglong *)(ulonglong)bVar5;
    puVar15 = (ulonglong *)((longlong)puVar26 + 1);
    lVar19 = lVar8 + 1;
    if (bVar5 != 0x20) break;
LAB_00508780:
    puVar26 = puVar15;
    lVar8 = lVar19;
    puVar7 = puVar26;
    if (local_e0 <= puVar26) {
      bVar3 = false;
      uVar14 = 0;
      goto LAB_00508917;
    }
  }
  if ((bVar5 == 0x22) || (bVar5 == 0x27)) {
    puVar7 = puVar15;
    puVar26 = puVar15;
    if (puVar15 < local_e0) {
      do {
        bVar9 = ((byte *)((longlong)puVar17 + (longlong)local_90))[lVar8];
        if (((((9 < (byte)(bVar9 - 0x30)) && (0x19 < (byte)((bVar9 & 0xdf) + 0xbf))) &&
             ((0x34 < bVar9 - 0x2b ||
              ((0x1000000004001dU >> ((ulonglong)(bVar9 - 0x2b) & 0x3f) & 1) == 0)))) &&
            (bVar9 != 0x7e)) || (bVar9 == bVar5)) {
          bVar3 = true;
          uVar14 = (longlong)puVar7 - (longlong)puVar15;
          goto joined_r0x00508840;
        }
        puVar7 = (ulonglong *)((longlong)puVar7 + 1);
        lVar8 = lVar8 + 1;
      } while (local_88 - (longlong)puVar17 != lVar8);
      bVar3 = false;
      uVar14 = (longlong)local_e0 - (longlong)puVar15;
      puVar7 = local_e0;
joined_r0x00508840:
      if (puVar7 < puVar15) goto LAB_0050964d;
    }
    else {
      bVar3 = false;
      uVar14 = 0;
    }
LAB_00508917:
    puVar15 = puVar26;
    if ((puVar7 <= local_e0) &&
       ((puVar17 = local_e0, puVar26 == local_e0 ||
        ((-0x41 < (char)*(byte *)((longlong)param_2 + (longlong)puVar26) &&
         ((puVar17 = param_2, puVar7 == local_e0 ||
          (-0x41 < (char)*(byte *)((longlong)param_2 + (longlong)puVar7))))))))) {
      if (uVar14 < 6) goto LAB_00508650;
      if (uVar14 == 6) {
        iVar10 = *(byte *)((longlong)param_2 + (longlong)puVar26) - 0x41;
        bVar5 = ((byte)iVar10 < 0x1a) << 5 | *(byte *)((longlong)param_2 + (longlong)puVar26);
        puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5);
        if ((((bVar5 == 0x62) &&
             (iVar10 = ((byte *)((longlong)param_2 + 1))[(longlong)puVar26] - 0x41,
             bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                     ((byte *)((longlong)param_2 + 1))[(longlong)puVar26],
             puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
             bVar5 == 0x65)) &&
            (iVar10 = ((byte *)((longlong)param_2 + 2))[(longlong)puVar26] - 0x41,
            bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                    ((byte *)((longlong)param_2 + 2))[(longlong)puVar26],
            puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
            bVar5 == 0x61)) &&
           (((iVar10 = ((byte *)((longlong)param_2 + 3))[(longlong)puVar26] - 0x41,
             bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                     ((byte *)((longlong)param_2 + 3))[(longlong)puVar26],
             puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
             bVar5 == 0x72 &&
             (bVar5 = *(byte *)((longlong)((longlong)param_2 + 4) + (longlong)puVar26),
             iVar10 = bVar5 - 0x41, bVar5 = ((byte)iVar10 < 0x1a) << 5 | bVar5,
             puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
             bVar5 == 0x65)) &&
            (iVar10 = ((byte *)((longlong)param_2 + 5))[(longlong)puVar26] - 0x41,
            bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                    ((byte *)((longlong)param_2 + 5))[(longlong)puVar26],
            puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
            bVar5 == 0x72)))) goto LAB_00508650;
      }
      else if (uVar14 == 7) {
        puVar17 = (ulonglong *)0x0;
        bVar5 = ((byte)(*(byte *)((longlong)param_2 + (longlong)puVar26) + 0xbf) < 0x1a) << 5 |
                *(byte *)((longlong)param_2 + (longlong)puVar26);
        if (bVar5 == 0x65) {
          iVar10 = ((byte *)((longlong)param_2 + 1))[(longlong)puVar26] - 0x41;
          bVar5 = ((byte)iVar10 < 0x1a) << 5 | ((byte *)((longlong)param_2 + 1))[(longlong)puVar26];
          puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5);
          if (((bVar5 == 0x78) &&
              (iVar10 = ((byte *)((longlong)param_2 + 2))[(longlong)puVar26] - 0x41,
              bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                      ((byte *)((longlong)param_2 + 2))[(longlong)puVar26],
              puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
              bVar5 == 0x70)) &&
             ((iVar10 = ((byte *)((longlong)param_2 + 3))[(longlong)puVar26] - 0x41,
              bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                      ((byte *)((longlong)param_2 + 3))[(longlong)puVar26],
              puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
              bVar5 == 0x69 &&
              ((bVar5 = *(byte *)((longlong)((longlong)param_2 + 4) + (longlong)puVar26),
               iVar10 = bVar5 - 0x41, bVar5 = ((byte)iVar10 < 0x1a) << 5 | bVar5,
               puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
               bVar5 == 0x72 &&
               (iVar10 = ((byte *)((longlong)param_2 + 5))[(longlong)puVar26] - 0x41,
               bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                       ((byte *)((longlong)param_2 + 5))[(longlong)puVar26],
               puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
               bVar5 == 0x65)))))) {
LAB_00508627:
            bVar5 = ((byte *)((longlong)param_2 + 6))[(longlong)puVar26];
LAB_00508631:
            bVar9 = ((byte)(bVar5 - 0x41) < 0x1a) << 5 | bVar5;
            puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)(bVar5 - 0x41 >> 8),bVar9);
            if (bVar9 == 100) {
LAB_00508650:
              ppuVar21 = ppuVar21 + 2;
              if (ppuVar21 == ppuVar22) goto LAB_005085c0;
              goto LAB_0050865d;
            }
          }
        }
        else if (bVar5 == 0x6d) {
          iVar10 = ((byte *)((longlong)param_2 + 1))[(longlong)puVar26] - 0x41;
          bVar5 = ((byte)iVar10 < 0x1a) << 5 | ((byte *)((longlong)param_2 + 1))[(longlong)puVar26];
          puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5);
          if (((((bVar5 == 0x69) &&
                (iVar10 = ((byte *)((longlong)param_2 + 2))[(longlong)puVar26] - 0x41,
                bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                        ((byte *)((longlong)param_2 + 2))[(longlong)puVar26],
                puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
                bVar5 == 0x73)) &&
               (iVar10 = ((byte *)((longlong)param_2 + 3))[(longlong)puVar26] - 0x41,
               bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                       ((byte *)((longlong)param_2 + 3))[(longlong)puVar26],
               puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
               bVar5 == 0x73)) &&
              ((bVar5 = *(byte *)((longlong)((longlong)param_2 + 4) + (longlong)puVar26),
               iVar10 = bVar5 - 0x41, bVar5 = ((byte)iVar10 < 0x1a) << 5 | bVar5,
               puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
               bVar5 == 0x69 &&
               (iVar10 = ((byte *)((longlong)param_2 + 5))[(longlong)puVar26] - 0x41,
               bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                       ((byte *)((longlong)param_2 + 5))[(longlong)puVar26],
               puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
               bVar5 == 0x6e)))) &&
             (iVar10 = ((byte *)((longlong)param_2 + 6))[(longlong)puVar26] - 0x41,
             bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                     ((byte *)((longlong)param_2 + 6))[(longlong)puVar26],
             puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
             bVar5 == 0x67)) goto LAB_00508650;
        }
        else if (((bVar5 == 0x69) &&
                 (iVar10 = ((byte *)((longlong)param_2 + 1))[(longlong)puVar26] - 0x41,
                 bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                         ((byte *)((longlong)param_2 + 1))[(longlong)puVar26],
                 puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
                 bVar5 == 0x6e)) &&
                ((iVar10 = ((byte *)((longlong)param_2 + 2))[(longlong)puVar26] - 0x41,
                 bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                         ((byte *)((longlong)param_2 + 2))[(longlong)puVar26],
                 puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
                 bVar5 == 0x76 &&
                 (((iVar10 = ((byte *)((longlong)param_2 + 3))[(longlong)puVar26] - 0x41,
                   bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                           ((byte *)((longlong)param_2 + 3))[(longlong)puVar26],
                   puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
                   bVar5 == 0x61 &&
                   (bVar5 = *(byte *)((longlong)((longlong)param_2 + 4) + (longlong)puVar26),
                   iVar10 = bVar5 - 0x41, bVar5 = ((byte)iVar10 < 0x1a) << 5 | bVar5,
                   puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
                   bVar5 == 0x6c)) &&
                  (iVar10 = ((byte *)((longlong)param_2 + 5))[(longlong)puVar26] - 0x41,
                  bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                          ((byte *)((longlong)param_2 + 5))[(longlong)puVar26],
                  puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
                  bVar5 == 0x69)))))) goto LAB_00508627;
      }
      else if (uVar14 == 8) {
        puVar17 = (ulonglong *)0x0;
        bVar5 = ((byte)(*(byte *)((longlong)param_2 + (longlong)puVar26) + 0xbf) < 0x1a) << 5 |
                *(byte *)((longlong)param_2 + (longlong)puVar26);
        if (bVar5 == 0x65) {
          iVar10 = ((byte *)((longlong)param_2 + 1))[(longlong)puVar26] - 0x41;
          bVar5 = ((byte)iVar10 < 0x1a) << 5 | ((byte *)((longlong)param_2 + 1))[(longlong)puVar26];
          puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5);
          if (((bVar5 == 0x78) &&
              (iVar10 = ((byte *)((longlong)param_2 + 2))[(longlong)puVar26] - 0x41,
              bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                      ((byte *)((longlong)param_2 + 2))[(longlong)puVar26],
              puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
              bVar5 == 0x70)) &&
             ((iVar10 = ((byte *)((longlong)param_2 + 3))[(longlong)puVar26] - 0x41,
              bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                      ((byte *)((longlong)param_2 + 3))[(longlong)puVar26],
              puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
              bVar5 == 0x65 &&
              ((bVar5 = *(byte *)((longlong)((longlong)param_2 + 4) + (longlong)puVar26),
               iVar10 = bVar5 - 0x41, bVar5 = ((byte)iVar10 < 0x1a) << 5 | bVar5,
               puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
               bVar5 == 99 &&
               (iVar10 = ((byte *)((longlong)param_2 + 5))[(longlong)puVar26] - 0x41,
               bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                       ((byte *)((longlong)param_2 + 5))[(longlong)puVar26],
               puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
               bVar5 == 0x74)))))) {
LAB_00508d48:
            iVar10 = ((byte *)((longlong)param_2 + 6))[(longlong)puVar26] - 0x41;
            bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                    ((byte *)((longlong)param_2 + 6))[(longlong)puVar26];
            puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5);
            if (bVar5 == 0x65) {
              bVar5 = ((byte *)((longlong)param_2 + 7))[(longlong)puVar26];
              goto LAB_00508631;
            }
          }
        }
        else if ((bVar5 == 0x72) &&
                (iVar10 = ((byte *)((longlong)param_2 + 1))[(longlong)puVar26] - 0x41,
                bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                        ((byte *)((longlong)param_2 + 1))[(longlong)puVar26],
                puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
                bVar5 == 0x65)) {
          if ((((((byte)(((byte)(((byte *)((longlong)param_2 + 2))[(longlong)puVar26] + 0xbf) < 0x1a
                         ) << 5 | ((byte *)((longlong)param_2 + 2))[(longlong)puVar26]) == 100) &&
                ((byte)(((byte)(((byte *)((longlong)param_2 + 3))[(longlong)puVar26] + 0xbf) < 0x1a)
                        << 5 | ((byte *)((longlong)param_2 + 3))[(longlong)puVar26]) == 0x61)) &&
               (bVar5 = *(byte *)((longlong)((longlong)param_2 + 4) + (longlong)puVar26),
               (byte)(((byte)(bVar5 + 0xbf) < 0x1a) << 5 | bVar5) == 99)) &&
              (((byte)(((byte)(((byte *)((longlong)param_2 + 5))[(longlong)puVar26] + 0xbf) < 0x1a)
                       << 5 | ((byte *)((longlong)param_2 + 5))[(longlong)puVar26]) == 0x74 &&
               ((byte)(((byte)(((byte *)((longlong)param_2 + 6))[(longlong)puVar26] + 0xbf) < 0x1a)
                       << 5 | ((byte *)((longlong)param_2 + 6))[(longlong)puVar26]) == 0x65)))) &&
             ((byte)(((byte)(((byte *)((longlong)param_2 + 7))[(longlong)puVar26] + 0xbf) < 0x1a) <<
                     5 | ((byte *)((longlong)param_2 + 7))[(longlong)puVar26]) == 100))
          goto LAB_00508650;
          iVar10 = ((byte *)((longlong)param_2 + 2))[(longlong)puVar26] - 0x41;
          bVar5 = ((byte)iVar10 < 0x1a) << 5 | ((byte *)((longlong)param_2 + 2))[(longlong)puVar26];
          puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5);
          if (((bVar5 == 0x71) &&
              (iVar10 = ((byte *)((longlong)param_2 + 3))[(longlong)puVar26] - 0x41,
              bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                      ((byte *)((longlong)param_2 + 3))[(longlong)puVar26],
              puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
              bVar5 == 0x75)) &&
             ((bVar5 = *(byte *)((longlong)((longlong)param_2 + 4) + (longlong)puVar26),
              iVar10 = bVar5 - 0x41, bVar5 = ((byte)iVar10 < 0x1a) << 5 | bVar5,
              puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
              bVar5 == 0x69 &&
              (iVar10 = ((byte *)((longlong)param_2 + 5))[(longlong)puVar26] - 0x41,
              bVar5 = ((byte)iVar10 < 0x1a) << 5 |
                      ((byte *)((longlong)param_2 + 5))[(longlong)puVar26],
              puVar17 = (ulonglong *)(ulonglong)CONCAT31((int3)((uint)iVar10 >> 8),bVar5),
              bVar5 == 0x72)))) goto LAB_00508d48;
        }
      }
      uVar14 = (longlong)puVar26 - (longlong)puVar16;
      if (puVar26 < puVar16) {
        ppuVar21 = &PTR_s_src_protocol_rs_0078cec0;
        puVar7 = puVar26;
      }
      else if ((puVar16 == (ulonglong *)0x0) ||
              (-0x41 < (char)*(byte *)((longlong)param_2 + (longlong)puVar16))) {
        if (-0x41 < (char)*(byte *)((longlong)param_2 + (longlong)puVar26)) {
          puVar24 = local_c8;
          if ((ulonglong)((longlong)local_f8 - (longlong)local_c8) < uVar14) {
            puVar17 = (ulonglong *)0x0;
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_f8,local_c8,uVar14,1,1);
            puVar24 = local_e8;
          }
          if (puVar26 != puVar16) {
            (*(code *)PTR_memcpy_00799008)();
          }
          local_e8 = (ulonglong *)((longlong)puVar24 + uVar14);
          if ((ulonglong)((longlong)local_f8 - (longlong)local_e8) < 10) {
            puVar17 = (ulonglong *)0x0;
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_f8,local_e8,10,1,1);
          }
          pbVar1 = (byte *)((longlong)local_e8 + lStack_f0);
          pbVar1[0] = 0x5b;
          pbVar1[1] = 0x72;
          pbVar1[2] = 0x65;
          pbVar1[3] = 100;
          pbVar1[4] = 0x61;
          pbVar1[5] = 99;
          pbVar1[6] = 0x74;
          pbVar1[7] = 0x65;
          ((byte *)((longlong)local_e8 + lStack_f0 + 8))[0] = 100;
          ((byte *)((longlong)local_e8 + lStack_f0 + 8))[1] = 0x5d;
          puVar16 = (ulonglong *)((longlong)local_e8 + 10);
          local_e8 = puVar16;
          if ((bVar3) &&
             (bVar5 = (byte)unaff_RBP, *(byte *)((longlong)param_2 + (longlong)puVar7) == bVar5)) {
            if ((char)bVar5 < '\0') {
              if ((ulonglong)((longlong)local_f8 - (longlong)puVar16) < 2) {
                puVar17 = (ulonglong *)0x0;
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_f8,puVar16,2,1,1);
              }
              bVar9 = bVar5 >> 6 | 0xc0;
              unaff_RBP = (ulonglong *)(ulonglong)bVar9;
              *(byte *)(lStack_f0 + (longlong)puVar16) = bVar9;
              *(byte *)(lStack_f0 + 1 + (longlong)puVar16) = bVar5 & 0xbf;
              lVar19 = 2;
            }
            else {
              if (local_f8 == puVar16) {
                puVar17 = (ulonglong *)0x0;
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_f8,puVar16,1,1,1);
              }
              *(byte *)(lStack_f0 + (longlong)puVar16) = bVar5;
              lVar19 = 1;
            }
            local_e8 = (ulonglong *)((longlong)puVar16 + lVar19);
            puVar7 = (ulonglong *)((longlong)puVar7 + 1);
          }
          local_a8 = CONCAT71((int7)((ulonglong)puVar17 >> 8),1);
          local_100 = lStack_f0;
          param_3 = local_e0;
          if (local_e0 <= puVar7) goto LAB_0050961f;
          goto LAB_00507db0;
        }
        ppuVar21 = &PTR_s_src_protocol_rs_0078cec0;
        puVar7 = puVar26;
      }
      else {
        ppuVar21 = &PTR_s_src_protocol_rs_0078cec0;
        puVar7 = puVar26;
      }
      goto LAB_0050965b;
    }
  }
  else {
    do {
      bVar5 = ((byte *)((longlong)puVar17 + (longlong)local_b8))[lVar8];
      if ((((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
          ((0x34 < bVar5 - 0x2b ||
           ((0x1000000004001dU >> ((ulonglong)(bVar5 - 0x2b) & 0x3f) & 1) == 0)))) &&
         (bVar5 != 0x7e)) {
        uVar14 = (longlong)puVar7 - (longlong)puVar26;
        goto joined_r0x005088e6;
      }
      puVar7 = (ulonglong *)((longlong)puVar7 + 1);
      lVar8 = lVar8 + 1;
    } while ((longlong)local_e0 - ((longlong)puVar16 + (longlong)puVar17) != lVar8);
    uVar14 = (longlong)local_e0 - (longlong)puVar26;
    puVar7 = local_e0;
joined_r0x005088e6:
    bVar3 = false;
    puVar15 = puVar26;
    if (puVar26 <= puVar7) goto LAB_00508917;
  }
LAB_0050964d:
  puVar16 = puVar15;
  ppuVar21 = &PTR_s_src_protocol_rs_0078cea8;
LAB_0050965b:
  (*(code *)PTR_slice_error_fail_00799408)(puVar7,puVar16,ppuVar21);
  goto LAB_00509704;
LAB_0050931c:
  do {
    puVar11 = &switchD_00509337::switchdataD_00198be0;
    switch(*(byte *)((longlong)param_2 + (longlong)puVar16)) {
    case 9:
    case 10:
    case 0xc:
    case 0xd:
    case 0x20:
    case 0x22:
    case 0x27:
    case 0x29:
    case 0x2c:
    case 0x3b:
    case 0x3c:
    case 0x3e:
    case 0x5d:
    case 0x60:
    case 0x7d:
      goto switchD_00509337_caseD_9;
    }
    puVar16 = (ulonglong *)((longlong)puVar16 + 1);
  } while (param_3 != puVar16);
  puVar16 = param_3;
switchD_00509337_caseD_9:
  puVar7 = puVar16;
  if (0xe < (ulonglong)((longlong)local_f8 - (longlong)local_e8)) goto LAB_00509350;
  puVar11 = (uint *)0x0;
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(&local_f8,local_e8,0xf,1,1);
  goto LAB_00509557;
LAB_0050938b:
  if (puVar16 < param_3) {
    do {
      puVar11 = &switchD_005093be::switchdataD_00198a0c;
      switch(*(byte *)((longlong)param_2 + (longlong)puVar16)) {
      case 9:
      case 10:
      case 0xc:
      case 0xd:
      case 0x20:
      case 0x22:
      case 0x27:
      case 0x29:
      case 0x2c:
      case 0x3b:
      case 0x3c:
      case 0x3e:
      case 0x5d:
      case 0x60:
      case 0x7d:
        goto switchD_005093be_caseD_9;
      }
      puVar16 = (ulonglong *)((longlong)puVar16 + 1);
    } while (param_3 != puVar16);
    puVar16 = param_3;
  }
switchD_005093be_caseD_9:
  puVar7 = puVar16;
  if (0xe < (ulonglong)((longlong)local_f8 - (longlong)local_e8)) goto LAB_00509350;
  puVar11 = (uint *)0x0;
  <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
  <alloc[12e961f32105355]::alloc::Global>(&local_f8,local_e8,0xf,1,1);
LAB_00509557:
  puVar7 = puVar16;
LAB_00509350:
  pbVar1 = (byte *)(lStack_f0 + 7 + (longlong)local_e8);
  pbVar1[0] = 0x65;
  pbVar1[1] = 100;
  pbVar1[2] = 0x2d;
  pbVar1[3] = 0x70;
  pbVar1[4] = 0x61;
  pbVar1[5] = 0x74;
  pbVar1[6] = 0x68;
  pbVar1[7] = 0x5d;
  pbVar1 = (byte *)(lStack_f0 + (longlong)local_e8);
  pbVar1[0] = 0x5b;
  pbVar1[1] = 0x72;
  pbVar1[2] = 0x65;
  pbVar1[3] = 100;
  pbVar1[4] = 0x61;
  pbVar1[5] = 99;
  pbVar1[6] = 0x74;
  pbVar1[7] = 0x65;
  local_e8 = (ulonglong *)((longlong)local_e8 + 0xf);
  local_100 = lStack_f0;
LAB_00509376:
  local_a8 = CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
  if (param_3 <= puVar7) {
LAB_0050961f:
    local_b0[2] = local_e8;
    *local_b0 = local_f8;
    local_b0[1] = lStack_f0;
    *(char *)(local_b0 + 3) = (char)local_a8;
    return local_b0;
  }
  goto LAB_00507db0;
}


