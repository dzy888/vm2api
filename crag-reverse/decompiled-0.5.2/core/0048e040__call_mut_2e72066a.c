// 0048e040 call_mut

/* <&mut <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnMut<(&alloc[12e961f32105355]::string::String,)>>::call_mut
    */

undefined8 * __rustcall
<&mut<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnMut<(&alloc[12e961f32105355]::string::String,)>>
::call_mut(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar2 = *(longlong *)*param_2;
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
             ::hash_one::<&alloc[12e961f32105355]::string::String>(lVar2 + 0x38,param_3);
    puVar7 = PTR_bcmp_00799020;
    lVar3 = *(longlong *)(lVar2 + 0x18);
    uVar4 = *(ulonglong *)(lVar2 + 0x20);
    bVar15 = (byte)(uVar10 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar2 = *(longlong *)(param_3 + 0x10);
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar4;
      auVar1 = *(undefined1 (*) [16])(lVar3 + uVar10);
      auVar17[0] = -(auVar1[0] == auVar16[0]);
      auVar17[1] = -(auVar1[1] == auVar16[1]);
      auVar17[2] = -(auVar1[2] == auVar16[2]);
      auVar17[3] = -(auVar1[3] == auVar16[3]);
      auVar17[4] = -(auVar1[4] == auVar16[4]);
      auVar17[5] = -(auVar1[5] == auVar16[5]);
      auVar17[6] = -(auVar1[6] == auVar16[6]);
      auVar17[7] = -(auVar1[7] == auVar16[7]);
      auVar17[8] = -(auVar1[8] == auVar16[0]);
      auVar17[9] = -(auVar1[9] == auVar16[1]);
      auVar17[10] = -(auVar1[10] == auVar16[2]);
      auVar17[0xb] = -(auVar1[0xb] == auVar16[3]);
      auVar17[0xc] = -(auVar1[0xc] == auVar16[4]);
      auVar17[0xd] = -(auVar1[0xd] == auVar16[5]);
      auVar17[0xe] = -(auVar1[0xe] == auVar16[6]);
      auVar17[0xf] = -(auVar1[0xf] == auVar16[7]);
      uVar8 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar8;
      if (uVar8 != 0) {
        do {
          uVar5 = 0;
          for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar12 = uVar5 + uVar10 & uVar4;
          lVar14 = uVar12 * -0xe0;
          if (lVar2 == *(longlong *)(lVar3 + -0xd0 + lVar14)) {
            iVar9 = (*(code *)puVar7)(-uVar12,lVar2);
            if (iVar9 == 0) {
              <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_core[c0acaeba6ab4c2e0]::clone::Clone>
              ::clone(param_1,lVar14 + lVar3 + -200);
              return param_1;
            }
          }
          uVar8 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar8);
        } while (uVar8 != 0);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


