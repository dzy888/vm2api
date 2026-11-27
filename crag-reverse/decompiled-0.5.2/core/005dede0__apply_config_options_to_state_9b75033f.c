// 005dede0 apply_config_options_to_state

/* craggemini_core[66f3c71560d70857]::acp_backend::apply_config_options_to_state */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::apply_config_options_to_state
          (undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  code *pcVar18;
  char *pcVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  longlong local_d8;
  longlong local_d0;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined7 local_78;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined5 uStack_6d;
  longlong local_68;
  longlong local_60;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  local_78 = 0;
  uStack_71 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_6e = 0;
  pcVar7 = (char *)(*(code *)PTR_index_into_00799300)();
  puVar6 = PTR___rust_dealloc_00798fc8;
  auVar21._8_8_ = extraout_XMM0_Qb;
  auVar21._0_8_ = extraout_XMM0_Qa;
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x04')) goto LAB_005df033;
  lVar16 = param_2[0xf];
  if (lVar16 != 0) {
    pauVar14 = (undefined1 (*) [16])param_2[0xc];
    auVar21 = *pauVar14;
    pauVar13 = pauVar14 + 1;
    uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar21[0xf] >> 7) << 0xf);
    do {
      if ((short)uVar17 == 0) {
        do {
          auVar21 = *pauVar13;
          pauVar14 = pauVar14 + -0x18;
          pauVar13 = pauVar13 + 1;
          uVar17 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar17 == 0);
      }
      uVar4 = 0;
      for (uVar5 = uVar17; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar4 * -0x18 + -0x18) != 0) {
        auVar21._0_8_ = (*(code *)puVar6)(auVar21._0_8_,1);
        auVar21._8_8_ = extraout_XMM0_Qb_00;
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar1 = param_2[0xd];
    if (uVar1 == 0) {
      uVar8 = 0;
    }
    else {
      auVar21._0_8_ = (*(code *)PTR_memset_00799090)(auVar21._0_8_,uVar1 + 0x11);
      auVar21._8_8_ = extraout_XMM0_Qb_01;
      uVar8 = (uVar1 + 1 & 0xfffffffffffffff8) - (uVar1 + 1 >> 3);
      if (uVar1 < 8) {
        uVar8 = uVar1;
      }
    }
    param_2[0xf] = 0;
    param_2[0xe] = uVar8;
  }
  lVar16 = param_2[2];
  param_2[2] = 0;
  puVar6 = PTR___rust_dealloc_00798fc8;
  if (lVar16 != 0) {
    lVar12 = param_2[1] + 8;
    do {
      if (*(longlong *)(lVar12 + -8) != 0) {
        auVar21._0_8_ = (*(code *)puVar6)(auVar21._0_8_,1);
        auVar21._8_8_ = extraout_XMM0_Qb_02;
      }
      lVar12 = lVar12 + 0x18;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  uVar20 = auVar21._0_8_;
  if (*(longlong *)(pcVar7 + 0x18) == 0) {
    bVar11 = false;
    lVar16 = param_2[6];
joined_r0x005defea:
    if ((lVar16 != -1) && (lVar16 != 0)) {
      uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
    }
    param_2[6] = -1;
    if (bVar11) goto LAB_005df033;
  }
  else {
    lVar16 = *(longlong *)(pcVar7 + 0x10);
    lVar12 = *(longlong *)(pcVar7 + 0x18) * 0x20 + lVar16;
    bVar10 = false;
    bVar11 = false;
    pcVar18 = (code *)PTR_index_into_00799300;
    do {
      pcVar7 = (char *)(*pcVar18)(auVar21._0_8_,lVar16);
      auVar21._8_8_ = extraout_XMM0_Qb_03;
      auVar21._0_8_ = extraout_XMM0_Qa_00;
      if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\x03')) {
        lVar15 = *(longlong *)(pcVar7 + 0x18);
        if (lVar15 < 0) goto LAB_005df6dc;
        plVar2 = *(longlong **)(pcVar7 + 0x10);
        if (lVar15 == 0) {
          local_b0 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          local_b0 = (*(code *)PTR___rust_alloc_00799000)();
          if (local_b0 == 0) goto LAB_005df6dc;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,lVar15);
        }
        if (CONCAT17(uStack_71,local_78) == 0) {
          (*(code *)PTR_grow_one_00799328)();
        }
        lVar9 = CONCAT17(uStack_71,local_78);
        *(longlong *)(lVar9 * 0x18 + 8) = lVar15;
        *(longlong *)(lVar9 * 0x18 + 0x10) = local_b0;
        *(longlong *)(lVar9 * 0x18 + 0x18) = lVar15;
        local_78 = (undefined7)(lVar9 + 1);
        uStack_71 = (undefined1)((ulonglong)(lVar9 + 1) >> 0x38);
        if (lVar15 == 0) {
          lVar9 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar9 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar9 == 0) goto LAB_005df6dc;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_02,lVar15);
        }
        local_48 = lVar15;
        local_40 = lVar9;
        local_38 = lVar15;
        uVar20 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::insert(param_2 + 0xc,&local_48);
        pcVar18 = (code *)PTR_index_into_00799300;
        if (lVar15 == 0xd) {
          bVar10 = (bool)(bVar10 | (*(longlong *)((longlong)plVar2 + 5) == 0x6c6576656c5f7468 &&
                                   *plVar2 == 0x5f746867756f6874));
        }
        else if (lVar15 == 4) {
          bVar11 = (bool)(bVar11 | (int)*plVar2 == 0x65646f6d);
        }
        pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(uVar20,lVar16);
        auVar21._8_8_ = extraout_XMM0_Qb_04;
        auVar21._0_8_ = extraout_XMM0_Qa_03;
        if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x03')) {
LAB_005df2ef:
          if (lVar15 == 0xd) {
LAB_005df2f9:
            if (*(longlong *)((longlong)plVar2 + 5) == 0x6c6576656c5f7468 &&
                *plVar2 == 0x5f746867756f6874) {
              pcVar7 = (char *)(*pcVar18)(0,lVar16);
              auVar21._8_8_ = extraout_XMM0_Qb_06;
              auVar21._0_8_ = extraout_XMM0_Qa_05;
              if (((pcVar7 != (char *)0x0) && (*pcVar7 == '\x04')) &&
                 (*(longlong *)(pcVar7 + 0x18) != 0)) {
                pcVar19 = *(char **)(pcVar7 + 0x10);
                lVar15 = *(longlong *)(pcVar7 + 0x18) << 5;
                do {
                  pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(auVar21._0_8_,pcVar19);
                  auVar21._8_8_ = extraout_XMM0_Qb_07;
                  auVar21._0_8_ = extraout_XMM0_Qa_06;
                  if (pcVar7 == (char *)0x0) {
                    pcVar7 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_06,pcVar19)
                    ;
                    auVar21._8_8_ = extraout_XMM0_Qb_08;
                    auVar21._0_8_ = extraout_XMM0_Qa_07;
                    if (pcVar7 != (char *)0x0) goto LAB_005df394;
LAB_005df40a:
                    if (*pcVar19 == '\x03') {
                      local_d8 = *(longlong *)(pcVar19 + 0x18);
                      if (-1 < local_d8) {
                        if (local_d8 == 0) {
                          local_68 = 1;
                        }
                        else {
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          local_68 = (*(code *)PTR___rust_alloc_00799000)();
                          if (local_68 == 0) goto LAB_005df6dc;
                          auVar21._0_8_ =
                               (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_09,local_d8);
                          auVar21._8_8_ = extraout_XMM0_Qb_10;
                        }
                        lVar9 = param_2[2];
                        local_d0 = local_68;
                        if (lVar9 == *param_2) {
                          auVar21._0_8_ = (*(code *)PTR_grow_one_00799328)();
                          auVar21._8_8_ = extraout_XMM0_Qb_12;
                        }
                        goto LAB_005df4c4;
                      }
                      goto LAB_005df6dc;
                    }
                  }
                  else {
LAB_005df394:
                    if (*pcVar7 != '\x03') goto LAB_005df40a;
                    local_d8 = *(longlong *)(pcVar7 + 0x18);
                    if (local_d8 < 0) goto LAB_005df6dc;
                    if (local_d8 == 0) {
                      local_60 = 1;
                    }
                    else {
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      local_60 = (*(code *)PTR___rust_alloc_00799000)();
                      if (local_60 == 0) goto LAB_005df6dc;
                      auVar21._0_8_ = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_08,local_d8);
                      auVar21._8_8_ = extraout_XMM0_Qb_09;
                    }
                    lVar9 = param_2[2];
                    local_d0 = local_60;
                    if (lVar9 == *param_2) {
                      auVar21._0_8_ = (*(code *)PTR_grow_one_00799328)();
                      auVar21._8_8_ = extraout_XMM0_Qb_11;
                    }
LAB_005df4c4:
                    lVar3 = param_2[1];
                    *(longlong *)(lVar3 + lVar9 * 0x18) = local_d8;
                    *(longlong *)(lVar3 + 8 + lVar9 * 0x18) = local_d0;
                    *(longlong *)(lVar3 + 0x10 + lVar9 * 0x18) = local_d8;
                    param_2[2] = lVar9 + 1;
                  }
                  pcVar19 = pcVar19 + 0x20;
                  lVar15 = lVar15 + -0x20;
                } while (lVar15 != 0);
                pcVar18 = (code *)PTR_index_into_00799300;
              }
            }
          }
        }
        else {
          lVar9 = *(longlong *)(pcVar7 + 0x18);
          if (lVar15 == 4) {
            if ((int)*plVar2 == 0x65646f6d) {
              if (lVar9 < 0) {
LAB_005df6dc:
                (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
                pcVar18 = (code *)invalidInstructionException();
                (*pcVar18)();
              }
              if (lVar9 == 0) {
                local_a8 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                local_a8 = (*(code *)PTR___rust_alloc_00799000)();
                if (local_a8 == 0) goto LAB_005df6dc;
                auVar21._0_8_ = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_11,lVar9);
                auVar21._8_8_ = extraout_XMM0_Qb_14;
              }
              if ((param_2[9] != -1) && (param_2[9] != 0)) {
                auVar21._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar21._0_8_,1);
                auVar21._8_8_ = extraout_XMM0_Qb_16;
              }
              param_2[9] = lVar9;
              param_2[10] = local_a8;
              param_2[0xb] = lVar9;
              uStack_6e = 1;
            }
          }
          else {
            if (lVar15 == 0xd) {
              if (*(longlong *)((longlong)plVar2 + 5) == 0x6c6576656c5f7468 &&
                  *plVar2 == 0x5f746867756f6874) {
                if (lVar9 < 0) goto LAB_005df6dc;
                if (lVar9 == 0) {
                  local_a0 = 1;
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  local_a0 = (*(code *)PTR___rust_alloc_00799000)();
                  if (local_a0 == 0) goto LAB_005df6dc;
                  auVar21._0_8_ = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_10,lVar9);
                  auVar21._8_8_ = extraout_XMM0_Qb_13;
                }
                if ((param_2[6] != -1) && (param_2[6] != 0)) {
                  auVar21._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar21._0_8_,1);
                  auVar21._8_8_ = extraout_XMM0_Qb_15;
                }
                param_2[6] = lVar9;
                param_2[7] = local_a0;
                param_2[8] = lVar9;
                uStack_6f = 1;
              }
              goto LAB_005df2f9;
            }
            if (lVar15 != 5) goto LAB_005df2ef;
            if (*(char *)((longlong)plVar2 + 4) == 'l' && (int)*plVar2 == 0x65646f6d) {
              if (lVar9 < 0) goto LAB_005df6dc;
              if (lVar9 == 0) {
                local_98 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                local_98 = (*(code *)PTR___rust_alloc_00799000)();
                if (local_98 == 0) goto LAB_005df6dc;
                auVar21._0_8_ = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_04,lVar9);
                auVar21._8_8_ = extraout_XMM0_Qb_05;
              }
              if ((param_2[3] != -1) && (param_2[3] != 0)) {
                auVar21._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar21._0_8_,1);
                auVar21._8_8_ = extraout_XMM0_Qb_17;
              }
              param_2[3] = lVar9;
              param_2[4] = local_98;
              param_2[5] = lVar9;
              uStack_70 = 1;
            }
          }
        }
      }
      uVar20 = auVar21._0_8_;
      lVar16 = lVar16 + 0x20;
    } while (lVar16 != lVar12);
    if (!bVar10) {
      lVar16 = param_2[6];
      goto joined_r0x005defea;
    }
    if (bVar11) goto LAB_005df033;
  }
  if ((param_2[9] != -1) && (param_2[9] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
  }
  param_2[9] = -1;
LAB_005df033:
  param_1[2] = CONCAT17(uStack_71,local_78);
  param_1[3] = CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,uStack_70)));
  *param_1 = 0;
  param_1[1] = 8;
  return param_1;
}


