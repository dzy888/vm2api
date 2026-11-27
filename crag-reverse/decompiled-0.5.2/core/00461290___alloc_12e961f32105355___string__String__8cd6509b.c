// 00461290 <alloc[12e961f32105355]::string::String>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<alloc[12e961f32105355]::string::String>
   <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::remove::<alloc[12e961f32105355]::string::String>
    */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
::remove::<alloc[12e961f32105355]::string::String>(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ushort uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint7 uVar15;
  undefined8 uVar14;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  uVar12 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_1 + 4);
  puVar9 = PTR_bcmp_00799020;
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar3 = *param_1;
  uVar13 = param_1[1];
  bVar20 = (byte)(uVar12 >> 0x39);
  auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
  auVar21 = pshuflw(auVar21,auVar21,0);
  lVar17 = 0;
  do {
    uVar12 = uVar12 & uVar13;
    auVar23 = *(undefined1 (*) [16])(lVar3 + uVar12);
    auVar22[0] = -(auVar23[0] == auVar21[0]);
    auVar22[1] = -(auVar23[1] == auVar21[1]);
    auVar22[2] = -(auVar23[2] == auVar21[2]);
    auVar22[3] = -(auVar23[3] == auVar21[3]);
    auVar22[4] = -(auVar23[4] == auVar21[4]);
    auVar22[5] = -(auVar23[5] == auVar21[5]);
    auVar22[6] = -(auVar23[6] == auVar21[6]);
    auVar22[7] = -(auVar23[7] == auVar21[7]);
    auVar22[8] = -(auVar23[8] == auVar21[0]);
    auVar22[9] = -(auVar23[9] == auVar21[1]);
    auVar22[10] = -(auVar23[10] == auVar21[2]);
    auVar22[0xb] = -(auVar23[0xb] == auVar21[3]);
    auVar22[0xc] = -(auVar23[0xc] == auVar21[4]);
    auVar22[0xd] = -(auVar23[0xd] == auVar21[5]);
    auVar22[0xe] = -(auVar23[0xe] == auVar21[6]);
    auVar22[0xf] = -(auVar23[0xf] == auVar21[7]);
    uVar10 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
    uVar16 = (uint)uVar10;
    if (uVar10 != 0) {
      do {
        uVar7 = 0;
        for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar18 = uVar7 + uVar12 & uVar13;
        lVar19 = lVar3 + uVar18 * -0x20;
        if ((lVar2 == *(longlong *)(lVar19 + -0x10)) &&
           (iVar11 = (*(code *)puVar9)(uVar16,lVar2), iVar11 == 0)) {
          uVar13 = uVar18 - 0x10 & uVar13;
          pcVar1 = (char *)(lVar3 + uVar13);
          auVar21[0] = -(*pcVar1 == -1);
          auVar21[1] = -(pcVar1[1] == -1);
          auVar21[2] = -(pcVar1[2] == -1);
          auVar21[3] = -(pcVar1[3] == -1);
          auVar21[4] = -(pcVar1[4] == -1);
          auVar21[5] = -(pcVar1[5] == -1);
          auVar21[6] = -(pcVar1[6] == -1);
          auVar21[7] = -(pcVar1[7] == -1);
          auVar21[8] = -(pcVar1[8] == -1);
          auVar21[9] = -(pcVar1[9] == -1);
          auVar21[10] = -(pcVar1[10] == -1);
          auVar21[0xb] = -(pcVar1[0xb] == -1);
          auVar21[0xc] = -(pcVar1[0xc] == -1);
          auVar21[0xd] = -(pcVar1[0xd] == -1);
          auVar21[0xe] = -(pcVar1[0xe] == -1);
          auVar21[0xf] = -(pcVar1[0xf] == -1);
          uVar5 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
          pcVar1 = (char *)(lVar3 + uVar18);
          auVar23[0] = -(*pcVar1 == -1);
          auVar23[1] = -(pcVar1[1] == -1);
          auVar23[2] = -(pcVar1[2] == -1);
          auVar23[3] = -(pcVar1[3] == -1);
          auVar23[4] = -(pcVar1[4] == -1);
          auVar23[5] = -(pcVar1[5] == -1);
          auVar23[6] = -(pcVar1[6] == -1);
          auVar23[7] = -(pcVar1[7] == -1);
          auVar23[8] = -(pcVar1[8] == -1);
          auVar23[9] = -(pcVar1[9] == -1);
          auVar23[10] = -(pcVar1[10] == -1);
          auVar23[0xb] = -(pcVar1[0xb] == -1);
          auVar23[0xc] = -(pcVar1[0xc] == -1);
          auVar23[0xd] = -(pcVar1[0xd] == -1);
          auVar23[0xe] = -(pcVar1[0xe] == -1);
          auVar23[0xf] = -(pcVar1[0xf] == -1);
          uVar10 = 0xf;
          if (uVar5 != 0) {
            for (; uVar5 >> uVar10 == 0; uVar10 = uVar10 - 1) {
            }
          }
          sVar6 = 0;
          for (uVar16 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
                                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar23[0xf] >> 7) << 0xf) | 0x10000; (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x80000000) {
            sVar6 = sVar6 + 1;
          }
          uVar15 = (uint7)(byte)(uVar5 >> 8);
          uVar14 = CONCAT71(uVar15,0x80);
          if ((ushort)(sVar6 + (uVar10 ^ 0xf)) < 0x10) {
            param_1[2] = param_1[2] + 1;
            uVar14 = CONCAT71(uVar15,0xff);
          }
          *(char *)(lVar3 + uVar18) = (char)uVar14;
          *(char *)(lVar3 + 0x10 + uVar13) = (char)uVar14;
          param_1[3] = param_1[3] + -1;
          if (*(longlong *)(lVar19 + -0x20) == -1) {
            return 0;
          }
          uVar4 = *(undefined8 *)(lVar19 + -8);
          if (*(longlong *)(lVar19 + -0x20) == 0) {
            return uVar4;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,1);
          return uVar4;
        }
        uVar10 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar10);
      } while (uVar10 != 0);
    }
    auVar24[0] = -(auVar23[0] == -1);
    auVar24[1] = -(auVar23[1] == -1);
    auVar24[2] = -(auVar23[2] == -1);
    auVar24[3] = -(auVar23[3] == -1);
    auVar24[4] = -(auVar23[4] == -1);
    auVar24[5] = -(auVar23[5] == -1);
    auVar24[6] = -(auVar23[6] == -1);
    auVar24[7] = -(auVar23[7] == -1);
    auVar24[8] = -(auVar23[8] == -1);
    auVar24[9] = -(auVar23[9] == -1);
    auVar24[10] = -(auVar23[10] == -1);
    auVar24[0xb] = -(auVar23[0xb] == -1);
    auVar24[0xc] = -(auVar23[0xc] == -1);
    auVar24[0xd] = -(auVar23[0xd] == -1);
    auVar24[0xe] = -(auVar23[0xe] == -1);
    auVar24[0xf] = -(auVar23[0xf] == -1);
    if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
      return 0;
    }
    uVar12 = uVar12 + lVar17 + 0x10;
    lVar17 = lVar17 + 0x10;
  } while( true );
}


