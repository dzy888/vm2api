// 000b25eb decompress_fast

/* miniz_oxide[d073f249698f1019]::inflate::core::decompress_fast */

undefined1  [16] __rustcall
miniz_oxide[d073f249698f1019]::inflate::core::decompress_fast
          (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
          ulonglong *param_5,undefined8 param_6)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  undefined **ppuVar12;
  uint uVar13;
  uint uVar14;
  undefined7 uVar17;
  ulonglong uVar15;
  undefined8 extraout_RDX;
  undefined **ppuVar16;
  undefined7 uVar18;
  int iVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  int iVar22;
  undefined **ppuVar23;
  char cVar24;
  ulonglong uVar25;
  undefined **ppuVar26;
  byte bVar27;
  ushort uVar28;
  ushort uVar29;
  ulonglong uVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  uint uVar34;
  ulonglong uVar35;
  undefined **ppuVar36;
  bool bVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ushort auStack_198 [16];
  int aiStack_178 [20];
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  code *pcStack_f8;
  undefined **ppuStack_e8;
  longlong lStack_e0;
  undefined1 uStack_d8;
  undefined **ppuStack_d0;
  ulonglong *puStack_c8;
  undefined **ppuStack_c0;
  longlong lStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  code *pcStack_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  ulonglong *local_68;
  undefined4 local_5c;
  undefined **local_58;
  undefined8 *local_50;
  uint local_44;
  uint *local_40;
  uint local_38;
  undefined1 local_31;
  
  uVar35 = *param_5;
  uVar34 = (uint)param_5[1];
  uVar25 = (ulonglong)uVar34;
  ppuVar21 = (undefined **)(ulonglong)*(uint *)((longlong)param_5 + 0xc);
  ppuVar33 = (undefined **)param_3[1];
  ppuVar31 = (undefined **)param_3[2];
  bVar27 = *(byte *)((longlong)param_5 + 0x14);
  uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),0xc);
  if ((ulonglong)param_2[1] < 0xe || (ulonglong)((longlong)ppuVar33 - (longlong)ppuVar31) < 0x103) {
    local_38 = (uint)param_5[2];
LAB_000b264a:
    uVar4 = 0;
  }
  else {
    local_40 = (uint *)*param_2;
    local_58 = (undefined **)*param_3;
    uVar30 = param_2[1];
    local_88 = param_6;
    local_70 = param_3;
    local_68 = param_5;
    local_5c = param_4;
    local_50 = param_2;
LAB_000b266e:
    do {
      uVar34 = (uint)uVar25;
      if (uVar34 < 0x1e) {
        uVar2 = *local_40;
        uVar30 = uVar30 - 4;
        local_40 = local_40 + 1;
        *local_50 = local_40;
        local_50[1] = uVar30;
        uVar35 = uVar35 | (ulonglong)uVar2 << ((byte)uVar25 & 0x3f);
        uVar34 = uVar34 | 0x20;
      }
      uVar2 = (uint)uVar35 & 0x3ff;
      uVar3 = (ulonglong)uVar2;
      uVar13 = (uint)*(short *)(param_1 + 0x200 + uVar3 * 2);
      uVar15 = (ulonglong)uVar13;
      if ((int)uVar13 < 0) {
        uVar25 = CONCAT71((uint7)(uint3)(uVar2 >> 8),0xb);
        do {
          uVar3 = uVar25;
          uVar2 = ~(uint)uVar15 +
                  (uint)((uVar35 >> ((ulonglong)((int)uVar3 - 1U & 0xff) & 0x3f) & 1) != 0);
          if (0x23f < uVar2) {
            uVar15 = 0x7fff;
            break;
          }
          uVar2 = (uint)*(short *)(param_1 + 0xa00 + (ulonglong)uVar2 * 2);
          uVar15 = (ulonglong)uVar2;
          uVar25 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 + 1);
        } while ((int)uVar2 < 0);
        uVar13 = (uint)(byte)uVar3;
      }
      else {
        uVar13 = uVar13 >> 9;
      }
      uVar35 = uVar35 >> ((byte)uVar13 & 0x3f);
      uVar34 = uVar34 - uVar13;
      uVar25 = (ulonglong)uVar34;
      ppuVar12 = ppuVar31;
      if (((uint)uVar15 >> 8 & 1) == 0) {
        uVar2 = (uint)*(short *)(param_1 + 0x200 + (ulonglong)((uint)uVar35 & 0x3ff) * 2);
        uVar3 = (ulonglong)uVar2;
        if ((int)uVar2 < 0) {
          uVar2 = 0xb;
          do {
            bVar9 = (byte)uVar2;
            uVar2 = ~(uint)uVar3 +
                    (uint)((uVar35 >> ((ulonglong)(uVar2 - 1 & 0xff) & 0x3f) & 1) != 0);
            if (0x23f < uVar2) {
              uVar3 = 0x7fff;
              break;
            }
            uVar13 = (uint)*(short *)(param_1 + 0xa00 + (ulonglong)uVar2 * 2);
            uVar3 = (ulonglong)uVar13;
            uVar2 = (uint)(byte)(bVar9 + 1);
          } while ((int)uVar13 < 0);
          ppuVar36 = (undefined **)(ulonglong)bVar9;
          param_3 = local_70;
        }
        else {
          ppuVar36 = (undefined **)(ulonglong)(uVar2 >> 9);
        }
        uVar35 = uVar35 >> ((byte)ppuVar36 & 0x3f);
        if (ppuVar31 < ppuVar33) {
          uVar34 = uVar34 - (int)ppuVar36;
          uVar25 = (ulonglong)uVar34;
          *(char *)((longlong)local_58 + (longlong)ppuVar31) = (char)uVar15;
          ppuVar12 = (undefined **)((longlong)ppuVar31 + 1);
          param_3[2] = ppuVar12;
          if (((uint)uVar3 >> 8 & 1) != 0) {
            uVar15 = uVar3;
            goto LAB_000b27bb;
          }
          ppuVar36 = local_58;
          if (ppuVar12 < ppuVar33) {
            *(char *)((longlong)local_58 + 1 + (longlong)ppuVar31) = (char)uVar3;
            ppuVar31 = (undefined **)((longlong)ppuVar31 + 2);
            param_3[2] = ppuVar31;
            uVar4 = 0;
            if (0x102 < (ulonglong)((longlong)ppuVar33 - (longlong)ppuVar31)) {
              if (0xd < uVar30) goto LAB_000b266e;
            }
            uVar7 = CONCAT71((int7)(uVar15 >> 8),0xc);
            local_38 = (uint)uVar15;
            goto LAB_000b29b6;
          }
        }
        else {
        }
        ppuVar32 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ac0;
        pcStack_90 = transfer;
        uVar38 = (*(code *)PTR_panic_bounds_check_000c3dd8)();
        uVar30 = (longlong)ppuVar32 - (longlong)ppuVar36;
        if (ppuVar32 <= ppuVar36) {
          uVar30 = (longlong)ppuVar36 - (longlong)ppuVar32;
        }
        bVar37 = (undefined **)((longlong)param_5 + (longlong)ppuVar32 + -3) < ppuVar33;
        ppuVar23 = (undefined **)(((ulonglong)param_5 & 0xfffffffffffffffc) + (longlong)ppuVar36);
        lStack_b8 = param_1;
        ppuStack_b0 = ppuVar31;
        ppuStack_a8 = ppuVar33;
        uStack_a0 = uVar25;
        uStack_98 = uVar35;
        if (((ppuVar32 < ppuVar36) && (bVar37 || ppuVar21 == (undefined **)0xffffffffffffffff)) &&
           (uVar30 == 1)) {
          if (ppuVar33 <= (undefined **)((longlong)ppuVar36 - 1U)) {
            ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c40;
            ppuVar31 = (undefined **)0x1;
            ppuVar23 = (undefined **)((longlong)ppuVar36 - 1U);
            pcStack_90 = (code *)((longlong)register0x00000020 + -8);
            goto LAB_000b2e51;
          }
          pcStack_90 = (code *)((longlong)register0x00000020 + -8);
          if (ppuVar23 < ppuVar36) goto LAB_000b2d88;
          pcStack_90 = (code *)((longlong)register0x00000020 + -8);
          if (ppuVar33 < ppuVar23) goto LAB_000b2d88;
          pcStack_f8 = (code *)0xb2ab8;
          pcStack_90 = (code *)((longlong)register0x00000020 + -8);
          uVar38 = (*(code *)PTR_memset_000c3cd8)();
          ppuVar32 = (undefined **)((longlong)ppuVar23 - 1);
          uVar2 = (uint)param_5 & 3;
          puVar5 = &switchD_000b2ad3::switchdataD_00016db8;
          uVar34 = (&switchD_000b2ad3::switchdataD_00016db8)[uVar2];
          ppuVar16 = ppuVar23;
          ppuVar36 = ppuVar23;
          switch(uVar2) {
          case 0:
            goto switchD_000b2ad3_caseD_0;
          case 1:
            goto switchD_000b2ad3_caseD_1;
          case 2:
            goto switchD_000b2ad3_caseD_2;
          }
          goto switchD_000b2ad3_caseD_3;
        }
        ppuVar16 = (undefined **)((longlong)ppuVar33 - 3);
        ppuVar26 = (undefined **)0x0;
        if ((undefined **)0x2 < ppuVar33) {
          ppuVar26 = ppuVar16;
        }
        if (ppuVar23 <= ppuVar26) {
          ppuVar26 = ppuVar23;
        }
        if (!((ppuVar36 <= ppuVar32 || !bVar37 && ppuVar21 != (undefined **)0xffffffffffffffff) ||
             (ulonglong)((longlong)ppuVar36 - (longlong)ppuVar32) < 4)) {
          pcStack_90 = (code *)((longlong)register0x00000020 + -8);
          if (ppuVar26 <= ppuVar36) goto LAB_000b2c51;
          ppuStack_d0 = ppuVar21;
          puStack_c8 = param_5;
          ppuStack_c0 = ppuVar12;
          pcStack_90 = (code *)((longlong)register0x00000020 + -8);
          goto LAB_000b2b17;
        }
        pcStack_90 = (code *)((longlong)register0x00000020 + -8);
        if (ppuVar26 <= ppuVar36) goto LAB_000b2c51;
        lVar8 = (longlong)ppuVar36 + (longlong)ppuVar12;
        ppuVar16 = (undefined **)(lVar8 + 3);
        ppuVar31 = (undefined **)0x0;
        goto LAB_000b2b9a;
      }
LAB_000b27bb:
      local_38 = (uint)uVar15 & 0x1ff;
      uVar17 = (undefined7)(uVar15 >> 8);
      if (local_38 == 0x100) {
        local_38 = 0x100;
        uVar7 = CONCAT71(uVar17,0x14);
        goto LAB_000b264a;
      }
      uVar4 = CONCAT71((int7)(uVar3 >> 8),0xff);
      if (0x11d < local_38) {
        uVar7 = CONCAT71(uVar17,0x21);
        goto LAB_000b29b6;
      }
      uVar2 = (uint)uVar15 - 1 & 0x1f;
      if (uVar34 < 0x1e) {
        uVar13 = *local_40;
        uVar30 = uVar30 - 4;
        local_40 = local_40 + 1;
        *local_50 = local_40;
        local_50[1] = uVar30;
        uVar35 = uVar35 | (ulonglong)uVar13 << ((byte)uVar34 & 0x3f);
        uVar34 = uVar34 | 0x20;
      }
      bVar27 = ""[uVar2];
      local_38 = (uint)*(ushort *)(&DAT_00016e3e + (ulonglong)uVar2 * 2);
      if (0xffffffeb < uVar2 - 0x1c) {
        uVar2 = (uint)uVar35;
        uVar35 = uVar35 >> (bVar27 & 0x3f);
        uVar34 = uVar34 - bVar27;
        local_38 = (~(uint)(-1L << (bVar27 & 0x3f)) & uVar2) + local_38;
      }
      uVar2 = (uint)*(short *)(param_1 + 0xe80 + (ulonglong)((uint)uVar35 & 0x3ff) * 2);
      uVar15 = (ulonglong)uVar2;
      if ((int)uVar2 < 0) {
        uVar13 = 0xb;
        do {
          uVar2 = uVar13;
          uVar13 = ~(uint)uVar15 +
                   (uint)((uVar35 >> ((ulonglong)(uVar2 - 1 & 0xff) & 0x3f) & 1) != 0);
          if (0x23f < uVar13) {
            uVar15 = 0x7fff;
            break;
          }
          uVar14 = (uint)*(short *)(param_1 + 0x1680 + (ulonglong)uVar13 * 2);
          uVar15 = (ulonglong)uVar14;
          uVar13 = (uint)(byte)((char)uVar2 + 1);
        } while ((int)uVar14 < 0);
      }
      else {
        uVar2 = uVar2 >> 9;
      }
      uVar35 = uVar35 >> ((byte)uVar2 & 0x3f);
      uVar13 = (uint)uVar15 & 0x1ff;
      uVar34 = uVar34 - uVar2;
      if (0x1d < uVar13) {
        uVar7 = CONCAT71((int7)(uVar15 >> 8),0x22);
        goto LAB_000b29b6;
      }
      bVar27 = (byte)uVar15 >> 1;
      bVar27 = (bVar27 - 1) + (bVar27 == 0);
      uVar10 = *(ushort *)(&DAT_00016df8 + (ulonglong)uVar13 * 2);
      ppuVar21 = (undefined **)(ulonglong)uVar10;
      if (3 < (byte)uVar15) {
        if (uVar34 < 0x1e) {
          uVar2 = *local_40;
          uVar30 = uVar30 - 4;
          local_40 = local_40 + 1;
          *local_50 = local_40;
          local_50[1] = uVar30;
          uVar35 = uVar35 | (ulonglong)uVar2 << ((byte)uVar34 & 0x3f);
          uVar34 = uVar34 | 0x20;
        }
        uVar2 = (uint)uVar35;
        uVar35 = uVar35 >> (bVar27 & 0x3f);
        uVar34 = uVar34 - bVar27;
        uVar2 = (~(uint)(-1L << (bVar27 & 0x3f)) & uVar2) + (uint)uVar10;
        uVar15 = (ulonglong)uVar2;
        ppuVar21 = (undefined **)(ulonglong)uVar2;
      }
      uVar25 = (ulonglong)uVar34;
      local_44 = (uint)ppuVar21;
      if ((ppuVar33 < ppuVar21) || (((byte)local_5c >> 2 & ppuVar12 < ppuVar21) != 0)) {
        uVar7 = CONCAT71((int7)(uVar15 >> 8),0x1e);
        goto LAB_000b29b6;
      }
      local_80 = (ulonglong)local_38;
      pcStack_90 = (code *)0xb2977;
      local_78 = uVar30;
      local_31 = bVar27;
      apply_match(local_58,ppuVar33,ppuVar12,ppuVar21,local_80,local_88);
      ppuVar31 = (undefined **)((longlong)ppuVar12 + local_80);
      local_70[2] = ppuVar31;
      uVar4 = 0;
      param_5 = local_68;
      bVar27 = local_31;
      if ((ulonglong)((longlong)ppuVar33 - (longlong)ppuVar31) < 0x103) break;
      ppuVar21 = (undefined **)(ulonglong)local_44;
      param_3 = local_70;
      uVar30 = local_78;
    } while (0xd < local_78);
    ppuVar21 = (undefined **)(ulonglong)local_44;
    uVar7 = CONCAT71((int7)((ulonglong)extraout_RDX >> 8),0xc);
  }
LAB_000b29b6:
  *param_5 = uVar35;
  *(uint *)(param_5 + 1) = uVar34;
  *(int *)((longlong)param_5 + 0xc) = (int)ppuVar21;
  *(uint *)(param_5 + 2) = local_38;
  *(byte *)((longlong)param_5 + 0x14) = bVar27;
  auVar39._8_8_ = uVar7;
  auVar39._0_8_ = uVar4;
  return auVar39;
LAB_000b2b9a:
  do {
    pcStack_90 = (code *)((longlong)register0x00000020 + -8);
    if (ppuVar33 <= (undefined **)((longlong)ppuVar36 + (longlong)ppuVar31 + 3U)) goto LAB_000b2d56;
    ppuVar20 = (undefined **)((longlong)ppuVar31 + (longlong)ppuVar32 + 3U & (ulonglong)ppuVar21);
    pcStack_90 = (code *)((longlong)register0x00000020 + -8);
    if (ppuVar33 <= ppuVar20) goto LAB_000b2d6f;
    ppuVar23 = (undefined **)((longlong)ppuVar31 + (longlong)ppuVar32 & (ulonglong)ppuVar21);
    if (ppuVar33 <= ppuVar23) {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ca0;
      pcStack_90 = (code *)((longlong)register0x00000020 + -8);
      goto LAB_000b2e51;
    }
    *(undefined1 *)(lVar8 + (longlong)ppuVar31) =
         *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23);
    ppuVar23 = (undefined **)((longlong)ppuVar31 + (longlong)ppuVar32 + 1U & (ulonglong)ppuVar21);
    if (ppuVar33 <= ppuVar23) {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2cb8;
      pcStack_90 = (code *)((longlong)register0x00000020 + -8);
      goto LAB_000b2e51;
    }
    ppuVar6 = (undefined **)((longlong)ppuVar36 + (longlong)ppuVar31 + 1);
    if (ppuVar33 <= ppuVar6) {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2cd0;
LAB_000b2df7:
      ppuVar23 = ppuVar6;
      pcStack_90 = (code *)((longlong)register0x00000020 + -8);
      goto LAB_000b2e51;
    }
    *(undefined1 *)(lVar8 + 1 + (longlong)ppuVar31) =
         *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23);
    ppuVar23 = (undefined **)((longlong)ppuVar31 + (longlong)ppuVar32 + 2U & (ulonglong)ppuVar21);
    if (ppuVar33 <= ppuVar23) {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ce8;
      pcStack_90 = (code *)((longlong)register0x00000020 + -8);
      goto LAB_000b2e51;
    }
    ppuVar6 = (undefined **)((longlong)ppuVar36 + (longlong)ppuVar31 + 2);
    if (ppuVar33 <= ppuVar6) {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d00;
      goto LAB_000b2df7;
    }
    *(undefined1 *)(lVar8 + 2 + (longlong)ppuVar31) =
         *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23);
    *(undefined1 *)((longlong)ppuVar16 + (longlong)ppuVar31) =
         *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar20);
    lVar1 = (longlong)ppuVar36 + (longlong)ppuVar31;
    ppuVar31 = (undefined **)((longlong)ppuVar31 + 4);
  } while ((undefined **)(lVar1 + 4U) < ppuVar26);
  ppuVar32 = (undefined **)((longlong)ppuVar32 + (longlong)ppuVar31);
  ppuVar36 = (undefined **)((longlong)ppuVar36 + (longlong)ppuVar31);
  pcStack_90 = (code *)((longlong)register0x00000020 + -8);
  goto LAB_000b2c51;
  while( true ) {
    pcStack_f8 = (code *)0xb2b60;
    uVar38 = (*(code *)PTR_memmove_000c3c50)(ppuStack_c0);
    ppuVar36 = (undefined **)((longlong)ppuVar36 + 4);
    ppuVar32 = (undefined **)((longlong)ppuVar31 + 4);
    if (ppuVar26 <= ppuVar36) break;
LAB_000b2b17:
    ppuVar31 = ppuVar32;
    lStack_e0 = (longlong)ppuVar31 + 3;
    uStack_d8 = 0;
    pcStack_f8 = (code *)0xb2b3a;
    ppuStack_e8 = ppuVar31;
    lVar8 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>_000c4700)();
    ppuVar16 = (undefined **)((longlong)ppuVar16 - lVar8);
    if ((undefined **)((longlong)ppuVar33 - (longlong)ppuVar16) < ppuVar36) {
      pcStack_f8 = (code *)0xb2d56;
      uVar38 = (*(code *)PTR_panic_fmt_000c3e90)
                         ((undefined **)((longlong)ppuVar33 - (longlong)ppuVar16),
                          &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e38);
LAB_000b2d56:
      ppuVar31 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c70;
      goto LAB_000b2d64;
    }
  }
  ppuVar32 = (undefined **)((longlong)ppuVar31 + 4);
  param_5 = puStack_c8;
  ppuVar21 = ppuStack_d0;
  ppuVar12 = ppuStack_c0;
LAB_000b2c51:
  uVar2 = (uint)param_5 & 3;
  puVar5 = &switchD_000b2ad3::switchdataD_00016db8;
  uVar34 = (&switchD_000b2ad3::switchdataD_00016db8)[uVar2];
  switch(uVar2) {
  case 0:
    goto switchD_000b2ad3_caseD_0;
  case 1:
switchD_000b2ad3_caseD_1:
    ppuVar31 = (undefined **)
               ((longlong)&switchD_000b2ad3::switchdataD_00016db8 + (longlong)(int)uVar34);
    puVar5 = &switchD_000b2ad3::switchdataD_00016db8;
    ppuVar23 = (undefined **)((ulonglong)ppuVar32 & (ulonglong)ppuVar21);
    if (ppuVar33 <= ppuVar23) {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d18;
LAB_000b2e42:
      ppuVar32 = ppuVar23;
      goto LAB_000b2e51;
    }
    if (ppuVar36 < ppuVar33) {
LAB_000b2d26:
      puVar5 = (uint *)CONCAT71((int7)((ulonglong)puVar5 >> 8),
                                *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23));
      *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar36) =
           *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23);
switchD_000b2ad3_caseD_0:
      auVar40._8_8_ = ppuVar16;
      auVar40._0_8_ = puVar5;
      return auVar40;
    }
    ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d30;
    ppuVar32 = ppuVar23;
    ppuVar23 = ppuVar36;
    break;
  case 2:
switchD_000b2ad3_caseD_2:
    puVar5 = (uint *)((longlong)ppuVar36 + 1);
    if (ppuVar33 <= puVar5) goto LAB_000b2d9e;
    ppuVar31 = (undefined **)((longlong)ppuVar32 + 1U & (ulonglong)ppuVar21);
    if (ppuVar33 <= ppuVar31) {
      ppuVar31 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d60;
LAB_000b2d7d:
      do {
        pcStack_f8 = (code *)0xb2d88;
        (*(code *)PTR_panic_000c3b00)(uVar38,ppuVar31);
LAB_000b2d88:
        pcStack_f8 = (code *)0xb2d9e;
        uVar38 = (*(code *)PTR_slice_index_fail_000c3bb0)
                           (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c58,ppuVar33);
LAB_000b2d9e:
        ppuVar31 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d48;
LAB_000b2d64:
        pcStack_f8 = (code *)0xb2d6f;
        uVar38 = (*(code *)PTR_panic_000c3b00)(uVar38,ppuVar31);
LAB_000b2d6f:
        ppuVar31 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c88;
      } while( true );
    }
    ppuVar23 = (undefined **)((ulonglong)ppuVar32 & (ulonglong)ppuVar21);
    if (ppuVar33 <= ppuVar23) {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d78;
      goto LAB_000b2e42;
    }
    if (ppuVar36 < ppuVar33) {
LAB_000b2d18:
      ppuVar16 = (undefined **)
                 CONCAT71((int7)((ulonglong)ppuVar16 >> 8),
                          *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23));
      *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar36) =
           *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23);
      ppuVar23 = ppuVar31;
      ppuVar36 = (undefined **)puVar5;
      goto LAB_000b2d26;
    }
    ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d90;
    ppuVar32 = ppuVar23;
    ppuVar23 = ppuVar36;
    break;
  case 3:
switchD_000b2ad3_caseD_3:
    puVar5 = (uint *)((longlong)ppuVar36 + 2);
    if (ppuVar33 <= puVar5) {
      ppuVar31 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2da8;
      goto LAB_000b2d64;
    }
    ppuVar31 = (undefined **)((longlong)ppuVar32 + 2U & (ulonglong)ppuVar21);
    if (ppuVar33 <= ppuVar31) {
      ppuVar31 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2dc0;
      goto LAB_000b2d7d;
    }
    ppuVar23 = (undefined **)((ulonglong)ppuVar32 & (ulonglong)ppuVar21);
    if (ppuVar33 <= ppuVar23) {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2dd8;
      goto LAB_000b2e51;
    }
    if (ppuVar36 < ppuVar33) {
      ppuVar16 = (undefined **)
                 CONCAT71((int7)((ulonglong)ppuVar16 >> 8),
                          *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23));
      *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar36) =
           *(undefined1 *)((longlong)ppuVar12 + (longlong)ppuVar23);
      ppuVar23 = (undefined **)((longlong)ppuVar32 + 1U & (ulonglong)ppuVar21);
      if (ppuVar33 <= ppuVar23) {
        ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e08;
        goto LAB_000b2e42;
      }
      ppuVar36 = (undefined **)((longlong)ppuVar36 + 1);
      if (ppuVar36 < ppuVar33) goto LAB_000b2d18;
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e20;
      ppuVar32 = ppuVar23;
      ppuVar23 = ppuVar36;
    }
    else {
      ppuVar16 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2df0;
      ppuVar23 = ppuVar36;
    }
  }
  ppuVar36 = ppuVar23;
LAB_000b2e51:
  pcStack_f8 = init_tree;
  uVar7 = (*(code *)PTR_panic_bounds_check_000c3dd8)(ppuVar31,ppuVar16);
  pcStack_f8 = (code *)&pcStack_90;
  ppuStack_100 = ppuVar36;
  ppuStack_108 = ppuVar12;
  ppuStack_110 = ppuVar32;
  ppuStack_118 = ppuVar21;
  ppuStack_120 = ppuVar33;
  ppuStack_128 = ppuVar33;
  uVar35 = CONCAT71((int7)((ulonglong)uVar7 >> 8),
                    *(undefined1 *)((longlong)&__DT_RELA[0xef].r_offset + (longlong)ppuVar23 + 7U));
LAB_000b2e78:
  uVar25 = uVar35 & 0xff;
  iVar19 = (int)uVar25;
  if ((char)uVar35 == '\0') {
    uVar10 = 0x120;
    ppuVar33 = ppuVar23 + 0x4f0;
LAB_000b2f00:
    ppuVar31 = ppuVar23 + uVar25 * 400 + 0x40;
    auStack_198[8] = 0;
    auStack_198[9] = 0;
    auStack_198[10] = 0;
    auStack_198[0xb] = 0;
    auStack_198[0xc] = 0;
    auStack_198[0xd] = 0;
    auStack_198[0xe] = 0;
    auStack_198[0xf] = 0;
    auStack_198[0] = 0;
    auStack_198[1] = 0;
    auStack_198[2] = 0;
    auStack_198[3] = 0;
    auStack_198[4] = 0;
    auStack_198[5] = 0;
    auStack_198[6] = 0;
    auStack_198[7] = 0;
    aiStack_178[0xc] = 0;
    aiStack_178[0xd] = 0;
    aiStack_178[0xe] = 0;
    aiStack_178[0xf] = 0;
    aiStack_178[8] = 0;
    aiStack_178[9] = 0;
    aiStack_178[10] = 0;
    aiStack_178[0xb] = 0;
    aiStack_178[4] = 0;
    aiStack_178[5] = 0;
    aiStack_178[6] = 0;
    aiStack_178[7] = 0;
    aiStack_178[0] = 0;
    aiStack_178[1] = 0;
    aiStack_178[2] = 0;
    aiStack_178[3] = 0;
    aiStack_178[0x10] = 0;
    lVar8 = 0;
    do {
      *(undefined2 *)((longlong)ppuVar31 + lVar8) = 0x31e;
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0x800);
    ppuVar16 = (undefined **)0x480;
    uVar7 = (*(code *)PTR_memset_000c3cd8)(0,0x480);
  }
  else {
    if (iVar19 != 2) {
      if (iVar19 == 1) {
        uVar10 = 0x20;
        ppuVar33 = ppuVar23 + 0x514;
        goto LAB_000b2f00;
      }
      uVar7 = CONCAT71((int7)(uVar35 >> 8),0xff);
      goto LAB_000b3202;
    }
    auStack_198[8] = 0;
    auStack_198[9] = 0;
    auStack_198[10] = 0;
    auStack_198[0xb] = 0;
    auStack_198[0xc] = 0;
    auStack_198[0xd] = 0;
    auStack_198[0xe] = 0;
    auStack_198[0xf] = 0;
    auStack_198[0] = 0;
    auStack_198[1] = 0;
    auStack_198[2] = 0;
    auStack_198[3] = 0;
    auStack_198[4] = 0;
    auStack_198[5] = 0;
    auStack_198[6] = 0;
    auStack_198[7] = 0;
    aiStack_178[0xc] = 0;
    aiStack_178[0xd] = 0;
    aiStack_178[0xe] = 0;
    aiStack_178[0xf] = 0;
    aiStack_178[8] = 0;
    aiStack_178[9] = 0;
    aiStack_178[10] = 0;
    aiStack_178[0xb] = 0;
    aiStack_178[4] = 0;
    aiStack_178[5] = 0;
    aiStack_178[6] = 0;
    aiStack_178[7] = 0;
    aiStack_178[0] = 0;
    aiStack_178[1] = 0;
    aiStack_178[2] = 0;
    aiStack_178[3] = 0;
    aiStack_178[0x10] = 0;
    lVar8 = 0;
    do {
      *(undefined2 *)((longlong)ppuVar23 + lVar8 + 0x1b00) = 0x31e;
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0x800);
    uVar10 = 0x13;
    ppuVar33 = (undefined **)((longlong)ppuVar23 + 0x28f1);
    ppuVar31 = ppuVar23 + 0x360;
    uVar7 = 0x800;
  }
  uVar28 = *(ushort *)((longlong)ppuVar23 + uVar25 * 2 + 0x28e8);
  ppuVar21 = (undefined **)(ulonglong)uVar28;
  uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),0xff);
  ppuVar16 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar16 >> 8),0x1c);
  if (uVar28 <= uVar10) {
    if (ppuVar21 != (undefined **)0x0) {
      ppuVar12 = (undefined **)0x0;
      do {
        if (0xf < (ulonglong)*(byte *)((longlong)ppuVar33 + (longlong)ppuVar12)) goto LAB_000b3202;
        auStack_198[*(byte *)((longlong)ppuVar33 + (longlong)ppuVar12)] =
             auStack_198[*(byte *)((longlong)ppuVar33 + (longlong)ppuVar12)] + 1;
        ppuVar12 = (undefined **)((longlong)ppuVar12 + 1);
      } while (ppuVar21 != ppuVar12);
    }
    uVar25 = 1;
    bVar37 = false;
    iVar22 = 0;
    iVar11 = 0;
    uVar35 = 0;
    do {
      if (bVar37) {
        uVar30 = uVar35 + (uVar35 < 0x10);
        if (0xf < uVar35) goto LAB_000b3011;
      }
      else {
        uVar30 = 0x10 - uVar35;
        if (uVar25 <= 0x10 - uVar35) {
          uVar30 = uVar25;
        }
        if (uVar35 <= uVar30 + uVar35) {
          uVar35 = uVar30 + uVar35;
        }
        if (0xf < uVar35) goto LAB_000b3011;
        uVar30 = uVar35 + 1;
      }
      iVar11 = iVar11 + (uint)auStack_198[uVar35];
      iVar22 = (iVar22 + (uint)auStack_198[uVar35]) * 2;
      aiStack_178[uVar35 + 1] = iVar22;
      bVar37 = true;
      uVar25 = 0;
      uVar35 = uVar30;
    } while( true );
  }
  goto LAB_000b3202;
LAB_000b3011:
  if ((iVar22 != 0x10000) &&
     ((uVar7 = CONCAT71((int7)(uVar35 >> 8),1), iVar19 == 2 || (1 < (ushort)iVar11))))
  goto LAB_000b3202;
  if (ppuVar21 != (undefined **)0x0) {
    uVar10 = 0xffff;
    ppuVar12 = (undefined **)0x0;
    do {
      while( true ) {
        ppuVar16 = ppuVar12;
        ppuVar12 = (undefined **)((longlong)ppuVar16 + 1);
        bVar27 = *(byte *)((longlong)ppuVar33 + (longlong)ppuVar16);
        uVar34 = bVar27 & 0xf;
        if ((bVar27 & 0xf) != 0) break;
LAB_000b30f1:
        if (ppuVar12 == ppuVar21) goto LAB_000b31b9;
      }
      bVar9 = (byte)uVar34;
      uVar28 = (ushort)((uint)(aiStack_178[uVar34] << (-bVar9 & 0x1f)) >> (-bVar9 & 0x1f));
      uVar28 = uVar28 << 8 | uVar28 >> 8;
      uVar2 = (uVar28 & 0xf0f) << 4 | (uVar28 & 0xf0f0) >> 4;
      uVar2 = (uVar2 >> 2 & 0x3333) + (uVar2 & 0x3333) * 4;
      uVar13 = (uVar2 >> 1 & 0x5555) + (uVar2 & 0x5555) * 2 >> (0x10 - bVar9 & 0x1f);
      aiStack_178[uVar34] = aiStack_178[uVar34] + 1;
      uVar2 = uVar13 & 0xffff;
      uVar35 = (ulonglong)uVar2;
      if (bVar9 < 0xb) {
        if (uVar2 < 0x400) {
          uVar34 = (uint)ppuVar16 | uVar34 << 9;
          ppuVar16 = (undefined **)(ulonglong)uVar34;
          do {
            *(short *)((longlong)ppuVar31 + uVar35 * 2) = (short)uVar34;
            uVar35 = uVar35 + (uint)(1 << bVar9);
          } while (uVar35 < 0x400);
        }
        goto LAB_000b30f1;
      }
      uVar35 = (ulonglong)(uVar13 & 0x3ff);
      uVar28 = *(ushort *)((longlong)ppuVar31 + uVar35 * 2);
      if (uVar28 == 0x31e) {
        *(ushort *)((longlong)ppuVar31 + uVar35 * 2) = uVar10;
        uVar28 = uVar10;
        uVar10 = uVar10 - 2;
      }
      uVar2 = uVar2 >> 9;
      uVar35 = (ulonglong)uVar2;
      if (bVar9 != 0xb) {
        cVar24 = (bVar27 & 0xf) - 0xb;
        do {
          uVar29 = ~uVar28 + (ushort)(((uint)uVar35 >> 1 & 1) != 0);
          if (0x23f < uVar29) goto LAB_000b31d8;
          uVar28 = *(ushort *)((longlong)ppuVar31 + (ulonglong)uVar29 * 2 + 0x800);
          if (uVar28 == 0) {
            *(ushort *)((longlong)ppuVar31 + (ulonglong)uVar29 * 2 + 0x800) = uVar10;
            uVar28 = uVar10;
            uVar10 = uVar10 - 2;
          }
          else {
          }
          uVar35 = uVar35 >> 1;
          uVar2 = (uint)uVar35;
          cVar24 = cVar24 + -1;
        } while (cVar24 != '\0');
      }
      uVar28 = ~uVar28 + (ushort)((uVar2 >> 1 & 1) != 0);
      if (0x23f < uVar28) {
LAB_000b31d8:
        ppuVar16 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar16 >> 8),10);
        uVar7 = CONCAT71((int7)((ulonglong)ppuVar12 >> 8),0xff);
        goto LAB_000b3202;
      }
      *(short *)((longlong)ppuVar31 + (ulonglong)uVar28 * 2 + 0x800) = (short)ppuVar16;
    } while (ppuVar12 < ppuVar21);
  }
LAB_000b31b9:
  cVar24 = *(char *)((longlong)&__DT_RELA[0xef].r_offset + (longlong)ppuVar23 + 7U);
  uVar18 = (undefined7)((ulonglong)ppuVar16 >> 8);
  uVar17 = (undefined7)((ulonglong)ppuStack_128 >> 8);
  if (cVar24 == '\0') {
    *(uint *)(ppuStack_128 + 2) = 0;
    uVar7 = CONCAT71(uVar17,1);
    ppuVar16 = (undefined **)CONCAT71(uVar18,0xc);
    goto LAB_000b3202;
  }
  if (cVar24 == '\x02') {
    *(uint *)(ppuStack_128 + 2) = 0;
    uVar7 = CONCAT71(uVar17,1);
    ppuVar16 = (undefined **)CONCAT71(uVar18,10);
LAB_000b3202:
    auVar41._8_8_ = ppuVar16;
    auVar41._0_8_ = uVar7;
    return auVar41;
  }
  uVar35 = (ulonglong)(byte)(cVar24 - 1U);
  *(byte *)((longlong)&__DT_RELA[0xef].r_offset + (longlong)ppuVar23 + 7U) = cVar24 - 1U;
  goto LAB_000b2e78;
}


