// 00627360 parse_responses_item

/* craggemini_core[66f3c71560d70857]::server::parse_responses_item */

void __rustcall
craggemini_core[66f3c71560d70857]::server::parse_responses_item
          (undefined8 *param_1,char *param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined8 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong local_150;
  longlong local_148;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 *local_80;
  char *local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong local_40;
  longlong local_38;
  
  if (*param_2 != '\x05') {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar19 = s_be_a_JSON_object_0019fed8._8_8_;
    if (pcVar9 != (char *)0x0) {
      *(ulonglong *)(pcVar9 + 0x1a) =
           CONCAT26(s_be_a_JSON_object_0019fed8._6_2_,s_be_a_JSON_object_0019fed8._0_6_);
      *(undefined8 *)(pcVar9 + 0x22) = uVar19;
      uVar19 = CONCAT62(s_be_a_JSON_object_0019fed8._0_6_,s_item_must_0019fece._8_2_);
      *(undefined8 *)(pcVar9 + 0x10) = s_item_must_0019fece._0_8_;
      *(undefined8 *)(pcVar9 + 0x18) = uVar19;
      uVar19 = s_Responses_input_0019febe._8_8_;
      *(undefined8 *)pcVar9 = s_Responses_input_0019febe._0_8_;
      *(undefined8 *)(pcVar9 + 8) = uVar19;
      param_1[1] = 0x2a;
      param_1[2] = pcVar9;
      param_1[3] = 0x2a;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00627f4b:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00627f6d:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_148 = *(longlong *)(param_2 + 8);
  local_80 = param_1;
  local_68 = param_3;
  if (local_148 != 0) {
    local_78 = param_2 + 8;
    local_150 = *(longlong *)(param_2 + 0x10);
    while( true ) {
      local_70 = (ulonglong)*(ushort *)(local_148 + 0x272);
      uVar12 = (ulonglong)((uint)*(ushort *)(local_148 + 0x272) * 8);
      lVar14 = uVar12 * 3;
      uVar16 = 0xffffffffffffffff;
      lVar6 = local_148 + 0x168;
      plVar8 = (longlong *)(local_148 + -8);
      do {
        plVar15 = plVar8;
        if (lVar14 == 0) {
          uVar16 = local_70;
          goto LAB_00627468;
        }
        uVar13 = *(ulonglong *)(lVar6 + 0x10);
        lVar17 = uVar13 - 4;
        if (3 < uVar13) {
          uVar13 = 4;
        }
        iVar4 = (*(code *)PTR_memcmp_00799528)(uVar12,uVar13);
        pcVar9 = local_78;
        lVar17 = -lVar17;
        if (iVar4 != 0) {
          lVar17 = (longlong)iVar4;
        }
        bVar11 = (0 < lVar17) - (lVar17 < 0);
        uVar12 = (ulonglong)bVar11;
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + -0x18;
        lVar6 = lVar6 + 0x18;
        plVar8 = plVar15 + 4;
      } while (bVar11 == 1);
      if (bVar11 == 0) break;
LAB_00627468:
      bVar18 = local_150 == 0;
      local_150 = local_150 + -1;
      if (bVar18) goto LAB_006276f4;
      local_148 = *(longlong *)(local_148 + 0x278 + uVar16 * 8);
    }
    if ((char)plVar15[1] == '\x03') {
      plVar8 = (longlong *)plVar15[3];
      lVar14 = plVar15[4];
      if (lVar14 == 9) {
        if ((char)plVar8[1] == 'g' && *plVar8 == 0x6e696e6f73616572) {
          local_a8 = 0;
          lStack_a0 = 8;
          local_98 = 0;
          pcVar9 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                           ::get::<str>(local_78,"encrypted_content",0x11);
          if (((pcVar9 == (char *)0x0) || (*pcVar9 != '\x03')) ||
             (lVar14 = *(longlong *)(pcVar9 + 0x18), lVar14 == 0)) {
LAB_006277d2:
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x6e61747369737361;
              *(undefined1 *)(puVar10 + 1) = 0x74;
              local_80[0x11] = local_98;
              local_80[0xf] = local_a8;
              local_80[0x10] = lStack_a0;
              local_138 = 0;
              lStack_130 = 1;
              local_128 = 0;
              lStack_120 = 0;
              local_118 = 1;
              uStack_110 = 0;
              uStack_108 = 0;
              uStack_100 = 8;
              local_f8 = 0;
              lStack_f0 = 0;
              local_e8 = 8;
              lStack_e0 = 0;
              uStack_d8 = 0;
              uStack_d0 = 8;
              local_c8 = 0;
              uStack_c0 = 0;
              local_b8 = 8;
              local_b0 = 0;
              local_80[5] = 0;
              local_80[3] = 0;
              local_80[4] = 1;
              local_80[8] = 0;
              local_80[6] = 0;
              local_80[7] = 8;
              local_80[9] = 0;
              local_80[10] = 8;
              local_80[0xb] = 0;
              local_80[0xc] = 0;
              local_80[0xd] = 8;
              local_80[0xe] = 0;
              *local_80 = 9;
              local_80[1] = puVar10;
              local_80[2] = 9;
              <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&uStack_c0,1);
              return;
            }
          }
          else {
            uVar19 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_138,lVar14,0,1,1);
            if ((int)local_138 != 1) {
              (*(code *)PTR_memcpy_00799008)(uVar19,lVar14);
              local_138 = lStack_130;
              lStack_130 = local_128;
              local_128 = lVar14;
              ::<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>::push_mut
                        (&local_a8,&local_138);
              goto LAB_006277d2;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00627f6d;
        }
      }
      else if (lVar14 == 0xd) {
        if (*(longlong *)((longlong)plVar8 + 5) == 0x6c6c61635f6e6f69 &&
            *plVar8 == 0x6e6f6974636e7566) {
          pcVar5 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                           ::get::<str>(local_78,&
                                                 anon_1b4a85c95499e1b671cf4fa96a1b6d0f_38_llvm_10049508496007902178
                                        ,4);
          if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x03')) {
            parse_responses_item::_closure_2_(&local_138);
            local_80[1] = local_138;
            local_80[2] = lStack_130;
            local_80[3] = local_128;
            *local_80 = 0xffffffffffffffff;
            return;
          }
          lVar14 = *(longlong *)(pcVar5 + 0x18);
          uVar19 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                             (&local_138,lVar14,0,1,1);
          lVar6 = local_128;
          if ((int)local_138 != 1) {
            if (lVar14 != 0) {
              (*(code *)PTR_memcpy_00799008)(uVar19,lVar14);
            }
            lVar17 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                     ::get::<str>(pcVar9,"arguments",9);
            if (lVar17 == 0) {
              lStack_a0 = 0;
              lStack_90 = 0;
              local_a8 = CONCAT71(local_a8._1_7_,5);
            }
            else {
              <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>::
              clone(&local_138,lVar17);
              local_98 = local_128;
              lStack_90 = lStack_120;
              local_a8 = local_138;
              lStack_a0 = lStack_130;
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar10 == (undefined8 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00627f6d;
            }
            *puVar10 = 0x6e61747369737361;
            *(undefined1 *)(puVar10 + 1) = 0x74;
            plVar8 = (longlong *)alloc[12e961f32105355]::boxed::box_new_uninit(0x60,1);
            pcVar9 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                             ::get::<str>(pcVar9,"call_id",7);
            if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\x03')) {
              local_60 = -1;
            }
            else {
              local_70 = *(ulonglong *)(pcVar9 + 0x10);
              lVar17 = *(longlong *)(pcVar9 + 0x18);
              uVar19 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                                 (&local_138,lVar17,0,1,1);
              lVar3 = local_128;
              lVar2 = lStack_130;
              if ((int)local_138 == 1) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_00627f6d;
              }
              if (lVar17 != 0) {
                (*(code *)PTR_memcpy_00799008)(uVar19,lVar17);
              }
              local_60 = lVar2;
              local_58 = lVar3;
              local_50 = lVar17;
            }
            local_40 = lVar6;
            local_38 = lVar14;
            <craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>::from_value
                      (&local_138,&local_60,local_48,&local_a8);
            plVar8[10] = local_e8;
            plVar8[0xb] = lStack_e0;
            plVar8[8] = local_f8;
            plVar8[9] = lStack_f0;
            *(undefined4 *)(plVar8 + 6) = (undefined4)uStack_108;
            *(undefined4 *)((longlong)plVar8 + 0x34) = uStack_108._4_4_;
            *(undefined4 *)(plVar8 + 7) = (undefined4)uStack_100;
            *(undefined4 *)((longlong)plVar8 + 0x3c) = uStack_100._4_4_;
            *(undefined4 *)(plVar8 + 4) = (undefined4)local_118;
            *(undefined4 *)((longlong)plVar8 + 0x24) = local_118._4_4_;
            *(undefined4 *)(plVar8 + 5) = (undefined4)uStack_110;
            *(undefined4 *)((longlong)plVar8 + 0x2c) = uStack_110._4_4_;
            plVar8[2] = local_128;
            plVar8[3] = lStack_120;
            *plVar8 = local_138;
            plVar8[1] = lStack_130;
            local_138 = 0;
            lStack_130 = 1;
            local_128 = 0;
            lStack_120 = 0;
            local_118 = 1;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_100 = 8;
            local_f8 = 0;
            lStack_f0 = 0;
            local_e8 = 8;
            lStack_e0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 8;
            local_c8 = 0;
            uStack_c0 = 0;
            local_b8 = 8;
            local_b0 = 0;
            local_80[5] = 0;
            local_80[3] = 0;
            local_80[4] = 1;
            local_80[0xb] = 0;
            local_80[9] = 0;
            local_80[10] = 8;
            local_80[0xc] = 0;
            local_80[0xd] = 8;
            local_80[0xe] = 0;
            local_80[0xf] = 0;
            local_80[0x10] = 8;
            local_80[0x11] = 0;
            *local_80 = 9;
            local_80[1] = puVar10;
            local_80[2] = 9;
            local_80[6] = 1;
            local_80[7] = plVar8;
            local_80[8] = 1;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>
                      (&uStack_108);
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_a8);
            return;
          }
          (*(code *)PTR_handle_error_00798ff0)();
LAB_00627ef2:
          (*(code *)PTR_handle_error_00798ff0)();
LAB_00627f00:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00627f6d;
        }
      }
      else if (lVar14 == 0x14) {
        lVar14 = plVar8[2];
        auVar21[0] = -((char)lVar14 == s_tput_00183720[0]);
        auVar21[1] = -((char)((ulonglong)lVar14 >> 8) == s_tput_00183720[1]);
        auVar21[2] = -((char)((ulonglong)lVar14 >> 0x10) == s_tput_00183720[2]);
        auVar21[3] = -((char)((ulonglong)lVar14 >> 0x18) == s_tput_00183720[3]);
        auVar21[4] = -(s_tput_00183720[4] == '\0');
        auVar21[5] = -(s_tput_00183720[5] == '\0');
        auVar21[6] = -(s_tput_00183720[6] == '\0');
        auVar21[7] = -(s_tput_00183720[7] == '\0');
        auVar21[8] = -(UNK_00183728 == '\0');
        auVar21[9] = -(UNK_00183729 == '\0');
        auVar21[10] = -(UNK_0018372a == '\0');
        auVar21[0xb] = -(UNK_0018372b == '\0');
        auVar21[0xc] = -(UNK_0018372c == '\0');
        auVar21[0xd] = -(UNK_0018372d == '\0');
        auVar21[0xe] = -(UNK_0018372e == '\0');
        auVar21[0xf] = -(UNK_0018372f == '\0');
        auVar20[0] = -((char)*plVar8 == s_function_call_ou_001828d0[0]);
        auVar20[1] = -(*(char *)((longlong)plVar8 + 1) == s_function_call_ou_001828d0[1]);
        auVar20[2] = -(*(char *)((longlong)plVar8 + 2) == s_function_call_ou_001828d0[2]);
        auVar20[3] = -(*(char *)((longlong)plVar8 + 3) == s_function_call_ou_001828d0[3]);
        auVar20[4] = -(*(char *)((longlong)plVar8 + 4) == s_function_call_ou_001828d0[4]);
        auVar20[5] = -(*(char *)((longlong)plVar8 + 5) == s_function_call_ou_001828d0[5]);
        auVar20[6] = -(*(char *)((longlong)plVar8 + 6) == s_function_call_ou_001828d0[6]);
        auVar20[7] = -(*(char *)((longlong)plVar8 + 7) == s_function_call_ou_001828d0[7]);
        auVar20[8] = -((char)plVar8[1] == s_function_call_ou_001828d0[8]);
        auVar20[9] = -(*(char *)((longlong)plVar8 + 9) == s_function_call_ou_001828d0[9]);
        auVar20[10] = -(*(char *)((longlong)plVar8 + 10) == s_function_call_ou_001828d0[10]);
        auVar20[0xb] = -(*(char *)((longlong)plVar8 + 0xb) == s_function_call_ou_001828d0[0xb]);
        auVar20[0xc] = -(*(char *)((longlong)plVar8 + 0xc) == s_function_call_ou_001828d0[0xc]);
        auVar20[0xd] = -(*(char *)((longlong)plVar8 + 0xd) == s_function_call_ou_001828d0[0xd]);
        auVar20[0xe] = -(*(char *)((longlong)plVar8 + 0xe) == s_function_call_ou_001828d0[0xe]);
        auVar20[0xf] = -(*(char *)((longlong)plVar8 + 0xf) == s_function_call_ou_001828d0[0xf]);
        auVar20 = auVar20 & auVar21;
        if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
                    (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) {
          pcVar5 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                           ::get::<str>(local_78,"call_id",7);
          lVar14 = -1;
          if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\x03')) {
            lVar17 = *(longlong *)(pcVar5 + 0x10);
            local_150 = *(longlong *)(pcVar5 + 0x18);
            uVar19 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_138,local_150,0,1,1);
            lVar14 = lStack_130;
            if ((int)local_138 == 1) goto LAB_00627ef2;
            local_148 = local_128;
            if (local_150 == 0) {
              local_150 = 0;
            }
            else {
              (*(code *)PTR_memcpy_00799008)(uVar19,local_150);
            }
          }
          lVar6 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::get::<str>(pcVar9,"output",6);
          if (lVar6 == 0) {
            serde_json[dc3825464c436029]::value::to_value::<&&str>(&local_138,&DAT_00183840);
            if ((char)local_138 == -1) {
              local_a8 = lStack_130;
              (*(code *)PTR_unwrap_failed_00799028)
                        (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078f2d8,&local_a8,
                         &
                         PTR_anon_1b4a85c95499e1b671cf4fa96a1b6d0f_388_llvm_10049508496007902178_0078f720
                        );
              goto LAB_00627f6d;
            }
          }
          else {
            <serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::clone::Clone>::
            clone(&local_138,lVar6);
          }
          local_98 = local_128;
          lStack_90 = lStack_120;
          local_a8 = local_138;
          lStack_a0 = lStack_130;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar7 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar7 == (undefined4 *)0x0) goto LAB_00627f4b;
          *puVar7 = 0x6c6f6f74;
          plVar8 = (longlong *)alloc[12e961f32105355]::boxed::box_new_uninit(0x58,1);
          pcVar9 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                           ::get::<str>(pcVar9,&
                                               anon_1b4a85c95499e1b671cf4fa96a1b6d0f_38_llvm_10049508496007902178
                                        ,4);
          lVar6 = -1;
          if ((pcVar9 == (char *)0x0) || (*pcVar9 != '\x03')) {
            local_128 = lVar14;
LAB_00627a74:
            *plVar8 = lVar14;
            plVar8[1] = local_148;
            plVar8[2] = local_150;
            plVar8[3] = lVar6;
            plVar8[4] = local_128;
            plVar8[5] = lVar17;
            plVar8[6] = local_a8;
            plVar8[7] = lStack_a0;
            plVar8[8] = local_98;
            plVar8[9] = lStack_90;
            *(undefined1 *)(plVar8 + 10) = 0;
            local_138 = 0;
            lStack_130 = 1;
            local_128 = 0;
            lStack_120 = 0;
            local_118 = 1;
            uStack_110 = 0;
            uStack_108 = 0;
            uStack_100 = 8;
            local_f8 = 0;
            lStack_f0 = 0;
            local_e8 = 8;
            lStack_e0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 8;
            local_c8 = 0;
            uStack_c0 = 0;
            local_b8 = 8;
            local_b0 = 0;
            local_80[5] = 0;
            local_80[3] = 0;
            local_80[4] = 1;
            local_80[8] = 0;
            local_80[6] = 0;
            local_80[7] = 8;
            local_80[0xc] = 0;
            local_80[0xd] = 8;
            local_80[0xe] = 0;
            local_80[0xf] = 0;
            local_80[0x10] = 8;
            local_80[0x11] = 0;
            *local_80 = 4;
            local_80[1] = puVar7;
            local_80[2] = 4;
            local_80[9] = 1;
            local_80[10] = plVar8;
            local_80[0xb] = 1;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>
                      (&lStack_f0);
            return;
          }
          lVar17 = *(longlong *)(pcVar9 + 0x18);
          uVar19 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                             (&local_138,lVar17,0,1,1);
          if ((int)local_138 != 1) {
            lVar6 = lStack_130;
            if (lVar17 == 0) {
              lVar17 = 0;
            }
            else {
              (*(code *)PTR_memcpy_00799008)(uVar19,lVar17);
            }
            goto LAB_00627a74;
          }
          goto LAB_00627f00;
        }
      }
    }
  }
LAB_006276f4:
  parse_chat_message(local_80,param_2,local_68);
  return;
}


