// 005c35b0 <str>

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::get::<str> */

longlong __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,std[6c98fd8553dbae28]::hash::random::RandomState>>
::get::<str>(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar8 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
          ::hash_one::<&str>(param_1 + 4);
  puVar5 = PTR_bcmp_00799020;
  lVar9 = *param_1;
  uVar2 = param_1[1];
  bVar14 = (byte)(uVar8 >> 0x39);
  auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar15 = pshuflw(auVar15,auVar15,0);
  lVar11 = 0;
  while( true ) {
    uVar8 = uVar8 & uVar2;
    auVar1 = *(undefined1 (*) [16])(lVar9 + uVar8);
    auVar16[0] = -(auVar1[0] == auVar15[0]);
    auVar16[1] = -(auVar1[1] == auVar15[1]);
    auVar16[2] = -(auVar1[2] == auVar15[2]);
    auVar16[3] = -(auVar1[3] == auVar15[3]);
    auVar16[4] = -(auVar1[4] == auVar15[4]);
    auVar16[5] = -(auVar1[5] == auVar15[5]);
    auVar16[6] = -(auVar1[6] == auVar15[6]);
    auVar16[7] = -(auVar1[7] == auVar15[7]);
    auVar16[8] = -(auVar1[8] == auVar15[0]);
    auVar16[9] = -(auVar1[9] == auVar15[1]);
    auVar16[10] = -(auVar1[10] == auVar15[2]);
    auVar16[0xb] = -(auVar1[0xb] == auVar15[3]);
    auVar16[0xc] = -(auVar1[0xc] == auVar15[4]);
    auVar16[0xd] = -(auVar1[0xd] == auVar15[5]);
    auVar16[0xe] = -(auVar1[0xe] == auVar15[6]);
    auVar16[0xf] = -(auVar1[0xf] == auVar15[7]);
    uVar6 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar6;
    if (uVar6 != 0) {
      do {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar10 = uVar3 + uVar8 & uVar2;
        lVar13 = lVar9 + uVar10 * -0x20;
        if ((param_3 == *(longlong *)(lVar13 + -0x10)) &&
           (iVar7 = (*(code *)puVar5)(uVar10 * 0x20,param_3), iVar7 == 0)) goto LAB_005c36c2;
        uVar6 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar6);
      } while (uVar6 != 0);
    }
    auVar17[0] = -(auVar1[0] == -1);
    auVar17[1] = -(auVar1[1] == -1);
    auVar17[2] = -(auVar1[2] == -1);
    auVar17[3] = -(auVar1[3] == -1);
    auVar17[4] = -(auVar1[4] == -1);
    auVar17[5] = -(auVar1[5] == -1);
    auVar17[6] = -(auVar1[6] == -1);
    auVar17[7] = -(auVar1[7] == -1);
    auVar17[8] = -(auVar1[8] == -1);
    auVar17[9] = -(auVar1[9] == -1);
    auVar17[10] = -(auVar1[10] == -1);
    auVar17[0xb] = -(auVar1[0xb] == -1);
    auVar17[0xc] = -(auVar1[0xc] == -1);
    auVar17[0xd] = -(auVar1[0xd] == -1);
    auVar17[0xe] = -(auVar1[0xe] == -1);
    auVar17[0xf] = -(auVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
    uVar8 = uVar8 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  }
  lVar13 = 0;
LAB_005c36c2:
  lVar9 = lVar13 + -8;
  if (lVar13 == 0) {
    lVar9 = 0;
  }
  return lVar9;
}


