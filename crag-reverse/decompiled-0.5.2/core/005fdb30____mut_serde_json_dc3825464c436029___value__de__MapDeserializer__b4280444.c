// 005fdb30 <&mut_serde_json[dc3825464c436029]::value::de::MapDeserializer>

/* <<serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_map::<&mut
   serde_json[dc3825464c436029]::value::de::MapDeserializer> */

longlong * __rustcall
<<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_map::<&mut_serde_json[dc3825464c436029]::value::de::MapDeserializer>
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  longlong extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong local_118;
  char *pcStack_110;
  longlong local_108;
  longlong lStack_100;
  char local_f8;
  undefined6 uStack_f7;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined6 uStack_ef;
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  undefined6 uStack_e7;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  ulonglong local_d8;
  char *local_d0;
  longlong local_c8;
  longlong local_b8;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong local_90;
  char *local_88;
  longlong local_80;
  longlong local_78;
  char *pcStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::dying_next(&local_118);
  if (local_118 != 0) {
    lVar8 = *(longlong *)(local_118 + 0x168 + local_108 * 0x18);
    pcVar9 = *(char **)(local_118 + 0x170 + local_108 * 0x18);
    lVar7 = *(longlong *)(local_118 + 0x178 + local_108 * 0x18);
    puVar2 = (undefined8 *)(local_118 + local_108 * 0x20);
    uVar10 = *puVar2;
    uVar4 = puVar2[1];
    puVar2 = (undefined8 *)(local_118 + 0x10 + local_108 * 0x20);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    local_f8 = (char)uVar10;
    uStack_f7 = (undefined6)((ulonglong)uVar10 >> 8);
    uStack_f1 = (undefined1)((ulonglong)uVar10 >> 0x38);
    uStack_f0 = (undefined1)uVar4;
    uStack_ef = (undefined6)((ulonglong)uVar4 >> 8);
    uStack_e9 = (undefined1)((ulonglong)uVar4 >> 0x38);
    uStack_e8 = (undefined1)uVar5;
    uStack_e7 = (undefined6)((ulonglong)uVar5 >> 8);
    uStack_e1 = (undefined1)((ulonglong)uVar5 >> 0x38);
    uStack_e0 = (undefined7)uVar6;
    uStack_d9 = (undefined1)((ulonglong)uVar6 >> 0x38);
    if (lVar8 != -1) {
      pcVar1 = (char *)(param_2 + 0x48);
      if (*(char *)(param_2 + 0x48) != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(pcVar1)
        ;
      }
      *(ulonglong *)(param_2 + 0x58) = CONCAT17(uStack_e1,CONCAT61(uStack_e7,uStack_e8));
      *(ulonglong *)(param_2 + 0x60) = CONCAT17(uStack_d9,uStack_e0);
      *(ulonglong *)pcVar1 = CONCAT17(uStack_f1,CONCAT61(uStack_f7,local_f8));
      *(ulonglong *)(param_2 + 0x50) = CONCAT17(uStack_e9,CONCAT61(uStack_ef,uStack_f0));
      if (lVar7 == 0x1e) {
        auVar12[0] = -(pcVar9[0xe] == DAT_001845d0);
        auVar12[1] = -(pcVar9[0xf] == UNK_001845d1);
        auVar12[2] = -(pcVar9[0x10] == UNK_001845d2);
        auVar12[3] = -(pcVar9[0x11] == UNK_001845d3);
        auVar12[4] = -(pcVar9[0x12] == UNK_001845d4);
        auVar12[5] = -(pcVar9[0x13] == UNK_001845d5);
        auVar12[6] = -(pcVar9[0x14] == UNK_001845d6);
        auVar12[7] = -(pcVar9[0x15] == UNK_001845d7);
        auVar12[8] = -(pcVar9[0x16] == UNK_001845d8);
        auVar12[9] = -(pcVar9[0x17] == UNK_001845d9);
        auVar12[10] = -(pcVar9[0x18] == UNK_001845da);
        auVar12[0xb] = -(pcVar9[0x19] == UNK_001845db);
        auVar12[0xc] = -(pcVar9[0x1a] == UNK_001845dc);
        auVar12[0xd] = -(pcVar9[0x1b] == UNK_001845dd);
        auVar12[0xe] = -(pcVar9[0x1c] == UNK_001845de);
        auVar12[0xf] = -(pcVar9[0x1d] == UNK_001845df);
        auVar11[0] = -(*pcVar9 == s__serde_json__pri1_001837c0[0]);
        auVar11[1] = -(pcVar9[1] == s__serde_json__pri1_001837c0[1]);
        auVar11[2] = -(pcVar9[2] == s__serde_json__pri1_001837c0[2]);
        auVar11[3] = -(pcVar9[3] == s__serde_json__pri1_001837c0[3]);
        auVar11[4] = -(pcVar9[4] == s__serde_json__pri1_001837c0[4]);
        auVar11[5] = -(pcVar9[5] == s__serde_json__pri1_001837c0[5]);
        auVar11[6] = -(pcVar9[6] == s__serde_json__pri1_001837c0[6]);
        auVar11[7] = -(pcVar9[7] == s__serde_json__pri1_001837c0[7]);
        auVar11[8] = -(pcVar9[8] == s__serde_json__pri1_001837c0[8]);
        auVar11[9] = -(pcVar9[9] == s__serde_json__pri1_001837c0[9]);
        auVar11[10] = -(pcVar9[10] == s__serde_json__pri1_001837c0[10]);
        auVar11[0xb] = -(pcVar9[0xb] == s__serde_json__pri1_001837c0[0xb]);
        auVar11[0xc] = -(pcVar9[0xc] == s__serde_json__pri1_001837c0[0xc]);
        auVar11[0xd] = -(pcVar9[0xd] == s__serde_json__pri1_001837c0[0xd]);
        auVar11[0xe] = -(pcVar9[0xe] == s__serde_json__pri1_001837c0[0xe]);
        auVar11[0xf] = -(pcVar9[0xf] == s__serde_json__pri1_001837c0[0xf]);
        auVar11 = auVar11 & auVar12;
        if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) == 0xffff) {
          if (lVar8 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(auVar11._0_8_,1);
          }
          cVar3 = *pcVar1;
          *pcVar1 = -1;
          if (cVar3 == -1) {
            pcStack_110 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
                                  ::custom::<&str>(
                                                  anon_1b4a85c95499e1b671cf4fa96a1b6d0f_88_llvm_10049508496007902178
                                                  ,0x10);
          }
          else {
            uVar10 = *(undefined8 *)(param_2 + 0x49);
            uVar4 = *(undefined8 *)(param_2 + 0x58);
            uStack_f7 = (undefined6)uVar10;
            uStack_f1 = (undefined1)((ulonglong)uVar10 >> 0x30);
            uStack_f0 = (undefined1)((ulonglong)uVar10 >> 0x38);
            uStack_ef = (undefined6)*(undefined8 *)(param_2 + 0x51);
            uStack_e9 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x51) >> 0x30);
            uStack_e8 = (undefined1)uVar4;
            uStack_e7 = (undefined6)((ulonglong)uVar4 >> 8);
            uStack_e1 = (undefined1)((ulonglong)uVar4 >> 0x38);
            uStack_e0 = (undefined7)*(undefined8 *)(param_2 + 0x60);
            uStack_d9 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x38);
            local_f8 = cVar3;
            <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserializer>
            ::deserialize_str::<serde_json[dc3825464c436029]::raw::BoxedFromString>
                      (&local_118,&local_f8);
            pcVar9 = pcStack_110;
            if (local_118 != 0) {
              local_f8 = (char)local_118;
              uStack_f7 = (undefined6)((ulonglong)local_118 >> 8);
              uStack_f1 = (undefined1)((ulonglong)local_118 >> 0x38);
              uStack_f0 = SUB81(pcStack_110,0);
              uStack_ef = (undefined6)((ulonglong)pcStack_110 >> 8);
              uStack_e9 = (undefined1)((ulonglong)pcStack_110 >> 0x38);
              uStack_e8 = 0;
              uStack_e7 = 0;
              uStack_e1 = 0;
              uStack_e0 = 0;
              uStack_d9 = 0;
              local_d8 = local_118;
              local_d0 = pcStack_110;
              serde_json[dc3825464c436029]::de::from_trait::
              <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                        (&local_118,&local_f8);
              if ((char)local_118 == -1) {
                lVar8 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                        ::custom::<serde_json[dc3825464c436029]::error::Error>(pcStack_110);
                param_1[1] = lVar8;
                *(char *)param_1 = -1;
                local_118 = extraout_XMM0_Qa_00;
              }
              else {
                param_1[2] = local_108;
                param_1[3] = lStack_100;
                *param_1 = local_118;
                param_1[1] = (longlong)pcStack_110;
              }
              if (pcVar9 == (char *)0x0) {
                return param_1;
              }
              (*(code *)PTR___rust_dealloc_00798fc8)(local_118,1);
              return param_1;
            }
          }
          param_1[1] = (longlong)pcStack_110;
          *(char *)param_1 = -1;
          return param_1;
        }
      }
      if ((lVar8 == -2) || (lVar8 == -3)) {
        param_1[1] = (longlong)pcVar9;
        *(char *)param_1 = -1;
        return param_1;
      }
      local_a8 = 0;
      local_98 = 0;
      cVar3 = *pcVar1;
      *pcVar1 = -1;
      local_90 = lVar8;
      local_88 = pcVar9;
      local_80 = lVar7;
      if (cVar3 == -1) {
        lVar7 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
                ::custom::<&str>(anon_1b4a85c95499e1b671cf4fa96a1b6d0f_88_llvm_10049508496007902178,
                                 0x10);
        param_1[1] = lVar7;
        *(char *)param_1 = -1;
        uVar10 = extraout_XMM0_Qa;
      }
      else {
        uVar10 = *(undefined8 *)(param_2 + 0x49);
        uVar4 = *(undefined8 *)(param_2 + 0x58);
        uStack_f7 = (undefined6)uVar10;
        uStack_f1 = (undefined1)((ulonglong)uVar10 >> 0x30);
        uStack_f0 = (undefined1)((ulonglong)uVar10 >> 0x38);
        uStack_ef = (undefined6)*(undefined8 *)(param_2 + 0x51);
        uStack_e9 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x51) >> 0x30);
        uStack_e8 = (undefined1)uVar4;
        uStack_e7 = (undefined6)((ulonglong)uVar4 >> 8);
        uStack_e1 = (undefined1)((ulonglong)uVar4 >> 0x38);
        uStack_e0 = (undefined7)*(undefined8 *)(param_2 + 0x60);
        uStack_d9 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x38);
        local_f8 = cVar3;
        uVar10 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                 ::deserialize::<serde_json[dc3825464c436029]::value::Value>(param_1,&local_f8);
        if ((char)*param_1 != -1) {
          local_58 = *param_1;
          lStack_50 = param_1[1];
          local_48 = param_1[2];
          lStack_40 = param_1[3];
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_118,&local_a8,&local_90,&local_58);
          if ((char)local_118 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_118);
          }
          while( true ) {
            <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::dying_next(&local_118,param_2);
            if (local_118 == 0) break;
            lVar8 = *(longlong *)(local_118 + 0x168 + local_108 * 0x18);
            pcVar9 = *(char **)(local_118 + 0x170 + local_108 * 0x18);
            lVar7 = *(longlong *)(local_118 + 0x178 + local_108 * 0x18);
            puVar2 = (undefined8 *)(local_118 + local_108 * 0x20);
            uVar10 = *puVar2;
            uVar4 = puVar2[1];
            puVar2 = (undefined8 *)(local_118 + 0x10 + local_108 * 0x20);
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            local_f8 = (char)uVar10;
            uStack_f7 = (undefined6)((ulonglong)uVar10 >> 8);
            uStack_f1 = (undefined1)((ulonglong)uVar10 >> 0x38);
            uStack_f0 = (undefined1)uVar4;
            uStack_ef = (undefined6)((ulonglong)uVar4 >> 8);
            uStack_e9 = (undefined1)((ulonglong)uVar4 >> 0x38);
            uStack_e8 = (undefined1)uVar5;
            uStack_e7 = (undefined6)((ulonglong)uVar5 >> 8);
            uStack_e1 = (undefined1)((ulonglong)uVar5 >> 0x38);
            uStack_e0 = (undefined7)uVar6;
            uStack_d9 = (undefined1)((ulonglong)uVar6 >> 0x38);
            if (lVar8 == -1) break;
            if (*pcVar1 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (pcVar1);
            }
            *(ulonglong *)(param_2 + 0x58) = CONCAT17(uStack_e1,CONCAT61(uStack_e7,uStack_e8));
            *(ulonglong *)(param_2 + 0x60) = CONCAT17(uStack_d9,uStack_e0);
            *(ulonglong *)pcVar1 = CONCAT17(uStack_f1,CONCAT61(uStack_f7,local_f8));
            *(ulonglong *)(param_2 + 0x50) = CONCAT17(uStack_e9,CONCAT61(uStack_ef,uStack_f0));
            cVar3 = *pcVar1;
            *pcVar1 = -1;
            if (cVar3 == -1) {
              pcVar9 = (char *)<serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::ser::Error>
                               ::custom::<&str>(anon_1b4a85c95499e1b671cf4fa96a1b6d0f_88_llvm_10049508496007902178
                                                ,0x10);
              uVar10 = extraout_XMM0_Qa_01;
LAB_005fdff9:
              if (lVar8 != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
              }
LAB_005fe014:
              param_1[1] = (longlong)pcVar9;
              *(char *)param_1 = -1;
              goto joined_r0x005fdf1e;
            }
            uVar10 = *(undefined8 *)(param_2 + 0x49);
            uVar4 = *(undefined8 *)(param_2 + 0x51);
            uStack_e7 = (undefined6)((ulonglong)*(undefined8 *)(param_2 + 0x58) >> 8);
            uStack_e1 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x58) >> 0x38);
            uStack_e0 = (undefined7)*(undefined8 *)(param_2 + 0x60);
            uStack_d9 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x38);
            uStack_f7 = (undefined6)uVar10;
            uStack_f1 = (undefined1)((ulonglong)uVar10 >> 0x30);
            uStack_f0 = (undefined1)((ulonglong)uVar10 >> 0x38);
            uStack_ef = (undefined6)uVar4;
            uStack_e9 = (undefined1)((ulonglong)uVar4 >> 0x30);
            uStack_e8 = (undefined1)((ulonglong)uVar4 >> 0x38);
            local_f8 = cVar3;
            uVar10 = <core[c0acaeba6ab4c2e0]::marker::PhantomData<serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
                     ::deserialize::<serde_json[dc3825464c436029]::value::Value>
                               (&local_118,&local_f8);
            if ((char)local_118 == -1) {
              pcVar9 = pcStack_110;
              goto LAB_005fdff9;
            }
            local_68 = local_108;
            lStack_60 = lStack_100;
            local_78 = local_118;
            pcStack_70 = pcStack_110;
            if (lVar8 == -2) goto LAB_005fe014;
            local_90 = lVar8;
            local_88 = pcVar9;
            local_80 = lVar7;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_f8,&local_a8,&local_90,&local_118);
            if (local_f8 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_f8);
            }
          }
          uStack_f1 = (undefined1)local_a8;
          uStack_e9 = (undefined1)lStack_a0;
          *(char *)param_1 = '\x05';
          *(ulonglong *)((longlong)param_1 + 1) = CONCAT17(uStack_f1,CONCAT61(uStack_f7,local_f8));
          *(ulonglong *)((longlong)param_1 + 9) =
               CONCAT17(uStack_e9,(int7)((ulonglong)local_a8 >> 8));
          param_1[2] = lStack_a0;
          param_1[3] = local_98;
          return param_1;
        }
      }
      if (lVar8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      }
joined_r0x005fdf1e:
      if (local_a8 == 0) {
        local_b8 = 0;
      }
      else {
        uStack_f0 = 0;
        uStack_ef = 0;
        uStack_e9 = 0;
        uStack_e8 = (undefined1)local_a8;
        uStack_e7 = (undefined6)((ulonglong)local_a8 >> 8);
        uStack_e1 = (undefined1)((ulonglong)local_a8 >> 0x38);
        uStack_e0 = (undefined7)lStack_a0;
        uStack_d9 = (undefined1)((ulonglong)lStack_a0 >> 0x38);
        local_d0 = (char *)0x0;
        local_b8 = local_98;
        local_c8 = local_a8;
      }
      local_f8 = local_a8 != 0;
      local_d8 = (ulonglong)(byte)local_f8;
      uStack_f7 = 0;
      uStack_f1 = 0;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                (&local_f8);
      return param_1;
    }
  }
  *(char *)param_1 = '\x05';
  param_1[1] = 0;
  param_1[3] = 0;
  return param_1;
}


