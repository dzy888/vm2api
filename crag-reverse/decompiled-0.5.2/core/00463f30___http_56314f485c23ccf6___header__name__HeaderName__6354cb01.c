// 00463f30 <http[56314f485c23ccf6]::header::name::HeaderName>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<&http[56314f485c23ccf6]::header::name::HeaderName, (),
   std[6c98fd8553dbae28]::hash::random::RandomState>>::contains_key::<http[56314f485c23ccf6]::header::name::HeaderName>
    */

undefined8 __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<&http[56314f485c23ccf6]::header::name::HeaderName,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
::contains_key::<http[56314f485c23ccf6]::header::name::HeaderName>
          (longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ushort uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar10 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&http[56314f485c23ccf6]::header::name::HeaderName>(param_1 + 4);
  puVar7 = PTR_bcmp_00799020;
  lVar2 = *param_1;
  uVar3 = param_1[1];
  bVar13 = (byte)(uVar10 >> 0x39);
  auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
  auVar14 = pshuflw(auVar14,auVar14,0);
  lVar12 = 0;
  do {
    uVar10 = uVar10 & uVar3;
    auVar1 = *(undefined1 (*) [16])(lVar2 + uVar10);
    auVar15[0] = -(auVar1[0] == auVar14[0]);
    auVar15[1] = -(auVar1[1] == auVar14[1]);
    auVar15[2] = -(auVar1[2] == auVar14[2]);
    auVar15[3] = -(auVar1[3] == auVar14[3]);
    auVar15[4] = -(auVar1[4] == auVar14[4]);
    auVar15[5] = -(auVar1[5] == auVar14[5]);
    auVar15[6] = -(auVar1[6] == auVar14[6]);
    auVar15[7] = -(auVar1[7] == auVar14[7]);
    auVar15[8] = -(auVar1[8] == auVar14[0]);
    auVar15[9] = -(auVar1[9] == auVar14[1]);
    auVar15[10] = -(auVar1[10] == auVar14[2]);
    auVar15[0xb] = -(auVar1[0xb] == auVar14[3]);
    auVar15[0xc] = -(auVar1[0xc] == auVar14[4]);
    auVar15[0xd] = -(auVar1[0xd] == auVar14[5]);
    auVar15[0xe] = -(auVar1[0xe] == auVar14[6]);
    auVar15[0xf] = -(auVar1[0xf] == auVar14[7]);
    uVar8 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
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
            (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
    uVar11 = (uint)uVar8;
    if (uVar8 != 0) {
      if (*param_2 == 0) {
        do {
          uVar5 = 0;
          for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          plVar4 = *(longlong **)(lVar2 + (uVar5 + uVar10 & uVar3) * -8 + -8);
          if ((*plVar4 == 0) && ((char)param_2[1] == (char)plVar4[1])) {
            return 1;
          }
          uVar8 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar8);
        } while (uVar8 != 0);
      }
      else {
        do {
          uVar5 = 0;
          for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          plVar4 = *(longlong **)(lVar2 + (uVar5 + uVar10 & uVar3) * -8 + -8);
          if (((*plVar4 != 0) && (param_2[2] == plVar4[2])) &&
             (iVar9 = (*(code *)puVar7)(), iVar9 == 0)) {
            return 1;
          }
          uVar8 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar8);
        } while (uVar8 != 0);
      }
    }
    auVar16[0] = -(auVar1[0] == -1);
    auVar16[1] = -(auVar1[1] == -1);
    auVar16[2] = -(auVar1[2] == -1);
    auVar16[3] = -(auVar1[3] == -1);
    auVar16[4] = -(auVar1[4] == -1);
    auVar16[5] = -(auVar1[5] == -1);
    auVar16[6] = -(auVar1[6] == -1);
    auVar16[7] = -(auVar1[7] == -1);
    auVar16[8] = -(auVar1[8] == -1);
    auVar16[9] = -(auVar1[9] == -1);
    auVar16[10] = -(auVar1[10] == -1);
    auVar16[0xb] = -(auVar1[0xb] == -1);
    auVar16[0xc] = -(auVar1[0xc] == -1);
    auVar16[0xd] = -(auVar1[0xd] == -1);
    auVar16[0xe] = -(auVar1[0xe] == -1);
    auVar16[0xf] = -(auVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar16 >> 0x37,0) & 1) != 0) || (SUB161(auVar16 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar16 >> 0x47,0) & 1) != 0) || (SUB161(auVar16 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar16 >> 0x57,0) & 1) != 0) || (SUB161(auVar16 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar16 >> 0x67,0) & 1) != 0) || (SUB161(auVar16 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar16 >> 0x77,0) & 1) != 0) || auVar16[0xf] < '\0') {
      return 0;
    }
    uVar10 = uVar10 + lVar12 + 0x10;
    lVar12 = lVar12 + 0x10;
  } while( true );
}


