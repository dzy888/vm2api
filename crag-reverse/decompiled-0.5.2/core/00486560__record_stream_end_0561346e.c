// 00486560 record_stream_end

/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::record_stream_end */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::record_stream_end
          (longlong *param_1,longlong param_2,int param_3,longlong param_4,longlong param_5,
          byte param_6)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  code *pcVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  longlong unaff_R14;
  longlong lVar22;
  byte bVar23;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar24;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong local_b8;
  int local_9c;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_64 [12];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_9c = param_3;
  local_80 = param_1;
  uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&u32>(param_2 + 0x68,&local_9c);
  lVar14 = *(longlong *)(param_2 + 0x48);
  uVar11 = *(ulonglong *)(param_2 + 0x50);
  bVar23 = (byte)(uVar10 >> 0x39);
  auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
  auVar25 = pshuflw(auVar25,auVar25,0);
  lVar17 = 0;
  lVar22 = -1;
  do {
    uVar10 = uVar10 & uVar11;
    pcVar1 = (char *)(lVar14 + uVar10);
    auVar32[0] = -(*pcVar1 == auVar25[0]);
    auVar32[1] = -(pcVar1[1] == auVar25[1]);
    auVar32[2] = -(pcVar1[2] == auVar25[2]);
    auVar32[3] = -(pcVar1[3] == auVar25[3]);
    auVar32[4] = -(pcVar1[4] == auVar25[4]);
    auVar32[5] = -(pcVar1[5] == auVar25[5]);
    auVar32[6] = -(pcVar1[6] == auVar25[6]);
    auVar32[7] = -(pcVar1[7] == auVar25[7]);
    auVar32[8] = -(pcVar1[8] == auVar25[0]);
    auVar32[9] = -(pcVar1[9] == auVar25[1]);
    auVar32[10] = -(pcVar1[10] == auVar25[2]);
    auVar32[0xb] = -(pcVar1[0xb] == auVar25[3]);
    auVar32[0xc] = -(pcVar1[0xc] == auVar25[4]);
    auVar32[0xd] = -(pcVar1[0xd] == auVar25[5]);
    auVar32[0xe] = -(pcVar1[0xe] == auVar25[6]);
    auVar32[0xf] = -(pcVar1[0xf] == auVar25[7]);
    uVar18 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
    uVar9 = (uint)uVar18;
    lVar12 = param_2;
    if (uVar18 != 0) {
LAB_004865e5:
      uVar16 = 0;
      for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar19 = uVar16 + uVar10 & uVar11;
      lVar20 = lVar14 + uVar19 * -0x20;
      if (param_3 != *(int *)(lVar20 + -0x20)) break;
      uVar11 = uVar19 - 0x10 & uVar11;
      pcVar1 = (char *)(lVar14 + uVar11);
      auVar25[0] = -(*pcVar1 == -1);
      auVar25[1] = -(pcVar1[1] == -1);
      auVar25[2] = -(pcVar1[2] == -1);
      auVar25[3] = -(pcVar1[3] == -1);
      auVar25[4] = -(pcVar1[4] == -1);
      auVar25[5] = -(pcVar1[5] == -1);
      auVar25[6] = -(pcVar1[6] == -1);
      auVar25[7] = -(pcVar1[7] == -1);
      auVar25[8] = -(pcVar1[8] == -1);
      auVar25[9] = -(pcVar1[9] == -1);
      auVar25[10] = -(pcVar1[10] == -1);
      auVar25[0xb] = -(pcVar1[0xb] == -1);
      auVar25[0xc] = -(pcVar1[0xc] == -1);
      auVar25[0xd] = -(pcVar1[0xd] == -1);
      auVar25[0xe] = -(pcVar1[0xe] == -1);
      auVar25[0xf] = -(pcVar1[0xf] == -1);
      uVar4 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      pcVar1 = (char *)(lVar14 + uVar19);
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
      uVar18 = 0xf;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar18 == 0; uVar18 = uVar18 - 1) {
        }
      }
      sVar5 = 0;
      for (uVar9 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                           (ushort)(auVar26[0xf] >> 7) << 0xf) | 0x10000; (uVar9 & 1) == 0;
          uVar9 = uVar9 >> 1 | 0x80000000) {
        sVar5 = sVar5 + 1;
      }
      uVar13 = 0x80;
      if ((ushort)(sVar5 + (uVar18 ^ 0xf)) < 0x10) {
        *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + 1;
        uVar13 = 0xff;
      }
      *(undefined1 *)(lVar14 + uVar19) = uVar13;
      *(undefined1 *)(lVar14 + 0x10 + uVar11) = uVar13;
      *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + -1;
      lVar22 = *(longlong *)(lVar20 + -0x18);
      if (lVar22 == -1) {
        lVar22 = -1;
      }
      else {
        unaff_R14 = *(longlong *)(lVar20 + -0x10);
        lVar12 = *(longlong *)(lVar20 + -8);
      }
      goto joined_r0x00486722;
    }
LAB_00486610:
    auVar31[0] = -(*pcVar1 == -1);
    auVar31[1] = -(pcVar1[1] == -1);
    auVar31[2] = -(pcVar1[2] == -1);
    auVar31[3] = -(pcVar1[3] == -1);
    auVar31[4] = -(pcVar1[4] == -1);
    auVar31[5] = -(pcVar1[5] == -1);
    auVar31[6] = -(pcVar1[6] == -1);
    auVar31[7] = -(pcVar1[7] == -1);
    auVar31[8] = -(pcVar1[8] == -1);
    auVar31[9] = -(pcVar1[9] == -1);
    auVar31[10] = -(pcVar1[10] == -1);
    auVar31[0xb] = -(pcVar1[0xb] == -1);
    auVar31[0xc] = -(pcVar1[0xc] == -1);
    auVar31[0xd] = -(pcVar1[0xd] == -1);
    auVar31[0xe] = -(pcVar1[0xe] == -1);
    auVar31[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') goto joined_r0x00486722;
    uVar10 = uVar10 + lVar17 + 0x10;
    lVar17 = lVar17 + 0x10;
  } while( true );
  uVar18 = (ushort)(uVar9 - 1) & (ushort)uVar9;
  uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar18);
  if (uVar18 == 0) goto LAB_00486610;
  goto LAB_004865e5;
joined_r0x00486722:
  if (param_4 == 0) {
    if (lVar22 == -1) {
      *local_80 = -1;
      return local_80;
    }
  }
  else {
    if (param_5 < 0) {
LAB_004866ad:
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (param_5 == 0) {
      unaff_R14 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      unaff_R14 = (*(code *)PTR___rust_alloc_00799000)();
      if (unaff_R14 == 0) goto LAB_004866ad;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_5);
    }
    if (lVar22 - 1U < 0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    lVar12 = param_5;
    lVar22 = param_5;
  }
  local_98 = lVar22;
  lStack_90 = unaff_R14;
  local_88 = lVar12;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 0x38,&local_98);
    puVar7 = PTR_bcmp_00799020;
    lVar14 = *(longlong *)(param_2 + 0x18);
    uVar11 = *(ulonglong *)(param_2 + 0x20);
    bVar23 = (byte)(uVar10 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    auVar30._0_8_ = auVar25._0_8_;
    auVar30._8_4_ = auVar25._0_4_;
    auVar30._12_4_ = auVar25._4_4_;
    lVar22 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar11;
      auVar25 = *(undefined1 (*) [16])(lVar14 + uVar10);
      auVar27[0] = -(auVar25[0] == auVar30[0]);
      auVar27[1] = -(auVar25[1] == auVar30[1]);
      auVar27[2] = -(auVar25[2] == auVar30[2]);
      auVar27[3] = -(auVar25[3] == auVar30[3]);
      auVar27[4] = -(auVar25[4] == auVar30[4]);
      auVar27[5] = -(auVar25[5] == auVar30[5]);
      auVar27[6] = -(auVar25[6] == auVar30[6]);
      auVar27[7] = -(auVar25[7] == auVar30[7]);
      auVar27[8] = -(auVar25[8] == auVar30[8]);
      auVar27[9] = -(auVar25[9] == auVar30[9]);
      auVar27[10] = -(auVar25[10] == auVar30[10]);
      auVar27[0xb] = -(auVar25[0xb] == auVar30[0xb]);
      auVar27[0xc] = -(auVar25[0xc] == auVar30[0xc]);
      auVar27[0xd] = -(auVar25[0xd] == auVar30[0xd]);
      auVar27[0xe] = -(auVar25[0xe] == auVar30[0xe]);
      auVar27[0xf] = -(auVar25[0xf] == auVar30[0xf]);
      uVar18 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar18;
      if (uVar18 != 0) {
        local_78 = auVar30;
        local_58 = auVar25;
        do {
          uVar16 = 0;
          for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar16 = uVar16 + 1;
          }
          uVar19 = uVar16 + uVar10 & uVar11;
          lVar17 = uVar19 * -0xe0;
          if (lVar12 == *(longlong *)(lVar14 + -0xd0 + lVar17)) {
            lVar17 = lVar17 + lVar14;
            iVar8 = (*(code *)puVar7)(-uVar19,lVar12);
            if (iVar8 == 0) {
              if (*(char *)(lVar17 + -8) == '\0') {
                *(byte *)(lVar17 + -8) = (param_6 ^ 1) * '\x02' + '\x01';
              }
              (*(code *)PTR_now_00799478)();
              uVar24 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
                       ::to_rfc3339(&local_48,local_64);
              if (*(longlong *)(lVar17 + -0x98) != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar24,1);
              }
              *(undefined8 *)(lVar17 + -0x88) = local_38;
              *(undefined8 *)(lVar17 + -0x98) = local_48;
              *(undefined8 *)(lVar17 + -0x90) = uStack_40;
              goto LAB_004868c2;
            }
          }
          uVar18 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar18);
          auVar30 = local_78;
          auVar25 = local_58;
        } while (uVar18 != 0);
      }
      auVar33[0] = -(auVar25[0] == -1);
      auVar33[1] = -(auVar25[1] == -1);
      auVar33[2] = -(auVar25[2] == -1);
      auVar33[3] = -(auVar25[3] == -1);
      auVar33[4] = -(auVar25[4] == -1);
      auVar33[5] = -(auVar25[5] == -1);
      auVar33[6] = -(auVar25[6] == -1);
      auVar33[7] = -(auVar25[7] == -1);
      auVar33[8] = -(auVar25[8] == -1);
      auVar33[9] = -(auVar25[9] == -1);
      auVar33[10] = -(auVar25[10] == -1);
      auVar33[0xb] = -(auVar25[0xb] == -1);
      auVar33[0xc] = -(auVar25[0xc] == -1);
      auVar33[0xd] = -(auVar25[0xd] == -1);
      auVar33[0xe] = -(auVar25[0xe] == -1);
      auVar33[0xf] = -(auVar25[0xf] == -1);
      if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar33 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar33 >> 0x3f,0) & 1) != 0) || (SUB161(auVar33 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar33 >> 0x4f,0) & 1) != 0) || (SUB161(auVar33 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || (SUB161(auVar33 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar33 >> 0x6f,0) & 1) != 0) || (SUB161(auVar33 >> 0x77,0) & 1) != 0) ||
          auVar33[0xf] < '\0') break;
      uVar10 = uVar10 + lVar22 + 0x10;
      lVar22 = lVar22 + 0x10;
    }
  }
LAB_004868c2:
  lVar22 = local_88;
  lVar14 = *(longlong *)(param_2 + 0x60);
  if (lVar14 != 0) {
    pauVar2 = *(undefined1 (**) [16])(param_2 + 0x48);
    uVar11 = *(ulonglong *)(param_2 + 0x50);
    auVar25 = *pauVar2;
    uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
    pauVar15 = pauVar2 + 1;
    pauVar21 = pauVar2;
    local_b8 = lVar14;
    local_78._0_8_ = *(longlong *)(param_2 + 0x58);
    do {
      if ((short)uVar9 == 0) {
        do {
          auVar25 = *pauVar15;
          pauVar21 = pauVar21 + -0x20;
          pauVar15 = pauVar15 + 1;
          uVar9 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar9 == 0);
      }
      iVar8 = 0;
      for (uVar16 = uVar9; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
        iVar8 = iVar8 + 1;
      }
      lVar17 = (longlong)pauVar21 - (ulonglong)(uint)(iVar8 << 5);
      if ((*(longlong *)(lVar17 + -8) == lVar22) &&
         (iVar8 = (*(code *)PTR_bcmp_00799020)(), iVar8 == 0)) {
        lVar12 = (longlong)pauVar2 - lVar17 >> 5;
        uVar10 = lVar12 - 0x10U & uVar11;
        pcVar1 = *pauVar2 + uVar10;
        auVar28[0] = -(*pcVar1 == -1);
        auVar28[1] = -(pcVar1[1] == -1);
        auVar28[2] = -(pcVar1[2] == -1);
        auVar28[3] = -(pcVar1[3] == -1);
        auVar28[4] = -(pcVar1[4] == -1);
        auVar28[5] = -(pcVar1[5] == -1);
        auVar28[6] = -(pcVar1[6] == -1);
        auVar28[7] = -(pcVar1[7] == -1);
        auVar28[8] = -(pcVar1[8] == -1);
        auVar28[9] = -(pcVar1[9] == -1);
        auVar28[10] = -(pcVar1[10] == -1);
        auVar28[0xb] = -(pcVar1[0xb] == -1);
        auVar28[0xc] = -(pcVar1[0xc] == -1);
        auVar28[0xd] = -(pcVar1[0xd] == -1);
        auVar28[0xe] = -(pcVar1[0xe] == -1);
        auVar28[0xf] = -(pcVar1[0xf] == -1);
        uVar4 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
        pcVar1 = *pauVar2 + lVar12;
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
        uVar18 = 0xf;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar18 == 0; uVar18 = uVar18 - 1) {
          }
        }
        sVar5 = 0;
        for (uVar16 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                              (ushort)(auVar29[0xf] >> 7) << 0xf) | 0x10000; (uVar16 & 1) == 0;
            uVar16 = uVar16 >> 1 | 0x80000000) {
          sVar5 = sVar5 + 1;
        }
        uVar13 = 0x80;
        if ((ushort)(sVar5 + (uVar18 ^ 0xf)) < 0x10) {
          local_78._0_8_ = local_78._0_8_ + 1;
          *(undefined8 *)(param_2 + 0x58) = local_78._0_8_;
          uVar13 = 0xff;
        }
        (*pauVar2)[lVar12] = uVar13;
        pauVar2[1][uVar10] = uVar13;
        local_b8 = local_b8 + -1;
        *(longlong *)(param_2 + 0x60) = local_b8;
        if (*(longlong *)(lVar17 + -0x18) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
        }
      }
      uVar9 = uVar9 - 1 & uVar9;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  local_80[2] = local_88;
  *local_80 = local_98;
  local_80[1] = lStack_90;
  return local_80;
}


