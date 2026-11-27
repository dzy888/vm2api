// 00205540 alloc_err

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::raw::Fallibility>::alloc_err */

ulonglong ******* __rustcall
<hashbrown[b5c94476ffc33875]::raw::Fallibility>::alloc_err
          (int param_1,ulonglong *******param_2,ulonglong *******param_3,undefined8 param_4,
          longlong param_5,ulonglong *******param_6)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong ******ppppppuVar3;
  uint uVar4;
  ulonglong *******pppppppuVar5;
  uint uVar6;
  ulonglong *******pppppppuVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong *******pppppppuVar11;
  ulonglong ******ppppppuVar12;
  ulonglong *******pppppppuVar13;
  undefined **ppuVar14;
  longlong lVar15;
  byte bVar16;
  ushort uVar17;
  uint uVar18;
  int iVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  ulonglong *******pppppppuVar22;
  uint uVar23;
  ulonglong *******extraout_RDX;
  ulonglong *******extraout_RDX_00;
  undefined7 uVar27;
  uint7 uVar28;
  ulonglong *******extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulonglong *******extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 uVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  ulonglong *******pppppppuVar29;
  ulonglong *******pppppppuVar30;
  ulonglong *******pppppppuVar31;
  ulonglong *******unaff_RBP;
  uint uVar32;
  ulonglong uVar33;
  undefined **ppuVar34;
  int iVar35;
  undefined **ppuVar36;
  undefined **ppuVar37;
  char cVar38;
  ulonglong *******pppppppuVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong *******pppppppuVar42;
  undefined **ppuVar43;
  ulonglong *******pppppppuVar44;
  ushort uVar45;
  ushort uVar46;
  ulonglong uVar47;
  ulonglong *******pppppppuVar48;
  ulonglong *******pppppppuVar49;
  uint *puVar50;
  undefined **ppuVar51;
  bool bVar52;
  bool bVar53;
  uint uVar54;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  uint extraout_XMM0_Da_02;
  undefined4 uVar55;
  uint unaff_retaddr;
  ushort auStack_2a8 [16];
  int aiStack_288 [20];
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  code *pcStack_208;
  undefined **ppuStack_1f8;
  byte *pbStack_1f0;
  undefined1 uStack_1e8;
  undefined **ppuStack_1e0;
  ulonglong *******pppppppuStack_1d8;
  undefined **ppuStack_1d0;
  char *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  ulonglong uStack_1b0;
  ulonglong ******ppppppuStack_1a8;
  code *pcStack_1a0;
  ulonglong *******pppppppuStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  undefined **ppuStack_180;
  ulonglong *******pppppppuStack_178;
  undefined4 uStack_16c;
  undefined **ppuStack_168;
  undefined8 *puStack_160;
  uint uStack_154;
  uint *puStack_150;
  uint uStack_148;
  byte bStack_141;
  ulonglong *******pppppppuStack_140;
  ulonglong *******pppppppuStack_138;
  ulonglong *******pppppppuStack_130;
  ulonglong *******pppppppuStack_128;
  ulonglong *******pppppppuStack_120;
  code *pcStack_118;
  code *pcStack_110;
  longlong lStack_108;
  ulonglong *******pppppppuStack_100;
  uint *puStack_f8;
  byte *pbStack_f0;
  ulonglong *******pppppppuStack_e8;
  ulonglong *******pppppppuStack_e0;
  byte *pbStack_d8;
  ulonglong *******pppppppuStack_d0;
  ulonglong *******pppppppuStack_c8;
  uint auStack_c0 [6];
  ulonglong *******pppppppuStack_a8;
  ulonglong *******pppppppuStack_a0;
  ulonglong *******pppppppuStack_98;
  longlong lStack_90;
  ulonglong *******pppppppuStack_88;
  ulonglong *******pppppppuStack_68;
  ulonglong *******pppppppuStack_60;
  ulonglong *******pppppppuStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  byte bStack_44;
  code *pcStack_18;
  undefined8 uStack_10;
  
  if (param_1 == 0) {
    return param_2;
  }
  uStack_10 = core[c0acaeba6ab4c2e0]::slice::index::range::
              <core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>;
  (*(code *)PTR_handle_alloc_error_00219eb0)();
  pppppppuVar22 = (ulonglong *******)param_2[1];
  if (*(char *)(param_2 + 2) == '\0') {
    uStack_10 = (code *)((longlong)register0x00000020 + -8);
    if (pppppppuVar22 < param_3) {
      pppppppuVar22 = (ulonglong *******)((longlong)pppppppuVar22 + 1);
      goto LAB_00205582;
    }
LAB_0020559c:
    ppuVar20 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00218bb0;
  }
  else {
    if (pppppppuVar22 <= param_3) {
LAB_00205582:
      if (*param_2 <= pppppppuVar22) {
        return (ulonglong *******)*param_2;
      }
      pcStack_18 = (code *)0x20559c;
      uStack_10 = (code *)((longlong)register0x00000020 + -8);
      (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00218be0);
      goto LAB_0020559c;
    }
    ppuVar20 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00218bc8;
    uStack_10 = (code *)((longlong)register0x00000020 + -8);
  }
  pcStack_18 = miniz_oxide[d073f249698f1019]::inflate::core::decompress;
  uVar54 = (*(code *)PTR_slice_index_fail_00219d80)();
  pcStack_18 = (code *)&uStack_10;
  pppppppuStack_a8 = (ulonglong *******)0x0;
  if (unaff_RBP <= param_6) {
    pppppppuVar49 =
         (ulonglong *******)
         (-(ulonglong)((unaff_retaddr & 4) != 0) |
         (ulonglong)((longlong)param_6 + ((ulonglong)(param_6 == (ulonglong *******)0x0) - 1)));
    if (((ulonglong)((longlong)pppppppuVar49 + 1) & (ulonglong)pppppppuVar49) == 0) {
      pbStack_f0 = (byte *)((longlong)pppppppuVar49 + 1);
      pppppppuStack_100 = param_3;
      pppppppuStack_68 = param_3;
      pppppppuStack_60 = (ulonglong *******)ppuVar20;
      pppppppuVar11 =
           (ulonglong *******)
           CONCAT71((int7)((ulonglong)param_3 >> 8),*(byte *)((longlong)pppppppuVar22 + 0x2904));
      lStack_90 = param_5;
      pppppppuStack_88 = param_6;
      pppppppuVar13 =
           (ulonglong *******)
           CONCAT71((int7)((ulonglong)param_5 >> 8),*(byte *)(pppppppuVar22 + 0x51e));
      pppppppuStack_58 = (ulonglong *******)pppppppuVar22[0x518];
      uStack_50 = *(uint *)(pppppppuVar22 + 0x519);
      uStack_4c = *(uint *)((longlong)pppppppuVar22 + 0x28dc);
      uStack_48 = *(uint *)(pppppppuVar22 + 0x51c);
      uVar23 = 1;
      if ((unaff_retaddr & 2) == 0) {
        uVar23 = 0xfc;
      }
      bStack_44 = *(byte *)(pppppppuVar22 + 0x51e);
      pppppppuStack_d0 = pppppppuVar22 + 0x4f0;
      pppppppuStack_c8 = pppppppuVar22 + 0x514;
      pbStack_d8 = (byte *)((longlong)pppppppuVar22 + 0x28f1);
      pppppppuStack_e8 = pppppppuVar22 + 0x502;
      pppppppuStack_e0 = pppppppuVar22 + 0x510;
      puStack_f8 = (uint *)((longlong)pppppppuVar22 + 0x28e4);
      pppppppuStack_a0 = pppppppuVar22;
      pppppppuVar42 = (ulonglong *******)(ulonglong)*(uint *)((longlong)pppppppuVar22 + 0x28dc);
      pppppppuVar30 = unaff_RBP;
LAB_002056ee:
      uVar6 = uStack_48;
      pppppppuVar5 = pppppppuStack_60;
      pppppppuVar44 = pppppppuStack_68;
      pppppppuVar31 = pppppppuStack_88;
      uVar4 = _UNK_00113eec;
      uVar32 = _UNK_00113ee8;
      uVar18 = _UNK_00113ee4;
      uVar9 = _DAT_00113ee0;
      pppppppuVar48 = (ulonglong *******)(ulonglong)unaff_retaddr;
      puVar50 = &switchD_00205703::switchdataD_0012f474;
      ppuVar21 = (undefined **)((ulonglong)pppppppuVar11 & 0xffffffff);
      bVar8 = (byte)pppppppuVar11;
      uVar28 = (uint7)((ulonglong)pppppppuVar42 >> 8);
      if (0x18 < bVar8) {
        uVar9 = (uint)CONCAT71(uVar28,0xff);
        pppppppuVar48 = pppppppuVar49;
        goto LAB_00206b30;
      }
      uVar2 = (&switchD_00205703::switchdataD_0012f474)[(ulonglong)pppppppuVar11 & 0xff];
      uVar27 = (undefined7)((ulonglong)pppppppuVar11 >> 8);
      bVar16 = (byte)uStack_50;
      pppppppuVar29 = (ulonglong *******)ppuVar20;
      pppppppuVar39 = pppppppuVar13;
      pppppppuVar7 = pppppppuVar48;
      switch((ulonglong)pppppppuVar11 & 0xff) {
      case 0:
        pppppppuStack_58 = (ulonglong *******)0x0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        bStack_44 = 0;
        *(uint *)((longlong)pppppppuVar22 + 0x28cc) = _DAT_00113ee0;
        *(uint *)(pppppppuVar22 + 0x51a) = uVar18;
        *(uint *)((longlong)pppppppuVar22 + 0x28d4) = uVar32;
        *(uint *)(pppppppuVar22 + 0x51b) = uVar4;
        pppppppuVar11 =
             (ulonglong *******)
             (CONCAT71((int7)((ulonglong)
                              ((longlong)&switchD_00205703::switchdataD_0012f474 +
                              (longlong)(int)uVar2) >> 8),
                       ((unaff_retaddr & 1) == 0) * '\x02' + '\x01') & 0xffffffff);
        uVar54 = uVar9;
        goto LAB_002056ee;
      case 1:
        if (pppppppuStack_60 == (ulonglong *******)0x0) {
          bVar8 = 1;
          goto LAB_00206af3;
        }
        pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuStack_68 + 1);
        pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + -1);
        *(uint *)((longlong)pppppppuVar22 + 0x28cc) = (uint)*(byte *)pppppppuVar44;
        pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuStack_68 >> 8),2);
        goto LAB_002056ee;
      case 2:
        if (pppppppuStack_60 == (ulonglong *******)0x0) {
          bVar8 = 2;
LAB_00206af3:
          pppppppuVar11 = (ulonglong *******)(ulonglong)uVar23;
          goto LAB_00206af6;
        }
        pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuStack_68 + 1);
        pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + -1);
        bVar8 = *(byte *)pppppppuVar44;
        uVar9 = *(uint *)((longlong)pppppppuVar22 + 0x28cc);
        uVar18 = uVar9 << 8 | (uint)bVar8;
        pppppppuVar42 = (ulonglong *******)(ulonglong)uVar18;
        *(uint *)(pppppppuVar22 + 0x51a) = (uint)bVar8;
        bVar53 = (uVar9 & 0xf) != 8 || ((bVar8 & 0x20) != 0 || uVar18 % 0x1f != 0);
        uVar9 = (uVar9 >> 4) + 8 & 0x3f;
        if ((unaff_retaddr & 4) == 0) {
          bVar53 = bVar53 || (ulonglong)pbStack_f0 >> (sbyte)uVar9 == 0;
        }
        uVar18 = 3;
        if (bVar53) {
          uVar18 = 0x1d;
        }
        pppppppuVar11 = (ulonglong *******)(ulonglong)uVar18;
        if (0xf < uVar9) {
          pppppppuVar11 = (ulonglong *******)&DAT_0000001d;
        }
        goto LAB_002056ee;
      case 3:
        pppppppuVar13 = pppppppuStack_60;
        pppppppuVar11 = pppppppuStack_68;
        do {
          pppppppuVar31 = pppppppuStack_58;
          if (uStack_50 < 3) {
            if (pppppppuVar13 != (ulonglong *******)0x0) {
              pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar13 + -1);
              pppppppuVar44 = (ulonglong *******)((longlong)pppppppuVar11 + 1);
              pppppppuStack_68 = pppppppuVar44;
              pppppppuStack_60 = pppppppuVar13;
              uVar33 = (ulonglong)*(byte *)pppppppuVar11 << ((byte)uStack_50 & 0x3f) |
                       (ulonglong)pppppppuStack_58;
              pppppppuStack_58 = (ulonglong *******)(uVar33 >> 3);
              uStack_50 = (uStack_50 | 8) - 3;
              *(byte *)((longlong)pppppppuVar22 + 0x28ee) = (byte)uVar33 & 1;
              bVar8 = (byte)uVar33 >> 1;
              pppppppuVar42 =
                   (ulonglong *******)(CONCAT71((int7)(uVar33 >> 8),bVar8) & 0xffffffffffffff03);
              *(byte *)((longlong)pppppppuVar22 + 0x28ef) = (byte)pppppppuVar42;
              pppppppuVar11 = pppppppuVar44;
              switch(bVar8 & 3) {
              case 1:
                goto switchD_00205df8_caseD_1;
              case 2:
                goto switchD_00205df8_caseD_2;
              case 3:
                goto switchD_00205df8_caseD_3;
              }
              goto switchD_00205df8_caseD_0;
            }
            bVar8 = 3;
LAB_00206aae:
            pppppppuVar11 = (ulonglong *******)(ulonglong)uVar23;
            goto LAB_00206ab1;
          }
          pppppppuVar44 = (ulonglong *******)((ulonglong)pppppppuStack_58 >> 3);
          pppppppuStack_58 = pppppppuVar44;
          uStack_50 = uStack_50 - 3;
          *(byte *)((longlong)pppppppuVar22 + 0x28ee) = (byte)pppppppuVar31 & 1;
          bVar8 = (byte)((ulonglong)pppppppuVar31 >> 1) & 3;
          *(byte *)((longlong)pppppppuVar22 + 0x28ef) = bVar8;
          switch(bVar8) {
          case 0:
switchD_00205df8_caseD_0:
            pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar44 >> 8),4);
            goto LAB_0020698f;
          case 2:
switchD_00205df8_caseD_2:
            uStack_48 = 0;
            pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar44 >> 8),8);
            goto LAB_0020698f;
          case 3:
switchD_00205df8_caseD_3:
            pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar44 >> 8),0x19);
            goto LAB_0020698f;
          }
switchD_00205df8_caseD_1:
          *(uint *)(pppppppuVar22 + 0x51d) = 0x200120;
          pcStack_110 = (code *)0x205e57;
          (*(code *)PTR_memset_00219d00)(&switchD_00205df8::switchdataD_0012f4d8,0x90);
          ppppppuVar3 = _UNK_00113d78;
          ppppppuVar12 = _DAT_00113d70;
          *pppppppuStack_e8 = _DAT_00113d70;
          pppppppuStack_e8[1] = ppppppuVar3;
          pppppppuStack_e8[2] = ppppppuVar12;
          pppppppuStack_e8[3] = ppppppuVar3;
          pppppppuStack_e8[4] = ppppppuVar12;
          pppppppuStack_e8[5] = ppppppuVar3;
          pppppppuStack_e8[6] = ppppppuVar12;
          pppppppuStack_e8[7] = ppppppuVar3;
          pppppppuStack_e8[8] = ppppppuVar12;
          pppppppuStack_e8[9] = ppppppuVar3;
          pppppppuStack_e8[10] = ppppppuVar12;
          pppppppuStack_e8[0xb] = ppppppuVar3;
          pppppppuStack_e8[0xc] = ppppppuVar12;
          pppppppuStack_e8[0xd] = ppppppuVar3;
          ppppppuVar12 = _UNK_00113c98;
          *pppppppuStack_e0 = _DAT_00113c90;
          pppppppuStack_e0[1] = ppppppuVar12;
          pppppppuStack_e0[2] = (ulonglong ******)0x707070707070707;
          pppppppuVar22[0x513] = (ulonglong ******)0x808080808080808;
          uVar32 = _UNK_00113f6c;
          uVar18 = _UNK_00113f68;
          uVar9 = _UNK_00113f64;
          uVar54 = _DAT_00113f60;
          *(uint *)(pppppppuStack_c8 + 2) = _DAT_00113f60;
          *(uint *)((longlong)pppppppuStack_c8 + 0x14) = uVar9;
          *(uint *)(pppppppuStack_c8 + 3) = uVar18;
          *(uint *)((longlong)pppppppuStack_c8 + 0x1c) = uVar32;
          *(uint *)pppppppuStack_c8 = uVar54;
          *(uint *)((longlong)pppppppuStack_c8 + 4) = uVar9;
          *(uint *)(pppppppuStack_c8 + 1) = uVar18;
          *(uint *)((longlong)pppppppuStack_c8 + 0xc) = uVar32;
          pppppppuVar42 = (ulonglong *******)&pppppppuStack_58;
          pcStack_110 = (code *)0x205ed1;
          uVar9 = miniz_oxide[d073f249698f1019]::inflate::core::init_tree(pppppppuVar22);
          uVar54 = extraout_XMM0_Da_00;
        } while ((char)uVar9 == '\0');
        pppppppuVar11 = extraout_RDX_00;
        if ((uVar9 & 0xff) == 1) break;
        pppppppuVar13 = pppppppuVar39;
        if ((uVar9 & 0xff) != 2) {
          bVar8 = 3;
          goto LAB_00206b30;
        }
        pppppppuVar11 = (ulonglong *******)((ulonglong)extraout_RDX_00 & 0xffffffff);
        bVar8 = 3;
LAB_00206ab4:
        pppppppuVar49 = pppppppuVar48;
LAB_00206af6:
        uVar9 = (uint)pppppppuVar11;
        pppppppuVar31 = (ulonglong *******)ppuVar20;
        pppppppuVar42 = pppppppuVar49;
        if ((char)pppppppuVar11 == '\x01') {
          uVar27 = (undefined7)((ulonglong)pppppppuVar22 >> 8);
          if (pppppppuStack_88 == pppppppuVar30) {
            pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,'\x02' - (bVar8 == 0x17));
            goto LAB_00206b26;
          }
          bVar53 = true;
          puVar50 = (uint *)0x0;
          pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,1);
        }
        else if ((uVar9 & 0xff) == 0xfc) {
LAB_00206b26:
          bVar53 = true;
          puVar50 = (uint *)0x0;
        }
        else {
          pppppppuVar48 = pppppppuVar49;
LAB_00206b30:
          uVar23 = (int)ppuVar20 - (int)pppppppuStack_60;
          uVar54 = uStack_50 >> 3;
          if (uVar23 < uStack_50 >> 3) {
            uVar54 = uVar23;
          }
          puVar50 = (uint *)(ulonglong)uVar54;
          uStack_50 = uStack_50 + uVar54 * -8;
          pppppppuVar11 = (ulonglong *******)(ulonglong)uVar9;
          bVar53 = (char)uVar9 != '\0';
          pppppppuVar31 = (ulonglong *******)ppuVar20;
          pppppppuVar42 = pppppppuVar48;
        }
        pppppppuVar44 = pppppppuStack_a0;
        pppppppuVar48 = (ulonglong *******)(ulonglong)unaff_retaddr;
        *(byte *)((longlong)pppppppuStack_a0 + 0x2904) = bVar8;
        *(uint *)(pppppppuStack_a0 + 0x519) = uStack_50;
        *(uint *)((longlong)pppppppuStack_a0 + 0x28dc) = uStack_4c;
        *(uint *)(pppppppuStack_a0 + 0x51c) = uStack_48;
        *(byte *)(pppppppuStack_a0 + 0x51e) = bStack_44;
        pppppppuStack_a0[0x518] =
             (ulonglong ******)(~(-1L << ((byte)uStack_50 & 0x3f)) & (ulonglong)pppppppuStack_58);
        pppppppuVar22 = pppppppuVar11;
        if ((((unaff_retaddr & 0x40) == 0) && ((unaff_retaddr & 9) != 0)) &&
           (-1 < (char)pppppppuVar11)) {
          pppppppuVar49 = pppppppuStack_88;
          pppppppuVar39 = pppppppuVar13;
          if ((pppppppuVar30 < unaff_RBP) || (pppppppuStack_88 < pppppppuVar30)) {
LAB_00206d63:
            pcStack_110 = (code *)0x206d77;
            (*(code *)PTR_slice_index_fail_00219d80)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c58,pppppppuVar49);
            pppppppuVar13 = pppppppuVar48;
LAB_00206d77:
            pcStack_110 = (code *)0x206d89;
            (*(code *)PTR_slice_index_fail_00219d80)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b68,0x200);
            ppuVar20 = (undefined **)pppppppuVar31;
            pppppppuVar48 = pppppppuVar13;
            pppppppuVar49 = pppppppuVar42;
LAB_00206d89:
            ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c40;
            pcStack_110 = (code *)0x206d9c;
            uVar54 = (*(code *)PTR_slice_index_fail_00219d80)
                               (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c40,ppuVar20);
LAB_00206d9c:
            pcStack_110 = (code *)0x206dae;
            uVar54 = (*(code *)PTR_panic_bounds_check_0021a020)
                               (uVar54,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b38);
            pppppppuVar29 = (ulonglong *******)ppuVar20;
            ppuVar20 = (undefined **)pppppppuVar48;
            pppppppuVar48 = pppppppuVar49;
LAB_00206dae:
            pcStack_110 = (code *)0x206dc0;
            uVar54 = (*(code *)PTR_panic_bounds_check_0021a020)
                               (uVar54,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b50);
            pppppppuVar31 = (ulonglong *******)0x13;
LAB_00206dc0:
            pppppppuVar7 = (ulonglong *******)ppuVar20;
            pppppppuStack_68 = pppppppuVar39;
            pppppppuStack_60 = param_6;
LAB_00206dc8:
            ppuVar20 = (undefined **)pppppppuVar7;
            pcStack_110 = (code *)0x206dd5;
            pppppppuVar13 =
                 (ulonglong *******)
                 (*(code *)PTR_panic_bounds_check_0021a020)
                           (uVar54,&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b80);
LAB_00206dd5:
            ppuVar25 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b80;
            pcStack_110 = miniz_oxide[d073f249698f1019]::inflate::core::apply_match;
            pppppppuStack_68 = pppppppuVar39;
            pppppppuStack_60 = param_6;
            uVar55 = (*(code *)PTR_panic_bounds_check_0021a020)();
            pppppppuVar49 =
                 (ulonglong *******)((longlong)ppuVar25 - (longlong)ppuVar21 & (ulonglong)param_6);
            if (pppppppuVar39 == (ulonglong *******)0x3) {
              if ((((ulonglong *******)((longlong)ppuVar25 + 3) <= pppppppuVar31 &&
                    ppuVar25 < (ulonglong *******)0xfffffffffffffffd) &&
                  (pppppppuVar22 =
                        (ulonglong *******)
                        ((ulonglong)((longlong)pppppppuVar49 + 2) & (ulonglong)param_6),
                  pppppppuVar22 < pppppppuVar31)) &&
                 ((pppppppuVar49 < pppppppuVar31 &&
                  (param_6 = (ulonglong *******)
                             ((ulonglong)((longlong)pppppppuVar49 + 1) & (ulonglong)param_6),
                  param_6 < pppppppuVar31)))) {
                *(byte *)((longlong)pppppppuVar13 + (longlong)ppuVar25) =
                     *(byte *)((longlong)pppppppuVar13 + (longlong)pppppppuVar49);
                ((byte *)((longlong)pppppppuVar13 + 1))[(longlong)ppuVar25] =
                     *(byte *)((longlong)pppppppuVar13 + (longlong)param_6);
                bVar8 = *(byte *)((longlong)pppppppuVar13 + (longlong)pppppppuVar22);
                pppppppuVar31 = (ulonglong *******)(ulonglong)bVar8;
                *(byte *)((longlong)((longlong)pppppppuVar13 + 2) + (longlong)ppuVar25) = bVar8;
              }
              return pppppppuVar31;
            }
            if (((ppuVar25 <= pppppppuVar49 &&
                  (ulonglong *******)((longlong)pppppppuVar49 - (longlong)ppuVar25) < pppppppuVar39)
                || (ppuVar21 < pppppppuVar39)) ||
               (pppppppuVar11 =
                     (ulonglong *******)((longlong)pppppppuVar49 + (longlong)pppppppuVar39),
               pppppppuVar31 <= pppppppuVar11)) {
              pcStack_110 = (code *)&pcStack_18;
              pppppppuVar22 =
                   (ulonglong *******)
                   miniz_oxide[d073f249698f1019]::inflate::core::transfer
                             (pppppppuVar13,pppppppuVar31,pppppppuVar49,ppuVar25);
              return pppppppuVar22;
            }
            if (pppppppuVar49 < ppuVar25) {
              pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar31 - (longlong)ppuVar25);
              pcStack_110 = (code *)&pcStack_18;
              if (ppuVar25 <= pppppppuVar31) {
                if (pppppppuVar13 < pppppppuVar39) {
                  ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ce8;
                  pcStack_110 = (code *)&pcStack_18;
                  goto LAB_00206ef1;
                }
                pcStack_110 = (code *)&pcStack_18;
                if ((pppppppuVar49 <= pppppppuVar11) &&
                   (pcStack_110 = (code *)&pcStack_18, pppppppuVar11 <= ppuVar25))
                goto LAB_00206ec1;
                goto LAB_00206eff;
              }
            }
            else {
              pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar31 - (longlong)pppppppuVar49)
              ;
              if (pppppppuVar31 < pppppppuVar49) {
                ppuVar25 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c70;
                pcStack_110 = (code *)&pcStack_18;
                goto LAB_00206f30;
              }
              if ((CARRY8((ulonglong)pppppppuVar39,(ulonglong)ppuVar25)) ||
                 (pppppppuVar49 < (ulonglong *******)((longlong)pppppppuVar39 + (longlong)ppuVar25))
                 ) {
                pcStack_118 = (code *)0x206eea;
                pcStack_110 = (code *)&pcStack_18;
                pppppppuVar13 =
                     (ulonglong *******)
                     (*(code *)PTR_slice_index_fail_00219d80)
                               (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ca0);
              }
              else {
                pcStack_110 = (code *)&pcStack_18;
                if (pppppppuVar39 <= pppppppuVar13) {
LAB_00206ec1:
                  pcStack_110 = (code *)&pcStack_18;
                  pppppppuVar22 =
                       (ulonglong *******)(*(code *)PTR_memcpy_00219c60)(uVar55,pppppppuVar39);
                  return pppppppuVar22;
                }
              }
              ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c88;
LAB_00206ef1:
              pcStack_118 = (code *)0x206eff;
              (*(code *)PTR_slice_index_fail_00219d80)(ppuVar21,pppppppuVar13);
LAB_00206eff:
              ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cd0;
              pcStack_118 = (code *)0x206f12;
              (*(code *)PTR_slice_index_fail_00219d80)
                        (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cd0,ppuVar25);
            }
            ppuVar25 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218cb8;
LAB_00206f30:
            uVar55 = SUB84(ppuVar21,0);
            pcStack_118 = miniz_oxide[d073f249698f1019]::inflate::core::decompress_fast;
            (*(code *)PTR_panic_fmt_0021a010)();
            pcStack_118 = (code *)&pcStack_110;
            pppppppuStack_120 = pppppppuVar22;
            pppppppuStack_128 = (ulonglong *******)puVar50;
            pppppppuStack_130 = pppppppuVar48;
            pppppppuStack_138 = (ulonglong *******)ppuVar20;
            pppppppuStack_140 = pppppppuVar29;
            pppppppuStack_198 = param_6;
            uStack_16c = uVar55;
            ppppppuVar12 = *pppppppuVar39;
            uVar54 = *(uint *)(pppppppuVar39 + 1);
            uVar33 = (ulonglong)uVar54;
            ppuVar43 = (undefined **)(ulonglong)*(uint *)((longlong)pppppppuVar39 + 0xc);
            ppuVar20 = (undefined **)ppuVar25[1];
            ppuVar21 = (undefined **)ppuVar25[2];
            bVar8 = *(byte *)((longlong)pppppppuVar39 + 0x14);
            if (_DAT_0000001b < 0xe || (ulonglong)((longlong)ppuVar20 - (longlong)ppuVar21) < 0x103)
            {
              uStack_148 = *(uint *)(pppppppuVar39 + 2);
LAB_00206f9a:
              pppppppuVar22 = (ulonglong *******)0x0;
            }
            else {
              puStack_160 = (undefined8 *)0x13;
              puStack_150 = puRam0000000000000013;
              ppuStack_168 = (undefined **)*ppuVar25;
              uVar47 = _DAT_0000001b;
              ppuStack_180 = ppuVar25;
              pppppppuStack_178 = pppppppuVar39;
LAB_00206fbe:
              do {
                uVar54 = (uint)uVar33;
                if (uVar54 < 0x1e) {
                  uVar23 = *puStack_150;
                  uVar47 = uVar47 - 4;
                  puStack_150 = puStack_150 + 1;
                  *puStack_160 = puStack_150;
                  puStack_160[1] = uVar47;
                  ppppppuVar12 = (ulonglong ******)
                                 ((ulonglong)ppppppuVar12 |
                                 (ulonglong)uVar23 << ((byte)uVar33 & 0x3f));
                  uVar54 = uVar54 | 0x20;
                }
                uVar23 = (uint)*(short *)(
                                         "a formatting trait implementation returned an error when the underlying stream did not"
                                         + (ulonglong)((uint)ppppppuVar12 & 0x3ff) * 2 + 0x15);
                if ((int)uVar23 < 0) {
                  uVar9 = 0xb;
                  do {
                    uVar18 = uVar9;
                    uVar23 = ~uVar23 + (uint)(((ulonglong)ppppppuVar12 >>
                                               ((ulonglong)(uVar18 - 1 & 0xff) & 0x3f) & 1) != 0);
                    if (0x23f < uVar23) {
                      uVar23 = 0x7fff;
                      break;
                    }
                    uVar23 = (uint)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                              cn_planes_0_3::OFFSETS + (ulonglong)uVar23 * 2 + 0x54c
                                             );
                    uVar9 = (uint)(byte)((char)uVar18 + 1);
                  } while ((int)uVar23 < 0);
                }
                else {
                  uVar18 = uVar23 >> 9;
                }
                ppppppuVar12 = (ulonglong ******)((ulonglong)ppppppuVar12 >> ((byte)uVar18 & 0x3f));
                uVar54 = uVar54 - uVar18;
                uVar33 = (ulonglong)uVar54;
                ppuVar36 = ppuVar21;
                uVar9 = uVar23;
                if ((uVar23 >> 8 & 1) != 0) {
LAB_0020710b:
                  uStack_148 = uVar9 & 0x1ff;
                  if (uStack_148 == 0x100) {
                    uStack_148 = 0x100;
                    goto LAB_00206f9a;
                  }
                  pppppppuVar22 = (ulonglong *******)0xff;
                  if (0x11d < uStack_148) goto LAB_00207306;
                  uVar23 = uVar9 - 1 & 0x1f;
                  if (uVar54 < 0x1e) {
                    uVar9 = *puStack_150;
                    uVar47 = uVar47 - 4;
                    puStack_150 = puStack_150 + 1;
                    *puStack_160 = puStack_150;
                    puStack_160[1] = uVar47;
                    ppppppuVar12 = (ulonglong ******)
                                   ((ulonglong)ppppppuVar12 |
                                   (ulonglong)uVar9 << ((byte)uVar54 & 0x3f));
                    uVar54 = uVar54 | 0x20;
                  }
                  bVar8 = (&DAT_00114900)[uVar23];
                  uStack_148 = (uint)*(ushort *)(&DAT_0012f56e + (ulonglong)uVar23 * 2);
                  if (0xffffffeb < uVar23 - 0x1c) {
                    uVar23 = (uint)ppppppuVar12;
                    ppppppuVar12 = (ulonglong ******)((ulonglong)ppppppuVar12 >> (bVar8 & 0x3f));
                    uVar54 = uVar54 - bVar8;
                    uStack_148 = (~(uint)(-1L << (bVar8 & 0x3f)) & uVar23) + uStack_148;
                  }
                  uVar23 = (uint)*(short *)(&UNK_001303e4 +
                                           (ulonglong)((uint)ppppppuVar12 & 0x3ff) * 2);
                  if ((int)uVar23 < 0) {
                    uVar9 = 0xb;
                    do {
                      uVar18 = uVar9;
                      uVar23 = ~uVar23 + (uint)(((ulonglong)ppppppuVar12 >>
                                                 ((ulonglong)(uVar18 - 1 & 0xff) & 0x3f) & 1) != 0);
                      if (0x23f < uVar23) {
                        uVar23 = 0x7fff;
                        break;
                      }
                      uVar23 = (uint)*(short *)(
                                               "user-provided comparison function does not correctly implement a total order"
                                               + (ulonglong)uVar23 * 2 + 0x4c);
                      uVar9 = (uint)(byte)((char)uVar18 + 1);
                    } while ((int)uVar23 < 0);
                  }
                  else {
                    uVar18 = uVar23 >> 9;
                  }
                  ppppppuVar12 = (ulonglong ******)
                                 ((ulonglong)ppppppuVar12 >> ((byte)uVar18 & 0x3f));
                  uVar54 = uVar54 - uVar18;
                  if (0x1d < (uVar23 & 0x1ff)) goto LAB_00207306;
                  bVar8 = (byte)uVar23 >> 1;
                  bVar8 = (bVar8 - 1) + (bVar8 == 0);
                  uVar17 = *(ushort *)(&DAT_0012f528 + (ulonglong)(uVar23 & 0x1ff) * 2);
                  ppuVar43 = (undefined **)(ulonglong)uVar17;
                  if (3 < (byte)uVar23) {
                    if (uVar54 < 0x1e) {
                      uVar23 = *puStack_150;
                      uVar47 = uVar47 - 4;
                      puStack_150 = puStack_150 + 1;
                      *puStack_160 = puStack_150;
                      puStack_160[1] = uVar47;
                      ppppppuVar12 = (ulonglong ******)
                                     ((ulonglong)ppppppuVar12 |
                                     (ulonglong)uVar23 << ((byte)uVar54 & 0x3f));
                      uVar54 = uVar54 | 0x20;
                    }
                    uVar23 = (uint)ppppppuVar12;
                    ppppppuVar12 = (ulonglong ******)((ulonglong)ppppppuVar12 >> (bVar8 & 0x3f));
                    uVar54 = uVar54 - bVar8;
                    ppuVar43 = (undefined **)
                               (ulonglong)((~(uint)(-1L << (bVar8 & 0x3f)) & uVar23) + (uint)uVar17)
                    ;
                  }
                  uVar33 = (ulonglong)uVar54;
                  uStack_154 = (uint)ppuVar43;
                  if ((ppuVar20 < ppuVar43) || (((byte)uStack_16c >> 2 & ppuVar36 < ppuVar43) != 0))
                  goto LAB_00207306;
                  uStack_190 = (ulonglong)uStack_148;
                  pcStack_1a0 = (code *)0x2072c7;
                  uStack_188 = uVar47;
                  bStack_141 = bVar8;
                  miniz_oxide[d073f249698f1019]::inflate::core::apply_match
                            (ppuStack_168,ppuVar20,ppuVar36,ppuVar43,uStack_190,pppppppuStack_198);
                  ppuVar21 = (undefined **)((longlong)ppuVar36 + uStack_190);
                  ppuStack_180[2] = (undefined *)ppuVar21;
                  pppppppuVar22 = (ulonglong *******)0x0;
                  pppppppuVar39 = pppppppuStack_178;
                  bVar8 = bStack_141;
                  if (0x102 < (ulonglong)((longlong)ppuVar20 - (longlong)ppuVar21)) {
                    ppuVar43 = (undefined **)(ulonglong)uStack_154;
                    ppuVar25 = ppuStack_180;
                    uVar47 = uStack_188;
                    if (0xd < uStack_188) goto LAB_00206fbe;
                  }
                  ppuVar43 = (undefined **)(ulonglong)uStack_154;
                  goto LAB_00207306;
                }
                uVar9 = (uint)*(short *)(
                                        "a formatting trait implementation returned an error when the underlying stream did not"
                                        + (ulonglong)((uint)ppppppuVar12 & 0x3ff) * 2 + 0x15);
                if ((int)uVar9 < 0) {
                  uVar18 = 0xb;
                  do {
                    bVar16 = (byte)uVar18;
                    uVar9 = ~uVar9 + (uint)(((ulonglong)ppppppuVar12 >>
                                             ((ulonglong)(uVar18 - 1 & 0xff) & 0x3f) & 1) != 0);
                    if (0x23f < uVar9) {
                      uVar9 = 0x7fff;
                      break;
                    }
                    uVar9 = (uint)*(short *)(core[c0acaeba6ab4c2e0]::unicode::unicode_data::
                                             cn_planes_0_3::OFFSETS + (ulonglong)uVar9 * 2 + 0x54c);
                    uVar18 = (uint)(byte)(bVar16 + 1);
                  } while ((int)uVar9 < 0);
                  ppuVar51 = (undefined **)(ulonglong)bVar16;
                  ppuVar25 = ppuStack_180;
                }
                else {
                  ppuVar51 = (undefined **)(ulonglong)(uVar9 >> 9);
                }
                ppppppuVar12 = (ulonglong ******)
                               ((ulonglong)ppppppuVar12 >> ((byte)ppuVar51 & 0x3f));
                if (ppuVar20 <= ppuVar21) {
LAB_00207366:
                  ppuVar25 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b80;
                  pcStack_1a0 = miniz_oxide[d073f249698f1019]::inflate::core::transfer;
                  uVar55 = (*(code *)PTR_panic_bounds_check_0021a020)();
                  pcStack_1c8 = "mid > len";
                  uVar47 = (longlong)ppuVar25 - (longlong)ppuVar51;
                  if (ppuVar25 <= ppuVar51) {
                    uVar47 = (longlong)ppuVar51 - (longlong)ppuVar25;
                  }
                  bVar53 = (byte *)((longlong)pppppppuVar39 + (longlong)ppuVar25) + -3 < ppuVar20;
                  ppuVar37 = (undefined **)
                             ((longlong)ppuVar51 + ((ulonglong)pppppppuVar39 & 0xfffffffffffffffc));
                  ppuStack_1c0 = ppuVar21;
                  ppuStack_1b8 = ppuVar20;
                  uStack_1b0 = uVar33;
                  ppppppuStack_1a8 = ppppppuVar12;
                  if (((ppuVar25 < ppuVar51) &&
                      (bVar53 || ppuVar43 == (undefined **)0xffffffffffffffff)) && (uVar47 == 1)) {
                    if (ppuVar20 <= (undefined **)((longlong)ppuVar51 + -1)) {
                      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d00;
                      ppuVar21 = (undefined **)0x1;
                      ppuVar37 = (undefined **)((longlong)ppuVar51 + -1);
                      pcStack_1a0 = (code *)&pcStack_118;
                      goto LAB_002077a1;
                    }
                    pcStack_1a0 = (code *)&pcStack_118;
                    if (ppuVar37 < ppuVar51) goto LAB_002076d8;
                    pcStack_1a0 = (code *)&pcStack_118;
                    if (ppuVar20 < ppuVar37) goto LAB_002076d8;
                    pcStack_208 = (code *)0x207408;
                    pcStack_1a0 = (code *)&pcStack_118;
                    uVar55 = (*(code *)PTR_memset_00219d00)();
                    ppuVar25 = (undefined **)((longlong)ppuVar37 + -1);
                    uVar23 = (uint)pppppppuVar39 & 3;
                    puVar50 = &switchD_00207423::switchdataD_0012f4e8;
                    uVar54 = (&switchD_00207423::switchdataD_0012f4e8)[uVar23];
                    ppuVar51 = ppuVar37;
                    switch(uVar23) {
                    case 0:
                      goto switchD_00207423_caseD_0;
                    case 1:
                      goto switchD_00207423_caseD_1;
                    case 2:
                      goto switchD_00207423_caseD_2;
                    }
                    goto switchD_00207423_caseD_3;
                  }
                  ppuVar21 = (undefined **)((longlong)ppuVar20 + -3);
                  ppuVar26 = (undefined **)0x0;
                  if ((undefined **)0x2 < ppuVar20) {
                    ppuVar26 = ppuVar21;
                  }
                  if (ppuVar37 <= ppuVar26) {
                    ppuVar26 = ppuVar37;
                  }
                  if (!((ppuVar25 < ppuVar51 &&
                        (bVar53 || ppuVar43 == (undefined **)0xffffffffffffffff)) &&
                       3 < (ulonglong)((longlong)ppuVar51 - (longlong)ppuVar25))) {
                    pcStack_1a0 = (code *)&pcStack_118;
                    if (ppuVar26 <= ppuVar51) goto LAB_002075a1;
                    pbVar10 = (byte *)((longlong)ppuVar51 + (longlong)ppuVar36);
                    ppuVar21 = (undefined **)0x0;
                    goto LAB_002074ea;
                  }
                  pcStack_1a0 = (code *)&pcStack_118;
                  if (ppuVar26 <= ppuVar51) goto LAB_002075a1;
                  ppuStack_1e0 = ppuVar43;
                  pppppppuStack_1d8 = pppppppuVar39;
                  ppuStack_1d0 = ppuVar36;
                  pcStack_1a0 = (code *)&pcStack_118;
                  goto LAB_00207467;
                }
                uVar54 = uVar54 - (int)ppuVar51;
                uVar33 = (ulonglong)uVar54;
                *(byte *)((longlong)ppuStack_168 + (longlong)ppuVar21) = (byte)uVar23;
                ppuVar36 = (undefined **)((longlong)ppuVar21 + 1);
                ppuVar25[2] = (undefined *)ppuVar36;
                if ((uVar9 >> 8 & 1) != 0) goto LAB_0020710b;
                ppuVar51 = ppuStack_168;
                if (ppuVar20 <= ppuVar36) goto LAB_00207366;
                ((byte *)((longlong)ppuStack_168 + 1))[(longlong)ppuVar21] = (byte)uVar9;
                ppuVar21 = (undefined **)((longlong)ppuVar21 + 2);
                ppuVar25[2] = (undefined *)ppuVar21;
                pppppppuVar22 = (ulonglong *******)0x0;
                if ((ulonglong)((longlong)ppuVar20 - (longlong)ppuVar21) < 0x103) break;
              } while (0xd < uVar47);
              uStack_148 = uVar23;
            }
LAB_00207306:
            *pppppppuVar39 = ppppppuVar12;
            *(uint *)(pppppppuVar39 + 1) = uVar54;
            *(uint *)((longlong)pppppppuVar39 + 0xc) = (uint)ppuVar43;
            *(uint *)(pppppppuVar39 + 2) = uStack_148;
            *(byte *)((longlong)pppppppuVar39 + 0x14) = bVar8;
            return pppppppuVar22;
          }
          auStack_c0[0] = *(uint *)(pppppppuStack_a0 + 0x51b);
          pcStack_110 = (code *)0x206c15;
          (*(code *)PTR_write_slice_0021ad58)
                    (bStack_44,(longlong)pppppppuVar30 - (longlong)unaff_RBP);
          uVar23 = (uint)(ulonglong *******)((ulonglong)pppppppuVar11 & 0xff);
          uVar54 = 0xfe;
          if (auStack_c0[0] == *(uint *)((longlong)pppppppuVar44 + 0x28d4)) {
            uVar54 = uVar23;
          }
          if (bVar53) {
            uVar54 = uVar23;
          }
          *(uint *)(pppppppuVar44 + 0x51b) = auStack_c0[0];
          pppppppuVar22 = (ulonglong *******)(ulonglong)uVar54;
          if ((unaff_retaddr & 1) == 0) {
            pppppppuVar22 = (ulonglong *******)((ulonglong)pppppppuVar11 & 0xff);
          }
        }
        ppppppuVar12 = (ulonglong ******)((longlong)pppppppuVar30 - (longlong)unaff_RBP);
        *(char *)(pppppppuStack_a8 + 1) = (char)pppppppuVar22;
        *pppppppuStack_a8 =
             (ulonglong ******)
             ((longlong)pppppppuVar31 - (longlong)((longlong)puVar50 + (longlong)pppppppuStack_60));
        goto LAB_00206c67;
      case 4:
        pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuStack_58 >> (bVar16 & 7));
        uStack_50 = uStack_50 & 0xfffffff8;
        uStack_48 = 0;
        pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,5);
        goto LAB_002056ee;
      case 5:
        uVar9 = uStack_50;
        if ((ulonglong)uStack_48 < 4) {
          uVar18 = uStack_48 - 1;
          pbVar10 = (byte *)((ulonglong)uStack_48 + (longlong)puStack_f8);
          pppppppuVar11 = pppppppuStack_60;
          pppppppuVar42 = pppppppuStack_58;
          pppppppuVar13 = pppppppuStack_68;
          do {
            if (uVar9 == 0) {
              if (pppppppuVar11 == (ulonglong *******)0x0) {
LAB_00206ae5:
                bVar8 = 5;
                goto LAB_00206af3;
              }
              pppppppuVar11 = (ulonglong *******)((longlong)pppppppuVar11 + -1);
              pppppppuVar31 = (ulonglong *******)((longlong)pppppppuVar13 + 1);
              pppppppuStack_68 = pppppppuVar31;
              pppppppuStack_60 = pppppppuVar11;
              *pbVar10 = *(byte *)pppppppuVar13;
              uVar9 = 0;
            }
            else {
              pppppppuVar31 = pppppppuVar13;
              if (uVar9 < 8) {
                if (pppppppuVar11 == (ulonglong *******)0x0) goto LAB_00206ae5;
                pppppppuVar11 = (ulonglong *******)((longlong)pppppppuVar11 + -1);
                pppppppuVar31 = (ulonglong *******)((longlong)pppppppuVar13 + 1);
                pppppppuStack_68 = pppppppuVar31;
                pppppppuStack_60 = pppppppuVar11;
                pppppppuVar42 =
                     (ulonglong *******)
                     ((ulonglong)pppppppuVar42 |
                     (ulonglong)*(byte *)pppppppuVar13 << ((byte)uVar9 & 0x3f));
                uVar9 = uVar9 | 8;
              }
              *pbVar10 = (byte)pppppppuVar42;
              pppppppuVar42 = (ulonglong *******)((ulonglong)pppppppuVar42 >> 8);
              pppppppuStack_58 = pppppppuVar42;
              uVar9 = uVar9 - 8;
              uStack_50 = uVar9;
            }
            uStack_48 = uVar18 + 2;
            param_6 = (ulonglong *******)(ulonglong)uStack_48;
            uVar18 = uVar18 + 1;
            pbVar10 = pbVar10 + 1;
            pppppppuVar13 = pppppppuVar31;
          } while (uVar18 < 3);
        }
        uVar17 = *(ushort *)((longlong)pppppppuVar22 + 0x28e4);
        uVar45 = *(ushort *)((longlong)pppppppuVar22 + 0x28e6) ^ uVar17;
        pppppppuVar42 = (ulonglong *******)(ulonglong)uVar45;
        uStack_48 = (uint)uVar17;
        uVar27 = (undefined7)((ulonglong)pppppppuVar11 >> 8);
        pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x1f);
        if (uVar45 == 0xffff) {
          pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x14);
          if (uVar17 != 0) {
            pppppppuVar11 = (ulonglong *******)&DAT_00000011;
            if (uVar9 == 0) {
              pppppppuVar11 = (ulonglong *******)0x6;
            }
          }
        }
        goto LAB_002056ee;
      case 6:
        pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x14);
        if (uStack_48 != 0) {
          pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,7);
          if (pppppppuStack_88 == pppppppuVar30) goto LAB_00206ca0;
        }
        goto LAB_002056ee;
      case 7:
        pppppppuVar11 = (ulonglong *******)(ulonglong)uVar23;
        if (pppppppuStack_60 == (ulonglong *******)0x0) {
          bVar8 = 7;
          pppppppuStack_98 = (ulonglong *******)ppuVar20;
          goto LAB_00206af6;
        }
        pppppppuVar31 = (ulonglong *******)((longlong)pppppppuStack_88 - (longlong)pppppppuVar30);
        if (pppppppuStack_60 <
            (ulonglong *******)((longlong)pppppppuStack_88 - (longlong)pppppppuVar30)) {
          pppppppuVar31 = pppppppuStack_60;
        }
        pppppppuVar42 = (ulonglong *******)(ulonglong)uStack_48;
        if (pppppppuVar42 < pppppppuVar31) {
          pppppppuVar31 = pppppppuVar42;
        }
        puVar50 = (uint *)((longlong)pppppppuVar31 + (longlong)pppppppuVar30);
        pppppppuVar48 = pppppppuStack_60;
        pppppppuStack_98 = (ulonglong *******)ppuVar20;
        if ((!CARRY8((ulonglong)pppppppuVar31,(ulonglong)pppppppuVar30)) &&
           (puVar50 <= pppppppuStack_88)) {
          pcStack_110 = (code *)0x205f47;
          pppppppuVar22 = pppppppuVar31;
          uVar54 = (*(code *)PTR_memcpy_00219c60)(ppuVar21,pppppppuVar31);
          pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuVar44 + (longlong)pppppppuVar31);
          pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuVar5 - (longlong)pppppppuVar31);
          uStack_48 = uVar6 - (int)pppppppuVar31;
          pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar22 >> 8),6);
          goto LAB_002066e8;
        }
LAB_00206d53:
        pcStack_110 = (code *)0x206d63;
        pppppppuVar49 =
             (ulonglong *******)
             (*(code *)PTR_slice_index_fail_00219d80)
                       (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218b98);
        pppppppuVar39 = pppppppuVar13;
        goto LAB_00206d63;
      case 8:
        pppppppuVar42 = (ulonglong *******)(ulonglong)uStack_48;
        if (pppppppuVar42 < (ulonglong *******)0x3) {
          pppppppuVar11 = pppppppuStack_68;
          pppppppuVar13 = pppppppuStack_60;
          do {
            auStack_c0[0] = 5;
            auStack_c0[1] = 5;
            auStack_c0[2] = 4;
            uVar54 = auStack_c0[(longlong)pppppppuVar42];
            pppppppuVar31 = pppppppuStack_58;
            if (uStack_50 < uVar54) {
              lVar15 = -1;
              pppppppuVar44 = (ulonglong *******)0x0;
              do {
                if (pppppppuVar13 == pppppppuVar44) {
                  bVar8 = 8;
                  pppppppuVar11 = (ulonglong *******)(ulonglong)uVar23;
                  param_6 = pppppppuStack_58;
                  goto LAB_00206af6;
                }
                pppppppuStack_68 =
                     (ulonglong *******)
                     ((byte *)((longlong)pppppppuVar11 + (longlong)pppppppuVar44) + 1);
                pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuVar13 + lVar15);
                pppppppuVar31 =
                     (ulonglong *******)
                     ((ulonglong)pppppppuStack_58 |
                     (ulonglong)*(byte *)((longlong)pppppppuVar11 + (longlong)pppppppuVar44) <<
                     ((byte)uStack_50 & 0x3f));
                uStack_50 = uStack_50 + 8;
                pppppppuVar44 = (ulonglong *******)((longlong)pppppppuVar44 + 1);
                lVar15 = lVar15 + -1;
                pppppppuStack_58 = pppppppuVar31;
              } while (uStack_50 < uVar54);
              pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar13 - (longlong)pppppppuVar44)
              ;
              pppppppuVar11 = (ulonglong *******)((longlong)pppppppuVar11 + (longlong)pppppppuVar44)
              ;
            }
            param_6 = (ulonglong *******)((ulonglong)pppppppuVar31 >> ((byte)uVar54 & 0x3f));
            pppppppuStack_58 = param_6;
            uStack_50 = uStack_50 - uVar54;
            *(ushort *)((longlong)pppppppuVar22 + (longlong)pppppppuVar42 * 2 + 0x28e8) =
                 ((ushort)pppppppuVar31 & ~(ushort)(-1L << ((byte)uVar54 & 0x3f))) +
                 *(short *)(&DAT_0012f50e + (longlong)pppppppuVar42 * 2);
            pppppppuVar42 = (ulonglong *******)((longlong)pppppppuVar42 + 1);
            uStack_48 = (uint)pppppppuVar42;
          } while ((uint)pppppppuVar42 != 3);
        }
        pbStack_d8[0xf] = 0;
        pbStack_d8[0x10] = 0;
        pbStack_d8[0x11] = 0;
        pbStack_d8[0x12] = 0;
        uVar54 = 0;
        pbStack_d8[0] = 0;
        pbStack_d8[1] = 0;
        pbStack_d8[2] = 0;
        pbStack_d8[3] = 0;
        pbStack_d8[4] = 0;
        pbStack_d8[5] = 0;
        pbStack_d8[6] = 0;
        pbStack_d8[7] = 0;
        pbStack_d8[8] = 0;
        pbStack_d8[9] = 0;
        pbStack_d8[10] = 0;
        pbStack_d8[0xb] = 0;
        pbStack_d8[0xc] = 0;
        pbStack_d8[0xd] = 0;
        pbStack_d8[0xe] = 0;
        pbStack_d8[0xf] = 0;
        uStack_48 = 0;
        uVar9 = 9;
        if (0x1e < *(ushort *)((longlong)pppppppuVar22 + 0x28ea)) {
          uVar9 = 0x1b;
        }
        pppppppuVar11 = (ulonglong *******)(ulonglong)uVar9;
        if (0x11e < *(ushort *)(pppppppuVar22 + 0x51d)) {
          pppppppuVar11 = (ulonglong *******)&DAT_0000001b;
        }
        goto LAB_002056ee;
      case 9:
        pppppppuVar29 = pppppppuStack_60;
        pppppppuVar13 = pppppppuStack_68;
        do {
          if (uStack_48 < *(ushort *)((longlong)pppppppuVar22 + 0x28ec)) {
            pppppppuVar11 = pppppppuStack_58;
            puVar50 = (uint *)pppppppuVar13;
            if (uStack_50 < 3) {
              if (pppppppuVar29 != (ulonglong *******)0x0) {
                pppppppuVar29 = (ulonglong *******)((longlong)pppppppuVar29 + -1);
                puVar50 = (uint *)((longlong)pppppppuVar13 + 1);
                pppppppuStack_68 = (ulonglong *******)puVar50;
                pppppppuStack_60 = pppppppuVar29;
                pppppppuVar42 =
                     (ulonglong *******)
                     ((ulonglong)*(byte *)pppppppuVar13 << ((byte)uStack_50 & 0x3f));
                pppppppuVar11 =
                     (ulonglong *******)((ulonglong)pppppppuStack_58 | (ulonglong)pppppppuVar42);
                uStack_50 = uStack_50 | 8;
                goto LAB_00205b9b;
              }
              cVar38 = '\x02';
              pppppppuVar29 = (ulonglong *******)0x0;
            }
            else {
LAB_00205b9b:
              pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuVar11 >> 3);
              ppuVar21 = (undefined **)(ulonglong)(uStack_50 - 3);
              uStack_50 = uStack_50 - 3;
              if (0x12 < uStack_48) goto LAB_00206dae;
              pbStack_d8[(byte)(&DAT_0012f514)[uStack_48]] = (byte)pppppppuVar11 & 7;
              uStack_48 = uStack_48 + 1;
              cVar38 = '\0';
              pppppppuVar13 = (ulonglong *******)puVar50;
            }
            pppppppuVar11 = (ulonglong *******)(ulonglong)uVar23;
          }
          else {
            *(ushort *)((longlong)pppppppuVar22 + 0x28ec) = 0x13;
            pppppppuVar42 = (ulonglong *******)&pppppppuStack_58;
            pcStack_110 = (code *)0x205bef;
            cVar38 = miniz_oxide[d073f249698f1019]::inflate::core::init_tree(pppppppuVar22);
            pppppppuVar11 = extraout_RDX;
            uVar54 = extraout_XMM0_Da;
            if (cVar38 == -1) {
              bVar8 = 9;
              uVar9 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar42 >> 8),0xff);
              pppppppuVar13 = pppppppuVar39;
              goto LAB_00206b30;
            }
          }
        } while (cVar38 == '\0');
        if (cVar38 != '\x01') {
          pppppppuVar11 = (ulonglong *******)((ulonglong)pppppppuVar11 & 0xffffffff);
          bVar8 = 9;
LAB_00206ab1:
          pppppppuVar13 = pppppppuVar39;
          goto LAB_00206ab4;
        }
        break;
      case 10:
        pppppppuStack_98 = (ulonglong *******)ppuVar20;
        ppuVar20 = (undefined **)pppppppuStack_60;
        pppppppuVar39 = pppppppuStack_68;
        do {
          pppppppuVar11 = (ulonglong *******)(ulonglong)uStack_48;
          uVar17 = *(ushort *)(pppppppuVar22 + 0x51d);
          uVar9 = (uint)*(ushort *)((longlong)pppppppuVar22 + 0x28ea) + (uint)uVar17;
          uVar28 = (uint7)(uint3)(uStack_48 >> 8);
          if (uVar9 <= uStack_48) {
            if (uStack_48 != uVar9) {
              pppppppuVar11 = (ulonglong *******)CONCAT71(uVar28,0x1a);
              goto LAB_002068b4;
            }
            if (uVar17 < 0x121) {
              pcStack_110 = (code *)0x20638b;
              (*(code *)PTR_memcpy_00219c60)(uVar9,uVar17);
              uVar9 = *(ushort *)(pppppppuVar22 + 0x51d) & 0x1ff;
              uVar54 = (uint)*(ushort *)((longlong)pppppppuVar22 + 0x28ea) +
                       (uint)*(ushort *)(pppppppuVar22 + 0x51d) & 0x1ff;
              if ((ushort)uVar54 < (ushort)uVar9) {
                ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c10;
                uVar24 = 0x200;
                goto LAB_00206d34;
              }
              if ((ulonglong)uVar54 - (ulonglong)uVar9 ==
                  (ulonglong)(*(ushort *)((longlong)pppppppuVar22 + 0x28ea) & 0x1f)) {
                pcStack_110 = (code *)0x2063d1;
                (*(code *)PTR_memcpy_00219c60)();
                *(byte *)((longlong)pppppppuVar22 + 0x28ef) =
                     *(byte *)((longlong)pppppppuVar22 + 0x28ef) - 1;
                pppppppuVar42 = (ulonglong *******)&pppppppuStack_58;
                pcStack_110 = (code *)0x2063e4;
                cVar38 = miniz_oxide[d073f249698f1019]::inflate::core::init_tree(pppppppuVar22);
                pppppppuVar11 = extraout_RDX_01;
                uVar54 = extraout_XMM0_Da_01;
                if (cVar38 != -1) goto LAB_002064c7;
                bVar8 = 10;
                uVar9 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar42 >> 8),0xff);
                ppuVar20 = (undefined **)pppppppuStack_98;
                pppppppuVar48 = pppppppuVar49;
                goto LAB_00206b30;
              }
            }
            else {
              ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218c28;
              uVar24 = 0x120;
LAB_00206d34:
              pcStack_110 = (code *)0x206d3d;
              (*(code *)PTR_slice_index_fail_00219d80)(ppuVar21,uVar24);
            }
            pcStack_110 = (code *)0x206d53;
            (*(code *)PTR_len_mismatch_fail_0021a270)
                      (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218bf8,
                       &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218bf8);
            pppppppuVar31 = (ulonglong *******)ppuVar20;
            pppppppuVar42 = pppppppuVar49;
            puVar50 = (uint *)pppppppuVar39;
            goto LAB_00206d53;
          }
          pppppppuVar42 = (ulonglong *******)(ulonglong)uStack_50;
          if (&DAT_0000000e < pppppppuVar42) {
            uVar9 = uStack_50;
          }
          else if (ppuVar20 < (ulonglong *******)0x2) {
            param_6 = (ulonglong *******)
                      CONCAT71((int7)((ulonglong)param_6 >> 8),
                               (ulonglong *******)ppuVar20 == (ulonglong *******)0x0);
            ppuVar21 = (undefined **)pppppppuVar42;
            do {
              uVar9 = (uint)*(short *)((longlong)pppppppuVar22 +
                                      (ulonglong)((uint)pppppppuStack_58 & 0x3ff) * 2 + 0x1b00);
              pppppppuVar13 = pppppppuVar39;
              if ((int)uVar9 < 0) {
                if ((ulonglong *******)0xa < ppuVar21) {
                  pppppppuVar31 = (ulonglong *******)0xc;
                  do {
                    uVar9 = ~uVar9 + (uint)(((ulonglong)pppppppuStack_58 >>
                                             ((ulonglong)((int)pppppppuVar31 - 2) & 0x3f) & 1) != 0)
                    ;
                    puVar50 = (uint *)pppppppuVar39;
                    if (0x23f < uVar9) goto LAB_00206d9c;
                    uVar9 = (uint)*(short *)((longlong)pppppppuVar22 + (ulonglong)uVar9 * 2 + 0x2300
                                            );
                    if (-1 < (int)uVar9) goto LAB_00206419;
                    bVar53 = pppppppuVar31 <= ppuVar21;
                    pppppppuVar31 = (ulonglong *******)(ulonglong)((int)pppppppuVar31 + 1);
                  } while (bVar53);
                }
              }
              else if ((ulonglong *******)(ulonglong)((uVar9 >> 9) - 1) < ppuVar21) {
LAB_00206419:
                uVar9 = (uint)ppuVar21;
                break;
              }
              if ((char)param_6 != '\0') {
                cVar38 = '\x02';
                pppppppuVar11 = (ulonglong *******)(ulonglong)uVar23;
                pppppppuVar42 = pppppppuStack_58;
                goto LAB_002064c7;
              }
              pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar39 + 1);
              pppppppuStack_68 = pppppppuVar13;
              pppppppuStack_60 = (ulonglong *******)0x0;
              pppppppuStack_58 =
                   (ulonglong *******)
                   ((ulonglong)pppppppuStack_58 |
                   (ulonglong)*(byte *)pppppppuVar39 << ((byte)ppuVar21 & 0x3f));
              uVar9 = (int)pppppppuVar42 + 8;
              pppppppuVar42 = (ulonglong *******)(ulonglong)uVar9;
              param_6 = (ulonglong *******)CONCAT71((int7)((ulonglong)param_6 >> 8),1);
              ppuVar20 = (undefined **)0x0;
              uStack_50 = (uint)(ppuVar21 + 1);
              bVar53 = ppuVar21 < &DAT_00000007;
              ppuVar21 = ppuVar21 + 1;
              pppppppuVar39 = pppppppuVar13;
            } while (bVar53);
          }
          else {
            ppuVar20 = (undefined **)((longlong)ppuVar20 + -2);
            pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuVar39 + 2);
            pppppppuStack_60 = (ulonglong *******)ppuVar20;
            pppppppuStack_58 =
                 (ulonglong *******)
                 ((ulonglong)*(ushort *)pppppppuVar39 << ((byte)uStack_50 & 0x3f) |
                 (ulonglong)pppppppuStack_58);
            pppppppuVar39 = (ulonglong *******)((longlong)pppppppuVar39 + 2);
            uVar9 = uStack_50 | 0x10;
          }
          uStack_4c = (uint)*(short *)((longlong)pppppppuVar22 +
                                      (ulonglong)((uint)pppppppuStack_58 & 0x3ff) * 2 + 0x1b00);
          if ((int)uStack_4c < 0) {
            bVar8 = 0xb;
            do {
              bVar16 = bVar8;
              pppppppuVar13 = (ulonglong *******)(ulonglong)(byte)(bVar16 - 1);
              uVar18 = ~uStack_4c +
                       (uint)(((ulonglong)pppppppuStack_58 >> ((ulonglong)pppppppuVar13 & 0x3f) & 1)
                             != 0);
              if (0x23f < uVar18) {
                uStack_4c = 0x7fff;
                break;
              }
              uStack_4c = (uint)*(short *)((longlong)pppppppuVar22 + (ulonglong)uVar18 * 2 + 0x2300)
              ;
              bVar8 = bVar16 + 1;
            } while ((int)uStack_4c < 0);
            uVar18 = (uint)bVar16;
          }
          else {
            uVar18 = uStack_4c >> 9;
            uStack_4c = uStack_4c & 0x1ff;
          }
          pppppppuStack_58 =
               (ulonglong *******)((ulonglong)pppppppuStack_58 >> ((byte)uVar18 & 0x3f));
          uStack_50 = uVar9 - uVar18;
          pppppppuVar42 = pppppppuStack_58;
          if (uStack_4c < 0x10) {
            *(byte *)((longlong)pppppppuVar22 + (ulonglong)(uStack_48 & 0x1ff)) = (byte)uStack_4c;
            pppppppuVar11 = (ulonglong *******)(ulonglong)(uStack_48 + 1);
            uStack_48 = uStack_48 + 1;
            cVar38 = '\0';
          }
          else {
            cVar38 = '\x01';
            if (pppppppuVar11 == (ulonglong *******)0x0) {
              pppppppuVar11 = (ulonglong *******)CONCAT71(uVar28,0x20);
              if (uStack_4c == 0x10) goto LAB_002064c7;
            }
            auStack_c0[0] = 0x70302;
            bStack_44 = *(byte *)((longlong)auStack_c0 + (ulonglong)(uStack_4c & 3));
            pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar11 >> 8),0xb);
          }
LAB_002064c7:
        } while (cVar38 == '\0');
        if (cVar38 == '\x02') {
          pppppppuVar11 = (ulonglong *******)((ulonglong)pppppppuVar11 & 0xffffffff);
          bVar8 = 10;
          ppuVar20 = (undefined **)pppppppuStack_98;
          goto LAB_00206af6;
        }
LAB_002068b4:
        ppuVar20 = (undefined **)pppppppuStack_98;
        goto LAB_002056ee;
      case 0xb:
        pppppppuVar13 = pppppppuStack_58;
        if (uStack_50 < bStack_44) {
          do {
            pppppppuVar13 = pppppppuStack_68;
            if ((ulonglong *******)((longlong)pppppppuStack_60 + -1) ==
                (ulonglong *******)0xffffffffffffffff) {
              bVar8 = 0xb;
              goto LAB_00206aae;
            }
            pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuStack_68 + 1);
            pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + -1);
            pppppppuVar39 =
                 (ulonglong *******)((ulonglong)*(byte *)pppppppuVar13 << ((byte)uStack_50 & 0x3f));
            pppppppuVar13 =
                 (ulonglong *******)((ulonglong)pppppppuStack_58 | (ulonglong)pppppppuVar39);
            uStack_50 = uStack_50 + 8;
            pppppppuStack_58 = pppppppuVar13;
          } while (uStack_50 < bStack_44);
        }
        pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuVar13 >> (bStack_44 & 0x3f));
        uStack_50 = uStack_50 - bStack_44;
        auStack_c0[0] = 3;
        auStack_c0[1] = 0;
        auStack_c0[2] = 3;
        auStack_c0[3] = 0;
        auStack_c0[4] = 0xb;
        auStack_c0[5] = 0;
        puVar50 = (uint *)(ulonglong)uStack_48;
        pppppppuVar31 =
             (ulonglong *******)
             (((ulonglong)pppppppuVar13 & ~(-1L << (bStack_44 & 0x3f))) +
             *(longlong *)(auStack_c0 + (ulonglong)(uStack_4c & 2) * 2));
        uVar33 = (ulonglong)((int)pppppppuVar31 + uStack_48 & 0x1ff);
        lVar15 = uVar33 - (uStack_48 & 0x1ff);
        pppppppuVar13 = (ulonglong *******)ppuVar20;
        pppppppuVar42 = pppppppuVar48;
        if (uVar33 < (uStack_48 & 0x1ff)) goto LAB_00206d77;
        pppppppuVar42 = (ulonglong *******)0x0;
        pcStack_110 = (code *)0x206800;
        uVar54 = (*(code *)PTR_memset_00219d00)((ulonglong)(uStack_4c & 2),lVar15);
        uStack_48 = (int)pppppppuVar31 + uVar6;
        pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)lVar15 >> 8),10);
        break;
      case 0xc:
        goto switchD_00205703_caseD_c;
      case 0xd:
        pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x15);
        if (uStack_48 < 0x100) {
          pppppppuVar42 = pppppppuStack_88;
          if (pppppppuStack_88 == pppppppuVar30) goto LAB_00206ca0;
          pppppppuVar48 = pppppppuVar49;
          if (pppppppuStack_88 <= pppppppuVar30) goto LAB_00206dc8;
          *(byte *)(lStack_90 + (longlong)pppppppuVar30) = (byte)uStack_48;
          pppppppuVar30 = (ulonglong *******)((longlong)pppppppuVar30 + 1);
          pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0xc);
        }
        goto LAB_002056ee;
      case 0xe:
        if (uStack_50 < bStack_44) {
          do {
            if (pppppppuStack_60 == (ulonglong *******)0x0) {
              bVar8 = 0xe;
              pppppppuStack_60 = (ulonglong *******)0x0;
              pppppppuVar13 = pppppppuStack_68;
              goto LAB_00206af3;
            }
            pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + -1);
            bVar8 = *(byte *)pppppppuStack_68;
            pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuStack_68 + 1);
            param_6 = (ulonglong *******)((ulonglong)bVar8 << ((byte)uStack_50 & 0x3f));
            pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuStack_58 | (ulonglong)param_6)
            ;
            uStack_50 = uStack_50 + 8;
          } while (uStack_50 < bStack_44);
          pppppppuVar13 = pppppppuStack_68;
        }
        uVar9 = (uint)pppppppuStack_58;
        pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuStack_58 >> (bStack_44 & 0x3f));
        uStack_50 = uStack_50 - bStack_44;
        uStack_48 = uStack_48 + (~(uint)(-1L << (bStack_44 & 0x3f)) & uVar9);
        pppppppuVar11 = (ulonglong *******)CONCAT71((uint7)(uint3)(uStack_50 >> 8),0xf);
        pppppppuVar42 = pppppppuStack_58;
        goto LAB_002056ee;
      case 0xf:
        pppppppuVar11 = (ulonglong *******)(ulonglong)uStack_50;
        if (pppppppuVar11 <= &DAT_0000000e) {
          if (pppppppuStack_60 < (ulonglong *******)0x2) {
            param_6 = (ulonglong *******)
                      CONCAT71((int7)((ulonglong)param_6 >> 8),
                               pppppppuStack_60 == (ulonglong *******)0x0);
            ppuVar21 = (undefined **)pppppppuVar11;
            pppppppuVar42 = pppppppuStack_60;
            pppppppuVar13 = pppppppuStack_68;
            do {
              uVar18 = (uint)*(short *)((longlong)pppppppuVar22 +
                                       (ulonglong)((uint)pppppppuStack_58 & 0x3ff) * 2 + 0xe80);
              uVar9 = (uint)ppuVar21;
              if ((int)uVar18 < 0) {
                if ((ulonglong *******)0xa < ppuVar21) {
                  pppppppuVar31 = (ulonglong *******)0xc;
                  do {
                    uVar18 = ~uVar18 + (uint)(((ulonglong)pppppppuStack_58 >>
                                               ((ulonglong)((int)pppppppuVar31 - 2) & 0x3f) & 1) !=
                                             0);
                    pppppppuVar39 = pppppppuVar13;
                    if (0x23f < uVar18) goto LAB_00206d9c;
                    uVar18 = (uint)*(short *)((longlong)pppppppuVar22 +
                                             (ulonglong)uVar18 * 2 + 0x1680);
                    if (-1 < (int)uVar18) {
                      pppppppuStack_68 = pppppppuVar13;
                      pppppppuStack_60 = pppppppuVar42;
                      uStack_50 = uVar9;
                      goto LAB_002069c5;
                    }
                    bVar53 = pppppppuVar31 <= ppuVar21;
                    pppppppuVar31 = (ulonglong *******)(ulonglong)((int)pppppppuVar31 + 1);
                  } while (bVar53);
                }
              }
              else if ((ulonglong *******)(ulonglong)((uVar18 >> 9) - 1) < ppuVar21) break;
              if ((char)param_6 != '\0') {
                bVar8 = 0xf;
                pppppppuStack_60 = pppppppuVar42;
                goto LAB_00206af3;
              }
              bVar8 = *(byte *)pppppppuVar13;
              pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar13 + 1);
              pppppppuStack_58 =
                   (ulonglong *******)
                   ((ulonglong)pppppppuStack_58 | (ulonglong)bVar8 << ((byte)ppuVar21 & 0x3f));
              uVar9 = (int)pppppppuVar11 + 8;
              pppppppuVar11 = (ulonglong *******)(ulonglong)uVar9;
              param_6 = (ulonglong *******)CONCAT71((int7)((ulonglong)param_6 >> 8),1);
              pppppppuVar42 = (ulonglong *******)0x0;
              uStack_50 = (uint)(ppuVar21 + 1);
              bVar53 = ppuVar21 < &DAT_00000007;
              ppuVar21 = ppuVar21 + 1;
            } while (bVar53);
            pppppppuStack_68 = pppppppuVar13;
            pppppppuStack_60 = pppppppuVar42;
            uStack_50 = uVar9;
          }
          else {
            uVar17 = *(ushort *)pppppppuStack_68;
            pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuStack_68 + 2);
            pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + -2);
            pppppppuStack_58 =
                 (ulonglong *******)
                 ((ulonglong)uVar17 << (bVar16 & 0x3f) | (ulonglong)pppppppuStack_58);
            uStack_50 = uStack_50 | 0x10;
          }
        }
LAB_002069c5:
        uVar9 = (uint)*(short *)((longlong)pppppppuVar22 +
                                (ulonglong)((uint)pppppppuStack_58 & 0x3ff) * 2 + 0xe80);
        pppppppuVar42 = (ulonglong *******)(ulonglong)uVar9;
        if ((int)uVar9 < 0) {
          uVar9 = 0xb;
          do {
            uVar18 = uVar9;
            uVar9 = ~(uint)pppppppuVar42 +
                    (uint)(((ulonglong)pppppppuStack_58 >> ((ulonglong)(uVar18 - 1 & 0xff) & 0x3f) &
                           1) != 0);
            if (0x23f < uVar9) {
              pppppppuVar42 = (ulonglong *******)0x7fff;
              break;
            }
            uVar32 = (uint)*(short *)((longlong)pppppppuVar22 + (ulonglong)uVar9 * 2 + 0x1680);
            pppppppuVar42 = (ulonglong *******)(ulonglong)uVar32;
            uVar9 = (uint)(byte)((char)uVar18 + 1);
          } while ((int)uVar32 < 0);
        }
        else {
          uVar18 = uVar9 >> 9;
          pppppppuVar42 = (ulonglong *******)(ulonglong)(uVar9 & 0x1ff);
        }
        pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuStack_58 >> ((byte)uVar18 & 0x3f))
        ;
        uStack_50 = uStack_50 - uVar18;
        pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuStack_58 >> 8),0x22);
        if ((uint)pppppppuVar42 < 0x1e) {
          bStack_44 = (((byte)((ulonglong)pppppppuVar42 >> 1) & 0x7f) - 1) +
                      (((ulonglong)pppppppuVar42 >> 1 & 0x7f) == 0);
          uStack_4c = (uint)*(ushort *)(&DAT_0012f528 + (longlong)pppppppuVar42 * 2);
          pppppppuVar11 = (ulonglong *******)&DAT_00000010;
          if ((uint)pppppppuVar42 < 4) {
            pppppppuVar11 = (ulonglong *******)&DAT_00000016;
          }
        }
        goto LAB_002056ee;
      case 0x10:
        if (uStack_50 < bStack_44) {
          if (pppppppuStack_60 == (ulonglong *******)0x0) {
LAB_00206acc:
            pppppppuStack_60 = (ulonglong *******)0x0;
            bVar8 = 0x10;
            goto LAB_00206af3;
          }
          lVar15 = 1 - (longlong)pppppppuStack_60;
          uVar9 = uStack_50;
          pppppppuVar13 = pppppppuStack_68;
          while( true ) {
            param_6 = pppppppuStack_58;
            pppppppuStack_58 =
                 (ulonglong *******)
                 ((ulonglong)*(byte *)pppppppuVar13 << ((byte)uVar9 & 0x3f) | (ulonglong)param_6);
            uStack_50 = uVar9 + 8;
            if (bStack_44 <= uStack_50) break;
            lVar15 = lVar15 + 1;
            uVar9 = uVar9 + 8;
            pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar13 + 1);
            if (lVar15 == 1) {
              pppppppuVar13 = (ulonglong *******)0x1;
              uStack_50 = uVar9;
              goto LAB_00206acc;
            }
          }
          pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuVar13 + 1);
          pppppppuVar13 = (ulonglong *******)-lVar15;
          pppppppuStack_60 = pppppppuVar13;
        }
        uVar9 = (uint)pppppppuStack_58;
        pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuStack_58 >> (bStack_44 & 0x3f));
        uStack_50 = uStack_50 - bStack_44;
        uStack_4c = uStack_4c + (~(uint)(-1L << (bStack_44 & 0x3f)) & uVar9);
        pppppppuVar11 = (ulonglong *******)CONCAT71((uint7)(uint3)(uStack_50 >> 8),0x16);
        pppppppuVar42 = pppppppuStack_58;
        goto LAB_002056ee;
      case 0x11:
        pppppppuVar11 = pppppppuStack_58;
        if (uStack_50 < 8) {
          if (pppppppuStack_60 == (ulonglong *******)0x0) {
            bVar8 = 0x11;
            goto LAB_00206af3;
          }
          pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuStack_68 + 1);
          pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + -1);
          pppppppuVar11 =
               (ulonglong *******)
               ((ulonglong)pppppppuStack_58 | (ulonglong)*(byte *)pppppppuVar44 << (bVar16 & 0x3f));
          uStack_50 = uStack_50 | 8;
          pppppppuVar42 = pppppppuVar44;
        }
        pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuVar11 >> 8);
        uStack_50 = uStack_50 - 8;
        uStack_4c = (uint)pppppppuVar11 & 0xff;
        pppppppuVar11 = (ulonglong *******)CONCAT71((uint7)((ulonglong)pppppppuVar11 >> 0x10),0x12);
        goto LAB_002056ee;
      case 0x12:
        pppppppuVar42 = pppppppuStack_88;
        if (pppppppuStack_88 == pppppppuVar30) {
LAB_00206ca0:
          uVar9 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar42 >> 8),2);
          pppppppuVar48 = pppppppuVar49;
          goto LAB_00206b30;
        }
        pppppppuVar48 = pppppppuVar49;
        if (pppppppuStack_88 <= pppppppuVar30) goto LAB_00206dc8;
        *(byte *)(lStack_90 + (longlong)pppppppuVar30) = (byte)uStack_4c;
        pppppppuVar30 = (ulonglong *******)((longlong)pppppppuVar30 + 1);
        uVar9 = 0x11;
        if (uStack_50 == 0) {
          uVar9 = 6;
        }
        uStack_48 = uStack_48 - 1;
        pppppppuVar11 = (ulonglong *******)(ulonglong)uVar9;
        if (uStack_48 == 0) {
          pppppppuVar11 = (ulonglong *******)0x6;
        }
        goto LAB_002056ee;
      case 0x13:
        lStack_108 = lStack_90;
        uVar33 = (ulonglong)uStack_4c;
        pppppppuVar44 = pppppppuVar42;
        pppppppuStack_98 = (ulonglong *******)ppuVar20;
        do {
          uVar9 = uStack_48;
          pppppppuVar22 = (ulonglong *******)((longlong)pppppppuVar31 - (longlong)pppppppuVar30);
          if (pppppppuVar22 == (ulonglong *******)0x0) {
            bVar8 = 0x13;
            uVar9 = (uint)CONCAT71((int7)((ulonglong)pppppppuVar44 >> 8),2);
            ppuVar20 = (undefined **)pppppppuStack_98;
            pppppppuVar48 = (ulonglong *******)0x0;
            pppppppuVar30 = pppppppuVar31;
            goto LAB_00206b30;
          }
          if ((ulonglong *******)(ulonglong)uStack_48 < pppppppuVar22) {
            pppppppuVar22 = (ulonglong *******)(ulonglong)uStack_48;
          }
          pcStack_110 = (code *)0x2066cb;
          pppppppuVar44 = pppppppuVar31;
          pppppppuVar13 = pppppppuVar22;
          param_6 = pppppppuVar49;
          uVar54 = miniz_oxide[d073f249698f1019]::inflate::core::transfer
                             (lStack_108,pppppppuVar31,
                              (longlong)pppppppuVar30 - uVar33 & (ulonglong)pppppppuVar49,
                              pppppppuVar30);
          pppppppuVar30 = (ulonglong *******)((longlong)pppppppuVar30 + (longlong)pppppppuVar22);
          uStack_48 = uVar9 - (int)pppppppuVar22;
        } while (uStack_48 != 0);
        pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)extraout_RDX_02 >> 8),0xc);
        puVar50 = (uint *)pppppppuVar30;
LAB_002066e8:
        ppuVar20 = (undefined **)pppppppuStack_98;
        pppppppuVar42 = pppppppuVar44;
        pppppppuVar22 = pppppppuStack_a0;
        pppppppuVar30 = (ulonglong *******)puVar50;
        goto LAB_00206995;
      case 0x14:
        pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,3);
        if (*(byte *)((longlong)pppppppuVar22 + 0x28ee) != 0) {
          uVar47 = (longlong)ppuVar20 - (longlong)pppppppuStack_60;
          uVar33 = (ulonglong)(uStack_50 >> 3);
          if ((uint)uVar47 < uStack_50 >> 3) {
            uVar33 = uVar47 & 0xffffffff;
          }
          pppppppuVar39 = (ulonglong *******)(ulonglong)(uint)((int)uVar33 * 8);
          uStack_50 = (uStack_50 & 0xfffffff8) + (int)uVar33 * -8;
          pppppppuVar11 = (ulonglong *******)(uVar47 - uVar33);
          pppppppuVar42 = (ulonglong *******)((longlong)ppuVar20 - (longlong)pppppppuVar11);
          if (ppuVar20 < pppppppuVar11) goto LAB_00206d89;
          uVar33 = (ulonglong)pppppppuStack_58 >> (bVar16 & 7);
          pppppppuVar13 = (ulonglong *******)(~(-1L << ((byte)uStack_50 & 0x38)) & uVar33);
          pppppppuStack_68 =
               (ulonglong *******)((longlong)pppppppuVar11 + (longlong)pppppppuStack_100);
          pppppppuStack_60 = pppppppuVar42;
          pppppppuStack_58 = pppppppuVar13;
          uVar27 = (undefined7)(uVar33 >> 8);
          pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x18);
          if ((unaff_retaddr & 1) != 0) {
            uStack_48 = 0;
            pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x17);
          }
        }
        goto LAB_002056ee;
      case 0x15:
        uStack_48 = uStack_48 & 0x1ff;
        pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x14);
        if (uStack_48 != 0x100) {
          pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x21);
          if (uStack_48 < 0x11e) {
            uVar9 = uVar6 - 1 & 0x1f;
            bStack_44 = (&DAT_00114900)[uVar9];
            uStack_48 = (uint)*(ushort *)(&DAT_0012f56e + (ulonglong)uVar9 * 2);
            pppppppuVar11 = (ulonglong *******)(CONCAT71(uVar27,uVar9 - 0x1c < 0xffffffec) | 0xe);
          }
        }
        goto LAB_002056ee;
      case 0x16:
        pppppppuVar31 = (ulonglong *******)(ulonglong)uStack_4c;
        param_6 = (ulonglong *******)((longlong)pppppppuVar30 - (longlong)pppppppuVar31);
        pppppppuVar11 = (ulonglong *******)CONCAT71(uVar27,0x1e);
        pppppppuVar42 = (ulonglong *******)((ulonglong)uVar28 << 8);
        if (pppppppuVar31 <= pppppppuVar30 || (unaff_retaddr & 4) == 0) {
          pppppppuVar42 = pppppppuStack_88;
          if (pppppppuVar31 <= pppppppuStack_88) {
            pppppppuVar13 = (ulonglong *******)(ulonglong)uStack_48;
            pppppppuVar31 = (ulonglong *******)((longlong)pppppppuVar30 + (longlong)pppppppuVar13);
            if ((pppppppuStack_88 < pppppppuVar31) ||
               (pppppppuVar11 = (ulonglong *******)((ulonglong)param_6 & (ulonglong)pppppppuVar49),
               pppppppuVar42 =
                    (ulonglong *******)((longlong)pppppppuVar11 - (longlong)pppppppuVar30),
               param_6 = (ulonglong *******)
                         CONCAT71((int7)((ulonglong)pppppppuVar42 >> 8),
                                  pppppppuVar42 < pppppppuVar13 && pppppppuVar30 <= pppppppuVar11),
               pppppppuVar42 < pppppppuVar13 && pppppppuVar30 <= pppppppuVar11)) {
              pppppppuVar11 = (ulonglong *******)0x13;
              pppppppuVar42 = pppppppuStack_88;
              if (pppppppuVar13 == (ulonglong *******)0x0) {
                pppppppuVar11 = (ulonglong *******)0xc;
              }
            }
            else {
              pcStack_110 = (code *)0x2069b0;
              pppppppuVar42 = pppppppuStack_88;
              param_6 = pppppppuVar49;
              uVar54 = miniz_oxide[d073f249698f1019]::inflate::core::apply_match
                                 (lStack_90,pppppppuStack_88,pppppppuVar30);
              pppppppuVar11 =
                   (ulonglong *******)CONCAT71((int7)((ulonglong)extraout_RDX_04 >> 8),0xc);
              pppppppuVar30 = pppppppuVar31;
            }
          }
        }
        goto LAB_002056ee;
      case 0x17:
        pppppppuVar42 = (ulonglong *******)(ulonglong)uStack_48;
        pppppppuVar11 = pppppppuStack_68;
        if (uStack_48 < 4) {
          uVar9 = *(uint *)((longlong)pppppppuVar22 + 0x28d4);
          pppppppuVar42 = (ulonglong *******)(ulonglong)(uStack_48 - 1);
          pppppppuVar13 = pppppppuStack_58;
          uVar18 = uStack_50;
          do {
            if (uVar18 == 0) {
              if (pppppppuStack_60 == (ulonglong *******)0x0) {
LAB_00206ae9:
                pppppppuStack_60 = (ulonglong *******)0x0;
                bVar8 = 0x17;
                goto LAB_00206af3;
              }
              pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + -1);
              bVar8 = *(byte *)pppppppuVar11;
              pppppppuVar11 = (ulonglong *******)((longlong)pppppppuVar11 + 1);
              uVar9 = uVar9 << 8 | (uint)bVar8;
              uVar18 = 0;
            }
            else {
              if (uVar18 < 8) {
                if (pppppppuStack_60 == (ulonglong *******)0x0) goto LAB_00206ae9;
                bVar8 = *(byte *)pppppppuVar11;
                pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuStack_60 + -1);
                pppppppuVar11 = (ulonglong *******)((longlong)pppppppuVar11 + 1);
                pppppppuVar13 =
                     (ulonglong *******)
                     ((ulonglong)pppppppuVar13 | (ulonglong)bVar8 << ((byte)uVar18 & 0x3f));
                uVar18 = uVar18 | 8;
              }
              uVar32 = (uint)pppppppuVar13;
              pppppppuVar13 = (ulonglong *******)((ulonglong)pppppppuVar13 >> 8);
              pppppppuStack_58 = pppppppuVar13;
              uVar18 = uVar18 - 8;
              uStack_50 = uVar18;
              uVar9 = uVar9 << 8 | uVar32 & 0xff;
            }
            *(uint *)((longlong)pppppppuVar22 + 0x28d4) = uVar9;
            uStack_48 = (int)pppppppuVar42 + 2;
            param_6 = (ulonglong *******)(ulonglong)uStack_48;
            uVar32 = (int)pppppppuVar42 + 1;
            pppppppuVar42 = (ulonglong *******)(ulonglong)uVar32;
          } while (uVar32 < 3);
        }
        pppppppuStack_68 = pppppppuVar11;
        pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuStack_60 >> 8),0x18);
        goto LAB_002056ee;
      case 0x18:
        uVar9 = 0;
        pppppppuVar48 = pppppppuVar49;
        goto LAB_00206b30;
      }
LAB_0020698f:
      pppppppuVar13 = pppppppuVar39;
LAB_00206995:
      goto LAB_002056ee;
    }
  }
  DAT_00000008 = 0xfd;
  ppppppuVar12 = (ulonglong ******)0x0;
  uRam0000000000000000 = 0;
LAB_00206c67:
  pppppppuStack_a8[2] = ppppppuVar12;
  return pppppppuStack_a8;
switchD_00205703_caseD_c:
  pppppppuVar11 = pppppppuStack_60;
  pppppppuVar44 = param_6;
  if ((ulonglong *******)0x3 < pppppppuStack_60) {
    pppppppuVar39 = pppppppuStack_68;
    param_6 = pppppppuStack_60;
    do {
      if ((ulonglong)((longlong)pppppppuStack_88 - (longlong)pppppppuVar30) < 2) break;
      if (&DAT_0000000d < pppppppuVar11 &&
          0x102 < (ulonglong)((longlong)pppppppuStack_88 - (longlong)pppppppuVar30)) {
        pppppppuVar42 = (ulonglong *******)&pppppppuStack_68;
        pppppppuVar13 = (ulonglong *******)&pppppppuStack_58;
        pcStack_110 = (code *)0x206962;
        pppppppuVar31 = pppppppuVar49;
        pppppppuStack_68 = pppppppuVar39;
        pppppppuStack_60 = param_6;
        uVar9 = miniz_oxide[d073f249698f1019]::inflate::core::decompress_fast
                          (pppppppuVar22,pppppppuVar42,&lStack_90,pppppppuVar48);
        bVar8 = (byte)extraout_RDX_03;
        pppppppuVar11 = extraout_RDX_03;
        param_6 = pppppppuVar31;
        uVar54 = extraout_XMM0_Da_02;
        if ((char)uVar9 == '\0') goto LAB_002056ee;
        pppppppuVar11 = (ulonglong *******)(ulonglong)uVar9;
        goto LAB_00206af6;
      }
      if (uStack_50 < 0x1e) {
        uVar9 = *(uint *)pppppppuVar39;
        pppppppuVar11 = (ulonglong *******)((longlong)pppppppuVar11 + -4);
        pppppppuVar39 = (ulonglong *******)((longlong)pppppppuVar39 + 4);
        pppppppuStack_58 =
             (ulonglong *******)
             ((ulonglong)pppppppuStack_58 | (ulonglong)uVar9 << ((byte)uStack_50 & 0x3f));
        uStack_50 = uStack_50 | 0x20;
        param_6 = pppppppuVar11;
      }
      uVar9 = (uint)*(short *)((longlong)pppppppuVar22 +
                              (ulonglong)((uint)pppppppuStack_58 & 0x3ff) * 2 + 0x200);
      pppppppuVar29 = (ulonglong *******)(ulonglong)uVar9;
      if ((int)uVar9 < 0) {
        uVar18 = 0xb;
        do {
          uVar9 = uVar18;
          uVar18 = ~(uint)pppppppuVar29 +
                   (uint)(((ulonglong)pppppppuStack_58 >> ((ulonglong)(uVar9 - 1 & 0xff) & 0x3f) & 1
                          ) != 0);
          if (0x23f < uVar18) {
            pppppppuVar29 = (ulonglong *******)0x7fff;
            break;
          }
          uVar32 = (uint)*(short *)((longlong)pppppppuVar22 + (ulonglong)uVar18 * 2 + 0xa00);
          pppppppuVar29 = (ulonglong *******)(ulonglong)uVar32;
          uVar18 = (uint)(byte)((char)uVar9 + 1);
        } while ((int)uVar32 < 0);
      }
      else {
        uVar9 = uVar9 >> 9;
      }
      uStack_48 = (uint)pppppppuVar29;
      pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuStack_58 >> ((byte)uVar9 & 0x3f));
      uStack_50 = uStack_50 - uVar9;
      if (((uint)pppppppuVar29 >> 8 & 1) != 0) {
        pppppppuStack_68 = pppppppuVar39;
        pppppppuStack_60 = param_6;
LAB_0020698d:
        pppppppuVar11 = (ulonglong *******)CONCAT71((int7)((ulonglong)pppppppuVar11 >> 8),0x15);
        pppppppuVar42 = pppppppuStack_88;
        pppppppuStack_68 = pppppppuVar39;
        pppppppuStack_60 = param_6;
        goto LAB_0020698f;
      }
      uVar9 = (uint)*(short *)((longlong)pppppppuVar22 +
                              (ulonglong)((uint)pppppppuStack_58 & 0x3ff) * 2 + 0x200);
      puVar50 = (uint *)(ulonglong)uVar9;
      if ((int)uVar9 < 0) {
        uVar9 = 0xb;
        do {
          bVar8 = (byte)uVar9;
          uVar9 = ~(uint)puVar50 +
                  (uint)(((ulonglong)pppppppuStack_58 >> ((ulonglong)(uVar9 - 1 & 0xff) & 0x3f) & 1)
                        != 0);
          if (0x23f < uVar9) {
            puVar50 = (uint *)0x7fff;
            break;
          }
          uVar18 = (uint)*(short *)((longlong)pppppppuStack_a0 + (ulonglong)uVar9 * 2 + 0xa00);
          puVar50 = (uint *)(ulonglong)uVar18;
          uVar9 = (uint)(byte)(bVar8 + 1);
        } while ((int)uVar18 < 0);
        ppuVar21 = (undefined **)(ulonglong)bVar8;
        pppppppuVar22 = pppppppuStack_a0;
      }
      else {
        ppuVar21 = (undefined **)(ulonglong)(uVar9 >> 9);
      }
      pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuStack_58 >> ((byte)ppuVar21 & 0x3f))
      ;
      uStack_50 = uStack_50 - (int)ppuVar21;
      if (pppppppuStack_88 <= pppppppuVar30) goto LAB_00206dc0;
      *(byte *)(lStack_90 + (longlong)pppppppuVar30) = (byte)pppppppuVar29;
      pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar30 + 1);
      if (((uint)puVar50 >> 8 & 1) != 0) {
        pppppppuStack_68 = pppppppuVar39;
        pppppppuStack_60 = param_6;
        uStack_48 = (uint)puVar50;
        pppppppuVar30 = pppppppuVar13;
        goto LAB_0020698d;
      }
      if (pppppppuStack_88 <= pppppppuVar13) goto LAB_00206dd5;
      *(byte *)(lStack_90 + 1 + (longlong)pppppppuVar30) = (byte)puVar50;
      pppppppuVar30 = (ulonglong *******)((longlong)pppppppuVar30 + 2);
    } while ((ulonglong *******)0x3 < pppppppuVar11);
    pppppppuStack_68 = pppppppuVar39;
    pppppppuStack_60 = param_6;
    pppppppuVar13 = pppppppuVar39;
    pppppppuVar44 = param_6;
  }
  pppppppuVar42 = (ulonglong *******)(ulonglong)uStack_50;
  if (pppppppuVar42 <= &DAT_0000000e) {
    if (pppppppuVar11 < (ulonglong *******)0x2) {
      bVar53 = pppppppuVar11 == (ulonglong *******)0x0;
      ppuVar21 = (undefined **)pppppppuVar42;
      uVar9 = uStack_50;
      do {
        uStack_50 = uVar9;
        pppppppuVar11 = pppppppuStack_68;
        uVar9 = (uint)*(short *)((longlong)pppppppuVar22 +
                                (ulonglong)((uint)pppppppuStack_58 & 0x3ff) * 2 + 0x200);
        pppppppuVar13 = pppppppuStack_68;
        if ((int)uVar9 < 0) {
          if ((ulonglong *******)0xa < ppuVar21) {
            param_6 = (ulonglong *******)0xc;
            do {
              uVar9 = ~uVar9 + (uint)(((ulonglong)pppppppuStack_58 >>
                                       ((ulonglong)((int)param_6 - 2) & 0x3f) & 1) != 0);
              pppppppuVar39 = pppppppuStack_68;
              puVar50 = &switchD_00205703::switchdataD_0012f474;
              if (0x23f < uVar9) goto LAB_00206d9c;
              uVar9 = (uint)*(short *)((longlong)pppppppuVar22 + (ulonglong)uVar9 * 2 + 0xa00);
              pppppppuVar44 = param_6;
              if (-1 < (int)uVar9) goto LAB_002068cc;
              pppppppuVar44 = (ulonglong *******)(ulonglong)((int)param_6 + 1);
              bVar52 = param_6 <= ppuVar21;
              param_6 = pppppppuVar44;
            } while (bVar52);
          }
        }
        else if ((ulonglong *******)(ulonglong)((uVar9 >> 9) - 1) < ppuVar21) {
LAB_002068cc:
          uStack_50 = (uint)ppuVar21;
          break;
        }
        if (bVar53) {
          bVar8 = 0xc;
          param_6 = pppppppuVar44;
          goto LAB_00206af3;
        }
        pppppppuVar13 = (ulonglong *******)((longlong)pppppppuStack_68 + 1);
        pppppppuStack_68 = pppppppuVar13;
        pppppppuStack_60 = (ulonglong *******)0x0;
        pppppppuStack_58 =
             (ulonglong *******)
             ((ulonglong)pppppppuStack_58 |
             (ulonglong)*(byte *)pppppppuVar11 << ((byte)ppuVar21 & 0x3f));
        uStack_50 = (int)pppppppuVar42 + 8;
        pppppppuVar42 = (ulonglong *******)(ulonglong)uStack_50;
        bVar53 = true;
        pppppppuVar11 = (ulonglong *******)(ppuVar21 + 1);
        bVar52 = ppuVar21 < &DAT_00000007;
        ppuVar21 = (undefined **)pppppppuVar11;
        uVar9 = (uint)pppppppuVar11;
      } while (bVar52);
    }
    else {
      uVar17 = *(ushort *)pppppppuStack_68;
      pppppppuStack_68 = (ulonglong *******)((longlong)pppppppuStack_68 + 2);
      pppppppuStack_60 = (ulonglong *******)((longlong)pppppppuVar11 + -2);
      pppppppuStack_58 =
           (ulonglong *******)
           ((ulonglong)uVar17 << ((byte)uStack_50 & 0x3f) | (ulonglong)pppppppuStack_58);
      uStack_50 = uStack_50 | 0x10;
    }
  }
  uVar9 = (uint)*(short *)((longlong)pppppppuVar22 +
                          (ulonglong)((uint)pppppppuStack_58 & 0x3ff) * 2 + 0x200);
  uVar33 = (ulonglong)uVar9;
  if ((int)uVar9 < 0) {
    uVar9 = 0xb;
    do {
      uVar18 = uVar9;
      uVar9 = ~(uint)uVar33 +
              (uint)(((ulonglong)pppppppuStack_58 >> ((ulonglong)(uVar18 - 1 & 0xff) & 0x3f) & 1) !=
                    0);
      if (0x23f < uVar9) {
        uVar33 = 0x7fff;
        break;
      }
      uVar32 = (uint)*(short *)((longlong)pppppppuVar22 + (ulonglong)uVar9 * 2 + 0xa00);
      uVar33 = (ulonglong)uVar32;
      uVar9 = (uint)(byte)((char)uVar18 + 1);
    } while ((int)uVar32 < 0);
  }
  else {
    uVar18 = uVar9 >> 9;
    uVar33 = (ulonglong)(uVar9 & 0x1ff);
  }
  pppppppuStack_58 = (ulonglong *******)((ulonglong)pppppppuStack_58 >> ((byte)uVar18 & 0x3f));
  uStack_50 = uStack_50 - uVar18;
  uStack_48 = (uint)uVar33;
  pppppppuVar11 = (ulonglong *******)CONCAT71((int7)(uVar33 >> 8),0xd);
  pppppppuVar42 = pppppppuStack_58;
  param_6 = pppppppuVar44;
  goto LAB_002056ee;
  while( true ) {
    pcStack_208 = (code *)0x2074b0;
    uVar55 = (*(code *)PTR_memmove_00219fb0)(ppuStack_1d0);
    ppuVar51 = (undefined **)((longlong)ppuVar51 + 4);
    ppuVar25 = (undefined **)((longlong)ppuVar43 + 4);
    if (ppuVar26 <= ppuVar51) break;
LAB_00207467:
    ppuVar43 = ppuVar25;
    pbStack_1f0 = (byte *)((longlong)ppuVar43 + 3);
    uStack_1e8 = 0;
    pcStack_208 = (code *)0x20748a;
    ppuStack_1f8 = ppuVar43;
    lVar15 = (*(code *)PTR_<core[c0acaeba6ab4c2e0]::ops::range::RangeInclusive<usize>>_0021ad50)();
    ppuVar21 = (undefined **)((longlong)ppuVar21 - lVar15);
    if ((undefined **)((longlong)ppuVar20 - (longlong)ppuVar21) < ppuVar51) {
      pcStack_208 = (code *)0x2076a6;
      uVar55 = (*(code *)PTR_panic_fmt_0021a010)
                         ((undefined **)((longlong)ppuVar20 - (longlong)ppuVar21),
                          &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ef8);
      goto LAB_002076a6;
    }
  }
  ppuVar25 = (undefined **)((longlong)ppuVar43 + 4);
  pppppppuVar39 = pppppppuStack_1d8;
  ppuVar43 = ppuStack_1e0;
  ppuVar36 = ppuStack_1d0;
  goto LAB_002075a1;
  while( true ) {
    (pbVar10 + 1)[(longlong)ppuVar21] = *(byte *)((longlong)ppuVar36 + (longlong)ppuVar37);
    ppuVar37 = (undefined **)
               ((ulonglong)((byte *)((longlong)ppuVar21 + (longlong)ppuVar25) + 2) &
               (ulonglong)ppuVar43);
    if (ppuVar20 <= ppuVar37) {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218da8;
      pcStack_1a0 = (code *)&pcStack_118;
      goto LAB_002077a1;
    }
    ppuVar14 = (undefined **)((byte *)((longlong)ppuVar51 + (longlong)ppuVar21) + 2);
    if (ppuVar20 <= ppuVar14) {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218dc0;
      goto LAB_00207747;
    }
    (pbVar10 + 2)[(longlong)ppuVar21] = *(byte *)((longlong)ppuVar36 + (longlong)ppuVar37);
    (pbVar10 + 3)[(longlong)ppuVar21] = *(byte *)((longlong)ppuVar36 + (longlong)ppuVar34);
    pbVar1 = (byte *)((longlong)ppuVar51 + (longlong)ppuVar21);
    ppuVar21 = (undefined **)((longlong)ppuVar21 + 4);
    if (ppuVar26 <= pbVar1 + 4) break;
LAB_002074ea:
    pcStack_1a0 = (code *)&pcStack_118;
    if (ppuVar20 <= (byte *)((longlong)ppuVar51 + (longlong)ppuVar21) + 3) {
LAB_002076a6:
      ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d30;
      goto LAB_002076b4;
    }
    ppuVar34 = (undefined **)
               ((ulonglong)((byte *)((longlong)ppuVar21 + (longlong)ppuVar25) + 3) &
               (ulonglong)ppuVar43);
    pcStack_1a0 = (code *)&pcStack_118;
    if (ppuVar20 <= ppuVar34) goto LAB_002076bf;
    ppuVar37 = (undefined **)
               ((ulonglong)((longlong)ppuVar21 + (longlong)ppuVar25) & (ulonglong)ppuVar43);
    if (ppuVar20 <= ppuVar37) {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d60;
      pcStack_1a0 = (code *)&pcStack_118;
      goto LAB_002077a1;
    }
    pbVar10[(longlong)ppuVar21] = *(byte *)((longlong)ppuVar36 + (longlong)ppuVar37);
    ppuVar37 = (undefined **)
               ((ulonglong)((byte *)((longlong)ppuVar21 + (longlong)ppuVar25) + 1) &
               (ulonglong)ppuVar43);
    if (ppuVar20 <= ppuVar37) {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d78;
      pcStack_1a0 = (code *)&pcStack_118;
      goto LAB_002077a1;
    }
    ppuVar14 = (undefined **)((byte *)((longlong)ppuVar51 + (longlong)ppuVar21) + 1);
    if (ppuVar20 <= ppuVar14) {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d90;
LAB_00207747:
      ppuVar37 = ppuVar14;
      pcStack_1a0 = (code *)&pcStack_118;
      goto LAB_002077a1;
    }
  }
  ppuVar25 = (undefined **)((longlong)ppuVar25 + (longlong)ppuVar21);
  ppuVar51 = (undefined **)((longlong)ppuVar51 + (longlong)ppuVar21);
  pcStack_1a0 = (code *)&pcStack_118;
LAB_002075a1:
  uVar23 = (uint)pppppppuVar39 & 3;
  puVar50 = &switchD_00207423::switchdataD_0012f4e8;
  uVar54 = (&switchD_00207423::switchdataD_0012f4e8)[uVar23];
  switch(uVar23) {
  case 0:
    goto switchD_00207423_caseD_0;
  case 1:
switchD_00207423_caseD_1:
    ppuVar21 = (undefined **)
               ((longlong)&switchD_00207423::switchdataD_0012f4e8 + (longlong)(int)uVar54);
    ppuVar37 = (undefined **)((ulonglong)ppuVar25 & (ulonglong)ppuVar43);
    if (ppuVar20 <= ppuVar37) {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218dd8;
LAB_00207792:
      ppuVar25 = ppuVar37;
      goto LAB_002077a1;
    }
    if (ppuVar51 < ppuVar20) {
LAB_00207676:
      puVar50 = (uint *)(ulonglong)*(byte *)((longlong)ppuVar36 + (longlong)ppuVar37);
      *(byte *)((longlong)ppuVar36 + (longlong)ppuVar51) =
           *(byte *)((longlong)ppuVar36 + (longlong)ppuVar37);
switchD_00207423_caseD_0:
      return (ulonglong *******)puVar50;
    }
    ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218df0;
    ppuVar25 = ppuVar37;
    ppuVar37 = ppuVar51;
    break;
  case 2:
switchD_00207423_caseD_2:
    ppuVar26 = (undefined **)((longlong)ppuVar51 + 1);
    if (ppuVar20 <= ppuVar26) goto LAB_002076ee;
    ppuVar21 = (undefined **)((ulonglong)((longlong)ppuVar25 + 1) & (ulonglong)ppuVar43);
    if (ppuVar20 <= ppuVar21) {
      ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e20;
LAB_002076cd:
      do {
        pcStack_208 = (code *)0x2076d8;
        (*(code *)PTR_panic_00219ca8)(uVar55,ppuVar21);
LAB_002076d8:
        pcStack_208 = (code *)0x2076ee;
        uVar55 = (*(code *)PTR_slice_index_fail_00219d80)
                           (&PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d18,ppuVar20);
LAB_002076ee:
        ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e08;
LAB_002076b4:
        pcStack_208 = (code *)0x2076bf;
        uVar55 = (*(code *)PTR_panic_00219ca8)(uVar55,ppuVar21);
LAB_002076bf:
        ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218d48;
      } while( true );
    }
    ppuVar37 = (undefined **)((ulonglong)ppuVar25 & (ulonglong)ppuVar43);
    if (ppuVar20 <= ppuVar37) {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e38;
      goto LAB_00207792;
    }
    if (ppuVar51 < ppuVar20) {
LAB_00207668:
      *(byte *)((longlong)ppuVar36 + (longlong)ppuVar51) =
           *(byte *)((longlong)ppuVar36 + (longlong)ppuVar37);
      ppuVar37 = ppuVar21;
      ppuVar51 = ppuVar26;
      goto LAB_00207676;
    }
    ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e50;
    ppuVar25 = ppuVar37;
    ppuVar37 = ppuVar51;
    break;
  case 3:
switchD_00207423_caseD_3:
    ppuVar26 = (undefined **)((longlong)ppuVar51 + 2);
    if (ppuVar20 <= ppuVar26) {
      ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e68;
      goto LAB_002076b4;
    }
    ppuVar21 = (undefined **)((ulonglong)((longlong)ppuVar25 + 2) & (ulonglong)ppuVar43);
    if (ppuVar20 <= ppuVar21) {
      ppuVar21 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e80;
      goto LAB_002076cd;
    }
    ppuVar37 = (undefined **)((ulonglong)ppuVar25 & (ulonglong)ppuVar43);
    if (ppuVar20 <= ppuVar37) {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218e98;
      goto LAB_002077a1;
    }
    if (ppuVar51 < ppuVar20) {
      *(byte *)((longlong)ppuVar36 + (longlong)ppuVar51) =
           *(byte *)((longlong)ppuVar36 + (longlong)ppuVar37);
      ppuVar37 = (undefined **)((ulonglong)((longlong)ppuVar25 + 1) & (ulonglong)ppuVar43);
      if (ppuVar20 <= ppuVar37) {
        ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ec8;
        goto LAB_00207792;
      }
      ppuVar51 = (undefined **)((longlong)ppuVar51 + 1);
      if (ppuVar51 < ppuVar20) goto LAB_00207668;
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218ee0;
      ppuVar25 = ppuVar37;
      ppuVar37 = ppuVar51;
    }
    else {
      ppuVar26 = &PTR_s__rust_deps_miniz_oxide_0_8_9_src_00218eb0;
      ppuVar37 = ppuVar51;
    }
  }
  ppuVar51 = ppuVar37;
LAB_002077a1:
  pcStack_208 = miniz_oxide[d073f249698f1019]::inflate::core::init_tree;
  (*(code *)PTR_panic_bounds_check_0021a020)(ppuVar21,ppuVar26);
  pcStack_208 = (code *)&pcStack_1a0;
  ppuStack_210 = ppuVar51;
  ppuStack_218 = ppuVar36;
  ppuStack_220 = ppuVar25;
  ppuStack_228 = ppuVar43;
  ppuStack_230 = ppuVar20;
  ppuStack_238 = ppuVar20;
  bVar8 = *(byte *)((longlong)ppuVar37 + 0x28ef);
LAB_002077c8:
  if (bVar8 == 0) {
    uVar17 = 0x120;
    ppuVar20 = ppuVar37 + 0x4f0;
  }
  else {
    if (bVar8 == 2) {
      auStack_2a8[8] = 0;
      auStack_2a8[9] = 0;
      auStack_2a8[10] = 0;
      auStack_2a8[0xb] = 0;
      auStack_2a8[0xc] = 0;
      auStack_2a8[0xd] = 0;
      auStack_2a8[0xe] = 0;
      auStack_2a8[0xf] = 0;
      auStack_2a8[0] = 0;
      auStack_2a8[1] = 0;
      auStack_2a8[2] = 0;
      auStack_2a8[3] = 0;
      auStack_2a8[4] = 0;
      auStack_2a8[5] = 0;
      auStack_2a8[6] = 0;
      auStack_2a8[7] = 0;
      aiStack_288[0xc] = 0;
      aiStack_288[0xd] = 0;
      aiStack_288[0xe] = 0;
      aiStack_288[0xf] = 0;
      aiStack_288[8] = 0;
      aiStack_288[9] = 0;
      aiStack_288[10] = 0;
      aiStack_288[0xb] = 0;
      aiStack_288[4] = 0;
      aiStack_288[5] = 0;
      aiStack_288[6] = 0;
      aiStack_288[7] = 0;
      aiStack_288[0] = 0;
      aiStack_288[1] = 0;
      aiStack_288[2] = 0;
      aiStack_288[3] = 0;
      aiStack_288[0x10] = 0;
      lVar15 = 0;
      do {
        pbVar10 = (byte *)((longlong)ppuVar37 + lVar15 + 0x1b00);
        pbVar10[0] = 0x1e;
        pbVar10[1] = 3;
        lVar15 = lVar15 + 2;
      } while (lVar15 != 0x800);
      uVar17 = 0x13;
      ppuVar20 = (undefined **)((longlong)ppuVar37 + 0x28f1);
      ppuVar21 = ppuVar37 + 0x360;
      goto LAB_002078b2;
    }
    if (bVar8 != 1) {
      return (ulonglong *******)0xff;
    }
    uVar17 = 0x20;
    ppuVar20 = ppuVar37 + 0x514;
  }
  ppuVar21 = ppuVar37 + (ulonglong)bVar8 * 400 + 0x40;
  auStack_2a8[8] = 0;
  auStack_2a8[9] = 0;
  auStack_2a8[10] = 0;
  auStack_2a8[0xb] = 0;
  auStack_2a8[0xc] = 0;
  auStack_2a8[0xd] = 0;
  auStack_2a8[0xe] = 0;
  auStack_2a8[0xf] = 0;
  auStack_2a8[0] = 0;
  auStack_2a8[1] = 0;
  auStack_2a8[2] = 0;
  auStack_2a8[3] = 0;
  auStack_2a8[4] = 0;
  auStack_2a8[5] = 0;
  auStack_2a8[6] = 0;
  auStack_2a8[7] = 0;
  aiStack_288[0xc] = 0;
  aiStack_288[0xd] = 0;
  aiStack_288[0xe] = 0;
  aiStack_288[0xf] = 0;
  aiStack_288[8] = 0;
  aiStack_288[9] = 0;
  aiStack_288[10] = 0;
  aiStack_288[0xb] = 0;
  aiStack_288[4] = 0;
  aiStack_288[5] = 0;
  aiStack_288[6] = 0;
  aiStack_288[7] = 0;
  aiStack_288[0] = 0;
  aiStack_288[1] = 0;
  aiStack_288[2] = 0;
  aiStack_288[3] = 0;
  aiStack_288[0x10] = 0;
  lVar15 = 0;
  do {
    ((byte *)((longlong)ppuVar21 + lVar15))[0] = 0x1e;
    ((byte *)((longlong)ppuVar21 + lVar15))[1] = 3;
    lVar15 = lVar15 + 2;
  } while (lVar15 != 0x800);
  (*(code *)PTR_memset_00219d00)(0,0x480);
LAB_002078b2:
  uVar45 = *(ushort *)((longlong)ppuVar37 + (ulonglong)bVar8 * 2 + 0x28e8);
  uVar33 = (ulonglong)uVar45;
  if (uVar17 < uVar45) {
    return (ulonglong *******)0xff;
  }
  if (uVar33 != 0) {
    uVar47 = 0;
    do {
      if (0xf < (ulonglong)*(byte *)((longlong)ppuVar20 + uVar47)) {
        return (ulonglong *******)0xff;
      }
      auStack_2a8[*(byte *)((longlong)ppuVar20 + uVar47)] =
           auStack_2a8[*(byte *)((longlong)ppuVar20 + uVar47)] + 1;
      uVar47 = uVar47 + 1;
    } while (uVar33 != uVar47);
  }
  uVar40 = 1;
  bVar53 = false;
  iVar35 = 0;
  iVar19 = 0;
  uVar47 = 0;
  do {
    if (bVar53) {
      uVar41 = uVar47 + (uVar47 < 0x10);
      if (0xf < uVar47) break;
    }
    else {
      uVar41 = 0x10 - uVar47;
      if (uVar40 <= 0x10 - uVar47) {
        uVar41 = uVar40;
      }
      if (uVar47 <= uVar41 + uVar47) {
        uVar47 = uVar41 + uVar47;
      }
      if (0xf < uVar47) break;
      uVar41 = uVar47 + 1;
    }
    iVar19 = iVar19 + (uint)auStack_2a8[uVar47];
    iVar35 = (iVar35 + (uint)auStack_2a8[uVar47]) * 2;
    aiStack_288[uVar47 + 1] = iVar35;
    bVar53 = true;
    uVar40 = 0;
    uVar47 = uVar41;
  } while( true );
  if (iVar35 != 0x10000) {
    if (bVar8 == 2) {
      return (ulonglong *******)0x1;
    }
    if (1 < (ushort)iVar19) {
      return (ulonglong *******)0x1;
    }
  }
  if (uVar33 != 0) {
    uVar17 = 0xffff;
    uVar47 = 0;
    do {
      while( true ) {
        uVar40 = uVar47 + 1;
        bVar8 = *(byte *)((longlong)ppuVar20 + uVar47);
        uVar54 = bVar8 & 0xf;
        if ((bVar8 & 0xf) != 0) break;
LAB_00207a41:
        uVar47 = uVar40;
        if (uVar40 == uVar33) goto LAB_00207b09;
      }
      bVar16 = (byte)uVar54;
      uVar45 = (ushort)((uint)(aiStack_288[uVar54] << (-bVar16 & 0x1f)) >> (-bVar16 & 0x1f));
      uVar45 = uVar45 << 8 | uVar45 >> 8;
      uVar23 = (uVar45 & 0xf0f) << 4 | (uVar45 & 0xf0f0) >> 4;
      uVar23 = (uVar23 >> 2 & 0x3333) + (uVar23 & 0x3333) * 4;
      uVar9 = (uVar23 >> 1 & 0x5555) + (uVar23 & 0x5555) * 2 >> (0x10 - bVar16 & 0x1f);
      aiStack_288[uVar54] = aiStack_288[uVar54] + 1;
      uVar23 = uVar9 & 0xffff;
      uVar41 = (ulonglong)uVar23;
      if (bVar16 < 0xb) {
        if (uVar23 < 0x400) {
          do {
            *(ushort *)((longlong)ppuVar21 + uVar41 * 2) = (ushort)uVar47 | (ushort)(uVar54 << 9);
            uVar41 = uVar41 + (uint)(1 << bVar16);
          } while (uVar41 < 0x400);
        }
        goto LAB_00207a41;
      }
      uVar41 = (ulonglong)(uVar9 & 0x3ff);
      uVar45 = *(ushort *)((longlong)ppuVar21 + uVar41 * 2);
      if (uVar45 == 0x31e) {
        *(ushort *)((longlong)ppuVar21 + uVar41 * 2) = uVar17;
        uVar45 = uVar17;
        uVar17 = uVar17 - 2;
      }
      uVar23 = uVar23 >> 9;
      uVar41 = (ulonglong)uVar23;
      if (bVar16 != 0xb) {
        cVar38 = (bVar8 & 0xf) - 0xb;
        do {
          uVar46 = ~uVar45 + (ushort)(((uint)uVar41 >> 1 & 1) != 0);
          if (0x23f < uVar46) {
            return (ulonglong *******)0xff;
          }
          uVar45 = *(ushort *)((longlong)ppuVar21 + (ulonglong)uVar46 * 2 + 0x800);
          if (uVar45 == 0) {
            *(ushort *)((longlong)ppuVar21 + (ulonglong)uVar46 * 2 + 0x800) = uVar17;
            uVar45 = uVar17;
            uVar17 = uVar17 - 2;
          }
          else {
          }
          uVar41 = uVar41 >> 1;
          uVar23 = (uint)uVar41;
          cVar38 = cVar38 + -1;
        } while (cVar38 != '\0');
      }
      uVar45 = ~uVar45 + (ushort)((uVar23 >> 1 & 1) != 0);
      if (0x23f < uVar45) {
        return (ulonglong *******)0xff;
      }
      *(ushort *)((longlong)ppuVar21 + (ulonglong)uVar45 * 2 + 0x800) = (ushort)uVar47;
      uVar47 = uVar40;
    } while (uVar40 < uVar33);
  }
LAB_00207b09:
  bVar8 = *(byte *)((longlong)ppuVar37 + 0x28ef);
  if (bVar8 == 0) {
    *(undefined4 *)(ppuStack_238 + 2) = 0;
    return (ulonglong *******)0x1;
  }
  if (bVar8 == 2) {
    *(undefined4 *)(ppuStack_238 + 2) = 0;
    return (ulonglong *******)0x1;
  }
  bVar8 = bVar8 - 1;
  *(byte *)((longlong)ppuVar37 + 0x28ef) = bVar8;
  goto LAB_002077c8;
}


