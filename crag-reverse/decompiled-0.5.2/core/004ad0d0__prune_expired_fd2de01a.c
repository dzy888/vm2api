// 004ad0d0 prune_expired

/* WARNING: Removing unreachable block (ram,0x004ad533) */
/* <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::prune_expired */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::prune_expired
          (longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong local_138;
  longlong local_118;
  ulonglong local_e8 [2];
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_60;
  
  local_118 = 0;
  lVar26 = *(longlong *)(param_1 + 0x30);
  local_e8[0] = param_2;
  if (lVar26 == 0) {
    local_118 = 0;
  }
  else {
    pauVar17 = *(undefined1 (**) [16])(param_1 + 0x18);
    auVar29 = *pauVar17;
    uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
    pauVar22 = pauVar17 + 1;
    do {
      if ((short)uVar12 == 0) {
        do {
          auVar29 = *pauVar22;
          pauVar17 = pauVar17 + -0x80;
          pauVar22 = pauVar22 + 1;
          uVar12 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar12 == 0);
      }
      iVar7 = 0;
      for (uVar13 = uVar12; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
        iVar7 = iVar7 + 1;
      }
      uVar13 = iVar7 << 7;
      uVar24 = *(ulonglong *)((longlong)pauVar17 + (-0x20 - (ulonglong)uVar13));
      if (uVar24 == 0) {
LAB_004ad2f0:
        if ((*(char *)((longlong)pauVar17 + (-8 - (ulonglong)uVar13)) == '\0') &&
           (*(longlong *)((longlong)pauVar17 + (-0x50 - (ulonglong)uVar13)) == -1)) {
          (*(code *)PTR_clone_00798fd0)();
          if (local_118 == 0) {
            (*(code *)PTR_grow_one_00799328)();
          }
          *(undefined8 *)(local_118 * 0x18 + 0x18) = local_88;
          auVar9._8_8_ = uStack_90;
          auVar9._0_8_ = local_98;
          *(undefined1 (*) [16])(local_118 * 0x18 + 8) = auVar9;
          local_118 = local_118 + 1;
        }
      }
      else {
        pauVar2 = *(undefined1 (**) [16])((longlong)pauVar17 + (-0x38 - (ulonglong)uVar13));
        uVar3 = *(ulonglong *)((longlong)pauVar17 + (-0x30 - (ulonglong)uVar13));
        auVar29 = *pauVar2;
        uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf);
        pauVar19 = pauVar2 + 1;
        local_138 = *(longlong *)((longlong)pauVar17 + (-0x28 - (ulonglong)uVar13));
        uVar18 = uVar24;
        uVar20 = uVar24;
        pauVar21 = pauVar2;
        do {
          if ((short)uVar16 == 0) {
            do {
              auVar29 = *pauVar19;
              pauVar21 = pauVar21 + -0x20;
              pauVar19 = pauVar19 + 1;
              uVar16 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar16 == 0);
          }
          iVar7 = 0;
          for (uVar25 = uVar16; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          lVar14 = (longlong)pauVar21 - (ulonglong)(uint)(iVar7 << 5);
          if (*(ulonglong *)(lVar14 + -0x18) <= param_2) {
            lVar14 = (longlong)pauVar2 - lVar14 >> 5;
            uVar23 = lVar14 - 0x10U & uVar3;
            pcVar1 = *pauVar2 + uVar23;
            auVar29[0] = -(*pcVar1 == -1);
            auVar29[1] = -(pcVar1[1] == -1);
            auVar29[2] = -(pcVar1[2] == -1);
            auVar29[3] = -(pcVar1[3] == -1);
            auVar29[4] = -(pcVar1[4] == -1);
            auVar29[5] = -(pcVar1[5] == -1);
            auVar29[6] = -(pcVar1[6] == -1);
            auVar29[7] = -(pcVar1[7] == -1);
            auVar29[8] = -(pcVar1[8] == -1);
            auVar29[9] = -(pcVar1[9] == -1);
            auVar29[10] = -(pcVar1[10] == -1);
            auVar29[0xb] = -(pcVar1[0xb] == -1);
            auVar29[0xc] = -(pcVar1[0xc] == -1);
            auVar29[0xd] = -(pcVar1[0xd] == -1);
            auVar29[0xe] = -(pcVar1[0xe] == -1);
            auVar29[0xf] = -(pcVar1[0xf] == -1);
            uVar5 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar29[0xf] >> 7) << 0xf;
            pcVar1 = *pauVar2 + lVar14;
            auVar30[0] = -(*pcVar1 == -1);
            auVar30[1] = -(pcVar1[1] == -1);
            auVar30[2] = -(pcVar1[2] == -1);
            auVar30[3] = -(pcVar1[3] == -1);
            auVar30[4] = -(pcVar1[4] == -1);
            auVar30[5] = -(pcVar1[5] == -1);
            auVar30[6] = -(pcVar1[6] == -1);
            auVar30[7] = -(pcVar1[7] == -1);
            auVar30[8] = -(pcVar1[8] == -1);
            auVar30[9] = -(pcVar1[9] == -1);
            auVar30[10] = -(pcVar1[10] == -1);
            auVar30[0xb] = -(pcVar1[0xb] == -1);
            auVar30[0xc] = -(pcVar1[0xc] == -1);
            auVar30[0xd] = -(pcVar1[0xd] == -1);
            auVar30[0xe] = -(pcVar1[0xe] == -1);
            auVar30[0xf] = -(pcVar1[0xf] == -1);
            uVar4 = 0xf;
            if (uVar5 != 0) {
              for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
              }
            }
            sVar6 = 0;
            for (uVar25 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar30[0xf] >> 7) << 0xf) | 0x10000; (uVar25 & 1) == 0;
                uVar25 = uVar25 >> 1 | 0x80000000) {
              sVar6 = sVar6 + 1;
            }
            uVar11 = 0x80;
            if ((ushort)(sVar6 + (uVar4 ^ 0xf)) < 0x10) {
              local_138 = local_138 + 1;
              *(longlong *)((longlong)pauVar17 + (-0x28 - (ulonglong)uVar13)) = local_138;
              uVar11 = 0xff;
            }
            (*pauVar2)[lVar14] = uVar11;
            pauVar2[1][uVar23] = uVar11;
            uVar18 = uVar18 - 1;
            *(ulonglong *)((longlong)pauVar17 + (-0x20 - (ulonglong)uVar13)) = uVar18;
          }
          uVar16 = uVar16 - 1 & uVar16;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        if (uVar18 < uVar24) {
          *(undefined1 *)(param_1 + 0x80) = 1;
          uVar18 = *(ulonglong *)((longlong)pauVar17 + (-0x20 - (ulonglong)uVar13));
        }
        if (uVar18 == 0) goto LAB_004ad2f0;
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  puVar10 = PTR___rust_dealloc_00798fc8;
  plVar27 = (longlong *)(local_118 * 0x18 + 8);
  local_e8[1] = 8;
  local_d8 = (longlong *)&DAT_00000008;
  local_d0 = 0;
  local_c8 = plVar27;
  if (local_118 != 0) {
    plVar8 = (longlong *)&DAT_00000008;
    do {
      plVar15 = plVar8 + 3;
      lVar26 = *plVar8;
      local_a8 = plVar8[1];
      lStack_a0 = plVar8[2];
      if (lVar26 == -1) break;
      local_c0 = lVar26;
      local_b8 = local_a8;
      lStack_b0 = lStack_a0;
      uVar28 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
               ::remove::<alloc[12e961f32105355]::string::String>
                         (&local_98,(undefined8 *)(param_1 + 0x18),&local_c0);
      lVar14 = local_98;
      if (local_98 != -2) {
        if ((local_60 != 0) && (local_60 * 0x21 != -0x31)) {
          uVar28 = (*(code *)puVar10)(uVar28,0x10);
        }
        if ((lVar14 != -1) && (lVar14 != 0)) {
          uVar28 = (*(code *)puVar10)(uVar28,1);
        }
        if ((local_80 != -1) && (local_80 != 0)) {
          uVar28 = (*(code *)puVar10)(uVar28,1);
        }
      }
      if (lVar26 != 0) {
        (*(code *)puVar10)(uVar28,1);
      }
      plVar8 = plVar15;
    } while (plVar15 != plVar27);
    local_d8 = plVar15;
  }
  puVar10 = PTR___rust_dealloc_00798fc8;
  if (plVar27 != local_d8) {
    uVar24 = (ulonglong)((longlong)plVar27 - (longlong)local_d8) / 0x18;
    plVar27 = local_d8 + 1;
    do {
      if (plVar27[-1] != 0) {
        (*(code *)puVar10)();
      }
      plVar27 = plVar27 + 3;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,u64,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::retain::
  <<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::prune_expired::_closure_1_>
            (param_1 + 0x48,local_e8);
  return;
}


