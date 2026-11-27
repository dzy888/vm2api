// 0064ea40 summary

/* <craggemini_core[66f3c71560d70857]::binding::BoundAccount>::summary */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::binding::BoundAccount>::summary
          (undefined1 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined8 local_2e0;
  char *local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined2 uStack_2bb;
  undefined1 uStack_2b9;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 local_290;
  char local_288;
  undefined1 uStack_287;
  undefined2 uStack_286;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined1 uStack_27c;
  undefined2 uStack_27b;
  undefined1 uStack_279;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_190 [2];
  undefined8 local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  char *local_160;
  longlong local_158;
  undefined1 *local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 local_130;
  longlong local_128 [6];
  longlong local_f8;
  longlong local_e0;
  longlong local_c8;
  
  lVar9 = *(longlong *)(param_2 + 0x310);
  if (lVar9 == 0) {
    local_148 = 0x11;
    local_160 = anon_63b06cc94833867f683611f039574387_63_llvm_6903579140370050947;
    local_158 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
  }
  else {
    local_158 = *(longlong *)(*(longlong *)(lVar9 + 0xf0) + 0x10);
    local_178 = *(longlong *)(*(longlong *)(lVar9 + 0xf8) + 0x10);
    local_170 = *(longlong *)(*(longlong *)(lVar9 + 0x100) + 0x10);
    local_168 = *(undefined8 *)(*(longlong *)(lVar9 + 0x108) + 0x10);
    local_148 = 0xc;
    local_160 = "local_bridge";
  }
  local_150 = param_1;
  if (*(longlong *)(param_2 + 0x318) == 0) {
    local_128[0] = 2;
  }
  else {
    uVar11 = <craggemini_core[66f3c71560d70857]::license::LicenseGate>::status
                       (&local_288,*(longlong *)(param_2 + 0x318) + 0x10);
    (*(code *)PTR_memcpy_00799008)(uVar11,0xf8);
  }
  local_2a8 = 0;
  local_298 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcVar5 != (char *)0x0) {
    builtin_strncpy(pcVar5,"account_id",10);
    local_2e0 = 10;
    local_2d0 = 10;
    lVar9 = *(longlong *)(param_2 + 0xe8);
    local_2d8 = pcVar5;
    if (lVar9 < 0) {
LAB_0064ebcd:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0064fd28;
    }
    if (lVar9 == 0) {
      lVar6 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar6 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar6 == 0) goto LAB_0064ebcd;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar9);
    }
    local_288 = '\x03';
    uStack_280 = (undefined4)lVar9;
    uStack_27c = (undefined1)((ulonglong)lVar9 >> 0x20);
    uStack_27b = (undefined2)((ulonglong)lVar9 >> 0x28);
    uStack_279 = (undefined1)((ulonglong)lVar9 >> 0x38);
    local_278 = lVar6;
    uStack_270 = lVar9;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
    if ((char)local_2c8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_2c8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar5 != (char *)0x0) {
      builtin_strncpy(pcVar5,"env_id",6);
      local_2e0 = 6;
      local_2d0 = 6;
      lVar9 = *(longlong *)(param_2 + 0x100);
      local_2d8 = pcVar5;
      if (lVar9 < 0) {
LAB_0064ecb9:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0064fd28;
      }
      if (lVar9 == 0) {
        lVar6 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar6 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar6 == 0) goto LAB_0064ecb9;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar9);
      }
      local_288 = '\x03';
      uStack_280 = (undefined4)lVar9;
      uStack_27c = (undefined1)((ulonglong)lVar9 >> 0x20);
      uStack_27b = (undefined2)((ulonglong)lVar9 >> 0x28);
      uStack_279 = (undefined1)((ulonglong)lVar9 >> 0x38);
      local_278 = lVar6;
      uStack_270 = lVar9;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
      if ((char)local_2c8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_2c8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar5 != (char *)0x0) {
        builtin_strncpy(pcVar5,"proxy_id",8);
        local_2e0 = 8;
        local_2d0 = 8;
        lVar9 = *(longlong *)(param_2 + 0x148);
        local_2d8 = pcVar5;
        if (lVar9 < 0) {
LAB_0064eda7:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0064fd28;
        }
        if (lVar9 == 0) {
          lVar6 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar6 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar6 == 0) goto LAB_0064eda7;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar9);
        }
        local_288 = '\x03';
        uStack_280 = (undefined4)lVar9;
        uStack_27c = (undefined1)((ulonglong)lVar9 >> 0x20);
        uStack_27b = (undefined2)((ulonglong)lVar9 >> 0x28);
        uStack_279 = (undefined1)((ulonglong)lVar9 >> 0x38);
        local_278 = lVar6;
        uStack_270 = lVar9;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
        if ((char)local_2c8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_2c8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar5 != (char *)0x0) {
          builtin_strncpy(pcVar5,"proxy_scheme",0xc);
          local_2e0 = 0xc;
          local_2d0 = 0xc;
          lVar9 = *(longlong *)(&DAT_0018d2a0 + (ulonglong)*(byte *)(param_2 + 0x2f2) * 8);
          local_2d8 = pcVar5;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar6 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar6 == 0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0064fd28;
          }
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar9);
          local_288 = '\x03';
          uStack_280 = (undefined4)lVar9;
          uStack_27c = (undefined1)((ulonglong)lVar9 >> 0x20);
          uStack_27b = (undefined2)((ulonglong)lVar9 >> 0x28);
          uStack_279 = (undefined1)((ulonglong)lVar9 >> 0x38);
          local_278 = lVar6;
          uStack_270 = lVar9;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
          if ((char)local_2c8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_2c8);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar5 != (char *)0x0) {
            builtin_strncpy(pcVar5,"proxy_endpoint",0xe);
            local_2e0 = 0xe;
            local_2d0 = 0xe;
            lVar9 = *(longlong *)(param_2 + 0x2b8);
            local_2d8 = pcVar5;
            if (lVar9 < 0) {
LAB_0064ef86:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0064fd28;
            }
            if (lVar9 == 0) {
              lVar6 = 1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              lVar6 = (*(code *)PTR___rust_alloc_00799000)();
              if (lVar6 == 0) goto LAB_0064ef86;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar9);
            }
            local_288 = '\x03';
            uStack_280 = (undefined4)lVar9;
            uStack_27c = (undefined1)((ulonglong)lVar9 >> 0x20);
            uStack_27b = (undefined2)((ulonglong)lVar9 >> 0x28);
            uStack_279 = (undefined1)((ulonglong)lVar9 >> 0x38);
            local_278 = lVar6;
            uStack_270 = lVar9;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
            if ((char)local_2c8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_2c8);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar5 != (char *)0x0) {
              builtin_strncpy(pcVar5,"proxy_sha256",0xc);
              local_2e0 = 0xc;
              local_2d0 = 0xc;
              lVar9 = *(longlong *)(param_2 + 0x2a0);
              local_2d8 = pcVar5;
              if (lVar9 < 0) {
LAB_0064f07b:
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0064fd28;
              }
              if (lVar9 == 0) {
                lVar6 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar6 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar6 == 0) goto LAB_0064f07b;
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar9);
              }
              local_288 = '\x03';
              uStack_280 = (undefined4)lVar9;
              uStack_27c = (undefined1)((ulonglong)lVar9 >> 0x20);
              uStack_27b = (undefined2)((ulonglong)lVar9 >> 0x28);
              uStack_279 = (undefined1)((ulonglong)lVar9 >> 0x38);
              local_278 = lVar6;
              uStack_270 = lVar9;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
              if ((char)local_2c8 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_2c8);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar5 != (char *)0x0) {
                builtin_strncpy(pcVar5,"enabled",7);
                local_2e0 = 7;
                local_2d0 = 7;
                uStack_287 = *(undefined1 *)(param_2 + 0x273);
                local_288 = '\x01';
                local_2d8 = pcVar5;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
                if ((char)local_2c8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                uVar3 = anon_63b06cc94833867f683611f039574387_53_llvm_6903579140370050947._12_4_;
                uVar2 = anon_63b06cc94833867f683611f039574387_53_llvm_6903579140370050947._8_4_;
                uVar11 = anon_63b06cc94833867f683611f039574387_53_llvm_6903579140370050947._4_4_;
                if (pcVar5 != (char *)0x0) {
                  *(undefined4 *)pcVar5 =
                       anon_63b06cc94833867f683611f039574387_53_llvm_6903579140370050947._0_4_;
                  *(undefined4 *)(pcVar5 + 4) = uVar11;
                  *(undefined4 *)(pcVar5 + 8) = uVar2;
                  *(undefined4 *)(pcVar5 + 0xc) = uVar3;
                  pcVar5[0x10] = 'i';
                  pcVar5[0x11] = 'r';
                  pcVar5[0x12] = 'e';
                  pcVar5[0x13] = 'd';
                  local_2e0 = 0x14;
                  local_2d0 = 0x14;
                  uStack_287 = *(undefined1 *)(param_2 + 0x271);
                  local_288 = '\x01';
                  local_2d8 = pcVar5;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
                  if ((char)local_2c8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                  uVar3 = anon_63b06cc94833867f683611f039574387_44_llvm_6903579140370050947._12_4_;
                  uVar2 = anon_63b06cc94833867f683611f039574387_44_llvm_6903579140370050947._8_4_;
                  uVar11 = anon_63b06cc94833867f683611f039574387_44_llvm_6903579140370050947._4_4_;
                  if (pcVar5 != (char *)0x0) {
                    *(undefined4 *)pcVar5 =
                         anon_63b06cc94833867f683611f039574387_44_llvm_6903579140370050947._0_4_;
                    *(undefined4 *)(pcVar5 + 4) = uVar11;
                    *(undefined4 *)(pcVar5 + 8) = uVar2;
                    *(undefined4 *)(pcVar5 + 0xc) = uVar3;
                    pcVar5[0x10] = 't';
                    pcVar5[0x11] = '_';
                    pcVar5[0x12] = 'e';
                    pcVar5[0x13] = 'g';
                    pcVar5[0x14] = 'r';
                    pcVar5[0x15] = 'e';
                    pcVar5[0x16] = 's';
                    pcVar5[0x17] = 's';
                    local_2e0 = 0x18;
                    local_2d0 = 0x18;
                    uStack_287 = *(undefined1 *)(param_2 + 0x270);
                    local_288 = '\x01';
                    local_2d8 = pcVar5;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
                    if ((char)local_2c8 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    if (pcVar5 != (char *)0x0) {
                      builtin_strncpy(pcVar5,"max_concurrency",0xf);
                      local_2e0 = 0xf;
                      local_2d0 = 0xf;
                      local_278 = *(longlong *)(param_2 + 600);
                      local_288 = '\x02';
                      uStack_280 = 0;
                      uStack_27c = 0;
                      uStack_27b = 0;
                      uStack_279 = 0;
                      local_2d8 = pcVar5;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
                      if ((char)local_2c8 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      if (pcVar5 != (char *)0x0) {
                        builtin_strncpy(pcVar5,"min_warm_slots",0xe);
                        local_2e0 = 0xe;
                        local_2d0 = 0xe;
                        local_278 = *(longlong *)(param_2 + 0x260);
                        local_288 = '\x02';
                        uStack_280 = 0;
                        uStack_27c = 0;
                        uStack_27b = 0;
                        uStack_279 = 0;
                        local_2d8 = pcVar5;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
                        if ((char)local_2c8 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                        uVar3 = anon_63b06cc94833867f683611f039574387_47_llvm_6903579140370050947.
                                _12_4_;
                        uVar2 = anon_63b06cc94833867f683611f039574387_47_llvm_6903579140370050947.
                                _8_4_;
                        uVar11 = anon_63b06cc94833867f683611f039574387_47_llvm_6903579140370050947.
                                 _4_4_;
                        if (pcVar5 != (char *)0x0) {
                          *(undefined4 *)pcVar5 =
                               anon_63b06cc94833867f683611f039574387_47_llvm_6903579140370050947.
                               _0_4_;
                          *(undefined4 *)(pcVar5 + 4) = uVar11;
                          *(undefined4 *)(pcVar5 + 8) = uVar2;
                          *(undefined4 *)(pcVar5 + 0xc) = uVar3;
                          pcVar5[0xd] = 't';
                          pcVar5[0xe] = 't';
                          pcVar5[0xf] = 'l';
                          pcVar5[0x10] = '_';
                          pcVar5[0x11] = 's';
                          pcVar5[0x12] = 'e';
                          pcVar5[0x13] = 'c';
                          pcVar5[0x14] = 's';
                          local_2e0 = 0x15;
                          local_2d0 = 0x15;
                          local_278 = *(longlong *)(param_2 + 0x268);
                          local_288 = '\x02';
                          uStack_280 = 0;
                          uStack_27c = 0;
                          uStack_27b = 0;
                          uStack_279 = 0;
                          local_2d8 = pcVar5;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
                          if ((char)local_2c8 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                          }
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          lVar9 = 5;
                          pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                          if (pcVar5 != (char *)0x0) {
                            builtin_strncpy(pcVar5,"model",5);
                            local_2e0 = 5;
                            local_2d0 = 5;
                            local_2d8 = pcVar5;
                            if (*(longlong *)(param_2 + 0x1b0) == -1) {
                              local_288 = '\0';
                            }
                            else {
                              lVar9 = *(longlong *)(param_2 + 0x1c0);
                              if (lVar9 < 0) {
LAB_0064f4df:
                                (*(code *)PTR_handle_error_00798ff0)();
                                goto LAB_0064fd28;
                              }
                              if (lVar9 == 0) {
                                lVar6 = 1;
                                lVar9 = 0;
                                local_288 = '\x03';
                              }
                              else {
                                local_290 = *(undefined8 *)(param_2 + 0x1b8);
                                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                lVar6 = (*(code *)PTR___rust_alloc_00799000)();
                                if (lVar6 == 0) goto LAB_0064f4df;
                                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,lVar9);
                                local_288 = '\x03';
                              }
                            }
                            uStack_280 = (undefined4)lVar9;
                            uStack_27c = (undefined1)((ulonglong)lVar9 >> 0x20);
                            uStack_27b = (undefined2)((ulonglong)lVar9 >> 0x28);
                            uStack_279 = (undefined1)((ulonglong)lVar9 >> 0x38);
                            local_278 = lVar6;
                            uStack_270 = lVar9;
                            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                            ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
                            if ((char)local_2c8 != -1) {
                              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                              <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                            }
                            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                            lVar9 = 5;
                            pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                            if (pcVar5 != (char *)0x0) {
                              builtin_strncpy(pcVar5,"netns",5);
                              local_2e0 = 5;
                              local_2d0 = 5;
                              local_2d8 = pcVar5;
                              if (*(longlong *)(param_2 + 0x1f8) == -1) {
                                cVar10 = '\0';
                              }
                              else {
                                lVar9 = *(longlong *)(param_2 + 0x208);
                                if (lVar9 < 0) {
LAB_0064f5e6:
                                  (*(code *)PTR_handle_error_00798ff0)();
                                  goto LAB_0064fd28;
                                }
                                cVar10 = '\x03';
                                if (lVar9 == 0) {
                                  lVar6 = 1;
                                  lVar9 = 0;
                                }
                                else {
                                  local_290 = *(undefined8 *)(param_2 + 0x200);
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                  lVar6 = (*(code *)PTR___rust_alloc_00799000)();
                                  if (lVar6 == 0) goto LAB_0064f5e6;
                                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_06,lVar9);
                                }
                              }
                              uStack_280 = (undefined4)lVar9;
                              uStack_27c = (undefined1)((ulonglong)lVar9 >> 0x20);
                              uStack_27b = (undefined2)((ulonglong)lVar9 >> 0x28);
                              uStack_279 = (undefined1)((ulonglong)lVar9 >> 0x38);
                              local_288 = cVar10;
                              local_278 = lVar6;
                              uStack_270 = lVar9;
                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                              ::insert(&local_2c8,&local_2a8,&local_2e0,&local_288);
                              if ((char)local_2c8 != -1) {
                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                              }
                              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                              pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                              lVar9 = local_128[0];
                              if (pcVar5 != (char *)0x0) {
                                builtin_strncpy(pcVar5,"license",7);
                                local_2e0 = 7;
                                local_2d0 = 7;
                                local_2d8 = pcVar5;
                                if (local_128[0] == 2) {
                                  local_288 = '\0';
                                }
                                else {
                                  <craggemini_core[66f3c71560d70857]::license::LicenseStatus_as_serde_core[48776c27239fa21f]::ser::Serialize>
                                  ::serialize::
                                  <serde_json[dc3825464c436029]::value::ser::Serializer>
                                            (&local_288,local_128);
                                  if (local_288 == -1) {
                                    local_2c8 = uStack_280;
                                    uStack_2c4 = (undefined4)
                                                 (CONCAT17(uStack_279,
                                                           CONCAT25(uStack_27b,
                                                                    CONCAT14(uStack_27c,uStack_280))
                                                          ) >> 0x20);
                                    (*(code *)PTR_unwrap_failed_00799028)
                                              (&
                                               PTR_<serde_json[dc3825464c436029]::error::Error>_007906e0
                                               ,&local_2c8,
                                               &
                                               PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_00790718
                                              );
                                    goto LAB_0064fd28;
                                  }
                                }
                                local_2b8 = (undefined4)local_278;
                                uStack_2b4 = local_278._4_4_;
                                uStack_2b0 = (undefined4)uStack_270;
                                uStack_2ac = uStack_270._4_4_;
                                local_2c8 = CONCAT31(CONCAT21(uStack_286,uStack_287),local_288);
                                uStack_2c4 = uStack_284;
                                uStack_2c0 = uStack_280;
                                uStack_2bc = uStack_27c;
                                uStack_2bb = uStack_27b;
                                uStack_2b9 = uStack_279;
                                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                ::insert(&local_288,&local_2a8,&local_2e0,&local_2c8);
                                if (local_288 != -1) {
                                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                  <serde_json[dc3825464c436029]::value::Value>(&local_288);
                                }
                                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                if (pcVar5 != (char *)0x0) {
                                  builtin_strncpy(pcVar5,"calibration",0xb);
                                  local_2e0 = 0xb;
                                  local_2d0 = 0xb;
                                  local_2d8 = pcVar5;
                                  <craggemini_core[66f3c71560d70857]::binding::CalibrationProof_as_serde_core[48776c27239fa21f]::ser::Serialize>
                                  ::serialize::
                                  <serde_json[dc3825464c436029]::value::ser::Serializer>
                                            (&local_288,param_2);
                                  if (local_288 == -1) {
                                    local_2c8 = uStack_280;
                                    uStack_2c4 = (undefined4)
                                                 (CONCAT17(uStack_279,
                                                           CONCAT25(uStack_27b,
                                                                    CONCAT14(uStack_27c,uStack_280))
                                                          ) >> 0x20);
                                    (*(code *)PTR_unwrap_failed_00799028)
                                              (&
                                               PTR_<serde_json[dc3825464c436029]::error::Error>_007906e0
                                               ,&local_2c8,
                                               &
                                               PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_00790718
                                              );
                                    goto LAB_0064fd28;
                                  }
                                  local_2c8 = CONCAT22(uStack_286,CONCAT11(uStack_287,local_288));
                                  local_2b8 = (undefined4)local_278;
                                  uStack_2b4 = local_278._4_4_;
                                  uStack_2b0 = (undefined4)uStack_270;
                                  uStack_2ac = uStack_270._4_4_;
                                  uStack_2c4 = uStack_284;
                                  uStack_2c0 = uStack_280;
                                  uStack_2bc = uStack_27c;
                                  uStack_2bb = uStack_27b;
                                  uStack_2b9 = uStack_279;
                                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                  ::insert(&local_288,&local_2a8,&local_2e0,&local_2c8);
                                  if (local_288 != -1) {
                                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                    <serde_json[dc3825464c436029]::value::Value>(&local_288);
                                  }
                                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                                  if (puVar7 != (undefined8 *)0x0) {
                                    *puVar7 = 0x72625f79786f7270;
                                    *(undefined4 *)(puVar7 + 1) = 0x65676469;
                                    local_140 = 0xc;
                                    local_130 = 0xc;
                                    local_190[0] = 0;
                                    local_180 = 0;
                                    local_138 = puVar7;
                                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                    pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                    if (pcVar5 != (char *)0x0) {
                                      builtin_strncpy(pcVar5,"mode",4);
                                      local_2e0 = 4;
                                      local_2d0 = 4;
                                      local_2d8 = pcVar5;
                                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                      lVar6 = local_148;
                                      lVar8 = (*(code *)PTR___rust_alloc_00799000)();
                                      if (lVar8 == 0) {
                                        (*(code *)PTR_handle_error_00798ff0)();
                                        goto LAB_0064fd28;
                                      }
                                      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_07,lVar6);
                                      local_288 = '\x03';
                                      uStack_280 = (undefined4)lVar6;
                                      uStack_27c = (undefined1)((ulonglong)lVar6 >> 0x20);
                                      uStack_27b = (undefined2)((ulonglong)lVar6 >> 0x28);
                                      uStack_279 = (undefined1)((ulonglong)lVar6 >> 0x38);
                                      uStack_270 = lVar6;
                                      local_278 = lVar8;
                                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                      ::insert(&local_2c8,local_190,&local_2e0,&local_288);
                                      if ((char)local_2c8 != -1) {
                                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                        <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                                      }
                                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                      pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                      uVar3 = s_proxied_connections_001a30f6._12_4_;
                                      uVar2 = s_proxied_connections_001a30f6._8_4_;
                                      uVar11 = s_proxied_connections_001a30f6._4_4_;
                                      if (pcVar5 != (char *)0x0) {
                                        *(undefined4 *)pcVar5 = s_proxied_connections_001a30f6._0_4_
                                        ;
                                        *(undefined4 *)(pcVar5 + 4) = uVar11;
                                        *(undefined4 *)(pcVar5 + 8) = uVar2;
                                        *(undefined4 *)(pcVar5 + 0xc) = uVar3;
                                        pcVar5[0xf] = 'i';
                                        pcVar5[0x10] = 'o';
                                        pcVar5[0x11] = 'n';
                                        pcVar5[0x12] = 's';
                                        local_2e0 = 0x13;
                                        local_2d0 = 0x13;
                                        local_288 = '\x02';
                                        uStack_280 = 0;
                                        uStack_27c = 0;
                                        uStack_27b = 0;
                                        uStack_279 = 0;
                                        local_278 = local_158;
                                        local_2d8 = pcVar5;
                                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                        ::insert(&local_2c8,local_190,&local_2e0,&local_288);
                                        if ((char)local_2c8 != -1) {
                                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                          <serde_json[dc3825464c436029]::value::Value>(&local_2c8);
                                        }
                                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)
                                                  ();
                                        pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                        uVar3 = s_failed_connections_001a3109._12_4_;
                                        uVar2 = s_failed_connections_001a3109._8_4_;
                                        uVar11 = s_failed_connections_001a3109._4_4_;
                                        if (pcVar5 != (char *)0x0) {
                                          *(undefined4 *)pcVar5 =
                                               s_failed_connections_001a3109._0_4_;
                                          *(undefined4 *)(pcVar5 + 4) = uVar11;
                                          *(undefined4 *)(pcVar5 + 8) = uVar2;
                                          *(undefined4 *)(pcVar5 + 0xc) = uVar3;
                                          pcVar5[0x10] = 'n';
                                          pcVar5[0x11] = 's';
                                          local_2e0 = 0x12;
                                          local_2d0 = 0x12;
                                          local_288 = '\x02';
                                          uStack_280 = 0;
                                          uStack_27c = 0;
                                          uStack_27b = 0;
                                          uStack_279 = 0;
                                          local_278 = local_178;
                                          local_2d8 = pcVar5;
                                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                          ::insert(&local_2c8,local_190,&local_2e0,&local_288);
                                          if ((char)local_2c8 != -1) {
                                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                            <serde_json[dc3825464c436029]::value::Value>(&local_2c8)
                                            ;
                                          }
                                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8
                                          )();
                                          pcVar5 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                                          if (pcVar5 != (char *)0x0) {
                                            builtin_strncpy(pcVar5,"bytes_tx",8);
                                            local_2e0 = 8;
                                            local_2d0 = 8;
                                            local_288 = '\x02';
                                            uStack_280 = 0;
                                            uStack_27c = 0;
                                            uStack_27b = 0;
                                            uStack_279 = 0;
                                            local_278 = local_170;
                                            local_2d8 = pcVar5;
                                            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                            ::insert(&local_2c8,local_190,&local_2e0,&local_288);
                                            if ((char)local_2c8 != -1) {
                                              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                              <serde_json[dc3825464c436029]::value::Value>
                                                        (&local_2c8);
                                            }
                                            (*(code *)
                                              PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                                            puVar7 = (undefined8 *)
                                                     (*(code *)PTR___rust_alloc_00799000)();
                                            if (puVar7 != (undefined8 *)0x0) {
                                              *puVar7 = 0x78725f7365747962;
                                              local_2e0 = 8;
                                              local_2d0 = 8;
                                              local_288 = '\x02';
                                              uStack_280 = 0;
                                              uStack_27c = 0;
                                              uStack_27b = 0;
                                              uStack_279 = 0;
                                              local_278 = local_168;
                                              local_2d8 = (char *)puVar7;
                                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                              ::insert(&local_2c8,local_190,&local_2e0,&local_288);
                                              if ((char)local_2c8 != -1) {
                                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                <serde_json[dc3825464c436029]::value::Value>
                                                          (&local_2c8);
                                              }
                                              uStack_280 = (undefined4)local_190[0];
                                              uStack_27c = (undefined1)
                                                           ((ulonglong)local_190[0] >> 0x20);
                                              uStack_27b = (undefined2)
                                                           ((ulonglong)local_190[0] >> 0x28);
                                              uStack_279 = (undefined1)
                                                           ((ulonglong)local_190[0] >> 0x38);
                                              uStack_270 = local_180;
                                              local_288 = '\x05';
                                              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                                              ::insert(&local_2c8,&local_2a8,&local_140,&local_288);
                                              if ((char)local_2c8 != -1) {
                                                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                                <serde_json[dc3825464c436029]::value::Value>
                                                          (&local_2c8);
                                              }
                                              puVar4 = local_150;
                                              *(undefined8 *)(local_150 + 0x18) = local_298;
                                              *(undefined4 *)(local_150 + 8) = (undefined4)local_2a8
                                              ;
                                              *(undefined4 *)(local_150 + 0xc) = local_2a8._4_4_;
                                              *(undefined4 *)(local_150 + 0x10) = uStack_2a0;
                                              *(undefined4 *)(local_150 + 0x14) = uStack_29c;
                                              *local_150 = 5;
                                              if ((int)lVar9 != 2) {
                                                uVar11 = (undefined4)local_2a8;
                                                if (local_f8 != 0) {
                                                  uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)
                                                                     ((undefined4)local_2a8,1);
                                                }
                                                if ((local_e0 != -1) && (local_e0 != 0)) {
                                                  uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)
                                                                     (uVar11,1);
                                                }
                                                if ((local_c8 != -1) && (local_c8 != 0)) {
                                                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
                                                }
                                              }
                                              return puVar4;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    (*(code *)PTR_handle_error_00798ff0)();
                                    goto LAB_0064fd28;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0064fd28:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


