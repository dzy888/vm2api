// 005cccb0 parse_callback_input

/* WARNING: Type propagation algorithm not settling */
/* <craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::parse_callback_input */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::parse_callback_input
          (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  code cVar2;
  int *******pppppppiVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  code *pcVar7;
  int *******pppppppiVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *******pppppppiVar12;
  ulonglong uVar13;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  undefined *puVar14;
  int *******pppppppiVar15;
  code *pcVar16;
  longlong unaff_R15;
  int *******pppppppiVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int *******local_210;
  code *local_200;
  code *local_1f8;
  int *******local_1f0;
  code *local_1e8;
  int *******local_1d8;
  code *pcStack_1d0;
  int *******local_1c8;
  code *pcStack_1c0;
  longlong local_1b8;
  code *pcStack_1b0;
  longlong local_1a8;
  ushort local_1a0;
  undefined2 local_19e;
  undefined4 local_19c;
  byte local_198;
  char cStack_197;
  code *local_190;
  int *******local_188;
  code *pcStack_180;
  int *******local_178;
  code *pcStack_170;
  longlong local_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  longlong local_158;
  undefined2 local_150;
  undefined2 local_14e;
  undefined4 local_14c;
  int *******local_148;
  int *******local_140;
  int *******local_138;
  int *******local_130;
  int *******local_128;
  code *local_120;
  int *******local_118;
  code *local_110;
  undefined8 local_108;
  code *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined2 local_e8;
  char local_e0;
  undefined7 uStack_df;
  code *local_d8;
  int *******local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined4 local_8d;
  undefined1 local_89;
  undefined1 local_88 [24];
  undefined1 local_70 [59];
  undefined1 local_35;
  
  auVar20 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  uVar13 = auVar20._8_8_;
  if (uVar13 - 0x1001 < 0xfffffffffffff000) {
    puVar14 = &DAT_0019e394;
    goto LAB_005cccef;
  }
  uVar18 = extraout_XMM0_Qa;
  if (uVar13 < 0x2a) {
LAB_005ccd84:
    uVar10 = 0;
    while (((bVar1 = *(byte *)(auVar20._0_8_ + uVar10), (byte)(bVar1 - 0x30) < 10 ||
            ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) ||
           ((bVar1 - 0x2d < 3 || ((bVar1 == 0x7e || (bVar1 == 0x5f))))))) {
      uVar10 = uVar10 + 1;
      if (uVar13 == uVar10) {
        if (uVar13 == 0) {
          lVar11 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar11 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar11 == 0) {
            uVar18 = (*(code *)PTR_handle_error_00798ff0)();
            if (local_128 != (int *******)0x0) {
              uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
            }
            if (local_188 != (int *******)0x0) {
              uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
            }
            if (0 < (longlong)local_1f0) {
              uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
            }
            if (0 < unaff_R15) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
            }
                    /* WARNING: Subroutine does not return */
            _Unwind_Resume();
          }
          uVar18 = extraout_XMM0_Qa_01;
        }
        (*(code *)PTR_memcpy_00799008)(uVar18,uVar13);
        param_1[1] = uVar13;
        param_1[2] = lVar11;
        param_1[3] = uVar13;
        param_1[4] = -1;
        *param_1 = -2;
        return param_1;
      }
    }
  }
  else {
    iVar9 = (*(code *)PTR_bcmp_00799020)(extraout_XMM0_Qa,0x2a);
    if (iVar9 == 0) {
      pcVar16 = (code *)(uVar13 - 0x2a);
      pppppppiVar15 = (int *******)(auVar20._0_8_ + 0x2a);
      local_128 = (int *******)0x0;
      local_108 = 0;
      local_f8 = 0x2300000023;
      local_f0 = 1;
      local_e8 = 1;
      local_120 = pcVar16;
      local_118 = pppppppiVar15;
      local_110 = pcVar16;
      local_100 = pcVar16;
      pcStack_1c0 = (code *)<core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                            ::next_match(&local_1d8,&local_118);
      if ((int)local_1d8 == 1) {
        pcStack_1c0 = (code *)((longlong)pcStack_1d0 - (longlong)local_128);
        pppppppiVar12 = (int *******)((longlong)local_128 + (longlong)pppppppiVar15);
        local_128 = local_1c8;
      }
      else {
        if (local_e8._1_1_ == '\0') {
          local_e8 = CONCAT11(1,(byte)local_e8);
          pcStack_1c0 = local_120 + -(longlong)local_128;
          if ((pcStack_1c0 != (code *)0x0 | (byte)local_e8) == 1) {
            pppppppiVar12 = (int *******)((longlong)local_128 + (longlong)local_118);
            goto LAB_005ccf4e;
          }
        }
        pppppppiVar12 = (int *******)0x0;
      }
LAB_005ccf4e:
      if (pppppppiVar12 == (int *******)0x0) {
        pppppppiVar12 = pppppppiVar15;
        pcStack_1c0 = pcVar16;
      }
      local_1d8 = (int *******)0x0;
      local_1b8 = 0;
      local_1a8 = 0x2600000026;
      local_1a0 = CONCAT11(local_1a0._1_1_,1);
      local_198 = 1;
      cStack_197 = '\0';
      pppppppiVar15 = (int *******)0xffffffffffffffff;
      local_210 = (int *******)0xffffffffffffffff;
      local_1f0 = (int *******)0xffffffffffffffff;
      pppppppiVar17 = (int *******)0xffffffffffffffff;
      pcStack_1d0 = pcStack_1c0;
      local_1c8 = pppppppiVar12;
      pcStack_1b0 = pcStack_1c0;
      do {
        while( true ) {
          pppppppiVar12 = local_1c8;
          <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
          ::next_match(&local_188,&local_1c8);
          pppppppiVar3 = local_1d8;
          if ((int)local_188 == 1) {
            pcVar16 = pcStack_180 + -(longlong)local_1d8;
            local_1d8 = local_178;
          }
          else {
            if (cStack_197 != '\0') goto LAB_005cd301;
            cStack_197 = '\x01';
            pcVar16 = pcStack_1d0 + -(longlong)local_1d8;
            pppppppiVar12 = local_1c8;
            if ((pcVar16 != (code *)0x0 | local_198) != 1) goto LAB_005cd301;
          }
          pppppppiVar12 = (int *******)((longlong)pppppppiVar12 + (longlong)pppppppiVar3);
          local_178 = (int *******)0x0;
          uStack_160 = 1;
          local_168 = 0x3d0000003d;
          local_188 = pppppppiVar12;
          pcStack_180 = pcVar16;
          pcStack_170 = pcVar16;
          <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
          ::next_match(&local_e0,&local_188);
          pcVar7 = local_d8;
          if (local_e0 != '\0') break;
          if (cStack_197 != '\0') goto LAB_005cd301;
        }
        uVar18 = craggemini_core[66f3c71560d70857]::oauth::url_decode_query_component
                           (&local_e0,(longlong)local_d0 + (longlong)pppppppiVar12,
                            (longlong)pcVar16 - (longlong)local_d0);
        pppppppiVar8 = local_d0;
        pcVar16 = local_d8;
        pppppppiVar3 = (int *******)CONCAT71(uStack_df,local_e0);
        if (pppppppiVar3 == (int *******)0xffffffffffffffff) {
          <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
                    (&local_188,400,&DAT_0019e2f2,0x12,&DAT_0019e373,0x1c);
          local_14e = 0x700;
          param_1[4] = local_168;
          param_1[5] = CONCAT71(uStack_15f,uStack_160);
          param_1[6] = local_158;
          *(undefined2 *)(param_1 + 7) = local_150;
          *(undefined2 *)((longlong)param_1 + 0x3a) = 0x700;
          *(undefined4 *)((longlong)param_1 + 0x3c) = local_14c;
          param_1[2] = (longlong)local_178;
          param_1[3] = (longlong)pcStack_170;
          *param_1 = (longlong)local_188;
          param_1[1] = (longlong)pcStack_180;
          pppppppiVar12 = local_178;
          if (0 < (longlong)pppppppiVar15) {
            pppppppiVar12 = (int *******)(*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
          }
          if (0 < (longlong)local_210) {
            (*(code *)PTR___rust_dealloc_00798fc8)(pppppppiVar12,1);
          }
          goto LAB_005cd75d;
        }
        if (pcVar7 == (code *)0x4) {
          if (*(int *)pppppppiVar12 == 0x65646f63) {
            if ((longlong)pppppppiVar17 < 1) {
              local_130 = local_d0;
              local_1e8 = local_d8;
              pppppppiVar17 = pppppppiVar3;
            }
            else {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
              local_130 = pppppppiVar8;
              local_1e8 = pcVar16;
              pppppppiVar17 = pppppppiVar3;
            }
          }
          else {
LAB_005cd20a:
            if (pppppppiVar3 != (int *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)();
            }
          }
        }
        else if (pcVar7 == (code *)0x5) {
          if (*(char *)((longlong)pppppppiVar12 + 4) == 'e' && *(int *)pppppppiVar12 == 0x74617473)
          {
            if ((longlong)local_1f0 < 1) {
              local_138 = local_d0;
              local_190 = local_d8;
              local_1f0 = pppppppiVar3;
            }
            else {
              (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
              local_138 = pppppppiVar8;
              local_190 = pcVar16;
              local_1f0 = pppppppiVar3;
            }
          }
          else {
            if (*(char *)((longlong)pppppppiVar12 + 4) != 'r' || *(int *)pppppppiVar12 != 0x6f727265
               ) goto LAB_005cd20a;
            if ((longlong)local_210 < 1) {
              local_140 = local_d0;
              local_1f8 = local_d8;
              local_210 = pppppppiVar3;
            }
            else {
              (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
              local_140 = pppppppiVar8;
              local_1f8 = pcVar16;
              local_210 = pppppppiVar3;
            }
          }
        }
        else {
          if ((pcVar7 != (code *)0x11) ||
             (auVar20[0] = -(*(char *)pppppppiVar12 ==
                            s_error_descriptiofunctionResponse_00182770[0]),
             auVar20[1] = -(*(char *)((longlong)pppppppiVar12 + 1) ==
                           s_error_descriptiofunctionResponse_00182770[1]),
             auVar20[2] = -(*(char *)((longlong)pppppppiVar12 + 2) ==
                           s_error_descriptiofunctionResponse_00182770[2]),
             auVar20[3] = -(*(char *)((longlong)pppppppiVar12 + 3) ==
                           s_error_descriptiofunctionResponse_00182770[3]),
             auVar20[4] = -(*(char *)((longlong)pppppppiVar12 + 4) ==
                           s_error_descriptiofunctionResponse_00182770[4]),
             auVar20[5] = -(*(char *)((longlong)pppppppiVar12 + 5) ==
                           s_error_descriptiofunctionResponse_00182770[5]),
             auVar20[6] = -(*(char *)((longlong)pppppppiVar12 + 6) ==
                           s_error_descriptiofunctionResponse_00182770[6]),
             auVar20[7] = -(*(char *)((longlong)pppppppiVar12 + 7) ==
                           s_error_descriptiofunctionResponse_00182770[7]),
             auVar20[8] = -(*(char *)(pppppppiVar12 + 1) ==
                           s_error_descriptiofunctionResponse_00182770[8]),
             auVar20[9] = -(*(char *)((longlong)pppppppiVar12 + 9) ==
                           s_error_descriptiofunctionResponse_00182770[9]),
             auVar20[10] = -(*(char *)((longlong)pppppppiVar12 + 10) ==
                            s_error_descriptiofunctionResponse_00182770[10]),
             auVar20[0xb] = -(*(char *)((longlong)pppppppiVar12 + 0xb) ==
                             s_error_descriptiofunctionResponse_00182770[0xb]),
             auVar20[0xc] = -(*(char *)((longlong)pppppppiVar12 + 0xc) ==
                             s_error_descriptiofunctionResponse_00182770[0xc]),
             auVar20[0xd] = -(*(char *)((longlong)pppppppiVar12 + 0xd) ==
                             s_error_descriptiofunctionResponse_00182770[0xd]),
             auVar20[0xe] = -(*(char *)((longlong)pppppppiVar12 + 0xe) ==
                             s_error_descriptiofunctionResponse_00182770[0xe]),
             auVar20[0xf] = -(*(char *)((longlong)pppppppiVar12 + 0xf) ==
                             s_error_descriptiofunctionResponse_00182770[0xf]),
             auVar19[0] = -(*(char *)(pppppppiVar12 + 2) == DAT_00184730),
             auVar19[1] = -(UNK_00184731 == '\0'), auVar19[2] = -(UNK_00184732 == '\0'),
             auVar19[3] = -(UNK_00184733 == '\0'), auVar19[4] = -(UNK_00184734 == '\0'),
             auVar19[5] = -(UNK_00184735 == '\0'), auVar19[6] = -(UNK_00184736 == '\0'),
             auVar19[7] = -(UNK_00184737 == '\0'), auVar19[8] = -(UNK_00184738 == '\0'),
             auVar19[9] = -(UNK_00184739 == '\0'), auVar19[10] = -(UNK_0018473a == '\0'),
             auVar19[0xb] = -(UNK_0018473b == '\0'), auVar19[0xc] = -(UNK_0018473c == '\0'),
             auVar19[0xd] = -(UNK_0018473d == '\0'), auVar19[0xe] = -(UNK_0018473e == '\0'),
             auVar19[0xf] = -(UNK_0018473f == '\0'), auVar19 = auVar19 & auVar20,
             (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) != 0xffff)) goto LAB_005cd20a;
          if (0 < (longlong)pppppppiVar15) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          local_148 = pppppppiVar8;
          local_200 = pcVar16;
          pppppppiVar15 = pppppppiVar3;
        }
      } while (cStack_197 == '\0');
LAB_005cd301:
      pppppppiVar3 = local_130;
      pppppppiVar12 = local_140;
      if (local_210 != (int *******)0xffffffffffffffff) {
        uVar18 = ::<str>::trim_matches::<<char>::is_whitespace>(local_1f8,local_140);
        if (extraout_RDX != 0) {
          pcStack_180 = local_1f8;
          local_178 = pppppppiVar12;
          local_188 = local_210;
          if (pppppppiVar15 == (int *******)0xffffffffffffffff) {
LAB_005cd662:
            pcStack_1d0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                          ::fmt;
            local_1d8 = (int *******)&local_188;
            (*(code *)PTR_format_inner_00799048)(uVar18,&local_1d8);
          }
          else {
            uVar18 = ::<str>::trim_matches::<<char>::is_whitespace>(local_200,local_148);
            if (extraout_RDX_00 == 0) {
              if (pppppppiVar15 != (int *******)0x0) {
                uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
              }
              goto LAB_005cd662;
            }
            local_120 = local_200;
            local_118 = local_148;
            pcStack_1d0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                          ::fmt;
            local_1c8 = (int *******)&local_128;
            pcStack_1c0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                          ::fmt;
            local_1d8 = (int *******)&local_188;
            local_128 = pppppppiVar15;
            uVar18 = (*(code *)PTR_format_inner_00799048)(local_1c8,&local_1d8);
            if (local_128 != (int *******)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
            }
          }
          <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
          <&str,alloc[12e961f32105355]::borrow::Cow<str>>(local_70,400,&DAT_0019e332,0x14,local_88);
          local_35 = 0;
          local_1c8 = local_178;
          local_1d8 = local_188;
          pcStack_1d0 = pcStack_180;
          <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_upstream_reason::
          <alloc[12e961f32105355]::string::String>(&local_c8,local_70,&local_1d8);
          local_8e = 0;
          param_1[4] = local_a8;
          param_1[5] = lStack_a0;
          param_1[2] = local_b8;
          param_1[3] = lStack_b0;
          *param_1 = local_c8;
          param_1[1] = lStack_c0;
          param_1[6] = local_98;
          *(undefined2 *)(param_1 + 7) = local_90;
          *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
          *(undefined4 *)((longlong)param_1 + 0x3b) = local_8d;
          *(undefined1 *)((longlong)param_1 + 0x3f) = local_89;
LAB_005cd75d:
          bVar5 = false;
          goto LAB_005cd75f;
        }
        if (local_210 != (int *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
        }
      }
      if (pppppppiVar17 == (int *******)0xffffffffffffffff) {
LAB_005cd55e:
        <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
                  (&local_1d8,400,&DAT_0019e2f2,0x12,&DAT_0019e346,0x2d);
        local_19e = 0x700;
        param_1[2] = (longlong)local_1c8;
        param_1[3] = (longlong)pcStack_1c0;
        param_1[4] = local_1b8;
        param_1[5] = (longlong)pcStack_1b0;
        param_1[6] = local_1a8;
        *(ushort *)(param_1 + 7) = local_1a0;
        *(undefined2 *)((longlong)param_1 + 0x3a) = 0x700;
        *(undefined4 *)((longlong)param_1 + 0x3c) = local_19c;
        *param_1 = (longlong)local_1d8;
        param_1[1] = (longlong)pcStack_1d0;
        bVar5 = true;
        bVar4 = true;
        plVar6 = (longlong *)(ulonglong)local_1a0;
      }
      else {
        if (0x7ff < (longlong)pppppppiVar3 - 1U) {
LAB_005cd548:
          if (pppppppiVar17 != (int *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
          goto LAB_005cd55e;
        }
        pppppppiVar12 = (int *******)0x0;
        do {
          cVar2 = local_1e8[(longlong)pppppppiVar12];
          if ((((9 < (byte)((char)cVar2 - 0x30U)) && (0x19 < (byte)(((byte)cVar2 & 0xdf) + 0xbf)))
              && (2 < (byte)cVar2 - 0x2d)) && ((cVar2 != (code)0x7e && (cVar2 != (code)0x5f))))
          goto LAB_005cd548;
          pppppppiVar12 = (int *******)((longlong)pppppppiVar12 + 1);
        } while (pppppppiVar3 != pppppppiVar12);
        param_1[2] = (longlong)local_1e8;
        param_1[3] = (longlong)pppppppiVar3;
        param_1[4] = (longlong)local_1f0;
        param_1[5] = (longlong)local_190;
        param_1[6] = (longlong)local_138;
        param_1[1] = (longlong)pppppppiVar17;
        *param_1 = -2;
        bVar5 = false;
        bVar4 = false;
        plVar6 = param_1;
      }
      if (0 < (longlong)pppppppiVar15) {
        (*(code *)PTR___rust_dealloc_00798fc8)(plVar6,1);
        bVar4 = bVar5;
      }
      bVar5 = true;
      if (!bVar4) {
        return param_1;
      }
LAB_005cd75f:
      if (0 < (longlong)local_1f0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (!(bVar5 || (longlong)pppppppiVar17 < 1)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
        return param_1;
      }
      return param_1;
    }
    uVar18 = extraout_XMM0_Qa_00;
    if (uVar13 < 0x801) goto LAB_005ccd84;
  }
  puVar14 = &DAT_0019e304;
LAB_005cccef:
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
            (&local_1d8,400,&DAT_0019e2f2,0x12,puVar14,0x2e);
  param_1[4] = local_1b8;
  param_1[5] = (longlong)pcStack_1b0;
  param_1[2] = (longlong)local_1c8;
  param_1[3] = (longlong)pcStack_1c0;
  *param_1 = (longlong)local_1d8;
  param_1[1] = (longlong)pcStack_1d0;
  param_1[6] = local_1a8;
  *(ushort *)(param_1 + 7) = local_1a0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0x700;
  *(undefined4 *)((longlong)param_1 + 0x3c) = local_19c;
  return param_1;
}


