// 0048fdc0 next

/* <core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,
   <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#0}>,
   <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#1}>>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#0}>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot_for_conversation::{closure#1}>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(undefined8 *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar15 = *param_2;
  lVar2 = param_2[1];
  if (lVar15 != lVar2) {
    lVar3 = param_2[2];
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      do {
        lVar15 = lVar15 + 0x18;
      } while (lVar15 != lVar2);
      *param_2 = lVar15;
    }
    else {
      lVar4 = param_2[4];
      do {
        lVar16 = lVar15 + 0x18;
        *param_2 = lVar16;
        if (*(longlong *)(lVar3 + 0x30) != 0) {
          uVar11 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                   ::hash_one::<&alloc[12e961f32105355]::string::String>(lVar3 + 0x38);
          lVar5 = *(longlong *)(lVar3 + 0x18);
          uVar6 = *(ulonglong *)(lVar3 + 0x20);
          bVar18 = (byte)(uVar11 >> 0x39);
          auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
          auVar20 = pshuflw(auVar20,auVar20,0);
          lVar15 = *(longlong *)(lVar15 + 0x10);
          lVar14 = 0;
          while( true ) {
            uVar11 = uVar11 & uVar6;
            auVar1 = *(undefined1 (*) [16])(lVar5 + uVar11);
            auVar19[0] = -(auVar1[0] == auVar20[0]);
            auVar19[1] = -(auVar1[1] == auVar20[1]);
            auVar19[2] = -(auVar1[2] == auVar20[2]);
            auVar19[3] = -(auVar1[3] == auVar20[3]);
            auVar19[4] = -(auVar1[4] == auVar20[4]);
            auVar19[5] = -(auVar1[5] == auVar20[5]);
            auVar19[6] = -(auVar1[6] == auVar20[6]);
            auVar19[7] = -(auVar1[7] == auVar20[7]);
            auVar19[8] = -(auVar1[8] == auVar20[0]);
            auVar19[9] = -(auVar1[9] == auVar20[1]);
            auVar19[10] = -(auVar1[10] == auVar20[2]);
            auVar19[0xb] = -(auVar1[0xb] == auVar20[3]);
            auVar19[0xc] = -(auVar1[0xc] == auVar20[4]);
            auVar19[0xd] = -(auVar1[0xd] == auVar20[5]);
            auVar19[0xe] = -(auVar1[0xe] == auVar20[6]);
            auVar19[0xf] = -(auVar1[0xf] == auVar20[7]);
            uVar9 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar19[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar9;
            if (uVar9 != 0) {
              do {
                uVar7 = 0;
                for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar12 = uVar7 + uVar11 & uVar6;
                lVar13 = uVar12 * -0xe0;
                if (lVar15 == *(longlong *)(lVar5 + -0xd0 + lVar13)) {
                  lVar13 = lVar13 + lVar5;
                  iVar10 = (*(code *)PTR_bcmp_00799020)(-uVar12,lVar15);
                  if (iVar10 == 0) {
                    if (((*(longlong *)(lVar13 + -0x80) != -1) &&
                        (*(longlong *)(lVar13 + -0x70) == lVar4)) &&
                       (iVar10 = (*(code *)PTR_bcmp_00799020)(lVar2,lVar4), iVar10 == 0)) {
                      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_core[c0acaeba6ab4c2e0]::clone::Clone>
                      ::clone(param_1,lVar13 + -200);
                      return param_1;
                    }
                    goto LAB_0048ffc0;
                  }
                }
                uVar9 = (ushort)(uVar17 - 1) & (ushort)uVar17;
                uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar9);
              } while (uVar9 != 0);
            }
            auVar21[0] = -(auVar1[0] == -1);
            auVar21[1] = -(auVar1[1] == -1);
            auVar21[2] = -(auVar1[2] == -1);
            auVar21[3] = -(auVar1[3] == -1);
            auVar21[4] = -(auVar1[4] == -1);
            auVar21[5] = -(auVar1[5] == -1);
            auVar21[6] = -(auVar1[6] == -1);
            auVar21[7] = -(auVar1[7] == -1);
            auVar21[8] = -(auVar1[8] == -1);
            auVar21[9] = -(auVar1[9] == -1);
            auVar21[10] = -(auVar1[10] == -1);
            auVar21[0xb] = -(auVar1[0xb] == -1);
            auVar21[0xc] = -(auVar1[0xc] == -1);
            auVar21[0xd] = -(auVar1[0xd] == -1);
            auVar21[0xe] = -(auVar1[0xe] == -1);
            auVar21[0xf] = -(auVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
            uVar11 = uVar11 + lVar14 + 0x10;
            lVar14 = lVar14 + 0x10;
          }
        }
LAB_0048ffc0:
        lVar15 = lVar16;
      } while (lVar16 != lVar2);
    }
  }
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


