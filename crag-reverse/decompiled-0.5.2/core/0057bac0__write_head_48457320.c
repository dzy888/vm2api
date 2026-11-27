// 0057bac0 write_head

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   bytes[e9829e187354639b]::bytes::Bytes,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::write_head */

void __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::write_head(undefined **param_1,ulonglong *param_2,undefined **param_3,undefined *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong *puVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  char cVar11;
  undefined1 (*pauVar12) [16];
  uint7 uVar14;
  undefined8 *puVar13;
  char cVar15;
  undefined *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined *puVar19;
  uint uVar20;
  ulonglong uVar21;
  ushort uVar22;
  undefined **ppuVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined *unaff_R12;
  undefined **ppuVar26;
  char cVar27;
  longlong lVar28;
  bool bVar29;
  undefined8 extraout_XMM0_Qa;
  undefined **extraout_XMM0_Qa_00;
  undefined8 uVar30;
  char *pcVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_158 [31];
  undefined1 local_139;
  undefined **local_138;
  undefined **ppuStack_130;
  ulonglong *puStack_128;
  undefined **ppuStack_120;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined5 uStack_115;
  undefined2 local_110;
  undefined6 uStack_10e;
  undefined2 local_108;
  char cStack_106;
  undefined4 uStack_105;
  undefined1 uStack_101;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined **local_d8;
  longlong local_d0;
  undefined **local_c8;
  undefined *local_c0;
  undefined **local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined1 local_98;
  undefined **local_88;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 local_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined **local_60;
  undefined8 local_58;
  undefined **local_50;
  char *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  if (*(char *)(param_1 + 0x49) == '\x01') {
    local_a8 = _DAT_0018d430;
    puStack_a0 = _UNK_0018d438;
    local_b8 = _s__0018d420;
    pcStack_b0 = _UNK_0018d428;
    uVar30 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_entry2::
             <http[56314f485c23ccf6]::header::name::HeaderName>(&local_138,param_2,&local_b8);
    uVar10 = uStack_101;
    uVar9 = uStack_105;
    puVar8 = puStack_128;
    ppuVar23 = local_138;
    if (cStack_106 == -1) {
LAB_0057c872:
      ppuVar23 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_0078dc00;
LAB_0057c879:
      (*(code *)PTR_unwrap_failed_00799028)(&DAT_0078dbc8,&local_139,ppuVar23);
LAB_0057c92c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_d8 = ppuStack_130;
    local_50 = ppuStack_120;
    local_58 = CONCAT53(uStack_115,CONCAT12(uStack_116,CONCAT11(uStack_117,uStack_118)));
    local_88 = (undefined **)CONCAT62(uStack_10e,local_110);
    uStack_80 = local_108;
    local_d0 = CONCAT71(local_d0._1_7_,cStack_106);
    local_c8 = param_3;
    local_c0 = param_4;
    if (cStack_106 == '\x02') {
      if (local_138[5] <= puStack_128) {
        (*(code *)PTR_panic_bounds_check_00799520)
                  (2,&PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_0078dc18
                  );
        goto LAB_0057c92c;
      }
      lVar28 = (longlong)puStack_128 * 0x68;
      bVar29 = (local_138[4][lVar28] & 1) == 0;
      if (bVar29) {
        ppuVar26 = param_1;
      }
      else {
        ppuVar26 = *(undefined ***)(local_138[4] + lVar28 + 0x10);
      }
      cVar27 = !bVar29;
      cVar15 = '\0';
      local_60 = &anon_d3057478e380898db632effa827bd31f_640_llvm_2674179329317868992;
      do {
        if (cVar15 == '\0') {
          if (ppuVar23[5] <= puVar8) goto LAB_0057c8b0;
          if (cVar27 == '\0') {
            cVar27 = '\x02';
            cVar15 = '\x02';
          }
          else {
            if (ppuVar23[4][lVar28] == '\0') {
              (*(code *)PTR_panic_00799338)
                        (uVar30,&anon_d3057478e380898db632effa827bd31f_641_llvm_2674179329317868992)
              ;
              goto LAB_0057c92c;
            }
            param_3 = *(undefined ***)(ppuVar23[4] + lVar28 + 8);
            cVar15 = '\x01';
          }
        }
        else {
          if (cVar15 == '\x02') goto LAB_0057be5a;
          if (ppuVar23[8] <= param_3) {
            local_60 = &anon_d3057478e380898db632effa827bd31f_642_llvm_2674179329317868992;
LAB_0057c8b0:
            (*(code *)PTR_panic_bounds_check_00799520)(uVar30,local_60);
            goto LAB_0057c92c;
          }
          if (((cVar27 == '\x02') || (cVar15 != cVar27)) || (param_3 != ppuVar26)) {
            cVar15 = '\x02';
            if (*(int *)(ppuVar23[7] + (longlong)param_3 * 0x48 + 0x10) == 1) {
              param_3 = *(undefined ***)(ppuVar23[7] + (longlong)param_3 * 0x48 + 0x18);
              cVar15 = '\x01';
            }
          }
          else {
            cVar27 = '\x02';
            param_3 = ppuVar26;
            cVar15 = '\x02';
          }
        }
        cVar11 = (*(code *)PTR_connection_keep_alive_00799de0)();
        uVar30 = extraout_XMM0_Qa;
      } while (cVar11 == '\0');
LAB_0057bf18:
      param_4 = local_c0;
      param_3 = local_c8;
      if ((char)local_d0 != '\x02') {
        if (local_d8 != (undefined **)0x0) {
          (*(code *)local_d8[4])(uVar30,local_50);
        }
      }
    }
    else {
LAB_0057be5a:
      param_4 = local_c0;
      param_3 = local_c8;
      if (*(char *)((longlong)param_2 + 0x6a) == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x247) = 2;
        goto LAB_0057bf18;
      }
      if ((*(char *)((longlong)param_2 + 0x6a) != '\x02') ||
         (*(char *)((longlong)param_1 + 0x247) == '\x02')) goto LAB_0057bf18;
      if ((char)local_d0 == '\x02') {
        local_138 = &PTR_static_clone_0078dac8;
        ppuStack_130 = (undefined **)0x19c918;
        puStack_128 = (ulonglong *)0xa;
        ppuStack_120 = (undefined **)0x0;
        uStack_118 = 0;
        if (ppuVar23[5] <= puVar8) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (&PTR_static_clone_0078dac8,
                     &anon_d3057478e380898db632effa827bd31f_372_llvm_2674179329317868992);
          goto LAB_0057c92c;
        }
        http[56314f485c23ccf6]::header::map::append_value::
        <http[56314f485c23ccf6]::header::value::HeaderValue>
                  (puVar8,ppuVar23[4] + (longlong)puVar8 * 0x68,ppuVar23 + 6,&local_138);
      }
      else {
        local_108 = uStack_80;
        local_110 = SUB82(local_88,0);
        uStack_10e = (undefined6)((ulonglong)local_88 >> 0x10);
        ppuStack_130 = local_d8;
        ppuStack_120 = local_50;
        uStack_118 = (undefined1)local_58;
        uStack_117 = (undefined1)((ulonglong)local_58 >> 8);
        uStack_116 = (undefined1)((ulonglong)local_58 >> 0x10);
        uStack_115 = (undefined5)((ulonglong)local_58 >> 0x18);
        cStack_106 = (char)local_d0;
        local_b8 = &PTR_static_clone_0078dac8;
        pcStack_b0 = "keep-alive";
        local_a8 = (undefined *)0xa;
        puStack_a0 = (undefined *)0x0;
        local_98 = 0;
        local_138 = ppuVar23;
        puStack_128 = puVar8;
        uStack_105 = uVar9;
        uStack_101 = uVar10;
        lVar28 = <http[56314f485c23ccf6]::header::map::VacantEntry<http[56314f485c23ccf6]::header::value::HeaderValue>>
                 ::try_insert(&local_138,&local_b8);
        param_4 = local_c0;
        param_3 = local_c8;
        if (lVar28 == 0) {
          ppuVar23 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_0078dc30
          ;
          goto LAB_0057c879;
        }
      }
    }
    *(undefined1 *)((longlong)param_2 + 0x6a) = 1;
  }
  else if ((*(char *)(param_1 + 0x49) == '\x02') && (*(char *)((longlong)param_1 + 0x247) == '\x02')
          ) {
    local_a8 = _DAT_0018d430;
    puStack_a0 = _UNK_0018d438;
    local_b8 = _s__0018d420;
    pcStack_b0 = _UNK_0018d428;
    <http[56314f485c23ccf6]::header::map::HeaderMap>::try_entry2::
    <http[56314f485c23ccf6]::header::name::HeaderName>(&local_138,param_2,&local_b8);
    puVar8 = puStack_128;
    ppuVar23 = local_138;
    puVar16 = PTR_connection_close_00799de8;
    if (cStack_106 == -1) goto LAB_0057c872;
    uStack_80 = CONCAT11(uStack_117,uStack_118);
    local_88 = ppuStack_120;
    uStack_7e = CONCAT51(uStack_115,uStack_116);
    local_78 = local_110;
    uStack_76 = uStack_10e;
    uStack_70 = local_108;
    if (cStack_106 == '\x02') {
      if (local_138[5] <= puStack_128) {
        local_c8 = param_3;
        local_c0 = param_4;
        (*(code *)PTR_panic_bounds_check_00799520)
                  (uStack_101,
                   &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_0078dc18);
        goto LAB_0057c92c;
      }
      local_d0 = (longlong)puStack_128 * 0x68;
      bVar29 = (local_138[4][local_d0] & 1) == 0;
      if (!bVar29) {
        unaff_R12 = *(undefined **)(local_138[4] + local_d0 + 0x10);
      }
      cVar27 = !bVar29;
      cVar15 = '\0';
      local_d8 = &anon_d3057478e380898db632effa827bd31f_640_llvm_2674179329317868992;
      ppuVar26 = ppuStack_130;
      local_c8 = param_3;
      local_c0 = param_4;
      do {
        if (cVar15 == '\0') {
          if (ppuVar23[5] <= puVar8) {
LAB_0057c8d9:
            (*(code *)PTR_panic_bounds_check_00799520)(ppuVar26,local_d8);
            goto LAB_0057c92c;
          }
          if (cVar27 == '\0') {
            cVar27 = '\x02';
            cVar15 = '\x02';
          }
          else {
            if (ppuVar23[4][local_d0] == '\0') {
              (*(code *)PTR_panic_00799338)
                        (ppuVar26,&
                                  anon_d3057478e380898db632effa827bd31f_641_llvm_2674179329317868992
                        );
              goto LAB_0057c92c;
            }
            param_4 = *(undefined **)(ppuVar23[4] + local_d0 + 8);
            cVar15 = '\x01';
          }
        }
        else {
          if (cVar15 == '\x02') {
            local_138 = &PTR_static_clone_0078dac8;
            ppuStack_130 = (undefined **)0x19c93b;
            puStack_128 = (ulonglong *)0x5;
            ppuStack_120 = (undefined **)0x0;
            uStack_118 = 0;
            if (ppuVar23[5] <= puVar8) {
              (*(code *)PTR_panic_bounds_check_00799520)
                        (ppuVar26,&
                                  anon_d3057478e380898db632effa827bd31f_372_llvm_2674179329317868992
                        );
              goto LAB_0057c92c;
            }
            http[56314f485c23ccf6]::header::map::append_value::
            <http[56314f485c23ccf6]::header::value::HeaderValue>
                      (puVar8,ppuVar23[4] + local_d0,ppuVar23 + 6,&local_138);
            break;
          }
          if (ppuVar23[8] <= param_4) {
            local_d8 = &anon_d3057478e380898db632effa827bd31f_642_llvm_2674179329317868992;
            goto LAB_0057c8d9;
          }
          if (((cVar27 == '\x02') || (cVar15 != cVar27)) || (param_4 != unaff_R12)) {
            cVar15 = '\x02';
            if (*(int *)(ppuVar23[7] + (longlong)param_4 * 0x48 + 0x10) == 1) {
              param_4 = *(undefined **)(ppuVar23[7] + (longlong)param_4 * 0x48 + 0x18);
              cVar15 = '\x01';
            }
          }
          else {
            cVar27 = '\x02';
            param_4 = unaff_R12;
            cVar15 = '\x02';
          }
        }
        cVar11 = (*(code *)puVar16)();
        ppuVar26 = extraout_XMM0_Qa_00;
      } while (cVar11 == '\0');
    }
    else {
      local_b8 = &PTR_static_clone_0078dac8;
      pcStack_b0 = "close";
      local_a8 = (undefined *)0x5;
      puStack_a0 = (undefined *)0x0;
      local_98 = 0;
      local_c8 = param_3;
      local_c0 = param_4;
      lVar28 = <http[56314f485c23ccf6]::header::map::VacantEntry<http[56314f485c23ccf6]::header::value::HeaderValue>>
               ::try_insert(&local_138,&local_b8);
      if (lVar28 == 0) {
        ppuVar23 = &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_0078dc30;
        goto LAB_0057c879;
      }
    }
    param_4 = local_c0;
    param_3 = local_c8;
  }
  uStack_118 = *(char *)((longlong)param_1 + 0x247) != '\x02';
  ppuStack_120 = param_1 + 0x3d;
  uStack_116 = *(undefined1 *)((longlong)param_1 + 0x241);
  uStack_117 = *(undefined1 *)((longlong)param_1 + 0x243);
  local_138 = param_3;
  ppuStack_130 = (undefined **)param_4;
  puStack_128 = param_2;
  (*(code *)PTR_encode_00799df0)(uStack_116,param_1 + 6);
  if (local_88 == (undefined **)0xfffffffffffffffe) {
    puVar16 = (undefined *)CONCAT62(uStack_7e,uStack_80);
    uVar30 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
             <core[c0acaeba6ab4c2e0]::option::Option<hyper[c4782d5b5c5e3493]::error::Error>>
                       (param_1[0x40]);
    param_1[0x40] = puVar16;
    puVar16 = param_1[0x37];
    puVar19 = puVar16;
    if ((((undefined *)0x3 < puVar16 + 0x7ffffffffffffffe ||
          puVar16 + 0x7ffffffffffffffe == (undefined *)0x1) &&
        (-0x7fffffffffffffff < (longlong)puVar16)) && (puVar16 != (undefined *)0xffffffffffffffff))
    {
      if (param_1[0x39] != (undefined *)0x0) {
        puVar16 = param_1[0x38] + 0x38;
        lVar28 = 1 - (longlong)param_1[0x39];
        do {
          if (*(longlong *)(puVar16 + -0x38) != 0) {
            uVar30 = (**(code **)(*(longlong *)(puVar16 + -0x38) + 0x20))
                               (uVar30,*(undefined8 *)(puVar16 + -0x28));
          }
          puVar16 = puVar16 + 0x20;
          lVar28 = lVar28 + 1;
        } while (lVar28 != 1);
        puVar16 = param_1[0x37];
      }
      puVar19 = (undefined *)0x0;
      if (puVar16 != (undefined *)0x0) {
        puVar19 = (undefined *)((longlong)puVar16 << 5);
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
      }
    }
    param_1[0x37] = (undefined *)0x8000000000000005;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
              (param_2,puVar19);
    ppuVar23 = (undefined **)0xfffffffffffffffe;
    goto LAB_0057c527;
  }
  pcStack_b0 = (char *)CONCAT62(uStack_7e,uStack_80);
  local_a8 = (undefined *)CONCAT62(uStack_76,local_78);
  puStack_a0 = (undefined *)CONCAT62(uStack_6e,uStack_70);
  local_b8 = local_88;
  local_e8 = (undefined *)param_2[10];
  puStack_e0 = (undefined *)param_2[0xb];
  local_f8 = (undefined *)param_2[8];
  puStack_f0 = (undefined *)param_2[9];
  local_138 = (undefined **)*param_2;
  ppuStack_130 = (undefined **)param_2[1];
  puStack_128 = (ulonglong *)param_2[2];
  ppuStack_120 = (undefined **)param_2[3];
  uVar18 = param_2[4];
  uVar21 = param_2[6];
  puStack_100 = (undefined *)param_2[7];
  local_108 = (undefined2)uVar21;
  cStack_106 = (char)(uVar21 >> 0x10);
  uStack_105 = (undefined4)(uVar21 >> 0x18);
  uStack_101 = (undefined1)(uVar21 >> 0x38);
  uStack_118 = (undefined1)uVar18;
  uStack_117 = (undefined1)(uVar18 >> 8);
  uStack_116 = (undefined1)(uVar18 >> 0x10);
  uStack_115 = (undefined5)(uVar18 >> 0x18);
  local_110 = (undefined2)param_2[5];
  uStack_10e = (undefined6)(param_2[5] >> 0x10);
  if (*(int *)(param_1 + 0x1e) != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
              (param_1 + 0x1e);
  }
  param_1[0x28] = local_e8;
  param_1[0x29] = puStack_e0;
  param_1[0x26] = local_f8;
  param_1[0x27] = puStack_f0;
  param_1[0x24] =
       (undefined *)CONCAT17(uStack_101,CONCAT43(uStack_105,CONCAT12(cStack_106,local_108)));
  param_1[0x25] = puStack_100;
  param_1[0x22] =
       (undefined *)CONCAT53(uStack_115,CONCAT12(uStack_116,CONCAT11(uStack_117,uStack_118)));
  param_1[0x23] = (undefined *)CONCAT62(uStack_10e,local_110);
  param_1[0x20] = (undefined *)puStack_128;
  param_1[0x21] = (undefined *)ppuStack_120;
  param_1[0x1e] = (undefined *)local_138;
  param_1[0x1f] = (undefined *)ppuStack_130;
  plVar1 = (longlong *)param_2[0xc];
  if (plVar1 != (longlong *)0x0) {
    local_158._0_16_ = (undefined1  [16])0x0;
    lVar28 = *plVar1;
    uVar18 = plVar1[1];
    lVar17 = 0;
    uVar21 = 0x3d10c2c0553a0e66;
    do {
      uVar21 = uVar21 & uVar18;
      auVar32 = *(undefined1 (*) [16])(lVar28 + uVar21);
      auVar35[0] = -(auVar32[0] == DAT_001832a0);
      auVar35[1] = -(auVar32[1] == UNK_001832a1);
      auVar35[2] = -(auVar32[2] == UNK_001832a2);
      auVar35[3] = -(auVar32[3] == UNK_001832a3);
      auVar35[4] = -(auVar32[4] == UNK_001832a4);
      auVar35[5] = -(auVar32[5] == UNK_001832a5);
      auVar35[6] = -(auVar32[6] == UNK_001832a6);
      auVar35[7] = -(auVar32[7] == UNK_001832a7);
      auVar35[8] = -(auVar32[8] == UNK_001832a8);
      auVar35[9] = -(auVar32[9] == UNK_001832a9);
      auVar35[10] = -(auVar32[10] == UNK_001832aa);
      auVar35[0xb] = -(auVar32[0xb] == UNK_001832ab);
      auVar35[0xc] = -(auVar32[0xc] == UNK_001832ac);
      auVar35[0xd] = -(auVar32[0xd] == UNK_001832ad);
      auVar35[0xe] = -(auVar32[0xe] == UNK_001832ae);
      auVar35[0xf] = -(auVar32[0xf] == UNK_001832af);
      uVar22 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar22;
      if (uVar22 != 0) {
LAB_0057c322:
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar24 = uVar5 + uVar21 & uVar18;
        lVar25 = lVar28 + uVar24 * -0x20;
        if (*(longlong *)(lVar25 + -0x20) != -0x2942de04cef18f01 ||
            *(longlong *)(lVar25 + -0x18) != 0x3d10c2c0553a0e66) goto code_r0x0057c34d;
        uVar18 = uVar24 - 0x10 & uVar18;
        pcVar31 = (char *)(lVar28 + uVar18);
        auVar32[0] = -(*pcVar31 == -1);
        auVar32[1] = -(pcVar31[1] == -1);
        auVar32[2] = -(pcVar31[2] == -1);
        auVar32[3] = -(pcVar31[3] == -1);
        auVar32[4] = -(pcVar31[4] == -1);
        auVar32[5] = -(pcVar31[5] == -1);
        auVar32[6] = -(pcVar31[6] == -1);
        auVar32[7] = -(pcVar31[7] == -1);
        auVar32[8] = -(pcVar31[8] == -1);
        auVar32[9] = -(pcVar31[9] == -1);
        auVar32[10] = -(pcVar31[10] == -1);
        auVar32[0xb] = -(pcVar31[0xb] == -1);
        auVar32[0xc] = -(pcVar31[0xc] == -1);
        auVar32[0xd] = -(pcVar31[0xd] == -1);
        auVar32[0xe] = -(pcVar31[0xe] == -1);
        auVar32[0xf] = -(pcVar31[0xf] == -1);
        uVar3 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
        pcVar31 = (char *)(lVar28 + uVar24);
        auVar33[0] = -(*pcVar31 == -1);
        auVar33[1] = -(pcVar31[1] == -1);
        auVar33[2] = -(pcVar31[2] == -1);
        auVar33[3] = -(pcVar31[3] == -1);
        auVar33[4] = -(pcVar31[4] == -1);
        auVar33[5] = -(pcVar31[5] == -1);
        auVar33[6] = -(pcVar31[6] == -1);
        auVar33[7] = -(pcVar31[7] == -1);
        auVar33[8] = -(pcVar31[8] == -1);
        auVar33[9] = -(pcVar31[9] == -1);
        auVar33[10] = -(pcVar31[10] == -1);
        auVar33[0xb] = -(pcVar31[0xb] == -1);
        auVar33[0xc] = -(pcVar31[0xc] == -1);
        auVar33[0xd] = -(pcVar31[0xd] == -1);
        auVar33[0xe] = -(pcVar31[0xe] == -1);
        auVar33[0xf] = -(pcVar31[0xf] == -1);
        uVar22 = 0xf;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar22 == 0; uVar22 = uVar22 - 1) {
          }
        }
        sVar4 = 0;
        for (uVar20 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar33[0xf] >> 7) << 0xf) | 0x10000; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x80000000) {
          sVar4 = sVar4 + 1;
        }
        uVar14 = (uint7)(byte)(uVar3 >> 8);
        puVar13 = (undefined8 *)CONCAT71(uVar14,0x80);
        if ((ushort)(sVar4 + (uVar22 ^ 0xf)) < 0x10) {
          plVar1[2] = plVar1[2] + 1;
          puVar13 = (undefined8 *)CONCAT71(uVar14,0xff);
        }
        *(char *)(lVar28 + uVar24) = (char)puVar13;
        *(char *)(lVar28 + 0x10 + uVar18) = (char)puVar13;
        plVar1[3] = plVar1[3] + -1;
        if (*(longlong *)(lVar25 + -0x10) == 0) goto LAB_0057c477;
        pauVar12 = (undefined1 (*) [16])(**(code **)(*(longlong *)(lVar25 + -8) + 0x38))();
        uVar30 = (*(code *)puVar13[3])();
        pauVar7 = pauVar12;
        if (ppuStack_130 != (undefined **)0x3d10c2c0553a0e66 ||
            local_138 != (undefined **)0xd6bd21fb310e70ff) {
          if ((code *)*puVar13 != (code *)0x0) {
            uVar30 = (*(code *)*puVar13)();
          }
          pauVar7 = (undefined1 (*) [16])0x0;
          if (puVar13[1] != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,puVar13[2]);
          }
        }
        if (pauVar7 == (undefined1 (*) [16])0x0) goto LAB_0057c477;
        local_158._0_16_ = *pauVar12;
        (*(code *)PTR___rust_dealloc_00798fc8)();
        plVar1 = (longlong *)param_1[0x45];
        goto joined_r0x0057c46c;
      }
LAB_0057c35a:
      auVar34[0] = -(auVar32[0] == -1);
      auVar34[1] = -(auVar32[1] == -1);
      auVar34[2] = -(auVar32[2] == -1);
      auVar34[3] = -(auVar32[3] == -1);
      auVar34[4] = -(auVar32[4] == -1);
      auVar34[5] = -(auVar32[5] == -1);
      auVar34[6] = -(auVar32[6] == -1);
      auVar34[7] = -(auVar32[7] == -1);
      auVar34[8] = -(auVar32[8] == -1);
      auVar34[9] = -(auVar32[9] == -1);
      auVar34[10] = -(auVar32[10] == -1);
      auVar34[0xb] = -(auVar32[0xb] == -1);
      auVar34[0xc] = -(auVar32[0xc] == -1);
      auVar34[0xd] = -(auVar32[0xd] == -1);
      auVar34[0xe] = -(auVar32[0xe] == -1);
      auVar34[0xf] = -(auVar32[0xf] == -1);
      if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar34 >> 0x6f,0) & 1) != 0) || (SUB161(auVar34 >> 0x77,0) & 1) != 0) ||
          auVar34[0xf] < '\0') goto LAB_0057c477;
      uVar21 = uVar21 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    } while( true );
  }
  local_158._0_16_ = (undefined1  [16])0x0;
  plVar1 = (longlong *)param_1[0x45];
  goto joined_r0x0057c46c;
code_r0x0057c34d:
  uVar22 = (ushort)(uVar20 - 1) & (ushort)uVar20;
  uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar22);
  if (uVar22 == 0) goto LAB_0057c35a;
  goto LAB_0057c322;
LAB_0057c477:
  plVar1 = (longlong *)param_1[0x45];
joined_r0x0057c46c:
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<dyn_hyper[c4782d5b5c5e3493]::ext::informational::OnInformationalCallback+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>>
      ::drop_slow(param_1 + 0x45);
    }
  }
  param_1[0x45] = (undefined *)local_158._0_8_;
  param_1[0x46] = (undefined *)local_158._8_8_;
  local_48 = pcStack_b0;
  puStack_40 = local_a8;
  local_38 = puStack_a0;
  ppuVar23 = local_b8;
LAB_0057c527:
  if (param_2[0xc] != 0) {
    uVar30 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(param_2[0xc]);
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
  }
  if (ppuVar23 != (undefined **)0xfffffffffffffffe) {
    ppuStack_130 = (undefined **)local_48;
    puStack_128 = (ulonglong *)puStack_40;
    ppuStack_120 = (undefined **)local_38;
    if ((ppuVar23 == (undefined **)0x8000000000000000) && (local_48 == (char *)0x0)) {
      uVar18 = (ulonglong)local_38 & 0xff;
      puVar16 = param_1[0x37];
      if (((undefined *)0x3 < puVar16 + 0x7ffffffffffffffe ||
           puVar16 + 0x7ffffffffffffffe == (undefined *)0x1) &&
         ((-0x7fffffffffffffff < (longlong)puVar16 && (puVar16 != (undefined *)0xffffffffffffffff)))
         ) {
        local_138 = (undefined **)0x8000000000000000;
        uVar30 = 0;
        if (param_1[0x39] != (undefined *)0x0) {
          puVar16 = param_1[0x38] + 0x38;
          lVar28 = 1 - (longlong)param_1[0x39];
          do {
            if (*(longlong *)(puVar16 + -0x38) != 0) {
              uVar30 = (**(code **)(*(longlong *)(puVar16 + -0x38) + 0x20))
                                 (uVar30,*(undefined8 *)(puVar16 + -0x28));
            }
            puVar16 = puVar16 + 0x20;
            lVar28 = lVar28 + 1;
          } while (lVar28 != 1);
          puVar16 = param_1[0x37];
        }
        if (puVar16 != (undefined *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
        }
      }
      param_1[0x37] = (undefined *)(uVar18 + 0x8000000000000004);
    }
    else {
      puVar16 = param_1[0x37];
      if ((((undefined *)0x3 < puVar16 + 0x7ffffffffffffffe ||
            puVar16 + 0x7ffffffffffffffe == (undefined *)0x1) &&
          (-0x7fffffffffffffff < (longlong)puVar16)) && (puVar16 != (undefined *)0xffffffffffffffff)
         ) {
        pcVar31 = local_48;
        local_138 = ppuVar23;
        if (param_1[0x39] != (undefined *)0x0) {
          puVar16 = param_1[0x38] + 0x38;
          lVar28 = 1 - (longlong)param_1[0x39];
          do {
            if (*(longlong *)(puVar16 + -0x38) != 0) {
              pcVar31 = (char *)(**(code **)(*(longlong *)(puVar16 + -0x38) + 0x20))
                                          (pcVar31,*(undefined8 *)(puVar16 + -0x28));
            }
            puVar16 = puVar16 + 0x20;
            lVar28 = lVar28 + 1;
          } while (lVar28 != 1);
          puVar16 = param_1[0x37];
        }
        if (puVar16 != (undefined *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(pcVar31,8);
        }
      }
      param_1[0x37] = (undefined *)ppuVar23;
      param_1[0x38] = local_48;
      param_1[0x39] = puStack_40;
      param_1[0x3a] = local_38;
    }
  }
  return;
}


