// 004af0d0 account_summary

/* <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::account_summary */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::account_summary
          (undefined1 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
          ulonglong param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  char cVar15;
  undefined1 (*pauVar16) [16];
  undefined1 *puVar17;
  undefined1 (*pauVar18) [16];
  longlong lVar19;
  bool bVar20;
  byte bVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char local_148;
  undefined1 uStack_147;
  undefined6 uStack_146;
  longlong lStack_140;
  ulonglong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  ulonglong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 *puStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  if (*(longlong *)(param_2 + 0x30) != 0) {
    local_d0 = param_1;
    uVar8 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_2 + 0x38,param_3,param_4);
    puVar5 = PTR_bcmp_00799020;
    lVar11 = *(longlong *)(param_2 + 0x18);
    uVar12 = *(ulonglong *)(param_2 + 0x20);
    bVar21 = (byte)(uVar8 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar23 = pshuflw(auVar22,auVar22,0);
    auVar22._0_8_ = auVar23._0_8_;
    auVar22._8_4_ = auVar23._0_4_;
    auVar22._12_4_ = auVar23._4_4_;
    lVar19 = 0;
    while( true ) {
      uVar8 = uVar8 & uVar12;
      auVar23 = *(undefined1 (*) [16])(lVar11 + uVar8);
      auVar24[0] = -(auVar23[0] == auVar22[0]);
      auVar24[1] = -(auVar23[1] == auVar22[1]);
      auVar24[2] = -(auVar23[2] == auVar22[2]);
      auVar24[3] = -(auVar23[3] == auVar22[3]);
      auVar24[4] = -(auVar23[4] == auVar22[4]);
      auVar24[5] = -(auVar23[5] == auVar22[5]);
      auVar24[6] = -(auVar23[6] == auVar22[6]);
      auVar24[7] = -(auVar23[7] == auVar22[7]);
      auVar24[8] = -(auVar23[8] == auVar22[8]);
      auVar24[9] = -(auVar23[9] == auVar22[9]);
      auVar24[10] = -(auVar23[10] == auVar22[10]);
      auVar24[0xb] = -(auVar23[0xb] == auVar22[0xb]);
      auVar24[0xc] = -(auVar23[0xc] == auVar22[0xc]);
      auVar24[0xd] = -(auVar23[0xd] == auVar22[0xd]);
      auVar24[0xe] = -(auVar23[0xe] == auVar22[0xe]);
      auVar24[0xf] = -(auVar23[0xf] == auVar22[0xf]);
      uVar6 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar6;
      if (uVar6 != 0) {
        local_c8 = uVar8;
        local_b8 = uVar12;
        local_b0 = param_5;
        local_a8 = lVar19;
        local_88 = auVar23;
        local_78 = auVar22;
        do {
          uVar2 = 0;
          for (uVar3 = uVar14; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          uVar12 = uVar2 + local_c8 & local_b8;
          lVar19 = lVar11 + uVar12 * -0x80;
          if ((param_4 == *(longlong *)(lVar19 + -0x70)) &&
             (iVar7 = (*(code *)puVar5)(uVar12 * 0x80,param_4), iVar7 == 0)) {
            local_60[0] = 0;
            local_50 = 0;
            lVar11 = *(longlong *)(lVar19 + -0x20);
            local_c0 = lVar19;
            if (lVar11 == 0) goto LAB_004af846;
            pauVar18 = *(undefined1 (**) [16])(lVar19 + -0x38);
            auVar22 = *pauVar18;
            uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
            pauVar16 = pauVar18 + 1;
            uVar12 = local_b0;
            goto LAB_004af510;
          }
          uVar6 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar6);
          uVar8 = local_c8;
          lVar19 = local_a8;
          uVar12 = local_b8;
          param_5 = local_b0;
          auVar22 = local_78;
          auVar23 = local_88;
        } while (uVar6 != 0);
      }
      auVar25[0] = -(auVar23[0] == -1);
      auVar25[1] = -(auVar23[1] == -1);
      auVar25[2] = -(auVar23[2] == -1);
      auVar25[3] = -(auVar23[3] == -1);
      auVar25[4] = -(auVar23[4] == -1);
      auVar25[5] = -(auVar23[5] == -1);
      auVar25[6] = -(auVar23[6] == -1);
      auVar25[7] = -(auVar23[7] == -1);
      auVar25[8] = -(auVar23[8] == -1);
      auVar25[9] = -(auVar23[9] == -1);
      auVar25[10] = -(auVar23[10] == -1);
      auVar25[0xb] = -(auVar23[0xb] == -1);
      auVar25[0xc] = -(auVar23[0xc] == -1);
      auVar25[0xd] = -(auVar23[0xd] == -1);
      auVar25[0xe] = -(auVar23[0xe] == -1);
      auVar25[0xf] = -(auVar23[0xf] == -1);
      param_1 = local_d0;
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar8 = uVar8 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
  local_108 = 0;
  local_f8 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar4 = anon_572fb51faa0db1e51baf8d00d92dd3e9_64_llvm_7677212527096675952._8_8_;
  if (pcVar9 != (char *)0x0) {
    *(undefined8 *)pcVar9 = anon_572fb51faa0db1e51baf8d00d92dd3e9_64_llvm_7677212527096675952._0_8_;
    *(undefined8 *)(pcVar9 + 8) = uVar4;
    pcVar9[0xf] = 'i';
    pcVar9[0x10] = 'r';
    pcVar9[0x11] = 'e';
    pcVar9[0x12] = 'd';
    local_f0 = 0x13;
    uStack_e0 = 0x13;
    local_148 = '\x01';
    uStack_147 = 0;
    local_e8 = pcVar9;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_128,&local_108,&local_f0,&local_148);
    if ((char)local_128 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_128);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar9 != (char *)0x0) {
      builtin_strncpy(pcVar9,"validation_url",0xe);
      local_f0 = 0xe;
      uStack_e0 = 0xe;
      local_e8 = pcVar9;
      <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_148,"");
      if (local_148 == -1) {
        local_128 = lStack_140;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_128,
                   &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b7a8);
        goto LAB_004afcd4;
      }
      local_128 = CONCAT62(uStack_146,CONCAT11(uStack_147,local_148));
      local_118 = local_138;
      lStack_110 = lStack_130;
      lStack_120 = lStack_140;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_108,&local_f0,&local_128);
      if (local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar4 = anon_572fb51faa0db1e51baf8d00d92dd3e9_77_llvm_7677212527096675952._8_8_;
      if (pcVar9 != (char *)0x0) {
        *(undefined8 *)pcVar9 =
             anon_572fb51faa0db1e51baf8d00d92dd3e9_77_llvm_7677212527096675952._0_8_;
        *(undefined8 *)(pcVar9 + 8) = uVar4;
        pcVar9[0x10] = 'r';
        pcVar9[0x11] = 'r';
        pcVar9[0x12] = 'o';
        pcVar9[0x13] = 'r';
        local_f0 = 0x14;
        uStack_e0 = 0x14;
        local_e8 = pcVar9;
        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_148,"");
        if (local_148 == -1) {
          local_128 = lStack_140;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_128,
                     &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b7a8)
          ;
          goto LAB_004afcd4;
        }
        local_128 = CONCAT62(uStack_146,CONCAT11(uStack_147,local_148));
        local_118 = local_138;
        lStack_110 = lStack_130;
        lStack_120 = lStack_140;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_148,&local_108,&local_f0,&local_128);
        if (local_148 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_148);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0x7365696c696d6166;
          local_f0 = 8;
          uStack_e0 = 8;
          lStack_140 = 0;
          lStack_130 = 0;
          local_148 = '\x05';
          local_e8 = (char *)puVar10;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_128,&local_108,&local_f0,&local_148);
          if ((char)local_128 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_128);
          }
          *(undefined8 *)(param_1 + 0x18) = local_f8;
          *(undefined8 *)(param_1 + 8) = local_108;
          *(undefined8 **)(param_1 + 0x10) = puStack_100;
          *param_1 = 5;
          return;
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
  goto LAB_004afcd4;
LAB_004af510:
  do {
    if ((short)uVar14 == 0) {
      do {
        auVar22 = *pauVar16;
        pauVar18 = pauVar18 + -0x20;
        pauVar16 = pauVar16 + 1;
        uVar14 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar14 == 0);
    }
    iVar7 = 0;
    for (uVar2 = uVar14; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
      iVar7 = iVar7 + 1;
    }
    uVar13 = (longlong)pauVar18 - (ulonglong)(uint)(iVar7 << 5);
    uVar8 = *(ulonglong *)(uVar13 - 0x18);
    lVar19 = uVar8 - uVar12;
    bVar20 = lVar19 != 0;
    if (uVar8 < uVar12) {
      lVar19 = 0;
    }
    if (uVar8 >= uVar12 && bVar20) {
      local_78._0_8_ = lVar19;
      uVar12 = *(ulonglong *)(&DAT_0018ce20 + (ulonglong)*(byte *)(uVar13 - 0x20) * 8);
      local_c8 = uVar13;
      local_a8 = lVar11;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar11 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar11 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
      }
      else {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,uVar12);
        local_88._0_8_ = lVar11;
        local_a0 = (char *)0x0;
        local_90 = 0;
        local_b8 = uVar12;
        local_48 = uVar12;
        local_40 = lVar11;
        local_38 = uVar12;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = 0x6e696e69616d6572;
          *(undefined4 *)(puVar10 + 1) = 0x736d5f67;
          local_108 = 0xc;
          local_f8 = 0xc;
          local_148 = '\x02';
          lStack_140 = 0;
          local_138 = local_78._0_8_;
          puStack_100 = puVar10;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_128,&local_a0,&local_108,&local_148);
          puVar5 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
          if ((char)local_128 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_128);
          }
          (*(code *)puVar5)();
          puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0x74756365736e6f63;
            *(undefined4 *)((longlong)puVar10 + 7) = 0x65766974;
            local_108 = 0xb;
            local_f8 = 0xb;
            local_138 = (ulonglong)*(uint *)(local_c8 - 8);
            local_148 = '\x02';
            lStack_140 = 0;
            puStack_100 = puVar10;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_128,&local_a0,&local_108,&local_148);
            puVar5 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
            if ((char)local_128 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_128);
            }
            (*(code *)puVar5)();
            puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar10 != (undefined8 *)0x0) {
              *(undefined4 *)puVar10 = 0x646e696b;
              local_108 = 4;
              local_f8 = 4;
              puStack_100 = puVar10;
              <craggemini_core[66f3c71560d70857]::pool::CooldownKind_as_serde_core[48776c27239fa21f]::ser::Serialize>
              ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                        (&local_148,local_c8 - 4);
              if (local_148 != -1) {
                local_128 = CONCAT62(uStack_146,CONCAT11(uStack_147,local_148));
                local_118 = local_138;
                lStack_110 = lStack_130;
                lStack_120 = lStack_140;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_148,&local_a0,&local_108,&local_128);
                if (local_148 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_148);
                }
                local_d8 = local_90;
                local_e8 = local_a0;
                uStack_e0 = uStack_98;
                local_f0 = CONCAT71(local_f0._1_7_,5);
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_148,local_60,&local_48,&local_f0);
                lVar11 = local_a8;
                uVar12 = local_b0;
                if (local_148 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_148);
                }
                goto LAB_004af500;
              }
              local_128 = lStack_140;
              (*(code *)PTR_unwrap_failed_00799028)
                        (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_128,
                         &
                         PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b790
                        );
              goto LAB_004afcd4;
            }
          }
        }
        (*(code *)PTR_handle_error_00798ff0)();
      }
      goto LAB_004afcd4;
    }
LAB_004af500:
    uVar14 = uVar14 - 1 & uVar14;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
LAB_004af846:
  uVar12 = 0;
  local_108 = 0;
  local_f8 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  lVar11 = local_c0;
  puVar17 = local_d0;
  uVar4 = anon_572fb51faa0db1e51baf8d00d92dd3e9_64_llvm_7677212527096675952._8_8_;
  if (pcVar9 != (char *)0x0) {
    *(undefined8 *)pcVar9 = anon_572fb51faa0db1e51baf8d00d92dd3e9_64_llvm_7677212527096675952._0_8_;
    *(undefined8 *)(pcVar9 + 8) = uVar4;
    pcVar9[0xf] = 'i';
    pcVar9[0x10] = 'r';
    pcVar9[0x11] = 'e';
    pcVar9[0x12] = 'd';
    local_f0 = 0x13;
    uStack_e0 = 0x13;
    uStack_147 = *(undefined1 *)(local_c0 + -8);
    local_148 = '\x01';
    local_e8 = pcVar9;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_128,&local_108,&local_f0,&local_148);
    if ((char)local_128 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_128);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar19 = 0xe;
    pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar9 != (char *)0x0) {
      builtin_strncpy(pcVar9,"validation_url",0xe);
      local_f0 = 0xe;
      uStack_e0 = 0xe;
      local_e8 = pcVar9;
      if (*(longlong *)(lVar11 + -0x68) == -1) {
        local_148 = '\0';
      }
      else {
        lVar19 = *(longlong *)(lVar11 + -0x58);
        if (lVar19 < 0) {
LAB_004af954:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_004afcd4;
        }
        if (lVar19 == 0) {
          uVar12 = 1;
          lVar19 = 0;
          local_148 = '\x03';
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uVar12 = (*(code *)PTR___rust_alloc_00799000)();
          if (uVar12 == 0) goto LAB_004af954;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,lVar19);
          puVar17 = local_d0;
          lVar11 = local_c0;
          local_148 = '\x03';
        }
      }
      lStack_140 = lVar19;
      local_138 = uVar12;
      lStack_130 = lVar19;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_108,&local_f0,&local_148);
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar19 = 0x14;
      pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar4 = anon_572fb51faa0db1e51baf8d00d92dd3e9_77_llvm_7677212527096675952._8_8_;
      if (pcVar9 != (char *)0x0) {
        *(undefined8 *)pcVar9 =
             anon_572fb51faa0db1e51baf8d00d92dd3e9_77_llvm_7677212527096675952._0_8_;
        *(undefined8 *)(pcVar9 + 8) = uVar4;
        pcVar9[0x10] = 'r';
        pcVar9[0x11] = 'r';
        pcVar9[0x12] = 'o';
        pcVar9[0x13] = 'r';
        local_f0 = 0x14;
        uStack_e0 = 0x14;
        local_e8 = pcVar9;
        if (*(longlong *)(lVar11 + -0x50) == -1) {
          cVar15 = '\0';
        }
        else {
          lVar19 = *(longlong *)(lVar11 + -0x40);
          if (lVar19 < 0) {
LAB_004afa59:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_004afcd4;
          }
          cVar15 = '\x03';
          if (lVar19 == 0) {
            uVar12 = 1;
            lVar19 = 0;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            uVar12 = (*(code *)PTR___rust_alloc_00799000)();
            if (uVar12 == 0) goto LAB_004afa59;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,lVar19);
            puVar17 = local_d0;
          }
        }
        local_148 = cVar15;
        lStack_140 = lVar19;
        local_138 = uVar12;
        lStack_130 = lVar19;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_128,&local_108,&local_f0,&local_148);
        if ((char)local_128 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_128);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar9 != (char *)0x0) {
          builtin_strncpy(pcVar9,"families",8);
          local_f0 = 8;
          uStack_e0 = 8;
          local_e8 = pcVar9;
          serde_json[dc3825464c436029]::value::to_value::
          <&serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    (&local_148,local_60);
          if (local_148 != -1) {
            local_128 = CONCAT62(uStack_146,CONCAT11(uStack_147,local_148));
            local_118 = local_138;
            lStack_110 = lStack_130;
            lStack_120 = lStack_140;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_148,&local_108,&local_f0,&local_128);
            if (local_148 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_148);
            }
            *(undefined8 *)(puVar17 + 0x18) = local_f8;
            *(undefined8 *)(puVar17 + 8) = local_108;
            *(undefined8 **)(puVar17 + 0x10) = puStack_100;
            *puVar17 = 5;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
            ::drop(local_60);
            return;
          }
          local_128 = lStack_140;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078b610,&local_128,
                     &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b778)
          ;
          goto LAB_004afcd4;
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004afcd4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


