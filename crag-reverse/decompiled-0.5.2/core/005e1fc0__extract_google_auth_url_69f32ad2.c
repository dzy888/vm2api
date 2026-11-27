// 005e1fc0 extract_google_auth_url

/* craggemini_core[66f3c71560d70857]::oauth::extract_google_auth_url */

void __rustcall
craggemini_core[66f3c71560d70857]::oauth::extract_google_auth_url
          (undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte *local_1a0;
  byte *local_198;
  byte *local_190;
  byte *local_188;
  byte *local_180;
  byte *local_178;
  byte *local_170;
  byte *local_168;
  undefined8 local_160;
  byte *local_158;
  byte *local_150;
  byte *local_148;
  byte *local_140;
  byte *local_138;
  byte *local_120;
  byte *local_118;
  byte *local_110;
  byte *local_f8;
  byte *local_f0;
  byte *local_e8;
  byte *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  ulonglong local_c8;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  undefined8 local_98;
  byte *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined2 local_78;
  byte *local_70;
  longlong local_68;
  char local_60;
  byte *local_58;
  ulonglong local_50;
  char local_48 [8];
  byte *local_40;
  longlong local_38;
  
  puVar5 = PTR_bcmp_00799020;
  local_160 = *param_1;
  uVar19 = param_1[1];
  uVar2 = param_1[2];
  local_68 = -param_3;
  uVar15 = 0;
LAB_005e2023:
  if (param_3 - uVar15 < 0x2a) {
LAB_005e2b49:
    param_1[1] = uVar19;
    param_1[2] = uVar2;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  while( true ) {
    iVar7 = (*(code *)puVar5)();
    if (iVar7 == 0) break;
    uVar15 = uVar15 + 1;
    if (param_3 - 0x29 == uVar15) goto LAB_005e2b49;
  }
  if (uVar15 <= param_3) {
    if (param_3 - uVar15 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      do {
        uVar16 = (ulonglong)*(byte *)(param_2 + uVar15 + lVar9);
        if ((uVar16 < 0x28) && ((0x8508002680U >> (uVar16 & 0x3f) & 1) != 0)) goto LAB_005e20c9;
        lVar9 = lVar9 + 1;
      } while (local_68 + uVar15 + lVar9 != 0);
      lVar9 = param_3 - uVar15;
    }
LAB_005e20c9:
    uVar18 = (*(code *)PTR_from_utf8_00799468)(extraout_XMM0_Qa,lVar9);
    uVar16 = local_50;
    if (local_60 == '\0') {
      if (local_50 < 0x1001) {
        if (local_50 < 0x10) {
          pbVar10 = local_58;
          if (local_50 != 0) {
            uVar8 = 0;
            do {
              if (local_58[uVar8] == 0x23) goto LAB_005e2119;
              uVar8 = uVar8 + 1;
            } while (local_50 != uVar8);
          }
        }
        else {
          local_c0 = local_58;
          lVar9 = (*(code *)PTR_memchr_aligned_00799490)(uVar18,local_50);
          pbVar10 = local_c0;
          if (lVar9 == 1) goto LAB_005e2119;
        }
        pbVar11 = pbVar10;
        do {
          if (pbVar11 == pbVar10 + uVar16) {
            if (0x29 < uVar16) {
              local_c8 = uVar16;
              local_c0 = pbVar10;
              iVar7 = (*(code *)puVar5)(pbVar11,0x2a);
              if (iVar7 == 0) {
                local_b0 = (byte *)(local_c8 - 0x2a);
                local_a8 = local_c0 + 0x2a;
                local_b8 = (byte *)0x0;
                local_98 = 0;
                local_88 = 0x2600000026;
                local_80 = 1;
                local_78 = 1;
                local_140 = (byte *)0xffffffffffffffff;
                local_138 = (byte *)0xffffffffffffffff;
                local_170 = (byte *)0xffffffffffffffff;
                local_180 = (byte *)0xffffffffffffffff;
                pbVar10 = (byte *)0xffffffffffffffff;
                local_a0 = local_b0;
                local_90 = local_b0;
                goto LAB_005e2339;
              }
            }
            break;
          }
          bVar1 = *pbVar11;
          uVar12 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            pbVar14 = pbVar11 + 1;
            if (bVar1 < 0xe0) {
              pbVar11 = pbVar11 + 2;
              uVar12 = (uVar12 & 0x1f) << 6 | *pbVar14 & 0x3f;
            }
            else {
              uVar17 = pbVar11[2] & 0x3f | (*pbVar14 & 0x3f) << 6;
              if (bVar1 < 0xf0) {
                pbVar11 = pbVar11 + 3;
                uVar12 = uVar17 | (uVar12 & 0x1f) << 0xc;
              }
              else {
                pbVar14 = pbVar11 + 3;
                pbVar11 = pbVar11 + 4;
                uVar12 = *pbVar14 & 0x3f | uVar17 << 6 | (uVar12 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar11 = pbVar11 + 1;
          }
        } while ((0x20 < uVar12) || ((0x100002400U >> ((ulonglong)uVar12 & 0x3f) & 1) == 0));
        local_160 = 0xffffffffffffffff;
      }
      else {
LAB_005e2119:
        local_160 = 0xffffffffffffffff;
      }
    }
    goto LAB_005e2280;
  }
  param_1[1] = uVar19;
  param_1[2] = uVar2;
  *param_1 = local_160;
  (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s_src_oauth_rs_0078e768,param_3);
  goto LAB_005e2bbf;
LAB_005e2339:
  do {
    pbVar11 = local_a8;
    local_198 = local_a8;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_f8,&local_a8);
    pbVar14 = local_b8;
    if ((int)local_f8 != 1) {
      if (local_78._1_1_ == '\0') {
        local_78 = CONCAT11(1,(byte)local_78);
        pbVar13 = local_b0 + -(longlong)local_b8;
        pbVar11 = local_a8;
        if ((pbVar13 != (byte *)0x0 | (byte)local_78) == 1) goto LAB_005e23d2;
      }
      pbVar14 = local_188;
      pbVar11 = local_190;
      break;
    }
    pbVar13 = local_f0 + -(longlong)local_b8;
    local_b8 = local_e8;
LAB_005e23d2:
    local_198 = pbVar11 + (longlong)pbVar14;
    local_e8 = (byte *)0x0;
    local_d0 = 1;
    local_d8 = 0x3d0000003d;
    local_f8 = local_198;
    local_f0 = pbVar13;
    local_e0 = pbVar13;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_48,&local_f8);
    pbVar6 = local_40;
    if (local_48[0] == '\0') {
LAB_005e2898:
      local_1a0 = pbVar10;
      goto LAB_005e28a9;
    }
    local_178 = local_40;
    url_decode_query_component(&local_f8,local_198 + local_38,(longlong)pbVar13 - local_38);
    pbVar14 = local_e8;
    pbVar11 = local_f0;
    pbVar13 = local_f8;
    if (local_f8 == (byte *)0xffffffffffffffff) goto LAB_005e2898;
    switch(pbVar6) {
    case (byte *)0x5:
      if (local_198[4] != 0x65 || *(int *)local_198 != 0x74617473) break;
      if ((longlong)local_140 < 1) {
        local_70 = local_e8;
        local_158 = local_f0;
        local_140 = local_f8;
      }
      else {
        local_178 = local_f0;
        local_198 = local_f8;
        (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
        local_70 = pbVar14;
        local_158 = pbVar11;
        local_140 = pbVar13;
      }
      goto LAB_005e26ab;
    case (byte *)0xc:
      if (*(int *)(local_198 + 8) != 0x6972755f || *(longlong *)local_198 != 0x7463657269646572)
      break;
      bVar3 = 0 < (longlong)pbVar10;
      pbVar10 = pbVar13;
      if (bVar3) {
        local_178 = local_f0;
        local_198 = local_f8;
        (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
      }
      goto LAB_005e26ba;
    case (byte *)0xd:
      if (*(longlong *)(local_198 + 5) == 0x657079745f65736e &&
          *(longlong *)local_198 == 0x65736e6f70736572) {
        if ((longlong)local_180 < 1) {
          local_150 = local_e8;
          local_118 = local_f0;
          local_180 = local_f8;
        }
        else {
          local_178 = local_f0;
          local_198 = local_f8;
          (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
          local_150 = pbVar14;
          local_118 = pbVar11;
          local_180 = pbVar13;
        }
        goto LAB_005e26ab;
      }
      break;
    case (byte *)0xe:
      if (*(longlong *)(local_198 + 6) == 0x65676e656c6c6168 &&
          *(longlong *)local_198 == 0x6168635f65646f63) {
        if ((longlong)local_138 < 1) {
          local_148 = local_e8;
          local_110 = local_f0;
          local_138 = local_f8;
        }
        else {
          local_178 = local_f0;
          local_198 = local_f8;
          (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
          local_148 = pbVar14;
          local_110 = pbVar11;
          local_138 = pbVar13;
        }
        goto LAB_005e26ab;
      }
      break;
    case (byte *)0x15:
      auVar20[0] = -(*local_198 == DAT_00182ae0);
      auVar20[1] = -(local_198[1] == UNK_00182ae1);
      auVar20[2] = -(local_198[2] == UNK_00182ae2);
      auVar20[3] = -(local_198[3] == UNK_00182ae3);
      auVar20[4] = -(local_198[4] == UNK_00182ae4);
      auVar20[5] = -(local_198[5] == UNK_00182ae5);
      auVar20[6] = -(local_198[6] == UNK_00182ae6);
      auVar20[7] = -(local_198[7] == UNK_00182ae7);
      auVar20[8] = -(local_198[8] == UNK_00182ae8);
      auVar20[9] = -(local_198[9] == UNK_00182ae9);
      auVar20[10] = -(local_198[10] == UNK_00182aea);
      auVar20[0xb] = -(local_198[0xb] == UNK_00182aeb);
      auVar20[0xc] = -(local_198[0xc] == UNK_00182aec);
      auVar20[0xd] = -(local_198[0xd] == UNK_00182aed);
      auVar20[0xe] = -(local_198[0xe] == UNK_00182aee);
      auVar20[0xf] = -(local_198[0xf] == UNK_00182aef);
      auVar21[0] = -(local_198[5] == DAT_001838b0);
      auVar21[1] = -(local_198[6] == UNK_001838b1);
      auVar21[2] = -(local_198[7] == UNK_001838b2);
      auVar21[3] = -(local_198[8] == UNK_001838b3);
      auVar21[4] = -(local_198[9] == UNK_001838b4);
      auVar21[5] = -(local_198[10] == UNK_001838b5);
      auVar21[6] = -(local_198[0xb] == UNK_001838b6);
      auVar21[7] = -(local_198[0xc] == UNK_001838b7);
      auVar21[8] = -(local_198[0xd] == UNK_001838b8);
      auVar21[9] = -(local_198[0xe] == UNK_001838b9);
      auVar21[10] = -(local_198[0xf] == UNK_001838ba);
      auVar21[0xb] = -(local_198[0x10] == UNK_001838bb);
      auVar21[0xc] = -(local_198[0x11] == UNK_001838bc);
      auVar21[0xd] = -(local_198[0x12] == UNK_001838bd);
      auVar21[0xe] = -(local_198[0x13] == UNK_001838be);
      auVar21[0xf] = -(local_198[0x14] == UNK_001838bf);
      auVar21 = auVar21 & auVar20;
      if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
        if ((longlong)local_170 < 1) {
          local_120 = local_e8;
          local_168 = local_f0;
          local_170 = local_f8;
        }
        else {
          local_178 = local_f0;
          local_198 = local_f8;
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_005e24b2::switchdataD_0019d958,1);
          local_120 = pbVar14;
          local_168 = pbVar11;
          local_170 = pbVar13;
        }
        goto LAB_005e26ab;
      }
    }
    if (local_f8 != (byte *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
LAB_005e26ab:
    pbVar14 = local_188;
    pbVar11 = local_190;
LAB_005e26ba:
    local_190 = pbVar11;
    local_188 = pbVar14;
  } while (local_78._1_1_ == '\0');
  local_1a0 = pbVar10;
  local_190 = pbVar11;
  if ((pbVar10 == (byte *)0xffffffffffffffff) || (pbVar14 != &DAT_00000029)) {
    local_188 = pbVar14;
LAB_005e28a9:
    pbVar10 = local_1a0;
    if (0 < (longlong)local_140) {
      (*(code *)PTR___rust_dealloc_00798fc8)(local_168,1);
    }
joined_r0x005e28f1:
    if (0 < (longlong)local_138) {
      (*(code *)PTR___rust_dealloc_00798fc8)(local_170,1);
      local_198 = pbVar10;
      local_178 = local_190;
    }
    if (local_170 == (byte *)0xffffffffffffffff) goto LAB_005e2962;
  }
  else {
    iVar7 = (*(code *)puVar5)();
    local_198 = pbVar10;
    if (iVar7 != 0) {
      local_188 = &DAT_00000029;
      goto LAB_005e28a9;
    }
    local_188 = &DAT_00000029;
    if ((((local_180 == (byte *)0xffffffffffffffff) || (local_150 != &DAT_00000004)) ||
        (local_150 = &DAT_00000004, *(int *)local_118 != 0x65646f63)) ||
       ((local_170 == (byte *)0xffffffffffffffff || (local_120 != &DAT_00000004))))
    goto LAB_005e28a9;
    if (*(int *)local_168 != 0x36353253) {
      local_120 = &DAT_00000004;
      goto LAB_005e28a9;
    }
    local_b8 = local_140;
    local_b0 = local_158;
    local_a8 = local_70;
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::filter::
    <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::validate_official_auth_url::_closure_0_>
              (&local_f8,&local_b8);
    pbVar14 = local_e8;
    local_1a0 = local_f8;
    if (local_f8 == (byte *)0xffffffffffffffff) {
      local_188 = &DAT_00000029;
      local_120 = &DAT_00000004;
      local_150 = &DAT_00000004;
      goto joined_r0x005e28f1;
    }
    local_190 = local_f0;
    local_178 = local_e8;
    local_b8 = local_138;
    local_b0 = local_110;
    local_a8 = local_148;
    uVar18 = <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>::
             filter::
             <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::validate_official_auth_url::_closure_0_>
                       (&local_f8,&local_b8);
    local_188 = local_f8;
    if (local_f8 != (byte *)0xffffffffffffffff) goto LAB_005e2bfb;
    local_150 = &DAT_00000004;
    local_188 = &DAT_00000029;
    if (local_1a0 != (byte *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
    }
    local_120 = &DAT_00000004;
    local_190 = pbVar11;
    local_178 = pbVar14;
  }
  if (local_170 != (byte *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(local_170,1);
    local_198 = pbVar10;
  }
LAB_005e2962:
  if (0 < (longlong)local_180) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
    local_178 = local_190;
  }
  local_160 = 0xffffffffffffffff;
  if (0 < (longlong)pbVar10) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_005e2280:
  uVar15 = uVar15 + 0x2a;
  if (param_3 < uVar15) {
LAB_005e2bbf:
    param_1[1] = uVar19;
    param_1[2] = uVar2;
    *param_1 = local_160;
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s_src_oauth_rs_0078e780);
LAB_005e2bfb:
    uVar18 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                       (&local_b8,local_c8,0,1,1);
    pbVar11 = local_a8;
    pbVar10 = local_b0;
    if ((char)local_b8 != '\0') {
      param_1[1] = uVar19;
      param_1[2] = uVar2;
      *param_1 = local_160;
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar19 = (*(code *)PTR_memcpy_00799008)(uVar18,local_c8);
    param_1[3] = local_1a0;
    param_1[4] = local_190;
    param_1[5] = local_178;
    if (local_188 != (byte *)0x0) {
      uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(local_178,1);
    }
    if (local_170 != (byte *)0x0) {
      uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
    }
    if (local_180 != (byte *)0x0) {
      uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
    }
    if (local_198 != (byte *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
    }
    param_1[1] = pbVar11;
    param_1[2] = local_c8;
    *param_1 = pbVar10;
    return;
  }
  goto LAB_005e2023;
}


