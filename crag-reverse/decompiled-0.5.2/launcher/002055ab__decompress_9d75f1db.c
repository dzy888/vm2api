// 002055ab decompress

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* miniz_oxide[d073f249698f1019]::inflate::core::decompress */

ulonglong ******* __rustcall
miniz_oxide[d073f249698f1019]::inflate::core::decompress
          (undefined4 param_1,ulonglong *******param_2,ulonglong param_3,ulonglong *******param_4,
          ulonglong *******param_5,longlong param_6,ulonglong *******param_7,
          ulonglong *******param_8,uint param_9)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *******pppppppuVar6;
  byte bVar7;
  byte *pbVar8;
  ulonglong ******ppppppuVar9;
  ulonglong *******pppppppuVar10;
  undefined **ppuVar11;
  longlong lVar12;
  byte bVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  undefined **ppuVar17;
  ulonglong *******pppppppuVar18;
  uint uVar19;
  uint uVar20;
  ulonglong *******extraout_RDX;
  ulonglong *******extraout_RDX_00;
  undefined7 uVar25;
  uint7 uVar26;
  ulonglong *******extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulonglong *******extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar21;
  undefined **ppuVar22;
  ulonglong *******pppppppuVar23;
  undefined **ppuVar24;
  ulonglong *******pppppppuVar27;
  ulonglong uVar28;
  undefined **ppuVar29;
  int iVar30;
  ulonglong *******pppppppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  char cVar34;
  ulonglong *******pppppppuVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong *******pppppppuVar38;
  ulonglong *******pppppppuVar39;
  undefined **ppuVar40;
  ushort uVar41;
  ushort uVar42;
  ulonglong uVar43;
  ulonglong *******pppppppuVar44;
  undefined **ppuVar45;
  ulonglong *******pppppppuVar46;
  uint uVar47;
  uint *puVar48;
  undefined **ppuVar49;
  bool bVar50;
  bool bVar51;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar52;
  ushort auStack_298 [16];
  int aiStack_278 [20];
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1e8;
  byte *pbStack_1e0;
  undefined1 uStack_1d8;
  undefined **ppuStack_1d0;
  ulonglong *******pppppppuStack_1c8;
  undefined **ppuStack_1c0;
  char *pcStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  ulonglong uStack_1a0;
  ulonglong ******ppppppuStack_198;
  code *pcStack_190;
  ulonglong *******pppppppuStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  undefined **ppuStack_170;
  ulonglong *******pppppppuStack_168;
  undefined4 uStack_15c;
  undefined **ppuStack_158;
  undefined8 *puStack_150;
  uint uStack_144;
  uint *puStack_140;
  uint uStack_138;
  byte bStack_131;
  ulonglong *******pppppppuStack_130;
  ulonglong *******pppppppuStack_128;
  ulonglong *******pppppppuStack_120;
  ulonglong *******pppppppuStack_118;
  ulonglong uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  longlong local_f8;
  ulonglong *******local_f0;
  longlong local_e8;
  byte *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  uint local_b0 [6];
  ulonglong *******local_98;
  ulonglong local_90;
  ulonglong *******local_88;
  longlong local_80;
  ulonglong *******local_78;
  ulonglong *******local_70;
  ulonglong *******local_68;
  char local_5d;
  uint local_5c;
  ulonglong *******local_58;
  ulonglong *******local_50;
  ulonglong *******local_48;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  byte bStack_34;
  undefined1 auStack_33 [3];
  
  local_98 = param_2;
  if (param_8 <= param_7) {
    local_68 = (ulonglong *******)
               (-(ulonglong)((param_9 & 4) != 0) |
               (ulonglong)((longlong)param_7 + ((ulonglong)(param_7 == (ulonglong *******)0x0) - 1))
               );
    if (((ulonglong)((longlong)local_68 + 1) & (ulonglong)local_68) == 0) {
      local_e0 = (byte *)((longlong)local_68 + 1);
      local_f0 = param_4;
      local_58 = param_4;
      local_50 = param_5;
      pppppppuVar23 =
           (ulonglong *******)
           CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(param_3 + 0x2904));
      local_80 = param_6;
      local_78 = param_7;
      local_70 = param_8;
      pppppppuVar10 =
           (ulonglong *******)CONCAT71((int7)((ulonglong)param_6 >> 8),*(byte *)(param_3 + 0x28f0));
      local_48 = *(ulonglong ********)(param_3 + 0x28c0);
      uStack_40 = *(uint *)(param_3 + 0x28c8);
      uStack_3c = *(uint *)(param_3 + 0x28dc);
      uStack_38 = *(uint *)(param_3 + 0x28e0);
      local_5c = 1;
      if ((param_9 & 2) == 0) {
        local_5c = 0xfc;
      }
      bStack_34 = *(byte *)(param_3 + 0x28f0);
      local_c0 = param_3 + 0x2780;
      local_b8 = (undefined4 *)(param_3 + 0x28a0);
      local_c8 = (undefined8 *)(param_3 + 0x28f1);
      local_d8 = (undefined8 *)(param_3 + 0x2810);
      local_d0 = (undefined8 *)(param_3 + 0x2880);
      local_5d = ((param_9 & 1) == 0) * '\x02' + '\x01';
      local_e8 = param_3 + 0x28e4;
      local_90 = param_3;
      pppppppuVar18 = (ulonglong *******)(ulonglong)*(uint *)(param_3 + 0x28dc);
      pppppppuVar46 = local_68;
LAB_002056ee:
      uVar47 = uStack_38;
      pppppppuVar38 = local_50;
      pppppppuVar31 = local_58;
      pppppppuVar39 = local_78;
      uVar5 = _UNK_00113eec;
      uVar4 = _UNK_00113ee8;
      uVar3 = _UNK_00113ee4;
      uVar52 = _DAT_00113ee0;
      pppppppuVar44 = (ulonglong *******)(ulonglong)param_9;
      puVar48 = &switchD_00205703::switchdataD_0012f474;
      ppuVar17 = (undefined **)((ulonglong)pppppppuVar23 & 0xffffffff);
      bVar7 = (byte)pppppppuVar23;
      uVar26 = (uint7)((ulonglong)pppppppuVar18 >> 8);
      if (0x18 < bVar7) {
        uVar47 = (uint)CONCAT71(uVar26,0xff);
        pppppppuVar44 = pppppppuVar46;
        goto LAB_00206b30;
      }
      uVar20 = (&switchD_00205703::switchdataD_0012f474)[(ulonglong)pppppppuVar23 & 0xff];
      uVar25 = (undefined7)((ulonglong)pppppppuVar23 >> 8);
      bVar13 = (byte)uStack_40;
      pppppppuVar27 = param_5;
      pppppppuVar35 = pppppppuVar10;
      pppppppuVar6 = pppppppuVar44;
      switch((ulonglong)pppppppuVar23 & 0xff) {
      case 0:
        local_48 = (ulonglong *******)0x0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        bStack_34 = 0;
        *(undefined4 *)(param_3 + 0x28cc) = _DAT_00113ee0;
        *(undefined4 *)(param_3 + 0x28d0) = uVar3;
        *(undefined4 *)(param_3 + 0x28d4) = uVar4;
        *(undefined4 *)(param_3 + 0x28d8) = uVar5;
        pppppppuVar23 =
             (ulonglong *******)
             (CONCAT71((int7)((ulonglong)
                              ((longlong)&switchD_00205703::switchdataD_0012f474 +
                              (longlong)(int)uVar20) >> 8),local_5d) & 0xffffffff);
        param_1 = uVar52;
        goto LAB_002056ee;
      case 1:
        if (local_50 == (ulonglong *******)0x0) {
          bVar7 = 1;
          goto LAB_00206af3;
        }
        local_58 = (ulonglong *******)((longlong)local_58 + 1);
        local_50 = (ulonglong *******)((longlong)local_50 + -1);
        *(uint *)(param_3 + 0x28cc) = (uint)*(byte *)pppppppuVar31;
        pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)local_58 >> 8),2);
        goto LAB_002056ee;
      case 2:
        if (local_50 == (ulonglong *******)0x0) {
          bVar7 = 2;
LAB_00206af3:
          uVar28 = (ulonglong)local_5c;
          goto LAB_00206af6;
        }
        local_58 = (ulonglong *******)((longlong)local_58 + 1);
        local_50 = (ulonglong *******)((longlong)local_50 + -1);
        bVar7 = *(byte *)pppppppuVar31;
        uVar47 = *(uint *)(param_3 + 0x28cc);
        uVar20 = uVar47 << 8 | (uint)bVar7;
        pppppppuVar18 = (ulonglong *******)(ulonglong)uVar20;
        *(uint *)(param_3 + 0x28d0) = (uint)bVar7;
        bVar51 = (uVar47 & 0xf) != 8 || ((bVar7 & 0x20) != 0 || uVar20 % 0x1f != 0);
        uVar47 = (uVar47 >> 4) + 8 & 0x3f;
        if ((param_9 & 4) == 0) {
          bVar51 = bVar51 || (ulonglong)local_e0 >> (sbyte)uVar47 == 0;
        }
        uVar20 = 3;
        if (bVar51) {
          uVar20 = 0x1d;
        }
        pppppppuVar23 = (ulonglong *******)(ulonglong)uVar20;
        if (0xf < uVar47) {
          pppppppuVar23 = (ulonglong *******)&DAT_0000001d;
        }
        goto LAB_002056ee;
      case 3:
        pppppppuVar10 = local_50;
        pppppppuVar23 = local_58;
        do {
          pppppppuVar46 = local_48;
          if (uStack_40 < 3) {
            if (pppppppuVar10 != (ulonglong *******)0x0) {
              pppppppuVar10 = (ulonglong *******)((longlong)pppppppuVar10 + -1);
              pppppppuVar39 = (ulonglong *******)((longlong)pppppppuVar23 + 1);
              local_58 = pppppppuVar39;
              local_50 = pppppppuVar10;
              uVar28 = (ulonglong)*(byte *)pppppppuVar23 << ((byte)uStack_40 & 0x3f) |
                       (ulonglong)local_48;
              local_48 = (ulonglong *******)(uVar28 >> 3);
              uStack_40 = (uStack_40 | 8) - 3;
              *(byte *)(param_3 + 0x28ee) = (byte)uVar28 & 1;
              bVar7 = (byte)uVar28 >> 1;
              pppppppuVar18 =
                   (ulonglong *******)(CONCAT71((int7)(uVar28 >> 8),bVar7) & 0xffffffffffffff03);
              *(char *)(param_3 + 0x28ef) = (char)pppppppuVar18;
              pppppppuVar23 = pppppppuVar39;
              switch(bVar7 & 3) {
              case 1:
                goto switchD_00205df8_caseD_1;
              case 2:
                goto switchD_00205df8_caseD_2;
              case 3:
                goto switchD_00205df8_caseD_3;
              }
              goto switchD_00205df8_caseD_0;
            }
            bVar7 = 3;
LAB_00206aae:
            uVar28 = (ulonglong)local_5c;
            goto LAB_00206ab1;
          }
          pppppppuVar39 = (ulonglong *******)((ulonglong)local_48 >> 3);
          local_48 = pppppppuVar39;
          uStack_40 = uStack_40 - 3;
          *(byte *)(param_3 + 0x28ee) = (byte)pppppppuVar46 & 1;
          bVar7 = (byte)((ulonglong)pppppppuVar46 >> 1) & 3;
          *(byte *)(param_3 + 0x28ef) = bVar7;
          switch(bVar7) {
          case 0:
switchD_00205df8_caseD_0:
            pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar39 >> 8),4);
            goto LAB_0020698f;
          case 2:
switchD_00205df8_caseD_2:
            uStack_38 = 0;
            pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar39 >> 8),8);
            goto LAB_0020698f;
          case 3:
switchD_00205df8_caseD_3:
            pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar39 >> 8),0x19);
            goto LAB_0020698f;
          }
switchD_00205df8_caseD_1:
          *(undefined4 *)(param_3 + 0x28e8) = 0x200120;
          pcStack_100 = (code *)0x205e57;
          (*(code *)PTR_memset_00219d00)(&switchD_00205df8::switchdataD_0012f4d8,0x90);
          uVar2 = _UNK_00113d78;
          uVar21 = _DAT_00113d70;
          *local_d8 = _DAT_00113d70;
          local_d8[1] = uVar2;
          local_d8[2] = uVar21;
          local_d8[3] = uVar2;
          local_d8[4] = uVar21;
          local_d8[5] = uVar2;
          local_d8[6] = uVar21;
          local_d8[7] = uVar2;
          local_d8[8] = uVar21;
          local_d8[9] = uVar2;
          local_d8[10] = uVar21;
          local_d8[0xb] = uVar2;
          local_d8[0xc] = uVar21;
          local_d8[0xd] = uVar2;
          uVar21 = _UNK_00113c98;
          *local_d0 = _DAT_00113c90;
          local_d0[1] = uVar21;
          local_d0[2] = 0x707070707070707;
          *(undefined8 *)(param_3 + 0x2898) = 0x808080808080808;
          uVar5 = _UNK_00113f6c;
          uVar4 = _UNK_00113f68;
          uVar3 = _UNK_00113f64;
          uVar52 = _DAT_00113f60;
          local_b8[4] = _DAT_00113f60;
          local_b8[5] = uVar3;
          local_b8[6] = uVar4;
          local_b8[7] = uVar5;
          *local_b8 = uVar52;
          local_b8[1] = uVar3;
          local_b8[2] = uVar4;
          local_b8[3] = uVar5;
          pppppppuVar18 = (ulonglong *******)&local_48;
          pcStack_100 = (code *)0x205ed1;
          uVar47 = init_tree(param_3);
          param_1 = extraout_XMM0_Da_00;
        } while ((char)uVar47 == '\0');
        pppppppuVar23 = extraout_RDX_00;
        if ((uVar47 & 0xff) == 1) break;
        pppppppuVar10 = pppppppuVar35;
        if ((uVar47 & 0xff) != 2) {
          bVar7 = 3;
          goto LAB_00206b30;
        }
        uVar28 = (ulonglong)extraout_RDX_00 & 0xffffffff;
        bVar7 = 3;
LAB_00206ab4:
        pppppppuVar46 = pppppppuVar44;
LAB_00206af6:
        uVar47 = (uint)uVar28;
        pppppppuVar23 = param_5;
        if ((char)uVar28 == '\x01') {
          uVar25 = (undefined7)(param_3 >> 8);
          if (local_78 == local_70) {
            uVar28 = CONCAT71(uVar25,'\x02' - (bVar7 == 0x17));
            goto LAB_00206b26;
          }
          bVar51 = true;
          puVar48 = (uint *)0x0;
          uVar28 = CONCAT71(uVar25,1);
        }
        else if ((uVar47 & 0xff) == 0xfc) {
LAB_00206b26:
          bVar51 = true;
          puVar48 = (uint *)0x0;
        }
        else {
          pppppppuVar44 = pppppppuVar46;
LAB_00206b30:
          uVar19 = (int)param_5 - (int)local_50;
          uVar20 = uStack_40 >> 3;
          if (uVar19 < uStack_40 >> 3) {
            uVar20 = uVar19;
          }
          puVar48 = (uint *)(ulonglong)uVar20;
          uStack_40 = uStack_40 + uVar20 * -8;
          uVar28 = (ulonglong)uVar47;
          bVar51 = (char)uVar47 != '\0';
          pppppppuVar23 = param_5;
          pppppppuVar46 = pppppppuVar44;
        }
        uVar43 = local_90;
        pppppppuVar44 = (ulonglong *******)(ulonglong)param_9;
        *(byte *)(local_90 + 0x2904) = bVar7;
        *(uint *)(local_90 + 0x28c8) = uStack_40;
        *(uint *)(local_90 + 0x28dc) = uStack_3c;
        *(uint *)(local_90 + 0x28e0) = uStack_38;
        *(byte *)(local_90 + 0x28f0) = bStack_34;
        *(ulonglong *)(local_90 + 0x28c0) = ~(-1L << ((byte)uStack_40 & 0x3f)) & (ulonglong)local_48
        ;
        uVar36 = uVar28;
        if ((((param_9 & 0x40) == 0) && ((param_9 & 9) != 0)) && (-1 < (char)uVar28)) {
          pppppppuVar18 = local_78;
          pppppppuVar35 = pppppppuVar10;
          param_3 = uVar28;
          if ((local_70 < param_8) || (local_78 < local_70)) {
LAB_00206d63:
            pcStack_100 = (code *)0x206d77;
            (*(code *)PTR_slice_index_fail_00219d80)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c58,pppppppuVar18);
            pppppppuVar10 = pppppppuVar44;
LAB_00206d77:
            pcStack_100 = (code *)0x206d89;
            (*(code *)PTR_slice_index_fail_00219d80)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b68,0x200);
            param_5 = pppppppuVar23;
            pppppppuVar44 = pppppppuVar10;
LAB_00206d89:
            ppuVar17 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c40;
            pcStack_100 = (code *)0x206d9c;
            param_1 = (*(code *)PTR_slice_index_fail_00219d80)
                                (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c40,param_5);
LAB_00206d9c:
            pcStack_100 = (code *)0x206dae;
            param_1 = (*(code *)PTR_panic_bounds_check_0021a020)
                                (param_1,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b38);
            pppppppuVar27 = param_5;
            param_5 = pppppppuVar44;
            pppppppuVar44 = pppppppuVar46;
LAB_00206dae:
            pcStack_100 = (code *)0x206dc0;
            param_1 = (*(code *)PTR_panic_bounds_check_0021a020)
                                (param_1,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b50);
            pppppppuVar39 = (ulonglong *******)0x13;
LAB_00206dc0:
            pppppppuVar6 = param_5;
            local_58 = pppppppuVar35;
            local_50 = param_7;
LAB_00206dc8:
            param_5 = pppppppuVar6;
            pcStack_100 = (code *)0x206dd5;
            pppppppuVar10 =
                 (ulonglong *******)
                 (*(code *)PTR_panic_bounds_check_0021a020)
                           (param_1,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b80);
LAB_00206dd5:
            ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b80;
            pcStack_100 = apply_match;
            local_58 = pppppppuVar35;
            local_50 = param_7;
            uVar52 = (*(code *)PTR_panic_bounds_check_0021a020)();
            pppppppuVar23 =
                 (ulonglong *******)((longlong)ppuVar22 - (longlong)ppuVar17 & (ulonglong)param_7);
            if (pppppppuVar35 == (ulonglong *******)0x3) {
              if ((((ulonglong *******)((longlong)ppuVar22 + 3) <= pppppppuVar39 &&
                    ppuVar22 < (ulonglong *******)0xfffffffffffffffd) &&
                  (pppppppuVar18 =
                        (ulonglong *******)
                        ((ulonglong)((longlong)pppppppuVar23 + 2) & (ulonglong)param_7),
                  pppppppuVar18 < pppppppuVar39)) &&
                 ((pppppppuVar23 < pppppppuVar39 &&
                  (param_7 = (ulonglong *******)
                             ((ulonglong)((longlong)pppppppuVar23 + 1) & (ulonglong)param_7),
                  param_7 < pppppppuVar39)))) {
                *(byte *)((longlong)pppppppuVar10 + (longlong)ppuVar22) =
                     *(byte *)((longlong)pppppppuVar10 + (longlong)pppppppuVar23);
                ((byte *)((longlong)pppppppuVar10 + 1))[(longlong)ppuVar22] =
                     *(byte *)((longlong)pppppppuVar10 + (longlong)param_7);
                bVar7 = *(byte *)((longlong)pppppppuVar10 + (longlong)pppppppuVar18);
                pppppppuVar39 = (ulonglong *******)(ulonglong)bVar7;
                *(byte *)((longlong)((longlong)pppppppuVar10 + 2) + (longlong)ppuVar22) = bVar7;
              }
              return pppppppuVar39;
            }
            if (((ppuVar22 <= pppppppuVar23 &&
                  (ulonglong *******)((longlong)pppppppuVar23 - (longlong)ppuVar22) < pppppppuVar35)
                || (ppuVar17 < pppppppuVar35)) ||
               (pppppppuVar18 =
                     (ulonglong *******)((longlong)pppppppuVar23 + (longlong)pppppppuVar35),
               pppppppuVar39 <= pppppppuVar18)) {
              pcStack_100 = (code *)(auStack_33 + 0x2b);
              pppppppuVar10 =
                   (ulonglong *******)transfer(pppppppuVar10,pppppppuVar39,pppppppuVar23,ppuVar22);
              return pppppppuVar10;
            }
            if (pppppppuVar23 < ppuVar22) {
              pppppppuVar10 = (ulonglong *******)((longlong)pppppppuVar39 - (longlong)ppuVar22);
              pcStack_100 = (code *)(auStack_33 + 0x2b);
              if (ppuVar22 <= pppppppuVar39) {
                if (pppppppuVar10 < pppppppuVar35) {
                  ppuVar17 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ce8;
                  pcStack_100 = (code *)(auStack_33 + 0x2b);
                  goto LAB_00206ef1;
                }
                pcStack_100 = (code *)(auStack_33 + 0x2b);
                if ((pppppppuVar23 <= pppppppuVar18) &&
                   (pcStack_100 = (code *)(auStack_33 + 0x2b), pppppppuVar18 <= ppuVar22))
                goto LAB_00206ec1;
                goto LAB_00206eff;
              }
            }
            else {
              pppppppuVar10 = (ulonglong *******)((longlong)pppppppuVar39 - (longlong)pppppppuVar23)
              ;
              if (pppppppuVar39 < pppppppuVar23) {
                ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c70;
                pcStack_100 = (code *)(auStack_33 + 0x2b);
                goto LAB_00206f30;
              }
              if ((CARRY8((ulonglong)pppppppuVar35,(ulonglong)ppuVar22)) ||
                 (pppppppuVar23 < (ulonglong *******)((longlong)pppppppuVar35 + (longlong)ppuVar22))
                 ) {
                pcStack_108 = (code *)0x206eea;
                pcStack_100 = (code *)(auStack_33 + 0x2b);
                pppppppuVar10 =
                     (ulonglong *******)
                     (*(code *)PTR_slice_index_fail_00219d80)
                               (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ca0);
              }
              else {
                pcStack_100 = (code *)(auStack_33 + 0x2b);
                if (pppppppuVar35 <= pppppppuVar10) {
LAB_00206ec1:
                  pcStack_100 = (code *)(auStack_33 + 0x2b);
                  pppppppuVar10 =
                       (ulonglong *******)(*(code *)PTR_memcpy_00219c60)(uVar52,pppppppuVar35);
                  return pppppppuVar10;
                }
              }
              ppuVar17 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c88;
LAB_00206ef1:
              pcStack_108 = (code *)0x206eff;
              (*(code *)PTR_slice_index_fail_00219d80)(ppuVar17,pppppppuVar10);
LAB_00206eff:
              ppuVar17 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cd0;
              pcStack_108 = (code *)0x206f12;
              (*(code *)PTR_slice_index_fail_00219d80)
                        (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cd0,ppuVar22);
            }
            ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cb8;
LAB_00206f30:
            uVar52 = SUB84(ppuVar17,0);
            pcStack_108 = decompress_fast;
            (*(code *)PTR_panic_fmt_0021a010)();
            pcStack_108 = (code *)&pcStack_100;
            uStack_110 = param_3;
            pppppppuStack_118 = (ulonglong *******)puVar48;
            pppppppuStack_120 = pppppppuVar44;
            pppppppuStack_128 = param_5;
            pppppppuStack_130 = pppppppuVar27;
            pppppppuStack_188 = param_7;
            uStack_15c = uVar52;
            ppppppuVar9 = *pppppppuVar35;
            uVar47 = *(uint *)(pppppppuVar35 + 1);
            uVar28 = (ulonglong)uVar47;
            ppuVar40 = (undefined **)(ulonglong)*(uint *)((longlong)pppppppuVar35 + 0xc);
            ppuVar17 = (undefined **)ppuVar22[1];
            ppuVar45 = (undefined **)ppuVar22[2];
            bVar7 = *(byte *)((longlong)pppppppuVar35 + 0x14);
            if (_DAT_0000001b < 0xe || (ulonglong)((longlong)ppuVar17 - (longlong)ppuVar45) < 0x103)
            {
              uStack_138 = *(uint *)(pppppppuVar35 + 2);
LAB_00206f9a:
              pppppppuVar10 = (ulonglong *******)0x0;
            }
            else {
              puStack_150 = (undefined8 *)0x13;
              puStack_140 = puRam0000000000000013;
              ppuStack_158 = (undefined **)*ppuVar22;
              uVar43 = _DAT_0000001b;
              ppuStack_170 = ppuVar22;
              pppppppuStack_168 = pppppppuVar35;
LAB_00206fbe:
              do {
                uVar47 = (uint)uVar28;
                if (uVar47 < 0x1e) {
                  uVar20 = *puStack_140;
                  uVar43 = uVar43 - 4;
                  puStack_140 = puStack_140 + 1;
                  *puStack_150 = puStack_140;
                  puStack_150[1] = uVar43;
                  ppppppuVar9 = (ulonglong ******)
                                ((ulonglong)ppppppuVar9 | (ulonglong)uVar20 << ((byte)uVar28 & 0x3f)
                                );
                  uVar47 = uVar47 | 0x20;
                }
                uVar20 = (uint)*(short *)(
                                         "a formatting trait implementation returned an error when the underlying stream did not"
                                         + (ulonglong)((uint)ppppppuVar9 & 0x3ff) * 2 + 0x15);
                if ((int)uVar20 < 0) {
                  uVar19 = 0xb;
                  do {
                    uVar15 = uVar19;
                    uVar20 = ~uVar20 + (uint)(((ulonglong)ppppppuVar9 >>
                                               ((ulonglong)(uVar15 - 1 & 0xff) & 0x3f) & 1) != 0);
                    if (0x23f < uVar20) {
                      uVar20 = 0x7fff;
                      break;
                    }
                    uVar20 = (uint)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                              cn_planes_0_3::OFFSETS + (ulonglong)uVar20 * 2 + 0x54c
                                             );
                    uVar19 = (uint)(byte)((char)uVar15 + 1);
                  } while ((int)uVar20 < 0);
                }
                else {
                  uVar15 = uVar20 >> 9;
                }
                ppppppuVar9 = (ulonglong ******)((ulonglong)ppppppuVar9 >> ((byte)uVar15 & 0x3f));
                uVar47 = uVar47 - uVar15;
                uVar28 = (ulonglong)uVar47;
                ppuVar32 = ppuVar45;
                uVar19 = uVar20;
                if ((uVar20 >> 8 & 1) != 0) {
LAB_0020710b:
                  uStack_138 = uVar19 & 0x1ff;
                  if (uStack_138 == 0x100) {
                    uStack_138 = 0x100;
                    goto LAB_00206f9a;
                  }
                  pppppppuVar10 = (ulonglong *******)0xff;
                  if (0x11d < uStack_138) goto LAB_00207306;
                  uVar20 = uVar19 - 1 & 0x1f;
                  if (uVar47 < 0x1e) {
                    uVar19 = *puStack_140;
                    uVar43 = uVar43 - 4;
                    puStack_140 = puStack_140 + 1;
                    *puStack_150 = puStack_140;
                    puStack_150[1] = uVar43;
                    ppppppuVar9 = (ulonglong ******)
                                  ((ulonglong)ppppppuVar9 |
                                  (ulonglong)uVar19 << ((byte)uVar47 & 0x3f));
                    uVar47 = uVar47 | 0x20;
                  }
                  bVar7 = (&DAT_00114900)[uVar20];
                  uStack_138 = (uint)*(ushort *)(&DAT_0012f56e + (ulonglong)uVar20 * 2);
                  if (0xffffffeb < uVar20 - 0x1c) {
                    uVar20 = (uint)ppppppuVar9;
                    ppppppuVar9 = (ulonglong ******)((ulonglong)ppppppuVar9 >> (bVar7 & 0x3f));
                    uVar47 = uVar47 - bVar7;
                    uStack_138 = (~(uint)(-1L << (bVar7 & 0x3f)) & uVar20) + uStack_138;
                  }
                  uVar20 = (uint)*(short *)(&UNK_001303e4 +
                                           (ulonglong)((uint)ppppppuVar9 & 0x3ff) * 2);
                  if ((int)uVar20 < 0) {
                    uVar19 = 0xb;
                    do {
                      uVar15 = uVar19;
                      uVar20 = ~uVar20 + (uint)(((ulonglong)ppppppuVar9 >>
                                                 ((ulonglong)(uVar15 - 1 & 0xff) & 0x3f) & 1) != 0);
                      if (0x23f < uVar20) {
                        uVar20 = 0x7fff;
                        break;
                      }
                      uVar20 = (uint)*(short *)(
                                               "user-provided comparison function does not correctly implement a total order"
                                               + (ulonglong)uVar20 * 2 + 0x4c);
                      uVar19 = (uint)(byte)((char)uVar15 + 1);
                    } while ((int)uVar20 < 0);
                  }
                  else {
                    uVar15 = uVar20 >> 9;
                  }
                  ppppppuVar9 = (ulonglong ******)((ulonglong)ppppppuVar9 >> ((byte)uVar15 & 0x3f));
                  uVar47 = uVar47 - uVar15;
                  if (0x1d < (uVar20 & 0x1ff)) goto LAB_00207306;
                  bVar7 = (byte)uVar20 >> 1;
                  bVar7 = (bVar7 - 1) + (bVar7 == 0);
                  uVar14 = *(ushort *)(&DAT_0012f528 + (ulonglong)(uVar20 & 0x1ff) * 2);
                  ppuVar40 = (undefined **)(ulonglong)uVar14;
                  if (3 < (byte)uVar20) {
                    if (uVar47 < 0x1e) {
                      uVar20 = *puStack_140;
                      uVar43 = uVar43 - 4;
                      puStack_140 = puStack_140 + 1;
                      *puStack_150 = puStack_140;
                      puStack_150[1] = uVar43;
                      ppppppuVar9 = (ulonglong ******)
                                    ((ulonglong)ppppppuVar9 |
                                    (ulonglong)uVar20 << ((byte)uVar47 & 0x3f));
                      uVar47 = uVar47 | 0x20;
                    }
                    uVar20 = (uint)ppppppuVar9;
                    ppppppuVar9 = (ulonglong ******)((ulonglong)ppppppuVar9 >> (bVar7 & 0x3f));
                    uVar47 = uVar47 - bVar7;
                    ppuVar40 = (undefined **)
                               (ulonglong)((~(uint)(-1L << (bVar7 & 0x3f)) & uVar20) + (uint)uVar14)
                    ;
                  }
                  uVar28 = (ulonglong)uVar47;
                  uStack_144 = (uint)ppuVar40;
                  if ((ppuVar17 < ppuVar40) || (((byte)uStack_15c >> 2 & ppuVar32 < ppuVar40) != 0))
                  goto LAB_00207306;
                  uStack_180 = (ulonglong)uStack_138;
                  pcStack_190 = (code *)0x2072c7;
                  uStack_178 = uVar43;
                  bStack_131 = bVar7;
                  apply_match(ppuStack_158,ppuVar17,ppuVar32,ppuVar40,uStack_180,pppppppuStack_188);
                  ppuVar45 = (undefined **)((longlong)ppuVar32 + uStack_180);
                  ppuStack_170[2] = (undefined *)ppuVar45;
                  pppppppuVar10 = (ulonglong *******)0x0;
                  pppppppuVar35 = pppppppuStack_168;
                  bVar7 = bStack_131;
                  if (0x102 < (ulonglong)((longlong)ppuVar17 - (longlong)ppuVar45)) {
                    ppuVar40 = (undefined **)(ulonglong)uStack_144;
                    ppuVar22 = ppuStack_170;
                    uVar43 = uStack_178;
                    if (0xd < uStack_178) goto LAB_00206fbe;
                  }
                  ppuVar40 = (undefined **)(ulonglong)uStack_144;
                  goto LAB_00207306;
                }
                uVar19 = (uint)*(short *)(
                                         "a formatting trait implementation returned an error when the underlying stream did not"
                                         + (ulonglong)((uint)ppppppuVar9 & 0x3ff) * 2 + 0x15);
                if ((int)uVar19 < 0) {
                  uVar15 = 0xb;
                  do {
                    bVar13 = (byte)uVar15;
                    uVar19 = ~uVar19 + (uint)(((ulonglong)ppppppuVar9 >>
                                               ((ulonglong)(uVar15 - 1 & 0xff) & 0x3f) & 1) != 0);
                    if (0x23f < uVar19) {
                      uVar19 = 0x7fff;
                      break;
                    }
                    uVar19 = (uint)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                              cn_planes_0_3::OFFSETS + (ulonglong)uVar19 * 2 + 0x54c
                                             );
                    uVar15 = (uint)(byte)(bVar13 + 1);
                  } while ((int)uVar19 < 0);
                  ppuVar49 = (undefined **)(ulonglong)bVar13;
                  ppuVar22 = ppuStack_170;
                }
                else {
                  ppuVar49 = (undefined **)(ulonglong)(uVar19 >> 9);
                }
                ppppppuVar9 = (ulonglong ******)((ulonglong)ppppppuVar9 >> ((byte)ppuVar49 & 0x3f));
                if (ppuVar17 <= ppuVar45) {
LAB_00207366:
                  ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b80;
                  pcStack_190 = transfer;
                  uVar52 = (*(code *)PTR_panic_bounds_check_0021a020)();
                  pcStack_1b8 = "mid > len";
                  uVar43 = (longlong)ppuVar22 - (longlong)ppuVar49;
                  if (ppuVar22 <= ppuVar49) {
                    uVar43 = (longlong)ppuVar49 - (longlong)ppuVar22;
                  }
                  bVar51 = (byte *)((longlong)pppppppuVar35 + (longlong)ppuVar22) + -3 < ppuVar17;
                  ppuVar33 = (undefined **)
                             ((longlong)ppuVar49 + ((ulonglong)pppppppuVar35 & 0xfffffffffffffffc));
                  ppuStack_1b0 = ppuVar45;
                  ppuStack_1a8 = ppuVar17;
                  uStack_1a0 = uVar28;
                  ppppppuStack_198 = ppppppuVar9;
                  if (((ppuVar22 < ppuVar49) &&
                      (bVar51 || ppuVar40 == (undefined **)0xffffffffffffffff)) && (uVar43 == 1)) {
                    if (ppuVar17 <= (undefined **)((longlong)ppuVar49 + -1)) {
                      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d00;
                      ppuVar45 = (undefined **)0x1;
                      ppuVar33 = (undefined **)((longlong)ppuVar49 + -1);
                      pcStack_190 = (code *)&pcStack_108;
                      goto LAB_002077a1;
                    }
                    pcStack_190 = (code *)&pcStack_108;
                    if (ppuVar33 < ppuVar49) goto LAB_002076d8;
                    pcStack_190 = (code *)&pcStack_108;
                    if (ppuVar17 < ppuVar33) goto LAB_002076d8;
                    pcStack_1f8 = (code *)0x207408;
                    pcStack_190 = (code *)&pcStack_108;
                    uVar52 = (*(code *)PTR_memset_00219d00)();
                    ppuVar22 = (undefined **)((longlong)ppuVar33 + -1);
                    uVar20 = (uint)pppppppuVar35 & 3;
                    puVar48 = &switchD_00207423::switchdataD_0012f4e8;
                    uVar47 = (&switchD_00207423::switchdataD_0012f4e8)[uVar20];
                    ppuVar49 = ppuVar33;
                    switch(uVar20) {
                    case 0:
                      goto switchD_00207423_caseD_0;
                    case 1:
                      goto switchD_00207423_caseD_1;
                    case 2:
                      goto switchD_00207423_caseD_2;
                    }
                    goto switchD_00207423_caseD_3;
                  }
                  ppuVar45 = (undefined **)((longlong)ppuVar17 + -3);
                  ppuVar24 = (undefined **)0x0;
                  if ((undefined **)0x2 < ppuVar17) {
                    ppuVar24 = ppuVar45;
                  }
                  if (ppuVar33 <= ppuVar24) {
                    ppuVar24 = ppuVar33;
                  }
                  if (!((ppuVar22 < ppuVar49 &&
                        (bVar51 || ppuVar40 == (undefined **)0xffffffffffffffff)) &&
                       3 < (ulonglong)((longlong)ppuVar49 - (longlong)ppuVar22))) {
                    pcStack_190 = (code *)&pcStack_108;
                    if (ppuVar24 <= ppuVar49) goto LAB_002075a1;
                    pbVar8 = (byte *)((longlong)ppuVar49 + (longlong)ppuVar32);
                    ppuVar45 = (undefined **)0x0;
                    goto LAB_002074ea;
                  }
                  pcStack_190 = (code *)&pcStack_108;
                  if (ppuVar24 <= ppuVar49) goto LAB_002075a1;
                  ppuStack_1d0 = ppuVar40;
                  pppppppuStack_1c8 = pppppppuVar35;
                  ppuStack_1c0 = ppuVar32;
                  pcStack_190 = (code *)&pcStack_108;
                  goto LAB_00207467;
                }
                uVar47 = uVar47 - (int)ppuVar49;
                uVar28 = (ulonglong)uVar47;
                *(byte *)((longlong)ppuStack_158 + (longlong)ppuVar45) = (byte)uVar20;
                ppuVar32 = (undefined **)((longlong)ppuVar45 + 1);
                ppuVar22[2] = (undefined *)ppuVar32;
                if ((uVar19 >> 8 & 1) != 0) goto LAB_0020710b;
                ppuVar49 = ppuStack_158;
                if (ppuVar17 <= ppuVar32) goto LAB_00207366;
                ((byte *)((longlong)ppuStack_158 + 1))[(longlong)ppuVar45] = (byte)uVar19;
                ppuVar45 = (undefined **)((longlong)ppuVar45 + 2);
                ppuVar22[2] = (undefined *)ppuVar45;
                pppppppuVar10 = (ulonglong *******)0x0;
                if ((ulonglong)((longlong)ppuVar17 - (longlong)ppuVar45) < 0x103) break;
              } while (0xd < uVar43);
              uStack_138 = uVar20;
            }
LAB_00207306:
            *pppppppuVar35 = ppppppuVar9;
            *(uint *)(pppppppuVar35 + 1) = uVar47;
            *(uint *)((longlong)pppppppuVar35 + 0xc) = (uint)ppuVar40;
            *(uint *)(pppppppuVar35 + 2) = uStack_138;
            *(byte *)((longlong)pppppppuVar35 + 0x14) = bVar7;
            return pppppppuVar10;
          }
          local_b0[0] = *(undefined4 *)(local_90 + 0x28d8);
          local_68 = (ulonglong *******)CONCAT71(local_68._1_7_,bVar51);
          pcStack_100 = (code *)0x206c15;
          (*(code *)PTR_write_slice_0021ad58)(bStack_34,(longlong)local_70 - (longlong)param_8);
          uVar20 = (uint)(uVar28 & 0xff);
          uVar47 = 0xfe;
          if (local_b0[0] == *(uint *)(uVar43 + 0x28d4)) {
            uVar47 = uVar20;
          }
          if ((char)local_68 != '\0') {
            uVar47 = uVar20;
          }
          *(uint *)(uVar43 + 0x28d8) = local_b0[0];
          uVar36 = (ulonglong)uVar47;
          if ((param_9 & 1) == 0) {
            uVar36 = uVar28 & 0xff;
          }
        }
        ppppppuVar9 = (ulonglong ******)((longlong)local_70 - (longlong)param_8);
        *(char *)(local_98 + 1) = (char)uVar36;
        *local_98 = (ulonglong ******)
                    ((longlong)pppppppuVar23 - (longlong)((longlong)puVar48 + (longlong)local_50));
        goto LAB_00206c67;
      case 4:
        local_48 = (ulonglong *******)((ulonglong)local_48 >> (bVar13 & 7));
        uStack_40 = uStack_40 & 0xfffffff8;
        uStack_38 = 0;
        pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,5);
        goto LAB_002056ee;
      case 5:
        uVar47 = uStack_40;
        if ((ulonglong)uStack_38 < 4) {
          uVar20 = uStack_38 - 1;
          pbVar8 = (byte *)((ulonglong)uStack_38 + local_e8);
          pppppppuVar23 = local_50;
          pppppppuVar18 = local_48;
          pppppppuVar10 = local_58;
          do {
            if (uVar47 == 0) {
              if (pppppppuVar23 == (ulonglong *******)0x0) {
LAB_00206ae5:
                bVar7 = 5;
                goto LAB_00206af3;
              }
              pppppppuVar23 = (ulonglong *******)((longlong)pppppppuVar23 + -1);
              pppppppuVar39 = (ulonglong *******)((longlong)pppppppuVar10 + 1);
              local_58 = pppppppuVar39;
              local_50 = pppppppuVar23;
              *pbVar8 = *(byte *)pppppppuVar10;
              uVar47 = 0;
            }
            else {
              pppppppuVar39 = pppppppuVar10;
              if (uVar47 < 8) {
                if (pppppppuVar23 == (ulonglong *******)0x0) goto LAB_00206ae5;
                pppppppuVar23 = (ulonglong *******)((longlong)pppppppuVar23 + -1);
                pppppppuVar39 = (ulonglong *******)((longlong)pppppppuVar10 + 1);
                local_58 = pppppppuVar39;
                local_50 = pppppppuVar23;
                pppppppuVar18 =
                     (ulonglong *******)
                     ((ulonglong)pppppppuVar18 |
                     (ulonglong)*(byte *)pppppppuVar10 << ((byte)uVar47 & 0x3f));
                uVar47 = uVar47 | 8;
              }
              *pbVar8 = (byte)pppppppuVar18;
              pppppppuVar18 = (ulonglong *******)((ulonglong)pppppppuVar18 >> 8);
              local_48 = pppppppuVar18;
              uVar47 = uVar47 - 8;
              uStack_40 = uVar47;
            }
            uStack_38 = uVar20 + 2;
            param_7 = (ulonglong *******)(ulonglong)uStack_38;
            uVar20 = uVar20 + 1;
            pbVar8 = pbVar8 + 1;
            pppppppuVar10 = pppppppuVar39;
          } while (uVar20 < 3);
        }
        uVar14 = *(ushort *)(param_3 + 0x28e4);
        uVar41 = *(ushort *)(param_3 + 0x28e6) ^ uVar14;
        pppppppuVar18 = (ulonglong *******)(ulonglong)uVar41;
        uStack_38 = (uint)uVar14;
        uVar25 = (undefined7)((ulonglong)pppppppuVar23 >> 8);
        pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x1f);
        if (uVar41 == 0xffff) {
          pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x14);
          if (uVar14 != 0) {
            pppppppuVar23 = (ulonglong *******)&DAT_00000011;
            if (uVar47 == 0) {
              pppppppuVar23 = (ulonglong *******)0x6;
            }
          }
        }
        goto LAB_002056ee;
      case 6:
        pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x14);
        if (uStack_38 != 0) {
          pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,7);
          if (local_78 == local_70) goto LAB_00206ca0;
        }
        goto LAB_002056ee;
      case 7:
        uVar28 = (ulonglong)local_5c;
        if (local_50 == (ulonglong *******)0x0) {
          bVar7 = 7;
          local_88 = param_5;
          goto LAB_00206af6;
        }
        pppppppuVar23 = (ulonglong *******)((longlong)local_78 - (longlong)local_70);
        if (local_50 < (ulonglong *******)((longlong)local_78 - (longlong)local_70)) {
          pppppppuVar23 = local_50;
        }
        pppppppuVar46 = (ulonglong *******)(ulonglong)uStack_38;
        if (pppppppuVar46 < pppppppuVar23) {
          pppppppuVar23 = pppppppuVar46;
        }
        puVar48 = (uint *)((longlong)pppppppuVar23 + (longlong)local_70);
        pppppppuVar44 = local_50;
        local_88 = param_5;
        if ((!CARRY8((ulonglong)pppppppuVar23,(ulonglong)local_70)) && (puVar48 <= local_78)) {
          pcStack_100 = (code *)0x205f47;
          pppppppuVar18 = pppppppuVar23;
          param_1 = (*(code *)PTR_memcpy_00219c60)(ppuVar17,pppppppuVar23);
          local_70 = (ulonglong *******)puVar48;
          local_58 = (ulonglong *******)((longlong)pppppppuVar31 + (longlong)pppppppuVar23);
          local_50 = (ulonglong *******)((longlong)pppppppuVar38 - (longlong)pppppppuVar23);
          uStack_38 = uVar47 - (int)pppppppuVar23;
          pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar18 >> 8),6);
          goto LAB_002066e8;
        }
LAB_00206d53:
        pcStack_100 = (code *)0x206d63;
        pppppppuVar18 =
             (ulonglong *******)
             (*(code *)PTR_slice_index_fail_00219d80)
                       (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b98);
        pppppppuVar35 = pppppppuVar10;
        goto LAB_00206d63;
      case 8:
        pppppppuVar18 = (ulonglong *******)(ulonglong)uStack_38;
        if (pppppppuVar18 < (ulonglong *******)0x3) {
          pppppppuVar23 = local_58;
          pppppppuVar10 = local_50;
          do {
            local_b0[0] = 5;
            local_b0[1] = 5;
            local_b0[2] = 4;
            uVar47 = local_b0[(longlong)pppppppuVar18];
            pppppppuVar39 = local_48;
            if (uStack_40 < uVar47) {
              lVar12 = -1;
              pppppppuVar31 = (ulonglong *******)0x0;
              do {
                if (pppppppuVar10 == pppppppuVar31) {
                  bVar7 = 8;
                  uVar28 = (ulonglong)local_5c;
                  param_7 = local_48;
                  goto LAB_00206af6;
                }
                local_58 = (ulonglong *******)
                           ((byte *)((longlong)pppppppuVar23 + (longlong)pppppppuVar31) + 1);
                local_50 = (ulonglong *******)((longlong)pppppppuVar10 + lVar12);
                pppppppuVar39 =
                     (ulonglong *******)
                     ((ulonglong)local_48 |
                     (ulonglong)*(byte *)((longlong)pppppppuVar23 + (longlong)pppppppuVar31) <<
                     ((byte)uStack_40 & 0x3f));
                uStack_40 = uStack_40 + 8;
                pppppppuVar31 = (ulonglong *******)((longlong)pppppppuVar31 + 1);
                lVar12 = lVar12 + -1;
                local_48 = pppppppuVar39;
              } while (uStack_40 < uVar47);
              pppppppuVar10 = (ulonglong *******)((longlong)pppppppuVar10 - (longlong)pppppppuVar31)
              ;
              pppppppuVar23 = (ulonglong *******)((longlong)pppppppuVar23 + (longlong)pppppppuVar31)
              ;
            }
            param_7 = (ulonglong *******)((ulonglong)pppppppuVar39 >> ((byte)uVar47 & 0x3f));
            local_48 = param_7;
            uStack_40 = uStack_40 - uVar47;
            *(ushort *)(param_3 + 0x28e8 + (longlong)pppppppuVar18 * 2) =
                 ((ushort)pppppppuVar39 & ~(ushort)(-1L << ((byte)uVar47 & 0x3f))) +
                 *(short *)(&DAT_0012f50e + (longlong)pppppppuVar18 * 2);
            pppppppuVar18 = (ulonglong *******)((longlong)pppppppuVar18 + 1);
            uStack_38 = (uint)pppppppuVar18;
          } while ((uint)pppppppuVar18 != 3);
        }
        *(undefined4 *)((longlong)local_c8 + 0xf) = 0;
        param_1 = 0;
        *local_c8 = 0;
        local_c8[1] = 0;
        uStack_38 = 0;
        uVar47 = 9;
        if (0x1e < *(ushort *)(param_3 + 0x28ea)) {
          uVar47 = 0x1b;
        }
        pppppppuVar23 = (ulonglong *******)(ulonglong)uVar47;
        if (0x11e < *(ushort *)(param_3 + 0x28e8)) {
          pppppppuVar23 = (ulonglong *******)&DAT_0000001b;
        }
        goto LAB_002056ee;
      case 9:
        pppppppuVar27 = local_50;
        pppppppuVar10 = local_58;
        do {
          if (uStack_38 < *(ushort *)(param_3 + 0x28ec)) {
            pppppppuVar23 = local_48;
            puVar48 = (uint *)pppppppuVar10;
            if (uStack_40 < 3) {
              if (pppppppuVar27 != (ulonglong *******)0x0) {
                pppppppuVar27 = (ulonglong *******)((longlong)pppppppuVar27 + -1);
                puVar48 = (uint *)((longlong)pppppppuVar10 + 1);
                local_58 = (ulonglong *******)puVar48;
                local_50 = pppppppuVar27;
                pppppppuVar18 =
                     (ulonglong *******)
                     ((ulonglong)*(byte *)pppppppuVar10 << ((byte)uStack_40 & 0x3f));
                pppppppuVar23 = (ulonglong *******)((ulonglong)local_48 | (ulonglong)pppppppuVar18);
                uStack_40 = uStack_40 | 8;
                goto LAB_00205b9b;
              }
              cVar34 = '\x02';
              pppppppuVar27 = (ulonglong *******)0x0;
            }
            else {
LAB_00205b9b:
              local_48 = (ulonglong *******)((ulonglong)pppppppuVar23 >> 3);
              ppuVar17 = (undefined **)(ulonglong)(uStack_40 - 3);
              uStack_40 = uStack_40 - 3;
              if (0x12 < uStack_38) goto LAB_00206dae;
              *(byte *)((longlong)local_c8 + (ulonglong)(byte)(&DAT_0012f514)[uStack_38]) =
                   (byte)pppppppuVar23 & 7;
              uStack_38 = uStack_38 + 1;
              cVar34 = '\0';
              pppppppuVar10 = (ulonglong *******)puVar48;
            }
            pppppppuVar23 = (ulonglong *******)(ulonglong)local_5c;
          }
          else {
            *(undefined2 *)(param_3 + 0x28ec) = 0x13;
            pppppppuVar18 = (ulonglong *******)&local_48;
            pcStack_100 = (code *)0x205bef;
            cVar34 = init_tree(param_3);
            pppppppuVar23 = extraout_RDX;
            param_1 = extraout_XMM0_Da;
            if (cVar34 == -1) {
              bVar7 = 9;
              uVar47 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar18 >> 8),0xff);
              pppppppuVar10 = pppppppuVar35;
              goto LAB_00206b30;
            }
          }
        } while (cVar34 == '\0');
        if (cVar34 != '\x01') {
          uVar28 = (ulonglong)pppppppuVar23 & 0xffffffff;
          bVar7 = 9;
LAB_00206ab1:
          pppppppuVar10 = pppppppuVar35;
          goto LAB_00206ab4;
        }
        break;
      case 10:
        local_88 = param_5;
        param_5 = local_50;
        pppppppuVar35 = local_58;
        do {
          pppppppuVar23 = (ulonglong *******)(ulonglong)uStack_38;
          uVar14 = *(ushort *)(param_3 + 0x28e8);
          uVar47 = (uint)*(ushort *)(param_3 + 0x28ea) + (uint)uVar14;
          uVar26 = (uint7)(uint3)(uStack_38 >> 8);
          if (uVar47 <= uStack_38) {
            if (uStack_38 != uVar47) {
              pppppppuVar23 = (ulonglong *******)CONCAT71(uVar26,0x1a);
              goto LAB_002068b4;
            }
            if (uVar14 < 0x121) {
              pcStack_100 = (code *)0x20638b;
              (*(code *)PTR_memcpy_00219c60)(uVar47,uVar14);
              uVar20 = *(ushort *)(param_3 + 0x28e8) & 0x1ff;
              uVar47 = (uint)*(ushort *)(param_3 + 0x28ea) + (uint)*(ushort *)(param_3 + 0x28e8) &
                       0x1ff;
              if ((ushort)uVar47 < (ushort)uVar20) {
                ppuVar17 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c10;
                uVar21 = 0x200;
                goto LAB_00206d34;
              }
              if ((ulonglong)uVar47 - (ulonglong)uVar20 ==
                  (ulonglong)(*(ushort *)(param_3 + 0x28ea) & 0x1f)) {
                pcStack_100 = (code *)0x2063d1;
                (*(code *)PTR_memcpy_00219c60)();
                *(char *)(param_3 + 0x28ef) = *(char *)(param_3 + 0x28ef) + -1;
                pppppppuVar18 = (ulonglong *******)&local_48;
                pcStack_100 = (code *)0x2063e4;
                cVar34 = init_tree(param_3);
                pppppppuVar23 = extraout_RDX_01;
                param_1 = extraout_XMM0_Da_01;
                if (cVar34 != -1) goto LAB_002064c7;
                bVar7 = 10;
                uVar47 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar18 >> 8),0xff);
                param_5 = local_88;
                pppppppuVar44 = pppppppuVar46;
                goto LAB_00206b30;
              }
            }
            else {
              ppuVar17 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c28;
              uVar21 = 0x120;
LAB_00206d34:
              pcStack_100 = (code *)0x206d3d;
              (*(code *)PTR_slice_index_fail_00219d80)(ppuVar17,uVar21);
            }
            pcStack_100 = (code *)0x206d53;
            (*(code *)PTR_len_mismatch_fail_0021a270)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218bf8,
                       &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218bf8);
            pppppppuVar23 = param_5;
            puVar48 = (uint *)pppppppuVar35;
            goto LAB_00206d53;
          }
          pppppppuVar18 = (ulonglong *******)(ulonglong)uStack_40;
          if (&DAT_0000000e < pppppppuVar18) {
            uVar47 = uStack_40;
          }
          else if (param_5 < (ulonglong *******)0x2) {
            param_7 = (ulonglong *******)
                      CONCAT71((int7)((ulonglong)param_7 >> 8),param_5 == (ulonglong *******)0x0);
            ppuVar17 = (undefined **)pppppppuVar18;
            do {
              uVar47 = (uint)*(short *)(param_3 + 0x1b00 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
              pppppppuVar10 = pppppppuVar35;
              if ((int)uVar47 < 0) {
                if ((ulonglong *******)0xa < ppuVar17) {
                  pppppppuVar39 = (ulonglong *******)0xc;
                  do {
                    uVar47 = ~uVar47 + (uint)(((ulonglong)local_48 >>
                                               ((ulonglong)((int)pppppppuVar39 - 2) & 0x3f) & 1) !=
                                             0);
                    puVar48 = (uint *)pppppppuVar35;
                    if (0x23f < uVar47) goto LAB_00206d9c;
                    uVar47 = (uint)*(short *)(param_3 + 0x2300 + (ulonglong)uVar47 * 2);
                    if (-1 < (int)uVar47) goto LAB_00206419;
                    bVar51 = pppppppuVar39 <= ppuVar17;
                    pppppppuVar39 = (ulonglong *******)(ulonglong)((int)pppppppuVar39 + 1);
                  } while (bVar51);
                }
              }
              else if ((ulonglong *******)(ulonglong)((uVar47 >> 9) - 1) < ppuVar17) {
LAB_00206419:
                uVar47 = (uint)ppuVar17;
                break;
              }
              if ((char)param_7 != '\0') {
                cVar34 = '\x02';
                pppppppuVar23 = (ulonglong *******)(ulonglong)local_5c;
                pppppppuVar18 = local_48;
                goto LAB_002064c7;
              }
              pppppppuVar10 = (ulonglong *******)((longlong)pppppppuVar35 + 1);
              local_58 = pppppppuVar10;
              local_50 = (ulonglong *******)0x0;
              local_48 = (ulonglong *******)
                         ((ulonglong)local_48 |
                         (ulonglong)*(byte *)pppppppuVar35 << ((byte)ppuVar17 & 0x3f));
              uVar47 = (int)pppppppuVar18 + 8;
              pppppppuVar18 = (ulonglong *******)(ulonglong)uVar47;
              param_7 = (ulonglong *******)CONCAT71((int7)((ulonglong)param_7 >> 8),1);
              param_5 = (ulonglong *******)0x0;
              uStack_40 = (uint)(ppuVar17 + 1);
              bVar51 = ppuVar17 < &DAT_00000007;
              ppuVar17 = ppuVar17 + 1;
              pppppppuVar35 = pppppppuVar10;
            } while (bVar51);
          }
          else {
            param_5 = (ulonglong *******)((longlong)param_5 + -2);
            local_58 = (ulonglong *******)((longlong)pppppppuVar35 + 2);
            local_50 = param_5;
            local_48 = (ulonglong *******)
                       ((ulonglong)*(ushort *)pppppppuVar35 << ((byte)uStack_40 & 0x3f) |
                       (ulonglong)local_48);
            pppppppuVar35 = (ulonglong *******)((longlong)pppppppuVar35 + 2);
            uVar47 = uStack_40 | 0x10;
          }
          uStack_3c = (uint)*(short *)(param_3 + 0x1b00 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
          if ((int)uStack_3c < 0) {
            bVar7 = 0xb;
            do {
              bVar13 = bVar7;
              pppppppuVar10 = (ulonglong *******)(ulonglong)(byte)(bVar13 - 1);
              uVar20 = ~uStack_3c +
                       (uint)(((ulonglong)local_48 >> ((ulonglong)pppppppuVar10 & 0x3f) & 1) != 0);
              if (0x23f < uVar20) {
                uStack_3c = 0x7fff;
                break;
              }
              uStack_3c = (uint)*(short *)(param_3 + 0x2300 + (ulonglong)uVar20 * 2);
              bVar7 = bVar13 + 1;
            } while ((int)uStack_3c < 0);
            uVar20 = (uint)bVar13;
          }
          else {
            uVar20 = uStack_3c >> 9;
            uStack_3c = uStack_3c & 0x1ff;
          }
          local_48 = (ulonglong *******)((ulonglong)local_48 >> ((byte)uVar20 & 0x3f));
          uStack_40 = uVar47 - uVar20;
          pppppppuVar18 = local_48;
          if (uStack_3c < 0x10) {
            *(char *)(param_3 + (uStack_38 & 0x1ff)) = (char)uStack_3c;
            pppppppuVar23 = (ulonglong *******)(ulonglong)(uStack_38 + 1);
            uStack_38 = uStack_38 + 1;
            cVar34 = '\0';
          }
          else {
            cVar34 = '\x01';
            if (pppppppuVar23 == (ulonglong *******)0x0) {
              pppppppuVar23 = (ulonglong *******)CONCAT71(uVar26,0x20);
              if (uStack_3c == 0x10) goto LAB_002064c7;
            }
            local_b0[0] = 0x70302;
            bStack_34 = *(byte *)((longlong)local_b0 + (ulonglong)(uStack_3c & 3));
            pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar23 >> 8),0xb);
          }
LAB_002064c7:
        } while (cVar34 == '\0');
        if (cVar34 == '\x02') {
          uVar28 = (ulonglong)pppppppuVar23 & 0xffffffff;
          bVar7 = 10;
          param_5 = local_88;
          goto LAB_00206af6;
        }
LAB_002068b4:
        param_5 = local_88;
        goto LAB_002056ee;
      case 0xb:
        pppppppuVar10 = local_48;
        if (uStack_40 < bStack_34) {
          do {
            pppppppuVar10 = local_58;
            if ((ulonglong *******)((longlong)local_50 + -1) ==
                (ulonglong *******)0xffffffffffffffff) {
              bVar7 = 0xb;
              goto LAB_00206aae;
            }
            local_58 = (ulonglong *******)((longlong)local_58 + 1);
            local_50 = (ulonglong *******)((longlong)local_50 + -1);
            pppppppuVar35 =
                 (ulonglong *******)((ulonglong)*(byte *)pppppppuVar10 << ((byte)uStack_40 & 0x3f));
            pppppppuVar10 = (ulonglong *******)((ulonglong)local_48 | (ulonglong)pppppppuVar35);
            uStack_40 = uStack_40 + 8;
            local_48 = pppppppuVar10;
          } while (uStack_40 < bStack_34);
        }
        local_48 = (ulonglong *******)((ulonglong)pppppppuVar10 >> (bStack_34 & 0x3f));
        uStack_40 = uStack_40 - bStack_34;
        local_b0[0] = 3;
        local_b0[1] = 0;
        local_b0[2] = 3;
        local_b0[3] = 0;
        local_b0[4] = 0xb;
        local_b0[5] = 0;
        puVar48 = (uint *)(ulonglong)uStack_38;
        pppppppuVar23 =
             (ulonglong *******)
             (((ulonglong)pppppppuVar10 & ~(-1L << (bStack_34 & 0x3f))) +
             *(longlong *)(local_b0 + (ulonglong)(uStack_3c & 2) * 2));
        uVar28 = (ulonglong)((int)pppppppuVar23 + uStack_38 & 0x1ff);
        lVar12 = uVar28 - (uStack_38 & 0x1ff);
        pppppppuVar10 = param_5;
        pppppppuVar46 = pppppppuVar44;
        if (uVar28 < (uStack_38 & 0x1ff)) goto LAB_00206d77;
        pppppppuVar18 = (ulonglong *******)0x0;
        pcStack_100 = (code *)0x206800;
        param_1 = (*(code *)PTR_memset_00219d00)((ulonglong)(uStack_3c & 2),lVar12);
        uStack_38 = (int)pppppppuVar23 + uVar47;
        pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)lVar12 >> 8),10);
        break;
      case 0xc:
        goto switchD_00205703_caseD_c;
      case 0xd:
        pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x15);
        if (uStack_38 < 0x100) {
          pppppppuVar18 = local_78;
          if (local_78 == local_70) goto LAB_00206ca0;
          pppppppuVar44 = pppppppuVar46;
          if (local_78 <= local_70) goto LAB_00206dc8;
          *(byte *)(local_80 + (longlong)local_70) = (byte)uStack_38;
          local_70 = (ulonglong *******)((longlong)local_70 + 1);
          pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0xc);
        }
        goto LAB_002056ee;
      case 0xe:
        if (uStack_40 < bStack_34) {
          do {
            if (local_50 == (ulonglong *******)0x0) {
              bVar7 = 0xe;
              local_50 = (ulonglong *******)0x0;
              pppppppuVar10 = local_58;
              goto LAB_00206af3;
            }
            local_50 = (ulonglong *******)((longlong)local_50 + -1);
            bVar7 = *(byte *)local_58;
            local_58 = (ulonglong *******)((longlong)local_58 + 1);
            param_7 = (ulonglong *******)((ulonglong)bVar7 << ((byte)uStack_40 & 0x3f));
            local_48 = (ulonglong *******)((ulonglong)local_48 | (ulonglong)param_7);
            uStack_40 = uStack_40 + 8;
          } while (uStack_40 < bStack_34);
          pppppppuVar10 = local_58;
        }
        uVar47 = (uint)local_48;
        local_48 = (ulonglong *******)((ulonglong)local_48 >> (bStack_34 & 0x3f));
        uStack_40 = uStack_40 - bStack_34;
        uStack_38 = uStack_38 + (~(uint)(-1L << (bStack_34 & 0x3f)) & uVar47);
        pppppppuVar23 = (ulonglong *******)CONCAT71((uint7)(uint3)(uStack_40 >> 8),0xf);
        pppppppuVar18 = local_48;
        goto LAB_002056ee;
      case 0xf:
        pppppppuVar23 = (ulonglong *******)(ulonglong)uStack_40;
        if (pppppppuVar23 <= &DAT_0000000e) {
          if (local_50 < (ulonglong *******)0x2) {
            param_7 = (ulonglong *******)
                      CONCAT71((int7)((ulonglong)param_7 >> 8),local_50 == (ulonglong *******)0x0);
            ppuVar17 = (undefined **)pppppppuVar23;
            pppppppuVar18 = local_50;
            pppppppuVar10 = local_58;
            do {
              uVar20 = (uint)*(short *)(param_3 + 0xe80 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
              uVar47 = (uint)ppuVar17;
              if ((int)uVar20 < 0) {
                if ((ulonglong *******)0xa < ppuVar17) {
                  pppppppuVar39 = (ulonglong *******)0xc;
                  do {
                    uVar20 = ~uVar20 + (uint)(((ulonglong)local_48 >>
                                               ((ulonglong)((int)pppppppuVar39 - 2) & 0x3f) & 1) !=
                                             0);
                    pppppppuVar35 = pppppppuVar10;
                    if (0x23f < uVar20) goto LAB_00206d9c;
                    uVar20 = (uint)*(short *)(param_3 + 0x1680 + (ulonglong)uVar20 * 2);
                    if (-1 < (int)uVar20) {
                      local_58 = pppppppuVar10;
                      local_50 = pppppppuVar18;
                      uStack_40 = uVar47;
                      goto LAB_002069c5;
                    }
                    bVar51 = pppppppuVar39 <= ppuVar17;
                    pppppppuVar39 = (ulonglong *******)(ulonglong)((int)pppppppuVar39 + 1);
                  } while (bVar51);
                }
              }
              else if ((ulonglong *******)(ulonglong)((uVar20 >> 9) - 1) < ppuVar17) break;
              if ((char)param_7 != '\0') {
                bVar7 = 0xf;
                local_50 = pppppppuVar18;
                goto LAB_00206af3;
              }
              bVar7 = *(byte *)pppppppuVar10;
              pppppppuVar10 = (ulonglong *******)((longlong)pppppppuVar10 + 1);
              local_48 = (ulonglong *******)
                         ((ulonglong)local_48 | (ulonglong)bVar7 << ((byte)ppuVar17 & 0x3f));
              uVar47 = (int)pppppppuVar23 + 8;
              pppppppuVar23 = (ulonglong *******)(ulonglong)uVar47;
              param_7 = (ulonglong *******)CONCAT71((int7)((ulonglong)param_7 >> 8),1);
              pppppppuVar18 = (ulonglong *******)0x0;
              uStack_40 = (uint)(ppuVar17 + 1);
              bVar51 = ppuVar17 < &DAT_00000007;
              ppuVar17 = ppuVar17 + 1;
            } while (bVar51);
            local_58 = pppppppuVar10;
            local_50 = pppppppuVar18;
            uStack_40 = uVar47;
          }
          else {
            uVar14 = *(ushort *)local_58;
            local_58 = (ulonglong *******)((longlong)local_58 + 2);
            local_50 = (ulonglong *******)((longlong)local_50 + -2);
            local_48 = (ulonglong *******)
                       ((ulonglong)uVar14 << (bVar13 & 0x3f) | (ulonglong)local_48);
            uStack_40 = uStack_40 | 0x10;
          }
        }
LAB_002069c5:
        uVar47 = (uint)*(short *)(param_3 + 0xe80 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
        pppppppuVar18 = (ulonglong *******)(ulonglong)uVar47;
        if ((int)uVar47 < 0) {
          uVar47 = 0xb;
          do {
            uVar20 = uVar47;
            uVar47 = ~(uint)pppppppuVar18 +
                     (uint)(((ulonglong)local_48 >> ((ulonglong)(uVar20 - 1 & 0xff) & 0x3f) & 1) !=
                           0);
            if (0x23f < uVar47) {
              pppppppuVar18 = (ulonglong *******)0x7fff;
              break;
            }
            uVar19 = (uint)*(short *)(param_3 + 0x1680 + (ulonglong)uVar47 * 2);
            pppppppuVar18 = (ulonglong *******)(ulonglong)uVar19;
            uVar47 = (uint)(byte)((char)uVar20 + 1);
          } while ((int)uVar19 < 0);
        }
        else {
          uVar20 = uVar47 >> 9;
          pppppppuVar18 = (ulonglong *******)(ulonglong)(uVar47 & 0x1ff);
        }
        local_48 = (ulonglong *******)((ulonglong)local_48 >> ((byte)uVar20 & 0x3f));
        uStack_40 = uStack_40 - uVar20;
        pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)local_48 >> 8),0x22);
        if ((uint)pppppppuVar18 < 0x1e) {
          bStack_34 = (((byte)((ulonglong)pppppppuVar18 >> 1) & 0x7f) - 1) +
                      (((ulonglong)pppppppuVar18 >> 1 & 0x7f) == 0);
          uStack_3c = (uint)*(ushort *)(&DAT_0012f528 + (longlong)pppppppuVar18 * 2);
          pppppppuVar23 = (ulonglong *******)&DAT_00000010;
          if ((uint)pppppppuVar18 < 4) {
            pppppppuVar23 = (ulonglong *******)&DAT_00000016;
          }
        }
        goto LAB_002056ee;
      case 0x10:
        if (uStack_40 < bStack_34) {
          if (local_50 == (ulonglong *******)0x0) {
LAB_00206acc:
            local_50 = (ulonglong *******)0x0;
            bVar7 = 0x10;
            goto LAB_00206af3;
          }
          lVar12 = 1 - (longlong)local_50;
          uVar47 = uStack_40;
          pppppppuVar10 = local_58;
          while( true ) {
            param_7 = local_48;
            local_48 = (ulonglong *******)
                       ((ulonglong)*(byte *)pppppppuVar10 << ((byte)uVar47 & 0x3f) |
                       (ulonglong)param_7);
            uStack_40 = uVar47 + 8;
            if (bStack_34 <= uStack_40) break;
            lVar12 = lVar12 + 1;
            uVar47 = uVar47 + 8;
            pppppppuVar10 = (ulonglong *******)((longlong)pppppppuVar10 + 1);
            if (lVar12 == 1) {
              pppppppuVar10 = (ulonglong *******)0x1;
              uStack_40 = uVar47;
              goto LAB_00206acc;
            }
          }
          local_58 = (ulonglong *******)((longlong)pppppppuVar10 + 1);
          pppppppuVar10 = (ulonglong *******)-lVar12;
          local_50 = pppppppuVar10;
        }
        uVar47 = (uint)local_48;
        local_48 = (ulonglong *******)((ulonglong)local_48 >> (bStack_34 & 0x3f));
        uStack_40 = uStack_40 - bStack_34;
        uStack_3c = uStack_3c + (~(uint)(-1L << (bStack_34 & 0x3f)) & uVar47);
        pppppppuVar23 = (ulonglong *******)CONCAT71((uint7)(uint3)(uStack_40 >> 8),0x16);
        pppppppuVar18 = local_48;
        goto LAB_002056ee;
      case 0x11:
        pppppppuVar23 = local_48;
        if (uStack_40 < 8) {
          if (local_50 == (ulonglong *******)0x0) {
            bVar7 = 0x11;
            goto LAB_00206af3;
          }
          local_58 = (ulonglong *******)((longlong)local_58 + 1);
          local_50 = (ulonglong *******)((longlong)local_50 + -1);
          pppppppuVar23 =
               (ulonglong *******)
               ((ulonglong)local_48 | (ulonglong)*(byte *)pppppppuVar31 << (bVar13 & 0x3f));
          uStack_40 = uStack_40 | 8;
          pppppppuVar18 = pppppppuVar31;
        }
        local_48 = (ulonglong *******)((ulonglong)pppppppuVar23 >> 8);
        uStack_40 = uStack_40 - 8;
        uStack_3c = (uint)pppppppuVar23 & 0xff;
        pppppppuVar23 = (ulonglong *******)CONCAT71((uint7)((ulonglong)pppppppuVar23 >> 0x10),0x12);
        goto LAB_002056ee;
      case 0x12:
        pppppppuVar18 = local_78;
        if (local_78 == local_70) {
LAB_00206ca0:
          uVar47 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar18 >> 8),2);
          pppppppuVar44 = pppppppuVar46;
          goto LAB_00206b30;
        }
        pppppppuVar44 = pppppppuVar46;
        if (local_78 <= local_70) goto LAB_00206dc8;
        *(byte *)(local_80 + (longlong)local_70) = (byte)uStack_3c;
        uVar47 = 0x11;
        if (uStack_40 == 0) {
          uVar47 = 6;
        }
        uStack_38 = uStack_38 - 1;
        local_70 = (ulonglong *******)((longlong)local_70 + 1);
        pppppppuVar23 = (ulonglong *******)(ulonglong)uVar47;
        if (uStack_38 == 0) {
          pppppppuVar23 = (ulonglong *******)0x6;
        }
        goto LAB_002056ee;
      case 0x13:
        local_f8 = local_80;
        uVar28 = (ulonglong)uStack_3c;
        pppppppuVar23 = local_70;
        pppppppuVar31 = pppppppuVar18;
        local_88 = param_5;
        do {
          uVar47 = uStack_38;
          pppppppuVar18 = (ulonglong *******)((longlong)pppppppuVar39 - (longlong)pppppppuVar23);
          if (pppppppuVar18 == (ulonglong *******)0x0) {
            local_70 = pppppppuVar39;
            bVar7 = 0x13;
            uVar47 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar31 >> 8),2);
            param_5 = local_88;
            pppppppuVar44 = (ulonglong *******)0x0;
            goto LAB_00206b30;
          }
          if ((ulonglong *******)(ulonglong)uStack_38 < pppppppuVar18) {
            pppppppuVar18 = (ulonglong *******)(ulonglong)uStack_38;
          }
          pcStack_100 = (code *)0x2066cb;
          pppppppuVar31 = pppppppuVar39;
          pppppppuVar10 = pppppppuVar18;
          param_7 = local_68;
          param_1 = transfer(local_f8,pppppppuVar39,
                             (longlong)pppppppuVar23 - uVar28 & (ulonglong)local_68,pppppppuVar23);
          pppppppuVar23 = (ulonglong *******)((longlong)pppppppuVar23 + (longlong)pppppppuVar18);
          uStack_38 = uVar47 - (int)pppppppuVar18;
        } while (uStack_38 != 0);
        local_70 = pppppppuVar23;
        pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)extraout_RDX_02 >> 8),0xc);
LAB_002066e8:
        param_5 = local_88;
        pppppppuVar18 = pppppppuVar31;
        param_3 = local_90;
        goto LAB_00206995;
      case 0x14:
        pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,3);
        if (*(char *)(param_3 + 0x28ee) != '\0') {
          uVar43 = (longlong)param_5 - (longlong)local_50;
          uVar28 = (ulonglong)(uStack_40 >> 3);
          if ((uint)uVar43 < uStack_40 >> 3) {
            uVar28 = uVar43 & 0xffffffff;
          }
          pppppppuVar35 = (ulonglong *******)(ulonglong)(uint)((int)uVar28 * 8);
          uStack_40 = (uStack_40 & 0xfffffff8) + (int)uVar28 * -8;
          pppppppuVar23 = (ulonglong *******)(uVar43 - uVar28);
          pppppppuVar18 = (ulonglong *******)((longlong)param_5 - (longlong)pppppppuVar23);
          if (param_5 < pppppppuVar23) goto LAB_00206d89;
          uVar28 = (ulonglong)local_48 >> (bVar13 & 7);
          pppppppuVar10 = (ulonglong *******)(~(-1L << ((byte)uStack_40 & 0x38)) & uVar28);
          local_58 = (ulonglong *******)((longlong)pppppppuVar23 + (longlong)local_f0);
          local_50 = pppppppuVar18;
          local_48 = pppppppuVar10;
          uVar25 = (undefined7)(uVar28 >> 8);
          pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x18);
          if ((param_9 & 1) != 0) {
            uStack_38 = 0;
            pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x17);
          }
        }
        goto LAB_002056ee;
      case 0x15:
        uStack_38 = uStack_38 & 0x1ff;
        pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x14);
        if (uStack_38 != 0x100) {
          pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x21);
          if (uStack_38 < 0x11e) {
            uVar47 = uVar47 - 1 & 0x1f;
            bStack_34 = (&DAT_00114900)[uVar47];
            uStack_38 = (uint)*(ushort *)(&DAT_0012f56e + (ulonglong)uVar47 * 2);
            pppppppuVar23 = (ulonglong *******)(CONCAT71(uVar25,uVar47 - 0x1c < 0xffffffec) | 0xe);
          }
        }
        goto LAB_002056ee;
      case 0x16:
        pppppppuVar39 = (ulonglong *******)(ulonglong)uStack_3c;
        param_7 = (ulonglong *******)((longlong)local_70 - (longlong)pppppppuVar39);
        pppppppuVar23 = (ulonglong *******)CONCAT71(uVar25,0x1e);
        pppppppuVar18 = (ulonglong *******)((ulonglong)uVar26 << 8);
        if (pppppppuVar39 <= local_70 || (param_9 & 4) == 0) {
          pppppppuVar18 = local_78;
          if (pppppppuVar39 <= local_78) {
            pppppppuVar10 = (ulonglong *******)(ulonglong)uStack_38;
            pppppppuVar23 = (ulonglong *******)((longlong)local_70 + (longlong)pppppppuVar10);
            if ((local_78 < pppppppuVar23) ||
               (pppppppuVar18 = (ulonglong *******)((ulonglong)param_7 & (ulonglong)pppppppuVar46),
               pppppppuVar39 = (ulonglong *******)((longlong)pppppppuVar18 - (longlong)local_70),
               param_7 = (ulonglong *******)
                         CONCAT71((int7)((ulonglong)pppppppuVar39 >> 8),
                                  pppppppuVar39 < pppppppuVar10 && local_70 <= pppppppuVar18),
               pppppppuVar39 < pppppppuVar10 && local_70 <= pppppppuVar18)) {
              pppppppuVar23 = (ulonglong *******)0x13;
              pppppppuVar18 = local_78;
              if (pppppppuVar10 == (ulonglong *******)0x0) {
                pppppppuVar23 = (ulonglong *******)0xc;
              }
            }
            else {
              pcStack_100 = (code *)0x2069b0;
              pppppppuVar18 = local_78;
              param_7 = pppppppuVar46;
              param_1 = apply_match(local_80,local_78,local_70);
              local_70 = pppppppuVar23;
              pppppppuVar23 =
                   (ulonglong *******)CONCAT71((int7)((ulonglong)extraout_RDX_04 >> 8),0xc);
            }
          }
        }
        goto LAB_002056ee;
      case 0x17:
        pppppppuVar18 = (ulonglong *******)(ulonglong)uStack_38;
        pppppppuVar23 = local_58;
        if (uStack_38 < 4) {
          uVar47 = *(uint *)(param_3 + 0x28d4);
          pppppppuVar18 = (ulonglong *******)(ulonglong)(uStack_38 - 1);
          pppppppuVar10 = local_48;
          uVar20 = uStack_40;
          do {
            if (uVar20 == 0) {
              if (local_50 == (ulonglong *******)0x0) {
LAB_00206ae9:
                local_50 = (ulonglong *******)0x0;
                bVar7 = 0x17;
                goto LAB_00206af3;
              }
              local_50 = (ulonglong *******)((longlong)local_50 + -1);
              bVar7 = *(byte *)pppppppuVar23;
              pppppppuVar23 = (ulonglong *******)((longlong)pppppppuVar23 + 1);
              uVar47 = uVar47 << 8 | (uint)bVar7;
              uVar20 = 0;
            }
            else {
              if (uVar20 < 8) {
                if (local_50 == (ulonglong *******)0x0) goto LAB_00206ae9;
                bVar7 = *(byte *)pppppppuVar23;
                local_50 = (ulonglong *******)((longlong)local_50 + -1);
                pppppppuVar23 = (ulonglong *******)((longlong)pppppppuVar23 + 1);
                pppppppuVar10 =
                     (ulonglong *******)
                     ((ulonglong)pppppppuVar10 | (ulonglong)bVar7 << ((byte)uVar20 & 0x3f));
                uVar20 = uVar20 | 8;
              }
              uVar19 = (uint)pppppppuVar10;
              pppppppuVar10 = (ulonglong *******)((ulonglong)pppppppuVar10 >> 8);
              local_48 = pppppppuVar10;
              uVar20 = uVar20 - 8;
              uStack_40 = uVar20;
              uVar47 = uVar47 << 8 | uVar19 & 0xff;
            }
            *(uint *)(param_3 + 0x28d4) = uVar47;
            uStack_38 = (int)pppppppuVar18 + 2;
            param_7 = (ulonglong *******)(ulonglong)uStack_38;
            uVar19 = (int)pppppppuVar18 + 1;
            pppppppuVar18 = (ulonglong *******)(ulonglong)uVar19;
          } while (uVar19 < 3);
        }
        local_58 = pppppppuVar23;
        pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)local_50 >> 8),0x18);
        goto LAB_002056ee;
      case 0x18:
        uVar47 = 0;
        pppppppuVar44 = pppppppuVar46;
        goto LAB_00206b30;
      }
LAB_0020698f:
      pppppppuVar10 = pppppppuVar35;
LAB_00206995:
      pppppppuVar46 = local_68;
      goto LAB_002056ee;
    }
  }
  *(undefined1 *)(param_2 + 1) = 0xfd;
  ppppppuVar9 = (ulonglong ******)0x0;
  *param_2 = (ulonglong ******)0x0;
LAB_00206c67:
  local_98[2] = ppppppuVar9;
  return local_98;
switchD_00205703_caseD_c:
  pppppppuVar23 = local_50;
  pppppppuVar31 = local_70;
  pppppppuVar38 = param_7;
  if ((ulonglong *******)0x3 < local_50) {
    pppppppuVar35 = local_58;
    param_7 = local_50;
    do {
      if ((ulonglong)((longlong)local_78 - (longlong)pppppppuVar31) < 2) break;
      if (&DAT_0000000d < pppppppuVar23 &&
          0x102 < (ulonglong)((longlong)local_78 - (longlong)pppppppuVar31)) {
        pppppppuVar18 = (ulonglong *******)&local_58;
        pppppppuVar10 = (ulonglong *******)&local_48;
        pcStack_100 = (code *)0x206962;
        pppppppuVar39 = pppppppuVar46;
        local_70 = pppppppuVar31;
        local_58 = pppppppuVar35;
        local_50 = param_7;
        uVar47 = decompress_fast(param_3,pppppppuVar18,&local_80,pppppppuVar44);
        bVar7 = (byte)extraout_RDX_03;
        pppppppuVar23 = extraout_RDX_03;
        param_7 = pppppppuVar39;
        param_1 = extraout_XMM0_Da_02;
        if ((char)uVar47 == '\0') goto LAB_002056ee;
        uVar28 = (ulonglong)uVar47;
        goto LAB_00206af6;
      }
      if (uStack_40 < 0x1e) {
        uVar47 = *(uint *)pppppppuVar35;
        pppppppuVar23 = (ulonglong *******)((longlong)pppppppuVar23 + -4);
        pppppppuVar35 = (ulonglong *******)((longlong)pppppppuVar35 + 4);
        local_48 = (ulonglong *******)
                   ((ulonglong)local_48 | (ulonglong)uVar47 << ((byte)uStack_40 & 0x3f));
        uStack_40 = uStack_40 | 0x20;
        param_7 = pppppppuVar23;
      }
      uVar47 = (uint)*(short *)(param_3 + 0x200 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
      pppppppuVar27 = (ulonglong *******)(ulonglong)uVar47;
      if ((int)uVar47 < 0) {
        uVar20 = 0xb;
        do {
          uVar47 = uVar20;
          uVar20 = ~(uint)pppppppuVar27 +
                   (uint)(((ulonglong)local_48 >> ((ulonglong)(uVar47 - 1 & 0xff) & 0x3f) & 1) != 0)
          ;
          if (0x23f < uVar20) {
            pppppppuVar27 = (ulonglong *******)0x7fff;
            break;
          }
          uVar19 = (uint)*(short *)(param_3 + 0xa00 + (ulonglong)uVar20 * 2);
          pppppppuVar27 = (ulonglong *******)(ulonglong)uVar19;
          uVar20 = (uint)(byte)((char)uVar47 + 1);
        } while ((int)uVar19 < 0);
      }
      else {
        uVar47 = uVar47 >> 9;
      }
      uStack_38 = (uint)pppppppuVar27;
      local_48 = (ulonglong *******)((ulonglong)local_48 >> ((byte)uVar47 & 0x3f));
      uStack_40 = uStack_40 - uVar47;
      if (((uint)pppppppuVar27 >> 8 & 1) != 0) {
        local_58 = pppppppuVar35;
        local_50 = param_7;
        local_70 = pppppppuVar31;
LAB_0020698d:
        pppppppuVar23 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar23 >> 8),0x15);
        pppppppuVar18 = local_78;
        local_58 = pppppppuVar35;
        local_50 = param_7;
        goto LAB_0020698f;
      }
      uVar47 = (uint)*(short *)(param_3 + 0x200 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
      puVar48 = (uint *)(ulonglong)uVar47;
      if ((int)uVar47 < 0) {
        uVar47 = 0xb;
        do {
          bVar7 = (byte)uVar47;
          uVar47 = ~(uint)puVar48 +
                   (uint)(((ulonglong)local_48 >> ((ulonglong)(uVar47 - 1 & 0xff) & 0x3f) & 1) != 0)
          ;
          if (0x23f < uVar47) {
            puVar48 = (uint *)0x7fff;
            break;
          }
          uVar20 = (uint)*(short *)(local_90 + 0xa00 + (ulonglong)uVar47 * 2);
          puVar48 = (uint *)(ulonglong)uVar20;
          uVar47 = (uint)(byte)(bVar7 + 1);
        } while ((int)uVar20 < 0);
        ppuVar17 = (undefined **)(ulonglong)bVar7;
        param_3 = local_90;
      }
      else {
        ppuVar17 = (undefined **)(ulonglong)(uVar47 >> 9);
      }
      local_48 = (ulonglong *******)((ulonglong)local_48 >> ((byte)ppuVar17 & 0x3f));
      uStack_40 = uStack_40 - (int)ppuVar17;
      if (local_78 <= pppppppuVar31) goto LAB_00206dc0;
      *(byte *)(local_80 + (longlong)pppppppuVar31) = (byte)pppppppuVar27;
      pppppppuVar10 = (ulonglong *******)((longlong)pppppppuVar31 + 1);
      if (((uint)puVar48 >> 8 & 1) != 0) {
        local_58 = pppppppuVar35;
        local_50 = param_7;
        local_70 = pppppppuVar10;
        uStack_38 = (uint)puVar48;
        goto LAB_0020698d;
      }
      if (local_78 <= pppppppuVar10) goto LAB_00206dd5;
      *(byte *)(local_80 + 1 + (longlong)pppppppuVar31) = (byte)puVar48;
      pppppppuVar31 = (ulonglong *******)((longlong)pppppppuVar31 + 2);
      pppppppuVar46 = local_68;
    } while ((ulonglong *******)0x3 < pppppppuVar23);
    local_58 = pppppppuVar35;
    local_50 = param_7;
    pppppppuVar10 = pppppppuVar35;
    pppppppuVar38 = param_7;
  }
  local_70 = pppppppuVar31;
  pppppppuVar18 = (ulonglong *******)(ulonglong)uStack_40;
  if (pppppppuVar18 <= &DAT_0000000e) {
    if (pppppppuVar23 < (ulonglong *******)0x2) {
      bVar51 = pppppppuVar23 == (ulonglong *******)0x0;
      ppuVar17 = (undefined **)pppppppuVar18;
      uVar47 = uStack_40;
      do {
        uStack_40 = uVar47;
        pppppppuVar23 = local_58;
        uVar47 = (uint)*(short *)(param_3 + 0x200 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
        pppppppuVar10 = local_58;
        if ((int)uVar47 < 0) {
          if ((ulonglong *******)0xa < ppuVar17) {
            param_7 = (ulonglong *******)0xc;
            do {
              uVar47 = ~uVar47 + (uint)(((ulonglong)local_48 >>
                                         ((ulonglong)((int)param_7 - 2) & 0x3f) & 1) != 0);
              pppppppuVar35 = local_58;
              puVar48 = &switchD_00205703::switchdataD_0012f474;
              if (0x23f < uVar47) goto LAB_00206d9c;
              uVar47 = (uint)*(short *)(param_3 + 0xa00 + (ulonglong)uVar47 * 2);
              pppppppuVar38 = param_7;
              if (-1 < (int)uVar47) goto LAB_002068cc;
              pppppppuVar38 = (ulonglong *******)(ulonglong)((int)param_7 + 1);
              bVar50 = param_7 <= ppuVar17;
              param_7 = pppppppuVar38;
            } while (bVar50);
          }
        }
        else if ((ulonglong *******)(ulonglong)((uVar47 >> 9) - 1) < ppuVar17) {
LAB_002068cc:
          uStack_40 = (uint)ppuVar17;
          break;
        }
        if (bVar51) {
          bVar7 = 0xc;
          param_7 = pppppppuVar38;
          goto LAB_00206af3;
        }
        pppppppuVar10 = (ulonglong *******)((longlong)local_58 + 1);
        local_58 = pppppppuVar10;
        local_50 = (ulonglong *******)0x0;
        local_48 = (ulonglong *******)
                   ((ulonglong)local_48 |
                   (ulonglong)*(byte *)pppppppuVar23 << ((byte)ppuVar17 & 0x3f));
        uStack_40 = (int)pppppppuVar18 + 8;
        pppppppuVar18 = (ulonglong *******)(ulonglong)uStack_40;
        bVar51 = true;
        pppppppuVar23 = (ulonglong *******)(ppuVar17 + 1);
        bVar50 = ppuVar17 < &DAT_00000007;
        ppuVar17 = (undefined **)pppppppuVar23;
        uVar47 = (uint)pppppppuVar23;
      } while (bVar50);
    }
    else {
      uVar14 = *(ushort *)local_58;
      local_58 = (ulonglong *******)((longlong)local_58 + 2);
      local_50 = (ulonglong *******)((longlong)pppppppuVar23 + -2);
      local_48 = (ulonglong *******)
                 ((ulonglong)uVar14 << ((byte)uStack_40 & 0x3f) | (ulonglong)local_48);
      uStack_40 = uStack_40 | 0x10;
    }
  }
  uVar47 = (uint)*(short *)(param_3 + 0x200 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
  uVar28 = (ulonglong)uVar47;
  if ((int)uVar47 < 0) {
    uVar47 = 0xb;
    do {
      uVar20 = uVar47;
      uVar47 = ~(uint)uVar28 +
               (uint)(((ulonglong)local_48 >> ((ulonglong)(uVar20 - 1 & 0xff) & 0x3f) & 1) != 0);
      if (0x23f < uVar47) {
        uVar28 = 0x7fff;
        break;
      }
      uVar19 = (uint)*(short *)(param_3 + 0xa00 + (ulonglong)uVar47 * 2);
      uVar28 = (ulonglong)uVar19;
      uVar47 = (uint)(byte)((char)uVar20 + 1);
    } while ((int)uVar19 < 0);
  }
  else {
    uVar20 = uVar47 >> 9;
    uVar28 = (ulonglong)(uVar47 & 0x1ff);
  }
  local_48 = (ulonglong *******)((ulonglong)local_48 >> ((byte)uVar20 & 0x3f));
  uStack_40 = uStack_40 - uVar20;
  uStack_38 = (uint)uVar28;
  pppppppuVar23 = (ulonglong *******)CONCAT71((int7)(uVar28 >> 8),0xd);
  pppppppuVar18 = local_48;
  param_7 = pppppppuVar38;
  goto LAB_002056ee;
  while( true ) {
    pcStack_1f8 = (code *)0x2074b0;
    uVar52 = (*(code *)PTR_memmove_00219fb0)(ppuStack_1c0);
    ppuVar49 = (undefined **)((longlong)ppuVar49 + 4);
    ppuVar22 = (undefined **)((longlong)ppuVar40 + 4);
    if (ppuVar24 <= ppuVar49) break;
LAB_00207467:
    ppuVar40 = ppuVar22;
    pbStack_1e0 = (byte *)((longlong)ppuVar40 + 3);
    uStack_1d8 = 0;
    pcStack_1f8 = (code *)0x20748a;
    ppuStack_1e8 = ppuVar40;
    lVar12 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>_0021ad50)();
    ppuVar45 = (undefined **)((longlong)ppuVar45 - lVar12);
    if ((undefined **)((longlong)ppuVar17 - (longlong)ppuVar45) < ppuVar49) {
      pcStack_1f8 = (code *)0x2076a6;
      uVar52 = (*(code *)PTR_panic_fmt_0021a010)
                         ((undefined **)((longlong)ppuVar17 - (longlong)ppuVar45),
                          &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ef8);
      goto LAB_002076a6;
    }
  }
  ppuVar22 = (undefined **)((longlong)ppuVar40 + 4);
  pppppppuVar35 = pppppppuStack_1c8;
  ppuVar40 = ppuStack_1d0;
  ppuVar32 = ppuStack_1c0;
  goto LAB_002075a1;
  while( true ) {
    (pbVar8 + 1)[(longlong)ppuVar45] = *(byte *)((longlong)ppuVar32 + (longlong)ppuVar33);
    ppuVar33 = (undefined **)
               ((ulonglong)((byte *)((longlong)ppuVar45 + (longlong)ppuVar22) + 2) &
               (ulonglong)ppuVar40);
    if (ppuVar17 <= ppuVar33) {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218da8;
      pcStack_190 = (code *)&pcStack_108;
      goto LAB_002077a1;
    }
    ppuVar11 = (undefined **)((byte *)((longlong)ppuVar49 + (longlong)ppuVar45) + 2);
    if (ppuVar17 <= ppuVar11) {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218dc0;
      goto LAB_00207747;
    }
    (pbVar8 + 2)[(longlong)ppuVar45] = *(byte *)((longlong)ppuVar32 + (longlong)ppuVar33);
    (pbVar8 + 3)[(longlong)ppuVar45] = *(byte *)((longlong)ppuVar32 + (longlong)ppuVar29);
    pbVar1 = (byte *)((longlong)ppuVar49 + (longlong)ppuVar45);
    ppuVar45 = (undefined **)((longlong)ppuVar45 + 4);
    if (ppuVar24 <= pbVar1 + 4) break;
LAB_002074ea:
    pcStack_190 = (code *)&pcStack_108;
    if (ppuVar17 <= (byte *)((longlong)ppuVar49 + (longlong)ppuVar45) + 3) {
LAB_002076a6:
      ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d30;
      goto LAB_002076b4;
    }
    ppuVar29 = (undefined **)
               ((ulonglong)((byte *)((longlong)ppuVar45 + (longlong)ppuVar22) + 3) &
               (ulonglong)ppuVar40);
    pcStack_190 = (code *)&pcStack_108;
    if (ppuVar17 <= ppuVar29) goto LAB_002076bf;
    ppuVar33 = (undefined **)
               ((ulonglong)((longlong)ppuVar45 + (longlong)ppuVar22) & (ulonglong)ppuVar40);
    if (ppuVar17 <= ppuVar33) {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d60;
      pcStack_190 = (code *)&pcStack_108;
      goto LAB_002077a1;
    }
    pbVar8[(longlong)ppuVar45] = *(byte *)((longlong)ppuVar32 + (longlong)ppuVar33);
    ppuVar33 = (undefined **)
               ((ulonglong)((byte *)((longlong)ppuVar45 + (longlong)ppuVar22) + 1) &
               (ulonglong)ppuVar40);
    if (ppuVar17 <= ppuVar33) {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d78;
      pcStack_190 = (code *)&pcStack_108;
      goto LAB_002077a1;
    }
    ppuVar11 = (undefined **)((byte *)((longlong)ppuVar49 + (longlong)ppuVar45) + 1);
    if (ppuVar17 <= ppuVar11) {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d90;
LAB_00207747:
      ppuVar33 = ppuVar11;
      pcStack_190 = (code *)&pcStack_108;
      goto LAB_002077a1;
    }
  }
  ppuVar22 = (undefined **)((longlong)ppuVar22 + (longlong)ppuVar45);
  ppuVar49 = (undefined **)((longlong)ppuVar49 + (longlong)ppuVar45);
  pcStack_190 = (code *)&pcStack_108;
LAB_002075a1:
  uVar20 = (uint)pppppppuVar35 & 3;
  puVar48 = &switchD_00207423::switchdataD_0012f4e8;
  uVar47 = (&switchD_00207423::switchdataD_0012f4e8)[uVar20];
  switch(uVar20) {
  case 0:
    goto switchD_00207423_caseD_0;
  case 1:
switchD_00207423_caseD_1:
    ppuVar45 = (undefined **)
               ((longlong)&switchD_00207423::switchdataD_0012f4e8 + (longlong)(int)uVar47);
    ppuVar33 = (undefined **)((ulonglong)ppuVar22 & (ulonglong)ppuVar40);
    if (ppuVar17 <= ppuVar33) {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218dd8;
LAB_00207792:
      ppuVar22 = ppuVar33;
      goto LAB_002077a1;
    }
    if (ppuVar49 < ppuVar17) {
LAB_00207676:
      puVar48 = (uint *)(ulonglong)*(byte *)((longlong)ppuVar32 + (longlong)ppuVar33);
      *(byte *)((longlong)ppuVar32 + (longlong)ppuVar49) =
           *(byte *)((longlong)ppuVar32 + (longlong)ppuVar33);
switchD_00207423_caseD_0:
      return (ulonglong *******)puVar48;
    }
    ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218df0;
    ppuVar22 = ppuVar33;
    ppuVar33 = ppuVar49;
    break;
  case 2:
switchD_00207423_caseD_2:
    ppuVar24 = (undefined **)((longlong)ppuVar49 + 1);
    if (ppuVar17 <= ppuVar24) goto LAB_002076ee;
    ppuVar45 = (undefined **)((ulonglong)((longlong)ppuVar22 + 1) & (ulonglong)ppuVar40);
    if (ppuVar17 <= ppuVar45) {
      ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e20;
LAB_002076cd:
      do {
        pcStack_1f8 = (code *)0x2076d8;
        (*(code *)PTR_panic_00219ca8)(uVar52,ppuVar22);
LAB_002076d8:
        pcStack_1f8 = (code *)0x2076ee;
        uVar52 = (*(code *)PTR_slice_index_fail_00219d80)
                           (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d18,ppuVar17);
LAB_002076ee:
        ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e08;
LAB_002076b4:
        pcStack_1f8 = (code *)0x2076bf;
        uVar52 = (*(code *)PTR_panic_00219ca8)(uVar52,ppuVar22);
LAB_002076bf:
        ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d48;
      } while( true );
    }
    ppuVar33 = (undefined **)((ulonglong)ppuVar22 & (ulonglong)ppuVar40);
    if (ppuVar17 <= ppuVar33) {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e38;
      goto LAB_00207792;
    }
    if (ppuVar49 < ppuVar17) {
LAB_00207668:
      *(byte *)((longlong)ppuVar32 + (longlong)ppuVar49) =
           *(byte *)((longlong)ppuVar32 + (longlong)ppuVar33);
      ppuVar33 = ppuVar45;
      ppuVar49 = ppuVar24;
      goto LAB_00207676;
    }
    ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e50;
    ppuVar22 = ppuVar33;
    ppuVar33 = ppuVar49;
    break;
  case 3:
switchD_00207423_caseD_3:
    ppuVar24 = (undefined **)((longlong)ppuVar49 + 2);
    if (ppuVar17 <= ppuVar24) {
      ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e68;
      goto LAB_002076b4;
    }
    ppuVar45 = (undefined **)((ulonglong)((longlong)ppuVar22 + 2) & (ulonglong)ppuVar40);
    if (ppuVar17 <= ppuVar45) {
      ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e80;
      goto LAB_002076cd;
    }
    ppuVar33 = (undefined **)((ulonglong)ppuVar22 & (ulonglong)ppuVar40);
    if (ppuVar17 <= ppuVar33) {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e98;
      goto LAB_002077a1;
    }
    if (ppuVar49 < ppuVar17) {
      *(byte *)((longlong)ppuVar32 + (longlong)ppuVar49) =
           *(byte *)((longlong)ppuVar32 + (longlong)ppuVar33);
      ppuVar33 = (undefined **)((ulonglong)((longlong)ppuVar22 + 1) & (ulonglong)ppuVar40);
      if (ppuVar17 <= ppuVar33) {
        ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ec8;
        goto LAB_00207792;
      }
      ppuVar49 = (undefined **)((longlong)ppuVar49 + 1);
      if (ppuVar49 < ppuVar17) goto LAB_00207668;
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ee0;
      ppuVar22 = ppuVar33;
      ppuVar33 = ppuVar49;
    }
    else {
      ppuVar24 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218eb0;
      ppuVar33 = ppuVar49;
    }
  }
  ppuVar49 = ppuVar33;
LAB_002077a1:
  pcStack_1f8 = init_tree;
  (*(code *)PTR_panic_bounds_check_0021a020)(ppuVar45,ppuVar24);
  pcStack_1f8 = (code *)&pcStack_190;
  ppuStack_200 = ppuVar49;
  ppuStack_208 = ppuVar32;
  ppuStack_210 = ppuVar22;
  ppuStack_218 = ppuVar40;
  ppuStack_220 = ppuVar17;
  ppuStack_228 = ppuVar17;
  bVar7 = *(byte *)((longlong)ppuVar33 + 0x28ef);
LAB_002077c8:
  if (bVar7 == 0) {
    uVar14 = 0x120;
    ppuVar17 = ppuVar33 + 0x4f0;
  }
  else {
    if (bVar7 == 2) {
      auStack_298[8] = 0;
      auStack_298[9] = 0;
      auStack_298[10] = 0;
      auStack_298[0xb] = 0;
      auStack_298[0xc] = 0;
      auStack_298[0xd] = 0;
      auStack_298[0xe] = 0;
      auStack_298[0xf] = 0;
      auStack_298[0] = 0;
      auStack_298[1] = 0;
      auStack_298[2] = 0;
      auStack_298[3] = 0;
      auStack_298[4] = 0;
      auStack_298[5] = 0;
      auStack_298[6] = 0;
      auStack_298[7] = 0;
      aiStack_278[0xc] = 0;
      aiStack_278[0xd] = 0;
      aiStack_278[0xe] = 0;
      aiStack_278[0xf] = 0;
      aiStack_278[8] = 0;
      aiStack_278[9] = 0;
      aiStack_278[10] = 0;
      aiStack_278[0xb] = 0;
      aiStack_278[4] = 0;
      aiStack_278[5] = 0;
      aiStack_278[6] = 0;
      aiStack_278[7] = 0;
      aiStack_278[0] = 0;
      aiStack_278[1] = 0;
      aiStack_278[2] = 0;
      aiStack_278[3] = 0;
      aiStack_278[0x10] = 0;
      lVar12 = 0;
      do {
        pbVar8 = (byte *)((longlong)ppuVar33 + lVar12 + 0x1b00);
        pbVar8[0] = 0x1e;
        pbVar8[1] = 3;
        lVar12 = lVar12 + 2;
      } while (lVar12 != 0x800);
      uVar14 = 0x13;
      ppuVar17 = (undefined **)((longlong)ppuVar33 + 0x28f1);
      ppuVar22 = ppuVar33 + 0x360;
      goto LAB_002078b2;
    }
    if (bVar7 != 1) {
      return (ulonglong *******)0xff;
    }
    uVar14 = 0x20;
    ppuVar17 = ppuVar33 + 0x514;
  }
  ppuVar22 = ppuVar33 + (ulonglong)bVar7 * 400 + 0x40;
  auStack_298[8] = 0;
  auStack_298[9] = 0;
  auStack_298[10] = 0;
  auStack_298[0xb] = 0;
  auStack_298[0xc] = 0;
  auStack_298[0xd] = 0;
  auStack_298[0xe] = 0;
  auStack_298[0xf] = 0;
  auStack_298[0] = 0;
  auStack_298[1] = 0;
  auStack_298[2] = 0;
  auStack_298[3] = 0;
  auStack_298[4] = 0;
  auStack_298[5] = 0;
  auStack_298[6] = 0;
  auStack_298[7] = 0;
  aiStack_278[0xc] = 0;
  aiStack_278[0xd] = 0;
  aiStack_278[0xe] = 0;
  aiStack_278[0xf] = 0;
  aiStack_278[8] = 0;
  aiStack_278[9] = 0;
  aiStack_278[10] = 0;
  aiStack_278[0xb] = 0;
  aiStack_278[4] = 0;
  aiStack_278[5] = 0;
  aiStack_278[6] = 0;
  aiStack_278[7] = 0;
  aiStack_278[0] = 0;
  aiStack_278[1] = 0;
  aiStack_278[2] = 0;
  aiStack_278[3] = 0;
  aiStack_278[0x10] = 0;
  lVar12 = 0;
  do {
    ((byte *)((longlong)ppuVar22 + lVar12))[0] = 0x1e;
    ((byte *)((longlong)ppuVar22 + lVar12))[1] = 3;
    lVar12 = lVar12 + 2;
  } while (lVar12 != 0x800);
  (*(code *)PTR_memset_00219d00)(0,0x480);
LAB_002078b2:
  uVar41 = *(ushort *)((longlong)ppuVar33 + (ulonglong)bVar7 * 2 + 0x28e8);
  uVar28 = (ulonglong)uVar41;
  if (uVar14 < uVar41) {
    return (ulonglong *******)0xff;
  }
  if (uVar28 != 0) {
    uVar43 = 0;
    do {
      if (0xf < (ulonglong)*(byte *)((longlong)ppuVar17 + uVar43)) {
        return (ulonglong *******)0xff;
      }
      auStack_298[*(byte *)((longlong)ppuVar17 + uVar43)] =
           auStack_298[*(byte *)((longlong)ppuVar17 + uVar43)] + 1;
      uVar43 = uVar43 + 1;
    } while (uVar28 != uVar43);
  }
  uVar36 = 1;
  bVar51 = false;
  iVar30 = 0;
  iVar16 = 0;
  uVar43 = 0;
  do {
    if (bVar51) {
      uVar37 = uVar43 + (uVar43 < 0x10);
      if (0xf < uVar43) break;
    }
    else {
      uVar37 = 0x10 - uVar43;
      if (uVar36 <= 0x10 - uVar43) {
        uVar37 = uVar36;
      }
      if (uVar43 <= uVar37 + uVar43) {
        uVar43 = uVar37 + uVar43;
      }
      if (0xf < uVar43) break;
      uVar37 = uVar43 + 1;
    }
    iVar16 = iVar16 + (uint)auStack_298[uVar43];
    iVar30 = (iVar30 + (uint)auStack_298[uVar43]) * 2;
    aiStack_278[uVar43 + 1] = iVar30;
    bVar51 = true;
    uVar36 = 0;
    uVar43 = uVar37;
  } while( true );
  if (iVar30 != 0x10000) {
    if (bVar7 == 2) {
      return (ulonglong *******)0x1;
    }
    if (1 < (ushort)iVar16) {
      return (ulonglong *******)0x1;
    }
  }
  if (uVar28 != 0) {
    uVar14 = 0xffff;
    uVar43 = 0;
    do {
      while( true ) {
        uVar36 = uVar43 + 1;
        bVar7 = *(byte *)((longlong)ppuVar17 + uVar43);
        uVar47 = bVar7 & 0xf;
        if ((bVar7 & 0xf) != 0) break;
LAB_00207a41:
        uVar43 = uVar36;
        if (uVar36 == uVar28) goto LAB_00207b09;
      }
      bVar13 = (byte)uVar47;
      uVar41 = (ushort)((uint)(aiStack_278[uVar47] << (-bVar13 & 0x1f)) >> (-bVar13 & 0x1f));
      uVar41 = uVar41 << 8 | uVar41 >> 8;
      uVar20 = (uVar41 & 0xf0f) << 4 | (uVar41 & 0xf0f0) >> 4;
      uVar20 = (uVar20 >> 2 & 0x3333) + (uVar20 & 0x3333) * 4;
      uVar19 = (uVar20 >> 1 & 0x5555) + (uVar20 & 0x5555) * 2 >> (0x10 - bVar13 & 0x1f);
      aiStack_278[uVar47] = aiStack_278[uVar47] + 1;
      uVar20 = uVar19 & 0xffff;
      uVar37 = (ulonglong)uVar20;
      if (bVar13 < 0xb) {
        if (uVar20 < 0x400) {
          do {
            *(ushort *)((longlong)ppuVar22 + uVar37 * 2) = (ushort)uVar43 | (ushort)(uVar47 << 9);
            uVar37 = uVar37 + (uint)(1 << bVar13);
          } while (uVar37 < 0x400);
        }
        goto LAB_00207a41;
      }
      uVar37 = (ulonglong)(uVar19 & 0x3ff);
      uVar41 = *(ushort *)((longlong)ppuVar22 + uVar37 * 2);
      if (uVar41 == 0x31e) {
        *(ushort *)((longlong)ppuVar22 + uVar37 * 2) = uVar14;
        uVar41 = uVar14;
        uVar14 = uVar14 - 2;
      }
      uVar20 = uVar20 >> 9;
      uVar37 = (ulonglong)uVar20;
      if (bVar13 != 0xb) {
        cVar34 = (bVar7 & 0xf) - 0xb;
        do {
          uVar42 = ~uVar41 + (ushort)(((uint)uVar37 >> 1 & 1) != 0);
          if (0x23f < uVar42) {
            return (ulonglong *******)0xff;
          }
          uVar41 = *(ushort *)((longlong)ppuVar22 + (ulonglong)uVar42 * 2 + 0x800);
          if (uVar41 == 0) {
            *(ushort *)((longlong)ppuVar22 + (ulonglong)uVar42 * 2 + 0x800) = uVar14;
            uVar41 = uVar14;
            uVar14 = uVar14 - 2;
          }
          else {
          }
          uVar37 = uVar37 >> 1;
          uVar20 = (uint)uVar37;
          cVar34 = cVar34 + -1;
        } while (cVar34 != '\0');
      }
      uVar41 = ~uVar41 + (ushort)((uVar20 >> 1 & 1) != 0);
      if (0x23f < uVar41) {
        return (ulonglong *******)0xff;
      }
      *(ushort *)((longlong)ppuVar22 + (ulonglong)uVar41 * 2 + 0x800) = (ushort)uVar43;
      uVar43 = uVar36;
    } while (uVar36 < uVar28);
  }
LAB_00207b09:
  bVar7 = *(byte *)((longlong)ppuVar33 + 0x28ef);
  if (bVar7 == 0) {
    *(undefined4 *)(ppuStack_228 + 2) = 0;
    return (ulonglong *******)0x1;
  }
  if (bVar7 == 2) {
    *(undefined4 *)(ppuStack_228 + 2) = 0;
    return (ulonglong *******)0x1;
  }
  bVar7 = bVar7 - 1;
  *(byte *)((longlong)ppuVar33 + 0x28ef) = bVar7;
  goto LAB_002077c8;
}


