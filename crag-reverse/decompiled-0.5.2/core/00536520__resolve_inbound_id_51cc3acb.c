// 00536520 resolve_inbound_id

/* <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::resolve_inbound_id */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::resolve_inbound_id
          (longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  longlong lVar19;
  byte bVar20;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_58;
  longlong local_48;
  longlong lStack_40;
  
  (*(code *)PTR_now_00799478)();
  iVar17 = (int)local_d8 >> 0xd;
  iVar14 = iVar17 + -1;
  iVar10 = 0;
  if (iVar17 < 1) {
    iVar10 = (1U - iVar17) / 400 + 1;
    iVar14 = iVar14 + iVar10 * 400;
    iVar10 = iVar10 * -0x23ab1;
  }
  uVar11 = (ulonglong)uStack_d0 / 1000000 +
           ((longlong)
            (int)((((local_d8 >> 4 & 0x1ff) + iVar10) - iVar14 / 100) + (iVar14 * 0x5b5 >> 2) +
                  (iVar14 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)uStack_d4) * 1000;
  uVar8 = 0;
  if (0 < (longlong)uVar11) {
    uVar8 = uVar11;
  }
  if (*(longlong *)(param_2 + 0x60) != 0) {
    uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_2 + 0x68,param_3,param_4);
    lVar13 = *(longlong *)(param_2 + 0x48);
    uVar11 = *(ulonglong *)(param_2 + 0x50);
    bVar20 = (byte)(uVar9 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar15 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar11;
      auVar2 = *(undefined1 (*) [16])(lVar13 + uVar9);
      auVar22[0] = -(auVar2[0] == auVar21[0]);
      auVar22[1] = -(auVar2[1] == auVar21[1]);
      auVar22[2] = -(auVar2[2] == auVar21[2]);
      auVar22[3] = -(auVar2[3] == auVar21[3]);
      auVar22[4] = -(auVar2[4] == auVar21[4]);
      auVar22[5] = -(auVar2[5] == auVar21[5]);
      auVar22[6] = -(auVar2[6] == auVar21[6]);
      auVar22[7] = -(auVar2[7] == auVar21[7]);
      auVar22[8] = -(auVar2[8] == auVar21[0]);
      auVar22[9] = -(auVar2[9] == auVar21[1]);
      auVar22[10] = -(auVar2[10] == auVar21[2]);
      auVar22[0xb] = -(auVar2[0xb] == auVar21[3]);
      auVar22[0xc] = -(auVar2[0xc] == auVar21[4]);
      auVar22[0xd] = -(auVar2[0xd] == auVar21[5]);
      auVar22[0xe] = -(auVar2[0xe] == auVar21[6]);
      auVar22[0xf] = -(auVar2[0xf] == auVar21[7]);
      uVar7 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar7;
      if (uVar7 != 0) {
        do {
          uVar4 = 0;
          for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar19 = (uVar4 + uVar9 & uVar11) * -0x58;
          if (param_4 == *(longlong *)(lVar13 + -0x48 + lVar19)) {
            iVar14 = (*(code *)PTR_bcmp_00799020)();
            if (iVar14 == 0) {
              puVar1 = (ulonglong *)(lVar19 + lVar13 + -8);
              uVar11 = 0;
              if (*puVar1 <= uVar8) {
                uVar11 = uVar8 - *puVar1;
              }
              if (uVar11 <= *(ulonglong *)(param_2 + 0x80)) goto LAB_00536776;
              uVar18 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
                       ::remove::<str>(&local_d8,param_2 + 0x48,param_3,param_4);
              if (CONCAT44(uStack_d4,local_d8) != -1) {
                if (CONCAT44(uStack_d4,local_d8) != 0) {
                  uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
                }
                if (local_c0 != 0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
                }
              }
              *(undefined1 *)(param_2 + 0x90) = 1;
              goto LAB_00536913;
            }
          }
          uVar7 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar7);
        } while (uVar7 != 0);
      }
      auVar26[0] = -(auVar2[0] == -1);
      auVar26[1] = -(auVar2[1] == -1);
      auVar26[2] = -(auVar2[2] == -1);
      auVar26[3] = -(auVar2[3] == -1);
      auVar26[4] = -(auVar2[4] == -1);
      auVar26[5] = -(auVar2[5] == -1);
      auVar26[6] = -(auVar2[6] == -1);
      auVar26[7] = -(auVar2[7] == -1);
      auVar26[8] = -(auVar2[8] == -1);
      auVar26[9] = -(auVar2[9] == -1);
      auVar26[10] = -(auVar2[10] == -1);
      auVar26[0xb] = -(auVar2[0xb] == -1);
      auVar26[0xc] = -(auVar2[0xc] == -1);
      auVar26[0xd] = -(auVar2[0xd] == -1);
      auVar26[0xe] = -(auVar2[0xe] == -1);
      auVar26[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar9 = uVar9 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
LAB_00536776:
    uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_2 + 0x68,param_3,param_4);
    lVar13 = *(longlong *)(param_2 + 0x48);
    uVar11 = *(ulonglong *)(param_2 + 0x50);
    bVar20 = (byte)(uVar9 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar15 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar11;
      auVar2 = *(undefined1 (*) [16])(lVar13 + uVar9);
      auVar23[0] = -(auVar2[0] == auVar21[0]);
      auVar23[1] = -(auVar2[1] == auVar21[1]);
      auVar23[2] = -(auVar2[2] == auVar21[2]);
      auVar23[3] = -(auVar2[3] == auVar21[3]);
      auVar23[4] = -(auVar2[4] == auVar21[4]);
      auVar23[5] = -(auVar2[5] == auVar21[5]);
      auVar23[6] = -(auVar2[6] == auVar21[6]);
      auVar23[7] = -(auVar2[7] == auVar21[7]);
      auVar23[8] = -(auVar2[8] == auVar21[0]);
      auVar23[9] = -(auVar2[9] == auVar21[1]);
      auVar23[10] = -(auVar2[10] == auVar21[2]);
      auVar23[0xb] = -(auVar2[0xb] == auVar21[3]);
      auVar23[0xc] = -(auVar2[0xc] == auVar21[4]);
      auVar23[0xd] = -(auVar2[0xd] == auVar21[5]);
      auVar23[0xe] = -(auVar2[0xe] == auVar21[6]);
      auVar23[0xf] = -(auVar2[0xf] == auVar21[7]);
      uVar7 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar7;
      if (uVar7 != 0) {
        do {
          uVar4 = 0;
          for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar12 = uVar4 + uVar9 & uVar11;
          lVar19 = uVar12 * -0x58;
          if (param_4 == *(longlong *)(lVar13 + -0x48 + lVar19)) {
            lVar19 = lVar19 + lVar13;
            iVar14 = (*(code *)PTR_bcmp_00799020)(-uVar12,param_4);
            if (iVar14 == 0) {
              *(ulonglong *)(lVar19 + -8) = uVar8;
              puVar6 = PTR_clone_00798fd0;
              (*(code *)PTR_clone_00798fd0)();
              (*(code *)puVar6)();
              uVar18 = *(undefined8 *)(lVar19 + -0x10);
              local_48 = local_78;
              lStack_40 = lStack_70;
              local_58 = local_c8;
              if (local_80 == -1) goto LAB_00536913;
              param_1[1] = local_78;
              param_1[2] = lStack_70;
              param_1[3] = CONCAT44(uStack_d4,local_d8);
              param_1[4] = CONCAT44(uStack_cc,uStack_d0);
              param_1[5] = local_c8;
              *param_1 = local_80;
              param_1[6] = 1;
              lVar13 = 0x38;
              goto LAB_00536bb8;
            }
          }
          uVar7 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar7);
        } while (uVar7 != 0);
      }
      auVar27[0] = -(auVar2[0] == -1);
      auVar27[1] = -(auVar2[1] == -1);
      auVar27[2] = -(auVar2[2] == -1);
      auVar27[3] = -(auVar2[3] == -1);
      auVar27[4] = -(auVar2[4] == -1);
      auVar27[5] = -(auVar2[5] == -1);
      auVar27[6] = -(auVar2[6] == -1);
      auVar27[7] = -(auVar2[7] == -1);
      auVar27[8] = -(auVar2[8] == -1);
      auVar27[9] = -(auVar2[9] == -1);
      auVar27[10] = -(auVar2[10] == -1);
      auVar27[0xb] = -(auVar2[0xb] == -1);
      auVar27[0xc] = -(auVar2[0xc] == -1);
      auVar27[0xd] = -(auVar2[0xd] == -1);
      auVar27[0xe] = -(auVar2[0xe] == -1);
      auVar27[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar9 = uVar9 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
  }
LAB_00536913:
  uVar18 = 2;
  lVar13 = 0x30;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_2 + 0x38,param_3,param_4);
    lVar13 = *(longlong *)(param_2 + 0x18);
    uVar11 = *(ulonglong *)(param_2 + 0x20);
    bVar20 = (byte)(uVar9 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar15 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar11;
      auVar2 = *(undefined1 (*) [16])(lVar13 + uVar9);
      auVar24[0] = -(auVar2[0] == auVar21[0]);
      auVar24[1] = -(auVar2[1] == auVar21[1]);
      auVar24[2] = -(auVar2[2] == auVar21[2]);
      auVar24[3] = -(auVar2[3] == auVar21[3]);
      auVar24[4] = -(auVar2[4] == auVar21[4]);
      auVar24[5] = -(auVar2[5] == auVar21[5]);
      auVar24[6] = -(auVar2[6] == auVar21[6]);
      auVar24[7] = -(auVar2[7] == auVar21[7]);
      auVar24[8] = -(auVar2[8] == auVar21[0]);
      auVar24[9] = -(auVar2[9] == auVar21[1]);
      auVar24[10] = -(auVar2[10] == auVar21[2]);
      auVar24[0xb] = -(auVar2[0xb] == auVar21[3]);
      auVar24[0xc] = -(auVar2[0xc] == auVar21[4]);
      auVar24[0xd] = -(auVar2[0xd] == auVar21[5]);
      auVar24[0xe] = -(auVar2[0xe] == auVar21[6]);
      auVar24[0xf] = -(auVar2[0xf] == auVar21[7]);
      uVar7 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (uint)uVar7;
      if (uVar7 != 0) {
        do {
          uVar4 = 0;
          for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar19 = (uVar4 + uVar9 & uVar11) * -0x38;
          if (param_4 == *(longlong *)(lVar13 + -0x28 + lVar19)) {
            iVar14 = (*(code *)PTR_bcmp_00799020)();
            if (iVar14 == 0) {
              puVar1 = (ulonglong *)(lVar19 + lVar13 + -8);
              uVar11 = 0;
              if (*puVar1 <= uVar8) {
                uVar11 = uVar8 - *puVar1;
              }
              if (uVar11 <= *(ulonglong *)(param_2 + 0x80)) goto LAB_00536a77;
              uVar18 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
                       ::remove::<str>(&local_d8,param_2 + 0x18,param_3,param_4);
              if ((CONCAT44(uStack_d4,local_d8) != -1) && (CONCAT44(uStack_d4,local_d8) != 0)) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
              }
              *(undefined1 *)(param_2 + 0x90) = 1;
              goto LAB_00536ba9;
            }
          }
          uVar7 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar7);
        } while (uVar7 != 0);
      }
      auVar28[0] = -(auVar2[0] == -1);
      auVar28[1] = -(auVar2[1] == -1);
      auVar28[2] = -(auVar2[2] == -1);
      auVar28[3] = -(auVar2[3] == -1);
      auVar28[4] = -(auVar2[4] == -1);
      auVar28[5] = -(auVar2[5] == -1);
      auVar28[6] = -(auVar2[6] == -1);
      auVar28[7] = -(auVar2[7] == -1);
      auVar28[8] = -(auVar2[8] == -1);
      auVar28[9] = -(auVar2[9] == -1);
      auVar28[10] = -(auVar2[10] == -1);
      auVar28[0xb] = -(auVar2[0xb] == -1);
      auVar28[0xc] = -(auVar2[0xc] == -1);
      auVar28[0xd] = -(auVar2[0xd] == -1);
      auVar28[0xe] = -(auVar2[0xe] == -1);
      auVar28[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) || (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
          auVar28[0xf] < '\0') break;
      uVar9 = uVar9 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    }
LAB_00536a77:
    uVar9 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
            ::hash_one::<&str>(param_2 + 0x38,param_3,param_4);
    lVar13 = *(longlong *)(param_2 + 0x18);
    uVar11 = *(ulonglong *)(param_2 + 0x20);
    bVar20 = (byte)(uVar9 >> 0x39);
    auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
    auVar21 = pshuflw(auVar21,auVar21,0);
    lVar15 = 0;
    do {
      uVar9 = uVar9 & uVar11;
      auVar2 = *(undefined1 (*) [16])(lVar13 + uVar9);
      auVar25[0] = -(auVar2[0] == auVar21[0]);
      auVar25[1] = -(auVar2[1] == auVar21[1]);
      auVar25[2] = -(auVar2[2] == auVar21[2]);
      auVar25[3] = -(auVar2[3] == auVar21[3]);
      auVar25[4] = -(auVar2[4] == auVar21[4]);
      auVar25[5] = -(auVar2[5] == auVar21[5]);
      auVar25[6] = -(auVar2[6] == auVar21[6]);
      auVar25[7] = -(auVar2[7] == auVar21[7]);
      auVar25[8] = -(auVar2[8] == auVar21[0]);
      auVar25[9] = -(auVar2[9] == auVar21[1]);
      auVar25[10] = -(auVar2[10] == auVar21[2]);
      auVar25[0xb] = -(auVar2[0xb] == auVar21[3]);
      auVar25[0xc] = -(auVar2[0xc] == auVar21[4]);
      auVar25[0xd] = -(auVar2[0xd] == auVar21[5]);
      auVar25[0xe] = -(auVar2[0xe] == auVar21[6]);
      auVar25[0xf] = -(auVar2[0xf] == auVar21[7]);
      uVar7 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
      uVar16 = (uint)uVar7;
      if (uVar7 != 0) {
        do {
          uVar4 = 0;
          for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar12 = uVar4 + uVar9 & uVar11;
          lVar19 = uVar12 * -0x38;
          if (param_4 == *(longlong *)(lVar13 + -0x28 + lVar19)) {
            iVar14 = (*(code *)PTR_bcmp_00799020)(-uVar12,param_4);
            if (iVar14 == 0) {
              *(ulonglong *)(lVar19 + lVar13 + -8) = uVar8;
              (*(code *)PTR_clone_00798fd0)();
              if (local_98 == -1) goto LAB_00536ba9;
              if (param_4 < 0) {
LAB_00536b9b:
                (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (param_4 == 0) {
                lVar13 = 1;
              }
              else {
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                lVar13 = (*(code *)PTR___rust_alloc_00799000)();
                if (lVar13 == 0) goto LAB_00536b9b;
                (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_4);
              }
              param_1[2] = local_88;
              *param_1 = local_98;
              param_1[1] = lStack_90;
              param_1[3] = param_4;
              param_1[4] = lVar13;
              param_1[5] = param_4;
              uVar18 = 0;
              lVar13 = 0x30;
              goto LAB_00536bb8;
            }
          }
          uVar7 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar7);
        } while (uVar7 != 0);
      }
      auVar29[0] = -(auVar2[0] == -1);
      auVar29[1] = -(auVar2[1] == -1);
      auVar29[2] = -(auVar2[2] == -1);
      auVar29[3] = -(auVar2[3] == -1);
      auVar29[4] = -(auVar2[4] == -1);
      auVar29[5] = -(auVar2[5] == -1);
      auVar29[6] = -(auVar2[6] == -1);
      auVar29[7] = -(auVar2[7] == -1);
      auVar29[8] = -(auVar2[8] == -1);
      auVar29[9] = -(auVar2[9] == -1);
      auVar29[10] = -(auVar2[10] == -1);
      auVar29[0xb] = -(auVar2[0xb] == -1);
      auVar29[0xc] = -(auVar2[0xc] == -1);
      auVar29[0xd] = -(auVar2[0xd] == -1);
      auVar29[0xe] = -(auVar2[0xe] == -1);
      auVar29[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') goto LAB_00536ba9;
      uVar9 = uVar9 + lVar15 + 0x10;
      lVar15 = lVar15 + 0x10;
    } while( true );
  }
LAB_00536bb8:
  *(undefined8 *)((longlong)param_1 + lVar13) = uVar18;
  return;
LAB_00536ba9:
  lVar13 = 0x30;
  uVar18 = 2;
  goto LAB_00536bb8;
}


