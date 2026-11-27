// 0048c390 clone

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,
   std[6c98fd8553dbae28]::hash::random::RandomState> as core[c0acaeba6ab4c2e0]::clone::Clone>::clone
    */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  undefined8 uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  undefined1 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong local_190;
  longlong local_188;
  undefined8 local_168;
  undefined8 local_160;
  undefined7 local_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined8 local_f8;
  undefined *local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined7 uStack_6f;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 5);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar14 = param_2[1];
  if (lVar14 == 0) {
    local_d8 = _DAT_0078aa80;
    lStack_d0 = _UNK_0078aa88;
    local_e8 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    lStack_e0 = _UNK_0078aa78;
    goto LAB_0048c939;
  }
  if (lVar14 + 1U >> 0x39 == 0) {
    uVar25 = (lVar14 + 1U) * 0x80;
    uVar29 = uVar25 + lVar14 + 0x11U;
    if (0x7ffffffffffffff0 < uVar29 || CARRY8(uVar25,lVar14 + 0x11U)) goto LAB_0048c3f6;
    if (uVar29 != 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar23 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar23 != 0) goto LAB_0048c474;
      lVar14 = (*(code *)PTR_alloc_err_00799998)();
      goto LAB_0048c401;
    }
    lVar23 = 0x10;
LAB_0048c474:
    puVar15 = (undefined *)(lVar23 + uVar25);
  }
  else {
LAB_0048c3f6:
    lVar14 = (*(code *)PTR_capacity_overflow_00799958)();
LAB_0048c401:
    puVar15 = (undefined *)0x0;
  }
  pauVar3 = (undefined1 (*) [16])*param_2;
  (*(code *)PTR_memcpy_00799008)();
  lStack_d0 = param_2[3];
  if (lStack_d0 != 0) {
    auVar1 = *pauVar3;
    uVar21 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauVar20 = pauVar3 + 1;
    lVar23 = lStack_d0;
    pauVar27 = pauVar3;
    do {
      if ((short)uVar21 == 0) {
        do {
          auVar1 = *pauVar20;
          pauVar27 = pauVar27 + -0x80;
          pauVar20 = pauVar20 + 1;
          uVar21 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar21 == 0);
      }
      iVar5 = 0;
      for (uVar22 = uVar21; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      lVar26 = (longlong)pauVar27 - (ulonglong)(uint)(iVar5 << 7);
      (*(code *)PTR_clone_00798fd0)();
      uVar10 = *(undefined8 *)(lVar26 + -0x18);
      uVar11 = *(undefined8 *)(lVar26 + -0x10);
      local_188 = *(longlong *)(lVar26 + -0x30);
      if (local_188 == 0) {
        local_190 = 0;
        local_160 = 0;
        local_188 = 0;
        puVar28 = anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267;
      }
      else {
        if (local_188 + 1U >> 0x3b == 0) {
          uVar29 = (local_188 + 1U) * 0x20;
          uVar25 = local_188 + 0x11;
          uVar30 = uVar29 + uVar25;
          if (0x7ffffffffffffff0 < uVar30 || CARRY8(uVar29,uVar25)) goto LAB_0048c6e7;
          if (uVar30 != 0) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar17 = (*(code *)PTR___rust_alloc_00799000)();
            uVar31 = extraout_XMM0_Qa_00;
            if (lVar17 != 0) goto LAB_0048c794;
            local_188 = (*(code *)PTR_alloc_err_00799998)(extraout_XMM0_Qa_00,uVar30);
            uVar31 = extraout_XMM0_Qa_01;
            goto LAB_0048c6f2;
          }
          lVar17 = 0x10;
          uVar31 = uVar10;
LAB_0048c794:
          puVar28 = (undefined1 *)(lVar17 + uVar29);
        }
        else {
LAB_0048c6e7:
          local_188 = (*(code *)PTR_capacity_overflow_00799958)();
          uVar31 = extraout_XMM0_Qa;
LAB_0048c6f2:
          uVar25 = local_188 + 0x11;
          puVar28 = (undefined1 *)0x0;
        }
        pauVar4 = *(undefined1 (**) [16])(lVar26 + -0x38);
        (*(code *)PTR_memcpy_00799008)(uVar31,uVar25);
        local_190 = *(longlong *)(lVar26 + -0x20);
        if (local_190 != 0) {
          auVar1 = *pauVar4;
          uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
          pauVar16 = pauVar4 + 1;
          lVar17 = local_190;
          pauVar19 = pauVar4;
          do {
            if ((short)uVar22 == 0) {
              do {
                auVar1 = *pauVar16;
                pauVar19 = pauVar19 + -0x20;
                pauVar16 = pauVar16 + 1;
                uVar22 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar22 == 0);
            }
            iVar5 = 0;
            for (uVar24 = uVar22; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            uVar22 = uVar22 - 1 & uVar22;
            uVar24 = iVar5 << 5;
            uVar31 = *(undefined8 *)((longlong)pauVar19 + (-8 - (ulonglong)uVar24));
            uStack_121 = (undefined1)uVar31;
            uVar18 = *(undefined8 *)((longlong)pauVar19 + (-0x18 - (ulonglong)uVar24));
            uVar12 = *(undefined8 *)((longlong)pauVar19 + (-0x10 - (ulonglong)uVar24));
            lVar13 = -(longlong)pauVar4 - (ulonglong)uVar24;
            uStack_131 = (undefined1)uVar18;
            uStack_130 = (undefined7)((ulonglong)uVar18 >> 8);
            uStack_129 = (undefined1)uVar12;
            uStack_128 = (undefined7)((ulonglong)uVar12 >> 8);
            (puVar28 + lVar13 + -0x20)[(longlong)*pauVar19] =
                 *(undefined1 *)((longlong)pauVar19 + (-0x20 - (ulonglong)uVar24));
            *(ulonglong *)(puVar28 + lVar13 + -0x1f + (longlong)*pauVar19) =
                 CONCAT17(uStack_131,local_138);
            *(ulonglong *)((longlong)(puVar28 + lVar13 + -0x1f + (longlong)*pauVar19) + 8) =
                 CONCAT17(uStack_129,uStack_130);
            *(undefined8 *)(puVar28 + lVar13 + -0x10 + (longlong)*pauVar19) = uVar12;
            *(undefined8 *)((longlong)(puVar28 + lVar13 + -0x10 + (longlong)*pauVar19) + 8) = uVar31
            ;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        local_160 = *(undefined8 *)(lVar26 + -0x28);
      }
      uVar2 = *(undefined1 *)(lVar26 + -8);
      uVar31 = 0xffffffffffffffff;
      uVar18 = 0xffffffffffffffff;
      if (*(longlong *)(lVar26 + -0x68) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        uVar18 = CONCAT17(uStack_131,local_138);
        local_168 = CONCAT17(uStack_129,uStack_130);
        local_f8 = CONCAT17(uStack_121,uStack_128);
      }
      if (*(longlong *)(lVar26 + -0x50) != -1) {
        (*(code *)PTR_clone_00798fd0)();
        uVar31 = CONCAT17(uStack_131,local_138);
        local_48 = CONCAT17(uStack_129,uStack_130);
        uStack_40 = CONCAT17(uStack_121,uStack_128);
      }
      uVar21 = uVar21 - 1 & uVar21;
      lVar26 = (longlong)pauVar3 - lVar26;
      *(undefined8 *)(puVar15 + (-0x10 - lVar26)) = uVar11;
      *(ulonglong *)(puVar15 + (-8 - lVar26)) = CONCAT71(uStack_6f,uVar2);
      *(longlong *)(puVar15 + (-0x20 - lVar26)) = local_190;
      *(undefined8 *)(puVar15 + (-0x18 - lVar26)) = uVar10;
      *(longlong *)(puVar15 + (-0x30 - lVar26)) = local_188;
      *(undefined8 *)(puVar15 + (-0x28 - lVar26)) = local_160;
      *(undefined8 *)(puVar15 + (-0x40 - lVar26)) = uStack_40;
      *(undefined1 **)(puVar15 + (-0x38 - lVar26)) = puVar28;
      auVar1._8_8_ = lStack_e0;
      auVar1._0_8_ = local_e8;
      *(undefined8 *)(puVar15 + (-0x50 - lVar26)) = uVar31;
      *(undefined8 *)(puVar15 + (-0x48 - lVar26)) = local_48;
      *(undefined8 *)(puVar15 + (-0x60 - lVar26)) = local_168;
      *(undefined8 *)(puVar15 + (-0x58 - lVar26)) = local_f8;
      *(undefined8 *)(puVar15 + (-0x70 - lVar26)) = local_d8;
      *(undefined8 *)(puVar15 + (-0x68 - lVar26)) = uVar18;
      *(undefined1 (*) [16])(puVar15 + (-0x80 - lVar26)) = auVar1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  local_d8 = param_2[2];
  local_e8 = puVar15;
  lStack_e0 = lVar14;
LAB_0048c939:
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 5) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
  *param_1 = local_e8;
  param_1[1] = lStack_e0;
  param_1[2] = local_d8;
  param_1[3] = lStack_d0;
  return param_1;
}


