// 00523520 select_resume

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::select_resume */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::select_resume
          (undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  char cVar10;
  longlong lVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined8 local_5d0;
  longlong *local_5c8;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined1 uStack_5ac;
  undefined2 uStack_5ab;
  undefined1 uStack_5a9;
  undefined8 local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined1 *local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 *local_558;
  undefined8 local_550;
  char local_548;
  undefined1 uStack_547;
  undefined2 uStack_546;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined1 uStack_53c;
  undefined2 uStack_53b;
  undefined1 uStack_539;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined1 local_2c8 [8];
  undefined8 local_2c0;
  longlong local_2b8;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong local_170;
  undefined8 local_60;
  undefined1 local_4e [30];
  
  local_570 = param_3;
  local_568 = param_4;
  lVar5 = find(param_2,param_3,param_4);
  if (lVar5 == 0) {
    local_548 = (char)&local_570;
    uStack_547 = (undefined1)((ulonglong)&local_570 >> 8);
    uStack_546 = (undefined2)((ulonglong)&local_570 >> 0x10);
    uStack_544 = (undefined4)((ulonglong)&local_570 >> 0x20);
    uStack_540 = 0x635460;
    uStack_53c = 0;
    uStack_53b = 0;
    uStack_539 = 0;
    (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da,&local_548);
    *param_1 = 0xff;
    return param_1;
  }
  uVar12 = <craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2_as_core[c0acaeba6ab4c2e0]::clone::Clone>
           ::clone(&local_548,lVar5);
  (*(code *)PTR_memcpy_00799008)(uVar12,0x280);
  (*(code *)PTR_clone_00798fd0)();
  local_5a8 = CONCAT44(uStack_534,uStack_538);
  local_5b8 = CONCAT22(uStack_546,CONCAT11(uStack_547,local_548));
  uStack_5b4 = uStack_544;
  uStack_5b0 = uStack_540;
  uStack_5ac = uStack_53c;
  uStack_5ab = uStack_53b;
  uStack_5a9 = uStack_539;
  if ((*(longlong *)(param_2 + 0x78) != -1) && (*(longlong *)(param_2 + 0x78) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(local_5b8,1);
  }
  *(undefined8 *)(param_2 + 0x88) = local_5a8;
  *(undefined4 *)(param_2 + 0x78) = local_5b8;
  *(undefined4 *)(param_2 + 0x7c) = uStack_5b4;
  *(undefined4 *)(param_2 + 0x80) = uStack_5b0;
  *(uint *)(param_2 + 0x84) = CONCAT13(uStack_5a9,CONCAT21(uStack_5ab,uStack_5ac));
  touch_record(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),local_2c0,local_2b8);
  uVar9 = 0;
  if (((local_1a0 != -1) && (*(longlong *)(param_2 + 0x90) != -1)) &&
     (uVar9 = 1, local_190 == *(longlong *)(param_2 + 0xa0))) {
    iVar4 = (*(code *)PTR_bcmp_00799020)();
    uVar9 = (uint)(iVar4 != 0);
  }
  uVar6 = persist(param_2);
  if (((uVar6 != 0) && (1 < ((uint)uVar6 & 3) - 2)) && ((uVar6 & 3) != 0)) {
    lVar5 = uVar6 - 1;
    uStack_540 = (undefined4)lVar5;
    uStack_53c = (undefined1)((ulonglong)lVar5 >> 0x20);
    uStack_53b = (undefined2)((ulonglong)lVar5 >> 0x28);
    uStack_539 = (undefined1)((ulonglong)lVar5 >> 0x38);
    local_548 = '\x03';
    (*(code *)PTR_drop_00799040)();
  }
  local_590 = 0;
  local_580 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)((longlong)plVar7 + 3) = 0x64656d75;
    *(undefined4 *)plVar7 = 0x75736572;
    local_5d0 = 7;
    local_5c0 = 7;
    local_548 = '\x01';
    uStack_547 = 1;
    local_5c8 = plVar7;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_5b8,&local_590,&local_5d0,&local_548);
    if ((char)local_5b8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_5b8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)((longlong)plVar7 + 7) = 0x64695f6e6f697461;
      *plVar7 = 0x61737265766e6f63;
      local_5d0 = 0xf;
      local_5c0 = 0xf;
      local_5c8 = plVar7;
      if (local_2b8 < 0) {
LAB_00523781:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00524072;
      }
      if (local_2b8 == 0) {
        lVar5 = 1;
      }
      else {
        local_598 = (undefined1 *)CONCAT44(local_598._4_4_,uVar9);
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar5 == 0) goto LAB_00523781;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,local_2b8);
        uVar9 = (uint)local_598;
      }
      local_548 = '\x03';
      uStack_540 = (undefined4)local_2b8;
      uStack_53c = (undefined1)((ulonglong)local_2b8 >> 0x20);
      uStack_53b = (undefined2)((ulonglong)local_2b8 >> 0x28);
      uStack_539 = (undefined1)((ulonglong)local_2b8 >> 0x38);
      uStack_538 = (undefined4)lVar5;
      uStack_534 = (undefined4)((ulonglong)lVar5 >> 0x20);
      uStack_52c = (undefined4)((ulonglong)local_2b8 >> 0x20);
      uStack_530 = uStack_540;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_5b8,&local_590,&local_5d0,&local_548);
      if ((char)local_5b8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_5b8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar11 = 10;
      plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0x5f746e756f636361;
        *(undefined2 *)(plVar7 + 1) = 0x6469;
        local_5d0 = 10;
        local_5c0 = 10;
        local_5c8 = plVar7;
        if (local_1b8 == -1) {
          cVar10 = '\0';
        }
        else {
          if (local_1a8 < 0) {
LAB_005238da:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_00524072;
          }
          cVar10 = '\x03';
          if (local_1a8 == 0) {
            lVar5 = 1;
            lVar11 = 0;
          }
          else {
            local_578 = local_1b0;
            local_598 = param_1;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar5 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar5 == 0) goto LAB_005238da;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,local_1a8);
            param_1 = local_598;
            lVar11 = local_1a8;
          }
        }
        uStack_540 = (undefined4)lVar11;
        uStack_53c = (undefined1)((ulonglong)lVar11 >> 0x20);
        uStack_53b = (undefined2)((ulonglong)lVar11 >> 0x28);
        uStack_539 = (undefined1)((ulonglong)lVar11 >> 0x38);
        uStack_538 = (undefined4)lVar5;
        uStack_534 = (undefined4)((ulonglong)lVar5 >> 0x20);
        uStack_52c = (undefined4)((ulonglong)lVar11 >> 0x20);
        local_548 = cVar10;
        uStack_530 = uStack_540;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_5b8,&local_590,&local_5d0,&local_548);
        if ((char)local_5b8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_5b8);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar11 = 0x16;
        plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
        uVar3 = anon_ec7f14c74815bf4c93b295cfd0665412_37_llvm_7806621557641746444._12_4_;
        uVar2 = anon_ec7f14c74815bf4c93b295cfd0665412_37_llvm_7806621557641746444._8_4_;
        uVar12 = anon_ec7f14c74815bf4c93b295cfd0665412_37_llvm_7806621557641746444._4_4_;
        if (plVar7 != (longlong *)0x0) {
          *(undefined4 *)plVar7 =
               anon_ec7f14c74815bf4c93b295cfd0665412_37_llvm_7806621557641746444._0_4_;
          *(undefined4 *)((longlong)plVar7 + 4) = uVar12;
          *(undefined4 *)(plVar7 + 1) = uVar2;
          *(undefined4 *)((longlong)plVar7 + 0xc) = uVar3;
          *(undefined8 *)((longlong)plVar7 + 0xe) = 0x64695f6e6f697461;
          local_5d0 = 0x16;
          local_5c0 = 0x16;
          local_5c8 = plVar7;
          if (local_1a0 == -1) {
            cVar10 = '\0';
          }
          else {
            if (local_190 < 0) {
LAB_00523a07:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00524072;
            }
            cVar10 = '\x03';
            if (local_190 == 0) {
              lVar5 = 1;
              lVar11 = 0;
            }
            else {
              local_578 = local_198;
              local_598 = param_1;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              lVar5 = (*(code *)PTR___rust_alloc_00799000)();
              if (lVar5 == 0) goto LAB_00523a07;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,local_190);
              param_1 = local_598;
              lVar11 = local_190;
            }
          }
          uStack_540 = (undefined4)lVar11;
          uStack_53c = (undefined1)((ulonglong)lVar11 >> 0x20);
          uStack_53b = (undefined2)((ulonglong)lVar11 >> 0x28);
          uStack_539 = (undefined1)((ulonglong)lVar11 >> 0x38);
          uStack_538 = (undefined4)lVar5;
          uStack_534 = (undefined4)((ulonglong)lVar5 >> 0x20);
          uStack_52c = (undefined4)((ulonglong)lVar11 >> 0x20);
          local_548 = cVar10;
          uStack_530 = uStack_540;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_5b8,&local_590,&local_5d0,&local_548);
          if ((char)local_5b8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_5b8);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
          if (plVar7 != (longlong *)0x0) {
            *plVar7 = 0x756f635f6e727574;
            *(undefined2 *)(plVar7 + 1) = 0x746e;
            local_5d0 = 10;
            local_5c0 = 10;
            local_548 = '\x02';
            uStack_540 = 0;
            uStack_53c = 0;
            uStack_53b = 0;
            uStack_539 = 0;
            uStack_538 = (undefined4)local_60;
            uStack_534 = (undefined4)((ulonglong)local_60 >> 0x20);
            local_5c8 = plVar7;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_5b8,&local_590,&local_5d0,&local_548);
            if ((char)local_5b8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_5b8);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
            if (plVar7 != (longlong *)0x0) {
              *(undefined2 *)((longlong)plVar7 + 4) = 0x7375;
              *(undefined4 *)plVar7 = 0x74617473;
              local_5d0 = 6;
              local_5c0 = 6;
              local_5c8 = plVar7;
              <craggemini_core[66f3c71560d70857]::resume::ConversationStatus_as_serde_core[48776c27239fa21f]::ser::Serialize>
              ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                        (&local_548,local_4e);
              if (local_548 == -1) {
                local_5b8 = uStack_540;
                uStack_5b4 = (undefined4)
                             (CONCAT17(uStack_539,
                                       CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540))) >> 0x20
                             );
                (*(code *)PTR_unwrap_failed_00799028)
                          (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078d6f8,&local_5b8,
                           &PTR_s_src_resume_rs_0078d7a0);
                goto LAB_00524072;
              }
              local_5b8 = CONCAT22(uStack_546,CONCAT11(uStack_547,local_548));
              local_5a8 = CONCAT44(uStack_534,uStack_538);
              uStack_5a0 = uStack_530;
              uStack_59c = uStack_52c;
              uStack_5b4 = uStack_544;
              uStack_5b0 = uStack_540;
              uStack_5ac = uStack_53c;
              uStack_5ab = uStack_53b;
              uStack_5a9 = uStack_539;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_548,&local_590,&local_5d0,&local_5b8);
              if (local_548 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_548);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
              if (plVar7 != (longlong *)0x0) {
                *(undefined8 *)((longlong)plVar7 + 6) = 0x7475635f656d7573;
                *plVar7 = 0x757365725f736168;
                local_5d0 = 0xe;
                local_5c0 = 0xe;
                uStack_547 = local_170 != -1;
                local_548 = '\x01';
                local_5c8 = plVar7;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_5b8,&local_590,&local_5d0,&local_548);
                if ((char)local_5b8 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_5b8);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
                uVar3 = _UNK_0019b66f;
                uVar2 = _UNK_0019b66b;
                uVar12 = _UNK_0019b667;
                if (plVar7 != (longlong *)0x0) {
                  *(undefined4 *)plVar7 = _DAT_0019b663;
                  *(undefined4 *)((longlong)plVar7 + 4) = uVar12;
                  *(undefined4 *)(plVar7 + 1) = uVar2;
                  *(undefined4 *)((longlong)plVar7 + 0xc) = uVar3;
                  *(undefined2 *)(plVar7 + 2) = 0x6863;
                  local_5d0 = 0x12;
                  local_5c0 = 0x12;
                  local_548 = '\x01';
                  uStack_547 = (undefined1)uVar9;
                  local_5c8 = plVar7;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_5b8,&local_590,&local_5d0,&local_548);
                  if ((char)local_5b8 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_5b8);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  plVar7 = (longlong *)&DAT_0000000f;
                  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar8 != (undefined8 *)0x0) {
                    *(undefined8 *)((longlong)puVar8 + 7) = 0x736772615f656d75;
                    *puVar8 = 0x757365725f696c63;
                    local_560 = 0xf;
                    local_550 = 0xf;
                    local_558 = puVar8;
                    if (local_1a0 == -1) {
                      local_5d0 = 0xffffffffffffffff;
                      local_548 = '\0';
LAB_00523ee4:
                      local_5a8 = CONCAT44(uStack_534,uStack_538);
                      uStack_5a0 = uStack_530;
                      uStack_59c = uStack_52c;
                      local_5b8 = CONCAT31(CONCAT21(uStack_546,uStack_547),local_548);
                      uStack_5b0 = uStack_540;
                      uStack_5ac = uStack_53c;
                      uStack_5ab = uStack_53b;
                      uStack_5a9 = uStack_539;
                      uVar12 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                               ::insert(&local_548,&local_590,&local_560,&local_5b8);
                      if (local_548 != -1) {
                        uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                 <serde_json[dc3825464c436029]::value::Value>(&local_548);
                      }
                      if (local_1a0 != -1) {
                        if (*plVar7 != 0) {
                          uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                        }
                        if (plVar7[3] != 0) {
                          uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
                        }
                        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
                      }
                      uStack_544._3_1_ = (undefined1)local_590;
                      uStack_540 = (undefined4)((ulonglong)local_590 >> 8);
                      uStack_53c = (undefined1)((ulonglong)local_590 >> 0x28);
                      uStack_53b = (undefined2)((ulonglong)local_590 >> 0x30);
                      uStack_539 = (undefined1)uStack_588;
                      uStack_538 = (undefined4)((ulonglong)uStack_588 >> 8);
                      uStack_534._0_3_ = (undefined3)((ulonglong)uStack_588 >> 0x28);
                      uStack_534._3_1_ = (undefined1)local_580;
                      uStack_530 = (undefined4)((ulonglong)local_580 >> 8);
                      uStack_52c._0_3_ = (undefined3)((ulonglong)local_580 >> 0x28);
                      *param_1 = 5;
                      *(uint *)(param_1 + 1) = CONCAT22(uStack_546,CONCAT11(uStack_547,local_548));
                      *(undefined4 *)(param_1 + 5) = uStack_544;
                      *(undefined4 *)(param_1 + 9) = uStack_540;
                      *(uint *)(param_1 + 0xd) =
                           CONCAT13(uStack_539,(int3)((ulonglong)local_590 >> 0x28));
                      *(undefined8 *)(param_1 + 0x10) = uStack_588;
                      *(undefined8 *)(param_1 + 0x18) = local_580;
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>(local_2c8);
                      return param_1;
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
                    if (plVar7 == (longlong *)0x0) {
                      (*(code *)PTR_handle_alloc_error_007991d8)();
                    }
                    else {
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                      if (puVar8 == (undefined8 *)0x0) {
                        (*(code *)PTR_handle_error_00798ff0)();
                      }
                      else {
                        *(undefined8 *)((longlong)puVar8 + 6) = 0x6e6f697461737265;
                        *puVar8 = 0x7265766e6f632d2d;
                        (*(code *)PTR_clone_00798fd0)();
                        *plVar7 = 0xe;
                        plVar7[1] = (longlong)puVar8;
                        plVar7[2] = 0xe;
                        plVar7[5] = CONCAT44(uStack_534,uStack_538);
                        *(uint *)(plVar7 + 3) = CONCAT22(uStack_546,CONCAT11(uStack_547,local_548));
                        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_544;
                        *(undefined4 *)(plVar7 + 4) = uStack_540;
                        *(uint *)((longlong)plVar7 + 0x24) =
                             CONCAT13(uStack_539,CONCAT21(uStack_53b,uStack_53c));
                        local_5d0 = 2;
                        local_5c0 = 2;
                        local_5c8 = plVar7;
                        <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
                        ::collect_seq::
                        <&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                                  (&local_548,&local_5d0);
                        if (local_548 != -1) goto LAB_00523ee4;
                        local_5b8 = uStack_540;
                        uStack_5b4 = (undefined4)
                                     (CONCAT17(uStack_539,
                                               CONCAT25(uStack_53b,CONCAT14(uStack_53c,uStack_540)))
                                     >> 0x20);
                        (*(code *)PTR_unwrap_failed_00799028)
                                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078d6f8,
                                   &local_5b8,&PTR_s_src_resume_rs_0078d7a0);
                      }
                    }
                    goto LAB_00524072;
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
LAB_00524072:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


