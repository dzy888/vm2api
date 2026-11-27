// 004aed10 record_success

/* <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::record_success */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::record_success
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  longlong lVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte local_e9;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  longlong local_98 [3];
  longlong local_80;
  longlong local_60;
  
  bVar9 = <craggemini_core[66f3c71560d70857]::resume::ModelFamily>::from_model(param_4,param_5);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  local_c8 = param_1 + 0x18;
  local_e9 = bVar9;
  local_e8 = param_2;
  local_c0 = param_3;
  local_d0 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&str>(param_1 + 0x38,param_2,param_3);
  lVar8 = local_c0;
  puVar7 = PTR_bcmp_00799020;
  lVar17 = *(longlong *)(param_1 + 0x18);
  local_e0 = *(ulonglong *)(param_1 + 0x20);
  bVar22 = (byte)(local_d0 >> 0x39);
  auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar24 = pshuflw(auVar24,auVar24,0);
  local_a8._0_8_ = auVar24._0_8_;
  local_a8._8_4_ = auVar24._0_4_;
  local_a8._12_4_ = auVar24._4_4_;
  local_d8 = 0;
  do {
    local_d0 = local_d0 & local_e0;
    local_b8 = *(undefined1 (*) [16])(lVar17 + local_d0);
    auVar24[0] = -(local_b8[0] == local_a8[0]);
    auVar24[1] = -(local_b8[1] == local_a8[1]);
    auVar24[2] = -(local_b8[2] == local_a8[2]);
    auVar24[3] = -(local_b8[3] == local_a8[3]);
    auVar24[4] = -(local_b8[4] == local_a8[4]);
    auVar24[5] = -(local_b8[5] == local_a8[5]);
    auVar24[6] = -(local_b8[6] == local_a8[6]);
    auVar24[7] = -(local_b8[7] == local_a8[7]);
    auVar24[8] = -(local_b8[8] == local_a8[8]);
    auVar24[9] = -(local_b8[9] == local_a8[9]);
    auVar24[10] = -(local_b8[10] == local_a8[10]);
    auVar24[0xb] = -(local_b8[0xb] == local_a8[0xb]);
    auVar24[0xc] = -(local_b8[0xc] == local_a8[0xc]);
    auVar24[0xd] = -(local_b8[0xd] == local_a8[0xd]);
    auVar24[0xe] = -(local_b8[0xe] == local_a8[0xe]);
    auVar24[0xf] = -(local_b8[0xf] == local_a8[0xf]);
    uVar10 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
    uVar15 = (uint)uVar10;
    if (uVar10 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar13 = uVar5 + local_d0 & local_e0;
        lVar20 = lVar17 + uVar13 * -0x80;
        if ((lVar8 == *(longlong *)(lVar20 + -0x70)) &&
           (iVar11 = (*(code *)puVar7)(uVar13 * 0x80,lVar8), iVar11 == 0)) {
          uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                   ::hash_one::<&craggemini_core[66f3c71560d70857]::resume::ModelFamily>
                             (lVar20 + -0x18,&local_e9);
          uVar23 = local_e8;
          lVar17 = *(longlong *)(lVar20 + -0x38);
          uVar13 = *(ulonglong *)(lVar20 + -0x30);
          bVar22 = (byte)(uVar12 >> 0x39);
          auVar24 = ZEXT216(CONCAT11(bVar22,bVar22));
          auVar24 = pshuflw(auVar24,auVar24,0);
          lVar16 = 0;
          goto LAB_004aeeaa;
        }
        uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
      } while (uVar10 != 0);
    }
    auVar28[0] = -(local_b8[0] == -1);
    auVar28[1] = -(local_b8[1] == -1);
    auVar28[2] = -(local_b8[2] == -1);
    auVar28[3] = -(local_b8[3] == -1);
    auVar28[4] = -(local_b8[4] == -1);
    auVar28[5] = -(local_b8[5] == -1);
    auVar28[6] = -(local_b8[6] == -1);
    auVar28[7] = -(local_b8[7] == -1);
    auVar28[8] = -(local_b8[8] == -1);
    auVar28[9] = -(local_b8[9] == -1);
    auVar28[10] = -(local_b8[10] == -1);
    auVar28[0xb] = -(local_b8[0xb] == -1);
    auVar28[0xc] = -(local_b8[0xc] == -1);
    auVar28[0xd] = -(local_b8[0xd] == -1);
    auVar28[0xe] = -(local_b8[0xe] == -1);
    auVar28[0xf] = -(local_b8[0xf] == -1);
    if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') {
      return;
    }
    local_d0 = local_d0 + local_d8 + 0x10;
    local_d8 = local_d8 + 0x10;
  } while( true );
LAB_004aeeaa:
  uVar12 = uVar12 & uVar13;
  pcVar1 = (char *)(lVar17 + uVar12);
  auVar29[0] = -(*pcVar1 == auVar24[0]);
  auVar29[1] = -(pcVar1[1] == auVar24[1]);
  auVar29[2] = -(pcVar1[2] == auVar24[2]);
  auVar29[3] = -(pcVar1[3] == auVar24[3]);
  auVar29[4] = -(pcVar1[4] == auVar24[4]);
  auVar29[5] = -(pcVar1[5] == auVar24[5]);
  auVar29[6] = -(pcVar1[6] == auVar24[6]);
  auVar29[7] = -(pcVar1[7] == auVar24[7]);
  auVar29[8] = -(pcVar1[8] == auVar24[0]);
  auVar29[9] = -(pcVar1[9] == auVar24[1]);
  auVar29[10] = -(pcVar1[10] == auVar24[2]);
  auVar29[0xb] = -(pcVar1[0xb] == auVar24[3]);
  auVar29[0xc] = -(pcVar1[0xc] == auVar24[4]);
  auVar29[0xd] = -(pcVar1[0xd] == auVar24[5]);
  auVar29[0xe] = -(pcVar1[0xe] == auVar24[6]);
  auVar29[0xf] = -(pcVar1[0xf] == auVar24[7]);
  uVar10 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar10;
  if (uVar10 != 0) {
LAB_004aeec4:
    uVar5 = 0;
    for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar18 = uVar5 + uVar12 & uVar13;
    lVar19 = lVar17 + uVar18 * -0x20;
    if (bVar9 != *(byte *)(lVar19 + -0x20)) goto code_r0x004aeee8;
    uVar13 = uVar18 - 0x10 & uVar13;
    pcVar1 = (char *)(lVar17 + uVar13);
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
    uVar3 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
    pcVar1 = (char *)(lVar17 + uVar18);
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
    uVar10 = 0xf;
    if (uVar3 != 0) {
      for (; uVar3 >> uVar10 == 0; uVar10 = uVar10 - 1) {
      }
    }
    sVar4 = 0;
    for (uVar15 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                          (ushort)(auVar26[0xf] >> 7) << 0xf) | 0x10000; (uVar15 & 1) == 0;
        uVar15 = uVar15 >> 1 | 0x80000000) {
      sVar4 = sVar4 + 1;
    }
    uVar14 = 0x80;
    if ((ushort)(sVar4 + (uVar10 ^ 0xf)) < 0x10) {
      *(longlong *)(lVar20 + -0x28) = *(longlong *)(lVar20 + -0x28) + 1;
      uVar14 = 0xff;
    }
    *(undefined1 *)(lVar17 + uVar18) = uVar14;
    *(undefined1 *)(lVar17 + 0x10 + uVar13) = uVar14;
    *(longlong *)(lVar20 + -0x20) = *(longlong *)(lVar20 + -0x20) + -1;
    if (*(char *)(lVar19 + -0x20) != -1) {
      bVar21 = *(char *)(lVar19 + -4) == -1;
      goto LAB_004aef7c;
    }
    bVar21 = true;
    cVar2 = *(char *)(lVar20 + -8);
    goto joined_r0x004aefc2;
  }
LAB_004aeef5:
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
  bVar21 = true;
  if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') goto LAB_004aef7c;
  uVar12 = uVar12 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_004aeeaa;
code_r0x004aeee8:
  uVar10 = (ushort)(uVar15 - 1) & (ushort)uVar15;
  uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar10);
  if (uVar10 == 0) goto LAB_004aeef5;
  goto LAB_004aeec4;
LAB_004aef7c:
  cVar2 = *(char *)(lVar20 + -8);
joined_r0x004aefc2:
  if (cVar2 == '\0') {
    lVar17 = *(longlong *)(lVar20 + -0x50);
    if (lVar17 != -1) goto LAB_004aefd2;
    if (bVar21) goto LAB_004aeff7;
  }
  else {
    *(undefined1 *)(lVar20 + -8) = 0;
    if ((*(longlong *)(lVar20 + -0x68) != -1) && (*(longlong *)(lVar20 + -0x68) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(lVar17,1);
    }
    *(undefined8 *)(lVar20 + -0x68) = 0xffffffffffffffff;
    lVar17 = *(longlong *)(lVar20 + -0x50);
    if (lVar17 != -1) {
LAB_004aefd2:
      if (lVar17 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined8 *)(lVar20 + -0x50) = 0xffffffffffffffff;
    }
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
LAB_004aeff7:
  if (((*(longlong *)(lVar20 + -0x20) == 0) && (*(char *)(lVar20 + -8) == '\0')) &&
     (uVar23 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
               ::remove::<str>(local_98,local_c8,uVar23,lVar8), local_98[0] != -2)) {
    if ((local_60 != 0) && (local_60 * 0x21 != -0x31)) {
      uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,0x10);
    }
    if ((local_98[0] != -1) && (local_98[0] != 0)) {
      uVar23 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
    }
    if ((local_80 != -1) && (local_80 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar23,1);
    }
  }
  return;
}


