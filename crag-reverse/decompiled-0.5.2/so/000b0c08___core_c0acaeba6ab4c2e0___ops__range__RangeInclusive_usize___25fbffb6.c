// 000b0c08 <core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[c0acaeba6ab4c2e0]::slice::index::range::<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>
    */

qword * __rustcall
core[c0acaeba6ab4c2e0]::slice::index::range::
<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>
          (undefined8 *param_1,qword *param_2,undefined8 param_3,undefined8 param_4,longlong param_5
          ,qword *param_6,uint param_7)

{
  undefined **ppuVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  qword *pqVar9;
  qword *pqVar10;
  byte bVar11;
  qword qVar12;
  byte *pbVar13;
  uint *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar17;
  byte bVar18;
  ushort uVar19;
  uint uVar20;
  int iVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  uint *puVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  qword *extraout_RDX;
  qword *pqVar28;
  qword *extraout_RDX_00;
  undefined7 uVar33;
  uint7 uVar34;
  qword *extraout_RDX_01;
  undefined8 extraout_RDX_02;
  qword *extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  byte *pbVar32;
  qword *pqVar35;
  qword *pqVar36;
  ulonglong uVar37;
  qword *pqVar38;
  int iVar39;
  undefined1 *puVar40;
  char cVar41;
  qword *pqVar42;
  qword *pqVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  qword *pqVar46;
  undefined1 *puVar47;
  ushort uVar48;
  ulonglong uVar49;
  qword *pqVar50;
  undefined1 *puVar51;
  qword *pqVar52;
  qword *pqVar53;
  undefined1 *puVar54;
  uint uVar55;
  uint *puVar56;
  bool bVar57;
  bool bVar58;
  undefined4 uVar59;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  qword *unaff_retaddr;
  ushort auStack_2a0 [16];
  int aiStack_280 [20];
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  byte *pbStack_218;
  undefined1 *puStack_210;
  byte *pbStack_208;
  code *pcStack_200;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  undefined1 uStack_1e0;
  undefined1 *puStack_1d8;
  qword *pqStack_1d0;
  undefined1 *puStack_1c8;
  char *pcStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  code *pcStack_198;
  qword *pqStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  undefined **ppuStack_178;
  qword *pqStack_170;
  undefined4 uStack_164;
  byte *pbStack_160;
  undefined8 *puStack_158;
  uint uStack_14c;
  uint *puStack_148;
  uint uStack_140;
  byte bStack_139;
  qword *pqStack_138;
  qword *pqStack_130;
  qword *pqStack_128;
  qword *pqStack_120;
  uint *puStack_118;
  code *pcStack_110;
  code *pcStack_108;
  longlong lStack_100;
  qword *pqStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  char *pcStack_e0;
  uint *puStack_d8;
  undefined8 *puStack_d0;
  uint *puStack_c8;
  undefined4 *puStack_c0;
  uint auStack_b8 [6];
  qword *pqStack_a0;
  uint *puStack_98;
  qword *pqStack_90;
  longlong lStack_88;
  qword *pqStack_80;
  qword *pqStack_60;
  qword *pqStack_58;
  qword *pqStack_50;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  byte bStack_3c;
  undefined8 uStack_10;
  
  puVar24 = (uint *)param_1[1];
  if (*(char *)(param_1 + 2) == '\0') {
    if (puVar24 < param_2) {
      puVar24 = (uint *)((longlong)puVar24 + 1);
      goto LAB_000b0c32;
    }
LAB_000b0c4c:
    ppuVar22 = &PTR_anon_a5ba4df77f1b4a3fe3c10524a13d0962_7_llvm_10773032595843144328_000c2af0;
  }
  else {
    if (puVar24 <= param_2) {
LAB_000b0c32:
      if ((qword *)*param_1 <= puVar24) {
        return (qword *)*param_1;
      }
      uStack_10 = (code *)0xb0c4c;
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_anon_a5ba4df77f1b4a3fe3c10524a13d0962_7_llvm_10773032595843144328_000c2b20);
      goto LAB_000b0c4c;
    }
    ppuVar22 = &PTR_anon_a5ba4df77f1b4a3fe3c10524a13d0962_7_llvm_10773032595843144328_000c2b08;
  }
  uStack_10 = miniz_oxide[d073f249698f1019]::inflate::core::decompress;
  uVar59 = (*(code *)PTR_slice_index_fail_000c3bb0)();
  uStack_10 = (code *)((longlong)register0x00000020 + -8);
  pqStack_a0 = (qword *)0x0;
  if (unaff_retaddr <= param_6) {
    pqVar52 = (qword *)(-(ulonglong)((param_7 & 4) != 0) |
                       (ulonglong)
                       ((longlong)param_6 +
                       (ulonglong)(param_6 == (qword *)0x0) + 0xffffffffffffffff));
    if (((ulonglong)((longlong)pqVar52 + 1) & (ulonglong)pqVar52) == 0) {
      pbStack_e8 = (byte *)((longlong)pqVar52 + 1);
      pqStack_f8 = param_2;
      pqStack_60 = param_2;
      pqStack_58 = (qword *)ppuVar22;
      pqVar53 = (qword *)CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(puVar24 + 0xa41));
      lStack_88 = param_5;
      pqStack_80 = param_6;
      pqVar43 = (qword *)CONCAT71((int7)((ulonglong)param_5 >> 8),*(byte *)(puVar24 + 0xa3c));
      pqStack_50 = *(qword **)(puVar24 + 0xa30);
      uStack_48 = puVar24[0xa32];
      uStack_44 = puVar24[0xa37];
      uStack_40 = puVar24[0xa38];
      uVar55 = 1;
      if ((param_7 & 2) == 0) {
        uVar55 = 0xfc;
      }
      bStack_3c = *(byte *)(puVar24 + 0xa3c);
      puStack_c8 = puVar24 + 0x9e0;
      puStack_c0 = puVar24 + 0xa28;
      puStack_d0 = (undefined8 *)((longlong)puVar24 + 0x28f1);
      pcStack_e0 = (char *)(puVar24 + 0xa04);
      puStack_d8 = puVar24 + 0xa20;
      lStack_f0 = (longlong)(puVar24 + 0xa39);
      puStack_98 = puVar24;
      pqVar38 = (qword *)(ulonglong)puVar24[0xa37];
      pqVar36 = unaff_retaddr;
LAB_000b0d9e:
      uVar27 = uStack_40;
      pqVar9 = pqStack_58;
      pqVar28 = pqStack_60;
      pqVar46 = pqStack_80;
      uVar7 = _UNK_0000908c;
      uVar6 = _UNK_00009088;
      uVar5 = _UNK_00009084;
      uVar4 = _DAT_00009080;
      pqVar50 = (qword *)(ulonglong)param_7;
      puVar56 = &switchD_000b0db3::switchdataD_00016d44;
      ppuVar23 = (undefined **)((ulonglong)pqVar53 & 0xffffffff);
      bVar11 = (byte)pqVar53;
      uVar34 = (uint7)((ulonglong)pqVar38 >> 8);
      if (0x18 < bVar11) {
        uVar27 = (uint)CONCAT71(uVar34,0xff);
        pqVar50 = pqVar52;
        goto LAB_000b21e0;
      }
      uVar26 = (&switchD_000b0db3::switchdataD_00016d44)[(ulonglong)pqVar53 & 0xff];
      uVar33 = (undefined7)((ulonglong)pqVar53 >> 8);
      bVar18 = (byte)uStack_48;
      pqVar35 = (qword *)ppuVar22;
      pqVar42 = pqVar43;
      pqVar10 = pqVar50;
      switch((ulonglong)pqVar53 & 0xff) {
      case 0:
        pqStack_50 = (qword *)0x0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        bStack_3c = 0;
        puVar24[0xa33] = _DAT_00009080;
        puVar24[0xa34] = uVar5;
        puVar24[0xa35] = uVar6;
        puVar24[0xa36] = uVar7;
        pqVar53 = (qword *)(CONCAT71((int7)((ulonglong)
                                            ((longlong)&switchD_000b0db3::switchdataD_00016d44 +
                                            (longlong)(int)uVar26) >> 8),
                                     ((param_7 & 1) == 0) * '\x02' + '\x01') & 0xffffffff);
        uVar59 = uVar4;
        goto LAB_000b0d9e;
      case 1:
        if (pqStack_58 == (qword *)0x0) {
          bVar11 = 1;
          goto LAB_000b21a3;
        }
        pqStack_60 = (qword *)((longlong)pqStack_60 + 1);
        pqStack_58 = (qword *)((longlong)pqStack_58 + 0xffffffffffffffff);
        puVar24[0xa33] = (uint)(byte)*pqVar28;
        pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqStack_60 >> 8),2);
        goto LAB_000b0d9e;
      case 2:
        if (pqStack_58 == (qword *)0x0) {
          bVar11 = 2;
LAB_000b21a3:
          puVar14 = (uint *)(ulonglong)uVar55;
          goto LAB_000b21a6;
        }
        pqStack_60 = (qword *)((longlong)pqStack_60 + 1);
        pqStack_58 = (qword *)((longlong)pqStack_58 + 0xffffffffffffffff);
        bVar11 = (byte)*pqVar28;
        uVar27 = puVar24[0xa33];
        uVar26 = uVar27 << 8 | (uint)bVar11;
        pqVar38 = (qword *)(ulonglong)uVar26;
        puVar24[0xa34] = (uint)bVar11;
        bVar58 = (uVar27 & 0xf) != 8 || ((bVar11 & 0x20) != 0 || uVar26 % 0x1f != 0);
        uVar27 = (uVar27 >> 4) + 8 & 0x3f;
        if ((param_7 & 4) == 0) {
          bVar58 = bVar58 || (ulonglong)pbStack_e8 >> (sbyte)uVar27 == 0;
        }
        uVar26 = 3;
        if (bVar58) {
          uVar26 = 0x1d;
        }
        pqVar53 = (qword *)(ulonglong)uVar26;
        if (0xf < uVar27) {
          pqVar53 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_entry + 5);
        }
        goto LAB_000b0d9e;
      case 3:
        pqVar43 = pqStack_58;
        pqVar53 = pqStack_60;
        do {
          pqVar46 = pqStack_50;
          if (uStack_48 < 3) {
            if (pqVar43 != (qword *)0x0) {
              pqVar43 = (qword *)((longlong)pqVar43 + 0xffffffffffffffff);
              pqVar28 = (qword *)((longlong)pqVar53 + 1);
              pqStack_60 = pqVar28;
              pqStack_58 = pqVar43;
              uVar37 = (ulonglong)(byte)*pqVar53 << ((byte)uStack_48 & 0x3f) | (ulonglong)pqStack_50
              ;
              pqStack_50 = (qword *)(uVar37 >> 3);
              uStack_48 = (uStack_48 | 8) - 3;
              *(byte *)((longlong)puVar24 + 0x28ee) = (byte)uVar37 & 1;
              bVar11 = (byte)uVar37 >> 1;
              pqVar38 = (qword *)(CONCAT71((int7)(uVar37 >> 8),bVar11) & 0xffffffffffffff03);
              *(char *)((longlong)puVar24 + 0x28ef) = (char)pqVar38;
              pqVar53 = pqVar28;
              switch(bVar11 & 3) {
              case 1:
                goto switchD_000b14a8_caseD_1;
              case 2:
                goto switchD_000b14a8_caseD_2;
              case 3:
                goto switchD_000b14a8_caseD_3;
              }
              goto switchD_000b14a8_caseD_0;
            }
            bVar11 = 3;
LAB_000b215e:
            puVar14 = (uint *)(ulonglong)uVar55;
            goto LAB_000b2161;
          }
          pqVar28 = (qword *)((ulonglong)pqStack_50 >> 3);
          pqStack_50 = pqVar28;
          uStack_48 = uStack_48 - 3;
          *(byte *)((longlong)puVar24 + 0x28ee) = (byte)pqVar46 & 1;
          bVar11 = (byte)((ulonglong)pqVar46 >> 1) & 3;
          *(byte *)((longlong)puVar24 + 0x28ef) = bVar11;
          switch(bVar11) {
          case 0:
switchD_000b14a8_caseD_0:
            pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqVar28 >> 8),4);
            goto LAB_000b203f;
          case 2:
switchD_000b14a8_caseD_2:
            uStack_40 = 0;
            pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqVar28 >> 8),8);
            goto LAB_000b203f;
          case 3:
switchD_000b14a8_caseD_3:
            pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqVar28 >> 8),0x19);
            goto LAB_000b203f;
          }
switchD_000b14a8_caseD_1:
          puVar24[0xa3a] = 0x200120;
          pcStack_108 = (code *)0xb1507;
          (*(code *)PTR_memset_000c3cd8)(&switchD_000b14a8::switchdataD_00016da8,0x90);
          uVar3 = s__00008f70._8_8_;
          uVar29 = s__00008f70._0_8_;
          *(undefined8 *)pcStack_e0 = s__00008f70._0_8_;
          *(undefined8 *)(pcStack_e0 + 8) = uVar3;
          *(undefined8 *)(pcStack_e0 + 0x10) = uVar29;
          *(undefined8 *)(pcStack_e0 + 0x18) = uVar3;
          *(undefined8 *)(pcStack_e0 + 0x20) = uVar29;
          *(undefined8 *)(pcStack_e0 + 0x28) = uVar3;
          *(undefined8 *)(pcStack_e0 + 0x30) = uVar29;
          *(undefined8 *)(pcStack_e0 + 0x38) = uVar3;
          *(undefined8 *)(pcStack_e0 + 0x40) = uVar29;
          *(undefined8 *)(pcStack_e0 + 0x48) = uVar3;
          *(undefined8 *)(pcStack_e0 + 0x50) = uVar29;
          *(undefined8 *)(pcStack_e0 + 0x58) = uVar3;
          *(undefined8 *)(pcStack_e0 + 0x60) = uVar29;
          *(undefined8 *)(pcStack_e0 + 0x68) = uVar3;
          uVar29 = _UNK_00008ec8;
          *(undefined8 *)puStack_d8 = _DAT_00008ec0;
          *(undefined8 *)(puStack_d8 + 2) = uVar29;
          *(undefined8 *)(puStack_d8 + 4) = 0x707070707070707;
          *(undefined8 *)(puVar24 + 0xa26) = 0x808080808080808;
          uVar6 = _UNK_000090dc;
          uVar5 = _UNK_000090d8;
          uVar4 = _UNK_000090d4;
          uVar59 = _DAT_000090d0;
          puStack_c0[4] = _DAT_000090d0;
          puStack_c0[5] = uVar4;
          puStack_c0[6] = uVar5;
          puStack_c0[7] = uVar6;
          *puStack_c0 = uVar59;
          puStack_c0[1] = uVar4;
          puStack_c0[2] = uVar5;
          puStack_c0[3] = uVar6;
          pqVar38 = (qword *)&pqStack_50;
          pcStack_108 = (code *)0xb1581;
          uVar27 = miniz_oxide[d073f249698f1019]::inflate::core::init_tree(puVar24);
          uVar59 = extraout_XMM0_Da_00;
        } while ((char)uVar27 == '\0');
        pqVar53 = extraout_RDX_00;
        if ((uVar27 & 0xff) == 1) break;
        pqVar43 = pqVar42;
        if ((uVar27 & 0xff) != 2) {
          bVar11 = 3;
          goto LAB_000b21e0;
        }
        puVar14 = (uint *)((ulonglong)extraout_RDX_00 & 0xffffffff);
        bVar11 = 3;
LAB_000b2164:
        pqVar52 = pqVar50;
LAB_000b21a6:
        uVar27 = (uint)puVar14;
        pqVar53 = (qword *)ppuVar22;
        pqVar38 = pqVar52;
        if ((char)puVar14 == '\x01') {
          uVar33 = (undefined7)((ulonglong)puVar24 >> 8);
          if (pqStack_80 == pqVar36) {
            puVar14 = (uint *)CONCAT71(uVar33,'\x02' - (bVar11 == 0x17));
            goto LAB_000b21d6;
          }
          bVar58 = true;
          puVar56 = (uint *)0x0;
          puVar14 = (uint *)CONCAT71(uVar33,1);
        }
        else if ((uVar27 & 0xff) == 0xfc) {
LAB_000b21d6:
          bVar58 = true;
          puVar56 = (uint *)0x0;
        }
        else {
          pqVar50 = pqVar52;
LAB_000b21e0:
          uVar26 = (int)ppuVar22 - (int)pqStack_58;
          uVar55 = uStack_48 >> 3;
          if (uVar26 < uStack_48 >> 3) {
            uVar55 = uVar26;
          }
          puVar56 = (uint *)(ulonglong)uVar55;
          uStack_48 = uStack_48 + uVar55 * -8;
          puVar14 = (uint *)(ulonglong)uVar27;
          bVar58 = (char)uVar27 != '\0';
          pqVar53 = (qword *)ppuVar22;
          pqVar38 = pqVar50;
        }
        puVar8 = puStack_98;
        pqVar50 = (qword *)(ulonglong)param_7;
        *(byte *)(puStack_98 + 0xa41) = bVar11;
        puStack_98[0xa32] = uStack_48;
        puStack_98[0xa37] = uStack_44;
        puStack_98[0xa38] = uStack_40;
        *(byte *)(puStack_98 + 0xa3c) = bStack_3c;
        *(ulonglong *)(puStack_98 + 0xa30) =
             ~(-1L << ((byte)uStack_48 & 0x3f)) & (ulonglong)pqStack_50;
        puVar24 = puVar14;
        if ((((param_7 & 0x40) == 0) && ((param_7 & 9) != 0)) && (-1 < (char)puVar14)) {
          pqVar52 = pqStack_80;
          pqVar42 = pqVar43;
          if ((pqVar36 < unaff_retaddr) || (pqStack_80 < pqVar36)) {
LAB_000b2413:
            pcStack_108 = (code *)0xb2427;
            (*(code *)PTR_slice_index_fail_000c3bb0)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b98,pqVar52);
            pqVar43 = pqVar50;
LAB_000b2427:
            pcStack_108 = (code *)0xb2439;
            (*(code *)PTR_slice_index_fail_000c3bb0)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2aa8,0x200);
            ppuVar22 = (undefined **)pqVar53;
            pqVar50 = pqVar43;
            pqVar52 = pqVar38;
LAB_000b2439:
            ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b80;
            pcStack_108 = (code *)0xb244c;
            uVar59 = (*(code *)PTR_slice_index_fail_000c3bb0)
                               (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b80,ppuVar22);
LAB_000b244c:
            pcStack_108 = (code *)0xb245e;
            uVar59 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                               (uVar59,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2a78);
            pqVar35 = (qword *)ppuVar22;
            ppuVar22 = (undefined **)pqVar50;
            pqVar50 = pqVar52;
LAB_000b245e:
            pcStack_108 = (code *)0xb2470;
            uVar59 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                               (uVar59,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2a90);
            pqVar46 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_machine + 1);
LAB_000b2470:
            pqVar10 = (qword *)ppuVar22;
            pqStack_60 = pqVar42;
            pqStack_58 = param_6;
LAB_000b2478:
            ppuVar22 = (undefined **)pqVar10;
            pcStack_108 = (code *)0xb2485;
            pbVar13 = (byte *)(*(code *)PTR_panic_bounds_check_000c3dd8)
                                        (uVar59,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ac0);
LAB_000b2485:
            ppuVar30 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ac0;
            pcStack_108 = miniz_oxide[d073f249698f1019]::inflate::core::apply_match;
            pqStack_60 = pqVar42;
            pqStack_58 = param_6;
            uVar59 = (*(code *)PTR_panic_bounds_check_000c3dd8)();
            ppuVar31 = (undefined **)((longlong)ppuVar30 - (longlong)ppuVar23 & (ulonglong)param_6);
            if (pqVar42 == (qword *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2)) {
              if ((((ulonglong)((longlong)ppuVar30 + 3U) <= pqVar46 &&
                    ppuVar30 < (undefined **)0xfffffffffffffffd) &&
                  (puVar24 = (uint *)((longlong)ppuVar31 + 2U & (ulonglong)param_6),
                  puVar24 < pqVar46)) &&
                 ((ppuVar31 < pqVar46 &&
                  (puVar56 = (uint *)((longlong)ppuVar31 + 1 & (ulonglong)param_6),
                  puVar56 < pqVar46)))) {
                pbVar13[(longlong)ppuVar30] = pbVar13[(longlong)ppuVar31];
                (pbVar13 + 1)[(longlong)ppuVar30] = pbVar13[(longlong)puVar56];
                pqVar46 = (qword *)(ulonglong)pbVar13[(longlong)puVar24];
                (pbVar13 + 2)[(longlong)ppuVar30] = pbVar13[(longlong)puVar24];
              }
              return pqVar46;
            }
            if (((ppuVar30 <= ppuVar31 &&
                  (uint *)((longlong)ppuVar31 - (longlong)ppuVar30) < pqVar42) ||
                (ppuVar23 < pqVar42)) ||
               (ppuVar1 = (undefined **)((longlong)pqVar42 + (longlong)ppuVar31), pqVar46 <= ppuVar1
               )) {
              pcStack_108 = (code *)&uStack_10;
              pqVar52 = (qword *)miniz_oxide[d073f249698f1019]::inflate::core::transfer
                                           (pbVar13,pqVar46,ppuVar31,ppuVar30);
              return pqVar52;
            }
            if (ppuVar31 < ppuVar30) {
              puVar14 = (uint *)((longlong)pqVar46 - (longlong)ppuVar30);
              pcStack_108 = (code *)&uStack_10;
              if (ppuVar30 <= pqVar46) {
                if (puVar14 < pqVar42) {
                  ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c28;
                  pcStack_108 = (code *)&uStack_10;
                  goto LAB_000b25a1;
                }
                pcStack_108 = (code *)&uStack_10;
                if ((ppuVar31 <= ppuVar1) && (pcStack_108 = (code *)&uStack_10, ppuVar1 <= ppuVar30)
                   ) goto LAB_000b2571;
                goto LAB_000b25af;
              }
            }
            else {
              puVar14 = (uint *)((longlong)pqVar46 - (longlong)ppuVar31);
              if (pqVar46 < ppuVar31) {
                ppuVar30 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2bb0;
                pcStack_108 = (code *)&uStack_10;
                goto LAB_000b25e0;
              }
              if ((CARRY8((ulonglong)pqVar42,(ulonglong)ppuVar30)) ||
                 (ppuVar31 < (undefined **)((longlong)ppuVar30 + (longlong)pqVar42))) {
                pcStack_110 = (code *)0xb259a;
                pcStack_108 = (code *)&uStack_10;
                puVar14 = (uint *)(*(code *)PTR_slice_index_fail_000c3bb0)
                                            (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2be0);
              }
              else {
                pcStack_108 = (code *)&uStack_10;
                if (pqVar42 <= puVar14) {
LAB_000b2571:
                  pcStack_108 = (code *)&uStack_10;
                  pqVar52 = (qword *)(*(code *)PTR_memcpy_000c3aa8)(uVar59,pqVar42);
                  return pqVar52;
                }
              }
              ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2bc8;
LAB_000b25a1:
              pcStack_110 = (code *)0xb25af;
              (*(code *)PTR_slice_index_fail_000c3bb0)(ppuVar23,puVar14);
LAB_000b25af:
              ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c10;
              pcStack_110 = (code *)0xb25c2;
              (*(code *)PTR_slice_index_fail_000c3bb0)
                        (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c10,ppuVar30);
            }
            ppuVar30 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2bf8;
LAB_000b25e0:
            uVar59 = SUB84(ppuVar23,0);
            pcStack_110 = miniz_oxide[d073f249698f1019]::inflate::core::decompress_fast;
            (*(code *)PTR_panic_fmt_000c3e90)();
            pcStack_110 = (code *)&pcStack_108;
            puStack_118 = puVar24;
            pqStack_120 = (qword *)puVar56;
            pqStack_128 = pqVar50;
            pqStack_130 = (qword *)ppuVar22;
            pqStack_138 = pqVar35;
            pqStack_190 = param_6;
            uStack_164 = uVar59;
            qVar12 = *pqVar42;
            uVar55 = (uint)pqVar42[1];
            uVar37 = (ulonglong)uVar55;
            puVar47 = (undefined1 *)(ulonglong)*(uint *)((longlong)pqVar42 + 0xc);
            puVar54 = ppuVar30[1];
            puVar51 = ppuVar30[2];
            bVar11 = *(undefined1 *)((longlong)pqVar42 + 0x14);
            if ((ulonglong)Elf64_Ehdr_00000000._27_8_ < 0xe ||
                (ulonglong)((longlong)puVar54 - (longlong)puVar51) < 0x103) {
              uStack_140 = (uint)pqVar42[2];
LAB_000b264a:
              pqVar52 = (qword *)0x0;
            }
            else {
              puStack_158 = (undefined8 *)((longlong)&Elf64_Ehdr_00000000.e_machine + 1);
              puStack_148 = (uint *)Elf64_Ehdr_00000000._19_8_;
              pbStack_160 = *ppuVar30;
              uVar49 = Elf64_Ehdr_00000000._27_8_;
              ppuStack_178 = ppuVar30;
              pqStack_170 = pqVar42;
LAB_000b266e:
              do {
                uVar55 = (uint)uVar37;
                if (uVar55 < 0x1e) {
                  uVar27 = *puStack_148;
                  uVar49 = uVar49 - 4;
                  puStack_148 = puStack_148 + 1;
                  *puStack_158 = puStack_148;
                  puStack_158[1] = uVar49;
                  qVar12 = qVar12 | (ulonglong)uVar27 << ((byte)uVar37 & 0x3f);
                  uVar55 = uVar55 | 0x20;
                }
                uVar27 = (uint)*(short *)(
                                         "a formatting trait implementation returned an error when the underlying stream did not"
                                         + (ulonglong)((uint)qVar12 & 0x3ff) * 2 + 0x15);
                if ((int)uVar27 < 0) {
                  uVar26 = 0xb;
                  do {
                    uVar20 = uVar26;
                    uVar27 = ~uVar27 + (uint)((qVar12 >> ((ulonglong)(uVar20 - 1 & 0xff) & 0x3f) & 1
                                              ) != 0);
                    if (0x23f < uVar27) {
                      uVar27 = 0x7fff;
                      break;
                    }
                    uVar27 = (uint)*(short *)(unicode::unicode_data::cn_planes_0_3::OFFSETS +
                                             (ulonglong)uVar27 * 2 + 0x584);
                    uVar26 = (uint)(byte)((char)uVar20 + 1);
                  } while ((int)uVar27 < 0);
                }
                else {
                  uVar20 = uVar27 >> 9;
                }
                qVar12 = qVar12 >> ((byte)uVar20 & 0x3f);
                uVar55 = uVar55 - uVar20;
                uVar37 = (ulonglong)uVar55;
                puVar40 = puVar51;
                uVar26 = uVar27;
                if ((uVar27 >> 8 & 1) != 0) {
LAB_000b27bb:
                  uStack_140 = uVar26 & 0x1ff;
                  if (uStack_140 == 0x100) {
                    uStack_140 = 0x100;
                    goto LAB_000b264a;
                  }
                  pqVar52 = (qword *)0xff;
                  if (0x11d < uStack_140) goto LAB_000b29b6;
                  uVar27 = uVar26 - 1 & 0x1f;
                  if (uVar55 < 0x1e) {
                    uVar26 = *puStack_148;
                    uVar49 = uVar49 - 4;
                    puStack_148 = puStack_148 + 1;
                    *puStack_158 = puStack_148;
                    puStack_158[1] = uVar49;
                    qVar12 = qVar12 | (ulonglong)uVar26 << ((byte)uVar55 & 0x3f);
                    uVar55 = uVar55 | 0x20;
                  }
                  bVar11 = ""[uVar27];
                  uStack_140 = (uint)*(ushort *)(&DAT_00016e3e + (ulonglong)uVar27 * 2);
                  if (0xffffffeb < uVar27 - 0x1c) {
                    uVar27 = (uint)qVar12;
                    qVar12 = qVar12 >> (bVar11 & 0x3f);
                    uVar55 = uVar55 - bVar11;
                    uStack_140 = (~(uint)(-1L << (bVar11 & 0x3f)) & uVar27) + uStack_140;
                  }
                  uVar27 = (uint)*(short *)(&UNK_00017cb4 + (ulonglong)((uint)qVar12 & 0x3ff) * 2);
                  if ((int)uVar27 < 0) {
                    uVar26 = 0xb;
                    do {
                      uVar20 = uVar26;
                      uVar27 = ~uVar27 + (uint)((qVar12 >> ((ulonglong)(uVar20 - 1 & 0xff) & 0x3f) &
                                                1) != 0);
                      if (0x23f < uVar27) {
                        uVar27 = 0x7fff;
                        break;
                      }
                      uVar27 = (uint)*(short *)(num::imp::flt2dec::strategy::grisu::CACHED_POW10 +
                                               (ulonglong)uVar27 * 2 + 0x4c);
                      uVar26 = (uint)(byte)((char)uVar20 + 1);
                    } while ((int)uVar27 < 0);
                  }
                  else {
                    uVar20 = uVar27 >> 9;
                  }
                  qVar12 = qVar12 >> ((byte)uVar20 & 0x3f);
                  uVar55 = uVar55 - uVar20;
                  if (0x1d < (uVar27 & 0x1ff)) goto LAB_000b29b6;
                  bVar11 = (byte)uVar27 >> 1;
                  bVar11 = (bVar11 - 1) + (bVar11 == 0);
                  uVar19 = *(ushort *)(&DAT_00016df8 + (ulonglong)(uVar27 & 0x1ff) * 2);
                  puVar47 = (undefined1 *)(ulonglong)uVar19;
                  if (3 < (byte)uVar27) {
                    if (uVar55 < 0x1e) {
                      uVar27 = *puStack_148;
                      uVar49 = uVar49 - 4;
                      puStack_148 = puStack_148 + 1;
                      *puStack_158 = puStack_148;
                      puStack_158[1] = uVar49;
                      qVar12 = qVar12 | (ulonglong)uVar27 << ((byte)uVar55 & 0x3f);
                      uVar55 = uVar55 | 0x20;
                    }
                    uVar27 = (uint)qVar12;
                    qVar12 = qVar12 >> (bVar11 & 0x3f);
                    uVar55 = uVar55 - bVar11;
                    puVar47 = (undefined1 *)
                              (ulonglong)((~(uint)(-1L << (bVar11 & 0x3f)) & uVar27) + (uint)uVar19)
                    ;
                  }
                  uVar37 = (ulonglong)uVar55;
                  uStack_14c = (uint)puVar47;
                  if ((puVar54 < puVar47) || (((byte)uStack_164 >> 2 & puVar40 < puVar47) != 0))
                  goto LAB_000b29b6;
                  uStack_188 = (ulonglong)uStack_140;
                  pcStack_198 = (code *)0xb2977;
                  uStack_180 = uVar49;
                  bStack_139 = bVar11;
                  miniz_oxide[d073f249698f1019]::inflate::core::apply_match
                            (pbStack_160,puVar54,puVar40,puVar47,uStack_188,pqStack_190);
                  puVar51 = puVar40 + uStack_188;
                  ppuStack_178[2] = puVar51;
                  pqVar52 = (qword *)0x0;
                  pqVar42 = pqStack_170;
                  bVar11 = bStack_139;
                  if (0x102 < (ulonglong)((longlong)puVar54 - (longlong)puVar51)) {
                    puVar47 = (undefined1 *)(ulonglong)uStack_14c;
                    ppuVar30 = ppuStack_178;
                    uVar49 = uStack_180;
                    if (0xd < uStack_180) goto LAB_000b266e;
                  }
                  puVar47 = (undefined1 *)(ulonglong)uStack_14c;
                  goto LAB_000b29b6;
                }
                uVar26 = (uint)*(short *)(
                                         "a formatting trait implementation returned an error when the underlying stream did not"
                                         + (ulonglong)((uint)qVar12 & 0x3ff) * 2 + 0x15);
                if ((int)uVar26 < 0) {
                  uVar20 = 0xb;
                  do {
                    bVar18 = (byte)uVar20;
                    uVar26 = ~uVar26 + (uint)((qVar12 >> ((ulonglong)(uVar20 - 1 & 0xff) & 0x3f) & 1
                                              ) != 0);
                    if (0x23f < uVar26) {
                      uVar26 = 0x7fff;
                      break;
                    }
                    uVar26 = (uint)*(short *)(unicode::unicode_data::cn_planes_0_3::OFFSETS +
                                             (ulonglong)uVar26 * 2 + 0x584);
                    uVar20 = (uint)(byte)(bVar18 + 1);
                  } while ((int)uVar26 < 0);
                  pbVar13 = (byte *)(ulonglong)bVar18;
                  ppuVar30 = ppuStack_178;
                }
                else {
                  pbVar13 = (byte *)(ulonglong)(uVar26 >> 9);
                }
                qVar12 = qVar12 >> ((byte)pbVar13 & 0x3f);
                if (puVar54 <= puVar51) {
LAB_000b2a16:
                  ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ac0;
                  pcStack_198 = miniz_oxide[d073f249698f1019]::inflate::core::transfer;
                  uVar59 = (*(code *)PTR_panic_bounds_check_000c3dd8)();
                  pcStack_1c0 = "mid > len";
                  uVar49 = (longlong)ppuVar22 - (longlong)pbVar13;
                  if (ppuVar22 <= pbVar13) {
                    uVar49 = (longlong)pbVar13 - (longlong)ppuVar22;
                  }
                  pbVar25 = pbVar13 + ((ulonglong)pqVar42 & 0xfffffffffffffffc);
                  puStack_1b8 = puVar51;
                  puStack_1b0 = puVar54;
                  uStack_1a8 = uVar37;
                  uStack_1a0 = qVar12;
                  if (((ppuVar22 < pbVar13) &&
                      ((byte *)((longlong)ppuVar22 + (longlong)pqVar42) + -3 < puVar54 ||
                       puVar47 == (undefined1 *)0xffffffffffffffff)) && (uVar49 == 1)) {
                    if (puVar54 <= pbVar13 + -1) {
                      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c40;
                      pbVar25 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
                      pbVar32 = pbVar13 + -1;
                      pcStack_198 = (code *)&pcStack_110;
                      goto LAB_000b2e51;
                    }
                    pcStack_198 = (code *)&pcStack_110;
                    if (pbVar25 < pbVar13) goto LAB_000b2d88;
                    pcStack_198 = (code *)&pcStack_110;
                    if (puVar54 < pbVar25) goto LAB_000b2d88;
                    pcStack_200 = (code *)0xb2ab8;
                    pcStack_198 = (code *)&pcStack_110;
                    uVar59 = (*(code *)PTR_memset_000c3cd8)();
                    ppuVar22 = (undefined **)(pbVar25 + -1);
                    uVar27 = (uint)pqVar42 & 3;
                    puVar24 = &switchD_000b2ad3::switchdataD_00016db8;
                    uVar55 = (&switchD_000b2ad3::switchdataD_00016db8)[uVar27];
                    pbVar13 = pbVar25;
                    switch(uVar27) {
                    case 0:
                      goto switchD_000b2ad3_caseD_0;
                    case 1:
                      goto switchD_000b2ad3_caseD_1;
                    case 2:
                      goto switchD_000b2ad3_caseD_2;
                    }
                    goto switchD_000b2ad3_caseD_3;
                  }
                  pbVar32 = puVar54 + -3;
                  pbVar16 = (byte *)0x0;
                  if (Elf64_Ehdr_00000000.e_ident_magic_str + 1 < puVar54) {
                    pbVar16 = pbVar32;
                  }
                  if (pbVar25 <= pbVar16) {
                    pbVar16 = pbVar25;
                  }
                  if (!((ppuVar22 < pbVar13 &&
                        ((byte *)((longlong)ppuVar22 + (longlong)pqVar42) + -3 < puVar54 ||
                        puVar47 == (undefined1 *)0xffffffffffffffff)) &&
                       3 < (ulonglong)((longlong)pbVar13 - (longlong)ppuVar22))) {
                    pcStack_198 = (code *)&pcStack_110;
                    if (pbVar16 <= pbVar13) goto LAB_000b2c51;
                    pbVar2 = pbVar13 + (longlong)puVar40;
                    pbVar25 = (byte *)0x0;
                    goto LAB_000b2b9a;
                  }
                  pcStack_198 = (code *)&pcStack_110;
                  if (pbVar16 <= pbVar13) goto LAB_000b2c51;
                  puStack_1d8 = puVar47;
                  pqStack_1d0 = pqVar42;
                  puStack_1c8 = puVar40;
                  pcStack_198 = (code *)&pcStack_110;
                  goto LAB_000b2b17;
                }
                uVar55 = uVar55 - (int)pbVar13;
                uVar37 = (ulonglong)uVar55;
                pbStack_160[(longlong)puVar51] = (byte)uVar27;
                puVar40 = puVar51 + 1;
                ppuVar30[2] = puVar40;
                if ((uVar26 >> 8 & 1) != 0) goto LAB_000b27bb;
                pbVar13 = pbStack_160;
                if (puVar54 <= puVar40) goto LAB_000b2a16;
                (pbStack_160 + 1)[(longlong)puVar51] = (byte)uVar26;
                puVar51 = puVar51 + 2;
                ppuVar30[2] = puVar51;
                pqVar52 = (qword *)0x0;
                if ((ulonglong)((longlong)puVar54 - (longlong)puVar51) < 0x103) break;
              } while (0xd < uVar49);
              uStack_140 = uVar27;
            }
LAB_000b29b6:
            *pqVar42 = qVar12;
            *(uint *)(pqVar42 + 1) = uVar55;
            *(int *)((longlong)pqVar42 + 0xc) = (int)puVar47;
            *(uint *)(pqVar42 + 2) = uStack_140;
            *(byte *)((longlong)pqVar42 + 0x14) = bVar11;
            return pqVar52;
          }
          auStack_b8[0] = puStack_98[0xa36];
          pcStack_108 = (code *)0xb22c5;
          (*(code *)PTR_write_slice_000c4708)(bStack_3c,(longlong)pqVar36 - (longlong)unaff_retaddr)
          ;
          uVar27 = (uint)(uint *)((ulonglong)puVar14 & 0xff);
          uVar55 = 0xfe;
          if (auStack_b8[0] == puVar8[0xa35]) {
            uVar55 = uVar27;
          }
          if (bVar58) {
            uVar55 = uVar27;
          }
          puVar8[0xa36] = auStack_b8[0];
          puVar24 = (uint *)(ulonglong)uVar55;
          if ((param_7 & 1) == 0) {
            puVar24 = (uint *)((ulonglong)puVar14 & 0xff);
          }
        }
        qVar12 = (longlong)pqVar36 - (longlong)unaff_retaddr;
        *(char *)(pqStack_a0 + 1) = (char)puVar24;
        *pqStack_a0 = (longlong)pqVar53 - (longlong)((longlong)pqStack_58 + (longlong)puVar56);
        goto LAB_000b2317;
      case 4:
        pqStack_50 = (qword *)((ulonglong)pqStack_50 >> (bVar18 & 7));
        uStack_48 = uStack_48 & 0xfffffff8;
        uStack_40 = 0;
        pqVar53 = (qword *)CONCAT71(uVar33,5);
        goto LAB_000b0d9e;
      case 5:
        uVar27 = uStack_48;
        if ((ulonglong)uStack_40 < 4) {
          uVar26 = uStack_40 - 1;
          pbVar13 = (byte *)((ulonglong)uStack_40 + lStack_f0);
          pqVar53 = pqStack_58;
          pqVar38 = pqStack_50;
          pqVar43 = pqStack_60;
          do {
            if (uVar27 == 0) {
              if (pqVar53 == (qword *)0x0) {
LAB_000b2195:
                bVar11 = 5;
                goto LAB_000b21a3;
              }
              pqVar53 = (qword *)((longlong)pqVar53 + 0xffffffffffffffff);
              pqVar46 = (qword *)((longlong)pqVar43 + 1);
              pqStack_60 = pqVar46;
              pqStack_58 = pqVar53;
              *pbVar13 = (byte)*pqVar43;
              uVar27 = 0;
            }
            else {
              pqVar46 = pqVar43;
              if (uVar27 < 8) {
                if (pqVar53 == (qword *)0x0) goto LAB_000b2195;
                pqVar53 = (qword *)((longlong)pqVar53 + 0xffffffffffffffff);
                pqVar46 = (qword *)((longlong)pqVar43 + 1);
                pqStack_60 = pqVar46;
                pqStack_58 = pqVar53;
                pqVar38 = (qword *)((ulonglong)pqVar38 |
                                   (ulonglong)(byte)*pqVar43 << ((byte)uVar27 & 0x3f));
                uVar27 = uVar27 | 8;
              }
              *pbVar13 = (byte)pqVar38;
              pqVar38 = (qword *)((ulonglong)pqVar38 >> 8);
              pqStack_50 = pqVar38;
              uVar27 = uVar27 - 8;
              uStack_48 = uVar27;
            }
            uStack_40 = uVar26 + 2;
            param_6 = (qword *)(ulonglong)uStack_40;
            uVar26 = uVar26 + 1;
            pbVar13 = pbVar13 + 1;
            pqVar43 = pqVar46;
          } while (uVar26 < 3);
        }
        uVar19 = *(ushort *)(puVar24 + 0xa39);
        uVar48 = *(ushort *)((longlong)puVar24 + 0x28e6) ^ uVar19;
        pqVar38 = (qword *)(ulonglong)uVar48;
        uStack_40 = (uint)uVar19;
        uVar33 = (undefined7)((ulonglong)pqVar53 >> 8);
        pqVar53 = (qword *)CONCAT71(uVar33,0x1f);
        if (uVar48 == 0xffff) {
          pqVar53 = (qword *)CONCAT71(uVar33,0x14);
          if (uVar19 != 0) {
            pqVar53 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_type + 1);
            if (uVar27 == 0) {
              pqVar53 = (qword *)&Elf64_Ehdr_00000000.e_ident_version;
            }
          }
        }
        goto LAB_000b0d9e;
      case 6:
        pqVar53 = (qword *)CONCAT71(uVar33,0x14);
        if (uStack_40 != 0) {
          pqVar53 = (qword *)CONCAT71(uVar33,7);
          if (pqStack_80 == pqVar36) goto LAB_000b2350;
        }
        goto LAB_000b0d9e;
      case 7:
        puVar14 = (uint *)(ulonglong)uVar55;
        if (pqStack_58 == (qword *)0x0) {
          bVar11 = 7;
          pqStack_90 = (qword *)ppuVar22;
          goto LAB_000b21a6;
        }
        pqVar53 = (qword *)((longlong)pqStack_80 - (longlong)pqVar36);
        if (pqStack_58 < (qword *)((longlong)pqStack_80 - (longlong)pqVar36)) {
          pqVar53 = pqStack_58;
        }
        pqVar38 = (qword *)(ulonglong)uStack_40;
        if (pqVar38 < pqVar53) {
          pqVar53 = pqVar38;
        }
        puVar56 = (uint *)((longlong)pqVar36 + (longlong)pqVar53);
        pqVar50 = pqStack_58;
        pqStack_90 = (qword *)ppuVar22;
        if ((!CARRY8((ulonglong)pqVar53,(ulonglong)pqVar36)) && (puVar56 <= pqStack_80)) {
          pcStack_108 = (code *)0xb15f7;
          pqVar38 = pqVar53;
          uVar59 = (*(code *)PTR_memcpy_000c3aa8)(ppuVar23,pqVar53);
          pqStack_60 = (qword *)((longlong)pqVar53 + (longlong)pqVar28);
          pqStack_58 = (qword *)((longlong)pqVar9 - (longlong)pqVar53);
          uStack_40 = uVar27 - (int)pqVar53;
          pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqVar38 >> 8),6);
          goto LAB_000b1d98;
        }
LAB_000b2403:
        pcStack_108 = (code *)0xb2413;
        pqVar52 = (qword *)(*(code *)PTR_slice_index_fail_000c3bb0)
                                     (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ad8);
        pqVar42 = pqVar43;
        goto LAB_000b2413;
      case 8:
        pqVar38 = (qword *)(ulonglong)uStack_40;
        if (pqVar38 < Elf64_Ehdr_00000000.e_ident_magic_str + 2) {
          pqVar53 = pqStack_60;
          pqVar43 = pqStack_58;
          do {
            auStack_b8[0] = 5;
            auStack_b8[1] = 5;
            auStack_b8[2] = 4;
            uVar27 = auStack_b8[(longlong)pqVar38];
            pqVar46 = pqStack_50;
            if (uStack_48 < uVar27) {
              lVar17 = -1;
              puVar56 = (uint *)0x0;
              do {
                if (pqVar43 == (qword *)puVar56) {
                  bVar11 = 8;
                  puVar14 = (uint *)(ulonglong)uVar55;
                  param_6 = pqStack_50;
                  goto LAB_000b21a6;
                }
                pqStack_60 = (qword *)((byte *)((longlong)puVar56 + (longlong)pqVar53) + 1);
                pqStack_58 = (qword *)((longlong)pqVar43 + lVar17);
                pqVar46 = (qword *)((ulonglong)pqStack_50 |
                                   (ulonglong)*(byte *)((longlong)puVar56 + (longlong)pqVar53) <<
                                   ((byte)uStack_48 & 0x3f));
                uStack_48 = uStack_48 + 8;
                puVar56 = (uint *)((longlong)puVar56 + 1);
                lVar17 = lVar17 + -1;
                pqStack_50 = pqVar46;
              } while (uStack_48 < uVar27);
              pqVar43 = (qword *)((longlong)pqVar43 - (longlong)puVar56);
              pqVar53 = (qword *)((longlong)puVar56 + (longlong)pqVar53);
            }
            param_6 = (qword *)((ulonglong)pqVar46 >> ((byte)uVar27 & 0x3f));
            pqStack_50 = param_6;
            uStack_48 = uStack_48 - uVar27;
            *(ushort *)((longlong)puVar24 + (longlong)pqVar38 * 2 + 0x28e8U) =
                 ((ushort)pqVar46 & ~(ushort)(-1L << ((byte)uVar27 & 0x3f))) +
                 *(short *)(&DAT_00016dde + (longlong)pqVar38 * 2);
            pqVar38 = (qword *)((longlong)pqVar38 + 1);
            uStack_40 = (uint)pqVar38;
          } while ((uint)pqVar38 != 3);
        }
        *(undefined4 *)((longlong)puStack_d0 + 0xf) = 0;
        uVar59 = 0;
        *puStack_d0 = 0;
        puStack_d0[1] = 0;
        uStack_40 = 0;
        uVar27 = 9;
        if (0x1e < *(ushort *)((longlong)puVar24 + 0x28ea)) {
          uVar27 = 0x1b;
        }
        pqVar53 = (qword *)(ulonglong)uVar27;
        if (0x11e < *(ushort *)(puVar24 + 0xa3a)) {
          pqVar53 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_entry + 3);
        }
        goto LAB_000b0d9e;
      case 9:
        pqVar35 = pqStack_58;
        pqVar43 = pqStack_60;
        do {
          if (uStack_40 < *(ushort *)(puVar24 + 0xa3b)) {
            pqVar53 = pqStack_50;
            puVar56 = (uint *)pqVar43;
            if (uStack_48 < 3) {
              if (pqVar35 != (qword *)0x0) {
                pqVar35 = (qword *)((longlong)pqVar35 + 0xffffffffffffffff);
                puVar56 = (uint *)((longlong)pqVar43 + 1);
                pqStack_60 = (qword *)puVar56;
                pqStack_58 = pqVar35;
                pqVar38 = (qword *)((ulonglong)(byte)*pqVar43 << ((byte)uStack_48 & 0x3f));
                pqVar53 = (qword *)((ulonglong)pqStack_50 | (ulonglong)pqVar38);
                uStack_48 = uStack_48 | 8;
                goto LAB_000b124b;
              }
              cVar41 = '\x02';
              pqVar35 = (qword *)0x0;
            }
            else {
LAB_000b124b:
              pqStack_50 = (qword *)((ulonglong)pqVar53 >> 3);
              ppuVar23 = (undefined **)(ulonglong)(uStack_48 - 3);
              uStack_48 = uStack_48 - 3;
              if (0x12 < uStack_40) goto LAB_000b245e;
              *(byte *)((longlong)puStack_d0 + (ulonglong)(byte)(&DAT_00016de4)[uStack_40]) =
                   (byte)pqVar53 & 7;
              uStack_40 = uStack_40 + 1;
              cVar41 = '\0';
              pqVar43 = (qword *)puVar56;
            }
            pqVar53 = (qword *)(ulonglong)uVar55;
          }
          else {
            *(undefined2 *)(puVar24 + 0xa3b) = 0x13;
            pqVar38 = (qword *)&pqStack_50;
            pcStack_108 = (code *)0xb129f;
            cVar41 = miniz_oxide[d073f249698f1019]::inflate::core::init_tree(puVar24);
            pqVar53 = extraout_RDX;
            uVar59 = extraout_XMM0_Da;
            if (cVar41 == -1) {
              bVar11 = 9;
              uVar27 = (uint)CONCAT71((int7)((ulonglong)pqVar38 >> 8),0xff);
              pqVar43 = pqVar42;
              goto LAB_000b21e0;
            }
          }
        } while (cVar41 == '\0');
        if (cVar41 != '\x01') {
          puVar14 = (uint *)((ulonglong)pqVar53 & 0xffffffff);
          bVar11 = 9;
LAB_000b2161:
          pqVar43 = pqVar42;
          goto LAB_000b2164;
        }
        break;
      case 10:
        pqStack_90 = (qword *)ppuVar22;
        ppuVar22 = (undefined **)pqStack_58;
        pqVar42 = pqStack_60;
        do {
          pqVar53 = (qword *)(ulonglong)uStack_40;
          uVar19 = *(ushort *)(puVar24 + 0xa3a);
          uVar27 = (uint)*(ushort *)((longlong)puVar24 + 0x28ea) + (uint)uVar19;
          uVar34 = (uint7)(uint3)(uStack_40 >> 8);
          if (uVar27 <= uStack_40) {
            if (uStack_40 != uVar27) {
              pqVar53 = (qword *)CONCAT71(uVar34,0x1a);
              goto LAB_000b1f64;
            }
            if (uVar19 < 0x121) {
              pcStack_108 = (code *)0xb1a3b;
              (*(code *)PTR_memcpy_000c3aa8)(uVar27,uVar19);
              uVar26 = *(ushort *)(puVar24 + 0xa3a) & 0x1ff;
              uVar27 = (uint)*(ushort *)((longlong)puVar24 + 0x28ea) +
                       (uint)*(ushort *)(puVar24 + 0xa3a) & 0x1ff;
              if ((ushort)uVar27 < (ushort)uVar26) {
                ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b50;
                uVar29 = 0x200;
                goto LAB_000b23e4;
              }
              if ((ulonglong)uVar27 - (ulonglong)uVar26 ==
                  (ulonglong)(*(ushort *)((longlong)puVar24 + 0x28ea) & 0x1f)) {
                pcStack_108 = (code *)0xb1a81;
                (*(code *)PTR_memcpy_000c3aa8)();
                *(char *)((longlong)puVar24 + 0x28efU) = *(char *)((longlong)puVar24 + 0x28efU) + -1
                ;
                pqVar38 = (qword *)&pqStack_50;
                pcStack_108 = (code *)0xb1a94;
                cVar41 = miniz_oxide[d073f249698f1019]::inflate::core::init_tree(puVar24);
                pqVar53 = extraout_RDX_01;
                uVar59 = extraout_XMM0_Da_01;
                if (cVar41 != -1) goto LAB_000b1b77;
                bVar11 = 10;
                uVar27 = (uint)CONCAT71((int7)((ulonglong)pqVar38 >> 8),0xff);
                ppuVar22 = (undefined **)pqStack_90;
                pqVar50 = pqVar52;
                goto LAB_000b21e0;
              }
            }
            else {
              ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b68;
              uVar29 = 0x120;
LAB_000b23e4:
              pcStack_108 = (code *)0xb23ed;
              (*(code *)PTR_slice_index_fail_000c3bb0)(ppuVar23,uVar29);
            }
            pcStack_108 = (code *)0xb2403;
            (*(code *)PTR_len_mismatch_fail_000c3dc8)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b38,
                       &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2b38);
            pqVar53 = (qword *)ppuVar22;
            pqVar38 = pqVar52;
            puVar56 = (uint *)pqVar42;
            goto LAB_000b2403;
          }
          ppuVar30 = (undefined **)(ulonglong)uStack_48;
          if (Elf64_Ehdr_00000000.e_ident_pad + 5 < ppuVar30) {
            uVar27 = uStack_48;
          }
          else if (Elf64_Ehdr_00000000.e_ident_magic_str < ppuVar22) {
            ppuVar22 = (undefined **)((longlong)ppuVar22 + 0xfffffffffffffffe);
            pqStack_60 = (qword *)((longlong)pqVar42 + 2U);
            pqStack_58 = (qword *)ppuVar22;
            pqStack_50 = (qword *)((ulonglong)(ushort)*pqVar42 << ((byte)uStack_48 & 0x3f) |
                                  (ulonglong)pqStack_50);
            pqVar42 = (qword *)((longlong)pqVar42 + 2U);
            uVar27 = uStack_48 | 0x10;
          }
          else {
            param_6 = (qword *)CONCAT71((int7)((ulonglong)param_6 >> 8),
                                        ppuVar22 == (undefined **)0x0);
            ppuVar23 = ppuVar30;
            do {
              uVar27 = (uint)*(short *)((longlong)puVar24 +
                                       (ulonglong)((uint)pqStack_50 & 0x3ff) * 2 + 0x1b00);
              pqVar43 = pqVar42;
              if ((int)uVar27 < 0) {
                if (Elf64_Ehdr_00000000.e_ident_pad + 1 < ppuVar23) {
                  pbVar13 = Elf64_Ehdr_00000000.e_ident_pad + 3;
                  do {
                    uVar27 = ~uVar27 + (uint)(((ulonglong)pqStack_50 >>
                                               ((ulonglong)((int)pbVar13 - 2) & 0x3f) & 1) != 0);
                    puVar56 = (uint *)pqVar42;
                    if (0x23f < uVar27) goto LAB_000b244c;
                    uVar27 = (uint)*(short *)((longlong)puVar24 + (ulonglong)uVar27 * 2 + 0x2300);
                    if (-1 < (int)uVar27) goto LAB_000b1ac9;
                    bVar58 = pbVar13 <= ppuVar23;
                    pbVar13 = (byte *)(ulonglong)((int)pbVar13 + 1);
                  } while (bVar58);
                }
              }
              else if ((undefined **)(ulonglong)((uVar27 >> 9) - 1) < ppuVar23) {
LAB_000b1ac9:
                uVar27 = (uint)ppuVar23;
                break;
              }
              if ((char)param_6 != '\0') {
                cVar41 = '\x02';
                pqVar53 = (qword *)(ulonglong)uVar55;
                pqVar38 = pqStack_50;
                goto LAB_000b1b77;
              }
              pqVar43 = (qword *)((longlong)pqVar42 + 1);
              pqStack_60 = pqVar43;
              pqStack_58 = (qword *)0x0;
              pqStack_50 = (qword *)((ulonglong)pqStack_50 |
                                    (ulonglong)(byte)*pqVar42 << ((byte)ppuVar23 & 0x3f));
              uVar27 = (int)ppuVar30 + 8;
              ppuVar30 = (undefined **)(ulonglong)uVar27;
              param_6 = (qword *)CONCAT71((int7)((ulonglong)param_6 >> 8),1);
              ppuVar22 = (undefined **)0x0;
              uStack_48 = (uint)(ppuVar23 + 1);
              bVar58 = ppuVar23 < &Elf64_Ehdr_00000000.e_ident_osabi;
              ppuVar23 = ppuVar23 + 1;
              pqVar42 = pqVar43;
            } while (bVar58);
          }
          uStack_44 = (uint)*(short *)((longlong)puVar24 +
                                      (ulonglong)((uint)pqStack_50 & 0x3ff) * 2 + 0x1b00);
          if ((int)uStack_44 < 0) {
            bVar11 = 0xb;
            do {
              bVar18 = bVar11;
              pqVar43 = (qword *)(ulonglong)(byte)(bVar18 - 1);
              uVar26 = ~uStack_44 +
                       (uint)(((ulonglong)pqStack_50 >> ((ulonglong)pqVar43 & 0x3f) & 1) != 0);
              if (0x23f < uVar26) {
                uStack_44 = 0x7fff;
                break;
              }
              uStack_44 = (uint)*(short *)((longlong)puVar24 + (ulonglong)uVar26 * 2 + 0x2300);
              bVar11 = bVar18 + 1;
            } while ((int)uStack_44 < 0);
            uVar26 = (uint)bVar18;
          }
          else {
            uVar26 = uStack_44 >> 9;
            uStack_44 = uStack_44 & 0x1ff;
          }
          pqStack_50 = (qword *)((ulonglong)pqStack_50 >> ((byte)uVar26 & 0x3f));
          uStack_48 = uVar27 - uVar26;
          pqVar38 = pqStack_50;
          if (uStack_44 < 0x10) {
            *(char *)((longlong)puVar24 + (ulonglong)(uStack_40 & 0x1ff)) = (char)uStack_44;
            pqVar53 = (qword *)(ulonglong)(uStack_40 + 1);
            uStack_40 = uStack_40 + 1;
            cVar41 = '\0';
          }
          else {
            cVar41 = '\x01';
            if (pqVar53 == (qword *)0x0) {
              pqVar53 = (qword *)CONCAT71(uVar34,0x20);
              if (uStack_44 == 0x10) goto LAB_000b1b77;
            }
            auStack_b8[0] = 0x70302;
            bStack_3c = *(byte *)((longlong)auStack_b8 + (ulonglong)(uStack_44 & 3));
            pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqVar53 >> 8),0xb);
          }
LAB_000b1b77:
        } while (cVar41 == '\0');
        if (cVar41 == '\x02') {
          puVar14 = (uint *)((ulonglong)pqVar53 & 0xffffffff);
          bVar11 = 10;
          ppuVar22 = (undefined **)pqStack_90;
          goto LAB_000b21a6;
        }
LAB_000b1f64:
        ppuVar22 = (undefined **)pqStack_90;
        goto LAB_000b0d9e;
      case 0xb:
        pqVar43 = pqStack_50;
        if (uStack_48 < bStack_3c) {
          do {
            pqVar43 = pqStack_60;
            if ((longlong)pqStack_58 + 0xffffffffffffffffU == -1) {
              bVar11 = 0xb;
              goto LAB_000b215e;
            }
            pqStack_60 = (qword *)((longlong)pqStack_60 + 1);
            pqStack_58 = (qword *)((longlong)pqStack_58 + 0xffffffffffffffffU);
            pqVar42 = (qword *)((ulonglong)(byte)*pqVar43 << ((byte)uStack_48 & 0x3f));
            pqVar43 = (qword *)((ulonglong)pqStack_50 | (ulonglong)pqVar42);
            uStack_48 = uStack_48 + 8;
            pqStack_50 = pqVar43;
          } while (uStack_48 < bStack_3c);
        }
        pqStack_50 = (qword *)((ulonglong)pqVar43 >> (bStack_3c & 0x3f));
        uStack_48 = uStack_48 - bStack_3c;
        auStack_b8[0] = 3;
        auStack_b8[1] = 0;
        auStack_b8[2] = 3;
        auStack_b8[3] = 0;
        auStack_b8[4] = 0xb;
        auStack_b8[5] = 0;
        puVar56 = (uint *)(ulonglong)uStack_40;
        pqVar53 = (qword *)(((ulonglong)pqVar43 & ~(-1L << (bStack_3c & 0x3f))) +
                           *(longlong *)(auStack_b8 + (ulonglong)(uStack_44 & 2) * 2));
        uVar37 = (ulonglong)((int)pqVar53 + uStack_40 & 0x1ff);
        lVar17 = uVar37 - (uStack_40 & 0x1ff);
        pqVar43 = (qword *)ppuVar22;
        pqVar38 = pqVar50;
        if (uVar37 < (uStack_40 & 0x1ff)) goto LAB_000b2427;
        pqVar38 = (qword *)0x0;
        pcStack_108 = (code *)0xb1eb0;
        uVar59 = (*(code *)PTR_memset_000c3cd8)((ulonglong)(uStack_44 & 2),lVar17);
        uStack_40 = (int)pqVar53 + uVar27;
        pqVar53 = (qword *)CONCAT71((int7)((ulonglong)lVar17 >> 8),10);
        break;
      case 0xc:
        goto switchD_000b0db3_caseD_c;
      case 0xd:
        pqVar53 = (qword *)CONCAT71(uVar33,0x15);
        if (uStack_40 < 0x100) {
          pqVar38 = pqStack_80;
          if (pqStack_80 == pqVar36) goto LAB_000b2350;
          pqVar50 = pqVar52;
          if (pqStack_80 <= pqVar36) goto LAB_000b2478;
          *(byte *)((longlong)pqVar36 + lStack_88) = (byte)uStack_40;
          pqVar36 = (qword *)((longlong)pqVar36 + 1);
          pqVar53 = (qword *)CONCAT71(uVar33,0xc);
        }
        goto LAB_000b0d9e;
      case 0xe:
        if (uStack_48 < bStack_3c) {
          do {
            if (pqStack_58 == (qword *)0x0) {
              bVar11 = 0xe;
              pqStack_58 = (qword *)0x0;
              pqVar43 = pqStack_60;
              goto LAB_000b21a3;
            }
            pqStack_58 = (qword *)((longlong)pqStack_58 + 0xffffffffffffffff);
            qVar12 = *pqStack_60;
            pqStack_60 = (qword *)((longlong)pqStack_60 + 1);
            param_6 = (qword *)((ulonglong)(byte)qVar12 << ((byte)uStack_48 & 0x3f));
            pqStack_50 = (qword *)((ulonglong)pqStack_50 | (ulonglong)param_6);
            uStack_48 = uStack_48 + 8;
          } while (uStack_48 < bStack_3c);
          pqVar43 = pqStack_60;
        }
        uVar27 = (uint)pqStack_50;
        pqStack_50 = (qword *)((ulonglong)pqStack_50 >> (bStack_3c & 0x3f));
        uStack_48 = uStack_48 - bStack_3c;
        uStack_40 = uStack_40 + (~(uint)(-1L << (bStack_3c & 0x3f)) & uVar27);
        pqVar53 = (qword *)CONCAT71((uint7)(uint3)(uStack_48 >> 8),0xf);
        pqVar38 = pqStack_50;
        goto LAB_000b0d9e;
      case 0xf:
        ppuVar30 = (undefined **)(ulonglong)uStack_48;
        if (ppuVar30 <= Elf64_Ehdr_00000000.e_ident_pad + 5) {
          if (Elf64_Ehdr_00000000.e_ident_magic_str < pqStack_58) {
            qVar12 = *pqStack_60;
            pqStack_60 = (qword *)((longlong)pqStack_60 + 2);
            pqStack_58 = (qword *)((longlong)pqStack_58 + 0xfffffffffffffffe);
            pqStack_50 = (qword *)((ulonglong)(ushort)qVar12 << (bVar18 & 0x3f) |
                                  (ulonglong)pqStack_50);
            uStack_48 = uStack_48 | 0x10;
          }
          else {
            param_6 = (qword *)CONCAT71((int7)((ulonglong)param_6 >> 8),pqStack_58 == (qword *)0x0);
            ppuVar23 = ppuVar30;
            pqVar53 = pqStack_58;
            pqVar43 = pqStack_60;
            do {
              uVar26 = (uint)*(short *)((longlong)puVar24 +
                                       (ulonglong)((uint)pqStack_50 & 0x3ff) * 2 + 0xe80);
              uVar27 = (uint)ppuVar23;
              if ((int)uVar26 < 0) {
                if (Elf64_Ehdr_00000000.e_ident_pad + 1 < ppuVar23) {
                  pbVar13 = Elf64_Ehdr_00000000.e_ident_pad + 3;
                  do {
                    uVar26 = ~uVar26 + (uint)(((ulonglong)pqStack_50 >>
                                               ((ulonglong)((int)pbVar13 - 2) & 0x3f) & 1) != 0);
                    pqVar42 = pqVar43;
                    if (0x23f < uVar26) goto LAB_000b244c;
                    uVar26 = (uint)*(short *)((longlong)puVar24 + (ulonglong)uVar26 * 2 + 0x1680);
                    if (-1 < (int)uVar26) {
                      pqStack_60 = pqVar43;
                      pqStack_58 = pqVar53;
                      uStack_48 = uVar27;
                      goto LAB_000b2075;
                    }
                    bVar58 = pbVar13 <= ppuVar23;
                    pbVar13 = (byte *)(ulonglong)((int)pbVar13 + 1);
                  } while (bVar58);
                }
              }
              else if ((undefined **)(ulonglong)((uVar26 >> 9) - 1) < ppuVar23) break;
              if ((char)param_6 != '\0') {
                bVar11 = 0xf;
                pqStack_58 = pqVar53;
                goto LAB_000b21a3;
              }
              qVar12 = *pqVar43;
              pqVar43 = (qword *)((longlong)pqVar43 + 1);
              pqStack_50 = (qword *)((ulonglong)pqStack_50 |
                                    (ulonglong)(byte)qVar12 << ((byte)ppuVar23 & 0x3f));
              uVar27 = (int)ppuVar30 + 8;
              ppuVar30 = (undefined **)(ulonglong)uVar27;
              param_6 = (qword *)CONCAT71((int7)((ulonglong)param_6 >> 8),1);
              pqVar53 = (qword *)0x0;
              uStack_48 = (uint)(ppuVar23 + 1);
              bVar58 = ppuVar23 < &Elf64_Ehdr_00000000.e_ident_osabi;
              ppuVar23 = ppuVar23 + 1;
            } while (bVar58);
            pqStack_60 = pqVar43;
            pqStack_58 = pqVar53;
            uStack_48 = uVar27;
          }
        }
LAB_000b2075:
        uVar27 = (uint)*(short *)((longlong)puVar24 +
                                 (ulonglong)((uint)pqStack_50 & 0x3ff) * 2 + 0xe80);
        pqVar38 = (qword *)(ulonglong)uVar27;
        if ((int)uVar27 < 0) {
          uVar27 = 0xb;
          do {
            uVar26 = uVar27;
            uVar27 = ~(uint)pqVar38 +
                     (uint)(((ulonglong)pqStack_50 >> ((ulonglong)(uVar26 - 1 & 0xff) & 0x3f) & 1)
                           != 0);
            if (0x23f < uVar27) {
              pqVar38 = (qword *)((longlong)&__DT_RELA[0x48f].r_addend + 7);
              break;
            }
            uVar20 = (uint)*(short *)((longlong)puVar24 + (ulonglong)uVar27 * 2 + 0x1680);
            pqVar38 = (qword *)(ulonglong)uVar20;
            uVar27 = (uint)(byte)((char)uVar26 + 1);
          } while ((int)uVar20 < 0);
        }
        else {
          uVar26 = uVar27 >> 9;
          pqVar38 = (qword *)(ulonglong)(uVar27 & 0x1ff);
        }
        pqStack_50 = (qword *)((ulonglong)pqStack_50 >> ((byte)uVar26 & 0x3f));
        uStack_48 = uStack_48 - uVar26;
        pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqStack_50 >> 8),0x22);
        if ((uint)pqVar38 < 0x1e) {
          bStack_3c = (((byte)((ulonglong)pqVar38 >> 1) & 0x7f) - 1) +
                      (((ulonglong)pqVar38 >> 1 & 0x7f) == 0);
          uStack_44 = (uint)*(ushort *)(&DAT_00016df8 + (longlong)pqVar38 * 2);
          pqVar53 = (qword *)&Elf64_Ehdr_00000000.e_type;
          if ((uint)pqVar38 < 4) {
            pqVar53 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_version + 2);
          }
        }
        goto LAB_000b0d9e;
      case 0x10:
        if (uStack_48 < bStack_3c) {
          if (pqStack_58 == (qword *)0x0) {
LAB_000b217c:
            pqStack_58 = (qword *)0x0;
            bVar11 = 0x10;
            goto LAB_000b21a3;
          }
          lVar17 = 1 - (longlong)pqStack_58;
          uVar27 = uStack_48;
          pqVar43 = pqStack_60;
          while( true ) {
            param_6 = pqStack_50;
            pqStack_50 = (qword *)((ulonglong)(byte)*pqVar43 << ((byte)uVar27 & 0x3f) |
                                  (ulonglong)param_6);
            uStack_48 = uVar27 + 8;
            if (bStack_3c <= uStack_48) break;
            lVar17 = lVar17 + 1;
            uVar27 = uVar27 + 8;
            pqVar43 = (qword *)((longlong)pqVar43 + 1);
            if (lVar17 == 1) {
              pqVar43 = (qword *)Elf64_Ehdr_00000000.e_ident_magic_str;
              uStack_48 = uVar27;
              goto LAB_000b217c;
            }
          }
          pqStack_60 = (qword *)((longlong)pqVar43 + 1);
          pqVar43 = (qword *)-lVar17;
          pqStack_58 = pqVar43;
        }
        uVar27 = (uint)pqStack_50;
        pqStack_50 = (qword *)((ulonglong)pqStack_50 >> (bStack_3c & 0x3f));
        uStack_48 = uStack_48 - bStack_3c;
        uStack_44 = uStack_44 + (~(uint)(-1L << (bStack_3c & 0x3f)) & uVar27);
        pqVar53 = (qword *)CONCAT71((uint7)(uint3)(uStack_48 >> 8),0x16);
        pqVar38 = pqStack_50;
        goto LAB_000b0d9e;
      case 0x11:
        pqVar53 = pqStack_50;
        if (uStack_48 < 8) {
          if (pqStack_58 == (qword *)0x0) {
            bVar11 = 0x11;
            goto LAB_000b21a3;
          }
          pqStack_60 = (qword *)((longlong)pqStack_60 + 1);
          pqStack_58 = (qword *)((longlong)pqStack_58 + 0xffffffffffffffff);
          pqVar53 = (qword *)((ulonglong)pqStack_50 | (ulonglong)(byte)*pqVar28 << (bVar18 & 0x3f));
          uStack_48 = uStack_48 | 8;
          pqVar38 = pqVar28;
        }
        pqStack_50 = (qword *)((ulonglong)pqVar53 >> 8);
        uStack_48 = uStack_48 - 8;
        uStack_44 = (uint)pqVar53 & 0xff;
        pqVar53 = (qword *)CONCAT71((uint7)((ulonglong)pqVar53 >> 0x10),0x12);
        goto LAB_000b0d9e;
      case 0x12:
        pqVar38 = pqStack_80;
        if (pqStack_80 == pqVar36) {
LAB_000b2350:
          uVar27 = (uint)CONCAT71((int7)((ulonglong)pqVar38 >> 8),2);
          pqVar50 = pqVar52;
          goto LAB_000b21e0;
        }
        pqVar50 = pqVar52;
        if (pqStack_80 <= pqVar36) goto LAB_000b2478;
        *(byte *)((longlong)pqVar36 + lStack_88) = (byte)uStack_44;
        pqVar36 = (qword *)((longlong)pqVar36 + 1);
        uVar27 = 0x11;
        if (uStack_48 == 0) {
          uVar27 = 6;
        }
        uStack_40 = uStack_40 - 1;
        pqVar53 = (qword *)(ulonglong)uVar27;
        if (uStack_40 == 0) {
          pqVar53 = (qword *)&Elf64_Ehdr_00000000.e_ident_version;
        }
        goto LAB_000b0d9e;
      case 0x13:
        lStack_100 = lStack_88;
        uVar37 = (ulonglong)uStack_44;
        pqVar28 = pqVar38;
        pqStack_90 = (qword *)ppuVar22;
        do {
          uVar27 = uStack_40;
          pqVar53 = (qword *)((longlong)pqVar46 - (longlong)pqVar36);
          if (pqVar53 == (qword *)0x0) {
            bVar11 = 0x13;
            uVar27 = (uint)CONCAT71((int7)((ulonglong)pqVar28 >> 8),2);
            ppuVar22 = (undefined **)pqStack_90;
            pqVar50 = (qword *)0x0;
            pqVar36 = pqVar46;
            goto LAB_000b21e0;
          }
          if ((qword *)(ulonglong)uStack_40 < pqVar53) {
            pqVar53 = (qword *)(ulonglong)uStack_40;
          }
          pcStack_108 = (code *)0xb1d7b;
          pqVar28 = pqVar46;
          pqVar43 = pqVar53;
          param_6 = pqVar52;
          uVar59 = miniz_oxide[d073f249698f1019]::inflate::core::transfer
                             (lStack_100,pqVar46,(longlong)pqVar36 - uVar37 & (ulonglong)pqVar52,
                              pqVar36);
          pqVar36 = (qword *)((longlong)pqVar53 + (longlong)pqVar36);
          uStack_40 = uVar27 - (int)pqVar53;
        } while (uStack_40 != 0);
        pqVar53 = (qword *)CONCAT71((int7)((ulonglong)extraout_RDX_02 >> 8),0xc);
        puVar56 = (uint *)pqVar36;
LAB_000b1d98:
        ppuVar22 = (undefined **)pqStack_90;
        pqVar38 = pqVar28;
        puVar24 = puStack_98;
        pqVar36 = (qword *)puVar56;
        goto LAB_000b2045;
      case 0x14:
        pqVar53 = (qword *)CONCAT71(uVar33,3);
        if (*(char *)((longlong)puVar24 + 0x28ee) != '\0') {
          uVar49 = (longlong)ppuVar22 - (longlong)pqStack_58;
          uVar37 = (ulonglong)(uStack_48 >> 3);
          if ((uint)uVar49 < uStack_48 >> 3) {
            uVar37 = uVar49 & 0xffffffff;
          }
          pqVar42 = (qword *)(ulonglong)(uint)((int)uVar37 * 8);
          uStack_48 = (uStack_48 & 0xfffffff8) + (int)uVar37 * -8;
          puVar14 = (uint *)(uVar49 - uVar37);
          pqVar38 = (qword *)((longlong)ppuVar22 - (longlong)puVar14);
          if (ppuVar22 < puVar14) goto LAB_000b2439;
          uVar37 = (ulonglong)pqStack_50 >> (bVar18 & 7);
          pqVar43 = (qword *)(~(-1L << ((byte)uStack_48 & 0x38)) & uVar37);
          pqStack_60 = (qword *)((longlong)pqStack_f8 + (longlong)puVar14);
          pqStack_58 = pqVar38;
          pqStack_50 = pqVar43;
          uVar33 = (undefined7)(uVar37 >> 8);
          pqVar53 = (qword *)CONCAT71(uVar33,0x18);
          if ((param_7 & 1) != 0) {
            uStack_40 = 0;
            pqVar53 = (qword *)CONCAT71(uVar33,0x17);
          }
        }
        goto LAB_000b0d9e;
      case 0x15:
        uStack_40 = uStack_40 & 0x1ff;
        pqVar53 = (qword *)CONCAT71(uVar33,0x14);
        if (uStack_40 != 0x100) {
          pqVar53 = (qword *)CONCAT71(uVar33,0x21);
          if (uStack_40 < 0x11e) {
            uVar27 = uVar27 - 1 & 0x1f;
            bStack_3c = ""[uVar27];
            uStack_40 = (uint)*(ushort *)(&DAT_00016e3e + (ulonglong)uVar27 * 2);
            pqVar53 = (qword *)(CONCAT71(uVar33,uVar27 - 0x1c < 0xffffffec) | 0xe);
          }
        }
        goto LAB_000b0d9e;
      case 0x16:
        puVar56 = (uint *)(ulonglong)uStack_44;
        param_6 = (qword *)((longlong)pqVar36 - (longlong)puVar56);
        pqVar53 = (qword *)CONCAT71(uVar33,0x1e);
        pqVar38 = (qword *)((ulonglong)uVar34 << 8);
        if (puVar56 <= pqVar36 || (param_7 & 4) == 0) {
          pqVar38 = pqStack_80;
          if (puVar56 <= pqStack_80) {
            pqVar43 = (qword *)(ulonglong)uStack_40;
            pqVar46 = (qword *)((longlong)pqVar43 + (longlong)pqVar36);
            if ((pqStack_80 < pqVar46) ||
               (puVar56 = (uint *)((ulonglong)param_6 & (ulonglong)pqVar52),
               puVar14 = (uint *)((longlong)puVar56 - (longlong)pqVar36),
               param_6 = (qword *)CONCAT71((int7)((ulonglong)puVar14 >> 8),
                                           puVar14 < pqVar43 && pqVar36 <= puVar56),
               puVar14 < pqVar43 && pqVar36 <= puVar56)) {
              pqVar53 = (qword *)((longlong)&Elf64_Ehdr_00000000.e_machine + 1);
              if (pqVar43 == (qword *)0x0) {
                pqVar53 = (qword *)(Elf64_Ehdr_00000000.e_ident_pad + 3);
              }
            }
            else {
              pcStack_108 = (code *)0xb2060;
              param_6 = pqVar52;
              uVar59 = miniz_oxide[d073f249698f1019]::inflate::core::apply_match
                                 (lStack_88,pqStack_80,pqVar36);
              pqVar53 = (qword *)CONCAT71((int7)((ulonglong)extraout_RDX_04 >> 8),0xc);
              pqVar36 = pqVar46;
            }
          }
        }
        goto LAB_000b0d9e;
      case 0x17:
        pqVar38 = (qword *)(ulonglong)uStack_40;
        pqVar53 = pqStack_60;
        if (uStack_40 < 4) {
          uVar27 = puVar24[0xa35];
          pqVar38 = (qword *)(ulonglong)(uStack_40 - 1);
          pqVar43 = pqStack_50;
          uVar26 = uStack_48;
          do {
            if (uVar26 == 0) {
              if (pqStack_58 == (qword *)0x0) {
LAB_000b2199:
                pqStack_58 = (qword *)0x0;
                bVar11 = 0x17;
                goto LAB_000b21a3;
              }
              pqStack_58 = (qword *)((longlong)pqStack_58 + 0xffffffffffffffff);
              qVar12 = *pqVar53;
              pqVar53 = (qword *)((longlong)pqVar53 + 1);
              uVar27 = uVar27 << 8 | (uint)(byte)qVar12;
              uVar26 = 0;
            }
            else {
              if (uVar26 < 8) {
                if (pqStack_58 == (qword *)0x0) goto LAB_000b2199;
                qVar12 = *pqVar53;
                pqStack_58 = (qword *)((longlong)pqStack_58 + 0xffffffffffffffff);
                pqVar53 = (qword *)((longlong)pqVar53 + 1);
                pqVar43 = (qword *)((ulonglong)pqVar43 |
                                   (ulonglong)(byte)qVar12 << ((byte)uVar26 & 0x3f));
                uVar26 = uVar26 | 8;
              }
              uVar20 = (uint)pqVar43;
              pqVar43 = (qword *)((ulonglong)pqVar43 >> 8);
              pqStack_50 = pqVar43;
              uVar26 = uVar26 - 8;
              uStack_48 = uVar26;
              uVar27 = uVar27 << 8 | uVar20 & 0xff;
            }
            puVar24[0xa35] = uVar27;
            uStack_40 = (int)pqVar38 + 2;
            param_6 = (qword *)(ulonglong)uStack_40;
            uVar20 = (int)pqVar38 + 1;
            pqVar38 = (qword *)(ulonglong)uVar20;
          } while (uVar20 < 3);
        }
        pqStack_60 = pqVar53;
        pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqStack_58 >> 8),0x18);
        goto LAB_000b0d9e;
      case 0x18:
        uVar27 = 0;
        pqVar50 = pqVar52;
        goto LAB_000b21e0;
      }
LAB_000b203f:
      pqVar43 = pqVar42;
LAB_000b2045:
      goto LAB_000b0d9e;
    }
  }
  Elf64_Ehdr_00000000.e_ident_abiversion = 0xfd;
  qVar12 = 0;
  Elf64_Ehdr_00000000.e_ident_magic_num = 0;
  Elf64_Ehdr_00000000.e_ident_magic_str[0] = '\0';
  Elf64_Ehdr_00000000.e_ident_magic_str[1] = '\0';
  Elf64_Ehdr_00000000.e_ident_magic_str[2] = '\0';
  Elf64_Ehdr_00000000.e_ident_class = 0;
  Elf64_Ehdr_00000000.e_ident_data = 0;
  Elf64_Ehdr_00000000.e_ident_version = 0;
  Elf64_Ehdr_00000000.e_ident_osabi = 0;
LAB_000b2317:
  pqStack_a0[2] = qVar12;
  return pqStack_a0;
switchD_000b0db3_caseD_c:
  pqVar53 = pqStack_58;
  pqVar28 = param_6;
  if (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < pqStack_58) {
    pqVar42 = pqStack_60;
    param_6 = pqStack_58;
    do {
      if ((ulonglong)((longlong)pqStack_80 - (longlong)pqVar36) < 2) break;
      if (Elf64_Ehdr_00000000.e_ident_pad + 4 < pqVar53 &&
          0x102 < (ulonglong)((longlong)pqStack_80 - (longlong)pqVar36)) {
        pqVar38 = (qword *)&pqStack_60;
        pqVar43 = (qword *)&pqStack_50;
        pcStack_108 = (code *)0xb2012;
        pqVar46 = pqVar52;
        pqStack_60 = pqVar42;
        pqStack_58 = param_6;
        uVar27 = miniz_oxide[d073f249698f1019]::inflate::core::decompress_fast
                           (puVar24,pqVar38,&lStack_88,pqVar50);
        bVar11 = (byte)extraout_RDX_03;
        pqVar53 = extraout_RDX_03;
        param_6 = pqVar46;
        uVar59 = extraout_XMM0_Da_02;
        if ((char)uVar27 == '\0') goto LAB_000b0d9e;
        puVar14 = (uint *)(ulonglong)uVar27;
        goto LAB_000b21a6;
      }
      if (uStack_48 < 0x1e) {
        qVar12 = *pqVar42;
        pqVar53 = (qword *)((longlong)pqVar53 + 0xfffffffffffffffc);
        pqVar42 = (qword *)((longlong)pqVar42 + 4);
        pqStack_50 = (qword *)((ulonglong)pqStack_50 |
                              (ulonglong)(uint)qVar12 << ((byte)uStack_48 & 0x3f));
        uStack_48 = uStack_48 | 0x20;
        param_6 = pqVar53;
      }
      uVar27 = (uint)*(short *)((longlong)puVar24 +
                               (ulonglong)((uint)pqStack_50 & 0x3ff) * 2 + 0x200);
      pqVar35 = (qword *)(ulonglong)uVar27;
      if ((int)uVar27 < 0) {
        uVar26 = 0xb;
        do {
          uVar27 = uVar26;
          uVar26 = ~(uint)pqVar35 +
                   (uint)(((ulonglong)pqStack_50 >> ((ulonglong)(uVar27 - 1 & 0xff) & 0x3f) & 1) !=
                         0);
          if (0x23f < uVar26) {
            pqVar35 = (qword *)((longlong)&__DT_RELA[0x48f].r_addend + 7);
            break;
          }
          uVar20 = (uint)*(short *)((longlong)puVar24 + (ulonglong)uVar26 * 2 + 0xa00);
          pqVar35 = (qword *)(ulonglong)uVar20;
          uVar26 = (uint)(byte)((char)uVar27 + 1);
        } while ((int)uVar20 < 0);
      }
      else {
        uVar27 = uVar27 >> 9;
      }
      uStack_40 = (uint)pqVar35;
      pqStack_50 = (qword *)((ulonglong)pqStack_50 >> ((byte)uVar27 & 0x3f));
      uStack_48 = uStack_48 - uVar27;
      if (((uint)pqVar35 >> 8 & 1) != 0) {
        pqStack_60 = pqVar42;
        pqStack_58 = param_6;
LAB_000b203d:
        pqVar53 = (qword *)CONCAT71((int7)((ulonglong)pqVar53 >> 8),0x15);
        pqVar38 = pqStack_80;
        pqStack_60 = pqVar42;
        pqStack_58 = param_6;
        goto LAB_000b203f;
      }
      uVar27 = (uint)*(short *)((longlong)puVar24 +
                               (ulonglong)((uint)pqStack_50 & 0x3ff) * 2 + 0x200);
      puVar56 = (uint *)(ulonglong)uVar27;
      if ((int)uVar27 < 0) {
        uVar27 = 0xb;
        do {
          bVar11 = (byte)uVar27;
          uVar27 = ~(uint)puVar56 +
                   (uint)(((ulonglong)pqStack_50 >> ((ulonglong)(uVar27 - 1 & 0xff) & 0x3f) & 1) !=
                         0);
          if (0x23f < uVar27) {
            puVar56 = (uint *)((longlong)&__DT_RELA[0x48f].r_addend + 7);
            break;
          }
          uVar26 = (uint)*(short *)((longlong)puStack_98 + (ulonglong)uVar27 * 2 + 0xa00);
          puVar56 = (uint *)(ulonglong)uVar26;
          uVar27 = (uint)(byte)(bVar11 + 1);
        } while ((int)uVar26 < 0);
        ppuVar23 = (undefined **)(ulonglong)bVar11;
        puVar24 = puStack_98;
      }
      else {
        ppuVar23 = (undefined **)(ulonglong)(uVar27 >> 9);
      }
      pqStack_50 = (qword *)((ulonglong)pqStack_50 >> ((byte)ppuVar23 & 0x3f));
      uStack_48 = uStack_48 - (int)ppuVar23;
      if (pqStack_80 <= pqVar36) goto LAB_000b2470;
      *(byte *)((longlong)pqVar36 + lStack_88) = (byte)pqVar35;
      pbVar13 = (byte *)((longlong)pqVar36 + 1);
      if (((uint)puVar56 >> 8 & 1) != 0) {
        pqStack_60 = pqVar42;
        pqStack_58 = param_6;
        uStack_40 = (uint)puVar56;
        pqVar36 = (qword *)pbVar13;
        goto LAB_000b203d;
      }
      if (pqStack_80 <= pbVar13) goto LAB_000b2485;
      *(byte *)((longlong)pqVar36 + lStack_88 + 1) = (byte)puVar56;
      pqVar36 = (qword *)((longlong)pqVar36 + 2);
    } while (Elf64_Ehdr_00000000.e_ident_magic_str + 2 < pqVar53);
    pqStack_60 = pqVar42;
    pqStack_58 = param_6;
    pqVar43 = pqVar42;
    pqVar28 = param_6;
  }
  ppuVar30 = (undefined **)(ulonglong)uStack_48;
  if (ppuVar30 <= Elf64_Ehdr_00000000.e_ident_pad + 5) {
    if (Elf64_Ehdr_00000000.e_ident_magic_str < pqVar53) {
      qVar12 = *pqStack_60;
      pqStack_60 = (qword *)((longlong)pqStack_60 + 2);
      pqStack_58 = (qword *)((longlong)pqVar53 + 0xfffffffffffffffe);
      pqStack_50 = (qword *)((ulonglong)(ushort)qVar12 << ((byte)uStack_48 & 0x3f) |
                            (ulonglong)pqStack_50);
      uStack_48 = uStack_48 | 0x10;
    }
    else {
      bVar58 = pqVar53 == (qword *)0x0;
      ppuVar23 = ppuVar30;
      uVar27 = uStack_48;
      do {
        uStack_48 = uVar27;
        pqVar53 = pqStack_60;
        uVar27 = (uint)*(short *)((longlong)puVar24 +
                                 (ulonglong)((uint)pqStack_50 & 0x3ff) * 2 + 0x200);
        pqVar43 = pqStack_60;
        if ((int)uVar27 < 0) {
          if (Elf64_Ehdr_00000000.e_ident_pad + 1 < ppuVar23) {
            param_6 = (qword *)(Elf64_Ehdr_00000000.e_ident_pad + 3);
            do {
              uVar27 = ~uVar27 + (uint)(((ulonglong)pqStack_50 >>
                                         ((ulonglong)((int)param_6 - 2) & 0x3f) & 1) != 0);
              pqVar42 = pqStack_60;
              puVar56 = &switchD_000b0db3::switchdataD_00016d44;
              if (0x23f < uVar27) goto LAB_000b244c;
              uVar27 = (uint)*(short *)((longlong)puVar24 + (ulonglong)uVar27 * 2 + 0xa00);
              pqVar28 = param_6;
              if (-1 < (int)uVar27) goto LAB_000b1f7c;
              pqVar28 = (qword *)(ulonglong)((int)param_6 + 1);
              bVar57 = param_6 <= ppuVar23;
              param_6 = pqVar28;
            } while (bVar57);
          }
        }
        else if ((undefined **)(ulonglong)((uVar27 >> 9) - 1) < ppuVar23) {
LAB_000b1f7c:
          uStack_48 = (uint)ppuVar23;
          break;
        }
        if (bVar58) {
          bVar11 = 0xc;
          param_6 = pqVar28;
          goto LAB_000b21a3;
        }
        pqVar43 = (qword *)((longlong)pqStack_60 + 1);
        pqStack_60 = pqVar43;
        pqStack_58 = (qword *)0x0;
        pqStack_50 = (qword *)((ulonglong)pqStack_50 |
                              (ulonglong)(byte)*pqVar53 << ((byte)ppuVar23 & 0x3f));
        uStack_48 = (int)ppuVar30 + 8;
        ppuVar30 = (undefined **)(ulonglong)uStack_48;
        bVar58 = true;
        lVar17 = (longlong)(ppuVar23 + 1);
        bVar57 = ppuVar23 < &Elf64_Ehdr_00000000.e_ident_osabi;
        ppuVar23 = (undefined **)lVar17;
        uVar27 = (uint)lVar17;
      } while (bVar57);
    }
  }
  uVar27 = (uint)*(short *)((longlong)puVar24 + (ulonglong)((uint)pqStack_50 & 0x3ff) * 2 + 0x200);
  uVar37 = (ulonglong)uVar27;
  if ((int)uVar27 < 0) {
    uVar27 = 0xb;
    do {
      uVar26 = uVar27;
      uVar27 = ~(uint)uVar37 +
               (uint)(((ulonglong)pqStack_50 >> ((ulonglong)(uVar26 - 1 & 0xff) & 0x3f) & 1) != 0);
      if (0x23f < uVar27) {
        uVar37 = 0x7fff;
        break;
      }
      uVar20 = (uint)*(short *)((longlong)puVar24 + (ulonglong)uVar27 * 2 + 0xa00);
      uVar37 = (ulonglong)uVar20;
      uVar27 = (uint)(byte)((char)uVar26 + 1);
    } while ((int)uVar20 < 0);
  }
  else {
    uVar26 = uVar27 >> 9;
    uVar37 = (ulonglong)(uVar27 & 0x1ff);
  }
  pqStack_50 = (qword *)((ulonglong)pqStack_50 >> ((byte)uVar26 & 0x3f));
  uStack_48 = uStack_48 - uVar26;
  uStack_40 = (uint)uVar37;
  pqVar53 = (qword *)CONCAT71((int7)(uVar37 >> 8),0xd);
  pqVar38 = pqStack_50;
  param_6 = pqVar28;
  goto LAB_000b0d9e;
  while( true ) {
    pcStack_200 = (code *)0xb2b60;
    uVar59 = (*(code *)PTR_memmove_000c3c50)(puStack_1c8);
    pbVar13 = pbVar13 + 4;
    ppuVar22 = (undefined **)(pbVar25 + 4);
    if (pbVar16 <= pbVar13) break;
LAB_000b2b17:
    pbVar25 = (byte *)ppuVar22;
    pbStack_1e8 = pbVar25 + 3;
    uStack_1e0 = 0;
    pcStack_200 = (code *)0xb2b3a;
    pbStack_1f0 = pbVar25;
    lVar17 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>_000c4700)();
    pbVar32 = pbVar32 + -lVar17;
    if (puVar54 + -(longlong)pbVar32 < pbVar13) {
      pcStack_200 = (code *)0xb2d56;
      uVar59 = (*(code *)PTR_panic_fmt_000c3e90)
                         (puVar54 + -(longlong)pbVar32,
                          &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e38);
      goto LAB_000b2d56;
    }
  }
  ppuVar22 = (undefined **)(pbVar25 + 4);
  pqVar42 = pqStack_1d0;
  puVar47 = puStack_1d8;
  puVar40 = puStack_1c8;
  goto LAB_000b2c51;
  while( true ) {
    (pbVar2 + 1)[(longlong)pbVar25] = puVar40[(longlong)pbVar32];
    pbVar32 = (byte *)((ulonglong)(pbVar25 + (longlong)ppuVar22 + 2) & (ulonglong)puVar47);
    if (puVar54 <= pbVar32) {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ce8;
      pcStack_198 = (code *)&pcStack_110;
      goto LAB_000b2e51;
    }
    pbVar15 = pbVar13 + (longlong)pbVar25 + 2;
    if (puVar54 <= pbVar15) {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d00;
      goto LAB_000b2df7;
    }
    (pbVar2 + 2)[(longlong)pbVar25] = puVar40[(longlong)pbVar32];
    (pbVar2 + 3)[(longlong)pbVar25] =
         puVar40[(longlong)((ulonglong)(pbVar25 + (longlong)ppuVar22 + 3) & (ulonglong)puVar47)];
    pbVar32 = pbVar13 + (longlong)pbVar25;
    pbVar25 = pbVar25 + 4;
    if (pbVar16 <= pbVar32 + 4) break;
LAB_000b2b9a:
    pcStack_198 = (code *)&pcStack_110;
    if (puVar54 <= pbVar13 + (longlong)pbVar25 + 3) {
LAB_000b2d56:
      ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c70;
      goto LAB_000b2d64;
    }
    pcStack_198 = (code *)&pcStack_110;
    if (puVar54 <=
        (undefined1 *)((ulonglong)(pbVar25 + (longlong)ppuVar22 + 3) & (ulonglong)puVar47))
    goto LAB_000b2d6f;
    pbVar32 = (byte *)((ulonglong)(pbVar25 + (longlong)ppuVar22) & (ulonglong)puVar47);
    if (puVar54 <= pbVar32) {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ca0;
      pcStack_198 = (code *)&pcStack_110;
      goto LAB_000b2e51;
    }
    pbVar2[(longlong)pbVar25] = puVar40[(longlong)pbVar32];
    pbVar32 = (byte *)((ulonglong)(pbVar25 + (longlong)ppuVar22 + 1) & (ulonglong)puVar47);
    if (puVar54 <= pbVar32) {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2cb8;
      pcStack_198 = (code *)&pcStack_110;
      goto LAB_000b2e51;
    }
    pbVar15 = pbVar13 + (longlong)pbVar25 + 1;
    if (puVar54 <= pbVar15) {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2cd0;
LAB_000b2df7:
      pbVar32 = pbVar15;
      pcStack_198 = (code *)&pcStack_110;
      goto LAB_000b2e51;
    }
  }
  ppuVar22 = (undefined **)((longlong)ppuVar22 + (longlong)pbVar25);
  pbVar13 = pbVar13 + (longlong)pbVar25;
  pcStack_198 = (code *)&pcStack_110;
LAB_000b2c51:
  uVar27 = (uint)pqVar42 & 3;
  puVar24 = &switchD_000b2ad3::switchdataD_00016db8;
  uVar55 = (&switchD_000b2ad3::switchdataD_00016db8)[uVar27];
  switch(uVar27) {
  case 0:
    goto switchD_000b2ad3_caseD_0;
  case 1:
switchD_000b2ad3_caseD_1:
    pbVar25 = (byte *)((longlong)&switchD_000b2ad3::switchdataD_00016db8 + (longlong)(int)uVar55);
    pbVar32 = (byte *)((ulonglong)ppuVar22 & (ulonglong)puVar47);
    if (puVar54 <= pbVar32) {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d18;
LAB_000b2e42:
      ppuVar22 = (undefined **)pbVar32;
      goto LAB_000b2e51;
    }
    if (pbVar13 < puVar54) {
LAB_000b2d26:
      puVar24 = (uint *)(ulonglong)(byte)puVar40[(longlong)pbVar32];
      puVar40[(longlong)pbVar13] = puVar40[(longlong)pbVar32];
switchD_000b2ad3_caseD_0:
      return (qword *)puVar24;
    }
    ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d30;
    ppuVar22 = (undefined **)pbVar32;
    pbVar32 = pbVar13;
    break;
  case 2:
switchD_000b2ad3_caseD_2:
    pbVar16 = pbVar13 + 1;
    if (puVar54 <= pbVar16) goto LAB_000b2d9e;
    pbVar25 = (byte *)((ulonglong)((longlong)ppuVar22 + 1) & (ulonglong)puVar47);
    if (puVar54 <= pbVar25) {
      ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d60;
LAB_000b2d7d:
      do {
        pcStack_200 = (code *)0xb2d88;
        (*(code *)PTR_panic_000c3b00)(uVar59,ppuVar22);
LAB_000b2d88:
        pcStack_200 = (code *)0xb2d9e;
        uVar59 = (*(code *)PTR_slice_index_fail_000c3bb0)
                           (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c58,puVar54);
LAB_000b2d9e:
        ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d48;
LAB_000b2d64:
        pcStack_200 = (code *)0xb2d6f;
        uVar59 = (*(code *)PTR_panic_000c3b00)(uVar59,ppuVar22);
LAB_000b2d6f:
        ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c88;
      } while( true );
    }
    pbVar32 = (byte *)((ulonglong)ppuVar22 & (ulonglong)puVar47);
    if (puVar54 <= pbVar32) {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d78;
      goto LAB_000b2e42;
    }
    if (pbVar13 < puVar54) {
LAB_000b2d18:
      puVar40[(longlong)pbVar13] = puVar40[(longlong)pbVar32];
      pbVar32 = pbVar25;
      pbVar13 = pbVar16;
      goto LAB_000b2d26;
    }
    ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d90;
    ppuVar22 = (undefined **)pbVar32;
    pbVar32 = pbVar13;
    break;
  case 3:
switchD_000b2ad3_caseD_3:
    pbVar16 = pbVar13 + 2;
    if (puVar54 <= pbVar16) {
      ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2da8;
      goto LAB_000b2d64;
    }
    pbVar25 = (byte *)((ulonglong)((longlong)ppuVar22 + 2) & (ulonglong)puVar47);
    if (puVar54 <= pbVar25) {
      ppuVar22 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2dc0;
      goto LAB_000b2d7d;
    }
    pbVar32 = (byte *)((ulonglong)ppuVar22 & (ulonglong)puVar47);
    if (puVar54 <= pbVar32) {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2dd8;
      goto LAB_000b2e51;
    }
    if (pbVar13 < puVar54) {
      puVar40[(longlong)pbVar13] = puVar40[(longlong)pbVar32];
      pbVar32 = (byte *)((ulonglong)((longlong)ppuVar22 + 1) & (ulonglong)puVar47);
      if (puVar54 <= pbVar32) {
        ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e08;
        goto LAB_000b2e42;
      }
      pbVar13 = pbVar13 + 1;
      if (pbVar13 < puVar54) goto LAB_000b2d18;
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e20;
      ppuVar22 = (undefined **)pbVar32;
      pbVar32 = pbVar13;
    }
    else {
      ppuVar23 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2df0;
      pbVar32 = pbVar13;
    }
  }
  pbVar13 = pbVar32;
LAB_000b2e51:
  pcStack_200 = miniz_oxide[d073f249698f1019]::inflate::core::init_tree;
  (*(code *)PTR_panic_bounds_check_000c3dd8)(pbVar25,ppuVar23);
  pcStack_200 = (code *)&pcStack_198;
  pbStack_208 = pbVar13;
  puStack_210 = puVar40;
  pbStack_218 = (byte *)ppuVar22;
  puStack_220 = puVar47;
  puStack_228 = puVar54;
  puStack_230 = puVar54;
  bVar11 = pbVar32[0x28ef];
LAB_000b2e78:
  if (bVar11 == 0) {
    uVar19 = 0x120;
    puVar54 = pbVar32 + 0x2780;
  }
  else {
    if (bVar11 == 2) {
      auStack_2a0[8] = 0;
      auStack_2a0[9] = 0;
      auStack_2a0[10] = 0;
      auStack_2a0[0xb] = 0;
      auStack_2a0[0xc] = 0;
      auStack_2a0[0xd] = 0;
      auStack_2a0[0xe] = 0;
      auStack_2a0[0xf] = 0;
      auStack_2a0[0] = 0;
      auStack_2a0[1] = 0;
      auStack_2a0[2] = 0;
      auStack_2a0[3] = 0;
      auStack_2a0[4] = 0;
      auStack_2a0[5] = 0;
      auStack_2a0[6] = 0;
      auStack_2a0[7] = 0;
      aiStack_280[0xc] = 0;
      aiStack_280[0xd] = 0;
      aiStack_280[0xe] = 0;
      aiStack_280[0xf] = 0;
      aiStack_280[8] = 0;
      aiStack_280[9] = 0;
      aiStack_280[10] = 0;
      aiStack_280[0xb] = 0;
      aiStack_280[4] = 0;
      aiStack_280[5] = 0;
      aiStack_280[6] = 0;
      aiStack_280[7] = 0;
      aiStack_280[0] = 0;
      aiStack_280[1] = 0;
      aiStack_280[2] = 0;
      aiStack_280[3] = 0;
      aiStack_280[0x10] = 0;
      lVar17 = 0;
      do {
        (pbVar32 + lVar17 + 0x1b00)[0] = 0x1e;
        (pbVar32 + lVar17 + 0x1b00)[1] = 3;
        lVar17 = lVar17 + 2;
      } while (lVar17 != 0x800);
      uVar19 = 0x13;
      puVar54 = pbVar32 + 0x28f1;
      pbVar13 = pbVar32 + 0x1b00;
      goto LAB_000b2f62;
    }
    if (bVar11 != 1) {
      return (qword *)0xff;
    }
    uVar19 = 0x20;
    puVar54 = pbVar32 + 0x28a0;
  }
  pbVar13 = pbVar32 + (ulonglong)bVar11 * 0xc80 + 0x200;
  auStack_2a0[8] = 0;
  auStack_2a0[9] = 0;
  auStack_2a0[10] = 0;
  auStack_2a0[0xb] = 0;
  auStack_2a0[0xc] = 0;
  auStack_2a0[0xd] = 0;
  auStack_2a0[0xe] = 0;
  auStack_2a0[0xf] = 0;
  auStack_2a0[0] = 0;
  auStack_2a0[1] = 0;
  auStack_2a0[2] = 0;
  auStack_2a0[3] = 0;
  auStack_2a0[4] = 0;
  auStack_2a0[5] = 0;
  auStack_2a0[6] = 0;
  auStack_2a0[7] = 0;
  aiStack_280[0xc] = 0;
  aiStack_280[0xd] = 0;
  aiStack_280[0xe] = 0;
  aiStack_280[0xf] = 0;
  aiStack_280[8] = 0;
  aiStack_280[9] = 0;
  aiStack_280[10] = 0;
  aiStack_280[0xb] = 0;
  aiStack_280[4] = 0;
  aiStack_280[5] = 0;
  aiStack_280[6] = 0;
  aiStack_280[7] = 0;
  aiStack_280[0] = 0;
  aiStack_280[1] = 0;
  aiStack_280[2] = 0;
  aiStack_280[3] = 0;
  aiStack_280[0x10] = 0;
  lVar17 = 0;
  do {
    (pbVar13 + lVar17)[0] = 0x1e;
    (pbVar13 + lVar17)[1] = 3;
    lVar17 = lVar17 + 2;
  } while (lVar17 != 0x800);
  (*(code *)PTR_memset_000c3cd8)(0,0x480);
LAB_000b2f62:
  uVar37 = (ulonglong)*(ushort *)(pbVar32 + (ulonglong)bVar11 * 2 + 0x28e8);
  if (uVar19 < *(ushort *)(pbVar32 + (ulonglong)bVar11 * 2 + 0x28e8)) {
    return (qword *)0xff;
  }
  if (uVar37 != 0) {
    uVar49 = 0;
    do {
      if (0xf < (ulonglong)(byte)puVar54[uVar49]) {
        return (qword *)0xff;
      }
      auStack_2a0[(byte)puVar54[uVar49]] = auStack_2a0[(byte)puVar54[uVar49]] + 1;
      uVar49 = uVar49 + 1;
    } while (uVar37 != uVar49);
  }
  uVar44 = 1;
  bVar58 = false;
  iVar39 = 0;
  iVar21 = 0;
  uVar49 = 0;
  do {
    if (bVar58) {
      uVar45 = uVar49 + (uVar49 < 0x10);
      if (0xf < uVar49) break;
    }
    else {
      uVar45 = 0x10 - uVar49;
      if (uVar44 <= 0x10 - uVar49) {
        uVar45 = uVar44;
      }
      if (uVar49 <= uVar45 + uVar49) {
        uVar49 = uVar45 + uVar49;
      }
      if (0xf < uVar49) break;
      uVar45 = uVar49 + 1;
    }
    iVar21 = iVar21 + (uint)auStack_2a0[uVar49];
    iVar39 = (iVar39 + (uint)auStack_2a0[uVar49]) * 2;
    aiStack_280[uVar49 + 1] = iVar39;
    bVar58 = true;
    uVar44 = 0;
    uVar49 = uVar45;
  } while( true );
  if (iVar39 != 0x10000) {
    if (bVar11 == 2) {
      return (qword *)0x1;
    }
    if (1 < (ushort)iVar21) {
      return (qword *)0x1;
    }
  }
  if (uVar37 != 0) {
    uVar19 = 0xffff;
    uVar49 = 0;
    do {
      while( true ) {
        uVar44 = uVar49 + 1;
        bVar11 = puVar54[uVar49];
        uVar55 = bVar11 & 0xf;
        if ((bVar11 & 0xf) != 0) break;
LAB_000b30f1:
        uVar49 = uVar44;
        if (uVar44 == uVar37) goto LAB_000b31b9;
      }
      bVar18 = (byte)uVar55;
      uVar48 = (ushort)((uint)(aiStack_280[uVar55] << (-bVar18 & 0x1f)) >> (-bVar18 & 0x1f));
      uVar48 = uVar48 << 8 | uVar48 >> 8;
      uVar27 = (uVar48 & 0xf0f) << 4 | (uVar48 & 0xf0f0) >> 4;
      uVar27 = (uVar27 >> 2 & 0x3333) + (uVar27 & 0x3333) * 4;
      uVar26 = (uVar27 >> 1 & 0x5555) + (uVar27 & 0x5555) * 2 >> (0x10 - bVar18 & 0x1f);
      aiStack_280[uVar55] = aiStack_280[uVar55] + 1;
      uVar27 = uVar26 & 0xffff;
      uVar45 = (ulonglong)uVar27;
      if (bVar18 < 0xb) {
        if (uVar27 < 0x400) {
          do {
            *(ushort *)(pbVar13 + uVar45 * 2) = (ushort)uVar49 | (ushort)(uVar55 << 9);
            uVar45 = uVar45 + (uint)(1 << bVar18);
          } while (uVar45 < 0x400);
        }
        goto LAB_000b30f1;
      }
      uVar45 = (ulonglong)(uVar26 & 0x3ff);
      uVar48 = *(ushort *)(pbVar13 + uVar45 * 2);
      if (uVar48 == 0x31e) {
        *(ushort *)(pbVar13 + uVar45 * 2) = uVar19;
        uVar48 = uVar19;
        uVar19 = uVar19 - 2;
      }
      uVar27 = uVar27 >> 9;
      uVar45 = (ulonglong)uVar27;
      if (bVar18 != 0xb) {
        cVar41 = (bVar11 & 0xf) - 0xb;
        do {
          uVar48 = ~uVar48 + (ushort)(((uint)uVar45 >> 1 & 1) != 0);
          if (0x23f < uVar48) {
            return (qword *)0xff;
          }
          if (*(ushort *)(pbVar13 + (ulonglong)uVar48 * 2 + 0x800) == 0) {
            *(ushort *)(pbVar13 + (ulonglong)uVar48 * 2 + 0x800) = uVar19;
            uVar48 = uVar19;
            uVar19 = uVar19 - 2;
          }
          else {
            uVar48 = *(ushort *)(pbVar13 + (ulonglong)uVar48 * 2 + 0x800);
          }
          uVar45 = uVar45 >> 1;
          uVar27 = (uint)uVar45;
          cVar41 = cVar41 + -1;
        } while (cVar41 != '\0');
      }
      uVar48 = ~uVar48 + (ushort)((uVar27 >> 1 & 1) != 0);
      if (0x23f < uVar48) {
        return (qword *)0xff;
      }
      *(ushort *)(pbVar13 + (ulonglong)uVar48 * 2 + 0x800) = (ushort)uVar49;
      uVar49 = uVar44;
    } while (uVar44 < uVar37);
  }
LAB_000b31b9:
  cVar41 = pbVar32[0x28ef];
  if (cVar41 == '\0') {
    *(undefined4 *)(puStack_230 + 0x10) = 0;
    return (qword *)0x1;
  }
  if (cVar41 == '\x02') {
    *(undefined4 *)(puStack_230 + 0x10) = 0;
    return (qword *)0x1;
  }
  bVar11 = cVar41 - 1;
  pbVar32[0x28ef] = bVar11;
  goto LAB_000b2e78;
}


