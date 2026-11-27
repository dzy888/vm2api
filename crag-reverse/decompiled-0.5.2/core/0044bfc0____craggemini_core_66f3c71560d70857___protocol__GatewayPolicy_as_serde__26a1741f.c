// 0044bfc0 <<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>

/* WARNING: Type propagation algorithm not settling */
/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_struct::<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor> */

code * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_struct::
<<craggemini_core[66f3c71560d70857]::protocol::GatewayPolicy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
          (code *param_1,longlong *******param_2)

{
  undefined1 auVar1 [16];
  byte bVar2;
  longlong ******pppppplVar3;
  code *pcVar4;
  longlong *******ppppppplVar5;
  longlong ******pppppplVar6;
  longlong lVar7;
  code *pcVar8;
  code *pcVar9;
  longlong *******ppppppplVar10;
  longlong *******unaff_RBP;
  ulonglong uVar11;
  code *pcVar12;
  longlong *******ppppppplVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 local_a8;
  code *local_a0;
  longlong local_98;
  longlong *******local_90;
  code *local_88;
  undefined1 local_79;
  longlong *******local_78;
  longlong *******local_70;
  code *local_68;
  longlong *******local_60;
  code *local_58;
  longlong *******local_50;
  undefined1 local_48;
  code *local_40;
  code *local_38;
  
  pppppplVar6 = param_2[5];
  if (pppppplVar6 < param_2[4]) {
    ppppppplVar10 = (longlong *******)0x100002600;
    do {
      pppppplVar6 = (longlong ******)((longlong)pppppplVar6 + 1);
      bVar2 = *(byte *)((longlong)param_2[3] + -1 + (longlong)pppppplVar6);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        local_60 = param_2;
        local_58 = param_1;
        if (bVar2 == 0x5b) {
          ppppppplVar13 = param_2 + 7;
          *(char *)ppppppplVar13 = *(char *)ppppppplVar13 + -1;
          if (*(char *)ppppppplVar13 != '\0') {
            param_2[5] = pppppplVar6;
            local_88 = (code *)CONCAT71(local_88._1_7_,1);
            local_90 = param_2;
            <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
            ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                      (&local_a8,&local_90);
            if ((char)local_a8 == '\x01') goto LAB_0044c17c;
            if (local_a8._1_1_ == '\x01') {
              <core[c0acaeba6ab4c2e0]::option::Option<u64>as_serde_core[48776c27239fa21f]::de::Deserialize>
              ::deserialize::
              <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        (&local_a8,local_90);
              pcVar9 = local_a0;
              ppppppplVar13 = local_a8;
              if (local_a8 == (longlong *******)0x2) {
LAB_0044c17c:
                pcVar12 = param_1;
                pcVar9 = local_a0;
                goto LAB_0044c181;
              }
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_a8,&local_90);
              if ((char)local_a8 == '\x01') goto LAB_0044c17c;
              if (local_a8._1_1_ != '\x01') {
                uVar14 = 1;
                goto LAB_0044c592;
              }
              <core[c0acaeba6ab4c2e0]::option::Option<u64>as_serde_core[48776c27239fa21f]::de::Deserialize>
              ::deserialize::
              <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                        (&local_a8,local_90);
              pcVar12 = local_a0;
              ppppppplVar10 = local_a8;
              if (local_a8 == (longlong *******)0x2) goto LAB_0044c17c;
              <serde_json[dc3825464c436029]::de::SeqAccess<_>as_serde_core[48776c27239fa21f]::de::SeqAccess>
              ::next_element_seed::has_next_element::<serde_json[dc3825464c436029]::read::SliceRead>
                        (&local_a8,&local_90);
              param_1 = pcVar12;
              if ((char)local_a8 == '\x01') goto LAB_0044c17c;
              if (local_a8._1_1_ == '\x01') {
                <core[c0acaeba6ab4c2e0]::option::Option<u64>as_serde_core[48776c27239fa21f]::de::Deserialize>
                ::deserialize::
                <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                          (&local_a8,local_90);
                unaff_RBP = local_a8;
                if (local_a8 == (longlong *******)0x2) goto LAB_0044c17c;
                local_68 = local_a0;
              }
              else {
                ppppppplVar13 = (longlong *******)0x2;
                pcVar9 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                                 ::invalid_length(2,&PTR_DAT_0078a000,&DAT_00789c78);
              }
            }
            else {
              uVar14 = 0;
LAB_0044c592:
              pcVar9 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                               ::invalid_length(uVar14,&PTR_DAT_0078a000,&DAT_00789c78);
              pcVar12 = param_1;
LAB_0044c181:
              ppppppplVar13 = (longlong *******)0x2;
            }
            *(char *)(local_60 + 7) = *(char *)(local_60 + 7) + '\x01';
            pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::end_seq();
            pcVar4 = pcVar9;
            if ((int)ppppppplVar13 == 2) goto LAB_0044c533;
            goto joined_r0x0044c1a9;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar9 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                             ::peek_invalid_type(param_2,&local_79,&DAT_0078a8c0);
            goto LAB_0044c543;
          }
          ppppppplVar13 = param_2 + 7;
          *(char *)ppppppplVar13 = *(char *)ppppppplVar13 + -1;
          if (*(char *)ppppppplVar13 != '\0') {
            param_2[5] = pppppplVar6;
            local_48 = 1;
            local_50 = param_2;
            uVar14 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
                     ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                               (&local_a8,&local_50);
            if ((char)local_a8 != '\0') goto LAB_0044c079;
            ppppppplVar13 = (longlong *******)0x2;
            local_70 = (longlong *******)0x2;
            local_78 = (longlong *******)0x2;
            goto LAB_0044c231;
          }
        }
        local_a8 = (longlong *******)0x18;
        goto LAB_0044c022;
      }
      param_2[5] = pppppplVar6;
    } while (pppppplVar6 != param_2[4]);
  }
  local_a8 = (longlong *******)0x5;
LAB_0044c022:
  lVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_a8);
  goto LAB_0044c555;
LAB_0044c231:
  ppppppplVar5 = local_50;
  if (local_a8._1_1_ != '\x01') {
    if (ppppppplVar13 == (longlong *******)0x2) {
      ppppppplVar13 = (longlong *******)0x0;
    }
    ppppppplVar10 = local_70;
    if (local_70 == (longlong *******)0x2) {
      ppppppplVar10 = (longlong *******)0x0;
    }
    unaff_RBP = local_78;
    if (local_78 == (longlong *******)0x2) {
      unaff_RBP = (longlong *******)0x0;
    }
    pcVar9 = local_40;
    goto LAB_0044c084;
  }
  unaff_RBP = local_50 + 3;
  local_50[5] = (longlong ******)((longlong)local_50[5] + 1);
  local_50[2] = (longlong ******)0x0;
  (*(code *)PTR_parse_str_007998f8)(uVar14,local_50);
  pcVar9 = local_a0;
  if ((int)local_a8 == 2) goto LAB_0044c07e;
  if (local_98 == 0xd) {
    if (*(longlong *)(local_a0 + 5) == CONCAT53(s__wait_ms_0019955e._3_5_,s__wait_ms_0019955e._0_3_)
        && *(longlong *)local_a0 ==
           CONCAT35(s__wait_ms_0019955e._0_3_,
                    anon_2c3f00c6db51fc4e52b1607637b553f4_15_llvm_6489901693990513673)) {
      if (ppppppplVar13 == (longlong *******)0x2) {
        pppppplVar6 = ppppppplVar5[5];
        if (ppppppplVar5[4] <= pppppplVar6) goto LAB_0044c567;
        pppppplVar3 = *unaff_RBP;
        while( true ) {
          pppppplVar6 = (longlong ******)((longlong)pppppplVar6 + 1);
          uVar11 = (ulonglong)*(byte *)((longlong)pppppplVar3 + -1 + (longlong)pppppplVar6);
          if (0x3a < uVar11) goto LAB_0044c5d9;
          if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
          ppppppplVar5[5] = pppppplVar6;
          if (pppppplVar6 == ppppppplVar5[4]) goto LAB_0044c567;
        }
        if (uVar11 == 0x3a) {
          ppppppplVar5[5] = pppppplVar6;
          <core[c0acaeba6ab4c2e0]::option::Option<u64>as_serde_core[48776c27239fa21f]::de::Deserialize>
          ::deserialize::
          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    (&local_90,ppppppplVar5);
          if (local_90 != (longlong *******)0x2) {
            local_40 = local_88;
            ppppppplVar13 = local_90;
            goto LAB_0044c21a;
          }
LAB_0044c4fb:
          pcVar9 = local_88;
        }
        else {
LAB_0044c5d9:
          local_a8 = (longlong *******)&DAT_00000006;
LAB_0044c56f:
          pcVar9 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                           ::peek_error(ppppppplVar5,&local_a8);
        }
      }
      else {
        local_90 = (longlong *******)&DAT_0019517b;
        local_88 = (code *)&DAT_0000000d;
LAB_0044c659:
        local_a8 = (longlong *******)&local_90;
        local_a0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        pcVar9 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                         ::custom::<core[c0acaeba6ab4c2e0]::fmt::Arguments>
                                   (anon_d4d3cd51d1d91a17bb767b00236b3a9b_156_llvm_17589326713533067298
                                    ,&local_a8);
      }
    }
    else {
LAB_0044c5c3:
      pcVar9 = (code *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::unknown_field(local_a0,local_98,
                                       &
                                       anon_2c3f00c6db51fc4e52b1607637b553f4_18_llvm_6489901693990513673
                                       ,3);
    }
    goto LAB_0044c07e;
  }
  if (local_98 != 0x15) {
    if (local_98 == 0x16) {
      auVar16[0] = -(*local_a0 ==
                    (code)anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[0]);
      auVar16[1] = -(local_a0[1] ==
                    (code)anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[1]);
      auVar16[2] = -(local_a0[2] ==
                    (code)anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[2]);
      auVar16[3] = -(local_a0[3] ==
                    (code)anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[3]);
      auVar16[4] = -(local_a0[4] ==
                    (code)anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[4]);
      auVar16[5] = -(local_a0[5] ==
                    (code)anon_2c3f00c6db51fc4e52b1607637b553f4_17_llvm_6489901693990513673[5]);
      auVar16[6] = -(local_a0[6] == (code)s__idle_timeout_ms_00199581[0]);
      auVar16[7] = -(local_a0[7] == (code)s__idle_timeout_ms_00199581[1]);
      auVar16[8] = -(local_a0[8] == (code)s__idle_timeout_ms_00199581[2]);
      auVar16[9] = -(local_a0[9] == (code)s__idle_timeout_ms_00199581[3]);
      auVar16[10] = -(local_a0[10] == (code)s__idle_timeout_ms_00199581[4]);
      auVar16[0xb] = -(local_a0[0xb] == (code)s__idle_timeout_ms_00199581[5]);
      auVar16[0xc] = -(local_a0[0xc] == (code)s__idle_timeout_ms_00199581[6]);
      auVar16[0xd] = -(local_a0[0xd] == (code)s__idle_timeout_ms_00199581[7]);
      auVar16[0xe] = -(local_a0[0xe] == (code)s__idle_timeout_ms_00199581[8]);
      auVar16[0xf] = -(local_a0[0xf] == (code)s__idle_timeout_ms_00199581[9]);
      auVar1 = *(undefined1 (*) [16])(local_a0 + 6);
      auVar18[0] = -(s__idle_timeout_ms_00199581[0] == auVar1[0]);
      auVar18[1] = -(s__idle_timeout_ms_00199581[1] == auVar1[1]);
      auVar18[2] = -(s__idle_timeout_ms_00199581[2] == auVar1[2]);
      auVar18[3] = -(s__idle_timeout_ms_00199581[3] == auVar1[3]);
      auVar18[4] = -(s__idle_timeout_ms_00199581[4] == auVar1[4]);
      auVar18[5] = -(s__idle_timeout_ms_00199581[5] == auVar1[5]);
      auVar18[6] = -(s__idle_timeout_ms_00199581[6] == auVar1[6]);
      auVar18[7] = -(s__idle_timeout_ms_00199581[7] == auVar1[7]);
      auVar18[8] = -(s__idle_timeout_ms_00199581[8] == auVar1[8]);
      auVar18[9] = -(s__idle_timeout_ms_00199581[9] == auVar1[9]);
      auVar18[10] = -(s__idle_timeout_ms_00199581[10] == auVar1[10]);
      auVar18[0xb] = -(s__idle_timeout_ms_00199581[0xb] == auVar1[0xb]);
      auVar18[0xc] = -(s__idle_timeout_ms_00199581[0xc] == auVar1[0xc]);
      auVar18[0xd] = -(s__idle_timeout_ms_00199581[0xd] == auVar1[0xd]);
      auVar18[0xe] = -(s__idle_timeout_ms_00199581[0xe] == auVar1[0xe]);
      auVar18[0xf] = -(s__idle_timeout_ms_00199581[0xf] == auVar1[0xf]);
      auVar18 = auVar18 & auVar16;
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
        if (local_78 == (longlong *******)0x2) {
          pppppplVar6 = ppppppplVar5[5];
          if (pppppplVar6 < ppppppplVar5[4]) {
            pppppplVar3 = *unaff_RBP;
            while( true ) {
              pppppplVar6 = (longlong ******)((longlong)pppppplVar6 + 1);
              uVar11 = (ulonglong)*(byte *)((longlong)pppppplVar3 + -1 + (longlong)pppppplVar6);
              if (0x3a < uVar11) goto LAB_0044c5d9;
              if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
              ppppppplVar5[5] = pppppplVar6;
              if (pppppplVar6 == ppppppplVar5[4]) goto LAB_0044c567;
            }
            if (uVar11 != 0x3a) goto LAB_0044c5d9;
            ppppppplVar5[5] = pppppplVar6;
            <core[c0acaeba6ab4c2e0]::option::Option<u64>as_serde_core[48776c27239fa21f]::de::Deserialize>
            ::deserialize::
            <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      (&local_90,ppppppplVar5);
            if (local_90 == (longlong *******)0x2) goto LAB_0044c4fb;
            local_78 = local_90;
            local_68 = local_88;
            goto LAB_0044c21a;
          }
          goto LAB_0044c567;
        }
        local_90 = (longlong *******)&DAT_00195188;
        local_88 = (code *)&DAT_00000016;
        goto LAB_0044c659;
      }
    }
    goto LAB_0044c5c3;
  }
  auVar15[0] = -(*local_a0 ==
                (code)anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[0]);
  auVar15[1] = -(local_a0[1] ==
                (code)anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[1]);
  auVar15[2] = -(local_a0[2] ==
                (code)anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[2]);
  auVar15[3] = -(local_a0[3] ==
                (code)anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[3]);
  auVar15[4] = -(local_a0[4] ==
                (code)anon_2c3f00c6db51fc4e52b1607637b553f4_16_llvm_6489901693990513673[4]);
  auVar15[5] = -(local_a0[5] == (code)s__byte_timeout_ms_0019956b[0]);
  auVar15[6] = -(local_a0[6] == (code)s__byte_timeout_ms_0019956b[1]);
  auVar15[7] = -(local_a0[7] == (code)s__byte_timeout_ms_0019956b[2]);
  auVar15[8] = -(local_a0[8] == (code)s__byte_timeout_ms_0019956b[3]);
  auVar15[9] = -(local_a0[9] == (code)s__byte_timeout_ms_0019956b[4]);
  auVar15[10] = -(local_a0[10] == (code)s__byte_timeout_ms_0019956b[5]);
  auVar15[0xb] = -(local_a0[0xb] == (code)s__byte_timeout_ms_0019956b[6]);
  auVar15[0xc] = -(local_a0[0xc] == (code)s__byte_timeout_ms_0019956b[7]);
  auVar15[0xd] = -(local_a0[0xd] == (code)s__byte_timeout_ms_0019956b[8]);
  auVar15[0xe] = -(local_a0[0xe] == (code)s__byte_timeout_ms_0019956b[9]);
  auVar15[0xf] = -(local_a0[0xf] == (code)s__byte_timeout_ms_0019956b[10]);
  auVar1 = *(undefined1 (*) [16])(local_a0 + 5);
  auVar17[0] = -(s__byte_timeout_ms_0019956b[0] == auVar1[0]);
  auVar17[1] = -(s__byte_timeout_ms_0019956b[1] == auVar1[1]);
  auVar17[2] = -(s__byte_timeout_ms_0019956b[2] == auVar1[2]);
  auVar17[3] = -(s__byte_timeout_ms_0019956b[3] == auVar1[3]);
  auVar17[4] = -(s__byte_timeout_ms_0019956b[4] == auVar1[4]);
  auVar17[5] = -(s__byte_timeout_ms_0019956b[5] == auVar1[5]);
  auVar17[6] = -(s__byte_timeout_ms_0019956b[6] == auVar1[6]);
  auVar17[7] = -(s__byte_timeout_ms_0019956b[7] == auVar1[7]);
  auVar17[8] = -(s__byte_timeout_ms_0019956b[8] == auVar1[8]);
  auVar17[9] = -(s__byte_timeout_ms_0019956b[9] == auVar1[9]);
  auVar17[10] = -(s__byte_timeout_ms_0019956b[10] == auVar1[10]);
  auVar17[0xb] = -(s__byte_timeout_ms_0019956b[0xb] == auVar1[0xb]);
  auVar17[0xc] = -(s__byte_timeout_ms_0019956b[0xc] == auVar1[0xc]);
  auVar17[0xd] = -(s__byte_timeout_ms_0019956b[0xd] == auVar1[0xd]);
  auVar17[0xe] = -(s__byte_timeout_ms_0019956b[0xe] == auVar1[0xe]);
  auVar17[0xf] = -(s__byte_timeout_ms_0019956b[0xf] == auVar1[0xf]);
  auVar17 = auVar17 & auVar15;
  if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
              (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) != 0xffff) goto LAB_0044c5c3;
  if (local_70 != (longlong *******)0x2) {
    local_90 = (longlong *******)&DAT_0019470e;
    local_88 = (code *)&DAT_00000015;
    goto LAB_0044c659;
  }
  pppppplVar6 = ppppppplVar5[5];
  if (ppppppplVar5[4] <= pppppplVar6) {
LAB_0044c567:
    local_a8 = (longlong *******)0x3;
    goto LAB_0044c56f;
  }
  pppppplVar3 = *unaff_RBP;
  while( true ) {
    pppppplVar6 = (longlong ******)((longlong)pppppplVar6 + 1);
    uVar11 = (ulonglong)*(byte *)((longlong)pppppplVar3 + -1 + (longlong)pppppplVar6);
    if (0x3a < uVar11) goto LAB_0044c5d9;
    if ((0x100002600U >> (uVar11 & 0x3f) & 1) == 0) break;
    ppppppplVar5[5] = pppppplVar6;
    if (pppppplVar6 == ppppppplVar5[4]) goto LAB_0044c567;
  }
  if (uVar11 != 0x3a) goto LAB_0044c5d9;
  ppppppplVar5[5] = pppppplVar6;
  <core[c0acaeba6ab4c2e0]::option::Option<u64>as_serde_core[48776c27239fa21f]::de::Deserialize>::
  deserialize::
  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            (&local_90,ppppppplVar5);
  local_70 = local_90;
  if (local_90 == (longlong *******)0x2) goto LAB_0044c4fb;
  local_38 = local_88;
LAB_0044c21a:
  uVar14 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
           ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                     (&local_a8,&local_50);
  if ((char)local_a8 != '\0') goto LAB_0044c079;
  goto LAB_0044c231;
LAB_0044c079:
  pcVar9 = local_a0;
LAB_0044c07e:
  ppppppplVar13 = (longlong *******)0x2;
LAB_0044c084:
  *(char *)(local_60 + 7) = *(char *)(local_60 + 7) + '\x01';
  pcVar8 = (code *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::end_map();
  pcVar12 = local_38;
  pcVar4 = pcVar9;
  if (ppppppplVar13 == (longlong *******)0x2) {
LAB_0044c533:
    if (pcVar8 != (code *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(pcVar8);
    }
  }
  else {
joined_r0x0044c1a9:
    pcVar9 = pcVar8;
    if (pcVar9 == (code *)0x0) {
      *(longlong ********)local_58 = ppppppplVar13;
      *(code **)(local_58 + 8) = pcVar4;
      *(longlong ********)(local_58 + 0x10) = ppppppplVar10;
      *(code **)(local_58 + 0x18) = pcVar12;
      *(longlong ********)(local_58 + 0x20) = unaff_RBP;
      *(code **)(local_58 + 0x28) = local_68;
      return local_58;
    }
  }
LAB_0044c543:
  lVar7 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (pcVar9,local_60);
  param_1 = local_58;
LAB_0044c555:
  *(longlong *)(param_1 + 8) = lVar7;
  *(longlong *)param_1 = 2;
  return param_1;
}


