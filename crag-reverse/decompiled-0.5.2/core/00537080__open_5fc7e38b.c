// 00537080 open

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::open */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::open
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  ulonglong *puVar2;
  ushort uVar3;
  code *pcVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined *puVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  longlong in_FS_OFFSET;
  undefined8 uVar25;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  longlong local_228;
  longlong local_208;
  longlong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined *local_198;
  undefined *puStack_190;
  longlong local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 (*local_168) [16];
  undefined *puStack_160;
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_128;
  undefined1 local_120;
  undefined *local_118;
  undefined *puStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_38;
  
  (*(code *)PTR__join_00799210)(&DAT_0019ba56,param_3,0xe);
  (*(code *)PTR_now_00799478)();
  iVar19 = (int)(uint)local_1b0 >> 0xd;
  iVar16 = iVar19 + -1;
  iVar14 = 0;
  if (iVar19 < 1) {
    iVar14 = (1U - iVar19) / 400 + 1;
    iVar16 = iVar16 + iVar14 * 400;
    iVar14 = iVar14 * -0x23ab1;
  }
  uVar17 = iVar16 * 0x5b5 >> 2;
  uVar12 = (ulonglong)uVar17;
  uVar18 = (local_1a8 & 0xffffffff) / 1000000 +
           ((longlong)
            (int)(((((uint)local_1b0 >> 4 & 0x1ff) + iVar14) - iVar16 / 100) + uVar17 +
                  (iVar16 / 100 >> 2) + -0xaf93b) * 0x15180 + (local_1b0 >> 0x20)) * 1000;
  if ((longlong)uVar18 < 1) {
    uVar18 = 0;
  }
  if ((longlong)local_1c8 < 0) {
LAB_00537163:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (local_1c8 == 0) {
    lVar11 = 1;
    if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') goto LAB_005371c7;
LAB_005375d7:
    local_178 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_178;
    *(ulonglong *)(in_FS_OFFSET + -0x30) = uVar12;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar11 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar11 == 0) goto LAB_00537163;
    uVar12 = local_1c8;
    (*(code *)PTR_memcpy_00799008)();
    if (*(char *)(in_FS_OFFSET + -0x28) != '\x01') goto LAB_005375d7;
LAB_005371c7:
    local_178 = *(longlong *)(in_FS_OFFSET + -0x38);
    uVar12 = *(ulonglong *)(in_FS_OFFSET + -0x30);
  }
  local_148 = local_178 + 1;
  *(longlong *)(in_FS_OFFSET + -0x38) = local_178 + 2;
  local_138 = 0x2000;
  local_130 = 86400000;
  local_198 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078d780;
  puStack_190 = _UNK_0078d788;
  local_188 = _DAT_0078d790;
  lStack_180 = _UNK_0078d798;
  local_168 = (undefined1 (*) [16])
              PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078d780;
  puStack_160 = _UNK_0078d788;
  local_158 = _DAT_0078d790;
  lStack_150 = _UNK_0078d798;
  local_120 = 0;
  local_1a8 = lVar11;
  uStack_170 = uVar12;
  uStack_140 = uVar12;
  local_128 = uVar18;
  uVar25 = (*(code *)PTR_inner_00799760)(local_148,local_1c8);
  if (local_b0 == -1) {
    uVar17 = (uint)local_a8 & 3;
    switch(uVar17) {
    case 0:
      if (local_a8[0x10] == '\0') goto LAB_005376e1;
      goto LAB_0053766f;
    case 1:
      cVar10 = local_a8[0x1f];
      break;
    case 2:
      lVar11 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar10 = (**(code **)(lVar11 + 8))();
      uVar25 = extraout_XMM0_Qa;
      break;
    case 3:
      cVar10 = (char)((ulonglong)local_a8 >> 0x20);
    }
    if (cVar10 != '\0') {
LAB_0053766f:
      param_1[1] = local_a8;
      *param_1 = 0xffffffffffffffff;
      if (local_1c8 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
        local_1d0 = local_1c8;
      }
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_198,local_1d0);
      uVar25 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(&local_168);
      goto joined_r0x005376b0;
    }
LAB_005376e1:
    if ((1 < uVar17 - 2) && (((ulonglong)local_a8 & 3) != 0)) {
      puStack_90 = local_a8 + -1;
      local_98 = (undefined *)CONCAT71(local_98._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
  }
  else {
    local_98 = local_a8;
    puStack_90 = local_a0;
    local_88 = (undefined1  [16])0x0;
    serde_json[dc3825464c436029]::de::from_trait::
    <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedStickyIndex>
              (&local_118,&local_98);
    if (local_118 == (undefined *)0x0) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (&puStack_110);
    }
    else {
      local_38 = local_b8;
      local_58 = local_d8;
      lStack_50 = lStack_d0;
      local_68 = local_e8;
      uStack_64 = uStack_e4;
      uStack_60 = uStack_e0;
      uStack_5c = uStack_dc;
      local_78 = local_f8;
      uStack_74 = uStack_f4;
      uStack_70 = uStack_f0;
      uStack_6c = uStack_ec;
      local_88._8_8_ = lStack_100;
      local_88._0_8_ = local_108;
      local_98 = local_118;
      puStack_90 = puStack_110;
      if ((int)local_b8 == 2) {
        <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_198);
        local_178 = CONCAT44(uStack_f4,local_f8);
        uStack_170 = CONCAT44(uStack_ec,uStack_f0);
        local_188 = local_108;
        lStack_180 = lStack_100;
        local_198 = local_118;
        puStack_190 = puStack_110;
        <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_168);
        lVar11 = lStack_180;
        local_168 = (undefined1 (*) [16])CONCAT44(uStack_e4,local_e8);
        puStack_160 = (undefined *)CONCAT44(uStack_dc,uStack_e0);
        local_158 = local_d8;
        lStack_150 = lStack_d0;
        local_148 = CONCAT44(uStack_c4,local_c8);
        uStack_140 = CONCAT44(uStack_bc,uStack_c0);
        local_1b8 = 86400000;
        local_1c0 = uVar18;
        <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
        ::retain::
        <<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::prune_expired_at::_closure_0_>
                  (&local_198,&local_1c0,&local_1b8);
        puVar9 = puStack_160;
        pauVar8 = local_168;
        if (lStack_150 == 0) {
          local_228 = 0;
        }
        else {
          auVar26 = *local_168;
          uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
          pauVar24 = local_168 + 1;
          local_208 = local_158;
          local_228 = lStack_150;
          pauVar22 = local_168;
          lVar23 = lStack_150;
          do {
            if ((short)uVar17 == 0) {
              do {
                auVar26 = *pauVar24;
                pauVar22 = pauVar22 + -0x58;
                pauVar24 = pauVar24 + 1;
                uVar17 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar17 == 0);
            }
            uVar20 = 0;
            for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar20 = uVar20 + 1;
            }
            puVar2 = (ulonglong *)((longlong)pauVar22 + (ulonglong)uVar20 * -0x58 + -8);
            uVar12 = uVar18 - *puVar2;
            if (uVar18 < *puVar2) {
              uVar12 = 0;
            }
            if (86400000 < uVar12) {
              lVar21 = (ulonglong)uVar20 * -0x58 + (longlong)pauVar22;
              lVar13 = ((longlong)pauVar8 - lVar21 >> 3) * 0x2e8ba2e8ba2e8ba3;
              uVar12 = lVar13 - 0x10U & (ulonglong)puVar9;
              pcVar1 = *pauVar8 + uVar12;
              auVar26[0] = -(*pcVar1 == -1);
              auVar26[1] = -(pcVar1[1] == -1);
              auVar26[2] = -(pcVar1[2] == -1);
              auVar26[3] = -(pcVar1[3] == -1);
              auVar26[4] = -(pcVar1[4] == -1);
              auVar26[5] = -(pcVar1[5] == -1);
              auVar26[6] = -(pcVar1[6] == -1);
              auVar26[7] = -(pcVar1[7] == -1);
              auVar26[8] = -(pcVar1[8] == -1);
              auVar26[9] = -(pcVar1[9] == -1);
              auVar26[10] = -(pcVar1[10] == -1);
              auVar26[0xb] = -(pcVar1[0xb] == -1);
              auVar26[0xc] = -(pcVar1[0xc] == -1);
              auVar26[0xd] = -(pcVar1[0xd] == -1);
              auVar26[0xe] = -(pcVar1[0xe] == -1);
              auVar26[0xf] = -(pcVar1[0xf] == -1);
              uVar5 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar26[0xf] >> 7) << 0xf;
              pcVar1 = (char *)((longlong)pauVar8 + lVar13);
              auVar27[0] = -(*pcVar1 == -1);
              auVar27[1] = -(pcVar1[1] == -1);
              auVar27[2] = -(pcVar1[2] == -1);
              auVar27[3] = -(pcVar1[3] == -1);
              auVar27[4] = -(pcVar1[4] == -1);
              auVar27[5] = -(pcVar1[5] == -1);
              auVar27[6] = -(pcVar1[6] == -1);
              auVar27[7] = -(pcVar1[7] == -1);
              auVar27[8] = -(pcVar1[8] == -1);
              auVar27[9] = -(pcVar1[9] == -1);
              auVar27[10] = -(pcVar1[10] == -1);
              auVar27[0xb] = -(pcVar1[0xb] == -1);
              auVar27[0xc] = -(pcVar1[0xc] == -1);
              auVar27[0xd] = -(pcVar1[0xd] == -1);
              auVar27[0xe] = -(pcVar1[0xe] == -1);
              auVar27[0xf] = -(pcVar1[0xf] == -1);
              uVar3 = 0xf;
              if (uVar5 != 0) {
                for (; uVar5 >> uVar3 == 0; uVar3 = uVar3 - 1) {
                }
              }
              sVar6 = 0;
              for (uVar20 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(auVar27[0xf] >> 7) << 0xf) | 0x10000; (uVar20 & 1) == 0
                  ; uVar20 = uVar20 >> 1 | 0x80000000) {
                sVar6 = sVar6 + 1;
              }
              uVar15 = 0x80;
              if ((ushort)(sVar6 + (uVar3 ^ 0xf)) < 0x10) {
                local_208 = local_208 + 1;
                uVar15 = 0xff;
                local_158 = local_208;
              }
              *(undefined1 *)((longlong)pauVar8 + lVar13) = uVar15;
              pauVar8[1][uVar12] = uVar15;
              local_228 = local_228 + -1;
              lStack_150 = local_228;
              if (*(longlong *)(lVar21 + -0x58) != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)();
              }
              if (*(longlong *)(lVar21 + -0x40) != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)();
              }
              if (*(longlong *)(lVar21 + -0x28) != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)();
              }
            }
            uVar17 = uVar17 - 1 & uVar17;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        if ((lStack_180 != lVar11) || (local_228 != lStack_d0)) {
          local_120 = 1;
        }
      }
      else {
        <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_118);
        <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_68);
      }
    }
    if (local_b0 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  uVar25 = (*(code *)PTR_memcpy_00799008)();
joined_r0x005376b0:
  if (local_1d8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
  }
  return param_1;
}


