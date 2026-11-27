// 006571e0 validate_account_config

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::binding::validate_account_config */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::binding::validate_account_config
          (undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  longlong extraout_RDX;
  longlong *plVar26;
  ulonglong uVar27;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 *puStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 *puStack_110;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 *local_78;
  longlong lStack_70;
  undefined8 uStack_40;
  
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  if (0xffffffffffffff7f < uVar2 - 0x81) {
    bVar1 = **(byte **)(param_2 + 8);
    if (((byte)(bVar1 - 0x30) < 10) || ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) {
      uVar27 = 0;
      do {
        bVar1 = (*(byte **)(param_2 + 8))[uVar27];
        if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
           ((0x32 < bVar1 - 0x2d ||
            ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0))))
        goto LAB_0065727c;
        uVar27 = uVar27 + 1;
      } while (uVar2 != uVar27);
      if (uVar2 < 0x41) {
        uVar2 = *(ulonglong *)(param_2 + 0x28);
        if (0xffffffffffffff7f < uVar2 - 0x81) {
          bVar1 = **(byte **)(param_2 + 0x20);
          if (((byte)(bVar1 - 0x30) < 10) || ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) {
            uVar27 = 0;
            do {
              bVar1 = (*(byte **)(param_2 + 0x20))[uVar27];
              if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
                 ((0x32 < bVar1 - 0x2d ||
                  ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0))))
              goto LAB_0065734c;
              uVar27 = uVar27 + 1;
            } while (uVar2 != uVar27);
            if (uVar2 < 0x41) {
              uVar2 = *(ulonglong *)(param_2 + 0x70);
              if (0xffffffffffffff7f < uVar2 - 0x81) {
                bVar1 = **(byte **)(param_2 + 0x68);
                if (((byte)(bVar1 - 0x30) < 10) || ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) {
                  uVar27 = 0;
                  do {
                    bVar1 = (*(byte **)(param_2 + 0x68))[uVar27];
                    if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
                       ((0x32 < bVar1 - 0x2d ||
                        ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0))))
                    goto LAB_006573f9;
                    uVar27 = uVar27 + 1;
                  } while (uVar2 != uVar27);
                  if (uVar2 < 0x41) {
                    cVar21 = (*(code *)PTR_is_absolute_00799b58)();
                    if ((cVar21 == '\0') ||
                       (cVar21 = (*(code *)PTR_is_absolute_00799b58)(), cVar21 == '\0')) {
                      param_1[1] = 0xffffffffffffffff;
                      param_1[2] = &DAT_001a3e0f;
                      param_1[3] = 0x15;
                      param_1[4] = 0xffffffffffffffff;
                      puVar25 = &DAT_001a3e24;
LAB_006574e4:
                      param_1[5] = puVar25;
                      param_1[6] = 0x2c;
                    }
                    else if (*(ulonglong *)(param_2 + 0x180) - 0x41 < 0xffffffffffffffc0) {
                      param_1[1] = 0xffffffffffffffff;
                      param_1[2] = &DAT_001a40b8;
                      param_1[3] = 0x13;
                      param_1[4] = 0xffffffffffffffff;
                      param_1[5] = &DAT_001a40cb;
                      param_1[6] = 0x25;
                    }
                    else {
                      if (*(ulonglong *)(param_2 + 0x180) < *(ulonglong *)(param_2 + 0x188)) {
                        param_1[1] = 0xffffffffffffffff;
                        param_1[2] = &DAT_001a407a;
                        param_1[3] = 0x12;
                        param_1[4] = 0xffffffffffffffff;
                        puVar25 = &DAT_001a408c;
                        goto LAB_006574e4;
                      }
                      if (*(longlong *)(param_2 + 400) - 10U < 0x15177 ||
                          *(longlong *)(param_2 + 400) == 0) {
                        if (*(longlong *)(param_2 + 0x138) != -1) {
                          parse_host_port(&local_118,*(undefined8 *)(param_2 + 0x140),
                                          *(undefined8 *)(param_2 + 0x148));
                          if (local_118 != -2) {
                            param_1[8] = CONCAT44(uStack_dc,uStack_e0);
                            param_1[6] = CONCAT44(uStack_ec,uStack_f0);
                            param_1[7] = CONCAT44(uStack_e4,local_e8);
                            param_1[2] = puStack_110;
                            param_1[3] = local_108;
                            param_1[4] = CONCAT44(uStack_fc,uStack_100);
                            param_1[5] = CONCAT44(uStack_f4,local_f8);
                            param_1[1] = local_118;
                            goto LAB_00657500;
                          }
                          if (puStack_110 != (undefined8 *)0x0) {
                            (*(code *)PTR___rust_dealloc_00798fc8)(0xfffffffffffffffe,1);
                          }
                        }
                        if ((*(longlong *)(param_2 + 0xf0) == -1) ||
                           (cVar21 = (*(code *)PTR_is_absolute_00799b58)(), cVar21 != '\0')) {
                          if ((*(longlong *)(param_2 + 0x108) == -1) ||
                             (cVar21 = (*(code *)PTR_is_absolute_00799b58)(), cVar21 != '\0')) {
                            if ((*(longlong *)(param_2 + 0x120) == -1) ||
                               (cVar21 = protocol::valid_id(*(undefined8 *)(param_2 + 0x128),
                                                            *(undefined8 *)(param_2 + 0x130)),
                               cVar21 != '\0')) {
                              if (*(longlong *)(param_2 + 0x150) != -1) {
                                uVar2 = *(ulonglong *)(param_2 + 0x160);
                                cVar21 = protocol::valid_id(*(undefined8 *)(param_2 + 0x158),uVar2);
                                if ((cVar21 == '\0') || (0x40 < uVar2)) {
                                  param_1[1] = 0xffffffffffffffff;
                                  param_1[2] = &DAT_001a3ee6;
                                  param_1[3] = 0xd;
                                  param_1[4] = 0xffffffffffffffff;
                                  param_1[5] = &DAT_001a3ef3;
                                  param_1[6] = 0x29;
                                  goto LAB_006574f0;
                                }
                              }
                              if ((*(longlong *)(param_2 + 0x168) != -1) &&
                                 (cVar21 = (*(code *)PTR_is_absolute_00799b58)(), cVar21 == '\0')) {
                                param_1[1] = 0xffffffffffffffff;
                                param_1[2] = &DAT_001a3e0f;
                                param_1[3] = 0x15;
                                param_1[4] = 0xffffffffffffffff;
                                puVar25 = &DAT_001a3f1c;
                                goto LAB_006574e4;
                              }
                              if (*(char *)(param_2 + 0x198) == '\0') {
                                parse_proxy_url(&local_118,*(undefined8 *)(param_2 + 0x80),
                                                *(undefined8 *)(param_2 + 0x88),
                                                *(undefined1 *)(param_2 + 0x19a));
                                local_78 = puStack_110;
                                lStack_70 = local_108;
                                uStack_40 = local_d8;
                                uVar20 = uStack_40;
                                if (local_118 != -1) {
                                  local_1a0 = uStack_a0;
                                  local_1b0 = uStack_b0;
                                  uStack_1a8 = local_a8;
                                  local_1c0 = uStack_c0;
                                  uStack_1b8 = local_b8;
                                  local_1d0 = uStack_d0;
                                  uStack_1c8 = local_c8;
                                  uStack_40._0_4_ = (undefined4)local_d8;
                                  uStack_40._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
                                  uStack_210 = puStack_110;
                                  local_208 = local_108;
                                  uStack_200 = uStack_100;
                                  uStack_1fc = uStack_fc;
                                  uStack_1f8 = local_f8;
                                  uStack_1f4 = uStack_f4;
                                  uStack_1f0 = uStack_f0;
                                  uStack_1ec = uStack_ec;
                                  uStack_1e8 = local_e8;
                                  uStack_1e4 = uStack_e4;
                                  local_1e0 = uStack_e0;
                                  uStack_1dc = uStack_dc;
                                  uStack_1d8 = (undefined4)uStack_40;
                                  uStack_1d4 = uStack_40._4_4_;
                                  local_218 = local_118;
                                  uStack_40 = uVar20;
                                  if (*(longlong *)(param_2 + 0xc0) == -1) {
LAB_00657b4a:
                                    local_158 = CONCAT44(uStack_1d4,uStack_1d8);
                                    local_178 = (undefined4 *)CONCAT44(uStack_1f4,uStack_1f8);
                                    uStack_170 = CONCAT44(uStack_1ec,uStack_1f0);
                                    local_168 = CONCAT44(uStack_1e4,uStack_1e8);
                                    uStack_160 = (undefined4 *)CONCAT44(uStack_1dc,local_1e0);
                                    uStack_180 = CONCAT44(uStack_1fc,uStack_200);
                                    lVar23 = *(longlong *)(param_2 + 0xa8);
                                    local_128 = uStack_1a8;
                                    uStack_120 = local_1a0;
                                    local_138 = uStack_1b8;
                                    uStack_130 = local_1b0;
                                    local_148 = uStack_1c8;
                                    uStack_140 = local_1c0;
                                    uStack_150 = local_1d0;
                                    local_198 = local_218;
                                    puStack_190 = uStack_210;
                                    local_188 = local_208;
joined_r0x00657bdb:
                                    if (lVar23 == -1) {
                                      local_118 = param_3;
                                      puStack_110 = param_4;
                                      local_108 = param_2;
                                      validate_account_config::_closure_1_(&local_218,&local_118);
                                    }
                                    else {
                                      <alloc[12e961f32105355]::vec::Vec<u8>as_core[c0acaeba6ab4c2e0]::clone::Clone>
                                      ::clone(&local_118,param_2 + 0xa8);
                                      local_208 = local_108;
                                      local_218 = local_118;
                                      uStack_210 = puStack_110;
                                    }
                                    cVar21 = (*(code *)PTR_is_absolute_00799b58)();
                                    if (cVar21 != '\0') {
                                      local_a8 = local_128;
                                      uStack_a0 = uStack_120;
                                      local_b8 = local_138;
                                      uStack_b0 = uStack_130;
                                      local_c8 = local_148;
                                      uStack_c0 = uStack_140;
                                      local_d8 = local_158;
                                      uStack_d0 = uStack_150;
                                      local_e8 = (undefined4)local_168;
                                      uStack_e4 = local_168._4_4_;
                                      uStack_e0 = (undefined4)uStack_160;
                                      uStack_dc = uStack_160._4_4_;
                                      local_f8 = (undefined4)local_178;
                                      uStack_f4 = local_178._4_4_;
                                      uStack_f0 = (undefined4)uStack_170;
                                      uStack_ec = uStack_170._4_4_;
                                      local_108 = local_188;
                                      uStack_100 = (undefined4)uStack_180;
                                      uStack_fc = uStack_180._4_4_;
                                      local_118 = local_198;
                                      puStack_110 = puStack_190;
                                      local_98 = (undefined4)local_218;
                                      uStack_94 = local_218._4_4_;
                                      uStack_90 = (undefined4)uStack_210;
                                      uStack_8c = uStack_210._4_4_;
                                      local_88 = local_208;
                                      (*(code *)PTR_memcpy_00799008)((undefined4)local_218,0x98);
                                      return param_1;
                                    }
                                    param_1[1] = 0xffffffffffffffff;
                                    param_1[2] = &DAT_001a3e0f;
                                    param_1[3] = 0x15;
                                    param_1[4] = 0xffffffffffffffff;
                                    param_1[5] = &DAT_001a3ffc;
                                    param_1[6] = 0x28;
                                    param_1[7] = 0;
                                    *(undefined4 *)(param_1 + 8) = 0x6020190;
                                    *param_1 = 0xffffffffffffffff;
                                    if (local_218 != 0) {
                                      (*(code *)PTR___rust_dealloc_00798fc8)(&DAT_001a3ffc,1);
                                    }
                                    plVar26 = &local_198;
                                  }
                                  else {
                                    if (*(longlong *)(param_2 + 0xd0) == 0x40) {
                                      lVar23 = *(longlong *)(param_2 + 200);
                                      lVar22 = 0;
                                      while (lVar22 != 0x40) {
                                        if (((byte)(*(char *)(lVar23 + lVar22) - 0x3aU) < 0xf6 &&
                                             (byte)(*(char *)(lVar23 + lVar22) + 0x99U) < 0xfa) ||
                                           (cVar21 = *(char *)(lVar23 + 1 + lVar22),
                                           lVar22 = lVar22 + 2,
                                           (byte)(cVar21 - 0x3aU) < 0xf6 &&
                                           (byte)(cVar21 + 0x99U) < 0xfa)) goto LAB_00657c17;
                                      }
                                      cVar21 = constant_time_hex_eq
                                                         (lVar23,0x40,CONCAT44(uStack_f4,local_f8),
                                                          CONCAT44(uStack_ec,uStack_f0));
                                      if (cVar21 != '\0') goto LAB_00657b4a;
                                    }
LAB_00657c17:
                                    param_1[1] = 0xffffffffffffffff;
                                    param_1[2] = "proxy_calibration_mismatch";
                                    param_1[3] = 0x1a;
                                    param_1[4] = 0xffffffffffffffff;
                                    param_1[5] = &DAT_001a3f48;
                                    param_1[6] = 0x37;
                                    param_1[7] = 0;
                                    *(undefined4 *)(param_1 + 8) = 0x6020199;
                                    *param_1 = 0xffffffffffffffff;
                                    plVar26 = &local_218;
                                  }
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(plVar26)
                                  ;
                                  return param_1;
                                }
                                param_1[7] = CONCAT44(uStack_dc,uStack_e0);
                                param_1[8] = local_d8;
                                param_1[5] = CONCAT44(uStack_ec,uStack_f0);
                                param_1[6] = CONCAT44(uStack_e4,local_e8);
                                param_1[3] = CONCAT44(uStack_fc,uStack_100);
                                param_1[4] = CONCAT44(uStack_f4,local_f8);
                                param_1[1] = puStack_110;
                                param_1[2] = local_108;
                                goto LAB_00657500;
                              }
                              ::<str>::trim_matches::<<char>::is_whitespace>
                                        (*(undefined8 *)(param_2 + 0x80),
                                         *(undefined8 *)(param_2 + 0x88));
                              if (extraout_RDX == 0) {
                                if (*(longlong *)(param_2 + 0xc0) == -1) {
                                  param_1[1] = 0xffffffffffffffff;
                                  param_1[2] = "proxy_calibration_mismatch";
                                  param_1[3] = 0x1a;
                                  param_1[4] = 0xffffffffffffffff;
                                  param_1[5] = &DAT_001a3f7f;
                                  param_1[6] = 0x3c;
                                }
                                else {
                                  if (*(longlong *)(param_2 + 0xd0) == 0x40) {
                                    puVar3 = *(undefined4 **)(param_2 + 200);
                                    lVar23 = 0;
                                    do {
                                      if (lVar23 == 0x40) {
                                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                  ();
                                        puVar24 = (undefined8 *)
                                                  (*(code *)PTR___rust_alloc_00799000)();
                                        if (puVar24 == (undefined8 *)0x0) {
                                          (*(code *)PTR_handle_error_00798ff0)();
                                        }
                                        else {
                                          *puVar24 = 0x67652d736e74656e;
                                          *(undefined4 *)(puVar24 + 1) = 0x73736572;
                                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8
                                          )();
                                          local_178 = (undefined4 *)
                                                      (*(code *)PTR___rust_alloc_00799000)();
                                          if (local_178 != (undefined4 *)0x0) {
                                            uVar5 = *puVar3;
                                            uVar6 = puVar3[1];
                                            uVar7 = puVar3[2];
                                            uVar8 = puVar3[3];
                                            uVar9 = puVar3[4];
                                            uVar10 = puVar3[5];
                                            uVar11 = puVar3[6];
                                            uVar12 = puVar3[7];
                                            uVar13 = puVar3[8];
                                            uVar14 = puVar3[9];
                                            uVar15 = puVar3[10];
                                            uVar16 = puVar3[0xb];
                                            uVar17 = puVar3[0xd];
                                            uVar18 = puVar3[0xe];
                                            uVar19 = puVar3[0xf];
                                            local_178[0xc] = puVar3[0xc];
                                            local_178[0xd] = uVar17;
                                            local_178[0xe] = uVar18;
                                            local_178[0xf] = uVar19;
                                            local_178[8] = uVar13;
                                            local_178[9] = uVar14;
                                            local_178[10] = uVar15;
                                            local_178[0xb] = uVar16;
                                            local_178[4] = uVar9;
                                            local_178[5] = uVar10;
                                            local_178[6] = uVar11;
                                            local_178[7] = uVar12;
                                            *local_178 = uVar5;
                                            local_178[1] = uVar6;
                                            local_178[2] = uVar7;
                                            local_178[3] = uVar8;
                                            (*(code *)
                                              PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                            uStack_160 = (undefined4 *)
                                                         (*(code *)PTR___rust_alloc_00799000)();
                                            uVar7 = _UNK_001a3ff6;
                                            uVar6 = _UNK_001a3ff2;
                                            uVar5 = _UNK_001a3fee;
                                            if (uStack_160 == (undefined4 *)0x0) {
                                              (*(code *)PTR_handle_error_00798ff0)();
                                              goto LAB_00657f61;
                                            }
                                            *uStack_160 = _DAT_001a3fea;
                                            uStack_160[1] = uVar5;
                                            uStack_160[2] = uVar6;
                                            uStack_160[3] = uVar7;
                                            *(undefined2 *)(uStack_160 + 4) = 0x7373;
                                            uStack_120 = CONCAT53(uStack_120._3_5_,0x30000);
                                            local_198 = 0xc;
                                            local_188 = 0xc;
                                            uStack_150 = 0xffffffffffffffff;
                                            local_138 = 0xffffffffffffffff;
                                            uStack_180 = 0x40;
                                            uStack_170 = 0x40;
                                            local_168 = 0x12;
                                            local_158 = 0x12;
                                            lVar23 = *(longlong *)(param_2 + 0xa8);
                                            puStack_190 = puVar24;
                                            goto joined_r0x00657bdb;
                                          }
                                        }
                                        (*(code *)PTR_handle_error_00798ff0)();
LAB_00657f61:
                    /* WARNING: Does not return */
                                        pcVar4 = (code *)invalidInstructionException();
                                        (*pcVar4)();
                                      }
                                    } while ((0xf5 < (byte)(*(char *)((longlong)puVar3 + lVar23) -
                                                           0x3aU) ||
                                              0xf9 < (byte)(*(char *)((longlong)puVar3 + lVar23) +
                                                           0x99U)) &&
                                            (cVar21 = *(char *)((longlong)puVar3 + lVar23 + 1),
                                            lVar23 = lVar23 + 2,
                                            0xf5 < (byte)(cVar21 - 0x3aU) ||
                                            0xf9 < (byte)(cVar21 + 0x99U)));
                                  }
                                  param_1[1] = 0xffffffffffffffff;
                                  param_1[2] = "proxy_calibration_mismatch";
                                  param_1[3] = 0x1a;
                                  param_1[4] = 0xffffffffffffffff;
                                  param_1[5] = &DAT_001a3fbb;
                                  param_1[6] = 0x2f;
                                }
                              }
                              else {
                                param_1[1] = 0xffffffffffffffff;
                                param_1[2] = &DAT_001a3872;
                                param_1[3] = 0x11;
                                param_1[4] = 0xffffffffffffffff;
                                param_1[5] = &DAT_001a4024;
                                param_1[6] = 0x56;
                              }
                            }
                            else {
                              param_1[1] = 0xffffffffffffffff;
                              param_1[2] = &DAT_001a3eb3;
                              param_1[3] = 0xd;
                              param_1[4] = 0xffffffffffffffff;
                              param_1[5] = &DAT_001a3ec0;
                              param_1[6] = 0x26;
                            }
                          }
                          else {
                            param_1[1] = 0xffffffffffffffff;
                            param_1[2] = &DAT_001a3e0f;
                            param_1[3] = 0x15;
                            param_1[4] = 0xffffffffffffffff;
                            param_1[5] = &DAT_001a3e91;
                            param_1[6] = 0x22;
                          }
                        }
                        else {
                          param_1[1] = 0xffffffffffffffff;
                          param_1[2] = &DAT_001a3e0f;
                          param_1[3] = 0x15;
                          param_1[4] = 0xffffffffffffffff;
                          param_1[5] = &DAT_0018d380;
                          param_1[6] = 0x20;
                        }
                      }
                      else {
                        param_1[1] = 0xffffffffffffffff;
                        param_1[2] = &DAT_00182800;
                        param_1[3] = 0x10;
                        param_1[4] = 0xffffffffffffffff;
                        param_1[5] = &DAT_001a3e50;
                        param_1[6] = 0x41;
                      }
                    }
LAB_006574f0:
                    param_1[7] = 0;
                    *(undefined4 *)(param_1 + 8) = 0x6020190;
LAB_00657500:
                    *param_1 = 0xffffffffffffffff;
                    return param_1;
                  }
                }
              }
LAB_006573f9:
              param_1[1] = 0xffffffffffffffff;
              param_1[2] = &DAT_001845f0;
              param_1[3] = 0x10;
              param_1[4] = 0xffffffffffffffff;
              param_1[5] = &DAT_001a40f0;
              param_1[6] = 0x33;
              goto LAB_006572b2;
            }
          }
        }
LAB_0065734c:
        param_1[1] = 0xffffffffffffffff;
        param_1[2] = &DAT_001a4123;
        param_1[3] = 0xe;
        param_1[4] = 0xffffffffffffffff;
        param_1[5] = &DAT_001a4131;
        param_1[6] = 0x31;
        goto LAB_006572b2;
      }
    }
  }
LAB_0065727c:
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = &DAT_001a4162;
  param_1[3] = 0x12;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = &DAT_001a4174;
  param_1[6] = 0x35;
LAB_006572b2:
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x6020190;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


