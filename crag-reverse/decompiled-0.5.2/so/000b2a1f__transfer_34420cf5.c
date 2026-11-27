// 000b2a1f transfer

/* miniz_oxide[d073f249698f1019]::inflate::core::transfer */

uint * __rustcall
miniz_oxide[d073f249698f1019]::inflate::core::transfer
          (undefined4 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5
          ,ulonglong param_6,ulonglong param_7)

{
  byte bVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  char cVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  ushort auStack_110 [16];
  int aiStack_f0 [20];
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  code *pcStack_70;
  ulonglong local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  uVar3 = param_4 - param_5;
  if (param_4 <= param_5) {
    uVar3 = param_5 - param_4;
  }
  bVar22 = param_3 <= (param_6 + param_4) - 3;
  uVar9 = (param_6 & 0xfffffffffffffffc) + param_5;
  if (((param_5 <= param_4) || (bVar22 && param_7 != 0xffffffffffffffff)) || (uVar3 != 1)) {
    uVar15 = param_3 - 3;
    uVar3 = 0;
    if (2 < param_3) {
      uVar3 = uVar15;
    }
    if (uVar9 <= uVar3) {
      uVar3 = uVar9;
    }
    if ((param_5 <= param_4 || bVar22 && param_7 != 0xffffffffffffffff) || param_5 - param_4 < 4) {
      if (param_5 < uVar3) {
        lVar4 = param_5 + param_2;
        uVar9 = 0;
        do {
          if (param_3 <= param_5 + uVar9 + 3) goto LAB_000b2d56;
          uVar15 = uVar9 + param_4 + 3 & param_7;
          if (param_3 <= uVar15) goto LAB_000b2d6f;
          uVar13 = uVar9 + param_4 & param_7;
          if (param_3 <= uVar13) {
            ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ca0;
            goto LAB_000b2e51;
          }
          *(undefined1 *)(lVar4 + uVar9) = *(undefined1 *)(param_2 + uVar13);
          uVar13 = uVar9 + param_4 + 1 & param_7;
          if (param_3 <= uVar13) {
            ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2cb8;
            goto LAB_000b2e51;
          }
          uVar16 = param_5 + uVar9 + 1;
          if (param_3 <= uVar16) {
            ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2cd0;
LAB_000b2df7:
            uVar13 = uVar16;
            goto LAB_000b2e51;
          }
          *(undefined1 *)(lVar4 + 1 + uVar9) = *(undefined1 *)(param_2 + uVar13);
          uVar13 = uVar9 + param_4 + 2 & param_7;
          if (param_3 <= uVar13) {
            ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2ce8;
            goto LAB_000b2e51;
          }
          uVar16 = param_5 + uVar9 + 2;
          if (param_3 <= uVar16) {
            ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d00;
            goto LAB_000b2df7;
          }
          *(undefined1 *)(lVar4 + 2 + uVar9) = *(undefined1 *)(param_2 + uVar13);
          *(undefined1 *)(lVar4 + 3 + uVar9) = *(undefined1 *)(param_2 + uVar15);
          lVar21 = param_5 + uVar9;
          uVar9 = uVar9 + 4;
        } while (lVar21 + 4U < uVar3);
        param_4 = param_4 + uVar9;
        param_5 = param_5 + uVar9;
      }
    }
    else if (param_5 < uVar3) {
      local_48 = param_7;
      local_40 = param_6;
      local_38 = param_2;
      do {
        uVar9 = param_4;
        local_58 = uVar9 + 3;
        local_50 = 0;
        pcStack_70 = (code *)0xb2b3a;
        local_60 = uVar9;
        lVar4 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>_000c4700)
                          ();
        uVar15 = uVar15 - lVar4;
        if (param_3 - uVar15 < param_5) {
          pcStack_70 = (code *)0xb2d56;
          param_1 = (*(code *)PTR_panic_fmt_000c3e90)
                              (param_3 - uVar15,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e38);
LAB_000b2d56:
          ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c70;
          goto LAB_000b2d64;
        }
        pcStack_70 = (code *)0xb2b60;
        param_1 = (*(code *)PTR_memmove_000c3c50)(local_38);
        param_5 = param_5 + 4;
        param_4 = uVar9 + 4;
      } while (param_5 < uVar3);
      param_4 = uVar9 + 4;
      param_6 = local_40;
      param_7 = local_48;
      param_2 = local_38;
    }
    uVar20 = (uint)param_6 & 3;
    puVar2 = &switchD_000b2ad3::switchdataD_00016db8;
    uVar17 = (&switchD_000b2ad3::switchdataD_00016db8)[uVar20];
    switch(uVar20) {
    case 0:
      goto switchD_000b2ad3_caseD_0;
    case 1:
      goto switchD_000b2ad3_caseD_1;
    case 2:
switchD_000b2ad3_caseD_2:
      uVar3 = param_5 + 1;
      if (param_3 <= uVar3) goto LAB_000b2d9e;
      uVar9 = param_4 + 1 & param_7;
      if (param_3 <= uVar9) {
        ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d60;
LAB_000b2d7d:
        do {
          pcStack_70 = (code *)0xb2d88;
          (*(code *)PTR_panic_000c3b00)(param_1,ppuVar10);
LAB_000b2d88:
          pcStack_70 = (code *)0xb2d9e;
          param_1 = (*(code *)PTR_slice_index_fail_000c3bb0)
                              (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c58,param_3);
LAB_000b2d9e:
          ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d48;
LAB_000b2d64:
          pcStack_70 = (code *)0xb2d6f;
          param_1 = (*(code *)PTR_panic_000c3b00)(param_1,ppuVar10);
LAB_000b2d6f:
          ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c88;
        } while( true );
      }
      uVar13 = param_4 & param_7;
      if (uVar13 < param_3) {
        if (param_3 <= param_5) {
          ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d90;
          param_4 = uVar13;
          uVar13 = param_5;
          break;
        }
LAB_000b2d18:
        *(undefined1 *)(param_2 + param_5) = *(undefined1 *)(param_2 + uVar13);
        uVar13 = uVar9;
        param_5 = uVar3;
        goto LAB_000b2d26;
      }
      ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d78;
      goto LAB_000b2e42;
    case 3:
switchD_000b2ad3_caseD_3:
      uVar3 = param_5 + 2;
      if (param_3 <= uVar3) {
        ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2da8;
        goto LAB_000b2d64;
      }
      uVar9 = param_4 + 2 & param_7;
      if (param_3 <= uVar9) {
        ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2dc0;
        goto LAB_000b2d7d;
      }
      uVar13 = param_4 & param_7;
      if (param_3 <= uVar13) {
        ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2dd8;
        goto LAB_000b2e51;
      }
      if (param_5 < param_3) {
        *(undefined1 *)(param_2 + param_5) = *(undefined1 *)(param_2 + uVar13);
        uVar13 = param_4 + 1 & param_7;
        if (param_3 <= uVar13) {
          ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e08;
          goto LAB_000b2e42;
        }
        param_5 = param_5 + 1;
        if (param_5 < param_3) goto LAB_000b2d18;
        ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2e20;
        param_4 = uVar13;
        uVar13 = param_5;
      }
      else {
        ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2df0;
        uVar13 = param_5;
      }
    }
  }
  else {
    if (param_3 <= param_5 - 1) {
      ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2c40;
      uVar9 = 1;
      uVar13 = param_5 - 1;
      goto LAB_000b2e51;
    }
    if (uVar9 < param_5) goto LAB_000b2d88;
    if (param_3 < uVar9) goto LAB_000b2d88;
    pcStack_70 = (code *)0xb2ab8;
    param_1 = (*(code *)PTR_memset_000c3cd8)();
    param_4 = uVar9 - 1;
    uVar20 = (uint)param_6 & 3;
    puVar2 = &switchD_000b2ad3::switchdataD_00016db8;
    uVar17 = (&switchD_000b2ad3::switchdataD_00016db8)[uVar20];
    param_5 = uVar9;
    switch(uVar20) {
    case 0:
      goto switchD_000b2ad3_caseD_0;
    case 2:
      goto switchD_000b2ad3_caseD_2;
    case 3:
      goto switchD_000b2ad3_caseD_3;
    }
switchD_000b2ad3_caseD_1:
    uVar9 = (longlong)&switchD_000b2ad3::switchdataD_00016db8 + (longlong)(int)uVar17;
    uVar13 = param_4 & param_7;
    if (param_3 <= uVar13) {
      ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d18;
LAB_000b2e42:
      param_4 = uVar13;
      goto LAB_000b2e51;
    }
    if (param_5 < param_3) {
LAB_000b2d26:
      puVar2 = (uint *)(ulonglong)*(byte *)(param_2 + uVar13);
      *(byte *)(param_2 + param_5) = *(byte *)(param_2 + uVar13);
switchD_000b2ad3_caseD_0:
      return puVar2;
    }
    ppuVar10 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_000c2d30;
    param_4 = uVar13;
    uVar13 = param_5;
  }
  param_5 = uVar13;
LAB_000b2e51:
  pcStack_70 = init_tree;
  (*(code *)PTR_panic_bounds_check_000c3dd8)(uVar9,ppuVar10);
  pcStack_70 = (code *)((longlong)register0x00000020 + -8);
  uStack_78 = param_5;
  lStack_80 = param_2;
  uStack_88 = param_4;
  uStack_90 = param_7;
  uStack_98 = param_3;
  uStack_a0 = param_3;
  bVar1 = *(byte *)((longlong)&__DT_RELA[0xef].r_offset + uVar13 + 7);
LAB_000b2e78:
  if (bVar1 == 0) {
    uVar7 = 0x120;
    lVar4 = uVar13 + 0x2780;
  }
  else {
    if (bVar1 == 2) {
      auStack_110[8] = 0;
      auStack_110[9] = 0;
      auStack_110[10] = 0;
      auStack_110[0xb] = 0;
      auStack_110[0xc] = 0;
      auStack_110[0xd] = 0;
      auStack_110[0xe] = 0;
      auStack_110[0xf] = 0;
      auStack_110[0] = 0;
      auStack_110[1] = 0;
      auStack_110[2] = 0;
      auStack_110[3] = 0;
      auStack_110[4] = 0;
      auStack_110[5] = 0;
      auStack_110[6] = 0;
      auStack_110[7] = 0;
      aiStack_f0[0xc] = 0;
      aiStack_f0[0xd] = 0;
      aiStack_f0[0xe] = 0;
      aiStack_f0[0xf] = 0;
      aiStack_f0[8] = 0;
      aiStack_f0[9] = 0;
      aiStack_f0[10] = 0;
      aiStack_f0[0xb] = 0;
      aiStack_f0[4] = 0;
      aiStack_f0[5] = 0;
      aiStack_f0[6] = 0;
      aiStack_f0[7] = 0;
      aiStack_f0[0] = 0;
      aiStack_f0[1] = 0;
      aiStack_f0[2] = 0;
      aiStack_f0[3] = 0;
      aiStack_f0[0x10] = 0;
      lVar4 = 0;
      do {
        *(undefined2 *)(uVar13 + 0x1b00 + lVar4) = 0x31e;
        lVar4 = lVar4 + 2;
      } while (lVar4 != 0x800);
      uVar7 = 0x13;
      lVar4 = uVar13 + 0x28f1;
      lVar21 = uVar13 + 0x1b00;
      goto LAB_000b2f62;
    }
    if (bVar1 != 1) {
      return (uint *)0xff;
    }
    uVar7 = 0x20;
    lVar4 = uVar13 + 0x28a0;
  }
  lVar21 = (ulonglong)bVar1 * 0xc80 + uVar13 + 0x200;
  auStack_110[8] = 0;
  auStack_110[9] = 0;
  auStack_110[10] = 0;
  auStack_110[0xb] = 0;
  auStack_110[0xc] = 0;
  auStack_110[0xd] = 0;
  auStack_110[0xe] = 0;
  auStack_110[0xf] = 0;
  auStack_110[0] = 0;
  auStack_110[1] = 0;
  auStack_110[2] = 0;
  auStack_110[3] = 0;
  auStack_110[4] = 0;
  auStack_110[5] = 0;
  auStack_110[6] = 0;
  auStack_110[7] = 0;
  aiStack_f0[0xc] = 0;
  aiStack_f0[0xd] = 0;
  aiStack_f0[0xe] = 0;
  aiStack_f0[0xf] = 0;
  aiStack_f0[8] = 0;
  aiStack_f0[9] = 0;
  aiStack_f0[10] = 0;
  aiStack_f0[0xb] = 0;
  aiStack_f0[4] = 0;
  aiStack_f0[5] = 0;
  aiStack_f0[6] = 0;
  aiStack_f0[7] = 0;
  aiStack_f0[0] = 0;
  aiStack_f0[1] = 0;
  aiStack_f0[2] = 0;
  aiStack_f0[3] = 0;
  aiStack_f0[0x10] = 0;
  lVar5 = 0;
  do {
    *(undefined2 *)(lVar21 + lVar5) = 0x31e;
    lVar5 = lVar5 + 2;
  } while (lVar5 != 0x800);
  (*(code *)PTR_memset_000c3cd8)(0,0x480);
LAB_000b2f62:
  uVar18 = *(ushort *)(uVar13 + 0x28e8 + (ulonglong)bVar1 * 2);
  uVar3 = (ulonglong)uVar18;
  if (uVar7 < uVar18) {
    return (uint *)0xff;
  }
  if (uVar3 != 0) {
    uVar9 = 0;
    do {
      if (0xf < (ulonglong)*(byte *)(lVar4 + uVar9)) {
        return (uint *)0xff;
      }
      auStack_110[*(byte *)(lVar4 + uVar9)] = auStack_110[*(byte *)(lVar4 + uVar9)] + 1;
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
  }
  uVar15 = 1;
  bVar22 = false;
  iVar12 = 0;
  iVar8 = 0;
  uVar9 = 0;
  do {
    if (bVar22) {
      uVar16 = uVar9 + (uVar9 < 0x10);
      if (0xf < uVar9) break;
    }
    else {
      uVar16 = 0x10 - uVar9;
      if (uVar15 <= 0x10 - uVar9) {
        uVar16 = uVar15;
      }
      if (uVar9 <= uVar16 + uVar9) {
        uVar9 = uVar16 + uVar9;
      }
      if (0xf < uVar9) break;
      uVar16 = uVar9 + 1;
    }
    iVar8 = iVar8 + (uint)auStack_110[uVar9];
    iVar12 = (iVar12 + (uint)auStack_110[uVar9]) * 2;
    aiStack_f0[uVar9 + 1] = iVar12;
    bVar22 = true;
    uVar15 = 0;
    uVar9 = uVar16;
  } while( true );
  if (iVar12 != 0x10000) {
    if (bVar1 == 2) {
      return (uint *)0x1;
    }
    if (1 < (ushort)iVar8) {
      return (uint *)0x1;
    }
  }
  if (uVar3 != 0) {
    uVar7 = 0xffff;
    uVar9 = 0;
    do {
      while( true ) {
        uVar15 = uVar9 + 1;
        bVar1 = *(byte *)(lVar4 + uVar9);
        uVar17 = bVar1 & 0xf;
        if ((bVar1 & 0xf) != 0) break;
LAB_000b30f1:
        uVar9 = uVar15;
        if (uVar15 == uVar3) goto LAB_000b31b9;
      }
      bVar6 = (byte)uVar17;
      uVar18 = (ushort)((uint)(aiStack_f0[uVar17] << (-bVar6 & 0x1f)) >> (-bVar6 & 0x1f));
      uVar18 = uVar18 << 8 | uVar18 >> 8;
      uVar20 = (uVar18 & 0xf0f) << 4 | (uVar18 & 0xf0f0) >> 4;
      uVar20 = (uVar20 >> 2 & 0x3333) + (uVar20 & 0x3333) * 4;
      uVar11 = (uVar20 >> 1 & 0x5555) + (uVar20 & 0x5555) * 2 >> (0x10 - bVar6 & 0x1f);
      aiStack_f0[uVar17] = aiStack_f0[uVar17] + 1;
      uVar20 = uVar11 & 0xffff;
      uVar16 = (ulonglong)uVar20;
      if (bVar6 < 0xb) {
        if (uVar20 < 0x400) {
          do {
            *(ushort *)(lVar21 + uVar16 * 2) = (ushort)uVar9 | (ushort)(uVar17 << 9);
            uVar16 = uVar16 + (uint)(1 << bVar6);
          } while (uVar16 < 0x400);
        }
        goto LAB_000b30f1;
      }
      uVar16 = (ulonglong)(uVar11 & 0x3ff);
      uVar18 = *(ushort *)(lVar21 + uVar16 * 2);
      if (uVar18 == 0x31e) {
        *(ushort *)(lVar21 + uVar16 * 2) = uVar7;
        uVar18 = uVar7;
        uVar7 = uVar7 - 2;
      }
      uVar20 = uVar20 >> 9;
      uVar16 = (ulonglong)uVar20;
      if (bVar6 != 0xb) {
        cVar14 = (bVar1 & 0xf) - 0xb;
        do {
          uVar19 = ~uVar18 + (ushort)(((uint)uVar16 >> 1 & 1) != 0);
          if (0x23f < uVar19) {
            return (uint *)0xff;
          }
          uVar18 = *(ushort *)(lVar21 + 0x800 + (ulonglong)uVar19 * 2);
          if (uVar18 == 0) {
            *(ushort *)(lVar21 + 0x800 + (ulonglong)uVar19 * 2) = uVar7;
            uVar18 = uVar7;
            uVar7 = uVar7 - 2;
          }
          else {
          }
          uVar16 = uVar16 >> 1;
          uVar20 = (uint)uVar16;
          cVar14 = cVar14 + -1;
        } while (cVar14 != '\0');
      }
      uVar18 = ~uVar18 + (ushort)((uVar20 >> 1 & 1) != 0);
      if (0x23f < uVar18) {
        return (uint *)0xff;
      }
      *(ushort *)(lVar21 + 0x800 + (ulonglong)uVar18 * 2) = (ushort)uVar9;
      uVar9 = uVar15;
    } while (uVar15 < uVar3);
  }
LAB_000b31b9:
  cVar14 = *(char *)((longlong)&__DT_RELA[0xef].r_offset + uVar13 + 7);
  if (cVar14 == '\0') {
    *(undefined4 *)(uStack_a0 + 0x10) = 0;
    return (uint *)0x1;
  }
  if (cVar14 == '\x02') {
    *(undefined4 *)(uStack_a0 + 0x10) = 0;
    return (uint *)0x1;
  }
  bVar1 = cVar14 - 1;
  *(byte *)((longlong)&__DT_RELA[0xef].r_offset + uVar13 + 7) = bVar1;
  goto LAB_000b2e78;
}


