// 0026e0f0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::{closure#0}::{closure#0}>

/* <core[c0acaeba6ab4c2e0]::ops::range::Range<usize> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::find::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::{closure#0}::{closure#0}>
    */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::find::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::_closure_0_::_closure_0_>
          (ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong local_38;
  
  uVar7 = *param_1;
  uVar3 = param_1[1];
  if (uVar7 < uVar3) {
    uVar11 = 0;
LAB_0026e198:
    uVar1 = uVar7 + 1;
    *param_1 = uVar1;
    if (*(longlong *)(param_2 + 0xb8) != 0) {
      local_38 = uVar7;
      uVar6 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
              ::hash_one::<&u64>(param_2 + 0xc0,&local_38);
      bVar12 = (byte)(uVar6 >> 0x39);
      auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
      auVar13 = pshuflw(auVar13,auVar13,0);
      lVar8 = 0;
      while( true ) {
        uVar6 = uVar6 & *(ulonglong *)(param_2 + 0xa8);
        pcVar2 = (char *)(*(longlong *)(param_2 + 0xa0) + uVar6);
        auVar15[0] = -(*pcVar2 == auVar13[0]);
        auVar15[1] = -(pcVar2[1] == auVar13[1]);
        auVar15[2] = -(pcVar2[2] == auVar13[2]);
        auVar15[3] = -(pcVar2[3] == auVar13[3]);
        auVar15[4] = -(pcVar2[4] == auVar13[4]);
        auVar15[5] = -(pcVar2[5] == auVar13[5]);
        auVar15[6] = -(pcVar2[6] == auVar13[6]);
        auVar15[7] = -(pcVar2[7] == auVar13[7]);
        auVar15[8] = -(pcVar2[8] == auVar13[0]);
        auVar15[9] = -(pcVar2[9] == auVar13[1]);
        auVar15[10] = -(pcVar2[10] == auVar13[2]);
        auVar15[0xb] = -(pcVar2[0xb] == auVar13[3]);
        auVar15[0xc] = -(pcVar2[0xc] == auVar13[4]);
        auVar15[0xd] = -(pcVar2[0xd] == auVar13[5]);
        auVar15[0xe] = -(pcVar2[0xe] == auVar13[6]);
        auVar15[0xf] = -(pcVar2[0xf] == auVar13[7]);
        uVar10 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf
        ;
        uVar9 = (uint)uVar10;
        while (uVar10 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (uVar7 == *(ulonglong *)
                        (*(longlong *)(param_2 + 0xa0) + -0xe0 +
                        (uVar4 + uVar6 & *(ulonglong *)(param_2 + 0xa8)) * -0xe0)) {
            uVar7 = uVar1;
            if (uVar1 != uVar3) goto LAB_0026e198;
            uVar7 = uVar3;
            goto LAB_0026e1f6;
          }
          uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
          uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
        }
        auVar14[0] = -(*pcVar2 == -1);
        auVar14[1] = -(pcVar2[1] == -1);
        auVar14[2] = -(pcVar2[2] == -1);
        auVar14[3] = -(pcVar2[3] == -1);
        auVar14[4] = -(pcVar2[4] == -1);
        auVar14[5] = -(pcVar2[5] == -1);
        auVar14[6] = -(pcVar2[6] == -1);
        auVar14[7] = -(pcVar2[7] == -1);
        auVar14[8] = -(pcVar2[8] == -1);
        auVar14[9] = -(pcVar2[9] == -1);
        auVar14[10] = -(pcVar2[10] == -1);
        auVar14[0xb] = -(pcVar2[0xb] == -1);
        auVar14[0xc] = -(pcVar2[0xc] == -1);
        auVar14[0xd] = -(pcVar2[0xd] == -1);
        auVar14[0xe] = -(pcVar2[0xe] == -1);
        auVar14[0xf] = -(pcVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar14 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar14 >> 0x1f,0) & 1) != 0) || (SUB161(auVar14 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar14 >> 0x37,0) & 1) != 0) || (SUB161(auVar14 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar14 >> 0x47,0) & 1) != 0) || (SUB161(auVar14 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar14 >> 0x57,0) & 1) != 0) || (SUB161(auVar14 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar14 >> 0x67,0) & 1) != 0) || (SUB161(auVar14 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar14 >> 0x77,0) & 1) != 0) || auVar14[0xf] < '\0') break;
        uVar6 = uVar6 + lVar8 + 0x10;
        lVar8 = lVar8 + 0x10;
      }
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
LAB_0026e1f6:
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = uVar11;
  return auVar13;
}


