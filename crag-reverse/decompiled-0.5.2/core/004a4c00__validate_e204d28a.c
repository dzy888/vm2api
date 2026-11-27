// 004a4c00 validate

/* <craggemini_core[66f3c71560d70857]::Config>::validate */

longlong __rustcall <craggemini_core[66f3c71560d70857]::Config>::validate(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong extraout_RDX;
  undefined8 uVar5;
  char *pcVar6;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong local_e0;
  char *local_d8;
  undefined8 local_d0;
  uint local_a8;
  int local_a4;
  
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  cVar2 = (*(code *)PTR_is_absolute_00799b58)();
  if (cVar2 != '\0') {
    cVar2 = (*(code *)PTR_is_absolute_00799b58)();
    if ((cVar2 == '\0') || (cVar2 = (*(code *)PTR_is_absolute_00799b58)(), cVar2 == '\0')) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar1 = s_ories_must_be_absolute_0019664d._8_8_;
      if (pcVar6 == (char *)0x0) goto LAB_004a52d7;
      *(undefined8 *)(pcVar6 + 0x30) = s_ories_must_be_absolute_0019664d._0_8_;
      *(undefined8 *)(pcVar6 + 0x38) = uVar1;
      uVar5 = s___license_direct_0019663d._8_8_;
      *(undefined8 *)(pcVar6 + 0x20) = s___license_direct_0019663d._0_8_;
      *(undefined8 *)(pcVar6 + 0x28) = uVar5;
      uVar5 = s_ni_configuration_0019662d._8_8_;
      *(undefined8 *)(pcVar6 + 0x10) = s_ni_configuration_0019662d._0_8_;
      *(undefined8 *)(pcVar6 + 0x18) = uVar5;
      uVar7 = s_invalid_craggemi_0019661d._0_4_;
      uVar8 = s_invalid_craggemi_0019661d._4_4_;
      uVar9 = s_invalid_craggemi_0019661d._8_4_;
      uVar10 = s_invalid_craggemi_0019661d._12_4_;
    }
    else {
      if (((((*(longlong *)(param_1 + 0x8e) == -1) ||
            (cVar2 = (*(code *)PTR_is_absolute_00799b58)(), cVar2 != '\0')) &&
           ((*(longlong *)(param_1 + 0x94) == -1 ||
            (cVar2 = (*(code *)PTR_is_absolute_00799b58)(), cVar2 != '\0')))) &&
          ((*(longlong *)(param_1 + 0xa0) == -1 ||
           (cVar2 = (*(code *)PTR_is_absolute_00799b58)(), cVar2 != '\0')))) &&
         ((*(longlong *)(param_1 + 0xa6) == -1 ||
          (cVar2 = (*(code *)PTR_is_absolute_00799b58)(), cVar2 != '\0')))) {
        if ((param_1[0x20] == 1) && (*(longlong *)(param_1 + 0x22) - 0x41U < 0xffffffffffffffc0)) {
          pcVar6 = "invalid craggemini configuration: max_concurrency out of range";
          uVar5 = 0x3e;
          goto LAB_004a4fa2;
        }
        if (((char)param_1[0x24] == '\0') ||
           (0xfffffffffffeae88 < *(longlong *)(param_1 + 0x26) - 0x15181U)) {
          if (((char)param_1[0x28] != '\0') &&
             (*(longlong *)(param_1 + 0x2a) - 0x101U < 0xffffffffffffff00)) {
            pcVar6 = "invalid craggemini configuration: max_accounts out of range";
            uVar5 = 0x3b;
            goto LAB_004a4fa2;
          }
          if ((param_1[0x2c] == 1) && (0x93a80 < *(ulonglong *)(param_1 + 0x2e))) {
            pcVar6 = "invalid craggemini configuration: sticky_ttl_secs must be <= 604800";
            uVar5 = 0x43;
            goto LAB_004a4fa2;
          }
          if ((param_1[0x30] == 1) && (0x14 < *(ulonglong *)(param_1 + 0x32))) {
            pcVar6 = "invalid craggemini configuration: circuit_failure_threshold must be <= 20";
            uVar5 = 0x49;
            goto LAB_004a4fa2;
          }
          if (((char)param_1[0x34] != '\0') &&
             (*(longlong *)(param_1 + 0x36) - 0x927c1U < 0xfffffffffff6d8a3)) {
            pcVar6 = "invalid craggemini configuration: circuit_open_ms must be in 100..=600000";
            uVar5 = 0x49;
            goto LAB_004a4fa2;
          }
          if ((param_1[0x38] == 1) && (*(ulonglong *)(param_1 + 0x3a) < 0x8000000)) {
            pcVar6 = "invalid craggemini configuration: memory_limit_bytes must be >= 128 MiB";
            uVar5 = 0x47;
            goto LAB_004a4fa2;
          }
          if ((param_1[0x3c] == 1) && (0x400000000 < *(ulonglong *)(param_1 + 0x3e))) {
            pcVar6 = "invalid craggemini configuration: memory_reserve_bytes exceeds 16 GiB";
            uVar5 = 0x45;
            goto LAB_004a4fa2;
          }
          if (((char)param_1[0x40] != '\0') &&
             (*(longlong *)(param_1 + 0x42) - 0x200000001U < 0xfffffffe01ffffff)) {
            pcVar6 = 
            "invalid craggemini configuration: slot_memory_estimate_bytes must be in 32 MiB..=8 GiB"
            ;
            uVar5 = 0x56;
            goto LAB_004a4fa2;
          }
          if ((param_1[0x44] != 1) || (0x3ffffff < *(ulonglong *)(param_1 + 0x46))) {
            if (((char)param_1[0x48] == '\0') ||
               (0xfffffffffffffbff < *(longlong *)(param_1 + 0x4a) - 0x401U)) {
              if (((char)param_1[0x1c] == '\0') ||
                 (0xfffffffffffffeff < *(longlong *)(param_1 + 0x1e) - 0x101U)) {
                if ((*(longlong *)(param_1 + 0x9a) == -1) ||
                   (cVar2 = craggemini_core[66f3c71560d70857]::protocol::valid_id
                                      (*(undefined8 *)(param_1 + 0x9c),
                                       *(undefined8 *)(param_1 + 0x9e)), cVar2 != '\0')) {
                  cVar2 = craggemini_core[66f3c71560d70857]::license::valid_vm_id
                                    (*(undefined8 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x6e)
                                    );
                  if (cVar2 == '\0') {
                    pcVar6 = "invalid craggemini configuration: invalid vm_id";
                    uVar5 = 0x2f;
                  }
                  else {
                    unaff_R12 = *(longlong *)(param_1 + 0x56);
                    if (unaff_R12 - 0x18U < 0xfe9) {
                      unaff_R13 = *(longlong *)(param_1 + 0x54);
                      lVar4 = 0;
                      do {
                        if (unaff_R12 == lVar4) {
                          cVar2 = craggemini_core[66f3c71560d70857]::protocol::valid_id
                                            (*(undefined8 *)(param_1 + 0x5a),
                                             *(undefined8 *)(param_1 + 0x5c));
                          if (cVar2 == '\0') {
                            pcVar6 = "invalid craggemini configuration: invalid session_id";
                            uVar5 = 0x34;
                            goto LAB_004a4fa2;
                          }
                          ::<str>::trim_matches::<<char>::is_whitespace>
                                    (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x62)
                                    );
                          if (extraout_RDX == 0) {
                            pcVar6 = "invalid craggemini configuration: model must not be empty";
                            uVar5 = 0x39;
                            goto LAB_004a4fa2;
                          }
                          if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_004a51da;
                          if (*(longlong *)(param_1 + 0x68) != 0x40) goto LAB_004a51a7;
                          lVar4 = 0;
                          goto LAB_004a5162;
                        }
                        pcVar6 = (char *)(unaff_R13 + lVar4);
                        lVar4 = lVar4 + 1;
                      } while (0xa1 < (byte)(*pcVar6 + 0x81U));
                    }
                    pcVar6 = 
                    "invalid craggemini configuration: internal_token must be 24..=4096 ASCII graphic chars"
                    ;
                    uVar5 = 0x56;
                  }
                }
                else {
                  pcVar6 = "invalid craggemini configuration: invalid resume_conversation_id";
                  uVar5 = 0x40;
                }
              }
              else {
                pcVar6 = 
                "invalid craggemini configuration: acp_max_sessions_per_worker must be in 1..=256";
                uVar5 = 0x50;
              }
            }
            else {
              pcVar6 = "invalid craggemini configuration: global_max_slots must be in 1..=1024";
              uVar5 = 0x46;
            }
            goto LAB_004a4fa2;
          }
          pcVar6 = "invalid craggemini configuration: slot_rss_soft_limit_bytes must be >= 64 MiB";
        }
        else {
          pcVar6 = "invalid craggemini configuration: session_idle_ttl_secs must be in 10..=86400";
        }
        uVar5 = 0x4d;
        goto LAB_004a4fa2;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar1 = s_paths_must_be_absolute_00196cce._8_8_;
      if (pcVar6 == (char *)0x0) goto LAB_004a52d7;
      *(undefined8 *)(pcVar6 + 0x30) = s_paths_must_be_absolute_00196cce._0_8_;
      *(undefined8 *)(pcVar6 + 0x38) = uVar1;
      uVar5 = s___optional_file_00196cbe._8_8_;
      *(undefined8 *)(pcVar6 + 0x20) = s___optional_file_00196cbe._0_8_;
      *(undefined8 *)(pcVar6 + 0x28) = uVar5;
      uVar5 = s_ni_configuration_00196cae._8_8_;
      *(undefined8 *)(pcVar6 + 0x10) = s_ni_configuration_00196cae._0_8_;
      *(undefined8 *)(pcVar6 + 0x18) = uVar5;
      uVar7 = s_invalid_craggemi_00196c9e._0_4_;
      uVar8 = s_invalid_craggemi_00196c9e._4_4_;
      uVar9 = s_invalid_craggemi_00196c9e._8_4_;
      uVar10 = s_invalid_craggemi_00196c9e._12_4_;
    }
    *(undefined4 *)pcVar6 = uVar7;
    *(undefined4 *)(pcVar6 + 4) = uVar8;
    *(undefined4 *)(pcVar6 + 8) = uVar9;
    *(undefined4 *)(pcVar6 + 0xc) = uVar10;
    pcVar6[0x3e] = 'a';
    pcVar6[0x3f] = 'b';
    pcVar6[0x40] = 's';
    pcVar6[0x41] = 'o';
    pcVar6[0x42] = 'l';
    pcVar6[0x43] = 'u';
    pcVar6[0x44] = 't';
    pcVar6[0x45] = 'e';
    local_e0 = 0x46;
    local_d0 = 0x46;
    local_d8 = pcVar6;
LAB_004a4e58:
    lVar4 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
    return lVar4;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar1 = s_must_be_absolute_0019660d._8_8_;
  if (pcVar6 != (char *)0x0) {
    *(ulonglong *)(pcVar6 + 0x2a) =
         CONCAT26(s_must_be_absolute_0019660d._6_2_,s_must_be_absolute_0019660d._0_6_);
    *(undefined8 *)(pcVar6 + 0x32) = uVar1;
    uVar5 = CONCAT62(s_must_be_absolute_0019660d._0_6_,s___run_dir_00196603._8_2_);
    *(undefined8 *)(pcVar6 + 0x20) = s___run_dir_00196603._0_8_;
    *(undefined8 *)(pcVar6 + 0x28) = uVar5;
    uVar5 = s_ni_configuration_001965f3._8_8_;
    *(undefined8 *)(pcVar6 + 0x10) = s_ni_configuration_001965f3._0_8_;
    *(undefined8 *)(pcVar6 + 0x18) = uVar5;
    uVar9 = s_invalid_craggemi_001965e3._12_4_;
    uVar8 = s_invalid_craggemi_001965e3._8_4_;
    uVar7 = s_invalid_craggemi_001965e3._4_4_;
    *(undefined4 *)pcVar6 = s_invalid_craggemi_001965e3._0_4_;
    *(undefined4 *)(pcVar6 + 4) = uVar7;
    *(undefined4 *)(pcVar6 + 8) = uVar8;
    *(undefined4 *)(pcVar6 + 0xc) = uVar9;
    local_e0 = 0x3a;
    local_d0 = 0x3a;
    local_d8 = pcVar6;
    goto LAB_004a4e58;
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004a52d7:
  uVar7 = (*(code *)PTR_handle_error_00798ff0)();
LAB_004a52e7:
  if (*(ulonglong *)(param_1 + 0xae) < 0x41) {
    if ((*(longlong *)(param_1 + 0x88) == -1) ||
       (cVar2 = validate::_closure_21_
                          (unaff_R13,unaff_R12,*(undefined8 *)(param_1 + 0x8a),
                           *(undefined8 *)(param_1 + 0x8c)), uVar7 = extraout_XMM0_Da_00,
       cVar2 == '\0')) {
      (*(code *)PTR_symlink_metadata_007992d0)(uVar7,uVar5);
      if ((int)local_e0 == 2) {
        return (longlong)local_d8;
      }
      if ((((local_a8 & 0xf000) == 0x4000) &&
          (iVar3 = (*(code *)PTR_geteuid_007992d8)(), (local_a8 & 0xfff) == 0x1c0)) &&
         (local_a4 == iVar3)) {
        return 0;
      }
      lVar4 = craggemini_core[66f3c71560d70857]::invalid::<&str>
                        ("run_dir must be an owned 0700 directory",0x27);
      return lVar4;
    }
    pcVar6 = 
    "external_api_token must be distinct from internal_token and match [A-Za-z0-9_-]{32,128}";
    uVar5 = 0x57;
  }
  else {
    pcVar6 = "invalid craggemini configuration: max_queue must be <= 64";
    uVar5 = 0x39;
  }
  goto LAB_004a4fa2;
  while ((cVar2 = *(char *)(*(longlong *)(param_1 + 0x66) + lVar4),
         0xf5 < (byte)(cVar2 - 0x3aU) || 0xf9 < (byte)(cVar2 + 0x99U) &&
         (cVar2 = *(char *)(*(longlong *)(param_1 + 0x66) + 1 + lVar4), lVar4 = lVar4 + 2,
         0xf5 < (byte)(cVar2 - 0x3aU) || 0xf9 < (byte)(cVar2 + 0x99U)))) {
LAB_004a5162:
    if (lVar4 == 0x40) goto LAB_004a51da;
  }
LAB_004a51a7:
  pcVar6 = "invalid craggemini configuration: agy_sha256 must be 64 lowercase hex chars";
  uVar5 = 0x4b;
  goto LAB_004a4fa2;
LAB_004a51da:
  local_e0 = *(longlong *)(param_1 + 0x7e);
  local_d8 = (char *)(local_e0 + *(longlong *)(param_1 + 0x80) * 0x18);
  cVar2 = <core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
          ::any::<<craggemini_core[66f3c71560d70857]::Config>::validate::_closure_19_>(&local_e0);
  if (cVar2 != '\0') {
    pcVar6 = 
    "invalid craggemini configuration: allowed_agy_sha256s entries must be 64 lowercase hex chars";
    uVar5 = 0x5c;
    goto LAB_004a4fa2;
  }
  if (*(longlong *)(param_1 + 0xac) - 100U < 0x9275d) {
    if (((((*param_1 != 1) || (0xfffffffffff6d8a2 < *(longlong *)(param_1 + 2) - 0x927c1U)) &&
         ((param_1[4] != 1 || (0xfffffffffff6d8a2 < *(longlong *)(param_1 + 6) - 0x927c1U)))) &&
        (((*(longlong *)(param_1 + 8) == 0 ||
          (0xfffffffffff6d8a2 < *(longlong *)(param_1 + 10) - 0x927c1U)) &&
         ((*(longlong *)(param_1 + 0x14) == 0 ||
          (0xfffffffffff6d8a2 < *(longlong *)(param_1 + 0x16) - 0x927c1U)))))) &&
       ((uVar7 = extraout_XMM0_Da, *(longlong *)(param_1 + 0x18) == 0 ||
        (0xfffffffffff6d8a2 < *(longlong *)(param_1 + 0x1a) - 0x927c1U)))) goto LAB_004a52e7;
  }
  pcVar6 = "invalid craggemini configuration: timeout values must be in 100..=600000 ms";
  uVar5 = 0x4b;
LAB_004a4fa2:
  lVar4 = craggemini_core[66f3c71560d70857]::invalid::<&str>(pcVar6,uVar5);
  return lVar4;
}


