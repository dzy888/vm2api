// 000a7120 is_contained_in

/* <&str as core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in */

ulonglong __rustcall
<&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
          (char *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  byte bVar35;
  int iVar36;
  ulonglong uVar37;
  longlong lVar38;
  undefined *puVar39;
  undefined *puVar40;
  longlong lVar41;
  undefined *puVar42;
  uint uVar43;
  uint uVar44;
  longlong lVar45;
  longlong lVar46;
  char *pcVar47;
  undefined1 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  longlong local_e8;
  undefined *local_e0;
  char *local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined *local_c0;
  undefined *local_b0;
  undefined *local_a0;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  longlong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38;
  
  puVar40 = PTR_bcmp_000c3b80;
  if (param_4 <= param_2) {
    if (param_2 == param_4) {
      iVar36 = (*(code *)PTR_bcmp_000c3b80)(param_4,param_2);
      param_1 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),iVar36 == 0);
      goto LAB_000a77a7;
    }
    goto LAB_000a726f;
  }
  cVar2 = *param_1;
  lVar38 = param_2 - 1;
  cVar3 = param_1[param_2 - 1];
  local_80 = lVar38;
  if (cVar3 == cVar2) {
    cVar3 = param_1[param_2 - 2];
    if (cVar3 != cVar2) {
      local_80 = param_2 - 2;
      goto joined_r0x000a7282;
    }
    cVar3 = param_1[param_2 - 3];
    if (cVar3 != cVar2) {
      local_80 = param_2 - 3;
      goto joined_r0x000a7282;
    }
    local_80 = param_2 - 4;
    cVar3 = param_1[local_80];
    if (cVar3 != cVar2) goto joined_r0x000a7282;
    (*(code *)PTR_new_000c3fc0)(param_1,param_4,param_2);
    if ((char)local_e8 == '\0') {
      if (local_d0._2_1_ == '\0') {
        uVar37 = local_d0 & 0xff;
        if (local_e0 == (undefined *)0x0) {
LAB_000a77c2:
          if (local_e0 == local_98) {
            param_1 = (char *)(ulonglong)((byte)local_d0 & 1);
            goto LAB_000a77a7;
          }
          bVar35 = local_a0[(longlong)local_e0];
          uVar44 = (uint)bVar35;
          if ((char)bVar35 < '\0') {
            uVar43 = bVar35 & 0x1f;
            uVar44 = (byte)(local_a0 + 1)[(longlong)local_e0] & 0x3f;
            if (bVar35 < 0xe0) goto LAB_000a789d;
            uVar44 = (byte)(local_a0 + 2)[(longlong)local_e0] & 0x3f | uVar44 << 6;
            if (bVar35 < 0xf0) {
              uVar44 = uVar44 | uVar43 << 0xc;
            }
            else {
              uVar44 = (byte)(local_a0 + 3)[(longlong)local_e0] & 0x3f | uVar44 << 6 |
                       (bVar35 & 7) << 0x12;
            }
          }
          goto LAB_000a78b3;
        }
        if (local_e0 < local_98) {
          uVar48 = local_a0[(longlong)local_e0] == -0x40;
          if (-0x41 < (char)local_a0[(longlong)local_e0]) goto LAB_000a77c2;
        }
        else {
          uVar48 = 0;
          if (local_e0 == local_98) goto LAB_000a77c2;
        }
        goto LAB_000a78f7;
      }
    }
    else {
      puVar40 = local_88 + -1;
      if (local_b0 == (undefined *)0xffffffffffffffff) {
        puVar39 = local_c0 + (longlong)puVar40;
        if (puVar39 < local_98) {
          puVar42 = local_e0 + -1;
          if (puVar42 < local_88) {
LAB_000a7748:
            if ((local_c8 >> ((ulonglong)(byte)local_a0[(longlong)puVar39] & 0x3f) & 1) == 0) {
              local_c0 = local_c0 + (longlong)local_88;
            }
            else {
              lVar38 = -(longlong)local_c0;
              puVar39 = local_e0;
              do {
                if (local_88 == puVar39) {
                  puVar39 = local_e0;
                  goto LAB_000a778a;
                }
                pcVar47 = local_90 + (longlong)puVar39;
                lVar38 = lVar38 + -1;
                pcVar1 = local_a0 + (longlong)local_c0 + (longlong)puVar39;
                puVar39 = puVar39 + 1;
              } while (*pcVar47 == *pcVar1);
              local_c0 = (undefined *)-lVar38;
            }
            goto LAB_000a773c;
          }
          local_90 = local_90 + (longlong)local_e0;
          do {
            if ((local_c8 >> ((ulonglong)(byte)local_a0[(longlong)puVar39] & 0x3f) & 1) == 0) {
              local_c0 = local_c0 + (longlong)local_88;
            }
            else {
              lVar38 = 0;
              puVar39 = local_c0;
              pcVar47 = local_90;
              do {
                if (local_88 <= local_e0 + lVar38) {
                  param_1 = (char *)CONCAT71((int7)((ulonglong)(local_e0 + lVar38) >> 8),1);
                  puVar39 = puVar40;
                  if (local_e0 == (undefined *)0x0) goto LAB_000a77a7;
                  goto LAB_000a7890;
                }
                cVar2 = *pcVar47;
                local_c0 = puVar39 + 1;
                pcVar47 = pcVar47 + 1;
                lVar38 = lVar38 + 1;
                pcVar1 = local_a0 + (longlong)local_e0 + (longlong)puVar39;
                puVar39 = local_c0;
              } while (cVar2 == *pcVar1);
            }
            puVar39 = puVar40 + (longlong)local_c0;
            param_1 = (char *)0x0;
          } while (puVar39 < local_98);
          goto LAB_000a77a7;
        }
      }
      else {
        puVar39 = local_c0 + (longlong)puVar40;
        if (puVar39 < local_98) {
          local_48._0_8_ = local_d0;
LAB_000a767d:
          if ((local_c8 >> ((ulonglong)(byte)local_a0[(longlong)puVar39] & 0x3f) & 1) == 0) {
            local_c0 = local_c0 + (longlong)local_88;
            local_b0 = (undefined *)0x0;
          }
          else {
            puVar42 = local_e0;
            if (local_e0 < local_b0) {
              puVar42 = local_b0;
            }
            param_1 = local_a0 + (longlong)local_c0;
            do {
              puVar39 = local_e0;
              if (local_88 <= puVar42) goto LAB_000a76c9;
              puVar39 = puVar42 + 1;
              pcVar47 = local_90 + (longlong)puVar42;
              pcVar1 = param_1 + (longlong)puVar42;
              puVar42 = puVar39;
            } while (*pcVar47 == *pcVar1);
            local_c0 = puVar39 + ((longlong)local_c0 - (longlong)local_e0);
            local_b0 = (undefined *)0x0;
          }
          goto LAB_000a766d;
        }
      }
    }
  }
  else {
joined_r0x000a7282:
    if (param_2 + 0xf <= param_4) {
      auVar49 = pshuflw(ZEXT216(CONCAT11(cVar2,cVar2)),ZEXT216(CONCAT11(cVar2,cVar2)),0);
      auVar57._0_8_ = auVar49._0_8_;
      auVar57._8_4_ = auVar49._0_4_;
      auVar57._12_4_ = auVar49._4_4_;
      auVar50 = pshuflw(ZEXT216(CONCAT11(cVar3,cVar3)),ZEXT216(CONCAT11(cVar3,cVar3)),0);
      auVar49._0_8_ = auVar50._0_8_;
      auVar49._8_4_ = auVar50._0_4_;
      auVar49._12_4_ = auVar50._4_4_;
      local_d8 = param_1 + 1;
      local_e0 = (undefined *)param_4;
      local_e8 = param_3;
      local_d0 = lVar38;
      local_78 = auVar49;
      local_48 = auVar57;
      if (param_2 + 0x3f < param_4) {
        lVar41 = local_80 + param_3 + 0x30;
        lVar45 = 0;
        local_38 = lVar41;
        do {
          pcVar47 = (char *)(param_3 + lVar45);
          pcVar1 = (char *)(param_3 + 0x10 + lVar45);
          cVar2 = *pcVar1;
          cVar3 = pcVar1[1];
          cVar5 = pcVar1[2];
          cVar6 = pcVar1[3];
          cVar7 = pcVar1[4];
          cVar8 = pcVar1[5];
          cVar9 = pcVar1[6];
          cVar10 = pcVar1[7];
          cVar11 = pcVar1[8];
          cVar12 = pcVar1[9];
          cVar13 = pcVar1[10];
          cVar14 = pcVar1[0xb];
          cVar15 = pcVar1[0xc];
          cVar16 = pcVar1[0xd];
          cVar17 = pcVar1[0xe];
          cVar18 = pcVar1[0xf];
          auVar50 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar45);
          auVar59 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar45);
          auVar51[0] = -(*pcVar47 == auVar57[0]);
          auVar51[1] = -(pcVar47[1] == auVar57[1]);
          auVar51[2] = -(pcVar47[2] == auVar57[2]);
          auVar51[3] = -(pcVar47[3] == auVar57[3]);
          auVar51[4] = -(pcVar47[4] == auVar57[4]);
          auVar51[5] = -(pcVar47[5] == auVar57[5]);
          auVar51[6] = -(pcVar47[6] == auVar57[6]);
          auVar51[7] = -(pcVar47[7] == auVar57[7]);
          auVar51[8] = -(pcVar47[8] == auVar57[8]);
          auVar51[9] = -(pcVar47[9] == auVar57[9]);
          auVar51[10] = -(pcVar47[10] == auVar57[10]);
          auVar51[0xb] = -(pcVar47[0xb] == auVar57[0xb]);
          auVar51[0xc] = -(pcVar47[0xc] == auVar57[0xc]);
          auVar51[0xd] = -(pcVar47[0xd] == auVar57[0xd]);
          auVar51[0xe] = -(pcVar47[0xe] == auVar57[0xe]);
          auVar51[0xf] = -(pcVar47[0xf] == auVar57[0xf]);
          pcVar47 = (char *)(lVar41 + -0x30 + lVar45);
          pcVar1 = (char *)(lVar41 + -0x20 + lVar45);
          cVar19 = *pcVar1;
          cVar20 = pcVar1[1];
          cVar21 = pcVar1[2];
          cVar22 = pcVar1[3];
          cVar23 = pcVar1[4];
          cVar24 = pcVar1[5];
          cVar25 = pcVar1[6];
          cVar26 = pcVar1[7];
          cVar27 = pcVar1[8];
          cVar28 = pcVar1[9];
          cVar29 = pcVar1[10];
          cVar30 = pcVar1[0xb];
          cVar31 = pcVar1[0xc];
          cVar32 = pcVar1[0xd];
          cVar33 = pcVar1[0xe];
          cVar34 = pcVar1[0xf];
          auVar58 = *(undefined1 (*) [16])(lVar41 + -0x10 + lVar45);
          auVar54[0] = -(*pcVar47 == auVar49[0]);
          auVar54[1] = -(pcVar47[1] == auVar49[1]);
          auVar54[2] = -(pcVar47[2] == auVar49[2]);
          auVar54[3] = -(pcVar47[3] == auVar49[3]);
          auVar54[4] = -(pcVar47[4] == auVar49[4]);
          auVar54[5] = -(pcVar47[5] == auVar49[5]);
          auVar54[6] = -(pcVar47[6] == auVar49[6]);
          auVar54[7] = -(pcVar47[7] == auVar49[7]);
          auVar54[8] = -(pcVar47[8] == auVar49[8]);
          auVar54[9] = -(pcVar47[9] == auVar49[9]);
          auVar54[10] = -(pcVar47[10] == auVar49[10]);
          auVar54[0xb] = -(pcVar47[0xb] == auVar49[0xb]);
          auVar54[0xc] = -(pcVar47[0xc] == auVar49[0xc]);
          auVar54[0xd] = -(pcVar47[0xd] == auVar49[0xd]);
          auVar54[0xe] = -(pcVar47[0xe] == auVar49[0xe]);
          auVar54[0xf] = -(pcVar47[0xf] == auVar49[0xf]);
          auVar54 = auVar54 & auVar51;
          uVar4 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar54[0xf] >> 7) << 0xf;
          if (uVar4 == 0) {
            param_1 = (char *)0x0;
            auVar51 = *(undefined1 (*) [16])(lVar41 + lVar45);
          }
          else {
            local_68 = auVar59;
            local_58 = *(undefined1 (*) [16])(lVar41 + lVar45);
            uVar44 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_e8,lVar45,uVar4,0);
            param_1 = (char *)(ulonglong)uVar44;
            lVar41 = local_38;
            auVar57 = local_48;
            auVar49 = local_78;
            auVar59 = local_68;
            auVar51 = local_58;
          }
          auVar61[0] = -(cVar2 == auVar57[0]);
          auVar61[1] = -(cVar3 == auVar57[1]);
          auVar61[2] = -(cVar5 == auVar57[2]);
          auVar61[3] = -(cVar6 == auVar57[3]);
          auVar61[4] = -(cVar7 == auVar57[4]);
          auVar61[5] = -(cVar8 == auVar57[5]);
          auVar61[6] = -(cVar9 == auVar57[6]);
          auVar61[7] = -(cVar10 == auVar57[7]);
          auVar61[8] = -(cVar11 == auVar57[8]);
          auVar61[9] = -(cVar12 == auVar57[9]);
          auVar61[10] = -(cVar13 == auVar57[10]);
          auVar61[0xb] = -(cVar14 == auVar57[0xb]);
          auVar61[0xc] = -(cVar15 == auVar57[0xc]);
          auVar61[0xd] = -(cVar16 == auVar57[0xd]);
          auVar61[0xe] = -(cVar17 == auVar57[0xe]);
          auVar61[0xf] = -(cVar18 == auVar57[0xf]);
          auVar62[0] = -(cVar19 == auVar49[0]);
          auVar62[1] = -(cVar20 == auVar49[1]);
          auVar62[2] = -(cVar21 == auVar49[2]);
          auVar62[3] = -(cVar22 == auVar49[3]);
          auVar62[4] = -(cVar23 == auVar49[4]);
          auVar62[5] = -(cVar24 == auVar49[5]);
          auVar62[6] = -(cVar25 == auVar49[6]);
          auVar62[7] = -(cVar26 == auVar49[7]);
          auVar62[8] = -(cVar27 == auVar49[8]);
          auVar62[9] = -(cVar28 == auVar49[9]);
          auVar62[10] = -(cVar29 == auVar49[10]);
          auVar62[0xb] = -(cVar30 == auVar49[0xb]);
          auVar62[0xc] = -(cVar31 == auVar49[0xc]);
          auVar62[0xd] = -(cVar32 == auVar49[0xd]);
          auVar62[0xe] = -(cVar33 == auVar49[0xe]);
          auVar62[0xf] = -(cVar34 == auVar49[0xf]);
          auVar62 = auVar62 & auVar61;
          uVar4 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar62[0xf] >> 7) << 0xf;
          if (uVar4 != 0) {
            local_68 = auVar59;
            local_58 = auVar51;
            bVar35 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_e8,lVar45 + 0x10,uVar4,(ulonglong)param_1 & 0xff);
            param_1 = (char *)(ulonglong)(byte)((byte)param_1 | bVar35);
            lVar41 = local_38;
            auVar57 = local_48;
            auVar49 = local_78;
            auVar59 = local_68;
            auVar51 = local_58;
          }
          auVar60[0] = -(auVar50[0] == auVar57[0]);
          auVar60[1] = -(auVar50[1] == auVar57[1]);
          auVar60[2] = -(auVar50[2] == auVar57[2]);
          auVar60[3] = -(auVar50[3] == auVar57[3]);
          auVar60[4] = -(auVar50[4] == auVar57[4]);
          auVar60[5] = -(auVar50[5] == auVar57[5]);
          auVar60[6] = -(auVar50[6] == auVar57[6]);
          auVar60[7] = -(auVar50[7] == auVar57[7]);
          auVar60[8] = -(auVar50[8] == auVar57[8]);
          auVar60[9] = -(auVar50[9] == auVar57[9]);
          auVar60[10] = -(auVar50[10] == auVar57[10]);
          auVar60[0xb] = -(auVar50[0xb] == auVar57[0xb]);
          auVar60[0xc] = -(auVar50[0xc] == auVar57[0xc]);
          auVar60[0xd] = -(auVar50[0xd] == auVar57[0xd]);
          auVar60[0xe] = -(auVar50[0xe] == auVar57[0xe]);
          auVar60[0xf] = -(auVar50[0xf] == auVar57[0xf]);
          auVar50[0] = -(auVar58[0] == auVar49[0]);
          auVar50[1] = -(auVar58[1] == auVar49[1]);
          auVar50[2] = -(auVar58[2] == auVar49[2]);
          auVar50[3] = -(auVar58[3] == auVar49[3]);
          auVar50[4] = -(auVar58[4] == auVar49[4]);
          auVar50[5] = -(auVar58[5] == auVar49[5]);
          auVar50[6] = -(auVar58[6] == auVar49[6]);
          auVar50[7] = -(auVar58[7] == auVar49[7]);
          auVar50[8] = -(auVar58[8] == auVar49[8]);
          auVar50[9] = -(auVar58[9] == auVar49[9]);
          auVar50[10] = -(auVar58[10] == auVar49[10]);
          auVar50[0xb] = -(auVar58[0xb] == auVar49[0xb]);
          auVar50[0xc] = -(auVar58[0xc] == auVar49[0xc]);
          auVar50[0xd] = -(auVar58[0xd] == auVar49[0xd]);
          auVar50[0xe] = -(auVar58[0xe] == auVar49[0xe]);
          auVar50[0xf] = -(auVar58[0xf] == auVar49[0xf]);
          auVar50 = auVar50 & auVar60;
          uVar4 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar50[0xf] >> 7) << 0xf;
          if (uVar4 != 0) {
            local_68 = auVar59;
            local_58 = auVar51;
            bVar35 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_e8,lVar45 + 0x20,uVar4,(ulonglong)param_1 & 0xff);
            param_1 = (char *)(ulonglong)(byte)((byte)param_1 | bVar35);
            lVar41 = local_38;
            auVar57 = local_48;
            auVar49 = local_78;
            auVar59 = local_68;
            auVar51 = local_58;
          }
          auVar58[0] = -(auVar59[0] == auVar57[0]);
          auVar58[1] = -(auVar59[1] == auVar57[1]);
          auVar58[2] = -(auVar59[2] == auVar57[2]);
          auVar58[3] = -(auVar59[3] == auVar57[3]);
          auVar58[4] = -(auVar59[4] == auVar57[4]);
          auVar58[5] = -(auVar59[5] == auVar57[5]);
          auVar58[6] = -(auVar59[6] == auVar57[6]);
          auVar58[7] = -(auVar59[7] == auVar57[7]);
          auVar58[8] = -(auVar59[8] == auVar57[8]);
          auVar58[9] = -(auVar59[9] == auVar57[9]);
          auVar58[10] = -(auVar59[10] == auVar57[10]);
          auVar58[0xb] = -(auVar59[0xb] == auVar57[0xb]);
          auVar58[0xc] = -(auVar59[0xc] == auVar57[0xc]);
          auVar58[0xd] = -(auVar59[0xd] == auVar57[0xd]);
          auVar58[0xe] = -(auVar59[0xe] == auVar57[0xe]);
          auVar58[0xf] = -(auVar59[0xf] == auVar57[0xf]);
          auVar59[0] = -(auVar51[0] == auVar49[0]);
          auVar59[1] = -(auVar51[1] == auVar49[1]);
          auVar59[2] = -(auVar51[2] == auVar49[2]);
          auVar59[3] = -(auVar51[3] == auVar49[3]);
          auVar59[4] = -(auVar51[4] == auVar49[4]);
          auVar59[5] = -(auVar51[5] == auVar49[5]);
          auVar59[6] = -(auVar51[6] == auVar49[6]);
          auVar59[7] = -(auVar51[7] == auVar49[7]);
          auVar59[8] = -(auVar51[8] == auVar49[8]);
          auVar59[9] = -(auVar51[9] == auVar49[9]);
          auVar59[10] = -(auVar51[10] == auVar49[10]);
          auVar59[0xb] = -(auVar51[0xb] == auVar49[0xb]);
          auVar59[0xc] = -(auVar51[0xc] == auVar49[0xc]);
          auVar59[0xd] = -(auVar51[0xd] == auVar49[0xd]);
          auVar59[0xe] = -(auVar51[0xe] == auVar49[0xe]);
          auVar59[0xf] = -(auVar51[0xf] == auVar49[0xf]);
          auVar59 = auVar59 & auVar58;
          uVar4 = (ushort)(SUB161(auVar59 >> 7,0) & 1) | (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar59[0xf] >> 7) << 0xf;
          if (uVar4 != 0) {
            bVar35 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_e8,lVar45 + 0x30,uVar4,(ulonglong)param_1 & 0xff);
            param_1 = (char *)(ulonglong)(byte)((byte)param_1 | bVar35);
            auVar49 = local_78;
            auVar57 = local_48;
            lVar41 = local_38;
          }
          lVar46 = lVar45 + 0x40;
        } while ((param_2 + 0x7f + lVar45 < param_4) &&
                (lVar46 = lVar45 + 0x40, lVar45 = lVar46, (char)param_1 == '\0'));
      }
      else {
        lVar46 = 0;
        param_1 = (char *)0x0;
      }
      if ((param_2 + 0xf + lVar46 < param_4) && ((char)param_1 == '\0')) {
        lVar41 = param_3 + local_80;
        do {
          pcVar47 = (char *)(param_3 + lVar46);
          pcVar1 = (char *)(lVar41 + lVar46);
          auVar52[0] = -(*pcVar47 == auVar57[0]);
          auVar52[1] = -(pcVar47[1] == auVar57[1]);
          auVar52[2] = -(pcVar47[2] == auVar57[2]);
          auVar52[3] = -(pcVar47[3] == auVar57[3]);
          auVar52[4] = -(pcVar47[4] == auVar57[4]);
          auVar52[5] = -(pcVar47[5] == auVar57[5]);
          auVar52[6] = -(pcVar47[6] == auVar57[6]);
          auVar52[7] = -(pcVar47[7] == auVar57[7]);
          auVar52[8] = -(pcVar47[8] == auVar57[8]);
          auVar52[9] = -(pcVar47[9] == auVar57[9]);
          auVar52[10] = -(pcVar47[10] == auVar57[10]);
          auVar52[0xb] = -(pcVar47[0xb] == auVar57[0xb]);
          auVar52[0xc] = -(pcVar47[0xc] == auVar57[0xc]);
          auVar52[0xd] = -(pcVar47[0xd] == auVar57[0xd]);
          auVar52[0xe] = -(pcVar47[0xe] == auVar57[0xe]);
          auVar52[0xf] = -(pcVar47[0xf] == auVar57[0xf]);
          auVar55[0] = -(*pcVar1 == auVar49[0]);
          auVar55[1] = -(pcVar1[1] == auVar49[1]);
          auVar55[2] = -(pcVar1[2] == auVar49[2]);
          auVar55[3] = -(pcVar1[3] == auVar49[3]);
          auVar55[4] = -(pcVar1[4] == auVar49[4]);
          auVar55[5] = -(pcVar1[5] == auVar49[5]);
          auVar55[6] = -(pcVar1[6] == auVar49[6]);
          auVar55[7] = -(pcVar1[7] == auVar49[7]);
          auVar55[8] = -(pcVar1[8] == auVar49[8]);
          auVar55[9] = -(pcVar1[9] == auVar49[9]);
          auVar55[10] = -(pcVar1[10] == auVar49[10]);
          auVar55[0xb] = -(pcVar1[0xb] == auVar49[0xb]);
          auVar55[0xc] = -(pcVar1[0xc] == auVar49[0xc]);
          auVar55[0xd] = -(pcVar1[0xd] == auVar49[0xd]);
          auVar55[0xe] = -(pcVar1[0xe] == auVar49[0xe]);
          auVar55[0xf] = -(pcVar1[0xf] == auVar49[0xf]);
          auVar55 = auVar55 & auVar52;
          uVar4 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar55[0xf] >> 7) << 0xf;
          if (uVar4 == 0) {
            param_1 = (char *)0x0;
          }
          else {
            uVar44 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                               (&local_e8,lVar46,uVar4,0);
            param_1 = (char *)(ulonglong)uVar44;
            auVar49 = local_78;
            auVar57 = local_48;
          }
        } while ((param_2 + 0x1f + lVar46 < param_4) &&
                (lVar46 = lVar46 + 0x10, (char)param_1 == '\0'));
      }
      lVar38 = param_4 - lVar38;
      pcVar1 = (char *)(param_3 + -0x10 + lVar38);
      pcVar47 = (char *)(local_80 + param_3 + lVar38 + -0x10);
      auVar53[0] = -(*pcVar1 == auVar57[0]);
      auVar53[1] = -(pcVar1[1] == auVar57[1]);
      auVar53[2] = -(pcVar1[2] == auVar57[2]);
      auVar53[3] = -(pcVar1[3] == auVar57[3]);
      auVar53[4] = -(pcVar1[4] == auVar57[4]);
      auVar53[5] = -(pcVar1[5] == auVar57[5]);
      auVar53[6] = -(pcVar1[6] == auVar57[6]);
      auVar53[7] = -(pcVar1[7] == auVar57[7]);
      auVar53[8] = -(pcVar1[8] == auVar57[8]);
      auVar53[9] = -(pcVar1[9] == auVar57[9]);
      auVar53[10] = -(pcVar1[10] == auVar57[10]);
      auVar53[0xb] = -(pcVar1[0xb] == auVar57[0xb]);
      auVar53[0xc] = -(pcVar1[0xc] == auVar57[0xc]);
      auVar53[0xd] = -(pcVar1[0xd] == auVar57[0xd]);
      auVar53[0xe] = -(pcVar1[0xe] == auVar57[0xe]);
      auVar53[0xf] = -(pcVar1[0xf] == auVar57[0xf]);
      auVar56[0] = -(*pcVar47 == auVar49[0]);
      auVar56[1] = -(pcVar47[1] == auVar49[1]);
      auVar56[2] = -(pcVar47[2] == auVar49[2]);
      auVar56[3] = -(pcVar47[3] == auVar49[3]);
      auVar56[4] = -(pcVar47[4] == auVar49[4]);
      auVar56[5] = -(pcVar47[5] == auVar49[5]);
      auVar56[6] = -(pcVar47[6] == auVar49[6]);
      auVar56[7] = -(pcVar47[7] == auVar49[7]);
      auVar56[8] = -(pcVar47[8] == auVar49[8]);
      auVar56[9] = -(pcVar47[9] == auVar49[9]);
      auVar56[10] = -(pcVar47[10] == auVar49[10]);
      auVar56[0xb] = -(pcVar47[0xb] == auVar49[0xb]);
      auVar56[0xc] = -(pcVar47[0xc] == auVar49[0xc]);
      auVar56[0xd] = -(pcVar47[0xd] == auVar49[0xd]);
      auVar56[0xe] = -(pcVar47[0xe] == auVar49[0xe]);
      auVar56[0xf] = -(pcVar47[0xf] == auVar49[0xf]);
      auVar56 = auVar56 & auVar53;
      uVar4 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar56[0xf] >> 7) << 0xf;
      if (uVar4 != 0) {
        bVar35 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                           (&local_e8,lVar38 + -0x10,uVar4,(ulonglong)param_1 & 0xff);
        param_1 = (char *)(ulonglong)(byte)((byte)param_1 | bVar35);
      }
      goto LAB_000a77a7;
    }
    do {
      iVar36 = (*(code *)puVar40)();
      if (iVar36 == 0) goto LAB_000a77a4;
      param_4 = param_4 - 1;
    } while (param_2 <= param_4);
  }
LAB_000a726f:
  param_1 = (char *)0x0;
LAB_000a77a7:
  return (ulonglong)param_1 & 0xffffffff;
  while (puVar42 = puVar39 + -1, pcVar47 = local_a0 + -1 + (longlong)local_c0 + (longlong)puVar39,
        puVar39 = puVar39 + -1, local_90[(longlong)puVar42] == *pcVar47) {
LAB_000a778a:
    param_1 = (char *)0x0;
    if (puVar39 == (undefined *)0x0) goto LAB_000a77a4;
  }
  local_c0 = local_c0 + local_d0;
LAB_000a773c:
  puVar39 = local_c0 + (longlong)puVar40;
  param_1 = (char *)0x0;
  if (local_98 <= puVar39) goto LAB_000a77a7;
  goto LAB_000a7748;
  while( true ) {
    if (local_88 <= puVar42) goto LAB_000a7890;
    puVar39 = puVar42;
    if (local_90[(longlong)puVar42] != param_1[(longlong)puVar42]) break;
LAB_000a76c9:
    puVar42 = puVar39 + -1;
    if (puVar39 <= local_b0) goto LAB_000a77a4;
  }
  local_c0 = local_c0 + local_d0;
  local_b0 = local_88 + -local_d0;
LAB_000a766d:
  puVar39 = local_c0 + (longlong)puVar40;
  param_1 = (char *)0x0;
  if (local_98 <= puVar39) goto LAB_000a77a7;
  goto LAB_000a767d;
LAB_000a77a4:
  param_1 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  goto LAB_000a77a7;
LAB_000a7890:
  uVar43 = (uint)local_90;
  uVar44 = (uint)local_c8;
  puVar40 = &DAT_000c1400;
  uVar37 = (*(code *)PTR_panic_bounds_check_000c3dd8)();
  local_98 = puVar39;
  local_e0 = puVar40;
  local_a0 = puVar42;
LAB_000a789d:
  uVar44 = uVar43 << 6 | uVar44;
LAB_000a78b3:
  param_1 = (char *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if ((uVar37 & 1) != 0) goto LAB_000a77a7;
  lVar38 = 1;
  if ((0x7f < uVar44) && (lVar38 = 2, 0x7ff < uVar44)) {
    lVar38 = 4 - (ulonglong)(uVar44 < 0x10000);
  }
  local_e0 = local_e0 + lVar38;
  if (local_e0 == (undefined *)0x0) goto LAB_000a77a7;
  uVar48 = local_e0 == local_98;
  if (local_98 <= local_e0) goto LAB_000a7907;
  uVar48 = local_a0[(longlong)local_e0] == -0x40;
  if (-0x41 < (char)local_a0[(longlong)local_e0]) goto LAB_000a77a7;
LAB_000a78f7:
  do {
    (*(code *)PTR_slice_error_fail_000c3fc8)();
LAB_000a7907:
  } while (!(bool)uVar48);
  goto LAB_000a77a7;
}


