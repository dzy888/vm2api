// 006aa0d0 encode_headers_with_original_case

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case
          (undefined8 *param_1,longlong *******param_2,longlong *param_3,uint param_4,
          ulonglong param_5,byte param_6,undefined8 param_7)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  longlong *****ppppplVar4;
  longlong *****ppppplVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong ******pppppplVar10;
  uint uVar11;
  longlong lVar12;
  undefined7 uVar15;
  longlong *******ppppppplVar13;
  undefined8 *puVar14;
  longlong *******ppppppplVar16;
  longlong *****ppppplVar17;
  longlong lVar18;
  char *pcVar19;
  longlong *******ppppppplVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *******ppppppplVar24;
  longlong *******ppppppplVar25;
  bool bVar26;
  undefined8 uVar27;
  longlong *******extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong *******ppppppplVar28;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  byte bVar40;
  char cVar43;
  byte bVar42;
  char cVar45;
  byte bVar44;
  char cVar47;
  byte bVar46;
  char cVar49;
  byte bVar48;
  char cVar51;
  byte bVar50;
  char cVar53;
  byte bVar52;
  byte bVar54;
  undefined1 auVar41 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined1 auVar57 [16];
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined1 auVar82 [16];
  longlong *******local_268;
  longlong *******local_258;
  longlong *******ppppppplStack_250;
  longlong *******local_248;
  longlong *******ppppppplStack_240;
  longlong *******local_238;
  longlong *******ppppppplStack_230;
  longlong *******local_228;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined2 local_218;
  undefined6 uStack_216;
  longlong ******local_210;
  longlong *******local_208;
  uint local_1fc;
  longlong *******local_1f8;
  longlong *******ppppppplStack_1f0;
  longlong *******local_1e8;
  longlong ****pppplStack_1e0;
  longlong ****local_1d8;
  longlong *******local_1d0;
  longlong *******local_1c8;
  longlong *******ppppppplStack_1c0;
  longlong *******local_1b8;
  undefined8 uStack_1b0;
  longlong *******local_1a8;
  longlong *******ppppppplStack_1a0;
  longlong *******local_198;
  longlong ******local_190;
  longlong local_188;
  longlong *******local_180;
  longlong ****pppplStack_178;
  longlong ****local_170;
  longlong ****pppplStack_168;
  longlong *******local_160;
  ulonglong local_158;
  longlong ******local_150;
  longlong *******local_148;
  longlong *******ppppppplStack_140;
  longlong *******local_138;
  longlong *******ppppppplStack_130;
  longlong *****local_128;
  longlong *******local_120;
  longlong *******local_118;
  undefined8 *local_110;
  ulonglong local_108;
  longlong local_100 [2];
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 local_b0;
  char local_a8;
  longlong *******local_a0;
  ulonglong local_98;
  longlong *******local_90;
  longlong *******ppppppplStack_88;
  longlong *******local_80;
  longlong *******local_78;
  longlong ****pppplStack_70;
  longlong ****local_68;
  longlong ****pppplStack_60;
  longlong *******local_58;
  longlong *******ppppppplStack_50;
  longlong *******local_48;
  longlong ****pppplStack_40;
  longlong ****local_38;
  
  uVar8 = _UNK_00182648;
  uVar27 = _DAT_00182640;
  local_a8 = *(char *)((longlong)param_2 + 0x21);
  local_b0 = param_7;
  local_e0 = 0xffffffffffffffff;
  local_1c8 = (longlong *******)0x8000000000000000;
  ppppppplStack_1c0 = (longlong *******)0x0;
  uStack_1b0 = (longlong *******)((ulonglong)uStack_1b0 & 0xffffffffffffff00);
  local_1a8 = (longlong *******)0xffffffffffffffff;
  local_188 = 0;
  local_210 = param_2[2];
  ppppplVar4 = local_210[10];
  if (ppppplVar4 != (longlong *****)0x0) {
    ppppplVar5 = local_210[9];
    uVar21 = (longlong)ppppplVar4 * 4 - 4;
    ppppplVar17 = ppppplVar5;
    if (0x1b < uVar21) {
      uVar22 = (uVar21 >> 2) + 1;
      uVar21 = uVar22 & 0x7ffffffffffffff8;
      ppppplVar17 = (longlong *****)((longlong)ppppplVar5 + uVar21 * 4);
      uVar23 = 0;
      do {
        puVar14 = (undefined8 *)((longlong)ppppplVar5 + uVar23 * 4);
        *puVar14 = uVar27;
        puVar14[1] = uVar8;
        puVar14 = (undefined8 *)((longlong)ppppplVar5 + (uVar23 + 4) * 4);
        *puVar14 = uVar27;
        puVar14[1] = uVar8;
        uVar23 = uVar23 + 8;
      } while (uVar21 != uVar23);
      if (uVar22 == uVar21) goto LAB_006aa1df;
    }
    do {
      *(undefined4 *)ppppplVar17 = 0xffff;
      ppppplVar17 = (longlong *****)((longlong)ppppplVar17 + 4);
    } while (ppppplVar17 != (longlong *****)((longlong)ppppplVar5 + (longlong)ppppplVar4 * 4));
  }
LAB_006aa1df:
  local_128 = local_210[4];
  ppppppplStack_130 = (longlong *******)local_210[5];
  ppppppplVar28 = (longlong *******)(local_210 + 6);
  local_210[5] = (longlong *****)0x0;
  local_148 = (longlong *******)0x0;
  local_138 = (longlong *******)0x0;
  ppppppplVar25 = (longlong *******)&local_180;
  local_150 = *param_2;
  local_160 = (longlong *******)param_2[1];
  local_190 = param_2[3];
  local_208 = (longlong *******)0x0;
  local_268 = (longlong *******)0x8000000000000000;
  local_158 = 0;
  bVar7 = false;
  local_108 = 0;
  local_1fc = param_4;
  local_1d0 = param_2;
  local_120 = ppppppplStack_130;
  local_118 = ppppppplVar28;
  local_110 = param_1;
  local_98 = param_5;
LAB_006aa2b0:
  if ((int)local_148 != 1) {
    if (local_138 == ppppppplStack_130) {
      uVar27 = <http[56314f485c23ccf6]::header::map::Drain<http[56314f485c23ccf6]::header::value::HeaderValue>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(&local_148,param_2);
      pppppplVar10 = local_150;
      if (bVar7) {
        lVar12 = param_3[2];
        if (((ulonglong)local_208 & 1) == 0) {
          if ((ulonglong)(*param_3 - lVar12) < 2) {
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (param_3,lVar12,2,1,1);
            lVar12 = param_3[2];
          }
          *(undefined2 *)(param_3[1] + lVar12) = 0xa0d;
          lVar12 = 2;
        }
        else {
          if ((ulonglong)(*param_3 - lVar12) < 0xb) {
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (param_3,lVar12,0xb,1,1);
            lVar12 = param_3[2];
          }
          lVar18 = param_3[1];
          *(undefined8 *)(lVar18 + lVar12) = 0x656b6e756863202c;
          *(undefined4 *)(lVar18 + 7 + lVar12) = 0xa0d6465;
          lVar12 = 0xb;
        }
        param_3[2] = param_3[2] + lVar12;
      }
      ppppppplVar28 = local_1d0;
      if ((param_6 & 1) == 0) {
        if (pppppplVar10 == (longlong ******)0x0) {
          if (local_160 == (longlong *******)0x0) goto LAB_006ab622;
          sVar3 = *(short *)(local_210 + 0xd);
          if ((99 < (ushort)(sVar3 - 100U)) &&
             (((*(char *)local_190 == -1 ||
               (99 < (ushort)(sVar3 - 200U) || *(char *)local_190 != '\a')) && (sVar3 != 0xcc)))) {
            local_268 = (longlong *******)0x8000000000000000;
            ppppppplVar25 = (longlong *******)0x0;
            if (sVar3 != 0x130) {
              local_248 = _DAT_0018d4f0;
              ppppppplStack_240 = _UNK_0018d4f8;
              local_258 = _s__0018d4e0;
              ppppppplStack_250 = _UNK_0018d4e8;
              uVar27 = <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
                       ::write_header_name(local_100,param_3,&local_258);
              lVar12 = param_3[2];
              if ((ulonglong)(*param_3 - lVar12) < 2) {
                uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (param_3,lVar12,2,1,1);
                lVar12 = param_3[2];
              }
              *(undefined2 *)(param_3[1] + lVar12) = 0x203a;
              param_3[2] = param_3[2] + 2;
              if (local_258 != (longlong *******)0x0) {
                (*(code *)local_258[4])(uVar27,local_248);
              }
              lVar18 = (*(code *)PTR_fmt_00799cd0)();
              uVar21 = 0x14 - lVar18;
              lVar12 = param_3[2];
              uVar27 = extraout_XMM0_Qa_01;
              if ((ulonglong)(*param_3 - lVar12) < uVar21) {
                uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (param_3,lVar12,uVar21,1,1);
                lVar12 = param_3[2];
              }
              if (lVar18 != 0x14) {
                uVar27 = (*(code *)PTR_memcpy_00799008)(uVar27,uVar21);
                lVar12 = param_3[2];
              }
              lVar12 = lVar12 + uVar21;
              param_3[2] = lVar12;
              if ((ulonglong)(*param_3 - lVar12) < 2) {
                uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                         do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                   (param_3,lVar12,2,1,1);
                lVar12 = param_3[2];
              }
              *(undefined2 *)(param_3[1] + lVar12) = 0xa0d;
              param_3[2] = param_3[2] + 2;
              local_268 = (longlong *******)0x8000000000000000;
              ppppppplVar25 = local_160;
            }
            goto LAB_006ab676;
          }
LAB_006ab668:
          local_268 = (longlong *******)0x8000000000000000;
          ppppppplVar25 = (longlong *******)0x0;
        }
        else {
          if ((int)pppppplVar10 == 2) {
LAB_006ab622:
            sVar3 = *(short *)(local_210 + 0xd);
            if (99 < (ushort)(sVar3 - 100U)) {
              cVar2 = *(char *)local_190;
              if (cVar2 == -1) {
                if (sVar3 != 0xcc) {
                  local_268 = (longlong *******)0x8000000000000000;
                  ppppppplVar25 = (longlong *******)0x0;
                  if (sVar3 != 0x130) {
LAB_006abac8:
                    local_248 = _DAT_0018d4f0;
                    ppppppplStack_240 = _UNK_0018d4f8;
                    local_258 = _s__0018d4e0;
                    ppppppplStack_250 = _UNK_0018d4e8;
                    uVar27 = <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
                             ::write_header_name(local_100,param_3,&local_258);
                    lVar12 = param_3[2];
                    if ((ulonglong)(*param_3 - lVar12) < 5) {
                      uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                               do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                         (param_3,lVar12,5,1,1);
                      lVar12 = param_3[2];
                    }
                    lVar18 = param_3[1];
                    *(undefined1 *)(lVar18 + 4 + lVar12) = 10;
                    *(undefined4 *)(lVar18 + lVar12) = 0xd30203a;
                    param_3[2] = param_3[2] + 5;
                    if (local_258 != (longlong *******)0x0) {
                      uVar27 = (*(code *)local_258[4])(uVar27,local_248);
                    }
                    local_268 = (longlong *******)0x8000000000000000;
                    ppppppplVar25 = (longlong *******)0x0;
                  }
                  goto LAB_006ab676;
                }
              }
              else if ((99 < (ushort)(sVar3 - 200U) || cVar2 != '\a') && (sVar3 != 0xcc)) {
                local_268 = (longlong *******)0x8000000000000000;
                ppppppplVar25 = (longlong *******)0x0;
                if (sVar3 == 0x130) goto LAB_006ab676;
                if (cVar2 != '\x05') goto LAB_006abac8;
              }
            }
            goto LAB_006ab668;
          }
          local_268 = (longlong *******)0x8000000000000001;
          if ((*(char *)((longlong)local_210 + 0x6a) != '\x01') && (*(char *)local_190 != '\x05')) {
            sVar3 = *(short *)(local_210 + 0xd);
            if (*(char *)local_190 == '\a') {
              if (199 < (ushort)(sVar3 - 100U)) goto LAB_006abb85;
            }
            else if (99 < (ushort)(sVar3 - 100U)) {
LAB_006abb85:
              if ((sVar3 != 0xcc) && (sVar3 != 0x130)) {
                local_248 = _DAT_0018ce70;
                ppppppplStack_240 = _UNK_0018ce78;
                local_258 = _DAT_0018ce60;
                ppppppplStack_250 = _UNK_0018ce68;
                uVar27 = <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
                         ::write_header_name(local_100,param_3,&local_258);
                lVar12 = param_3[2];
                if ((ulonglong)(*param_3 - lVar12) < 0xb) {
                  uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                           do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                     (param_3,lVar12,0xb,1,1);
                  lVar12 = param_3[2];
                }
                lVar18 = param_3[1];
                *(undefined8 *)(lVar18 + lVar12) = 0x656b6e756863203a;
                *(undefined4 *)(lVar18 + 7 + lVar12) = 0xa0d6465;
                param_3[2] = param_3[2] + 0xb;
                if (local_258 != (longlong *******)0x0) {
                  uVar27 = (*(code *)local_258[4])(0x656b6e756863203a,local_248);
                }
                local_268 = (longlong *******)0xffffffffffffffff;
              }
            }
          }
        }
LAB_006ab676:
        ppppppplVar24 = local_1c8;
        ppppppplVar28 = local_1d0;
        if ((-0x7fffffffffffffff < (longlong)local_1c8) &&
           (local_1c8 != (longlong *******)0xffffffffffffffff)) {
          local_208 = ppppppplStack_1c0;
          if (local_1b8 != (longlong *******)0x0) {
            ppppppplVar28 = ppppppplStack_1c0 + 7;
            lVar12 = 1 - (longlong)local_1b8;
            do {
              if (ppppppplVar28[-7] != (longlong ******)0x0) {
                uVar27 = (*(code *)ppppppplVar28[-7][4])(uVar27,ppppppplVar28[-5]);
              }
              ppppppplVar28 = ppppppplVar28 + 4;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 1);
          }
          ppppppplVar28 = local_1d0;
          if (ppppppplVar24 != (longlong *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,8);
          }
        }
        local_1c8 = local_268;
        uStack_1b0 = (longlong *******)((ulonglong)uStack_1b0 & 0xffffffffffffff00);
        ppppppplStack_1c0 = ppppppplVar25;
      }
      if (*(char *)local_190 == '\x05') {
LAB_006ab77c:
        local_1c8 = (longlong *******)0x8000000000000000;
        ppppppplStack_1c0 = (longlong *******)0x0;
        uStack_1b0 = (longlong *******)((ulonglong)uStack_1b0 & 0xffffffffffffff00);
        local_268 = (longlong *******)0x8000000000000000;
      }
      else {
        sVar3 = *(short *)(local_210 + 0xd);
        if (*(char *)local_190 != '\a') {
          if (99 < (ushort)(sVar3 - 100U)) goto LAB_006ab76e;
          goto LAB_006ab77c;
        }
        if ((ushort)(sVar3 - 100U) < 200) goto LAB_006ab77c;
LAB_006ab76e:
        if ((sVar3 == 0x130) || (sVar3 == 0xcc)) goto LAB_006ab77c;
      }
      lVar12 = param_3[2];
      if (((local_108 & 1) == 0) && (*(char *)((longlong)ppppppplVar28 + 0x22) != '\0')) {
        if ((ulonglong)(*param_3 - lVar12) < 0x25) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,0x25,1,1);
        }
        local_248 = _DAT_0018ce90;
        ppppppplStack_240 = _UNK_0018ce98;
        local_258 = _DAT_0018ce80;
        ppppppplStack_250 = _UNK_0018ce88;
        uVar27 = <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
                 ::write_header_name(local_100,param_3,&local_258);
        ppppppplVar28 = (longlong *******)param_3[2];
        if ((ulonglong)(*param_3 - (longlong)ppppppplVar28) < 2) {
          uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(param_3,ppppppplVar28,2,1,1);
          ppppppplVar28 = (longlong *******)param_3[2];
        }
        ppppppplVar25 = ppppppplStack_250;
        lVar12 = param_3[1];
        ((char *)(lVar12 + (longlong)ppppppplVar28))[0] = ':';
        ((char *)(lVar12 + (longlong)ppppppplVar28))[1] = ' ';
        param_3[2] = param_3[2] + 2;
        if (local_258 != (longlong *******)0x0) {
          (*(code *)local_258[4])(uVar27,local_248);
          ppppppplVar28 = ppppppplVar25;
        }
        hyper[c4782d5b5c5e3493]::common::date::extend(param_3,ppppppplVar28);
        lVar12 = param_3[2];
        if ((ulonglong)(*param_3 - lVar12) < 4) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,4,1,1);
          lVar12 = param_3[2];
        }
        *(undefined4 *)(param_3[1] + lVar12) = 0xa0d0a0d;
        lVar12 = 4;
        local_268 = local_1c8;
      }
      else {
        if ((ulonglong)(*param_3 - lVar12) < 2) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,2,1,1);
          lVar12 = param_3[2];
        }
        *(undefined2 *)(param_3[1] + lVar12) = 0xa0d;
        lVar12 = 2;
      }
      param_3[2] = param_3[2] + lVar12;
      bVar40 = 1;
      if ((-0x7fffffffffffffff < (longlong)local_268) &&
         (local_1a8 != (longlong *******)0xffffffffffffffff)) {
        local_1e8 = local_198;
        local_1f8 = local_1a8;
        ppppppplStack_1f0 = ppppppplStack_1a0;
        local_248 = local_1b8;
        ppppppplStack_240 = uStack_1b0;
        local_258 = local_1c8;
        ppppppplStack_250 = ppppppplStack_1c0;
        <hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::into_chunked_with_trailing_fields
                  (&local_148,&local_258,&local_1f8);
        local_1c8 = local_148;
        ppppppplStack_1c0 = ppppppplStack_140;
        local_1b8 = local_138;
        uStack_1b0 = ppppppplStack_130;
        bVar40 = 0;
      }
      local_110[2] = local_1b8;
      *local_110 = local_1c8;
      local_110[1] = ppppppplStack_1c0;
      uVar9 = uStack_1b0._1_4_;
      *(undefined4 *)((longlong)local_110 + 0x19) = uVar9;
      *(undefined4 *)((longlong)local_110 + 0x1c) = uStack_1b0._4_4_;
      *(char *)(local_110 + 3) = (char)local_1fc;
      ppppppplVar28 = local_1c8;
      if ((local_188 != 0) && (local_180 != (longlong *******)0x0)) {
        ppppppplVar28 = (longlong *******)(*(code *)local_180[4])(uStack_1b0._4_4_,local_170);
      }
      if (!(bool)(local_1a8 != (longlong *******)0xffffffffffffffff & bVar40)) goto LAB_006aba2b;
      if (local_198 != (longlong *******)0x0) {
        ppppppplVar25 = ppppppplStack_1a0 + 7;
        lVar12 = 1 - (longlong)local_198;
        do {
          if (ppppppplVar25[-7] != (longlong ******)0x0) {
            ppppppplVar28 =
                 (longlong *******)(*(code *)ppppppplVar25[-7][4])(ppppppplVar28,ppppppplVar25[-5]);
          }
          ppppppplVar25 = ppppppplVar25 + 4;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 1);
      }
      goto LAB_006aba0f;
    }
    ppppppplVar24 = (longlong *******)((longlong)local_138 + 1);
    if (local_138 < local_120) {
      bVar26 = ((ulonglong)local_128[(longlong)local_138 * 0xd] & 1) == 0;
      if (!bVar26) {
        ppppppplVar28 = (longlong *******)local_128[(longlong)local_138 * 0xd + 1];
      }
      local_148 = (longlong *******)(ulonglong)!bVar26;
      local_78 = (longlong *******)local_128[(longlong)local_138 * 0xd + 8];
      pppplStack_70 = local_128[(longlong)local_138 * 0xd + 9];
      local_68 = local_128[(longlong)local_138 * 0xd + 10];
      pppplStack_60 = local_128[(longlong)local_138 * 0xd + 0xb];
      local_58 = (longlong *******)local_128[(longlong)local_138 * 0xd + 3];
      ppppppplStack_50 = (longlong *******)local_128[(longlong)local_138 * 0xd + 4];
      local_48 = (longlong *******)local_128[(longlong)local_138 * 0xd + 5];
      pppplStack_40 = local_128[(longlong)local_138 * 0xd + 6];
      local_38 = local_128[(longlong)local_138 * 0xd + 7];
      local_1d8 = local_128[(longlong)local_138 * 0xd + 7];
      local_1f8 = (longlong *******)local_128[(longlong)local_138 * 0xd + 3];
      ppppppplStack_1f0 = (longlong *******)local_128[(longlong)local_138 * 0xd + 4];
      local_1e8 = (longlong *******)local_128[(longlong)local_138 * 0xd + 5];
      pppplStack_1e0 = local_128[(longlong)local_138 * 0xd + 6];
      ppppppplStack_140 = ppppppplVar28;
      local_138 = ppppppplVar24;
      if ((local_188 != 0) && (local_180 != (longlong *******)0x0)) {
        (*(code *)local_180[4])();
      }
      local_188 = 1;
      local_170 = local_68;
      pppplStack_168 = pppplStack_60;
      local_180 = local_78;
      pppplStack_178 = pppplStack_70;
      ppppppplVar28 = local_78;
      if (bVar7) {
        lVar12 = param_3[2];
        if (((ulonglong)local_208 & 1) == 0) {
          if ((ulonglong)(*param_3 - lVar12) < 2) {
            ppppppplVar28 =
                 (longlong *******)
                 <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,2,1,1);
            lVar12 = param_3[2];
          }
          *(undefined2 *)(param_3[1] + lVar12) = 0xa0d;
          lVar12 = 2;
        }
        else {
          if ((ulonglong)(*param_3 - lVar12) < 0xb) {
            ppppppplVar28 =
                 (longlong *******)
                 <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,0xb,1,1);
            lVar12 = param_3[2];
          }
          lVar18 = param_3[1];
          *(undefined8 *)(lVar18 + lVar12) = 0x656b6e756863202c;
          *(undefined4 *)(lVar18 + 7 + lVar12) = 0xa0d6465;
          lVar12 = 0xb;
        }
        param_3[2] = param_3[2] + lVar12;
        bVar7 = false;
        goto joined_r0x006aa519;
      }
      bVar7 = false;
      if (local_78 == (longlong *******)0x0) goto LAB_006aa5f0;
      goto switchD_006aa612_caseD_15;
    }
    local_138 = ppppppplVar24;
    (*(code *)PTR_panic_bounds_check_00799520)();
    goto LAB_006abd22;
  }
  http[56314f485c23ccf6]::header::map::remove_extra_value::
  <http[56314f485c23ccf6]::header::value::HeaderValue>
            (&local_258,local_128,local_120,local_118,ppppppplStack_140);
  if ((char)local_248 != '\0') {
    ppppppplStack_140 = ppppppplStack_240;
  }
  local_148 = (longlong *******)(ulonglong)((char)local_248 != '\0');
  pppplStack_1e0 = (longlong ****)CONCAT71(uStack_21f,uStack_220);
  local_1d8 = (longlong ****)CONCAT62(uStack_216,local_218);
  ppppppplVar28 = local_238;
  local_1f8 = local_238;
  ppppppplStack_1f0 = ppppppplStack_230;
  local_1e8 = local_228;
  local_58 = local_238;
  ppppppplStack_50 = ppppppplStack_230;
  local_48 = local_228;
  pppplStack_40 = pppplStack_1e0;
  local_38 = local_1d8;
joined_r0x006aa519:
  if ((char)local_188 == '\0') {
    (*(code *)PTR_expect_failed_00799440)
              (ppppppplVar28,&PTR_s__vendor_hyper_1_12_0_src_proto_h_00791c50);
    goto LAB_006abd22;
  }
  if (local_180 != (longlong *******)0x0) goto switchD_006aa612_caseD_15;
LAB_006aa5f0:
  ppppppplVar24 = local_1e8;
  uVar11 = (byte)pppplStack_178 - 0x14;
  if (0x31 < uVar11) goto switchD_006aa612_caseD_15;
  uVar21 = (longlong)&switchD_006aa612::switchdataD_001a55f4 +
           (longlong)(int)(&switchD_006aa612::switchdataD_001a55f4)[uVar11];
  uVar15 = (undefined7)(uVar21 >> 8);
  switch((uint)(byte)pppplStack_178) {
  case 0x14:
    uVar11 = local_1fc & 1;
    local_1fc = (uint)CONCAT71(uVar15,1);
    if (uVar11 == 0) {
      local_1fc = hyper[c4782d5b5c5e3493]::headers::connection_has
                            (ppppppplStack_1f0,local_1e8,"close",5);
      ppppppplVar28 = extraout_XMM0_Qa;
    }
    if (bVar7) {
      lVar12 = param_3[2];
      if ((ulonglong)(*param_3 - lVar12) < 2) {
        ppppppplVar28 =
             (longlong *******)
             <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,2,1,1);
        lVar12 = param_3[2];
      }
      ppppppplVar24 = local_1e8;
      *(undefined2 *)(param_3[1] + lVar12) = 0x202c;
      lVar12 = param_3[2] + 2;
      param_3[2] = lVar12;
      if (local_1e8 <= (longlong *******)(*param_3 - lVar12)) goto LAB_006aa9a5;
      ppppppplVar28 =
           (longlong *******)
           <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
           <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,local_1e8,1,1);
LAB_006ab127:
LAB_006aa9aa:
      (*(code *)PTR_memcpy_00799008)(ppppppplVar28,ppppppplVar24);
      lVar12 = param_3[2];
    }
    else {
      local_248 = _DAT_0018d430;
      ppppppplStack_240 = _UNK_0018d438;
      local_258 = _s__0018d420;
      ppppppplStack_250 = _UNK_0018d428;
      ppppppplVar28 =
           (longlong *******)
           <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
           ::write_header_name(local_100,param_3,&local_258);
      lVar12 = param_3[2];
      if ((ulonglong)(*param_3 - lVar12) < 2) {
        ppppppplVar28 =
             (longlong *******)
             <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,2,1,1);
        lVar12 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + lVar12) = 0x203a;
      lVar12 = param_3[2] + 2;
      param_3[2] = lVar12;
      if (local_258 != (longlong *******)0x0) {
        ppppppplVar28 = (longlong *******)(*(code *)local_258[4])(ppppppplVar28,local_248);
        lVar12 = param_3[2];
      }
      ppppppplVar24 = local_1e8;
      if ((longlong *******)(*param_3 - lVar12) < local_1e8) {
        ppppppplVar28 =
             (longlong *******)
             <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,local_1e8,1,1);
        goto LAB_006ab127;
      }
LAB_006aa9a5:
      ppppppplVar24 = local_1e8;
      if (local_1e8 != (longlong *******)0x0) goto LAB_006aa9aa;
    }
    param_3[2] = (longlong)(lVar12 + (longlong)ppppppplVar24);
    goto LAB_006aa9c8;
  default:
    goto switchD_006aa612_caseD_15;
  case 0x18:
    if ((param_6 == 1) && (!bVar7)) {
LAB_006ab2fd:
      if (local_98 <= (ulonglong)param_3[2]) {
        param_3[2] = local_98;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar14 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      ppppppplVar28 = ppppppplStack_1f0;
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = 0;
        *(undefined2 *)(puVar14 + 2) = 0x301;
        local_110[1] = puVar14;
        *local_110 = 0xfffffffffffffffe;
        (*(code *)local_1f8[4])(local_110,local_1e8);
        ppppppplVar28 =
             (longlong *******)
             <http[56314f485c23ccf6]::header::map::Drain<http[56314f485c23ccf6]::header::value::HeaderValue>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(&local_148,ppppppplVar28);
        if ((local_188 != 0) && (local_180 != (longlong *******)0x0)) {
          ppppppplVar28 = (longlong *******)(*(code *)local_180[4])(ppppppplVar28,local_170);
        }
        if (local_1a8 != (longlong *******)0xffffffffffffffff) {
          if (local_198 != (longlong *******)0x0) {
            ppppppplVar25 = ppppppplStack_1a0 + 7;
            lVar12 = 1 - (longlong)local_198;
            do {
              if (ppppppplVar25[-7] != (longlong ******)0x0) {
                ppppppplVar28 =
                     (longlong *******)
                     (*(code *)ppppppplVar25[-7][4])(ppppppplVar28,ppppppplVar25[-5]);
              }
              ppppppplVar25 = ppppppplVar25 + 4;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 1);
          }
LAB_006aba0f:
          if (local_1a8 != (longlong *******)0x0) {
            ppppppplVar28 =
                 (longlong *******)(*(code *)PTR___rust_dealloc_00798fc8)(ppppppplVar28,8);
          }
        }
LAB_006aba2b:
        if (((int)local_e0 != -1) && (local_100[0] != 0)) {
          (**(code **)(local_100[0] + 0x20))(ppppppplVar28,local_f0);
        }
        return;
      }
      (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_006abd22:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if ((int)local_150 == 2) {
      if (*(char *)local_190 != '\x05') break;
      param_6 = 1;
      goto switchD_006aa612_caseD_15;
    }
    if (local_150 != (longlong ******)0x0) {
      if (local_1e8 != (longlong *******)0x0) {
        ppppppplVar28 = (longlong *******)0x0;
        ppppppplVar13 = (longlong *******)0x0;
        while (local_1e8 != ppppppplVar28) {
          bVar40 = *(char *)((longlong)ppppppplStack_1f0 + (longlong)ppppppplVar28) - 0x30;
          if ((9 < bVar40) ||
             (auVar29._8_8_ = 0, auVar29._0_8_ = ppppppplVar13,
             uVar22 = SUB168(auVar29 * ZEXT816(10),0), SUB168(auVar29 * ZEXT816(10),8) != 0))
          goto LAB_006ab2fd;
          uVar21 = (ulonglong)bVar40;
          ppppppplVar28 = (longlong *******)((longlong)ppppppplVar28 + 1);
          ppppppplVar13 = (longlong *******)(uVar22 + uVar21);
          if (CARRY8(uVar22,uVar21)) goto LAB_006ab2fd;
        }
        if ((local_158 & 1) == 0) {
          local_1c8 = (longlong *******)0x8000000000000000;
          uStack_1b0 = (longlong *******)((ulonglong)uStack_1b0._1_7_ << 8);
          local_248 = _DAT_0018d4f0;
          ppppppplStack_240 = _UNK_0018d4f8;
          local_258 = _s__0018d4e0;
          ppppppplStack_250 = _UNK_0018d4e8;
          ppppppplStack_1c0 = ppppppplVar13;
          uVar27 = <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
                   ::write_header_name(local_100,param_3,&local_258);
          lVar12 = param_3[2];
          if ((ulonglong)(*param_3 - lVar12) < 2) {
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (param_3,lVar12,2,1,1);
            lVar12 = param_3[2];
          }
          *(undefined2 *)(param_3[1] + lVar12) = 0x203a;
          lVar12 = param_3[2] + 2;
          param_3[2] = lVar12;
          if (local_258 != (longlong *******)0x0) {
            uVar27 = (*(code *)local_258[4])(uVar27,local_248);
            lVar12 = param_3[2];
          }
          if ((longlong *******)(*param_3 - lVar12) < ppppppplVar24) {
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (param_3,lVar12,ppppppplVar24,1,1);
          }
          uVar27 = (*(code *)PTR_memcpy_00799008)(uVar27,ppppppplVar24);
          param_3[2] = (longlong)(param_3[2] + (longlong)ppppppplVar24);
          local_158 = CONCAT71((int7)((ulonglong)uVar27 >> 8),1);
          local_268 = (longlong *******)0x8000000000000000;
          local_a0 = ppppppplVar13;
LAB_006aaade:
          bVar7 = true;
          param_6 = 1;
          break;
        }
        local_158 = CONCAT71((int7)(uVar21 >> 8),1);
        if (local_a0 == ppppppplVar13) break;
      }
      goto LAB_006ab2fd;
    }
    if (!bVar7) {
      local_1c8 = (longlong *******)0x8000000000000000;
      ppppppplStack_1c0 = local_160;
      uStack_1b0 = (longlong *******)((ulonglong)uStack_1b0._1_7_ << 8);
      local_248 = _DAT_0018d4f0;
      ppppppplStack_240 = _UNK_0018d4f8;
      local_258 = _s__0018d4e0;
      ppppppplStack_250 = _UNK_0018d4e8;
      uVar27 = <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
               ::write_header_name(local_100,param_3,&local_258);
      lVar12 = param_3[2];
      if ((ulonglong)(*param_3 - lVar12) < 2) {
        uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,2,1,1);
        lVar12 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + lVar12) = 0x203a;
      lVar12 = param_3[2] + 2;
      param_3[2] = lVar12;
      if (local_258 != (longlong *******)0x0) {
        uVar27 = (*(code *)local_258[4])(uVar27,local_248);
        lVar12 = param_3[2];
      }
      ppppppplVar28 = local_1e8;
      if ((longlong *******)(*param_3 - lVar12) < local_1e8) {
        uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,local_1e8,1,1);
LAB_006aa735:
        (*(code *)PTR_memcpy_00799008)(uVar27,ppppppplVar28);
        lVar12 = param_3[2];
      }
      else if (local_1e8 != (longlong *******)0x0) goto LAB_006aa735;
      param_3[2] = (longlong)(lVar12 + (longlong)ppppppplVar28);
      local_268 = (longlong *******)0x8000000000000000;
      goto LAB_006aaade;
    }
LAB_006aa9c8:
    bVar7 = true;
    break;
  case 0x20:
    local_108 = CONCAT71(uVar15,1);
switchD_006aa612_caseD_15:
    uVar27 = <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
             ::write_header_name(local_100,param_3,ppppppplVar25);
    lVar12 = param_3[2];
    if ((ulonglong)(*param_3 - lVar12) < 2) {
      uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,2,1,1);
      lVar12 = param_3[2];
    }
    ppppppplVar28 = local_1e8;
    param_2 = ppppppplStack_1f0;
    *(undefined2 *)(param_3[1] + lVar12) = 0x203a;
    lVar12 = *param_3;
    lVar18 = param_3[2] + 2;
    param_3[2] = lVar18;
    if ((longlong *******)(lVar12 - lVar18) < local_1e8) {
      uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(param_3,lVar18,local_1e8,1,1);
LAB_006aa58f:
      (*(code *)PTR_memcpy_00799008)(uVar27,ppppppplVar28);
      lVar12 = *param_3;
      lVar18 = param_3[2];
    }
    else if (local_1e8 != (longlong *******)0x0) goto LAB_006aa58f;
    pcVar19 = (char *)(lVar18 + (longlong)ppppppplVar28);
    param_3[2] = (longlong)pcVar19;
    if ((ulonglong)(lVar12 - (longlong)pcVar19) < 2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_3,pcVar19,2,1,1);
      pcVar19 = (char *)param_3[2];
    }
    lVar12 = param_3[1];
    (pcVar19 + lVar12)[0] = '\r';
    (pcVar19 + lVar12)[1] = '\n';
    param_3[2] = param_3[2] + 2;
    (*(code *)local_1f8[4])();
    goto LAB_006aa2b0;
  case 0x44:
    if ((*(char *)((longlong)local_210 + 0x6a) != '\x01') && (*(char *)local_190 != '\x05')) {
      sVar3 = *(short *)(local_210 + 0xd);
      if (*(char *)local_190 == '\a') {
        if (199 < (ushort)(sVar3 - 100U)) goto LAB_006aab0f;
      }
      else if (99 < (ushort)(sVar3 - 100U)) {
LAB_006aab0f:
        if ((sVar3 != 0xcc) && (sVar3 != 0x130)) {
          if (bVar7) {
            lVar12 = param_3[2];
            if ((ulonglong)(*param_3 - lVar12) < 2) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,2,1,1);
              lVar12 = param_3[2];
            }
            ppppppplVar24 = local_1e8;
            ppppppplVar28 = ppppppplStack_1f0;
            *(undefined2 *)(param_3[1] + lVar12) = 0x202c;
            lVar12 = param_3[2] + 2;
            param_3[2] = lVar12;
            if (local_1e8 <= (longlong *******)(*param_3 - lVar12)) goto LAB_006aad32;
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,local_1e8,1,1);
LAB_006aad37:
            (*(code *)PTR_memcpy_00799008)();
            lVar12 = param_3[2];
          }
          else {
            local_248 = _DAT_0018d0f0;
            ppppppplStack_240 = _UNK_0018d0f8;
            local_258 = _s__0018d0e0;
            ppppppplStack_250 = _UNK_0018d0e8;
            <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
            ::write_header_name(local_100,param_3,&local_258);
            lVar12 = param_3[2];
            if ((ulonglong)(*param_3 - lVar12) < 2) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,2,1,1);
              lVar12 = param_3[2];
            }
            *(undefined2 *)(param_3[1] + lVar12) = 0x203a;
            lVar12 = param_3[2] + 2;
            param_3[2] = lVar12;
            if (local_258 != (longlong *******)0x0) {
              (*(code *)local_258[4])();
              lVar12 = param_3[2];
            }
            ppppppplVar24 = local_1e8;
            ppppppplVar28 = ppppppplStack_1f0;
            if ((longlong *******)(*param_3 - lVar12) < local_1e8) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,local_1e8,1,1);
              goto LAB_006aad37;
            }
LAB_006aad32:
            ppppppplVar28 = ppppppplStack_1f0;
            ppppppplVar24 = local_1e8;
            if (local_1e8 != (longlong *******)0x0) goto LAB_006aad37;
          }
          param_3[2] = (longlong)(lVar12 + (longlong)ppppppplVar24);
          if (ppppppplVar24 != (longlong *******)0x0) {
            if (&DAT_00000007 < ppppppplVar24) {
              if (&DAT_0000001f < ppppppplVar24) {
                ppppppplVar13 = (longlong *******)((ulonglong)ppppppplVar24 & 0xffffffffffffffe0);
                auVar29 = (undefined1  [16])0x0;
                ppppppplVar16 = (longlong *******)0x0;
                auVar30 = (undefined1  [16])0x0;
                do {
                  pcVar1 = (char *)((longlong)ppppppplVar28 + (longlong)ppppppplVar16);
                  pcVar19 = (char *)((longlong)(ppppppplVar28 + 2) + (longlong)ppppppplVar16);
                  bVar40 = *pcVar1 + DAT_001831d0;
                  bVar42 = pcVar1[1] + DAT_001831d0._1_1_;
                  bVar44 = pcVar1[2] + DAT_001831d0._2_1_;
                  bVar46 = pcVar1[3] + DAT_001831d0._3_1_;
                  bVar48 = pcVar1[4] + DAT_001831d0._4_1_;
                  bVar50 = pcVar1[5] + DAT_001831d0._5_1_;
                  bVar52 = pcVar1[6] + DAT_001831d0._6_1_;
                  bVar54 = pcVar1[7] + DAT_001831d0._7_1_;
                  bVar58 = pcVar1[8] + DAT_001831d0._8_1_;
                  bVar59 = pcVar1[9] + DAT_001831d0._9_1_;
                  bVar60 = pcVar1[10] + DAT_001831d0._10_1_;
                  bVar61 = pcVar1[0xb] + DAT_001831d0._11_1_;
                  bVar62 = pcVar1[0xc] + DAT_001831d0._12_1_;
                  bVar63 = pcVar1[0xd] + DAT_001831d0._13_1_;
                  bVar64 = pcVar1[0xe] + DAT_001831d0._14_1_;
                  bVar65 = pcVar1[0xf] + DAT_001831d0._15_1_;
                  bVar66 = *pcVar19 + DAT_001831d0;
                  bVar67 = pcVar19[1] + DAT_001831d0._1_1_;
                  bVar68 = pcVar19[2] + DAT_001831d0._2_1_;
                  bVar69 = pcVar19[3] + DAT_001831d0._3_1_;
                  bVar70 = pcVar19[4] + DAT_001831d0._4_1_;
                  bVar71 = pcVar19[5] + DAT_001831d0._5_1_;
                  bVar72 = pcVar19[6] + DAT_001831d0._6_1_;
                  bVar73 = pcVar19[7] + DAT_001831d0._7_1_;
                  bVar74 = pcVar19[8] + DAT_001831d0._8_1_;
                  bVar75 = pcVar19[9] + DAT_001831d0._9_1_;
                  bVar76 = pcVar19[10] + DAT_001831d0._10_1_;
                  bVar77 = pcVar19[0xb] + DAT_001831d0._11_1_;
                  bVar78 = pcVar19[0xc] + DAT_001831d0._12_1_;
                  bVar79 = pcVar19[0xd] + DAT_001831d0._13_1_;
                  bVar80 = pcVar19[0xe] + DAT_001831d0._14_1_;
                  bVar81 = pcVar19[0xf] + DAT_001831d0._15_1_;
                  auVar82[0] = -((byte)((DAT_00182f40 < bVar40) * DAT_00182f40 |
                                       (DAT_00182f40 >= bVar40) * bVar40) == bVar40);
                  auVar82[1] = -((byte)((UNK_00182f41 < bVar42) * UNK_00182f41 |
                                       (UNK_00182f41 >= bVar42) * bVar42) == bVar42);
                  auVar82[2] = -((byte)((UNK_00182f42 < bVar44) * UNK_00182f42 |
                                       (UNK_00182f42 >= bVar44) * bVar44) == bVar44);
                  auVar82[3] = -((byte)((UNK_00182f43 < bVar46) * UNK_00182f43 |
                                       (UNK_00182f43 >= bVar46) * bVar46) == bVar46);
                  auVar82[4] = -((byte)((UNK_00182f44 < bVar48) * UNK_00182f44 |
                                       (UNK_00182f44 >= bVar48) * bVar48) == bVar48);
                  auVar82[5] = -((byte)((UNK_00182f45 < bVar50) * UNK_00182f45 |
                                       (UNK_00182f45 >= bVar50) * bVar50) == bVar50);
                  auVar82[6] = -((byte)((UNK_00182f46 < bVar52) * UNK_00182f46 |
                                       (UNK_00182f46 >= bVar52) * bVar52) == bVar52);
                  auVar82[7] = -((byte)((UNK_00182f47 < bVar54) * UNK_00182f47 |
                                       (UNK_00182f47 >= bVar54) * bVar54) == bVar54);
                  auVar82[8] = -((byte)((UNK_00182f48 < bVar58) * UNK_00182f48 |
                                       (UNK_00182f48 >= bVar58) * bVar58) == bVar58);
                  auVar82[9] = -((byte)((UNK_00182f49 < bVar59) * UNK_00182f49 |
                                       (UNK_00182f49 >= bVar59) * bVar59) == bVar59);
                  auVar82[10] = -((byte)((UNK_00182f4a < bVar60) * UNK_00182f4a |
                                        (UNK_00182f4a >= bVar60) * bVar60) == bVar60);
                  auVar82[0xb] = -((byte)((UNK_00182f4b < bVar61) * UNK_00182f4b |
                                         (UNK_00182f4b >= bVar61) * bVar61) == bVar61);
                  auVar82[0xc] = -((byte)((UNK_00182f4c < bVar62) * UNK_00182f4c |
                                         (UNK_00182f4c >= bVar62) * bVar62) == bVar62);
                  auVar82[0xd] = -((byte)((UNK_00182f4d < bVar63) * UNK_00182f4d |
                                         (UNK_00182f4d >= bVar63) * bVar63) == bVar63);
                  auVar82[0xe] = -((byte)((UNK_00182f4e < bVar64) * UNK_00182f4e |
                                         (UNK_00182f4e >= bVar64) * bVar64) == bVar64);
                  auVar82[0xf] = -((byte)((UNK_00182f4f < bVar65) * UNK_00182f4f |
                                         (UNK_00182f4f >= bVar65) * bVar65) == bVar65);
                  auVar57[0] = -((byte)((DAT_00182f40 < bVar66) * DAT_00182f40 |
                                       (DAT_00182f40 >= bVar66) * bVar66) == bVar66);
                  auVar57[1] = -((byte)((UNK_00182f41 < bVar67) * UNK_00182f41 |
                                       (UNK_00182f41 >= bVar67) * bVar67) == bVar67);
                  auVar57[2] = -((byte)((UNK_00182f42 < bVar68) * UNK_00182f42 |
                                       (UNK_00182f42 >= bVar68) * bVar68) == bVar68);
                  auVar57[3] = -((byte)((UNK_00182f43 < bVar69) * UNK_00182f43 |
                                       (UNK_00182f43 >= bVar69) * bVar69) == bVar69);
                  auVar57[4] = -((byte)((UNK_00182f44 < bVar70) * UNK_00182f44 |
                                       (UNK_00182f44 >= bVar70) * bVar70) == bVar70);
                  auVar57[5] = -((byte)((UNK_00182f45 < bVar71) * UNK_00182f45 |
                                       (UNK_00182f45 >= bVar71) * bVar71) == bVar71);
                  auVar57[6] = -((byte)((UNK_00182f46 < bVar72) * UNK_00182f46 |
                                       (UNK_00182f46 >= bVar72) * bVar72) == bVar72);
                  auVar57[7] = -((byte)((UNK_00182f47 < bVar73) * UNK_00182f47 |
                                       (UNK_00182f47 >= bVar73) * bVar73) == bVar73);
                  auVar57[8] = -((byte)((UNK_00182f48 < bVar74) * UNK_00182f48 |
                                       (UNK_00182f48 >= bVar74) * bVar74) == bVar74);
                  auVar57[9] = -((byte)((UNK_00182f49 < bVar75) * UNK_00182f49 |
                                       (UNK_00182f49 >= bVar75) * bVar75) == bVar75);
                  auVar57[10] = -((byte)((UNK_00182f4a < bVar76) * UNK_00182f4a |
                                        (UNK_00182f4a >= bVar76) * bVar76) == bVar76);
                  auVar57[0xb] = -((byte)((UNK_00182f4b < bVar77) * UNK_00182f4b |
                                         (UNK_00182f4b >= bVar77) * bVar77) == bVar77);
                  auVar57[0xc] = -((byte)((UNK_00182f4c < bVar78) * UNK_00182f4c |
                                         (UNK_00182f4c >= bVar78) * bVar78) == bVar78);
                  auVar57[0xd] = -((byte)((UNK_00182f4d < bVar79) * UNK_00182f4d |
                                         (UNK_00182f4d >= bVar79) * bVar79) == bVar79);
                  auVar57[0xe] = -((byte)((UNK_00182f4e < bVar80) * UNK_00182f4e |
                                         (UNK_00182f4e >= bVar80) * bVar80) == bVar80);
                  auVar57[0xf] = -((byte)((UNK_00182f4f < bVar81) * UNK_00182f4f |
                                         (UNK_00182f4f >= bVar81) * bVar81) == bVar81);
                  auVar41[0] = -(*pcVar1 == DAT_00183900);
                  auVar41[1] = -(pcVar1[1] == UNK_00183901);
                  auVar41[2] = -(pcVar1[2] == UNK_00183902);
                  auVar41[3] = -(pcVar1[3] == UNK_00183903);
                  auVar41[4] = -(pcVar1[4] == UNK_00183904);
                  auVar41[5] = -(pcVar1[5] == UNK_00183905);
                  auVar41[6] = -(pcVar1[6] == UNK_00183906);
                  auVar41[7] = -(pcVar1[7] == UNK_00183907);
                  auVar41[8] = -(pcVar1[8] == UNK_00183908);
                  auVar41[9] = -(pcVar1[9] == UNK_00183909);
                  auVar41[10] = -(pcVar1[10] == UNK_0018390a);
                  auVar41[0xb] = -(pcVar1[0xb] == UNK_0018390b);
                  auVar41[0xc] = -(pcVar1[0xc] == UNK_0018390c);
                  auVar41[0xd] = -(pcVar1[0xd] == UNK_0018390d);
                  auVar41[0xe] = -(pcVar1[0xe] == UNK_0018390e);
                  auVar41[0xf] = -(pcVar1[0xf] == UNK_0018390f);
                  auVar30 = auVar30 | ~auVar41 & auVar82;
                  auVar55[0] = -(*pcVar19 == DAT_00183900);
                  auVar55[1] = -(pcVar19[1] == UNK_00183901);
                  auVar55[2] = -(pcVar19[2] == UNK_00183902);
                  auVar55[3] = -(pcVar19[3] == UNK_00183903);
                  auVar55[4] = -(pcVar19[4] == UNK_00183904);
                  auVar55[5] = -(pcVar19[5] == UNK_00183905);
                  auVar55[6] = -(pcVar19[6] == UNK_00183906);
                  auVar55[7] = -(pcVar19[7] == UNK_00183907);
                  auVar55[8] = -(pcVar19[8] == UNK_00183908);
                  auVar55[9] = -(pcVar19[9] == UNK_00183909);
                  auVar55[10] = -(pcVar19[10] == UNK_0018390a);
                  auVar55[0xb] = -(pcVar19[0xb] == UNK_0018390b);
                  auVar55[0xc] = -(pcVar19[0xc] == UNK_0018390c);
                  auVar55[0xd] = -(pcVar19[0xd] == UNK_0018390d);
                  auVar55[0xe] = -(pcVar19[0xe] == UNK_0018390e);
                  auVar55[0xf] = -(pcVar19[0xf] == UNK_0018390f);
                  auVar29 = auVar29 | ~auVar55 & auVar57;
                  ppppppplVar16 = ppppppplVar16 + 4;
                } while (ppppppplVar13 != ppppppplVar16);
                auVar29 = psllw(auVar29 | auVar30,7);
                bVar26 = (((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                                      (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                                     (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                                    (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                                   (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                                  (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                                 (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                                (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                               (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
                              (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
                             (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0';
                if (ppppppplVar24 != ppppppplVar13) {
                  if (((ulonglong)ppppppplVar24 & 0x18) == 0) {
                    ppppppplVar16 =
                         (longlong *******)((longlong)ppppppplVar13 + (longlong)ppppppplVar28);
                    goto LAB_006aafc2;
                  }
                  goto LAB_006aaf47;
                }
              }
              else {
                ppppppplVar13 = (longlong *******)0x0;
                bVar26 = false;
LAB_006aaf47:
                ppppppplVar20 = (longlong *******)((ulonglong)ppppppplVar24 & 0xfffffffffffffff8);
                ppppppplVar16 =
                     (longlong *******)((longlong)ppppppplVar20 + (longlong)ppppppplVar28);
                auVar29 = ZEXT116(bVar26);
                auVar30._8_4_ = 0xffffffff;
                auVar30._0_8_ = 0xffffffffffffffff;
                auVar30._12_4_ = 0xffffffff;
                do {
                  uVar27 = *(undefined8 *)((longlong)ppppppplVar28 + (longlong)ppppppplVar13);
                  bVar40 = (char)uVar27 + DAT_00183cf0;
                  cVar43 = (char)((ulonglong)uVar27 >> 8);
                  bVar42 = cVar43 + UNK_00183cf1;
                  cVar45 = (char)((ulonglong)uVar27 >> 0x10);
                  bVar44 = cVar45 + UNK_00183cf2;
                  cVar47 = (char)((ulonglong)uVar27 >> 0x18);
                  bVar46 = cVar47 + UNK_00183cf3;
                  cVar49 = (char)((ulonglong)uVar27 >> 0x20);
                  bVar48 = cVar49 + UNK_00183cf4;
                  cVar51 = (char)((ulonglong)uVar27 >> 0x28);
                  bVar50 = cVar51 + UNK_00183cf5;
                  cVar53 = (char)((ulonglong)uVar27 >> 0x30);
                  cVar2 = (char)((ulonglong)uVar27 >> 0x38);
                  bVar52 = cVar53 + UNK_00183cf6;
                  bVar54 = cVar2 + UNK_00183cf7;
                  auVar56[0] = -((byte)((bVar40 < DAT_00183660) * DAT_00183660 |
                                       (bVar40 >= DAT_00183660) * bVar40) == bVar40);
                  auVar56[1] = -((byte)((bVar42 < UNK_00183661) * UNK_00183661 |
                                       (bVar42 >= UNK_00183661) * bVar42) == bVar42);
                  auVar56[2] = -((byte)((bVar44 < UNK_00183662) * UNK_00183662 |
                                       (bVar44 >= UNK_00183662) * bVar44) == bVar44);
                  auVar56[3] = -((byte)((bVar46 < UNK_00183663) * UNK_00183663 |
                                       (bVar46 >= UNK_00183663) * bVar46) == bVar46);
                  auVar56[4] = -((byte)((bVar48 < UNK_00183664) * UNK_00183664 |
                                       (bVar48 >= UNK_00183664) * bVar48) == bVar48);
                  auVar56[5] = -((byte)((bVar50 < UNK_00183665) * UNK_00183665 |
                                       (bVar50 >= UNK_00183665) * bVar50) == bVar50);
                  auVar56[6] = -((byte)((bVar52 < UNK_00183666) * UNK_00183666 |
                                       (bVar52 >= UNK_00183666) * bVar52) == bVar52);
                  auVar56[7] = -((byte)((bVar54 < UNK_00183667) * UNK_00183667 |
                                       (bVar54 >= UNK_00183667) * bVar54) == bVar54);
                  auVar56[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                                       (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) ==
                                UNK_00183cf8);
                  auVar56[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                                       (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) ==
                                UNK_00183cf9);
                  auVar56[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                        (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) ==
                                 UNK_00183cfa);
                  auVar56[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                         (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) ==
                                  UNK_00183cfb);
                  auVar56[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                         (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) ==
                                  UNK_00183cfc);
                  auVar56[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                         (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) ==
                                  UNK_00183cfd);
                  auVar56[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                         (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) ==
                                  UNK_00183cfe);
                  auVar56[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                         (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) ==
                                  UNK_00183cff);
                  auVar31[0] = -((char)uVar27 == s__00184760[0]);
                  auVar31[1] = -(cVar43 == s__00184760[1]);
                  auVar31[2] = -(cVar45 == s__00184760[2]);
                  auVar31[3] = -(cVar47 == s__00184760[3]);
                  auVar31[4] = -(cVar49 == s__00184760[4]);
                  auVar31[5] = -(cVar51 == s__00184760[5]);
                  auVar31[6] = -(cVar53 == s__00184760[6]);
                  auVar31[7] = -(cVar2 == s__00184760[7]);
                  auVar31[8] = -(s__00184760[8] == '\0');
                  auVar31[9] = -(UNK_00184769 == '\0');
                  auVar31[10] = -(UNK_0018476a == '\0');
                  auVar31[0xb] = -(UNK_0018476b == '\0');
                  auVar31[0xc] = -(UNK_0018476c == '\0');
                  auVar31[0xd] = -(UNK_0018476d == '\0');
                  auVar31[0xe] = -(UNK_0018476e == '\0');
                  auVar31[0xf] = -(UNK_0018476f == '\0');
                  auVar31 = auVar31 | auVar56;
                  auVar39._0_14_ = auVar31._0_14_;
                  auVar39[0xe] = auVar31[7];
                  auVar39[0xf] = auVar31[7];
                  auVar38._14_2_ = auVar39._14_2_;
                  auVar38._0_13_ = auVar31._0_13_;
                  auVar38[0xd] = auVar31[6];
                  auVar37._13_3_ = auVar38._13_3_;
                  auVar37._0_12_ = auVar31._0_12_;
                  auVar37[0xc] = auVar31[6];
                  auVar36._12_4_ = auVar37._12_4_;
                  auVar36._0_11_ = auVar31._0_11_;
                  auVar36[0xb] = auVar31[5];
                  auVar35._11_5_ = auVar36._11_5_;
                  auVar35._0_10_ = auVar31._0_10_;
                  auVar35[10] = auVar31[5];
                  auVar34._10_6_ = auVar35._10_6_;
                  auVar34._0_9_ = auVar31._0_9_;
                  auVar34[9] = auVar31[4];
                  auVar33._9_7_ = auVar34._9_7_;
                  auVar33._0_8_ = auVar31._0_8_;
                  auVar33[8] = auVar31[4];
                  auVar32._8_8_ = auVar33._8_8_;
                  auVar32[7] = auVar31[3];
                  auVar32[6] = auVar31[3];
                  auVar32[5] = auVar31[2];
                  auVar32[4] = auVar31[2];
                  auVar32[3] = auVar31[1];
                  auVar32[2] = auVar31[1];
                  auVar32[0] = auVar31[0];
                  auVar32[1] = auVar32[0];
                  auVar29 = auVar29 | auVar32 ^ auVar30;
                  ppppppplVar13 = ppppppplVar13 + 1;
                } while (ppppppplVar20 != ppppppplVar13);
                auVar29 = psllw(auVar29,7);
                bVar26 = (((((((SUB161(auVar29 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
                          (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x77,0) & 1) != 0;
                if (ppppppplVar24 != ppppppplVar20) goto LAB_006aafc2;
              }
            }
            else {
              bVar26 = false;
              ppppppplVar16 = ppppppplVar28;
LAB_006aafc2:
              do {
                cVar2 = *(char *)ppppppplVar16;
                ppppppplVar16 = (longlong *******)((longlong)ppppppplVar16 + 1);
                bVar26 = (bool)(bVar26 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
              } while (ppppppplVar16 !=
                       (longlong *******)((longlong)ppppppplVar24 + (longlong)ppppppplVar28));
            }
            bVar7 = true;
            if (bVar26) break;
          }
          local_258 = (longlong *******)0x0;
          local_238 = (longlong *******)0x0;
          local_228 = (longlong *******)0x2c0000002c;
          uStack_220 = 1;
          local_218 = 1;
          ppppppplStack_250 = ppppppplVar24;
          local_248 = ppppppplVar28;
          ppppppplStack_240 = ppppppplVar24;
          ppppppplStack_230 = ppppppplVar24;
          <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<http[56314f485c23ccf6]::header::name::HeaderName,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::str::iter::Split<char>,<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers<<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_lower_case::LowercaseWriter>::{closure#1}>>>
          ::from_iter(&local_90,&local_258);
          if (local_1a8 == (longlong *******)0xffffffffffffffff) {
            local_198 = local_80;
            local_1a8 = local_90;
            ppppppplStack_1a0 = ppppppplStack_88;
          }
          else {
            ppppppplStack_240 = ppppppplStack_88 + (longlong)local_80 * 4;
            local_258 = ppppppplStack_88;
            local_248 = local_90;
            ppppppplStack_250 = ppppppplStack_88;
            <alloc[12e961f32105355]::vec::Vec<http[56314f485c23ccf6]::header::name::HeaderName>as_alloc[12e961f32105355]::vec::spec_extend::SpecExtend<http[56314f485c23ccf6]::header::name::HeaderName,alloc[12e961f32105355]::vec::into_iter::IntoIter<http[56314f485c23ccf6]::header::name::HeaderName>>>
            ::spec_extend(&local_1a8,&local_258);
          }
          goto LAB_006aa9c8;
        }
      }
    }
    break;
  case 0x45:
    if ((param_6 == 1) && (!bVar7)) goto LAB_006ab2fd;
    if ((*(char *)((longlong)local_210 + 0x6a) != '\x01') && (*(char *)local_190 != '\x05')) {
      sVar3 = *(short *)(local_210 + 0xd);
      if (*(char *)local_190 == '\a') {
        if (199 < (ushort)(sVar3 - 100U)) goto LAB_006aab94;
      }
      else if (99 < (ushort)(sVar3 - 100U)) {
LAB_006aab94:
        if ((sVar3 != 0xcc) && (sVar3 != 0x130)) {
          uVar21 = hyper[c4782d5b5c5e3493]::headers::is_chunked_(&local_1f8);
          local_208 = (longlong *******)(uVar21 ^ 1);
          if (bVar7) {
            lVar12 = param_3[2];
            uVar27 = extraout_XMM0_Qa_00;
            if ((ulonglong)(*param_3 - lVar12) < 2) {
              uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar12,2,1,1);
              lVar12 = param_3[2];
            }
            ppppppplVar28 = local_1e8;
            *(undefined2 *)(param_3[1] + lVar12) = 0x202c;
            lVar12 = param_3[2] + 2;
            param_3[2] = lVar12;
            if ((longlong *******)(*param_3 - lVar12) < local_1e8) {
              uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (param_3,lVar12,local_1e8,1,1);
LAB_006aac19:
              (*(code *)PTR_memcpy_00799008)(uVar27,ppppppplVar28);
              lVar12 = param_3[2];
            }
            else if (local_1e8 != (longlong *******)0x0) goto LAB_006aac19;
            param_3[2] = (longlong)(lVar12 + (longlong)ppppppplVar28);
            goto LAB_006aaade;
          }
          local_1c8 = (longlong *******)0xffffffffffffffff;
          uStack_1b0 = (longlong *******)((ulonglong)uStack_1b0 & 0xffffffffffffff00);
          local_248 = _DAT_0018ce70;
          ppppppplStack_240 = _UNK_0018ce78;
          local_258 = _DAT_0018ce60;
          ppppppplStack_250 = _UNK_0018ce68;
          uVar27 = <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
                   ::write_header_name(local_100,param_3,&local_258);
          lVar12 = param_3[2];
          if ((ulonglong)(*param_3 - lVar12) < 2) {
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (param_3,lVar12,2,1,1);
            lVar12 = param_3[2];
          }
          *(undefined2 *)(param_3[1] + lVar12) = 0x203a;
          lVar12 = param_3[2] + 2;
          param_3[2] = lVar12;
          if (local_258 != (longlong *******)0x0) {
            uVar27 = (*(code *)local_258[4])(uVar27,local_248);
            lVar12 = param_3[2];
          }
          ppppppplVar28 = local_1e8;
          if ((longlong *******)(*param_3 - lVar12) < local_1e8) {
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (param_3,lVar12,local_1e8,1,1);
LAB_006aae20:
            (*(code *)PTR_memcpy_00799008)(uVar27,ppppppplVar28);
            lVar12 = param_3[2];
          }
          else if (local_1e8 != (longlong *******)0x0) goto LAB_006aae20;
          param_3[2] = (longlong)(lVar12 + (longlong)ppppppplVar28);
          local_268 = (longlong *******)0xffffffffffffffff;
          goto LAB_006aaade;
        }
      }
    }
  }
  param_2 = ppppppplStack_1f0;
  ppppppplVar28 = local_1e8;
  (*(code *)local_1f8[4])();
  goto LAB_006aa2b0;
}


