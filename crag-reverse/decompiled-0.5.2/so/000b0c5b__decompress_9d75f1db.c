// 000b0c5b decompress

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* miniz_oxide[d073f249698f1019]::inflate::core::decompress */

qword * __rustcall
miniz_oxide[d073f249698f1019]::inflate::core::decompress
          (undefined4 param_1,qword *param_2,ulonglong param_3,qword *param_4,qword *param_5,
          longlong param_6,qword *param_7,qword *param_8,uint param_9)

{
  char *pcVar1;
  undefined **ppuVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  qword *pqVar8;
  qword *pqVar9;
  byte bVar10;
  qword qVar11;
  byte *pbVar12;
  qword *pqVar13;
  byte *pbVar14;
  byte *pbVar15;
  longlong lVar16;
  byte bVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  undefined **ppuVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  qword *extraout_RDX;
  qword *extraout_RDX_00;
  undefined7 uVar30;
  qword *pqVar25;
  uint7 uVar31;
  qword *extraout_RDX_01;
  undefined8 extraout_RDX_02;
  qword *extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  byte *pbVar29;
  qword *pqVar32;
  ulonglong uVar33;
  qword *pqVar34;
  qword *pqVar35;
  uint *puVar36;
  int iVar37;
  undefined1 *puVar38;
  char cVar39;
  qword *pqVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  qword *pqVar43;
  undefined1 *puVar44;
  ushort uVar45;
  ulonglong uVar46;
  qword *pqVar47;
  undefined1 *puVar48;
  qword *pqVar49;
  undefined1 *puVar50;
  uint uVar51;
  uint *puVar52;
  bool bVar53;
  bool bVar54;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar55;
  ushort auStack_298 [16];
  int aiStack_278 [20];
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  byte *pbStack_210;
  undefined1 *puStack_208;
  byte *pbStack_200;
  code *pcStack_1f8;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  undefined1 uStack_1d8;
  undefined1 *puStack_1d0;
  qword *pqStack_1c8;
  undefined1 *puStack_1c0;
  char *pcStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  code *pcStack_190;
  qword *pqStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  undefined **ppuStack_170;
  qword *pqStack_168;
  undefined4 uStack_15c;
  byte *pbStack_158;
  undefined8 *puStack_150;
  uint uStack_144;
  uint *puStack_140;
  uint uStack_138;
  byte bStack_131;
  qword *pqStack_130;
  qword *pqStack_128;
  qword *pqStack_120;
  qword *pqStack_118;
  ulonglong uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  longlong local_f8;
  qword *local_f0;
  longlong local_e8;
  byte *local_e0;
  char *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  uint local_b0 [6];
  qword *local_98;
  ulonglong local_90;
  qword *local_88;
  longlong local_80;
  qword *local_78;
  qword *local_70;
  qword *local_68;
  char local_5d;
  uint local_5c;
  qword *local_58;
  qword *local_50;
  qword *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  byte bStack_34;
  undefined1 auStack_33 [3];
  
  local_98 = param_2;
  if (param_8 <= param_7) {
    local_68 = (qword *)(-(ulonglong)((param_9 & 4) != 0) |
                        (ulonglong)
                        ((longlong)param_7 +
                        (ulonglong)(param_7 == (qword *)0x0) + 0xffffffffffffffff));
    if (((ulonglong)((longlong)local_68 + 1) & (ulonglong)local_68) == 0) {
      local_e0 = (byte *)((longlong)local_68 + 1);
      local_f0 = param_4;
      local_58 = param_4;
      local_50 = param_5;
      pqVar25 = (qword *)CONCAT71((int7)((ulonglong)param_4 >> 8),
                                  *(undefined1 *)((longlong)&__DT_RELA[0xf0].r_offset + param_3 + 4)
                                 );
      local_80 = param_6;
      local_78 = param_7;
      local_70 = param_8;
      uStack_3c = *(uint *)((longlong)&__DT_RELA[0xee].r_info + param_3 + 4);
      bStack_34 = *(byte *)((longlong)&__DT_RELA[0xef].r_info + param_3);
      pqVar13 = (qword *)CONCAT71((int7)((ulonglong)param_6 >> 8),bStack_34);
      local_48 = *(qword **)((longlong)&__DT_RELA[0xed].r_info + param_3);
      uStack_40 = *(uint *)((longlong)&__DT_RELA[0xed].r_addend + param_3);
      uStack_38 = *(uint *)((longlong)&__DT_RELA[0xee].r_addend + param_3);
      local_5c = 1;
      if ((param_9 & 2) == 0) {
        local_5c = 0xfc;
      }
      local_c0 = param_3 + 0x2780;
      local_b8 = (undefined4 *)((longlong)&__DT_RELA[0xec].r_offset + param_3);
      local_c8 = (undefined8 *)((longlong)&__DT_RELA[0xef].r_info + param_3 + 1);
      local_d8 = (char *)((longlong)&__DT_RELA[0xe6].r_offset + param_3);
      local_d0 = (undefined8 *)((longlong)&__DT_RELA[0xea].r_addend + param_3);
      local_5d = ((param_9 & 1) == 0) * '\x02' + '\x01';
      local_e8 = param_3 + 0x28e4;
      local_90 = param_3;
      pqVar34 = (qword *)(ulonglong)uStack_3c;
      pqVar49 = local_68;
LAB_000b0d9e:
      uVar51 = uStack_38;
      pqVar8 = local_50;
      pqVar35 = local_58;
      pqVar43 = local_78;
      uVar7 = _UNK_0000908c;
      uVar6 = _UNK_00009088;
      uVar5 = _UNK_00009084;
      uVar55 = _DAT_00009080;
      pqVar47 = (qword *)(ulonglong)param_9;
      puVar52 = &switchD_000b0db3::switchdataD_00016d44;
      ppuVar21 = (undefined **)((ulonglong)pqVar25 & 0xffffffff);
      bVar10 = (byte)pqVar25;
      uVar31 = (uint7)((ulonglong)pqVar34 >> 8);
      if (0x18 < bVar10) {
        uVar51 = (uint)CONCAT71(uVar31,0xff);
        pqVar47 = pqVar49;
        goto LAB_000b21e0;
      }
      uVar24 = (&switchD_000b0db3::switchdataD_00016d44)[(ulonglong)pqVar25 & 0xff];
      uVar30 = (undefined7)((ulonglong)pqVar25 >> 8);
      bVar17 = (byte)uStack_40;
      pqVar32 = param_5;
      pqVar40 = pqVar13;
      pqVar9 = pqVar47;
      switch((ulonglong)pqVar25 & 0xff) {
      case 0:
        local_48 = (qword *)0x0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        bStack_34 = 0;
        *(undefined4 *)((longlong)&__DT_RELA[0xed].r_addend + param_3 + 4) = _DAT_00009080;
        *(undefined4 *)((longlong)&__DT_RELA[0xee].r_offset + param_3) = uVar5;
        *(undefined4 *)((longlong)&__DT_RELA[0xee].r_offset + param_3 + 4) = uVar6;
        *(undefined4 *)((longlong)&__DT_RELA[0xee].r_info + param_3) = uVar7;
        pqVar25 = (qword *)(CONCAT71((int7)((ulonglong)
                                            ((longlong)&switchD_000b0db3::switchdataD_00016d44 +
                                            (longlong)(int)uVar24) >> 8),local_5d) & 0xffffffff);
        param_1 = uVar55;
        goto LAB_000b0d9e;
      case 1:
        if (local_50 == (qword *)0x0) {
          bVar10 = 1;
          goto LAB_000b21a3;
        }
        local_58 = (qword *)((longlong)local_58 + 1);
        local_50 = (qword *)((longlong)local_50 + 0xffffffffffffffff);
        *(uint *)((longlong)&__DT_RELA[0xed].r_addend + param_3 + 4) = (uint)(byte)*pqVar35;
        pqVar25 = (qword *)CONCAT71((int7)((ulonglong)local_58 >> 8),2);
        goto LAB_000b0d9e;
      case 2:
        if (local_50 == (qword *)0x0) {
          bVar10 = 2;
LAB_000b21a3:
          uVar33 = (ulonglong)local_5c;
          goto LAB_000b21a6;
        }
        local_58 = (qword *)((longlong)local_58 + 1);
        local_50 = (qword *)((longlong)local_50 + 0xffffffffffffffff);
        bVar10 = (byte)*pqVar35;
        uVar51 = *(uint *)((longlong)&__DT_RELA[0xed].r_addend + param_3 + 4);
        uVar24 = uVar51 << 8 | (uint)bVar10;
        pqVar34 = (qword *)(ulonglong)uVar24;
        *(uint *)((longlong)&__DT_RELA[0xee].r_offset + param_3) = (uint)bVar10;
        bVar54 = (uVar51 & 0xf) != 8 || ((bVar10 & 0x20) != 0 || uVar24 % 0x1f != 0);
        uVar51 = (uVar51 >> 4) + 8 & 0x3f;
        if ((param_9 & 4) == 0) {
          bVar54 = bVar54 || (ulonglong)local_e0 >> (sbyte)uVar51 == 0;
        }
        uVar24 = 3;
        if (bVar54) {
          uVar24 = 0x1d;
        }
        pqVar25 = (qword *)(ulonglong)uVar24;
        if (0xf < uVar51) {
          pqVar25 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_entry + 5);
        }
        goto LAB_000b0d9e;
      case 3:
        pqVar13 = local_50;
        pqVar25 = local_58;
        do {
          pqVar49 = local_48;
          if (uStack_40 < 3) {
            if (pqVar13 != (qword *)0x0) {
              pqVar13 = (qword *)((longlong)pqVar13 + 0xffffffffffffffff);
              pqVar43 = (qword *)((longlong)pqVar25 + 1);
              local_58 = pqVar43;
              local_50 = pqVar13;
              uVar33 = (ulonglong)(byte)*pqVar25 << ((byte)uStack_40 & 0x3f) | (ulonglong)local_48;
              local_48 = (qword *)(uVar33 >> 3);
              uStack_40 = (uStack_40 | 8) - 3;
              *(byte *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 6) = (byte)uVar33 & 1;
              bVar10 = (byte)uVar33 >> 1;
              pqVar34 = (qword *)(CONCAT71((int7)(uVar33 >> 8),bVar10) & 0xffffffffffffff03);
              *(char *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 7) = (char)pqVar34;
              pqVar25 = pqVar43;
              switch(bVar10 & 3) {
              case 1:
                goto switchD_000b14a8_caseD_1;
              case 2:
                goto switchD_000b14a8_caseD_2;
              case 3:
                goto switchD_000b14a8_caseD_3;
              }
              goto switchD_000b14a8_caseD_0;
            }
            bVar10 = 3;
LAB_000b215e:
            uVar33 = (ulonglong)local_5c;
            goto LAB_000b2161;
          }
          pqVar43 = (qword *)((ulonglong)local_48 >> 3);
          local_48 = pqVar43;
          uStack_40 = uStack_40 - 3;
          *(byte *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 6) = (byte)pqVar49 & 1;
          bVar10 = (byte)((ulonglong)pqVar49 >> 1) & 3;
          *(byte *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 7) = bVar10;
          switch(bVar10) {
          case 0:
switchD_000b14a8_caseD_0:
            pqVar25 = (qword *)CONCAT71((int7)((ulonglong)pqVar43 >> 8),4);
            goto LAB_000b203f;
          case 2:
switchD_000b14a8_caseD_2:
            uStack_38 = 0;
            pqVar25 = (qword *)CONCAT71((int7)((ulonglong)pqVar43 >> 8),8);
            goto LAB_000b203f;
          case 3:
switchD_000b14a8_caseD_3:
            pqVar25 = (qword *)CONCAT71((int7)((ulonglong)pqVar43 >> 8),0x19);
            goto LAB_000b203f;
          }
switchD_000b14a8_caseD_1:
          *(undefined4 *)((longlong)&__DT_RELA[0xef].r_offset + param_3) = 0x200120;
          pcStack_100 = (code *)0xb1507;
          (*(code *)PTR_memset_000c3cd8)(&switchD_000b14a8::switchdataD_00016da8,0x90);
          uVar4 = s__00008f70._8_8_;
          uVar26 = s__00008f70._0_8_;
          *(undefined8 *)local_d8 = s__00008f70._0_8_;
          *(undefined8 *)(local_d8 + 8) = uVar4;
          *(undefined8 *)(local_d8 + 0x10) = uVar26;
          *(undefined8 *)(local_d8 + 0x18) = uVar4;
          *(undefined8 *)(local_d8 + 0x20) = uVar26;
          *(undefined8 *)(local_d8 + 0x28) = uVar4;
          *(undefined8 *)(local_d8 + 0x30) = uVar26;
          *(undefined8 *)(local_d8 + 0x38) = uVar4;
          *(undefined8 *)(local_d8 + 0x40) = uVar26;
          *(undefined8 *)(local_d8 + 0x48) = uVar4;
          *(undefined8 *)(local_d8 + 0x50) = uVar26;
          *(undefined8 *)(local_d8 + 0x58) = uVar4;
          *(undefined8 *)(local_d8 + 0x60) = uVar26;
          *(undefined8 *)(local_d8 + 0x68) = uVar4;
          uVar26 = _UNK_00008ec8;
          *local_d0 = _DAT_00008ec0;
          local_d0[1] = uVar26;
          local_d0[2] = 0x707070707070707;
          *(undefined8 *)((longlong)&__DT_RELA[0xeb].r_addend + param_3) = 0x808080808080808;
          uVar7 = _UNK_000090dc;
          uVar6 = _UNK_000090d8;
          uVar5 = _UNK_000090d4;
          uVar55 = _DAT_000090d0;
          local_b8[4] = _DAT_000090d0;
          local_b8[5] = uVar5;
          local_b8[6] = uVar6;
          local_b8[7] = uVar7;
          *local_b8 = uVar55;
          local_b8[1] = uVar5;
          local_b8[2] = uVar6;
          local_b8[3] = uVar7;
          pqVar34 = (qword *)&local_48;
          pcStack_100 = (code *)0xb1581;
          uVar51 = init_tree(param_3);
          param_1 = extraout_XMM0_Da_00;
        } while ((char)uVar51 == '\0');
        pqVar25 = extraout_RDX_00;
        if ((uVar51 & 0xff) == 1) break;
        pqVar13 = pqVar40;
        if ((uVar51 & 0xff) != 2) {
          bVar10 = 3;
          goto LAB_000b21e0;
        }
        uVar33 = (ulonglong)extraout_RDX_00 & 0xffffffff;
        bVar10 = 3;
LAB_000b2164:
        pqVar49 = pqVar47;
LAB_000b21a6:
        uVar51 = (uint)uVar33;
        pqVar25 = param_5;
        if ((char)uVar33 == '\x01') {
          uVar30 = (undefined7)(param_3 >> 8);
          if (local_78 == local_70) {
            uVar33 = CONCAT71(uVar30,'\x02' - (bVar10 == 0x17));
            goto LAB_000b21d6;
          }
          bVar54 = true;
          puVar52 = (uint *)0x0;
          uVar33 = CONCAT71(uVar30,1);
        }
        else if ((uVar51 & 0xff) == 0xfc) {
LAB_000b21d6:
          bVar54 = true;
          puVar52 = (uint *)0x0;
        }
        else {
          pqVar47 = pqVar49;
LAB_000b21e0:
          uVar23 = (int)param_5 - (int)local_50;
          uVar24 = uStack_40 >> 3;
          if (uVar23 < uStack_40 >> 3) {
            uVar24 = uVar23;
          }
          puVar52 = (uint *)(ulonglong)uVar24;
          uStack_40 = uStack_40 + uVar24 * -8;
          uVar33 = (ulonglong)uVar51;
          bVar54 = (char)uVar51 != '\0';
          pqVar25 = param_5;
          pqVar49 = pqVar47;
        }
        uVar46 = local_90;
        pqVar47 = (qword *)(ulonglong)param_9;
        *(byte *)((longlong)&__DT_RELA[0xf0].r_offset + local_90 + 4) = bVar10;
        *(uint *)((longlong)&__DT_RELA[0xed].r_addend + local_90) = uStack_40;
        *(uint *)((longlong)&__DT_RELA[0xee].r_info + local_90 + 4) = uStack_3c;
        *(uint *)((longlong)&__DT_RELA[0xee].r_addend + local_90) = uStack_38;
        *(byte *)((longlong)&__DT_RELA[0xef].r_info + local_90) = bStack_34;
        *(ulonglong *)((longlong)&__DT_RELA[0xed].r_info + local_90) =
             ~(-1L << ((byte)uStack_40 & 0x3f)) & (ulonglong)local_48;
        uVar41 = uVar33;
        if ((((param_9 & 0x40) == 0) && ((param_9 & 9) != 0)) && (-1 < (char)uVar33)) {
          pqVar34 = local_78;
          pqVar40 = pqVar13;
          param_3 = uVar33;
          if ((local_70 < param_8) || (local_78 < local_70)) {
LAB_000b2413:
            pcStack_100 = (code *)0xb2427;
            (*(code *)PTR_slice_index_fail_000c3bb0)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b98,pqVar34);
            pqVar13 = pqVar47;
LAB_000b2427:
            pcStack_100 = (code *)0xb2439;
            (*(code *)PTR_slice_index_fail_000c3bb0)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2aa8,0x200);
            param_5 = pqVar25;
            pqVar47 = pqVar13;
LAB_000b2439:
            ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b80;
            pcStack_100 = (code *)0xb244c;
            param_1 = (*(code *)PTR_slice_index_fail_000c3bb0)
                                (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b80,param_5);
LAB_000b244c:
            pcStack_100 = (code *)0xb245e;
            param_1 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                                (param_1,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2a78);
            pqVar32 = param_5;
            param_5 = pqVar47;
            pqVar47 = pqVar49;
LAB_000b245e:
            pcStack_100 = (code *)0xb2470;
            param_1 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                                (param_1,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2a90);
            pqVar43 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_machine + 1);
LAB_000b2470:
            pqVar9 = param_5;
            local_58 = pqVar40;
            local_50 = param_7;
LAB_000b2478:
            param_5 = pqVar9;
            pcStack_100 = (code *)0xb2485;
            pbVar12 = (byte *)(*(code *)PTR_panic_bounds_check_000c3dd8)
                                        (param_1,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ac0);
LAB_000b2485:
            ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ac0;
            pcStack_100 = apply_match;
            local_58 = pqVar40;
            local_50 = param_7;
            uVar55 = (*(code *)PTR_panic_bounds_check_000c3dd8)();
            ppuVar28 = (undefined **)((longlong)ppuVar27 - (longlong)ppuVar21 & (ulonglong)param_7);
            if (pqVar40 == (qword *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2)) {
              if ((((ulonglong)((longlong)ppuVar27 + 3U) <= pqVar43 &&
                    ppuVar27 < (undefined **)0xfffffffffffffffd) &&
                  (puVar52 = (uint *)((longlong)ppuVar28 + 2U & (ulonglong)param_7),
                  puVar52 < pqVar43)) &&
                 ((ppuVar28 < pqVar43 &&
                  (puVar36 = (uint *)((longlong)ppuVar28 + 1 & (ulonglong)param_7),
                  puVar36 < pqVar43)))) {
                pbVar12[(longlong)ppuVar27] = pbVar12[(longlong)ppuVar28];
                (pbVar12 + 1)[(longlong)ppuVar27] = pbVar12[(longlong)puVar36];
                pqVar43 = (qword *)(ulonglong)pbVar12[(longlong)puVar52];
                (pbVar12 + 2)[(longlong)ppuVar27] = pbVar12[(longlong)puVar52];
              }
              return pqVar43;
            }
            if (((ppuVar27 <= ppuVar28 &&
                  (uint *)((longlong)ppuVar28 - (longlong)ppuVar27) < pqVar40) ||
                (ppuVar21 < pqVar40)) ||
               (ppuVar2 = (undefined **)((longlong)pqVar40 + (longlong)ppuVar28), pqVar43 <= ppuVar2
               )) {
              pcStack_100 = (code *)(auStack_33 + 0x2b);
              pqVar13 = (qword *)transfer(pbVar12,pqVar43,ppuVar28,ppuVar27);
              return pqVar13;
            }
            if (ppuVar28 < ppuVar27) {
              puVar36 = (uint *)((longlong)pqVar43 - (longlong)ppuVar27);
              pcStack_100 = (code *)(auStack_33 + 0x2b);
              if (ppuVar27 <= pqVar43) {
                if (puVar36 < pqVar40) {
                  ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c28;
                  pcStack_100 = (code *)(auStack_33 + 0x2b);
                  goto LAB_000b25a1;
                }
                pcStack_100 = (code *)(auStack_33 + 0x2b);
                if ((ppuVar28 <= ppuVar2) &&
                   (pcStack_100 = (code *)(auStack_33 + 0x2b), ppuVar2 <= ppuVar27))
                goto LAB_000b2571;
                goto LAB_000b25af;
              }
            }
            else {
              puVar36 = (uint *)((longlong)pqVar43 - (longlong)ppuVar28);
              if (pqVar43 < ppuVar28) {
                ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2bb0;
                pcStack_100 = (code *)(auStack_33 + 0x2b);
                goto LAB_000b25e0;
              }
              if ((CARRY8((ulonglong)pqVar40,(ulonglong)ppuVar27)) ||
                 (ppuVar28 < (undefined **)((longlong)ppuVar27 + (longlong)pqVar40))) {
                pcStack_108 = (code *)0xb259a;
                pcStack_100 = (code *)(auStack_33 + 0x2b);
                puVar36 = (uint *)(*(code *)PTR_slice_index_fail_000c3bb0)
                                            (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2be0);
              }
              else {
                pcStack_100 = (code *)(auStack_33 + 0x2b);
                if (pqVar40 <= puVar36) {
LAB_000b2571:
                  pcStack_100 = (code *)(auStack_33 + 0x2b);
                  pqVar13 = (qword *)(*(code *)PTR_memcpy_000c3aa8)(uVar55,pqVar40);
                  return pqVar13;
                }
              }
              ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2bc8;
LAB_000b25a1:
              pcStack_108 = (code *)0xb25af;
              (*(code *)PTR_slice_index_fail_000c3bb0)(ppuVar21,puVar36);
LAB_000b25af:
              ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c10;
              pcStack_108 = (code *)0xb25c2;
              (*(code *)PTR_slice_index_fail_000c3bb0)
                        (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c10,ppuVar27);
            }
            ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2bf8;
LAB_000b25e0:
            uVar55 = SUB84(ppuVar21,0);
            pcStack_108 = decompress_fast;
            (*(code *)PTR_panic_fmt_000c3e90)();
            pcStack_108 = (code *)&pcStack_100;
            uStack_110 = param_3;
            pqStack_118 = (qword *)puVar52;
            pqStack_120 = pqVar47;
            pqStack_128 = param_5;
            pqStack_130 = pqVar32;
            pqStack_188 = param_7;
            uStack_15c = uVar55;
            qVar11 = *pqVar40;
            uVar51 = (uint)pqVar40[1];
            uVar33 = (ulonglong)uVar51;
            puVar44 = (undefined1 *)(ulonglong)*(uint *)((longlong)pqVar40 + 0xc);
            puVar50 = ppuVar27[1];
            puVar48 = ppuVar27[2];
            bVar10 = *(undefined1 *)((longlong)pqVar40 + 0x14);
            if ((ulonglong)Elf64_Ehdr_00000000._27_8_ < 0xe ||
                (ulonglong)((longlong)puVar50 - (longlong)puVar48) < 0x103) {
              uStack_138 = (uint)pqVar40[2];
LAB_000b264a:
              pqVar13 = (qword *)0x0;
            }
            else {
              puStack_150 = (undefined8 *)((longlong)&Elf64_Ehdr_00000000.e_machine + 1);
              puStack_140 = (uint *)Elf64_Ehdr_00000000._19_8_;
              pbStack_158 = *ppuVar27;
              uVar46 = Elf64_Ehdr_00000000._27_8_;
              ppuStack_170 = ppuVar27;
              pqStack_168 = pqVar40;
LAB_000b266e:
              do {
                uVar51 = (uint)uVar33;
                if (uVar51 < 0x1e) {
                  uVar24 = *puStack_140;
                  uVar46 = uVar46 - 4;
                  puStack_140 = puStack_140 + 1;
                  *puStack_150 = puStack_140;
                  puStack_150[1] = uVar46;
                  qVar11 = qVar11 | (ulonglong)uVar24 << ((byte)uVar33 & 0x3f);
                  uVar51 = uVar51 | 0x20;
                }
                uVar24 = (uint)*(short *)(
                                         "a formatting trait implementation returned an error when the underlying stream did not"
                                         + (ulonglong)((uint)qVar11 & 0x3ff) * 2 + 0x15);
                if ((int)uVar24 < 0) {
                  uVar23 = 0xb;
                  do {
                    uVar19 = uVar23;
                    uVar24 = ~uVar24 + (uint)((qVar11 >> ((ulonglong)(uVar19 - 1 & 0xff) & 0x3f) & 1
                                              ) != 0);
                    if (0x23f < uVar24) {
                      uVar24 = 0x7fff;
                      break;
                    }
                    uVar24 = (uint)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                              cn_planes_0_3::OFFSETS + (ulonglong)uVar24 * 2 + 0x584
                                             );
                    uVar23 = (uint)(byte)((char)uVar19 + 1);
                  } while ((int)uVar24 < 0);
                }
                else {
                  uVar19 = uVar24 >> 9;
                }
                qVar11 = qVar11 >> ((byte)uVar19 & 0x3f);
                uVar51 = uVar51 - uVar19;
                uVar33 = (ulonglong)uVar51;
                puVar38 = puVar48;
                uVar23 = uVar24;
                if ((uVar24 >> 8 & 1) != 0) {
LAB_000b27bb:
                  uStack_138 = uVar23 & 0x1ff;
                  if (uStack_138 == 0x100) {
                    uStack_138 = 0x100;
                    goto LAB_000b264a;
                  }
                  pqVar13 = (qword *)0xff;
                  if (0x11d < uStack_138) goto LAB_000b29b6;
                  uVar24 = uVar23 - 1 & 0x1f;
                  if (uVar51 < 0x1e) {
                    uVar23 = *puStack_140;
                    uVar46 = uVar46 - 4;
                    puStack_140 = puStack_140 + 1;
                    *puStack_150 = puStack_140;
                    puStack_150[1] = uVar46;
                    qVar11 = qVar11 | (ulonglong)uVar23 << ((byte)uVar51 & 0x3f);
                    uVar51 = uVar51 | 0x20;
                  }
                  bVar10 = ""[uVar24];
                  uStack_138 = (uint)*(ushort *)(&DAT_00016e3e + (ulonglong)uVar24 * 2);
                  if (0xffffffeb < uVar24 - 0x1c) {
                    uVar24 = (uint)qVar11;
                    qVar11 = qVar11 >> (bVar10 & 0x3f);
                    uVar51 = uVar51 - bVar10;
                    uStack_138 = (~(uint)(-1L << (bVar10 & 0x3f)) & uVar24) + uStack_138;
                  }
                  uVar24 = (uint)*(short *)(&UNK_00017cb4 + (ulonglong)((uint)qVar11 & 0x3ff) * 2);
                  if ((int)uVar24 < 0) {
                    uVar23 = 0xb;
                    do {
                      uVar19 = uVar23;
                      uVar24 = ~uVar24 + (uint)((qVar11 >> ((ulonglong)(uVar19 - 1 & 0xff) & 0x3f) &
                                                1) != 0);
                      if (0x23f < uVar24) {
                        uVar24 = 0x7fff;
                        break;
                      }
                      uVar24 = (uint)*(short *)(core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy
                                                ::grisu::CACHED_POW10 + (ulonglong)uVar24 * 2 + 0x4c
                                               );
                      uVar23 = (uint)(byte)((char)uVar19 + 1);
                    } while ((int)uVar24 < 0);
                  }
                  else {
                    uVar19 = uVar24 >> 9;
                  }
                  qVar11 = qVar11 >> ((byte)uVar19 & 0x3f);
                  uVar51 = uVar51 - uVar19;
                  if (0x1d < (uVar24 & 0x1ff)) goto LAB_000b29b6;
                  bVar10 = (byte)uVar24 >> 1;
                  bVar10 = (bVar10 - 1) + (bVar10 == 0);
                  uVar18 = *(ushort *)(&DAT_00016df8 + (ulonglong)(uVar24 & 0x1ff) * 2);
                  puVar44 = (undefined1 *)(ulonglong)uVar18;
                  if (3 < (byte)uVar24) {
                    if (uVar51 < 0x1e) {
                      uVar24 = *puStack_140;
                      uVar46 = uVar46 - 4;
                      puStack_140 = puStack_140 + 1;
                      *puStack_150 = puStack_140;
                      puStack_150[1] = uVar46;
                      qVar11 = qVar11 | (ulonglong)uVar24 << ((byte)uVar51 & 0x3f);
                      uVar51 = uVar51 | 0x20;
                    }
                    uVar24 = (uint)qVar11;
                    qVar11 = qVar11 >> (bVar10 & 0x3f);
                    uVar51 = uVar51 - bVar10;
                    puVar44 = (undefined1 *)
                              (ulonglong)((~(uint)(-1L << (bVar10 & 0x3f)) & uVar24) + (uint)uVar18)
                    ;
                  }
                  uVar33 = (ulonglong)uVar51;
                  uStack_144 = (uint)puVar44;
                  if ((puVar50 < puVar44) || (((byte)uStack_15c >> 2 & puVar38 < puVar44) != 0))
                  goto LAB_000b29b6;
                  uStack_180 = (ulonglong)uStack_138;
                  pcStack_190 = (code *)0xb2977;
                  uStack_178 = uVar46;
                  bStack_131 = bVar10;
                  apply_match(pbStack_158,puVar50,puVar38,puVar44,uStack_180,pqStack_188);
                  puVar48 = puVar38 + uStack_180;
                  ppuStack_170[2] = puVar48;
                  pqVar13 = (qword *)0x0;
                  pqVar40 = pqStack_168;
                  bVar10 = bStack_131;
                  if (0x102 < (ulonglong)((longlong)puVar50 - (longlong)puVar48)) {
                    puVar44 = (undefined1 *)(ulonglong)uStack_144;
                    ppuVar27 = ppuStack_170;
                    uVar46 = uStack_178;
                    if (0xd < uStack_178) goto LAB_000b266e;
                  }
                  puVar44 = (undefined1 *)(ulonglong)uStack_144;
                  goto LAB_000b29b6;
                }
                uVar23 = (uint)*(short *)(
                                         "a formatting trait implementation returned an error when the underlying stream did not"
                                         + (ulonglong)((uint)qVar11 & 0x3ff) * 2 + 0x15);
                if ((int)uVar23 < 0) {
                  uVar19 = 0xb;
                  do {
                    bVar17 = (byte)uVar19;
                    uVar23 = ~uVar23 + (uint)((qVar11 >> ((ulonglong)(uVar19 - 1 & 0xff) & 0x3f) & 1
                                              ) != 0);
                    if (0x23f < uVar23) {
                      uVar23 = 0x7fff;
                      break;
                    }
                    uVar23 = (uint)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                              cn_planes_0_3::OFFSETS + (ulonglong)uVar23 * 2 + 0x584
                                             );
                    uVar19 = (uint)(byte)(bVar17 + 1);
                  } while ((int)uVar23 < 0);
                  pbVar12 = (byte *)(ulonglong)bVar17;
                  ppuVar27 = ppuStack_170;
                }
                else {
                  pbVar12 = (byte *)(ulonglong)(uVar23 >> 9);
                }
                qVar11 = qVar11 >> ((byte)pbVar12 & 0x3f);
                if (puVar50 <= puVar48) {
LAB_000b2a16:
                  ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ac0;
                  pcStack_190 = transfer;
                  uVar55 = (*(code *)PTR_panic_bounds_check_000c3dd8)();
                  pcStack_1b8 = "mid > len";
                  uVar46 = (longlong)ppuVar21 - (longlong)pbVar12;
                  if (ppuVar21 <= pbVar12) {
                    uVar46 = (longlong)pbVar12 - (longlong)ppuVar21;
                  }
                  pbVar22 = pbVar12 + ((ulonglong)pqVar40 & 0xfffffffffffffffc);
                  puStack_1b0 = puVar48;
                  puStack_1a8 = puVar50;
                  uStack_1a0 = uVar33;
                  uStack_198 = qVar11;
                  if (((ppuVar21 < pbVar12) &&
                      ((byte *)((longlong)ppuVar21 + (longlong)pqVar40) + -3 < puVar50 ||
                       puVar44 == (undefined1 *)0xffffffffffffffff)) && (uVar46 == 1)) {
                    if (puVar50 <= pbVar12 + -1) {
                      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c40;
                      pbVar22 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
                      pbVar29 = pbVar12 + -1;
                      pcStack_190 = (code *)&pcStack_108;
                      goto LAB_000b2e51;
                    }
                    pcStack_190 = (code *)&pcStack_108;
                    if (pbVar22 < pbVar12) goto LAB_000b2d88;
                    pcStack_190 = (code *)&pcStack_108;
                    if (puVar50 < pbVar22) goto LAB_000b2d88;
                    pcStack_1f8 = (code *)0xb2ab8;
                    pcStack_190 = (code *)&pcStack_108;
                    uVar55 = (*(code *)PTR_memset_000c3cd8)();
                    ppuVar21 = (undefined **)(pbVar22 + -1);
                    uVar24 = (uint)pqVar40 & 3;
                    puVar52 = &switchD_000b2ad3::switchdataD_00016db8;
                    uVar51 = (&switchD_000b2ad3::switchdataD_00016db8)[uVar24];
                    pbVar12 = pbVar22;
                    switch(uVar24) {
                    case 0:
                      goto switchD_000b2ad3_caseD_0;
                    case 1:
                      goto switchD_000b2ad3_caseD_1;
                    case 2:
                      goto switchD_000b2ad3_caseD_2;
                    }
                    goto switchD_000b2ad3_caseD_3;
                  }
                  pbVar29 = puVar50 + -3;
                  pbVar15 = (byte *)0x0;
                  if (Elf64_Ehdr_00000000.e_ident_magic_str + 1 < puVar50) {
                    pbVar15 = pbVar29;
                  }
                  if (pbVar22 <= pbVar15) {
                    pbVar15 = pbVar22;
                  }
                  if (!((ppuVar21 < pbVar12 &&
                        ((byte *)((longlong)ppuVar21 + (longlong)pqVar40) + -3 < puVar50 ||
                        puVar44 == (undefined1 *)0xffffffffffffffff)) &&
                       3 < (ulonglong)((longlong)pbVar12 - (longlong)ppuVar21))) {
                    pcStack_190 = (code *)&pcStack_108;
                    if (pbVar15 <= pbVar12) goto LAB_000b2c51;
                    pbVar3 = pbVar12 + (longlong)puVar38;
                    pbVar22 = (byte *)0x0;
                    goto LAB_000b2b9a;
                  }
                  pcStack_190 = (code *)&pcStack_108;
                  if (pbVar15 <= pbVar12) goto LAB_000b2c51;
                  puStack_1d0 = puVar44;
                  pqStack_1c8 = pqVar40;
                  puStack_1c0 = puVar38;
                  pcStack_190 = (code *)&pcStack_108;
                  goto LAB_000b2b17;
                }
                uVar51 = uVar51 - (int)pbVar12;
                uVar33 = (ulonglong)uVar51;
                pbStack_158[(longlong)puVar48] = (byte)uVar24;
                puVar38 = puVar48 + 1;
                ppuVar27[2] = puVar38;
                if ((uVar23 >> 8 & 1) != 0) goto LAB_000b27bb;
                pbVar12 = pbStack_158;
                if (puVar50 <= puVar38) goto LAB_000b2a16;
                (pbStack_158 + 1)[(longlong)puVar48] = (byte)uVar23;
                puVar48 = puVar48 + 2;
                ppuVar27[2] = puVar48;
                pqVar13 = (qword *)0x0;
                if ((ulonglong)((longlong)puVar50 - (longlong)puVar48) < 0x103) break;
              } while (0xd < uVar46);
              uStack_138 = uVar24;
            }
LAB_000b29b6:
            *pqVar40 = qVar11;
            *(uint *)(pqVar40 + 1) = uVar51;
            *(int *)((longlong)pqVar40 + 0xc) = (int)puVar44;
            *(uint *)(pqVar40 + 2) = uStack_138;
            *(byte *)((longlong)pqVar40 + 0x14) = bVar10;
            return pqVar13;
          }
          local_b0[0] = *(undefined4 *)((longlong)&__DT_RELA[0xee].r_info + local_90);
          local_68 = (qword *)CONCAT71(local_68._1_7_,bVar54);
          pcStack_100 = (code *)0xb22c5;
          (*(code *)PTR_write_slice_000c4708)(bStack_34,(longlong)local_70 - (longlong)param_8);
          uVar24 = (uint)(uVar33 & 0xff);
          uVar51 = 0xfe;
          if (local_b0[0] == *(uint *)((longlong)&__DT_RELA[0xee].r_offset + uVar46 + 4)) {
            uVar51 = uVar24;
          }
          if ((char)local_68 != '\0') {
            uVar51 = uVar24;
          }
          *(uint *)((longlong)&__DT_RELA[0xee].r_info + uVar46) = local_b0[0];
          uVar41 = (ulonglong)uVar51;
          if ((param_9 & 1) == 0) {
            uVar41 = uVar33 & 0xff;
          }
        }
        qVar11 = (longlong)local_70 - (longlong)param_8;
        *(char *)(local_98 + 1) = (char)uVar41;
        *local_98 = (longlong)pqVar25 - (longlong)((longlong)local_50 + (longlong)puVar52);
        goto LAB_000b2317;
      case 4:
        local_48 = (qword *)((ulonglong)local_48 >> (bVar17 & 7));
        uStack_40 = uStack_40 & 0xfffffff8;
        uStack_38 = 0;
        pqVar25 = (qword *)CONCAT71(uVar30,5);
        goto LAB_000b0d9e;
      case 5:
        uVar51 = uStack_40;
        if ((ulonglong)uStack_38 < 4) {
          uVar24 = uStack_38 - 1;
          pbVar12 = (byte *)((ulonglong)uStack_38 + local_e8);
          pqVar25 = local_50;
          pqVar34 = local_48;
          pqVar13 = local_58;
          do {
            if (uVar51 == 0) {
              if (pqVar25 == (qword *)0x0) {
LAB_000b2195:
                bVar10 = 5;
                goto LAB_000b21a3;
              }
              pqVar25 = (qword *)((longlong)pqVar25 + 0xffffffffffffffff);
              pqVar43 = (qword *)((longlong)pqVar13 + 1);
              local_58 = pqVar43;
              local_50 = pqVar25;
              *pbVar12 = (byte)*pqVar13;
              uVar51 = 0;
            }
            else {
              pqVar43 = pqVar13;
              if (uVar51 < 8) {
                if (pqVar25 == (qword *)0x0) goto LAB_000b2195;
                pqVar25 = (qword *)((longlong)pqVar25 + 0xffffffffffffffff);
                pqVar43 = (qword *)((longlong)pqVar13 + 1);
                local_58 = pqVar43;
                local_50 = pqVar25;
                pqVar34 = (qword *)((ulonglong)pqVar34 |
                                   (ulonglong)(byte)*pqVar13 << ((byte)uVar51 & 0x3f));
                uVar51 = uVar51 | 8;
              }
              *pbVar12 = (byte)pqVar34;
              pqVar34 = (qword *)((ulonglong)pqVar34 >> 8);
              local_48 = pqVar34;
              uVar51 = uVar51 - 8;
              uStack_40 = uVar51;
            }
            uStack_38 = uVar24 + 2;
            param_7 = (qword *)(ulonglong)uStack_38;
            uVar24 = uVar24 + 1;
            pbVar12 = pbVar12 + 1;
            pqVar13 = pqVar43;
          } while (uVar24 < 3);
        }
        uVar18 = *(ushort *)((longlong)&__DT_RELA[0xee].r_addend + param_3 + 4);
        uVar45 = *(ushort *)((longlong)&__DT_RELA[0xee].r_addend + param_3 + 6) ^ uVar18;
        pqVar34 = (qword *)(ulonglong)uVar45;
        uStack_38 = (uint)uVar18;
        uVar30 = (undefined7)((ulonglong)pqVar25 >> 8);
        pqVar25 = (qword *)CONCAT71(uVar30,0x1f);
        if (uVar45 == 0xffff) {
          pqVar25 = (qword *)CONCAT71(uVar30,0x14);
          if (uVar18 != 0) {
            pqVar25 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_type + 1);
            if (uVar51 == 0) {
              pqVar25 = (qword *)&Elf64_Ehdr_00000000.e_ident_version;
            }
          }
        }
        goto LAB_000b0d9e;
      case 6:
        pqVar25 = (qword *)CONCAT71(uVar30,0x14);
        if (uStack_38 != 0) {
          pqVar25 = (qword *)CONCAT71(uVar30,7);
          if (local_78 == local_70) goto LAB_000b2350;
        }
        goto LAB_000b0d9e;
      case 7:
        uVar33 = (ulonglong)local_5c;
        if (local_50 == (qword *)0x0) {
          bVar10 = 7;
          local_88 = param_5;
          goto LAB_000b21a6;
        }
        pqVar25 = (qword *)((longlong)local_78 - (longlong)local_70);
        if (local_50 < (qword *)((longlong)local_78 - (longlong)local_70)) {
          pqVar25 = local_50;
        }
        pqVar49 = (qword *)(ulonglong)uStack_38;
        if (pqVar49 < pqVar25) {
          pqVar25 = pqVar49;
        }
        puVar52 = (uint *)((longlong)local_70 + (longlong)pqVar25);
        pqVar47 = local_50;
        local_88 = param_5;
        if ((!CARRY8((ulonglong)pqVar25,(ulonglong)local_70)) && (puVar52 <= local_78)) {
          pcStack_100 = (code *)0xb15f7;
          pqVar34 = pqVar25;
          param_1 = (*(code *)PTR_memcpy_000c3aa8)(ppuVar21,pqVar25);
          local_70 = (qword *)puVar52;
          local_58 = (qword *)((longlong)pqVar25 + (longlong)pqVar35);
          local_50 = (qword *)((longlong)pqVar8 - (longlong)pqVar25);
          uStack_38 = uVar51 - (int)pqVar25;
          pqVar25 = (qword *)CONCAT71((int7)((ulonglong)pqVar34 >> 8),6);
          goto LAB_000b1d98;
        }
LAB_000b2403:
        pcStack_100 = (code *)0xb2413;
        pqVar34 = (qword *)(*(code *)PTR_slice_index_fail_000c3bb0)
                                     (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ad8);
        pqVar40 = pqVar13;
        goto LAB_000b2413;
      case 8:
        pqVar34 = (qword *)(ulonglong)uStack_38;
        if (pqVar34 < Elf64_Ehdr_00000000.e_ident_magic_str + 2) {
          pqVar25 = local_58;
          pqVar13 = local_50;
          do {
            local_b0[0] = 5;
            local_b0[1] = 5;
            local_b0[2] = 4;
            uVar51 = local_b0[(longlong)pqVar34];
            pqVar43 = local_48;
            if (uStack_40 < uVar51) {
              lVar16 = -1;
              puVar52 = (uint *)0x0;
              do {
                if (pqVar13 == (qword *)puVar52) {
                  bVar10 = 8;
                  uVar33 = (ulonglong)local_5c;
                  param_7 = local_48;
                  goto LAB_000b21a6;
                }
                local_58 = (qword *)((byte *)((longlong)puVar52 + (longlong)pqVar25) + 1);
                local_50 = (qword *)((longlong)pqVar13 + lVar16);
                pqVar43 = (qword *)((ulonglong)local_48 |
                                   (ulonglong)*(byte *)((longlong)puVar52 + (longlong)pqVar25) <<
                                   ((byte)uStack_40 & 0x3f));
                uStack_40 = uStack_40 + 8;
                puVar52 = (uint *)((longlong)puVar52 + 1);
                lVar16 = lVar16 + -1;
                local_48 = pqVar43;
              } while (uStack_40 < uVar51);
              pqVar13 = (qword *)((longlong)pqVar13 - (longlong)puVar52);
              pqVar25 = (qword *)((longlong)puVar52 + (longlong)pqVar25);
            }
            param_7 = (qword *)((ulonglong)pqVar43 >> ((byte)uVar51 & 0x3f));
            local_48 = param_7;
            uStack_40 = uStack_40 - uVar51;
            *(ushort *)(param_3 + 0x28e8 + (longlong)pqVar34 * 2) =
                 ((ushort)pqVar43 & ~(ushort)(-1L << ((byte)uVar51 & 0x3f))) +
                 *(short *)(&DAT_00016dde + (longlong)pqVar34 * 2);
            pqVar34 = (qword *)((longlong)pqVar34 + 1);
            uStack_38 = (uint)pqVar34;
          } while ((uint)pqVar34 != 3);
        }
        *(undefined4 *)((longlong)local_c8 + 0xf) = 0;
        param_1 = 0;
        *local_c8 = 0;
        local_c8[1] = 0;
        uStack_38 = 0;
        uVar51 = 9;
        if (0x1e < *(ushort *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 2)) {
          uVar51 = 0x1b;
        }
        pqVar25 = (qword *)(ulonglong)uVar51;
        if (0x11e < *(ushort *)((longlong)&__DT_RELA[0xef].r_offset + param_3)) {
          pqVar25 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_entry + 3);
        }
        goto LAB_000b0d9e;
      case 9:
        pqVar32 = local_50;
        pqVar13 = local_58;
        do {
          if (uStack_38 < *(ushort *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 4)) {
            pqVar25 = local_48;
            puVar52 = (uint *)pqVar13;
            if (uStack_40 < 3) {
              if (pqVar32 != (qword *)0x0) {
                pqVar32 = (qword *)((longlong)pqVar32 + 0xffffffffffffffff);
                puVar52 = (uint *)((longlong)pqVar13 + 1);
                local_58 = (qword *)puVar52;
                local_50 = pqVar32;
                pqVar34 = (qword *)((ulonglong)(byte)*pqVar13 << ((byte)uStack_40 & 0x3f));
                pqVar25 = (qword *)((ulonglong)local_48 | (ulonglong)pqVar34);
                uStack_40 = uStack_40 | 8;
                goto LAB_000b124b;
              }
              cVar39 = '\x02';
              pqVar32 = (qword *)0x0;
            }
            else {
LAB_000b124b:
              local_48 = (qword *)((ulonglong)pqVar25 >> 3);
              ppuVar21 = (undefined **)(ulonglong)(uStack_40 - 3);
              uStack_40 = uStack_40 - 3;
              if (0x12 < uStack_38) goto LAB_000b245e;
              *(byte *)((longlong)local_c8 + (ulonglong)(byte)(&DAT_00016de4)[uStack_38]) =
                   (byte)pqVar25 & 7;
              uStack_38 = uStack_38 + 1;
              cVar39 = '\0';
              pqVar13 = (qword *)puVar52;
            }
            pqVar25 = (qword *)(ulonglong)local_5c;
          }
          else {
            *(undefined2 *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 4) = 0x13;
            pqVar34 = (qword *)&local_48;
            pcStack_100 = (code *)0xb129f;
            cVar39 = init_tree(param_3);
            pqVar25 = extraout_RDX;
            param_1 = extraout_XMM0_Da;
            if (cVar39 == -1) {
              bVar10 = 9;
              uVar51 = (uint)CONCAT71((int7)((ulonglong)pqVar34 >> 8),0xff);
              pqVar13 = pqVar40;
              goto LAB_000b21e0;
            }
          }
        } while (cVar39 == '\0');
        if (cVar39 != '\x01') {
          uVar33 = (ulonglong)pqVar25 & 0xffffffff;
          bVar10 = 9;
LAB_000b2161:
          pqVar13 = pqVar40;
          goto LAB_000b2164;
        }
        break;
      case 10:
        local_88 = param_5;
        param_5 = local_50;
        pqVar40 = local_58;
        do {
          pqVar25 = (qword *)(ulonglong)uStack_38;
          uVar18 = *(ushort *)((longlong)&__DT_RELA[0xef].r_offset + param_3);
          uVar51 = (uint)*(ushort *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 2) +
                   (uint)uVar18;
          uVar31 = (uint7)(uint3)(uStack_38 >> 8);
          if (uVar51 <= uStack_38) {
            if (uStack_38 != uVar51) {
              pqVar25 = (qword *)CONCAT71(uVar31,0x1a);
              goto LAB_000b1f64;
            }
            if (uVar18 < 0x121) {
              pcStack_100 = (code *)0xb1a3b;
              (*(code *)PTR_memcpy_000c3aa8)(uVar51,uVar18);
              uVar18 = *(ushort *)((longlong)&__DT_RELA[0xef].r_offset + param_3);
              uVar45 = *(ushort *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 2);
              uVar24 = uVar18 & 0x1ff;
              uVar51 = (uint)uVar45 + (uint)uVar18 & 0x1ff;
              if ((ushort)uVar51 < (ushort)uVar24) {
                ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b50;
                uVar26 = 0x200;
                goto LAB_000b23e4;
              }
              if ((ulonglong)uVar51 - (ulonglong)uVar24 == (ulonglong)(uVar45 & 0x1f)) {
                pcStack_100 = (code *)0xb1a81;
                (*(code *)PTR_memcpy_000c3aa8)();
                pcVar1 = (char *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 7);
                *pcVar1 = *pcVar1 + -1;
                pqVar34 = (qword *)&local_48;
                pcStack_100 = (code *)0xb1a94;
                cVar39 = init_tree(param_3);
                pqVar25 = extraout_RDX_01;
                param_1 = extraout_XMM0_Da_01;
                if (cVar39 != -1) goto LAB_000b1b77;
                bVar10 = 10;
                uVar51 = (uint)CONCAT71((int7)((ulonglong)pqVar34 >> 8),0xff);
                param_5 = local_88;
                pqVar47 = pqVar49;
                goto LAB_000b21e0;
              }
            }
            else {
              ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b68;
              uVar26 = 0x120;
LAB_000b23e4:
              pcStack_100 = (code *)0xb23ed;
              (*(code *)PTR_slice_index_fail_000c3bb0)(ppuVar21,uVar26);
            }
            pcStack_100 = (code *)0xb2403;
            (*(code *)PTR_len_mismatch_fail_000c3dc8)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b38,
                       &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b38);
            pqVar25 = param_5;
            puVar52 = (uint *)pqVar40;
            goto LAB_000b2403;
          }
          ppuVar27 = (undefined **)(ulonglong)uStack_40;
          if (Elf64_Ehdr_00000000.e_ident_pad + 5 < ppuVar27) {
            uVar51 = uStack_40;
          }
          else if (Elf64_Ehdr_00000000.e_ident_magic_str < param_5) {
            param_5 = (qword *)((longlong)param_5 + 0xfffffffffffffffe);
            local_58 = (qword *)((longlong)pqVar40 + 2U);
            local_50 = param_5;
            local_48 = (qword *)((ulonglong)(ushort)*pqVar40 << ((byte)uStack_40 & 0x3f) |
                                (ulonglong)local_48);
            pqVar40 = (qword *)((longlong)pqVar40 + 2U);
            uVar51 = uStack_40 | 0x10;
          }
          else {
            param_7 = (qword *)CONCAT71((int7)((ulonglong)param_7 >> 8),param_5 == (qword *)0x0);
            ppuVar21 = ppuVar27;
            do {
              uVar51 = (uint)*(short *)(param_3 + 0x1b00 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
              pqVar13 = pqVar40;
              if ((int)uVar51 < 0) {
                if (Elf64_Ehdr_00000000.e_ident_pad + 1 < ppuVar21) {
                  pbVar12 = Elf64_Ehdr_00000000.e_ident_pad + 3;
                  do {
                    uVar51 = ~uVar51 + (uint)(((ulonglong)local_48 >>
                                               ((ulonglong)((int)pbVar12 - 2) & 0x3f) & 1) != 0);
                    puVar52 = (uint *)pqVar40;
                    if (0x23f < uVar51) goto LAB_000b244c;
                    uVar51 = (uint)*(short *)(param_3 + 0x2300 + (ulonglong)uVar51 * 2);
                    if (-1 < (int)uVar51) goto LAB_000b1ac9;
                    bVar54 = pbVar12 <= ppuVar21;
                    pbVar12 = (byte *)(ulonglong)((int)pbVar12 + 1);
                  } while (bVar54);
                }
              }
              else if ((undefined **)(ulonglong)((uVar51 >> 9) - 1) < ppuVar21) {
LAB_000b1ac9:
                uVar51 = (uint)ppuVar21;
                break;
              }
              if ((char)param_7 != '\0') {
                cVar39 = '\x02';
                pqVar25 = (qword *)(ulonglong)local_5c;
                pqVar34 = local_48;
                goto LAB_000b1b77;
              }
              pqVar13 = (qword *)((longlong)pqVar40 + 1);
              local_58 = pqVar13;
              local_50 = (qword *)0x0;
              local_48 = (qword *)((ulonglong)local_48 |
                                  (ulonglong)(byte)*pqVar40 << ((byte)ppuVar21 & 0x3f));
              uVar51 = (int)ppuVar27 + 8;
              ppuVar27 = (undefined **)(ulonglong)uVar51;
              param_7 = (qword *)CONCAT71((int7)((ulonglong)param_7 >> 8),1);
              param_5 = (qword *)0x0;
              uStack_40 = (uint)(ppuVar21 + 1);
              bVar54 = ppuVar21 < &Elf64_Ehdr_00000000.e_ident_osabi;
              ppuVar21 = ppuVar21 + 1;
              pqVar40 = pqVar13;
            } while (bVar54);
          }
          uStack_3c = (uint)*(short *)(param_3 + 0x1b00 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
          if ((int)uStack_3c < 0) {
            bVar10 = 0xb;
            do {
              bVar17 = bVar10;
              pqVar13 = (qword *)(ulonglong)(byte)(bVar17 - 1);
              uVar24 = ~uStack_3c +
                       (uint)(((ulonglong)local_48 >> ((ulonglong)pqVar13 & 0x3f) & 1) != 0);
              if (0x23f < uVar24) {
                uStack_3c = 0x7fff;
                break;
              }
              uStack_3c = (uint)*(short *)(param_3 + 0x2300 + (ulonglong)uVar24 * 2);
              bVar10 = bVar17 + 1;
            } while ((int)uStack_3c < 0);
            uVar24 = (uint)bVar17;
          }
          else {
            uVar24 = uStack_3c >> 9;
            uStack_3c = uStack_3c & 0x1ff;
          }
          local_48 = (qword *)((ulonglong)local_48 >> ((byte)uVar24 & 0x3f));
          uStack_40 = uVar51 - uVar24;
          pqVar34 = local_48;
          if (uStack_3c < 0x10) {
            *(char *)(param_3 + (uStack_38 & 0x1ff)) = (char)uStack_3c;
            pqVar25 = (qword *)(ulonglong)(uStack_38 + 1);
            uStack_38 = uStack_38 + 1;
            cVar39 = '\0';
          }
          else {
            cVar39 = '\x01';
            if (pqVar25 == (qword *)0x0) {
              pqVar25 = (qword *)CONCAT71(uVar31,0x20);
              if (uStack_3c == 0x10) goto LAB_000b1b77;
            }
            local_b0[0] = 0x70302;
            bStack_34 = *(byte *)((longlong)local_b0 + (ulonglong)(uStack_3c & 3));
            pqVar25 = (qword *)CONCAT71((int7)((ulonglong)pqVar25 >> 8),0xb);
          }
LAB_000b1b77:
        } while (cVar39 == '\0');
        if (cVar39 == '\x02') {
          uVar33 = (ulonglong)pqVar25 & 0xffffffff;
          bVar10 = 10;
          param_5 = local_88;
          goto LAB_000b21a6;
        }
LAB_000b1f64:
        param_5 = local_88;
        goto LAB_000b0d9e;
      case 0xb:
        pqVar13 = local_48;
        if (uStack_40 < bStack_34) {
          do {
            pqVar13 = local_58;
            if ((longlong)local_50 + 0xffffffffffffffffU == -1) {
              bVar10 = 0xb;
              goto LAB_000b215e;
            }
            local_58 = (qword *)((longlong)local_58 + 1);
            local_50 = (qword *)((longlong)local_50 + 0xffffffffffffffffU);
            pqVar40 = (qword *)((ulonglong)(byte)*pqVar13 << ((byte)uStack_40 & 0x3f));
            pqVar13 = (qword *)((ulonglong)local_48 | (ulonglong)pqVar40);
            uStack_40 = uStack_40 + 8;
            local_48 = pqVar13;
          } while (uStack_40 < bStack_34);
        }
        local_48 = (qword *)((ulonglong)pqVar13 >> (bStack_34 & 0x3f));
        uStack_40 = uStack_40 - bStack_34;
        local_b0[0] = 3;
        local_b0[1] = 0;
        local_b0[2] = 3;
        local_b0[3] = 0;
        local_b0[4] = 0xb;
        local_b0[5] = 0;
        puVar52 = (uint *)(ulonglong)uStack_38;
        pqVar25 = (qword *)(((ulonglong)pqVar13 & ~(-1L << (bStack_34 & 0x3f))) +
                           *(longlong *)(local_b0 + (ulonglong)(uStack_3c & 2) * 2));
        uVar33 = (ulonglong)((int)pqVar25 + uStack_38 & 0x1ff);
        lVar16 = uVar33 - (uStack_38 & 0x1ff);
        pqVar13 = param_5;
        pqVar49 = pqVar47;
        if (uVar33 < (uStack_38 & 0x1ff)) goto LAB_000b2427;
        pqVar34 = (qword *)0x0;
        pcStack_100 = (code *)0xb1eb0;
        param_1 = (*(code *)PTR_memset_000c3cd8)((ulonglong)(uStack_3c & 2),lVar16);
        uStack_38 = (int)pqVar25 + uVar51;
        pqVar25 = (qword *)CONCAT71((int7)((ulonglong)lVar16 >> 8),10);
        break;
      case 0xc:
        goto switchD_000b0db3_caseD_c;
      case 0xd:
        pqVar25 = (qword *)CONCAT71(uVar30,0x15);
        if (uStack_38 < 0x100) {
          pqVar34 = local_78;
          if (local_78 == local_70) goto LAB_000b2350;
          pqVar47 = pqVar49;
          if (local_78 <= local_70) goto LAB_000b2478;
          *(byte *)((longlong)local_70 + local_80) = (byte)uStack_38;
          local_70 = (qword *)((longlong)local_70 + 1);
          pqVar25 = (qword *)CONCAT71(uVar30,0xc);
        }
        goto LAB_000b0d9e;
      case 0xe:
        if (uStack_40 < bStack_34) {
          do {
            if (local_50 == (qword *)0x0) {
              bVar10 = 0xe;
              local_50 = (qword *)0x0;
              pqVar13 = local_58;
              goto LAB_000b21a3;
            }
            local_50 = (qword *)((longlong)local_50 + 0xffffffffffffffff);
            qVar11 = *local_58;
            local_58 = (qword *)((longlong)local_58 + 1);
            param_7 = (qword *)((ulonglong)(byte)qVar11 << ((byte)uStack_40 & 0x3f));
            local_48 = (qword *)((ulonglong)local_48 | (ulonglong)param_7);
            uStack_40 = uStack_40 + 8;
          } while (uStack_40 < bStack_34);
          pqVar13 = local_58;
        }
        uVar51 = (uint)local_48;
        local_48 = (qword *)((ulonglong)local_48 >> (bStack_34 & 0x3f));
        uStack_40 = uStack_40 - bStack_34;
        uStack_38 = uStack_38 + (~(uint)(-1L << (bStack_34 & 0x3f)) & uVar51);
        pqVar25 = (qword *)CONCAT71((uint7)(uint3)(uStack_40 >> 8),0xf);
        pqVar34 = local_48;
        goto LAB_000b0d9e;
      case 0xf:
        ppuVar27 = (undefined **)(ulonglong)uStack_40;
        if (ppuVar27 <= Elf64_Ehdr_00000000.e_ident_pad + 5) {
          if (Elf64_Ehdr_00000000.e_ident_magic_str < local_50) {
            qVar11 = *local_58;
            local_58 = (qword *)((longlong)local_58 + 2);
            local_50 = (qword *)((longlong)local_50 + 0xfffffffffffffffe);
            local_48 = (qword *)((ulonglong)(ushort)qVar11 << (bVar17 & 0x3f) | (ulonglong)local_48)
            ;
            uStack_40 = uStack_40 | 0x10;
          }
          else {
            param_7 = (qword *)CONCAT71((int7)((ulonglong)param_7 >> 8),local_50 == (qword *)0x0);
            ppuVar21 = ppuVar27;
            pqVar25 = local_50;
            pqVar13 = local_58;
            do {
              uVar24 = (uint)*(short *)(param_3 + 0xe80 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
              uVar51 = (uint)ppuVar21;
              if ((int)uVar24 < 0) {
                if (Elf64_Ehdr_00000000.e_ident_pad + 1 < ppuVar21) {
                  pbVar12 = Elf64_Ehdr_00000000.e_ident_pad + 3;
                  do {
                    uVar24 = ~uVar24 + (uint)(((ulonglong)local_48 >>
                                               ((ulonglong)((int)pbVar12 - 2) & 0x3f) & 1) != 0);
                    pqVar40 = pqVar13;
                    if (0x23f < uVar24) goto LAB_000b244c;
                    uVar24 = (uint)*(short *)(param_3 + 0x1680 + (ulonglong)uVar24 * 2);
                    if (-1 < (int)uVar24) {
                      local_58 = pqVar13;
                      local_50 = pqVar25;
                      uStack_40 = uVar51;
                      goto LAB_000b2075;
                    }
                    bVar54 = pbVar12 <= ppuVar21;
                    pbVar12 = (byte *)(ulonglong)((int)pbVar12 + 1);
                  } while (bVar54);
                }
              }
              else if ((undefined **)(ulonglong)((uVar24 >> 9) - 1) < ppuVar21) break;
              if ((char)param_7 != '\0') {
                bVar10 = 0xf;
                local_50 = pqVar25;
                goto LAB_000b21a3;
              }
              qVar11 = *pqVar13;
              pqVar13 = (qword *)((longlong)pqVar13 + 1);
              local_48 = (qword *)((ulonglong)local_48 |
                                  (ulonglong)(byte)qVar11 << ((byte)ppuVar21 & 0x3f));
              uVar51 = (int)ppuVar27 + 8;
              ppuVar27 = (undefined **)(ulonglong)uVar51;
              param_7 = (qword *)CONCAT71((int7)((ulonglong)param_7 >> 8),1);
              pqVar25 = (qword *)0x0;
              uStack_40 = (uint)(ppuVar21 + 1);
              bVar54 = ppuVar21 < &Elf64_Ehdr_00000000.e_ident_osabi;
              ppuVar21 = ppuVar21 + 1;
            } while (bVar54);
            local_58 = pqVar13;
            local_50 = pqVar25;
            uStack_40 = uVar51;
          }
        }
LAB_000b2075:
        uVar51 = (uint)*(short *)(param_3 + 0xe80 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
        pqVar34 = (qword *)(ulonglong)uVar51;
        if ((int)uVar51 < 0) {
          uVar51 = 0xb;
          do {
            uVar24 = uVar51;
            uVar51 = ~(uint)pqVar34 +
                     (uint)(((ulonglong)local_48 >> ((ulonglong)(uVar24 - 1 & 0xff) & 0x3f) & 1) !=
                           0);
            if (0x23f < uVar51) {
              pqVar34 = (qword *)((longlong)&__DT_RELA[0x48f].r_addend + 7);
              break;
            }
            uVar23 = (uint)*(short *)(param_3 + 0x1680 + (ulonglong)uVar51 * 2);
            pqVar34 = (qword *)(ulonglong)uVar23;
            uVar51 = (uint)(byte)((char)uVar24 + 1);
          } while ((int)uVar23 < 0);
        }
        else {
          uVar24 = uVar51 >> 9;
          pqVar34 = (qword *)(ulonglong)(uVar51 & 0x1ff);
        }
        local_48 = (qword *)((ulonglong)local_48 >> ((byte)uVar24 & 0x3f));
        uStack_40 = uStack_40 - uVar24;
        pqVar25 = (qword *)CONCAT71((int7)((ulonglong)local_48 >> 8),0x22);
        if ((uint)pqVar34 < 0x1e) {
          bStack_34 = (((byte)((ulonglong)pqVar34 >> 1) & 0x7f) - 1) +
                      (((ulonglong)pqVar34 >> 1 & 0x7f) == 0);
          uStack_3c = (uint)*(ushort *)(&DAT_00016df8 + (longlong)pqVar34 * 2);
          pqVar25 = (qword *)&Elf64_Ehdr_00000000.e_type;
          if ((uint)pqVar34 < 4) {
            pqVar25 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_version + 2);
          }
        }
        goto LAB_000b0d9e;
      case 0x10:
        if (uStack_40 < bStack_34) {
          if (local_50 == (qword *)0x0) {
LAB_000b217c:
            local_50 = (qword *)0x0;
            bVar10 = 0x10;
            goto LAB_000b21a3;
          }
          lVar16 = 1 - (longlong)local_50;
          uVar51 = uStack_40;
          pqVar13 = local_58;
          while( true ) {
            param_7 = local_48;
            local_48 = (qword *)((ulonglong)(byte)*pqVar13 << ((byte)uVar51 & 0x3f) |
                                (ulonglong)param_7);
            uStack_40 = uVar51 + 8;
            if (bStack_34 <= uStack_40) break;
            lVar16 = lVar16 + 1;
            uVar51 = uVar51 + 8;
            pqVar13 = (qword *)((longlong)pqVar13 + 1);
            if (lVar16 == 1) {
              pqVar13 = (qword *)Elf64_Ehdr_00000000.e_ident_magic_str;
              uStack_40 = uVar51;
              goto LAB_000b217c;
            }
          }
          local_58 = (qword *)((longlong)pqVar13 + 1);
          pqVar13 = (qword *)-lVar16;
          local_50 = pqVar13;
        }
        uVar51 = (uint)local_48;
        local_48 = (qword *)((ulonglong)local_48 >> (bStack_34 & 0x3f));
        uStack_40 = uStack_40 - bStack_34;
        uStack_3c = uStack_3c + (~(uint)(-1L << (bStack_34 & 0x3f)) & uVar51);
        pqVar25 = (qword *)CONCAT71((uint7)(uint3)(uStack_40 >> 8),0x16);
        pqVar34 = local_48;
        goto LAB_000b0d9e;
      case 0x11:
        pqVar25 = local_48;
        if (uStack_40 < 8) {
          if (local_50 == (qword *)0x0) {
            bVar10 = 0x11;
            goto LAB_000b21a3;
          }
          local_58 = (qword *)((longlong)local_58 + 1);
          local_50 = (qword *)((longlong)local_50 + 0xffffffffffffffff);
          pqVar25 = (qword *)((ulonglong)local_48 | (ulonglong)(byte)*pqVar35 << (bVar17 & 0x3f));
          uStack_40 = uStack_40 | 8;
          pqVar34 = pqVar35;
        }
        local_48 = (qword *)((ulonglong)pqVar25 >> 8);
        uStack_40 = uStack_40 - 8;
        uStack_3c = (uint)pqVar25 & 0xff;
        pqVar25 = (qword *)CONCAT71((uint7)((ulonglong)pqVar25 >> 0x10),0x12);
        goto LAB_000b0d9e;
      case 0x12:
        pqVar34 = local_78;
        if (local_78 == local_70) {
LAB_000b2350:
          uVar51 = (uint)CONCAT71((int7)((ulonglong)pqVar34 >> 8),2);
          pqVar47 = pqVar49;
          goto LAB_000b21e0;
        }
        pqVar47 = pqVar49;
        if (local_78 <= local_70) goto LAB_000b2478;
        *(byte *)((longlong)local_70 + local_80) = (byte)uStack_3c;
        uVar51 = 0x11;
        if (uStack_40 == 0) {
          uVar51 = 6;
        }
        uStack_38 = uStack_38 - 1;
        local_70 = (qword *)((longlong)local_70 + 1);
        pqVar25 = (qword *)(ulonglong)uVar51;
        if (uStack_38 == 0) {
          pqVar25 = (qword *)&Elf64_Ehdr_00000000.e_ident_version;
        }
        goto LAB_000b0d9e;
      case 0x13:
        local_f8 = local_80;
        uVar33 = (ulonglong)uStack_3c;
        pqVar25 = local_70;
        pqVar35 = pqVar34;
        local_88 = param_5;
        do {
          uVar51 = uStack_38;
          pqVar34 = (qword *)((longlong)pqVar43 - (longlong)pqVar25);
          if (pqVar34 == (qword *)0x0) {
            local_70 = pqVar43;
            bVar10 = 0x13;
            uVar51 = (uint)CONCAT71((int7)((ulonglong)pqVar35 >> 8),2);
            param_5 = local_88;
            pqVar47 = (qword *)0x0;
            goto LAB_000b21e0;
          }
          if ((qword *)(ulonglong)uStack_38 < pqVar34) {
            pqVar34 = (qword *)(ulonglong)uStack_38;
          }
          pcStack_100 = (code *)0xb1d7b;
          pqVar35 = pqVar43;
          pqVar13 = pqVar34;
          param_7 = local_68;
          param_1 = transfer(local_f8,pqVar43,(longlong)pqVar25 - uVar33 & (ulonglong)local_68,
                             pqVar25);
          pqVar25 = (qword *)((longlong)pqVar34 + (longlong)pqVar25);
          uStack_38 = uVar51 - (int)pqVar34;
        } while (uStack_38 != 0);
        local_70 = pqVar25;
        pqVar25 = (qword *)CONCAT71((int7)((ulonglong)extraout_RDX_02 >> 8),0xc);
LAB_000b1d98:
        param_5 = local_88;
        pqVar34 = pqVar35;
        param_3 = local_90;
        goto LAB_000b2045;
      case 0x14:
        pqVar25 = (qword *)CONCAT71(uVar30,3);
        if (*(char *)((longlong)&__DT_RELA[0xef].r_offset + param_3 + 6) != '\0') {
          uVar46 = (longlong)param_5 - (longlong)local_50;
          uVar33 = (ulonglong)(uStack_40 >> 3);
          if ((uint)uVar46 < uStack_40 >> 3) {
            uVar33 = uVar46 & 0xffffffff;
          }
          pqVar40 = (qword *)(ulonglong)(uint)((int)uVar33 * 8);
          uStack_40 = (uStack_40 & 0xfffffff8) + (int)uVar33 * -8;
          puVar36 = (uint *)(uVar46 - uVar33);
          pqVar34 = (qword *)((longlong)param_5 - (longlong)puVar36);
          if (param_5 < puVar36) goto LAB_000b2439;
          uVar33 = (ulonglong)local_48 >> (bVar17 & 7);
          pqVar13 = (qword *)(~(-1L << ((byte)uStack_40 & 0x38)) & uVar33);
          local_58 = (qword *)((longlong)local_f0 + (longlong)puVar36);
          local_50 = pqVar34;
          local_48 = pqVar13;
          uVar30 = (undefined7)(uVar33 >> 8);
          pqVar25 = (qword *)CONCAT71(uVar30,0x18);
          if ((param_9 & 1) != 0) {
            uStack_38 = 0;
            pqVar25 = (qword *)CONCAT71(uVar30,0x17);
          }
        }
        goto LAB_000b0d9e;
      case 0x15:
        uStack_38 = uStack_38 & 0x1ff;
        pqVar25 = (qword *)CONCAT71(uVar30,0x14);
        if (uStack_38 != 0x100) {
          pqVar25 = (qword *)CONCAT71(uVar30,0x21);
          if (uStack_38 < 0x11e) {
            uVar51 = uVar51 - 1 & 0x1f;
            bStack_34 = ""[uVar51];
            uStack_38 = (uint)*(ushort *)(&DAT_00016e3e + (ulonglong)uVar51 * 2);
            pqVar25 = (qword *)(CONCAT71(uVar30,uVar51 - 0x1c < 0xffffffec) | 0xe);
          }
        }
        goto LAB_000b0d9e;
      case 0x16:
        puVar52 = (uint *)(ulonglong)uStack_3c;
        param_7 = (qword *)((longlong)local_70 - (longlong)puVar52);
        pqVar25 = (qword *)CONCAT71(uVar30,0x1e);
        pqVar34 = (qword *)((ulonglong)uVar31 << 8);
        if (puVar52 <= local_70 || (param_9 & 4) == 0) {
          pqVar34 = local_78;
          if (puVar52 <= local_78) {
            pqVar13 = (qword *)(ulonglong)uStack_38;
            pqVar25 = (qword *)((longlong)pqVar13 + (longlong)local_70);
            if ((local_78 < pqVar25) ||
               (puVar52 = (uint *)((ulonglong)param_7 & (ulonglong)pqVar49),
               puVar36 = (uint *)((longlong)puVar52 - (longlong)local_70),
               param_7 = (qword *)CONCAT71((int7)((ulonglong)puVar36 >> 8),
                                           puVar36 < pqVar13 && local_70 <= puVar52),
               puVar36 < pqVar13 && local_70 <= puVar52)) {
              pqVar25 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_machine + 1);
              if (pqVar13 == (qword *)0x0) {
                pqVar25 = (qword *)(Elf64_Ehdr_00000000.e_ident_pad + 3);
              }
            }
            else {
              pcStack_100 = (code *)0xb2060;
              param_7 = pqVar49;
              param_1 = apply_match(local_80,local_78,local_70);
              local_70 = pqVar25;
              pqVar25 = (qword *)CONCAT71((int7)((ulonglong)extraout_RDX_04 >> 8),0xc);
            }
          }
        }
        goto LAB_000b0d9e;
      case 0x17:
        pqVar34 = (qword *)(ulonglong)uStack_38;
        pqVar25 = local_58;
        if (uStack_38 < 4) {
          uVar51 = *(uint *)((longlong)&__DT_RELA[0xee].r_offset + param_3 + 4);
          pqVar34 = (qword *)(ulonglong)(uStack_38 - 1);
          pqVar13 = local_48;
          uVar24 = uStack_40;
          do {
            if (uVar24 == 0) {
              if (local_50 == (qword *)0x0) {
LAB_000b2199:
                local_50 = (qword *)0x0;
                bVar10 = 0x17;
                goto LAB_000b21a3;
              }
              local_50 = (qword *)((longlong)local_50 + 0xffffffffffffffff);
              qVar11 = *pqVar25;
              pqVar25 = (qword *)((longlong)pqVar25 + 1);
              uVar51 = uVar51 << 8 | (uint)(byte)qVar11;
              uVar24 = 0;
            }
            else {
              if (uVar24 < 8) {
                if (local_50 == (qword *)0x0) goto LAB_000b2199;
                qVar11 = *pqVar25;
                local_50 = (qword *)((longlong)local_50 + 0xffffffffffffffff);
                pqVar25 = (qword *)((longlong)pqVar25 + 1);
                pqVar13 = (qword *)((ulonglong)pqVar13 |
                                   (ulonglong)(byte)qVar11 << ((byte)uVar24 & 0x3f));
                uVar24 = uVar24 | 8;
              }
              uVar23 = (uint)pqVar13;
              pqVar13 = (qword *)((ulonglong)pqVar13 >> 8);
              local_48 = pqVar13;
              uVar24 = uVar24 - 8;
              uStack_40 = uVar24;
              uVar51 = uVar51 << 8 | uVar23 & 0xff;
            }
            *(uint *)((longlong)&__DT_RELA[0xee].r_offset + param_3 + 4) = uVar51;
            uStack_38 = (int)pqVar34 + 2;
            param_7 = (qword *)(ulonglong)uStack_38;
            uVar23 = (int)pqVar34 + 1;
            pqVar34 = (qword *)(ulonglong)uVar23;
          } while (uVar23 < 3);
        }
        local_58 = pqVar25;
        pqVar25 = (qword *)CONCAT71((int7)((ulonglong)local_50 >> 8),0x18);
        goto LAB_000b0d9e;
      case 0x18:
        uVar51 = 0;
        pqVar47 = pqVar49;
        goto LAB_000b21e0;
      }
LAB_000b203f:
      pqVar13 = pqVar40;
LAB_000b2045:
      pqVar49 = local_68;
      goto LAB_000b0d9e;
    }
  }
  *(undefined1 *)(param_2 + 1) = 0xfd;
  qVar11 = 0;
  *param_2 = 0;
LAB_000b2317:
  local_98[2] = qVar11;
  return local_98;
switchD_000b0db3_caseD_c:
  pqVar34 = local_50;
  pqVar25 = local_70;
  pqVar35 = param_7;
  if (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < local_50) {
    pqVar40 = local_58;
    param_7 = local_50;
    do {
      if ((ulonglong)((longlong)local_78 - (longlong)pqVar25) < 2) break;
      if (Elf64_Ehdr_00000000.e_ident_pad + 4 < pqVar34 &&
          0x102 < (ulonglong)((longlong)local_78 - (longlong)pqVar25)) {
        pqVar34 = (qword *)&local_58;
        pqVar13 = (qword *)&local_48;
        pcStack_100 = (code *)0xb2012;
        pqVar43 = pqVar49;
        local_70 = pqVar25;
        local_58 = pqVar40;
        local_50 = param_7;
        uVar51 = decompress_fast(param_3,pqVar34,&local_80,pqVar47);
        bVar10 = (byte)extraout_RDX_03;
        pqVar25 = extraout_RDX_03;
        param_7 = pqVar43;
        param_1 = extraout_XMM0_Da_02;
        if ((char)uVar51 == '\0') goto LAB_000b0d9e;
        uVar33 = (ulonglong)uVar51;
        goto LAB_000b21a6;
      }
      if (uStack_40 < 0x1e) {
        qVar11 = *pqVar40;
        pqVar34 = (qword *)((longlong)pqVar34 + 0xfffffffffffffffc);
        pqVar40 = (qword *)((longlong)pqVar40 + 4);
        local_48 = (qword *)((ulonglong)local_48 |
                            (ulonglong)(uint)qVar11 << ((byte)uStack_40 & 0x3f));
        uStack_40 = uStack_40 | 0x20;
        param_7 = pqVar34;
      }
      uVar51 = (uint)*(short *)(param_3 + 0x200 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
      pqVar32 = (qword *)(ulonglong)uVar51;
      if ((int)uVar51 < 0) {
        uVar24 = 0xb;
        do {
          uVar51 = uVar24;
          uVar24 = ~(uint)pqVar32 +
                   (uint)(((ulonglong)local_48 >> ((ulonglong)(uVar51 - 1 & 0xff) & 0x3f) & 1) != 0)
          ;
          if (0x23f < uVar24) {
            pqVar32 = (qword *)((longlong)&__DT_RELA[0x48f].r_addend + 7);
            break;
          }
          uVar23 = (uint)*(short *)(param_3 + 0xa00 + (ulonglong)uVar24 * 2);
          pqVar32 = (qword *)(ulonglong)uVar23;
          uVar24 = (uint)(byte)((char)uVar51 + 1);
        } while ((int)uVar23 < 0);
      }
      else {
        uVar51 = uVar51 >> 9;
      }
      uStack_38 = (uint)pqVar32;
      local_48 = (qword *)((ulonglong)local_48 >> ((byte)uVar51 & 0x3f));
      uStack_40 = uStack_40 - uVar51;
      if (((uint)pqVar32 >> 8 & 1) != 0) {
        local_58 = pqVar40;
        local_50 = param_7;
        local_70 = pqVar25;
LAB_000b203d:
        pqVar25 = (qword *)CONCAT71((int7)((ulonglong)pqVar34 >> 8),0x15);
        pqVar34 = local_78;
        local_58 = pqVar40;
        local_50 = param_7;
        goto LAB_000b203f;
      }
      uVar51 = (uint)*(short *)(param_3 + 0x200 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
      puVar52 = (uint *)(ulonglong)uVar51;
      if ((int)uVar51 < 0) {
        uVar51 = 0xb;
        do {
          bVar10 = (byte)uVar51;
          uVar51 = ~(uint)puVar52 +
                   (uint)(((ulonglong)local_48 >> ((ulonglong)(uVar51 - 1 & 0xff) & 0x3f) & 1) != 0)
          ;
          if (0x23f < uVar51) {
            puVar52 = (uint *)((longlong)&__DT_RELA[0x48f].r_addend + 7);
            break;
          }
          uVar24 = (uint)*(short *)(local_90 + 0xa00 + (ulonglong)uVar51 * 2);
          puVar52 = (uint *)(ulonglong)uVar24;
          uVar51 = (uint)(byte)(bVar10 + 1);
        } while ((int)uVar24 < 0);
        ppuVar21 = (undefined **)(ulonglong)bVar10;
        param_3 = local_90;
      }
      else {
        ppuVar21 = (undefined **)(ulonglong)(uVar51 >> 9);
      }
      local_48 = (qword *)((ulonglong)local_48 >> ((byte)ppuVar21 & 0x3f));
      uStack_40 = uStack_40 - (int)ppuVar21;
      if (local_78 <= pqVar25) goto LAB_000b2470;
      *(byte *)((longlong)pqVar25 + local_80) = (byte)pqVar32;
      pbVar12 = (byte *)((longlong)pqVar25 + 1);
      if (((uint)puVar52 >> 8 & 1) != 0) {
        local_58 = pqVar40;
        local_50 = param_7;
        local_70 = (qword *)pbVar12;
        uStack_38 = (uint)puVar52;
        goto LAB_000b203d;
      }
      if (local_78 <= pbVar12) goto LAB_000b2485;
      *(byte *)((longlong)pqVar25 + local_80 + 1) = (byte)puVar52;
      pqVar25 = (qword *)((longlong)pqVar25 + 2);
      pqVar49 = local_68;
    } while (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < pqVar34);
    local_58 = pqVar40;
    local_50 = param_7;
    pqVar13 = pqVar40;
    pqVar35 = param_7;
  }
  local_70 = pqVar25;
  ppuVar27 = (undefined **)(ulonglong)uStack_40;
  if (ppuVar27 <= Elf64_Ehdr_00000000.e_ident_pad + 5) {
    if (Elf64_Ehdr_00000000.e_ident_magic_str < pqVar34) {
      qVar11 = *local_58;
      local_58 = (qword *)((longlong)local_58 + 2);
      local_50 = (qword *)((longlong)pqVar34 + 0xfffffffffffffffe);
      local_48 = (qword *)((ulonglong)(ushort)qVar11 << ((byte)uStack_40 & 0x3f) |
                          (ulonglong)local_48);
      uStack_40 = uStack_40 | 0x10;
    }
    else {
      bVar54 = pqVar34 == (qword *)0x0;
      ppuVar21 = ppuVar27;
      uVar51 = uStack_40;
      do {
        uStack_40 = uVar51;
        pqVar25 = local_58;
        uVar51 = (uint)*(short *)(param_3 + 0x200 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
        pqVar13 = local_58;
        if ((int)uVar51 < 0) {
          if (Elf64_Ehdr_00000000.e_ident_pad + 1 < ppuVar21) {
            param_7 = (qword *)(Elf64_Ehdr_00000000.e_ident_pad + 3);
            do {
              uVar51 = ~uVar51 + (uint)(((ulonglong)local_48 >>
                                         ((ulonglong)((int)param_7 - 2) & 0x3f) & 1) != 0);
              pqVar40 = local_58;
              puVar52 = &switchD_000b0db3::switchdataD_00016d44;
              if (0x23f < uVar51) goto LAB_000b244c;
              uVar51 = (uint)*(short *)(param_3 + 0xa00 + (ulonglong)uVar51 * 2);
              pqVar35 = param_7;
              if (-1 < (int)uVar51) goto LAB_000b1f7c;
              pqVar35 = (qword *)(ulonglong)((int)param_7 + 1);
              bVar53 = param_7 <= ppuVar21;
              param_7 = pqVar35;
            } while (bVar53);
          }
        }
        else if ((undefined **)(ulonglong)((uVar51 >> 9) - 1) < ppuVar21) {
LAB_000b1f7c:
          uStack_40 = (uint)ppuVar21;
          break;
        }
        if (bVar54) {
          bVar10 = 0xc;
          param_7 = pqVar35;
          goto LAB_000b21a3;
        }
        pqVar13 = (qword *)((longlong)local_58 + 1);
        local_58 = pqVar13;
        local_50 = (qword *)0x0;
        local_48 = (qword *)((ulonglong)local_48 |
                            (ulonglong)(byte)*pqVar25 << ((byte)ppuVar21 & 0x3f));
        uStack_40 = (int)ppuVar27 + 8;
        ppuVar27 = (undefined **)(ulonglong)uStack_40;
        bVar54 = true;
        lVar16 = (longlong)(ppuVar21 + 1);
        bVar53 = ppuVar21 < &Elf64_Ehdr_00000000.e_ident_osabi;
        ppuVar21 = (undefined **)lVar16;
        uVar51 = (uint)lVar16;
      } while (bVar53);
    }
  }
  uVar51 = (uint)*(short *)(param_3 + 0x200 + (ulonglong)((uint)local_48 & 0x3ff) * 2);
  uVar33 = (ulonglong)uVar51;
  if ((int)uVar51 < 0) {
    uVar51 = 0xb;
    do {
      uVar24 = uVar51;
      uVar51 = ~(uint)uVar33 +
               (uint)(((ulonglong)local_48 >> ((ulonglong)(uVar24 - 1 & 0xff) & 0x3f) & 1) != 0);
      if (0x23f < uVar51) {
        uVar33 = 0x7fff;
        break;
      }
      uVar23 = (uint)*(short *)(param_3 + 0xa00 + (ulonglong)uVar51 * 2);
      uVar33 = (ulonglong)uVar23;
      uVar51 = (uint)(byte)((char)uVar24 + 1);
    } while ((int)uVar23 < 0);
  }
  else {
    uVar24 = uVar51 >> 9;
    uVar33 = (ulonglong)(uVar51 & 0x1ff);
  }
  local_48 = (qword *)((ulonglong)local_48 >> ((byte)uVar24 & 0x3f));
  uStack_40 = uStack_40 - uVar24;
  uStack_38 = (uint)uVar33;
  pqVar25 = (qword *)CONCAT71((int7)(uVar33 >> 8),0xd);
  pqVar34 = local_48;
  param_7 = pqVar35;
  goto LAB_000b0d9e;
  while( true ) {
    pcStack_1f8 = (code *)0xb2b60;
    uVar55 = (*(code *)PTR_memmove_000c3c50)(puStack_1c0);
    pbVar12 = pbVar12 + 4;
    ppuVar21 = (undefined **)(pbVar22 + 4);
    if (pbVar15 <= pbVar12) break;
LAB_000b2b17:
    pbVar22 = (byte *)ppuVar21;
    pbStack_1e0 = pbVar22 + 3;
    uStack_1d8 = 0;
    pcStack_1f8 = (code *)0xb2b3a;
    pbStack_1e8 = pbVar22;
    lVar16 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>_000c4700)();
    pbVar29 = pbVar29 + -lVar16;
    if (puVar50 + -(longlong)pbVar29 < pbVar12) {
      pcStack_1f8 = (code *)0xb2d56;
      uVar55 = (*(code *)PTR_panic_fmt_000c3e90)
                         (puVar50 + -(longlong)pbVar29,
                          &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e38);
      goto LAB_000b2d56;
    }
  }
  ppuVar21 = (undefined **)(pbVar22 + 4);
  pqVar40 = pqStack_1c8;
  puVar44 = puStack_1d0;
  puVar38 = puStack_1c0;
  goto LAB_000b2c51;
  while( true ) {
    (pbVar3 + 1)[(longlong)pbVar22] = puVar38[(longlong)pbVar29];
    pbVar29 = (byte *)((ulonglong)(pbVar22 + (longlong)ppuVar21 + 2) & (ulonglong)puVar44);
    if (puVar50 <= pbVar29) {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ce8;
      pcStack_190 = (code *)&pcStack_108;
      goto LAB_000b2e51;
    }
    pbVar14 = pbVar12 + (longlong)pbVar22 + 2;
    if (puVar50 <= pbVar14) {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d00;
      goto LAB_000b2df7;
    }
    (pbVar3 + 2)[(longlong)pbVar22] = puVar38[(longlong)pbVar29];
    (pbVar3 + 3)[(longlong)pbVar22] =
         puVar38[(longlong)((ulonglong)(pbVar22 + (longlong)ppuVar21 + 3) & (ulonglong)puVar44)];
    pbVar29 = pbVar12 + (longlong)pbVar22;
    pbVar22 = pbVar22 + 4;
    if (pbVar15 <= pbVar29 + 4) break;
LAB_000b2b9a:
    pcStack_190 = (code *)&pcStack_108;
    if (puVar50 <= pbVar12 + (longlong)pbVar22 + 3) {
LAB_000b2d56:
      ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c70;
      goto LAB_000b2d64;
    }
    pcStack_190 = (code *)&pcStack_108;
    if (puVar50 <=
        (undefined1 *)((ulonglong)(pbVar22 + (longlong)ppuVar21 + 3) & (ulonglong)puVar44))
    goto LAB_000b2d6f;
    pbVar29 = (byte *)((ulonglong)(pbVar22 + (longlong)ppuVar21) & (ulonglong)puVar44);
    if (puVar50 <= pbVar29) {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ca0;
      pcStack_190 = (code *)&pcStack_108;
      goto LAB_000b2e51;
    }
    pbVar3[(longlong)pbVar22] = puVar38[(longlong)pbVar29];
    pbVar29 = (byte *)((ulonglong)(pbVar22 + (longlong)ppuVar21 + 1) & (ulonglong)puVar44);
    if (puVar50 <= pbVar29) {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2cb8;
      pcStack_190 = (code *)&pcStack_108;
      goto LAB_000b2e51;
    }
    pbVar14 = pbVar12 + (longlong)pbVar22 + 1;
    if (puVar50 <= pbVar14) {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2cd0;
LAB_000b2df7:
      pbVar29 = pbVar14;
      pcStack_190 = (code *)&pcStack_108;
      goto LAB_000b2e51;
    }
  }
  ppuVar21 = (undefined **)((longlong)ppuVar21 + (longlong)pbVar22);
  pbVar12 = pbVar12 + (longlong)pbVar22;
  pcStack_190 = (code *)&pcStack_108;
LAB_000b2c51:
  uVar24 = (uint)pqVar40 & 3;
  puVar52 = &switchD_000b2ad3::switchdataD_00016db8;
  uVar51 = (&switchD_000b2ad3::switchdataD_00016db8)[uVar24];
  switch(uVar24) {
  case 0:
    goto switchD_000b2ad3_caseD_0;
  case 1:
switchD_000b2ad3_caseD_1:
    pbVar22 = (byte *)((longlong)&switchD_000b2ad3::switchdataD_00016db8 + (longlong)(int)uVar51);
    pbVar29 = (byte *)((ulonglong)ppuVar21 & (ulonglong)puVar44);
    if (puVar50 <= pbVar29) {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d18;
LAB_000b2e42:
      ppuVar21 = (undefined **)pbVar29;
      goto LAB_000b2e51;
    }
    if (pbVar12 < puVar50) {
LAB_000b2d26:
      puVar52 = (uint *)(ulonglong)(byte)puVar38[(longlong)pbVar29];
      puVar38[(longlong)pbVar12] = puVar38[(longlong)pbVar29];
switchD_000b2ad3_caseD_0:
      return (qword *)puVar52;
    }
    ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d30;
    ppuVar21 = (undefined **)pbVar29;
    pbVar29 = pbVar12;
    break;
  case 2:
switchD_000b2ad3_caseD_2:
    pbVar15 = pbVar12 + 1;
    if (puVar50 <= pbVar15) goto LAB_000b2d9e;
    pbVar22 = (byte *)((ulonglong)((longlong)ppuVar21 + 1) & (ulonglong)puVar44);
    if (puVar50 <= pbVar22) {
      ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d60;
LAB_000b2d7d:
      do {
        pcStack_1f8 = (code *)0xb2d88;
        (*(code *)PTR_panic_000c3b00)(uVar55,ppuVar21);
LAB_000b2d88:
        pcStack_1f8 = (code *)0xb2d9e;
        uVar55 = (*(code *)PTR_slice_index_fail_000c3bb0)
                           (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c58,puVar50);
LAB_000b2d9e:
        ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d48;
LAB_000b2d64:
        pcStack_1f8 = (code *)0xb2d6f;
        uVar55 = (*(code *)PTR_panic_000c3b00)(uVar55,ppuVar21);
LAB_000b2d6f:
        ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c88;
      } while( true );
    }
    pbVar29 = (byte *)((ulonglong)ppuVar21 & (ulonglong)puVar44);
    if (puVar50 <= pbVar29) {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d78;
      goto LAB_000b2e42;
    }
    if (pbVar12 < puVar50) {
LAB_000b2d18:
      puVar38[(longlong)pbVar12] = puVar38[(longlong)pbVar29];
      pbVar29 = pbVar22;
      pbVar12 = pbVar15;
      goto LAB_000b2d26;
    }
    ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d90;
    ppuVar21 = (undefined **)pbVar29;
    pbVar29 = pbVar12;
    break;
  case 3:
switchD_000b2ad3_caseD_3:
    pbVar15 = pbVar12 + 2;
    if (puVar50 <= pbVar15) {
      ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2da8;
      goto LAB_000b2d64;
    }
    pbVar22 = (byte *)((ulonglong)((longlong)ppuVar21 + 2) & (ulonglong)puVar44);
    if (puVar50 <= pbVar22) {
      ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2dc0;
      goto LAB_000b2d7d;
    }
    pbVar29 = (byte *)((ulonglong)ppuVar21 & (ulonglong)puVar44);
    if (puVar50 <= pbVar29) {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2dd8;
      goto LAB_000b2e51;
    }
    if (pbVar12 < puVar50) {
      puVar38[(longlong)pbVar12] = puVar38[(longlong)pbVar29];
      pbVar29 = (byte *)((ulonglong)((longlong)ppuVar21 + 1) & (ulonglong)puVar44);
      if (puVar50 <= pbVar29) {
        ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e08;
        goto LAB_000b2e42;
      }
      pbVar12 = pbVar12 + 1;
      if (pbVar12 < puVar50) goto LAB_000b2d18;
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e20;
      ppuVar21 = (undefined **)pbVar29;
      pbVar29 = pbVar12;
    }
    else {
      ppuVar27 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2df0;
      pbVar29 = pbVar12;
    }
  }
  pbVar12 = pbVar29;
LAB_000b2e51:
  pcStack_1f8 = init_tree;
  (*(code *)PTR_panic_bounds_check_000c3dd8)(pbVar22,ppuVar27);
  pcStack_1f8 = (code *)&pcStack_190;
  pbStack_200 = pbVar12;
  puStack_208 = puVar38;
  pbStack_210 = (byte *)ppuVar21;
  puStack_218 = puVar44;
  puStack_220 = puVar50;
  puStack_228 = puVar50;
  bVar10 = pbVar29[0x28ef];
LAB_000b2e78:
  if (bVar10 == 0) {
    uVar18 = 0x120;
    puVar50 = pbVar29 + 0x2780;
  }
  else {
    if (bVar10 == 2) {
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
      lVar16 = 0;
      do {
        (pbVar29 + lVar16 + 0x1b00)[0] = 0x1e;
        (pbVar29 + lVar16 + 0x1b00)[1] = 3;
        lVar16 = lVar16 + 2;
      } while (lVar16 != 0x800);
      uVar18 = 0x13;
      puVar50 = pbVar29 + 0x28f1;
      pbVar12 = pbVar29 + 0x1b00;
      goto LAB_000b2f62;
    }
    if (bVar10 != 1) {
      return (qword *)0xff;
    }
    uVar18 = 0x20;
    puVar50 = pbVar29 + 0x28a0;
  }
  pbVar12 = pbVar29 + (ulonglong)bVar10 * 0xc80 + 0x200;
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
  lVar16 = 0;
  do {
    (pbVar12 + lVar16)[0] = 0x1e;
    (pbVar12 + lVar16)[1] = 3;
    lVar16 = lVar16 + 2;
  } while (lVar16 != 0x800);
  (*(code *)PTR_memset_000c3cd8)(0,0x480);
LAB_000b2f62:
  uVar33 = (ulonglong)*(ushort *)(pbVar29 + (ulonglong)bVar10 * 2 + 0x28e8);
  if (uVar18 < *(ushort *)(pbVar29 + (ulonglong)bVar10 * 2 + 0x28e8)) {
    return (qword *)0xff;
  }
  if (uVar33 != 0) {
    uVar46 = 0;
    do {
      if (0xf < (ulonglong)(byte)puVar50[uVar46]) {
        return (qword *)0xff;
      }
      auStack_298[(byte)puVar50[uVar46]] = auStack_298[(byte)puVar50[uVar46]] + 1;
      uVar46 = uVar46 + 1;
    } while (uVar33 != uVar46);
  }
  uVar41 = 1;
  bVar54 = false;
  iVar37 = 0;
  iVar20 = 0;
  uVar46 = 0;
  do {
    if (bVar54) {
      uVar42 = uVar46 + (uVar46 < 0x10);
      if (0xf < uVar46) break;
    }
    else {
      uVar42 = 0x10 - uVar46;
      if (uVar41 <= 0x10 - uVar46) {
        uVar42 = uVar41;
      }
      if (uVar46 <= uVar42 + uVar46) {
        uVar46 = uVar42 + uVar46;
      }
      if (0xf < uVar46) break;
      uVar42 = uVar46 + 1;
    }
    iVar20 = iVar20 + (uint)auStack_298[uVar46];
    iVar37 = (iVar37 + (uint)auStack_298[uVar46]) * 2;
    aiStack_278[uVar46 + 1] = iVar37;
    bVar54 = true;
    uVar41 = 0;
    uVar46 = uVar42;
  } while( true );
  if (iVar37 != 0x10000) {
    if (bVar10 == 2) {
      return (qword *)0x1;
    }
    if (1 < (ushort)iVar20) {
      return (qword *)0x1;
    }
  }
  if (uVar33 != 0) {
    uVar18 = 0xffff;
    uVar46 = 0;
    do {
      while( true ) {
        uVar41 = uVar46 + 1;
        bVar10 = puVar50[uVar46];
        uVar51 = bVar10 & 0xf;
        if ((bVar10 & 0xf) != 0) break;
LAB_000b30f1:
        uVar46 = uVar41;
        if (uVar41 == uVar33) goto LAB_000b31b9;
      }
      bVar17 = (byte)uVar51;
      uVar45 = (ushort)((uint)(aiStack_278[uVar51] << (-bVar17 & 0x1f)) >> (-bVar17 & 0x1f));
      uVar45 = uVar45 << 8 | uVar45 >> 8;
      uVar24 = (uVar45 & 0xf0f) << 4 | (uVar45 & 0xf0f0) >> 4;
      uVar24 = (uVar24 >> 2 & 0x3333) + (uVar24 & 0x3333) * 4;
      uVar23 = (uVar24 >> 1 & 0x5555) + (uVar24 & 0x5555) * 2 >> (0x10 - bVar17 & 0x1f);
      aiStack_278[uVar51] = aiStack_278[uVar51] + 1;
      uVar24 = uVar23 & 0xffff;
      uVar42 = (ulonglong)uVar24;
      if (bVar17 < 0xb) {
        if (uVar24 < 0x400) {
          do {
            *(ushort *)(pbVar12 + uVar42 * 2) = (ushort)uVar46 | (ushort)(uVar51 << 9);
            uVar42 = uVar42 + (uint)(1 << bVar17);
          } while (uVar42 < 0x400);
        }
        goto LAB_000b30f1;
      }
      uVar42 = (ulonglong)(uVar23 & 0x3ff);
      uVar45 = *(ushort *)(pbVar12 + uVar42 * 2);
      if (uVar45 == 0x31e) {
        *(ushort *)(pbVar12 + uVar42 * 2) = uVar18;
        uVar45 = uVar18;
        uVar18 = uVar18 - 2;
      }
      uVar24 = uVar24 >> 9;
      uVar42 = (ulonglong)uVar24;
      if (bVar17 != 0xb) {
        cVar39 = (bVar10 & 0xf) - 0xb;
        do {
          uVar45 = ~uVar45 + (ushort)(((uint)uVar42 >> 1 & 1) != 0);
          if (0x23f < uVar45) {
            return (qword *)0xff;
          }
          if (*(ushort *)(pbVar12 + (ulonglong)uVar45 * 2 + 0x800) == 0) {
            *(ushort *)(pbVar12 + (ulonglong)uVar45 * 2 + 0x800) = uVar18;
            uVar45 = uVar18;
            uVar18 = uVar18 - 2;
          }
          else {
            uVar45 = *(ushort *)(pbVar12 + (ulonglong)uVar45 * 2 + 0x800);
          }
          uVar42 = uVar42 >> 1;
          uVar24 = (uint)uVar42;
          cVar39 = cVar39 + -1;
        } while (cVar39 != '\0');
      }
      uVar45 = ~uVar45 + (ushort)((uVar24 >> 1 & 1) != 0);
      if (0x23f < uVar45) {
        return (qword *)0xff;
      }
      *(ushort *)(pbVar12 + (ulonglong)uVar45 * 2 + 0x800) = (ushort)uVar46;
      uVar46 = uVar41;
    } while (uVar41 < uVar33);
  }
LAB_000b31b9:
  cVar39 = pbVar29[0x28ef];
  if (cVar39 == '\0') {
    *(undefined4 *)(puStack_228 + 0x10) = 0;
    return (qword *)0x1;
  }
  if (cVar39 == '\x02') {
    *(undefined4 *)(puStack_228 + 0x10) = 0;
    return (qword *)0x1;
  }
  bVar10 = cVar39 - 1;
  pbVar29[0x28ef] = bVar10;
  goto LAB_000b2e78;
}


