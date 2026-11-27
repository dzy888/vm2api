// 005ddc10 acp_terminal_to_gemini_sse

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::acp_backend::acp_terminal_to_gemini_sse */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::acp_terminal_to_gemini_sse
          (undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_148;
  undefined6 uStack_147;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined *local_108;
  undefined8 local_f0 [2];
  undefined8 local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar7 = 4;
  pcVar6 = "STOP";
  if (param_2 != (longlong *)0x0) {
    switch(param_3) {
    case 4:
      break;
    case 6:
      if (*(short *)((longlong)param_2 + 4) == 0x6874 && (int)*param_2 == 0x676e656c) {
        uVar7 = 10;
        pcVar6 = &DAT_0019e8c6;
      }
      else if (*(short *)((longlong)param_2 + 4) == 0x7974 && (int)*param_2 == 0x65666173)
      goto LAB_005ddd2f;
      break;
    case 7:
      if (*(int *)((longlong)param_2 + 3) == 0x6c617375 && (int)*param_2 == 0x75666572) {
LAB_005dddcc:
        *param_1 = 0xffffffffffffffff;
        return param_1;
      }
      break;
    case 8:
      break;
    case 9:
      if ((char)param_2[1] == 'd' && *param_2 == 0x656c6c65636e6163) goto LAB_005dddcc;
      break;
    case 10:
      if ((short)param_2[1] != 0x736c || *param_2 != 0x6c61635f6c6f6f74) {
        if ((short)param_2[1] == 0x736e && *param_2 == 0x656b6f745f78616d) {
          pcVar6 = &DAT_0019e8c6;
        }
        else {
          if ((short)param_2[1] != 0x6e6f || *param_2 != 0x6974617469636572) break;
          pcVar6 = &DAT_0019e8b6;
        }
        uVar7 = 10;
      }
      break;
    case 0xe:
      if (*(longlong *)((longlong)param_2 + 6) == 0x7265746c69665f74 &&
          *param_2 == 0x5f746e65746e6f63) {
LAB_005ddd2f:
        uVar7 = 6;
        pcVar6 = &DAT_0019e8c0;
      }
      break;
    case 0x12:
      auVar8[0] = -((char)*param_2 == DAT_00183c70);
      auVar8[1] = -(*(char *)((longlong)param_2 + 1) == UNK_00183c71);
      auVar8[2] = -(*(char *)((longlong)param_2 + 2) == UNK_00183c72);
      auVar8[3] = -(*(char *)((longlong)param_2 + 3) == UNK_00183c73);
      auVar8[4] = -(*(char *)((longlong)param_2 + 4) == UNK_00183c74);
      auVar8[5] = -(*(char *)((longlong)param_2 + 5) == UNK_00183c75);
      auVar8[6] = -(*(char *)((longlong)param_2 + 6) == UNK_00183c76);
      auVar8[7] = -(*(char *)((longlong)param_2 + 7) == UNK_00183c77);
      auVar8[8] = -((char)param_2[1] == UNK_00183c78);
      auVar8[9] = -(*(char *)((longlong)param_2 + 9) == UNK_00183c79);
      auVar8[10] = -(*(char *)((longlong)param_2 + 10) == UNK_00183c7a);
      auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_00183c7b);
      auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_00183c7c);
      auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_00183c7d);
      auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_00183c7e);
      auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_00183c7f);
      auVar9[0] = -((char)param_2[2] == DAT_00183dc0);
      auVar9[1] = -((char)((ulonglong)param_2[2] >> 8) == UNK_00183dc1);
      auVar9[2] = -(UNK_00183dc2 == '\0');
      auVar9[3] = -(UNK_00183dc3 == '\0');
      auVar9[4] = -(UNK_00183dc4 == '\0');
      auVar9[5] = -(UNK_00183dc5 == '\0');
      auVar9[6] = -(UNK_00183dc6 == '\0');
      auVar9[7] = -(UNK_00183dc7 == '\0');
      auVar9[8] = -(UNK_00183dc8 == '\0');
      auVar9[9] = -(UNK_00183dc9 == '\0');
      auVar9[10] = -(UNK_00183dca == '\0');
      auVar9[0xb] = -(UNK_00183dcb == '\0');
      auVar9[0xc] = -(UNK_00183dcc == '\0');
      auVar9[0xd] = -(UNK_00183dcd == '\0');
      auVar9[0xe] = -(UNK_00183dce == '\0');
      auVar9[0xf] = -(UNK_00183dcf == '\0');
      auVar9 = auVar9 & auVar8;
      if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
        uVar7 = 0x12;
        pcVar6 = &DAT_0019e8a4;
      }
    }
  }
  local_d8[0] = 0;
  local_c8 = 0;
  local_a0 = param_4;
  local_98 = param_1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005de65e;
  }
  *puVar2 = 0x74616469646e6163;
  *(undefined2 *)(puVar2 + 1) = 0x7365;
  local_90 = 10;
  local_80 = 10;
  local_88 = puVar2;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    goto LAB_005de65e;
  }
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = pcVar6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar4 == (undefined4 *)0x0) {
LAB_005de61c:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005de65e;
  }
  *(undefined4 *)((longlong)puVar4 + 3) = 0x746e6574;
  *puVar4 = 0x746e6f63;
  local_78 = 7;
  local_68 = 7;
  local_f0[0] = 0;
  local_e0 = 0;
  local_70 = puVar4;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcVar6 != (char *)0x0) {
    builtin_strncpy(pcVar6,"role",4);
    local_128 = 4;
    local_118 = 4;
    local_120 = pcVar6;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar4 == (undefined4 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005de65e;
    }
    *(undefined1 *)(puVar4 + 1) = 0x6c;
    *puVar4 = 0x65646f6d;
    local_148 = 3;
    uStack_140 = 5;
    uStack_139 = 0;
    uStack_138 = SUB87(puVar4,0);
    uStack_131 = (undefined1)((ulonglong)puVar4 >> 0x38);
    uStack_130 = 5;
    uStack_129 = 0;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_110,local_f0,&local_128,&local_148);
    if ((char)local_110 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_110);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar6 != (char *)0x0) {
      builtin_strncpy(pcVar6,"parts",5);
      local_128 = 5;
      local_118 = 5;
      uStack_140 = 0;
      uStack_139 = 0;
      uStack_138 = 8;
      uStack_131 = 0;
      uStack_130 = 0;
      uStack_129 = 0;
      local_148 = 4;
      local_120 = pcVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_110,local_f0,&local_128,&local_148);
      if ((char)local_110 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_110);
      }
      uStack_140 = (undefined7)local_f0[0];
      uStack_139 = (undefined1)((ulonglong)local_f0[0] >> 0x38);
      uStack_138 = (undefined7)local_f0[1];
      uStack_131 = (undefined1)((ulonglong)local_f0[1] >> 0x38);
      uStack_130 = (undefined7)local_e0;
      uStack_129 = (undefined1)((ulonglong)local_e0 >> 0x38);
      local_148 = 5;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_110,&local_c0,&local_78,&local_148);
      if ((char)local_110 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_110);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar6 == (char *)0x0) goto LAB_005de61c;
      builtin_strncpy(pcVar6,"finishReason",0xc);
      local_128 = 0xc;
      local_118 = 0xc;
      local_120 = pcVar6;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar5 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar5 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_005de65e;
      }
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,uVar7);
      local_148 = 3;
      uStack_140 = (undefined7)uVar7;
      uStack_139 = 0;
      uStack_138 = (undefined7)lVar5;
      uStack_131 = (undefined1)((ulonglong)lVar5 >> 0x38);
      uStack_130 = uStack_140;
      uStack_129 = uStack_139;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_110,&local_c0,&local_128,&local_148);
      if ((char)local_110 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_110);
      }
      uStack_141 = (undefined1)local_c0;
      uStack_140 = (undefined7)((ulonglong)local_c0 >> 8);
      uStack_139 = (undefined1)uStack_b8;
      *puVar3 = 5;
      *(undefined8 *)(puVar3 + 0x10) = uStack_b8;
      *(undefined8 *)(puVar3 + 0x18) = local_b0;
      *(ulonglong *)(puVar3 + 1) = CONCAT17(uStack_141,CONCAT61(uStack_147,local_148));
      *(ulonglong *)(puVar3 + 9) = CONCAT17(uStack_139,uStack_140);
      uStack_140 = 1;
      uStack_139 = 0;
      uStack_138 = SUB87(puVar3,0);
      uStack_131 = (undefined1)((ulonglong)puVar3 >> 0x38);
      uStack_130 = 1;
      uStack_129 = 0;
      local_148 = 4;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_110,local_d8,&local_90,&local_148);
      puVar2 = local_a0;
      if ((char)local_110 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_110);
      }
      if (puVar2 == (undefined8 *)0x0) goto LAB_005de566;
      local_f0[0] = 0;
      local_e0 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar7 = s_promptTokenCount_00183710._8_8_;
      if (pcVar6 != (char *)0x0) {
        *(undefined8 *)pcVar6 = s_promptTokenCount_00183710._0_8_;
        *(undefined8 *)(pcVar6 + 8) = uVar7;
        local_128 = 0x10;
        local_118 = 0x10;
        local_148 = 2;
        uStack_140 = 0;
        uStack_139 = 0;
        uStack_138 = (undefined7)*puVar2;
        uStack_131 = (undefined1)((ulonglong)*puVar2 >> 0x38);
        local_120 = pcVar6;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_110,local_f0,&local_128,&local_148);
        if ((char)local_110 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_110);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        uVar7 = _UNK_0019e8e4;
        if (pcVar6 != (char *)0x0) {
          *(undefined8 *)pcVar6 = _DAT_0019e8dc;
          *(undefined8 *)(pcVar6 + 8) = uVar7;
          pcVar6[0x10] = 'o';
          pcVar6[0x11] = 'u';
          pcVar6[0x12] = 'n';
          pcVar6[0x13] = 't';
          local_128 = 0x14;
          local_118 = 0x14;
          local_148 = 2;
          uStack_140 = 0;
          uStack_139 = 0;
          uStack_138 = (undefined7)puVar2[1];
          uStack_131 = (undefined1)((ulonglong)puVar2[1] >> 0x38);
          local_120 = pcVar6;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_110,local_f0,&local_128,&local_148);
          if ((char)local_110 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_110);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar6 != (char *)0x0) {
            builtin_strncpy(pcVar6,"totalTokenCount",0xf);
            local_128 = 0xf;
            local_118 = 0xf;
            local_148 = 2;
            uStack_140 = 0;
            uStack_139 = 0;
            uStack_138 = (undefined7)puVar2[4];
            uStack_131 = (undefined1)((ulonglong)puVar2[4] >> 0x38);
            local_120 = pcVar6;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_110,local_f0,&local_128,&local_148);
            if ((char)local_110 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_110);
            }
            lVar5 = puVar2[3];
            if (lVar5 != 0) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              uVar7 = _UNK_0019e8f8;
              if (pcVar6 == (char *)0x0) goto LAB_005de5fc;
              *(undefined8 *)pcVar6 = _DAT_0019e8f0;
              *(undefined8 *)(pcVar6 + 8) = uVar7;
              pcVar6[0x10] = 'n';
              pcVar6[0x11] = 't';
              local_128 = 0x12;
              local_118 = 0x12;
              local_148 = 2;
              uStack_140 = 0;
              uStack_139 = 0;
              uStack_138 = (undefined7)lVar5;
              uStack_131 = (undefined1)((ulonglong)lVar5 >> 0x38);
              local_120 = pcVar6;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_110,local_f0,&local_128,&local_148);
              if ((char)local_110 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_110);
              }
            }
            lVar5 = puVar2[2];
            if (lVar5 != 0) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              uVar7 = _UNK_0019e90a;
              if (pcVar6 == (char *)0x0) goto LAB_005de5fc;
              *(undefined8 *)pcVar6 = _DAT_0019e902;
              *(undefined8 *)(pcVar6 + 8) = uVar7;
              pcVar6[0xf] = 'k';
              pcVar6[0x10] = 'e';
              pcVar6[0x11] = 'n';
              pcVar6[0x12] = 'C';
              pcVar6[0x13] = 'o';
              pcVar6[0x14] = 'u';
              pcVar6[0x15] = 'n';
              pcVar6[0x16] = 't';
              local_128 = 0x17;
              local_118 = 0x17;
              local_148 = 2;
              uStack_140 = 0;
              uStack_139 = 0;
              uStack_138 = (undefined7)lVar5;
              uStack_131 = (undefined1)((ulonglong)lVar5 >> 0x38);
              local_120 = pcVar6;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_110,local_f0,&local_128,&local_148);
              if ((char)local_110 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_110);
              }
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar6 != (char *)0x0) {
              builtin_strncpy(pcVar6,"usageMetadata",0xd);
              local_128 = 0xd;
              local_118 = 0xd;
              uStack_130 = (undefined7)local_e0;
              uStack_129 = (undefined1)((ulonglong)local_e0 >> 0x38);
              uStack_140 = (undefined7)local_f0[0];
              uStack_139 = (undefined1)((ulonglong)local_f0[0] >> 0x38);
              uStack_138 = (undefined7)local_f0[1];
              uStack_131 = (undefined1)((ulonglong)local_f0[1] >> 0x38);
              local_148 = 5;
              local_120 = pcVar6;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_110,local_d8,&local_128,&local_148);
              if ((char)local_110 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_110);
              }
LAB_005de566:
              uStack_130 = (undefined7)local_c8;
              uStack_129 = (undefined1)((ulonglong)local_c8 >> 0x38);
              uStack_140 = (undefined7)local_d8[0];
              uStack_139 = (undefined1)((ulonglong)local_d8[0] >> 0x38);
              uStack_138 = (undefined7)local_d8[1];
              uStack_131 = (undefined1)((ulonglong)local_d8[1] >> 0x38);
              local_148 = 5;
              local_108 = PTR_fmt_00799758;
              local_110 = &local_148;
              (*(code *)PTR_format_inner_00799048)(local_d8[0],&local_110);
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_148,&DAT_00186728);
              local_98[2] = local_50;
              *local_98 = local_60;
              local_98[1] = uStack_58;
              return local_98;
            }
          }
        }
      }
LAB_005de5fc:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005de65e;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005de65e:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


