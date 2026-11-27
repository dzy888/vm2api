// 0041de90 <<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,usize,std[6c98fd8553dbae28]::hash::random::RandomState>>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_map::<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,
   _, _> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,
   usize, std[6c98fd8553dbae28]::hash::random::RandomState>> */

undefined8 * __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_map::
<<std[6c98fd8553dbae28]::collections::hash::map::HashMap<_,_,_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::MapVisitor<alloc[12e961f32105355]::string::String,usize,std[6c98fd8553dbae28]::hash::random::RandomState>>
          (undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char *pcVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_d0;
  undefined1 local_c1;
  undefined8 *local_c0;
  undefined1 (*local_b8) [16];
  longlong lStack_b0;
  undefined1 (*local_a8) [16];
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined1 (*local_78) [16];
  longlong lStack_70;
  longlong local_68;
  undefined1 local_60;
  undefined1 (*local_58) [16];
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  
  uVar8 = *(ulonglong *)(param_2 + 0x28);
  if (uVar8 < *(ulonglong *)(param_2 + 0x20)) {
    lVar11 = *(longlong *)(param_2 + 0x18);
    do {
      uVar8 = uVar8 + 1;
      bVar3 = *(byte *)(lVar11 + -1 + uVar8);
      if ((0x20 < (ulonglong)bVar3) || ((0x100002600U >> ((ulonglong)bVar3 & 0x3f) & 1) == 0)) {
        if (bVar3 != 0x7b) {
          lVar11 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                   ::peek_invalid_type(param_2,&local_c1,&DAT_0078a180);
          goto LAB_0041e333;
        }
        pcVar2 = (char *)(param_2 + 0x38);
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          local_b8 = (undefined1 (*) [16])0x18;
          goto LAB_0041def5;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar8;
        local_60 = 1;
        local_c0 = param_1;
        local_68 = param_2;
        if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
          local_98 = *(longlong *)(in_FS_OFFSET + -0x38);
          lVar11 = *(longlong *)(in_FS_OFFSET + -0x30);
        }
        else {
          local_98 = (*(code *)PTR_hashmap_random_keys_00799248)();
          *(longlong *)(in_FS_OFFSET + -0x38) = local_98;
          *(longlong *)(in_FS_OFFSET + -0x30) = lVar11;
          *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
        }
        *(longlong *)(in_FS_OFFSET + -0x38) = local_98 + 1;
        <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
        <alloc[12e961f32105355]::alloc::Global>(&local_88,0x20,0);
        local_b8 = local_88;
        lStack_b0 = lStack_80;
        local_a8 = local_78;
        lStack_a0 = lStack_70;
        lStack_90 = lVar11;
        goto LAB_0041df9a;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar8;
    } while (uVar8 != *(ulonglong *)(param_2 + 0x20));
  }
  local_b8 = (undefined1 (*) [16])0x5;
LAB_0041def5:
  uVar9 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_b8);
  goto LAB_0041e33e;
LAB_0041df9a:
  puVar7 = PTR_parse_str_007998f8;
  uVar9 = <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>
          ::next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>
                    (&local_88,&local_68);
  lVar11 = local_68;
  if ((char)local_88 == '\x01') goto LAB_0041e149;
  if (local_88._1_1_ != '\x01') {
    local_58 = local_a8;
    lStack_50 = lStack_a0;
    local_48 = local_98;
    lStack_40 = lStack_90;
    goto LAB_0041e260;
  }
  plVar1 = (longlong *)(local_68 + 0x18);
  *(longlong *)(local_68 + 0x28) = *(longlong *)(local_68 + 0x28) + 1;
  *(undefined8 *)(local_68 + 0x10) = 0;
  uVar9 = (*(code *)puVar7)(uVar9,local_68);
  lVar10 = lStack_80;
  if ((int)local_88 == 2) goto LAB_0041e191;
  if ((longlong)local_78 < 0) {
LAB_0041e13b:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (local_78 == (undefined1 (*) [16])0x0) {
    local_d0 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_d0 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_d0 == 0) goto LAB_0041e13b;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,local_78);
  }
  uVar8 = *(ulonglong *)(lVar11 + 0x28);
  if (*(ulonglong *)(lVar11 + 0x20) <= uVar8) {
LAB_0041e0a0:
    local_88 = (undefined1 (*) [16])0x3;
    lVar10 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(lVar11,&local_88);
    uVar9 = extraout_XMM0_Qa_00;
LAB_0041e179:
    if (local_78 != (undefined1 (*) [16])0x0) {
      uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
    }
    goto LAB_0041e191;
  }
  lVar10 = *plVar1;
  while( true ) {
    uVar8 = uVar8 + 1;
    uVar14 = (ulonglong)*(byte *)(lVar10 + -1 + uVar8);
    if (0x3a < uVar14) goto LAB_0041e11f;
    if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
    *(ulonglong *)(lVar11 + 0x28) = uVar8;
    if (uVar8 == *(ulonglong *)(lVar11 + 0x20)) goto LAB_0041e0a0;
  }
  if (uVar14 != 0x3a) {
LAB_0041e11f:
    local_88 = (undefined1 (*) [16])&DAT_00000006;
    lVar10 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(lVar11,&local_88);
    uVar9 = extraout_XMM0_Qa_02;
    goto LAB_0041e179;
  }
  *(ulonglong *)(lVar11 + 0x28) = uVar8;
  auVar18 = deserialize_u64::
            <<usize_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                      (lVar11);
  lVar10 = auVar18._8_8_;
  uVar9 = extraout_XMM0_Qa_01;
  if (auVar18._0_8_ == 1) goto LAB_0041e179;
  local_88 = local_78;
  lStack_80 = local_d0;
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,u64,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::insert(&local_b8,&local_88,lVar10);
  goto LAB_0041df9a;
LAB_0041e149:
  lVar10 = lStack_80;
LAB_0041e191:
  lVar11 = lStack_b0;
  if (lStack_b0 == 0) {
    pauVar12 = (undefined1 (*) [16])0x0;
  }
  else {
    if (lStack_a0 != 0) {
      auVar18 = *local_b8;
      pauVar12 = local_b8 + 1;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
      pauVar15 = local_b8;
      lVar16 = lStack_a0;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar18 = *pauVar12;
            pauVar15 = pauVar15 + -0x20;
            pauVar12 = pauVar12 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
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
          } while (uVar13 == 0);
        }
        iVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        if (*(longlong *)((longlong)pauVar15 + (-0x20 - (ulonglong)(uint)(iVar5 << 5))) != 0) {
          auVar18._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)((ulonglong)(uint)(iVar5 << 5),1);
          auVar18._8_8_ = extraout_XMM0_Qb;
        }
        uVar9 = auVar18._0_8_;
        lVar16 = lVar16 + -1;
        uVar13 = uVar13 - 1 & uVar13;
      } while (lVar16 != 0);
    }
    if (lVar11 * 0x21 != -0x31) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,0x10);
    }
    local_b8 = (undefined1 (*) [16])0x0;
    lStack_b0 = lVar10;
LAB_0041e260:
    pauVar12 = local_b8;
    lVar10 = lStack_b0;
  }
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  local_a8 = local_58;
  lStack_a0 = lStack_50;
  local_98 = local_48;
  lStack_90 = lStack_40;
  local_b8 = pauVar12;
  lStack_b0 = lVar10;
  lVar11 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
           ::end_map(param_2);
  if (pauVar12 == (undefined1 (*) [16])0x0) {
    if (lVar11 != 0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>(lVar11);
    }
    lVar11 = lVar10;
LAB_0041e2e7:
    param_1 = local_c0;
  }
  else {
    if (lVar11 == 0) {
      local_c0[2] = local_a8;
      local_c0[3] = lStack_a0;
      local_c0[4] = local_48;
      local_c0[5] = lStack_40;
      *local_c0 = pauVar12;
      local_c0[1] = lVar10;
      return local_c0;
    }
    if (lVar10 == 0) goto LAB_0041e2e7;
    uVar9 = extraout_XMM0_Qa_03;
    if (lStack_a0 != 0) {
      auVar17 = *pauVar12;
      pauVar15 = pauVar12 + 1;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
      lVar16 = lStack_a0;
      do {
        if ((short)uVar13 == 0) {
          do {
            auVar17 = *pauVar15;
            pauVar12 = pauVar12 + -0x20;
            pauVar15 = pauVar15 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
          } while (uVar13 == 0);
        }
        iVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        if (*(longlong *)((longlong)pauVar12 + (-0x20 - (ulonglong)(uint)(iVar5 << 5))) != 0) {
          auVar17._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)((ulonglong)(uint)(iVar5 << 5),1);
          auVar17._8_8_ = extraout_XMM0_Qb_00;
        }
        uVar9 = auVar17._0_8_;
        lVar16 = lVar16 + -1;
        uVar13 = uVar13 - 1 & uVar13;
      } while (lVar16 != 0);
    }
    if (lVar10 * 0x21 != -0x31) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,0x10);
    }
    param_1 = local_c0;
  }
LAB_0041e333:
  uVar9 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
          <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                    (lVar11,param_2);
LAB_0041e33e:
  param_1[1] = uVar9;
  *param_1 = 0;
  return param_1;
}


