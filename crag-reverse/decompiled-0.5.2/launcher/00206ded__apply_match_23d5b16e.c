// 00206ded apply_match

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
        ppuVar15 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ce8;
        goto LAB_00206ef1;
      }
      if ((auVar40._8_8_ <= uVar14) && (uVar14 <= param_3)) goto LAB_00206ec1;
      goto LAB_00206eff;
    }
  }
  else {
    ppuVar4 = (undefined **)(param_2 - auVar40._8_8_);
    if (param_2 < auVar40._8_8_) {
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c70;
      goto LAB_00206f30;
    }
    if ((CARRY8((ulonglong)param_5,param_3)) || (auVar40._8_8_ < (longlong)param_5 + param_3)) {
      uStack_10 = (code *)0x206eea;
      ppuVar4 = (undefined **)
                (*(code *)PTR_slice_index_fail_00219d80)
                          (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ca0);
    }
    else if (param_5 <= ppuVar4) {
LAB_00206ec1:
      auVar41._0_8_ = (*(code *)PTR_memcpy_00219c60)(param_4,param_5);
      auVar41._8_8_ = param_5;
      return auVar41;
    }
    ppuVar15 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c88;
LAB_00206ef1:
    uStack_10 = (code *)0x206eff;
    (*(code *)PTR_slice_index_fail_00219d80)(ppuVar15,ppuVar4);
LAB_00206eff:
    param_4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cd0;
    uStack_10 = (code *)0x206f12;
    (*(code *)PTR_slice_index_fail_00219d80)
              (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cd0,param_3);
  }
  ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cb8;
LAB_00206f30:
  uVar39 = SUB84(param_4,0);
  uStack_10 = decompress_fast;
  (*(code *)PTR_panic_fmt_0021a010)();
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
LAB_00206f9a:
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
LAB_00206fbe:
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
                                         cn_planes_0_3::OFFSETS + (ulonglong)uVar3 * 2 + 0x54c);
          uVar14 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 + 1);
        } while (*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::cn_planes_0_3::OFFSETS +
                           (ulonglong)uVar3 * 2 + 0x54c) < 0);
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
                                          cn_planes_0_3::OFFSETS + (ulonglong)uVar18 * 2 + 0x54c);
            uVar3 = (uint)(byte)(bVar11 + 1);
          } while (*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::cn_planes_0_3::OFFSETS
                             + (ulonglong)uVar18 * 2 + 0x54c) < 0);
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
            goto LAB_0020710b;
          }
          ppuVar37 = ppuStack_60;
          if (ppuVar17 < ppuVar15) {
            *(char *)((longlong)ppuStack_60 + 1 + (longlong)ppuStack_b8) = (char)uVar5;
            ppuStack_b8 = (undefined **)((longlong)ppuStack_b8 + 2);
            ppuVar4[2] = (undefined *)ppuStack_b8;
            uVar6 = 0;
            if (0x102 < (ulonglong)((longlong)ppuVar15 - (longlong)ppuStack_b8)) {
              if (0xd < uVar34) goto LAB_00206fbe;
            }
            uVar9 = CONCAT71((int7)(uVar29 >> 8),0xc);
            uStack_40 = (uint)uVar29;
            goto LAB_00207306;
          }
        }
        else {
        }
        ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b80;
        pcStack_98 = transfer;
        uVar39 = (*(code *)PTR_panic_bounds_check_0021a020)();
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
            ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d00;
            ppuVar16 = (undefined **)0x1;
            ppuVar27 = (undefined **)((longlong)ppuVar37 - 1U);
            pcStack_98 = (code *)&uStack_10;
            goto LAB_002077a1;
          }
          pcStack_98 = (code *)&uStack_10;
          if (ppuVar16 < ppuVar37) goto LAB_002076d8;
          pcStack_98 = (code *)&uStack_10;
          if (ppuVar15 < ppuVar16) goto LAB_002076d8;
          pcStack_100 = (code *)0x207408;
          pcStack_98 = (code *)&uStack_10;
          uVar39 = (*(code *)PTR_memset_00219d00)();
          ppuVar4 = (undefined **)((longlong)ppuVar16 - 1);
          uVar3 = (uint)param_5 & 3;
          puVar7 = &switchD_00207423::switchdataD_0012f4e8;
          uVar35 = (&switchD_00207423::switchdataD_0012f4e8)[uVar3];
          ppuVar20 = ppuVar16;
          ppuVar37 = ppuVar16;
          switch(uVar3) {
          case 0:
            goto switchD_00207423_caseD_0;
          case 1:
            goto switchD_00207423_caseD_1;
          case 2:
            goto switchD_00207423_caseD_2;
          }
          goto switchD_00207423_caseD_3;
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
          if (ppuVar30 <= ppuVar37) goto LAB_002075a1;
          ppuStack_d8 = ppuVar25;
          ppuStack_d0 = param_5;
          ppuStack_c8 = ppuVar17;
          pcStack_98 = (code *)&uStack_10;
          goto LAB_00207467;
        }
        pcStack_98 = (code *)&uStack_10;
        if (ppuVar30 <= ppuVar37) goto LAB_002075a1;
        lVar10 = (longlong)ppuVar37 + (longlong)ppuVar17;
        ppuVar20 = (undefined **)(lVar10 + 3);
        ppuVar16 = (undefined **)0x0;
        goto LAB_002074ea;
      }
LAB_0020710b:
      uStack_40 = (uint)uVar29 & 0x1ff;
      uVar21 = (undefined7)(uVar29 >> 8);
      if (uStack_40 == 0x100) {
        uStack_40 = 0x100;
        uVar9 = CONCAT71(uVar21,0x14);
        goto LAB_00206f9a;
      }
      uVar6 = CONCAT71((int7)(uVar5 >> 8),0xff);
      if (0x11d < uStack_40) {
        uVar9 = CONCAT71(uVar21,0x21);
        goto LAB_00207306;
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
      bVar31 = (&DAT_00114900)[uVar3];
      uStack_40 = (uint)*(ushort *)(&DAT_0012f56e + (ulonglong)uVar3 * 2);
      if (0xffffffeb < uVar3 - 0x1c) {
        uVar3 = (uint)puVar36;
        puVar36 = (undefined *)((ulonglong)puVar36 >> (bVar31 & 0x3f));
        uVar35 = uVar35 - bVar31;
        uStack_40 = (~(uint)(-1L << (bVar31 & 0x3f)) & uVar3) + uStack_40;
      }
      uVar3 = (uint)*(short *)(&UNK_001303e4 + (ulonglong)((uint)puVar36 & 0x3ff) * 2);
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
                   (uint)(int)*(short *)(
                                        "user-provided comparison function does not correctly implement a total order"
                                        + (ulonglong)uVar19 * 2 + 0x4c);
          uVar18 = (uint)(byte)((char)uVar3 + 1);
        } while (*(short *)(
                           "user-provided comparison function does not correctly implement a total order"
                           + (ulonglong)uVar19 * 2 + 0x4c) < 0);
      }
      else {
        uVar3 = uVar3 >> 9;
      }
      puVar36 = (undefined *)((ulonglong)puVar36 >> ((byte)uVar3 & 0x3f));
      uVar18 = (uint)uVar29 & 0x1ff;
      uVar35 = uVar35 - uVar3;
      if (0x1d < uVar18) {
        uVar9 = CONCAT71((int7)(uVar29 >> 8),0x22);
        goto LAB_00207306;
      }
      bVar31 = (byte)uVar29 >> 1;
      bVar31 = (bVar31 - 1) + (bVar31 == 0);
      uVar12 = *(ushort *)(&DAT_0012f528 + (ulonglong)uVar18 * 2);
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
        goto LAB_00207306;
      }
      uStack_88 = (ulonglong)uStack_40;
      pcStack_98 = (code *)0x2072c7;
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
LAB_00207306:
  *param_5 = puVar36;
  *(uint *)(param_5 + 1) = uVar35;
  *(int *)((longlong)param_5 + 0xc) = (int)ppuVar25;
  *(uint *)(param_5 + 2) = uStack_40;
  *(byte *)((longlong)param_5 + 0x14) = bVar31;
  auVar42._8_8_ = uVar9;
  auVar42._0_8_ = uVar6;
  return auVar42;
LAB_002074ea:
  do {
    pcStack_98 = (code *)&uStack_10;
    if (ppuVar15 <= (undefined **)((longlong)ppuVar37 + (longlong)ppuVar16 + 3U)) goto LAB_002076a6;
    ppuVar24 = (undefined **)((longlong)ppuVar16 + (longlong)ppuVar4 + 3U & (ulonglong)ppuVar25);
    pcStack_98 = (code *)&uStack_10;
    if (ppuVar15 <= ppuVar24) goto LAB_002076bf;
    ppuVar27 = (undefined **)((longlong)ppuVar16 + (longlong)ppuVar4 & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d60;
      pcStack_98 = (code *)&uStack_10;
      goto LAB_002077a1;
    }
    *(undefined1 *)(lVar10 + (longlong)ppuVar16) =
         *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
    ppuVar27 = (undefined **)((longlong)ppuVar16 + (longlong)ppuVar4 + 1U & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d78;
      pcStack_98 = (code *)&uStack_10;
      goto LAB_002077a1;
    }
    ppuVar8 = (undefined **)((longlong)ppuVar37 + (longlong)ppuVar16 + 1);
    if (ppuVar15 <= ppuVar8) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d90;
LAB_00207747:
      ppuVar27 = ppuVar8;
      pcStack_98 = (code *)&uStack_10;
      goto LAB_002077a1;
    }
    *(undefined1 *)(lVar10 + 1 + (longlong)ppuVar16) =
         *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
    ppuVar27 = (undefined **)((longlong)ppuVar16 + (longlong)ppuVar4 + 2U & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218da8;
      pcStack_98 = (code *)&uStack_10;
      goto LAB_002077a1;
    }
    ppuVar8 = (undefined **)((longlong)ppuVar37 + (longlong)ppuVar16 + 2);
    if (ppuVar15 <= ppuVar8) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218dc0;
      goto LAB_00207747;
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
  goto LAB_002075a1;
  while( true ) {
    pcStack_100 = (code *)0x2074b0;
    uVar39 = (*(code *)PTR_memmove_00219fb0)(ppuStack_c8);
    ppuVar37 = (undefined **)((longlong)ppuVar37 + 4);
    ppuVar4 = (undefined **)((longlong)ppuVar25 + 4);
    if (ppuVar30 <= ppuVar37) break;
LAB_00207467:
    ppuVar25 = ppuVar4;
    lStack_e8 = (longlong)ppuVar25 + 3;
    uStack_e0 = 0;
    pcStack_100 = (code *)0x20748a;
    ppuStack_f0 = ppuVar25;
    lVar10 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>_0021ad50)();
    ppuVar20 = (undefined **)((longlong)ppuVar20 - lVar10);
    if ((undefined **)((longlong)ppuVar15 - (longlong)ppuVar20) < ppuVar37) {
      pcStack_100 = (code *)0x2076a6;
      uVar39 = (*(code *)PTR_panic_fmt_0021a010)
                         ((undefined **)((longlong)ppuVar15 - (longlong)ppuVar20),
                          &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ef8);
LAB_002076a6:
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d30;
      goto LAB_002076b4;
    }
  }
  ppuVar4 = (undefined **)((longlong)ppuVar25 + 4);
  param_5 = ppuStack_d0;
  ppuVar25 = ppuStack_d8;
  ppuVar17 = ppuStack_c8;
LAB_002075a1:
  uVar3 = (uint)param_5 & 3;
  puVar7 = &switchD_00207423::switchdataD_0012f4e8;
  uVar35 = (&switchD_00207423::switchdataD_0012f4e8)[uVar3];
  switch(uVar3) {
  case 0:
    goto switchD_00207423_caseD_0;
  case 1:
switchD_00207423_caseD_1:
    ppuVar16 = (undefined **)
               ((longlong)&switchD_00207423::switchdataD_0012f4e8 + (longlong)(int)uVar35);
    puVar7 = &switchD_00207423::switchdataD_0012f4e8;
    ppuVar27 = (undefined **)((ulonglong)ppuVar4 & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218dd8;
LAB_00207792:
      ppuVar4 = ppuVar27;
      goto LAB_002077a1;
    }
    if (ppuVar37 < ppuVar15) {
LAB_00207676:
      puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar7 >> 8),
                                *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27));
      *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar37) =
           *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
switchD_00207423_caseD_0:
      auVar43._8_8_ = ppuVar20;
      auVar43._0_8_ = puVar7;
      return auVar43;
    }
    ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218df0;
    ppuVar4 = ppuVar27;
    ppuVar27 = ppuVar37;
    break;
  case 2:
switchD_00207423_caseD_2:
    puVar7 = (uint *)((longlong)ppuVar37 + 1);
    if (ppuVar15 <= puVar7) goto LAB_002076ee;
    ppuVar16 = (undefined **)((longlong)ppuVar4 + 1U & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar16) {
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e20;
LAB_002076cd:
      do {
        pcStack_100 = (code *)0x2076d8;
        (*(code *)PTR_panic_00219ca8)(uVar39,ppuVar4);
LAB_002076d8:
        pcStack_100 = (code *)0x2076ee;
        uVar39 = (*(code *)PTR_slice_index_fail_00219d80)
                           (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d18,ppuVar15);
LAB_002076ee:
        ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e08;
LAB_002076b4:
        pcStack_100 = (code *)0x2076bf;
        uVar39 = (*(code *)PTR_panic_00219ca8)(uVar39,ppuVar4);
LAB_002076bf:
        ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d48;
      } while( true );
    }
    ppuVar27 = (undefined **)((ulonglong)ppuVar4 & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e38;
      goto LAB_00207792;
    }
    if (ppuVar37 < ppuVar15) {
LAB_00207668:
      ppuVar20 = (undefined **)
                 CONCAT71((int7)((ulonglong)ppuVar20 >> 8),
                          *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27));
      *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar37) =
           *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
      ppuVar27 = ppuVar16;
      ppuVar37 = (undefined **)puVar7;
      goto LAB_00207676;
    }
    ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e50;
    ppuVar4 = ppuVar27;
    ppuVar27 = ppuVar37;
    break;
  case 3:
switchD_00207423_caseD_3:
    puVar7 = (uint *)((longlong)ppuVar37 + 2);
    if (ppuVar15 <= puVar7) {
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e68;
      goto LAB_002076b4;
    }
    ppuVar16 = (undefined **)((longlong)ppuVar4 + 2U & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar16) {
      ppuVar4 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e80;
      goto LAB_002076cd;
    }
    ppuVar27 = (undefined **)((ulonglong)ppuVar4 & (ulonglong)ppuVar25);
    if (ppuVar15 <= ppuVar27) {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e98;
      goto LAB_002077a1;
    }
    if (ppuVar37 < ppuVar15) {
      ppuVar20 = (undefined **)
                 CONCAT71((int7)((ulonglong)ppuVar20 >> 8),
                          *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27));
      *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar37) =
           *(undefined1 *)((longlong)ppuVar17 + (longlong)ppuVar27);
      ppuVar27 = (undefined **)((longlong)ppuVar4 + 1U & (ulonglong)ppuVar25);
      if (ppuVar15 <= ppuVar27) {
        ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ec8;
        goto LAB_00207792;
      }
      ppuVar37 = (undefined **)((longlong)ppuVar37 + 1);
      if (ppuVar37 < ppuVar15) goto LAB_00207668;
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ee0;
      ppuVar4 = ppuVar27;
      ppuVar27 = ppuVar37;
    }
    else {
      ppuVar20 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218eb0;
      ppuVar27 = ppuVar37;
    }
  }
  ppuVar37 = ppuVar27;
LAB_002077a1:
  pcStack_100 = init_tree;
  uVar9 = (*(code *)PTR_panic_bounds_check_0021a020)(ppuVar16,ppuVar20);
  pcStack_100 = (code *)&pcStack_98;
  ppuStack_108 = ppuVar37;
  ppuStack_110 = ppuVar17;
  ppuStack_118 = ppuVar4;
  ppuStack_120 = ppuVar25;
  ppuStack_128 = ppuVar15;
  ppuStack_130 = ppuVar15;
  uVar14 = CONCAT71((int7)((ulonglong)uVar9 >> 8),*(undefined1 *)((longlong)ppuVar27 + 0x28ef));
LAB_002077c8:
  uVar34 = uVar14 & 0xff;
  iVar23 = (int)uVar34;
  if ((char)uVar14 == '\0') {
    uVar12 = 0x120;
    ppuVar4 = ppuVar27 + 0x4f0;
LAB_00207850:
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
    uVar9 = (*(code *)PTR_memset_00219d00)(0,0x480);
  }
  else {
    if (iVar23 != 2) {
      if (iVar23 == 1) {
        uVar12 = 0x20;
        ppuVar4 = ppuVar27 + 0x514;
        goto LAB_00207850;
      }
      uVar9 = CONCAT71((int7)(uVar14 >> 8),0xff);
      goto LAB_00207b52;
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
        if (0xf < (ulonglong)*(byte *)((longlong)ppuVar4 + (longlong)ppuVar17)) goto LAB_00207b52;
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
        if (0xf < uVar14) goto LAB_00207961;
      }
      else {
        uVar29 = 0x10 - uVar14;
        if (uVar34 <= 0x10 - uVar14) {
          uVar29 = uVar34;
        }
        if (uVar14 <= uVar29 + uVar14) {
          uVar14 = uVar29 + uVar14;
        }
        if (0xf < uVar14) goto LAB_00207961;
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
  goto LAB_00207b52;
LAB_00207961:
  if ((iVar26 != 0x10000) &&
     ((uVar9 = CONCAT71((int7)(uVar14 >> 8),1), iVar23 == 2 || (1 < (ushort)iVar13))))
  goto LAB_00207b52;
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
LAB_00207a41:
        if (ppuVar17 == ppuVar25) goto LAB_00207b09;
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
        goto LAB_00207a41;
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
          if (0x23f < uVar33) goto LAB_00207b28;
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
LAB_00207b28:
        ppuVar20 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar20 >> 8),10);
        uVar9 = CONCAT71((int7)((ulonglong)ppuVar17 >> 8),0xff);
        goto LAB_00207b52;
      }
      *(short *)((longlong)ppuVar15 + (ulonglong)uVar32 * 2 + 0x800) = (short)ppuVar20;
    } while (ppuVar17 < ppuVar25);
  }
LAB_00207b09:
  cVar28 = *(char *)((longlong)ppuVar27 + 0x28ef);
  uVar22 = (undefined7)((ulonglong)ppuVar20 >> 8);
  uVar21 = (undefined7)((ulonglong)ppuStack_130 >> 8);
  if (cVar28 == '\0') {
    *(uint *)(ppuStack_130 + 2) = 0;
    uVar9 = CONCAT71(uVar21,1);
    ppuVar20 = (undefined **)CONCAT71(uVar22,0xc);
    goto LAB_00207b52;
  }
  if (cVar28 == '\x02') {
    *(uint *)(ppuStack_130 + 2) = 0;
    uVar9 = CONCAT71(uVar21,1);
    ppuVar20 = (undefined **)CONCAT71(uVar22,10);
LAB_00207b52:
    auVar44._8_8_ = ppuVar20;
    auVar44._0_8_ = uVar9;
    return auVar44;
  }
  uVar14 = (ulonglong)(byte)(cVar28 - 1U);
  *(byte *)((longlong)ppuVar27 + 0x28ef) = cVar28 - 1U;
  goto LAB_002077c8;
}


