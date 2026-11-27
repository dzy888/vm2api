// 006980d0 format_gemini_error_body

/* craggemini_core[66f3c71560d70857]::multiprotocol::format_gemini_error_body */

void __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::format_gemini_error_body
          (undefined1 *param_1,char *param_2)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte bVar12;
  ushort *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined8 local_158;
  char *pcStack_150;
  undefined4 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  char *local_110;
  char *local_108;
  undefined8 uStack_100;
  char *local_f8;
  char *local_f0;
  undefined8 local_e8;
  char *local_e0;
  char *local_d0;
  int *local_c8;
  char *local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  char *local_b0;
  char *local_a8;
  char *pcStack_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  longlong *local_80;
  char *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  char *local_48;
  ulonglong local_40;
  undefined1 *local_38;
  
  local_c8 = *(int **)(param_2 + 0x30);
  local_38 = param_1;
  if (local_c8 == (int *)0x0) {
    uVar16 = *(ushort *)(param_2 + 0x38);
LAB_0069812f:
    pcVar10 = &DAT_00000007;
    pcVar9 = "UNKNOWN";
    switch(uVar16) {
    case 400:
    case 0x19d:
    case 0x1a6:
      pcVar10 = &DAT_00000010;
      pcVar9 = "INVALID_ARGUMENToken";
      break;
    case 0x191:
      pcVar10 = &DAT_0000000f;
      pcVar9 = "UNAUTHENTICATED";
      break;
    case 0x193:
      pcVar10 = &DAT_00000011;
      pcVar9 = "PERMISSION_DENIED";
    default:
      break;
    case 0x194:
      pcVar10 = &DAT_00000009;
      pcVar9 = "NOT_FOUND";
      break;
    case 0x199:
      pcVar9 = "ABORTED";
      break;
    case 0x1ad:
      pcVar10 = (char *)0x12;
      pcVar9 = "RESOURCE_EXHAUSTED";
      break;
    case 499:
      pcVar10 = &DAT_00000009;
      pcVar9 = "CANCELLED";
      break;
    case 500:
      pcVar10 = &DAT_00000008;
      pcVar9 = "INTERNAL";
      break;
    case 0x1f5:
      pcVar10 = &DAT_0000000d;
      pcVar9 = "UNIMPLEMENTED";
      break;
    case 0x1f7:
    case 0x211:
      pcVar10 = (char *)0xb;
      pcVar9 = "UNAVAILABLE";
      break;
    case 0x1f8:
      pcVar10 = &DAT_00000011;
      pcVar9 = "DEADLINE_EXCEEDED";
    }
    if (local_c8 != (int *)0x0) goto LAB_0069824e;
LAB_006982d5:
    local_a8 = (char *)0x0;
    local_98 = (char *)0x0;
LAB_006982ed:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar8 != (char *)0x0) {
      builtin_strncpy(pcVar8,"code",4);
      local_158 = 4;
      local_148 = (undefined4 *)0x4;
      uStack_100 = (char *)(ulonglong)uVar16;
      local_110 = (char *)CONCAT71(local_110._1_7_,2);
      local_108 = (char *)0x0;
      pcStack_150 = pcVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_130,&local_a8,&local_158,&local_110);
      if ((char)local_130 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_130);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 != (char *)0x0) {
        builtin_strncpy(pcVar8,"message",7);
        local_158 = 7;
        local_148 = (undefined4 *)0x7;
        pcVar1 = *(char **)(param_2 + 0x28);
        pcStack_150 = pcVar8;
        if ((longlong)pcVar1 < 0) {
LAB_006983c4:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069933c;
        }
        if (pcVar1 == (char *)0x0) {
          pcVar9 = (char *)0x1;
        }
        else {
          local_90 = pcVar9;
          local_88 = param_2;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar9 == (char *)0x0) goto LAB_006983c4;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,pcVar1);
          param_2 = local_88;
        }
        local_110 = (char *)CONCAT71(local_110._1_7_,3);
        local_108 = pcVar1;
        uStack_100 = pcVar9;
        local_f8 = pcVar1;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_130,&local_a8,&local_158,&local_110);
        if ((char)local_130 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_130);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar9 == (char *)0x0) goto LAB_006992b8;
        builtin_strncpy(pcVar9,"status",6);
        local_158 = 6;
        local_148 = (undefined4 *)0x6;
        pcStack_150 = pcVar9;
        if ((longlong)pcVar10 < 0) {
LAB_006984c9:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069933c;
        }
        if (pcVar10 == (char *)0x0) {
          pcVar9 = (char *)0x1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar9 == (char *)0x0) goto LAB_006984c9;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,pcVar10);
        }
        local_110 = (char *)CONCAT71(local_110._1_7_,3);
        local_108 = pcVar10;
        uStack_100 = pcVar9;
        local_f8 = pcVar10;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_130,&local_a8,&local_158,&local_110);
        if ((char)local_130 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_130);
        }
        plVar21 = *(longlong **)(param_2 + 8);
        pcVar9 = *(char **)(param_2 + 0x10);
        if ((&DAT_00000007 < pcVar9) && (*plVar21 == 0x5f65736e6563696c)) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar10 == (char *)0x0) goto LAB_006992b8;
          builtin_strncpy(pcVar10,"type",4);
          local_158 = 4;
          local_148 = (undefined4 *)0x4;
          pcStack_150 = pcVar10;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar10 == (char *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0069933c;
          }
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,pcVar9);
          local_110 = (char *)CONCAT71(local_110._1_7_,3);
          local_108 = pcVar9;
          uStack_100 = pcVar10;
          local_f8 = pcVar9;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_130,&local_a8,&local_158,&local_110);
          if ((char)local_130 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_130);
          }
        }
        local_80 = plVar21;
        local_48 = pcVar9;
        if (local_a8 != (char *)0x0) {
          local_90 = pcStack_a0;
          local_88 = local_a8;
          while( true ) {
            local_40 = (ulonglong)*(ushort *)(local_88 + 0x272);
            uVar14 = (ulonglong)((uint)*(ushort *)(local_88 + 0x272) * 8);
            lVar17 = uVar14 * 3;
            uVar18 = 0xffffffffffffffff;
            pcVar9 = local_88 + 0x168;
            plVar21 = (longlong *)(local_88 + -8);
            do {
              plVar20 = plVar21;
              if (lVar17 == 0) {
                uVar18 = local_40;
                goto LAB_00698714;
              }
              uVar15 = *(ulonglong *)(pcVar9 + 0x10);
              lVar22 = uVar15 - 7;
              if (6 < uVar15) {
                uVar15 = 7;
              }
              iVar7 = (*(code *)PTR_memcmp_00799528)(uVar14,uVar15);
              lVar22 = -lVar22;
              if (iVar7 != 0) {
                lVar22 = (longlong)iVar7;
              }
              bVar12 = (0 < lVar22) - (lVar22 < 0);
              uVar14 = (ulonglong)bVar12;
              plVar21 = plVar20 + 4;
              uVar18 = uVar18 + 1;
              lVar17 = lVar17 + -0x18;
              pcVar9 = pcVar9 + 0x18;
            } while (bVar12 == 1);
            if (bVar12 == 0) break;
LAB_00698714:
            if (local_90 == (char *)0x0) goto LAB_00698750;
            local_88 = *(char **)(local_88 + uVar18 * 8 + 0x278);
            local_90 = local_90 + -1;
          }
          if (((char)plVar20[1] == '\x04') && (*plVar21 != 0)) goto LAB_00699115;
        }
LAB_00698750:
        local_78 = (char *)0x0;
        local_68 = (char *)0x0;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar9 == (char *)0x0) {
LAB_006992c8:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069933c;
        }
        builtin_strncpy(pcVar9,"@type",5);
        local_158 = 5;
        local_148 = (undefined4 *)0x5;
        pcStack_150 = pcVar9;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        uVar6 = s_com_google_rpc_ErrorInfo_001a530b._8_8_;
        if (pcVar9 == (char *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069933c;
        }
        *(undefined8 *)(pcVar9 + 0x10) = s_com_google_rpc_ErrorInfo_001a530b._0_8_;
        *(undefined8 *)(pcVar9 + 0x18) = uVar6;
        uVar5 = s_type_googleapis__001a52fb._12_4_;
        uVar4 = s_type_googleapis__001a52fb._8_4_;
        uVar23 = s_type_googleapis__001a52fb._4_4_;
        *(undefined4 *)pcVar9 = s_type_googleapis__001a52fb._0_4_;
        *(undefined4 *)(pcVar9 + 4) = uVar23;
        *(undefined4 *)(pcVar9 + 8) = uVar4;
        *(undefined4 *)(pcVar9 + 0xc) = uVar5;
        pcVar9[0x20] = 'r';
        pcVar9[0x21] = 'r';
        pcVar9[0x22] = 'o';
        pcVar9[0x23] = 'r';
        pcVar9[0x24] = 'I';
        pcVar9[0x25] = 'n';
        pcVar9[0x26] = 'f';
        pcVar9[0x27] = 'o';
        local_110 = (char *)CONCAT71(local_110._1_7_,3);
        local_108 = &DAT_00000028;
        local_f8 = &DAT_00000028;
        uStack_100 = pcVar9;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_130,&local_78,&local_158,&local_110);
        if ((char)local_130 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_130);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar9 == (char *)0x0) goto LAB_006992c8;
        builtin_strncpy(pcVar9,"reason",6);
        local_158 = 6;
        local_148 = (undefined4 *)0x6;
        pcVar10 = local_48;
        if ((local_c8 != (int *)0x0) && (*(longlong *)(local_c8 + 10) != -1)) {
          local_80 = *(longlong **)(local_c8 + 0xc);
          pcVar10 = *(char **)(local_c8 + 0xe);
        }
        pcStack_150 = pcVar9;
        if ((longlong)pcVar10 < 0) {
LAB_006988b7:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069933c;
        }
        if (pcVar10 == (char *)0x0) {
          pcVar9 = (char *)0x1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar9 == (char *)0x0) goto LAB_006988b7;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,pcVar10);
        }
        local_110 = (char *)CONCAT71(local_110._1_7_,3);
        local_108 = pcVar10;
        uStack_100 = pcVar9;
        local_f8 = pcVar10;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_130,&local_78,&local_158,&local_110);
        if ((char)local_130 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_130);
        }
        local_c0 = (char *)0x0;
        local_b0 = (char *)0x0;
        bVar3 = true;
        if (local_c8 != (int *)0x0) {
          piVar19 = local_c8;
          if (*(longlong *)(local_c8 + 0x34) != -1) {
            pcVar9 = *(char **)(local_c8 + 0x38);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar10 != (char *)0x0) {
              builtin_strncpy(pcVar10,"validation_url",0xe);
              local_158 = 0xe;
              local_148 = (undefined4 *)0xe;
              pcStack_150 = pcVar10;
              if ((longlong)pcVar9 < 0) {
LAB_006989f4:
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0069933c;
              }
              if (pcVar9 == (char *)0x0) {
                pcVar10 = (char *)0x1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                if (pcVar10 == (char *)0x0) goto LAB_006989f4;
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,pcVar9);
              }
              local_110 = (char *)CONCAT71(local_110._1_7_,3);
              local_108 = pcVar9;
              uStack_100 = pcVar10;
              local_f8 = pcVar9;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_130,&local_c0,&local_158,&local_110);
              piVar19 = local_c8;
              if ((char)local_130 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_130);
              }
              goto LAB_00698a86;
            }
LAB_006992ea:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0069933c;
          }
LAB_00698a86:
          if (*(longlong *)(piVar19 + 0x22) != -1) {
            pcVar9 = *(char **)(piVar19 + 0x26);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            uVar5 = s_quotaResetTimeStamp_001a5323._12_4_;
            uVar4 = s_quotaResetTimeStamp_001a5323._8_4_;
            uVar23 = s_quotaResetTimeStamp_001a5323._4_4_;
            if (pcVar10 == (char *)0x0) goto LAB_006992ea;
            *(undefined4 *)pcVar10 = s_quotaResetTimeStamp_001a5323._0_4_;
            *(undefined4 *)(pcVar10 + 4) = uVar23;
            *(undefined4 *)(pcVar10 + 8) = uVar4;
            *(undefined4 *)(pcVar10 + 0xc) = uVar5;
            pcVar10[0xf] = 't';
            pcVar10[0x10] = 'a';
            pcVar10[0x11] = 'm';
            pcVar10[0x12] = 'p';
            local_158 = 0x13;
            local_148 = (undefined4 *)0x13;
            pcStack_150 = pcVar10;
            if ((longlong)pcVar9 < 0) {
LAB_00698afc:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069933c;
            }
            if (pcVar9 == (char *)0x0) {
              pcVar10 = (char *)0x1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar10 == (char *)0x0) goto LAB_00698afc;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,pcVar9);
            }
            local_110 = (char *)CONCAT71(local_110._1_7_,3);
            local_108 = pcVar9;
            uStack_100 = pcVar10;
            local_f8 = pcVar9;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_130,&local_c0,&local_158,&local_110);
            piVar19 = local_c8;
            if ((char)local_130 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_130);
            }
          }
          if (*piVar19 == 1) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar9 == (char *)0x0) goto LAB_006992ea;
            builtin_strncpy(pcVar9,"retryAfterMs",0xc);
            local_158 = 0xc;
            local_148 = (undefined4 *)0xc;
            pcVar10 = (char *)0x14;
            pcStack_150 = pcVar9;
            (*(code *)PTR__fmt_00799d88)();
            if ((longlong)pcVar10 < 0) {
LAB_00698c18:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069933c;
            }
            if (pcVar10 == (char *)0x0) {
              pcVar9 = (char *)0x1;
              piVar19 = local_c8;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              lVar17 = (*(code *)PTR___rust_alloc_00799000)();
              if (lVar17 == 0) goto LAB_00698c18;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,pcVar10);
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              piVar19 = local_c8;
              if (pcVar9 == (char *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_0069933c;
              }
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_06,pcVar10);
            }
            local_110 = (char *)CONCAT71(local_110._1_7_,3);
            local_108 = pcVar10;
            uStack_100 = pcVar9;
            local_f8 = pcVar10;
            uVar23 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                     ::insert(&local_130,&local_c0,&local_158,&local_110);
            if ((char)local_130 != -1) {
              uVar23 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <serde_json[dc3825464c436029]::value::Value>(&local_130);
            }
            if (pcVar10 != (char *)0x0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
            }
          }
          if (*(longlong *)(piVar19 + 0x2e) != -1) {
            pcVar9 = *(char **)(piVar19 + 0x32);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar10 == (char *)0x0) goto LAB_006992ea;
            builtin_strncpy(pcVar10,"model",5);
            local_158 = 5;
            local_148 = (undefined4 *)0x5;
            pcStack_150 = pcVar10;
            if ((longlong)pcVar9 < 0) {
LAB_00698d6a:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069933c;
            }
            if (pcVar9 == (char *)0x0) {
              pcVar10 = (char *)0x1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar10 == (char *)0x0) goto LAB_00698d6a;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_07,pcVar9);
            }
            local_110 = (char *)CONCAT71(local_110._1_7_,3);
            local_108 = pcVar9;
            uStack_100 = pcVar10;
            local_f8 = pcVar9;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_130,&local_c0,&local_158,&local_110);
            piVar19 = local_c8;
            if ((char)local_130 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_130);
            }
          }
          if (*(longlong *)(piVar19 + 0x16) != -1) {
            pcVar9 = *(char **)(piVar19 + 0x1a);
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar10 == (char *)0x0) goto LAB_006992ea;
            builtin_strncpy(pcVar10,"param",5);
            local_158 = 5;
            local_148 = (undefined4 *)0x5;
            pcStack_150 = pcVar10;
            if ((longlong)pcVar9 < 0) {
LAB_00698e62:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_0069933c;
            }
            if (pcVar9 == (char *)0x0) {
              pcVar10 = (char *)0x1;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar10 == (char *)0x0) goto LAB_00698e62;
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_08,pcVar9);
            }
            local_110 = (char *)CONCAT71(local_110._1_7_,3);
            local_108 = pcVar9;
            uStack_100 = pcVar10;
            local_f8 = pcVar9;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_130,&local_c0,&local_158,&local_110);
            if ((char)local_130 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_130);
            }
          }
          if (local_b0 != (char *)0x0) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            if (pcVar9 == (char *)0x0) goto LAB_006992ea;
            builtin_strncpy(pcVar9,"metadata",8);
            local_158 = 8;
            local_148 = (undefined4 *)0x8;
            local_f8 = local_b0;
            local_108 = local_c0;
            uStack_100 = (char *)CONCAT44(uStack_b4,uStack_b8);
            local_110 = (char *)CONCAT71(local_110._1_7_,5);
            pcStack_150 = pcVar9;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_130,&local_78,&local_158,&local_110);
            if ((char)local_130 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_130);
            }
            bVar3 = false;
          }
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar11 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069933c;
        }
        *(undefined4 *)((longlong)puVar11 + 3) = 0x736c6961;
        *puVar11 = 0x61746564;
        local_60 = 7;
        local_50 = 7;
        local_58 = puVar11;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar11 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_alloc_error_007991d8)();
          goto LAB_0069933c;
        }
        local_f8 = local_68;
        local_108 = local_78;
        uStack_100 = (char *)CONCAT44(uStack_6c,uStack_70);
        local_110 = (char *)CONCAT71(local_110._1_7_,5);
        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_130,&local_110);
        if ((char)local_130 == -1) {
          local_158 = uStack_128;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_158,
                     &PTR_s_src_multiprotocol_rs_007915f8);
          goto LAB_0069933c;
        }
        puVar11[4] = (undefined4)local_120;
        puVar11[5] = local_120._4_4_;
        puVar11[6] = (undefined4)uStack_118;
        puVar11[7] = uStack_118._4_4_;
        *puVar11 = local_130;
        puVar11[1] = uStack_12c;
        puVar11[2] = (undefined4)uStack_128;
        puVar11[3] = uStack_128._4_4_;
        uStack_128 = 1;
        uStack_118 = 1;
        local_130 = CONCAT31(local_130._1_3_,4);
        local_120 = puVar11;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_158,&local_a8,&local_60,&local_130);
        if ((char)local_158 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_158);
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_110);
        if (bVar3) {
          if (local_c0 == (char *)0x0) {
            local_d0 = (char *)0x0;
          }
          else {
            local_f8 = (char *)CONCAT44(uStack_b4,uStack_b8);
            local_108 = (char *)0x0;
            uStack_100 = local_c0;
            local_e8 = 0;
            local_e0 = local_c0;
            local_d0 = local_b0;
          }
          local_110 = (char *)(ulonglong)(local_c0 != (char *)0x0);
          local_f0 = local_110;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    (&local_110);
        }
LAB_00699115:
        local_c0 = (char *)0x0;
        local_b0 = (char *)0x0;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar11 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_0069933c;
        }
        *(undefined1 *)(puVar11 + 1) = 0x72;
        *puVar11 = 0x6f727265;
        local_60 = 5;
        local_50 = 5;
        local_f8 = local_98;
        local_108 = local_a8;
        uStack_100 = pcStack_a0;
        local_110 = (char *)CONCAT71(local_110._1_7_,5);
        local_58 = puVar11;
        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_130,&local_110);
        if ((char)local_130 != -1) {
          local_148 = local_120;
          uStack_140 = (undefined4)uStack_118;
          uStack_13c = uStack_118._4_4_;
          local_158 = CONCAT44(uStack_12c,local_130);
          pcStack_150 = (char *)uStack_128;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_130,&local_c0,&local_60,&local_158);
          if ((char)local_130 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_130);
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_110);
          *(char **)(local_38 + 0x18) = local_b0;
          *(char **)(local_38 + 8) = local_c0;
          *(ulonglong *)(local_38 + 0x10) = CONCAT44(uStack_b4,uStack_b8);
          *local_38 = 5;
          return;
        }
        goto LAB_00699241;
      }
    }
LAB_006992b8:
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    puVar13 = (ushort *)(param_2 + 0x38);
    if ((char)local_c8[0x5c] != '\0') {
      puVar13 = (ushort *)((longlong)local_c8 + 0x172);
    }
    uVar16 = *puVar13;
    if (*(longlong *)(local_c8 + 4) == -1) goto LAB_0069812f;
    pcVar9 = *(char **)(local_c8 + 6);
    pcVar10 = *(char **)(local_c8 + 8);
LAB_0069824e:
    if ((char)local_c8[0x54] != '\x05') goto LAB_006982d5;
    if (*(longlong *)(local_c8 + 0x5a) == 0) {
      local_110 = (char *)0x0;
      uStack_100 = (char *)0x0;
LAB_00698296:
      local_98 = uStack_100;
      local_a8 = local_110;
      pcStack_a0 = local_108;
      goto LAB_006982ed;
    }
    if (*(longlong *)(local_c8 + 0x56) != 0) {
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone::clone_subtree::
      <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                (&local_110,*(longlong *)(local_c8 + 0x56),*(undefined8 *)(local_c8 + 0x58));
      goto LAB_00698296;
    }
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_00699241:
    local_158 = uStack_128;
    (*(code *)PTR_unwrap_failed_00799028)
              (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_158,
               &PTR_s_src_multiprotocol_rs_00791610);
  }
LAB_0069933c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


