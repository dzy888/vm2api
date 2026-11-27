// 006567a0 validate_bijection

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::binding::validate_bijection */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::binding::validate_bijection
          (undefined8 *param_1,longlong param_2,longlong param_3,char param_4,undefined8 param_5,
          undefined8 param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  longlong in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar21 [16];
  longlong lVar22;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined1 (*local_158) [16];
  longlong lStack_150;
  undefined8 local_148;
  longlong lStack_140;
  longlong local_138;
  longlong local_130;
  undefined1 (*local_128) [16];
  longlong lStack_120;
  undefined8 local_118;
  longlong lStack_110;
  longlong local_108;
  longlong local_100;
  undefined1 (*local_f8) [16];
  longlong lStack_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 (*local_c8) [16];
  longlong lStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 (*local_98) [16];
  longlong lStack_90;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  undefined1 (*local_68) [16];
  longlong lStack_60;
  undefined8 local_58;
  longlong lStack_50;
  longlong local_48;
  longlong local_40;
  
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    local_138 = *(longlong *)(in_FS_OFFSET + -0x38);
    lVar11 = *(longlong *)(in_FS_OFFSET + -0x30);
  }
  else {
    lVar11 = param_3;
    local_138 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_138;
    *(longlong *)(in_FS_OFFSET + -0x30) = lVar11;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  lStack_50 = _UNK_007904e8;
  uVar15 = _DAT_007904e0;
  lStack_60 = _UNK_007904d8;
  local_68 = (undefined1 (*) [16])anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947
  ;
  local_108 = local_138 + 1;
  local_148 = _DAT_007904e0;
  lStack_140 = _UNK_007904e8;
  local_158 = (undefined1 (*) [16])
              anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947;
  lStack_150 = _UNK_007904d8;
  local_d8 = local_138 + 2;
  local_118 = _DAT_007904e0;
  lStack_110 = _UNK_007904e8;
  local_128 = (undefined1 (*) [16])
              anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947;
  lStack_120 = _UNK_007904d8;
  local_a8 = local_138 + 3;
  local_e8 = _DAT_007904e0;
  lStack_e0 = _UNK_007904e8;
  local_f8 = (undefined1 (*) [16])anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947
  ;
  lStack_f0 = _UNK_007904d8;
  local_78 = local_138 + 4;
  local_b8 = _DAT_007904e0;
  lStack_b0 = _UNK_007904e8;
  local_c8 = (undefined1 (*) [16])anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947
  ;
  lStack_c0 = _UNK_007904d8;
  local_48 = local_138 + 5;
  local_88 = _DAT_007904e0;
  lStack_80 = _UNK_007904e8;
  local_98 = (undefined1 (*) [16])anon_63b06cc94833867f683611f039574387_277_llvm_6903579140370050947
  ;
  lStack_90 = _UNK_007904d8;
  *(longlong *)(in_FS_OFFSET + -0x38) = local_138 + 6;
  puVar9 = PTR_clone_00798fd0;
  local_58 = uVar15;
  local_130 = lVar11;
  local_100 = lVar11;
  local_d0 = lVar11;
  local_a0 = lVar11;
  local_70 = lVar11;
  local_40 = lVar11;
  if (param_3 != 0) {
    lVar11 = param_3 * 0x238 + param_2;
    do {
      (*(code *)puVar9)();
      cVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::insert(&local_158,&local_170);
      if (cVar4 != '\0') {
        uVar6 = 0x28;
        uVar10 = 0x14;
        pcVar7 = 
        "duplicate_account_idduplicate account_id in binding registryeach account must bind to a distinct env_id (1:1:1 invariant)duplicate_agy_homeeach account must use an isolated agy_home directoryduplicate_run_direach account must use an isolated run_dirduplicate_proxy_idstrict 1:1:1 proxy binding forbids sharing proxy_id across accountsduplicate_proxy_endpointstrict 1:1:1 proxy binding forbids sharing the same proxy endpoint across accountsgeneral SOCKS server failureconnection not allowed by rulesetnetwork unreachableconnection refusedTTL expiredcommand not supportedaddress type not supportedunknown SOCKS5 errorinvalid_account_pathsagy_home and work_dir must be absolute pathssession_idle_ttl_secs must be 0 (never reap) or within 10..=86400bridge_so must be an absolute pathinvalid_netnsnetns name contains invalid charactersinvalid_vm_idaccount vm_id contains invalid charactersaccount license_dir must be an absolute pathconfigured proxy_sha256 does not match proxy_url digestnetns_transparent_egress requires pinned 64-hex proxy_sha256proxy_sha256 must be lowercase 64-character hexnetns://kin-egressaccount run_dir must be an absolute pathnetns_transparent_egress forbids passing raw proxy_url credentials into sandbox configinvalid_warm_slotsmin_warm_slots cannot exceed max_concurrencyinvalid_concurrencymax_concurrency must be within 1..=64proxy_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_env_idenv_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_account_idaccount_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}struct AccountBindingConfig\x01"
        ;
        puVar9 = &DAT_001a3bbb;
        uVar15 = extraout_XMM0_Qa;
LAB_0065708f:
        *param_1 = 0xffffffffffffffff;
        param_1[1] = pcVar7;
        param_1[2] = uVar10;
        param_1[3] = 0xffffffffffffffff;
        param_1[4] = puVar9;
        param_1[5] = uVar6;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 7) = 0x6020199;
        if (lStack_60 == 0) goto LAB_00656b97;
        goto LAB_00656ab5;
      }
      (*(code *)puVar9)();
      cVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::insert(&local_128,&local_170);
      if (cVar4 != '\0') {
        uVar6 = 0x3d;
        uVar10 = 0x10;
        pcVar7 = "duplicate_env_id";
        puVar9 = &DAT_001a3be3;
        uVar15 = extraout_XMM0_Qa_00;
        goto LAB_0065708f;
      }
      lVar13 = *(longlong *)(param_2 + 0x40);
      if (lVar13 < 0) {
LAB_00656b57:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar22 = param_2;
      if (lVar13 == 0) {
        lVar5 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar5 == 0) goto LAB_00656b57;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,lVar13);
      }
      local_170 = lVar13;
      local_168 = lVar5;
      local_160 = lVar13;
      cVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<std[6c98fd8553dbae28]::path::PathBuf,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::insert(&local_f8,&local_170);
      uVar10 = 0x12;
      if (cVar4 != '\0') {
        uVar6 = 0x34;
        pcVar7 = 
        "duplicate_agy_homeeach account must use an isolated agy_home directoryduplicate_run_direach account must use an isolated run_dirduplicate_proxy_idstrict 1:1:1 proxy binding forbids sharing proxy_id across accountsduplicate_proxy_endpointstrict 1:1:1 proxy binding forbids sharing the same proxy endpoint across accountsgeneral SOCKS server failureconnection not allowed by rulesetnetwork unreachableconnection refusedTTL expiredcommand not supportedaddress type not supportedunknown SOCKS5 errorinvalid_account_pathsagy_home and work_dir must be absolute pathssession_idle_ttl_secs must be 0 (never reap) or within 10..=86400bridge_so must be an absolute pathinvalid_netnsnetns name contains invalid charactersinvalid_vm_idaccount vm_id contains invalid charactersaccount license_dir must be an absolute pathconfigured proxy_sha256 does not match proxy_url digestnetns_transparent_egress requires pinned 64-hex proxy_sha256proxy_sha256 must be lowercase 64-character hexnetns://kin-egressaccount run_dir must be an absolute pathnetns_transparent_egress forbids passing raw proxy_url credentials into sandbox configinvalid_warm_slotsmin_warm_slots cannot exceed max_concurrencyinvalid_concurrencymax_concurrency must be within 1..=64proxy_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_env_idenv_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_account_idaccount_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}struct AccountBindingConfig\x01"
        ;
        puVar9 = &DAT_001a3c32;
        uVar15 = extraout_XMM0_Qa_02;
        goto LAB_0065708f;
      }
      lVar13 = *(longlong *)(param_2 + 0x230);
      if (lVar13 < 0) goto LAB_00656b57;
      if (lVar13 == 0) {
        lVar5 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar5 == 0) goto LAB_00656b57;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_03,lVar13,param_5,param_6,lVar22);
      }
      local_170 = lVar13;
      local_168 = lVar5;
      local_160 = lVar13;
      cVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<std[6c98fd8553dbae28]::path::PathBuf,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::insert(&local_c8,&local_170);
      uVar15 = extraout_XMM0_Qa_04;
      if (cVar4 != '\0') {
        uVar6 = 0x29;
        uVar10 = 0x11;
        pcVar7 = 
        "duplicate_run_direach account must use an isolated run_dirduplicate_proxy_idstrict 1:1:1 proxy binding forbids sharing proxy_id across accountsduplicate_proxy_endpointstrict 1:1:1 proxy binding forbids sharing the same proxy endpoint across accountsgeneral SOCKS server failureconnection not allowed by rulesetnetwork unreachableconnection refusedTTL expiredcommand not supportedaddress type not supportedunknown SOCKS5 errorinvalid_account_pathsagy_home and work_dir must be absolute pathssession_idle_ttl_secs must be 0 (never reap) or within 10..=86400bridge_so must be an absolute pathinvalid_netnsnetns name contains invalid charactersinvalid_vm_idaccount vm_id contains invalid charactersaccount license_dir must be an absolute pathconfigured proxy_sha256 does not match proxy_url digestnetns_transparent_egress requires pinned 64-hex proxy_sha256proxy_sha256 must be lowercase 64-character hexnetns://kin-egressaccount run_dir must be an absolute pathnetns_transparent_egress forbids passing raw proxy_url credentials into sandbox configinvalid_warm_slotsmin_warm_slots cannot exceed max_concurrencyinvalid_concurrencymax_concurrency must be within 1..=64proxy_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_env_idenv_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_account_idaccount_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}struct AccountBindingConfig\x01"
        ;
        puVar9 = &DAT_001a3c77;
        goto LAB_0065708f;
      }
      if (param_4 != '\0') {
        (*(code *)puVar9)();
        cVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
                ::insert(&local_98,&local_170);
        if (cVar4 == '\0') {
          (*(code *)puVar9)();
          cVar4 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
                  ::insert(&local_68,&local_170);
          uVar15 = extraout_XMM0_Qa_06;
          if (cVar4 == '\0') goto LAB_00656a85;
          uVar6 = 0x52;
          uVar10 = 0x18;
          pcVar7 = 
          "duplicate_proxy_endpointstrict 1:1:1 proxy binding forbids sharing the same proxy endpoint across accountsgeneral SOCKS server failureconnection not allowed by rulesetnetwork unreachableconnection refusedTTL expiredcommand not supportedaddress type not supportedunknown SOCKS5 errorinvalid_account_pathsagy_home and work_dir must be absolute pathssession_idle_ttl_secs must be 0 (never reap) or within 10..=86400bridge_so must be an absolute pathinvalid_netnsnetns name contains invalid charactersinvalid_vm_idaccount vm_id contains invalid charactersaccount license_dir must be an absolute pathconfigured proxy_sha256 does not match proxy_url digestnetns_transparent_egress requires pinned 64-hex proxy_sha256proxy_sha256 must be lowercase 64-character hexnetns://kin-egressaccount run_dir must be an absolute pathnetns_transparent_egress forbids passing raw proxy_url credentials into sandbox configinvalid_warm_slotsmin_warm_slots cannot exceed max_concurrencyinvalid_concurrencymax_concurrency must be within 1..=64proxy_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_env_idenv_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_account_idaccount_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}struct AccountBindingConfig\x01"
          ;
          puVar9 = &DAT_001a3d0d;
        }
        else {
          uVar6 = 0x43;
          pcVar7 = 
          "duplicate_proxy_idstrict 1:1:1 proxy binding forbids sharing proxy_id across accountsduplicate_proxy_endpointstrict 1:1:1 proxy binding forbids sharing the same proxy endpoint across accountsgeneral SOCKS server failureconnection not allowed by rulesetnetwork unreachableconnection refusedTTL expiredcommand not supportedaddress type not supportedunknown SOCKS5 errorinvalid_account_pathsagy_home and work_dir must be absolute pathssession_idle_ttl_secs must be 0 (never reap) or within 10..=86400bridge_so must be an absolute pathinvalid_netnsnetns name contains invalid charactersinvalid_vm_idaccount vm_id contains invalid charactersaccount license_dir must be an absolute pathconfigured proxy_sha256 does not match proxy_url digestnetns_transparent_egress requires pinned 64-hex proxy_sha256proxy_sha256 must be lowercase 64-character hexnetns://kin-egressaccount run_dir must be an absolute pathnetns_transparent_egress forbids passing raw proxy_url credentials into sandbox configinvalid_warm_slotsmin_warm_slots cannot exceed max_concurrencyinvalid_concurrencymax_concurrency must be within 1..=64proxy_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_env_idenv_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}invalid_account_idaccount_id must match [A-Za-z0-9][A-Za-z0-9._-]{0,63}struct AccountBindingConfig\x01"
          ;
          puVar9 = &DAT_001a3cb2;
          uVar10 = 0x12;
          uVar15 = extraout_XMM0_Qa_05;
        }
        goto LAB_0065708f;
      }
LAB_00656a85:
      param_2 = param_2 + 0x238;
    } while (param_2 != lVar11);
  }
  *param_1 = 0xfffffffffffffffe;
  if (lStack_60 != 0) {
LAB_00656ab5:
    lVar11 = lStack_60;
    puVar9 = PTR___rust_dealloc_00798fc8;
    if (lStack_50 != 0) {
      auVar16 = *local_68;
      pauVar12 = local_68 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar16[0xf] >> 7) << 0xf);
      lVar13 = lStack_50;
      pauVar14 = local_68;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar16 = *pauVar12;
            pauVar14 = pauVar14 + -0x18;
            pauVar12 = pauVar12 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar2 * -0x18 + -0x18) != 0) {
          auVar16._0_8_ = (*(code *)puVar9)(auVar16._0_8_,1);
          auVar16._8_8_ = extraout_XMM0_Qb;
        }
        uVar15 = auVar16._0_8_;
        lVar13 = lVar13 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar13 != 0);
    }
    if (lVar11 + (lVar11 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,0x10);
    }
  }
LAB_00656b97:
  lVar11 = lStack_90;
  puVar9 = PTR___rust_dealloc_00798fc8;
  if (lStack_90 != 0) {
    if (lStack_80 != 0) {
      auVar17 = *local_98;
      pauVar12 = local_98 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
      lVar13 = lStack_80;
      pauVar14 = local_98;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar17 = *pauVar12;
            pauVar14 = pauVar14 + -0x18;
            pauVar12 = pauVar12 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar2 * -0x18 + -0x18) != 0) {
          auVar17._0_8_ = (*(code *)puVar9)(auVar17._0_8_,1);
          auVar17._8_8_ = extraout_XMM0_Qb_00;
        }
        uVar15 = auVar17._0_8_;
        lVar13 = lVar13 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar13 != 0);
    }
    if (lVar11 + (lVar11 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,0x10);
    }
  }
  lVar11 = lStack_c0;
  puVar9 = PTR___rust_dealloc_00798fc8;
  if (lStack_c0 != 0) {
    if (lStack_b0 != 0) {
      auVar18 = *local_c8;
      pauVar12 = local_c8 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
      lVar13 = lStack_b0;
      pauVar14 = local_c8;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar18 = *pauVar12;
            pauVar14 = pauVar14 + -0x18;
            pauVar12 = pauVar12 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar2 * -0x18 + -0x18) != 0) {
          auVar18._0_8_ = (*(code *)puVar9)(auVar18._0_8_,1);
          auVar18._8_8_ = extraout_XMM0_Qb_01;
        }
        uVar15 = auVar18._0_8_;
        lVar13 = lVar13 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar13 != 0);
    }
    if (lVar11 + (lVar11 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,0x10);
    }
  }
  lVar11 = lStack_f0;
  puVar9 = PTR___rust_dealloc_00798fc8;
  if (lStack_f0 != 0) {
    if (lStack_e0 != 0) {
      auVar19 = *local_f8;
      pauVar12 = local_f8 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
      lVar13 = lStack_e0;
      pauVar14 = local_f8;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar19 = *pauVar12;
            pauVar14 = pauVar14 + -0x18;
            pauVar12 = pauVar12 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar2 * -0x18 + -0x18) != 0) {
          auVar19._0_8_ = (*(code *)puVar9)(auVar19._0_8_,1);
          auVar19._8_8_ = extraout_XMM0_Qb_02;
        }
        uVar15 = auVar19._0_8_;
        lVar13 = lVar13 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar13 != 0);
    }
    if (lVar11 + (lVar11 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,0x10);
    }
  }
  lVar11 = lStack_120;
  puVar9 = PTR___rust_dealloc_00798fc8;
  if (lStack_120 != 0) {
    if (lStack_110 != 0) {
      auVar20 = *local_128;
      pauVar12 = local_128 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar20[0xf] >> 7) << 0xf);
      lVar13 = lStack_110;
      pauVar14 = local_128;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar20 = *pauVar12;
            pauVar14 = pauVar14 + -0x18;
            pauVar12 = pauVar12 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar8 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar2 * -0x18 + -0x18) != 0) {
          auVar20._0_8_ = (*(code *)puVar9)(auVar20._0_8_,1);
          auVar20._8_8_ = extraout_XMM0_Qb_03;
        }
        uVar15 = auVar20._0_8_;
        lVar13 = lVar13 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar13 != 0);
    }
    if (lVar11 + (lVar11 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,0x10);
    }
  }
  lVar11 = lStack_150;
  puVar9 = PTR___rust_dealloc_00798fc8;
  if (lStack_150 != 0) {
    if (lStack_140 != 0) {
      auVar21 = *local_158;
      pauVar12 = local_158 + 1;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
      lVar13 = lStack_140;
      pauVar14 = local_158;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar21 = *pauVar12;
            pauVar14 = pauVar14 + -0x18;
            pauVar12 = pauVar12 + 1;
            uVar8 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
          } while (uVar8 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (*(longlong *)((longlong)pauVar14 + (ulonglong)uVar2 * -0x18 + -0x18) != 0) {
          auVar21._0_8_ = (*(code *)puVar9)(auVar21._0_8_,1);
          auVar21._8_8_ = extraout_XMM0_Qb_04;
        }
        uVar15 = auVar21._0_8_;
        lVar13 = lVar13 + -1;
        uVar8 = uVar8 - 1 & uVar8;
      } while (lVar13 != 0);
    }
    if (lVar11 + (lVar11 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,0x10);
    }
  }
  return param_1;
}


