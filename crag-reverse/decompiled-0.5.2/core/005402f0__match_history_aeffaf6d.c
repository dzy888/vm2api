// 005402f0 match_history

/* craggemini_core[66f3c71560d70857]::resume::match_history */

void __rustcall
craggemini_core[66f3c71560d70857]::resume::match_history
          (ulonglong *param_1,longlong param_2,longlong param_3,ulonglong param_4,longlong param_5,
          longlong param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  undefined *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar18 = *(ulonglong *)(param_2 + 0x270);
  uVar16 = (param_4 - 1) + (ulonglong)(param_4 == 0);
  uVar17 = uVar16 - uVar18;
  if (uVar16 < uVar18) {
    uVar17 = 0;
  }
  lVar3 = *(longlong *)(param_2 + 0xb0);
  uVar16 = *(ulonglong *)(param_2 + 0xb8);
  if (uVar16 <= uVar17) {
    uVar17 = uVar16;
  }
  lVar15 = 0x10;
  uVar13 = 0;
  do {
    uVar8 = uVar17;
    if (uVar17 == uVar13) break;
    if (param_4 <= uVar18 + uVar13) {
      (*(code *)PTR_panic_bounds_check_00799520)(uVar13,&PTR_s_src_resume_rs_0078d7e8);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = uVar13;
    if (*(longlong *)(lVar3 + lVar15) != *(longlong *)(param_3 + uVar18 * 0x18 + lVar15)) break;
    iVar11 = (*(code *)PTR_bcmp_00799020)();
    lVar15 = lVar15 + 0x18;
    uVar13 = uVar13 + 1;
  } while (iVar11 == 0);
  if (uVar8 == 0) {
    if ((param_6 != 0) && (*(longlong *)(param_2 + 0x248) != 0)) {
      lVar3 = *(longlong *)(param_2 + 0x230);
      uVar17 = *(ulonglong *)(param_2 + 0x238);
      bVar9 = false;
      lVar15 = param_5;
      do {
        lVar1 = lVar15 + 0x20;
        uVar16 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                 ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 0x250,lVar15);
        bVar20 = (byte)(uVar16 >> 0x39);
        auVar22 = ZEXT216(CONCAT11(bVar20,bVar20));
        auVar22 = pshuflw(auVar22,auVar22,0);
        lVar4 = *(longlong *)(lVar15 + 0x10);
        lVar14 = 0;
        while( true ) {
          uVar16 = uVar16 & uVar17;
          auVar2 = *(undefined1 (*) [16])(lVar3 + uVar16);
          auVar21[0] = -(auVar2[0] == auVar22[0]);
          auVar21[1] = -(auVar2[1] == auVar22[1]);
          auVar21[2] = -(auVar2[2] == auVar22[2]);
          auVar21[3] = -(auVar2[3] == auVar22[3]);
          auVar21[4] = -(auVar2[4] == auVar22[4]);
          auVar21[5] = -(auVar2[5] == auVar22[5]);
          auVar21[6] = -(auVar2[6] == auVar22[6]);
          auVar21[7] = -(auVar2[7] == auVar22[7]);
          auVar21[8] = -(auVar2[8] == auVar22[0]);
          auVar21[9] = -(auVar2[9] == auVar22[1]);
          auVar21[10] = -(auVar2[10] == auVar22[2]);
          auVar21[0xb] = -(auVar2[0xb] == auVar22[3]);
          auVar21[0xc] = -(auVar2[0xc] == auVar22[4]);
          auVar21[0xd] = -(auVar2[0xd] == auVar22[5]);
          auVar21[0xe] = -(auVar2[0xe] == auVar22[6]);
          auVar21[0xf] = -(auVar2[0xf] == auVar22[7]);
          uVar10 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                   (ushort)(auVar21[0xf] >> 7) << 0xf;
          uVar19 = (uint)uVar10;
          if (uVar10 != 0) {
            do {
              uVar6 = 0;
              for (uVar7 = uVar19; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              uVar13 = uVar6 + uVar16 & uVar17;
              if ((lVar4 == *(longlong *)(lVar3 + uVar13 * -0x20 + -0x10)) &&
                 (iVar11 = (*(code *)PTR_bcmp_00799020)(uVar13 * 0x20,lVar4), iVar11 == 0)) {
                uVar16 = *(longlong *)(lVar15 + 0x18) + 1;
                if (uVar16 < param_4) {
                  if (uVar18 < uVar16) {
                    uVar18 = uVar16;
                  }
                  if (!bVar9) {
                    uVar18 = uVar16;
                  }
                  bVar9 = true;
                }
                goto LAB_00540518;
              }
              uVar10 = (ushort)(uVar19 - 1) & (ushort)uVar19;
              uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar10);
            } while (uVar10 != 0);
          }
          auVar23[0] = -(auVar2[0] == -1);
          auVar23[1] = -(auVar2[1] == -1);
          auVar23[2] = -(auVar2[2] == -1);
          auVar23[3] = -(auVar2[3] == -1);
          auVar23[4] = -(auVar2[4] == -1);
          auVar23[5] = -(auVar2[5] == -1);
          auVar23[6] = -(auVar2[6] == -1);
          auVar23[7] = -(auVar2[7] == -1);
          auVar23[8] = -(auVar2[8] == -1);
          auVar23[9] = -(auVar2[9] == -1);
          auVar23[10] = -(auVar2[10] == -1);
          auVar23[0xb] = -(auVar2[0xb] == -1);
          auVar23[0xc] = -(auVar2[0xc] == -1);
          auVar23[0xd] = -(auVar2[0xd] == -1);
          auVar23[0xe] = -(auVar2[0xe] == -1);
          auVar23[0xf] = -(auVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x2f,0) & 1) != 0) || (SUB161(auVar23 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
          uVar16 = uVar16 + lVar14 + 0x10;
          lVar14 = lVar14 + 0x10;
        }
LAB_00540518:
        lVar15 = lVar1;
      } while (lVar1 != param_6 * 0x20 + param_5);
      if (bVar9) {
        uVar17 = 0x18;
        puVar12 = &DAT_0019ba87;
        goto LAB_00540586;
      }
    }
    uVar17 = 4;
    puVar12 = &DAT_0018e03c;
    uVar18 = 0;
  }
  else {
    puVar12 = &DAT_0019ba9f;
    if (uVar8 == uVar16) {
      puVar12 = &DAT_0019baac;
    }
    uVar18 = uVar18 + uVar8;
    uVar17 = 0xd;
  }
LAB_00540586:
  *param_1 = uVar18;
  param_1[1] = (ulonglong)puVar12;
  param_1[2] = uVar17;
  return;
}


