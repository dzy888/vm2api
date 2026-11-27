// 004a4200 main

/* craggemini_core[66f3c71560d70857]::main */

ulonglong __rustcall craggemini_core[66f3c71560d70857]::main(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar7;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_6778;
  undefined *local_6770;
  undefined8 uStack_6768;
  undefined8 local_6760;
  undefined8 uStack_6758;
  undefined4 local_6750;
  undefined4 uStack_674c;
  undefined4 uStack_6748;
  undefined4 uStack_6744;
  undefined4 local_6740;
  undefined4 uStack_673c;
  undefined4 uStack_6738;
  undefined4 uStack_6734;
  undefined8 local_6730;
  undefined8 uStack_6728;
  longlong local_6720;
  longlong local_6718;
  longlong local_6710;
  undefined1 *local_6708;
  undefined *local_6700;
  undefined *local_66f8;
  undefined8 uStack_66f0;
  undefined8 local_66e8;
  undefined8 uStack_66e0;
  undefined4 local_66d8;
  undefined4 uStack_66d4;
  undefined4 uStack_66d0;
  undefined4 uStack_66cc;
  undefined4 local_66c8;
  undefined4 uStack_66c4;
  undefined4 uStack_66c0;
  undefined4 uStack_66bc;
  undefined8 local_66b8;
  undefined8 uStack_66b0;
  undefined **local_66a8;
  code *local_66a0;
  undefined8 local_6688;
  undefined2 local_65b3;
  undefined8 local_63d8;
  undefined8 uStack_63d0;
  undefined8 local_6028;
  undefined8 local_5028;
  undefined8 local_4028;
  undefined8 local_3028;
  undefined8 local_2028;
  undefined8 local_1028;
  undefined1 local_2c;
  
  local_1028 = 0;
  local_2028 = 0;
  local_3028 = 0;
  local_4028 = 0;
  local_5028 = 0;
  local_6028 = 0;
  (*(code *)PTR_args_os_00799b40)();
  local_6688 = 1;
  <alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::ffi::os_str::OsString>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::iter::adapters::skip::Skip<std[6c98fd8553dbae28]::env::ArgsOs>>>
  ::from_iter(&local_6720,&local_66a8);
  uVar4 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (local_6710 == 0) {
LAB_004a4673:
    local_66a8 = &PTR_s_Usage__craggemini___gateway_work_0078b488;
    local_66a0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    uVar7 = (*(code *)PTR__eprint_00799160)();
    uVar3 = CONCAT71(uVar4,1);
    if (local_6710 == 0) goto LAB_004a4721;
  }
  else {
    lVar5 = *(longlong *)(local_6718 + 0x10);
    if (lVar5 != 0x1a) {
LAB_004a42e1:
      if (local_6710 == 1) {
        if (lVar5 == 9) {
          if ((char)(*(longlong **)(local_6718 + 8))[1] != 'n' ||
              **(longlong **)(local_6718 + 8) != 0x6f69737265762d2d) goto LAB_004a4673;
          uVar7 = (*(code *)PTR__print_00799b38)();
        }
        else {
          if ((lVar5 != 6) ||
             ((short)(*(int **)(local_6718 + 8))[1] != 0x706c ||
              **(int **)(local_6718 + 8) != 0x65682d2d)) goto LAB_004a4673;
          local_66a8 = &PTR_s_Usage__craggemini___gateway_work_0078b488;
          local_66a0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
          uVar7 = (*(code *)PTR__print_00799b38)();
        }
LAB_004a46f1:
        puVar2 = PTR___rust_dealloc_00798fc8;
        lVar5 = local_6718 + 8;
        lVar6 = local_6710;
        do {
          if (*(longlong *)(lVar5 + -8) != 0) {
            uVar7 = (*(code *)puVar2)(uVar7,1);
          }
          lVar5 = lVar5 + 0x18;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        uVar3 = 0;
        goto LAB_004a4721;
      }
      if (local_6710 == 3) {
        if (lVar5 == 0xe) {
          if (((*(longlong *)((longlong)*(longlong **)(local_6718 + 8) + 6) == 0x70636d2d6c616e72 &&
                **(longlong **)(local_6718 + 8) == 0x6e7265746e692d2d) &&
              (*(longlong *)(local_6718 + 0x28) == 8)) &&
             (**(longlong **)(local_6718 + 0x20) == 0x6769666e6f632d2d)) {
            puVar2 = (undefined *)
                     mcp_stdio::run_internal_mcp_stdio
                               (*(undefined8 *)(local_6718 + 0x38),
                                *(undefined8 *)(local_6718 + 0x40));
            uVar7 = extraout_XMM0_Qa_01;
            if (puVar2 == (undefined *)0x0) goto LAB_004a46f1;
            local_66a8 = &local_6770;
            local_66a0 = (code *)PTR_fmt_007991d0;
            local_6770 = puVar2;
            (*(code *)PTR__eprint_00799160)();
            uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <core[c0acaeba6ab4c2e0]::io::error::Error>(&local_6770,&local_66a8);
LAB_004a45a5:
            uVar3 = CONCAT71(uVar4,1);
            goto LAB_004a46b3;
          }
        }
        else if (lVar5 == 0x10) {
          pcVar1 = *(char **)(local_6718 + 8);
          auVar10[0] = -(*pcVar1 == s___gateway_worker_00184540[0]);
          auVar10[1] = -(pcVar1[1] == s___gateway_worker_00184540[1]);
          auVar10[2] = -(pcVar1[2] == s___gateway_worker_00184540[2]);
          auVar10[3] = -(pcVar1[3] == s___gateway_worker_00184540[3]);
          auVar10[4] = -(pcVar1[4] == s___gateway_worker_00184540[4]);
          auVar10[5] = -(pcVar1[5] == s___gateway_worker_00184540[5]);
          auVar10[6] = -(pcVar1[6] == s___gateway_worker_00184540[6]);
          auVar10[7] = -(pcVar1[7] == s___gateway_worker_00184540[7]);
          auVar10[8] = -(pcVar1[8] == s___gateway_worker_00184540[8]);
          auVar10[9] = -(pcVar1[9] == s___gateway_worker_00184540[9]);
          auVar10[10] = -(pcVar1[10] == s___gateway_worker_00184540[10]);
          auVar10[0xb] = -(pcVar1[0xb] == s___gateway_worker_00184540[0xb]);
          auVar10[0xc] = -(pcVar1[0xc] == s___gateway_worker_00184540[0xc]);
          auVar10[0xd] = -(pcVar1[0xd] == s___gateway_worker_00184540[0xd]);
          auVar10[0xe] = -(pcVar1[0xe] == s___gateway_worker_00184540[0xe]);
          auVar10[0xf] = -(pcVar1[0xf] == s___gateway_worker_00184540[0xf]);
          if ((((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar10[0xf] >> 7) << 0xf) == 0xffff) &&
              (*(longlong *)(local_6718 + 0x28) == 8)) &&
             (**(longlong **)(local_6718 + 0x20) == 0x6769666e6f632d2d)) {
            (*(code *)PTR_new_multi_thread_00799b48)();
            local_65b3 = 0x101;
            (*(code *)PTR_build_00799b50)();
            if ((int)local_6770 == 2) {
              local_6778 = uStack_6768;
              local_6700 = PTR_fmt_007991d0;
              local_6708 = (undefined1 *)&local_6778;
              (*(code *)PTR__eprint_00799160)();
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                        (&local_6778,&local_6708);
              uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <tokio[d7d91d38da47d894]::runtime::builder::Builder>(&local_66a8);
            }
            else {
              local_66b8 = local_6730;
              uStack_66b0 = uStack_6728;
              local_66c8 = local_6740;
              uStack_66c4 = uStack_673c;
              uStack_66c0 = uStack_6738;
              uStack_66bc = uStack_6734;
              local_66d8 = local_6750;
              uStack_66d4 = uStack_674c;
              uStack_66d0 = uStack_6748;
              uStack_66cc = uStack_6744;
              local_66e8 = local_6760;
              uStack_66e0 = uStack_6758;
              local_66f8 = local_6770;
              uStack_66f0 = uStack_6768;
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <tokio[d7d91d38da47d894]::runtime::builder::Builder>(&local_66a8,&local_66a8);
              local_63d8 = *(undefined8 *)(local_6718 + 0x38);
              uStack_63d0 = *(undefined8 *)(local_6718 + 0x40);
              local_2c = 0;
              puVar2 = (undefined *)
                       <tokio[d7d91d38da47d894]::runtime::runtime::Runtime>::block_on::
                       <craggemini_core[66f3c71560d70857]::run::_closure_0_>
                                 (&local_66f8,&local_66a8,
                                  &
                                  PTR_anon_125f69fd11b353bcd1ecfc92c9aa10c4_114_llvm_16783778792561144368_0078b498
                                 );
              if (puVar2 == (undefined *)0x0) {
                uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <tokio[d7d91d38da47d894]::runtime::runtime::Runtime>(&local_66f8);
                goto LAB_004a46f1;
              }
              local_66a0 = (code *)PTR_fmt_007991d0;
              local_6770 = puVar2;
              local_66a8 = &local_6770;
              (*(code *)PTR__eprint_00799160)();
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                        (&local_6770,&local_66a8);
              uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <tokio[d7d91d38da47d894]::runtime::runtime::Runtime>(&local_66f8);
            }
            goto LAB_004a45a5;
          }
        }
      }
      else if ((local_6710 == 5) && (lVar5 == 0x12)) {
        pcVar1 = *(char **)(local_6718 + 8);
        auVar9[0] = -(*pcVar1 == DAT_00184150);
        auVar9[1] = -(pcVar1[1] == UNK_00184151);
        auVar9[2] = -(pcVar1[2] == UNK_00184152);
        auVar9[3] = -(pcVar1[3] == UNK_00184153);
        auVar9[4] = -(pcVar1[4] == UNK_00184154);
        auVar9[5] = -(pcVar1[5] == UNK_00184155);
        auVar9[6] = -(pcVar1[6] == UNK_00184156);
        auVar9[7] = -(pcVar1[7] == UNK_00184157);
        auVar9[8] = -(pcVar1[8] == UNK_00184158);
        auVar9[9] = -(pcVar1[9] == UNK_00184159);
        auVar9[10] = -(pcVar1[10] == UNK_0018415a);
        auVar9[0xb] = -(pcVar1[0xb] == UNK_0018415b);
        auVar9[0xc] = -(pcVar1[0xc] == UNK_0018415c);
        auVar9[0xd] = -(pcVar1[0xd] == UNK_0018415d);
        auVar9[0xe] = -(pcVar1[0xe] == UNK_0018415e);
        auVar9[0xf] = -(pcVar1[0xf] == UNK_0018415f);
        auVar12[0] = -((char)*(undefined2 *)(pcVar1 + 0x10) == s_ig_00184550[0]);
        auVar12[1] = -((char)((ushort)*(undefined2 *)(pcVar1 + 0x10) >> 8) == s_ig_00184550[1]);
        auVar12[2] = -(s_ig_00184550[2] == '\0');
        auVar12[3] = -(s_ig_00184550[3] == '\0');
        auVar12[4] = -(UNK_00184554 == '\0');
        auVar12[5] = -(UNK_00184555 == '\0');
        auVar12[6] = -(UNK_00184556 == '\0');
        auVar12[7] = -(UNK_00184557 == '\0');
        auVar12[8] = -(UNK_00184558 == '\0');
        auVar12[9] = -(UNK_00184559 == '\0');
        auVar12[10] = -(UNK_0018455a == '\0');
        auVar12[0xb] = -(UNK_0018455b == '\0');
        auVar12[0xc] = -(UNK_0018455c == '\0');
        auVar12[0xd] = -(UNK_0018455d == '\0');
        auVar12[0xe] = -(UNK_0018455e == '\0');
        auVar12[0xf] = -(UNK_0018455f == '\0');
        auVar12 = auVar12 & auVar9;
        if ((((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) &&
            (((*(longlong *)(local_6718 + 0x28) == 8 &&
              (**(longlong **)(local_6718 + 0x20) == 0x6769666e6f632d2d)) &&
             (*(longlong *)(local_6718 + 0x58) == 5)))) &&
           ((char)(*(int **)(local_6718 + 0x50))[1] == 't' &&
            **(int **)(local_6718 + 0x50) == 0x756f2d2d)) {
          puVar2 = (undefined *)
                   write_mcp_config(*(undefined8 *)(local_6718 + 0x38),
                                    *(undefined8 *)(local_6718 + 0x40),
                                    *(undefined8 *)(local_6718 + 0x68),
                                    *(undefined8 *)(local_6718 + 0x70));
          uVar7 = extraout_XMM0_Qa;
          if (puVar2 == (undefined *)0x0) goto LAB_004a46f1;
          local_66a8 = &local_6770;
          local_66a0 = (code *)PTR_fmt_007991d0;
          local_6770 = puVar2;
          (*(code *)PTR__eprint_00799160)();
          uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                            (&local_6770,&local_66a8);
          goto LAB_004a45a5;
        }
      }
      goto LAB_004a4673;
    }
    pcVar1 = *(char **)(local_6718 + 8);
    auVar11[0] = -(pcVar1[10] == s__execution_guard_00182840[0]);
    auVar11[1] = -(pcVar1[0xb] == s__execution_guard_00182840[1]);
    auVar11[2] = -(pcVar1[0xc] == s__execution_guard_00182840[2]);
    auVar11[3] = -(pcVar1[0xd] == s__execution_guard_00182840[3]);
    auVar11[4] = -(pcVar1[0xe] == s__execution_guard_00182840[4]);
    auVar11[5] = -(pcVar1[0xf] == s__execution_guard_00182840[5]);
    auVar11[6] = -(pcVar1[0x10] == s__execution_guard_00182840[6]);
    auVar11[7] = -(pcVar1[0x11] == s__execution_guard_00182840[7]);
    auVar11[8] = -(pcVar1[0x12] == s__execution_guard_00182840[8]);
    auVar11[9] = -(pcVar1[0x13] == s__execution_guard_00182840[9]);
    auVar11[10] = -(pcVar1[0x14] == s__execution_guard_00182840[10]);
    auVar11[0xb] = -(pcVar1[0x15] == s__execution_guard_00182840[0xb]);
    auVar11[0xc] = -(pcVar1[0x16] == s__execution_guard_00182840[0xc]);
    auVar11[0xd] = -(pcVar1[0x17] == s__execution_guard_00182840[0xd]);
    auVar11[0xe] = -(pcVar1[0x18] == s__execution_guard_00182840[0xe]);
    auVar11[0xf] = -(pcVar1[0x19] == s__execution_guard_00182840[0xf]);
    auVar8[0] = -(*pcVar1 == DAT_00182f80);
    auVar8[1] = -(pcVar1[1] == UNK_00182f81);
    auVar8[2] = -(pcVar1[2] == UNK_00182f82);
    auVar8[3] = -(pcVar1[3] == UNK_00182f83);
    auVar8[4] = -(pcVar1[4] == UNK_00182f84);
    auVar8[5] = -(pcVar1[5] == UNK_00182f85);
    auVar8[6] = -(pcVar1[6] == UNK_00182f86);
    auVar8[7] = -(pcVar1[7] == UNK_00182f87);
    auVar8[8] = -(pcVar1[8] == UNK_00182f88);
    auVar8[9] = -(pcVar1[9] == UNK_00182f89);
    auVar8[10] = -(pcVar1[10] == UNK_00182f8a);
    auVar8[0xb] = -(pcVar1[0xb] == UNK_00182f8b);
    auVar8[0xc] = -(pcVar1[0xc] == UNK_00182f8c);
    auVar8[0xd] = -(pcVar1[0xd] == UNK_00182f8d);
    auVar8[0xe] = -(pcVar1[0xe] == UNK_00182f8e);
    auVar8[0xf] = -(pcVar1[0xf] == UNK_00182f8f);
    auVar8 = auVar8 & auVar11;
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) != 0xffff) goto LAB_004a42e1;
    puVar2 = (undefined *)guard_exec::run_execution_guard(local_6718 + 0x18,local_6710 + -1);
    if (puVar2 != (undefined *)0x0) {
      local_66a8 = &local_6770;
      local_66a0 = (code *)PTR_fmt_007991d0;
      local_6770 = puVar2;
      uVar7 = (*(code *)PTR__eprint_00799160)();
      if ((1 < ((uint)local_6770 & 3) - 2) && (((ulonglong)local_6770 & 3) != 0)) {
        local_66a0 = (code *)(local_6770 + -1);
        local_66a8 = (undefined **)CONCAT71(local_66a8._1_7_,3);
        uVar7 = (*(code *)PTR_drop_00799040)();
      }
      goto LAB_004a45a5;
    }
    uVar3 = 0;
    uVar7 = extraout_XMM0_Qa_00;
  }
LAB_004a46b3:
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar5 = local_6718 + 8;
  lVar6 = local_6710;
  do {
    if (*(longlong *)(lVar5 + -8) != 0) {
      uVar7 = (*(code *)puVar2)(uVar7,1);
    }
    lVar5 = lVar5 + 0x18;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
LAB_004a4721:
  if (local_6720 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,8);
  }
  return uVar3 & 0xffffffff;
}


