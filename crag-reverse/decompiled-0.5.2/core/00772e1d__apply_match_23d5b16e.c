// 00772e1d apply_match

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* miniz_oxide[d073f249698f1019]::inflate::core::apply_match */

undefined1  [16] __rustcall
miniz_oxide[d073f249698f1019]::inflate::core::apply_match
          (longlong param_1,ulonglong param_2,ulonglong param_3,undefined **param_4,
          undefined **param_5,ulonglong param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  ushort uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  uint uVar18;
  uint uVar19;
  undefined7 uVar21;
  undefined8 extraout_RDX;
  undefined **ppuVar20;
  undefined7 uVar22;
  int iVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  int iVar26;
  undefined **ppuVar27;
  char cVar28;
  ulonglong uVar29;
  undefined **ppuVar30;
  byte bVar31;
  ushort uVar32;
  ushort uVar33;
  ulonglong uVar34;
  uint uVar35;
  undefined *puVar36;
  undefined **ppuVar37;
  bool bVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ushort auStack_1a0 [16];
  int aiStack_180 [20];
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  code *pcStack_100;
  undefined **ppuStack_f0;
  longlong lStack_e8;
  undefined1 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  char *pcStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  ulonglong uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_64;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  uint uStack_4c;
  uint *puStack_48;
  uint uStack_40;
  byte bStack_39;
  undefined8 uStack_10;
  
  auVar40._8_8_ = param_3 - (longlong)param_4 & param_6;
  if (param_5 == (undefined **)0x3) {
    if ((((param_3 + 3 <= param_2 && param_3 < 0xfffffffffffffffd) &&
         (uVar14 = auVar40._8_8_ + 2 & param_6, uVar14 < param_2)) && (auVar40._8_8_ < param_2)) &&
       (param_6 = auVar40._8_8_ + 1 & param_6, param_6 < param_2)) {
      *(undefined1 *)(param_1 + param_3) = *(undefined1 *)(param_1 + auVar40._8_8_);
      *(undefined1 *)(param_1 + 1 + param_3) = *(undefined1 *)(param_1 + param_6);
      uVar2 = *(undefined1 *)(param_1 + uVar14);
      param_2 = CONCAT71((int7)(param_2 >> 8),uVar2);
      *(undefined1 *)(param_1 + 2 + param_3) = uVar2;
    }
    auVar40._0_8_ = param_2;
    return auVar40;
  }
  if (((param_3 <= auVar40._8_8_ && (undefined **)(auVar40._8_8_ - param_3) < param_5) ||
      (param_4 < param_5)) || (uVar14 = auVar40._8_8_ + (longlong)param_5, param_2 <= uVar14)) {
    auVar40 = transfer(param_1,param_2,auVar40._8_8_,param_3);
    return auVar40;
  }
  if (auVar40._8_8_ < param_3) {
    ppuVar4 = (undefined **)(param_2 - param_3);
    if (param_3 <= param_2) {
      if (ppuVar4 < param_5) {
        ppuVar15 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797ed8;
        goto LAB_00772f21;
      }
      if ((auVar40._8_8_ <= uVar14) && (uVar14 <= param_3)) goto LAB_00772ef1;
      goto LAB_00772f2f;
    }
  }
  else {
    ppuVar4 = (undefined **)(param_2 - auVar40._8_8_);
    if (param_2 < auVar40._8_8_) {
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797e60;
      goto LAB_00772f60;
    }
    if ((CARRY8((ulonglong)param_5,param_3)) || (auVar40._8_8_ < (longlong)param_5 + param_3)) {
      uStack_10 = (code *)0x772f1a;
      ppuVar4 = (undefined **)
                (*(code *)PTR_slice_index_fail_007993c8)
                          (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797e90);
    }
    else if (param_5 <= ppuVar4) {
LAB_00772ef1:
      auVar41._0_8_ = (*(code *)PTR_memcpy_00799008)(param_4,param_5);
      auVar41._8_8_ = param_5;
      return auVar41;
    }
    ppuVar15 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797e78;
LAB_00772f21:
    uStack_10 = (code *)0x772f2f;
    (*(code *)PTR_slice_index_fail_007993c8)(ppuVar15,ppuVar4);
LAB_00772f2f:
    param_4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797ec0;
    uStack_10 = (code *)0x772f42;
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797ec0,param_3);
  }
  ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797ea8;
LAB_00772f60:
  uVar39 = SUB84(param_4,0);
  uStack_10 = decompress_fast;
  (*(code *)PTR_panic_fmt_007991a8)();
  puVar36 = *param_5;
  uVar35 = *(uint *)(param_5 + 1);
  uVar14 = (ulonglong)uVar35;
  ppuVar25 = (undefined **)(ulonglong)*(uint *)((longlong)param_5 + 0xc);
  ppuVar15 = (undefined **)ppuVar4[1];
  ppuStack_b8 = (undefined **)ppuVar4[2];
  bVar31 = *(byte *)((longlong)param_5 + 0x14);
  uVar9 = CONCAT71((int7)((ulonglong)ppuVar4 >> 8),0xc);
  if (_DAT_0000001b < 0xe || (ulonglong)((longlong)ppuVar15 - (longlong)ppuStack_b8) < 0x103) {
    uStack_40 = *(uint *)(param_5 + 2);
LAB_00772fca:
    uVar6 = 0;
  }
  else {
    puStack_58 = (undefined8 *)0x13;
    puStack_48 = puRam0000000000000013;
    ppuStack_60 = (undefined **)*ppuVar4;
    uVar34 = _DAT_0000001b;
    uStack_90 = param_6;
    ppuStack_78 = ppuVar4;
    ppuStack_70 = param_5;
    uStack_64 = uVar39;
    uStack_10 = (code *)((longlong)register0x00000020 + -8);
LAB_00772fee:
    do {
      uVar35 = (uint)uVar14;
      if (uVar35 < 0x1e) {
        uVar3 = *puStack_48;
        uVar34 = uVar34 - 4;
        puStack_48 = puStack_48 + 1;
        *puStack_58 = puStack_48;
        puStack_58[1] = uVar34;
        puVar36 = (undefined *)((ulonglong)puVar36 | (ulonglong)uVar3 << ((byte)uVar14 & 0x3f));
        uVar35 = uVar35 | 0x20;
      }
      uVar3 = (uint)puVar36 & 0x3ff;
      uVar5 = (ulonglong)uVar3;
      uVar18 = (uint)*(short *)(
                               "a formatting trait implementation returned an error when the underlying stream did not"
                               + uVar5 * 2 + 0x15);
      uVar29 = (ulonglong)uVar18;
      if ((int)uVar18 < 0) {
        uVar14 = CONCAT71((uint7)(uint3)(uVar3 >> 8),0xb);
        do {
          uVar5 = uVar14;
          uVar3 = ~(uint)uVar29 +
                  (uint)(((ulonglong)puVar36 >> ((ulonglong)((int)uVar5 - 1U & 0xff) & 0x3f) & 1) !=
                        0);
          if (0x23f < uVar3) {
            uVar29 = 0x7fff;
            break;
          }
          uVar29 = (ulonglong)
                   (uint)(int)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                         cn_planes_0_3::OFFSETS + (ulonglong)uVar3 * 2 + 0x574);
          uVar14 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 + 1);
        } while (*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::cn_planes_0_3::OFFSETS +
                           (ulonglong)uVar3 * 2 + 0x574) < 0);
        uVar18 = (uint)(byte)uVar5;
      }
      else {
        uVar18 = uVar18 >> 9;
      }
      puVar36 = (undefined *)((ulonglong)puVar36 >> ((byte)uVar18 & 0x3f));
      uVar35 = uVar35 - uVar18;
      uVar14 = (ulonglong)uVar35;
      ppuVar17 = ppuStack_b8;
      if (((uint)uVar29 >> 8 & 1) == 0) {
        uVar3 = (uint)*(short *)(
                                "a formatting trait implementation returned an error when the underlying stream did not"
                                + (ulonglong)((uint)puVar36 & 0x3ff) * 2 + 0x15);
        uVar5 = (ulonglong)uVar3;
        if ((int)uVar3 < 0) {
          uVar3 = 0xb;
          do {
            bVar11 = (byte)uVar3;
            uVar18 = ~(uint)uVar5 +
                     (uint)(((ulonglong)puVar36 >> ((ulonglong)(uVar3 - 1 & 0xff) & 0x3f) & 1) != 0)
            ;
            if (0x23f < uVar18) {
              uVar5 = 0x7fff;
              break;
            }
            uVar5 = (ulonglong)
                    (uint)(int)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                          cn_planes_0_3::OFFSETS + (ulonglong)uVar18 * 2 + 0x574);
            uVar3 = (uint)(byte)(bVar11 + 1);
          } while (*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::cn_planes_0_3::OFFSETS
                             + (ulonglong)uVar18 * 2 + 0x574) < 0);
          ppuVar37 = (undefined **)(ulonglong)bVar11;
          ppuVar4 = ppuStack_78;
        }
        else {
          ppuVar37 = (undefined **)(ulonglong)(uVar3 >> 9);
        }
        puVar36 = (undefined *)((ulonglong)puVar36 >> ((byte)ppuVar37 & 0x3f));
        if (ppuStack_b8 < ppuVar15) {
          uVar35 = uVar35 - (int)ppuVar37;
          uVar14 = (ulonglong)uVar35;
          *(char *)((longlong)ppuStack_60 + (longlong)ppuStack_b8) = (char)uVar29;
          ppuVar17 = (undefined **)((longlong)ppuStack_b8 + 1);
          ppuVar4[2] = (undefined *)ppuVar17;
          if (((uint)uVar5 >> 8 & 1) != 0) {
            uVar29 = uVar5;
            goto LAB_0077313b;
          }
          ppuVar37 = ppuStack_60;
          if (ppuVar17 < ppuVar15) {
            *(char *)((longlong)ppuStack_60 + 1 + (longlong)ppuStack_b8) = (char)uVar5;
            ppuStack_b8 = (undefined **)((longlong)ppuStack_b8 + 2);
            ppuVar4[2] = (undefined *)ppuStack_b8;
            uVar6 = 0;
            if (0x102 < (ulonglong)((longlong)ppuVar15 - (longlong)ppuStack_b8)) {
              if (0xd < uVar34) goto LAB_00772fee;
            }
            uVar9 = CONCAT71((int7)(uVar29 >> 8),0xc);
            uStack_40 = (uint)uVar29;
            goto LAB_00773336;
          }
        }
        else {
        }
        ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797d70;
        pcStack_98 = transfer;
        uVar39 = (*(code *)PTR_panic_bounds_check_00799520)();
        pcStack_c0 = "mid > len";
        uVar34 = (longlong)ppuVar4 - (longlong)ppuVar37;
        if (ppuVar4 <= ppuVar37) {
          uVar34 = (longlong)ppuVar37 - (longlong)ppuVar4;
        }
        bVar38 = (undefined **)((longlong)param_5 + (longlong)ppuVar4 + -3) < ppuVar15;
        ppuVar16 = (undefined **)(((ulonglong)param_5 & 0xfffffffffffffffc) + (longlong)ppuVar37);
        ppuStack_b0 = ppuVar15;
        uStack_a8 = uVar14;
        puStack_a0 = puVar36;
        if (((ppuVar4 < ppuVar37) && (bVar38 || ppuVar25 == (undefined **)0xffffffffffffffff)) &&
           (uVar34 == 1)) {
          if (ppuVar15 <= (undefined **)((longlong)ppuVar37 - 1U)) {
            ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797ef0;
            ppuVar16 = (undefined **)0x1;
            ppuVar27 = (undefined **)((longlong)ppuVar37 - 1U);
            pcStack_98 = (code *)&uStack_10;
            goto LAB_007737d1;
          }
          pcStack_98 = (code *)&uStack_10;
          if (ppuVar16 < ppuVar37) goto LAB_00773708;
          pcStack_98 = (code *)&uStack_10;
          if (ppuVar15 < ppuVar16) goto LAB_00773708;
          pcStack_100 = (code *)0x773438;
          pcStack_98 = (code *)&uStack_10;
          uVar39 = (*(code *)PTR_memset_00799090)();
          ppuVar4 = (undefined **)((longlong)ppuVar16 - 1);
          uVar3 = (uint)param_5 & 3;
          puVar7 = &switchD_00773453::switchdataD_001c13b8;
          uVar35 = (&switchD_00773453::switchdataD_001c13b8)[uVar3];
          ppuVar20 = ppuVar16;
          ppuVar37 = ppuVar16;
          switch(uVar3) {
          case 0:
            goto switchD_00773453_caseD_0;
          case 1:
            goto switchD_00773453_caseD_1;
          case 2:
            goto switchD_00773453_caseD_2;
          }
          goto switchD_00773453_caseD_3;
        }
        ppuVar20 = (undefined **)((longlong)ppuVar15 - 3);
        ppuVar30 = (undefined **)0x0;
        if ((undefined **)0x2 < ppuVar15) {
          ppuVar30 = ppuVar20;
        }
        if (ppuVar16 <= ppuVar30) {
          ppuVar30 = ppuVar16;
        }
        if (!((ppuVar37 <= ppuVar4 || !bVar38 && ppuVar25 != (undefined **)0xffffffffffffffff) ||
             (ulonglong)((longlong)ppuVar37 - (longlong)ppuVar4) < 4)) {
          pcStack_98 = (code *)&uStack_10;
          if (ppuVar30 <= ppuVar37) goto LAB_007735d1;
          ppuStack_d8 = ppuVar25;
          ppuStack_d0 = param_5;
          ppuStack_c8 = ppuVar17;
          pcStack_98 = (code *)&uStack_10;
          goto LAB_00773497;
        }
        pcStack_98 = (code *)&uStack_10;
        if (ppuVar30 <= ppuVar37) goto LAB_007735d1;
        lVar10 = (longlong)ppuVar37 + (longlong)ppuVar17;
        ppuVar20 = (undefined **)(lVar10 + 3);
        ppuVar16 = (undefined **)0x0;
        goto LAB_0077351a;
      }
LAB_0077313b:
      uStack_40 = (uint)uVar29 & 0x1ff;
      uVar21 = (undefined7)(uVar29 >> 8);
      if (uStack_40 == 0x100) {
        uStack_40 = 0x100;
        uVar9 = CONCAT71(uVar21,0x14);
        goto LAB_00772fca;
      }
      uVar6 = CONCAT71((int7)(uVar5 >> 8),0xff);
      if (0x11d < uStack_40) {
        uVar9 = CONCAT71(uVar21,0x21);
        goto LAB_00773336;
      }
      uVar3 = (uint)uVar29 - 1 & 0x1f;
      if (uVar35 < 0x1e) {
        uVar18 = *puStack_48;
        uVar34 = uVar34 - 4;
        puStack_48 = puStack_48 + 1;
        *puStack_58 = puStack_48;
        puStack_58[1] = uVar34;
        puVar36 = (undefined *)((ulonglong)puVar36 | (ulonglong)uVar18 << ((byte)uVar35 & 0x3f));
        uVar35 = uVar35 | 0x20;
      }
      bVar31 = (&DAT_0018d2c0)[uVar3];
      uStack_40 = (uint)*(ushort *)(&DAT_001c143e + (ulonglong)uVar3 * 2);
      if (0xffffffeb < uVar3 - 0x1c) {
        uVar3 = (uint)puVar36;
        puVar36 = (undefined *)((ulonglong)puVar36 >> (bVar31 & 0x3f));
        uVar35 = uVar35 - bVar31;
        uStack_40 = (~(uint)(-1L << (bVar31 & 0x3f)) & uVar3) + uStack_40;
      }
      uVar3 = (uint)*(short *)("assertion failed: buf.len() >= maxlen" +
                              (ulonglong)((uint)puVar36 & 0x3ff) * 2 + 0x12);
      uVar29 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar18 = 0xb;
        do {
          uVar3 = uVar18;
          uVar19 = ~(uint)uVar29 +
                   (uint)(((ulonglong)puVar36 >> ((ulonglong)(uVar3 - 1 & 0xff) & 0x3f) & 1) != 0);
          if (0x23f < uVar19) {
            uVar29 = 0x7fff;
            break;
          }
          uVar29 = (ulonglong)
                   (uint)(int)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                         grapheme_extend::SHORT_OFFSET_RUNS +
                                        (ulonglong)uVar19 * 2 + 0x74);
          uVar18 = (uint)(byte)((char)uVar3 + 1);
        } while (*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::grapheme_extend::
                            SHORT_OFFSET_RUNS + (ulonglong)uVar19 * 2 + 0x74) < 0);
      }
      else {
        uVar3 = uVar3 >> 9;
      }
      puVar36 = (undefined *)((ulonglong)puVar36 >> ((byte)uVar3 & 0x3f));
      uVar18 = (uint)uVar29 & 0x1ff;
      uVar35 = uVar35 - uVar3;
      if (0x1d < uVar18) {
        uVar9 = CONCAT71((int7)(uVar29 >> 8),0x22);
        goto LAB_00773336;
      }
      bVar31 = (byte)uVar29 >> 1;
      bVar31 = (bVar31 - 1) + (bVar31 == 0);
      uVar12 = *(ushort *)(&DAT_001c13f8 + (ulonglong)uVar18 * 2);
      ppuVar25 = (undefined **)(ulonglong)uVar12;
      if (3 < (byte)uVar29) {
        if (uVar35 < 0x1e) {
          uVar3 = *puStack_48;
          uVar34 = uVar34 - 4;
          puStack_48 = puStack_48 + 1;
          *puStack_58 = puStack_48;
          puStack_58[1] = uVar34;
          puVar36 = (undefined *)((ulonglong)puVar36 | (ulonglong)uVar3 << ((byte)uVar35 & 0x3f));
          uVar35 = uVar35 | 0x20;
        }
        uVar3 = (uint)puVar36;
        puVar36 = (undefined *)((ulonglong)puVar36 >> (bVar31 & 0x3f));
        uVar35 = uVar35 - bVar31;
        uVar3 = (~(uint)(-1L << (bVar31 & 0x3f)) & uVar3) + (uint)uVar12;
        uVar29 = (ulonglong)uVar3;
        ppuVar25 = (undefined **)(ulonglong)uVar3;
      }
      uVar14 = (ulonglong)uVar35;
      uStack_4c = (uint)ppuVar25;
      if ((ppuVar15 < ppuVar25) || (((byte)uStack_64 >> 2 & ppuVar17 < ppuVar25) != 0)) {
        uVar9 = CONCAT71((int7)(uVar29 >> 8),0x1e);
        goto LAB_00773336;
      }
      uStack_88 = (ulonglong)uStack_40;
      pcStack_98 = (code *)0x7732f7;
      uStack_80 = uVar34;
      bStack_39 = bVar31;
      apply_match(ppuStack_60,ppuVar15,ppuVar17,ppuVar25,uStack_88,uStack_90);
      ppuStack_b8 = (undefined **)((longlong)ppuVar17 + uStack_88);
      ppuStack_78[2] = (undefined *)ppuStack_b8;
      uVar6 = 0;
      param_5 = ppuStack_70;
      bVar31 = bStack_39;
      if ((ulonglong)((longlong)ppuVar15 - (longlong)ppuStack_b8) < 0x103) break;
      ppuVar25 = (undefined **)(ulonglong)uStack_4c;
      ppuVar4 = ppuStack_78;
      uVar34 = uStack_80;
    } while (0xd < uStack_80);
    ppuVar25 = (undefined **)(ulonglong)uStack_4c;
    uVar9 = CONCAT71((int7)((ulonglong)extraout_RDX >> 8),0xc);
  }
LAB_00773336:
  *param_5 = puVar36;
  *(uint *)(param_5 + 1) = uVar35;
  *(int *)((longlong)param_5 + 0xc) = (int)ppuVar25;
  *(uint *)(param_5 + 2) = uStack_40;
  *(byte *)((longlong)param_5 + 0x14) = bVar31;
  auVar42._8_8_ = uVar9;
  auVar42._0_8_ = uVar6;
  return auVar42;
LAB_0077351a:
  do {
    pcStack_98 = (code *)&uStack_10;
    if (ppuVar15 <= (undefined **)((longlong)ppuVar37 + (longlong)ppuVar16 + 3U)) goto LAB_007736d6;
    ppuVar24 = (undefined **)((longlong)ppuVar16 + (longlong)ppuVar4 + 3U & (ulonglong)ppuVar25);
    pcStack_98 = (code *)&uStack_10;
    if (ppuVar15 <= ppuVar24) goto LAB_007736ef;
    ppuVar27 = (undefined **)((longlong)ppuVar16 + (longlong)ppuVar4 & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797f50;
      pcStack_98 = (code *)&uStack_10;
      goto LAB_007737d1;
    }
    *(undefined1 *)(lVar10 + (longlong)ppuVar16) =
         *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
    ppuVar27 = (undefined **)((longlong)ppuVar16 + (longlong)ppuVar4 + 1U & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797f68;
      pcStack_98 = (code *)&uStack_10;
      goto LAB_007737d1;
    }
    ppuVar8 = (undefined **)((longlong)ppuVar37 + (longlong)ppuVar16 + 1);
    if (ppuVar15 <= ppuVar8) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797f80;
LAB_00773777:
      ppuVar27 = ppuVar8;
      pcStack_98 = (code *)&uStack_10;
      goto LAB_007737d1;
    }
    *(undefined1 *)(lVar10 + 1 + (longlong)ppuVar16) =
         *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
    ppuVar27 = (undefined **)((longlong)ppuVar16 + (longlong)ppuVar4 + 2U & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797f98;
      pcStack_98 = (code *)&uStack_10;
      goto LAB_007737d1;
    }
    ppuVar8 = (undefined **)((longlong)ppuVar37 + (longlong)ppuVar16 + 2);
    if (ppuVar15 <= ppuVar8) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797fb0;
      goto LAB_00773777;
    }
    *(undefined1 *)(lVar10 + 2 + (longlong)ppuVar16) =
         *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
    *(undefined1 *)((longlong)ppuVar20 + (longlong)ppuVar16) =
         *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar24);
    lVar1 = (longlong)ppuVar37 + (longlong)ppuVar16;
    ppuVar16 = (undefined **)((longlong)ppuVar16 + 4);
  } while ((undefined **)(lVar1 + 4U) < ppuVar30);
  ppuVar4 = (undefined **)((longlong)ppuVar4 + (longlong)ppuVar16);
  ppuVar37 = (undefined **)((longlong)ppuVar37 + (longlong)ppuVar16);
  pcStack_98 = (code *)&uStack_10;
  goto LAB_007735d1;
  while( true ) {
    pcStack_100 = (code *)0x7734e0;
    uVar39 = (*(code *)PTR_memmove_00799258)(ppuStack_c8);
    ppuVar37 = (undefined **)((longlong)ppuVar37 + 4);
    ppuVar4 = (undefined **)((longlong)ppuVar25 + 4);
    if (ppuVar30 <= ppuVar37) break;
LAB_00773497:
    ppuVar25 = ppuVar4;
    lStack_e8 = (longlong)ppuVar25 + 3;
    uStack_e0 = 0;
    pcStack_100 = (code *)0x7734ba;
    ppuStack_f0 = ppuVar25;
    lVar10 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>_0079b2f8)();
    ppuVar20 = (undefined **)((longlong)ppuVar20 - lVar10);
    if ((undefined **)((longlong)ppuVar15 - (longlong)ppuVar20) < ppuVar37) {
      pcStack_100 = (code *)0x7736d6;
      uVar39 = (*(code *)PTR_panic_fmt_007991a8)
                         ((undefined **)((longlong)ppuVar15 - (longlong)ppuVar20),
                          &PTR_s__rust_deps_miniz_oxide_0_8_9_src_007980e8);
LAB_007736d6:
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797f20;
      goto LAB_007736e4;
    }
  }
  ppuVar4 = (undefined **)((longlong)ppuVar25 + 4);
  param_5 = ppuStack_d0;
  ppuVar25 = ppuStack_d8;
  ppuVar17 = ppuStack_c8;
LAB_007735d1:
  uVar3 = (uint)param_5 & 3;
  puVar7 = &switchD_00773453::switchdataD_001c13b8;
  uVar35 = (&switchD_00773453::switchdataD_001c13b8)[uVar3];
  switch(uVar3) {
  case 0:
    goto switchD_00773453_caseD_0;
  case 1:
switchD_00773453_caseD_1:
    ppuVar16 = (undefined **)
               ((longlong)&switchD_00773453::switchdataD_001c13b8 + (longlong)(int)uVar35);
    puVar7 = &switchD_00773453::switchdataD_001c13b8;
    ppuVar27 = (undefined **)((ulonglong)ppuVar4 & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797fc8;
LAB_007737c2:
      ppuVar4 = ppuVar27;
      goto LAB_007737d1;
    }
    if (ppuVar37 < ppuVar15) {
LAB_007736a6:
      puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar7 >> 8),
                                *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27));
      *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar37) =
           *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
switchD_00773453_caseD_0:
      auVar43._8_8_ = ppuVar20;
      auVar43._0_8_ = puVar7;
      return auVar43;
    }
    ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797fe0;
    ppuVar4 = ppuVar27;
    ppuVar27 = ppuVar37;
    break;
  case 2:
switchD_00773453_caseD_2:
    puVar7 = (uint *)((longlong)ppuVar37 + 1);
    if (ppuVar15 <= puVar7) goto LAB_0077371e;
    ppuVar16 = (undefined **)((longlong)ppuVar4 + 1U & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar16) {
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00798010;
LAB_007736fd:
      do {
        pcStack_100 = (code *)0x773708;
        (*(code *)PTR_panic_00799338)(uVar39,ppuVar4);
LAB_00773708:
        pcStack_100 = (code *)0x77371e;
        uVar39 = (*(code *)PTR_slice_index_fail_007993c8)
                           (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797f08,ppuVar15);
LAB_0077371e:
        ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797ff8;
LAB_007736e4:
        pcStack_100 = (code *)0x7736ef;
        uVar39 = (*(code *)PTR_panic_00799338)(uVar39,ppuVar4);
LAB_007736ef:
        ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00797f38;
      } while( true );
    }
    ppuVar27 = (undefined **)((ulonglong)ppuVar4 & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00798028;
      goto LAB_007737c2;
    }
    if (ppuVar37 < ppuVar15) {
LAB_00773698:
      ppuVar20 = (undefined **)
                 CONCAT71((int7)((ulonglong)ppuVar20 >> 8),
                          *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27));
      *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar37) =
           *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
      ppuVar27 = ppuVar16;
      ppuVar37 = (undefined **)puVar7;
      goto LAB_007736a6;
    }
    ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00798040;
    ppuVar4 = ppuVar27;
    ppuVar27 = ppuVar37;
    break;
  case 3:
switchD_00773453_caseD_3:
    puVar7 = (uint *)((longlong)ppuVar37 + 2);
    if (ppuVar15 <= puVar7) {
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00798058;
      goto LAB_007736e4;
    }
    ppuVar16 = (undefined **)((longlong)ppuVar4 + 2U & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar16) {
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00798070;
      goto LAB_007736fd;
    }
    ppuVar27 = (undefined **)((ulonglong)ppuVar4 & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00798088;
      goto LAB_007737d1;
    }
    if (ppuVar37 < ppuVar15) {
      ppuVar20 = (undefined **)
                 CONCAT71((int7)((ulonglong)ppuVar20 >> 8),
                          *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27));
      *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar37) =
           *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
      ppuVar27 = (undefined **)((longlong)ppuVar4 + 1U & (ulonglong)ppuVar25);
      if (ppuVar15 <= ppuVar27) {
        ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_007980b8;
        goto LAB_007737c2;
      }
      ppuVar37 = (undefined **)((longlong)ppuVar37 + 1);
      if (ppuVar37 < ppuVar15) goto LAB_00773698;
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_007980d0;
      ppuVar4 = ppuVar27;
      ppuVar27 = ppuVar37;
    }
    else {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_007980a0;
      ppuVar27 = ppuVar37;
    }
  }
  ppuVar37 = ppuVar27;
LAB_007737d1:
  pcStack_100 = init_tree;
  uVar9 = (*(code *)PTR_panic_bounds_check_00799520)(ppuVar16,ppuVar20);
  pcStack_100 = (code *)&pcStack_98;
  ppuStack_108 = ppuVar37;
  ppuStack_110 = ppuVar17;
  ppuStack_118 = ppuVar4;
  ppuStack_120 = ppuVar25;
  ppuStack_128 = ppuVar15;
  ppuStack_130 = ppuVar15;
  uVar14 = CONCAT71((int7)((ulonglong)uVar9 >> 8),*(undefined1 *)((longlong)ppuVar27 + 0x28ef));
LAB_007737f8:
  uVar34 = uVar14 & 0xff;
  iVar23 = (int)uVar34;
  if ((char)uVar14 == '\0') {
    uVar12 = 0x120;
    ppuVar4 = ppuVar27 + 0x4f0;
LAB_00773880:
    ppuVar15 = ppuVar27 + uVar34 * 400 + 0x40;
    auStack_1a0[8] = 0;
    auStack_1a0[9] = 0;
    auStack_1a0[10] = 0;
    auStack_1a0[0xb] = 0;
    auStack_1a0[0xc] = 0;
    auStack_1a0[0xd] = 0;
    auStack_1a0[0xe] = 0;
    auStack_1a0[0xf] = 0;
    auStack_1a0[0] = 0;
    auStack_1a0[1] = 0;
    auStack_1a0[2] = 0;
    auStack_1a0[3] = 0;
    auStack_1a0[4] = 0;
    auStack_1a0[5] = 0;
    auStack_1a0[6] = 0;
    auStack_1a0[7] = 0;
    aiStack_180[0xc] = 0;
    aiStack_180[0xd] = 0;
    aiStack_180[0xe] = 0;
    aiStack_180[0xf] = 0;
    aiStack_180[8] = 0;
    aiStack_180[9] = 0;
    aiStack_180[10] = 0;
    aiStack_180[0xb] = 0;
    aiStack_180[4] = 0;
    aiStack_180[5] = 0;
    aiStack_180[6] = 0;
    aiStack_180[7] = 0;
    aiStack_180[0] = 0;
    aiStack_180[1] = 0;
    aiStack_180[2] = 0;
    aiStack_180[3] = 0;
    aiStack_180[0x10] = 0;
    lVar10 = 0;
    do {
      *(undefined2 *)((longlong)ppuVar15 + lVar10) = 0x31e;
      lVar10 = lVar10 + 2;
    } while (lVar10 != 0x800);
    ppuVar20 = (undefined **)0x480;
    uVar9 = (*(code *)PTR_memset_00799090)(0,0x480);
  }
  else {
    if (iVar23 != 2) {
      if (iVar23 == 1) {
        uVar12 = 0x20;
        ppuVar4 = ppuVar27 + 0x514;
        goto LAB_00773880;
      }
      uVar9 = CONCAT71((int7)(uVar14 >> 8),0xff);
      goto LAB_00773b82;
    }
    auStack_1a0[8] = 0;
    auStack_1a0[9] = 0;
    auStack_1a0[10] = 0;
    auStack_1a0[0xb] = 0;
    auStack_1a0[0xc] = 0;
    auStack_1a0[0xd] = 0;
    auStack_1a0[0xe] = 0;
    auStack_1a0[0xf] = 0;
    auStack_1a0[0] = 0;
    auStack_1a0[1] = 0;
    auStack_1a0[2] = 0;
    auStack_1a0[3] = 0;
    auStack_1a0[4] = 0;
    auStack_1a0[5] = 0;
    auStack_1a0[6] = 0;
    auStack_1a0[7] = 0;
    aiStack_180[0xc] = 0;
    aiStack_180[0xd] = 0;
    aiStack_180[0xe] = 0;
    aiStack_180[0xf] = 0;
    aiStack_180[8] = 0;
    aiStack_180[9] = 0;
    aiStack_180[10] = 0;
    aiStack_180[0xb] = 0;
    aiStack_180[4] = 0;
    aiStack_180[5] = 0;
    aiStack_180[6] = 0;
    aiStack_180[7] = 0;
    aiStack_180[0] = 0;
    aiStack_180[1] = 0;
    aiStack_180[2] = 0;
    aiStack_180[3] = 0;
    aiStack_180[0x10] = 0;
    lVar10 = 0;
    do {
      *(undefined2 *)((longlong)ppuVar27 + lVar10 + 0x1b00) = 0x31e;
      lVar10 = lVar10 + 2;
    } while (lVar10 != 0x800);
    uVar12 = 0x13;
    ppuVar4 = (undefined **)((longlong)ppuVar27 + 0x28f1);
    ppuVar15 = ppuVar27 + 0x360;
    uVar9 = 0x800;
  }
  uVar32 = *(ushort *)((longlong)ppuVar27 + uVar34 * 2 + 0x28e8);
  ppuVar25 = (undefined **)(ulonglong)uVar32;
  uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),0xff);
  ppuVar20 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar20 >> 8),0x1c);
  if (uVar32 <= uVar12) {
    if (ppuVar25 != (undefined **)0x0) {
      ppuVar17 = (undefined **)0x0;
      do {
        if (0xf < (ulonglong)*(byte *)((longlong)ppuVar4 + (longlong)ppuVar17)) goto LAB_00773b82;
        auStack_1a0[*(byte *)((longlong)ppuVar4 + (longlong)ppuVar17)] =
             auStack_1a0[*(byte *)((longlong)ppuVar4 + (longlong)ppuVar17)] + 1;
        ppuVar17 = (undefined **)((longlong)ppuVar17 + 1);
      } while (ppuVar25 != ppuVar17);
    }
    uVar34 = 1;
    bVar38 = false;
    iVar26 = 0;
    iVar13 = 0;
    uVar14 = 0;
    do {
      if (bVar38) {
        uVar29 = uVar14 + (uVar14 < 0x10);
        if (0xf < uVar14) goto LAB_00773991;
      }
      else {
        uVar29 = 0x10 - uVar14;
        if (uVar34 <= 0x10 - uVar14) {
          uVar29 = uVar34;
        }
        if (uVar14 <= uVar29 + uVar14) {
          uVar14 = uVar29 + uVar14;
        }
        if (0xf < uVar14) goto LAB_00773991;
        uVar29 = uVar14 + 1;
      }
      iVar13 = iVar13 + (uint)auStack_1a0[uVar14];
      iVar26 = (iVar26 + (uint)auStack_1a0[uVar14]) * 2;
      aiStack_180[uVar14 + 1] = iVar26;
      bVar38 = true;
      uVar34 = 0;
      uVar14 = uVar29;
    } while( true );
  }
  goto LAB_00773b82;
LAB_00773991:
  if ((iVar26 != 0x10000) &&
     ((uVar9 = CONCAT71((int7)(uVar14 >> 8),1), iVar23 == 2 || (1 < (ushort)iVar13))))
  goto LAB_00773b82;
  if (ppuVar25 != (undefined **)0x0) {
    uVar12 = 0xffff;
    ppuVar17 = (undefined **)0x0;
    do {
      while( true ) {
        ppuVar20 = ppuVar17;
        ppuVar17 = (undefined **)((longlong)ppuVar20 + 1);
        bVar31 = *(byte *)((longlong)ppuVar4 + (longlong)ppuVar20);
        uVar35 = bVar31 & 0xf;
        if ((bVar31 & 0xf) != 0) break;
LAB_00773a71:
        if (ppuVar17 == ppuVar25) goto LAB_00773b39;
      }
      bVar11 = (byte)uVar35;
      uVar32 = (ushort)((uint)(aiStack_180[uVar35] << (-bVar11 & 0x1f)) >> (-bVar11 & 0x1f));
      uVar32 = uVar32 << 8 | uVar32 >> 8;
      uVar3 = (uVar32 & 0xf0f) << 4 | (uVar32 & 0xf0f0) >> 4;
      uVar3 = (uVar3 >> 2 & 0x3333) + (uVar3 & 0x3333) * 4;
      uVar18 = (uVar3 >> 1 & 0x5555) + (uVar3 & 0x5555) * 2 >> (0x10 - bVar11 & 0x1f);
      aiStack_180[uVar35] = aiStack_180[uVar35] + 1;
      uVar3 = uVar18 & 0xffff;
      uVar14 = (ulonglong)uVar3;
      if (bVar11 < 0xb) {
        if (uVar3 < 0x400) {
          uVar35 = (uint)ppuVar20 | uVar35 << 9;
          ppuVar20 = (undefined **)(ulonglong)uVar35;
          do {
            *(short *)((longlong)ppuVar15 + uVar14 * 2) = (short)uVar35;
            uVar14 = uVar14 + (uint)(1 << bVar11);
          } while (uVar14 < 0x400);
        }
        goto LAB_00773a71;
      }
      uVar14 = (ulonglong)(uVar18 & 0x3ff);
      uVar32 = *(ushort *)((longlong)ppuVar15 + uVar14 * 2);
      if (uVar32 == 0x31e) {
        *(ushort *)((longlong)ppuVar15 + uVar14 * 2) = uVar12;
        uVar32 = uVar12;
        uVar12 = uVar12 - 2;
      }
      uVar3 = uVar3 >> 9;
      uVar14 = (ulonglong)uVar3;
      if (bVar11 != 0xb) {
        cVar28 = (bVar31 & 0xf) - 0xb;
        do {
          uVar33 = ~uVar32 + (ushort)(((uint)uVar14 >> 1 & 1) != 0);
          if (0x23f < uVar33) goto LAB_00773b58;
          uVar32 = *(ushort *)((longlong)ppuVar15 + (ulonglong)uVar33 * 2 + 0x800);
          if (uVar32 == 0) {
            *(ushort *)((longlong)ppuVar15 + (ulonglong)uVar33 * 2 + 0x800) = uVar12;
            uVar32 = uVar12;
            uVar12 = uVar12 - 2;
          }
          else {
          }
          uVar14 = uVar14 >> 1;
          uVar3 = (uint)uVar14;
          cVar28 = cVar28 + -1;
        } while (cVar28 != '\0');
      }
      uVar32 = ~uVar32 + (ushort)((uVar3 >> 1 & 1) != 0);
      if (0x23f < uVar32) {
LAB_00773b58:
        ppuVar20 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar20 >> 8),10);
        uVar9 = CONCAT71((int7)((ulonglong)ppuVar17 >> 8),0xff);
        goto LAB_00773b82;
      }
      *(short *)((longlong)ppuVar15 + (ulonglong)uVar32 * 2 + 0x800) = (short)ppuVar20;
    } while (ppuVar17 < ppuVar25);
  }
LAB_00773b39:
  cVar28 = *(char *)((longlong)ppuVar27 + 0x28ef);
  uVar22 = (undefined7)((ulonglong)ppuVar20 >> 8);
  uVar21 = (undefined7)((ulonglong)ppuStack_130 >> 8);
  if (cVar28 == '\0') {
    *(uint *)(ppuStack_130 + 2) = 0;
    uVar9 = CONCAT71(uVar21,1);
    ppuVar20 = (undefined **)CONCAT71(uVar22,0xc);
    goto LAB_00773b82;
  }
  if (cVar28 == '\x02') {
    *(uint *)(ppuStack_130 + 2) = 0;
    uVar9 = CONCAT71(uVar21,1);
    ppuVar20 = (undefined **)CONCAT71(uVar22,10);
LAB_00773b82:
    auVar44._8_8_ = ppuVar20;
    auVar44._0_8_ = uVar9;
    return auVar44;
  }
  uVar14 = (ulonglong)(byte)(cVar28 - 1U);
  *(byte *)((longlong)ppuVar27 + 0x28ef) = cVar28 - 1U;
  goto LAB_007737f8;
}


