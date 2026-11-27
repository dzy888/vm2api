// 00616a60 external_health

/* <craggemini_core[66f3c71560d70857]::server::Runtime>::external_health */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::external_health
          (undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char *pcVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined2 uVar15;
  char cVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined8 local_208;
  undefined8 *local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined3 uStack_1e4;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  undefined8 local_1d9;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong lStack_1c0;
  char *local_1b8;
  longlong lStack_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined1 local_190;
  undefined4 local_18f;
  undefined4 uStack_18b;
  undefined4 uStack_187;
  undefined3 uStack_183;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_148;
  undefined1 local_140 [48];
  longlong local_110;
  longlong local_f8;
  longlong local_e0;
  char local_50;
  
  local_1d0 = param_1;
  <craggemini_core[66f3c71560d70857]::license::LicenseGate>::status
            (local_140,*(longlong *)(param_2 + 0x2d0) + 0x10);
  cVar8 = '\x01';
  if (local_50 == '\0') {
    cVar8 = <craggemini_core[66f3c71560d70857]::pool::PoolManager>::has_per_account_licenses
                      (*(longlong *)(param_2 + 0x2e0) + 0x10);
    if (cVar8 == '\0') {
      cVar8 = '\0';
    }
    else {
      cVar8 = <craggemini_core[66f3c71560d70857]::pool::PoolManager>::any_licensed_account
                        (*(longlong *)(param_2 + 0x2e0) + 0x10);
    }
  }
  piVar1 = (int *)(param_2 + 0x310);
  LOCK();
  bVar17 = *(int *)(param_2 + 0x310) == 0;
  if (bVar17) {
    *(int *)(param_2 + 0x310) = 1;
  }
  UNLOCK();
  if (!bVar17) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar7 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar11 = 0;
    cVar16 = *(char *)(param_2 + 0x314);
  }
  else {
    bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar11 = bVar11 ^ 1;
    cVar16 = *(char *)(param_2 + 0x314);
  }
  if (cVar16 != '\0') {
    uVar4 = (ulonglong)lStack_1c0 >> 8;
    lStack_1c0 = CONCAT71((int7)uVar4,bVar11);
    local_1c8 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_1c8,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
    goto LAB_00616ffc;
  }
  uVar18 = <craggemini_core[66f3c71560d70857]::pool::PoolManager>::health_summary
                     (&local_1c8,*(longlong *)(param_2 + 0x2e0) + 0x10);
  pcVar12 = (char *)(*(code *)PTR_index_into_00799300)(uVar18,&local_1c8);
  if (pcVar12 == (char *)0x0) {
    pcVar12 = PTR_NULL_00799530;
  }
  if (*pcVar12 == '\x01') {
    bVar10 = pcVar12[1];
  }
  else {
    bVar10 = 0;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_1c8,5)
  ;
  if (((*(int *)(param_2 + 1000) != 0) && (*(char *)(param_2 + 0x414) == '\0')) &&
     (*(char *)(param_2 + 0x413) == '\0')) {
    bVar9 = (*(code *)PTR_is_cancelled_00799260)();
    bVar10 = bVar9 ^ 1 | bVar10;
  }
  cVar16 = '\0';
  if ((bVar10 & 1) != 0) {
    cVar16 = cVar8;
  }
  (*(code *)PTR_clone_00798fd0)();
  if (((bVar11 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_2 + 0x314) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  uVar15 = 0x1f7;
  if (cVar16 != '\0') {
    uVar15 = 200;
  }
  local_170 = 0;
  local_160 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar13 != (undefined8 *)0x0) {
    *(undefined1 *)((longlong)puVar13 + 4) = 0x79;
    *(undefined4 *)puVar13 = 0x64616572;
    local_208 = 5;
    local_1f8 = 5;
    local_1c8._0_2_ = CONCAT11(cVar16,1);
    local_200 = puVar13;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_1f0,&local_170,&local_208,&local_1c8);
    if ((char)local_1f0 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_1f0);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined1 *)((longlong)puVar13 + 4) = 0x6c;
      *(undefined4 *)puVar13 = 0x65646f6d;
      local_208 = 5;
      local_1f8 = 5;
      local_200 = puVar13;
      if (local_148 < 0) {
LAB_00616cd6:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00616ffc;
      }
      if (local_148 == 0) {
        lVar14 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar14 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar14 == 0) goto LAB_00616cd6;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,local_148);
      }
      local_1c8 = (int *)CONCAT71(local_1c8._1_7_,3);
      lStack_1c0 = local_148;
      lStack_1b0 = local_148;
      local_1b8 = (char *)lVar14;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_1f0,&local_170,&local_208,&local_1c8);
      if ((char)local_1f0 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_1f0);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar13 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)puVar13 + 7) = 0x74616d726f665f65;
        *puVar13 = 0x65736e6f70736572;
        local_208 = 0xf;
        local_1f8 = 0xf;
        local_200 = puVar13;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar12 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        uVar6 = s_native_gemini_ssecancelled_001a0747._12_4_;
        uVar5 = s_native_gemini_ssecancelled_001a0747._8_4_;
        uVar18 = s_native_gemini_ssecancelled_001a0747._4_4_;
        if (pcVar12 != (char *)0x0) {
          *(undefined4 *)pcVar12 = s_native_gemini_ssecancelled_001a0747._0_4_;
          *(undefined4 *)(pcVar12 + 4) = uVar18;
          *(undefined4 *)(pcVar12 + 8) = uVar5;
          *(undefined4 *)(pcVar12 + 0xc) = uVar6;
          pcVar12[0x10] = 'e';
          local_1c8 = (int *)CONCAT71(local_1c8._1_7_,3);
          lStack_1c0 = 0x11;
          lStack_1b0 = 0x11;
          local_1b8 = pcVar12;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_1f0,&local_170,&local_208,&local_1c8);
          if ((char)local_1f0 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_1f0);
          }
          uStack_1ec._3_1_ = (undefined1)local_170;
          uStack_1e8 = (undefined4)((ulonglong)local_170 >> 8);
          uStack_1e4 = (undefined3)((ulonglong)local_170 >> 0x28);
          uStack_1e1 = (undefined1)uStack_168;
          uStack_1e0 = (undefined7)((ulonglong)uStack_168 >> 8);
          local_1d9 = local_160;
          local_1c8 = (int *)anon_1b4a85c95499e1b671cf4fa96a1b6d0f_639_llvm_10049508496007902178.
                             _0_8_;
          lStack_1c0 = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_639_llvm_10049508496007902178._8_8_;
          local_1b8 = (char *)anon_1b4a85c95499e1b671cf4fa96a1b6d0f_639_llvm_10049508496007902178.
                              _16_8_;
          lStack_1b0 = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_639_llvm_10049508496007902178._24_8_;
          local_1a8 = &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_640_llvm_10049508496007902178;
          local_1a0 = 8;
          local_190 = 5;
          local_18f = local_1f0;
          uStack_18b = uStack_1ec;
          uStack_187 = uStack_1e8;
          _uStack_183 = CONCAT13(uStack_1e1,uStack_1e4);
          uStack_17f = uStack_1e0;
          local_178 = local_160;
          local_198 = uVar15;
          uVar18 = <(http[56314f485c23ccf6]::status::StatusCode,[(http[56314f485c23ccf6]::header::name::HeaderName,&str);1:usize],axum[743f01f147681d98]::json::Json<serde_json[dc3825464c436029]::value::Value>)as_axum_core[61c49771464cda0a]::response::into_response::IntoResponse>
                   ::into_response(local_1d0,&local_1c8);
          if (local_158 != 0) {
            uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
          }
          if (local_110 != 0) {
            uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
          }
          if ((local_f8 != -1) && (local_f8 != 0)) {
            uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
          }
          if ((local_e0 != -1) && (local_e0 != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
          }
          return local_1d0;
        }
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00616ffc;
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00616ffc:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


