// 00038280 filter_model_request_tools

/* agy_bridge[64a9e9deac6c45ce]::filter_model_request_tools */

void __rustcall
agy_bridge[64a9e9deac6c45ce]::filter_model_request_tools
          (longlong param_1,longlong *param_2,ulonglong param_3,int *param_4,longlong param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  byte *unaff_RBP;
  longlong *plVar22;
  longlong *plVar23;
  byte *pbVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte *local_f8;
  byte *local_d8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  int local_98;
  longlong *local_90;
  byte *local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  int *local_68;
  longlong *local_60;
  ulonglong *local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong *local_38;
  
  plVar7 = *(longlong **)(param_1 + 0x20);
  uVar25 = *(ulonglong *)(param_1 + 0x28);
  if (0xfffffffffffffdff < uVar25 - 0x201 && plVar7 != (longlong *)0x0) {
    if ((((*param_4 == 1) && (*(longlong **)(param_4 + 2) == plVar7)) &&
        (*(ulonglong *)(param_4 + 4) == uVar25)) && (*(ulonglong *)(param_4 + 6) == param_3)) {
      uVar18 = *(ulonglong *)(param_4 + 10);
      if (uVar25 != uVar18 || plVar7 != *(longlong **)(param_4 + 8)) {
        *(longlong **)(param_1 + 0x20) = *(longlong **)(param_4 + 8);
        *(ulonglong *)(param_1 + 0x28) = uVar18;
        *(ulonglong *)(param_1 + 0x30) = uVar18;
      }
    }
    else {
      local_68 = param_4;
      local_50 = param_1;
      local_48 = param_5;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      local_f8 = &Elf64_Ehdr_00000000.e_ident_abiversion;
      lVar14 = (*(code *)PTR___rust_alloc_000c3a90)();
      if (lVar14 == 0) {
        (*(code *)PTR_handle_error_000c3a98)();
LAB_00038db7:
        local_70 = unaff_RBP;
LAB_00038b41:
        (*(code *)PTR_handle_error_000c3a98)();
LAB_00038d21:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      local_a0 = 0;
      lVar26 = *param_2;
      local_60 = (longlong *)param_2[1];
      local_58 = (ulonglong *)param_2[2];
      local_38 = (ulonglong *)((longlong)local_58 + -9);
      cVar1 = *(char *)((longlong)param_2 + 0x1c);
      cVar2 = *(char *)((longlong)param_2 + 0x1d);
      cVar3 = *(char *)((longlong)param_2 + 0x1a);
      cVar4 = *(char *)((longlong)param_2 + 0x1b);
      cVar5 = *(char *)((longlong)param_2 + 0x19);
      cVar6 = (char)param_2[3];
      plVar21 = plVar7;
      local_b0 = uVar25;
      local_a8 = lVar14;
      local_40 = uVar25;
      do {
        lVar14 = *plVar21;
        if (lVar14 == 0) goto LAB_000383e0;
        local_d8 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        if ((*(longlong *)(lVar14 + 0x10) - 0x101U < 0xffffffffffffff00 ||
             *(longlong *)(lVar14 + 8) == 0) ||
           ((*(code *)PTR_from_utf8_000c3bd8)(), unaff_RBP = local_88, local_98 == 1)) {
LAB_0003843a:
          unaff_RBP = (byte *)0x0;
          pbVar15 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
        }
        else {
          if ((longlong)local_88 < 0) goto LAB_00038b41;
          if (local_88 == (byte *)0x0) {
            local_70 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
            goto LAB_0003843a;
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          pbVar15 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
          if (pbVar15 == (byte *)0x0) goto LAB_00038db7;
          (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Qa,unaff_RBP);
          local_70 = pbVar15;
        }
        if ((*(longlong *)(lVar14 + 0x60) - 0x81U < 0xffffffffffffff80 ||
             *(longlong *)(lVar14 + 0x58) == 0) ||
           ((*(code *)PTR_from_utf8_000c3bd8)(), pbVar24 = local_88, local_98 == 1)) {
          local_f8 = (byte *)0x0;
        }
        else {
          local_f8 = local_88;
          if ((longlong)local_88 < 0) {
LAB_00038b56:
            (*(code *)PTR_handle_error_000c3a98)();
            goto LAB_00038d21;
          }
          if (local_88 == (byte *)0x0) {
            local_78 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
            local_f8 = (byte *)0x0;
            local_d8 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
            local_d8 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
            if (local_d8 == (byte *)0x0) {
              local_78 = pbVar24;
              goto LAB_00038b56;
            }
            (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Qa_00,pbVar24);
            local_78 = local_d8;
          }
        }
        plVar22 = *(longlong **)(lVar14 + 0x68);
        if ((*(longlong *)(lVar14 + 0x70) - 0x101U < 0xffffffffffffff00 ||
             plVar22 == (longlong *)0x0) ||
           ((*(code *)PTR_from_utf8_000c3bd8)(), pbVar24 = local_88, plVar23 = local_90,
           local_98 == 1)) {
          pbVar24 = (byte *)0x0;
        }
        else {
          if ((longlong)local_88 < 0) {
LAB_00038b6b:
            (*(code *)PTR_handle_error_000c3a98)();
            goto LAB_00038d21;
          }
          if (local_88 == (byte *)0x0) {
            local_80 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
            pbVar24 = (byte *)0x0;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
            pbVar16 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
            if (pbVar16 == (byte *)0x0) {
              local_80 = pbVar24;
              goto LAB_00038b6b;
            }
            (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Qa_01,pbVar24);
            plVar22 = plVar23;
            local_80 = pbVar16;
          }
        }
        plVar23 = local_60;
        if (lVar26 != -1 && param_3 == 0) {
          if (((ulonglong *)unaff_RBP == local_58) &&
             (iVar13 = (*(code *)PTR_bcmp_000c3b80)(), iVar13 == 0)) goto LAB_0003894a;
          if (local_f8 != Elf64_Ehdr_00000000.e_ident_pad + 1) {
            if (((local_f8 == &Elf64_Ehdr_00000000.e_ident_class) && (pbVar24 != (byte *)0x0)) &&
               (*(int *)local_d8 == 0x67617263)) goto LAB_000388b1;
            goto switchD_000387fa_caseD_b;
          }
          if ((pbVar24 == (byte *)0x0) ||
             (*(word *)(local_d8 + 8) != 0x696e || *(ulonglong *)local_d8 != 0x696d656767617263))
          goto switchD_000387fa_caseD_b;
LAB_000388b1:
          puVar17 = local_58;
          if (&Elf64_Ehdr_00000000.e_ident_abiversion < local_58) {
            bVar10 = (char)local_60[1] == '_';
            if (bVar10 && *local_60 == 0x676172635f70636d) {
              puVar17 = local_38;
            }
            lVar19 = (ulonglong)(bVar10 && *local_60 == 0x676172635f70636d) * 9;
          }
          else {
            lVar19 = 0;
          }
          if ((ulonglong *)pbVar24 == puVar17) {
            plVar22 = (longlong *)(lVar19 + (longlong)local_60);
            iVar13 = (*(code *)PTR_bcmp_000c3b80)(pbVar24,pbVar24);
            cVar12 = iVar13 == 0;
            goto LAB_00038946;
          }
          goto LAB_0003898f;
        }
        cVar12 = cVar6;
        if (local_f8 == &Elf64_Ehdr_00000000.e_ident_class) {
          if (*(int *)local_d8 != 0x67617263) goto LAB_000386f2;
          goto LAB_00038946;
        }
        if ((local_f8 == Elf64_Ehdr_00000000.e_ident_pad + 1) &&
           (*(word *)(local_d8 + 8) == 0x696e && *(ulonglong *)local_d8 == 0x696d656767617263))
        goto LAB_00038946;
LAB_000386f2:
        if ((&Elf64_Ehdr_00000000.e_ident_abiversion < unaff_RBP) &&
           (((byte)*(word *)(pbVar15 + 8) == 0x5f && *(ulonglong *)pbVar15 == 0x676172635f70636d ||
            ((Elf64_Ehdr_00000000.e_ident_pad + 1 < unaff_RBP &&
             ((*(longlong *)(pbVar15 + 3) == 0x5f5f676172635f5f &&
               *(ulonglong *)pbVar15 == 0x6172635f5f70636d ||
              ((Elf64_Ehdr_00000000.e_ident_pad + 5 < unaff_RBP &&
               ((*(longlong *)(pbVar15 + 7) == 0x5f696e696d656767 &&
                 *(ulonglong *)pbVar15 == 0x676172635f70636d ||
                ((&Elf64_Ehdr_00000000.e_type < unaff_RBP &&
                 (auVar27[0] = -(*pbVar15 == s_mcp__craggemini__000091a0[0]),
                 auVar27[1] = -(pbVar15[1] == s_mcp__craggemini__000091a0[1]),
                 auVar27[2] = -(pbVar15[2] == s_mcp__craggemini__000091a0[2]),
                 auVar27[3] = -(pbVar15[3] == s_mcp__craggemini__000091a0[3]),
                 auVar27[4] = -(pbVar15[4] == s_mcp__craggemini__000091a0[4]),
                 auVar27[5] = -(pbVar15[5] == s_mcp__craggemini__000091a0[5]),
                 auVar27[6] = -(pbVar15[6] == s_mcp__craggemini__000091a0[6]),
                 auVar27[7] = -(pbVar15[7] == s_mcp__craggemini__000091a0[7]),
                 auVar27[8] = -((byte)*(word *)(pbVar15 + 8) == s_mcp__craggemini__000091a0[8]),
                 auVar27[9] = -(pbVar15[9] == s_mcp__craggemini__000091a0[9]),
                 auVar27[10] = -((byte)*(word *)(pbVar15 + 10) == s_mcp__craggemini__000091a0[10]),
                 auVar27[0xb] = -(pbVar15[0xb] == s_mcp__craggemini__000091a0[0xb]),
                 auVar27[0xc] = -((byte)*(dword *)(pbVar15 + 0xc) ==
                                 s_mcp__craggemini__000091a0[0xc]),
                 auVar27[0xd] = -(pbVar15[0xd] == s_mcp__craggemini__000091a0[0xd]),
                 auVar27[0xe] = -(pbVar15[0xe] == s_mcp__craggemini__000091a0[0xe]),
                 auVar27[0xf] = -((char)*(word *)(pbVar15 + 0xf) == s_mcp__craggemini__000091a0[0xf]
                                 ),
                 auVar30[0] = -((char)*(qword *)(pbVar15 + 0x10) == s___00008f90[0]),
                 auVar30[1] = -(s___00008f90[1] == '\0'), auVar30[2] = -(s___00008f90[2] == '\0'),
                 auVar30[3] = -(s___00008f90[3] == '\0'), auVar30[4] = -(UNK_00008f94 == '\0'),
                 auVar30[5] = -(UNK_00008f95 == '\0'), auVar30[6] = -(UNK_00008f96 == '\0'),
                 auVar30[7] = -(UNK_00008f97 == '\0'), auVar30[8] = -(UNK_00008f98 == '\0'),
                 auVar30[9] = -(UNK_00008f99 == '\0'), auVar30[10] = -(UNK_00008f9a == '\0'),
                 auVar30[0xb] = -(UNK_00008f9b == '\0'), auVar30[0xc] = -(UNK_00008f9c == '\0'),
                 auVar30[0xd] = -(UNK_00008f9d == '\0'), auVar30[0xe] = -(UNK_00008f9e == '\0'),
                 auVar30[0xf] = -(UNK_00008f9f == '\0'), auVar30 = auVar30 & auVar27,
                 (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff))))))))))))))
        goto LAB_00038946;
        if (local_f8 != (byte *)0x0) goto switchD_000387fa_caseD_b;
        cVar12 = cVar2;
        switch(unaff_RBP) {
        case (byte *)0x9:
          cVar12 = cVar5;
          if ((((byte)*(word *)(pbVar15 + 8) == 0x65 && *(ulonglong *)pbVar15 == 0x6c69665f64616572)
              || ((byte)*(word *)(pbVar15 + 8) == 0x65 &&
                  *(ulonglong *)pbVar15 == 0x6c69665f77656976)) ||
             (cVar12 = cVar4,
             (byte)*(word *)(pbVar15 + 8) == 0x68 && *(ulonglong *)pbVar15 == 0x637465665f626577))
          goto LAB_00038946;
          break;
        case (byte *)0xa:
          cVar12 = cVar3;
          if (*(word *)(pbVar15 + 8) == 0x6265 && *(ulonglong *)pbVar15 == 0x775f686372616573)
          goto LAB_00038946;
          break;
        case (byte *)0xc:
          uVar18 = *(ulonglong *)pbVar15 ^ 0x73656d5f646e6573;
          uVar20 = (ulonglong)*(uint *)(pbVar15 + 8) ^ 0x65676173;
          goto LAB_00038b2c;
        case (byte *)0xe:
          cVar12 = cVar1;
          if (*(longlong *)(pbVar15 + 6) == 0x6567616d695f6574 &&
              *(ulonglong *)pbVar15 == 0x65746172656e6567) goto LAB_00038946;
          break;
        case (byte *)0xf:
          if (*(longlong *)(pbVar15 + 7) == 0x746e656761627573 &&
              *(ulonglong *)pbVar15 == 0x735f656b6f766e69) goto LAB_00038946;
          uVar18 = *(ulonglong *)pbVar15 ^ 0x735f656e69666564;
          uVar20 = *(ulonglong *)(pbVar15 + 7) ^ 0x746e656761627573;
LAB_00038b2c:
          if (uVar20 == 0 && uVar18 == 0) {
LAB_00038946:
            plVar23 = plVar22;
            if (cVar12 != '\0') {
LAB_0003894a:
              uVar18 = local_a0;
              if (local_a0 == local_b0) {
                <alloc[12e961f32105355]::raw_vec::RawVec<usize>>::grow_one(&local_b0,plVar23);
              }
              *(longlong *)(local_a8 + uVar18 * 8) = lVar14;
              local_a0 = uVar18 + 1;
            }
          }
          break;
        case (byte *)0x10:
          auVar28[0] = -(*pbVar15 == DAT_00008eb0);
          auVar28[1] = -(pbVar15[1] == UNK_00008eb1);
          auVar28[2] = -(pbVar15[2] == UNK_00008eb2);
          auVar28[3] = -(pbVar15[3] == UNK_00008eb3);
          auVar28[4] = -(pbVar15[4] == UNK_00008eb4);
          auVar28[5] = -(pbVar15[5] == UNK_00008eb5);
          auVar28[6] = -(pbVar15[6] == UNK_00008eb6);
          auVar28[7] = -(pbVar15[7] == UNK_00008eb7);
          auVar28[8] = -((byte)*(word *)(pbVar15 + 8) == UNK_00008eb8);
          auVar28[9] = -(pbVar15[9] == UNK_00008eb9);
          auVar28[10] = -((byte)*(word *)(pbVar15 + 10) == UNK_00008eba);
          auVar28[0xb] = -(pbVar15[0xb] == UNK_00008ebb);
          auVar28[0xc] = -((byte)*(dword *)(pbVar15 + 0xc) == UNK_00008ebc);
          auVar28[0xd] = -(pbVar15[0xd] == UNK_00008ebd);
          auVar28[0xe] = -(pbVar15[0xe] == UNK_00008ebe);
          auVar28[0xf] = -((char)*(word *)(pbVar15 + 0xf) == UNK_00008ebf);
          cVar12 = cVar4;
          if (((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff) ||
             (auVar29[0] = -(*pbVar15 == DAT_00008fa0), auVar29[1] = -(pbVar15[1] == UNK_00008fa1),
             auVar29[2] = -(pbVar15[2] == UNK_00008fa2), auVar29[3] = -(pbVar15[3] == UNK_00008fa3),
             auVar29[4] = -(pbVar15[4] == UNK_00008fa4), auVar29[5] = -(pbVar15[5] == UNK_00008fa5),
             auVar29[6] = -(pbVar15[6] == UNK_00008fa6), auVar29[7] = -(pbVar15[7] == UNK_00008fa7),
             auVar29[8] = -((byte)*(word *)(pbVar15 + 8) == UNK_00008fa8),
             auVar29[9] = -(pbVar15[9] == UNK_00008fa9),
             auVar29[10] = -((byte)*(word *)(pbVar15 + 10) == UNK_00008faa),
             auVar29[0xb] = -(pbVar15[0xb] == UNK_00008fab),
             auVar29[0xc] = -((byte)*(dword *)(pbVar15 + 0xc) == UNK_00008fac),
             auVar29[0xd] = -(pbVar15[0xd] == UNK_00008fad),
             auVar29[0xe] = -(pbVar15[0xe] == UNK_00008fae),
             auVar29[0xf] = -((char)*(word *)(pbVar15 + 0xf) == UNK_00008faf), cVar12 = cVar2,
             (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff)) goto LAB_00038946;
        }
switchD_000387fa_caseD_b:
        if (pbVar24 != (byte *)0x0) {
LAB_0003898f:
          (*(code *)PTR___rust_dealloc_000c3aa0)();
        }
        if (local_f8 != (byte *)0x0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)();
        }
        if (unaff_RBP != (byte *)0x0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)();
          local_f8 = unaff_RBP;
        }
LAB_000383e0:
        lVar14 = local_50;
        uVar20 = local_a0;
        uVar18 = local_b0;
        plVar21 = plVar21 + 1;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
      if (local_a0 == local_40) {
        local_68[0] = 1;
        local_68[1] = 0;
        *(longlong **)(local_68 + 2) = plVar7;
        *(ulonglong *)(local_68 + 4) = local_40;
        *(ulonglong *)(local_68 + 6) = param_3;
        *(longlong **)(local_68 + 8) = plVar7;
        *(ulonglong *)(local_68 + 10) = local_40;
        param_3 = local_40;
      }
      else {
        if (local_a0 != 0) {
          lVar26 = *(longlong *)(local_48 + 0x68) + local_a0 * 8 + 0x10;
          if (0x4000000 <
              (ulonglong)(*(longlong *)(local_48 + 0x60) + *(longlong *)(local_48 + 0x48) + lVar26))
          {
            uVar25 = (*(code *)PTR_<&str>_000c3b30)(*(longlong *)(local_48 + 0x68),0x24);
            if (uVar18 != 0) {
              (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Qa_02,8);
            }
            if (((uint)uVar25 & 3) - 2 < 2) {
              return;
            }
            if ((uVar25 & 3) == 0) {
              return;
            }
            local_90 = (longlong *)(uVar25 - 1);
            local_98 = CONCAT31(local_98._1_3_,3);
            (*(code *)PTR_drop_000c3ae0)();
            return;
          }
          if (local_a0 < local_b0) {
            local_f8 = (byte *)(local_b0 << 3);
            lVar19 = (*(code *)PTR___rust_realloc_000c3c40)(local_a0 * 8,8);
            if (lVar19 == 0) {
              (*(code *)PTR_handle_error_000c3a98)();
              goto LAB_00038d21;
            }
          }
          else {
            lVar19 = local_a8;
          }
          lVar11 = local_48;
          *(longlong *)(local_48 + 0x68) = lVar26;
          lVar26 = *(longlong *)(local_48 + 0x40);
          if (lVar26 == *(longlong *)(local_48 + 0x30)) {
            <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::boxed::Box<str>>>::
            grow_one(local_48 + 0x30,local_f8);
          }
          lVar8 = *(longlong *)(lVar11 + 0x38);
          *(longlong *)(lVar8 + lVar26 * 0x10) = lVar19;
          *(ulonglong *)(lVar8 + 8 + lVar26 * 0x10) = uVar20;
          *(longlong *)(lVar11 + 0x40) = lVar26 + 1;
          local_68[0] = 1;
          local_68[1] = 0;
          *(longlong **)(local_68 + 2) = plVar7;
          *(ulonglong *)(local_68 + 4) = local_40;
          *(ulonglong *)(local_68 + 6) = param_3;
          *(longlong *)(local_68 + 8) = lVar19;
          *(ulonglong *)(local_68 + 10) = uVar20;
          *(longlong *)(lVar14 + 0x20) = lVar19;
          *(ulonglong *)(lVar14 + 0x28) = uVar20;
          *(ulonglong *)(lVar14 + 0x30) = uVar20;
          return;
        }
        local_68[0] = 1;
        local_68[1] = 0;
        *(longlong **)(local_68 + 2) = plVar7;
        *(ulonglong *)(local_68 + 4) = local_40;
        *(ulonglong *)(local_68 + 6) = param_3;
        *(undefined1 (*) [16])(local_68 + 8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(local_50 + 0x20) = (undefined1  [16])0x0;
        *(undefined8 *)(local_50 + 0x30) = 0;
      }
      if (local_b0 != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)(param_3,8);
      }
    }
  }
  return;
}


